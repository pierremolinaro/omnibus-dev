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
  b   xtr.user.result

".Lfunc_end_!ENTRY!":
  .size	"!ENTRY!", ".Lfunc_end_!ENTRY!" - "!ENTRY!"
  .cantunwind
	.fnend

