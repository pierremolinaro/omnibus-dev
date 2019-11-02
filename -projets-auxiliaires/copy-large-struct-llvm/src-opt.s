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
	.globl	myCopyRef               @ -- Begin function myCopyRef
	.p2align	1
	.type	myCopyRef,%function
	.code	16                      @ @myCopyRef
	.thumb_func
myCopyRef:
	.fnstart
@ %bb.0:
	.save	{r4, r5, r6, r7, r8, r9, r10, r11, lr}
	push.w	{r4, r5, r6, r7, r8, r9, r10, r11, lr}
	.pad	#76
	sub	sp, #76
	ldr	r2, [r1]
	add.w	r11, r1, #64
	str	r2, [sp, #72]           @ 4-byte Spill
	add.w	r6, r1, #112
	ldr	r2, [r1, #4]
	add.w	lr, r1, #100
	str	r2, [sp, #68]           @ 4-byte Spill
	ldr	r2, [r1, #8]
	str	r2, [sp, #64]           @ 4-byte Spill
	ldr	r2, [r1, #12]
	str	r2, [sp, #60]           @ 4-byte Spill
	ldr	r2, [r1, #16]
	str	r2, [sp, #56]           @ 4-byte Spill
	ldr	r2, [r1, #20]
	str	r2, [sp, #52]           @ 4-byte Spill
	ldr	r2, [r1, #24]
	str	r2, [sp, #48]           @ 4-byte Spill
	ldr	r2, [r1, #28]
	str	r2, [sp, #44]           @ 4-byte Spill
	ldr	r2, [r1, #32]
	str	r2, [sp, #40]           @ 4-byte Spill
	ldr	r2, [r1, #36]
	str	r2, [sp, #36]           @ 4-byte Spill
	ldr	r2, [r1, #40]
	str	r2, [sp, #32]           @ 4-byte Spill
	ldr	r2, [r1, #44]
	str	r2, [sp, #28]           @ 4-byte Spill
	ldr	r2, [r1, #48]
	str	r2, [sp, #24]           @ 4-byte Spill
	ldr	r2, [r1, #52]
	str	r2, [sp, #20]           @ 4-byte Spill
	ldr	r2, [r1, #56]
	str	r2, [sp, #16]           @ 4-byte Spill
	ldr	r2, [r1, #60]
	str	r2, [sp, #12]           @ 4-byte Spill
	ldr	r2, [r1, #80]
	ldm.w	r11, {r8, r9, r10, r11}
	str	r2, [sp, #8]            @ 4-byte Spill
	ldr	r2, [r1, #84]
	str	r2, [sp, #4]            @ 4-byte Spill
	ldr	r2, [r1, #88]
	str	r2, [sp]                @ 4-byte Spill
	ldrd	r7, r2, [r1, #92]
	ldm	r6, {r4, r5, r6}
	ldm.w	lr, {r3, r12, lr}
	ldr	r1, [r1, #124]
	str	r2, [r0, #96]
	add.w	r2, r0, #112
	str	r3, [r0, #100]
	str.w	r12, [r0, #104]
	str.w	lr, [r0, #108]
	stm	r2!, {r4, r5, r6}
	str	r1, [r0, #124]
	add.w	r1, r0, #64
	stm.w	r1, {r8, r9, r10, r11}
	ldr	r1, [sp, #8]            @ 4-byte Reload
	str	r1, [r0, #80]
	ldr	r1, [sp, #4]            @ 4-byte Reload
	str	r1, [r0, #84]
	ldr	r1, [sp]                @ 4-byte Reload
	strd	r1, r7, [r0, #88]
	ldr	r1, [sp, #40]           @ 4-byte Reload
	str	r1, [r0, #32]
	ldr	r1, [sp, #36]           @ 4-byte Reload
	str	r1, [r0, #36]
	ldr	r1, [sp, #32]           @ 4-byte Reload
	str	r1, [r0, #40]
	ldr	r1, [sp, #28]           @ 4-byte Reload
	str	r1, [r0, #44]
	ldr	r1, [sp, #24]           @ 4-byte Reload
	str	r1, [r0, #48]
	ldr	r1, [sp, #20]           @ 4-byte Reload
	str	r1, [r0, #52]
	ldr	r1, [sp, #16]           @ 4-byte Reload
	str	r1, [r0, #56]
	ldr	r1, [sp, #12]           @ 4-byte Reload
	str	r1, [r0, #60]
	ldr	r1, [sp, #72]           @ 4-byte Reload
	str	r1, [r0]
	ldr	r1, [sp, #68]           @ 4-byte Reload
	str	r1, [r0, #4]
	ldr	r1, [sp, #64]           @ 4-byte Reload
	str	r1, [r0, #8]
	ldr	r1, [sp, #60]           @ 4-byte Reload
	str	r1, [r0, #12]
	ldr	r1, [sp, #56]           @ 4-byte Reload
	str	r1, [r0, #16]
	ldr	r1, [sp, #52]           @ 4-byte Reload
	str	r1, [r0, #20]
	ldr	r1, [sp, #48]           @ 4-byte Reload
	str	r1, [r0, #24]
	ldr	r1, [sp, #44]           @ 4-byte Reload
	str	r1, [r0, #28]
	add	sp, #76
	pop.w	{r4, r5, r6, r7, r8, r9, r10, r11, pc}
.Lfunc_end0:
	.size	myCopyRef, .Lfunc_end0-myCopyRef
	.cantunwind
	.fnend
                                        @ -- End function
	.globl	myCopyVal               @ -- Begin function myCopyVal
	.p2align	1
	.type	myCopyVal,%function
	.code	16                      @ @myCopyVal
	.thumb_func
myCopyVal:
	.fnstart
@ %bb.0:
	ldr	r1, [sp, #116]
	str	r1, [r0, #124]
	ldr	r1, [sp, #112]
	str	r1, [r0, #120]
	ldr	r1, [sp, #108]
	str	r1, [r0, #116]
	ldr	r1, [sp, #104]
	str	r1, [r0, #112]
	ldr	r1, [sp, #100]
	str	r1, [r0, #108]
	ldr	r1, [sp, #96]
	str	r1, [r0, #104]
	ldr	r1, [sp, #92]
	str	r1, [r0, #100]
	ldr	r1, [sp, #88]
	str	r1, [r0, #96]
	ldr	r1, [sp, #84]
	str	r1, [r0, #92]
	ldr	r1, [sp, #80]
	str	r1, [r0, #88]
	ldr	r1, [sp, #76]
	str	r1, [r0, #84]
	ldr	r1, [sp, #72]
	str	r1, [r0, #80]
	ldr	r1, [sp, #68]
	str	r1, [r0, #76]
	ldr	r1, [sp, #64]
	str	r1, [r0, #72]
	ldr	r1, [sp, #60]
	str	r1, [r0, #68]
	ldr	r1, [sp, #56]
	str	r1, [r0, #64]
	ldr	r1, [sp, #52]
	str	r1, [r0, #60]
	ldr	r1, [sp, #48]
	str	r1, [r0, #56]
	ldr	r1, [sp, #44]
	str	r1, [r0, #52]
	ldr	r1, [sp, #40]
	str	r1, [r0, #48]
	ldr	r1, [sp, #36]
	str	r1, [r0, #44]
	ldr	r1, [sp, #32]
	str	r1, [r0, #40]
	ldr	r1, [sp, #28]
	str	r1, [r0, #36]
	ldr	r1, [sp, #24]
	str	r1, [r0, #32]
	ldr	r1, [sp, #20]
	str	r1, [r0, #28]
	ldr	r1, [sp, #16]
	str	r1, [r0, #24]
	ldr	r1, [sp, #12]
	str	r1, [r0, #20]
	ldr	r1, [sp, #8]
	str	r1, [r0, #16]
	ldr	r1, [sp, #4]
	str	r1, [r0, #12]
	ldr	r1, [sp]
	str	r1, [r0, #8]
	strd	r2, r3, [r0]
	bx	lr
.Lfunc_end1:
	.size	myCopyVal, .Lfunc_end1-myCopyVal
	.cantunwind
	.fnend
                                        @ -- End function
	.globl	myAddRef                @ -- Begin function myAddRef
	.p2align	1
	.type	myAddRef,%function
	.code	16                      @ @myAddRef
	.thumb_func
myAddRef:
	.fnstart
@ %bb.0:
	.save	{r4, r5, r6, r7, r8, lr}
	push.w	{r4, r5, r6, r7, r8, lr}
	ldm.w	r1, {r3, r12, lr}
	ldm.w	r2, {r5, r6, r7}
	adds	r3, r3, r5
	ldr.w	r8, [r1, #12]
	ldr	r4, [r2, #12]
	str	r3, [r0]
	adcs.w	r3, r6, r12
	str	r3, [r0, #4]
	adcs.w	r3, r7, lr
	str	r3, [r0, #8]
	adcs.w	r3, r4, r8
	str	r3, [r0, #12]
	ldr	r3, [r1, #16]
	ldr	r7, [r2, #16]
	adcs	r3, r7
	str	r3, [r0, #16]
	ldr	r3, [r1, #20]
	ldr	r7, [r2, #20]
	adcs	r3, r7
	str	r3, [r0, #20]
	ldr	r3, [r1, #24]
	ldr	r7, [r2, #24]
	adcs	r3, r7
	str	r3, [r0, #24]
	ldr	r3, [r1, #28]
	ldr	r7, [r2, #28]
	adcs	r3, r7
	str	r3, [r0, #28]
	ldr	r3, [r1, #32]
	ldr	r7, [r2, #32]
	adcs	r3, r7
	str	r3, [r0, #32]
	ldr	r3, [r1, #36]
	ldr	r7, [r2, #36]
	adcs	r3, r7
	str	r3, [r0, #36]
	ldr	r3, [r1, #40]
	ldr	r7, [r2, #40]
	adcs	r3, r7
	str	r3, [r0, #40]
	ldr	r3, [r1, #44]
	ldr	r7, [r2, #44]
	adcs	r3, r7
	str	r3, [r0, #44]
	ldr	r3, [r1, #48]
	ldr	r7, [r2, #48]
	adcs	r3, r7
	str	r3, [r0, #48]
	ldr	r3, [r1, #52]
	ldr	r7, [r2, #52]
	adcs	r3, r7
	str	r3, [r0, #52]
	ldr	r3, [r1, #56]
	ldr	r7, [r2, #56]
	adcs	r3, r7
	str	r3, [r0, #56]
	ldr	r3, [r1, #60]
	ldr	r7, [r2, #60]
	adcs	r3, r7
	str	r3, [r0, #60]
	ldr	r3, [r1, #64]
	ldr	r7, [r2, #64]
	adcs	r3, r7
	str	r3, [r0, #64]
	ldr	r3, [r1, #68]
	ldr	r7, [r2, #68]
	adcs	r3, r7
	str	r3, [r0, #68]
	ldr	r3, [r1, #72]
	ldr	r7, [r2, #72]
	adcs	r3, r7
	str	r3, [r0, #72]
	ldr	r3, [r1, #76]
	ldr	r7, [r2, #76]
	adcs	r3, r7
	str	r3, [r0, #76]
	ldr	r3, [r1, #80]
	ldr	r7, [r2, #80]
	adcs	r3, r7
	str	r3, [r0, #80]
	ldr	r3, [r1, #84]
	ldr	r7, [r2, #84]
	adcs	r3, r7
	str	r3, [r0, #84]
	ldr	r3, [r1, #88]
	ldr	r7, [r2, #88]
	adcs	r3, r7
	str	r3, [r0, #88]
	ldr	r3, [r1, #92]
	ldr	r7, [r2, #92]
	adcs	r3, r7
	str	r3, [r0, #92]
	ldr	r3, [r1, #96]
	ldr	r7, [r2, #96]
	adcs	r3, r7
	str	r3, [r0, #96]
	ldr	r3, [r1, #100]
	ldr	r7, [r2, #100]
	adcs	r3, r7
	str	r3, [r0, #100]
	ldr	r3, [r1, #104]
	ldr	r7, [r2, #104]
	adcs	r3, r7
	str	r3, [r0, #104]
	ldr	r3, [r1, #108]
	ldr	r7, [r2, #108]
	adcs	r3, r7
	str	r3, [r0, #108]
	ldr	r3, [r1, #112]
	ldr	r7, [r2, #112]
	adcs	r3, r7
	str	r3, [r0, #112]
	ldr	r3, [r1, #116]
	ldr	r7, [r2, #116]
	adcs	r3, r7
	str	r3, [r0, #116]
	ldr	r3, [r1, #120]
	ldr	r7, [r2, #120]
	adcs	r3, r7
	str	r3, [r0, #120]
	ldr	r1, [r1, #124]
	ldr	r2, [r2, #124]
	adcs	r1, r2
	str	r1, [r0, #124]
	pop.w	{r4, r5, r6, r7, r8, pc}
.Lfunc_end2:
	.size	myAddRef, .Lfunc_end2-myAddRef
	.cantunwind
	.fnend
                                        @ -- End function
	.globl	myAddVal                @ -- Begin function myAddVal
	.p2align	1
	.type	myAddVal,%function
	.code	16                      @ @myAddVal
	.thumb_func
myAddVal:
	.fnstart
@ %bb.0:
	ldr	r1, [sp, #120]
	adds	r1, r1, r2
	str	r1, [r0]
	ldr	r1, [sp, #124]
	ldr	r2, [sp, #128]
	adcs	r1, r3
	str	r1, [r0, #4]
	ldr	r1, [sp]
	adcs	r1, r2
	str	r1, [r0, #8]
	ldr	r1, [sp, #4]
	ldr	r2, [sp, #132]
	adcs	r1, r2
	str	r1, [r0, #12]
	ldr	r1, [sp, #8]
	ldr	r2, [sp, #136]
	adcs	r1, r2
	str	r1, [r0, #16]
	ldr	r1, [sp, #12]
	ldr	r2, [sp, #140]
	adcs	r1, r2
	str	r1, [r0, #20]
	ldr	r1, [sp, #16]
	ldr	r2, [sp, #144]
	adcs	r1, r2
	str	r1, [r0, #24]
	ldr	r1, [sp, #20]
	ldr	r2, [sp, #148]
	adcs	r1, r2
	str	r1, [r0, #28]
	ldr	r1, [sp, #24]
	ldr	r2, [sp, #152]
	adcs	r1, r2
	str	r1, [r0, #32]
	ldr	r1, [sp, #28]
	ldr	r2, [sp, #156]
	adcs	r1, r2
	str	r1, [r0, #36]
	ldr	r1, [sp, #32]
	ldr	r2, [sp, #160]
	adcs	r1, r2
	str	r1, [r0, #40]
	ldr	r1, [sp, #36]
	ldr	r2, [sp, #164]
	adcs	r1, r2
	str	r1, [r0, #44]
	ldr	r1, [sp, #40]
	ldr	r2, [sp, #168]
	adcs	r1, r2
	str	r1, [r0, #48]
	ldr	r1, [sp, #44]
	ldr	r2, [sp, #172]
	adcs	r1, r2
	str	r1, [r0, #52]
	ldr	r1, [sp, #48]
	ldr	r2, [sp, #176]
	adcs	r1, r2
	str	r1, [r0, #56]
	ldr	r1, [sp, #52]
	ldr	r2, [sp, #180]
	adcs	r1, r2
	str	r1, [r0, #60]
	ldr	r1, [sp, #56]
	ldr	r2, [sp, #184]
	adcs	r1, r2
	str	r1, [r0, #64]
	ldr	r1, [sp, #60]
	ldr	r2, [sp, #188]
	adcs	r1, r2
	str	r1, [r0, #68]
	ldr	r1, [sp, #64]
	ldr	r2, [sp, #192]
	adcs	r1, r2
	str	r1, [r0, #72]
	ldr	r1, [sp, #68]
	ldr	r2, [sp, #196]
	adcs	r1, r2
	str	r1, [r0, #76]
	ldr	r1, [sp, #72]
	ldr	r2, [sp, #200]
	adcs	r1, r2
	str	r1, [r0, #80]
	ldr	r1, [sp, #76]
	ldr	r2, [sp, #204]
	adcs	r1, r2
	str	r1, [r0, #84]
	ldr	r1, [sp, #80]
	ldr	r2, [sp, #208]
	adcs	r1, r2
	str	r1, [r0, #88]
	ldr	r1, [sp, #84]
	ldr	r2, [sp, #212]
	adcs	r1, r2
	str	r1, [r0, #92]
	ldr	r1, [sp, #88]
	ldr	r2, [sp, #216]
	adcs	r1, r2
	str	r1, [r0, #96]
	ldr	r1, [sp, #92]
	ldr	r2, [sp, #220]
	adcs	r1, r2
	str	r1, [r0, #100]
	ldr	r1, [sp, #96]
	ldr	r2, [sp, #224]
	adcs	r1, r2
	str	r1, [r0, #104]
	ldr	r1, [sp, #100]
	ldr	r2, [sp, #228]
	adcs	r1, r2
	str	r1, [r0, #108]
	ldr	r1, [sp, #104]
	ldr	r2, [sp, #232]
	adcs	r1, r2
	str	r1, [r0, #112]
	ldr	r1, [sp, #108]
	ldr	r2, [sp, #236]
	adcs	r1, r2
	str	r1, [r0, #116]
	ldr	r1, [sp, #112]
	ldr	r2, [sp, #240]
	adcs	r1, r2
	str	r1, [r0, #120]
	ldr	r1, [sp, #116]
	ldr	r2, [sp, #244]
	adcs	r1, r2
	str	r1, [r0, #124]
	bx	lr
.Lfunc_end3:
	.size	myAddVal, .Lfunc_end3-myAddVal
	.cantunwind
	.fnend
                                        @ -- End function
	.globl	myAssignment            @ -- Begin function myAssignment
	.p2align	1
	.type	myAssignment,%function
	.code	16                      @ @myAssignment
	.thumb_func
myAssignment:
	.fnstart
@ %bb.0:
	.save	{r4, r5, r6, lr}
	push	{r4, r5, r6, lr}
	movw	r2, #51634
	movw	r3, #3108
	movs	r1, #0
	movt	r2, #3
	movt	r3, #36128
	movw	r4, #34526
	movw	r5, #52158
	movw	r6, #35538
	strd	r1, r1, [r0, #96]
	movw	r12, #40949
	strd	r1, r1, [r0, #104]
	movt	r4, #23183
	strd	r1, r1, [r0, #112]
	movt	r5, #5862
	strd	r1, r1, [r0, #120]
	movt	r6, #53452
	strd	r1, r1, [r0, #64]
	movw	lr, #23173
	strd	r1, r1, [r0, #72]
	movt	r12, #65143
	strd	r1, r1, [r0, #80]
	movt	lr, #50527
	strd	r1, r1, [r0, #88]
	strd	r3, r2, [r0, #32]
	movw	r2, #57836
	strd	r1, r1, [r0, #40]
	movt	r2, #50115
	strd	r1, r1, [r0, #48]
	movw	r3, #15119
	strd	r1, r1, [r0, #56]
	movw	r1, #11994
	strd	r6, r5, [r0]
	movt	r1, #44332
	strd	r4, r2, [r0, #8]
	add.w	r2, r0, #16
	movt	r3, #29085
	stm.w	r2, {r1, r3, lr}
	str.w	r12, [r0, #28]
	pop	{r4, r5, r6, pc}
.Lfunc_end4:
	.size	myAssignment, .Lfunc_end4-myAssignment
	.cantunwind
	.fnend
                                        @ -- End function

	.section	".note.GNU-stack","",%progbits
	.eabi_attribute	30, 1	@ Tag_ABI_optimization_goals
