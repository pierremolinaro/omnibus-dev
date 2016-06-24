//---------------------------------------------------------------------------------------------------------------------*

#define VICIntEnClr    (*((volatile unsigned *) 0xFFFFF014))
#define VICIntEnable   (*((volatile unsigned *) 0xFFFFF010))
#define VICVect(INDEX) (*((volatile unsigned *) (0xFFFFF100 + ((INDEX) << 2))))
#define VICVectCntl(INDEX) (*((volatile unsigned *) (0xFFFFF200 + ((INDEX) << 2))))

//---------------------------------------------------------------------------------------------------------------------*

static unsigned gSlotID ;

//---------------------------------------------------------------------------------------------------------------------*

static void installInterruptServiceRoutine (const unsigned irq_routine, const unsigned inSourceID) {
//---
  VICVect (gSlotID) = irq_routine ;
  VICVectCntl (gSlotID) = 0x20 | inSourceID ;
//---
  VICIntEnClr   = 1 << inSourceID ;
  VICIntEnable |= 1 << inSourceID ;
//---
  gSlotID ++ ;
}

//---------------------------------------------------------------------------------------------------------------------*

extern unsigned __plm_interrupt_vectors [30] ;

void installInterrupts (void) ;

void installInterrupts (void) {
  for (unsigned i=0 ; i<30 ; i++) {
    if (__plm_interrupt_vectors [i] != 0) {
      installInterruptServiceRoutine (__plm_interrupt_vectors [i], i) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

#define TASK_COUNT (!TASKCOUNT!)
#define GUARD_COUNT (!GUARDCOUNT!)

//---------------------------------------------------------------------------------------------------------------------*

typedef unsigned TaskList ;

//---------------------------------------------------------------------------------------------------------------------*

typedef struct { unsigned mGuardValue ; } GuardList ;

//---------------------------------------------------------------------------------------------------------------------*

typedef unsigned char bool ;

#define true  ((bool) 1)
#define false ((bool) 0)

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

static unsigned countTrainingZeros (const unsigned inValue) {
  unsigned result = 0 ;
  unsigned w = inValue ;
  while ((w & 1) == 0) {
    result ++ ;
    w >>= 1 ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//   T A S K    C O N T E X T                                                                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*
//                                           *---------------------* +68
//                                           | PC_USR              | +64 [16]
//                                           | R12                 | +60 [15]
//                                           | R11                 | +56 [14]
//                                           | R10                 | +52 [13]
//                                           | R9                  | +48 [12]
//                                           | R8                  | +44 [11]
//                                           | R7                  | +40 [10]
//                                           | R6                  | +36 [ 9]
//                                           | R5                  | +32 [ 8]
//                                           | R4                  | +28 [ 7]
//                                           | R3                  | +24 [ 6]
//                                           | R2                  | +20 [ 5]
//                                           | R1                  | +16 [ 4]
//                                           | R0                  | +12 [ 3]
//                                           | LR_USR              | + 8 [ 2]
// *--------------------------------*        | SP_USR              | + 4 [ 1]
// |                                +------> | CPSR                | + 0 [ 0]
// *--------------------------------*        *---------------------*

//---------------------------------------------------------------------------------------------------------------------*

typedef struct {
  unsigned mCPSR ;
  unsigned mSP_USR ;
  unsigned mLR_USR ;
  unsigned mR0 ;
  unsigned mR1 ;
  unsigned mR2 ;
  unsigned mR3 ;
  unsigned mR4 ;
  unsigned mR5 ;
  unsigned mR6 ;
  unsigned mR7 ;
  unsigned mR8 ;
  unsigned mR9 ;
  unsigned mR10 ;
  unsigned mR11 ;
  unsigned mR12 ;
  unsigned mPC_USR ;
} TaskContext ;

//---------------------------------------------------------------------------------------------------------------------*

static void kernel_set_task_context (TaskContext * inTaskContext,
                                     const unsigned inTopOfStack,
                                     RoutineTaskType inTaskRoutine) {
//--- Initialize PC
  inTaskContext->mPC_USR = (unsigned) inTaskRoutine ;
//--- Initialize SP
  inTaskContext->mSP_USR = inTopOfStack ;
//--- Initialize CPSR
  inTaskContext->mCPSR = 0x10 ; // ARM USER MODE, IRQ and FIRQ interrupts enabled
}

//---------------------------------------------------------------------------------------------------------------------*

static void kernel_set_return_code (TaskContext * inTaskContext, const unsigned inReturnCode) {
  inTaskContext->mR0 = inReturnCode ;
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
  bool mHaveDeadlineGuard ;
  unsigned mGuardCount ;
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

void blockInListAndOnDeadline (TaskList * ioWaitingList, const unsigned inDeadline) asm ("!FUNC!blockInListAndOnDeadline") ;

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

void makeTaskReady (TaskList * ioWaitingList, bool * outFound) asm ("!FUNC!makeTaskReady") ;

void makeTaskReady (TaskList * ioWaitingList, bool * outFound) {
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
  //--- Set return code and make task ready
    kernel_set_return_code (& taskControlBlockPtr->mTaskContext, 1) ;
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

bool waitForGuardChange (void) asm ("!SERVICECALL!waitForGuardChange") ;

bool kernel_waitForGuardChange (void) asm ("!SERVICEIMPLEMENTATION!waitForGuardChange") ;

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

void kernel_guardDidChange (GuardList * ioGuardList) asm ("!FUNC!guardDidChange") ;

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

void tickHandlerForGuardedWaitUntil (const unsigned inUptime) asm ("!FUNC!tickHandlerForGuardedWaitUntil") ;

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
