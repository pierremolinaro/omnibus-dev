@----------------------------------------------------------------------------------------------------------------------*
@  Section !USER_ROUTINE!, implemented by !IMPLEMENTATION_ROUTINE!
@----------------------------------------------------------------------------------------------------------------------*

	.section	".text.!USER_ROUTINE!","ax",%progbits
	.global	!USER_ROUTINE!
	.type	!USER_ROUTINE!,%function

	.align	2
	.code	32

!USER_ROUTINE!:
	.fnstart
  mrs    r12, cpsr
  ands   r12, r12, #I_BIT_MASK
  beq    !IMPLEMENTATION_ROUTINE!
  .word  UNDEFINED_INSTRUCTION + (!IDX! << 8)
  bx  lr

.Lfunc_end_!USER_ROUTINE!:
  .size	!USER_ROUTINE!, .Lfunc_end_!USER_ROUTINE! - !USER_ROUTINE!
  .cantunwind
	.fnend

