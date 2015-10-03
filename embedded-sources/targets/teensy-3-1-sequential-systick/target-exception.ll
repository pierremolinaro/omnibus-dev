;----------------------------------------------------------------------------------------------------------------------*

define internal void @raise_exception (i32 %inCode, i8* %inSourceFile, i32 %inSourceLine) nounwind noreturn {
;--- Mask interrupt: write 1 into FAULTMASK register
  call void asm sideeffect "msr FAULTMASK, $0", "r"(i32 1) nounwind
;--- Goto user code
  call void @raise_exception_internal (i32 %inCode, i8* %inSourceFile, i32 %inSourceLine)
  unreachable
}

