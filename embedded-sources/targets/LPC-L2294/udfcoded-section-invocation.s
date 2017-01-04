@----------------------------------------------------------------------------------------------------------------------*
@  Section !ENTRY!
@----------------------------------------------------------------------------------------------------------------------*

	.section	".text.!ENTRY!","ax",%progbits
	.globl	!ENTRY!
	.align	1
	.type	!ENTRY!,%function
	.code	32

!ENTRY!:
	.fnstart
  .word  UNDEFINED_INSTRUCTION + (!IDX! << 8)
  bx  lr

.Lfunc_end_!ENTRY!:
  .size	!ENTRY!, .Lfunc_end_!ENTRY! - !ENTRY!
  .cantunwind
	.fnend

  .global !ENTRY!
  .type !ENTRY!, %function

