//---------------------------------------------------------------------------------------------------------------------*
//   CLEAR WORD ARRAY
//---------------------------------------------------------------------------------------------------------------------*

void clearWordArray (unsigned * inTargetPtr,
                     const unsigned inWordCount) asm ("clear.word.array") ;

//---------------------------------------------------------------------------------------------------------------------*

void clearWordArray (unsigned * inTargetPtr,
                     const unsigned inWordCount) {
  unsigned wordCount = inWordCount ;
  while (wordCount > 0) {
    *inTargetPtr = 0 ;
    inTargetPtr ++ ;
    wordCount -= 1 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
