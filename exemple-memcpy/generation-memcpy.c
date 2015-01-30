#include <stdint.h>

//---------------------------------------------------------------------------------------------------------------------*

typedef struct {
  char mA ;
  char mB ;
} MyStruct ;

//---------------------------------------------------------------------------------------------------------------------*

MyStruct initMyStruct (void) {
  return (MyStruct) {'A', 'B'} ;
}

//---------------------------------------------------------------------------------------------------------------------*

MyStruct initMyStruct2 (void) {
  MyStruct result ;
  result.mA = 'A' ;
  result.mB = 'B' ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void copyMyStruct (const MyStruct * const source, MyStruct * const destination) {
  * destination = * source ;
}

//---------------------------------------------------------------------------------------------------------------------*

typedef struct {
  char mA ;
  char mB ;
} AlignedStruct __attribute__((aligned (2))) ;

//---------------------------------------------------------------------------------------------------------------------*

AlignedStruct initMyAlignedStruct (void) {
  return (AlignedStruct) {'A', 'B'} ;
}

//---------------------------------------------------------------------------------------------------------------------*

AlignedStruct initMyAlignedStruct2 (void) {
  AlignedStruct result ;
  result.mA = 'A' ;
  result.mB = 'B' ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void copyAlignedStruct (const AlignedStruct * const source, AlignedStruct * const destination) {
  * destination = * source ;
}

//---------------------------------------------------------------------------------------------------------------------*

typedef struct /* __attribute__((__packed__)) */ {
  char mA ;
  AlignedStruct mS ;
} BigStruct __attribute__((aligned (4))) ;

//---------------------------------------------------------------------------------------------------------------------*

void copyAlignedStructOfBigStruct (const BigStruct * const source, BigStruct * const destination) {
  destination->mS = source->mS ;
}

//---------------------------------------------------------------------------------------------------------------------*

void copyBigStruct (const BigStruct * const source, BigStruct * const destination) {
  * destination = * source ;
}

//---------------------------------------------------------------------------------------------------------------------*

BigStruct initMyAlignedBigStruct (void) {
  BigStruct result ;
  result.mA = 'A' ;
  result.mS = initMyAlignedStruct2 () ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

BigStruct flatInitMyAlignedBigStruct (void) {
  BigStruct result ;
  result.mA = 'A' ;
  result.mS.mA = 'A' ;
  result.mS.mB = 'B' ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

uint32_t init32BigStruct (void) {
  return (uint32_t) (('A' << 24) | ('B' << 16) | 'A') ;
}

//---------------------------------------------------------------------------------------------------------------------*

uint32_t init32BigStructToZero (void) {
  return (uint32_t) ('A') ;
}

//---------------------------------------------------------------------------------------------------------------------*

char extractCharFromValue32 (uint32_t value) {
  return (char) ((value >> 24) & 0xFF) ;
}

//---------------------------------------------------------------------------------------------------------------------*

char extractCharFromPointer32 (uint32_t * inPtr) {
  return (char) (((* inPtr) >> 24) & 0xFF) ;
}

//---------------------------------------------------------------------------------------------------------------------*

char extractCharFromValue64 (uint64_t value) {
  return (char) ((value >> 40) & 0xFF) ;
}

//---------------------------------------------------------------------------------------------------------------------*

uint16_t extractUnalignedUInt16FromPointer32 (uint32_t * inPtr) {
  return (uint16_t) (((* inPtr) >> 8) & 0xFFFF) ;
}

//---------------------------------------------------------------------------------------------------------------------*

uint16_t extractAlignedUInt16FromPointer32 (uint32_t * inPtr) {
  return (uint16_t) (((* inPtr) >> 16) & 0xFFFF) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void assignCharFromPointer32 (uint32_t * ptr, const char inChar) {
  uint32_t v = *ptr ;
  v &= 0xFF00FFFF ;
  v |= ((uint32_t) inChar) << 16 ;
  *ptr = v ;
}

//---------------------------------------------------------------------------------------------------------------------*

void assignCharFromPointer32_2 (uint32_t * ptr, const char inChar) {
  ((char *) ptr) [2] = inChar ;
}

//---------------------------------------------------------------------------------------------------------------------*

void assignInt16FromPointer32_2 (uint32_t * ptr, const int16_t value) {
  ((int16_t *) ptr) [1] = value ;
}

//---------------------------------------------------------------------------------------------------------------------*

uint32_t assignInt16FromValue32 (uint32_t s, const int16_t value) {
  s &= 0x0000FFFF ;
  s |= ((uint32_t) value) << 16 ;
  return s ;
}

//---------------------------------------------------------------------------------------------------------------------*

uint32_t assignCharFromValue32 (uint32_t s, const char value) {
  s &= 0xFFFF00FF ;
  s |= ((uint32_t) value) << 8 ;
  return s ;
}

//---------------------------------------------------------------------------------------------------------------------*
