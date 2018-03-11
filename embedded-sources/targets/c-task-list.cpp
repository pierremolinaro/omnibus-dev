//---------------------------------------------------------------------------------------------------------------------*
//   TASK LIST FUNCTIONS                                                                                               *
//---------------------------------------------------------------------------------------------------------------------*

#if TASK_COUNT > 32
  #error "This type of list supports at most 32 tasks"
#endif

//---------------------------------------------------------------------------------------------------------------------*
// ENTER TASK IN LIST: inTask should be not null
//---------------------------------------------------------------------------------------------------------------------*

static inline void list_enterTask (TaskList & ioTaskList, TaskControlBlock * inTask) __attribute__((always_inline)) ;

//---------------------------------------------------------------------------------------------------------------------*

static inline void list_enterTask (TaskList & ioTaskList, TaskControlBlock * inTask) {
  const unsigned runningTaskIndex = inTask->mTaskIndex ;
  const unsigned mask = 1 << runningTaskIndex ;
  ioTaskList |= mask ;
}

//---------------------------------------------------------------------------------------------------------------------*
//  REMOVE FIRST TASK FROM LIST: returns nullptr if list is empty                                                      *
//---------------------------------------------------------------------------------------------------------------------*

static inline TaskControlBlock * list_removeFirstTask (TaskList & ioTaskList) __attribute__((always_inline)) ;

//---------------------------------------------------------------------------------------------------------------------*

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
//  REMOVE TASK FROM LIST: inTask should not be null                                                                   *
//---------------------------------------------------------------------------------------------------------------------*

static inline void list_removeTask (TaskList & ioTaskList, TaskControlBlock * inTask) __attribute__((always_inline)) ;

//---------------------------------------------------------------------------------------------------------------------*

static inline void list_removeTask (TaskList & ioTaskList, TaskControlBlock * inTask) {
  const unsigned mask = 1 << inTask->mTaskIndex ;
  ioTaskList &= ~ mask ;
}

//---------------------------------------------------------------------------------------------------------------------*
//  TEST IF A LIST CONTAINS A TASK                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static inline bool list_containsTask (const TaskList & inTaskList, TaskControlBlock * inTask) __attribute__((always_inline)) ;

//---------------------------------------------------------------------------------------------------------------------*

static inline bool list_containsTask (const TaskList & inTaskList, TaskControlBlock * inTask) {
  const unsigned runningTaskIndex = inTask->mTaskIndex ;
  const unsigned mask = 1 << runningTaskIndex ;
  return (inTaskList & mask) != 0 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   ITERATE OVER TASK LIST                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

typedef unsigned TaskListIterator ;

//---------------------------------------------------------------------------------------------------------------------*

static inline TaskListIterator list_makeIterator (const TaskList & inList) {
  return inList ;
}

//---------------------------------------------------------------------------------------------------------------------*

static inline TaskControlBlock * listIterator_nextTask (TaskListIterator & ioIterator) {
  TaskControlBlock * task = nullptr ;
  if (ioIterator != 0) {
    const unsigned taskIndex = __builtin_ctz (ioIterator) ;
    const unsigned mask = 1 << taskIndex ;
    ioIterator &= ~ mask ;
    task = & gTaskDescriptorArray [taskIndex] ;

  }
  return task ;
}

