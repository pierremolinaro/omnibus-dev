;----------------------------------------------------------------------------------------------------------------------*

define internal void @raise.panic (!PANICLINE! %inSourceLine, !PANICCODE! %inCode, i8* %inSourceFile) nounwind noreturn naked {
;--- Mask interrupt: write 1 into FAULTMASK register
  call void asm sideeffect "msr FAULTMASK, $0", "r"(i32 1) nounwind
;--- Goto user code
  call void @raise.panic.internal (!PANICLINE! %inSourceLine, !PANICCODE! %inCode, i8* %inSourceFile) noreturn
  unreachable
}
