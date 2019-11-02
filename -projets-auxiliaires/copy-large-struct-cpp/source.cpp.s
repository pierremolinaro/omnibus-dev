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
	.file	"source.cpp"
	.globl	_Z10maCopieRefR6StructRKS_
	.p2align	1
	.type	_Z10maCopieRefR6StructRKS_,%function
	.code	16
	.thumb_func
_Z10maCopieRefR6StructRKS_:
	.fnstart
	.save	{r7, lr}
	push	{r7, lr}
	mov.w	r2, #4000
	bl	__aeabi_memcpy4
	pop	{r7, pc}
.Lfunc_end0:
	.size	_Z10maCopieRefR6StructRKS_, .Lfunc_end0-_Z10maCopieRefR6StructRKS_
	.cantunwind
	.fnend

	.globl	_Z10maCopieValR6StructS_
	.p2align	1
	.type	_Z10maCopieValR6StructS_,%function
	.code	16
	.thumb_func
_Z10maCopieValR6StructS_:
	.fnstart
	.pad	#12
	sub	sp, #12
	.save	{r7, lr}
	push	{r7, lr}
	.pad	#4
	sub	sp, #4
	add.w	r12, sp, #12
	stm.w	r12, {r1, r2, r3}
	add	r1, sp, #12
	mov.w	r2, #4000
	bl	__aeabi_memcpy4
	add	sp, #4
	pop.w	{r7, lr}
	add	sp, #12
	bx	lr
.Lfunc_end1:
	.size	_Z10maCopieValR6StructS_, .Lfunc_end1-_Z10maCopieValR6StructS_
	.cantunwind
	.fnend


	.ident	"clang version 9.0.0 (https://github.com/pierremolinaro/omnibus-dev.git d312afe63b29d46d1764ab91823adc6d459414d1)"
	.section	".note.GNU-stack","",%progbits
	.addrsig
	.eabi_attribute	30, 1
