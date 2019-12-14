#pragma once

//------------------------------------------------------------------------------
// STM32L4x2: STM32L4x2
//------------------------------------------------------------------------------

#include <stdint.h>

//------------------------------------------------------------------------------
// Peripheral ADC1: Analog-to-Digital Converter
//------------------------------------------------------------------------------

//---  Register ISR: interrupt and status register
  #define ADC1_ISR (* ((volatile uint32_t *) (0x50040000 + 0)))

  // Field JQOVF: JQOVF
    const uint32_t ADC1_ISR_JQOVF = 1U << 10 ;

  // Field AWD3: AWD3
    const uint32_t ADC1_ISR_AWD3 = 1U << 9 ;

  // Field AWD2: AWD2
    const uint32_t ADC1_ISR_AWD2 = 1U << 8 ;

  // Field AWD1: AWD1
    const uint32_t ADC1_ISR_AWD1 = 1U << 7 ;

  // Field JEOS: JEOS
    const uint32_t ADC1_ISR_JEOS = 1U << 6 ;

  // Field JEOC: JEOC
    const uint32_t ADC1_ISR_JEOC = 1U << 5 ;

  // Field OVR: OVR
    const uint32_t ADC1_ISR_OVR = 1U << 4 ;

  // Field EOS: EOS
    const uint32_t ADC1_ISR_EOS = 1U << 3 ;

  // Field EOC: EOC
    const uint32_t ADC1_ISR_EOC = 1U << 2 ;

  // Field EOSMP: EOSMP
    const uint32_t ADC1_ISR_EOSMP = 1U << 1 ;

  // Field ADRDY: ADRDY
    const uint32_t ADC1_ISR_ADRDY = 1U << 0 ;

//---  Register IER: interrupt enable register
  #define ADC1_IER (* ((volatile uint32_t *) (0x50040000 + 4)))

  // Field JQOVFIE: JQOVFIE
    const uint32_t ADC1_IER_JQOVFIE = 1U << 10 ;

  // Field AWD3IE: AWD3IE
    const uint32_t ADC1_IER_AWD3IE = 1U << 9 ;

  // Field AWD2IE: AWD2IE
    const uint32_t ADC1_IER_AWD2IE = 1U << 8 ;

  // Field AWD1IE: AWD1IE
    const uint32_t ADC1_IER_AWD1IE = 1U << 7 ;

  // Field JEOSIE: JEOSIE
    const uint32_t ADC1_IER_JEOSIE = 1U << 6 ;

  // Field JEOCIE: JEOCIE
    const uint32_t ADC1_IER_JEOCIE = 1U << 5 ;

  // Field OVRIE: OVRIE
    const uint32_t ADC1_IER_OVRIE = 1U << 4 ;

  // Field EOSIE: EOSIE
    const uint32_t ADC1_IER_EOSIE = 1U << 3 ;

  // Field EOCIE: EOCIE
    const uint32_t ADC1_IER_EOCIE = 1U << 2 ;

  // Field EOSMPIE: EOSMPIE
    const uint32_t ADC1_IER_EOSMPIE = 1U << 1 ;

  // Field ADRDYIE: ADRDYIE
    const uint32_t ADC1_IER_ADRDYIE = 1U << 0 ;

//---  Register CR: control register
  #define ADC1_CR (* ((volatile uint32_t *) (0x50040000 + 8)))

  // Field ADCAL: ADCAL
    const uint32_t ADC1_CR_ADCAL = 1U << 31 ;

  // Field ADCALDIF: ADCALDIF
    const uint32_t ADC1_CR_ADCALDIF = 1U << 30 ;

  // Field DEEPPWD: DEEPPWD
    const uint32_t ADC1_CR_DEEPPWD = 1U << 29 ;

  // Field ADVREGEN: ADVREGEN
    const uint32_t ADC1_CR_ADVREGEN = 1U << 28 ;

  // Field JADSTP: JADSTP
    const uint32_t ADC1_CR_JADSTP = 1U << 5 ;

  // Field ADSTP: ADSTP
    const uint32_t ADC1_CR_ADSTP = 1U << 4 ;

  // Field JADSTART: JADSTART
    const uint32_t ADC1_CR_JADSTART = 1U << 3 ;

  // Field ADSTART: ADSTART
    const uint32_t ADC1_CR_ADSTART = 1U << 2 ;

  // Field ADDIS: ADDIS
    const uint32_t ADC1_CR_ADDIS = 1U << 1 ;

  // Field ADEN: ADEN
    const uint32_t ADC1_CR_ADEN = 1U << 0 ;

//---  Register CFGR: configuration register
  #define ADC1_CFGR (* ((volatile uint32_t *) (0x50040000 + 12)))

  // Field JQDIS: JQDIS
    const uint32_t ADC1_CFGR_JQDIS = 1U << 31 ;

  // Field AWDCH1CH: AWDCH1CH
    inline uint32_t ADC1_CFGR_AWDCH1CH (const uint32_t inValue) {return (inValue & 0x1fU) << 26 ; }

  // Field JAUTO: JAUTO
    const uint32_t ADC1_CFGR_JAUTO = 1U << 25 ;

  // Field JAWD1EN: JAWD1EN
    const uint32_t ADC1_CFGR_JAWD1EN = 1U << 24 ;

  // Field AWD1EN: AWD1EN
    const uint32_t ADC1_CFGR_AWD1EN = 1U << 23 ;

  // Field AWD1SGL: AWD1SGL
    const uint32_t ADC1_CFGR_AWD1SGL = 1U << 22 ;

  // Field JQM: JQM
    const uint32_t ADC1_CFGR_JQM = 1U << 21 ;

  // Field JDISCEN: JDISCEN
    const uint32_t ADC1_CFGR_JDISCEN = 1U << 20 ;

  // Field DISCNUM: DISCNUM
    inline uint32_t ADC1_CFGR_DISCNUM (const uint32_t inValue) {return (inValue & 0x7U) << 17 ; }

  // Field DISCEN: DISCEN
    const uint32_t ADC1_CFGR_DISCEN = 1U << 16 ;

  // Field AUTDLY: AUTDLY
    const uint32_t ADC1_CFGR_AUTDLY = 1U << 14 ;

  // Field CONT: CONT
    const uint32_t ADC1_CFGR_CONT = 1U << 13 ;

  // Field OVRMOD: OVRMOD
    const uint32_t ADC1_CFGR_OVRMOD = 1U << 12 ;

  // Field EXTEN: EXTEN
    inline uint32_t ADC1_CFGR_EXTEN (const uint32_t inValue) {return (inValue & 0x3U) << 10 ; }

  // Field EXTSEL: EXTSEL
    inline uint32_t ADC1_CFGR_EXTSEL (const uint32_t inValue) {return (inValue & 0xfU) << 6 ; }

  // Field ALIGN: ALIGN
    const uint32_t ADC1_CFGR_ALIGN = 1U << 5 ;

  // Field RES: RES
    inline uint32_t ADC1_CFGR_RES (const uint32_t inValue) {return (inValue & 0x3U) << 3 ; }

  // Field DMACFG: DMACFG
    const uint32_t ADC1_CFGR_DMACFG = 1U << 1 ;

  // Field DMAEN: DMAEN
    const uint32_t ADC1_CFGR_DMAEN = 1U << 0 ;

//---  Register CFGR2: configuration register
  #define ADC1_CFGR2 (* ((volatile uint32_t *) (0x50040000 + 16)))

  // Field ROVSM: EXTEN
    const uint32_t ADC1_CFGR2_ROVSM = 1U << 10 ;

  // Field TOVS: EXTSEL
    const uint32_t ADC1_CFGR2_TOVS = 1U << 9 ;

  // Field OVSS: ALIGN
    inline uint32_t ADC1_CFGR2_OVSS (const uint32_t inValue) {return (inValue & 0xfU) << 5 ; }

  // Field OVSR: RES
    inline uint32_t ADC1_CFGR2_OVSR (const uint32_t inValue) {return (inValue & 0x7U) << 2 ; }

  // Field JOVSE: DMACFG
    const uint32_t ADC1_CFGR2_JOVSE = 1U << 1 ;

  // Field ROVSE: DMAEN
    const uint32_t ADC1_CFGR2_ROVSE = 1U << 0 ;

//---  Register SMPR1: sample time register 1
  #define ADC1_SMPR1 (* ((volatile uint32_t *) (0x50040000 + 20)))

  // Field SMP9: SMP9
    inline uint32_t ADC1_SMPR1_SMP9 (const uint32_t inValue) {return (inValue & 0x7U) << 27 ; }

  // Field SMP8: SMP8
    inline uint32_t ADC1_SMPR1_SMP8 (const uint32_t inValue) {return (inValue & 0x7U) << 24 ; }

  // Field SMP7: SMP7
    inline uint32_t ADC1_SMPR1_SMP7 (const uint32_t inValue) {return (inValue & 0x7U) << 21 ; }

  // Field SMP6: SMP6
    inline uint32_t ADC1_SMPR1_SMP6 (const uint32_t inValue) {return (inValue & 0x7U) << 18 ; }

  // Field SMP5: SMP5
    inline uint32_t ADC1_SMPR1_SMP5 (const uint32_t inValue) {return (inValue & 0x7U) << 15 ; }

  // Field SMP4: SMP4
    inline uint32_t ADC1_SMPR1_SMP4 (const uint32_t inValue) {return (inValue & 0x7U) << 12 ; }

  // Field SMP3: SMP3
    inline uint32_t ADC1_SMPR1_SMP3 (const uint32_t inValue) {return (inValue & 0x7U) << 9 ; }

  // Field SMP2: SMP2
    inline uint32_t ADC1_SMPR1_SMP2 (const uint32_t inValue) {return (inValue & 0x7U) << 6 ; }

  // Field SMP1: SMP1
    inline uint32_t ADC1_SMPR1_SMP1 (const uint32_t inValue) {return (inValue & 0x7U) << 3 ; }

  // Field SMP0: SMP0
    inline uint32_t ADC1_SMPR1_SMP0 (const uint32_t inValue) {return (inValue & 0x7U) << 0 ; }

//---  Register SMPR2: sample time register 2
  #define ADC1_SMPR2 (* ((volatile uint32_t *) (0x50040000 + 24)))

  // Field SMP18: SMP18
    inline uint32_t ADC1_SMPR2_SMP18 (const uint32_t inValue) {return (inValue & 0x7U) << 24 ; }

  // Field SMP17: SMP17
    inline uint32_t ADC1_SMPR2_SMP17 (const uint32_t inValue) {return (inValue & 0x7U) << 21 ; }

  // Field SMP16: SMP16
    inline uint32_t ADC1_SMPR2_SMP16 (const uint32_t inValue) {return (inValue & 0x7U) << 18 ; }

  // Field SMP15: SMP15
    inline uint32_t ADC1_SMPR2_SMP15 (const uint32_t inValue) {return (inValue & 0x7U) << 15 ; }

  // Field SMP14: SMP14
    inline uint32_t ADC1_SMPR2_SMP14 (const uint32_t inValue) {return (inValue & 0x7U) << 12 ; }

  // Field SMP13: SMP13
    inline uint32_t ADC1_SMPR2_SMP13 (const uint32_t inValue) {return (inValue & 0x7U) << 9 ; }

  // Field SMP12: SMP12
    inline uint32_t ADC1_SMPR2_SMP12 (const uint32_t inValue) {return (inValue & 0x7U) << 6 ; }

  // Field SMP11: SMP11
    inline uint32_t ADC1_SMPR2_SMP11 (const uint32_t inValue) {return (inValue & 0x7U) << 3 ; }

  // Field SMP10: SMP10
    inline uint32_t ADC1_SMPR2_SMP10 (const uint32_t inValue) {return (inValue & 0x7U) << 0 ; }

//---  Register TR1: watchdog threshold register 1
  #define ADC1_TR1 (* ((volatile uint32_t *) (0x50040000 + 32)))

  // Field HT1: HT1
    inline uint32_t ADC1_TR1_HT1 (const uint32_t inValue) {return (inValue & 0xfffU) << 16 ; }

  // Field LT1: LT1
    inline uint32_t ADC1_TR1_LT1 (const uint32_t inValue) {return (inValue & 0xfffU) << 0 ; }

//---  Register TR2: watchdog threshold register
  #define ADC1_TR2 (* ((volatile uint32_t *) (0x50040000 + 36)))

  // Field HT2: HT2
    inline uint32_t ADC1_TR2_HT2 (const uint32_t inValue) {return (inValue & 0xffU) << 16 ; }

  // Field LT2: LT2
    inline uint32_t ADC1_TR2_LT2 (const uint32_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register TR3: watchdog threshold register 3
  #define ADC1_TR3 (* ((volatile uint32_t *) (0x50040000 + 40)))

  // Field HT3: HT3
    inline uint32_t ADC1_TR3_HT3 (const uint32_t inValue) {return (inValue & 0xffU) << 16 ; }

  // Field LT3: LT3
    inline uint32_t ADC1_TR3_LT3 (const uint32_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register SQR1: regular sequence register 1
  #define ADC1_SQR1 (* ((volatile uint32_t *) (0x50040000 + 48)))

  // Field SQ4: SQ4
    inline uint32_t ADC1_SQR1_SQ4 (const uint32_t inValue) {return (inValue & 0x1fU) << 24 ; }

  // Field SQ3: SQ3
    inline uint32_t ADC1_SQR1_SQ3 (const uint32_t inValue) {return (inValue & 0x1fU) << 18 ; }

  // Field SQ2: SQ2
    inline uint32_t ADC1_SQR1_SQ2 (const uint32_t inValue) {return (inValue & 0x1fU) << 12 ; }

  // Field SQ1: SQ1
    inline uint32_t ADC1_SQR1_SQ1 (const uint32_t inValue) {return (inValue & 0x1fU) << 6 ; }

  // Field L: L
    inline uint32_t ADC1_SQR1_L (const uint32_t inValue) {return (inValue & 0xfU) << 0 ; }

//---  Register SQR2: regular sequence register 2
  #define ADC1_SQR2 (* ((volatile uint32_t *) (0x50040000 + 52)))

  // Field SQ9: SQ9
    inline uint32_t ADC1_SQR2_SQ9 (const uint32_t inValue) {return (inValue & 0x1fU) << 24 ; }

  // Field SQ8: SQ8
    inline uint32_t ADC1_SQR2_SQ8 (const uint32_t inValue) {return (inValue & 0x1fU) << 18 ; }

  // Field SQ7: SQ7
    inline uint32_t ADC1_SQR2_SQ7 (const uint32_t inValue) {return (inValue & 0x1fU) << 12 ; }

  // Field SQ6: SQ6
    inline uint32_t ADC1_SQR2_SQ6 (const uint32_t inValue) {return (inValue & 0x1fU) << 6 ; }

  // Field SQ5: SQ5
    inline uint32_t ADC1_SQR2_SQ5 (const uint32_t inValue) {return (inValue & 0x1fU) << 0 ; }

//---  Register SQR3: regular sequence register 3
  #define ADC1_SQR3 (* ((volatile uint32_t *) (0x50040000 + 56)))

  // Field SQ14: SQ14
    inline uint32_t ADC1_SQR3_SQ14 (const uint32_t inValue) {return (inValue & 0x1fU) << 24 ; }

  // Field SQ13: SQ13
    inline uint32_t ADC1_SQR3_SQ13 (const uint32_t inValue) {return (inValue & 0x1fU) << 18 ; }

  // Field SQ12: SQ12
    inline uint32_t ADC1_SQR3_SQ12 (const uint32_t inValue) {return (inValue & 0x1fU) << 12 ; }

  // Field SQ11: SQ11
    inline uint32_t ADC1_SQR3_SQ11 (const uint32_t inValue) {return (inValue & 0x1fU) << 6 ; }

  // Field SQ10: SQ10
    inline uint32_t ADC1_SQR3_SQ10 (const uint32_t inValue) {return (inValue & 0x1fU) << 0 ; }

//---  Register SQR4: regular sequence register 4
  #define ADC1_SQR4 (* ((volatile uint32_t *) (0x50040000 + 60)))

  // Field SQ16: SQ16
    inline uint32_t ADC1_SQR4_SQ16 (const uint32_t inValue) {return (inValue & 0x1fU) << 6 ; }

  // Field SQ15: SQ15
    inline uint32_t ADC1_SQR4_SQ15 (const uint32_t inValue) {return (inValue & 0x1fU) << 0 ; }

//---  Register DR: regular Data Register
  #define ADC1_DR (* ((const volatile uint32_t *) (0x50040000 + 64)))

  // Field regularDATA: regularDATA
    inline uint32_t ADC1_DR_regularDATA (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register JSQR: injected sequence register
  #define ADC1_JSQR (* ((volatile uint32_t *) (0x50040000 + 76)))

  // Field JSQ4: JSQ4
    inline uint32_t ADC1_JSQR_JSQ4 (const uint32_t inValue) {return (inValue & 0x1fU) << 26 ; }

  // Field JSQ3: JSQ3
    inline uint32_t ADC1_JSQR_JSQ3 (const uint32_t inValue) {return (inValue & 0x1fU) << 20 ; }

  // Field JSQ2: JSQ2
    inline uint32_t ADC1_JSQR_JSQ2 (const uint32_t inValue) {return (inValue & 0x1fU) << 14 ; }

  // Field JSQ1: JSQ1
    inline uint32_t ADC1_JSQR_JSQ1 (const uint32_t inValue) {return (inValue & 0x1fU) << 8 ; }

  // Field JEXTEN: JEXTEN
    inline uint32_t ADC1_JSQR_JEXTEN (const uint32_t inValue) {return (inValue & 0x3U) << 6 ; }

  // Field JEXTSEL: JEXTSEL
    inline uint32_t ADC1_JSQR_JEXTSEL (const uint32_t inValue) {return (inValue & 0xfU) << 2 ; }

  // Field JL: JL
    inline uint32_t ADC1_JSQR_JL (const uint32_t inValue) {return (inValue & 0x3U) << 0 ; }

//---  Register OFR1: offset register 1
  #define ADC1_OFR1 (* ((volatile uint32_t *) (0x50040000 + 96)))

  // Field OFFSET1_EN: OFFSET1_EN
    const uint32_t ADC1_OFR1_OFFSET1_EN = 1U << 31 ;

  // Field OFFSET1_CH: OFFSET1_CH
    inline uint32_t ADC1_OFR1_OFFSET1_CH (const uint32_t inValue) {return (inValue & 0x1fU) << 26 ; }

  // Field OFFSET1: OFFSET1
    inline uint32_t ADC1_OFR1_OFFSET1 (const uint32_t inValue) {return (inValue & 0xfffU) << 0 ; }

//---  Register OFR2: offset register 2
  #define ADC1_OFR2 (* ((volatile uint32_t *) (0x50040000 + 100)))

  // Field OFFSET2_EN: OFFSET2_EN
    const uint32_t ADC1_OFR2_OFFSET2_EN = 1U << 31 ;

  // Field OFFSET2_CH: OFFSET2_CH
    inline uint32_t ADC1_OFR2_OFFSET2_CH (const uint32_t inValue) {return (inValue & 0x1fU) << 26 ; }

  // Field OFFSET2: OFFSET2
    inline uint32_t ADC1_OFR2_OFFSET2 (const uint32_t inValue) {return (inValue & 0xfffU) << 0 ; }

//---  Register OFR3: offset register 3
  #define ADC1_OFR3 (* ((volatile uint32_t *) (0x50040000 + 104)))

  // Field OFFSET3_EN: OFFSET3_EN
    const uint32_t ADC1_OFR3_OFFSET3_EN = 1U << 31 ;

  // Field OFFSET3_CH: OFFSET3_CH
    inline uint32_t ADC1_OFR3_OFFSET3_CH (const uint32_t inValue) {return (inValue & 0x1fU) << 26 ; }

  // Field OFFSET3: OFFSET3
    inline uint32_t ADC1_OFR3_OFFSET3 (const uint32_t inValue) {return (inValue & 0xfffU) << 0 ; }

//---  Register OFR4: offset register 4
  #define ADC1_OFR4 (* ((volatile uint32_t *) (0x50040000 + 108)))

  // Field OFFSET4_EN: OFFSET4_EN
    const uint32_t ADC1_OFR4_OFFSET4_EN = 1U << 31 ;

  // Field OFFSET4_CH: OFFSET4_CH
    inline uint32_t ADC1_OFR4_OFFSET4_CH (const uint32_t inValue) {return (inValue & 0x1fU) << 26 ; }

  // Field OFFSET4: OFFSET4
    inline uint32_t ADC1_OFR4_OFFSET4 (const uint32_t inValue) {return (inValue & 0xfffU) << 0 ; }

//---  Register JDR1: injected data register 1
  #define ADC1_JDR1 (* ((const volatile uint32_t *) (0x50040000 + 128)))

  // Field JDATA1: JDATA1
    inline uint32_t ADC1_JDR1_JDATA1 (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register JDR2: injected data register 2
  #define ADC1_JDR2 (* ((const volatile uint32_t *) (0x50040000 + 132)))

  // Field JDATA2: JDATA2
    inline uint32_t ADC1_JDR2_JDATA2 (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register JDR3: injected data register 3
  #define ADC1_JDR3 (* ((const volatile uint32_t *) (0x50040000 + 136)))

  // Field JDATA3: JDATA3
    inline uint32_t ADC1_JDR3_JDATA3 (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register JDR4: injected data register 4
  #define ADC1_JDR4 (* ((const volatile uint32_t *) (0x50040000 + 140)))

  // Field JDATA4: JDATA4
    inline uint32_t ADC1_JDR4_JDATA4 (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register AWD2CR: Analog Watchdog 2 Configuration
          Register
  #define ADC1_AWD2CR (* ((volatile uint32_t *) (0x50040000 + 160)))

  // Field AWD2CH: AWD2CH
    inline uint32_t ADC1_AWD2CR_AWD2CH (const uint32_t inValue) {return (inValue & 0x7ffffU) << 0 ; }

//---  Register AWD3CR: Analog Watchdog 3 Configuration
          Register
  #define ADC1_AWD3CR (* ((volatile uint32_t *) (0x50040000 + 164)))

  // Field AWD3CH: AWD3CH
    inline uint32_t ADC1_AWD3CR_AWD3CH (const uint32_t inValue) {return (inValue & 0x7ffffU) << 0 ; }

//---  Register DIFSEL: Differential Mode Selection Register
          2
  #define ADC1_DIFSEL (* ((volatile uint32_t *) (0x50040000 + 176)))

  // Field DIFSEL_0: Differential mode for channel 0
    const uint32_t ADC1_DIFSEL_DIFSEL_0 = 1U << 0 ;

  // Field DIFSEL_1_15: Differential mode for channels 15 to 1
    inline uint32_t ADC1_DIFSEL_DIFSEL_1_15 (const uint32_t inValue) {return (inValue & 0x7fffU) << 1 ; }

  // Field DIFSEL_16_18: Differential mode for channels 18 to 16
    inline uint32_t ADC1_DIFSEL_DIFSEL_16_18 (const uint32_t inValue) {return (inValue & 0x7U) << 16 ; }

//---  Register CALFACT: Calibration Factors
  #define ADC1_CALFACT (* ((volatile uint32_t *) (0x50040000 + 180)))

  // Field CALFACT_D: CALFACT_D
    inline uint32_t ADC1_CALFACT_CALFACT_D (const uint32_t inValue) {return (inValue & 0x7fU) << 16 ; }

  // Field CALFACT_S: CALFACT_S
    inline uint32_t ADC1_CALFACT_CALFACT_S (const uint32_t inValue) {return (inValue & 0x7fU) << 0 ; }

//------------------------------------------------------------------------------
// Peripheral ADC123_Common: Analog-to-Digital Converter
//------------------------------------------------------------------------------

//---  Register CSR: ADC Common status register
  #define ADC123_Common_CSR (* ((const volatile uint32_t *) (0x50040300 + 0)))

  // Field ADDRDY_MST: ADDRDY_MST
    const uint32_t ADC123_Common_CSR_ADDRDY_MST = 1U << 0 ;

  // Field EOSMP_MST: EOSMP_MST
    const uint32_t ADC123_Common_CSR_EOSMP_MST = 1U << 1 ;

  // Field EOC_MST: EOC_MST
    const uint32_t ADC123_Common_CSR_EOC_MST = 1U << 2 ;

  // Field EOS_MST: EOS_MST
    const uint32_t ADC123_Common_CSR_EOS_MST = 1U << 3 ;

  // Field OVR_MST: OVR_MST
    const uint32_t ADC123_Common_CSR_OVR_MST = 1U << 4 ;

  // Field JEOC_MST: JEOC_MST
    const uint32_t ADC123_Common_CSR_JEOC_MST = 1U << 5 ;

  // Field JEOS_MST: JEOS_MST
    const uint32_t ADC123_Common_CSR_JEOS_MST = 1U << 6 ;

  // Field AWD1_MST: AWD1_MST
    const uint32_t ADC123_Common_CSR_AWD1_MST = 1U << 7 ;

  // Field AWD2_MST: AWD2_MST
    const uint32_t ADC123_Common_CSR_AWD2_MST = 1U << 8 ;

  // Field AWD3_MST: AWD3_MST
    const uint32_t ADC123_Common_CSR_AWD3_MST = 1U << 9 ;

  // Field JQOVF_MST: JQOVF_MST
    const uint32_t ADC123_Common_CSR_JQOVF_MST = 1U << 10 ;

  // Field ADRDY_SLV: ADRDY_SLV
    const uint32_t ADC123_Common_CSR_ADRDY_SLV = 1U << 16 ;

  // Field EOSMP_SLV: EOSMP_SLV
    const uint32_t ADC123_Common_CSR_EOSMP_SLV = 1U << 17 ;

  // Field EOC_SLV: End of regular conversion of the slave ADC
    const uint32_t ADC123_Common_CSR_EOC_SLV = 1U << 18 ;

  // Field EOS_SLV: End of regular sequence flag of the slave ADC
    const uint32_t ADC123_Common_CSR_EOS_SLV = 1U << 19 ;

  // Field OVR_SLV: Overrun flag of the slave ADC
    const uint32_t ADC123_Common_CSR_OVR_SLV = 1U << 20 ;

  // Field JEOC_SLV: End of injected conversion flag of the slave ADC
    const uint32_t ADC123_Common_CSR_JEOC_SLV = 1U << 21 ;

  // Field JEOS_SLV: End of injected sequence flag of the slave ADC
    const uint32_t ADC123_Common_CSR_JEOS_SLV = 1U << 22 ;

  // Field AWD1_SLV: Analog watchdog 1 flag of the slave ADC
    const uint32_t ADC123_Common_CSR_AWD1_SLV = 1U << 23 ;

  // Field AWD2_SLV: Analog watchdog 2 flag of the slave ADC
    const uint32_t ADC123_Common_CSR_AWD2_SLV = 1U << 24 ;

  // Field AWD3_SLV: Analog watchdog 3 flag of the slave ADC
    const uint32_t ADC123_Common_CSR_AWD3_SLV = 1U << 25 ;

  // Field JQOVF_SLV: Injected Context Queue Overflow flag of the slave ADC
    const uint32_t ADC123_Common_CSR_JQOVF_SLV = 1U << 26 ;

//---  Register CCR: ADC common control register
  #define ADC123_Common_CCR (* ((volatile uint32_t *) (0x50040300 + 8)))

  // Field DUAL: Dual ADC mode selection
    inline uint32_t ADC123_Common_CCR_DUAL (const uint32_t inValue) {return (inValue & 0x1fU) << 0 ; }

  // Field DELAY: Delay between 2 sampling phases
    inline uint32_t ADC123_Common_CCR_DELAY (const uint32_t inValue) {return (inValue & 0xfU) << 8 ; }

  // Field DMACFG: DMA configuration (for multi-ADC mode)
    const uint32_t ADC123_Common_CCR_DMACFG = 1U << 13 ;

  // Field MDMA: Direct memory access mode for multi ADC mode
    inline uint32_t ADC123_Common_CCR_MDMA (const uint32_t inValue) {return (inValue & 0x3U) << 14 ; }

  // Field CKMODE: ADC clock mode
    inline uint32_t ADC123_Common_CCR_CKMODE (const uint32_t inValue) {return (inValue & 0x3U) << 16 ; }

  // Field PRESC: ADC prescaler
    inline uint32_t ADC123_Common_CCR_PRESC (const uint32_t inValue) {return (inValue & 0xfU) << 18 ; }

  // Field VREFEN: VREFINT enable
    const uint32_t ADC123_Common_CCR_VREFEN = 1U << 22 ;

  // Field CH17SEL: CH17SEL
    const uint32_t ADC123_Common_CCR_CH17SEL = 1U << 23 ;

  // Field CH18SEL: CH18SEL
    const uint32_t ADC123_Common_CCR_CH18SEL = 1U << 24 ;

//---  Register CDR: ADC common regular data register for dual
          and triple modes
  #define ADC123_Common_CDR (* ((const volatile uint32_t *) (0x50040300 + 12)))

  // Field RDATA_SLV: Regular data of the slave ADC
    inline uint32_t ADC123_Common_CDR_RDATA_SLV (const uint32_t inValue) {return (inValue & 0xffffU) << 16 ; }

  // Field RDATA_MST: Regular data of the master ADC
    inline uint32_t ADC123_Common_CDR_RDATA_MST (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

//------------------------------------------------------------------------------
// Peripheral ADC2
//------------------------------------------------------------------------------

//---  Register ISR: interrupt and status register
  #define ADC2_ISR (* ((volatile uint32_t *) (0x50040100 + 0)))

  // Field JQOVF: JQOVF
    const uint32_t ADC2_ISR_JQOVF = 1U << 10 ;

  // Field AWD3: AWD3
    const uint32_t ADC2_ISR_AWD3 = 1U << 9 ;

  // Field AWD2: AWD2
    const uint32_t ADC2_ISR_AWD2 = 1U << 8 ;

  // Field AWD1: AWD1
    const uint32_t ADC2_ISR_AWD1 = 1U << 7 ;

  // Field JEOS: JEOS
    const uint32_t ADC2_ISR_JEOS = 1U << 6 ;

  // Field JEOC: JEOC
    const uint32_t ADC2_ISR_JEOC = 1U << 5 ;

  // Field OVR: OVR
    const uint32_t ADC2_ISR_OVR = 1U << 4 ;

  // Field EOS: EOS
    const uint32_t ADC2_ISR_EOS = 1U << 3 ;

  // Field EOC: EOC
    const uint32_t ADC2_ISR_EOC = 1U << 2 ;

  // Field EOSMP: EOSMP
    const uint32_t ADC2_ISR_EOSMP = 1U << 1 ;

  // Field ADRDY: ADRDY
    const uint32_t ADC2_ISR_ADRDY = 1U << 0 ;

//---  Register IER: interrupt enable register
  #define ADC2_IER (* ((volatile uint32_t *) (0x50040100 + 4)))

  // Field JQOVFIE: JQOVFIE
    const uint32_t ADC2_IER_JQOVFIE = 1U << 10 ;

  // Field AWD3IE: AWD3IE
    const uint32_t ADC2_IER_AWD3IE = 1U << 9 ;

  // Field AWD2IE: AWD2IE
    const uint32_t ADC2_IER_AWD2IE = 1U << 8 ;

  // Field AWD1IE: AWD1IE
    const uint32_t ADC2_IER_AWD1IE = 1U << 7 ;

  // Field JEOSIE: JEOSIE
    const uint32_t ADC2_IER_JEOSIE = 1U << 6 ;

  // Field JEOCIE: JEOCIE
    const uint32_t ADC2_IER_JEOCIE = 1U << 5 ;

  // Field OVRIE: OVRIE
    const uint32_t ADC2_IER_OVRIE = 1U << 4 ;

  // Field EOSIE: EOSIE
    const uint32_t ADC2_IER_EOSIE = 1U << 3 ;

  // Field EOCIE: EOCIE
    const uint32_t ADC2_IER_EOCIE = 1U << 2 ;

  // Field EOSMPIE: EOSMPIE
    const uint32_t ADC2_IER_EOSMPIE = 1U << 1 ;

  // Field ADRDYIE: ADRDYIE
    const uint32_t ADC2_IER_ADRDYIE = 1U << 0 ;

//---  Register CR: control register
  #define ADC2_CR (* ((volatile uint32_t *) (0x50040100 + 8)))

  // Field ADCAL: ADCAL
    const uint32_t ADC2_CR_ADCAL = 1U << 31 ;

  // Field ADCALDIF: ADCALDIF
    const uint32_t ADC2_CR_ADCALDIF = 1U << 30 ;

  // Field DEEPPWD: DEEPPWD
    const uint32_t ADC2_CR_DEEPPWD = 1U << 29 ;

  // Field ADVREGEN: ADVREGEN
    const uint32_t ADC2_CR_ADVREGEN = 1U << 28 ;

  // Field JADSTP: JADSTP
    const uint32_t ADC2_CR_JADSTP = 1U << 5 ;

  // Field ADSTP: ADSTP
    const uint32_t ADC2_CR_ADSTP = 1U << 4 ;

  // Field JADSTART: JADSTART
    const uint32_t ADC2_CR_JADSTART = 1U << 3 ;

  // Field ADSTART: ADSTART
    const uint32_t ADC2_CR_ADSTART = 1U << 2 ;

  // Field ADDIS: ADDIS
    const uint32_t ADC2_CR_ADDIS = 1U << 1 ;

  // Field ADEN: ADEN
    const uint32_t ADC2_CR_ADEN = 1U << 0 ;

//---  Register CFGR: configuration register
  #define ADC2_CFGR (* ((volatile uint32_t *) (0x50040100 + 12)))

  // Field JQDIS: JQDIS
    const uint32_t ADC2_CFGR_JQDIS = 1U << 31 ;

  // Field AWDCH1CH: AWDCH1CH
    inline uint32_t ADC2_CFGR_AWDCH1CH (const uint32_t inValue) {return (inValue & 0x1fU) << 26 ; }

  // Field JAUTO: JAUTO
    const uint32_t ADC2_CFGR_JAUTO = 1U << 25 ;

  // Field JAWD1EN: JAWD1EN
    const uint32_t ADC2_CFGR_JAWD1EN = 1U << 24 ;

  // Field AWD1EN: AWD1EN
    const uint32_t ADC2_CFGR_AWD1EN = 1U << 23 ;

  // Field AWD1SGL: AWD1SGL
    const uint32_t ADC2_CFGR_AWD1SGL = 1U << 22 ;

  // Field JQM: JQM
    const uint32_t ADC2_CFGR_JQM = 1U << 21 ;

  // Field JDISCEN: JDISCEN
    const uint32_t ADC2_CFGR_JDISCEN = 1U << 20 ;

  // Field DISCNUM: DISCNUM
    inline uint32_t ADC2_CFGR_DISCNUM (const uint32_t inValue) {return (inValue & 0x7U) << 17 ; }

  // Field DISCEN: DISCEN
    const uint32_t ADC2_CFGR_DISCEN = 1U << 16 ;

  // Field AUTDLY: AUTDLY
    const uint32_t ADC2_CFGR_AUTDLY = 1U << 14 ;

  // Field CONT: CONT
    const uint32_t ADC2_CFGR_CONT = 1U << 13 ;

  // Field OVRMOD: OVRMOD
    const uint32_t ADC2_CFGR_OVRMOD = 1U << 12 ;

  // Field EXTEN: EXTEN
    inline uint32_t ADC2_CFGR_EXTEN (const uint32_t inValue) {return (inValue & 0x3U) << 10 ; }

  // Field EXTSEL: EXTSEL
    inline uint32_t ADC2_CFGR_EXTSEL (const uint32_t inValue) {return (inValue & 0xfU) << 6 ; }

  // Field ALIGN: ALIGN
    const uint32_t ADC2_CFGR_ALIGN = 1U << 5 ;

  // Field RES: RES
    inline uint32_t ADC2_CFGR_RES (const uint32_t inValue) {return (inValue & 0x3U) << 3 ; }

  // Field DMACFG: DMACFG
    const uint32_t ADC2_CFGR_DMACFG = 1U << 1 ;

  // Field DMAEN: DMAEN
    const uint32_t ADC2_CFGR_DMAEN = 1U << 0 ;

//---  Register CFGR2: configuration register
  #define ADC2_CFGR2 (* ((volatile uint32_t *) (0x50040100 + 16)))

  // Field ROVSM: EXTEN
    const uint32_t ADC2_CFGR2_ROVSM = 1U << 10 ;

  // Field TOVS: EXTSEL
    const uint32_t ADC2_CFGR2_TOVS = 1U << 9 ;

  // Field OVSS: ALIGN
    inline uint32_t ADC2_CFGR2_OVSS (const uint32_t inValue) {return (inValue & 0xfU) << 5 ; }

  // Field OVSR: RES
    inline uint32_t ADC2_CFGR2_OVSR (const uint32_t inValue) {return (inValue & 0x7U) << 2 ; }

  // Field JOVSE: DMACFG
    const uint32_t ADC2_CFGR2_JOVSE = 1U << 1 ;

  // Field ROVSE: DMAEN
    const uint32_t ADC2_CFGR2_ROVSE = 1U << 0 ;

//---  Register SMPR1: sample time register 1
  #define ADC2_SMPR1 (* ((volatile uint32_t *) (0x50040100 + 20)))

  // Field SMP9: SMP9
    inline uint32_t ADC2_SMPR1_SMP9 (const uint32_t inValue) {return (inValue & 0x7U) << 27 ; }

  // Field SMP8: SMP8
    inline uint32_t ADC2_SMPR1_SMP8 (const uint32_t inValue) {return (inValue & 0x7U) << 24 ; }

  // Field SMP7: SMP7
    inline uint32_t ADC2_SMPR1_SMP7 (const uint32_t inValue) {return (inValue & 0x7U) << 21 ; }

  // Field SMP6: SMP6
    inline uint32_t ADC2_SMPR1_SMP6 (const uint32_t inValue) {return (inValue & 0x7U) << 18 ; }

  // Field SMP5: SMP5
    inline uint32_t ADC2_SMPR1_SMP5 (const uint32_t inValue) {return (inValue & 0x7U) << 15 ; }

  // Field SMP4: SMP4
    inline uint32_t ADC2_SMPR1_SMP4 (const uint32_t inValue) {return (inValue & 0x7U) << 12 ; }

  // Field SMP3: SMP3
    inline uint32_t ADC2_SMPR1_SMP3 (const uint32_t inValue) {return (inValue & 0x7U) << 9 ; }

  // Field SMP2: SMP2
    inline uint32_t ADC2_SMPR1_SMP2 (const uint32_t inValue) {return (inValue & 0x7U) << 6 ; }

  // Field SMP1: SMP1
    inline uint32_t ADC2_SMPR1_SMP1 (const uint32_t inValue) {return (inValue & 0x7U) << 3 ; }

  // Field SMP0: SMP0
    inline uint32_t ADC2_SMPR1_SMP0 (const uint32_t inValue) {return (inValue & 0x7U) << 0 ; }

//---  Register SMPR2: sample time register 2
  #define ADC2_SMPR2 (* ((volatile uint32_t *) (0x50040100 + 24)))

  // Field SMP18: SMP18
    inline uint32_t ADC2_SMPR2_SMP18 (const uint32_t inValue) {return (inValue & 0x7U) << 24 ; }

  // Field SMP17: SMP17
    inline uint32_t ADC2_SMPR2_SMP17 (const uint32_t inValue) {return (inValue & 0x7U) << 21 ; }

  // Field SMP16: SMP16
    inline uint32_t ADC2_SMPR2_SMP16 (const uint32_t inValue) {return (inValue & 0x7U) << 18 ; }

  // Field SMP15: SMP15
    inline uint32_t ADC2_SMPR2_SMP15 (const uint32_t inValue) {return (inValue & 0x7U) << 15 ; }

  // Field SMP14: SMP14
    inline uint32_t ADC2_SMPR2_SMP14 (const uint32_t inValue) {return (inValue & 0x7U) << 12 ; }

  // Field SMP13: SMP13
    inline uint32_t ADC2_SMPR2_SMP13 (const uint32_t inValue) {return (inValue & 0x7U) << 9 ; }

  // Field SMP12: SMP12
    inline uint32_t ADC2_SMPR2_SMP12 (const uint32_t inValue) {return (inValue & 0x7U) << 6 ; }

  // Field SMP11: SMP11
    inline uint32_t ADC2_SMPR2_SMP11 (const uint32_t inValue) {return (inValue & 0x7U) << 3 ; }

  // Field SMP10: SMP10
    inline uint32_t ADC2_SMPR2_SMP10 (const uint32_t inValue) {return (inValue & 0x7U) << 0 ; }

//---  Register TR1: watchdog threshold register 1
  #define ADC2_TR1 (* ((volatile uint32_t *) (0x50040100 + 32)))

  // Field HT1: HT1
    inline uint32_t ADC2_TR1_HT1 (const uint32_t inValue) {return (inValue & 0xfffU) << 16 ; }

  // Field LT1: LT1
    inline uint32_t ADC2_TR1_LT1 (const uint32_t inValue) {return (inValue & 0xfffU) << 0 ; }

//---  Register TR2: watchdog threshold register
  #define ADC2_TR2 (* ((volatile uint32_t *) (0x50040100 + 36)))

  // Field HT2: HT2
    inline uint32_t ADC2_TR2_HT2 (const uint32_t inValue) {return (inValue & 0xffU) << 16 ; }

  // Field LT2: LT2
    inline uint32_t ADC2_TR2_LT2 (const uint32_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register TR3: watchdog threshold register 3
  #define ADC2_TR3 (* ((volatile uint32_t *) (0x50040100 + 40)))

  // Field HT3: HT3
    inline uint32_t ADC2_TR3_HT3 (const uint32_t inValue) {return (inValue & 0xffU) << 16 ; }

  // Field LT3: LT3
    inline uint32_t ADC2_TR3_LT3 (const uint32_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register SQR1: regular sequence register 1
  #define ADC2_SQR1 (* ((volatile uint32_t *) (0x50040100 + 48)))

  // Field SQ4: SQ4
    inline uint32_t ADC2_SQR1_SQ4 (const uint32_t inValue) {return (inValue & 0x1fU) << 24 ; }

  // Field SQ3: SQ3
    inline uint32_t ADC2_SQR1_SQ3 (const uint32_t inValue) {return (inValue & 0x1fU) << 18 ; }

  // Field SQ2: SQ2
    inline uint32_t ADC2_SQR1_SQ2 (const uint32_t inValue) {return (inValue & 0x1fU) << 12 ; }

  // Field SQ1: SQ1
    inline uint32_t ADC2_SQR1_SQ1 (const uint32_t inValue) {return (inValue & 0x1fU) << 6 ; }

  // Field L: L
    inline uint32_t ADC2_SQR1_L (const uint32_t inValue) {return (inValue & 0xfU) << 0 ; }

//---  Register SQR2: regular sequence register 2
  #define ADC2_SQR2 (* ((volatile uint32_t *) (0x50040100 + 52)))

  // Field SQ9: SQ9
    inline uint32_t ADC2_SQR2_SQ9 (const uint32_t inValue) {return (inValue & 0x1fU) << 24 ; }

  // Field SQ8: SQ8
    inline uint32_t ADC2_SQR2_SQ8 (const uint32_t inValue) {return (inValue & 0x1fU) << 18 ; }

  // Field SQ7: SQ7
    inline uint32_t ADC2_SQR2_SQ7 (const uint32_t inValue) {return (inValue & 0x1fU) << 12 ; }

  // Field SQ6: SQ6
    inline uint32_t ADC2_SQR2_SQ6 (const uint32_t inValue) {return (inValue & 0x1fU) << 6 ; }

  // Field SQ5: SQ5
    inline uint32_t ADC2_SQR2_SQ5 (const uint32_t inValue) {return (inValue & 0x1fU) << 0 ; }

//---  Register SQR3: regular sequence register 3
  #define ADC2_SQR3 (* ((volatile uint32_t *) (0x50040100 + 56)))

  // Field SQ14: SQ14
    inline uint32_t ADC2_SQR3_SQ14 (const uint32_t inValue) {return (inValue & 0x1fU) << 24 ; }

  // Field SQ13: SQ13
    inline uint32_t ADC2_SQR3_SQ13 (const uint32_t inValue) {return (inValue & 0x1fU) << 18 ; }

  // Field SQ12: SQ12
    inline uint32_t ADC2_SQR3_SQ12 (const uint32_t inValue) {return (inValue & 0x1fU) << 12 ; }

  // Field SQ11: SQ11
    inline uint32_t ADC2_SQR3_SQ11 (const uint32_t inValue) {return (inValue & 0x1fU) << 6 ; }

  // Field SQ10: SQ10
    inline uint32_t ADC2_SQR3_SQ10 (const uint32_t inValue) {return (inValue & 0x1fU) << 0 ; }

//---  Register SQR4: regular sequence register 4
  #define ADC2_SQR4 (* ((volatile uint32_t *) (0x50040100 + 60)))

  // Field SQ16: SQ16
    inline uint32_t ADC2_SQR4_SQ16 (const uint32_t inValue) {return (inValue & 0x1fU) << 6 ; }

  // Field SQ15: SQ15
    inline uint32_t ADC2_SQR4_SQ15 (const uint32_t inValue) {return (inValue & 0x1fU) << 0 ; }

//---  Register DR: regular Data Register
  #define ADC2_DR (* ((const volatile uint32_t *) (0x50040100 + 64)))

  // Field regularDATA: regularDATA
    inline uint32_t ADC2_DR_regularDATA (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register JSQR: injected sequence register
  #define ADC2_JSQR (* ((volatile uint32_t *) (0x50040100 + 76)))

  // Field JSQ4: JSQ4
    inline uint32_t ADC2_JSQR_JSQ4 (const uint32_t inValue) {return (inValue & 0x1fU) << 26 ; }

  // Field JSQ3: JSQ3
    inline uint32_t ADC2_JSQR_JSQ3 (const uint32_t inValue) {return (inValue & 0x1fU) << 20 ; }

  // Field JSQ2: JSQ2
    inline uint32_t ADC2_JSQR_JSQ2 (const uint32_t inValue) {return (inValue & 0x1fU) << 14 ; }

  // Field JSQ1: JSQ1
    inline uint32_t ADC2_JSQR_JSQ1 (const uint32_t inValue) {return (inValue & 0x1fU) << 8 ; }

  // Field JEXTEN: JEXTEN
    inline uint32_t ADC2_JSQR_JEXTEN (const uint32_t inValue) {return (inValue & 0x3U) << 6 ; }

  // Field JEXTSEL: JEXTSEL
    inline uint32_t ADC2_JSQR_JEXTSEL (const uint32_t inValue) {return (inValue & 0xfU) << 2 ; }

  // Field JL: JL
    inline uint32_t ADC2_JSQR_JL (const uint32_t inValue) {return (inValue & 0x3U) << 0 ; }

//---  Register OFR1: offset register 1
  #define ADC2_OFR1 (* ((volatile uint32_t *) (0x50040100 + 96)))

  // Field OFFSET1_EN: OFFSET1_EN
    const uint32_t ADC2_OFR1_OFFSET1_EN = 1U << 31 ;

  // Field OFFSET1_CH: OFFSET1_CH
    inline uint32_t ADC2_OFR1_OFFSET1_CH (const uint32_t inValue) {return (inValue & 0x1fU) << 26 ; }

  // Field OFFSET1: OFFSET1
    inline uint32_t ADC2_OFR1_OFFSET1 (const uint32_t inValue) {return (inValue & 0xfffU) << 0 ; }

//---  Register OFR2: offset register 2
  #define ADC2_OFR2 (* ((volatile uint32_t *) (0x50040100 + 100)))

  // Field OFFSET2_EN: OFFSET2_EN
    const uint32_t ADC2_OFR2_OFFSET2_EN = 1U << 31 ;

  // Field OFFSET2_CH: OFFSET2_CH
    inline uint32_t ADC2_OFR2_OFFSET2_CH (const uint32_t inValue) {return (inValue & 0x1fU) << 26 ; }

  // Field OFFSET2: OFFSET2
    inline uint32_t ADC2_OFR2_OFFSET2 (const uint32_t inValue) {return (inValue & 0xfffU) << 0 ; }

//---  Register OFR3: offset register 3
  #define ADC2_OFR3 (* ((volatile uint32_t *) (0x50040100 + 104)))

  // Field OFFSET3_EN: OFFSET3_EN
    const uint32_t ADC2_OFR3_OFFSET3_EN = 1U << 31 ;

  // Field OFFSET3_CH: OFFSET3_CH
    inline uint32_t ADC2_OFR3_OFFSET3_CH (const uint32_t inValue) {return (inValue & 0x1fU) << 26 ; }

  // Field OFFSET3: OFFSET3
    inline uint32_t ADC2_OFR3_OFFSET3 (const uint32_t inValue) {return (inValue & 0xfffU) << 0 ; }

//---  Register OFR4: offset register 4
  #define ADC2_OFR4 (* ((volatile uint32_t *) (0x50040100 + 108)))

  // Field OFFSET4_EN: OFFSET4_EN
    const uint32_t ADC2_OFR4_OFFSET4_EN = 1U << 31 ;

  // Field OFFSET4_CH: OFFSET4_CH
    inline uint32_t ADC2_OFR4_OFFSET4_CH (const uint32_t inValue) {return (inValue & 0x1fU) << 26 ; }

  // Field OFFSET4: OFFSET4
    inline uint32_t ADC2_OFR4_OFFSET4 (const uint32_t inValue) {return (inValue & 0xfffU) << 0 ; }

//---  Register JDR1: injected data register 1
  #define ADC2_JDR1 (* ((const volatile uint32_t *) (0x50040100 + 128)))

  // Field JDATA1: JDATA1
    inline uint32_t ADC2_JDR1_JDATA1 (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register JDR2: injected data register 2
  #define ADC2_JDR2 (* ((const volatile uint32_t *) (0x50040100 + 132)))

  // Field JDATA2: JDATA2
    inline uint32_t ADC2_JDR2_JDATA2 (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register JDR3: injected data register 3
  #define ADC2_JDR3 (* ((const volatile uint32_t *) (0x50040100 + 136)))

  // Field JDATA3: JDATA3
    inline uint32_t ADC2_JDR3_JDATA3 (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register JDR4: injected data register 4
  #define ADC2_JDR4 (* ((const volatile uint32_t *) (0x50040100 + 140)))

  // Field JDATA4: JDATA4
    inline uint32_t ADC2_JDR4_JDATA4 (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register AWD2CR: Analog Watchdog 2 Configuration
          Register
  #define ADC2_AWD2CR (* ((volatile uint32_t *) (0x50040100 + 160)))

  // Field AWD2CH: AWD2CH
    inline uint32_t ADC2_AWD2CR_AWD2CH (const uint32_t inValue) {return (inValue & 0x7ffffU) << 0 ; }

//---  Register AWD3CR: Analog Watchdog 3 Configuration
          Register
  #define ADC2_AWD3CR (* ((volatile uint32_t *) (0x50040100 + 164)))

  // Field AWD3CH: AWD3CH
    inline uint32_t ADC2_AWD3CR_AWD3CH (const uint32_t inValue) {return (inValue & 0x7ffffU) << 0 ; }

//---  Register DIFSEL: Differential Mode Selection Register
          2
  #define ADC2_DIFSEL (* ((volatile uint32_t *) (0x50040100 + 176)))

  // Field DIFSEL_0: Differential mode for channel 0
    const uint32_t ADC2_DIFSEL_DIFSEL_0 = 1U << 0 ;

  // Field DIFSEL_1_15: Differential mode for channels 15 to 1
    inline uint32_t ADC2_DIFSEL_DIFSEL_1_15 (const uint32_t inValue) {return (inValue & 0x7fffU) << 1 ; }

  // Field DIFSEL_16_18: Differential mode for channels 18 to 16
    inline uint32_t ADC2_DIFSEL_DIFSEL_16_18 (const uint32_t inValue) {return (inValue & 0x7U) << 16 ; }

//---  Register CALFACT: Calibration Factors
  #define ADC2_CALFACT (* ((volatile uint32_t *) (0x50040100 + 180)))

  // Field CALFACT_D: CALFACT_D
    inline uint32_t ADC2_CALFACT_CALFACT_D (const uint32_t inValue) {return (inValue & 0x7fU) << 16 ; }

  // Field CALFACT_S: CALFACT_S
    inline uint32_t ADC2_CALFACT_CALFACT_S (const uint32_t inValue) {return (inValue & 0x7fU) << 0 ; }

//------------------------------------------------------------------------------
// Peripheral ADC3
//------------------------------------------------------------------------------

//---  Register ISR: interrupt and status register
  #define ADC3_ISR (* ((volatile uint32_t *) (0x50040200 + 0)))

  // Field JQOVF: JQOVF
    const uint32_t ADC3_ISR_JQOVF = 1U << 10 ;

  // Field AWD3: AWD3
    const uint32_t ADC3_ISR_AWD3 = 1U << 9 ;

  // Field AWD2: AWD2
    const uint32_t ADC3_ISR_AWD2 = 1U << 8 ;

  // Field AWD1: AWD1
    const uint32_t ADC3_ISR_AWD1 = 1U << 7 ;

  // Field JEOS: JEOS
    const uint32_t ADC3_ISR_JEOS = 1U << 6 ;

  // Field JEOC: JEOC
    const uint32_t ADC3_ISR_JEOC = 1U << 5 ;

  // Field OVR: OVR
    const uint32_t ADC3_ISR_OVR = 1U << 4 ;

  // Field EOS: EOS
    const uint32_t ADC3_ISR_EOS = 1U << 3 ;

  // Field EOC: EOC
    const uint32_t ADC3_ISR_EOC = 1U << 2 ;

  // Field EOSMP: EOSMP
    const uint32_t ADC3_ISR_EOSMP = 1U << 1 ;

  // Field ADRDY: ADRDY
    const uint32_t ADC3_ISR_ADRDY = 1U << 0 ;

//---  Register IER: interrupt enable register
  #define ADC3_IER (* ((volatile uint32_t *) (0x50040200 + 4)))

  // Field JQOVFIE: JQOVFIE
    const uint32_t ADC3_IER_JQOVFIE = 1U << 10 ;

  // Field AWD3IE: AWD3IE
    const uint32_t ADC3_IER_AWD3IE = 1U << 9 ;

  // Field AWD2IE: AWD2IE
    const uint32_t ADC3_IER_AWD2IE = 1U << 8 ;

  // Field AWD1IE: AWD1IE
    const uint32_t ADC3_IER_AWD1IE = 1U << 7 ;

  // Field JEOSIE: JEOSIE
    const uint32_t ADC3_IER_JEOSIE = 1U << 6 ;

  // Field JEOCIE: JEOCIE
    const uint32_t ADC3_IER_JEOCIE = 1U << 5 ;

  // Field OVRIE: OVRIE
    const uint32_t ADC3_IER_OVRIE = 1U << 4 ;

  // Field EOSIE: EOSIE
    const uint32_t ADC3_IER_EOSIE = 1U << 3 ;

  // Field EOCIE: EOCIE
    const uint32_t ADC3_IER_EOCIE = 1U << 2 ;

  // Field EOSMPIE: EOSMPIE
    const uint32_t ADC3_IER_EOSMPIE = 1U << 1 ;

  // Field ADRDYIE: ADRDYIE
    const uint32_t ADC3_IER_ADRDYIE = 1U << 0 ;

//---  Register CR: control register
  #define ADC3_CR (* ((volatile uint32_t *) (0x50040200 + 8)))

  // Field ADCAL: ADCAL
    const uint32_t ADC3_CR_ADCAL = 1U << 31 ;

  // Field ADCALDIF: ADCALDIF
    const uint32_t ADC3_CR_ADCALDIF = 1U << 30 ;

  // Field DEEPPWD: DEEPPWD
    const uint32_t ADC3_CR_DEEPPWD = 1U << 29 ;

  // Field ADVREGEN: ADVREGEN
    const uint32_t ADC3_CR_ADVREGEN = 1U << 28 ;

  // Field JADSTP: JADSTP
    const uint32_t ADC3_CR_JADSTP = 1U << 5 ;

  // Field ADSTP: ADSTP
    const uint32_t ADC3_CR_ADSTP = 1U << 4 ;

  // Field JADSTART: JADSTART
    const uint32_t ADC3_CR_JADSTART = 1U << 3 ;

  // Field ADSTART: ADSTART
    const uint32_t ADC3_CR_ADSTART = 1U << 2 ;

  // Field ADDIS: ADDIS
    const uint32_t ADC3_CR_ADDIS = 1U << 1 ;

  // Field ADEN: ADEN
    const uint32_t ADC3_CR_ADEN = 1U << 0 ;

//---  Register CFGR: configuration register
  #define ADC3_CFGR (* ((volatile uint32_t *) (0x50040200 + 12)))

  // Field JQDIS: JQDIS
    const uint32_t ADC3_CFGR_JQDIS = 1U << 31 ;

  // Field AWDCH1CH: AWDCH1CH
    inline uint32_t ADC3_CFGR_AWDCH1CH (const uint32_t inValue) {return (inValue & 0x1fU) << 26 ; }

  // Field JAUTO: JAUTO
    const uint32_t ADC3_CFGR_JAUTO = 1U << 25 ;

  // Field JAWD1EN: JAWD1EN
    const uint32_t ADC3_CFGR_JAWD1EN = 1U << 24 ;

  // Field AWD1EN: AWD1EN
    const uint32_t ADC3_CFGR_AWD1EN = 1U << 23 ;

  // Field AWD1SGL: AWD1SGL
    const uint32_t ADC3_CFGR_AWD1SGL = 1U << 22 ;

  // Field JQM: JQM
    const uint32_t ADC3_CFGR_JQM = 1U << 21 ;

  // Field JDISCEN: JDISCEN
    const uint32_t ADC3_CFGR_JDISCEN = 1U << 20 ;

  // Field DISCNUM: DISCNUM
    inline uint32_t ADC3_CFGR_DISCNUM (const uint32_t inValue) {return (inValue & 0x7U) << 17 ; }

  // Field DISCEN: DISCEN
    const uint32_t ADC3_CFGR_DISCEN = 1U << 16 ;

  // Field AUTDLY: AUTDLY
    const uint32_t ADC3_CFGR_AUTDLY = 1U << 14 ;

  // Field CONT: CONT
    const uint32_t ADC3_CFGR_CONT = 1U << 13 ;

  // Field OVRMOD: OVRMOD
    const uint32_t ADC3_CFGR_OVRMOD = 1U << 12 ;

  // Field EXTEN: EXTEN
    inline uint32_t ADC3_CFGR_EXTEN (const uint32_t inValue) {return (inValue & 0x3U) << 10 ; }

  // Field EXTSEL: EXTSEL
    inline uint32_t ADC3_CFGR_EXTSEL (const uint32_t inValue) {return (inValue & 0xfU) << 6 ; }

  // Field ALIGN: ALIGN
    const uint32_t ADC3_CFGR_ALIGN = 1U << 5 ;

  // Field RES: RES
    inline uint32_t ADC3_CFGR_RES (const uint32_t inValue) {return (inValue & 0x3U) << 3 ; }

  // Field DMACFG: DMACFG
    const uint32_t ADC3_CFGR_DMACFG = 1U << 1 ;

  // Field DMAEN: DMAEN
    const uint32_t ADC3_CFGR_DMAEN = 1U << 0 ;

//---  Register CFGR2: configuration register
  #define ADC3_CFGR2 (* ((volatile uint32_t *) (0x50040200 + 16)))

  // Field ROVSM: EXTEN
    const uint32_t ADC3_CFGR2_ROVSM = 1U << 10 ;

  // Field TOVS: EXTSEL
    const uint32_t ADC3_CFGR2_TOVS = 1U << 9 ;

  // Field OVSS: ALIGN
    inline uint32_t ADC3_CFGR2_OVSS (const uint32_t inValue) {return (inValue & 0xfU) << 5 ; }

  // Field OVSR: RES
    inline uint32_t ADC3_CFGR2_OVSR (const uint32_t inValue) {return (inValue & 0x7U) << 2 ; }

  // Field JOVSE: DMACFG
    const uint32_t ADC3_CFGR2_JOVSE = 1U << 1 ;

  // Field ROVSE: DMAEN
    const uint32_t ADC3_CFGR2_ROVSE = 1U << 0 ;

//---  Register SMPR1: sample time register 1
  #define ADC3_SMPR1 (* ((volatile uint32_t *) (0x50040200 + 20)))

  // Field SMP9: SMP9
    inline uint32_t ADC3_SMPR1_SMP9 (const uint32_t inValue) {return (inValue & 0x7U) << 27 ; }

  // Field SMP8: SMP8
    inline uint32_t ADC3_SMPR1_SMP8 (const uint32_t inValue) {return (inValue & 0x7U) << 24 ; }

  // Field SMP7: SMP7
    inline uint32_t ADC3_SMPR1_SMP7 (const uint32_t inValue) {return (inValue & 0x7U) << 21 ; }

  // Field SMP6: SMP6
    inline uint32_t ADC3_SMPR1_SMP6 (const uint32_t inValue) {return (inValue & 0x7U) << 18 ; }

  // Field SMP5: SMP5
    inline uint32_t ADC3_SMPR1_SMP5 (const uint32_t inValue) {return (inValue & 0x7U) << 15 ; }

  // Field SMP4: SMP4
    inline uint32_t ADC3_SMPR1_SMP4 (const uint32_t inValue) {return (inValue & 0x7U) << 12 ; }

  // Field SMP3: SMP3
    inline uint32_t ADC3_SMPR1_SMP3 (const uint32_t inValue) {return (inValue & 0x7U) << 9 ; }

  // Field SMP2: SMP2
    inline uint32_t ADC3_SMPR1_SMP2 (const uint32_t inValue) {return (inValue & 0x7U) << 6 ; }

  // Field SMP1: SMP1
    inline uint32_t ADC3_SMPR1_SMP1 (const uint32_t inValue) {return (inValue & 0x7U) << 3 ; }

  // Field SMP0: SMP0
    inline uint32_t ADC3_SMPR1_SMP0 (const uint32_t inValue) {return (inValue & 0x7U) << 0 ; }

//---  Register SMPR2: sample time register 2
  #define ADC3_SMPR2 (* ((volatile uint32_t *) (0x50040200 + 24)))

  // Field SMP18: SMP18
    inline uint32_t ADC3_SMPR2_SMP18 (const uint32_t inValue) {return (inValue & 0x7U) << 24 ; }

  // Field SMP17: SMP17
    inline uint32_t ADC3_SMPR2_SMP17 (const uint32_t inValue) {return (inValue & 0x7U) << 21 ; }

  // Field SMP16: SMP16
    inline uint32_t ADC3_SMPR2_SMP16 (const uint32_t inValue) {return (inValue & 0x7U) << 18 ; }

  // Field SMP15: SMP15
    inline uint32_t ADC3_SMPR2_SMP15 (const uint32_t inValue) {return (inValue & 0x7U) << 15 ; }

  // Field SMP14: SMP14
    inline uint32_t ADC3_SMPR2_SMP14 (const uint32_t inValue) {return (inValue & 0x7U) << 12 ; }

  // Field SMP13: SMP13
    inline uint32_t ADC3_SMPR2_SMP13 (const uint32_t inValue) {return (inValue & 0x7U) << 9 ; }

  // Field SMP12: SMP12
    inline uint32_t ADC3_SMPR2_SMP12 (const uint32_t inValue) {return (inValue & 0x7U) << 6 ; }

  // Field SMP11: SMP11
    inline uint32_t ADC3_SMPR2_SMP11 (const uint32_t inValue) {return (inValue & 0x7U) << 3 ; }

  // Field SMP10: SMP10
    inline uint32_t ADC3_SMPR2_SMP10 (const uint32_t inValue) {return (inValue & 0x7U) << 0 ; }

//---  Register TR1: watchdog threshold register 1
  #define ADC3_TR1 (* ((volatile uint32_t *) (0x50040200 + 32)))

  // Field HT1: HT1
    inline uint32_t ADC3_TR1_HT1 (const uint32_t inValue) {return (inValue & 0xfffU) << 16 ; }

  // Field LT1: LT1
    inline uint32_t ADC3_TR1_LT1 (const uint32_t inValue) {return (inValue & 0xfffU) << 0 ; }

//---  Register TR2: watchdog threshold register
  #define ADC3_TR2 (* ((volatile uint32_t *) (0x50040200 + 36)))

  // Field HT2: HT2
    inline uint32_t ADC3_TR2_HT2 (const uint32_t inValue) {return (inValue & 0xffU) << 16 ; }

  // Field LT2: LT2
    inline uint32_t ADC3_TR2_LT2 (const uint32_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register TR3: watchdog threshold register 3
  #define ADC3_TR3 (* ((volatile uint32_t *) (0x50040200 + 40)))

  // Field HT3: HT3
    inline uint32_t ADC3_TR3_HT3 (const uint32_t inValue) {return (inValue & 0xffU) << 16 ; }

  // Field LT3: LT3
    inline uint32_t ADC3_TR3_LT3 (const uint32_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register SQR1: regular sequence register 1
  #define ADC3_SQR1 (* ((volatile uint32_t *) (0x50040200 + 48)))

  // Field SQ4: SQ4
    inline uint32_t ADC3_SQR1_SQ4 (const uint32_t inValue) {return (inValue & 0x1fU) << 24 ; }

  // Field SQ3: SQ3
    inline uint32_t ADC3_SQR1_SQ3 (const uint32_t inValue) {return (inValue & 0x1fU) << 18 ; }

  // Field SQ2: SQ2
    inline uint32_t ADC3_SQR1_SQ2 (const uint32_t inValue) {return (inValue & 0x1fU) << 12 ; }

  // Field SQ1: SQ1
    inline uint32_t ADC3_SQR1_SQ1 (const uint32_t inValue) {return (inValue & 0x1fU) << 6 ; }

  // Field L: L
    inline uint32_t ADC3_SQR1_L (const uint32_t inValue) {return (inValue & 0xfU) << 0 ; }

//---  Register SQR2: regular sequence register 2
  #define ADC3_SQR2 (* ((volatile uint32_t *) (0x50040200 + 52)))

  // Field SQ9: SQ9
    inline uint32_t ADC3_SQR2_SQ9 (const uint32_t inValue) {return (inValue & 0x1fU) << 24 ; }

  // Field SQ8: SQ8
    inline uint32_t ADC3_SQR2_SQ8 (const uint32_t inValue) {return (inValue & 0x1fU) << 18 ; }

  // Field SQ7: SQ7
    inline uint32_t ADC3_SQR2_SQ7 (const uint32_t inValue) {return (inValue & 0x1fU) << 12 ; }

  // Field SQ6: SQ6
    inline uint32_t ADC3_SQR2_SQ6 (const uint32_t inValue) {return (inValue & 0x1fU) << 6 ; }

  // Field SQ5: SQ5
    inline uint32_t ADC3_SQR2_SQ5 (const uint32_t inValue) {return (inValue & 0x1fU) << 0 ; }

//---  Register SQR3: regular sequence register 3
  #define ADC3_SQR3 (* ((volatile uint32_t *) (0x50040200 + 56)))

  // Field SQ14: SQ14
    inline uint32_t ADC3_SQR3_SQ14 (const uint32_t inValue) {return (inValue & 0x1fU) << 24 ; }

  // Field SQ13: SQ13
    inline uint32_t ADC3_SQR3_SQ13 (const uint32_t inValue) {return (inValue & 0x1fU) << 18 ; }

  // Field SQ12: SQ12
    inline uint32_t ADC3_SQR3_SQ12 (const uint32_t inValue) {return (inValue & 0x1fU) << 12 ; }

  // Field SQ11: SQ11
    inline uint32_t ADC3_SQR3_SQ11 (const uint32_t inValue) {return (inValue & 0x1fU) << 6 ; }

  // Field SQ10: SQ10
    inline uint32_t ADC3_SQR3_SQ10 (const uint32_t inValue) {return (inValue & 0x1fU) << 0 ; }

//---  Register SQR4: regular sequence register 4
  #define ADC3_SQR4 (* ((volatile uint32_t *) (0x50040200 + 60)))

  // Field SQ16: SQ16
    inline uint32_t ADC3_SQR4_SQ16 (const uint32_t inValue) {return (inValue & 0x1fU) << 6 ; }

  // Field SQ15: SQ15
    inline uint32_t ADC3_SQR4_SQ15 (const uint32_t inValue) {return (inValue & 0x1fU) << 0 ; }

//---  Register DR: regular Data Register
  #define ADC3_DR (* ((const volatile uint32_t *) (0x50040200 + 64)))

  // Field regularDATA: regularDATA
    inline uint32_t ADC3_DR_regularDATA (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register JSQR: injected sequence register
  #define ADC3_JSQR (* ((volatile uint32_t *) (0x50040200 + 76)))

  // Field JSQ4: JSQ4
    inline uint32_t ADC3_JSQR_JSQ4 (const uint32_t inValue) {return (inValue & 0x1fU) << 26 ; }

  // Field JSQ3: JSQ3
    inline uint32_t ADC3_JSQR_JSQ3 (const uint32_t inValue) {return (inValue & 0x1fU) << 20 ; }

  // Field JSQ2: JSQ2
    inline uint32_t ADC3_JSQR_JSQ2 (const uint32_t inValue) {return (inValue & 0x1fU) << 14 ; }

  // Field JSQ1: JSQ1
    inline uint32_t ADC3_JSQR_JSQ1 (const uint32_t inValue) {return (inValue & 0x1fU) << 8 ; }

  // Field JEXTEN: JEXTEN
    inline uint32_t ADC3_JSQR_JEXTEN (const uint32_t inValue) {return (inValue & 0x3U) << 6 ; }

  // Field JEXTSEL: JEXTSEL
    inline uint32_t ADC3_JSQR_JEXTSEL (const uint32_t inValue) {return (inValue & 0xfU) << 2 ; }

  // Field JL: JL
    inline uint32_t ADC3_JSQR_JL (const uint32_t inValue) {return (inValue & 0x3U) << 0 ; }

//---  Register OFR1: offset register 1
  #define ADC3_OFR1 (* ((volatile uint32_t *) (0x50040200 + 96)))

  // Field OFFSET1_EN: OFFSET1_EN
    const uint32_t ADC3_OFR1_OFFSET1_EN = 1U << 31 ;

  // Field OFFSET1_CH: OFFSET1_CH
    inline uint32_t ADC3_OFR1_OFFSET1_CH (const uint32_t inValue) {return (inValue & 0x1fU) << 26 ; }

  // Field OFFSET1: OFFSET1
    inline uint32_t ADC3_OFR1_OFFSET1 (const uint32_t inValue) {return (inValue & 0xfffU) << 0 ; }

//---  Register OFR2: offset register 2
  #define ADC3_OFR2 (* ((volatile uint32_t *) (0x50040200 + 100)))

  // Field OFFSET2_EN: OFFSET2_EN
    const uint32_t ADC3_OFR2_OFFSET2_EN = 1U << 31 ;

  // Field OFFSET2_CH: OFFSET2_CH
    inline uint32_t ADC3_OFR2_OFFSET2_CH (const uint32_t inValue) {return (inValue & 0x1fU) << 26 ; }

  // Field OFFSET2: OFFSET2
    inline uint32_t ADC3_OFR2_OFFSET2 (const uint32_t inValue) {return (inValue & 0xfffU) << 0 ; }

//---  Register OFR3: offset register 3
  #define ADC3_OFR3 (* ((volatile uint32_t *) (0x50040200 + 104)))

  // Field OFFSET3_EN: OFFSET3_EN
    const uint32_t ADC3_OFR3_OFFSET3_EN = 1U << 31 ;

  // Field OFFSET3_CH: OFFSET3_CH
    inline uint32_t ADC3_OFR3_OFFSET3_CH (const uint32_t inValue) {return (inValue & 0x1fU) << 26 ; }

  // Field OFFSET3: OFFSET3
    inline uint32_t ADC3_OFR3_OFFSET3 (const uint32_t inValue) {return (inValue & 0xfffU) << 0 ; }

//---  Register OFR4: offset register 4
  #define ADC3_OFR4 (* ((volatile uint32_t *) (0x50040200 + 108)))

  // Field OFFSET4_EN: OFFSET4_EN
    const uint32_t ADC3_OFR4_OFFSET4_EN = 1U << 31 ;

  // Field OFFSET4_CH: OFFSET4_CH
    inline uint32_t ADC3_OFR4_OFFSET4_CH (const uint32_t inValue) {return (inValue & 0x1fU) << 26 ; }

  // Field OFFSET4: OFFSET4
    inline uint32_t ADC3_OFR4_OFFSET4 (const uint32_t inValue) {return (inValue & 0xfffU) << 0 ; }

//---  Register JDR1: injected data register 1
  #define ADC3_JDR1 (* ((const volatile uint32_t *) (0x50040200 + 128)))

  // Field JDATA1: JDATA1
    inline uint32_t ADC3_JDR1_JDATA1 (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register JDR2: injected data register 2
  #define ADC3_JDR2 (* ((const volatile uint32_t *) (0x50040200 + 132)))

  // Field JDATA2: JDATA2
    inline uint32_t ADC3_JDR2_JDATA2 (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register JDR3: injected data register 3
  #define ADC3_JDR3 (* ((const volatile uint32_t *) (0x50040200 + 136)))

  // Field JDATA3: JDATA3
    inline uint32_t ADC3_JDR3_JDATA3 (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register JDR4: injected data register 4
  #define ADC3_JDR4 (* ((const volatile uint32_t *) (0x50040200 + 140)))

  // Field JDATA4: JDATA4
    inline uint32_t ADC3_JDR4_JDATA4 (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register AWD2CR: Analog Watchdog 2 Configuration
          Register
  #define ADC3_AWD2CR (* ((volatile uint32_t *) (0x50040200 + 160)))

  // Field AWD2CH: AWD2CH
    inline uint32_t ADC3_AWD2CR_AWD2CH (const uint32_t inValue) {return (inValue & 0x7ffffU) << 0 ; }

//---  Register AWD3CR: Analog Watchdog 3 Configuration
          Register
  #define ADC3_AWD3CR (* ((volatile uint32_t *) (0x50040200 + 164)))

  // Field AWD3CH: AWD3CH
    inline uint32_t ADC3_AWD3CR_AWD3CH (const uint32_t inValue) {return (inValue & 0x7ffffU) << 0 ; }

//---  Register DIFSEL: Differential Mode Selection Register
          2
  #define ADC3_DIFSEL (* ((volatile uint32_t *) (0x50040200 + 176)))

  // Field DIFSEL_0: Differential mode for channel 0
    const uint32_t ADC3_DIFSEL_DIFSEL_0 = 1U << 0 ;

  // Field DIFSEL_1_15: Differential mode for channels 15 to 1
    inline uint32_t ADC3_DIFSEL_DIFSEL_1_15 (const uint32_t inValue) {return (inValue & 0x7fffU) << 1 ; }

  // Field DIFSEL_16_18: Differential mode for channels 18 to 16
    inline uint32_t ADC3_DIFSEL_DIFSEL_16_18 (const uint32_t inValue) {return (inValue & 0x7U) << 16 ; }

//---  Register CALFACT: Calibration Factors
  #define ADC3_CALFACT (* ((volatile uint32_t *) (0x50040200 + 180)))

  // Field CALFACT_D: CALFACT_D
    inline uint32_t ADC3_CALFACT_CALFACT_D (const uint32_t inValue) {return (inValue & 0x7fU) << 16 ; }

  // Field CALFACT_S: CALFACT_S
    inline uint32_t ADC3_CALFACT_CALFACT_S (const uint32_t inValue) {return (inValue & 0x7fU) << 0 ; }

//------------------------------------------------------------------------------
// Peripheral AES: Advanced encryption standard hardware       accelerator
//------------------------------------------------------------------------------

//---  Register CR: control register
  #define AES_CR (* ((volatile uint32_t *) (0x50060000 + 0)))

  // Field DMAOUTEN: Enable DMA management of data output phase
    const uint32_t AES_CR_DMAOUTEN = 1U << 12 ;

  // Field DMAINEN: Enable DMA management of data input phase
    const uint32_t AES_CR_DMAINEN = 1U << 11 ;

  // Field ERRIE: Error interrupt enable
    const uint32_t AES_CR_ERRIE = 1U << 10 ;

  // Field CCFIE: CCF flag interrupt enable
    const uint32_t AES_CR_CCFIE = 1U << 9 ;

  // Field ERRC: Error clear
    const uint32_t AES_CR_ERRC = 1U << 8 ;

  // Field CCFC: Computation Complete Flag Clear
    const uint32_t AES_CR_CCFC = 1U << 7 ;

  // Field CHMOD: AES chaining mode
    inline uint32_t AES_CR_CHMOD (const uint32_t inValue) {return (inValue & 0x3U) << 5 ; }

  // Field MODE: AES operating mode
    inline uint32_t AES_CR_MODE (const uint32_t inValue) {return (inValue & 0x3U) << 3 ; }

  // Field DATATYPE: Data type selection (for data in and data out to/from the cryptographic block)
    inline uint32_t AES_CR_DATATYPE (const uint32_t inValue) {return (inValue & 0x3U) << 1 ; }

  // Field EN: AES enable
    const uint32_t AES_CR_EN = 1U << 0 ;

//---  Register SR: status register
  #define AES_SR (* ((const volatile uint32_t *) (0x50060000 + 4)))

  // Field WRERR: Write error flag
    const uint32_t AES_SR_WRERR = 1U << 2 ;

  // Field RDERR: Read error flag
    const uint32_t AES_SR_RDERR = 1U << 1 ;

  // Field CCF: Computation complete flag
    const uint32_t AES_SR_CCF = 1U << 0 ;

//---  Register DINR: data input register
  #define AES_DINR (* ((volatile uint32_t *) (0x50060000 + 8)))

  // Field AES_DINR: Data Input Register
    inline uint32_t AES_DINR_AES_DINR (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register DOUTR: data output register
  #define AES_DOUTR (* ((const volatile uint32_t *) (0x50060000 + 12)))

  // Field AES_DOUTR: Data output register
    inline uint32_t AES_DOUTR_AES_DOUTR (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register KEYR0: key register 0
  #define AES_KEYR0 (* ((volatile uint32_t *) (0x50060000 + 16)))

  // Field AES_KEYR0: Data Output Register (LSB key [31:0])
    inline uint32_t AES_KEYR0_AES_KEYR0 (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register KEYR1: key register 1
  #define AES_KEYR1 (* ((volatile uint32_t *) (0x50060000 + 20)))

  // Field AES_KEYR1: AES key register (key [63:32])
    inline uint32_t AES_KEYR1_AES_KEYR1 (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register KEYR2: key register 2
  #define AES_KEYR2 (* ((volatile uint32_t *) (0x50060000 + 24)))

  // Field AES_KEYR2: AES key register (key [95:64])
    inline uint32_t AES_KEYR2_AES_KEYR2 (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register KEYR3: key register 3
  #define AES_KEYR3 (* ((volatile uint32_t *) (0x50060000 + 28)))

  // Field AES_KEYR3: AES key register (MSB key [127:96])
    inline uint32_t AES_KEYR3_AES_KEYR3 (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register IVR0: initialization vector register
          0
  #define AES_IVR0 (* ((volatile uint32_t *) (0x50060000 + 32)))

  // Field AES_IVR0: initialization vector register (LSB IVR [31:0])
    inline uint32_t AES_IVR0_AES_IVR0 (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register IVR1: initialization vector register
          1
  #define AES_IVR1 (* ((volatile uint32_t *) (0x50060000 + 36)))

  // Field AES_IVR1: Initialization Vector Register (IVR [63:32])
    inline uint32_t AES_IVR1_AES_IVR1 (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register IVR2: initialization vector register
          2
  #define AES_IVR2 (* ((volatile uint32_t *) (0x50060000 + 40)))

  // Field AES_IVR2: Initialization Vector Register (IVR [95:64])
    inline uint32_t AES_IVR2_AES_IVR2 (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register IVR3: initialization vector register
          3
  #define AES_IVR3 (* ((volatile uint32_t *) (0x50060000 + 44)))

  // Field AES_IVR3: Initialization Vector Register (MSB IVR [127:96])
    inline uint32_t AES_IVR3_AES_IVR3 (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//------------------------------------------------------------------------------
// Peripheral CAN1: Controller area network
//------------------------------------------------------------------------------

//---  Register MCR: master control register
  #define CAN1_MCR (* ((volatile uint32_t *) (0x40006400 + 0)))

  // Field DBF: DBF
    const uint32_t CAN1_MCR_DBF = 1U << 16 ;

  // Field RESET: RESET
    const uint32_t CAN1_MCR_RESET = 1U << 15 ;

  // Field TTCM: TTCM
    const uint32_t CAN1_MCR_TTCM = 1U << 7 ;

  // Field ABOM: ABOM
    const uint32_t CAN1_MCR_ABOM = 1U << 6 ;

  // Field AWUM: AWUM
    const uint32_t CAN1_MCR_AWUM = 1U << 5 ;

  // Field NART: NART
    const uint32_t CAN1_MCR_NART = 1U << 4 ;

  // Field RFLM: RFLM
    const uint32_t CAN1_MCR_RFLM = 1U << 3 ;

  // Field TXFP: TXFP
    const uint32_t CAN1_MCR_TXFP = 1U << 2 ;

  // Field SLEEP: SLEEP
    const uint32_t CAN1_MCR_SLEEP = 1U << 1 ;

  // Field INRQ: INRQ
    const uint32_t CAN1_MCR_INRQ = 1U << 0 ;

//---  Register MSR: master status register
  #define CAN1_MSR (* ((volatile uint32_t *) (0x40006400 + 4)))

  // Field RX: RX
    const uint32_t CAN1_MSR_RX = 1U << 11 ;

  // Field SAMP: SAMP
    const uint32_t CAN1_MSR_SAMP = 1U << 10 ;

  // Field RXM: RXM
    const uint32_t CAN1_MSR_RXM = 1U << 9 ;

  // Field TXM: TXM
    const uint32_t CAN1_MSR_TXM = 1U << 8 ;

  // Field SLAKI: SLAKI
    const uint32_t CAN1_MSR_SLAKI = 1U << 4 ;

  // Field WKUI: WKUI
    const uint32_t CAN1_MSR_WKUI = 1U << 3 ;

  // Field ERRI: ERRI
    const uint32_t CAN1_MSR_ERRI = 1U << 2 ;

  // Field SLAK: SLAK
    const uint32_t CAN1_MSR_SLAK = 1U << 1 ;

  // Field INAK: INAK
    const uint32_t CAN1_MSR_INAK = 1U << 0 ;

//---  Register TSR: transmit status register
  #define CAN1_TSR (* ((volatile uint32_t *) (0x40006400 + 8)))

  // Field LOW2: Lowest priority flag for mailbox 2
    const uint32_t CAN1_TSR_LOW2 = 1U << 31 ;

  // Field LOW1: Lowest priority flag for mailbox 1
    const uint32_t CAN1_TSR_LOW1 = 1U << 30 ;

  // Field LOW0: Lowest priority flag for mailbox 0
    const uint32_t CAN1_TSR_LOW0 = 1U << 29 ;

  // Field TME2: Lowest priority flag for mailbox 2
    const uint32_t CAN1_TSR_TME2 = 1U << 28 ;

  // Field TME1: Lowest priority flag for mailbox 1
    const uint32_t CAN1_TSR_TME1 = 1U << 27 ;

  // Field TME0: Lowest priority flag for mailbox 0
    const uint32_t CAN1_TSR_TME0 = 1U << 26 ;

  // Field CODE: CODE
    inline uint32_t CAN1_TSR_CODE (const uint32_t inValue) {return (inValue & 0x3U) << 24 ; }

  // Field ABRQ2: ABRQ2
    const uint32_t CAN1_TSR_ABRQ2 = 1U << 23 ;

  // Field TERR2: TERR2
    const uint32_t CAN1_TSR_TERR2 = 1U << 19 ;

  // Field ALST2: ALST2
    const uint32_t CAN1_TSR_ALST2 = 1U << 18 ;

  // Field TXOK2: TXOK2
    const uint32_t CAN1_TSR_TXOK2 = 1U << 17 ;

  // Field RQCP2: RQCP2
    const uint32_t CAN1_TSR_RQCP2 = 1U << 16 ;

  // Field ABRQ1: ABRQ1
    const uint32_t CAN1_TSR_ABRQ1 = 1U << 15 ;

  // Field TERR1: TERR1
    const uint32_t CAN1_TSR_TERR1 = 1U << 11 ;

  // Field ALST1: ALST1
    const uint32_t CAN1_TSR_ALST1 = 1U << 10 ;

  // Field TXOK1: TXOK1
    const uint32_t CAN1_TSR_TXOK1 = 1U << 9 ;

  // Field RQCP1: RQCP1
    const uint32_t CAN1_TSR_RQCP1 = 1U << 8 ;

  // Field ABRQ0: ABRQ0
    const uint32_t CAN1_TSR_ABRQ0 = 1U << 7 ;

  // Field TERR0: TERR0
    const uint32_t CAN1_TSR_TERR0 = 1U << 3 ;

  // Field ALST0: ALST0
    const uint32_t CAN1_TSR_ALST0 = 1U << 2 ;

  // Field TXOK0: TXOK0
    const uint32_t CAN1_TSR_TXOK0 = 1U << 1 ;

  // Field RQCP0: RQCP0
    const uint32_t CAN1_TSR_RQCP0 = 1U << 0 ;

//---  Register RF0R: receive FIFO 0 register
  #define CAN1_RF0R (* ((volatile uint32_t *) (0x40006400 + 12)))

  // Field RFOM0: RFOM0
    const uint32_t CAN1_RF0R_RFOM0 = 1U << 5 ;

  // Field FOVR0: FOVR0
    const uint32_t CAN1_RF0R_FOVR0 = 1U << 4 ;

  // Field FULL0: FULL0
    const uint32_t CAN1_RF0R_FULL0 = 1U << 3 ;

  // Field FMP0: FMP0
    inline uint32_t CAN1_RF0R_FMP0 (const uint32_t inValue) {return (inValue & 0x3U) << 0 ; }

//---  Register RF1R: receive FIFO 1 register
  #define CAN1_RF1R (* ((volatile uint32_t *) (0x40006400 + 16)))

  // Field RFOM1: RFOM1
    const uint32_t CAN1_RF1R_RFOM1 = 1U << 5 ;

  // Field FOVR1: FOVR1
    const uint32_t CAN1_RF1R_FOVR1 = 1U << 4 ;

  // Field FULL1: FULL1
    const uint32_t CAN1_RF1R_FULL1 = 1U << 3 ;

  // Field FMP1: FMP1
    inline uint32_t CAN1_RF1R_FMP1 (const uint32_t inValue) {return (inValue & 0x3U) << 0 ; }

//---  Register IER: interrupt enable register
  #define CAN1_IER (* ((volatile uint32_t *) (0x40006400 + 20)))

  // Field SLKIE: SLKIE
    const uint32_t CAN1_IER_SLKIE = 1U << 17 ;

  // Field WKUIE: WKUIE
    const uint32_t CAN1_IER_WKUIE = 1U << 16 ;

  // Field ERRIE: ERRIE
    const uint32_t CAN1_IER_ERRIE = 1U << 15 ;

  // Field LECIE: LECIE
    const uint32_t CAN1_IER_LECIE = 1U << 11 ;

  // Field BOFIE: BOFIE
    const uint32_t CAN1_IER_BOFIE = 1U << 10 ;

  // Field EPVIE: EPVIE
    const uint32_t CAN1_IER_EPVIE = 1U << 9 ;

  // Field EWGIE: EWGIE
    const uint32_t CAN1_IER_EWGIE = 1U << 8 ;

  // Field FOVIE1: FOVIE1
    const uint32_t CAN1_IER_FOVIE1 = 1U << 6 ;

  // Field FFIE1: FFIE1
    const uint32_t CAN1_IER_FFIE1 = 1U << 5 ;

  // Field FMPIE1: FMPIE1
    const uint32_t CAN1_IER_FMPIE1 = 1U << 4 ;

  // Field FOVIE0: FOVIE0
    const uint32_t CAN1_IER_FOVIE0 = 1U << 3 ;

  // Field FFIE0: FFIE0
    const uint32_t CAN1_IER_FFIE0 = 1U << 2 ;

  // Field FMPIE0: FMPIE0
    const uint32_t CAN1_IER_FMPIE0 = 1U << 1 ;

  // Field TMEIE: TMEIE
    const uint32_t CAN1_IER_TMEIE = 1U << 0 ;

//---  Register ESR: interrupt enable register
  #define CAN1_ESR (* ((volatile uint32_t *) (0x40006400 + 24)))

  // Field REC: REC
    inline uint32_t CAN1_ESR_REC (const uint32_t inValue) {return (inValue & 0xffU) << 24 ; }

  // Field TEC: TEC
    inline uint32_t CAN1_ESR_TEC (const uint32_t inValue) {return (inValue & 0xffU) << 16 ; }

  // Field LEC: LEC
    inline uint32_t CAN1_ESR_LEC (const uint32_t inValue) {return (inValue & 0x7U) << 4 ; }

  // Field BOFF: BOFF
    const uint32_t CAN1_ESR_BOFF = 1U << 2 ;

  // Field EPVF: EPVF
    const uint32_t CAN1_ESR_EPVF = 1U << 1 ;

  // Field EWGF: EWGF
    const uint32_t CAN1_ESR_EWGF = 1U << 0 ;

//---  Register BTR: bit timing register
  #define CAN1_BTR (* ((volatile uint32_t *) (0x40006400 + 28)))

  // Field SILM: SILM
    const uint32_t CAN1_BTR_SILM = 1U << 31 ;

  // Field LBKM: LBKM
    const uint32_t CAN1_BTR_LBKM = 1U << 30 ;

  // Field SJW: SJW
    inline uint32_t CAN1_BTR_SJW (const uint32_t inValue) {return (inValue & 0x3U) << 24 ; }

  // Field TS2: TS2
    inline uint32_t CAN1_BTR_TS2 (const uint32_t inValue) {return (inValue & 0x7U) << 20 ; }

  // Field TS1: TS1
    inline uint32_t CAN1_BTR_TS1 (const uint32_t inValue) {return (inValue & 0xfU) << 16 ; }

  // Field BRP: BRP
    inline uint32_t CAN1_BTR_BRP (const uint32_t inValue) {return (inValue & 0x3ffU) << 0 ; }

//---  Register TI0R: TX mailbox identifier register
  #define CAN1_TI0R (* ((volatile uint32_t *) (0x40006400 + 384)))

  // Field STID: STID
    inline uint32_t CAN1_TI0R_STID (const uint32_t inValue) {return (inValue & 0x7ffU) << 21 ; }

  // Field EXID: EXID
    inline uint32_t CAN1_TI0R_EXID (const uint32_t inValue) {return (inValue & 0x3ffffU) << 3 ; }

  // Field IDE: IDE
    const uint32_t CAN1_TI0R_IDE = 1U << 2 ;

  // Field RTR: RTR
    const uint32_t CAN1_TI0R_RTR = 1U << 1 ;

  // Field TXRQ: TXRQ
    const uint32_t CAN1_TI0R_TXRQ = 1U << 0 ;

//---  Register TDT0R: mailbox data length control and time stamp
          register
  #define CAN1_TDT0R (* ((volatile uint32_t *) (0x40006400 + 388)))

  // Field TIME: TIME
    inline uint32_t CAN1_TDT0R_TIME (const uint32_t inValue) {return (inValue & 0xffffU) << 16 ; }

  // Field TGT: TGT
    const uint32_t CAN1_TDT0R_TGT = 1U << 8 ;

  // Field DLC: DLC
    inline uint32_t CAN1_TDT0R_DLC (const uint32_t inValue) {return (inValue & 0xfU) << 0 ; }

//---  Register TDL0R: mailbox data low register
  #define CAN1_TDL0R (* ((volatile uint32_t *) (0x40006400 + 392)))

  // Field DATA3: DATA3
    inline uint32_t CAN1_TDL0R_DATA3 (const uint32_t inValue) {return (inValue & 0xffU) << 24 ; }

  // Field DATA2: DATA2
    inline uint32_t CAN1_TDL0R_DATA2 (const uint32_t inValue) {return (inValue & 0xffU) << 16 ; }

  // Field DATA1: DATA1
    inline uint32_t CAN1_TDL0R_DATA1 (const uint32_t inValue) {return (inValue & 0xffU) << 8 ; }

  // Field DATA0: DATA0
    inline uint32_t CAN1_TDL0R_DATA0 (const uint32_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register TDH0R: mailbox data high register
  #define CAN1_TDH0R (* ((volatile uint32_t *) (0x40006400 + 396)))

  // Field DATA7: DATA7
    inline uint32_t CAN1_TDH0R_DATA7 (const uint32_t inValue) {return (inValue & 0xffU) << 24 ; }

  // Field DATA6: DATA6
    inline uint32_t CAN1_TDH0R_DATA6 (const uint32_t inValue) {return (inValue & 0xffU) << 16 ; }

  // Field DATA5: DATA5
    inline uint32_t CAN1_TDH0R_DATA5 (const uint32_t inValue) {return (inValue & 0xffU) << 8 ; }

  // Field DATA4: DATA4
    inline uint32_t CAN1_TDH0R_DATA4 (const uint32_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register TI1R: mailbox identifier register
  #define CAN1_TI1R (* ((volatile uint32_t *) (0x40006400 + 400)))

  // Field STID: STID
    inline uint32_t CAN1_TI1R_STID (const uint32_t inValue) {return (inValue & 0x7ffU) << 21 ; }

  // Field EXID: EXID
    inline uint32_t CAN1_TI1R_EXID (const uint32_t inValue) {return (inValue & 0x3ffffU) << 3 ; }

  // Field IDE: IDE
    const uint32_t CAN1_TI1R_IDE = 1U << 2 ;

  // Field RTR: RTR
    const uint32_t CAN1_TI1R_RTR = 1U << 1 ;

  // Field TXRQ: TXRQ
    const uint32_t CAN1_TI1R_TXRQ = 1U << 0 ;

//---  Register TDT1R: mailbox data length control and time stamp
          register
  #define CAN1_TDT1R (* ((volatile uint32_t *) (0x40006400 + 404)))

  // Field TIME: TIME
    inline uint32_t CAN1_TDT1R_TIME (const uint32_t inValue) {return (inValue & 0xffffU) << 16 ; }

  // Field TGT: TGT
    const uint32_t CAN1_TDT1R_TGT = 1U << 8 ;

  // Field DLC: DLC
    inline uint32_t CAN1_TDT1R_DLC (const uint32_t inValue) {return (inValue & 0xfU) << 0 ; }

//---  Register TDL1R: mailbox data low register
  #define CAN1_TDL1R (* ((volatile uint32_t *) (0x40006400 + 408)))

  // Field DATA3: DATA3
    inline uint32_t CAN1_TDL1R_DATA3 (const uint32_t inValue) {return (inValue & 0xffU) << 24 ; }

  // Field DATA2: DATA2
    inline uint32_t CAN1_TDL1R_DATA2 (const uint32_t inValue) {return (inValue & 0xffU) << 16 ; }

  // Field DATA1: DATA1
    inline uint32_t CAN1_TDL1R_DATA1 (const uint32_t inValue) {return (inValue & 0xffU) << 8 ; }

  // Field DATA0: DATA0
    inline uint32_t CAN1_TDL1R_DATA0 (const uint32_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register TDH1R: mailbox data high register
  #define CAN1_TDH1R (* ((volatile uint32_t *) (0x40006400 + 412)))

  // Field DATA7: DATA7
    inline uint32_t CAN1_TDH1R_DATA7 (const uint32_t inValue) {return (inValue & 0xffU) << 24 ; }

  // Field DATA6: DATA6
    inline uint32_t CAN1_TDH1R_DATA6 (const uint32_t inValue) {return (inValue & 0xffU) << 16 ; }

  // Field DATA5: DATA5
    inline uint32_t CAN1_TDH1R_DATA5 (const uint32_t inValue) {return (inValue & 0xffU) << 8 ; }

  // Field DATA4: DATA4
    inline uint32_t CAN1_TDH1R_DATA4 (const uint32_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register TI2R: mailbox identifier register
  #define CAN1_TI2R (* ((volatile uint32_t *) (0x40006400 + 416)))

  // Field STID: STID
    inline uint32_t CAN1_TI2R_STID (const uint32_t inValue) {return (inValue & 0x7ffU) << 21 ; }

  // Field EXID: EXID
    inline uint32_t CAN1_TI2R_EXID (const uint32_t inValue) {return (inValue & 0x3ffffU) << 3 ; }

  // Field IDE: IDE
    const uint32_t CAN1_TI2R_IDE = 1U << 2 ;

  // Field RTR: RTR
    const uint32_t CAN1_TI2R_RTR = 1U << 1 ;

  // Field TXRQ: TXRQ
    const uint32_t CAN1_TI2R_TXRQ = 1U << 0 ;

//---  Register TDT2R: mailbox data length control and time stamp
          register
  #define CAN1_TDT2R (* ((volatile uint32_t *) (0x40006400 + 420)))

  // Field TIME: TIME
    inline uint32_t CAN1_TDT2R_TIME (const uint32_t inValue) {return (inValue & 0xffffU) << 16 ; }

  // Field TGT: TGT
    const uint32_t CAN1_TDT2R_TGT = 1U << 8 ;

  // Field DLC: DLC
    inline uint32_t CAN1_TDT2R_DLC (const uint32_t inValue) {return (inValue & 0xfU) << 0 ; }

//---  Register TDL2R: mailbox data low register
  #define CAN1_TDL2R (* ((volatile uint32_t *) (0x40006400 + 424)))

  // Field DATA3: DATA3
    inline uint32_t CAN1_TDL2R_DATA3 (const uint32_t inValue) {return (inValue & 0xffU) << 24 ; }

  // Field DATA2: DATA2
    inline uint32_t CAN1_TDL2R_DATA2 (const uint32_t inValue) {return (inValue & 0xffU) << 16 ; }

  // Field DATA1: DATA1
    inline uint32_t CAN1_TDL2R_DATA1 (const uint32_t inValue) {return (inValue & 0xffU) << 8 ; }

  // Field DATA0: DATA0
    inline uint32_t CAN1_TDL2R_DATA0 (const uint32_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register TDH2R: mailbox data high register
  #define CAN1_TDH2R (* ((volatile uint32_t *) (0x40006400 + 428)))

  // Field DATA7: DATA7
    inline uint32_t CAN1_TDH2R_DATA7 (const uint32_t inValue) {return (inValue & 0xffU) << 24 ; }

  // Field DATA6: DATA6
    inline uint32_t CAN1_TDH2R_DATA6 (const uint32_t inValue) {return (inValue & 0xffU) << 16 ; }

  // Field DATA5: DATA5
    inline uint32_t CAN1_TDH2R_DATA5 (const uint32_t inValue) {return (inValue & 0xffU) << 8 ; }

  // Field DATA4: DATA4
    inline uint32_t CAN1_TDH2R_DATA4 (const uint32_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register RI0R: receive FIFO mailbox identifier
          register
  #define CAN1_RI0R (* ((const volatile uint32_t *) (0x40006400 + 432)))

  // Field STID: STID
    inline uint32_t CAN1_RI0R_STID (const uint32_t inValue) {return (inValue & 0x7ffU) << 21 ; }

  // Field EXID: EXID
    inline uint32_t CAN1_RI0R_EXID (const uint32_t inValue) {return (inValue & 0x3ffffU) << 3 ; }

  // Field IDE: IDE
    const uint32_t CAN1_RI0R_IDE = 1U << 2 ;

  // Field RTR: RTR
    const uint32_t CAN1_RI0R_RTR = 1U << 1 ;

//---  Register RDT0R: mailbox data high register
  #define CAN1_RDT0R (* ((const volatile uint32_t *) (0x40006400 + 436)))

  // Field TIME: TIME
    inline uint32_t CAN1_RDT0R_TIME (const uint32_t inValue) {return (inValue & 0xffffU) << 16 ; }

  // Field FMI: FMI
    inline uint32_t CAN1_RDT0R_FMI (const uint32_t inValue) {return (inValue & 0xffU) << 8 ; }

  // Field DLC: DLC
    inline uint32_t CAN1_RDT0R_DLC (const uint32_t inValue) {return (inValue & 0xfU) << 0 ; }

//---  Register RDL0R: mailbox data high register
  #define CAN1_RDL0R (* ((const volatile uint32_t *) (0x40006400 + 440)))

  // Field DATA3: DATA3
    inline uint32_t CAN1_RDL0R_DATA3 (const uint32_t inValue) {return (inValue & 0xffU) << 24 ; }

  // Field DATA2: DATA2
    inline uint32_t CAN1_RDL0R_DATA2 (const uint32_t inValue) {return (inValue & 0xffU) << 16 ; }

  // Field DATA1: DATA1
    inline uint32_t CAN1_RDL0R_DATA1 (const uint32_t inValue) {return (inValue & 0xffU) << 8 ; }

  // Field DATA0: DATA0
    inline uint32_t CAN1_RDL0R_DATA0 (const uint32_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register RDH0R: receive FIFO mailbox data high
          register
  #define CAN1_RDH0R (* ((const volatile uint32_t *) (0x40006400 + 444)))

  // Field DATA7: DATA7
    inline uint32_t CAN1_RDH0R_DATA7 (const uint32_t inValue) {return (inValue & 0xffU) << 24 ; }

  // Field DATA6: DATA6
    inline uint32_t CAN1_RDH0R_DATA6 (const uint32_t inValue) {return (inValue & 0xffU) << 16 ; }

  // Field DATA5: DATA5
    inline uint32_t CAN1_RDH0R_DATA5 (const uint32_t inValue) {return (inValue & 0xffU) << 8 ; }

  // Field DATA4: DATA4
    inline uint32_t CAN1_RDH0R_DATA4 (const uint32_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register RI1R: mailbox data high register
  #define CAN1_RI1R (* ((const volatile uint32_t *) (0x40006400 + 448)))

  // Field STID: STID
    inline uint32_t CAN1_RI1R_STID (const uint32_t inValue) {return (inValue & 0x7ffU) << 21 ; }

  // Field EXID: EXID
    inline uint32_t CAN1_RI1R_EXID (const uint32_t inValue) {return (inValue & 0x3ffffU) << 3 ; }

  // Field IDE: IDE
    const uint32_t CAN1_RI1R_IDE = 1U << 2 ;

  // Field RTR: RTR
    const uint32_t CAN1_RI1R_RTR = 1U << 1 ;

//---  Register RDT1R: mailbox data high register
  #define CAN1_RDT1R (* ((const volatile uint32_t *) (0x40006400 + 452)))

  // Field TIME: TIME
    inline uint32_t CAN1_RDT1R_TIME (const uint32_t inValue) {return (inValue & 0xffffU) << 16 ; }

  // Field FMI: FMI
    inline uint32_t CAN1_RDT1R_FMI (const uint32_t inValue) {return (inValue & 0xffU) << 8 ; }

  // Field DLC: DLC
    inline uint32_t CAN1_RDT1R_DLC (const uint32_t inValue) {return (inValue & 0xfU) << 0 ; }

//---  Register RDL1R: mailbox data high register
  #define CAN1_RDL1R (* ((const volatile uint32_t *) (0x40006400 + 456)))

  // Field DATA3: DATA3
    inline uint32_t CAN1_RDL1R_DATA3 (const uint32_t inValue) {return (inValue & 0xffU) << 24 ; }

  // Field DATA2: DATA2
    inline uint32_t CAN1_RDL1R_DATA2 (const uint32_t inValue) {return (inValue & 0xffU) << 16 ; }

  // Field DATA1: DATA1
    inline uint32_t CAN1_RDL1R_DATA1 (const uint32_t inValue) {return (inValue & 0xffU) << 8 ; }

  // Field DATA0: DATA0
    inline uint32_t CAN1_RDL1R_DATA0 (const uint32_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register RDH1R: mailbox data high register
  #define CAN1_RDH1R (* ((const volatile uint32_t *) (0x40006400 + 460)))

  // Field DATA7: DATA7
    inline uint32_t CAN1_RDH1R_DATA7 (const uint32_t inValue) {return (inValue & 0xffU) << 24 ; }

  // Field DATA6: DATA6
    inline uint32_t CAN1_RDH1R_DATA6 (const uint32_t inValue) {return (inValue & 0xffU) << 16 ; }

  // Field DATA5: DATA5
    inline uint32_t CAN1_RDH1R_DATA5 (const uint32_t inValue) {return (inValue & 0xffU) << 8 ; }

  // Field DATA4: DATA4
    inline uint32_t CAN1_RDH1R_DATA4 (const uint32_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register FMR: filter master register
  #define CAN1_FMR (* ((volatile uint32_t *) (0x40006400 + 512)))

  // Field FINIT: Filter initialization mode
    const uint32_t CAN1_FMR_FINIT = 1U << 0 ;

//---  Register FM1R: filter mode register
  #define CAN1_FM1R (* ((volatile uint32_t *) (0x40006400 + 516)))

  // Field FBM0: Filter mode
    const uint32_t CAN1_FM1R_FBM0 = 1U << 0 ;

  // Field FBM1: Filter mode
    const uint32_t CAN1_FM1R_FBM1 = 1U << 1 ;

  // Field FBM2: Filter mode
    const uint32_t CAN1_FM1R_FBM2 = 1U << 2 ;

  // Field FBM3: Filter mode
    const uint32_t CAN1_FM1R_FBM3 = 1U << 3 ;

  // Field FBM4: Filter mode
    const uint32_t CAN1_FM1R_FBM4 = 1U << 4 ;

  // Field FBM5: Filter mode
    const uint32_t CAN1_FM1R_FBM5 = 1U << 5 ;

  // Field FBM6: Filter mode
    const uint32_t CAN1_FM1R_FBM6 = 1U << 6 ;

  // Field FBM7: Filter mode
    const uint32_t CAN1_FM1R_FBM7 = 1U << 7 ;

  // Field FBM8: Filter mode
    const uint32_t CAN1_FM1R_FBM8 = 1U << 8 ;

  // Field FBM9: Filter mode
    const uint32_t CAN1_FM1R_FBM9 = 1U << 9 ;

  // Field FBM10: Filter mode
    const uint32_t CAN1_FM1R_FBM10 = 1U << 10 ;

  // Field FBM11: Filter mode
    const uint32_t CAN1_FM1R_FBM11 = 1U << 11 ;

  // Field FBM12: Filter mode
    const uint32_t CAN1_FM1R_FBM12 = 1U << 12 ;

  // Field FBM13: Filter mode
    const uint32_t CAN1_FM1R_FBM13 = 1U << 13 ;

//---  Register FS1R: filter scale register
  #define CAN1_FS1R (* ((volatile uint32_t *) (0x40006400 + 524)))

  // Field FSC0: Filter scale configuration
    const uint32_t CAN1_FS1R_FSC0 = 1U << 0 ;

  // Field FSC1: Filter scale configuration
    const uint32_t CAN1_FS1R_FSC1 = 1U << 1 ;

  // Field FSC2: Filter scale configuration
    const uint32_t CAN1_FS1R_FSC2 = 1U << 2 ;

  // Field FSC3: Filter scale configuration
    const uint32_t CAN1_FS1R_FSC3 = 1U << 3 ;

  // Field FSC4: Filter scale configuration
    const uint32_t CAN1_FS1R_FSC4 = 1U << 4 ;

  // Field FSC5: Filter scale configuration
    const uint32_t CAN1_FS1R_FSC5 = 1U << 5 ;

  // Field FSC6: Filter scale configuration
    const uint32_t CAN1_FS1R_FSC6 = 1U << 6 ;

  // Field FSC7: Filter scale configuration
    const uint32_t CAN1_FS1R_FSC7 = 1U << 7 ;

  // Field FSC8: Filter scale configuration
    const uint32_t CAN1_FS1R_FSC8 = 1U << 8 ;

  // Field FSC9: Filter scale configuration
    const uint32_t CAN1_FS1R_FSC9 = 1U << 9 ;

  // Field FSC10: Filter scale configuration
    const uint32_t CAN1_FS1R_FSC10 = 1U << 10 ;

  // Field FSC11: Filter scale configuration
    const uint32_t CAN1_FS1R_FSC11 = 1U << 11 ;

  // Field FSC12: Filter scale configuration
    const uint32_t CAN1_FS1R_FSC12 = 1U << 12 ;

  // Field FSC13: Filter scale configuration
    const uint32_t CAN1_FS1R_FSC13 = 1U << 13 ;

//---  Register FFA1R: filter FIFO assignment
          register
  #define CAN1_FFA1R (* ((volatile uint32_t *) (0x40006400 + 532)))

  // Field FFA0: Filter FIFO assignment for filter 0
    const uint32_t CAN1_FFA1R_FFA0 = 1U << 0 ;

  // Field FFA1: Filter FIFO assignment for filter 1
    const uint32_t CAN1_FFA1R_FFA1 = 1U << 1 ;

  // Field FFA2: Filter FIFO assignment for filter 2
    const uint32_t CAN1_FFA1R_FFA2 = 1U << 2 ;

  // Field FFA3: Filter FIFO assignment for filter 3
    const uint32_t CAN1_FFA1R_FFA3 = 1U << 3 ;

  // Field FFA4: Filter FIFO assignment for filter 4
    const uint32_t CAN1_FFA1R_FFA4 = 1U << 4 ;

  // Field FFA5: Filter FIFO assignment for filter 5
    const uint32_t CAN1_FFA1R_FFA5 = 1U << 5 ;

  // Field FFA6: Filter FIFO assignment for filter 6
    const uint32_t CAN1_FFA1R_FFA6 = 1U << 6 ;

  // Field FFA7: Filter FIFO assignment for filter 7
    const uint32_t CAN1_FFA1R_FFA7 = 1U << 7 ;

  // Field FFA8: Filter FIFO assignment for filter 8
    const uint32_t CAN1_FFA1R_FFA8 = 1U << 8 ;

  // Field FFA9: Filter FIFO assignment for filter 9
    const uint32_t CAN1_FFA1R_FFA9 = 1U << 9 ;

  // Field FFA10: Filter FIFO assignment for filter 10
    const uint32_t CAN1_FFA1R_FFA10 = 1U << 10 ;

  // Field FFA11: Filter FIFO assignment for filter 11
    const uint32_t CAN1_FFA1R_FFA11 = 1U << 11 ;

  // Field FFA12: Filter FIFO assignment for filter 12
    const uint32_t CAN1_FFA1R_FFA12 = 1U << 12 ;

  // Field FFA13: Filter FIFO assignment for filter 13
    const uint32_t CAN1_FFA1R_FFA13 = 1U << 13 ;

//---  Register FA1R: filter activation register
  #define CAN1_FA1R (* ((volatile uint32_t *) (0x40006400 + 540)))

  // Field FACT0: Filter active
    const uint32_t CAN1_FA1R_FACT0 = 1U << 0 ;

  // Field FACT1: Filter active
    const uint32_t CAN1_FA1R_FACT1 = 1U << 1 ;

  // Field FACT2: Filter active
    const uint32_t CAN1_FA1R_FACT2 = 1U << 2 ;

  // Field FACT3: Filter active
    const uint32_t CAN1_FA1R_FACT3 = 1U << 3 ;

  // Field FACT4: Filter active
    const uint32_t CAN1_FA1R_FACT4 = 1U << 4 ;

  // Field FACT5: Filter active
    const uint32_t CAN1_FA1R_FACT5 = 1U << 5 ;

  // Field FACT6: Filter active
    const uint32_t CAN1_FA1R_FACT6 = 1U << 6 ;

  // Field FACT7: Filter active
    const uint32_t CAN1_FA1R_FACT7 = 1U << 7 ;

  // Field FACT8: Filter active
    const uint32_t CAN1_FA1R_FACT8 = 1U << 8 ;

  // Field FACT9: Filter active
    const uint32_t CAN1_FA1R_FACT9 = 1U << 9 ;

  // Field FACT10: Filter active
    const uint32_t CAN1_FA1R_FACT10 = 1U << 10 ;

  // Field FACT11: Filter active
    const uint32_t CAN1_FA1R_FACT11 = 1U << 11 ;

  // Field FACT12: Filter active
    const uint32_t CAN1_FA1R_FACT12 = 1U << 12 ;

  // Field FACT13: Filter active
    const uint32_t CAN1_FA1R_FACT13 = 1U << 13 ;

//---  Register F0R1: Filter bank 0 register 1
  #define CAN1_F0R1 (* ((volatile uint32_t *) (0x40006400 + 576)))

  // Field FB0: Filter bits
    const uint32_t CAN1_F0R1_FB0 = 1U << 0 ;

  // Field FB1: Filter bits
    const uint32_t CAN1_F0R1_FB1 = 1U << 1 ;

  // Field FB2: Filter bits
    const uint32_t CAN1_F0R1_FB2 = 1U << 2 ;

  // Field FB3: Filter bits
    const uint32_t CAN1_F0R1_FB3 = 1U << 3 ;

  // Field FB4: Filter bits
    const uint32_t CAN1_F0R1_FB4 = 1U << 4 ;

  // Field FB5: Filter bits
    const uint32_t CAN1_F0R1_FB5 = 1U << 5 ;

  // Field FB6: Filter bits
    const uint32_t CAN1_F0R1_FB6 = 1U << 6 ;

  // Field FB7: Filter bits
    const uint32_t CAN1_F0R1_FB7 = 1U << 7 ;

  // Field FB8: Filter bits
    const uint32_t CAN1_F0R1_FB8 = 1U << 8 ;

  // Field FB9: Filter bits
    const uint32_t CAN1_F0R1_FB9 = 1U << 9 ;

  // Field FB10: Filter bits
    const uint32_t CAN1_F0R1_FB10 = 1U << 10 ;

  // Field FB11: Filter bits
    const uint32_t CAN1_F0R1_FB11 = 1U << 11 ;

  // Field FB12: Filter bits
    const uint32_t CAN1_F0R1_FB12 = 1U << 12 ;

  // Field FB13: Filter bits
    const uint32_t CAN1_F0R1_FB13 = 1U << 13 ;

  // Field FB14: Filter bits
    const uint32_t CAN1_F0R1_FB14 = 1U << 14 ;

  // Field FB15: Filter bits
    const uint32_t CAN1_F0R1_FB15 = 1U << 15 ;

  // Field FB16: Filter bits
    const uint32_t CAN1_F0R1_FB16 = 1U << 16 ;

  // Field FB17: Filter bits
    const uint32_t CAN1_F0R1_FB17 = 1U << 17 ;

  // Field FB18: Filter bits
    const uint32_t CAN1_F0R1_FB18 = 1U << 18 ;

  // Field FB19: Filter bits
    const uint32_t CAN1_F0R1_FB19 = 1U << 19 ;

  // Field FB20: Filter bits
    const uint32_t CAN1_F0R1_FB20 = 1U << 20 ;

  // Field FB21: Filter bits
    const uint32_t CAN1_F0R1_FB21 = 1U << 21 ;

  // Field FB22: Filter bits
    const uint32_t CAN1_F0R1_FB22 = 1U << 22 ;

  // Field FB23: Filter bits
    const uint32_t CAN1_F0R1_FB23 = 1U << 23 ;

  // Field FB24: Filter bits
    const uint32_t CAN1_F0R1_FB24 = 1U << 24 ;

  // Field FB25: Filter bits
    const uint32_t CAN1_F0R1_FB25 = 1U << 25 ;

  // Field FB26: Filter bits
    const uint32_t CAN1_F0R1_FB26 = 1U << 26 ;

  // Field FB27: Filter bits
    const uint32_t CAN1_F0R1_FB27 = 1U << 27 ;

  // Field FB28: Filter bits
    const uint32_t CAN1_F0R1_FB28 = 1U << 28 ;

  // Field FB29: Filter bits
    const uint32_t CAN1_F0R1_FB29 = 1U << 29 ;

  // Field FB30: Filter bits
    const uint32_t CAN1_F0R1_FB30 = 1U << 30 ;

  // Field FB31: Filter bits
    const uint32_t CAN1_F0R1_FB31 = 1U << 31 ;

//---  Register F0R2: Filter bank 0 register 2
  #define CAN1_F0R2 (* ((volatile uint32_t *) (0x40006400 + 580)))

  // Field FB0: Filter bits
    const uint32_t CAN1_F0R2_FB0 = 1U << 0 ;

  // Field FB1: Filter bits
    const uint32_t CAN1_F0R2_FB1 = 1U << 1 ;

  // Field FB2: Filter bits
    const uint32_t CAN1_F0R2_FB2 = 1U << 2 ;

  // Field FB3: Filter bits
    const uint32_t CAN1_F0R2_FB3 = 1U << 3 ;

  // Field FB4: Filter bits
    const uint32_t CAN1_F0R2_FB4 = 1U << 4 ;

  // Field FB5: Filter bits
    const uint32_t CAN1_F0R2_FB5 = 1U << 5 ;

  // Field FB6: Filter bits
    const uint32_t CAN1_F0R2_FB6 = 1U << 6 ;

  // Field FB7: Filter bits
    const uint32_t CAN1_F0R2_FB7 = 1U << 7 ;

  // Field FB8: Filter bits
    const uint32_t CAN1_F0R2_FB8 = 1U << 8 ;

  // Field FB9: Filter bits
    const uint32_t CAN1_F0R2_FB9 = 1U << 9 ;

  // Field FB10: Filter bits
    const uint32_t CAN1_F0R2_FB10 = 1U << 10 ;

  // Field FB11: Filter bits
    const uint32_t CAN1_F0R2_FB11 = 1U << 11 ;

  // Field FB12: Filter bits
    const uint32_t CAN1_F0R2_FB12 = 1U << 12 ;

  // Field FB13: Filter bits
    const uint32_t CAN1_F0R2_FB13 = 1U << 13 ;

  // Field FB14: Filter bits
    const uint32_t CAN1_F0R2_FB14 = 1U << 14 ;

  // Field FB15: Filter bits
    const uint32_t CAN1_F0R2_FB15 = 1U << 15 ;

  // Field FB16: Filter bits
    const uint32_t CAN1_F0R2_FB16 = 1U << 16 ;

  // Field FB17: Filter bits
    const uint32_t CAN1_F0R2_FB17 = 1U << 17 ;

  // Field FB18: Filter bits
    const uint32_t CAN1_F0R2_FB18 = 1U << 18 ;

  // Field FB19: Filter bits
    const uint32_t CAN1_F0R2_FB19 = 1U << 19 ;

  // Field FB20: Filter bits
    const uint32_t CAN1_F0R2_FB20 = 1U << 20 ;

  // Field FB21: Filter bits
    const uint32_t CAN1_F0R2_FB21 = 1U << 21 ;

  // Field FB22: Filter bits
    const uint32_t CAN1_F0R2_FB22 = 1U << 22 ;

  // Field FB23: Filter bits
    const uint32_t CAN1_F0R2_FB23 = 1U << 23 ;

  // Field FB24: Filter bits
    const uint32_t CAN1_F0R2_FB24 = 1U << 24 ;

  // Field FB25: Filter bits
    const uint32_t CAN1_F0R2_FB25 = 1U << 25 ;

  // Field FB26: Filter bits
    const uint32_t CAN1_F0R2_FB26 = 1U << 26 ;

  // Field FB27: Filter bits
    const uint32_t CAN1_F0R2_FB27 = 1U << 27 ;

  // Field FB28: Filter bits
    const uint32_t CAN1_F0R2_FB28 = 1U << 28 ;

  // Field FB29: Filter bits
    const uint32_t CAN1_F0R2_FB29 = 1U << 29 ;

  // Field FB30: Filter bits
    const uint32_t CAN1_F0R2_FB30 = 1U << 30 ;

  // Field FB31: Filter bits
    const uint32_t CAN1_F0R2_FB31 = 1U << 31 ;

//---  Register F1R1: Filter bank 1 register 1
  #define CAN1_F1R1 (* ((volatile uint32_t *) (0x40006400 + 584)))

  // Field FB0: Filter bits
    const uint32_t CAN1_F1R1_FB0 = 1U << 0 ;

  // Field FB1: Filter bits
    const uint32_t CAN1_F1R1_FB1 = 1U << 1 ;

  // Field FB2: Filter bits
    const uint32_t CAN1_F1R1_FB2 = 1U << 2 ;

  // Field FB3: Filter bits
    const uint32_t CAN1_F1R1_FB3 = 1U << 3 ;

  // Field FB4: Filter bits
    const uint32_t CAN1_F1R1_FB4 = 1U << 4 ;

  // Field FB5: Filter bits
    const uint32_t CAN1_F1R1_FB5 = 1U << 5 ;

  // Field FB6: Filter bits
    const uint32_t CAN1_F1R1_FB6 = 1U << 6 ;

  // Field FB7: Filter bits
    const uint32_t CAN1_F1R1_FB7 = 1U << 7 ;

  // Field FB8: Filter bits
    const uint32_t CAN1_F1R1_FB8 = 1U << 8 ;

  // Field FB9: Filter bits
    const uint32_t CAN1_F1R1_FB9 = 1U << 9 ;

  // Field FB10: Filter bits
    const uint32_t CAN1_F1R1_FB10 = 1U << 10 ;

  // Field FB11: Filter bits
    const uint32_t CAN1_F1R1_FB11 = 1U << 11 ;

  // Field FB12: Filter bits
    const uint32_t CAN1_F1R1_FB12 = 1U << 12 ;

  // Field FB13: Filter bits
    const uint32_t CAN1_F1R1_FB13 = 1U << 13 ;

  // Field FB14: Filter bits
    const uint32_t CAN1_F1R1_FB14 = 1U << 14 ;

  // Field FB15: Filter bits
    const uint32_t CAN1_F1R1_FB15 = 1U << 15 ;

  // Field FB16: Filter bits
    const uint32_t CAN1_F1R1_FB16 = 1U << 16 ;

  // Field FB17: Filter bits
    const uint32_t CAN1_F1R1_FB17 = 1U << 17 ;

  // Field FB18: Filter bits
    const uint32_t CAN1_F1R1_FB18 = 1U << 18 ;

  // Field FB19: Filter bits
    const uint32_t CAN1_F1R1_FB19 = 1U << 19 ;

  // Field FB20: Filter bits
    const uint32_t CAN1_F1R1_FB20 = 1U << 20 ;

  // Field FB21: Filter bits
    const uint32_t CAN1_F1R1_FB21 = 1U << 21 ;

  // Field FB22: Filter bits
    const uint32_t CAN1_F1R1_FB22 = 1U << 22 ;

  // Field FB23: Filter bits
    const uint32_t CAN1_F1R1_FB23 = 1U << 23 ;

  // Field FB24: Filter bits
    const uint32_t CAN1_F1R1_FB24 = 1U << 24 ;

  // Field FB25: Filter bits
    const uint32_t CAN1_F1R1_FB25 = 1U << 25 ;

  // Field FB26: Filter bits
    const uint32_t CAN1_F1R1_FB26 = 1U << 26 ;

  // Field FB27: Filter bits
    const uint32_t CAN1_F1R1_FB27 = 1U << 27 ;

  // Field FB28: Filter bits
    const uint32_t CAN1_F1R1_FB28 = 1U << 28 ;

  // Field FB29: Filter bits
    const uint32_t CAN1_F1R1_FB29 = 1U << 29 ;

  // Field FB30: Filter bits
    const uint32_t CAN1_F1R1_FB30 = 1U << 30 ;

  // Field FB31: Filter bits
    const uint32_t CAN1_F1R1_FB31 = 1U << 31 ;

//---  Register F1R2: Filter bank 1 register 2
  #define CAN1_F1R2 (* ((volatile uint32_t *) (0x40006400 + 588)))

  // Field FB0: Filter bits
    const uint32_t CAN1_F1R2_FB0 = 1U << 0 ;

  // Field FB1: Filter bits
    const uint32_t CAN1_F1R2_FB1 = 1U << 1 ;

  // Field FB2: Filter bits
    const uint32_t CAN1_F1R2_FB2 = 1U << 2 ;

  // Field FB3: Filter bits
    const uint32_t CAN1_F1R2_FB3 = 1U << 3 ;

  // Field FB4: Filter bits
    const uint32_t CAN1_F1R2_FB4 = 1U << 4 ;

  // Field FB5: Filter bits
    const uint32_t CAN1_F1R2_FB5 = 1U << 5 ;

  // Field FB6: Filter bits
    const uint32_t CAN1_F1R2_FB6 = 1U << 6 ;

  // Field FB7: Filter bits
    const uint32_t CAN1_F1R2_FB7 = 1U << 7 ;

  // Field FB8: Filter bits
    const uint32_t CAN1_F1R2_FB8 = 1U << 8 ;

  // Field FB9: Filter bits
    const uint32_t CAN1_F1R2_FB9 = 1U << 9 ;

  // Field FB10: Filter bits
    const uint32_t CAN1_F1R2_FB10 = 1U << 10 ;

  // Field FB11: Filter bits
    const uint32_t CAN1_F1R2_FB11 = 1U << 11 ;

  // Field FB12: Filter bits
    const uint32_t CAN1_F1R2_FB12 = 1U << 12 ;

  // Field FB13: Filter bits
    const uint32_t CAN1_F1R2_FB13 = 1U << 13 ;

  // Field FB14: Filter bits
    const uint32_t CAN1_F1R2_FB14 = 1U << 14 ;

  // Field FB15: Filter bits
    const uint32_t CAN1_F1R2_FB15 = 1U << 15 ;

  // Field FB16: Filter bits
    const uint32_t CAN1_F1R2_FB16 = 1U << 16 ;

  // Field FB17: Filter bits
    const uint32_t CAN1_F1R2_FB17 = 1U << 17 ;

  // Field FB18: Filter bits
    const uint32_t CAN1_F1R2_FB18 = 1U << 18 ;

  // Field FB19: Filter bits
    const uint32_t CAN1_F1R2_FB19 = 1U << 19 ;

  // Field FB20: Filter bits
    const uint32_t CAN1_F1R2_FB20 = 1U << 20 ;

  // Field FB21: Filter bits
    const uint32_t CAN1_F1R2_FB21 = 1U << 21 ;

  // Field FB22: Filter bits
    const uint32_t CAN1_F1R2_FB22 = 1U << 22 ;

  // Field FB23: Filter bits
    const uint32_t CAN1_F1R2_FB23 = 1U << 23 ;

  // Field FB24: Filter bits
    const uint32_t CAN1_F1R2_FB24 = 1U << 24 ;

  // Field FB25: Filter bits
    const uint32_t CAN1_F1R2_FB25 = 1U << 25 ;

  // Field FB26: Filter bits
    const uint32_t CAN1_F1R2_FB26 = 1U << 26 ;

  // Field FB27: Filter bits
    const uint32_t CAN1_F1R2_FB27 = 1U << 27 ;

  // Field FB28: Filter bits
    const uint32_t CAN1_F1R2_FB28 = 1U << 28 ;

  // Field FB29: Filter bits
    const uint32_t CAN1_F1R2_FB29 = 1U << 29 ;

  // Field FB30: Filter bits
    const uint32_t CAN1_F1R2_FB30 = 1U << 30 ;

  // Field FB31: Filter bits
    const uint32_t CAN1_F1R2_FB31 = 1U << 31 ;

//---  Register F2R1: Filter bank 2 register 1
  #define CAN1_F2R1 (* ((volatile uint32_t *) (0x40006400 + 592)))

  // Field FB0: Filter bits
    const uint32_t CAN1_F2R1_FB0 = 1U << 0 ;

  // Field FB1: Filter bits
    const uint32_t CAN1_F2R1_FB1 = 1U << 1 ;

  // Field FB2: Filter bits
    const uint32_t CAN1_F2R1_FB2 = 1U << 2 ;

  // Field FB3: Filter bits
    const uint32_t CAN1_F2R1_FB3 = 1U << 3 ;

  // Field FB4: Filter bits
    const uint32_t CAN1_F2R1_FB4 = 1U << 4 ;

  // Field FB5: Filter bits
    const uint32_t CAN1_F2R1_FB5 = 1U << 5 ;

  // Field FB6: Filter bits
    const uint32_t CAN1_F2R1_FB6 = 1U << 6 ;

  // Field FB7: Filter bits
    const uint32_t CAN1_F2R1_FB7 = 1U << 7 ;

  // Field FB8: Filter bits
    const uint32_t CAN1_F2R1_FB8 = 1U << 8 ;

  // Field FB9: Filter bits
    const uint32_t CAN1_F2R1_FB9 = 1U << 9 ;

  // Field FB10: Filter bits
    const uint32_t CAN1_F2R1_FB10 = 1U << 10 ;

  // Field FB11: Filter bits
    const uint32_t CAN1_F2R1_FB11 = 1U << 11 ;

  // Field FB12: Filter bits
    const uint32_t CAN1_F2R1_FB12 = 1U << 12 ;

  // Field FB13: Filter bits
    const uint32_t CAN1_F2R1_FB13 = 1U << 13 ;

  // Field FB14: Filter bits
    const uint32_t CAN1_F2R1_FB14 = 1U << 14 ;

  // Field FB15: Filter bits
    const uint32_t CAN1_F2R1_FB15 = 1U << 15 ;

  // Field FB16: Filter bits
    const uint32_t CAN1_F2R1_FB16 = 1U << 16 ;

  // Field FB17: Filter bits
    const uint32_t CAN1_F2R1_FB17 = 1U << 17 ;

  // Field FB18: Filter bits
    const uint32_t CAN1_F2R1_FB18 = 1U << 18 ;

  // Field FB19: Filter bits
    const uint32_t CAN1_F2R1_FB19 = 1U << 19 ;

  // Field FB20: Filter bits
    const uint32_t CAN1_F2R1_FB20 = 1U << 20 ;

  // Field FB21: Filter bits
    const uint32_t CAN1_F2R1_FB21 = 1U << 21 ;

  // Field FB22: Filter bits
    const uint32_t CAN1_F2R1_FB22 = 1U << 22 ;

  // Field FB23: Filter bits
    const uint32_t CAN1_F2R1_FB23 = 1U << 23 ;

  // Field FB24: Filter bits
    const uint32_t CAN1_F2R1_FB24 = 1U << 24 ;

  // Field FB25: Filter bits
    const uint32_t CAN1_F2R1_FB25 = 1U << 25 ;

  // Field FB26: Filter bits
    const uint32_t CAN1_F2R1_FB26 = 1U << 26 ;

  // Field FB27: Filter bits
    const uint32_t CAN1_F2R1_FB27 = 1U << 27 ;

  // Field FB28: Filter bits
    const uint32_t CAN1_F2R1_FB28 = 1U << 28 ;

  // Field FB29: Filter bits
    const uint32_t CAN1_F2R1_FB29 = 1U << 29 ;

  // Field FB30: Filter bits
    const uint32_t CAN1_F2R1_FB30 = 1U << 30 ;

  // Field FB31: Filter bits
    const uint32_t CAN1_F2R1_FB31 = 1U << 31 ;

//---  Register F2R2: Filter bank 2 register 2
  #define CAN1_F2R2 (* ((volatile uint32_t *) (0x40006400 + 596)))

  // Field FB0: Filter bits
    const uint32_t CAN1_F2R2_FB0 = 1U << 0 ;

  // Field FB1: Filter bits
    const uint32_t CAN1_F2R2_FB1 = 1U << 1 ;

  // Field FB2: Filter bits
    const uint32_t CAN1_F2R2_FB2 = 1U << 2 ;

  // Field FB3: Filter bits
    const uint32_t CAN1_F2R2_FB3 = 1U << 3 ;

  // Field FB4: Filter bits
    const uint32_t CAN1_F2R2_FB4 = 1U << 4 ;

  // Field FB5: Filter bits
    const uint32_t CAN1_F2R2_FB5 = 1U << 5 ;

  // Field FB6: Filter bits
    const uint32_t CAN1_F2R2_FB6 = 1U << 6 ;

  // Field FB7: Filter bits
    const uint32_t CAN1_F2R2_FB7 = 1U << 7 ;

  // Field FB8: Filter bits
    const uint32_t CAN1_F2R2_FB8 = 1U << 8 ;

  // Field FB9: Filter bits
    const uint32_t CAN1_F2R2_FB9 = 1U << 9 ;

  // Field FB10: Filter bits
    const uint32_t CAN1_F2R2_FB10 = 1U << 10 ;

  // Field FB11: Filter bits
    const uint32_t CAN1_F2R2_FB11 = 1U << 11 ;

  // Field FB12: Filter bits
    const uint32_t CAN1_F2R2_FB12 = 1U << 12 ;

  // Field FB13: Filter bits
    const uint32_t CAN1_F2R2_FB13 = 1U << 13 ;

  // Field FB14: Filter bits
    const uint32_t CAN1_F2R2_FB14 = 1U << 14 ;

  // Field FB15: Filter bits
    const uint32_t CAN1_F2R2_FB15 = 1U << 15 ;

  // Field FB16: Filter bits
    const uint32_t CAN1_F2R2_FB16 = 1U << 16 ;

  // Field FB17: Filter bits
    const uint32_t CAN1_F2R2_FB17 = 1U << 17 ;

  // Field FB18: Filter bits
    const uint32_t CAN1_F2R2_FB18 = 1U << 18 ;

  // Field FB19: Filter bits
    const uint32_t CAN1_F2R2_FB19 = 1U << 19 ;

  // Field FB20: Filter bits
    const uint32_t CAN1_F2R2_FB20 = 1U << 20 ;

  // Field FB21: Filter bits
    const uint32_t CAN1_F2R2_FB21 = 1U << 21 ;

  // Field FB22: Filter bits
    const uint32_t CAN1_F2R2_FB22 = 1U << 22 ;

  // Field FB23: Filter bits
    const uint32_t CAN1_F2R2_FB23 = 1U << 23 ;

  // Field FB24: Filter bits
    const uint32_t CAN1_F2R2_FB24 = 1U << 24 ;

  // Field FB25: Filter bits
    const uint32_t CAN1_F2R2_FB25 = 1U << 25 ;

  // Field FB26: Filter bits
    const uint32_t CAN1_F2R2_FB26 = 1U << 26 ;

  // Field FB27: Filter bits
    const uint32_t CAN1_F2R2_FB27 = 1U << 27 ;

  // Field FB28: Filter bits
    const uint32_t CAN1_F2R2_FB28 = 1U << 28 ;

  // Field FB29: Filter bits
    const uint32_t CAN1_F2R2_FB29 = 1U << 29 ;

  // Field FB30: Filter bits
    const uint32_t CAN1_F2R2_FB30 = 1U << 30 ;

  // Field FB31: Filter bits
    const uint32_t CAN1_F2R2_FB31 = 1U << 31 ;

//---  Register F3R1: Filter bank 3 register 1
  #define CAN1_F3R1 (* ((volatile uint32_t *) (0x40006400 + 600)))

  // Field FB0: Filter bits
    const uint32_t CAN1_F3R1_FB0 = 1U << 0 ;

  // Field FB1: Filter bits
    const uint32_t CAN1_F3R1_FB1 = 1U << 1 ;

  // Field FB2: Filter bits
    const uint32_t CAN1_F3R1_FB2 = 1U << 2 ;

  // Field FB3: Filter bits
    const uint32_t CAN1_F3R1_FB3 = 1U << 3 ;

  // Field FB4: Filter bits
    const uint32_t CAN1_F3R1_FB4 = 1U << 4 ;

  // Field FB5: Filter bits
    const uint32_t CAN1_F3R1_FB5 = 1U << 5 ;

  // Field FB6: Filter bits
    const uint32_t CAN1_F3R1_FB6 = 1U << 6 ;

  // Field FB7: Filter bits
    const uint32_t CAN1_F3R1_FB7 = 1U << 7 ;

  // Field FB8: Filter bits
    const uint32_t CAN1_F3R1_FB8 = 1U << 8 ;

  // Field FB9: Filter bits
    const uint32_t CAN1_F3R1_FB9 = 1U << 9 ;

  // Field FB10: Filter bits
    const uint32_t CAN1_F3R1_FB10 = 1U << 10 ;

  // Field FB11: Filter bits
    const uint32_t CAN1_F3R1_FB11 = 1U << 11 ;

  // Field FB12: Filter bits
    const uint32_t CAN1_F3R1_FB12 = 1U << 12 ;

  // Field FB13: Filter bits
    const uint32_t CAN1_F3R1_FB13 = 1U << 13 ;

  // Field FB14: Filter bits
    const uint32_t CAN1_F3R1_FB14 = 1U << 14 ;

  // Field FB15: Filter bits
    const uint32_t CAN1_F3R1_FB15 = 1U << 15 ;

  // Field FB16: Filter bits
    const uint32_t CAN1_F3R1_FB16 = 1U << 16 ;

  // Field FB17: Filter bits
    const uint32_t CAN1_F3R1_FB17 = 1U << 17 ;

  // Field FB18: Filter bits
    const uint32_t CAN1_F3R1_FB18 = 1U << 18 ;

  // Field FB19: Filter bits
    const uint32_t CAN1_F3R1_FB19 = 1U << 19 ;

  // Field FB20: Filter bits
    const uint32_t CAN1_F3R1_FB20 = 1U << 20 ;

  // Field FB21: Filter bits
    const uint32_t CAN1_F3R1_FB21 = 1U << 21 ;

  // Field FB22: Filter bits
    const uint32_t CAN1_F3R1_FB22 = 1U << 22 ;

  // Field FB23: Filter bits
    const uint32_t CAN1_F3R1_FB23 = 1U << 23 ;

  // Field FB24: Filter bits
    const uint32_t CAN1_F3R1_FB24 = 1U << 24 ;

  // Field FB25: Filter bits
    const uint32_t CAN1_F3R1_FB25 = 1U << 25 ;

  // Field FB26: Filter bits
    const uint32_t CAN1_F3R1_FB26 = 1U << 26 ;

  // Field FB27: Filter bits
    const uint32_t CAN1_F3R1_FB27 = 1U << 27 ;

  // Field FB28: Filter bits
    const uint32_t CAN1_F3R1_FB28 = 1U << 28 ;

  // Field FB29: Filter bits
    const uint32_t CAN1_F3R1_FB29 = 1U << 29 ;

  // Field FB30: Filter bits
    const uint32_t CAN1_F3R1_FB30 = 1U << 30 ;

  // Field FB31: Filter bits
    const uint32_t CAN1_F3R1_FB31 = 1U << 31 ;

//---  Register F3R2: Filter bank 3 register 2
  #define CAN1_F3R2 (* ((volatile uint32_t *) (0x40006400 + 604)))

  // Field FB0: Filter bits
    const uint32_t CAN1_F3R2_FB0 = 1U << 0 ;

  // Field FB1: Filter bits
    const uint32_t CAN1_F3R2_FB1 = 1U << 1 ;

  // Field FB2: Filter bits
    const uint32_t CAN1_F3R2_FB2 = 1U << 2 ;

  // Field FB3: Filter bits
    const uint32_t CAN1_F3R2_FB3 = 1U << 3 ;

  // Field FB4: Filter bits
    const uint32_t CAN1_F3R2_FB4 = 1U << 4 ;

  // Field FB5: Filter bits
    const uint32_t CAN1_F3R2_FB5 = 1U << 5 ;

  // Field FB6: Filter bits
    const uint32_t CAN1_F3R2_FB6 = 1U << 6 ;

  // Field FB7: Filter bits
    const uint32_t CAN1_F3R2_FB7 = 1U << 7 ;

  // Field FB8: Filter bits
    const uint32_t CAN1_F3R2_FB8 = 1U << 8 ;

  // Field FB9: Filter bits
    const uint32_t CAN1_F3R2_FB9 = 1U << 9 ;

  // Field FB10: Filter bits
    const uint32_t CAN1_F3R2_FB10 = 1U << 10 ;

  // Field FB11: Filter bits
    const uint32_t CAN1_F3R2_FB11 = 1U << 11 ;

  // Field FB12: Filter bits
    const uint32_t CAN1_F3R2_FB12 = 1U << 12 ;

  // Field FB13: Filter bits
    const uint32_t CAN1_F3R2_FB13 = 1U << 13 ;

  // Field FB14: Filter bits
    const uint32_t CAN1_F3R2_FB14 = 1U << 14 ;

  // Field FB15: Filter bits
    const uint32_t CAN1_F3R2_FB15 = 1U << 15 ;

  // Field FB16: Filter bits
    const uint32_t CAN1_F3R2_FB16 = 1U << 16 ;

  // Field FB17: Filter bits
    const uint32_t CAN1_F3R2_FB17 = 1U << 17 ;

  // Field FB18: Filter bits
    const uint32_t CAN1_F3R2_FB18 = 1U << 18 ;

  // Field FB19: Filter bits
    const uint32_t CAN1_F3R2_FB19 = 1U << 19 ;

  // Field FB20: Filter bits
    const uint32_t CAN1_F3R2_FB20 = 1U << 20 ;

  // Field FB21: Filter bits
    const uint32_t CAN1_F3R2_FB21 = 1U << 21 ;

  // Field FB22: Filter bits
    const uint32_t CAN1_F3R2_FB22 = 1U << 22 ;

  // Field FB23: Filter bits
    const uint32_t CAN1_F3R2_FB23 = 1U << 23 ;

  // Field FB24: Filter bits
    const uint32_t CAN1_F3R2_FB24 = 1U << 24 ;

  // Field FB25: Filter bits
    const uint32_t CAN1_F3R2_FB25 = 1U << 25 ;

  // Field FB26: Filter bits
    const uint32_t CAN1_F3R2_FB26 = 1U << 26 ;

  // Field FB27: Filter bits
    const uint32_t CAN1_F3R2_FB27 = 1U << 27 ;

  // Field FB28: Filter bits
    const uint32_t CAN1_F3R2_FB28 = 1U << 28 ;

  // Field FB29: Filter bits
    const uint32_t CAN1_F3R2_FB29 = 1U << 29 ;

  // Field FB30: Filter bits
    const uint32_t CAN1_F3R2_FB30 = 1U << 30 ;

  // Field FB31: Filter bits
    const uint32_t CAN1_F3R2_FB31 = 1U << 31 ;

//---  Register F4R1: Filter bank 4 register 1
  #define CAN1_F4R1 (* ((volatile uint32_t *) (0x40006400 + 608)))

  // Field FB0: Filter bits
    const uint32_t CAN1_F4R1_FB0 = 1U << 0 ;

  // Field FB1: Filter bits
    const uint32_t CAN1_F4R1_FB1 = 1U << 1 ;

  // Field FB2: Filter bits
    const uint32_t CAN1_F4R1_FB2 = 1U << 2 ;

  // Field FB3: Filter bits
    const uint32_t CAN1_F4R1_FB3 = 1U << 3 ;

  // Field FB4: Filter bits
    const uint32_t CAN1_F4R1_FB4 = 1U << 4 ;

  // Field FB5: Filter bits
    const uint32_t CAN1_F4R1_FB5 = 1U << 5 ;

  // Field FB6: Filter bits
    const uint32_t CAN1_F4R1_FB6 = 1U << 6 ;

  // Field FB7: Filter bits
    const uint32_t CAN1_F4R1_FB7 = 1U << 7 ;

  // Field FB8: Filter bits
    const uint32_t CAN1_F4R1_FB8 = 1U << 8 ;

  // Field FB9: Filter bits
    const uint32_t CAN1_F4R1_FB9 = 1U << 9 ;

  // Field FB10: Filter bits
    const uint32_t CAN1_F4R1_FB10 = 1U << 10 ;

  // Field FB11: Filter bits
    const uint32_t CAN1_F4R1_FB11 = 1U << 11 ;

  // Field FB12: Filter bits
    const uint32_t CAN1_F4R1_FB12 = 1U << 12 ;

  // Field FB13: Filter bits
    const uint32_t CAN1_F4R1_FB13 = 1U << 13 ;

  // Field FB14: Filter bits
    const uint32_t CAN1_F4R1_FB14 = 1U << 14 ;

  // Field FB15: Filter bits
    const uint32_t CAN1_F4R1_FB15 = 1U << 15 ;

  // Field FB16: Filter bits
    const uint32_t CAN1_F4R1_FB16 = 1U << 16 ;

  // Field FB17: Filter bits
    const uint32_t CAN1_F4R1_FB17 = 1U << 17 ;

  // Field FB18: Filter bits
    const uint32_t CAN1_F4R1_FB18 = 1U << 18 ;

  // Field FB19: Filter bits
    const uint32_t CAN1_F4R1_FB19 = 1U << 19 ;

  // Field FB20: Filter bits
    const uint32_t CAN1_F4R1_FB20 = 1U << 20 ;

  // Field FB21: Filter bits
    const uint32_t CAN1_F4R1_FB21 = 1U << 21 ;

  // Field FB22: Filter bits
    const uint32_t CAN1_F4R1_FB22 = 1U << 22 ;

  // Field FB23: Filter bits
    const uint32_t CAN1_F4R1_FB23 = 1U << 23 ;

  // Field FB24: Filter bits
    const uint32_t CAN1_F4R1_FB24 = 1U << 24 ;

  // Field FB25: Filter bits
    const uint32_t CAN1_F4R1_FB25 = 1U << 25 ;

  // Field FB26: Filter bits
    const uint32_t CAN1_F4R1_FB26 = 1U << 26 ;

  // Field FB27: Filter bits
    const uint32_t CAN1_F4R1_FB27 = 1U << 27 ;

  // Field FB28: Filter bits
    const uint32_t CAN1_F4R1_FB28 = 1U << 28 ;

  // Field FB29: Filter bits
    const uint32_t CAN1_F4R1_FB29 = 1U << 29 ;

  // Field FB30: Filter bits
    const uint32_t CAN1_F4R1_FB30 = 1U << 30 ;

  // Field FB31: Filter bits
    const uint32_t CAN1_F4R1_FB31 = 1U << 31 ;

//---  Register F4R2: Filter bank 4 register 2
  #define CAN1_F4R2 (* ((volatile uint32_t *) (0x40006400 + 612)))

  // Field FB0: Filter bits
    const uint32_t CAN1_F4R2_FB0 = 1U << 0 ;

  // Field FB1: Filter bits
    const uint32_t CAN1_F4R2_FB1 = 1U << 1 ;

  // Field FB2: Filter bits
    const uint32_t CAN1_F4R2_FB2 = 1U << 2 ;

  // Field FB3: Filter bits
    const uint32_t CAN1_F4R2_FB3 = 1U << 3 ;

  // Field FB4: Filter bits
    const uint32_t CAN1_F4R2_FB4 = 1U << 4 ;

  // Field FB5: Filter bits
    const uint32_t CAN1_F4R2_FB5 = 1U << 5 ;

  // Field FB6: Filter bits
    const uint32_t CAN1_F4R2_FB6 = 1U << 6 ;

  // Field FB7: Filter bits
    const uint32_t CAN1_F4R2_FB7 = 1U << 7 ;

  // Field FB8: Filter bits
    const uint32_t CAN1_F4R2_FB8 = 1U << 8 ;

  // Field FB9: Filter bits
    const uint32_t CAN1_F4R2_FB9 = 1U << 9 ;

  // Field FB10: Filter bits
    const uint32_t CAN1_F4R2_FB10 = 1U << 10 ;

  // Field FB11: Filter bits
    const uint32_t CAN1_F4R2_FB11 = 1U << 11 ;

  // Field FB12: Filter bits
    const uint32_t CAN1_F4R2_FB12 = 1U << 12 ;

  // Field FB13: Filter bits
    const uint32_t CAN1_F4R2_FB13 = 1U << 13 ;

  // Field FB14: Filter bits
    const uint32_t CAN1_F4R2_FB14 = 1U << 14 ;

  // Field FB15: Filter bits
    const uint32_t CAN1_F4R2_FB15 = 1U << 15 ;

  // Field FB16: Filter bits
    const uint32_t CAN1_F4R2_FB16 = 1U << 16 ;

  // Field FB17: Filter bits
    const uint32_t CAN1_F4R2_FB17 = 1U << 17 ;

  // Field FB18: Filter bits
    const uint32_t CAN1_F4R2_FB18 = 1U << 18 ;

  // Field FB19: Filter bits
    const uint32_t CAN1_F4R2_FB19 = 1U << 19 ;

  // Field FB20: Filter bits
    const uint32_t CAN1_F4R2_FB20 = 1U << 20 ;

  // Field FB21: Filter bits
    const uint32_t CAN1_F4R2_FB21 = 1U << 21 ;

  // Field FB22: Filter bits
    const uint32_t CAN1_F4R2_FB22 = 1U << 22 ;

  // Field FB23: Filter bits
    const uint32_t CAN1_F4R2_FB23 = 1U << 23 ;

  // Field FB24: Filter bits
    const uint32_t CAN1_F4R2_FB24 = 1U << 24 ;

  // Field FB25: Filter bits
    const uint32_t CAN1_F4R2_FB25 = 1U << 25 ;

  // Field FB26: Filter bits
    const uint32_t CAN1_F4R2_FB26 = 1U << 26 ;

  // Field FB27: Filter bits
    const uint32_t CAN1_F4R2_FB27 = 1U << 27 ;

  // Field FB28: Filter bits
    const uint32_t CAN1_F4R2_FB28 = 1U << 28 ;

  // Field FB29: Filter bits
    const uint32_t CAN1_F4R2_FB29 = 1U << 29 ;

  // Field FB30: Filter bits
    const uint32_t CAN1_F4R2_FB30 = 1U << 30 ;

  // Field FB31: Filter bits
    const uint32_t CAN1_F4R2_FB31 = 1U << 31 ;

//---  Register F5R1: Filter bank 5 register 1
  #define CAN1_F5R1 (* ((volatile uint32_t *) (0x40006400 + 616)))

  // Field FB0: Filter bits
    const uint32_t CAN1_F5R1_FB0 = 1U << 0 ;

  // Field FB1: Filter bits
    const uint32_t CAN1_F5R1_FB1 = 1U << 1 ;

  // Field FB2: Filter bits
    const uint32_t CAN1_F5R1_FB2 = 1U << 2 ;

  // Field FB3: Filter bits
    const uint32_t CAN1_F5R1_FB3 = 1U << 3 ;

  // Field FB4: Filter bits
    const uint32_t CAN1_F5R1_FB4 = 1U << 4 ;

  // Field FB5: Filter bits
    const uint32_t CAN1_F5R1_FB5 = 1U << 5 ;

  // Field FB6: Filter bits
    const uint32_t CAN1_F5R1_FB6 = 1U << 6 ;

  // Field FB7: Filter bits
    const uint32_t CAN1_F5R1_FB7 = 1U << 7 ;

  // Field FB8: Filter bits
    const uint32_t CAN1_F5R1_FB8 = 1U << 8 ;

  // Field FB9: Filter bits
    const uint32_t CAN1_F5R1_FB9 = 1U << 9 ;

  // Field FB10: Filter bits
    const uint32_t CAN1_F5R1_FB10 = 1U << 10 ;

  // Field FB11: Filter bits
    const uint32_t CAN1_F5R1_FB11 = 1U << 11 ;

  // Field FB12: Filter bits
    const uint32_t CAN1_F5R1_FB12 = 1U << 12 ;

  // Field FB13: Filter bits
    const uint32_t CAN1_F5R1_FB13 = 1U << 13 ;

  // Field FB14: Filter bits
    const uint32_t CAN1_F5R1_FB14 = 1U << 14 ;

  // Field FB15: Filter bits
    const uint32_t CAN1_F5R1_FB15 = 1U << 15 ;

  // Field FB16: Filter bits
    const uint32_t CAN1_F5R1_FB16 = 1U << 16 ;

  // Field FB17: Filter bits
    const uint32_t CAN1_F5R1_FB17 = 1U << 17 ;

  // Field FB18: Filter bits
    const uint32_t CAN1_F5R1_FB18 = 1U << 18 ;

  // Field FB19: Filter bits
    const uint32_t CAN1_F5R1_FB19 = 1U << 19 ;

  // Field FB20: Filter bits
    const uint32_t CAN1_F5R1_FB20 = 1U << 20 ;

  // Field FB21: Filter bits
    const uint32_t CAN1_F5R1_FB21 = 1U << 21 ;

  // Field FB22: Filter bits
    const uint32_t CAN1_F5R1_FB22 = 1U << 22 ;

  // Field FB23: Filter bits
    const uint32_t CAN1_F5R1_FB23 = 1U << 23 ;

  // Field FB24: Filter bits
    const uint32_t CAN1_F5R1_FB24 = 1U << 24 ;

  // Field FB25: Filter bits
    const uint32_t CAN1_F5R1_FB25 = 1U << 25 ;

  // Field FB26: Filter bits
    const uint32_t CAN1_F5R1_FB26 = 1U << 26 ;

  // Field FB27: Filter bits
    const uint32_t CAN1_F5R1_FB27 = 1U << 27 ;

  // Field FB28: Filter bits
    const uint32_t CAN1_F5R1_FB28 = 1U << 28 ;

  // Field FB29: Filter bits
    const uint32_t CAN1_F5R1_FB29 = 1U << 29 ;

  // Field FB30: Filter bits
    const uint32_t CAN1_F5R1_FB30 = 1U << 30 ;

  // Field FB31: Filter bits
    const uint32_t CAN1_F5R1_FB31 = 1U << 31 ;

//---  Register F5R2: Filter bank 5 register 2
  #define CAN1_F5R2 (* ((volatile uint32_t *) (0x40006400 + 620)))

  // Field FB0: Filter bits
    const uint32_t CAN1_F5R2_FB0 = 1U << 0 ;

  // Field FB1: Filter bits
    const uint32_t CAN1_F5R2_FB1 = 1U << 1 ;

  // Field FB2: Filter bits
    const uint32_t CAN1_F5R2_FB2 = 1U << 2 ;

  // Field FB3: Filter bits
    const uint32_t CAN1_F5R2_FB3 = 1U << 3 ;

  // Field FB4: Filter bits
    const uint32_t CAN1_F5R2_FB4 = 1U << 4 ;

  // Field FB5: Filter bits
    const uint32_t CAN1_F5R2_FB5 = 1U << 5 ;

  // Field FB6: Filter bits
    const uint32_t CAN1_F5R2_FB6 = 1U << 6 ;

  // Field FB7: Filter bits
    const uint32_t CAN1_F5R2_FB7 = 1U << 7 ;

  // Field FB8: Filter bits
    const uint32_t CAN1_F5R2_FB8 = 1U << 8 ;

  // Field FB9: Filter bits
    const uint32_t CAN1_F5R2_FB9 = 1U << 9 ;

  // Field FB10: Filter bits
    const uint32_t CAN1_F5R2_FB10 = 1U << 10 ;

  // Field FB11: Filter bits
    const uint32_t CAN1_F5R2_FB11 = 1U << 11 ;

  // Field FB12: Filter bits
    const uint32_t CAN1_F5R2_FB12 = 1U << 12 ;

  // Field FB13: Filter bits
    const uint32_t CAN1_F5R2_FB13 = 1U << 13 ;

  // Field FB14: Filter bits
    const uint32_t CAN1_F5R2_FB14 = 1U << 14 ;

  // Field FB15: Filter bits
    const uint32_t CAN1_F5R2_FB15 = 1U << 15 ;

  // Field FB16: Filter bits
    const uint32_t CAN1_F5R2_FB16 = 1U << 16 ;

  // Field FB17: Filter bits
    const uint32_t CAN1_F5R2_FB17 = 1U << 17 ;

  // Field FB18: Filter bits
    const uint32_t CAN1_F5R2_FB18 = 1U << 18 ;

  // Field FB19: Filter bits
    const uint32_t CAN1_F5R2_FB19 = 1U << 19 ;

  // Field FB20: Filter bits
    const uint32_t CAN1_F5R2_FB20 = 1U << 20 ;

  // Field FB21: Filter bits
    const uint32_t CAN1_F5R2_FB21 = 1U << 21 ;

  // Field FB22: Filter bits
    const uint32_t CAN1_F5R2_FB22 = 1U << 22 ;

  // Field FB23: Filter bits
    const uint32_t CAN1_F5R2_FB23 = 1U << 23 ;

  // Field FB24: Filter bits
    const uint32_t CAN1_F5R2_FB24 = 1U << 24 ;

  // Field FB25: Filter bits
    const uint32_t CAN1_F5R2_FB25 = 1U << 25 ;

  // Field FB26: Filter bits
    const uint32_t CAN1_F5R2_FB26 = 1U << 26 ;

  // Field FB27: Filter bits
    const uint32_t CAN1_F5R2_FB27 = 1U << 27 ;

  // Field FB28: Filter bits
    const uint32_t CAN1_F5R2_FB28 = 1U << 28 ;

  // Field FB29: Filter bits
    const uint32_t CAN1_F5R2_FB29 = 1U << 29 ;

  // Field FB30: Filter bits
    const uint32_t CAN1_F5R2_FB30 = 1U << 30 ;

  // Field FB31: Filter bits
    const uint32_t CAN1_F5R2_FB31 = 1U << 31 ;

//---  Register F6R1: Filter bank 6 register 1
  #define CAN1_F6R1 (* ((volatile uint32_t *) (0x40006400 + 624)))

  // Field FB0: Filter bits
    const uint32_t CAN1_F6R1_FB0 = 1U << 0 ;

  // Field FB1: Filter bits
    const uint32_t CAN1_F6R1_FB1 = 1U << 1 ;

  // Field FB2: Filter bits
    const uint32_t CAN1_F6R1_FB2 = 1U << 2 ;

  // Field FB3: Filter bits
    const uint32_t CAN1_F6R1_FB3 = 1U << 3 ;

  // Field FB4: Filter bits
    const uint32_t CAN1_F6R1_FB4 = 1U << 4 ;

  // Field FB5: Filter bits
    const uint32_t CAN1_F6R1_FB5 = 1U << 5 ;

  // Field FB6: Filter bits
    const uint32_t CAN1_F6R1_FB6 = 1U << 6 ;

  // Field FB7: Filter bits
    const uint32_t CAN1_F6R1_FB7 = 1U << 7 ;

  // Field FB8: Filter bits
    const uint32_t CAN1_F6R1_FB8 = 1U << 8 ;

  // Field FB9: Filter bits
    const uint32_t CAN1_F6R1_FB9 = 1U << 9 ;

  // Field FB10: Filter bits
    const uint32_t CAN1_F6R1_FB10 = 1U << 10 ;

  // Field FB11: Filter bits
    const uint32_t CAN1_F6R1_FB11 = 1U << 11 ;

  // Field FB12: Filter bits
    const uint32_t CAN1_F6R1_FB12 = 1U << 12 ;

  // Field FB13: Filter bits
    const uint32_t CAN1_F6R1_FB13 = 1U << 13 ;

  // Field FB14: Filter bits
    const uint32_t CAN1_F6R1_FB14 = 1U << 14 ;

  // Field FB15: Filter bits
    const uint32_t CAN1_F6R1_FB15 = 1U << 15 ;

  // Field FB16: Filter bits
    const uint32_t CAN1_F6R1_FB16 = 1U << 16 ;

  // Field FB17: Filter bits
    const uint32_t CAN1_F6R1_FB17 = 1U << 17 ;

  // Field FB18: Filter bits
    const uint32_t CAN1_F6R1_FB18 = 1U << 18 ;

  // Field FB19: Filter bits
    const uint32_t CAN1_F6R1_FB19 = 1U << 19 ;

  // Field FB20: Filter bits
    const uint32_t CAN1_F6R1_FB20 = 1U << 20 ;

  // Field FB21: Filter bits
    const uint32_t CAN1_F6R1_FB21 = 1U << 21 ;

  // Field FB22: Filter bits
    const uint32_t CAN1_F6R1_FB22 = 1U << 22 ;

  // Field FB23: Filter bits
    const uint32_t CAN1_F6R1_FB23 = 1U << 23 ;

  // Field FB24: Filter bits
    const uint32_t CAN1_F6R1_FB24 = 1U << 24 ;

  // Field FB25: Filter bits
    const uint32_t CAN1_F6R1_FB25 = 1U << 25 ;

  // Field FB26: Filter bits
    const uint32_t CAN1_F6R1_FB26 = 1U << 26 ;

  // Field FB27: Filter bits
    const uint32_t CAN1_F6R1_FB27 = 1U << 27 ;

  // Field FB28: Filter bits
    const uint32_t CAN1_F6R1_FB28 = 1U << 28 ;

  // Field FB29: Filter bits
    const uint32_t CAN1_F6R1_FB29 = 1U << 29 ;

  // Field FB30: Filter bits
    const uint32_t CAN1_F6R1_FB30 = 1U << 30 ;

  // Field FB31: Filter bits
    const uint32_t CAN1_F6R1_FB31 = 1U << 31 ;

//---  Register F6R2: Filter bank 6 register 2
  #define CAN1_F6R2 (* ((volatile uint32_t *) (0x40006400 + 628)))

  // Field FB0: Filter bits
    const uint32_t CAN1_F6R2_FB0 = 1U << 0 ;

  // Field FB1: Filter bits
    const uint32_t CAN1_F6R2_FB1 = 1U << 1 ;

  // Field FB2: Filter bits
    const uint32_t CAN1_F6R2_FB2 = 1U << 2 ;

  // Field FB3: Filter bits
    const uint32_t CAN1_F6R2_FB3 = 1U << 3 ;

  // Field FB4: Filter bits
    const uint32_t CAN1_F6R2_FB4 = 1U << 4 ;

  // Field FB5: Filter bits
    const uint32_t CAN1_F6R2_FB5 = 1U << 5 ;

  // Field FB6: Filter bits
    const uint32_t CAN1_F6R2_FB6 = 1U << 6 ;

  // Field FB7: Filter bits
    const uint32_t CAN1_F6R2_FB7 = 1U << 7 ;

  // Field FB8: Filter bits
    const uint32_t CAN1_F6R2_FB8 = 1U << 8 ;

  // Field FB9: Filter bits
    const uint32_t CAN1_F6R2_FB9 = 1U << 9 ;

  // Field FB10: Filter bits
    const uint32_t CAN1_F6R2_FB10 = 1U << 10 ;

  // Field FB11: Filter bits
    const uint32_t CAN1_F6R2_FB11 = 1U << 11 ;

  // Field FB12: Filter bits
    const uint32_t CAN1_F6R2_FB12 = 1U << 12 ;

  // Field FB13: Filter bits
    const uint32_t CAN1_F6R2_FB13 = 1U << 13 ;

  // Field FB14: Filter bits
    const uint32_t CAN1_F6R2_FB14 = 1U << 14 ;

  // Field FB15: Filter bits
    const uint32_t CAN1_F6R2_FB15 = 1U << 15 ;

  // Field FB16: Filter bits
    const uint32_t CAN1_F6R2_FB16 = 1U << 16 ;

  // Field FB17: Filter bits
    const uint32_t CAN1_F6R2_FB17 = 1U << 17 ;

  // Field FB18: Filter bits
    const uint32_t CAN1_F6R2_FB18 = 1U << 18 ;

  // Field FB19: Filter bits
    const uint32_t CAN1_F6R2_FB19 = 1U << 19 ;

  // Field FB20: Filter bits
    const uint32_t CAN1_F6R2_FB20 = 1U << 20 ;

  // Field FB21: Filter bits
    const uint32_t CAN1_F6R2_FB21 = 1U << 21 ;

  // Field FB22: Filter bits
    const uint32_t CAN1_F6R2_FB22 = 1U << 22 ;

  // Field FB23: Filter bits
    const uint32_t CAN1_F6R2_FB23 = 1U << 23 ;

  // Field FB24: Filter bits
    const uint32_t CAN1_F6R2_FB24 = 1U << 24 ;

  // Field FB25: Filter bits
    const uint32_t CAN1_F6R2_FB25 = 1U << 25 ;

  // Field FB26: Filter bits
    const uint32_t CAN1_F6R2_FB26 = 1U << 26 ;

  // Field FB27: Filter bits
    const uint32_t CAN1_F6R2_FB27 = 1U << 27 ;

  // Field FB28: Filter bits
    const uint32_t CAN1_F6R2_FB28 = 1U << 28 ;

  // Field FB29: Filter bits
    const uint32_t CAN1_F6R2_FB29 = 1U << 29 ;

  // Field FB30: Filter bits
    const uint32_t CAN1_F6R2_FB30 = 1U << 30 ;

  // Field FB31: Filter bits
    const uint32_t CAN1_F6R2_FB31 = 1U << 31 ;

//---  Register F7R1: Filter bank 7 register 1
  #define CAN1_F7R1 (* ((volatile uint32_t *) (0x40006400 + 632)))

  // Field FB0: Filter bits
    const uint32_t CAN1_F7R1_FB0 = 1U << 0 ;

  // Field FB1: Filter bits
    const uint32_t CAN1_F7R1_FB1 = 1U << 1 ;

  // Field FB2: Filter bits
    const uint32_t CAN1_F7R1_FB2 = 1U << 2 ;

  // Field FB3: Filter bits
    const uint32_t CAN1_F7R1_FB3 = 1U << 3 ;

  // Field FB4: Filter bits
    const uint32_t CAN1_F7R1_FB4 = 1U << 4 ;

  // Field FB5: Filter bits
    const uint32_t CAN1_F7R1_FB5 = 1U << 5 ;

  // Field FB6: Filter bits
    const uint32_t CAN1_F7R1_FB6 = 1U << 6 ;

  // Field FB7: Filter bits
    const uint32_t CAN1_F7R1_FB7 = 1U << 7 ;

  // Field FB8: Filter bits
    const uint32_t CAN1_F7R1_FB8 = 1U << 8 ;

  // Field FB9: Filter bits
    const uint32_t CAN1_F7R1_FB9 = 1U << 9 ;

  // Field FB10: Filter bits
    const uint32_t CAN1_F7R1_FB10 = 1U << 10 ;

  // Field FB11: Filter bits
    const uint32_t CAN1_F7R1_FB11 = 1U << 11 ;

  // Field FB12: Filter bits
    const uint32_t CAN1_F7R1_FB12 = 1U << 12 ;

  // Field FB13: Filter bits
    const uint32_t CAN1_F7R1_FB13 = 1U << 13 ;

  // Field FB14: Filter bits
    const uint32_t CAN1_F7R1_FB14 = 1U << 14 ;

  // Field FB15: Filter bits
    const uint32_t CAN1_F7R1_FB15 = 1U << 15 ;

  // Field FB16: Filter bits
    const uint32_t CAN1_F7R1_FB16 = 1U << 16 ;

  // Field FB17: Filter bits
    const uint32_t CAN1_F7R1_FB17 = 1U << 17 ;

  // Field FB18: Filter bits
    const uint32_t CAN1_F7R1_FB18 = 1U << 18 ;

  // Field FB19: Filter bits
    const uint32_t CAN1_F7R1_FB19 = 1U << 19 ;

  // Field FB20: Filter bits
    const uint32_t CAN1_F7R1_FB20 = 1U << 20 ;

  // Field FB21: Filter bits
    const uint32_t CAN1_F7R1_FB21 = 1U << 21 ;

  // Field FB22: Filter bits
    const uint32_t CAN1_F7R1_FB22 = 1U << 22 ;

  // Field FB23: Filter bits
    const uint32_t CAN1_F7R1_FB23 = 1U << 23 ;

  // Field FB24: Filter bits
    const uint32_t CAN1_F7R1_FB24 = 1U << 24 ;

  // Field FB25: Filter bits
    const uint32_t CAN1_F7R1_FB25 = 1U << 25 ;

  // Field FB26: Filter bits
    const uint32_t CAN1_F7R1_FB26 = 1U << 26 ;

  // Field FB27: Filter bits
    const uint32_t CAN1_F7R1_FB27 = 1U << 27 ;

  // Field FB28: Filter bits
    const uint32_t CAN1_F7R1_FB28 = 1U << 28 ;

  // Field FB29: Filter bits
    const uint32_t CAN1_F7R1_FB29 = 1U << 29 ;

  // Field FB30: Filter bits
    const uint32_t CAN1_F7R1_FB30 = 1U << 30 ;

  // Field FB31: Filter bits
    const uint32_t CAN1_F7R1_FB31 = 1U << 31 ;

//---  Register F7R2: Filter bank 7 register 2
  #define CAN1_F7R2 (* ((volatile uint32_t *) (0x40006400 + 636)))

  // Field FB0: Filter bits
    const uint32_t CAN1_F7R2_FB0 = 1U << 0 ;

  // Field FB1: Filter bits
    const uint32_t CAN1_F7R2_FB1 = 1U << 1 ;

  // Field FB2: Filter bits
    const uint32_t CAN1_F7R2_FB2 = 1U << 2 ;

  // Field FB3: Filter bits
    const uint32_t CAN1_F7R2_FB3 = 1U << 3 ;

  // Field FB4: Filter bits
    const uint32_t CAN1_F7R2_FB4 = 1U << 4 ;

  // Field FB5: Filter bits
    const uint32_t CAN1_F7R2_FB5 = 1U << 5 ;

  // Field FB6: Filter bits
    const uint32_t CAN1_F7R2_FB6 = 1U << 6 ;

  // Field FB7: Filter bits
    const uint32_t CAN1_F7R2_FB7 = 1U << 7 ;

  // Field FB8: Filter bits
    const uint32_t CAN1_F7R2_FB8 = 1U << 8 ;

  // Field FB9: Filter bits
    const uint32_t CAN1_F7R2_FB9 = 1U << 9 ;

  // Field FB10: Filter bits
    const uint32_t CAN1_F7R2_FB10 = 1U << 10 ;

  // Field FB11: Filter bits
    const uint32_t CAN1_F7R2_FB11 = 1U << 11 ;

  // Field FB12: Filter bits
    const uint32_t CAN1_F7R2_FB12 = 1U << 12 ;

  // Field FB13: Filter bits
    const uint32_t CAN1_F7R2_FB13 = 1U << 13 ;

  // Field FB14: Filter bits
    const uint32_t CAN1_F7R2_FB14 = 1U << 14 ;

  // Field FB15: Filter bits
    const uint32_t CAN1_F7R2_FB15 = 1U << 15 ;

  // Field FB16: Filter bits
    const uint32_t CAN1_F7R2_FB16 = 1U << 16 ;

  // Field FB17: Filter bits
    const uint32_t CAN1_F7R2_FB17 = 1U << 17 ;

  // Field FB18: Filter bits
    const uint32_t CAN1_F7R2_FB18 = 1U << 18 ;

  // Field FB19: Filter bits
    const uint32_t CAN1_F7R2_FB19 = 1U << 19 ;

  // Field FB20: Filter bits
    const uint32_t CAN1_F7R2_FB20 = 1U << 20 ;

  // Field FB21: Filter bits
    const uint32_t CAN1_F7R2_FB21 = 1U << 21 ;

  // Field FB22: Filter bits
    const uint32_t CAN1_F7R2_FB22 = 1U << 22 ;

  // Field FB23: Filter bits
    const uint32_t CAN1_F7R2_FB23 = 1U << 23 ;

  // Field FB24: Filter bits
    const uint32_t CAN1_F7R2_FB24 = 1U << 24 ;

  // Field FB25: Filter bits
    const uint32_t CAN1_F7R2_FB25 = 1U << 25 ;

  // Field FB26: Filter bits
    const uint32_t CAN1_F7R2_FB26 = 1U << 26 ;

  // Field FB27: Filter bits
    const uint32_t CAN1_F7R2_FB27 = 1U << 27 ;

  // Field FB28: Filter bits
    const uint32_t CAN1_F7R2_FB28 = 1U << 28 ;

  // Field FB29: Filter bits
    const uint32_t CAN1_F7R2_FB29 = 1U << 29 ;

  // Field FB30: Filter bits
    const uint32_t CAN1_F7R2_FB30 = 1U << 30 ;

  // Field FB31: Filter bits
    const uint32_t CAN1_F7R2_FB31 = 1U << 31 ;

//---  Register F8R1: Filter bank 8 register 1
  #define CAN1_F8R1 (* ((volatile uint32_t *) (0x40006400 + 640)))

  // Field FB0: Filter bits
    const uint32_t CAN1_F8R1_FB0 = 1U << 0 ;

  // Field FB1: Filter bits
    const uint32_t CAN1_F8R1_FB1 = 1U << 1 ;

  // Field FB2: Filter bits
    const uint32_t CAN1_F8R1_FB2 = 1U << 2 ;

  // Field FB3: Filter bits
    const uint32_t CAN1_F8R1_FB3 = 1U << 3 ;

  // Field FB4: Filter bits
    const uint32_t CAN1_F8R1_FB4 = 1U << 4 ;

  // Field FB5: Filter bits
    const uint32_t CAN1_F8R1_FB5 = 1U << 5 ;

  // Field FB6: Filter bits
    const uint32_t CAN1_F8R1_FB6 = 1U << 6 ;

  // Field FB7: Filter bits
    const uint32_t CAN1_F8R1_FB7 = 1U << 7 ;

  // Field FB8: Filter bits
    const uint32_t CAN1_F8R1_FB8 = 1U << 8 ;

  // Field FB9: Filter bits
    const uint32_t CAN1_F8R1_FB9 = 1U << 9 ;

  // Field FB10: Filter bits
    const uint32_t CAN1_F8R1_FB10 = 1U << 10 ;

  // Field FB11: Filter bits
    const uint32_t CAN1_F8R1_FB11 = 1U << 11 ;

  // Field FB12: Filter bits
    const uint32_t CAN1_F8R1_FB12 = 1U << 12 ;

  // Field FB13: Filter bits
    const uint32_t CAN1_F8R1_FB13 = 1U << 13 ;

  // Field FB14: Filter bits
    const uint32_t CAN1_F8R1_FB14 = 1U << 14 ;

  // Field FB15: Filter bits
    const uint32_t CAN1_F8R1_FB15 = 1U << 15 ;

  // Field FB16: Filter bits
    const uint32_t CAN1_F8R1_FB16 = 1U << 16 ;

  // Field FB17: Filter bits
    const uint32_t CAN1_F8R1_FB17 = 1U << 17 ;

  // Field FB18: Filter bits
    const uint32_t CAN1_F8R1_FB18 = 1U << 18 ;

  // Field FB19: Filter bits
    const uint32_t CAN1_F8R1_FB19 = 1U << 19 ;

  // Field FB20: Filter bits
    const uint32_t CAN1_F8R1_FB20 = 1U << 20 ;

  // Field FB21: Filter bits
    const uint32_t CAN1_F8R1_FB21 = 1U << 21 ;

  // Field FB22: Filter bits
    const uint32_t CAN1_F8R1_FB22 = 1U << 22 ;

  // Field FB23: Filter bits
    const uint32_t CAN1_F8R1_FB23 = 1U << 23 ;

  // Field FB24: Filter bits
    const uint32_t CAN1_F8R1_FB24 = 1U << 24 ;

  // Field FB25: Filter bits
    const uint32_t CAN1_F8R1_FB25 = 1U << 25 ;

  // Field FB26: Filter bits
    const uint32_t CAN1_F8R1_FB26 = 1U << 26 ;

  // Field FB27: Filter bits
    const uint32_t CAN1_F8R1_FB27 = 1U << 27 ;

  // Field FB28: Filter bits
    const uint32_t CAN1_F8R1_FB28 = 1U << 28 ;

  // Field FB29: Filter bits
    const uint32_t CAN1_F8R1_FB29 = 1U << 29 ;

  // Field FB30: Filter bits
    const uint32_t CAN1_F8R1_FB30 = 1U << 30 ;

  // Field FB31: Filter bits
    const uint32_t CAN1_F8R1_FB31 = 1U << 31 ;

//---  Register F8R2: Filter bank 8 register 2
  #define CAN1_F8R2 (* ((volatile uint32_t *) (0x40006400 + 644)))

  // Field FB0: Filter bits
    const uint32_t CAN1_F8R2_FB0 = 1U << 0 ;

  // Field FB1: Filter bits
    const uint32_t CAN1_F8R2_FB1 = 1U << 1 ;

  // Field FB2: Filter bits
    const uint32_t CAN1_F8R2_FB2 = 1U << 2 ;

  // Field FB3: Filter bits
    const uint32_t CAN1_F8R2_FB3 = 1U << 3 ;

  // Field FB4: Filter bits
    const uint32_t CAN1_F8R2_FB4 = 1U << 4 ;

  // Field FB5: Filter bits
    const uint32_t CAN1_F8R2_FB5 = 1U << 5 ;

  // Field FB6: Filter bits
    const uint32_t CAN1_F8R2_FB6 = 1U << 6 ;

  // Field FB7: Filter bits
    const uint32_t CAN1_F8R2_FB7 = 1U << 7 ;

  // Field FB8: Filter bits
    const uint32_t CAN1_F8R2_FB8 = 1U << 8 ;

  // Field FB9: Filter bits
    const uint32_t CAN1_F8R2_FB9 = 1U << 9 ;

  // Field FB10: Filter bits
    const uint32_t CAN1_F8R2_FB10 = 1U << 10 ;

  // Field FB11: Filter bits
    const uint32_t CAN1_F8R2_FB11 = 1U << 11 ;

  // Field FB12: Filter bits
    const uint32_t CAN1_F8R2_FB12 = 1U << 12 ;

  // Field FB13: Filter bits
    const uint32_t CAN1_F8R2_FB13 = 1U << 13 ;

  // Field FB14: Filter bits
    const uint32_t CAN1_F8R2_FB14 = 1U << 14 ;

  // Field FB15: Filter bits
    const uint32_t CAN1_F8R2_FB15 = 1U << 15 ;

  // Field FB16: Filter bits
    const uint32_t CAN1_F8R2_FB16 = 1U << 16 ;

  // Field FB17: Filter bits
    const uint32_t CAN1_F8R2_FB17 = 1U << 17 ;

  // Field FB18: Filter bits
    const uint32_t CAN1_F8R2_FB18 = 1U << 18 ;

  // Field FB19: Filter bits
    const uint32_t CAN1_F8R2_FB19 = 1U << 19 ;

  // Field FB20: Filter bits
    const uint32_t CAN1_F8R2_FB20 = 1U << 20 ;

  // Field FB21: Filter bits
    const uint32_t CAN1_F8R2_FB21 = 1U << 21 ;

  // Field FB22: Filter bits
    const uint32_t CAN1_F8R2_FB22 = 1U << 22 ;

  // Field FB23: Filter bits
    const uint32_t CAN1_F8R2_FB23 = 1U << 23 ;

  // Field FB24: Filter bits
    const uint32_t CAN1_F8R2_FB24 = 1U << 24 ;

  // Field FB25: Filter bits
    const uint32_t CAN1_F8R2_FB25 = 1U << 25 ;

  // Field FB26: Filter bits
    const uint32_t CAN1_F8R2_FB26 = 1U << 26 ;

  // Field FB27: Filter bits
    const uint32_t CAN1_F8R2_FB27 = 1U << 27 ;

  // Field FB28: Filter bits
    const uint32_t CAN1_F8R2_FB28 = 1U << 28 ;

  // Field FB29: Filter bits
    const uint32_t CAN1_F8R2_FB29 = 1U << 29 ;

  // Field FB30: Filter bits
    const uint32_t CAN1_F8R2_FB30 = 1U << 30 ;

  // Field FB31: Filter bits
    const uint32_t CAN1_F8R2_FB31 = 1U << 31 ;

//---  Register F9R1: Filter bank 9 register 1
  #define CAN1_F9R1 (* ((volatile uint32_t *) (0x40006400 + 648)))

  // Field FB0: Filter bits
    const uint32_t CAN1_F9R1_FB0 = 1U << 0 ;

  // Field FB1: Filter bits
    const uint32_t CAN1_F9R1_FB1 = 1U << 1 ;

  // Field FB2: Filter bits
    const uint32_t CAN1_F9R1_FB2 = 1U << 2 ;

  // Field FB3: Filter bits
    const uint32_t CAN1_F9R1_FB3 = 1U << 3 ;

  // Field FB4: Filter bits
    const uint32_t CAN1_F9R1_FB4 = 1U << 4 ;

  // Field FB5: Filter bits
    const uint32_t CAN1_F9R1_FB5 = 1U << 5 ;

  // Field FB6: Filter bits
    const uint32_t CAN1_F9R1_FB6 = 1U << 6 ;

  // Field FB7: Filter bits
    const uint32_t CAN1_F9R1_FB7 = 1U << 7 ;

  // Field FB8: Filter bits
    const uint32_t CAN1_F9R1_FB8 = 1U << 8 ;

  // Field FB9: Filter bits
    const uint32_t CAN1_F9R1_FB9 = 1U << 9 ;

  // Field FB10: Filter bits
    const uint32_t CAN1_F9R1_FB10 = 1U << 10 ;

  // Field FB11: Filter bits
    const uint32_t CAN1_F9R1_FB11 = 1U << 11 ;

  // Field FB12: Filter bits
    const uint32_t CAN1_F9R1_FB12 = 1U << 12 ;

  // Field FB13: Filter bits
    const uint32_t CAN1_F9R1_FB13 = 1U << 13 ;

  // Field FB14: Filter bits
    const uint32_t CAN1_F9R1_FB14 = 1U << 14 ;

  // Field FB15: Filter bits
    const uint32_t CAN1_F9R1_FB15 = 1U << 15 ;

  // Field FB16: Filter bits
    const uint32_t CAN1_F9R1_FB16 = 1U << 16 ;

  // Field FB17: Filter bits
    const uint32_t CAN1_F9R1_FB17 = 1U << 17 ;

  // Field FB18: Filter bits
    const uint32_t CAN1_F9R1_FB18 = 1U << 18 ;

  // Field FB19: Filter bits
    const uint32_t CAN1_F9R1_FB19 = 1U << 19 ;

  // Field FB20: Filter bits
    const uint32_t CAN1_F9R1_FB20 = 1U << 20 ;

  // Field FB21: Filter bits
    const uint32_t CAN1_F9R1_FB21 = 1U << 21 ;

  // Field FB22: Filter bits
    const uint32_t CAN1_F9R1_FB22 = 1U << 22 ;

  // Field FB23: Filter bits
    const uint32_t CAN1_F9R1_FB23 = 1U << 23 ;

  // Field FB24: Filter bits
    const uint32_t CAN1_F9R1_FB24 = 1U << 24 ;

  // Field FB25: Filter bits
    const uint32_t CAN1_F9R1_FB25 = 1U << 25 ;

  // Field FB26: Filter bits
    const uint32_t CAN1_F9R1_FB26 = 1U << 26 ;

  // Field FB27: Filter bits
    const uint32_t CAN1_F9R1_FB27 = 1U << 27 ;

  // Field FB28: Filter bits
    const uint32_t CAN1_F9R1_FB28 = 1U << 28 ;

  // Field FB29: Filter bits
    const uint32_t CAN1_F9R1_FB29 = 1U << 29 ;

  // Field FB30: Filter bits
    const uint32_t CAN1_F9R1_FB30 = 1U << 30 ;

  // Field FB31: Filter bits
    const uint32_t CAN1_F9R1_FB31 = 1U << 31 ;

//---  Register F9R2: Filter bank 9 register 2
  #define CAN1_F9R2 (* ((volatile uint32_t *) (0x40006400 + 652)))

  // Field FB0: Filter bits
    const uint32_t CAN1_F9R2_FB0 = 1U << 0 ;

  // Field FB1: Filter bits
    const uint32_t CAN1_F9R2_FB1 = 1U << 1 ;

  // Field FB2: Filter bits
    const uint32_t CAN1_F9R2_FB2 = 1U << 2 ;

  // Field FB3: Filter bits
    const uint32_t CAN1_F9R2_FB3 = 1U << 3 ;

  // Field FB4: Filter bits
    const uint32_t CAN1_F9R2_FB4 = 1U << 4 ;

  // Field FB5: Filter bits
    const uint32_t CAN1_F9R2_FB5 = 1U << 5 ;

  // Field FB6: Filter bits
    const uint32_t CAN1_F9R2_FB6 = 1U << 6 ;

  // Field FB7: Filter bits
    const uint32_t CAN1_F9R2_FB7 = 1U << 7 ;

  // Field FB8: Filter bits
    const uint32_t CAN1_F9R2_FB8 = 1U << 8 ;

  // Field FB9: Filter bits
    const uint32_t CAN1_F9R2_FB9 = 1U << 9 ;

  // Field FB10: Filter bits
    const uint32_t CAN1_F9R2_FB10 = 1U << 10 ;

  // Field FB11: Filter bits
    const uint32_t CAN1_F9R2_FB11 = 1U << 11 ;

  // Field FB12: Filter bits
    const uint32_t CAN1_F9R2_FB12 = 1U << 12 ;

  // Field FB13: Filter bits
    const uint32_t CAN1_F9R2_FB13 = 1U << 13 ;

  // Field FB14: Filter bits
    const uint32_t CAN1_F9R2_FB14 = 1U << 14 ;

  // Field FB15: Filter bits
    const uint32_t CAN1_F9R2_FB15 = 1U << 15 ;

  // Field FB16: Filter bits
    const uint32_t CAN1_F9R2_FB16 = 1U << 16 ;

  // Field FB17: Filter bits
    const uint32_t CAN1_F9R2_FB17 = 1U << 17 ;

  // Field FB18: Filter bits
    const uint32_t CAN1_F9R2_FB18 = 1U << 18 ;

  // Field FB19: Filter bits
    const uint32_t CAN1_F9R2_FB19 = 1U << 19 ;

  // Field FB20: Filter bits
    const uint32_t CAN1_F9R2_FB20 = 1U << 20 ;

  // Field FB21: Filter bits
    const uint32_t CAN1_F9R2_FB21 = 1U << 21 ;

  // Field FB22: Filter bits
    const uint32_t CAN1_F9R2_FB22 = 1U << 22 ;

  // Field FB23: Filter bits
    const uint32_t CAN1_F9R2_FB23 = 1U << 23 ;

  // Field FB24: Filter bits
    const uint32_t CAN1_F9R2_FB24 = 1U << 24 ;

  // Field FB25: Filter bits
    const uint32_t CAN1_F9R2_FB25 = 1U << 25 ;

  // Field FB26: Filter bits
    const uint32_t CAN1_F9R2_FB26 = 1U << 26 ;

  // Field FB27: Filter bits
    const uint32_t CAN1_F9R2_FB27 = 1U << 27 ;

  // Field FB28: Filter bits
    const uint32_t CAN1_F9R2_FB28 = 1U << 28 ;

  // Field FB29: Filter bits
    const uint32_t CAN1_F9R2_FB29 = 1U << 29 ;

  // Field FB30: Filter bits
    const uint32_t CAN1_F9R2_FB30 = 1U << 30 ;

  // Field FB31: Filter bits
    const uint32_t CAN1_F9R2_FB31 = 1U << 31 ;

//---  Register F10R1: Filter bank 10 register 1
  #define CAN1_F10R1 (* ((volatile uint32_t *) (0x40006400 + 656)))

  // Field FB0: Filter bits
    const uint32_t CAN1_F10R1_FB0 = 1U << 0 ;

  // Field FB1: Filter bits
    const uint32_t CAN1_F10R1_FB1 = 1U << 1 ;

  // Field FB2: Filter bits
    const uint32_t CAN1_F10R1_FB2 = 1U << 2 ;

  // Field FB3: Filter bits
    const uint32_t CAN1_F10R1_FB3 = 1U << 3 ;

  // Field FB4: Filter bits
    const uint32_t CAN1_F10R1_FB4 = 1U << 4 ;

  // Field FB5: Filter bits
    const uint32_t CAN1_F10R1_FB5 = 1U << 5 ;

  // Field FB6: Filter bits
    const uint32_t CAN1_F10R1_FB6 = 1U << 6 ;

  // Field FB7: Filter bits
    const uint32_t CAN1_F10R1_FB7 = 1U << 7 ;

  // Field FB8: Filter bits
    const uint32_t CAN1_F10R1_FB8 = 1U << 8 ;

  // Field FB9: Filter bits
    const uint32_t CAN1_F10R1_FB9 = 1U << 9 ;

  // Field FB10: Filter bits
    const uint32_t CAN1_F10R1_FB10 = 1U << 10 ;

  // Field FB11: Filter bits
    const uint32_t CAN1_F10R1_FB11 = 1U << 11 ;

  // Field FB12: Filter bits
    const uint32_t CAN1_F10R1_FB12 = 1U << 12 ;

  // Field FB13: Filter bits
    const uint32_t CAN1_F10R1_FB13 = 1U << 13 ;

  // Field FB14: Filter bits
    const uint32_t CAN1_F10R1_FB14 = 1U << 14 ;

  // Field FB15: Filter bits
    const uint32_t CAN1_F10R1_FB15 = 1U << 15 ;

  // Field FB16: Filter bits
    const uint32_t CAN1_F10R1_FB16 = 1U << 16 ;

  // Field FB17: Filter bits
    const uint32_t CAN1_F10R1_FB17 = 1U << 17 ;

  // Field FB18: Filter bits
    const uint32_t CAN1_F10R1_FB18 = 1U << 18 ;

  // Field FB19: Filter bits
    const uint32_t CAN1_F10R1_FB19 = 1U << 19 ;

  // Field FB20: Filter bits
    const uint32_t CAN1_F10R1_FB20 = 1U << 20 ;

  // Field FB21: Filter bits
    const uint32_t CAN1_F10R1_FB21 = 1U << 21 ;

  // Field FB22: Filter bits
    const uint32_t CAN1_F10R1_FB22 = 1U << 22 ;

  // Field FB23: Filter bits
    const uint32_t CAN1_F10R1_FB23 = 1U << 23 ;

  // Field FB24: Filter bits
    const uint32_t CAN1_F10R1_FB24 = 1U << 24 ;

  // Field FB25: Filter bits
    const uint32_t CAN1_F10R1_FB25 = 1U << 25 ;

  // Field FB26: Filter bits
    const uint32_t CAN1_F10R1_FB26 = 1U << 26 ;

  // Field FB27: Filter bits
    const uint32_t CAN1_F10R1_FB27 = 1U << 27 ;

  // Field FB28: Filter bits
    const uint32_t CAN1_F10R1_FB28 = 1U << 28 ;

  // Field FB29: Filter bits
    const uint32_t CAN1_F10R1_FB29 = 1U << 29 ;

  // Field FB30: Filter bits
    const uint32_t CAN1_F10R1_FB30 = 1U << 30 ;

  // Field FB31: Filter bits
    const uint32_t CAN1_F10R1_FB31 = 1U << 31 ;

//---  Register F10R2: Filter bank 10 register 2
  #define CAN1_F10R2 (* ((volatile uint32_t *) (0x40006400 + 660)))

  // Field FB0: Filter bits
    const uint32_t CAN1_F10R2_FB0 = 1U << 0 ;

  // Field FB1: Filter bits
    const uint32_t CAN1_F10R2_FB1 = 1U << 1 ;

  // Field FB2: Filter bits
    const uint32_t CAN1_F10R2_FB2 = 1U << 2 ;

  // Field FB3: Filter bits
    const uint32_t CAN1_F10R2_FB3 = 1U << 3 ;

  // Field FB4: Filter bits
    const uint32_t CAN1_F10R2_FB4 = 1U << 4 ;

  // Field FB5: Filter bits
    const uint32_t CAN1_F10R2_FB5 = 1U << 5 ;

  // Field FB6: Filter bits
    const uint32_t CAN1_F10R2_FB6 = 1U << 6 ;

  // Field FB7: Filter bits
    const uint32_t CAN1_F10R2_FB7 = 1U << 7 ;

  // Field FB8: Filter bits
    const uint32_t CAN1_F10R2_FB8 = 1U << 8 ;

  // Field FB9: Filter bits
    const uint32_t CAN1_F10R2_FB9 = 1U << 9 ;

  // Field FB10: Filter bits
    const uint32_t CAN1_F10R2_FB10 = 1U << 10 ;

  // Field FB11: Filter bits
    const uint32_t CAN1_F10R2_FB11 = 1U << 11 ;

  // Field FB12: Filter bits
    const uint32_t CAN1_F10R2_FB12 = 1U << 12 ;

  // Field FB13: Filter bits
    const uint32_t CAN1_F10R2_FB13 = 1U << 13 ;

  // Field FB14: Filter bits
    const uint32_t CAN1_F10R2_FB14 = 1U << 14 ;

  // Field FB15: Filter bits
    const uint32_t CAN1_F10R2_FB15 = 1U << 15 ;

  // Field FB16: Filter bits
    const uint32_t CAN1_F10R2_FB16 = 1U << 16 ;

  // Field FB17: Filter bits
    const uint32_t CAN1_F10R2_FB17 = 1U << 17 ;

  // Field FB18: Filter bits
    const uint32_t CAN1_F10R2_FB18 = 1U << 18 ;

  // Field FB19: Filter bits
    const uint32_t CAN1_F10R2_FB19 = 1U << 19 ;

  // Field FB20: Filter bits
    const uint32_t CAN1_F10R2_FB20 = 1U << 20 ;

  // Field FB21: Filter bits
    const uint32_t CAN1_F10R2_FB21 = 1U << 21 ;

  // Field FB22: Filter bits
    const uint32_t CAN1_F10R2_FB22 = 1U << 22 ;

  // Field FB23: Filter bits
    const uint32_t CAN1_F10R2_FB23 = 1U << 23 ;

  // Field FB24: Filter bits
    const uint32_t CAN1_F10R2_FB24 = 1U << 24 ;

  // Field FB25: Filter bits
    const uint32_t CAN1_F10R2_FB25 = 1U << 25 ;

  // Field FB26: Filter bits
    const uint32_t CAN1_F10R2_FB26 = 1U << 26 ;

  // Field FB27: Filter bits
    const uint32_t CAN1_F10R2_FB27 = 1U << 27 ;

  // Field FB28: Filter bits
    const uint32_t CAN1_F10R2_FB28 = 1U << 28 ;

  // Field FB29: Filter bits
    const uint32_t CAN1_F10R2_FB29 = 1U << 29 ;

  // Field FB30: Filter bits
    const uint32_t CAN1_F10R2_FB30 = 1U << 30 ;

  // Field FB31: Filter bits
    const uint32_t CAN1_F10R2_FB31 = 1U << 31 ;

//---  Register F11R1: Filter bank 11 register 1
  #define CAN1_F11R1 (* ((volatile uint32_t *) (0x40006400 + 664)))

  // Field FB0: Filter bits
    const uint32_t CAN1_F11R1_FB0 = 1U << 0 ;

  // Field FB1: Filter bits
    const uint32_t CAN1_F11R1_FB1 = 1U << 1 ;

  // Field FB2: Filter bits
    const uint32_t CAN1_F11R1_FB2 = 1U << 2 ;

  // Field FB3: Filter bits
    const uint32_t CAN1_F11R1_FB3 = 1U << 3 ;

  // Field FB4: Filter bits
    const uint32_t CAN1_F11R1_FB4 = 1U << 4 ;

  // Field FB5: Filter bits
    const uint32_t CAN1_F11R1_FB5 = 1U << 5 ;

  // Field FB6: Filter bits
    const uint32_t CAN1_F11R1_FB6 = 1U << 6 ;

  // Field FB7: Filter bits
    const uint32_t CAN1_F11R1_FB7 = 1U << 7 ;

  // Field FB8: Filter bits
    const uint32_t CAN1_F11R1_FB8 = 1U << 8 ;

  // Field FB9: Filter bits
    const uint32_t CAN1_F11R1_FB9 = 1U << 9 ;

  // Field FB10: Filter bits
    const uint32_t CAN1_F11R1_FB10 = 1U << 10 ;

  // Field FB11: Filter bits
    const uint32_t CAN1_F11R1_FB11 = 1U << 11 ;

  // Field FB12: Filter bits
    const uint32_t CAN1_F11R1_FB12 = 1U << 12 ;

  // Field FB13: Filter bits
    const uint32_t CAN1_F11R1_FB13 = 1U << 13 ;

  // Field FB14: Filter bits
    const uint32_t CAN1_F11R1_FB14 = 1U << 14 ;

  // Field FB15: Filter bits
    const uint32_t CAN1_F11R1_FB15 = 1U << 15 ;

  // Field FB16: Filter bits
    const uint32_t CAN1_F11R1_FB16 = 1U << 16 ;

  // Field FB17: Filter bits
    const uint32_t CAN1_F11R1_FB17 = 1U << 17 ;

  // Field FB18: Filter bits
    const uint32_t CAN1_F11R1_FB18 = 1U << 18 ;

  // Field FB19: Filter bits
    const uint32_t CAN1_F11R1_FB19 = 1U << 19 ;

  // Field FB20: Filter bits
    const uint32_t CAN1_F11R1_FB20 = 1U << 20 ;

  // Field FB21: Filter bits
    const uint32_t CAN1_F11R1_FB21 = 1U << 21 ;

  // Field FB22: Filter bits
    const uint32_t CAN1_F11R1_FB22 = 1U << 22 ;

  // Field FB23: Filter bits
    const uint32_t CAN1_F11R1_FB23 = 1U << 23 ;

  // Field FB24: Filter bits
    const uint32_t CAN1_F11R1_FB24 = 1U << 24 ;

  // Field FB25: Filter bits
    const uint32_t CAN1_F11R1_FB25 = 1U << 25 ;

  // Field FB26: Filter bits
    const uint32_t CAN1_F11R1_FB26 = 1U << 26 ;

  // Field FB27: Filter bits
    const uint32_t CAN1_F11R1_FB27 = 1U << 27 ;

  // Field FB28: Filter bits
    const uint32_t CAN1_F11R1_FB28 = 1U << 28 ;

  // Field FB29: Filter bits
    const uint32_t CAN1_F11R1_FB29 = 1U << 29 ;

  // Field FB30: Filter bits
    const uint32_t CAN1_F11R1_FB30 = 1U << 30 ;

  // Field FB31: Filter bits
    const uint32_t CAN1_F11R1_FB31 = 1U << 31 ;

//---  Register F11R2: Filter bank 11 register 2
  #define CAN1_F11R2 (* ((volatile uint32_t *) (0x40006400 + 668)))

  // Field FB0: Filter bits
    const uint32_t CAN1_F11R2_FB0 = 1U << 0 ;

  // Field FB1: Filter bits
    const uint32_t CAN1_F11R2_FB1 = 1U << 1 ;

  // Field FB2: Filter bits
    const uint32_t CAN1_F11R2_FB2 = 1U << 2 ;

  // Field FB3: Filter bits
    const uint32_t CAN1_F11R2_FB3 = 1U << 3 ;

  // Field FB4: Filter bits
    const uint32_t CAN1_F11R2_FB4 = 1U << 4 ;

  // Field FB5: Filter bits
    const uint32_t CAN1_F11R2_FB5 = 1U << 5 ;

  // Field FB6: Filter bits
    const uint32_t CAN1_F11R2_FB6 = 1U << 6 ;

  // Field FB7: Filter bits
    const uint32_t CAN1_F11R2_FB7 = 1U << 7 ;

  // Field FB8: Filter bits
    const uint32_t CAN1_F11R2_FB8 = 1U << 8 ;

  // Field FB9: Filter bits
    const uint32_t CAN1_F11R2_FB9 = 1U << 9 ;

  // Field FB10: Filter bits
    const uint32_t CAN1_F11R2_FB10 = 1U << 10 ;

  // Field FB11: Filter bits
    const uint32_t CAN1_F11R2_FB11 = 1U << 11 ;

  // Field FB12: Filter bits
    const uint32_t CAN1_F11R2_FB12 = 1U << 12 ;

  // Field FB13: Filter bits
    const uint32_t CAN1_F11R2_FB13 = 1U << 13 ;

  // Field FB14: Filter bits
    const uint32_t CAN1_F11R2_FB14 = 1U << 14 ;

  // Field FB15: Filter bits
    const uint32_t CAN1_F11R2_FB15 = 1U << 15 ;

  // Field FB16: Filter bits
    const uint32_t CAN1_F11R2_FB16 = 1U << 16 ;

  // Field FB17: Filter bits
    const uint32_t CAN1_F11R2_FB17 = 1U << 17 ;

  // Field FB18: Filter bits
    const uint32_t CAN1_F11R2_FB18 = 1U << 18 ;

  // Field FB19: Filter bits
    const uint32_t CAN1_F11R2_FB19 = 1U << 19 ;

  // Field FB20: Filter bits
    const uint32_t CAN1_F11R2_FB20 = 1U << 20 ;

  // Field FB21: Filter bits
    const uint32_t CAN1_F11R2_FB21 = 1U << 21 ;

  // Field FB22: Filter bits
    const uint32_t CAN1_F11R2_FB22 = 1U << 22 ;

  // Field FB23: Filter bits
    const uint32_t CAN1_F11R2_FB23 = 1U << 23 ;

  // Field FB24: Filter bits
    const uint32_t CAN1_F11R2_FB24 = 1U << 24 ;

  // Field FB25: Filter bits
    const uint32_t CAN1_F11R2_FB25 = 1U << 25 ;

  // Field FB26: Filter bits
    const uint32_t CAN1_F11R2_FB26 = 1U << 26 ;

  // Field FB27: Filter bits
    const uint32_t CAN1_F11R2_FB27 = 1U << 27 ;

  // Field FB28: Filter bits
    const uint32_t CAN1_F11R2_FB28 = 1U << 28 ;

  // Field FB29: Filter bits
    const uint32_t CAN1_F11R2_FB29 = 1U << 29 ;

  // Field FB30: Filter bits
    const uint32_t CAN1_F11R2_FB30 = 1U << 30 ;

  // Field FB31: Filter bits
    const uint32_t CAN1_F11R2_FB31 = 1U << 31 ;

//---  Register F12R1: Filter bank 4 register 1
  #define CAN1_F12R1 (* ((volatile uint32_t *) (0x40006400 + 672)))

  // Field FB0: Filter bits
    const uint32_t CAN1_F12R1_FB0 = 1U << 0 ;

  // Field FB1: Filter bits
    const uint32_t CAN1_F12R1_FB1 = 1U << 1 ;

  // Field FB2: Filter bits
    const uint32_t CAN1_F12R1_FB2 = 1U << 2 ;

  // Field FB3: Filter bits
    const uint32_t CAN1_F12R1_FB3 = 1U << 3 ;

  // Field FB4: Filter bits
    const uint32_t CAN1_F12R1_FB4 = 1U << 4 ;

  // Field FB5: Filter bits
    const uint32_t CAN1_F12R1_FB5 = 1U << 5 ;

  // Field FB6: Filter bits
    const uint32_t CAN1_F12R1_FB6 = 1U << 6 ;

  // Field FB7: Filter bits
    const uint32_t CAN1_F12R1_FB7 = 1U << 7 ;

  // Field FB8: Filter bits
    const uint32_t CAN1_F12R1_FB8 = 1U << 8 ;

  // Field FB9: Filter bits
    const uint32_t CAN1_F12R1_FB9 = 1U << 9 ;

  // Field FB10: Filter bits
    const uint32_t CAN1_F12R1_FB10 = 1U << 10 ;

  // Field FB11: Filter bits
    const uint32_t CAN1_F12R1_FB11 = 1U << 11 ;

  // Field FB12: Filter bits
    const uint32_t CAN1_F12R1_FB12 = 1U << 12 ;

  // Field FB13: Filter bits
    const uint32_t CAN1_F12R1_FB13 = 1U << 13 ;

  // Field FB14: Filter bits
    const uint32_t CAN1_F12R1_FB14 = 1U << 14 ;

  // Field FB15: Filter bits
    const uint32_t CAN1_F12R1_FB15 = 1U << 15 ;

  // Field FB16: Filter bits
    const uint32_t CAN1_F12R1_FB16 = 1U << 16 ;

  // Field FB17: Filter bits
    const uint32_t CAN1_F12R1_FB17 = 1U << 17 ;

  // Field FB18: Filter bits
    const uint32_t CAN1_F12R1_FB18 = 1U << 18 ;

  // Field FB19: Filter bits
    const uint32_t CAN1_F12R1_FB19 = 1U << 19 ;

  // Field FB20: Filter bits
    const uint32_t CAN1_F12R1_FB20 = 1U << 20 ;

  // Field FB21: Filter bits
    const uint32_t CAN1_F12R1_FB21 = 1U << 21 ;

  // Field FB22: Filter bits
    const uint32_t CAN1_F12R1_FB22 = 1U << 22 ;

  // Field FB23: Filter bits
    const uint32_t CAN1_F12R1_FB23 = 1U << 23 ;

  // Field FB24: Filter bits
    const uint32_t CAN1_F12R1_FB24 = 1U << 24 ;

  // Field FB25: Filter bits
    const uint32_t CAN1_F12R1_FB25 = 1U << 25 ;

  // Field FB26: Filter bits
    const uint32_t CAN1_F12R1_FB26 = 1U << 26 ;

  // Field FB27: Filter bits
    const uint32_t CAN1_F12R1_FB27 = 1U << 27 ;

  // Field FB28: Filter bits
    const uint32_t CAN1_F12R1_FB28 = 1U << 28 ;

  // Field FB29: Filter bits
    const uint32_t CAN1_F12R1_FB29 = 1U << 29 ;

  // Field FB30: Filter bits
    const uint32_t CAN1_F12R1_FB30 = 1U << 30 ;

  // Field FB31: Filter bits
    const uint32_t CAN1_F12R1_FB31 = 1U << 31 ;

//---  Register F12R2: Filter bank 12 register 2
  #define CAN1_F12R2 (* ((volatile uint32_t *) (0x40006400 + 676)))

  // Field FB0: Filter bits
    const uint32_t CAN1_F12R2_FB0 = 1U << 0 ;

  // Field FB1: Filter bits
    const uint32_t CAN1_F12R2_FB1 = 1U << 1 ;

  // Field FB2: Filter bits
    const uint32_t CAN1_F12R2_FB2 = 1U << 2 ;

  // Field FB3: Filter bits
    const uint32_t CAN1_F12R2_FB3 = 1U << 3 ;

  // Field FB4: Filter bits
    const uint32_t CAN1_F12R2_FB4 = 1U << 4 ;

  // Field FB5: Filter bits
    const uint32_t CAN1_F12R2_FB5 = 1U << 5 ;

  // Field FB6: Filter bits
    const uint32_t CAN1_F12R2_FB6 = 1U << 6 ;

  // Field FB7: Filter bits
    const uint32_t CAN1_F12R2_FB7 = 1U << 7 ;

  // Field FB8: Filter bits
    const uint32_t CAN1_F12R2_FB8 = 1U << 8 ;

  // Field FB9: Filter bits
    const uint32_t CAN1_F12R2_FB9 = 1U << 9 ;

  // Field FB10: Filter bits
    const uint32_t CAN1_F12R2_FB10 = 1U << 10 ;

  // Field FB11: Filter bits
    const uint32_t CAN1_F12R2_FB11 = 1U << 11 ;

  // Field FB12: Filter bits
    const uint32_t CAN1_F12R2_FB12 = 1U << 12 ;

  // Field FB13: Filter bits
    const uint32_t CAN1_F12R2_FB13 = 1U << 13 ;

  // Field FB14: Filter bits
    const uint32_t CAN1_F12R2_FB14 = 1U << 14 ;

  // Field FB15: Filter bits
    const uint32_t CAN1_F12R2_FB15 = 1U << 15 ;

  // Field FB16: Filter bits
    const uint32_t CAN1_F12R2_FB16 = 1U << 16 ;

  // Field FB17: Filter bits
    const uint32_t CAN1_F12R2_FB17 = 1U << 17 ;

  // Field FB18: Filter bits
    const uint32_t CAN1_F12R2_FB18 = 1U << 18 ;

  // Field FB19: Filter bits
    const uint32_t CAN1_F12R2_FB19 = 1U << 19 ;

  // Field FB20: Filter bits
    const uint32_t CAN1_F12R2_FB20 = 1U << 20 ;

  // Field FB21: Filter bits
    const uint32_t CAN1_F12R2_FB21 = 1U << 21 ;

  // Field FB22: Filter bits
    const uint32_t CAN1_F12R2_FB22 = 1U << 22 ;

  // Field FB23: Filter bits
    const uint32_t CAN1_F12R2_FB23 = 1U << 23 ;

  // Field FB24: Filter bits
    const uint32_t CAN1_F12R2_FB24 = 1U << 24 ;

  // Field FB25: Filter bits
    const uint32_t CAN1_F12R2_FB25 = 1U << 25 ;

  // Field FB26: Filter bits
    const uint32_t CAN1_F12R2_FB26 = 1U << 26 ;

  // Field FB27: Filter bits
    const uint32_t CAN1_F12R2_FB27 = 1U << 27 ;

  // Field FB28: Filter bits
    const uint32_t CAN1_F12R2_FB28 = 1U << 28 ;

  // Field FB29: Filter bits
    const uint32_t CAN1_F12R2_FB29 = 1U << 29 ;

  // Field FB30: Filter bits
    const uint32_t CAN1_F12R2_FB30 = 1U << 30 ;

  // Field FB31: Filter bits
    const uint32_t CAN1_F12R2_FB31 = 1U << 31 ;

//---  Register F13R1: Filter bank 13 register 1
  #define CAN1_F13R1 (* ((volatile uint32_t *) (0x40006400 + 680)))

  // Field FB0: Filter bits
    const uint32_t CAN1_F13R1_FB0 = 1U << 0 ;

  // Field FB1: Filter bits
    const uint32_t CAN1_F13R1_FB1 = 1U << 1 ;

  // Field FB2: Filter bits
    const uint32_t CAN1_F13R1_FB2 = 1U << 2 ;

  // Field FB3: Filter bits
    const uint32_t CAN1_F13R1_FB3 = 1U << 3 ;

  // Field FB4: Filter bits
    const uint32_t CAN1_F13R1_FB4 = 1U << 4 ;

  // Field FB5: Filter bits
    const uint32_t CAN1_F13R1_FB5 = 1U << 5 ;

  // Field FB6: Filter bits
    const uint32_t CAN1_F13R1_FB6 = 1U << 6 ;

  // Field FB7: Filter bits
    const uint32_t CAN1_F13R1_FB7 = 1U << 7 ;

  // Field FB8: Filter bits
    const uint32_t CAN1_F13R1_FB8 = 1U << 8 ;

  // Field FB9: Filter bits
    const uint32_t CAN1_F13R1_FB9 = 1U << 9 ;

  // Field FB10: Filter bits
    const uint32_t CAN1_F13R1_FB10 = 1U << 10 ;

  // Field FB11: Filter bits
    const uint32_t CAN1_F13R1_FB11 = 1U << 11 ;

  // Field FB12: Filter bits
    const uint32_t CAN1_F13R1_FB12 = 1U << 12 ;

  // Field FB13: Filter bits
    const uint32_t CAN1_F13R1_FB13 = 1U << 13 ;

  // Field FB14: Filter bits
    const uint32_t CAN1_F13R1_FB14 = 1U << 14 ;

  // Field FB15: Filter bits
    const uint32_t CAN1_F13R1_FB15 = 1U << 15 ;

  // Field FB16: Filter bits
    const uint32_t CAN1_F13R1_FB16 = 1U << 16 ;

  // Field FB17: Filter bits
    const uint32_t CAN1_F13R1_FB17 = 1U << 17 ;

  // Field FB18: Filter bits
    const uint32_t CAN1_F13R1_FB18 = 1U << 18 ;

  // Field FB19: Filter bits
    const uint32_t CAN1_F13R1_FB19 = 1U << 19 ;

  // Field FB20: Filter bits
    const uint32_t CAN1_F13R1_FB20 = 1U << 20 ;

  // Field FB21: Filter bits
    const uint32_t CAN1_F13R1_FB21 = 1U << 21 ;

  // Field FB22: Filter bits
    const uint32_t CAN1_F13R1_FB22 = 1U << 22 ;

  // Field FB23: Filter bits
    const uint32_t CAN1_F13R1_FB23 = 1U << 23 ;

  // Field FB24: Filter bits
    const uint32_t CAN1_F13R1_FB24 = 1U << 24 ;

  // Field FB25: Filter bits
    const uint32_t CAN1_F13R1_FB25 = 1U << 25 ;

  // Field FB26: Filter bits
    const uint32_t CAN1_F13R1_FB26 = 1U << 26 ;

  // Field FB27: Filter bits
    const uint32_t CAN1_F13R1_FB27 = 1U << 27 ;

  // Field FB28: Filter bits
    const uint32_t CAN1_F13R1_FB28 = 1U << 28 ;

  // Field FB29: Filter bits
    const uint32_t CAN1_F13R1_FB29 = 1U << 29 ;

  // Field FB30: Filter bits
    const uint32_t CAN1_F13R1_FB30 = 1U << 30 ;

  // Field FB31: Filter bits
    const uint32_t CAN1_F13R1_FB31 = 1U << 31 ;

//---  Register F13R2: Filter bank 13 register 2
  #define CAN1_F13R2 (* ((volatile uint32_t *) (0x40006400 + 684)))

  // Field FB0: Filter bits
    const uint32_t CAN1_F13R2_FB0 = 1U << 0 ;

  // Field FB1: Filter bits
    const uint32_t CAN1_F13R2_FB1 = 1U << 1 ;

  // Field FB2: Filter bits
    const uint32_t CAN1_F13R2_FB2 = 1U << 2 ;

  // Field FB3: Filter bits
    const uint32_t CAN1_F13R2_FB3 = 1U << 3 ;

  // Field FB4: Filter bits
    const uint32_t CAN1_F13R2_FB4 = 1U << 4 ;

  // Field FB5: Filter bits
    const uint32_t CAN1_F13R2_FB5 = 1U << 5 ;

  // Field FB6: Filter bits
    const uint32_t CAN1_F13R2_FB6 = 1U << 6 ;

  // Field FB7: Filter bits
    const uint32_t CAN1_F13R2_FB7 = 1U << 7 ;

  // Field FB8: Filter bits
    const uint32_t CAN1_F13R2_FB8 = 1U << 8 ;

  // Field FB9: Filter bits
    const uint32_t CAN1_F13R2_FB9 = 1U << 9 ;

  // Field FB10: Filter bits
    const uint32_t CAN1_F13R2_FB10 = 1U << 10 ;

  // Field FB11: Filter bits
    const uint32_t CAN1_F13R2_FB11 = 1U << 11 ;

  // Field FB12: Filter bits
    const uint32_t CAN1_F13R2_FB12 = 1U << 12 ;

  // Field FB13: Filter bits
    const uint32_t CAN1_F13R2_FB13 = 1U << 13 ;

  // Field FB14: Filter bits
    const uint32_t CAN1_F13R2_FB14 = 1U << 14 ;

  // Field FB15: Filter bits
    const uint32_t CAN1_F13R2_FB15 = 1U << 15 ;

  // Field FB16: Filter bits
    const uint32_t CAN1_F13R2_FB16 = 1U << 16 ;

  // Field FB17: Filter bits
    const uint32_t CAN1_F13R2_FB17 = 1U << 17 ;

  // Field FB18: Filter bits
    const uint32_t CAN1_F13R2_FB18 = 1U << 18 ;

  // Field FB19: Filter bits
    const uint32_t CAN1_F13R2_FB19 = 1U << 19 ;

  // Field FB20: Filter bits
    const uint32_t CAN1_F13R2_FB20 = 1U << 20 ;

  // Field FB21: Filter bits
    const uint32_t CAN1_F13R2_FB21 = 1U << 21 ;

  // Field FB22: Filter bits
    const uint32_t CAN1_F13R2_FB22 = 1U << 22 ;

  // Field FB23: Filter bits
    const uint32_t CAN1_F13R2_FB23 = 1U << 23 ;

  // Field FB24: Filter bits
    const uint32_t CAN1_F13R2_FB24 = 1U << 24 ;

  // Field FB25: Filter bits
    const uint32_t CAN1_F13R2_FB25 = 1U << 25 ;

  // Field FB26: Filter bits
    const uint32_t CAN1_F13R2_FB26 = 1U << 26 ;

  // Field FB27: Filter bits
    const uint32_t CAN1_F13R2_FB27 = 1U << 27 ;

  // Field FB28: Filter bits
    const uint32_t CAN1_F13R2_FB28 = 1U << 28 ;

  // Field FB29: Filter bits
    const uint32_t CAN1_F13R2_FB29 = 1U << 29 ;

  // Field FB30: Filter bits
    const uint32_t CAN1_F13R2_FB30 = 1U << 30 ;

  // Field FB31: Filter bits
    const uint32_t CAN1_F13R2_FB31 = 1U << 31 ;

//---  Register F14R1: Filter bank 14 register 1
  #define CAN1_F14R1 (* ((volatile uint32_t *) (0x40006400 + 688)))

  // Field FB0: Filter bits
    const uint32_t CAN1_F14R1_FB0 = 1U << 0 ;

  // Field FB1: Filter bits
    const uint32_t CAN1_F14R1_FB1 = 1U << 1 ;

  // Field FB2: Filter bits
    const uint32_t CAN1_F14R1_FB2 = 1U << 2 ;

  // Field FB3: Filter bits
    const uint32_t CAN1_F14R1_FB3 = 1U << 3 ;

  // Field FB4: Filter bits
    const uint32_t CAN1_F14R1_FB4 = 1U << 4 ;

  // Field FB5: Filter bits
    const uint32_t CAN1_F14R1_FB5 = 1U << 5 ;

  // Field FB6: Filter bits
    const uint32_t CAN1_F14R1_FB6 = 1U << 6 ;

  // Field FB7: Filter bits
    const uint32_t CAN1_F14R1_FB7 = 1U << 7 ;

  // Field FB8: Filter bits
    const uint32_t CAN1_F14R1_FB8 = 1U << 8 ;

  // Field FB9: Filter bits
    const uint32_t CAN1_F14R1_FB9 = 1U << 9 ;

  // Field FB10: Filter bits
    const uint32_t CAN1_F14R1_FB10 = 1U << 10 ;

  // Field FB11: Filter bits
    const uint32_t CAN1_F14R1_FB11 = 1U << 11 ;

  // Field FB12: Filter bits
    const uint32_t CAN1_F14R1_FB12 = 1U << 12 ;

  // Field FB13: Filter bits
    const uint32_t CAN1_F14R1_FB13 = 1U << 13 ;

  // Field FB14: Filter bits
    const uint32_t CAN1_F14R1_FB14 = 1U << 14 ;

  // Field FB15: Filter bits
    const uint32_t CAN1_F14R1_FB15 = 1U << 15 ;

  // Field FB16: Filter bits
    const uint32_t CAN1_F14R1_FB16 = 1U << 16 ;

  // Field FB17: Filter bits
    const uint32_t CAN1_F14R1_FB17 = 1U << 17 ;

  // Field FB18: Filter bits
    const uint32_t CAN1_F14R1_FB18 = 1U << 18 ;

  // Field FB19: Filter bits
    const uint32_t CAN1_F14R1_FB19 = 1U << 19 ;

  // Field FB20: Filter bits
    const uint32_t CAN1_F14R1_FB20 = 1U << 20 ;

  // Field FB21: Filter bits
    const uint32_t CAN1_F14R1_FB21 = 1U << 21 ;

  // Field FB22: Filter bits
    const uint32_t CAN1_F14R1_FB22 = 1U << 22 ;

  // Field FB23: Filter bits
    const uint32_t CAN1_F14R1_FB23 = 1U << 23 ;

  // Field FB24: Filter bits
    const uint32_t CAN1_F14R1_FB24 = 1U << 24 ;

  // Field FB25: Filter bits
    const uint32_t CAN1_F14R1_FB25 = 1U << 25 ;

  // Field FB26: Filter bits
    const uint32_t CAN1_F14R1_FB26 = 1U << 26 ;

  // Field FB27: Filter bits
    const uint32_t CAN1_F14R1_FB27 = 1U << 27 ;

  // Field FB28: Filter bits
    const uint32_t CAN1_F14R1_FB28 = 1U << 28 ;

  // Field FB29: Filter bits
    const uint32_t CAN1_F14R1_FB29 = 1U << 29 ;

  // Field FB30: Filter bits
    const uint32_t CAN1_F14R1_FB30 = 1U << 30 ;

  // Field FB31: Filter bits
    const uint32_t CAN1_F14R1_FB31 = 1U << 31 ;

//---  Register F14R2: Filter bank 14 register 2
  #define CAN1_F14R2 (* ((volatile uint32_t *) (0x40006400 + 692)))

  // Field FB0: Filter bits
    const uint32_t CAN1_F14R2_FB0 = 1U << 0 ;

  // Field FB1: Filter bits
    const uint32_t CAN1_F14R2_FB1 = 1U << 1 ;

  // Field FB2: Filter bits
    const uint32_t CAN1_F14R2_FB2 = 1U << 2 ;

  // Field FB3: Filter bits
    const uint32_t CAN1_F14R2_FB3 = 1U << 3 ;

  // Field FB4: Filter bits
    const uint32_t CAN1_F14R2_FB4 = 1U << 4 ;

  // Field FB5: Filter bits
    const uint32_t CAN1_F14R2_FB5 = 1U << 5 ;

  // Field FB6: Filter bits
    const uint32_t CAN1_F14R2_FB6 = 1U << 6 ;

  // Field FB7: Filter bits
    const uint32_t CAN1_F14R2_FB7 = 1U << 7 ;

  // Field FB8: Filter bits
    const uint32_t CAN1_F14R2_FB8 = 1U << 8 ;

  // Field FB9: Filter bits
    const uint32_t CAN1_F14R2_FB9 = 1U << 9 ;

  // Field FB10: Filter bits
    const uint32_t CAN1_F14R2_FB10 = 1U << 10 ;

  // Field FB11: Filter bits
    const uint32_t CAN1_F14R2_FB11 = 1U << 11 ;

  // Field FB12: Filter bits
    const uint32_t CAN1_F14R2_FB12 = 1U << 12 ;

  // Field FB13: Filter bits
    const uint32_t CAN1_F14R2_FB13 = 1U << 13 ;

  // Field FB14: Filter bits
    const uint32_t CAN1_F14R2_FB14 = 1U << 14 ;

  // Field FB15: Filter bits
    const uint32_t CAN1_F14R2_FB15 = 1U << 15 ;

  // Field FB16: Filter bits
    const uint32_t CAN1_F14R2_FB16 = 1U << 16 ;

  // Field FB17: Filter bits
    const uint32_t CAN1_F14R2_FB17 = 1U << 17 ;

  // Field FB18: Filter bits
    const uint32_t CAN1_F14R2_FB18 = 1U << 18 ;

  // Field FB19: Filter bits
    const uint32_t CAN1_F14R2_FB19 = 1U << 19 ;

  // Field FB20: Filter bits
    const uint32_t CAN1_F14R2_FB20 = 1U << 20 ;

  // Field FB21: Filter bits
    const uint32_t CAN1_F14R2_FB21 = 1U << 21 ;

  // Field FB22: Filter bits
    const uint32_t CAN1_F14R2_FB22 = 1U << 22 ;

  // Field FB23: Filter bits
    const uint32_t CAN1_F14R2_FB23 = 1U << 23 ;

  // Field FB24: Filter bits
    const uint32_t CAN1_F14R2_FB24 = 1U << 24 ;

  // Field FB25: Filter bits
    const uint32_t CAN1_F14R2_FB25 = 1U << 25 ;

  // Field FB26: Filter bits
    const uint32_t CAN1_F14R2_FB26 = 1U << 26 ;

  // Field FB27: Filter bits
    const uint32_t CAN1_F14R2_FB27 = 1U << 27 ;

  // Field FB28: Filter bits
    const uint32_t CAN1_F14R2_FB28 = 1U << 28 ;

  // Field FB29: Filter bits
    const uint32_t CAN1_F14R2_FB29 = 1U << 29 ;

  // Field FB30: Filter bits
    const uint32_t CAN1_F14R2_FB30 = 1U << 30 ;

  // Field FB31: Filter bits
    const uint32_t CAN1_F14R2_FB31 = 1U << 31 ;

//---  Register F15R1: Filter bank 15 register 1
  #define CAN1_F15R1 (* ((volatile uint32_t *) (0x40006400 + 696)))

  // Field FB0: Filter bits
    const uint32_t CAN1_F15R1_FB0 = 1U << 0 ;

  // Field FB1: Filter bits
    const uint32_t CAN1_F15R1_FB1 = 1U << 1 ;

  // Field FB2: Filter bits
    const uint32_t CAN1_F15R1_FB2 = 1U << 2 ;

  // Field FB3: Filter bits
    const uint32_t CAN1_F15R1_FB3 = 1U << 3 ;

  // Field FB4: Filter bits
    const uint32_t CAN1_F15R1_FB4 = 1U << 4 ;

  // Field FB5: Filter bits
    const uint32_t CAN1_F15R1_FB5 = 1U << 5 ;

  // Field FB6: Filter bits
    const uint32_t CAN1_F15R1_FB6 = 1U << 6 ;

  // Field FB7: Filter bits
    const uint32_t CAN1_F15R1_FB7 = 1U << 7 ;

  // Field FB8: Filter bits
    const uint32_t CAN1_F15R1_FB8 = 1U << 8 ;

  // Field FB9: Filter bits
    const uint32_t CAN1_F15R1_FB9 = 1U << 9 ;

  // Field FB10: Filter bits
    const uint32_t CAN1_F15R1_FB10 = 1U << 10 ;

  // Field FB11: Filter bits
    const uint32_t CAN1_F15R1_FB11 = 1U << 11 ;

  // Field FB12: Filter bits
    const uint32_t CAN1_F15R1_FB12 = 1U << 12 ;

  // Field FB13: Filter bits
    const uint32_t CAN1_F15R1_FB13 = 1U << 13 ;

  // Field FB14: Filter bits
    const uint32_t CAN1_F15R1_FB14 = 1U << 14 ;

  // Field FB15: Filter bits
    const uint32_t CAN1_F15R1_FB15 = 1U << 15 ;

  // Field FB16: Filter bits
    const uint32_t CAN1_F15R1_FB16 = 1U << 16 ;

  // Field FB17: Filter bits
    const uint32_t CAN1_F15R1_FB17 = 1U << 17 ;

  // Field FB18: Filter bits
    const uint32_t CAN1_F15R1_FB18 = 1U << 18 ;

  // Field FB19: Filter bits
    const uint32_t CAN1_F15R1_FB19 = 1U << 19 ;

  // Field FB20: Filter bits
    const uint32_t CAN1_F15R1_FB20 = 1U << 20 ;

  // Field FB21: Filter bits
    const uint32_t CAN1_F15R1_FB21 = 1U << 21 ;

  // Field FB22: Filter bits
    const uint32_t CAN1_F15R1_FB22 = 1U << 22 ;

  // Field FB23: Filter bits
    const uint32_t CAN1_F15R1_FB23 = 1U << 23 ;

  // Field FB24: Filter bits
    const uint32_t CAN1_F15R1_FB24 = 1U << 24 ;

  // Field FB25: Filter bits
    const uint32_t CAN1_F15R1_FB25 = 1U << 25 ;

  // Field FB26: Filter bits
    const uint32_t CAN1_F15R1_FB26 = 1U << 26 ;

  // Field FB27: Filter bits
    const uint32_t CAN1_F15R1_FB27 = 1U << 27 ;

  // Field FB28: Filter bits
    const uint32_t CAN1_F15R1_FB28 = 1U << 28 ;

  // Field FB29: Filter bits
    const uint32_t CAN1_F15R1_FB29 = 1U << 29 ;

  // Field FB30: Filter bits
    const uint32_t CAN1_F15R1_FB30 = 1U << 30 ;

  // Field FB31: Filter bits
    const uint32_t CAN1_F15R1_FB31 = 1U << 31 ;

//---  Register F15R2: Filter bank 15 register 2
  #define CAN1_F15R2 (* ((volatile uint32_t *) (0x40006400 + 700)))

  // Field FB0: Filter bits
    const uint32_t CAN1_F15R2_FB0 = 1U << 0 ;

  // Field FB1: Filter bits
    const uint32_t CAN1_F15R2_FB1 = 1U << 1 ;

  // Field FB2: Filter bits
    const uint32_t CAN1_F15R2_FB2 = 1U << 2 ;

  // Field FB3: Filter bits
    const uint32_t CAN1_F15R2_FB3 = 1U << 3 ;

  // Field FB4: Filter bits
    const uint32_t CAN1_F15R2_FB4 = 1U << 4 ;

  // Field FB5: Filter bits
    const uint32_t CAN1_F15R2_FB5 = 1U << 5 ;

  // Field FB6: Filter bits
    const uint32_t CAN1_F15R2_FB6 = 1U << 6 ;

  // Field FB7: Filter bits
    const uint32_t CAN1_F15R2_FB7 = 1U << 7 ;

  // Field FB8: Filter bits
    const uint32_t CAN1_F15R2_FB8 = 1U << 8 ;

  // Field FB9: Filter bits
    const uint32_t CAN1_F15R2_FB9 = 1U << 9 ;

  // Field FB10: Filter bits
    const uint32_t CAN1_F15R2_FB10 = 1U << 10 ;

  // Field FB11: Filter bits
    const uint32_t CAN1_F15R2_FB11 = 1U << 11 ;

  // Field FB12: Filter bits
    const uint32_t CAN1_F15R2_FB12 = 1U << 12 ;

  // Field FB13: Filter bits
    const uint32_t CAN1_F15R2_FB13 = 1U << 13 ;

  // Field FB14: Filter bits
    const uint32_t CAN1_F15R2_FB14 = 1U << 14 ;

  // Field FB15: Filter bits
    const uint32_t CAN1_F15R2_FB15 = 1U << 15 ;

  // Field FB16: Filter bits
    const uint32_t CAN1_F15R2_FB16 = 1U << 16 ;

  // Field FB17: Filter bits
    const uint32_t CAN1_F15R2_FB17 = 1U << 17 ;

  // Field FB18: Filter bits
    const uint32_t CAN1_F15R2_FB18 = 1U << 18 ;

  // Field FB19: Filter bits
    const uint32_t CAN1_F15R2_FB19 = 1U << 19 ;

  // Field FB20: Filter bits
    const uint32_t CAN1_F15R2_FB20 = 1U << 20 ;

  // Field FB21: Filter bits
    const uint32_t CAN1_F15R2_FB21 = 1U << 21 ;

  // Field FB22: Filter bits
    const uint32_t CAN1_F15R2_FB22 = 1U << 22 ;

  // Field FB23: Filter bits
    const uint32_t CAN1_F15R2_FB23 = 1U << 23 ;

  // Field FB24: Filter bits
    const uint32_t CAN1_F15R2_FB24 = 1U << 24 ;

  // Field FB25: Filter bits
    const uint32_t CAN1_F15R2_FB25 = 1U << 25 ;

  // Field FB26: Filter bits
    const uint32_t CAN1_F15R2_FB26 = 1U << 26 ;

  // Field FB27: Filter bits
    const uint32_t CAN1_F15R2_FB27 = 1U << 27 ;

  // Field FB28: Filter bits
    const uint32_t CAN1_F15R2_FB28 = 1U << 28 ;

  // Field FB29: Filter bits
    const uint32_t CAN1_F15R2_FB29 = 1U << 29 ;

  // Field FB30: Filter bits
    const uint32_t CAN1_F15R2_FB30 = 1U << 30 ;

  // Field FB31: Filter bits
    const uint32_t CAN1_F15R2_FB31 = 1U << 31 ;

//---  Register F16R1: Filter bank 16 register 1
  #define CAN1_F16R1 (* ((volatile uint32_t *) (0x40006400 + 704)))

  // Field FB0: Filter bits
    const uint32_t CAN1_F16R1_FB0 = 1U << 0 ;

  // Field FB1: Filter bits
    const uint32_t CAN1_F16R1_FB1 = 1U << 1 ;

  // Field FB2: Filter bits
    const uint32_t CAN1_F16R1_FB2 = 1U << 2 ;

  // Field FB3: Filter bits
    const uint32_t CAN1_F16R1_FB3 = 1U << 3 ;

  // Field FB4: Filter bits
    const uint32_t CAN1_F16R1_FB4 = 1U << 4 ;

  // Field FB5: Filter bits
    const uint32_t CAN1_F16R1_FB5 = 1U << 5 ;

  // Field FB6: Filter bits
    const uint32_t CAN1_F16R1_FB6 = 1U << 6 ;

  // Field FB7: Filter bits
    const uint32_t CAN1_F16R1_FB7 = 1U << 7 ;

  // Field FB8: Filter bits
    const uint32_t CAN1_F16R1_FB8 = 1U << 8 ;

  // Field FB9: Filter bits
    const uint32_t CAN1_F16R1_FB9 = 1U << 9 ;

  // Field FB10: Filter bits
    const uint32_t CAN1_F16R1_FB10 = 1U << 10 ;

  // Field FB11: Filter bits
    const uint32_t CAN1_F16R1_FB11 = 1U << 11 ;

  // Field FB12: Filter bits
    const uint32_t CAN1_F16R1_FB12 = 1U << 12 ;

  // Field FB13: Filter bits
    const uint32_t CAN1_F16R1_FB13 = 1U << 13 ;

  // Field FB14: Filter bits
    const uint32_t CAN1_F16R1_FB14 = 1U << 14 ;

  // Field FB15: Filter bits
    const uint32_t CAN1_F16R1_FB15 = 1U << 15 ;

  // Field FB16: Filter bits
    const uint32_t CAN1_F16R1_FB16 = 1U << 16 ;

  // Field FB17: Filter bits
    const uint32_t CAN1_F16R1_FB17 = 1U << 17 ;

  // Field FB18: Filter bits
    const uint32_t CAN1_F16R1_FB18 = 1U << 18 ;

  // Field FB19: Filter bits
    const uint32_t CAN1_F16R1_FB19 = 1U << 19 ;

  // Field FB20: Filter bits
    const uint32_t CAN1_F16R1_FB20 = 1U << 20 ;

  // Field FB21: Filter bits
    const uint32_t CAN1_F16R1_FB21 = 1U << 21 ;

  // Field FB22: Filter bits
    const uint32_t CAN1_F16R1_FB22 = 1U << 22 ;

  // Field FB23: Filter bits
    const uint32_t CAN1_F16R1_FB23 = 1U << 23 ;

  // Field FB24: Filter bits
    const uint32_t CAN1_F16R1_FB24 = 1U << 24 ;

  // Field FB25: Filter bits
    const uint32_t CAN1_F16R1_FB25 = 1U << 25 ;

  // Field FB26: Filter bits
    const uint32_t CAN1_F16R1_FB26 = 1U << 26 ;

  // Field FB27: Filter bits
    const uint32_t CAN1_F16R1_FB27 = 1U << 27 ;

  // Field FB28: Filter bits
    const uint32_t CAN1_F16R1_FB28 = 1U << 28 ;

  // Field FB29: Filter bits
    const uint32_t CAN1_F16R1_FB29 = 1U << 29 ;

  // Field FB30: Filter bits
    const uint32_t CAN1_F16R1_FB30 = 1U << 30 ;

  // Field FB31: Filter bits
    const uint32_t CAN1_F16R1_FB31 = 1U << 31 ;

//---  Register F16R2: Filter bank 16 register 2
  #define CAN1_F16R2 (* ((volatile uint32_t *) (0x40006400 + 708)))

  // Field FB0: Filter bits
    const uint32_t CAN1_F16R2_FB0 = 1U << 0 ;

  // Field FB1: Filter bits
    const uint32_t CAN1_F16R2_FB1 = 1U << 1 ;

  // Field FB2: Filter bits
    const uint32_t CAN1_F16R2_FB2 = 1U << 2 ;

  // Field FB3: Filter bits
    const uint32_t CAN1_F16R2_FB3 = 1U << 3 ;

  // Field FB4: Filter bits
    const uint32_t CAN1_F16R2_FB4 = 1U << 4 ;

  // Field FB5: Filter bits
    const uint32_t CAN1_F16R2_FB5 = 1U << 5 ;

  // Field FB6: Filter bits
    const uint32_t CAN1_F16R2_FB6 = 1U << 6 ;

  // Field FB7: Filter bits
    const uint32_t CAN1_F16R2_FB7 = 1U << 7 ;

  // Field FB8: Filter bits
    const uint32_t CAN1_F16R2_FB8 = 1U << 8 ;

  // Field FB9: Filter bits
    const uint32_t CAN1_F16R2_FB9 = 1U << 9 ;

  // Field FB10: Filter bits
    const uint32_t CAN1_F16R2_FB10 = 1U << 10 ;

  // Field FB11: Filter bits
    const uint32_t CAN1_F16R2_FB11 = 1U << 11 ;

  // Field FB12: Filter bits
    const uint32_t CAN1_F16R2_FB12 = 1U << 12 ;

  // Field FB13: Filter bits
    const uint32_t CAN1_F16R2_FB13 = 1U << 13 ;

  // Field FB14: Filter bits
    const uint32_t CAN1_F16R2_FB14 = 1U << 14 ;

  // Field FB15: Filter bits
    const uint32_t CAN1_F16R2_FB15 = 1U << 15 ;

  // Field FB16: Filter bits
    const uint32_t CAN1_F16R2_FB16 = 1U << 16 ;

  // Field FB17: Filter bits
    const uint32_t CAN1_F16R2_FB17 = 1U << 17 ;

  // Field FB18: Filter bits
    const uint32_t CAN1_F16R2_FB18 = 1U << 18 ;

  // Field FB19: Filter bits
    const uint32_t CAN1_F16R2_FB19 = 1U << 19 ;

  // Field FB20: Filter bits
    const uint32_t CAN1_F16R2_FB20 = 1U << 20 ;

  // Field FB21: Filter bits
    const uint32_t CAN1_F16R2_FB21 = 1U << 21 ;

  // Field FB22: Filter bits
    const uint32_t CAN1_F16R2_FB22 = 1U << 22 ;

  // Field FB23: Filter bits
    const uint32_t CAN1_F16R2_FB23 = 1U << 23 ;

  // Field FB24: Filter bits
    const uint32_t CAN1_F16R2_FB24 = 1U << 24 ;

  // Field FB25: Filter bits
    const uint32_t CAN1_F16R2_FB25 = 1U << 25 ;

  // Field FB26: Filter bits
    const uint32_t CAN1_F16R2_FB26 = 1U << 26 ;

  // Field FB27: Filter bits
    const uint32_t CAN1_F16R2_FB27 = 1U << 27 ;

  // Field FB28: Filter bits
    const uint32_t CAN1_F16R2_FB28 = 1U << 28 ;

  // Field FB29: Filter bits
    const uint32_t CAN1_F16R2_FB29 = 1U << 29 ;

  // Field FB30: Filter bits
    const uint32_t CAN1_F16R2_FB30 = 1U << 30 ;

  // Field FB31: Filter bits
    const uint32_t CAN1_F16R2_FB31 = 1U << 31 ;

//---  Register F17R1: Filter bank 17 register 1
  #define CAN1_F17R1 (* ((volatile uint32_t *) (0x40006400 + 712)))

  // Field FB0: Filter bits
    const uint32_t CAN1_F17R1_FB0 = 1U << 0 ;

  // Field FB1: Filter bits
    const uint32_t CAN1_F17R1_FB1 = 1U << 1 ;

  // Field FB2: Filter bits
    const uint32_t CAN1_F17R1_FB2 = 1U << 2 ;

  // Field FB3: Filter bits
    const uint32_t CAN1_F17R1_FB3 = 1U << 3 ;

  // Field FB4: Filter bits
    const uint32_t CAN1_F17R1_FB4 = 1U << 4 ;

  // Field FB5: Filter bits
    const uint32_t CAN1_F17R1_FB5 = 1U << 5 ;

  // Field FB6: Filter bits
    const uint32_t CAN1_F17R1_FB6 = 1U << 6 ;

  // Field FB7: Filter bits
    const uint32_t CAN1_F17R1_FB7 = 1U << 7 ;

  // Field FB8: Filter bits
    const uint32_t CAN1_F17R1_FB8 = 1U << 8 ;

  // Field FB9: Filter bits
    const uint32_t CAN1_F17R1_FB9 = 1U << 9 ;

  // Field FB10: Filter bits
    const uint32_t CAN1_F17R1_FB10 = 1U << 10 ;

  // Field FB11: Filter bits
    const uint32_t CAN1_F17R1_FB11 = 1U << 11 ;

  // Field FB12: Filter bits
    const uint32_t CAN1_F17R1_FB12 = 1U << 12 ;

  // Field FB13: Filter bits
    const uint32_t CAN1_F17R1_FB13 = 1U << 13 ;

  // Field FB14: Filter bits
    const uint32_t CAN1_F17R1_FB14 = 1U << 14 ;

  // Field FB15: Filter bits
    const uint32_t CAN1_F17R1_FB15 = 1U << 15 ;

  // Field FB16: Filter bits
    const uint32_t CAN1_F17R1_FB16 = 1U << 16 ;

  // Field FB17: Filter bits
    const uint32_t CAN1_F17R1_FB17 = 1U << 17 ;

  // Field FB18: Filter bits
    const uint32_t CAN1_F17R1_FB18 = 1U << 18 ;

  // Field FB19: Filter bits
    const uint32_t CAN1_F17R1_FB19 = 1U << 19 ;

  // Field FB20: Filter bits
    const uint32_t CAN1_F17R1_FB20 = 1U << 20 ;

  // Field FB21: Filter bits
    const uint32_t CAN1_F17R1_FB21 = 1U << 21 ;

  // Field FB22: Filter bits
    const uint32_t CAN1_F17R1_FB22 = 1U << 22 ;

  // Field FB23: Filter bits
    const uint32_t CAN1_F17R1_FB23 = 1U << 23 ;

  // Field FB24: Filter bits
    const uint32_t CAN1_F17R1_FB24 = 1U << 24 ;

  // Field FB25: Filter bits
    const uint32_t CAN1_F17R1_FB25 = 1U << 25 ;

  // Field FB26: Filter bits
    const uint32_t CAN1_F17R1_FB26 = 1U << 26 ;

  // Field FB27: Filter bits
    const uint32_t CAN1_F17R1_FB27 = 1U << 27 ;

  // Field FB28: Filter bits
    const uint32_t CAN1_F17R1_FB28 = 1U << 28 ;

  // Field FB29: Filter bits
    const uint32_t CAN1_F17R1_FB29 = 1U << 29 ;

  // Field FB30: Filter bits
    const uint32_t CAN1_F17R1_FB30 = 1U << 30 ;

  // Field FB31: Filter bits
    const uint32_t CAN1_F17R1_FB31 = 1U << 31 ;

//---  Register F17R2: Filter bank 17 register 2
  #define CAN1_F17R2 (* ((volatile uint32_t *) (0x40006400 + 716)))

  // Field FB0: Filter bits
    const uint32_t CAN1_F17R2_FB0 = 1U << 0 ;

  // Field FB1: Filter bits
    const uint32_t CAN1_F17R2_FB1 = 1U << 1 ;

  // Field FB2: Filter bits
    const uint32_t CAN1_F17R2_FB2 = 1U << 2 ;

  // Field FB3: Filter bits
    const uint32_t CAN1_F17R2_FB3 = 1U << 3 ;

  // Field FB4: Filter bits
    const uint32_t CAN1_F17R2_FB4 = 1U << 4 ;

  // Field FB5: Filter bits
    const uint32_t CAN1_F17R2_FB5 = 1U << 5 ;

  // Field FB6: Filter bits
    const uint32_t CAN1_F17R2_FB6 = 1U << 6 ;

  // Field FB7: Filter bits
    const uint32_t CAN1_F17R2_FB7 = 1U << 7 ;

  // Field FB8: Filter bits
    const uint32_t CAN1_F17R2_FB8 = 1U << 8 ;

  // Field FB9: Filter bits
    const uint32_t CAN1_F17R2_FB9 = 1U << 9 ;

  // Field FB10: Filter bits
    const uint32_t CAN1_F17R2_FB10 = 1U << 10 ;

  // Field FB11: Filter bits
    const uint32_t CAN1_F17R2_FB11 = 1U << 11 ;

  // Field FB12: Filter bits
    const uint32_t CAN1_F17R2_FB12 = 1U << 12 ;

  // Field FB13: Filter bits
    const uint32_t CAN1_F17R2_FB13 = 1U << 13 ;

  // Field FB14: Filter bits
    const uint32_t CAN1_F17R2_FB14 = 1U << 14 ;

  // Field FB15: Filter bits
    const uint32_t CAN1_F17R2_FB15 = 1U << 15 ;

  // Field FB16: Filter bits
    const uint32_t CAN1_F17R2_FB16 = 1U << 16 ;

  // Field FB17: Filter bits
    const uint32_t CAN1_F17R2_FB17 = 1U << 17 ;

  // Field FB18: Filter bits
    const uint32_t CAN1_F17R2_FB18 = 1U << 18 ;

  // Field FB19: Filter bits
    const uint32_t CAN1_F17R2_FB19 = 1U << 19 ;

  // Field FB20: Filter bits
    const uint32_t CAN1_F17R2_FB20 = 1U << 20 ;

  // Field FB21: Filter bits
    const uint32_t CAN1_F17R2_FB21 = 1U << 21 ;

  // Field FB22: Filter bits
    const uint32_t CAN1_F17R2_FB22 = 1U << 22 ;

  // Field FB23: Filter bits
    const uint32_t CAN1_F17R2_FB23 = 1U << 23 ;

  // Field FB24: Filter bits
    const uint32_t CAN1_F17R2_FB24 = 1U << 24 ;

  // Field FB25: Filter bits
    const uint32_t CAN1_F17R2_FB25 = 1U << 25 ;

  // Field FB26: Filter bits
    const uint32_t CAN1_F17R2_FB26 = 1U << 26 ;

  // Field FB27: Filter bits
    const uint32_t CAN1_F17R2_FB27 = 1U << 27 ;

  // Field FB28: Filter bits
    const uint32_t CAN1_F17R2_FB28 = 1U << 28 ;

  // Field FB29: Filter bits
    const uint32_t CAN1_F17R2_FB29 = 1U << 29 ;

  // Field FB30: Filter bits
    const uint32_t CAN1_F17R2_FB30 = 1U << 30 ;

  // Field FB31: Filter bits
    const uint32_t CAN1_F17R2_FB31 = 1U << 31 ;

//---  Register F18R1: Filter bank 18 register 1
  #define CAN1_F18R1 (* ((volatile uint32_t *) (0x40006400 + 720)))

  // Field FB0: Filter bits
    const uint32_t CAN1_F18R1_FB0 = 1U << 0 ;

  // Field FB1: Filter bits
    const uint32_t CAN1_F18R1_FB1 = 1U << 1 ;

  // Field FB2: Filter bits
    const uint32_t CAN1_F18R1_FB2 = 1U << 2 ;

  // Field FB3: Filter bits
    const uint32_t CAN1_F18R1_FB3 = 1U << 3 ;

  // Field FB4: Filter bits
    const uint32_t CAN1_F18R1_FB4 = 1U << 4 ;

  // Field FB5: Filter bits
    const uint32_t CAN1_F18R1_FB5 = 1U << 5 ;

  // Field FB6: Filter bits
    const uint32_t CAN1_F18R1_FB6 = 1U << 6 ;

  // Field FB7: Filter bits
    const uint32_t CAN1_F18R1_FB7 = 1U << 7 ;

  // Field FB8: Filter bits
    const uint32_t CAN1_F18R1_FB8 = 1U << 8 ;

  // Field FB9: Filter bits
    const uint32_t CAN1_F18R1_FB9 = 1U << 9 ;

  // Field FB10: Filter bits
    const uint32_t CAN1_F18R1_FB10 = 1U << 10 ;

  // Field FB11: Filter bits
    const uint32_t CAN1_F18R1_FB11 = 1U << 11 ;

  // Field FB12: Filter bits
    const uint32_t CAN1_F18R1_FB12 = 1U << 12 ;

  // Field FB13: Filter bits
    const uint32_t CAN1_F18R1_FB13 = 1U << 13 ;

  // Field FB14: Filter bits
    const uint32_t CAN1_F18R1_FB14 = 1U << 14 ;

  // Field FB15: Filter bits
    const uint32_t CAN1_F18R1_FB15 = 1U << 15 ;

  // Field FB16: Filter bits
    const uint32_t CAN1_F18R1_FB16 = 1U << 16 ;

  // Field FB17: Filter bits
    const uint32_t CAN1_F18R1_FB17 = 1U << 17 ;

  // Field FB18: Filter bits
    const uint32_t CAN1_F18R1_FB18 = 1U << 18 ;

  // Field FB19: Filter bits
    const uint32_t CAN1_F18R1_FB19 = 1U << 19 ;

  // Field FB20: Filter bits
    const uint32_t CAN1_F18R1_FB20 = 1U << 20 ;

  // Field FB21: Filter bits
    const uint32_t CAN1_F18R1_FB21 = 1U << 21 ;

  // Field FB22: Filter bits
    const uint32_t CAN1_F18R1_FB22 = 1U << 22 ;

  // Field FB23: Filter bits
    const uint32_t CAN1_F18R1_FB23 = 1U << 23 ;

  // Field FB24: Filter bits
    const uint32_t CAN1_F18R1_FB24 = 1U << 24 ;

  // Field FB25: Filter bits
    const uint32_t CAN1_F18R1_FB25 = 1U << 25 ;

  // Field FB26: Filter bits
    const uint32_t CAN1_F18R1_FB26 = 1U << 26 ;

  // Field FB27: Filter bits
    const uint32_t CAN1_F18R1_FB27 = 1U << 27 ;

  // Field FB28: Filter bits
    const uint32_t CAN1_F18R1_FB28 = 1U << 28 ;

  // Field FB29: Filter bits
    const uint32_t CAN1_F18R1_FB29 = 1U << 29 ;

  // Field FB30: Filter bits
    const uint32_t CAN1_F18R1_FB30 = 1U << 30 ;

  // Field FB31: Filter bits
    const uint32_t CAN1_F18R1_FB31 = 1U << 31 ;

//---  Register F18R2: Filter bank 18 register 2
  #define CAN1_F18R2 (* ((volatile uint32_t *) (0x40006400 + 724)))

  // Field FB0: Filter bits
    const uint32_t CAN1_F18R2_FB0 = 1U << 0 ;

  // Field FB1: Filter bits
    const uint32_t CAN1_F18R2_FB1 = 1U << 1 ;

  // Field FB2: Filter bits
    const uint32_t CAN1_F18R2_FB2 = 1U << 2 ;

  // Field FB3: Filter bits
    const uint32_t CAN1_F18R2_FB3 = 1U << 3 ;

  // Field FB4: Filter bits
    const uint32_t CAN1_F18R2_FB4 = 1U << 4 ;

  // Field FB5: Filter bits
    const uint32_t CAN1_F18R2_FB5 = 1U << 5 ;

  // Field FB6: Filter bits
    const uint32_t CAN1_F18R2_FB6 = 1U << 6 ;

  // Field FB7: Filter bits
    const uint32_t CAN1_F18R2_FB7 = 1U << 7 ;

  // Field FB8: Filter bits
    const uint32_t CAN1_F18R2_FB8 = 1U << 8 ;

  // Field FB9: Filter bits
    const uint32_t CAN1_F18R2_FB9 = 1U << 9 ;

  // Field FB10: Filter bits
    const uint32_t CAN1_F18R2_FB10 = 1U << 10 ;

  // Field FB11: Filter bits
    const uint32_t CAN1_F18R2_FB11 = 1U << 11 ;

  // Field FB12: Filter bits
    const uint32_t CAN1_F18R2_FB12 = 1U << 12 ;

  // Field FB13: Filter bits
    const uint32_t CAN1_F18R2_FB13 = 1U << 13 ;

  // Field FB14: Filter bits
    const uint32_t CAN1_F18R2_FB14 = 1U << 14 ;

  // Field FB15: Filter bits
    const uint32_t CAN1_F18R2_FB15 = 1U << 15 ;

  // Field FB16: Filter bits
    const uint32_t CAN1_F18R2_FB16 = 1U << 16 ;

  // Field FB17: Filter bits
    const uint32_t CAN1_F18R2_FB17 = 1U << 17 ;

  // Field FB18: Filter bits
    const uint32_t CAN1_F18R2_FB18 = 1U << 18 ;

  // Field FB19: Filter bits
    const uint32_t CAN1_F18R2_FB19 = 1U << 19 ;

  // Field FB20: Filter bits
    const uint32_t CAN1_F18R2_FB20 = 1U << 20 ;

  // Field FB21: Filter bits
    const uint32_t CAN1_F18R2_FB21 = 1U << 21 ;

  // Field FB22: Filter bits
    const uint32_t CAN1_F18R2_FB22 = 1U << 22 ;

  // Field FB23: Filter bits
    const uint32_t CAN1_F18R2_FB23 = 1U << 23 ;

  // Field FB24: Filter bits
    const uint32_t CAN1_F18R2_FB24 = 1U << 24 ;

  // Field FB25: Filter bits
    const uint32_t CAN1_F18R2_FB25 = 1U << 25 ;

  // Field FB26: Filter bits
    const uint32_t CAN1_F18R2_FB26 = 1U << 26 ;

  // Field FB27: Filter bits
    const uint32_t CAN1_F18R2_FB27 = 1U << 27 ;

  // Field FB28: Filter bits
    const uint32_t CAN1_F18R2_FB28 = 1U << 28 ;

  // Field FB29: Filter bits
    const uint32_t CAN1_F18R2_FB29 = 1U << 29 ;

  // Field FB30: Filter bits
    const uint32_t CAN1_F18R2_FB30 = 1U << 30 ;

  // Field FB31: Filter bits
    const uint32_t CAN1_F18R2_FB31 = 1U << 31 ;

//---  Register F19R1: Filter bank 19 register 1
  #define CAN1_F19R1 (* ((volatile uint32_t *) (0x40006400 + 728)))

  // Field FB0: Filter bits
    const uint32_t CAN1_F19R1_FB0 = 1U << 0 ;

  // Field FB1: Filter bits
    const uint32_t CAN1_F19R1_FB1 = 1U << 1 ;

  // Field FB2: Filter bits
    const uint32_t CAN1_F19R1_FB2 = 1U << 2 ;

  // Field FB3: Filter bits
    const uint32_t CAN1_F19R1_FB3 = 1U << 3 ;

  // Field FB4: Filter bits
    const uint32_t CAN1_F19R1_FB4 = 1U << 4 ;

  // Field FB5: Filter bits
    const uint32_t CAN1_F19R1_FB5 = 1U << 5 ;

  // Field FB6: Filter bits
    const uint32_t CAN1_F19R1_FB6 = 1U << 6 ;

  // Field FB7: Filter bits
    const uint32_t CAN1_F19R1_FB7 = 1U << 7 ;

  // Field FB8: Filter bits
    const uint32_t CAN1_F19R1_FB8 = 1U << 8 ;

  // Field FB9: Filter bits
    const uint32_t CAN1_F19R1_FB9 = 1U << 9 ;

  // Field FB10: Filter bits
    const uint32_t CAN1_F19R1_FB10 = 1U << 10 ;

  // Field FB11: Filter bits
    const uint32_t CAN1_F19R1_FB11 = 1U << 11 ;

  // Field FB12: Filter bits
    const uint32_t CAN1_F19R1_FB12 = 1U << 12 ;

  // Field FB13: Filter bits
    const uint32_t CAN1_F19R1_FB13 = 1U << 13 ;

  // Field FB14: Filter bits
    const uint32_t CAN1_F19R1_FB14 = 1U << 14 ;

  // Field FB15: Filter bits
    const uint32_t CAN1_F19R1_FB15 = 1U << 15 ;

  // Field FB16: Filter bits
    const uint32_t CAN1_F19R1_FB16 = 1U << 16 ;

  // Field FB17: Filter bits
    const uint32_t CAN1_F19R1_FB17 = 1U << 17 ;

  // Field FB18: Filter bits
    const uint32_t CAN1_F19R1_FB18 = 1U << 18 ;

  // Field FB19: Filter bits
    const uint32_t CAN1_F19R1_FB19 = 1U << 19 ;

  // Field FB20: Filter bits
    const uint32_t CAN1_F19R1_FB20 = 1U << 20 ;

  // Field FB21: Filter bits
    const uint32_t CAN1_F19R1_FB21 = 1U << 21 ;

  // Field FB22: Filter bits
    const uint32_t CAN1_F19R1_FB22 = 1U << 22 ;

  // Field FB23: Filter bits
    const uint32_t CAN1_F19R1_FB23 = 1U << 23 ;

  // Field FB24: Filter bits
    const uint32_t CAN1_F19R1_FB24 = 1U << 24 ;

  // Field FB25: Filter bits
    const uint32_t CAN1_F19R1_FB25 = 1U << 25 ;

  // Field FB26: Filter bits
    const uint32_t CAN1_F19R1_FB26 = 1U << 26 ;

  // Field FB27: Filter bits
    const uint32_t CAN1_F19R1_FB27 = 1U << 27 ;

  // Field FB28: Filter bits
    const uint32_t CAN1_F19R1_FB28 = 1U << 28 ;

  // Field FB29: Filter bits
    const uint32_t CAN1_F19R1_FB29 = 1U << 29 ;

  // Field FB30: Filter bits
    const uint32_t CAN1_F19R1_FB30 = 1U << 30 ;

  // Field FB31: Filter bits
    const uint32_t CAN1_F19R1_FB31 = 1U << 31 ;

//---  Register F19R2: Filter bank 19 register 2
  #define CAN1_F19R2 (* ((volatile uint32_t *) (0x40006400 + 732)))

  // Field FB0: Filter bits
    const uint32_t CAN1_F19R2_FB0 = 1U << 0 ;

  // Field FB1: Filter bits
    const uint32_t CAN1_F19R2_FB1 = 1U << 1 ;

  // Field FB2: Filter bits
    const uint32_t CAN1_F19R2_FB2 = 1U << 2 ;

  // Field FB3: Filter bits
    const uint32_t CAN1_F19R2_FB3 = 1U << 3 ;

  // Field FB4: Filter bits
    const uint32_t CAN1_F19R2_FB4 = 1U << 4 ;

  // Field FB5: Filter bits
    const uint32_t CAN1_F19R2_FB5 = 1U << 5 ;

  // Field FB6: Filter bits
    const uint32_t CAN1_F19R2_FB6 = 1U << 6 ;

  // Field FB7: Filter bits
    const uint32_t CAN1_F19R2_FB7 = 1U << 7 ;

  // Field FB8: Filter bits
    const uint32_t CAN1_F19R2_FB8 = 1U << 8 ;

  // Field FB9: Filter bits
    const uint32_t CAN1_F19R2_FB9 = 1U << 9 ;

  // Field FB10: Filter bits
    const uint32_t CAN1_F19R2_FB10 = 1U << 10 ;

  // Field FB11: Filter bits
    const uint32_t CAN1_F19R2_FB11 = 1U << 11 ;

  // Field FB12: Filter bits
    const uint32_t CAN1_F19R2_FB12 = 1U << 12 ;

  // Field FB13: Filter bits
    const uint32_t CAN1_F19R2_FB13 = 1U << 13 ;

  // Field FB14: Filter bits
    const uint32_t CAN1_F19R2_FB14 = 1U << 14 ;

  // Field FB15: Filter bits
    const uint32_t CAN1_F19R2_FB15 = 1U << 15 ;

  // Field FB16: Filter bits
    const uint32_t CAN1_F19R2_FB16 = 1U << 16 ;

  // Field FB17: Filter bits
    const uint32_t CAN1_F19R2_FB17 = 1U << 17 ;

  // Field FB18: Filter bits
    const uint32_t CAN1_F19R2_FB18 = 1U << 18 ;

  // Field FB19: Filter bits
    const uint32_t CAN1_F19R2_FB19 = 1U << 19 ;

  // Field FB20: Filter bits
    const uint32_t CAN1_F19R2_FB20 = 1U << 20 ;

  // Field FB21: Filter bits
    const uint32_t CAN1_F19R2_FB21 = 1U << 21 ;

  // Field FB22: Filter bits
    const uint32_t CAN1_F19R2_FB22 = 1U << 22 ;

  // Field FB23: Filter bits
    const uint32_t CAN1_F19R2_FB23 = 1U << 23 ;

  // Field FB24: Filter bits
    const uint32_t CAN1_F19R2_FB24 = 1U << 24 ;

  // Field FB25: Filter bits
    const uint32_t CAN1_F19R2_FB25 = 1U << 25 ;

  // Field FB26: Filter bits
    const uint32_t CAN1_F19R2_FB26 = 1U << 26 ;

  // Field FB27: Filter bits
    const uint32_t CAN1_F19R2_FB27 = 1U << 27 ;

  // Field FB28: Filter bits
    const uint32_t CAN1_F19R2_FB28 = 1U << 28 ;

  // Field FB29: Filter bits
    const uint32_t CAN1_F19R2_FB29 = 1U << 29 ;

  // Field FB30: Filter bits
    const uint32_t CAN1_F19R2_FB30 = 1U << 30 ;

  // Field FB31: Filter bits
    const uint32_t CAN1_F19R2_FB31 = 1U << 31 ;

//---  Register F20R1: Filter bank 20 register 1
  #define CAN1_F20R1 (* ((volatile uint32_t *) (0x40006400 + 736)))

  // Field FB0: Filter bits
    const uint32_t CAN1_F20R1_FB0 = 1U << 0 ;

  // Field FB1: Filter bits
    const uint32_t CAN1_F20R1_FB1 = 1U << 1 ;

  // Field FB2: Filter bits
    const uint32_t CAN1_F20R1_FB2 = 1U << 2 ;

  // Field FB3: Filter bits
    const uint32_t CAN1_F20R1_FB3 = 1U << 3 ;

  // Field FB4: Filter bits
    const uint32_t CAN1_F20R1_FB4 = 1U << 4 ;

  // Field FB5: Filter bits
    const uint32_t CAN1_F20R1_FB5 = 1U << 5 ;

  // Field FB6: Filter bits
    const uint32_t CAN1_F20R1_FB6 = 1U << 6 ;

  // Field FB7: Filter bits
    const uint32_t CAN1_F20R1_FB7 = 1U << 7 ;

  // Field FB8: Filter bits
    const uint32_t CAN1_F20R1_FB8 = 1U << 8 ;

  // Field FB9: Filter bits
    const uint32_t CAN1_F20R1_FB9 = 1U << 9 ;

  // Field FB10: Filter bits
    const uint32_t CAN1_F20R1_FB10 = 1U << 10 ;

  // Field FB11: Filter bits
    const uint32_t CAN1_F20R1_FB11 = 1U << 11 ;

  // Field FB12: Filter bits
    const uint32_t CAN1_F20R1_FB12 = 1U << 12 ;

  // Field FB13: Filter bits
    const uint32_t CAN1_F20R1_FB13 = 1U << 13 ;

  // Field FB14: Filter bits
    const uint32_t CAN1_F20R1_FB14 = 1U << 14 ;

  // Field FB15: Filter bits
    const uint32_t CAN1_F20R1_FB15 = 1U << 15 ;

  // Field FB16: Filter bits
    const uint32_t CAN1_F20R1_FB16 = 1U << 16 ;

  // Field FB17: Filter bits
    const uint32_t CAN1_F20R1_FB17 = 1U << 17 ;

  // Field FB18: Filter bits
    const uint32_t CAN1_F20R1_FB18 = 1U << 18 ;

  // Field FB19: Filter bits
    const uint32_t CAN1_F20R1_FB19 = 1U << 19 ;

  // Field FB20: Filter bits
    const uint32_t CAN1_F20R1_FB20 = 1U << 20 ;

  // Field FB21: Filter bits
    const uint32_t CAN1_F20R1_FB21 = 1U << 21 ;

  // Field FB22: Filter bits
    const uint32_t CAN1_F20R1_FB22 = 1U << 22 ;

  // Field FB23: Filter bits
    const uint32_t CAN1_F20R1_FB23 = 1U << 23 ;

  // Field FB24: Filter bits
    const uint32_t CAN1_F20R1_FB24 = 1U << 24 ;

  // Field FB25: Filter bits
    const uint32_t CAN1_F20R1_FB25 = 1U << 25 ;

  // Field FB26: Filter bits
    const uint32_t CAN1_F20R1_FB26 = 1U << 26 ;

  // Field FB27: Filter bits
    const uint32_t CAN1_F20R1_FB27 = 1U << 27 ;

  // Field FB28: Filter bits
    const uint32_t CAN1_F20R1_FB28 = 1U << 28 ;

  // Field FB29: Filter bits
    const uint32_t CAN1_F20R1_FB29 = 1U << 29 ;

  // Field FB30: Filter bits
    const uint32_t CAN1_F20R1_FB30 = 1U << 30 ;

  // Field FB31: Filter bits
    const uint32_t CAN1_F20R1_FB31 = 1U << 31 ;

//---  Register F20R2: Filter bank 20 register 2
  #define CAN1_F20R2 (* ((volatile uint32_t *) (0x40006400 + 740)))

  // Field FB0: Filter bits
    const uint32_t CAN1_F20R2_FB0 = 1U << 0 ;

  // Field FB1: Filter bits
    const uint32_t CAN1_F20R2_FB1 = 1U << 1 ;

  // Field FB2: Filter bits
    const uint32_t CAN1_F20R2_FB2 = 1U << 2 ;

  // Field FB3: Filter bits
    const uint32_t CAN1_F20R2_FB3 = 1U << 3 ;

  // Field FB4: Filter bits
    const uint32_t CAN1_F20R2_FB4 = 1U << 4 ;

  // Field FB5: Filter bits
    const uint32_t CAN1_F20R2_FB5 = 1U << 5 ;

  // Field FB6: Filter bits
    const uint32_t CAN1_F20R2_FB6 = 1U << 6 ;

  // Field FB7: Filter bits
    const uint32_t CAN1_F20R2_FB7 = 1U << 7 ;

  // Field FB8: Filter bits
    const uint32_t CAN1_F20R2_FB8 = 1U << 8 ;

  // Field FB9: Filter bits
    const uint32_t CAN1_F20R2_FB9 = 1U << 9 ;

  // Field FB10: Filter bits
    const uint32_t CAN1_F20R2_FB10 = 1U << 10 ;

  // Field FB11: Filter bits
    const uint32_t CAN1_F20R2_FB11 = 1U << 11 ;

  // Field FB12: Filter bits
    const uint32_t CAN1_F20R2_FB12 = 1U << 12 ;

  // Field FB13: Filter bits
    const uint32_t CAN1_F20R2_FB13 = 1U << 13 ;

  // Field FB14: Filter bits
    const uint32_t CAN1_F20R2_FB14 = 1U << 14 ;

  // Field FB15: Filter bits
    const uint32_t CAN1_F20R2_FB15 = 1U << 15 ;

  // Field FB16: Filter bits
    const uint32_t CAN1_F20R2_FB16 = 1U << 16 ;

  // Field FB17: Filter bits
    const uint32_t CAN1_F20R2_FB17 = 1U << 17 ;

  // Field FB18: Filter bits
    const uint32_t CAN1_F20R2_FB18 = 1U << 18 ;

  // Field FB19: Filter bits
    const uint32_t CAN1_F20R2_FB19 = 1U << 19 ;

  // Field FB20: Filter bits
    const uint32_t CAN1_F20R2_FB20 = 1U << 20 ;

  // Field FB21: Filter bits
    const uint32_t CAN1_F20R2_FB21 = 1U << 21 ;

  // Field FB22: Filter bits
    const uint32_t CAN1_F20R2_FB22 = 1U << 22 ;

  // Field FB23: Filter bits
    const uint32_t CAN1_F20R2_FB23 = 1U << 23 ;

  // Field FB24: Filter bits
    const uint32_t CAN1_F20R2_FB24 = 1U << 24 ;

  // Field FB25: Filter bits
    const uint32_t CAN1_F20R2_FB25 = 1U << 25 ;

  // Field FB26: Filter bits
    const uint32_t CAN1_F20R2_FB26 = 1U << 26 ;

  // Field FB27: Filter bits
    const uint32_t CAN1_F20R2_FB27 = 1U << 27 ;

  // Field FB28: Filter bits
    const uint32_t CAN1_F20R2_FB28 = 1U << 28 ;

  // Field FB29: Filter bits
    const uint32_t CAN1_F20R2_FB29 = 1U << 29 ;

  // Field FB30: Filter bits
    const uint32_t CAN1_F20R2_FB30 = 1U << 30 ;

  // Field FB31: Filter bits
    const uint32_t CAN1_F20R2_FB31 = 1U << 31 ;

//---  Register F21R1: Filter bank 21 register 1
  #define CAN1_F21R1 (* ((volatile uint32_t *) (0x40006400 + 744)))

  // Field FB0: Filter bits
    const uint32_t CAN1_F21R1_FB0 = 1U << 0 ;

  // Field FB1: Filter bits
    const uint32_t CAN1_F21R1_FB1 = 1U << 1 ;

  // Field FB2: Filter bits
    const uint32_t CAN1_F21R1_FB2 = 1U << 2 ;

  // Field FB3: Filter bits
    const uint32_t CAN1_F21R1_FB3 = 1U << 3 ;

  // Field FB4: Filter bits
    const uint32_t CAN1_F21R1_FB4 = 1U << 4 ;

  // Field FB5: Filter bits
    const uint32_t CAN1_F21R1_FB5 = 1U << 5 ;

  // Field FB6: Filter bits
    const uint32_t CAN1_F21R1_FB6 = 1U << 6 ;

  // Field FB7: Filter bits
    const uint32_t CAN1_F21R1_FB7 = 1U << 7 ;

  // Field FB8: Filter bits
    const uint32_t CAN1_F21R1_FB8 = 1U << 8 ;

  // Field FB9: Filter bits
    const uint32_t CAN1_F21R1_FB9 = 1U << 9 ;

  // Field FB10: Filter bits
    const uint32_t CAN1_F21R1_FB10 = 1U << 10 ;

  // Field FB11: Filter bits
    const uint32_t CAN1_F21R1_FB11 = 1U << 11 ;

  // Field FB12: Filter bits
    const uint32_t CAN1_F21R1_FB12 = 1U << 12 ;

  // Field FB13: Filter bits
    const uint32_t CAN1_F21R1_FB13 = 1U << 13 ;

  // Field FB14: Filter bits
    const uint32_t CAN1_F21R1_FB14 = 1U << 14 ;

  // Field FB15: Filter bits
    const uint32_t CAN1_F21R1_FB15 = 1U << 15 ;

  // Field FB16: Filter bits
    const uint32_t CAN1_F21R1_FB16 = 1U << 16 ;

  // Field FB17: Filter bits
    const uint32_t CAN1_F21R1_FB17 = 1U << 17 ;

  // Field FB18: Filter bits
    const uint32_t CAN1_F21R1_FB18 = 1U << 18 ;

  // Field FB19: Filter bits
    const uint32_t CAN1_F21R1_FB19 = 1U << 19 ;

  // Field FB20: Filter bits
    const uint32_t CAN1_F21R1_FB20 = 1U << 20 ;

  // Field FB21: Filter bits
    const uint32_t CAN1_F21R1_FB21 = 1U << 21 ;

  // Field FB22: Filter bits
    const uint32_t CAN1_F21R1_FB22 = 1U << 22 ;

  // Field FB23: Filter bits
    const uint32_t CAN1_F21R1_FB23 = 1U << 23 ;

  // Field FB24: Filter bits
    const uint32_t CAN1_F21R1_FB24 = 1U << 24 ;

  // Field FB25: Filter bits
    const uint32_t CAN1_F21R1_FB25 = 1U << 25 ;

  // Field FB26: Filter bits
    const uint32_t CAN1_F21R1_FB26 = 1U << 26 ;

  // Field FB27: Filter bits
    const uint32_t CAN1_F21R1_FB27 = 1U << 27 ;

  // Field FB28: Filter bits
    const uint32_t CAN1_F21R1_FB28 = 1U << 28 ;

  // Field FB29: Filter bits
    const uint32_t CAN1_F21R1_FB29 = 1U << 29 ;

  // Field FB30: Filter bits
    const uint32_t CAN1_F21R1_FB30 = 1U << 30 ;

  // Field FB31: Filter bits
    const uint32_t CAN1_F21R1_FB31 = 1U << 31 ;

//---  Register F21R2: Filter bank 21 register 2
  #define CAN1_F21R2 (* ((volatile uint32_t *) (0x40006400 + 748)))

  // Field FB0: Filter bits
    const uint32_t CAN1_F21R2_FB0 = 1U << 0 ;

  // Field FB1: Filter bits
    const uint32_t CAN1_F21R2_FB1 = 1U << 1 ;

  // Field FB2: Filter bits
    const uint32_t CAN1_F21R2_FB2 = 1U << 2 ;

  // Field FB3: Filter bits
    const uint32_t CAN1_F21R2_FB3 = 1U << 3 ;

  // Field FB4: Filter bits
    const uint32_t CAN1_F21R2_FB4 = 1U << 4 ;

  // Field FB5: Filter bits
    const uint32_t CAN1_F21R2_FB5 = 1U << 5 ;

  // Field FB6: Filter bits
    const uint32_t CAN1_F21R2_FB6 = 1U << 6 ;

  // Field FB7: Filter bits
    const uint32_t CAN1_F21R2_FB7 = 1U << 7 ;

  // Field FB8: Filter bits
    const uint32_t CAN1_F21R2_FB8 = 1U << 8 ;

  // Field FB9: Filter bits
    const uint32_t CAN1_F21R2_FB9 = 1U << 9 ;

  // Field FB10: Filter bits
    const uint32_t CAN1_F21R2_FB10 = 1U << 10 ;

  // Field FB11: Filter bits
    const uint32_t CAN1_F21R2_FB11 = 1U << 11 ;

  // Field FB12: Filter bits
    const uint32_t CAN1_F21R2_FB12 = 1U << 12 ;

  // Field FB13: Filter bits
    const uint32_t CAN1_F21R2_FB13 = 1U << 13 ;

  // Field FB14: Filter bits
    const uint32_t CAN1_F21R2_FB14 = 1U << 14 ;

  // Field FB15: Filter bits
    const uint32_t CAN1_F21R2_FB15 = 1U << 15 ;

  // Field FB16: Filter bits
    const uint32_t CAN1_F21R2_FB16 = 1U << 16 ;

  // Field FB17: Filter bits
    const uint32_t CAN1_F21R2_FB17 = 1U << 17 ;

  // Field FB18: Filter bits
    const uint32_t CAN1_F21R2_FB18 = 1U << 18 ;

  // Field FB19: Filter bits
    const uint32_t CAN1_F21R2_FB19 = 1U << 19 ;

  // Field FB20: Filter bits
    const uint32_t CAN1_F21R2_FB20 = 1U << 20 ;

  // Field FB21: Filter bits
    const uint32_t CAN1_F21R2_FB21 = 1U << 21 ;

  // Field FB22: Filter bits
    const uint32_t CAN1_F21R2_FB22 = 1U << 22 ;

  // Field FB23: Filter bits
    const uint32_t CAN1_F21R2_FB23 = 1U << 23 ;

  // Field FB24: Filter bits
    const uint32_t CAN1_F21R2_FB24 = 1U << 24 ;

  // Field FB25: Filter bits
    const uint32_t CAN1_F21R2_FB25 = 1U << 25 ;

  // Field FB26: Filter bits
    const uint32_t CAN1_F21R2_FB26 = 1U << 26 ;

  // Field FB27: Filter bits
    const uint32_t CAN1_F21R2_FB27 = 1U << 27 ;

  // Field FB28: Filter bits
    const uint32_t CAN1_F21R2_FB28 = 1U << 28 ;

  // Field FB29: Filter bits
    const uint32_t CAN1_F21R2_FB29 = 1U << 29 ;

  // Field FB30: Filter bits
    const uint32_t CAN1_F21R2_FB30 = 1U << 30 ;

  // Field FB31: Filter bits
    const uint32_t CAN1_F21R2_FB31 = 1U << 31 ;

//---  Register F22R1: Filter bank 22 register 1
  #define CAN1_F22R1 (* ((volatile uint32_t *) (0x40006400 + 752)))

  // Field FB0: Filter bits
    const uint32_t CAN1_F22R1_FB0 = 1U << 0 ;

  // Field FB1: Filter bits
    const uint32_t CAN1_F22R1_FB1 = 1U << 1 ;

  // Field FB2: Filter bits
    const uint32_t CAN1_F22R1_FB2 = 1U << 2 ;

  // Field FB3: Filter bits
    const uint32_t CAN1_F22R1_FB3 = 1U << 3 ;

  // Field FB4: Filter bits
    const uint32_t CAN1_F22R1_FB4 = 1U << 4 ;

  // Field FB5: Filter bits
    const uint32_t CAN1_F22R1_FB5 = 1U << 5 ;

  // Field FB6: Filter bits
    const uint32_t CAN1_F22R1_FB6 = 1U << 6 ;

  // Field FB7: Filter bits
    const uint32_t CAN1_F22R1_FB7 = 1U << 7 ;

  // Field FB8: Filter bits
    const uint32_t CAN1_F22R1_FB8 = 1U << 8 ;

  // Field FB9: Filter bits
    const uint32_t CAN1_F22R1_FB9 = 1U << 9 ;

  // Field FB10: Filter bits
    const uint32_t CAN1_F22R1_FB10 = 1U << 10 ;

  // Field FB11: Filter bits
    const uint32_t CAN1_F22R1_FB11 = 1U << 11 ;

  // Field FB12: Filter bits
    const uint32_t CAN1_F22R1_FB12 = 1U << 12 ;

  // Field FB13: Filter bits
    const uint32_t CAN1_F22R1_FB13 = 1U << 13 ;

  // Field FB14: Filter bits
    const uint32_t CAN1_F22R1_FB14 = 1U << 14 ;

  // Field FB15: Filter bits
    const uint32_t CAN1_F22R1_FB15 = 1U << 15 ;

  // Field FB16: Filter bits
    const uint32_t CAN1_F22R1_FB16 = 1U << 16 ;

  // Field FB17: Filter bits
    const uint32_t CAN1_F22R1_FB17 = 1U << 17 ;

  // Field FB18: Filter bits
    const uint32_t CAN1_F22R1_FB18 = 1U << 18 ;

  // Field FB19: Filter bits
    const uint32_t CAN1_F22R1_FB19 = 1U << 19 ;

  // Field FB20: Filter bits
    const uint32_t CAN1_F22R1_FB20 = 1U << 20 ;

  // Field FB21: Filter bits
    const uint32_t CAN1_F22R1_FB21 = 1U << 21 ;

  // Field FB22: Filter bits
    const uint32_t CAN1_F22R1_FB22 = 1U << 22 ;

  // Field FB23: Filter bits
    const uint32_t CAN1_F22R1_FB23 = 1U << 23 ;

  // Field FB24: Filter bits
    const uint32_t CAN1_F22R1_FB24 = 1U << 24 ;

  // Field FB25: Filter bits
    const uint32_t CAN1_F22R1_FB25 = 1U << 25 ;

  // Field FB26: Filter bits
    const uint32_t CAN1_F22R1_FB26 = 1U << 26 ;

  // Field FB27: Filter bits
    const uint32_t CAN1_F22R1_FB27 = 1U << 27 ;

  // Field FB28: Filter bits
    const uint32_t CAN1_F22R1_FB28 = 1U << 28 ;

  // Field FB29: Filter bits
    const uint32_t CAN1_F22R1_FB29 = 1U << 29 ;

  // Field FB30: Filter bits
    const uint32_t CAN1_F22R1_FB30 = 1U << 30 ;

  // Field FB31: Filter bits
    const uint32_t CAN1_F22R1_FB31 = 1U << 31 ;

//---  Register F22R2: Filter bank 22 register 2
  #define CAN1_F22R2 (* ((volatile uint32_t *) (0x40006400 + 756)))

  // Field FB0: Filter bits
    const uint32_t CAN1_F22R2_FB0 = 1U << 0 ;

  // Field FB1: Filter bits
    const uint32_t CAN1_F22R2_FB1 = 1U << 1 ;

  // Field FB2: Filter bits
    const uint32_t CAN1_F22R2_FB2 = 1U << 2 ;

  // Field FB3: Filter bits
    const uint32_t CAN1_F22R2_FB3 = 1U << 3 ;

  // Field FB4: Filter bits
    const uint32_t CAN1_F22R2_FB4 = 1U << 4 ;

  // Field FB5: Filter bits
    const uint32_t CAN1_F22R2_FB5 = 1U << 5 ;

  // Field FB6: Filter bits
    const uint32_t CAN1_F22R2_FB6 = 1U << 6 ;

  // Field FB7: Filter bits
    const uint32_t CAN1_F22R2_FB7 = 1U << 7 ;

  // Field FB8: Filter bits
    const uint32_t CAN1_F22R2_FB8 = 1U << 8 ;

  // Field FB9: Filter bits
    const uint32_t CAN1_F22R2_FB9 = 1U << 9 ;

  // Field FB10: Filter bits
    const uint32_t CAN1_F22R2_FB10 = 1U << 10 ;

  // Field FB11: Filter bits
    const uint32_t CAN1_F22R2_FB11 = 1U << 11 ;

  // Field FB12: Filter bits
    const uint32_t CAN1_F22R2_FB12 = 1U << 12 ;

  // Field FB13: Filter bits
    const uint32_t CAN1_F22R2_FB13 = 1U << 13 ;

  // Field FB14: Filter bits
    const uint32_t CAN1_F22R2_FB14 = 1U << 14 ;

  // Field FB15: Filter bits
    const uint32_t CAN1_F22R2_FB15 = 1U << 15 ;

  // Field FB16: Filter bits
    const uint32_t CAN1_F22R2_FB16 = 1U << 16 ;

  // Field FB17: Filter bits
    const uint32_t CAN1_F22R2_FB17 = 1U << 17 ;

  // Field FB18: Filter bits
    const uint32_t CAN1_F22R2_FB18 = 1U << 18 ;

  // Field FB19: Filter bits
    const uint32_t CAN1_F22R2_FB19 = 1U << 19 ;

  // Field FB20: Filter bits
    const uint32_t CAN1_F22R2_FB20 = 1U << 20 ;

  // Field FB21: Filter bits
    const uint32_t CAN1_F22R2_FB21 = 1U << 21 ;

  // Field FB22: Filter bits
    const uint32_t CAN1_F22R2_FB22 = 1U << 22 ;

  // Field FB23: Filter bits
    const uint32_t CAN1_F22R2_FB23 = 1U << 23 ;

  // Field FB24: Filter bits
    const uint32_t CAN1_F22R2_FB24 = 1U << 24 ;

  // Field FB25: Filter bits
    const uint32_t CAN1_F22R2_FB25 = 1U << 25 ;

  // Field FB26: Filter bits
    const uint32_t CAN1_F22R2_FB26 = 1U << 26 ;

  // Field FB27: Filter bits
    const uint32_t CAN1_F22R2_FB27 = 1U << 27 ;

  // Field FB28: Filter bits
    const uint32_t CAN1_F22R2_FB28 = 1U << 28 ;

  // Field FB29: Filter bits
    const uint32_t CAN1_F22R2_FB29 = 1U << 29 ;

  // Field FB30: Filter bits
    const uint32_t CAN1_F22R2_FB30 = 1U << 30 ;

  // Field FB31: Filter bits
    const uint32_t CAN1_F22R2_FB31 = 1U << 31 ;

//---  Register F23R1: Filter bank 23 register 1
  #define CAN1_F23R1 (* ((volatile uint32_t *) (0x40006400 + 760)))

  // Field FB0: Filter bits
    const uint32_t CAN1_F23R1_FB0 = 1U << 0 ;

  // Field FB1: Filter bits
    const uint32_t CAN1_F23R1_FB1 = 1U << 1 ;

  // Field FB2: Filter bits
    const uint32_t CAN1_F23R1_FB2 = 1U << 2 ;

  // Field FB3: Filter bits
    const uint32_t CAN1_F23R1_FB3 = 1U << 3 ;

  // Field FB4: Filter bits
    const uint32_t CAN1_F23R1_FB4 = 1U << 4 ;

  // Field FB5: Filter bits
    const uint32_t CAN1_F23R1_FB5 = 1U << 5 ;

  // Field FB6: Filter bits
    const uint32_t CAN1_F23R1_FB6 = 1U << 6 ;

  // Field FB7: Filter bits
    const uint32_t CAN1_F23R1_FB7 = 1U << 7 ;

  // Field FB8: Filter bits
    const uint32_t CAN1_F23R1_FB8 = 1U << 8 ;

  // Field FB9: Filter bits
    const uint32_t CAN1_F23R1_FB9 = 1U << 9 ;

  // Field FB10: Filter bits
    const uint32_t CAN1_F23R1_FB10 = 1U << 10 ;

  // Field FB11: Filter bits
    const uint32_t CAN1_F23R1_FB11 = 1U << 11 ;

  // Field FB12: Filter bits
    const uint32_t CAN1_F23R1_FB12 = 1U << 12 ;

  // Field FB13: Filter bits
    const uint32_t CAN1_F23R1_FB13 = 1U << 13 ;

  // Field FB14: Filter bits
    const uint32_t CAN1_F23R1_FB14 = 1U << 14 ;

  // Field FB15: Filter bits
    const uint32_t CAN1_F23R1_FB15 = 1U << 15 ;

  // Field FB16: Filter bits
    const uint32_t CAN1_F23R1_FB16 = 1U << 16 ;

  // Field FB17: Filter bits
    const uint32_t CAN1_F23R1_FB17 = 1U << 17 ;

  // Field FB18: Filter bits
    const uint32_t CAN1_F23R1_FB18 = 1U << 18 ;

  // Field FB19: Filter bits
    const uint32_t CAN1_F23R1_FB19 = 1U << 19 ;

  // Field FB20: Filter bits
    const uint32_t CAN1_F23R1_FB20 = 1U << 20 ;

  // Field FB21: Filter bits
    const uint32_t CAN1_F23R1_FB21 = 1U << 21 ;

  // Field FB22: Filter bits
    const uint32_t CAN1_F23R1_FB22 = 1U << 22 ;

  // Field FB23: Filter bits
    const uint32_t CAN1_F23R1_FB23 = 1U << 23 ;

  // Field FB24: Filter bits
    const uint32_t CAN1_F23R1_FB24 = 1U << 24 ;

  // Field FB25: Filter bits
    const uint32_t CAN1_F23R1_FB25 = 1U << 25 ;

  // Field FB26: Filter bits
    const uint32_t CAN1_F23R1_FB26 = 1U << 26 ;

  // Field FB27: Filter bits
    const uint32_t CAN1_F23R1_FB27 = 1U << 27 ;

  // Field FB28: Filter bits
    const uint32_t CAN1_F23R1_FB28 = 1U << 28 ;

  // Field FB29: Filter bits
    const uint32_t CAN1_F23R1_FB29 = 1U << 29 ;

  // Field FB30: Filter bits
    const uint32_t CAN1_F23R1_FB30 = 1U << 30 ;

  // Field FB31: Filter bits
    const uint32_t CAN1_F23R1_FB31 = 1U << 31 ;

//---  Register F23R2: Filter bank 23 register 2
  #define CAN1_F23R2 (* ((volatile uint32_t *) (0x40006400 + 764)))

  // Field FB0: Filter bits
    const uint32_t CAN1_F23R2_FB0 = 1U << 0 ;

  // Field FB1: Filter bits
    const uint32_t CAN1_F23R2_FB1 = 1U << 1 ;

  // Field FB2: Filter bits
    const uint32_t CAN1_F23R2_FB2 = 1U << 2 ;

  // Field FB3: Filter bits
    const uint32_t CAN1_F23R2_FB3 = 1U << 3 ;

  // Field FB4: Filter bits
    const uint32_t CAN1_F23R2_FB4 = 1U << 4 ;

  // Field FB5: Filter bits
    const uint32_t CAN1_F23R2_FB5 = 1U << 5 ;

  // Field FB6: Filter bits
    const uint32_t CAN1_F23R2_FB6 = 1U << 6 ;

  // Field FB7: Filter bits
    const uint32_t CAN1_F23R2_FB7 = 1U << 7 ;

  // Field FB8: Filter bits
    const uint32_t CAN1_F23R2_FB8 = 1U << 8 ;

  // Field FB9: Filter bits
    const uint32_t CAN1_F23R2_FB9 = 1U << 9 ;

  // Field FB10: Filter bits
    const uint32_t CAN1_F23R2_FB10 = 1U << 10 ;

  // Field FB11: Filter bits
    const uint32_t CAN1_F23R2_FB11 = 1U << 11 ;

  // Field FB12: Filter bits
    const uint32_t CAN1_F23R2_FB12 = 1U << 12 ;

  // Field FB13: Filter bits
    const uint32_t CAN1_F23R2_FB13 = 1U << 13 ;

  // Field FB14: Filter bits
    const uint32_t CAN1_F23R2_FB14 = 1U << 14 ;

  // Field FB15: Filter bits
    const uint32_t CAN1_F23R2_FB15 = 1U << 15 ;

  // Field FB16: Filter bits
    const uint32_t CAN1_F23R2_FB16 = 1U << 16 ;

  // Field FB17: Filter bits
    const uint32_t CAN1_F23R2_FB17 = 1U << 17 ;

  // Field FB18: Filter bits
    const uint32_t CAN1_F23R2_FB18 = 1U << 18 ;

  // Field FB19: Filter bits
    const uint32_t CAN1_F23R2_FB19 = 1U << 19 ;

  // Field FB20: Filter bits
    const uint32_t CAN1_F23R2_FB20 = 1U << 20 ;

  // Field FB21: Filter bits
    const uint32_t CAN1_F23R2_FB21 = 1U << 21 ;

  // Field FB22: Filter bits
    const uint32_t CAN1_F23R2_FB22 = 1U << 22 ;

  // Field FB23: Filter bits
    const uint32_t CAN1_F23R2_FB23 = 1U << 23 ;

  // Field FB24: Filter bits
    const uint32_t CAN1_F23R2_FB24 = 1U << 24 ;

  // Field FB25: Filter bits
    const uint32_t CAN1_F23R2_FB25 = 1U << 25 ;

  // Field FB26: Filter bits
    const uint32_t CAN1_F23R2_FB26 = 1U << 26 ;

  // Field FB27: Filter bits
    const uint32_t CAN1_F23R2_FB27 = 1U << 27 ;

  // Field FB28: Filter bits
    const uint32_t CAN1_F23R2_FB28 = 1U << 28 ;

  // Field FB29: Filter bits
    const uint32_t CAN1_F23R2_FB29 = 1U << 29 ;

  // Field FB30: Filter bits
    const uint32_t CAN1_F23R2_FB30 = 1U << 30 ;

  // Field FB31: Filter bits
    const uint32_t CAN1_F23R2_FB31 = 1U << 31 ;

//---  Register F24R1: Filter bank 24 register 1
  #define CAN1_F24R1 (* ((volatile uint32_t *) (0x40006400 + 768)))

  // Field FB0: Filter bits
    const uint32_t CAN1_F24R1_FB0 = 1U << 0 ;

  // Field FB1: Filter bits
    const uint32_t CAN1_F24R1_FB1 = 1U << 1 ;

  // Field FB2: Filter bits
    const uint32_t CAN1_F24R1_FB2 = 1U << 2 ;

  // Field FB3: Filter bits
    const uint32_t CAN1_F24R1_FB3 = 1U << 3 ;

  // Field FB4: Filter bits
    const uint32_t CAN1_F24R1_FB4 = 1U << 4 ;

  // Field FB5: Filter bits
    const uint32_t CAN1_F24R1_FB5 = 1U << 5 ;

  // Field FB6: Filter bits
    const uint32_t CAN1_F24R1_FB6 = 1U << 6 ;

  // Field FB7: Filter bits
    const uint32_t CAN1_F24R1_FB7 = 1U << 7 ;

  // Field FB8: Filter bits
    const uint32_t CAN1_F24R1_FB8 = 1U << 8 ;

  // Field FB9: Filter bits
    const uint32_t CAN1_F24R1_FB9 = 1U << 9 ;

  // Field FB10: Filter bits
    const uint32_t CAN1_F24R1_FB10 = 1U << 10 ;

  // Field FB11: Filter bits
    const uint32_t CAN1_F24R1_FB11 = 1U << 11 ;

  // Field FB12: Filter bits
    const uint32_t CAN1_F24R1_FB12 = 1U << 12 ;

  // Field FB13: Filter bits
    const uint32_t CAN1_F24R1_FB13 = 1U << 13 ;

  // Field FB14: Filter bits
    const uint32_t CAN1_F24R1_FB14 = 1U << 14 ;

  // Field FB15: Filter bits
    const uint32_t CAN1_F24R1_FB15 = 1U << 15 ;

  // Field FB16: Filter bits
    const uint32_t CAN1_F24R1_FB16 = 1U << 16 ;

  // Field FB17: Filter bits
    const uint32_t CAN1_F24R1_FB17 = 1U << 17 ;

  // Field FB18: Filter bits
    const uint32_t CAN1_F24R1_FB18 = 1U << 18 ;

  // Field FB19: Filter bits
    const uint32_t CAN1_F24R1_FB19 = 1U << 19 ;

  // Field FB20: Filter bits
    const uint32_t CAN1_F24R1_FB20 = 1U << 20 ;

  // Field FB21: Filter bits
    const uint32_t CAN1_F24R1_FB21 = 1U << 21 ;

  // Field FB22: Filter bits
    const uint32_t CAN1_F24R1_FB22 = 1U << 22 ;

  // Field FB23: Filter bits
    const uint32_t CAN1_F24R1_FB23 = 1U << 23 ;

  // Field FB24: Filter bits
    const uint32_t CAN1_F24R1_FB24 = 1U << 24 ;

  // Field FB25: Filter bits
    const uint32_t CAN1_F24R1_FB25 = 1U << 25 ;

  // Field FB26: Filter bits
    const uint32_t CAN1_F24R1_FB26 = 1U << 26 ;

  // Field FB27: Filter bits
    const uint32_t CAN1_F24R1_FB27 = 1U << 27 ;

  // Field FB28: Filter bits
    const uint32_t CAN1_F24R1_FB28 = 1U << 28 ;

  // Field FB29: Filter bits
    const uint32_t CAN1_F24R1_FB29 = 1U << 29 ;

  // Field FB30: Filter bits
    const uint32_t CAN1_F24R1_FB30 = 1U << 30 ;

  // Field FB31: Filter bits
    const uint32_t CAN1_F24R1_FB31 = 1U << 31 ;

//---  Register F24R2: Filter bank 24 register 2
  #define CAN1_F24R2 (* ((volatile uint32_t *) (0x40006400 + 772)))

  // Field FB0: Filter bits
    const uint32_t CAN1_F24R2_FB0 = 1U << 0 ;

  // Field FB1: Filter bits
    const uint32_t CAN1_F24R2_FB1 = 1U << 1 ;

  // Field FB2: Filter bits
    const uint32_t CAN1_F24R2_FB2 = 1U << 2 ;

  // Field FB3: Filter bits
    const uint32_t CAN1_F24R2_FB3 = 1U << 3 ;

  // Field FB4: Filter bits
    const uint32_t CAN1_F24R2_FB4 = 1U << 4 ;

  // Field FB5: Filter bits
    const uint32_t CAN1_F24R2_FB5 = 1U << 5 ;

  // Field FB6: Filter bits
    const uint32_t CAN1_F24R2_FB6 = 1U << 6 ;

  // Field FB7: Filter bits
    const uint32_t CAN1_F24R2_FB7 = 1U << 7 ;

  // Field FB8: Filter bits
    const uint32_t CAN1_F24R2_FB8 = 1U << 8 ;

  // Field FB9: Filter bits
    const uint32_t CAN1_F24R2_FB9 = 1U << 9 ;

  // Field FB10: Filter bits
    const uint32_t CAN1_F24R2_FB10 = 1U << 10 ;

  // Field FB11: Filter bits
    const uint32_t CAN1_F24R2_FB11 = 1U << 11 ;

  // Field FB12: Filter bits
    const uint32_t CAN1_F24R2_FB12 = 1U << 12 ;

  // Field FB13: Filter bits
    const uint32_t CAN1_F24R2_FB13 = 1U << 13 ;

  // Field FB14: Filter bits
    const uint32_t CAN1_F24R2_FB14 = 1U << 14 ;

  // Field FB15: Filter bits
    const uint32_t CAN1_F24R2_FB15 = 1U << 15 ;

  // Field FB16: Filter bits
    const uint32_t CAN1_F24R2_FB16 = 1U << 16 ;

  // Field FB17: Filter bits
    const uint32_t CAN1_F24R2_FB17 = 1U << 17 ;

  // Field FB18: Filter bits
    const uint32_t CAN1_F24R2_FB18 = 1U << 18 ;

  // Field FB19: Filter bits
    const uint32_t CAN1_F24R2_FB19 = 1U << 19 ;

  // Field FB20: Filter bits
    const uint32_t CAN1_F24R2_FB20 = 1U << 20 ;

  // Field FB21: Filter bits
    const uint32_t CAN1_F24R2_FB21 = 1U << 21 ;

  // Field FB22: Filter bits
    const uint32_t CAN1_F24R2_FB22 = 1U << 22 ;

  // Field FB23: Filter bits
    const uint32_t CAN1_F24R2_FB23 = 1U << 23 ;

  // Field FB24: Filter bits
    const uint32_t CAN1_F24R2_FB24 = 1U << 24 ;

  // Field FB25: Filter bits
    const uint32_t CAN1_F24R2_FB25 = 1U << 25 ;

  // Field FB26: Filter bits
    const uint32_t CAN1_F24R2_FB26 = 1U << 26 ;

  // Field FB27: Filter bits
    const uint32_t CAN1_F24R2_FB27 = 1U << 27 ;

  // Field FB28: Filter bits
    const uint32_t CAN1_F24R2_FB28 = 1U << 28 ;

  // Field FB29: Filter bits
    const uint32_t CAN1_F24R2_FB29 = 1U << 29 ;

  // Field FB30: Filter bits
    const uint32_t CAN1_F24R2_FB30 = 1U << 30 ;

  // Field FB31: Filter bits
    const uint32_t CAN1_F24R2_FB31 = 1U << 31 ;

//---  Register F25R1: Filter bank 25 register 1
  #define CAN1_F25R1 (* ((volatile uint32_t *) (0x40006400 + 776)))

  // Field FB0: Filter bits
    const uint32_t CAN1_F25R1_FB0 = 1U << 0 ;

  // Field FB1: Filter bits
    const uint32_t CAN1_F25R1_FB1 = 1U << 1 ;

  // Field FB2: Filter bits
    const uint32_t CAN1_F25R1_FB2 = 1U << 2 ;

  // Field FB3: Filter bits
    const uint32_t CAN1_F25R1_FB3 = 1U << 3 ;

  // Field FB4: Filter bits
    const uint32_t CAN1_F25R1_FB4 = 1U << 4 ;

  // Field FB5: Filter bits
    const uint32_t CAN1_F25R1_FB5 = 1U << 5 ;

  // Field FB6: Filter bits
    const uint32_t CAN1_F25R1_FB6 = 1U << 6 ;

  // Field FB7: Filter bits
    const uint32_t CAN1_F25R1_FB7 = 1U << 7 ;

  // Field FB8: Filter bits
    const uint32_t CAN1_F25R1_FB8 = 1U << 8 ;

  // Field FB9: Filter bits
    const uint32_t CAN1_F25R1_FB9 = 1U << 9 ;

  // Field FB10: Filter bits
    const uint32_t CAN1_F25R1_FB10 = 1U << 10 ;

  // Field FB11: Filter bits
    const uint32_t CAN1_F25R1_FB11 = 1U << 11 ;

  // Field FB12: Filter bits
    const uint32_t CAN1_F25R1_FB12 = 1U << 12 ;

  // Field FB13: Filter bits
    const uint32_t CAN1_F25R1_FB13 = 1U << 13 ;

  // Field FB14: Filter bits
    const uint32_t CAN1_F25R1_FB14 = 1U << 14 ;

  // Field FB15: Filter bits
    const uint32_t CAN1_F25R1_FB15 = 1U << 15 ;

  // Field FB16: Filter bits
    const uint32_t CAN1_F25R1_FB16 = 1U << 16 ;

  // Field FB17: Filter bits
    const uint32_t CAN1_F25R1_FB17 = 1U << 17 ;

  // Field FB18: Filter bits
    const uint32_t CAN1_F25R1_FB18 = 1U << 18 ;

  // Field FB19: Filter bits
    const uint32_t CAN1_F25R1_FB19 = 1U << 19 ;

  // Field FB20: Filter bits
    const uint32_t CAN1_F25R1_FB20 = 1U << 20 ;

  // Field FB21: Filter bits
    const uint32_t CAN1_F25R1_FB21 = 1U << 21 ;

  // Field FB22: Filter bits
    const uint32_t CAN1_F25R1_FB22 = 1U << 22 ;

  // Field FB23: Filter bits
    const uint32_t CAN1_F25R1_FB23 = 1U << 23 ;

  // Field FB24: Filter bits
    const uint32_t CAN1_F25R1_FB24 = 1U << 24 ;

  // Field FB25: Filter bits
    const uint32_t CAN1_F25R1_FB25 = 1U << 25 ;

  // Field FB26: Filter bits
    const uint32_t CAN1_F25R1_FB26 = 1U << 26 ;

  // Field FB27: Filter bits
    const uint32_t CAN1_F25R1_FB27 = 1U << 27 ;

  // Field FB28: Filter bits
    const uint32_t CAN1_F25R1_FB28 = 1U << 28 ;

  // Field FB29: Filter bits
    const uint32_t CAN1_F25R1_FB29 = 1U << 29 ;

  // Field FB30: Filter bits
    const uint32_t CAN1_F25R1_FB30 = 1U << 30 ;

  // Field FB31: Filter bits
    const uint32_t CAN1_F25R1_FB31 = 1U << 31 ;

//---  Register F25R2: Filter bank 25 register 2
  #define CAN1_F25R2 (* ((volatile uint32_t *) (0x40006400 + 780)))

  // Field FB0: Filter bits
    const uint32_t CAN1_F25R2_FB0 = 1U << 0 ;

  // Field FB1: Filter bits
    const uint32_t CAN1_F25R2_FB1 = 1U << 1 ;

  // Field FB2: Filter bits
    const uint32_t CAN1_F25R2_FB2 = 1U << 2 ;

  // Field FB3: Filter bits
    const uint32_t CAN1_F25R2_FB3 = 1U << 3 ;

  // Field FB4: Filter bits
    const uint32_t CAN1_F25R2_FB4 = 1U << 4 ;

  // Field FB5: Filter bits
    const uint32_t CAN1_F25R2_FB5 = 1U << 5 ;

  // Field FB6: Filter bits
    const uint32_t CAN1_F25R2_FB6 = 1U << 6 ;

  // Field FB7: Filter bits
    const uint32_t CAN1_F25R2_FB7 = 1U << 7 ;

  // Field FB8: Filter bits
    const uint32_t CAN1_F25R2_FB8 = 1U << 8 ;

  // Field FB9: Filter bits
    const uint32_t CAN1_F25R2_FB9 = 1U << 9 ;

  // Field FB10: Filter bits
    const uint32_t CAN1_F25R2_FB10 = 1U << 10 ;

  // Field FB11: Filter bits
    const uint32_t CAN1_F25R2_FB11 = 1U << 11 ;

  // Field FB12: Filter bits
    const uint32_t CAN1_F25R2_FB12 = 1U << 12 ;

  // Field FB13: Filter bits
    const uint32_t CAN1_F25R2_FB13 = 1U << 13 ;

  // Field FB14: Filter bits
    const uint32_t CAN1_F25R2_FB14 = 1U << 14 ;

  // Field FB15: Filter bits
    const uint32_t CAN1_F25R2_FB15 = 1U << 15 ;

  // Field FB16: Filter bits
    const uint32_t CAN1_F25R2_FB16 = 1U << 16 ;

  // Field FB17: Filter bits
    const uint32_t CAN1_F25R2_FB17 = 1U << 17 ;

  // Field FB18: Filter bits
    const uint32_t CAN1_F25R2_FB18 = 1U << 18 ;

  // Field FB19: Filter bits
    const uint32_t CAN1_F25R2_FB19 = 1U << 19 ;

  // Field FB20: Filter bits
    const uint32_t CAN1_F25R2_FB20 = 1U << 20 ;

  // Field FB21: Filter bits
    const uint32_t CAN1_F25R2_FB21 = 1U << 21 ;

  // Field FB22: Filter bits
    const uint32_t CAN1_F25R2_FB22 = 1U << 22 ;

  // Field FB23: Filter bits
    const uint32_t CAN1_F25R2_FB23 = 1U << 23 ;

  // Field FB24: Filter bits
    const uint32_t CAN1_F25R2_FB24 = 1U << 24 ;

  // Field FB25: Filter bits
    const uint32_t CAN1_F25R2_FB25 = 1U << 25 ;

  // Field FB26: Filter bits
    const uint32_t CAN1_F25R2_FB26 = 1U << 26 ;

  // Field FB27: Filter bits
    const uint32_t CAN1_F25R2_FB27 = 1U << 27 ;

  // Field FB28: Filter bits
    const uint32_t CAN1_F25R2_FB28 = 1U << 28 ;

  // Field FB29: Filter bits
    const uint32_t CAN1_F25R2_FB29 = 1U << 29 ;

  // Field FB30: Filter bits
    const uint32_t CAN1_F25R2_FB30 = 1U << 30 ;

  // Field FB31: Filter bits
    const uint32_t CAN1_F25R2_FB31 = 1U << 31 ;

//---  Register F26R1: Filter bank 26 register 1
  #define CAN1_F26R1 (* ((volatile uint32_t *) (0x40006400 + 784)))

  // Field FB0: Filter bits
    const uint32_t CAN1_F26R1_FB0 = 1U << 0 ;

  // Field FB1: Filter bits
    const uint32_t CAN1_F26R1_FB1 = 1U << 1 ;

  // Field FB2: Filter bits
    const uint32_t CAN1_F26R1_FB2 = 1U << 2 ;

  // Field FB3: Filter bits
    const uint32_t CAN1_F26R1_FB3 = 1U << 3 ;

  // Field FB4: Filter bits
    const uint32_t CAN1_F26R1_FB4 = 1U << 4 ;

  // Field FB5: Filter bits
    const uint32_t CAN1_F26R1_FB5 = 1U << 5 ;

  // Field FB6: Filter bits
    const uint32_t CAN1_F26R1_FB6 = 1U << 6 ;

  // Field FB7: Filter bits
    const uint32_t CAN1_F26R1_FB7 = 1U << 7 ;

  // Field FB8: Filter bits
    const uint32_t CAN1_F26R1_FB8 = 1U << 8 ;

  // Field FB9: Filter bits
    const uint32_t CAN1_F26R1_FB9 = 1U << 9 ;

  // Field FB10: Filter bits
    const uint32_t CAN1_F26R1_FB10 = 1U << 10 ;

  // Field FB11: Filter bits
    const uint32_t CAN1_F26R1_FB11 = 1U << 11 ;

  // Field FB12: Filter bits
    const uint32_t CAN1_F26R1_FB12 = 1U << 12 ;

  // Field FB13: Filter bits
    const uint32_t CAN1_F26R1_FB13 = 1U << 13 ;

  // Field FB14: Filter bits
    const uint32_t CAN1_F26R1_FB14 = 1U << 14 ;

  // Field FB15: Filter bits
    const uint32_t CAN1_F26R1_FB15 = 1U << 15 ;

  // Field FB16: Filter bits
    const uint32_t CAN1_F26R1_FB16 = 1U << 16 ;

  // Field FB17: Filter bits
    const uint32_t CAN1_F26R1_FB17 = 1U << 17 ;

  // Field FB18: Filter bits
    const uint32_t CAN1_F26R1_FB18 = 1U << 18 ;

  // Field FB19: Filter bits
    const uint32_t CAN1_F26R1_FB19 = 1U << 19 ;

  // Field FB20: Filter bits
    const uint32_t CAN1_F26R1_FB20 = 1U << 20 ;

  // Field FB21: Filter bits
    const uint32_t CAN1_F26R1_FB21 = 1U << 21 ;

  // Field FB22: Filter bits
    const uint32_t CAN1_F26R1_FB22 = 1U << 22 ;

  // Field FB23: Filter bits
    const uint32_t CAN1_F26R1_FB23 = 1U << 23 ;

  // Field FB24: Filter bits
    const uint32_t CAN1_F26R1_FB24 = 1U << 24 ;

  // Field FB25: Filter bits
    const uint32_t CAN1_F26R1_FB25 = 1U << 25 ;

  // Field FB26: Filter bits
    const uint32_t CAN1_F26R1_FB26 = 1U << 26 ;

  // Field FB27: Filter bits
    const uint32_t CAN1_F26R1_FB27 = 1U << 27 ;

  // Field FB28: Filter bits
    const uint32_t CAN1_F26R1_FB28 = 1U << 28 ;

  // Field FB29: Filter bits
    const uint32_t CAN1_F26R1_FB29 = 1U << 29 ;

  // Field FB30: Filter bits
    const uint32_t CAN1_F26R1_FB30 = 1U << 30 ;

  // Field FB31: Filter bits
    const uint32_t CAN1_F26R1_FB31 = 1U << 31 ;

//---  Register F26R2: Filter bank 26 register 2
  #define CAN1_F26R2 (* ((volatile uint32_t *) (0x40006400 + 788)))

  // Field FB0: Filter bits
    const uint32_t CAN1_F26R2_FB0 = 1U << 0 ;

  // Field FB1: Filter bits
    const uint32_t CAN1_F26R2_FB1 = 1U << 1 ;

  // Field FB2: Filter bits
    const uint32_t CAN1_F26R2_FB2 = 1U << 2 ;

  // Field FB3: Filter bits
    const uint32_t CAN1_F26R2_FB3 = 1U << 3 ;

  // Field FB4: Filter bits
    const uint32_t CAN1_F26R2_FB4 = 1U << 4 ;

  // Field FB5: Filter bits
    const uint32_t CAN1_F26R2_FB5 = 1U << 5 ;

  // Field FB6: Filter bits
    const uint32_t CAN1_F26R2_FB6 = 1U << 6 ;

  // Field FB7: Filter bits
    const uint32_t CAN1_F26R2_FB7 = 1U << 7 ;

  // Field FB8: Filter bits
    const uint32_t CAN1_F26R2_FB8 = 1U << 8 ;

  // Field FB9: Filter bits
    const uint32_t CAN1_F26R2_FB9 = 1U << 9 ;

  // Field FB10: Filter bits
    const uint32_t CAN1_F26R2_FB10 = 1U << 10 ;

  // Field FB11: Filter bits
    const uint32_t CAN1_F26R2_FB11 = 1U << 11 ;

  // Field FB12: Filter bits
    const uint32_t CAN1_F26R2_FB12 = 1U << 12 ;

  // Field FB13: Filter bits
    const uint32_t CAN1_F26R2_FB13 = 1U << 13 ;

  // Field FB14: Filter bits
    const uint32_t CAN1_F26R2_FB14 = 1U << 14 ;

  // Field FB15: Filter bits
    const uint32_t CAN1_F26R2_FB15 = 1U << 15 ;

  // Field FB16: Filter bits
    const uint32_t CAN1_F26R2_FB16 = 1U << 16 ;

  // Field FB17: Filter bits
    const uint32_t CAN1_F26R2_FB17 = 1U << 17 ;

  // Field FB18: Filter bits
    const uint32_t CAN1_F26R2_FB18 = 1U << 18 ;

  // Field FB19: Filter bits
    const uint32_t CAN1_F26R2_FB19 = 1U << 19 ;

  // Field FB20: Filter bits
    const uint32_t CAN1_F26R2_FB20 = 1U << 20 ;

  // Field FB21: Filter bits
    const uint32_t CAN1_F26R2_FB21 = 1U << 21 ;

  // Field FB22: Filter bits
    const uint32_t CAN1_F26R2_FB22 = 1U << 22 ;

  // Field FB23: Filter bits
    const uint32_t CAN1_F26R2_FB23 = 1U << 23 ;

  // Field FB24: Filter bits
    const uint32_t CAN1_F26R2_FB24 = 1U << 24 ;

  // Field FB25: Filter bits
    const uint32_t CAN1_F26R2_FB25 = 1U << 25 ;

  // Field FB26: Filter bits
    const uint32_t CAN1_F26R2_FB26 = 1U << 26 ;

  // Field FB27: Filter bits
    const uint32_t CAN1_F26R2_FB27 = 1U << 27 ;

  // Field FB28: Filter bits
    const uint32_t CAN1_F26R2_FB28 = 1U << 28 ;

  // Field FB29: Filter bits
    const uint32_t CAN1_F26R2_FB29 = 1U << 29 ;

  // Field FB30: Filter bits
    const uint32_t CAN1_F26R2_FB30 = 1U << 30 ;

  // Field FB31: Filter bits
    const uint32_t CAN1_F26R2_FB31 = 1U << 31 ;

//---  Register F27R1: Filter bank 27 register 1
  #define CAN1_F27R1 (* ((volatile uint32_t *) (0x40006400 + 792)))

  // Field FB0: Filter bits
    const uint32_t CAN1_F27R1_FB0 = 1U << 0 ;

  // Field FB1: Filter bits
    const uint32_t CAN1_F27R1_FB1 = 1U << 1 ;

  // Field FB2: Filter bits
    const uint32_t CAN1_F27R1_FB2 = 1U << 2 ;

  // Field FB3: Filter bits
    const uint32_t CAN1_F27R1_FB3 = 1U << 3 ;

  // Field FB4: Filter bits
    const uint32_t CAN1_F27R1_FB4 = 1U << 4 ;

  // Field FB5: Filter bits
    const uint32_t CAN1_F27R1_FB5 = 1U << 5 ;

  // Field FB6: Filter bits
    const uint32_t CAN1_F27R1_FB6 = 1U << 6 ;

  // Field FB7: Filter bits
    const uint32_t CAN1_F27R1_FB7 = 1U << 7 ;

  // Field FB8: Filter bits
    const uint32_t CAN1_F27R1_FB8 = 1U << 8 ;

  // Field FB9: Filter bits
    const uint32_t CAN1_F27R1_FB9 = 1U << 9 ;

  // Field FB10: Filter bits
    const uint32_t CAN1_F27R1_FB10 = 1U << 10 ;

  // Field FB11: Filter bits
    const uint32_t CAN1_F27R1_FB11 = 1U << 11 ;

  // Field FB12: Filter bits
    const uint32_t CAN1_F27R1_FB12 = 1U << 12 ;

  // Field FB13: Filter bits
    const uint32_t CAN1_F27R1_FB13 = 1U << 13 ;

  // Field FB14: Filter bits
    const uint32_t CAN1_F27R1_FB14 = 1U << 14 ;

  // Field FB15: Filter bits
    const uint32_t CAN1_F27R1_FB15 = 1U << 15 ;

  // Field FB16: Filter bits
    const uint32_t CAN1_F27R1_FB16 = 1U << 16 ;

  // Field FB17: Filter bits
    const uint32_t CAN1_F27R1_FB17 = 1U << 17 ;

  // Field FB18: Filter bits
    const uint32_t CAN1_F27R1_FB18 = 1U << 18 ;

  // Field FB19: Filter bits
    const uint32_t CAN1_F27R1_FB19 = 1U << 19 ;

  // Field FB20: Filter bits
    const uint32_t CAN1_F27R1_FB20 = 1U << 20 ;

  // Field FB21: Filter bits
    const uint32_t CAN1_F27R1_FB21 = 1U << 21 ;

  // Field FB22: Filter bits
    const uint32_t CAN1_F27R1_FB22 = 1U << 22 ;

  // Field FB23: Filter bits
    const uint32_t CAN1_F27R1_FB23 = 1U << 23 ;

  // Field FB24: Filter bits
    const uint32_t CAN1_F27R1_FB24 = 1U << 24 ;

  // Field FB25: Filter bits
    const uint32_t CAN1_F27R1_FB25 = 1U << 25 ;

  // Field FB26: Filter bits
    const uint32_t CAN1_F27R1_FB26 = 1U << 26 ;

  // Field FB27: Filter bits
    const uint32_t CAN1_F27R1_FB27 = 1U << 27 ;

  // Field FB28: Filter bits
    const uint32_t CAN1_F27R1_FB28 = 1U << 28 ;

  // Field FB29: Filter bits
    const uint32_t CAN1_F27R1_FB29 = 1U << 29 ;

  // Field FB30: Filter bits
    const uint32_t CAN1_F27R1_FB30 = 1U << 30 ;

  // Field FB31: Filter bits
    const uint32_t CAN1_F27R1_FB31 = 1U << 31 ;

//---  Register F27R2: Filter bank 27 register 2
  #define CAN1_F27R2 (* ((volatile uint32_t *) (0x40006400 + 796)))

  // Field FB0: Filter bits
    const uint32_t CAN1_F27R2_FB0 = 1U << 0 ;

  // Field FB1: Filter bits
    const uint32_t CAN1_F27R2_FB1 = 1U << 1 ;

  // Field FB2: Filter bits
    const uint32_t CAN1_F27R2_FB2 = 1U << 2 ;

  // Field FB3: Filter bits
    const uint32_t CAN1_F27R2_FB3 = 1U << 3 ;

  // Field FB4: Filter bits
    const uint32_t CAN1_F27R2_FB4 = 1U << 4 ;

  // Field FB5: Filter bits
    const uint32_t CAN1_F27R2_FB5 = 1U << 5 ;

  // Field FB6: Filter bits
    const uint32_t CAN1_F27R2_FB6 = 1U << 6 ;

  // Field FB7: Filter bits
    const uint32_t CAN1_F27R2_FB7 = 1U << 7 ;

  // Field FB8: Filter bits
    const uint32_t CAN1_F27R2_FB8 = 1U << 8 ;

  // Field FB9: Filter bits
    const uint32_t CAN1_F27R2_FB9 = 1U << 9 ;

  // Field FB10: Filter bits
    const uint32_t CAN1_F27R2_FB10 = 1U << 10 ;

  // Field FB11: Filter bits
    const uint32_t CAN1_F27R2_FB11 = 1U << 11 ;

  // Field FB12: Filter bits
    const uint32_t CAN1_F27R2_FB12 = 1U << 12 ;

  // Field FB13: Filter bits
    const uint32_t CAN1_F27R2_FB13 = 1U << 13 ;

  // Field FB14: Filter bits
    const uint32_t CAN1_F27R2_FB14 = 1U << 14 ;

  // Field FB15: Filter bits
    const uint32_t CAN1_F27R2_FB15 = 1U << 15 ;

  // Field FB16: Filter bits
    const uint32_t CAN1_F27R2_FB16 = 1U << 16 ;

  // Field FB17: Filter bits
    const uint32_t CAN1_F27R2_FB17 = 1U << 17 ;

  // Field FB18: Filter bits
    const uint32_t CAN1_F27R2_FB18 = 1U << 18 ;

  // Field FB19: Filter bits
    const uint32_t CAN1_F27R2_FB19 = 1U << 19 ;

  // Field FB20: Filter bits
    const uint32_t CAN1_F27R2_FB20 = 1U << 20 ;

  // Field FB21: Filter bits
    const uint32_t CAN1_F27R2_FB21 = 1U << 21 ;

  // Field FB22: Filter bits
    const uint32_t CAN1_F27R2_FB22 = 1U << 22 ;

  // Field FB23: Filter bits
    const uint32_t CAN1_F27R2_FB23 = 1U << 23 ;

  // Field FB24: Filter bits
    const uint32_t CAN1_F27R2_FB24 = 1U << 24 ;

  // Field FB25: Filter bits
    const uint32_t CAN1_F27R2_FB25 = 1U << 25 ;

  // Field FB26: Filter bits
    const uint32_t CAN1_F27R2_FB26 = 1U << 26 ;

  // Field FB27: Filter bits
    const uint32_t CAN1_F27R2_FB27 = 1U << 27 ;

  // Field FB28: Filter bits
    const uint32_t CAN1_F27R2_FB28 = 1U << 28 ;

  // Field FB29: Filter bits
    const uint32_t CAN1_F27R2_FB29 = 1U << 29 ;

  // Field FB30: Filter bits
    const uint32_t CAN1_F27R2_FB30 = 1U << 30 ;

  // Field FB31: Filter bits
    const uint32_t CAN1_F27R2_FB31 = 1U << 31 ;

//------------------------------------------------------------------------------
// Peripheral COMP: Comparator
//------------------------------------------------------------------------------

//---  Register COMP1_CSR: Comparator 1 control and status
          register
  #define COMP_COMP1_CSR (* ((volatile uint32_t *) (0x40010200 + 0)))

  // Field COMP1_EN: Comparator 1 enable bit
    const uint32_t COMP_COMP1_CSR_COMP1_EN = 1U << 0 ;

  // Field COMP1_PWRMODE: Power Mode of the comparator 1
    inline uint32_t COMP_COMP1_CSR_COMP1_PWRMODE (const uint32_t inValue) {return (inValue & 0x3U) << 2 ; }

  // Field COMP1_INMSEL: Comparator 1 Input Minus connection configuration bit
    inline uint32_t COMP_COMP1_CSR_COMP1_INMSEL (const uint32_t inValue) {return (inValue & 0x7U) << 4 ; }

  // Field COMP1_INPSEL: Comparator1 input plus selection bit
    inline uint32_t COMP_COMP1_CSR_COMP1_INPSEL (const uint32_t inValue) {return (inValue & 0x3U) << 7 ; }

  // Field COMP1_POLARITY: Comparator 1 polarity selection bit
    const uint32_t COMP_COMP1_CSR_COMP1_POLARITY = 1U << 15 ;

  // Field COMP1_HYST: Comparator 1 hysteresis selection bits
    inline uint32_t COMP_COMP1_CSR_COMP1_HYST (const uint32_t inValue) {return (inValue & 0x3U) << 16 ; }

  // Field COMP1_BLANKING: Comparator 1 blanking source selection bits
    inline uint32_t COMP_COMP1_CSR_COMP1_BLANKING (const uint32_t inValue) {return (inValue & 0x7U) << 18 ; }

  // Field COMP1_BRGEN: Scaler bridge enable
    const uint32_t COMP_COMP1_CSR_COMP1_BRGEN = 1U << 22 ;

  // Field COMP1_SCALEN: Voltage scaler enable bit
    const uint32_t COMP_COMP1_CSR_COMP1_SCALEN = 1U << 23 ;

  // Field COMP1_INMESEL: comparator 1 input minus extended selection bits
    inline uint32_t COMP_COMP1_CSR_COMP1_INMESEL (const uint32_t inValue) {return (inValue & 0x3U) << 25 ; }

  // Field COMP1_VALUE: Comparator 1 output status bit
    const uint32_t COMP_COMP1_CSR_COMP1_VALUE = 1U << 30 ;

  // Field COMP1_LOCK: COMP1_CSR register lock bit
    const uint32_t COMP_COMP1_CSR_COMP1_LOCK = 1U << 31 ;

//---  Register COMP2_CSR: Comparator 2 control and status
          register
  #define COMP_COMP2_CSR (* ((volatile uint32_t *) (0x40010200 + 4)))

  // Field COMP2_EN: Comparator 2 enable bit
    const uint32_t COMP_COMP2_CSR_COMP2_EN = 1U << 0 ;

  // Field COMP2_PWRMODE: Power Mode of the comparator 2
    inline uint32_t COMP_COMP2_CSR_COMP2_PWRMODE (const uint32_t inValue) {return (inValue & 0x3U) << 2 ; }

  // Field COMP2_INMSEL: Comparator 2 Input Minus connection configuration bit
    inline uint32_t COMP_COMP2_CSR_COMP2_INMSEL (const uint32_t inValue) {return (inValue & 0x7U) << 4 ; }

  // Field COMP2_INPSEL: Comparator 2 Input Plus connection configuration bit
    inline uint32_t COMP_COMP2_CSR_COMP2_INPSEL (const uint32_t inValue) {return (inValue & 0x3U) << 7 ; }

  // Field COMP2_WINMODE: Windows mode selection bit
    const uint32_t COMP_COMP2_CSR_COMP2_WINMODE = 1U << 9 ;

  // Field COMP2_POLARITY: Comparator 2 polarity selection bit
    const uint32_t COMP_COMP2_CSR_COMP2_POLARITY = 1U << 15 ;

  // Field COMP2_HYST: Comparator 2 hysteresis selection bits
    inline uint32_t COMP_COMP2_CSR_COMP2_HYST (const uint32_t inValue) {return (inValue & 0x3U) << 16 ; }

  // Field COMP2_BLANKING: Comparator 2 blanking source selection bits
    inline uint32_t COMP_COMP2_CSR_COMP2_BLANKING (const uint32_t inValue) {return (inValue & 0x7U) << 18 ; }

  // Field COMP2_BRGEN: Scaler bridge enable
    const uint32_t COMP_COMP2_CSR_COMP2_BRGEN = 1U << 22 ;

  // Field COMP2_SCALEN: Voltage scaler enable bit
    const uint32_t COMP_COMP2_CSR_COMP2_SCALEN = 1U << 23 ;

  // Field COMP2_INMESEL: comparator 2 input minus extended selection bits
    inline uint32_t COMP_COMP2_CSR_COMP2_INMESEL (const uint32_t inValue) {return (inValue & 0x3U) << 25 ; }

  // Field COMP2_VALUE: Comparator 2 output status bit
    const uint32_t COMP_COMP2_CSR_COMP2_VALUE = 1U << 30 ;

  // Field COMP2_LOCK: COMP2_CSR register lock bit
    const uint32_t COMP_COMP2_CSR_COMP2_LOCK = 1U << 31 ;

//------------------------------------------------------------------------------
// Peripheral CRC: Cyclic redundancy check calculation       unit
//------------------------------------------------------------------------------

//---  Register DR: Data register
  #define CRC_DR (* ((volatile uint32_t *) (0x40023000 + 0)))

  // Field DR: Data register bits
    inline uint32_t CRC_DR_DR (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register IDR: Independent data register
  #define CRC_IDR (* ((volatile uint32_t *) (0x40023000 + 4)))

  // Field IDR: General-purpose 8-bit data register bits
    inline uint32_t CRC_IDR_IDR (const uint32_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register CR: Control register
  #define CRC_CR (* ((volatile uint32_t *) (0x40023000 + 8)))

  // Field REV_OUT: Reverse output data
    const uint32_t CRC_CR_REV_OUT = 1U << 7 ;

  // Field REV_IN: Reverse input data
    inline uint32_t CRC_CR_REV_IN (const uint32_t inValue) {return (inValue & 0x3U) << 5 ; }

  // Field POLYSIZE: Polynomial size
    inline uint32_t CRC_CR_POLYSIZE (const uint32_t inValue) {return (inValue & 0x3U) << 3 ; }

  // Field RESET: RESET bit
    const uint32_t CRC_CR_RESET = 1U << 0 ;

//---  Register INIT: Initial CRC value
  #define CRC_INIT (* ((volatile uint32_t *) (0x40023000 + 16)))

  // Field CRC_INIT: Programmable initial CRC value
    inline uint32_t CRC_INIT_CRC_INIT (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register POL: polynomial
  #define CRC_POL (* ((volatile uint32_t *) (0x40023000 + 20)))

  // Field Polynomialcoefficients: Programmable polynomial
    inline uint32_t CRC_POL_Polynomialcoefficients (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//------------------------------------------------------------------------------
// Peripheral CRS: Clock recovery system
//------------------------------------------------------------------------------

//---  Register CR: control register
  #define CRS_CR (* ((volatile uint32_t *) (0x40006000 + 0)))

  // Field TRIM: HSI48 oscillator smooth trimming
    inline uint32_t CRS_CR_TRIM (const uint32_t inValue) {return (inValue & 0x3fU) << 8 ; }

  // Field SWSYNC: Generate software SYNC event
    const uint32_t CRS_CR_SWSYNC = 1U << 7 ;

  // Field AUTOTRIMEN: Automatic trimming enable
    const uint32_t CRS_CR_AUTOTRIMEN = 1U << 6 ;

  // Field CEN: Frequency error counter enable
    const uint32_t CRS_CR_CEN = 1U << 5 ;

  // Field ESYNCIE: Expected SYNC interrupt enable
    const uint32_t CRS_CR_ESYNCIE = 1U << 3 ;

  // Field ERRIE: Synchronization or trimming error interrupt enable
    const uint32_t CRS_CR_ERRIE = 1U << 2 ;

  // Field SYNCWARNIE: SYNC warning interrupt enable
    const uint32_t CRS_CR_SYNCWARNIE = 1U << 1 ;

  // Field SYNCOKIE: SYNC event OK interrupt enable
    const uint32_t CRS_CR_SYNCOKIE = 1U << 0 ;

//---  Register CFGR: configuration register
  #define CRS_CFGR (* ((volatile uint32_t *) (0x40006000 + 4)))

  // Field SYNCPOL: SYNC polarity selection
    const uint32_t CRS_CFGR_SYNCPOL = 1U << 31 ;

  // Field SYNCSRC: SYNC signal source selection
    inline uint32_t CRS_CFGR_SYNCSRC (const uint32_t inValue) {return (inValue & 0x3U) << 28 ; }

  // Field SYNCDIV: SYNC divider
    inline uint32_t CRS_CFGR_SYNCDIV (const uint32_t inValue) {return (inValue & 0x7U) << 24 ; }

  // Field FELIM: Frequency error limit
    inline uint32_t CRS_CFGR_FELIM (const uint32_t inValue) {return (inValue & 0xffU) << 16 ; }

  // Field RELOAD: Counter reload value
    inline uint32_t CRS_CFGR_RELOAD (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register ISR: interrupt and status register
  #define CRS_ISR (* ((const volatile uint32_t *) (0x40006000 + 8)))

  // Field FECAP: Frequency error capture
    inline uint32_t CRS_ISR_FECAP (const uint32_t inValue) {return (inValue & 0xffffU) << 16 ; }

  // Field FEDIR: Frequency error direction
    const uint32_t CRS_ISR_FEDIR = 1U << 15 ;

  // Field TRIMOVF: Trimming overflow or underflow
    const uint32_t CRS_ISR_TRIMOVF = 1U << 10 ;

  // Field SYNCMISS: SYNC missed
    const uint32_t CRS_ISR_SYNCMISS = 1U << 9 ;

  // Field SYNCERR: SYNC error
    const uint32_t CRS_ISR_SYNCERR = 1U << 8 ;

  // Field ESYNCF: Expected SYNC flag
    const uint32_t CRS_ISR_ESYNCF = 1U << 3 ;

  // Field ERRF: Error flag
    const uint32_t CRS_ISR_ERRF = 1U << 2 ;

  // Field SYNCWARNF: SYNC warning flag
    const uint32_t CRS_ISR_SYNCWARNF = 1U << 1 ;

  // Field SYNCOKF: SYNC event OK flag
    const uint32_t CRS_ISR_SYNCOKF = 1U << 0 ;

//---  Register ICR: interrupt flag clear register
  #define CRS_ICR (* ((volatile uint32_t *) (0x40006000 + 12)))

  // Field ESYNCC: Expected SYNC clear flag
    const uint32_t CRS_ICR_ESYNCC = 1U << 3 ;

  // Field ERRC: Error clear flag
    const uint32_t CRS_ICR_ERRC = 1U << 2 ;

  // Field SYNCWARNC: SYNC warning clear flag
    const uint32_t CRS_ICR_SYNCWARNC = 1U << 1 ;

  // Field SYNCOKC: SYNC event OK clear flag
    const uint32_t CRS_ICR_SYNCOKC = 1U << 0 ;

//------------------------------------------------------------------------------
// Peripheral DAC1: Digital-to-analog converter
//------------------------------------------------------------------------------

//---  Register CR: control register
  #define DAC1_CR (* ((volatile uint32_t *) (0x40007400 + 0)))

  // Field EN1: DAC channel1 enable
    const uint32_t DAC1_CR_EN1 = 1U << 0 ;

  // Field TEN1: DAC channel1 trigger enable
    const uint32_t DAC1_CR_TEN1 = 1U << 2 ;

  // Field TSEL1: DAC channel1 trigger selection
    inline uint32_t DAC1_CR_TSEL1 (const uint32_t inValue) {return (inValue & 0x7U) << 3 ; }

  // Field WAVE1: DAC channel1 noise/triangle wave generation enable
    inline uint32_t DAC1_CR_WAVE1 (const uint32_t inValue) {return (inValue & 0x3U) << 6 ; }

  // Field MAMP1: DAC channel1 mask/amplitude selector
    inline uint32_t DAC1_CR_MAMP1 (const uint32_t inValue) {return (inValue & 0xfU) << 8 ; }

  // Field DMAEN1: DAC channel1 DMA enable
    const uint32_t DAC1_CR_DMAEN1 = 1U << 12 ;

  // Field DMAUDRIE1: DAC channel1 DMA Underrun Interrupt enable
    const uint32_t DAC1_CR_DMAUDRIE1 = 1U << 13 ;

  // Field CEN1: DAC Channel 1 calibration enable
    const uint32_t DAC1_CR_CEN1 = 1U << 14 ;

  // Field EN2: DAC channel2 enable
    const uint32_t DAC1_CR_EN2 = 1U << 16 ;

  // Field TEN2: DAC channel2 trigger enable
    const uint32_t DAC1_CR_TEN2 = 1U << 18 ;

  // Field TSEL2: DAC channel2 trigger selection
    inline uint32_t DAC1_CR_TSEL2 (const uint32_t inValue) {return (inValue & 0x7U) << 19 ; }

  // Field WAVE2: DAC channel2 noise/triangle wave generation enable
    inline uint32_t DAC1_CR_WAVE2 (const uint32_t inValue) {return (inValue & 0x3U) << 22 ; }

  // Field MAMP2: DAC channel2 mask/amplitude selector
    inline uint32_t DAC1_CR_MAMP2 (const uint32_t inValue) {return (inValue & 0xfU) << 24 ; }

  // Field DMAEN2: DAC channel2 DMA enable
    const uint32_t DAC1_CR_DMAEN2 = 1U << 28 ;

  // Field DMAUDRIE2: DAC channel2 DMA underrun interrupt enable
    const uint32_t DAC1_CR_DMAUDRIE2 = 1U << 29 ;

  // Field CEN2: DAC Channel 2 calibration enable
    const uint32_t DAC1_CR_CEN2 = 1U << 30 ;

//---  Register SWTRIGR: software trigger register
  #define DAC1_SWTRIGR (* ((volatile uint32_t *) (0x40007400 + 4)))

  // Field SWTRIG1: DAC channel1 software trigger
    const uint32_t DAC1_SWTRIGR_SWTRIG1 = 1U << 0 ;

  // Field SWTRIG2: DAC channel2 software trigger
    const uint32_t DAC1_SWTRIGR_SWTRIG2 = 1U << 1 ;

//---  Register DHR12R1: channel1 12-bit right-aligned data holding
          register
  #define DAC1_DHR12R1 (* ((volatile uint32_t *) (0x40007400 + 8)))

  // Field DACC1DHR: DAC channel1 12-bit right-aligned data
    inline uint32_t DAC1_DHR12R1_DACC1DHR (const uint32_t inValue) {return (inValue & 0xfffU) << 0 ; }

//---  Register DHR12L1: channel1 12-bit left-aligned data holding
          register
  #define DAC1_DHR12L1 (* ((volatile uint32_t *) (0x40007400 + 12)))

  // Field DACC1DHR: DAC channel1 12-bit left-aligned data
    inline uint32_t DAC1_DHR12L1_DACC1DHR (const uint32_t inValue) {return (inValue & 0xfffU) << 4 ; }

//---  Register DHR8R1: channel1 8-bit right-aligned data holding
          register
  #define DAC1_DHR8R1 (* ((volatile uint32_t *) (0x40007400 + 16)))

  // Field DACC1DHR: DAC channel1 8-bit right-aligned data
    inline uint32_t DAC1_DHR8R1_DACC1DHR (const uint32_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register DHR12R2: channel2 12-bit right aligned data holding
          register
  #define DAC1_DHR12R2 (* ((volatile uint32_t *) (0x40007400 + 20)))

  // Field DACC2DHR: DAC channel2 12-bit right-aligned data
    inline uint32_t DAC1_DHR12R2_DACC2DHR (const uint32_t inValue) {return (inValue & 0xfffU) << 0 ; }

//---  Register DHR12L2: channel2 12-bit left aligned data holding
          register
  #define DAC1_DHR12L2 (* ((volatile uint32_t *) (0x40007400 + 24)))

  // Field DACC2DHR: DAC channel2 12-bit left-aligned data
    inline uint32_t DAC1_DHR12L2_DACC2DHR (const uint32_t inValue) {return (inValue & 0xfffU) << 4 ; }

//---  Register DHR8R2: channel2 8-bit right-aligned data holding
          register
  #define DAC1_DHR8R2 (* ((volatile uint32_t *) (0x40007400 + 28)))

  // Field DACC2DHR: DAC channel2 8-bit right-aligned data
    inline uint32_t DAC1_DHR8R2_DACC2DHR (const uint32_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register DHR12RD: Dual DAC 12-bit right-aligned data holding
          register
  #define DAC1_DHR12RD (* ((volatile uint32_t *) (0x40007400 + 32)))

  // Field DACC1DHR: DAC channel1 12-bit right-aligned data
    inline uint32_t DAC1_DHR12RD_DACC1DHR (const uint32_t inValue) {return (inValue & 0xfffU) << 0 ; }

  // Field DACC2DHR: DAC channel2 12-bit right-aligned data
    inline uint32_t DAC1_DHR12RD_DACC2DHR (const uint32_t inValue) {return (inValue & 0xfffU) << 16 ; }

//---  Register DHR12LD: DUAL DAC 12-bit left aligned data holding
          register
  #define DAC1_DHR12LD (* ((volatile uint32_t *) (0x40007400 + 36)))

  // Field DACC1DHR: DAC channel1 12-bit left-aligned data
    inline uint32_t DAC1_DHR12LD_DACC1DHR (const uint32_t inValue) {return (inValue & 0xfffU) << 4 ; }

  // Field DACC2DHR: DAC channel2 12-bit left-aligned data
    inline uint32_t DAC1_DHR12LD_DACC2DHR (const uint32_t inValue) {return (inValue & 0xfffU) << 20 ; }

//---  Register DHR8RD: DUAL DAC 8-bit right aligned data holding
          register
  #define DAC1_DHR8RD (* ((volatile uint32_t *) (0x40007400 + 40)))

  // Field DACC1DHR: DAC channel1 8-bit right-aligned data
    inline uint32_t DAC1_DHR8RD_DACC1DHR (const uint32_t inValue) {return (inValue & 0xffU) << 0 ; }

  // Field DACC2DHR: DAC channel2 8-bit right-aligned data
    inline uint32_t DAC1_DHR8RD_DACC2DHR (const uint32_t inValue) {return (inValue & 0xffU) << 8 ; }

//---  Register DOR1: channel1 data output register
  #define DAC1_DOR1 (* ((const volatile uint32_t *) (0x40007400 + 44)))

  // Field DACC1DOR: DAC channel1 data output
    inline uint32_t DAC1_DOR1_DACC1DOR (const uint32_t inValue) {return (inValue & 0xfffU) << 0 ; }

//---  Register DOR2: channel2 data output register
  #define DAC1_DOR2 (* ((const volatile uint32_t *) (0x40007400 + 48)))

  // Field DACC2DOR: DAC channel2 data output
    inline uint32_t DAC1_DOR2_DACC2DOR (const uint32_t inValue) {return (inValue & 0xfffU) << 0 ; }

//---  Register SR: status register
  #define DAC1_SR (* ((volatile uint32_t *) (0x40007400 + 52)))

  // Field DMAUDR1: DAC channel1 DMA underrun flag
    const uint32_t DAC1_SR_DMAUDR1 = 1U << 13 ;

  // Field CAL_FLAG1: DAC Channel 1 calibration offset status
    const uint32_t DAC1_SR_CAL_FLAG1 = 1U << 14 ;

  // Field BWST1: DAC Channel 1 busy writing sample time flag
    const uint32_t DAC1_SR_BWST1 = 1U << 15 ;

  // Field DMAUDR2: DAC channel2 DMA underrun flag
    const uint32_t DAC1_SR_DMAUDR2 = 1U << 29 ;

  // Field CAL_FLAG2: DAC Channel 2 calibration offset status
    const uint32_t DAC1_SR_CAL_FLAG2 = 1U << 30 ;

  // Field BWST2: DAC Channel 2 busy writing sample time flag
    const uint32_t DAC1_SR_BWST2 = 1U << 31 ;

//---  Register CCR: calibration control register
  #define DAC1_CCR (* ((volatile uint32_t *) (0x40007400 + 56)))

  // Field OTRIM1: DAC Channel 1 offset trimming value
    inline uint32_t DAC1_CCR_OTRIM1 (const uint32_t inValue) {return (inValue & 0x1fU) << 0 ; }

  // Field OTRIM2: DAC Channel 2 offset trimming value
    inline uint32_t DAC1_CCR_OTRIM2 (const uint32_t inValue) {return (inValue & 0x1fU) << 16 ; }

//---  Register MCR: mode control register
  #define DAC1_MCR (* ((volatile uint32_t *) (0x40007400 + 60)))

  // Field MODE1: DAC Channel 1 mode
    inline uint32_t DAC1_MCR_MODE1 (const uint32_t inValue) {return (inValue & 0x7U) << 0 ; }

  // Field MODE2: DAC Channel 2 mode
    inline uint32_t DAC1_MCR_MODE2 (const uint32_t inValue) {return (inValue & 0x7U) << 16 ; }

//---  Register SHSR1: Sample and Hold sample time register
          1
  #define DAC1_SHSR1 (* ((volatile uint32_t *) (0x40007400 + 64)))

  // Field TSAMPLE1: DAC Channel 1 sample Time
    inline uint32_t DAC1_SHSR1_TSAMPLE1 (const uint32_t inValue) {return (inValue & 0x3ffU) << 0 ; }

//---  Register SHSR2: Sample and Hold sample time register
          2
  #define DAC1_SHSR2 (* ((volatile uint32_t *) (0x40007400 + 68)))

  // Field TSAMPLE2: DAC Channel 2 sample Time
    inline uint32_t DAC1_SHSR2_TSAMPLE2 (const uint32_t inValue) {return (inValue & 0x3ffU) << 0 ; }

//---  Register SHHR: Sample and Hold hold time
          register
  #define DAC1_SHHR (* ((volatile uint32_t *) (0x40007400 + 72)))

  // Field THOLD1: DAC Channel 1 hold Time
    inline uint32_t DAC1_SHHR_THOLD1 (const uint32_t inValue) {return (inValue & 0x3ffU) << 0 ; }

  // Field THOLD2: DAC Channel 2 hold time
    inline uint32_t DAC1_SHHR_THOLD2 (const uint32_t inValue) {return (inValue & 0x3ffU) << 16 ; }

//---  Register SHRR: Sample and Hold refresh time
          register
  #define DAC1_SHRR (* ((volatile uint32_t *) (0x40007400 + 76)))

  // Field TREFRESH1: DAC Channel 1 refresh Time
    inline uint32_t DAC1_SHRR_TREFRESH1 (const uint32_t inValue) {return (inValue & 0xffU) << 0 ; }

  // Field TREFRESH2: DAC Channel 2 refresh Time
    inline uint32_t DAC1_SHRR_TREFRESH2 (const uint32_t inValue) {return (inValue & 0xffU) << 16 ; }

//------------------------------------------------------------------------------
// Peripheral DBGMCU: MCU debug component
//------------------------------------------------------------------------------

//---  Register IDCODE: DBGMCU_IDCODE
  #define DBGMCU_IDCODE (* ((const volatile uint32_t *) (0xe0042000 + 0)))

  // Field DEV_ID: Device identifier
    inline uint32_t DBGMCU_IDCODE_DEV_ID (const uint32_t inValue) {return (inValue & 0xfffU) << 0 ; }

  // Field REV_ID: Revision identifie
    inline uint32_t DBGMCU_IDCODE_REV_ID (const uint32_t inValue) {return (inValue & 0xffffU) << 16 ; }

//---  Register CR: Debug MCU configuration
          register
  #define DBGMCU_CR (* ((volatile uint32_t *) (0xe0042000 + 4)))

  // Field DBG_SLEEP: Debug Sleep mode
    const uint32_t DBGMCU_CR_DBG_SLEEP = 1U << 0 ;

  // Field DBG_STOP: Debug Stop mode
    const uint32_t DBGMCU_CR_DBG_STOP = 1U << 1 ;

  // Field DBG_STANDBY: Debug Standby mode
    const uint32_t DBGMCU_CR_DBG_STANDBY = 1U << 2 ;

  // Field TRACE_IOEN: Trace pin assignment control
    const uint32_t DBGMCU_CR_TRACE_IOEN = 1U << 5 ;

  // Field TRACE_MODE: Trace pin assignment control
    inline uint32_t DBGMCU_CR_TRACE_MODE (const uint32_t inValue) {return (inValue & 0x3U) << 6 ; }

//---  Register APB1FZR1: Debug MCU APB1 freeze
          register1
  #define DBGMCU_APB1FZR1 (* ((volatile uint32_t *) (0xe0042000 + 8)))

  // Field DBG_TIM2_STOP: TIM2 counter stopped when core is halted
    const uint32_t DBGMCU_APB1FZR1_DBG_TIM2_STOP = 1U << 0 ;

  // Field DBG_TIM6_STOP: TIM6 counter stopped when core is halted
    const uint32_t DBGMCU_APB1FZR1_DBG_TIM6_STOP = 1U << 4 ;

  // Field DBG_TIM7_STOP: TIM7 counter stopped when core is halted
    const uint32_t DBGMCU_APB1FZR1_DBG_TIM7_STOP = 1U << 5 ;

  // Field DBG_RTC_STOP: RTC counter stopped when core is halted
    const uint32_t DBGMCU_APB1FZR1_DBG_RTC_STOP = 1U << 10 ;

  // Field DBG_WWDG_STOP: Window watchdog counter stopped when core is halted
    const uint32_t DBGMCU_APB1FZR1_DBG_WWDG_STOP = 1U << 11 ;

  // Field DBG_IWDG_STOP: Independent watchdog counter stopped when core is halted
    const uint32_t DBGMCU_APB1FZR1_DBG_IWDG_STOP = 1U << 12 ;

  // Field DBG_I2C1_STOP: I2C1 SMBUS timeout counter stopped when core is halted
    const uint32_t DBGMCU_APB1FZR1_DBG_I2C1_STOP = 1U << 21 ;

  // Field DBG_I2C2_STOP: I2C2 SMBUS timeout counter stopped when core is halted
    const uint32_t DBGMCU_APB1FZR1_DBG_I2C2_STOP = 1U << 22 ;

  // Field DBG_I2C3_STOP: I2C3 SMBUS timeout counter stopped when core is halted
    const uint32_t DBGMCU_APB1FZR1_DBG_I2C3_STOP = 1U << 23 ;

  // Field DBG_CAN_STOP: bxCAN stopped when core is halted
    const uint32_t DBGMCU_APB1FZR1_DBG_CAN_STOP = 1U << 25 ;

  // Field DBG_LPTIM1_STOP: LPTIM1 counter stopped when core is halted
    const uint32_t DBGMCU_APB1FZR1_DBG_LPTIM1_STOP = 1U << 31 ;

//---  Register APB1FZR2: Debug MCU APB1 freeze register
          2
  #define DBGMCU_APB1FZR2 (* ((volatile uint32_t *) (0xe0042000 + 12)))

  // Field DBG_LPTIM2_STOP: LPTIM2 counter stopped when core is halted
    const uint32_t DBGMCU_APB1FZR2_DBG_LPTIM2_STOP = 1U << 5 ;

//---  Register APB2FZR: Debug MCU APB2 freeze register
  #define DBGMCU_APB2FZR (* ((volatile uint32_t *) (0xe0042000 + 16)))

  // Field DBG_TIM1_STOP: TIM1 counter stopped when core is halted
    const uint32_t DBGMCU_APB2FZR_DBG_TIM1_STOP = 1U << 11 ;

  // Field DBG_TIM15_STOP: TIM15 counter stopped when core is halted
    const uint32_t DBGMCU_APB2FZR_DBG_TIM15_STOP = 1U << 16 ;

  // Field DBG_TIM16_STOP: TIM16 counter stopped when core is halted
    const uint32_t DBGMCU_APB2FZR_DBG_TIM16_STOP = 1U << 17 ;

//------------------------------------------------------------------------------
// Peripheral DFSDM: Digital filter for sigma delta       modulators
//------------------------------------------------------------------------------

//---  Register CHCFG0R1: channel configuration y
          register
  #define DFSDM_CHCFG0R1 (* ((volatile uint32_t *) (0x40016000 + 0)))

  // Field DFSDMEN: DFSDMEN
    const uint32_t DFSDM_CHCFG0R1_DFSDMEN = 1U << 31 ;

  // Field CKOUTSRC: CKOUTSRC
    const uint32_t DFSDM_CHCFG0R1_CKOUTSRC = 1U << 30 ;

  // Field CKOUTDIV: CKOUTDIV
    inline uint32_t DFSDM_CHCFG0R1_CKOUTDIV (const uint32_t inValue) {return (inValue & 0xffU) << 16 ; }

  // Field DATPACK: DATPACK
    inline uint32_t DFSDM_CHCFG0R1_DATPACK (const uint32_t inValue) {return (inValue & 0x3U) << 14 ; }

  // Field DATMPX: DATMPX
    inline uint32_t DFSDM_CHCFG0R1_DATMPX (const uint32_t inValue) {return (inValue & 0x3U) << 12 ; }

  // Field CHINSEL: CHINSEL
    const uint32_t DFSDM_CHCFG0R1_CHINSEL = 1U << 8 ;

  // Field CHEN: CHEN
    const uint32_t DFSDM_CHCFG0R1_CHEN = 1U << 7 ;

  // Field CKABEN: CKABEN
    const uint32_t DFSDM_CHCFG0R1_CKABEN = 1U << 6 ;

  // Field SCDEN: SCDEN
    const uint32_t DFSDM_CHCFG0R1_SCDEN = 1U << 5 ;

  // Field SPICKSEL: SPICKSEL
    inline uint32_t DFSDM_CHCFG0R1_SPICKSEL (const uint32_t inValue) {return (inValue & 0x3U) << 2 ; }

  // Field SITP: SITP
    inline uint32_t DFSDM_CHCFG0R1_SITP (const uint32_t inValue) {return (inValue & 0x3U) << 0 ; }

//---  Register CHCFG0R2: channel configuration y
          register
  #define DFSDM_CHCFG0R2 (* ((volatile uint32_t *) (0x40016000 + 4)))

  // Field OFFSET: OFFSET
    inline uint32_t DFSDM_CHCFG0R2_OFFSET (const uint32_t inValue) {return (inValue & 0xffffffU) << 8 ; }

  // Field DTRBS: DTRBS
    inline uint32_t DFSDM_CHCFG0R2_DTRBS (const uint32_t inValue) {return (inValue & 0x1fU) << 3 ; }

//---  Register AWSCD0R: analog watchdog and short-circuit detector
          register
  #define DFSDM_AWSCD0R (* ((volatile uint32_t *) (0x40016000 + 8)))

  // Field AWFORD: AWFORD
    inline uint32_t DFSDM_AWSCD0R_AWFORD (const uint32_t inValue) {return (inValue & 0x3U) << 22 ; }

  // Field AWFOSR: AWFOSR
    inline uint32_t DFSDM_AWSCD0R_AWFOSR (const uint32_t inValue) {return (inValue & 0x1fU) << 16 ; }

  // Field BKSCD: BKSCD
    inline uint32_t DFSDM_AWSCD0R_BKSCD (const uint32_t inValue) {return (inValue & 0xfU) << 12 ; }

  // Field SCDT: SCDT
    inline uint32_t DFSDM_AWSCD0R_SCDT (const uint32_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register CHWDAT0R: channel watchdog filter data
          register
  #define DFSDM_CHWDAT0R (* ((volatile uint32_t *) (0x40016000 + 12)))

  // Field WDATA: WDATA
    inline uint32_t DFSDM_CHWDAT0R_WDATA (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register CHDATIN0R: channel data input register
  #define DFSDM_CHDATIN0R (* ((volatile uint32_t *) (0x40016000 + 16)))

  // Field INDAT1: INDAT1
    inline uint32_t DFSDM_CHDATIN0R_INDAT1 (const uint32_t inValue) {return (inValue & 0xffffU) << 16 ; }

  // Field INDAT0: INDAT0
    inline uint32_t DFSDM_CHDATIN0R_INDAT0 (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register CHCFG1R1: CHCFG1R1
  #define DFSDM_CHCFG1R1 (* ((volatile uint32_t *) (0x40016000 + 32)))

  // Field DATPACK: DATPACK
    inline uint32_t DFSDM_CHCFG1R1_DATPACK (const uint32_t inValue) {return (inValue & 0x3U) << 14 ; }

  // Field DATMPX: DATMPX
    inline uint32_t DFSDM_CHCFG1R1_DATMPX (const uint32_t inValue) {return (inValue & 0x3U) << 12 ; }

  // Field CHINSEL: CHINSEL
    const uint32_t DFSDM_CHCFG1R1_CHINSEL = 1U << 8 ;

  // Field CHEN: CHEN
    const uint32_t DFSDM_CHCFG1R1_CHEN = 1U << 7 ;

  // Field CKABEN: CKABEN
    const uint32_t DFSDM_CHCFG1R1_CKABEN = 1U << 6 ;

  // Field SCDEN: SCDEN
    const uint32_t DFSDM_CHCFG1R1_SCDEN = 1U << 5 ;

  // Field SPICKSEL: SPICKSEL
    inline uint32_t DFSDM_CHCFG1R1_SPICKSEL (const uint32_t inValue) {return (inValue & 0x3U) << 2 ; }

  // Field SITP: SITP
    inline uint32_t DFSDM_CHCFG1R1_SITP (const uint32_t inValue) {return (inValue & 0x3U) << 0 ; }

//---  Register CHCFG1R2: CHCFG1R2
  #define DFSDM_CHCFG1R2 (* ((volatile uint32_t *) (0x40016000 + 36)))

  // Field OFFSET: OFFSET
    inline uint32_t DFSDM_CHCFG1R2_OFFSET (const uint32_t inValue) {return (inValue & 0xffffffU) << 8 ; }

  // Field DTRBS: DTRBS
    inline uint32_t DFSDM_CHCFG1R2_DTRBS (const uint32_t inValue) {return (inValue & 0x1fU) << 3 ; }

//---  Register AWSCD1R: AWSCD1R
  #define DFSDM_AWSCD1R (* ((volatile uint32_t *) (0x40016000 + 40)))

  // Field AWFORD: AWFORD
    inline uint32_t DFSDM_AWSCD1R_AWFORD (const uint32_t inValue) {return (inValue & 0x3U) << 22 ; }

  // Field AWFOSR: AWFOSR
    inline uint32_t DFSDM_AWSCD1R_AWFOSR (const uint32_t inValue) {return (inValue & 0x1fU) << 16 ; }

  // Field BKSCD: BKSCD
    inline uint32_t DFSDM_AWSCD1R_BKSCD (const uint32_t inValue) {return (inValue & 0xfU) << 12 ; }

  // Field SCDT: SCDT
    inline uint32_t DFSDM_AWSCD1R_SCDT (const uint32_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register CHWDAT1R: CHWDAT1R
  #define DFSDM_CHWDAT1R (* ((volatile uint32_t *) (0x40016000 + 44)))

  // Field WDATA: WDATA
    inline uint32_t DFSDM_CHWDAT1R_WDATA (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register CHDATIN1R: CHDATIN1R
  #define DFSDM_CHDATIN1R (* ((volatile uint32_t *) (0x40016000 + 48)))

  // Field INDAT1: INDAT1
    inline uint32_t DFSDM_CHDATIN1R_INDAT1 (const uint32_t inValue) {return (inValue & 0xffffU) << 16 ; }

  // Field INDAT0: INDAT0
    inline uint32_t DFSDM_CHDATIN1R_INDAT0 (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register CHCFG2R1: CHCFG2R1
  #define DFSDM_CHCFG2R1 (* ((volatile uint32_t *) (0x40016000 + 64)))

  // Field DATPACK: DATPACK
    inline uint32_t DFSDM_CHCFG2R1_DATPACK (const uint32_t inValue) {return (inValue & 0x3U) << 14 ; }

  // Field DATMPX: DATMPX
    inline uint32_t DFSDM_CHCFG2R1_DATMPX (const uint32_t inValue) {return (inValue & 0x3U) << 12 ; }

  // Field CHINSEL: CHINSEL
    const uint32_t DFSDM_CHCFG2R1_CHINSEL = 1U << 8 ;

  // Field CHEN: CHEN
    const uint32_t DFSDM_CHCFG2R1_CHEN = 1U << 7 ;

  // Field CKABEN: CKABEN
    const uint32_t DFSDM_CHCFG2R1_CKABEN = 1U << 6 ;

  // Field SCDEN: SCDEN
    const uint32_t DFSDM_CHCFG2R1_SCDEN = 1U << 5 ;

  // Field SPICKSEL: SPICKSEL
    inline uint32_t DFSDM_CHCFG2R1_SPICKSEL (const uint32_t inValue) {return (inValue & 0x3U) << 2 ; }

  // Field SITP: SITP
    inline uint32_t DFSDM_CHCFG2R1_SITP (const uint32_t inValue) {return (inValue & 0x3U) << 0 ; }

//---  Register CHCFG2R2: CHCFG2R2
  #define DFSDM_CHCFG2R2 (* ((volatile uint32_t *) (0x40016000 + 68)))

  // Field OFFSET: OFFSET
    inline uint32_t DFSDM_CHCFG2R2_OFFSET (const uint32_t inValue) {return (inValue & 0xffffffU) << 8 ; }

  // Field DTRBS: DTRBS
    inline uint32_t DFSDM_CHCFG2R2_DTRBS (const uint32_t inValue) {return (inValue & 0x1fU) << 3 ; }

//---  Register AWSCD2R: AWSCD2R
  #define DFSDM_AWSCD2R (* ((volatile uint32_t *) (0x40016000 + 72)))

  // Field AWFORD: AWFORD
    inline uint32_t DFSDM_AWSCD2R_AWFORD (const uint32_t inValue) {return (inValue & 0x3U) << 22 ; }

  // Field AWFOSR: AWFOSR
    inline uint32_t DFSDM_AWSCD2R_AWFOSR (const uint32_t inValue) {return (inValue & 0x1fU) << 16 ; }

  // Field BKSCD: BKSCD
    inline uint32_t DFSDM_AWSCD2R_BKSCD (const uint32_t inValue) {return (inValue & 0xfU) << 12 ; }

  // Field SCDT: SCDT
    inline uint32_t DFSDM_AWSCD2R_SCDT (const uint32_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register CHWDAT2R: CHWDAT2R
  #define DFSDM_CHWDAT2R (* ((volatile uint32_t *) (0x40016000 + 76)))

  // Field WDATA: WDATA
    inline uint32_t DFSDM_CHWDAT2R_WDATA (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register CHDATIN2R: CHDATIN2R
  #define DFSDM_CHDATIN2R (* ((volatile uint32_t *) (0x40016000 + 80)))

  // Field INDAT1: INDAT1
    inline uint32_t DFSDM_CHDATIN2R_INDAT1 (const uint32_t inValue) {return (inValue & 0xffffU) << 16 ; }

  // Field INDAT0: INDAT0
    inline uint32_t DFSDM_CHDATIN2R_INDAT0 (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register CHCFG3R1: CHCFG3R1
  #define DFSDM_CHCFG3R1 (* ((volatile uint32_t *) (0x40016000 + 96)))

  // Field DATPACK: DATPACK
    inline uint32_t DFSDM_CHCFG3R1_DATPACK (const uint32_t inValue) {return (inValue & 0x3U) << 14 ; }

  // Field DATMPX: DATMPX
    inline uint32_t DFSDM_CHCFG3R1_DATMPX (const uint32_t inValue) {return (inValue & 0x3U) << 12 ; }

  // Field CHINSEL: CHINSEL
    const uint32_t DFSDM_CHCFG3R1_CHINSEL = 1U << 8 ;

  // Field CHEN: CHEN
    const uint32_t DFSDM_CHCFG3R1_CHEN = 1U << 7 ;

  // Field CKABEN: CKABEN
    const uint32_t DFSDM_CHCFG3R1_CKABEN = 1U << 6 ;

  // Field SCDEN: SCDEN
    const uint32_t DFSDM_CHCFG3R1_SCDEN = 1U << 5 ;

  // Field SPICKSEL: SPICKSEL
    inline uint32_t DFSDM_CHCFG3R1_SPICKSEL (const uint32_t inValue) {return (inValue & 0x3U) << 2 ; }

  // Field SITP: SITP
    inline uint32_t DFSDM_CHCFG3R1_SITP (const uint32_t inValue) {return (inValue & 0x3U) << 0 ; }

//---  Register CHCFG3R2: CHCFG3R2
  #define DFSDM_CHCFG3R2 (* ((volatile uint32_t *) (0x40016000 + 100)))

  // Field OFFSET: OFFSET
    inline uint32_t DFSDM_CHCFG3R2_OFFSET (const uint32_t inValue) {return (inValue & 0xffffffU) << 8 ; }

  // Field DTRBS: DTRBS
    inline uint32_t DFSDM_CHCFG3R2_DTRBS (const uint32_t inValue) {return (inValue & 0x1fU) << 3 ; }

//---  Register AWSCD3R: AWSCD3R
  #define DFSDM_AWSCD3R (* ((volatile uint32_t *) (0x40016000 + 104)))

  // Field AWFORD: AWFORD
    inline uint32_t DFSDM_AWSCD3R_AWFORD (const uint32_t inValue) {return (inValue & 0x3U) << 22 ; }

  // Field AWFOSR: AWFOSR
    inline uint32_t DFSDM_AWSCD3R_AWFOSR (const uint32_t inValue) {return (inValue & 0x1fU) << 16 ; }

  // Field BKSCD: BKSCD
    inline uint32_t DFSDM_AWSCD3R_BKSCD (const uint32_t inValue) {return (inValue & 0xfU) << 12 ; }

  // Field SCDT: SCDT
    inline uint32_t DFSDM_AWSCD3R_SCDT (const uint32_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register CHWDAT3R: CHWDAT3R
  #define DFSDM_CHWDAT3R (* ((volatile uint32_t *) (0x40016000 + 108)))

  // Field WDATA: WDATA
    inline uint32_t DFSDM_CHWDAT3R_WDATA (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register CHDATIN3R: CHDATIN3R
  #define DFSDM_CHDATIN3R (* ((volatile uint32_t *) (0x40016000 + 112)))

  // Field INDAT1: INDAT1
    inline uint32_t DFSDM_CHDATIN3R_INDAT1 (const uint32_t inValue) {return (inValue & 0xffffU) << 16 ; }

  // Field INDAT0: INDAT0
    inline uint32_t DFSDM_CHDATIN3R_INDAT0 (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register CHCFG4R1: CHCFG4R1
  #define DFSDM_CHCFG4R1 (* ((volatile uint32_t *) (0x40016000 + 128)))

  // Field DATPACK: DATPACK
    inline uint32_t DFSDM_CHCFG4R1_DATPACK (const uint32_t inValue) {return (inValue & 0x3U) << 14 ; }

  // Field DATMPX: DATMPX
    inline uint32_t DFSDM_CHCFG4R1_DATMPX (const uint32_t inValue) {return (inValue & 0x3U) << 12 ; }

  // Field CHINSEL: CHINSEL
    const uint32_t DFSDM_CHCFG4R1_CHINSEL = 1U << 8 ;

  // Field CHEN: CHEN
    const uint32_t DFSDM_CHCFG4R1_CHEN = 1U << 7 ;

  // Field CKABEN: CKABEN
    const uint32_t DFSDM_CHCFG4R1_CKABEN = 1U << 6 ;

  // Field SCDEN: SCDEN
    const uint32_t DFSDM_CHCFG4R1_SCDEN = 1U << 5 ;

  // Field SPICKSEL: SPICKSEL
    inline uint32_t DFSDM_CHCFG4R1_SPICKSEL (const uint32_t inValue) {return (inValue & 0x3U) << 2 ; }

  // Field SITP: SITP
    inline uint32_t DFSDM_CHCFG4R1_SITP (const uint32_t inValue) {return (inValue & 0x3U) << 0 ; }

//---  Register CHCFG4R2: CHCFG4R2
  #define DFSDM_CHCFG4R2 (* ((volatile uint32_t *) (0x40016000 + 132)))

  // Field OFFSET: OFFSET
    inline uint32_t DFSDM_CHCFG4R2_OFFSET (const uint32_t inValue) {return (inValue & 0xffffffU) << 8 ; }

  // Field DTRBS: DTRBS
    inline uint32_t DFSDM_CHCFG4R2_DTRBS (const uint32_t inValue) {return (inValue & 0x1fU) << 3 ; }

//---  Register AWSCD4R: AWSCD4R
  #define DFSDM_AWSCD4R (* ((volatile uint32_t *) (0x40016000 + 136)))

  // Field AWFORD: AWFORD
    inline uint32_t DFSDM_AWSCD4R_AWFORD (const uint32_t inValue) {return (inValue & 0x3U) << 22 ; }

  // Field AWFOSR: AWFOSR
    inline uint32_t DFSDM_AWSCD4R_AWFOSR (const uint32_t inValue) {return (inValue & 0x1fU) << 16 ; }

  // Field BKSCD: BKSCD
    inline uint32_t DFSDM_AWSCD4R_BKSCD (const uint32_t inValue) {return (inValue & 0xfU) << 12 ; }

  // Field SCDT: SCDT
    inline uint32_t DFSDM_AWSCD4R_SCDT (const uint32_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register CHWDAT4R: CHWDAT4R
  #define DFSDM_CHWDAT4R (* ((volatile uint32_t *) (0x40016000 + 140)))

  // Field WDATA: WDATA
    inline uint32_t DFSDM_CHWDAT4R_WDATA (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register CHDATIN4R: CHDATIN4R
  #define DFSDM_CHDATIN4R (* ((volatile uint32_t *) (0x40016000 + 144)))

  // Field INDAT1: INDAT1
    inline uint32_t DFSDM_CHDATIN4R_INDAT1 (const uint32_t inValue) {return (inValue & 0xffffU) << 16 ; }

  // Field INDAT0: INDAT0
    inline uint32_t DFSDM_CHDATIN4R_INDAT0 (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register CHCFG5R1: CHCFG5R1
  #define DFSDM_CHCFG5R1 (* ((volatile uint32_t *) (0x40016000 + 160)))

  // Field DATPACK: DATPACK
    inline uint32_t DFSDM_CHCFG5R1_DATPACK (const uint32_t inValue) {return (inValue & 0x3U) << 14 ; }

  // Field DATMPX: DATMPX
    inline uint32_t DFSDM_CHCFG5R1_DATMPX (const uint32_t inValue) {return (inValue & 0x3U) << 12 ; }

  // Field CHINSEL: CHINSEL
    const uint32_t DFSDM_CHCFG5R1_CHINSEL = 1U << 8 ;

  // Field CHEN: CHEN
    const uint32_t DFSDM_CHCFG5R1_CHEN = 1U << 7 ;

  // Field CKABEN: CKABEN
    const uint32_t DFSDM_CHCFG5R1_CKABEN = 1U << 6 ;

  // Field SCDEN: SCDEN
    const uint32_t DFSDM_CHCFG5R1_SCDEN = 1U << 5 ;

  // Field SPICKSEL: SPICKSEL
    inline uint32_t DFSDM_CHCFG5R1_SPICKSEL (const uint32_t inValue) {return (inValue & 0x3U) << 2 ; }

  // Field SITP: SITP
    inline uint32_t DFSDM_CHCFG5R1_SITP (const uint32_t inValue) {return (inValue & 0x3U) << 0 ; }

//---  Register CHCFG5R2: CHCFG5R2
  #define DFSDM_CHCFG5R2 (* ((volatile uint32_t *) (0x40016000 + 164)))

  // Field OFFSET: OFFSET
    inline uint32_t DFSDM_CHCFG5R2_OFFSET (const uint32_t inValue) {return (inValue & 0xffffffU) << 8 ; }

  // Field DTRBS: DTRBS
    inline uint32_t DFSDM_CHCFG5R2_DTRBS (const uint32_t inValue) {return (inValue & 0x1fU) << 3 ; }

//---  Register AWSCD5R: AWSCD5R
  #define DFSDM_AWSCD5R (* ((volatile uint32_t *) (0x40016000 + 168)))

  // Field AWFORD: AWFORD
    inline uint32_t DFSDM_AWSCD5R_AWFORD (const uint32_t inValue) {return (inValue & 0x3U) << 22 ; }

  // Field AWFOSR: AWFOSR
    inline uint32_t DFSDM_AWSCD5R_AWFOSR (const uint32_t inValue) {return (inValue & 0x1fU) << 16 ; }

  // Field BKSCD: BKSCD
    inline uint32_t DFSDM_AWSCD5R_BKSCD (const uint32_t inValue) {return (inValue & 0xfU) << 12 ; }

  // Field SCDT: SCDT
    inline uint32_t DFSDM_AWSCD5R_SCDT (const uint32_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register CHWDAT5R: CHWDAT5R
  #define DFSDM_CHWDAT5R (* ((volatile uint32_t *) (0x40016000 + 172)))

  // Field WDATA: WDATA
    inline uint32_t DFSDM_CHWDAT5R_WDATA (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register CHDATIN5R: CHDATIN5R
  #define DFSDM_CHDATIN5R (* ((volatile uint32_t *) (0x40016000 + 176)))

  // Field INDAT1: INDAT1
    inline uint32_t DFSDM_CHDATIN5R_INDAT1 (const uint32_t inValue) {return (inValue & 0xffffU) << 16 ; }

  // Field INDAT0: INDAT0
    inline uint32_t DFSDM_CHDATIN5R_INDAT0 (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register CHCFG6R1: CHCFG6R1
  #define DFSDM_CHCFG6R1 (* ((volatile uint32_t *) (0x40016000 + 192)))

  // Field DATPACK: DATPACK
    inline uint32_t DFSDM_CHCFG6R1_DATPACK (const uint32_t inValue) {return (inValue & 0x3U) << 14 ; }

  // Field DATMPX: DATMPX
    inline uint32_t DFSDM_CHCFG6R1_DATMPX (const uint32_t inValue) {return (inValue & 0x3U) << 12 ; }

  // Field CHINSEL: CHINSEL
    const uint32_t DFSDM_CHCFG6R1_CHINSEL = 1U << 8 ;

  // Field CHEN: CHEN
    const uint32_t DFSDM_CHCFG6R1_CHEN = 1U << 7 ;

  // Field CKABEN: CKABEN
    const uint32_t DFSDM_CHCFG6R1_CKABEN = 1U << 6 ;

  // Field SCDEN: SCDEN
    const uint32_t DFSDM_CHCFG6R1_SCDEN = 1U << 5 ;

  // Field SPICKSEL: SPICKSEL
    inline uint32_t DFSDM_CHCFG6R1_SPICKSEL (const uint32_t inValue) {return (inValue & 0x3U) << 2 ; }

  // Field SITP: SITP
    inline uint32_t DFSDM_CHCFG6R1_SITP (const uint32_t inValue) {return (inValue & 0x3U) << 0 ; }

//---  Register CHCFG6R2: CHCFG6R2
  #define DFSDM_CHCFG6R2 (* ((volatile uint32_t *) (0x40016000 + 196)))

  // Field OFFSET: OFFSET
    inline uint32_t DFSDM_CHCFG6R2_OFFSET (const uint32_t inValue) {return (inValue & 0xffffffU) << 8 ; }

  // Field DTRBS: DTRBS
    inline uint32_t DFSDM_CHCFG6R2_DTRBS (const uint32_t inValue) {return (inValue & 0x1fU) << 3 ; }

//---  Register AWSCD6R: AWSCD6R
  #define DFSDM_AWSCD6R (* ((volatile uint32_t *) (0x40016000 + 200)))

  // Field AWFORD: AWFORD
    inline uint32_t DFSDM_AWSCD6R_AWFORD (const uint32_t inValue) {return (inValue & 0x3U) << 22 ; }

  // Field AWFOSR: AWFOSR
    inline uint32_t DFSDM_AWSCD6R_AWFOSR (const uint32_t inValue) {return (inValue & 0x1fU) << 16 ; }

  // Field BKSCD: BKSCD
    inline uint32_t DFSDM_AWSCD6R_BKSCD (const uint32_t inValue) {return (inValue & 0xfU) << 12 ; }

  // Field SCDT: SCDT
    inline uint32_t DFSDM_AWSCD6R_SCDT (const uint32_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register CHWDAT6R: CHWDAT6R
  #define DFSDM_CHWDAT6R (* ((volatile uint32_t *) (0x40016000 + 204)))

  // Field WDATA: WDATA
    inline uint32_t DFSDM_CHWDAT6R_WDATA (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register CHDATIN6R: CHDATIN6R
  #define DFSDM_CHDATIN6R (* ((volatile uint32_t *) (0x40016000 + 208)))

  // Field INDAT1: INDAT1
    inline uint32_t DFSDM_CHDATIN6R_INDAT1 (const uint32_t inValue) {return (inValue & 0xffffU) << 16 ; }

  // Field INDAT0: INDAT0
    inline uint32_t DFSDM_CHDATIN6R_INDAT0 (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register CHCFG7R1: CHCFG7R1
  #define DFSDM_CHCFG7R1 (* ((volatile uint32_t *) (0x40016000 + 224)))

  // Field DATPACK: DATPACK
    inline uint32_t DFSDM_CHCFG7R1_DATPACK (const uint32_t inValue) {return (inValue & 0x3U) << 14 ; }

  // Field DATMPX: DATMPX
    inline uint32_t DFSDM_CHCFG7R1_DATMPX (const uint32_t inValue) {return (inValue & 0x3U) << 12 ; }

  // Field CHINSEL: CHINSEL
    const uint32_t DFSDM_CHCFG7R1_CHINSEL = 1U << 8 ;

  // Field CHEN: CHEN
    const uint32_t DFSDM_CHCFG7R1_CHEN = 1U << 7 ;

  // Field CKABEN: CKABEN
    const uint32_t DFSDM_CHCFG7R1_CKABEN = 1U << 6 ;

  // Field SCDEN: SCDEN
    const uint32_t DFSDM_CHCFG7R1_SCDEN = 1U << 5 ;

  // Field SPICKSEL: SPICKSEL
    inline uint32_t DFSDM_CHCFG7R1_SPICKSEL (const uint32_t inValue) {return (inValue & 0x3U) << 2 ; }

  // Field SITP: SITP
    inline uint32_t DFSDM_CHCFG7R1_SITP (const uint32_t inValue) {return (inValue & 0x3U) << 0 ; }

//---  Register CHCFG7R2: CHCFG7R2
  #define DFSDM_CHCFG7R2 (* ((volatile uint32_t *) (0x40016000 + 228)))

  // Field OFFSET: OFFSET
    inline uint32_t DFSDM_CHCFG7R2_OFFSET (const uint32_t inValue) {return (inValue & 0xffffffU) << 8 ; }

  // Field DTRBS: DTRBS
    inline uint32_t DFSDM_CHCFG7R2_DTRBS (const uint32_t inValue) {return (inValue & 0x1fU) << 3 ; }

//---  Register AWSCD7R: AWSCD7R
  #define DFSDM_AWSCD7R (* ((volatile uint32_t *) (0x40016000 + 232)))

  // Field AWFORD: AWFORD
    inline uint32_t DFSDM_AWSCD7R_AWFORD (const uint32_t inValue) {return (inValue & 0x3U) << 22 ; }

  // Field AWFOSR: AWFOSR
    inline uint32_t DFSDM_AWSCD7R_AWFOSR (const uint32_t inValue) {return (inValue & 0x1fU) << 16 ; }

  // Field BKSCD: BKSCD
    inline uint32_t DFSDM_AWSCD7R_BKSCD (const uint32_t inValue) {return (inValue & 0xfU) << 12 ; }

  // Field SCDT: SCDT
    inline uint32_t DFSDM_AWSCD7R_SCDT (const uint32_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register CHWDAT7R: CHWDAT7R
  #define DFSDM_CHWDAT7R (* ((volatile uint32_t *) (0x40016000 + 236)))

  // Field WDATA: WDATA
    inline uint32_t DFSDM_CHWDAT7R_WDATA (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register CHDATIN7R: CHDATIN7R
  #define DFSDM_CHDATIN7R (* ((volatile uint32_t *) (0x40016000 + 240)))

  // Field INDAT1: INDAT1
    inline uint32_t DFSDM_CHDATIN7R_INDAT1 (const uint32_t inValue) {return (inValue & 0xffffU) << 16 ; }

  // Field INDAT0: INDAT0
    inline uint32_t DFSDM_CHDATIN7R_INDAT0 (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register DFSDM0_CR1: control register 1
  #define DFSDM_DFSDM0_CR1 (* ((volatile uint32_t *) (0x40016000 + 256)))

  // Field AWFSEL: Analog watchdog fast mode select
    const uint32_t DFSDM_DFSDM0_CR1_AWFSEL = 1U << 30 ;

  // Field FAST: Fast conversion mode selection for regular conversions
    const uint32_t DFSDM_DFSDM0_CR1_FAST = 1U << 29 ;

  // Field RCH: Regular channel selection
    inline uint32_t DFSDM_DFSDM0_CR1_RCH (const uint32_t inValue) {return (inValue & 0x7U) << 24 ; }

  // Field RDMAEN: DMA channel enabled to read data for the regular conversion
    const uint32_t DFSDM_DFSDM0_CR1_RDMAEN = 1U << 21 ;

  // Field RSYNC: Launch regular conversion synchronously with DFSDM0
    const uint32_t DFSDM_DFSDM0_CR1_RSYNC = 1U << 19 ;

  // Field RCONT: Continuous mode selection for regular conversions
    const uint32_t DFSDM_DFSDM0_CR1_RCONT = 1U << 18 ;

  // Field RSWSTART: Software start of a conversion on the regular channel
    const uint32_t DFSDM_DFSDM0_CR1_RSWSTART = 1U << 17 ;

  // Field JEXTEN: Trigger enable and trigger edge selection for injected conversions
    inline uint32_t DFSDM_DFSDM0_CR1_JEXTEN (const uint32_t inValue) {return (inValue & 0x3U) << 13 ; }

  // Field JEXTSEL: Trigger signal selection for launching injected conversions
    inline uint32_t DFSDM_DFSDM0_CR1_JEXTSEL (const uint32_t inValue) {return (inValue & 0x7U) << 8 ; }

  // Field JDMAEN: DMA channel enabled to read data for the injected channel group
    const uint32_t DFSDM_DFSDM0_CR1_JDMAEN = 1U << 5 ;

  // Field JSCAN: Scanning conversion mode for injected conversions
    const uint32_t DFSDM_DFSDM0_CR1_JSCAN = 1U << 4 ;

  // Field JSYNC: Launch an injected conversion synchronously with the DFSDM0 JSWSTART trigger
    const uint32_t DFSDM_DFSDM0_CR1_JSYNC = 1U << 3 ;

  // Field JSWSTART: Start a conversion of the injected group of channels
    const uint32_t DFSDM_DFSDM0_CR1_JSWSTART = 1U << 1 ;

  // Field DFEN: DFSDM enable
    const uint32_t DFSDM_DFSDM0_CR1_DFEN = 1U << 0 ;

//---  Register DFSDM0_CR2: control register 2
  #define DFSDM_DFSDM0_CR2 (* ((volatile uint32_t *) (0x40016000 + 260)))

  // Field AWDCH: Analog watchdog channel selection
    inline uint32_t DFSDM_DFSDM0_CR2_AWDCH (const uint32_t inValue) {return (inValue & 0xffU) << 16 ; }

  // Field EXCH: Extremes detector channel selection
    inline uint32_t DFSDM_DFSDM0_CR2_EXCH (const uint32_t inValue) {return (inValue & 0xffU) << 8 ; }

  // Field CKABIE: Clock absence interrupt enable
    const uint32_t DFSDM_DFSDM0_CR2_CKABIE = 1U << 6 ;

  // Field SCDIE: Short-circuit detector interrupt enable
    const uint32_t DFSDM_DFSDM0_CR2_SCDIE = 1U << 5 ;

  // Field AWDIE: Analog watchdog interrupt enable
    const uint32_t DFSDM_DFSDM0_CR2_AWDIE = 1U << 4 ;

  // Field ROVRIE: Regular data overrun interrupt enable
    const uint32_t DFSDM_DFSDM0_CR2_ROVRIE = 1U << 3 ;

  // Field JOVRIE: Injected data overrun interrupt enable
    const uint32_t DFSDM_DFSDM0_CR2_JOVRIE = 1U << 2 ;

  // Field REOCIE: Regular end of conversion interrupt enable
    const uint32_t DFSDM_DFSDM0_CR2_REOCIE = 1U << 1 ;

  // Field JEOCIE: Injected end of conversion interrupt enable
    const uint32_t DFSDM_DFSDM0_CR2_JEOCIE = 1U << 0 ;

//---  Register DFSDM0_ISR: interrupt and status register
  #define DFSDM_DFSDM0_ISR (* ((const volatile uint32_t *) (0x40016000 + 264)))

  // Field SCDF: short-circuit detector flag
    inline uint32_t DFSDM_DFSDM0_ISR_SCDF (const uint32_t inValue) {return (inValue & 0xffU) << 24 ; }

  // Field CKABF: Clock absence flag
    inline uint32_t DFSDM_DFSDM0_ISR_CKABF (const uint32_t inValue) {return (inValue & 0xffU) << 16 ; }

  // Field RCIP: Regular conversion in progress status
    const uint32_t DFSDM_DFSDM0_ISR_RCIP = 1U << 14 ;

  // Field JCIP: Injected conversion in progress status
    const uint32_t DFSDM_DFSDM0_ISR_JCIP = 1U << 13 ;

  // Field AWDF: Analog watchdog
    const uint32_t DFSDM_DFSDM0_ISR_AWDF = 1U << 4 ;

  // Field ROVRF: Regular conversion overrun flag
    const uint32_t DFSDM_DFSDM0_ISR_ROVRF = 1U << 3 ;

  // Field JOVRF: Injected conversion overrun flag
    const uint32_t DFSDM_DFSDM0_ISR_JOVRF = 1U << 2 ;

  // Field REOCF: End of regular conversion flag
    const uint32_t DFSDM_DFSDM0_ISR_REOCF = 1U << 1 ;

  // Field JEOCF: End of injected conversion flag
    const uint32_t DFSDM_DFSDM0_ISR_JEOCF = 1U << 0 ;

//---  Register DFSDM0_ICR: interrupt flag clear register
  #define DFSDM_DFSDM0_ICR (* ((volatile uint32_t *) (0x40016000 + 268)))

  // Field CLRSCDF: Clear the short-circuit detector flag
    inline uint32_t DFSDM_DFSDM0_ICR_CLRSCDF (const uint32_t inValue) {return (inValue & 0xffU) << 24 ; }

  // Field CLRCKABF: Clear the clock absence flag
    inline uint32_t DFSDM_DFSDM0_ICR_CLRCKABF (const uint32_t inValue) {return (inValue & 0xffU) << 16 ; }

  // Field CLRROVRF: Clear the regular conversion overrun flag
    const uint32_t DFSDM_DFSDM0_ICR_CLRROVRF = 1U << 3 ;

  // Field CLRJOVRF: Clear the injected conversion overrun flag
    const uint32_t DFSDM_DFSDM0_ICR_CLRJOVRF = 1U << 2 ;

//---  Register DFSDM0_JCHGR: injected channel group selection
          register
  #define DFSDM_DFSDM0_JCHGR (* ((volatile uint32_t *) (0x40016000 + 272)))

  // Field JCHG: Injected channel group selection
    inline uint32_t DFSDM_DFSDM0_JCHGR_JCHG (const uint32_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register DFSDM0_FCR: filter control register
  #define DFSDM_DFSDM0_FCR (* ((volatile uint32_t *) (0x40016000 + 276)))

  // Field FORD: Sinc filter order
    inline uint32_t DFSDM_DFSDM0_FCR_FORD (const uint32_t inValue) {return (inValue & 0x7U) << 29 ; }

  // Field FOSR: Sinc filter oversampling ratio (decimation rate)
    inline uint32_t DFSDM_DFSDM0_FCR_FOSR (const uint32_t inValue) {return (inValue & 0x3ffU) << 16 ; }

  // Field IOSR: Integrator oversampling ratio (averaging length)
    inline uint32_t DFSDM_DFSDM0_FCR_IOSR (const uint32_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register DFSDM0_JDATAR: data register for injected
          group
  #define DFSDM_DFSDM0_JDATAR (* ((const volatile uint32_t *) (0x40016000 + 280)))

  // Field JDATA: Injected group conversion data
    inline uint32_t DFSDM_DFSDM0_JDATAR_JDATA (const uint32_t inValue) {return (inValue & 0xffffffU) << 8 ; }

  // Field JDATACH: Injected channel most recently converted
    inline uint32_t DFSDM_DFSDM0_JDATAR_JDATACH (const uint32_t inValue) {return (inValue & 0x7U) << 0 ; }

//---  Register DFSDM0_RDATAR: data register for the regular
          channel
  #define DFSDM_DFSDM0_RDATAR (* ((const volatile uint32_t *) (0x40016000 + 284)))

  // Field RDATA: Regular channel conversion data
    inline uint32_t DFSDM_DFSDM0_RDATAR_RDATA (const uint32_t inValue) {return (inValue & 0xffffffU) << 8 ; }

  // Field RPEND: Regular channel pending data
    const uint32_t DFSDM_DFSDM0_RDATAR_RPEND = 1U << 4 ;

  // Field RDATACH: Regular channel most recently converted
    inline uint32_t DFSDM_DFSDM0_RDATAR_RDATACH (const uint32_t inValue) {return (inValue & 0x7U) << 0 ; }

//---  Register DFSDM0_AWHTR: analog watchdog high threshold
          register
  #define DFSDM_DFSDM0_AWHTR (* ((volatile uint32_t *) (0x40016000 + 288)))

  // Field AWHT: Analog watchdog high threshold
    inline uint32_t DFSDM_DFSDM0_AWHTR_AWHT (const uint32_t inValue) {return (inValue & 0xffffffU) << 8 ; }

  // Field BKAWH: Break signal assignment to analog watchdog high threshold event
    inline uint32_t DFSDM_DFSDM0_AWHTR_BKAWH (const uint32_t inValue) {return (inValue & 0xfU) << 0 ; }

//---  Register DFSDM0_AWLTR: analog watchdog low threshold
          register
  #define DFSDM_DFSDM0_AWLTR (* ((volatile uint32_t *) (0x40016000 + 292)))

  // Field AWLT: Analog watchdog low threshold
    inline uint32_t DFSDM_DFSDM0_AWLTR_AWLT (const uint32_t inValue) {return (inValue & 0xffffffU) << 8 ; }

  // Field BKAWL: Break signal assignment to analog watchdog low threshold event
    inline uint32_t DFSDM_DFSDM0_AWLTR_BKAWL (const uint32_t inValue) {return (inValue & 0xfU) << 0 ; }

//---  Register DFSDM0_AWSR: analog watchdog status
          register
  #define DFSDM_DFSDM0_AWSR (* ((const volatile uint32_t *) (0x40016000 + 296)))

  // Field AWHTF: Analog watchdog high threshold flag
    inline uint32_t DFSDM_DFSDM0_AWSR_AWHTF (const uint32_t inValue) {return (inValue & 0xffU) << 8 ; }

  // Field AWLTF: Analog watchdog low threshold flag
    inline uint32_t DFSDM_DFSDM0_AWSR_AWLTF (const uint32_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register DFSDM0_AWCFR: analog watchdog clear flag
          register
  #define DFSDM_DFSDM0_AWCFR (* ((volatile uint32_t *) (0x40016000 + 300)))

  // Field CLRAWHTF: Clear the analog watchdog high threshold flag
    inline uint32_t DFSDM_DFSDM0_AWCFR_CLRAWHTF (const uint32_t inValue) {return (inValue & 0xffU) << 8 ; }

  // Field CLRAWLTF: Clear the analog watchdog low threshold flag
    inline uint32_t DFSDM_DFSDM0_AWCFR_CLRAWLTF (const uint32_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register DFSDM0_EXMAX: Extremes detector maximum
          register
  #define DFSDM_DFSDM0_EXMAX (* ((const volatile uint32_t *) (0x40016000 + 304)))

  // Field EXMAX: Extremes detector maximum value
    inline uint32_t DFSDM_DFSDM0_EXMAX_EXMAX (const uint32_t inValue) {return (inValue & 0xffffffU) << 8 ; }

  // Field EXMAXCH: Extremes detector maximum data channel
    inline uint32_t DFSDM_DFSDM0_EXMAX_EXMAXCH (const uint32_t inValue) {return (inValue & 0x7U) << 0 ; }

//---  Register DFSDM0_EXMIN: Extremes detector minimum
          register
  #define DFSDM_DFSDM0_EXMIN (* ((const volatile uint32_t *) (0x40016000 + 308)))

  // Field EXMIN: EXMIN
    inline uint32_t DFSDM_DFSDM0_EXMIN_EXMIN (const uint32_t inValue) {return (inValue & 0xffffffU) << 8 ; }

  // Field EXMINCH: Extremes detector minimum data channel
    inline uint32_t DFSDM_DFSDM0_EXMIN_EXMINCH (const uint32_t inValue) {return (inValue & 0x7U) << 0 ; }

//---  Register DFSDM0_CNVTIMR: conversion timer register
  #define DFSDM_DFSDM0_CNVTIMR (* ((const volatile uint32_t *) (0x40016000 + 312)))

  // Field CNVCNT: 28-bit timer counting conversion time t = CNVCNT[27:0] / fDFSDM_CKIN
    inline uint32_t DFSDM_DFSDM0_CNVTIMR_CNVCNT (const uint32_t inValue) {return (inValue & 0xfffffffU) << 4 ; }

//---  Register DFSDM1_CR1: control register 1
  #define DFSDM_DFSDM1_CR1 (* ((volatile uint32_t *) (0x40016000 + 512)))

  // Field AWFSEL: Analog watchdog fast mode select
    const uint32_t DFSDM_DFSDM1_CR1_AWFSEL = 1U << 30 ;

  // Field FAST: Fast conversion mode selection for regular conversions
    const uint32_t DFSDM_DFSDM1_CR1_FAST = 1U << 29 ;

  // Field RCH: Regular channel selection
    inline uint32_t DFSDM_DFSDM1_CR1_RCH (const uint32_t inValue) {return (inValue & 0x7U) << 24 ; }

  // Field RDMAEN: DMA channel enabled to read data for the regular conversion
    const uint32_t DFSDM_DFSDM1_CR1_RDMAEN = 1U << 21 ;

  // Field RSYNC: Launch regular conversion synchronously with DFSDM0
    const uint32_t DFSDM_DFSDM1_CR1_RSYNC = 1U << 19 ;

  // Field RCONT: Continuous mode selection for regular conversions
    const uint32_t DFSDM_DFSDM1_CR1_RCONT = 1U << 18 ;

  // Field RSWSTART: Software start of a conversion on the regular channel
    const uint32_t DFSDM_DFSDM1_CR1_RSWSTART = 1U << 17 ;

  // Field JEXTEN: Trigger enable and trigger edge selection for injected conversions
    inline uint32_t DFSDM_DFSDM1_CR1_JEXTEN (const uint32_t inValue) {return (inValue & 0x3U) << 13 ; }

  // Field JEXTSEL: Trigger signal selection for launching injected conversions
    inline uint32_t DFSDM_DFSDM1_CR1_JEXTSEL (const uint32_t inValue) {return (inValue & 0x7U) << 8 ; }

  // Field JDMAEN: DMA channel enabled to read data for the injected channel group
    const uint32_t DFSDM_DFSDM1_CR1_JDMAEN = 1U << 5 ;

  // Field JSCAN: Scanning conversion mode for injected conversions
    const uint32_t DFSDM_DFSDM1_CR1_JSCAN = 1U << 4 ;

  // Field JSYNC: Launch an injected conversion synchronously with the DFSDM0 JSWSTART trigger
    const uint32_t DFSDM_DFSDM1_CR1_JSYNC = 1U << 3 ;

  // Field JSWSTART: Start a conversion of the injected group of channels
    const uint32_t DFSDM_DFSDM1_CR1_JSWSTART = 1U << 1 ;

  // Field DFEN: DFSDM enable
    const uint32_t DFSDM_DFSDM1_CR1_DFEN = 1U << 0 ;

//---  Register DFSDM1_CR2: control register 2
  #define DFSDM_DFSDM1_CR2 (* ((volatile uint32_t *) (0x40016000 + 516)))

  // Field AWDCH: Analog watchdog channel selection
    inline uint32_t DFSDM_DFSDM1_CR2_AWDCH (const uint32_t inValue) {return (inValue & 0xffU) << 16 ; }

  // Field EXCH: Extremes detector channel selection
    inline uint32_t DFSDM_DFSDM1_CR2_EXCH (const uint32_t inValue) {return (inValue & 0xffU) << 8 ; }

  // Field CKABIE: Clock absence interrupt enable
    const uint32_t DFSDM_DFSDM1_CR2_CKABIE = 1U << 6 ;

  // Field SCDIE: Short-circuit detector interrupt enable
    const uint32_t DFSDM_DFSDM1_CR2_SCDIE = 1U << 5 ;

  // Field AWDIE: Analog watchdog interrupt enable
    const uint32_t DFSDM_DFSDM1_CR2_AWDIE = 1U << 4 ;

  // Field ROVRIE: Regular data overrun interrupt enable
    const uint32_t DFSDM_DFSDM1_CR2_ROVRIE = 1U << 3 ;

  // Field JOVRIE: Injected data overrun interrupt enable
    const uint32_t DFSDM_DFSDM1_CR2_JOVRIE = 1U << 2 ;

  // Field REOCIE: Regular end of conversion interrupt enable
    const uint32_t DFSDM_DFSDM1_CR2_REOCIE = 1U << 1 ;

  // Field JEOCIE: Injected end of conversion interrupt enable
    const uint32_t DFSDM_DFSDM1_CR2_JEOCIE = 1U << 0 ;

//---  Register DFSDM1_ISR: interrupt and status register
  #define DFSDM_DFSDM1_ISR (* ((const volatile uint32_t *) (0x40016000 + 520)))

  // Field SCDF: short-circuit detector flag
    inline uint32_t DFSDM_DFSDM1_ISR_SCDF (const uint32_t inValue) {return (inValue & 0xffU) << 24 ; }

  // Field CKABF: Clock absence flag
    inline uint32_t DFSDM_DFSDM1_ISR_CKABF (const uint32_t inValue) {return (inValue & 0xffU) << 16 ; }

  // Field RCIP: Regular conversion in progress status
    const uint32_t DFSDM_DFSDM1_ISR_RCIP = 1U << 14 ;

  // Field JCIP: Injected conversion in progress status
    const uint32_t DFSDM_DFSDM1_ISR_JCIP = 1U << 13 ;

  // Field AWDF: Analog watchdog
    const uint32_t DFSDM_DFSDM1_ISR_AWDF = 1U << 4 ;

  // Field ROVRF: Regular conversion overrun flag
    const uint32_t DFSDM_DFSDM1_ISR_ROVRF = 1U << 3 ;

  // Field JOVRF: Injected conversion overrun flag
    const uint32_t DFSDM_DFSDM1_ISR_JOVRF = 1U << 2 ;

  // Field REOCF: End of regular conversion flag
    const uint32_t DFSDM_DFSDM1_ISR_REOCF = 1U << 1 ;

  // Field JEOCF: End of injected conversion flag
    const uint32_t DFSDM_DFSDM1_ISR_JEOCF = 1U << 0 ;

//---  Register DFSDM1_ICR: interrupt flag clear register
  #define DFSDM_DFSDM1_ICR (* ((volatile uint32_t *) (0x40016000 + 524)))

  // Field CLRSCDF: Clear the short-circuit detector flag
    inline uint32_t DFSDM_DFSDM1_ICR_CLRSCDF (const uint32_t inValue) {return (inValue & 0xffU) << 24 ; }

  // Field CLRCKABF: Clear the clock absence flag
    inline uint32_t DFSDM_DFSDM1_ICR_CLRCKABF (const uint32_t inValue) {return (inValue & 0xffU) << 16 ; }

  // Field CLRROVRF: Clear the regular conversion overrun flag
    const uint32_t DFSDM_DFSDM1_ICR_CLRROVRF = 1U << 3 ;

  // Field CLRJOVRF: Clear the injected conversion overrun flag
    const uint32_t DFSDM_DFSDM1_ICR_CLRJOVRF = 1U << 2 ;

//---  Register DFSDM1_JCHGR: injected channel group selection
          register
  #define DFSDM_DFSDM1_JCHGR (* ((volatile uint32_t *) (0x40016000 + 528)))

  // Field JCHG: Injected channel group selection
    inline uint32_t DFSDM_DFSDM1_JCHGR_JCHG (const uint32_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register DFSDM1_FCR: filter control register
  #define DFSDM_DFSDM1_FCR (* ((volatile uint32_t *) (0x40016000 + 532)))

  // Field FORD: Sinc filter order
    inline uint32_t DFSDM_DFSDM1_FCR_FORD (const uint32_t inValue) {return (inValue & 0x7U) << 29 ; }

  // Field FOSR: Sinc filter oversampling ratio (decimation rate)
    inline uint32_t DFSDM_DFSDM1_FCR_FOSR (const uint32_t inValue) {return (inValue & 0x3ffU) << 16 ; }

  // Field IOSR: Integrator oversampling ratio (averaging length)
    inline uint32_t DFSDM_DFSDM1_FCR_IOSR (const uint32_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register DFSDM1_JDATAR: data register for injected
          group
  #define DFSDM_DFSDM1_JDATAR (* ((const volatile uint32_t *) (0x40016000 + 536)))

  // Field JDATA: Injected group conversion data
    inline uint32_t DFSDM_DFSDM1_JDATAR_JDATA (const uint32_t inValue) {return (inValue & 0xffffffU) << 8 ; }

  // Field JDATACH: Injected channel most recently converted
    inline uint32_t DFSDM_DFSDM1_JDATAR_JDATACH (const uint32_t inValue) {return (inValue & 0x7U) << 0 ; }

//---  Register DFSDM1_RDATAR: data register for the regular
          channel
  #define DFSDM_DFSDM1_RDATAR (* ((const volatile uint32_t *) (0x40016000 + 540)))

  // Field RDATA: Regular channel conversion data
    inline uint32_t DFSDM_DFSDM1_RDATAR_RDATA (const uint32_t inValue) {return (inValue & 0xffffffU) << 8 ; }

  // Field RPEND: Regular channel pending data
    const uint32_t DFSDM_DFSDM1_RDATAR_RPEND = 1U << 4 ;

  // Field RDATACH: Regular channel most recently converted
    inline uint32_t DFSDM_DFSDM1_RDATAR_RDATACH (const uint32_t inValue) {return (inValue & 0x7U) << 0 ; }

//---  Register DFSDM1_AWHTR: analog watchdog high threshold
          register
  #define DFSDM_DFSDM1_AWHTR (* ((volatile uint32_t *) (0x40016000 + 544)))

  // Field AWHT: Analog watchdog high threshold
    inline uint32_t DFSDM_DFSDM1_AWHTR_AWHT (const uint32_t inValue) {return (inValue & 0xffffffU) << 8 ; }

  // Field BKAWH: Break signal assignment to analog watchdog high threshold event
    inline uint32_t DFSDM_DFSDM1_AWHTR_BKAWH (const uint32_t inValue) {return (inValue & 0xfU) << 0 ; }

//---  Register DFSDM1_AWLTR: analog watchdog low threshold
          register
  #define DFSDM_DFSDM1_AWLTR (* ((volatile uint32_t *) (0x40016000 + 548)))

  // Field AWLT: Analog watchdog low threshold
    inline uint32_t DFSDM_DFSDM1_AWLTR_AWLT (const uint32_t inValue) {return (inValue & 0xffffffU) << 8 ; }

  // Field BKAWL: Break signal assignment to analog watchdog low threshold event
    inline uint32_t DFSDM_DFSDM1_AWLTR_BKAWL (const uint32_t inValue) {return (inValue & 0xfU) << 0 ; }

//---  Register DFSDM1_AWSR: analog watchdog status
          register
  #define DFSDM_DFSDM1_AWSR (* ((const volatile uint32_t *) (0x40016000 + 552)))

  // Field AWHTF: Analog watchdog high threshold flag
    inline uint32_t DFSDM_DFSDM1_AWSR_AWHTF (const uint32_t inValue) {return (inValue & 0xffU) << 8 ; }

  // Field AWLTF: Analog watchdog low threshold flag
    inline uint32_t DFSDM_DFSDM1_AWSR_AWLTF (const uint32_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register DFSDM1_AWCFR: analog watchdog clear flag
          register
  #define DFSDM_DFSDM1_AWCFR (* ((volatile uint32_t *) (0x40016000 + 556)))

  // Field CLRAWHTF: Clear the analog watchdog high threshold flag
    inline uint32_t DFSDM_DFSDM1_AWCFR_CLRAWHTF (const uint32_t inValue) {return (inValue & 0xffU) << 8 ; }

  // Field CLRAWLTF: Clear the analog watchdog low threshold flag
    inline uint32_t DFSDM_DFSDM1_AWCFR_CLRAWLTF (const uint32_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register DFSDM1_EXMAX: Extremes detector maximum
          register
  #define DFSDM_DFSDM1_EXMAX (* ((const volatile uint32_t *) (0x40016000 + 560)))

  // Field EXMAX: Extremes detector maximum value
    inline uint32_t DFSDM_DFSDM1_EXMAX_EXMAX (const uint32_t inValue) {return (inValue & 0xffffffU) << 8 ; }

  // Field EXMAXCH: Extremes detector maximum data channel
    inline uint32_t DFSDM_DFSDM1_EXMAX_EXMAXCH (const uint32_t inValue) {return (inValue & 0x7U) << 0 ; }

//---  Register DFSDM1_EXMIN: Extremes detector minimum
          register
  #define DFSDM_DFSDM1_EXMIN (* ((const volatile uint32_t *) (0x40016000 + 564)))

  // Field EXMIN: EXMIN
    inline uint32_t DFSDM_DFSDM1_EXMIN_EXMIN (const uint32_t inValue) {return (inValue & 0xffffffU) << 8 ; }

  // Field EXMINCH: Extremes detector minimum data channel
    inline uint32_t DFSDM_DFSDM1_EXMIN_EXMINCH (const uint32_t inValue) {return (inValue & 0x7U) << 0 ; }

//---  Register DFSDM1_CNVTIMR: conversion timer register
  #define DFSDM_DFSDM1_CNVTIMR (* ((const volatile uint32_t *) (0x40016000 + 568)))

  // Field CNVCNT: 28-bit timer counting conversion time t = CNVCNT[27:0] / fDFSDM_CKIN
    inline uint32_t DFSDM_DFSDM1_CNVTIMR_CNVCNT (const uint32_t inValue) {return (inValue & 0xfffffffU) << 4 ; }

//---  Register DFSDM2_CR1: control register 1
  #define DFSDM_DFSDM2_CR1 (* ((volatile uint32_t *) (0x40016000 + 768)))

  // Field AWFSEL: Analog watchdog fast mode select
    const uint32_t DFSDM_DFSDM2_CR1_AWFSEL = 1U << 30 ;

  // Field FAST: Fast conversion mode selection for regular conversions
    const uint32_t DFSDM_DFSDM2_CR1_FAST = 1U << 29 ;

  // Field RCH: Regular channel selection
    inline uint32_t DFSDM_DFSDM2_CR1_RCH (const uint32_t inValue) {return (inValue & 0x7U) << 24 ; }

  // Field RDMAEN: DMA channel enabled to read data for the regular conversion
    const uint32_t DFSDM_DFSDM2_CR1_RDMAEN = 1U << 21 ;

  // Field RSYNC: Launch regular conversion synchronously with DFSDM0
    const uint32_t DFSDM_DFSDM2_CR1_RSYNC = 1U << 19 ;

  // Field RCONT: Continuous mode selection for regular conversions
    const uint32_t DFSDM_DFSDM2_CR1_RCONT = 1U << 18 ;

  // Field RSWSTART: Software start of a conversion on the regular channel
    const uint32_t DFSDM_DFSDM2_CR1_RSWSTART = 1U << 17 ;

  // Field JEXTEN: Trigger enable and trigger edge selection for injected conversions
    inline uint32_t DFSDM_DFSDM2_CR1_JEXTEN (const uint32_t inValue) {return (inValue & 0x3U) << 13 ; }

  // Field JEXTSEL: Trigger signal selection for launching injected conversions
    inline uint32_t DFSDM_DFSDM2_CR1_JEXTSEL (const uint32_t inValue) {return (inValue & 0x7U) << 8 ; }

  // Field JDMAEN: DMA channel enabled to read data for the injected channel group
    const uint32_t DFSDM_DFSDM2_CR1_JDMAEN = 1U << 5 ;

  // Field JSCAN: Scanning conversion mode for injected conversions
    const uint32_t DFSDM_DFSDM2_CR1_JSCAN = 1U << 4 ;

  // Field JSYNC: Launch an injected conversion synchronously with the DFSDM0 JSWSTART trigger
    const uint32_t DFSDM_DFSDM2_CR1_JSYNC = 1U << 3 ;

  // Field JSWSTART: Start a conversion of the injected group of channels
    const uint32_t DFSDM_DFSDM2_CR1_JSWSTART = 1U << 1 ;

  // Field DFEN: DFSDM enable
    const uint32_t DFSDM_DFSDM2_CR1_DFEN = 1U << 0 ;

//---  Register DFSDM2_CR2: control register 2
  #define DFSDM_DFSDM2_CR2 (* ((volatile uint32_t *) (0x40016000 + 772)))

  // Field AWDCH: Analog watchdog channel selection
    inline uint32_t DFSDM_DFSDM2_CR2_AWDCH (const uint32_t inValue) {return (inValue & 0xffU) << 16 ; }

  // Field EXCH: Extremes detector channel selection
    inline uint32_t DFSDM_DFSDM2_CR2_EXCH (const uint32_t inValue) {return (inValue & 0xffU) << 8 ; }

  // Field CKABIE: Clock absence interrupt enable
    const uint32_t DFSDM_DFSDM2_CR2_CKABIE = 1U << 6 ;

  // Field SCDIE: Short-circuit detector interrupt enable
    const uint32_t DFSDM_DFSDM2_CR2_SCDIE = 1U << 5 ;

  // Field AWDIE: Analog watchdog interrupt enable
    const uint32_t DFSDM_DFSDM2_CR2_AWDIE = 1U << 4 ;

  // Field ROVRIE: Regular data overrun interrupt enable
    const uint32_t DFSDM_DFSDM2_CR2_ROVRIE = 1U << 3 ;

  // Field JOVRIE: Injected data overrun interrupt enable
    const uint32_t DFSDM_DFSDM2_CR2_JOVRIE = 1U << 2 ;

  // Field REOCIE: Regular end of conversion interrupt enable
    const uint32_t DFSDM_DFSDM2_CR2_REOCIE = 1U << 1 ;

  // Field JEOCIE: Injected end of conversion interrupt enable
    const uint32_t DFSDM_DFSDM2_CR2_JEOCIE = 1U << 0 ;

//---  Register DFSDM2_ISR: interrupt and status register
  #define DFSDM_DFSDM2_ISR (* ((const volatile uint32_t *) (0x40016000 + 776)))

  // Field SCDF: short-circuit detector flag
    inline uint32_t DFSDM_DFSDM2_ISR_SCDF (const uint32_t inValue) {return (inValue & 0xffU) << 24 ; }

  // Field CKABF: Clock absence flag
    inline uint32_t DFSDM_DFSDM2_ISR_CKABF (const uint32_t inValue) {return (inValue & 0xffU) << 16 ; }

  // Field RCIP: Regular conversion in progress status
    const uint32_t DFSDM_DFSDM2_ISR_RCIP = 1U << 14 ;

  // Field JCIP: Injected conversion in progress status
    const uint32_t DFSDM_DFSDM2_ISR_JCIP = 1U << 13 ;

  // Field AWDF: Analog watchdog
    const uint32_t DFSDM_DFSDM2_ISR_AWDF = 1U << 4 ;

  // Field ROVRF: Regular conversion overrun flag
    const uint32_t DFSDM_DFSDM2_ISR_ROVRF = 1U << 3 ;

  // Field JOVRF: Injected conversion overrun flag
    const uint32_t DFSDM_DFSDM2_ISR_JOVRF = 1U << 2 ;

  // Field REOCF: End of regular conversion flag
    const uint32_t DFSDM_DFSDM2_ISR_REOCF = 1U << 1 ;

  // Field JEOCF: End of injected conversion flag
    const uint32_t DFSDM_DFSDM2_ISR_JEOCF = 1U << 0 ;

//---  Register DFSDM2_ICR: interrupt flag clear register
  #define DFSDM_DFSDM2_ICR (* ((volatile uint32_t *) (0x40016000 + 780)))

  // Field CLRSCDF: Clear the short-circuit detector flag
    inline uint32_t DFSDM_DFSDM2_ICR_CLRSCDF (const uint32_t inValue) {return (inValue & 0xffU) << 24 ; }

  // Field CLRCKABF: Clear the clock absence flag
    inline uint32_t DFSDM_DFSDM2_ICR_CLRCKABF (const uint32_t inValue) {return (inValue & 0xffU) << 16 ; }

  // Field CLRROVRF: Clear the regular conversion overrun flag
    const uint32_t DFSDM_DFSDM2_ICR_CLRROVRF = 1U << 3 ;

  // Field CLRJOVRF: Clear the injected conversion overrun flag
    const uint32_t DFSDM_DFSDM2_ICR_CLRJOVRF = 1U << 2 ;

//---  Register DFSDM2_JCHGR: injected channel group selection
          register
  #define DFSDM_DFSDM2_JCHGR (* ((volatile uint32_t *) (0x40016000 + 784)))

  // Field JCHG: Injected channel group selection
    inline uint32_t DFSDM_DFSDM2_JCHGR_JCHG (const uint32_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register DFSDM2_FCR: filter control register
  #define DFSDM_DFSDM2_FCR (* ((volatile uint32_t *) (0x40016000 + 788)))

  // Field FORD: Sinc filter order
    inline uint32_t DFSDM_DFSDM2_FCR_FORD (const uint32_t inValue) {return (inValue & 0x7U) << 29 ; }

  // Field FOSR: Sinc filter oversampling ratio (decimation rate)
    inline uint32_t DFSDM_DFSDM2_FCR_FOSR (const uint32_t inValue) {return (inValue & 0x3ffU) << 16 ; }

  // Field IOSR: Integrator oversampling ratio (averaging length)
    inline uint32_t DFSDM_DFSDM2_FCR_IOSR (const uint32_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register DFSDM2_JDATAR: data register for injected
          group
  #define DFSDM_DFSDM2_JDATAR (* ((const volatile uint32_t *) (0x40016000 + 792)))

  // Field JDATA: Injected group conversion data
    inline uint32_t DFSDM_DFSDM2_JDATAR_JDATA (const uint32_t inValue) {return (inValue & 0xffffffU) << 8 ; }

  // Field JDATACH: Injected channel most recently converted
    inline uint32_t DFSDM_DFSDM2_JDATAR_JDATACH (const uint32_t inValue) {return (inValue & 0x7U) << 0 ; }

//---  Register DFSDM2_RDATAR: data register for the regular
          channel
  #define DFSDM_DFSDM2_RDATAR (* ((const volatile uint32_t *) (0x40016000 + 796)))

  // Field RDATA: Regular channel conversion data
    inline uint32_t DFSDM_DFSDM2_RDATAR_RDATA (const uint32_t inValue) {return (inValue & 0xffffffU) << 8 ; }

  // Field RPEND: Regular channel pending data
    const uint32_t DFSDM_DFSDM2_RDATAR_RPEND = 1U << 4 ;

  // Field RDATACH: Regular channel most recently converted
    inline uint32_t DFSDM_DFSDM2_RDATAR_RDATACH (const uint32_t inValue) {return (inValue & 0x7U) << 0 ; }

//---  Register DFSDM2_AWHTR: analog watchdog high threshold
          register
  #define DFSDM_DFSDM2_AWHTR (* ((volatile uint32_t *) (0x40016000 + 800)))

  // Field AWHT: Analog watchdog high threshold
    inline uint32_t DFSDM_DFSDM2_AWHTR_AWHT (const uint32_t inValue) {return (inValue & 0xffffffU) << 8 ; }

  // Field BKAWH: Break signal assignment to analog watchdog high threshold event
    inline uint32_t DFSDM_DFSDM2_AWHTR_BKAWH (const uint32_t inValue) {return (inValue & 0xfU) << 0 ; }

//---  Register DFSDM2_AWLTR: analog watchdog low threshold
          register
  #define DFSDM_DFSDM2_AWLTR (* ((volatile uint32_t *) (0x40016000 + 804)))

  // Field AWLT: Analog watchdog low threshold
    inline uint32_t DFSDM_DFSDM2_AWLTR_AWLT (const uint32_t inValue) {return (inValue & 0xffffffU) << 8 ; }

  // Field BKAWL: Break signal assignment to analog watchdog low threshold event
    inline uint32_t DFSDM_DFSDM2_AWLTR_BKAWL (const uint32_t inValue) {return (inValue & 0xfU) << 0 ; }

//---  Register DFSDM2_AWSR: analog watchdog status
          register
  #define DFSDM_DFSDM2_AWSR (* ((const volatile uint32_t *) (0x40016000 + 808)))

  // Field AWHTF: Analog watchdog high threshold flag
    inline uint32_t DFSDM_DFSDM2_AWSR_AWHTF (const uint32_t inValue) {return (inValue & 0xffU) << 8 ; }

  // Field AWLTF: Analog watchdog low threshold flag
    inline uint32_t DFSDM_DFSDM2_AWSR_AWLTF (const uint32_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register DFSDM2_AWCFR: analog watchdog clear flag
          register
  #define DFSDM_DFSDM2_AWCFR (* ((volatile uint32_t *) (0x40016000 + 812)))

  // Field CLRAWHTF: Clear the analog watchdog high threshold flag
    inline uint32_t DFSDM_DFSDM2_AWCFR_CLRAWHTF (const uint32_t inValue) {return (inValue & 0xffU) << 8 ; }

  // Field CLRAWLTF: Clear the analog watchdog low threshold flag
    inline uint32_t DFSDM_DFSDM2_AWCFR_CLRAWLTF (const uint32_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register DFSDM2_EXMAX: Extremes detector maximum
          register
  #define DFSDM_DFSDM2_EXMAX (* ((const volatile uint32_t *) (0x40016000 + 816)))

  // Field EXMAX: Extremes detector maximum value
    inline uint32_t DFSDM_DFSDM2_EXMAX_EXMAX (const uint32_t inValue) {return (inValue & 0xffffffU) << 8 ; }

  // Field EXMAXCH: Extremes detector maximum data channel
    inline uint32_t DFSDM_DFSDM2_EXMAX_EXMAXCH (const uint32_t inValue) {return (inValue & 0x7U) << 0 ; }

//---  Register DFSDM2_EXMIN: Extremes detector minimum
          register
  #define DFSDM_DFSDM2_EXMIN (* ((const volatile uint32_t *) (0x40016000 + 820)))

  // Field EXMIN: EXMIN
    inline uint32_t DFSDM_DFSDM2_EXMIN_EXMIN (const uint32_t inValue) {return (inValue & 0xffffffU) << 8 ; }

  // Field EXMINCH: Extremes detector minimum data channel
    inline uint32_t DFSDM_DFSDM2_EXMIN_EXMINCH (const uint32_t inValue) {return (inValue & 0x7U) << 0 ; }

//---  Register DFSDM2_CNVTIMR: conversion timer register
  #define DFSDM_DFSDM2_CNVTIMR (* ((const volatile uint32_t *) (0x40016000 + 824)))

  // Field CNVCNT: 28-bit timer counting conversion time t = CNVCNT[27:0] / fDFSDM_CKIN
    inline uint32_t DFSDM_DFSDM2_CNVTIMR_CNVCNT (const uint32_t inValue) {return (inValue & 0xfffffffU) << 4 ; }

//---  Register DFSDM3_CR1: control register 1
  #define DFSDM_DFSDM3_CR1 (* ((volatile uint32_t *) (0x40016000 + 1024)))

  // Field AWFSEL: Analog watchdog fast mode select
    const uint32_t DFSDM_DFSDM3_CR1_AWFSEL = 1U << 30 ;

  // Field FAST: Fast conversion mode selection for regular conversions
    const uint32_t DFSDM_DFSDM3_CR1_FAST = 1U << 29 ;

  // Field RCH: Regular channel selection
    inline uint32_t DFSDM_DFSDM3_CR1_RCH (const uint32_t inValue) {return (inValue & 0x7U) << 24 ; }

  // Field RDMAEN: DMA channel enabled to read data for the regular conversion
    const uint32_t DFSDM_DFSDM3_CR1_RDMAEN = 1U << 21 ;

  // Field RSYNC: Launch regular conversion synchronously with DFSDM0
    const uint32_t DFSDM_DFSDM3_CR1_RSYNC = 1U << 19 ;

  // Field RCONT: Continuous mode selection for regular conversions
    const uint32_t DFSDM_DFSDM3_CR1_RCONT = 1U << 18 ;

  // Field RSWSTART: Software start of a conversion on the regular channel
    const uint32_t DFSDM_DFSDM3_CR1_RSWSTART = 1U << 17 ;

  // Field JEXTEN: Trigger enable and trigger edge selection for injected conversions
    inline uint32_t DFSDM_DFSDM3_CR1_JEXTEN (const uint32_t inValue) {return (inValue & 0x3U) << 13 ; }

  // Field JEXTSEL: Trigger signal selection for launching injected conversions
    inline uint32_t DFSDM_DFSDM3_CR1_JEXTSEL (const uint32_t inValue) {return (inValue & 0x7U) << 8 ; }

  // Field JDMAEN: DMA channel enabled to read data for the injected channel group
    const uint32_t DFSDM_DFSDM3_CR1_JDMAEN = 1U << 5 ;

  // Field JSCAN: Scanning conversion mode for injected conversions
    const uint32_t DFSDM_DFSDM3_CR1_JSCAN = 1U << 4 ;

  // Field JSYNC: Launch an injected conversion synchronously with the DFSDM0 JSWSTART trigger
    const uint32_t DFSDM_DFSDM3_CR1_JSYNC = 1U << 3 ;

  // Field JSWSTART: Start a conversion of the injected group of channels
    const uint32_t DFSDM_DFSDM3_CR1_JSWSTART = 1U << 1 ;

  // Field DFEN: DFSDM enable
    const uint32_t DFSDM_DFSDM3_CR1_DFEN = 1U << 0 ;

//---  Register DFSDM3_CR2: control register 2
  #define DFSDM_DFSDM3_CR2 (* ((volatile uint32_t *) (0x40016000 + 1028)))

  // Field AWDCH: Analog watchdog channel selection
    inline uint32_t DFSDM_DFSDM3_CR2_AWDCH (const uint32_t inValue) {return (inValue & 0xffU) << 16 ; }

  // Field EXCH: Extremes detector channel selection
    inline uint32_t DFSDM_DFSDM3_CR2_EXCH (const uint32_t inValue) {return (inValue & 0xffU) << 8 ; }

  // Field CKABIE: Clock absence interrupt enable
    const uint32_t DFSDM_DFSDM3_CR2_CKABIE = 1U << 6 ;

  // Field SCDIE: Short-circuit detector interrupt enable
    const uint32_t DFSDM_DFSDM3_CR2_SCDIE = 1U << 5 ;

  // Field AWDIE: Analog watchdog interrupt enable
    const uint32_t DFSDM_DFSDM3_CR2_AWDIE = 1U << 4 ;

  // Field ROVRIE: Regular data overrun interrupt enable
    const uint32_t DFSDM_DFSDM3_CR2_ROVRIE = 1U << 3 ;

  // Field JOVRIE: Injected data overrun interrupt enable
    const uint32_t DFSDM_DFSDM3_CR2_JOVRIE = 1U << 2 ;

  // Field REOCIE: Regular end of conversion interrupt enable
    const uint32_t DFSDM_DFSDM3_CR2_REOCIE = 1U << 1 ;

  // Field JEOCIE: Injected end of conversion interrupt enable
    const uint32_t DFSDM_DFSDM3_CR2_JEOCIE = 1U << 0 ;

//---  Register DFSDM3_ISR: interrupt and status register
  #define DFSDM_DFSDM3_ISR (* ((const volatile uint32_t *) (0x40016000 + 1032)))

  // Field SCDF: short-circuit detector flag
    inline uint32_t DFSDM_DFSDM3_ISR_SCDF (const uint32_t inValue) {return (inValue & 0xffU) << 24 ; }

  // Field CKABF: Clock absence flag
    inline uint32_t DFSDM_DFSDM3_ISR_CKABF (const uint32_t inValue) {return (inValue & 0xffU) << 16 ; }

  // Field RCIP: Regular conversion in progress status
    const uint32_t DFSDM_DFSDM3_ISR_RCIP = 1U << 14 ;

  // Field JCIP: Injected conversion in progress status
    const uint32_t DFSDM_DFSDM3_ISR_JCIP = 1U << 13 ;

  // Field AWDF: Analog watchdog
    const uint32_t DFSDM_DFSDM3_ISR_AWDF = 1U << 4 ;

  // Field ROVRF: Regular conversion overrun flag
    const uint32_t DFSDM_DFSDM3_ISR_ROVRF = 1U << 3 ;

  // Field JOVRF: Injected conversion overrun flag
    const uint32_t DFSDM_DFSDM3_ISR_JOVRF = 1U << 2 ;

  // Field REOCF: End of regular conversion flag
    const uint32_t DFSDM_DFSDM3_ISR_REOCF = 1U << 1 ;

  // Field JEOCF: End of injected conversion flag
    const uint32_t DFSDM_DFSDM3_ISR_JEOCF = 1U << 0 ;

//---  Register DFSDM3_ICR: interrupt flag clear register
  #define DFSDM_DFSDM3_ICR (* ((volatile uint32_t *) (0x40016000 + 1036)))

  // Field CLRSCDF: Clear the short-circuit detector flag
    inline uint32_t DFSDM_DFSDM3_ICR_CLRSCDF (const uint32_t inValue) {return (inValue & 0xffU) << 24 ; }

  // Field CLRCKABF: Clear the clock absence flag
    inline uint32_t DFSDM_DFSDM3_ICR_CLRCKABF (const uint32_t inValue) {return (inValue & 0xffU) << 16 ; }

  // Field CLRROVRF: Clear the regular conversion overrun flag
    const uint32_t DFSDM_DFSDM3_ICR_CLRROVRF = 1U << 3 ;

  // Field CLRJOVRF: Clear the injected conversion overrun flag
    const uint32_t DFSDM_DFSDM3_ICR_CLRJOVRF = 1U << 2 ;

//---  Register DFSDM3_JCHGR: injected channel group selection
          register
  #define DFSDM_DFSDM3_JCHGR (* ((volatile uint32_t *) (0x40016000 + 1040)))

  // Field JCHG: Injected channel group selection
    inline uint32_t DFSDM_DFSDM3_JCHGR_JCHG (const uint32_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register DFSDM3_FCR: filter control register
  #define DFSDM_DFSDM3_FCR (* ((volatile uint32_t *) (0x40016000 + 1044)))

  // Field FORD: Sinc filter order
    inline uint32_t DFSDM_DFSDM3_FCR_FORD (const uint32_t inValue) {return (inValue & 0x7U) << 29 ; }

  // Field FOSR: Sinc filter oversampling ratio (decimation rate)
    inline uint32_t DFSDM_DFSDM3_FCR_FOSR (const uint32_t inValue) {return (inValue & 0x3ffU) << 16 ; }

  // Field IOSR: Integrator oversampling ratio (averaging length)
    inline uint32_t DFSDM_DFSDM3_FCR_IOSR (const uint32_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register DFSDM3_JDATAR: data register for injected
          group
  #define DFSDM_DFSDM3_JDATAR (* ((const volatile uint32_t *) (0x40016000 + 1048)))

  // Field JDATA: Injected group conversion data
    inline uint32_t DFSDM_DFSDM3_JDATAR_JDATA (const uint32_t inValue) {return (inValue & 0xffffffU) << 8 ; }

  // Field JDATACH: Injected channel most recently converted
    inline uint32_t DFSDM_DFSDM3_JDATAR_JDATACH (const uint32_t inValue) {return (inValue & 0x7U) << 0 ; }

//---  Register DFSDM3_RDATAR: data register for the regular
          channel
  #define DFSDM_DFSDM3_RDATAR (* ((const volatile uint32_t *) (0x40016000 + 1052)))

  // Field RDATA: Regular channel conversion data
    inline uint32_t DFSDM_DFSDM3_RDATAR_RDATA (const uint32_t inValue) {return (inValue & 0xffffffU) << 8 ; }

  // Field RPEND: Regular channel pending data
    const uint32_t DFSDM_DFSDM3_RDATAR_RPEND = 1U << 4 ;

  // Field RDATACH: Regular channel most recently converted
    inline uint32_t DFSDM_DFSDM3_RDATAR_RDATACH (const uint32_t inValue) {return (inValue & 0x7U) << 0 ; }

//---  Register DFSDM3_AWHTR: analog watchdog high threshold
          register
  #define DFSDM_DFSDM3_AWHTR (* ((volatile uint32_t *) (0x40016000 + 1056)))

  // Field AWHT: Analog watchdog high threshold
    inline uint32_t DFSDM_DFSDM3_AWHTR_AWHT (const uint32_t inValue) {return (inValue & 0xffffffU) << 8 ; }

  // Field BKAWH: Break signal assignment to analog watchdog high threshold event
    inline uint32_t DFSDM_DFSDM3_AWHTR_BKAWH (const uint32_t inValue) {return (inValue & 0xfU) << 0 ; }

//---  Register DFSDM3_AWLTR: analog watchdog low threshold
          register
  #define DFSDM_DFSDM3_AWLTR (* ((volatile uint32_t *) (0x40016000 + 1060)))

  // Field AWLT: Analog watchdog low threshold
    inline uint32_t DFSDM_DFSDM3_AWLTR_AWLT (const uint32_t inValue) {return (inValue & 0xffffffU) << 8 ; }

  // Field BKAWL: Break signal assignment to analog watchdog low threshold event
    inline uint32_t DFSDM_DFSDM3_AWLTR_BKAWL (const uint32_t inValue) {return (inValue & 0xfU) << 0 ; }

//---  Register DFSDM3_AWSR: analog watchdog status
          register
  #define DFSDM_DFSDM3_AWSR (* ((const volatile uint32_t *) (0x40016000 + 1064)))

  // Field AWHTF: Analog watchdog high threshold flag
    inline uint32_t DFSDM_DFSDM3_AWSR_AWHTF (const uint32_t inValue) {return (inValue & 0xffU) << 8 ; }

  // Field AWLTF: Analog watchdog low threshold flag
    inline uint32_t DFSDM_DFSDM3_AWSR_AWLTF (const uint32_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register DFSDM3_AWCFR: analog watchdog clear flag
          register
  #define DFSDM_DFSDM3_AWCFR (* ((volatile uint32_t *) (0x40016000 + 1068)))

  // Field CLRAWHTF: Clear the analog watchdog high threshold flag
    inline uint32_t DFSDM_DFSDM3_AWCFR_CLRAWHTF (const uint32_t inValue) {return (inValue & 0xffU) << 8 ; }

  // Field CLRAWLTF: Clear the analog watchdog low threshold flag
    inline uint32_t DFSDM_DFSDM3_AWCFR_CLRAWLTF (const uint32_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register DFSDM3_EXMAX: Extremes detector maximum
          register
  #define DFSDM_DFSDM3_EXMAX (* ((const volatile uint32_t *) (0x40016000 + 1072)))

  // Field EXMAX: Extremes detector maximum value
    inline uint32_t DFSDM_DFSDM3_EXMAX_EXMAX (const uint32_t inValue) {return (inValue & 0xffffffU) << 8 ; }

  // Field EXMAXCH: Extremes detector maximum data channel
    inline uint32_t DFSDM_DFSDM3_EXMAX_EXMAXCH (const uint32_t inValue) {return (inValue & 0x7U) << 0 ; }

//---  Register DFSDM3_EXMIN: Extremes detector minimum
          register
  #define DFSDM_DFSDM3_EXMIN (* ((const volatile uint32_t *) (0x40016000 + 1076)))

  // Field EXMIN: EXMIN
    inline uint32_t DFSDM_DFSDM3_EXMIN_EXMIN (const uint32_t inValue) {return (inValue & 0xffffffU) << 8 ; }

  // Field EXMINCH: Extremes detector minimum data channel
    inline uint32_t DFSDM_DFSDM3_EXMIN_EXMINCH (const uint32_t inValue) {return (inValue & 0x7U) << 0 ; }

//---  Register DFSDM3_CNVTIMR: conversion timer register
  #define DFSDM_DFSDM3_CNVTIMR (* ((const volatile uint32_t *) (0x40016000 + 1080)))

  // Field CNVCNT: 28-bit timer counting conversion time t = CNVCNT[27:0] / fDFSDM_CKIN
    inline uint32_t DFSDM_DFSDM3_CNVTIMR_CNVCNT (const uint32_t inValue) {return (inValue & 0xfffffffU) << 4 ; }

//------------------------------------------------------------------------------
// Peripheral DMA1: Direct memory access controller
//------------------------------------------------------------------------------

//---  Register ISR: interrupt status register
  #define DMA1_ISR (* ((const volatile uint32_t *) (0x40020000 + 0)))

  // Field TEIF7: Channel x transfer error flag (x = 1 ..7)
    const uint32_t DMA1_ISR_TEIF7 = 1U << 27 ;

  // Field HTIF7: Channel x half transfer flag (x = 1 ..7)
    const uint32_t DMA1_ISR_HTIF7 = 1U << 26 ;

  // Field TCIF7: Channel x transfer complete flag (x = 1 ..7)
    const uint32_t DMA1_ISR_TCIF7 = 1U << 25 ;

  // Field GIF7: Channel x global interrupt flag (x = 1 ..7)
    const uint32_t DMA1_ISR_GIF7 = 1U << 24 ;

  // Field TEIF6: Channel x transfer error flag (x = 1 ..7)
    const uint32_t DMA1_ISR_TEIF6 = 1U << 23 ;

  // Field HTIF6: Channel x half transfer flag (x = 1 ..7)
    const uint32_t DMA1_ISR_HTIF6 = 1U << 22 ;

  // Field TCIF6: Channel x transfer complete flag (x = 1 ..7)
    const uint32_t DMA1_ISR_TCIF6 = 1U << 21 ;

  // Field GIF6: Channel x global interrupt flag (x = 1 ..7)
    const uint32_t DMA1_ISR_GIF6 = 1U << 20 ;

  // Field TEIF5: Channel x transfer error flag (x = 1 ..7)
    const uint32_t DMA1_ISR_TEIF5 = 1U << 19 ;

  // Field HTIF5: Channel x half transfer flag (x = 1 ..7)
    const uint32_t DMA1_ISR_HTIF5 = 1U << 18 ;

  // Field TCIF5: Channel x transfer complete flag (x = 1 ..7)
    const uint32_t DMA1_ISR_TCIF5 = 1U << 17 ;

  // Field GIF5: Channel x global interrupt flag (x = 1 ..7)
    const uint32_t DMA1_ISR_GIF5 = 1U << 16 ;

  // Field TEIF4: Channel x transfer error flag (x = 1 ..7)
    const uint32_t DMA1_ISR_TEIF4 = 1U << 15 ;

  // Field HTIF4: Channel x half transfer flag (x = 1 ..7)
    const uint32_t DMA1_ISR_HTIF4 = 1U << 14 ;

  // Field TCIF4: Channel x transfer complete flag (x = 1 ..7)
    const uint32_t DMA1_ISR_TCIF4 = 1U << 13 ;

  // Field GIF4: Channel x global interrupt flag (x = 1 ..7)
    const uint32_t DMA1_ISR_GIF4 = 1U << 12 ;

  // Field TEIF3: Channel x transfer error flag (x = 1 ..7)
    const uint32_t DMA1_ISR_TEIF3 = 1U << 11 ;

  // Field HTIF3: Channel x half transfer flag (x = 1 ..7)
    const uint32_t DMA1_ISR_HTIF3 = 1U << 10 ;

  // Field TCIF3: Channel x transfer complete flag (x = 1 ..7)
    const uint32_t DMA1_ISR_TCIF3 = 1U << 9 ;

  // Field GIF3: Channel x global interrupt flag (x = 1 ..7)
    const uint32_t DMA1_ISR_GIF3 = 1U << 8 ;

  // Field TEIF2: Channel x transfer error flag (x = 1 ..7)
    const uint32_t DMA1_ISR_TEIF2 = 1U << 7 ;

  // Field HTIF2: Channel x half transfer flag (x = 1 ..7)
    const uint32_t DMA1_ISR_HTIF2 = 1U << 6 ;

  // Field TCIF2: Channel x transfer complete flag (x = 1 ..7)
    const uint32_t DMA1_ISR_TCIF2 = 1U << 5 ;

  // Field GIF2: Channel x global interrupt flag (x = 1 ..7)
    const uint32_t DMA1_ISR_GIF2 = 1U << 4 ;

  // Field TEIF1: Channel x transfer error flag (x = 1 ..7)
    const uint32_t DMA1_ISR_TEIF1 = 1U << 3 ;

  // Field HTIF1: Channel x half transfer flag (x = 1 ..7)
    const uint32_t DMA1_ISR_HTIF1 = 1U << 2 ;

  // Field TCIF1: Channel x transfer complete flag (x = 1 ..7)
    const uint32_t DMA1_ISR_TCIF1 = 1U << 1 ;

  // Field GIF1: Channel x global interrupt flag (x = 1 ..7)
    const uint32_t DMA1_ISR_GIF1 = 1U << 0 ;

//---  Register IFCR: interrupt flag clear register
  #define DMA1_IFCR (* ((volatile uint32_t *) (0x40020000 + 4)))

  // Field CTEIF7: Channel x transfer error clear (x = 1 ..7)
    const uint32_t DMA1_IFCR_CTEIF7 = 1U << 27 ;

  // Field CHTIF7: Channel x half transfer clear (x = 1 ..7)
    const uint32_t DMA1_IFCR_CHTIF7 = 1U << 26 ;

  // Field CTCIF7: Channel x transfer complete clear (x = 1 ..7)
    const uint32_t DMA1_IFCR_CTCIF7 = 1U << 25 ;

  // Field CGIF7: Channel x global interrupt clear (x = 1 ..7)
    const uint32_t DMA1_IFCR_CGIF7 = 1U << 24 ;

  // Field CTEIF6: Channel x transfer error clear (x = 1 ..7)
    const uint32_t DMA1_IFCR_CTEIF6 = 1U << 23 ;

  // Field CHTIF6: Channel x half transfer clear (x = 1 ..7)
    const uint32_t DMA1_IFCR_CHTIF6 = 1U << 22 ;

  // Field CTCIF6: Channel x transfer complete clear (x = 1 ..7)
    const uint32_t DMA1_IFCR_CTCIF6 = 1U << 21 ;

  // Field CGIF6: Channel x global interrupt clear (x = 1 ..7)
    const uint32_t DMA1_IFCR_CGIF6 = 1U << 20 ;

  // Field CTEIF5: Channel x transfer error clear (x = 1 ..7)
    const uint32_t DMA1_IFCR_CTEIF5 = 1U << 19 ;

  // Field CHTIF5: Channel x half transfer clear (x = 1 ..7)
    const uint32_t DMA1_IFCR_CHTIF5 = 1U << 18 ;

  // Field CTCIF5: Channel x transfer complete clear (x = 1 ..7)
    const uint32_t DMA1_IFCR_CTCIF5 = 1U << 17 ;

  // Field CGIF5: Channel x global interrupt clear (x = 1 ..7)
    const uint32_t DMA1_IFCR_CGIF5 = 1U << 16 ;

  // Field CTEIF4: Channel x transfer error clear (x = 1 ..7)
    const uint32_t DMA1_IFCR_CTEIF4 = 1U << 15 ;

  // Field CHTIF4: Channel x half transfer clear (x = 1 ..7)
    const uint32_t DMA1_IFCR_CHTIF4 = 1U << 14 ;

  // Field CTCIF4: Channel x transfer complete clear (x = 1 ..7)
    const uint32_t DMA1_IFCR_CTCIF4 = 1U << 13 ;

  // Field CGIF4: Channel x global interrupt clear (x = 1 ..7)
    const uint32_t DMA1_IFCR_CGIF4 = 1U << 12 ;

  // Field CTEIF3: Channel x transfer error clear (x = 1 ..7)
    const uint32_t DMA1_IFCR_CTEIF3 = 1U << 11 ;

  // Field CHTIF3: Channel x half transfer clear (x = 1 ..7)
    const uint32_t DMA1_IFCR_CHTIF3 = 1U << 10 ;

  // Field CTCIF3: Channel x transfer complete clear (x = 1 ..7)
    const uint32_t DMA1_IFCR_CTCIF3 = 1U << 9 ;

  // Field CGIF3: Channel x global interrupt clear (x = 1 ..7)
    const uint32_t DMA1_IFCR_CGIF3 = 1U << 8 ;

  // Field CTEIF2: Channel x transfer error clear (x = 1 ..7)
    const uint32_t DMA1_IFCR_CTEIF2 = 1U << 7 ;

  // Field CHTIF2: Channel x half transfer clear (x = 1 ..7)
    const uint32_t DMA1_IFCR_CHTIF2 = 1U << 6 ;

  // Field CTCIF2: Channel x transfer complete clear (x = 1 ..7)
    const uint32_t DMA1_IFCR_CTCIF2 = 1U << 5 ;

  // Field CGIF2: Channel x global interrupt clear (x = 1 ..7)
    const uint32_t DMA1_IFCR_CGIF2 = 1U << 4 ;

  // Field CTEIF1: Channel x transfer error clear (x = 1 ..7)
    const uint32_t DMA1_IFCR_CTEIF1 = 1U << 3 ;

  // Field CHTIF1: Channel x half transfer clear (x = 1 ..7)
    const uint32_t DMA1_IFCR_CHTIF1 = 1U << 2 ;

  // Field CTCIF1: Channel x transfer complete clear (x = 1 ..7)
    const uint32_t DMA1_IFCR_CTCIF1 = 1U << 1 ;

  // Field CGIF1: Channel x global interrupt clear (x = 1 ..7)
    const uint32_t DMA1_IFCR_CGIF1 = 1U << 0 ;

//---  Register CCR1: channel x configuration
          register
  #define DMA1_CCR1 (* ((volatile uint32_t *) (0x40020000 + 8)))

  // Field MEM2MEM: Memory to memory mode
    const uint32_t DMA1_CCR1_MEM2MEM = 1U << 14 ;

  // Field PL: Channel priority level
    inline uint32_t DMA1_CCR1_PL (const uint32_t inValue) {return (inValue & 0x3U) << 12 ; }

  // Field MSIZE: Memory size
    inline uint32_t DMA1_CCR1_MSIZE (const uint32_t inValue) {return (inValue & 0x3U) << 10 ; }

  // Field PSIZE: Peripheral size
    inline uint32_t DMA1_CCR1_PSIZE (const uint32_t inValue) {return (inValue & 0x3U) << 8 ; }

  // Field MINC: Memory increment mode
    const uint32_t DMA1_CCR1_MINC = 1U << 7 ;

  // Field PINC: Peripheral increment mode
    const uint32_t DMA1_CCR1_PINC = 1U << 6 ;

  // Field CIRC: Circular mode
    const uint32_t DMA1_CCR1_CIRC = 1U << 5 ;

  // Field DIR: Data transfer direction
    const uint32_t DMA1_CCR1_DIR = 1U << 4 ;

  // Field TEIE: Transfer error interrupt enable
    const uint32_t DMA1_CCR1_TEIE = 1U << 3 ;

  // Field HTIE: Half transfer interrupt enable
    const uint32_t DMA1_CCR1_HTIE = 1U << 2 ;

  // Field TCIE: Transfer complete interrupt enable
    const uint32_t DMA1_CCR1_TCIE = 1U << 1 ;

  // Field EN: Channel enable
    const uint32_t DMA1_CCR1_EN = 1U << 0 ;

//---  Register CNDTR1: channel x number of data
          register
  #define DMA1_CNDTR1 (* ((volatile uint32_t *) (0x40020000 + 12)))

  // Field NDT: Number of data to transfer
    inline uint32_t DMA1_CNDTR1_NDT (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register CPAR1: channel x peripheral address
          register
  #define DMA1_CPAR1 (* ((volatile uint32_t *) (0x40020000 + 16)))

  // Field PA: Peripheral address
    inline uint32_t DMA1_CPAR1_PA (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register CMAR1: channel x memory address
          register
  #define DMA1_CMAR1 (* ((volatile uint32_t *) (0x40020000 + 20)))

  // Field MA: Memory address
    inline uint32_t DMA1_CMAR1_MA (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register CCR2: channel x configuration
          register
  #define DMA1_CCR2 (* ((volatile uint32_t *) (0x40020000 + 28)))

  // Field MEM2MEM: Memory to memory mode
    const uint32_t DMA1_CCR2_MEM2MEM = 1U << 14 ;

  // Field PL: Channel priority level
    inline uint32_t DMA1_CCR2_PL (const uint32_t inValue) {return (inValue & 0x3U) << 12 ; }

  // Field MSIZE: Memory size
    inline uint32_t DMA1_CCR2_MSIZE (const uint32_t inValue) {return (inValue & 0x3U) << 10 ; }

  // Field PSIZE: Peripheral size
    inline uint32_t DMA1_CCR2_PSIZE (const uint32_t inValue) {return (inValue & 0x3U) << 8 ; }

  // Field MINC: Memory increment mode
    const uint32_t DMA1_CCR2_MINC = 1U << 7 ;

  // Field PINC: Peripheral increment mode
    const uint32_t DMA1_CCR2_PINC = 1U << 6 ;

  // Field CIRC: Circular mode
    const uint32_t DMA1_CCR2_CIRC = 1U << 5 ;

  // Field DIR: Data transfer direction
    const uint32_t DMA1_CCR2_DIR = 1U << 4 ;

  // Field TEIE: Transfer error interrupt enable
    const uint32_t DMA1_CCR2_TEIE = 1U << 3 ;

  // Field HTIE: Half transfer interrupt enable
    const uint32_t DMA1_CCR2_HTIE = 1U << 2 ;

  // Field TCIE: Transfer complete interrupt enable
    const uint32_t DMA1_CCR2_TCIE = 1U << 1 ;

  // Field EN: Channel enable
    const uint32_t DMA1_CCR2_EN = 1U << 0 ;

//---  Register CNDTR2: channel x number of data
          register
  #define DMA1_CNDTR2 (* ((volatile uint32_t *) (0x40020000 + 32)))

  // Field NDT: Number of data to transfer
    inline uint32_t DMA1_CNDTR2_NDT (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register CPAR2: channel x peripheral address
          register
  #define DMA1_CPAR2 (* ((volatile uint32_t *) (0x40020000 + 36)))

  // Field PA: Peripheral address
    inline uint32_t DMA1_CPAR2_PA (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register CMAR2: channel x memory address
          register
  #define DMA1_CMAR2 (* ((volatile uint32_t *) (0x40020000 + 40)))

  // Field MA: Memory address
    inline uint32_t DMA1_CMAR2_MA (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register CCR3: channel x configuration
          register
  #define DMA1_CCR3 (* ((volatile uint32_t *) (0x40020000 + 48)))

  // Field MEM2MEM: Memory to memory mode
    const uint32_t DMA1_CCR3_MEM2MEM = 1U << 14 ;

  // Field PL: Channel priority level
    inline uint32_t DMA1_CCR3_PL (const uint32_t inValue) {return (inValue & 0x3U) << 12 ; }

  // Field MSIZE: Memory size
    inline uint32_t DMA1_CCR3_MSIZE (const uint32_t inValue) {return (inValue & 0x3U) << 10 ; }

  // Field PSIZE: Peripheral size
    inline uint32_t DMA1_CCR3_PSIZE (const uint32_t inValue) {return (inValue & 0x3U) << 8 ; }

  // Field MINC: Memory increment mode
    const uint32_t DMA1_CCR3_MINC = 1U << 7 ;

  // Field PINC: Peripheral increment mode
    const uint32_t DMA1_CCR3_PINC = 1U << 6 ;

  // Field CIRC: Circular mode
    const uint32_t DMA1_CCR3_CIRC = 1U << 5 ;

  // Field DIR: Data transfer direction
    const uint32_t DMA1_CCR3_DIR = 1U << 4 ;

  // Field TEIE: Transfer error interrupt enable
    const uint32_t DMA1_CCR3_TEIE = 1U << 3 ;

  // Field HTIE: Half transfer interrupt enable
    const uint32_t DMA1_CCR3_HTIE = 1U << 2 ;

  // Field TCIE: Transfer complete interrupt enable
    const uint32_t DMA1_CCR3_TCIE = 1U << 1 ;

  // Field EN: Channel enable
    const uint32_t DMA1_CCR3_EN = 1U << 0 ;

//---  Register CNDTR3: channel x number of data
          register
  #define DMA1_CNDTR3 (* ((volatile uint32_t *) (0x40020000 + 52)))

  // Field NDT: Number of data to transfer
    inline uint32_t DMA1_CNDTR3_NDT (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register CPAR3: channel x peripheral address
          register
  #define DMA1_CPAR3 (* ((volatile uint32_t *) (0x40020000 + 56)))

  // Field PA: Peripheral address
    inline uint32_t DMA1_CPAR3_PA (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register CMAR3: channel x memory address
          register
  #define DMA1_CMAR3 (* ((volatile uint32_t *) (0x40020000 + 60)))

  // Field MA: Memory address
    inline uint32_t DMA1_CMAR3_MA (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register CCR4: channel x configuration
          register
  #define DMA1_CCR4 (* ((volatile uint32_t *) (0x40020000 + 68)))

  // Field MEM2MEM: Memory to memory mode
    const uint32_t DMA1_CCR4_MEM2MEM = 1U << 14 ;

  // Field PL: Channel priority level
    inline uint32_t DMA1_CCR4_PL (const uint32_t inValue) {return (inValue & 0x3U) << 12 ; }

  // Field MSIZE: Memory size
    inline uint32_t DMA1_CCR4_MSIZE (const uint32_t inValue) {return (inValue & 0x3U) << 10 ; }

  // Field PSIZE: Peripheral size
    inline uint32_t DMA1_CCR4_PSIZE (const uint32_t inValue) {return (inValue & 0x3U) << 8 ; }

  // Field MINC: Memory increment mode
    const uint32_t DMA1_CCR4_MINC = 1U << 7 ;

  // Field PINC: Peripheral increment mode
    const uint32_t DMA1_CCR4_PINC = 1U << 6 ;

  // Field CIRC: Circular mode
    const uint32_t DMA1_CCR4_CIRC = 1U << 5 ;

  // Field DIR: Data transfer direction
    const uint32_t DMA1_CCR4_DIR = 1U << 4 ;

  // Field TEIE: Transfer error interrupt enable
    const uint32_t DMA1_CCR4_TEIE = 1U << 3 ;

  // Field HTIE: Half transfer interrupt enable
    const uint32_t DMA1_CCR4_HTIE = 1U << 2 ;

  // Field TCIE: Transfer complete interrupt enable
    const uint32_t DMA1_CCR4_TCIE = 1U << 1 ;

  // Field EN: Channel enable
    const uint32_t DMA1_CCR4_EN = 1U << 0 ;

//---  Register CNDTR4: channel x number of data
          register
  #define DMA1_CNDTR4 (* ((volatile uint32_t *) (0x40020000 + 72)))

  // Field NDT: Number of data to transfer
    inline uint32_t DMA1_CNDTR4_NDT (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register CPAR4: channel x peripheral address
          register
  #define DMA1_CPAR4 (* ((volatile uint32_t *) (0x40020000 + 76)))

  // Field PA: Peripheral address
    inline uint32_t DMA1_CPAR4_PA (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register CMAR4: channel x memory address
          register
  #define DMA1_CMAR4 (* ((volatile uint32_t *) (0x40020000 + 80)))

  // Field MA: Memory address
    inline uint32_t DMA1_CMAR4_MA (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register CCR5: channel x configuration
          register
  #define DMA1_CCR5 (* ((volatile uint32_t *) (0x40020000 + 88)))

  // Field MEM2MEM: Memory to memory mode
    const uint32_t DMA1_CCR5_MEM2MEM = 1U << 14 ;

  // Field PL: Channel priority level
    inline uint32_t DMA1_CCR5_PL (const uint32_t inValue) {return (inValue & 0x3U) << 12 ; }

  // Field MSIZE: Memory size
    inline uint32_t DMA1_CCR5_MSIZE (const uint32_t inValue) {return (inValue & 0x3U) << 10 ; }

  // Field PSIZE: Peripheral size
    inline uint32_t DMA1_CCR5_PSIZE (const uint32_t inValue) {return (inValue & 0x3U) << 8 ; }

  // Field MINC: Memory increment mode
    const uint32_t DMA1_CCR5_MINC = 1U << 7 ;

  // Field PINC: Peripheral increment mode
    const uint32_t DMA1_CCR5_PINC = 1U << 6 ;

  // Field CIRC: Circular mode
    const uint32_t DMA1_CCR5_CIRC = 1U << 5 ;

  // Field DIR: Data transfer direction
    const uint32_t DMA1_CCR5_DIR = 1U << 4 ;

  // Field TEIE: Transfer error interrupt enable
    const uint32_t DMA1_CCR5_TEIE = 1U << 3 ;

  // Field HTIE: Half transfer interrupt enable
    const uint32_t DMA1_CCR5_HTIE = 1U << 2 ;

  // Field TCIE: Transfer complete interrupt enable
    const uint32_t DMA1_CCR5_TCIE = 1U << 1 ;

  // Field EN: Channel enable
    const uint32_t DMA1_CCR5_EN = 1U << 0 ;

//---  Register CNDTR5: channel x number of data
          register
  #define DMA1_CNDTR5 (* ((volatile uint32_t *) (0x40020000 + 92)))

  // Field NDT: Number of data to transfer
    inline uint32_t DMA1_CNDTR5_NDT (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register CPAR5: channel x peripheral address
          register
  #define DMA1_CPAR5 (* ((volatile uint32_t *) (0x40020000 + 96)))

  // Field PA: Peripheral address
    inline uint32_t DMA1_CPAR5_PA (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register CMAR5: channel x memory address
          register
  #define DMA1_CMAR5 (* ((volatile uint32_t *) (0x40020000 + 100)))

  // Field MA: Memory address
    inline uint32_t DMA1_CMAR5_MA (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register CCR6: channel x configuration
          register
  #define DMA1_CCR6 (* ((volatile uint32_t *) (0x40020000 + 108)))

  // Field MEM2MEM: Memory to memory mode
    const uint32_t DMA1_CCR6_MEM2MEM = 1U << 14 ;

  // Field PL: Channel priority level
    inline uint32_t DMA1_CCR6_PL (const uint32_t inValue) {return (inValue & 0x3U) << 12 ; }

  // Field MSIZE: Memory size
    inline uint32_t DMA1_CCR6_MSIZE (const uint32_t inValue) {return (inValue & 0x3U) << 10 ; }

  // Field PSIZE: Peripheral size
    inline uint32_t DMA1_CCR6_PSIZE (const uint32_t inValue) {return (inValue & 0x3U) << 8 ; }

  // Field MINC: Memory increment mode
    const uint32_t DMA1_CCR6_MINC = 1U << 7 ;

  // Field PINC: Peripheral increment mode
    const uint32_t DMA1_CCR6_PINC = 1U << 6 ;

  // Field CIRC: Circular mode
    const uint32_t DMA1_CCR6_CIRC = 1U << 5 ;

  // Field DIR: Data transfer direction
    const uint32_t DMA1_CCR6_DIR = 1U << 4 ;

  // Field TEIE: Transfer error interrupt enable
    const uint32_t DMA1_CCR6_TEIE = 1U << 3 ;

  // Field HTIE: Half transfer interrupt enable
    const uint32_t DMA1_CCR6_HTIE = 1U << 2 ;

  // Field TCIE: Transfer complete interrupt enable
    const uint32_t DMA1_CCR6_TCIE = 1U << 1 ;

  // Field EN: Channel enable
    const uint32_t DMA1_CCR6_EN = 1U << 0 ;

//---  Register CNDTR6: channel x number of data
          register
  #define DMA1_CNDTR6 (* ((volatile uint32_t *) (0x40020000 + 112)))

  // Field NDT: Number of data to transfer
    inline uint32_t DMA1_CNDTR6_NDT (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register CPAR6: channel x peripheral address
          register
  #define DMA1_CPAR6 (* ((volatile uint32_t *) (0x40020000 + 116)))

  // Field PA: Peripheral address
    inline uint32_t DMA1_CPAR6_PA (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register CMAR6: channel x memory address
          register
  #define DMA1_CMAR6 (* ((volatile uint32_t *) (0x40020000 + 120)))

  // Field MA: Memory address
    inline uint32_t DMA1_CMAR6_MA (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register CCR7: channel x configuration
          register
  #define DMA1_CCR7 (* ((volatile uint32_t *) (0x40020000 + 128)))

  // Field MEM2MEM: Memory to memory mode
    const uint32_t DMA1_CCR7_MEM2MEM = 1U << 14 ;

  // Field PL: Channel priority level
    inline uint32_t DMA1_CCR7_PL (const uint32_t inValue) {return (inValue & 0x3U) << 12 ; }

  // Field MSIZE: Memory size
    inline uint32_t DMA1_CCR7_MSIZE (const uint32_t inValue) {return (inValue & 0x3U) << 10 ; }

  // Field PSIZE: Peripheral size
    inline uint32_t DMA1_CCR7_PSIZE (const uint32_t inValue) {return (inValue & 0x3U) << 8 ; }

  // Field MINC: Memory increment mode
    const uint32_t DMA1_CCR7_MINC = 1U << 7 ;

  // Field PINC: Peripheral increment mode
    const uint32_t DMA1_CCR7_PINC = 1U << 6 ;

  // Field CIRC: Circular mode
    const uint32_t DMA1_CCR7_CIRC = 1U << 5 ;

  // Field DIR: Data transfer direction
    const uint32_t DMA1_CCR7_DIR = 1U << 4 ;

  // Field TEIE: Transfer error interrupt enable
    const uint32_t DMA1_CCR7_TEIE = 1U << 3 ;

  // Field HTIE: Half transfer interrupt enable
    const uint32_t DMA1_CCR7_HTIE = 1U << 2 ;

  // Field TCIE: Transfer complete interrupt enable
    const uint32_t DMA1_CCR7_TCIE = 1U << 1 ;

  // Field EN: Channel enable
    const uint32_t DMA1_CCR7_EN = 1U << 0 ;

//---  Register CNDTR7: channel x number of data
          register
  #define DMA1_CNDTR7 (* ((volatile uint32_t *) (0x40020000 + 132)))

  // Field NDT: Number of data to transfer
    inline uint32_t DMA1_CNDTR7_NDT (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register CPAR7: channel x peripheral address
          register
  #define DMA1_CPAR7 (* ((volatile uint32_t *) (0x40020000 + 136)))

  // Field PA: Peripheral address
    inline uint32_t DMA1_CPAR7_PA (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register CMAR7: channel x memory address
          register
  #define DMA1_CMAR7 (* ((volatile uint32_t *) (0x40020000 + 140)))

  // Field MA: Memory address
    inline uint32_t DMA1_CMAR7_MA (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register CSELR: channel selection register
  #define DMA1_CSELR (* ((volatile uint32_t *) (0x40020000 + 168)))

  // Field C7S: DMA channel 7 selection
    inline uint32_t DMA1_CSELR_C7S (const uint32_t inValue) {return (inValue & 0xfU) << 24 ; }

  // Field C6S: DMA channel 6 selection
    inline uint32_t DMA1_CSELR_C6S (const uint32_t inValue) {return (inValue & 0xfU) << 20 ; }

  // Field C5S: DMA channel 5 selection
    inline uint32_t DMA1_CSELR_C5S (const uint32_t inValue) {return (inValue & 0xfU) << 16 ; }

  // Field C4S: DMA channel 4 selection
    inline uint32_t DMA1_CSELR_C4S (const uint32_t inValue) {return (inValue & 0xfU) << 12 ; }

  // Field C3S: DMA channel 3 selection
    inline uint32_t DMA1_CSELR_C3S (const uint32_t inValue) {return (inValue & 0xfU) << 8 ; }

  // Field C2S: DMA channel 2 selection
    inline uint32_t DMA1_CSELR_C2S (const uint32_t inValue) {return (inValue & 0xfU) << 4 ; }

  // Field C1S: DMA channel 1 selection
    inline uint32_t DMA1_CSELR_C1S (const uint32_t inValue) {return (inValue & 0xfU) << 0 ; }

//------------------------------------------------------------------------------
// Peripheral DMA2
//------------------------------------------------------------------------------

//---  Register ISR: interrupt status register
  #define DMA2_ISR (* ((const volatile uint32_t *) (0x40020400 + 0)))

  // Field TEIF7: Channel x transfer error flag (x = 1 ..7)
    const uint32_t DMA2_ISR_TEIF7 = 1U << 27 ;

  // Field HTIF7: Channel x half transfer flag (x = 1 ..7)
    const uint32_t DMA2_ISR_HTIF7 = 1U << 26 ;

  // Field TCIF7: Channel x transfer complete flag (x = 1 ..7)
    const uint32_t DMA2_ISR_TCIF7 = 1U << 25 ;

  // Field GIF7: Channel x global interrupt flag (x = 1 ..7)
    const uint32_t DMA2_ISR_GIF7 = 1U << 24 ;

  // Field TEIF6: Channel x transfer error flag (x = 1 ..7)
    const uint32_t DMA2_ISR_TEIF6 = 1U << 23 ;

  // Field HTIF6: Channel x half transfer flag (x = 1 ..7)
    const uint32_t DMA2_ISR_HTIF6 = 1U << 22 ;

  // Field TCIF6: Channel x transfer complete flag (x = 1 ..7)
    const uint32_t DMA2_ISR_TCIF6 = 1U << 21 ;

  // Field GIF6: Channel x global interrupt flag (x = 1 ..7)
    const uint32_t DMA2_ISR_GIF6 = 1U << 20 ;

  // Field TEIF5: Channel x transfer error flag (x = 1 ..7)
    const uint32_t DMA2_ISR_TEIF5 = 1U << 19 ;

  // Field HTIF5: Channel x half transfer flag (x = 1 ..7)
    const uint32_t DMA2_ISR_HTIF5 = 1U << 18 ;

  // Field TCIF5: Channel x transfer complete flag (x = 1 ..7)
    const uint32_t DMA2_ISR_TCIF5 = 1U << 17 ;

  // Field GIF5: Channel x global interrupt flag (x = 1 ..7)
    const uint32_t DMA2_ISR_GIF5 = 1U << 16 ;

  // Field TEIF4: Channel x transfer error flag (x = 1 ..7)
    const uint32_t DMA2_ISR_TEIF4 = 1U << 15 ;

  // Field HTIF4: Channel x half transfer flag (x = 1 ..7)
    const uint32_t DMA2_ISR_HTIF4 = 1U << 14 ;

  // Field TCIF4: Channel x transfer complete flag (x = 1 ..7)
    const uint32_t DMA2_ISR_TCIF4 = 1U << 13 ;

  // Field GIF4: Channel x global interrupt flag (x = 1 ..7)
    const uint32_t DMA2_ISR_GIF4 = 1U << 12 ;

  // Field TEIF3: Channel x transfer error flag (x = 1 ..7)
    const uint32_t DMA2_ISR_TEIF3 = 1U << 11 ;

  // Field HTIF3: Channel x half transfer flag (x = 1 ..7)
    const uint32_t DMA2_ISR_HTIF3 = 1U << 10 ;

  // Field TCIF3: Channel x transfer complete flag (x = 1 ..7)
    const uint32_t DMA2_ISR_TCIF3 = 1U << 9 ;

  // Field GIF3: Channel x global interrupt flag (x = 1 ..7)
    const uint32_t DMA2_ISR_GIF3 = 1U << 8 ;

  // Field TEIF2: Channel x transfer error flag (x = 1 ..7)
    const uint32_t DMA2_ISR_TEIF2 = 1U << 7 ;

  // Field HTIF2: Channel x half transfer flag (x = 1 ..7)
    const uint32_t DMA2_ISR_HTIF2 = 1U << 6 ;

  // Field TCIF2: Channel x transfer complete flag (x = 1 ..7)
    const uint32_t DMA2_ISR_TCIF2 = 1U << 5 ;

  // Field GIF2: Channel x global interrupt flag (x = 1 ..7)
    const uint32_t DMA2_ISR_GIF2 = 1U << 4 ;

  // Field TEIF1: Channel x transfer error flag (x = 1 ..7)
    const uint32_t DMA2_ISR_TEIF1 = 1U << 3 ;

  // Field HTIF1: Channel x half transfer flag (x = 1 ..7)
    const uint32_t DMA2_ISR_HTIF1 = 1U << 2 ;

  // Field TCIF1: Channel x transfer complete flag (x = 1 ..7)
    const uint32_t DMA2_ISR_TCIF1 = 1U << 1 ;

  // Field GIF1: Channel x global interrupt flag (x = 1 ..7)
    const uint32_t DMA2_ISR_GIF1 = 1U << 0 ;

//---  Register IFCR: interrupt flag clear register
  #define DMA2_IFCR (* ((volatile uint32_t *) (0x40020400 + 4)))

  // Field CTEIF7: Channel x transfer error clear (x = 1 ..7)
    const uint32_t DMA2_IFCR_CTEIF7 = 1U << 27 ;

  // Field CHTIF7: Channel x half transfer clear (x = 1 ..7)
    const uint32_t DMA2_IFCR_CHTIF7 = 1U << 26 ;

  // Field CTCIF7: Channel x transfer complete clear (x = 1 ..7)
    const uint32_t DMA2_IFCR_CTCIF7 = 1U << 25 ;

  // Field CGIF7: Channel x global interrupt clear (x = 1 ..7)
    const uint32_t DMA2_IFCR_CGIF7 = 1U << 24 ;

  // Field CTEIF6: Channel x transfer error clear (x = 1 ..7)
    const uint32_t DMA2_IFCR_CTEIF6 = 1U << 23 ;

  // Field CHTIF6: Channel x half transfer clear (x = 1 ..7)
    const uint32_t DMA2_IFCR_CHTIF6 = 1U << 22 ;

  // Field CTCIF6: Channel x transfer complete clear (x = 1 ..7)
    const uint32_t DMA2_IFCR_CTCIF6 = 1U << 21 ;

  // Field CGIF6: Channel x global interrupt clear (x = 1 ..7)
    const uint32_t DMA2_IFCR_CGIF6 = 1U << 20 ;

  // Field CTEIF5: Channel x transfer error clear (x = 1 ..7)
    const uint32_t DMA2_IFCR_CTEIF5 = 1U << 19 ;

  // Field CHTIF5: Channel x half transfer clear (x = 1 ..7)
    const uint32_t DMA2_IFCR_CHTIF5 = 1U << 18 ;

  // Field CTCIF5: Channel x transfer complete clear (x = 1 ..7)
    const uint32_t DMA2_IFCR_CTCIF5 = 1U << 17 ;

  // Field CGIF5: Channel x global interrupt clear (x = 1 ..7)
    const uint32_t DMA2_IFCR_CGIF5 = 1U << 16 ;

  // Field CTEIF4: Channel x transfer error clear (x = 1 ..7)
    const uint32_t DMA2_IFCR_CTEIF4 = 1U << 15 ;

  // Field CHTIF4: Channel x half transfer clear (x = 1 ..7)
    const uint32_t DMA2_IFCR_CHTIF4 = 1U << 14 ;

  // Field CTCIF4: Channel x transfer complete clear (x = 1 ..7)
    const uint32_t DMA2_IFCR_CTCIF4 = 1U << 13 ;

  // Field CGIF4: Channel x global interrupt clear (x = 1 ..7)
    const uint32_t DMA2_IFCR_CGIF4 = 1U << 12 ;

  // Field CTEIF3: Channel x transfer error clear (x = 1 ..7)
    const uint32_t DMA2_IFCR_CTEIF3 = 1U << 11 ;

  // Field CHTIF3: Channel x half transfer clear (x = 1 ..7)
    const uint32_t DMA2_IFCR_CHTIF3 = 1U << 10 ;

  // Field CTCIF3: Channel x transfer complete clear (x = 1 ..7)
    const uint32_t DMA2_IFCR_CTCIF3 = 1U << 9 ;

  // Field CGIF3: Channel x global interrupt clear (x = 1 ..7)
    const uint32_t DMA2_IFCR_CGIF3 = 1U << 8 ;

  // Field CTEIF2: Channel x transfer error clear (x = 1 ..7)
    const uint32_t DMA2_IFCR_CTEIF2 = 1U << 7 ;

  // Field CHTIF2: Channel x half transfer clear (x = 1 ..7)
    const uint32_t DMA2_IFCR_CHTIF2 = 1U << 6 ;

  // Field CTCIF2: Channel x transfer complete clear (x = 1 ..7)
    const uint32_t DMA2_IFCR_CTCIF2 = 1U << 5 ;

  // Field CGIF2: Channel x global interrupt clear (x = 1 ..7)
    const uint32_t DMA2_IFCR_CGIF2 = 1U << 4 ;

  // Field CTEIF1: Channel x transfer error clear (x = 1 ..7)
    const uint32_t DMA2_IFCR_CTEIF1 = 1U << 3 ;

  // Field CHTIF1: Channel x half transfer clear (x = 1 ..7)
    const uint32_t DMA2_IFCR_CHTIF1 = 1U << 2 ;

  // Field CTCIF1: Channel x transfer complete clear (x = 1 ..7)
    const uint32_t DMA2_IFCR_CTCIF1 = 1U << 1 ;

  // Field CGIF1: Channel x global interrupt clear (x = 1 ..7)
    const uint32_t DMA2_IFCR_CGIF1 = 1U << 0 ;

//---  Register CCR1: channel x configuration
          register
  #define DMA2_CCR1 (* ((volatile uint32_t *) (0x40020400 + 8)))

  // Field MEM2MEM: Memory to memory mode
    const uint32_t DMA2_CCR1_MEM2MEM = 1U << 14 ;

  // Field PL: Channel priority level
    inline uint32_t DMA2_CCR1_PL (const uint32_t inValue) {return (inValue & 0x3U) << 12 ; }

  // Field MSIZE: Memory size
    inline uint32_t DMA2_CCR1_MSIZE (const uint32_t inValue) {return (inValue & 0x3U) << 10 ; }

  // Field PSIZE: Peripheral size
    inline uint32_t DMA2_CCR1_PSIZE (const uint32_t inValue) {return (inValue & 0x3U) << 8 ; }

  // Field MINC: Memory increment mode
    const uint32_t DMA2_CCR1_MINC = 1U << 7 ;

  // Field PINC: Peripheral increment mode
    const uint32_t DMA2_CCR1_PINC = 1U << 6 ;

  // Field CIRC: Circular mode
    const uint32_t DMA2_CCR1_CIRC = 1U << 5 ;

  // Field DIR: Data transfer direction
    const uint32_t DMA2_CCR1_DIR = 1U << 4 ;

  // Field TEIE: Transfer error interrupt enable
    const uint32_t DMA2_CCR1_TEIE = 1U << 3 ;

  // Field HTIE: Half transfer interrupt enable
    const uint32_t DMA2_CCR1_HTIE = 1U << 2 ;

  // Field TCIE: Transfer complete interrupt enable
    const uint32_t DMA2_CCR1_TCIE = 1U << 1 ;

  // Field EN: Channel enable
    const uint32_t DMA2_CCR1_EN = 1U << 0 ;

//---  Register CNDTR1: channel x number of data
          register
  #define DMA2_CNDTR1 (* ((volatile uint32_t *) (0x40020400 + 12)))

  // Field NDT: Number of data to transfer
    inline uint32_t DMA2_CNDTR1_NDT (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register CPAR1: channel x peripheral address
          register
  #define DMA2_CPAR1 (* ((volatile uint32_t *) (0x40020400 + 16)))

  // Field PA: Peripheral address
    inline uint32_t DMA2_CPAR1_PA (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register CMAR1: channel x memory address
          register
  #define DMA2_CMAR1 (* ((volatile uint32_t *) (0x40020400 + 20)))

  // Field MA: Memory address
    inline uint32_t DMA2_CMAR1_MA (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register CCR2: channel x configuration
          register
  #define DMA2_CCR2 (* ((volatile uint32_t *) (0x40020400 + 28)))

  // Field MEM2MEM: Memory to memory mode
    const uint32_t DMA2_CCR2_MEM2MEM = 1U << 14 ;

  // Field PL: Channel priority level
    inline uint32_t DMA2_CCR2_PL (const uint32_t inValue) {return (inValue & 0x3U) << 12 ; }

  // Field MSIZE: Memory size
    inline uint32_t DMA2_CCR2_MSIZE (const uint32_t inValue) {return (inValue & 0x3U) << 10 ; }

  // Field PSIZE: Peripheral size
    inline uint32_t DMA2_CCR2_PSIZE (const uint32_t inValue) {return (inValue & 0x3U) << 8 ; }

  // Field MINC: Memory increment mode
    const uint32_t DMA2_CCR2_MINC = 1U << 7 ;

  // Field PINC: Peripheral increment mode
    const uint32_t DMA2_CCR2_PINC = 1U << 6 ;

  // Field CIRC: Circular mode
    const uint32_t DMA2_CCR2_CIRC = 1U << 5 ;

  // Field DIR: Data transfer direction
    const uint32_t DMA2_CCR2_DIR = 1U << 4 ;

  // Field TEIE: Transfer error interrupt enable
    const uint32_t DMA2_CCR2_TEIE = 1U << 3 ;

  // Field HTIE: Half transfer interrupt enable
    const uint32_t DMA2_CCR2_HTIE = 1U << 2 ;

  // Field TCIE: Transfer complete interrupt enable
    const uint32_t DMA2_CCR2_TCIE = 1U << 1 ;

  // Field EN: Channel enable
    const uint32_t DMA2_CCR2_EN = 1U << 0 ;

//---  Register CNDTR2: channel x number of data
          register
  #define DMA2_CNDTR2 (* ((volatile uint32_t *) (0x40020400 + 32)))

  // Field NDT: Number of data to transfer
    inline uint32_t DMA2_CNDTR2_NDT (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register CPAR2: channel x peripheral address
          register
  #define DMA2_CPAR2 (* ((volatile uint32_t *) (0x40020400 + 36)))

  // Field PA: Peripheral address
    inline uint32_t DMA2_CPAR2_PA (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register CMAR2: channel x memory address
          register
  #define DMA2_CMAR2 (* ((volatile uint32_t *) (0x40020400 + 40)))

  // Field MA: Memory address
    inline uint32_t DMA2_CMAR2_MA (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register CCR3: channel x configuration
          register
  #define DMA2_CCR3 (* ((volatile uint32_t *) (0x40020400 + 48)))

  // Field MEM2MEM: Memory to memory mode
    const uint32_t DMA2_CCR3_MEM2MEM = 1U << 14 ;

  // Field PL: Channel priority level
    inline uint32_t DMA2_CCR3_PL (const uint32_t inValue) {return (inValue & 0x3U) << 12 ; }

  // Field MSIZE: Memory size
    inline uint32_t DMA2_CCR3_MSIZE (const uint32_t inValue) {return (inValue & 0x3U) << 10 ; }

  // Field PSIZE: Peripheral size
    inline uint32_t DMA2_CCR3_PSIZE (const uint32_t inValue) {return (inValue & 0x3U) << 8 ; }

  // Field MINC: Memory increment mode
    const uint32_t DMA2_CCR3_MINC = 1U << 7 ;

  // Field PINC: Peripheral increment mode
    const uint32_t DMA2_CCR3_PINC = 1U << 6 ;

  // Field CIRC: Circular mode
    const uint32_t DMA2_CCR3_CIRC = 1U << 5 ;

  // Field DIR: Data transfer direction
    const uint32_t DMA2_CCR3_DIR = 1U << 4 ;

  // Field TEIE: Transfer error interrupt enable
    const uint32_t DMA2_CCR3_TEIE = 1U << 3 ;

  // Field HTIE: Half transfer interrupt enable
    const uint32_t DMA2_CCR3_HTIE = 1U << 2 ;

  // Field TCIE: Transfer complete interrupt enable
    const uint32_t DMA2_CCR3_TCIE = 1U << 1 ;

  // Field EN: Channel enable
    const uint32_t DMA2_CCR3_EN = 1U << 0 ;

//---  Register CNDTR3: channel x number of data
          register
  #define DMA2_CNDTR3 (* ((volatile uint32_t *) (0x40020400 + 52)))

  // Field NDT: Number of data to transfer
    inline uint32_t DMA2_CNDTR3_NDT (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register CPAR3: channel x peripheral address
          register
  #define DMA2_CPAR3 (* ((volatile uint32_t *) (0x40020400 + 56)))

  // Field PA: Peripheral address
    inline uint32_t DMA2_CPAR3_PA (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register CMAR3: channel x memory address
          register
  #define DMA2_CMAR3 (* ((volatile uint32_t *) (0x40020400 + 60)))

  // Field MA: Memory address
    inline uint32_t DMA2_CMAR3_MA (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register CCR4: channel x configuration
          register
  #define DMA2_CCR4 (* ((volatile uint32_t *) (0x40020400 + 68)))

  // Field MEM2MEM: Memory to memory mode
    const uint32_t DMA2_CCR4_MEM2MEM = 1U << 14 ;

  // Field PL: Channel priority level
    inline uint32_t DMA2_CCR4_PL (const uint32_t inValue) {return (inValue & 0x3U) << 12 ; }

  // Field MSIZE: Memory size
    inline uint32_t DMA2_CCR4_MSIZE (const uint32_t inValue) {return (inValue & 0x3U) << 10 ; }

  // Field PSIZE: Peripheral size
    inline uint32_t DMA2_CCR4_PSIZE (const uint32_t inValue) {return (inValue & 0x3U) << 8 ; }

  // Field MINC: Memory increment mode
    const uint32_t DMA2_CCR4_MINC = 1U << 7 ;

  // Field PINC: Peripheral increment mode
    const uint32_t DMA2_CCR4_PINC = 1U << 6 ;

  // Field CIRC: Circular mode
    const uint32_t DMA2_CCR4_CIRC = 1U << 5 ;

  // Field DIR: Data transfer direction
    const uint32_t DMA2_CCR4_DIR = 1U << 4 ;

  // Field TEIE: Transfer error interrupt enable
    const uint32_t DMA2_CCR4_TEIE = 1U << 3 ;

  // Field HTIE: Half transfer interrupt enable
    const uint32_t DMA2_CCR4_HTIE = 1U << 2 ;

  // Field TCIE: Transfer complete interrupt enable
    const uint32_t DMA2_CCR4_TCIE = 1U << 1 ;

  // Field EN: Channel enable
    const uint32_t DMA2_CCR4_EN = 1U << 0 ;

//---  Register CNDTR4: channel x number of data
          register
  #define DMA2_CNDTR4 (* ((volatile uint32_t *) (0x40020400 + 72)))

  // Field NDT: Number of data to transfer
    inline uint32_t DMA2_CNDTR4_NDT (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register CPAR4: channel x peripheral address
          register
  #define DMA2_CPAR4 (* ((volatile uint32_t *) (0x40020400 + 76)))

  // Field PA: Peripheral address
    inline uint32_t DMA2_CPAR4_PA (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register CMAR4: channel x memory address
          register
  #define DMA2_CMAR4 (* ((volatile uint32_t *) (0x40020400 + 80)))

  // Field MA: Memory address
    inline uint32_t DMA2_CMAR4_MA (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register CCR5: channel x configuration
          register
  #define DMA2_CCR5 (* ((volatile uint32_t *) (0x40020400 + 88)))

  // Field MEM2MEM: Memory to memory mode
    const uint32_t DMA2_CCR5_MEM2MEM = 1U << 14 ;

  // Field PL: Channel priority level
    inline uint32_t DMA2_CCR5_PL (const uint32_t inValue) {return (inValue & 0x3U) << 12 ; }

  // Field MSIZE: Memory size
    inline uint32_t DMA2_CCR5_MSIZE (const uint32_t inValue) {return (inValue & 0x3U) << 10 ; }

  // Field PSIZE: Peripheral size
    inline uint32_t DMA2_CCR5_PSIZE (const uint32_t inValue) {return (inValue & 0x3U) << 8 ; }

  // Field MINC: Memory increment mode
    const uint32_t DMA2_CCR5_MINC = 1U << 7 ;

  // Field PINC: Peripheral increment mode
    const uint32_t DMA2_CCR5_PINC = 1U << 6 ;

  // Field CIRC: Circular mode
    const uint32_t DMA2_CCR5_CIRC = 1U << 5 ;

  // Field DIR: Data transfer direction
    const uint32_t DMA2_CCR5_DIR = 1U << 4 ;

  // Field TEIE: Transfer error interrupt enable
    const uint32_t DMA2_CCR5_TEIE = 1U << 3 ;

  // Field HTIE: Half transfer interrupt enable
    const uint32_t DMA2_CCR5_HTIE = 1U << 2 ;

  // Field TCIE: Transfer complete interrupt enable
    const uint32_t DMA2_CCR5_TCIE = 1U << 1 ;

  // Field EN: Channel enable
    const uint32_t DMA2_CCR5_EN = 1U << 0 ;

//---  Register CNDTR5: channel x number of data
          register
  #define DMA2_CNDTR5 (* ((volatile uint32_t *) (0x40020400 + 92)))

  // Field NDT: Number of data to transfer
    inline uint32_t DMA2_CNDTR5_NDT (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register CPAR5: channel x peripheral address
          register
  #define DMA2_CPAR5 (* ((volatile uint32_t *) (0x40020400 + 96)))

  // Field PA: Peripheral address
    inline uint32_t DMA2_CPAR5_PA (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register CMAR5: channel x memory address
          register
  #define DMA2_CMAR5 (* ((volatile uint32_t *) (0x40020400 + 100)))

  // Field MA: Memory address
    inline uint32_t DMA2_CMAR5_MA (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register CCR6: channel x configuration
          register
  #define DMA2_CCR6 (* ((volatile uint32_t *) (0x40020400 + 108)))

  // Field MEM2MEM: Memory to memory mode
    const uint32_t DMA2_CCR6_MEM2MEM = 1U << 14 ;

  // Field PL: Channel priority level
    inline uint32_t DMA2_CCR6_PL (const uint32_t inValue) {return (inValue & 0x3U) << 12 ; }

  // Field MSIZE: Memory size
    inline uint32_t DMA2_CCR6_MSIZE (const uint32_t inValue) {return (inValue & 0x3U) << 10 ; }

  // Field PSIZE: Peripheral size
    inline uint32_t DMA2_CCR6_PSIZE (const uint32_t inValue) {return (inValue & 0x3U) << 8 ; }

  // Field MINC: Memory increment mode
    const uint32_t DMA2_CCR6_MINC = 1U << 7 ;

  // Field PINC: Peripheral increment mode
    const uint32_t DMA2_CCR6_PINC = 1U << 6 ;

  // Field CIRC: Circular mode
    const uint32_t DMA2_CCR6_CIRC = 1U << 5 ;

  // Field DIR: Data transfer direction
    const uint32_t DMA2_CCR6_DIR = 1U << 4 ;

  // Field TEIE: Transfer error interrupt enable
    const uint32_t DMA2_CCR6_TEIE = 1U << 3 ;

  // Field HTIE: Half transfer interrupt enable
    const uint32_t DMA2_CCR6_HTIE = 1U << 2 ;

  // Field TCIE: Transfer complete interrupt enable
    const uint32_t DMA2_CCR6_TCIE = 1U << 1 ;

  // Field EN: Channel enable
    const uint32_t DMA2_CCR6_EN = 1U << 0 ;

//---  Register CNDTR6: channel x number of data
          register
  #define DMA2_CNDTR6 (* ((volatile uint32_t *) (0x40020400 + 112)))

  // Field NDT: Number of data to transfer
    inline uint32_t DMA2_CNDTR6_NDT (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register CPAR6: channel x peripheral address
          register
  #define DMA2_CPAR6 (* ((volatile uint32_t *) (0x40020400 + 116)))

  // Field PA: Peripheral address
    inline uint32_t DMA2_CPAR6_PA (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register CMAR6: channel x memory address
          register
  #define DMA2_CMAR6 (* ((volatile uint32_t *) (0x40020400 + 120)))

  // Field MA: Memory address
    inline uint32_t DMA2_CMAR6_MA (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register CCR7: channel x configuration
          register
  #define DMA2_CCR7 (* ((volatile uint32_t *) (0x40020400 + 128)))

  // Field MEM2MEM: Memory to memory mode
    const uint32_t DMA2_CCR7_MEM2MEM = 1U << 14 ;

  // Field PL: Channel priority level
    inline uint32_t DMA2_CCR7_PL (const uint32_t inValue) {return (inValue & 0x3U) << 12 ; }

  // Field MSIZE: Memory size
    inline uint32_t DMA2_CCR7_MSIZE (const uint32_t inValue) {return (inValue & 0x3U) << 10 ; }

  // Field PSIZE: Peripheral size
    inline uint32_t DMA2_CCR7_PSIZE (const uint32_t inValue) {return (inValue & 0x3U) << 8 ; }

  // Field MINC: Memory increment mode
    const uint32_t DMA2_CCR7_MINC = 1U << 7 ;

  // Field PINC: Peripheral increment mode
    const uint32_t DMA2_CCR7_PINC = 1U << 6 ;

  // Field CIRC: Circular mode
    const uint32_t DMA2_CCR7_CIRC = 1U << 5 ;

  // Field DIR: Data transfer direction
    const uint32_t DMA2_CCR7_DIR = 1U << 4 ;

  // Field TEIE: Transfer error interrupt enable
    const uint32_t DMA2_CCR7_TEIE = 1U << 3 ;

  // Field HTIE: Half transfer interrupt enable
    const uint32_t DMA2_CCR7_HTIE = 1U << 2 ;

  // Field TCIE: Transfer complete interrupt enable
    const uint32_t DMA2_CCR7_TCIE = 1U << 1 ;

  // Field EN: Channel enable
    const uint32_t DMA2_CCR7_EN = 1U << 0 ;

//---  Register CNDTR7: channel x number of data
          register
  #define DMA2_CNDTR7 (* ((volatile uint32_t *) (0x40020400 + 132)))

  // Field NDT: Number of data to transfer
    inline uint32_t DMA2_CNDTR7_NDT (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register CPAR7: channel x peripheral address
          register
  #define DMA2_CPAR7 (* ((volatile uint32_t *) (0x40020400 + 136)))

  // Field PA: Peripheral address
    inline uint32_t DMA2_CPAR7_PA (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register CMAR7: channel x memory address
          register
  #define DMA2_CMAR7 (* ((volatile uint32_t *) (0x40020400 + 140)))

  // Field MA: Memory address
    inline uint32_t DMA2_CMAR7_MA (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register CSELR: channel selection register
  #define DMA2_CSELR (* ((volatile uint32_t *) (0x40020400 + 168)))

  // Field C7S: DMA channel 7 selection
    inline uint32_t DMA2_CSELR_C7S (const uint32_t inValue) {return (inValue & 0xfU) << 24 ; }

  // Field C6S: DMA channel 6 selection
    inline uint32_t DMA2_CSELR_C6S (const uint32_t inValue) {return (inValue & 0xfU) << 20 ; }

  // Field C5S: DMA channel 5 selection
    inline uint32_t DMA2_CSELR_C5S (const uint32_t inValue) {return (inValue & 0xfU) << 16 ; }

  // Field C4S: DMA channel 4 selection
    inline uint32_t DMA2_CSELR_C4S (const uint32_t inValue) {return (inValue & 0xfU) << 12 ; }

  // Field C3S: DMA channel 3 selection
    inline uint32_t DMA2_CSELR_C3S (const uint32_t inValue) {return (inValue & 0xfU) << 8 ; }

  // Field C2S: DMA channel 2 selection
    inline uint32_t DMA2_CSELR_C2S (const uint32_t inValue) {return (inValue & 0xfU) << 4 ; }

  // Field C1S: DMA channel 1 selection
    inline uint32_t DMA2_CSELR_C1S (const uint32_t inValue) {return (inValue & 0xfU) << 0 ; }

//------------------------------------------------------------------------------
// Peripheral EXTI: External interrupt/event       controller
//------------------------------------------------------------------------------

//---  Register IMR1: Interrupt mask register
  #define EXTI_IMR1 (* ((volatile uint32_t *) (0x40010400 + 0)))

  // Field MR0: Interrupt Mask on line 0
    const uint32_t EXTI_IMR1_MR0 = 1U << 0 ;

  // Field MR1: Interrupt Mask on line 1
    const uint32_t EXTI_IMR1_MR1 = 1U << 1 ;

  // Field MR2: Interrupt Mask on line 2
    const uint32_t EXTI_IMR1_MR2 = 1U << 2 ;

  // Field MR3: Interrupt Mask on line 3
    const uint32_t EXTI_IMR1_MR3 = 1U << 3 ;

  // Field MR4: Interrupt Mask on line 4
    const uint32_t EXTI_IMR1_MR4 = 1U << 4 ;

  // Field MR5: Interrupt Mask on line 5
    const uint32_t EXTI_IMR1_MR5 = 1U << 5 ;

  // Field MR6: Interrupt Mask on line 6
    const uint32_t EXTI_IMR1_MR6 = 1U << 6 ;

  // Field MR7: Interrupt Mask on line 7
    const uint32_t EXTI_IMR1_MR7 = 1U << 7 ;

  // Field MR8: Interrupt Mask on line 8
    const uint32_t EXTI_IMR1_MR8 = 1U << 8 ;

  // Field MR9: Interrupt Mask on line 9
    const uint32_t EXTI_IMR1_MR9 = 1U << 9 ;

  // Field MR10: Interrupt Mask on line 10
    const uint32_t EXTI_IMR1_MR10 = 1U << 10 ;

  // Field MR11: Interrupt Mask on line 11
    const uint32_t EXTI_IMR1_MR11 = 1U << 11 ;

  // Field MR12: Interrupt Mask on line 12
    const uint32_t EXTI_IMR1_MR12 = 1U << 12 ;

  // Field MR13: Interrupt Mask on line 13
    const uint32_t EXTI_IMR1_MR13 = 1U << 13 ;

  // Field MR14: Interrupt Mask on line 14
    const uint32_t EXTI_IMR1_MR14 = 1U << 14 ;

  // Field MR15: Interrupt Mask on line 15
    const uint32_t EXTI_IMR1_MR15 = 1U << 15 ;

  // Field MR16: Interrupt Mask on line 16
    const uint32_t EXTI_IMR1_MR16 = 1U << 16 ;

  // Field MR17: Interrupt Mask on line 17
    const uint32_t EXTI_IMR1_MR17 = 1U << 17 ;

  // Field MR18: Interrupt Mask on line 18
    const uint32_t EXTI_IMR1_MR18 = 1U << 18 ;

  // Field MR19: Interrupt Mask on line 19
    const uint32_t EXTI_IMR1_MR19 = 1U << 19 ;

  // Field MR20: Interrupt Mask on line 20
    const uint32_t EXTI_IMR1_MR20 = 1U << 20 ;

  // Field MR21: Interrupt Mask on line 21
    const uint32_t EXTI_IMR1_MR21 = 1U << 21 ;

  // Field MR22: Interrupt Mask on line 22
    const uint32_t EXTI_IMR1_MR22 = 1U << 22 ;

  // Field MR23: Interrupt Mask on line 23
    const uint32_t EXTI_IMR1_MR23 = 1U << 23 ;

  // Field MR24: Interrupt Mask on line 24
    const uint32_t EXTI_IMR1_MR24 = 1U << 24 ;

  // Field MR25: Interrupt Mask on line 25
    const uint32_t EXTI_IMR1_MR25 = 1U << 25 ;

  // Field MR26: Interrupt Mask on line 26
    const uint32_t EXTI_IMR1_MR26 = 1U << 26 ;

  // Field MR27: Interrupt Mask on line 27
    const uint32_t EXTI_IMR1_MR27 = 1U << 27 ;

  // Field MR28: Interrupt Mask on line 28
    const uint32_t EXTI_IMR1_MR28 = 1U << 28 ;

  // Field MR29: Interrupt Mask on line 29
    const uint32_t EXTI_IMR1_MR29 = 1U << 29 ;

  // Field MR30: Interrupt Mask on line 30
    const uint32_t EXTI_IMR1_MR30 = 1U << 30 ;

  // Field MR31: Interrupt Mask on line 31
    const uint32_t EXTI_IMR1_MR31 = 1U << 31 ;

//---  Register EMR1: Event mask register
  #define EXTI_EMR1 (* ((volatile uint32_t *) (0x40010400 + 4)))

  // Field MR0: Event Mask on line 0
    const uint32_t EXTI_EMR1_MR0 = 1U << 0 ;

  // Field MR1: Event Mask on line 1
    const uint32_t EXTI_EMR1_MR1 = 1U << 1 ;

  // Field MR2: Event Mask on line 2
    const uint32_t EXTI_EMR1_MR2 = 1U << 2 ;

  // Field MR3: Event Mask on line 3
    const uint32_t EXTI_EMR1_MR3 = 1U << 3 ;

  // Field MR4: Event Mask on line 4
    const uint32_t EXTI_EMR1_MR4 = 1U << 4 ;

  // Field MR5: Event Mask on line 5
    const uint32_t EXTI_EMR1_MR5 = 1U << 5 ;

  // Field MR6: Event Mask on line 6
    const uint32_t EXTI_EMR1_MR6 = 1U << 6 ;

  // Field MR7: Event Mask on line 7
    const uint32_t EXTI_EMR1_MR7 = 1U << 7 ;

  // Field MR8: Event Mask on line 8
    const uint32_t EXTI_EMR1_MR8 = 1U << 8 ;

  // Field MR9: Event Mask on line 9
    const uint32_t EXTI_EMR1_MR9 = 1U << 9 ;

  // Field MR10: Event Mask on line 10
    const uint32_t EXTI_EMR1_MR10 = 1U << 10 ;

  // Field MR11: Event Mask on line 11
    const uint32_t EXTI_EMR1_MR11 = 1U << 11 ;

  // Field MR12: Event Mask on line 12
    const uint32_t EXTI_EMR1_MR12 = 1U << 12 ;

  // Field MR13: Event Mask on line 13
    const uint32_t EXTI_EMR1_MR13 = 1U << 13 ;

  // Field MR14: Event Mask on line 14
    const uint32_t EXTI_EMR1_MR14 = 1U << 14 ;

  // Field MR15: Event Mask on line 15
    const uint32_t EXTI_EMR1_MR15 = 1U << 15 ;

  // Field MR16: Event Mask on line 16
    const uint32_t EXTI_EMR1_MR16 = 1U << 16 ;

  // Field MR17: Event Mask on line 17
    const uint32_t EXTI_EMR1_MR17 = 1U << 17 ;

  // Field MR18: Event Mask on line 18
    const uint32_t EXTI_EMR1_MR18 = 1U << 18 ;

  // Field MR19: Event Mask on line 19
    const uint32_t EXTI_EMR1_MR19 = 1U << 19 ;

  // Field MR20: Event Mask on line 20
    const uint32_t EXTI_EMR1_MR20 = 1U << 20 ;

  // Field MR21: Event Mask on line 21
    const uint32_t EXTI_EMR1_MR21 = 1U << 21 ;

  // Field MR22: Event Mask on line 22
    const uint32_t EXTI_EMR1_MR22 = 1U << 22 ;

  // Field MR23: Event Mask on line 23
    const uint32_t EXTI_EMR1_MR23 = 1U << 23 ;

  // Field MR24: Event Mask on line 24
    const uint32_t EXTI_EMR1_MR24 = 1U << 24 ;

  // Field MR25: Event Mask on line 25
    const uint32_t EXTI_EMR1_MR25 = 1U << 25 ;

  // Field MR26: Event Mask on line 26
    const uint32_t EXTI_EMR1_MR26 = 1U << 26 ;

  // Field MR27: Event Mask on line 27
    const uint32_t EXTI_EMR1_MR27 = 1U << 27 ;

  // Field MR28: Event Mask on line 28
    const uint32_t EXTI_EMR1_MR28 = 1U << 28 ;

  // Field MR29: Event Mask on line 29
    const uint32_t EXTI_EMR1_MR29 = 1U << 29 ;

  // Field MR30: Event Mask on line 30
    const uint32_t EXTI_EMR1_MR30 = 1U << 30 ;

  // Field MR31: Event Mask on line 31
    const uint32_t EXTI_EMR1_MR31 = 1U << 31 ;

//---  Register RTSR1: Rising Trigger selection
          register
  #define EXTI_RTSR1 (* ((volatile uint32_t *) (0x40010400 + 8)))

  // Field TR0: Rising trigger event configuration of line 0
    const uint32_t EXTI_RTSR1_TR0 = 1U << 0 ;

  // Field TR1: Rising trigger event configuration of line 1
    const uint32_t EXTI_RTSR1_TR1 = 1U << 1 ;

  // Field TR2: Rising trigger event configuration of line 2
    const uint32_t EXTI_RTSR1_TR2 = 1U << 2 ;

  // Field TR3: Rising trigger event configuration of line 3
    const uint32_t EXTI_RTSR1_TR3 = 1U << 3 ;

  // Field TR4: Rising trigger event configuration of line 4
    const uint32_t EXTI_RTSR1_TR4 = 1U << 4 ;

  // Field TR5: Rising trigger event configuration of line 5
    const uint32_t EXTI_RTSR1_TR5 = 1U << 5 ;

  // Field TR6: Rising trigger event configuration of line 6
    const uint32_t EXTI_RTSR1_TR6 = 1U << 6 ;

  // Field TR7: Rising trigger event configuration of line 7
    const uint32_t EXTI_RTSR1_TR7 = 1U << 7 ;

  // Field TR8: Rising trigger event configuration of line 8
    const uint32_t EXTI_RTSR1_TR8 = 1U << 8 ;

  // Field TR9: Rising trigger event configuration of line 9
    const uint32_t EXTI_RTSR1_TR9 = 1U << 9 ;

  // Field TR10: Rising trigger event configuration of line 10
    const uint32_t EXTI_RTSR1_TR10 = 1U << 10 ;

  // Field TR11: Rising trigger event configuration of line 11
    const uint32_t EXTI_RTSR1_TR11 = 1U << 11 ;

  // Field TR12: Rising trigger event configuration of line 12
    const uint32_t EXTI_RTSR1_TR12 = 1U << 12 ;

  // Field TR13: Rising trigger event configuration of line 13
    const uint32_t EXTI_RTSR1_TR13 = 1U << 13 ;

  // Field TR14: Rising trigger event configuration of line 14
    const uint32_t EXTI_RTSR1_TR14 = 1U << 14 ;

  // Field TR15: Rising trigger event configuration of line 15
    const uint32_t EXTI_RTSR1_TR15 = 1U << 15 ;

  // Field TR16: Rising trigger event configuration of line 16
    const uint32_t EXTI_RTSR1_TR16 = 1U << 16 ;

  // Field TR18: Rising trigger event configuration of line 18
    const uint32_t EXTI_RTSR1_TR18 = 1U << 18 ;

  // Field TR19: Rising trigger event configuration of line 19
    const uint32_t EXTI_RTSR1_TR19 = 1U << 19 ;

  // Field TR20: Rising trigger event configuration of line 20
    const uint32_t EXTI_RTSR1_TR20 = 1U << 20 ;

  // Field TR21: Rising trigger event configuration of line 21
    const uint32_t EXTI_RTSR1_TR21 = 1U << 21 ;

  // Field TR22: Rising trigger event configuration of line 22
    const uint32_t EXTI_RTSR1_TR22 = 1U << 22 ;

//---  Register FTSR1: Falling Trigger selection
          register
  #define EXTI_FTSR1 (* ((volatile uint32_t *) (0x40010400 + 12)))

  // Field TR0: Falling trigger event configuration of line 0
    const uint32_t EXTI_FTSR1_TR0 = 1U << 0 ;

  // Field TR1: Falling trigger event configuration of line 1
    const uint32_t EXTI_FTSR1_TR1 = 1U << 1 ;

  // Field TR2: Falling trigger event configuration of line 2
    const uint32_t EXTI_FTSR1_TR2 = 1U << 2 ;

  // Field TR3: Falling trigger event configuration of line 3
    const uint32_t EXTI_FTSR1_TR3 = 1U << 3 ;

  // Field TR4: Falling trigger event configuration of line 4
    const uint32_t EXTI_FTSR1_TR4 = 1U << 4 ;

  // Field TR5: Falling trigger event configuration of line 5
    const uint32_t EXTI_FTSR1_TR5 = 1U << 5 ;

  // Field TR6: Falling trigger event configuration of line 6
    const uint32_t EXTI_FTSR1_TR6 = 1U << 6 ;

  // Field TR7: Falling trigger event configuration of line 7
    const uint32_t EXTI_FTSR1_TR7 = 1U << 7 ;

  // Field TR8: Falling trigger event configuration of line 8
    const uint32_t EXTI_FTSR1_TR8 = 1U << 8 ;

  // Field TR9: Falling trigger event configuration of line 9
    const uint32_t EXTI_FTSR1_TR9 = 1U << 9 ;

  // Field TR10: Falling trigger event configuration of line 10
    const uint32_t EXTI_FTSR1_TR10 = 1U << 10 ;

  // Field TR11: Falling trigger event configuration of line 11
    const uint32_t EXTI_FTSR1_TR11 = 1U << 11 ;

  // Field TR12: Falling trigger event configuration of line 12
    const uint32_t EXTI_FTSR1_TR12 = 1U << 12 ;

  // Field TR13: Falling trigger event configuration of line 13
    const uint32_t EXTI_FTSR1_TR13 = 1U << 13 ;

  // Field TR14: Falling trigger event configuration of line 14
    const uint32_t EXTI_FTSR1_TR14 = 1U << 14 ;

  // Field TR15: Falling trigger event configuration of line 15
    const uint32_t EXTI_FTSR1_TR15 = 1U << 15 ;

  // Field TR16: Falling trigger event configuration of line 16
    const uint32_t EXTI_FTSR1_TR16 = 1U << 16 ;

  // Field TR18: Falling trigger event configuration of line 18
    const uint32_t EXTI_FTSR1_TR18 = 1U << 18 ;

  // Field TR19: Falling trigger event configuration of line 19
    const uint32_t EXTI_FTSR1_TR19 = 1U << 19 ;

  // Field TR20: Falling trigger event configuration of line 20
    const uint32_t EXTI_FTSR1_TR20 = 1U << 20 ;

  // Field TR21: Falling trigger event configuration of line 21
    const uint32_t EXTI_FTSR1_TR21 = 1U << 21 ;

  // Field TR22: Falling trigger event configuration of line 22
    const uint32_t EXTI_FTSR1_TR22 = 1U << 22 ;

//---  Register SWIER1: Software interrupt event
          register
  #define EXTI_SWIER1 (* ((volatile uint32_t *) (0x40010400 + 16)))

  // Field SWIER0: Software Interrupt on line 0
    const uint32_t EXTI_SWIER1_SWIER0 = 1U << 0 ;

  // Field SWIER1: Software Interrupt on line 1
    const uint32_t EXTI_SWIER1_SWIER1 = 1U << 1 ;

  // Field SWIER2: Software Interrupt on line 2
    const uint32_t EXTI_SWIER1_SWIER2 = 1U << 2 ;

  // Field SWIER3: Software Interrupt on line 3
    const uint32_t EXTI_SWIER1_SWIER3 = 1U << 3 ;

  // Field SWIER4: Software Interrupt on line 4
    const uint32_t EXTI_SWIER1_SWIER4 = 1U << 4 ;

  // Field SWIER5: Software Interrupt on line 5
    const uint32_t EXTI_SWIER1_SWIER5 = 1U << 5 ;

  // Field SWIER6: Software Interrupt on line 6
    const uint32_t EXTI_SWIER1_SWIER6 = 1U << 6 ;

  // Field SWIER7: Software Interrupt on line 7
    const uint32_t EXTI_SWIER1_SWIER7 = 1U << 7 ;

  // Field SWIER8: Software Interrupt on line 8
    const uint32_t EXTI_SWIER1_SWIER8 = 1U << 8 ;

  // Field SWIER9: Software Interrupt on line 9
    const uint32_t EXTI_SWIER1_SWIER9 = 1U << 9 ;

  // Field SWIER10: Software Interrupt on line 10
    const uint32_t EXTI_SWIER1_SWIER10 = 1U << 10 ;

  // Field SWIER11: Software Interrupt on line 11
    const uint32_t EXTI_SWIER1_SWIER11 = 1U << 11 ;

  // Field SWIER12: Software Interrupt on line 12
    const uint32_t EXTI_SWIER1_SWIER12 = 1U << 12 ;

  // Field SWIER13: Software Interrupt on line 13
    const uint32_t EXTI_SWIER1_SWIER13 = 1U << 13 ;

  // Field SWIER14: Software Interrupt on line 14
    const uint32_t EXTI_SWIER1_SWIER14 = 1U << 14 ;

  // Field SWIER15: Software Interrupt on line 15
    const uint32_t EXTI_SWIER1_SWIER15 = 1U << 15 ;

  // Field SWIER16: Software Interrupt on line 16
    const uint32_t EXTI_SWIER1_SWIER16 = 1U << 16 ;

  // Field SWIER18: Software Interrupt on line 18
    const uint32_t EXTI_SWIER1_SWIER18 = 1U << 18 ;

  // Field SWIER19: Software Interrupt on line 19
    const uint32_t EXTI_SWIER1_SWIER19 = 1U << 19 ;

  // Field SWIER20: Software Interrupt on line 20
    const uint32_t EXTI_SWIER1_SWIER20 = 1U << 20 ;

  // Field SWIER21: Software Interrupt on line 21
    const uint32_t EXTI_SWIER1_SWIER21 = 1U << 21 ;

  // Field SWIER22: Software Interrupt on line 22
    const uint32_t EXTI_SWIER1_SWIER22 = 1U << 22 ;

//---  Register PR1: Pending register
  #define EXTI_PR1 (* ((volatile uint32_t *) (0x40010400 + 20)))

  // Field PR0: Pending bit 0
    const uint32_t EXTI_PR1_PR0 = 1U << 0 ;

  // Field PR1: Pending bit 1
    const uint32_t EXTI_PR1_PR1 = 1U << 1 ;

  // Field PR2: Pending bit 2
    const uint32_t EXTI_PR1_PR2 = 1U << 2 ;

  // Field PR3: Pending bit 3
    const uint32_t EXTI_PR1_PR3 = 1U << 3 ;

  // Field PR4: Pending bit 4
    const uint32_t EXTI_PR1_PR4 = 1U << 4 ;

  // Field PR5: Pending bit 5
    const uint32_t EXTI_PR1_PR5 = 1U << 5 ;

  // Field PR6: Pending bit 6
    const uint32_t EXTI_PR1_PR6 = 1U << 6 ;

  // Field PR7: Pending bit 7
    const uint32_t EXTI_PR1_PR7 = 1U << 7 ;

  // Field PR8: Pending bit 8
    const uint32_t EXTI_PR1_PR8 = 1U << 8 ;

  // Field PR9: Pending bit 9
    const uint32_t EXTI_PR1_PR9 = 1U << 9 ;

  // Field PR10: Pending bit 10
    const uint32_t EXTI_PR1_PR10 = 1U << 10 ;

  // Field PR11: Pending bit 11
    const uint32_t EXTI_PR1_PR11 = 1U << 11 ;

  // Field PR12: Pending bit 12
    const uint32_t EXTI_PR1_PR12 = 1U << 12 ;

  // Field PR13: Pending bit 13
    const uint32_t EXTI_PR1_PR13 = 1U << 13 ;

  // Field PR14: Pending bit 14
    const uint32_t EXTI_PR1_PR14 = 1U << 14 ;

  // Field PR15: Pending bit 15
    const uint32_t EXTI_PR1_PR15 = 1U << 15 ;

  // Field PR16: Pending bit 16
    const uint32_t EXTI_PR1_PR16 = 1U << 16 ;

  // Field PR18: Pending bit 18
    const uint32_t EXTI_PR1_PR18 = 1U << 18 ;

  // Field PR19: Pending bit 19
    const uint32_t EXTI_PR1_PR19 = 1U << 19 ;

  // Field PR20: Pending bit 20
    const uint32_t EXTI_PR1_PR20 = 1U << 20 ;

  // Field PR21: Pending bit 21
    const uint32_t EXTI_PR1_PR21 = 1U << 21 ;

  // Field PR22: Pending bit 22
    const uint32_t EXTI_PR1_PR22 = 1U << 22 ;

//---  Register IMR2: Interrupt mask register
  #define EXTI_IMR2 (* ((volatile uint32_t *) (0x40010400 + 32)))

  // Field MR32: Interrupt Mask on external/internal line 32
    const uint32_t EXTI_IMR2_MR32 = 1U << 0 ;

  // Field MR33: Interrupt Mask on external/internal line 33
    const uint32_t EXTI_IMR2_MR33 = 1U << 1 ;

  // Field MR34: Interrupt Mask on external/internal line 34
    const uint32_t EXTI_IMR2_MR34 = 1U << 2 ;

  // Field MR35: Interrupt Mask on external/internal line 35
    const uint32_t EXTI_IMR2_MR35 = 1U << 3 ;

  // Field MR36: Interrupt Mask on external/internal line 36
    const uint32_t EXTI_IMR2_MR36 = 1U << 4 ;

  // Field MR37: Interrupt Mask on external/internal line 37
    const uint32_t EXTI_IMR2_MR37 = 1U << 5 ;

  // Field MR38: Interrupt Mask on external/internal line 38
    const uint32_t EXTI_IMR2_MR38 = 1U << 6 ;

  // Field MR39: Interrupt Mask on external/internal line 39
    const uint32_t EXTI_IMR2_MR39 = 1U << 7 ;

//---  Register EMR2: Event mask register
  #define EXTI_EMR2 (* ((volatile uint32_t *) (0x40010400 + 36)))

  // Field MR32: Event mask on external/internal line 32
    const uint32_t EXTI_EMR2_MR32 = 1U << 0 ;

  // Field MR33: Event mask on external/internal line 33
    const uint32_t EXTI_EMR2_MR33 = 1U << 1 ;

  // Field MR34: Event mask on external/internal line 34
    const uint32_t EXTI_EMR2_MR34 = 1U << 2 ;

  // Field MR35: Event mask on external/internal line 35
    const uint32_t EXTI_EMR2_MR35 = 1U << 3 ;

  // Field MR36: Event mask on external/internal line 36
    const uint32_t EXTI_EMR2_MR36 = 1U << 4 ;

  // Field MR37: Event mask on external/internal line 37
    const uint32_t EXTI_EMR2_MR37 = 1U << 5 ;

  // Field MR38: Event mask on external/internal line 38
    const uint32_t EXTI_EMR2_MR38 = 1U << 6 ;

  // Field MR39: Event mask on external/internal line 39
    const uint32_t EXTI_EMR2_MR39 = 1U << 7 ;

//---  Register RTSR2: Rising Trigger selection
          register
  #define EXTI_RTSR2 (* ((volatile uint32_t *) (0x40010400 + 40)))

  // Field RT35: Rising trigger event configuration bit of line 35
    const uint32_t EXTI_RTSR2_RT35 = 1U << 3 ;

  // Field RT36: Rising trigger event configuration bit of line 36
    const uint32_t EXTI_RTSR2_RT36 = 1U << 4 ;

  // Field RT37: Rising trigger event configuration bit of line 37
    const uint32_t EXTI_RTSR2_RT37 = 1U << 5 ;

  // Field RT38: Rising trigger event configuration bit of line 38
    const uint32_t EXTI_RTSR2_RT38 = 1U << 6 ;

//---  Register FTSR2: Falling Trigger selection
          register
  #define EXTI_FTSR2 (* ((volatile uint32_t *) (0x40010400 + 44)))

  // Field FT35: Falling trigger event configuration bit of line 35
    const uint32_t EXTI_FTSR2_FT35 = 1U << 3 ;

  // Field FT36: Falling trigger event configuration bit of line 36
    const uint32_t EXTI_FTSR2_FT36 = 1U << 4 ;

  // Field FT37: Falling trigger event configuration bit of line 37
    const uint32_t EXTI_FTSR2_FT37 = 1U << 5 ;

  // Field FT38: Falling trigger event configuration bit of line 38
    const uint32_t EXTI_FTSR2_FT38 = 1U << 6 ;

//---  Register SWIER2: Software interrupt event
          register
  #define EXTI_SWIER2 (* ((volatile uint32_t *) (0x40010400 + 48)))

  // Field SWI35: Software interrupt on line 35
    const uint32_t EXTI_SWIER2_SWI35 = 1U << 3 ;

  // Field SWI36: Software interrupt on line 36
    const uint32_t EXTI_SWIER2_SWI36 = 1U << 4 ;

  // Field SWI37: Software interrupt on line 37
    const uint32_t EXTI_SWIER2_SWI37 = 1U << 5 ;

  // Field SWI38: Software interrupt on line 38
    const uint32_t EXTI_SWIER2_SWI38 = 1U << 6 ;

//---  Register PR2: Pending register
  #define EXTI_PR2 (* ((volatile uint32_t *) (0x40010400 + 52)))

  // Field PIF35: Pending interrupt flag on line 35
    const uint32_t EXTI_PR2_PIF35 = 1U << 3 ;

  // Field PIF36: Pending interrupt flag on line 36
    const uint32_t EXTI_PR2_PIF36 = 1U << 4 ;

  // Field PIF37: Pending interrupt flag on line 37
    const uint32_t EXTI_PR2_PIF37 = 1U << 5 ;

  // Field PIF38: Pending interrupt flag on line 38
    const uint32_t EXTI_PR2_PIF38 = 1U << 6 ;

//------------------------------------------------------------------------------
// Peripheral FIREWALL: Firewall
//------------------------------------------------------------------------------

//---  Register CSSA: Code segment start address
  #define FIREWALL_CSSA (* ((volatile uint32_t *) (0x40011c00 + 0)))

  // Field ADD: code segment start address
    inline uint32_t FIREWALL_CSSA_ADD (const uint32_t inValue) {return (inValue & 0xffffU) << 8 ; }

//---  Register CSL: Code segment length
  #define FIREWALL_CSL (* ((volatile uint32_t *) (0x40011c00 + 4)))

  // Field LENG: code segment length
    inline uint32_t FIREWALL_CSL_LENG (const uint32_t inValue) {return (inValue & 0x3fffU) << 8 ; }

//---  Register NVDSSA: Non-volatile data segment start
          address
  #define FIREWALL_NVDSSA (* ((volatile uint32_t *) (0x40011c00 + 8)))

  // Field ADD: Non-volatile data segment start address
    inline uint32_t FIREWALL_NVDSSA_ADD (const uint32_t inValue) {return (inValue & 0xffffU) << 8 ; }

//---  Register NVDSL: Non-volatile data segment
          length
  #define FIREWALL_NVDSL (* ((volatile uint32_t *) (0x40011c00 + 12)))

  // Field LENG: Non-volatile data segment length
    inline uint32_t FIREWALL_NVDSL_LENG (const uint32_t inValue) {return (inValue & 0x3fffU) << 8 ; }

//---  Register VDSSA: Volatile data segment start
          address
  #define FIREWALL_VDSSA (* ((volatile uint32_t *) (0x40011c00 + 16)))

  // Field ADD: Volatile data segment start address
    inline uint32_t FIREWALL_VDSSA_ADD (const uint32_t inValue) {return (inValue & 0x3ffU) << 6 ; }

//---  Register VDSL: Volatile data segment length
  #define FIREWALL_VDSL (* ((volatile uint32_t *) (0x40011c00 + 20)))

  // Field LENG: Non-volatile data segment length
    inline uint32_t FIREWALL_VDSL_LENG (const uint32_t inValue) {return (inValue & 0x3ffU) << 6 ; }

//---  Register CR: Configuration register
  #define FIREWALL_CR (* ((volatile uint32_t *) (0x40011c00 + 32)))

  // Field VDE: Volatile data execution
    const uint32_t FIREWALL_CR_VDE = 1U << 2 ;

  // Field VDS: Volatile data shared
    const uint32_t FIREWALL_CR_VDS = 1U << 1 ;

  // Field FPA: Firewall pre alarm
    const uint32_t FIREWALL_CR_FPA = 1U << 0 ;

//------------------------------------------------------------------------------
// Peripheral FLASH: Flash
//------------------------------------------------------------------------------

//---  Register ACR: Access control register
  #define FLASH_ACR (* ((volatile uint32_t *) (0x40022000 + 0)))

  // Field LATENCY: Latency
    inline uint32_t FLASH_ACR_LATENCY (const uint32_t inValue) {return (inValue & 0x7U) << 0 ; }

  // Field PRFTEN: Prefetch enable
    const uint32_t FLASH_ACR_PRFTEN = 1U << 8 ;

  // Field ICEN: Instruction cache enable
    const uint32_t FLASH_ACR_ICEN = 1U << 9 ;

  // Field DCEN: Data cache enable
    const uint32_t FLASH_ACR_DCEN = 1U << 10 ;

  // Field ICRST: Instruction cache reset
    const uint32_t FLASH_ACR_ICRST = 1U << 11 ;

  // Field DCRST: Data cache reset
    const uint32_t FLASH_ACR_DCRST = 1U << 12 ;

  // Field RUN_PD: Flash Power-down mode during Low-power run mode
    const uint32_t FLASH_ACR_RUN_PD = 1U << 13 ;

  // Field SLEEP_PD: Flash Power-down mode during Low-power sleep mode
    const uint32_t FLASH_ACR_SLEEP_PD = 1U << 14 ;

//---  Register PDKEYR: Power down key register
  #define FLASH_PDKEYR (* ((volatile uint32_t *) (0x40022000 + 4)))

  // Field PDKEYR: RUN_PD in FLASH_ACR key
    inline uint32_t FLASH_PDKEYR_PDKEYR (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register KEYR: Flash key register
  #define FLASH_KEYR (* ((volatile uint32_t *) (0x40022000 + 8)))

  // Field KEYR: KEYR
    inline uint32_t FLASH_KEYR_KEYR (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register OPTKEYR: Option byte key register
  #define FLASH_OPTKEYR (* ((volatile uint32_t *) (0x40022000 + 12)))

  // Field OPTKEYR: Option byte key
    inline uint32_t FLASH_OPTKEYR_OPTKEYR (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register SR: Status register
  #define FLASH_SR (* ((volatile uint32_t *) (0x40022000 + 16)))

  // Field EOP: End of operation
    const uint32_t FLASH_SR_EOP = 1U << 0 ;

  // Field OPERR: Operation error
    const uint32_t FLASH_SR_OPERR = 1U << 1 ;

  // Field PROGERR: Programming error
    const uint32_t FLASH_SR_PROGERR = 1U << 3 ;

  // Field WRPERR: Write protected error
    const uint32_t FLASH_SR_WRPERR = 1U << 4 ;

  // Field PGAERR: Programming alignment error
    const uint32_t FLASH_SR_PGAERR = 1U << 5 ;

  // Field SIZERR: Size error
    const uint32_t FLASH_SR_SIZERR = 1U << 6 ;

  // Field PGSERR: Programming sequence error
    const uint32_t FLASH_SR_PGSERR = 1U << 7 ;

  // Field MISERR: Fast programming data miss error
    const uint32_t FLASH_SR_MISERR = 1U << 8 ;

  // Field FASTERR: Fast programming error
    const uint32_t FLASH_SR_FASTERR = 1U << 9 ;

  // Field RDERR: PCROP read error
    const uint32_t FLASH_SR_RDERR = 1U << 14 ;

  // Field OPTVERR: Option validity error
    const uint32_t FLASH_SR_OPTVERR = 1U << 15 ;

  // Field BSY: Busy
    const uint32_t FLASH_SR_BSY = 1U << 16 ;

//---  Register CR: Flash control register
  #define FLASH_CR (* ((volatile uint32_t *) (0x40022000 + 20)))

  // Field PG: Programming
    const uint32_t FLASH_CR_PG = 1U << 0 ;

  // Field PER: Page erase
    const uint32_t FLASH_CR_PER = 1U << 1 ;

  // Field MER1: Bank 1 Mass erase
    const uint32_t FLASH_CR_MER1 = 1U << 2 ;

  // Field PNB: Page number
    inline uint32_t FLASH_CR_PNB (const uint32_t inValue) {return (inValue & 0xffU) << 3 ; }

  // Field BKER: Bank erase
    const uint32_t FLASH_CR_BKER = 1U << 11 ;

  // Field MER2: Bank 2 Mass erase
    const uint32_t FLASH_CR_MER2 = 1U << 15 ;

  // Field START: Start
    const uint32_t FLASH_CR_START = 1U << 16 ;

  // Field OPTSTRT: Options modification start
    const uint32_t FLASH_CR_OPTSTRT = 1U << 17 ;

  // Field FSTPG: Fast programming
    const uint32_t FLASH_CR_FSTPG = 1U << 18 ;

  // Field EOPIE: End of operation interrupt enable
    const uint32_t FLASH_CR_EOPIE = 1U << 24 ;

  // Field ERRIE: Error interrupt enable
    const uint32_t FLASH_CR_ERRIE = 1U << 25 ;

  // Field RDERRIE: PCROP read error interrupt enable
    const uint32_t FLASH_CR_RDERRIE = 1U << 26 ;

  // Field OBL_LAUNCH: Force the option byte loading
    const uint32_t FLASH_CR_OBL_LAUNCH = 1U << 27 ;

  // Field OPTLOCK: Options Lock
    const uint32_t FLASH_CR_OPTLOCK = 1U << 30 ;

  // Field LOCK: FLASH_CR Lock
    const uint32_t FLASH_CR_LOCK = 1U << 31 ;

//---  Register ECCR: Flash ECC register
  #define FLASH_ECCR (* ((volatile uint32_t *) (0x40022000 + 24)))

  // Field ADDR_ECC: ECC fail address
    inline uint32_t FLASH_ECCR_ADDR_ECC (const uint32_t inValue) {return (inValue & 0x7ffffU) << 0 ; }

  // Field BK_ECC: ECC fail bank
    const uint32_t FLASH_ECCR_BK_ECC = 1U << 19 ;

  // Field SYSF_ECC: System Flash ECC fail
    const uint32_t FLASH_ECCR_SYSF_ECC = 1U << 20 ;

  // Field ECCIE: ECC correction interrupt enable
    const uint32_t FLASH_ECCR_ECCIE = 1U << 24 ;

  // Field ECCC: ECC correction
    const uint32_t FLASH_ECCR_ECCC = 1U << 30 ;

  // Field ECCD: ECC detection
    const uint32_t FLASH_ECCR_ECCD = 1U << 31 ;

//---  Register OPTR: Flash option register
  #define FLASH_OPTR (* ((volatile uint32_t *) (0x40022000 + 32)))

  // Field RDP: Read protection level
    inline uint32_t FLASH_OPTR_RDP (const uint32_t inValue) {return (inValue & 0xffU) << 0 ; }

  // Field BOR_LEV: BOR reset Level
    inline uint32_t FLASH_OPTR_BOR_LEV (const uint32_t inValue) {return (inValue & 0x7U) << 8 ; }

  // Field nRST_STOP: nRST_STOP
    const uint32_t FLASH_OPTR_nRST_STOP = 1U << 12 ;

  // Field nRST_STDBY: nRST_STDBY
    const uint32_t FLASH_OPTR_nRST_STDBY = 1U << 13 ;

  // Field IDWG_SW: Independent watchdog selection
    const uint32_t FLASH_OPTR_IDWG_SW = 1U << 16 ;

  // Field IWDG_STOP: Independent watchdog counter freeze in Stop mode
    const uint32_t FLASH_OPTR_IWDG_STOP = 1U << 17 ;

  // Field IWDG_STDBY: Independent watchdog counter freeze in Standby mode
    const uint32_t FLASH_OPTR_IWDG_STDBY = 1U << 18 ;

  // Field WWDG_SW: Window watchdog selection
    const uint32_t FLASH_OPTR_WWDG_SW = 1U << 19 ;

  // Field BFB2: Dual-bank boot
    const uint32_t FLASH_OPTR_BFB2 = 1U << 20 ;

  // Field DUALBANK: Dual-Bank on 512 KB or 256 KB Flash memory devices
    const uint32_t FLASH_OPTR_DUALBANK = 1U << 21 ;

  // Field nBOOT1: Boot configuration
    const uint32_t FLASH_OPTR_nBOOT1 = 1U << 23 ;

  // Field SRAM2_PE: SRAM2 parity check enable
    const uint32_t FLASH_OPTR_SRAM2_PE = 1U << 24 ;

  // Field SRAM2_RST: SRAM2 Erase when system reset
    const uint32_t FLASH_OPTR_SRAM2_RST = 1U << 25 ;

//---  Register PCROP1SR: Flash Bank 1 PCROP Start address
          register
  #define FLASH_PCROP1SR (* ((volatile uint32_t *) (0x40022000 + 36)))

  // Field PCROP1_STRT: Bank 1 PCROP area start offset
    inline uint32_t FLASH_PCROP1SR_PCROP1_STRT (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register PCROP1ER: Flash Bank 1 PCROP End address
          register
  #define FLASH_PCROP1ER (* ((volatile uint32_t *) (0x40022000 + 40)))

  // Field PCROP1_END: Bank 1 PCROP area end offset
    inline uint32_t FLASH_PCROP1ER_PCROP1_END (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

  // Field PCROP_RDP: PCROP area preserved when RDP level decreased
    const uint32_t FLASH_PCROP1ER_PCROP_RDP = 1U << 31 ;

//---  Register WRP1AR: Flash Bank 1 WRP area A address
          register
  #define FLASH_WRP1AR (* ((volatile uint32_t *) (0x40022000 + 44)))

  // Field WRP1A_STRT: Bank 1 WRP first area tart offset
    inline uint32_t FLASH_WRP1AR_WRP1A_STRT (const uint32_t inValue) {return (inValue & 0xffU) << 0 ; }

  // Field WRP1A_END: Bank 1 WRP first area A end offset
    inline uint32_t FLASH_WRP1AR_WRP1A_END (const uint32_t inValue) {return (inValue & 0xffU) << 16 ; }

//---  Register WRP1BR: Flash Bank 1 WRP area B address
          register
  #define FLASH_WRP1BR (* ((volatile uint32_t *) (0x40022000 + 48)))

  // Field WRP1B_STRT: Bank 1 WRP second area B end offset
    inline uint32_t FLASH_WRP1BR_WRP1B_STRT (const uint32_t inValue) {return (inValue & 0xffU) << 16 ; }

  // Field WRP1B_END: Bank 1 WRP second area B start offset
    inline uint32_t FLASH_WRP1BR_WRP1B_END (const uint32_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register PCROP2SR: Flash Bank 2 PCROP Start address
          register
  #define FLASH_PCROP2SR (* ((volatile uint32_t *) (0x40022000 + 68)))

  // Field PCROP2_STRT: Bank 2 PCROP area start offset
    inline uint32_t FLASH_PCROP2SR_PCROP2_STRT (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register PCROP2ER: Flash Bank 2 PCROP End address
          register
  #define FLASH_PCROP2ER (* ((volatile uint32_t *) (0x40022000 + 72)))

  // Field PCROP2_END: Bank 2 PCROP area end offset
    inline uint32_t FLASH_PCROP2ER_PCROP2_END (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register WRP2AR: Flash Bank 2 WRP area A address
          register
  #define FLASH_WRP2AR (* ((volatile uint32_t *) (0x40022000 + 76)))

  // Field WRP2A_STRT: Bank 2 WRP first area A start offset
    inline uint32_t FLASH_WRP2AR_WRP2A_STRT (const uint32_t inValue) {return (inValue & 0xffU) << 0 ; }

  // Field WRP2A_END: Bank 2 WRP first area A end offset
    inline uint32_t FLASH_WRP2AR_WRP2A_END (const uint32_t inValue) {return (inValue & 0xffU) << 16 ; }

//---  Register WRP2BR: Flash Bank 2 WRP area B address
          register
  #define FLASH_WRP2BR (* ((volatile uint32_t *) (0x40022000 + 80)))

  // Field WRP2B_STRT: Bank 2 WRP second area B start offset
    inline uint32_t FLASH_WRP2BR_WRP2B_STRT (const uint32_t inValue) {return (inValue & 0xffU) << 0 ; }

  // Field WRP2B_END: Bank 2 WRP second area B end offset
    inline uint32_t FLASH_WRP2BR_WRP2B_END (const uint32_t inValue) {return (inValue & 0xffU) << 16 ; }

//------------------------------------------------------------------------------
// Peripheral FPU: Floting point unit
//------------------------------------------------------------------------------

//---  Register FPCCR: Floating-point context control
          register
  #define FPU_FPCCR (* ((volatile uint32_t *) (0xe000ef34 + 0)))

  // Field LSPACT: LSPACT
    const uint32_t FPU_FPCCR_LSPACT = 1U << 0 ;

  // Field USER: USER
    const uint32_t FPU_FPCCR_USER = 1U << 1 ;

  // Field THREAD: THREAD
    const uint32_t FPU_FPCCR_THREAD = 1U << 3 ;

  // Field HFRDY: HFRDY
    const uint32_t FPU_FPCCR_HFRDY = 1U << 4 ;

  // Field MMRDY: MMRDY
    const uint32_t FPU_FPCCR_MMRDY = 1U << 5 ;

  // Field BFRDY: BFRDY
    const uint32_t FPU_FPCCR_BFRDY = 1U << 6 ;

  // Field MONRDY: MONRDY
    const uint32_t FPU_FPCCR_MONRDY = 1U << 8 ;

  // Field LSPEN: LSPEN
    const uint32_t FPU_FPCCR_LSPEN = 1U << 30 ;

  // Field ASPEN: ASPEN
    const uint32_t FPU_FPCCR_ASPEN = 1U << 31 ;

//---  Register FPCAR: Floating-point context address
          register
  #define FPU_FPCAR (* ((volatile uint32_t *) (0xe000ef34 + 4)))

  // Field ADDRESS: Location of unpopulated floating-point
    inline uint32_t FPU_FPCAR_ADDRESS (const uint32_t inValue) {return (inValue & 0x1fffffffU) << 3 ; }

//---  Register FPSCR: Floating-point status control
          register
  #define FPU_FPSCR (* ((volatile uint32_t *) (0xe000ef34 + 8)))

  // Field IOC: Invalid operation cumulative exception bit
    const uint32_t FPU_FPSCR_IOC = 1U << 0 ;

  // Field DZC: Division by zero cumulative exception bit.
    const uint32_t FPU_FPSCR_DZC = 1U << 1 ;

  // Field OFC: Overflow cumulative exception bit
    const uint32_t FPU_FPSCR_OFC = 1U << 2 ;

  // Field UFC: Underflow cumulative exception bit
    const uint32_t FPU_FPSCR_UFC = 1U << 3 ;

  // Field IXC: Inexact cumulative exception bit
    const uint32_t FPU_FPSCR_IXC = 1U << 4 ;

  // Field IDC: Input denormal cumulative exception bit.
    const uint32_t FPU_FPSCR_IDC = 1U << 7 ;

  // Field RMode: Rounding Mode control field
    inline uint32_t FPU_FPSCR_RMode (const uint32_t inValue) {return (inValue & 0x3U) << 22 ; }

  // Field FZ: Flush-to-zero mode control bit:
    const uint32_t FPU_FPSCR_FZ = 1U << 24 ;

  // Field DN: Default NaN mode control bit
    const uint32_t FPU_FPSCR_DN = 1U << 25 ;

  // Field AHP: Alternative half-precision control bit
    const uint32_t FPU_FPSCR_AHP = 1U << 26 ;

  // Field V: Overflow condition code flag
    const uint32_t FPU_FPSCR_V = 1U << 28 ;

  // Field C: Carry condition code flag
    const uint32_t FPU_FPSCR_C = 1U << 29 ;

  // Field Z: Zero condition code flag
    const uint32_t FPU_FPSCR_Z = 1U << 30 ;

  // Field N: Negative condition code flag
    const uint32_t FPU_FPSCR_N = 1U << 31 ;

//------------------------------------------------------------------------------
// Peripheral FPU_CPACR: Floating point unit CPACR
//------------------------------------------------------------------------------

//---  Register CPACR: Coprocessor access control
          register
  #define FPU_CPACR_CPACR (* ((volatile uint32_t *) (0xe000ed88 + 0)))

  // Field CP: CP
    inline uint32_t FPU_CPACR_CPACR_CP (const uint32_t inValue) {return (inValue & 0xfU) << 20 ; }

//------------------------------------------------------------------------------
// Peripheral GPIOA: General-purpose I/Os
//------------------------------------------------------------------------------

//---  Register MODER: GPIO port mode register
  #define GPIOA_MODER (* ((volatile uint32_t *) (0x48000000 + 0)))

  // Field MODER15: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOA_MODER_MODER15 (const uint32_t inValue) {return (inValue & 0x3U) << 30 ; }

  // Field MODER14: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOA_MODER_MODER14 (const uint32_t inValue) {return (inValue & 0x3U) << 28 ; }

  // Field MODER13: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOA_MODER_MODER13 (const uint32_t inValue) {return (inValue & 0x3U) << 26 ; }

  // Field MODER12: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOA_MODER_MODER12 (const uint32_t inValue) {return (inValue & 0x3U) << 24 ; }

  // Field MODER11: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOA_MODER_MODER11 (const uint32_t inValue) {return (inValue & 0x3U) << 22 ; }

  // Field MODER10: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOA_MODER_MODER10 (const uint32_t inValue) {return (inValue & 0x3U) << 20 ; }

  // Field MODER9: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOA_MODER_MODER9 (const uint32_t inValue) {return (inValue & 0x3U) << 18 ; }

  // Field MODER8: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOA_MODER_MODER8 (const uint32_t inValue) {return (inValue & 0x3U) << 16 ; }

  // Field MODER7: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOA_MODER_MODER7 (const uint32_t inValue) {return (inValue & 0x3U) << 14 ; }

  // Field MODER6: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOA_MODER_MODER6 (const uint32_t inValue) {return (inValue & 0x3U) << 12 ; }

  // Field MODER5: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOA_MODER_MODER5 (const uint32_t inValue) {return (inValue & 0x3U) << 10 ; }

  // Field MODER4: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOA_MODER_MODER4 (const uint32_t inValue) {return (inValue & 0x3U) << 8 ; }

  // Field MODER3: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOA_MODER_MODER3 (const uint32_t inValue) {return (inValue & 0x3U) << 6 ; }

  // Field MODER2: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOA_MODER_MODER2 (const uint32_t inValue) {return (inValue & 0x3U) << 4 ; }

  // Field MODER1: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOA_MODER_MODER1 (const uint32_t inValue) {return (inValue & 0x3U) << 2 ; }

  // Field MODER0: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOA_MODER_MODER0 (const uint32_t inValue) {return (inValue & 0x3U) << 0 ; }

//---  Register OTYPER: GPIO port output type register
  #define GPIOA_OTYPER (* ((volatile uint32_t *) (0x48000000 + 4)))

  // Field OT15: Port x configuration bits (y = 0..15)
    const uint32_t GPIOA_OTYPER_OT15 = 1U << 15 ;

  // Field OT14: Port x configuration bits (y = 0..15)
    const uint32_t GPIOA_OTYPER_OT14 = 1U << 14 ;

  // Field OT13: Port x configuration bits (y = 0..15)
    const uint32_t GPIOA_OTYPER_OT13 = 1U << 13 ;

  // Field OT12: Port x configuration bits (y = 0..15)
    const uint32_t GPIOA_OTYPER_OT12 = 1U << 12 ;

  // Field OT11: Port x configuration bits (y = 0..15)
    const uint32_t GPIOA_OTYPER_OT11 = 1U << 11 ;

  // Field OT10: Port x configuration bits (y = 0..15)
    const uint32_t GPIOA_OTYPER_OT10 = 1U << 10 ;

  // Field OT9: Port x configuration bits (y = 0..15)
    const uint32_t GPIOA_OTYPER_OT9 = 1U << 9 ;

  // Field OT8: Port x configuration bits (y = 0..15)
    const uint32_t GPIOA_OTYPER_OT8 = 1U << 8 ;

  // Field OT7: Port x configuration bits (y = 0..15)
    const uint32_t GPIOA_OTYPER_OT7 = 1U << 7 ;

  // Field OT6: Port x configuration bits (y = 0..15)
    const uint32_t GPIOA_OTYPER_OT6 = 1U << 6 ;

  // Field OT5: Port x configuration bits (y = 0..15)
    const uint32_t GPIOA_OTYPER_OT5 = 1U << 5 ;

  // Field OT4: Port x configuration bits (y = 0..15)
    const uint32_t GPIOA_OTYPER_OT4 = 1U << 4 ;

  // Field OT3: Port x configuration bits (y = 0..15)
    const uint32_t GPIOA_OTYPER_OT3 = 1U << 3 ;

  // Field OT2: Port x configuration bits (y = 0..15)
    const uint32_t GPIOA_OTYPER_OT2 = 1U << 2 ;

  // Field OT1: Port x configuration bits (y = 0..15)
    const uint32_t GPIOA_OTYPER_OT1 = 1U << 1 ;

  // Field OT0: Port x configuration bits (y = 0..15)
    const uint32_t GPIOA_OTYPER_OT0 = 1U << 0 ;

//---  Register OSPEEDR: GPIO port output speed
          register
  #define GPIOA_OSPEEDR (* ((volatile uint32_t *) (0x48000000 + 8)))

  // Field OSPEEDR15: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOA_OSPEEDR_OSPEEDR15 (const uint32_t inValue) {return (inValue & 0x3U) << 30 ; }

  // Field OSPEEDR14: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOA_OSPEEDR_OSPEEDR14 (const uint32_t inValue) {return (inValue & 0x3U) << 28 ; }

  // Field OSPEEDR13: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOA_OSPEEDR_OSPEEDR13 (const uint32_t inValue) {return (inValue & 0x3U) << 26 ; }

  // Field OSPEEDR12: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOA_OSPEEDR_OSPEEDR12 (const uint32_t inValue) {return (inValue & 0x3U) << 24 ; }

  // Field OSPEEDR11: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOA_OSPEEDR_OSPEEDR11 (const uint32_t inValue) {return (inValue & 0x3U) << 22 ; }

  // Field OSPEEDR10: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOA_OSPEEDR_OSPEEDR10 (const uint32_t inValue) {return (inValue & 0x3U) << 20 ; }

  // Field OSPEEDR9: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOA_OSPEEDR_OSPEEDR9 (const uint32_t inValue) {return (inValue & 0x3U) << 18 ; }

  // Field OSPEEDR8: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOA_OSPEEDR_OSPEEDR8 (const uint32_t inValue) {return (inValue & 0x3U) << 16 ; }

  // Field OSPEEDR7: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOA_OSPEEDR_OSPEEDR7 (const uint32_t inValue) {return (inValue & 0x3U) << 14 ; }

  // Field OSPEEDR6: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOA_OSPEEDR_OSPEEDR6 (const uint32_t inValue) {return (inValue & 0x3U) << 12 ; }

  // Field OSPEEDR5: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOA_OSPEEDR_OSPEEDR5 (const uint32_t inValue) {return (inValue & 0x3U) << 10 ; }

  // Field OSPEEDR4: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOA_OSPEEDR_OSPEEDR4 (const uint32_t inValue) {return (inValue & 0x3U) << 8 ; }

  // Field OSPEEDR3: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOA_OSPEEDR_OSPEEDR3 (const uint32_t inValue) {return (inValue & 0x3U) << 6 ; }

  // Field OSPEEDR2: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOA_OSPEEDR_OSPEEDR2 (const uint32_t inValue) {return (inValue & 0x3U) << 4 ; }

  // Field OSPEEDR1: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOA_OSPEEDR_OSPEEDR1 (const uint32_t inValue) {return (inValue & 0x3U) << 2 ; }

  // Field OSPEEDR0: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOA_OSPEEDR_OSPEEDR0 (const uint32_t inValue) {return (inValue & 0x3U) << 0 ; }

//---  Register PUPDR: GPIO port pull-up/pull-down
          register
  #define GPIOA_PUPDR (* ((volatile uint32_t *) (0x48000000 + 12)))

  // Field PUPDR15: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOA_PUPDR_PUPDR15 (const uint32_t inValue) {return (inValue & 0x3U) << 30 ; }

  // Field PUPDR14: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOA_PUPDR_PUPDR14 (const uint32_t inValue) {return (inValue & 0x3U) << 28 ; }

  // Field PUPDR13: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOA_PUPDR_PUPDR13 (const uint32_t inValue) {return (inValue & 0x3U) << 26 ; }

  // Field PUPDR12: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOA_PUPDR_PUPDR12 (const uint32_t inValue) {return (inValue & 0x3U) << 24 ; }

  // Field PUPDR11: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOA_PUPDR_PUPDR11 (const uint32_t inValue) {return (inValue & 0x3U) << 22 ; }

  // Field PUPDR10: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOA_PUPDR_PUPDR10 (const uint32_t inValue) {return (inValue & 0x3U) << 20 ; }

  // Field PUPDR9: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOA_PUPDR_PUPDR9 (const uint32_t inValue) {return (inValue & 0x3U) << 18 ; }

  // Field PUPDR8: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOA_PUPDR_PUPDR8 (const uint32_t inValue) {return (inValue & 0x3U) << 16 ; }

  // Field PUPDR7: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOA_PUPDR_PUPDR7 (const uint32_t inValue) {return (inValue & 0x3U) << 14 ; }

  // Field PUPDR6: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOA_PUPDR_PUPDR6 (const uint32_t inValue) {return (inValue & 0x3U) << 12 ; }

  // Field PUPDR5: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOA_PUPDR_PUPDR5 (const uint32_t inValue) {return (inValue & 0x3U) << 10 ; }

  // Field PUPDR4: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOA_PUPDR_PUPDR4 (const uint32_t inValue) {return (inValue & 0x3U) << 8 ; }

  // Field PUPDR3: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOA_PUPDR_PUPDR3 (const uint32_t inValue) {return (inValue & 0x3U) << 6 ; }

  // Field PUPDR2: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOA_PUPDR_PUPDR2 (const uint32_t inValue) {return (inValue & 0x3U) << 4 ; }

  // Field PUPDR1: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOA_PUPDR_PUPDR1 (const uint32_t inValue) {return (inValue & 0x3U) << 2 ; }

  // Field PUPDR0: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOA_PUPDR_PUPDR0 (const uint32_t inValue) {return (inValue & 0x3U) << 0 ; }

//---  Register IDR: GPIO port input data register
  #define GPIOA_IDR (* ((const volatile uint32_t *) (0x48000000 + 16)))

  // Field IDR15: Port input data (y = 0..15)
    const uint32_t GPIOA_IDR_IDR15 = 1U << 15 ;

  // Field IDR14: Port input data (y = 0..15)
    const uint32_t GPIOA_IDR_IDR14 = 1U << 14 ;

  // Field IDR13: Port input data (y = 0..15)
    const uint32_t GPIOA_IDR_IDR13 = 1U << 13 ;

  // Field IDR12: Port input data (y = 0..15)
    const uint32_t GPIOA_IDR_IDR12 = 1U << 12 ;

  // Field IDR11: Port input data (y = 0..15)
    const uint32_t GPIOA_IDR_IDR11 = 1U << 11 ;

  // Field IDR10: Port input data (y = 0..15)
    const uint32_t GPIOA_IDR_IDR10 = 1U << 10 ;

  // Field IDR9: Port input data (y = 0..15)
    const uint32_t GPIOA_IDR_IDR9 = 1U << 9 ;

  // Field IDR8: Port input data (y = 0..15)
    const uint32_t GPIOA_IDR_IDR8 = 1U << 8 ;

  // Field IDR7: Port input data (y = 0..15)
    const uint32_t GPIOA_IDR_IDR7 = 1U << 7 ;

  // Field IDR6: Port input data (y = 0..15)
    const uint32_t GPIOA_IDR_IDR6 = 1U << 6 ;

  // Field IDR5: Port input data (y = 0..15)
    const uint32_t GPIOA_IDR_IDR5 = 1U << 5 ;

  // Field IDR4: Port input data (y = 0..15)
    const uint32_t GPIOA_IDR_IDR4 = 1U << 4 ;

  // Field IDR3: Port input data (y = 0..15)
    const uint32_t GPIOA_IDR_IDR3 = 1U << 3 ;

  // Field IDR2: Port input data (y = 0..15)
    const uint32_t GPIOA_IDR_IDR2 = 1U << 2 ;

  // Field IDR1: Port input data (y = 0..15)
    const uint32_t GPIOA_IDR_IDR1 = 1U << 1 ;

  // Field IDR0: Port input data (y = 0..15)
    const uint32_t GPIOA_IDR_IDR0 = 1U << 0 ;

//---  Register ODR: GPIO port output data register
  #define GPIOA_ODR (* ((volatile uint32_t *) (0x48000000 + 20)))

  // Field ODR15: Port output data (y = 0..15)
    const uint32_t GPIOA_ODR_ODR15 = 1U << 15 ;

  // Field ODR14: Port output data (y = 0..15)
    const uint32_t GPIOA_ODR_ODR14 = 1U << 14 ;

  // Field ODR13: Port output data (y = 0..15)
    const uint32_t GPIOA_ODR_ODR13 = 1U << 13 ;

  // Field ODR12: Port output data (y = 0..15)
    const uint32_t GPIOA_ODR_ODR12 = 1U << 12 ;

  // Field ODR11: Port output data (y = 0..15)
    const uint32_t GPIOA_ODR_ODR11 = 1U << 11 ;

  // Field ODR10: Port output data (y = 0..15)
    const uint32_t GPIOA_ODR_ODR10 = 1U << 10 ;

  // Field ODR9: Port output data (y = 0..15)
    const uint32_t GPIOA_ODR_ODR9 = 1U << 9 ;

  // Field ODR8: Port output data (y = 0..15)
    const uint32_t GPIOA_ODR_ODR8 = 1U << 8 ;

  // Field ODR7: Port output data (y = 0..15)
    const uint32_t GPIOA_ODR_ODR7 = 1U << 7 ;

  // Field ODR6: Port output data (y = 0..15)
    const uint32_t GPIOA_ODR_ODR6 = 1U << 6 ;

  // Field ODR5: Port output data (y = 0..15)
    const uint32_t GPIOA_ODR_ODR5 = 1U << 5 ;

  // Field ODR4: Port output data (y = 0..15)
    const uint32_t GPIOA_ODR_ODR4 = 1U << 4 ;

  // Field ODR3: Port output data (y = 0..15)
    const uint32_t GPIOA_ODR_ODR3 = 1U << 3 ;

  // Field ODR2: Port output data (y = 0..15)
    const uint32_t GPIOA_ODR_ODR2 = 1U << 2 ;

  // Field ODR1: Port output data (y = 0..15)
    const uint32_t GPIOA_ODR_ODR1 = 1U << 1 ;

  // Field ODR0: Port output data (y = 0..15)
    const uint32_t GPIOA_ODR_ODR0 = 1U << 0 ;

//---  Register BSRR: GPIO port bit set/reset
          register
  #define GPIOA_BSRR (* ((volatile uint32_t *) (0x48000000 + 24)))

  // Field BR15: Port x reset bit y (y = 0..15)
    const uint32_t GPIOA_BSRR_BR15 = 1U << 31 ;

  // Field BR14: Port x reset bit y (y = 0..15)
    const uint32_t GPIOA_BSRR_BR14 = 1U << 30 ;

  // Field BR13: Port x reset bit y (y = 0..15)
    const uint32_t GPIOA_BSRR_BR13 = 1U << 29 ;

  // Field BR12: Port x reset bit y (y = 0..15)
    const uint32_t GPIOA_BSRR_BR12 = 1U << 28 ;

  // Field BR11: Port x reset bit y (y = 0..15)
    const uint32_t GPIOA_BSRR_BR11 = 1U << 27 ;

  // Field BR10: Port x reset bit y (y = 0..15)
    const uint32_t GPIOA_BSRR_BR10 = 1U << 26 ;

  // Field BR9: Port x reset bit y (y = 0..15)
    const uint32_t GPIOA_BSRR_BR9 = 1U << 25 ;

  // Field BR8: Port x reset bit y (y = 0..15)
    const uint32_t GPIOA_BSRR_BR8 = 1U << 24 ;

  // Field BR7: Port x reset bit y (y = 0..15)
    const uint32_t GPIOA_BSRR_BR7 = 1U << 23 ;

  // Field BR6: Port x reset bit y (y = 0..15)
    const uint32_t GPIOA_BSRR_BR6 = 1U << 22 ;

  // Field BR5: Port x reset bit y (y = 0..15)
    const uint32_t GPIOA_BSRR_BR5 = 1U << 21 ;

  // Field BR4: Port x reset bit y (y = 0..15)
    const uint32_t GPIOA_BSRR_BR4 = 1U << 20 ;

  // Field BR3: Port x reset bit y (y = 0..15)
    const uint32_t GPIOA_BSRR_BR3 = 1U << 19 ;

  // Field BR2: Port x reset bit y (y = 0..15)
    const uint32_t GPIOA_BSRR_BR2 = 1U << 18 ;

  // Field BR1: Port x reset bit y (y = 0..15)
    const uint32_t GPIOA_BSRR_BR1 = 1U << 17 ;

  // Field BR0: Port x set bit y (y= 0..15)
    const uint32_t GPIOA_BSRR_BR0 = 1U << 16 ;

  // Field BS15: Port x set bit y (y= 0..15)
    const uint32_t GPIOA_BSRR_BS15 = 1U << 15 ;

  // Field BS14: Port x set bit y (y= 0..15)
    const uint32_t GPIOA_BSRR_BS14 = 1U << 14 ;

  // Field BS13: Port x set bit y (y= 0..15)
    const uint32_t GPIOA_BSRR_BS13 = 1U << 13 ;

  // Field BS12: Port x set bit y (y= 0..15)
    const uint32_t GPIOA_BSRR_BS12 = 1U << 12 ;

  // Field BS11: Port x set bit y (y= 0..15)
    const uint32_t GPIOA_BSRR_BS11 = 1U << 11 ;

  // Field BS10: Port x set bit y (y= 0..15)
    const uint32_t GPIOA_BSRR_BS10 = 1U << 10 ;

  // Field BS9: Port x set bit y (y= 0..15)
    const uint32_t GPIOA_BSRR_BS9 = 1U << 9 ;

  // Field BS8: Port x set bit y (y= 0..15)
    const uint32_t GPIOA_BSRR_BS8 = 1U << 8 ;

  // Field BS7: Port x set bit y (y= 0..15)
    const uint32_t GPIOA_BSRR_BS7 = 1U << 7 ;

  // Field BS6: Port x set bit y (y= 0..15)
    const uint32_t GPIOA_BSRR_BS6 = 1U << 6 ;

  // Field BS5: Port x set bit y (y= 0..15)
    const uint32_t GPIOA_BSRR_BS5 = 1U << 5 ;

  // Field BS4: Port x set bit y (y= 0..15)
    const uint32_t GPIOA_BSRR_BS4 = 1U << 4 ;

  // Field BS3: Port x set bit y (y= 0..15)
    const uint32_t GPIOA_BSRR_BS3 = 1U << 3 ;

  // Field BS2: Port x set bit y (y= 0..15)
    const uint32_t GPIOA_BSRR_BS2 = 1U << 2 ;

  // Field BS1: Port x set bit y (y= 0..15)
    const uint32_t GPIOA_BSRR_BS1 = 1U << 1 ;

  // Field BS0: Port x set bit y (y= 0..15)
    const uint32_t GPIOA_BSRR_BS0 = 1U << 0 ;

//---  Register LCKR: GPIO port configuration lock
          register
  #define GPIOA_LCKR (* ((volatile uint32_t *) (0x48000000 + 28)))

  // Field LCKK: Port x lock bit y (y= 0..15)
    const uint32_t GPIOA_LCKR_LCKK = 1U << 16 ;

  // Field LCK15: Port x lock bit y (y= 0..15)
    const uint32_t GPIOA_LCKR_LCK15 = 1U << 15 ;

  // Field LCK14: Port x lock bit y (y= 0..15)
    const uint32_t GPIOA_LCKR_LCK14 = 1U << 14 ;

  // Field LCK13: Port x lock bit y (y= 0..15)
    const uint32_t GPIOA_LCKR_LCK13 = 1U << 13 ;

  // Field LCK12: Port x lock bit y (y= 0..15)
    const uint32_t GPIOA_LCKR_LCK12 = 1U << 12 ;

  // Field LCK11: Port x lock bit y (y= 0..15)
    const uint32_t GPIOA_LCKR_LCK11 = 1U << 11 ;

  // Field LCK10: Port x lock bit y (y= 0..15)
    const uint32_t GPIOA_LCKR_LCK10 = 1U << 10 ;

  // Field LCK9: Port x lock bit y (y= 0..15)
    const uint32_t GPIOA_LCKR_LCK9 = 1U << 9 ;

  // Field LCK8: Port x lock bit y (y= 0..15)
    const uint32_t GPIOA_LCKR_LCK8 = 1U << 8 ;

  // Field LCK7: Port x lock bit y (y= 0..15)
    const uint32_t GPIOA_LCKR_LCK7 = 1U << 7 ;

  // Field LCK6: Port x lock bit y (y= 0..15)
    const uint32_t GPIOA_LCKR_LCK6 = 1U << 6 ;

  // Field LCK5: Port x lock bit y (y= 0..15)
    const uint32_t GPIOA_LCKR_LCK5 = 1U << 5 ;

  // Field LCK4: Port x lock bit y (y= 0..15)
    const uint32_t GPIOA_LCKR_LCK4 = 1U << 4 ;

  // Field LCK3: Port x lock bit y (y= 0..15)
    const uint32_t GPIOA_LCKR_LCK3 = 1U << 3 ;

  // Field LCK2: Port x lock bit y (y= 0..15)
    const uint32_t GPIOA_LCKR_LCK2 = 1U << 2 ;

  // Field LCK1: Port x lock bit y (y= 0..15)
    const uint32_t GPIOA_LCKR_LCK1 = 1U << 1 ;

  // Field LCK0: Port x lock bit y (y= 0..15)
    const uint32_t GPIOA_LCKR_LCK0 = 1U << 0 ;

//---  Register AFRL: GPIO alternate function low
          register
  #define GPIOA_AFRL (* ((volatile uint32_t *) (0x48000000 + 32)))

  // Field AFRL7: Alternate function selection for port x bit y (y = 0..7)
    inline uint32_t GPIOA_AFRL_AFRL7 (const uint32_t inValue) {return (inValue & 0xfU) << 28 ; }

  // Field AFRL6: Alternate function selection for port x bit y (y = 0..7)
    inline uint32_t GPIOA_AFRL_AFRL6 (const uint32_t inValue) {return (inValue & 0xfU) << 24 ; }

  // Field AFRL5: Alternate function selection for port x bit y (y = 0..7)
    inline uint32_t GPIOA_AFRL_AFRL5 (const uint32_t inValue) {return (inValue & 0xfU) << 20 ; }

  // Field AFRL4: Alternate function selection for port x bit y (y = 0..7)
    inline uint32_t GPIOA_AFRL_AFRL4 (const uint32_t inValue) {return (inValue & 0xfU) << 16 ; }

  // Field AFRL3: Alternate function selection for port x bit y (y = 0..7)
    inline uint32_t GPIOA_AFRL_AFRL3 (const uint32_t inValue) {return (inValue & 0xfU) << 12 ; }

  // Field AFRL2: Alternate function selection for port x bit y (y = 0..7)
    inline uint32_t GPIOA_AFRL_AFRL2 (const uint32_t inValue) {return (inValue & 0xfU) << 8 ; }

  // Field AFRL1: Alternate function selection for port x bit y (y = 0..7)
    inline uint32_t GPIOA_AFRL_AFRL1 (const uint32_t inValue) {return (inValue & 0xfU) << 4 ; }

  // Field AFRL0: Alternate function selection for port x bit y (y = 0..7)
    inline uint32_t GPIOA_AFRL_AFRL0 (const uint32_t inValue) {return (inValue & 0xfU) << 0 ; }

//---  Register AFRH: GPIO alternate function high
          register
  #define GPIOA_AFRH (* ((volatile uint32_t *) (0x48000000 + 36)))

  // Field AFRH15: Alternate function selection for port x bit y (y = 8..15)
    inline uint32_t GPIOA_AFRH_AFRH15 (const uint32_t inValue) {return (inValue & 0xfU) << 28 ; }

  // Field AFRH14: Alternate function selection for port x bit y (y = 8..15)
    inline uint32_t GPIOA_AFRH_AFRH14 (const uint32_t inValue) {return (inValue & 0xfU) << 24 ; }

  // Field AFRH13: Alternate function selection for port x bit y (y = 8..15)
    inline uint32_t GPIOA_AFRH_AFRH13 (const uint32_t inValue) {return (inValue & 0xfU) << 20 ; }

  // Field AFRH12: Alternate function selection for port x bit y (y = 8..15)
    inline uint32_t GPIOA_AFRH_AFRH12 (const uint32_t inValue) {return (inValue & 0xfU) << 16 ; }

  // Field AFRH11: Alternate function selection for port x bit y (y = 8..15)
    inline uint32_t GPIOA_AFRH_AFRH11 (const uint32_t inValue) {return (inValue & 0xfU) << 12 ; }

  // Field AFRH10: Alternate function selection for port x bit y (y = 8..15)
    inline uint32_t GPIOA_AFRH_AFRH10 (const uint32_t inValue) {return (inValue & 0xfU) << 8 ; }

  // Field AFRH9: Alternate function selection for port x bit y (y = 8..15)
    inline uint32_t GPIOA_AFRH_AFRH9 (const uint32_t inValue) {return (inValue & 0xfU) << 4 ; }

  // Field AFRH8: Alternate function selection for port x bit y (y = 8..15)
    inline uint32_t GPIOA_AFRH_AFRH8 (const uint32_t inValue) {return (inValue & 0xfU) << 0 ; }

//------------------------------------------------------------------------------
// Peripheral GPIOB: General-purpose I/Os
//------------------------------------------------------------------------------

//---  Register MODER: GPIO port mode register
  #define GPIOB_MODER (* ((volatile uint32_t *) (0x48000400 + 0)))

  // Field MODER15: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOB_MODER_MODER15 (const uint32_t inValue) {return (inValue & 0x3U) << 30 ; }

  // Field MODER14: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOB_MODER_MODER14 (const uint32_t inValue) {return (inValue & 0x3U) << 28 ; }

  // Field MODER13: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOB_MODER_MODER13 (const uint32_t inValue) {return (inValue & 0x3U) << 26 ; }

  // Field MODER12: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOB_MODER_MODER12 (const uint32_t inValue) {return (inValue & 0x3U) << 24 ; }

  // Field MODER11: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOB_MODER_MODER11 (const uint32_t inValue) {return (inValue & 0x3U) << 22 ; }

  // Field MODER10: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOB_MODER_MODER10 (const uint32_t inValue) {return (inValue & 0x3U) << 20 ; }

  // Field MODER9: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOB_MODER_MODER9 (const uint32_t inValue) {return (inValue & 0x3U) << 18 ; }

  // Field MODER8: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOB_MODER_MODER8 (const uint32_t inValue) {return (inValue & 0x3U) << 16 ; }

  // Field MODER7: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOB_MODER_MODER7 (const uint32_t inValue) {return (inValue & 0x3U) << 14 ; }

  // Field MODER6: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOB_MODER_MODER6 (const uint32_t inValue) {return (inValue & 0x3U) << 12 ; }

  // Field MODER5: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOB_MODER_MODER5 (const uint32_t inValue) {return (inValue & 0x3U) << 10 ; }

  // Field MODER4: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOB_MODER_MODER4 (const uint32_t inValue) {return (inValue & 0x3U) << 8 ; }

  // Field MODER3: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOB_MODER_MODER3 (const uint32_t inValue) {return (inValue & 0x3U) << 6 ; }

  // Field MODER2: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOB_MODER_MODER2 (const uint32_t inValue) {return (inValue & 0x3U) << 4 ; }

  // Field MODER1: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOB_MODER_MODER1 (const uint32_t inValue) {return (inValue & 0x3U) << 2 ; }

  // Field MODER0: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOB_MODER_MODER0 (const uint32_t inValue) {return (inValue & 0x3U) << 0 ; }

//---  Register OTYPER: GPIO port output type register
  #define GPIOB_OTYPER (* ((volatile uint32_t *) (0x48000400 + 4)))

  // Field OT15: Port x configuration bits (y = 0..15)
    const uint32_t GPIOB_OTYPER_OT15 = 1U << 15 ;

  // Field OT14: Port x configuration bits (y = 0..15)
    const uint32_t GPIOB_OTYPER_OT14 = 1U << 14 ;

  // Field OT13: Port x configuration bits (y = 0..15)
    const uint32_t GPIOB_OTYPER_OT13 = 1U << 13 ;

  // Field OT12: Port x configuration bits (y = 0..15)
    const uint32_t GPIOB_OTYPER_OT12 = 1U << 12 ;

  // Field OT11: Port x configuration bits (y = 0..15)
    const uint32_t GPIOB_OTYPER_OT11 = 1U << 11 ;

  // Field OT10: Port x configuration bits (y = 0..15)
    const uint32_t GPIOB_OTYPER_OT10 = 1U << 10 ;

  // Field OT9: Port x configuration bits (y = 0..15)
    const uint32_t GPIOB_OTYPER_OT9 = 1U << 9 ;

  // Field OT8: Port x configuration bits (y = 0..15)
    const uint32_t GPIOB_OTYPER_OT8 = 1U << 8 ;

  // Field OT7: Port x configuration bits (y = 0..15)
    const uint32_t GPIOB_OTYPER_OT7 = 1U << 7 ;

  // Field OT6: Port x configuration bits (y = 0..15)
    const uint32_t GPIOB_OTYPER_OT6 = 1U << 6 ;

  // Field OT5: Port x configuration bits (y = 0..15)
    const uint32_t GPIOB_OTYPER_OT5 = 1U << 5 ;

  // Field OT4: Port x configuration bits (y = 0..15)
    const uint32_t GPIOB_OTYPER_OT4 = 1U << 4 ;

  // Field OT3: Port x configuration bits (y = 0..15)
    const uint32_t GPIOB_OTYPER_OT3 = 1U << 3 ;

  // Field OT2: Port x configuration bits (y = 0..15)
    const uint32_t GPIOB_OTYPER_OT2 = 1U << 2 ;

  // Field OT1: Port x configuration bits (y = 0..15)
    const uint32_t GPIOB_OTYPER_OT1 = 1U << 1 ;

  // Field OT0: Port x configuration bits (y = 0..15)
    const uint32_t GPIOB_OTYPER_OT0 = 1U << 0 ;

//---  Register OSPEEDR: GPIO port output speed
          register
  #define GPIOB_OSPEEDR (* ((volatile uint32_t *) (0x48000400 + 8)))

  // Field OSPEEDR15: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOB_OSPEEDR_OSPEEDR15 (const uint32_t inValue) {return (inValue & 0x3U) << 30 ; }

  // Field OSPEEDR14: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOB_OSPEEDR_OSPEEDR14 (const uint32_t inValue) {return (inValue & 0x3U) << 28 ; }

  // Field OSPEEDR13: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOB_OSPEEDR_OSPEEDR13 (const uint32_t inValue) {return (inValue & 0x3U) << 26 ; }

  // Field OSPEEDR12: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOB_OSPEEDR_OSPEEDR12 (const uint32_t inValue) {return (inValue & 0x3U) << 24 ; }

  // Field OSPEEDR11: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOB_OSPEEDR_OSPEEDR11 (const uint32_t inValue) {return (inValue & 0x3U) << 22 ; }

  // Field OSPEEDR10: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOB_OSPEEDR_OSPEEDR10 (const uint32_t inValue) {return (inValue & 0x3U) << 20 ; }

  // Field OSPEEDR9: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOB_OSPEEDR_OSPEEDR9 (const uint32_t inValue) {return (inValue & 0x3U) << 18 ; }

  // Field OSPEEDR8: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOB_OSPEEDR_OSPEEDR8 (const uint32_t inValue) {return (inValue & 0x3U) << 16 ; }

  // Field OSPEEDR7: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOB_OSPEEDR_OSPEEDR7 (const uint32_t inValue) {return (inValue & 0x3U) << 14 ; }

  // Field OSPEEDR6: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOB_OSPEEDR_OSPEEDR6 (const uint32_t inValue) {return (inValue & 0x3U) << 12 ; }

  // Field OSPEEDR5: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOB_OSPEEDR_OSPEEDR5 (const uint32_t inValue) {return (inValue & 0x3U) << 10 ; }

  // Field OSPEEDR4: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOB_OSPEEDR_OSPEEDR4 (const uint32_t inValue) {return (inValue & 0x3U) << 8 ; }

  // Field OSPEEDR3: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOB_OSPEEDR_OSPEEDR3 (const uint32_t inValue) {return (inValue & 0x3U) << 6 ; }

  // Field OSPEEDR2: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOB_OSPEEDR_OSPEEDR2 (const uint32_t inValue) {return (inValue & 0x3U) << 4 ; }

  // Field OSPEEDR1: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOB_OSPEEDR_OSPEEDR1 (const uint32_t inValue) {return (inValue & 0x3U) << 2 ; }

  // Field OSPEEDR0: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOB_OSPEEDR_OSPEEDR0 (const uint32_t inValue) {return (inValue & 0x3U) << 0 ; }

//---  Register PUPDR: GPIO port pull-up/pull-down
          register
  #define GPIOB_PUPDR (* ((volatile uint32_t *) (0x48000400 + 12)))

  // Field PUPDR15: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOB_PUPDR_PUPDR15 (const uint32_t inValue) {return (inValue & 0x3U) << 30 ; }

  // Field PUPDR14: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOB_PUPDR_PUPDR14 (const uint32_t inValue) {return (inValue & 0x3U) << 28 ; }

  // Field PUPDR13: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOB_PUPDR_PUPDR13 (const uint32_t inValue) {return (inValue & 0x3U) << 26 ; }

  // Field PUPDR12: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOB_PUPDR_PUPDR12 (const uint32_t inValue) {return (inValue & 0x3U) << 24 ; }

  // Field PUPDR11: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOB_PUPDR_PUPDR11 (const uint32_t inValue) {return (inValue & 0x3U) << 22 ; }

  // Field PUPDR10: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOB_PUPDR_PUPDR10 (const uint32_t inValue) {return (inValue & 0x3U) << 20 ; }

  // Field PUPDR9: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOB_PUPDR_PUPDR9 (const uint32_t inValue) {return (inValue & 0x3U) << 18 ; }

  // Field PUPDR8: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOB_PUPDR_PUPDR8 (const uint32_t inValue) {return (inValue & 0x3U) << 16 ; }

  // Field PUPDR7: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOB_PUPDR_PUPDR7 (const uint32_t inValue) {return (inValue & 0x3U) << 14 ; }

  // Field PUPDR6: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOB_PUPDR_PUPDR6 (const uint32_t inValue) {return (inValue & 0x3U) << 12 ; }

  // Field PUPDR5: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOB_PUPDR_PUPDR5 (const uint32_t inValue) {return (inValue & 0x3U) << 10 ; }

  // Field PUPDR4: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOB_PUPDR_PUPDR4 (const uint32_t inValue) {return (inValue & 0x3U) << 8 ; }

  // Field PUPDR3: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOB_PUPDR_PUPDR3 (const uint32_t inValue) {return (inValue & 0x3U) << 6 ; }

  // Field PUPDR2: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOB_PUPDR_PUPDR2 (const uint32_t inValue) {return (inValue & 0x3U) << 4 ; }

  // Field PUPDR1: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOB_PUPDR_PUPDR1 (const uint32_t inValue) {return (inValue & 0x3U) << 2 ; }

  // Field PUPDR0: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOB_PUPDR_PUPDR0 (const uint32_t inValue) {return (inValue & 0x3U) << 0 ; }

//---  Register IDR: GPIO port input data register
  #define GPIOB_IDR (* ((const volatile uint32_t *) (0x48000400 + 16)))

  // Field IDR15: Port input data (y = 0..15)
    const uint32_t GPIOB_IDR_IDR15 = 1U << 15 ;

  // Field IDR14: Port input data (y = 0..15)
    const uint32_t GPIOB_IDR_IDR14 = 1U << 14 ;

  // Field IDR13: Port input data (y = 0..15)
    const uint32_t GPIOB_IDR_IDR13 = 1U << 13 ;

  // Field IDR12: Port input data (y = 0..15)
    const uint32_t GPIOB_IDR_IDR12 = 1U << 12 ;

  // Field IDR11: Port input data (y = 0..15)
    const uint32_t GPIOB_IDR_IDR11 = 1U << 11 ;

  // Field IDR10: Port input data (y = 0..15)
    const uint32_t GPIOB_IDR_IDR10 = 1U << 10 ;

  // Field IDR9: Port input data (y = 0..15)
    const uint32_t GPIOB_IDR_IDR9 = 1U << 9 ;

  // Field IDR8: Port input data (y = 0..15)
    const uint32_t GPIOB_IDR_IDR8 = 1U << 8 ;

  // Field IDR7: Port input data (y = 0..15)
    const uint32_t GPIOB_IDR_IDR7 = 1U << 7 ;

  // Field IDR6: Port input data (y = 0..15)
    const uint32_t GPIOB_IDR_IDR6 = 1U << 6 ;

  // Field IDR5: Port input data (y = 0..15)
    const uint32_t GPIOB_IDR_IDR5 = 1U << 5 ;

  // Field IDR4: Port input data (y = 0..15)
    const uint32_t GPIOB_IDR_IDR4 = 1U << 4 ;

  // Field IDR3: Port input data (y = 0..15)
    const uint32_t GPIOB_IDR_IDR3 = 1U << 3 ;

  // Field IDR2: Port input data (y = 0..15)
    const uint32_t GPIOB_IDR_IDR2 = 1U << 2 ;

  // Field IDR1: Port input data (y = 0..15)
    const uint32_t GPIOB_IDR_IDR1 = 1U << 1 ;

  // Field IDR0: Port input data (y = 0..15)
    const uint32_t GPIOB_IDR_IDR0 = 1U << 0 ;

//---  Register ODR: GPIO port output data register
  #define GPIOB_ODR (* ((volatile uint32_t *) (0x48000400 + 20)))

  // Field ODR15: Port output data (y = 0..15)
    const uint32_t GPIOB_ODR_ODR15 = 1U << 15 ;

  // Field ODR14: Port output data (y = 0..15)
    const uint32_t GPIOB_ODR_ODR14 = 1U << 14 ;

  // Field ODR13: Port output data (y = 0..15)
    const uint32_t GPIOB_ODR_ODR13 = 1U << 13 ;

  // Field ODR12: Port output data (y = 0..15)
    const uint32_t GPIOB_ODR_ODR12 = 1U << 12 ;

  // Field ODR11: Port output data (y = 0..15)
    const uint32_t GPIOB_ODR_ODR11 = 1U << 11 ;

  // Field ODR10: Port output data (y = 0..15)
    const uint32_t GPIOB_ODR_ODR10 = 1U << 10 ;

  // Field ODR9: Port output data (y = 0..15)
    const uint32_t GPIOB_ODR_ODR9 = 1U << 9 ;

  // Field ODR8: Port output data (y = 0..15)
    const uint32_t GPIOB_ODR_ODR8 = 1U << 8 ;

  // Field ODR7: Port output data (y = 0..15)
    const uint32_t GPIOB_ODR_ODR7 = 1U << 7 ;

  // Field ODR6: Port output data (y = 0..15)
    const uint32_t GPIOB_ODR_ODR6 = 1U << 6 ;

  // Field ODR5: Port output data (y = 0..15)
    const uint32_t GPIOB_ODR_ODR5 = 1U << 5 ;

  // Field ODR4: Port output data (y = 0..15)
    const uint32_t GPIOB_ODR_ODR4 = 1U << 4 ;

  // Field ODR3: Port output data (y = 0..15)
    const uint32_t GPIOB_ODR_ODR3 = 1U << 3 ;

  // Field ODR2: Port output data (y = 0..15)
    const uint32_t GPIOB_ODR_ODR2 = 1U << 2 ;

  // Field ODR1: Port output data (y = 0..15)
    const uint32_t GPIOB_ODR_ODR1 = 1U << 1 ;

  // Field ODR0: Port output data (y = 0..15)
    const uint32_t GPIOB_ODR_ODR0 = 1U << 0 ;

//---  Register BSRR: GPIO port bit set/reset
          register
  #define GPIOB_BSRR (* ((volatile uint32_t *) (0x48000400 + 24)))

  // Field BR15: Port x reset bit y (y = 0..15)
    const uint32_t GPIOB_BSRR_BR15 = 1U << 31 ;

  // Field BR14: Port x reset bit y (y = 0..15)
    const uint32_t GPIOB_BSRR_BR14 = 1U << 30 ;

  // Field BR13: Port x reset bit y (y = 0..15)
    const uint32_t GPIOB_BSRR_BR13 = 1U << 29 ;

  // Field BR12: Port x reset bit y (y = 0..15)
    const uint32_t GPIOB_BSRR_BR12 = 1U << 28 ;

  // Field BR11: Port x reset bit y (y = 0..15)
    const uint32_t GPIOB_BSRR_BR11 = 1U << 27 ;

  // Field BR10: Port x reset bit y (y = 0..15)
    const uint32_t GPIOB_BSRR_BR10 = 1U << 26 ;

  // Field BR9: Port x reset bit y (y = 0..15)
    const uint32_t GPIOB_BSRR_BR9 = 1U << 25 ;

  // Field BR8: Port x reset bit y (y = 0..15)
    const uint32_t GPIOB_BSRR_BR8 = 1U << 24 ;

  // Field BR7: Port x reset bit y (y = 0..15)
    const uint32_t GPIOB_BSRR_BR7 = 1U << 23 ;

  // Field BR6: Port x reset bit y (y = 0..15)
    const uint32_t GPIOB_BSRR_BR6 = 1U << 22 ;

  // Field BR5: Port x reset bit y (y = 0..15)
    const uint32_t GPIOB_BSRR_BR5 = 1U << 21 ;

  // Field BR4: Port x reset bit y (y = 0..15)
    const uint32_t GPIOB_BSRR_BR4 = 1U << 20 ;

  // Field BR3: Port x reset bit y (y = 0..15)
    const uint32_t GPIOB_BSRR_BR3 = 1U << 19 ;

  // Field BR2: Port x reset bit y (y = 0..15)
    const uint32_t GPIOB_BSRR_BR2 = 1U << 18 ;

  // Field BR1: Port x reset bit y (y = 0..15)
    const uint32_t GPIOB_BSRR_BR1 = 1U << 17 ;

  // Field BR0: Port x set bit y (y= 0..15)
    const uint32_t GPIOB_BSRR_BR0 = 1U << 16 ;

  // Field BS15: Port x set bit y (y= 0..15)
    const uint32_t GPIOB_BSRR_BS15 = 1U << 15 ;

  // Field BS14: Port x set bit y (y= 0..15)
    const uint32_t GPIOB_BSRR_BS14 = 1U << 14 ;

  // Field BS13: Port x set bit y (y= 0..15)
    const uint32_t GPIOB_BSRR_BS13 = 1U << 13 ;

  // Field BS12: Port x set bit y (y= 0..15)
    const uint32_t GPIOB_BSRR_BS12 = 1U << 12 ;

  // Field BS11: Port x set bit y (y= 0..15)
    const uint32_t GPIOB_BSRR_BS11 = 1U << 11 ;

  // Field BS10: Port x set bit y (y= 0..15)
    const uint32_t GPIOB_BSRR_BS10 = 1U << 10 ;

  // Field BS9: Port x set bit y (y= 0..15)
    const uint32_t GPIOB_BSRR_BS9 = 1U << 9 ;

  // Field BS8: Port x set bit y (y= 0..15)
    const uint32_t GPIOB_BSRR_BS8 = 1U << 8 ;

  // Field BS7: Port x set bit y (y= 0..15)
    const uint32_t GPIOB_BSRR_BS7 = 1U << 7 ;

  // Field BS6: Port x set bit y (y= 0..15)
    const uint32_t GPIOB_BSRR_BS6 = 1U << 6 ;

  // Field BS5: Port x set bit y (y= 0..15)
    const uint32_t GPIOB_BSRR_BS5 = 1U << 5 ;

  // Field BS4: Port x set bit y (y= 0..15)
    const uint32_t GPIOB_BSRR_BS4 = 1U << 4 ;

  // Field BS3: Port x set bit y (y= 0..15)
    const uint32_t GPIOB_BSRR_BS3 = 1U << 3 ;

  // Field BS2: Port x set bit y (y= 0..15)
    const uint32_t GPIOB_BSRR_BS2 = 1U << 2 ;

  // Field BS1: Port x set bit y (y= 0..15)
    const uint32_t GPIOB_BSRR_BS1 = 1U << 1 ;

  // Field BS0: Port x set bit y (y= 0..15)
    const uint32_t GPIOB_BSRR_BS0 = 1U << 0 ;

//---  Register LCKR: GPIO port configuration lock
          register
  #define GPIOB_LCKR (* ((volatile uint32_t *) (0x48000400 + 28)))

  // Field LCKK: Port x lock bit y (y= 0..15)
    const uint32_t GPIOB_LCKR_LCKK = 1U << 16 ;

  // Field LCK15: Port x lock bit y (y= 0..15)
    const uint32_t GPIOB_LCKR_LCK15 = 1U << 15 ;

  // Field LCK14: Port x lock bit y (y= 0..15)
    const uint32_t GPIOB_LCKR_LCK14 = 1U << 14 ;

  // Field LCK13: Port x lock bit y (y= 0..15)
    const uint32_t GPIOB_LCKR_LCK13 = 1U << 13 ;

  // Field LCK12: Port x lock bit y (y= 0..15)
    const uint32_t GPIOB_LCKR_LCK12 = 1U << 12 ;

  // Field LCK11: Port x lock bit y (y= 0..15)
    const uint32_t GPIOB_LCKR_LCK11 = 1U << 11 ;

  // Field LCK10: Port x lock bit y (y= 0..15)
    const uint32_t GPIOB_LCKR_LCK10 = 1U << 10 ;

  // Field LCK9: Port x lock bit y (y= 0..15)
    const uint32_t GPIOB_LCKR_LCK9 = 1U << 9 ;

  // Field LCK8: Port x lock bit y (y= 0..15)
    const uint32_t GPIOB_LCKR_LCK8 = 1U << 8 ;

  // Field LCK7: Port x lock bit y (y= 0..15)
    const uint32_t GPIOB_LCKR_LCK7 = 1U << 7 ;

  // Field LCK6: Port x lock bit y (y= 0..15)
    const uint32_t GPIOB_LCKR_LCK6 = 1U << 6 ;

  // Field LCK5: Port x lock bit y (y= 0..15)
    const uint32_t GPIOB_LCKR_LCK5 = 1U << 5 ;

  // Field LCK4: Port x lock bit y (y= 0..15)
    const uint32_t GPIOB_LCKR_LCK4 = 1U << 4 ;

  // Field LCK3: Port x lock bit y (y= 0..15)
    const uint32_t GPIOB_LCKR_LCK3 = 1U << 3 ;

  // Field LCK2: Port x lock bit y (y= 0..15)
    const uint32_t GPIOB_LCKR_LCK2 = 1U << 2 ;

  // Field LCK1: Port x lock bit y (y= 0..15)
    const uint32_t GPIOB_LCKR_LCK1 = 1U << 1 ;

  // Field LCK0: Port x lock bit y (y= 0..15)
    const uint32_t GPIOB_LCKR_LCK0 = 1U << 0 ;

//---  Register AFRL: GPIO alternate function low
          register
  #define GPIOB_AFRL (* ((volatile uint32_t *) (0x48000400 + 32)))

  // Field AFRL7: Alternate function selection for port x bit y (y = 0..7)
    inline uint32_t GPIOB_AFRL_AFRL7 (const uint32_t inValue) {return (inValue & 0xfU) << 28 ; }

  // Field AFRL6: Alternate function selection for port x bit y (y = 0..7)
    inline uint32_t GPIOB_AFRL_AFRL6 (const uint32_t inValue) {return (inValue & 0xfU) << 24 ; }

  // Field AFRL5: Alternate function selection for port x bit y (y = 0..7)
    inline uint32_t GPIOB_AFRL_AFRL5 (const uint32_t inValue) {return (inValue & 0xfU) << 20 ; }

  // Field AFRL4: Alternate function selection for port x bit y (y = 0..7)
    inline uint32_t GPIOB_AFRL_AFRL4 (const uint32_t inValue) {return (inValue & 0xfU) << 16 ; }

  // Field AFRL3: Alternate function selection for port x bit y (y = 0..7)
    inline uint32_t GPIOB_AFRL_AFRL3 (const uint32_t inValue) {return (inValue & 0xfU) << 12 ; }

  // Field AFRL2: Alternate function selection for port x bit y (y = 0..7)
    inline uint32_t GPIOB_AFRL_AFRL2 (const uint32_t inValue) {return (inValue & 0xfU) << 8 ; }

  // Field AFRL1: Alternate function selection for port x bit y (y = 0..7)
    inline uint32_t GPIOB_AFRL_AFRL1 (const uint32_t inValue) {return (inValue & 0xfU) << 4 ; }

  // Field AFRL0: Alternate function selection for port x bit y (y = 0..7)
    inline uint32_t GPIOB_AFRL_AFRL0 (const uint32_t inValue) {return (inValue & 0xfU) << 0 ; }

//---  Register AFRH: GPIO alternate function high
          register
  #define GPIOB_AFRH (* ((volatile uint32_t *) (0x48000400 + 36)))

  // Field AFRH15: Alternate function selection for port x bit y (y = 8..15)
    inline uint32_t GPIOB_AFRH_AFRH15 (const uint32_t inValue) {return (inValue & 0xfU) << 28 ; }

  // Field AFRH14: Alternate function selection for port x bit y (y = 8..15)
    inline uint32_t GPIOB_AFRH_AFRH14 (const uint32_t inValue) {return (inValue & 0xfU) << 24 ; }

  // Field AFRH13: Alternate function selection for port x bit y (y = 8..15)
    inline uint32_t GPIOB_AFRH_AFRH13 (const uint32_t inValue) {return (inValue & 0xfU) << 20 ; }

  // Field AFRH12: Alternate function selection for port x bit y (y = 8..15)
    inline uint32_t GPIOB_AFRH_AFRH12 (const uint32_t inValue) {return (inValue & 0xfU) << 16 ; }

  // Field AFRH11: Alternate function selection for port x bit y (y = 8..15)
    inline uint32_t GPIOB_AFRH_AFRH11 (const uint32_t inValue) {return (inValue & 0xfU) << 12 ; }

  // Field AFRH10: Alternate function selection for port x bit y (y = 8..15)
    inline uint32_t GPIOB_AFRH_AFRH10 (const uint32_t inValue) {return (inValue & 0xfU) << 8 ; }

  // Field AFRH9: Alternate function selection for port x bit y (y = 8..15)
    inline uint32_t GPIOB_AFRH_AFRH9 (const uint32_t inValue) {return (inValue & 0xfU) << 4 ; }

  // Field AFRH8: Alternate function selection for port x bit y (y = 8..15)
    inline uint32_t GPIOB_AFRH_AFRH8 (const uint32_t inValue) {return (inValue & 0xfU) << 0 ; }

//------------------------------------------------------------------------------
// Peripheral GPIOC: General-purpose I/Os
//------------------------------------------------------------------------------

//---  Register MODER: GPIO port mode register
  #define GPIOC_MODER (* ((volatile uint32_t *) (0x48000800 + 0)))

  // Field MODER15: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOC_MODER_MODER15 (const uint32_t inValue) {return (inValue & 0x3U) << 30 ; }

  // Field MODER14: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOC_MODER_MODER14 (const uint32_t inValue) {return (inValue & 0x3U) << 28 ; }

  // Field MODER13: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOC_MODER_MODER13 (const uint32_t inValue) {return (inValue & 0x3U) << 26 ; }

  // Field MODER12: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOC_MODER_MODER12 (const uint32_t inValue) {return (inValue & 0x3U) << 24 ; }

  // Field MODER11: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOC_MODER_MODER11 (const uint32_t inValue) {return (inValue & 0x3U) << 22 ; }

  // Field MODER10: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOC_MODER_MODER10 (const uint32_t inValue) {return (inValue & 0x3U) << 20 ; }

  // Field MODER9: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOC_MODER_MODER9 (const uint32_t inValue) {return (inValue & 0x3U) << 18 ; }

  // Field MODER8: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOC_MODER_MODER8 (const uint32_t inValue) {return (inValue & 0x3U) << 16 ; }

  // Field MODER7: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOC_MODER_MODER7 (const uint32_t inValue) {return (inValue & 0x3U) << 14 ; }

  // Field MODER6: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOC_MODER_MODER6 (const uint32_t inValue) {return (inValue & 0x3U) << 12 ; }

  // Field MODER5: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOC_MODER_MODER5 (const uint32_t inValue) {return (inValue & 0x3U) << 10 ; }

  // Field MODER4: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOC_MODER_MODER4 (const uint32_t inValue) {return (inValue & 0x3U) << 8 ; }

  // Field MODER3: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOC_MODER_MODER3 (const uint32_t inValue) {return (inValue & 0x3U) << 6 ; }

  // Field MODER2: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOC_MODER_MODER2 (const uint32_t inValue) {return (inValue & 0x3U) << 4 ; }

  // Field MODER1: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOC_MODER_MODER1 (const uint32_t inValue) {return (inValue & 0x3U) << 2 ; }

  // Field MODER0: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOC_MODER_MODER0 (const uint32_t inValue) {return (inValue & 0x3U) << 0 ; }

//---  Register OTYPER: GPIO port output type register
  #define GPIOC_OTYPER (* ((volatile uint32_t *) (0x48000800 + 4)))

  // Field OT15: Port x configuration bits (y = 0..15)
    const uint32_t GPIOC_OTYPER_OT15 = 1U << 15 ;

  // Field OT14: Port x configuration bits (y = 0..15)
    const uint32_t GPIOC_OTYPER_OT14 = 1U << 14 ;

  // Field OT13: Port x configuration bits (y = 0..15)
    const uint32_t GPIOC_OTYPER_OT13 = 1U << 13 ;

  // Field OT12: Port x configuration bits (y = 0..15)
    const uint32_t GPIOC_OTYPER_OT12 = 1U << 12 ;

  // Field OT11: Port x configuration bits (y = 0..15)
    const uint32_t GPIOC_OTYPER_OT11 = 1U << 11 ;

  // Field OT10: Port x configuration bits (y = 0..15)
    const uint32_t GPIOC_OTYPER_OT10 = 1U << 10 ;

  // Field OT9: Port x configuration bits (y = 0..15)
    const uint32_t GPIOC_OTYPER_OT9 = 1U << 9 ;

  // Field OT8: Port x configuration bits (y = 0..15)
    const uint32_t GPIOC_OTYPER_OT8 = 1U << 8 ;

  // Field OT7: Port x configuration bits (y = 0..15)
    const uint32_t GPIOC_OTYPER_OT7 = 1U << 7 ;

  // Field OT6: Port x configuration bits (y = 0..15)
    const uint32_t GPIOC_OTYPER_OT6 = 1U << 6 ;

  // Field OT5: Port x configuration bits (y = 0..15)
    const uint32_t GPIOC_OTYPER_OT5 = 1U << 5 ;

  // Field OT4: Port x configuration bits (y = 0..15)
    const uint32_t GPIOC_OTYPER_OT4 = 1U << 4 ;

  // Field OT3: Port x configuration bits (y = 0..15)
    const uint32_t GPIOC_OTYPER_OT3 = 1U << 3 ;

  // Field OT2: Port x configuration bits (y = 0..15)
    const uint32_t GPIOC_OTYPER_OT2 = 1U << 2 ;

  // Field OT1: Port x configuration bits (y = 0..15)
    const uint32_t GPIOC_OTYPER_OT1 = 1U << 1 ;

  // Field OT0: Port x configuration bits (y = 0..15)
    const uint32_t GPIOC_OTYPER_OT0 = 1U << 0 ;

//---  Register OSPEEDR: GPIO port output speed
          register
  #define GPIOC_OSPEEDR (* ((volatile uint32_t *) (0x48000800 + 8)))

  // Field OSPEEDR15: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOC_OSPEEDR_OSPEEDR15 (const uint32_t inValue) {return (inValue & 0x3U) << 30 ; }

  // Field OSPEEDR14: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOC_OSPEEDR_OSPEEDR14 (const uint32_t inValue) {return (inValue & 0x3U) << 28 ; }

  // Field OSPEEDR13: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOC_OSPEEDR_OSPEEDR13 (const uint32_t inValue) {return (inValue & 0x3U) << 26 ; }

  // Field OSPEEDR12: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOC_OSPEEDR_OSPEEDR12 (const uint32_t inValue) {return (inValue & 0x3U) << 24 ; }

  // Field OSPEEDR11: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOC_OSPEEDR_OSPEEDR11 (const uint32_t inValue) {return (inValue & 0x3U) << 22 ; }

  // Field OSPEEDR10: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOC_OSPEEDR_OSPEEDR10 (const uint32_t inValue) {return (inValue & 0x3U) << 20 ; }

  // Field OSPEEDR9: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOC_OSPEEDR_OSPEEDR9 (const uint32_t inValue) {return (inValue & 0x3U) << 18 ; }

  // Field OSPEEDR8: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOC_OSPEEDR_OSPEEDR8 (const uint32_t inValue) {return (inValue & 0x3U) << 16 ; }

  // Field OSPEEDR7: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOC_OSPEEDR_OSPEEDR7 (const uint32_t inValue) {return (inValue & 0x3U) << 14 ; }

  // Field OSPEEDR6: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOC_OSPEEDR_OSPEEDR6 (const uint32_t inValue) {return (inValue & 0x3U) << 12 ; }

  // Field OSPEEDR5: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOC_OSPEEDR_OSPEEDR5 (const uint32_t inValue) {return (inValue & 0x3U) << 10 ; }

  // Field OSPEEDR4: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOC_OSPEEDR_OSPEEDR4 (const uint32_t inValue) {return (inValue & 0x3U) << 8 ; }

  // Field OSPEEDR3: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOC_OSPEEDR_OSPEEDR3 (const uint32_t inValue) {return (inValue & 0x3U) << 6 ; }

  // Field OSPEEDR2: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOC_OSPEEDR_OSPEEDR2 (const uint32_t inValue) {return (inValue & 0x3U) << 4 ; }

  // Field OSPEEDR1: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOC_OSPEEDR_OSPEEDR1 (const uint32_t inValue) {return (inValue & 0x3U) << 2 ; }

  // Field OSPEEDR0: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOC_OSPEEDR_OSPEEDR0 (const uint32_t inValue) {return (inValue & 0x3U) << 0 ; }

//---  Register PUPDR: GPIO port pull-up/pull-down
          register
  #define GPIOC_PUPDR (* ((volatile uint32_t *) (0x48000800 + 12)))

  // Field PUPDR15: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOC_PUPDR_PUPDR15 (const uint32_t inValue) {return (inValue & 0x3U) << 30 ; }

  // Field PUPDR14: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOC_PUPDR_PUPDR14 (const uint32_t inValue) {return (inValue & 0x3U) << 28 ; }

  // Field PUPDR13: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOC_PUPDR_PUPDR13 (const uint32_t inValue) {return (inValue & 0x3U) << 26 ; }

  // Field PUPDR12: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOC_PUPDR_PUPDR12 (const uint32_t inValue) {return (inValue & 0x3U) << 24 ; }

  // Field PUPDR11: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOC_PUPDR_PUPDR11 (const uint32_t inValue) {return (inValue & 0x3U) << 22 ; }

  // Field PUPDR10: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOC_PUPDR_PUPDR10 (const uint32_t inValue) {return (inValue & 0x3U) << 20 ; }

  // Field PUPDR9: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOC_PUPDR_PUPDR9 (const uint32_t inValue) {return (inValue & 0x3U) << 18 ; }

  // Field PUPDR8: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOC_PUPDR_PUPDR8 (const uint32_t inValue) {return (inValue & 0x3U) << 16 ; }

  // Field PUPDR7: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOC_PUPDR_PUPDR7 (const uint32_t inValue) {return (inValue & 0x3U) << 14 ; }

  // Field PUPDR6: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOC_PUPDR_PUPDR6 (const uint32_t inValue) {return (inValue & 0x3U) << 12 ; }

  // Field PUPDR5: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOC_PUPDR_PUPDR5 (const uint32_t inValue) {return (inValue & 0x3U) << 10 ; }

  // Field PUPDR4: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOC_PUPDR_PUPDR4 (const uint32_t inValue) {return (inValue & 0x3U) << 8 ; }

  // Field PUPDR3: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOC_PUPDR_PUPDR3 (const uint32_t inValue) {return (inValue & 0x3U) << 6 ; }

  // Field PUPDR2: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOC_PUPDR_PUPDR2 (const uint32_t inValue) {return (inValue & 0x3U) << 4 ; }

  // Field PUPDR1: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOC_PUPDR_PUPDR1 (const uint32_t inValue) {return (inValue & 0x3U) << 2 ; }

  // Field PUPDR0: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOC_PUPDR_PUPDR0 (const uint32_t inValue) {return (inValue & 0x3U) << 0 ; }

//---  Register IDR: GPIO port input data register
  #define GPIOC_IDR (* ((const volatile uint32_t *) (0x48000800 + 16)))

  // Field IDR15: Port input data (y = 0..15)
    const uint32_t GPIOC_IDR_IDR15 = 1U << 15 ;

  // Field IDR14: Port input data (y = 0..15)
    const uint32_t GPIOC_IDR_IDR14 = 1U << 14 ;

  // Field IDR13: Port input data (y = 0..15)
    const uint32_t GPIOC_IDR_IDR13 = 1U << 13 ;

  // Field IDR12: Port input data (y = 0..15)
    const uint32_t GPIOC_IDR_IDR12 = 1U << 12 ;

  // Field IDR11: Port input data (y = 0..15)
    const uint32_t GPIOC_IDR_IDR11 = 1U << 11 ;

  // Field IDR10: Port input data (y = 0..15)
    const uint32_t GPIOC_IDR_IDR10 = 1U << 10 ;

  // Field IDR9: Port input data (y = 0..15)
    const uint32_t GPIOC_IDR_IDR9 = 1U << 9 ;

  // Field IDR8: Port input data (y = 0..15)
    const uint32_t GPIOC_IDR_IDR8 = 1U << 8 ;

  // Field IDR7: Port input data (y = 0..15)
    const uint32_t GPIOC_IDR_IDR7 = 1U << 7 ;

  // Field IDR6: Port input data (y = 0..15)
    const uint32_t GPIOC_IDR_IDR6 = 1U << 6 ;

  // Field IDR5: Port input data (y = 0..15)
    const uint32_t GPIOC_IDR_IDR5 = 1U << 5 ;

  // Field IDR4: Port input data (y = 0..15)
    const uint32_t GPIOC_IDR_IDR4 = 1U << 4 ;

  // Field IDR3: Port input data (y = 0..15)
    const uint32_t GPIOC_IDR_IDR3 = 1U << 3 ;

  // Field IDR2: Port input data (y = 0..15)
    const uint32_t GPIOC_IDR_IDR2 = 1U << 2 ;

  // Field IDR1: Port input data (y = 0..15)
    const uint32_t GPIOC_IDR_IDR1 = 1U << 1 ;

  // Field IDR0: Port input data (y = 0..15)
    const uint32_t GPIOC_IDR_IDR0 = 1U << 0 ;

//---  Register ODR: GPIO port output data register
  #define GPIOC_ODR (* ((volatile uint32_t *) (0x48000800 + 20)))

  // Field ODR15: Port output data (y = 0..15)
    const uint32_t GPIOC_ODR_ODR15 = 1U << 15 ;

  // Field ODR14: Port output data (y = 0..15)
    const uint32_t GPIOC_ODR_ODR14 = 1U << 14 ;

  // Field ODR13: Port output data (y = 0..15)
    const uint32_t GPIOC_ODR_ODR13 = 1U << 13 ;

  // Field ODR12: Port output data (y = 0..15)
    const uint32_t GPIOC_ODR_ODR12 = 1U << 12 ;

  // Field ODR11: Port output data (y = 0..15)
    const uint32_t GPIOC_ODR_ODR11 = 1U << 11 ;

  // Field ODR10: Port output data (y = 0..15)
    const uint32_t GPIOC_ODR_ODR10 = 1U << 10 ;

  // Field ODR9: Port output data (y = 0..15)
    const uint32_t GPIOC_ODR_ODR9 = 1U << 9 ;

  // Field ODR8: Port output data (y = 0..15)
    const uint32_t GPIOC_ODR_ODR8 = 1U << 8 ;

  // Field ODR7: Port output data (y = 0..15)
    const uint32_t GPIOC_ODR_ODR7 = 1U << 7 ;

  // Field ODR6: Port output data (y = 0..15)
    const uint32_t GPIOC_ODR_ODR6 = 1U << 6 ;

  // Field ODR5: Port output data (y = 0..15)
    const uint32_t GPIOC_ODR_ODR5 = 1U << 5 ;

  // Field ODR4: Port output data (y = 0..15)
    const uint32_t GPIOC_ODR_ODR4 = 1U << 4 ;

  // Field ODR3: Port output data (y = 0..15)
    const uint32_t GPIOC_ODR_ODR3 = 1U << 3 ;

  // Field ODR2: Port output data (y = 0..15)
    const uint32_t GPIOC_ODR_ODR2 = 1U << 2 ;

  // Field ODR1: Port output data (y = 0..15)
    const uint32_t GPIOC_ODR_ODR1 = 1U << 1 ;

  // Field ODR0: Port output data (y = 0..15)
    const uint32_t GPIOC_ODR_ODR0 = 1U << 0 ;

//---  Register BSRR: GPIO port bit set/reset
          register
  #define GPIOC_BSRR (* ((volatile uint32_t *) (0x48000800 + 24)))

  // Field BR15: Port x reset bit y (y = 0..15)
    const uint32_t GPIOC_BSRR_BR15 = 1U << 31 ;

  // Field BR14: Port x reset bit y (y = 0..15)
    const uint32_t GPIOC_BSRR_BR14 = 1U << 30 ;

  // Field BR13: Port x reset bit y (y = 0..15)
    const uint32_t GPIOC_BSRR_BR13 = 1U << 29 ;

  // Field BR12: Port x reset bit y (y = 0..15)
    const uint32_t GPIOC_BSRR_BR12 = 1U << 28 ;

  // Field BR11: Port x reset bit y (y = 0..15)
    const uint32_t GPIOC_BSRR_BR11 = 1U << 27 ;

  // Field BR10: Port x reset bit y (y = 0..15)
    const uint32_t GPIOC_BSRR_BR10 = 1U << 26 ;

  // Field BR9: Port x reset bit y (y = 0..15)
    const uint32_t GPIOC_BSRR_BR9 = 1U << 25 ;

  // Field BR8: Port x reset bit y (y = 0..15)
    const uint32_t GPIOC_BSRR_BR8 = 1U << 24 ;

  // Field BR7: Port x reset bit y (y = 0..15)
    const uint32_t GPIOC_BSRR_BR7 = 1U << 23 ;

  // Field BR6: Port x reset bit y (y = 0..15)
    const uint32_t GPIOC_BSRR_BR6 = 1U << 22 ;

  // Field BR5: Port x reset bit y (y = 0..15)
    const uint32_t GPIOC_BSRR_BR5 = 1U << 21 ;

  // Field BR4: Port x reset bit y (y = 0..15)
    const uint32_t GPIOC_BSRR_BR4 = 1U << 20 ;

  // Field BR3: Port x reset bit y (y = 0..15)
    const uint32_t GPIOC_BSRR_BR3 = 1U << 19 ;

  // Field BR2: Port x reset bit y (y = 0..15)
    const uint32_t GPIOC_BSRR_BR2 = 1U << 18 ;

  // Field BR1: Port x reset bit y (y = 0..15)
    const uint32_t GPIOC_BSRR_BR1 = 1U << 17 ;

  // Field BR0: Port x set bit y (y= 0..15)
    const uint32_t GPIOC_BSRR_BR0 = 1U << 16 ;

  // Field BS15: Port x set bit y (y= 0..15)
    const uint32_t GPIOC_BSRR_BS15 = 1U << 15 ;

  // Field BS14: Port x set bit y (y= 0..15)
    const uint32_t GPIOC_BSRR_BS14 = 1U << 14 ;

  // Field BS13: Port x set bit y (y= 0..15)
    const uint32_t GPIOC_BSRR_BS13 = 1U << 13 ;

  // Field BS12: Port x set bit y (y= 0..15)
    const uint32_t GPIOC_BSRR_BS12 = 1U << 12 ;

  // Field BS11: Port x set bit y (y= 0..15)
    const uint32_t GPIOC_BSRR_BS11 = 1U << 11 ;

  // Field BS10: Port x set bit y (y= 0..15)
    const uint32_t GPIOC_BSRR_BS10 = 1U << 10 ;

  // Field BS9: Port x set bit y (y= 0..15)
    const uint32_t GPIOC_BSRR_BS9 = 1U << 9 ;

  // Field BS8: Port x set bit y (y= 0..15)
    const uint32_t GPIOC_BSRR_BS8 = 1U << 8 ;

  // Field BS7: Port x set bit y (y= 0..15)
    const uint32_t GPIOC_BSRR_BS7 = 1U << 7 ;

  // Field BS6: Port x set bit y (y= 0..15)
    const uint32_t GPIOC_BSRR_BS6 = 1U << 6 ;

  // Field BS5: Port x set bit y (y= 0..15)
    const uint32_t GPIOC_BSRR_BS5 = 1U << 5 ;

  // Field BS4: Port x set bit y (y= 0..15)
    const uint32_t GPIOC_BSRR_BS4 = 1U << 4 ;

  // Field BS3: Port x set bit y (y= 0..15)
    const uint32_t GPIOC_BSRR_BS3 = 1U << 3 ;

  // Field BS2: Port x set bit y (y= 0..15)
    const uint32_t GPIOC_BSRR_BS2 = 1U << 2 ;

  // Field BS1: Port x set bit y (y= 0..15)
    const uint32_t GPIOC_BSRR_BS1 = 1U << 1 ;

  // Field BS0: Port x set bit y (y= 0..15)
    const uint32_t GPIOC_BSRR_BS0 = 1U << 0 ;

//---  Register LCKR: GPIO port configuration lock
          register
  #define GPIOC_LCKR (* ((volatile uint32_t *) (0x48000800 + 28)))

  // Field LCKK: Port x lock bit y (y= 0..15)
    const uint32_t GPIOC_LCKR_LCKK = 1U << 16 ;

  // Field LCK15: Port x lock bit y (y= 0..15)
    const uint32_t GPIOC_LCKR_LCK15 = 1U << 15 ;

  // Field LCK14: Port x lock bit y (y= 0..15)
    const uint32_t GPIOC_LCKR_LCK14 = 1U << 14 ;

  // Field LCK13: Port x lock bit y (y= 0..15)
    const uint32_t GPIOC_LCKR_LCK13 = 1U << 13 ;

  // Field LCK12: Port x lock bit y (y= 0..15)
    const uint32_t GPIOC_LCKR_LCK12 = 1U << 12 ;

  // Field LCK11: Port x lock bit y (y= 0..15)
    const uint32_t GPIOC_LCKR_LCK11 = 1U << 11 ;

  // Field LCK10: Port x lock bit y (y= 0..15)
    const uint32_t GPIOC_LCKR_LCK10 = 1U << 10 ;

  // Field LCK9: Port x lock bit y (y= 0..15)
    const uint32_t GPIOC_LCKR_LCK9 = 1U << 9 ;

  // Field LCK8: Port x lock bit y (y= 0..15)
    const uint32_t GPIOC_LCKR_LCK8 = 1U << 8 ;

  // Field LCK7: Port x lock bit y (y= 0..15)
    const uint32_t GPIOC_LCKR_LCK7 = 1U << 7 ;

  // Field LCK6: Port x lock bit y (y= 0..15)
    const uint32_t GPIOC_LCKR_LCK6 = 1U << 6 ;

  // Field LCK5: Port x lock bit y (y= 0..15)
    const uint32_t GPIOC_LCKR_LCK5 = 1U << 5 ;

  // Field LCK4: Port x lock bit y (y= 0..15)
    const uint32_t GPIOC_LCKR_LCK4 = 1U << 4 ;

  // Field LCK3: Port x lock bit y (y= 0..15)
    const uint32_t GPIOC_LCKR_LCK3 = 1U << 3 ;

  // Field LCK2: Port x lock bit y (y= 0..15)
    const uint32_t GPIOC_LCKR_LCK2 = 1U << 2 ;

  // Field LCK1: Port x lock bit y (y= 0..15)
    const uint32_t GPIOC_LCKR_LCK1 = 1U << 1 ;

  // Field LCK0: Port x lock bit y (y= 0..15)
    const uint32_t GPIOC_LCKR_LCK0 = 1U << 0 ;

//---  Register AFRL: GPIO alternate function low
          register
  #define GPIOC_AFRL (* ((volatile uint32_t *) (0x48000800 + 32)))

  // Field AFRL7: Alternate function selection for port x bit y (y = 0..7)
    inline uint32_t GPIOC_AFRL_AFRL7 (const uint32_t inValue) {return (inValue & 0xfU) << 28 ; }

  // Field AFRL6: Alternate function selection for port x bit y (y = 0..7)
    inline uint32_t GPIOC_AFRL_AFRL6 (const uint32_t inValue) {return (inValue & 0xfU) << 24 ; }

  // Field AFRL5: Alternate function selection for port x bit y (y = 0..7)
    inline uint32_t GPIOC_AFRL_AFRL5 (const uint32_t inValue) {return (inValue & 0xfU) << 20 ; }

  // Field AFRL4: Alternate function selection for port x bit y (y = 0..7)
    inline uint32_t GPIOC_AFRL_AFRL4 (const uint32_t inValue) {return (inValue & 0xfU) << 16 ; }

  // Field AFRL3: Alternate function selection for port x bit y (y = 0..7)
    inline uint32_t GPIOC_AFRL_AFRL3 (const uint32_t inValue) {return (inValue & 0xfU) << 12 ; }

  // Field AFRL2: Alternate function selection for port x bit y (y = 0..7)
    inline uint32_t GPIOC_AFRL_AFRL2 (const uint32_t inValue) {return (inValue & 0xfU) << 8 ; }

  // Field AFRL1: Alternate function selection for port x bit y (y = 0..7)
    inline uint32_t GPIOC_AFRL_AFRL1 (const uint32_t inValue) {return (inValue & 0xfU) << 4 ; }

  // Field AFRL0: Alternate function selection for port x bit y (y = 0..7)
    inline uint32_t GPIOC_AFRL_AFRL0 (const uint32_t inValue) {return (inValue & 0xfU) << 0 ; }

//---  Register AFRH: GPIO alternate function high
          register
  #define GPIOC_AFRH (* ((volatile uint32_t *) (0x48000800 + 36)))

  // Field AFRH15: Alternate function selection for port x bit y (y = 8..15)
    inline uint32_t GPIOC_AFRH_AFRH15 (const uint32_t inValue) {return (inValue & 0xfU) << 28 ; }

  // Field AFRH14: Alternate function selection for port x bit y (y = 8..15)
    inline uint32_t GPIOC_AFRH_AFRH14 (const uint32_t inValue) {return (inValue & 0xfU) << 24 ; }

  // Field AFRH13: Alternate function selection for port x bit y (y = 8..15)
    inline uint32_t GPIOC_AFRH_AFRH13 (const uint32_t inValue) {return (inValue & 0xfU) << 20 ; }

  // Field AFRH12: Alternate function selection for port x bit y (y = 8..15)
    inline uint32_t GPIOC_AFRH_AFRH12 (const uint32_t inValue) {return (inValue & 0xfU) << 16 ; }

  // Field AFRH11: Alternate function selection for port x bit y (y = 8..15)
    inline uint32_t GPIOC_AFRH_AFRH11 (const uint32_t inValue) {return (inValue & 0xfU) << 12 ; }

  // Field AFRH10: Alternate function selection for port x bit y (y = 8..15)
    inline uint32_t GPIOC_AFRH_AFRH10 (const uint32_t inValue) {return (inValue & 0xfU) << 8 ; }

  // Field AFRH9: Alternate function selection for port x bit y (y = 8..15)
    inline uint32_t GPIOC_AFRH_AFRH9 (const uint32_t inValue) {return (inValue & 0xfU) << 4 ; }

  // Field AFRH8: Alternate function selection for port x bit y (y = 8..15)
    inline uint32_t GPIOC_AFRH_AFRH8 (const uint32_t inValue) {return (inValue & 0xfU) << 0 ; }

//------------------------------------------------------------------------------
// Peripheral GPIOD
//------------------------------------------------------------------------------

//---  Register MODER: GPIO port mode register
  #define GPIOD_MODER (* ((volatile uint32_t *) (0x48000c00 + 0)))

  // Field MODER15: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOD_MODER_MODER15 (const uint32_t inValue) {return (inValue & 0x3U) << 30 ; }

  // Field MODER14: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOD_MODER_MODER14 (const uint32_t inValue) {return (inValue & 0x3U) << 28 ; }

  // Field MODER13: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOD_MODER_MODER13 (const uint32_t inValue) {return (inValue & 0x3U) << 26 ; }

  // Field MODER12: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOD_MODER_MODER12 (const uint32_t inValue) {return (inValue & 0x3U) << 24 ; }

  // Field MODER11: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOD_MODER_MODER11 (const uint32_t inValue) {return (inValue & 0x3U) << 22 ; }

  // Field MODER10: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOD_MODER_MODER10 (const uint32_t inValue) {return (inValue & 0x3U) << 20 ; }

  // Field MODER9: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOD_MODER_MODER9 (const uint32_t inValue) {return (inValue & 0x3U) << 18 ; }

  // Field MODER8: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOD_MODER_MODER8 (const uint32_t inValue) {return (inValue & 0x3U) << 16 ; }

  // Field MODER7: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOD_MODER_MODER7 (const uint32_t inValue) {return (inValue & 0x3U) << 14 ; }

  // Field MODER6: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOD_MODER_MODER6 (const uint32_t inValue) {return (inValue & 0x3U) << 12 ; }

  // Field MODER5: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOD_MODER_MODER5 (const uint32_t inValue) {return (inValue & 0x3U) << 10 ; }

  // Field MODER4: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOD_MODER_MODER4 (const uint32_t inValue) {return (inValue & 0x3U) << 8 ; }

  // Field MODER3: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOD_MODER_MODER3 (const uint32_t inValue) {return (inValue & 0x3U) << 6 ; }

  // Field MODER2: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOD_MODER_MODER2 (const uint32_t inValue) {return (inValue & 0x3U) << 4 ; }

  // Field MODER1: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOD_MODER_MODER1 (const uint32_t inValue) {return (inValue & 0x3U) << 2 ; }

  // Field MODER0: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOD_MODER_MODER0 (const uint32_t inValue) {return (inValue & 0x3U) << 0 ; }

//---  Register OTYPER: GPIO port output type register
  #define GPIOD_OTYPER (* ((volatile uint32_t *) (0x48000c00 + 4)))

  // Field OT15: Port x configuration bits (y = 0..15)
    const uint32_t GPIOD_OTYPER_OT15 = 1U << 15 ;

  // Field OT14: Port x configuration bits (y = 0..15)
    const uint32_t GPIOD_OTYPER_OT14 = 1U << 14 ;

  // Field OT13: Port x configuration bits (y = 0..15)
    const uint32_t GPIOD_OTYPER_OT13 = 1U << 13 ;

  // Field OT12: Port x configuration bits (y = 0..15)
    const uint32_t GPIOD_OTYPER_OT12 = 1U << 12 ;

  // Field OT11: Port x configuration bits (y = 0..15)
    const uint32_t GPIOD_OTYPER_OT11 = 1U << 11 ;

  // Field OT10: Port x configuration bits (y = 0..15)
    const uint32_t GPIOD_OTYPER_OT10 = 1U << 10 ;

  // Field OT9: Port x configuration bits (y = 0..15)
    const uint32_t GPIOD_OTYPER_OT9 = 1U << 9 ;

  // Field OT8: Port x configuration bits (y = 0..15)
    const uint32_t GPIOD_OTYPER_OT8 = 1U << 8 ;

  // Field OT7: Port x configuration bits (y = 0..15)
    const uint32_t GPIOD_OTYPER_OT7 = 1U << 7 ;

  // Field OT6: Port x configuration bits (y = 0..15)
    const uint32_t GPIOD_OTYPER_OT6 = 1U << 6 ;

  // Field OT5: Port x configuration bits (y = 0..15)
    const uint32_t GPIOD_OTYPER_OT5 = 1U << 5 ;

  // Field OT4: Port x configuration bits (y = 0..15)
    const uint32_t GPIOD_OTYPER_OT4 = 1U << 4 ;

  // Field OT3: Port x configuration bits (y = 0..15)
    const uint32_t GPIOD_OTYPER_OT3 = 1U << 3 ;

  // Field OT2: Port x configuration bits (y = 0..15)
    const uint32_t GPIOD_OTYPER_OT2 = 1U << 2 ;

  // Field OT1: Port x configuration bits (y = 0..15)
    const uint32_t GPIOD_OTYPER_OT1 = 1U << 1 ;

  // Field OT0: Port x configuration bits (y = 0..15)
    const uint32_t GPIOD_OTYPER_OT0 = 1U << 0 ;

//---  Register OSPEEDR: GPIO port output speed
          register
  #define GPIOD_OSPEEDR (* ((volatile uint32_t *) (0x48000c00 + 8)))

  // Field OSPEEDR15: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOD_OSPEEDR_OSPEEDR15 (const uint32_t inValue) {return (inValue & 0x3U) << 30 ; }

  // Field OSPEEDR14: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOD_OSPEEDR_OSPEEDR14 (const uint32_t inValue) {return (inValue & 0x3U) << 28 ; }

  // Field OSPEEDR13: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOD_OSPEEDR_OSPEEDR13 (const uint32_t inValue) {return (inValue & 0x3U) << 26 ; }

  // Field OSPEEDR12: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOD_OSPEEDR_OSPEEDR12 (const uint32_t inValue) {return (inValue & 0x3U) << 24 ; }

  // Field OSPEEDR11: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOD_OSPEEDR_OSPEEDR11 (const uint32_t inValue) {return (inValue & 0x3U) << 22 ; }

  // Field OSPEEDR10: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOD_OSPEEDR_OSPEEDR10 (const uint32_t inValue) {return (inValue & 0x3U) << 20 ; }

  // Field OSPEEDR9: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOD_OSPEEDR_OSPEEDR9 (const uint32_t inValue) {return (inValue & 0x3U) << 18 ; }

  // Field OSPEEDR8: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOD_OSPEEDR_OSPEEDR8 (const uint32_t inValue) {return (inValue & 0x3U) << 16 ; }

  // Field OSPEEDR7: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOD_OSPEEDR_OSPEEDR7 (const uint32_t inValue) {return (inValue & 0x3U) << 14 ; }

  // Field OSPEEDR6: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOD_OSPEEDR_OSPEEDR6 (const uint32_t inValue) {return (inValue & 0x3U) << 12 ; }

  // Field OSPEEDR5: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOD_OSPEEDR_OSPEEDR5 (const uint32_t inValue) {return (inValue & 0x3U) << 10 ; }

  // Field OSPEEDR4: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOD_OSPEEDR_OSPEEDR4 (const uint32_t inValue) {return (inValue & 0x3U) << 8 ; }

  // Field OSPEEDR3: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOD_OSPEEDR_OSPEEDR3 (const uint32_t inValue) {return (inValue & 0x3U) << 6 ; }

  // Field OSPEEDR2: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOD_OSPEEDR_OSPEEDR2 (const uint32_t inValue) {return (inValue & 0x3U) << 4 ; }

  // Field OSPEEDR1: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOD_OSPEEDR_OSPEEDR1 (const uint32_t inValue) {return (inValue & 0x3U) << 2 ; }

  // Field OSPEEDR0: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOD_OSPEEDR_OSPEEDR0 (const uint32_t inValue) {return (inValue & 0x3U) << 0 ; }

//---  Register PUPDR: GPIO port pull-up/pull-down
          register
  #define GPIOD_PUPDR (* ((volatile uint32_t *) (0x48000c00 + 12)))

  // Field PUPDR15: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOD_PUPDR_PUPDR15 (const uint32_t inValue) {return (inValue & 0x3U) << 30 ; }

  // Field PUPDR14: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOD_PUPDR_PUPDR14 (const uint32_t inValue) {return (inValue & 0x3U) << 28 ; }

  // Field PUPDR13: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOD_PUPDR_PUPDR13 (const uint32_t inValue) {return (inValue & 0x3U) << 26 ; }

  // Field PUPDR12: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOD_PUPDR_PUPDR12 (const uint32_t inValue) {return (inValue & 0x3U) << 24 ; }

  // Field PUPDR11: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOD_PUPDR_PUPDR11 (const uint32_t inValue) {return (inValue & 0x3U) << 22 ; }

  // Field PUPDR10: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOD_PUPDR_PUPDR10 (const uint32_t inValue) {return (inValue & 0x3U) << 20 ; }

  // Field PUPDR9: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOD_PUPDR_PUPDR9 (const uint32_t inValue) {return (inValue & 0x3U) << 18 ; }

  // Field PUPDR8: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOD_PUPDR_PUPDR8 (const uint32_t inValue) {return (inValue & 0x3U) << 16 ; }

  // Field PUPDR7: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOD_PUPDR_PUPDR7 (const uint32_t inValue) {return (inValue & 0x3U) << 14 ; }

  // Field PUPDR6: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOD_PUPDR_PUPDR6 (const uint32_t inValue) {return (inValue & 0x3U) << 12 ; }

  // Field PUPDR5: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOD_PUPDR_PUPDR5 (const uint32_t inValue) {return (inValue & 0x3U) << 10 ; }

  // Field PUPDR4: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOD_PUPDR_PUPDR4 (const uint32_t inValue) {return (inValue & 0x3U) << 8 ; }

  // Field PUPDR3: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOD_PUPDR_PUPDR3 (const uint32_t inValue) {return (inValue & 0x3U) << 6 ; }

  // Field PUPDR2: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOD_PUPDR_PUPDR2 (const uint32_t inValue) {return (inValue & 0x3U) << 4 ; }

  // Field PUPDR1: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOD_PUPDR_PUPDR1 (const uint32_t inValue) {return (inValue & 0x3U) << 2 ; }

  // Field PUPDR0: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOD_PUPDR_PUPDR0 (const uint32_t inValue) {return (inValue & 0x3U) << 0 ; }

//---  Register IDR: GPIO port input data register
  #define GPIOD_IDR (* ((const volatile uint32_t *) (0x48000c00 + 16)))

  // Field IDR15: Port input data (y = 0..15)
    const uint32_t GPIOD_IDR_IDR15 = 1U << 15 ;

  // Field IDR14: Port input data (y = 0..15)
    const uint32_t GPIOD_IDR_IDR14 = 1U << 14 ;

  // Field IDR13: Port input data (y = 0..15)
    const uint32_t GPIOD_IDR_IDR13 = 1U << 13 ;

  // Field IDR12: Port input data (y = 0..15)
    const uint32_t GPIOD_IDR_IDR12 = 1U << 12 ;

  // Field IDR11: Port input data (y = 0..15)
    const uint32_t GPIOD_IDR_IDR11 = 1U << 11 ;

  // Field IDR10: Port input data (y = 0..15)
    const uint32_t GPIOD_IDR_IDR10 = 1U << 10 ;

  // Field IDR9: Port input data (y = 0..15)
    const uint32_t GPIOD_IDR_IDR9 = 1U << 9 ;

  // Field IDR8: Port input data (y = 0..15)
    const uint32_t GPIOD_IDR_IDR8 = 1U << 8 ;

  // Field IDR7: Port input data (y = 0..15)
    const uint32_t GPIOD_IDR_IDR7 = 1U << 7 ;

  // Field IDR6: Port input data (y = 0..15)
    const uint32_t GPIOD_IDR_IDR6 = 1U << 6 ;

  // Field IDR5: Port input data (y = 0..15)
    const uint32_t GPIOD_IDR_IDR5 = 1U << 5 ;

  // Field IDR4: Port input data (y = 0..15)
    const uint32_t GPIOD_IDR_IDR4 = 1U << 4 ;

  // Field IDR3: Port input data (y = 0..15)
    const uint32_t GPIOD_IDR_IDR3 = 1U << 3 ;

  // Field IDR2: Port input data (y = 0..15)
    const uint32_t GPIOD_IDR_IDR2 = 1U << 2 ;

  // Field IDR1: Port input data (y = 0..15)
    const uint32_t GPIOD_IDR_IDR1 = 1U << 1 ;

  // Field IDR0: Port input data (y = 0..15)
    const uint32_t GPIOD_IDR_IDR0 = 1U << 0 ;

//---  Register ODR: GPIO port output data register
  #define GPIOD_ODR (* ((volatile uint32_t *) (0x48000c00 + 20)))

  // Field ODR15: Port output data (y = 0..15)
    const uint32_t GPIOD_ODR_ODR15 = 1U << 15 ;

  // Field ODR14: Port output data (y = 0..15)
    const uint32_t GPIOD_ODR_ODR14 = 1U << 14 ;

  // Field ODR13: Port output data (y = 0..15)
    const uint32_t GPIOD_ODR_ODR13 = 1U << 13 ;

  // Field ODR12: Port output data (y = 0..15)
    const uint32_t GPIOD_ODR_ODR12 = 1U << 12 ;

  // Field ODR11: Port output data (y = 0..15)
    const uint32_t GPIOD_ODR_ODR11 = 1U << 11 ;

  // Field ODR10: Port output data (y = 0..15)
    const uint32_t GPIOD_ODR_ODR10 = 1U << 10 ;

  // Field ODR9: Port output data (y = 0..15)
    const uint32_t GPIOD_ODR_ODR9 = 1U << 9 ;

  // Field ODR8: Port output data (y = 0..15)
    const uint32_t GPIOD_ODR_ODR8 = 1U << 8 ;

  // Field ODR7: Port output data (y = 0..15)
    const uint32_t GPIOD_ODR_ODR7 = 1U << 7 ;

  // Field ODR6: Port output data (y = 0..15)
    const uint32_t GPIOD_ODR_ODR6 = 1U << 6 ;

  // Field ODR5: Port output data (y = 0..15)
    const uint32_t GPIOD_ODR_ODR5 = 1U << 5 ;

  // Field ODR4: Port output data (y = 0..15)
    const uint32_t GPIOD_ODR_ODR4 = 1U << 4 ;

  // Field ODR3: Port output data (y = 0..15)
    const uint32_t GPIOD_ODR_ODR3 = 1U << 3 ;

  // Field ODR2: Port output data (y = 0..15)
    const uint32_t GPIOD_ODR_ODR2 = 1U << 2 ;

  // Field ODR1: Port output data (y = 0..15)
    const uint32_t GPIOD_ODR_ODR1 = 1U << 1 ;

  // Field ODR0: Port output data (y = 0..15)
    const uint32_t GPIOD_ODR_ODR0 = 1U << 0 ;

//---  Register BSRR: GPIO port bit set/reset
          register
  #define GPIOD_BSRR (* ((volatile uint32_t *) (0x48000c00 + 24)))

  // Field BR15: Port x reset bit y (y = 0..15)
    const uint32_t GPIOD_BSRR_BR15 = 1U << 31 ;

  // Field BR14: Port x reset bit y (y = 0..15)
    const uint32_t GPIOD_BSRR_BR14 = 1U << 30 ;

  // Field BR13: Port x reset bit y (y = 0..15)
    const uint32_t GPIOD_BSRR_BR13 = 1U << 29 ;

  // Field BR12: Port x reset bit y (y = 0..15)
    const uint32_t GPIOD_BSRR_BR12 = 1U << 28 ;

  // Field BR11: Port x reset bit y (y = 0..15)
    const uint32_t GPIOD_BSRR_BR11 = 1U << 27 ;

  // Field BR10: Port x reset bit y (y = 0..15)
    const uint32_t GPIOD_BSRR_BR10 = 1U << 26 ;

  // Field BR9: Port x reset bit y (y = 0..15)
    const uint32_t GPIOD_BSRR_BR9 = 1U << 25 ;

  // Field BR8: Port x reset bit y (y = 0..15)
    const uint32_t GPIOD_BSRR_BR8 = 1U << 24 ;

  // Field BR7: Port x reset bit y (y = 0..15)
    const uint32_t GPIOD_BSRR_BR7 = 1U << 23 ;

  // Field BR6: Port x reset bit y (y = 0..15)
    const uint32_t GPIOD_BSRR_BR6 = 1U << 22 ;

  // Field BR5: Port x reset bit y (y = 0..15)
    const uint32_t GPIOD_BSRR_BR5 = 1U << 21 ;

  // Field BR4: Port x reset bit y (y = 0..15)
    const uint32_t GPIOD_BSRR_BR4 = 1U << 20 ;

  // Field BR3: Port x reset bit y (y = 0..15)
    const uint32_t GPIOD_BSRR_BR3 = 1U << 19 ;

  // Field BR2: Port x reset bit y (y = 0..15)
    const uint32_t GPIOD_BSRR_BR2 = 1U << 18 ;

  // Field BR1: Port x reset bit y (y = 0..15)
    const uint32_t GPIOD_BSRR_BR1 = 1U << 17 ;

  // Field BR0: Port x set bit y (y= 0..15)
    const uint32_t GPIOD_BSRR_BR0 = 1U << 16 ;

  // Field BS15: Port x set bit y (y= 0..15)
    const uint32_t GPIOD_BSRR_BS15 = 1U << 15 ;

  // Field BS14: Port x set bit y (y= 0..15)
    const uint32_t GPIOD_BSRR_BS14 = 1U << 14 ;

  // Field BS13: Port x set bit y (y= 0..15)
    const uint32_t GPIOD_BSRR_BS13 = 1U << 13 ;

  // Field BS12: Port x set bit y (y= 0..15)
    const uint32_t GPIOD_BSRR_BS12 = 1U << 12 ;

  // Field BS11: Port x set bit y (y= 0..15)
    const uint32_t GPIOD_BSRR_BS11 = 1U << 11 ;

  // Field BS10: Port x set bit y (y= 0..15)
    const uint32_t GPIOD_BSRR_BS10 = 1U << 10 ;

  // Field BS9: Port x set bit y (y= 0..15)
    const uint32_t GPIOD_BSRR_BS9 = 1U << 9 ;

  // Field BS8: Port x set bit y (y= 0..15)
    const uint32_t GPIOD_BSRR_BS8 = 1U << 8 ;

  // Field BS7: Port x set bit y (y= 0..15)
    const uint32_t GPIOD_BSRR_BS7 = 1U << 7 ;

  // Field BS6: Port x set bit y (y= 0..15)
    const uint32_t GPIOD_BSRR_BS6 = 1U << 6 ;

  // Field BS5: Port x set bit y (y= 0..15)
    const uint32_t GPIOD_BSRR_BS5 = 1U << 5 ;

  // Field BS4: Port x set bit y (y= 0..15)
    const uint32_t GPIOD_BSRR_BS4 = 1U << 4 ;

  // Field BS3: Port x set bit y (y= 0..15)
    const uint32_t GPIOD_BSRR_BS3 = 1U << 3 ;

  // Field BS2: Port x set bit y (y= 0..15)
    const uint32_t GPIOD_BSRR_BS2 = 1U << 2 ;

  // Field BS1: Port x set bit y (y= 0..15)
    const uint32_t GPIOD_BSRR_BS1 = 1U << 1 ;

  // Field BS0: Port x set bit y (y= 0..15)
    const uint32_t GPIOD_BSRR_BS0 = 1U << 0 ;

//---  Register LCKR: GPIO port configuration lock
          register
  #define GPIOD_LCKR (* ((volatile uint32_t *) (0x48000c00 + 28)))

  // Field LCKK: Port x lock bit y (y= 0..15)
    const uint32_t GPIOD_LCKR_LCKK = 1U << 16 ;

  // Field LCK15: Port x lock bit y (y= 0..15)
    const uint32_t GPIOD_LCKR_LCK15 = 1U << 15 ;

  // Field LCK14: Port x lock bit y (y= 0..15)
    const uint32_t GPIOD_LCKR_LCK14 = 1U << 14 ;

  // Field LCK13: Port x lock bit y (y= 0..15)
    const uint32_t GPIOD_LCKR_LCK13 = 1U << 13 ;

  // Field LCK12: Port x lock bit y (y= 0..15)
    const uint32_t GPIOD_LCKR_LCK12 = 1U << 12 ;

  // Field LCK11: Port x lock bit y (y= 0..15)
    const uint32_t GPIOD_LCKR_LCK11 = 1U << 11 ;

  // Field LCK10: Port x lock bit y (y= 0..15)
    const uint32_t GPIOD_LCKR_LCK10 = 1U << 10 ;

  // Field LCK9: Port x lock bit y (y= 0..15)
    const uint32_t GPIOD_LCKR_LCK9 = 1U << 9 ;

  // Field LCK8: Port x lock bit y (y= 0..15)
    const uint32_t GPIOD_LCKR_LCK8 = 1U << 8 ;

  // Field LCK7: Port x lock bit y (y= 0..15)
    const uint32_t GPIOD_LCKR_LCK7 = 1U << 7 ;

  // Field LCK6: Port x lock bit y (y= 0..15)
    const uint32_t GPIOD_LCKR_LCK6 = 1U << 6 ;

  // Field LCK5: Port x lock bit y (y= 0..15)
    const uint32_t GPIOD_LCKR_LCK5 = 1U << 5 ;

  // Field LCK4: Port x lock bit y (y= 0..15)
    const uint32_t GPIOD_LCKR_LCK4 = 1U << 4 ;

  // Field LCK3: Port x lock bit y (y= 0..15)
    const uint32_t GPIOD_LCKR_LCK3 = 1U << 3 ;

  // Field LCK2: Port x lock bit y (y= 0..15)
    const uint32_t GPIOD_LCKR_LCK2 = 1U << 2 ;

  // Field LCK1: Port x lock bit y (y= 0..15)
    const uint32_t GPIOD_LCKR_LCK1 = 1U << 1 ;

  // Field LCK0: Port x lock bit y (y= 0..15)
    const uint32_t GPIOD_LCKR_LCK0 = 1U << 0 ;

//---  Register AFRL: GPIO alternate function low
          register
  #define GPIOD_AFRL (* ((volatile uint32_t *) (0x48000c00 + 32)))

  // Field AFRL7: Alternate function selection for port x bit y (y = 0..7)
    inline uint32_t GPIOD_AFRL_AFRL7 (const uint32_t inValue) {return (inValue & 0xfU) << 28 ; }

  // Field AFRL6: Alternate function selection for port x bit y (y = 0..7)
    inline uint32_t GPIOD_AFRL_AFRL6 (const uint32_t inValue) {return (inValue & 0xfU) << 24 ; }

  // Field AFRL5: Alternate function selection for port x bit y (y = 0..7)
    inline uint32_t GPIOD_AFRL_AFRL5 (const uint32_t inValue) {return (inValue & 0xfU) << 20 ; }

  // Field AFRL4: Alternate function selection for port x bit y (y = 0..7)
    inline uint32_t GPIOD_AFRL_AFRL4 (const uint32_t inValue) {return (inValue & 0xfU) << 16 ; }

  // Field AFRL3: Alternate function selection for port x bit y (y = 0..7)
    inline uint32_t GPIOD_AFRL_AFRL3 (const uint32_t inValue) {return (inValue & 0xfU) << 12 ; }

  // Field AFRL2: Alternate function selection for port x bit y (y = 0..7)
    inline uint32_t GPIOD_AFRL_AFRL2 (const uint32_t inValue) {return (inValue & 0xfU) << 8 ; }

  // Field AFRL1: Alternate function selection for port x bit y (y = 0..7)
    inline uint32_t GPIOD_AFRL_AFRL1 (const uint32_t inValue) {return (inValue & 0xfU) << 4 ; }

  // Field AFRL0: Alternate function selection for port x bit y (y = 0..7)
    inline uint32_t GPIOD_AFRL_AFRL0 (const uint32_t inValue) {return (inValue & 0xfU) << 0 ; }

//---  Register AFRH: GPIO alternate function high
          register
  #define GPIOD_AFRH (* ((volatile uint32_t *) (0x48000c00 + 36)))

  // Field AFRH15: Alternate function selection for port x bit y (y = 8..15)
    inline uint32_t GPIOD_AFRH_AFRH15 (const uint32_t inValue) {return (inValue & 0xfU) << 28 ; }

  // Field AFRH14: Alternate function selection for port x bit y (y = 8..15)
    inline uint32_t GPIOD_AFRH_AFRH14 (const uint32_t inValue) {return (inValue & 0xfU) << 24 ; }

  // Field AFRH13: Alternate function selection for port x bit y (y = 8..15)
    inline uint32_t GPIOD_AFRH_AFRH13 (const uint32_t inValue) {return (inValue & 0xfU) << 20 ; }

  // Field AFRH12: Alternate function selection for port x bit y (y = 8..15)
    inline uint32_t GPIOD_AFRH_AFRH12 (const uint32_t inValue) {return (inValue & 0xfU) << 16 ; }

  // Field AFRH11: Alternate function selection for port x bit y (y = 8..15)
    inline uint32_t GPIOD_AFRH_AFRH11 (const uint32_t inValue) {return (inValue & 0xfU) << 12 ; }

  // Field AFRH10: Alternate function selection for port x bit y (y = 8..15)
    inline uint32_t GPIOD_AFRH_AFRH10 (const uint32_t inValue) {return (inValue & 0xfU) << 8 ; }

  // Field AFRH9: Alternate function selection for port x bit y (y = 8..15)
    inline uint32_t GPIOD_AFRH_AFRH9 (const uint32_t inValue) {return (inValue & 0xfU) << 4 ; }

  // Field AFRH8: Alternate function selection for port x bit y (y = 8..15)
    inline uint32_t GPIOD_AFRH_AFRH8 (const uint32_t inValue) {return (inValue & 0xfU) << 0 ; }

//------------------------------------------------------------------------------
// Peripheral GPIOE
//------------------------------------------------------------------------------

//---  Register MODER: GPIO port mode register
  #define GPIOE_MODER (* ((volatile uint32_t *) (0x48001000 + 0)))

  // Field MODER15: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOE_MODER_MODER15 (const uint32_t inValue) {return (inValue & 0x3U) << 30 ; }

  // Field MODER14: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOE_MODER_MODER14 (const uint32_t inValue) {return (inValue & 0x3U) << 28 ; }

  // Field MODER13: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOE_MODER_MODER13 (const uint32_t inValue) {return (inValue & 0x3U) << 26 ; }

  // Field MODER12: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOE_MODER_MODER12 (const uint32_t inValue) {return (inValue & 0x3U) << 24 ; }

  // Field MODER11: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOE_MODER_MODER11 (const uint32_t inValue) {return (inValue & 0x3U) << 22 ; }

  // Field MODER10: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOE_MODER_MODER10 (const uint32_t inValue) {return (inValue & 0x3U) << 20 ; }

  // Field MODER9: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOE_MODER_MODER9 (const uint32_t inValue) {return (inValue & 0x3U) << 18 ; }

  // Field MODER8: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOE_MODER_MODER8 (const uint32_t inValue) {return (inValue & 0x3U) << 16 ; }

  // Field MODER7: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOE_MODER_MODER7 (const uint32_t inValue) {return (inValue & 0x3U) << 14 ; }

  // Field MODER6: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOE_MODER_MODER6 (const uint32_t inValue) {return (inValue & 0x3U) << 12 ; }

  // Field MODER5: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOE_MODER_MODER5 (const uint32_t inValue) {return (inValue & 0x3U) << 10 ; }

  // Field MODER4: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOE_MODER_MODER4 (const uint32_t inValue) {return (inValue & 0x3U) << 8 ; }

  // Field MODER3: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOE_MODER_MODER3 (const uint32_t inValue) {return (inValue & 0x3U) << 6 ; }

  // Field MODER2: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOE_MODER_MODER2 (const uint32_t inValue) {return (inValue & 0x3U) << 4 ; }

  // Field MODER1: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOE_MODER_MODER1 (const uint32_t inValue) {return (inValue & 0x3U) << 2 ; }

  // Field MODER0: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOE_MODER_MODER0 (const uint32_t inValue) {return (inValue & 0x3U) << 0 ; }

//---  Register OTYPER: GPIO port output type register
  #define GPIOE_OTYPER (* ((volatile uint32_t *) (0x48001000 + 4)))

  // Field OT15: Port x configuration bits (y = 0..15)
    const uint32_t GPIOE_OTYPER_OT15 = 1U << 15 ;

  // Field OT14: Port x configuration bits (y = 0..15)
    const uint32_t GPIOE_OTYPER_OT14 = 1U << 14 ;

  // Field OT13: Port x configuration bits (y = 0..15)
    const uint32_t GPIOE_OTYPER_OT13 = 1U << 13 ;

  // Field OT12: Port x configuration bits (y = 0..15)
    const uint32_t GPIOE_OTYPER_OT12 = 1U << 12 ;

  // Field OT11: Port x configuration bits (y = 0..15)
    const uint32_t GPIOE_OTYPER_OT11 = 1U << 11 ;

  // Field OT10: Port x configuration bits (y = 0..15)
    const uint32_t GPIOE_OTYPER_OT10 = 1U << 10 ;

  // Field OT9: Port x configuration bits (y = 0..15)
    const uint32_t GPIOE_OTYPER_OT9 = 1U << 9 ;

  // Field OT8: Port x configuration bits (y = 0..15)
    const uint32_t GPIOE_OTYPER_OT8 = 1U << 8 ;

  // Field OT7: Port x configuration bits (y = 0..15)
    const uint32_t GPIOE_OTYPER_OT7 = 1U << 7 ;

  // Field OT6: Port x configuration bits (y = 0..15)
    const uint32_t GPIOE_OTYPER_OT6 = 1U << 6 ;

  // Field OT5: Port x configuration bits (y = 0..15)
    const uint32_t GPIOE_OTYPER_OT5 = 1U << 5 ;

  // Field OT4: Port x configuration bits (y = 0..15)
    const uint32_t GPIOE_OTYPER_OT4 = 1U << 4 ;

  // Field OT3: Port x configuration bits (y = 0..15)
    const uint32_t GPIOE_OTYPER_OT3 = 1U << 3 ;

  // Field OT2: Port x configuration bits (y = 0..15)
    const uint32_t GPIOE_OTYPER_OT2 = 1U << 2 ;

  // Field OT1: Port x configuration bits (y = 0..15)
    const uint32_t GPIOE_OTYPER_OT1 = 1U << 1 ;

  // Field OT0: Port x configuration bits (y = 0..15)
    const uint32_t GPIOE_OTYPER_OT0 = 1U << 0 ;

//---  Register OSPEEDR: GPIO port output speed
          register
  #define GPIOE_OSPEEDR (* ((volatile uint32_t *) (0x48001000 + 8)))

  // Field OSPEEDR15: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOE_OSPEEDR_OSPEEDR15 (const uint32_t inValue) {return (inValue & 0x3U) << 30 ; }

  // Field OSPEEDR14: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOE_OSPEEDR_OSPEEDR14 (const uint32_t inValue) {return (inValue & 0x3U) << 28 ; }

  // Field OSPEEDR13: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOE_OSPEEDR_OSPEEDR13 (const uint32_t inValue) {return (inValue & 0x3U) << 26 ; }

  // Field OSPEEDR12: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOE_OSPEEDR_OSPEEDR12 (const uint32_t inValue) {return (inValue & 0x3U) << 24 ; }

  // Field OSPEEDR11: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOE_OSPEEDR_OSPEEDR11 (const uint32_t inValue) {return (inValue & 0x3U) << 22 ; }

  // Field OSPEEDR10: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOE_OSPEEDR_OSPEEDR10 (const uint32_t inValue) {return (inValue & 0x3U) << 20 ; }

  // Field OSPEEDR9: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOE_OSPEEDR_OSPEEDR9 (const uint32_t inValue) {return (inValue & 0x3U) << 18 ; }

  // Field OSPEEDR8: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOE_OSPEEDR_OSPEEDR8 (const uint32_t inValue) {return (inValue & 0x3U) << 16 ; }

  // Field OSPEEDR7: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOE_OSPEEDR_OSPEEDR7 (const uint32_t inValue) {return (inValue & 0x3U) << 14 ; }

  // Field OSPEEDR6: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOE_OSPEEDR_OSPEEDR6 (const uint32_t inValue) {return (inValue & 0x3U) << 12 ; }

  // Field OSPEEDR5: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOE_OSPEEDR_OSPEEDR5 (const uint32_t inValue) {return (inValue & 0x3U) << 10 ; }

  // Field OSPEEDR4: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOE_OSPEEDR_OSPEEDR4 (const uint32_t inValue) {return (inValue & 0x3U) << 8 ; }

  // Field OSPEEDR3: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOE_OSPEEDR_OSPEEDR3 (const uint32_t inValue) {return (inValue & 0x3U) << 6 ; }

  // Field OSPEEDR2: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOE_OSPEEDR_OSPEEDR2 (const uint32_t inValue) {return (inValue & 0x3U) << 4 ; }

  // Field OSPEEDR1: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOE_OSPEEDR_OSPEEDR1 (const uint32_t inValue) {return (inValue & 0x3U) << 2 ; }

  // Field OSPEEDR0: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOE_OSPEEDR_OSPEEDR0 (const uint32_t inValue) {return (inValue & 0x3U) << 0 ; }

//---  Register PUPDR: GPIO port pull-up/pull-down
          register
  #define GPIOE_PUPDR (* ((volatile uint32_t *) (0x48001000 + 12)))

  // Field PUPDR15: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOE_PUPDR_PUPDR15 (const uint32_t inValue) {return (inValue & 0x3U) << 30 ; }

  // Field PUPDR14: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOE_PUPDR_PUPDR14 (const uint32_t inValue) {return (inValue & 0x3U) << 28 ; }

  // Field PUPDR13: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOE_PUPDR_PUPDR13 (const uint32_t inValue) {return (inValue & 0x3U) << 26 ; }

  // Field PUPDR12: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOE_PUPDR_PUPDR12 (const uint32_t inValue) {return (inValue & 0x3U) << 24 ; }

  // Field PUPDR11: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOE_PUPDR_PUPDR11 (const uint32_t inValue) {return (inValue & 0x3U) << 22 ; }

  // Field PUPDR10: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOE_PUPDR_PUPDR10 (const uint32_t inValue) {return (inValue & 0x3U) << 20 ; }

  // Field PUPDR9: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOE_PUPDR_PUPDR9 (const uint32_t inValue) {return (inValue & 0x3U) << 18 ; }

  // Field PUPDR8: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOE_PUPDR_PUPDR8 (const uint32_t inValue) {return (inValue & 0x3U) << 16 ; }

  // Field PUPDR7: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOE_PUPDR_PUPDR7 (const uint32_t inValue) {return (inValue & 0x3U) << 14 ; }

  // Field PUPDR6: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOE_PUPDR_PUPDR6 (const uint32_t inValue) {return (inValue & 0x3U) << 12 ; }

  // Field PUPDR5: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOE_PUPDR_PUPDR5 (const uint32_t inValue) {return (inValue & 0x3U) << 10 ; }

  // Field PUPDR4: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOE_PUPDR_PUPDR4 (const uint32_t inValue) {return (inValue & 0x3U) << 8 ; }

  // Field PUPDR3: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOE_PUPDR_PUPDR3 (const uint32_t inValue) {return (inValue & 0x3U) << 6 ; }

  // Field PUPDR2: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOE_PUPDR_PUPDR2 (const uint32_t inValue) {return (inValue & 0x3U) << 4 ; }

  // Field PUPDR1: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOE_PUPDR_PUPDR1 (const uint32_t inValue) {return (inValue & 0x3U) << 2 ; }

  // Field PUPDR0: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOE_PUPDR_PUPDR0 (const uint32_t inValue) {return (inValue & 0x3U) << 0 ; }

//---  Register IDR: GPIO port input data register
  #define GPIOE_IDR (* ((const volatile uint32_t *) (0x48001000 + 16)))

  // Field IDR15: Port input data (y = 0..15)
    const uint32_t GPIOE_IDR_IDR15 = 1U << 15 ;

  // Field IDR14: Port input data (y = 0..15)
    const uint32_t GPIOE_IDR_IDR14 = 1U << 14 ;

  // Field IDR13: Port input data (y = 0..15)
    const uint32_t GPIOE_IDR_IDR13 = 1U << 13 ;

  // Field IDR12: Port input data (y = 0..15)
    const uint32_t GPIOE_IDR_IDR12 = 1U << 12 ;

  // Field IDR11: Port input data (y = 0..15)
    const uint32_t GPIOE_IDR_IDR11 = 1U << 11 ;

  // Field IDR10: Port input data (y = 0..15)
    const uint32_t GPIOE_IDR_IDR10 = 1U << 10 ;

  // Field IDR9: Port input data (y = 0..15)
    const uint32_t GPIOE_IDR_IDR9 = 1U << 9 ;

  // Field IDR8: Port input data (y = 0..15)
    const uint32_t GPIOE_IDR_IDR8 = 1U << 8 ;

  // Field IDR7: Port input data (y = 0..15)
    const uint32_t GPIOE_IDR_IDR7 = 1U << 7 ;

  // Field IDR6: Port input data (y = 0..15)
    const uint32_t GPIOE_IDR_IDR6 = 1U << 6 ;

  // Field IDR5: Port input data (y = 0..15)
    const uint32_t GPIOE_IDR_IDR5 = 1U << 5 ;

  // Field IDR4: Port input data (y = 0..15)
    const uint32_t GPIOE_IDR_IDR4 = 1U << 4 ;

  // Field IDR3: Port input data (y = 0..15)
    const uint32_t GPIOE_IDR_IDR3 = 1U << 3 ;

  // Field IDR2: Port input data (y = 0..15)
    const uint32_t GPIOE_IDR_IDR2 = 1U << 2 ;

  // Field IDR1: Port input data (y = 0..15)
    const uint32_t GPIOE_IDR_IDR1 = 1U << 1 ;

  // Field IDR0: Port input data (y = 0..15)
    const uint32_t GPIOE_IDR_IDR0 = 1U << 0 ;

//---  Register ODR: GPIO port output data register
  #define GPIOE_ODR (* ((volatile uint32_t *) (0x48001000 + 20)))

  // Field ODR15: Port output data (y = 0..15)
    const uint32_t GPIOE_ODR_ODR15 = 1U << 15 ;

  // Field ODR14: Port output data (y = 0..15)
    const uint32_t GPIOE_ODR_ODR14 = 1U << 14 ;

  // Field ODR13: Port output data (y = 0..15)
    const uint32_t GPIOE_ODR_ODR13 = 1U << 13 ;

  // Field ODR12: Port output data (y = 0..15)
    const uint32_t GPIOE_ODR_ODR12 = 1U << 12 ;

  // Field ODR11: Port output data (y = 0..15)
    const uint32_t GPIOE_ODR_ODR11 = 1U << 11 ;

  // Field ODR10: Port output data (y = 0..15)
    const uint32_t GPIOE_ODR_ODR10 = 1U << 10 ;

  // Field ODR9: Port output data (y = 0..15)
    const uint32_t GPIOE_ODR_ODR9 = 1U << 9 ;

  // Field ODR8: Port output data (y = 0..15)
    const uint32_t GPIOE_ODR_ODR8 = 1U << 8 ;

  // Field ODR7: Port output data (y = 0..15)
    const uint32_t GPIOE_ODR_ODR7 = 1U << 7 ;

  // Field ODR6: Port output data (y = 0..15)
    const uint32_t GPIOE_ODR_ODR6 = 1U << 6 ;

  // Field ODR5: Port output data (y = 0..15)
    const uint32_t GPIOE_ODR_ODR5 = 1U << 5 ;

  // Field ODR4: Port output data (y = 0..15)
    const uint32_t GPIOE_ODR_ODR4 = 1U << 4 ;

  // Field ODR3: Port output data (y = 0..15)
    const uint32_t GPIOE_ODR_ODR3 = 1U << 3 ;

  // Field ODR2: Port output data (y = 0..15)
    const uint32_t GPIOE_ODR_ODR2 = 1U << 2 ;

  // Field ODR1: Port output data (y = 0..15)
    const uint32_t GPIOE_ODR_ODR1 = 1U << 1 ;

  // Field ODR0: Port output data (y = 0..15)
    const uint32_t GPIOE_ODR_ODR0 = 1U << 0 ;

//---  Register BSRR: GPIO port bit set/reset
          register
  #define GPIOE_BSRR (* ((volatile uint32_t *) (0x48001000 + 24)))

  // Field BR15: Port x reset bit y (y = 0..15)
    const uint32_t GPIOE_BSRR_BR15 = 1U << 31 ;

  // Field BR14: Port x reset bit y (y = 0..15)
    const uint32_t GPIOE_BSRR_BR14 = 1U << 30 ;

  // Field BR13: Port x reset bit y (y = 0..15)
    const uint32_t GPIOE_BSRR_BR13 = 1U << 29 ;

  // Field BR12: Port x reset bit y (y = 0..15)
    const uint32_t GPIOE_BSRR_BR12 = 1U << 28 ;

  // Field BR11: Port x reset bit y (y = 0..15)
    const uint32_t GPIOE_BSRR_BR11 = 1U << 27 ;

  // Field BR10: Port x reset bit y (y = 0..15)
    const uint32_t GPIOE_BSRR_BR10 = 1U << 26 ;

  // Field BR9: Port x reset bit y (y = 0..15)
    const uint32_t GPIOE_BSRR_BR9 = 1U << 25 ;

  // Field BR8: Port x reset bit y (y = 0..15)
    const uint32_t GPIOE_BSRR_BR8 = 1U << 24 ;

  // Field BR7: Port x reset bit y (y = 0..15)
    const uint32_t GPIOE_BSRR_BR7 = 1U << 23 ;

  // Field BR6: Port x reset bit y (y = 0..15)
    const uint32_t GPIOE_BSRR_BR6 = 1U << 22 ;

  // Field BR5: Port x reset bit y (y = 0..15)
    const uint32_t GPIOE_BSRR_BR5 = 1U << 21 ;

  // Field BR4: Port x reset bit y (y = 0..15)
    const uint32_t GPIOE_BSRR_BR4 = 1U << 20 ;

  // Field BR3: Port x reset bit y (y = 0..15)
    const uint32_t GPIOE_BSRR_BR3 = 1U << 19 ;

  // Field BR2: Port x reset bit y (y = 0..15)
    const uint32_t GPIOE_BSRR_BR2 = 1U << 18 ;

  // Field BR1: Port x reset bit y (y = 0..15)
    const uint32_t GPIOE_BSRR_BR1 = 1U << 17 ;

  // Field BR0: Port x set bit y (y= 0..15)
    const uint32_t GPIOE_BSRR_BR0 = 1U << 16 ;

  // Field BS15: Port x set bit y (y= 0..15)
    const uint32_t GPIOE_BSRR_BS15 = 1U << 15 ;

  // Field BS14: Port x set bit y (y= 0..15)
    const uint32_t GPIOE_BSRR_BS14 = 1U << 14 ;

  // Field BS13: Port x set bit y (y= 0..15)
    const uint32_t GPIOE_BSRR_BS13 = 1U << 13 ;

  // Field BS12: Port x set bit y (y= 0..15)
    const uint32_t GPIOE_BSRR_BS12 = 1U << 12 ;

  // Field BS11: Port x set bit y (y= 0..15)
    const uint32_t GPIOE_BSRR_BS11 = 1U << 11 ;

  // Field BS10: Port x set bit y (y= 0..15)
    const uint32_t GPIOE_BSRR_BS10 = 1U << 10 ;

  // Field BS9: Port x set bit y (y= 0..15)
    const uint32_t GPIOE_BSRR_BS9 = 1U << 9 ;

  // Field BS8: Port x set bit y (y= 0..15)
    const uint32_t GPIOE_BSRR_BS8 = 1U << 8 ;

  // Field BS7: Port x set bit y (y= 0..15)
    const uint32_t GPIOE_BSRR_BS7 = 1U << 7 ;

  // Field BS6: Port x set bit y (y= 0..15)
    const uint32_t GPIOE_BSRR_BS6 = 1U << 6 ;

  // Field BS5: Port x set bit y (y= 0..15)
    const uint32_t GPIOE_BSRR_BS5 = 1U << 5 ;

  // Field BS4: Port x set bit y (y= 0..15)
    const uint32_t GPIOE_BSRR_BS4 = 1U << 4 ;

  // Field BS3: Port x set bit y (y= 0..15)
    const uint32_t GPIOE_BSRR_BS3 = 1U << 3 ;

  // Field BS2: Port x set bit y (y= 0..15)
    const uint32_t GPIOE_BSRR_BS2 = 1U << 2 ;

  // Field BS1: Port x set bit y (y= 0..15)
    const uint32_t GPIOE_BSRR_BS1 = 1U << 1 ;

  // Field BS0: Port x set bit y (y= 0..15)
    const uint32_t GPIOE_BSRR_BS0 = 1U << 0 ;

//---  Register LCKR: GPIO port configuration lock
          register
  #define GPIOE_LCKR (* ((volatile uint32_t *) (0x48001000 + 28)))

  // Field LCKK: Port x lock bit y (y= 0..15)
    const uint32_t GPIOE_LCKR_LCKK = 1U << 16 ;

  // Field LCK15: Port x lock bit y (y= 0..15)
    const uint32_t GPIOE_LCKR_LCK15 = 1U << 15 ;

  // Field LCK14: Port x lock bit y (y= 0..15)
    const uint32_t GPIOE_LCKR_LCK14 = 1U << 14 ;

  // Field LCK13: Port x lock bit y (y= 0..15)
    const uint32_t GPIOE_LCKR_LCK13 = 1U << 13 ;

  // Field LCK12: Port x lock bit y (y= 0..15)
    const uint32_t GPIOE_LCKR_LCK12 = 1U << 12 ;

  // Field LCK11: Port x lock bit y (y= 0..15)
    const uint32_t GPIOE_LCKR_LCK11 = 1U << 11 ;

  // Field LCK10: Port x lock bit y (y= 0..15)
    const uint32_t GPIOE_LCKR_LCK10 = 1U << 10 ;

  // Field LCK9: Port x lock bit y (y= 0..15)
    const uint32_t GPIOE_LCKR_LCK9 = 1U << 9 ;

  // Field LCK8: Port x lock bit y (y= 0..15)
    const uint32_t GPIOE_LCKR_LCK8 = 1U << 8 ;

  // Field LCK7: Port x lock bit y (y= 0..15)
    const uint32_t GPIOE_LCKR_LCK7 = 1U << 7 ;

  // Field LCK6: Port x lock bit y (y= 0..15)
    const uint32_t GPIOE_LCKR_LCK6 = 1U << 6 ;

  // Field LCK5: Port x lock bit y (y= 0..15)
    const uint32_t GPIOE_LCKR_LCK5 = 1U << 5 ;

  // Field LCK4: Port x lock bit y (y= 0..15)
    const uint32_t GPIOE_LCKR_LCK4 = 1U << 4 ;

  // Field LCK3: Port x lock bit y (y= 0..15)
    const uint32_t GPIOE_LCKR_LCK3 = 1U << 3 ;

  // Field LCK2: Port x lock bit y (y= 0..15)
    const uint32_t GPIOE_LCKR_LCK2 = 1U << 2 ;

  // Field LCK1: Port x lock bit y (y= 0..15)
    const uint32_t GPIOE_LCKR_LCK1 = 1U << 1 ;

  // Field LCK0: Port x lock bit y (y= 0..15)
    const uint32_t GPIOE_LCKR_LCK0 = 1U << 0 ;

//---  Register AFRL: GPIO alternate function low
          register
  #define GPIOE_AFRL (* ((volatile uint32_t *) (0x48001000 + 32)))

  // Field AFRL7: Alternate function selection for port x bit y (y = 0..7)
    inline uint32_t GPIOE_AFRL_AFRL7 (const uint32_t inValue) {return (inValue & 0xfU) << 28 ; }

  // Field AFRL6: Alternate function selection for port x bit y (y = 0..7)
    inline uint32_t GPIOE_AFRL_AFRL6 (const uint32_t inValue) {return (inValue & 0xfU) << 24 ; }

  // Field AFRL5: Alternate function selection for port x bit y (y = 0..7)
    inline uint32_t GPIOE_AFRL_AFRL5 (const uint32_t inValue) {return (inValue & 0xfU) << 20 ; }

  // Field AFRL4: Alternate function selection for port x bit y (y = 0..7)
    inline uint32_t GPIOE_AFRL_AFRL4 (const uint32_t inValue) {return (inValue & 0xfU) << 16 ; }

  // Field AFRL3: Alternate function selection for port x bit y (y = 0..7)
    inline uint32_t GPIOE_AFRL_AFRL3 (const uint32_t inValue) {return (inValue & 0xfU) << 12 ; }

  // Field AFRL2: Alternate function selection for port x bit y (y = 0..7)
    inline uint32_t GPIOE_AFRL_AFRL2 (const uint32_t inValue) {return (inValue & 0xfU) << 8 ; }

  // Field AFRL1: Alternate function selection for port x bit y (y = 0..7)
    inline uint32_t GPIOE_AFRL_AFRL1 (const uint32_t inValue) {return (inValue & 0xfU) << 4 ; }

  // Field AFRL0: Alternate function selection for port x bit y (y = 0..7)
    inline uint32_t GPIOE_AFRL_AFRL0 (const uint32_t inValue) {return (inValue & 0xfU) << 0 ; }

//---  Register AFRH: GPIO alternate function high
          register
  #define GPIOE_AFRH (* ((volatile uint32_t *) (0x48001000 + 36)))

  // Field AFRH15: Alternate function selection for port x bit y (y = 8..15)
    inline uint32_t GPIOE_AFRH_AFRH15 (const uint32_t inValue) {return (inValue & 0xfU) << 28 ; }

  // Field AFRH14: Alternate function selection for port x bit y (y = 8..15)
    inline uint32_t GPIOE_AFRH_AFRH14 (const uint32_t inValue) {return (inValue & 0xfU) << 24 ; }

  // Field AFRH13: Alternate function selection for port x bit y (y = 8..15)
    inline uint32_t GPIOE_AFRH_AFRH13 (const uint32_t inValue) {return (inValue & 0xfU) << 20 ; }

  // Field AFRH12: Alternate function selection for port x bit y (y = 8..15)
    inline uint32_t GPIOE_AFRH_AFRH12 (const uint32_t inValue) {return (inValue & 0xfU) << 16 ; }

  // Field AFRH11: Alternate function selection for port x bit y (y = 8..15)
    inline uint32_t GPIOE_AFRH_AFRH11 (const uint32_t inValue) {return (inValue & 0xfU) << 12 ; }

  // Field AFRH10: Alternate function selection for port x bit y (y = 8..15)
    inline uint32_t GPIOE_AFRH_AFRH10 (const uint32_t inValue) {return (inValue & 0xfU) << 8 ; }

  // Field AFRH9: Alternate function selection for port x bit y (y = 8..15)
    inline uint32_t GPIOE_AFRH_AFRH9 (const uint32_t inValue) {return (inValue & 0xfU) << 4 ; }

  // Field AFRH8: Alternate function selection for port x bit y (y = 8..15)
    inline uint32_t GPIOE_AFRH_AFRH8 (const uint32_t inValue) {return (inValue & 0xfU) << 0 ; }

//------------------------------------------------------------------------------
// Peripheral GPIOH
//------------------------------------------------------------------------------

//---  Register MODER: GPIO port mode register
  #define GPIOH_MODER (* ((volatile uint32_t *) (0x48001c00 + 0)))

  // Field MODER15: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOH_MODER_MODER15 (const uint32_t inValue) {return (inValue & 0x3U) << 30 ; }

  // Field MODER14: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOH_MODER_MODER14 (const uint32_t inValue) {return (inValue & 0x3U) << 28 ; }

  // Field MODER13: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOH_MODER_MODER13 (const uint32_t inValue) {return (inValue & 0x3U) << 26 ; }

  // Field MODER12: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOH_MODER_MODER12 (const uint32_t inValue) {return (inValue & 0x3U) << 24 ; }

  // Field MODER11: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOH_MODER_MODER11 (const uint32_t inValue) {return (inValue & 0x3U) << 22 ; }

  // Field MODER10: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOH_MODER_MODER10 (const uint32_t inValue) {return (inValue & 0x3U) << 20 ; }

  // Field MODER9: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOH_MODER_MODER9 (const uint32_t inValue) {return (inValue & 0x3U) << 18 ; }

  // Field MODER8: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOH_MODER_MODER8 (const uint32_t inValue) {return (inValue & 0x3U) << 16 ; }

  // Field MODER7: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOH_MODER_MODER7 (const uint32_t inValue) {return (inValue & 0x3U) << 14 ; }

  // Field MODER6: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOH_MODER_MODER6 (const uint32_t inValue) {return (inValue & 0x3U) << 12 ; }

  // Field MODER5: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOH_MODER_MODER5 (const uint32_t inValue) {return (inValue & 0x3U) << 10 ; }

  // Field MODER4: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOH_MODER_MODER4 (const uint32_t inValue) {return (inValue & 0x3U) << 8 ; }

  // Field MODER3: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOH_MODER_MODER3 (const uint32_t inValue) {return (inValue & 0x3U) << 6 ; }

  // Field MODER2: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOH_MODER_MODER2 (const uint32_t inValue) {return (inValue & 0x3U) << 4 ; }

  // Field MODER1: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOH_MODER_MODER1 (const uint32_t inValue) {return (inValue & 0x3U) << 2 ; }

  // Field MODER0: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOH_MODER_MODER0 (const uint32_t inValue) {return (inValue & 0x3U) << 0 ; }

//---  Register OTYPER: GPIO port output type register
  #define GPIOH_OTYPER (* ((volatile uint32_t *) (0x48001c00 + 4)))

  // Field OT15: Port x configuration bits (y = 0..15)
    const uint32_t GPIOH_OTYPER_OT15 = 1U << 15 ;

  // Field OT14: Port x configuration bits (y = 0..15)
    const uint32_t GPIOH_OTYPER_OT14 = 1U << 14 ;

  // Field OT13: Port x configuration bits (y = 0..15)
    const uint32_t GPIOH_OTYPER_OT13 = 1U << 13 ;

  // Field OT12: Port x configuration bits (y = 0..15)
    const uint32_t GPIOH_OTYPER_OT12 = 1U << 12 ;

  // Field OT11: Port x configuration bits (y = 0..15)
    const uint32_t GPIOH_OTYPER_OT11 = 1U << 11 ;

  // Field OT10: Port x configuration bits (y = 0..15)
    const uint32_t GPIOH_OTYPER_OT10 = 1U << 10 ;

  // Field OT9: Port x configuration bits (y = 0..15)
    const uint32_t GPIOH_OTYPER_OT9 = 1U << 9 ;

  // Field OT8: Port x configuration bits (y = 0..15)
    const uint32_t GPIOH_OTYPER_OT8 = 1U << 8 ;

  // Field OT7: Port x configuration bits (y = 0..15)
    const uint32_t GPIOH_OTYPER_OT7 = 1U << 7 ;

  // Field OT6: Port x configuration bits (y = 0..15)
    const uint32_t GPIOH_OTYPER_OT6 = 1U << 6 ;

  // Field OT5: Port x configuration bits (y = 0..15)
    const uint32_t GPIOH_OTYPER_OT5 = 1U << 5 ;

  // Field OT4: Port x configuration bits (y = 0..15)
    const uint32_t GPIOH_OTYPER_OT4 = 1U << 4 ;

  // Field OT3: Port x configuration bits (y = 0..15)
    const uint32_t GPIOH_OTYPER_OT3 = 1U << 3 ;

  // Field OT2: Port x configuration bits (y = 0..15)
    const uint32_t GPIOH_OTYPER_OT2 = 1U << 2 ;

  // Field OT1: Port x configuration bits (y = 0..15)
    const uint32_t GPIOH_OTYPER_OT1 = 1U << 1 ;

  // Field OT0: Port x configuration bits (y = 0..15)
    const uint32_t GPIOH_OTYPER_OT0 = 1U << 0 ;

//---  Register OSPEEDR: GPIO port output speed
          register
  #define GPIOH_OSPEEDR (* ((volatile uint32_t *) (0x48001c00 + 8)))

  // Field OSPEEDR15: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOH_OSPEEDR_OSPEEDR15 (const uint32_t inValue) {return (inValue & 0x3U) << 30 ; }

  // Field OSPEEDR14: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOH_OSPEEDR_OSPEEDR14 (const uint32_t inValue) {return (inValue & 0x3U) << 28 ; }

  // Field OSPEEDR13: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOH_OSPEEDR_OSPEEDR13 (const uint32_t inValue) {return (inValue & 0x3U) << 26 ; }

  // Field OSPEEDR12: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOH_OSPEEDR_OSPEEDR12 (const uint32_t inValue) {return (inValue & 0x3U) << 24 ; }

  // Field OSPEEDR11: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOH_OSPEEDR_OSPEEDR11 (const uint32_t inValue) {return (inValue & 0x3U) << 22 ; }

  // Field OSPEEDR10: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOH_OSPEEDR_OSPEEDR10 (const uint32_t inValue) {return (inValue & 0x3U) << 20 ; }

  // Field OSPEEDR9: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOH_OSPEEDR_OSPEEDR9 (const uint32_t inValue) {return (inValue & 0x3U) << 18 ; }

  // Field OSPEEDR8: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOH_OSPEEDR_OSPEEDR8 (const uint32_t inValue) {return (inValue & 0x3U) << 16 ; }

  // Field OSPEEDR7: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOH_OSPEEDR_OSPEEDR7 (const uint32_t inValue) {return (inValue & 0x3U) << 14 ; }

  // Field OSPEEDR6: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOH_OSPEEDR_OSPEEDR6 (const uint32_t inValue) {return (inValue & 0x3U) << 12 ; }

  // Field OSPEEDR5: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOH_OSPEEDR_OSPEEDR5 (const uint32_t inValue) {return (inValue & 0x3U) << 10 ; }

  // Field OSPEEDR4: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOH_OSPEEDR_OSPEEDR4 (const uint32_t inValue) {return (inValue & 0x3U) << 8 ; }

  // Field OSPEEDR3: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOH_OSPEEDR_OSPEEDR3 (const uint32_t inValue) {return (inValue & 0x3U) << 6 ; }

  // Field OSPEEDR2: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOH_OSPEEDR_OSPEEDR2 (const uint32_t inValue) {return (inValue & 0x3U) << 4 ; }

  // Field OSPEEDR1: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOH_OSPEEDR_OSPEEDR1 (const uint32_t inValue) {return (inValue & 0x3U) << 2 ; }

  // Field OSPEEDR0: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOH_OSPEEDR_OSPEEDR0 (const uint32_t inValue) {return (inValue & 0x3U) << 0 ; }

//---  Register PUPDR: GPIO port pull-up/pull-down
          register
  #define GPIOH_PUPDR (* ((volatile uint32_t *) (0x48001c00 + 12)))

  // Field PUPDR15: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOH_PUPDR_PUPDR15 (const uint32_t inValue) {return (inValue & 0x3U) << 30 ; }

  // Field PUPDR14: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOH_PUPDR_PUPDR14 (const uint32_t inValue) {return (inValue & 0x3U) << 28 ; }

  // Field PUPDR13: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOH_PUPDR_PUPDR13 (const uint32_t inValue) {return (inValue & 0x3U) << 26 ; }

  // Field PUPDR12: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOH_PUPDR_PUPDR12 (const uint32_t inValue) {return (inValue & 0x3U) << 24 ; }

  // Field PUPDR11: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOH_PUPDR_PUPDR11 (const uint32_t inValue) {return (inValue & 0x3U) << 22 ; }

  // Field PUPDR10: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOH_PUPDR_PUPDR10 (const uint32_t inValue) {return (inValue & 0x3U) << 20 ; }

  // Field PUPDR9: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOH_PUPDR_PUPDR9 (const uint32_t inValue) {return (inValue & 0x3U) << 18 ; }

  // Field PUPDR8: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOH_PUPDR_PUPDR8 (const uint32_t inValue) {return (inValue & 0x3U) << 16 ; }

  // Field PUPDR7: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOH_PUPDR_PUPDR7 (const uint32_t inValue) {return (inValue & 0x3U) << 14 ; }

  // Field PUPDR6: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOH_PUPDR_PUPDR6 (const uint32_t inValue) {return (inValue & 0x3U) << 12 ; }

  // Field PUPDR5: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOH_PUPDR_PUPDR5 (const uint32_t inValue) {return (inValue & 0x3U) << 10 ; }

  // Field PUPDR4: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOH_PUPDR_PUPDR4 (const uint32_t inValue) {return (inValue & 0x3U) << 8 ; }

  // Field PUPDR3: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOH_PUPDR_PUPDR3 (const uint32_t inValue) {return (inValue & 0x3U) << 6 ; }

  // Field PUPDR2: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOH_PUPDR_PUPDR2 (const uint32_t inValue) {return (inValue & 0x3U) << 4 ; }

  // Field PUPDR1: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOH_PUPDR_PUPDR1 (const uint32_t inValue) {return (inValue & 0x3U) << 2 ; }

  // Field PUPDR0: Port x configuration bits (y = 0..15)
    inline uint32_t GPIOH_PUPDR_PUPDR0 (const uint32_t inValue) {return (inValue & 0x3U) << 0 ; }

//---  Register IDR: GPIO port input data register
  #define GPIOH_IDR (* ((const volatile uint32_t *) (0x48001c00 + 16)))

  // Field IDR15: Port input data (y = 0..15)
    const uint32_t GPIOH_IDR_IDR15 = 1U << 15 ;

  // Field IDR14: Port input data (y = 0..15)
    const uint32_t GPIOH_IDR_IDR14 = 1U << 14 ;

  // Field IDR13: Port input data (y = 0..15)
    const uint32_t GPIOH_IDR_IDR13 = 1U << 13 ;

  // Field IDR12: Port input data (y = 0..15)
    const uint32_t GPIOH_IDR_IDR12 = 1U << 12 ;

  // Field IDR11: Port input data (y = 0..15)
    const uint32_t GPIOH_IDR_IDR11 = 1U << 11 ;

  // Field IDR10: Port input data (y = 0..15)
    const uint32_t GPIOH_IDR_IDR10 = 1U << 10 ;

  // Field IDR9: Port input data (y = 0..15)
    const uint32_t GPIOH_IDR_IDR9 = 1U << 9 ;

  // Field IDR8: Port input data (y = 0..15)
    const uint32_t GPIOH_IDR_IDR8 = 1U << 8 ;

  // Field IDR7: Port input data (y = 0..15)
    const uint32_t GPIOH_IDR_IDR7 = 1U << 7 ;

  // Field IDR6: Port input data (y = 0..15)
    const uint32_t GPIOH_IDR_IDR6 = 1U << 6 ;

  // Field IDR5: Port input data (y = 0..15)
    const uint32_t GPIOH_IDR_IDR5 = 1U << 5 ;

  // Field IDR4: Port input data (y = 0..15)
    const uint32_t GPIOH_IDR_IDR4 = 1U << 4 ;

  // Field IDR3: Port input data (y = 0..15)
    const uint32_t GPIOH_IDR_IDR3 = 1U << 3 ;

  // Field IDR2: Port input data (y = 0..15)
    const uint32_t GPIOH_IDR_IDR2 = 1U << 2 ;

  // Field IDR1: Port input data (y = 0..15)
    const uint32_t GPIOH_IDR_IDR1 = 1U << 1 ;

  // Field IDR0: Port input data (y = 0..15)
    const uint32_t GPIOH_IDR_IDR0 = 1U << 0 ;

//---  Register ODR: GPIO port output data register
  #define GPIOH_ODR (* ((volatile uint32_t *) (0x48001c00 + 20)))

  // Field ODR15: Port output data (y = 0..15)
    const uint32_t GPIOH_ODR_ODR15 = 1U << 15 ;

  // Field ODR14: Port output data (y = 0..15)
    const uint32_t GPIOH_ODR_ODR14 = 1U << 14 ;

  // Field ODR13: Port output data (y = 0..15)
    const uint32_t GPIOH_ODR_ODR13 = 1U << 13 ;

  // Field ODR12: Port output data (y = 0..15)
    const uint32_t GPIOH_ODR_ODR12 = 1U << 12 ;

  // Field ODR11: Port output data (y = 0..15)
    const uint32_t GPIOH_ODR_ODR11 = 1U << 11 ;

  // Field ODR10: Port output data (y = 0..15)
    const uint32_t GPIOH_ODR_ODR10 = 1U << 10 ;

  // Field ODR9: Port output data (y = 0..15)
    const uint32_t GPIOH_ODR_ODR9 = 1U << 9 ;

  // Field ODR8: Port output data (y = 0..15)
    const uint32_t GPIOH_ODR_ODR8 = 1U << 8 ;

  // Field ODR7: Port output data (y = 0..15)
    const uint32_t GPIOH_ODR_ODR7 = 1U << 7 ;

  // Field ODR6: Port output data (y = 0..15)
    const uint32_t GPIOH_ODR_ODR6 = 1U << 6 ;

  // Field ODR5: Port output data (y = 0..15)
    const uint32_t GPIOH_ODR_ODR5 = 1U << 5 ;

  // Field ODR4: Port output data (y = 0..15)
    const uint32_t GPIOH_ODR_ODR4 = 1U << 4 ;

  // Field ODR3: Port output data (y = 0..15)
    const uint32_t GPIOH_ODR_ODR3 = 1U << 3 ;

  // Field ODR2: Port output data (y = 0..15)
    const uint32_t GPIOH_ODR_ODR2 = 1U << 2 ;

  // Field ODR1: Port output data (y = 0..15)
    const uint32_t GPIOH_ODR_ODR1 = 1U << 1 ;

  // Field ODR0: Port output data (y = 0..15)
    const uint32_t GPIOH_ODR_ODR0 = 1U << 0 ;

//---  Register BSRR: GPIO port bit set/reset
          register
  #define GPIOH_BSRR (* ((volatile uint32_t *) (0x48001c00 + 24)))

  // Field BR15: Port x reset bit y (y = 0..15)
    const uint32_t GPIOH_BSRR_BR15 = 1U << 31 ;

  // Field BR14: Port x reset bit y (y = 0..15)
    const uint32_t GPIOH_BSRR_BR14 = 1U << 30 ;

  // Field BR13: Port x reset bit y (y = 0..15)
    const uint32_t GPIOH_BSRR_BR13 = 1U << 29 ;

  // Field BR12: Port x reset bit y (y = 0..15)
    const uint32_t GPIOH_BSRR_BR12 = 1U << 28 ;

  // Field BR11: Port x reset bit y (y = 0..15)
    const uint32_t GPIOH_BSRR_BR11 = 1U << 27 ;

  // Field BR10: Port x reset bit y (y = 0..15)
    const uint32_t GPIOH_BSRR_BR10 = 1U << 26 ;

  // Field BR9: Port x reset bit y (y = 0..15)
    const uint32_t GPIOH_BSRR_BR9 = 1U << 25 ;

  // Field BR8: Port x reset bit y (y = 0..15)
    const uint32_t GPIOH_BSRR_BR8 = 1U << 24 ;

  // Field BR7: Port x reset bit y (y = 0..15)
    const uint32_t GPIOH_BSRR_BR7 = 1U << 23 ;

  // Field BR6: Port x reset bit y (y = 0..15)
    const uint32_t GPIOH_BSRR_BR6 = 1U << 22 ;

  // Field BR5: Port x reset bit y (y = 0..15)
    const uint32_t GPIOH_BSRR_BR5 = 1U << 21 ;

  // Field BR4: Port x reset bit y (y = 0..15)
    const uint32_t GPIOH_BSRR_BR4 = 1U << 20 ;

  // Field BR3: Port x reset bit y (y = 0..15)
    const uint32_t GPIOH_BSRR_BR3 = 1U << 19 ;

  // Field BR2: Port x reset bit y (y = 0..15)
    const uint32_t GPIOH_BSRR_BR2 = 1U << 18 ;

  // Field BR1: Port x reset bit y (y = 0..15)
    const uint32_t GPIOH_BSRR_BR1 = 1U << 17 ;

  // Field BR0: Port x set bit y (y= 0..15)
    const uint32_t GPIOH_BSRR_BR0 = 1U << 16 ;

  // Field BS15: Port x set bit y (y= 0..15)
    const uint32_t GPIOH_BSRR_BS15 = 1U << 15 ;

  // Field BS14: Port x set bit y (y= 0..15)
    const uint32_t GPIOH_BSRR_BS14 = 1U << 14 ;

  // Field BS13: Port x set bit y (y= 0..15)
    const uint32_t GPIOH_BSRR_BS13 = 1U << 13 ;

  // Field BS12: Port x set bit y (y= 0..15)
    const uint32_t GPIOH_BSRR_BS12 = 1U << 12 ;

  // Field BS11: Port x set bit y (y= 0..15)
    const uint32_t GPIOH_BSRR_BS11 = 1U << 11 ;

  // Field BS10: Port x set bit y (y= 0..15)
    const uint32_t GPIOH_BSRR_BS10 = 1U << 10 ;

  // Field BS9: Port x set bit y (y= 0..15)
    const uint32_t GPIOH_BSRR_BS9 = 1U << 9 ;

  // Field BS8: Port x set bit y (y= 0..15)
    const uint32_t GPIOH_BSRR_BS8 = 1U << 8 ;

  // Field BS7: Port x set bit y (y= 0..15)
    const uint32_t GPIOH_BSRR_BS7 = 1U << 7 ;

  // Field BS6: Port x set bit y (y= 0..15)
    const uint32_t GPIOH_BSRR_BS6 = 1U << 6 ;

  // Field BS5: Port x set bit y (y= 0..15)
    const uint32_t GPIOH_BSRR_BS5 = 1U << 5 ;

  // Field BS4: Port x set bit y (y= 0..15)
    const uint32_t GPIOH_BSRR_BS4 = 1U << 4 ;

  // Field BS3: Port x set bit y (y= 0..15)
    const uint32_t GPIOH_BSRR_BS3 = 1U << 3 ;

  // Field BS2: Port x set bit y (y= 0..15)
    const uint32_t GPIOH_BSRR_BS2 = 1U << 2 ;

  // Field BS1: Port x set bit y (y= 0..15)
    const uint32_t GPIOH_BSRR_BS1 = 1U << 1 ;

  // Field BS0: Port x set bit y (y= 0..15)
    const uint32_t GPIOH_BSRR_BS0 = 1U << 0 ;

//---  Register LCKR: GPIO port configuration lock
          register
  #define GPIOH_LCKR (* ((volatile uint32_t *) (0x48001c00 + 28)))

  // Field LCKK: Port x lock bit y (y= 0..15)
    const uint32_t GPIOH_LCKR_LCKK = 1U << 16 ;

  // Field LCK15: Port x lock bit y (y= 0..15)
    const uint32_t GPIOH_LCKR_LCK15 = 1U << 15 ;

  // Field LCK14: Port x lock bit y (y= 0..15)
    const uint32_t GPIOH_LCKR_LCK14 = 1U << 14 ;

  // Field LCK13: Port x lock bit y (y= 0..15)
    const uint32_t GPIOH_LCKR_LCK13 = 1U << 13 ;

  // Field LCK12: Port x lock bit y (y= 0..15)
    const uint32_t GPIOH_LCKR_LCK12 = 1U << 12 ;

  // Field LCK11: Port x lock bit y (y= 0..15)
    const uint32_t GPIOH_LCKR_LCK11 = 1U << 11 ;

  // Field LCK10: Port x lock bit y (y= 0..15)
    const uint32_t GPIOH_LCKR_LCK10 = 1U << 10 ;

  // Field LCK9: Port x lock bit y (y= 0..15)
    const uint32_t GPIOH_LCKR_LCK9 = 1U << 9 ;

  // Field LCK8: Port x lock bit y (y= 0..15)
    const uint32_t GPIOH_LCKR_LCK8 = 1U << 8 ;

  // Field LCK7: Port x lock bit y (y= 0..15)
    const uint32_t GPIOH_LCKR_LCK7 = 1U << 7 ;

  // Field LCK6: Port x lock bit y (y= 0..15)
    const uint32_t GPIOH_LCKR_LCK6 = 1U << 6 ;

  // Field LCK5: Port x lock bit y (y= 0..15)
    const uint32_t GPIOH_LCKR_LCK5 = 1U << 5 ;

  // Field LCK4: Port x lock bit y (y= 0..15)
    const uint32_t GPIOH_LCKR_LCK4 = 1U << 4 ;

  // Field LCK3: Port x lock bit y (y= 0..15)
    const uint32_t GPIOH_LCKR_LCK3 = 1U << 3 ;

  // Field LCK2: Port x lock bit y (y= 0..15)
    const uint32_t GPIOH_LCKR_LCK2 = 1U << 2 ;

  // Field LCK1: Port x lock bit y (y= 0..15)
    const uint32_t GPIOH_LCKR_LCK1 = 1U << 1 ;

  // Field LCK0: Port x lock bit y (y= 0..15)
    const uint32_t GPIOH_LCKR_LCK0 = 1U << 0 ;

//---  Register AFRL: GPIO alternate function low
          register
  #define GPIOH_AFRL (* ((volatile uint32_t *) (0x48001c00 + 32)))

  // Field AFRL7: Alternate function selection for port x bit y (y = 0..7)
    inline uint32_t GPIOH_AFRL_AFRL7 (const uint32_t inValue) {return (inValue & 0xfU) << 28 ; }

  // Field AFRL6: Alternate function selection for port x bit y (y = 0..7)
    inline uint32_t GPIOH_AFRL_AFRL6 (const uint32_t inValue) {return (inValue & 0xfU) << 24 ; }

  // Field AFRL5: Alternate function selection for port x bit y (y = 0..7)
    inline uint32_t GPIOH_AFRL_AFRL5 (const uint32_t inValue) {return (inValue & 0xfU) << 20 ; }

  // Field AFRL4: Alternate function selection for port x bit y (y = 0..7)
    inline uint32_t GPIOH_AFRL_AFRL4 (const uint32_t inValue) {return (inValue & 0xfU) << 16 ; }

  // Field AFRL3: Alternate function selection for port x bit y (y = 0..7)
    inline uint32_t GPIOH_AFRL_AFRL3 (const uint32_t inValue) {return (inValue & 0xfU) << 12 ; }

  // Field AFRL2: Alternate function selection for port x bit y (y = 0..7)
    inline uint32_t GPIOH_AFRL_AFRL2 (const uint32_t inValue) {return (inValue & 0xfU) << 8 ; }

  // Field AFRL1: Alternate function selection for port x bit y (y = 0..7)
    inline uint32_t GPIOH_AFRL_AFRL1 (const uint32_t inValue) {return (inValue & 0xfU) << 4 ; }

  // Field AFRL0: Alternate function selection for port x bit y (y = 0..7)
    inline uint32_t GPIOH_AFRL_AFRL0 (const uint32_t inValue) {return (inValue & 0xfU) << 0 ; }

//---  Register AFRH: GPIO alternate function high
          register
  #define GPIOH_AFRH (* ((volatile uint32_t *) (0x48001c00 + 36)))

  // Field AFRH15: Alternate function selection for port x bit y (y = 8..15)
    inline uint32_t GPIOH_AFRH_AFRH15 (const uint32_t inValue) {return (inValue & 0xfU) << 28 ; }

  // Field AFRH14: Alternate function selection for port x bit y (y = 8..15)
    inline uint32_t GPIOH_AFRH_AFRH14 (const uint32_t inValue) {return (inValue & 0xfU) << 24 ; }

  // Field AFRH13: Alternate function selection for port x bit y (y = 8..15)
    inline uint32_t GPIOH_AFRH_AFRH13 (const uint32_t inValue) {return (inValue & 0xfU) << 20 ; }

  // Field AFRH12: Alternate function selection for port x bit y (y = 8..15)
    inline uint32_t GPIOH_AFRH_AFRH12 (const uint32_t inValue) {return (inValue & 0xfU) << 16 ; }

  // Field AFRH11: Alternate function selection for port x bit y (y = 8..15)
    inline uint32_t GPIOH_AFRH_AFRH11 (const uint32_t inValue) {return (inValue & 0xfU) << 12 ; }

  // Field AFRH10: Alternate function selection for port x bit y (y = 8..15)
    inline uint32_t GPIOH_AFRH_AFRH10 (const uint32_t inValue) {return (inValue & 0xfU) << 8 ; }

  // Field AFRH9: Alternate function selection for port x bit y (y = 8..15)
    inline uint32_t GPIOH_AFRH_AFRH9 (const uint32_t inValue) {return (inValue & 0xfU) << 4 ; }

  // Field AFRH8: Alternate function selection for port x bit y (y = 8..15)
    inline uint32_t GPIOH_AFRH_AFRH8 (const uint32_t inValue) {return (inValue & 0xfU) << 0 ; }

//------------------------------------------------------------------------------
// Peripheral I2C1: Inter-integrated circuit
//------------------------------------------------------------------------------

//---  Register CR1: Control register 1
  #define I2C1_CR1 (* ((volatile uint32_t *) (0x40005400 + 0)))

  // Field PE: Peripheral enable
    const uint32_t I2C1_CR1_PE = 1U << 0 ;

  // Field TXIE: TX Interrupt enable
    const uint32_t I2C1_CR1_TXIE = 1U << 1 ;

  // Field RXIE: RX Interrupt enable
    const uint32_t I2C1_CR1_RXIE = 1U << 2 ;

  // Field ADDRIE: Address match interrupt enable (slave only)
    const uint32_t I2C1_CR1_ADDRIE = 1U << 3 ;

  // Field NACKIE: Not acknowledge received interrupt enable
    const uint32_t I2C1_CR1_NACKIE = 1U << 4 ;

  // Field STOPIE: STOP detection Interrupt enable
    const uint32_t I2C1_CR1_STOPIE = 1U << 5 ;

  // Field TCIE: Transfer Complete interrupt enable
    const uint32_t I2C1_CR1_TCIE = 1U << 6 ;

  // Field ERRIE: Error interrupts enable
    const uint32_t I2C1_CR1_ERRIE = 1U << 7 ;

  // Field DNF: Digital noise filter
    inline uint32_t I2C1_CR1_DNF (const uint32_t inValue) {return (inValue & 0xfU) << 8 ; }

  // Field ANFOFF: Analog noise filter OFF
    const uint32_t I2C1_CR1_ANFOFF = 1U << 12 ;

  // Field TXDMAEN: DMA transmission requests enable
    const uint32_t I2C1_CR1_TXDMAEN = 1U << 14 ;

  // Field RXDMAEN: DMA reception requests enable
    const uint32_t I2C1_CR1_RXDMAEN = 1U << 15 ;

  // Field SBC: Slave byte control
    const uint32_t I2C1_CR1_SBC = 1U << 16 ;

  // Field NOSTRETCH: Clock stretching disable
    const uint32_t I2C1_CR1_NOSTRETCH = 1U << 17 ;

  // Field WUPEN: Wakeup from STOP enable
    const uint32_t I2C1_CR1_WUPEN = 1U << 18 ;

  // Field GCEN: General call enable
    const uint32_t I2C1_CR1_GCEN = 1U << 19 ;

  // Field SMBHEN: SMBus Host address enable
    const uint32_t I2C1_CR1_SMBHEN = 1U << 20 ;

  // Field SMBDEN: SMBus Device Default address enable
    const uint32_t I2C1_CR1_SMBDEN = 1U << 21 ;

  // Field ALERTEN: SMBUS alert enable
    const uint32_t I2C1_CR1_ALERTEN = 1U << 22 ;

  // Field PECEN: PEC enable
    const uint32_t I2C1_CR1_PECEN = 1U << 23 ;

//---  Register CR2: Control register 2
  #define I2C1_CR2 (* ((volatile uint32_t *) (0x40005400 + 4)))

  // Field PECBYTE: Packet error checking byte
    const uint32_t I2C1_CR2_PECBYTE = 1U << 26 ;

  // Field AUTOEND: Automatic end mode (master mode)
    const uint32_t I2C1_CR2_AUTOEND = 1U << 25 ;

  // Field RELOAD: NBYTES reload mode
    const uint32_t I2C1_CR2_RELOAD = 1U << 24 ;

  // Field NBYTES: Number of bytes
    inline uint32_t I2C1_CR2_NBYTES (const uint32_t inValue) {return (inValue & 0xffU) << 16 ; }

  // Field NACK: NACK generation (slave mode)
    const uint32_t I2C1_CR2_NACK = 1U << 15 ;

  // Field STOP: Stop generation (master mode)
    const uint32_t I2C1_CR2_STOP = 1U << 14 ;

  // Field START: Start generation
    const uint32_t I2C1_CR2_START = 1U << 13 ;

  // Field HEAD10R: 10-bit address header only read direction (master receiver mode)
    const uint32_t I2C1_CR2_HEAD10R = 1U << 12 ;

  // Field ADD10: 10-bit addressing mode (master mode)
    const uint32_t I2C1_CR2_ADD10 = 1U << 11 ;

  // Field RD_WRN: Transfer direction (master mode)
    const uint32_t I2C1_CR2_RD_WRN = 1U << 10 ;

  // Field SADD: Slave address bit (master mode)
    inline uint32_t I2C1_CR2_SADD (const uint32_t inValue) {return (inValue & 0x3ffU) << 0 ; }

//---  Register OAR1: Own address register 1
  #define I2C1_OAR1 (* ((volatile uint32_t *) (0x40005400 + 8)))

  // Field OA1: Interface address
    inline uint32_t I2C1_OAR1_OA1 (const uint32_t inValue) {return (inValue & 0x3ffU) << 0 ; }

  // Field OA1MODE: Own Address 1 10-bit mode
    const uint32_t I2C1_OAR1_OA1MODE = 1U << 10 ;

  // Field OA1EN: Own Address 1 enable
    const uint32_t I2C1_OAR1_OA1EN = 1U << 15 ;

//---  Register OAR2: Own address register 2
  #define I2C1_OAR2 (* ((volatile uint32_t *) (0x40005400 + 12)))

  // Field OA2: Interface address
    inline uint32_t I2C1_OAR2_OA2 (const uint32_t inValue) {return (inValue & 0x7fU) << 1 ; }

  // Field OA2MSK: Own Address 2 masks
    inline uint32_t I2C1_OAR2_OA2MSK (const uint32_t inValue) {return (inValue & 0x7U) << 8 ; }

  // Field OA2EN: Own Address 2 enable
    const uint32_t I2C1_OAR2_OA2EN = 1U << 15 ;

//---  Register TIMINGR: Timing register
  #define I2C1_TIMINGR (* ((volatile uint32_t *) (0x40005400 + 16)))

  // Field SCLL: SCL low period (master mode)
    inline uint32_t I2C1_TIMINGR_SCLL (const uint32_t inValue) {return (inValue & 0xffU) << 0 ; }

  // Field SCLH: SCL high period (master mode)
    inline uint32_t I2C1_TIMINGR_SCLH (const uint32_t inValue) {return (inValue & 0xffU) << 8 ; }

  // Field SDADEL: Data hold time
    inline uint32_t I2C1_TIMINGR_SDADEL (const uint32_t inValue) {return (inValue & 0xfU) << 16 ; }

  // Field SCLDEL: Data setup time
    inline uint32_t I2C1_TIMINGR_SCLDEL (const uint32_t inValue) {return (inValue & 0xfU) << 20 ; }

  // Field PRESC: Timing prescaler
    inline uint32_t I2C1_TIMINGR_PRESC (const uint32_t inValue) {return (inValue & 0xfU) << 28 ; }

//---  Register TIMEOUTR: Status register 1
  #define I2C1_TIMEOUTR (* ((volatile uint32_t *) (0x40005400 + 20)))

  // Field TIMEOUTA: Bus timeout A
    inline uint32_t I2C1_TIMEOUTR_TIMEOUTA (const uint32_t inValue) {return (inValue & 0xfffU) << 0 ; }

  // Field TIDLE: Idle clock timeout detection
    const uint32_t I2C1_TIMEOUTR_TIDLE = 1U << 12 ;

  // Field TIMOUTEN: Clock timeout enable
    const uint32_t I2C1_TIMEOUTR_TIMOUTEN = 1U << 15 ;

  // Field TIMEOUTB: Bus timeout B
    inline uint32_t I2C1_TIMEOUTR_TIMEOUTB (const uint32_t inValue) {return (inValue & 0xfffU) << 16 ; }

  // Field TEXTEN: Extended clock timeout enable
    const uint32_t I2C1_TIMEOUTR_TEXTEN = 1U << 31 ;

//---  Register ISR: Interrupt and Status register
  #define I2C1_ISR (* ((volatile uint32_t *) (0x40005400 + 24)))

  // Field ADDCODE: Address match code (Slave mode)
    inline uint32_t I2C1_ISR_ADDCODE (const uint32_t inValue) {return (inValue & 0x7fU) << 17 ; }

  // Field DIR: Transfer direction (Slave mode)
    const uint32_t I2C1_ISR_DIR = 1U << 16 ;

  // Field BUSY: Bus busy
    const uint32_t I2C1_ISR_BUSY = 1U << 15 ;

  // Field ALERT: SMBus alert
    const uint32_t I2C1_ISR_ALERT = 1U << 13 ;

  // Field TIMEOUT: Timeout or t_low detection flag
    const uint32_t I2C1_ISR_TIMEOUT = 1U << 12 ;

  // Field PECERR: PEC Error in reception
    const uint32_t I2C1_ISR_PECERR = 1U << 11 ;

  // Field OVR: Overrun/Underrun (slave mode)
    const uint32_t I2C1_ISR_OVR = 1U << 10 ;

  // Field ARLO: Arbitration lost
    const uint32_t I2C1_ISR_ARLO = 1U << 9 ;

  // Field BERR: Bus error
    const uint32_t I2C1_ISR_BERR = 1U << 8 ;

  // Field TCR: Transfer Complete Reload
    const uint32_t I2C1_ISR_TCR = 1U << 7 ;

  // Field TC: Transfer Complete (master mode)
    const uint32_t I2C1_ISR_TC = 1U << 6 ;

  // Field STOPF: Stop detection flag
    const uint32_t I2C1_ISR_STOPF = 1U << 5 ;

  // Field NACKF: Not acknowledge received flag
    const uint32_t I2C1_ISR_NACKF = 1U << 4 ;

  // Field ADDR: Address matched (slave mode)
    const uint32_t I2C1_ISR_ADDR = 1U << 3 ;

  // Field RXNE: Receive data register not empty (receivers)
    const uint32_t I2C1_ISR_RXNE = 1U << 2 ;

  // Field TXIS: Transmit interrupt status (transmitters)
    const uint32_t I2C1_ISR_TXIS = 1U << 1 ;

  // Field TXE: Transmit data register empty (transmitters)
    const uint32_t I2C1_ISR_TXE = 1U << 0 ;

//---  Register ICR: Interrupt clear register
  #define I2C1_ICR (* ((volatile uint32_t *) (0x40005400 + 28)))

  // Field ALERTCF: Alert flag clear
    const uint32_t I2C1_ICR_ALERTCF = 1U << 13 ;

  // Field TIMOUTCF: Timeout detection flag clear
    const uint32_t I2C1_ICR_TIMOUTCF = 1U << 12 ;

  // Field PECCF: PEC Error flag clear
    const uint32_t I2C1_ICR_PECCF = 1U << 11 ;

  // Field OVRCF: Overrun/Underrun flag clear
    const uint32_t I2C1_ICR_OVRCF = 1U << 10 ;

  // Field ARLOCF: Arbitration lost flag clear
    const uint32_t I2C1_ICR_ARLOCF = 1U << 9 ;

  // Field BERRCF: Bus error flag clear
    const uint32_t I2C1_ICR_BERRCF = 1U << 8 ;

  // Field STOPCF: Stop detection flag clear
    const uint32_t I2C1_ICR_STOPCF = 1U << 5 ;

  // Field NACKCF: Not Acknowledge flag clear
    const uint32_t I2C1_ICR_NACKCF = 1U << 4 ;

  // Field ADDRCF: Address Matched flag clear
    const uint32_t I2C1_ICR_ADDRCF = 1U << 3 ;

//---  Register PECR: PEC register
  #define I2C1_PECR (* ((const volatile uint32_t *) (0x40005400 + 32)))

  // Field PEC: Packet error checking register
    inline uint32_t I2C1_PECR_PEC (const uint32_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register RXDR: Receive data register
  #define I2C1_RXDR (* ((const volatile uint32_t *) (0x40005400 + 36)))

  // Field RXDATA: 8-bit receive data
    inline uint32_t I2C1_RXDR_RXDATA (const uint32_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register TXDR: Transmit data register
  #define I2C1_TXDR (* ((volatile uint32_t *) (0x40005400 + 40)))

  // Field TXDATA: 8-bit transmit data
    inline uint32_t I2C1_TXDR_TXDATA (const uint32_t inValue) {return (inValue & 0xffU) << 0 ; }

//------------------------------------------------------------------------------
// Peripheral I2C2
//------------------------------------------------------------------------------

//---  Register CR1: Control register 1
  #define I2C2_CR1 (* ((volatile uint32_t *) (0x40005800 + 0)))

  // Field PE: Peripheral enable
    const uint32_t I2C2_CR1_PE = 1U << 0 ;

  // Field TXIE: TX Interrupt enable
    const uint32_t I2C2_CR1_TXIE = 1U << 1 ;

  // Field RXIE: RX Interrupt enable
    const uint32_t I2C2_CR1_RXIE = 1U << 2 ;

  // Field ADDRIE: Address match interrupt enable (slave only)
    const uint32_t I2C2_CR1_ADDRIE = 1U << 3 ;

  // Field NACKIE: Not acknowledge received interrupt enable
    const uint32_t I2C2_CR1_NACKIE = 1U << 4 ;

  // Field STOPIE: STOP detection Interrupt enable
    const uint32_t I2C2_CR1_STOPIE = 1U << 5 ;

  // Field TCIE: Transfer Complete interrupt enable
    const uint32_t I2C2_CR1_TCIE = 1U << 6 ;

  // Field ERRIE: Error interrupts enable
    const uint32_t I2C2_CR1_ERRIE = 1U << 7 ;

  // Field DNF: Digital noise filter
    inline uint32_t I2C2_CR1_DNF (const uint32_t inValue) {return (inValue & 0xfU) << 8 ; }

  // Field ANFOFF: Analog noise filter OFF
    const uint32_t I2C2_CR1_ANFOFF = 1U << 12 ;

  // Field TXDMAEN: DMA transmission requests enable
    const uint32_t I2C2_CR1_TXDMAEN = 1U << 14 ;

  // Field RXDMAEN: DMA reception requests enable
    const uint32_t I2C2_CR1_RXDMAEN = 1U << 15 ;

  // Field SBC: Slave byte control
    const uint32_t I2C2_CR1_SBC = 1U << 16 ;

  // Field NOSTRETCH: Clock stretching disable
    const uint32_t I2C2_CR1_NOSTRETCH = 1U << 17 ;

  // Field WUPEN: Wakeup from STOP enable
    const uint32_t I2C2_CR1_WUPEN = 1U << 18 ;

  // Field GCEN: General call enable
    const uint32_t I2C2_CR1_GCEN = 1U << 19 ;

  // Field SMBHEN: SMBus Host address enable
    const uint32_t I2C2_CR1_SMBHEN = 1U << 20 ;

  // Field SMBDEN: SMBus Device Default address enable
    const uint32_t I2C2_CR1_SMBDEN = 1U << 21 ;

  // Field ALERTEN: SMBUS alert enable
    const uint32_t I2C2_CR1_ALERTEN = 1U << 22 ;

  // Field PECEN: PEC enable
    const uint32_t I2C2_CR1_PECEN = 1U << 23 ;

//---  Register CR2: Control register 2
  #define I2C2_CR2 (* ((volatile uint32_t *) (0x40005800 + 4)))

  // Field PECBYTE: Packet error checking byte
    const uint32_t I2C2_CR2_PECBYTE = 1U << 26 ;

  // Field AUTOEND: Automatic end mode (master mode)
    const uint32_t I2C2_CR2_AUTOEND = 1U << 25 ;

  // Field RELOAD: NBYTES reload mode
    const uint32_t I2C2_CR2_RELOAD = 1U << 24 ;

  // Field NBYTES: Number of bytes
    inline uint32_t I2C2_CR2_NBYTES (const uint32_t inValue) {return (inValue & 0xffU) << 16 ; }

  // Field NACK: NACK generation (slave mode)
    const uint32_t I2C2_CR2_NACK = 1U << 15 ;

  // Field STOP: Stop generation (master mode)
    const uint32_t I2C2_CR2_STOP = 1U << 14 ;

  // Field START: Start generation
    const uint32_t I2C2_CR2_START = 1U << 13 ;

  // Field HEAD10R: 10-bit address header only read direction (master receiver mode)
    const uint32_t I2C2_CR2_HEAD10R = 1U << 12 ;

  // Field ADD10: 10-bit addressing mode (master mode)
    const uint32_t I2C2_CR2_ADD10 = 1U << 11 ;

  // Field RD_WRN: Transfer direction (master mode)
    const uint32_t I2C2_CR2_RD_WRN = 1U << 10 ;

  // Field SADD: Slave address bit (master mode)
    inline uint32_t I2C2_CR2_SADD (const uint32_t inValue) {return (inValue & 0x3ffU) << 0 ; }

//---  Register OAR1: Own address register 1
  #define I2C2_OAR1 (* ((volatile uint32_t *) (0x40005800 + 8)))

  // Field OA1: Interface address
    inline uint32_t I2C2_OAR1_OA1 (const uint32_t inValue) {return (inValue & 0x3ffU) << 0 ; }

  // Field OA1MODE: Own Address 1 10-bit mode
    const uint32_t I2C2_OAR1_OA1MODE = 1U << 10 ;

  // Field OA1EN: Own Address 1 enable
    const uint32_t I2C2_OAR1_OA1EN = 1U << 15 ;

//---  Register OAR2: Own address register 2
  #define I2C2_OAR2 (* ((volatile uint32_t *) (0x40005800 + 12)))

  // Field OA2: Interface address
    inline uint32_t I2C2_OAR2_OA2 (const uint32_t inValue) {return (inValue & 0x7fU) << 1 ; }

  // Field OA2MSK: Own Address 2 masks
    inline uint32_t I2C2_OAR2_OA2MSK (const uint32_t inValue) {return (inValue & 0x7U) << 8 ; }

  // Field OA2EN: Own Address 2 enable
    const uint32_t I2C2_OAR2_OA2EN = 1U << 15 ;

//---  Register TIMINGR: Timing register
  #define I2C2_TIMINGR (* ((volatile uint32_t *) (0x40005800 + 16)))

  // Field SCLL: SCL low period (master mode)
    inline uint32_t I2C2_TIMINGR_SCLL (const uint32_t inValue) {return (inValue & 0xffU) << 0 ; }

  // Field SCLH: SCL high period (master mode)
    inline uint32_t I2C2_TIMINGR_SCLH (const uint32_t inValue) {return (inValue & 0xffU) << 8 ; }

  // Field SDADEL: Data hold time
    inline uint32_t I2C2_TIMINGR_SDADEL (const uint32_t inValue) {return (inValue & 0xfU) << 16 ; }

  // Field SCLDEL: Data setup time
    inline uint32_t I2C2_TIMINGR_SCLDEL (const uint32_t inValue) {return (inValue & 0xfU) << 20 ; }

  // Field PRESC: Timing prescaler
    inline uint32_t I2C2_TIMINGR_PRESC (const uint32_t inValue) {return (inValue & 0xfU) << 28 ; }

//---  Register TIMEOUTR: Status register 1
  #define I2C2_TIMEOUTR (* ((volatile uint32_t *) (0x40005800 + 20)))

  // Field TIMEOUTA: Bus timeout A
    inline uint32_t I2C2_TIMEOUTR_TIMEOUTA (const uint32_t inValue) {return (inValue & 0xfffU) << 0 ; }

  // Field TIDLE: Idle clock timeout detection
    const uint32_t I2C2_TIMEOUTR_TIDLE = 1U << 12 ;

  // Field TIMOUTEN: Clock timeout enable
    const uint32_t I2C2_TIMEOUTR_TIMOUTEN = 1U << 15 ;

  // Field TIMEOUTB: Bus timeout B
    inline uint32_t I2C2_TIMEOUTR_TIMEOUTB (const uint32_t inValue) {return (inValue & 0xfffU) << 16 ; }

  // Field TEXTEN: Extended clock timeout enable
    const uint32_t I2C2_TIMEOUTR_TEXTEN = 1U << 31 ;

//---  Register ISR: Interrupt and Status register
  #define I2C2_ISR (* ((volatile uint32_t *) (0x40005800 + 24)))

  // Field ADDCODE: Address match code (Slave mode)
    inline uint32_t I2C2_ISR_ADDCODE (const uint32_t inValue) {return (inValue & 0x7fU) << 17 ; }

  // Field DIR: Transfer direction (Slave mode)
    const uint32_t I2C2_ISR_DIR = 1U << 16 ;

  // Field BUSY: Bus busy
    const uint32_t I2C2_ISR_BUSY = 1U << 15 ;

  // Field ALERT: SMBus alert
    const uint32_t I2C2_ISR_ALERT = 1U << 13 ;

  // Field TIMEOUT: Timeout or t_low detection flag
    const uint32_t I2C2_ISR_TIMEOUT = 1U << 12 ;

  // Field PECERR: PEC Error in reception
    const uint32_t I2C2_ISR_PECERR = 1U << 11 ;

  // Field OVR: Overrun/Underrun (slave mode)
    const uint32_t I2C2_ISR_OVR = 1U << 10 ;

  // Field ARLO: Arbitration lost
    const uint32_t I2C2_ISR_ARLO = 1U << 9 ;

  // Field BERR: Bus error
    const uint32_t I2C2_ISR_BERR = 1U << 8 ;

  // Field TCR: Transfer Complete Reload
    const uint32_t I2C2_ISR_TCR = 1U << 7 ;

  // Field TC: Transfer Complete (master mode)
    const uint32_t I2C2_ISR_TC = 1U << 6 ;

  // Field STOPF: Stop detection flag
    const uint32_t I2C2_ISR_STOPF = 1U << 5 ;

  // Field NACKF: Not acknowledge received flag
    const uint32_t I2C2_ISR_NACKF = 1U << 4 ;

  // Field ADDR: Address matched (slave mode)
    const uint32_t I2C2_ISR_ADDR = 1U << 3 ;

  // Field RXNE: Receive data register not empty (receivers)
    const uint32_t I2C2_ISR_RXNE = 1U << 2 ;

  // Field TXIS: Transmit interrupt status (transmitters)
    const uint32_t I2C2_ISR_TXIS = 1U << 1 ;

  // Field TXE: Transmit data register empty (transmitters)
    const uint32_t I2C2_ISR_TXE = 1U << 0 ;

//---  Register ICR: Interrupt clear register
  #define I2C2_ICR (* ((volatile uint32_t *) (0x40005800 + 28)))

  // Field ALERTCF: Alert flag clear
    const uint32_t I2C2_ICR_ALERTCF = 1U << 13 ;

  // Field TIMOUTCF: Timeout detection flag clear
    const uint32_t I2C2_ICR_TIMOUTCF = 1U << 12 ;

  // Field PECCF: PEC Error flag clear
    const uint32_t I2C2_ICR_PECCF = 1U << 11 ;

  // Field OVRCF: Overrun/Underrun flag clear
    const uint32_t I2C2_ICR_OVRCF = 1U << 10 ;

  // Field ARLOCF: Arbitration lost flag clear
    const uint32_t I2C2_ICR_ARLOCF = 1U << 9 ;

  // Field BERRCF: Bus error flag clear
    const uint32_t I2C2_ICR_BERRCF = 1U << 8 ;

  // Field STOPCF: Stop detection flag clear
    const uint32_t I2C2_ICR_STOPCF = 1U << 5 ;

  // Field NACKCF: Not Acknowledge flag clear
    const uint32_t I2C2_ICR_NACKCF = 1U << 4 ;

  // Field ADDRCF: Address Matched flag clear
    const uint32_t I2C2_ICR_ADDRCF = 1U << 3 ;

//---  Register PECR: PEC register
  #define I2C2_PECR (* ((const volatile uint32_t *) (0x40005800 + 32)))

  // Field PEC: Packet error checking register
    inline uint32_t I2C2_PECR_PEC (const uint32_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register RXDR: Receive data register
  #define I2C2_RXDR (* ((const volatile uint32_t *) (0x40005800 + 36)))

  // Field RXDATA: 8-bit receive data
    inline uint32_t I2C2_RXDR_RXDATA (const uint32_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register TXDR: Transmit data register
  #define I2C2_TXDR (* ((volatile uint32_t *) (0x40005800 + 40)))

  // Field TXDATA: 8-bit transmit data
    inline uint32_t I2C2_TXDR_TXDATA (const uint32_t inValue) {return (inValue & 0xffU) << 0 ; }

//------------------------------------------------------------------------------
// Peripheral I2C3
//------------------------------------------------------------------------------

//---  Register CR1: Control register 1
  #define I2C3_CR1 (* ((volatile uint32_t *) (0x40005c00 + 0)))

  // Field PE: Peripheral enable
    const uint32_t I2C3_CR1_PE = 1U << 0 ;

  // Field TXIE: TX Interrupt enable
    const uint32_t I2C3_CR1_TXIE = 1U << 1 ;

  // Field RXIE: RX Interrupt enable
    const uint32_t I2C3_CR1_RXIE = 1U << 2 ;

  // Field ADDRIE: Address match interrupt enable (slave only)
    const uint32_t I2C3_CR1_ADDRIE = 1U << 3 ;

  // Field NACKIE: Not acknowledge received interrupt enable
    const uint32_t I2C3_CR1_NACKIE = 1U << 4 ;

  // Field STOPIE: STOP detection Interrupt enable
    const uint32_t I2C3_CR1_STOPIE = 1U << 5 ;

  // Field TCIE: Transfer Complete interrupt enable
    const uint32_t I2C3_CR1_TCIE = 1U << 6 ;

  // Field ERRIE: Error interrupts enable
    const uint32_t I2C3_CR1_ERRIE = 1U << 7 ;

  // Field DNF: Digital noise filter
    inline uint32_t I2C3_CR1_DNF (const uint32_t inValue) {return (inValue & 0xfU) << 8 ; }

  // Field ANFOFF: Analog noise filter OFF
    const uint32_t I2C3_CR1_ANFOFF = 1U << 12 ;

  // Field TXDMAEN: DMA transmission requests enable
    const uint32_t I2C3_CR1_TXDMAEN = 1U << 14 ;

  // Field RXDMAEN: DMA reception requests enable
    const uint32_t I2C3_CR1_RXDMAEN = 1U << 15 ;

  // Field SBC: Slave byte control
    const uint32_t I2C3_CR1_SBC = 1U << 16 ;

  // Field NOSTRETCH: Clock stretching disable
    const uint32_t I2C3_CR1_NOSTRETCH = 1U << 17 ;

  // Field WUPEN: Wakeup from STOP enable
    const uint32_t I2C3_CR1_WUPEN = 1U << 18 ;

  // Field GCEN: General call enable
    const uint32_t I2C3_CR1_GCEN = 1U << 19 ;

  // Field SMBHEN: SMBus Host address enable
    const uint32_t I2C3_CR1_SMBHEN = 1U << 20 ;

  // Field SMBDEN: SMBus Device Default address enable
    const uint32_t I2C3_CR1_SMBDEN = 1U << 21 ;

  // Field ALERTEN: SMBUS alert enable
    const uint32_t I2C3_CR1_ALERTEN = 1U << 22 ;

  // Field PECEN: PEC enable
    const uint32_t I2C3_CR1_PECEN = 1U << 23 ;

//---  Register CR2: Control register 2
  #define I2C3_CR2 (* ((volatile uint32_t *) (0x40005c00 + 4)))

  // Field PECBYTE: Packet error checking byte
    const uint32_t I2C3_CR2_PECBYTE = 1U << 26 ;

  // Field AUTOEND: Automatic end mode (master mode)
    const uint32_t I2C3_CR2_AUTOEND = 1U << 25 ;

  // Field RELOAD: NBYTES reload mode
    const uint32_t I2C3_CR2_RELOAD = 1U << 24 ;

  // Field NBYTES: Number of bytes
    inline uint32_t I2C3_CR2_NBYTES (const uint32_t inValue) {return (inValue & 0xffU) << 16 ; }

  // Field NACK: NACK generation (slave mode)
    const uint32_t I2C3_CR2_NACK = 1U << 15 ;

  // Field STOP: Stop generation (master mode)
    const uint32_t I2C3_CR2_STOP = 1U << 14 ;

  // Field START: Start generation
    const uint32_t I2C3_CR2_START = 1U << 13 ;

  // Field HEAD10R: 10-bit address header only read direction (master receiver mode)
    const uint32_t I2C3_CR2_HEAD10R = 1U << 12 ;

  // Field ADD10: 10-bit addressing mode (master mode)
    const uint32_t I2C3_CR2_ADD10 = 1U << 11 ;

  // Field RD_WRN: Transfer direction (master mode)
    const uint32_t I2C3_CR2_RD_WRN = 1U << 10 ;

  // Field SADD: Slave address bit (master mode)
    inline uint32_t I2C3_CR2_SADD (const uint32_t inValue) {return (inValue & 0x3ffU) << 0 ; }

//---  Register OAR1: Own address register 1
  #define I2C3_OAR1 (* ((volatile uint32_t *) (0x40005c00 + 8)))

  // Field OA1: Interface address
    inline uint32_t I2C3_OAR1_OA1 (const uint32_t inValue) {return (inValue & 0x3ffU) << 0 ; }

  // Field OA1MODE: Own Address 1 10-bit mode
    const uint32_t I2C3_OAR1_OA1MODE = 1U << 10 ;

  // Field OA1EN: Own Address 1 enable
    const uint32_t I2C3_OAR1_OA1EN = 1U << 15 ;

//---  Register OAR2: Own address register 2
  #define I2C3_OAR2 (* ((volatile uint32_t *) (0x40005c00 + 12)))

  // Field OA2: Interface address
    inline uint32_t I2C3_OAR2_OA2 (const uint32_t inValue) {return (inValue & 0x7fU) << 1 ; }

  // Field OA2MSK: Own Address 2 masks
    inline uint32_t I2C3_OAR2_OA2MSK (const uint32_t inValue) {return (inValue & 0x7U) << 8 ; }

  // Field OA2EN: Own Address 2 enable
    const uint32_t I2C3_OAR2_OA2EN = 1U << 15 ;

//---  Register TIMINGR: Timing register
  #define I2C3_TIMINGR (* ((volatile uint32_t *) (0x40005c00 + 16)))

  // Field SCLL: SCL low period (master mode)
    inline uint32_t I2C3_TIMINGR_SCLL (const uint32_t inValue) {return (inValue & 0xffU) << 0 ; }

  // Field SCLH: SCL high period (master mode)
    inline uint32_t I2C3_TIMINGR_SCLH (const uint32_t inValue) {return (inValue & 0xffU) << 8 ; }

  // Field SDADEL: Data hold time
    inline uint32_t I2C3_TIMINGR_SDADEL (const uint32_t inValue) {return (inValue & 0xfU) << 16 ; }

  // Field SCLDEL: Data setup time
    inline uint32_t I2C3_TIMINGR_SCLDEL (const uint32_t inValue) {return (inValue & 0xfU) << 20 ; }

  // Field PRESC: Timing prescaler
    inline uint32_t I2C3_TIMINGR_PRESC (const uint32_t inValue) {return (inValue & 0xfU) << 28 ; }

//---  Register TIMEOUTR: Status register 1
  #define I2C3_TIMEOUTR (* ((volatile uint32_t *) (0x40005c00 + 20)))

  // Field TIMEOUTA: Bus timeout A
    inline uint32_t I2C3_TIMEOUTR_TIMEOUTA (const uint32_t inValue) {return (inValue & 0xfffU) << 0 ; }

  // Field TIDLE: Idle clock timeout detection
    const uint32_t I2C3_TIMEOUTR_TIDLE = 1U << 12 ;

  // Field TIMOUTEN: Clock timeout enable
    const uint32_t I2C3_TIMEOUTR_TIMOUTEN = 1U << 15 ;

  // Field TIMEOUTB: Bus timeout B
    inline uint32_t I2C3_TIMEOUTR_TIMEOUTB (const uint32_t inValue) {return (inValue & 0xfffU) << 16 ; }

  // Field TEXTEN: Extended clock timeout enable
    const uint32_t I2C3_TIMEOUTR_TEXTEN = 1U << 31 ;

//---  Register ISR: Interrupt and Status register
  #define I2C3_ISR (* ((volatile uint32_t *) (0x40005c00 + 24)))

  // Field ADDCODE: Address match code (Slave mode)
    inline uint32_t I2C3_ISR_ADDCODE (const uint32_t inValue) {return (inValue & 0x7fU) << 17 ; }

  // Field DIR: Transfer direction (Slave mode)
    const uint32_t I2C3_ISR_DIR = 1U << 16 ;

  // Field BUSY: Bus busy
    const uint32_t I2C3_ISR_BUSY = 1U << 15 ;

  // Field ALERT: SMBus alert
    const uint32_t I2C3_ISR_ALERT = 1U << 13 ;

  // Field TIMEOUT: Timeout or t_low detection flag
    const uint32_t I2C3_ISR_TIMEOUT = 1U << 12 ;

  // Field PECERR: PEC Error in reception
    const uint32_t I2C3_ISR_PECERR = 1U << 11 ;

  // Field OVR: Overrun/Underrun (slave mode)
    const uint32_t I2C3_ISR_OVR = 1U << 10 ;

  // Field ARLO: Arbitration lost
    const uint32_t I2C3_ISR_ARLO = 1U << 9 ;

  // Field BERR: Bus error
    const uint32_t I2C3_ISR_BERR = 1U << 8 ;

  // Field TCR: Transfer Complete Reload
    const uint32_t I2C3_ISR_TCR = 1U << 7 ;

  // Field TC: Transfer Complete (master mode)
    const uint32_t I2C3_ISR_TC = 1U << 6 ;

  // Field STOPF: Stop detection flag
    const uint32_t I2C3_ISR_STOPF = 1U << 5 ;

  // Field NACKF: Not acknowledge received flag
    const uint32_t I2C3_ISR_NACKF = 1U << 4 ;

  // Field ADDR: Address matched (slave mode)
    const uint32_t I2C3_ISR_ADDR = 1U << 3 ;

  // Field RXNE: Receive data register not empty (receivers)
    const uint32_t I2C3_ISR_RXNE = 1U << 2 ;

  // Field TXIS: Transmit interrupt status (transmitters)
    const uint32_t I2C3_ISR_TXIS = 1U << 1 ;

  // Field TXE: Transmit data register empty (transmitters)
    const uint32_t I2C3_ISR_TXE = 1U << 0 ;

//---  Register ICR: Interrupt clear register
  #define I2C3_ICR (* ((volatile uint32_t *) (0x40005c00 + 28)))

  // Field ALERTCF: Alert flag clear
    const uint32_t I2C3_ICR_ALERTCF = 1U << 13 ;

  // Field TIMOUTCF: Timeout detection flag clear
    const uint32_t I2C3_ICR_TIMOUTCF = 1U << 12 ;

  // Field PECCF: PEC Error flag clear
    const uint32_t I2C3_ICR_PECCF = 1U << 11 ;

  // Field OVRCF: Overrun/Underrun flag clear
    const uint32_t I2C3_ICR_OVRCF = 1U << 10 ;

  // Field ARLOCF: Arbitration lost flag clear
    const uint32_t I2C3_ICR_ARLOCF = 1U << 9 ;

  // Field BERRCF: Bus error flag clear
    const uint32_t I2C3_ICR_BERRCF = 1U << 8 ;

  // Field STOPCF: Stop detection flag clear
    const uint32_t I2C3_ICR_STOPCF = 1U << 5 ;

  // Field NACKCF: Not Acknowledge flag clear
    const uint32_t I2C3_ICR_NACKCF = 1U << 4 ;

  // Field ADDRCF: Address Matched flag clear
    const uint32_t I2C3_ICR_ADDRCF = 1U << 3 ;

//---  Register PECR: PEC register
  #define I2C3_PECR (* ((const volatile uint32_t *) (0x40005c00 + 32)))

  // Field PEC: Packet error checking register
    inline uint32_t I2C3_PECR_PEC (const uint32_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register RXDR: Receive data register
  #define I2C3_RXDR (* ((const volatile uint32_t *) (0x40005c00 + 36)))

  // Field RXDATA: 8-bit receive data
    inline uint32_t I2C3_RXDR_RXDATA (const uint32_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register TXDR: Transmit data register
  #define I2C3_TXDR (* ((volatile uint32_t *) (0x40005c00 + 40)))

  // Field TXDATA: 8-bit transmit data
    inline uint32_t I2C3_TXDR_TXDATA (const uint32_t inValue) {return (inValue & 0xffU) << 0 ; }

//------------------------------------------------------------------------------
// Peripheral I2C4
//------------------------------------------------------------------------------

//---  Register CR1: Control register 1
  #define I2C4_CR1 (* ((volatile uint32_t *) (0x40008400 + 0)))

  // Field PE: Peripheral enable
    const uint32_t I2C4_CR1_PE = 1U << 0 ;

  // Field TXIE: TX Interrupt enable
    const uint32_t I2C4_CR1_TXIE = 1U << 1 ;

  // Field RXIE: RX Interrupt enable
    const uint32_t I2C4_CR1_RXIE = 1U << 2 ;

  // Field ADDRIE: Address match interrupt enable (slave only)
    const uint32_t I2C4_CR1_ADDRIE = 1U << 3 ;

  // Field NACKIE: Not acknowledge received interrupt enable
    const uint32_t I2C4_CR1_NACKIE = 1U << 4 ;

  // Field STOPIE: STOP detection Interrupt enable
    const uint32_t I2C4_CR1_STOPIE = 1U << 5 ;

  // Field TCIE: Transfer Complete interrupt enable
    const uint32_t I2C4_CR1_TCIE = 1U << 6 ;

  // Field ERRIE: Error interrupts enable
    const uint32_t I2C4_CR1_ERRIE = 1U << 7 ;

  // Field DNF: Digital noise filter
    inline uint32_t I2C4_CR1_DNF (const uint32_t inValue) {return (inValue & 0xfU) << 8 ; }

  // Field ANFOFF: Analog noise filter OFF
    const uint32_t I2C4_CR1_ANFOFF = 1U << 12 ;

  // Field TXDMAEN: DMA transmission requests enable
    const uint32_t I2C4_CR1_TXDMAEN = 1U << 14 ;

  // Field RXDMAEN: DMA reception requests enable
    const uint32_t I2C4_CR1_RXDMAEN = 1U << 15 ;

  // Field SBC: Slave byte control
    const uint32_t I2C4_CR1_SBC = 1U << 16 ;

  // Field NOSTRETCH: Clock stretching disable
    const uint32_t I2C4_CR1_NOSTRETCH = 1U << 17 ;

  // Field WUPEN: Wakeup from STOP enable
    const uint32_t I2C4_CR1_WUPEN = 1U << 18 ;

  // Field GCEN: General call enable
    const uint32_t I2C4_CR1_GCEN = 1U << 19 ;

  // Field SMBHEN: SMBus Host address enable
    const uint32_t I2C4_CR1_SMBHEN = 1U << 20 ;

  // Field SMBDEN: SMBus Device Default address enable
    const uint32_t I2C4_CR1_SMBDEN = 1U << 21 ;

  // Field ALERTEN: SMBUS alert enable
    const uint32_t I2C4_CR1_ALERTEN = 1U << 22 ;

  // Field PECEN: PEC enable
    const uint32_t I2C4_CR1_PECEN = 1U << 23 ;

//---  Register CR2: Control register 2
  #define I2C4_CR2 (* ((volatile uint32_t *) (0x40008400 + 4)))

  // Field PECBYTE: Packet error checking byte
    const uint32_t I2C4_CR2_PECBYTE = 1U << 26 ;

  // Field AUTOEND: Automatic end mode (master mode)
    const uint32_t I2C4_CR2_AUTOEND = 1U << 25 ;

  // Field RELOAD: NBYTES reload mode
    const uint32_t I2C4_CR2_RELOAD = 1U << 24 ;

  // Field NBYTES: Number of bytes
    inline uint32_t I2C4_CR2_NBYTES (const uint32_t inValue) {return (inValue & 0xffU) << 16 ; }

  // Field NACK: NACK generation (slave mode)
    const uint32_t I2C4_CR2_NACK = 1U << 15 ;

  // Field STOP: Stop generation (master mode)
    const uint32_t I2C4_CR2_STOP = 1U << 14 ;

  // Field START: Start generation
    const uint32_t I2C4_CR2_START = 1U << 13 ;

  // Field HEAD10R: 10-bit address header only read direction (master receiver mode)
    const uint32_t I2C4_CR2_HEAD10R = 1U << 12 ;

  // Field ADD10: 10-bit addressing mode (master mode)
    const uint32_t I2C4_CR2_ADD10 = 1U << 11 ;

  // Field RD_WRN: Transfer direction (master mode)
    const uint32_t I2C4_CR2_RD_WRN = 1U << 10 ;

  // Field SADD: Slave address bit (master mode)
    inline uint32_t I2C4_CR2_SADD (const uint32_t inValue) {return (inValue & 0x3ffU) << 0 ; }

//---  Register OAR1: Own address register 1
  #define I2C4_OAR1 (* ((volatile uint32_t *) (0x40008400 + 8)))

  // Field OA1: Interface address
    inline uint32_t I2C4_OAR1_OA1 (const uint32_t inValue) {return (inValue & 0x3ffU) << 0 ; }

  // Field OA1MODE: Own Address 1 10-bit mode
    const uint32_t I2C4_OAR1_OA1MODE = 1U << 10 ;

  // Field OA1EN: Own Address 1 enable
    const uint32_t I2C4_OAR1_OA1EN = 1U << 15 ;

//---  Register OAR2: Own address register 2
  #define I2C4_OAR2 (* ((volatile uint32_t *) (0x40008400 + 12)))

  // Field OA2: Interface address
    inline uint32_t I2C4_OAR2_OA2 (const uint32_t inValue) {return (inValue & 0x7fU) << 1 ; }

  // Field OA2MSK: Own Address 2 masks
    inline uint32_t I2C4_OAR2_OA2MSK (const uint32_t inValue) {return (inValue & 0x7U) << 8 ; }

  // Field OA2EN: Own Address 2 enable
    const uint32_t I2C4_OAR2_OA2EN = 1U << 15 ;

//---  Register TIMINGR: Timing register
  #define I2C4_TIMINGR (* ((volatile uint32_t *) (0x40008400 + 16)))

  // Field SCLL: SCL low period (master mode)
    inline uint32_t I2C4_TIMINGR_SCLL (const uint32_t inValue) {return (inValue & 0xffU) << 0 ; }

  // Field SCLH: SCL high period (master mode)
    inline uint32_t I2C4_TIMINGR_SCLH (const uint32_t inValue) {return (inValue & 0xffU) << 8 ; }

  // Field SDADEL: Data hold time
    inline uint32_t I2C4_TIMINGR_SDADEL (const uint32_t inValue) {return (inValue & 0xfU) << 16 ; }

  // Field SCLDEL: Data setup time
    inline uint32_t I2C4_TIMINGR_SCLDEL (const uint32_t inValue) {return (inValue & 0xfU) << 20 ; }

  // Field PRESC: Timing prescaler
    inline uint32_t I2C4_TIMINGR_PRESC (const uint32_t inValue) {return (inValue & 0xfU) << 28 ; }

//---  Register TIMEOUTR: Status register 1
  #define I2C4_TIMEOUTR (* ((volatile uint32_t *) (0x40008400 + 20)))

  // Field TIMEOUTA: Bus timeout A
    inline uint32_t I2C4_TIMEOUTR_TIMEOUTA (const uint32_t inValue) {return (inValue & 0xfffU) << 0 ; }

  // Field TIDLE: Idle clock timeout detection
    const uint32_t I2C4_TIMEOUTR_TIDLE = 1U << 12 ;

  // Field TIMOUTEN: Clock timeout enable
    const uint32_t I2C4_TIMEOUTR_TIMOUTEN = 1U << 15 ;

  // Field TIMEOUTB: Bus timeout B
    inline uint32_t I2C4_TIMEOUTR_TIMEOUTB (const uint32_t inValue) {return (inValue & 0xfffU) << 16 ; }

  // Field TEXTEN: Extended clock timeout enable
    const uint32_t I2C4_TIMEOUTR_TEXTEN = 1U << 31 ;

//---  Register ISR: Interrupt and Status register
  #define I2C4_ISR (* ((volatile uint32_t *) (0x40008400 + 24)))

  // Field ADDCODE: Address match code (Slave mode)
    inline uint32_t I2C4_ISR_ADDCODE (const uint32_t inValue) {return (inValue & 0x7fU) << 17 ; }

  // Field DIR: Transfer direction (Slave mode)
    const uint32_t I2C4_ISR_DIR = 1U << 16 ;

  // Field BUSY: Bus busy
    const uint32_t I2C4_ISR_BUSY = 1U << 15 ;

  // Field ALERT: SMBus alert
    const uint32_t I2C4_ISR_ALERT = 1U << 13 ;

  // Field TIMEOUT: Timeout or t_low detection flag
    const uint32_t I2C4_ISR_TIMEOUT = 1U << 12 ;

  // Field PECERR: PEC Error in reception
    const uint32_t I2C4_ISR_PECERR = 1U << 11 ;

  // Field OVR: Overrun/Underrun (slave mode)
    const uint32_t I2C4_ISR_OVR = 1U << 10 ;

  // Field ARLO: Arbitration lost
    const uint32_t I2C4_ISR_ARLO = 1U << 9 ;

  // Field BERR: Bus error
    const uint32_t I2C4_ISR_BERR = 1U << 8 ;

  // Field TCR: Transfer Complete Reload
    const uint32_t I2C4_ISR_TCR = 1U << 7 ;

  // Field TC: Transfer Complete (master mode)
    const uint32_t I2C4_ISR_TC = 1U << 6 ;

  // Field STOPF: Stop detection flag
    const uint32_t I2C4_ISR_STOPF = 1U << 5 ;

  // Field NACKF: Not acknowledge received flag
    const uint32_t I2C4_ISR_NACKF = 1U << 4 ;

  // Field ADDR: Address matched (slave mode)
    const uint32_t I2C4_ISR_ADDR = 1U << 3 ;

  // Field RXNE: Receive data register not empty (receivers)
    const uint32_t I2C4_ISR_RXNE = 1U << 2 ;

  // Field TXIS: Transmit interrupt status (transmitters)
    const uint32_t I2C4_ISR_TXIS = 1U << 1 ;

  // Field TXE: Transmit data register empty (transmitters)
    const uint32_t I2C4_ISR_TXE = 1U << 0 ;

//---  Register ICR: Interrupt clear register
  #define I2C4_ICR (* ((volatile uint32_t *) (0x40008400 + 28)))

  // Field ALERTCF: Alert flag clear
    const uint32_t I2C4_ICR_ALERTCF = 1U << 13 ;

  // Field TIMOUTCF: Timeout detection flag clear
    const uint32_t I2C4_ICR_TIMOUTCF = 1U << 12 ;

  // Field PECCF: PEC Error flag clear
    const uint32_t I2C4_ICR_PECCF = 1U << 11 ;

  // Field OVRCF: Overrun/Underrun flag clear
    const uint32_t I2C4_ICR_OVRCF = 1U << 10 ;

  // Field ARLOCF: Arbitration lost flag clear
    const uint32_t I2C4_ICR_ARLOCF = 1U << 9 ;

  // Field BERRCF: Bus error flag clear
    const uint32_t I2C4_ICR_BERRCF = 1U << 8 ;

  // Field STOPCF: Stop detection flag clear
    const uint32_t I2C4_ICR_STOPCF = 1U << 5 ;

  // Field NACKCF: Not Acknowledge flag clear
    const uint32_t I2C4_ICR_NACKCF = 1U << 4 ;

  // Field ADDRCF: Address Matched flag clear
    const uint32_t I2C4_ICR_ADDRCF = 1U << 3 ;

//---  Register PECR: PEC register
  #define I2C4_PECR (* ((const volatile uint32_t *) (0x40008400 + 32)))

  // Field PEC: Packet error checking register
    inline uint32_t I2C4_PECR_PEC (const uint32_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register RXDR: Receive data register
  #define I2C4_RXDR (* ((const volatile uint32_t *) (0x40008400 + 36)))

  // Field RXDATA: 8-bit receive data
    inline uint32_t I2C4_RXDR_RXDATA (const uint32_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register TXDR: Transmit data register
  #define I2C4_TXDR (* ((volatile uint32_t *) (0x40008400 + 40)))

  // Field TXDATA: 8-bit transmit data
    inline uint32_t I2C4_TXDR_TXDATA (const uint32_t inValue) {return (inValue & 0xffU) << 0 ; }

//------------------------------------------------------------------------------
// Peripheral IWDG: Independent watchdog
//------------------------------------------------------------------------------

//---  Register KR: Key register
  #define IWDG_KR (* ((volatile uint32_t *) (0x40003000 + 0)))

  // Field KEY: Key value (write only, read 0x0000)
    inline uint32_t IWDG_KR_KEY (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register PR: Prescaler register
  #define IWDG_PR (* ((volatile uint32_t *) (0x40003000 + 4)))

  // Field PR: Prescaler divider
    inline uint32_t IWDG_PR_PR (const uint32_t inValue) {return (inValue & 0x7U) << 0 ; }

//---  Register RLR: Reload register
  #define IWDG_RLR (* ((volatile uint32_t *) (0x40003000 + 8)))

  // Field RL: Watchdog counter reload value
    inline uint32_t IWDG_RLR_RL (const uint32_t inValue) {return (inValue & 0xfffU) << 0 ; }

//---  Register SR: Status register
  #define IWDG_SR (* ((const volatile uint32_t *) (0x40003000 + 12)))

  // Field WVU: Watchdog counter window value update
    const uint32_t IWDG_SR_WVU = 1U << 2 ;

  // Field RVU: Watchdog counter reload value update
    const uint32_t IWDG_SR_RVU = 1U << 1 ;

  // Field PVU: Watchdog prescaler value update
    const uint32_t IWDG_SR_PVU = 1U << 0 ;

//---  Register WINR: Window register
  #define IWDG_WINR (* ((volatile uint32_t *) (0x40003000 + 16)))

  // Field WIN: Watchdog counter window value
    inline uint32_t IWDG_WINR_WIN (const uint32_t inValue) {return (inValue & 0xfffU) << 0 ; }

//------------------------------------------------------------------------------
// Peripheral LCD: Liquid crystal display controller
//------------------------------------------------------------------------------

//---  Register CR: control register
  #define LCD_CR (* ((volatile uint32_t *) (0x40002400 + 0)))

  // Field BIAS: Bias selector
    inline uint32_t LCD_CR_BIAS (const uint32_t inValue) {return (inValue & 0x3U) << 5 ; }

  // Field DUTY: Duty selection
    inline uint32_t LCD_CR_DUTY (const uint32_t inValue) {return (inValue & 0x7U) << 2 ; }

  // Field VSEL: Voltage source selection
    const uint32_t LCD_CR_VSEL = 1U << 1 ;

  // Field LCDEN: LCD controller enable
    const uint32_t LCD_CR_LCDEN = 1U << 0 ;

  // Field MUX_SEG: Mux segment enable
    const uint32_t LCD_CR_MUX_SEG = 1U << 7 ;

  // Field BUFEN: Voltage output buffer enable
    const uint32_t LCD_CR_BUFEN = 1U << 8 ;

//---  Register FCR: frame control register
  #define LCD_FCR (* ((volatile uint32_t *) (0x40002400 + 4)))

  // Field PS: PS 16-bit prescaler
    inline uint32_t LCD_FCR_PS (const uint32_t inValue) {return (inValue & 0xfU) << 22 ; }

  // Field DIV: DIV clock divider
    inline uint32_t LCD_FCR_DIV (const uint32_t inValue) {return (inValue & 0xfU) << 18 ; }

  // Field BLINK: Blink mode selection
    inline uint32_t LCD_FCR_BLINK (const uint32_t inValue) {return (inValue & 0x3U) << 16 ; }

  // Field BLINKF: Blink frequency selection
    inline uint32_t LCD_FCR_BLINKF (const uint32_t inValue) {return (inValue & 0x7U) << 13 ; }

  // Field CC: Contrast control
    inline uint32_t LCD_FCR_CC (const uint32_t inValue) {return (inValue & 0x7U) << 10 ; }

  // Field DEAD: Dead time duration
    inline uint32_t LCD_FCR_DEAD (const uint32_t inValue) {return (inValue & 0x7U) << 7 ; }

  // Field PON: Pulse ON duration
    inline uint32_t LCD_FCR_PON (const uint32_t inValue) {return (inValue & 0x7U) << 4 ; }

  // Field UDDIE: Update display done interrupt enable
    const uint32_t LCD_FCR_UDDIE = 1U << 3 ;

  // Field SOFIE: Start of frame interrupt enable
    const uint32_t LCD_FCR_SOFIE = 1U << 1 ;

  // Field HD: High drive enable
    const uint32_t LCD_FCR_HD = 1U << 0 ;

//---  Register SR: status register
  #define LCD_SR (* ((volatile uint32_t *) (0x40002400 + 8)))

  // Field FCRSF: LCD Frame Control Register Synchronization flag
    const uint32_t LCD_SR_FCRSF = 1U << 5 ;

  // Field RDY: Ready flag
    const uint32_t LCD_SR_RDY = 1U << 4 ;

  // Field UDD: Update Display Done
    const uint32_t LCD_SR_UDD = 1U << 3 ;

  // Field UDR: Update display request
    const uint32_t LCD_SR_UDR = 1U << 2 ;

  // Field SOF: Start of frame flag
    const uint32_t LCD_SR_SOF = 1U << 1 ;

  // Field ENS: ENS
    const uint32_t LCD_SR_ENS = 1U << 0 ;

//---  Register CLR: clear register
  #define LCD_CLR (* ((volatile uint32_t *) (0x40002400 + 12)))

  // Field UDDC: Update display done clear
    const uint32_t LCD_CLR_UDDC = 1U << 3 ;

  // Field SOFC: Start of frame flag clear
    const uint32_t LCD_CLR_SOFC = 1U << 1 ;

//---  Register RAM_COM0: display memory
  #define LCD_RAM_COM0 (* ((volatile uint32_t *) (0x40002400 + 20)))

  // Field S30: S30
    const uint32_t LCD_RAM_COM0_S30 = 1U << 30 ;

  // Field S29: S29
    const uint32_t LCD_RAM_COM0_S29 = 1U << 29 ;

  // Field S28: S28
    const uint32_t LCD_RAM_COM0_S28 = 1U << 28 ;

  // Field S27: S27
    const uint32_t LCD_RAM_COM0_S27 = 1U << 27 ;

  // Field S26: S26
    const uint32_t LCD_RAM_COM0_S26 = 1U << 26 ;

  // Field S25: S25
    const uint32_t LCD_RAM_COM0_S25 = 1U << 25 ;

  // Field S24: S24
    const uint32_t LCD_RAM_COM0_S24 = 1U << 24 ;

  // Field S23: S23
    const uint32_t LCD_RAM_COM0_S23 = 1U << 23 ;

  // Field S22: S22
    const uint32_t LCD_RAM_COM0_S22 = 1U << 22 ;

  // Field S21: S21
    const uint32_t LCD_RAM_COM0_S21 = 1U << 21 ;

  // Field S20: S20
    const uint32_t LCD_RAM_COM0_S20 = 1U << 20 ;

  // Field S19: S19
    const uint32_t LCD_RAM_COM0_S19 = 1U << 19 ;

  // Field S18: S18
    const uint32_t LCD_RAM_COM0_S18 = 1U << 18 ;

  // Field S17: S17
    const uint32_t LCD_RAM_COM0_S17 = 1U << 17 ;

  // Field S16: S16
    const uint32_t LCD_RAM_COM0_S16 = 1U << 16 ;

  // Field S15: S15
    const uint32_t LCD_RAM_COM0_S15 = 1U << 15 ;

  // Field S14: S14
    const uint32_t LCD_RAM_COM0_S14 = 1U << 14 ;

  // Field S13: S13
    const uint32_t LCD_RAM_COM0_S13 = 1U << 13 ;

  // Field S12: S12
    const uint32_t LCD_RAM_COM0_S12 = 1U << 12 ;

  // Field S11: S11
    const uint32_t LCD_RAM_COM0_S11 = 1U << 11 ;

  // Field S10: S10
    const uint32_t LCD_RAM_COM0_S10 = 1U << 10 ;

  // Field S09: S09
    const uint32_t LCD_RAM_COM0_S09 = 1U << 9 ;

  // Field S08: S08
    const uint32_t LCD_RAM_COM0_S08 = 1U << 8 ;

  // Field S07: S07
    const uint32_t LCD_RAM_COM0_S07 = 1U << 7 ;

  // Field S06: S06
    const uint32_t LCD_RAM_COM0_S06 = 1U << 6 ;

  // Field S05: S05
    const uint32_t LCD_RAM_COM0_S05 = 1U << 5 ;

  // Field S04: S04
    const uint32_t LCD_RAM_COM0_S04 = 1U << 4 ;

  // Field S03: S03
    const uint32_t LCD_RAM_COM0_S03 = 1U << 3 ;

  // Field S02: S02
    const uint32_t LCD_RAM_COM0_S02 = 1U << 2 ;

  // Field S01: S01
    const uint32_t LCD_RAM_COM0_S01 = 1U << 1 ;

  // Field S00: S00
    const uint32_t LCD_RAM_COM0_S00 = 1U << 0 ;

//---  Register RAM_COM1: display memory
  #define LCD_RAM_COM1 (* ((volatile uint32_t *) (0x40002400 + 28)))

  // Field S31: S31
    const uint32_t LCD_RAM_COM1_S31 = 1U << 31 ;

  // Field S30: S30
    const uint32_t LCD_RAM_COM1_S30 = 1U << 30 ;

  // Field S29: S29
    const uint32_t LCD_RAM_COM1_S29 = 1U << 29 ;

  // Field S28: S28
    const uint32_t LCD_RAM_COM1_S28 = 1U << 28 ;

  // Field S27: S27
    const uint32_t LCD_RAM_COM1_S27 = 1U << 27 ;

  // Field S26: S26
    const uint32_t LCD_RAM_COM1_S26 = 1U << 26 ;

  // Field S25: S25
    const uint32_t LCD_RAM_COM1_S25 = 1U << 25 ;

  // Field S24: S24
    const uint32_t LCD_RAM_COM1_S24 = 1U << 24 ;

  // Field S23: S23
    const uint32_t LCD_RAM_COM1_S23 = 1U << 23 ;

  // Field S22: S22
    const uint32_t LCD_RAM_COM1_S22 = 1U << 22 ;

  // Field S21: S21
    const uint32_t LCD_RAM_COM1_S21 = 1U << 21 ;

  // Field S20: S20
    const uint32_t LCD_RAM_COM1_S20 = 1U << 20 ;

  // Field S19: S19
    const uint32_t LCD_RAM_COM1_S19 = 1U << 19 ;

  // Field S18: S18
    const uint32_t LCD_RAM_COM1_S18 = 1U << 18 ;

  // Field S17: S17
    const uint32_t LCD_RAM_COM1_S17 = 1U << 17 ;

  // Field S16: S16
    const uint32_t LCD_RAM_COM1_S16 = 1U << 16 ;

  // Field S15: S15
    const uint32_t LCD_RAM_COM1_S15 = 1U << 15 ;

  // Field S14: S14
    const uint32_t LCD_RAM_COM1_S14 = 1U << 14 ;

  // Field S13: S13
    const uint32_t LCD_RAM_COM1_S13 = 1U << 13 ;

  // Field S12: S12
    const uint32_t LCD_RAM_COM1_S12 = 1U << 12 ;

  // Field S11: S11
    const uint32_t LCD_RAM_COM1_S11 = 1U << 11 ;

  // Field S10: S10
    const uint32_t LCD_RAM_COM1_S10 = 1U << 10 ;

  // Field S09: S09
    const uint32_t LCD_RAM_COM1_S09 = 1U << 9 ;

  // Field S08: S08
    const uint32_t LCD_RAM_COM1_S08 = 1U << 8 ;

  // Field S07: S07
    const uint32_t LCD_RAM_COM1_S07 = 1U << 7 ;

  // Field S06: S06
    const uint32_t LCD_RAM_COM1_S06 = 1U << 6 ;

  // Field S05: S05
    const uint32_t LCD_RAM_COM1_S05 = 1U << 5 ;

  // Field S04: S04
    const uint32_t LCD_RAM_COM1_S04 = 1U << 4 ;

  // Field S03: S03
    const uint32_t LCD_RAM_COM1_S03 = 1U << 3 ;

  // Field S02: S02
    const uint32_t LCD_RAM_COM1_S02 = 1U << 2 ;

  // Field S01: S01
    const uint32_t LCD_RAM_COM1_S01 = 1U << 1 ;

  // Field S00: S00
    const uint32_t LCD_RAM_COM1_S00 = 1U << 0 ;

//---  Register RAM_COM2: display memory
  #define LCD_RAM_COM2 (* ((volatile uint32_t *) (0x40002400 + 36)))

  // Field S31: S31
    const uint32_t LCD_RAM_COM2_S31 = 1U << 31 ;

  // Field S30: S30
    const uint32_t LCD_RAM_COM2_S30 = 1U << 30 ;

  // Field S29: S29
    const uint32_t LCD_RAM_COM2_S29 = 1U << 29 ;

  // Field S28: S28
    const uint32_t LCD_RAM_COM2_S28 = 1U << 28 ;

  // Field S27: S27
    const uint32_t LCD_RAM_COM2_S27 = 1U << 27 ;

  // Field S26: S26
    const uint32_t LCD_RAM_COM2_S26 = 1U << 26 ;

  // Field S25: S25
    const uint32_t LCD_RAM_COM2_S25 = 1U << 25 ;

  // Field S24: S24
    const uint32_t LCD_RAM_COM2_S24 = 1U << 24 ;

  // Field S23: S23
    const uint32_t LCD_RAM_COM2_S23 = 1U << 23 ;

  // Field S22: S22
    const uint32_t LCD_RAM_COM2_S22 = 1U << 22 ;

  // Field S21: S21
    const uint32_t LCD_RAM_COM2_S21 = 1U << 21 ;

  // Field S20: S20
    const uint32_t LCD_RAM_COM2_S20 = 1U << 20 ;

  // Field S19: S19
    const uint32_t LCD_RAM_COM2_S19 = 1U << 19 ;

  // Field S18: S18
    const uint32_t LCD_RAM_COM2_S18 = 1U << 18 ;

  // Field S17: S17
    const uint32_t LCD_RAM_COM2_S17 = 1U << 17 ;

  // Field S16: S16
    const uint32_t LCD_RAM_COM2_S16 = 1U << 16 ;

  // Field S15: S15
    const uint32_t LCD_RAM_COM2_S15 = 1U << 15 ;

  // Field S14: S14
    const uint32_t LCD_RAM_COM2_S14 = 1U << 14 ;

  // Field S13: S13
    const uint32_t LCD_RAM_COM2_S13 = 1U << 13 ;

  // Field S12: S12
    const uint32_t LCD_RAM_COM2_S12 = 1U << 12 ;

  // Field S11: S11
    const uint32_t LCD_RAM_COM2_S11 = 1U << 11 ;

  // Field S10: S10
    const uint32_t LCD_RAM_COM2_S10 = 1U << 10 ;

  // Field S09: S09
    const uint32_t LCD_RAM_COM2_S09 = 1U << 9 ;

  // Field S08: S08
    const uint32_t LCD_RAM_COM2_S08 = 1U << 8 ;

  // Field S07: S07
    const uint32_t LCD_RAM_COM2_S07 = 1U << 7 ;

  // Field S06: S06
    const uint32_t LCD_RAM_COM2_S06 = 1U << 6 ;

  // Field S05: S05
    const uint32_t LCD_RAM_COM2_S05 = 1U << 5 ;

  // Field S04: S04
    const uint32_t LCD_RAM_COM2_S04 = 1U << 4 ;

  // Field S03: S03
    const uint32_t LCD_RAM_COM2_S03 = 1U << 3 ;

  // Field S02: S02
    const uint32_t LCD_RAM_COM2_S02 = 1U << 2 ;

  // Field S01: S01
    const uint32_t LCD_RAM_COM2_S01 = 1U << 1 ;

  // Field S00: S00
    const uint32_t LCD_RAM_COM2_S00 = 1U << 0 ;

//---  Register RAM_COM3: display memory
  #define LCD_RAM_COM3 (* ((volatile uint32_t *) (0x40002400 + 44)))

  // Field S31: S31
    const uint32_t LCD_RAM_COM3_S31 = 1U << 31 ;

  // Field S30: S30
    const uint32_t LCD_RAM_COM3_S30 = 1U << 30 ;

  // Field S29: S29
    const uint32_t LCD_RAM_COM3_S29 = 1U << 29 ;

  // Field S28: S28
    const uint32_t LCD_RAM_COM3_S28 = 1U << 28 ;

  // Field S27: S27
    const uint32_t LCD_RAM_COM3_S27 = 1U << 27 ;

  // Field S26: S26
    const uint32_t LCD_RAM_COM3_S26 = 1U << 26 ;

  // Field S25: S25
    const uint32_t LCD_RAM_COM3_S25 = 1U << 25 ;

  // Field S24: S24
    const uint32_t LCD_RAM_COM3_S24 = 1U << 24 ;

  // Field S23: S23
    const uint32_t LCD_RAM_COM3_S23 = 1U << 23 ;

  // Field S22: S22
    const uint32_t LCD_RAM_COM3_S22 = 1U << 22 ;

  // Field S21: S21
    const uint32_t LCD_RAM_COM3_S21 = 1U << 21 ;

  // Field S20: S20
    const uint32_t LCD_RAM_COM3_S20 = 1U << 20 ;

  // Field S19: S19
    const uint32_t LCD_RAM_COM3_S19 = 1U << 19 ;

  // Field S18: S18
    const uint32_t LCD_RAM_COM3_S18 = 1U << 18 ;

  // Field S17: S17
    const uint32_t LCD_RAM_COM3_S17 = 1U << 17 ;

  // Field S16: S16
    const uint32_t LCD_RAM_COM3_S16 = 1U << 16 ;

  // Field S15: S15
    const uint32_t LCD_RAM_COM3_S15 = 1U << 15 ;

  // Field S14: S14
    const uint32_t LCD_RAM_COM3_S14 = 1U << 14 ;

  // Field S13: S13
    const uint32_t LCD_RAM_COM3_S13 = 1U << 13 ;

  // Field S12: S12
    const uint32_t LCD_RAM_COM3_S12 = 1U << 12 ;

  // Field S11: S11
    const uint32_t LCD_RAM_COM3_S11 = 1U << 11 ;

  // Field S10: S10
    const uint32_t LCD_RAM_COM3_S10 = 1U << 10 ;

  // Field S09: S09
    const uint32_t LCD_RAM_COM3_S09 = 1U << 9 ;

  // Field S08: S08
    const uint32_t LCD_RAM_COM3_S08 = 1U << 8 ;

  // Field S07: S07
    const uint32_t LCD_RAM_COM3_S07 = 1U << 7 ;

  // Field S06: S06
    const uint32_t LCD_RAM_COM3_S06 = 1U << 6 ;

  // Field S05: S05
    const uint32_t LCD_RAM_COM3_S05 = 1U << 5 ;

  // Field S04: S04
    const uint32_t LCD_RAM_COM3_S04 = 1U << 4 ;

  // Field S03: S03
    const uint32_t LCD_RAM_COM3_S03 = 1U << 3 ;

  // Field S02: S02
    const uint32_t LCD_RAM_COM3_S02 = 1U << 2 ;

  // Field S01: S01
    const uint32_t LCD_RAM_COM3_S01 = 1U << 1 ;

  // Field S00: S00
    const uint32_t LCD_RAM_COM3_S00 = 1U << 0 ;

//---  Register RAM_COM4: display memory
  #define LCD_RAM_COM4 (* ((volatile uint32_t *) (0x40002400 + 52)))

  // Field S31: S31
    const uint32_t LCD_RAM_COM4_S31 = 1U << 31 ;

  // Field S30: S30
    const uint32_t LCD_RAM_COM4_S30 = 1U << 30 ;

  // Field S29: S29
    const uint32_t LCD_RAM_COM4_S29 = 1U << 29 ;

  // Field S28: S28
    const uint32_t LCD_RAM_COM4_S28 = 1U << 28 ;

  // Field S27: S27
    const uint32_t LCD_RAM_COM4_S27 = 1U << 27 ;

  // Field S26: S26
    const uint32_t LCD_RAM_COM4_S26 = 1U << 26 ;

  // Field S25: S25
    const uint32_t LCD_RAM_COM4_S25 = 1U << 25 ;

  // Field S24: S24
    const uint32_t LCD_RAM_COM4_S24 = 1U << 24 ;

  // Field S23: S23
    const uint32_t LCD_RAM_COM4_S23 = 1U << 23 ;

  // Field S22: S22
    const uint32_t LCD_RAM_COM4_S22 = 1U << 22 ;

  // Field S21: S21
    const uint32_t LCD_RAM_COM4_S21 = 1U << 21 ;

  // Field S20: S20
    const uint32_t LCD_RAM_COM4_S20 = 1U << 20 ;

  // Field S19: S19
    const uint32_t LCD_RAM_COM4_S19 = 1U << 19 ;

  // Field S18: S18
    const uint32_t LCD_RAM_COM4_S18 = 1U << 18 ;

  // Field S17: S17
    const uint32_t LCD_RAM_COM4_S17 = 1U << 17 ;

  // Field S16: S16
    const uint32_t LCD_RAM_COM4_S16 = 1U << 16 ;

  // Field S15: S15
    const uint32_t LCD_RAM_COM4_S15 = 1U << 15 ;

  // Field S14: S14
    const uint32_t LCD_RAM_COM4_S14 = 1U << 14 ;

  // Field S13: S13
    const uint32_t LCD_RAM_COM4_S13 = 1U << 13 ;

  // Field S12: S12
    const uint32_t LCD_RAM_COM4_S12 = 1U << 12 ;

  // Field S11: S11
    const uint32_t LCD_RAM_COM4_S11 = 1U << 11 ;

  // Field S10: S10
    const uint32_t LCD_RAM_COM4_S10 = 1U << 10 ;

  // Field S09: S09
    const uint32_t LCD_RAM_COM4_S09 = 1U << 9 ;

  // Field S08: S08
    const uint32_t LCD_RAM_COM4_S08 = 1U << 8 ;

  // Field S07: S07
    const uint32_t LCD_RAM_COM4_S07 = 1U << 7 ;

  // Field S06: S06
    const uint32_t LCD_RAM_COM4_S06 = 1U << 6 ;

  // Field S05: S05
    const uint32_t LCD_RAM_COM4_S05 = 1U << 5 ;

  // Field S04: S04
    const uint32_t LCD_RAM_COM4_S04 = 1U << 4 ;

  // Field S03: S03
    const uint32_t LCD_RAM_COM4_S03 = 1U << 3 ;

  // Field S02: S02
    const uint32_t LCD_RAM_COM4_S02 = 1U << 2 ;

  // Field S01: S01
    const uint32_t LCD_RAM_COM4_S01 = 1U << 1 ;

  // Field S00: S00
    const uint32_t LCD_RAM_COM4_S00 = 1U << 0 ;

//---  Register RAM_COM5: display memory
  #define LCD_RAM_COM5 (* ((volatile uint32_t *) (0x40002400 + 60)))

  // Field S31: S31
    const uint32_t LCD_RAM_COM5_S31 = 1U << 31 ;

  // Field S30: S30
    const uint32_t LCD_RAM_COM5_S30 = 1U << 30 ;

  // Field S29: S29
    const uint32_t LCD_RAM_COM5_S29 = 1U << 29 ;

  // Field S28: S28
    const uint32_t LCD_RAM_COM5_S28 = 1U << 28 ;

  // Field S27: S27
    const uint32_t LCD_RAM_COM5_S27 = 1U << 27 ;

  // Field S26: S26
    const uint32_t LCD_RAM_COM5_S26 = 1U << 26 ;

  // Field S25: S25
    const uint32_t LCD_RAM_COM5_S25 = 1U << 25 ;

  // Field S24: S24
    const uint32_t LCD_RAM_COM5_S24 = 1U << 24 ;

  // Field S23: S23
    const uint32_t LCD_RAM_COM5_S23 = 1U << 23 ;

  // Field S22: S22
    const uint32_t LCD_RAM_COM5_S22 = 1U << 22 ;

  // Field S21: S21
    const uint32_t LCD_RAM_COM5_S21 = 1U << 21 ;

  // Field S20: S20
    const uint32_t LCD_RAM_COM5_S20 = 1U << 20 ;

  // Field S19: S19
    const uint32_t LCD_RAM_COM5_S19 = 1U << 19 ;

  // Field S18: S18
    const uint32_t LCD_RAM_COM5_S18 = 1U << 18 ;

  // Field S17: S17
    const uint32_t LCD_RAM_COM5_S17 = 1U << 17 ;

  // Field S16: S16
    const uint32_t LCD_RAM_COM5_S16 = 1U << 16 ;

  // Field S15: S15
    const uint32_t LCD_RAM_COM5_S15 = 1U << 15 ;

  // Field S14: S14
    const uint32_t LCD_RAM_COM5_S14 = 1U << 14 ;

  // Field S13: S13
    const uint32_t LCD_RAM_COM5_S13 = 1U << 13 ;

  // Field S12: S12
    const uint32_t LCD_RAM_COM5_S12 = 1U << 12 ;

  // Field S11: S11
    const uint32_t LCD_RAM_COM5_S11 = 1U << 11 ;

  // Field S10: S10
    const uint32_t LCD_RAM_COM5_S10 = 1U << 10 ;

  // Field S09: S09
    const uint32_t LCD_RAM_COM5_S09 = 1U << 9 ;

  // Field S08: S08
    const uint32_t LCD_RAM_COM5_S08 = 1U << 8 ;

  // Field S07: S07
    const uint32_t LCD_RAM_COM5_S07 = 1U << 7 ;

  // Field S06: S06
    const uint32_t LCD_RAM_COM5_S06 = 1U << 6 ;

  // Field S05: S05
    const uint32_t LCD_RAM_COM5_S05 = 1U << 5 ;

  // Field S04: S04
    const uint32_t LCD_RAM_COM5_S04 = 1U << 4 ;

  // Field S03: S03
    const uint32_t LCD_RAM_COM5_S03 = 1U << 3 ;

  // Field S02: S02
    const uint32_t LCD_RAM_COM5_S02 = 1U << 2 ;

  // Field S01: S01
    const uint32_t LCD_RAM_COM5_S01 = 1U << 1 ;

  // Field S00: S00
    const uint32_t LCD_RAM_COM5_S00 = 1U << 0 ;

//---  Register RAM_COM6: display memory
  #define LCD_RAM_COM6 (* ((volatile uint32_t *) (0x40002400 + 68)))

  // Field S31: S31
    const uint32_t LCD_RAM_COM6_S31 = 1U << 31 ;

  // Field S30: S30
    const uint32_t LCD_RAM_COM6_S30 = 1U << 30 ;

  // Field S29: S29
    const uint32_t LCD_RAM_COM6_S29 = 1U << 29 ;

  // Field S28: S28
    const uint32_t LCD_RAM_COM6_S28 = 1U << 28 ;

  // Field S27: S27
    const uint32_t LCD_RAM_COM6_S27 = 1U << 27 ;

  // Field S26: S26
    const uint32_t LCD_RAM_COM6_S26 = 1U << 26 ;

  // Field S25: S25
    const uint32_t LCD_RAM_COM6_S25 = 1U << 25 ;

  // Field S24: S24
    const uint32_t LCD_RAM_COM6_S24 = 1U << 24 ;

  // Field S23: S23
    const uint32_t LCD_RAM_COM6_S23 = 1U << 23 ;

  // Field S22: S22
    const uint32_t LCD_RAM_COM6_S22 = 1U << 22 ;

  // Field S21: S21
    const uint32_t LCD_RAM_COM6_S21 = 1U << 21 ;

  // Field S20: S20
    const uint32_t LCD_RAM_COM6_S20 = 1U << 20 ;

  // Field S19: S19
    const uint32_t LCD_RAM_COM6_S19 = 1U << 19 ;

  // Field S18: S18
    const uint32_t LCD_RAM_COM6_S18 = 1U << 18 ;

  // Field S17: S17
    const uint32_t LCD_RAM_COM6_S17 = 1U << 17 ;

  // Field S16: S16
    const uint32_t LCD_RAM_COM6_S16 = 1U << 16 ;

  // Field S15: S15
    const uint32_t LCD_RAM_COM6_S15 = 1U << 15 ;

  // Field S14: S14
    const uint32_t LCD_RAM_COM6_S14 = 1U << 14 ;

  // Field S13: S13
    const uint32_t LCD_RAM_COM6_S13 = 1U << 13 ;

  // Field S12: S12
    const uint32_t LCD_RAM_COM6_S12 = 1U << 12 ;

  // Field S11: S11
    const uint32_t LCD_RAM_COM6_S11 = 1U << 11 ;

  // Field S10: S10
    const uint32_t LCD_RAM_COM6_S10 = 1U << 10 ;

  // Field S09: S09
    const uint32_t LCD_RAM_COM6_S09 = 1U << 9 ;

  // Field S08: S08
    const uint32_t LCD_RAM_COM6_S08 = 1U << 8 ;

  // Field S07: S07
    const uint32_t LCD_RAM_COM6_S07 = 1U << 7 ;

  // Field S06: S06
    const uint32_t LCD_RAM_COM6_S06 = 1U << 6 ;

  // Field S05: S05
    const uint32_t LCD_RAM_COM6_S05 = 1U << 5 ;

  // Field S04: S04
    const uint32_t LCD_RAM_COM6_S04 = 1U << 4 ;

  // Field S03: S03
    const uint32_t LCD_RAM_COM6_S03 = 1U << 3 ;

  // Field S02: S02
    const uint32_t LCD_RAM_COM6_S02 = 1U << 2 ;

  // Field S01: S01
    const uint32_t LCD_RAM_COM6_S01 = 1U << 1 ;

  // Field S00: S00
    const uint32_t LCD_RAM_COM6_S00 = 1U << 0 ;

//---  Register RAM_COM7: display memory
  #define LCD_RAM_COM7 (* ((volatile uint32_t *) (0x40002400 + 76)))

  // Field S31: S31
    const uint32_t LCD_RAM_COM7_S31 = 1U << 31 ;

  // Field S30: S30
    const uint32_t LCD_RAM_COM7_S30 = 1U << 30 ;

  // Field S29: S29
    const uint32_t LCD_RAM_COM7_S29 = 1U << 29 ;

  // Field S28: S28
    const uint32_t LCD_RAM_COM7_S28 = 1U << 28 ;

  // Field S27: S27
    const uint32_t LCD_RAM_COM7_S27 = 1U << 27 ;

  // Field S26: S26
    const uint32_t LCD_RAM_COM7_S26 = 1U << 26 ;

  // Field S25: S25
    const uint32_t LCD_RAM_COM7_S25 = 1U << 25 ;

  // Field S24: S24
    const uint32_t LCD_RAM_COM7_S24 = 1U << 24 ;

  // Field S23: S23
    const uint32_t LCD_RAM_COM7_S23 = 1U << 23 ;

  // Field S22: S22
    const uint32_t LCD_RAM_COM7_S22 = 1U << 22 ;

  // Field S21: S21
    const uint32_t LCD_RAM_COM7_S21 = 1U << 21 ;

  // Field S20: S20
    const uint32_t LCD_RAM_COM7_S20 = 1U << 20 ;

  // Field S19: S19
    const uint32_t LCD_RAM_COM7_S19 = 1U << 19 ;

  // Field S18: S18
    const uint32_t LCD_RAM_COM7_S18 = 1U << 18 ;

  // Field S17: S17
    const uint32_t LCD_RAM_COM7_S17 = 1U << 17 ;

  // Field S16: S16
    const uint32_t LCD_RAM_COM7_S16 = 1U << 16 ;

  // Field S15: S15
    const uint32_t LCD_RAM_COM7_S15 = 1U << 15 ;

  // Field S14: S14
    const uint32_t LCD_RAM_COM7_S14 = 1U << 14 ;

  // Field S13: S13
    const uint32_t LCD_RAM_COM7_S13 = 1U << 13 ;

  // Field S12: S12
    const uint32_t LCD_RAM_COM7_S12 = 1U << 12 ;

  // Field S11: S11
    const uint32_t LCD_RAM_COM7_S11 = 1U << 11 ;

  // Field S10: S10
    const uint32_t LCD_RAM_COM7_S10 = 1U << 10 ;

  // Field S09: S09
    const uint32_t LCD_RAM_COM7_S09 = 1U << 9 ;

  // Field S08: S08
    const uint32_t LCD_RAM_COM7_S08 = 1U << 8 ;

  // Field S07: S07
    const uint32_t LCD_RAM_COM7_S07 = 1U << 7 ;

  // Field S06: S06
    const uint32_t LCD_RAM_COM7_S06 = 1U << 6 ;

  // Field S05: S05
    const uint32_t LCD_RAM_COM7_S05 = 1U << 5 ;

  // Field S04: S04
    const uint32_t LCD_RAM_COM7_S04 = 1U << 4 ;

  // Field S03: S03
    const uint32_t LCD_RAM_COM7_S03 = 1U << 3 ;

  // Field S02: S02
    const uint32_t LCD_RAM_COM7_S02 = 1U << 2 ;

  // Field S01: S01
    const uint32_t LCD_RAM_COM7_S01 = 1U << 1 ;

  // Field S00: S00
    const uint32_t LCD_RAM_COM7_S00 = 1U << 0 ;

//------------------------------------------------------------------------------
// Peripheral LPTIM1: Low power timer
//------------------------------------------------------------------------------

//---  Register ISR: Interrupt and Status Register
  #define LPTIM1_ISR (* ((const volatile uint32_t *) (0x40007c00 + 0)))

  // Field DOWN: Counter direction change up to down
    const uint32_t LPTIM1_ISR_DOWN = 1U << 6 ;

  // Field UP: Counter direction change down to up
    const uint32_t LPTIM1_ISR_UP = 1U << 5 ;

  // Field ARROK: Autoreload register update OK
    const uint32_t LPTIM1_ISR_ARROK = 1U << 4 ;

  // Field CMPOK: Compare register update OK
    const uint32_t LPTIM1_ISR_CMPOK = 1U << 3 ;

  // Field EXTTRIG: External trigger edge event
    const uint32_t LPTIM1_ISR_EXTTRIG = 1U << 2 ;

  // Field ARRM: Autoreload match
    const uint32_t LPTIM1_ISR_ARRM = 1U << 1 ;

  // Field CMPM: Compare match
    const uint32_t LPTIM1_ISR_CMPM = 1U << 0 ;

//---  Register ICR: Interrupt Clear Register
  #define LPTIM1_ICR (* ((volatile uint32_t *) (0x40007c00 + 4)))

  // Field DOWNCF: Direction change to down Clear Flag
    const uint32_t LPTIM1_ICR_DOWNCF = 1U << 6 ;

  // Field UPCF: Direction change to UP Clear Flag
    const uint32_t LPTIM1_ICR_UPCF = 1U << 5 ;

  // Field ARROKCF: Autoreload register update OK Clear Flag
    const uint32_t LPTIM1_ICR_ARROKCF = 1U << 4 ;

  // Field CMPOKCF: Compare register update OK Clear Flag
    const uint32_t LPTIM1_ICR_CMPOKCF = 1U << 3 ;

  // Field EXTTRIGCF: External trigger valid edge Clear Flag
    const uint32_t LPTIM1_ICR_EXTTRIGCF = 1U << 2 ;

  // Field ARRMCF: Autoreload match Clear Flag
    const uint32_t LPTIM1_ICR_ARRMCF = 1U << 1 ;

  // Field CMPMCF: compare match Clear Flag
    const uint32_t LPTIM1_ICR_CMPMCF = 1U << 0 ;

//---  Register IER: Interrupt Enable Register
  #define LPTIM1_IER (* ((volatile uint32_t *) (0x40007c00 + 8)))

  // Field DOWNIE: Direction change to down Interrupt Enable
    const uint32_t LPTIM1_IER_DOWNIE = 1U << 6 ;

  // Field UPIE: Direction change to UP Interrupt Enable
    const uint32_t LPTIM1_IER_UPIE = 1U << 5 ;

  // Field ARROKIE: Autoreload register update OK Interrupt Enable
    const uint32_t LPTIM1_IER_ARROKIE = 1U << 4 ;

  // Field CMPOKIE: Compare register update OK Interrupt Enable
    const uint32_t LPTIM1_IER_CMPOKIE = 1U << 3 ;

  // Field EXTTRIGIE: External trigger valid edge Interrupt Enable
    const uint32_t LPTIM1_IER_EXTTRIGIE = 1U << 2 ;

  // Field ARRMIE: Autoreload match Interrupt Enable
    const uint32_t LPTIM1_IER_ARRMIE = 1U << 1 ;

  // Field CMPMIE: Compare match Interrupt Enable
    const uint32_t LPTIM1_IER_CMPMIE = 1U << 0 ;

//---  Register CFGR: Configuration Register
  #define LPTIM1_CFGR (* ((volatile uint32_t *) (0x40007c00 + 12)))

  // Field ENC: Encoder mode enable
    const uint32_t LPTIM1_CFGR_ENC = 1U << 24 ;

  // Field COUNTMODE: counter mode enabled
    const uint32_t LPTIM1_CFGR_COUNTMODE = 1U << 23 ;

  // Field PRELOAD: Registers update mode
    const uint32_t LPTIM1_CFGR_PRELOAD = 1U << 22 ;

  // Field WAVPOL: Waveform shape polarity
    const uint32_t LPTIM1_CFGR_WAVPOL = 1U << 21 ;

  // Field WAVE: Waveform shape
    const uint32_t LPTIM1_CFGR_WAVE = 1U << 20 ;

  // Field TIMOUT: Timeout enable
    const uint32_t LPTIM1_CFGR_TIMOUT = 1U << 19 ;

  // Field TRIGEN: Trigger enable and polarity
    inline uint32_t LPTIM1_CFGR_TRIGEN (const uint32_t inValue) {return (inValue & 0x3U) << 17 ; }

  // Field TRIGSEL: Trigger selector
    inline uint32_t LPTIM1_CFGR_TRIGSEL (const uint32_t inValue) {return (inValue & 0x7U) << 13 ; }

  // Field PRESC: Clock prescaler
    inline uint32_t LPTIM1_CFGR_PRESC (const uint32_t inValue) {return (inValue & 0x7U) << 9 ; }

  // Field TRGFLT: Configurable digital filter for trigger
    inline uint32_t LPTIM1_CFGR_TRGFLT (const uint32_t inValue) {return (inValue & 0x3U) << 6 ; }

  // Field CKFLT: Configurable digital filter for external clock
    inline uint32_t LPTIM1_CFGR_CKFLT (const uint32_t inValue) {return (inValue & 0x3U) << 3 ; }

  // Field CKPOL: Clock Polarity
    inline uint32_t LPTIM1_CFGR_CKPOL (const uint32_t inValue) {return (inValue & 0x3U) << 1 ; }

  // Field CKSEL: Clock selector
    const uint32_t LPTIM1_CFGR_CKSEL = 1U << 0 ;

//---  Register CR: Control Register
  #define LPTIM1_CR (* ((volatile uint32_t *) (0x40007c00 + 16)))

  // Field CNTSTRT: Timer start in continuous mode
    const uint32_t LPTIM1_CR_CNTSTRT = 1U << 2 ;

  // Field SNGSTRT: LPTIM start in single mode
    const uint32_t LPTIM1_CR_SNGSTRT = 1U << 1 ;

  // Field ENABLE: LPTIM Enable
    const uint32_t LPTIM1_CR_ENABLE = 1U << 0 ;

//---  Register CMP: Compare Register
  #define LPTIM1_CMP (* ((volatile uint32_t *) (0x40007c00 + 20)))

  // Field CMP: Compare value
    inline uint32_t LPTIM1_CMP_CMP (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register ARR: Autoreload Register
  #define LPTIM1_ARR (* ((volatile uint32_t *) (0x40007c00 + 24)))

  // Field ARR: Auto reload value
    inline uint32_t LPTIM1_ARR_ARR (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register CNT: Counter Register
  #define LPTIM1_CNT (* ((const volatile uint32_t *) (0x40007c00 + 28)))

  // Field CNT: Counter value
    inline uint32_t LPTIM1_CNT_CNT (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

//------------------------------------------------------------------------------
// Peripheral LPTIM2
//------------------------------------------------------------------------------

//---  Register ISR: Interrupt and Status Register
  #define LPTIM2_ISR (* ((const volatile uint32_t *) (0x40009400 + 0)))

  // Field DOWN: Counter direction change up to down
    const uint32_t LPTIM2_ISR_DOWN = 1U << 6 ;

  // Field UP: Counter direction change down to up
    const uint32_t LPTIM2_ISR_UP = 1U << 5 ;

  // Field ARROK: Autoreload register update OK
    const uint32_t LPTIM2_ISR_ARROK = 1U << 4 ;

  // Field CMPOK: Compare register update OK
    const uint32_t LPTIM2_ISR_CMPOK = 1U << 3 ;

  // Field EXTTRIG: External trigger edge event
    const uint32_t LPTIM2_ISR_EXTTRIG = 1U << 2 ;

  // Field ARRM: Autoreload match
    const uint32_t LPTIM2_ISR_ARRM = 1U << 1 ;

  // Field CMPM: Compare match
    const uint32_t LPTIM2_ISR_CMPM = 1U << 0 ;

//---  Register ICR: Interrupt Clear Register
  #define LPTIM2_ICR (* ((volatile uint32_t *) (0x40009400 + 4)))

  // Field DOWNCF: Direction change to down Clear Flag
    const uint32_t LPTIM2_ICR_DOWNCF = 1U << 6 ;

  // Field UPCF: Direction change to UP Clear Flag
    const uint32_t LPTIM2_ICR_UPCF = 1U << 5 ;

  // Field ARROKCF: Autoreload register update OK Clear Flag
    const uint32_t LPTIM2_ICR_ARROKCF = 1U << 4 ;

  // Field CMPOKCF: Compare register update OK Clear Flag
    const uint32_t LPTIM2_ICR_CMPOKCF = 1U << 3 ;

  // Field EXTTRIGCF: External trigger valid edge Clear Flag
    const uint32_t LPTIM2_ICR_EXTTRIGCF = 1U << 2 ;

  // Field ARRMCF: Autoreload match Clear Flag
    const uint32_t LPTIM2_ICR_ARRMCF = 1U << 1 ;

  // Field CMPMCF: compare match Clear Flag
    const uint32_t LPTIM2_ICR_CMPMCF = 1U << 0 ;

//---  Register IER: Interrupt Enable Register
  #define LPTIM2_IER (* ((volatile uint32_t *) (0x40009400 + 8)))

  // Field DOWNIE: Direction change to down Interrupt Enable
    const uint32_t LPTIM2_IER_DOWNIE = 1U << 6 ;

  // Field UPIE: Direction change to UP Interrupt Enable
    const uint32_t LPTIM2_IER_UPIE = 1U << 5 ;

  // Field ARROKIE: Autoreload register update OK Interrupt Enable
    const uint32_t LPTIM2_IER_ARROKIE = 1U << 4 ;

  // Field CMPOKIE: Compare register update OK Interrupt Enable
    const uint32_t LPTIM2_IER_CMPOKIE = 1U << 3 ;

  // Field EXTTRIGIE: External trigger valid edge Interrupt Enable
    const uint32_t LPTIM2_IER_EXTTRIGIE = 1U << 2 ;

  // Field ARRMIE: Autoreload match Interrupt Enable
    const uint32_t LPTIM2_IER_ARRMIE = 1U << 1 ;

  // Field CMPMIE: Compare match Interrupt Enable
    const uint32_t LPTIM2_IER_CMPMIE = 1U << 0 ;

//---  Register CFGR: Configuration Register
  #define LPTIM2_CFGR (* ((volatile uint32_t *) (0x40009400 + 12)))

  // Field ENC: Encoder mode enable
    const uint32_t LPTIM2_CFGR_ENC = 1U << 24 ;

  // Field COUNTMODE: counter mode enabled
    const uint32_t LPTIM2_CFGR_COUNTMODE = 1U << 23 ;

  // Field PRELOAD: Registers update mode
    const uint32_t LPTIM2_CFGR_PRELOAD = 1U << 22 ;

  // Field WAVPOL: Waveform shape polarity
    const uint32_t LPTIM2_CFGR_WAVPOL = 1U << 21 ;

  // Field WAVE: Waveform shape
    const uint32_t LPTIM2_CFGR_WAVE = 1U << 20 ;

  // Field TIMOUT: Timeout enable
    const uint32_t LPTIM2_CFGR_TIMOUT = 1U << 19 ;

  // Field TRIGEN: Trigger enable and polarity
    inline uint32_t LPTIM2_CFGR_TRIGEN (const uint32_t inValue) {return (inValue & 0x3U) << 17 ; }

  // Field TRIGSEL: Trigger selector
    inline uint32_t LPTIM2_CFGR_TRIGSEL (const uint32_t inValue) {return (inValue & 0x7U) << 13 ; }

  // Field PRESC: Clock prescaler
    inline uint32_t LPTIM2_CFGR_PRESC (const uint32_t inValue) {return (inValue & 0x7U) << 9 ; }

  // Field TRGFLT: Configurable digital filter for trigger
    inline uint32_t LPTIM2_CFGR_TRGFLT (const uint32_t inValue) {return (inValue & 0x3U) << 6 ; }

  // Field CKFLT: Configurable digital filter for external clock
    inline uint32_t LPTIM2_CFGR_CKFLT (const uint32_t inValue) {return (inValue & 0x3U) << 3 ; }

  // Field CKPOL: Clock Polarity
    inline uint32_t LPTIM2_CFGR_CKPOL (const uint32_t inValue) {return (inValue & 0x3U) << 1 ; }

  // Field CKSEL: Clock selector
    const uint32_t LPTIM2_CFGR_CKSEL = 1U << 0 ;

//---  Register CR: Control Register
  #define LPTIM2_CR (* ((volatile uint32_t *) (0x40009400 + 16)))

  // Field CNTSTRT: Timer start in continuous mode
    const uint32_t LPTIM2_CR_CNTSTRT = 1U << 2 ;

  // Field SNGSTRT: LPTIM start in single mode
    const uint32_t LPTIM2_CR_SNGSTRT = 1U << 1 ;

  // Field ENABLE: LPTIM Enable
    const uint32_t LPTIM2_CR_ENABLE = 1U << 0 ;

//---  Register CMP: Compare Register
  #define LPTIM2_CMP (* ((volatile uint32_t *) (0x40009400 + 20)))

  // Field CMP: Compare value
    inline uint32_t LPTIM2_CMP_CMP (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register ARR: Autoreload Register
  #define LPTIM2_ARR (* ((volatile uint32_t *) (0x40009400 + 24)))

  // Field ARR: Auto reload value
    inline uint32_t LPTIM2_ARR_ARR (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register CNT: Counter Register
  #define LPTIM2_CNT (* ((const volatile uint32_t *) (0x40009400 + 28)))

  // Field CNT: Counter value
    inline uint32_t LPTIM2_CNT_CNT (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

//------------------------------------------------------------------------------
// Peripheral LPUART1: Universal synchronous asynchronous receiver       transmitter
//------------------------------------------------------------------------------

//---  Register CR1: Control register 1
  #define LPUART1_CR1 (* ((volatile uint32_t *) (0x40008000 + 0)))

  // Field M1: Word length
    const uint32_t LPUART1_CR1_M1 = 1U << 28 ;

  // Field DEAT4: Driver Enable assertion time
    const uint32_t LPUART1_CR1_DEAT4 = 1U << 25 ;

  // Field DEAT3: DEAT3
    const uint32_t LPUART1_CR1_DEAT3 = 1U << 24 ;

  // Field DEAT2: DEAT2
    const uint32_t LPUART1_CR1_DEAT2 = 1U << 23 ;

  // Field DEAT1: DEAT1
    const uint32_t LPUART1_CR1_DEAT1 = 1U << 22 ;

  // Field DEAT0: DEAT0
    const uint32_t LPUART1_CR1_DEAT0 = 1U << 21 ;

  // Field DEDT4: Driver Enable de-assertion time
    const uint32_t LPUART1_CR1_DEDT4 = 1U << 20 ;

  // Field DEDT3: DEDT3
    const uint32_t LPUART1_CR1_DEDT3 = 1U << 19 ;

  // Field DEDT2: DEDT2
    const uint32_t LPUART1_CR1_DEDT2 = 1U << 18 ;

  // Field DEDT1: DEDT1
    const uint32_t LPUART1_CR1_DEDT1 = 1U << 17 ;

  // Field DEDT0: DEDT0
    const uint32_t LPUART1_CR1_DEDT0 = 1U << 16 ;

  // Field CMIE: Character match interrupt enable
    const uint32_t LPUART1_CR1_CMIE = 1U << 14 ;

  // Field MME: Mute mode enable
    const uint32_t LPUART1_CR1_MME = 1U << 13 ;

  // Field M0: Word length
    const uint32_t LPUART1_CR1_M0 = 1U << 12 ;

  // Field WAKE: Receiver wakeup method
    const uint32_t LPUART1_CR1_WAKE = 1U << 11 ;

  // Field PCE: Parity control enable
    const uint32_t LPUART1_CR1_PCE = 1U << 10 ;

  // Field PS: Parity selection
    const uint32_t LPUART1_CR1_PS = 1U << 9 ;

  // Field PEIE: PE interrupt enable
    const uint32_t LPUART1_CR1_PEIE = 1U << 8 ;

  // Field TXEIE: interrupt enable
    const uint32_t LPUART1_CR1_TXEIE = 1U << 7 ;

  // Field TCIE: Transmission complete interrupt enable
    const uint32_t LPUART1_CR1_TCIE = 1U << 6 ;

  // Field RXNEIE: RXNE interrupt enable
    const uint32_t LPUART1_CR1_RXNEIE = 1U << 5 ;

  // Field IDLEIE: IDLE interrupt enable
    const uint32_t LPUART1_CR1_IDLEIE = 1U << 4 ;

  // Field TE: Transmitter enable
    const uint32_t LPUART1_CR1_TE = 1U << 3 ;

  // Field RE: Receiver enable
    const uint32_t LPUART1_CR1_RE = 1U << 2 ;

  // Field UESM: USART enable in Stop mode
    const uint32_t LPUART1_CR1_UESM = 1U << 1 ;

  // Field UE: USART enable
    const uint32_t LPUART1_CR1_UE = 1U << 0 ;

//---  Register CR2: Control register 2
  #define LPUART1_CR2 (* ((volatile uint32_t *) (0x40008000 + 4)))

  // Field ADD4_7: Address of the USART node
    inline uint32_t LPUART1_CR2_ADD4_7 (const uint32_t inValue) {return (inValue & 0xfU) << 28 ; }

  // Field ADD0_3: Address of the USART node
    inline uint32_t LPUART1_CR2_ADD0_3 (const uint32_t inValue) {return (inValue & 0xfU) << 24 ; }

  // Field MSBFIRST: Most significant bit first
    const uint32_t LPUART1_CR2_MSBFIRST = 1U << 19 ;

  // Field TAINV: Binary data inversion
    const uint32_t LPUART1_CR2_TAINV = 1U << 18 ;

  // Field TXINV: TX pin active level inversion
    const uint32_t LPUART1_CR2_TXINV = 1U << 17 ;

  // Field RXINV: RX pin active level inversion
    const uint32_t LPUART1_CR2_RXINV = 1U << 16 ;

  // Field SWAP: Swap TX/RX pins
    const uint32_t LPUART1_CR2_SWAP = 1U << 15 ;

  // Field STOP: STOP bits
    inline uint32_t LPUART1_CR2_STOP (const uint32_t inValue) {return (inValue & 0x3U) << 12 ; }

  // Field CLKEN: Clock enable
    const uint32_t LPUART1_CR2_CLKEN = 1U << 11 ;

  // Field ADDM7: 7-bit Address Detection/4-bit Address Detection
    const uint32_t LPUART1_CR2_ADDM7 = 1U << 4 ;

//---  Register CR3: Control register 3
  #define LPUART1_CR3 (* ((volatile uint32_t *) (0x40008000 + 8)))

  // Field WUFIE: Wakeup from Stop mode interrupt enable
    const uint32_t LPUART1_CR3_WUFIE = 1U << 22 ;

  // Field WUS: Wakeup from Stop mode interrupt flag selection
    inline uint32_t LPUART1_CR3_WUS (const uint32_t inValue) {return (inValue & 0x3U) << 20 ; }

  // Field DEP: Driver enable polarity selection
    const uint32_t LPUART1_CR3_DEP = 1U << 15 ;

  // Field DEM: Driver enable mode
    const uint32_t LPUART1_CR3_DEM = 1U << 14 ;

  // Field DDRE: DMA Disable on Reception Error
    const uint32_t LPUART1_CR3_DDRE = 1U << 13 ;

  // Field OVRDIS: Overrun Disable
    const uint32_t LPUART1_CR3_OVRDIS = 1U << 12 ;

  // Field CTSIE: CTS interrupt enable
    const uint32_t LPUART1_CR3_CTSIE = 1U << 10 ;

  // Field CTSE: CTS enable
    const uint32_t LPUART1_CR3_CTSE = 1U << 9 ;

  // Field RTSE: RTS enable
    const uint32_t LPUART1_CR3_RTSE = 1U << 8 ;

  // Field DMAT: DMA enable transmitter
    const uint32_t LPUART1_CR3_DMAT = 1U << 7 ;

  // Field DMAR: DMA enable receiver
    const uint32_t LPUART1_CR3_DMAR = 1U << 6 ;

  // Field HDSEL: Half-duplex selection
    const uint32_t LPUART1_CR3_HDSEL = 1U << 3 ;

  // Field EIE: Error interrupt enable
    const uint32_t LPUART1_CR3_EIE = 1U << 0 ;

//---  Register BRR: Baud rate register
  #define LPUART1_BRR (* ((volatile uint32_t *) (0x40008000 + 12)))

  // Field BRR: BRR
    inline uint32_t LPUART1_BRR_BRR (const uint32_t inValue) {return (inValue & 0xfffffU) << 0 ; }

//---  Register RQR: Request register
  #define LPUART1_RQR (* ((volatile uint32_t *) (0x40008000 + 24)))

  // Field RXFRQ: Receive data flush request
    const uint32_t LPUART1_RQR_RXFRQ = 1U << 3 ;

  // Field MMRQ: Mute mode request
    const uint32_t LPUART1_RQR_MMRQ = 1U << 2 ;

  // Field SBKRQ: Send break request
    const uint32_t LPUART1_RQR_SBKRQ = 1U << 1 ;

//---  Register ISR: Interrupt & status
          register
  #define LPUART1_ISR (* ((const volatile uint32_t *) (0x40008000 + 28)))

  // Field REACK: REACK
    const uint32_t LPUART1_ISR_REACK = 1U << 22 ;

  // Field TEACK: TEACK
    const uint32_t LPUART1_ISR_TEACK = 1U << 21 ;

  // Field WUF: WUF
    const uint32_t LPUART1_ISR_WUF = 1U << 20 ;

  // Field RWU: RWU
    const uint32_t LPUART1_ISR_RWU = 1U << 19 ;

  // Field SBKF: SBKF
    const uint32_t LPUART1_ISR_SBKF = 1U << 18 ;

  // Field CMF: CMF
    const uint32_t LPUART1_ISR_CMF = 1U << 17 ;

  // Field BUSY: BUSY
    const uint32_t LPUART1_ISR_BUSY = 1U << 16 ;

  // Field CTS: CTS
    const uint32_t LPUART1_ISR_CTS = 1U << 10 ;

  // Field CTSIF: CTSIF
    const uint32_t LPUART1_ISR_CTSIF = 1U << 9 ;

  // Field TXE: TXE
    const uint32_t LPUART1_ISR_TXE = 1U << 7 ;

  // Field TC: TC
    const uint32_t LPUART1_ISR_TC = 1U << 6 ;

  // Field RXNE: RXNE
    const uint32_t LPUART1_ISR_RXNE = 1U << 5 ;

  // Field IDLE: IDLE
    const uint32_t LPUART1_ISR_IDLE = 1U << 4 ;

  // Field ORE: ORE
    const uint32_t LPUART1_ISR_ORE = 1U << 3 ;

  // Field NF: NF
    const uint32_t LPUART1_ISR_NF = 1U << 2 ;

  // Field FE: FE
    const uint32_t LPUART1_ISR_FE = 1U << 1 ;

  // Field PE: PE
    const uint32_t LPUART1_ISR_PE = 1U << 0 ;

//---  Register ICR: Interrupt flag clear register
  #define LPUART1_ICR (* ((volatile uint32_t *) (0x40008000 + 32)))

  // Field WUCF: Wakeup from Stop mode clear flag
    const uint32_t LPUART1_ICR_WUCF = 1U << 20 ;

  // Field CMCF: Character match clear flag
    const uint32_t LPUART1_ICR_CMCF = 1U << 17 ;

  // Field CTSCF: CTS clear flag
    const uint32_t LPUART1_ICR_CTSCF = 1U << 9 ;

  // Field TCCF: Transmission complete clear flag
    const uint32_t LPUART1_ICR_TCCF = 1U << 6 ;

  // Field IDLECF: Idle line detected clear flag
    const uint32_t LPUART1_ICR_IDLECF = 1U << 4 ;

  // Field ORECF: Overrun error clear flag
    const uint32_t LPUART1_ICR_ORECF = 1U << 3 ;

  // Field NCF: Noise detected clear flag
    const uint32_t LPUART1_ICR_NCF = 1U << 2 ;

  // Field FECF: Framing error clear flag
    const uint32_t LPUART1_ICR_FECF = 1U << 1 ;

  // Field PECF: Parity error clear flag
    const uint32_t LPUART1_ICR_PECF = 1U << 0 ;

//---  Register RDR: Receive data register
  #define LPUART1_RDR (* ((const volatile uint32_t *) (0x40008000 + 36)))

  // Field RDR: Receive data value
    inline uint32_t LPUART1_RDR_RDR (const uint32_t inValue) {return (inValue & 0x1ffU) << 0 ; }

//---  Register TDR: Transmit data register
  #define LPUART1_TDR (* ((volatile uint32_t *) (0x40008000 + 40)))

  // Field TDR: Transmit data value
    inline uint32_t LPUART1_TDR_TDR (const uint32_t inValue) {return (inValue & 0x1ffU) << 0 ; }

//------------------------------------------------------------------------------
// Peripheral MPU: Memory protection unit
//------------------------------------------------------------------------------

//---  Register MPU_TYPER: MPU type register
  #define MPU_MPU_TYPER (* ((const volatile uint32_t *) (0xe000ed90 + 0)))

  // Field SEPARATE: Separate flag
    const uint32_t MPU_MPU_TYPER_SEPARATE = 1U << 0 ;

  // Field DREGION: Number of MPU data regions
    inline uint32_t MPU_MPU_TYPER_DREGION (const uint32_t inValue) {return (inValue & 0xffU) << 8 ; }

  // Field IREGION: Number of MPU instruction regions
    inline uint32_t MPU_MPU_TYPER_IREGION (const uint32_t inValue) {return (inValue & 0xffU) << 16 ; }

//---  Register MPU_CTRL: MPU control register
  #define MPU_MPU_CTRL (* ((const volatile uint32_t *) (0xe000ed90 + 4)))

  // Field ENABLE: Enables the MPU
    const uint32_t MPU_MPU_CTRL_ENABLE = 1U << 0 ;

  // Field HFNMIENA: Enables the operation of MPU during hard fault
    const uint32_t MPU_MPU_CTRL_HFNMIENA = 1U << 1 ;

  // Field PRIVDEFENA: Enable priviliged software access to default memory map
    const uint32_t MPU_MPU_CTRL_PRIVDEFENA = 1U << 2 ;

//---  Register MPU_RNR: MPU region number register
  #define MPU_MPU_RNR (* ((volatile uint32_t *) (0xe000ed90 + 8)))

  // Field REGION: MPU region
    inline uint32_t MPU_MPU_RNR_REGION (const uint32_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register MPU_RBAR: MPU region base address
          register
  #define MPU_MPU_RBAR (* ((volatile uint32_t *) (0xe000ed90 + 12)))

  // Field REGION: MPU region field
    inline uint32_t MPU_MPU_RBAR_REGION (const uint32_t inValue) {return (inValue & 0xfU) << 0 ; }

  // Field VALID: MPU region number valid
    const uint32_t MPU_MPU_RBAR_VALID = 1U << 4 ;

  // Field ADDR: Region base address field
    inline uint32_t MPU_MPU_RBAR_ADDR (const uint32_t inValue) {return (inValue & 0x7ffffffU) << 5 ; }

//---  Register MPU_RASR: MPU region attribute and size
          register
  #define MPU_MPU_RASR (* ((volatile uint32_t *) (0xe000ed90 + 16)))

  // Field ENABLE: Region enable bit.
    const uint32_t MPU_MPU_RASR_ENABLE = 1U << 0 ;

  // Field SIZE: Size of the MPU protection region
    inline uint32_t MPU_MPU_RASR_SIZE (const uint32_t inValue) {return (inValue & 0x1fU) << 1 ; }

  // Field SRD: Subregion disable bits
    inline uint32_t MPU_MPU_RASR_SRD (const uint32_t inValue) {return (inValue & 0xffU) << 8 ; }

  // Field B: memory attribute
    const uint32_t MPU_MPU_RASR_B = 1U << 16 ;

  // Field C: memory attribute
    const uint32_t MPU_MPU_RASR_C = 1U << 17 ;

  // Field S: Shareable memory attribute
    const uint32_t MPU_MPU_RASR_S = 1U << 18 ;

  // Field TEX: memory attribute
    inline uint32_t MPU_MPU_RASR_TEX (const uint32_t inValue) {return (inValue & 0x7U) << 19 ; }

  // Field AP: Access permission
    inline uint32_t MPU_MPU_RASR_AP (const uint32_t inValue) {return (inValue & 0x7U) << 24 ; }

  // Field XN: Instruction access disable bit
    const uint32_t MPU_MPU_RASR_XN = 1U << 28 ;

//------------------------------------------------------------------------------
// Peripheral NVIC: Nested Vectored Interrupt       Controller
//------------------------------------------------------------------------------

//---  Register ISER0: Interrupt Set-Enable Register
  #define NVIC_ISER0 (* ((volatile uint32_t *) (0xe000e100 + 0)))

  // Field SETENA: SETENA
    inline uint32_t NVIC_ISER0_SETENA (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register ISER1: Interrupt Set-Enable Register
  #define NVIC_ISER1 (* ((volatile uint32_t *) (0xe000e100 + 4)))

  // Field SETENA: SETENA
    inline uint32_t NVIC_ISER1_SETENA (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register ISER2: Interrupt Set-Enable Register
  #define NVIC_ISER2 (* ((volatile uint32_t *) (0xe000e100 + 8)))

  // Field SETENA: SETENA
    inline uint32_t NVIC_ISER2_SETENA (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register ICER0: Interrupt Clear-Enable
          Register
  #define NVIC_ICER0 (* ((volatile uint32_t *) (0xe000e100 + 128)))

  // Field CLRENA: CLRENA
    inline uint32_t NVIC_ICER0_CLRENA (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register ICER1: Interrupt Clear-Enable
          Register
  #define NVIC_ICER1 (* ((volatile uint32_t *) (0xe000e100 + 132)))

  // Field CLRENA: CLRENA
    inline uint32_t NVIC_ICER1_CLRENA (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register ICER2: Interrupt Clear-Enable
          Register
  #define NVIC_ICER2 (* ((volatile uint32_t *) (0xe000e100 + 136)))

  // Field CLRENA: CLRENA
    inline uint32_t NVIC_ICER2_CLRENA (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register ISPR0: Interrupt Set-Pending Register
  #define NVIC_ISPR0 (* ((volatile uint32_t *) (0xe000e100 + 256)))

  // Field SETPEND: SETPEND
    inline uint32_t NVIC_ISPR0_SETPEND (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register ISPR1: Interrupt Set-Pending Register
  #define NVIC_ISPR1 (* ((volatile uint32_t *) (0xe000e100 + 260)))

  // Field SETPEND: SETPEND
    inline uint32_t NVIC_ISPR1_SETPEND (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register ISPR2: Interrupt Set-Pending Register
  #define NVIC_ISPR2 (* ((volatile uint32_t *) (0xe000e100 + 264)))

  // Field SETPEND: SETPEND
    inline uint32_t NVIC_ISPR2_SETPEND (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register ICPR0: Interrupt Clear-Pending
          Register
  #define NVIC_ICPR0 (* ((volatile uint32_t *) (0xe000e100 + 384)))

  // Field CLRPEND: CLRPEND
    inline uint32_t NVIC_ICPR0_CLRPEND (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register ICPR1: Interrupt Clear-Pending
          Register
  #define NVIC_ICPR1 (* ((volatile uint32_t *) (0xe000e100 + 388)))

  // Field CLRPEND: CLRPEND
    inline uint32_t NVIC_ICPR1_CLRPEND (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register ICPR2: Interrupt Clear-Pending
          Register
  #define NVIC_ICPR2 (* ((volatile uint32_t *) (0xe000e100 + 392)))

  // Field CLRPEND: CLRPEND
    inline uint32_t NVIC_ICPR2_CLRPEND (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register IABR0: Interrupt Active Bit Register
  #define NVIC_IABR0 (* ((const volatile uint32_t *) (0xe000e100 + 512)))

  // Field ACTIVE: ACTIVE
    inline uint32_t NVIC_IABR0_ACTIVE (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register IABR1: Interrupt Active Bit Register
  #define NVIC_IABR1 (* ((const volatile uint32_t *) (0xe000e100 + 516)))

  // Field ACTIVE: ACTIVE
    inline uint32_t NVIC_IABR1_ACTIVE (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register IABR2: Interrupt Active Bit Register
  #define NVIC_IABR2 (* ((const volatile uint32_t *) (0xe000e100 + 520)))

  // Field ACTIVE: ACTIVE
    inline uint32_t NVIC_IABR2_ACTIVE (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register IPR0: Interrupt Priority Register
  #define NVIC_IPR0 (* ((volatile uint32_t *) (0xe000e100 + 768)))

  // Field IPR_N0: IPR_N0
    inline uint32_t NVIC_IPR0_IPR_N0 (const uint32_t inValue) {return (inValue & 0xffU) << 0 ; }

  // Field IPR_N1: IPR_N1
    inline uint32_t NVIC_IPR0_IPR_N1 (const uint32_t inValue) {return (inValue & 0xffU) << 8 ; }

  // Field IPR_N2: IPR_N2
    inline uint32_t NVIC_IPR0_IPR_N2 (const uint32_t inValue) {return (inValue & 0xffU) << 16 ; }

  // Field IPR_N3: IPR_N3
    inline uint32_t NVIC_IPR0_IPR_N3 (const uint32_t inValue) {return (inValue & 0xffU) << 24 ; }

//---  Register IPR1: Interrupt Priority Register
  #define NVIC_IPR1 (* ((volatile uint32_t *) (0xe000e100 + 772)))

  // Field IPR_N0: IPR_N0
    inline uint32_t NVIC_IPR1_IPR_N0 (const uint32_t inValue) {return (inValue & 0xffU) << 0 ; }

  // Field IPR_N1: IPR_N1
    inline uint32_t NVIC_IPR1_IPR_N1 (const uint32_t inValue) {return (inValue & 0xffU) << 8 ; }

  // Field IPR_N2: IPR_N2
    inline uint32_t NVIC_IPR1_IPR_N2 (const uint32_t inValue) {return (inValue & 0xffU) << 16 ; }

  // Field IPR_N3: IPR_N3
    inline uint32_t NVIC_IPR1_IPR_N3 (const uint32_t inValue) {return (inValue & 0xffU) << 24 ; }

//---  Register IPR2: Interrupt Priority Register
  #define NVIC_IPR2 (* ((volatile uint32_t *) (0xe000e100 + 776)))

  // Field IPR_N0: IPR_N0
    inline uint32_t NVIC_IPR2_IPR_N0 (const uint32_t inValue) {return (inValue & 0xffU) << 0 ; }

  // Field IPR_N1: IPR_N1
    inline uint32_t NVIC_IPR2_IPR_N1 (const uint32_t inValue) {return (inValue & 0xffU) << 8 ; }

  // Field IPR_N2: IPR_N2
    inline uint32_t NVIC_IPR2_IPR_N2 (const uint32_t inValue) {return (inValue & 0xffU) << 16 ; }

  // Field IPR_N3: IPR_N3
    inline uint32_t NVIC_IPR2_IPR_N3 (const uint32_t inValue) {return (inValue & 0xffU) << 24 ; }

//---  Register IPR3: Interrupt Priority Register
  #define NVIC_IPR3 (* ((volatile uint32_t *) (0xe000e100 + 780)))

  // Field IPR_N0: IPR_N0
    inline uint32_t NVIC_IPR3_IPR_N0 (const uint32_t inValue) {return (inValue & 0xffU) << 0 ; }

  // Field IPR_N1: IPR_N1
    inline uint32_t NVIC_IPR3_IPR_N1 (const uint32_t inValue) {return (inValue & 0xffU) << 8 ; }

  // Field IPR_N2: IPR_N2
    inline uint32_t NVIC_IPR3_IPR_N2 (const uint32_t inValue) {return (inValue & 0xffU) << 16 ; }

  // Field IPR_N3: IPR_N3
    inline uint32_t NVIC_IPR3_IPR_N3 (const uint32_t inValue) {return (inValue & 0xffU) << 24 ; }

//---  Register IPR4: Interrupt Priority Register
  #define NVIC_IPR4 (* ((volatile uint32_t *) (0xe000e100 + 784)))

  // Field IPR_N0: IPR_N0
    inline uint32_t NVIC_IPR4_IPR_N0 (const uint32_t inValue) {return (inValue & 0xffU) << 0 ; }

  // Field IPR_N1: IPR_N1
    inline uint32_t NVIC_IPR4_IPR_N1 (const uint32_t inValue) {return (inValue & 0xffU) << 8 ; }

  // Field IPR_N2: IPR_N2
    inline uint32_t NVIC_IPR4_IPR_N2 (const uint32_t inValue) {return (inValue & 0xffU) << 16 ; }

  // Field IPR_N3: IPR_N3
    inline uint32_t NVIC_IPR4_IPR_N3 (const uint32_t inValue) {return (inValue & 0xffU) << 24 ; }

//---  Register IPR5: Interrupt Priority Register
  #define NVIC_IPR5 (* ((volatile uint32_t *) (0xe000e100 + 788)))

  // Field IPR_N0: IPR_N0
    inline uint32_t NVIC_IPR5_IPR_N0 (const uint32_t inValue) {return (inValue & 0xffU) << 0 ; }

  // Field IPR_N1: IPR_N1
    inline uint32_t NVIC_IPR5_IPR_N1 (const uint32_t inValue) {return (inValue & 0xffU) << 8 ; }

  // Field IPR_N2: IPR_N2
    inline uint32_t NVIC_IPR5_IPR_N2 (const uint32_t inValue) {return (inValue & 0xffU) << 16 ; }

  // Field IPR_N3: IPR_N3
    inline uint32_t NVIC_IPR5_IPR_N3 (const uint32_t inValue) {return (inValue & 0xffU) << 24 ; }

//---  Register IPR6: Interrupt Priority Register
  #define NVIC_IPR6 (* ((volatile uint32_t *) (0xe000e100 + 792)))

  // Field IPR_N0: IPR_N0
    inline uint32_t NVIC_IPR6_IPR_N0 (const uint32_t inValue) {return (inValue & 0xffU) << 0 ; }

  // Field IPR_N1: IPR_N1
    inline uint32_t NVIC_IPR6_IPR_N1 (const uint32_t inValue) {return (inValue & 0xffU) << 8 ; }

  // Field IPR_N2: IPR_N2
    inline uint32_t NVIC_IPR6_IPR_N2 (const uint32_t inValue) {return (inValue & 0xffU) << 16 ; }

  // Field IPR_N3: IPR_N3
    inline uint32_t NVIC_IPR6_IPR_N3 (const uint32_t inValue) {return (inValue & 0xffU) << 24 ; }

//---  Register IPR7: Interrupt Priority Register
  #define NVIC_IPR7 (* ((volatile uint32_t *) (0xe000e100 + 796)))

  // Field IPR_N0: IPR_N0
    inline uint32_t NVIC_IPR7_IPR_N0 (const uint32_t inValue) {return (inValue & 0xffU) << 0 ; }

  // Field IPR_N1: IPR_N1
    inline uint32_t NVIC_IPR7_IPR_N1 (const uint32_t inValue) {return (inValue & 0xffU) << 8 ; }

  // Field IPR_N2: IPR_N2
    inline uint32_t NVIC_IPR7_IPR_N2 (const uint32_t inValue) {return (inValue & 0xffU) << 16 ; }

  // Field IPR_N3: IPR_N3
    inline uint32_t NVIC_IPR7_IPR_N3 (const uint32_t inValue) {return (inValue & 0xffU) << 24 ; }

//---  Register IPR8: Interrupt Priority Register
  #define NVIC_IPR8 (* ((volatile uint32_t *) (0xe000e100 + 800)))

  // Field IPR_N0: IPR_N0
    inline uint32_t NVIC_IPR8_IPR_N0 (const uint32_t inValue) {return (inValue & 0xffU) << 0 ; }

  // Field IPR_N1: IPR_N1
    inline uint32_t NVIC_IPR8_IPR_N1 (const uint32_t inValue) {return (inValue & 0xffU) << 8 ; }

  // Field IPR_N2: IPR_N2
    inline uint32_t NVIC_IPR8_IPR_N2 (const uint32_t inValue) {return (inValue & 0xffU) << 16 ; }

  // Field IPR_N3: IPR_N3
    inline uint32_t NVIC_IPR8_IPR_N3 (const uint32_t inValue) {return (inValue & 0xffU) << 24 ; }

//---  Register IPR9: Interrupt Priority Register
  #define NVIC_IPR9 (* ((volatile uint32_t *) (0xe000e100 + 804)))

  // Field IPR_N0: IPR_N0
    inline uint32_t NVIC_IPR9_IPR_N0 (const uint32_t inValue) {return (inValue & 0xffU) << 0 ; }

  // Field IPR_N1: IPR_N1
    inline uint32_t NVIC_IPR9_IPR_N1 (const uint32_t inValue) {return (inValue & 0xffU) << 8 ; }

  // Field IPR_N2: IPR_N2
    inline uint32_t NVIC_IPR9_IPR_N2 (const uint32_t inValue) {return (inValue & 0xffU) << 16 ; }

  // Field IPR_N3: IPR_N3
    inline uint32_t NVIC_IPR9_IPR_N3 (const uint32_t inValue) {return (inValue & 0xffU) << 24 ; }

//---  Register IPR10: Interrupt Priority Register
  #define NVIC_IPR10 (* ((volatile uint32_t *) (0xe000e100 + 808)))

  // Field IPR_N0: IPR_N0
    inline uint32_t NVIC_IPR10_IPR_N0 (const uint32_t inValue) {return (inValue & 0xffU) << 0 ; }

  // Field IPR_N1: IPR_N1
    inline uint32_t NVIC_IPR10_IPR_N1 (const uint32_t inValue) {return (inValue & 0xffU) << 8 ; }

  // Field IPR_N2: IPR_N2
    inline uint32_t NVIC_IPR10_IPR_N2 (const uint32_t inValue) {return (inValue & 0xffU) << 16 ; }

  // Field IPR_N3: IPR_N3
    inline uint32_t NVIC_IPR10_IPR_N3 (const uint32_t inValue) {return (inValue & 0xffU) << 24 ; }

//---  Register IPR11: Interrupt Priority Register
  #define NVIC_IPR11 (* ((volatile uint32_t *) (0xe000e100 + 812)))

  // Field IPR_N0: IPR_N0
    inline uint32_t NVIC_IPR11_IPR_N0 (const uint32_t inValue) {return (inValue & 0xffU) << 0 ; }

  // Field IPR_N1: IPR_N1
    inline uint32_t NVIC_IPR11_IPR_N1 (const uint32_t inValue) {return (inValue & 0xffU) << 8 ; }

  // Field IPR_N2: IPR_N2
    inline uint32_t NVIC_IPR11_IPR_N2 (const uint32_t inValue) {return (inValue & 0xffU) << 16 ; }

  // Field IPR_N3: IPR_N3
    inline uint32_t NVIC_IPR11_IPR_N3 (const uint32_t inValue) {return (inValue & 0xffU) << 24 ; }

//---  Register IPR12: Interrupt Priority Register
  #define NVIC_IPR12 (* ((volatile uint32_t *) (0xe000e100 + 816)))

  // Field IPR_N0: IPR_N0
    inline uint32_t NVIC_IPR12_IPR_N0 (const uint32_t inValue) {return (inValue & 0xffU) << 0 ; }

  // Field IPR_N1: IPR_N1
    inline uint32_t NVIC_IPR12_IPR_N1 (const uint32_t inValue) {return (inValue & 0xffU) << 8 ; }

  // Field IPR_N2: IPR_N2
    inline uint32_t NVIC_IPR12_IPR_N2 (const uint32_t inValue) {return (inValue & 0xffU) << 16 ; }

  // Field IPR_N3: IPR_N3
    inline uint32_t NVIC_IPR12_IPR_N3 (const uint32_t inValue) {return (inValue & 0xffU) << 24 ; }

//---  Register IPR13: Interrupt Priority Register
  #define NVIC_IPR13 (* ((volatile uint32_t *) (0xe000e100 + 820)))

  // Field IPR_N0: IPR_N0
    inline uint32_t NVIC_IPR13_IPR_N0 (const uint32_t inValue) {return (inValue & 0xffU) << 0 ; }

  // Field IPR_N1: IPR_N1
    inline uint32_t NVIC_IPR13_IPR_N1 (const uint32_t inValue) {return (inValue & 0xffU) << 8 ; }

  // Field IPR_N2: IPR_N2
    inline uint32_t NVIC_IPR13_IPR_N2 (const uint32_t inValue) {return (inValue & 0xffU) << 16 ; }

  // Field IPR_N3: IPR_N3
    inline uint32_t NVIC_IPR13_IPR_N3 (const uint32_t inValue) {return (inValue & 0xffU) << 24 ; }

//---  Register IPR14: Interrupt Priority Register
  #define NVIC_IPR14 (* ((volatile uint32_t *) (0xe000e100 + 824)))

  // Field IPR_N0: IPR_N0
    inline uint32_t NVIC_IPR14_IPR_N0 (const uint32_t inValue) {return (inValue & 0xffU) << 0 ; }

  // Field IPR_N1: IPR_N1
    inline uint32_t NVIC_IPR14_IPR_N1 (const uint32_t inValue) {return (inValue & 0xffU) << 8 ; }

  // Field IPR_N2: IPR_N2
    inline uint32_t NVIC_IPR14_IPR_N2 (const uint32_t inValue) {return (inValue & 0xffU) << 16 ; }

  // Field IPR_N3: IPR_N3
    inline uint32_t NVIC_IPR14_IPR_N3 (const uint32_t inValue) {return (inValue & 0xffU) << 24 ; }

//---  Register IPR15: Interrupt Priority Register
  #define NVIC_IPR15 (* ((volatile uint32_t *) (0xe000e100 + 828)))

  // Field IPR_N0: IPR_N0
    inline uint32_t NVIC_IPR15_IPR_N0 (const uint32_t inValue) {return (inValue & 0xffU) << 0 ; }

  // Field IPR_N1: IPR_N1
    inline uint32_t NVIC_IPR15_IPR_N1 (const uint32_t inValue) {return (inValue & 0xffU) << 8 ; }

  // Field IPR_N2: IPR_N2
    inline uint32_t NVIC_IPR15_IPR_N2 (const uint32_t inValue) {return (inValue & 0xffU) << 16 ; }

  // Field IPR_N3: IPR_N3
    inline uint32_t NVIC_IPR15_IPR_N3 (const uint32_t inValue) {return (inValue & 0xffU) << 24 ; }

//---  Register IPR16: Interrupt Priority Register
  #define NVIC_IPR16 (* ((volatile uint32_t *) (0xe000e100 + 832)))

  // Field IPR_N0: IPR_N0
    inline uint32_t NVIC_IPR16_IPR_N0 (const uint32_t inValue) {return (inValue & 0xffU) << 0 ; }

  // Field IPR_N1: IPR_N1
    inline uint32_t NVIC_IPR16_IPR_N1 (const uint32_t inValue) {return (inValue & 0xffU) << 8 ; }

  // Field IPR_N2: IPR_N2
    inline uint32_t NVIC_IPR16_IPR_N2 (const uint32_t inValue) {return (inValue & 0xffU) << 16 ; }

  // Field IPR_N3: IPR_N3
    inline uint32_t NVIC_IPR16_IPR_N3 (const uint32_t inValue) {return (inValue & 0xffU) << 24 ; }

//---  Register IPR17: Interrupt Priority Register
  #define NVIC_IPR17 (* ((volatile uint32_t *) (0xe000e100 + 836)))

  // Field IPR_N0: IPR_N0
    inline uint32_t NVIC_IPR17_IPR_N0 (const uint32_t inValue) {return (inValue & 0xffU) << 0 ; }

  // Field IPR_N1: IPR_N1
    inline uint32_t NVIC_IPR17_IPR_N1 (const uint32_t inValue) {return (inValue & 0xffU) << 8 ; }

  // Field IPR_N2: IPR_N2
    inline uint32_t NVIC_IPR17_IPR_N2 (const uint32_t inValue) {return (inValue & 0xffU) << 16 ; }

  // Field IPR_N3: IPR_N3
    inline uint32_t NVIC_IPR17_IPR_N3 (const uint32_t inValue) {return (inValue & 0xffU) << 24 ; }

//---  Register IPR18: Interrupt Priority Register
  #define NVIC_IPR18 (* ((volatile uint32_t *) (0xe000e100 + 840)))

  // Field IPR_N0: IPR_N0
    inline uint32_t NVIC_IPR18_IPR_N0 (const uint32_t inValue) {return (inValue & 0xffU) << 0 ; }

  // Field IPR_N1: IPR_N1
    inline uint32_t NVIC_IPR18_IPR_N1 (const uint32_t inValue) {return (inValue & 0xffU) << 8 ; }

  // Field IPR_N2: IPR_N2
    inline uint32_t NVIC_IPR18_IPR_N2 (const uint32_t inValue) {return (inValue & 0xffU) << 16 ; }

  // Field IPR_N3: IPR_N3
    inline uint32_t NVIC_IPR18_IPR_N3 (const uint32_t inValue) {return (inValue & 0xffU) << 24 ; }

//---  Register IPR19: Interrupt Priority Register
  #define NVIC_IPR19 (* ((volatile uint32_t *) (0xe000e100 + 844)))

  // Field IPR_N0: IPR_N0
    inline uint32_t NVIC_IPR19_IPR_N0 (const uint32_t inValue) {return (inValue & 0xffU) << 0 ; }

  // Field IPR_N1: IPR_N1
    inline uint32_t NVIC_IPR19_IPR_N1 (const uint32_t inValue) {return (inValue & 0xffU) << 8 ; }

  // Field IPR_N2: IPR_N2
    inline uint32_t NVIC_IPR19_IPR_N2 (const uint32_t inValue) {return (inValue & 0xffU) << 16 ; }

  // Field IPR_N3: IPR_N3
    inline uint32_t NVIC_IPR19_IPR_N3 (const uint32_t inValue) {return (inValue & 0xffU) << 24 ; }

//---  Register IPR20: Interrupt Priority Register
  #define NVIC_IPR20 (* ((volatile uint32_t *) (0xe000e100 + 848)))

  // Field IPR_N0: IPR_N0
    inline uint32_t NVIC_IPR20_IPR_N0 (const uint32_t inValue) {return (inValue & 0xffU) << 0 ; }

  // Field IPR_N1: IPR_N1
    inline uint32_t NVIC_IPR20_IPR_N1 (const uint32_t inValue) {return (inValue & 0xffU) << 8 ; }

  // Field IPR_N2: IPR_N2
    inline uint32_t NVIC_IPR20_IPR_N2 (const uint32_t inValue) {return (inValue & 0xffU) << 16 ; }

  // Field IPR_N3: IPR_N3
    inline uint32_t NVIC_IPR20_IPR_N3 (const uint32_t inValue) {return (inValue & 0xffU) << 24 ; }

//------------------------------------------------------------------------------
// Peripheral NVIC_STIR: Nested vectored interrupt       controller
//------------------------------------------------------------------------------

//---  Register STIR: Software trigger interrupt
          register
  #define NVIC_STIR_STIR (* ((volatile uint32_t *) (0xe000ef00 + 0)))

  // Field INTID: Software generated interrupt ID
    inline uint32_t NVIC_STIR_STIR_INTID (const uint32_t inValue) {return (inValue & 0x1ffU) << 0 ; }

//------------------------------------------------------------------------------
// Peripheral OPAMP: Operational amplifiers
//------------------------------------------------------------------------------

//---  Register OPAMP1_CSR: OPAMP1 control/status register
  #define OPAMP_OPAMP1_CSR (* ((volatile uint32_t *) (0x40007800 + 0)))

  // Field OPAEN: Operational amplifier Enable
    const uint32_t OPAMP_OPAMP1_CSR_OPAEN = 1U << 0 ;

  // Field OPALPM: Operational amplifier Low Power Mode
    const uint32_t OPAMP_OPAMP1_CSR_OPALPM = 1U << 1 ;

  // Field OPAMODE: Operational amplifier PGA mode
    inline uint32_t OPAMP_OPAMP1_CSR_OPAMODE (const uint32_t inValue) {return (inValue & 0x3U) << 2 ; }

  // Field PGA_GAIN: Operational amplifier Programmable amplifier gain value
    inline uint32_t OPAMP_OPAMP1_CSR_PGA_GAIN (const uint32_t inValue) {return (inValue & 0x3U) << 4 ; }

  // Field VM_SEL: Inverting input selection
    inline uint32_t OPAMP_OPAMP1_CSR_VM_SEL (const uint32_t inValue) {return (inValue & 0x3U) << 8 ; }

  // Field VP_SEL: Non inverted input selection
    const uint32_t OPAMP_OPAMP1_CSR_VP_SEL = 1U << 10 ;

  // Field CALON: Calibration mode enabled
    const uint32_t OPAMP_OPAMP1_CSR_CALON = 1U << 12 ;

  // Field CALSEL: Calibration selection
    const uint32_t OPAMP_OPAMP1_CSR_CALSEL = 1U << 13 ;

  // Field USERTRIM: allows to switch from AOP offset trimmed values to AOP offset
    const uint32_t OPAMP_OPAMP1_CSR_USERTRIM = 1U << 14 ;

  // Field CALOUT: Operational amplifier calibration output
    const uint32_t OPAMP_OPAMP1_CSR_CALOUT = 1U << 15 ;

  // Field OPA_RANGE: Operational amplifier power supply range for stability
    const uint32_t OPAMP_OPAMP1_CSR_OPA_RANGE = 1U << 31 ;

//---  Register OPAMP1_OTR: OPAMP1 offset trimming register in normal
          mode
  #define OPAMP_OPAMP1_OTR (* ((volatile uint32_t *) (0x40007800 + 4)))

  // Field TRIMOFFSETN: Trim for NMOS differential pairs
    inline uint32_t OPAMP_OPAMP1_OTR_TRIMOFFSETN (const uint32_t inValue) {return (inValue & 0x1fU) << 0 ; }

  // Field TRIMOFFSETP: Trim for PMOS differential pairs
    inline uint32_t OPAMP_OPAMP1_OTR_TRIMOFFSETP (const uint32_t inValue) {return (inValue & 0x1fU) << 8 ; }

//---  Register OPAMP1_LPOTR: OPAMP1 offset trimming register in low-power
          mode
  #define OPAMP_OPAMP1_LPOTR (* ((volatile uint32_t *) (0x40007800 + 8)))

  // Field TRIMLPOFFSETN: Trim for NMOS differential pairs
    inline uint32_t OPAMP_OPAMP1_LPOTR_TRIMLPOFFSETN (const uint32_t inValue) {return (inValue & 0x1fU) << 0 ; }

  // Field TRIMLPOFFSETP: Trim for PMOS differential pairs
    inline uint32_t OPAMP_OPAMP1_LPOTR_TRIMLPOFFSETP (const uint32_t inValue) {return (inValue & 0x1fU) << 8 ; }

//---  Register OPAMP2_CSR: OPAMP2 control/status register
  #define OPAMP_OPAMP2_CSR (* ((volatile uint32_t *) (0x40007800 + 16)))

  // Field OPAEN: Operational amplifier Enable
    const uint32_t OPAMP_OPAMP2_CSR_OPAEN = 1U << 0 ;

  // Field OPALPM: Operational amplifier Low Power Mode
    const uint32_t OPAMP_OPAMP2_CSR_OPALPM = 1U << 1 ;

  // Field OPAMODE: Operational amplifier PGA mode
    inline uint32_t OPAMP_OPAMP2_CSR_OPAMODE (const uint32_t inValue) {return (inValue & 0x3U) << 2 ; }

  // Field PGA_GAIN: Operational amplifier Programmable amplifier gain value
    inline uint32_t OPAMP_OPAMP2_CSR_PGA_GAIN (const uint32_t inValue) {return (inValue & 0x3U) << 4 ; }

  // Field VM_SEL: Inverting input selection
    inline uint32_t OPAMP_OPAMP2_CSR_VM_SEL (const uint32_t inValue) {return (inValue & 0x3U) << 8 ; }

  // Field VP_SEL: Non inverted input selection
    const uint32_t OPAMP_OPAMP2_CSR_VP_SEL = 1U << 10 ;

  // Field CALON: Calibration mode enabled
    const uint32_t OPAMP_OPAMP2_CSR_CALON = 1U << 12 ;

  // Field CALSEL: Calibration selection
    const uint32_t OPAMP_OPAMP2_CSR_CALSEL = 1U << 13 ;

  // Field USERTRIM: allows to switch from AOP offset trimmed values to AOP offset
    const uint32_t OPAMP_OPAMP2_CSR_USERTRIM = 1U << 14 ;

  // Field CALOUT: Operational amplifier calibration output
    const uint32_t OPAMP_OPAMP2_CSR_CALOUT = 1U << 15 ;

//---  Register OPAMP2_OTR: OPAMP2 offset trimming register in normal
          mode
  #define OPAMP_OPAMP2_OTR (* ((volatile uint32_t *) (0x40007800 + 20)))

  // Field TRIMOFFSETN: Trim for NMOS differential pairs
    inline uint32_t OPAMP_OPAMP2_OTR_TRIMOFFSETN (const uint32_t inValue) {return (inValue & 0x1fU) << 0 ; }

  // Field TRIMOFFSETP: Trim for PMOS differential pairs
    inline uint32_t OPAMP_OPAMP2_OTR_TRIMOFFSETP (const uint32_t inValue) {return (inValue & 0x1fU) << 8 ; }

//---  Register OPAMP2_LPOTR: OPAMP2 offset trimming register in low-power
          mode
  #define OPAMP_OPAMP2_LPOTR (* ((volatile uint32_t *) (0x40007800 + 24)))

  // Field TRIMLPOFFSETN: Trim for NMOS differential pairs
    inline uint32_t OPAMP_OPAMP2_LPOTR_TRIMLPOFFSETN (const uint32_t inValue) {return (inValue & 0x1fU) << 0 ; }

  // Field TRIMLPOFFSETP: Trim for PMOS differential pairs
    inline uint32_t OPAMP_OPAMP2_LPOTR_TRIMLPOFFSETP (const uint32_t inValue) {return (inValue & 0x1fU) << 8 ; }

//------------------------------------------------------------------------------
// Peripheral PWR: Power control
//------------------------------------------------------------------------------

//---  Register CR1: Power control register 1
  #define PWR_CR1 (* ((volatile uint32_t *) (0x40007000 + 0)))

  // Field LPR: Low-power run
    const uint32_t PWR_CR1_LPR = 1U << 14 ;

  // Field VOS: Voltage scaling range selection
    inline uint32_t PWR_CR1_VOS (const uint32_t inValue) {return (inValue & 0x3U) << 9 ; }

  // Field DBP: Disable backup domain write protection
    const uint32_t PWR_CR1_DBP = 1U << 8 ;

  // Field LPMS: Low-power mode selection
    inline uint32_t PWR_CR1_LPMS (const uint32_t inValue) {return (inValue & 0x7U) << 0 ; }

//---  Register CR2: Power control register 2
  #define PWR_CR2 (* ((volatile uint32_t *) (0x40007000 + 4)))

  // Field USV: VDDUSB USB supply valid
    const uint32_t PWR_CR2_USV = 1U << 10 ;

  // Field IOSV: VDDIO2 Independent I/Os supply valid
    const uint32_t PWR_CR2_IOSV = 1U << 9 ;

  // Field PVME4: Peripheral voltage monitoring 4 enable: VDDA vs. 2.2V
    const uint32_t PWR_CR2_PVME4 = 1U << 7 ;

  // Field PVME3: Peripheral voltage monitoring 3 enable: VDDA vs. 1.62V
    const uint32_t PWR_CR2_PVME3 = 1U << 6 ;

  // Field PVME2: Peripheral voltage monitoring 2 enable: VDDIO2 vs. 0.9V
    const uint32_t PWR_CR2_PVME2 = 1U << 5 ;

  // Field PVME1: Peripheral voltage monitoring 1 enable: VDDUSB vs. 1.2V
    const uint32_t PWR_CR2_PVME1 = 1U << 4 ;

  // Field PLS: Power voltage detector level selection
    inline uint32_t PWR_CR2_PLS (const uint32_t inValue) {return (inValue & 0x7U) << 1 ; }

  // Field PVDE: Power voltage detector enable
    const uint32_t PWR_CR2_PVDE = 1U << 0 ;

//---  Register CR3: Power control register 3
  #define PWR_CR3 (* ((volatile uint32_t *) (0x40007000 + 8)))

  // Field EWF: Enable internal wakeup line
    const uint32_t PWR_CR3_EWF = 1U << 15 ;

  // Field APC: Apply pull-up and pull-down configuration
    const uint32_t PWR_CR3_APC = 1U << 10 ;

  // Field RRS: SRAM2 retention in Standby mode
    const uint32_t PWR_CR3_RRS = 1U << 8 ;

  // Field EWUP5: Enable Wakeup pin WKUP5
    const uint32_t PWR_CR3_EWUP5 = 1U << 4 ;

  // Field EWUP4: Enable Wakeup pin WKUP4
    const uint32_t PWR_CR3_EWUP4 = 1U << 3 ;

  // Field EWUP3: Enable Wakeup pin WKUP3
    const uint32_t PWR_CR3_EWUP3 = 1U << 2 ;

  // Field EWUP2: Enable Wakeup pin WKUP2
    const uint32_t PWR_CR3_EWUP2 = 1U << 1 ;

  // Field EWUP1: Enable Wakeup pin WKUP1
    const uint32_t PWR_CR3_EWUP1 = 1U << 0 ;

//---  Register CR4: Power control register 4
  #define PWR_CR4 (* ((volatile uint32_t *) (0x40007000 + 12)))

  // Field VBRS: VBAT battery charging resistor selection
    const uint32_t PWR_CR4_VBRS = 1U << 9 ;

  // Field VBE: VBAT battery charging enable
    const uint32_t PWR_CR4_VBE = 1U << 8 ;

  // Field WP5: Wakeup pin WKUP5 polarity
    const uint32_t PWR_CR4_WP5 = 1U << 4 ;

  // Field WP4: Wakeup pin WKUP4 polarity
    const uint32_t PWR_CR4_WP4 = 1U << 3 ;

  // Field WP3: Wakeup pin WKUP3 polarity
    const uint32_t PWR_CR4_WP3 = 1U << 2 ;

  // Field WP2: Wakeup pin WKUP2 polarity
    const uint32_t PWR_CR4_WP2 = 1U << 1 ;

  // Field WP1: Wakeup pin WKUP1 polarity
    const uint32_t PWR_CR4_WP1 = 1U << 0 ;

//---  Register SR1: Power status register 1
  #define PWR_SR1 (* ((const volatile uint32_t *) (0x40007000 + 16)))

  // Field WUFI: Wakeup flag internal
    const uint32_t PWR_SR1_WUFI = 1U << 15 ;

  // Field CSBF: Standby flag
    const uint32_t PWR_SR1_CSBF = 1U << 8 ;

  // Field CWUF5: Wakeup flag 5
    const uint32_t PWR_SR1_CWUF5 = 1U << 4 ;

  // Field CWUF4: Wakeup flag 4
    const uint32_t PWR_SR1_CWUF4 = 1U << 3 ;

  // Field CWUF3: Wakeup flag 3
    const uint32_t PWR_SR1_CWUF3 = 1U << 2 ;

  // Field CWUF2: Wakeup flag 2
    const uint32_t PWR_SR1_CWUF2 = 1U << 1 ;

  // Field CWUF1: Wakeup flag 1
    const uint32_t PWR_SR1_CWUF1 = 1U << 0 ;

//---  Register SR2: Power status register 2
  #define PWR_SR2 (* ((const volatile uint32_t *) (0x40007000 + 20)))

  // Field PVMO4: Peripheral voltage monitoring output: VDDA vs. 2.2 V
    const uint32_t PWR_SR2_PVMO4 = 1U << 15 ;

  // Field PVMO3: Peripheral voltage monitoring output: VDDA vs. 1.62 V
    const uint32_t PWR_SR2_PVMO3 = 1U << 14 ;

  // Field PVMO2: Peripheral voltage monitoring output: VDDIO2 vs. 0.9 V
    const uint32_t PWR_SR2_PVMO2 = 1U << 13 ;

  // Field PVMO1: Peripheral voltage monitoring output: VDDUSB vs. 1.2 V
    const uint32_t PWR_SR2_PVMO1 = 1U << 12 ;

  // Field PVDO: Power voltage detector output
    const uint32_t PWR_SR2_PVDO = 1U << 11 ;

  // Field VOSF: Voltage scaling flag
    const uint32_t PWR_SR2_VOSF = 1U << 10 ;

  // Field REGLPF: Low-power regulator flag
    const uint32_t PWR_SR2_REGLPF = 1U << 9 ;

  // Field REGLPS: Low-power regulator started
    const uint32_t PWR_SR2_REGLPS = 1U << 8 ;

//---  Register SCR: Power status clear register
  #define PWR_SCR (* ((volatile uint32_t *) (0x40007000 + 24)))

  // Field SBF: Clear standby flag
    const uint32_t PWR_SCR_SBF = 1U << 8 ;

  // Field WUF5: Clear wakeup flag 5
    const uint32_t PWR_SCR_WUF5 = 1U << 4 ;

  // Field WUF4: Clear wakeup flag 4
    const uint32_t PWR_SCR_WUF4 = 1U << 3 ;

  // Field WUF3: Clear wakeup flag 3
    const uint32_t PWR_SCR_WUF3 = 1U << 2 ;

  // Field WUF2: Clear wakeup flag 2
    const uint32_t PWR_SCR_WUF2 = 1U << 1 ;

  // Field WUF1: Clear wakeup flag 1
    const uint32_t PWR_SCR_WUF1 = 1U << 0 ;

//---  Register PUCRA: Power Port A pull-up control
          register
  #define PWR_PUCRA (* ((volatile uint32_t *) (0x40007000 + 32)))

  // Field PU15: Port A pull-up bit y (y=0..15)
    const uint32_t PWR_PUCRA_PU15 = 1U << 15 ;

  // Field PU14: Port A pull-up bit y (y=0..15)
    const uint32_t PWR_PUCRA_PU14 = 1U << 14 ;

  // Field PU13: Port A pull-up bit y (y=0..15)
    const uint32_t PWR_PUCRA_PU13 = 1U << 13 ;

  // Field PU12: Port A pull-up bit y (y=0..15)
    const uint32_t PWR_PUCRA_PU12 = 1U << 12 ;

  // Field PU11: Port A pull-up bit y (y=0..15)
    const uint32_t PWR_PUCRA_PU11 = 1U << 11 ;

  // Field PU10: Port A pull-up bit y (y=0..15)
    const uint32_t PWR_PUCRA_PU10 = 1U << 10 ;

  // Field PU9: Port A pull-up bit y (y=0..15)
    const uint32_t PWR_PUCRA_PU9 = 1U << 9 ;

  // Field PU8: Port A pull-up bit y (y=0..15)
    const uint32_t PWR_PUCRA_PU8 = 1U << 8 ;

  // Field PU7: Port A pull-up bit y (y=0..15)
    const uint32_t PWR_PUCRA_PU7 = 1U << 7 ;

  // Field PU6: Port A pull-up bit y (y=0..15)
    const uint32_t PWR_PUCRA_PU6 = 1U << 6 ;

  // Field PU5: Port A pull-up bit y (y=0..15)
    const uint32_t PWR_PUCRA_PU5 = 1U << 5 ;

  // Field PU4: Port A pull-up bit y (y=0..15)
    const uint32_t PWR_PUCRA_PU4 = 1U << 4 ;

  // Field PU3: Port A pull-up bit y (y=0..15)
    const uint32_t PWR_PUCRA_PU3 = 1U << 3 ;

  // Field PU2: Port A pull-up bit y (y=0..15)
    const uint32_t PWR_PUCRA_PU2 = 1U << 2 ;

  // Field PU1: Port A pull-up bit y (y=0..15)
    const uint32_t PWR_PUCRA_PU1 = 1U << 1 ;

  // Field PU0: Port A pull-up bit y (y=0..15)
    const uint32_t PWR_PUCRA_PU0 = 1U << 0 ;

//---  Register PDCRA: Power Port A pull-down control
          register
  #define PWR_PDCRA (* ((volatile uint32_t *) (0x40007000 + 36)))

  // Field PD15: Port A pull-down bit y (y=0..15)
    const uint32_t PWR_PDCRA_PD15 = 1U << 15 ;

  // Field PD14: Port A pull-down bit y (y=0..15)
    const uint32_t PWR_PDCRA_PD14 = 1U << 14 ;

  // Field PD13: Port A pull-down bit y (y=0..15)
    const uint32_t PWR_PDCRA_PD13 = 1U << 13 ;

  // Field PD12: Port A pull-down bit y (y=0..15)
    const uint32_t PWR_PDCRA_PD12 = 1U << 12 ;

  // Field PD11: Port A pull-down bit y (y=0..15)
    const uint32_t PWR_PDCRA_PD11 = 1U << 11 ;

  // Field PD10: Port A pull-down bit y (y=0..15)
    const uint32_t PWR_PDCRA_PD10 = 1U << 10 ;

  // Field PD9: Port A pull-down bit y (y=0..15)
    const uint32_t PWR_PDCRA_PD9 = 1U << 9 ;

  // Field PD8: Port A pull-down bit y (y=0..15)
    const uint32_t PWR_PDCRA_PD8 = 1U << 8 ;

  // Field PD7: Port A pull-down bit y (y=0..15)
    const uint32_t PWR_PDCRA_PD7 = 1U << 7 ;

  // Field PD6: Port A pull-down bit y (y=0..15)
    const uint32_t PWR_PDCRA_PD6 = 1U << 6 ;

  // Field PD5: Port A pull-down bit y (y=0..15)
    const uint32_t PWR_PDCRA_PD5 = 1U << 5 ;

  // Field PD4: Port A pull-down bit y (y=0..15)
    const uint32_t PWR_PDCRA_PD4 = 1U << 4 ;

  // Field PD3: Port A pull-down bit y (y=0..15)
    const uint32_t PWR_PDCRA_PD3 = 1U << 3 ;

  // Field PD2: Port A pull-down bit y (y=0..15)
    const uint32_t PWR_PDCRA_PD2 = 1U << 2 ;

  // Field PD1: Port A pull-down bit y (y=0..15)
    const uint32_t PWR_PDCRA_PD1 = 1U << 1 ;

  // Field PD0: Port A pull-down bit y (y=0..15)
    const uint32_t PWR_PDCRA_PD0 = 1U << 0 ;

//---  Register PUCRB: Power Port B pull-up control
          register
  #define PWR_PUCRB (* ((volatile uint32_t *) (0x40007000 + 40)))

  // Field PU15: Port B pull-up bit y (y=0..15)
    const uint32_t PWR_PUCRB_PU15 = 1U << 15 ;

  // Field PU14: Port B pull-up bit y (y=0..15)
    const uint32_t PWR_PUCRB_PU14 = 1U << 14 ;

  // Field PU13: Port B pull-up bit y (y=0..15)
    const uint32_t PWR_PUCRB_PU13 = 1U << 13 ;

  // Field PU12: Port B pull-up bit y (y=0..15)
    const uint32_t PWR_PUCRB_PU12 = 1U << 12 ;

  // Field PU11: Port B pull-up bit y (y=0..15)
    const uint32_t PWR_PUCRB_PU11 = 1U << 11 ;

  // Field PU10: Port B pull-up bit y (y=0..15)
    const uint32_t PWR_PUCRB_PU10 = 1U << 10 ;

  // Field PU9: Port B pull-up bit y (y=0..15)
    const uint32_t PWR_PUCRB_PU9 = 1U << 9 ;

  // Field PU8: Port B pull-up bit y (y=0..15)
    const uint32_t PWR_PUCRB_PU8 = 1U << 8 ;

  // Field PU7: Port B pull-up bit y (y=0..15)
    const uint32_t PWR_PUCRB_PU7 = 1U << 7 ;

  // Field PU6: Port B pull-up bit y (y=0..15)
    const uint32_t PWR_PUCRB_PU6 = 1U << 6 ;

  // Field PU5: Port B pull-up bit y (y=0..15)
    const uint32_t PWR_PUCRB_PU5 = 1U << 5 ;

  // Field PU4: Port B pull-up bit y (y=0..15)
    const uint32_t PWR_PUCRB_PU4 = 1U << 4 ;

  // Field PU3: Port B pull-up bit y (y=0..15)
    const uint32_t PWR_PUCRB_PU3 = 1U << 3 ;

  // Field PU2: Port B pull-up bit y (y=0..15)
    const uint32_t PWR_PUCRB_PU2 = 1U << 2 ;

  // Field PU1: Port B pull-up bit y (y=0..15)
    const uint32_t PWR_PUCRB_PU1 = 1U << 1 ;

  // Field PU0: Port B pull-up bit y (y=0..15)
    const uint32_t PWR_PUCRB_PU0 = 1U << 0 ;

//---  Register PDCRB: Power Port B pull-down control
          register
  #define PWR_PDCRB (* ((volatile uint32_t *) (0x40007000 + 44)))

  // Field PD15: Port B pull-down bit y (y=0..15)
    const uint32_t PWR_PDCRB_PD15 = 1U << 15 ;

  // Field PD14: Port B pull-down bit y (y=0..15)
    const uint32_t PWR_PDCRB_PD14 = 1U << 14 ;

  // Field PD13: Port B pull-down bit y (y=0..15)
    const uint32_t PWR_PDCRB_PD13 = 1U << 13 ;

  // Field PD12: Port B pull-down bit y (y=0..15)
    const uint32_t PWR_PDCRB_PD12 = 1U << 12 ;

  // Field PD11: Port B pull-down bit y (y=0..15)
    const uint32_t PWR_PDCRB_PD11 = 1U << 11 ;

  // Field PD10: Port B pull-down bit y (y=0..15)
    const uint32_t PWR_PDCRB_PD10 = 1U << 10 ;

  // Field PD9: Port B pull-down bit y (y=0..15)
    const uint32_t PWR_PDCRB_PD9 = 1U << 9 ;

  // Field PD8: Port B pull-down bit y (y=0..15)
    const uint32_t PWR_PDCRB_PD8 = 1U << 8 ;

  // Field PD7: Port B pull-down bit y (y=0..15)
    const uint32_t PWR_PDCRB_PD7 = 1U << 7 ;

  // Field PD6: Port B pull-down bit y (y=0..15)
    const uint32_t PWR_PDCRB_PD6 = 1U << 6 ;

  // Field PD5: Port B pull-down bit y (y=0..15)
    const uint32_t PWR_PDCRB_PD5 = 1U << 5 ;

  // Field PD4: Port B pull-down bit y (y=0..15)
    const uint32_t PWR_PDCRB_PD4 = 1U << 4 ;

  // Field PD3: Port B pull-down bit y (y=0..15)
    const uint32_t PWR_PDCRB_PD3 = 1U << 3 ;

  // Field PD2: Port B pull-down bit y (y=0..15)
    const uint32_t PWR_PDCRB_PD2 = 1U << 2 ;

  // Field PD1: Port B pull-down bit y (y=0..15)
    const uint32_t PWR_PDCRB_PD1 = 1U << 1 ;

  // Field PD0: Port B pull-down bit y (y=0..15)
    const uint32_t PWR_PDCRB_PD0 = 1U << 0 ;

//---  Register PUCRC: Power Port C pull-up control
          register
  #define PWR_PUCRC (* ((volatile uint32_t *) (0x40007000 + 48)))

  // Field PU15: Port C pull-up bit y (y=0..15)
    const uint32_t PWR_PUCRC_PU15 = 1U << 15 ;

  // Field PU14: Port C pull-up bit y (y=0..15)
    const uint32_t PWR_PUCRC_PU14 = 1U << 14 ;

  // Field PU13: Port C pull-up bit y (y=0..15)
    const uint32_t PWR_PUCRC_PU13 = 1U << 13 ;

  // Field PU12: Port C pull-up bit y (y=0..15)
    const uint32_t PWR_PUCRC_PU12 = 1U << 12 ;

  // Field PU11: Port C pull-up bit y (y=0..15)
    const uint32_t PWR_PUCRC_PU11 = 1U << 11 ;

  // Field PU10: Port C pull-up bit y (y=0..15)
    const uint32_t PWR_PUCRC_PU10 = 1U << 10 ;

  // Field PU9: Port C pull-up bit y (y=0..15)
    const uint32_t PWR_PUCRC_PU9 = 1U << 9 ;

  // Field PU8: Port C pull-up bit y (y=0..15)
    const uint32_t PWR_PUCRC_PU8 = 1U << 8 ;

  // Field PU7: Port C pull-up bit y (y=0..15)
    const uint32_t PWR_PUCRC_PU7 = 1U << 7 ;

  // Field PU6: Port C pull-up bit y (y=0..15)
    const uint32_t PWR_PUCRC_PU6 = 1U << 6 ;

  // Field PU5: Port C pull-up bit y (y=0..15)
    const uint32_t PWR_PUCRC_PU5 = 1U << 5 ;

  // Field PU4: Port C pull-up bit y (y=0..15)
    const uint32_t PWR_PUCRC_PU4 = 1U << 4 ;

  // Field PU3: Port C pull-up bit y (y=0..15)
    const uint32_t PWR_PUCRC_PU3 = 1U << 3 ;

  // Field PU2: Port C pull-up bit y (y=0..15)
    const uint32_t PWR_PUCRC_PU2 = 1U << 2 ;

  // Field PU1: Port C pull-up bit y (y=0..15)
    const uint32_t PWR_PUCRC_PU1 = 1U << 1 ;

  // Field PU0: Port C pull-up bit y (y=0..15)
    const uint32_t PWR_PUCRC_PU0 = 1U << 0 ;

//---  Register PDCRC: Power Port C pull-down control
          register
  #define PWR_PDCRC (* ((volatile uint32_t *) (0x40007000 + 52)))

  // Field PD15: Port C pull-down bit y (y=0..15)
    const uint32_t PWR_PDCRC_PD15 = 1U << 15 ;

  // Field PD14: Port C pull-down bit y (y=0..15)
    const uint32_t PWR_PDCRC_PD14 = 1U << 14 ;

  // Field PD13: Port C pull-down bit y (y=0..15)
    const uint32_t PWR_PDCRC_PD13 = 1U << 13 ;

  // Field PD12: Port C pull-down bit y (y=0..15)
    const uint32_t PWR_PDCRC_PD12 = 1U << 12 ;

  // Field PD11: Port C pull-down bit y (y=0..15)
    const uint32_t PWR_PDCRC_PD11 = 1U << 11 ;

  // Field PD10: Port C pull-down bit y (y=0..15)
    const uint32_t PWR_PDCRC_PD10 = 1U << 10 ;

  // Field PD9: Port C pull-down bit y (y=0..15)
    const uint32_t PWR_PDCRC_PD9 = 1U << 9 ;

  // Field PD8: Port C pull-down bit y (y=0..15)
    const uint32_t PWR_PDCRC_PD8 = 1U << 8 ;

  // Field PD7: Port C pull-down bit y (y=0..15)
    const uint32_t PWR_PDCRC_PD7 = 1U << 7 ;

  // Field PD6: Port C pull-down bit y (y=0..15)
    const uint32_t PWR_PDCRC_PD6 = 1U << 6 ;

  // Field PD5: Port C pull-down bit y (y=0..15)
    const uint32_t PWR_PDCRC_PD5 = 1U << 5 ;

  // Field PD4: Port C pull-down bit y (y=0..15)
    const uint32_t PWR_PDCRC_PD4 = 1U << 4 ;

  // Field PD3: Port C pull-down bit y (y=0..15)
    const uint32_t PWR_PDCRC_PD3 = 1U << 3 ;

  // Field PD2: Port C pull-down bit y (y=0..15)
    const uint32_t PWR_PDCRC_PD2 = 1U << 2 ;

  // Field PD1: Port C pull-down bit y (y=0..15)
    const uint32_t PWR_PDCRC_PD1 = 1U << 1 ;

  // Field PD0: Port C pull-down bit y (y=0..15)
    const uint32_t PWR_PDCRC_PD0 = 1U << 0 ;

//---  Register PUCRD: Power Port D pull-up control
          register
  #define PWR_PUCRD (* ((volatile uint32_t *) (0x40007000 + 56)))

  // Field PU15: Port D pull-up bit y (y=0..15)
    const uint32_t PWR_PUCRD_PU15 = 1U << 15 ;

  // Field PU14: Port D pull-up bit y (y=0..15)
    const uint32_t PWR_PUCRD_PU14 = 1U << 14 ;

  // Field PU13: Port D pull-up bit y (y=0..15)
    const uint32_t PWR_PUCRD_PU13 = 1U << 13 ;

  // Field PU12: Port D pull-up bit y (y=0..15)
    const uint32_t PWR_PUCRD_PU12 = 1U << 12 ;

  // Field PU11: Port D pull-up bit y (y=0..15)
    const uint32_t PWR_PUCRD_PU11 = 1U << 11 ;

  // Field PU10: Port D pull-up bit y (y=0..15)
    const uint32_t PWR_PUCRD_PU10 = 1U << 10 ;

  // Field PU9: Port D pull-up bit y (y=0..15)
    const uint32_t PWR_PUCRD_PU9 = 1U << 9 ;

  // Field PU8: Port D pull-up bit y (y=0..15)
    const uint32_t PWR_PUCRD_PU8 = 1U << 8 ;

  // Field PU7: Port D pull-up bit y (y=0..15)
    const uint32_t PWR_PUCRD_PU7 = 1U << 7 ;

  // Field PU6: Port D pull-up bit y (y=0..15)
    const uint32_t PWR_PUCRD_PU6 = 1U << 6 ;

  // Field PU5: Port D pull-up bit y (y=0..15)
    const uint32_t PWR_PUCRD_PU5 = 1U << 5 ;

  // Field PU4: Port D pull-up bit y (y=0..15)
    const uint32_t PWR_PUCRD_PU4 = 1U << 4 ;

  // Field PU3: Port D pull-up bit y (y=0..15)
    const uint32_t PWR_PUCRD_PU3 = 1U << 3 ;

  // Field PU2: Port D pull-up bit y (y=0..15)
    const uint32_t PWR_PUCRD_PU2 = 1U << 2 ;

  // Field PU1: Port D pull-up bit y (y=0..15)
    const uint32_t PWR_PUCRD_PU1 = 1U << 1 ;

  // Field PU0: Port D pull-up bit y (y=0..15)
    const uint32_t PWR_PUCRD_PU0 = 1U << 0 ;

//---  Register PDCRD: Power Port D pull-down control
          register
  #define PWR_PDCRD (* ((volatile uint32_t *) (0x40007000 + 60)))

  // Field PD15: Port D pull-down bit y (y=0..15)
    const uint32_t PWR_PDCRD_PD15 = 1U << 15 ;

  // Field PD14: Port D pull-down bit y (y=0..15)
    const uint32_t PWR_PDCRD_PD14 = 1U << 14 ;

  // Field PD13: Port D pull-down bit y (y=0..15)
    const uint32_t PWR_PDCRD_PD13 = 1U << 13 ;

  // Field PD12: Port D pull-down bit y (y=0..15)
    const uint32_t PWR_PDCRD_PD12 = 1U << 12 ;

  // Field PD11: Port D pull-down bit y (y=0..15)
    const uint32_t PWR_PDCRD_PD11 = 1U << 11 ;

  // Field PD10: Port D pull-down bit y (y=0..15)
    const uint32_t PWR_PDCRD_PD10 = 1U << 10 ;

  // Field PD9: Port D pull-down bit y (y=0..15)
    const uint32_t PWR_PDCRD_PD9 = 1U << 9 ;

  // Field PD8: Port D pull-down bit y (y=0..15)
    const uint32_t PWR_PDCRD_PD8 = 1U << 8 ;

  // Field PD7: Port D pull-down bit y (y=0..15)
    const uint32_t PWR_PDCRD_PD7 = 1U << 7 ;

  // Field PD6: Port D pull-down bit y (y=0..15)
    const uint32_t PWR_PDCRD_PD6 = 1U << 6 ;

  // Field PD5: Port D pull-down bit y (y=0..15)
    const uint32_t PWR_PDCRD_PD5 = 1U << 5 ;

  // Field PD4: Port D pull-down bit y (y=0..15)
    const uint32_t PWR_PDCRD_PD4 = 1U << 4 ;

  // Field PD3: Port D pull-down bit y (y=0..15)
    const uint32_t PWR_PDCRD_PD3 = 1U << 3 ;

  // Field PD2: Port D pull-down bit y (y=0..15)
    const uint32_t PWR_PDCRD_PD2 = 1U << 2 ;

  // Field PD1: Port D pull-down bit y (y=0..15)
    const uint32_t PWR_PDCRD_PD1 = 1U << 1 ;

  // Field PD0: Port D pull-down bit y (y=0..15)
    const uint32_t PWR_PDCRD_PD0 = 1U << 0 ;

//---  Register PUCRE: Power Port E pull-up control
          register
  #define PWR_PUCRE (* ((volatile uint32_t *) (0x40007000 + 64)))

  // Field PU15: Port E pull-up bit y (y=0..15)
    const uint32_t PWR_PUCRE_PU15 = 1U << 15 ;

  // Field PU14: Port E pull-up bit y (y=0..15)
    const uint32_t PWR_PUCRE_PU14 = 1U << 14 ;

  // Field PU13: Port E pull-up bit y (y=0..15)
    const uint32_t PWR_PUCRE_PU13 = 1U << 13 ;

  // Field PU12: Port E pull-up bit y (y=0..15)
    const uint32_t PWR_PUCRE_PU12 = 1U << 12 ;

  // Field PU11: Port E pull-up bit y (y=0..15)
    const uint32_t PWR_PUCRE_PU11 = 1U << 11 ;

  // Field PU10: Port E pull-up bit y (y=0..15)
    const uint32_t PWR_PUCRE_PU10 = 1U << 10 ;

  // Field PU9: Port E pull-up bit y (y=0..15)
    const uint32_t PWR_PUCRE_PU9 = 1U << 9 ;

  // Field PU8: Port E pull-up bit y (y=0..15)
    const uint32_t PWR_PUCRE_PU8 = 1U << 8 ;

  // Field PU7: Port E pull-up bit y (y=0..15)
    const uint32_t PWR_PUCRE_PU7 = 1U << 7 ;

  // Field PU6: Port E pull-up bit y (y=0..15)
    const uint32_t PWR_PUCRE_PU6 = 1U << 6 ;

  // Field PU5: Port E pull-up bit y (y=0..15)
    const uint32_t PWR_PUCRE_PU5 = 1U << 5 ;

  // Field PU4: Port E pull-up bit y (y=0..15)
    const uint32_t PWR_PUCRE_PU4 = 1U << 4 ;

  // Field PU3: Port E pull-up bit y (y=0..15)
    const uint32_t PWR_PUCRE_PU3 = 1U << 3 ;

  // Field PU2: Port E pull-up bit y (y=0..15)
    const uint32_t PWR_PUCRE_PU2 = 1U << 2 ;

  // Field PU1: Port E pull-up bit y (y=0..15)
    const uint32_t PWR_PUCRE_PU1 = 1U << 1 ;

  // Field PU0: Port E pull-up bit y (y=0..15)
    const uint32_t PWR_PUCRE_PU0 = 1U << 0 ;

//---  Register PDCRE: Power Port E pull-down control
          register
  #define PWR_PDCRE (* ((volatile uint32_t *) (0x40007000 + 68)))

  // Field PD15: Port E pull-down bit y (y=0..15)
    const uint32_t PWR_PDCRE_PD15 = 1U << 15 ;

  // Field PD14: Port E pull-down bit y (y=0..15)
    const uint32_t PWR_PDCRE_PD14 = 1U << 14 ;

  // Field PD13: Port E pull-down bit y (y=0..15)
    const uint32_t PWR_PDCRE_PD13 = 1U << 13 ;

  // Field PD12: Port E pull-down bit y (y=0..15)
    const uint32_t PWR_PDCRE_PD12 = 1U << 12 ;

  // Field PD11: Port E pull-down bit y (y=0..15)
    const uint32_t PWR_PDCRE_PD11 = 1U << 11 ;

  // Field PD10: Port E pull-down bit y (y=0..15)
    const uint32_t PWR_PDCRE_PD10 = 1U << 10 ;

  // Field PD9: Port E pull-down bit y (y=0..15)
    const uint32_t PWR_PDCRE_PD9 = 1U << 9 ;

  // Field PD8: Port E pull-down bit y (y=0..15)
    const uint32_t PWR_PDCRE_PD8 = 1U << 8 ;

  // Field PD7: Port E pull-down bit y (y=0..15)
    const uint32_t PWR_PDCRE_PD7 = 1U << 7 ;

  // Field PD6: Port E pull-down bit y (y=0..15)
    const uint32_t PWR_PDCRE_PD6 = 1U << 6 ;

  // Field PD5: Port E pull-down bit y (y=0..15)
    const uint32_t PWR_PDCRE_PD5 = 1U << 5 ;

  // Field PD4: Port E pull-down bit y (y=0..15)
    const uint32_t PWR_PDCRE_PD4 = 1U << 4 ;

  // Field PD3: Port E pull-down bit y (y=0..15)
    const uint32_t PWR_PDCRE_PD3 = 1U << 3 ;

  // Field PD2: Port E pull-down bit y (y=0..15)
    const uint32_t PWR_PDCRE_PD2 = 1U << 2 ;

  // Field PD1: Port E pull-down bit y (y=0..15)
    const uint32_t PWR_PDCRE_PD1 = 1U << 1 ;

  // Field PD0: Port E pull-down bit y (y=0..15)
    const uint32_t PWR_PDCRE_PD0 = 1U << 0 ;

//---  Register PUCRF: Power Port F pull-up control
          register
  #define PWR_PUCRF (* ((volatile uint32_t *) (0x40007000 + 72)))

  // Field PU15: Port F pull-up bit y (y=0..15)
    const uint32_t PWR_PUCRF_PU15 = 1U << 15 ;

  // Field PU14: Port F pull-up bit y (y=0..15)
    const uint32_t PWR_PUCRF_PU14 = 1U << 14 ;

  // Field PU13: Port F pull-up bit y (y=0..15)
    const uint32_t PWR_PUCRF_PU13 = 1U << 13 ;

  // Field PU12: Port F pull-up bit y (y=0..15)
    const uint32_t PWR_PUCRF_PU12 = 1U << 12 ;

  // Field PU11: Port F pull-up bit y (y=0..15)
    const uint32_t PWR_PUCRF_PU11 = 1U << 11 ;

  // Field PU10: Port F pull-up bit y (y=0..15)
    const uint32_t PWR_PUCRF_PU10 = 1U << 10 ;

  // Field PU9: Port F pull-up bit y (y=0..15)
    const uint32_t PWR_PUCRF_PU9 = 1U << 9 ;

  // Field PU8: Port F pull-up bit y (y=0..15)
    const uint32_t PWR_PUCRF_PU8 = 1U << 8 ;

  // Field PU7: Port F pull-up bit y (y=0..15)
    const uint32_t PWR_PUCRF_PU7 = 1U << 7 ;

  // Field PU6: Port F pull-up bit y (y=0..15)
    const uint32_t PWR_PUCRF_PU6 = 1U << 6 ;

  // Field PU5: Port F pull-up bit y (y=0..15)
    const uint32_t PWR_PUCRF_PU5 = 1U << 5 ;

  // Field PU4: Port F pull-up bit y (y=0..15)
    const uint32_t PWR_PUCRF_PU4 = 1U << 4 ;

  // Field PU3: Port F pull-up bit y (y=0..15)
    const uint32_t PWR_PUCRF_PU3 = 1U << 3 ;

  // Field PU2: Port F pull-up bit y (y=0..15)
    const uint32_t PWR_PUCRF_PU2 = 1U << 2 ;

  // Field PU1: Port F pull-up bit y (y=0..15)
    const uint32_t PWR_PUCRF_PU1 = 1U << 1 ;

  // Field PU0: Port F pull-up bit y (y=0..15)
    const uint32_t PWR_PUCRF_PU0 = 1U << 0 ;

//---  Register PDCRF: Power Port F pull-down control
          register
  #define PWR_PDCRF (* ((volatile uint32_t *) (0x40007000 + 76)))

  // Field PD15: Port F pull-down bit y (y=0..15)
    const uint32_t PWR_PDCRF_PD15 = 1U << 15 ;

  // Field PD14: Port F pull-down bit y (y=0..15)
    const uint32_t PWR_PDCRF_PD14 = 1U << 14 ;

  // Field PD13: Port F pull-down bit y (y=0..15)
    const uint32_t PWR_PDCRF_PD13 = 1U << 13 ;

  // Field PD12: Port F pull-down bit y (y=0..15)
    const uint32_t PWR_PDCRF_PD12 = 1U << 12 ;

  // Field PD11: Port F pull-down bit y (y=0..15)
    const uint32_t PWR_PDCRF_PD11 = 1U << 11 ;

  // Field PD10: Port F pull-down bit y (y=0..15)
    const uint32_t PWR_PDCRF_PD10 = 1U << 10 ;

  // Field PD9: Port F pull-down bit y (y=0..15)
    const uint32_t PWR_PDCRF_PD9 = 1U << 9 ;

  // Field PD8: Port F pull-down bit y (y=0..15)
    const uint32_t PWR_PDCRF_PD8 = 1U << 8 ;

  // Field PD7: Port F pull-down bit y (y=0..15)
    const uint32_t PWR_PDCRF_PD7 = 1U << 7 ;

  // Field PD6: Port F pull-down bit y (y=0..15)
    const uint32_t PWR_PDCRF_PD6 = 1U << 6 ;

  // Field PD5: Port F pull-down bit y (y=0..15)
    const uint32_t PWR_PDCRF_PD5 = 1U << 5 ;

  // Field PD4: Port F pull-down bit y (y=0..15)
    const uint32_t PWR_PDCRF_PD4 = 1U << 4 ;

  // Field PD3: Port F pull-down bit y (y=0..15)
    const uint32_t PWR_PDCRF_PD3 = 1U << 3 ;

  // Field PD2: Port F pull-down bit y (y=0..15)
    const uint32_t PWR_PDCRF_PD2 = 1U << 2 ;

  // Field PD1: Port F pull-down bit y (y=0..15)
    const uint32_t PWR_PDCRF_PD1 = 1U << 1 ;

  // Field PD0: Port F pull-down bit y (y=0..15)
    const uint32_t PWR_PDCRF_PD0 = 1U << 0 ;

//---  Register PUCRG: Power Port G pull-up control
          register
  #define PWR_PUCRG (* ((volatile uint32_t *) (0x40007000 + 80)))

  // Field PU15: Port G pull-up bit y (y=0..15)
    const uint32_t PWR_PUCRG_PU15 = 1U << 15 ;

  // Field PU14: Port G pull-up bit y (y=0..15)
    const uint32_t PWR_PUCRG_PU14 = 1U << 14 ;

  // Field PU13: Port G pull-up bit y (y=0..15)
    const uint32_t PWR_PUCRG_PU13 = 1U << 13 ;

  // Field PU12: Port G pull-up bit y (y=0..15)
    const uint32_t PWR_PUCRG_PU12 = 1U << 12 ;

  // Field PU11: Port G pull-up bit y (y=0..15)
    const uint32_t PWR_PUCRG_PU11 = 1U << 11 ;

  // Field PU10: Port G pull-up bit y (y=0..15)
    const uint32_t PWR_PUCRG_PU10 = 1U << 10 ;

  // Field PU9: Port G pull-up bit y (y=0..15)
    const uint32_t PWR_PUCRG_PU9 = 1U << 9 ;

  // Field PU8: Port G pull-up bit y (y=0..15)
    const uint32_t PWR_PUCRG_PU8 = 1U << 8 ;

  // Field PU7: Port G pull-up bit y (y=0..15)
    const uint32_t PWR_PUCRG_PU7 = 1U << 7 ;

  // Field PU6: Port G pull-up bit y (y=0..15)
    const uint32_t PWR_PUCRG_PU6 = 1U << 6 ;

  // Field PU5: Port G pull-up bit y (y=0..15)
    const uint32_t PWR_PUCRG_PU5 = 1U << 5 ;

  // Field PU4: Port G pull-up bit y (y=0..15)
    const uint32_t PWR_PUCRG_PU4 = 1U << 4 ;

  // Field PU3: Port G pull-up bit y (y=0..15)
    const uint32_t PWR_PUCRG_PU3 = 1U << 3 ;

  // Field PU2: Port G pull-up bit y (y=0..15)
    const uint32_t PWR_PUCRG_PU2 = 1U << 2 ;

  // Field PU1: Port G pull-up bit y (y=0..15)
    const uint32_t PWR_PUCRG_PU1 = 1U << 1 ;

  // Field PU0: Port G pull-up bit y (y=0..15)
    const uint32_t PWR_PUCRG_PU0 = 1U << 0 ;

//---  Register PDCRG: Power Port G pull-down control
          register
  #define PWR_PDCRG (* ((volatile uint32_t *) (0x40007000 + 84)))

  // Field PD15: Port G pull-down bit y (y=0..15)
    const uint32_t PWR_PDCRG_PD15 = 1U << 15 ;

  // Field PD14: Port G pull-down bit y (y=0..15)
    const uint32_t PWR_PDCRG_PD14 = 1U << 14 ;

  // Field PD13: Port G pull-down bit y (y=0..15)
    const uint32_t PWR_PDCRG_PD13 = 1U << 13 ;

  // Field PD12: Port G pull-down bit y (y=0..15)
    const uint32_t PWR_PDCRG_PD12 = 1U << 12 ;

  // Field PD11: Port G pull-down bit y (y=0..15)
    const uint32_t PWR_PDCRG_PD11 = 1U << 11 ;

  // Field PD10: Port G pull-down bit y (y=0..15)
    const uint32_t PWR_PDCRG_PD10 = 1U << 10 ;

  // Field PD9: Port G pull-down bit y (y=0..15)
    const uint32_t PWR_PDCRG_PD9 = 1U << 9 ;

  // Field PD8: Port G pull-down bit y (y=0..15)
    const uint32_t PWR_PDCRG_PD8 = 1U << 8 ;

  // Field PD7: Port G pull-down bit y (y=0..15)
    const uint32_t PWR_PDCRG_PD7 = 1U << 7 ;

  // Field PD6: Port G pull-down bit y (y=0..15)
    const uint32_t PWR_PDCRG_PD6 = 1U << 6 ;

  // Field PD5: Port G pull-down bit y (y=0..15)
    const uint32_t PWR_PDCRG_PD5 = 1U << 5 ;

  // Field PD4: Port G pull-down bit y (y=0..15)
    const uint32_t PWR_PDCRG_PD4 = 1U << 4 ;

  // Field PD3: Port G pull-down bit y (y=0..15)
    const uint32_t PWR_PDCRG_PD3 = 1U << 3 ;

  // Field PD2: Port G pull-down bit y (y=0..15)
    const uint32_t PWR_PDCRG_PD2 = 1U << 2 ;

  // Field PD1: Port G pull-down bit y (y=0..15)
    const uint32_t PWR_PDCRG_PD1 = 1U << 1 ;

  // Field PD0: Port G pull-down bit y (y=0..15)
    const uint32_t PWR_PDCRG_PD0 = 1U << 0 ;

//---  Register PUCRH: Power Port H pull-up control
          register
  #define PWR_PUCRH (* ((volatile uint32_t *) (0x40007000 + 88)))

  // Field PU1: Port H pull-up bit y (y=0..1)
    const uint32_t PWR_PUCRH_PU1 = 1U << 1 ;

  // Field PU0: Port H pull-up bit y (y=0..1)
    const uint32_t PWR_PUCRH_PU0 = 1U << 0 ;

//---  Register PDCRH: Power Port H pull-down control
          register
  #define PWR_PDCRH (* ((volatile uint32_t *) (0x40007000 + 92)))

  // Field PD1: Port H pull-down bit y (y=0..1)
    const uint32_t PWR_PDCRH_PD1 = 1U << 1 ;

  // Field PD0: Port H pull-down bit y (y=0..1)
    const uint32_t PWR_PDCRH_PD0 = 1U << 0 ;

//------------------------------------------------------------------------------
// Peripheral QUADSPI: QuadSPI interface
//------------------------------------------------------------------------------

//---  Register CR: control register
  #define QUADSPI_CR (* ((volatile uint32_t *) (0xa0001000 + 0)))

  // Field PRESCALER: Clock prescaler
    inline uint32_t QUADSPI_CR_PRESCALER (const uint32_t inValue) {return (inValue & 0xffU) << 24 ; }

  // Field PMM: Polling match mode
    const uint32_t QUADSPI_CR_PMM = 1U << 23 ;

  // Field APMS: Automatic poll mode stop
    const uint32_t QUADSPI_CR_APMS = 1U << 22 ;

  // Field TOIE: TimeOut interrupt enable
    const uint32_t QUADSPI_CR_TOIE = 1U << 20 ;

  // Field SMIE: Status match interrupt enable
    const uint32_t QUADSPI_CR_SMIE = 1U << 19 ;

  // Field FTIE: FIFO threshold interrupt enable
    const uint32_t QUADSPI_CR_FTIE = 1U << 18 ;

  // Field TCIE: Transfer complete interrupt enable
    const uint32_t QUADSPI_CR_TCIE = 1U << 17 ;

  // Field TEIE: Transfer error interrupt enable
    const uint32_t QUADSPI_CR_TEIE = 1U << 16 ;

  // Field FTHRES: IFO threshold level
    inline uint32_t QUADSPI_CR_FTHRES (const uint32_t inValue) {return (inValue & 0x1fU) << 8 ; }

  // Field FSEL: FLASH memory selection
    const uint32_t QUADSPI_CR_FSEL = 1U << 7 ;

  // Field DFM: Dual-flash mode
    const uint32_t QUADSPI_CR_DFM = 1U << 6 ;

  // Field SSHIFT: Sample shift
    const uint32_t QUADSPI_CR_SSHIFT = 1U << 4 ;

  // Field TCEN: Timeout counter enable
    const uint32_t QUADSPI_CR_TCEN = 1U << 3 ;

  // Field DMAEN: DMA enable
    const uint32_t QUADSPI_CR_DMAEN = 1U << 2 ;

  // Field ABORT: Abort request
    const uint32_t QUADSPI_CR_ABORT = 1U << 1 ;

  // Field EN: Enable
    const uint32_t QUADSPI_CR_EN = 1U << 0 ;

//---  Register DCR: device configuration register
  #define QUADSPI_DCR (* ((volatile uint32_t *) (0xa0001000 + 4)))

  // Field FSIZE: FLASH memory size
    inline uint32_t QUADSPI_DCR_FSIZE (const uint32_t inValue) {return (inValue & 0x1fU) << 16 ; }

  // Field CSHT: Chip select high time
    inline uint32_t QUADSPI_DCR_CSHT (const uint32_t inValue) {return (inValue & 0x7U) << 8 ; }

  // Field CKMODE: Mode 0 / mode 3
    const uint32_t QUADSPI_DCR_CKMODE = 1U << 0 ;

//---  Register SR: status register
  #define QUADSPI_SR (* ((const volatile uint32_t *) (0xa0001000 + 8)))

  // Field FLEVEL: FIFO level
    inline uint32_t QUADSPI_SR_FLEVEL (const uint32_t inValue) {return (inValue & 0x7fU) << 8 ; }

  // Field BUSY: Busy
    const uint32_t QUADSPI_SR_BUSY = 1U << 5 ;

  // Field TOF: Timeout flag
    const uint32_t QUADSPI_SR_TOF = 1U << 4 ;

  // Field SMF: Status match flag
    const uint32_t QUADSPI_SR_SMF = 1U << 3 ;

  // Field FTF: FIFO threshold flag
    const uint32_t QUADSPI_SR_FTF = 1U << 2 ;

  // Field TCF: Transfer complete flag
    const uint32_t QUADSPI_SR_TCF = 1U << 1 ;

  // Field TEF: Transfer error flag
    const uint32_t QUADSPI_SR_TEF = 1U << 0 ;

//---  Register FCR: flag clear register
  #define QUADSPI_FCR (* ((volatile uint32_t *) (0xa0001000 + 12)))

  // Field CTOF: Clear timeout flag
    const uint32_t QUADSPI_FCR_CTOF = 1U << 4 ;

  // Field CSMF: Clear status match flag
    const uint32_t QUADSPI_FCR_CSMF = 1U << 3 ;

  // Field CTCF: Clear transfer complete flag
    const uint32_t QUADSPI_FCR_CTCF = 1U << 1 ;

  // Field CTEF: Clear transfer error flag
    const uint32_t QUADSPI_FCR_CTEF = 1U << 0 ;

//---  Register DLR: data length register
  #define QUADSPI_DLR (* ((volatile uint32_t *) (0xa0001000 + 16)))

  // Field DL: Data length
    inline uint32_t QUADSPI_DLR_DL (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register CCR: communication configuration
          register
  #define QUADSPI_CCR (* ((volatile uint32_t *) (0xa0001000 + 20)))

  // Field DDRM: Double data rate mode
    const uint32_t QUADSPI_CCR_DDRM = 1U << 31 ;

  // Field DHHC: DDR hold half cycle
    const uint32_t QUADSPI_CCR_DHHC = 1U << 30 ;

  // Field SIOO: Send instruction only once mode
    const uint32_t QUADSPI_CCR_SIOO = 1U << 28 ;

  // Field FMODE: Functional mode
    inline uint32_t QUADSPI_CCR_FMODE (const uint32_t inValue) {return (inValue & 0x3U) << 26 ; }

  // Field DMODE: Data mode
    inline uint32_t QUADSPI_CCR_DMODE (const uint32_t inValue) {return (inValue & 0x3U) << 24 ; }

  // Field DCYC: Number of dummy cycles
    inline uint32_t QUADSPI_CCR_DCYC (const uint32_t inValue) {return (inValue & 0x1fU) << 18 ; }

  // Field ABSIZE: Alternate bytes size
    inline uint32_t QUADSPI_CCR_ABSIZE (const uint32_t inValue) {return (inValue & 0x3U) << 16 ; }

  // Field ABMODE: Alternate bytes mode
    inline uint32_t QUADSPI_CCR_ABMODE (const uint32_t inValue) {return (inValue & 0x3U) << 14 ; }

  // Field ADSIZE: Address size
    inline uint32_t QUADSPI_CCR_ADSIZE (const uint32_t inValue) {return (inValue & 0x3U) << 12 ; }

  // Field ADMODE: Address mode
    inline uint32_t QUADSPI_CCR_ADMODE (const uint32_t inValue) {return (inValue & 0x3U) << 10 ; }

  // Field IMODE: Instruction mode
    inline uint32_t QUADSPI_CCR_IMODE (const uint32_t inValue) {return (inValue & 0x3U) << 8 ; }

  // Field INSTRUCTION: Instruction
    inline uint32_t QUADSPI_CCR_INSTRUCTION (const uint32_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register AR: address register
  #define QUADSPI_AR (* ((volatile uint32_t *) (0xa0001000 + 24)))

  // Field ADDRESS: Address
    inline uint32_t QUADSPI_AR_ADDRESS (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register ABR: ABR
  #define QUADSPI_ABR (* ((volatile uint32_t *) (0xa0001000 + 28)))

  // Field ALTERNATE: ALTERNATE
    inline uint32_t QUADSPI_ABR_ALTERNATE (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register DR: data register
  #define QUADSPI_DR (* ((volatile uint32_t *) (0xa0001000 + 32)))

  // Field DATA: Data
    inline uint32_t QUADSPI_DR_DATA (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register PSMKR: polling status mask register
  #define QUADSPI_PSMKR (* ((volatile uint32_t *) (0xa0001000 + 36)))

  // Field MASK: Status mask
    inline uint32_t QUADSPI_PSMKR_MASK (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register PSMAR: polling status match register
  #define QUADSPI_PSMAR (* ((volatile uint32_t *) (0xa0001000 + 40)))

  // Field MATCH: Status match
    inline uint32_t QUADSPI_PSMAR_MATCH (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register PIR: polling interval register
  #define QUADSPI_PIR (* ((volatile uint32_t *) (0xa0001000 + 44)))

  // Field INTERVAL: Polling interval
    inline uint32_t QUADSPI_PIR_INTERVAL (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register LPTR: low-power timeout register
  #define QUADSPI_LPTR (* ((volatile uint32_t *) (0xa0001000 + 48)))

  // Field TIMEOUT: Timeout period
    inline uint32_t QUADSPI_LPTR_TIMEOUT (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

//------------------------------------------------------------------------------
// Peripheral RCC: Reset and clock control
//------------------------------------------------------------------------------

//---  Register CR: Clock control register
  #define RCC_CR (* ((volatile uint32_t *) (0x40021000 + 0)))

  // Field PLLSAI1RDY: SAI1 PLL clock ready flag
    const uint32_t RCC_CR_PLLSAI1RDY = 1U << 27 ;

  // Field PLLSAI1ON: SAI1 PLL enable
    const uint32_t RCC_CR_PLLSAI1ON = 1U << 26 ;

  // Field PLLRDY: Main PLL clock ready flag
    const uint32_t RCC_CR_PLLRDY = 1U << 25 ;

  // Field PLLON: Main PLL enable
    const uint32_t RCC_CR_PLLON = 1U << 24 ;

  // Field CSSON: Clock security system enable
    const uint32_t RCC_CR_CSSON = 1U << 19 ;

  // Field HSEBYP: HSE crystal oscillator bypass
    const uint32_t RCC_CR_HSEBYP = 1U << 18 ;

  // Field HSERDY: HSE clock ready flag
    const uint32_t RCC_CR_HSERDY = 1U << 17 ;

  // Field HSEON: HSE clock enable
    const uint32_t RCC_CR_HSEON = 1U << 16 ;

  // Field HSIASFS: HSI automatic start from Stop
    const uint32_t RCC_CR_HSIASFS = 1U << 11 ;

  // Field HSIRDY: HSI clock ready flag
    const uint32_t RCC_CR_HSIRDY = 1U << 10 ;

  // Field HSIKERON: HSI always enable for peripheral kernels
    const uint32_t RCC_CR_HSIKERON = 1U << 9 ;

  // Field HSION: HSI clock enable
    const uint32_t RCC_CR_HSION = 1U << 8 ;

  // Field MSIRANGE: MSI clock ranges
    inline uint32_t RCC_CR_MSIRANGE (const uint32_t inValue) {return (inValue & 0xfU) << 4 ; }

  // Field MSIRGSEL: MSI clock range selection
    const uint32_t RCC_CR_MSIRGSEL = 1U << 3 ;

  // Field MSIPLLEN: MSI clock PLL enable
    const uint32_t RCC_CR_MSIPLLEN = 1U << 2 ;

  // Field MSIRDY: MSI clock ready flag
    const uint32_t RCC_CR_MSIRDY = 1U << 1 ;

  // Field MSION: MSI clock enable
    const uint32_t RCC_CR_MSION = 1U << 0 ;

//---  Register ICSCR: Internal clock sources calibration
          register
  #define RCC_ICSCR (* ((volatile uint32_t *) (0x40021000 + 4)))

  // Field HSITRIM: HSI clock trimming
    inline uint32_t RCC_ICSCR_HSITRIM (const uint32_t inValue) {return (inValue & 0x1fU) << 24 ; }

  // Field HSICAL: HSI clock calibration
    inline uint32_t RCC_ICSCR_HSICAL (const uint32_t inValue) {return (inValue & 0xffU) << 16 ; }

  // Field MSITRIM: MSI clock trimming
    inline uint32_t RCC_ICSCR_MSITRIM (const uint32_t inValue) {return (inValue & 0xffU) << 8 ; }

  // Field MSICAL: MSI clock calibration
    inline uint32_t RCC_ICSCR_MSICAL (const uint32_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register CFGR: Clock configuration register
  #define RCC_CFGR (* ((volatile uint32_t *) (0x40021000 + 8)))

  // Field MCOPRE: Microcontroller clock output prescaler
    inline uint32_t RCC_CFGR_MCOPRE (const uint32_t inValue) {return (inValue & 0x7U) << 28 ; }

  // Field MCOSEL: Microcontroller clock output
    inline uint32_t RCC_CFGR_MCOSEL (const uint32_t inValue) {return (inValue & 0x7U) << 24 ; }

  // Field STOPWUCK: Wakeup from Stop and CSS backup clock selection
    const uint32_t RCC_CFGR_STOPWUCK = 1U << 15 ;

  // Field PPRE2: APB high-speed prescaler (APB2)
    inline uint32_t RCC_CFGR_PPRE2 (const uint32_t inValue) {return (inValue & 0x7U) << 11 ; }

  // Field PPRE1: PB low-speed prescaler (APB1)
    inline uint32_t RCC_CFGR_PPRE1 (const uint32_t inValue) {return (inValue & 0x7U) << 8 ; }

  // Field HPRE: AHB prescaler
    inline uint32_t RCC_CFGR_HPRE (const uint32_t inValue) {return (inValue & 0xfU) << 4 ; }

  // Field SWS: System clock switch status
    inline uint32_t RCC_CFGR_SWS (const uint32_t inValue) {return (inValue & 0x3U) << 2 ; }

  // Field SW: System clock switch
    inline uint32_t RCC_CFGR_SW (const uint32_t inValue) {return (inValue & 0x3U) << 0 ; }

//---  Register PLLCFGR: PLL configuration register
  #define RCC_PLLCFGR (* ((volatile uint32_t *) (0x40021000 + 12)))

  // Field PLLR: Main PLL division factor for PLLCLK (system clock)
    inline uint32_t RCC_PLLCFGR_PLLR (const uint32_t inValue) {return (inValue & 0x3U) << 25 ; }

  // Field PLLREN: Main PLL PLLCLK output enable
    const uint32_t RCC_PLLCFGR_PLLREN = 1U << 24 ;

  // Field PLLQ: Main PLL division factor for PLLUSB1CLK(48 MHz clock)
    inline uint32_t RCC_PLLCFGR_PLLQ (const uint32_t inValue) {return (inValue & 0x3U) << 21 ; }

  // Field PLLQEN: Main PLL PLLUSB1CLK output enable
    const uint32_t RCC_PLLCFGR_PLLQEN = 1U << 20 ;

  // Field PLLP: Main PLL division factor for PLLSAI3CLK (SAI1 and SAI2 clock)
    const uint32_t RCC_PLLCFGR_PLLP = 1U << 17 ;

  // Field PLLPEN: Main PLL PLLSAI3CLK output enable
    const uint32_t RCC_PLLCFGR_PLLPEN = 1U << 16 ;

  // Field PLLN: Main PLL multiplication factor for VCO
    inline uint32_t RCC_PLLCFGR_PLLN (const uint32_t inValue) {return (inValue & 0x7fU) << 8 ; }

  // Field PLLM: Division factor for the main PLL and audio PLL (PLLSAI1 and PLLSAI2) input clock
    inline uint32_t RCC_PLLCFGR_PLLM (const uint32_t inValue) {return (inValue & 0x7U) << 4 ; }

  // Field PLLSRC: Main PLL, PLLSAI1 and PLLSAI2 entry clock source
    inline uint32_t RCC_PLLCFGR_PLLSRC (const uint32_t inValue) {return (inValue & 0x3U) << 0 ; }

  // Field PLLPDIV: Main PLL division factor for PLLSAI2CLK
    inline uint32_t RCC_PLLCFGR_PLLPDIV (const uint32_t inValue) {return (inValue & 0x1fU) << 27 ; }

//---  Register PLLSAI1CFGR: PLLSAI1 configuration register
  #define RCC_PLLSAI1CFGR (* ((volatile uint32_t *) (0x40021000 + 16)))

  // Field PLLSAI1R: PLLSAI1 division factor for PLLADC1CLK (ADC clock)
    inline uint32_t RCC_PLLSAI1CFGR_PLLSAI1R (const uint32_t inValue) {return (inValue & 0x3U) << 25 ; }

  // Field PLLSAI1REN: PLLSAI1 PLLADC1CLK output enable
    const uint32_t RCC_PLLSAI1CFGR_PLLSAI1REN = 1U << 24 ;

  // Field PLLSAI1Q: SAI1PLL division factor for PLLUSB2CLK (48 MHz clock)
    inline uint32_t RCC_PLLSAI1CFGR_PLLSAI1Q (const uint32_t inValue) {return (inValue & 0x3U) << 21 ; }

  // Field PLLSAI1QEN: SAI1PLL PLLUSB2CLK output enable
    const uint32_t RCC_PLLSAI1CFGR_PLLSAI1QEN = 1U << 20 ;

  // Field PLLSAI1P: SAI1PLL division factor for PLLSAI1CLK (SAI1 or SAI2 clock)
    const uint32_t RCC_PLLSAI1CFGR_PLLSAI1P = 1U << 17 ;

  // Field PLLSAI1PEN: SAI1PLL PLLSAI1CLK output enable
    const uint32_t RCC_PLLSAI1CFGR_PLLSAI1PEN = 1U << 16 ;

  // Field PLLSAI1N: SAI1PLL multiplication factor for VCO
    inline uint32_t RCC_PLLSAI1CFGR_PLLSAI1N (const uint32_t inValue) {return (inValue & 0x7fU) << 8 ; }

  // Field PLLSAI1PDIV: PLLSAI1 division factor for PLLSAI1CLK
    inline uint32_t RCC_PLLSAI1CFGR_PLLSAI1PDIV (const uint32_t inValue) {return (inValue & 0x1fU) << 27 ; }

//---  Register CIER: Clock interrupt enable
          register
  #define RCC_CIER (* ((volatile uint32_t *) (0x40021000 + 24)))

  // Field LSECSSIE: LSE clock security system interrupt enable
    const uint32_t RCC_CIER_LSECSSIE = 1U << 9 ;

  // Field PLLSAI1RDYIE: PLLSAI1 ready interrupt enable
    const uint32_t RCC_CIER_PLLSAI1RDYIE = 1U << 6 ;

  // Field PLLRDYIE: PLL ready interrupt enable
    const uint32_t RCC_CIER_PLLRDYIE = 1U << 5 ;

  // Field HSERDYIE: HSE ready interrupt enable
    const uint32_t RCC_CIER_HSERDYIE = 1U << 4 ;

  // Field HSIRDYIE: HSI ready interrupt enable
    const uint32_t RCC_CIER_HSIRDYIE = 1U << 3 ;

  // Field MSIRDYIE: MSI ready interrupt enable
    const uint32_t RCC_CIER_MSIRDYIE = 1U << 2 ;

  // Field LSERDYIE: LSE ready interrupt enable
    const uint32_t RCC_CIER_LSERDYIE = 1U << 1 ;

  // Field LSIRDYIE: LSI ready interrupt enable
    const uint32_t RCC_CIER_LSIRDYIE = 1U << 0 ;

  // Field HSI48RDYIE: HSI48 ready interrupt enable
    const uint32_t RCC_CIER_HSI48RDYIE = 1U << 10 ;

//---  Register CIFR: Clock interrupt flag register
  #define RCC_CIFR (* ((const volatile uint32_t *) (0x40021000 + 28)))

  // Field LSECSSF: LSE Clock security system interrupt flag
    const uint32_t RCC_CIFR_LSECSSF = 1U << 9 ;

  // Field CSSF: Clock security system interrupt flag
    const uint32_t RCC_CIFR_CSSF = 1U << 8 ;

  // Field PLLSAI1RDYF: PLLSAI1 ready interrupt flag
    const uint32_t RCC_CIFR_PLLSAI1RDYF = 1U << 6 ;

  // Field PLLRDYF: PLL ready interrupt flag
    const uint32_t RCC_CIFR_PLLRDYF = 1U << 5 ;

  // Field HSERDYF: HSE ready interrupt flag
    const uint32_t RCC_CIFR_HSERDYF = 1U << 4 ;

  // Field HSIRDYF: HSI ready interrupt flag
    const uint32_t RCC_CIFR_HSIRDYF = 1U << 3 ;

  // Field MSIRDYF: MSI ready interrupt flag
    const uint32_t RCC_CIFR_MSIRDYF = 1U << 2 ;

  // Field LSERDYF: LSE ready interrupt flag
    const uint32_t RCC_CIFR_LSERDYF = 1U << 1 ;

  // Field LSIRDYF: LSI ready interrupt flag
    const uint32_t RCC_CIFR_LSIRDYF = 1U << 0 ;

  // Field HSI48RDYF: HSI48 ready interrupt flag
    const uint32_t RCC_CIFR_HSI48RDYF = 1U << 10 ;

//---  Register CICR: Clock interrupt clear register
  #define RCC_CICR (* ((volatile uint32_t *) (0x40021000 + 32)))

  // Field LSECSSC: LSE Clock security system interrupt clear
    const uint32_t RCC_CICR_LSECSSC = 1U << 9 ;

  // Field CSSC: Clock security system interrupt clear
    const uint32_t RCC_CICR_CSSC = 1U << 8 ;

  // Field PLLSAI1RDYC: PLLSAI1 ready interrupt clear
    const uint32_t RCC_CICR_PLLSAI1RDYC = 1U << 6 ;

  // Field PLLRDYC: PLL ready interrupt clear
    const uint32_t RCC_CICR_PLLRDYC = 1U << 5 ;

  // Field HSERDYC: HSE ready interrupt clear
    const uint32_t RCC_CICR_HSERDYC = 1U << 4 ;

  // Field HSIRDYC: HSI ready interrupt clear
    const uint32_t RCC_CICR_HSIRDYC = 1U << 3 ;

  // Field MSIRDYC: MSI ready interrupt clear
    const uint32_t RCC_CICR_MSIRDYC = 1U << 2 ;

  // Field LSERDYC: LSE ready interrupt clear
    const uint32_t RCC_CICR_LSERDYC = 1U << 1 ;

  // Field LSIRDYC: LSI ready interrupt clear
    const uint32_t RCC_CICR_LSIRDYC = 1U << 0 ;

  // Field HSI48RDYC: HSI48 oscillator ready interrupt clear
    const uint32_t RCC_CICR_HSI48RDYC = 1U << 10 ;

//---  Register AHB1RSTR: AHB1 peripheral reset register
  #define RCC_AHB1RSTR (* ((volatile uint32_t *) (0x40021000 + 40)))

  // Field TSCRST: Touch Sensing Controller reset
    const uint32_t RCC_AHB1RSTR_TSCRST = 1U << 16 ;

  // Field CRCRST: CRC reset
    const uint32_t RCC_AHB1RSTR_CRCRST = 1U << 11 ;

  // Field FLASHRST: Flash memory interface reset
    const uint32_t RCC_AHB1RSTR_FLASHRST = 1U << 8 ;

  // Field DMA2RST: DMA2 reset
    const uint32_t RCC_AHB1RSTR_DMA2RST = 1U << 1 ;

  // Field DMA1RST: DMA1 reset
    const uint32_t RCC_AHB1RSTR_DMA1RST = 1U << 0 ;

//---  Register AHB2RSTR: AHB2 peripheral reset register
  #define RCC_AHB2RSTR (* ((volatile uint32_t *) (0x40021000 + 44)))

  // Field RNGRST: Random number generator reset
    const uint32_t RCC_AHB2RSTR_RNGRST = 1U << 18 ;

  // Field AESRST: AES hardware accelerator reset
    const uint32_t RCC_AHB2RSTR_AESRST = 1U << 16 ;

  // Field ADCRST: ADC reset
    const uint32_t RCC_AHB2RSTR_ADCRST = 1U << 13 ;

  // Field GPIOHRST: IO port H reset
    const uint32_t RCC_AHB2RSTR_GPIOHRST = 1U << 7 ;

  // Field GPIOERST: IO port E reset
    const uint32_t RCC_AHB2RSTR_GPIOERST = 1U << 4 ;

  // Field GPIODRST: IO port D reset
    const uint32_t RCC_AHB2RSTR_GPIODRST = 1U << 3 ;

  // Field GPIOCRST: IO port C reset
    const uint32_t RCC_AHB2RSTR_GPIOCRST = 1U << 2 ;

  // Field GPIOBRST: IO port B reset
    const uint32_t RCC_AHB2RSTR_GPIOBRST = 1U << 1 ;

  // Field GPIOARST: IO port A reset
    const uint32_t RCC_AHB2RSTR_GPIOARST = 1U << 0 ;

//---  Register AHB3RSTR: AHB3 peripheral reset register
  #define RCC_AHB3RSTR (* ((volatile uint32_t *) (0x40021000 + 48)))

  // Field QSPIRST: Quad SPI memory interface reset
    const uint32_t RCC_AHB3RSTR_QSPIRST = 1U << 8 ;

//---  Register APB1RSTR1: APB1 peripheral reset register
          1
  #define RCC_APB1RSTR1 (* ((volatile uint32_t *) (0x40021000 + 56)))

  // Field LPTIM1RST: Low Power Timer 1 reset
    const uint32_t RCC_APB1RSTR1_LPTIM1RST = 1U << 31 ;

  // Field OPAMPRST: OPAMP interface reset
    const uint32_t RCC_APB1RSTR1_OPAMPRST = 1U << 30 ;

  // Field DAC1RST: DAC1 interface reset
    const uint32_t RCC_APB1RSTR1_DAC1RST = 1U << 29 ;

  // Field PWRRST: Power interface reset
    const uint32_t RCC_APB1RSTR1_PWRRST = 1U << 28 ;

  // Field CAN1RST: CAN1 reset
    const uint32_t RCC_APB1RSTR1_CAN1RST = 1U << 25 ;

  // Field I2C3RST: I2C3 reset
    const uint32_t RCC_APB1RSTR1_I2C3RST = 1U << 23 ;

  // Field I2C1RST: I2C1 reset
    const uint32_t RCC_APB1RSTR1_I2C1RST = 1U << 21 ;

  // Field USART1RST: USART1 reset
    const uint32_t RCC_APB1RSTR1_USART1RST = 1U << 18 ;

  // Field USART2RST: USART2 reset
    const uint32_t RCC_APB1RSTR1_USART2RST = 1U << 17 ;

  // Field SPI3RST: SPI3 reset
    const uint32_t RCC_APB1RSTR1_SPI3RST = 1U << 15 ;

  // Field SPI2RST: SPI2 reset
    const uint32_t RCC_APB1RSTR1_SPI2RST = 1U << 14 ;

  // Field LCDRST: LCD interface reset
    const uint32_t RCC_APB1RSTR1_LCDRST = 1U << 9 ;

  // Field TIM7RST: TIM7 timer reset
    const uint32_t RCC_APB1RSTR1_TIM7RST = 1U << 5 ;

  // Field TIM6RST: TIM6 timer reset
    const uint32_t RCC_APB1RSTR1_TIM6RST = 1U << 4 ;

  // Field TIM2RST: TIM2 timer reset
    const uint32_t RCC_APB1RSTR1_TIM2RST = 1U << 0 ;

  // Field USART4RST: USART4 reset.
    const uint32_t RCC_APB1RSTR1_USART4RST = 1U << 19 ;

  // Field I2C2RST: I2C2 reset
    const uint32_t RCC_APB1RSTR1_I2C2RST = 1U << 22 ;

  // Field CRSRST: CRS reset
    const uint32_t RCC_APB1RSTR1_CRSRST = 1U << 24 ;

  // Field USBFSRST: USB FS reset
    const uint32_t RCC_APB1RSTR1_USBFSRST = 1U << 26 ;

//---  Register APB1RSTR2: APB1 peripheral reset register
          2
  #define RCC_APB1RSTR2 (* ((volatile uint32_t *) (0x40021000 + 60)))

  // Field LPTIM2RST: Low-power timer 2 reset
    const uint32_t RCC_APB1RSTR2_LPTIM2RST = 1U << 5 ;

  // Field SWPMI1RST: Single wire protocol reset
    const uint32_t RCC_APB1RSTR2_SWPMI1RST = 1U << 2 ;

  // Field LPUART1RST: Low-power UART 1 reset
    const uint32_t RCC_APB1RSTR2_LPUART1RST = 1U << 0 ;

  // Field I2C4RST: I2C4 reset
    const uint32_t RCC_APB1RSTR2_I2C4RST = 1U << 1 ;

//---  Register APB2RSTR: APB2 peripheral reset register
  #define RCC_APB2RSTR (* ((volatile uint32_t *) (0x40021000 + 64)))

  // Field SAI1RST: Serial audio interface 1 (SAI1) reset
    const uint32_t RCC_APB2RSTR_SAI1RST = 1U << 21 ;

  // Field TIM16RST: TIM16 timer reset
    const uint32_t RCC_APB2RSTR_TIM16RST = 1U << 17 ;

  // Field TIM15RST: TIM15 timer reset
    const uint32_t RCC_APB2RSTR_TIM15RST = 1U << 16 ;

  // Field USART1RST: USART1 reset
    const uint32_t RCC_APB2RSTR_USART1RST = 1U << 14 ;

  // Field SPI1RST: SPI1 reset
    const uint32_t RCC_APB2RSTR_SPI1RST = 1U << 12 ;

  // Field TIM1RST: TIM1 timer reset
    const uint32_t RCC_APB2RSTR_TIM1RST = 1U << 11 ;

  // Field SDMMCRST: SDMMC reset
    const uint32_t RCC_APB2RSTR_SDMMCRST = 1U << 10 ;

  // Field SYSCFGRST: System configuration (SYSCFG) reset
    const uint32_t RCC_APB2RSTR_SYSCFGRST = 1U << 0 ;

  // Field DFSDMRST: DFSDM filter reset
    const uint32_t RCC_APB2RSTR_DFSDMRST = 1U << 24 ;

//---  Register AHB1ENR: AHB1 peripheral clock enable
          register
  #define RCC_AHB1ENR (* ((volatile uint32_t *) (0x40021000 + 72)))

  // Field TSCEN: Touch Sensing Controller clock enable
    const uint32_t RCC_AHB1ENR_TSCEN = 1U << 16 ;

  // Field CRCEN: CRC clock enable
    const uint32_t RCC_AHB1ENR_CRCEN = 1U << 12 ;

  // Field FLASHEN: Flash memory interface clock enable
    const uint32_t RCC_AHB1ENR_FLASHEN = 1U << 8 ;

  // Field DMA2EN: DMA2 clock enable
    const uint32_t RCC_AHB1ENR_DMA2EN = 1U << 1 ;

  // Field DMA1EN: DMA1 clock enable
    const uint32_t RCC_AHB1ENR_DMA1EN = 1U << 0 ;

//---  Register AHB2ENR: AHB2 peripheral clock enable
          register
  #define RCC_AHB2ENR (* ((volatile uint32_t *) (0x40021000 + 76)))

  // Field RNGEN: Random Number Generator clock enable
    const uint32_t RCC_AHB2ENR_RNGEN = 1U << 18 ;

  // Field AESEN: AES accelerator clock enable
    const uint32_t RCC_AHB2ENR_AESEN = 1U << 16 ;

  // Field ADCEN: ADC clock enable
    const uint32_t RCC_AHB2ENR_ADCEN = 1U << 13 ;

  // Field GPIOHEN: IO port H clock enable
    const uint32_t RCC_AHB2ENR_GPIOHEN = 1U << 7 ;

  // Field GPIOEEN: IO port E clock enable
    const uint32_t RCC_AHB2ENR_GPIOEEN = 1U << 4 ;

  // Field GPIODEN: IO port D clock enable
    const uint32_t RCC_AHB2ENR_GPIODEN = 1U << 3 ;

  // Field GPIOCEN: IO port C clock enable
    const uint32_t RCC_AHB2ENR_GPIOCEN = 1U << 2 ;

  // Field GPIOBEN: IO port B clock enable
    const uint32_t RCC_AHB2ENR_GPIOBEN = 1U << 1 ;

  // Field GPIOAEN: IO port A clock enable
    const uint32_t RCC_AHB2ENR_GPIOAEN = 1U << 0 ;

//---  Register AHB3ENR: AHB3 peripheral clock enable
          register
  #define RCC_AHB3ENR (* ((volatile uint32_t *) (0x40021000 + 80)))

  // Field QSPIEN: QSPIEN
    const uint32_t RCC_AHB3ENR_QSPIEN = 1U << 8 ;

//---  Register APB1ENR1: APB1ENR1
  #define RCC_APB1ENR1 (* ((volatile uint32_t *) (0x40021000 + 88)))

  // Field LPTIM1EN: Low power timer 1 clock enable
    const uint32_t RCC_APB1ENR1_LPTIM1EN = 1U << 31 ;

  // Field OPAMPEN: OPAMP interface clock enable
    const uint32_t RCC_APB1ENR1_OPAMPEN = 1U << 30 ;

  // Field DAC1EN: DAC1 interface clock enable
    const uint32_t RCC_APB1ENR1_DAC1EN = 1U << 29 ;

  // Field PWREN: Power interface clock enable
    const uint32_t RCC_APB1ENR1_PWREN = 1U << 28 ;

  // Field CAN1EN: CAN1 clock enable
    const uint32_t RCC_APB1ENR1_CAN1EN = 1U << 25 ;

  // Field I2C3EN: I2C3 clock enable
    const uint32_t RCC_APB1ENR1_I2C3EN = 1U << 23 ;

  // Field I2C1EN: I2C1 clock enable
    const uint32_t RCC_APB1ENR1_I2C1EN = 1U << 21 ;

  // Field USART1EN: USART1 clock enable
    const uint32_t RCC_APB1ENR1_USART1EN = 1U << 18 ;

  // Field USART2EN: USART2 clock enable
    const uint32_t RCC_APB1ENR1_USART2EN = 1U << 17 ;

  // Field SPI3EN: SPI3 clock enable
    const uint32_t RCC_APB1ENR1_SPI3EN = 1U << 15 ;

  // Field SPI1EN: SPI1 clock enable
    const uint32_t RCC_APB1ENR1_SPI1EN = 1U << 14 ;

  // Field WWDGEN: Window watchdog clock enable
    const uint32_t RCC_APB1ENR1_WWDGEN = 1U << 11 ;

  // Field LCDEN: LCD clock enable
    const uint32_t RCC_APB1ENR1_LCDEN = 1U << 9 ;

  // Field TIM7EN: TIM7 timer clock enable
    const uint32_t RCC_APB1ENR1_TIM7EN = 1U << 5 ;

  // Field TIM6EN: TIM6 timer clock enable
    const uint32_t RCC_APB1ENR1_TIM6EN = 1U << 4 ;

  // Field TIM2EN: TIM2 timer clock enable
    const uint32_t RCC_APB1ENR1_TIM2EN = 1U << 0 ;

  // Field RTCAPBEN: RTC APB clock enable
    const uint32_t RCC_APB1ENR1_RTCAPBEN = 1U << 10 ;

  // Field CRSEN: CRS clock enable
    const uint32_t RCC_APB1ENR1_CRSEN = 1U << 24 ;

  // Field USBF: USB FS clock enable
    const uint32_t RCC_APB1ENR1_USBF = 1U << 26 ;

  // Field TIM3EN: TIM3 timer clock enable
    const uint32_t RCC_APB1ENR1_TIM3EN = 1U << 1 ;

  // Field UART4EN: UART4 clock enable
    const uint32_t RCC_APB1ENR1_UART4EN = 1U << 19 ;

  // Field I2C2EN: I2C2 clock enable
    const uint32_t RCC_APB1ENR1_I2C2EN = 1U << 22 ;

//---  Register APB1ENR2: APB1 peripheral clock enable register
          2
  #define RCC_APB1ENR2 (* ((volatile uint32_t *) (0x40021000 + 92)))

  // Field LPTIM2EN: LPTIM2EN
    const uint32_t RCC_APB1ENR2_LPTIM2EN = 1U << 5 ;

  // Field SWPMI1EN: Single wire protocol clock enable
    const uint32_t RCC_APB1ENR2_SWPMI1EN = 1U << 2 ;

  // Field LPUART1EN: Low power UART 1 clock enable
    const uint32_t RCC_APB1ENR2_LPUART1EN = 1U << 0 ;

  // Field DFSDMEN: DFSDMEN enable
    const uint32_t RCC_APB1ENR2_DFSDMEN = 1U << 24 ;

  // Field I2C4EN: I2C4 clock enable
    const uint32_t RCC_APB1ENR2_I2C4EN = 1U << 1 ;

//---  Register APB2ENR: APB2ENR
  #define RCC_APB2ENR (* ((volatile uint32_t *) (0x40021000 + 96)))

  // Field SAI1EN: SAI1 clock enable
    const uint32_t RCC_APB2ENR_SAI1EN = 1U << 21 ;

  // Field TIM16EN: TIM16 timer clock enable
    const uint32_t RCC_APB2ENR_TIM16EN = 1U << 17 ;

  // Field TIM15EN: TIM15 timer clock enable
    const uint32_t RCC_APB2ENR_TIM15EN = 1U << 16 ;

  // Field USART1EN: USART1clock enable
    const uint32_t RCC_APB2ENR_USART1EN = 1U << 14 ;

  // Field SPI1EN: SPI1 clock enable
    const uint32_t RCC_APB2ENR_SPI1EN = 1U << 12 ;

  // Field TIM1EN: TIM1 timer clock enable
    const uint32_t RCC_APB2ENR_TIM1EN = 1U << 11 ;

  // Field SDMMCEN: SDMMC clock enable
    const uint32_t RCC_APB2ENR_SDMMCEN = 1U << 10 ;

  // Field FIREWALLEN: Firewall clock enable
    const uint32_t RCC_APB2ENR_FIREWALLEN = 1U << 7 ;

  // Field SYSCFGEN: SYSCFG clock enable
    const uint32_t RCC_APB2ENR_SYSCFGEN = 1U << 0 ;

//---  Register AHB1SMENR: AHB1 peripheral clocks enable in Sleep and
          Stop modes register
  #define RCC_AHB1SMENR (* ((volatile uint32_t *) (0x40021000 + 104)))

  // Field TSCSMEN: Touch Sensing Controller clocks enable during Sleep and Stop modes
    const uint32_t RCC_AHB1SMENR_TSCSMEN = 1U << 16 ;

  // Field CRCSMEN: CRCSMEN
    const uint32_t RCC_AHB1SMENR_CRCSMEN = 1U << 12 ;

  // Field SRAM1SMEN: SRAM1 interface clocks enable during Sleep and Stop modes
    const uint32_t RCC_AHB1SMENR_SRAM1SMEN = 1U << 9 ;

  // Field FLASHSMEN: Flash memory interface clocks enable during Sleep and Stop modes
    const uint32_t RCC_AHB1SMENR_FLASHSMEN = 1U << 8 ;

  // Field DMA2SMEN: DMA2 clocks enable during Sleep and Stop modes
    const uint32_t RCC_AHB1SMENR_DMA2SMEN = 1U << 1 ;

  // Field DMA1SMEN: DMA1 clocks enable during Sleep and Stop modes
    const uint32_t RCC_AHB1SMENR_DMA1SMEN = 1U << 0 ;

//---  Register AHB2SMENR: AHB2 peripheral clocks enable in Sleep and
          Stop modes register
  #define RCC_AHB2SMENR (* ((volatile uint32_t *) (0x40021000 + 108)))

  // Field RNGSMEN: Random Number Generator clocks enable during Sleep and Stop modes
    const uint32_t RCC_AHB2SMENR_RNGSMEN = 1U << 18 ;

  // Field AESSMEN: AES accelerator clocks enable during Sleep and Stop modes
    const uint32_t RCC_AHB2SMENR_AESSMEN = 1U << 16 ;

  // Field ADCFSSMEN: ADC clocks enable during Sleep and Stop modes
    const uint32_t RCC_AHB2SMENR_ADCFSSMEN = 1U << 13 ;

  // Field SRAM2SMEN: SRAM2 interface clocks enable during Sleep and Stop modes
    const uint32_t RCC_AHB2SMENR_SRAM2SMEN = 1U << 9 ;

  // Field GPIOHSMEN: IO port H clocks enable during Sleep and Stop modes
    const uint32_t RCC_AHB2SMENR_GPIOHSMEN = 1U << 7 ;

  // Field GPIOESMEN: IO port E clocks enable during Sleep and Stop modes
    const uint32_t RCC_AHB2SMENR_GPIOESMEN = 1U << 4 ;

  // Field GPIODSMEN: IO port D clocks enable during Sleep and Stop modes
    const uint32_t RCC_AHB2SMENR_GPIODSMEN = 1U << 3 ;

  // Field GPIOCSMEN: IO port C clocks enable during Sleep and Stop modes
    const uint32_t RCC_AHB2SMENR_GPIOCSMEN = 1U << 2 ;

  // Field GPIOBSMEN: IO port B clocks enable during Sleep and Stop modes
    const uint32_t RCC_AHB2SMENR_GPIOBSMEN = 1U << 1 ;

  // Field GPIOASMEN: IO port A clocks enable during Sleep and Stop modes
    const uint32_t RCC_AHB2SMENR_GPIOASMEN = 1U << 0 ;

//---  Register AHB3SMENR: AHB3 peripheral clocks enable in Sleep and
          Stop modes register
  #define RCC_AHB3SMENR (* ((volatile uint32_t *) (0x40021000 + 112)))

  // Field QSPISMEN: QSPISMEN
    const uint32_t RCC_AHB3SMENR_QSPISMEN = 1U << 8 ;

//---  Register APB1SMENR1: APB1SMENR1
  #define RCC_APB1SMENR1 (* ((volatile uint32_t *) (0x40021000 + 120)))

  // Field LPTIM1SMEN: Low power timer 1 clocks enable during Sleep and Stop modes
    const uint32_t RCC_APB1SMENR1_LPTIM1SMEN = 1U << 31 ;

  // Field OPAMPSMEN: OPAMP interface clocks enable during Sleep and Stop modes
    const uint32_t RCC_APB1SMENR1_OPAMPSMEN = 1U << 30 ;

  // Field DAC1SMEN: DAC1 interface clocks enable during Sleep and Stop modes
    const uint32_t RCC_APB1SMENR1_DAC1SMEN = 1U << 29 ;

  // Field PWRSMEN: Power interface clocks enable during Sleep and Stop modes
    const uint32_t RCC_APB1SMENR1_PWRSMEN = 1U << 28 ;

  // Field CAN1SMEN: CAN1 clocks enable during Sleep and Stop modes
    const uint32_t RCC_APB1SMENR1_CAN1SMEN = 1U << 25 ;

  // Field I2C3SMEN: I2C3 clocks enable during Sleep and Stop modes
    const uint32_t RCC_APB1SMENR1_I2C3SMEN = 1U << 23 ;

  // Field I2C1SMEN: I2C1 clocks enable during Sleep and Stop modes
    const uint32_t RCC_APB1SMENR1_I2C1SMEN = 1U << 21 ;

  // Field USART2SMEN: USART2 clocks enable during Sleep and Stop modes
    const uint32_t RCC_APB1SMENR1_USART2SMEN = 1U << 18 ;

  // Field USART1SMEN: USART1 clocks enable during Sleep and Stop modes
    const uint32_t RCC_APB1SMENR1_USART1SMEN = 1U << 17 ;

  // Field SP3SMEN: SPI3 clocks enable during Sleep and Stop modes
    const uint32_t RCC_APB1SMENR1_SP3SMEN = 1U << 15 ;

  // Field SPI2SMEN: SPI2 clocks enable during Sleep and Stop modes
    const uint32_t RCC_APB1SMENR1_SPI2SMEN = 1U << 14 ;

  // Field WWDGSMEN: Window watchdog clocks enable during Sleep and Stop modes
    const uint32_t RCC_APB1SMENR1_WWDGSMEN = 1U << 11 ;

  // Field LCDSMEN: LCD clocks enable during Sleep and Stop modes
    const uint32_t RCC_APB1SMENR1_LCDSMEN = 1U << 9 ;

  // Field TIM7SMEN: TIM7 timer clocks enable during Sleep and Stop modes
    const uint32_t RCC_APB1SMENR1_TIM7SMEN = 1U << 5 ;

  // Field TIM6SMEN: TIM6 timer clocks enable during Sleep and Stop modes
    const uint32_t RCC_APB1SMENR1_TIM6SMEN = 1U << 4 ;

  // Field TIM2SMEN: TIM2 timer clocks enable during Sleep and Stop modes
    const uint32_t RCC_APB1SMENR1_TIM2SMEN = 1U << 0 ;

  // Field RTCAPBSMEN: RTC APB clock enable during Sleep and Stop modes
    const uint32_t RCC_APB1SMENR1_RTCAPBSMEN = 1U << 10 ;

  // Field USBFSSMEN: USB FS clock enable during Sleep and Stop modes
    const uint32_t RCC_APB1SMENR1_USBFSSMEN = 1U << 26 ;

  // Field I2C2SMEN: I2C2 clocks enable during Sleep and Stop modes
    const uint32_t RCC_APB1SMENR1_I2C2SMEN = 1U << 22 ;

  // Field CRSSMEN: CRS clock enable during Sleep and Stop modes
    const uint32_t RCC_APB1SMENR1_CRSSMEN = 1U << 24 ;

//---  Register APB1SMENR2: APB1 peripheral clocks enable in Sleep and
          Stop modes register 2
  #define RCC_APB1SMENR2 (* ((volatile uint32_t *) (0x40021000 + 124)))

  // Field LPTIM2SMEN: LPTIM2SMEN
    const uint32_t RCC_APB1SMENR2_LPTIM2SMEN = 1U << 5 ;

  // Field SWPMI1SMEN: Single wire protocol clocks enable during Sleep and Stop modes
    const uint32_t RCC_APB1SMENR2_SWPMI1SMEN = 1U << 2 ;

  // Field LPUART1SMEN: Low power UART 1 clocks enable during Sleep and Stop modes
    const uint32_t RCC_APB1SMENR2_LPUART1SMEN = 1U << 0 ;

//---  Register APB2SMENR: APB2SMENR
  #define RCC_APB2SMENR (* ((volatile uint32_t *) (0x40021000 + 128)))

  // Field SAI1SMEN: SAI1 clocks enable during Sleep and Stop modes
    const uint32_t RCC_APB2SMENR_SAI1SMEN = 1U << 21 ;

  // Field TIM16SMEN: TIM16 timer clocks enable during Sleep and Stop modes
    const uint32_t RCC_APB2SMENR_TIM16SMEN = 1U << 17 ;

  // Field TIM15SMEN: TIM15 timer clocks enable during Sleep and Stop modes
    const uint32_t RCC_APB2SMENR_TIM15SMEN = 1U << 16 ;

  // Field USART1SMEN: USART1clocks enable during Sleep and Stop modes
    const uint32_t RCC_APB2SMENR_USART1SMEN = 1U << 14 ;

  // Field SPI1SMEN: SPI1 clocks enable during Sleep and Stop modes
    const uint32_t RCC_APB2SMENR_SPI1SMEN = 1U << 12 ;

  // Field TIM1SMEN: TIM1 timer clocks enable during Sleep and Stop modes
    const uint32_t RCC_APB2SMENR_TIM1SMEN = 1U << 11 ;

  // Field SDMMCSMEN: SDMMC clocks enable during Sleep and Stop modes
    const uint32_t RCC_APB2SMENR_SDMMCSMEN = 1U << 10 ;

  // Field SYSCFGSMEN: SYSCFG clocks enable during Sleep and Stop modes
    const uint32_t RCC_APB2SMENR_SYSCFGSMEN = 1U << 0 ;

//---  Register CCIPR: CCIPR
  #define RCC_CCIPR (* ((volatile uint32_t *) (0x40021000 + 136)))

  // Field SWPMI1SEL: SWPMI1 clock source selection
    const uint32_t RCC_CCIPR_SWPMI1SEL = 1U << 30 ;

  // Field ADCSEL: ADCs clock source selection
    inline uint32_t RCC_CCIPR_ADCSEL (const uint32_t inValue) {return (inValue & 0x3U) << 28 ; }

  // Field CLK48SEL: 48 MHz clock source selection
    inline uint32_t RCC_CCIPR_CLK48SEL (const uint32_t inValue) {return (inValue & 0x3U) << 26 ; }

  // Field SAI1SEL: SAI1 clock source selection
    inline uint32_t RCC_CCIPR_SAI1SEL (const uint32_t inValue) {return (inValue & 0x3U) << 22 ; }

  // Field LPTIM2SEL: Low power timer 2 clock source selection
    inline uint32_t RCC_CCIPR_LPTIM2SEL (const uint32_t inValue) {return (inValue & 0x3U) << 20 ; }

  // Field LPTIM1SEL: Low power timer 1 clock source selection
    inline uint32_t RCC_CCIPR_LPTIM1SEL (const uint32_t inValue) {return (inValue & 0x3U) << 18 ; }

  // Field I2C3SEL: I2C3 clock source selection
    inline uint32_t RCC_CCIPR_I2C3SEL (const uint32_t inValue) {return (inValue & 0x3U) << 16 ; }

  // Field I2C1SEL: I2C1 clock source selection
    inline uint32_t RCC_CCIPR_I2C1SEL (const uint32_t inValue) {return (inValue & 0x3U) << 12 ; }

  // Field LPUART1SEL: LPUART1 clock source selection
    inline uint32_t RCC_CCIPR_LPUART1SEL (const uint32_t inValue) {return (inValue & 0x3U) << 10 ; }

  // Field USART2SEL: USART2 clock source selection
    inline uint32_t RCC_CCIPR_USART2SEL (const uint32_t inValue) {return (inValue & 0x3U) << 2 ; }

  // Field USART1SEL: USART1 clock source selection
    inline uint32_t RCC_CCIPR_USART1SEL (const uint32_t inValue) {return (inValue & 0x3U) << 0 ; }

  // Field USART4SEL: USART4 clock source selection
    inline uint32_t RCC_CCIPR_USART4SEL (const uint32_t inValue) {return (inValue & 0x3U) << 6 ; }

  // Field USART3SEL: USART3 clock source selection
    inline uint32_t RCC_CCIPR_USART3SEL (const uint32_t inValue) {return (inValue & 0x3U) << 4 ; }

  // Field I2C2SEL: I2C2 clock source selection
    inline uint32_t RCC_CCIPR_I2C2SEL (const uint32_t inValue) {return (inValue & 0x3U) << 14 ; }

//---  Register BDCR: BDCR
  #define RCC_BDCR (* ((volatile uint32_t *) (0x40021000 + 144)))

  // Field LSCOSEL: Low speed clock output selection
    const uint32_t RCC_BDCR_LSCOSEL = 1U << 25 ;

  // Field LSCOEN: Low speed clock output enable
    const uint32_t RCC_BDCR_LSCOEN = 1U << 24 ;

  // Field BDRST: Backup domain software reset
    const uint32_t RCC_BDCR_BDRST = 1U << 16 ;

  // Field RTCEN: RTC clock enable
    const uint32_t RCC_BDCR_RTCEN = 1U << 15 ;

  // Field RTCSEL: RTC clock source selection
    inline uint32_t RCC_BDCR_RTCSEL (const uint32_t inValue) {return (inValue & 0x3U) << 8 ; }

  // Field LSECSSD: LSECSSD
    const uint32_t RCC_BDCR_LSECSSD = 1U << 6 ;

  // Field LSECSSON: LSECSSON
    const uint32_t RCC_BDCR_LSECSSON = 1U << 5 ;

  // Field LSEDRV: SE oscillator drive capability
    inline uint32_t RCC_BDCR_LSEDRV (const uint32_t inValue) {return (inValue & 0x3U) << 3 ; }

  // Field LSEBYP: LSE oscillator bypass
    const uint32_t RCC_BDCR_LSEBYP = 1U << 2 ;

  // Field LSERDY: LSE oscillator ready
    const uint32_t RCC_BDCR_LSERDY = 1U << 1 ;

  // Field LSEON: LSE oscillator enable
    const uint32_t RCC_BDCR_LSEON = 1U << 0 ;

//---  Register CSR: CSR
  #define RCC_CSR (* ((volatile uint32_t *) (0x40021000 + 148)))

  // Field LPWRSTF: Low-power reset flag
    const uint32_t RCC_CSR_LPWRSTF = 1U << 31 ;

  // Field WWDGRSTF: Window watchdog reset flag
    const uint32_t RCC_CSR_WWDGRSTF = 1U << 30 ;

  // Field IWDGRSTF: Independent window watchdog reset flag
    const uint32_t RCC_CSR_IWDGRSTF = 1U << 29 ;

  // Field SFTRSTF: Software reset flag
    const uint32_t RCC_CSR_SFTRSTF = 1U << 28 ;

  // Field BORRSTF: BOR flag
    const uint32_t RCC_CSR_BORRSTF = 1U << 27 ;

  // Field PINRSTF: Pin reset flag
    const uint32_t RCC_CSR_PINRSTF = 1U << 26 ;

  // Field OBLRSTF: Option byte loader reset flag
    const uint32_t RCC_CSR_OBLRSTF = 1U << 25 ;

  // Field FIREWALLRSTF: Firewall reset flag
    const uint32_t RCC_CSR_FIREWALLRSTF = 1U << 24 ;

  // Field RMVF: Remove reset flag
    const uint32_t RCC_CSR_RMVF = 1U << 23 ;

  // Field MSISRANGE: SI range after Standby mode
    inline uint32_t RCC_CSR_MSISRANGE (const uint32_t inValue) {return (inValue & 0xfU) << 8 ; }

  // Field LSIRDY: LSI oscillator ready
    const uint32_t RCC_CSR_LSIRDY = 1U << 1 ;

  // Field LSION: LSI oscillator enable
    const uint32_t RCC_CSR_LSION = 1U << 0 ;

//---  Register CRRCR: Clock recovery RC register
  #define RCC_CRRCR (* ((volatile uint32_t *) (0x40021000 + 152)))

  // Field HSI48ON: HSI48 clock enable
    const uint32_t RCC_CRRCR_HSI48ON = 1U << 0 ;

  // Field HSI48RDY: HSI48 clock ready flag
    const uint32_t RCC_CRRCR_HSI48RDY = 1U << 1 ;

  // Field HSI48CAL: HSI48 clock calibration
    inline uint32_t RCC_CRRCR_HSI48CAL (const uint32_t inValue) {return (inValue & 0x1ffU) << 7 ; }

//------------------------------------------------------------------------------
// Peripheral RNG: Random number generator
//------------------------------------------------------------------------------

//---  Register CR: control register
  #define RNG_CR (* ((volatile uint32_t *) (0x50060800 + 0)))

  // Field IE: Interrupt enable
    const uint32_t RNG_CR_IE = 1U << 3 ;

  // Field RNGEN: Random number generator enable
    const uint32_t RNG_CR_RNGEN = 1U << 2 ;

//---  Register SR: status register
  #define RNG_SR (* ((volatile uint32_t *) (0x50060800 + 4)))

  // Field SEIS: Seed error interrupt status
    const uint32_t RNG_SR_SEIS = 1U << 6 ;

  // Field CEIS: Clock error interrupt status
    const uint32_t RNG_SR_CEIS = 1U << 5 ;

  // Field SECS: Seed error current status
    const uint32_t RNG_SR_SECS = 1U << 2 ;

  // Field CECS: Clock error current status
    const uint32_t RNG_SR_CECS = 1U << 1 ;

  // Field DRDY: Data ready
    const uint32_t RNG_SR_DRDY = 1U << 0 ;

//---  Register DR: data register
  #define RNG_DR (* ((const volatile uint32_t *) (0x50060800 + 8)))

  // Field RNDATA: Random data
    inline uint32_t RNG_DR_RNDATA (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//------------------------------------------------------------------------------
// Peripheral RTC: Real-time clock
//------------------------------------------------------------------------------

//---  Register TR: time register
  #define RTC_TR (* ((volatile uint32_t *) (0x40002800 + 0)))

  // Field PM: AM/PM notation
    const uint32_t RTC_TR_PM = 1U << 22 ;

  // Field HT: Hour tens in BCD format
    inline uint32_t RTC_TR_HT (const uint32_t inValue) {return (inValue & 0x3U) << 20 ; }

  // Field HU: Hour units in BCD format
    inline uint32_t RTC_TR_HU (const uint32_t inValue) {return (inValue & 0xfU) << 16 ; }

  // Field MNT: Minute tens in BCD format
    inline uint32_t RTC_TR_MNT (const uint32_t inValue) {return (inValue & 0x7U) << 12 ; }

  // Field MNU: Minute units in BCD format
    inline uint32_t RTC_TR_MNU (const uint32_t inValue) {return (inValue & 0xfU) << 8 ; }

  // Field ST: Second tens in BCD format
    inline uint32_t RTC_TR_ST (const uint32_t inValue) {return (inValue & 0x7U) << 4 ; }

  // Field SU: Second units in BCD format
    inline uint32_t RTC_TR_SU (const uint32_t inValue) {return (inValue & 0xfU) << 0 ; }

//---  Register DR: date register
  #define RTC_DR (* ((volatile uint32_t *) (0x40002800 + 4)))

  // Field YT: Year tens in BCD format
    inline uint32_t RTC_DR_YT (const uint32_t inValue) {return (inValue & 0xfU) << 20 ; }

  // Field YU: Year units in BCD format
    inline uint32_t RTC_DR_YU (const uint32_t inValue) {return (inValue & 0xfU) << 16 ; }

  // Field WDU: Week day units
    inline uint32_t RTC_DR_WDU (const uint32_t inValue) {return (inValue & 0x7U) << 13 ; }

  // Field MT: Month tens in BCD format
    const uint32_t RTC_DR_MT = 1U << 12 ;

  // Field MU: Month units in BCD format
    inline uint32_t RTC_DR_MU (const uint32_t inValue) {return (inValue & 0xfU) << 8 ; }

  // Field DT: Date tens in BCD format
    inline uint32_t RTC_DR_DT (const uint32_t inValue) {return (inValue & 0x3U) << 4 ; }

  // Field DU: Date units in BCD format
    inline uint32_t RTC_DR_DU (const uint32_t inValue) {return (inValue & 0xfU) << 0 ; }

//---  Register CR: control register
  #define RTC_CR (* ((volatile uint32_t *) (0x40002800 + 8)))

  // Field WCKSEL: Wakeup clock selection
    inline uint32_t RTC_CR_WCKSEL (const uint32_t inValue) {return (inValue & 0x7U) << 0 ; }

  // Field TSEDGE: Time-stamp event active edge
    const uint32_t RTC_CR_TSEDGE = 1U << 3 ;

  // Field REFCKON: Reference clock detection enable (50 or 60 Hz)
    const uint32_t RTC_CR_REFCKON = 1U << 4 ;

  // Field BYPSHAD: Bypass the shadow registers
    const uint32_t RTC_CR_BYPSHAD = 1U << 5 ;

  // Field FMT: Hour format
    const uint32_t RTC_CR_FMT = 1U << 6 ;

  // Field ALRAE: Alarm A enable
    const uint32_t RTC_CR_ALRAE = 1U << 8 ;

  // Field ALRBE: Alarm B enable
    const uint32_t RTC_CR_ALRBE = 1U << 9 ;

  // Field WUTE: Wakeup timer enable
    const uint32_t RTC_CR_WUTE = 1U << 10 ;

  // Field TSE: Time stamp enable
    const uint32_t RTC_CR_TSE = 1U << 11 ;

  // Field ALRAIE: Alarm A interrupt enable
    const uint32_t RTC_CR_ALRAIE = 1U << 12 ;

  // Field ALRBIE: Alarm B interrupt enable
    const uint32_t RTC_CR_ALRBIE = 1U << 13 ;

  // Field WUTIE: Wakeup timer interrupt enable
    const uint32_t RTC_CR_WUTIE = 1U << 14 ;

  // Field TSIE: Time-stamp interrupt enable
    const uint32_t RTC_CR_TSIE = 1U << 15 ;

  // Field ADD1H: Add 1 hour (summer time change)
    const uint32_t RTC_CR_ADD1H = 1U << 16 ;

  // Field SUB1H: Subtract 1 hour (winter time change)
    const uint32_t RTC_CR_SUB1H = 1U << 17 ;

  // Field BKP: Backup
    const uint32_t RTC_CR_BKP = 1U << 18 ;

  // Field COSEL: Calibration output selection
    const uint32_t RTC_CR_COSEL = 1U << 19 ;

  // Field POL: Output polarity
    const uint32_t RTC_CR_POL = 1U << 20 ;

  // Field OSEL: Output selection
    inline uint32_t RTC_CR_OSEL (const uint32_t inValue) {return (inValue & 0x3U) << 21 ; }

  // Field COE: Calibration output enable
    const uint32_t RTC_CR_COE = 1U << 23 ;

  // Field ITSE: timestamp on internal event enable
    const uint32_t RTC_CR_ITSE = 1U << 24 ;

//---  Register ISR: initialization and status
          register
  #define RTC_ISR (* ((volatile uint32_t *) (0x40002800 + 12)))

  // Field ALRAWF: Alarm A write flag
    const uint32_t RTC_ISR_ALRAWF = 1U << 0 ;

  // Field ALRBWF: Alarm B write flag
    const uint32_t RTC_ISR_ALRBWF = 1U << 1 ;

  // Field WUTWF: Wakeup timer write flag
    const uint32_t RTC_ISR_WUTWF = 1U << 2 ;

  // Field SHPF: Shift operation pending
    const uint32_t RTC_ISR_SHPF = 1U << 3 ;

  // Field INITS: Initialization status flag
    const uint32_t RTC_ISR_INITS = 1U << 4 ;

  // Field RSF: Registers synchronization flag
    const uint32_t RTC_ISR_RSF = 1U << 5 ;

  // Field INITF: Initialization flag
    const uint32_t RTC_ISR_INITF = 1U << 6 ;

  // Field INIT: Initialization mode
    const uint32_t RTC_ISR_INIT = 1U << 7 ;

  // Field ALRAF: Alarm A flag
    const uint32_t RTC_ISR_ALRAF = 1U << 8 ;

  // Field ALRBF: Alarm B flag
    const uint32_t RTC_ISR_ALRBF = 1U << 9 ;

  // Field WUTF: Wakeup timer flag
    const uint32_t RTC_ISR_WUTF = 1U << 10 ;

  // Field TSF: Time-stamp flag
    const uint32_t RTC_ISR_TSF = 1U << 11 ;

  // Field TSOVF: Time-stamp overflow flag
    const uint32_t RTC_ISR_TSOVF = 1U << 12 ;

  // Field TAMP1F: Tamper detection flag
    const uint32_t RTC_ISR_TAMP1F = 1U << 13 ;

  // Field TAMP2F: RTC_TAMP2 detection flag
    const uint32_t RTC_ISR_TAMP2F = 1U << 14 ;

  // Field TAMP3F: RTC_TAMP3 detection flag
    const uint32_t RTC_ISR_TAMP3F = 1U << 15 ;

  // Field RECALPF: Recalibration pending Flag
    const uint32_t RTC_ISR_RECALPF = 1U << 16 ;

//---  Register PRER: prescaler register
  #define RTC_PRER (* ((volatile uint32_t *) (0x40002800 + 16)))

  // Field PREDIV_A: Asynchronous prescaler factor
    inline uint32_t RTC_PRER_PREDIV_A (const uint32_t inValue) {return (inValue & 0x7fU) << 16 ; }

  // Field PREDIV_S: Synchronous prescaler factor
    inline uint32_t RTC_PRER_PREDIV_S (const uint32_t inValue) {return (inValue & 0x7fffU) << 0 ; }

//---  Register WUTR: wakeup timer register
  #define RTC_WUTR (* ((volatile uint32_t *) (0x40002800 + 20)))

  // Field WUT: Wakeup auto-reload value bits
    inline uint32_t RTC_WUTR_WUT (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register ALRMAR: alarm A register
  #define RTC_ALRMAR (* ((volatile uint32_t *) (0x40002800 + 28)))

  // Field MSK4: Alarm A date mask
    const uint32_t RTC_ALRMAR_MSK4 = 1U << 31 ;

  // Field WDSEL: Week day selection
    const uint32_t RTC_ALRMAR_WDSEL = 1U << 30 ;

  // Field DT: Date tens in BCD format
    inline uint32_t RTC_ALRMAR_DT (const uint32_t inValue) {return (inValue & 0x3U) << 28 ; }

  // Field DU: Date units or day in BCD format
    inline uint32_t RTC_ALRMAR_DU (const uint32_t inValue) {return (inValue & 0xfU) << 24 ; }

  // Field MSK3: Alarm A hours mask
    const uint32_t RTC_ALRMAR_MSK3 = 1U << 23 ;

  // Field PM: AM/PM notation
    const uint32_t RTC_ALRMAR_PM = 1U << 22 ;

  // Field HT: Hour tens in BCD format
    inline uint32_t RTC_ALRMAR_HT (const uint32_t inValue) {return (inValue & 0x3U) << 20 ; }

  // Field HU: Hour units in BCD format
    inline uint32_t RTC_ALRMAR_HU (const uint32_t inValue) {return (inValue & 0xfU) << 16 ; }

  // Field MSK2: Alarm A minutes mask
    const uint32_t RTC_ALRMAR_MSK2 = 1U << 15 ;

  // Field MNT: Minute tens in BCD format
    inline uint32_t RTC_ALRMAR_MNT (const uint32_t inValue) {return (inValue & 0x7U) << 12 ; }

  // Field MNU: Minute units in BCD format
    inline uint32_t RTC_ALRMAR_MNU (const uint32_t inValue) {return (inValue & 0xfU) << 8 ; }

  // Field MSK1: Alarm A seconds mask
    const uint32_t RTC_ALRMAR_MSK1 = 1U << 7 ;

  // Field ST: Second tens in BCD format
    inline uint32_t RTC_ALRMAR_ST (const uint32_t inValue) {return (inValue & 0x7U) << 4 ; }

  // Field SU: Second units in BCD format
    inline uint32_t RTC_ALRMAR_SU (const uint32_t inValue) {return (inValue & 0xfU) << 0 ; }

//---  Register ALRMBR: alarm B register
  #define RTC_ALRMBR (* ((volatile uint32_t *) (0x40002800 + 32)))

  // Field MSK4: Alarm B date mask
    const uint32_t RTC_ALRMBR_MSK4 = 1U << 31 ;

  // Field WDSEL: Week day selection
    const uint32_t RTC_ALRMBR_WDSEL = 1U << 30 ;

  // Field DT: Date tens in BCD format
    inline uint32_t RTC_ALRMBR_DT (const uint32_t inValue) {return (inValue & 0x3U) << 28 ; }

  // Field DU: Date units or day in BCD format
    inline uint32_t RTC_ALRMBR_DU (const uint32_t inValue) {return (inValue & 0xfU) << 24 ; }

  // Field MSK3: Alarm B hours mask
    const uint32_t RTC_ALRMBR_MSK3 = 1U << 23 ;

  // Field PM: AM/PM notation
    const uint32_t RTC_ALRMBR_PM = 1U << 22 ;

  // Field HT: Hour tens in BCD format
    inline uint32_t RTC_ALRMBR_HT (const uint32_t inValue) {return (inValue & 0x3U) << 20 ; }

  // Field HU: Hour units in BCD format
    inline uint32_t RTC_ALRMBR_HU (const uint32_t inValue) {return (inValue & 0xfU) << 16 ; }

  // Field MSK2: Alarm B minutes mask
    const uint32_t RTC_ALRMBR_MSK2 = 1U << 15 ;

  // Field MNT: Minute tens in BCD format
    inline uint32_t RTC_ALRMBR_MNT (const uint32_t inValue) {return (inValue & 0x7U) << 12 ; }

  // Field MNU: Minute units in BCD format
    inline uint32_t RTC_ALRMBR_MNU (const uint32_t inValue) {return (inValue & 0xfU) << 8 ; }

  // Field MSK1: Alarm B seconds mask
    const uint32_t RTC_ALRMBR_MSK1 = 1U << 7 ;

  // Field ST: Second tens in BCD format
    inline uint32_t RTC_ALRMBR_ST (const uint32_t inValue) {return (inValue & 0x7U) << 4 ; }

  // Field SU: Second units in BCD format
    inline uint32_t RTC_ALRMBR_SU (const uint32_t inValue) {return (inValue & 0xfU) << 0 ; }

//---  Register WPR: write protection register
  #define RTC_WPR (* ((volatile uint32_t *) (0x40002800 + 36)))

  // Field KEY: Write protection key
    inline uint32_t RTC_WPR_KEY (const uint32_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register SSR: sub second register
  #define RTC_SSR (* ((const volatile uint32_t *) (0x40002800 + 40)))

  // Field SS: Sub second value
    inline uint32_t RTC_SSR_SS (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register SHIFTR: shift control register
  #define RTC_SHIFTR (* ((volatile uint32_t *) (0x40002800 + 44)))

  // Field ADD1S: Add one second
    const uint32_t RTC_SHIFTR_ADD1S = 1U << 31 ;

  // Field SUBFS: Subtract a fraction of a second
    inline uint32_t RTC_SHIFTR_SUBFS (const uint32_t inValue) {return (inValue & 0x7fffU) << 0 ; }

//---  Register TSTR: time stamp time register
  #define RTC_TSTR (* ((const volatile uint32_t *) (0x40002800 + 48)))

  // Field SU: Second units in BCD format
    inline uint32_t RTC_TSTR_SU (const uint32_t inValue) {return (inValue & 0xfU) << 0 ; }

  // Field ST: Second tens in BCD format
    inline uint32_t RTC_TSTR_ST (const uint32_t inValue) {return (inValue & 0x7U) << 4 ; }

  // Field MNU: Minute units in BCD format
    inline uint32_t RTC_TSTR_MNU (const uint32_t inValue) {return (inValue & 0xfU) << 8 ; }

  // Field MNT: Minute tens in BCD format
    inline uint32_t RTC_TSTR_MNT (const uint32_t inValue) {return (inValue & 0x7U) << 12 ; }

  // Field HU: Hour units in BCD format
    inline uint32_t RTC_TSTR_HU (const uint32_t inValue) {return (inValue & 0xfU) << 16 ; }

  // Field HT: Hour tens in BCD format
    inline uint32_t RTC_TSTR_HT (const uint32_t inValue) {return (inValue & 0x3U) << 20 ; }

  // Field PM: AM/PM notation
    const uint32_t RTC_TSTR_PM = 1U << 22 ;

//---  Register TSDR: time stamp date register
  #define RTC_TSDR (* ((const volatile uint32_t *) (0x40002800 + 52)))

  // Field WDU: Week day units
    inline uint32_t RTC_TSDR_WDU (const uint32_t inValue) {return (inValue & 0x7U) << 13 ; }

  // Field MT: Month tens in BCD format
    const uint32_t RTC_TSDR_MT = 1U << 12 ;

  // Field MU: Month units in BCD format
    inline uint32_t RTC_TSDR_MU (const uint32_t inValue) {return (inValue & 0xfU) << 8 ; }

  // Field DT: Date tens in BCD format
    inline uint32_t RTC_TSDR_DT (const uint32_t inValue) {return (inValue & 0x3U) << 4 ; }

  // Field DU: Date units in BCD format
    inline uint32_t RTC_TSDR_DU (const uint32_t inValue) {return (inValue & 0xfU) << 0 ; }

//---  Register TSSSR: timestamp sub second register
  #define RTC_TSSSR (* ((const volatile uint32_t *) (0x40002800 + 56)))

  // Field SS: Sub second value
    inline uint32_t RTC_TSSSR_SS (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register CALR: calibration register
  #define RTC_CALR (* ((volatile uint32_t *) (0x40002800 + 60)))

  // Field CALP: Increase frequency of RTC by 488.5 ppm
    const uint32_t RTC_CALR_CALP = 1U << 15 ;

  // Field CALW8: Use an 8-second calibration cycle period
    const uint32_t RTC_CALR_CALW8 = 1U << 14 ;

  // Field CALW16: Use a 16-second calibration cycle period
    const uint32_t RTC_CALR_CALW16 = 1U << 13 ;

  // Field CALM: Calibration minus
    inline uint32_t RTC_CALR_CALM (const uint32_t inValue) {return (inValue & 0x1ffU) << 0 ; }

//---  Register TAMPCR: tamper configuration register
  #define RTC_TAMPCR (* ((volatile uint32_t *) (0x40002800 + 64)))

  // Field TAMP1E: Tamper 1 detection enable
    const uint32_t RTC_TAMPCR_TAMP1E = 1U << 0 ;

  // Field TAMP1TRG: Active level for tamper 1
    const uint32_t RTC_TAMPCR_TAMP1TRG = 1U << 1 ;

  // Field TAMPIE: Tamper interrupt enable
    const uint32_t RTC_TAMPCR_TAMPIE = 1U << 2 ;

  // Field TAMP2E: Tamper 2 detection enable
    const uint32_t RTC_TAMPCR_TAMP2E = 1U << 3 ;

  // Field TAMP2TRG: Active level for tamper 2
    const uint32_t RTC_TAMPCR_TAMP2TRG = 1U << 4 ;

  // Field TAMP3E: Tamper 3 detection enable
    const uint32_t RTC_TAMPCR_TAMP3E = 1U << 5 ;

  // Field TAMP3TRG: Active level for tamper 3
    const uint32_t RTC_TAMPCR_TAMP3TRG = 1U << 6 ;

  // Field TAMPTS: Activate timestamp on tamper detection event
    const uint32_t RTC_TAMPCR_TAMPTS = 1U << 7 ;

  // Field TAMPFREQ: Tamper sampling frequency
    inline uint32_t RTC_TAMPCR_TAMPFREQ (const uint32_t inValue) {return (inValue & 0x7U) << 8 ; }

  // Field TAMPFLT: Tamper filter count
    inline uint32_t RTC_TAMPCR_TAMPFLT (const uint32_t inValue) {return (inValue & 0x3U) << 11 ; }

  // Field TAMPPRCH: Tamper precharge duration
    inline uint32_t RTC_TAMPCR_TAMPPRCH (const uint32_t inValue) {return (inValue & 0x3U) << 13 ; }

  // Field TAMPPUDIS: TAMPER pull-up disable
    const uint32_t RTC_TAMPCR_TAMPPUDIS = 1U << 15 ;

  // Field TAMP1IE: Tamper 1 interrupt enable
    const uint32_t RTC_TAMPCR_TAMP1IE = 1U << 16 ;

  // Field TAMP1NOERASE: Tamper 1 no erase
    const uint32_t RTC_TAMPCR_TAMP1NOERASE = 1U << 17 ;

  // Field TAMP1MF: Tamper 1 mask flag
    const uint32_t RTC_TAMPCR_TAMP1MF = 1U << 18 ;

  // Field TAMP2IE: Tamper 2 interrupt enable
    const uint32_t RTC_TAMPCR_TAMP2IE = 1U << 19 ;

  // Field TAMP2NOERASE: Tamper 2 no erase
    const uint32_t RTC_TAMPCR_TAMP2NOERASE = 1U << 20 ;

  // Field TAMP2MF: Tamper 2 mask flag
    const uint32_t RTC_TAMPCR_TAMP2MF = 1U << 21 ;

  // Field TAMP3IE: Tamper 3 interrupt enable
    const uint32_t RTC_TAMPCR_TAMP3IE = 1U << 22 ;

  // Field TAMP3NOERASE: Tamper 3 no erase
    const uint32_t RTC_TAMPCR_TAMP3NOERASE = 1U << 23 ;

  // Field TAMP3MF: Tamper 3 mask flag
    const uint32_t RTC_TAMPCR_TAMP3MF = 1U << 24 ;

//---  Register ALRMASSR: alarm A sub second register
  #define RTC_ALRMASSR (* ((volatile uint32_t *) (0x40002800 + 68)))

  // Field MASKSS: Mask the most-significant bits starting at this bit
    inline uint32_t RTC_ALRMASSR_MASKSS (const uint32_t inValue) {return (inValue & 0xfU) << 24 ; }

  // Field SS: Sub seconds value
    inline uint32_t RTC_ALRMASSR_SS (const uint32_t inValue) {return (inValue & 0x7fffU) << 0 ; }

//---  Register ALRMBSSR: alarm B sub second register
  #define RTC_ALRMBSSR (* ((volatile uint32_t *) (0x40002800 + 72)))

  // Field MASKSS: Mask the most-significant bits starting at this bit
    inline uint32_t RTC_ALRMBSSR_MASKSS (const uint32_t inValue) {return (inValue & 0xfU) << 24 ; }

  // Field SS: Sub seconds value
    inline uint32_t RTC_ALRMBSSR_SS (const uint32_t inValue) {return (inValue & 0x7fffU) << 0 ; }

//---  Register OR: option register
  #define RTC_OR (* ((volatile uint32_t *) (0x40002800 + 76)))

  // Field RTC_ALARM_TYPE: RTC_ALARM on PC13 output type
    const uint32_t RTC_OR_RTC_ALARM_TYPE = 1U << 0 ;

  // Field RTC_OUT_RMP: RTC_OUT remap
    const uint32_t RTC_OR_RTC_OUT_RMP = 1U << 1 ;

//---  Register BKP0R: backup register
  #define RTC_BKP0R (* ((volatile uint32_t *) (0x40002800 + 80)))

  // Field BKP: BKP
    inline uint32_t RTC_BKP0R_BKP (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register BKP1R: backup register
  #define RTC_BKP1R (* ((volatile uint32_t *) (0x40002800 + 84)))

  // Field BKP: BKP
    inline uint32_t RTC_BKP1R_BKP (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register BKP2R: backup register
  #define RTC_BKP2R (* ((volatile uint32_t *) (0x40002800 + 88)))

  // Field BKP: BKP
    inline uint32_t RTC_BKP2R_BKP (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register BKP3R: backup register
  #define RTC_BKP3R (* ((volatile uint32_t *) (0x40002800 + 92)))

  // Field BKP: BKP
    inline uint32_t RTC_BKP3R_BKP (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register BKP4R: backup register
  #define RTC_BKP4R (* ((volatile uint32_t *) (0x40002800 + 96)))

  // Field BKP: BKP
    inline uint32_t RTC_BKP4R_BKP (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register BKP5R: backup register
  #define RTC_BKP5R (* ((volatile uint32_t *) (0x40002800 + 100)))

  // Field BKP: BKP
    inline uint32_t RTC_BKP5R_BKP (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register BKP6R: backup register
  #define RTC_BKP6R (* ((volatile uint32_t *) (0x40002800 + 104)))

  // Field BKP: BKP
    inline uint32_t RTC_BKP6R_BKP (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register BKP7R: backup register
  #define RTC_BKP7R (* ((volatile uint32_t *) (0x40002800 + 108)))

  // Field BKP: BKP
    inline uint32_t RTC_BKP7R_BKP (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register BKP8R: backup register
  #define RTC_BKP8R (* ((volatile uint32_t *) (0x40002800 + 112)))

  // Field BKP: BKP
    inline uint32_t RTC_BKP8R_BKP (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register BKP9R: backup register
  #define RTC_BKP9R (* ((volatile uint32_t *) (0x40002800 + 116)))

  // Field BKP: BKP
    inline uint32_t RTC_BKP9R_BKP (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register BKP10R: backup register
  #define RTC_BKP10R (* ((volatile uint32_t *) (0x40002800 + 120)))

  // Field BKP: BKP
    inline uint32_t RTC_BKP10R_BKP (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register BKP11R: backup register
  #define RTC_BKP11R (* ((volatile uint32_t *) (0x40002800 + 124)))

  // Field BKP: BKP
    inline uint32_t RTC_BKP11R_BKP (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register BKP12R: backup register
  #define RTC_BKP12R (* ((volatile uint32_t *) (0x40002800 + 128)))

  // Field BKP: BKP
    inline uint32_t RTC_BKP12R_BKP (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register BKP13R: backup register
  #define RTC_BKP13R (* ((volatile uint32_t *) (0x40002800 + 132)))

  // Field BKP: BKP
    inline uint32_t RTC_BKP13R_BKP (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register BKP14R: backup register
  #define RTC_BKP14R (* ((volatile uint32_t *) (0x40002800 + 136)))

  // Field BKP: BKP
    inline uint32_t RTC_BKP14R_BKP (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register BKP15R: backup register
  #define RTC_BKP15R (* ((volatile uint32_t *) (0x40002800 + 140)))

  // Field BKP: BKP
    inline uint32_t RTC_BKP15R_BKP (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register BKP16R: backup register
  #define RTC_BKP16R (* ((volatile uint32_t *) (0x40002800 + 144)))

  // Field BKP: BKP
    inline uint32_t RTC_BKP16R_BKP (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register BKP17R: backup register
  #define RTC_BKP17R (* ((volatile uint32_t *) (0x40002800 + 148)))

  // Field BKP: BKP
    inline uint32_t RTC_BKP17R_BKP (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register BKP18R: backup register
  #define RTC_BKP18R (* ((volatile uint32_t *) (0x40002800 + 152)))

  // Field BKP: BKP
    inline uint32_t RTC_BKP18R_BKP (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register BKP19R: backup register
  #define RTC_BKP19R (* ((volatile uint32_t *) (0x40002800 + 156)))

  // Field BKP: BKP
    inline uint32_t RTC_BKP19R_BKP (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register BKP20R: backup register
  #define RTC_BKP20R (* ((volatile uint32_t *) (0x40002800 + 160)))

  // Field BKP: BKP
    inline uint32_t RTC_BKP20R_BKP (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register BKP21R: backup register
  #define RTC_BKP21R (* ((volatile uint32_t *) (0x40002800 + 164)))

  // Field BKP: BKP
    inline uint32_t RTC_BKP21R_BKP (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register BKP22R: backup register
  #define RTC_BKP22R (* ((volatile uint32_t *) (0x40002800 + 168)))

  // Field BKP: BKP
    inline uint32_t RTC_BKP22R_BKP (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register BKP23R: backup register
  #define RTC_BKP23R (* ((volatile uint32_t *) (0x40002800 + 172)))

  // Field BKP: BKP
    inline uint32_t RTC_BKP23R_BKP (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register BKP24R: backup register
  #define RTC_BKP24R (* ((volatile uint32_t *) (0x40002800 + 176)))

  // Field BKP: BKP
    inline uint32_t RTC_BKP24R_BKP (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register BKP25R: backup register
  #define RTC_BKP25R (* ((volatile uint32_t *) (0x40002800 + 180)))

  // Field BKP: BKP
    inline uint32_t RTC_BKP25R_BKP (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register BKP26R: backup register
  #define RTC_BKP26R (* ((volatile uint32_t *) (0x40002800 + 184)))

  // Field BKP: BKP
    inline uint32_t RTC_BKP26R_BKP (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register BKP27R: backup register
  #define RTC_BKP27R (* ((volatile uint32_t *) (0x40002800 + 188)))

  // Field BKP: BKP
    inline uint32_t RTC_BKP27R_BKP (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register BKP28R: backup register
  #define RTC_BKP28R (* ((volatile uint32_t *) (0x40002800 + 192)))

  // Field BKP: BKP
    inline uint32_t RTC_BKP28R_BKP (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register BKP29R: backup register
  #define RTC_BKP29R (* ((volatile uint32_t *) (0x40002800 + 196)))

  // Field BKP: BKP
    inline uint32_t RTC_BKP29R_BKP (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register BKP30R: backup register
  #define RTC_BKP30R (* ((volatile uint32_t *) (0x40002800 + 200)))

  // Field BKP: BKP
    inline uint32_t RTC_BKP30R_BKP (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register BKP31R: backup register
  #define RTC_BKP31R (* ((volatile uint32_t *) (0x40002800 + 204)))

  // Field BKP: BKP
    inline uint32_t RTC_BKP31R_BKP (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//------------------------------------------------------------------------------
// Peripheral SAI1: Serial audio interface
//------------------------------------------------------------------------------

//---  Register BCR1: BConfiguration register 1
  #define SAI1_BCR1 (* ((volatile uint32_t *) (0x40015400 + 36)))

  // Field MCKDIV: Master clock divider
    inline uint32_t SAI1_BCR1_MCKDIV (const uint32_t inValue) {return (inValue & 0xfU) << 20 ; }

  // Field NODIV: No divider
    const uint32_t SAI1_BCR1_NODIV = 1U << 19 ;

  // Field DMAEN: DMA enable
    const uint32_t SAI1_BCR1_DMAEN = 1U << 17 ;

  // Field SAIBEN: Audio block B enable
    const uint32_t SAI1_BCR1_SAIBEN = 1U << 16 ;

  // Field OutDri: Output drive
    const uint32_t SAI1_BCR1_OutDri = 1U << 13 ;

  // Field MONO: Mono mode
    const uint32_t SAI1_BCR1_MONO = 1U << 12 ;

  // Field SYNCEN: Synchronization enable
    inline uint32_t SAI1_BCR1_SYNCEN (const uint32_t inValue) {return (inValue & 0x3U) << 10 ; }

  // Field CKSTR: Clock strobing edge
    const uint32_t SAI1_BCR1_CKSTR = 1U << 9 ;

  // Field LSBFIRST: Least significant bit first
    const uint32_t SAI1_BCR1_LSBFIRST = 1U << 8 ;

  // Field DS: Data size
    inline uint32_t SAI1_BCR1_DS (const uint32_t inValue) {return (inValue & 0x7U) << 5 ; }

  // Field PRTCFG: Protocol configuration
    inline uint32_t SAI1_BCR1_PRTCFG (const uint32_t inValue) {return (inValue & 0x3U) << 2 ; }

  // Field MODE: Audio block mode
    inline uint32_t SAI1_BCR1_MODE (const uint32_t inValue) {return (inValue & 0x3U) << 0 ; }

//---  Register BCR2: BConfiguration register 2
  #define SAI1_BCR2 (* ((volatile uint32_t *) (0x40015400 + 40)))

  // Field COMP: Companding mode
    inline uint32_t SAI1_BCR2_COMP (const uint32_t inValue) {return (inValue & 0x3U) << 14 ; }

  // Field CPL: Complement bit
    const uint32_t SAI1_BCR2_CPL = 1U << 13 ;

  // Field MUTECN: Mute counter
    inline uint32_t SAI1_BCR2_MUTECN (const uint32_t inValue) {return (inValue & 0x3fU) << 7 ; }

  // Field MUTEVAL: Mute value
    const uint32_t SAI1_BCR2_MUTEVAL = 1U << 6 ;

  // Field MUTE: Mute
    const uint32_t SAI1_BCR2_MUTE = 1U << 5 ;

  // Field TRIS: Tristate management on data line
    const uint32_t SAI1_BCR2_TRIS = 1U << 4 ;

  // Field FFLUS: FIFO flush
    const uint32_t SAI1_BCR2_FFLUS = 1U << 3 ;

  // Field FTH: FIFO threshold
    inline uint32_t SAI1_BCR2_FTH (const uint32_t inValue) {return (inValue & 0x7U) << 0 ; }

//---  Register BFRCR: BFRCR
  #define SAI1_BFRCR (* ((volatile uint32_t *) (0x40015400 + 44)))

  // Field FSOFF: Frame synchronization offset
    const uint32_t SAI1_BFRCR_FSOFF = 1U << 18 ;

  // Field FSPOL: Frame synchronization polarity
    const uint32_t SAI1_BFRCR_FSPOL = 1U << 17 ;

  // Field FSDEF: Frame synchronization definition
    const uint32_t SAI1_BFRCR_FSDEF = 1U << 16 ;

  // Field FSALL: Frame synchronization active level length
    inline uint32_t SAI1_BFRCR_FSALL (const uint32_t inValue) {return (inValue & 0x7fU) << 8 ; }

  // Field FRL: Frame length
    inline uint32_t SAI1_BFRCR_FRL (const uint32_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register BSLOTR: BSlot register
  #define SAI1_BSLOTR (* ((volatile uint32_t *) (0x40015400 + 48)))

  // Field SLOTEN: Slot enable
    inline uint32_t SAI1_BSLOTR_SLOTEN (const uint32_t inValue) {return (inValue & 0xffffU) << 16 ; }

  // Field NBSLOT: Number of slots in an audio frame
    inline uint32_t SAI1_BSLOTR_NBSLOT (const uint32_t inValue) {return (inValue & 0xfU) << 8 ; }

  // Field SLOTSZ: Slot size
    inline uint32_t SAI1_BSLOTR_SLOTSZ (const uint32_t inValue) {return (inValue & 0x3U) << 6 ; }

  // Field FBOFF: First bit offset
    inline uint32_t SAI1_BSLOTR_FBOFF (const uint32_t inValue) {return (inValue & 0x1fU) << 0 ; }

//---  Register BIM: BInterrupt mask register2
  #define SAI1_BIM (* ((volatile uint32_t *) (0x40015400 + 52)))

  // Field LFSDETIE: Late frame synchronization detection interrupt enable
    const uint32_t SAI1_BIM_LFSDETIE = 1U << 6 ;

  // Field AFSDETIE: Anticipated frame synchronization detection interrupt enable
    const uint32_t SAI1_BIM_AFSDETIE = 1U << 5 ;

  // Field CNRDYIE: Codec not ready interrupt enable
    const uint32_t SAI1_BIM_CNRDYIE = 1U << 4 ;

  // Field FREQIE: FIFO request interrupt enable
    const uint32_t SAI1_BIM_FREQIE = 1U << 3 ;

  // Field WCKCFG: Wrong clock configuration interrupt enable
    const uint32_t SAI1_BIM_WCKCFG = 1U << 2 ;

  // Field MUTEDET: Mute detection interrupt enable
    const uint32_t SAI1_BIM_MUTEDET = 1U << 1 ;

  // Field OVRUDRIE: Overrun/underrun interrupt enable
    const uint32_t SAI1_BIM_OVRUDRIE = 1U << 0 ;

//---  Register BSR: BStatus register
  #define SAI1_BSR (* ((const volatile uint32_t *) (0x40015400 + 56)))

  // Field FLVL: FIFO level threshold
    inline uint32_t SAI1_BSR_FLVL (const uint32_t inValue) {return (inValue & 0x7U) << 16 ; }

  // Field LFSDET: Late frame synchronization detection
    const uint32_t SAI1_BSR_LFSDET = 1U << 6 ;

  // Field AFSDET: Anticipated frame synchronization detection
    const uint32_t SAI1_BSR_AFSDET = 1U << 5 ;

  // Field CNRDY: Codec not ready
    const uint32_t SAI1_BSR_CNRDY = 1U << 4 ;

  // Field FREQ: FIFO request
    const uint32_t SAI1_BSR_FREQ = 1U << 3 ;

  // Field WCKCFG: Wrong clock configuration flag
    const uint32_t SAI1_BSR_WCKCFG = 1U << 2 ;

  // Field MUTEDET: Mute detection
    const uint32_t SAI1_BSR_MUTEDET = 1U << 1 ;

  // Field OVRUDR: Overrun / underrun
    const uint32_t SAI1_BSR_OVRUDR = 1U << 0 ;

//---  Register BCLRFR: BClear flag register
  #define SAI1_BCLRFR (* ((volatile uint32_t *) (0x40015400 + 60)))

  // Field LFSDET: Clear late frame synchronization detection flag
    const uint32_t SAI1_BCLRFR_LFSDET = 1U << 6 ;

  // Field CAFSDET: Clear anticipated frame synchronization detection flag
    const uint32_t SAI1_BCLRFR_CAFSDET = 1U << 5 ;

  // Field CNRDY: Clear codec not ready flag
    const uint32_t SAI1_BCLRFR_CNRDY = 1U << 4 ;

  // Field WCKCFG: Clear wrong clock configuration flag
    const uint32_t SAI1_BCLRFR_WCKCFG = 1U << 2 ;

  // Field MUTEDET: Mute detection flag
    const uint32_t SAI1_BCLRFR_MUTEDET = 1U << 1 ;

  // Field OVRUDR: Clear overrun / underrun
    const uint32_t SAI1_BCLRFR_OVRUDR = 1U << 0 ;

//---  Register BDR: BData register
  #define SAI1_BDR (* ((volatile uint32_t *) (0x40015400 + 64)))

  // Field DATA: Data
    inline uint32_t SAI1_BDR_DATA (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register ACR1: AConfiguration register 1
  #define SAI1_ACR1 (* ((volatile uint32_t *) (0x40015400 + 4)))

  // Field MCKDIV: Master clock divider
    inline uint32_t SAI1_ACR1_MCKDIV (const uint32_t inValue) {return (inValue & 0xfU) << 20 ; }

  // Field NODIV: No divider
    const uint32_t SAI1_ACR1_NODIV = 1U << 19 ;

  // Field DMAEN: DMA enable
    const uint32_t SAI1_ACR1_DMAEN = 1U << 17 ;

  // Field SAIAEN: Audio block A enable
    const uint32_t SAI1_ACR1_SAIAEN = 1U << 16 ;

  // Field OutDri: Output drive
    const uint32_t SAI1_ACR1_OutDri = 1U << 13 ;

  // Field MONO: Mono mode
    const uint32_t SAI1_ACR1_MONO = 1U << 12 ;

  // Field SYNCEN: Synchronization enable
    inline uint32_t SAI1_ACR1_SYNCEN (const uint32_t inValue) {return (inValue & 0x3U) << 10 ; }

  // Field CKSTR: Clock strobing edge
    const uint32_t SAI1_ACR1_CKSTR = 1U << 9 ;

  // Field LSBFIRST: Least significant bit first
    const uint32_t SAI1_ACR1_LSBFIRST = 1U << 8 ;

  // Field DS: Data size
    inline uint32_t SAI1_ACR1_DS (const uint32_t inValue) {return (inValue & 0x7U) << 5 ; }

  // Field PRTCFG: Protocol configuration
    inline uint32_t SAI1_ACR1_PRTCFG (const uint32_t inValue) {return (inValue & 0x3U) << 2 ; }

  // Field MODE: Audio block mode
    inline uint32_t SAI1_ACR1_MODE (const uint32_t inValue) {return (inValue & 0x3U) << 0 ; }

//---  Register ACR2: AConfiguration register 2
  #define SAI1_ACR2 (* ((volatile uint32_t *) (0x40015400 + 8)))

  // Field COMP: Companding mode
    inline uint32_t SAI1_ACR2_COMP (const uint32_t inValue) {return (inValue & 0x3U) << 14 ; }

  // Field CPL: Complement bit
    const uint32_t SAI1_ACR2_CPL = 1U << 13 ;

  // Field MUTECN: Mute counter
    inline uint32_t SAI1_ACR2_MUTECN (const uint32_t inValue) {return (inValue & 0x3fU) << 7 ; }

  // Field MUTEVAL: Mute value
    const uint32_t SAI1_ACR2_MUTEVAL = 1U << 6 ;

  // Field MUTE: Mute
    const uint32_t SAI1_ACR2_MUTE = 1U << 5 ;

  // Field TRIS: Tristate management on data line
    const uint32_t SAI1_ACR2_TRIS = 1U << 4 ;

  // Field FFLUS: FIFO flush
    const uint32_t SAI1_ACR2_FFLUS = 1U << 3 ;

  // Field FTH: FIFO threshold
    inline uint32_t SAI1_ACR2_FTH (const uint32_t inValue) {return (inValue & 0x7U) << 0 ; }

//---  Register AFRCR: AFRCR
  #define SAI1_AFRCR (* ((volatile uint32_t *) (0x40015400 + 12)))

  // Field FSOFF: Frame synchronization offset
    const uint32_t SAI1_AFRCR_FSOFF = 1U << 18 ;

  // Field FSPOL: Frame synchronization polarity
    const uint32_t SAI1_AFRCR_FSPOL = 1U << 17 ;

  // Field FSDEF: Frame synchronization definition
    const uint32_t SAI1_AFRCR_FSDEF = 1U << 16 ;

  // Field FSALL: Frame synchronization active level length
    inline uint32_t SAI1_AFRCR_FSALL (const uint32_t inValue) {return (inValue & 0x7fU) << 8 ; }

  // Field FRL: Frame length
    inline uint32_t SAI1_AFRCR_FRL (const uint32_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register ASLOTR: ASlot register
  #define SAI1_ASLOTR (* ((volatile uint32_t *) (0x40015400 + 16)))

  // Field SLOTEN: Slot enable
    inline uint32_t SAI1_ASLOTR_SLOTEN (const uint32_t inValue) {return (inValue & 0xffffU) << 16 ; }

  // Field NBSLOT: Number of slots in an audio frame
    inline uint32_t SAI1_ASLOTR_NBSLOT (const uint32_t inValue) {return (inValue & 0xfU) << 8 ; }

  // Field SLOTSZ: Slot size
    inline uint32_t SAI1_ASLOTR_SLOTSZ (const uint32_t inValue) {return (inValue & 0x3U) << 6 ; }

  // Field FBOFF: First bit offset
    inline uint32_t SAI1_ASLOTR_FBOFF (const uint32_t inValue) {return (inValue & 0x1fU) << 0 ; }

//---  Register AIM: AInterrupt mask register2
  #define SAI1_AIM (* ((volatile uint32_t *) (0x40015400 + 20)))

  // Field LFSDET: Late frame synchronization detection interrupt enable
    const uint32_t SAI1_AIM_LFSDET = 1U << 6 ;

  // Field AFSDETIE: Anticipated frame synchronization detection interrupt enable
    const uint32_t SAI1_AIM_AFSDETIE = 1U << 5 ;

  // Field CNRDYIE: Codec not ready interrupt enable
    const uint32_t SAI1_AIM_CNRDYIE = 1U << 4 ;

  // Field FREQIE: FIFO request interrupt enable
    const uint32_t SAI1_AIM_FREQIE = 1U << 3 ;

  // Field WCKCFG: Wrong clock configuration interrupt enable
    const uint32_t SAI1_AIM_WCKCFG = 1U << 2 ;

  // Field MUTEDET: Mute detection interrupt enable
    const uint32_t SAI1_AIM_MUTEDET = 1U << 1 ;

  // Field OVRUDRIE: Overrun/underrun interrupt enable
    const uint32_t SAI1_AIM_OVRUDRIE = 1U << 0 ;

//---  Register ASR: AStatus register
  #define SAI1_ASR (* ((volatile uint32_t *) (0x40015400 + 24)))

  // Field FLVL: FIFO level threshold
    inline uint32_t SAI1_ASR_FLVL (const uint32_t inValue) {return (inValue & 0x7U) << 16 ; }

  // Field LFSDET: Late frame synchronization detection
    const uint32_t SAI1_ASR_LFSDET = 1U << 6 ;

  // Field AFSDET: Anticipated frame synchronization detection
    const uint32_t SAI1_ASR_AFSDET = 1U << 5 ;

  // Field CNRDY: Codec not ready
    const uint32_t SAI1_ASR_CNRDY = 1U << 4 ;

  // Field FREQ: FIFO request
    const uint32_t SAI1_ASR_FREQ = 1U << 3 ;

  // Field WCKCFG: Wrong clock configuration flag. This bit is read only
    const uint32_t SAI1_ASR_WCKCFG = 1U << 2 ;

  // Field MUTEDET: Mute detection
    const uint32_t SAI1_ASR_MUTEDET = 1U << 1 ;

  // Field OVRUDR: Overrun / underrun
    const uint32_t SAI1_ASR_OVRUDR = 1U << 0 ;

//---  Register ACLRFR: AClear flag register
  #define SAI1_ACLRFR (* ((volatile uint32_t *) (0x40015400 + 28)))

  // Field LFSDET: Clear late frame synchronization detection flag
    const uint32_t SAI1_ACLRFR_LFSDET = 1U << 6 ;

  // Field CAFSDET: Clear anticipated frame synchronization detection flag
    const uint32_t SAI1_ACLRFR_CAFSDET = 1U << 5 ;

  // Field CNRDY: Clear codec not ready flag
    const uint32_t SAI1_ACLRFR_CNRDY = 1U << 4 ;

  // Field WCKCFG: Clear wrong clock configuration flag
    const uint32_t SAI1_ACLRFR_WCKCFG = 1U << 2 ;

  // Field MUTEDET: Mute detection flag
    const uint32_t SAI1_ACLRFR_MUTEDET = 1U << 1 ;

  // Field OVRUDR: Clear overrun / underrun
    const uint32_t SAI1_ACLRFR_OVRUDR = 1U << 0 ;

//---  Register ADR: AData register
  #define SAI1_ADR (* ((volatile uint32_t *) (0x40015400 + 32)))

  // Field DATA: Data
    inline uint32_t SAI1_ADR_DATA (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//------------------------------------------------------------------------------
// Peripheral SCB: System control block
//------------------------------------------------------------------------------

//---  Register CPUID: CPUID base register
  #define SCB_CPUID (* ((const volatile uint32_t *) (0xe000ed00 + 0)))

  // Field Revision: Revision number
    inline uint32_t SCB_CPUID_Revision (const uint32_t inValue) {return (inValue & 0xfU) << 0 ; }

  // Field PartNo: Part number of the processor
    inline uint32_t SCB_CPUID_PartNo (const uint32_t inValue) {return (inValue & 0xfffU) << 4 ; }

  // Field Constant: Reads as 0xF
    inline uint32_t SCB_CPUID_Constant (const uint32_t inValue) {return (inValue & 0xfU) << 16 ; }

  // Field Variant: Variant number
    inline uint32_t SCB_CPUID_Variant (const uint32_t inValue) {return (inValue & 0xfU) << 20 ; }

  // Field Implementer: Implementer code
    inline uint32_t SCB_CPUID_Implementer (const uint32_t inValue) {return (inValue & 0xffU) << 24 ; }

//---  Register ICSR: Interrupt control and state
          register
  #define SCB_ICSR (* ((volatile uint32_t *) (0xe000ed00 + 4)))

  // Field VECTACTIVE: Active vector
    inline uint32_t SCB_ICSR_VECTACTIVE (const uint32_t inValue) {return (inValue & 0x1ffU) << 0 ; }

  // Field RETTOBASE: Return to base level
    const uint32_t SCB_ICSR_RETTOBASE = 1U << 11 ;

  // Field VECTPENDING: Pending vector
    inline uint32_t SCB_ICSR_VECTPENDING (const uint32_t inValue) {return (inValue & 0x7fU) << 12 ; }

  // Field ISRPENDING: Interrupt pending flag
    const uint32_t SCB_ICSR_ISRPENDING = 1U << 22 ;

  // Field PENDSTCLR: SysTick exception clear-pending bit
    const uint32_t SCB_ICSR_PENDSTCLR = 1U << 25 ;

  // Field PENDSTSET: SysTick exception set-pending bit
    const uint32_t SCB_ICSR_PENDSTSET = 1U << 26 ;

  // Field PENDSVCLR: PendSV clear-pending bit
    const uint32_t SCB_ICSR_PENDSVCLR = 1U << 27 ;

  // Field PENDSVSET: PendSV set-pending bit
    const uint32_t SCB_ICSR_PENDSVSET = 1U << 28 ;

  // Field NMIPENDSET: NMI set-pending bit.
    const uint32_t SCB_ICSR_NMIPENDSET = 1U << 31 ;

//---  Register VTOR: Vector table offset register
  #define SCB_VTOR (* ((volatile uint32_t *) (0xe000ed00 + 8)))

  // Field TBLOFF: Vector table base offset field
    inline uint32_t SCB_VTOR_TBLOFF (const uint32_t inValue) {return (inValue & 0x1fffffU) << 9 ; }

//---  Register AIRCR: Application interrupt and reset control
          register
  #define SCB_AIRCR (* ((volatile uint32_t *) (0xe000ed00 + 12)))

  // Field VECTRESET: VECTRESET
    const uint32_t SCB_AIRCR_VECTRESET = 1U << 0 ;

  // Field VECTCLRACTIVE: VECTCLRACTIVE
    const uint32_t SCB_AIRCR_VECTCLRACTIVE = 1U << 1 ;

  // Field SYSRESETREQ: SYSRESETREQ
    const uint32_t SCB_AIRCR_SYSRESETREQ = 1U << 2 ;

  // Field PRIGROUP: PRIGROUP
    inline uint32_t SCB_AIRCR_PRIGROUP (const uint32_t inValue) {return (inValue & 0x7U) << 8 ; }

  // Field ENDIANESS: ENDIANESS
    const uint32_t SCB_AIRCR_ENDIANESS = 1U << 15 ;

  // Field VECTKEYSTAT: Register key
    inline uint32_t SCB_AIRCR_VECTKEYSTAT (const uint32_t inValue) {return (inValue & 0xffffU) << 16 ; }

//---  Register SCR: System control register
  #define SCB_SCR (* ((volatile uint32_t *) (0xe000ed00 + 16)))

  // Field SLEEPONEXIT: SLEEPONEXIT
    const uint32_t SCB_SCR_SLEEPONEXIT = 1U << 1 ;

  // Field SLEEPDEEP: SLEEPDEEP
    const uint32_t SCB_SCR_SLEEPDEEP = 1U << 2 ;

  // Field SEVEONPEND: Send Event on Pending bit
    const uint32_t SCB_SCR_SEVEONPEND = 1U << 4 ;

//---  Register CCR: Configuration and control
          register
  #define SCB_CCR (* ((volatile uint32_t *) (0xe000ed00 + 20)))

  // Field NONBASETHRDENA: Configures how the processor enters Thread mode
    const uint32_t SCB_CCR_NONBASETHRDENA = 1U << 0 ;

  // Field USERSETMPEND: USERSETMPEND
    const uint32_t SCB_CCR_USERSETMPEND = 1U << 1 ;

  // Field UNALIGN__TRP: UNALIGN_ TRP
    const uint32_t SCB_CCR_UNALIGN__TRP = 1U << 3 ;

  // Field DIV_0_TRP: DIV_0_TRP
    const uint32_t SCB_CCR_DIV_0_TRP = 1U << 4 ;

  // Field BFHFNMIGN: BFHFNMIGN
    const uint32_t SCB_CCR_BFHFNMIGN = 1U << 8 ;

  // Field STKALIGN: STKALIGN
    const uint32_t SCB_CCR_STKALIGN = 1U << 9 ;

//---  Register SHPR1: System handler priority
          registers
  #define SCB_SHPR1 (* ((volatile uint32_t *) (0xe000ed00 + 24)))

  // Field PRI_4: Priority of system handler 4
    inline uint32_t SCB_SHPR1_PRI_4 (const uint32_t inValue) {return (inValue & 0xffU) << 0 ; }

  // Field PRI_5: Priority of system handler 5
    inline uint32_t SCB_SHPR1_PRI_5 (const uint32_t inValue) {return (inValue & 0xffU) << 8 ; }

  // Field PRI_6: Priority of system handler 6
    inline uint32_t SCB_SHPR1_PRI_6 (const uint32_t inValue) {return (inValue & 0xffU) << 16 ; }

//---  Register SHPR2: System handler priority
          registers
  #define SCB_SHPR2 (* ((volatile uint32_t *) (0xe000ed00 + 28)))

  // Field PRI_11: Priority of system handler 11
    inline uint32_t SCB_SHPR2_PRI_11 (const uint32_t inValue) {return (inValue & 0xffU) << 24 ; }

//---  Register SHPR3: System handler priority
          registers
  #define SCB_SHPR3 (* ((volatile uint32_t *) (0xe000ed00 + 32)))

  // Field PRI_14: Priority of system handler 14
    inline uint32_t SCB_SHPR3_PRI_14 (const uint32_t inValue) {return (inValue & 0xffU) << 16 ; }

  // Field PRI_15: Priority of system handler 15
    inline uint32_t SCB_SHPR3_PRI_15 (const uint32_t inValue) {return (inValue & 0xffU) << 24 ; }

//---  Register SHCRS: System handler control and state
          register
  #define SCB_SHCRS (* ((volatile uint32_t *) (0xe000ed00 + 36)))

  // Field MEMFAULTACT: Memory management fault exception active bit
    const uint32_t SCB_SHCRS_MEMFAULTACT = 1U << 0 ;

  // Field BUSFAULTACT: Bus fault exception active bit
    const uint32_t SCB_SHCRS_BUSFAULTACT = 1U << 1 ;

  // Field USGFAULTACT: Usage fault exception active bit
    const uint32_t SCB_SHCRS_USGFAULTACT = 1U << 3 ;

  // Field SVCALLACT: SVC call active bit
    const uint32_t SCB_SHCRS_SVCALLACT = 1U << 7 ;

  // Field MONITORACT: Debug monitor active bit
    const uint32_t SCB_SHCRS_MONITORACT = 1U << 8 ;

  // Field PENDSVACT: PendSV exception active bit
    const uint32_t SCB_SHCRS_PENDSVACT = 1U << 10 ;

  // Field SYSTICKACT: SysTick exception active bit
    const uint32_t SCB_SHCRS_SYSTICKACT = 1U << 11 ;

  // Field USGFAULTPENDED: Usage fault exception pending bit
    const uint32_t SCB_SHCRS_USGFAULTPENDED = 1U << 12 ;

  // Field MEMFAULTPENDED: Memory management fault exception pending bit
    const uint32_t SCB_SHCRS_MEMFAULTPENDED = 1U << 13 ;

  // Field BUSFAULTPENDED: Bus fault exception pending bit
    const uint32_t SCB_SHCRS_BUSFAULTPENDED = 1U << 14 ;

  // Field SVCALLPENDED: SVC call pending bit
    const uint32_t SCB_SHCRS_SVCALLPENDED = 1U << 15 ;

  // Field MEMFAULTENA: Memory management fault enable bit
    const uint32_t SCB_SHCRS_MEMFAULTENA = 1U << 16 ;

  // Field BUSFAULTENA: Bus fault enable bit
    const uint32_t SCB_SHCRS_BUSFAULTENA = 1U << 17 ;

  // Field USGFAULTENA: Usage fault enable bit
    const uint32_t SCB_SHCRS_USGFAULTENA = 1U << 18 ;

//---  Register CFSR_UFSR_BFSR_MMFSR: Configurable fault status
          register
  #define SCB_CFSR_UFSR_BFSR_MMFSR (* ((volatile uint32_t *) (0xe000ed00 + 40)))

  // Field IACCVIOL: Instruction access violation flag
    const uint32_t SCB_CFSR_UFSR_BFSR_MMFSR_IACCVIOL = 1U << 1 ;

  // Field MUNSTKERR: Memory manager fault on unstacking for a return from exception
    const uint32_t SCB_CFSR_UFSR_BFSR_MMFSR_MUNSTKERR = 1U << 3 ;

  // Field MSTKERR: Memory manager fault on stacking for exception entry.
    const uint32_t SCB_CFSR_UFSR_BFSR_MMFSR_MSTKERR = 1U << 4 ;

  // Field MLSPERR: MLSPERR
    const uint32_t SCB_CFSR_UFSR_BFSR_MMFSR_MLSPERR = 1U << 5 ;

  // Field MMARVALID: Memory Management Fault Address Register (MMAR) valid flag
    const uint32_t SCB_CFSR_UFSR_BFSR_MMFSR_MMARVALID = 1U << 7 ;

  // Field IBUSERR: Instruction bus error
    const uint32_t SCB_CFSR_UFSR_BFSR_MMFSR_IBUSERR = 1U << 8 ;

  // Field PRECISERR: Precise data bus error
    const uint32_t SCB_CFSR_UFSR_BFSR_MMFSR_PRECISERR = 1U << 9 ;

  // Field IMPRECISERR: Imprecise data bus error
    const uint32_t SCB_CFSR_UFSR_BFSR_MMFSR_IMPRECISERR = 1U << 10 ;

  // Field UNSTKERR: Bus fault on unstacking for a return from exception
    const uint32_t SCB_CFSR_UFSR_BFSR_MMFSR_UNSTKERR = 1U << 11 ;

  // Field STKERR: Bus fault on stacking for exception entry
    const uint32_t SCB_CFSR_UFSR_BFSR_MMFSR_STKERR = 1U << 12 ;

  // Field LSPERR: Bus fault on floating-point lazy state preservation
    const uint32_t SCB_CFSR_UFSR_BFSR_MMFSR_LSPERR = 1U << 13 ;

  // Field BFARVALID: Bus Fault Address Register (BFAR) valid flag
    const uint32_t SCB_CFSR_UFSR_BFSR_MMFSR_BFARVALID = 1U << 15 ;

  // Field UNDEFINSTR: Undefined instruction usage fault
    const uint32_t SCB_CFSR_UFSR_BFSR_MMFSR_UNDEFINSTR = 1U << 16 ;

  // Field INVSTATE: Invalid state usage fault
    const uint32_t SCB_CFSR_UFSR_BFSR_MMFSR_INVSTATE = 1U << 17 ;

  // Field INVPC: Invalid PC load usage fault
    const uint32_t SCB_CFSR_UFSR_BFSR_MMFSR_INVPC = 1U << 18 ;

  // Field NOCP: No coprocessor usage fault.
    const uint32_t SCB_CFSR_UFSR_BFSR_MMFSR_NOCP = 1U << 19 ;

  // Field UNALIGNED: Unaligned access usage fault
    const uint32_t SCB_CFSR_UFSR_BFSR_MMFSR_UNALIGNED = 1U << 24 ;

  // Field DIVBYZERO: Divide by zero usage fault
    const uint32_t SCB_CFSR_UFSR_BFSR_MMFSR_DIVBYZERO = 1U << 25 ;

//---  Register HFSR: Hard fault status register
  #define SCB_HFSR (* ((volatile uint32_t *) (0xe000ed00 + 44)))

  // Field VECTTBL: Vector table hard fault
    const uint32_t SCB_HFSR_VECTTBL = 1U << 1 ;

  // Field FORCED: Forced hard fault
    const uint32_t SCB_HFSR_FORCED = 1U << 30 ;

  // Field DEBUG_VT: Reserved for Debug use
    const uint32_t SCB_HFSR_DEBUG_VT = 1U << 31 ;

//---  Register MMFAR: Memory management fault address
          register
  #define SCB_MMFAR (* ((volatile uint32_t *) (0xe000ed00 + 52)))

  // Field MMFAR: Memory management fault address
    inline uint32_t SCB_MMFAR_MMFAR (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register BFAR: Bus fault address register
  #define SCB_BFAR (* ((volatile uint32_t *) (0xe000ed00 + 56)))

  // Field BFAR: Bus fault address
    inline uint32_t SCB_BFAR_BFAR (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register AFSR: Auxiliary fault status
          register
  #define SCB_AFSR (* ((volatile uint32_t *) (0xe000ed00 + 60)))

  // Field IMPDEF: Implementation defined
    inline uint32_t SCB_AFSR_IMPDEF (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//------------------------------------------------------------------------------
// Peripheral SCB_ACTRL: System control block ACTLR
//------------------------------------------------------------------------------

//---  Register ACTRL: Auxiliary control register
  #define SCB_ACTRL_ACTRL (* ((volatile uint32_t *) (0xe000e008 + 0)))

  // Field DISMCYCINT: DISMCYCINT
    const uint32_t SCB_ACTRL_ACTRL_DISMCYCINT = 1U << 0 ;

  // Field DISDEFWBUF: DISDEFWBUF
    const uint32_t SCB_ACTRL_ACTRL_DISDEFWBUF = 1U << 1 ;

  // Field DISFOLD: DISFOLD
    const uint32_t SCB_ACTRL_ACTRL_DISFOLD = 1U << 2 ;

  // Field DISFPCA: DISFPCA
    const uint32_t SCB_ACTRL_ACTRL_DISFPCA = 1U << 8 ;

  // Field DISOOFP: DISOOFP
    const uint32_t SCB_ACTRL_ACTRL_DISOOFP = 1U << 9 ;

//------------------------------------------------------------------------------
// Peripheral SDMMC: Secure digital input/output       interface
//------------------------------------------------------------------------------

//---  Register POWER: power control register
  #define SDMMC_POWER (* ((volatile uint32_t *) (0x40012800 + 0)))

  // Field PWRCTRL: PWRCTRL
    inline uint32_t SDMMC_POWER_PWRCTRL (const uint32_t inValue) {return (inValue & 0x3U) << 0 ; }

//---  Register CLKCR: SDI clock control register
  #define SDMMC_CLKCR (* ((volatile uint32_t *) (0x40012800 + 4)))

  // Field HWFC_EN: HW Flow Control enable
    const uint32_t SDMMC_CLKCR_HWFC_EN = 1U << 14 ;

  // Field NEGEDGE: SDIO_CK dephasing selection bit
    const uint32_t SDMMC_CLKCR_NEGEDGE = 1U << 13 ;

  // Field WIDBUS: Wide bus mode enable bit
    inline uint32_t SDMMC_CLKCR_WIDBUS (const uint32_t inValue) {return (inValue & 0x3U) << 11 ; }

  // Field BYPASS: Clock divider bypass enable bit
    const uint32_t SDMMC_CLKCR_BYPASS = 1U << 10 ;

  // Field PWRSAV: Power saving configuration bit
    const uint32_t SDMMC_CLKCR_PWRSAV = 1U << 9 ;

  // Field CLKEN: Clock enable bit
    const uint32_t SDMMC_CLKCR_CLKEN = 1U << 8 ;

  // Field CLKDIV: Clock divide factor
    inline uint32_t SDMMC_CLKCR_CLKDIV (const uint32_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register ARG: argument register
  #define SDMMC_ARG (* ((volatile uint32_t *) (0x40012800 + 8)))

  // Field CMDARG: Command argument
    inline uint32_t SDMMC_ARG_CMDARG (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register CMD: command register
  #define SDMMC_CMD (* ((volatile uint32_t *) (0x40012800 + 12)))

  // Field CE_ATACMD: CE-ATA command
    const uint32_t SDMMC_CMD_CE_ATACMD = 1U << 14 ;

  // Field nIEN: not Interrupt Enable
    const uint32_t SDMMC_CMD_nIEN = 1U << 13 ;

  // Field ENCMDcompl: Enable CMD completion
    const uint32_t SDMMC_CMD_ENCMDcompl = 1U << 12 ;

  // Field SDIOSuspend: SD I/O suspend command
    const uint32_t SDMMC_CMD_SDIOSuspend = 1U << 11 ;

  // Field CPSMEN: Command path state machine (CPSM) Enable bit
    const uint32_t SDMMC_CMD_CPSMEN = 1U << 10 ;

  // Field WAITPEND: CPSM Waits for ends of data transfer (CmdPend internal signal)
    const uint32_t SDMMC_CMD_WAITPEND = 1U << 9 ;

  // Field WAITINT: CPSM waits for interrupt request
    const uint32_t SDMMC_CMD_WAITINT = 1U << 8 ;

  // Field WAITRESP: Wait for response bits
    inline uint32_t SDMMC_CMD_WAITRESP (const uint32_t inValue) {return (inValue & 0x3U) << 6 ; }

  // Field CMDINDEX: Command index
    inline uint32_t SDMMC_CMD_CMDINDEX (const uint32_t inValue) {return (inValue & 0x3fU) << 0 ; }

//---  Register RESPCMD: command response register
  #define SDMMC_RESPCMD (* ((const volatile uint32_t *) (0x40012800 + 16)))

  // Field RESPCMD: Response command index
    inline uint32_t SDMMC_RESPCMD_RESPCMD (const uint32_t inValue) {return (inValue & 0x3fU) << 0 ; }

//---  Register RESP1: response 1..4 register
  #define SDMMC_RESP1 (* ((const volatile uint32_t *) (0x40012800 + 20)))

  // Field CARDSTATUS1: see Table 132
    inline uint32_t SDMMC_RESP1_CARDSTATUS1 (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register RESP2: response 1..4 register
  #define SDMMC_RESP2 (* ((const volatile uint32_t *) (0x40012800 + 24)))

  // Field CARDSTATUS2: see Table 132
    inline uint32_t SDMMC_RESP2_CARDSTATUS2 (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register RESP3: response 1..4 register
  #define SDMMC_RESP3 (* ((const volatile uint32_t *) (0x40012800 + 28)))

  // Field CARDSTATUS3: see Table 132
    inline uint32_t SDMMC_RESP3_CARDSTATUS3 (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register RESP4: response 1..4 register
  #define SDMMC_RESP4 (* ((const volatile uint32_t *) (0x40012800 + 32)))

  // Field CARDSTATUS4: see Table 132
    inline uint32_t SDMMC_RESP4_CARDSTATUS4 (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register DTIMER: data timer register
  #define SDMMC_DTIMER (* ((volatile uint32_t *) (0x40012800 + 36)))

  // Field DATATIME: Data timeout period
    inline uint32_t SDMMC_DTIMER_DATATIME (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register DLEN: data length register
  #define SDMMC_DLEN (* ((volatile uint32_t *) (0x40012800 + 40)))

  // Field DATALENGTH: Data length value
    inline uint32_t SDMMC_DLEN_DATALENGTH (const uint32_t inValue) {return (inValue & 0x1ffffffU) << 0 ; }

//---  Register DCTRL: data control register
  #define SDMMC_DCTRL (* ((volatile uint32_t *) (0x40012800 + 44)))

  // Field SDIOEN: SD I/O enable functions
    const uint32_t SDMMC_DCTRL_SDIOEN = 1U << 11 ;

  // Field RWMOD: Read wait mode
    const uint32_t SDMMC_DCTRL_RWMOD = 1U << 10 ;

  // Field RWSTOP: Read wait stop
    const uint32_t SDMMC_DCTRL_RWSTOP = 1U << 9 ;

  // Field RWSTART: Read wait start
    const uint32_t SDMMC_DCTRL_RWSTART = 1U << 8 ;

  // Field DBLOCKSIZE: Data block size
    inline uint32_t SDMMC_DCTRL_DBLOCKSIZE (const uint32_t inValue) {return (inValue & 0xfU) << 4 ; }

  // Field DMAEN: DMA enable bit
    const uint32_t SDMMC_DCTRL_DMAEN = 1U << 3 ;

  // Field DTMODE: Data transfer mode selection 1: Stream or SDIO multibyte data transfer
    const uint32_t SDMMC_DCTRL_DTMODE = 1U << 2 ;

  // Field DTDIR: Data transfer direction selection
    const uint32_t SDMMC_DCTRL_DTDIR = 1U << 1 ;

  // Field DTEN: DTEN
    const uint32_t SDMMC_DCTRL_DTEN = 1U << 0 ;

//---  Register DCOUNT: data counter register
  #define SDMMC_DCOUNT (* ((const volatile uint32_t *) (0x40012800 + 48)))

  // Field DATACOUNT: Data count value
    inline uint32_t SDMMC_DCOUNT_DATACOUNT (const uint32_t inValue) {return (inValue & 0x1ffffffU) << 0 ; }

//---  Register STA: status register
  #define SDMMC_STA (* ((const volatile uint32_t *) (0x40012800 + 52)))

  // Field CEATAEND: CE-ATA command completion signal received for CMD61
    const uint32_t SDMMC_STA_CEATAEND = 1U << 23 ;

  // Field SDIOIT: SDIO interrupt received
    const uint32_t SDMMC_STA_SDIOIT = 1U << 22 ;

  // Field RXDAVL: Data available in receive FIFO
    const uint32_t SDMMC_STA_RXDAVL = 1U << 21 ;

  // Field TXDAVL: Data available in transmit FIFO
    const uint32_t SDMMC_STA_TXDAVL = 1U << 20 ;

  // Field RXFIFOE: Receive FIFO empty
    const uint32_t SDMMC_STA_RXFIFOE = 1U << 19 ;

  // Field TXFIFOE: Transmit FIFO empty
    const uint32_t SDMMC_STA_TXFIFOE = 1U << 18 ;

  // Field RXFIFOF: Receive FIFO full
    const uint32_t SDMMC_STA_RXFIFOF = 1U << 17 ;

  // Field TXFIFOF: Transmit FIFO full
    const uint32_t SDMMC_STA_TXFIFOF = 1U << 16 ;

  // Field RXFIFOHF: Receive FIFO half full: there are at least 8 words in the FIFO
    const uint32_t SDMMC_STA_RXFIFOHF = 1U << 15 ;

  // Field TXFIFOHE: Transmit FIFO half empty: at least 8 words can be written into the FIFO
    const uint32_t SDMMC_STA_TXFIFOHE = 1U << 14 ;

  // Field RXACT: Data receive in progress
    const uint32_t SDMMC_STA_RXACT = 1U << 13 ;

  // Field TXACT: Data transmit in progress
    const uint32_t SDMMC_STA_TXACT = 1U << 12 ;

  // Field CMDACT: Command transfer in progress
    const uint32_t SDMMC_STA_CMDACT = 1U << 11 ;

  // Field DBCKEND: Data block sent/received (CRC check passed)
    const uint32_t SDMMC_STA_DBCKEND = 1U << 10 ;

  // Field STBITERR: Start bit not detected on all data signals in wide bus mode
    const uint32_t SDMMC_STA_STBITERR = 1U << 9 ;

  // Field DATAEND: Data end (data counter, SDIDCOUNT, is zero)
    const uint32_t SDMMC_STA_DATAEND = 1U << 8 ;

  // Field CMDSENT: Command sent (no response required)
    const uint32_t SDMMC_STA_CMDSENT = 1U << 7 ;

  // Field CMDREND: Command response received (CRC check passed)
    const uint32_t SDMMC_STA_CMDREND = 1U << 6 ;

  // Field RXOVERR: Received FIFO overrun error
    const uint32_t SDMMC_STA_RXOVERR = 1U << 5 ;

  // Field TXUNDERR: Transmit FIFO underrun error
    const uint32_t SDMMC_STA_TXUNDERR = 1U << 4 ;

  // Field DTIMEOUT: Data timeout
    const uint32_t SDMMC_STA_DTIMEOUT = 1U << 3 ;

  // Field CTIMEOUT: Command response timeout
    const uint32_t SDMMC_STA_CTIMEOUT = 1U << 2 ;

  // Field DCRCFAIL: Data block sent/received (CRC check failed)
    const uint32_t SDMMC_STA_DCRCFAIL = 1U << 1 ;

  // Field CCRCFAIL: Command response received (CRC check failed)
    const uint32_t SDMMC_STA_CCRCFAIL = 1U << 0 ;

//---  Register ICR: interrupt clear register
  #define SDMMC_ICR (* ((volatile uint32_t *) (0x40012800 + 56)))

  // Field CEATAENDC: CEATAEND flag clear bit
    const uint32_t SDMMC_ICR_CEATAENDC = 1U << 23 ;

  // Field SDIOITC: SDIOIT flag clear bit
    const uint32_t SDMMC_ICR_SDIOITC = 1U << 22 ;

  // Field DBCKENDC: DBCKEND flag clear bit
    const uint32_t SDMMC_ICR_DBCKENDC = 1U << 10 ;

  // Field STBITERRC: STBITERR flag clear bit
    const uint32_t SDMMC_ICR_STBITERRC = 1U << 9 ;

  // Field DATAENDC: DATAEND flag clear bit
    const uint32_t SDMMC_ICR_DATAENDC = 1U << 8 ;

  // Field CMDSENTC: CMDSENT flag clear bit
    const uint32_t SDMMC_ICR_CMDSENTC = 1U << 7 ;

  // Field CMDRENDC: CMDREND flag clear bit
    const uint32_t SDMMC_ICR_CMDRENDC = 1U << 6 ;

  // Field RXOVERRC: RXOVERR flag clear bit
    const uint32_t SDMMC_ICR_RXOVERRC = 1U << 5 ;

  // Field TXUNDERRC: TXUNDERR flag clear bit
    const uint32_t SDMMC_ICR_TXUNDERRC = 1U << 4 ;

  // Field DTIMEOUTC: DTIMEOUT flag clear bit
    const uint32_t SDMMC_ICR_DTIMEOUTC = 1U << 3 ;

  // Field CTIMEOUTC: CTIMEOUT flag clear bit
    const uint32_t SDMMC_ICR_CTIMEOUTC = 1U << 2 ;

  // Field DCRCFAILC: DCRCFAIL flag clear bit
    const uint32_t SDMMC_ICR_DCRCFAILC = 1U << 1 ;

  // Field CCRCFAILC: CCRCFAIL flag clear bit
    const uint32_t SDMMC_ICR_CCRCFAILC = 1U << 0 ;

//---  Register MASK: mask register
  #define SDMMC_MASK (* ((volatile uint32_t *) (0x40012800 + 60)))

  // Field CEATAENDIE: CE-ATA command completion signal received interrupt enable
    const uint32_t SDMMC_MASK_CEATAENDIE = 1U << 23 ;

  // Field SDIOITIE: SDIO mode interrupt received interrupt enable
    const uint32_t SDMMC_MASK_SDIOITIE = 1U << 22 ;

  // Field RXDAVLIE: Data available in Rx FIFO interrupt enable
    const uint32_t SDMMC_MASK_RXDAVLIE = 1U << 21 ;

  // Field TXDAVLIE: Data available in Tx FIFO interrupt enable
    const uint32_t SDMMC_MASK_TXDAVLIE = 1U << 20 ;

  // Field RXFIFOEIE: Rx FIFO empty interrupt enable
    const uint32_t SDMMC_MASK_RXFIFOEIE = 1U << 19 ;

  // Field TXFIFOEIE: Tx FIFO empty interrupt enable
    const uint32_t SDMMC_MASK_TXFIFOEIE = 1U << 18 ;

  // Field RXFIFOFIE: Rx FIFO full interrupt enable
    const uint32_t SDMMC_MASK_RXFIFOFIE = 1U << 17 ;

  // Field TXFIFOFIE: Tx FIFO full interrupt enable
    const uint32_t SDMMC_MASK_TXFIFOFIE = 1U << 16 ;

  // Field RXFIFOHFIE: Rx FIFO half full interrupt enable
    const uint32_t SDMMC_MASK_RXFIFOHFIE = 1U << 15 ;

  // Field TXFIFOHEIE: Tx FIFO half empty interrupt enable
    const uint32_t SDMMC_MASK_TXFIFOHEIE = 1U << 14 ;

  // Field RXACTIE: Data receive acting interrupt enable
    const uint32_t SDMMC_MASK_RXACTIE = 1U << 13 ;

  // Field TXACTIE: Data transmit acting interrupt enable
    const uint32_t SDMMC_MASK_TXACTIE = 1U << 12 ;

  // Field CMDACTIE: Command acting interrupt enable
    const uint32_t SDMMC_MASK_CMDACTIE = 1U << 11 ;

  // Field DBCKENDIE: Data block end interrupt enable
    const uint32_t SDMMC_MASK_DBCKENDIE = 1U << 10 ;

  // Field STBITERRIE: Start bit error interrupt enable
    const uint32_t SDMMC_MASK_STBITERRIE = 1U << 9 ;

  // Field DATAENDIE: Data end interrupt enable
    const uint32_t SDMMC_MASK_DATAENDIE = 1U << 8 ;

  // Field CMDSENTIE: Command sent interrupt enable
    const uint32_t SDMMC_MASK_CMDSENTIE = 1U << 7 ;

  // Field CMDRENDIE: Command response received interrupt enable
    const uint32_t SDMMC_MASK_CMDRENDIE = 1U << 6 ;

  // Field RXOVERRIE: Rx FIFO overrun error interrupt enable
    const uint32_t SDMMC_MASK_RXOVERRIE = 1U << 5 ;

  // Field TXUNDERRIE: Tx FIFO underrun error interrupt enable
    const uint32_t SDMMC_MASK_TXUNDERRIE = 1U << 4 ;

  // Field DTIMEOUTIE: Data timeout interrupt enable
    const uint32_t SDMMC_MASK_DTIMEOUTIE = 1U << 3 ;

  // Field CTIMEOUTIE: Command timeout interrupt enable
    const uint32_t SDMMC_MASK_CTIMEOUTIE = 1U << 2 ;

  // Field DCRCFAILIE: Data CRC fail interrupt enable
    const uint32_t SDMMC_MASK_DCRCFAILIE = 1U << 1 ;

  // Field CCRCFAILIE: Command CRC fail interrupt enable
    const uint32_t SDMMC_MASK_CCRCFAILIE = 1U << 0 ;

//---  Register FIFOCNT: FIFO counter register
  #define SDMMC_FIFOCNT (* ((const volatile uint32_t *) (0x40012800 + 72)))

  // Field FIFOCOUNT: Remaining number of words to be written to or read from the FIFO
    inline uint32_t SDMMC_FIFOCNT_FIFOCOUNT (const uint32_t inValue) {return (inValue & 0xffffffU) << 0 ; }

//---  Register FIFO: data FIFO register
  #define SDMMC_FIFO (* ((volatile uint32_t *) (0x40012800 + 128)))

  // Field FIFOData: Receive and transmit FIFO data
    inline uint32_t SDMMC_FIFO_FIFOData (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//------------------------------------------------------------------------------
// Peripheral SPI1: Serial peripheral interface/Inter-IC       sound
//------------------------------------------------------------------------------

//---  Register CR1: control register 1
  #define SPI1_CR1 (* ((volatile uint32_t *) (0x40013000 + 0)))

  // Field BIDIMODE: Bidirectional data mode enable
    const uint32_t SPI1_CR1_BIDIMODE = 1U << 15 ;

  // Field BIDIOE: Output enable in bidirectional mode
    const uint32_t SPI1_CR1_BIDIOE = 1U << 14 ;

  // Field CRCEN: Hardware CRC calculation enable
    const uint32_t SPI1_CR1_CRCEN = 1U << 13 ;

  // Field CRCNEXT: CRC transfer next
    const uint32_t SPI1_CR1_CRCNEXT = 1U << 12 ;

  // Field DFF: Data frame format
    const uint32_t SPI1_CR1_DFF = 1U << 11 ;

  // Field RXONLY: Receive only
    const uint32_t SPI1_CR1_RXONLY = 1U << 10 ;

  // Field SSM: Software slave management
    const uint32_t SPI1_CR1_SSM = 1U << 9 ;

  // Field SSI: Internal slave select
    const uint32_t SPI1_CR1_SSI = 1U << 8 ;

  // Field LSBFIRST: Frame format
    const uint32_t SPI1_CR1_LSBFIRST = 1U << 7 ;

  // Field SPE: SPI enable
    const uint32_t SPI1_CR1_SPE = 1U << 6 ;

  // Field BR: Baud rate control
    inline uint32_t SPI1_CR1_BR (const uint32_t inValue) {return (inValue & 0x7U) << 3 ; }

  // Field MSTR: Master selection
    const uint32_t SPI1_CR1_MSTR = 1U << 2 ;

  // Field CPOL: Clock polarity
    const uint32_t SPI1_CR1_CPOL = 1U << 1 ;

  // Field CPHA: Clock phase
    const uint32_t SPI1_CR1_CPHA = 1U << 0 ;

//---  Register CR2: control register 2
  #define SPI1_CR2 (* ((volatile uint32_t *) (0x40013000 + 4)))

  // Field RXDMAEN: Rx buffer DMA enable
    const uint32_t SPI1_CR2_RXDMAEN = 1U << 0 ;

  // Field TXDMAEN: Tx buffer DMA enable
    const uint32_t SPI1_CR2_TXDMAEN = 1U << 1 ;

  // Field SSOE: SS output enable
    const uint32_t SPI1_CR2_SSOE = 1U << 2 ;

  // Field NSSP: NSS pulse management
    const uint32_t SPI1_CR2_NSSP = 1U << 3 ;

  // Field FRF: Frame format
    const uint32_t SPI1_CR2_FRF = 1U << 4 ;

  // Field ERRIE: Error interrupt enable
    const uint32_t SPI1_CR2_ERRIE = 1U << 5 ;

  // Field RXNEIE: RX buffer not empty interrupt enable
    const uint32_t SPI1_CR2_RXNEIE = 1U << 6 ;

  // Field TXEIE: Tx buffer empty interrupt enable
    const uint32_t SPI1_CR2_TXEIE = 1U << 7 ;

  // Field DS: Data size
    inline uint32_t SPI1_CR2_DS (const uint32_t inValue) {return (inValue & 0xfU) << 8 ; }

  // Field FRXTH: FIFO reception threshold
    const uint32_t SPI1_CR2_FRXTH = 1U << 12 ;

  // Field LDMA_RX: Last DMA transfer for reception
    const uint32_t SPI1_CR2_LDMA_RX = 1U << 13 ;

  // Field LDMA_TX: Last DMA transfer for transmission
    const uint32_t SPI1_CR2_LDMA_TX = 1U << 14 ;

//---  Register SR: status register
  #define SPI1_SR (* ((volatile uint32_t *) (0x40013000 + 8)))

  // Field RXNE: Receive buffer not empty
    const uint32_t SPI1_SR_RXNE = 1U << 0 ;

  // Field TXE: Transmit buffer empty
    const uint32_t SPI1_SR_TXE = 1U << 1 ;

  // Field CRCERR: CRC error flag
    const uint32_t SPI1_SR_CRCERR = 1U << 4 ;

  // Field MODF: Mode fault
    const uint32_t SPI1_SR_MODF = 1U << 5 ;

  // Field OVR: Overrun flag
    const uint32_t SPI1_SR_OVR = 1U << 6 ;

  // Field BSY: Busy flag
    const uint32_t SPI1_SR_BSY = 1U << 7 ;

  // Field TIFRFE: TI frame format error
    const uint32_t SPI1_SR_TIFRFE = 1U << 8 ;

  // Field FRLVL: FIFO reception level
    inline uint32_t SPI1_SR_FRLVL (const uint32_t inValue) {return (inValue & 0x3U) << 9 ; }

  // Field FTLVL: FIFO transmission level
    inline uint32_t SPI1_SR_FTLVL (const uint32_t inValue) {return (inValue & 0x3U) << 11 ; }

//---  Register DR: data register
  #define SPI1_DR (* ((volatile uint32_t *) (0x40013000 + 12)))

  // Field DR: Data register
    inline uint32_t SPI1_DR_DR (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register CRCPR: CRC polynomial register
  #define SPI1_CRCPR (* ((volatile uint32_t *) (0x40013000 + 16)))

  // Field CRCPOLY: CRC polynomial register
    inline uint32_t SPI1_CRCPR_CRCPOLY (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register RXCRCR: RX CRC register
  #define SPI1_RXCRCR (* ((const volatile uint32_t *) (0x40013000 + 20)))

  // Field RxCRC: Rx CRC register
    inline uint32_t SPI1_RXCRCR_RxCRC (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register TXCRCR: TX CRC register
  #define SPI1_TXCRCR (* ((const volatile uint32_t *) (0x40013000 + 24)))

  // Field TxCRC: Tx CRC register
    inline uint32_t SPI1_TXCRCR_TxCRC (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

//------------------------------------------------------------------------------
// Peripheral SPI2
//------------------------------------------------------------------------------

//---  Register CR1: control register 1
  #define SPI2_CR1 (* ((volatile uint32_t *) (0x40003800 + 0)))

  // Field BIDIMODE: Bidirectional data mode enable
    const uint32_t SPI2_CR1_BIDIMODE = 1U << 15 ;

  // Field BIDIOE: Output enable in bidirectional mode
    const uint32_t SPI2_CR1_BIDIOE = 1U << 14 ;

  // Field CRCEN: Hardware CRC calculation enable
    const uint32_t SPI2_CR1_CRCEN = 1U << 13 ;

  // Field CRCNEXT: CRC transfer next
    const uint32_t SPI2_CR1_CRCNEXT = 1U << 12 ;

  // Field DFF: Data frame format
    const uint32_t SPI2_CR1_DFF = 1U << 11 ;

  // Field RXONLY: Receive only
    const uint32_t SPI2_CR1_RXONLY = 1U << 10 ;

  // Field SSM: Software slave management
    const uint32_t SPI2_CR1_SSM = 1U << 9 ;

  // Field SSI: Internal slave select
    const uint32_t SPI2_CR1_SSI = 1U << 8 ;

  // Field LSBFIRST: Frame format
    const uint32_t SPI2_CR1_LSBFIRST = 1U << 7 ;

  // Field SPE: SPI enable
    const uint32_t SPI2_CR1_SPE = 1U << 6 ;

  // Field BR: Baud rate control
    inline uint32_t SPI2_CR1_BR (const uint32_t inValue) {return (inValue & 0x7U) << 3 ; }

  // Field MSTR: Master selection
    const uint32_t SPI2_CR1_MSTR = 1U << 2 ;

  // Field CPOL: Clock polarity
    const uint32_t SPI2_CR1_CPOL = 1U << 1 ;

  // Field CPHA: Clock phase
    const uint32_t SPI2_CR1_CPHA = 1U << 0 ;

//---  Register CR2: control register 2
  #define SPI2_CR2 (* ((volatile uint32_t *) (0x40003800 + 4)))

  // Field RXDMAEN: Rx buffer DMA enable
    const uint32_t SPI2_CR2_RXDMAEN = 1U << 0 ;

  // Field TXDMAEN: Tx buffer DMA enable
    const uint32_t SPI2_CR2_TXDMAEN = 1U << 1 ;

  // Field SSOE: SS output enable
    const uint32_t SPI2_CR2_SSOE = 1U << 2 ;

  // Field NSSP: NSS pulse management
    const uint32_t SPI2_CR2_NSSP = 1U << 3 ;

  // Field FRF: Frame format
    const uint32_t SPI2_CR2_FRF = 1U << 4 ;

  // Field ERRIE: Error interrupt enable
    const uint32_t SPI2_CR2_ERRIE = 1U << 5 ;

  // Field RXNEIE: RX buffer not empty interrupt enable
    const uint32_t SPI2_CR2_RXNEIE = 1U << 6 ;

  // Field TXEIE: Tx buffer empty interrupt enable
    const uint32_t SPI2_CR2_TXEIE = 1U << 7 ;

  // Field DS: Data size
    inline uint32_t SPI2_CR2_DS (const uint32_t inValue) {return (inValue & 0xfU) << 8 ; }

  // Field FRXTH: FIFO reception threshold
    const uint32_t SPI2_CR2_FRXTH = 1U << 12 ;

  // Field LDMA_RX: Last DMA transfer for reception
    const uint32_t SPI2_CR2_LDMA_RX = 1U << 13 ;

  // Field LDMA_TX: Last DMA transfer for transmission
    const uint32_t SPI2_CR2_LDMA_TX = 1U << 14 ;

//---  Register SR: status register
  #define SPI2_SR (* ((volatile uint32_t *) (0x40003800 + 8)))

  // Field RXNE: Receive buffer not empty
    const uint32_t SPI2_SR_RXNE = 1U << 0 ;

  // Field TXE: Transmit buffer empty
    const uint32_t SPI2_SR_TXE = 1U << 1 ;

  // Field CRCERR: CRC error flag
    const uint32_t SPI2_SR_CRCERR = 1U << 4 ;

  // Field MODF: Mode fault
    const uint32_t SPI2_SR_MODF = 1U << 5 ;

  // Field OVR: Overrun flag
    const uint32_t SPI2_SR_OVR = 1U << 6 ;

  // Field BSY: Busy flag
    const uint32_t SPI2_SR_BSY = 1U << 7 ;

  // Field TIFRFE: TI frame format error
    const uint32_t SPI2_SR_TIFRFE = 1U << 8 ;

  // Field FRLVL: FIFO reception level
    inline uint32_t SPI2_SR_FRLVL (const uint32_t inValue) {return (inValue & 0x3U) << 9 ; }

  // Field FTLVL: FIFO transmission level
    inline uint32_t SPI2_SR_FTLVL (const uint32_t inValue) {return (inValue & 0x3U) << 11 ; }

//---  Register DR: data register
  #define SPI2_DR (* ((volatile uint32_t *) (0x40003800 + 12)))

  // Field DR: Data register
    inline uint32_t SPI2_DR_DR (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register CRCPR: CRC polynomial register
  #define SPI2_CRCPR (* ((volatile uint32_t *) (0x40003800 + 16)))

  // Field CRCPOLY: CRC polynomial register
    inline uint32_t SPI2_CRCPR_CRCPOLY (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register RXCRCR: RX CRC register
  #define SPI2_RXCRCR (* ((const volatile uint32_t *) (0x40003800 + 20)))

  // Field RxCRC: Rx CRC register
    inline uint32_t SPI2_RXCRCR_RxCRC (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register TXCRCR: TX CRC register
  #define SPI2_TXCRCR (* ((const volatile uint32_t *) (0x40003800 + 24)))

  // Field TxCRC: Tx CRC register
    inline uint32_t SPI2_TXCRCR_TxCRC (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

//------------------------------------------------------------------------------
// Peripheral SPI3
//------------------------------------------------------------------------------

//---  Register CR1: control register 1
  #define SPI3_CR1 (* ((volatile uint32_t *) (0x40003c00 + 0)))

  // Field BIDIMODE: Bidirectional data mode enable
    const uint32_t SPI3_CR1_BIDIMODE = 1U << 15 ;

  // Field BIDIOE: Output enable in bidirectional mode
    const uint32_t SPI3_CR1_BIDIOE = 1U << 14 ;

  // Field CRCEN: Hardware CRC calculation enable
    const uint32_t SPI3_CR1_CRCEN = 1U << 13 ;

  // Field CRCNEXT: CRC transfer next
    const uint32_t SPI3_CR1_CRCNEXT = 1U << 12 ;

  // Field DFF: Data frame format
    const uint32_t SPI3_CR1_DFF = 1U << 11 ;

  // Field RXONLY: Receive only
    const uint32_t SPI3_CR1_RXONLY = 1U << 10 ;

  // Field SSM: Software slave management
    const uint32_t SPI3_CR1_SSM = 1U << 9 ;

  // Field SSI: Internal slave select
    const uint32_t SPI3_CR1_SSI = 1U << 8 ;

  // Field LSBFIRST: Frame format
    const uint32_t SPI3_CR1_LSBFIRST = 1U << 7 ;

  // Field SPE: SPI enable
    const uint32_t SPI3_CR1_SPE = 1U << 6 ;

  // Field BR: Baud rate control
    inline uint32_t SPI3_CR1_BR (const uint32_t inValue) {return (inValue & 0x7U) << 3 ; }

  // Field MSTR: Master selection
    const uint32_t SPI3_CR1_MSTR = 1U << 2 ;

  // Field CPOL: Clock polarity
    const uint32_t SPI3_CR1_CPOL = 1U << 1 ;

  // Field CPHA: Clock phase
    const uint32_t SPI3_CR1_CPHA = 1U << 0 ;

//---  Register CR2: control register 2
  #define SPI3_CR2 (* ((volatile uint32_t *) (0x40003c00 + 4)))

  // Field RXDMAEN: Rx buffer DMA enable
    const uint32_t SPI3_CR2_RXDMAEN = 1U << 0 ;

  // Field TXDMAEN: Tx buffer DMA enable
    const uint32_t SPI3_CR2_TXDMAEN = 1U << 1 ;

  // Field SSOE: SS output enable
    const uint32_t SPI3_CR2_SSOE = 1U << 2 ;

  // Field NSSP: NSS pulse management
    const uint32_t SPI3_CR2_NSSP = 1U << 3 ;

  // Field FRF: Frame format
    const uint32_t SPI3_CR2_FRF = 1U << 4 ;

  // Field ERRIE: Error interrupt enable
    const uint32_t SPI3_CR2_ERRIE = 1U << 5 ;

  // Field RXNEIE: RX buffer not empty interrupt enable
    const uint32_t SPI3_CR2_RXNEIE = 1U << 6 ;

  // Field TXEIE: Tx buffer empty interrupt enable
    const uint32_t SPI3_CR2_TXEIE = 1U << 7 ;

  // Field DS: Data size
    inline uint32_t SPI3_CR2_DS (const uint32_t inValue) {return (inValue & 0xfU) << 8 ; }

  // Field FRXTH: FIFO reception threshold
    const uint32_t SPI3_CR2_FRXTH = 1U << 12 ;

  // Field LDMA_RX: Last DMA transfer for reception
    const uint32_t SPI3_CR2_LDMA_RX = 1U << 13 ;

  // Field LDMA_TX: Last DMA transfer for transmission
    const uint32_t SPI3_CR2_LDMA_TX = 1U << 14 ;

//---  Register SR: status register
  #define SPI3_SR (* ((volatile uint32_t *) (0x40003c00 + 8)))

  // Field RXNE: Receive buffer not empty
    const uint32_t SPI3_SR_RXNE = 1U << 0 ;

  // Field TXE: Transmit buffer empty
    const uint32_t SPI3_SR_TXE = 1U << 1 ;

  // Field CRCERR: CRC error flag
    const uint32_t SPI3_SR_CRCERR = 1U << 4 ;

  // Field MODF: Mode fault
    const uint32_t SPI3_SR_MODF = 1U << 5 ;

  // Field OVR: Overrun flag
    const uint32_t SPI3_SR_OVR = 1U << 6 ;

  // Field BSY: Busy flag
    const uint32_t SPI3_SR_BSY = 1U << 7 ;

  // Field TIFRFE: TI frame format error
    const uint32_t SPI3_SR_TIFRFE = 1U << 8 ;

  // Field FRLVL: FIFO reception level
    inline uint32_t SPI3_SR_FRLVL (const uint32_t inValue) {return (inValue & 0x3U) << 9 ; }

  // Field FTLVL: FIFO transmission level
    inline uint32_t SPI3_SR_FTLVL (const uint32_t inValue) {return (inValue & 0x3U) << 11 ; }

//---  Register DR: data register
  #define SPI3_DR (* ((volatile uint32_t *) (0x40003c00 + 12)))

  // Field DR: Data register
    inline uint32_t SPI3_DR_DR (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register CRCPR: CRC polynomial register
  #define SPI3_CRCPR (* ((volatile uint32_t *) (0x40003c00 + 16)))

  // Field CRCPOLY: CRC polynomial register
    inline uint32_t SPI3_CRCPR_CRCPOLY (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register RXCRCR: RX CRC register
  #define SPI3_RXCRCR (* ((const volatile uint32_t *) (0x40003c00 + 20)))

  // Field RxCRC: Rx CRC register
    inline uint32_t SPI3_RXCRCR_RxCRC (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register TXCRCR: TX CRC register
  #define SPI3_TXCRCR (* ((const volatile uint32_t *) (0x40003c00 + 24)))

  // Field TxCRC: Tx CRC register
    inline uint32_t SPI3_TXCRCR_TxCRC (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

//------------------------------------------------------------------------------
// Peripheral STK: SysTick timer
//------------------------------------------------------------------------------

//---  Register CTRL: SysTick control and status
          register
  #define STK_CTRL (* ((volatile uint32_t *) (0xe000e010 + 0)))

  // Field ENABLE: Counter enable
    const uint32_t STK_CTRL_ENABLE = 1U << 0 ;

  // Field TICKINT: SysTick exception request enable
    const uint32_t STK_CTRL_TICKINT = 1U << 1 ;

  // Field CLKSOURCE: Clock source selection
    const uint32_t STK_CTRL_CLKSOURCE = 1U << 2 ;

  // Field COUNTFLAG: COUNTFLAG
    const uint32_t STK_CTRL_COUNTFLAG = 1U << 16 ;

//---  Register LOAD: SysTick reload value register
  #define STK_LOAD (* ((volatile uint32_t *) (0xe000e010 + 4)))

  // Field RELOAD: RELOAD value
    inline uint32_t STK_LOAD_RELOAD (const uint32_t inValue) {return (inValue & 0xffffffU) << 0 ; }

//---  Register VAL: SysTick current value register
  #define STK_VAL (* ((volatile uint32_t *) (0xe000e010 + 8)))

  // Field CURRENT: Current counter value
    inline uint32_t STK_VAL_CURRENT (const uint32_t inValue) {return (inValue & 0xffffffU) << 0 ; }

//---  Register CALIB: SysTick calibration value
          register
  #define STK_CALIB (* ((volatile uint32_t *) (0xe000e010 + 12)))

  // Field TENMS: Calibration value
    inline uint32_t STK_CALIB_TENMS (const uint32_t inValue) {return (inValue & 0xffffffU) << 0 ; }

  // Field SKEW: SKEW flag: Indicates whether the TENMS value is exact
    const uint32_t STK_CALIB_SKEW = 1U << 30 ;

  // Field NOREF: NOREF flag. Reads as zero
    const uint32_t STK_CALIB_NOREF = 1U << 31 ;

//------------------------------------------------------------------------------
// Peripheral SWPMI1: Single Wire Protocol Master       Interface
//------------------------------------------------------------------------------

//---  Register CR: SWPMI Configuration/Control
          register
  #define SWPMI1_CR (* ((volatile uint32_t *) (0x40008800 + 0)))

  // Field RXDMA: Reception DMA enable
    const uint32_t SWPMI1_CR_RXDMA = 1U << 0 ;

  // Field TXDMA: Transmission DMA enable
    const uint32_t SWPMI1_CR_TXDMA = 1U << 1 ;

  // Field RXMODE: Reception buffering mode
    const uint32_t SWPMI1_CR_RXMODE = 1U << 2 ;

  // Field TXMODE: Transmission buffering mode
    const uint32_t SWPMI1_CR_TXMODE = 1U << 3 ;

  // Field LPBK: Loopback mode enable
    const uint32_t SWPMI1_CR_LPBK = 1U << 4 ;

  // Field SWPME: Single wire protocol master interface enable
    const uint32_t SWPMI1_CR_SWPME = 1U << 5 ;

  // Field DEACT: Single wire protocol master interface deactivate
    const uint32_t SWPMI1_CR_DEACT = 1U << 10 ;

//---  Register BRR: SWPMI Bitrate register
  #define SWPMI1_BRR (* ((volatile uint32_t *) (0x40008800 + 4)))

  // Field BR: Bitrate prescaler
    inline uint32_t SWPMI1_BRR_BR (const uint32_t inValue) {return (inValue & 0x3fU) << 0 ; }

//---  Register ISR: SWPMI Interrupt and Status
          register
  #define SWPMI1_ISR (* ((const volatile uint32_t *) (0x40008800 + 12)))

  // Field RXBFF: Receive buffer full flag
    const uint32_t SWPMI1_ISR_RXBFF = 1U << 0 ;

  // Field TXBEF: Transmit buffer empty flag
    const uint32_t SWPMI1_ISR_TXBEF = 1U << 1 ;

  // Field RXBERF: Receive CRC error flag
    const uint32_t SWPMI1_ISR_RXBERF = 1U << 2 ;

  // Field RXOVRF: Receive overrun error flag
    const uint32_t SWPMI1_ISR_RXOVRF = 1U << 3 ;

  // Field TXUNRF: Transmit underrun error flag
    const uint32_t SWPMI1_ISR_TXUNRF = 1U << 4 ;

  // Field RXNE: Receive data register not empty
    const uint32_t SWPMI1_ISR_RXNE = 1U << 5 ;

  // Field TXE: Transmit data register empty
    const uint32_t SWPMI1_ISR_TXE = 1U << 6 ;

  // Field TCF: Transfer complete flag
    const uint32_t SWPMI1_ISR_TCF = 1U << 7 ;

  // Field SRF: Slave resume flag
    const uint32_t SWPMI1_ISR_SRF = 1U << 8 ;

  // Field SUSP: SUSPEND flag
    const uint32_t SWPMI1_ISR_SUSP = 1U << 9 ;

  // Field DEACTF: DEACTIVATED flag
    const uint32_t SWPMI1_ISR_DEACTF = 1U << 10 ;

//---  Register ICR: SWPMI Interrupt Flag Clear
          register
  #define SWPMI1_ICR (* ((volatile uint32_t *) (0x40008800 + 16)))

  // Field CRXBFF: Clear receive buffer full flag
    const uint32_t SWPMI1_ICR_CRXBFF = 1U << 0 ;

  // Field CTXBEF: Clear transmit buffer empty flag
    const uint32_t SWPMI1_ICR_CTXBEF = 1U << 1 ;

  // Field CRXBERF: Clear receive CRC error flag
    const uint32_t SWPMI1_ICR_CRXBERF = 1U << 2 ;

  // Field CRXOVRF: Clear receive overrun error flag
    const uint32_t SWPMI1_ICR_CRXOVRF = 1U << 3 ;

  // Field CTXUNRF: Clear transmit underrun error flag
    const uint32_t SWPMI1_ICR_CTXUNRF = 1U << 4 ;

  // Field CTCF: Clear transfer complete flag
    const uint32_t SWPMI1_ICR_CTCF = 1U << 7 ;

  // Field CSRF: Clear slave resume flag
    const uint32_t SWPMI1_ICR_CSRF = 1U << 8 ;

//---  Register IER: SWPMI Interrupt Enable
          register
  #define SWPMI1_IER (* ((volatile uint32_t *) (0x40008800 + 20)))

  // Field RXBFIE: Receive buffer full interrupt enable
    const uint32_t SWPMI1_IER_RXBFIE = 1U << 0 ;

  // Field TXBEIE: Transmit buffer empty interrupt enable
    const uint32_t SWPMI1_IER_TXBEIE = 1U << 1 ;

  // Field RXBERIE: Receive CRC error interrupt enable
    const uint32_t SWPMI1_IER_RXBERIE = 1U << 2 ;

  // Field RXOVRIE: Receive overrun error interrupt enable
    const uint32_t SWPMI1_IER_RXOVRIE = 1U << 3 ;

  // Field TXUNRIE: Transmit underrun error interrupt enable
    const uint32_t SWPMI1_IER_TXUNRIE = 1U << 4 ;

  // Field RIE: Receive interrupt enable
    const uint32_t SWPMI1_IER_RIE = 1U << 5 ;

  // Field TIE: Transmit interrupt enable
    const uint32_t SWPMI1_IER_TIE = 1U << 6 ;

  // Field TCIE: Transmit complete interrupt enable
    const uint32_t SWPMI1_IER_TCIE = 1U << 7 ;

  // Field SRIE: Slave resume interrupt enable
    const uint32_t SWPMI1_IER_SRIE = 1U << 8 ;

//---  Register RFL: SWPMI Receive Frame Length
          register
  #define SWPMI1_RFL (* ((const volatile uint32_t *) (0x40008800 + 24)))

  // Field RFL: Receive frame length
    inline uint32_t SWPMI1_RFL_RFL (const uint32_t inValue) {return (inValue & 0x1fU) << 0 ; }

//---  Register TDR: SWPMI Transmit data register
  #define SWPMI1_TDR (* ((volatile uint32_t *) (0x40008800 + 28)))

  // Field TD: Transmit data
    inline uint32_t SWPMI1_TDR_TD (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register RDR: SWPMI Receive data register
  #define SWPMI1_RDR (* ((const volatile uint32_t *) (0x40008800 + 32)))

  // Field RD: received data
    inline uint32_t SWPMI1_RDR_RD (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//------------------------------------------------------------------------------
// Peripheral SYSCFG: System configuration controller
//------------------------------------------------------------------------------

//---  Register MEMRMP: memory remap register
  #define SYSCFG_MEMRMP (* ((volatile uint32_t *) (0x40010000 + 0)))

  // Field FB_MODE: Flash Bank mode selection
    const uint32_t SYSCFG_MEMRMP_FB_MODE = 1U << 8 ;

  // Field QFS: QUADSPI memory mapping swap
    const uint32_t SYSCFG_MEMRMP_QFS = 1U << 3 ;

  // Field MEM_MODE: Memory mapping selection
    inline uint32_t SYSCFG_MEMRMP_MEM_MODE (const uint32_t inValue) {return (inValue & 0x7U) << 0 ; }

//---  Register CFGR1: configuration register 1
  #define SYSCFG_CFGR1 (* ((volatile uint32_t *) (0x40010000 + 4)))

  // Field FPU_IE: Floating Point Unit interrupts enable bits
    inline uint32_t SYSCFG_CFGR1_FPU_IE (const uint32_t inValue) {return (inValue & 0x3fU) << 26 ; }

  // Field I2C3_FMP: I2C3 Fast-mode Plus driving capability activation
    const uint32_t SYSCFG_CFGR1_I2C3_FMP = 1U << 22 ;

  // Field I2C2_FMP: I2C2 Fast-mode Plus driving capability activation
    const uint32_t SYSCFG_CFGR1_I2C2_FMP = 1U << 21 ;

  // Field I2C1_FMP: I2C1 Fast-mode Plus driving capability activation
    const uint32_t SYSCFG_CFGR1_I2C1_FMP = 1U << 20 ;

  // Field I2C_PB9_FMP: Fast-mode Plus (Fm+) driving capability activation on PB9
    const uint32_t SYSCFG_CFGR1_I2C_PB9_FMP = 1U << 19 ;

  // Field I2C_PB8_FMP: Fast-mode Plus (Fm+) driving capability activation on PB8
    const uint32_t SYSCFG_CFGR1_I2C_PB8_FMP = 1U << 18 ;

  // Field I2C_PB7_FMP: Fast-mode Plus (Fm+) driving capability activation on PB7
    const uint32_t SYSCFG_CFGR1_I2C_PB7_FMP = 1U << 17 ;

  // Field I2C_PB6_FMP: Fast-mode Plus (Fm+) driving capability activation on PB6
    const uint32_t SYSCFG_CFGR1_I2C_PB6_FMP = 1U << 16 ;

  // Field BOOSTEN: I/O analog switch voltage booster enable
    const uint32_t SYSCFG_CFGR1_BOOSTEN = 1U << 8 ;

  // Field FWDIS: Firewall disable
    const uint32_t SYSCFG_CFGR1_FWDIS = 1U << 0 ;

//---  Register EXTICR1: external interrupt configuration register
          1
  #define SYSCFG_EXTICR1 (* ((volatile uint32_t *) (0x40010000 + 8)))

  // Field EXTI3: EXTI 3 configuration bits
    inline uint32_t SYSCFG_EXTICR1_EXTI3 (const uint32_t inValue) {return (inValue & 0x7U) << 12 ; }

  // Field EXTI2: EXTI 2 configuration bits
    inline uint32_t SYSCFG_EXTICR1_EXTI2 (const uint32_t inValue) {return (inValue & 0x7U) << 8 ; }

  // Field EXTI1: EXTI 1 configuration bits
    inline uint32_t SYSCFG_EXTICR1_EXTI1 (const uint32_t inValue) {return (inValue & 0x7U) << 4 ; }

  // Field EXTI0: EXTI 0 configuration bits
    inline uint32_t SYSCFG_EXTICR1_EXTI0 (const uint32_t inValue) {return (inValue & 0x7U) << 0 ; }

//---  Register EXTICR2: external interrupt configuration register
          2
  #define SYSCFG_EXTICR2 (* ((volatile uint32_t *) (0x40010000 + 12)))

  // Field EXTI7: EXTI 7 configuration bits
    inline uint32_t SYSCFG_EXTICR2_EXTI7 (const uint32_t inValue) {return (inValue & 0x7U) << 12 ; }

  // Field EXTI6: EXTI 6 configuration bits
    inline uint32_t SYSCFG_EXTICR2_EXTI6 (const uint32_t inValue) {return (inValue & 0x7U) << 8 ; }

  // Field EXTI5: EXTI 5 configuration bits
    inline uint32_t SYSCFG_EXTICR2_EXTI5 (const uint32_t inValue) {return (inValue & 0x7U) << 4 ; }

  // Field EXTI4: EXTI 4 configuration bits
    inline uint32_t SYSCFG_EXTICR2_EXTI4 (const uint32_t inValue) {return (inValue & 0x7U) << 0 ; }

//---  Register EXTICR3: external interrupt configuration register
          3
  #define SYSCFG_EXTICR3 (* ((volatile uint32_t *) (0x40010000 + 16)))

  // Field EXTI11: EXTI 11 configuration bits
    inline uint32_t SYSCFG_EXTICR3_EXTI11 (const uint32_t inValue) {return (inValue & 0x7U) << 12 ; }

  // Field EXTI10: EXTI 10 configuration bits
    inline uint32_t SYSCFG_EXTICR3_EXTI10 (const uint32_t inValue) {return (inValue & 0x7U) << 8 ; }

  // Field EXTI9: EXTI 9 configuration bits
    inline uint32_t SYSCFG_EXTICR3_EXTI9 (const uint32_t inValue) {return (inValue & 0x7U) << 4 ; }

  // Field EXTI8: EXTI 8 configuration bits
    inline uint32_t SYSCFG_EXTICR3_EXTI8 (const uint32_t inValue) {return (inValue & 0x7U) << 0 ; }

//---  Register EXTICR4: external interrupt configuration register
          4
  #define SYSCFG_EXTICR4 (* ((volatile uint32_t *) (0x40010000 + 20)))

  // Field EXTI15: EXTI15 configuration bits
    inline uint32_t SYSCFG_EXTICR4_EXTI15 (const uint32_t inValue) {return (inValue & 0x7U) << 12 ; }

  // Field EXTI14: EXTI14 configuration bits
    inline uint32_t SYSCFG_EXTICR4_EXTI14 (const uint32_t inValue) {return (inValue & 0x7U) << 8 ; }

  // Field EXTI13: EXTI13 configuration bits
    inline uint32_t SYSCFG_EXTICR4_EXTI13 (const uint32_t inValue) {return (inValue & 0x7U) << 4 ; }

  // Field EXTI12: EXTI12 configuration bits
    inline uint32_t SYSCFG_EXTICR4_EXTI12 (const uint32_t inValue) {return (inValue & 0x7U) << 0 ; }

//---  Register SCSR: SCSR
  #define SYSCFG_SCSR (* ((volatile uint32_t *) (0x40010000 + 24)))

  // Field SRAM2BSY: SRAM2 busy by erase operation
    const uint32_t SYSCFG_SCSR_SRAM2BSY = 1U << 1 ;

  // Field SRAM2ER: SRAM2 Erase
    const uint32_t SYSCFG_SCSR_SRAM2ER = 1U << 0 ;

//---  Register CFGR2: CFGR2
  #define SYSCFG_CFGR2 (* ((volatile uint32_t *) (0x40010000 + 28)))

  // Field SPF: SRAM2 parity error flag
    const uint32_t SYSCFG_CFGR2_SPF = 1U << 8 ;

  // Field ECCL: ECC Lock
    const uint32_t SYSCFG_CFGR2_ECCL = 1U << 3 ;

  // Field PVDL: PVD lock enable bit
    const uint32_t SYSCFG_CFGR2_PVDL = 1U << 2 ;

  // Field SPL: SRAM2 parity lock bit
    const uint32_t SYSCFG_CFGR2_SPL = 1U << 1 ;

  // Field CLL: OCKUP (Hardfault) output enable bit
    const uint32_t SYSCFG_CFGR2_CLL = 1U << 0 ;

//---  Register SWPR: SWPR
  #define SYSCFG_SWPR (* ((volatile uint32_t *) (0x40010000 + 32)))

  // Field P31WP: SRAM2 page 31 write protection
    const uint32_t SYSCFG_SWPR_P31WP = 1U << 31 ;

  // Field P30WP: P30WP
    const uint32_t SYSCFG_SWPR_P30WP = 1U << 30 ;

  // Field P29WP: P29WP
    const uint32_t SYSCFG_SWPR_P29WP = 1U << 29 ;

  // Field P28WP: P28WP
    const uint32_t SYSCFG_SWPR_P28WP = 1U << 28 ;

  // Field P27WP: P27WP
    const uint32_t SYSCFG_SWPR_P27WP = 1U << 27 ;

  // Field P26WP: P26WP
    const uint32_t SYSCFG_SWPR_P26WP = 1U << 26 ;

  // Field P25WP: P25WP
    const uint32_t SYSCFG_SWPR_P25WP = 1U << 25 ;

  // Field P24WP: P24WP
    const uint32_t SYSCFG_SWPR_P24WP = 1U << 24 ;

  // Field P23WP: P23WP
    const uint32_t SYSCFG_SWPR_P23WP = 1U << 23 ;

  // Field P22WP: P22WP
    const uint32_t SYSCFG_SWPR_P22WP = 1U << 22 ;

  // Field P21WP: P21WP
    const uint32_t SYSCFG_SWPR_P21WP = 1U << 21 ;

  // Field P20WP: P20WP
    const uint32_t SYSCFG_SWPR_P20WP = 1U << 20 ;

  // Field P19WP: P19WP
    const uint32_t SYSCFG_SWPR_P19WP = 1U << 19 ;

  // Field P18WP: P18WP
    const uint32_t SYSCFG_SWPR_P18WP = 1U << 18 ;

  // Field P17WP: P17WP
    const uint32_t SYSCFG_SWPR_P17WP = 1U << 17 ;

  // Field P16WP: P16WP
    const uint32_t SYSCFG_SWPR_P16WP = 1U << 16 ;

  // Field P15WP: P15WP
    const uint32_t SYSCFG_SWPR_P15WP = 1U << 15 ;

  // Field P14WP: P14WP
    const uint32_t SYSCFG_SWPR_P14WP = 1U << 14 ;

  // Field P13WP: P13WP
    const uint32_t SYSCFG_SWPR_P13WP = 1U << 13 ;

  // Field P12WP: P12WP
    const uint32_t SYSCFG_SWPR_P12WP = 1U << 12 ;

  // Field P11WP: P11WP
    const uint32_t SYSCFG_SWPR_P11WP = 1U << 11 ;

  // Field P10WP: P10WP
    const uint32_t SYSCFG_SWPR_P10WP = 1U << 10 ;

  // Field P9WP: P9WP
    const uint32_t SYSCFG_SWPR_P9WP = 1U << 9 ;

  // Field P8WP: P8WP
    const uint32_t SYSCFG_SWPR_P8WP = 1U << 8 ;

  // Field P7WP: P7WP
    const uint32_t SYSCFG_SWPR_P7WP = 1U << 7 ;

  // Field P6WP: P6WP
    const uint32_t SYSCFG_SWPR_P6WP = 1U << 6 ;

  // Field P5WP: P5WP
    const uint32_t SYSCFG_SWPR_P5WP = 1U << 5 ;

  // Field P4WP: P4WP
    const uint32_t SYSCFG_SWPR_P4WP = 1U << 4 ;

  // Field P3WP: P3WP
    const uint32_t SYSCFG_SWPR_P3WP = 1U << 3 ;

  // Field P2WP: P2WP
    const uint32_t SYSCFG_SWPR_P2WP = 1U << 2 ;

  // Field P1WP: P1WP
    const uint32_t SYSCFG_SWPR_P1WP = 1U << 1 ;

  // Field P0WP: P0WP
    const uint32_t SYSCFG_SWPR_P0WP = 1U << 0 ;

//---  Register SKR: SKR
  #define SYSCFG_SKR (* ((volatile uint32_t *) (0x40010000 + 36)))

  // Field KEY: SRAM2 write protection key for software erase
    inline uint32_t SYSCFG_SKR_KEY (const uint32_t inValue) {return (inValue & 0xffU) << 0 ; }

//------------------------------------------------------------------------------
// Peripheral TIM1: Advanced-timers
//------------------------------------------------------------------------------

//---  Register CR1: control register 1
  #define TIM1_CR1 (* ((volatile uint32_t *) (0x40012c00 + 0)))

  // Field CKD: Clock division
    inline uint32_t TIM1_CR1_CKD (const uint32_t inValue) {return (inValue & 0x3U) << 8 ; }

  // Field ARPE: Auto-reload preload enable
    const uint32_t TIM1_CR1_ARPE = 1U << 7 ;

  // Field CMS: Center-aligned mode selection
    inline uint32_t TIM1_CR1_CMS (const uint32_t inValue) {return (inValue & 0x3U) << 5 ; }

  // Field DIR: Direction
    const uint32_t TIM1_CR1_DIR = 1U << 4 ;

  // Field OPM: One-pulse mode
    const uint32_t TIM1_CR1_OPM = 1U << 3 ;

  // Field URS: Update request source
    const uint32_t TIM1_CR1_URS = 1U << 2 ;

  // Field UDIS: Update disable
    const uint32_t TIM1_CR1_UDIS = 1U << 1 ;

  // Field CEN: Counter enable
    const uint32_t TIM1_CR1_CEN = 1U << 0 ;

//---  Register CR2: control register 2
  #define TIM1_CR2 (* ((volatile uint32_t *) (0x40012c00 + 4)))

  // Field OIS4: Output Idle state 4
    const uint32_t TIM1_CR2_OIS4 = 1U << 14 ;

  // Field OIS3N: Output Idle state 3
    const uint32_t TIM1_CR2_OIS3N = 1U << 13 ;

  // Field OIS3: Output Idle state 3
    const uint32_t TIM1_CR2_OIS3 = 1U << 12 ;

  // Field OIS2N: Output Idle state 2
    const uint32_t TIM1_CR2_OIS2N = 1U << 11 ;

  // Field OIS2: Output Idle state 2
    const uint32_t TIM1_CR2_OIS2 = 1U << 10 ;

  // Field OIS1N: Output Idle state 1
    const uint32_t TIM1_CR2_OIS1N = 1U << 9 ;

  // Field OIS1: Output Idle state 1
    const uint32_t TIM1_CR2_OIS1 = 1U << 8 ;

  // Field TI1S: TI1 selection
    const uint32_t TIM1_CR2_TI1S = 1U << 7 ;

  // Field MMS: Master mode selection
    inline uint32_t TIM1_CR2_MMS (const uint32_t inValue) {return (inValue & 0x7U) << 4 ; }

  // Field CCDS: Capture/compare DMA selection
    const uint32_t TIM1_CR2_CCDS = 1U << 3 ;

  // Field CCUS: Capture/compare control update selection
    const uint32_t TIM1_CR2_CCUS = 1U << 2 ;

  // Field CCPC: Capture/compare preloaded control
    const uint32_t TIM1_CR2_CCPC = 1U << 0 ;

//---  Register SMCR: slave mode control register
  #define TIM1_SMCR (* ((volatile uint32_t *) (0x40012c00 + 8)))

  // Field ETP: External trigger polarity
    const uint32_t TIM1_SMCR_ETP = 1U << 15 ;

  // Field ECE: External clock enable
    const uint32_t TIM1_SMCR_ECE = 1U << 14 ;

  // Field ETPS: External trigger prescaler
    inline uint32_t TIM1_SMCR_ETPS (const uint32_t inValue) {return (inValue & 0x3U) << 12 ; }

  // Field ETF: External trigger filter
    inline uint32_t TIM1_SMCR_ETF (const uint32_t inValue) {return (inValue & 0xfU) << 8 ; }

  // Field MSM: Master/Slave mode
    const uint32_t TIM1_SMCR_MSM = 1U << 7 ;

  // Field TS: Trigger selection
    inline uint32_t TIM1_SMCR_TS (const uint32_t inValue) {return (inValue & 0x7U) << 4 ; }

  // Field SMS: Slave mode selection
    inline uint32_t TIM1_SMCR_SMS (const uint32_t inValue) {return (inValue & 0x7U) << 0 ; }

//---  Register DIER: DMA/Interrupt enable register
  #define TIM1_DIER (* ((volatile uint32_t *) (0x40012c00 + 12)))

  // Field TDE: Trigger DMA request enable
    const uint32_t TIM1_DIER_TDE = 1U << 14 ;

  // Field COMDE: COM DMA request enable
    const uint32_t TIM1_DIER_COMDE = 1U << 13 ;

  // Field CC4DE: Capture/Compare 4 DMA request enable
    const uint32_t TIM1_DIER_CC4DE = 1U << 12 ;

  // Field CC3DE: Capture/Compare 3 DMA request enable
    const uint32_t TIM1_DIER_CC3DE = 1U << 11 ;

  // Field CC2DE: Capture/Compare 2 DMA request enable
    const uint32_t TIM1_DIER_CC2DE = 1U << 10 ;

  // Field CC1DE: Capture/Compare 1 DMA request enable
    const uint32_t TIM1_DIER_CC1DE = 1U << 9 ;

  // Field UDE: Update DMA request enable
    const uint32_t TIM1_DIER_UDE = 1U << 8 ;

  // Field TIE: Trigger interrupt enable
    const uint32_t TIM1_DIER_TIE = 1U << 6 ;

  // Field CC4IE: Capture/Compare 4 interrupt enable
    const uint32_t TIM1_DIER_CC4IE = 1U << 4 ;

  // Field CC3IE: Capture/Compare 3 interrupt enable
    const uint32_t TIM1_DIER_CC3IE = 1U << 3 ;

  // Field CC2IE: Capture/Compare 2 interrupt enable
    const uint32_t TIM1_DIER_CC2IE = 1U << 2 ;

  // Field CC1IE: Capture/Compare 1 interrupt enable
    const uint32_t TIM1_DIER_CC1IE = 1U << 1 ;

  // Field UIE: Update interrupt enable
    const uint32_t TIM1_DIER_UIE = 1U << 0 ;

  // Field BIE: Break interrupt enable
    const uint32_t TIM1_DIER_BIE = 1U << 7 ;

  // Field COMIE: COM interrupt enable
    const uint32_t TIM1_DIER_COMIE = 1U << 5 ;

//---  Register SR: status register
  #define TIM1_SR (* ((volatile uint32_t *) (0x40012c00 + 16)))

  // Field CC4OF: Capture/Compare 4 overcapture flag
    const uint32_t TIM1_SR_CC4OF = 1U << 12 ;

  // Field CC3OF: Capture/Compare 3 overcapture flag
    const uint32_t TIM1_SR_CC3OF = 1U << 11 ;

  // Field CC2OF: Capture/compare 2 overcapture flag
    const uint32_t TIM1_SR_CC2OF = 1U << 10 ;

  // Field CC1OF: Capture/Compare 1 overcapture flag
    const uint32_t TIM1_SR_CC1OF = 1U << 9 ;

  // Field BIF: Break interrupt flag
    const uint32_t TIM1_SR_BIF = 1U << 7 ;

  // Field TIF: Trigger interrupt flag
    const uint32_t TIM1_SR_TIF = 1U << 6 ;

  // Field COMIF: COM interrupt flag
    const uint32_t TIM1_SR_COMIF = 1U << 5 ;

  // Field CC4IF: Capture/Compare 4 interrupt flag
    const uint32_t TIM1_SR_CC4IF = 1U << 4 ;

  // Field CC3IF: Capture/Compare 3 interrupt flag
    const uint32_t TIM1_SR_CC3IF = 1U << 3 ;

  // Field CC2IF: Capture/Compare 2 interrupt flag
    const uint32_t TIM1_SR_CC2IF = 1U << 2 ;

  // Field CC1IF: Capture/compare 1 interrupt flag
    const uint32_t TIM1_SR_CC1IF = 1U << 1 ;

  // Field UIF: Update interrupt flag
    const uint32_t TIM1_SR_UIF = 1U << 0 ;

//---  Register EGR: event generation register
  #define TIM1_EGR (* ((volatile uint32_t *) (0x40012c00 + 20)))

  // Field BG: Break generation
    const uint32_t TIM1_EGR_BG = 1U << 7 ;

  // Field TG: Trigger generation
    const uint32_t TIM1_EGR_TG = 1U << 6 ;

  // Field COMG: Capture/Compare control update generation
    const uint32_t TIM1_EGR_COMG = 1U << 5 ;

  // Field CC4G: Capture/compare 4 generation
    const uint32_t TIM1_EGR_CC4G = 1U << 4 ;

  // Field CC3G: Capture/compare 3 generation
    const uint32_t TIM1_EGR_CC3G = 1U << 3 ;

  // Field CC2G: Capture/compare 2 generation
    const uint32_t TIM1_EGR_CC2G = 1U << 2 ;

  // Field CC1G: Capture/compare 1 generation
    const uint32_t TIM1_EGR_CC1G = 1U << 1 ;

  // Field UG: Update generation
    const uint32_t TIM1_EGR_UG = 1U << 0 ;

//---  Register CCMR1_Output: capture/compare mode register 1 (output
          mode)
  #define TIM1_CCMR1_Output (* ((volatile uint32_t *) (0x40012c00 + 24)))

  // Field OC2CE: Output Compare 2 clear enable
    const uint32_t TIM1_CCMR1_Output_OC2CE = 1U << 15 ;

  // Field OC2M: Output Compare 2 mode
    inline uint32_t TIM1_CCMR1_Output_OC2M (const uint32_t inValue) {return (inValue & 0x7U) << 12 ; }

  // Field OC2PE: Output Compare 2 preload enable
    const uint32_t TIM1_CCMR1_Output_OC2PE = 1U << 11 ;

  // Field OC2FE: Output Compare 2 fast enable
    const uint32_t TIM1_CCMR1_Output_OC2FE = 1U << 10 ;

  // Field CC2S: Capture/Compare 2 selection
    inline uint32_t TIM1_CCMR1_Output_CC2S (const uint32_t inValue) {return (inValue & 0x3U) << 8 ; }

  // Field OC1CE: Output Compare 1 clear enable
    const uint32_t TIM1_CCMR1_Output_OC1CE = 1U << 7 ;

  // Field OC1M: Output Compare 1 mode
    inline uint32_t TIM1_CCMR1_Output_OC1M (const uint32_t inValue) {return (inValue & 0x7U) << 4 ; }

  // Field OC1PE: Output Compare 1 preload enable
    const uint32_t TIM1_CCMR1_Output_OC1PE = 1U << 3 ;

  // Field OC1FE: Output Compare 1 fast enable
    const uint32_t TIM1_CCMR1_Output_OC1FE = 1U << 2 ;

  // Field CC1S: Capture/Compare 1 selection
    inline uint32_t TIM1_CCMR1_Output_CC1S (const uint32_t inValue) {return (inValue & 0x3U) << 0 ; }

//---  Register CCMR1_Input: capture/compare mode register 1 (input
          mode)
  #define TIM1_CCMR1_Input (* ((volatile uint32_t *) (0x40012c00 + 24)))

  // Field IC2F: Input capture 2 filter
    inline uint32_t TIM1_CCMR1_Input_IC2F (const uint32_t inValue) {return (inValue & 0xfU) << 12 ; }

  // Field IC2PCS: Input capture 2 prescaler
    inline uint32_t TIM1_CCMR1_Input_IC2PCS (const uint32_t inValue) {return (inValue & 0x3U) << 10 ; }

  // Field CC2S: Capture/Compare 2 selection
    inline uint32_t TIM1_CCMR1_Input_CC2S (const uint32_t inValue) {return (inValue & 0x3U) << 8 ; }

  // Field IC1F: Input capture 1 filter
    inline uint32_t TIM1_CCMR1_Input_IC1F (const uint32_t inValue) {return (inValue & 0xfU) << 4 ; }

  // Field ICPCS: Input capture 1 prescaler
    inline uint32_t TIM1_CCMR1_Input_ICPCS (const uint32_t inValue) {return (inValue & 0x3U) << 2 ; }

  // Field CC1S: Capture/Compare 1 selection
    inline uint32_t TIM1_CCMR1_Input_CC1S (const uint32_t inValue) {return (inValue & 0x3U) << 0 ; }

//---  Register CCMR2_Output: capture/compare mode register 2 (output
          mode)
  #define TIM1_CCMR2_Output (* ((volatile uint32_t *) (0x40012c00 + 28)))

  // Field OC4CE: Output compare 4 clear enable
    const uint32_t TIM1_CCMR2_Output_OC4CE = 1U << 15 ;

  // Field OC4M: Output compare 4 mode
    inline uint32_t TIM1_CCMR2_Output_OC4M (const uint32_t inValue) {return (inValue & 0x7U) << 12 ; }

  // Field OC4PE: Output compare 4 preload enable
    const uint32_t TIM1_CCMR2_Output_OC4PE = 1U << 11 ;

  // Field OC4FE: Output compare 4 fast enable
    const uint32_t TIM1_CCMR2_Output_OC4FE = 1U << 10 ;

  // Field CC4S: Capture/Compare 4 selection
    inline uint32_t TIM1_CCMR2_Output_CC4S (const uint32_t inValue) {return (inValue & 0x3U) << 8 ; }

  // Field OC3CE: Output compare 3 clear enable
    const uint32_t TIM1_CCMR2_Output_OC3CE = 1U << 7 ;

  // Field OC3M: Output compare 3 mode
    inline uint32_t TIM1_CCMR2_Output_OC3M (const uint32_t inValue) {return (inValue & 0x7U) << 4 ; }

  // Field OC3PE: Output compare 3 preload enable
    const uint32_t TIM1_CCMR2_Output_OC3PE = 1U << 3 ;

  // Field OC3FE: Output compare 3 fast enable
    const uint32_t TIM1_CCMR2_Output_OC3FE = 1U << 2 ;

  // Field CC3S: Capture/Compare 3 selection
    inline uint32_t TIM1_CCMR2_Output_CC3S (const uint32_t inValue) {return (inValue & 0x3U) << 0 ; }

//---  Register CCMR2_Input: capture/compare mode register 2 (input
          mode)
  #define TIM1_CCMR2_Input (* ((volatile uint32_t *) (0x40012c00 + 28)))

  // Field IC4F: Input capture 4 filter
    inline uint32_t TIM1_CCMR2_Input_IC4F (const uint32_t inValue) {return (inValue & 0xfU) << 12 ; }

  // Field IC4PSC: Input capture 4 prescaler
    inline uint32_t TIM1_CCMR2_Input_IC4PSC (const uint32_t inValue) {return (inValue & 0x3U) << 10 ; }

  // Field CC4S: Capture/Compare 4 selection
    inline uint32_t TIM1_CCMR2_Input_CC4S (const uint32_t inValue) {return (inValue & 0x3U) << 8 ; }

  // Field IC3F: Input capture 3 filter
    inline uint32_t TIM1_CCMR2_Input_IC3F (const uint32_t inValue) {return (inValue & 0xfU) << 4 ; }

  // Field IC3PSC: Input capture 3 prescaler
    inline uint32_t TIM1_CCMR2_Input_IC3PSC (const uint32_t inValue) {return (inValue & 0x3U) << 2 ; }

  // Field CC3S: Capture/compare 3 selection
    inline uint32_t TIM1_CCMR2_Input_CC3S (const uint32_t inValue) {return (inValue & 0x3U) << 0 ; }

//---  Register CCER: capture/compare enable
          register
  #define TIM1_CCER (* ((volatile uint32_t *) (0x40012c00 + 32)))

  // Field CC4P: Capture/Compare 3 output Polarity
    const uint32_t TIM1_CCER_CC4P = 1U << 13 ;

  // Field CC4E: Capture/Compare 4 output enable
    const uint32_t TIM1_CCER_CC4E = 1U << 12 ;

  // Field CC3NP: Capture/Compare 3 output Polarity
    const uint32_t TIM1_CCER_CC3NP = 1U << 11 ;

  // Field CC3NE: Capture/Compare 3 complementary output enable
    const uint32_t TIM1_CCER_CC3NE = 1U << 10 ;

  // Field CC3P: Capture/Compare 3 output Polarity
    const uint32_t TIM1_CCER_CC3P = 1U << 9 ;

  // Field CC3E: Capture/Compare 3 output enable
    const uint32_t TIM1_CCER_CC3E = 1U << 8 ;

  // Field CC2NP: Capture/Compare 2 output Polarity
    const uint32_t TIM1_CCER_CC2NP = 1U << 7 ;

  // Field CC2NE: Capture/Compare 2 complementary output enable
    const uint32_t TIM1_CCER_CC2NE = 1U << 6 ;

  // Field CC2P: Capture/Compare 2 output Polarity
    const uint32_t TIM1_CCER_CC2P = 1U << 5 ;

  // Field CC2E: Capture/Compare 2 output enable
    const uint32_t TIM1_CCER_CC2E = 1U << 4 ;

  // Field CC1NP: Capture/Compare 1 output Polarity
    const uint32_t TIM1_CCER_CC1NP = 1U << 3 ;

  // Field CC1NE: Capture/Compare 1 complementary output enable
    const uint32_t TIM1_CCER_CC1NE = 1U << 2 ;

  // Field CC1P: Capture/Compare 1 output Polarity
    const uint32_t TIM1_CCER_CC1P = 1U << 1 ;

  // Field CC1E: Capture/Compare 1 output enable
    const uint32_t TIM1_CCER_CC1E = 1U << 0 ;

//---  Register CNT: counter
  #define TIM1_CNT (* ((volatile uint32_t *) (0x40012c00 + 36)))

  // Field CNT: counter value
    inline uint32_t TIM1_CNT_CNT (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register PSC: prescaler
  #define TIM1_PSC (* ((volatile uint32_t *) (0x40012c00 + 40)))

  // Field PSC: Prescaler value
    inline uint32_t TIM1_PSC_PSC (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register ARR: auto-reload register
  #define TIM1_ARR (* ((volatile uint32_t *) (0x40012c00 + 44)))

  // Field ARR: Auto-reload value
    inline uint32_t TIM1_ARR_ARR (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register RCR: repetition counter register
  #define TIM1_RCR (* ((volatile uint32_t *) (0x40012c00 + 48)))

  // Field REP: Repetition counter value
    inline uint32_t TIM1_RCR_REP (const uint32_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register CCR1: capture/compare register 1
  #define TIM1_CCR1 (* ((volatile uint32_t *) (0x40012c00 + 52)))

  // Field CCR1: Capture/Compare 1 value
    inline uint32_t TIM1_CCR1_CCR1 (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register CCR2: capture/compare register 2
  #define TIM1_CCR2 (* ((volatile uint32_t *) (0x40012c00 + 56)))

  // Field CCR2: Capture/Compare 2 value
    inline uint32_t TIM1_CCR2_CCR2 (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register CCR3: capture/compare register 3
  #define TIM1_CCR3 (* ((volatile uint32_t *) (0x40012c00 + 60)))

  // Field CCR3: Capture/Compare value
    inline uint32_t TIM1_CCR3_CCR3 (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register CCR4: capture/compare register 4
  #define TIM1_CCR4 (* ((volatile uint32_t *) (0x40012c00 + 64)))

  // Field CCR4: Capture/Compare value
    inline uint32_t TIM1_CCR4_CCR4 (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register BDTR: break and dead-time register
  #define TIM1_BDTR (* ((volatile uint32_t *) (0x40012c00 + 68)))

  // Field MOE: Main output enable
    const uint32_t TIM1_BDTR_MOE = 1U << 15 ;

  // Field AOE: Automatic output enable
    const uint32_t TIM1_BDTR_AOE = 1U << 14 ;

  // Field BKP: Break polarity
    const uint32_t TIM1_BDTR_BKP = 1U << 13 ;

  // Field BKE: Break enable
    const uint32_t TIM1_BDTR_BKE = 1U << 12 ;

  // Field OSSR: Off-state selection for Run mode
    const uint32_t TIM1_BDTR_OSSR = 1U << 11 ;

  // Field OSSI: Off-state selection for Idle mode
    const uint32_t TIM1_BDTR_OSSI = 1U << 10 ;

  // Field LOCK: Lock configuration
    inline uint32_t TIM1_BDTR_LOCK (const uint32_t inValue) {return (inValue & 0x3U) << 8 ; }

  // Field DTG: Dead-time generator setup
    inline uint32_t TIM1_BDTR_DTG (const uint32_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register DCR: DMA control register
  #define TIM1_DCR (* ((volatile uint32_t *) (0x40012c00 + 72)))

  // Field DBL: DMA burst length
    inline uint32_t TIM1_DCR_DBL (const uint32_t inValue) {return (inValue & 0x1fU) << 8 ; }

  // Field DBA: DMA base address
    inline uint32_t TIM1_DCR_DBA (const uint32_t inValue) {return (inValue & 0x1fU) << 0 ; }

//---  Register DMAR: DMA address for full transfer
  #define TIM1_DMAR (* ((volatile uint32_t *) (0x40012c00 + 76)))

  // Field DMAB: DMA register for burst accesses
    inline uint32_t TIM1_DMAR_DMAB (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register OR1: DMA address for full transfer
  #define TIM1_OR1 (* ((volatile uint32_t *) (0x40012c00 + 80)))

  // Field ETR_ADC1_RMP: External trigger remap on ADC1 analog watchdog
    inline uint32_t TIM1_OR1_ETR_ADC1_RMP (const uint32_t inValue) {return (inValue & 0x3U) << 0 ; }

  // Field ETR_ADC3_RMP: External trigger remap on ADC3 analog watchdog
    inline uint32_t TIM1_OR1_ETR_ADC3_RMP (const uint32_t inValue) {return (inValue & 0x3U) << 2 ; }

  // Field TI1_RMP: Input Capture 1 remap
    const uint32_t TIM1_OR1_TI1_RMP = 1U << 4 ;

//---  Register CCMR3_Output: capture/compare mode register 2 (output
          mode)
  #define TIM1_CCMR3_Output (* ((volatile uint32_t *) (0x40012c00 + 84)))

  // Field OC6M_bit3: Output Compare 6 mode bit 3
    const uint32_t TIM1_CCMR3_Output_OC6M_bit3 = 1U << 24 ;

  // Field OC5M_bit3: Output Compare 5 mode bit 3
    inline uint32_t TIM1_CCMR3_Output_OC5M_bit3 (const uint32_t inValue) {return (inValue & 0x7U) << 16 ; }

  // Field OC6CE: Output compare 6 clear enable
    const uint32_t TIM1_CCMR3_Output_OC6CE = 1U << 15 ;

  // Field OC6M: Output compare 6 mode
    inline uint32_t TIM1_CCMR3_Output_OC6M (const uint32_t inValue) {return (inValue & 0x7U) << 12 ; }

  // Field OC6PE: Output compare 6 preload enable
    const uint32_t TIM1_CCMR3_Output_OC6PE = 1U << 11 ;

  // Field OC6FE: Output compare 6 fast enable
    const uint32_t TIM1_CCMR3_Output_OC6FE = 1U << 10 ;

  // Field OC5CE: Output compare 5 clear enable
    const uint32_t TIM1_CCMR3_Output_OC5CE = 1U << 7 ;

  // Field OC5M: Output compare 5 mode
    inline uint32_t TIM1_CCMR3_Output_OC5M (const uint32_t inValue) {return (inValue & 0x7U) << 4 ; }

  // Field OC5PE: Output compare 5 preload enable
    const uint32_t TIM1_CCMR3_Output_OC5PE = 1U << 3 ;

  // Field OC5FE: Output compare 5 fast enable
    const uint32_t TIM1_CCMR3_Output_OC5FE = 1U << 2 ;

//---  Register CCR5: capture/compare register 4
  #define TIM1_CCR5 (* ((volatile uint32_t *) (0x40012c00 + 88)))

  // Field CCR5: Capture/Compare value
    inline uint32_t TIM1_CCR5_CCR5 (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

  // Field GC5C1: Group Channel 5 and Channel 1
    const uint32_t TIM1_CCR5_GC5C1 = 1U << 29 ;

  // Field GC5C2: Group Channel 5 and Channel 2
    const uint32_t TIM1_CCR5_GC5C2 = 1U << 30 ;

  // Field GC5C3: Group Channel 5 and Channel 3
    const uint32_t TIM1_CCR5_GC5C3 = 1U << 31 ;

//---  Register CCR6: capture/compare register 4
  #define TIM1_CCR6 (* ((volatile uint32_t *) (0x40012c00 + 92)))

  // Field CCR6: Capture/Compare value
    inline uint32_t TIM1_CCR6_CCR6 (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register OR2: DMA address for full transfer
  #define TIM1_OR2 (* ((volatile uint32_t *) (0x40012c00 + 96)))

  // Field BKINE: BRK BKIN input enable
    const uint32_t TIM1_OR2_BKINE = 1U << 0 ;

  // Field BKCMP1E: BRK COMP1 enable
    const uint32_t TIM1_OR2_BKCMP1E = 1U << 1 ;

  // Field BKCMP2E: BRK COMP2 enable
    const uint32_t TIM1_OR2_BKCMP2E = 1U << 2 ;

  // Field BKDFBK0E: BRK DFSDM_BREAK0 enable
    const uint32_t TIM1_OR2_BKDFBK0E = 1U << 8 ;

  // Field BKINP: BRK BKIN input polarity
    const uint32_t TIM1_OR2_BKINP = 1U << 9 ;

  // Field BKCMP1P: BRK COMP1 input polarity
    const uint32_t TIM1_OR2_BKCMP1P = 1U << 10 ;

  // Field BKCMP2P: BRK COMP2 input polarity
    const uint32_t TIM1_OR2_BKCMP2P = 1U << 11 ;

  // Field ETRSEL: ETR source selection
    inline uint32_t TIM1_OR2_ETRSEL (const uint32_t inValue) {return (inValue & 0x7U) << 14 ; }

//---  Register OR3: DMA address for full transfer
  #define TIM1_OR3 (* ((volatile uint32_t *) (0x40012c00 + 100)))

  // Field BK2INE: BRK2 BKIN input enable
    const uint32_t TIM1_OR3_BK2INE = 1U << 0 ;

  // Field BK2CMP1E: BRK2 COMP1 enable
    const uint32_t TIM1_OR3_BK2CMP1E = 1U << 1 ;

  // Field BK2CMP2E: BRK2 COMP2 enable
    const uint32_t TIM1_OR3_BK2CMP2E = 1U << 2 ;

  // Field BK2DFBK0E: BRK2 DFSDM_BREAK0 enable
    const uint32_t TIM1_OR3_BK2DFBK0E = 1U << 8 ;

  // Field BK2INP: BRK2 BKIN input polarity
    const uint32_t TIM1_OR3_BK2INP = 1U << 9 ;

  // Field BK2CMP1P: BRK2 COMP1 input polarity
    const uint32_t TIM1_OR3_BK2CMP1P = 1U << 10 ;

  // Field BK2CMP2P: BRK2 COMP2 input polarity
    const uint32_t TIM1_OR3_BK2CMP2P = 1U << 11 ;

//------------------------------------------------------------------------------
// Peripheral TIM15: General purpose timers
//------------------------------------------------------------------------------

//---  Register CR1: control register 1
  #define TIM15_CR1 (* ((volatile uint32_t *) (0x40014000 + 0)))

  // Field CEN: Counter enable
    const uint32_t TIM15_CR1_CEN = 1U << 0 ;

  // Field UDIS: Update disable
    const uint32_t TIM15_CR1_UDIS = 1U << 1 ;

  // Field URS: Update request source
    const uint32_t TIM15_CR1_URS = 1U << 2 ;

  // Field OPM: One-pulse mode
    const uint32_t TIM15_CR1_OPM = 1U << 3 ;

  // Field ARPE: Auto-reload preload enable
    const uint32_t TIM15_CR1_ARPE = 1U << 7 ;

  // Field CKD: Clock division
    inline uint32_t TIM15_CR1_CKD (const uint32_t inValue) {return (inValue & 0x3U) << 8 ; }

  // Field UIFREMAP: UIF status bit remapping
    const uint32_t TIM15_CR1_UIFREMAP = 1U << 11 ;

//---  Register CR2: control register 2
  #define TIM15_CR2 (* ((volatile uint32_t *) (0x40014000 + 4)))

  // Field OIS1N: Output Idle state 1
    const uint32_t TIM15_CR2_OIS1N = 1U << 9 ;

  // Field OIS1: Output Idle state 1
    const uint32_t TIM15_CR2_OIS1 = 1U << 8 ;

  // Field CCDS: Capture/compare DMA selection
    const uint32_t TIM15_CR2_CCDS = 1U << 3 ;

  // Field CCUS: Capture/compare control update selection
    const uint32_t TIM15_CR2_CCUS = 1U << 2 ;

  // Field CCPC: Capture/compare preloaded control
    const uint32_t TIM15_CR2_CCPC = 1U << 0 ;

//---  Register DIER: DMA/Interrupt enable register
  #define TIM15_DIER (* ((volatile uint32_t *) (0x40014000 + 12)))

  // Field TDE: Trigger DMA request enable
    const uint32_t TIM15_DIER_TDE = 1U << 14 ;

  // Field COMDE: COM DMA request enable
    const uint32_t TIM15_DIER_COMDE = 1U << 13 ;

  // Field CC1DE: Capture/Compare 1 DMA request enable
    const uint32_t TIM15_DIER_CC1DE = 1U << 9 ;

  // Field UDE: Update DMA request enable
    const uint32_t TIM15_DIER_UDE = 1U << 8 ;

  // Field BIE: Break interrupt enable
    const uint32_t TIM15_DIER_BIE = 1U << 7 ;

  // Field TIE: Trigger interrupt enable
    const uint32_t TIM15_DIER_TIE = 1U << 6 ;

  // Field COMIE: COM interrupt enable
    const uint32_t TIM15_DIER_COMIE = 1U << 5 ;

  // Field CC1IE: Capture/Compare 1 interrupt enable
    const uint32_t TIM15_DIER_CC1IE = 1U << 1 ;

  // Field UIE: Update interrupt enable
    const uint32_t TIM15_DIER_UIE = 1U << 0 ;

//---  Register SR: status register
  #define TIM15_SR (* ((volatile uint32_t *) (0x40014000 + 16)))

  // Field CC1OF: Capture/Compare 1 overcapture flag
    const uint32_t TIM15_SR_CC1OF = 1U << 9 ;

  // Field BIF: Break interrupt flag
    const uint32_t TIM15_SR_BIF = 1U << 7 ;

  // Field TIF: Trigger interrupt flag
    const uint32_t TIM15_SR_TIF = 1U << 6 ;

  // Field COMIF: COM interrupt flag
    const uint32_t TIM15_SR_COMIF = 1U << 5 ;

  // Field CC1IF: Capture/compare 1 interrupt flag
    const uint32_t TIM15_SR_CC1IF = 1U << 1 ;

  // Field UIF: Update interrupt flag
    const uint32_t TIM15_SR_UIF = 1U << 0 ;

//---  Register EGR: event generation register
  #define TIM15_EGR (* ((volatile uint32_t *) (0x40014000 + 20)))

  // Field BG: Break generation
    const uint32_t TIM15_EGR_BG = 1U << 7 ;

  // Field TG: Trigger generation
    const uint32_t TIM15_EGR_TG = 1U << 6 ;

  // Field COMG: Capture/Compare control update generation
    const uint32_t TIM15_EGR_COMG = 1U << 5 ;

  // Field CC1G: Capture/compare 1 generation
    const uint32_t TIM15_EGR_CC1G = 1U << 1 ;

  // Field UG: Update generation
    const uint32_t TIM15_EGR_UG = 1U << 0 ;

//---  Register CCMR1_Output: capture/compare mode register (output
          mode)
  #define TIM15_CCMR1_Output (* ((volatile uint32_t *) (0x40014000 + 24)))

  // Field OC1M_2: Output Compare 1 mode
    const uint32_t TIM15_CCMR1_Output_OC1M_2 = 1U << 16 ;

  // Field OC1M: Output Compare 1 mode
    inline uint32_t TIM15_CCMR1_Output_OC1M (const uint32_t inValue) {return (inValue & 0x7U) << 4 ; }

  // Field OC1PE: Output Compare 1 preload enable
    const uint32_t TIM15_CCMR1_Output_OC1PE = 1U << 3 ;

  // Field OC1FE: Output Compare 1 fast enable
    const uint32_t TIM15_CCMR1_Output_OC1FE = 1U << 2 ;

  // Field CC1S: Capture/Compare 1 selection
    inline uint32_t TIM15_CCMR1_Output_CC1S (const uint32_t inValue) {return (inValue & 0x3U) << 0 ; }

//---  Register CCMR1_Input: capture/compare mode register 1 (input
          mode)
  #define TIM15_CCMR1_Input (* ((volatile uint32_t *) (0x40014000 + 24)))

  // Field IC1F: Input capture 1 filter
    inline uint32_t TIM15_CCMR1_Input_IC1F (const uint32_t inValue) {return (inValue & 0xfU) << 4 ; }

  // Field IC1PSC: Input capture 1 prescaler
    inline uint32_t TIM15_CCMR1_Input_IC1PSC (const uint32_t inValue) {return (inValue & 0x3U) << 2 ; }

  // Field CC1S: Capture/Compare 1 selection
    inline uint32_t TIM15_CCMR1_Input_CC1S (const uint32_t inValue) {return (inValue & 0x3U) << 0 ; }

//---  Register CCER: capture/compare enable
          register
  #define TIM15_CCER (* ((volatile uint32_t *) (0x40014000 + 32)))

  // Field CC1NP: Capture/Compare 1 output Polarity
    const uint32_t TIM15_CCER_CC1NP = 1U << 3 ;

  // Field CC1NE: Capture/Compare 1 complementary output enable
    const uint32_t TIM15_CCER_CC1NE = 1U << 2 ;

  // Field CC1P: Capture/Compare 1 output Polarity
    const uint32_t TIM15_CCER_CC1P = 1U << 1 ;

  // Field CC1E: Capture/Compare 1 output enable
    const uint32_t TIM15_CCER_CC1E = 1U << 0 ;

//---  Register CNT: counter
  #define TIM15_CNT (* ((volatile uint32_t *) (0x40014000 + 36)))

  // Field CNT: counter value
    inline uint32_t TIM15_CNT_CNT (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

  // Field UIFCPY: UIF Copy
    const uint32_t TIM15_CNT_UIFCPY = 1U << 31 ;

//---  Register PSC: prescaler
  #define TIM15_PSC (* ((volatile uint32_t *) (0x40014000 + 40)))

  // Field PSC: Prescaler value
    inline uint32_t TIM15_PSC_PSC (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register ARR: auto-reload register
  #define TIM15_ARR (* ((volatile uint32_t *) (0x40014000 + 44)))

  // Field ARR: Auto-reload value
    inline uint32_t TIM15_ARR_ARR (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register RCR: repetition counter register
  #define TIM15_RCR (* ((volatile uint32_t *) (0x40014000 + 48)))

  // Field REP: Repetition counter value
    inline uint32_t TIM15_RCR_REP (const uint32_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register CCR1: capture/compare register 1
  #define TIM15_CCR1 (* ((volatile uint32_t *) (0x40014000 + 52)))

  // Field CCR1: Capture/Compare 1 value
    inline uint32_t TIM15_CCR1_CCR1 (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register BDTR: break and dead-time register
  #define TIM15_BDTR (* ((volatile uint32_t *) (0x40014000 + 68)))

  // Field DTG: Dead-time generator setup
    inline uint32_t TIM15_BDTR_DTG (const uint32_t inValue) {return (inValue & 0xffU) << 0 ; }

  // Field LOCK: Lock configuration
    inline uint32_t TIM15_BDTR_LOCK (const uint32_t inValue) {return (inValue & 0x3U) << 8 ; }

  // Field OSSI: Off-state selection for Idle mode
    const uint32_t TIM15_BDTR_OSSI = 1U << 10 ;

  // Field OSSR: Off-state selection for Run mode
    const uint32_t TIM15_BDTR_OSSR = 1U << 11 ;

  // Field BKE: Break enable
    const uint32_t TIM15_BDTR_BKE = 1U << 12 ;

  // Field BKP: Break polarity
    const uint32_t TIM15_BDTR_BKP = 1U << 13 ;

  // Field AOE: Automatic output enable
    const uint32_t TIM15_BDTR_AOE = 1U << 14 ;

  // Field MOE: Main output enable
    const uint32_t TIM15_BDTR_MOE = 1U << 15 ;

  // Field BKF: Break filter
    inline uint32_t TIM15_BDTR_BKF (const uint32_t inValue) {return (inValue & 0xfU) << 16 ; }

//---  Register DCR: DMA control register
  #define TIM15_DCR (* ((volatile uint32_t *) (0x40014000 + 72)))

  // Field DBL: DMA burst length
    inline uint32_t TIM15_DCR_DBL (const uint32_t inValue) {return (inValue & 0x1fU) << 8 ; }

  // Field DBA: DMA base address
    inline uint32_t TIM15_DCR_DBA (const uint32_t inValue) {return (inValue & 0x1fU) << 0 ; }

//---  Register DMAR: DMA address for full transfer
  #define TIM15_DMAR (* ((volatile uint32_t *) (0x40014000 + 76)))

  // Field DMAB: DMA register for burst accesses
    inline uint32_t TIM15_DMAR_DMAB (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register CCR2: TIM15 capture/compare register
          2
  #define TIM15_CCR2 (* ((volatile uint32_t *) (0x40014000 + 56)))

  // Field CCR2: Capture/Compare 2 value
    inline uint32_t TIM15_CCR2_CCR2 (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register OR1: TIM15 option register 1
  #define TIM15_OR1 (* ((volatile uint32_t *) (0x40014000 + 80)))

  // Field ENCODER_MODE: Encoder mode
    inline uint32_t TIM15_OR1_ENCODER_MODE (const uint32_t inValue) {return (inValue & 0x3U) << 1 ; }

  // Field TI1_RMP: Input capture 1 remap
    const uint32_t TIM15_OR1_TI1_RMP = 1U << 0 ;

//---  Register OR2: TIM15 option register 2
  #define TIM15_OR2 (* ((volatile uint32_t *) (0x40014000 + 96)))

  // Field BKINE: BRK BKIN input enable
    const uint32_t TIM15_OR2_BKINE = 1U << 0 ;

  // Field BKCMP1E: BRK COMP1 enable
    const uint32_t TIM15_OR2_BKCMP1E = 1U << 1 ;

  // Field BKCMP2E: BRK COMP2 enable
    const uint32_t TIM15_OR2_BKCMP2E = 1U << 2 ;

  // Field BKINP: BRK BKIN input polarity
    const uint32_t TIM15_OR2_BKINP = 1U << 9 ;

  // Field BKCMP1P: BRK COMP1 input polarity
    const uint32_t TIM15_OR2_BKCMP1P = 1U << 10 ;

  // Field BKCMP2P: BRK COMP2 input polarity
    const uint32_t TIM15_OR2_BKCMP2P = 1U << 11 ;

//---  Register SMCR: TIM15 slave mode control
          register
  #define TIM15_SMCR (* ((volatile uint32_t *) (0x40014000 + 8)))

  // Field SMS: SMS
    inline uint32_t TIM15_SMCR_SMS (const uint32_t inValue) {return (inValue & 0x7U) << 0 ; }

  // Field TS: TS
    inline uint32_t TIM15_SMCR_TS (const uint32_t inValue) {return (inValue & 0x7U) << 4 ; }

  // Field MSM: MSM
    const uint32_t TIM15_SMCR_MSM = 1U << 7 ;

  // Field SMS_16: SMS bit 16
    const uint32_t TIM15_SMCR_SMS_16 = 1U << 16 ;

//------------------------------------------------------------------------------
// Peripheral TIM16: General purpose timers
//------------------------------------------------------------------------------

//---  Register CR1: control register 1
  #define TIM16_CR1 (* ((volatile uint32_t *) (0x40014400 + 0)))

  // Field CEN: Counter enable
    const uint32_t TIM16_CR1_CEN = 1U << 0 ;

  // Field UDIS: Update disable
    const uint32_t TIM16_CR1_UDIS = 1U << 1 ;

  // Field URS: Update request source
    const uint32_t TIM16_CR1_URS = 1U << 2 ;

  // Field OPM: One-pulse mode
    const uint32_t TIM16_CR1_OPM = 1U << 3 ;

  // Field ARPE: Auto-reload preload enable
    const uint32_t TIM16_CR1_ARPE = 1U << 7 ;

  // Field CKD: Clock division
    inline uint32_t TIM16_CR1_CKD (const uint32_t inValue) {return (inValue & 0x3U) << 8 ; }

  // Field UIFREMAP: UIF status bit remapping
    const uint32_t TIM16_CR1_UIFREMAP = 1U << 11 ;

//---  Register CR2: control register 2
  #define TIM16_CR2 (* ((volatile uint32_t *) (0x40014400 + 4)))

  // Field OIS1N: Output Idle state 1
    const uint32_t TIM16_CR2_OIS1N = 1U << 9 ;

  // Field OIS1: Output Idle state 1
    const uint32_t TIM16_CR2_OIS1 = 1U << 8 ;

  // Field CCDS: Capture/compare DMA selection
    const uint32_t TIM16_CR2_CCDS = 1U << 3 ;

  // Field CCUS: Capture/compare control update selection
    const uint32_t TIM16_CR2_CCUS = 1U << 2 ;

  // Field CCPC: Capture/compare preloaded control
    const uint32_t TIM16_CR2_CCPC = 1U << 0 ;

//---  Register DIER: DMA/Interrupt enable register
  #define TIM16_DIER (* ((volatile uint32_t *) (0x40014400 + 12)))

  // Field TDE: Trigger DMA request enable
    const uint32_t TIM16_DIER_TDE = 1U << 14 ;

  // Field COMDE: COM DMA request enable
    const uint32_t TIM16_DIER_COMDE = 1U << 13 ;

  // Field CC1DE: Capture/Compare 1 DMA request enable
    const uint32_t TIM16_DIER_CC1DE = 1U << 9 ;

  // Field UDE: Update DMA request enable
    const uint32_t TIM16_DIER_UDE = 1U << 8 ;

  // Field BIE: Break interrupt enable
    const uint32_t TIM16_DIER_BIE = 1U << 7 ;

  // Field TIE: Trigger interrupt enable
    const uint32_t TIM16_DIER_TIE = 1U << 6 ;

  // Field COMIE: COM interrupt enable
    const uint32_t TIM16_DIER_COMIE = 1U << 5 ;

  // Field CC1IE: Capture/Compare 1 interrupt enable
    const uint32_t TIM16_DIER_CC1IE = 1U << 1 ;

  // Field UIE: Update interrupt enable
    const uint32_t TIM16_DIER_UIE = 1U << 0 ;

//---  Register SR: status register
  #define TIM16_SR (* ((volatile uint32_t *) (0x40014400 + 16)))

  // Field CC1OF: Capture/Compare 1 overcapture flag
    const uint32_t TIM16_SR_CC1OF = 1U << 9 ;

  // Field BIF: Break interrupt flag
    const uint32_t TIM16_SR_BIF = 1U << 7 ;

  // Field TIF: Trigger interrupt flag
    const uint32_t TIM16_SR_TIF = 1U << 6 ;

  // Field COMIF: COM interrupt flag
    const uint32_t TIM16_SR_COMIF = 1U << 5 ;

  // Field CC1IF: Capture/compare 1 interrupt flag
    const uint32_t TIM16_SR_CC1IF = 1U << 1 ;

  // Field UIF: Update interrupt flag
    const uint32_t TIM16_SR_UIF = 1U << 0 ;

//---  Register EGR: event generation register
  #define TIM16_EGR (* ((volatile uint32_t *) (0x40014400 + 20)))

  // Field BG: Break generation
    const uint32_t TIM16_EGR_BG = 1U << 7 ;

  // Field TG: Trigger generation
    const uint32_t TIM16_EGR_TG = 1U << 6 ;

  // Field COMG: Capture/Compare control update generation
    const uint32_t TIM16_EGR_COMG = 1U << 5 ;

  // Field CC1G: Capture/compare 1 generation
    const uint32_t TIM16_EGR_CC1G = 1U << 1 ;

  // Field UG: Update generation
    const uint32_t TIM16_EGR_UG = 1U << 0 ;

//---  Register CCMR1_Output: capture/compare mode register (output
          mode)
  #define TIM16_CCMR1_Output (* ((volatile uint32_t *) (0x40014400 + 24)))

  // Field OC1M_2: Output Compare 1 mode
    const uint32_t TIM16_CCMR1_Output_OC1M_2 = 1U << 16 ;

  // Field OC1M: Output Compare 1 mode
    inline uint32_t TIM16_CCMR1_Output_OC1M (const uint32_t inValue) {return (inValue & 0x7U) << 4 ; }

  // Field OC1PE: Output Compare 1 preload enable
    const uint32_t TIM16_CCMR1_Output_OC1PE = 1U << 3 ;

  // Field OC1FE: Output Compare 1 fast enable
    const uint32_t TIM16_CCMR1_Output_OC1FE = 1U << 2 ;

  // Field CC1S: Capture/Compare 1 selection
    inline uint32_t TIM16_CCMR1_Output_CC1S (const uint32_t inValue) {return (inValue & 0x3U) << 0 ; }

//---  Register CCMR1_Input: capture/compare mode register 1 (input
          mode)
  #define TIM16_CCMR1_Input (* ((volatile uint32_t *) (0x40014400 + 24)))

  // Field IC1F: Input capture 1 filter
    inline uint32_t TIM16_CCMR1_Input_IC1F (const uint32_t inValue) {return (inValue & 0xfU) << 4 ; }

  // Field IC1PSC: Input capture 1 prescaler
    inline uint32_t TIM16_CCMR1_Input_IC1PSC (const uint32_t inValue) {return (inValue & 0x3U) << 2 ; }

  // Field CC1S: Capture/Compare 1 selection
    inline uint32_t TIM16_CCMR1_Input_CC1S (const uint32_t inValue) {return (inValue & 0x3U) << 0 ; }

//---  Register CCER: capture/compare enable
          register
  #define TIM16_CCER (* ((volatile uint32_t *) (0x40014400 + 32)))

  // Field CC1NP: Capture/Compare 1 output Polarity
    const uint32_t TIM16_CCER_CC1NP = 1U << 3 ;

  // Field CC1NE: Capture/Compare 1 complementary output enable
    const uint32_t TIM16_CCER_CC1NE = 1U << 2 ;

  // Field CC1P: Capture/Compare 1 output Polarity
    const uint32_t TIM16_CCER_CC1P = 1U << 1 ;

  // Field CC1E: Capture/Compare 1 output enable
    const uint32_t TIM16_CCER_CC1E = 1U << 0 ;

//---  Register CNT: counter
  #define TIM16_CNT (* ((volatile uint32_t *) (0x40014400 + 36)))

  // Field CNT: counter value
    inline uint32_t TIM16_CNT_CNT (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

  // Field UIFCPY: UIF Copy
    const uint32_t TIM16_CNT_UIFCPY = 1U << 31 ;

//---  Register PSC: prescaler
  #define TIM16_PSC (* ((volatile uint32_t *) (0x40014400 + 40)))

  // Field PSC: Prescaler value
    inline uint32_t TIM16_PSC_PSC (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register ARR: auto-reload register
  #define TIM16_ARR (* ((volatile uint32_t *) (0x40014400 + 44)))

  // Field ARR: Auto-reload value
    inline uint32_t TIM16_ARR_ARR (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register RCR: repetition counter register
  #define TIM16_RCR (* ((volatile uint32_t *) (0x40014400 + 48)))

  // Field REP: Repetition counter value
    inline uint32_t TIM16_RCR_REP (const uint32_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register CCR1: capture/compare register 1
  #define TIM16_CCR1 (* ((volatile uint32_t *) (0x40014400 + 52)))

  // Field CCR1: Capture/Compare 1 value
    inline uint32_t TIM16_CCR1_CCR1 (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register BDTR: break and dead-time register
  #define TIM16_BDTR (* ((volatile uint32_t *) (0x40014400 + 68)))

  // Field DTG: Dead-time generator setup
    inline uint32_t TIM16_BDTR_DTG (const uint32_t inValue) {return (inValue & 0xffU) << 0 ; }

  // Field LOCK: Lock configuration
    inline uint32_t TIM16_BDTR_LOCK (const uint32_t inValue) {return (inValue & 0x3U) << 8 ; }

  // Field OSSI: Off-state selection for Idle mode
    const uint32_t TIM16_BDTR_OSSI = 1U << 10 ;

  // Field OSSR: Off-state selection for Run mode
    const uint32_t TIM16_BDTR_OSSR = 1U << 11 ;

  // Field BKE: Break enable
    const uint32_t TIM16_BDTR_BKE = 1U << 12 ;

  // Field BKP: Break polarity
    const uint32_t TIM16_BDTR_BKP = 1U << 13 ;

  // Field AOE: Automatic output enable
    const uint32_t TIM16_BDTR_AOE = 1U << 14 ;

  // Field MOE: Main output enable
    const uint32_t TIM16_BDTR_MOE = 1U << 15 ;

  // Field BKF: Break filter
    inline uint32_t TIM16_BDTR_BKF (const uint32_t inValue) {return (inValue & 0xfU) << 16 ; }

//---  Register DCR: DMA control register
  #define TIM16_DCR (* ((volatile uint32_t *) (0x40014400 + 72)))

  // Field DBL: DMA burst length
    inline uint32_t TIM16_DCR_DBL (const uint32_t inValue) {return (inValue & 0x1fU) << 8 ; }

  // Field DBA: DMA base address
    inline uint32_t TIM16_DCR_DBA (const uint32_t inValue) {return (inValue & 0x1fU) << 0 ; }

//---  Register DMAR: DMA address for full transfer
  #define TIM16_DMAR (* ((volatile uint32_t *) (0x40014400 + 76)))

  // Field DMAB: DMA register for burst accesses
    inline uint32_t TIM16_DMAR_DMAB (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register OR1: TIM16 option register 1
  #define TIM16_OR1 (* ((volatile uint32_t *) (0x40014400 + 80)))

  // Field TI1_RMP: Input capture 1 remap
    inline uint32_t TIM16_OR1_TI1_RMP (const uint32_t inValue) {return (inValue & 0x3U) << 0 ; }

//---  Register OR2: TIM17 option register 1
  #define TIM16_OR2 (* ((volatile uint32_t *) (0x40014400 + 96)))

  // Field BKINE: BRK BKIN input enable
    const uint32_t TIM16_OR2_BKINE = 1U << 0 ;

  // Field BKCMP1E: BRK COMP1 enable
    const uint32_t TIM16_OR2_BKCMP1E = 1U << 1 ;

  // Field BKCMP2E: BRK COMP2 enable
    const uint32_t TIM16_OR2_BKCMP2E = 1U << 2 ;

  // Field BKDFBK1E: BRK DFSDM_BREAK1 enable
    const uint32_t TIM16_OR2_BKDFBK1E = 1U << 8 ;

  // Field BKINP: BRK BKIN input polarity
    const uint32_t TIM16_OR2_BKINP = 1U << 9 ;

  // Field BKCMP1P: BRK COMP1 input polarity
    const uint32_t TIM16_OR2_BKCMP1P = 1U << 10 ;

  // Field BKCMP2P: BRK COMP2 input polarit
    const uint32_t TIM16_OR2_BKCMP2P = 1U << 11 ;

//------------------------------------------------------------------------------
// Peripheral TIM2: General-purpose-timers
//------------------------------------------------------------------------------

//---  Register CR1: control register 1
  #define TIM2_CR1 (* ((volatile uint32_t *) (0x40000000 + 0)))

  // Field CKD: Clock division
    inline uint32_t TIM2_CR1_CKD (const uint32_t inValue) {return (inValue & 0x3U) << 8 ; }

  // Field ARPE: Auto-reload preload enable
    const uint32_t TIM2_CR1_ARPE = 1U << 7 ;

  // Field CMS: Center-aligned mode selection
    inline uint32_t TIM2_CR1_CMS (const uint32_t inValue) {return (inValue & 0x3U) << 5 ; }

  // Field DIR: Direction
    const uint32_t TIM2_CR1_DIR = 1U << 4 ;

  // Field OPM: One-pulse mode
    const uint32_t TIM2_CR1_OPM = 1U << 3 ;

  // Field URS: Update request source
    const uint32_t TIM2_CR1_URS = 1U << 2 ;

  // Field UDIS: Update disable
    const uint32_t TIM2_CR1_UDIS = 1U << 1 ;

  // Field CEN: Counter enable
    const uint32_t TIM2_CR1_CEN = 1U << 0 ;

//---  Register CR2: control register 2
  #define TIM2_CR2 (* ((volatile uint32_t *) (0x40000000 + 4)))

  // Field TI1S: TI1 selection
    const uint32_t TIM2_CR2_TI1S = 1U << 7 ;

  // Field MMS: Master mode selection
    inline uint32_t TIM2_CR2_MMS (const uint32_t inValue) {return (inValue & 0x7U) << 4 ; }

  // Field CCDS: Capture/compare DMA selection
    const uint32_t TIM2_CR2_CCDS = 1U << 3 ;

//---  Register SMCR: slave mode control register
  #define TIM2_SMCR (* ((volatile uint32_t *) (0x40000000 + 8)))

  // Field ETP: External trigger polarity
    const uint32_t TIM2_SMCR_ETP = 1U << 15 ;

  // Field ECE: External clock enable
    const uint32_t TIM2_SMCR_ECE = 1U << 14 ;

  // Field ETPS: External trigger prescaler
    inline uint32_t TIM2_SMCR_ETPS (const uint32_t inValue) {return (inValue & 0x3U) << 12 ; }

  // Field ETF: External trigger filter
    inline uint32_t TIM2_SMCR_ETF (const uint32_t inValue) {return (inValue & 0xfU) << 8 ; }

  // Field MSM: Master/Slave mode
    const uint32_t TIM2_SMCR_MSM = 1U << 7 ;

  // Field TS: Trigger selection
    inline uint32_t TIM2_SMCR_TS (const uint32_t inValue) {return (inValue & 0x7U) << 4 ; }

  // Field SMS: Slave mode selection
    inline uint32_t TIM2_SMCR_SMS (const uint32_t inValue) {return (inValue & 0x7U) << 0 ; }

//---  Register DIER: DMA/Interrupt enable register
  #define TIM2_DIER (* ((volatile uint32_t *) (0x40000000 + 12)))

  // Field TDE: Trigger DMA request enable
    const uint32_t TIM2_DIER_TDE = 1U << 14 ;

  // Field COMDE: COM DMA request enable
    const uint32_t TIM2_DIER_COMDE = 1U << 13 ;

  // Field CC4DE: Capture/Compare 4 DMA request enable
    const uint32_t TIM2_DIER_CC4DE = 1U << 12 ;

  // Field CC3DE: Capture/Compare 3 DMA request enable
    const uint32_t TIM2_DIER_CC3DE = 1U << 11 ;

  // Field CC2DE: Capture/Compare 2 DMA request enable
    const uint32_t TIM2_DIER_CC2DE = 1U << 10 ;

  // Field CC1DE: Capture/Compare 1 DMA request enable
    const uint32_t TIM2_DIER_CC1DE = 1U << 9 ;

  // Field UDE: Update DMA request enable
    const uint32_t TIM2_DIER_UDE = 1U << 8 ;

  // Field TIE: Trigger interrupt enable
    const uint32_t TIM2_DIER_TIE = 1U << 6 ;

  // Field CC4IE: Capture/Compare 4 interrupt enable
    const uint32_t TIM2_DIER_CC4IE = 1U << 4 ;

  // Field CC3IE: Capture/Compare 3 interrupt enable
    const uint32_t TIM2_DIER_CC3IE = 1U << 3 ;

  // Field CC2IE: Capture/Compare 2 interrupt enable
    const uint32_t TIM2_DIER_CC2IE = 1U << 2 ;

  // Field CC1IE: Capture/Compare 1 interrupt enable
    const uint32_t TIM2_DIER_CC1IE = 1U << 1 ;

  // Field UIE: Update interrupt enable
    const uint32_t TIM2_DIER_UIE = 1U << 0 ;

//---  Register SR: status register
  #define TIM2_SR (* ((volatile uint32_t *) (0x40000000 + 16)))

  // Field CC4OF: Capture/Compare 4 overcapture flag
    const uint32_t TIM2_SR_CC4OF = 1U << 12 ;

  // Field CC3OF: Capture/Compare 3 overcapture flag
    const uint32_t TIM2_SR_CC3OF = 1U << 11 ;

  // Field CC2OF: Capture/compare 2 overcapture flag
    const uint32_t TIM2_SR_CC2OF = 1U << 10 ;

  // Field CC1OF: Capture/Compare 1 overcapture flag
    const uint32_t TIM2_SR_CC1OF = 1U << 9 ;

  // Field TIF: Trigger interrupt flag
    const uint32_t TIM2_SR_TIF = 1U << 6 ;

  // Field CC4IF: Capture/Compare 4 interrupt flag
    const uint32_t TIM2_SR_CC4IF = 1U << 4 ;

  // Field CC3IF: Capture/Compare 3 interrupt flag
    const uint32_t TIM2_SR_CC3IF = 1U << 3 ;

  // Field CC2IF: Capture/Compare 2 interrupt flag
    const uint32_t TIM2_SR_CC2IF = 1U << 2 ;

  // Field CC1IF: Capture/compare 1 interrupt flag
    const uint32_t TIM2_SR_CC1IF = 1U << 1 ;

  // Field UIF: Update interrupt flag
    const uint32_t TIM2_SR_UIF = 1U << 0 ;

//---  Register EGR: event generation register
  #define TIM2_EGR (* ((volatile uint32_t *) (0x40000000 + 20)))

  // Field TG: Trigger generation
    const uint32_t TIM2_EGR_TG = 1U << 6 ;

  // Field CC4G: Capture/compare 4 generation
    const uint32_t TIM2_EGR_CC4G = 1U << 4 ;

  // Field CC3G: Capture/compare 3 generation
    const uint32_t TIM2_EGR_CC3G = 1U << 3 ;

  // Field CC2G: Capture/compare 2 generation
    const uint32_t TIM2_EGR_CC2G = 1U << 2 ;

  // Field CC1G: Capture/compare 1 generation
    const uint32_t TIM2_EGR_CC1G = 1U << 1 ;

  // Field UG: Update generation
    const uint32_t TIM2_EGR_UG = 1U << 0 ;

//---  Register CCMR1_Output: capture/compare mode register 1 (output
          mode)
  #define TIM2_CCMR1_Output (* ((volatile uint32_t *) (0x40000000 + 24)))

  // Field OC2CE: Output compare 2 clear enable
    const uint32_t TIM2_CCMR1_Output_OC2CE = 1U << 15 ;

  // Field OC2M: Output compare 2 mode
    inline uint32_t TIM2_CCMR1_Output_OC2M (const uint32_t inValue) {return (inValue & 0x7U) << 12 ; }

  // Field OC2PE: Output compare 2 preload enable
    const uint32_t TIM2_CCMR1_Output_OC2PE = 1U << 11 ;

  // Field OC2FE: Output compare 2 fast enable
    const uint32_t TIM2_CCMR1_Output_OC2FE = 1U << 10 ;

  // Field CC2S: Capture/Compare 2 selection
    inline uint32_t TIM2_CCMR1_Output_CC2S (const uint32_t inValue) {return (inValue & 0x3U) << 8 ; }

  // Field OC1CE: Output compare 1 clear enable
    const uint32_t TIM2_CCMR1_Output_OC1CE = 1U << 7 ;

  // Field OC1M: Output compare 1 mode
    inline uint32_t TIM2_CCMR1_Output_OC1M (const uint32_t inValue) {return (inValue & 0x7U) << 4 ; }

  // Field OC1PE: Output compare 1 preload enable
    const uint32_t TIM2_CCMR1_Output_OC1PE = 1U << 3 ;

  // Field OC1FE: Output compare 1 fast enable
    const uint32_t TIM2_CCMR1_Output_OC1FE = 1U << 2 ;

  // Field CC1S: Capture/Compare 1 selection
    inline uint32_t TIM2_CCMR1_Output_CC1S (const uint32_t inValue) {return (inValue & 0x3U) << 0 ; }

//---  Register CCMR1_Input: capture/compare mode register 1 (input
          mode)
  #define TIM2_CCMR1_Input (* ((volatile uint32_t *) (0x40000000 + 24)))

  // Field IC2F: Input capture 2 filter
    inline uint32_t TIM2_CCMR1_Input_IC2F (const uint32_t inValue) {return (inValue & 0xfU) << 12 ; }

  // Field IC2PSC: Input capture 2 prescaler
    inline uint32_t TIM2_CCMR1_Input_IC2PSC (const uint32_t inValue) {return (inValue & 0x3U) << 10 ; }

  // Field CC2S: Capture/compare 2 selection
    inline uint32_t TIM2_CCMR1_Input_CC2S (const uint32_t inValue) {return (inValue & 0x3U) << 8 ; }

  // Field IC1F: Input capture 1 filter
    inline uint32_t TIM2_CCMR1_Input_IC1F (const uint32_t inValue) {return (inValue & 0xfU) << 4 ; }

  // Field IC1PSC: Input capture 1 prescaler
    inline uint32_t TIM2_CCMR1_Input_IC1PSC (const uint32_t inValue) {return (inValue & 0x3U) << 2 ; }

  // Field CC1S: Capture/Compare 1 selection
    inline uint32_t TIM2_CCMR1_Input_CC1S (const uint32_t inValue) {return (inValue & 0x3U) << 0 ; }

//---  Register CCMR2_Output: capture/compare mode register 2 (output
          mode)
  #define TIM2_CCMR2_Output (* ((volatile uint32_t *) (0x40000000 + 28)))

  // Field OC4CE: Output compare 4 clear enable
    const uint32_t TIM2_CCMR2_Output_OC4CE = 1U << 15 ;

  // Field OC4M: Output compare 4 mode
    inline uint32_t TIM2_CCMR2_Output_OC4M (const uint32_t inValue) {return (inValue & 0x7U) << 12 ; }

  // Field OC4PE: Output compare 4 preload enable
    const uint32_t TIM2_CCMR2_Output_OC4PE = 1U << 11 ;

  // Field OC4FE: Output compare 4 fast enable
    const uint32_t TIM2_CCMR2_Output_OC4FE = 1U << 10 ;

  // Field CC4S: Capture/Compare 4 selection
    inline uint32_t TIM2_CCMR2_Output_CC4S (const uint32_t inValue) {return (inValue & 0x3U) << 8 ; }

  // Field OC3CE: Output compare 3 clear enable
    const uint32_t TIM2_CCMR2_Output_OC3CE = 1U << 7 ;

  // Field OC3M: Output compare 3 mode
    inline uint32_t TIM2_CCMR2_Output_OC3M (const uint32_t inValue) {return (inValue & 0x7U) << 4 ; }

  // Field OC3PE: Output compare 3 preload enable
    const uint32_t TIM2_CCMR2_Output_OC3PE = 1U << 3 ;

  // Field OC3FE: Output compare 3 fast enable
    const uint32_t TIM2_CCMR2_Output_OC3FE = 1U << 2 ;

  // Field CC3S: Capture/Compare 3 selection
    inline uint32_t TIM2_CCMR2_Output_CC3S (const uint32_t inValue) {return (inValue & 0x3U) << 0 ; }

//---  Register CCMR2_Input: capture/compare mode register 2 (input
          mode)
  #define TIM2_CCMR2_Input (* ((volatile uint32_t *) (0x40000000 + 28)))

  // Field IC4F: Input capture 4 filter
    inline uint32_t TIM2_CCMR2_Input_IC4F (const uint32_t inValue) {return (inValue & 0xfU) << 12 ; }

  // Field IC4PSC: Input capture 4 prescaler
    inline uint32_t TIM2_CCMR2_Input_IC4PSC (const uint32_t inValue) {return (inValue & 0x3U) << 10 ; }

  // Field CC4S: Capture/Compare 4 selection
    inline uint32_t TIM2_CCMR2_Input_CC4S (const uint32_t inValue) {return (inValue & 0x3U) << 8 ; }

  // Field IC3F: Input capture 3 filter
    inline uint32_t TIM2_CCMR2_Input_IC3F (const uint32_t inValue) {return (inValue & 0xfU) << 4 ; }

  // Field IC3PSC: Input capture 3 prescaler
    inline uint32_t TIM2_CCMR2_Input_IC3PSC (const uint32_t inValue) {return (inValue & 0x3U) << 2 ; }

  // Field CC3S: Capture/Compare 3 selection
    inline uint32_t TIM2_CCMR2_Input_CC3S (const uint32_t inValue) {return (inValue & 0x3U) << 0 ; }

//---  Register CCER: capture/compare enable
          register
  #define TIM2_CCER (* ((volatile uint32_t *) (0x40000000 + 32)))

  // Field CC4NP: Capture/Compare 4 output Polarity
    const uint32_t TIM2_CCER_CC4NP = 1U << 15 ;

  // Field CC4P: Capture/Compare 3 output Polarity
    const uint32_t TIM2_CCER_CC4P = 1U << 13 ;

  // Field CC4E: Capture/Compare 4 output enable
    const uint32_t TIM2_CCER_CC4E = 1U << 12 ;

  // Field CC3NP: Capture/Compare 3 output Polarity
    const uint32_t TIM2_CCER_CC3NP = 1U << 11 ;

  // Field CC3P: Capture/Compare 3 output Polarity
    const uint32_t TIM2_CCER_CC3P = 1U << 9 ;

  // Field CC3E: Capture/Compare 3 output enable
    const uint32_t TIM2_CCER_CC3E = 1U << 8 ;

  // Field CC2NP: Capture/Compare 2 output Polarity
    const uint32_t TIM2_CCER_CC2NP = 1U << 7 ;

  // Field CC2P: Capture/Compare 2 output Polarity
    const uint32_t TIM2_CCER_CC2P = 1U << 5 ;

  // Field CC2E: Capture/Compare 2 output enable
    const uint32_t TIM2_CCER_CC2E = 1U << 4 ;

  // Field CC1NP: Capture/Compare 1 output Polarity
    const uint32_t TIM2_CCER_CC1NP = 1U << 3 ;

  // Field CC1P: Capture/Compare 1 output Polarity
    const uint32_t TIM2_CCER_CC1P = 1U << 1 ;

  // Field CC1E: Capture/Compare 1 output enable
    const uint32_t TIM2_CCER_CC1E = 1U << 0 ;

//---  Register CNT: counter
  #define TIM2_CNT (* ((volatile uint32_t *) (0x40000000 + 36)))

  // Field CNT_H: High counter value (TIM2 only)
    inline uint32_t TIM2_CNT_CNT_H (const uint32_t inValue) {return (inValue & 0xffffU) << 16 ; }

  // Field CNT_L: Low counter value
    inline uint32_t TIM2_CNT_CNT_L (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register PSC: prescaler
  #define TIM2_PSC (* ((volatile uint32_t *) (0x40000000 + 40)))

  // Field PSC: Prescaler value
    inline uint32_t TIM2_PSC_PSC (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register ARR: auto-reload register
  #define TIM2_ARR (* ((volatile uint32_t *) (0x40000000 + 44)))

  // Field ARR_H: High Auto-reload value (TIM2 only)
    inline uint32_t TIM2_ARR_ARR_H (const uint32_t inValue) {return (inValue & 0xffffU) << 16 ; }

  // Field ARR_L: Low Auto-reload value
    inline uint32_t TIM2_ARR_ARR_L (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register CCR1: capture/compare register 1
  #define TIM2_CCR1 (* ((volatile uint32_t *) (0x40000000 + 52)))

  // Field CCR1_H: High Capture/Compare 1 value (TIM2 only)
    inline uint32_t TIM2_CCR1_CCR1_H (const uint32_t inValue) {return (inValue & 0xffffU) << 16 ; }

  // Field CCR1_L: Low Capture/Compare 1 value
    inline uint32_t TIM2_CCR1_CCR1_L (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register CCR2: capture/compare register 2
  #define TIM2_CCR2 (* ((volatile uint32_t *) (0x40000000 + 56)))

  // Field CCR2_H: High Capture/Compare 2 value (TIM2 only)
    inline uint32_t TIM2_CCR2_CCR2_H (const uint32_t inValue) {return (inValue & 0xffffU) << 16 ; }

  // Field CCR2_L: Low Capture/Compare 2 value
    inline uint32_t TIM2_CCR2_CCR2_L (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register CCR3: capture/compare register 3
  #define TIM2_CCR3 (* ((volatile uint32_t *) (0x40000000 + 60)))

  // Field CCR3_H: High Capture/Compare value (TIM2 only)
    inline uint32_t TIM2_CCR3_CCR3_H (const uint32_t inValue) {return (inValue & 0xffffU) << 16 ; }

  // Field CCR3_L: Low Capture/Compare value
    inline uint32_t TIM2_CCR3_CCR3_L (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register CCR4: capture/compare register 4
  #define TIM2_CCR4 (* ((volatile uint32_t *) (0x40000000 + 64)))

  // Field CCR4_H: High Capture/Compare value (TIM2 only)
    inline uint32_t TIM2_CCR4_CCR4_H (const uint32_t inValue) {return (inValue & 0xffffU) << 16 ; }

  // Field CCR4_L: Low Capture/Compare value
    inline uint32_t TIM2_CCR4_CCR4_L (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register DCR: DMA control register
  #define TIM2_DCR (* ((volatile uint32_t *) (0x40000000 + 72)))

  // Field DBL: DMA burst length
    inline uint32_t TIM2_DCR_DBL (const uint32_t inValue) {return (inValue & 0x1fU) << 8 ; }

  // Field DBA: DMA base address
    inline uint32_t TIM2_DCR_DBA (const uint32_t inValue) {return (inValue & 0x1fU) << 0 ; }

//---  Register DMAR: DMA address for full transfer
  #define TIM2_DMAR (* ((volatile uint32_t *) (0x40000000 + 76)))

  // Field DMAB: DMA register for burst accesses
    inline uint32_t TIM2_DMAR_DMAB (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register OR: TIM2 option register
  #define TIM2_OR (* ((volatile uint32_t *) (0x40000000 + 80)))

  // Field ETR_RMP: Timer2 ETR remap
    inline uint32_t TIM2_OR_ETR_RMP (const uint32_t inValue) {return (inValue & 0x7U) << 0 ; }

  // Field TI4_RMP: Internal trigger
    inline uint32_t TIM2_OR_TI4_RMP (const uint32_t inValue) {return (inValue & 0x3U) << 3 ; }

//------------------------------------------------------------------------------
// Peripheral TIM3
//------------------------------------------------------------------------------

//---  Register CR1: control register 1
  #define TIM3_CR1 (* ((volatile uint32_t *) (0x40000400 + 0)))

  // Field CKD: Clock division
    inline uint32_t TIM3_CR1_CKD (const uint32_t inValue) {return (inValue & 0x3U) << 8 ; }

  // Field ARPE: Auto-reload preload enable
    const uint32_t TIM3_CR1_ARPE = 1U << 7 ;

  // Field CMS: Center-aligned mode selection
    inline uint32_t TIM3_CR1_CMS (const uint32_t inValue) {return (inValue & 0x3U) << 5 ; }

  // Field DIR: Direction
    const uint32_t TIM3_CR1_DIR = 1U << 4 ;

  // Field OPM: One-pulse mode
    const uint32_t TIM3_CR1_OPM = 1U << 3 ;

  // Field URS: Update request source
    const uint32_t TIM3_CR1_URS = 1U << 2 ;

  // Field UDIS: Update disable
    const uint32_t TIM3_CR1_UDIS = 1U << 1 ;

  // Field CEN: Counter enable
    const uint32_t TIM3_CR1_CEN = 1U << 0 ;

//---  Register CR2: control register 2
  #define TIM3_CR2 (* ((volatile uint32_t *) (0x40000400 + 4)))

  // Field TI1S: TI1 selection
    const uint32_t TIM3_CR2_TI1S = 1U << 7 ;

  // Field MMS: Master mode selection
    inline uint32_t TIM3_CR2_MMS (const uint32_t inValue) {return (inValue & 0x7U) << 4 ; }

  // Field CCDS: Capture/compare DMA selection
    const uint32_t TIM3_CR2_CCDS = 1U << 3 ;

//---  Register SMCR: slave mode control register
  #define TIM3_SMCR (* ((volatile uint32_t *) (0x40000400 + 8)))

  // Field ETP: External trigger polarity
    const uint32_t TIM3_SMCR_ETP = 1U << 15 ;

  // Field ECE: External clock enable
    const uint32_t TIM3_SMCR_ECE = 1U << 14 ;

  // Field ETPS: External trigger prescaler
    inline uint32_t TIM3_SMCR_ETPS (const uint32_t inValue) {return (inValue & 0x3U) << 12 ; }

  // Field ETF: External trigger filter
    inline uint32_t TIM3_SMCR_ETF (const uint32_t inValue) {return (inValue & 0xfU) << 8 ; }

  // Field MSM: Master/Slave mode
    const uint32_t TIM3_SMCR_MSM = 1U << 7 ;

  // Field TS: Trigger selection
    inline uint32_t TIM3_SMCR_TS (const uint32_t inValue) {return (inValue & 0x7U) << 4 ; }

  // Field SMS: Slave mode selection
    inline uint32_t TIM3_SMCR_SMS (const uint32_t inValue) {return (inValue & 0x7U) << 0 ; }

//---  Register DIER: DMA/Interrupt enable register
  #define TIM3_DIER (* ((volatile uint32_t *) (0x40000400 + 12)))

  // Field TDE: Trigger DMA request enable
    const uint32_t TIM3_DIER_TDE = 1U << 14 ;

  // Field COMDE: COM DMA request enable
    const uint32_t TIM3_DIER_COMDE = 1U << 13 ;

  // Field CC4DE: Capture/Compare 4 DMA request enable
    const uint32_t TIM3_DIER_CC4DE = 1U << 12 ;

  // Field CC3DE: Capture/Compare 3 DMA request enable
    const uint32_t TIM3_DIER_CC3DE = 1U << 11 ;

  // Field CC2DE: Capture/Compare 2 DMA request enable
    const uint32_t TIM3_DIER_CC2DE = 1U << 10 ;

  // Field CC1DE: Capture/Compare 1 DMA request enable
    const uint32_t TIM3_DIER_CC1DE = 1U << 9 ;

  // Field UDE: Update DMA request enable
    const uint32_t TIM3_DIER_UDE = 1U << 8 ;

  // Field TIE: Trigger interrupt enable
    const uint32_t TIM3_DIER_TIE = 1U << 6 ;

  // Field CC4IE: Capture/Compare 4 interrupt enable
    const uint32_t TIM3_DIER_CC4IE = 1U << 4 ;

  // Field CC3IE: Capture/Compare 3 interrupt enable
    const uint32_t TIM3_DIER_CC3IE = 1U << 3 ;

  // Field CC2IE: Capture/Compare 2 interrupt enable
    const uint32_t TIM3_DIER_CC2IE = 1U << 2 ;

  // Field CC1IE: Capture/Compare 1 interrupt enable
    const uint32_t TIM3_DIER_CC1IE = 1U << 1 ;

  // Field UIE: Update interrupt enable
    const uint32_t TIM3_DIER_UIE = 1U << 0 ;

//---  Register SR: status register
  #define TIM3_SR (* ((volatile uint32_t *) (0x40000400 + 16)))

  // Field CC4OF: Capture/Compare 4 overcapture flag
    const uint32_t TIM3_SR_CC4OF = 1U << 12 ;

  // Field CC3OF: Capture/Compare 3 overcapture flag
    const uint32_t TIM3_SR_CC3OF = 1U << 11 ;

  // Field CC2OF: Capture/compare 2 overcapture flag
    const uint32_t TIM3_SR_CC2OF = 1U << 10 ;

  // Field CC1OF: Capture/Compare 1 overcapture flag
    const uint32_t TIM3_SR_CC1OF = 1U << 9 ;

  // Field TIF: Trigger interrupt flag
    const uint32_t TIM3_SR_TIF = 1U << 6 ;

  // Field CC4IF: Capture/Compare 4 interrupt flag
    const uint32_t TIM3_SR_CC4IF = 1U << 4 ;

  // Field CC3IF: Capture/Compare 3 interrupt flag
    const uint32_t TIM3_SR_CC3IF = 1U << 3 ;

  // Field CC2IF: Capture/Compare 2 interrupt flag
    const uint32_t TIM3_SR_CC2IF = 1U << 2 ;

  // Field CC1IF: Capture/compare 1 interrupt flag
    const uint32_t TIM3_SR_CC1IF = 1U << 1 ;

  // Field UIF: Update interrupt flag
    const uint32_t TIM3_SR_UIF = 1U << 0 ;

//---  Register EGR: event generation register
  #define TIM3_EGR (* ((volatile uint32_t *) (0x40000400 + 20)))

  // Field TG: Trigger generation
    const uint32_t TIM3_EGR_TG = 1U << 6 ;

  // Field CC4G: Capture/compare 4 generation
    const uint32_t TIM3_EGR_CC4G = 1U << 4 ;

  // Field CC3G: Capture/compare 3 generation
    const uint32_t TIM3_EGR_CC3G = 1U << 3 ;

  // Field CC2G: Capture/compare 2 generation
    const uint32_t TIM3_EGR_CC2G = 1U << 2 ;

  // Field CC1G: Capture/compare 1 generation
    const uint32_t TIM3_EGR_CC1G = 1U << 1 ;

  // Field UG: Update generation
    const uint32_t TIM3_EGR_UG = 1U << 0 ;

//---  Register CCMR1_Output: capture/compare mode register 1 (output
          mode)
  #define TIM3_CCMR1_Output (* ((volatile uint32_t *) (0x40000400 + 24)))

  // Field OC2CE: Output compare 2 clear enable
    const uint32_t TIM3_CCMR1_Output_OC2CE = 1U << 15 ;

  // Field OC2M: Output compare 2 mode
    inline uint32_t TIM3_CCMR1_Output_OC2M (const uint32_t inValue) {return (inValue & 0x7U) << 12 ; }

  // Field OC2PE: Output compare 2 preload enable
    const uint32_t TIM3_CCMR1_Output_OC2PE = 1U << 11 ;

  // Field OC2FE: Output compare 2 fast enable
    const uint32_t TIM3_CCMR1_Output_OC2FE = 1U << 10 ;

  // Field CC2S: Capture/Compare 2 selection
    inline uint32_t TIM3_CCMR1_Output_CC2S (const uint32_t inValue) {return (inValue & 0x3U) << 8 ; }

  // Field OC1CE: Output compare 1 clear enable
    const uint32_t TIM3_CCMR1_Output_OC1CE = 1U << 7 ;

  // Field OC1M: Output compare 1 mode
    inline uint32_t TIM3_CCMR1_Output_OC1M (const uint32_t inValue) {return (inValue & 0x7U) << 4 ; }

  // Field OC1PE: Output compare 1 preload enable
    const uint32_t TIM3_CCMR1_Output_OC1PE = 1U << 3 ;

  // Field OC1FE: Output compare 1 fast enable
    const uint32_t TIM3_CCMR1_Output_OC1FE = 1U << 2 ;

  // Field CC1S: Capture/Compare 1 selection
    inline uint32_t TIM3_CCMR1_Output_CC1S (const uint32_t inValue) {return (inValue & 0x3U) << 0 ; }

//---  Register CCMR1_Input: capture/compare mode register 1 (input
          mode)
  #define TIM3_CCMR1_Input (* ((volatile uint32_t *) (0x40000400 + 24)))

  // Field IC2F: Input capture 2 filter
    inline uint32_t TIM3_CCMR1_Input_IC2F (const uint32_t inValue) {return (inValue & 0xfU) << 12 ; }

  // Field IC2PSC: Input capture 2 prescaler
    inline uint32_t TIM3_CCMR1_Input_IC2PSC (const uint32_t inValue) {return (inValue & 0x3U) << 10 ; }

  // Field CC2S: Capture/compare 2 selection
    inline uint32_t TIM3_CCMR1_Input_CC2S (const uint32_t inValue) {return (inValue & 0x3U) << 8 ; }

  // Field IC1F: Input capture 1 filter
    inline uint32_t TIM3_CCMR1_Input_IC1F (const uint32_t inValue) {return (inValue & 0xfU) << 4 ; }

  // Field IC1PSC: Input capture 1 prescaler
    inline uint32_t TIM3_CCMR1_Input_IC1PSC (const uint32_t inValue) {return (inValue & 0x3U) << 2 ; }

  // Field CC1S: Capture/Compare 1 selection
    inline uint32_t TIM3_CCMR1_Input_CC1S (const uint32_t inValue) {return (inValue & 0x3U) << 0 ; }

//---  Register CCMR2_Output: capture/compare mode register 2 (output
          mode)
  #define TIM3_CCMR2_Output (* ((volatile uint32_t *) (0x40000400 + 28)))

  // Field OC4CE: Output compare 4 clear enable
    const uint32_t TIM3_CCMR2_Output_OC4CE = 1U << 15 ;

  // Field OC4M: Output compare 4 mode
    inline uint32_t TIM3_CCMR2_Output_OC4M (const uint32_t inValue) {return (inValue & 0x7U) << 12 ; }

  // Field OC4PE: Output compare 4 preload enable
    const uint32_t TIM3_CCMR2_Output_OC4PE = 1U << 11 ;

  // Field OC4FE: Output compare 4 fast enable
    const uint32_t TIM3_CCMR2_Output_OC4FE = 1U << 10 ;

  // Field CC4S: Capture/Compare 4 selection
    inline uint32_t TIM3_CCMR2_Output_CC4S (const uint32_t inValue) {return (inValue & 0x3U) << 8 ; }

  // Field OC3CE: Output compare 3 clear enable
    const uint32_t TIM3_CCMR2_Output_OC3CE = 1U << 7 ;

  // Field OC3M: Output compare 3 mode
    inline uint32_t TIM3_CCMR2_Output_OC3M (const uint32_t inValue) {return (inValue & 0x7U) << 4 ; }

  // Field OC3PE: Output compare 3 preload enable
    const uint32_t TIM3_CCMR2_Output_OC3PE = 1U << 3 ;

  // Field OC3FE: Output compare 3 fast enable
    const uint32_t TIM3_CCMR2_Output_OC3FE = 1U << 2 ;

  // Field CC3S: Capture/Compare 3 selection
    inline uint32_t TIM3_CCMR2_Output_CC3S (const uint32_t inValue) {return (inValue & 0x3U) << 0 ; }

//---  Register CCMR2_Input: capture/compare mode register 2 (input
          mode)
  #define TIM3_CCMR2_Input (* ((volatile uint32_t *) (0x40000400 + 28)))

  // Field IC4F: Input capture 4 filter
    inline uint32_t TIM3_CCMR2_Input_IC4F (const uint32_t inValue) {return (inValue & 0xfU) << 12 ; }

  // Field IC4PSC: Input capture 4 prescaler
    inline uint32_t TIM3_CCMR2_Input_IC4PSC (const uint32_t inValue) {return (inValue & 0x3U) << 10 ; }

  // Field CC4S: Capture/Compare 4 selection
    inline uint32_t TIM3_CCMR2_Input_CC4S (const uint32_t inValue) {return (inValue & 0x3U) << 8 ; }

  // Field IC3F: Input capture 3 filter
    inline uint32_t TIM3_CCMR2_Input_IC3F (const uint32_t inValue) {return (inValue & 0xfU) << 4 ; }

  // Field IC3PSC: Input capture 3 prescaler
    inline uint32_t TIM3_CCMR2_Input_IC3PSC (const uint32_t inValue) {return (inValue & 0x3U) << 2 ; }

  // Field CC3S: Capture/Compare 3 selection
    inline uint32_t TIM3_CCMR2_Input_CC3S (const uint32_t inValue) {return (inValue & 0x3U) << 0 ; }

//---  Register CCER: capture/compare enable
          register
  #define TIM3_CCER (* ((volatile uint32_t *) (0x40000400 + 32)))

  // Field CC4NP: Capture/Compare 4 output Polarity
    const uint32_t TIM3_CCER_CC4NP = 1U << 15 ;

  // Field CC4P: Capture/Compare 3 output Polarity
    const uint32_t TIM3_CCER_CC4P = 1U << 13 ;

  // Field CC4E: Capture/Compare 4 output enable
    const uint32_t TIM3_CCER_CC4E = 1U << 12 ;

  // Field CC3NP: Capture/Compare 3 output Polarity
    const uint32_t TIM3_CCER_CC3NP = 1U << 11 ;

  // Field CC3P: Capture/Compare 3 output Polarity
    const uint32_t TIM3_CCER_CC3P = 1U << 9 ;

  // Field CC3E: Capture/Compare 3 output enable
    const uint32_t TIM3_CCER_CC3E = 1U << 8 ;

  // Field CC2NP: Capture/Compare 2 output Polarity
    const uint32_t TIM3_CCER_CC2NP = 1U << 7 ;

  // Field CC2P: Capture/Compare 2 output Polarity
    const uint32_t TIM3_CCER_CC2P = 1U << 5 ;

  // Field CC2E: Capture/Compare 2 output enable
    const uint32_t TIM3_CCER_CC2E = 1U << 4 ;

  // Field CC1NP: Capture/Compare 1 output Polarity
    const uint32_t TIM3_CCER_CC1NP = 1U << 3 ;

  // Field CC1P: Capture/Compare 1 output Polarity
    const uint32_t TIM3_CCER_CC1P = 1U << 1 ;

  // Field CC1E: Capture/Compare 1 output enable
    const uint32_t TIM3_CCER_CC1E = 1U << 0 ;

//---  Register CNT: counter
  #define TIM3_CNT (* ((volatile uint32_t *) (0x40000400 + 36)))

  // Field CNT_H: High counter value (TIM2 only)
    inline uint32_t TIM3_CNT_CNT_H (const uint32_t inValue) {return (inValue & 0xffffU) << 16 ; }

  // Field CNT_L: Low counter value
    inline uint32_t TIM3_CNT_CNT_L (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register PSC: prescaler
  #define TIM3_PSC (* ((volatile uint32_t *) (0x40000400 + 40)))

  // Field PSC: Prescaler value
    inline uint32_t TIM3_PSC_PSC (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register ARR: auto-reload register
  #define TIM3_ARR (* ((volatile uint32_t *) (0x40000400 + 44)))

  // Field ARR_H: High Auto-reload value (TIM2 only)
    inline uint32_t TIM3_ARR_ARR_H (const uint32_t inValue) {return (inValue & 0xffffU) << 16 ; }

  // Field ARR_L: Low Auto-reload value
    inline uint32_t TIM3_ARR_ARR_L (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register CCR1: capture/compare register 1
  #define TIM3_CCR1 (* ((volatile uint32_t *) (0x40000400 + 52)))

  // Field CCR1_H: High Capture/Compare 1 value (TIM2 only)
    inline uint32_t TIM3_CCR1_CCR1_H (const uint32_t inValue) {return (inValue & 0xffffU) << 16 ; }

  // Field CCR1_L: Low Capture/Compare 1 value
    inline uint32_t TIM3_CCR1_CCR1_L (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register CCR2: capture/compare register 2
  #define TIM3_CCR2 (* ((volatile uint32_t *) (0x40000400 + 56)))

  // Field CCR2_H: High Capture/Compare 2 value (TIM2 only)
    inline uint32_t TIM3_CCR2_CCR2_H (const uint32_t inValue) {return (inValue & 0xffffU) << 16 ; }

  // Field CCR2_L: Low Capture/Compare 2 value
    inline uint32_t TIM3_CCR2_CCR2_L (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register CCR3: capture/compare register 3
  #define TIM3_CCR3 (* ((volatile uint32_t *) (0x40000400 + 60)))

  // Field CCR3_H: High Capture/Compare value (TIM2 only)
    inline uint32_t TIM3_CCR3_CCR3_H (const uint32_t inValue) {return (inValue & 0xffffU) << 16 ; }

  // Field CCR3_L: Low Capture/Compare value
    inline uint32_t TIM3_CCR3_CCR3_L (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register CCR4: capture/compare register 4
  #define TIM3_CCR4 (* ((volatile uint32_t *) (0x40000400 + 64)))

  // Field CCR4_H: High Capture/Compare value (TIM2 only)
    inline uint32_t TIM3_CCR4_CCR4_H (const uint32_t inValue) {return (inValue & 0xffffU) << 16 ; }

  // Field CCR4_L: Low Capture/Compare value
    inline uint32_t TIM3_CCR4_CCR4_L (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register DCR: DMA control register
  #define TIM3_DCR (* ((volatile uint32_t *) (0x40000400 + 72)))

  // Field DBL: DMA burst length
    inline uint32_t TIM3_DCR_DBL (const uint32_t inValue) {return (inValue & 0x1fU) << 8 ; }

  // Field DBA: DMA base address
    inline uint32_t TIM3_DCR_DBA (const uint32_t inValue) {return (inValue & 0x1fU) << 0 ; }

//---  Register DMAR: DMA address for full transfer
  #define TIM3_DMAR (* ((volatile uint32_t *) (0x40000400 + 76)))

  // Field DMAB: DMA register for burst accesses
    inline uint32_t TIM3_DMAR_DMAB (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register OR: TIM2 option register
  #define TIM3_OR (* ((volatile uint32_t *) (0x40000400 + 80)))

  // Field ETR_RMP: Timer2 ETR remap
    inline uint32_t TIM3_OR_ETR_RMP (const uint32_t inValue) {return (inValue & 0x7U) << 0 ; }

  // Field TI4_RMP: Internal trigger
    inline uint32_t TIM3_OR_TI4_RMP (const uint32_t inValue) {return (inValue & 0x3U) << 3 ; }

//------------------------------------------------------------------------------
// Peripheral TIM6: Basic-timers
//------------------------------------------------------------------------------

//---  Register CR1: control register 1
  #define TIM6_CR1 (* ((volatile uint32_t *) (0x40001000 + 0)))

  // Field ARPE: Auto-reload preload enable
    const uint32_t TIM6_CR1_ARPE = 1U << 7 ;

  // Field OPM: One-pulse mode
    const uint32_t TIM6_CR1_OPM = 1U << 3 ;

  // Field URS: Update request source
    const uint32_t TIM6_CR1_URS = 1U << 2 ;

  // Field UDIS: Update disable
    const uint32_t TIM6_CR1_UDIS = 1U << 1 ;

  // Field CEN: Counter enable
    const uint32_t TIM6_CR1_CEN = 1U << 0 ;

//---  Register CR2: control register 2
  #define TIM6_CR2 (* ((volatile uint32_t *) (0x40001000 + 4)))

  // Field MMS: Master mode selection
    inline uint32_t TIM6_CR2_MMS (const uint32_t inValue) {return (inValue & 0x7U) << 4 ; }

//---  Register DIER: DMA/Interrupt enable register
  #define TIM6_DIER (* ((volatile uint32_t *) (0x40001000 + 12)))

  // Field UDE: Update DMA request enable
    const uint32_t TIM6_DIER_UDE = 1U << 8 ;

  // Field UIE: Update interrupt enable
    const uint32_t TIM6_DIER_UIE = 1U << 0 ;

//---  Register SR: status register
  #define TIM6_SR (* ((volatile uint32_t *) (0x40001000 + 16)))

  // Field UIF: Update interrupt flag
    const uint32_t TIM6_SR_UIF = 1U << 0 ;

//---  Register EGR: event generation register
  #define TIM6_EGR (* ((volatile uint32_t *) (0x40001000 + 20)))

  // Field UG: Update generation
    const uint32_t TIM6_EGR_UG = 1U << 0 ;

//---  Register CNT: counter
  #define TIM6_CNT (* ((volatile uint32_t *) (0x40001000 + 36)))

  // Field CNT: Low counter value
    inline uint32_t TIM6_CNT_CNT (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register PSC: prescaler
  #define TIM6_PSC (* ((volatile uint32_t *) (0x40001000 + 40)))

  // Field PSC: Prescaler value
    inline uint32_t TIM6_PSC_PSC (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register ARR: auto-reload register
  #define TIM6_ARR (* ((volatile uint32_t *) (0x40001000 + 44)))

  // Field ARR: Low Auto-reload value
    inline uint32_t TIM6_ARR_ARR (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

//------------------------------------------------------------------------------
// Peripheral TIM7
//------------------------------------------------------------------------------

//---  Register CR1: control register 1
  #define TIM7_CR1 (* ((volatile uint32_t *) (0x40001400 + 0)))

  // Field ARPE: Auto-reload preload enable
    const uint32_t TIM7_CR1_ARPE = 1U << 7 ;

  // Field OPM: One-pulse mode
    const uint32_t TIM7_CR1_OPM = 1U << 3 ;

  // Field URS: Update request source
    const uint32_t TIM7_CR1_URS = 1U << 2 ;

  // Field UDIS: Update disable
    const uint32_t TIM7_CR1_UDIS = 1U << 1 ;

  // Field CEN: Counter enable
    const uint32_t TIM7_CR1_CEN = 1U << 0 ;

//---  Register CR2: control register 2
  #define TIM7_CR2 (* ((volatile uint32_t *) (0x40001400 + 4)))

  // Field MMS: Master mode selection
    inline uint32_t TIM7_CR2_MMS (const uint32_t inValue) {return (inValue & 0x7U) << 4 ; }

//---  Register DIER: DMA/Interrupt enable register
  #define TIM7_DIER (* ((volatile uint32_t *) (0x40001400 + 12)))

  // Field UDE: Update DMA request enable
    const uint32_t TIM7_DIER_UDE = 1U << 8 ;

  // Field UIE: Update interrupt enable
    const uint32_t TIM7_DIER_UIE = 1U << 0 ;

//---  Register SR: status register
  #define TIM7_SR (* ((volatile uint32_t *) (0x40001400 + 16)))

  // Field UIF: Update interrupt flag
    const uint32_t TIM7_SR_UIF = 1U << 0 ;

//---  Register EGR: event generation register
  #define TIM7_EGR (* ((volatile uint32_t *) (0x40001400 + 20)))

  // Field UG: Update generation
    const uint32_t TIM7_EGR_UG = 1U << 0 ;

//---  Register CNT: counter
  #define TIM7_CNT (* ((volatile uint32_t *) (0x40001400 + 36)))

  // Field CNT: Low counter value
    inline uint32_t TIM7_CNT_CNT (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register PSC: prescaler
  #define TIM7_PSC (* ((volatile uint32_t *) (0x40001400 + 40)))

  // Field PSC: Prescaler value
    inline uint32_t TIM7_PSC_PSC (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register ARR: auto-reload register
  #define TIM7_ARR (* ((volatile uint32_t *) (0x40001400 + 44)))

  // Field ARR: Low Auto-reload value
    inline uint32_t TIM7_ARR_ARR (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

//------------------------------------------------------------------------------
// Peripheral TSC: Touch sensing controller
//------------------------------------------------------------------------------

//---  Register CR: control register
  #define TSC_CR (* ((volatile uint32_t *) (0x40024000 + 0)))

  // Field CTPH: Charge transfer pulse high
    inline uint32_t TSC_CR_CTPH (const uint32_t inValue) {return (inValue & 0xfU) << 28 ; }

  // Field CTPL: Charge transfer pulse low
    inline uint32_t TSC_CR_CTPL (const uint32_t inValue) {return (inValue & 0xfU) << 24 ; }

  // Field SSD: Spread spectrum deviation
    inline uint32_t TSC_CR_SSD (const uint32_t inValue) {return (inValue & 0x7fU) << 17 ; }

  // Field SSE: Spread spectrum enable
    const uint32_t TSC_CR_SSE = 1U << 16 ;

  // Field SSPSC: Spread spectrum prescaler
    const uint32_t TSC_CR_SSPSC = 1U << 15 ;

  // Field PGPSC: pulse generator prescaler
    inline uint32_t TSC_CR_PGPSC (const uint32_t inValue) {return (inValue & 0x7U) << 12 ; }

  // Field MCV: Max count value
    inline uint32_t TSC_CR_MCV (const uint32_t inValue) {return (inValue & 0x7U) << 5 ; }

  // Field IODEF: I/O Default mode
    const uint32_t TSC_CR_IODEF = 1U << 4 ;

  // Field SYNCPOL: Synchronization pin polarity
    const uint32_t TSC_CR_SYNCPOL = 1U << 3 ;

  // Field AM: Acquisition mode
    const uint32_t TSC_CR_AM = 1U << 2 ;

  // Field START: Start a new acquisition
    const uint32_t TSC_CR_START = 1U << 1 ;

  // Field TSCE: Touch sensing controller enable
    const uint32_t TSC_CR_TSCE = 1U << 0 ;

//---  Register IER: interrupt enable register
  #define TSC_IER (* ((volatile uint32_t *) (0x40024000 + 4)))

  // Field MCEIE: Max count error interrupt enable
    const uint32_t TSC_IER_MCEIE = 1U << 1 ;

  // Field EOAIE: End of acquisition interrupt enable
    const uint32_t TSC_IER_EOAIE = 1U << 0 ;

//---  Register ICR: interrupt clear register
  #define TSC_ICR (* ((volatile uint32_t *) (0x40024000 + 8)))

  // Field MCEIC: Max count error interrupt clear
    const uint32_t TSC_ICR_MCEIC = 1U << 1 ;

  // Field EOAIC: End of acquisition interrupt clear
    const uint32_t TSC_ICR_EOAIC = 1U << 0 ;

//---  Register ISR: interrupt status register
  #define TSC_ISR (* ((volatile uint32_t *) (0x40024000 + 12)))

  // Field MCEF: Max count error flag
    const uint32_t TSC_ISR_MCEF = 1U << 1 ;

  // Field EOAF: End of acquisition flag
    const uint32_t TSC_ISR_EOAF = 1U << 0 ;

//---  Register IOHCR: I/O hysteresis control
          register
  #define TSC_IOHCR (* ((volatile uint32_t *) (0x40024000 + 16)))

  // Field G8_IO4: G8_IO4
    const uint32_t TSC_IOHCR_G8_IO4 = 1U << 31 ;

  // Field G8_IO3: G8_IO3
    const uint32_t TSC_IOHCR_G8_IO3 = 1U << 30 ;

  // Field G8_IO2: G8_IO2
    const uint32_t TSC_IOHCR_G8_IO2 = 1U << 29 ;

  // Field G8_IO1: G8_IO1
    const uint32_t TSC_IOHCR_G8_IO1 = 1U << 28 ;

  // Field G7_IO4: G7_IO4
    const uint32_t TSC_IOHCR_G7_IO4 = 1U << 27 ;

  // Field G7_IO3: G7_IO3
    const uint32_t TSC_IOHCR_G7_IO3 = 1U << 26 ;

  // Field G7_IO2: G7_IO2
    const uint32_t TSC_IOHCR_G7_IO2 = 1U << 25 ;

  // Field G7_IO1: G7_IO1
    const uint32_t TSC_IOHCR_G7_IO1 = 1U << 24 ;

  // Field G6_IO4: G6_IO4
    const uint32_t TSC_IOHCR_G6_IO4 = 1U << 23 ;

  // Field G6_IO3: G6_IO3
    const uint32_t TSC_IOHCR_G6_IO3 = 1U << 22 ;

  // Field G6_IO2: G6_IO2
    const uint32_t TSC_IOHCR_G6_IO2 = 1U << 21 ;

  // Field G6_IO1: G6_IO1
    const uint32_t TSC_IOHCR_G6_IO1 = 1U << 20 ;

  // Field G5_IO4: G5_IO4
    const uint32_t TSC_IOHCR_G5_IO4 = 1U << 19 ;

  // Field G5_IO3: G5_IO3
    const uint32_t TSC_IOHCR_G5_IO3 = 1U << 18 ;

  // Field G5_IO2: G5_IO2
    const uint32_t TSC_IOHCR_G5_IO2 = 1U << 17 ;

  // Field G5_IO1: G5_IO1
    const uint32_t TSC_IOHCR_G5_IO1 = 1U << 16 ;

  // Field G4_IO4: G4_IO4
    const uint32_t TSC_IOHCR_G4_IO4 = 1U << 15 ;

  // Field G4_IO3: G4_IO3
    const uint32_t TSC_IOHCR_G4_IO3 = 1U << 14 ;

  // Field G4_IO2: G4_IO2
    const uint32_t TSC_IOHCR_G4_IO2 = 1U << 13 ;

  // Field G4_IO1: G4_IO1
    const uint32_t TSC_IOHCR_G4_IO1 = 1U << 12 ;

  // Field G3_IO4: G3_IO4
    const uint32_t TSC_IOHCR_G3_IO4 = 1U << 11 ;

  // Field G3_IO3: G3_IO3
    const uint32_t TSC_IOHCR_G3_IO3 = 1U << 10 ;

  // Field G3_IO2: G3_IO2
    const uint32_t TSC_IOHCR_G3_IO2 = 1U << 9 ;

  // Field G3_IO1: G3_IO1
    const uint32_t TSC_IOHCR_G3_IO1 = 1U << 8 ;

  // Field G2_IO4: G2_IO4
    const uint32_t TSC_IOHCR_G2_IO4 = 1U << 7 ;

  // Field G2_IO3: G2_IO3
    const uint32_t TSC_IOHCR_G2_IO3 = 1U << 6 ;

  // Field G2_IO2: G2_IO2
    const uint32_t TSC_IOHCR_G2_IO2 = 1U << 5 ;

  // Field G2_IO1: G2_IO1
    const uint32_t TSC_IOHCR_G2_IO1 = 1U << 4 ;

  // Field G1_IO4: G1_IO4
    const uint32_t TSC_IOHCR_G1_IO4 = 1U << 3 ;

  // Field G1_IO3: G1_IO3
    const uint32_t TSC_IOHCR_G1_IO3 = 1U << 2 ;

  // Field G1_IO2: G1_IO2
    const uint32_t TSC_IOHCR_G1_IO2 = 1U << 1 ;

  // Field G1_IO1: G1_IO1
    const uint32_t TSC_IOHCR_G1_IO1 = 1U << 0 ;

//---  Register IOASCR: I/O analog switch control
          register
  #define TSC_IOASCR (* ((volatile uint32_t *) (0x40024000 + 24)))

  // Field G8_IO4: G8_IO4
    const uint32_t TSC_IOASCR_G8_IO4 = 1U << 31 ;

  // Field G8_IO3: G8_IO3
    const uint32_t TSC_IOASCR_G8_IO3 = 1U << 30 ;

  // Field G8_IO2: G8_IO2
    const uint32_t TSC_IOASCR_G8_IO2 = 1U << 29 ;

  // Field G8_IO1: G8_IO1
    const uint32_t TSC_IOASCR_G8_IO1 = 1U << 28 ;

  // Field G7_IO4: G7_IO4
    const uint32_t TSC_IOASCR_G7_IO4 = 1U << 27 ;

  // Field G7_IO3: G7_IO3
    const uint32_t TSC_IOASCR_G7_IO3 = 1U << 26 ;

  // Field G7_IO2: G7_IO2
    const uint32_t TSC_IOASCR_G7_IO2 = 1U << 25 ;

  // Field G7_IO1: G7_IO1
    const uint32_t TSC_IOASCR_G7_IO1 = 1U << 24 ;

  // Field G6_IO4: G6_IO4
    const uint32_t TSC_IOASCR_G6_IO4 = 1U << 23 ;

  // Field G6_IO3: G6_IO3
    const uint32_t TSC_IOASCR_G6_IO3 = 1U << 22 ;

  // Field G6_IO2: G6_IO2
    const uint32_t TSC_IOASCR_G6_IO2 = 1U << 21 ;

  // Field G6_IO1: G6_IO1
    const uint32_t TSC_IOASCR_G6_IO1 = 1U << 20 ;

  // Field G5_IO4: G5_IO4
    const uint32_t TSC_IOASCR_G5_IO4 = 1U << 19 ;

  // Field G5_IO3: G5_IO3
    const uint32_t TSC_IOASCR_G5_IO3 = 1U << 18 ;

  // Field G5_IO2: G5_IO2
    const uint32_t TSC_IOASCR_G5_IO2 = 1U << 17 ;

  // Field G5_IO1: G5_IO1
    const uint32_t TSC_IOASCR_G5_IO1 = 1U << 16 ;

  // Field G4_IO4: G4_IO4
    const uint32_t TSC_IOASCR_G4_IO4 = 1U << 15 ;

  // Field G4_IO3: G4_IO3
    const uint32_t TSC_IOASCR_G4_IO3 = 1U << 14 ;

  // Field G4_IO2: G4_IO2
    const uint32_t TSC_IOASCR_G4_IO2 = 1U << 13 ;

  // Field G4_IO1: G4_IO1
    const uint32_t TSC_IOASCR_G4_IO1 = 1U << 12 ;

  // Field G3_IO4: G3_IO4
    const uint32_t TSC_IOASCR_G3_IO4 = 1U << 11 ;

  // Field G3_IO3: G3_IO3
    const uint32_t TSC_IOASCR_G3_IO3 = 1U << 10 ;

  // Field G3_IO2: G3_IO2
    const uint32_t TSC_IOASCR_G3_IO2 = 1U << 9 ;

  // Field G3_IO1: G3_IO1
    const uint32_t TSC_IOASCR_G3_IO1 = 1U << 8 ;

  // Field G2_IO4: G2_IO4
    const uint32_t TSC_IOASCR_G2_IO4 = 1U << 7 ;

  // Field G2_IO3: G2_IO3
    const uint32_t TSC_IOASCR_G2_IO3 = 1U << 6 ;

  // Field G2_IO2: G2_IO2
    const uint32_t TSC_IOASCR_G2_IO2 = 1U << 5 ;

  // Field G2_IO1: G2_IO1
    const uint32_t TSC_IOASCR_G2_IO1 = 1U << 4 ;

  // Field G1_IO4: G1_IO4
    const uint32_t TSC_IOASCR_G1_IO4 = 1U << 3 ;

  // Field G1_IO3: G1_IO3
    const uint32_t TSC_IOASCR_G1_IO3 = 1U << 2 ;

  // Field G1_IO2: G1_IO2
    const uint32_t TSC_IOASCR_G1_IO2 = 1U << 1 ;

  // Field G1_IO1: G1_IO1
    const uint32_t TSC_IOASCR_G1_IO1 = 1U << 0 ;

//---  Register IOSCR: I/O sampling control register
  #define TSC_IOSCR (* ((volatile uint32_t *) (0x40024000 + 32)))

  // Field G8_IO4: G8_IO4
    const uint32_t TSC_IOSCR_G8_IO4 = 1U << 31 ;

  // Field G8_IO3: G8_IO3
    const uint32_t TSC_IOSCR_G8_IO3 = 1U << 30 ;

  // Field G8_IO2: G8_IO2
    const uint32_t TSC_IOSCR_G8_IO2 = 1U << 29 ;

  // Field G8_IO1: G8_IO1
    const uint32_t TSC_IOSCR_G8_IO1 = 1U << 28 ;

  // Field G7_IO4: G7_IO4
    const uint32_t TSC_IOSCR_G7_IO4 = 1U << 27 ;

  // Field G7_IO3: G7_IO3
    const uint32_t TSC_IOSCR_G7_IO3 = 1U << 26 ;

  // Field G7_IO2: G7_IO2
    const uint32_t TSC_IOSCR_G7_IO2 = 1U << 25 ;

  // Field G7_IO1: G7_IO1
    const uint32_t TSC_IOSCR_G7_IO1 = 1U << 24 ;

  // Field G6_IO4: G6_IO4
    const uint32_t TSC_IOSCR_G6_IO4 = 1U << 23 ;

  // Field G6_IO3: G6_IO3
    const uint32_t TSC_IOSCR_G6_IO3 = 1U << 22 ;

  // Field G6_IO2: G6_IO2
    const uint32_t TSC_IOSCR_G6_IO2 = 1U << 21 ;

  // Field G6_IO1: G6_IO1
    const uint32_t TSC_IOSCR_G6_IO1 = 1U << 20 ;

  // Field G5_IO4: G5_IO4
    const uint32_t TSC_IOSCR_G5_IO4 = 1U << 19 ;

  // Field G5_IO3: G5_IO3
    const uint32_t TSC_IOSCR_G5_IO3 = 1U << 18 ;

  // Field G5_IO2: G5_IO2
    const uint32_t TSC_IOSCR_G5_IO2 = 1U << 17 ;

  // Field G5_IO1: G5_IO1
    const uint32_t TSC_IOSCR_G5_IO1 = 1U << 16 ;

  // Field G4_IO4: G4_IO4
    const uint32_t TSC_IOSCR_G4_IO4 = 1U << 15 ;

  // Field G4_IO3: G4_IO3
    const uint32_t TSC_IOSCR_G4_IO3 = 1U << 14 ;

  // Field G4_IO2: G4_IO2
    const uint32_t TSC_IOSCR_G4_IO2 = 1U << 13 ;

  // Field G4_IO1: G4_IO1
    const uint32_t TSC_IOSCR_G4_IO1 = 1U << 12 ;

  // Field G3_IO4: G3_IO4
    const uint32_t TSC_IOSCR_G3_IO4 = 1U << 11 ;

  // Field G3_IO3: G3_IO3
    const uint32_t TSC_IOSCR_G3_IO3 = 1U << 10 ;

  // Field G3_IO2: G3_IO2
    const uint32_t TSC_IOSCR_G3_IO2 = 1U << 9 ;

  // Field G3_IO1: G3_IO1
    const uint32_t TSC_IOSCR_G3_IO1 = 1U << 8 ;

  // Field G2_IO4: G2_IO4
    const uint32_t TSC_IOSCR_G2_IO4 = 1U << 7 ;

  // Field G2_IO3: G2_IO3
    const uint32_t TSC_IOSCR_G2_IO3 = 1U << 6 ;

  // Field G2_IO2: G2_IO2
    const uint32_t TSC_IOSCR_G2_IO2 = 1U << 5 ;

  // Field G2_IO1: G2_IO1
    const uint32_t TSC_IOSCR_G2_IO1 = 1U << 4 ;

  // Field G1_IO4: G1_IO4
    const uint32_t TSC_IOSCR_G1_IO4 = 1U << 3 ;

  // Field G1_IO3: G1_IO3
    const uint32_t TSC_IOSCR_G1_IO3 = 1U << 2 ;

  // Field G1_IO2: G1_IO2
    const uint32_t TSC_IOSCR_G1_IO2 = 1U << 1 ;

  // Field G1_IO1: G1_IO1
    const uint32_t TSC_IOSCR_G1_IO1 = 1U << 0 ;

//---  Register IOCCR: I/O channel control register
  #define TSC_IOCCR (* ((volatile uint32_t *) (0x40024000 + 40)))

  // Field G8_IO4: G8_IO4
    const uint32_t TSC_IOCCR_G8_IO4 = 1U << 31 ;

  // Field G8_IO3: G8_IO3
    const uint32_t TSC_IOCCR_G8_IO3 = 1U << 30 ;

  // Field G8_IO2: G8_IO2
    const uint32_t TSC_IOCCR_G8_IO2 = 1U << 29 ;

  // Field G8_IO1: G8_IO1
    const uint32_t TSC_IOCCR_G8_IO1 = 1U << 28 ;

  // Field G7_IO4: G7_IO4
    const uint32_t TSC_IOCCR_G7_IO4 = 1U << 27 ;

  // Field G7_IO3: G7_IO3
    const uint32_t TSC_IOCCR_G7_IO3 = 1U << 26 ;

  // Field G7_IO2: G7_IO2
    const uint32_t TSC_IOCCR_G7_IO2 = 1U << 25 ;

  // Field G7_IO1: G7_IO1
    const uint32_t TSC_IOCCR_G7_IO1 = 1U << 24 ;

  // Field G6_IO4: G6_IO4
    const uint32_t TSC_IOCCR_G6_IO4 = 1U << 23 ;

  // Field G6_IO3: G6_IO3
    const uint32_t TSC_IOCCR_G6_IO3 = 1U << 22 ;

  // Field G6_IO2: G6_IO2
    const uint32_t TSC_IOCCR_G6_IO2 = 1U << 21 ;

  // Field G6_IO1: G6_IO1
    const uint32_t TSC_IOCCR_G6_IO1 = 1U << 20 ;

  // Field G5_IO4: G5_IO4
    const uint32_t TSC_IOCCR_G5_IO4 = 1U << 19 ;

  // Field G5_IO3: G5_IO3
    const uint32_t TSC_IOCCR_G5_IO3 = 1U << 18 ;

  // Field G5_IO2: G5_IO2
    const uint32_t TSC_IOCCR_G5_IO2 = 1U << 17 ;

  // Field G5_IO1: G5_IO1
    const uint32_t TSC_IOCCR_G5_IO1 = 1U << 16 ;

  // Field G4_IO4: G4_IO4
    const uint32_t TSC_IOCCR_G4_IO4 = 1U << 15 ;

  // Field G4_IO3: G4_IO3
    const uint32_t TSC_IOCCR_G4_IO3 = 1U << 14 ;

  // Field G4_IO2: G4_IO2
    const uint32_t TSC_IOCCR_G4_IO2 = 1U << 13 ;

  // Field G4_IO1: G4_IO1
    const uint32_t TSC_IOCCR_G4_IO1 = 1U << 12 ;

  // Field G3_IO4: G3_IO4
    const uint32_t TSC_IOCCR_G3_IO4 = 1U << 11 ;

  // Field G3_IO3: G3_IO3
    const uint32_t TSC_IOCCR_G3_IO3 = 1U << 10 ;

  // Field G3_IO2: G3_IO2
    const uint32_t TSC_IOCCR_G3_IO2 = 1U << 9 ;

  // Field G3_IO1: G3_IO1
    const uint32_t TSC_IOCCR_G3_IO1 = 1U << 8 ;

  // Field G2_IO4: G2_IO4
    const uint32_t TSC_IOCCR_G2_IO4 = 1U << 7 ;

  // Field G2_IO3: G2_IO3
    const uint32_t TSC_IOCCR_G2_IO3 = 1U << 6 ;

  // Field G2_IO2: G2_IO2
    const uint32_t TSC_IOCCR_G2_IO2 = 1U << 5 ;

  // Field G2_IO1: G2_IO1
    const uint32_t TSC_IOCCR_G2_IO1 = 1U << 4 ;

  // Field G1_IO4: G1_IO4
    const uint32_t TSC_IOCCR_G1_IO4 = 1U << 3 ;

  // Field G1_IO3: G1_IO3
    const uint32_t TSC_IOCCR_G1_IO3 = 1U << 2 ;

  // Field G1_IO2: G1_IO2
    const uint32_t TSC_IOCCR_G1_IO2 = 1U << 1 ;

  // Field G1_IO1: G1_IO1
    const uint32_t TSC_IOCCR_G1_IO1 = 1U << 0 ;

//---  Register IOGCSR: I/O group control status
          register
  #define TSC_IOGCSR (* ((volatile uint32_t *) (0x40024000 + 48)))

  // Field G8S: Analog I/O group x status
    const uint32_t TSC_IOGCSR_G8S = 1U << 23 ;

  // Field G7S: Analog I/O group x status
    const uint32_t TSC_IOGCSR_G7S = 1U << 22 ;

  // Field G6S: Analog I/O group x status
    const uint32_t TSC_IOGCSR_G6S = 1U << 21 ;

  // Field G5S: Analog I/O group x status
    const uint32_t TSC_IOGCSR_G5S = 1U << 20 ;

  // Field G4S: Analog I/O group x status
    const uint32_t TSC_IOGCSR_G4S = 1U << 19 ;

  // Field G3S: Analog I/O group x status
    const uint32_t TSC_IOGCSR_G3S = 1U << 18 ;

  // Field G2S: Analog I/O group x status
    const uint32_t TSC_IOGCSR_G2S = 1U << 17 ;

  // Field G1S: Analog I/O group x status
    const uint32_t TSC_IOGCSR_G1S = 1U << 16 ;

  // Field G8E: Analog I/O group x enable
    const uint32_t TSC_IOGCSR_G8E = 1U << 7 ;

  // Field G7E: Analog I/O group x enable
    const uint32_t TSC_IOGCSR_G7E = 1U << 6 ;

  // Field G6E: Analog I/O group x enable
    const uint32_t TSC_IOGCSR_G6E = 1U << 5 ;

  // Field G5E: Analog I/O group x enable
    const uint32_t TSC_IOGCSR_G5E = 1U << 4 ;

  // Field G4E: Analog I/O group x enable
    const uint32_t TSC_IOGCSR_G4E = 1U << 3 ;

  // Field G3E: Analog I/O group x enable
    const uint32_t TSC_IOGCSR_G3E = 1U << 2 ;

  // Field G2E: Analog I/O group x enable
    const uint32_t TSC_IOGCSR_G2E = 1U << 1 ;

  // Field G1E: Analog I/O group x enable
    const uint32_t TSC_IOGCSR_G1E = 1U << 0 ;

//---  Register IOG1CR: I/O group x counter register
  #define TSC_IOG1CR (* ((const volatile uint32_t *) (0x40024000 + 52)))

  // Field CNT: Counter value
    inline uint32_t TSC_IOG1CR_CNT (const uint32_t inValue) {return (inValue & 0x3fffU) << 0 ; }

//---  Register IOG2CR: I/O group x counter register
  #define TSC_IOG2CR (* ((const volatile uint32_t *) (0x40024000 + 56)))

  // Field CNT: Counter value
    inline uint32_t TSC_IOG2CR_CNT (const uint32_t inValue) {return (inValue & 0x3fffU) << 0 ; }

//---  Register IOG3CR: I/O group x counter register
  #define TSC_IOG3CR (* ((const volatile uint32_t *) (0x40024000 + 60)))

  // Field CNT: Counter value
    inline uint32_t TSC_IOG3CR_CNT (const uint32_t inValue) {return (inValue & 0x3fffU) << 0 ; }

//---  Register IOG4CR: I/O group x counter register
  #define TSC_IOG4CR (* ((const volatile uint32_t *) (0x40024000 + 64)))

  // Field CNT: Counter value
    inline uint32_t TSC_IOG4CR_CNT (const uint32_t inValue) {return (inValue & 0x3fffU) << 0 ; }

//---  Register IOG5CR: I/O group x counter register
  #define TSC_IOG5CR (* ((const volatile uint32_t *) (0x40024000 + 68)))

  // Field CNT: Counter value
    inline uint32_t TSC_IOG5CR_CNT (const uint32_t inValue) {return (inValue & 0x3fffU) << 0 ; }

//---  Register IOG6CR: I/O group x counter register
  #define TSC_IOG6CR (* ((const volatile uint32_t *) (0x40024000 + 72)))

  // Field CNT: Counter value
    inline uint32_t TSC_IOG6CR_CNT (const uint32_t inValue) {return (inValue & 0x3fffU) << 0 ; }

//---  Register IOG7CR: I/O group x counter register
  #define TSC_IOG7CR (* ((const volatile uint32_t *) (0x40024000 + 76)))

  // Field CNT: Counter value
    inline uint32_t TSC_IOG7CR_CNT (const uint32_t inValue) {return (inValue & 0x3fffU) << 0 ; }

//---  Register IOG8CR: I/O group x counter register
  #define TSC_IOG8CR (* ((const volatile uint32_t *) (0x40024000 + 80)))

  // Field CNT: Counter value
    inline uint32_t TSC_IOG8CR_CNT (const uint32_t inValue) {return (inValue & 0x3fffU) << 0 ; }

//------------------------------------------------------------------------------
// Peripheral UART4
//------------------------------------------------------------------------------

//---  Register CR1: Control register 1
  #define UART4_CR1 (* ((volatile uint32_t *) (0x40004c00 + 0)))

  // Field M1: Word length
    const uint32_t UART4_CR1_M1 = 1U << 28 ;

  // Field EOBIE: End of Block interrupt enable
    const uint32_t UART4_CR1_EOBIE = 1U << 27 ;

  // Field RTOIE: Receiver timeout interrupt enable
    const uint32_t UART4_CR1_RTOIE = 1U << 26 ;

  // Field DEAT4: Driver Enable assertion time
    const uint32_t UART4_CR1_DEAT4 = 1U << 25 ;

  // Field DEAT3: DEAT3
    const uint32_t UART4_CR1_DEAT3 = 1U << 24 ;

  // Field DEAT2: DEAT2
    const uint32_t UART4_CR1_DEAT2 = 1U << 23 ;

  // Field DEAT1: DEAT1
    const uint32_t UART4_CR1_DEAT1 = 1U << 22 ;

  // Field DEAT0: DEAT0
    const uint32_t UART4_CR1_DEAT0 = 1U << 21 ;

  // Field DEDT4: Driver Enable de-assertion time
    const uint32_t UART4_CR1_DEDT4 = 1U << 20 ;

  // Field DEDT3: DEDT3
    const uint32_t UART4_CR1_DEDT3 = 1U << 19 ;

  // Field DEDT2: DEDT2
    const uint32_t UART4_CR1_DEDT2 = 1U << 18 ;

  // Field DEDT1: DEDT1
    const uint32_t UART4_CR1_DEDT1 = 1U << 17 ;

  // Field DEDT0: DEDT0
    const uint32_t UART4_CR1_DEDT0 = 1U << 16 ;

  // Field OVER8: Oversampling mode
    const uint32_t UART4_CR1_OVER8 = 1U << 15 ;

  // Field CMIE: Character match interrupt enable
    const uint32_t UART4_CR1_CMIE = 1U << 14 ;

  // Field MME: Mute mode enable
    const uint32_t UART4_CR1_MME = 1U << 13 ;

  // Field M0: Word length
    const uint32_t UART4_CR1_M0 = 1U << 12 ;

  // Field WAKE: Receiver wakeup method
    const uint32_t UART4_CR1_WAKE = 1U << 11 ;

  // Field PCE: Parity control enable
    const uint32_t UART4_CR1_PCE = 1U << 10 ;

  // Field PS: Parity selection
    const uint32_t UART4_CR1_PS = 1U << 9 ;

  // Field PEIE: PE interrupt enable
    const uint32_t UART4_CR1_PEIE = 1U << 8 ;

  // Field TXEIE: interrupt enable
    const uint32_t UART4_CR1_TXEIE = 1U << 7 ;

  // Field TCIE: Transmission complete interrupt enable
    const uint32_t UART4_CR1_TCIE = 1U << 6 ;

  // Field RXNEIE: RXNE interrupt enable
    const uint32_t UART4_CR1_RXNEIE = 1U << 5 ;

  // Field IDLEIE: IDLE interrupt enable
    const uint32_t UART4_CR1_IDLEIE = 1U << 4 ;

  // Field TE: Transmitter enable
    const uint32_t UART4_CR1_TE = 1U << 3 ;

  // Field RE: Receiver enable
    const uint32_t UART4_CR1_RE = 1U << 2 ;

  // Field UESM: USART enable in Stop mode
    const uint32_t UART4_CR1_UESM = 1U << 1 ;

  // Field UE: USART enable
    const uint32_t UART4_CR1_UE = 1U << 0 ;

//---  Register CR2: Control register 2
  #define UART4_CR2 (* ((volatile uint32_t *) (0x40004c00 + 4)))

  // Field ADD4_7: Address of the USART node
    inline uint32_t UART4_CR2_ADD4_7 (const uint32_t inValue) {return (inValue & 0xfU) << 28 ; }

  // Field ADD0_3: Address of the USART node
    inline uint32_t UART4_CR2_ADD0_3 (const uint32_t inValue) {return (inValue & 0xfU) << 24 ; }

  // Field RTOEN: Receiver timeout enable
    const uint32_t UART4_CR2_RTOEN = 1U << 23 ;

  // Field ABRMOD1: Auto baud rate mode
    const uint32_t UART4_CR2_ABRMOD1 = 1U << 22 ;

  // Field ABRMOD0: ABRMOD0
    const uint32_t UART4_CR2_ABRMOD0 = 1U << 21 ;

  // Field ABREN: Auto baud rate enable
    const uint32_t UART4_CR2_ABREN = 1U << 20 ;

  // Field MSBFIRST: Most significant bit first
    const uint32_t UART4_CR2_MSBFIRST = 1U << 19 ;

  // Field TAINV: Binary data inversion
    const uint32_t UART4_CR2_TAINV = 1U << 18 ;

  // Field TXINV: TX pin active level inversion
    const uint32_t UART4_CR2_TXINV = 1U << 17 ;

  // Field RXINV: RX pin active level inversion
    const uint32_t UART4_CR2_RXINV = 1U << 16 ;

  // Field SWAP: Swap TX/RX pins
    const uint32_t UART4_CR2_SWAP = 1U << 15 ;

  // Field LINEN: LIN mode enable
    const uint32_t UART4_CR2_LINEN = 1U << 14 ;

  // Field STOP: STOP bits
    inline uint32_t UART4_CR2_STOP (const uint32_t inValue) {return (inValue & 0x3U) << 12 ; }

  // Field CLKEN: Clock enable
    const uint32_t UART4_CR2_CLKEN = 1U << 11 ;

  // Field CPOL: Clock polarity
    const uint32_t UART4_CR2_CPOL = 1U << 10 ;

  // Field CPHA: Clock phase
    const uint32_t UART4_CR2_CPHA = 1U << 9 ;

  // Field LBCL: Last bit clock pulse
    const uint32_t UART4_CR2_LBCL = 1U << 8 ;

  // Field LBDIE: LIN break detection interrupt enable
    const uint32_t UART4_CR2_LBDIE = 1U << 6 ;

  // Field LBDL: LIN break detection length
    const uint32_t UART4_CR2_LBDL = 1U << 5 ;

  // Field ADDM7: 7-bit Address Detection/4-bit Address Detection
    const uint32_t UART4_CR2_ADDM7 = 1U << 4 ;

//---  Register CR3: Control register 3
  #define UART4_CR3 (* ((volatile uint32_t *) (0x40004c00 + 8)))

  // Field WUFIE: Wakeup from Stop mode interrupt enable
    const uint32_t UART4_CR3_WUFIE = 1U << 22 ;

  // Field WUS: Wakeup from Stop mode interrupt flag selection
    inline uint32_t UART4_CR3_WUS (const uint32_t inValue) {return (inValue & 0x3U) << 20 ; }

  // Field SCARCNT: Smartcard auto-retry count
    inline uint32_t UART4_CR3_SCARCNT (const uint32_t inValue) {return (inValue & 0x7U) << 17 ; }

  // Field DEP: Driver enable polarity selection
    const uint32_t UART4_CR3_DEP = 1U << 15 ;

  // Field DEM: Driver enable mode
    const uint32_t UART4_CR3_DEM = 1U << 14 ;

  // Field DDRE: DMA Disable on Reception Error
    const uint32_t UART4_CR3_DDRE = 1U << 13 ;

  // Field OVRDIS: Overrun Disable
    const uint32_t UART4_CR3_OVRDIS = 1U << 12 ;

  // Field ONEBIT: One sample bit method enable
    const uint32_t UART4_CR3_ONEBIT = 1U << 11 ;

  // Field CTSIE: CTS interrupt enable
    const uint32_t UART4_CR3_CTSIE = 1U << 10 ;

  // Field CTSE: CTS enable
    const uint32_t UART4_CR3_CTSE = 1U << 9 ;

  // Field RTSE: RTS enable
    const uint32_t UART4_CR3_RTSE = 1U << 8 ;

  // Field DMAT: DMA enable transmitter
    const uint32_t UART4_CR3_DMAT = 1U << 7 ;

  // Field DMAR: DMA enable receiver
    const uint32_t UART4_CR3_DMAR = 1U << 6 ;

  // Field SCEN: Smartcard mode enable
    const uint32_t UART4_CR3_SCEN = 1U << 5 ;

  // Field NACK: Smartcard NACK enable
    const uint32_t UART4_CR3_NACK = 1U << 4 ;

  // Field HDSEL: Half-duplex selection
    const uint32_t UART4_CR3_HDSEL = 1U << 3 ;

  // Field IRLP: Ir low-power
    const uint32_t UART4_CR3_IRLP = 1U << 2 ;

  // Field IREN: Ir mode enable
    const uint32_t UART4_CR3_IREN = 1U << 1 ;

  // Field EIE: Error interrupt enable
    const uint32_t UART4_CR3_EIE = 1U << 0 ;

//---  Register BRR: Baud rate register
  #define UART4_BRR (* ((volatile uint32_t *) (0x40004c00 + 12)))

  // Field DIV_Mantissa: DIV_Mantissa
    inline uint32_t UART4_BRR_DIV_Mantissa (const uint32_t inValue) {return (inValue & 0xfffU) << 4 ; }

  // Field DIV_Fraction: DIV_Fraction
    inline uint32_t UART4_BRR_DIV_Fraction (const uint32_t inValue) {return (inValue & 0xfU) << 0 ; }

//---  Register GTPR: Guard time and prescaler
          register
  #define UART4_GTPR (* ((volatile uint32_t *) (0x40004c00 + 16)))

  // Field GT: Guard time value
    inline uint32_t UART4_GTPR_GT (const uint32_t inValue) {return (inValue & 0xffU) << 8 ; }

  // Field PSC: Prescaler value
    inline uint32_t UART4_GTPR_PSC (const uint32_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register RTOR: Receiver timeout register
  #define UART4_RTOR (* ((volatile uint32_t *) (0x40004c00 + 20)))

  // Field BLEN: Block Length
    inline uint32_t UART4_RTOR_BLEN (const uint32_t inValue) {return (inValue & 0xffU) << 24 ; }

  // Field RTO: Receiver timeout value
    inline uint32_t UART4_RTOR_RTO (const uint32_t inValue) {return (inValue & 0xffffffU) << 0 ; }

//---  Register RQR: Request register
  #define UART4_RQR (* ((volatile uint32_t *) (0x40004c00 + 24)))

  // Field TXFRQ: Transmit data flush request
    const uint32_t UART4_RQR_TXFRQ = 1U << 4 ;

  // Field RXFRQ: Receive data flush request
    const uint32_t UART4_RQR_RXFRQ = 1U << 3 ;

  // Field MMRQ: Mute mode request
    const uint32_t UART4_RQR_MMRQ = 1U << 2 ;

  // Field SBKRQ: Send break request
    const uint32_t UART4_RQR_SBKRQ = 1U << 1 ;

  // Field ABRRQ: Auto baud rate request
    const uint32_t UART4_RQR_ABRRQ = 1U << 0 ;

//---  Register ISR: Interrupt & status
          register
  #define UART4_ISR (* ((const volatile uint32_t *) (0x40004c00 + 28)))

  // Field REACK: REACK
    const uint32_t UART4_ISR_REACK = 1U << 22 ;

  // Field TEACK: TEACK
    const uint32_t UART4_ISR_TEACK = 1U << 21 ;

  // Field WUF: WUF
    const uint32_t UART4_ISR_WUF = 1U << 20 ;

  // Field RWU: RWU
    const uint32_t UART4_ISR_RWU = 1U << 19 ;

  // Field SBKF: SBKF
    const uint32_t UART4_ISR_SBKF = 1U << 18 ;

  // Field CMF: CMF
    const uint32_t UART4_ISR_CMF = 1U << 17 ;

  // Field BUSY: BUSY
    const uint32_t UART4_ISR_BUSY = 1U << 16 ;

  // Field ABRF: ABRF
    const uint32_t UART4_ISR_ABRF = 1U << 15 ;

  // Field ABRE: ABRE
    const uint32_t UART4_ISR_ABRE = 1U << 14 ;

  // Field EOBF: EOBF
    const uint32_t UART4_ISR_EOBF = 1U << 12 ;

  // Field RTOF: RTOF
    const uint32_t UART4_ISR_RTOF = 1U << 11 ;

  // Field CTS: CTS
    const uint32_t UART4_ISR_CTS = 1U << 10 ;

  // Field CTSIF: CTSIF
    const uint32_t UART4_ISR_CTSIF = 1U << 9 ;

  // Field LBDF: LBDF
    const uint32_t UART4_ISR_LBDF = 1U << 8 ;

  // Field TXE: TXE
    const uint32_t UART4_ISR_TXE = 1U << 7 ;

  // Field TC: TC
    const uint32_t UART4_ISR_TC = 1U << 6 ;

  // Field RXNE: RXNE
    const uint32_t UART4_ISR_RXNE = 1U << 5 ;

  // Field IDLE: IDLE
    const uint32_t UART4_ISR_IDLE = 1U << 4 ;

  // Field ORE: ORE
    const uint32_t UART4_ISR_ORE = 1U << 3 ;

  // Field NF: NF
    const uint32_t UART4_ISR_NF = 1U << 2 ;

  // Field FE: FE
    const uint32_t UART4_ISR_FE = 1U << 1 ;

  // Field PE: PE
    const uint32_t UART4_ISR_PE = 1U << 0 ;

//---  Register ICR: Interrupt flag clear register
  #define UART4_ICR (* ((volatile uint32_t *) (0x40004c00 + 32)))

  // Field WUCF: Wakeup from Stop mode clear flag
    const uint32_t UART4_ICR_WUCF = 1U << 20 ;

  // Field CMCF: Character match clear flag
    const uint32_t UART4_ICR_CMCF = 1U << 17 ;

  // Field EOBCF: End of block clear flag
    const uint32_t UART4_ICR_EOBCF = 1U << 12 ;

  // Field RTOCF: Receiver timeout clear flag
    const uint32_t UART4_ICR_RTOCF = 1U << 11 ;

  // Field CTSCF: CTS clear flag
    const uint32_t UART4_ICR_CTSCF = 1U << 9 ;

  // Field LBDCF: LIN break detection clear flag
    const uint32_t UART4_ICR_LBDCF = 1U << 8 ;

  // Field TCCF: Transmission complete clear flag
    const uint32_t UART4_ICR_TCCF = 1U << 6 ;

  // Field IDLECF: Idle line detected clear flag
    const uint32_t UART4_ICR_IDLECF = 1U << 4 ;

  // Field ORECF: Overrun error clear flag
    const uint32_t UART4_ICR_ORECF = 1U << 3 ;

  // Field NCF: Noise detected clear flag
    const uint32_t UART4_ICR_NCF = 1U << 2 ;

  // Field FECF: Framing error clear flag
    const uint32_t UART4_ICR_FECF = 1U << 1 ;

  // Field PECF: Parity error clear flag
    const uint32_t UART4_ICR_PECF = 1U << 0 ;

//---  Register RDR: Receive data register
  #define UART4_RDR (* ((const volatile uint32_t *) (0x40004c00 + 36)))

  // Field RDR: Receive data value
    inline uint32_t UART4_RDR_RDR (const uint32_t inValue) {return (inValue & 0x1ffU) << 0 ; }

//---  Register TDR: Transmit data register
  #define UART4_TDR (* ((volatile uint32_t *) (0x40004c00 + 40)))

  // Field TDR: Transmit data value
    inline uint32_t UART4_TDR_TDR (const uint32_t inValue) {return (inValue & 0x1ffU) << 0 ; }

//------------------------------------------------------------------------------
// Peripheral USART1: Universal synchronous asynchronous receiver       transmitter
//------------------------------------------------------------------------------

//---  Register CR1: Control register 1
  #define USART1_CR1 (* ((volatile uint32_t *) (0x40013800 + 0)))

  // Field M1: Word length
    const uint32_t USART1_CR1_M1 = 1U << 28 ;

  // Field EOBIE: End of Block interrupt enable
    const uint32_t USART1_CR1_EOBIE = 1U << 27 ;

  // Field RTOIE: Receiver timeout interrupt enable
    const uint32_t USART1_CR1_RTOIE = 1U << 26 ;

  // Field DEAT4: Driver Enable assertion time
    const uint32_t USART1_CR1_DEAT4 = 1U << 25 ;

  // Field DEAT3: DEAT3
    const uint32_t USART1_CR1_DEAT3 = 1U << 24 ;

  // Field DEAT2: DEAT2
    const uint32_t USART1_CR1_DEAT2 = 1U << 23 ;

  // Field DEAT1: DEAT1
    const uint32_t USART1_CR1_DEAT1 = 1U << 22 ;

  // Field DEAT0: DEAT0
    const uint32_t USART1_CR1_DEAT0 = 1U << 21 ;

  // Field DEDT4: Driver Enable de-assertion time
    const uint32_t USART1_CR1_DEDT4 = 1U << 20 ;

  // Field DEDT3: DEDT3
    const uint32_t USART1_CR1_DEDT3 = 1U << 19 ;

  // Field DEDT2: DEDT2
    const uint32_t USART1_CR1_DEDT2 = 1U << 18 ;

  // Field DEDT1: DEDT1
    const uint32_t USART1_CR1_DEDT1 = 1U << 17 ;

  // Field DEDT0: DEDT0
    const uint32_t USART1_CR1_DEDT0 = 1U << 16 ;

  // Field OVER8: Oversampling mode
    const uint32_t USART1_CR1_OVER8 = 1U << 15 ;

  // Field CMIE: Character match interrupt enable
    const uint32_t USART1_CR1_CMIE = 1U << 14 ;

  // Field MME: Mute mode enable
    const uint32_t USART1_CR1_MME = 1U << 13 ;

  // Field M0: Word length
    const uint32_t USART1_CR1_M0 = 1U << 12 ;

  // Field WAKE: Receiver wakeup method
    const uint32_t USART1_CR1_WAKE = 1U << 11 ;

  // Field PCE: Parity control enable
    const uint32_t USART1_CR1_PCE = 1U << 10 ;

  // Field PS: Parity selection
    const uint32_t USART1_CR1_PS = 1U << 9 ;

  // Field PEIE: PE interrupt enable
    const uint32_t USART1_CR1_PEIE = 1U << 8 ;

  // Field TXEIE: interrupt enable
    const uint32_t USART1_CR1_TXEIE = 1U << 7 ;

  // Field TCIE: Transmission complete interrupt enable
    const uint32_t USART1_CR1_TCIE = 1U << 6 ;

  // Field RXNEIE: RXNE interrupt enable
    const uint32_t USART1_CR1_RXNEIE = 1U << 5 ;

  // Field IDLEIE: IDLE interrupt enable
    const uint32_t USART1_CR1_IDLEIE = 1U << 4 ;

  // Field TE: Transmitter enable
    const uint32_t USART1_CR1_TE = 1U << 3 ;

  // Field RE: Receiver enable
    const uint32_t USART1_CR1_RE = 1U << 2 ;

  // Field UESM: USART enable in Stop mode
    const uint32_t USART1_CR1_UESM = 1U << 1 ;

  // Field UE: USART enable
    const uint32_t USART1_CR1_UE = 1U << 0 ;

//---  Register CR2: Control register 2
  #define USART1_CR2 (* ((volatile uint32_t *) (0x40013800 + 4)))

  // Field ADD4_7: Address of the USART node
    inline uint32_t USART1_CR2_ADD4_7 (const uint32_t inValue) {return (inValue & 0xfU) << 28 ; }

  // Field ADD0_3: Address of the USART node
    inline uint32_t USART1_CR2_ADD0_3 (const uint32_t inValue) {return (inValue & 0xfU) << 24 ; }

  // Field RTOEN: Receiver timeout enable
    const uint32_t USART1_CR2_RTOEN = 1U << 23 ;

  // Field ABRMOD1: Auto baud rate mode
    const uint32_t USART1_CR2_ABRMOD1 = 1U << 22 ;

  // Field ABRMOD0: ABRMOD0
    const uint32_t USART1_CR2_ABRMOD0 = 1U << 21 ;

  // Field ABREN: Auto baud rate enable
    const uint32_t USART1_CR2_ABREN = 1U << 20 ;

  // Field MSBFIRST: Most significant bit first
    const uint32_t USART1_CR2_MSBFIRST = 1U << 19 ;

  // Field TAINV: Binary data inversion
    const uint32_t USART1_CR2_TAINV = 1U << 18 ;

  // Field TXINV: TX pin active level inversion
    const uint32_t USART1_CR2_TXINV = 1U << 17 ;

  // Field RXINV: RX pin active level inversion
    const uint32_t USART1_CR2_RXINV = 1U << 16 ;

  // Field SWAP: Swap TX/RX pins
    const uint32_t USART1_CR2_SWAP = 1U << 15 ;

  // Field LINEN: LIN mode enable
    const uint32_t USART1_CR2_LINEN = 1U << 14 ;

  // Field STOP: STOP bits
    inline uint32_t USART1_CR2_STOP (const uint32_t inValue) {return (inValue & 0x3U) << 12 ; }

  // Field CLKEN: Clock enable
    const uint32_t USART1_CR2_CLKEN = 1U << 11 ;

  // Field CPOL: Clock polarity
    const uint32_t USART1_CR2_CPOL = 1U << 10 ;

  // Field CPHA: Clock phase
    const uint32_t USART1_CR2_CPHA = 1U << 9 ;

  // Field LBCL: Last bit clock pulse
    const uint32_t USART1_CR2_LBCL = 1U << 8 ;

  // Field LBDIE: LIN break detection interrupt enable
    const uint32_t USART1_CR2_LBDIE = 1U << 6 ;

  // Field LBDL: LIN break detection length
    const uint32_t USART1_CR2_LBDL = 1U << 5 ;

  // Field ADDM7: 7-bit Address Detection/4-bit Address Detection
    const uint32_t USART1_CR2_ADDM7 = 1U << 4 ;

//---  Register CR3: Control register 3
  #define USART1_CR3 (* ((volatile uint32_t *) (0x40013800 + 8)))

  // Field WUFIE: Wakeup from Stop mode interrupt enable
    const uint32_t USART1_CR3_WUFIE = 1U << 22 ;

  // Field WUS: Wakeup from Stop mode interrupt flag selection
    inline uint32_t USART1_CR3_WUS (const uint32_t inValue) {return (inValue & 0x3U) << 20 ; }

  // Field SCARCNT: Smartcard auto-retry count
    inline uint32_t USART1_CR3_SCARCNT (const uint32_t inValue) {return (inValue & 0x7U) << 17 ; }

  // Field DEP: Driver enable polarity selection
    const uint32_t USART1_CR3_DEP = 1U << 15 ;

  // Field DEM: Driver enable mode
    const uint32_t USART1_CR3_DEM = 1U << 14 ;

  // Field DDRE: DMA Disable on Reception Error
    const uint32_t USART1_CR3_DDRE = 1U << 13 ;

  // Field OVRDIS: Overrun Disable
    const uint32_t USART1_CR3_OVRDIS = 1U << 12 ;

  // Field ONEBIT: One sample bit method enable
    const uint32_t USART1_CR3_ONEBIT = 1U << 11 ;

  // Field CTSIE: CTS interrupt enable
    const uint32_t USART1_CR3_CTSIE = 1U << 10 ;

  // Field CTSE: CTS enable
    const uint32_t USART1_CR3_CTSE = 1U << 9 ;

  // Field RTSE: RTS enable
    const uint32_t USART1_CR3_RTSE = 1U << 8 ;

  // Field DMAT: DMA enable transmitter
    const uint32_t USART1_CR3_DMAT = 1U << 7 ;

  // Field DMAR: DMA enable receiver
    const uint32_t USART1_CR3_DMAR = 1U << 6 ;

  // Field SCEN: Smartcard mode enable
    const uint32_t USART1_CR3_SCEN = 1U << 5 ;

  // Field NACK: Smartcard NACK enable
    const uint32_t USART1_CR3_NACK = 1U << 4 ;

  // Field HDSEL: Half-duplex selection
    const uint32_t USART1_CR3_HDSEL = 1U << 3 ;

  // Field IRLP: Ir low-power
    const uint32_t USART1_CR3_IRLP = 1U << 2 ;

  // Field IREN: Ir mode enable
    const uint32_t USART1_CR3_IREN = 1U << 1 ;

  // Field EIE: Error interrupt enable
    const uint32_t USART1_CR3_EIE = 1U << 0 ;

//---  Register BRR: Baud rate register
  #define USART1_BRR (* ((volatile uint32_t *) (0x40013800 + 12)))

  // Field DIV_Mantissa: DIV_Mantissa
    inline uint32_t USART1_BRR_DIV_Mantissa (const uint32_t inValue) {return (inValue & 0xfffU) << 4 ; }

  // Field DIV_Fraction: DIV_Fraction
    inline uint32_t USART1_BRR_DIV_Fraction (const uint32_t inValue) {return (inValue & 0xfU) << 0 ; }

//---  Register GTPR: Guard time and prescaler
          register
  #define USART1_GTPR (* ((volatile uint32_t *) (0x40013800 + 16)))

  // Field GT: Guard time value
    inline uint32_t USART1_GTPR_GT (const uint32_t inValue) {return (inValue & 0xffU) << 8 ; }

  // Field PSC: Prescaler value
    inline uint32_t USART1_GTPR_PSC (const uint32_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register RTOR: Receiver timeout register
  #define USART1_RTOR (* ((volatile uint32_t *) (0x40013800 + 20)))

  // Field BLEN: Block Length
    inline uint32_t USART1_RTOR_BLEN (const uint32_t inValue) {return (inValue & 0xffU) << 24 ; }

  // Field RTO: Receiver timeout value
    inline uint32_t USART1_RTOR_RTO (const uint32_t inValue) {return (inValue & 0xffffffU) << 0 ; }

//---  Register RQR: Request register
  #define USART1_RQR (* ((volatile uint32_t *) (0x40013800 + 24)))

  // Field TXFRQ: Transmit data flush request
    const uint32_t USART1_RQR_TXFRQ = 1U << 4 ;

  // Field RXFRQ: Receive data flush request
    const uint32_t USART1_RQR_RXFRQ = 1U << 3 ;

  // Field MMRQ: Mute mode request
    const uint32_t USART1_RQR_MMRQ = 1U << 2 ;

  // Field SBKRQ: Send break request
    const uint32_t USART1_RQR_SBKRQ = 1U << 1 ;

  // Field ABRRQ: Auto baud rate request
    const uint32_t USART1_RQR_ABRRQ = 1U << 0 ;

//---  Register ISR: Interrupt & status
          register
  #define USART1_ISR (* ((const volatile uint32_t *) (0x40013800 + 28)))

  // Field REACK: REACK
    const uint32_t USART1_ISR_REACK = 1U << 22 ;

  // Field TEACK: TEACK
    const uint32_t USART1_ISR_TEACK = 1U << 21 ;

  // Field WUF: WUF
    const uint32_t USART1_ISR_WUF = 1U << 20 ;

  // Field RWU: RWU
    const uint32_t USART1_ISR_RWU = 1U << 19 ;

  // Field SBKF: SBKF
    const uint32_t USART1_ISR_SBKF = 1U << 18 ;

  // Field CMF: CMF
    const uint32_t USART1_ISR_CMF = 1U << 17 ;

  // Field BUSY: BUSY
    const uint32_t USART1_ISR_BUSY = 1U << 16 ;

  // Field ABRF: ABRF
    const uint32_t USART1_ISR_ABRF = 1U << 15 ;

  // Field ABRE: ABRE
    const uint32_t USART1_ISR_ABRE = 1U << 14 ;

  // Field EOBF: EOBF
    const uint32_t USART1_ISR_EOBF = 1U << 12 ;

  // Field RTOF: RTOF
    const uint32_t USART1_ISR_RTOF = 1U << 11 ;

  // Field CTS: CTS
    const uint32_t USART1_ISR_CTS = 1U << 10 ;

  // Field CTSIF: CTSIF
    const uint32_t USART1_ISR_CTSIF = 1U << 9 ;

  // Field LBDF: LBDF
    const uint32_t USART1_ISR_LBDF = 1U << 8 ;

  // Field TXE: TXE
    const uint32_t USART1_ISR_TXE = 1U << 7 ;

  // Field TC: TC
    const uint32_t USART1_ISR_TC = 1U << 6 ;

  // Field RXNE: RXNE
    const uint32_t USART1_ISR_RXNE = 1U << 5 ;

  // Field IDLE: IDLE
    const uint32_t USART1_ISR_IDLE = 1U << 4 ;

  // Field ORE: ORE
    const uint32_t USART1_ISR_ORE = 1U << 3 ;

  // Field NF: NF
    const uint32_t USART1_ISR_NF = 1U << 2 ;

  // Field FE: FE
    const uint32_t USART1_ISR_FE = 1U << 1 ;

  // Field PE: PE
    const uint32_t USART1_ISR_PE = 1U << 0 ;

//---  Register ICR: Interrupt flag clear register
  #define USART1_ICR (* ((volatile uint32_t *) (0x40013800 + 32)))

  // Field WUCF: Wakeup from Stop mode clear flag
    const uint32_t USART1_ICR_WUCF = 1U << 20 ;

  // Field CMCF: Character match clear flag
    const uint32_t USART1_ICR_CMCF = 1U << 17 ;

  // Field EOBCF: End of block clear flag
    const uint32_t USART1_ICR_EOBCF = 1U << 12 ;

  // Field RTOCF: Receiver timeout clear flag
    const uint32_t USART1_ICR_RTOCF = 1U << 11 ;

  // Field CTSCF: CTS clear flag
    const uint32_t USART1_ICR_CTSCF = 1U << 9 ;

  // Field LBDCF: LIN break detection clear flag
    const uint32_t USART1_ICR_LBDCF = 1U << 8 ;

  // Field TCCF: Transmission complete clear flag
    const uint32_t USART1_ICR_TCCF = 1U << 6 ;

  // Field IDLECF: Idle line detected clear flag
    const uint32_t USART1_ICR_IDLECF = 1U << 4 ;

  // Field ORECF: Overrun error clear flag
    const uint32_t USART1_ICR_ORECF = 1U << 3 ;

  // Field NCF: Noise detected clear flag
    const uint32_t USART1_ICR_NCF = 1U << 2 ;

  // Field FECF: Framing error clear flag
    const uint32_t USART1_ICR_FECF = 1U << 1 ;

  // Field PECF: Parity error clear flag
    const uint32_t USART1_ICR_PECF = 1U << 0 ;

//---  Register RDR: Receive data register
  #define USART1_RDR (* ((const volatile uint32_t *) (0x40013800 + 36)))

  // Field RDR: Receive data value
    inline uint32_t USART1_RDR_RDR (const uint32_t inValue) {return (inValue & 0x1ffU) << 0 ; }

//---  Register TDR: Transmit data register
  #define USART1_TDR (* ((volatile uint32_t *) (0x40013800 + 40)))

  // Field TDR: Transmit data value
    inline uint32_t USART1_TDR_TDR (const uint32_t inValue) {return (inValue & 0x1ffU) << 0 ; }

//------------------------------------------------------------------------------
// Peripheral USART2
//------------------------------------------------------------------------------

//---  Register CR1: Control register 1
  #define USART2_CR1 (* ((volatile uint32_t *) (0x40004400 + 0)))

  // Field M1: Word length
    const uint32_t USART2_CR1_M1 = 1U << 28 ;

  // Field EOBIE: End of Block interrupt enable
    const uint32_t USART2_CR1_EOBIE = 1U << 27 ;

  // Field RTOIE: Receiver timeout interrupt enable
    const uint32_t USART2_CR1_RTOIE = 1U << 26 ;

  // Field DEAT4: Driver Enable assertion time
    const uint32_t USART2_CR1_DEAT4 = 1U << 25 ;

  // Field DEAT3: DEAT3
    const uint32_t USART2_CR1_DEAT3 = 1U << 24 ;

  // Field DEAT2: DEAT2
    const uint32_t USART2_CR1_DEAT2 = 1U << 23 ;

  // Field DEAT1: DEAT1
    const uint32_t USART2_CR1_DEAT1 = 1U << 22 ;

  // Field DEAT0: DEAT0
    const uint32_t USART2_CR1_DEAT0 = 1U << 21 ;

  // Field DEDT4: Driver Enable de-assertion time
    const uint32_t USART2_CR1_DEDT4 = 1U << 20 ;

  // Field DEDT3: DEDT3
    const uint32_t USART2_CR1_DEDT3 = 1U << 19 ;

  // Field DEDT2: DEDT2
    const uint32_t USART2_CR1_DEDT2 = 1U << 18 ;

  // Field DEDT1: DEDT1
    const uint32_t USART2_CR1_DEDT1 = 1U << 17 ;

  // Field DEDT0: DEDT0
    const uint32_t USART2_CR1_DEDT0 = 1U << 16 ;

  // Field OVER8: Oversampling mode
    const uint32_t USART2_CR1_OVER8 = 1U << 15 ;

  // Field CMIE: Character match interrupt enable
    const uint32_t USART2_CR1_CMIE = 1U << 14 ;

  // Field MME: Mute mode enable
    const uint32_t USART2_CR1_MME = 1U << 13 ;

  // Field M0: Word length
    const uint32_t USART2_CR1_M0 = 1U << 12 ;

  // Field WAKE: Receiver wakeup method
    const uint32_t USART2_CR1_WAKE = 1U << 11 ;

  // Field PCE: Parity control enable
    const uint32_t USART2_CR1_PCE = 1U << 10 ;

  // Field PS: Parity selection
    const uint32_t USART2_CR1_PS = 1U << 9 ;

  // Field PEIE: PE interrupt enable
    const uint32_t USART2_CR1_PEIE = 1U << 8 ;

  // Field TXEIE: interrupt enable
    const uint32_t USART2_CR1_TXEIE = 1U << 7 ;

  // Field TCIE: Transmission complete interrupt enable
    const uint32_t USART2_CR1_TCIE = 1U << 6 ;

  // Field RXNEIE: RXNE interrupt enable
    const uint32_t USART2_CR1_RXNEIE = 1U << 5 ;

  // Field IDLEIE: IDLE interrupt enable
    const uint32_t USART2_CR1_IDLEIE = 1U << 4 ;

  // Field TE: Transmitter enable
    const uint32_t USART2_CR1_TE = 1U << 3 ;

  // Field RE: Receiver enable
    const uint32_t USART2_CR1_RE = 1U << 2 ;

  // Field UESM: USART enable in Stop mode
    const uint32_t USART2_CR1_UESM = 1U << 1 ;

  // Field UE: USART enable
    const uint32_t USART2_CR1_UE = 1U << 0 ;

//---  Register CR2: Control register 2
  #define USART2_CR2 (* ((volatile uint32_t *) (0x40004400 + 4)))

  // Field ADD4_7: Address of the USART node
    inline uint32_t USART2_CR2_ADD4_7 (const uint32_t inValue) {return (inValue & 0xfU) << 28 ; }

  // Field ADD0_3: Address of the USART node
    inline uint32_t USART2_CR2_ADD0_3 (const uint32_t inValue) {return (inValue & 0xfU) << 24 ; }

  // Field RTOEN: Receiver timeout enable
    const uint32_t USART2_CR2_RTOEN = 1U << 23 ;

  // Field ABRMOD1: Auto baud rate mode
    const uint32_t USART2_CR2_ABRMOD1 = 1U << 22 ;

  // Field ABRMOD0: ABRMOD0
    const uint32_t USART2_CR2_ABRMOD0 = 1U << 21 ;

  // Field ABREN: Auto baud rate enable
    const uint32_t USART2_CR2_ABREN = 1U << 20 ;

  // Field MSBFIRST: Most significant bit first
    const uint32_t USART2_CR2_MSBFIRST = 1U << 19 ;

  // Field TAINV: Binary data inversion
    const uint32_t USART2_CR2_TAINV = 1U << 18 ;

  // Field TXINV: TX pin active level inversion
    const uint32_t USART2_CR2_TXINV = 1U << 17 ;

  // Field RXINV: RX pin active level inversion
    const uint32_t USART2_CR2_RXINV = 1U << 16 ;

  // Field SWAP: Swap TX/RX pins
    const uint32_t USART2_CR2_SWAP = 1U << 15 ;

  // Field LINEN: LIN mode enable
    const uint32_t USART2_CR2_LINEN = 1U << 14 ;

  // Field STOP: STOP bits
    inline uint32_t USART2_CR2_STOP (const uint32_t inValue) {return (inValue & 0x3U) << 12 ; }

  // Field CLKEN: Clock enable
    const uint32_t USART2_CR2_CLKEN = 1U << 11 ;

  // Field CPOL: Clock polarity
    const uint32_t USART2_CR2_CPOL = 1U << 10 ;

  // Field CPHA: Clock phase
    const uint32_t USART2_CR2_CPHA = 1U << 9 ;

  // Field LBCL: Last bit clock pulse
    const uint32_t USART2_CR2_LBCL = 1U << 8 ;

  // Field LBDIE: LIN break detection interrupt enable
    const uint32_t USART2_CR2_LBDIE = 1U << 6 ;

  // Field LBDL: LIN break detection length
    const uint32_t USART2_CR2_LBDL = 1U << 5 ;

  // Field ADDM7: 7-bit Address Detection/4-bit Address Detection
    const uint32_t USART2_CR2_ADDM7 = 1U << 4 ;

//---  Register CR3: Control register 3
  #define USART2_CR3 (* ((volatile uint32_t *) (0x40004400 + 8)))

  // Field WUFIE: Wakeup from Stop mode interrupt enable
    const uint32_t USART2_CR3_WUFIE = 1U << 22 ;

  // Field WUS: Wakeup from Stop mode interrupt flag selection
    inline uint32_t USART2_CR3_WUS (const uint32_t inValue) {return (inValue & 0x3U) << 20 ; }

  // Field SCARCNT: Smartcard auto-retry count
    inline uint32_t USART2_CR3_SCARCNT (const uint32_t inValue) {return (inValue & 0x7U) << 17 ; }

  // Field DEP: Driver enable polarity selection
    const uint32_t USART2_CR3_DEP = 1U << 15 ;

  // Field DEM: Driver enable mode
    const uint32_t USART2_CR3_DEM = 1U << 14 ;

  // Field DDRE: DMA Disable on Reception Error
    const uint32_t USART2_CR3_DDRE = 1U << 13 ;

  // Field OVRDIS: Overrun Disable
    const uint32_t USART2_CR3_OVRDIS = 1U << 12 ;

  // Field ONEBIT: One sample bit method enable
    const uint32_t USART2_CR3_ONEBIT = 1U << 11 ;

  // Field CTSIE: CTS interrupt enable
    const uint32_t USART2_CR3_CTSIE = 1U << 10 ;

  // Field CTSE: CTS enable
    const uint32_t USART2_CR3_CTSE = 1U << 9 ;

  // Field RTSE: RTS enable
    const uint32_t USART2_CR3_RTSE = 1U << 8 ;

  // Field DMAT: DMA enable transmitter
    const uint32_t USART2_CR3_DMAT = 1U << 7 ;

  // Field DMAR: DMA enable receiver
    const uint32_t USART2_CR3_DMAR = 1U << 6 ;

  // Field SCEN: Smartcard mode enable
    const uint32_t USART2_CR3_SCEN = 1U << 5 ;

  // Field NACK: Smartcard NACK enable
    const uint32_t USART2_CR3_NACK = 1U << 4 ;

  // Field HDSEL: Half-duplex selection
    const uint32_t USART2_CR3_HDSEL = 1U << 3 ;

  // Field IRLP: Ir low-power
    const uint32_t USART2_CR3_IRLP = 1U << 2 ;

  // Field IREN: Ir mode enable
    const uint32_t USART2_CR3_IREN = 1U << 1 ;

  // Field EIE: Error interrupt enable
    const uint32_t USART2_CR3_EIE = 1U << 0 ;

//---  Register BRR: Baud rate register
  #define USART2_BRR (* ((volatile uint32_t *) (0x40004400 + 12)))

  // Field DIV_Mantissa: DIV_Mantissa
    inline uint32_t USART2_BRR_DIV_Mantissa (const uint32_t inValue) {return (inValue & 0xfffU) << 4 ; }

  // Field DIV_Fraction: DIV_Fraction
    inline uint32_t USART2_BRR_DIV_Fraction (const uint32_t inValue) {return (inValue & 0xfU) << 0 ; }

//---  Register GTPR: Guard time and prescaler
          register
  #define USART2_GTPR (* ((volatile uint32_t *) (0x40004400 + 16)))

  // Field GT: Guard time value
    inline uint32_t USART2_GTPR_GT (const uint32_t inValue) {return (inValue & 0xffU) << 8 ; }

  // Field PSC: Prescaler value
    inline uint32_t USART2_GTPR_PSC (const uint32_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register RTOR: Receiver timeout register
  #define USART2_RTOR (* ((volatile uint32_t *) (0x40004400 + 20)))

  // Field BLEN: Block Length
    inline uint32_t USART2_RTOR_BLEN (const uint32_t inValue) {return (inValue & 0xffU) << 24 ; }

  // Field RTO: Receiver timeout value
    inline uint32_t USART2_RTOR_RTO (const uint32_t inValue) {return (inValue & 0xffffffU) << 0 ; }

//---  Register RQR: Request register
  #define USART2_RQR (* ((volatile uint32_t *) (0x40004400 + 24)))

  // Field TXFRQ: Transmit data flush request
    const uint32_t USART2_RQR_TXFRQ = 1U << 4 ;

  // Field RXFRQ: Receive data flush request
    const uint32_t USART2_RQR_RXFRQ = 1U << 3 ;

  // Field MMRQ: Mute mode request
    const uint32_t USART2_RQR_MMRQ = 1U << 2 ;

  // Field SBKRQ: Send break request
    const uint32_t USART2_RQR_SBKRQ = 1U << 1 ;

  // Field ABRRQ: Auto baud rate request
    const uint32_t USART2_RQR_ABRRQ = 1U << 0 ;

//---  Register ISR: Interrupt & status
          register
  #define USART2_ISR (* ((const volatile uint32_t *) (0x40004400 + 28)))

  // Field REACK: REACK
    const uint32_t USART2_ISR_REACK = 1U << 22 ;

  // Field TEACK: TEACK
    const uint32_t USART2_ISR_TEACK = 1U << 21 ;

  // Field WUF: WUF
    const uint32_t USART2_ISR_WUF = 1U << 20 ;

  // Field RWU: RWU
    const uint32_t USART2_ISR_RWU = 1U << 19 ;

  // Field SBKF: SBKF
    const uint32_t USART2_ISR_SBKF = 1U << 18 ;

  // Field CMF: CMF
    const uint32_t USART2_ISR_CMF = 1U << 17 ;

  // Field BUSY: BUSY
    const uint32_t USART2_ISR_BUSY = 1U << 16 ;

  // Field ABRF: ABRF
    const uint32_t USART2_ISR_ABRF = 1U << 15 ;

  // Field ABRE: ABRE
    const uint32_t USART2_ISR_ABRE = 1U << 14 ;

  // Field EOBF: EOBF
    const uint32_t USART2_ISR_EOBF = 1U << 12 ;

  // Field RTOF: RTOF
    const uint32_t USART2_ISR_RTOF = 1U << 11 ;

  // Field CTS: CTS
    const uint32_t USART2_ISR_CTS = 1U << 10 ;

  // Field CTSIF: CTSIF
    const uint32_t USART2_ISR_CTSIF = 1U << 9 ;

  // Field LBDF: LBDF
    const uint32_t USART2_ISR_LBDF = 1U << 8 ;

  // Field TXE: TXE
    const uint32_t USART2_ISR_TXE = 1U << 7 ;

  // Field TC: TC
    const uint32_t USART2_ISR_TC = 1U << 6 ;

  // Field RXNE: RXNE
    const uint32_t USART2_ISR_RXNE = 1U << 5 ;

  // Field IDLE: IDLE
    const uint32_t USART2_ISR_IDLE = 1U << 4 ;

  // Field ORE: ORE
    const uint32_t USART2_ISR_ORE = 1U << 3 ;

  // Field NF: NF
    const uint32_t USART2_ISR_NF = 1U << 2 ;

  // Field FE: FE
    const uint32_t USART2_ISR_FE = 1U << 1 ;

  // Field PE: PE
    const uint32_t USART2_ISR_PE = 1U << 0 ;

//---  Register ICR: Interrupt flag clear register
  #define USART2_ICR (* ((volatile uint32_t *) (0x40004400 + 32)))

  // Field WUCF: Wakeup from Stop mode clear flag
    const uint32_t USART2_ICR_WUCF = 1U << 20 ;

  // Field CMCF: Character match clear flag
    const uint32_t USART2_ICR_CMCF = 1U << 17 ;

  // Field EOBCF: End of block clear flag
    const uint32_t USART2_ICR_EOBCF = 1U << 12 ;

  // Field RTOCF: Receiver timeout clear flag
    const uint32_t USART2_ICR_RTOCF = 1U << 11 ;

  // Field CTSCF: CTS clear flag
    const uint32_t USART2_ICR_CTSCF = 1U << 9 ;

  // Field LBDCF: LIN break detection clear flag
    const uint32_t USART2_ICR_LBDCF = 1U << 8 ;

  // Field TCCF: Transmission complete clear flag
    const uint32_t USART2_ICR_TCCF = 1U << 6 ;

  // Field IDLECF: Idle line detected clear flag
    const uint32_t USART2_ICR_IDLECF = 1U << 4 ;

  // Field ORECF: Overrun error clear flag
    const uint32_t USART2_ICR_ORECF = 1U << 3 ;

  // Field NCF: Noise detected clear flag
    const uint32_t USART2_ICR_NCF = 1U << 2 ;

  // Field FECF: Framing error clear flag
    const uint32_t USART2_ICR_FECF = 1U << 1 ;

  // Field PECF: Parity error clear flag
    const uint32_t USART2_ICR_PECF = 1U << 0 ;

//---  Register RDR: Receive data register
  #define USART2_RDR (* ((const volatile uint32_t *) (0x40004400 + 36)))

  // Field RDR: Receive data value
    inline uint32_t USART2_RDR_RDR (const uint32_t inValue) {return (inValue & 0x1ffU) << 0 ; }

//---  Register TDR: Transmit data register
  #define USART2_TDR (* ((volatile uint32_t *) (0x40004400 + 40)))

  // Field TDR: Transmit data value
    inline uint32_t USART2_TDR_TDR (const uint32_t inValue) {return (inValue & 0x1ffU) << 0 ; }

//------------------------------------------------------------------------------
// Peripheral USART3: Universal synchronous asynchronous receiver       transmitter
//------------------------------------------------------------------------------

//---  Register CR1: Control register 1
  #define USART3_CR1 (* ((volatile uint32_t *) (0x40004800 + 0)))

  // Field M1: Word length
    const uint32_t USART3_CR1_M1 = 1U << 28 ;

  // Field EOBIE: End of Block interrupt enable
    const uint32_t USART3_CR1_EOBIE = 1U << 27 ;

  // Field RTOIE: Receiver timeout interrupt enable
    const uint32_t USART3_CR1_RTOIE = 1U << 26 ;

  // Field DEAT4: Driver Enable assertion time
    const uint32_t USART3_CR1_DEAT4 = 1U << 25 ;

  // Field DEAT3: DEAT3
    const uint32_t USART3_CR1_DEAT3 = 1U << 24 ;

  // Field DEAT2: DEAT2
    const uint32_t USART3_CR1_DEAT2 = 1U << 23 ;

  // Field DEAT1: DEAT1
    const uint32_t USART3_CR1_DEAT1 = 1U << 22 ;

  // Field DEAT0: DEAT0
    const uint32_t USART3_CR1_DEAT0 = 1U << 21 ;

  // Field DEDT4: Driver Enable de-assertion time
    const uint32_t USART3_CR1_DEDT4 = 1U << 20 ;

  // Field DEDT3: DEDT3
    const uint32_t USART3_CR1_DEDT3 = 1U << 19 ;

  // Field DEDT2: DEDT2
    const uint32_t USART3_CR1_DEDT2 = 1U << 18 ;

  // Field DEDT1: DEDT1
    const uint32_t USART3_CR1_DEDT1 = 1U << 17 ;

  // Field DEDT0: DEDT0
    const uint32_t USART3_CR1_DEDT0 = 1U << 16 ;

  // Field OVER8: Oversampling mode
    const uint32_t USART3_CR1_OVER8 = 1U << 15 ;

  // Field CMIE: Character match interrupt enable
    const uint32_t USART3_CR1_CMIE = 1U << 14 ;

  // Field MME: Mute mode enable
    const uint32_t USART3_CR1_MME = 1U << 13 ;

  // Field M0: Word length
    const uint32_t USART3_CR1_M0 = 1U << 12 ;

  // Field WAKE: Receiver wakeup method
    const uint32_t USART3_CR1_WAKE = 1U << 11 ;

  // Field PCE: Parity control enable
    const uint32_t USART3_CR1_PCE = 1U << 10 ;

  // Field PS: Parity selection
    const uint32_t USART3_CR1_PS = 1U << 9 ;

  // Field PEIE: PE interrupt enable
    const uint32_t USART3_CR1_PEIE = 1U << 8 ;

  // Field TXEIE: interrupt enable
    const uint32_t USART3_CR1_TXEIE = 1U << 7 ;

  // Field TCIE: Transmission complete interrupt enable
    const uint32_t USART3_CR1_TCIE = 1U << 6 ;

  // Field RXNEIE: RXNE interrupt enable
    const uint32_t USART3_CR1_RXNEIE = 1U << 5 ;

  // Field IDLEIE: IDLE interrupt enable
    const uint32_t USART3_CR1_IDLEIE = 1U << 4 ;

  // Field TE: Transmitter enable
    const uint32_t USART3_CR1_TE = 1U << 3 ;

  // Field RE: Receiver enable
    const uint32_t USART3_CR1_RE = 1U << 2 ;

  // Field UESM: USART enable in Stop mode
    const uint32_t USART3_CR1_UESM = 1U << 1 ;

  // Field UE: USART enable
    const uint32_t USART3_CR1_UE = 1U << 0 ;

//---  Register CR2: Control register 2
  #define USART3_CR2 (* ((volatile uint32_t *) (0x40004800 + 4)))

  // Field ADD4_7: Address of the USART node
    inline uint32_t USART3_CR2_ADD4_7 (const uint32_t inValue) {return (inValue & 0xfU) << 28 ; }

  // Field ADD0_3: Address of the USART node
    inline uint32_t USART3_CR2_ADD0_3 (const uint32_t inValue) {return (inValue & 0xfU) << 24 ; }

  // Field RTOEN: Receiver timeout enable
    const uint32_t USART3_CR2_RTOEN = 1U << 23 ;

  // Field ABRMOD1: Auto baud rate mode
    const uint32_t USART3_CR2_ABRMOD1 = 1U << 22 ;

  // Field ABRMOD0: ABRMOD0
    const uint32_t USART3_CR2_ABRMOD0 = 1U << 21 ;

  // Field ABREN: Auto baud rate enable
    const uint32_t USART3_CR2_ABREN = 1U << 20 ;

  // Field MSBFIRST: Most significant bit first
    const uint32_t USART3_CR2_MSBFIRST = 1U << 19 ;

  // Field TAINV: Binary data inversion
    const uint32_t USART3_CR2_TAINV = 1U << 18 ;

  // Field TXINV: TX pin active level inversion
    const uint32_t USART3_CR2_TXINV = 1U << 17 ;

  // Field RXINV: RX pin active level inversion
    const uint32_t USART3_CR2_RXINV = 1U << 16 ;

  // Field SWAP: Swap TX/RX pins
    const uint32_t USART3_CR2_SWAP = 1U << 15 ;

  // Field LINEN: LIN mode enable
    const uint32_t USART3_CR2_LINEN = 1U << 14 ;

  // Field STOP: STOP bits
    inline uint32_t USART3_CR2_STOP (const uint32_t inValue) {return (inValue & 0x3U) << 12 ; }

  // Field CLKEN: Clock enable
    const uint32_t USART3_CR2_CLKEN = 1U << 11 ;

  // Field CPOL: Clock polarity
    const uint32_t USART3_CR2_CPOL = 1U << 10 ;

  // Field CPHA: Clock phase
    const uint32_t USART3_CR2_CPHA = 1U << 9 ;

  // Field LBCL: Last bit clock pulse
    const uint32_t USART3_CR2_LBCL = 1U << 8 ;

  // Field LBDIE: LIN break detection interrupt enable
    const uint32_t USART3_CR2_LBDIE = 1U << 6 ;

  // Field LBDL: LIN break detection length
    const uint32_t USART3_CR2_LBDL = 1U << 5 ;

  // Field ADDM7: 7-bit Address Detection/4-bit Address Detection
    const uint32_t USART3_CR2_ADDM7 = 1U << 4 ;

//---  Register CR3: Control register 3
  #define USART3_CR3 (* ((volatile uint32_t *) (0x40004800 + 8)))

  // Field WUFIE: Wakeup from Stop mode interrupt enable
    const uint32_t USART3_CR3_WUFIE = 1U << 22 ;

  // Field WUS: Wakeup from Stop mode interrupt flag selection
    inline uint32_t USART3_CR3_WUS (const uint32_t inValue) {return (inValue & 0x3U) << 20 ; }

  // Field SCARCNT: Smartcard auto-retry count
    inline uint32_t USART3_CR3_SCARCNT (const uint32_t inValue) {return (inValue & 0x7U) << 17 ; }

  // Field DEP: Driver enable polarity selection
    const uint32_t USART3_CR3_DEP = 1U << 15 ;

  // Field DEM: Driver enable mode
    const uint32_t USART3_CR3_DEM = 1U << 14 ;

  // Field DDRE: DMA Disable on Reception Error
    const uint32_t USART3_CR3_DDRE = 1U << 13 ;

  // Field OVRDIS: Overrun Disable
    const uint32_t USART3_CR3_OVRDIS = 1U << 12 ;

  // Field ONEBIT: One sample bit method enable
    const uint32_t USART3_CR3_ONEBIT = 1U << 11 ;

  // Field CTSIE: CTS interrupt enable
    const uint32_t USART3_CR3_CTSIE = 1U << 10 ;

  // Field CTSE: CTS enable
    const uint32_t USART3_CR3_CTSE = 1U << 9 ;

  // Field RTSE: RTS enable
    const uint32_t USART3_CR3_RTSE = 1U << 8 ;

  // Field DMAT: DMA enable transmitter
    const uint32_t USART3_CR3_DMAT = 1U << 7 ;

  // Field DMAR: DMA enable receiver
    const uint32_t USART3_CR3_DMAR = 1U << 6 ;

  // Field SCEN: Smartcard mode enable
    const uint32_t USART3_CR3_SCEN = 1U << 5 ;

  // Field NACK: Smartcard NACK enable
    const uint32_t USART3_CR3_NACK = 1U << 4 ;

  // Field HDSEL: Half-duplex selection
    const uint32_t USART3_CR3_HDSEL = 1U << 3 ;

  // Field IRLP: Ir low-power
    const uint32_t USART3_CR3_IRLP = 1U << 2 ;

  // Field IREN: Ir mode enable
    const uint32_t USART3_CR3_IREN = 1U << 1 ;

  // Field EIE: Error interrupt enable
    const uint32_t USART3_CR3_EIE = 1U << 0 ;

  // Field UCESM: USART Clock Enable in Stop mode
    const uint32_t USART3_CR3_UCESM = 1U << 23 ;

  // Field TCBGTIE: Transmission complete before guard time interrupt enable
    const uint32_t USART3_CR3_TCBGTIE = 1U << 24 ;

//---  Register BRR: Baud rate register
  #define USART3_BRR (* ((volatile uint32_t *) (0x40004800 + 12)))

  // Field BRR: USARTDIV
    inline uint32_t USART3_BRR_BRR (const uint32_t inValue) {return (inValue & 0xfffU) << 0 ; }

//---  Register GTPR: Guard time and prescaler
          register
  #define USART3_GTPR (* ((volatile uint32_t *) (0x40004800 + 16)))

  // Field GT: Guard time value
    inline uint32_t USART3_GTPR_GT (const uint32_t inValue) {return (inValue & 0xffU) << 8 ; }

  // Field PSC: Prescaler value
    inline uint32_t USART3_GTPR_PSC (const uint32_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register RTOR: Receiver timeout register
  #define USART3_RTOR (* ((volatile uint32_t *) (0x40004800 + 20)))

  // Field BLEN: Block Length
    inline uint32_t USART3_RTOR_BLEN (const uint32_t inValue) {return (inValue & 0xffU) << 24 ; }

  // Field RTO: Receiver timeout value
    inline uint32_t USART3_RTOR_RTO (const uint32_t inValue) {return (inValue & 0xffffffU) << 0 ; }

//---  Register RQR: Request register
  #define USART3_RQR (* ((volatile uint32_t *) (0x40004800 + 24)))

  // Field TXFRQ: Transmit data flush request
    const uint32_t USART3_RQR_TXFRQ = 1U << 4 ;

  // Field RXFRQ: Receive data flush request
    const uint32_t USART3_RQR_RXFRQ = 1U << 3 ;

  // Field MMRQ: Mute mode request
    const uint32_t USART3_RQR_MMRQ = 1U << 2 ;

  // Field SBKRQ: Send break request
    const uint32_t USART3_RQR_SBKRQ = 1U << 1 ;

  // Field ABRRQ: Auto baud rate request
    const uint32_t USART3_RQR_ABRRQ = 1U << 0 ;

//---  Register ISR: Interrupt & status
          register
  #define USART3_ISR (* ((const volatile uint32_t *) (0x40004800 + 28)))

  // Field REACK: REACK
    const uint32_t USART3_ISR_REACK = 1U << 22 ;

  // Field TEACK: TEACK
    const uint32_t USART3_ISR_TEACK = 1U << 21 ;

  // Field WUF: WUF
    const uint32_t USART3_ISR_WUF = 1U << 20 ;

  // Field RWU: RWU
    const uint32_t USART3_ISR_RWU = 1U << 19 ;

  // Field SBKF: SBKF
    const uint32_t USART3_ISR_SBKF = 1U << 18 ;

  // Field CMF: CMF
    const uint32_t USART3_ISR_CMF = 1U << 17 ;

  // Field BUSY: BUSY
    const uint32_t USART3_ISR_BUSY = 1U << 16 ;

  // Field ABRF: ABRF
    const uint32_t USART3_ISR_ABRF = 1U << 15 ;

  // Field ABRE: ABRE
    const uint32_t USART3_ISR_ABRE = 1U << 14 ;

  // Field EOBF: EOBF
    const uint32_t USART3_ISR_EOBF = 1U << 12 ;

  // Field RTOF: RTOF
    const uint32_t USART3_ISR_RTOF = 1U << 11 ;

  // Field CTS: CTS
    const uint32_t USART3_ISR_CTS = 1U << 10 ;

  // Field CTSIF: CTSIF
    const uint32_t USART3_ISR_CTSIF = 1U << 9 ;

  // Field LBDF: LBDF
    const uint32_t USART3_ISR_LBDF = 1U << 8 ;

  // Field TXE: TXE
    const uint32_t USART3_ISR_TXE = 1U << 7 ;

  // Field TC: TC
    const uint32_t USART3_ISR_TC = 1U << 6 ;

  // Field RXNE: RXNE
    const uint32_t USART3_ISR_RXNE = 1U << 5 ;

  // Field IDLE: IDLE
    const uint32_t USART3_ISR_IDLE = 1U << 4 ;

  // Field ORE: ORE
    const uint32_t USART3_ISR_ORE = 1U << 3 ;

  // Field NF: NF
    const uint32_t USART3_ISR_NF = 1U << 2 ;

  // Field FE: FE
    const uint32_t USART3_ISR_FE = 1U << 1 ;

  // Field PE: PE
    const uint32_t USART3_ISR_PE = 1U << 0 ;

  // Field TCBGT: Transmission complete before guard time completion
    const uint32_t USART3_ISR_TCBGT = 1U << 25 ;

//---  Register ICR: Interrupt flag clear register
  #define USART3_ICR (* ((volatile uint32_t *) (0x40004800 + 32)))

  // Field WUCF: Wakeup from Stop mode clear flag
    const uint32_t USART3_ICR_WUCF = 1U << 20 ;

  // Field CMCF: Character match clear flag
    const uint32_t USART3_ICR_CMCF = 1U << 17 ;

  // Field EOBCF: End of block clear flag
    const uint32_t USART3_ICR_EOBCF = 1U << 12 ;

  // Field RTOCF: Receiver timeout clear flag
    const uint32_t USART3_ICR_RTOCF = 1U << 11 ;

  // Field CTSCF: CTS clear flag
    const uint32_t USART3_ICR_CTSCF = 1U << 9 ;

  // Field LBDCF: LIN break detection clear flag
    const uint32_t USART3_ICR_LBDCF = 1U << 8 ;

  // Field TCCF: Transmission complete clear flag
    const uint32_t USART3_ICR_TCCF = 1U << 6 ;

  // Field IDLECF: Idle line detected clear flag
    const uint32_t USART3_ICR_IDLECF = 1U << 4 ;

  // Field ORECF: Overrun error clear flag
    const uint32_t USART3_ICR_ORECF = 1U << 3 ;

  // Field NCF: Noise detected clear flag
    const uint32_t USART3_ICR_NCF = 1U << 2 ;

  // Field FECF: Framing error clear flag
    const uint32_t USART3_ICR_FECF = 1U << 1 ;

  // Field PECF: Parity error clear flag
    const uint32_t USART3_ICR_PECF = 1U << 0 ;

//---  Register RDR: Receive data register
  #define USART3_RDR (* ((const volatile uint32_t *) (0x40004800 + 36)))

  // Field RDR: Receive data value
    inline uint32_t USART3_RDR_RDR (const uint32_t inValue) {return (inValue & 0x1ffU) << 0 ; }

//---  Register TDR: Transmit data register
  #define USART3_TDR (* ((volatile uint32_t *) (0x40004800 + 40)))

  // Field TDR: Transmit data value
    inline uint32_t USART3_TDR_TDR (const uint32_t inValue) {return (inValue & 0x1ffU) << 0 ; }

//------------------------------------------------------------------------------
// Peripheral USB_FS
//------------------------------------------------------------------------------

//---  Register EP0R: endpoint 0 register
  #define USB_FS_EP0R (* ((volatile uint32_t *) (0x40006800 + 0)))

  // Field EA: Endpoint address
    inline uint32_t USB_FS_EP0R_EA (const uint32_t inValue) {return (inValue & 0xfU) << 0 ; }

  // Field STAT_TX: Status bits, for transmission transfers
    inline uint32_t USB_FS_EP0R_STAT_TX (const uint32_t inValue) {return (inValue & 0x3U) << 4 ; }

  // Field DTOG_TX: Data Toggle, for transmission transfers
    const uint32_t USB_FS_EP0R_DTOG_TX = 1U << 6 ;

  // Field CTR_TX: Correct Transfer for transmission
    const uint32_t USB_FS_EP0R_CTR_TX = 1U << 7 ;

  // Field EP_KIND: Endpoint kind
    const uint32_t USB_FS_EP0R_EP_KIND = 1U << 8 ;

  // Field EP_TYPE: Endpoint type
    inline uint32_t USB_FS_EP0R_EP_TYPE (const uint32_t inValue) {return (inValue & 0x3U) << 9 ; }

  // Field SETUP: Setup transaction completed
    const uint32_t USB_FS_EP0R_SETUP = 1U << 11 ;

  // Field STAT_RX: Status bits, for reception transfers
    inline uint32_t USB_FS_EP0R_STAT_RX (const uint32_t inValue) {return (inValue & 0x3U) << 12 ; }

  // Field DTOG_RX: Data Toggle, for reception transfers
    const uint32_t USB_FS_EP0R_DTOG_RX = 1U << 14 ;

  // Field CTR_RX: Correct transfer for reception
    const uint32_t USB_FS_EP0R_CTR_RX = 1U << 15 ;

//---  Register EP1R: endpoint 1 register
  #define USB_FS_EP1R (* ((volatile uint32_t *) (0x40006800 + 4)))

  // Field EA: Endpoint address
    inline uint32_t USB_FS_EP1R_EA (const uint32_t inValue) {return (inValue & 0xfU) << 0 ; }

  // Field STAT_TX: Status bits, for transmission transfers
    inline uint32_t USB_FS_EP1R_STAT_TX (const uint32_t inValue) {return (inValue & 0x3U) << 4 ; }

  // Field DTOG_TX: Data Toggle, for transmission transfers
    const uint32_t USB_FS_EP1R_DTOG_TX = 1U << 6 ;

  // Field CTR_TX: Correct Transfer for transmission
    const uint32_t USB_FS_EP1R_CTR_TX = 1U << 7 ;

  // Field EP_KIND: Endpoint kind
    const uint32_t USB_FS_EP1R_EP_KIND = 1U << 8 ;

  // Field EP_TYPE: Endpoint type
    inline uint32_t USB_FS_EP1R_EP_TYPE (const uint32_t inValue) {return (inValue & 0x3U) << 9 ; }

  // Field SETUP: Setup transaction completed
    const uint32_t USB_FS_EP1R_SETUP = 1U << 11 ;

  // Field STAT_RX: Status bits, for reception transfers
    inline uint32_t USB_FS_EP1R_STAT_RX (const uint32_t inValue) {return (inValue & 0x3U) << 12 ; }

  // Field DTOG_RX: Data Toggle, for reception transfers
    const uint32_t USB_FS_EP1R_DTOG_RX = 1U << 14 ;

  // Field CTR_RX: Correct transfer for reception
    const uint32_t USB_FS_EP1R_CTR_RX = 1U << 15 ;

//---  Register EP2R: endpoint 2 register
  #define USB_FS_EP2R (* ((volatile uint32_t *) (0x40006800 + 8)))

  // Field EA: Endpoint address
    inline uint32_t USB_FS_EP2R_EA (const uint32_t inValue) {return (inValue & 0xfU) << 0 ; }

  // Field STAT_TX: Status bits, for transmission transfers
    inline uint32_t USB_FS_EP2R_STAT_TX (const uint32_t inValue) {return (inValue & 0x3U) << 4 ; }

  // Field DTOG_TX: Data Toggle, for transmission transfers
    const uint32_t USB_FS_EP2R_DTOG_TX = 1U << 6 ;

  // Field CTR_TX: Correct Transfer for transmission
    const uint32_t USB_FS_EP2R_CTR_TX = 1U << 7 ;

  // Field EP_KIND: Endpoint kind
    const uint32_t USB_FS_EP2R_EP_KIND = 1U << 8 ;

  // Field EP_TYPE: Endpoint type
    inline uint32_t USB_FS_EP2R_EP_TYPE (const uint32_t inValue) {return (inValue & 0x3U) << 9 ; }

  // Field SETUP: Setup transaction completed
    const uint32_t USB_FS_EP2R_SETUP = 1U << 11 ;

  // Field STAT_RX: Status bits, for reception transfers
    inline uint32_t USB_FS_EP2R_STAT_RX (const uint32_t inValue) {return (inValue & 0x3U) << 12 ; }

  // Field DTOG_RX: Data Toggle, for reception transfers
    const uint32_t USB_FS_EP2R_DTOG_RX = 1U << 14 ;

  // Field CTR_RX: Correct transfer for reception
    const uint32_t USB_FS_EP2R_CTR_RX = 1U << 15 ;

//---  Register EP3R: endpoint 3 register
  #define USB_FS_EP3R (* ((volatile uint32_t *) (0x40006800 + 12)))

  // Field EA: Endpoint address
    inline uint32_t USB_FS_EP3R_EA (const uint32_t inValue) {return (inValue & 0xfU) << 0 ; }

  // Field STAT_TX: Status bits, for transmission transfers
    inline uint32_t USB_FS_EP3R_STAT_TX (const uint32_t inValue) {return (inValue & 0x3U) << 4 ; }

  // Field DTOG_TX: Data Toggle, for transmission transfers
    const uint32_t USB_FS_EP3R_DTOG_TX = 1U << 6 ;

  // Field CTR_TX: Correct Transfer for transmission
    const uint32_t USB_FS_EP3R_CTR_TX = 1U << 7 ;

  // Field EP_KIND: Endpoint kind
    const uint32_t USB_FS_EP3R_EP_KIND = 1U << 8 ;

  // Field EP_TYPE: Endpoint type
    inline uint32_t USB_FS_EP3R_EP_TYPE (const uint32_t inValue) {return (inValue & 0x3U) << 9 ; }

  // Field SETUP: Setup transaction completed
    const uint32_t USB_FS_EP3R_SETUP = 1U << 11 ;

  // Field STAT_RX: Status bits, for reception transfers
    inline uint32_t USB_FS_EP3R_STAT_RX (const uint32_t inValue) {return (inValue & 0x3U) << 12 ; }

  // Field DTOG_RX: Data Toggle, for reception transfers
    const uint32_t USB_FS_EP3R_DTOG_RX = 1U << 14 ;

  // Field CTR_RX: Correct transfer for reception
    const uint32_t USB_FS_EP3R_CTR_RX = 1U << 15 ;

//---  Register EP4R: endpoint 4 register
  #define USB_FS_EP4R (* ((volatile uint32_t *) (0x40006800 + 16)))

  // Field EA: Endpoint address
    inline uint32_t USB_FS_EP4R_EA (const uint32_t inValue) {return (inValue & 0xfU) << 0 ; }

  // Field STAT_TX: Status bits, for transmission transfers
    inline uint32_t USB_FS_EP4R_STAT_TX (const uint32_t inValue) {return (inValue & 0x3U) << 4 ; }

  // Field DTOG_TX: Data Toggle, for transmission transfers
    const uint32_t USB_FS_EP4R_DTOG_TX = 1U << 6 ;

  // Field CTR_TX: Correct Transfer for transmission
    const uint32_t USB_FS_EP4R_CTR_TX = 1U << 7 ;

  // Field EP_KIND: Endpoint kind
    const uint32_t USB_FS_EP4R_EP_KIND = 1U << 8 ;

  // Field EP_TYPE: Endpoint type
    inline uint32_t USB_FS_EP4R_EP_TYPE (const uint32_t inValue) {return (inValue & 0x3U) << 9 ; }

  // Field SETUP: Setup transaction completed
    const uint32_t USB_FS_EP4R_SETUP = 1U << 11 ;

  // Field STAT_RX: Status bits, for reception transfers
    inline uint32_t USB_FS_EP4R_STAT_RX (const uint32_t inValue) {return (inValue & 0x3U) << 12 ; }

  // Field DTOG_RX: Data Toggle, for reception transfers
    const uint32_t USB_FS_EP4R_DTOG_RX = 1U << 14 ;

  // Field CTR_RX: Correct transfer for reception
    const uint32_t USB_FS_EP4R_CTR_RX = 1U << 15 ;

//---  Register EP5R: endpoint 5 register
  #define USB_FS_EP5R (* ((volatile uint32_t *) (0x40006800 + 20)))

  // Field EA: Endpoint address
    inline uint32_t USB_FS_EP5R_EA (const uint32_t inValue) {return (inValue & 0xfU) << 0 ; }

  // Field STAT_TX: Status bits, for transmission transfers
    inline uint32_t USB_FS_EP5R_STAT_TX (const uint32_t inValue) {return (inValue & 0x3U) << 4 ; }

  // Field DTOG_TX: Data Toggle, for transmission transfers
    const uint32_t USB_FS_EP5R_DTOG_TX = 1U << 6 ;

  // Field CTR_TX: Correct Transfer for transmission
    const uint32_t USB_FS_EP5R_CTR_TX = 1U << 7 ;

  // Field EP_KIND: Endpoint kind
    const uint32_t USB_FS_EP5R_EP_KIND = 1U << 8 ;

  // Field EP_TYPE: Endpoint type
    inline uint32_t USB_FS_EP5R_EP_TYPE (const uint32_t inValue) {return (inValue & 0x3U) << 9 ; }

  // Field SETUP: Setup transaction completed
    const uint32_t USB_FS_EP5R_SETUP = 1U << 11 ;

  // Field STAT_RX: Status bits, for reception transfers
    inline uint32_t USB_FS_EP5R_STAT_RX (const uint32_t inValue) {return (inValue & 0x3U) << 12 ; }

  // Field DTOG_RX: Data Toggle, for reception transfers
    const uint32_t USB_FS_EP5R_DTOG_RX = 1U << 14 ;

  // Field CTR_RX: Correct transfer for reception
    const uint32_t USB_FS_EP5R_CTR_RX = 1U << 15 ;

//---  Register EP6R: endpoint 6 register
  #define USB_FS_EP6R (* ((volatile uint32_t *) (0x40006800 + 24)))

  // Field EA: Endpoint address
    inline uint32_t USB_FS_EP6R_EA (const uint32_t inValue) {return (inValue & 0xfU) << 0 ; }

  // Field STAT_TX: Status bits, for transmission transfers
    inline uint32_t USB_FS_EP6R_STAT_TX (const uint32_t inValue) {return (inValue & 0x3U) << 4 ; }

  // Field DTOG_TX: Data Toggle, for transmission transfers
    const uint32_t USB_FS_EP6R_DTOG_TX = 1U << 6 ;

  // Field CTR_TX: Correct Transfer for transmission
    const uint32_t USB_FS_EP6R_CTR_TX = 1U << 7 ;

  // Field EP_KIND: Endpoint kind
    const uint32_t USB_FS_EP6R_EP_KIND = 1U << 8 ;

  // Field EP_TYPE: Endpoint type
    inline uint32_t USB_FS_EP6R_EP_TYPE (const uint32_t inValue) {return (inValue & 0x3U) << 9 ; }

  // Field SETUP: Setup transaction completed
    const uint32_t USB_FS_EP6R_SETUP = 1U << 11 ;

  // Field STAT_RX: Status bits, for reception transfers
    inline uint32_t USB_FS_EP6R_STAT_RX (const uint32_t inValue) {return (inValue & 0x3U) << 12 ; }

  // Field DTOG_RX: Data Toggle, for reception transfers
    const uint32_t USB_FS_EP6R_DTOG_RX = 1U << 14 ;

  // Field CTR_RX: Correct transfer for reception
    const uint32_t USB_FS_EP6R_CTR_RX = 1U << 15 ;

//---  Register EP7R: endpoint 7 register
  #define USB_FS_EP7R (* ((volatile uint32_t *) (0x40006800 + 28)))

  // Field EA: Endpoint address
    inline uint32_t USB_FS_EP7R_EA (const uint32_t inValue) {return (inValue & 0xfU) << 0 ; }

  // Field STAT_TX: Status bits, for transmission transfers
    inline uint32_t USB_FS_EP7R_STAT_TX (const uint32_t inValue) {return (inValue & 0x3U) << 4 ; }

  // Field DTOG_TX: Data Toggle, for transmission transfers
    const uint32_t USB_FS_EP7R_DTOG_TX = 1U << 6 ;

  // Field CTR_TX: Correct Transfer for transmission
    const uint32_t USB_FS_EP7R_CTR_TX = 1U << 7 ;

  // Field EP_KIND: Endpoint kind
    const uint32_t USB_FS_EP7R_EP_KIND = 1U << 8 ;

  // Field EP_TYPE: Endpoint type
    inline uint32_t USB_FS_EP7R_EP_TYPE (const uint32_t inValue) {return (inValue & 0x3U) << 9 ; }

  // Field SETUP: Setup transaction completed
    const uint32_t USB_FS_EP7R_SETUP = 1U << 11 ;

  // Field STAT_RX: Status bits, for reception transfers
    inline uint32_t USB_FS_EP7R_STAT_RX (const uint32_t inValue) {return (inValue & 0x3U) << 12 ; }

  // Field DTOG_RX: Data Toggle, for reception transfers
    const uint32_t USB_FS_EP7R_DTOG_RX = 1U << 14 ;

  // Field CTR_RX: Correct transfer for reception
    const uint32_t USB_FS_EP7R_CTR_RX = 1U << 15 ;

//---  Register CNTR: control register
  #define USB_FS_CNTR (* ((volatile uint32_t *) (0x40006800 + 64)))

  // Field FRES: Force USB Reset
    const uint32_t USB_FS_CNTR_FRES = 1U << 0 ;

  // Field PDWN: Power down
    const uint32_t USB_FS_CNTR_PDWN = 1U << 1 ;

  // Field LPMODE: Low-power mode
    const uint32_t USB_FS_CNTR_LPMODE = 1U << 2 ;

  // Field FSUSP: Force suspend
    const uint32_t USB_FS_CNTR_FSUSP = 1U << 3 ;

  // Field RESUME: Resume request
    const uint32_t USB_FS_CNTR_RESUME = 1U << 4 ;

  // Field L1RESUME: LPM L1 Resume request
    const uint32_t USB_FS_CNTR_L1RESUME = 1U << 5 ;

  // Field L1REQM: LPM L1 state request interrupt mask
    const uint32_t USB_FS_CNTR_L1REQM = 1U << 7 ;

  // Field ESOFM: Expected start of frame interrupt mask
    const uint32_t USB_FS_CNTR_ESOFM = 1U << 8 ;

  // Field SOFM: Start of frame interrupt mask
    const uint32_t USB_FS_CNTR_SOFM = 1U << 9 ;

  // Field RESETM: USB reset interrupt mask
    const uint32_t USB_FS_CNTR_RESETM = 1U << 10 ;

  // Field SUSPM: Suspend mode interrupt mask
    const uint32_t USB_FS_CNTR_SUSPM = 1U << 11 ;

  // Field WKUPM: Wakeup interrupt mask
    const uint32_t USB_FS_CNTR_WKUPM = 1U << 12 ;

  // Field ERRM: Error interrupt mask
    const uint32_t USB_FS_CNTR_ERRM = 1U << 13 ;

  // Field PMAOVRM: Packet memory area over / underrun interrupt mask
    const uint32_t USB_FS_CNTR_PMAOVRM = 1U << 14 ;

  // Field CTRM: Correct transfer interrupt mask
    const uint32_t USB_FS_CNTR_CTRM = 1U << 15 ;

//---  Register ISTR: interrupt status register
  #define USB_FS_ISTR (* ((volatile uint32_t *) (0x40006800 + 68)))

  // Field EP_ID: Endpoint Identifier
    inline uint32_t USB_FS_ISTR_EP_ID (const uint32_t inValue) {return (inValue & 0xfU) << 0 ; }

  // Field DIR: Direction of transaction
    const uint32_t USB_FS_ISTR_DIR = 1U << 4 ;

  // Field L1REQ: LPM L1 state request
    const uint32_t USB_FS_ISTR_L1REQ = 1U << 7 ;

  // Field ESOF: Expected start frame
    const uint32_t USB_FS_ISTR_ESOF = 1U << 8 ;

  // Field SOF: start of frame
    const uint32_t USB_FS_ISTR_SOF = 1U << 9 ;

  // Field RESET: reset request
    const uint32_t USB_FS_ISTR_RESET = 1U << 10 ;

  // Field SUSP: Suspend mode request
    const uint32_t USB_FS_ISTR_SUSP = 1U << 11 ;

  // Field WKUP: Wakeup
    const uint32_t USB_FS_ISTR_WKUP = 1U << 12 ;

  // Field ERR: Error
    const uint32_t USB_FS_ISTR_ERR = 1U << 13 ;

  // Field PMAOVR: Packet memory area over / underrun
    const uint32_t USB_FS_ISTR_PMAOVR = 1U << 14 ;

  // Field CTR: Correct transfer
    const uint32_t USB_FS_ISTR_CTR = 1U << 15 ;

//---  Register FNR: frame number register
  #define USB_FS_FNR (* ((const volatile uint32_t *) (0x40006800 + 72)))

  // Field FN: Frame number
    inline uint32_t USB_FS_FNR_FN (const uint32_t inValue) {return (inValue & 0x7ffU) << 0 ; }

  // Field LSOF: Lost SOF
    inline uint32_t USB_FS_FNR_LSOF (const uint32_t inValue) {return (inValue & 0x3U) << 11 ; }

  // Field LCK: Locked
    const uint32_t USB_FS_FNR_LCK = 1U << 13 ;

  // Field RXDM: Receive data - line status
    const uint32_t USB_FS_FNR_RXDM = 1U << 14 ;

  // Field RXDP: Receive data + line status
    const uint32_t USB_FS_FNR_RXDP = 1U << 15 ;

//---  Register DADDR: device address
  #define USB_FS_DADDR (* ((volatile uint32_t *) (0x40006800 + 76)))

  // Field ADD: Device address
    inline uint32_t USB_FS_DADDR_ADD (const uint32_t inValue) {return (inValue & 0x7fU) << 0 ; }

  // Field EF: Enable function
    const uint32_t USB_FS_DADDR_EF = 1U << 7 ;

//---  Register BTABLE: Buffer table address
  #define USB_FS_BTABLE (* ((volatile uint32_t *) (0x40006800 + 80)))

  // Field BTABLE: Buffer table
    inline uint32_t USB_FS_BTABLE_BTABLE (const uint32_t inValue) {return (inValue & 0x1fffU) << 3 ; }

//---  Register LPMCSR: LPM control and status
          register
  #define USB_FS_LPMCSR (* ((volatile uint32_t *) (0x40006800 + 84)))

  // Field LPMEN: LPM support enable
    const uint32_t USB_FS_LPMCSR_LPMEN = 1U << 0 ;

  // Field LPMACK: LPM Token acknowledge enable
    const uint32_t USB_FS_LPMCSR_LPMACK = 1U << 1 ;

  // Field REMWAKE: bRemoteWake value
    const uint32_t USB_FS_LPMCSR_REMWAKE = 1U << 3 ;

  // Field BESL: BESL value
    inline uint32_t USB_FS_LPMCSR_BESL (const uint32_t inValue) {return (inValue & 0xfU) << 4 ; }

//---  Register BCDR: Battery charging detector
  #define USB_FS_BCDR (* ((volatile uint32_t *) (0x40006800 + 88)))

  // Field BCDEN: Battery charging detector
    const uint32_t USB_FS_BCDR_BCDEN = 1U << 0 ;

  // Field DCDEN: Data contact detection
    const uint32_t USB_FS_BCDR_DCDEN = 1U << 1 ;

  // Field PDEN: Primary detection
    const uint32_t USB_FS_BCDR_PDEN = 1U << 2 ;

  // Field SDEN: Secondary detection
    const uint32_t USB_FS_BCDR_SDEN = 1U << 3 ;

  // Field DCDET: Data contact detection
    const uint32_t USB_FS_BCDR_DCDET = 1U << 4 ;

  // Field PDET: Primary detection
    const uint32_t USB_FS_BCDR_PDET = 1U << 5 ;

  // Field SDET: Secondary detection
    const uint32_t USB_FS_BCDR_SDET = 1U << 6 ;

  // Field PS2DET: DM pull-up detection status
    const uint32_t USB_FS_BCDR_PS2DET = 1U << 7 ;

  // Field DPPU: DP pull-up control
    const uint32_t USB_FS_BCDR_DPPU = 1U << 15 ;

//------------------------------------------------------------------------------
// Peripheral USB_SRAM: Universal serial bus full-speed device       interface
//------------------------------------------------------------------------------

//---  Register EP0R: endpoint 0 register
  #define USB_SRAM_EP0R (* ((volatile uint32_t *) (0x40006c00 + 0)))

  // Field EA: Endpoint address
    inline uint32_t USB_SRAM_EP0R_EA (const uint32_t inValue) {return (inValue & 0xfU) << 0 ; }

  // Field STAT_TX: Status bits, for transmission transfers
    inline uint32_t USB_SRAM_EP0R_STAT_TX (const uint32_t inValue) {return (inValue & 0x3U) << 4 ; }

  // Field DTOG_TX: Data Toggle, for transmission transfers
    const uint32_t USB_SRAM_EP0R_DTOG_TX = 1U << 6 ;

  // Field CTR_TX: Correct Transfer for transmission
    const uint32_t USB_SRAM_EP0R_CTR_TX = 1U << 7 ;

  // Field EP_KIND: Endpoint kind
    const uint32_t USB_SRAM_EP0R_EP_KIND = 1U << 8 ;

  // Field EP_TYPE: Endpoint type
    inline uint32_t USB_SRAM_EP0R_EP_TYPE (const uint32_t inValue) {return (inValue & 0x3U) << 9 ; }

  // Field SETUP: Setup transaction completed
    const uint32_t USB_SRAM_EP0R_SETUP = 1U << 11 ;

  // Field STAT_RX: Status bits, for reception transfers
    inline uint32_t USB_SRAM_EP0R_STAT_RX (const uint32_t inValue) {return (inValue & 0x3U) << 12 ; }

  // Field DTOG_RX: Data Toggle, for reception transfers
    const uint32_t USB_SRAM_EP0R_DTOG_RX = 1U << 14 ;

  // Field CTR_RX: Correct transfer for reception
    const uint32_t USB_SRAM_EP0R_CTR_RX = 1U << 15 ;

//---  Register EP1R: endpoint 1 register
  #define USB_SRAM_EP1R (* ((volatile uint32_t *) (0x40006c00 + 4)))

  // Field EA: Endpoint address
    inline uint32_t USB_SRAM_EP1R_EA (const uint32_t inValue) {return (inValue & 0xfU) << 0 ; }

  // Field STAT_TX: Status bits, for transmission transfers
    inline uint32_t USB_SRAM_EP1R_STAT_TX (const uint32_t inValue) {return (inValue & 0x3U) << 4 ; }

  // Field DTOG_TX: Data Toggle, for transmission transfers
    const uint32_t USB_SRAM_EP1R_DTOG_TX = 1U << 6 ;

  // Field CTR_TX: Correct Transfer for transmission
    const uint32_t USB_SRAM_EP1R_CTR_TX = 1U << 7 ;

  // Field EP_KIND: Endpoint kind
    const uint32_t USB_SRAM_EP1R_EP_KIND = 1U << 8 ;

  // Field EP_TYPE: Endpoint type
    inline uint32_t USB_SRAM_EP1R_EP_TYPE (const uint32_t inValue) {return (inValue & 0x3U) << 9 ; }

  // Field SETUP: Setup transaction completed
    const uint32_t USB_SRAM_EP1R_SETUP = 1U << 11 ;

  // Field STAT_RX: Status bits, for reception transfers
    inline uint32_t USB_SRAM_EP1R_STAT_RX (const uint32_t inValue) {return (inValue & 0x3U) << 12 ; }

  // Field DTOG_RX: Data Toggle, for reception transfers
    const uint32_t USB_SRAM_EP1R_DTOG_RX = 1U << 14 ;

  // Field CTR_RX: Correct transfer for reception
    const uint32_t USB_SRAM_EP1R_CTR_RX = 1U << 15 ;

//---  Register EP2R: endpoint 2 register
  #define USB_SRAM_EP2R (* ((volatile uint32_t *) (0x40006c00 + 8)))

  // Field EA: Endpoint address
    inline uint32_t USB_SRAM_EP2R_EA (const uint32_t inValue) {return (inValue & 0xfU) << 0 ; }

  // Field STAT_TX: Status bits, for transmission transfers
    inline uint32_t USB_SRAM_EP2R_STAT_TX (const uint32_t inValue) {return (inValue & 0x3U) << 4 ; }

  // Field DTOG_TX: Data Toggle, for transmission transfers
    const uint32_t USB_SRAM_EP2R_DTOG_TX = 1U << 6 ;

  // Field CTR_TX: Correct Transfer for transmission
    const uint32_t USB_SRAM_EP2R_CTR_TX = 1U << 7 ;

  // Field EP_KIND: Endpoint kind
    const uint32_t USB_SRAM_EP2R_EP_KIND = 1U << 8 ;

  // Field EP_TYPE: Endpoint type
    inline uint32_t USB_SRAM_EP2R_EP_TYPE (const uint32_t inValue) {return (inValue & 0x3U) << 9 ; }

  // Field SETUP: Setup transaction completed
    const uint32_t USB_SRAM_EP2R_SETUP = 1U << 11 ;

  // Field STAT_RX: Status bits, for reception transfers
    inline uint32_t USB_SRAM_EP2R_STAT_RX (const uint32_t inValue) {return (inValue & 0x3U) << 12 ; }

  // Field DTOG_RX: Data Toggle, for reception transfers
    const uint32_t USB_SRAM_EP2R_DTOG_RX = 1U << 14 ;

  // Field CTR_RX: Correct transfer for reception
    const uint32_t USB_SRAM_EP2R_CTR_RX = 1U << 15 ;

//---  Register EP3R: endpoint 3 register
  #define USB_SRAM_EP3R (* ((volatile uint32_t *) (0x40006c00 + 12)))

  // Field EA: Endpoint address
    inline uint32_t USB_SRAM_EP3R_EA (const uint32_t inValue) {return (inValue & 0xfU) << 0 ; }

  // Field STAT_TX: Status bits, for transmission transfers
    inline uint32_t USB_SRAM_EP3R_STAT_TX (const uint32_t inValue) {return (inValue & 0x3U) << 4 ; }

  // Field DTOG_TX: Data Toggle, for transmission transfers
    const uint32_t USB_SRAM_EP3R_DTOG_TX = 1U << 6 ;

  // Field CTR_TX: Correct Transfer for transmission
    const uint32_t USB_SRAM_EP3R_CTR_TX = 1U << 7 ;

  // Field EP_KIND: Endpoint kind
    const uint32_t USB_SRAM_EP3R_EP_KIND = 1U << 8 ;

  // Field EP_TYPE: Endpoint type
    inline uint32_t USB_SRAM_EP3R_EP_TYPE (const uint32_t inValue) {return (inValue & 0x3U) << 9 ; }

  // Field SETUP: Setup transaction completed
    const uint32_t USB_SRAM_EP3R_SETUP = 1U << 11 ;

  // Field STAT_RX: Status bits, for reception transfers
    inline uint32_t USB_SRAM_EP3R_STAT_RX (const uint32_t inValue) {return (inValue & 0x3U) << 12 ; }

  // Field DTOG_RX: Data Toggle, for reception transfers
    const uint32_t USB_SRAM_EP3R_DTOG_RX = 1U << 14 ;

  // Field CTR_RX: Correct transfer for reception
    const uint32_t USB_SRAM_EP3R_CTR_RX = 1U << 15 ;

//---  Register EP4R: endpoint 4 register
  #define USB_SRAM_EP4R (* ((volatile uint32_t *) (0x40006c00 + 16)))

  // Field EA: Endpoint address
    inline uint32_t USB_SRAM_EP4R_EA (const uint32_t inValue) {return (inValue & 0xfU) << 0 ; }

  // Field STAT_TX: Status bits, for transmission transfers
    inline uint32_t USB_SRAM_EP4R_STAT_TX (const uint32_t inValue) {return (inValue & 0x3U) << 4 ; }

  // Field DTOG_TX: Data Toggle, for transmission transfers
    const uint32_t USB_SRAM_EP4R_DTOG_TX = 1U << 6 ;

  // Field CTR_TX: Correct Transfer for transmission
    const uint32_t USB_SRAM_EP4R_CTR_TX = 1U << 7 ;

  // Field EP_KIND: Endpoint kind
    const uint32_t USB_SRAM_EP4R_EP_KIND = 1U << 8 ;

  // Field EP_TYPE: Endpoint type
    inline uint32_t USB_SRAM_EP4R_EP_TYPE (const uint32_t inValue) {return (inValue & 0x3U) << 9 ; }

  // Field SETUP: Setup transaction completed
    const uint32_t USB_SRAM_EP4R_SETUP = 1U << 11 ;

  // Field STAT_RX: Status bits, for reception transfers
    inline uint32_t USB_SRAM_EP4R_STAT_RX (const uint32_t inValue) {return (inValue & 0x3U) << 12 ; }

  // Field DTOG_RX: Data Toggle, for reception transfers
    const uint32_t USB_SRAM_EP4R_DTOG_RX = 1U << 14 ;

  // Field CTR_RX: Correct transfer for reception
    const uint32_t USB_SRAM_EP4R_CTR_RX = 1U << 15 ;

//---  Register EP5R: endpoint 5 register
  #define USB_SRAM_EP5R (* ((volatile uint32_t *) (0x40006c00 + 20)))

  // Field EA: Endpoint address
    inline uint32_t USB_SRAM_EP5R_EA (const uint32_t inValue) {return (inValue & 0xfU) << 0 ; }

  // Field STAT_TX: Status bits, for transmission transfers
    inline uint32_t USB_SRAM_EP5R_STAT_TX (const uint32_t inValue) {return (inValue & 0x3U) << 4 ; }

  // Field DTOG_TX: Data Toggle, for transmission transfers
    const uint32_t USB_SRAM_EP5R_DTOG_TX = 1U << 6 ;

  // Field CTR_TX: Correct Transfer for transmission
    const uint32_t USB_SRAM_EP5R_CTR_TX = 1U << 7 ;

  // Field EP_KIND: Endpoint kind
    const uint32_t USB_SRAM_EP5R_EP_KIND = 1U << 8 ;

  // Field EP_TYPE: Endpoint type
    inline uint32_t USB_SRAM_EP5R_EP_TYPE (const uint32_t inValue) {return (inValue & 0x3U) << 9 ; }

  // Field SETUP: Setup transaction completed
    const uint32_t USB_SRAM_EP5R_SETUP = 1U << 11 ;

  // Field STAT_RX: Status bits, for reception transfers
    inline uint32_t USB_SRAM_EP5R_STAT_RX (const uint32_t inValue) {return (inValue & 0x3U) << 12 ; }

  // Field DTOG_RX: Data Toggle, for reception transfers
    const uint32_t USB_SRAM_EP5R_DTOG_RX = 1U << 14 ;

  // Field CTR_RX: Correct transfer for reception
    const uint32_t USB_SRAM_EP5R_CTR_RX = 1U << 15 ;

//---  Register EP6R: endpoint 6 register
  #define USB_SRAM_EP6R (* ((volatile uint32_t *) (0x40006c00 + 24)))

  // Field EA: Endpoint address
    inline uint32_t USB_SRAM_EP6R_EA (const uint32_t inValue) {return (inValue & 0xfU) << 0 ; }

  // Field STAT_TX: Status bits, for transmission transfers
    inline uint32_t USB_SRAM_EP6R_STAT_TX (const uint32_t inValue) {return (inValue & 0x3U) << 4 ; }

  // Field DTOG_TX: Data Toggle, for transmission transfers
    const uint32_t USB_SRAM_EP6R_DTOG_TX = 1U << 6 ;

  // Field CTR_TX: Correct Transfer for transmission
    const uint32_t USB_SRAM_EP6R_CTR_TX = 1U << 7 ;

  // Field EP_KIND: Endpoint kind
    const uint32_t USB_SRAM_EP6R_EP_KIND = 1U << 8 ;

  // Field EP_TYPE: Endpoint type
    inline uint32_t USB_SRAM_EP6R_EP_TYPE (const uint32_t inValue) {return (inValue & 0x3U) << 9 ; }

  // Field SETUP: Setup transaction completed
    const uint32_t USB_SRAM_EP6R_SETUP = 1U << 11 ;

  // Field STAT_RX: Status bits, for reception transfers
    inline uint32_t USB_SRAM_EP6R_STAT_RX (const uint32_t inValue) {return (inValue & 0x3U) << 12 ; }

  // Field DTOG_RX: Data Toggle, for reception transfers
    const uint32_t USB_SRAM_EP6R_DTOG_RX = 1U << 14 ;

  // Field CTR_RX: Correct transfer for reception
    const uint32_t USB_SRAM_EP6R_CTR_RX = 1U << 15 ;

//---  Register EP7R: endpoint 7 register
  #define USB_SRAM_EP7R (* ((volatile uint32_t *) (0x40006c00 + 28)))

  // Field EA: Endpoint address
    inline uint32_t USB_SRAM_EP7R_EA (const uint32_t inValue) {return (inValue & 0xfU) << 0 ; }

  // Field STAT_TX: Status bits, for transmission transfers
    inline uint32_t USB_SRAM_EP7R_STAT_TX (const uint32_t inValue) {return (inValue & 0x3U) << 4 ; }

  // Field DTOG_TX: Data Toggle, for transmission transfers
    const uint32_t USB_SRAM_EP7R_DTOG_TX = 1U << 6 ;

  // Field CTR_TX: Correct Transfer for transmission
    const uint32_t USB_SRAM_EP7R_CTR_TX = 1U << 7 ;

  // Field EP_KIND: Endpoint kind
    const uint32_t USB_SRAM_EP7R_EP_KIND = 1U << 8 ;

  // Field EP_TYPE: Endpoint type
    inline uint32_t USB_SRAM_EP7R_EP_TYPE (const uint32_t inValue) {return (inValue & 0x3U) << 9 ; }

  // Field SETUP: Setup transaction completed
    const uint32_t USB_SRAM_EP7R_SETUP = 1U << 11 ;

  // Field STAT_RX: Status bits, for reception transfers
    inline uint32_t USB_SRAM_EP7R_STAT_RX (const uint32_t inValue) {return (inValue & 0x3U) << 12 ; }

  // Field DTOG_RX: Data Toggle, for reception transfers
    const uint32_t USB_SRAM_EP7R_DTOG_RX = 1U << 14 ;

  // Field CTR_RX: Correct transfer for reception
    const uint32_t USB_SRAM_EP7R_CTR_RX = 1U << 15 ;

//---  Register CNTR: control register
  #define USB_SRAM_CNTR (* ((volatile uint32_t *) (0x40006c00 + 64)))

  // Field FRES: Force USB Reset
    const uint32_t USB_SRAM_CNTR_FRES = 1U << 0 ;

  // Field PDWN: Power down
    const uint32_t USB_SRAM_CNTR_PDWN = 1U << 1 ;

  // Field LPMODE: Low-power mode
    const uint32_t USB_SRAM_CNTR_LPMODE = 1U << 2 ;

  // Field FSUSP: Force suspend
    const uint32_t USB_SRAM_CNTR_FSUSP = 1U << 3 ;

  // Field RESUME: Resume request
    const uint32_t USB_SRAM_CNTR_RESUME = 1U << 4 ;

  // Field L1RESUME: LPM L1 Resume request
    const uint32_t USB_SRAM_CNTR_L1RESUME = 1U << 5 ;

  // Field L1REQM: LPM L1 state request interrupt mask
    const uint32_t USB_SRAM_CNTR_L1REQM = 1U << 7 ;

  // Field ESOFM: Expected start of frame interrupt mask
    const uint32_t USB_SRAM_CNTR_ESOFM = 1U << 8 ;

  // Field SOFM: Start of frame interrupt mask
    const uint32_t USB_SRAM_CNTR_SOFM = 1U << 9 ;

  // Field RESETM: USB reset interrupt mask
    const uint32_t USB_SRAM_CNTR_RESETM = 1U << 10 ;

  // Field SUSPM: Suspend mode interrupt mask
    const uint32_t USB_SRAM_CNTR_SUSPM = 1U << 11 ;

  // Field WKUPM: Wakeup interrupt mask
    const uint32_t USB_SRAM_CNTR_WKUPM = 1U << 12 ;

  // Field ERRM: Error interrupt mask
    const uint32_t USB_SRAM_CNTR_ERRM = 1U << 13 ;

  // Field PMAOVRM: Packet memory area over / underrun interrupt mask
    const uint32_t USB_SRAM_CNTR_PMAOVRM = 1U << 14 ;

  // Field CTRM: Correct transfer interrupt mask
    const uint32_t USB_SRAM_CNTR_CTRM = 1U << 15 ;

//---  Register ISTR: interrupt status register
  #define USB_SRAM_ISTR (* ((volatile uint32_t *) (0x40006c00 + 68)))

  // Field EP_ID: Endpoint Identifier
    inline uint32_t USB_SRAM_ISTR_EP_ID (const uint32_t inValue) {return (inValue & 0xfU) << 0 ; }

  // Field DIR: Direction of transaction
    const uint32_t USB_SRAM_ISTR_DIR = 1U << 4 ;

  // Field L1REQ: LPM L1 state request
    const uint32_t USB_SRAM_ISTR_L1REQ = 1U << 7 ;

  // Field ESOF: Expected start frame
    const uint32_t USB_SRAM_ISTR_ESOF = 1U << 8 ;

  // Field SOF: start of frame
    const uint32_t USB_SRAM_ISTR_SOF = 1U << 9 ;

  // Field RESET: reset request
    const uint32_t USB_SRAM_ISTR_RESET = 1U << 10 ;

  // Field SUSP: Suspend mode request
    const uint32_t USB_SRAM_ISTR_SUSP = 1U << 11 ;

  // Field WKUP: Wakeup
    const uint32_t USB_SRAM_ISTR_WKUP = 1U << 12 ;

  // Field ERR: Error
    const uint32_t USB_SRAM_ISTR_ERR = 1U << 13 ;

  // Field PMAOVR: Packet memory area over / underrun
    const uint32_t USB_SRAM_ISTR_PMAOVR = 1U << 14 ;

  // Field CTR: Correct transfer
    const uint32_t USB_SRAM_ISTR_CTR = 1U << 15 ;

//---  Register FNR: frame number register
  #define USB_SRAM_FNR (* ((const volatile uint32_t *) (0x40006c00 + 72)))

  // Field FN: Frame number
    inline uint32_t USB_SRAM_FNR_FN (const uint32_t inValue) {return (inValue & 0x7ffU) << 0 ; }

  // Field LSOF: Lost SOF
    inline uint32_t USB_SRAM_FNR_LSOF (const uint32_t inValue) {return (inValue & 0x3U) << 11 ; }

  // Field LCK: Locked
    const uint32_t USB_SRAM_FNR_LCK = 1U << 13 ;

  // Field RXDM: Receive data - line status
    const uint32_t USB_SRAM_FNR_RXDM = 1U << 14 ;

  // Field RXDP: Receive data + line status
    const uint32_t USB_SRAM_FNR_RXDP = 1U << 15 ;

//---  Register DADDR: device address
  #define USB_SRAM_DADDR (* ((volatile uint32_t *) (0x40006c00 + 76)))

  // Field ADD: Device address
    inline uint32_t USB_SRAM_DADDR_ADD (const uint32_t inValue) {return (inValue & 0x7fU) << 0 ; }

  // Field EF: Enable function
    const uint32_t USB_SRAM_DADDR_EF = 1U << 7 ;

//---  Register BTABLE: Buffer table address
  #define USB_SRAM_BTABLE (* ((volatile uint32_t *) (0x40006c00 + 80)))

  // Field BTABLE: Buffer table
    inline uint32_t USB_SRAM_BTABLE_BTABLE (const uint32_t inValue) {return (inValue & 0x1fffU) << 3 ; }

//---  Register LPMCSR: LPM control and status
          register
  #define USB_SRAM_LPMCSR (* ((volatile uint32_t *) (0x40006c00 + 84)))

  // Field LPMEN: LPM support enable
    const uint32_t USB_SRAM_LPMCSR_LPMEN = 1U << 0 ;

  // Field LPMACK: LPM Token acknowledge enable
    const uint32_t USB_SRAM_LPMCSR_LPMACK = 1U << 1 ;

  // Field REMWAKE: bRemoteWake value
    const uint32_t USB_SRAM_LPMCSR_REMWAKE = 1U << 3 ;

  // Field BESL: BESL value
    inline uint32_t USB_SRAM_LPMCSR_BESL (const uint32_t inValue) {return (inValue & 0xfU) << 4 ; }

//---  Register BCDR: Battery charging detector
  #define USB_SRAM_BCDR (* ((volatile uint32_t *) (0x40006c00 + 88)))

  // Field BCDEN: Battery charging detector
    const uint32_t USB_SRAM_BCDR_BCDEN = 1U << 0 ;

  // Field DCDEN: Data contact detection
    const uint32_t USB_SRAM_BCDR_DCDEN = 1U << 1 ;

  // Field PDEN: Primary detection
    const uint32_t USB_SRAM_BCDR_PDEN = 1U << 2 ;

  // Field SDEN: Secondary detection
    const uint32_t USB_SRAM_BCDR_SDEN = 1U << 3 ;

  // Field DCDET: Data contact detection
    const uint32_t USB_SRAM_BCDR_DCDET = 1U << 4 ;

  // Field PDET: Primary detection
    const uint32_t USB_SRAM_BCDR_PDET = 1U << 5 ;

  // Field SDET: Secondary detection
    const uint32_t USB_SRAM_BCDR_SDET = 1U << 6 ;

  // Field PS2DET: DM pull-up detection status
    const uint32_t USB_SRAM_BCDR_PS2DET = 1U << 7 ;

  // Field DPPU: DP pull-up control
    const uint32_t USB_SRAM_BCDR_DPPU = 1U << 15 ;

//------------------------------------------------------------------------------
// Peripheral VREFBUF: Voltage reference buffer
//------------------------------------------------------------------------------

//---  Register CSR: VREF control and status
          register
  #define VREFBUF_CSR (* ((volatile uint32_t *) (0x40010030 + 0)))

  // Field ENVR: Voltage reference buffer enable
    const uint32_t VREFBUF_CSR_ENVR = 1U << 0 ;

  // Field HIZ: High impedance mode
    const uint32_t VREFBUF_CSR_HIZ = 1U << 1 ;

  // Field VRS: Voltage reference scale
    const uint32_t VREFBUF_CSR_VRS = 1U << 2 ;

  // Field VRR: Voltage reference buffer ready
    const uint32_t VREFBUF_CSR_VRR = 1U << 3 ;

//---  Register CCR: calibration control register
  #define VREFBUF_CCR (* ((volatile uint32_t *) (0x40010030 + 4)))

  // Field TRIM: Trimming code
    inline uint32_t VREFBUF_CCR_TRIM (const uint32_t inValue) {return (inValue & 0x3fU) << 0 ; }

//------------------------------------------------------------------------------
// Peripheral WWDG: System window watchdog
//------------------------------------------------------------------------------

//---  Register CR: Control register
  #define WWDG_CR (* ((volatile uint32_t *) (0x40002c00 + 0)))

  // Field WDGA: Activation bit
    const uint32_t WWDG_CR_WDGA = 1U << 7 ;

  // Field T: 7-bit counter (MSB to LSB)
    inline uint32_t WWDG_CR_T (const uint32_t inValue) {return (inValue & 0x7fU) << 0 ; }

//---  Register CFR: Configuration register
  #define WWDG_CFR (* ((volatile uint32_t *) (0x40002c00 + 4)))

  // Field EWI: Early wakeup interrupt
    const uint32_t WWDG_CFR_EWI = 1U << 9 ;

  // Field WDGTB: Timer base
    inline uint32_t WWDG_CFR_WDGTB (const uint32_t inValue) {return (inValue & 0x3U) << 7 ; }

  // Field W: 7-bit window value
    inline uint32_t WWDG_CFR_W (const uint32_t inValue) {return (inValue & 0x7fU) << 0 ; }

//---  Register SR: Status register
  #define WWDG_SR (* ((volatile uint32_t *) (0x40002c00 + 8)))

  // Field EWIF: Early wakeup interrupt flag
    const uint32_t WWDG_SR_EWIF = 1U << 0 ;

//------------------------------------------------------------------------------
// INTERRUPTS
//------------------------------------------------------------------------------

enum class ISRSlot : uint8_t {
  WWDG = 0,
  PVD_PVM = 1,
  RTC_TAMP_STAMP = 2,
  RTC_WKUP = 3,
  FLASH = 4,
  RCC = 5,
  EXTI0 = 6,
  EXTI1 = 7,
  EXTI2 = 8,
  EXTI3 = 9,
  EXTI4 = 10,
  DMA1_CH1 = 11,
  DMA1_CH2 = 12,
  DMA1_CH3 = 13,
  DMA1_CH4 = 14,
  DMA1_CH5 = 15,
  DMA1_CH6 = 16,
  DMA1_CH7 = 17,
  ADC1 = 18,
  CAN1_TX = 19,
  CAN1_RX0 = 20,
  CAN1_RX1 = 21,
  CAN1_SCE = 22,
  EXTI9_5 = 23,
  TIM1_BRK_TIM15 = 24,
  TIM1_UP_TIM16 = 25,
  TIM1_TRG_COM = 26,
  TIM1_CC = 27,
  TIM2 = 28,
  TIM3 = 29,
  I2C1_EV = 31,
  I2C1_ER = 32,
  I2C2_EV = 33,
  I2C2_ER = 34,
  SPI1 = 35,
  SPI2 = 36,
  USART1 = 37,
  USART2 = 38,
  USART3 = 39,
  EXTI15_10 = 40,
  RTC_ALARM = 41,
  DFSDM1_FLT3 = 42,
  ADC3 = 47,
  SDMMC1 = 49,
  SPI3 = 51,
  UART4 = 52,
  TIM6_DACUNDER = 54,
  TIM7 = 55,
  DMA2_CH1 = 56,
  DMA2_CH2 = 57,
  DMA2_CH3 = 58,
  DMA2_CH4 = 59,
  DMA2_CH5 = 60,
  DFSDM1 = 61,
  DFSDM2 = 62,
  DFSDM1_FLT2 = 63,
  COMP = 64,
  LPTIM1 = 65,
  LPTIM2 = 66,
  USB_FS = 67,
  DMA2_CH6 = 68,
  DMA2_CH7 = 69,
  LPUART1 = 70,
  QUADSPI = 71,
  I2C3_EV = 72,
  I2C3_ER = 73,
  SAI1 = 74,
  SWPMI1 = 76,
  TSC = 77,
  LCD = 78,
  AES = 79,
  RNG = 80,
  FPU = 81,
  CRS = 82,
  I2C4_EV = 83,
  I2C4_ER = 84,
} ;

//------------------------------------------------------------------------------

inline void NVIC_ENABLE_IRQ (const ISRSlot inInterrupt) {
  const uint32_t it = static_cast <uint32_t> (inInterrupt) ;
  *((volatile uint32_t *) (0xE000E100 + 4 * (it >> 5))) = 1U << (it & 31) ;
}

//------------------------------------------------------------------------------

inline void NVIC_DISABLE_IRQ (const ISRSlot inInterrupt) {
  const uint32_t it = static_cast <uint32_t> (inInterrupt) ;
  *((volatile uint32_t *) (0xE000E180 + 4 * (it >> 5))) = 1U << (it & 31) ;
}

//------------------------------------------------------------------------------
// BITBAND
//------------------------------------------------------------------------------

inline void bitband32 (const volatile uint32_t & inRegister, const uint8_t inBit, const bool inValue) {
  const uint32_t address = ((uint32_t) &inRegister - 0x40000000) * 32 + ((uint32_t) inBit) * 4 + 0x42000000 ;
  volatile uint32_t * ptr = (volatile uint32_t *) address ;
  *ptr = (uint32_t) inValue ;
}

//------------------------------------------------------------------------------
