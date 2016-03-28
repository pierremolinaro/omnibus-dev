  .code 32
	.text
	.syntax unified
	.cpu	arm7tdmi-s

@----------------------------------------------------------------------------------------------------------------------*
@                                                                                                                      *
@       A C T I V I T Y    L E D    M A N A G E M E N T                                                                *
@                                                                                                                      *
@  This file provides macros for managing activity led.                                                                *
@  It is included by sources/xtr/arm-context.s file.                                                                   *
@  On the LPC-L2294 card, we use 'STAT' led (formely P1.23):                                                           *
@    P1.23 low: led on;                                                                                                *
@    P1.23 high: led off.                                                                                              *
@                                                                                                                      *
@----------------------------------------------------------------------------------------------------------------------*

  IO0CLR      = 0xE002800C
  IO0SET      = 0xE0028004
  IO1CLR      = 0xE002801C
  IO1SET      = 0xE0028014

@----------------------------------------------------------------------------------------------------------------------*
@                                                                                                                      *
@       A C T I V I T Y    L E D    O N                                                                                *
@                                                                                                                      *
@  When this macro is used, we can only use R6 and R7 registers.                                                       *
@----------------------------------------------------------------------------------------------------------------------*

  .macro ACTIVITY_LED_ON
@    ldr   r7, =IO1CLR
@    mov   r6, #(1 << 23)
@    str   r6, [r7]
  .endm
  
@----------------------------------------------------------------------------------------------------------------------*
@                                                                                                                      *
@       A C T I V I T Y    L E D    O F F                                                                              *
@                                                                                                                      *
@  When this macro is used, we can only use R6 and R7 registers.                                                       *
@----------------------------------------------------------------------------------------------------------------------*

  .macro ACTIVITY_LED_OFF
@    ldr   r7, =IO1SET
@    mov   r6, #(1 << 23)
@    str   r6, [r7]
  .endm
  
@----------------------------------------------------------------------------------------------------------------------*
@                                                                                                                      *
@                 R E S E T    H A N D L E R                                                                           *
@                                                                                                                      *
@----------------------------------------------------------------------------------------------------------------------*

@--- Modes defined status Register
   ARM_MODE_USER  = 0x10      @ Normal User Mode
   ARM_MODE_FIQ   = 0x11      @ FIQ Interrupt Mode
   ARM_MODE_IRQ   = 0x12      @ IRQ Interrupt Mode
   ARM_MODE_SVC   = 0x13      @ SWI Interrupt Mode
   ARM_MODE_ABORT = 0x17      @ Abort Processing memory Fault Mode
   ARM_MODE_UNDEF = 0x1B      @ Undefined Instruction Mode
   
@--- Interrupt masks for status Register
   I_BIT          = 0x80      @ IRQ (IRQ is disabled when I bit is set)
   F_BIT          = 0x40      @ FIQ (FIQ is disabled when F bit is set)

@----------------------------------------------------------------------------------------------------------------------*
@                                                                                                                      *
@               Vector table and reset entry                                                                           *
@                                                                                                                      *
@----------------------------------------------------------------------------------------------------------------------*

   .section .isr_vector, "ax"

   ldr pc, ResetAddr    @ Reset
   ldr pc, UndefAddr    @ Undefined instruction
   ldr pc, SWIAddr      @ Software interrupt
   ldr pc, PAbortAddr   @ Prefetch abort
   ldr pc, DAbortAddr   @ Data abort
   .word   0xb8a06f60   @ Checksum
   ldr pc, IRQAddr      @ IRQ interrupt
   ldr pc, FIQAddr      @ FIQ interrupt
ResetAddr:     .word as_reset_handler
UndefAddr:     .word as_undef_handler
SWIAddr:       .word SWIHandler
PAbortAddr:    .word !ISR!PAbort
DAbortAddr:    .word !ISR!DAbort
IRQAddr:       .word as_irq_handler
FIQAddr:       .word !ISR!FIQ
               .word 0xFFFFFFFF @ pad word to get 64 bytes in isr_vector section
   
@----------------------------------------------------------------------------------------------------------------------*
@                                                                                                                      *
@                           Reset handler                                                                              *
@                                                                                                                      *
@----------------------------------------------------------------------------------------------------------------------*

   .section .init, "ax"
   .global as_reset_handler

