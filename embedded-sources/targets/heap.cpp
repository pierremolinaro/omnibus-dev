//----------------------------------------------------------------------------------------------------------------------
//
//  DYNAMIC ALLOCATION
//
//----------------------------------------------------------------------------------------------------------------------

unsigned heapEndAddress (void) asm ("!FUNC!heap.end.address") ;
unsigned heapStartAddress (void) asm ("!FUNC!heap.start.address") ;
unsigned heapAllocAddress (void) asm ("!FUNC!heap.alloc.address") ;
unsigned freeByteCount (void) asm ("!FUNC!heap.free.byte.count") ;

unsigned currentlyAllocatedObjectCount (void) asm ("!FUNC!heap.currently.allocated.object.count") ;
unsigned totalAllocationObjectCount (void)  asm ("!FUNC!heap.total.allocation.object.count") ;

unsigned freeListCount (void) asm ("!FUNC!heap.free.list.count") ;
unsigned freeObjectCountForFreeList (const unsigned inFreeListIndex) asm ("!FUNC!heap.free.object.count.for.free.list") ;

//----------------------------------------------------------------------------------------------------------------------

static const unsigned kMinSizePowerOfTwo =  4 ; // Smallest block being allocated = 2 ** kMinSizePowerOfTwo
static const unsigned kMaxSizePowerOfTwo = 16 ; // Biggest block being allocated = 2 ** kMaxSizePowerOfTwo
static const unsigned kSegregatedAllocationListCount = kMaxSizePowerOfTwo - kMinSizePowerOfTwo + 1 ;

//----------------------------------------------------------------------------------------------------------------------

extern unsigned __heap_start ;
extern unsigned __heap_end ;

//----------------------------------------------------------------------------------------------------------------------
//         Heap adresses
//----------------------------------------------------------------------------------------------------------------------

unsigned gFirstFreeAddress = (unsigned) & __heap_start ;

//----------------------------------------------------------------------------------------------------------------------

unsigned heapAllocAddress (void) {
  return gFirstFreeAddress ;
}

//----------------------------------------------------------------------------------------------------------------------

unsigned heapStartAddress (void) {
  return (unsigned) & __heap_start ;
}

//----------------------------------------------------------------------------------------------------------------------

unsigned heapEndAddress (void) {
  return (unsigned) & __heap_end ;
}

//----------------------------------------------------------------------------------------------------------------------

unsigned freeByteCount (void) {
  return heapEndAddress () - gFirstFreeAddress ;
}

//----------------------------------------------------------------------------------------------------------------------
//         Allocation count
//----------------------------------------------------------------------------------------------------------------------

unsigned gCurrentlyAllocatedCount ;
unsigned gTotalAllocationCount ;

//----------------------------------------------------------------------------------------------------------------------

unsigned currentlyAllocatedObjectCount (void) {
  return gCurrentlyAllocatedCount ;
}

//----------------------------------------------------------------------------------------------------------------------

unsigned totalAllocationObjectCount (void) {
  return gTotalAllocationCount ;
}

//----------------------------------------------------------------------------------------------------------------------
//  FREE BLOCK SEGREGATED LIST
//----------------------------------------------------------------------------------------------------------------------

typedef struct structFreeBlock {
  struct structFreeBlock * mNextFreeBlock ;
} tFreeBlock ;

//----------------------------------------------------------------------------------------------------------------------

typedef struct {
  tFreeBlock * mFreeBlockList ;
  unsigned mFreeBlockCount ;
} tFreeBlockListDescriptor ;

//----------------------------------------------------------------------------------------------------------------------

tFreeBlockListDescriptor gFreeBlockDescriptorArray [kSegregatedAllocationListCount] ;

//----------------------------------------------------------------------------------------------------------------------

unsigned freeObjectCountForFreeList (const unsigned inFreeListIndex) {
  return (inFreeListIndex < kSegregatedAllocationListCount)
    ? gFreeBlockDescriptorArray [inFreeListIndex].mFreeBlockCount
    : 0
  ;
}

