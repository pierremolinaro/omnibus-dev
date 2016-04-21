//---------------------------------------------------------------------------------------------------------------------*

#define TASK_COUNT (!TASKCOUNT!)
#define GUARD_COUNT (!GUARDCOUNT!)

//---------------------------------------------------------------------------------------------------------------------*

typedef unsigned TaskList ;

//---------------------------------------------------------------------------------------------------------------------*

typedef struct { unsigned mGuardValue ; } GuardList ;

//---------------------------------------------------------------------------------------------------------------------*

typedef unsigned char bool ;

//---------------------------------------------------------------------------------------------------------------------*

// GUARD_EVALUATING_OR_OUTSIDE should be the first constant
typedef enum {GUARD_EVALUATING_OR_OUTSIDE, GUARD_DID_CHANGE, GUARD_WAITING_FOR_CHANGE} GuardState ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//   T A S K    R O U T I N E    T Y P E                                                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (* RoutineTaskType) (void) ;

//---------------------------------------------------------------------------------------------------------------------*

/*static unsigned countTrainingZeros (const unsigned inValue) {
  unsigned result = 0 ;
  unsigned w = inValue ;
  while ((w & 1) == 0) {
    result ++ ;
    w >>= 1 ;
  }
  return result ;
}*/

static unsigned countTrainingZeros (const unsigned inValue) {
  unsigned reversedValue ;
  __asm__ ("rbit %0, %1" : "=r" (reversedValue) : "r" (inValue)) ;
  unsigned result ;
  __asm__ ("clz %0, %1" : "=r" (result) : "r" (reversedValue)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                C O R T E X    M 4    S T A C K E D    R E G I S T E R S                                             *
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//         PSP+32 -> |                            |                                                                    *
//                   |----------------------------| \                                                                  *
//         PSP+28 -> | xPSR                       |  |                                                                 *
//                   |----------------------------|  |                                                                 *
//         PSP+24 -> | PC (after SVC instruction) |  |                                                                 *
//                   |----------------------------|  |                                                                 *
//         PSP+20 -> | LR                         |  |                                                                 *
//                   |----------------------------|  |                                                                 *
//         PSP+16 -> | R12                        |  |  Saved by interrupt response                                    *
//                   |----------------------------|  |                                                                 *
//         PSP+12 -> | R3                         |  |                                                                 *
//                   |----------------------------|  |                                                                 *
//         PSP+8  -> | R2                         |  |                                                                 *
//                   |----------------------------|  |                                                                 *
//         PSP+4  -> | R1                         |  |                                                                 *
//                   |----------------------------|  |                                                                 *
//   /---- PSP ----> | R0                         |  |                                                                 *
//   |               |----------------------------| /                                                                  *
//   |                                                                                                                 *
//   |                                        *---------------------*
//   |                                        | LR return code      | +36 [ 9]
//   |                                        *---------------------*
//   \----------------------------------------| R13 (PSP)           | +32 [ 8]
//                                            *---------------------*
//                                            | R11                 | +28 [ 7]
//                                            *---------------------*
//                                            | R10                 | +24 [ 6]
//                                            *---------------------*
//                                            | R9                  | +20 [ 5]
//                                            *---------------------*
//                                            | R8                  | +16 [ 4]
//                                            *---------------------*
//                                            | R7                  | +12 [ 3]
//                                            *---------------------*
//                                            | R6                  | + 8 [ 2]
//                                            *---------------------*
//                                            | R5                  | + 4 [ 1]
//  *--------------------------------*        *---------------------*
//  | gRunningTaskContextSaveAddress +------> | R4                  | + 0 [ 0]
//  *--------------------------------*        *---------------------*
//
//----------------------------------------------------------------------------------------------------------------------

typedef struct {
  unsigned mR0 ;
  unsigned mR1 ;
  unsigned mR2 ;
  unsigned mR3 ;
  unsigned mR12 ;
  unsigned mLR ;
  unsigned mPC ;
  unsigned mXPSR ;
} StackedRegisters ;

//----------------------------------------------------------------------------------------------------------------------

typedef struct {
  unsigned mR4 ;
  unsigned mR5 ;
  unsigned mR6 ;
  unsigned mR7 ;
  unsigned mR8 ;
  unsigned mR9 ;
  unsigned mR10 ;
  unsigned mR11 ;
  StackedRegisters * mSP_USR ;
  unsigned mLR_RETURN_CODE ;
} TaskContext ;

//---------------------------------------------------------------------------------------------------------------------*

static void kernel_set_task_context (TaskContext * inTaskContext,
                                     const unsigned inTopOfStack,
                                     RoutineTaskType inTaskRoutine) {
//--- Initialize LR
  inTaskContext->mLR_RETURN_CODE = 0xFFFFFFFD ;
//--- Initialize SP
  StackedRegisters * ptr = (StackedRegisters *) (inTopOfStack - sizeof (StackedRegisters)) ; // 8 stacked registers
  inTaskContext->mSP_USR = ptr ;
//--- Initialize PC
  ptr->mPC = (unsigned) inTaskRoutine ;
//--- Initialize CPSR
  ptr->mXPSR = 1 << 24 ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void kernel_set_return_code (TaskContext * inTaskContext,
                                    const unsigned inReturnCode) {
  StackedRegisters * ptr = inTaskContext->mSP_USR ;
  ptr->mR0 = inReturnCode ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   T A S K    C O N T R O L    B L O C K                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

typedef struct {
//--- Context buffer (SHOULD BE THE FIRST FIELD)
  TaskContext mTaskContext ;
//--- This field is used for deadline waiting
  unsigned mTaskDeadline ;
//---
  TaskList * mWaitingList ;
//--- Stack buffer parameters
//  unsigned * mStackBufferAddress ;
//  unsigned mStackBufferSize ; // In bytes
//--- Task index
  unsigned char mTaskIndex ;
//--- Guards
  GuardState mGuardState ;
  unsigned short mGuardCount ;
  GuardList * mGuardListArray [GUARD_COUNT] ;
} TaskControlBlock ;

//---------------------------------------------------------------------------------------------------------------------*

static TaskControlBlock gTaskDescriptorArray [TASK_COUNT] ;

//---------------------------------------------------------------------------------------------------------------------*
//   S C H E D U L E R                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

TaskControlBlock * gRunningTaskControlBlock ; // Shared with assembly code (arm_context.s)
static TaskList gReadyTaskList ;

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
                         unsigned * inStackBufferAddress,
                         unsigned inStackBufferSize,
                         RoutineTaskType inTaskRoutine) ;

void kernel_create_task (const unsigned inTaskIndex,
                         unsigned * inStackBufferAddress,
                         unsigned inStackBufferSize,
                         RoutineTaskType inTaskRoutine) {
  TaskControlBlock * taskControlBlockPtr = & gTaskDescriptorArray [inTaskIndex] ;
  taskControlBlockPtr->mTaskIndex = (unsigned char) inTaskIndex ;
  taskControlBlockPtr->mWaitingList = (TaskList *) 0 ; // statically initialized to 0
  taskControlBlockPtr->mGuardCount = 0 ; // statically initialized to 0
  taskControlBlockPtr->mGuardState = GUARD_EVALUATING_OR_OUTSIDE ; // statically initialized to 0
//--- Store stack parameters
//  taskControlBlockPtr->mStackBufferAddress = inStackBufferAddress ;
//  taskControlBlockPtr->mStackBufferSize = inStackBufferSize ;
//--- Stack Pointer initial value
  const unsigned topOfStack = ((unsigned) inStackBufferAddress) + inStackBufferSize ;
//--- Initialize Context
  kernel_set_task_context (& taskControlBlockPtr->mTaskContext, topOfStack, inTaskRoutine) ;
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

void blockInList (TaskList * ioWaitingList) asm ("!FUNC!.blockInList") ;

void blockInList (TaskList * ioWaitingList) {
  const unsigned currentTaskIndex = gRunningTaskControlBlock->mTaskIndex ;
//--- Insert in tool list
  *ioWaitingList |= 1 << currentTaskIndex ;
  gRunningTaskControlBlock->mWaitingList = ioWaitingList ;
//--- Block task
  kernel_makeNoTaskRunning () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void blockOnDeadline (const unsigned inDeadline) asm ("!FUNC!.blockOnDeadline") ;

void blockOnDeadline (const unsigned inDeadline) {
  const unsigned currentTaskIndex = gRunningTaskControlBlock->mTaskIndex ;
//--- Insert in deadline list
  gDeadlineWaitingTaskList |= 1 << currentTaskIndex ;
  gRunningTaskControlBlock->mTaskDeadline = inDeadline ;
  kernel_makeNoTaskRunning () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void blockInListAndOnDeadline (TaskList * ioWaitingList, const unsigned inDeadline) asm ("!FUNC!.blockInListAndOnDeadline") ;

void blockInListAndOnDeadline (TaskList * ioWaitingList, const unsigned inDeadline) {
  const unsigned currentTaskIndex = gRunningTaskControlBlock->mTaskIndex ;
//--- Insert in tool list
  *ioWaitingList |= 1 << currentTaskIndex ;
  gRunningTaskControlBlock->mWaitingList = ioWaitingList ;
//--- Insert in deadline list
  gDeadlineWaitingTaskList |= 1 << currentTaskIndex ;
  gRunningTaskControlBlock->mTaskDeadline = inDeadline ;
//--- Block task
  kernel_makeNoTaskRunning () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//  M A K E    T A S K    R E A D Y                                                                                    *
//---------------------------------------------------------------------------------------------------------------------*

unsigned char makeTaskReady (TaskList * ioWaitingList) asm ("!FUNC!.makeTaskReady") ;

unsigned char makeTaskReady (TaskList * ioWaitingList) {
  unsigned char found = (* ioWaitingList) != 0 ;
  if (found) {
  //--- Get index of waiting task
    const unsigned taskIndex = countTrainingZeros (* ioWaitingList) ;
    TaskControlBlock * taskControlBlockPtr = & gTaskDescriptorArray [taskIndex] ;
  //--- Remove task from deadline list
    gDeadlineWaitingTaskList &= ~ (1 << taskIndex) ;
  //--- Remove task from waiting list
    *(ioWaitingList) &= ~ (1 << taskIndex) ;
  //--- Clear task waiting list pointer
    taskControlBlockPtr->mWaitingList = (TaskList *) 0 ;
  //--- Set return code and make task ready
    kernel_set_return_code (& taskControlBlockPtr->mTaskContext, 1) ;
    kernel_makeTaskReady (taskIndex) ;
  }
  return found ;
}

//---------------------------------------------------------------------------------------------------------------------*

void makeTasksReadyFrom (const unsigned inCurrentDate)
asm ("!FUNC!.makeTasksReadyFrom") ;

void makeTasksReadyFrom (const unsigned inCurrentDate) {
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
    //--- Set return code and make task ready
      kernel_set_return_code (& taskControlBlockPtr->mTaskContext, 0) ;
      kernel_makeTaskReady (taskIndex) ;
    }
  }
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
  gDeadlineWaitingInGuardTaskList &= ~ mask ;
  taskControlBlockPtr->mGuardCount = 0 ;
}

//---------------------------------------------------------------------------------------------------------------------*

void noteGuardHasBeenAccepted (void) asm ("noteGuardHasBeenAccepted") ;

void noteGuardHasBeenAccepted (void) {
  gRunningTaskControlBlock->mGuardState = GUARD_EVALUATING_OR_OUTSIDE ;
  removeTaskFromGuards (gRunningTaskControlBlock) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void kernel_handleGuardedCommand (GuardList * ioGuardList) asm ("!FUNC!.handleGuardedCommand") ;

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

void handleGuardedWaitUntil (const unsigned inDeadline) asm ("!FUNC!.handleGuardedWaitUntil") ;

void handleGuardedWaitUntil (const unsigned inDeadline) {
  if (gRunningTaskControlBlock->mGuardState == GUARD_EVALUATING_OR_OUTSIDE) {
    const unsigned runningTaskIndex = gRunningTaskControlBlock->mTaskIndex ;
    const unsigned mask = 1 << runningTaskIndex ;
    if (((gDeadlineWaitingInGuardTaskList & mask) != 0) && (gRunningTaskControlBlock->mTaskDeadline > inDeadline)) {
      gRunningTaskControlBlock->mTaskDeadline = inDeadline ;
    }
    gDeadlineWaitingInGuardTaskList |= mask ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void kernel_guardDidChange (GuardList * ioGuardList) asm ("!FUNC!.guardDidChange") ;

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
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

bool waitForGuardChange (void) asm ("service.call.waitForGuardChange") ;

bool kernel_waitForGuardChange (void) asm ("service.implementation.waitForGuardChange") ;

bool kernel_waitForGuardChange (void) {
  const bool result = gRunningTaskControlBlock->mGuardCount > 0 ;
  if (result) {
    if (gRunningTaskControlBlock->mGuardState == GUARD_EVALUATING_OR_OUTSIDE) {
      gRunningTaskControlBlock->mGuardState = GUARD_WAITING_FOR_CHANGE ;
      kernel_makeNoTaskRunning () ;
    }else{
      gRunningTaskControlBlock->mGuardState = GUARD_EVALUATING_OR_OUTSIDE ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void tickHandlerForGuardedWaitUntil (const unsigned inUptime) asm ("!FUNC!.tickHandlerForGuardedWaitUntil") ;

void tickHandlerForGuardedWaitUntil (const unsigned inUptime) {
  unsigned w = gDeadlineWaitingInGuardTaskList ;
  while (w > 0) {
    const unsigned taskIndex = countTrainingZeros (w) ;
    w &= ~ (1 << taskIndex) ;
    TaskControlBlock * taskControlBlockPtr = & gTaskDescriptorArray [taskIndex] ;
    if (inUptime >= taskControlBlockPtr->mTaskDeadline) {
      removeTaskFromGuards (taskControlBlockPtr) ;
      if (taskControlBlockPtr->mGuardState == GUARD_WAITING_FOR_CHANGE) {
        kernel_set_return_code (& taskControlBlockPtr->mTaskContext, 1) ;
        kernel_makeTaskReady (taskIndex) ;
        taskControlBlockPtr->mGuardState = GUARD_EVALUATING_OR_OUTSIDE ;
      }else if (taskControlBlockPtr->mGuardState == GUARD_EVALUATING_OR_OUTSIDE) {
        taskControlBlockPtr->mGuardState = GUARD_DID_CHANGE ;
      }
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*
