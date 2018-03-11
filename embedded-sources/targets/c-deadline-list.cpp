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
//   ENTER TASK IN DEADLINE LIST                                                                                       *
//---------------------------------------------------------------------------------------------------------------------*

static inline void deadlinelist_enterTask (TaskListByDate & ioTaskList, TaskControlBlock * inTask) {
  const unsigned runningTaskIndex = inTask->mTaskIndex ;
  const unsigned mask = 1 << runningTaskIndex ;
  ioTaskList |= mask ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   REMOVE TASK FROM DEADLINE LIST                                                                                    *
//---------------------------------------------------------------------------------------------------------------------*

static inline void deadlinelist_removeTask (TaskListByDate & ioTaskList, TaskControlBlock * inTask) {
  const unsigned runningTaskIndex = inTask->mTaskIndex ;
  const unsigned mask = 1 << runningTaskIndex ;
  ioTaskList &= ~ mask ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   ITERATE OVER DEADLINE LIST                                                                                        *
//---------------------------------------------------------------------------------------------------------------------*

typedef unsigned DeadlineTaskListIterator ;

//---------------------------------------------------------------------------------------------------------------------*

static inline DeadlineTaskListIterator deadlinelist_makeIterator (const TaskListByDate & inList) {
  return inList ;
}

//---------------------------------------------------------------------------------------------------------------------*

static inline TaskControlBlock * deadlinelistIterator_nextTask (DeadlineTaskListIterator & ioIterator) {
  TaskControlBlock * task = nullptr ;
  if (ioIterator != 0) {
    const unsigned taskIndex = __builtin_ctz (ioIterator) ;
    const unsigned mask = 1 << taskIndex ;
    ioIterator &= ~ mask ;
    task = & gTaskDescriptorArray [taskIndex] ;

  }
  return task ;
}

//---------------------------------------------------------------------------------------------------------------------*

