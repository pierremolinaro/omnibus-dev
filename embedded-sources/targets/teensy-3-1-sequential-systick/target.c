//---------------------------------------------------------------------------------------------------------------------*

static void ResetISR (void) {
//---------1- Boot routines
  boot () ;
  // now we're in PEE mode
  // configure USB for 48 MHz clock
//  SIM_CLKDIV2 = SIM_CLKDIV2_USBDIV(1); // USB = 96 MHz PLL / 2
  // USB uses PLL clock, trace is CPU clock, CLKOUT=OSCERCLK0
//  SIM_SOPT2 = SIM_SOPT2_USBSRC | SIM_SOPT2_PLLFLLSEL | SIM_SOPT2_TRACECLKSEL | SIM_SOPT2_CLKOUTSEL(6);

//---------2- Initialisation de la section .bss
  extern unsigned __bss_start ;
  extern unsigned __bss_end ;
  unsigned * p = & __bss_start ;
  while (p != & __bss_end) {
    * p = 0 ;
    p ++ ;
  }
//---------3- Copy de la section .data
  extern unsigned __data_start ;
  extern unsigned __data_end ;
  extern unsigned __data_load_start ;
  unsigned * pSrc = & __data_load_start ;
  unsigned * pDest = & __data_start ;
  while (pDest != & __data_end) {
    * pDest = * pSrc ;
    pDest ++ ;
    pSrc ++ ;
  }
//---------4- Init Routines
  init () ;
//---------5- User routines
  proc_setup () ;
  while (1) {
    proc_loop () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//   Vector table                                                                                                      *
//---------------------------------------------------------------------------------------------------------------------*

typedef struct {
  unsigned * mStackPointer ;
//--- ARM Core System Handler Vectors
  void (* mCoreSystemHandlerVector [15]) (void) ;
//--- Non-Core Vectors
  void (* mNonCoreHandlerVector [240]) (void) ;
//--- Flash magic values
  int mFlash [4] ;
} vectorStructSeq ;

//---------------------------------------------------------------------------------------------------------------------*

extern unsigned __system_stack_end ;

//---------------------------------------------------------------------------------------------------------------------*

const vectorStructSeq vector __attribute__ ((section (".isr_vector"))) = {
  & __system_stack_end, // 0
//--- ARM Core System Handler Vectors
  { ResetISR, // 1
    NULL, // 2
    NULL, // 3
    NULL, // 4
    NULL, // 5
    NULL, // 6
    NULL, // 7 (reserved)
    NULL, // 8 (reserved)
    NULL, // 9 (reserved)
    NULL, // 10 (reserved)
    NULL, // 11
    NULL, // 12
    NULL, // 13 (reserved)
    NULL, // 14
    proc_systickHandler // 15
  },
//--- Non-Core Vectors
  { NULL, // 16
    NULL, // 17
    NULL, // 18
    NULL, // 19
    NULL, // 20
    NULL, // 21
    NULL, // 22
    NULL, // 23
    NULL, // 24
    NULL, // 25
    NULL, // 26
    NULL, // 27
    NULL, // 28
    NULL, // 29
    NULL, // 30
    NULL, // 31
    NULL, // 32
    NULL, // 33
    NULL, // 34
    NULL, // 35
    NULL, // 36
    NULL, // 37
    NULL, // 38
    NULL, // 39
    NULL, // 40
    NULL, // 41
    NULL, // 42
    NULL, // 43
    NULL, // 44
    NULL, // 45
    NULL, // 46
    NULL, // 47
    NULL, // 48
    NULL, // 49
    NULL, // 50
    NULL, // 51
    NULL, // 52
    NULL, // 53
    NULL, // 54
    NULL, // 55
    NULL, // 56
    NULL, // 57
    NULL, // 58
    NULL, // 59
    NULL, // 60
    NULL, // 61
    NULL, // 62
    NULL, // 63
    NULL, // 64
    NULL, // 65
    NULL, // 66
    NULL, // 67
    NULL, // 68
    NULL, // 69
    NULL, // 70
    NULL, // 71
    NULL, // 72
    NULL, // 73
    NULL, // 74
    NULL, // 75
    NULL, // 76
    NULL, // 77
    NULL, // 78
    NULL, // 79
    NULL, // 80
    NULL, // 81
    NULL, // 82
    NULL, // 83
    NULL, // 84
    NULL, // 85
    NULL, // 86
    NULL, // 87
    NULL, // 88
    NULL, // 89
    NULL, // 90
    NULL, // 91
    NULL, // 92
    NULL, // 93
    NULL, // 94
    NULL, // 95
    NULL, // 96
    NULL, // 97
    NULL, // 98
    NULL, // 99
    NULL, // 100
    NULL, // 101
    NULL, // 102
    NULL, // 103
    NULL, // 104
    NULL, // 105
    NULL, // 106
    NULL, // 107
    NULL, // 108
    NULL, // 109
    NULL, // 110
    NULL, // 111
    NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, // 112 à 127
    NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, // 128 à 143
    NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, // 143 à 159
    NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, // 160 à 175
    NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, // 176 à 191
    NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, // 192 à 207
    NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, // 208 à 223
    NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, // 224 à 239
    NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL  // 240 à 255
  },
//--- Flash magic values
  {-1, -1, -1, -2}
} ;

//---------------------------------------------------------------------------------------------------------------------*
