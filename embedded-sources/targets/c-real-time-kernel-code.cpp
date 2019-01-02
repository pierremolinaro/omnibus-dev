//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
//   S C H E D U L E R
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

static TaskList gReadyTaskList ;

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

static void kernel_makeNoTaskRunning (void) {
  gRunningTaskControlBlockPtr = nullptr ; // No running task
}

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

static void kernel_makeTaskReady (TaskControlBlock * inTaskControlBlockPtr) {
  list_enterTask (gReadyTaskList, inTaskControlBlockPtr) ;
  inTaskControlBlockPtr->mUserResult = 1 ;
}

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

void kernel_selectTaskToRun (void) asm ("kernel_selectTaskToRun") ;

void kernel_selectTaskToRun (void) {
  if (gRunningTaskControlBlockPtr != nullptr) {
    list_enterTask (gReadyTaskList, gRunningTaskControlBlockPtr) ;
  }
  gRunningTaskControlBlockPtr = list_removeFirstTask (gReadyTaskList) ;
}

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

bool userResult (void) asm ("xtr.user.result") ;

bool userResult (void) {
  return gRunningTaskControlBlockPtr->mUserResult ;
}

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
//   kernel_create_task
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

void kernel_create_task (const unsigned inTaskIndex,
                         const char * inTaskName,
                         unsigned * inStackBufferAddress,
                         unsigned inStackBufferSize,
                         RoutineTaskType inTaskRoutine) asm ("kernel_create_task") ;

void kernel_create_task (const unsigned inTaskIndex,
                         const char * inTaskName,
                         unsigned * inStackBufferAddress,
                         unsigned inStackBufferSize,
                         RoutineTaskType inTaskRoutine) {
  TaskControlBlock * taskControlBlockPtr = & gTaskDescriptorArray [inTaskIndex] ;
  taskControlBlockPtr->mTaskIndex = (unsigned char) inTaskIndex ;
  taskControlBlockPtr->mTaskName = inTaskName ;
//  taskControlBlockPtr->mTaskDeadline = 0 ; // statically initialized to 0
//  taskControlBlockPtr->mGuardCount = 0 ; // statically initialized to 0
//  taskControlBlockPtr->mHaveDeadlineGuard = false ; // statically initialized to 0
//  taskControlBlockPtr->mUserResult = false ; // statically initialized to 0
//  taskControlBlockPtr->mGuardState = GUARD_EVALUATING_OR_OUTSIDE ; // statically initialized to GUARD_EVALUATING_OR_OUTSIDE
//  taskControlBlockPtr->mActivationCount = 0 ;  // statically initialized to 0
//--- Store stack parameters
  taskControlBlockPtr->mStackBufferAddress = inStackBufferAddress ;
  taskControlBlockPtr->mStackBufferSize = inStackBufferSize ;
//--- Initial free stack size
  taskControlBlockPtr->mStackFreeSize = inStackBufferSize ;
//--- Initialize Context
  const bool hasFloatingPointContext = false ;
  kernel_set_task_context (taskControlBlockPtr->mTaskContext,
                           (unsigned) inStackBufferAddress,
                           inStackBufferSize,
                           inTaskRoutine,
                           hasFloatingPointContext) ;
//--- Make task ready
  kernel_makeTaskReady (taskControlBlockPtr) ;
}

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
//   D E A D L I N E    L I S T    M A N A G E M E N T
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

static DeadlineList gDeadlineWaitingTaskList ;

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

static inline void deadlinelist_enterRunningTask (const unsigned inDeadline) {
  gRunningTaskControlBlockPtr->mTaskDeadline = inDeadline ;
  deadlinelist_enterTask (gDeadlineWaitingTaskList, gRunningTaskControlBlockPtr) ;
}

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

static inline void deadlinelist_makeTasksReadyFromCurrentDate (const unsigned inCurrentDate) {
  DeadlineListIterator iterator = deadlinelist_makeIterator (gDeadlineWaitingTaskList) ;
  TaskControlBlock * task ;
  while ((task = deadlinelistIterator_nextTask (iterator))) {
    if (inCurrentDate >= task->mTaskDeadline) {
    //--- Remove task from deadline list
      deadlinelist_removeTask (gDeadlineWaitingTaskList, task) ;
   //--- Make task ready
      kernel_makeTaskReady (task) ;
    }
  }
}

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
//  B L O C K I N G    R U N N I N G    T A S K
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

void blockInList (TaskList & ioWaitingList) asm ("!FUNC!blockInList") ;

void blockInList (TaskList & ioWaitingList) {
//--- Insert in tool list
  list_enterTask (ioWaitingList, gRunningTaskControlBlockPtr) ;
//--- Block task
  kernel_makeNoTaskRunning () ;
}

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

void blockOnDeadline (const unsigned inDeadline) asm ("!FUNC!blockOnDeadline") ;

void blockOnDeadline (const unsigned inDeadline) {
//--- Insert in deadline list
  deadlinelist_enterRunningTask (inDeadline) ;
//--- Block task
  kernel_makeNoTaskRunning () ;
}

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
//  M A K E    T A S K    R E A D Y
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

void makeTaskReadyFromBlockingList (TaskList & ioWaitingList, bool & outFound) asm ("!FUNC!makeTaskReady") ;

void makeTaskReadyFromBlockingList (TaskList & ioWaitingList, bool & outFound) {
  TaskControlBlock * taskControlBlockPtr = list_removeFirstTask (ioWaitingList) ;
  outFound = taskControlBlockPtr != nullptr ;
  if (outFound) { //--- Make task ready
    kernel_makeTaskReady (taskControlBlockPtr) ;
  }
}

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

void makeTasksReadyFromCurrentDate (const unsigned inCurrentDate) asm ("!FUNC!makeTasksReadyFromCurrentDate") ;

void makeTasksReadyFromCurrentDate (const unsigned inCurrentDate) {
  deadlinelist_makeTasksReadyFromCurrentDate (inCurrentDate) ;
}

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
//  ACTIVATION
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

void kernel_activate_task (const unsigned char inTaskIndex) asm ("!SERVICEIMPLEMENTATION!xtr.activate.task") ;

void kernel_activate_task (const unsigned char inTaskIndex) {
  TaskControlBlock * taskPtr = & gTaskDescriptorArray [inTaskIndex] ;
  taskPtr->mActivationCount ++ ;
  if (taskPtr->mActivationCount == 0) {
    kernel_makeTaskReady (taskPtr) ;
  }
}

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
//   kernel_wait_for_activation
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

void kernel_wait_for_activation (void) asm ("!SERVICEIMPLEMENTATION!xtr.wait.for.activation") ;

void kernel_wait_for_activation (void) {
  gRunningTaskControlBlockPtr->mActivationCount -- ;
  if (gRunningTaskControlBlockPtr->mActivationCount < 0) {
    kernel_makeNoTaskRunning () ;
  }
}

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

