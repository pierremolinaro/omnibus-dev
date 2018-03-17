//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//   T A S K    R O U T I N E    T Y P E                                                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (* RoutineTaskType) (void) ;

//---------------------------------------------------------------------------------------------------------------------*
//                C O R T E X    M 4    S T A C K E D    R E G I S T E R S                                             *
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//         PSP+32 -> |                            |                                                                    *
//                   |----------------------------| \                                                                  *
//         PSP+28 -> | xPSR                       |  |                                                                 *
//                   |----------------------------|  |                                                                 *
//         PSP+24 -> | PC (after SVC instruction) |  |                                                                 *
//                   |----------------------------|  |                                                                 *
//         PSP+20 -> | LR                         |  |                                                                 *
//                   |----------------------------|  |                                                                 *
//         PSP+16 -> | R12                        |  |  Saved by interrupt response                                    *
//                   |----------------------------|  |                                                                 *
//         PSP+12 -> | R3                         |  |                                                                 *
//                   |----------------------------|  |                                                                 *
//         PSP+8  -> | R2                         |  |                                                                 *
//                   |----------------------------|  |                                                                 *
//         PSP+4  -> | R1                         |  |                                                                 *
//                   |----------------------------|  |                                                                 *
//   /---- PSP ----> | R0                         |  |                                                                 *
//   |               |----------------------------| /                                                                  *
//   |                                                                                                                 *
//   |                                        *---------------------*
//   |                                        | LR return code      | +36 [ 9]
//   |                                        *---------------------*
//   \----------------------------------------| R13 (PSP)           | +32 [ 8]
//                                            *---------------------*
//                                            | R11                 | +28 [ 7]
//                                            *---------------------*
//                                            | R10                 | +24 [ 6]
//                                            *---------------------*
//                                            | R9                  | +20 [ 5]
//                                            *---------------------*
//                                            | R8                  | +16 [ 4]
//                                            *---------------------*
//                                            | R7                  | +12 [ 3]
//                                            *---------------------*
//                                            | R6                  | + 8 [ 2]
//                                            *---------------------*
//                                            | R5                  | + 4 [ 1]
//  *--------------------------------*        *---------------------*
//  | gRunningTaskContextSaveAddress +------> | R4                  | + 0 [ 0]
//  *--------------------------------*        *---------------------*
//
//----------------------------------------------------------------------------------------------------------------------

typedef struct {
  unsigned mR0 ;
  unsigned mR1 ;
  unsigned mR2 ;
  unsigned mR3 ;
  unsigned mR12 ;
  unsigned mLR ;
  unsigned mPC ;
  unsigned mXPSR ;
} StackedRegisters ;

//----------------------------------------------------------------------------------------------------------------------

typedef struct {
  unsigned mR4 ;
  unsigned mR5 ;
  unsigned mR6 ;
  unsigned mR7 ;
  unsigned mR8 ;
  unsigned mR9 ;
  unsigned mR10 ;
  unsigned mR11 ;
  StackedRegisters * mSP_USR ;
  unsigned mLR_RETURN_CODE ;
} TaskContext ;

//---------------------------------------------------------------------------------------------------------------------*

static inline void kernel_set_task_context (TaskContext & ioTaskContext,
                                            const unsigned inStackBufferAddress,
                                            const unsigned inStackBufferSize,
                                            RoutineTaskType inTaskRoutine) __attribute__ ((always_inline)) ;

static inline void kernel_set_task_context (TaskContext & ioTaskContext,
                                            const unsigned inStackBufferAddress,
                                            const unsigned inStackBufferSize,
                                            RoutineTaskType inTaskRoutine) {
//--- Initialize LR
  ioTaskContext.mLR_RETURN_CODE = 0xFFFFFFFD ; // Thread mode, process stack
//--- Stack Pointer initial value
  const unsigned initialTopOfStack = inStackBufferAddress + inStackBufferSize - sizeof (StackedRegisters) ; // 8 stacked registers
//--- Initialize SP
  StackedRegisters * ptr = (StackedRegisters *) (initialTopOfStack) ;
  ioTaskContext.mSP_USR = ptr ;
//--- Initialize PC
  ptr->mPC = (unsigned) inTaskRoutine ;
//--- Initialize CPSR
  ptr->mXPSR = 1 << 24 ; // Thumb bit
}
