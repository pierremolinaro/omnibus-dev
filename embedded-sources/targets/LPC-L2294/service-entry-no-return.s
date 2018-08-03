@----------------------------------------------------------------------------------------------------------------------*
@  Service !ENTRY!
@----------------------------------------------------------------------------------------------------------------------*

	.section	".text.!ENTRY!", "ax", %progbits
	.globl	"!ENTRY!"
	.align	2
	.type	"!ENTRY!", %function
	.code	32

"!ENTRY!":
	.fnstart
  swi #!IDX!
  bx  lr

".Lfunc_end_!ENTRY!":
  .size	"!ENTRY!", ".Lfunc_end_!ENTRY!" - "!ENTRY!"
  .cantunwind
	.fnend

