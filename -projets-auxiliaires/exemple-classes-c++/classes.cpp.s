	.text
	.syntax unified
	.eabi_attribute	67, "2.09"
	.cpu	cortex-m4
	.eabi_attribute	6, 13
	.eabi_attribute	7, 77
	.eabi_attribute	8, 0
	.eabi_attribute	9, 2
	.fpu	fpv4-sp-d16
	.eabi_attribute	27, 1
	.eabi_attribute	36, 1
	.eabi_attribute	34, 0
	.eabi_attribute	17, 1
	.eabi_attribute	20, 1
	.eabi_attribute	21, 1
	.eabi_attribute	23, 3
	.eabi_attribute	24, 1
	.eabi_attribute	25, 1
	.eabi_attribute	38, 1
	.eabi_attribute	18, 4
	.eabi_attribute	26, 1
	.eabi_attribute	14, 0
	.file	"classes.cpp"
	.globl	_ZN1A4getAEv
	.p2align	1
	.type	_ZN1A4getAEv,%function
	.code	16
	.thumb_func
_ZN1A4getAEv:
	.fnstart
	.pad	#4
	sub	sp, #4
	str	r0, [sp]
	ldr	r0, [sp]
	ldrb	r0, [r0, #4]
	add	sp, #4
	bx	lr
.Lfunc_end0:
	.size	_ZN1A4getAEv, .Lfunc_end0-_ZN1A4getAEv
	.cantunwind
	.fnend

	.globl	_ZN1A3getEv
	.p2align	1
	.type	_ZN1A3getEv,%function
	.code	16
	.thumb_func
_ZN1A3getEv:
	.fnstart
	.pad	#4
	sub	sp, #4
	str	r0, [sp]
	ldr	r0, [sp]
	ldrb	r0, [r0, #4]
	add	sp, #4
	bx	lr
.Lfunc_end1:
	.size	_ZN1A3getEv, .Lfunc_end1-_ZN1A3getEv
	.cantunwind
	.fnend

	.globl	_ZNK1B4getBEv
	.p2align	1
	.type	_ZNK1B4getBEv,%function
	.code	16
	.thumb_func
_ZNK1B4getBEv:
	.fnstart
	.pad	#4
	sub	sp, #4
	str	r0, [sp]
	ldr	r0, [sp]
	ldrh	r0, [r0, #6]
	add	sp, #4
	bx	lr
.Lfunc_end2:
	.size	_ZNK1B4getBEv, .Lfunc_end2-_ZNK1B4getBEv
	.cantunwind
	.fnend

	.globl	_ZN1B3getEv
	.p2align	1
	.type	_ZN1B3getEv,%function
	.code	16
	.thumb_func
_ZN1B3getEv:
	.fnstart
	.pad	#4
	sub	sp, #4
	str	r0, [sp]
	ldr	r0, [sp]
	ldrh	r0, [r0, #6]
	add	sp, #4
	bx	lr
.Lfunc_end3:
	.size	_ZN1B3getEv, .Lfunc_end3-_ZN1B3getEv
	.cantunwind
	.fnend

	.globl	_Z10maFonctionv
	.p2align	1
	.type	_Z10maFonctionv,%function
	.code	16
	.thumb_func
_Z10maFonctionv:
	.fnstart
	.save	{r7, lr}
	push	{r7, lr}
	.pad	#16
	sub	sp, #16
	add	r0, sp, #8
	str	r0, [sp, #4]
	bl	_ZN1BC2Ev
	ldr	r0, [sp, #4]
	bl	_ZN1A4getAEv
	add	sp, #16
	pop	{r7, pc}
.Lfunc_end4:
	.size	_Z10maFonctionv, .Lfunc_end4-_Z10maFonctionv
	.cantunwind
	.fnend

	.section	.text._ZN1BC2Ev,"axG",%progbits,_ZN1BC2Ev,comdat
	.weak	_ZN1BC2Ev
	.p2align	1
	.type	_ZN1BC2Ev,%function
	.code	16
	.thumb_func
_ZN1BC2Ev:
	.fnstart
	.save	{r7, lr}
	push	{r7, lr}
	.pad	#8
	sub	sp, #8
	str	r0, [sp, #4]
	ldr	r0, [sp, #4]
	str	r0, [sp]
	bl	_ZN1AC2Ev
	movw	r0, :lower16:_ZTV1B
	movt	r0, :upper16:_ZTV1B
	adds	r0, #8
	ldr	r1, [sp]
	str	r0, [r1]
	mov	r0, r1
	add	sp, #8
	pop	{r7, pc}
.Lfunc_end5:
	.size	_ZN1BC2Ev, .Lfunc_end5-_ZN1BC2Ev
	.cantunwind
	.fnend

	.text
	.globl	_Z16monAutreFonctionv
	.p2align	1
	.type	_Z16monAutreFonctionv,%function
	.code	16
	.thumb_func
_Z16monAutreFonctionv:
	.fnstart
	.save	{r7, lr}
	push	{r7, lr}
	.pad	#16
	sub	sp, #16
	add	r0, sp, #8
	str	r0, [sp, #4]
	bl	_ZN1BC2Ev
	ldr	r0, [sp, #4]
	bl	_ZN1B3getEv
	uxtb	r0, r0
	add	sp, #16
	pop	{r7, pc}
.Lfunc_end6:
	.size	_Z16monAutreFonctionv, .Lfunc_end6-_Z16monAutreFonctionv
	.cantunwind
	.fnend

	.section	.text._ZN1AC2Ev,"axG",%progbits,_ZN1AC2Ev,comdat
	.weak	_ZN1AC2Ev
	.p2align	1
	.type	_ZN1AC2Ev,%function
	.code	16
	.thumb_func
_ZN1AC2Ev:
	.fnstart
	.pad	#4
	sub	sp, #4
	str	r0, [sp]
	ldr	r0, [sp]
	movw	r1, :lower16:_ZTV1A
	movt	r1, :upper16:_ZTV1A
	adds	r1, #8
	str	r1, [r0]
	add	sp, #4
	bx	lr
.Lfunc_end7:
	.size	_ZN1AC2Ev, .Lfunc_end7-_ZN1AC2Ev
	.cantunwind
	.fnend

	.type	_ZTV1A,%object
	.section	.rodata,"a",%progbits
	.globl	_ZTV1A
	.p2align	2
_ZTV1A:
	.long	0
	.long	0
	.long	_ZN1A3getEv
	.size	_ZTV1A, 12

	.type	_ZTV1B,%object
	.globl	_ZTV1B
	.p2align	2
_ZTV1B:
	.long	0
	.long	0
	.long	_ZN1B3getEv
	.size	_ZTV1B, 12


	.ident	"clang version 9.0.0 (https://github.com/pierremolinaro/omnibus-dev.git d312afe63b29d46d1764ab91823adc6d459414d1)"
	.section	".note.GNU-stack","",%progbits
	.addrsig
	.addrsig_sym _ZN1A4getAEv
	.eabi_attribute	30, 6
