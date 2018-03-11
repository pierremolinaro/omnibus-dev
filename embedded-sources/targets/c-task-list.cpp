//---------------------------------------------------------------------------------------------------------------------*
//   TASK LIST FUNCTIONS                                                                                               *
//---------------------------------------------------------------------------------------------------------------------*

#if TASK_COUNT > 32
  #error "This type of list supports at most 32 tasks"
#endif

//---------------------------------------------------------------------------------------------------------------------*

typedef unsigned TaskList ;

//---------------------------------------------------------------------------------------------------------------------*
// ENTER TASK IN LIST: inTaskControlBlockPtr should be not null
//---------------------------------------------------------------------------------------------------------------------*

static inline void list_enterTask (TaskList & ioTaskList, TaskControlBlock * inTaskControlBlockPtr)  __attribute__((always_inline)) ;

static inline void list_enterTask (TaskList & ioTaskList, TaskControlBlock * inTaskControlBlockPtr) {
  const unsigned runningTaskIndex = inTaskControlBlockPtr->mTaskIndex ;
  const unsigned mask = 1 << runningTaskIndex ;
  ioTaskList |= mask ;
}

//---------------------------------------------------------------------------------------------------------------------*
//  REMOVE FIRST TASK FROM LIST: returns nullptr if list is empty                                                      *
//---------------------------------------------------------------------------------------------------------------------*

static inline TaskControlBlock * list_removeFirstTask (TaskList & ioTaskList) __attribute__((always_inline)) ;

static inline TaskControlBlock * list_removeFirstTask (TaskList & ioTaskList) {
  TaskControlBlock * result = nullptr ;
  if (ioTaskList != 0) {
    const unsigned taskIndex = __builtin_ctz (ioTaskList) ;
    const unsigned mask = 1 << taskIndex ;
    ioTaskList &= ~ mask ;
    result = & gTaskDescriptorArray [taskIndex] ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//  TEST IF TASK IS IN LIST
//---------------------------------------------------------------------------------------------------------------------*

static inline bool list_containsTask (const TaskList & inTaskList, TaskControlBlock * inTaskControlBlockPtr)  __attribute__((always_inline)) ;

static inline bool list_containsTask (const TaskList & inTaskList, TaskControlBlock * inTaskControlBlockPtr) {
  const unsigned runningTaskIndex = inTaskControlBlockPtr->mTaskIndex ;
  const unsigned mask = 1 << runningTaskIndex ;
  return (inTaskList & mask) != 0 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//  TEST IF LIST IS EMPTY
//---------------------------------------------------------------------------------------------------------------------*

// static inline bool list_isEmpty (const TaskList & inTaskList) {
//   return inTaskList == 0 ;
// }

//---------------------------------------------------------------------------------------------------------------------*
//  REMOVE TASK FROM LIST: inTask should not be null                                                                   *
//---------------------------------------------------------------------------------------------------------------------*

static inline void list_removeTask (TaskList & ioTaskList, TaskControlBlock * inTask) __attribute__((always_inline)) ;

static inline void list_removeTask (TaskList & ioTaskList, TaskControlBlock * inTask) {
  const unsigned mask = ~ (1 << inTask->mTaskIndex) ;
  ioTaskList &= ~ mask ;
}

