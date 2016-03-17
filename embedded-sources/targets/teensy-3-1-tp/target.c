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

typedef enum {GUARD_OUTSIDE, GUARD_EVALUATING, GUARD_DID_CHANGE, GUARD_WAITING_FOR_CHANGE} GuardState ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//   T A S K    R O U T I N E    T Y P E                                                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (* routineTaskType) (void) ;

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
//                   |                            |                                                                    *
//         PSP+32 -> |----------------------------| \                                                                  *
//                   | xPSR                       |  |                                                                 *
//         PSP+28 -> |----------------------------|  |                                                                 *
//                   | PC (after SVC instruction) |  |                                                                 *
//         PSP+24 -> |----------------------------|  |                                                                 *
//                   | LR                         |  |                                                                 *
//         PSP+20 -> |----------------------------|  |                                                                 *
//                   | R12                        |  |  Saved by interrupt response                                    *
//         PSP+16 -> |----------------------------|  |                                                                 *
//                   | R3                         |  |                                                                 *
//         PSP+12 -> |----------------------------|  |                                                                 *
//                   | R2                         |  |                                                                 *
//         PSP+8  -> |----------------------------|  |                                                                 *
//                   | R1                         |  |                                                                 *
//         PSP+4  -> |----------------------------|  |                                                                 *
//                   | R0                         |  |                                                                 *
//         PSP    -> |----------------------------| /                                                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef struct {
  unsigned mR0 ;
  unsigned mR1 ;
  unsigned mR2 ;
  unsigned mR3 ;
  unsigned mR12 ;
  unsigned mLR ;
  unsigned mPC ;
  unsigned mXPSR ;
} stacked_registers ;

//----------------------------------------------------------------------------------------------------------------------
//
//                                            *---------------------*
//                                            | LR return code      | +36 [ 9]
//                                            *---------------------*
//                                            | R13 (PSP)           | +32 [ 8]
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
  unsigned mR4 ;
  unsigned mR5 ;
  unsigned mR6 ;
  unsigned mR7 ;
  unsigned mR8 ;
  unsigned mR9 ;
  unsigned mR10 ;
  unsigned mR11 ;
  stacked_registers * mSP_USR ;
  unsigned mLR_RETURN_CODE ;
} TaskContext ;

//---------------------------------------------------------------------------------------------------------------------*

