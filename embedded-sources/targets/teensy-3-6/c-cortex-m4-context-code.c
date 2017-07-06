//---------------------------------------------------------------------------------------------------------------------*

static void kernel_set_task_context (TaskControlBlock * inTaskDescriptor,
                                     RoutineTaskType inTaskRoutine) {
//--- Initialize LR
  inTaskDescriptor->mTaskContext.mLR_RETURN_CODE = 0xFFFFFFFD ; // Thread mode, process stack
//--- Stack Pointer initial value
  const unsigned bottomOfStack = (unsigned) inTaskDescriptor->mStackBufferAddress ;
  const unsigned stackSize = inTaskDescriptor->mStackBufferSize ;
  const unsigned initialTopOfStack = bottomOfStack + stackSize - sizeof (StackedRegisters) ; // 8 stacked registers
//--- Initialize SP
  StackedRegisters * ptr = (StackedRegisters *) (initialTopOfStack) ;
  inTaskDescriptor->mTaskContext.mSP_USR = ptr ;
//--- Compute initial free stack size
  inTaskDescriptor->mStackFreeSize = initialTopOfStack - bottomOfStack ;
//--- Initialize PC
  ptr->mPC = (unsigned) inTaskRoutine ;
//--- Initialize CPSR
  ptr->mXPSR = 1 << 24 ; // Thumb bit
}

//---------------------------------------------------------------------------------------------------------------------*

static void kernel_set_return_code (TaskContext * inTaskContext,
                                    const unsigned inReturnCode) {
  StackedRegisters * ptr = inTaskContext->mSP_USR ;
  ptr->mR0 = inReturnCode ;
}

//---------------------------------------------------------------------------------------------------------------------*
