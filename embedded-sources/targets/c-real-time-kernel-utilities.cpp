//----------------------------------------------------------------------------------------------------------------------
//  G E T T I N G    F R E E    S T A C K    S I Z E
//----------------------------------------------------------------------------------------------------------------------

unsigned freeStackSize (void) asm ("!FUNC!freeStackSize") ;

unsigned freeStackSize (void) {
  return gRunningTaskControlBlockPtr->mStackFreeSize ;
}

//----------------------------------------------------------------------------------------------------------------------
//  N O T E    F R E E    S T A C K    S I Z E  (callable by task)
//----------------------------------------------------------------------------------------------------------------------

void noteFreeStackSize (void) asm ("!FUNC!noteFreeStackSize") ;

void noteFreeStackSize (void) {
//--- Get stack pointer current value
  unsigned stackPointer ; __asm__ ("mov %0, sp" : "=r" (stackPointer)) ;
//--- Compute current free stack size
  const unsigned currentFreeStack = stackPointer - (unsigned) gRunningTaskControlBlockPtr->mStackBufferAddress ;
//--- If current free stack size lower than registered free stack size, assign new value
  if (currentFreeStack < gRunningTaskControlBlockPtr->mStackFreeSize) {
    gRunningTaskControlBlockPtr->mStackFreeSize = currentFreeStack ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//  T A S K    C O U N T
//----------------------------------------------------------------------------------------------------------------------

unsigned taskCount (void) asm ("!FUNC!taskCount") ;

unsigned taskCount (void) {
  return !TASKCOUNT! ;
}

//----------------------------------------------------------------------------------------------------------------------
//  T A S K    G U A R D   S T A T E
//----------------------------------------------------------------------------------------------------------------------

GuardState taskGuardState (const unsigned inIndex) asm ("!FUNC!taskGuardState") ;

GuardState taskGuardState (const unsigned inIndex) {
  return gTaskDescriptorArray [inIndex].mGuardState ;
}

//----------------------------------------------------------------------------------------------------------------------
//  T A S K    N A M E
//----------------------------------------------------------------------------------------------------------------------

const char * taskName (const unsigned inIndex) asm ("!FUNC!taskName") ;

const char * taskName (const unsigned inIndex) {
  return gTaskDescriptorArray [inIndex].mTaskName ;
}

//----------------------------------------------------------------------------------------------------------------------
//  T A S K    F R E E   S T A S K    S I Z E
//----------------------------------------------------------------------------------------------------------------------

unsigned taskFreeStackSize (const unsigned inIndex) asm ("!FUNC!taskFreeStackSize") ;

unsigned taskFreeStackSize (const unsigned inIndex) {
  return gTaskDescriptorArray [inIndex].mStackFreeSize ;
}

//----------------------------------------------------------------------------------------------------------------------
//  T A S K    A L L O C A T E D   S T A S K    S I Z E
//----------------------------------------------------------------------------------------------------------------------

unsigned taskAllocatedStackSize (const unsigned inIndex) asm ("!FUNC!taskAllocatedStackSize") ;

unsigned taskAllocatedStackSize (const unsigned inIndex) {
  return gTaskDescriptorArray [inIndex].mStackBufferSize ;
}
