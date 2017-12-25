@----------------------------------------------------------------------------------------------------------------------*
@  Section !USER_ROUTINE!, implemented by !IMPLEMENTATION_ROUTINE!
@----------------------------------------------------------------------------------------------------------------------*

  .section  ".text.!USER_ROUTINE!","ax",%progbits

  .global !USER_ROUTINE!
  .type  !USER_ROUTINE!,%function

  .align  1
  .code  16
  .thumb_func

!USER_ROUTINE!:
  .fnstart
  mrs  r12, FAULTMASK @ r12 <- 0 if interrupts are enabled, r12 <- 1 if interrupts are disabled
  cmp  r12, #0
  bne  !IMPLEMENTATION_ROUTINE! @ if interrupts are disabled, call implementation routine directly
  udf  !IDX!
  bx   lr

.Lfunc_end_!USER_ROUTINE!:
  .size  !USER_ROUTINE!, .Lfunc_end_!USER_ROUTINE! - !USER_ROUTINE!
  .cantunwind
  .fnend

