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
  movw  r12, :lower16:!IMPLEMENTATION_ROUTINE!
  movt  r12, :upper16:!IMPLEMENTATION_ROUTINE!
  udf 0
  bx  lr

.Lfunc_end_!USER_ROUTINE!:
  .size  !USER_ROUTINE!, .Lfunc_end_!USER_ROUTINE! - !USER_ROUTINE!
  .cantunwind
  .fnend

