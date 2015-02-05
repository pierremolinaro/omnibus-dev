//---------------------------------------------------------------------------------------------------------------------*

#include <stddef.h>

#include "plm.h"
// #include "mk20dx256.h"

//---------------------------------------------------------------------------------------------------------------------*

static void ResetISR (void) {
//---------1- Inhiber le chien de garde
  WDOG_UNLOCK = 0xC520 ;
  WDOG_UNLOCK = 0xD928 ;
  WDOG_STCTRLH = 0x0010 ;
  // enable clocks to always-used peripherals
  SIM_SCGC3 = SIM_SCGC3_ADC1 | SIM_SCGC3_FTM2;
  SIM_SCGC5 = 0x00043F82;    // clocks active to all GPIO
  SIM_SCGC6 = SIM_SCGC6_RTC | SIM_SCGC6_FTM0 | SIM_SCGC6_FTM1 | SIM_SCGC6_ADC0 | SIM_SCGC6_FTFL;
  // if the RTC oscillator isn't enabled, get it started early
  if (!(RTC_CR & RTC_CR_OSCE)) {
    RTC_SR = 0;
    RTC_CR = RTC_CR_SC16P | RTC_CR_SC4P | RTC_CR_OSCE;
  }

  // release I/O pins hold, if we woke up from VLLS mode
  if (PMC_REGSC & PMC_REGSC_ACKISO) PMC_REGSC |= PMC_REGSC_ACKISO;

  // TODO: do this while the PLL is waiting to lock....
//  SCB_VTOR = 0;  // use vector table in flash

  // default all interrupts to medium priority level
//  for (int32_t i=0; i < NVIC_NUM_INTERRUPTS; i++) NVIC_SET_PRIORITY(i, 128);
//---------2- Initialisation de la PLL
  // start in FEI mode
  // enable capacitors for crystal
  OSC0_CR = OSC_SC8P | OSC_SC2P;
  // enable osc, 8-32 MHz range, low power mode
  MCG_C2 = MCG_C2_RANGE0(2) | MCG_C2_EREFS;
  // switch to crystal as clock source, FLL input = 16 MHz / 512
  MCG_C1 =  MCG_C1_CLKS(2) | MCG_C1_FRDIV(4);
  // wait for crystal oscillator to begin
  while ((MCG_S & MCG_S_OSCINIT0) == 0) ;
  // wait for FLL to use oscillator
  while ((MCG_S & MCG_S_IREFST) != 0) ;
  // wait for MCGOUT to use oscillator
  while ((MCG_S & MCG_S_CLKST_MASK) != MCG_S_CLKST(2)) ;
  // now we're in FBE mode
  // config PLL input for 16 MHz Crystal / 4 = 4 MHz
  MCG_C5 = MCG_C5_PRDIV0(3);
  // config PLL for 96 MHz output
  MCG_C6 = MCG_C6_PLLS | MCG_C6_VDIV0(0);
  // wait for PLL to start using xtal as its input
  while (!(MCG_S & MCG_S_PLLST)) ;
  // wait for PLL to lock
  while (!(MCG_S & MCG_S_LOCK0)) ;
  // now we're in PBE mode
#if F_CPU == 96000000
  // config divisors: 96 MHz core, 48 MHz bus, 24 MHz flash
  SIM_CLKDIV1 = SIM_CLKDIV1_OUTDIV1(0) | SIM_CLKDIV1_OUTDIV2(1) |   SIM_CLKDIV1_OUTDIV4(3);
#elif F_CPU == 48000000
  // config divisors: 48 MHz core, 48 MHz bus, 24 MHz flash
  SIM_CLKDIV1 = SIM_CLKDIV1_OUTDIV1(1) | SIM_CLKDIV1_OUTDIV2(1) |   SIM_CLKDIV1_OUTDIV4(3);
#elif F_CPU == 24000000
  // config divisors: 24 MHz core, 24 MHz bus, 24 MHz flash
  SIM_CLKDIV1 = SIM_CLKDIV1_OUTDIV1(3) | SIM_CLKDIV1_OUTDIV2(3) |   SIM_CLKDIV1_OUTDIV4(3);
#else
#error "Error, F_CPU must be 96000000, 48000000, or 24000000"
#endif
  // switch to PLL as clock source, FLL input = 16 MHz / 512
  MCG_C1 = MCG_C1_CLKS(0) | MCG_C1_FRDIV(4);
  // wait for PLL clock to be used
  while ((MCG_S & MCG_S_CLKST_MASK) != MCG_S_CLKST(3)) ;
  // now we're in PEE mode
  // configure USB for 48 MHz clock
//  SIM_CLKDIV2 = SIM_CLKDIV2_USBDIV(1); // USB = 96 MHz PLL / 2
  // USB uses PLL clock, trace is CPU clock, CLKOUT=OSCERCLK0
//  SIM_SOPT2 = SIM_SOPT2_USBSRC | SIM_SOPT2_PLLFLLSEL | SIM_SOPT2_TRACECLKSEL | SIM_SOPT2_CLKOUTSEL(6);

//---------3- Initialisation de la section .bss
  extern unsigned __bss_start ;
  extern unsigned __bss_end ;
  unsigned * p = & __bss_start ;
  while (p != & __bss_end) {
    * p = 0 ;
    p ++ ;
  }
//---------4- Copy de la section .data
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

//----------- Configure systick interrupt
  SYST_RVR = 96000 - 1 ; // Interrupt every 96000 core clocks, i.e. every ms
  SYST_CVR = 0 ;
  SYST_CSR = SYST_CSR_CLKSOURCE | SYST_CSR_TICKINT | SYST_CSR_ENABLE ;

//---------5- Exécuter les constructeurs des variables globales
  extern void (* __constructor_array_start) (void) ;
  extern void (* __constructor_array_end) (void) ;
  void (** ptr) (void) = & __constructor_array_start ;
  while (ptr != & __constructor_array_end) {
    (* ptr) () ;
    ptr ++ ;
  }
//---------6- Exécuter les routines d'initialisation de la section init_routine_array
  extern void (* __init_routine_array_start) (void) ;
  extern void (* __init_routine_array_end) (void) ;
  ptr = & __init_routine_array_start ;
  while (ptr != & __init_routine_array_end) {
    (* ptr) () ;
    ptr ++ ;
  }
//---------7- Exécuter le programme utilisateur
  setup () ;
  while (1) {
    loop () ;
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
    NULL, // 7
    NULL, // 8
    NULL, // 9
    NULL, // 10
    NULL, // 11
    NULL, // 12
    NULL, // 13
    NULL, // 14
    systickHandler // 15
  },
//--- Non-Core Vectors
  { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
    NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
    NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
    NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
    NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
    NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
    NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
    NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
    NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
    NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
    NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
    NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
    NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
    NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
    NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL
  },
//--- Flash magic values
  {-1, -1, -1, -2}
} ;

//---------------------------------------------------------------------------------------------------------------------*
