//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
//   S T A N D A R D    I N T E G E R    T Y P E S
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

 #include <stdint.h>

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

#define VICIntEnClr    (*((volatile unsigned *) 0xFFFFF014))
#define VICIntEnable   (*((volatile unsigned *) 0xFFFFF010))
#define VICVect(INDEX) (*((volatile unsigned *) (0xFFFFF100 + ((INDEX) << 2))))
#define VICVectCntl(INDEX) (*((volatile unsigned *) (0xFFFFF200 + ((INDEX) << 2))))

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

static unsigned gSlotID ;

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

static void installInterruptServiceRoutine (const unsigned irq_routine, const unsigned inSourceID) {
//---
  VICVect (gSlotID) = irq_routine ;
  VICVectCntl (gSlotID) = 0x20 | inSourceID ;
//---
  VICIntEnClr   = 1 << inSourceID ;
  VICIntEnable |= 1 << inSourceID ;
//---
  gSlotID ++ ;
}

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

extern unsigned __plm_interrupt_vectors [30] ;

void installInterrupts (void) ;

void installInterrupts (void) {
  for (unsigned i=0 ; i<30 ; i++) {
    if (__plm_interrupt_vectors [i] != 0) {
      installInterruptServiceRoutine (__plm_interrupt_vectors [i], i) ;
    }
  }
}

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
