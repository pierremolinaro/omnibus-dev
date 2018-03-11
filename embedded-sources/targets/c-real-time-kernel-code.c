//---------------------------------------------------------------------------------------------------------------------*

bool userResult (void) asm ("xtr.user.result") ;

bool userResult (void) {
  return gRunningTaskControlBlock->mUserResult ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void kernel_makeTaskReady (TaskControlBlock * inTaskControlBlockPtr) {
  gReadyTaskList |= 1 << inTaskControlBlockPtr->mTaskIndex ;
  inTaskControlBlockPtr->mUserResult = 1 ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void kernel_makeNoTaskRunning (void) {
  gRunningTaskControlBlock = (TaskControlBlock *) 0 ; // No running task
}

//---------------------------------------------------------------------------------------------------------------------*

void kernel_selectTaskToRun (void) ;

void kernel_selectTaskToRun (void) {
  if (gRunningTaskControlBlock != ((TaskControlBlock *) 0)) {
    gReadyTaskList |= 1 << gRunningTaskControlBlock->mTaskIndex ;
    gRunningTaskControlBlock = (TaskControlBlock *) 0 ;
  }
  if (gReadyTaskList != 0) {
    const unsigned runningTaskIndex = __builtin_ctz (gReadyTaskList) ;
    gReadyTaskList &= ~ (1 << runningTaskIndex) ;
    gRunningTaskControlBlock = & gTaskDescriptorArray [runningTaskIndex] ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//   kernel_create_task                                                                                                *
//---------------------------------------------------------------------------------------------------------------------*

void kernel_create_task (const unsigned inTaskIndex,
                         const char * inTaskName,
                         unsigned * inStackBufferAddress,
                         unsigned inStackBufferSize,
                         RoutineTaskType inTaskRoutine) ;

void kernel_create_task (const unsigned inTaskIndex,
                         const char * inTaskName,
                         unsigned * inStackBufferAddress,
                         unsigned inStackBufferSize,
                         RoutineTaskType inTaskRoutine) {
  TaskControlBlock * taskControlBlockPtr = & gTaskDescriptorArray [inTaskIndex] ;
  taskControlBlockPtr->mTaskIndex = (unsigned char) inTaskIndex ;
  taskControlBlockPtr->mTaskName = inTaskName ;
//  taskControlBlockPtr->mTaskDeadline = 0 ; // statically initialized to 0
  taskControlBlockPtr->mGuardCount = 0 ; // statically initialized to 0
  taskControlBlockPtr->mHaveDeadlineGuard = false ; // statically initialized to 0
//  taskControlBlockPtr->mUserResult = false ; // statically initialized to 0
  taskControlBlockPtr->mGuardState = GUARD_EVALUATING_OR_OUTSIDE ; // statically initialized to 0
//--- Store stack parameters
  taskControlBlockPtr->mStackBufferAddress = inStackBufferAddress ;
  taskControlBlockPtr->mStackBufferSize = inStackBufferSize ;
//--- Initialize Context
  kernel_set_task_context (taskControlBlockPtr, inTaskRoutine) ;
//--- Make task ready
  kernel_makeTaskReady (taskControlBlockPtr) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   kernel_self_terminate                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

void kernel_running_task_auto_blocks (void) asm ("!SERVICEIMPLEMENTATION!xtr.auto.block") ;

void kernel_running_task_auto_blocks (void) {
  kernel_makeNoTaskRunning () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   L I S T    M A N A G E M E N T                                                                                    *
//---------------------------------------------------------------------------------------------------------------------*

static TaskList gDeadlineWaitingTaskList ;

//---------------------------------------------------------------------------------------------------------------------*
//  B L O C K I N G    R U N N I N G    T A S K                                                                        *
//---------------------------------------------------------------------------------------------------------------------*

void blockInList (TaskList * ioWaitingList) asm ("!FUNC!blockInList") ;

void blockInList (TaskList * ioWaitingList) {
  const unsigned currentTaskIndex = gRunningTaskControlBlock->mTaskIndex ;
//--- Insert in tool list
  *ioWaitingList |= 1 << currentTaskIndex ;
//--- Block task
  kernel_makeNoTaskRunning () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void blockOnDeadline (const unsigned inDeadline) asm ("!FUNC!blockOnDeadline") ;

void blockOnDeadline (const unsigned inDeadline) {
  const unsigned currentTaskIndex = gRunningTaskControlBlock->mTaskIndex ;
//--- Insert in deadline list
  gDeadlineWaitingTaskList |= 1 << currentTaskIndex ;
  gRunningTaskControlBlock->mTaskDeadline = inDeadline ;
  kernel_makeNoTaskRunning () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//  M A K E    T A S K    R E A D Y                                                                                    *
//---------------------------------------------------------------------------------------------------------------------*

void makeTaskReadyFromBlockingList (TaskList * ioWaitingList, bool * outFound) asm ("!FUNC!makeTaskReady") ;

void makeTaskReadyFromBlockingList (TaskList * ioWaitingList, bool * outFound) {
  *outFound = (*ioWaitingList) != 0 ;
  if (*outFound) {
  //--- Get index of waiting task
    const unsigned taskIndex = __builtin_ctz (*ioWaitingList) ;
    TaskControlBlock * taskControlBlockPtr = & gTaskDescriptorArray [taskIndex] ;
  //--- Remove task from waiting list
    *(ioWaitingList) &= ~ (1 << taskIndex) ;
  //--- Make task ready
    kernel_makeTaskReady (taskControlBlockPtr) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void makeTasksReadyFromCurrentDate (const unsigned inCurrentDate) asm ("!FUNC!makeTasksReadyFromCurrentDate") ;

void makeTasksReadyFromCurrentDate (const unsigned inCurrentDate) {
  unsigned w = gDeadlineWaitingTaskList ;
  while (w > 0) {
    const unsigned taskIndex = __builtin_ctz (w) ;
    const unsigned mask = ~ (1 << taskIndex) ;
    w &= mask ;
    TaskControlBlock * taskControlBlockPtr = & gTaskDescriptorArray [taskIndex] ;
    if (inCurrentDate >= taskControlBlockPtr->mTaskDeadline) {
    //--- Remove task from deadline list
      gDeadlineWaitingTaskList &= mask ;
   //--- Make task ready
      kernel_makeTaskReady (taskControlBlockPtr) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//  G E T T I N G    F R E E    S T A C K    S I Z E                                                                   *
//---------------------------------------------------------------------------------------------------------------------*

unsigned freeStackSize (void) asm ("!FUNC!freeStackSize") ;

unsigned freeStackSize (void) {
  return gRunningTaskControlBlock->mStackFreeSize ;
}

//---------------------------------------------------------------------------------------------------------------------*
//  N O T E    F R E E    S T A C K    S I Z E  (callable by task)                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void noteFreeStackSize (void) asm ("!FUNC!noteFreeStackSize") ;

void noteFreeStackSize (void) {
//--- Get stack pointer current value
  unsigned stackPointer ; __asm__ ("mov %0, sp" : "=r" (stackPointer)) ;
//--- Compute current free stack size
  const unsigned currentFreeStack = stackPointer - (unsigned) gRunningTaskControlBlock->mStackBufferAddress ;
//--- If current free stack size lower than registered free stack size, assign new value
  if (currentFreeStack < gRunningTaskControlBlock->mStackFreeSize) {
    gRunningTaskControlBlock->mStackFreeSize = currentFreeStack ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//  T A S K    C O U N T                                                                                               *
//---------------------------------------------------------------------------------------------------------------------*

unsigned taskCount (void) asm ("!FUNC!taskCount") ;

unsigned taskCount (void) {
  return TASK_COUNT ;
}

//---------------------------------------------------------------------------------------------------------------------*
//  T A S K    G U A R D   S T A T E                                                                                   *
//---------------------------------------------------------------------------------------------------------------------*

GuardState taskGuardState (const unsigned inIndex)  asm ("!FUNC!taskGuardState") ;

GuardState taskGuardState (const unsigned inIndex) {
  return gTaskDescriptorArray [inIndex].mGuardState ;
}

//---------------------------------------------------------------------------------------------------------------------*
//  T A S K    N A M E                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

const char * taskName (const unsigned inIndex)  asm ("!FUNC!taskName") ;

const char * taskName (const unsigned inIndex) {
  return gTaskDescriptorArray [inIndex].mTaskName ;
}

//---------------------------------------------------------------------------------------------------------------------*
//  T A S K    F R E E   S T A S K    S I Z E                                                                          *
//---------------------------------------------------------------------------------------------------------------------*

unsigned taskFreeStackSize (const unsigned inIndex)  asm ("!FUNC!taskFreeStackSize") ;

unsigned taskFreeStackSize (const unsigned inIndex) {
  return gTaskDescriptorArray [inIndex].mStackFreeSize ;
}

//---------------------------------------------------------------------------------------------------------------------*
//  T A S K    A L L O C A T E D   S T A S K    S I Z E                                                                *
//---------------------------------------------------------------------------------------------------------------------*

unsigned taskAllocatedStackSize (const unsigned inIndex)  asm ("!FUNC!taskAllocatedStackSize") ;

unsigned taskAllocatedStackSize (const unsigned inIndex) {
  return gTaskDescriptorArray [inIndex].mStackBufferSize ;
}

//---------------------------------------------------------------------------------------------------------------------*
//  G U A R D S                                                                                                        *
//---------------------------------------------------------------------------------------------------------------------*

static TaskList gDeadlineWaitingInGuardTaskList ;

//---------------------------------------------------------------------------------------------------------------------*

static void removeTaskFromGuards (TaskControlBlock * taskControlBlockPtr) {
  const unsigned mask = ~ (1 << taskControlBlockPtr->mTaskIndex) ;
  const unsigned guardCount = taskControlBlockPtr->mGuardCount ;
  for (unsigned i=0 ; i<guardCount ; i++) {
    taskControlBlockPtr->mGuardListArray [i]->mGuardValue &= mask ;
  }
  taskControlBlockPtr->mGuardCount = 0 ;
  gDeadlineWaitingInGuardTaskList &= mask ;
  taskControlBlockPtr->mHaveDeadlineGuard = false ;
}

//---------------------------------------------------------------------------------------------------------------------*

void noteGuardState (const bool inAccepted) asm ("note.guard.state") ;

void noteGuardState (const bool inAccepted) {
  if (inAccepted) {
    gRunningTaskControlBlock->mGuardState = GUARD_EVALUATING_OR_OUTSIDE ;
    removeTaskFromGuards (gRunningTaskControlBlock) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void kernel_handleGuardedCommand (GuardList * ioGuardListPtr) asm ("!FUNC!handleGuardedCommand") ;

void kernel_handleGuardedCommand (GuardList * ioGuardListPtr) {
  if (gRunningTaskControlBlock->mGuardState == GUARD_EVALUATING_OR_OUTSIDE) {
    const unsigned runningTaskIndex = gRunningTaskControlBlock->mTaskIndex ;
    ioGuardListPtr->mGuardValue |= 1 << runningTaskIndex ;
    const unsigned guardCount = gRunningTaskControlBlock->mGuardCount ;
    gRunningTaskControlBlock->mGuardListArray [guardCount] = ioGuardListPtr ;
    gRunningTaskControlBlock->mGuardCount = guardCount + 1 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void waitForGuardChange (void) asm ("!SERVICECALL!guard.wait.for.change") ;

void kernel_waitForGuardChange (void) asm ("!SERVICEIMPLEMENTATION!guard.wait.for.change") ;

void kernel_waitForGuardChange (void) {
  gRunningTaskControlBlock->mUserResult = gRunningTaskControlBlock->mGuardState == GUARD_DID_CHANGE ;
  if (gRunningTaskControlBlock->mUserResult) { // GUARD_DID_CHANGE
    gRunningTaskControlBlock->mGuardState = GUARD_EVALUATING_OR_OUTSIDE ;
  }else{ // GUARD_EVALUATING_OR_OUTSIDE
    gRunningTaskControlBlock->mUserResult = gRunningTaskControlBlock->mHaveDeadlineGuard || (gRunningTaskControlBlock->mGuardCount > 0) ;
    if (gRunningTaskControlBlock->mUserResult) {
      gRunningTaskControlBlock->mGuardState = GUARD_WAITING_FOR_CHANGE ;
      kernel_makeNoTaskRunning () ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void kernel_guardDidChange (GuardList * ioGuardListPtr) asm ("!FUNC!notify.change.from.guard.list") ;

void kernel_guardDidChange (GuardList * ioGuardListPtr) {
  while (ioGuardListPtr->mGuardValue > 0) {
    const unsigned taskIndex = __builtin_ctz (ioGuardListPtr->mGuardValue) ;
    ioGuardListPtr->mGuardValue &= ~ (1 << taskIndex) ;
    TaskControlBlock * taskControlBlockPtr = & gTaskDescriptorArray [taskIndex] ;
    removeTaskFromGuards (taskControlBlockPtr) ;
    if (taskControlBlockPtr->mGuardState == GUARD_WAITING_FOR_CHANGE) {
      taskControlBlockPtr->mGuardState = GUARD_EVALUATING_OR_OUTSIDE ;
      kernel_makeTaskReady (taskControlBlockPtr) ;
    }else if (taskControlBlockPtr->mGuardState == GUARD_EVALUATING_OR_OUTSIDE) {
      taskControlBlockPtr->mGuardState = GUARD_DID_CHANGE ;
    }else{ // GUARD_DID_CHANGE
      // Nothing to do
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void handleGuardedWaitUntil (const unsigned inDeadline) asm ("!FUNC!guard.handle.wait.until") ;

void handleGuardedWaitUntil (const unsigned inDeadline) {
  if (gRunningTaskControlBlock->mGuardState == GUARD_EVALUATING_OR_OUTSIDE) {
    const unsigned runningTaskIndex = gRunningTaskControlBlock->mTaskIndex ;
    const unsigned mask = 1 << runningTaskIndex ;
    if (((gDeadlineWaitingInGuardTaskList & mask) == 0) || (gRunningTaskControlBlock->mTaskDeadline > inDeadline)) {
      gRunningTaskControlBlock->mTaskDeadline = inDeadline ;
    }
    gDeadlineWaitingInGuardTaskList |= mask ;
    gRunningTaskControlBlock->mHaveDeadlineGuard = true ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void tickHandlerForGuardedWaitUntil (const unsigned inUptime)
asm ("!FUNC!notify.change.for.guarded.wait.until") ;

void tickHandlerForGuardedWaitUntil (const unsigned inUptime) {
  unsigned w = gDeadlineWaitingInGuardTaskList ;
  while (w > 0) {
    const unsigned taskIndex = __builtin_ctz (w) ;
    w &= ~ (1 << taskIndex) ;
    TaskControlBlock * taskControlBlockPtr = & gTaskDescriptorArray [taskIndex] ;
    if (inUptime >= taskControlBlockPtr->mTaskDeadline) {
      removeTaskFromGuards (taskControlBlockPtr) ;
      if (taskControlBlockPtr->mGuardState == GUARD_WAITING_FOR_CHANGE) {
        taskControlBlockPtr->mGuardState = GUARD_EVALUATING_OR_OUTSIDE ;
        kernel_makeTaskReady (taskControlBlockPtr) ;
      }else if (taskControlBlockPtr->mGuardState == GUARD_EVALUATING_OR_OUTSIDE) {
        taskControlBlockPtr->mGuardState = GUARD_DID_CHANGE ;
      }else{ // GUARD_DID_CHANGE
        // Nothing to do
      }
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*
