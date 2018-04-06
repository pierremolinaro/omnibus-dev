//---------------------------------------------------------------------------------------------------------------------*
//  G U A R D S                                                                                                        *
//---------------------------------------------------------------------------------------------------------------------*

static DeadlineList gDeadlineWaitingInGuardTaskList ;

//---------------------------------------------------------------------------------------------------------------------*

// static void removeTaskFromGuards (TaskControlBlock * inTask) __attribute__ ((always_inline)) ;

static void removeTaskFromGuards (TaskControlBlock * inTask) {
  guardDescriptor_removeAllGuards (inTask->mGuardDescriptor, inTask) ;
  deadlinelist_removeTask (gDeadlineWaitingInGuardTaskList, inTask) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void acceptGuard (void) asm ("accept.guard") ;

void acceptGuard (void) {
  gRunningTaskControlBlockPtr->mGuardState = GUARD_EVALUATING_OR_OUTSIDE ;
  removeTaskFromGuards (gRunningTaskControlBlockPtr) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void kernel_handleGuardedCommand (GuardList * ioGuardListPtr) asm ("!FUNC!handleGuardedCommand") ;

void kernel_handleGuardedCommand (GuardList * ioGuardListPtr) {
  if (gRunningTaskControlBlockPtr->mGuardState == GUARD_EVALUATING_OR_OUTSIDE) {
    guardlist_enterTask (* (ioGuardListPtr), gRunningTaskControlBlockPtr) ;
    guardDescriptor_appendGuard (gRunningTaskControlBlockPtr->mGuardDescriptor, ioGuardListPtr) ;
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
    bool hasGuards = deadlinelist_containsTask (gDeadlineWaitingInGuardTaskList, gRunningTaskControlBlockPtr) ;
    if (! hasGuards) {
      hasGuards = gRunningTaskControlBlockPtr->mGuardDescriptor.mCount > 0 ;
    }
    if (hasGuards) {
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
    if (!deadlinelist_containsTask (gDeadlineWaitingInGuardTaskList, gRunningTaskControlBlockPtr)) {
      deadlinelist_enterTask (gDeadlineWaitingInGuardTaskList, gRunningTaskControlBlockPtr) ;
      gRunningTaskControlBlockPtr->mTaskDeadline = inDeadline ;
    }else if (gRunningTaskControlBlockPtr->mTaskDeadline > inDeadline) {
      gRunningTaskControlBlockPtr->mTaskDeadline = inDeadline ;
    }
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

//---------------------------------------------------------------------------------------------------------------------*
