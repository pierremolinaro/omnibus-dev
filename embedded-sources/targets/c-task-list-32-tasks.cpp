//---------------------------------------------------------------------------------------------------------------------*
// ENTER TASK IN LIST: inTask should be not null
//---------------------------------------------------------------------------------------------------------------------*

static inline void list_enterTask (TaskList & ioTaskList, TaskControlBlock * inTask) __attribute__((always_inline)) ;

//---------------------------------------------------------------------------------------------------------------------*

static inline void list_enterTask (TaskList & ioTaskList, TaskControlBlock * inTask) {
  const unsigned runningTaskIndex = inTask->mTaskIndex ;
  const unsigned mask = 1 << runningTaskIndex ;
  ioTaskList.mList |= mask ;
}

//---------------------------------------------------------------------------------------------------------------------*
//  REMOVE FIRST TASK FROM LIST: returns nullptr if list is empty                                                      *
//---------------------------------------------------------------------------------------------------------------------*

static inline TaskControlBlock * list_removeFirstTask (TaskList & ioTaskList) __attribute__((always_inline)) ;

//---------------------------------------------------------------------------------------------------------------------*

static inline TaskControlBlock * list_removeFirstTask (TaskList & ioTaskList) {
  TaskControlBlock * result = nullptr ;
  if (ioTaskList.mList != 0) {
    const unsigned taskIndex = __builtin_ctz (ioTaskList.mList) ;
    const unsigned mask = 1 << taskIndex ;
    ioTaskList.mList &= ~ mask ;
    result = & gTaskDescriptorArray [taskIndex] ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