as_reset_handler:
@-------------------------- Setup a stack and  status register for each mode
   msr   CPSR_c, #ARM_MODE_UNDEF | I_BIT | F_BIT  @ Undefined Instruction Mode     
   ldr   sp, =__und_stack_end
   
   msr   CPSR_c, #ARM_MODE_ABORT | I_BIT | F_BIT  @ Abort Mode
   ldr   sp, =__abt_stack_end
   
   msr   CPSR_c, #ARM_MODE_FIQ | I_BIT | F_BIT @ FIQ Mode
   ldr   sp, =__fiq_stack_end
   
   msr   CPSR_c, #ARM_MODE_IRQ | I_BIT | F_BIT  @ IRQ Mode
   ldr   sp, =__irq_stack_end
   
   msr   CPSR_c, #ARM_MODE_SVC | I_BIT | F_BIT @ Supervisor Mode
   ldr   sp, =__svc_stack_end

@---------------------------------------- Initialize system (boot, init)
   bl    configuration.on.boot

@---------------------------------------- Call entry point
   b    __entry_point

   .text

@----------------------------------------------------------------------------------------------------------------------*
@                                                                                                                      *
@              I N T E R R U P T    V E C T O R S                                                                      *
@                                                                                                                      *
@----------------------------------------------------------------------------------------------------------------------*

  .global __plm_interrupt_vectors

__plm_interrupt_vectors :
  .word !ISR!WDT      @ 0
  .word 0             @ 1
  .word !ISR!ARMCore0 @ 2
  .word !ISR!ARMCore1 @ 3
  .word !ISR!TIMER0   @ 4
  .word !ISR!TIMER1   @ 5
  .word !ISR!UART0    @ 6
  .word !ISR!UART1    @ 7
  .word !ISR!PWM0     @ 8
  .word !ISR!I2C      @ 9
  .word !ISR!SPI0     @ 10
  .word !ISR!SPI1_SSP @ 11
  .word !ISR!PLL      @ 12
  .word !ISR!RTC      @ 13
  .word !ISR!EINT0    @ 14
  .word !ISR!EINT1    @ 15
  .word !ISR!EINT2    @ 16
  .word !ISR!EINT3    @ 17
  .word !ISR!ADC      @ 18
  .word !ISR!CAN_COMMON @ 19
  .word !ISR!CAN0_TX @ 20
  .word !ISR!CAN1_TX @ 21
  .word !ISR!CAN2_TX @ 22
  .word !ISR!CAN3_TX @ 23
  .word 0            @ 24
  .word !ISR!FULLCAN @ 25
  .word !ISR!CAN0_RX @ 26
  .word !ISR!CAN1_RX @ 27
  .word !ISR!CAN2_RX @ 28
  .word !ISR!CAN3_RX @ 29

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

  .global SWIHandler

SWIHandler:
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

@----------------------------------------------------------------------------------------------------------------------*
@                                                                                                                      *
@        C O N T R O L   R E G I S T E R                                                                               *
@                                                                                                                      *
@----------------------------------------------------------------------------------------------------------------------*

  VICVectAddr = 0xFFFFF030

@----------------------------------------------------------------------------------------------------------------------*
@                                                                                                                      *
@        I R Q    H A N D L E R                                                                                        *
@                                                                                                                      *
@----------------------------------------------------------------------------------------------------------------------*

  .global as_irq_handler
  .global __entry_point
  .type __entry_point, %function
  .global kernel_selectTaskToRun
  .type kernel_selectTaskToRun, %function

as_irq_handler:
@--------------------------- Adjust return address
  sub   r14, r14, #4
@--------------------------- Save r0 on IRQ stack
  stmfd sp!, {r0}
@--------------------------- Context save
@--- R0 <- Address of current task context save
  ldr   r0, =gRunningTaskControlBlock
  ldr   r0, [r0]
@--- If r0 is NULL, there is no context to save
  movs  r0, r0
  beq   __no_context_to_save_on_irq
@--- Save registers R1, ..., R12, LR
  add   r0, r0, #4*4 @ Make room for sp_usr, lr_usr, cpsr_usr and r0
  stmia r0, {r1-r12, lr}
@--- cpsr_usr -> R8
  mrs   r8, spsr
