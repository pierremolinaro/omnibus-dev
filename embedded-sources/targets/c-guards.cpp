//---------------------------------------------------------------------------------------------------------------------*
//  G U A R D S                                                                                                        *
//---------------------------------------------------------------------------------------------------------------------*

static TaskList gDeadlineWaitingInGuardTaskList ;

//---------------------------------------------------------------------------------------------------------------------*

static void removeTaskFromGuards (TaskControlBlock * inTask) {
  const unsigned guardCount = inTask->mGuardCount ;
  for (unsigned i=0 ; i<guardCount ; i++) {
    list_removeTask (inTask->mGuardListArray [i]->mGuardValue, inTask) ;
  }
  inTask->mGuardCount = 0 ;
  list_removeTask (gDeadlineWaitingInGuardTaskList, inTask) ;
  inTask->mHaveDeadlineGuard = false ;
}

//---------------------------------------------------------------------------------------------------------------------*

void noteGuardState (const bool inAccepted) asm ("note.guard.state") ;

void noteGuardState (const bool inAccepted) {
  if (inAccepted) {
    gRunningTaskControlBlockPtr->mGuardState = GUARD_EVALUATING_OR_OUTSIDE ;
    removeTaskFromGuards (gRunningTaskControlBlockPtr) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void kernel_handleGuardedCommand (GuardList * ioGuardListPtr) asm ("!FUNC!handleGuardedCommand") ;

void kernel_handleGuardedCommand (GuardList * ioGuardListPtr) {
  if (gRunningTaskControlBlockPtr->mGuardState == GUARD_EVALUATING_OR_OUTSIDE) {
    list_enterTask (ioGuardListPtr->mGuardValue, gRunningTaskControlBlockPtr) ;
    const unsigned guardCount = gRunningTaskControlBlockPtr->mGuardCount ;
    gRunningTaskControlBlockPtr->mGuardListArray [guardCount] = ioGuardListPtr ;
    gRunningTaskControlBlockPtr->mGuardCount = guardCount + 1 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void waitForGuardChange (void) asm ("!SERVICECALL!guard.wait.for.change") ;

void kernel_waitForGuardChange (void) asm ("!SERVICEIMPLEMENTATION!guard.wait.for.change") ;

void kernel_waitForGuardChange (void) {
  gRunningTaskControlBlockPtr->mUserResult = gRunningTaskControlBlockPtr->mGuardState == GUARD_DID_CHANGE ;
  if (gRunningTaskControlBlockPtr->mUserResult) { // GUARD_DID_CHANGE
    gRunningTaskControlBlockPtr->mGuardState = GUARD_EVALUATING_OR_OUTSIDE ;
  }else{ // GUARD_EVALUATING_OR_OUTSIDE
    gRunningTaskControlBlockPtr->mUserResult = gRunningTaskControlBlockPtr->mHaveDeadlineGuard || (gRunningTaskControlBlockPtr->mGuardCount > 0) ;
    if (gRunningTaskControlBlockPtr->mUserResult) {
      gRunningTaskControlBlockPtr->mGuardState = GUARD_WAITING_FOR_CHANGE ;
      kernel_makeNoTaskRunning () ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void kernel_guardDidChange (GuardList & ioGuardList) asm ("!FUNC!notify.change.from.guard.list") ;

void kernel_guardDidChange (GuardList & ioGuardList) {
  TaskControlBlock * task ;
  while ((task = list_removeFirstTask (ioGuardList.mGuardValue))) {
    removeTaskFromGuards (task) ;
    if (task->mGuardState == GUARD_WAITING_FOR_CHANGE) {
      task->mGuardState = GUARD_EVALUATING_OR_OUTSIDE ;
      kernel_makeTaskReady (task) ;
    }else if (task->mGuardState == GUARD_EVALUATING_OR_OUTSIDE) {
      task->mGuardState = GUARD_DID_CHANGE ;
    }else{ // GUARD_DID_CHANGE
      // Nothing to do
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void handleGuardedWaitUntil (const unsigned inDeadline) asm ("!FUNC!guard.handle.wait.until") ;

void handleGuardedWaitUntil (const unsigned inDeadline) {
  if (gRunningTaskControlBlockPtr->mGuardState == GUARD_EVALUATING_OR_OUTSIDE) {
    if ((!list_containsTask (gDeadlineWaitingInGuardTaskList, gRunningTaskControlBlockPtr)) || (gRunningTaskControlBlockPtr->mTaskDeadline > inDeadline)) {
      gRunningTaskControlBlockPtr->mTaskDeadline = inDeadline ;
    }
    list_enterTask (gDeadlineWaitingInGuardTaskList, gRunningTaskControlBlockPtr) ;
    gRunningTaskControlBlockPtr->mHaveDeadlineGuard = true ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void tickHandlerForGuardedWaitUntil (const unsigned inUptime)
asm ("!FUNC!notify.change.for.guarded.wait.until") ;

void tickHandlerForGuardedWaitUntil (const unsigned inUptime) {
//   unsigned w = gDeadlineWaitingInGuardTaskList ;
  TaskListIterator iterator = list_makeIterator (gDeadlineWaitingInGuardTaskList) ;
  TaskControlBlock * task ;
  while ((task = listIterator_nextTask (iterator))) {
//     const unsigned taskIndex = __builtin_ctz (w) ;
//     w &= ~ (1 << taskIndex) ;
//     TaskControlBlock * task = & gTaskDescriptorArray [taskIndex] ;
    if (inUptime >= task->mTaskDeadline) {
      removeTaskFromGuards (task) ;
      if (task->mGuardState == GUARD_WAITING_FOR_CHANGE) {
        task->mGuardState = GUARD_EVALUATING_OR_OUTSIDE ;
        kernel_makeTaskReady (task) ;
      }else if (task->mGuardState == GUARD_EVALUATING_OR_OUTSIDE) {
        task->mGuardState = GUARD_DID_CHANGE ;
      }else{ // GUARD_DID_CHANGE
        // Nothing to do
      }
    }
  }
}

