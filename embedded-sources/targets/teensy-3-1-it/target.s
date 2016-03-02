	.syntax unified
	.cpu cortex-m4
	.thumb

@----------------------------------------------------------------------------------------------------------------------*
@                                                                                                                      *
@       A C T I V I T Y    L E D                                                                                       *
@                                                                                                                      *
@  Activity led is led 13 on Teensy board (bit 5 of port C, led is on when this bit is high)                           *
@                                                                                                                      *
@----------------------------------------------------------------------------------------------------------------------*

  GPIOC_PSOR = 0x400FF084
  GPIOC_PCOR = 0x400FF088

@----------------------------------------------------------------------------------------------------------------------*
@  ACTIVITY LED ON        When this macro is used, we can only use R4 and R5 registers.                                *
@----------------------------------------------------------------------------------------------------------------------*


  .macro ACTIVITY_LED_ON
    ldr   r4, =GPIOC_PSOR
    movs  r5, # 1 << 5
    str   r5, [r4]
  .endm
  
@----------------------------------------------------------------------------------------------------------------------*
@  ACTIVITY LED OFF        When this macro is used, we can use any register.                                           *
@----------------------------------------------------------------------------------------------------------------------*

  .macro ACTIVITY_LED_OFF
    ldr   r4, =GPIOC_PCOR
    movs  r5, # 1 << 5
    str   r5, [r4]
  .endm

@----------------------------------------------------------------------------------------------------------------------*
@                                                                                                                      *
@                 S V C    H A N D L E R    ( D O U B L E    S T A C K    M O D E )                                    *
@                                                                                                                      *
@----------------------------------------------------------------------------------------------------------------------*
@                                                                                                                      *
@                    |                            |                                                                    *
@          PSP+32 -> |----------------------------| \ 
@                    | xPSR                       |  |
@          PSP+28 -> |----------------------------|  |
@                    | PC (after SVC instruction) |  |
@          PSP+24 -> |----------------------------|  |
@                    | LR                         |  |
@          PSP+20 -> |----------------------------|  |
@                    | R12                        |  |  Saved by interrupt response
@          PSP+16 -> |----------------------------|  |
@                    | R3                         |  |
@          PSP+12 -> |----------------------------|  |
@                    | R2                         |  |
@          PSP+8  -> |----------------------------|  |
@                    | R1                         |  |
@          PSP+4  -> |----------------------------|  |
@                    | R0                         |  |
@          PSP    -> |----------------------------| /
@                                                                                                                      *
@----------------------------------------------------------------------------------------------------------------------*
@                                                                                                                      *
@                                            *---------------------*
@                                            | LR return code      | +36 [ 9]
@                                            *---------------------*
@                                            | R13 (PSP)           | +32 [ 8]
@                                            *---------------------*
@                                            | R11                 | +28 [ 7]
@                                            *---------------------*
@                                            | R10                 | +24 [ 6]
@                                            *---------------------*
@                                            | R9                  | +20 [ 5]
@                                            *---------------------*
@                                            | R8                  | +16 [ 4]
@                                            *---------------------*
@                                            | R7                  | +12 [ 3]
@                                            *---------------------*
@                                            | R6                  | + 8 [ 2]
@                                            *---------------------*
@                                            | R5                  | + 4 [ 1]
@  *--------------------------------*        *---------------------*
@  | gRunningTaskContextSaveAddress +------> | R4                  | + 0 [ 0]
@  *--------------------------------*        *---------------------*
@                                                                                                                      *
@----------------------------------------------------------------------------------------------------------------------*

.global backgroundTaskContext
.lcomm backgroundTaskContext, 4

@----------------------------------------------------------------------------------------------------------------------*

  .global as_svcHandler
  .type as_svcHandler, %function

as_svcHandler:
@----------------------------------------- Save preserved registers
  push  {r4, r5, lr}
@----------------------------------------- R5 <- thread SP
  mrs   r5, psp
