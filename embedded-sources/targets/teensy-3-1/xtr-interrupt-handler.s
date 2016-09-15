
@----------------------------------------------------------------------------------------------------------------------*
@                                                                                                                      *
@                 S Y S T I C K    H A N D L E R    ( D O U B L E    S T A C K    M O D E )                            *
@                                                                                                                      *
@----------------------------------------------------------------------------------------------------------------------*

  .global !ISR!
  .type !ISR!, %function

@----------------------------------------------------------------------------------------------------------------------*

  .global !HANDLER!
  .type !HANDLER!, %function

@----------------------------------------------------------------------------------------------------------------------*

!ISR!:
	.fnstart
@----------------------------------------- Save preserved registers
	.save	{r4, r5, lr}
  push  {r4, r5, lr}
@----------------------------------------- Activity led On (macro that uses only R4 and R5)
@	.save	{r0, r1, r2, r3}
  push  {r0, r1, r2, r3}
  bl func.activityLedOn_28__29_  @ Defined in PLM source
  pop  {r0, r1, r2, r3}
@----------------------------------------- R4 <- running task context
  ldr   r4, =gRunningTaskControlBlock
  ldr   r4, [r4]
@----------------------------------------- Call Interrupt handler
  bl    !HANDLER!
@----------------------------------------- Test backgroundTaskContext to check if init passed
  ldr   r5, =backgroundTaskContext
  ldr   r5, [r5]
  cmp   r5, #0
  bne   .handle.context.switch
@----------------------------------------- Still in init : return
  pop   {r4, r5, pc}
	.cantunwind
	.fnend

