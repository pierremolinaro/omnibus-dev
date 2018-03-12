//---------------------------------------------------------------------------------------------------------------------*
// ENTER TASK IN LIST: inTask should be not null
//---------------------------------------------------------------------------------------------------------------------*

static inline void guardlist_enterTask (GuardList & ioTaskList, TaskControlBlock * inTask) __attribute__((always_inline)) ;

//---------------------------------------------------------------------------------------------------------------------*

static inline void guardlist_enterTask (GuardList & ioTaskList, TaskControlBlock * inTask) {
  const unsigned runningTaskIndex = inTask->mTaskIndex ;
  const unsigned long long mask = 1ULL << runningTaskIndex ;
  ioTaskList.mGuardList |= mask ;
}

//---------------------------------------------------------------------------------------------------------------------*
//  REMOVE FIRST TASK GUARD LIST: returns nullptr if list is empty                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static inline TaskControlBlock * guardlist_removeFirstTask (GuardList & ioTaskList) __attribute__((always_inline)) ;

//---------------------------------------------------------------------------------------------------------------------*

static inline TaskControlBlock * guardlist_removeFirstTask (GuardList & ioTaskList) {
  TaskControlBlock * result = nullptr ;
  if (ioTaskList.mGuardList != 0UL) {
    const unsigned taskIndex = __builtin_ctzl (ioTaskList.mGuardList) ;
    const unsigned long long mask = 1ULL << taskIndex ;
    ioTaskList.mGuardList &= ~ mask ;
    result = & gTaskDescriptorArray [taskIndex] ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//  REMOVE TASK FROM LIST: inTask should not be null                                                                   *
//---------------------------------------------------------------------------------------------------------------------*

static inline void guardlist_removeTask (GuardList & ioList, TaskControlBlock * inTask) __attribute__((always_inline)) ;

//---------------------------------------------------------------------------------------------------------------------*

static inline void guardlist_removeTask (GuardList & ioList, TaskControlBlock * inTask) {
  const unsigned long long mask = 1ULL << inTask->mTaskIndex ;
  ioList.mGuardList &= ~ mask ;
}

//---------------------------------------------------------------------------------------------------------------------*