static void kernel_set_task_context (TaskContext * inTaskContext,
                                     const unsigned inStackPointerInitialValue,
                                     routineTaskType inTaskRoutine) {
//--- Initialize LR
  inTaskContext->mLR_RETURN_CODE = 0xFFFFFFFD ;
//--- Initialize SP
  stacked_registers * ptr = (stacked_registers *) (inStackPointerInitialValue - sizeof (stacked_registers)) ; // 8 stacked registers
  inTaskContext->mSP_USR = ptr ;
//--- Initialize PC
  ptr->mPC = (unsigned) inTaskRoutine ;
//--- Initialize CPSR
  ptr->mXPSR = 1 << 24 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   T A S K    C O N T R O L    B L O C K                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

typedef struct {
//--- Context buffer (SHOULD BE THE FIRST FIELD)
  TaskContext mTaskContext ;
//--- This field is used for deadline waiting
  unsigned mDate ;
//---
  TaskList * mWaitingList ;
//--- Stack buffer parameters
  unsigned * mStackBufferAddress ;
  unsigned mStackBufferSize ; // In bytes
//--- Guards
  unsigned short mGuardCount ;
  GuardState mGuardState ;
  GuardList * mGuardListArray [GUARD_COUNT] ;
} TaskControlBlock ;

//---------------------------------------------------------------------------------------------------------------------*

static TaskControlBlock gTaskDescriptorArray [TASK_COUNT] ;

//---------------------------------------------------------------------------------------------------------------------*
//   S C H E D U L E R                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

TaskControlBlock * gRunningTaskControlBlock ; // Shared with assembly code (arm_context.s)
static unsigned gRunningTaskIndex ; // Not significant if gRunningTaskControlBlock == NULL
static TaskList gReadyTaskList ;

//---------------------------------------------------------------------------------------------------------------------*

static unsigned kernel_runningTaskIndex (void) {
  return gRunningTaskIndex ;
}

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
  if (((TaskControlBlock *) 0) != gRunningTaskControlBlock) {
    gReadyTaskList |= 1 << gRunningTaskIndex ;
    gRunningTaskControlBlock = (TaskControlBlock *) 0 ;
  }
  if (gReadyTaskList != 0) {
    gRunningTaskIndex = countTrainingZeros (gReadyTaskList) ;
    gReadyTaskList &= ~ (1 << gRunningTaskIndex) ;
    gRunningTaskControlBlock = & gTaskDescriptorArray [gRunningTaskIndex] ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//   kernel_create_task                                                                                                *
//---------------------------------------------------------------------------------------------------------------------*

void kernel_create_task (const unsigned inTaskIndex,
                         unsigned * inStackBufferAddress,
                         unsigned inStackBufferSize,
                         routineTaskType inTaskRoutine) ;

void kernel_create_task (const unsigned inTaskIndex,
                         unsigned * inStackBufferAddress,
                         unsigned inStackBufferSize,
                         routineTaskType inTaskRoutine) {
  TaskControlBlock * taskControlBlockPtr = & gTaskDescriptorArray [inTaskIndex] ;
  taskControlBlockPtr->mWaitingList = (TaskList *) 0 ;
  taskControlBlockPtr->mGuardCount = 0 ;
  taskControlBlockPtr->mGuardState = GUARD_OUTSIDE ;
//--- Store stack parameters
  taskControlBlockPtr->mStackBufferAddress = inStackBufferAddress ;
  taskControlBlockPtr->mStackBufferSize = inStackBufferSize ;
//--- Stack Pointer initial value
  const unsigned spInitialValue = ((unsigned) taskControlBlockPtr->mStackBufferAddress) + taskControlBlockPtr->mStackBufferSize ;
//--- Initialize Context
  kernel_set_task_context (& taskControlBlockPtr->mTaskContext, spInitialValue, inTaskRoutine) ;
//--- Make task ready
  kernel_makeTaskReady (inTaskIndex) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   L I S T    M A N A G E M E N T                                                                                    *
//---------------------------------------------------------------------------------------------------------------------*

static TaskList gDeadlineWaitingTaskList ;

//---------------------------------------------------------------------------------------------------------------------*
//  B L O C K I N G    R U N N I N G    T A S K                                                                        *
//---------------------------------------------------------------------------------------------------------------------*

void blockInList (TaskList * ioWaitingList) asm ("proc..blockInList") ;

void blockInList (TaskList * ioWaitingList) {
  const unsigned currentTaskIndex = kernel_runningTaskIndex () ;
  *ioWaitingList |= 1 << currentTaskIndex ;
 // TaskControlBlock * taskControlBlockPtr = & gTaskDescriptorArray [currentTaskIndex] ;
  gRunningTaskControlBlock->mWaitingList = ioWaitingList ;
  kernel_makeNoTaskRunning () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void blockOnDeadline (const unsigned inDeadlineMS) asm ("proc..blockOnDeadline") ;

void blockOnDeadline (const unsigned inDeadlineMS) {
  const unsigned currentTaskIndex = kernel_runningTaskIndex () ;
 // TaskControlBlock * taskControlBlockPtr = & gTaskDescriptorArray [currentTaskIndex] ;
  gDeadlineWaitingTaskList |= 1 << currentTaskIndex ;
  gRunningTaskControlBlock->mDate = inDeadlineMS ;
  kernel_makeNoTaskRunning () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//  M A K E    T A S K    R E A D Y                                                                                    *
//---------------------------------------------------------------------------------------------------------------------*

void makeTaskReady (TaskList * ioWaitingList, unsigned char * outFound) asm ("proc..makeTaskReady") ;

void makeTaskReady (TaskList * ioWaitingList, unsigned char * outFound) {
  * outFound = (* ioWaitingList) != 0 ;
  if (* outFound) {
    const unsigned taskIndex = countTrainingZeros (* ioWaitingList) ;
    TaskControlBlock * taskControlBlockPtr = & gTaskDescriptorArray [taskIndex] ;
    gDeadlineWaitingTaskList &= ~ (1 << taskIndex) ;
    *(taskControlBlockPtr->mWaitingList) &= ~ (1 << taskIndex) ;
    taskControlBlockPtr->mWaitingList = (TaskList *) 0 ;
    kernel_makeTaskReady (taskIndex) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void makeTasksReadyFromCurrentDate (const unsigned inCurrentDate)
asm ("proc..makeTasksReadyFromCurrentDate") ;

void makeTasksReadyFromCurrentDate (const unsigned inCurrentDate) {
  unsigned w = gDeadlineWaitingTaskList ;
  while (w > 0) {
    const unsigned taskIndex = countTrainingZeros (w) ;
    w &= ~ (1 << taskIndex) ;
    TaskControlBlock * taskControlBlockPtr = & gTaskDescriptorArray [taskIndex] ;
    if (inCurrentDate >= taskControlBlockPtr->mDate) {
      gDeadlineWaitingTaskList &= ~ (1 << taskIndex) ;
      if (taskControlBlockPtr->mWaitingList != (TaskList *) 0) {
        *(taskControlBlockPtr->mWaitingList) &= ~ (1 << taskIndex) ;
        taskControlBlockPtr->mWaitingList = (TaskList *) 0 ;
      }
      kernel_makeTaskReady (taskIndex) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//  G U A R D S                                                                                                        *
//---------------------------------------------------------------------------------------------------------------------*

static TaskList gDeadlineWaitingInGuardTaskList ;

//---------------------------------------------------------------------------------------------------------------------*

static void kernel_exitFromGuard (const unsigned inTaskIndex) {
  TaskControlBlock * taskControlBlockPtr = & gTaskDescriptorArray [inTaskIndex] ;
  const unsigned guardCount = taskControlBlockPtr->mGuardCount ;
  for (unsigned i=0 ; i<guardCount ; i++) {
   taskControlBlockPtr->mGuardListArray [i]->mGuardValue &= ~ (1 << inTaskIndex) ;
  }
  gDeadlineWaitingInGuardTaskList &= ~ (1 << inTaskIndex) ;
  if (taskControlBlockPtr->mGuardState == GUARD_WAITING_FOR_CHANGE) {
    kernel_makeTaskReady (inTaskIndex) ;
    taskControlBlockPtr->mGuardState = GUARD_OUTSIDE ;
  }else if (taskControlBlockPtr->mGuardState == GUARD_EVALUATING) {
    kernel_makeTaskReady (inTaskIndex) ;
    taskControlBlockPtr->mGuardState = GUARD_DID_CHANGE ;
  }
  taskControlBlockPtr->mGuardCount = 0 ;
}

//---------------------------------------------------------------------------------------------------------------------*

void enterInGuard (void) asm ("section.call.enterInGuard") ;

void kernel_enterInGuard (void) asm ("section.implementation.enterInGuard") ;

void kernel_enterInGuard (void) {
//  const unsigned runningTaskIndex = kernel_runningTaskIndex () ;
//  TaskControlBlock * taskControlBlockPtr = & gTaskDescriptorArray [runningTaskIndex] ;
  gRunningTaskControlBlock->mGuardState = GUARD_EVALUATING ;
}

//---------------------------------------------------------------------------------------------------------------------*

void kernel_handleGuardedCommand (GuardList * ioGuardList, const bool inAccepted) asm ("proc..handleGuardedCommand") ;

void kernel_handleGuardedCommand (GuardList * ioGuardList, const bool inAccepted) {
  const unsigned runningTaskIndex = kernel_runningTaskIndex () ;
//  TaskControlBlock * taskControlBlockPtr = & gTaskDescriptorArray [runningTaskIndex] ;
  if (gRunningTaskControlBlock->mGuardState != GUARD_DID_CHANGE) {
    if (inAccepted) {
      kernel_exitFromGuard (runningTaskIndex) ;
    }else{
      ioGuardList->mGuardValue |= 1 << runningTaskIndex ;
      const unsigned guardCount = gRunningTaskControlBlock->mGuardCount ;
      gRunningTaskControlBlock->mGuardListArray [guardCount] = ioGuardList ;
      gRunningTaskControlBlock->mGuardCount = guardCount + 1 ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void kernel_guardDidChange (GuardList * ioGuardList) asm ("proc..guardDidChange") ;

void kernel_guardDidChange (GuardList * ioGuardList) {
  while (ioGuardList->mGuardValue > 0) {
    const unsigned taskIndex = countTrainingZeros (ioGuardList->mGuardValue) ;
    ioGuardList->mGuardValue &= ~ (1 << taskIndex) ;
    kernel_exitFromGuard (taskIndex) ;    
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void waitForGuardChange (void) asm ("service.call.waitForGuardChange") ;

void kernel_waitForGuardChange (void) asm ("service.implementation.waitForGuardChange") ;

void kernel_waitForGuardChange (void) {
//  const unsigned runningTaskIndex = kernel_runningTaskIndex () ;
//   TaskControlBlock * taskControlBlockPtr = & gTaskDescriptorArray [runningTaskIndex] ;
  if (gRunningTaskControlBlock->mGuardState == GUARD_EVALUATING) {
    gRunningTaskControlBlock->mGuardState = GUARD_WAITING_FOR_CHANGE ;
    kernel_makeNoTaskRunning () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void guardedWaitUntil (const unsigned inDeadline) asm ("proc..guardedWaitUntil") ;

void kernel_guardedWaitUntil (const unsigned inDeadline) {
//  TaskControlBlock * taskControlBlockPtr = & gTaskDescriptorArray [runningTaskIndex] ;
  if (gRunningTaskControlBlock->mGuardState != GUARD_DID_CHANGE) {
    const unsigned runningTaskIndex = kernel_runningTaskIndex () ;
    const unsigned mask = 1 << runningTaskIndex ;
    if (((gDeadlineWaitingInGuardTaskList & mask) != 0) && (gRunningTaskControlBlock->mDate > inDeadline)) {
      gRunningTaskControlBlock->mDate = inDeadline ;
    }
    gDeadlineWaitingInGuardTaskList |= mask ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void tickHandlerForGuardedWaitUntil (const unsigned inUptime) asm ("proc..tickHandlerForGuardedWaitUntil") ;

void tickHandlerForGuardedWaitUntil (const unsigned inUptime) {
  unsigned w = gDeadlineWaitingInGuardTaskList ;
  while (w > 0) {
    const unsigned taskIndex = countTrainingZeros (w) ;
    w &= ~ (1 << taskIndex) ;
    TaskControlBlock * taskControlBlockPtr = & gTaskDescriptorArray [taskIndex] ;
    if (inUptime >= taskControlBlockPtr->mDate) {
      gDeadlineWaitingInGuardTaskList &= ~ (1 << taskIndex) ;
      kernel_exitFromGuard (taskIndex) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

