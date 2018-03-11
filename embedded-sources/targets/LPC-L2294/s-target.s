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
SWIAddr:       .word as_swi_handler
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

   .section .text.as_reset_handler, "ax"

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
   bl    boot.routines
   bl    init.routines

@---------------------------------------- Call entry point
   b    __entry_point

@----------------------------------------------------------------------------------------------------------------------*
@                                                                                                                      *
@              I N T E R R U P T    V E C T O R S                                                                      *
@                                                                                                                      *
@----------------------------------------------------------------------------------------------------------------------*

   .section .text.__plm_interrupt_vectors, "ax"

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
  ldr   r0, =gRunningTaskControlBlockPtr
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
  ldr   r0, =gRunningTaskControlBlockPtr
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

