//---------------------------------------------------------------------------------------------------------------------*

static void kernel_set_task_context (TaskControlBlock * inTaskDescriptor,
                                     RoutineTaskType inTaskRoutine) {
//--- Initialize LR
  inTaskDescriptor->mTaskContext.mLR_RETURN_CODE = 0xFFFFFFFD ; // Thread mode, process stack, no floating point context
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
//  N O T E    F R E E    S T A C K    S I Z E  (callable in service mode)                                             *
//---------------------------------------------------------------------------------------------------------------------*

void noteCurrentTaskFreeStackSize (void) asm ("!FUNC!noteCurrentTaskFreeStackSize") ;

void noteCurrentTaskFreeStackSize (void) {
  if (gRunningTaskControlBlockPtr != nullptr) { // Only if a task was running
  //--- Get current task stack pointer current value
    const unsigned stackPointer = (unsigned) gRunningTaskControlBlockPtr->mTaskContext.mSP_USR ;
  //--- Compute current free stack size
    const unsigned bottomOfStack = (unsigned) gRunningTaskControlBlockPtr->mStackBufferAddress ;
    const unsigned currentFreeStack = stackPointer - bottomOfStack ;
  //--- If current free stack size lower than registered free stack size, assign new value
    if (currentFreeStack < gRunningTaskControlBlockPtr->mStackFreeSize) {
      gRunningTaskControlBlockPtr->mStackFreeSize = currentFreeStack ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*
