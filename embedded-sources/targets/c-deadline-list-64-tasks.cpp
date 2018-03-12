//---------------------------------------------------------------------------------------------------------------------*
//   D E A D L I N E    L I S T    M A N A G E M E N T                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

#if TASK_COUNT > 64
  #error "This type of list supports at most 64 tasks"
#endif

//---------------------------------------------------------------------------------------------------------------------*
// FORWARD DECLARATION                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

static void kernel_makeTaskReady (TaskControlBlock * inTaskDescriptor) ;

//---------------------------------------------------------------------------------------------------------------------*
//   ENTER TASK IN DEADLINE LIST                                                                                       *
//---------------------------------------------------------------------------------------------------------------------*

static inline void deadlinelist_enterTask (DeadlineList & ioTaskList, TaskControlBlock * inTask) {
  const unsigned runningTaskIndex = inTask->mTaskIndex ;
  const unsigned long long mask = 1ULL << runningTaskIndex ;
  ioTaskList.mDeadlineList |= mask ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   REMOVE TASK FROM DEADLINE LIST                                                                                    *
//---------------------------------------------------------------------------------------------------------------------*

static inline void deadlinelist_removeTask (DeadlineList & ioTaskList, TaskControlBlock * inTask) {
  const unsigned runningTaskIndex = inTask->mTaskIndex ;
  const unsigned long long mask = 1ULL << runningTaskIndex ;
  ioTaskList.mDeadlineList &= ~ mask ;
}

//---------------------------------------------------------------------------------------------------------------------*
//  TEST IF A DEADLINE LIST CONTAINS A TASK                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static inline bool deadlinelist_containsTask (const DeadlineList & inTaskList, TaskControlBlock * inTask) __attribute__((always_inline)) ;

//---------------------------------------------------------------------------------------------------------------------*

static inline bool deadlinelist_containsTask (const DeadlineList & inTaskList, TaskControlBlock * inTask) {
  const unsigned runningTaskIndex = inTask->mTaskIndex ;
  const unsigned long long mask = 1ULL << runningTaskIndex ;
  return (inTaskList.mDeadlineList & mask) != 0 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   ITERATE OVER DEADLINE LIST                                                                                        *
//---------------------------------------------------------------------------------------------------------------------*

typedef unsigned long long DeadlineListIterator ;

//---------------------------------------------------------------------------------------------------------------------*

static inline DeadlineListIterator deadlinelist_makeIterator (const DeadlineList & inList) {
  return inList.mDeadlineList ;
}

//---------------------------------------------------------------------------------------------------------------------*

static inline TaskControlBlock * deadlinelistIterator_nextTask (DeadlineListIterator & ioIterator) {
  TaskControlBlock * task = nullptr ;
  if (ioIterator != 0ULL) {
    const unsigned taskIndex = __builtin_ctzll (ioIterator) ;
    const unsigned long long mask = 1ULL << taskIndex ;
    ioIterator &= ~ mask ;
    task = & gTaskDescriptorArray [taskIndex] ;

  }
  return task ;
}

//---------------------------------------------------------------------------------------------------------------------*

