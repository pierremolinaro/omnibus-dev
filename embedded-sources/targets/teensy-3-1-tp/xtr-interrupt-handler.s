
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
@----------------------------------------- Save preserved registers
  push  {r4, r5, lr}
@----------------------------------------- Activity led On (macro that uses only R4 and R5)
  ACTIVITY_LED_ON
@----------------------------------------- R4 <- running task context
  ldr   r4, =gRunningTaskControlBlock
  ldr   r4, [r4]
@----------------------------------------- Call Interrupt handler
  bl    !HANDLER!
@----------------------------------------- Test backgroundTaskContext to check if init passed
  ldr   r5, =backgroundTaskContext
  ldr   r5, [r5]
  cmp   r5, #0
  bne   _handle_context_switch
@----------------------------------------- Still in init : return
  pop   {r4, r5, pc}

