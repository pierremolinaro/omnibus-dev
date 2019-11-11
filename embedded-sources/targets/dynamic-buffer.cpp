//----------------------------------------------------------------------------------------------------------------------
//   GENERIC DYNAMIC BUFFER FUNCTIONS
//----------------------------------------------------------------------------------------------------------------------

void retain (unsigned inPointer) asm ("arc.retain") ;

void release (unsigned inPointer) asm ("arc.release") ;

unsigned insulate (unsigned inPointer) asm ("arc.insulate") ;

unsigned insertAtIndex (unsigned inPointer, unsigned inIndex, unsigned inElementSize, unsigned* outElementPtr)
asm ("arc.insert.at.index") ;

unsigned bufferLength (unsigned inPointer) asm ("arc.length") ;

//----------------------------------------------------------------------------------------------------------------------

void retain (unsigned inPointer) {
  if (inPointer != 0) {
    DataBufferHeaderType * p = (DataBufferHeaderType *) inPointer ;
    p->mReferenceCount += 1 ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void release (unsigned inPointer) {
  if (inPointer != 0) {
    DataBufferHeaderType * p = (DataBufferHeaderType *) inPointer ;
    if (p->mReferenceCount > 1) {
      p->mReferenceCount -= 1 ;
    }else{
      memoryFree (p) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

unsigned insulate (unsigned inPointer) {
  return (unsigned) internalInsulate ((DataBufferHeaderType *) inPointer) ;
}

//----------------------------------------------------------------------------------------------------------------------
//  BUFFER LENGTH
//----------------------------------------------------------------------------------------------------------------------

unsigned bufferLength (unsigned inPointer) {
  unsigned length = 0 ;
  if (inPointer != 0) {
    const DataBufferHeaderType * p = (const DataBufferHeaderType *) inPointer ;
    length = p->mLength ;
  }
  return length ;
}


//----------------------------------------------------------------------------------------------------------------------

unsigned insertAtIndex (unsigned inPointer, unsigned inIndex, unsigned inElementSize, unsigned* outElementPtr) {
  DataBufferHeaderType * ptr = (DataBufferHeaderType *) inPointer ;
  if (inPointer == 0) {
    ptr = memoryAlloc (blockSizeIndexForSize (inElementSize)) ;
  }else{
    const unsigned currentLength = bufferLength (inPointer) ;
    const unsigned requiredSize = (currentLength + 1) * inElementSize ;
    const unsigned currentSize = blockSize (ptr) ;
  //--- Need to realloc, or insulate ?
    if (requiredSize > currentSize) {
      ptr = reallocBlock (ptr, blockSizeIndexForSize (requiredSize)) ;
    }else{
      ptr = (DataBufferHeaderType *) insulate ((unsigned) ptr) ;
    }
  //--- Move elements beyond insert index
    for (unsigned i= (currentLength * inElementSize) ; i > (inIndex * inElementSize) ; i--) {
      ptr->mBuffer8 [i] = ptr->mBuffer8 [i - inElementSize] ;
    }
  }
//--- Zero insert zone
  for (unsigned i= (inIndex * inElementSize) ; i < ((inIndex + 1) * inElementSize) ; i++) {
    ptr->mBuffer8 [i] = 0 ;
  }
//--- Increment length
  ptr->mLength += 1 ;
//--- Set inserted element pointer
  *outElementPtr = (unsigned) & ptr->mBuffer8 [inIndex * inElementSize] ;
//--- Return
  return (unsigned) ptr ;
}

//----------------------------------------------------------------------------------------------------------------------
