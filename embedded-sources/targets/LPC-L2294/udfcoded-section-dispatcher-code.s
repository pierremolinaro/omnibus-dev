@----------------------------------------------------------------------------------------------------------------------*
@                                                                                                                      *
@        U N D E F I N E D    I N S T R U C T I O N    H A N D L E R                                                   *
@                                                                                                                      *
@----------------------------------------------------------------------------------------------------------------------*
@                                                                                                                      *
@ We use some arm undefined instructions for performing kernel defined operations that do not use context switchs.     *
@                                                                                                                      *
@----------------------------------------------------------------------------------------------------------------------*
@                                                                                                                      *
@           In ARM Architecture ReferenceManual, page A3-39                                                            *
@          A3.16.5 Architecturally Undefined Instruction space                                                         *
@                                                                                                                      *
@ In general, Undefined instructions might be used to extend the ARM instruction set in the future. However, it is     *
@ intended that instructions with the following encoding will not be used for this:                                    *
@                                                                                                                      *
@ 3322 2222 2222 1111  1111 1100 0000 0000                                                                             *
@ 1098 7654 3210 9876  5432 1098 7654 3210                                                                             *
@ ---- ---- ---- ----  ---- ---- ---- ----                                                                             *
@ cond 0111 1111 xxxx  xxxx xxxx 1111 xxxx                                                                             *
@                                                                                                                      *
@ If a programmer wants to use an Undefined instruction for software, purposes with minimal risk that future hardware  *
@ will treat it as a defined instruction, one of the instructions with this encoding must be used.                     *
@                                                                                                                      *
@----------------------------------------------------------------------------------------------------------------------*

	.section	.text.as_undef_handler,"ax",%progbits

  .global as_undef_handler

as_undef_handler:
@--- Save preserved registers
  stmfd r13!, {r7, lr}
@--- r7 <- bits 15-8 of undef instruction
@    LDRB loads a byte from memory and zero-extends the byte to a 32-bit word.
  ldrb  r7, [lr, #-4 + 1] @ -4 for undef instruction, +1 for getting second byte
@--- r12 <- address of routine to call
  ldr   r12, =__und_dispatcher_table
  ldr   r12, [r12, r7, LSL #2]
@--- Call routine
  mov   lr, pc
  bx    r12
@--- Return from interrupt
  ldmfd r13!, {r7, pc}^

@----------------------------------------------------------------------------------------------------------------------*

