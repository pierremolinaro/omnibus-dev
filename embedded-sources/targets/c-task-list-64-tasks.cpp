//---------------------------------------------------------------------------------------------------------------------*
//   TASK LIST FUNCTIONS                                                                                               *
//---------------------------------------------------------------------------------------------------------------------*

#if TASK_COUNT > 64
  #error "This type of list supports at most 64 tasks"
#endif

//---------------------------------------------------------------------------------------------------------------------*
// ENTER TASK IN LIST: inTask should be not null
//---------------------------------------------------------------------------------------------------------------------*

static inline void list_enterTask (TaskList & ioTaskList, TaskControlBlock * inTask) __attribute__((always_inline)) ;

//---------------------------------------------------------------------------------------------------------------------*

static inline void list_enterTask (TaskList & ioTaskList, TaskControlBlock * inTask) {
  const unsigned runningTaskIndex = inTask->mTaskIndex ;
  const unsigned long long mask = 1ULL << runningTaskIndex ;
  ioTaskList.mList |= mask ;
}

//---------------------------------------------------------------------------------------------------------------------*
//  REMOVE FIRST TASK FROM LIST: returns nullptr if list is empty                                                      *
//---------------------------------------------------------------------------------------------------------------------*

static inline TaskControlBlock * list_removeFirstTask (TaskList & ioTaskList) __attribute__((always_inline)) ;

//---------------------------------------------------------------------------------------------------------------------*

static inline TaskControlBlock * list_removeFirstTask (TaskList & ioTaskList) {
  TaskControlBlock * result = nullptr ;
  if (ioTaskList.mList != 0ULL) {
    const unsigned taskIndex = __builtin_ctzll (ioTaskList.mList) ;
    const unsigned long long mask = 1ULL << taskIndex ;
    ioTaskList.mList &= ~ mask ;
    result = & gTaskDescriptorArray [taskIndex] ;
  }
  return result ;
}

