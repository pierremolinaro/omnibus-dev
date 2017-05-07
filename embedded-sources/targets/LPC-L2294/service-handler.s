@----------------------------------------------------------------------------------------------------------------------*
@                                                                                                                      *
@              A R M 4    C O N T E X T                                                                                *
@                                                                                                                      *
@----------------------------------------------------------------------------------------------------------------------*
@                                                                                                                      *
@ ARM4 task context is stored is an 17 * 4 byte buffer.                                                                *
@                                                                                                                      *
@ The gRunningTaskControlBlock shared variable points to the buffer associated to the current task.                    *
@                                                                                                                      *
@                                                                      offset                                          *
@                                              *---------------------*                                                 *
@                                              | PC_USR              | +64                                             *
@                                              | R12                 | +60                                             *
@                                              | R11                 | +56                                             *
@                                              | R10                 | +52                                             *
@                                              | R9                  | +48                                             *
@                                              | R8                  | +44                                             *
@                                              | R7                  | +40                                             *
@                                              | R6                  | +36                                             *
@                                              | R5                  | +32                                             *
@                                              | R4                  | +28                                             *
@                                              | R3                  | +24                                             *
@                                              | R2                  | +20                                             *
@                                              | R1                  | +16                                             *
@                                              | R0                  | +12                                             *
@                                              | LR_USR              | + 8                                             *
@    *--------------------------------*        | SP_USR              | + 4                                             *
@    | gRunningTaskControlBlock       +------> | CPSR                | + 0                                             *
@    *--------------------------------*        *---------------------*                                                 *
@                                                                                                                      *
@----------------------------------------------------------------------------------------------------------------------*
@                                                                                                                      *
@        A R M    A B I                                                                                                *
@                                                                                                                      *
@----------------------------------------------------------------------------------------------------------------------*
@                                                                                                                      *
@    From document ARM IHI 0042C, current through ABI release 2.07                                                     *
@                                                                                                                      *
@ The first four registers r0-r3 are used to pass argument values into a subroutine and to return a result value from  *
@ a function. They may also be used to hold intermediate values within a routine (but, in general, only between        *
@ subroutine calls).                                                                                                   *
@                                                                                                                      *
@ A subroutine must preserve the contents of the registers r4-r8, r10, r11 and SP (and r9 in PCS variants that         *
@ designate r9 as v6).                                                                                                 *
@                                                                                                                      *
@ So we can freely use r9 in SWI handler ? No, we preserve r4-r11                                                      *
@                                                                                                                      *
@----------------------------------------------------------------------------------------------------------------------*
@                                                                                                                      *
@        S W I    H A N D L E R                                                                                        *
@                                                                                                                      *
@----------------------------------------------------------------------------------------------------------------------*

	.section	.text.as_swi_handler,"ax",%progbits

  .global as_swi_handler

as_swi_handler:
@ Here :
@  - lr points to the next instruction after the SWI instruction
@  - the user sp can be retrieved into reg register using mrs reg, spsr
@  - do not modify r0-r3, they contain actual parameters
@-------------------------- Save working registers
  stmfd sp!, {r6-r8, lr}
@-------------------------- Led On (uses only r6 and r7)
  ACTIVITY_LED_ON @ macro defined in activity_led_management.s file
@--------------------------- Get SWI Immediat value
@   LDRH loads a halfword from memory and zero-extends it to a 32-bit word.
  ldrh  r6, [lr, #-4] @ Get 16 last bits of swi instruction
@--------------------------- r8 <- address of sys_xxx routine to call
  ldr   r8, =__swi_dispatcher_table
  ldr   r8, [r8, r6, LSL #2]
@--------------------------- R6 <- address of gRunningTaskControlBlock variable
  ldr   r6, =gRunningTaskControlBlock
@--------------------------- Save context pointer of current running task in R7
  ldr   r7, [r6]
@--------------------------- Call sys_xxx routine
  mov   lr, pc
  bx    r8
@--------------------------- Save 32-bit return value in R8
  mov   r8, r0
@--------------------------- Select Running Task
  bl    kernel_selectTaskToRun
@--------------------------- Restore return value from r8
  mov   r0, r8
@--------------------------- R2 <- address of new running task context
@  R7: context of running task on SWI call
@  R6: 'gRunningTaskControlBlock' address
  ldr   r2, [r6] @ R2 <- address of new running task context
  mov   r3, r7 @ R3: context of running task on SWI call
@--------------------------- Restore task registers
  ldmfd sp!, {r6-r8, lr}
@--------------------------- Context Switch
  teq    r2, r3 @ Compare R2 (new task), with R3 (calling task)
  moveq  pc, lr @ Return from interrupt if no context swith
@--------------------------- Perform the context switch
@----------- First save context of calling task
@--- If sp is NULL, there is no context to save
  movs  r3, r3
  beq   __restore_context_of_running_task
@--- Save registers R0, ..., R12, LR of calling task
  add   r3, r3, #12 @ Make room for sp_usr, lr_usr and cpsr_usr
  stmia r3, {r0-r12, lr}
@--- cpsr_usr -> R8
  mrs   r8, spsr
@--- Save sp_usr (R8)
  str   r8, [r3, #-12]
@--- Store sp_usr, lr_usr
  sub   r3, r3, #8 @ Restore original value of R8
  stmia r3, {r13, r14}^
@---------------------------------- Restore context of the new running task
__restore_context_of_running_task:
  movs  r2, r2
  beq   __no_context_to_restore
@--- Restore cpsr_usr from R8
  ldr   r8, [r2]
  msr   spsr, r8
@--- Restore sp_usr, lr_usr
  add   r2, r2, #4
  ldmia r2, {r13, r14}^
@--- Restore registers R0, ..., R12, and PC
@    (^ and pc using perform here return from interrupt)
  add   r2, r2, #8
  ldmia r2, {r0-r12, pc}^

@----------------------------------------------------------------------------------------------------------------------*

__no_context_to_restore:
@--- Led Off (uses only r6 and r7)
  ACTIVITY_LED_OFF @ macro defined in activity_led_management.s file
@--- Set User Mode, interrupts enabled
  msr   CPSR_c, #ARM_MODE_USER
@--- Wait for interrupt
__wait_interrupt:
  b     __wait_interrupt

