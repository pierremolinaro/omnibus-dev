//---------------------------------------------------------------------------------------------------------------------*

/*static unsigned countTrainingZeros (const unsigned inValue) {
  unsigned result = 0 ;
  unsigned w = inValue ;
  while ((w & 1) == 0) {
    result ++ ;
    w >>= 1 ;
  }
  return result ;
}*/

// WARNING: the result is undefined if inValue equal to 0

static unsigned countTrainingZeros (const unsigned inValue) {
  return __builtin_ctz (inValue) ;
}

//---------------------------------------------------------------------------------------------------------------------*
