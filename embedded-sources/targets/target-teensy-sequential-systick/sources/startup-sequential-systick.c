//---------------------------------------------------------------------------------------------------------------------*

#include "plm.h"

//---------------------------------------------------------------------------------------------------------------------*

// Chapter 12: System Integration Module (SIM)
#define SIM_SCGC3		*(volatile uint32_t *)0x40048030 // System Clock Gating Control Register 3
#define SIM_SCGC3_ADC1			(uint32_t)0x08000000		// ADC1 Clock Gate Control
#define SIM_SCGC3_FTM2			(uint32_t)0x01000000		// FTM2 Clock Gate Control

#define SIM_SCGC5		*(volatile uint32_t *)0x40048038 // System Clock Gating Control Register 5

#define SIM_SCGC6		*(volatile uint32_t *)0x4004803C // System Clock Gating Control Register 6
#define SIM_SCGC6_RTC			(uint32_t)0x20000000		// RTC Access
#define SIM_SCGC6_ADC0			(uint32_t)0x08000000		// ADC0 Clock Gate Control
#define SIM_SCGC6_FTM1			(uint32_t)0x02000000		// FTM1 Clock Gate Control
#define SIM_SCGC6_FTM0			(uint32_t)0x01000000		// FTM0 Clock Gate Control
#define SIM_SCGC6_FTFL			(uint32_t)0x00000001		// Flash Memory Clock Gate Control

#define SIM_CLKDIV1		*(volatile uint32_t *)0x40048044 // System Clock Divider Register 1
#define SIM_CLKDIV1_OUTDIV1(n)		(uint32_t)(((n) & 0x0F) << 28)	// divide value for the core/system clock
#define SIM_CLKDIV1_OUTDIV2(n)		(uint32_t)(((n) & 0x0F) << 24)	// divide value for the peripheral clock
#define SIM_CLKDIV1_OUTDIV4(n)		(uint32_t)(((n) & 0x0F) << 16)	// divide value for the flash clock

// Chapter 15: Power Management Controller
#define PMC_REGSC		*(volatile uint8_t  *)0x4007D002 // Regulator Status And Control register
#define PMC_REGSC_ACKISO		(uint8_t)0x08			// Acknowledge Isolation

// Chapter 24: Multipurpose Clock Generator (MCG)
#define MCG_C1			*(volatile uint8_t  *)0x40064000 // MCG Control 1 Register
#define MCG_C1_FRDIV(n)			(uint8_t)(((n) & 0x07) << 3)	// FLL External Reference Divider, Selects the amount to divide down the external reference clock for the FLL
#define MCG_C1_CLKS(n)			(uint8_t)(((n) & 0x03) << 6)	// Clock Source Select, Selects the clock source for MCGOUTCLK

#define MCG_C2			*(volatile uint8_t  *)0x40064001 // MCG Control 2 Register
#define MCG_C2_RANGE0(n)		(uint8_t)(((n) & 0x03) << 4)	// Frequency Range Select, Selects the frequency range for the crystal oscillator
#define MCG_C2_EREFS			(uint8_t)0x04			// External Reference Select, Selects the source for the external reference clock. 

#define MCG_C5			*(volatile uint8_t  *)0x40064004 // MCG Control 5 Register
#define MCG_C5_PRDIV0(n)		(uint8_t)((n) & 0x1F)		// PLL External Reference Divider

#define MCG_C6			*(volatile uint8_t  *)0x40064005 // MCG Control 6 Register
#define MCG_C6_PLLS			(uint8_t)0x40			// PLL Select, Controls whether the PLL or FLL output is selected as the MCG source when CLKS[1:0]=00. 
#define MCG_C6_VDIV0(n)			(uint8_t)((n) & 0x1F)		// VCO 0 Divider

// Chapter 25: Oscillator (OSC)
#define OSC0_CR			*(volatile uint8_t  *)0x40065000 // OSC Control Register
#define OSC_SC8P			(uint8_t)0x02			// Oscillator 8 pF Capacitor Load Configure
#define OSC_SC4P			(uint8_t)0x04			// Oscillator 4 pF Capacitor Load Configure
#define OSC_SC2P			(uint8_t)0x08			// Oscillator 2 pF Capacitor Load Configure

// Chapter 23: Watchdog Timer (WDOG)
#define WDOG_STCTRLH		*(volatile uint16_t *)0x40052000 // Watchdog Status and Control Register High
#define WDOG_UNLOCK		*(volatile uint16_t *)0x4005200E // Watchdog Unlock register
#define WDOG_UNLOCK_SEQ1		(uint16_t)0xC520
#define WDOG_UNLOCK_SEQ2		(uint16_t)0xD928

// Chapter 24: Multipurpose Clock Generator (MCG)
#define MCG_S			*(volatile uint8_t  *)0x40064006 // MCG Status Register
#define MCG_S_IRCST			(uint8_t)0x01			// Internal Reference Clock Status
#define MCG_S_OSCINIT0			(uint8_t)0x02			// OSC Initialization,	resets to 0, is set to 1 after the initialization cycles of the crystal oscillator
#define MCG_S_CLKST(n)			(uint8_t)(((n) & 0x03) << 2)	// Clock Mode Status, 0=FLL is selected, 1= Internal ref, 2=External ref, 3=PLL
#define MCG_S_CLKST_MASK		(uint8_t)0x0C
#define MCG_S_IREFST			(uint8_t)0x10			// Internal Reference Status
#define MCG_S_PLLST			(uint8_t)0x20			// PLL Select Status
#define MCG_S_LOCK0			(uint8_t)0x40			// Lock Status, 0=PLL Unlocked, 1=PLL Locked

// Chapter 39: Real Time Clock (RTC)
#define RTC_CR			*(volatile uint32_t *)0x4003D010 // RTC Control Register
#define RTC_CR_SC4P			(uint32_t)0x00001000		// 
#define RTC_CR_SC16P			(uint32_t)0x00000400		// 
#define RTC_CR_OSCE			(uint32_t)0x00000100		// 

#define RTC_SR			*(volatile uint32_t *)0x4003D014 // RTC Status Register

#define SYST_CSR		*(volatile uint32_t *)0xE000E010 // SysTick Control and Status
//#define SYST_CSR_COUNTFLAG		(uint32_t)0x00010000
#define SYST_CSR_CLKSOURCE		(uint32_t)0x00000004
#define SYST_CSR_TICKINT		(uint32_t)0x00000002
#define SYST_CSR_ENABLE			(uint32_t)0x00000001
#define SYST_RVR		*(volatile uint32_t *)0xE000E014 // SysTick Reload Value Register
#define SYST_CVR		*(volatile uint32_t *)0xE000E018 // SysTick Current Value Register

//---------------------------------------------------------------------------------------------------------------------*

static void ResetISR (void) {
//---------1- Inhiber le chien de garde
  WDOG_UNLOCK = WDOG_UNLOCK_SEQ1 ;
  WDOG_UNLOCK = WDOG_UNLOCK_SEQ2 ;
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
  // config divisors: 96 MHz core, 48 MHz bus, 24 MHz flash
  SIM_CLKDIV1 = SIM_CLKDIV1_OUTDIV1(0) | SIM_CLKDIV1_OUTDIV2(1) |   SIM_CLKDIV1_OUTDIV4(3);
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
    NULL, // 7
    NULL, // 8
    NULL, // 9
    NULL, // 10
    NULL, // 11
    NULL, // 12
    NULL, // 13
    NULL, // 14
    proc_systickHandler // 15
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
