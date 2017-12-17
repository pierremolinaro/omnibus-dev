//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
//
//  DYNAMIC ALLOCATION
//
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

unsigned heapEndAddress (void) asm ("!FUNC!heap.end.address") ;
unsigned heapStartAddress (void) asm ("!FUNC!heap.start.address") ;
unsigned heapAllocAddress (void) asm ("!FUNC!heap.alloc.address") ;
unsigned freeByteCount (void) asm ("!FUNC!heap.free.byte.count") ;
//unsigned tempo (void) asm ("!FUNC!heap.temp") ;

unsigned currentlyAllocatedObjectCount (void) asm ("!FUNC!heap.currently.allocated.object.count") ;
unsigned totalAllocationObjectCount (void)  asm ("!FUNC!heap.total.allocation.object.count") ;

unsigned freeListCount (void) asm ("!FUNC!heap.free.list.count") ;
unsigned freeObjectCountForFreeList (const unsigned inFreeListIndex) asm ("!FUNC!heap.free.object.count.for.free.list") ;

unsigned memoryAlloc (const unsigned inBlockSize) asm ("!FUNC!heap.alloc") ;
void memoryFree (unsigned * inPointer) asm ("!FUNC!heap.free") ;
unsigned allocatedByteSize (unsigned inPointer) asm ("!FUNC!heap.allocated.byte.size") ;

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

static const unsigned kMaxSizePowerOfTwo = 16 ; // Biggest block being allocated = 2 ** kMaxSizePowerOfTwo
static const unsigned kMinSizePowerOfTwo =  4 ; // Smallest block being allocated = 2 ** kMinSizePowerOfTwo
static const unsigned kSegregatedAllocationListCount = kMaxSizePowerOfTwo - kMinSizePowerOfTwo + 1 ;

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

extern unsigned __heap_start ;
extern unsigned __heap_end ;

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
//         Heap adresses
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

static unsigned gFirstFreeAddress = (unsigned) & __heap_start ;

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

unsigned heapEndAddress (void) {
  return (unsigned) & __heap_end ;
}

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

unsigned heapStartAddress (void) {
  return (unsigned) & __heap_start ;
}

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

unsigned heapAllocAddress (void) {
  return gFirstFreeAddress ;
}

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

unsigned freeByteCount (void) {
  return ((unsigned) & __heap_end) - gFirstFreeAddress ;
}

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
//         Allocation count
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

static unsigned gCurrentlyAllocatedCount ;
static unsigned gTotalAllocationCount ;

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

unsigned currentlyAllocatedObjectCount (void) {
  return gCurrentlyAllocatedCount ;
}

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

unsigned totalAllocationObjectCount (void) {
  return gTotalAllocationCount ;
}

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
  return gFreeBlockDescriptorArray [inFreeListIndex].mFreeBlockCount ;
}

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

unsigned freeListCount (void) {
  return kSegregatedAllocationListCount ;
}

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

typedef struct {
  unsigned mBlockSizeIndex ;
} HEADER_TYPE ;

// static unsigned gTempo ;
//
// unsigned tempo (void) {
//   return gTempo ;
// }

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

unsigned memoryAlloc (const unsigned inBlockSize) {
  HEADER_TYPE * result = (HEADER_TYPE *) 0 ;
  if (inBlockSize > 0) {
  //--- Compute smallest block with size equal to a power of two bigger of equal to required size
    unsigned v = inBlockSize - 1 ;
    unsigned smallestPowerOfTwo = 0 ;
    while (v > 0) {
      smallestPowerOfTwo ++ ;
      v >>= 1 ;
    }
  //--- Allocate if not too large
    if (smallestPowerOfTwo <= kMaxSizePowerOfTwo) {
      if (smallestPowerOfTwo < kMinSizePowerOfTwo) {
        smallestPowerOfTwo = kMinSizePowerOfTwo ;
      }
      const unsigned idx = smallestPowerOfTwo - kMinSizePowerOfTwo ;
      tFreeBlockListDescriptor * descriptorPtr = & gFreeBlockDescriptorArray [idx] ;
      if (descriptorPtr->mFreeBlockCount > 0) { // Allocate from free list
        descriptorPtr->mFreeBlockCount -- ;
        tFreeBlock * p = descriptorPtr->mFreeBlockList ;
        descriptorPtr->mFreeBlockList = p->mNextFreeBlock ;
        result = (HEADER_TYPE *) p ;
        gCurrentlyAllocatedCount ++ ;
        gTotalAllocationCount ++ ;
      }else{ // Allocate from heap
         result = (HEADER_TYPE *) gFirstFreeAddress ;
         const unsigned allocationSize = (1 << smallestPowerOfTwo) + sizeof (HEADER_TYPE) ;
         gFirstFreeAddress += allocationSize ;
         if (gFirstFreeAddress >= heapEndAddress ()) { // Heap overflow ?
           gFirstFreeAddress -= allocationSize ; // Yes, overflow
           result = (HEADER_TYPE *) 0 ;
         }else{
           result->mBlockSizeIndex = idx ;
           result ++ ;
           gCurrentlyAllocatedCount ++ ;
           gTotalAllocationCount ++ ;
         }
      }
    }
  }
  return (unsigned) result ;
}

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

void memoryFree (unsigned * inPointer) {
  if (*inPointer != 0) {
    const HEADER_TYPE * p = (const HEADER_TYPE *) *inPointer ;
    p -- ;
    const unsigned idx = p->mBlockSizeIndex ;
    tFreeBlock * freeBlockPtr = (tFreeBlock *) *inPointer ;
    (*freeBlockPtr).mNextFreeBlock = gFreeBlockDescriptorArray [idx].mFreeBlockList ;
    gFreeBlockDescriptorArray [idx].mFreeBlockList = freeBlockPtr ;
    gFreeBlockDescriptorArray [idx].mFreeBlockCount ++ ;
    gCurrentlyAllocatedCount -- ;
    *inPointer = 0 ;
  }
}

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

unsigned allocatedByteSize (unsigned inPointer) {
  unsigned byteSize = 0 ;
  if (inPointer != 0) {
    const HEADER_TYPE * p = (const HEADER_TYPE *) inPointer ;
    p -- ;
    const unsigned idx = p->mBlockSizeIndex ;
    byteSize = 1 << (kMinSizePowerOfTwo + idx) ;
  }
  return byteSize ;
}

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
