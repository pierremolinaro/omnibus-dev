@----------------------------------------------------------------------------------------------------------------------*
@                                                                                                                      *
@                 R E S E T    H A N D L E R    ( D O U B L E    S T A C K    M O D E )                                *
@                                                                                                                      *
@----------------------------------------------------------------------------------------------------------------------*

@--- This is stack for background task
   BACKGROUND.STACK.SIZE = 32

	.section	.bss.background.task.stack, "aw", %nobits
  .align	  3   @ Stack should be aligned on a 8-byte boundary

background.task.stack:
  .space	BACKGROUND.STACK.SIZE


@----------------------------------------------------------------------------------------------------------------------*
@ See https://developer.arm.com/docs/dui0553/latest/2-the-cortex-m4-processor/21-programmers-model/213-core-registers

	.section	".text.as_reset_handler","ax",%progbits

  .global as_reset_handler
  .type as_reset_handler, %function

as_reset_handler: @ Cortex M4 boots with interrupts enabled, in Thread mode (as PRIMASK is set to 0 at boot)
@---------------------------------- Run boot, zero bss section, copy data section
  bl  boot.routines
@---------------------------------- Enable FPU
@ The FPU is disabled from reset. You must enable it before you can use any floating-point instructions.
@--- CPACR is located at address 0xE000ED88
@  ldr r0, =0xE000ED88
@--- Read CPACR
@  ldr r1, [r0]
@--- Set bits 20-23 to enable CP10 and CP11 coprocessors
@  orr r1, r1, #(0xF << 20)
@--- Write back the modified value to the CPACR
@  str r1, [r0] @ wait for store to complete
@  dsb
@--- Reset pipeline now the FPU is enabled
@  isb
@---------------------------------- Set background task context
  ldr r0, =background.task.stack
  ldr r1, =backgroundTaskContext
  str r0, [r1]
@---------------------------------- Set PSP : this is stack for background task, it needs 32 bytes for stacking 8 registers
  ldr   r0,  =background.task.stack + BACKGROUND.STACK.SIZE
  msr   psp, r0
@---------------------------------- Set CONTROL register (see §B1.4.4)
@ bit 0 : 0 -> Thread mode has privileged access, 1 -> Thread mode has unprivileged access
@ bit 1 : 0 -> Use SP_main as the current stack, 1 -> In Thread mode, use SP_process as the current stack
@ bit 2 : 0 -> FP extension not active, 1 -> FP extension is active
  movs r2, #3
  msr  control, r2
@--- Software must use an ISB barrier instruction to ensure a write to the CONTROL register
@ takes effect before the next instruction is executed.
  isb
@---------------------------------- Start real-time kernel (run service configuration.on.init)
  svc  #0
@---------------------------------- Background task : infinite loop
background.task:
  wfi
  b  background.task

