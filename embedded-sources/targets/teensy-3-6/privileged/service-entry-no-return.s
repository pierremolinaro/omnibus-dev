@----------------------------------------------------------------------------------------------------------------------*
@  Service !ENTRY!
@----------------------------------------------------------------------------------------------------------------------*

	.section	".text.!ENTRY!","ax",%progbits
	.globl	!ENTRY!
	.align	1
	.type	!ENTRY!,%function
	.code	16
	.thumb_func

!ENTRY!:
	.fnstart
  svc #!IDX! + 1
  bx  lr

.Lfunc_end_!ENTRY!:
  .size	!ENTRY!, .Lfunc_end_!ENTRY! - !ENTRY!
  .cantunwind
	.fnend

