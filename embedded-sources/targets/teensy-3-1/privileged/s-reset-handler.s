@----------------------------------------------------------------------------------------------------------------------*

	.syntax unified
	.cpu cortex-m4
	.thumb

@----------------------------------------------------------------------------------------------------------------------*
@                                                                                                                      *
@                 R E S E T    H A N D L E R    ( D O U B L E    S T A C K    M O D E )                                *
@                                                                                                                      *
@----------------------------------------------------------------------------------------------------------------------*

.lcomm backgroundTaskStack, 32

@----------------------------------------------------------------------------------------------------------------------*

	.section	".text.as_reset_handler","ax",%progbits

  .global as_reset_handler
  .type as_reset_handler, %function

as_reset_handler:
@--- Init micro controller
  bl configuration.on.boot
@--- Set PSP : this is stack for background task, it needs 32 bytes for stacking 8 registers
  ldr r0, =backgroundTaskStack + 32
  msr psp, r0
@--- Set CONTROL register (see §B1.4.4)
@ bit 0 : 0 -> Thread mode has privileged access, 1 -> Thread mode has unprivileged access
@ bit 1 : 0 -> Use SP_main as the current stack, 1 -> In Thread mode, use SP_process as the current stack
@ bit 2 : 0 -> FP extension not active, 1 -> FP extension is active
  movs r2, #3
  msr  control, r2
@ Software must use an ISB barrier instruction to ensure a write to the CONTROL register
@ takes effect before the next instruction is executed.
  isb
@--- Set background task context
  subs r0, #32
  ldr  r1, =backgroundTaskContext
  str  r0, [r1]
@--- Start real-time kernel
  svc  #0
@--- Background task : infinite loop
background.task:
  bl func.activityLedOff_28__29_  @ Defined in PLM source
  wfi
  b  background.task

