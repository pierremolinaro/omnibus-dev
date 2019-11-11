//----------------------------------------------------------------------------------------------------------------------
//
//  CLASS ALLOCATION
//
//----------------------------------------------------------------------------------------------------------------------

unsigned classAllocation (const unsigned inObjectSize) asm ("class.allocation") ;

//----------------------------------------------------------------------------------------------------------------------

unsigned classAllocation (const unsigned inObjectSize) {
  const unsigned blockSize = inObjectSize - sizeof (DataBufferHeaderType) ;
//--- Get the power of 2 greater or equal to block size
  unsigned s = blockSize ;
  unsigned smallestPowerOfTwo = 0 ;
  while (s > 0) {
    smallestPowerOfTwo += 1 ;
    s >>= 1 ;
  }
//--- Get block size index
  unsigned blockSizeIndex = 0 ; // kMinSizePowerOfTwo
  if (smallestPowerOfTwo > kMinSizePowerOfTwo) {
    blockSizeIndex = smallestPowerOfTwo - kMinSizePowerOfTwo ;
  }
//--- Allocate
  DataBufferHeaderType * ptr = memoryAlloc (blockSizeIndex) ;
//--- Return
  return (unsigned) ptr ;
}

//----------------------------------------------------------------------------------------------------------------------
