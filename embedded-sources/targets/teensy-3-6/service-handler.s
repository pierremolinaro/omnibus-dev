@----------------------------------------------------------------------------------------------------------------------*
@                                                                                                                      *
@                 S V C    H A N D L E R    ( D O U B L E    S T A C K    M O D E )                                    *
@                                                                                                                      *
@----------------------------------------------------------------------------------------------------------------------*
@                                                                                                                      *
@          PSP+32 -> |                            |                                                                    *
@                    |----------------------------| \
@          PSP+28 -> | xPSR                       |  |
@                    |----------------------------|  |
@          PSP+24 -> | PC (after SVC instruction) |  |
@                    |----------------------------|  |
@          PSP+20 -> | LR                         |  |
@                    |----------------------------|  |
@          PSP+16 -> | R12                        |  |  Saved by interrupt response
@                    |----------------------------|  |
@          PSP+12 -> | R3                         |  |
@                    |----------------------------|  |
@          PSP+8  -> | R2                         |  |
@                    |----------------------------|  |
@          PSP+4  -> | R1                         |  |
@                    |----------------------------|  |
@     /--- PSP ----> | R0                         |  |
@     |              |----------------------------| /
@     |                                                                                                                *
@     |                                      *---------------------*
@     |                                      | LR return code      | +36 [ 9]
@     |                                      *---------------------*
@     \------------------------------------- | R13 (PSP)           | +32 [ 8]
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
@  | gRunningTaskControlBlockPtr    +------> | R4                  | + 0 [ 0]
@  *--------------------------------*        *---------------------*
@                                                                                                                      *
@----------------------------------------------------------------------------------------------------------------------*

	.section	.bss.background.task.context.ptr, "aw", %nobits
  .align	  2

background.task.context.ptr:
  .space	4

@----------------------------------------------------------------------------------------------------------------------*

	.section	".text.as_svc_handler","ax",%progbits

  .global as_svc_handler
  .type as_svc_handler, %function

as_svc_handler:
@----------------------------------------- Save preserved registers
  push  {r4, lr}
@----------------------------------------- R4 <- thread SP
  mrs   r4, psp
@----------------------------------------- Restore R0, R1, R2 and R3 from saved stack
  ldmia r4!, {r0, r1, r2, r3}       @ R4 incremented by 16
@----------------------------------------- R4 <- Address of SVC instruction
  ldr   r4, [r4, #8]    @ 16 + 8 = 24 : 6 stacked registers before saved PC
@----------------------------------------- R12 <- bits 0-7 of SVC instruction
  ldrb  r12, [r4, #-2]   @ R12 is service call index
@----------------------------------------- R4 <- address of dispatcher table
  ldr   r4, =__svc_dispatcher_table
@----------------------------------------- R12 <- address of routine to call
  ldr   r12, [r4, r12, lsl #2]   @ R12 = R4 + (R12 << 2)
@----------------------------------------- R4 <- calling task context
  ldr   r4, =gRunningTaskControlBlockPtr
  ldr   r4, [r4]
@----------------------------------------- Call service routine
  blx   r12         @ R4:calling task context address, R5:thread PSP
@--- Continues in sequence to handle.context.switch

@----------------------------------------------------------------------------------------------------------------------*
@                                                                                                                      *
@                 H A N D L E    C O N T E X T    S W I T C H    ( D O U B L E    S T A C K    M O D E )               *
@                                                                                                                      *
@  On entry:                                                                                                           *
@    - R4 contains the runnning task save context address,                                                             *
@    - R4 and LR of running task have been pushed on handler task.                                                     *
@                                                                                                                      *
@----------------------------------------------------------------------------------------------------------------------*

handle.context.switch:
@----------------------------------------- Select task to run
  bl    kernel_selectTaskToRun
@----------------------------------------- R0 <- calling task context, R1 <- new task context
  ldr   r1, =gRunningTaskControlBlockPtr
  mov   r0, r4
  ldr   r1, [r1]
@----------------------------------------- Restore preserved registers
  pop   {r4, lr}
@----------------------------------------- Task context did change ?
  cmp   r0, r1  @ R0:old task context, R1:new task context
  beq   no.context.change
@----------------------------------------- Save context of preempted task (if any)
  mrs   r12, psp
  cbz   r0, store.backround.task.context @ if old context is NULL, save background task context
@--- Save registers r4 to r11, PSP, LR
  stmia r0, {r4, r5, r6, r7, r8, r9, r10, r11, r12, lr}
  b     perform.restore.context
store.backround.task.context:
  ldr   r0, =background.task.context.ptr
  str   r12, [r0]
@----------------------------------------- Restore context of activated task (if any)
perform.restore.context:
  cbz   r1, run.background.task
  ldmia r1, {r4, r5, r6, r7, r8, r9, r10, r11, r12, lr}
  msr   psp, r12
  bx    lr
@----------------------------------------- No context change
no.context.change:
  cbz   r0, run.background.task
  bx    lr
@----------------------------------------- Run background task
run.background.task:
@--- Switch off activity led
  bl   func.activityLedOff_28__29_  @ Defined in PLM source
@--- Restore PSP of background task
  ldr  r0, =background.task.context.ptr
  ldr  r0, [r0]
  msr  psp, r0
@--- Return from exception (thread mode, process stack, no floating point)
  ldr  r1, =0xFFFFFFFD
  bx   r1

