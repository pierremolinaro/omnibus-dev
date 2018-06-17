//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//   T A S K    R O U T I N E    T Y P E                                                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (* RoutineTaskType) (void) ;

//---------------------------------------------------------------------------------------------------------------------*
//    CORTEX-M4 EXCEPTION FRAME (WITHOUT FLOATING-POINT STORAGE)                                                       *
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
//---------------------------------------------------------------------------------------------------------------------*
//    CORTEX-M4 EXCEPTION FRAME (WITH FLOATING-POINT STORAGE)                                                          *
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//         PSP+104-> |                            |                                                                    *
//                   |----------------------------| \                                                                  *
//         PSP+100-> | <<unused>>                 |  |                                                                 *
//                   |----------------------------|  |                                                                 *
//         PSP+96 -> | FPSCR                      |  |                                                                 *
//                   |----------------------------|  |                                                                 *
//         PSP+92 -> | S15                        |  |                                                                 *
//                   |----------------------------|  |                                                                 *
//         PSP+88 -> | S14                        |  |                                                                 *
//                   |----------------------------|  |                                                                 *
//         PSP+84 -> | S13                        |  |                                                                 *
//                   |----------------------------|  |                                                                 *
//         PSP+80 -> | S12                        |  |                                                                 *
//                   |----------------------------|  |                                                                 *
//         PSP+76 -> | S11                        |  |                                                                 *
//                   |----------------------------|  |                                                                 *
//         PSP+72 -> | S10                        |  |                                                                 *
//                   |----------------------------|  |                                                                 *
//         PSP+68 -> | S9                         |  |                                                                 *
//                   |----------------------------|  |                                                                 *
//         PSP+64 -> | S8                         |  |                                                                 *
//                   |----------------------------|  |                                                                 *
//         PSP+60 -> | S7                         |  |                                                                 *
//                   |----------------------------|  |                                                                 *
//         PSP+56 -> | S6                         |  |                                                                 *
//                   |----------------------------|  |                                                                 *
//         PSP+52 -> | S5                         |  |                                                                 *
//                   |----------------------------|  |                                                                 *
//         PSP+48 -> | S4                         |  |                                                                 *
//                   |----------------------------|  |                                                                 *
//         PSP+44 -> | S3                         |  |                                                                 *
//                   |----------------------------|  |                                                                 *
//         PSP+40 -> | S2                         |  |                                                                 *
//                   |----------------------------|  |                                                                 *
//         PSP+36 -> | S1                         |  |                                                                 *
//                   |----------------------------|  |                                                                 *
//         PSP+32 -> | S0                         |  |                                                                 *
//                   |----------------------------|  |                                                                 *
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
} ExceptionFrame_without_floatingPointStorage ;

//----------------------------------------------------------------------------------------------------------------------

typedef struct {
  ExceptionFrame_without_floatingPointStorage mFrame ;
  unsigned mS [16] ;
  unsigned mFPSCR ;
  unsigned mUnused ;
} ExceptionFrame_with_floatingPointStorage ;

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
  ExceptionFrame_without_floatingPointStorage * mPSP ;
  unsigned mLR_RETURN_CODE ;
} TaskContext ;

//---------------------------------------------------------------------------------------------------------------------*

static inline void kernel_set_task_context (TaskContext & ioTaskContext,
                                            const unsigned inStackBufferAddress,
                                            const unsigned inStackBufferSize,
                                            RoutineTaskType inTaskRoutine,
                                            const bool inHasFloatingPointContext) __attribute__ ((always_inline)) ;

static inline void kernel_set_task_context (TaskContext & ioTaskContext,
                                            const unsigned inStackBufferAddress,
                                            const unsigned inStackBufferSize,
                                            RoutineTaskType inTaskRoutine,
                                            const bool inHasFloatingPointContext) {
//--- Initialize LR
  ioTaskContext.mLR_RETURN_CODE = inHasFloatingPointContext ? 0xFFFFFFED : 0xFFFFFFFD ; // Thread mode, process stack
//--- Stack Pointer initial value
  unsigned initialTopOfStack = inStackBufferAddress + inStackBufferSize ;
  initialTopOfStack -= inHasFloatingPointContext
    ? sizeof (ExceptionFrame_with_floatingPointStorage)
    : sizeof (ExceptionFrame_without_floatingPointStorage)
  ;
//--- Initialize SP
  auto * ptr = (ExceptionFrame_without_floatingPointStorage *) initialTopOfStack ;
  ioTaskContext.mPSP = ptr ;
//--- Initialize PC
  ptr->mPC = (unsigned) inTaskRoutine ;
//--- Initialize CPSR
  ptr->mXPSR = 1 << 24 ; // Thumb bit
}
