	.text
	.syntax unified
	.eabi_attribute	67, "2.09"	@ Tag_conformance
	.eabi_attribute	6, 13	@ Tag_CPU_arch
	.eabi_attribute	7, 77	@ Tag_CPU_arch_profile
	.eabi_attribute	8, 0	@ Tag_ARM_ISA_use
	.eabi_attribute	9, 2	@ Tag_THUMB_ISA_use
	.eabi_attribute	34, 1	@ Tag_CPU_unaligned_access
	.eabi_attribute	17, 1	@ Tag_ABI_PCS_GOT_use
	.eabi_attribute	20, 1	@ Tag_ABI_FP_denormal
	.eabi_attribute	21, 1	@ Tag_ABI_FP_exceptions
	.eabi_attribute	23, 3	@ Tag_ABI_FP_number_model
	.eabi_attribute	24, 1	@ Tag_ABI_align_needed
	.eabi_attribute	25, 1	@ Tag_ABI_align_preserved
	.eabi_attribute	38, 1	@ Tag_ABI_FP_16bit_format
	.eabi_attribute	14, 0	@ Tag_ABI_PCS_R9_use
	.file	"src.ll"
	.globl	myInit                  @ -- Begin function myInit
	.p2align	1
	.type	myInit,%function
	.code	16                      @ @myInit
	.thumb_func
myInit:
	.fnstart
@ %bb.0:
	.save	{r4, r5, r6, lr}
	push	{r4, r5, r6, lr}
	movw	r2, #1143
	movs	r4, #198
	movs	r5, #156
	movs	r6, #112
	strd	r6, r5, [r0, #32]
	movw	r12, #1243
	strd	r4, r2, [r0, #40]
	movw	lr, #1198
	movw	r3, #1156
	mov.w	r1, #1112
	add.w	r2, r0, #48
	stm.w	r2, {r1, r3, lr}
	mov.w	lr, #143
	movs	r3, #98
	str.w	r12, [r0, #60]
	mov.w	r12, #243
	movs	r1, #56
	movs	r2, #12
	strd	r2, r1, [r0]
	strd	r3, lr, [r0, #8]
	strd	r6, r5, [r0, #16]
	strd	r4, r12, [r0, #24]
	pop	{r4, r5, r6, pc}
.Lfunc_end0:
	.size	myInit, .Lfunc_end0-myInit
	.cantunwind
	.fnend
                                        @ -- End function
	.globl	myInit2                 @ -- Begin function myInit2
	.p2align	1
	.type	myInit2,%function
	.code	16                      @ @myInit2
	.thumb_func
myInit2:
	.fnstart
@ %bb.0:                                @ %end
	.save	{r4, r5, r7, lr}
	push	{r4, r5, r7, lr}
	movw	r1, :lower16:.Lsource
	movt	r1, :upper16:.Lsource
	ldm.w	r1!, {r2, r3, r4, r12, lr}
	stm.w	r0!, {r2, r3, r4, r12, lr}
	ldm.w	r1!, {r2, r3, r4, r12, lr}
	stm.w	r0!, {r2, r3, r4, r12, lr}
	ldm.w	r1, {r2, r3, r4, r5, r12, lr}
	stm.w	r0, {r2, r3, r4, r5, r12, lr}
	pop	{r4, r5, r7, pc}
.Lfunc_end1:
	.size	myInit2, .Lfunc_end1-myInit2
	.cantunwind
	.fnend
                                        @ -- End function
	.type	.Lsource,%object        @ @source
	.section	.rodata,"a",%progbits
	.p2align	4
.Lsource:
	.long	12                      @ 0xc
	.long	56                      @ 0x38
	.long	98                      @ 0x62
	.long	143                     @ 0x8f
	.long	112                     @ 0x70
	.long	156                     @ 0x9c
	.long	198                     @ 0xc6
	.long	243                     @ 0xf3
	.long	112                     @ 0x70
	.long	156                     @ 0x9c
	.long	198                     @ 0xc6
	.long	1143                    @ 0x477
	.long	1112                    @ 0x458
	.long	1156                    @ 0x484
	.long	1198                    @ 0x4ae
	.long	1243                    @ 0x4db
	.size	.Lsource, 64


	.section	".note.GNU-stack","",%progbits
	.eabi_attribute	30, 1	@ Tag_ABI_optimization_goals
