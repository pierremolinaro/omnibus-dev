//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
//  DYNAMIC BYTE BUFFER
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

void appendByte (const unsigned char inByte, unsigned * ioPointer) asm ("!FUNC!dynamicBuffer.buffer.append.byte") ;

void removeAll (unsigned * ioPointer) asm ("!FUNC!dynamicBuffer.buffer.remove.all") ;

void setByteAtIndex (const unsigned char inByte, const unsigned inIndex, unsigned * ioPointer)
asm ("!FUNC!dynamicBuffer.buffer.set.byte.at.index") ;

unsigned char getByteAtIndex (const unsigned inIndex, unsigned * ioPointer)
asm ("!FUNC!dynamicBuffer.buffer.get.byte.at.index") ;

void removeByteAtIndex (const unsigned inIndex, unsigned * ioPointer)
asm ("!FUNC!dynamicBuffer.buffer.remove.byte.at.index") ;

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

void appendByte (const unsigned char inByte, unsigned * ioPointer) {
  if ((*ioPointer) == 0) { // No allocated block
    DataBufferHeaderType * p = memoryAlloc (0) ; // Allocate smallest block
    p->mBuffer8 [0] = inByte ;
    p->mLength = 1 ;
    *ioPointer = (unsigned) p ;
  }else{ // Block is allocated
    DataBufferHeaderType * p = (DataBufferHeaderType *) (*ioPointer) ;
    if (p->mLength < blockSize (p)) { // Buffer full ?
      if (p->mReferenceCount > 1) {
        p = reallocBlock (p, p->mBlockSizeIndex) ;
        *ioPointer = (unsigned) p ;
      }
      p->mBuffer8 [p->mLength] = inByte ;
      p->mLength += 1 ;
    }else{ // Block is full
     //--- Allocate next size block
      p = reallocBlock (p, p->mBlockSizeIndex + 1) ;
    //--- Append byte
      p->mBuffer8 [p->mLength] = inByte ;
      p->mLength += 1 ;
    //---
      *ioPointer = (unsigned) p ;
    }
  }
}

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

void removeAll (unsigned * ioPointer) {
  if ((*ioPointer) != 0) {
    DataBufferHeaderType * p = (DataBufferHeaderType *) (*ioPointer) ;
    if (p->mReferenceCount == 1) {
      memoryFree (p) ;
    }else{
      p->mReferenceCount -= 1 ;
    }
    *ioPointer = 0 ;
  }
}

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

void setByteAtIndex (const unsigned char inByte, const unsigned inIndex, unsigned * ioPointer) {
  if (inIndex < bufferLength (* ioPointer)) { // Prevent over index
    DataBufferHeaderType * p = (DataBufferHeaderType *) (*ioPointer) ;
    if (p->mReferenceCount == 1) {
      p->mBuffer8 [inIndex] = inByte ;
    }else{
     //--- Allocate next size block
      DataBufferHeaderType * newBlock = reallocBlock (p, p->mBlockSizeIndex) ;
    //--- Copy byte
      newBlock->mBuffer8 [inIndex] = inByte ;
    //---
      *ioPointer = (unsigned) newBlock ;
    }
  }
}

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

unsigned char getByteAtIndex (const unsigned inIndex, unsigned * inPointer) {
  unsigned char result = 0 ;
  if (inIndex < bufferLength (*inPointer)) { // Prevent over index
    DataBufferHeaderType * p = (DataBufferHeaderType *) (*inPointer) ;
    result = p->mBuffer8 [inIndex] ;
  }
  return result ;
}

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

void removeByteAtIndex (const unsigned inIndex, unsigned * ioPointer) {
  const unsigned length = bufferLength (* ioPointer) ;
  if (inIndex < length) { // Prevent over index
    DataBufferHeaderType * p = (DataBufferHeaderType *) (*ioPointer) ;
    if (length == 1) { // Buffer has one one byte --> release it
      if (p->mReferenceCount > 1) {
        p->mReferenceCount -= 1 ;
      }else{
        memoryFree (p) ;
        *ioPointer = 0 ;
      }
    }else{ // Buffer has more than one byte
      if (p->mReferenceCount > 1) {
        p = reallocBlock (p, p->mBlockSizeIndex) ;
        *ioPointer = (unsigned) p ;
      }
      for (unsigned i=inIndex+1 ; i<length ; i++) {
        p->mBuffer8 [i-1] = p->mBuffer8 [i] ;
      }
      p->mLength -= 1 ;
    }
  }
}

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