//----------------------------------------------------------------------------------------------------------------------

unsigned freeListCount (void) {
  return kSegregatedAllocationListCount ;
}

//----------------------------------------------------------------------------------------------------------------------
//  ALLOCATION / DEALLOCATION
//----------------------------------------------------------------------------------------------------------------------

typedef struct {
  unsigned short mBlockSizeIndex ;
  unsigned short mLength ;
  unsigned mReferenceCount ;
  unsigned char mBuffer8 [] ;
} DataBufferHeaderType ;

//----------------------------------------------------------------------------------------------------------------------

DataBufferHeaderType * memoryAlloc (unsigned inBlockSizeIndex) asm ("!SECTIONCALL!heap.memory.alloc") ;

DataBufferHeaderType * kernel_memoryAlloc (unsigned inBlockSizeIndex) asm ("!SECTIONIMPLEMENTATION!heap.memory.alloc") ;

//----------------------------------------------------------------------------------------------------------------------

DataBufferHeaderType * kernel_memoryAlloc (unsigned inBlockSizeIndex) {
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
    result->mBlockSizeIndex = (unsigned short) inBlockSizeIndex ;
    result->mLength = 0 ;
    result->mReferenceCount = 1 ;
    gCurrentlyAllocatedCount += 1 ;
    gTotalAllocationCount += 1 ;
  }
//---
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void memoryFree (DataBufferHeaderType * inPointer) asm ("!SECTIONCALL!heap.memory.free") ;

void kernel_memoryFree (DataBufferHeaderType * inPointer) asm ("!SECTIONIMPLEMENTATION!heap.memory.free") ;

//----------------------------------------------------------------------------------------------------------------------

void kernel_memoryFree (DataBufferHeaderType * inPointer) {
  const unsigned idx = inPointer->mBlockSizeIndex ;
  tFreeBlock * freeBlockPtr = (tFreeBlock *) inPointer ;
  freeBlockPtr->mNextFreeBlock = gFreeBlockDescriptorArray [idx].mFreeBlockList ;
  gFreeBlockDescriptorArray [idx].mFreeBlockList = freeBlockPtr ;
  gFreeBlockDescriptorArray [idx].mFreeBlockCount += 1 ;
  gCurrentlyAllocatedCount -= 1 ;
}

//----------------------------------------------------------------------------------------------------------------------

static unsigned blockSize (DataBufferHeaderType * inPointer) {
  unsigned size = 0 ;
  if (inPointer != (DataBufferHeaderType *) 0) {
    size = 1 << (inPointer->mBlockSizeIndex + kMinSizePowerOfTwo) ;
  }
  return size ;
}

//----------------------------------------------------------------------------------------------------------------------

static unsigned blockSizeIndexForSize (const unsigned inRequiredBlockSize) {
  unsigned powerOfTwo = 0 ;
  if (inRequiredBlockSize > 0) {
    unsigned s = inRequiredBlockSize - 1 ;
    while (s > 0) {
      powerOfTwo += 1 ;
      s >>= 1 ;
    }
  }
  return (powerOfTwo <= kMinSizePowerOfTwo) ? 0 : (powerOfTwo - kMinSizePowerOfTwo) ;
}

//----------------------------------------------------------------------------------------------------------------------

static DataBufferHeaderType * reallocBlock (DataBufferHeaderType * inPointer, const unsigned inBlockSizeIndex) {
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

//----------------------------------------------------------------------------------------------------------------------

static DataBufferHeaderType * internalInsulate (DataBufferHeaderType * inPointer) {
  DataBufferHeaderType * result = inPointer ;
  if ((inPointer != (DataBufferHeaderType *) 0) && (inPointer->mReferenceCount > 1)) {
    result = reallocBlock (inPointer, inPointer->mBlockSizeIndex) ;
  }
  return result ;
}

