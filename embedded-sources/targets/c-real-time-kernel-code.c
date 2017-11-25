//---------------------------------------------------------------------------------------------------------------------*

static void kernel_makeTaskReady (const unsigned inTaskIndex) {
  gReadyTaskList |= 1 << inTaskIndex ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void kernel_makeNoTaskRunning (void) {
  gRunningTaskControlBlock = (TaskControlBlock *) 0 ;
}

//---------------------------------------------------------------------------------------------------------------------*

void kernel_selectTaskToRun (void) ;

void kernel_selectTaskToRun (void) {
  if (gRunningTaskControlBlock != ((TaskControlBlock *) 0)) {
    gReadyTaskList |= 1 << gRunningTaskControlBlock->mTaskIndex ;
    gRunningTaskControlBlock = (TaskControlBlock *) 0 ;
  }
  if (gReadyTaskList != 0) {
    const unsigned runningTaskIndex = countTrainingZeros (gReadyTaskList) ;
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
  taskControlBlockPtr->mTaskDeadline = 0 ; // statically initialized to 0
  taskControlBlockPtr->mWaitingList = (TaskList *) 0 ; // statically initialized to 0
  taskControlBlockPtr->mResultPointer = (bool *) 0 ; // statically initialized to 0
  taskControlBlockPtr->mGuardCount = 0 ; // statically initialized to 0
  taskControlBlockPtr->mHaveDeadlineGuard = false ; // statically initialized to 0
  taskControlBlockPtr->mGuardState = GUARD_EVALUATING_OR_OUTSIDE ; // statically initialized to 0
//--- Store stack parameters
  taskControlBlockPtr->mStackBufferAddress = inStackBufferAddress ;
  taskControlBlockPtr->mStackBufferSize = inStackBufferSize ;
//--- Initialize Context
  kernel_set_task_context (taskControlBlockPtr, inTaskRoutine) ;
//--- Make task ready
  kernel_makeTaskReady (inTaskIndex) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   kernel_self_terminate                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

void kernel_self_terminate (void) asm ("!SERVICEIMPLEMENTATION!self.terminate") ;

void kernel_self_terminate (void) {
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
  gRunningTaskControlBlock->mWaitingList = ioWaitingList ;
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

void blockInListAndOnDeadline (TaskList * ioWaitingList, const unsigned inDeadline, bool * inResultPointer)
asm ("!FUNC!block.in.list.and.on.deadline") ;

void blockInListAndOnDeadline (TaskList * ioWaitingList, const unsigned inDeadline, bool * inResultPointer) {
  const unsigned currentTaskIndex = gRunningTaskControlBlock->mTaskIndex ;
//--- Insert in tool list
  *ioWaitingList |= 1 << currentTaskIndex ;
  gRunningTaskControlBlock->mWaitingList = ioWaitingList ;
//--- Insert in deadline list
  gDeadlineWaitingTaskList |= 1 << currentTaskIndex ;
  gRunningTaskControlBlock->mTaskDeadline = inDeadline ;
//--- Note boolean result address
  gRunningTaskControlBlock->mResultPointer = inResultPointer ;
//--- Block task
  kernel_makeNoTaskRunning () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//  M A K E    T A S K    R E A D Y                                                                                    *
//---------------------------------------------------------------------------------------------------------------------*

void makeTaskReadyFromBlockingList (TaskList * ioWaitingList, bool * outFound) asm ("!FUNC!makeTaskReady") ;

void makeTaskReadyFromBlockingList (TaskList * ioWaitingList, bool * outFound) {
  *outFound = (* ioWaitingList) != 0 ;
  if (*outFound) {
  //--- Get index of waiting task
    const unsigned taskIndex = countTrainingZeros (* ioWaitingList) ;
    TaskControlBlock * taskControlBlockPtr = & gTaskDescriptorArray [taskIndex] ;
  //--- Remove task from deadline list
    gDeadlineWaitingTaskList &= ~ (1 << taskIndex) ;
  //--- Remove task from waiting list
    *(ioWaitingList) &= ~ (1 << taskIndex) ;
  //--- Clear task waiting list pointer
    taskControlBlockPtr->mWaitingList = (TaskList *) 0 ;
  //--- Set return code to 1
    if (taskControlBlockPtr->mResultPointer != (bool *) 0) {
      *(taskControlBlockPtr->mResultPointer) = 1 ;
      taskControlBlockPtr->mResultPointer = (bool *) 0 ;
    }
    kernel_set_return_code (& taskControlBlockPtr->mTaskContext, 1) ;
  //--- Make task ready
    kernel_makeTaskReady (taskIndex) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void makeTasksReadyFromCurrentDate (const unsigned inCurrentDate) asm ("!FUNC!makeTasksReadyFromCurrentDate") ;

void makeTasksReadyFromCurrentDate (const unsigned inCurrentDate) {
  unsigned w = gDeadlineWaitingTaskList ;
  while (w > 0) {
    const unsigned taskIndex = countTrainingZeros (w) ;
    w &= ~ (1 << taskIndex) ;
    TaskControlBlock * taskControlBlockPtr = & gTaskDescriptorArray [taskIndex] ;
    if (inCurrentDate >= taskControlBlockPtr->mTaskDeadline) {
    //--- Remove task from deadline list
      gDeadlineWaitingTaskList &= ~ (1 << taskIndex) ;
    //--- Remove task for waiting list ?
      if (taskControlBlockPtr->mWaitingList != (TaskList *) 0) {
        *(taskControlBlockPtr->mWaitingList) &= ~ (1 << taskIndex) ;
        taskControlBlockPtr->mWaitingList = (TaskList *) 0 ;
      }
  //--- Set return code to 0
    if (taskControlBlockPtr->mResultPointer != (bool *) 0) {
      *(taskControlBlockPtr->mResultPointer) = 0 ;
      taskControlBlockPtr->mResultPointer = (bool *) 0 ;
    }
    kernel_set_return_code (& taskControlBlockPtr->mTaskContext, 0) ;
  //--- Make task ready
      kernel_makeTaskReady (taskIndex) ;
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

extern GuardState taskGuardState (const unsigned inIndex)  asm ("!FUNC!taskGuardState") ;

extern GuardState taskGuardState (const unsigned inIndex) {
  return gTaskDescriptorArray [inIndex].mGuardState ;
}

//---------------------------------------------------------------------------------------------------------------------*
//  T A S K    N A M E                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

extern const char * taskName (const unsigned inIndex)  asm ("!FUNC!taskName") ;

extern const char * taskName (const unsigned inIndex) {
  return gTaskDescriptorArray [inIndex].mTaskName ;
}

//---------------------------------------------------------------------------------------------------------------------*
//  T A S K    F R E E   S T A S K    S I Z E                                                                          *
//---------------------------------------------------------------------------------------------------------------------*

extern unsigned taskFreeStackSize (const unsigned inIndex)  asm ("!FUNC!taskFreeStackSize") ;

extern unsigned taskFreeStackSize (const unsigned inIndex) {
  return gTaskDescriptorArray [inIndex].mStackFreeSize ;
}

//---------------------------------------------------------------------------------------------------------------------*
//  T A S K    A L L O C A T E D   S T A S K    S I Z E                                                                *
//---------------------------------------------------------------------------------------------------------------------*

extern unsigned taskAllocatedStackSize (const unsigned inIndex)  asm ("!FUNC!taskAllocatedStackSize") ;

extern unsigned taskAllocatedStackSize (const unsigned inIndex) {
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

void noteGuardHasBeenAccepted (void) asm ("noteGuardHasBeenAccepted") ;

void noteGuardHasBeenAccepted (void) {
  gRunningTaskControlBlock->mGuardState = GUARD_EVALUATING_OR_OUTSIDE ;
  removeTaskFromGuards (gRunningTaskControlBlock) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void kernel_handleGuardedCommand (GuardList * ioGuardList) asm ("!FUNC!handleGuardedCommand") ;

void kernel_handleGuardedCommand (GuardList * ioGuardList) {
  if (gRunningTaskControlBlock->mGuardState == GUARD_EVALUATING_OR_OUTSIDE) {
    const unsigned runningTaskIndex = gRunningTaskControlBlock->mTaskIndex ;
    ioGuardList->mGuardValue |= 1 << runningTaskIndex ;
    const unsigned guardCount = gRunningTaskControlBlock->mGuardCount ;
    gRunningTaskControlBlock->mGuardListArray [guardCount] = ioGuardList ;
    gRunningTaskControlBlock->mGuardCount = guardCount + 1 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void handleGuardedWaitUntil (const unsigned inDeadline) asm ("!FUNC!handleGuardedWaitUntil") ;

void handleGuardedWaitUntil (const unsigned inDeadline) {
  if (gRunningTaskControlBlock->mGuardState == GUARD_EVALUATING_OR_OUTSIDE) {
    gRunningTaskControlBlock->mHaveDeadlineGuard = true ;
    const unsigned runningTaskIndex = gRunningTaskControlBlock->mTaskIndex ;
    const unsigned mask = 1 << runningTaskIndex ;
    if (((gDeadlineWaitingInGuardTaskList & mask) == 0) || (gRunningTaskControlBlock->mTaskDeadline > inDeadline)) {
      gRunningTaskControlBlock->mTaskDeadline = inDeadline ;
    }
    gDeadlineWaitingInGuardTaskList |= mask ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

bool waitForGuardChange (void) asm ("!SERVICECALL!wait.for.guard.change") ;

bool kernel_waitForGuardChange (void) asm ("!SERVICEIMPLEMENTATION!wait.for.guard.change") ;

bool kernel_waitForGuardChange (void) {
  bool result = gRunningTaskControlBlock->mGuardState == GUARD_DID_CHANGE ;
  if (result) { // GUARD_DID_CHANGE
    gRunningTaskControlBlock->mGuardState = GUARD_EVALUATING_OR_OUTSIDE ;
  }else{ // GUARD_EVALUATING_OR_OUTSIDE
    result = gRunningTaskControlBlock->mHaveDeadlineGuard || (gRunningTaskControlBlock->mGuardCount > 0) ;
    if (result) {
      gRunningTaskControlBlock->mGuardState = GUARD_WAITING_FOR_CHANGE ;
      kernel_makeNoTaskRunning () ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void kernel_guardDidChange (GuardList * ioGuardList) asm ("!FUNC!notify.change.from.guard.list") ;

void kernel_guardDidChange (GuardList * ioGuardList) {
  while (ioGuardList->mGuardValue > 0) {
    const unsigned taskIndex = countTrainingZeros (ioGuardList->mGuardValue) ;
    ioGuardList->mGuardValue &= ~ (1 << taskIndex) ;
    TaskControlBlock * taskControlBlockPtr = & gTaskDescriptorArray [taskIndex] ;
    removeTaskFromGuards (taskControlBlockPtr) ;
    if (taskControlBlockPtr->mGuardState == GUARD_WAITING_FOR_CHANGE) {
      kernel_set_return_code (& taskControlBlockPtr->mTaskContext, 1) ;
      kernel_makeTaskReady (taskIndex) ;
      taskControlBlockPtr->mGuardState = GUARD_EVALUATING_OR_OUTSIDE ;
    }else if (taskControlBlockPtr->mGuardState == GUARD_EVALUATING_OR_OUTSIDE) {
      taskControlBlockPtr->mGuardState = GUARD_DID_CHANGE ;
    }else{ // GUARD_DID_CHANGE
      // Nothing to do
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void tickHandlerForGuardedWaitUntil (const unsigned inUptime)
asm ("!FUNC!notify.change.for.guarded.wait.until") ;

void tickHandlerForGuardedWaitUntil (const unsigned inUptime) {
  unsigned w = gDeadlineWaitingInGuardTaskList ;
  while (w > 0) {
    const unsigned taskIndex = countTrainingZeros (w) ;
    w &= ~ (1 << taskIndex) ;
    TaskControlBlock * taskControlBlockPtr = & gTaskDescriptorArray [taskIndex] ;
    if (inUptime >= taskControlBlockPtr->mTaskDeadline) {
      removeTaskFromGuards (taskControlBlockPtr) ;
      if (taskControlBlockPtr->mGuardState == GUARD_WAITING_FOR_CHANGE) {
        taskControlBlockPtr->mGuardState = GUARD_EVALUATING_OR_OUTSIDE ;
        kernel_set_return_code (& taskControlBlockPtr->mTaskContext, 1) ;
        kernel_makeTaskReady (taskIndex) ;
      }else if (taskControlBlockPtr->mGuardState == GUARD_EVALUATING_OR_OUTSIDE) {
        taskControlBlockPtr->mGuardState = GUARD_DID_CHANGE ;
      }else{ // GUARD_DID_CHANGE
        // Nothing to do
      }
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*
