//---------------------------------------------------------------------------------------------------------------------*
//   D E A D L I N E    L I S T    M A N A G E M E N T                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

#if TASK_COUNT > 32
  #error "This type of list supports at most 32 tasks"
#endif

//---------------------------------------------------------------------------------------------------------------------*
// FORWARD DECLARATION                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

static void kernel_makeTaskReady (TaskControlBlock * inTaskDescriptor) ;

//---------------------------------------------------------------------------------------------------------------------*

typedef unsigned TaskListByDate ;

//---------------------------------------------------------------------------------------------------------------------*

static TaskListByDate gDeadlineWaitingTaskList ;

//---------------------------------------------------------------------------------------------------------------------*

static inline void deadlinelist_enterRunningTask (const unsigned inDeadline) {
  gRunningTaskControlBlockPtr->mTaskDeadline = inDeadline ;
  const unsigned runningTaskIndex = gRunningTaskControlBlockPtr->mTaskIndex ;
  const unsigned mask = 1 << runningTaskIndex ;
  gDeadlineWaitingTaskList |= mask ;
}

//---------------------------------------------------------------------------------------------------------------------*

static inline void deadlinelist_makeTasksReadyFromCurrentDate (const unsigned inCurrentDate) {
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

