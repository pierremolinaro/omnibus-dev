//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
//
//  DYNAMIC ALLOCATION
//
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

unsigned heapEndAddress (void) asm ("!FUNC!heap.end.address") ;
unsigned heapStartAddress (void) asm ("!FUNC!heap.start.address") ;
unsigned heapAllocAddress (void) asm ("!FUNC!heap.alloc.address") ;
unsigned freeByteCount (void) asm ("!FUNC!heap.free.byte.count") ;

unsigned currentlyAllocatedObjectCount (void) asm ("!FUNC!heap.currently.allocated.object.count") ;
unsigned totalAllocationObjectCount (void)  asm ("!FUNC!heap.total.allocation.object.count") ;

unsigned freeListCount (void) asm ("!FUNC!heap.free.list.count") ;
unsigned freeObjectCountForFreeList (const unsigned inFreeListIndex) asm ("!FUNC!heap.free.object.count.for.free.list") ;

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

static const unsigned short kMinSizePowerOfTwo =  4 ; // Smallest block being allocated = 2 ** kMinSizePowerOfTwo
static const unsigned short kMaxSizePowerOfTwo = 16 ; // Biggest block being allocated = 2 ** kMaxSizePowerOfTwo
static const unsigned kSegregatedAllocationListCount = kMaxSizePowerOfTwo - kMinSizePowerOfTwo + 1 ;

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

extern unsigned __heap_start ;
extern unsigned __heap_end ;

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
//         Heap adresses
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

unsigned gFirstFreeAddress = (unsigned) & __heap_start ;

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

unsigned heapAllocAddress (void) {
  return gFirstFreeAddress ;
}

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

unsigned heapStartAddress (void) {
  return (unsigned) & __heap_start ;
}

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

unsigned heapEndAddress (void) {
  return (unsigned) & __heap_end ;
}

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

unsigned freeByteCount (void) {
  return heapEndAddress () - gFirstFreeAddress ;
}

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
//         Allocation count
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

unsigned gCurrentlyAllocatedCount ;
unsigned gTotalAllocationCount ;

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

unsigned currentlyAllocatedObjectCount (void) {
  return gCurrentlyAllocatedCount ;
}

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

unsigned totalAllocationObjectCount (void) {
  return gTotalAllocationCount ;
}

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
//  FREE BLOCK SEGREGATED LIST
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

typedef struct structFreeBlock {
  struct structFreeBlock * mNextFreeBlock ;
} tFreeBlock ;

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

typedef struct {
  tFreeBlock * mFreeBlockList ;
  unsigned mFreeBlockCount ;
} tFreeBlockListDescriptor ;

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

tFreeBlockListDescriptor gFreeBlockDescriptorArray [kSegregatedAllocationListCount] ;

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

unsigned freeObjectCountForFreeList (const unsigned inFreeListIndex) {
  return (inFreeListIndex < kSegregatedAllocationListCount)
    ? gFreeBlockDescriptorArray [inFreeListIndex].mFreeBlockCount
    : 0
  ;
}

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

unsigned freeListCount (void) {
  return kSegregatedAllocationListCount ;
}

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
//  ALLOCATION / DEALLOCATION
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

typedef struct {
  unsigned short mBlockSizeIndex ;
  unsigned short mLength ;
  unsigned mReferenceCount ;
  unsigned char mBuffer8 [] ;
} DataBufferHeaderType ;

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

static DataBufferHeaderType * memoryAlloc (unsigned short inBlockSizeIndex) {
  DataBufferHeaderType * result = (DataBufferHeaderType *) 0 ;
  tFreeBlockListDescriptor * descriptorPtr = & gFreeBlockDescriptorArray [inBlockSizeIndex] ;
  if (descriptorPtr->mFreeBlockCount > 0) { // Allocate from free list
    descriptorPtr->mFreeBlockCount -= 1 ;
    tFreeBlock * p = descriptorPtr->mFreeBlockList ;
    descriptorPtr->mFreeBlockList = p->mNextFreeBlock ;
    result = (DataBufferHeaderType *) p ;
  }else{ // Allocate from heap
    const unsigned allocationSize = (1 << (inBlockSizeIndex + kMinSizePowerOfTwo)) + sizeof (DataBufferHeaderType) ;
    if ((gFirstFreeAddress + allocationSize) <= heapEndAddress ()) { // No Heap overflow
      result = (DataBufferHeaderType *) gFirstFreeAddress ;
      gFirstFreeAddress += allocationSize ;
    }
  }
//---
  if (result != (DataBufferHeaderType *) 0) {
    result->mBlockSizeIndex = inBlockSizeIndex ;
    result->mLength = 0 ;
    result->mReferenceCount = 1 ;
    gCurrentlyAllocatedCount += 1 ;
    gTotalAllocationCount += 1 ;
  }
//---
  return result ;
}

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

