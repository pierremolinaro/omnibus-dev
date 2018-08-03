@----------------------------------------------------------------------------------------------------------------------*
@  Service !ENTRY!
@----------------------------------------------------------------------------------------------------------------------*

	.section	".text.!ENTRY!", "ax", %progbits
	.globl	"!ENTRY!"
	.align	2
	.type	"!ENTRY!", %function
	.thumb_func

"!ENTRY!":
	.fnstart
  svc #!IDX! + 1
  b   xtr.user.result

".Lfunc_end_!ENTRY!":
  .size	"!ENTRY!", ".Lfunc_end_!ENTRY!" - "!ENTRY!"
  .cantunwind
	.fnend