@--- Save sp_usr (R8)
  sub   r0, r0, #4*4 @ Restore original value
  str   r8, [r0]
@--- Store sp_usr, lr_usr
  add   r0, r0, #4
  stmia r0, {r13, r14}^
@--- Store user task r0
  add   r0, r0, #8
  ldr   r1, [sp]
  str   r1, [r0]
@--------------------------- Adjust IRQ stack
__no_context_to_save_on_irq:
  add   sp, sp, #4
@--------------------------- Led On (uses only r6 and r7)
  ACTIVITY_LED_ON @ macro defined in activity_led_management.s file
@--------------------------- IRQ Body : run interrupt service routine
@--- R1 <- contenu du registre VICVectAddr (call interrupt routine service)
  ldr   r1, =VICVectAddr
  ldr   r1, [r1]
@--- Call interrupt routine service
  mov   lr, pc @--- Link Register -> return address
  bx    r1
@--- Acknowledge interrupt service (write any value into VICVectAddr register)
  ldr   r0, =VICVectAddr
  str   r0, [r0]
@--------------------------- Select Running Task
__entry_point: @ This entry point is kernel start routine
  bl    kernel_selectTaskToRun
@--------------------------- Context restore
@--- r0 <- Address of current running task context save
  ldr   r0, =gRunningTaskControlBlock
  ldr   r0, [r0]
  movs  r0, r0
  beq   __no_context_to_restore
@--- Restore cpsr_usr (r1)
  ldr   r1, [r0]
@--- Restore cpsr_usr from r1
  msr   spsr, r1
@--- Restore sp_usr, lr_usr
  add   r0, r0, #4
  ldmia r0, {r13, r14}^
@--- Restore registers R0, ..., R12, PC
@    ('^' and 'pc' means return from interrupt)
  add   r0, r0, #8
  ldmia r0, {r0-r12, pc}^

@----------------------------------------------------------------------------------------------------------------------*
@                                                                                                                      *
@        U N D E F I N E D    I N S T R U C T I O N    H A N D L E R                                                   *
@                                                                                                                      *
@----------------------------------------------------------------------------------------------------------------------*
@                                                                                                                      *
@ We use some arm undefined instructions for performing kernel defined operations that do not use context switchs.     *
@                                                                                                                      *
@----------------------------------------------------------------------------------------------------------------------*
@                                                                                                                      *
@           In ARM Architecture ReferenceManual, page A3-39                                                            *
@          A3.16.5 Architecturally Undefined Instruction space                                                         *
@                                                                                                                      *
@ In general, Undefined instructions might be used to extend the ARM instruction set in the future. However, it is     *
@ intended that instructions with the following encoding will not be used for this:                                    *
@                                                                                                                      *
@ 3322 2222 2222 1111  1111 1100 0000 0000                                                                             *
@ 1098 7654 3210 9876  5432 1098 7654 3210                                                                             *
@ ---- ---- ---- ----  ---- ---- ---- ----                                                                             *
@ cond 0111 1111 xxxx  xxxx xxxx 1111 xxxx                                                                             *
@                                                                                                                      *
@ If a programmer wants to use an Undefined instruction for software, purposes with minimal risk that future hardware  *
@ will treat it as a defined instruction, one of the instructions with this encoding must be used.                     *
@                                                                                                                      *
@----------------------------------------------------------------------------------------------------------------------*

  .global as_undef_handler

as_undef_handler:
@--- Save preserved registers
  stmfd r13!, {r7, lr}
@--- r7 <- bits 15-8 of undef instruction
@    LDRB loads a byte from memory and zero-extends the byte to a 32-bit word.
  ldrb  r7, [lr, #-4 + 1] @ -4 for undef instruction, +1 for getting second byte
@--- r12 <- address of routine to call
  ldr   r12, =__und_dispatcher_table
  ldr   r12, [r12, r7, LSL #2]
@--- Call routine
  mov   lr, pc
  bx    r12
@--- Return from interrupt
  ldmfd r13!, {r7, pc}^

@----------------------------------------------------------------------------------------------------------------------*

  I_BIT_MASK = 0x80      @ IRQ is disabled when I bit is set
  UNDEFINED_INSTRUCTION = 0xE7F000F0

