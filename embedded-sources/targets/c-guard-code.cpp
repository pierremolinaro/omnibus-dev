//---------------------------------------------------------------------------------------------------------------------*
//  G U A R D S                                                                                                        *
//---------------------------------------------------------------------------------------------------------------------*

static DeadlineList gDeadlineWaitingInGuardTaskList ;

//---------------------------------------------------------------------------------------------------------------------*

static void removeTaskFromGuards (TaskControlBlock * inTask) {
  const unsigned guardCount = inTask->mGuardCount ;
  for (unsigned i=0 ; i<guardCount ; i++) {
    guardlist_removeTask (* (inTask->mGuardListArray [i]), inTask) ;
  }
  inTask->mGuardCount = 0 ;
  deadlinelist_removeTask (gDeadlineWaitingInGuardTaskList, inTask) ;
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
    guardlist_enterTask (* (ioGuardListPtr), gRunningTaskControlBlockPtr) ;
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
  while ((task = guardlist_removeFirstTask (ioGuardList))) {
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
    if ((!deadlinelist_containsTask (gDeadlineWaitingInGuardTaskList, gRunningTaskControlBlockPtr)) || (gRunningTaskControlBlockPtr->mTaskDeadline > inDeadline)) {
      gRunningTaskControlBlockPtr->mTaskDeadline = inDeadline ;
    }
    deadlinelist_enterTask (gDeadlineWaitingInGuardTaskList, gRunningTaskControlBlockPtr) ;
    gRunningTaskControlBlockPtr->mHaveDeadlineGuard = true ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void tickHandlerForGuardedWaitUntil (const unsigned inUptime)
asm ("!FUNC!notify.change.for.guarded.wait.until") ;

void tickHandlerForGuardedWaitUntil (const unsigned inUptime) {
  DeadlineListIterator iterator = deadlinelist_makeIterator (gDeadlineWaitingInGuardTaskList) ;
  TaskControlBlock * task ;
  while ((task = deadlinelistIterator_nextTask (iterator))) {
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

