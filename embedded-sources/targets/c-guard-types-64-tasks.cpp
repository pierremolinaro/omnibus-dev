//---------------------------------------------------------------------------------------------------------------------*

typedef struct { unsigned long long mGuardList ; } GuardList ;

//---------------------------------------------------------------------------------------------------------------------*

typedef struct {
  unsigned mCount ;
  GuardList * mListArray [!GUARDCOUNT!] ;
} GuardDescriptor ;

//---------------------------------------------------------------------------------------------------------------------*

struct TaskControlBlock ;

//---------------------------------------------------------------------------------------------------------------------*

static inline void guardlist_removeTask (GuardList & ioList, TaskControlBlock * inTask) ;

//---------------------------------------------------------------------------------------------------------------------*

static void guardDescriptor_removeAllGuards (GuardDescriptor & ioGuardDescriptor, TaskControlBlock * inTask) {
  const unsigned guardCount = ioGuardDescriptor.mCount ;
  for (unsigned i=0 ; i<guardCount ; i++) {
    guardlist_removeTask (* (ioGuardDescriptor.mListArray [i]), inTask) ;
  }
  ioGuardDescriptor.mCount = 0 ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void guardDescriptor_appendGuard (GuardDescriptor & ioGuardDescriptor, GuardList * ioGuardListPtr) {
  const unsigned guardCount = ioGuardDescriptor.mCount ;
  ioGuardDescriptor.mListArray [guardCount] = ioGuardListPtr ;
  ioGuardDescriptor.mCount = guardCount + 1 ;
}

//---------------------------------------------------------------------------------------------------------------------*
