@----------------------------------------------------------------------------------------------------------------------*
@  Section !ENTRY!
@----------------------------------------------------------------------------------------------------------------------*

	.section	".text.!ENTRY!","ax",%progbits
	.globl	!ENTRY!
	.align	1
	.type	!ENTRY!,%function
	.code	16
	.thumb_func

!ENTRY!:
	.fnstart
  udf !IDX!
  bx  lr
.Lfunc_end_!ENTRY!:
  .size	!ENTRY!, .Lfunc_end_!ENTRY! - !ENTRY!
  .cantunwind
	.fnend

  .global !ENTRY!
  .type !ENTRY!, %function
