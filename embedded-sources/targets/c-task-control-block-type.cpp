//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

// GUARD_EVALUATING_OR_OUTSIDE should be the first constant
typedef enum {GUARD_EVALUATING_OR_OUTSIDE, GUARD_DID_CHANGE, GUARD_WAITING_FOR_CHANGE} GuardState ;

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
//   T A S K    C O N T R O L    B L O C K
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

typedef struct TaskControlBlock {
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
//--- Guards
  GuardDescriptor mGuardDescriptor ;
  GuardState mGuardState ;
//--- Task index
  unsigned char mTaskIndex ;
//--- ActivationCount
  signed char mActivationCount ;
//--- User result
  bool mUserResult ;
//---
} TaskControlBlock ;

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

static TaskControlBlock gTaskDescriptorArray [!TASKCOUNT!] ;

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
//   RUNNING TASK DESCRIPTOR POINTER
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

TaskControlBlock * gRunningTaskControlBlockPtr ; // Shared with assembly code (arm_context.s)

