	.syntax unified
	.cpu cortex-m4
	.thumb

@----------------------------------------------------------------------------------------------------------------------*
@                                                                                                                      *
@                 R E S E T    H A N D L E R    ( D O U B L E    S T A C K    M O D E )                                *
@                                                                                                                      *
@----------------------------------------------------------------------------------------------------------------------*

  .lcomm user_stack, 1024

  .global ResetISR
  .type ResetISR, %function
  .global user.code
  .type user.code, %function

ResetISR:
@--- Init micro controller
  bl configuration.on.boot
@--- set PSP
  ldr r0, =user_stack + 1024
  msr psp, r0
@--- Set CONTROL register
  mov r0, #3
  msr control, r0
  isb
@--- Background task : infinite loop
  b  user.code

