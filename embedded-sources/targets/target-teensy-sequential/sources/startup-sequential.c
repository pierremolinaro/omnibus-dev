//---------------------------------------------------------------------------------------------------------------------*

#include <stddef.h>

#include "plm.h"
// #include "mk20dx256.h"

//---------------------------------------------------------------------------------------------------------------------*

static void ResetISR (void) {
//---------1- Inhiber le chien de garde
  wdog_UNLOCK = 0xC520 ;
  wdog_UNLOCK = 0xD928 ;
  wdog_STCTRLH = 0x0010 ;
  // enable clocks to always-used peripherals
  sim_SCGC3 = sim_SCGC3_ADC1 | sim_SCGC3_FTM2;
  sim_SCGC5 = 0x00043F82;    // clocks active to all GPIO
  sim_SCGC6 = sim_SCGC6_RTC | sim_SCGC6_FTM0 | sim_SCGC6_FTM1 | sim_SCGC6_ADC0 | sim_SCGC6_FTFL;
  // if the RTC oscillator isn't enabled, get it started early
  if (!(rtc_CR & rtc_CR_OSCE)) {
    rtc_SR = 0;
    rtc_CR = rtc_CR_SC16P | rtc_CR_SC4P | rtc_CR_OSCE;
  }

  // release I/O pins hold, if we woke up from VLLS mode
  if (pmc_REGSC & pmc_REGSC_ACKISO) pmc_REGSC |= pmc_REGSC_ACKISO;

  // TODO: do this while the PLL is waiting to lock....
//  SCB_VTOR = 0;  // use vector table in flash

  // default all interrupts to medium priority level
//  for (int32_t i=0; i < NVIC_NUM_INTERRUPTS; i++) NVIC_SET_PRIORITY(i, 128);
//---------2- Initialisation de la PLL
  // start in FEI mode
  // enable capacitors for crystal
  osc0_CR = osc_SC8P | osc_SC2P;
  // enable osc, 8-32 MHz range, low power mode
  mcg_C2 = mcg_C2_RANGE0(2) | mcg_C2_EREFS;
  // switch to crystal as clock source, FLL input = 16 MHz / 512
  mcg_C1 =  mcg_C1_CLKS(2) | mcg_C1_FRDIV(4);
  // wait for crystal oscillator to begin
  while ((mcg_S & mcg_S_OSCINIT0) == 0) ;
  // wait for FLL to use oscillator
  while ((mcg_S & mcg_S_IREFST) != 0) ;
  // wait for MCGOUT to use oscillator
  while ((mcg_S & mcg_S_CLKST_MASK) != mcg_S_CLKST(2)) ;
  // now we're in FBE mode
  // config PLL input for 16 MHz Crystal / 4 = 4 MHz
  mcg_C5 = mcg_C5_PRDIV0(3);
  // config PLL for 96 MHz output
  mcg_C6 = mcg_C6_PLLS | mcg_C6_VDIV0(0);
  // wait for PLL to start using xtal as its input
  while (!(mcg_S & mcg_S_PLLST)) ;
  // wait for PLL to lock
  while (!(mcg_S & mcg_S_LOCK0)) ;
  // now we're in PBE mode
#if F_CPU == 96000000
  // config divisors: 96 MHz core, 48 MHz bus, 24 MHz flash
  sim_CLKDIV1 = sim_CLKDIV1_OUTDIV1(0) | sim_CLKDIV1_OUTDIV2(1) |   sim_CLKDIV1_OUTDIV4(3);
#elif F_CPU == 48000000
  // config divisors: 48 MHz core, 48 MHz bus, 24 MHz flash
  sim_CLKDIV1 = sim_CLKDIV1_OUTDIV1(1) | sim_CLKDIV1_OUTDIV2(1) |   sim_CLKDIV1_OUTDIV4(3);
#elif F_CPU == 24000000
  // config divisors: 24 MHz core, 24 MHz bus, 24 MHz flash
  sim_CLKDIV1 = sim_CLKDIV1_OUTDIV1(3) | sim_CLKDIV1_OUTDIV2(3) |   sim_CLKDIV1_OUTDIV4(3);
#else
#error "Error, F_CPU must be 96000000, 48000000, or 24000000"
#endif
  // switch to PLL as clock source, FLL input = 16 MHz / 512
  mcg_C1 = mcg_C1_CLKS(0) | mcg_C1_FRDIV(4);
  // wait for PLL clock to be used
  while ((mcg_S & mcg_S_CLKST_MASK) != mcg_S_CLKST(3)) ;
  // now we're in PEE mode
  // configure USB for 48 MHz clock
//  sim_CLKDIV2 = sim_CLKDIV2_USBDIV(1); // USB = 96 MHz PLL / 2
  // USB uses PLL clock, trace is CPU clock, CLKOUT=OSCERCLK0
//  sim_SOPT2 = sim_SOPT2_USBSRC | sim_SOPT2_PLLFLLSEL | sim_SOPT2_TRACECLKSEL | sim_SOPT2_CLKOUTSEL(6);

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
    NULL // 15
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
