@----------------------------------------------------------------------------------------------------------------------*
@                                                                                                                      *
@                 I N T E R R U P T    H A N D L E R    ( D O U B L E    S T A C K    M O D E )                        *
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
@----------------------------------------- Activity led On
  bl    func.activityLedOn_28__29_   @ Defined in PLM source (can modify R0-R3 registers)
@----------------------------------------- R4 <- running task context
  ldr   r4, =gRunningTaskControlBlockPtr
  ldr   r4, [r4]
@----------------------------------------- Call Interrupt handler
  bl    !HANDLER!
@----------------------------------------- Perform context switch, if needed
  b     handle.context.switch

	.cantunwind
	.fnend