@----------------------------------------- R4 <- Address of SVC instruction
  ldr   r4, [r5, #24]    @ 24 : 6 stacked registers before saved PC
@----------------------------------------- R12 <- bits 0-7 of SVC instruction
  ldrb  r12, [r4, #-2]   @ R12 is service call index
@----------------------------------------- R4 <- address of dispatcher table
  ldr   r4, =__svc_dispatcher_table
@----------------------------------------- R12 <- address of routine to call
  ldr   r12, [r4, r12, lsl #2]   @ R12 = R4 + (R12 << 2)
@----------------------------------------- R4 <- calling task context
  ldr   r4, =gRunningTaskContextSaveAddress
  ldr   r4, [r4]
@----------------------------------------- Call service routine
  blx   r12         @ R4:calling task context address, R5:thread PSP
@----------------------------------------- Set return code (from R0 to R3) in stacked registers
  stmia r5!, {r0, r1, r2, r3}
@--- Continues in sequence to _handle_context_switch

@----------------------------------------------------------------------------------------------------------------------*
@                                                                                                                      *
@                 H A N D L E    C O N T E X T    S W I T C H    ( D O U B L E    S T A C K    M O D E )               *
@                                                                                                                      *
@  On entry:                                                                                                           *
@    - R4 contains the runnning task save context address,                                                             *
@    - R5 can be freely used,                                                                                          *
@    - R4, R5 and LR of running task have been pushed on handler task.                                                 *
@                                                                                                                      *
@----------------------------------------------------------------------------------------------------------------------*

_handle_context_switch:
@----------------------------------------- Select task to run
  bl    kernel_selectTaskToRun
@----------------------------------------- R0 <- calling task context, R1 <- new task context
  ldr   r1, =gRunningTaskContextSaveAddress
  mov   r0, r4
  ldr   r1, [r1]
@----------------------------------------- Restore preserved registers
  pop   {r4, r5, lr}
@----------------------------------------- Task context did change ?
  cmp   r0, r1  @ R0:old task context, R1:new task context
  it    eq  @ if equal, no context change, perform a return from exception
  bxeq  lr
@----------------------------------------- Save context of preempted task (if any)
  cbz   r0, __perform_restore_context @ if old context is NULL, no context to save
@--- Save registers r4 to r11, PSP, LR
  mrs     r12, psp
  stmia   r0, {r4, r5, r6, r7, r8, r9, r10, r11, r12, lr}
@----------------------------------------- Restore context of activated task (if any)
__perform_restore_context:
  cbz    r1, __no_context_to_restore
  ldmia  r1, {r4, r5, r6, r7, r8, r9, r10, r11, r12, lr}
  msr    psp, r12
__direct_return_for_null_service: 
  bx     lr
@----------------------------------------- No context to restore
__no_context_to_restore:
@--- Restore PSP of background task
  ldr  r0, =backgroundTaskContext
  ldr  r0, [r0]
  msr  psp, r0
@--- Return from exception
  ldr  r1, =0xFFFFFFFD
  bx   r1

@----------------------------------------------------------------------------------------------------------------------*
@                                                                                                                      *
@                 S Y S T I C K    H A N D L E R    ( D O U B L E    S T A C K    M O D E )                            *
@                                                                                                                      *
@----------------------------------------------------------------------------------------------------------------------*

  .global as_systickHandler
  .type as_systickHandler, %function

as_systickHandler:
@----------------------------------------- Save preserved registers
  push  {r4, r5, lr}
@----------------------------------------- Activity led On (macro that uses only R4 and R5)
  ACTIVITY_LED_ON
@----------------------------------------- R4 <- running task context
  ldr   r4, =gRunningTaskContextSaveAddress
  ldr   r4, [r4]
@----------------------------------------- Call Systick handler (C routine)
  bl    proc.systickHandler
@----------------------------------------- Test backgroundTaskContext to check if init passed
  ldr   r5, =backgroundTaskContext
  ldr   r5, [r5]
  cmp   r5, #0
  bne   _handle_context_switch
@----------------------------------------- Still in init : return
  pop   {r4, r5, pc}

@----------------------------------------------------------------------------------------------------------------------*
@                                                                                                                      *
@                 R E S E T    H A N D L E R    ( D O U B L E    S T A C K    M O D E )                                *
@                                                                                                                      *
@----------------------------------------------------------------------------------------------------------------------*

.lcomm backgroundTaskStack, 32

@----------------------------------------------------------------------------------------------------------------------*

  .global as_resetHandler
  .type as_resetHandler, %function

as_resetHandler:
@--- Init micro controller
  bl configuration.on.boot
@--- Set PSP
  ldr r0, =backgroundTaskStack + 32
  msr psp, r0
@--- Set CONTROL register
  movs r2, #3
  msr  control, r2
  isb
@--- Set background task context
  subs r0, #32
  ldr  r1, =backgroundTaskContext
  str  r0, [r1]
@--- Start real-time kernel
  svc  #0
@--- Background task : infinite loop
infiniteLoop:
  ACTIVITY_LED_OFF
  wfi
  b  infiniteLoop

@----------------------------------------------------------------------------------------------------------------------*
