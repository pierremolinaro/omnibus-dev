//---------------------------------------------------------------------------------------------------------------------*

#define TASK_COUNT (!TASKCOUNT!)
#define GUARD_COUNT (!GUARDCOUNT!)

//---------------------------------------------------------------------------------------------------------------------*

typedef unsigned GuardList ;

//---------------------------------------------------------------------------------------------------------------------*

// GUARD_EVALUATING_OR_OUTSIDE should be the first constant
typedef enum {GUARD_EVALUATING_OR_OUTSIDE, GUARD_DID_CHANGE, GUARD_WAITING_FOR_CHANGE} GuardState ;

//---------------------------------------------------------------------------------------------------------------------*
//   T A S K    C O N T R O L    B L O C K                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

typedef struct {
//--- Context buffer
  TaskContext mTaskContext ; // SHOULD BE THE FIRST FIELD
//--- Task name
  const char * mTaskName ;
//--- This field is used for deadline
  unsigned mTaskDeadline ;
//--- Stack buffer parameters
  unsigned * mStackBufferAddress ;
  unsigned mStackBufferSize ; // In bytes
  unsigned mStackFreeSize ; // In bytes
//--- Task index
  unsigned char mTaskIndex ;
//--- User result
  bool mUserResult ;
//--- Guards
  GuardState mGuardState ;
  bool mHaveDeadlineGuard ;
  unsigned mGuardCount ;
  GuardList * mGuardListArray [GUARD_COUNT] ;
} TaskControlBlock ;

//---------------------------------------------------------------------------------------------------------------------*

static TaskControlBlock gTaskDescriptorArray [TASK_COUNT] ;

//---------------------------------------------------------------------------------------------------------------------*
//   RUNNING TASK DESCRIPTOR POINTER                                                                                   *
//---------------------------------------------------------------------------------------------------------------------*

TaskControlBlock * gRunningTaskControlBlockPtr ; // Shared with assembly code (arm_context.s)

