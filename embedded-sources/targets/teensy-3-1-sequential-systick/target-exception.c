//---------------------------------------------------------------------------------------------------------------------*

static void raise_exception (const type_int32 inCode,
                             const char * inSourceFile,
                             const type_uint32 inSourceLine) {
 //--- Mask interrupt: write 1 into FAULTMASK register
  const uint32_t maskValue = 1 ;
  __asm__ ("msr FAULTMASK, %[reg]" : : [reg]"r"(maskValue));
  raise_exception_internal (inCode, inSourceFile, inSourceLine) ;
}

//---------------------------------------------------------------------------------------------------------------------*
