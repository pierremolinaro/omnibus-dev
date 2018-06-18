@----------------------------------------------------------------------------------------------------------------------*
@                                                                                                                      *
@                 U D F    H A N D L E R    ( D O U B L E    S T A C K    M O D E )                                    *
@                                                                                                                      *
@----------------------------------------------------------------------------------------------------------------------*
@                                                                                                                      *
@                    |                            |                                                                    *
@          PSP+32 -> |----------------------------| \
@                    | xPSR                       |  |
@          PSP+28 -> |----------------------------|  |
@                    | PC (UDF instruction)       |  |
@          PSP+24 -> |----------------------------|  |
@                    | LR                         |  |
@          PSP+20 -> |----------------------------|  |
@                    | R12                        |  |  Saved by interrupt response
@          PSP+16 -> |----------------------------|  |
@                    | R3                         |  |
@          PSP+12 -> |----------------------------|  |
@                    | R2                         |  |
@          PSP+8  -> |----------------------------|  |
@                    | R1                         |  |
@          PSP+4  -> |----------------------------|  |
@                    | R0                         |  |
@          PSP    -> |----------------------------| /
@                                                                                                                      *
@----------------------------------------------------------------------------------------------------------------------*

  .section  ".text.as_section_handler","ax",%progbits

  .global as_section_handler
  .type as_section_handler, %function

as_section_handler:
@--------------------- Save preserved registers
  push  {r5, lr}
@--------------------- R5 <- thread SP
  mrs   r5, psp
@----------------------------------------- Restore R0, R1, R2 and R3 from saved stack
  ldmia r5!, {r0, r1, r2, r3}       @ R5 incremented by 16
@--------------------- LR <- Address of UDF instruction
  ldr   lr, [r5, #8]     @ 16 + 8 = 24 : 6 stacked registers before saved PC
@--------------------- Set return address to instruction following UDF
  adds  lr, #2
  str   lr, [r5, #8]
@--------------------- R12 <- address of dispatcher
  ldr   r12, =__section_dispatcher_table
  subs  r5, #16   @ Prepare R5 for storing R0 to R3 in stacked registers
@--------------------- LR <- bits 0-7 of UDF instruction
  ldrb  lr, [lr, #-2]            @ LR is service call index
@--------------------- r12 <- address of routine to call
  ldr   r12, [r12, lr, lsl #2]   @ R12 += LR << 2
@--------------------- Call service routine
  blx   r12                      @ R5: thread PSP
@--------------------- Set return code (from R0 to R3) in stacked registers
  stmia r5!, {r0, r1, r2, r3}    @ R5 is thread SP
@--------------------- Restore preserved registers, return from interrupt
  pop   {r5, pc}

