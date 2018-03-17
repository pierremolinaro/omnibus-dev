//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//   T A S K    R O U T I N E    T Y P E                                                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (* RoutineTaskType) (void) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//   T A S K    C O N T E X T                                                                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*
//                                           *---------------------* +68
//                                           | PC_USR              | +64 [16]
//                                           | R12                 | +60 [15]
//                                           | R11                 | +56 [14]
//                                           | R10                 | +52 [13]
//                                           | R9                  | +48 [12]
//                                           | R8                  | +44 [11]
//                                           | R7                  | +40 [10]
//                                           | R6                  | +36 [ 9]
//                                           | R5                  | +32 [ 8]
//                                           | R4                  | +28 [ 7]
//                                           | R3                  | +24 [ 6]
//                                           | R2                  | +20 [ 5]
//                                           | R1                  | +16 [ 4]
//                                           | R0                  | +12 [ 3]
//                                           | LR_USR              | + 8 [ 2]
// *--------------------------------*        | SP_USR              | + 4 [ 1]
// |                                +------> | CPSR                | + 0 [ 0]
// *--------------------------------*        *---------------------*

//---------------------------------------------------------------------------------------------------------------------*

typedef struct {
  unsigned mCPSR ;
  unsigned mSP_USR ;
  unsigned mLR_USR ;
  unsigned mR0 ;
  unsigned mR1 ;
  unsigned mR2 ;
  unsigned mR3 ;
  unsigned mR4 ;
  unsigned mR5 ;
  unsigned mR6 ;
  unsigned mR7 ;
  unsigned mR8 ;
  unsigned mR9 ;
  unsigned mR10 ;
  unsigned mR11 ;
  unsigned mR12 ;
  unsigned mPC_USR ;
} TaskContext ;

//---------------------------------------------------------------------------------------------------------------------*

static void kernel_set_task_context (TaskContext & ioTaskContext,
                                     const unsigned inStackBufferAddress,
                                     const unsigned inStackBufferSize,
                                     RoutineTaskType inTaskRoutine) {
//--- Initialize PC
  ioTaskContext.mPC_USR = (unsigned) inTaskRoutine ;
//--- Initialize SP
  ioTaskContext.mSP_USR = inStackBufferAddress + inStackBufferSize ;
//--- Initialize CPSR
  ioTaskContext.mCPSR = 0x10 ; // ARM USER MODE, IRQ and FIRQ interrupts enabled
}

//---------------------------------------------------------------------------------------------------------------------*
