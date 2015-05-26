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
    proc_NMIHandler, // 2
    proc_HardFaultHandler, // 3
    proc_MemManageHandler, // 4
    proc_BusFaultHandler, // 5
    proc_UsageFaultHandler, // 6
    NULL, // 7 (reserved)
    NULL, // 8 (reserved)
    NULL, // 9 (reserved)
    NULL, // 10 (reserved)
    proc_svcHandler, // 11
    proc_DebugMonitorHandler, // 12
    NULL, // 13 (reserved)
    proc_PendSVHandler, // 14
    proc_systickHandler // 15
  },
//--- Non-Core Vectors
  { proc_DMAChannel0TranfertCompleteHandler, // 16
    proc_DMAChannel1TranfertCompleteHandler, // 17
    proc_DMAChannel2TranfertCompleteHandler, // 18
    proc_DMAChannel3TranfertCompleteHandler, // 19
    proc_DMAChannel4TranfertCompleteHandler, // 20
    proc_DMAChannel5TranfertCompleteHandler, // 21
    proc_DMAChannel6TranfertCompleteHandler, // 22
    proc_DMAChannel7TranfertCompleteHandler, // 23
    proc_DMAChannel8TranfertCompleteHandler, // 24
    proc_DMAChannel9TranfertCompleteHandler, // 25
    proc_DMAChannel10TranfertCompleteHandler, // 26
    proc_DMAChannel11TranfertCompleteHandler, // 27
    proc_DMAChannel12TranfertCompleteHandler, // 28
    proc_DMAChannel13TranfertCompleteHandler, // 29
    proc_DMAChannel14TranfertCompleteHandler, // 30
    proc_DMAChannel15TranfertCompleteHandler, // 31
    proc_DMAErrorHandler, // 32
    NULL, // 33
    proc_flashMemoryCommandCompleteHandler, // 34
    proc_flashMemoryReadCollisionHandler, // 35
    proc_modeControllerHandler, // 36
    proc_LLWUHandler, // 37
    proc_WDOGEWMHandler, // 38
    NULL, // 39
    proc_I2C0Handler, // 40
    proc_I2C1Handler, // 41
    proc_SPI0Handler, // 42
    proc_SPI1Handler, // 43
    NULL, // 44
    proc_CAN0MessageBufferHandler, // 45
    proc_CAN0BusOffHandler, // 46
    proc_CAN0ErrorHandler, // 47
    proc_CAN0TransmitWarningHandler, // 48
    proc_CAN0ReceiveWarningHandler, // 49
    proc_CAN0WakeUpHandler, // 50
    proc_I2S0TransmitHandler, // 51
    proc_I2S0ReceiveHandler, // 52
    NULL, // 53
    NULL, // 54
    NULL, // 55
    NULL, // 56
    NULL, // 57
    NULL, // 58
    NULL, // 59
    proc_UART0LONHandler, // 60
    proc_UART0StatusHandler, // 61
    proc_UART0ErrorHandler, // 62
    proc_UART1StatusHandler, // 63
    proc_UART1ErrorHandler, // 64
    proc_UART2StatusHandler, // 65
    proc_UART2ErrorHandler, // 66
    NULL, // 67
    NULL, // 68
    NULL, // 69
    NULL, // 70
    NULL, // 71
    NULL, // 72
    proc_ADC0Handler, // 73
    proc_ADC1Handler, // 74
    proc_CMP0Handler, // 75
    proc_CMP1Handler, // 76
    proc_CMP2Handler, // 77
    proc_FMT0Handler, // 78
    proc_FMT1Handler, // 79
    proc_FMT2Handler, // 80
    proc_CMTHandler, // 81
    proc_RTCAlarmHandler, // 82
    proc_RTCSecondHandler, // 83
    proc_PITChannel0Handler, // 84
    proc_PITChannel1Handler, // 85
    proc_PITChannel2Handler, // 86
    proc_PITChannel3Handler, // 87
    proc_PDBHandler, // 88
    proc_USBOTGHandler, // 89
    proc_USBChargerDetectHandler, // 90
    NULL, // 91
    NULL, // 92
    NULL, // 93
    NULL, // 94
    NULL, // 95
    NULL, // 96
    proc_DAC0Handler, // 97
    NULL, // 98
    proc_TSIHandler, // 99
    proc_MCGHandler, // 100
    proc_lowPowerTimerHandler, // 101
    NULL, // 102
    proc_pinDetectPortAHandler, // 103
    proc_pinDetectPortBHandler, // 104
    proc_pinDetectPortCHandler, // 105
    proc_pinDetectPortDHandler, // 106
    proc_pinDetectPortEHandler, // 107
    NULL, // 108
    NULL, // 109
    proc_softwareInterruptHandler, // 110
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
