@----------------------------------------------------------------------------------------------------------------------*
@  Section !USER_ROUTINE!, implemented by !IMPLEMENTATION_ROUTINE!
@----------------------------------------------------------------------------------------------------------------------*

  .section  ".text.!USER_ROUTINE!","ax",%progbits

  .global !USER_ROUTINE!
  .type  !USER_ROUTINE!,%function

  .align  2
  .thumb_func

!USER_ROUTINE!:
  .fnstart
  udf !IDX!
  bx  lr

.Lfunc_end_!USER_ROUTINE!:
  .size  !USER_ROUTINE!, .Lfunc_end_!USER_ROUTINE! - !USER_ROUTINE!
  .cantunwind
  .fnend

