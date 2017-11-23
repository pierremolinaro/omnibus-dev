//---------------------------------------------------------------------------------------------------------------------*
//   COPY BYTE ARRAY
//---------------------------------------------------------------------------------------------------------------------*

void copyByteArray (unsigned char * inTargetPtr,
                    unsigned char * inSourcePtr,
                    const unsigned inByteCount) asm ("copy.byte.array") ;

//---------------------------------------------------------------------------------------------------------------------*

void copyByteArray (unsigned char * inTargetPtr,
                    unsigned char * inSourcePtr,
                    const unsigned inByteCount) {
  unsigned byteCount = inByteCount ;
  do {
    *inTargetPtr = *inSourcePtr ;
    inTargetPtr ++ ;
    inSourcePtr ++ ;
    byteCount -= 1 ;
  }while (byteCount > 0) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   COPY WORD ARRAY
//---------------------------------------------------------------------------------------------------------------------*

void copyWordArray (unsigned * inTargetPtr,
                    unsigned * inSourcePtr,
                    const unsigned inWordCount) asm ("copy.word.array") ;

//---------------------------------------------------------------------------------------------------------------------*

void copyWordArray (unsigned * inTargetPtr,
                    unsigned * inSourcePtr,
                    const unsigned inWordCount) {
  unsigned wordCount = inWordCount ;
  do {
    *inTargetPtr = *inSourcePtr ;
    inTargetPtr ++ ;
    inSourcePtr ++ ;
    wordCount -= 1 ;
  }while (wordCount > 0) ;
}

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
