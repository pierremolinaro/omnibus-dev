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

void copyWordArray (unsigned * inTargetPtr,
                    unsigned * inSourcePtr,
                    const unsigned inByteCount) asm ("copy.word.array") ;

//---------------------------------------------------------------------------------------------------------------------*

void copyWordArray (unsigned * inTargetPtr,
                    unsigned * inSourcePtr,
                    const unsigned inByteCount) {
  unsigned wordCount = inByteCount / 4 ;
  do {
    *inTargetPtr = *inSourcePtr ;
    inTargetPtr ++ ;
    inSourcePtr ++ ;
    wordCount -= 1 ;
  }while (wordCount > 0) ;
}

//---------------------------------------------------------------------------------------------------------------------*