static void memoryFree (DataBufferHeaderType * inPointer) {
  const unsigned idx = inPointer->mBlockSizeIndex ;
  tFreeBlock * freeBlockPtr = (tFreeBlock *) inPointer ;
  freeBlockPtr->mNextFreeBlock = gFreeBlockDescriptorArray [idx].mFreeBlockList ;
  gFreeBlockDescriptorArray [idx].mFreeBlockList = freeBlockPtr ;
  gFreeBlockDescriptorArray [idx].mFreeBlockCount += 1 ;
  gCurrentlyAllocatedCount -= 1 ;
}

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

static unsigned blockSize (DataBufferHeaderType * inPointer) {
  unsigned size = 0 ;
  if (inPointer != (DataBufferHeaderType *) 0) {
    size = 1 << (inPointer->mBlockSizeIndex + kMinSizePowerOfTwo) ;
  }
  return size ;
}

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
//  DYNAMIC BYTE BUFFER
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

void appendByte (const unsigned char inByte, unsigned * ioPointer) asm ("!FUNC!data.buffer.append.byte") ;

unsigned bufferLength (unsigned inPointer) asm ("!FUNC!data.buffer.length") ;

void removeAll (unsigned * ioPointer) asm ("!FUNC!data.buffer.remove.all") ;

void setByteAtIndex (const unsigned char inByte, const unsigned inIndex, unsigned * ioPointer)
asm ("!FUNC!data.buffer.set.byte.at.index") ;

unsigned char getByteAtIndex (const unsigned inIndex, unsigned * ioPointer)
asm ("!FUNC!data.buffer.get.byte.at.index") ;

void removeByteAtIndex (const unsigned inIndex, unsigned * ioPointer)
asm ("!FUNC!data.buffer.remove.byte.at.index") ;

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

void retain (unsigned inPointer) asm ("data.retain") ;
void release (unsigned inPointer) asm ("data.release") ;

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

static DataBufferHeaderType * reallocBlock (DataBufferHeaderType * inPointer, const unsigned short inBlockSizeIndex) {
//--- Allocate next size block
  DataBufferHeaderType * newBlock = memoryAlloc (inBlockSizeIndex) ;
//--- Copy buffer content to new block
  for (unsigned i=0 ; i<inPointer->mLength ; i++) {
    newBlock->mBuffer8 [i] = inPointer->mBuffer8 [i] ;
  }
  newBlock->mLength = inPointer->mLength ;
//--- Free old block ?
  if (inPointer->mReferenceCount == 1) {
    memoryFree (inPointer) ;
  }else{
    inPointer->mReferenceCount -= 1 ;
  }
//---
  return newBlock ;
}

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
      p->mBuffer8 [p->mLength] = inByte ; // Not full
      p->mLength += 1 ;
    }else{ // Block is full
     //--- Allocate next size block
      DataBufferHeaderType * newBlock = reallocBlock (p, p->mBlockSizeIndex + 1) ;
    //--- Copy buffer content to new block
      newBlock->mBuffer8 [newBlock->mLength] = inByte ;
      newBlock->mLength += 1 ;
    //---
      *ioPointer = (unsigned) newBlock ;
    }
  }
}

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

unsigned bufferLength (unsigned inPointer) {
  unsigned length = 0 ;
  if (inPointer != 0) {
    const DataBufferHeaderType * p = (const DataBufferHeaderType *) inPointer ;
    length = p->mLength ;
  }
  return length ;
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

void retain (unsigned inPointer) {
  if (inPointer != 0) {
    DataBufferHeaderType * p = (DataBufferHeaderType *) inPointer ;
    p->mReferenceCount += 1 ;
  }
}

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

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

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
