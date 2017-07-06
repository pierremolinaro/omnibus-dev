//---------------------------------------------------------------------------------------------------------------------*

static void kernel_set_task_context (TaskControlBlock * inTaskDescriptor,
                                     RoutineTaskType inTaskRoutine) {
//--- Initialize PC
  inTaskDescriptor->mTaskContext.mPC_USR = (unsigned) inTaskRoutine ;
//--- Initialize SP
  const unsigned bottomOfStack = (unsigned) inTaskDescriptor->mStackBufferAddress ;
  const unsigned stackSize = inTaskDescriptor->mStackBufferSize ;
  inTaskDescriptor->mTaskContext.mSP_USR = bottomOfStack + stackSize ;
//--- Compute initial free stack size
  inTaskDescriptor->mStackFreeSize = stackSize ;
//--- Initialize CPSR
  inTaskDescriptor->mTaskContext.mCPSR = 0x10 ; // ARM USER MODE, IRQ and FIRQ interrupts enabled
}

//---------------------------------------------------------------------------------------------------------------------*

static void kernel_set_return_code (TaskContext * inTaskContext, const unsigned inReturnCode) {
  inTaskContext->mR0 = inReturnCode ;
}

//---------------------------------------------------------------------------------------------------------------------*
