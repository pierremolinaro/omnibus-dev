;----------------------------------------------------------------------------------------------------------------------*

define internal void @raise_panic (i32 %inSourceLine, i32 %inCode, i8* %inSourceFile) nounwind noreturn naked {
;--- Mask interrupt: write 1 into FAULTMASK register
  call void asm sideeffect "msr FAULTMASK, $0", "r"(i32 1) nounwind
;--- Goto user code
  call void @raise_panic_internal (i32 %inSourceLine, i32 %inCode, i8* %inSourceFile)
  unreachable
}

