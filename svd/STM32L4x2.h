#pragma once

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

#include <stdint.h>

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
// Peripheral DMA2
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
// Peripheral I2C3
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
// Peripheral I2C2
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
// Peripheral I2C4
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
// Peripheral ADC2
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
// Peripheral ADC3
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
// Peripheral GPIOD
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
// Peripheral GPIOE
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
// Peripheral GPIOH
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
// Peripheral TIM3
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
// Peripheral TIM7
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
// Peripheral LPTIM2
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
// Peripheral USART2
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
// Peripheral UART4
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
// Peripheral SPI3
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
// Peripheral SPI2
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
// Peripheral USB_FS
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
// Peripheral group ADC1
//                ADC1 at 0x50040000
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

static const uint32_t kBaseAddress_ADC1 [1] = {0x50040000} ;

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

//-------------------- regular sequence register 2
#define ADC1_SQR2(group) (* ((volatile uint32_t *) (kBaseAddress_ADC1 [group] + 0x34)))
#define ADC1_SQR2 (* ((volatile uint32_t *) (0x50040000 + 0x34)))

  // Field (width: 5 bits): SQ9
    inline uint32_t ADC1_SQR2_SQ9 (const uint32_t inValue) { return (inValue & 31U) << 24 ; }

  // Field (width: 5 bits): SQ8
    inline uint32_t ADC1_SQR2_SQ8 (const uint32_t inValue) { return (inValue & 31U) << 18 ; }

  // Field (width: 5 bits): SQ7
    inline uint32_t ADC1_SQR2_SQ7 (const uint32_t inValue) { return (inValue & 31U) << 12 ; }

  // Field (width: 5 bits): SQ6
    inline uint32_t ADC1_SQR2_SQ6 (const uint32_t inValue) { return (inValue & 31U) << 6 ; }

  // Field (width: 5 bits): SQ5
    inline uint32_t ADC1_SQR2_SQ5 (const uint32_t inValue) { return (inValue & 31U) << 0 ; }

//-------------------- interrupt and status register
#define ADC1_ISR(group) (* ((volatile uint32_t *) (kBaseAddress_ADC1 [group] + 0x0)))
#define ADC1_ISR (* ((volatile uint32_t *) (0x50040000 + 0x0)))

  // Boolean field: OVR
    static const uint32_t ADC1_ISR_OVR = 1U << 4 ;

  // Boolean field: EOC
    static const uint32_t ADC1_ISR_EOC = 1U << 2 ;

  // Boolean field: EOSMP
    static const uint32_t ADC1_ISR_EOSMP = 1U << 1 ;

  // Boolean field: JEOS
    static const uint32_t ADC1_ISR_JEOS = 1U << 6 ;

  // Boolean field: AWD1
    static const uint32_t ADC1_ISR_AWD1 = 1U << 7 ;

  // Boolean field: EOS
    static const uint32_t ADC1_ISR_EOS = 1U << 3 ;

  // Boolean field: JQOVF
    static const uint32_t ADC1_ISR_JQOVF = 1U << 10 ;

  // Boolean field: ADRDY
    static const uint32_t ADC1_ISR_ADRDY = 1U << 0 ;

  // Boolean field: JEOC
    static const uint32_t ADC1_ISR_JEOC = 1U << 5 ;

  // Boolean field: AWD2
    static const uint32_t ADC1_ISR_AWD2 = 1U << 8 ;

  // Boolean field: AWD3
    static const uint32_t ADC1_ISR_AWD3 = 1U << 9 ;

//-------------------- regular sequence register 1
#define ADC1_SQR1(group) (* ((volatile uint32_t *) (kBaseAddress_ADC1 [group] + 0x30)))
#define ADC1_SQR1 (* ((volatile uint32_t *) (0x50040000 + 0x30)))

  // Field (width: 5 bits): SQ3
    inline uint32_t ADC1_SQR1_SQ3 (const uint32_t inValue) { return (inValue & 31U) << 18 ; }

  // Field (width: 5 bits): SQ2
    inline uint32_t ADC1_SQR1_SQ2 (const uint32_t inValue) { return (inValue & 31U) << 12 ; }

  // Field (width: 5 bits): SQ1
    inline uint32_t ADC1_SQR1_SQ1 (const uint32_t inValue) { return (inValue & 31U) << 6 ; }

  // Field (width: 4 bits): L
    inline uint32_t ADC1_SQR1_L (const uint32_t inValue) { return (inValue & 15U) << 0 ; }

  // Field (width: 5 bits): SQ4
    inline uint32_t ADC1_SQR1_SQ4 (const uint32_t inValue) { return (inValue & 31U) << 24 ; }

//-------------------- offset register 1
#define ADC1_OFR1(group) (* ((volatile uint32_t *) (kBaseAddress_ADC1 [group] + 0x60)))
#define ADC1_OFR1 (* ((volatile uint32_t *) (0x50040000 + 0x60)))

  // Field (width: 5 bits): OFFSET1_CH
    inline uint32_t ADC1_OFR1_OFFSET1_CH (const uint32_t inValue) { return (inValue & 31U) << 26 ; }

  // Field (width: 12 bits): OFFSET1
    inline uint32_t ADC1_OFR1_OFFSET1 (const uint32_t inValue) { return (inValue & 4095U) << 0 ; }

  // Boolean field: OFFSET1_EN
    static const uint32_t ADC1_OFR1_OFFSET1_EN = 1U << 31 ;

//-------------------- offset register 3
#define ADC1_OFR3(group) (* ((volatile uint32_t *) (kBaseAddress_ADC1 [group] + 0x68)))
#define ADC1_OFR3 (* ((volatile uint32_t *) (0x50040000 + 0x68)))

  // Field (width: 5 bits): OFFSET3_CH
    inline uint32_t ADC1_OFR3_OFFSET3_CH (const uint32_t inValue) { return (inValue & 31U) << 26 ; }

  // Boolean field: OFFSET3_EN
    static const uint32_t ADC1_OFR3_OFFSET3_EN = 1U << 31 ;

  // Field (width: 12 bits): OFFSET3
    inline uint32_t ADC1_OFR3_OFFSET3 (const uint32_t inValue) { return (inValue & 4095U) << 0 ; }

//-------------------- offset register 2
#define ADC1_OFR2(group) (* ((volatile uint32_t *) (kBaseAddress_ADC1 [group] + 0x64)))
#define ADC1_OFR2 (* ((volatile uint32_t *) (0x50040000 + 0x64)))

  // Field (width: 5 bits): OFFSET2_CH
    inline uint32_t ADC1_OFR2_OFFSET2_CH (const uint32_t inValue) { return (inValue & 31U) << 26 ; }

  // Field (width: 12 bits): OFFSET2
    inline uint32_t ADC1_OFR2_OFFSET2 (const uint32_t inValue) { return (inValue & 4095U) << 0 ; }

  // Boolean field: OFFSET2_EN
    static const uint32_t ADC1_OFR2_OFFSET2_EN = 1U << 31 ;

//-------------------- regular Data Register
#define ADC1_DR(group) (* ((const volatile uint32_t *) (kBaseAddress_ADC1 [group] + 0x40)))
#define ADC1_DR (* ((const volatile uint32_t *) (0x50040000 + 0x40)))

  // Field (width: 16 bits): regularDATA
    inline uint32_t ADC1_DR_regularDATA (const uint32_t inValue) { return (inValue & 65535U) << 0 ; }

//-------------------- Differential Mode Selection Register
          2
#define ADC1_DIFSEL(group) (* ((const volatile uint32_t *) (kBaseAddress_ADC1 [group] + 0xB0)))
#define ADC1_DIFSEL (* ((const volatile uint32_t *) (0x50040000 + 0xB0)))

  // Field (width: 3 bits): Differential mode for channels 18 to
              16
    inline uint32_t ADC1_DIFSEL_DIFSEL_16_18 (const uint32_t inValue) { return (inValue & 7U) << 16 ; }

  // Boolean field: Differential mode for channel
              0
    static const uint32_t ADC1_DIFSEL_DIFSEL_0 = 1U << 0 ;

  // Field (width: 15 bits): Differential mode for channels 15 to
              1
    inline uint32_t ADC1_DIFSEL_DIFSEL_1_15 (const uint32_t inValue) { return (inValue & 32767U) << 1 ; }

//-------------------- Analog Watchdog 3 Configuration
          Register
#define ADC1_AWD3CR(group) (* ((volatile uint32_t *) (kBaseAddress_ADC1 [group] + 0xA4)))
#define ADC1_AWD3CR (* ((volatile uint32_t *) (0x50040000 + 0xA4)))

  // Field (width: 19 bits): AWD3CH
    inline uint32_t ADC1_AWD3CR_AWD3CH (const uint32_t inValue) { return (inValue & 524287U) << 0 ; }

//-------------------- Analog Watchdog 2 Configuration
          Register
#define ADC1_AWD2CR(group) (* ((volatile uint32_t *) (kBaseAddress_ADC1 [group] + 0xA0)))
#define ADC1_AWD2CR (* ((volatile uint32_t *) (0x50040000 + 0xA0)))

  // Field (width: 19 bits): AWD2CH
    inline uint32_t ADC1_AWD2CR_AWD2CH (const uint32_t inValue) { return (inValue & 524287U) << 0 ; }

//-------------------- offset register 4
#define ADC1_OFR4(group) (* ((volatile uint32_t *) (kBaseAddress_ADC1 [group] + 0x6C)))
#define ADC1_OFR4 (* ((volatile uint32_t *) (0x50040000 + 0x6C)))

  // Field (width: 12 bits): OFFSET4
    inline uint32_t ADC1_OFR4_OFFSET4 (const uint32_t inValue) { return (inValue & 4095U) << 0 ; }

  // Boolean field: OFFSET4_EN
    static const uint32_t ADC1_OFR4_OFFSET4_EN = 1U << 31 ;

  // Field (width: 5 bits): OFFSET4_CH
    inline uint32_t ADC1_OFR4_OFFSET4_CH (const uint32_t inValue) { return (inValue & 31U) << 26 ; }

//-------------------- watchdog threshold register 1
#define ADC1_TR1(group) (* ((volatile uint32_t *) (kBaseAddress_ADC1 [group] + 0x20)))
#define ADC1_TR1 (* ((volatile uint32_t *) (0x50040000 + 0x20)))

  // Field (width: 12 bits): LT1
    inline uint32_t ADC1_TR1_LT1 (const uint32_t inValue) { return (inValue & 4095U) << 0 ; }

  // Field (width: 12 bits): HT1
    inline uint32_t ADC1_TR1_HT1 (const uint32_t inValue) { return (inValue & 4095U) << 16 ; }

//-------------------- watchdog threshold register 3
#define ADC1_TR3(group) (* ((volatile uint32_t *) (kBaseAddress_ADC1 [group] + 0x28)))
#define ADC1_TR3 (* ((volatile uint32_t *) (0x50040000 + 0x28)))

  // Field (width: 8 bits): LT3
    inline uint32_t ADC1_TR3_LT3 (const uint32_t inValue) { return (inValue & 255U) << 0 ; }

  // Field (width: 8 bits): HT3
    inline uint32_t ADC1_TR3_HT3 (const uint32_t inValue) { return (inValue & 255U) << 16 ; }

//-------------------- watchdog threshold register
#define ADC1_TR2(group) (* ((volatile uint32_t *) (kBaseAddress_ADC1 [group] + 0x24)))
#define ADC1_TR2 (* ((volatile uint32_t *) (0x50040000 + 0x24)))

  // Field (width: 8 bits): LT2
    inline uint32_t ADC1_TR2_LT2 (const uint32_t inValue) { return (inValue & 255U) << 0 ; }

  // Field (width: 8 bits): HT2
    inline uint32_t ADC1_TR2_HT2 (const uint32_t inValue) { return (inValue & 255U) << 16 ; }

//-------------------- interrupt enable register
#define ADC1_IER(group) (* ((volatile uint32_t *) (kBaseAddress_ADC1 [group] + 0x4)))
#define ADC1_IER (* ((volatile uint32_t *) (0x50040000 + 0x4)))

  // Boolean field: OVRIE
    static const uint32_t ADC1_IER_OVRIE = 1U << 4 ;

  // Boolean field: EOCIE
    static const uint32_t ADC1_IER_EOCIE = 1U << 2 ;

  // Boolean field: JQOVFIE
    static const uint32_t ADC1_IER_JQOVFIE = 1U << 10 ;

  // Boolean field: EOSMPIE
    static const uint32_t ADC1_IER_EOSMPIE = 1U << 1 ;

  // Boolean field: JEOCIE
    static const uint32_t ADC1_IER_JEOCIE = 1U << 5 ;

  // Boolean field: ADRDYIE
    static const uint32_t ADC1_IER_ADRDYIE = 1U << 0 ;

  // Boolean field: AWD3IE
    static const uint32_t ADC1_IER_AWD3IE = 1U << 9 ;

  // Boolean field: EOSIE
    static const uint32_t ADC1_IER_EOSIE = 1U << 3 ;

  // Boolean field: JEOSIE
    static const uint32_t ADC1_IER_JEOSIE = 1U << 6 ;

  // Boolean field: AWD2IE
    static const uint32_t ADC1_IER_AWD2IE = 1U << 8 ;

  // Boolean field: AWD1IE
    static const uint32_t ADC1_IER_AWD1IE = 1U << 7 ;

//-------------------- regular sequence register 4
#define ADC1_SQR4(group) (* ((volatile uint32_t *) (kBaseAddress_ADC1 [group] + 0x3C)))
#define ADC1_SQR4 (* ((volatile uint32_t *) (0x50040000 + 0x3C)))

  // Field (width: 5 bits): SQ16
    inline uint32_t ADC1_SQR4_SQ16 (const uint32_t inValue) { return (inValue & 31U) << 6 ; }

  // Field (width: 5 bits): SQ15
    inline uint32_t ADC1_SQR4_SQ15 (const uint32_t inValue) { return (inValue & 31U) << 0 ; }

//-------------------- sample time register 1
#define ADC1_SMPR1(group) (* ((volatile uint32_t *) (kBaseAddress_ADC1 [group] + 0x14)))
#define ADC1_SMPR1 (* ((volatile uint32_t *) (0x50040000 + 0x14)))

  // Field (width: 3 bits): SMP0
    inline uint32_t ADC1_SMPR1_SMP0 (const uint32_t inValue) { return (inValue & 7U) << 0 ; }

  // Field (width: 3 bits): SMP1
    inline uint32_t ADC1_SMPR1_SMP1 (const uint32_t inValue) { return (inValue & 7U) << 3 ; }

  // Field (width: 3 bits): SMP2
    inline uint32_t ADC1_SMPR1_SMP2 (const uint32_t inValue) { return (inValue & 7U) << 6 ; }

  // Field (width: 3 bits): SMP3
    inline uint32_t ADC1_SMPR1_SMP3 (const uint32_t inValue) { return (inValue & 7U) << 9 ; }

  // Field (width: 3 bits): SMP4
    inline uint32_t ADC1_SMPR1_SMP4 (const uint32_t inValue) { return (inValue & 7U) << 12 ; }

  // Field (width: 3 bits): SMP5
    inline uint32_t ADC1_SMPR1_SMP5 (const uint32_t inValue) { return (inValue & 7U) << 15 ; }

  // Field (width: 3 bits): SMP6
    inline uint32_t ADC1_SMPR1_SMP6 (const uint32_t inValue) { return (inValue & 7U) << 18 ; }

  // Field (width: 3 bits): SMP7
    inline uint32_t ADC1_SMPR1_SMP7 (const uint32_t inValue) { return (inValue & 7U) << 21 ; }

  // Field (width: 3 bits): SMP8
    inline uint32_t ADC1_SMPR1_SMP8 (const uint32_t inValue) { return (inValue & 7U) << 24 ; }

  // Field (width: 3 bits): SMP9
    inline uint32_t ADC1_SMPR1_SMP9 (const uint32_t inValue) { return (inValue & 7U) << 27 ; }

//-------------------- control register
#define ADC1_CR(group) (* ((volatile uint32_t *) (kBaseAddress_ADC1 [group] + 0x8)))
#define ADC1_CR (* ((volatile uint32_t *) (0x50040000 + 0x8)))

  // Boolean field: ADCAL
    static const uint32_t ADC1_CR_ADCAL = 1U << 31 ;

  // Boolean field: JADSTP
    static const uint32_t ADC1_CR_JADSTP = 1U << 5 ;

  // Boolean field: ADSTP
    static const uint32_t ADC1_CR_ADSTP = 1U << 4 ;

  // Boolean field: ADSTART
    static const uint32_t ADC1_CR_ADSTART = 1U << 2 ;

  // Boolean field: DEEPPWD
    static const uint32_t ADC1_CR_DEEPPWD = 1U << 29 ;

  // Boolean field: ADCALDIF
    static const uint32_t ADC1_CR_ADCALDIF = 1U << 30 ;

  // Boolean field: ADDIS
    static const uint32_t ADC1_CR_ADDIS = 1U << 1 ;

  // Boolean field: ADVREGEN
    static const uint32_t ADC1_CR_ADVREGEN = 1U << 28 ;

  // Boolean field: JADSTART
    static const uint32_t ADC1_CR_JADSTART = 1U << 3 ;

  // Boolean field: ADEN
    static const uint32_t ADC1_CR_ADEN = 1U << 0 ;

//-------------------- regular sequence register 3
#define ADC1_SQR3(group) (* ((volatile uint32_t *) (kBaseAddress_ADC1 [group] + 0x38)))
#define ADC1_SQR3 (* ((volatile uint32_t *) (0x50040000 + 0x38)))

  // Field (width: 5 bits): SQ14
    inline uint32_t ADC1_SQR3_SQ14 (const uint32_t inValue) { return (inValue & 31U) << 24 ; }

  // Field (width: 5 bits): SQ13
    inline uint32_t ADC1_SQR3_SQ13 (const uint32_t inValue) { return (inValue & 31U) << 18 ; }

  // Field (width: 5 bits): SQ12
    inline uint32_t ADC1_SQR3_SQ12 (const uint32_t inValue) { return (inValue & 31U) << 12 ; }

  // Field (width: 5 bits): SQ11
    inline uint32_t ADC1_SQR3_SQ11 (const uint32_t inValue) { return (inValue & 31U) << 6 ; }

  // Field (width: 5 bits): SQ10
    inline uint32_t ADC1_SQR3_SQ10 (const uint32_t inValue) { return (inValue & 31U) << 0 ; }

//-------------------- injected data register 1
#define ADC1_JDR1(group) (* ((const volatile uint32_t *) (kBaseAddress_ADC1 [group] + 0x80)))
#define ADC1_JDR1 (* ((const volatile uint32_t *) (0x50040000 + 0x80)))

  // Field (width: 16 bits): JDATA1
    inline uint32_t ADC1_JDR1_JDATA1 (const uint32_t inValue) { return (inValue & 65535U) << 0 ; }

//-------------------- injected data register 2
#define ADC1_JDR2(group) (* ((const volatile uint32_t *) (kBaseAddress_ADC1 [group] + 0x84)))
#define ADC1_JDR2 (* ((const volatile uint32_t *) (0x50040000 + 0x84)))

  // Field (width: 16 bits): JDATA2
    inline uint32_t ADC1_JDR2_JDATA2 (const uint32_t inValue) { return (inValue & 65535U) << 0 ; }

//-------------------- injected data register 3
#define ADC1_JDR3(group) (* ((const volatile uint32_t *) (kBaseAddress_ADC1 [group] + 0x88)))
#define ADC1_JDR3 (* ((const volatile uint32_t *) (0x50040000 + 0x88)))

  // Field (width: 16 bits): JDATA3
    inline uint32_t ADC1_JDR3_JDATA3 (const uint32_t inValue) { return (inValue & 65535U) << 0 ; }

//-------------------- injected data register 4
#define ADC1_JDR4(group) (* ((const volatile uint32_t *) (kBaseAddress_ADC1 [group] + 0x8C)))
#define ADC1_JDR4 (* ((const volatile uint32_t *) (0x50040000 + 0x8C)))

  // Field (width: 16 bits): JDATA4
    inline uint32_t ADC1_JDR4_JDATA4 (const uint32_t inValue) { return (inValue & 65535U) << 0 ; }

//-------------------- configuration register
#define ADC1_CFGR(group) (* ((volatile uint32_t *) (kBaseAddress_ADC1 [group] + 0xC)))
#define ADC1_CFGR (* ((volatile uint32_t *) (0x50040000 + 0xC)))

  // Boolean field: JQDIS
    static const uint32_t ADC1_CFGR_JQDIS = 1U << 31 ;

  // Boolean field: JAWD1EN
    static const uint32_t ADC1_CFGR_JAWD1EN = 1U << 24 ;

  // Boolean field: AWD1EN
    static const uint32_t ADC1_CFGR_AWD1EN = 1U << 23 ;

  // Boolean field: JQM
    static const uint32_t ADC1_CFGR_JQM = 1U << 21 ;

  // Boolean field: CONT
    static const uint32_t ADC1_CFGR_CONT = 1U << 13 ;

  // Boolean field: AUTDLY
    static const uint32_t ADC1_CFGR_AUTDLY = 1U << 14 ;

  // Boolean field: AWD1SGL
    static const uint32_t ADC1_CFGR_AWD1SGL = 1U << 22 ;

  // Boolean field: DISCEN
    static const uint32_t ADC1_CFGR_DISCEN = 1U << 16 ;

  // Field (width: 2 bits): EXTEN
    inline uint32_t ADC1_CFGR_EXTEN (const uint32_t inValue) { return (inValue & 3U) << 10 ; }

  // Boolean field: ALIGN
    static const uint32_t ADC1_CFGR_ALIGN = 1U << 5 ;

  // Boolean field: JDISCEN
    static const uint32_t ADC1_CFGR_JDISCEN = 1U << 20 ;

  // Boolean field: DMAEN
    static const uint32_t ADC1_CFGR_DMAEN = 1U << 0 ;

  // Boolean field: JAUTO
    static const uint32_t ADC1_CFGR_JAUTO = 1U << 25 ;

  // Field (width: 4 bits): EXTSEL
    inline uint32_t ADC1_CFGR_EXTSEL (const uint32_t inValue) { return (inValue & 15U) << 6 ; }

  // Field (width: 3 bits): DISCNUM
    inline uint32_t ADC1_CFGR_DISCNUM (const uint32_t inValue) { return (inValue & 7U) << 17 ; }

  // Field (width: 5 bits): AWDCH1CH
    inline uint32_t ADC1_CFGR_AWDCH1CH (const uint32_t inValue) { return (inValue & 31U) << 26 ; }

  // Boolean field: DMACFG
    static const uint32_t ADC1_CFGR_DMACFG = 1U << 1 ;

  // Field (width: 2 bits): RES
    inline uint32_t ADC1_CFGR_RES (const uint32_t inValue) { return (inValue & 3U) << 3 ; }

  // Boolean field: OVRMOD
    static const uint32_t ADC1_CFGR_OVRMOD = 1U << 12 ;

//-------------------- configuration register
#define ADC1_CFGR2(group) (* ((volatile uint32_t *) (kBaseAddress_ADC1 [group] + 0x10)))
#define ADC1_CFGR2 (* ((volatile uint32_t *) (0x50040000 + 0x10)))

  // Boolean field: EXTEN
    static const uint32_t ADC1_CFGR2_ROVSM = 1U << 10 ;

  // Boolean field: DMAEN
    static const uint32_t ADC1_CFGR2_ROVSE = 1U << 0 ;

  // Field (width: 3 bits): RES
    inline uint32_t ADC1_CFGR2_OVSR (const uint32_t inValue) { return (inValue & 7U) << 2 ; }

  // Field (width: 4 bits): ALIGN
    inline uint32_t ADC1_CFGR2_OVSS (const uint32_t inValue) { return (inValue & 15U) << 5 ; }

  // Boolean field: DMACFG
    static const uint32_t ADC1_CFGR2_JOVSE = 1U << 1 ;

  // Boolean field: EXTSEL
    static const uint32_t ADC1_CFGR2_TOVS = 1U << 9 ;

//-------------------- injected sequence register
#define ADC1_JSQR(group) (* ((volatile uint32_t *) (kBaseAddress_ADC1 [group] + 0x4C)))
#define ADC1_JSQR (* ((volatile uint32_t *) (0x50040000 + 0x4C)))

  // Field (width: 2 bits): JL
    inline uint32_t ADC1_JSQR_JL (const uint32_t inValue) { return (inValue & 3U) << 0 ; }

  // Field (width: 2 bits): JEXTEN
    inline uint32_t ADC1_JSQR_JEXTEN (const uint32_t inValue) { return (inValue & 3U) << 6 ; }

  // Field (width: 5 bits): JSQ4
    inline uint32_t ADC1_JSQR_JSQ4 (const uint32_t inValue) { return (inValue & 31U) << 26 ; }

  // Field (width: 5 bits): JSQ2
    inline uint32_t ADC1_JSQR_JSQ2 (const uint32_t inValue) { return (inValue & 31U) << 14 ; }

  // Field (width: 5 bits): JSQ3
    inline uint32_t ADC1_JSQR_JSQ3 (const uint32_t inValue) { return (inValue & 31U) << 20 ; }

  // Field (width: 4 bits): JEXTSEL
    inline uint32_t ADC1_JSQR_JEXTSEL (const uint32_t inValue) { return (inValue & 15U) << 2 ; }

  // Field (width: 5 bits): JSQ1
    inline uint32_t ADC1_JSQR_JSQ1 (const uint32_t inValue) { return (inValue & 31U) << 8 ; }

//-------------------- Calibration Factors
#define ADC1_CALFACT(group) (* ((volatile uint32_t *) (kBaseAddress_ADC1 [group] + 0xB4)))
#define ADC1_CALFACT (* ((volatile uint32_t *) (0x50040000 + 0xB4)))

  // Field (width: 7 bits): CALFACT_D
    inline uint32_t ADC1_CALFACT_CALFACT_D (const uint32_t inValue) { return (inValue & 127U) << 16 ; }

  // Field (width: 7 bits): CALFACT_S
    inline uint32_t ADC1_CALFACT_CALFACT_S (const uint32_t inValue) { return (inValue & 127U) << 0 ; }

//-------------------- sample time register 2
#define ADC1_SMPR2(group) (* ((volatile uint32_t *) (kBaseAddress_ADC1 [group] + 0x18)))
#define ADC1_SMPR2 (* ((volatile uint32_t *) (0x50040000 + 0x18)))

  // Field (width: 3 bits): SMP18
    inline uint32_t ADC1_SMPR2_SMP18 (const uint32_t inValue) { return (inValue & 7U) << 24 ; }

  // Field (width: 3 bits): SMP12
    inline uint32_t ADC1_SMPR2_SMP12 (const uint32_t inValue) { return (inValue & 7U) << 6 ; }

  // Field (width: 3 bits): SMP13
    inline uint32_t ADC1_SMPR2_SMP13 (const uint32_t inValue) { return (inValue & 7U) << 9 ; }

  // Field (width: 3 bits): SMP10
    inline uint32_t ADC1_SMPR2_SMP10 (const uint32_t inValue) { return (inValue & 7U) << 0 ; }

  // Field (width: 3 bits): SMP11
    inline uint32_t ADC1_SMPR2_SMP11 (const uint32_t inValue) { return (inValue & 7U) << 3 ; }

  // Field (width: 3 bits): SMP16
    inline uint32_t ADC1_SMPR2_SMP16 (const uint32_t inValue) { return (inValue & 7U) << 18 ; }

  // Field (width: 3 bits): SMP17
    inline uint32_t ADC1_SMPR2_SMP17 (const uint32_t inValue) { return (inValue & 7U) << 21 ; }

  // Field (width: 3 bits): SMP14
    inline uint32_t ADC1_SMPR2_SMP14 (const uint32_t inValue) { return (inValue & 7U) << 12 ; }

  // Field (width: 3 bits): SMP15
    inline uint32_t ADC1_SMPR2_SMP15 (const uint32_t inValue) { return (inValue & 7U) << 15 ; }

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
// Peripheral group ADC123
//                ADC123_Common at 0x50040300
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

static const uint32_t kBaseAddress_ADC123 [1] = {0x50040300} ;

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

//-------------------- ADC common control register
#define ADC123_CCR(group) (* ((volatile uint32_t *) (kBaseAddress_ADC123 [group] + 0x8)))
#define ADC123_Common_CCR (* ((volatile uint32_t *) (0x50040300 + 0x8)))

  // Boolean field: CH18SEL
    static const uint32_t ADC123_CCR_CH18SEL = 1U << 24 ;

  // Boolean field: VREFINT enable
    static const uint32_t ADC123_CCR_VREFEN = 1U << 22 ;

  // Field (width: 4 bits): ADC prescaler
    inline uint32_t ADC123_CCR_PRESC (const uint32_t inValue) { return (inValue & 15U) << 18 ; }

  // Field (width: 2 bits): Direct memory access mode for multi ADC
              mode
    inline uint32_t ADC123_CCR_MDMA (const uint32_t inValue) { return (inValue & 3U) << 14 ; }

  // Field (width: 4 bits): Delay between 2 sampling
              phases
    inline uint32_t ADC123_CCR_DELAY (const uint32_t inValue) { return (inValue & 15U) << 8 ; }

  // Boolean field: CH17SEL
    static const uint32_t ADC123_CCR_CH17SEL = 1U << 23 ;

  // Field (width: 5 bits): Dual ADC mode selection
    inline uint32_t ADC123_CCR_DUAL (const uint32_t inValue) { return (inValue & 31U) << 0 ; }

  // Field (width: 2 bits): ADC clock mode
    inline uint32_t ADC123_CCR_CKMODE (const uint32_t inValue) { return (inValue & 3U) << 16 ; }

  // Boolean field: DMA configuration (for multi-ADC
              mode)
    static const uint32_t ADC123_CCR_DMACFG = 1U << 13 ;

//-------------------- ADC common regular data register for dual
          and triple modes
#define ADC123_CDR(group) (* ((const volatile uint32_t *) (kBaseAddress_ADC123 [group] + 0xC)))
#define ADC123_Common_CDR (* ((const volatile uint32_t *) (0x50040300 + 0xC)))

  // Field (width: 16 bits): Regular data of the slave
              ADC
    inline uint32_t ADC123_CDR_RDATA_SLV (const uint32_t inValue) { return (inValue & 65535U) << 16 ; }

  // Field (width: 16 bits): Regular data of the master
              ADC
    inline uint32_t ADC123_CDR_RDATA_MST (const uint32_t inValue) { return (inValue & 65535U) << 0 ; }

//-------------------- ADC Common status register
#define ADC123_CSR(group) (* ((const volatile uint32_t *) (kBaseAddress_ADC123 [group] + 0x0)))
#define ADC123_Common_CSR (* ((const volatile uint32_t *) (0x50040300 + 0x0)))

  // Boolean field: Overrun flag of the slave
              ADC
    static const uint32_t ADC123_CSR_OVR_SLV = 1U << 20 ;

  // Boolean field: JEOC_MST
    static const uint32_t ADC123_CSR_JEOC_MST = 1U << 5 ;

  // Boolean field: Analog watchdog 1 flag of the slave
              ADC
    static const uint32_t ADC123_CSR_AWD1_SLV = 1U << 23 ;

  // Boolean field: Injected Context Queue Overflow flag of
              the slave ADC
    static const uint32_t ADC123_CSR_JQOVF_SLV = 1U << 26 ;

  // Boolean field: EOSMP_SLV
    static const uint32_t ADC123_CSR_EOSMP_SLV = 1U << 17 ;

  // Boolean field: AWD2_MST
    static const uint32_t ADC123_CSR_AWD2_MST = 1U << 8 ;

  // Boolean field: EOSMP_MST
    static const uint32_t ADC123_CSR_EOSMP_MST = 1U << 1 ;

  // Boolean field: End of regular sequence flag of the
              slave ADC
    static const uint32_t ADC123_CSR_EOS_SLV = 1U << 19 ;

  // Boolean field: End of regular conversion of the slave
              ADC
    static const uint32_t ADC123_CSR_EOC_SLV = 1U << 18 ;

  // Boolean field: ADDRDY_MST
    static const uint32_t ADC123_CSR_ADDRDY_MST = 1U << 0 ;

  // Boolean field: OVR_MST
    static const uint32_t ADC123_CSR_OVR_MST = 1U << 4 ;

  // Boolean field: JQOVF_MST
    static const uint32_t ADC123_CSR_JQOVF_MST = 1U << 10 ;

  // Boolean field: ADRDY_SLV
    static const uint32_t ADC123_CSR_ADRDY_SLV = 1U << 16 ;

  // Boolean field: EOS_MST
    static const uint32_t ADC123_CSR_EOS_MST = 1U << 3 ;

  // Boolean field: Analog watchdog 2 flag of the slave
              ADC
    static const uint32_t ADC123_CSR_AWD2_SLV = 1U << 24 ;

  // Boolean field: AWD1_MST
    static const uint32_t ADC123_CSR_AWD1_MST = 1U << 7 ;

  // Boolean field: End of injected conversion flag of the
              slave ADC
    static const uint32_t ADC123_CSR_JEOC_SLV = 1U << 21 ;

  // Boolean field: EOC_MST
    static const uint32_t ADC123_CSR_EOC_MST = 1U << 2 ;

  // Boolean field: Analog watchdog 3 flag of the slave
              ADC
    static const uint32_t ADC123_CSR_AWD3_SLV = 1U << 25 ;

  // Boolean field: JEOS_MST
    static const uint32_t ADC123_CSR_JEOS_MST = 1U << 6 ;

  // Boolean field: End of injected sequence flag of the
              slave ADC
    static const uint32_t ADC123_CSR_JEOS_SLV = 1U << 22 ;

  // Boolean field: AWD3_MST
    static const uint32_t ADC123_CSR_AWD3_MST = 1U << 9 ;

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
// Peripheral group AES
//                AES at 0x50060000
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

static const uint32_t kBaseAddress_AES [1] = {0x50060000} ;

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

//-------------------- initialization vector register
          3
#define AES_IVR3(group) (* ((volatile uint32_t *) (kBaseAddress_AES [group] + 0x2C)))
#define AES_IVR3 (* ((volatile uint32_t *) (0x50060000 + 0x2C)))

//-------------------- status register
#define AES_SR(group) (* ((const volatile uint32_t *) (kBaseAddress_AES [group] + 0x4)))
#define AES_SR (* ((const volatile uint32_t *) (0x50060000 + 0x4)))

  // Boolean field: Write error flag
    static const uint32_t AES_SR_WRERR = 1U << 2 ;

  // Boolean field: Computation complete flag
    static const uint32_t AES_SR_CCF = 1U << 0 ;

  // Boolean field: Read error flag
    static const uint32_t AES_SR_RDERR = 1U << 1 ;

//-------------------- initialization vector register
          1
#define AES_IVR1(group) (* ((volatile uint32_t *) (kBaseAddress_AES [group] + 0x24)))
#define AES_IVR1 (* ((volatile uint32_t *) (0x50060000 + 0x24)))

//-------------------- initialization vector register
          0
#define AES_IVR0(group) (* ((volatile uint32_t *) (kBaseAddress_AES [group] + 0x20)))
#define AES_IVR0 (* ((volatile uint32_t *) (0x50060000 + 0x20)))

//-------------------- initialization vector register
          2
#define AES_IVR2(group) (* ((volatile uint32_t *) (kBaseAddress_AES [group] + 0x28)))
#define AES_IVR2 (* ((volatile uint32_t *) (0x50060000 + 0x28)))

//-------------------- key register 2
#define AES_KEYR2(group) (* ((volatile uint32_t *) (kBaseAddress_AES [group] + 0x18)))
#define AES_KEYR2 (* ((volatile uint32_t *) (0x50060000 + 0x18)))

//-------------------- key register 3
#define AES_KEYR3(group) (* ((volatile uint32_t *) (kBaseAddress_AES [group] + 0x1C)))
#define AES_KEYR3 (* ((volatile uint32_t *) (0x50060000 + 0x1C)))

//-------------------- key register 0
#define AES_KEYR0(group) (* ((volatile uint32_t *) (kBaseAddress_AES [group] + 0x10)))
#define AES_KEYR0 (* ((volatile uint32_t *) (0x50060000 + 0x10)))

//-------------------- key register 1
#define AES_KEYR1(group) (* ((volatile uint32_t *) (kBaseAddress_AES [group] + 0x14)))
#define AES_KEYR1 (* ((volatile uint32_t *) (0x50060000 + 0x14)))

//-------------------- data input register
#define AES_DINR(group) (* ((volatile uint32_t *) (kBaseAddress_AES [group] + 0x8)))
#define AES_DINR (* ((volatile uint32_t *) (0x50060000 + 0x8)))

//-------------------- data output register
#define AES_DOUTR(group) (* ((const volatile uint32_t *) (kBaseAddress_AES [group] + 0xC)))
#define AES_DOUTR (* ((const volatile uint32_t *) (0x50060000 + 0xC)))

//-------------------- control register
#define AES_CR(group) (* ((volatile uint32_t *) (kBaseAddress_AES [group] + 0x0)))
#define AES_CR (* ((volatile uint32_t *) (0x50060000 + 0x0)))

  // Boolean field: CCF flag interrupt enable
    static const uint32_t AES_CR_CCFIE = 1U << 9 ;

  // Boolean field: Error clear
    static const uint32_t AES_CR_ERRC = 1U << 8 ;

  // Boolean field: Enable DMA management of data input
              phase
    static const uint32_t AES_CR_DMAINEN = 1U << 11 ;

  // Field (width: 2 bits): AES chaining mode
    inline uint32_t AES_CR_CHMOD (const uint32_t inValue) { return (inValue & 3U) << 5 ; }

  // Boolean field: Computation Complete Flag
              Clear
    static const uint32_t AES_CR_CCFC = 1U << 7 ;

  // Field (width: 2 bits): Data type selection (for data in and
              data out to/from the cryptographic
              block)
    inline uint32_t AES_CR_DATATYPE (const uint32_t inValue) { return (inValue & 3U) << 1 ; }

  // Boolean field: Error interrupt enable
    static const uint32_t AES_CR_ERRIE = 1U << 10 ;

  // Boolean field: AES enable
    static const uint32_t AES_CR_EN = 1U << 0 ;

  // Field (width: 2 bits): AES operating mode
    inline uint32_t AES_CR_MODE (const uint32_t inValue) { return (inValue & 3U) << 3 ; }

  // Boolean field: Enable DMA management of data output
              phase
    static const uint32_t AES_CR_DMAOUTEN = 1U << 12 ;

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
// Peripheral group CAN
//                CAN1 at 0x40006400
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

static const uint32_t kBaseAddress_CAN [1] = {0x40006400} ;

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

//-------------------- mailbox data low register
#define CAN_TDL0R(group) (* ((volatile uint32_t *) (kBaseAddress_CAN [group] + 0x188)))
#define CAN1_TDL0R (* ((volatile uint32_t *) (0x40006400 + 0x188)))

  // Field (width: 8 bits): DATA1
    inline uint32_t CAN_TDL0R_DATA1 (const uint32_t inValue) { return (inValue & 255U) << 8 ; }

  // Field (width: 8 bits): DATA0
    inline uint32_t CAN_TDL0R_DATA0 (const uint32_t inValue) { return (inValue & 255U) << 0 ; }

  // Field (width: 8 bits): DATA3
    inline uint32_t CAN_TDL0R_DATA3 (const uint32_t inValue) { return (inValue & 255U) << 24 ; }

  // Field (width: 8 bits): DATA2
    inline uint32_t CAN_TDL0R_DATA2 (const uint32_t inValue) { return (inValue & 255U) << 16 ; }

//-------------------- mailbox data high register
#define CAN_TDH1R(group) (* ((volatile uint32_t *) (kBaseAddress_CAN [group] + 0x19C)))
#define CAN1_TDH1R (* ((volatile uint32_t *) (0x40006400 + 0x19C)))

  // Field (width: 8 bits): DATA5
    inline uint32_t CAN_TDH1R_DATA5 (const uint32_t inValue) { return (inValue & 255U) << 8 ; }

  // Field (width: 8 bits): DATA4
    inline uint32_t CAN_TDH1R_DATA4 (const uint32_t inValue) { return (inValue & 255U) << 0 ; }

  // Field (width: 8 bits): DATA7
    inline uint32_t CAN_TDH1R_DATA7 (const uint32_t inValue) { return (inValue & 255U) << 24 ; }

  // Field (width: 8 bits): DATA6
    inline uint32_t CAN_TDH1R_DATA6 (const uint32_t inValue) { return (inValue & 255U) << 16 ; }

//-------------------- Filter bank 10 register 2
#define CAN_F10R2(group) (* ((volatile uint32_t *) (kBaseAddress_CAN [group] + 0x294)))
#define CAN1_F10R2 (* ((volatile uint32_t *) (0x40006400 + 0x294)))

  // Boolean field: Filter bits
    static const uint32_t CAN_F10R2_FB3 = 1U << 3 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F10R2_FB2 = 1U << 2 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F10R2_FB1 = 1U << 1 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F10R2_FB0 = 1U << 0 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F10R2_FB7 = 1U << 7 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F10R2_FB6 = 1U << 6 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F10R2_FB5 = 1U << 5 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F10R2_FB4 = 1U << 4 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F10R2_FB9 = 1U << 9 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F10R2_FB8 = 1U << 8 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F10R2_FB22 = 1U << 22 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F10R2_FB23 = 1U << 23 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F10R2_FB20 = 1U << 20 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F10R2_FB21 = 1U << 21 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F10R2_FB26 = 1U << 26 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F10R2_FB27 = 1U << 27 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F10R2_FB24 = 1U << 24 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F10R2_FB25 = 1U << 25 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F10R2_FB28 = 1U << 28 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F10R2_FB29 = 1U << 29 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F10R2_FB17 = 1U << 17 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F10R2_FB16 = 1U << 16 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F10R2_FB15 = 1U << 15 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F10R2_FB14 = 1U << 14 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F10R2_FB13 = 1U << 13 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F10R2_FB12 = 1U << 12 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F10R2_FB11 = 1U << 11 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F10R2_FB10 = 1U << 10 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F10R2_FB31 = 1U << 31 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F10R2_FB30 = 1U << 30 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F10R2_FB19 = 1U << 19 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F10R2_FB18 = 1U << 18 ;

//-------------------- Filter bank 10 register 1
#define CAN_F10R1(group) (* ((volatile uint32_t *) (kBaseAddress_CAN [group] + 0x290)))
#define CAN1_F10R1 (* ((volatile uint32_t *) (0x40006400 + 0x290)))

  // Boolean field: Filter bits
    static const uint32_t CAN_F10R1_FB3 = 1U << 3 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F10R1_FB2 = 1U << 2 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F10R1_FB1 = 1U << 1 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F10R1_FB0 = 1U << 0 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F10R1_FB7 = 1U << 7 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F10R1_FB6 = 1U << 6 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F10R1_FB5 = 1U << 5 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F10R1_FB4 = 1U << 4 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F10R1_FB9 = 1U << 9 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F10R1_FB8 = 1U << 8 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F10R1_FB22 = 1U << 22 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F10R1_FB23 = 1U << 23 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F10R1_FB20 = 1U << 20 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F10R1_FB21 = 1U << 21 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F10R1_FB26 = 1U << 26 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F10R1_FB27 = 1U << 27 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F10R1_FB24 = 1U << 24 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F10R1_FB25 = 1U << 25 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F10R1_FB28 = 1U << 28 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F10R1_FB29 = 1U << 29 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F10R1_FB17 = 1U << 17 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F10R1_FB16 = 1U << 16 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F10R1_FB15 = 1U << 15 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F10R1_FB14 = 1U << 14 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F10R1_FB13 = 1U << 13 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F10R1_FB12 = 1U << 12 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F10R1_FB11 = 1U << 11 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F10R1_FB10 = 1U << 10 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F10R1_FB31 = 1U << 31 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F10R1_FB30 = 1U << 30 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F10R1_FB19 = 1U << 19 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F10R1_FB18 = 1U << 18 ;

//-------------------- mailbox data high register
#define CAN_TDH0R(group) (* ((volatile uint32_t *) (kBaseAddress_CAN [group] + 0x18C)))
#define CAN1_TDH0R (* ((volatile uint32_t *) (0x40006400 + 0x18C)))

  // Field (width: 8 bits): DATA5
    inline uint32_t CAN_TDH0R_DATA5 (const uint32_t inValue) { return (inValue & 255U) << 8 ; }

  // Field (width: 8 bits): DATA4
    inline uint32_t CAN_TDH0R_DATA4 (const uint32_t inValue) { return (inValue & 255U) << 0 ; }

  // Field (width: 8 bits): DATA7
    inline uint32_t CAN_TDH0R_DATA7 (const uint32_t inValue) { return (inValue & 255U) << 24 ; }

  // Field (width: 8 bits): DATA6
    inline uint32_t CAN_TDH0R_DATA6 (const uint32_t inValue) { return (inValue & 255U) << 16 ; }

//-------------------- receive FIFO mailbox identifier
          register
#define CAN_RI0R(group) (* ((const volatile uint32_t *) (kBaseAddress_CAN [group] + 0x1B0)))
#define CAN1_RI0R (* ((const volatile uint32_t *) (0x40006400 + 0x1B0)))

  // Field (width: 11 bits): STID
    inline uint32_t CAN_RI0R_STID (const uint32_t inValue) { return (inValue & 2047U) << 21 ; }

  // Boolean field: IDE
    static const uint32_t CAN_RI0R_IDE = 1U << 2 ;

  // Field (width: 18 bits): EXID
    inline uint32_t CAN_RI0R_EXID (const uint32_t inValue) { return (inValue & 262143U) << 3 ; }

  // Boolean field: RTR
    static const uint32_t CAN_RI0R_RTR = 1U << 1 ;

//-------------------- receive FIFO 1 register
#define CAN_RF1R(group) (* ((const volatile uint32_t *) (kBaseAddress_CAN [group] + 0x10)))
#define CAN1_RF1R (* ((const volatile uint32_t *) (0x40006400 + 0x10)))

  // Boolean field: FULL1
    static const uint32_t CAN_RF1R_FULL1 = 1U << 3 ;

  // Field (width: 2 bits): FMP1
    inline uint32_t CAN_RF1R_FMP1 (const uint32_t inValue) { return (inValue & 3U) << 0 ; }

  // Boolean field: RFOM1
    static const uint32_t CAN_RF1R_RFOM1 = 1U << 5 ;

  // Boolean field: FOVR1
    static const uint32_t CAN_RF1R_FOVR1 = 1U << 4 ;

//-------------------- filter scale register
#define CAN_FS1R(group) (* ((volatile uint32_t *) (kBaseAddress_CAN [group] + 0x20C)))
#define CAN1_FS1R (* ((volatile uint32_t *) (0x40006400 + 0x20C)))

  // Boolean field: Filter scale configuration
    static const uint32_t CAN_FS1R_FSC12 = 1U << 12 ;

  // Boolean field: Filter scale configuration
    static const uint32_t CAN_FS1R_FSC13 = 1U << 13 ;

  // Boolean field: Filter scale configuration
    static const uint32_t CAN_FS1R_FSC10 = 1U << 10 ;

  // Boolean field: Filter scale configuration
    static const uint32_t CAN_FS1R_FSC11 = 1U << 11 ;

  // Boolean field: Filter scale configuration
    static const uint32_t CAN_FS1R_FSC4 = 1U << 4 ;

  // Boolean field: Filter scale configuration
    static const uint32_t CAN_FS1R_FSC5 = 1U << 5 ;

  // Boolean field: Filter scale configuration
    static const uint32_t CAN_FS1R_FSC6 = 1U << 6 ;

  // Boolean field: Filter scale configuration
    static const uint32_t CAN_FS1R_FSC7 = 1U << 7 ;

  // Boolean field: Filter scale configuration
    static const uint32_t CAN_FS1R_FSC0 = 1U << 0 ;

  // Boolean field: Filter scale configuration
    static const uint32_t CAN_FS1R_FSC1 = 1U << 1 ;

  // Boolean field: Filter scale configuration
    static const uint32_t CAN_FS1R_FSC2 = 1U << 2 ;

  // Boolean field: Filter scale configuration
    static const uint32_t CAN_FS1R_FSC3 = 1U << 3 ;

  // Boolean field: Filter scale configuration
    static const uint32_t CAN_FS1R_FSC8 = 1U << 8 ;

  // Boolean field: Filter scale configuration
    static const uint32_t CAN_FS1R_FSC9 = 1U << 9 ;

//-------------------- Filter bank 5 register 2
#define CAN_F5R2(group) (* ((volatile uint32_t *) (kBaseAddress_CAN [group] + 0x26C)))
#define CAN1_F5R2 (* ((volatile uint32_t *) (0x40006400 + 0x26C)))

  // Boolean field: Filter bits
    static const uint32_t CAN_F5R2_FB3 = 1U << 3 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F5R2_FB2 = 1U << 2 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F5R2_FB1 = 1U << 1 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F5R2_FB0 = 1U << 0 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F5R2_FB7 = 1U << 7 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F5R2_FB6 = 1U << 6 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F5R2_FB5 = 1U << 5 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F5R2_FB4 = 1U << 4 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F5R2_FB9 = 1U << 9 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F5R2_FB8 = 1U << 8 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F5R2_FB22 = 1U << 22 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F5R2_FB23 = 1U << 23 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F5R2_FB20 = 1U << 20 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F5R2_FB21 = 1U << 21 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F5R2_FB26 = 1U << 26 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F5R2_FB27 = 1U << 27 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F5R2_FB24 = 1U << 24 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F5R2_FB25 = 1U << 25 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F5R2_FB28 = 1U << 28 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F5R2_FB29 = 1U << 29 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F5R2_FB17 = 1U << 17 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F5R2_FB16 = 1U << 16 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F5R2_FB15 = 1U << 15 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F5R2_FB14 = 1U << 14 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F5R2_FB13 = 1U << 13 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F5R2_FB12 = 1U << 12 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F5R2_FB11 = 1U << 11 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F5R2_FB10 = 1U << 10 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F5R2_FB31 = 1U << 31 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F5R2_FB30 = 1U << 30 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F5R2_FB19 = 1U << 19 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F5R2_FB18 = 1U << 18 ;

//-------------------- Filter bank 26 register 1
#define CAN_F26R1(group) (* ((volatile uint32_t *) (kBaseAddress_CAN [group] + 0x310)))
#define CAN1_F26R1 (* ((volatile uint32_t *) (0x40006400 + 0x310)))

  // Boolean field: Filter bits
    static const uint32_t CAN_F26R1_FB3 = 1U << 3 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F26R1_FB2 = 1U << 2 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F26R1_FB1 = 1U << 1 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F26R1_FB0 = 1U << 0 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F26R1_FB7 = 1U << 7 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F26R1_FB6 = 1U << 6 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F26R1_FB5 = 1U << 5 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F26R1_FB4 = 1U << 4 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F26R1_FB9 = 1U << 9 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F26R1_FB8 = 1U << 8 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F26R1_FB22 = 1U << 22 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F26R1_FB23 = 1U << 23 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F26R1_FB20 = 1U << 20 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F26R1_FB21 = 1U << 21 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F26R1_FB26 = 1U << 26 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F26R1_FB27 = 1U << 27 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F26R1_FB24 = 1U << 24 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F26R1_FB25 = 1U << 25 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F26R1_FB28 = 1U << 28 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F26R1_FB29 = 1U << 29 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F26R1_FB17 = 1U << 17 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F26R1_FB16 = 1U << 16 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F26R1_FB15 = 1U << 15 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F26R1_FB14 = 1U << 14 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F26R1_FB13 = 1U << 13 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F26R1_FB12 = 1U << 12 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F26R1_FB11 = 1U << 11 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F26R1_FB10 = 1U << 10 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F26R1_FB31 = 1U << 31 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F26R1_FB30 = 1U << 30 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F26R1_FB19 = 1U << 19 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F26R1_FB18 = 1U << 18 ;

//-------------------- Filter bank 26 register 2
#define CAN_F26R2(group) (* ((volatile uint32_t *) (kBaseAddress_CAN [group] + 0x314)))
#define CAN1_F26R2 (* ((volatile uint32_t *) (0x40006400 + 0x314)))

  // Boolean field: Filter bits
    static const uint32_t CAN_F26R2_FB3 = 1U << 3 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F26R2_FB2 = 1U << 2 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F26R2_FB1 = 1U << 1 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F26R2_FB0 = 1U << 0 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F26R2_FB7 = 1U << 7 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F26R2_FB6 = 1U << 6 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F26R2_FB5 = 1U << 5 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F26R2_FB4 = 1U << 4 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F26R2_FB9 = 1U << 9 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F26R2_FB8 = 1U << 8 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F26R2_FB22 = 1U << 22 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F26R2_FB23 = 1U << 23 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F26R2_FB20 = 1U << 20 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F26R2_FB21 = 1U << 21 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F26R2_FB26 = 1U << 26 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F26R2_FB27 = 1U << 27 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F26R2_FB24 = 1U << 24 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F26R2_FB25 = 1U << 25 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F26R2_FB28 = 1U << 28 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F26R2_FB29 = 1U << 29 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F26R2_FB17 = 1U << 17 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F26R2_FB16 = 1U << 16 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F26R2_FB15 = 1U << 15 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F26R2_FB14 = 1U << 14 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F26R2_FB13 = 1U << 13 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F26R2_FB12 = 1U << 12 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F26R2_FB11 = 1U << 11 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F26R2_FB10 = 1U << 10 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F26R2_FB31 = 1U << 31 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F26R2_FB30 = 1U << 30 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F26R2_FB19 = 1U << 19 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F26R2_FB18 = 1U << 18 ;

//-------------------- master control register
#define CAN_MCR(group) (* ((volatile uint32_t *) (kBaseAddress_CAN [group] + 0x0)))
#define CAN1_MCR (* ((volatile uint32_t *) (0x40006400 + 0x0)))

  // Boolean field: RESET
    static const uint32_t CAN_MCR_RESET = 1U << 15 ;

  // Boolean field: INRQ
    static const uint32_t CAN_MCR_INRQ = 1U << 0 ;

  // Boolean field: NART
    static const uint32_t CAN_MCR_NART = 1U << 4 ;

  // Boolean field: TXFP
    static const uint32_t CAN_MCR_TXFP = 1U << 2 ;

  // Boolean field: ABOM
    static const uint32_t CAN_MCR_ABOM = 1U << 6 ;

  // Boolean field: DBF
    static const uint32_t CAN_MCR_DBF = 1U << 16 ;

  // Boolean field: AWUM
    static const uint32_t CAN_MCR_AWUM = 1U << 5 ;

  // Boolean field: SLEEP
    static const uint32_t CAN_MCR_SLEEP = 1U << 1 ;

  // Boolean field: TTCM
    static const uint32_t CAN_MCR_TTCM = 1U << 7 ;

  // Boolean field: RFLM
    static const uint32_t CAN_MCR_RFLM = 1U << 3 ;

//-------------------- Filter bank 9 register 1
#define CAN_F9R1(group) (* ((volatile uint32_t *) (kBaseAddress_CAN [group] + 0x288)))
#define CAN1_F9R1 (* ((volatile uint32_t *) (0x40006400 + 0x288)))

  // Boolean field: Filter bits
    static const uint32_t CAN_F9R1_FB3 = 1U << 3 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F9R1_FB2 = 1U << 2 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F9R1_FB1 = 1U << 1 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F9R1_FB0 = 1U << 0 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F9R1_FB7 = 1U << 7 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F9R1_FB6 = 1U << 6 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F9R1_FB5 = 1U << 5 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F9R1_FB4 = 1U << 4 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F9R1_FB9 = 1U << 9 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F9R1_FB8 = 1U << 8 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F9R1_FB22 = 1U << 22 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F9R1_FB23 = 1U << 23 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F9R1_FB20 = 1U << 20 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F9R1_FB21 = 1U << 21 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F9R1_FB26 = 1U << 26 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F9R1_FB27 = 1U << 27 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F9R1_FB24 = 1U << 24 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F9R1_FB25 = 1U << 25 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F9R1_FB28 = 1U << 28 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F9R1_FB29 = 1U << 29 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F9R1_FB17 = 1U << 17 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F9R1_FB16 = 1U << 16 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F9R1_FB15 = 1U << 15 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F9R1_FB14 = 1U << 14 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F9R1_FB13 = 1U << 13 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F9R1_FB12 = 1U << 12 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F9R1_FB11 = 1U << 11 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F9R1_FB10 = 1U << 10 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F9R1_FB31 = 1U << 31 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F9R1_FB30 = 1U << 30 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F9R1_FB19 = 1U << 19 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F9R1_FB18 = 1U << 18 ;

//-------------------- mailbox data low register
#define CAN_TDL2R(group) (* ((volatile uint32_t *) (kBaseAddress_CAN [group] + 0x1A8)))
#define CAN1_TDL2R (* ((volatile uint32_t *) (0x40006400 + 0x1A8)))

  // Field (width: 8 bits): DATA1
    inline uint32_t CAN_TDL2R_DATA1 (const uint32_t inValue) { return (inValue & 255U) << 8 ; }

  // Field (width: 8 bits): DATA0
    inline uint32_t CAN_TDL2R_DATA0 (const uint32_t inValue) { return (inValue & 255U) << 0 ; }

  // Field (width: 8 bits): DATA3
    inline uint32_t CAN_TDL2R_DATA3 (const uint32_t inValue) { return (inValue & 255U) << 24 ; }

  // Field (width: 8 bits): DATA2
    inline uint32_t CAN_TDL2R_DATA2 (const uint32_t inValue) { return (inValue & 255U) << 16 ; }

//-------------------- Filter bank 9 register 2
#define CAN_F9R2(group) (* ((volatile uint32_t *) (kBaseAddress_CAN [group] + 0x28C)))
#define CAN1_F9R2 (* ((volatile uint32_t *) (0x40006400 + 0x28C)))

  // Boolean field: Filter bits
    static const uint32_t CAN_F9R2_FB3 = 1U << 3 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F9R2_FB2 = 1U << 2 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F9R2_FB1 = 1U << 1 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F9R2_FB0 = 1U << 0 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F9R2_FB7 = 1U << 7 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F9R2_FB6 = 1U << 6 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F9R2_FB5 = 1U << 5 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F9R2_FB4 = 1U << 4 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F9R2_FB9 = 1U << 9 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F9R2_FB8 = 1U << 8 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F9R2_FB22 = 1U << 22 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F9R2_FB23 = 1U << 23 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F9R2_FB20 = 1U << 20 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F9R2_FB21 = 1U << 21 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F9R2_FB26 = 1U << 26 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F9R2_FB27 = 1U << 27 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F9R2_FB24 = 1U << 24 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F9R2_FB25 = 1U << 25 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F9R2_FB28 = 1U << 28 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F9R2_FB29 = 1U << 29 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F9R2_FB17 = 1U << 17 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F9R2_FB16 = 1U << 16 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F9R2_FB15 = 1U << 15 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F9R2_FB14 = 1U << 14 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F9R2_FB13 = 1U << 13 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F9R2_FB12 = 1U << 12 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F9R2_FB11 = 1U << 11 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F9R2_FB10 = 1U << 10 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F9R2_FB31 = 1U << 31 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F9R2_FB30 = 1U << 30 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F9R2_FB19 = 1U << 19 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F9R2_FB18 = 1U << 18 ;

//-------------------- Filter bank 21 register 2
#define CAN_F21R2(group) (* ((volatile uint32_t *) (kBaseAddress_CAN [group] + 0x2EC)))
#define CAN1_F21R2 (* ((volatile uint32_t *) (0x40006400 + 0x2EC)))

  // Boolean field: Filter bits
    static const uint32_t CAN_F21R2_FB3 = 1U << 3 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F21R2_FB2 = 1U << 2 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F21R2_FB1 = 1U << 1 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F21R2_FB0 = 1U << 0 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F21R2_FB7 = 1U << 7 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F21R2_FB6 = 1U << 6 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F21R2_FB5 = 1U << 5 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F21R2_FB4 = 1U << 4 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F21R2_FB9 = 1U << 9 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F21R2_FB8 = 1U << 8 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F21R2_FB22 = 1U << 22 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F21R2_FB23 = 1U << 23 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F21R2_FB20 = 1U << 20 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F21R2_FB21 = 1U << 21 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F21R2_FB26 = 1U << 26 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F21R2_FB27 = 1U << 27 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F21R2_FB24 = 1U << 24 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F21R2_FB25 = 1U << 25 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F21R2_FB28 = 1U << 28 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F21R2_FB29 = 1U << 29 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F21R2_FB17 = 1U << 17 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F21R2_FB16 = 1U << 16 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F21R2_FB15 = 1U << 15 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F21R2_FB14 = 1U << 14 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F21R2_FB13 = 1U << 13 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F21R2_FB12 = 1U << 12 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F21R2_FB11 = 1U << 11 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F21R2_FB10 = 1U << 10 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F21R2_FB31 = 1U << 31 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F21R2_FB30 = 1U << 30 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F21R2_FB19 = 1U << 19 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F21R2_FB18 = 1U << 18 ;

//-------------------- Filter bank 21 register 1
#define CAN_F21R1(group) (* ((volatile uint32_t *) (kBaseAddress_CAN [group] + 0x2E8)))
#define CAN1_F21R1 (* ((volatile uint32_t *) (0x40006400 + 0x2E8)))

  // Boolean field: Filter bits
    static const uint32_t CAN_F21R1_FB3 = 1U << 3 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F21R1_FB2 = 1U << 2 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F21R1_FB1 = 1U << 1 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F21R1_FB0 = 1U << 0 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F21R1_FB7 = 1U << 7 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F21R1_FB6 = 1U << 6 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F21R1_FB5 = 1U << 5 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F21R1_FB4 = 1U << 4 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F21R1_FB9 = 1U << 9 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F21R1_FB8 = 1U << 8 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F21R1_FB22 = 1U << 22 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F21R1_FB23 = 1U << 23 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F21R1_FB20 = 1U << 20 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F21R1_FB21 = 1U << 21 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F21R1_FB26 = 1U << 26 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F21R1_FB27 = 1U << 27 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F21R1_FB24 = 1U << 24 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F21R1_FB25 = 1U << 25 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F21R1_FB28 = 1U << 28 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F21R1_FB29 = 1U << 29 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F21R1_FB17 = 1U << 17 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F21R1_FB16 = 1U << 16 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F21R1_FB15 = 1U << 15 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F21R1_FB14 = 1U << 14 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F21R1_FB13 = 1U << 13 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F21R1_FB12 = 1U << 12 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F21R1_FB11 = 1U << 11 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F21R1_FB10 = 1U << 10 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F21R1_FB31 = 1U << 31 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F21R1_FB30 = 1U << 30 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F21R1_FB19 = 1U << 19 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F21R1_FB18 = 1U << 18 ;

//-------------------- mailbox data length control and time stamp
          register
#define CAN_TDT0R(group) (* ((volatile uint32_t *) (kBaseAddress_CAN [group] + 0x184)))
#define CAN1_TDT0R (* ((volatile uint32_t *) (0x40006400 + 0x184)))

  // Field (width: 4 bits): DLC
    inline uint32_t CAN_TDT0R_DLC (const uint32_t inValue) { return (inValue & 15U) << 0 ; }

  // Boolean field: TGT
    static const uint32_t CAN_TDT0R_TGT = 1U << 8 ;

  // Field (width: 16 bits): TIME
    inline uint32_t CAN_TDT0R_TIME (const uint32_t inValue) { return (inValue & 65535U) << 16 ; }

//-------------------- mailbox identifier register
#define CAN_TI1R(group) (* ((volatile uint32_t *) (kBaseAddress_CAN [group] + 0x190)))
#define CAN1_TI1R (* ((volatile uint32_t *) (0x40006400 + 0x190)))

  // Boolean field: TXRQ
    static const uint32_t CAN_TI1R_TXRQ = 1U << 0 ;

  // Field (width: 11 bits): STID
    inline uint32_t CAN_TI1R_STID (const uint32_t inValue) { return (inValue & 2047U) << 21 ; }

  // Boolean field: IDE
    static const uint32_t CAN_TI1R_IDE = 1U << 2 ;

  // Field (width: 18 bits): EXID
    inline uint32_t CAN_TI1R_EXID (const uint32_t inValue) { return (inValue & 262143U) << 3 ; }

  // Boolean field: RTR
    static const uint32_t CAN_TI1R_RTR = 1U << 1 ;

//-------------------- mailbox data high register
#define CAN_RDT0R(group) (* ((const volatile uint32_t *) (kBaseAddress_CAN [group] + 0x1B4)))
#define CAN1_RDT0R (* ((const volatile uint32_t *) (0x40006400 + 0x1B4)))

  // Field (width: 4 bits): DLC
    inline uint32_t CAN_RDT0R_DLC (const uint32_t inValue) { return (inValue & 15U) << 0 ; }

  // Field (width: 8 bits): FMI
    inline uint32_t CAN_RDT0R_FMI (const uint32_t inValue) { return (inValue & 255U) << 8 ; }

  // Field (width: 16 bits): TIME
    inline uint32_t CAN_RDT0R_TIME (const uint32_t inValue) { return (inValue & 65535U) << 16 ; }

//-------------------- mailbox data low register
#define CAN_TDL1R(group) (* ((volatile uint32_t *) (kBaseAddress_CAN [group] + 0x198)))
#define CAN1_TDL1R (* ((volatile uint32_t *) (0x40006400 + 0x198)))

  // Field (width: 8 bits): DATA1
    inline uint32_t CAN_TDL1R_DATA1 (const uint32_t inValue) { return (inValue & 255U) << 8 ; }

  // Field (width: 8 bits): DATA0
    inline uint32_t CAN_TDL1R_DATA0 (const uint32_t inValue) { return (inValue & 255U) << 0 ; }

  // Field (width: 8 bits): DATA3
    inline uint32_t CAN_TDL1R_DATA3 (const uint32_t inValue) { return (inValue & 255U) << 24 ; }

  // Field (width: 8 bits): DATA2
    inline uint32_t CAN_TDL1R_DATA2 (const uint32_t inValue) { return (inValue & 255U) << 16 ; }

//-------------------- Filter bank 7 register 2
#define CAN_F7R2(group) (* ((volatile uint32_t *) (kBaseAddress_CAN [group] + 0x27C)))
#define CAN1_F7R2 (* ((volatile uint32_t *) (0x40006400 + 0x27C)))

  // Boolean field: Filter bits
    static const uint32_t CAN_F7R2_FB3 = 1U << 3 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F7R2_FB2 = 1U << 2 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F7R2_FB1 = 1U << 1 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F7R2_FB0 = 1U << 0 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F7R2_FB7 = 1U << 7 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F7R2_FB6 = 1U << 6 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F7R2_FB5 = 1U << 5 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F7R2_FB4 = 1U << 4 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F7R2_FB9 = 1U << 9 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F7R2_FB8 = 1U << 8 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F7R2_FB22 = 1U << 22 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F7R2_FB23 = 1U << 23 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F7R2_FB20 = 1U << 20 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F7R2_FB21 = 1U << 21 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F7R2_FB26 = 1U << 26 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F7R2_FB27 = 1U << 27 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F7R2_FB24 = 1U << 24 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F7R2_FB25 = 1U << 25 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F7R2_FB28 = 1U << 28 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F7R2_FB29 = 1U << 29 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F7R2_FB17 = 1U << 17 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F7R2_FB16 = 1U << 16 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F7R2_FB15 = 1U << 15 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F7R2_FB14 = 1U << 14 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F7R2_FB13 = 1U << 13 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F7R2_FB12 = 1U << 12 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F7R2_FB11 = 1U << 11 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F7R2_FB10 = 1U << 10 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F7R2_FB31 = 1U << 31 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F7R2_FB30 = 1U << 30 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F7R2_FB19 = 1U << 19 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F7R2_FB18 = 1U << 18 ;

//-------------------- Filter bank 7 register 1
#define CAN_F7R1(group) (* ((volatile uint32_t *) (kBaseAddress_CAN [group] + 0x278)))
#define CAN1_F7R1 (* ((volatile uint32_t *) (0x40006400 + 0x278)))

  // Boolean field: Filter bits
    static const uint32_t CAN_F7R1_FB3 = 1U << 3 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F7R1_FB2 = 1U << 2 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F7R1_FB1 = 1U << 1 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F7R1_FB0 = 1U << 0 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F7R1_FB7 = 1U << 7 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F7R1_FB6 = 1U << 6 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F7R1_FB5 = 1U << 5 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F7R1_FB4 = 1U << 4 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F7R1_FB9 = 1U << 9 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F7R1_FB8 = 1U << 8 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F7R1_FB22 = 1U << 22 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F7R1_FB23 = 1U << 23 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F7R1_FB20 = 1U << 20 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F7R1_FB21 = 1U << 21 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F7R1_FB26 = 1U << 26 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F7R1_FB27 = 1U << 27 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F7R1_FB24 = 1U << 24 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F7R1_FB25 = 1U << 25 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F7R1_FB28 = 1U << 28 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F7R1_FB29 = 1U << 29 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F7R1_FB17 = 1U << 17 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F7R1_FB16 = 1U << 16 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F7R1_FB15 = 1U << 15 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F7R1_FB14 = 1U << 14 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F7R1_FB13 = 1U << 13 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F7R1_FB12 = 1U << 12 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F7R1_FB11 = 1U << 11 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F7R1_FB10 = 1U << 10 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F7R1_FB31 = 1U << 31 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F7R1_FB30 = 1U << 30 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F7R1_FB19 = 1U << 19 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F7R1_FB18 = 1U << 18 ;

//-------------------- Filter bank 1 register 1
#define CAN_F1R1(group) (* ((volatile uint32_t *) (kBaseAddress_CAN [group] + 0x248)))
#define CAN1_F1R1 (* ((volatile uint32_t *) (0x40006400 + 0x248)))

  // Boolean field: Filter bits
    static const uint32_t CAN_F1R1_FB3 = 1U << 3 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F1R1_FB2 = 1U << 2 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F1R1_FB1 = 1U << 1 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F1R1_FB0 = 1U << 0 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F1R1_FB7 = 1U << 7 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F1R1_FB6 = 1U << 6 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F1R1_FB5 = 1U << 5 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F1R1_FB4 = 1U << 4 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F1R1_FB9 = 1U << 9 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F1R1_FB8 = 1U << 8 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F1R1_FB22 = 1U << 22 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F1R1_FB23 = 1U << 23 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F1R1_FB20 = 1U << 20 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F1R1_FB21 = 1U << 21 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F1R1_FB26 = 1U << 26 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F1R1_FB27 = 1U << 27 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F1R1_FB24 = 1U << 24 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F1R1_FB25 = 1U << 25 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F1R1_FB28 = 1U << 28 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F1R1_FB29 = 1U << 29 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F1R1_FB17 = 1U << 17 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F1R1_FB16 = 1U << 16 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F1R1_FB15 = 1U << 15 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F1R1_FB14 = 1U << 14 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F1R1_FB13 = 1U << 13 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F1R1_FB12 = 1U << 12 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F1R1_FB11 = 1U << 11 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F1R1_FB10 = 1U << 10 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F1R1_FB31 = 1U << 31 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F1R1_FB30 = 1U << 30 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F1R1_FB19 = 1U << 19 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F1R1_FB18 = 1U << 18 ;

//-------------------- Filter bank 1 register 2
#define CAN_F1R2(group) (* ((volatile uint32_t *) (kBaseAddress_CAN [group] + 0x24C)))
#define CAN1_F1R2 (* ((volatile uint32_t *) (0x40006400 + 0x24C)))

  // Boolean field: Filter bits
    static const uint32_t CAN_F1R2_FB3 = 1U << 3 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F1R2_FB2 = 1U << 2 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F1R2_FB1 = 1U << 1 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F1R2_FB0 = 1U << 0 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F1R2_FB7 = 1U << 7 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F1R2_FB6 = 1U << 6 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F1R2_FB5 = 1U << 5 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F1R2_FB4 = 1U << 4 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F1R2_FB9 = 1U << 9 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F1R2_FB8 = 1U << 8 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F1R2_FB22 = 1U << 22 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F1R2_FB23 = 1U << 23 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F1R2_FB20 = 1U << 20 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F1R2_FB21 = 1U << 21 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F1R2_FB26 = 1U << 26 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F1R2_FB27 = 1U << 27 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F1R2_FB24 = 1U << 24 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F1R2_FB25 = 1U << 25 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F1R2_FB28 = 1U << 28 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F1R2_FB29 = 1U << 29 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F1R2_FB17 = 1U << 17 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F1R2_FB16 = 1U << 16 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F1R2_FB15 = 1U << 15 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F1R2_FB14 = 1U << 14 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F1R2_FB13 = 1U << 13 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F1R2_FB12 = 1U << 12 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F1R2_FB11 = 1U << 11 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F1R2_FB10 = 1U << 10 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F1R2_FB31 = 1U << 31 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F1R2_FB30 = 1U << 30 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F1R2_FB19 = 1U << 19 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F1R2_FB18 = 1U << 18 ;

//-------------------- Filter bank 19 register 2
#define CAN_F19R2(group) (* ((volatile uint32_t *) (kBaseAddress_CAN [group] + 0x2DC)))
#define CAN1_F19R2 (* ((volatile uint32_t *) (0x40006400 + 0x2DC)))

  // Boolean field: Filter bits
    static const uint32_t CAN_F19R2_FB3 = 1U << 3 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F19R2_FB2 = 1U << 2 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F19R2_FB1 = 1U << 1 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F19R2_FB0 = 1U << 0 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F19R2_FB7 = 1U << 7 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F19R2_FB6 = 1U << 6 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F19R2_FB5 = 1U << 5 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F19R2_FB4 = 1U << 4 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F19R2_FB9 = 1U << 9 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F19R2_FB8 = 1U << 8 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F19R2_FB22 = 1U << 22 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F19R2_FB23 = 1U << 23 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F19R2_FB20 = 1U << 20 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F19R2_FB21 = 1U << 21 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F19R2_FB26 = 1U << 26 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F19R2_FB27 = 1U << 27 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F19R2_FB24 = 1U << 24 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F19R2_FB25 = 1U << 25 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F19R2_FB28 = 1U << 28 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F19R2_FB29 = 1U << 29 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F19R2_FB17 = 1U << 17 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F19R2_FB16 = 1U << 16 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F19R2_FB15 = 1U << 15 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F19R2_FB14 = 1U << 14 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F19R2_FB13 = 1U << 13 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F19R2_FB12 = 1U << 12 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F19R2_FB11 = 1U << 11 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F19R2_FB10 = 1U << 10 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F19R2_FB31 = 1U << 31 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F19R2_FB30 = 1U << 30 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F19R2_FB19 = 1U << 19 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F19R2_FB18 = 1U << 18 ;

//-------------------- filter mode register
#define CAN_FM1R(group) (* ((volatile uint32_t *) (kBaseAddress_CAN [group] + 0x204)))
#define CAN1_FM1R (* ((volatile uint32_t *) (0x40006400 + 0x204)))

  // Boolean field: Filter mode
    static const uint32_t CAN_FM1R_FBM3 = 1U << 3 ;

  // Boolean field: Filter mode
    static const uint32_t CAN_FM1R_FBM2 = 1U << 2 ;

  // Boolean field: Filter mode
    static const uint32_t CAN_FM1R_FBM1 = 1U << 1 ;

  // Boolean field: Filter mode
    static const uint32_t CAN_FM1R_FBM0 = 1U << 0 ;

  // Boolean field: Filter mode
    static const uint32_t CAN_FM1R_FBM7 = 1U << 7 ;

  // Boolean field: Filter mode
    static const uint32_t CAN_FM1R_FBM6 = 1U << 6 ;

  // Boolean field: Filter mode
    static const uint32_t CAN_FM1R_FBM5 = 1U << 5 ;

  // Boolean field: Filter mode
    static const uint32_t CAN_FM1R_FBM4 = 1U << 4 ;

  // Boolean field: Filter mode
    static const uint32_t CAN_FM1R_FBM9 = 1U << 9 ;

  // Boolean field: Filter mode
    static const uint32_t CAN_FM1R_FBM8 = 1U << 8 ;

  // Boolean field: Filter mode
    static const uint32_t CAN_FM1R_FBM13 = 1U << 13 ;

  // Boolean field: Filter mode
    static const uint32_t CAN_FM1R_FBM10 = 1U << 10 ;

  // Boolean field: Filter mode
    static const uint32_t CAN_FM1R_FBM11 = 1U << 11 ;

  // Boolean field: Filter mode
    static const uint32_t CAN_FM1R_FBM12 = 1U << 12 ;

//-------------------- Filter bank 18 register 2
#define CAN_F18R2(group) (* ((volatile uint32_t *) (kBaseAddress_CAN [group] + 0x2D4)))
#define CAN1_F18R2 (* ((volatile uint32_t *) (0x40006400 + 0x2D4)))

  // Boolean field: Filter bits
    static const uint32_t CAN_F18R2_FB3 = 1U << 3 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F18R2_FB2 = 1U << 2 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F18R2_FB1 = 1U << 1 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F18R2_FB0 = 1U << 0 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F18R2_FB7 = 1U << 7 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F18R2_FB6 = 1U << 6 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F18R2_FB5 = 1U << 5 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F18R2_FB4 = 1U << 4 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F18R2_FB9 = 1U << 9 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F18R2_FB8 = 1U << 8 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F18R2_FB22 = 1U << 22 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F18R2_FB23 = 1U << 23 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F18R2_FB20 = 1U << 20 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F18R2_FB21 = 1U << 21 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F18R2_FB26 = 1U << 26 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F18R2_FB27 = 1U << 27 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F18R2_FB24 = 1U << 24 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F18R2_FB25 = 1U << 25 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F18R2_FB28 = 1U << 28 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F18R2_FB29 = 1U << 29 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F18R2_FB17 = 1U << 17 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F18R2_FB16 = 1U << 16 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F18R2_FB15 = 1U << 15 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F18R2_FB14 = 1U << 14 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F18R2_FB13 = 1U << 13 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F18R2_FB12 = 1U << 12 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F18R2_FB11 = 1U << 11 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F18R2_FB10 = 1U << 10 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F18R2_FB31 = 1U << 31 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F18R2_FB30 = 1U << 30 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F18R2_FB19 = 1U << 19 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F18R2_FB18 = 1U << 18 ;

//-------------------- Filter bank 18 register 1
#define CAN_F18R1(group) (* ((volatile uint32_t *) (kBaseAddress_CAN [group] + 0x2D0)))
#define CAN1_F18R1 (* ((volatile uint32_t *) (0x40006400 + 0x2D0)))

  // Boolean field: Filter bits
    static const uint32_t CAN_F18R1_FB3 = 1U << 3 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F18R1_FB2 = 1U << 2 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F18R1_FB1 = 1U << 1 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F18R1_FB0 = 1U << 0 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F18R1_FB7 = 1U << 7 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F18R1_FB6 = 1U << 6 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F18R1_FB5 = 1U << 5 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F18R1_FB4 = 1U << 4 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F18R1_FB9 = 1U << 9 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F18R1_FB8 = 1U << 8 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F18R1_FB22 = 1U << 22 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F18R1_FB23 = 1U << 23 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F18R1_FB20 = 1U << 20 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F18R1_FB21 = 1U << 21 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F18R1_FB26 = 1U << 26 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F18R1_FB27 = 1U << 27 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F18R1_FB24 = 1U << 24 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F18R1_FB25 = 1U << 25 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F18R1_FB28 = 1U << 28 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F18R1_FB29 = 1U << 29 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F18R1_FB17 = 1U << 17 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F18R1_FB16 = 1U << 16 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F18R1_FB15 = 1U << 15 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F18R1_FB14 = 1U << 14 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F18R1_FB13 = 1U << 13 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F18R1_FB12 = 1U << 12 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F18R1_FB11 = 1U << 11 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F18R1_FB10 = 1U << 10 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F18R1_FB31 = 1U << 31 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F18R1_FB30 = 1U << 30 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F18R1_FB19 = 1U << 19 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F18R1_FB18 = 1U << 18 ;

//-------------------- mailbox data high register
#define CAN_TDH2R(group) (* ((volatile uint32_t *) (kBaseAddress_CAN [group] + 0x1AC)))
#define CAN1_TDH2R (* ((volatile uint32_t *) (0x40006400 + 0x1AC)))

  // Field (width: 8 bits): DATA5
    inline uint32_t CAN_TDH2R_DATA5 (const uint32_t inValue) { return (inValue & 255U) << 8 ; }

  // Field (width: 8 bits): DATA4
    inline uint32_t CAN_TDH2R_DATA4 (const uint32_t inValue) { return (inValue & 255U) << 0 ; }

  // Field (width: 8 bits): DATA7
    inline uint32_t CAN_TDH2R_DATA7 (const uint32_t inValue) { return (inValue & 255U) << 24 ; }

  // Field (width: 8 bits): DATA6
    inline uint32_t CAN_TDH2R_DATA6 (const uint32_t inValue) { return (inValue & 255U) << 16 ; }

//-------------------- Filter bank 15 register 2
#define CAN_F15R2(group) (* ((volatile uint32_t *) (kBaseAddress_CAN [group] + 0x2BC)))
#define CAN1_F15R2 (* ((volatile uint32_t *) (0x40006400 + 0x2BC)))

  // Boolean field: Filter bits
    static const uint32_t CAN_F15R2_FB3 = 1U << 3 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F15R2_FB2 = 1U << 2 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F15R2_FB1 = 1U << 1 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F15R2_FB0 = 1U << 0 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F15R2_FB7 = 1U << 7 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F15R2_FB6 = 1U << 6 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F15R2_FB5 = 1U << 5 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F15R2_FB4 = 1U << 4 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F15R2_FB9 = 1U << 9 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F15R2_FB8 = 1U << 8 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F15R2_FB22 = 1U << 22 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F15R2_FB23 = 1U << 23 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F15R2_FB20 = 1U << 20 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F15R2_FB21 = 1U << 21 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F15R2_FB26 = 1U << 26 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F15R2_FB27 = 1U << 27 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F15R2_FB24 = 1U << 24 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F15R2_FB25 = 1U << 25 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F15R2_FB28 = 1U << 28 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F15R2_FB29 = 1U << 29 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F15R2_FB17 = 1U << 17 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F15R2_FB16 = 1U << 16 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F15R2_FB15 = 1U << 15 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F15R2_FB14 = 1U << 14 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F15R2_FB13 = 1U << 13 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F15R2_FB12 = 1U << 12 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F15R2_FB11 = 1U << 11 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F15R2_FB10 = 1U << 10 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F15R2_FB31 = 1U << 31 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F15R2_FB30 = 1U << 30 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F15R2_FB19 = 1U << 19 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F15R2_FB18 = 1U << 18 ;

//-------------------- Filter bank 15 register 1
#define CAN_F15R1(group) (* ((volatile uint32_t *) (kBaseAddress_CAN [group] + 0x2B8)))
#define CAN1_F15R1 (* ((volatile uint32_t *) (0x40006400 + 0x2B8)))

  // Boolean field: Filter bits
    static const uint32_t CAN_F15R1_FB3 = 1U << 3 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F15R1_FB2 = 1U << 2 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F15R1_FB1 = 1U << 1 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F15R1_FB0 = 1U << 0 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F15R1_FB7 = 1U << 7 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F15R1_FB6 = 1U << 6 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F15R1_FB5 = 1U << 5 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F15R1_FB4 = 1U << 4 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F15R1_FB9 = 1U << 9 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F15R1_FB8 = 1U << 8 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F15R1_FB22 = 1U << 22 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F15R1_FB23 = 1U << 23 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F15R1_FB20 = 1U << 20 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F15R1_FB21 = 1U << 21 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F15R1_FB26 = 1U << 26 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F15R1_FB27 = 1U << 27 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F15R1_FB24 = 1U << 24 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F15R1_FB25 = 1U << 25 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F15R1_FB28 = 1U << 28 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F15R1_FB29 = 1U << 29 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F15R1_FB17 = 1U << 17 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F15R1_FB16 = 1U << 16 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F15R1_FB15 = 1U << 15 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F15R1_FB14 = 1U << 14 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F15R1_FB13 = 1U << 13 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F15R1_FB12 = 1U << 12 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F15R1_FB11 = 1U << 11 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F15R1_FB10 = 1U << 10 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F15R1_FB31 = 1U << 31 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F15R1_FB30 = 1U << 30 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F15R1_FB19 = 1U << 19 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F15R1_FB18 = 1U << 18 ;

//-------------------- mailbox identifier register
#define CAN_TI2R(group) (* ((volatile uint32_t *) (kBaseAddress_CAN [group] + 0x1A0)))
#define CAN1_TI2R (* ((volatile uint32_t *) (0x40006400 + 0x1A0)))

  // Boolean field: TXRQ
    static const uint32_t CAN_TI2R_TXRQ = 1U << 0 ;

  // Field (width: 11 bits): STID
    inline uint32_t CAN_TI2R_STID (const uint32_t inValue) { return (inValue & 2047U) << 21 ; }

  // Boolean field: IDE
    static const uint32_t CAN_TI2R_IDE = 1U << 2 ;

  // Field (width: 18 bits): EXID
    inline uint32_t CAN_TI2R_EXID (const uint32_t inValue) { return (inValue & 262143U) << 3 ; }

  // Boolean field: RTR
    static const uint32_t CAN_TI2R_RTR = 1U << 1 ;

//-------------------- Filter bank 17 register 1
#define CAN_F17R1(group) (* ((volatile uint32_t *) (kBaseAddress_CAN [group] + 0x2C8)))
#define CAN1_F17R1 (* ((volatile uint32_t *) (0x40006400 + 0x2C8)))

  // Boolean field: Filter bits
    static const uint32_t CAN_F17R1_FB3 = 1U << 3 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F17R1_FB2 = 1U << 2 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F17R1_FB1 = 1U << 1 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F17R1_FB0 = 1U << 0 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F17R1_FB7 = 1U << 7 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F17R1_FB6 = 1U << 6 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F17R1_FB5 = 1U << 5 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F17R1_FB4 = 1U << 4 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F17R1_FB9 = 1U << 9 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F17R1_FB8 = 1U << 8 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F17R1_FB22 = 1U << 22 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F17R1_FB23 = 1U << 23 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F17R1_FB20 = 1U << 20 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F17R1_FB21 = 1U << 21 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F17R1_FB26 = 1U << 26 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F17R1_FB27 = 1U << 27 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F17R1_FB24 = 1U << 24 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F17R1_FB25 = 1U << 25 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F17R1_FB28 = 1U << 28 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F17R1_FB29 = 1U << 29 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F17R1_FB17 = 1U << 17 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F17R1_FB16 = 1U << 16 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F17R1_FB15 = 1U << 15 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F17R1_FB14 = 1U << 14 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F17R1_FB13 = 1U << 13 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F17R1_FB12 = 1U << 12 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F17R1_FB11 = 1U << 11 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F17R1_FB10 = 1U << 10 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F17R1_FB31 = 1U << 31 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F17R1_FB30 = 1U << 30 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F17R1_FB19 = 1U << 19 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F17R1_FB18 = 1U << 18 ;

//-------------------- Filter bank 19 register 1
#define CAN_F19R1(group) (* ((volatile uint32_t *) (kBaseAddress_CAN [group] + 0x2D8)))
#define CAN1_F19R1 (* ((volatile uint32_t *) (0x40006400 + 0x2D8)))

  // Boolean field: Filter bits
    static const uint32_t CAN_F19R1_FB3 = 1U << 3 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F19R1_FB2 = 1U << 2 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F19R1_FB1 = 1U << 1 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F19R1_FB0 = 1U << 0 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F19R1_FB7 = 1U << 7 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F19R1_FB6 = 1U << 6 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F19R1_FB5 = 1U << 5 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F19R1_FB4 = 1U << 4 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F19R1_FB9 = 1U << 9 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F19R1_FB8 = 1U << 8 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F19R1_FB22 = 1U << 22 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F19R1_FB23 = 1U << 23 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F19R1_FB20 = 1U << 20 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F19R1_FB21 = 1U << 21 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F19R1_FB26 = 1U << 26 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F19R1_FB27 = 1U << 27 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F19R1_FB24 = 1U << 24 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F19R1_FB25 = 1U << 25 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F19R1_FB28 = 1U << 28 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F19R1_FB29 = 1U << 29 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F19R1_FB17 = 1U << 17 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F19R1_FB16 = 1U << 16 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F19R1_FB15 = 1U << 15 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F19R1_FB14 = 1U << 14 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F19R1_FB13 = 1U << 13 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F19R1_FB12 = 1U << 12 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F19R1_FB11 = 1U << 11 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F19R1_FB10 = 1U << 10 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F19R1_FB31 = 1U << 31 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F19R1_FB30 = 1U << 30 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F19R1_FB19 = 1U << 19 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F19R1_FB18 = 1U << 18 ;

//-------------------- Filter bank 17 register 2
#define CAN_F17R2(group) (* ((volatile uint32_t *) (kBaseAddress_CAN [group] + 0x2CC)))
#define CAN1_F17R2 (* ((volatile uint32_t *) (0x40006400 + 0x2CC)))

  // Boolean field: Filter bits
    static const uint32_t CAN_F17R2_FB3 = 1U << 3 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F17R2_FB2 = 1U << 2 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F17R2_FB1 = 1U << 1 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F17R2_FB0 = 1U << 0 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F17R2_FB7 = 1U << 7 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F17R2_FB6 = 1U << 6 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F17R2_FB5 = 1U << 5 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F17R2_FB4 = 1U << 4 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F17R2_FB9 = 1U << 9 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F17R2_FB8 = 1U << 8 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F17R2_FB22 = 1U << 22 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F17R2_FB23 = 1U << 23 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F17R2_FB20 = 1U << 20 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F17R2_FB21 = 1U << 21 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F17R2_FB26 = 1U << 26 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F17R2_FB27 = 1U << 27 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F17R2_FB24 = 1U << 24 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F17R2_FB25 = 1U << 25 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F17R2_FB28 = 1U << 28 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F17R2_FB29 = 1U << 29 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F17R2_FB17 = 1U << 17 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F17R2_FB16 = 1U << 16 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F17R2_FB15 = 1U << 15 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F17R2_FB14 = 1U << 14 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F17R2_FB13 = 1U << 13 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F17R2_FB12 = 1U << 12 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F17R2_FB11 = 1U << 11 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F17R2_FB10 = 1U << 10 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F17R2_FB31 = 1U << 31 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F17R2_FB30 = 1U << 30 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F17R2_FB19 = 1U << 19 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F17R2_FB18 = 1U << 18 ;

//-------------------- Filter bank 25 register 2
#define CAN_F25R2(group) (* ((volatile uint32_t *) (kBaseAddress_CAN [group] + 0x30C)))
#define CAN1_F25R2 (* ((volatile uint32_t *) (0x40006400 + 0x30C)))

  // Boolean field: Filter bits
    static const uint32_t CAN_F25R2_FB3 = 1U << 3 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F25R2_FB2 = 1U << 2 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F25R2_FB1 = 1U << 1 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F25R2_FB0 = 1U << 0 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F25R2_FB7 = 1U << 7 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F25R2_FB6 = 1U << 6 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F25R2_FB5 = 1U << 5 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F25R2_FB4 = 1U << 4 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F25R2_FB9 = 1U << 9 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F25R2_FB8 = 1U << 8 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F25R2_FB22 = 1U << 22 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F25R2_FB23 = 1U << 23 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F25R2_FB20 = 1U << 20 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F25R2_FB21 = 1U << 21 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F25R2_FB26 = 1U << 26 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F25R2_FB27 = 1U << 27 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F25R2_FB24 = 1U << 24 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F25R2_FB25 = 1U << 25 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F25R2_FB28 = 1U << 28 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F25R2_FB29 = 1U << 29 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F25R2_FB17 = 1U << 17 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F25R2_FB16 = 1U << 16 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F25R2_FB15 = 1U << 15 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F25R2_FB14 = 1U << 14 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F25R2_FB13 = 1U << 13 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F25R2_FB12 = 1U << 12 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F25R2_FB11 = 1U << 11 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F25R2_FB10 = 1U << 10 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F25R2_FB31 = 1U << 31 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F25R2_FB30 = 1U << 30 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F25R2_FB19 = 1U << 19 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F25R2_FB18 = 1U << 18 ;

//-------------------- Filter bank 27 register 1
#define CAN_F27R1(group) (* ((volatile uint32_t *) (kBaseAddress_CAN [group] + 0x318)))
#define CAN1_F27R1 (* ((volatile uint32_t *) (0x40006400 + 0x318)))

  // Boolean field: Filter bits
    static const uint32_t CAN_F27R1_FB3 = 1U << 3 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F27R1_FB2 = 1U << 2 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F27R1_FB1 = 1U << 1 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F27R1_FB0 = 1U << 0 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F27R1_FB7 = 1U << 7 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F27R1_FB6 = 1U << 6 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F27R1_FB5 = 1U << 5 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F27R1_FB4 = 1U << 4 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F27R1_FB9 = 1U << 9 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F27R1_FB8 = 1U << 8 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F27R1_FB22 = 1U << 22 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F27R1_FB23 = 1U << 23 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F27R1_FB20 = 1U << 20 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F27R1_FB21 = 1U << 21 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F27R1_FB26 = 1U << 26 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F27R1_FB27 = 1U << 27 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F27R1_FB24 = 1U << 24 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F27R1_FB25 = 1U << 25 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F27R1_FB28 = 1U << 28 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F27R1_FB29 = 1U << 29 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F27R1_FB17 = 1U << 17 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F27R1_FB16 = 1U << 16 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F27R1_FB15 = 1U << 15 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F27R1_FB14 = 1U << 14 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F27R1_FB13 = 1U << 13 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F27R1_FB12 = 1U << 12 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F27R1_FB11 = 1U << 11 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F27R1_FB10 = 1U << 10 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F27R1_FB31 = 1U << 31 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F27R1_FB30 = 1U << 30 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F27R1_FB19 = 1U << 19 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F27R1_FB18 = 1U << 18 ;

//-------------------- Filter bank 27 register 2
#define CAN_F27R2(group) (* ((volatile uint32_t *) (kBaseAddress_CAN [group] + 0x31C)))
#define CAN1_F27R2 (* ((volatile uint32_t *) (0x40006400 + 0x31C)))

  // Boolean field: Filter bits
    static const uint32_t CAN_F27R2_FB3 = 1U << 3 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F27R2_FB2 = 1U << 2 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F27R2_FB1 = 1U << 1 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F27R2_FB0 = 1U << 0 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F27R2_FB7 = 1U << 7 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F27R2_FB6 = 1U << 6 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F27R2_FB5 = 1U << 5 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F27R2_FB4 = 1U << 4 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F27R2_FB9 = 1U << 9 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F27R2_FB8 = 1U << 8 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F27R2_FB22 = 1U << 22 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F27R2_FB23 = 1U << 23 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F27R2_FB20 = 1U << 20 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F27R2_FB21 = 1U << 21 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F27R2_FB26 = 1U << 26 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F27R2_FB27 = 1U << 27 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F27R2_FB24 = 1U << 24 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F27R2_FB25 = 1U << 25 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F27R2_FB28 = 1U << 28 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F27R2_FB29 = 1U << 29 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F27R2_FB17 = 1U << 17 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F27R2_FB16 = 1U << 16 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F27R2_FB15 = 1U << 15 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F27R2_FB14 = 1U << 14 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F27R2_FB13 = 1U << 13 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F27R2_FB12 = 1U << 12 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F27R2_FB11 = 1U << 11 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F27R2_FB10 = 1U << 10 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F27R2_FB31 = 1U << 31 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F27R2_FB30 = 1U << 30 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F27R2_FB19 = 1U << 19 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F27R2_FB18 = 1U << 18 ;

//-------------------- Filter bank 25 register 1
#define CAN_F25R1(group) (* ((volatile uint32_t *) (kBaseAddress_CAN [group] + 0x308)))
#define CAN1_F25R1 (* ((volatile uint32_t *) (0x40006400 + 0x308)))

  // Boolean field: Filter bits
    static const uint32_t CAN_F25R1_FB3 = 1U << 3 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F25R1_FB2 = 1U << 2 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F25R1_FB1 = 1U << 1 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F25R1_FB0 = 1U << 0 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F25R1_FB7 = 1U << 7 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F25R1_FB6 = 1U << 6 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F25R1_FB5 = 1U << 5 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F25R1_FB4 = 1U << 4 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F25R1_FB9 = 1U << 9 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F25R1_FB8 = 1U << 8 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F25R1_FB22 = 1U << 22 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F25R1_FB23 = 1U << 23 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F25R1_FB20 = 1U << 20 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F25R1_FB21 = 1U << 21 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F25R1_FB26 = 1U << 26 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F25R1_FB27 = 1U << 27 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F25R1_FB24 = 1U << 24 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F25R1_FB25 = 1U << 25 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F25R1_FB28 = 1U << 28 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F25R1_FB29 = 1U << 29 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F25R1_FB17 = 1U << 17 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F25R1_FB16 = 1U << 16 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F25R1_FB15 = 1U << 15 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F25R1_FB14 = 1U << 14 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F25R1_FB13 = 1U << 13 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F25R1_FB12 = 1U << 12 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F25R1_FB11 = 1U << 11 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F25R1_FB10 = 1U << 10 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F25R1_FB31 = 1U << 31 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F25R1_FB30 = 1U << 30 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F25R1_FB19 = 1U << 19 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F25R1_FB18 = 1U << 18 ;

//-------------------- Filter bank 23 register 1
#define CAN_F23R1(group) (* ((volatile uint32_t *) (kBaseAddress_CAN [group] + 0x2F8)))
#define CAN1_F23R1 (* ((volatile uint32_t *) (0x40006400 + 0x2F8)))

  // Boolean field: Filter bits
    static const uint32_t CAN_F23R1_FB3 = 1U << 3 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F23R1_FB2 = 1U << 2 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F23R1_FB1 = 1U << 1 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F23R1_FB0 = 1U << 0 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F23R1_FB7 = 1U << 7 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F23R1_FB6 = 1U << 6 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F23R1_FB5 = 1U << 5 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F23R1_FB4 = 1U << 4 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F23R1_FB9 = 1U << 9 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F23R1_FB8 = 1U << 8 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F23R1_FB22 = 1U << 22 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F23R1_FB23 = 1U << 23 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F23R1_FB20 = 1U << 20 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F23R1_FB21 = 1U << 21 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F23R1_FB26 = 1U << 26 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F23R1_FB27 = 1U << 27 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F23R1_FB24 = 1U << 24 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F23R1_FB25 = 1U << 25 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F23R1_FB28 = 1U << 28 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F23R1_FB29 = 1U << 29 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F23R1_FB17 = 1U << 17 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F23R1_FB16 = 1U << 16 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F23R1_FB15 = 1U << 15 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F23R1_FB14 = 1U << 14 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F23R1_FB13 = 1U << 13 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F23R1_FB12 = 1U << 12 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F23R1_FB11 = 1U << 11 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F23R1_FB10 = 1U << 10 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F23R1_FB31 = 1U << 31 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F23R1_FB30 = 1U << 30 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F23R1_FB19 = 1U << 19 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F23R1_FB18 = 1U << 18 ;

//-------------------- Filter bank 23 register 2
#define CAN_F23R2(group) (* ((volatile uint32_t *) (kBaseAddress_CAN [group] + 0x2FC)))
#define CAN1_F23R2 (* ((volatile uint32_t *) (0x40006400 + 0x2FC)))

  // Boolean field: Filter bits
    static const uint32_t CAN_F23R2_FB3 = 1U << 3 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F23R2_FB2 = 1U << 2 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F23R2_FB1 = 1U << 1 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F23R2_FB0 = 1U << 0 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F23R2_FB7 = 1U << 7 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F23R2_FB6 = 1U << 6 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F23R2_FB5 = 1U << 5 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F23R2_FB4 = 1U << 4 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F23R2_FB9 = 1U << 9 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F23R2_FB8 = 1U << 8 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F23R2_FB22 = 1U << 22 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F23R2_FB23 = 1U << 23 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F23R2_FB20 = 1U << 20 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F23R2_FB21 = 1U << 21 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F23R2_FB26 = 1U << 26 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F23R2_FB27 = 1U << 27 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F23R2_FB24 = 1U << 24 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F23R2_FB25 = 1U << 25 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F23R2_FB28 = 1U << 28 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F23R2_FB29 = 1U << 29 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F23R2_FB17 = 1U << 17 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F23R2_FB16 = 1U << 16 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F23R2_FB15 = 1U << 15 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F23R2_FB14 = 1U << 14 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F23R2_FB13 = 1U << 13 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F23R2_FB12 = 1U << 12 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F23R2_FB11 = 1U << 11 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F23R2_FB10 = 1U << 10 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F23R2_FB31 = 1U << 31 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F23R2_FB30 = 1U << 30 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F23R2_FB19 = 1U << 19 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F23R2_FB18 = 1U << 18 ;

//-------------------- Filter bank 5 register 1
#define CAN_F5R1(group) (* ((volatile uint32_t *) (kBaseAddress_CAN [group] + 0x268)))
#define CAN1_F5R1 (* ((volatile uint32_t *) (0x40006400 + 0x268)))

  // Boolean field: Filter bits
    static const uint32_t CAN_F5R1_FB3 = 1U << 3 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F5R1_FB2 = 1U << 2 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F5R1_FB1 = 1U << 1 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F5R1_FB0 = 1U << 0 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F5R1_FB7 = 1U << 7 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F5R1_FB6 = 1U << 6 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F5R1_FB5 = 1U << 5 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F5R1_FB4 = 1U << 4 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F5R1_FB9 = 1U << 9 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F5R1_FB8 = 1U << 8 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F5R1_FB22 = 1U << 22 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F5R1_FB23 = 1U << 23 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F5R1_FB20 = 1U << 20 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F5R1_FB21 = 1U << 21 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F5R1_FB26 = 1U << 26 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F5R1_FB27 = 1U << 27 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F5R1_FB24 = 1U << 24 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F5R1_FB25 = 1U << 25 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F5R1_FB28 = 1U << 28 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F5R1_FB29 = 1U << 29 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F5R1_FB17 = 1U << 17 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F5R1_FB16 = 1U << 16 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F5R1_FB15 = 1U << 15 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F5R1_FB14 = 1U << 14 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F5R1_FB13 = 1U << 13 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F5R1_FB12 = 1U << 12 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F5R1_FB11 = 1U << 11 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F5R1_FB10 = 1U << 10 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F5R1_FB31 = 1U << 31 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F5R1_FB30 = 1U << 30 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F5R1_FB19 = 1U << 19 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F5R1_FB18 = 1U << 18 ;

//-------------------- mailbox data length control and time stamp
          register
#define CAN_TDT2R(group) (* ((volatile uint32_t *) (kBaseAddress_CAN [group] + 0x1A4)))
#define CAN1_TDT2R (* ((volatile uint32_t *) (0x40006400 + 0x1A4)))

  // Field (width: 4 bits): DLC
    inline uint32_t CAN_TDT2R_DLC (const uint32_t inValue) { return (inValue & 15U) << 0 ; }

  // Boolean field: TGT
    static const uint32_t CAN_TDT2R_TGT = 1U << 8 ;

  // Field (width: 16 bits): TIME
    inline uint32_t CAN_TDT2R_TIME (const uint32_t inValue) { return (inValue & 65535U) << 16 ; }

//-------------------- filter activation register
#define CAN_FA1R(group) (* ((volatile uint32_t *) (kBaseAddress_CAN [group] + 0x21C)))
#define CAN1_FA1R (* ((volatile uint32_t *) (0x40006400 + 0x21C)))

  // Boolean field: Filter active
    static const uint32_t CAN_FA1R_FACT13 = 1U << 13 ;

  // Boolean field: Filter active
    static const uint32_t CAN_FA1R_FACT12 = 1U << 12 ;

  // Boolean field: Filter active
    static const uint32_t CAN_FA1R_FACT11 = 1U << 11 ;

  // Boolean field: Filter active
    static const uint32_t CAN_FA1R_FACT10 = 1U << 10 ;

  // Boolean field: Filter active
    static const uint32_t CAN_FA1R_FACT9 = 1U << 9 ;

  // Boolean field: Filter active
    static const uint32_t CAN_FA1R_FACT8 = 1U << 8 ;

  // Boolean field: Filter active
    static const uint32_t CAN_FA1R_FACT3 = 1U << 3 ;

  // Boolean field: Filter active
    static const uint32_t CAN_FA1R_FACT2 = 1U << 2 ;

  // Boolean field: Filter active
    static const uint32_t CAN_FA1R_FACT1 = 1U << 1 ;

  // Boolean field: Filter active
    static const uint32_t CAN_FA1R_FACT0 = 1U << 0 ;

  // Boolean field: Filter active
    static const uint32_t CAN_FA1R_FACT7 = 1U << 7 ;

  // Boolean field: Filter active
    static const uint32_t CAN_FA1R_FACT6 = 1U << 6 ;

  // Boolean field: Filter active
    static const uint32_t CAN_FA1R_FACT5 = 1U << 5 ;

  // Boolean field: Filter active
    static const uint32_t CAN_FA1R_FACT4 = 1U << 4 ;

//-------------------- Filter bank 13 register 1
#define CAN_F13R1(group) (* ((volatile uint32_t *) (kBaseAddress_CAN [group] + 0x2A8)))
#define CAN1_F13R1 (* ((volatile uint32_t *) (0x40006400 + 0x2A8)))

  // Boolean field: Filter bits
    static const uint32_t CAN_F13R1_FB3 = 1U << 3 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F13R1_FB2 = 1U << 2 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F13R1_FB1 = 1U << 1 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F13R1_FB0 = 1U << 0 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F13R1_FB7 = 1U << 7 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F13R1_FB6 = 1U << 6 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F13R1_FB5 = 1U << 5 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F13R1_FB4 = 1U << 4 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F13R1_FB9 = 1U << 9 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F13R1_FB8 = 1U << 8 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F13R1_FB22 = 1U << 22 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F13R1_FB23 = 1U << 23 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F13R1_FB20 = 1U << 20 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F13R1_FB21 = 1U << 21 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F13R1_FB26 = 1U << 26 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F13R1_FB27 = 1U << 27 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F13R1_FB24 = 1U << 24 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F13R1_FB25 = 1U << 25 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F13R1_FB28 = 1U << 28 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F13R1_FB29 = 1U << 29 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F13R1_FB17 = 1U << 17 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F13R1_FB16 = 1U << 16 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F13R1_FB15 = 1U << 15 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F13R1_FB14 = 1U << 14 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F13R1_FB13 = 1U << 13 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F13R1_FB12 = 1U << 12 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F13R1_FB11 = 1U << 11 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F13R1_FB10 = 1U << 10 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F13R1_FB31 = 1U << 31 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F13R1_FB30 = 1U << 30 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F13R1_FB19 = 1U << 19 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F13R1_FB18 = 1U << 18 ;

//-------------------- Filter bank 13 register 2
#define CAN_F13R2(group) (* ((volatile uint32_t *) (kBaseAddress_CAN [group] + 0x2AC)))
#define CAN1_F13R2 (* ((volatile uint32_t *) (0x40006400 + 0x2AC)))

  // Boolean field: Filter bits
    static const uint32_t CAN_F13R2_FB3 = 1U << 3 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F13R2_FB2 = 1U << 2 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F13R2_FB1 = 1U << 1 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F13R2_FB0 = 1U << 0 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F13R2_FB7 = 1U << 7 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F13R2_FB6 = 1U << 6 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F13R2_FB5 = 1U << 5 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F13R2_FB4 = 1U << 4 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F13R2_FB9 = 1U << 9 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F13R2_FB8 = 1U << 8 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F13R2_FB22 = 1U << 22 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F13R2_FB23 = 1U << 23 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F13R2_FB20 = 1U << 20 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F13R2_FB21 = 1U << 21 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F13R2_FB26 = 1U << 26 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F13R2_FB27 = 1U << 27 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F13R2_FB24 = 1U << 24 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F13R2_FB25 = 1U << 25 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F13R2_FB28 = 1U << 28 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F13R2_FB29 = 1U << 29 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F13R2_FB17 = 1U << 17 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F13R2_FB16 = 1U << 16 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F13R2_FB15 = 1U << 15 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F13R2_FB14 = 1U << 14 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F13R2_FB13 = 1U << 13 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F13R2_FB12 = 1U << 12 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F13R2_FB11 = 1U << 11 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F13R2_FB10 = 1U << 10 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F13R2_FB31 = 1U << 31 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F13R2_FB30 = 1U << 30 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F13R2_FB19 = 1U << 19 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F13R2_FB18 = 1U << 18 ;

//-------------------- receive FIFO mailbox data high
          register
#define CAN_RDH0R(group) (* ((const volatile uint32_t *) (kBaseAddress_CAN [group] + 0x1BC)))
#define CAN1_RDH0R (* ((const volatile uint32_t *) (0x40006400 + 0x1BC)))

  // Field (width: 8 bits): DATA5
    inline uint32_t CAN_RDH0R_DATA5 (const uint32_t inValue) { return (inValue & 255U) << 8 ; }

  // Field (width: 8 bits): DATA4
    inline uint32_t CAN_RDH0R_DATA4 (const uint32_t inValue) { return (inValue & 255U) << 0 ; }

  // Field (width: 8 bits): DATA7
    inline uint32_t CAN_RDH0R_DATA7 (const uint32_t inValue) { return (inValue & 255U) << 24 ; }

  // Field (width: 8 bits): DATA6
    inline uint32_t CAN_RDH0R_DATA6 (const uint32_t inValue) { return (inValue & 255U) << 16 ; }

//-------------------- Filter bank 11 register 2
#define CAN_F11R2(group) (* ((volatile uint32_t *) (kBaseAddress_CAN [group] + 0x29C)))
#define CAN1_F11R2 (* ((volatile uint32_t *) (0x40006400 + 0x29C)))

  // Boolean field: Filter bits
    static const uint32_t CAN_F11R2_FB3 = 1U << 3 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F11R2_FB2 = 1U << 2 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F11R2_FB1 = 1U << 1 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F11R2_FB0 = 1U << 0 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F11R2_FB7 = 1U << 7 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F11R2_FB6 = 1U << 6 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F11R2_FB5 = 1U << 5 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F11R2_FB4 = 1U << 4 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F11R2_FB9 = 1U << 9 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F11R2_FB8 = 1U << 8 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F11R2_FB22 = 1U << 22 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F11R2_FB23 = 1U << 23 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F11R2_FB20 = 1U << 20 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F11R2_FB21 = 1U << 21 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F11R2_FB26 = 1U << 26 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F11R2_FB27 = 1U << 27 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F11R2_FB24 = 1U << 24 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F11R2_FB25 = 1U << 25 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F11R2_FB28 = 1U << 28 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F11R2_FB29 = 1U << 29 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F11R2_FB17 = 1U << 17 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F11R2_FB16 = 1U << 16 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F11R2_FB15 = 1U << 15 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F11R2_FB14 = 1U << 14 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F11R2_FB13 = 1U << 13 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F11R2_FB12 = 1U << 12 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F11R2_FB11 = 1U << 11 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F11R2_FB10 = 1U << 10 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F11R2_FB31 = 1U << 31 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F11R2_FB30 = 1U << 30 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F11R2_FB19 = 1U << 19 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F11R2_FB18 = 1U << 18 ;

//-------------------- Filter bank 11 register 1
#define CAN_F11R1(group) (* ((volatile uint32_t *) (kBaseAddress_CAN [group] + 0x298)))
#define CAN1_F11R1 (* ((volatile uint32_t *) (0x40006400 + 0x298)))

  // Boolean field: Filter bits
    static const uint32_t CAN_F11R1_FB3 = 1U << 3 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F11R1_FB2 = 1U << 2 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F11R1_FB1 = 1U << 1 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F11R1_FB0 = 1U << 0 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F11R1_FB7 = 1U << 7 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F11R1_FB6 = 1U << 6 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F11R1_FB5 = 1U << 5 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F11R1_FB4 = 1U << 4 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F11R1_FB9 = 1U << 9 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F11R1_FB8 = 1U << 8 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F11R1_FB22 = 1U << 22 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F11R1_FB23 = 1U << 23 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F11R1_FB20 = 1U << 20 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F11R1_FB21 = 1U << 21 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F11R1_FB26 = 1U << 26 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F11R1_FB27 = 1U << 27 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F11R1_FB24 = 1U << 24 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F11R1_FB25 = 1U << 25 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F11R1_FB28 = 1U << 28 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F11R1_FB29 = 1U << 29 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F11R1_FB17 = 1U << 17 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F11R1_FB16 = 1U << 16 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F11R1_FB15 = 1U << 15 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F11R1_FB14 = 1U << 14 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F11R1_FB13 = 1U << 13 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F11R1_FB12 = 1U << 12 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F11R1_FB11 = 1U << 11 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F11R1_FB10 = 1U << 10 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F11R1_FB31 = 1U << 31 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F11R1_FB30 = 1U << 30 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F11R1_FB19 = 1U << 19 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F11R1_FB18 = 1U << 18 ;

//-------------------- filter FIFO assignment
          register
#define CAN_FFA1R(group) (* ((volatile uint32_t *) (kBaseAddress_CAN [group] + 0x214)))
#define CAN1_FFA1R (* ((volatile uint32_t *) (0x40006400 + 0x214)))

  // Boolean field: Filter FIFO assignment for filter
              3
    static const uint32_t CAN_FFA1R_FFA3 = 1U << 3 ;

  // Boolean field: Filter FIFO assignment for filter
              2
    static const uint32_t CAN_FFA1R_FFA2 = 1U << 2 ;

  // Boolean field: Filter FIFO assignment for filter
              1
    static const uint32_t CAN_FFA1R_FFA1 = 1U << 1 ;

  // Boolean field: Filter FIFO assignment for filter
              0
    static const uint32_t CAN_FFA1R_FFA0 = 1U << 0 ;

  // Boolean field: Filter FIFO assignment for filter
              7
    static const uint32_t CAN_FFA1R_FFA7 = 1U << 7 ;

  // Boolean field: Filter FIFO assignment for filter
              6
    static const uint32_t CAN_FFA1R_FFA6 = 1U << 6 ;

  // Boolean field: Filter FIFO assignment for filter
              5
    static const uint32_t CAN_FFA1R_FFA5 = 1U << 5 ;

  // Boolean field: Filter FIFO assignment for filter
              4
    static const uint32_t CAN_FFA1R_FFA4 = 1U << 4 ;

  // Boolean field: Filter FIFO assignment for filter
              9
    static const uint32_t CAN_FFA1R_FFA9 = 1U << 9 ;

  // Boolean field: Filter FIFO assignment for filter
              8
    static const uint32_t CAN_FFA1R_FFA8 = 1U << 8 ;

  // Boolean field: Filter FIFO assignment for filter
              11
    static const uint32_t CAN_FFA1R_FFA11 = 1U << 11 ;

  // Boolean field: Filter FIFO assignment for filter
              12
    static const uint32_t CAN_FFA1R_FFA12 = 1U << 12 ;

  // Boolean field: Filter FIFO assignment for filter
              13
    static const uint32_t CAN_FFA1R_FFA13 = 1U << 13 ;

  // Boolean field: Filter FIFO assignment for filter
              10
    static const uint32_t CAN_FFA1R_FFA10 = 1U << 10 ;

//-------------------- interrupt enable register
#define CAN_IER(group) (* ((volatile uint32_t *) (kBaseAddress_CAN [group] + 0x14)))
#define CAN1_IER (* ((volatile uint32_t *) (0x40006400 + 0x14)))

  // Boolean field: FMPIE0
    static const uint32_t CAN_IER_FMPIE0 = 1U << 1 ;

  // Boolean field: TMEIE
    static const uint32_t CAN_IER_TMEIE = 1U << 0 ;

  // Boolean field: FFIE0
    static const uint32_t CAN_IER_FFIE0 = 1U << 2 ;

  // Boolean field: FOVIE1
    static const uint32_t CAN_IER_FOVIE1 = 1U << 6 ;

  // Boolean field: FOVIE0
    static const uint32_t CAN_IER_FOVIE0 = 1U << 3 ;

  // Boolean field: EWGIE
    static const uint32_t CAN_IER_EWGIE = 1U << 8 ;

  // Boolean field: ERRIE
    static const uint32_t CAN_IER_ERRIE = 1U << 15 ;

  // Boolean field: FMPIE1
    static const uint32_t CAN_IER_FMPIE1 = 1U << 4 ;

  // Boolean field: EPVIE
    static const uint32_t CAN_IER_EPVIE = 1U << 9 ;

  // Boolean field: BOFIE
    static const uint32_t CAN_IER_BOFIE = 1U << 10 ;

  // Boolean field: LECIE
    static const uint32_t CAN_IER_LECIE = 1U << 11 ;

  // Boolean field: WKUIE
    static const uint32_t CAN_IER_WKUIE = 1U << 16 ;

  // Boolean field: FFIE1
    static const uint32_t CAN_IER_FFIE1 = 1U << 5 ;

  // Boolean field: SLKIE
    static const uint32_t CAN_IER_SLKIE = 1U << 17 ;

//-------------------- filter master register
#define CAN_FMR(group) (* ((volatile uint32_t *) (kBaseAddress_CAN [group] + 0x200)))
#define CAN1_FMR (* ((volatile uint32_t *) (0x40006400 + 0x200)))

  // Boolean field: Filter initialization mode
    static const uint32_t CAN_FMR_FINIT = 1U << 0 ;

//-------------------- mailbox data length control and time stamp
          register
#define CAN_TDT1R(group) (* ((volatile uint32_t *) (kBaseAddress_CAN [group] + 0x194)))
#define CAN1_TDT1R (* ((volatile uint32_t *) (0x40006400 + 0x194)))

  // Field (width: 4 bits): DLC
    inline uint32_t CAN_TDT1R_DLC (const uint32_t inValue) { return (inValue & 15U) << 0 ; }

  // Boolean field: TGT
    static const uint32_t CAN_TDT1R_TGT = 1U << 8 ;

  // Field (width: 16 bits): TIME
    inline uint32_t CAN_TDT1R_TIME (const uint32_t inValue) { return (inValue & 65535U) << 16 ; }

//-------------------- TX mailbox identifier register
#define CAN_TI0R(group) (* ((volatile uint32_t *) (kBaseAddress_CAN [group] + 0x180)))
#define CAN1_TI0R (* ((volatile uint32_t *) (0x40006400 + 0x180)))

  // Boolean field: TXRQ
    static const uint32_t CAN_TI0R_TXRQ = 1U << 0 ;

  // Field (width: 11 bits): STID
    inline uint32_t CAN_TI0R_STID (const uint32_t inValue) { return (inValue & 2047U) << 21 ; }

  // Boolean field: IDE
    static const uint32_t CAN_TI0R_IDE = 1U << 2 ;

  // Field (width: 18 bits): EXID
    inline uint32_t CAN_TI0R_EXID (const uint32_t inValue) { return (inValue & 262143U) << 3 ; }

  // Boolean field: RTR
    static const uint32_t CAN_TI0R_RTR = 1U << 1 ;

//-------------------- Filter bank 3 register 2
#define CAN_F3R2(group) (* ((volatile uint32_t *) (kBaseAddress_CAN [group] + 0x25C)))
#define CAN1_F3R2 (* ((volatile uint32_t *) (0x40006400 + 0x25C)))

  // Boolean field: Filter bits
    static const uint32_t CAN_F3R2_FB3 = 1U << 3 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F3R2_FB2 = 1U << 2 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F3R2_FB1 = 1U << 1 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F3R2_FB0 = 1U << 0 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F3R2_FB7 = 1U << 7 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F3R2_FB6 = 1U << 6 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F3R2_FB5 = 1U << 5 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F3R2_FB4 = 1U << 4 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F3R2_FB9 = 1U << 9 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F3R2_FB8 = 1U << 8 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F3R2_FB22 = 1U << 22 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F3R2_FB23 = 1U << 23 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F3R2_FB20 = 1U << 20 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F3R2_FB21 = 1U << 21 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F3R2_FB26 = 1U << 26 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F3R2_FB27 = 1U << 27 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F3R2_FB24 = 1U << 24 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F3R2_FB25 = 1U << 25 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F3R2_FB28 = 1U << 28 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F3R2_FB29 = 1U << 29 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F3R2_FB17 = 1U << 17 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F3R2_FB16 = 1U << 16 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F3R2_FB15 = 1U << 15 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F3R2_FB14 = 1U << 14 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F3R2_FB13 = 1U << 13 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F3R2_FB12 = 1U << 12 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F3R2_FB11 = 1U << 11 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F3R2_FB10 = 1U << 10 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F3R2_FB31 = 1U << 31 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F3R2_FB30 = 1U << 30 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F3R2_FB19 = 1U << 19 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F3R2_FB18 = 1U << 18 ;

//-------------------- Filter bank 3 register 1
#define CAN_F3R1(group) (* ((volatile uint32_t *) (kBaseAddress_CAN [group] + 0x258)))
#define CAN1_F3R1 (* ((volatile uint32_t *) (0x40006400 + 0x258)))

  // Boolean field: Filter bits
    static const uint32_t CAN_F3R1_FB3 = 1U << 3 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F3R1_FB2 = 1U << 2 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F3R1_FB1 = 1U << 1 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F3R1_FB0 = 1U << 0 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F3R1_FB7 = 1U << 7 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F3R1_FB6 = 1U << 6 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F3R1_FB5 = 1U << 5 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F3R1_FB4 = 1U << 4 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F3R1_FB9 = 1U << 9 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F3R1_FB8 = 1U << 8 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F3R1_FB22 = 1U << 22 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F3R1_FB23 = 1U << 23 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F3R1_FB20 = 1U << 20 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F3R1_FB21 = 1U << 21 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F3R1_FB26 = 1U << 26 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F3R1_FB27 = 1U << 27 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F3R1_FB24 = 1U << 24 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F3R1_FB25 = 1U << 25 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F3R1_FB28 = 1U << 28 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F3R1_FB29 = 1U << 29 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F3R1_FB17 = 1U << 17 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F3R1_FB16 = 1U << 16 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F3R1_FB15 = 1U << 15 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F3R1_FB14 = 1U << 14 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F3R1_FB13 = 1U << 13 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F3R1_FB12 = 1U << 12 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F3R1_FB11 = 1U << 11 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F3R1_FB10 = 1U << 10 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F3R1_FB31 = 1U << 31 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F3R1_FB30 = 1U << 30 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F3R1_FB19 = 1U << 19 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F3R1_FB18 = 1U << 18 ;

//-------------------- bit timing register
#define CAN_BTR(group) (* ((volatile uint32_t *) (kBaseAddress_CAN [group] + 0x1C)))
#define CAN1_BTR (* ((volatile uint32_t *) (0x40006400 + 0x1C)))

  // Boolean field: LBKM
    static const uint32_t CAN_BTR_LBKM = 1U << 30 ;

  // Field (width: 2 bits): SJW
    inline uint32_t CAN_BTR_SJW (const uint32_t inValue) { return (inValue & 3U) << 24 ; }

  // Field (width: 10 bits): BRP
    inline uint32_t CAN_BTR_BRP (const uint32_t inValue) { return (inValue & 1023U) << 0 ; }

  // Field (width: 3 bits): TS2
    inline uint32_t CAN_BTR_TS2 (const uint32_t inValue) { return (inValue & 7U) << 20 ; }

  // Boolean field: SILM
    static const uint32_t CAN_BTR_SILM = 1U << 31 ;

  // Field (width: 4 bits): TS1
    inline uint32_t CAN_BTR_TS1 (const uint32_t inValue) { return (inValue & 15U) << 16 ; }

//-------------------- mailbox data high register
#define CAN_RDT1R(group) (* ((const volatile uint32_t *) (kBaseAddress_CAN [group] + 0x1C4)))
#define CAN1_RDT1R (* ((const volatile uint32_t *) (0x40006400 + 0x1C4)))

  // Field (width: 4 bits): DLC
    inline uint32_t CAN_RDT1R_DLC (const uint32_t inValue) { return (inValue & 15U) << 0 ; }

  // Field (width: 8 bits): FMI
    inline uint32_t CAN_RDT1R_FMI (const uint32_t inValue) { return (inValue & 255U) << 8 ; }

  // Field (width: 16 bits): TIME
    inline uint32_t CAN_RDT1R_TIME (const uint32_t inValue) { return (inValue & 65535U) << 16 ; }

//-------------------- mailbox data high register
#define CAN_RDH1R(group) (* ((const volatile uint32_t *) (kBaseAddress_CAN [group] + 0x1CC)))
#define CAN1_RDH1R (* ((const volatile uint32_t *) (0x40006400 + 0x1CC)))

  // Field (width: 8 bits): DATA5
    inline uint32_t CAN_RDH1R_DATA5 (const uint32_t inValue) { return (inValue & 255U) << 8 ; }

  // Field (width: 8 bits): DATA4
    inline uint32_t CAN_RDH1R_DATA4 (const uint32_t inValue) { return (inValue & 255U) << 0 ; }

  // Field (width: 8 bits): DATA7
    inline uint32_t CAN_RDH1R_DATA7 (const uint32_t inValue) { return (inValue & 255U) << 24 ; }

  // Field (width: 8 bits): DATA6
    inline uint32_t CAN_RDH1R_DATA6 (const uint32_t inValue) { return (inValue & 255U) << 16 ; }

//-------------------- master status register
#define CAN_MSR(group) (* ((const volatile uint32_t *) (kBaseAddress_CAN [group] + 0x4)))
#define CAN1_MSR (* ((const volatile uint32_t *) (0x40006400 + 0x4)))

  // Boolean field: TXM
    static const uint32_t CAN_MSR_TXM = 1U << 8 ;

  // Boolean field: RXM
    static const uint32_t CAN_MSR_RXM = 1U << 9 ;

  // Boolean field: RX
    static const uint32_t CAN_MSR_RX = 1U << 11 ;

  // Boolean field: ERRI
    static const uint32_t CAN_MSR_ERRI = 1U << 2 ;

  // Boolean field: INAK
    static const uint32_t CAN_MSR_INAK = 1U << 0 ;

  // Boolean field: WKUI
    static const uint32_t CAN_MSR_WKUI = 1U << 3 ;

  // Boolean field: SLAK
    static const uint32_t CAN_MSR_SLAK = 1U << 1 ;

  // Boolean field: SAMP
    static const uint32_t CAN_MSR_SAMP = 1U << 10 ;

  // Boolean field: SLAKI
    static const uint32_t CAN_MSR_SLAKI = 1U << 4 ;

//-------------------- Filter bank 20 register 2
#define CAN_F20R2(group) (* ((volatile uint32_t *) (kBaseAddress_CAN [group] + 0x2E4)))
#define CAN1_F20R2 (* ((volatile uint32_t *) (0x40006400 + 0x2E4)))

  // Boolean field: Filter bits
    static const uint32_t CAN_F20R2_FB3 = 1U << 3 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F20R2_FB2 = 1U << 2 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F20R2_FB1 = 1U << 1 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F20R2_FB0 = 1U << 0 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F20R2_FB7 = 1U << 7 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F20R2_FB6 = 1U << 6 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F20R2_FB5 = 1U << 5 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F20R2_FB4 = 1U << 4 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F20R2_FB9 = 1U << 9 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F20R2_FB8 = 1U << 8 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F20R2_FB22 = 1U << 22 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F20R2_FB23 = 1U << 23 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F20R2_FB20 = 1U << 20 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F20R2_FB21 = 1U << 21 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F20R2_FB26 = 1U << 26 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F20R2_FB27 = 1U << 27 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F20R2_FB24 = 1U << 24 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F20R2_FB25 = 1U << 25 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F20R2_FB28 = 1U << 28 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F20R2_FB29 = 1U << 29 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F20R2_FB17 = 1U << 17 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F20R2_FB16 = 1U << 16 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F20R2_FB15 = 1U << 15 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F20R2_FB14 = 1U << 14 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F20R2_FB13 = 1U << 13 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F20R2_FB12 = 1U << 12 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F20R2_FB11 = 1U << 11 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F20R2_FB10 = 1U << 10 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F20R2_FB31 = 1U << 31 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F20R2_FB30 = 1U << 30 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F20R2_FB19 = 1U << 19 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F20R2_FB18 = 1U << 18 ;

//-------------------- Filter bank 20 register 1
#define CAN_F20R1(group) (* ((volatile uint32_t *) (kBaseAddress_CAN [group] + 0x2E0)))
#define CAN1_F20R1 (* ((volatile uint32_t *) (0x40006400 + 0x2E0)))

  // Boolean field: Filter bits
    static const uint32_t CAN_F20R1_FB3 = 1U << 3 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F20R1_FB2 = 1U << 2 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F20R1_FB1 = 1U << 1 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F20R1_FB0 = 1U << 0 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F20R1_FB7 = 1U << 7 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F20R1_FB6 = 1U << 6 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F20R1_FB5 = 1U << 5 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F20R1_FB4 = 1U << 4 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F20R1_FB9 = 1U << 9 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F20R1_FB8 = 1U << 8 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F20R1_FB22 = 1U << 22 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F20R1_FB23 = 1U << 23 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F20R1_FB20 = 1U << 20 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F20R1_FB21 = 1U << 21 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F20R1_FB26 = 1U << 26 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F20R1_FB27 = 1U << 27 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F20R1_FB24 = 1U << 24 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F20R1_FB25 = 1U << 25 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F20R1_FB28 = 1U << 28 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F20R1_FB29 = 1U << 29 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F20R1_FB17 = 1U << 17 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F20R1_FB16 = 1U << 16 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F20R1_FB15 = 1U << 15 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F20R1_FB14 = 1U << 14 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F20R1_FB13 = 1U << 13 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F20R1_FB12 = 1U << 12 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F20R1_FB11 = 1U << 11 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F20R1_FB10 = 1U << 10 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F20R1_FB31 = 1U << 31 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F20R1_FB30 = 1U << 30 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F20R1_FB19 = 1U << 19 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F20R1_FB18 = 1U << 18 ;

//-------------------- Filter bank 4 register 1
#define CAN_F4R1(group) (* ((volatile uint32_t *) (kBaseAddress_CAN [group] + 0x260)))
#define CAN1_F4R1 (* ((volatile uint32_t *) (0x40006400 + 0x260)))

  // Boolean field: Filter bits
    static const uint32_t CAN_F4R1_FB3 = 1U << 3 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F4R1_FB2 = 1U << 2 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F4R1_FB1 = 1U << 1 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F4R1_FB0 = 1U << 0 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F4R1_FB7 = 1U << 7 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F4R1_FB6 = 1U << 6 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F4R1_FB5 = 1U << 5 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F4R1_FB4 = 1U << 4 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F4R1_FB9 = 1U << 9 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F4R1_FB8 = 1U << 8 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F4R1_FB22 = 1U << 22 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F4R1_FB23 = 1U << 23 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F4R1_FB20 = 1U << 20 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F4R1_FB21 = 1U << 21 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F4R1_FB26 = 1U << 26 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F4R1_FB27 = 1U << 27 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F4R1_FB24 = 1U << 24 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F4R1_FB25 = 1U << 25 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F4R1_FB28 = 1U << 28 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F4R1_FB29 = 1U << 29 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F4R1_FB17 = 1U << 17 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F4R1_FB16 = 1U << 16 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F4R1_FB15 = 1U << 15 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F4R1_FB14 = 1U << 14 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F4R1_FB13 = 1U << 13 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F4R1_FB12 = 1U << 12 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F4R1_FB11 = 1U << 11 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F4R1_FB10 = 1U << 10 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F4R1_FB31 = 1U << 31 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F4R1_FB30 = 1U << 30 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F4R1_FB19 = 1U << 19 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F4R1_FB18 = 1U << 18 ;

//-------------------- Filter bank 4 register 2
#define CAN_F4R2(group) (* ((volatile uint32_t *) (kBaseAddress_CAN [group] + 0x264)))
#define CAN1_F4R2 (* ((volatile uint32_t *) (0x40006400 + 0x264)))

  // Boolean field: Filter bits
    static const uint32_t CAN_F4R2_FB3 = 1U << 3 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F4R2_FB2 = 1U << 2 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F4R2_FB1 = 1U << 1 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F4R2_FB0 = 1U << 0 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F4R2_FB7 = 1U << 7 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F4R2_FB6 = 1U << 6 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F4R2_FB5 = 1U << 5 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F4R2_FB4 = 1U << 4 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F4R2_FB9 = 1U << 9 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F4R2_FB8 = 1U << 8 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F4R2_FB22 = 1U << 22 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F4R2_FB23 = 1U << 23 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F4R2_FB20 = 1U << 20 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F4R2_FB21 = 1U << 21 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F4R2_FB26 = 1U << 26 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F4R2_FB27 = 1U << 27 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F4R2_FB24 = 1U << 24 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F4R2_FB25 = 1U << 25 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F4R2_FB28 = 1U << 28 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F4R2_FB29 = 1U << 29 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F4R2_FB17 = 1U << 17 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F4R2_FB16 = 1U << 16 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F4R2_FB15 = 1U << 15 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F4R2_FB14 = 1U << 14 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F4R2_FB13 = 1U << 13 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F4R2_FB12 = 1U << 12 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F4R2_FB11 = 1U << 11 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F4R2_FB10 = 1U << 10 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F4R2_FB31 = 1U << 31 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F4R2_FB30 = 1U << 30 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F4R2_FB19 = 1U << 19 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F4R2_FB18 = 1U << 18 ;

//-------------------- Filter bank 22 register 1
#define CAN_F22R1(group) (* ((volatile uint32_t *) (kBaseAddress_CAN [group] + 0x2F0)))
#define CAN1_F22R1 (* ((volatile uint32_t *) (0x40006400 + 0x2F0)))

  // Boolean field: Filter bits
    static const uint32_t CAN_F22R1_FB3 = 1U << 3 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F22R1_FB2 = 1U << 2 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F22R1_FB1 = 1U << 1 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F22R1_FB0 = 1U << 0 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F22R1_FB7 = 1U << 7 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F22R1_FB6 = 1U << 6 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F22R1_FB5 = 1U << 5 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F22R1_FB4 = 1U << 4 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F22R1_FB9 = 1U << 9 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F22R1_FB8 = 1U << 8 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F22R1_FB22 = 1U << 22 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F22R1_FB23 = 1U << 23 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F22R1_FB20 = 1U << 20 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F22R1_FB21 = 1U << 21 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F22R1_FB26 = 1U << 26 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F22R1_FB27 = 1U << 27 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F22R1_FB24 = 1U << 24 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F22R1_FB25 = 1U << 25 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F22R1_FB28 = 1U << 28 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F22R1_FB29 = 1U << 29 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F22R1_FB17 = 1U << 17 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F22R1_FB16 = 1U << 16 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F22R1_FB15 = 1U << 15 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F22R1_FB14 = 1U << 14 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F22R1_FB13 = 1U << 13 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F22R1_FB12 = 1U << 12 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F22R1_FB11 = 1U << 11 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F22R1_FB10 = 1U << 10 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F22R1_FB31 = 1U << 31 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F22R1_FB30 = 1U << 30 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F22R1_FB19 = 1U << 19 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F22R1_FB18 = 1U << 18 ;

//-------------------- Filter bank 22 register 2
#define CAN_F22R2(group) (* ((volatile uint32_t *) (kBaseAddress_CAN [group] + 0x2F4)))
#define CAN1_F22R2 (* ((volatile uint32_t *) (0x40006400 + 0x2F4)))

  // Boolean field: Filter bits
    static const uint32_t CAN_F22R2_FB3 = 1U << 3 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F22R2_FB2 = 1U << 2 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F22R2_FB1 = 1U << 1 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F22R2_FB0 = 1U << 0 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F22R2_FB7 = 1U << 7 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F22R2_FB6 = 1U << 6 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F22R2_FB5 = 1U << 5 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F22R2_FB4 = 1U << 4 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F22R2_FB9 = 1U << 9 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F22R2_FB8 = 1U << 8 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F22R2_FB22 = 1U << 22 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F22R2_FB23 = 1U << 23 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F22R2_FB20 = 1U << 20 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F22R2_FB21 = 1U << 21 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F22R2_FB26 = 1U << 26 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F22R2_FB27 = 1U << 27 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F22R2_FB24 = 1U << 24 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F22R2_FB25 = 1U << 25 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F22R2_FB28 = 1U << 28 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F22R2_FB29 = 1U << 29 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F22R2_FB17 = 1U << 17 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F22R2_FB16 = 1U << 16 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F22R2_FB15 = 1U << 15 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F22R2_FB14 = 1U << 14 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F22R2_FB13 = 1U << 13 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F22R2_FB12 = 1U << 12 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F22R2_FB11 = 1U << 11 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F22R2_FB10 = 1U << 10 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F22R2_FB31 = 1U << 31 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F22R2_FB30 = 1U << 30 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F22R2_FB19 = 1U << 19 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F22R2_FB18 = 1U << 18 ;

//-------------------- transmit status register
#define CAN_TSR(group) (* ((const volatile uint32_t *) (kBaseAddress_CAN [group] + 0x8)))
#define CAN1_TSR (* ((const volatile uint32_t *) (0x40006400 + 0x8)))

  // Field (width: 2 bits): CODE
    inline uint32_t CAN_TSR_CODE (const uint32_t inValue) { return (inValue & 3U) << 24 ; }

  // Boolean field: TXOK2
    static const uint32_t CAN_TSR_TXOK2 = 1U << 17 ;

  // Boolean field: TXOK1
    static const uint32_t CAN_TSR_TXOK1 = 1U << 9 ;

  // Boolean field: TXOK0
    static const uint32_t CAN_TSR_TXOK0 = 1U << 1 ;

  // Boolean field: RQCP2
    static const uint32_t CAN_TSR_RQCP2 = 1U << 16 ;

  // Boolean field: RQCP1
    static const uint32_t CAN_TSR_RQCP1 = 1U << 8 ;

  // Boolean field: RQCP0
    static const uint32_t CAN_TSR_RQCP0 = 1U << 0 ;

  // Boolean field: Lowest priority flag for mailbox
              2
    static const uint32_t CAN_TSR_LOW2 = 1U << 31 ;

  // Boolean field: ALST2
    static const uint32_t CAN_TSR_ALST2 = 1U << 18 ;

  // Boolean field: ALST1
    static const uint32_t CAN_TSR_ALST1 = 1U << 10 ;

  // Boolean field: ALST0
    static const uint32_t CAN_TSR_ALST0 = 1U << 2 ;

  // Boolean field: Lowest priority flag for mailbox
              0
    static const uint32_t CAN_TSR_TME0 = 1U << 26 ;

  // Boolean field: Lowest priority flag for mailbox
              1
    static const uint32_t CAN_TSR_TME1 = 1U << 27 ;

  // Boolean field: TERR2
    static const uint32_t CAN_TSR_TERR2 = 1U << 19 ;

  // Boolean field: TERR0
    static const uint32_t CAN_TSR_TERR0 = 1U << 3 ;

  // Boolean field: TERR1
    static const uint32_t CAN_TSR_TERR1 = 1U << 11 ;

  // Boolean field: ABRQ2
    static const uint32_t CAN_TSR_ABRQ2 = 1U << 23 ;

  // Boolean field: ABRQ1
    static const uint32_t CAN_TSR_ABRQ1 = 1U << 15 ;

  // Boolean field: ABRQ0
    static const uint32_t CAN_TSR_ABRQ0 = 1U << 7 ;

  // Boolean field: Lowest priority flag for mailbox
              2
    static const uint32_t CAN_TSR_TME2 = 1U << 28 ;

  // Boolean field: Lowest priority flag for mailbox
              0
    static const uint32_t CAN_TSR_LOW0 = 1U << 29 ;

  // Boolean field: Lowest priority flag for mailbox
              1
    static const uint32_t CAN_TSR_LOW1 = 1U << 30 ;

//-------------------- mailbox data high register
#define CAN_RDL1R(group) (* ((const volatile uint32_t *) (kBaseAddress_CAN [group] + 0x1C8)))
#define CAN1_RDL1R (* ((const volatile uint32_t *) (0x40006400 + 0x1C8)))

  // Field (width: 8 bits): DATA1
    inline uint32_t CAN_RDL1R_DATA1 (const uint32_t inValue) { return (inValue & 255U) << 8 ; }

  // Field (width: 8 bits): DATA0
    inline uint32_t CAN_RDL1R_DATA0 (const uint32_t inValue) { return (inValue & 255U) << 0 ; }

  // Field (width: 8 bits): DATA3
    inline uint32_t CAN_RDL1R_DATA3 (const uint32_t inValue) { return (inValue & 255U) << 24 ; }

  // Field (width: 8 bits): DATA2
    inline uint32_t CAN_RDL1R_DATA2 (const uint32_t inValue) { return (inValue & 255U) << 16 ; }

//-------------------- mailbox data high register
#define CAN_RI1R(group) (* ((const volatile uint32_t *) (kBaseAddress_CAN [group] + 0x1C0)))
#define CAN1_RI1R (* ((const volatile uint32_t *) (0x40006400 + 0x1C0)))

  // Field (width: 11 bits): STID
    inline uint32_t CAN_RI1R_STID (const uint32_t inValue) { return (inValue & 2047U) << 21 ; }

  // Boolean field: IDE
    static const uint32_t CAN_RI1R_IDE = 1U << 2 ;

  // Field (width: 18 bits): EXID
    inline uint32_t CAN_RI1R_EXID (const uint32_t inValue) { return (inValue & 262143U) << 3 ; }

  // Boolean field: RTR
    static const uint32_t CAN_RI1R_RTR = 1U << 1 ;

//-------------------- receive FIFO 0 register
#define CAN_RF0R(group) (* ((const volatile uint32_t *) (kBaseAddress_CAN [group] + 0xC)))
#define CAN1_RF0R (* ((const volatile uint32_t *) (0x40006400 + 0xC)))

  // Boolean field: FULL0
    static const uint32_t CAN_RF0R_FULL0 = 1U << 3 ;

  // Field (width: 2 bits): FMP0
    inline uint32_t CAN_RF0R_FMP0 (const uint32_t inValue) { return (inValue & 3U) << 0 ; }

  // Boolean field: RFOM0
    static const uint32_t CAN_RF0R_RFOM0 = 1U << 5 ;

  // Boolean field: FOVR0
    static const uint32_t CAN_RF0R_FOVR0 = 1U << 4 ;

//-------------------- interrupt enable register
#define CAN_ESR(group) (* ((const volatile uint32_t *) (kBaseAddress_CAN [group] + 0x18)))
#define CAN1_ESR (* ((const volatile uint32_t *) (0x40006400 + 0x18)))

  // Boolean field: EPVF
    static const uint32_t CAN_ESR_EPVF = 1U << 1 ;

  // Field (width: 8 bits): TEC
    inline uint32_t CAN_ESR_TEC (const uint32_t inValue) { return (inValue & 255U) << 16 ; }

  // Boolean field: EWGF
    static const uint32_t CAN_ESR_EWGF = 1U << 0 ;

  // Field (width: 3 bits): LEC
    inline uint32_t CAN_ESR_LEC (const uint32_t inValue) { return (inValue & 7U) << 4 ; }

  // Boolean field: BOFF
    static const uint32_t CAN_ESR_BOFF = 1U << 2 ;

  // Field (width: 8 bits): REC
    inline uint32_t CAN_ESR_REC (const uint32_t inValue) { return (inValue & 255U) << 24 ; }

//-------------------- Filter bank 6 register 2
#define CAN_F6R2(group) (* ((volatile uint32_t *) (kBaseAddress_CAN [group] + 0x274)))
#define CAN1_F6R2 (* ((volatile uint32_t *) (0x40006400 + 0x274)))

  // Boolean field: Filter bits
    static const uint32_t CAN_F6R2_FB3 = 1U << 3 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F6R2_FB2 = 1U << 2 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F6R2_FB1 = 1U << 1 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F6R2_FB0 = 1U << 0 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F6R2_FB7 = 1U << 7 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F6R2_FB6 = 1U << 6 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F6R2_FB5 = 1U << 5 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F6R2_FB4 = 1U << 4 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F6R2_FB9 = 1U << 9 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F6R2_FB8 = 1U << 8 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F6R2_FB22 = 1U << 22 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F6R2_FB23 = 1U << 23 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F6R2_FB20 = 1U << 20 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F6R2_FB21 = 1U << 21 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F6R2_FB26 = 1U << 26 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F6R2_FB27 = 1U << 27 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F6R2_FB24 = 1U << 24 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F6R2_FB25 = 1U << 25 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F6R2_FB28 = 1U << 28 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F6R2_FB29 = 1U << 29 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F6R2_FB17 = 1U << 17 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F6R2_FB16 = 1U << 16 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F6R2_FB15 = 1U << 15 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F6R2_FB14 = 1U << 14 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F6R2_FB13 = 1U << 13 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F6R2_FB12 = 1U << 12 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F6R2_FB11 = 1U << 11 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F6R2_FB10 = 1U << 10 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F6R2_FB31 = 1U << 31 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F6R2_FB30 = 1U << 30 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F6R2_FB19 = 1U << 19 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F6R2_FB18 = 1U << 18 ;

//-------------------- Filter bank 6 register 1
#define CAN_F6R1(group) (* ((volatile uint32_t *) (kBaseAddress_CAN [group] + 0x270)))
#define CAN1_F6R1 (* ((volatile uint32_t *) (0x40006400 + 0x270)))

  // Boolean field: Filter bits
    static const uint32_t CAN_F6R1_FB3 = 1U << 3 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F6R1_FB2 = 1U << 2 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F6R1_FB1 = 1U << 1 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F6R1_FB0 = 1U << 0 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F6R1_FB7 = 1U << 7 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F6R1_FB6 = 1U << 6 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F6R1_FB5 = 1U << 5 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F6R1_FB4 = 1U << 4 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F6R1_FB9 = 1U << 9 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F6R1_FB8 = 1U << 8 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F6R1_FB22 = 1U << 22 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F6R1_FB23 = 1U << 23 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F6R1_FB20 = 1U << 20 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F6R1_FB21 = 1U << 21 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F6R1_FB26 = 1U << 26 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F6R1_FB27 = 1U << 27 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F6R1_FB24 = 1U << 24 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F6R1_FB25 = 1U << 25 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F6R1_FB28 = 1U << 28 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F6R1_FB29 = 1U << 29 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F6R1_FB17 = 1U << 17 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F6R1_FB16 = 1U << 16 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F6R1_FB15 = 1U << 15 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F6R1_FB14 = 1U << 14 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F6R1_FB13 = 1U << 13 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F6R1_FB12 = 1U << 12 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F6R1_FB11 = 1U << 11 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F6R1_FB10 = 1U << 10 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F6R1_FB31 = 1U << 31 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F6R1_FB30 = 1U << 30 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F6R1_FB19 = 1U << 19 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F6R1_FB18 = 1U << 18 ;

//-------------------- Filter bank 16 register 1
#define CAN_F16R1(group) (* ((volatile uint32_t *) (kBaseAddress_CAN [group] + 0x2C0)))
#define CAN1_F16R1 (* ((volatile uint32_t *) (0x40006400 + 0x2C0)))

  // Boolean field: Filter bits
    static const uint32_t CAN_F16R1_FB3 = 1U << 3 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F16R1_FB2 = 1U << 2 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F16R1_FB1 = 1U << 1 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F16R1_FB0 = 1U << 0 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F16R1_FB7 = 1U << 7 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F16R1_FB6 = 1U << 6 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F16R1_FB5 = 1U << 5 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F16R1_FB4 = 1U << 4 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F16R1_FB9 = 1U << 9 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F16R1_FB8 = 1U << 8 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F16R1_FB22 = 1U << 22 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F16R1_FB23 = 1U << 23 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F16R1_FB20 = 1U << 20 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F16R1_FB21 = 1U << 21 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F16R1_FB26 = 1U << 26 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F16R1_FB27 = 1U << 27 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F16R1_FB24 = 1U << 24 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F16R1_FB25 = 1U << 25 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F16R1_FB28 = 1U << 28 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F16R1_FB29 = 1U << 29 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F16R1_FB17 = 1U << 17 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F16R1_FB16 = 1U << 16 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F16R1_FB15 = 1U << 15 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F16R1_FB14 = 1U << 14 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F16R1_FB13 = 1U << 13 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F16R1_FB12 = 1U << 12 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F16R1_FB11 = 1U << 11 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F16R1_FB10 = 1U << 10 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F16R1_FB31 = 1U << 31 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F16R1_FB30 = 1U << 30 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F16R1_FB19 = 1U << 19 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F16R1_FB18 = 1U << 18 ;

//-------------------- Filter bank 16 register 2
#define CAN_F16R2(group) (* ((volatile uint32_t *) (kBaseAddress_CAN [group] + 0x2C4)))
#define CAN1_F16R2 (* ((volatile uint32_t *) (0x40006400 + 0x2C4)))

  // Boolean field: Filter bits
    static const uint32_t CAN_F16R2_FB3 = 1U << 3 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F16R2_FB2 = 1U << 2 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F16R2_FB1 = 1U << 1 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F16R2_FB0 = 1U << 0 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F16R2_FB7 = 1U << 7 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F16R2_FB6 = 1U << 6 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F16R2_FB5 = 1U << 5 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F16R2_FB4 = 1U << 4 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F16R2_FB9 = 1U << 9 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F16R2_FB8 = 1U << 8 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F16R2_FB22 = 1U << 22 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F16R2_FB23 = 1U << 23 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F16R2_FB20 = 1U << 20 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F16R2_FB21 = 1U << 21 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F16R2_FB26 = 1U << 26 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F16R2_FB27 = 1U << 27 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F16R2_FB24 = 1U << 24 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F16R2_FB25 = 1U << 25 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F16R2_FB28 = 1U << 28 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F16R2_FB29 = 1U << 29 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F16R2_FB17 = 1U << 17 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F16R2_FB16 = 1U << 16 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F16R2_FB15 = 1U << 15 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F16R2_FB14 = 1U << 14 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F16R2_FB13 = 1U << 13 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F16R2_FB12 = 1U << 12 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F16R2_FB11 = 1U << 11 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F16R2_FB10 = 1U << 10 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F16R2_FB31 = 1U << 31 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F16R2_FB30 = 1U << 30 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F16R2_FB19 = 1U << 19 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F16R2_FB18 = 1U << 18 ;

//-------------------- Filter bank 2 register 2
#define CAN_F2R2(group) (* ((volatile uint32_t *) (kBaseAddress_CAN [group] + 0x254)))
#define CAN1_F2R2 (* ((volatile uint32_t *) (0x40006400 + 0x254)))

  // Boolean field: Filter bits
    static const uint32_t CAN_F2R2_FB3 = 1U << 3 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F2R2_FB2 = 1U << 2 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F2R2_FB1 = 1U << 1 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F2R2_FB0 = 1U << 0 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F2R2_FB7 = 1U << 7 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F2R2_FB6 = 1U << 6 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F2R2_FB5 = 1U << 5 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F2R2_FB4 = 1U << 4 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F2R2_FB9 = 1U << 9 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F2R2_FB8 = 1U << 8 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F2R2_FB22 = 1U << 22 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F2R2_FB23 = 1U << 23 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F2R2_FB20 = 1U << 20 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F2R2_FB21 = 1U << 21 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F2R2_FB26 = 1U << 26 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F2R2_FB27 = 1U << 27 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F2R2_FB24 = 1U << 24 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F2R2_FB25 = 1U << 25 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F2R2_FB28 = 1U << 28 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F2R2_FB29 = 1U << 29 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F2R2_FB17 = 1U << 17 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F2R2_FB16 = 1U << 16 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F2R2_FB15 = 1U << 15 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F2R2_FB14 = 1U << 14 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F2R2_FB13 = 1U << 13 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F2R2_FB12 = 1U << 12 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F2R2_FB11 = 1U << 11 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F2R2_FB10 = 1U << 10 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F2R2_FB31 = 1U << 31 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F2R2_FB30 = 1U << 30 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F2R2_FB19 = 1U << 19 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F2R2_FB18 = 1U << 18 ;

//-------------------- Filter bank 2 register 1
#define CAN_F2R1(group) (* ((volatile uint32_t *) (kBaseAddress_CAN [group] + 0x250)))
#define CAN1_F2R1 (* ((volatile uint32_t *) (0x40006400 + 0x250)))

  // Boolean field: Filter bits
    static const uint32_t CAN_F2R1_FB3 = 1U << 3 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F2R1_FB2 = 1U << 2 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F2R1_FB1 = 1U << 1 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F2R1_FB0 = 1U << 0 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F2R1_FB7 = 1U << 7 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F2R1_FB6 = 1U << 6 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F2R1_FB5 = 1U << 5 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F2R1_FB4 = 1U << 4 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F2R1_FB9 = 1U << 9 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F2R1_FB8 = 1U << 8 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F2R1_FB22 = 1U << 22 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F2R1_FB23 = 1U << 23 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F2R1_FB20 = 1U << 20 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F2R1_FB21 = 1U << 21 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F2R1_FB26 = 1U << 26 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F2R1_FB27 = 1U << 27 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F2R1_FB24 = 1U << 24 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F2R1_FB25 = 1U << 25 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F2R1_FB28 = 1U << 28 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F2R1_FB29 = 1U << 29 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F2R1_FB17 = 1U << 17 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F2R1_FB16 = 1U << 16 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F2R1_FB15 = 1U << 15 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F2R1_FB14 = 1U << 14 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F2R1_FB13 = 1U << 13 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F2R1_FB12 = 1U << 12 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F2R1_FB11 = 1U << 11 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F2R1_FB10 = 1U << 10 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F2R1_FB31 = 1U << 31 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F2R1_FB30 = 1U << 30 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F2R1_FB19 = 1U << 19 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F2R1_FB18 = 1U << 18 ;

//-------------------- Filter bank 0 register 1
#define CAN_F0R1(group) (* ((volatile uint32_t *) (kBaseAddress_CAN [group] + 0x240)))
#define CAN1_F0R1 (* ((volatile uint32_t *) (0x40006400 + 0x240)))

  // Boolean field: Filter bits
    static const uint32_t CAN_F0R1_FB3 = 1U << 3 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F0R1_FB2 = 1U << 2 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F0R1_FB1 = 1U << 1 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F0R1_FB0 = 1U << 0 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F0R1_FB7 = 1U << 7 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F0R1_FB6 = 1U << 6 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F0R1_FB5 = 1U << 5 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F0R1_FB4 = 1U << 4 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F0R1_FB9 = 1U << 9 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F0R1_FB8 = 1U << 8 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F0R1_FB22 = 1U << 22 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F0R1_FB23 = 1U << 23 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F0R1_FB20 = 1U << 20 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F0R1_FB21 = 1U << 21 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F0R1_FB26 = 1U << 26 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F0R1_FB27 = 1U << 27 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F0R1_FB24 = 1U << 24 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F0R1_FB25 = 1U << 25 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F0R1_FB28 = 1U << 28 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F0R1_FB29 = 1U << 29 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F0R1_FB17 = 1U << 17 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F0R1_FB16 = 1U << 16 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F0R1_FB15 = 1U << 15 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F0R1_FB14 = 1U << 14 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F0R1_FB13 = 1U << 13 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F0R1_FB12 = 1U << 12 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F0R1_FB11 = 1U << 11 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F0R1_FB10 = 1U << 10 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F0R1_FB31 = 1U << 31 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F0R1_FB30 = 1U << 30 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F0R1_FB19 = 1U << 19 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F0R1_FB18 = 1U << 18 ;

//-------------------- Filter bank 0 register 2
#define CAN_F0R2(group) (* ((volatile uint32_t *) (kBaseAddress_CAN [group] + 0x244)))
#define CAN1_F0R2 (* ((volatile uint32_t *) (0x40006400 + 0x244)))

  // Boolean field: Filter bits
    static const uint32_t CAN_F0R2_FB3 = 1U << 3 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F0R2_FB2 = 1U << 2 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F0R2_FB1 = 1U << 1 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F0R2_FB0 = 1U << 0 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F0R2_FB7 = 1U << 7 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F0R2_FB6 = 1U << 6 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F0R2_FB5 = 1U << 5 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F0R2_FB4 = 1U << 4 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F0R2_FB9 = 1U << 9 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F0R2_FB8 = 1U << 8 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F0R2_FB22 = 1U << 22 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F0R2_FB23 = 1U << 23 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F0R2_FB20 = 1U << 20 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F0R2_FB21 = 1U << 21 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F0R2_FB26 = 1U << 26 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F0R2_FB27 = 1U << 27 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F0R2_FB24 = 1U << 24 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F0R2_FB25 = 1U << 25 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F0R2_FB28 = 1U << 28 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F0R2_FB29 = 1U << 29 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F0R2_FB17 = 1U << 17 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F0R2_FB16 = 1U << 16 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F0R2_FB15 = 1U << 15 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F0R2_FB14 = 1U << 14 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F0R2_FB13 = 1U << 13 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F0R2_FB12 = 1U << 12 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F0R2_FB11 = 1U << 11 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F0R2_FB10 = 1U << 10 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F0R2_FB31 = 1U << 31 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F0R2_FB30 = 1U << 30 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F0R2_FB19 = 1U << 19 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F0R2_FB18 = 1U << 18 ;

//-------------------- mailbox data high register
#define CAN_RDL0R(group) (* ((const volatile uint32_t *) (kBaseAddress_CAN [group] + 0x1B8)))
#define CAN1_RDL0R (* ((const volatile uint32_t *) (0x40006400 + 0x1B8)))

  // Field (width: 8 bits): DATA1
    inline uint32_t CAN_RDL0R_DATA1 (const uint32_t inValue) { return (inValue & 255U) << 8 ; }

  // Field (width: 8 bits): DATA0
    inline uint32_t CAN_RDL0R_DATA0 (const uint32_t inValue) { return (inValue & 255U) << 0 ; }

  // Field (width: 8 bits): DATA3
    inline uint32_t CAN_RDL0R_DATA3 (const uint32_t inValue) { return (inValue & 255U) << 24 ; }

  // Field (width: 8 bits): DATA2
    inline uint32_t CAN_RDL0R_DATA2 (const uint32_t inValue) { return (inValue & 255U) << 16 ; }

//-------------------- Filter bank 4 register 1
#define CAN_F12R1(group) (* ((volatile uint32_t *) (kBaseAddress_CAN [group] + 0x2A0)))
#define CAN1_F12R1 (* ((volatile uint32_t *) (0x40006400 + 0x2A0)))

  // Boolean field: Filter bits
    static const uint32_t CAN_F12R1_FB3 = 1U << 3 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F12R1_FB2 = 1U << 2 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F12R1_FB1 = 1U << 1 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F12R1_FB0 = 1U << 0 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F12R1_FB7 = 1U << 7 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F12R1_FB6 = 1U << 6 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F12R1_FB5 = 1U << 5 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F12R1_FB4 = 1U << 4 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F12R1_FB9 = 1U << 9 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F12R1_FB8 = 1U << 8 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F12R1_FB22 = 1U << 22 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F12R1_FB23 = 1U << 23 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F12R1_FB20 = 1U << 20 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F12R1_FB21 = 1U << 21 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F12R1_FB26 = 1U << 26 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F12R1_FB27 = 1U << 27 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F12R1_FB24 = 1U << 24 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F12R1_FB25 = 1U << 25 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F12R1_FB28 = 1U << 28 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F12R1_FB29 = 1U << 29 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F12R1_FB17 = 1U << 17 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F12R1_FB16 = 1U << 16 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F12R1_FB15 = 1U << 15 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F12R1_FB14 = 1U << 14 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F12R1_FB13 = 1U << 13 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F12R1_FB12 = 1U << 12 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F12R1_FB11 = 1U << 11 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F12R1_FB10 = 1U << 10 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F12R1_FB31 = 1U << 31 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F12R1_FB30 = 1U << 30 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F12R1_FB19 = 1U << 19 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F12R1_FB18 = 1U << 18 ;

//-------------------- Filter bank 8 register 1
#define CAN_F8R1(group) (* ((volatile uint32_t *) (kBaseAddress_CAN [group] + 0x280)))
#define CAN1_F8R1 (* ((volatile uint32_t *) (0x40006400 + 0x280)))

  // Boolean field: Filter bits
    static const uint32_t CAN_F8R1_FB3 = 1U << 3 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F8R1_FB2 = 1U << 2 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F8R1_FB1 = 1U << 1 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F8R1_FB0 = 1U << 0 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F8R1_FB7 = 1U << 7 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F8R1_FB6 = 1U << 6 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F8R1_FB5 = 1U << 5 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F8R1_FB4 = 1U << 4 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F8R1_FB9 = 1U << 9 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F8R1_FB8 = 1U << 8 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F8R1_FB22 = 1U << 22 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F8R1_FB23 = 1U << 23 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F8R1_FB20 = 1U << 20 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F8R1_FB21 = 1U << 21 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F8R1_FB26 = 1U << 26 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F8R1_FB27 = 1U << 27 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F8R1_FB24 = 1U << 24 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F8R1_FB25 = 1U << 25 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F8R1_FB28 = 1U << 28 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F8R1_FB29 = 1U << 29 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F8R1_FB17 = 1U << 17 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F8R1_FB16 = 1U << 16 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F8R1_FB15 = 1U << 15 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F8R1_FB14 = 1U << 14 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F8R1_FB13 = 1U << 13 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F8R1_FB12 = 1U << 12 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F8R1_FB11 = 1U << 11 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F8R1_FB10 = 1U << 10 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F8R1_FB31 = 1U << 31 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F8R1_FB30 = 1U << 30 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F8R1_FB19 = 1U << 19 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F8R1_FB18 = 1U << 18 ;

//-------------------- Filter bank 8 register 2
#define CAN_F8R2(group) (* ((volatile uint32_t *) (kBaseAddress_CAN [group] + 0x284)))
#define CAN1_F8R2 (* ((volatile uint32_t *) (0x40006400 + 0x284)))

  // Boolean field: Filter bits
    static const uint32_t CAN_F8R2_FB3 = 1U << 3 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F8R2_FB2 = 1U << 2 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F8R2_FB1 = 1U << 1 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F8R2_FB0 = 1U << 0 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F8R2_FB7 = 1U << 7 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F8R2_FB6 = 1U << 6 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F8R2_FB5 = 1U << 5 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F8R2_FB4 = 1U << 4 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F8R2_FB9 = 1U << 9 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F8R2_FB8 = 1U << 8 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F8R2_FB22 = 1U << 22 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F8R2_FB23 = 1U << 23 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F8R2_FB20 = 1U << 20 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F8R2_FB21 = 1U << 21 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F8R2_FB26 = 1U << 26 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F8R2_FB27 = 1U << 27 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F8R2_FB24 = 1U << 24 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F8R2_FB25 = 1U << 25 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F8R2_FB28 = 1U << 28 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F8R2_FB29 = 1U << 29 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F8R2_FB17 = 1U << 17 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F8R2_FB16 = 1U << 16 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F8R2_FB15 = 1U << 15 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F8R2_FB14 = 1U << 14 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F8R2_FB13 = 1U << 13 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F8R2_FB12 = 1U << 12 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F8R2_FB11 = 1U << 11 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F8R2_FB10 = 1U << 10 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F8R2_FB31 = 1U << 31 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F8R2_FB30 = 1U << 30 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F8R2_FB19 = 1U << 19 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F8R2_FB18 = 1U << 18 ;

//-------------------- Filter bank 12 register 2
#define CAN_F12R2(group) (* ((volatile uint32_t *) (kBaseAddress_CAN [group] + 0x2A4)))
#define CAN1_F12R2 (* ((volatile uint32_t *) (0x40006400 + 0x2A4)))

  // Boolean field: Filter bits
    static const uint32_t CAN_F12R2_FB3 = 1U << 3 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F12R2_FB2 = 1U << 2 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F12R2_FB1 = 1U << 1 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F12R2_FB0 = 1U << 0 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F12R2_FB7 = 1U << 7 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F12R2_FB6 = 1U << 6 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F12R2_FB5 = 1U << 5 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F12R2_FB4 = 1U << 4 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F12R2_FB9 = 1U << 9 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F12R2_FB8 = 1U << 8 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F12R2_FB22 = 1U << 22 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F12R2_FB23 = 1U << 23 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F12R2_FB20 = 1U << 20 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F12R2_FB21 = 1U << 21 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F12R2_FB26 = 1U << 26 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F12R2_FB27 = 1U << 27 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F12R2_FB24 = 1U << 24 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F12R2_FB25 = 1U << 25 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F12R2_FB28 = 1U << 28 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F12R2_FB29 = 1U << 29 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F12R2_FB17 = 1U << 17 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F12R2_FB16 = 1U << 16 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F12R2_FB15 = 1U << 15 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F12R2_FB14 = 1U << 14 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F12R2_FB13 = 1U << 13 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F12R2_FB12 = 1U << 12 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F12R2_FB11 = 1U << 11 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F12R2_FB10 = 1U << 10 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F12R2_FB31 = 1U << 31 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F12R2_FB30 = 1U << 30 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F12R2_FB19 = 1U << 19 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F12R2_FB18 = 1U << 18 ;

//-------------------- Filter bank 14 register 2
#define CAN_F14R2(group) (* ((volatile uint32_t *) (kBaseAddress_CAN [group] + 0x2B4)))
#define CAN1_F14R2 (* ((volatile uint32_t *) (0x40006400 + 0x2B4)))

  // Boolean field: Filter bits
    static const uint32_t CAN_F14R2_FB3 = 1U << 3 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F14R2_FB2 = 1U << 2 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F14R2_FB1 = 1U << 1 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F14R2_FB0 = 1U << 0 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F14R2_FB7 = 1U << 7 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F14R2_FB6 = 1U << 6 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F14R2_FB5 = 1U << 5 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F14R2_FB4 = 1U << 4 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F14R2_FB9 = 1U << 9 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F14R2_FB8 = 1U << 8 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F14R2_FB22 = 1U << 22 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F14R2_FB23 = 1U << 23 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F14R2_FB20 = 1U << 20 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F14R2_FB21 = 1U << 21 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F14R2_FB26 = 1U << 26 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F14R2_FB27 = 1U << 27 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F14R2_FB24 = 1U << 24 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F14R2_FB25 = 1U << 25 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F14R2_FB28 = 1U << 28 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F14R2_FB29 = 1U << 29 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F14R2_FB17 = 1U << 17 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F14R2_FB16 = 1U << 16 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F14R2_FB15 = 1U << 15 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F14R2_FB14 = 1U << 14 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F14R2_FB13 = 1U << 13 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F14R2_FB12 = 1U << 12 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F14R2_FB11 = 1U << 11 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F14R2_FB10 = 1U << 10 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F14R2_FB31 = 1U << 31 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F14R2_FB30 = 1U << 30 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F14R2_FB19 = 1U << 19 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F14R2_FB18 = 1U << 18 ;

//-------------------- Filter bank 14 register 1
#define CAN_F14R1(group) (* ((volatile uint32_t *) (kBaseAddress_CAN [group] + 0x2B0)))
#define CAN1_F14R1 (* ((volatile uint32_t *) (0x40006400 + 0x2B0)))

  // Boolean field: Filter bits
    static const uint32_t CAN_F14R1_FB3 = 1U << 3 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F14R1_FB2 = 1U << 2 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F14R1_FB1 = 1U << 1 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F14R1_FB0 = 1U << 0 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F14R1_FB7 = 1U << 7 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F14R1_FB6 = 1U << 6 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F14R1_FB5 = 1U << 5 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F14R1_FB4 = 1U << 4 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F14R1_FB9 = 1U << 9 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F14R1_FB8 = 1U << 8 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F14R1_FB22 = 1U << 22 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F14R1_FB23 = 1U << 23 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F14R1_FB20 = 1U << 20 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F14R1_FB21 = 1U << 21 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F14R1_FB26 = 1U << 26 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F14R1_FB27 = 1U << 27 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F14R1_FB24 = 1U << 24 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F14R1_FB25 = 1U << 25 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F14R1_FB28 = 1U << 28 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F14R1_FB29 = 1U << 29 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F14R1_FB17 = 1U << 17 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F14R1_FB16 = 1U << 16 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F14R1_FB15 = 1U << 15 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F14R1_FB14 = 1U << 14 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F14R1_FB13 = 1U << 13 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F14R1_FB12 = 1U << 12 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F14R1_FB11 = 1U << 11 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F14R1_FB10 = 1U << 10 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F14R1_FB31 = 1U << 31 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F14R1_FB30 = 1U << 30 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F14R1_FB19 = 1U << 19 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F14R1_FB18 = 1U << 18 ;

//-------------------- Filter bank 24 register 2
#define CAN_F24R2(group) (* ((volatile uint32_t *) (kBaseAddress_CAN [group] + 0x304)))
#define CAN1_F24R2 (* ((volatile uint32_t *) (0x40006400 + 0x304)))

  // Boolean field: Filter bits
    static const uint32_t CAN_F24R2_FB3 = 1U << 3 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F24R2_FB2 = 1U << 2 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F24R2_FB1 = 1U << 1 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F24R2_FB0 = 1U << 0 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F24R2_FB7 = 1U << 7 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F24R2_FB6 = 1U << 6 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F24R2_FB5 = 1U << 5 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F24R2_FB4 = 1U << 4 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F24R2_FB9 = 1U << 9 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F24R2_FB8 = 1U << 8 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F24R2_FB22 = 1U << 22 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F24R2_FB23 = 1U << 23 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F24R2_FB20 = 1U << 20 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F24R2_FB21 = 1U << 21 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F24R2_FB26 = 1U << 26 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F24R2_FB27 = 1U << 27 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F24R2_FB24 = 1U << 24 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F24R2_FB25 = 1U << 25 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F24R2_FB28 = 1U << 28 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F24R2_FB29 = 1U << 29 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F24R2_FB17 = 1U << 17 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F24R2_FB16 = 1U << 16 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F24R2_FB15 = 1U << 15 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F24R2_FB14 = 1U << 14 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F24R2_FB13 = 1U << 13 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F24R2_FB12 = 1U << 12 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F24R2_FB11 = 1U << 11 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F24R2_FB10 = 1U << 10 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F24R2_FB31 = 1U << 31 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F24R2_FB30 = 1U << 30 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F24R2_FB19 = 1U << 19 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F24R2_FB18 = 1U << 18 ;

//-------------------- Filter bank 24 register 1
#define CAN_F24R1(group) (* ((volatile uint32_t *) (kBaseAddress_CAN [group] + 0x300)))
#define CAN1_F24R1 (* ((volatile uint32_t *) (0x40006400 + 0x300)))

  // Boolean field: Filter bits
    static const uint32_t CAN_F24R1_FB3 = 1U << 3 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F24R1_FB2 = 1U << 2 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F24R1_FB1 = 1U << 1 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F24R1_FB0 = 1U << 0 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F24R1_FB7 = 1U << 7 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F24R1_FB6 = 1U << 6 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F24R1_FB5 = 1U << 5 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F24R1_FB4 = 1U << 4 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F24R1_FB9 = 1U << 9 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F24R1_FB8 = 1U << 8 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F24R1_FB22 = 1U << 22 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F24R1_FB23 = 1U << 23 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F24R1_FB20 = 1U << 20 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F24R1_FB21 = 1U << 21 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F24R1_FB26 = 1U << 26 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F24R1_FB27 = 1U << 27 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F24R1_FB24 = 1U << 24 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F24R1_FB25 = 1U << 25 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F24R1_FB28 = 1U << 28 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F24R1_FB29 = 1U << 29 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F24R1_FB17 = 1U << 17 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F24R1_FB16 = 1U << 16 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F24R1_FB15 = 1U << 15 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F24R1_FB14 = 1U << 14 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F24R1_FB13 = 1U << 13 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F24R1_FB12 = 1U << 12 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F24R1_FB11 = 1U << 11 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F24R1_FB10 = 1U << 10 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F24R1_FB31 = 1U << 31 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F24R1_FB30 = 1U << 30 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F24R1_FB19 = 1U << 19 ;

  // Boolean field: Filter bits
    static const uint32_t CAN_F24R1_FB18 = 1U << 18 ;

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
// Peripheral group COMP
//                COMP at 0x40010200
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

static const uint32_t kBaseAddress_COMP [1] = {0x40010200} ;

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

//-------------------- Comparator 2 control and status
          register
#define COMP_COMP2_CSR(group) (* ((const volatile uint32_t *) (kBaseAddress_COMP [group] + 0x4)))
#define COMP_COMP2_CSR (* ((const volatile uint32_t *) (0x40010200 + 0x4)))

  // Boolean field: Comparator 2 output status
              bit
    static const uint32_t COMP_COMP2_CSR_COMP2_VALUE = 1U << 30 ;

  // Boolean field: Voltage scaler enable bit
    static const uint32_t COMP_COMP2_CSR_COMP2_SCALEN = 1U << 23 ;

  // Boolean field: Comparator 2 polarity selection
              bit
    static const uint32_t COMP_COMP2_CSR_COMP2_POLARITY = 1U << 15 ;

  // Boolean field: COMP2_CSR register lock
              bit
    static const uint32_t COMP_COMP2_CSR_COMP2_LOCK = 1U << 31 ;

  // Boolean field: Comparator 2 enable bit
    static const uint32_t COMP_COMP2_CSR_COMP2_EN = 1U << 0 ;

  // Field (width: 2 bits): Comparator 2 hysteresis selection
              bits
    inline uint32_t COMP_COMP2_CSR_COMP2_HYST (const uint32_t inValue) { return (inValue & 3U) << 16 ; }

  // Field (width: 3 bits): Comparator 2 blanking source selection
              bits
    inline uint32_t COMP_COMP2_CSR_COMP2_BLANKING (const uint32_t inValue) { return (inValue & 7U) << 18 ; }

  // Field (width: 2 bits): comparator 2 input minus extended
              selection bits
    inline uint32_t COMP_COMP2_CSR_COMP2_INMESEL (const uint32_t inValue) { return (inValue & 3U) << 25 ; }

  // Boolean field: Scaler bridge enable
    static const uint32_t COMP_COMP2_CSR_COMP2_BRGEN = 1U << 22 ;

  // Boolean field: Windows mode selection bit
    static const uint32_t COMP_COMP2_CSR_COMP2_WINMODE = 1U << 9 ;

  // Field (width: 2 bits): Power Mode of the comparator
              2
    inline uint32_t COMP_COMP2_CSR_COMP2_PWRMODE (const uint32_t inValue) { return (inValue & 3U) << 2 ; }

  // Field (width: 2 bits): Comparator 2 Input Plus connection
              configuration bit
    inline uint32_t COMP_COMP2_CSR_COMP2_INPSEL (const uint32_t inValue) { return (inValue & 3U) << 7 ; }

  // Field (width: 3 bits): Comparator 2 Input Minus connection
              configuration bit
    inline uint32_t COMP_COMP2_CSR_COMP2_INMSEL (const uint32_t inValue) { return (inValue & 7U) << 4 ; }

//-------------------- Comparator 1 control and status
          register
#define COMP_COMP1_CSR(group) (* ((const volatile uint32_t *) (kBaseAddress_COMP [group] + 0x0)))
#define COMP_COMP1_CSR (* ((const volatile uint32_t *) (0x40010200 + 0x0)))

  // Field (width: 2 bits): Comparator1 input plus selection
              bit
    inline uint32_t COMP_COMP1_CSR_COMP1_INPSEL (const uint32_t inValue) { return (inValue & 3U) << 7 ; }

  // Field (width: 2 bits): Comparator 1 hysteresis selection
              bits
    inline uint32_t COMP_COMP1_CSR_COMP1_HYST (const uint32_t inValue) { return (inValue & 3U) << 16 ; }

  // Boolean field: Scaler bridge enable
    static const uint32_t COMP_COMP1_CSR_COMP1_BRGEN = 1U << 22 ;

  // Field (width: 3 bits): Comparator 1 Input Minus connection
              configuration bit
    inline uint32_t COMP_COMP1_CSR_COMP1_INMSEL (const uint32_t inValue) { return (inValue & 7U) << 4 ; }

  // Boolean field: Comparator 1 enable bit
    static const uint32_t COMP_COMP1_CSR_COMP1_EN = 1U << 0 ;

  // Field (width: 3 bits): Comparator 1 blanking source selection
              bits
    inline uint32_t COMP_COMP1_CSR_COMP1_BLANKING (const uint32_t inValue) { return (inValue & 7U) << 18 ; }

  // Field (width: 2 bits): comparator 1 input minus extended
              selection bits
    inline uint32_t COMP_COMP1_CSR_COMP1_INMESEL (const uint32_t inValue) { return (inValue & 3U) << 25 ; }

  // Boolean field: Voltage scaler enable bit
    static const uint32_t COMP_COMP1_CSR_COMP1_SCALEN = 1U << 23 ;

  // Boolean field: Comparator 1 polarity selection
              bit
    static const uint32_t COMP_COMP1_CSR_COMP1_POLARITY = 1U << 15 ;

  // Field (width: 2 bits): Power Mode of the comparator
              1
    inline uint32_t COMP_COMP1_CSR_COMP1_PWRMODE (const uint32_t inValue) { return (inValue & 3U) << 2 ; }

  // Boolean field: Comparator 1 output status
              bit
    static const uint32_t COMP_COMP1_CSR_COMP1_VALUE = 1U << 30 ;

  // Boolean field: COMP1_CSR register lock
              bit
    static const uint32_t COMP_COMP1_CSR_COMP1_LOCK = 1U << 31 ;

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
// Peripheral group CRC
//                CRC at 0x40023000
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

static const uint32_t kBaseAddress_CRC [1] = {0x40023000} ;

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

//-------------------- Independent data register
#define CRC_IDR(group) (* ((volatile uint32_t *) (kBaseAddress_CRC [group] + 0x4)))
#define CRC_IDR (* ((volatile uint32_t *) (0x40023000 + 0x4)))

  // Field (width: 8 bits): General-purpose 8-bit data register
              bits
    inline uint32_t CRC_IDR_IDR (const uint32_t inValue) { return (inValue & 255U) << 0 ; }

//-------------------- Initial CRC value
#define CRC_INIT(group) (* ((volatile uint32_t *) (kBaseAddress_CRC [group] + 0x10)))
#define CRC_INIT (* ((volatile uint32_t *) (0x40023000 + 0x10)))

//-------------------- Data register
#define CRC_DR(group) (* ((volatile uint32_t *) (kBaseAddress_CRC [group] + 0x0)))
#define CRC_DR (* ((volatile uint32_t *) (0x40023000 + 0x0)))

//-------------------- polynomial
#define CRC_POL(group) (* ((volatile uint32_t *) (kBaseAddress_CRC [group] + 0x14)))
#define CRC_POL (* ((volatile uint32_t *) (0x40023000 + 0x14)))

//-------------------- Control register
#define CRC_CR(group) (* ((const volatile uint32_t *) (kBaseAddress_CRC [group] + 0x8)))
#define CRC_CR (* ((const volatile uint32_t *) (0x40023000 + 0x8)))

  // Boolean field: RESET bit
    static const uint32_t CRC_CR_RESET = 1U << 0 ;

  // Boolean field: Reverse output data
    static const uint32_t CRC_CR_REV_OUT = 1U << 7 ;

  // Field (width: 2 bits): Reverse input data
    inline uint32_t CRC_CR_REV_IN (const uint32_t inValue) { return (inValue & 3U) << 5 ; }

  // Field (width: 2 bits): Polynomial size
    inline uint32_t CRC_CR_POLYSIZE (const uint32_t inValue) { return (inValue & 3U) << 3 ; }

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
// Peripheral group CRS
//                CRS at 0x40006000
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

static const uint32_t kBaseAddress_CRS [1] = {0x40006000} ;

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

//-------------------- configuration register
#define CRS_CFGR(group) (* ((volatile uint32_t *) (kBaseAddress_CRS [group] + 0x4)))
#define CRS_CFGR (* ((volatile uint32_t *) (0x40006000 + 0x4)))

  // Boolean field: SYNC polarity selection
    static const uint32_t CRS_CFGR_SYNCPOL = 1U << 31 ;

  // Field (width: 2 bits): SYNC signal source
              selection
    inline uint32_t CRS_CFGR_SYNCSRC (const uint32_t inValue) { return (inValue & 3U) << 28 ; }

  // Field (width: 3 bits): SYNC divider
    inline uint32_t CRS_CFGR_SYNCDIV (const uint32_t inValue) { return (inValue & 7U) << 24 ; }

  // Field (width: 8 bits): Frequency error limit
    inline uint32_t CRS_CFGR_FELIM (const uint32_t inValue) { return (inValue & 255U) << 16 ; }

  // Field (width: 16 bits): Counter reload value
    inline uint32_t CRS_CFGR_RELOAD (const uint32_t inValue) { return (inValue & 65535U) << 0 ; }

//-------------------- control register
#define CRS_CR(group) (* ((volatile uint32_t *) (kBaseAddress_CRS [group] + 0x0)))
#define CRS_CR (* ((volatile uint32_t *) (0x40006000 + 0x0)))

  // Field (width: 6 bits): HSI48 oscillator smooth
              trimming
    inline uint32_t CRS_CR_TRIM (const uint32_t inValue) { return (inValue & 63U) << 8 ; }

  // Boolean field: Expected SYNC interrupt
              enable
    static const uint32_t CRS_CR_ESYNCIE = 1U << 3 ;

  // Boolean field: Frequency error counter
              enable
    static const uint32_t CRS_CR_CEN = 1U << 5 ;

  // Boolean field: Automatic trimming enable
    static const uint32_t CRS_CR_AUTOTRIMEN = 1U << 6 ;

  // Boolean field: Generate software SYNC
              event
    static const uint32_t CRS_CR_SWSYNC = 1U << 7 ;

  // Boolean field: Synchronization or trimming error
              interrupt enable
    static const uint32_t CRS_CR_ERRIE = 1U << 2 ;

  // Boolean field: SYNC warning interrupt
              enable
    static const uint32_t CRS_CR_SYNCWARNIE = 1U << 1 ;

  // Boolean field: SYNC event OK interrupt
              enable
    static const uint32_t CRS_CR_SYNCOKIE = 1U << 0 ;

//-------------------- interrupt flag clear register
#define CRS_ICR(group) (* ((volatile uint32_t *) (kBaseAddress_CRS [group] + 0xC)))
#define CRS_ICR (* ((volatile uint32_t *) (0x40006000 + 0xC)))

  // Boolean field: Error clear flag
    static const uint32_t CRS_ICR_ERRC = 1U << 2 ;

  // Boolean field: SYNC warning clear flag
    static const uint32_t CRS_ICR_SYNCWARNC = 1U << 1 ;

  // Boolean field: Expected SYNC clear flag
    static const uint32_t CRS_ICR_ESYNCC = 1U << 3 ;

  // Boolean field: SYNC event OK clear flag
    static const uint32_t CRS_ICR_SYNCOKC = 1U << 0 ;

//-------------------- interrupt and status register
#define CRS_ISR(group) (* ((const volatile uint32_t *) (kBaseAddress_CRS [group] + 0x8)))
#define CRS_ISR (* ((const volatile uint32_t *) (0x40006000 + 0x8)))

  // Boolean field: SYNC warning flag
    static const uint32_t CRS_ISR_SYNCWARNF = 1U << 1 ;

  // Boolean field: Expected SYNC flag
    static const uint32_t CRS_ISR_ESYNCF = 1U << 3 ;

  // Boolean field: Frequency error direction
    static const uint32_t CRS_ISR_FEDIR = 1U << 15 ;

  // Field (width: 16 bits): Frequency error capture
    inline uint32_t CRS_ISR_FECAP (const uint32_t inValue) { return (inValue & 65535U) << 16 ; }

  // Boolean field: SYNC missed
    static const uint32_t CRS_ISR_SYNCMISS = 1U << 9 ;

  // Boolean field: SYNC error
    static const uint32_t CRS_ISR_SYNCERR = 1U << 8 ;

  // Boolean field: Error flag
    static const uint32_t CRS_ISR_ERRF = 1U << 2 ;

  // Boolean field: SYNC event OK flag
    static const uint32_t CRS_ISR_SYNCOKF = 1U << 0 ;

  // Boolean field: Trimming overflow or
              underflow
    static const uint32_t CRS_ISR_TRIMOVF = 1U << 10 ;

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
// Peripheral group DAC
//                DAC1 at 0x40007400
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

static const uint32_t kBaseAddress_DAC [1] = {0x40007400} ;

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

//-------------------- Sample and Hold hold time
          register
#define DAC_SHHR(group) (* ((volatile uint32_t *) (kBaseAddress_DAC [group] + 0x48)))
#define DAC1_SHHR (* ((volatile uint32_t *) (0x40007400 + 0x48)))

  // Field (width: 10 bits): DAC Channel 2 hold time
    inline uint32_t DAC_SHHR_THOLD2 (const uint32_t inValue) { return (inValue & 1023U) << 16 ; }

  // Field (width: 10 bits): DAC Channel 1 hold Time
    inline uint32_t DAC_SHHR_THOLD1 (const uint32_t inValue) { return (inValue & 1023U) << 0 ; }

//-------------------- Sample and Hold sample time register
          2
#define DAC_SHSR2(group) (* ((volatile uint32_t *) (kBaseAddress_DAC [group] + 0x44)))
#define DAC1_SHSR2 (* ((volatile uint32_t *) (0x40007400 + 0x44)))

  // Field (width: 10 bits): DAC Channel 2 sample Time
    inline uint32_t DAC_SHSR2_TSAMPLE2 (const uint32_t inValue) { return (inValue & 1023U) << 0 ; }

//-------------------- Dual DAC 12-bit right-aligned data holding
          register
#define DAC_DHR12RD(group) (* ((volatile uint32_t *) (kBaseAddress_DAC [group] + 0x20)))
#define DAC1_DHR12RD (* ((volatile uint32_t *) (0x40007400 + 0x20)))

  // Field (width: 12 bits): DAC channel1 12-bit right-aligned
              data
    inline uint32_t DAC_DHR12RD_DACC1DHR (const uint32_t inValue) { return (inValue & 4095U) << 0 ; }

  // Field (width: 12 bits): DAC channel2 12-bit right-aligned
              data
    inline uint32_t DAC_DHR12RD_DACC2DHR (const uint32_t inValue) { return (inValue & 4095U) << 16 ; }

//-------------------- channel1 data output register
#define DAC_DOR1(group) (* ((const volatile uint32_t *) (kBaseAddress_DAC [group] + 0x2C)))
#define DAC1_DOR1 (* ((const volatile uint32_t *) (0x40007400 + 0x2C)))

  // Field (width: 12 bits): DAC channel1 data output
    inline uint32_t DAC_DOR1_DACC1DOR (const uint32_t inValue) { return (inValue & 4095U) << 0 ; }

//-------------------- channel2 data output register
#define DAC_DOR2(group) (* ((const volatile uint32_t *) (kBaseAddress_DAC [group] + 0x30)))
#define DAC1_DOR2 (* ((const volatile uint32_t *) (0x40007400 + 0x30)))

  // Field (width: 12 bits): DAC channel2 data output
    inline uint32_t DAC_DOR2_DACC2DOR (const uint32_t inValue) { return (inValue & 4095U) << 0 ; }

//-------------------- channel2 8-bit right-aligned data holding
          register
#define DAC_DHR8R2(group) (* ((volatile uint32_t *) (kBaseAddress_DAC [group] + 0x1C)))
#define DAC1_DHR8R2 (* ((volatile uint32_t *) (0x40007400 + 0x1C)))

  // Field (width: 8 bits): DAC channel2 8-bit right-aligned
              data
    inline uint32_t DAC_DHR8R2_DACC2DHR (const uint32_t inValue) { return (inValue & 255U) << 0 ; }

//-------------------- channel1 12-bit left-aligned data holding
          register
#define DAC_DHR12L1(group) (* ((volatile uint32_t *) (kBaseAddress_DAC [group] + 0xC)))
#define DAC1_DHR12L1 (* ((volatile uint32_t *) (0x40007400 + 0xC)))

  // Field (width: 12 bits): DAC channel1 12-bit left-aligned
              data
    inline uint32_t DAC_DHR12L1_DACC1DHR (const uint32_t inValue) { return (inValue & 4095U) << 4 ; }

//-------------------- channel2 12-bit left aligned data holding
          register
#define DAC_DHR12L2(group) (* ((volatile uint32_t *) (kBaseAddress_DAC [group] + 0x18)))
#define DAC1_DHR12L2 (* ((volatile uint32_t *) (0x40007400 + 0x18)))

  // Field (width: 12 bits): DAC channel2 12-bit left-aligned
              data
    inline uint32_t DAC_DHR12L2_DACC2DHR (const uint32_t inValue) { return (inValue & 4095U) << 4 ; }

//-------------------- channel1 8-bit right-aligned data holding
          register
#define DAC_DHR8R1(group) (* ((volatile uint32_t *) (kBaseAddress_DAC [group] + 0x10)))
#define DAC1_DHR8R1 (* ((volatile uint32_t *) (0x40007400 + 0x10)))

  // Field (width: 8 bits): DAC channel1 8-bit right-aligned
              data
    inline uint32_t DAC_DHR8R1_DACC1DHR (const uint32_t inValue) { return (inValue & 255U) << 0 ; }

//-------------------- software trigger register
#define DAC_SWTRIGR(group) (* ((volatile uint32_t *) (kBaseAddress_DAC [group] + 0x4)))
#define DAC1_SWTRIGR (* ((volatile uint32_t *) (0x40007400 + 0x4)))

  // Boolean field: DAC channel2 software
              trigger
    static const uint32_t DAC_SWTRIGR_SWTRIG2 = 1U << 1 ;

  // Boolean field: DAC channel1 software
              trigger
    static const uint32_t DAC_SWTRIGR_SWTRIG1 = 1U << 0 ;

//-------------------- Sample and Hold sample time register
          1
#define DAC_SHSR1(group) (* ((volatile uint32_t *) (kBaseAddress_DAC [group] + 0x40)))
#define DAC1_SHSR1 (* ((volatile uint32_t *) (0x40007400 + 0x40)))

  // Field (width: 10 bits): DAC Channel 1 sample Time
    inline uint32_t DAC_SHSR1_TSAMPLE1 (const uint32_t inValue) { return (inValue & 1023U) << 0 ; }

//-------------------- calibration control register
#define DAC_CCR(group) (* ((volatile uint32_t *) (kBaseAddress_DAC [group] + 0x38)))
#define DAC1_CCR (* ((volatile uint32_t *) (0x40007400 + 0x38)))

  // Field (width: 5 bits): DAC Channel 2 offset trimming
              value
    inline uint32_t DAC_CCR_OTRIM2 (const uint32_t inValue) { return (inValue & 31U) << 16 ; }

  // Field (width: 5 bits): DAC Channel 1 offset trimming
              value
    inline uint32_t DAC_CCR_OTRIM1 (const uint32_t inValue) { return (inValue & 31U) << 0 ; }

//-------------------- channel2 12-bit right aligned data holding
          register
#define DAC_DHR12R2(group) (* ((volatile uint32_t *) (kBaseAddress_DAC [group] + 0x14)))
#define DAC1_DHR12R2 (* ((volatile uint32_t *) (0x40007400 + 0x14)))

  // Field (width: 12 bits): DAC channel2 12-bit right-aligned
              data
    inline uint32_t DAC_DHR12R2_DACC2DHR (const uint32_t inValue) { return (inValue & 4095U) << 0 ; }

//-------------------- Sample and Hold refresh time
          register
#define DAC_SHRR(group) (* ((volatile uint32_t *) (kBaseAddress_DAC [group] + 0x4C)))
#define DAC1_SHRR (* ((volatile uint32_t *) (0x40007400 + 0x4C)))

  // Field (width: 8 bits): DAC Channel 2 refresh Time
    inline uint32_t DAC_SHRR_TREFRESH2 (const uint32_t inValue) { return (inValue & 255U) << 16 ; }

  // Field (width: 8 bits): DAC Channel 1 refresh Time
    inline uint32_t DAC_SHRR_TREFRESH1 (const uint32_t inValue) { return (inValue & 255U) << 0 ; }

//-------------------- channel1 12-bit right-aligned data holding
          register
#define DAC_DHR12R1(group) (* ((volatile uint32_t *) (kBaseAddress_DAC [group] + 0x8)))
#define DAC1_DHR12R1 (* ((volatile uint32_t *) (0x40007400 + 0x8)))

  // Field (width: 12 bits): DAC channel1 12-bit right-aligned
              data
    inline uint32_t DAC_DHR12R1_DACC1DHR (const uint32_t inValue) { return (inValue & 4095U) << 0 ; }

//-------------------- control register
#define DAC_CR(group) (* ((volatile uint32_t *) (kBaseAddress_DAC [group] + 0x0)))
#define DAC1_CR (* ((volatile uint32_t *) (0x40007400 + 0x0)))

  // Boolean field: DAC channel2 DMA enable
    static const uint32_t DAC_CR_DMAEN2 = 1U << 28 ;

  // Boolean field: DAC channel1 DMA enable
    static const uint32_t DAC_CR_DMAEN1 = 1U << 12 ;

  // Field (width: 3 bits): DAC channel2 trigger
              selection
    inline uint32_t DAC_CR_TSEL2 (const uint32_t inValue) { return (inValue & 7U) << 19 ; }

  // Field (width: 3 bits): DAC channel1 trigger
              selection
    inline uint32_t DAC_CR_TSEL1 (const uint32_t inValue) { return (inValue & 7U) << 3 ; }

  // Boolean field: DAC Channel 1 calibration
              enable
    static const uint32_t DAC_CR_CEN1 = 1U << 14 ;

  // Field (width: 4 bits): DAC channel2 mask/amplitude
              selector
    inline uint32_t DAC_CR_MAMP2 (const uint32_t inValue) { return (inValue & 15U) << 24 ; }

  // Boolean field: DAC channel1 enable
    static const uint32_t DAC_CR_EN1 = 1U << 0 ;

  // Boolean field: DAC channel2 enable
    static const uint32_t DAC_CR_EN2 = 1U << 16 ;

  // Field (width: 4 bits): DAC channel1 mask/amplitude
              selector
    inline uint32_t DAC_CR_MAMP1 (const uint32_t inValue) { return (inValue & 15U) << 8 ; }

  // Boolean field: DAC Channel 2 calibration
              enable
    static const uint32_t DAC_CR_CEN2 = 1U << 30 ;

  // Field (width: 2 bits): DAC channel1 noise/triangle wave
              generation enable
    inline uint32_t DAC_CR_WAVE1 (const uint32_t inValue) { return (inValue & 3U) << 6 ; }

  // Field (width: 2 bits): DAC channel2 noise/triangle wave
              generation enable
    inline uint32_t DAC_CR_WAVE2 (const uint32_t inValue) { return (inValue & 3U) << 22 ; }

  // Boolean field: DAC channel2 trigger
              enable
    static const uint32_t DAC_CR_TEN2 = 1U << 18 ;

  // Boolean field: DAC channel1 trigger
              enable
    static const uint32_t DAC_CR_TEN1 = 1U << 2 ;

  // Boolean field: DAC channel1 DMA Underrun Interrupt
              enable
    static const uint32_t DAC_CR_DMAUDRIE1 = 1U << 13 ;

  // Boolean field: DAC channel2 DMA underrun interrupt
              enable
    static const uint32_t DAC_CR_DMAUDRIE2 = 1U << 29 ;

//-------------------- DUAL DAC 12-bit left aligned data holding
          register
#define DAC_DHR12LD(group) (* ((volatile uint32_t *) (kBaseAddress_DAC [group] + 0x24)))
#define DAC1_DHR12LD (* ((volatile uint32_t *) (0x40007400 + 0x24)))

  // Field (width: 12 bits): DAC channel1 12-bit left-aligned
              data
    inline uint32_t DAC_DHR12LD_DACC1DHR (const uint32_t inValue) { return (inValue & 4095U) << 4 ; }

  // Field (width: 12 bits): DAC channel2 12-bit left-aligned
              data
    inline uint32_t DAC_DHR12LD_DACC2DHR (const uint32_t inValue) { return (inValue & 4095U) << 20 ; }

//-------------------- mode control register
#define DAC_MCR(group) (* ((volatile uint32_t *) (kBaseAddress_DAC [group] + 0x3C)))
#define DAC1_MCR (* ((volatile uint32_t *) (0x40007400 + 0x3C)))

  // Field (width: 3 bits): DAC Channel 2 mode
    inline uint32_t DAC_MCR_MODE2 (const uint32_t inValue) { return (inValue & 7U) << 16 ; }

  // Field (width: 3 bits): DAC Channel 1 mode
    inline uint32_t DAC_MCR_MODE1 (const uint32_t inValue) { return (inValue & 7U) << 0 ; }

//-------------------- DUAL DAC 8-bit right aligned data holding
          register
#define DAC_DHR8RD(group) (* ((volatile uint32_t *) (kBaseAddress_DAC [group] + 0x28)))
#define DAC1_DHR8RD (* ((volatile uint32_t *) (0x40007400 + 0x28)))

  // Field (width: 8 bits): DAC channel1 8-bit right-aligned
              data
    inline uint32_t DAC_DHR8RD_DACC1DHR (const uint32_t inValue) { return (inValue & 255U) << 0 ; }

  // Field (width: 8 bits): DAC channel2 8-bit right-aligned
              data
    inline uint32_t DAC_DHR8RD_DACC2DHR (const uint32_t inValue) { return (inValue & 255U) << 8 ; }

//-------------------- status register
#define DAC_SR(group) (* ((const volatile uint32_t *) (kBaseAddress_DAC [group] + 0x34)))
#define DAC1_SR (* ((const volatile uint32_t *) (0x40007400 + 0x34)))

  // Boolean field: DAC Channel 1 busy writing sample time
              flag
    static const uint32_t DAC_SR_BWST1 = 1U << 15 ;

  // Boolean field: DAC Channel 2 busy writing sample time
              flag
    static const uint32_t DAC_SR_BWST2 = 1U << 31 ;

  // Boolean field: DAC Channel 2 calibration offset
              status
    static const uint32_t DAC_SR_CAL_FLAG2 = 1U << 30 ;

  // Boolean field: DAC channel1 DMA underrun
              flag
    static const uint32_t DAC_SR_DMAUDR1 = 1U << 13 ;

  // Boolean field: DAC channel2 DMA underrun
              flag
    static const uint32_t DAC_SR_DMAUDR2 = 1U << 29 ;

  // Boolean field: DAC Channel 1 calibration offset
              status
    static const uint32_t DAC_SR_CAL_FLAG1 = 1U << 14 ;

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
// Peripheral group DBGMCU
//                DBGMCU at 0xE0042000
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

static const uint32_t kBaseAddress_DBGMCU [1] = {0xE0042000} ;

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

//-------------------- Debug MCU APB2 freeze register
#define DBGMCU_APB2FZR(group) (* ((volatile uint32_t *) (kBaseAddress_DBGMCU [group] + 0x10)))
#define DBGMCU_APB2FZR (* ((volatile uint32_t *) (0xE0042000 + 0x10)))

  // Boolean field: TIM16 counter stopped when core is
              halted
    static const uint32_t DBGMCU_APB2FZR_DBG_TIM16_STOP = 1U << 17 ;

  // Boolean field: TIM15 counter stopped when core is
              halted
    static const uint32_t DBGMCU_APB2FZR_DBG_TIM15_STOP = 1U << 16 ;

  // Boolean field: TIM1 counter stopped when core is
              halted
    static const uint32_t DBGMCU_APB2FZR_DBG_TIM1_STOP = 1U << 11 ;

//-------------------- Debug MCU configuration
          register
#define DBGMCU_CR(group) (* ((volatile uint32_t *) (kBaseAddress_DBGMCU [group] + 0x4)))
#define DBGMCU_CR (* ((volatile uint32_t *) (0xE0042000 + 0x4)))

  // Boolean field: Debug Sleep mode
    static const uint32_t DBGMCU_CR_DBG_SLEEP = 1U << 0 ;

  // Boolean field: Debug Stop mode
    static const uint32_t DBGMCU_CR_DBG_STOP = 1U << 1 ;

  // Field (width: 2 bits): Trace pin assignment
              control
    inline uint32_t DBGMCU_CR_TRACE_MODE (const uint32_t inValue) { return (inValue & 3U) << 6 ; }

  // Boolean field: Debug Standby mode
    static const uint32_t DBGMCU_CR_DBG_STANDBY = 1U << 2 ;

  // Boolean field: Trace pin assignment
              control
    static const uint32_t DBGMCU_CR_TRACE_IOEN = 1U << 5 ;

//-------------------- DBGMCU_IDCODE
#define DBGMCU_IDCODE(group) (* ((const volatile uint32_t *) (kBaseAddress_DBGMCU [group] + 0x0)))
#define DBGMCU_IDCODE (* ((const volatile uint32_t *) (0xE0042000 + 0x0)))

  // Field (width: 12 bits): Device identifier
    inline uint32_t DBGMCU_IDCODE_DEV_ID (const uint32_t inValue) { return (inValue & 4095U) << 0 ; }

  // Field (width: 16 bits): Revision identifie
    inline uint32_t DBGMCU_IDCODE_REV_ID (const uint32_t inValue) { return (inValue & 65535U) << 16 ; }

//-------------------- Debug MCU APB1 freeze register
          2
#define DBGMCU_APB1FZR2(group) (* ((volatile uint32_t *) (kBaseAddress_DBGMCU [group] + 0xC)))
#define DBGMCU_APB1FZR2 (* ((volatile uint32_t *) (0xE0042000 + 0xC)))

  // Boolean field: LPTIM2 counter stopped when core is
              halted
    static const uint32_t DBGMCU_APB1FZR2_DBG_LPTIM2_STOP = 1U << 5 ;

//-------------------- Debug MCU APB1 freeze
          register1
#define DBGMCU_APB1FZR1(group) (* ((volatile uint32_t *) (kBaseAddress_DBGMCU [group] + 0x8)))
#define DBGMCU_APB1FZR1 (* ((volatile uint32_t *) (0xE0042000 + 0x8)))

  // Boolean field: Window watchdog counter stopped when
              core is halted
    static const uint32_t DBGMCU_APB1FZR1_DBG_WWDG_STOP = 1U << 11 ;

  // Boolean field: TIM2 counter stopped when core is
              halted
    static const uint32_t DBGMCU_APB1FZR1_DBG_TIM2_STOP = 1U << 0 ;

  // Boolean field: Independent watchdog counter stopped
              when core is halted
    static const uint32_t DBGMCU_APB1FZR1_DBG_IWDG_STOP = 1U << 12 ;

  // Boolean field: I2C2 SMBUS timeout counter stopped when
              core is halted
    static const uint32_t DBGMCU_APB1FZR1_DBG_I2C2_STOP = 1U << 22 ;

  // Boolean field: bxCAN stopped when core is
              halted
    static const uint32_t DBGMCU_APB1FZR1_DBG_CAN_STOP = 1U << 25 ;

  // Boolean field: TIM7 counter stopped when core is
              halted
    static const uint32_t DBGMCU_APB1FZR1_DBG_TIM7_STOP = 1U << 5 ;

  // Boolean field: I2C3 SMBUS timeout counter stopped when
              core is halted
    static const uint32_t DBGMCU_APB1FZR1_DBG_I2C3_STOP = 1U << 23 ;

  // Boolean field: I2C1 SMBUS timeout counter stopped when
              core is halted
    static const uint32_t DBGMCU_APB1FZR1_DBG_I2C1_STOP = 1U << 21 ;

  // Boolean field: TIM6 counter stopped when core is
              halted
    static const uint32_t DBGMCU_APB1FZR1_DBG_TIM6_STOP = 1U << 4 ;

  // Boolean field: RTC counter stopped when core is
              halted
    static const uint32_t DBGMCU_APB1FZR1_DBG_RTC_STOP = 1U << 10 ;

  // Boolean field: LPTIM1 counter stopped when core is
              halted
    static const uint32_t DBGMCU_APB1FZR1_DBG_LPTIM1_STOP = 1U << 31 ;

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
// Peripheral group DFSDM
//                DFSDM at 0x40016000
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

static const uint32_t kBaseAddress_DFSDM [1] = {0x40016000} ;

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

//-------------------- analog watchdog clear flag
          register
#define DFSDM_DFSDM3_AWCFR(group) (* ((volatile uint32_t *) (kBaseAddress_DFSDM [group] + 0x42C)))
#define DFSDM_DFSDM3_AWCFR (* ((volatile uint32_t *) (0x40016000 + 0x42C)))

  // Field (width: 8 bits): Clear the analog watchdog low threshold
              flag
    inline uint32_t DFSDM_DFSDM3_AWCFR_CLRAWLTF (const uint32_t inValue) { return (inValue & 255U) << 0 ; }

  // Field (width: 8 bits): Clear the analog watchdog high threshold
              flag
    inline uint32_t DFSDM_DFSDM3_AWCFR_CLRAWHTF (const uint32_t inValue) { return (inValue & 255U) << 8 ; }

//-------------------- injected channel group selection
          register
#define DFSDM_DFSDM1_JCHGR(group) (* ((volatile uint32_t *) (kBaseAddress_DFSDM [group] + 0x210)))
#define DFSDM_DFSDM1_JCHGR (* ((volatile uint32_t *) (0x40016000 + 0x210)))

  // Field (width: 8 bits): Injected channel group
              selection
    inline uint32_t DFSDM_DFSDM1_JCHGR_JCHG (const uint32_t inValue) { return (inValue & 255U) << 0 ; }

//-------------------- interrupt and status register
#define DFSDM_DFSDM2_ISR(group) (* ((const volatile uint32_t *) (kBaseAddress_DFSDM [group] + 0x308)))
#define DFSDM_DFSDM2_ISR (* ((const volatile uint32_t *) (0x40016000 + 0x308)))

  // Boolean field: End of regular conversion
              flag
    static const uint32_t DFSDM_DFSDM2_ISR_REOCF = 1U << 1 ;

  // Field (width: 8 bits): Clock absence flag
    inline uint32_t DFSDM_DFSDM2_ISR_CKABF (const uint32_t inValue) { return (inValue & 255U) << 16 ; }

  // Boolean field: End of injected conversion
              flag
    static const uint32_t DFSDM_DFSDM2_ISR_JEOCF = 1U << 0 ;

  // Boolean field: Analog watchdog
    static const uint32_t DFSDM_DFSDM2_ISR_AWDF = 1U << 4 ;

  // Boolean field: Regular conversion overrun
              flag
    static const uint32_t DFSDM_DFSDM2_ISR_ROVRF = 1U << 3 ;

  // Boolean field: Injected conversion in progress
              status
    static const uint32_t DFSDM_DFSDM2_ISR_JCIP = 1U << 13 ;

  // Boolean field: Injected conversion overrun
              flag
    static const uint32_t DFSDM_DFSDM2_ISR_JOVRF = 1U << 2 ;

  // Boolean field: Regular conversion in progress
              status
    static const uint32_t DFSDM_DFSDM2_ISR_RCIP = 1U << 14 ;

  // Field (width: 8 bits): short-circuit detector
              flag
    inline uint32_t DFSDM_DFSDM2_ISR_SCDF (const uint32_t inValue) { return (inValue & 255U) << 24 ; }

//-------------------- conversion timer register
#define DFSDM_DFSDM3_CNVTIMR(group) (* ((const volatile uint32_t *) (kBaseAddress_DFSDM [group] + 0x438)))
#define DFSDM_DFSDM3_CNVTIMR (* ((const volatile uint32_t *) (0x40016000 + 0x438)))

  // Field (width: 28 bits): 28-bit timer counting conversion time t
              = CNVCNT[27:0] / fDFSDM_CKIN
    inline uint32_t DFSDM_DFSDM3_CNVTIMR_CNVCNT (const uint32_t inValue) { return (inValue & 268435455U) << 4 ; }

//-------------------- analog watchdog high threshold
          register
#define DFSDM_DFSDM3_AWHTR(group) (* ((volatile uint32_t *) (kBaseAddress_DFSDM [group] + 0x420)))
#define DFSDM_DFSDM3_AWHTR (* ((volatile uint32_t *) (0x40016000 + 0x420)))

  // Field (width: 4 bits): Break signal assignment to analog
              watchdog high threshold event
    inline uint32_t DFSDM_DFSDM3_AWHTR_BKAWH (const uint32_t inValue) { return (inValue & 15U) << 0 ; }

  // Field (width: 24 bits): Analog watchdog high
              threshold
    inline uint32_t DFSDM_DFSDM3_AWHTR_AWHT (const uint32_t inValue) { return (inValue & 16777215U) << 8 ; }

//-------------------- analog watchdog status
          register
#define DFSDM_DFSDM3_AWSR(group) (* ((const volatile uint32_t *) (kBaseAddress_DFSDM [group] + 0x428)))
#define DFSDM_DFSDM3_AWSR (* ((const volatile uint32_t *) (0x40016000 + 0x428)))

  // Field (width: 8 bits): Analog watchdog high threshold
              flag
    inline uint32_t DFSDM_DFSDM3_AWSR_AWHTF (const uint32_t inValue) { return (inValue & 255U) << 8 ; }

  // Field (width: 8 bits): Analog watchdog low threshold
              flag
    inline uint32_t DFSDM_DFSDM3_AWSR_AWLTF (const uint32_t inValue) { return (inValue & 255U) << 0 ; }

//-------------------- interrupt flag clear register
#define DFSDM_DFSDM2_ICR(group) (* ((volatile uint32_t *) (kBaseAddress_DFSDM [group] + 0x30C)))
#define DFSDM_DFSDM2_ICR (* ((volatile uint32_t *) (0x40016000 + 0x30C)))

  // Field (width: 8 bits): Clear the short-circuit detector
              flag
    inline uint32_t DFSDM_DFSDM2_ICR_CLRSCDF (const uint32_t inValue) { return (inValue & 255U) << 24 ; }

  // Field (width: 8 bits): Clear the clock absence
              flag
    inline uint32_t DFSDM_DFSDM2_ICR_CLRCKABF (const uint32_t inValue) { return (inValue & 255U) << 16 ; }

  // Boolean field: Clear the injected conversion overrun
              flag
    static const uint32_t DFSDM_DFSDM2_ICR_CLRJOVRF = 1U << 2 ;

  // Boolean field: Clear the regular conversion overrun
              flag
    static const uint32_t DFSDM_DFSDM2_ICR_CLRROVRF = 1U << 3 ;

//-------------------- CHWDAT1R
#define DFSDM_CHWDAT1R(group) (* ((volatile uint32_t *) (kBaseAddress_DFSDM [group] + 0x2C)))
#define DFSDM_CHWDAT1R (* ((volatile uint32_t *) (0x40016000 + 0x2C)))

  // Field (width: 16 bits): WDATA
    inline uint32_t DFSDM_CHWDAT1R_WDATA (const uint32_t inValue) { return (inValue & 65535U) << 0 ; }

//-------------------- CHDATIN7R
#define DFSDM_CHDATIN7R(group) (* ((volatile uint32_t *) (kBaseAddress_DFSDM [group] + 0xF0)))
#define DFSDM_CHDATIN7R (* ((volatile uint32_t *) (0x40016000 + 0xF0)))

  // Field (width: 16 bits): INDAT0
    inline uint32_t DFSDM_CHDATIN7R_INDAT0 (const uint32_t inValue) { return (inValue & 65535U) << 0 ; }

  // Field (width: 16 bits): INDAT1
    inline uint32_t DFSDM_CHDATIN7R_INDAT1 (const uint32_t inValue) { return (inValue & 65535U) << 16 ; }

//-------------------- AWSCD2R
#define DFSDM_AWSCD2R(group) (* ((volatile uint32_t *) (kBaseAddress_DFSDM [group] + 0x48)))
#define DFSDM_AWSCD2R (* ((volatile uint32_t *) (0x40016000 + 0x48)))

  // Field (width: 2 bits): AWFORD
    inline uint32_t DFSDM_AWSCD2R_AWFORD (const uint32_t inValue) { return (inValue & 3U) << 22 ; }

  // Field (width: 5 bits): AWFOSR
    inline uint32_t DFSDM_AWSCD2R_AWFOSR (const uint32_t inValue) { return (inValue & 31U) << 16 ; }

  // Field (width: 8 bits): SCDT
    inline uint32_t DFSDM_AWSCD2R_SCDT (const uint32_t inValue) { return (inValue & 255U) << 0 ; }

  // Field (width: 4 bits): BKSCD
    inline uint32_t DFSDM_AWSCD2R_BKSCD (const uint32_t inValue) { return (inValue & 15U) << 12 ; }

//-------------------- filter control register
#define DFSDM_DFSDM2_FCR(group) (* ((volatile uint32_t *) (kBaseAddress_DFSDM [group] + 0x314)))
#define DFSDM_DFSDM2_FCR (* ((volatile uint32_t *) (0x40016000 + 0x314)))

  // Field (width: 10 bits): Sinc filter oversampling ratio
              (decimation rate)
    inline uint32_t DFSDM_DFSDM2_FCR_FOSR (const uint32_t inValue) { return (inValue & 1023U) << 16 ; }

  // Field (width: 8 bits): Integrator oversampling ratio (averaging
              length)
    inline uint32_t DFSDM_DFSDM2_FCR_IOSR (const uint32_t inValue) { return (inValue & 255U) << 0 ; }

  // Field (width: 3 bits): Sinc filter order
    inline uint32_t DFSDM_DFSDM2_FCR_FORD (const uint32_t inValue) { return (inValue & 7U) << 29 ; }

//-------------------- analog watchdog clear flag
          register
#define DFSDM_DFSDM1_AWCFR(group) (* ((volatile uint32_t *) (kBaseAddress_DFSDM [group] + 0x22C)))
#define DFSDM_DFSDM1_AWCFR (* ((volatile uint32_t *) (0x40016000 + 0x22C)))

  // Field (width: 8 bits): Clear the analog watchdog low threshold
              flag
    inline uint32_t DFSDM_DFSDM1_AWCFR_CLRAWLTF (const uint32_t inValue) { return (inValue & 255U) << 0 ; }

  // Field (width: 8 bits): Clear the analog watchdog high threshold
              flag
    inline uint32_t DFSDM_DFSDM1_AWCFR_CLRAWHTF (const uint32_t inValue) { return (inValue & 255U) << 8 ; }

//-------------------- injected channel group selection
          register
#define DFSDM_DFSDM0_JCHGR(group) (* ((volatile uint32_t *) (kBaseAddress_DFSDM [group] + 0x110)))
#define DFSDM_DFSDM0_JCHGR (* ((volatile uint32_t *) (0x40016000 + 0x110)))

  // Field (width: 8 bits): Injected channel group
              selection
    inline uint32_t DFSDM_DFSDM0_JCHGR_JCHG (const uint32_t inValue) { return (inValue & 255U) << 0 ; }

//-------------------- CHCFG5R1
#define DFSDM_CHCFG5R1(group) (* ((volatile uint32_t *) (kBaseAddress_DFSDM [group] + 0xA0)))
#define DFSDM_CHCFG5R1 (* ((volatile uint32_t *) (0x40016000 + 0xA0)))

  // Boolean field: CKABEN
    static const uint32_t DFSDM_CHCFG5R1_CKABEN = 1U << 6 ;

  // Field (width: 2 bits): DATPACK
    inline uint32_t DFSDM_CHCFG5R1_DATPACK (const uint32_t inValue) { return (inValue & 3U) << 14 ; }

  // Boolean field: CHINSEL
    static const uint32_t DFSDM_CHCFG5R1_CHINSEL = 1U << 8 ;

  // Field (width: 2 bits): SITP
    inline uint32_t DFSDM_CHCFG5R1_SITP (const uint32_t inValue) { return (inValue & 3U) << 0 ; }

  // Boolean field: CHEN
    static const uint32_t DFSDM_CHCFG5R1_CHEN = 1U << 7 ;

  // Field (width: 2 bits): DATMPX
    inline uint32_t DFSDM_CHCFG5R1_DATMPX (const uint32_t inValue) { return (inValue & 3U) << 12 ; }

  // Field (width: 2 bits): SPICKSEL
    inline uint32_t DFSDM_CHCFG5R1_SPICKSEL (const uint32_t inValue) { return (inValue & 3U) << 2 ; }

  // Boolean field: SCDEN
    static const uint32_t DFSDM_CHCFG5R1_SCDEN = 1U << 5 ;

//-------------------- CHCFG5R2
#define DFSDM_CHCFG5R2(group) (* ((volatile uint32_t *) (kBaseAddress_DFSDM [group] + 0xA4)))
#define DFSDM_CHCFG5R2 (* ((volatile uint32_t *) (0x40016000 + 0xA4)))

  // Field (width: 5 bits): DTRBS
    inline uint32_t DFSDM_CHCFG5R2_DTRBS (const uint32_t inValue) { return (inValue & 31U) << 3 ; }

  // Field (width: 24 bits): OFFSET
    inline uint32_t DFSDM_CHCFG5R2_OFFSET (const uint32_t inValue) { return (inValue & 16777215U) << 8 ; }

//-------------------- conversion timer register
#define DFSDM_DFSDM2_CNVTIMR(group) (* ((const volatile uint32_t *) (kBaseAddress_DFSDM [group] + 0x338)))
#define DFSDM_DFSDM2_CNVTIMR (* ((const volatile uint32_t *) (0x40016000 + 0x338)))

  // Field (width: 28 bits): 28-bit timer counting conversion time t
              = CNVCNT[27:0] / fDFSDM_CKIN
    inline uint32_t DFSDM_DFSDM2_CNVTIMR_CNVCNT (const uint32_t inValue) { return (inValue & 268435455U) << 4 ; }

//-------------------- analog watchdog status
          register
#define DFSDM_DFSDM0_AWSR(group) (* ((const volatile uint32_t *) (kBaseAddress_DFSDM [group] + 0x128)))
#define DFSDM_DFSDM0_AWSR (* ((const volatile uint32_t *) (0x40016000 + 0x128)))

  // Field (width: 8 bits): Analog watchdog high threshold
              flag
    inline uint32_t DFSDM_DFSDM0_AWSR_AWHTF (const uint32_t inValue) { return (inValue & 255U) << 8 ; }

  // Field (width: 8 bits): Analog watchdog low threshold
              flag
    inline uint32_t DFSDM_DFSDM0_AWSR_AWLTF (const uint32_t inValue) { return (inValue & 255U) << 0 ; }

//-------------------- CHCFG7R2
#define DFSDM_CHCFG7R2(group) (* ((volatile uint32_t *) (kBaseAddress_DFSDM [group] + 0xE4)))
#define DFSDM_CHCFG7R2 (* ((volatile uint32_t *) (0x40016000 + 0xE4)))

  // Field (width: 5 bits): DTRBS
    inline uint32_t DFSDM_CHCFG7R2_DTRBS (const uint32_t inValue) { return (inValue & 31U) << 3 ; }

  // Field (width: 24 bits): OFFSET
    inline uint32_t DFSDM_CHCFG7R2_OFFSET (const uint32_t inValue) { return (inValue & 16777215U) << 8 ; }

//-------------------- analog watchdog high threshold
          register
#define DFSDM_DFSDM2_AWHTR(group) (* ((volatile uint32_t *) (kBaseAddress_DFSDM [group] + 0x320)))
#define DFSDM_DFSDM2_AWHTR (* ((volatile uint32_t *) (0x40016000 + 0x320)))

  // Field (width: 4 bits): Break signal assignment to analog
              watchdog high threshold event
    inline uint32_t DFSDM_DFSDM2_AWHTR_BKAWH (const uint32_t inValue) { return (inValue & 15U) << 0 ; }

  // Field (width: 24 bits): Analog watchdog high
              threshold
    inline uint32_t DFSDM_DFSDM2_AWHTR_AWHT (const uint32_t inValue) { return (inValue & 16777215U) << 8 ; }

//-------------------- CHCFG7R1
#define DFSDM_CHCFG7R1(group) (* ((volatile uint32_t *) (kBaseAddress_DFSDM [group] + 0xE0)))
#define DFSDM_CHCFG7R1 (* ((volatile uint32_t *) (0x40016000 + 0xE0)))

  // Boolean field: CKABEN
    static const uint32_t DFSDM_CHCFG7R1_CKABEN = 1U << 6 ;

  // Field (width: 2 bits): DATPACK
    inline uint32_t DFSDM_CHCFG7R1_DATPACK (const uint32_t inValue) { return (inValue & 3U) << 14 ; }

  // Boolean field: CHINSEL
    static const uint32_t DFSDM_CHCFG7R1_CHINSEL = 1U << 8 ;

  // Field (width: 2 bits): SITP
    inline uint32_t DFSDM_CHCFG7R1_SITP (const uint32_t inValue) { return (inValue & 3U) << 0 ; }

  // Boolean field: CHEN
    static const uint32_t DFSDM_CHCFG7R1_CHEN = 1U << 7 ;

  // Field (width: 2 bits): DATMPX
    inline uint32_t DFSDM_CHCFG7R1_DATMPX (const uint32_t inValue) { return (inValue & 3U) << 12 ; }

  // Field (width: 2 bits): SPICKSEL
    inline uint32_t DFSDM_CHCFG7R1_SPICKSEL (const uint32_t inValue) { return (inValue & 3U) << 2 ; }

  // Boolean field: SCDEN
    static const uint32_t DFSDM_CHCFG7R1_SCDEN = 1U << 5 ;

//-------------------- AWSCD5R
#define DFSDM_AWSCD5R(group) (* ((volatile uint32_t *) (kBaseAddress_DFSDM [group] + 0xA8)))
#define DFSDM_AWSCD5R (* ((volatile uint32_t *) (0x40016000 + 0xA8)))

  // Field (width: 2 bits): AWFORD
    inline uint32_t DFSDM_AWSCD5R_AWFORD (const uint32_t inValue) { return (inValue & 3U) << 22 ; }

  // Field (width: 5 bits): AWFOSR
    inline uint32_t DFSDM_AWSCD5R_AWFOSR (const uint32_t inValue) { return (inValue & 31U) << 16 ; }

  // Field (width: 8 bits): SCDT
    inline uint32_t DFSDM_AWSCD5R_SCDT (const uint32_t inValue) { return (inValue & 255U) << 0 ; }

  // Field (width: 4 bits): BKSCD
    inline uint32_t DFSDM_AWSCD5R_BKSCD (const uint32_t inValue) { return (inValue & 15U) << 12 ; }

//-------------------- CHWDAT2R
#define DFSDM_CHWDAT2R(group) (* ((volatile uint32_t *) (kBaseAddress_DFSDM [group] + 0x4C)))
#define DFSDM_CHWDAT2R (* ((volatile uint32_t *) (0x40016000 + 0x4C)))

  // Field (width: 16 bits): WDATA
    inline uint32_t DFSDM_CHWDAT2R_WDATA (const uint32_t inValue) { return (inValue & 65535U) << 0 ; }

//-------------------- data register for injected
          group
#define DFSDM_DFSDM0_JDATAR(group) (* ((const volatile uint32_t *) (kBaseAddress_DFSDM [group] + 0x118)))
#define DFSDM_DFSDM0_JDATAR (* ((const volatile uint32_t *) (0x40016000 + 0x118)))

  // Field (width: 3 bits): Injected channel most recently
              converted
    inline uint32_t DFSDM_DFSDM0_JDATAR_JDATACH (const uint32_t inValue) { return (inValue & 7U) << 0 ; }

  // Field (width: 24 bits): Injected group conversion
              data
    inline uint32_t DFSDM_DFSDM0_JDATAR_JDATA (const uint32_t inValue) { return (inValue & 16777215U) << 8 ; }

//-------------------- analog watchdog low threshold
          register
#define DFSDM_DFSDM2_AWLTR(group) (* ((volatile uint32_t *) (kBaseAddress_DFSDM [group] + 0x324)))
#define DFSDM_DFSDM2_AWLTR (* ((volatile uint32_t *) (0x40016000 + 0x324)))

  // Field (width: 24 bits): Analog watchdog low
              threshold
    inline uint32_t DFSDM_DFSDM2_AWLTR_AWLT (const uint32_t inValue) { return (inValue & 16777215U) << 8 ; }

  // Field (width: 4 bits): Break signal assignment to analog
              watchdog low threshold event
    inline uint32_t DFSDM_DFSDM2_AWLTR_BKAWL (const uint32_t inValue) { return (inValue & 15U) << 0 ; }

//-------------------- filter control register
#define DFSDM_DFSDM1_FCR(group) (* ((volatile uint32_t *) (kBaseAddress_DFSDM [group] + 0x214)))
#define DFSDM_DFSDM1_FCR (* ((volatile uint32_t *) (0x40016000 + 0x214)))

  // Field (width: 10 bits): Sinc filter oversampling ratio
              (decimation rate)
    inline uint32_t DFSDM_DFSDM1_FCR_FOSR (const uint32_t inValue) { return (inValue & 1023U) << 16 ; }

  // Field (width: 8 bits): Integrator oversampling ratio (averaging
              length)
    inline uint32_t DFSDM_DFSDM1_FCR_IOSR (const uint32_t inValue) { return (inValue & 255U) << 0 ; }

  // Field (width: 3 bits): Sinc filter order
    inline uint32_t DFSDM_DFSDM1_FCR_FORD (const uint32_t inValue) { return (inValue & 7U) << 29 ; }

//-------------------- CHWDAT6R
#define DFSDM_CHWDAT6R(group) (* ((volatile uint32_t *) (kBaseAddress_DFSDM [group] + 0xCC)))
#define DFSDM_CHWDAT6R (* ((volatile uint32_t *) (0x40016000 + 0xCC)))

  // Field (width: 16 bits): WDATA
    inline uint32_t DFSDM_CHWDAT6R_WDATA (const uint32_t inValue) { return (inValue & 65535U) << 0 ; }

//-------------------- interrupt flag clear register
#define DFSDM_DFSDM1_ICR(group) (* ((volatile uint32_t *) (kBaseAddress_DFSDM [group] + 0x20C)))
#define DFSDM_DFSDM1_ICR (* ((volatile uint32_t *) (0x40016000 + 0x20C)))

  // Field (width: 8 bits): Clear the short-circuit detector
              flag
    inline uint32_t DFSDM_DFSDM1_ICR_CLRSCDF (const uint32_t inValue) { return (inValue & 255U) << 24 ; }

  // Field (width: 8 bits): Clear the clock absence
              flag
    inline uint32_t DFSDM_DFSDM1_ICR_CLRCKABF (const uint32_t inValue) { return (inValue & 255U) << 16 ; }

  // Boolean field: Clear the injected conversion overrun
              flag
    static const uint32_t DFSDM_DFSDM1_ICR_CLRJOVRF = 1U << 2 ;

  // Boolean field: Clear the regular conversion overrun
              flag
    static const uint32_t DFSDM_DFSDM1_ICR_CLRROVRF = 1U << 3 ;

//-------------------- filter control register
#define DFSDM_DFSDM3_FCR(group) (* ((volatile uint32_t *) (kBaseAddress_DFSDM [group] + 0x414)))
#define DFSDM_DFSDM3_FCR (* ((volatile uint32_t *) (0x40016000 + 0x414)))

  // Field (width: 10 bits): Sinc filter oversampling ratio
              (decimation rate)
    inline uint32_t DFSDM_DFSDM3_FCR_FOSR (const uint32_t inValue) { return (inValue & 1023U) << 16 ; }

  // Field (width: 8 bits): Integrator oversampling ratio (averaging
              length)
    inline uint32_t DFSDM_DFSDM3_FCR_IOSR (const uint32_t inValue) { return (inValue & 255U) << 0 ; }

  // Field (width: 3 bits): Sinc filter order
    inline uint32_t DFSDM_DFSDM3_FCR_FORD (const uint32_t inValue) { return (inValue & 7U) << 29 ; }

//-------------------- interrupt flag clear register
#define DFSDM_DFSDM3_ICR(group) (* ((volatile uint32_t *) (kBaseAddress_DFSDM [group] + 0x40C)))
#define DFSDM_DFSDM3_ICR (* ((volatile uint32_t *) (0x40016000 + 0x40C)))

  // Field (width: 8 bits): Clear the short-circuit detector
              flag
    inline uint32_t DFSDM_DFSDM3_ICR_CLRSCDF (const uint32_t inValue) { return (inValue & 255U) << 24 ; }

  // Field (width: 8 bits): Clear the clock absence
              flag
    inline uint32_t DFSDM_DFSDM3_ICR_CLRCKABF (const uint32_t inValue) { return (inValue & 255U) << 16 ; }

  // Boolean field: Clear the injected conversion overrun
              flag
    static const uint32_t DFSDM_DFSDM3_ICR_CLRJOVRF = 1U << 2 ;

  // Boolean field: Clear the regular conversion overrun
              flag
    static const uint32_t DFSDM_DFSDM3_ICR_CLRROVRF = 1U << 3 ;

//-------------------- channel data input register
#define DFSDM_CHDATIN0R(group) (* ((volatile uint32_t *) (kBaseAddress_DFSDM [group] + 0x10)))
#define DFSDM_CHDATIN0R (* ((volatile uint32_t *) (0x40016000 + 0x10)))

  // Field (width: 16 bits): INDAT0
    inline uint32_t DFSDM_CHDATIN0R_INDAT0 (const uint32_t inValue) { return (inValue & 65535U) << 0 ; }

  // Field (width: 16 bits): INDAT1
    inline uint32_t DFSDM_CHDATIN0R_INDAT1 (const uint32_t inValue) { return (inValue & 65535U) << 16 ; }

//-------------------- data register for the regular
          channel
#define DFSDM_DFSDM0_RDATAR(group) (* ((const volatile uint32_t *) (kBaseAddress_DFSDM [group] + 0x11C)))
#define DFSDM_DFSDM0_RDATAR (* ((const volatile uint32_t *) (0x40016000 + 0x11C)))

  // Boolean field: Regular channel pending
              data
    static const uint32_t DFSDM_DFSDM0_RDATAR_RPEND = 1U << 4 ;

  // Field (width: 3 bits): Regular channel most recently
              converted
    inline uint32_t DFSDM_DFSDM0_RDATAR_RDATACH (const uint32_t inValue) { return (inValue & 7U) << 0 ; }

  // Field (width: 24 bits): Regular channel conversion
              data
    inline uint32_t DFSDM_DFSDM0_RDATAR_RDATA (const uint32_t inValue) { return (inValue & 16777215U) << 8 ; }

//-------------------- control register 1
#define DFSDM_DFSDM2_CR1(group) (* ((volatile uint32_t *) (kBaseAddress_DFSDM [group] + 0x300)))
#define DFSDM_DFSDM2_CR1 (* ((volatile uint32_t *) (0x40016000 + 0x300)))

  // Boolean field: Launch regular conversion synchronously
              with DFSDM0
    static const uint32_t DFSDM_DFSDM2_CR1_RSYNC = 1U << 19 ;

  // Boolean field: Start a conversion of the injected group
              of channels
    static const uint32_t DFSDM_DFSDM2_CR1_JSWSTART = 1U << 1 ;

  // Boolean field: Continuous mode selection for regular
              conversions
    static const uint32_t DFSDM_DFSDM2_CR1_RCONT = 1U << 18 ;

  // Boolean field: Scanning conversion mode for injected
              conversions
    static const uint32_t DFSDM_DFSDM2_CR1_JSCAN = 1U << 4 ;

  // Boolean field: Fast conversion mode selection for
              regular conversions
    static const uint32_t DFSDM_DFSDM2_CR1_FAST = 1U << 29 ;

  // Field (width: 2 bits): Trigger enable and trigger edge
              selection for injected conversions
    inline uint32_t DFSDM_DFSDM2_CR1_JEXTEN (const uint32_t inValue) { return (inValue & 3U) << 13 ; }

  // Field (width: 3 bits): Regular channel selection
    inline uint32_t DFSDM_DFSDM2_CR1_RCH (const uint32_t inValue) { return (inValue & 7U) << 24 ; }

  // Field (width: 3 bits): Trigger signal selection for launching
              injected conversions
    inline uint32_t DFSDM_DFSDM2_CR1_JEXTSEL (const uint32_t inValue) { return (inValue & 7U) << 8 ; }

  // Boolean field: DMA channel enabled to read data for the
              regular conversion
    static const uint32_t DFSDM_DFSDM2_CR1_RDMAEN = 1U << 21 ;

  // Boolean field: Software start of a conversion on the
              regular channel
    static const uint32_t DFSDM_DFSDM2_CR1_RSWSTART = 1U << 17 ;

  // Boolean field: Launch an injected conversion
              synchronously with the DFSDM0 JSWSTART
              trigger
    static const uint32_t DFSDM_DFSDM2_CR1_JSYNC = 1U << 3 ;

  // Boolean field: DFSDM enable
    static const uint32_t DFSDM_DFSDM2_CR1_DFEN = 1U << 0 ;

  // Boolean field: Analog watchdog fast mode
              select
    static const uint32_t DFSDM_DFSDM2_CR1_AWFSEL = 1U << 30 ;

  // Boolean field: DMA channel enabled to read data for the
              injected channel group
    static const uint32_t DFSDM_DFSDM2_CR1_JDMAEN = 1U << 5 ;

//-------------------- control register 2
#define DFSDM_DFSDM2_CR2(group) (* ((volatile uint32_t *) (kBaseAddress_DFSDM [group] + 0x304)))
#define DFSDM_DFSDM2_CR2 (* ((volatile uint32_t *) (0x40016000 + 0x304)))

  // Boolean field: Analog watchdog interrupt
              enable
    static const uint32_t DFSDM_DFSDM2_CR2_AWDIE = 1U << 4 ;

  // Boolean field: Short-circuit detector interrupt
              enable
    static const uint32_t DFSDM_DFSDM2_CR2_SCDIE = 1U << 5 ;

  // Boolean field: Clock absence interrupt
              enable
    static const uint32_t DFSDM_DFSDM2_CR2_CKABIE = 1U << 6 ;

  // Field (width: 8 bits): Analog watchdog channel
              selection
    inline uint32_t DFSDM_DFSDM2_CR2_AWDCH (const uint32_t inValue) { return (inValue & 255U) << 16 ; }

  // Boolean field: Regular data overrun interrupt
              enable
    static const uint32_t DFSDM_DFSDM2_CR2_ROVRIE = 1U << 3 ;

  // Boolean field: Injected data overrun interrupt
              enable
    static const uint32_t DFSDM_DFSDM2_CR2_JOVRIE = 1U << 2 ;

  // Boolean field: Regular end of conversion interrupt
              enable
    static const uint32_t DFSDM_DFSDM2_CR2_REOCIE = 1U << 1 ;

  // Field (width: 8 bits): Extremes detector channel
              selection
    inline uint32_t DFSDM_DFSDM2_CR2_EXCH (const uint32_t inValue) { return (inValue & 255U) << 8 ; }

  // Boolean field: Injected end of conversion interrupt
              enable
    static const uint32_t DFSDM_DFSDM2_CR2_JEOCIE = 1U << 0 ;

//-------------------- Extremes detector minimum
          register
#define DFSDM_DFSDM3_EXMIN(group) (* ((const volatile uint32_t *) (kBaseAddress_DFSDM [group] + 0x434)))
#define DFSDM_DFSDM3_EXMIN (* ((const volatile uint32_t *) (0x40016000 + 0x434)))

  // Field (width: 24 bits): EXMIN
    inline uint32_t DFSDM_DFSDM3_EXMIN_EXMIN (const uint32_t inValue) { return (inValue & 16777215U) << 8 ; }

  // Field (width: 3 bits): Extremes detector minimum data
              channel
    inline uint32_t DFSDM_DFSDM3_EXMIN_EXMINCH (const uint32_t inValue) { return (inValue & 7U) << 0 ; }

//-------------------- CHWDAT3R
#define DFSDM_CHWDAT3R(group) (* ((volatile uint32_t *) (kBaseAddress_DFSDM [group] + 0x6C)))
#define DFSDM_CHWDAT3R (* ((volatile uint32_t *) (0x40016000 + 0x6C)))

  // Field (width: 16 bits): WDATA
    inline uint32_t DFSDM_CHWDAT3R_WDATA (const uint32_t inValue) { return (inValue & 65535U) << 0 ; }

//-------------------- interrupt and status register
#define DFSDM_DFSDM3_ISR(group) (* ((const volatile uint32_t *) (kBaseAddress_DFSDM [group] + 0x408)))
#define DFSDM_DFSDM3_ISR (* ((const volatile uint32_t *) (0x40016000 + 0x408)))

  // Boolean field: End of regular conversion
              flag
    static const uint32_t DFSDM_DFSDM3_ISR_REOCF = 1U << 1 ;

  // Field (width: 8 bits): Clock absence flag
    inline uint32_t DFSDM_DFSDM3_ISR_CKABF (const uint32_t inValue) { return (inValue & 255U) << 16 ; }

  // Boolean field: End of injected conversion
              flag
    static const uint32_t DFSDM_DFSDM3_ISR_JEOCF = 1U << 0 ;

  // Boolean field: Analog watchdog
    static const uint32_t DFSDM_DFSDM3_ISR_AWDF = 1U << 4 ;

  // Boolean field: Regular conversion overrun
              flag
    static const uint32_t DFSDM_DFSDM3_ISR_ROVRF = 1U << 3 ;

  // Boolean field: Injected conversion in progress
              status
    static const uint32_t DFSDM_DFSDM3_ISR_JCIP = 1U << 13 ;

  // Boolean field: Injected conversion overrun
              flag
    static const uint32_t DFSDM_DFSDM3_ISR_JOVRF = 1U << 2 ;

  // Boolean field: Regular conversion in progress
              status
    static const uint32_t DFSDM_DFSDM3_ISR_RCIP = 1U << 14 ;

  // Field (width: 8 bits): short-circuit detector
              flag
    inline uint32_t DFSDM_DFSDM3_ISR_SCDF (const uint32_t inValue) { return (inValue & 255U) << 24 ; }

//-------------------- Extremes detector maximum
          register
#define DFSDM_DFSDM3_EXMAX(group) (* ((const volatile uint32_t *) (kBaseAddress_DFSDM [group] + 0x430)))
#define DFSDM_DFSDM3_EXMAX (* ((const volatile uint32_t *) (0x40016000 + 0x430)))

  // Field (width: 3 bits): Extremes detector maximum data
              channel
    inline uint32_t DFSDM_DFSDM3_EXMAX_EXMAXCH (const uint32_t inValue) { return (inValue & 7U) << 0 ; }

  // Field (width: 24 bits): Extremes detector maximum
              value
    inline uint32_t DFSDM_DFSDM3_EXMAX_EXMAX (const uint32_t inValue) { return (inValue & 16777215U) << 8 ; }

//-------------------- conversion timer register
#define DFSDM_DFSDM1_CNVTIMR(group) (* ((const volatile uint32_t *) (kBaseAddress_DFSDM [group] + 0x238)))
#define DFSDM_DFSDM1_CNVTIMR (* ((const volatile uint32_t *) (0x40016000 + 0x238)))

  // Field (width: 28 bits): 28-bit timer counting conversion time t
              = CNVCNT[27:0] / fDFSDM_CKIN
    inline uint32_t DFSDM_DFSDM1_CNVTIMR_CNVCNT (const uint32_t inValue) { return (inValue & 268435455U) << 4 ; }

//-------------------- analog watchdog and short-circuit detector
          register
#define DFSDM_AWSCD0R(group) (* ((volatile uint32_t *) (kBaseAddress_DFSDM [group] + 0x8)))
#define DFSDM_AWSCD0R (* ((volatile uint32_t *) (0x40016000 + 0x8)))

  // Field (width: 2 bits): AWFORD
    inline uint32_t DFSDM_AWSCD0R_AWFORD (const uint32_t inValue) { return (inValue & 3U) << 22 ; }

  // Field (width: 5 bits): AWFOSR
    inline uint32_t DFSDM_AWSCD0R_AWFOSR (const uint32_t inValue) { return (inValue & 31U) << 16 ; }

  // Field (width: 8 bits): SCDT
    inline uint32_t DFSDM_AWSCD0R_SCDT (const uint32_t inValue) { return (inValue & 255U) << 0 ; }

  // Field (width: 4 bits): BKSCD
    inline uint32_t DFSDM_AWSCD0R_BKSCD (const uint32_t inValue) { return (inValue & 15U) << 12 ; }

//-------------------- CHDATIN5R
#define DFSDM_CHDATIN5R(group) (* ((volatile uint32_t *) (kBaseAddress_DFSDM [group] + 0xB0)))
#define DFSDM_CHDATIN5R (* ((volatile uint32_t *) (0x40016000 + 0xB0)))

  // Field (width: 16 bits): INDAT0
    inline uint32_t DFSDM_CHDATIN5R_INDAT0 (const uint32_t inValue) { return (inValue & 65535U) << 0 ; }

  // Field (width: 16 bits): INDAT1
    inline uint32_t DFSDM_CHDATIN5R_INDAT1 (const uint32_t inValue) { return (inValue & 65535U) << 16 ; }

//-------------------- CHCFG1R1
#define DFSDM_CHCFG1R1(group) (* ((volatile uint32_t *) (kBaseAddress_DFSDM [group] + 0x20)))
#define DFSDM_CHCFG1R1 (* ((volatile uint32_t *) (0x40016000 + 0x20)))

  // Boolean field: CKABEN
    static const uint32_t DFSDM_CHCFG1R1_CKABEN = 1U << 6 ;

  // Field (width: 2 bits): DATPACK
    inline uint32_t DFSDM_CHCFG1R1_DATPACK (const uint32_t inValue) { return (inValue & 3U) << 14 ; }

  // Boolean field: CHINSEL
    static const uint32_t DFSDM_CHCFG1R1_CHINSEL = 1U << 8 ;

  // Field (width: 2 bits): SITP
    inline uint32_t DFSDM_CHCFG1R1_SITP (const uint32_t inValue) { return (inValue & 3U) << 0 ; }

  // Boolean field: CHEN
    static const uint32_t DFSDM_CHCFG1R1_CHEN = 1U << 7 ;

  // Field (width: 2 bits): DATMPX
    inline uint32_t DFSDM_CHCFG1R1_DATMPX (const uint32_t inValue) { return (inValue & 3U) << 12 ; }

  // Field (width: 2 bits): SPICKSEL
    inline uint32_t DFSDM_CHCFG1R1_SPICKSEL (const uint32_t inValue) { return (inValue & 3U) << 2 ; }

  // Boolean field: SCDEN
    static const uint32_t DFSDM_CHCFG1R1_SCDEN = 1U << 5 ;

//-------------------- CHCFG1R2
#define DFSDM_CHCFG1R2(group) (* ((volatile uint32_t *) (kBaseAddress_DFSDM [group] + 0x24)))
#define DFSDM_CHCFG1R2 (* ((volatile uint32_t *) (0x40016000 + 0x24)))

  // Field (width: 5 bits): DTRBS
    inline uint32_t DFSDM_CHCFG1R2_DTRBS (const uint32_t inValue) { return (inValue & 31U) << 3 ; }

  // Field (width: 24 bits): OFFSET
    inline uint32_t DFSDM_CHCFG1R2_OFFSET (const uint32_t inValue) { return (inValue & 16777215U) << 8 ; }

//-------------------- CHCFG3R2
#define DFSDM_CHCFG3R2(group) (* ((volatile uint32_t *) (kBaseAddress_DFSDM [group] + 0x64)))
#define DFSDM_CHCFG3R2 (* ((volatile uint32_t *) (0x40016000 + 0x64)))

  // Field (width: 5 bits): DTRBS
    inline uint32_t DFSDM_CHCFG3R2_DTRBS (const uint32_t inValue) { return (inValue & 31U) << 3 ; }

  // Field (width: 24 bits): OFFSET
    inline uint32_t DFSDM_CHCFG3R2_OFFSET (const uint32_t inValue) { return (inValue & 16777215U) << 8 ; }

//-------------------- CHCFG3R1
#define DFSDM_CHCFG3R1(group) (* ((volatile uint32_t *) (kBaseAddress_DFSDM [group] + 0x60)))
#define DFSDM_CHCFG3R1 (* ((volatile uint32_t *) (0x40016000 + 0x60)))

  // Boolean field: CKABEN
    static const uint32_t DFSDM_CHCFG3R1_CKABEN = 1U << 6 ;

  // Field (width: 2 bits): DATPACK
    inline uint32_t DFSDM_CHCFG3R1_DATPACK (const uint32_t inValue) { return (inValue & 3U) << 14 ; }

  // Boolean field: CHINSEL
    static const uint32_t DFSDM_CHCFG3R1_CHINSEL = 1U << 8 ;

  // Field (width: 2 bits): SITP
    inline uint32_t DFSDM_CHCFG3R1_SITP (const uint32_t inValue) { return (inValue & 3U) << 0 ; }

  // Boolean field: CHEN
    static const uint32_t DFSDM_CHCFG3R1_CHEN = 1U << 7 ;

  // Field (width: 2 bits): DATMPX
    inline uint32_t DFSDM_CHCFG3R1_DATMPX (const uint32_t inValue) { return (inValue & 3U) << 12 ; }

  // Field (width: 2 bits): SPICKSEL
    inline uint32_t DFSDM_CHCFG3R1_SPICKSEL (const uint32_t inValue) { return (inValue & 3U) << 2 ; }

  // Boolean field: SCDEN
    static const uint32_t DFSDM_CHCFG3R1_SCDEN = 1U << 5 ;

//-------------------- control register 2
#define DFSDM_DFSDM0_CR2(group) (* ((volatile uint32_t *) (kBaseAddress_DFSDM [group] + 0x104)))
#define DFSDM_DFSDM0_CR2 (* ((volatile uint32_t *) (0x40016000 + 0x104)))

  // Boolean field: Analog watchdog interrupt
              enable
    static const uint32_t DFSDM_DFSDM0_CR2_AWDIE = 1U << 4 ;

  // Boolean field: Short-circuit detector interrupt
              enable
    static const uint32_t DFSDM_DFSDM0_CR2_SCDIE = 1U << 5 ;

  // Boolean field: Clock absence interrupt
              enable
    static const uint32_t DFSDM_DFSDM0_CR2_CKABIE = 1U << 6 ;

  // Field (width: 8 bits): Analog watchdog channel
              selection
    inline uint32_t DFSDM_DFSDM0_CR2_AWDCH (const uint32_t inValue) { return (inValue & 255U) << 16 ; }

  // Boolean field: Regular data overrun interrupt
              enable
    static const uint32_t DFSDM_DFSDM0_CR2_ROVRIE = 1U << 3 ;

  // Boolean field: Injected data overrun interrupt
              enable
    static const uint32_t DFSDM_DFSDM0_CR2_JOVRIE = 1U << 2 ;

  // Boolean field: Regular end of conversion interrupt
              enable
    static const uint32_t DFSDM_DFSDM0_CR2_REOCIE = 1U << 1 ;

  // Field (width: 8 bits): Extremes detector channel
              selection
    inline uint32_t DFSDM_DFSDM0_CR2_EXCH (const uint32_t inValue) { return (inValue & 255U) << 8 ; }

  // Boolean field: Injected end of conversion interrupt
              enable
    static const uint32_t DFSDM_DFSDM0_CR2_JEOCIE = 1U << 0 ;

//-------------------- control register 1
#define DFSDM_DFSDM0_CR1(group) (* ((volatile uint32_t *) (kBaseAddress_DFSDM [group] + 0x100)))
#define DFSDM_DFSDM0_CR1 (* ((volatile uint32_t *) (0x40016000 + 0x100)))

  // Boolean field: Launch regular conversion synchronously
              with DFSDM0
    static const uint32_t DFSDM_DFSDM0_CR1_RSYNC = 1U << 19 ;

  // Boolean field: Start a conversion of the injected group
              of channels
    static const uint32_t DFSDM_DFSDM0_CR1_JSWSTART = 1U << 1 ;

  // Boolean field: Continuous mode selection for regular
              conversions
    static const uint32_t DFSDM_DFSDM0_CR1_RCONT = 1U << 18 ;

  // Boolean field: Scanning conversion mode for injected
              conversions
    static const uint32_t DFSDM_DFSDM0_CR1_JSCAN = 1U << 4 ;

  // Boolean field: Fast conversion mode selection for
              regular conversions
    static const uint32_t DFSDM_DFSDM0_CR1_FAST = 1U << 29 ;

  // Field (width: 2 bits): Trigger enable and trigger edge
              selection for injected conversions
    inline uint32_t DFSDM_DFSDM0_CR1_JEXTEN (const uint32_t inValue) { return (inValue & 3U) << 13 ; }

  // Field (width: 3 bits): Regular channel selection
    inline uint32_t DFSDM_DFSDM0_CR1_RCH (const uint32_t inValue) { return (inValue & 7U) << 24 ; }

  // Field (width: 3 bits): Trigger signal selection for launching
              injected conversions
    inline uint32_t DFSDM_DFSDM0_CR1_JEXTSEL (const uint32_t inValue) { return (inValue & 7U) << 8 ; }

  // Boolean field: DMA channel enabled to read data for the
              regular conversion
    static const uint32_t DFSDM_DFSDM0_CR1_RDMAEN = 1U << 21 ;

  // Boolean field: Software start of a conversion on the
              regular channel
    static const uint32_t DFSDM_DFSDM0_CR1_RSWSTART = 1U << 17 ;

  // Boolean field: Launch an injected conversion
              synchronously with the DFSDM0 JSWSTART
              trigger
    static const uint32_t DFSDM_DFSDM0_CR1_JSYNC = 1U << 3 ;

  // Boolean field: DFSDM enable
    static const uint32_t DFSDM_DFSDM0_CR1_DFEN = 1U << 0 ;

  // Boolean field: Analog watchdog fast mode
              select
    static const uint32_t DFSDM_DFSDM0_CR1_AWFSEL = 1U << 30 ;

  // Boolean field: DMA channel enabled to read data for the
              injected channel group
    static const uint32_t DFSDM_DFSDM0_CR1_JDMAEN = 1U << 5 ;

//-------------------- control register 1
#define DFSDM_DFSDM3_CR1(group) (* ((volatile uint32_t *) (kBaseAddress_DFSDM [group] + 0x400)))
#define DFSDM_DFSDM3_CR1 (* ((volatile uint32_t *) (0x40016000 + 0x400)))

  // Boolean field: Launch regular conversion synchronously
              with DFSDM0
    static const uint32_t DFSDM_DFSDM3_CR1_RSYNC = 1U << 19 ;

  // Boolean field: Start a conversion of the injected group
              of channels
    static const uint32_t DFSDM_DFSDM3_CR1_JSWSTART = 1U << 1 ;

  // Boolean field: Continuous mode selection for regular
              conversions
    static const uint32_t DFSDM_DFSDM3_CR1_RCONT = 1U << 18 ;

  // Boolean field: Scanning conversion mode for injected
              conversions
    static const uint32_t DFSDM_DFSDM3_CR1_JSCAN = 1U << 4 ;

  // Boolean field: Fast conversion mode selection for
              regular conversions
    static const uint32_t DFSDM_DFSDM3_CR1_FAST = 1U << 29 ;

  // Field (width: 2 bits): Trigger enable and trigger edge
              selection for injected conversions
    inline uint32_t DFSDM_DFSDM3_CR1_JEXTEN (const uint32_t inValue) { return (inValue & 3U) << 13 ; }

  // Field (width: 3 bits): Regular channel selection
    inline uint32_t DFSDM_DFSDM3_CR1_RCH (const uint32_t inValue) { return (inValue & 7U) << 24 ; }

  // Field (width: 3 bits): Trigger signal selection for launching
              injected conversions
    inline uint32_t DFSDM_DFSDM3_CR1_JEXTSEL (const uint32_t inValue) { return (inValue & 7U) << 8 ; }

  // Boolean field: DMA channel enabled to read data for the
              regular conversion
    static const uint32_t DFSDM_DFSDM3_CR1_RDMAEN = 1U << 21 ;

  // Boolean field: Software start of a conversion on the
              regular channel
    static const uint32_t DFSDM_DFSDM3_CR1_RSWSTART = 1U << 17 ;

  // Boolean field: Launch an injected conversion
              synchronously with the DFSDM0 JSWSTART
              trigger
    static const uint32_t DFSDM_DFSDM3_CR1_JSYNC = 1U << 3 ;

  // Boolean field: DFSDM enable
    static const uint32_t DFSDM_DFSDM3_CR1_DFEN = 1U << 0 ;

  // Boolean field: Analog watchdog fast mode
              select
    static const uint32_t DFSDM_DFSDM3_CR1_AWFSEL = 1U << 30 ;

  // Boolean field: DMA channel enabled to read data for the
              injected channel group
    static const uint32_t DFSDM_DFSDM3_CR1_JDMAEN = 1U << 5 ;

//-------------------- channel watchdog filter data
          register
#define DFSDM_CHWDAT0R(group) (* ((volatile uint32_t *) (kBaseAddress_DFSDM [group] + 0xC)))
#define DFSDM_CHWDAT0R (* ((volatile uint32_t *) (0x40016000 + 0xC)))

  // Field (width: 16 bits): WDATA
    inline uint32_t DFSDM_CHWDAT0R_WDATA (const uint32_t inValue) { return (inValue & 65535U) << 0 ; }

//-------------------- control register 2
#define DFSDM_DFSDM3_CR2(group) (* ((volatile uint32_t *) (kBaseAddress_DFSDM [group] + 0x404)))
#define DFSDM_DFSDM3_CR2 (* ((volatile uint32_t *) (0x40016000 + 0x404)))

  // Boolean field: Analog watchdog interrupt
              enable
    static const uint32_t DFSDM_DFSDM3_CR2_AWDIE = 1U << 4 ;

  // Boolean field: Short-circuit detector interrupt
              enable
    static const uint32_t DFSDM_DFSDM3_CR2_SCDIE = 1U << 5 ;

  // Boolean field: Clock absence interrupt
              enable
    static const uint32_t DFSDM_DFSDM3_CR2_CKABIE = 1U << 6 ;

  // Field (width: 8 bits): Analog watchdog channel
              selection
    inline uint32_t DFSDM_DFSDM3_CR2_AWDCH (const uint32_t inValue) { return (inValue & 255U) << 16 ; }

  // Boolean field: Regular data overrun interrupt
              enable
    static const uint32_t DFSDM_DFSDM3_CR2_ROVRIE = 1U << 3 ;

  // Boolean field: Injected data overrun interrupt
              enable
    static const uint32_t DFSDM_DFSDM3_CR2_JOVRIE = 1U << 2 ;

  // Boolean field: Regular end of conversion interrupt
              enable
    static const uint32_t DFSDM_DFSDM3_CR2_REOCIE = 1U << 1 ;

  // Field (width: 8 bits): Extremes detector channel
              selection
    inline uint32_t DFSDM_DFSDM3_CR2_EXCH (const uint32_t inValue) { return (inValue & 255U) << 8 ; }

  // Boolean field: Injected end of conversion interrupt
              enable
    static const uint32_t DFSDM_DFSDM3_CR2_JEOCIE = 1U << 0 ;

//-------------------- data register for injected
          group
#define DFSDM_DFSDM3_JDATAR(group) (* ((const volatile uint32_t *) (kBaseAddress_DFSDM [group] + 0x418)))
#define DFSDM_DFSDM3_JDATAR (* ((const volatile uint32_t *) (0x40016000 + 0x418)))

  // Field (width: 3 bits): Injected channel most recently
              converted
    inline uint32_t DFSDM_DFSDM3_JDATAR_JDATACH (const uint32_t inValue) { return (inValue & 7U) << 0 ; }

  // Field (width: 24 bits): Injected group conversion
              data
    inline uint32_t DFSDM_DFSDM3_JDATAR_JDATA (const uint32_t inValue) { return (inValue & 16777215U) << 8 ; }

//-------------------- Extremes detector maximum
          register
#define DFSDM_DFSDM1_EXMAX(group) (* ((const volatile uint32_t *) (kBaseAddress_DFSDM [group] + 0x230)))
#define DFSDM_DFSDM1_EXMAX (* ((const volatile uint32_t *) (0x40016000 + 0x230)))

  // Field (width: 3 bits): Extremes detector maximum data
              channel
    inline uint32_t DFSDM_DFSDM1_EXMAX_EXMAXCH (const uint32_t inValue) { return (inValue & 7U) << 0 ; }

  // Field (width: 24 bits): Extremes detector maximum
              value
    inline uint32_t DFSDM_DFSDM1_EXMAX_EXMAX (const uint32_t inValue) { return (inValue & 16777215U) << 8 ; }

//-------------------- interrupt and status register
#define DFSDM_DFSDM1_ISR(group) (* ((const volatile uint32_t *) (kBaseAddress_DFSDM [group] + 0x208)))
#define DFSDM_DFSDM1_ISR (* ((const volatile uint32_t *) (0x40016000 + 0x208)))

  // Boolean field: End of regular conversion
              flag
    static const uint32_t DFSDM_DFSDM1_ISR_REOCF = 1U << 1 ;

  // Field (width: 8 bits): Clock absence flag
    inline uint32_t DFSDM_DFSDM1_ISR_CKABF (const uint32_t inValue) { return (inValue & 255U) << 16 ; }

  // Boolean field: End of injected conversion
              flag
    static const uint32_t DFSDM_DFSDM1_ISR_JEOCF = 1U << 0 ;

  // Boolean field: Analog watchdog
    static const uint32_t DFSDM_DFSDM1_ISR_AWDF = 1U << 4 ;

  // Boolean field: Regular conversion overrun
              flag
    static const uint32_t DFSDM_DFSDM1_ISR_ROVRF = 1U << 3 ;

  // Boolean field: Injected conversion in progress
              status
    static const uint32_t DFSDM_DFSDM1_ISR_JCIP = 1U << 13 ;

  // Boolean field: Injected conversion overrun
              flag
    static const uint32_t DFSDM_DFSDM1_ISR_JOVRF = 1U << 2 ;

  // Boolean field: Regular conversion in progress
              status
    static const uint32_t DFSDM_DFSDM1_ISR_RCIP = 1U << 14 ;

  // Field (width: 8 bits): short-circuit detector
              flag
    inline uint32_t DFSDM_DFSDM1_ISR_SCDF (const uint32_t inValue) { return (inValue & 255U) << 24 ; }

//-------------------- Extremes detector minimum
          register
#define DFSDM_DFSDM1_EXMIN(group) (* ((const volatile uint32_t *) (kBaseAddress_DFSDM [group] + 0x234)))
#define DFSDM_DFSDM1_EXMIN (* ((const volatile uint32_t *) (0x40016000 + 0x234)))

  // Field (width: 24 bits): EXMIN
    inline uint32_t DFSDM_DFSDM1_EXMIN_EXMIN (const uint32_t inValue) { return (inValue & 16777215U) << 8 ; }

  // Field (width: 3 bits): Extremes detector minimum data
              channel
    inline uint32_t DFSDM_DFSDM1_EXMIN_EXMINCH (const uint32_t inValue) { return (inValue & 7U) << 0 ; }

//-------------------- data register for the regular
          channel
#define DFSDM_DFSDM3_RDATAR(group) (* ((const volatile uint32_t *) (kBaseAddress_DFSDM [group] + 0x41C)))
#define DFSDM_DFSDM3_RDATAR (* ((const volatile uint32_t *) (0x40016000 + 0x41C)))

  // Boolean field: Regular channel pending
              data
    static const uint32_t DFSDM_DFSDM3_RDATAR_RPEND = 1U << 4 ;

  // Field (width: 3 bits): Regular channel most recently
              converted
    inline uint32_t DFSDM_DFSDM3_RDATAR_RDATACH (const uint32_t inValue) { return (inValue & 7U) << 0 ; }

  // Field (width: 24 bits): Regular channel conversion
              data
    inline uint32_t DFSDM_DFSDM3_RDATAR_RDATA (const uint32_t inValue) { return (inValue & 16777215U) << 8 ; }

//-------------------- AWSCD3R
#define DFSDM_AWSCD3R(group) (* ((volatile uint32_t *) (kBaseAddress_DFSDM [group] + 0x68)))
#define DFSDM_AWSCD3R (* ((volatile uint32_t *) (0x40016000 + 0x68)))

  // Field (width: 2 bits): AWFORD
    inline uint32_t DFSDM_AWSCD3R_AWFORD (const uint32_t inValue) { return (inValue & 3U) << 22 ; }

  // Field (width: 5 bits): AWFOSR
    inline uint32_t DFSDM_AWSCD3R_AWFOSR (const uint32_t inValue) { return (inValue & 31U) << 16 ; }

  // Field (width: 8 bits): SCDT
    inline uint32_t DFSDM_AWSCD3R_SCDT (const uint32_t inValue) { return (inValue & 255U) << 0 ; }

  // Field (width: 4 bits): BKSCD
    inline uint32_t DFSDM_AWSCD3R_BKSCD (const uint32_t inValue) { return (inValue & 15U) << 12 ; }

//-------------------- Extremes detector maximum
          register
#define DFSDM_DFSDM2_EXMAX(group) (* ((const volatile uint32_t *) (kBaseAddress_DFSDM [group] + 0x330)))
#define DFSDM_DFSDM2_EXMAX (* ((const volatile uint32_t *) (0x40016000 + 0x330)))

  // Field (width: 3 bits): Extremes detector maximum data
              channel
    inline uint32_t DFSDM_DFSDM2_EXMAX_EXMAXCH (const uint32_t inValue) { return (inValue & 7U) << 0 ; }

  // Field (width: 24 bits): Extremes detector maximum
              value
    inline uint32_t DFSDM_DFSDM2_EXMAX_EXMAX (const uint32_t inValue) { return (inValue & 16777215U) << 8 ; }

//-------------------- analog watchdog low threshold
          register
#define DFSDM_DFSDM3_AWLTR(group) (* ((volatile uint32_t *) (kBaseAddress_DFSDM [group] + 0x424)))
#define DFSDM_DFSDM3_AWLTR (* ((volatile uint32_t *) (0x40016000 + 0x424)))

  // Field (width: 24 bits): Analog watchdog low
              threshold
    inline uint32_t DFSDM_DFSDM3_AWLTR_AWLT (const uint32_t inValue) { return (inValue & 16777215U) << 8 ; }

  // Field (width: 4 bits): Break signal assignment to analog
              watchdog low threshold event
    inline uint32_t DFSDM_DFSDM3_AWLTR_BKAWL (const uint32_t inValue) { return (inValue & 15U) << 0 ; }

//-------------------- analog watchdog status
          register
#define DFSDM_DFSDM1_AWSR(group) (* ((const volatile uint32_t *) (kBaseAddress_DFSDM [group] + 0x228)))
#define DFSDM_DFSDM1_AWSR (* ((const volatile uint32_t *) (0x40016000 + 0x228)))

  // Field (width: 8 bits): Analog watchdog high threshold
              flag
    inline uint32_t DFSDM_DFSDM1_AWSR_AWHTF (const uint32_t inValue) { return (inValue & 255U) << 8 ; }

  // Field (width: 8 bits): Analog watchdog low threshold
              flag
    inline uint32_t DFSDM_DFSDM1_AWSR_AWLTF (const uint32_t inValue) { return (inValue & 255U) << 0 ; }

//-------------------- analog watchdog low threshold
          register
#define DFSDM_DFSDM0_AWLTR(group) (* ((volatile uint32_t *) (kBaseAddress_DFSDM [group] + 0x124)))
#define DFSDM_DFSDM0_AWLTR (* ((volatile uint32_t *) (0x40016000 + 0x124)))

  // Field (width: 24 bits): Analog watchdog low
              threshold
    inline uint32_t DFSDM_DFSDM0_AWLTR_AWLT (const uint32_t inValue) { return (inValue & 16777215U) << 8 ; }

  // Field (width: 4 bits): Break signal assignment to analog
              watchdog low threshold event
    inline uint32_t DFSDM_DFSDM0_AWLTR_BKAWL (const uint32_t inValue) { return (inValue & 15U) << 0 ; }

//-------------------- AWSCD6R
#define DFSDM_AWSCD6R(group) (* ((volatile uint32_t *) (kBaseAddress_DFSDM [group] + 0xC8)))
#define DFSDM_AWSCD6R (* ((volatile uint32_t *) (0x40016000 + 0xC8)))

  // Field (width: 2 bits): AWFORD
    inline uint32_t DFSDM_AWSCD6R_AWFORD (const uint32_t inValue) { return (inValue & 3U) << 22 ; }

  // Field (width: 5 bits): AWFOSR
    inline uint32_t DFSDM_AWSCD6R_AWFOSR (const uint32_t inValue) { return (inValue & 31U) << 16 ; }

  // Field (width: 8 bits): SCDT
    inline uint32_t DFSDM_AWSCD6R_SCDT (const uint32_t inValue) { return (inValue & 255U) << 0 ; }

  // Field (width: 4 bits): BKSCD
    inline uint32_t DFSDM_AWSCD6R_BKSCD (const uint32_t inValue) { return (inValue & 15U) << 12 ; }

//-------------------- CHWDAT5R
#define DFSDM_CHWDAT5R(group) (* ((volatile uint32_t *) (kBaseAddress_DFSDM [group] + 0xAC)))
#define DFSDM_CHWDAT5R (* ((volatile uint32_t *) (0x40016000 + 0xAC)))

  // Field (width: 16 bits): WDATA
    inline uint32_t DFSDM_CHWDAT5R_WDATA (const uint32_t inValue) { return (inValue & 65535U) << 0 ; }

//-------------------- CHDATIN3R
#define DFSDM_CHDATIN3R(group) (* ((volatile uint32_t *) (kBaseAddress_DFSDM [group] + 0x70)))
#define DFSDM_CHDATIN3R (* ((volatile uint32_t *) (0x40016000 + 0x70)))

  // Field (width: 16 bits): INDAT0
    inline uint32_t DFSDM_CHDATIN3R_INDAT0 (const uint32_t inValue) { return (inValue & 65535U) << 0 ; }

  // Field (width: 16 bits): INDAT1
    inline uint32_t DFSDM_CHDATIN3R_INDAT1 (const uint32_t inValue) { return (inValue & 65535U) << 16 ; }

//-------------------- Extremes detector maximum
          register
#define DFSDM_DFSDM0_EXMAX(group) (* ((const volatile uint32_t *) (kBaseAddress_DFSDM [group] + 0x130)))
#define DFSDM_DFSDM0_EXMAX (* ((const volatile uint32_t *) (0x40016000 + 0x130)))

  // Field (width: 3 bits): Extremes detector maximum data
              channel
    inline uint32_t DFSDM_DFSDM0_EXMAX_EXMAXCH (const uint32_t inValue) { return (inValue & 7U) << 0 ; }

  // Field (width: 24 bits): Extremes detector maximum
              value
    inline uint32_t DFSDM_DFSDM0_EXMAX_EXMAX (const uint32_t inValue) { return (inValue & 16777215U) << 8 ; }

//-------------------- data register for injected
          group
#define DFSDM_DFSDM2_JDATAR(group) (* ((const volatile uint32_t *) (kBaseAddress_DFSDM [group] + 0x318)))
#define DFSDM_DFSDM2_JDATAR (* ((const volatile uint32_t *) (0x40016000 + 0x318)))

  // Field (width: 3 bits): Injected channel most recently
              converted
    inline uint32_t DFSDM_DFSDM2_JDATAR_JDATACH (const uint32_t inValue) { return (inValue & 7U) << 0 ; }

  // Field (width: 24 bits): Injected group conversion
              data
    inline uint32_t DFSDM_DFSDM2_JDATAR_JDATA (const uint32_t inValue) { return (inValue & 16777215U) << 8 ; }

//-------------------- data register for injected
          group
#define DFSDM_DFSDM1_JDATAR(group) (* ((const volatile uint32_t *) (kBaseAddress_DFSDM [group] + 0x218)))
#define DFSDM_DFSDM1_JDATAR (* ((const volatile uint32_t *) (0x40016000 + 0x218)))

  // Field (width: 3 bits): Injected channel most recently
              converted
    inline uint32_t DFSDM_DFSDM1_JDATAR_JDATACH (const uint32_t inValue) { return (inValue & 7U) << 0 ; }

  // Field (width: 24 bits): Injected group conversion
              data
    inline uint32_t DFSDM_DFSDM1_JDATAR_JDATA (const uint32_t inValue) { return (inValue & 16777215U) << 8 ; }

//-------------------- interrupt and status register
#define DFSDM_DFSDM0_ISR(group) (* ((const volatile uint32_t *) (kBaseAddress_DFSDM [group] + 0x108)))
#define DFSDM_DFSDM0_ISR (* ((const volatile uint32_t *) (0x40016000 + 0x108)))

  // Boolean field: End of regular conversion
              flag
    static const uint32_t DFSDM_DFSDM0_ISR_REOCF = 1U << 1 ;

  // Field (width: 8 bits): Clock absence flag
    inline uint32_t DFSDM_DFSDM0_ISR_CKABF (const uint32_t inValue) { return (inValue & 255U) << 16 ; }

  // Boolean field: End of injected conversion
              flag
    static const uint32_t DFSDM_DFSDM0_ISR_JEOCF = 1U << 0 ;

  // Boolean field: Analog watchdog
    static const uint32_t DFSDM_DFSDM0_ISR_AWDF = 1U << 4 ;

  // Boolean field: Regular conversion overrun
              flag
    static const uint32_t DFSDM_DFSDM0_ISR_ROVRF = 1U << 3 ;

  // Boolean field: Injected conversion in progress
              status
    static const uint32_t DFSDM_DFSDM0_ISR_JCIP = 1U << 13 ;

  // Boolean field: Injected conversion overrun
              flag
    static const uint32_t DFSDM_DFSDM0_ISR_JOVRF = 1U << 2 ;

  // Boolean field: Regular conversion in progress
              status
    static const uint32_t DFSDM_DFSDM0_ISR_RCIP = 1U << 14 ;

  // Field (width: 8 bits): short-circuit detector
              flag
    inline uint32_t DFSDM_DFSDM0_ISR_SCDF (const uint32_t inValue) { return (inValue & 255U) << 24 ; }

//-------------------- CHCFG6R2
#define DFSDM_CHCFG6R2(group) (* ((volatile uint32_t *) (kBaseAddress_DFSDM [group] + 0xC4)))
#define DFSDM_CHCFG6R2 (* ((volatile uint32_t *) (0x40016000 + 0xC4)))

  // Field (width: 5 bits): DTRBS
    inline uint32_t DFSDM_CHCFG6R2_DTRBS (const uint32_t inValue) { return (inValue & 31U) << 3 ; }

  // Field (width: 24 bits): OFFSET
    inline uint32_t DFSDM_CHCFG6R2_OFFSET (const uint32_t inValue) { return (inValue & 16777215U) << 8 ; }

//-------------------- CHCFG6R1
#define DFSDM_CHCFG6R1(group) (* ((volatile uint32_t *) (kBaseAddress_DFSDM [group] + 0xC0)))
#define DFSDM_CHCFG6R1 (* ((volatile uint32_t *) (0x40016000 + 0xC0)))

  // Boolean field: CKABEN
    static const uint32_t DFSDM_CHCFG6R1_CKABEN = 1U << 6 ;

  // Field (width: 2 bits): DATPACK
    inline uint32_t DFSDM_CHCFG6R1_DATPACK (const uint32_t inValue) { return (inValue & 3U) << 14 ; }

  // Boolean field: CHINSEL
    static const uint32_t DFSDM_CHCFG6R1_CHINSEL = 1U << 8 ;

  // Field (width: 2 bits): SITP
    inline uint32_t DFSDM_CHCFG6R1_SITP (const uint32_t inValue) { return (inValue & 3U) << 0 ; }

  // Boolean field: CHEN
    static const uint32_t DFSDM_CHCFG6R1_CHEN = 1U << 7 ;

  // Field (width: 2 bits): DATMPX
    inline uint32_t DFSDM_CHCFG6R1_DATMPX (const uint32_t inValue) { return (inValue & 3U) << 12 ; }

  // Field (width: 2 bits): SPICKSEL
    inline uint32_t DFSDM_CHCFG6R1_SPICKSEL (const uint32_t inValue) { return (inValue & 3U) << 2 ; }

  // Boolean field: SCDEN
    static const uint32_t DFSDM_CHCFG6R1_SCDEN = 1U << 5 ;

//-------------------- AWSCD1R
#define DFSDM_AWSCD1R(group) (* ((volatile uint32_t *) (kBaseAddress_DFSDM [group] + 0x28)))
#define DFSDM_AWSCD1R (* ((volatile uint32_t *) (0x40016000 + 0x28)))

  // Field (width: 2 bits): AWFORD
    inline uint32_t DFSDM_AWSCD1R_AWFORD (const uint32_t inValue) { return (inValue & 3U) << 22 ; }

  // Field (width: 5 bits): AWFOSR
    inline uint32_t DFSDM_AWSCD1R_AWFOSR (const uint32_t inValue) { return (inValue & 31U) << 16 ; }

  // Field (width: 8 bits): SCDT
    inline uint32_t DFSDM_AWSCD1R_SCDT (const uint32_t inValue) { return (inValue & 255U) << 0 ; }

  // Field (width: 4 bits): BKSCD
    inline uint32_t DFSDM_AWSCD1R_BKSCD (const uint32_t inValue) { return (inValue & 15U) << 12 ; }

//-------------------- analog watchdog high threshold
          register
#define DFSDM_DFSDM0_AWHTR(group) (* ((volatile uint32_t *) (kBaseAddress_DFSDM [group] + 0x120)))
#define DFSDM_DFSDM0_AWHTR (* ((volatile uint32_t *) (0x40016000 + 0x120)))

  // Field (width: 4 bits): Break signal assignment to analog
              watchdog high threshold event
    inline uint32_t DFSDM_DFSDM0_AWHTR_BKAWH (const uint32_t inValue) { return (inValue & 15U) << 0 ; }

  // Field (width: 24 bits): Analog watchdog high
              threshold
    inline uint32_t DFSDM_DFSDM0_AWHTR_AWHT (const uint32_t inValue) { return (inValue & 16777215U) << 8 ; }

//-------------------- interrupt flag clear register
#define DFSDM_DFSDM0_ICR(group) (* ((volatile uint32_t *) (kBaseAddress_DFSDM [group] + 0x10C)))
#define DFSDM_DFSDM0_ICR (* ((volatile uint32_t *) (0x40016000 + 0x10C)))

  // Field (width: 8 bits): Clear the short-circuit detector
              flag
    inline uint32_t DFSDM_DFSDM0_ICR_CLRSCDF (const uint32_t inValue) { return (inValue & 255U) << 24 ; }

  // Field (width: 8 bits): Clear the clock absence
              flag
    inline uint32_t DFSDM_DFSDM0_ICR_CLRCKABF (const uint32_t inValue) { return (inValue & 255U) << 16 ; }

  // Boolean field: Clear the injected conversion overrun
              flag
    static const uint32_t DFSDM_DFSDM0_ICR_CLRJOVRF = 1U << 2 ;

  // Boolean field: Clear the regular conversion overrun
              flag
    static const uint32_t DFSDM_DFSDM0_ICR_CLRROVRF = 1U << 3 ;

//-------------------- Extremes detector minimum
          register
#define DFSDM_DFSDM0_EXMIN(group) (* ((const volatile uint32_t *) (kBaseAddress_DFSDM [group] + 0x134)))
#define DFSDM_DFSDM0_EXMIN (* ((const volatile uint32_t *) (0x40016000 + 0x134)))

  // Field (width: 24 bits): EXMIN
    inline uint32_t DFSDM_DFSDM0_EXMIN_EXMIN (const uint32_t inValue) { return (inValue & 16777215U) << 8 ; }

  // Field (width: 3 bits): Extremes detector minimum data
              channel
    inline uint32_t DFSDM_DFSDM0_EXMIN_EXMINCH (const uint32_t inValue) { return (inValue & 7U) << 0 ; }

//-------------------- CHDATIN4R
#define DFSDM_CHDATIN4R(group) (* ((volatile uint32_t *) (kBaseAddress_DFSDM [group] + 0x90)))
#define DFSDM_CHDATIN4R (* ((volatile uint32_t *) (0x40016000 + 0x90)))

  // Field (width: 16 bits): INDAT0
    inline uint32_t DFSDM_CHDATIN4R_INDAT0 (const uint32_t inValue) { return (inValue & 65535U) << 0 ; }

  // Field (width: 16 bits): INDAT1
    inline uint32_t DFSDM_CHDATIN4R_INDAT1 (const uint32_t inValue) { return (inValue & 65535U) << 16 ; }

//-------------------- Extremes detector minimum
          register
#define DFSDM_DFSDM2_EXMIN(group) (* ((const volatile uint32_t *) (kBaseAddress_DFSDM [group] + 0x334)))
#define DFSDM_DFSDM2_EXMIN (* ((const volatile uint32_t *) (0x40016000 + 0x334)))

  // Field (width: 24 bits): EXMIN
    inline uint32_t DFSDM_DFSDM2_EXMIN_EXMIN (const uint32_t inValue) { return (inValue & 16777215U) << 8 ; }

  // Field (width: 3 bits): Extremes detector minimum data
              channel
    inline uint32_t DFSDM_DFSDM2_EXMIN_EXMINCH (const uint32_t inValue) { return (inValue & 7U) << 0 ; }

//-------------------- data register for the regular
          channel
#define DFSDM_DFSDM2_RDATAR(group) (* ((const volatile uint32_t *) (kBaseAddress_DFSDM [group] + 0x31C)))
#define DFSDM_DFSDM2_RDATAR (* ((const volatile uint32_t *) (0x40016000 + 0x31C)))

  // Boolean field: Regular channel pending
              data
    static const uint32_t DFSDM_DFSDM2_RDATAR_RPEND = 1U << 4 ;

  // Field (width: 3 bits): Regular channel most recently
              converted
    inline uint32_t DFSDM_DFSDM2_RDATAR_RDATACH (const uint32_t inValue) { return (inValue & 7U) << 0 ; }

  // Field (width: 24 bits): Regular channel conversion
              data
    inline uint32_t DFSDM_DFSDM2_RDATAR_RDATA (const uint32_t inValue) { return (inValue & 16777215U) << 8 ; }

//-------------------- analog watchdog clear flag
          register
#define DFSDM_DFSDM0_AWCFR(group) (* ((volatile uint32_t *) (kBaseAddress_DFSDM [group] + 0x12C)))
#define DFSDM_DFSDM0_AWCFR (* ((volatile uint32_t *) (0x40016000 + 0x12C)))

  // Field (width: 8 bits): Clear the analog watchdog low threshold
              flag
    inline uint32_t DFSDM_DFSDM0_AWCFR_CLRAWLTF (const uint32_t inValue) { return (inValue & 255U) << 0 ; }

  // Field (width: 8 bits): Clear the analog watchdog high threshold
              flag
    inline uint32_t DFSDM_DFSDM0_AWCFR_CLRAWHTF (const uint32_t inValue) { return (inValue & 255U) << 8 ; }

//-------------------- analog watchdog low threshold
          register
#define DFSDM_DFSDM1_AWLTR(group) (* ((volatile uint32_t *) (kBaseAddress_DFSDM [group] + 0x224)))
#define DFSDM_DFSDM1_AWLTR (* ((volatile uint32_t *) (0x40016000 + 0x224)))

  // Field (width: 24 bits): Analog watchdog low
              threshold
    inline uint32_t DFSDM_DFSDM1_AWLTR_AWLT (const uint32_t inValue) { return (inValue & 16777215U) << 8 ; }

  // Field (width: 4 bits): Break signal assignment to analog
              watchdog low threshold event
    inline uint32_t DFSDM_DFSDM1_AWLTR_BKAWL (const uint32_t inValue) { return (inValue & 15U) << 0 ; }

//-------------------- injected channel group selection
          register
#define DFSDM_DFSDM3_JCHGR(group) (* ((volatile uint32_t *) (kBaseAddress_DFSDM [group] + 0x410)))
#define DFSDM_DFSDM3_JCHGR (* ((volatile uint32_t *) (0x40016000 + 0x410)))

  // Field (width: 8 bits): Injected channel group
              selection
    inline uint32_t DFSDM_DFSDM3_JCHGR_JCHG (const uint32_t inValue) { return (inValue & 255U) << 0 ; }

//-------------------- data register for the regular
          channel
#define DFSDM_DFSDM1_RDATAR(group) (* ((const volatile uint32_t *) (kBaseAddress_DFSDM [group] + 0x21C)))
#define DFSDM_DFSDM1_RDATAR (* ((const volatile uint32_t *) (0x40016000 + 0x21C)))

  // Boolean field: Regular channel pending
              data
    static const uint32_t DFSDM_DFSDM1_RDATAR_RPEND = 1U << 4 ;

  // Field (width: 3 bits): Regular channel most recently
              converted
    inline uint32_t DFSDM_DFSDM1_RDATAR_RDATACH (const uint32_t inValue) { return (inValue & 7U) << 0 ; }

  // Field (width: 24 bits): Regular channel conversion
              data
    inline uint32_t DFSDM_DFSDM1_RDATAR_RDATA (const uint32_t inValue) { return (inValue & 16777215U) << 8 ; }

//-------------------- CHWDAT4R
#define DFSDM_CHWDAT4R(group) (* ((volatile uint32_t *) (kBaseAddress_DFSDM [group] + 0x8C)))
#define DFSDM_CHWDAT4R (* ((volatile uint32_t *) (0x40016000 + 0x8C)))

  // Field (width: 16 bits): WDATA
    inline uint32_t DFSDM_CHWDAT4R_WDATA (const uint32_t inValue) { return (inValue & 65535U) << 0 ; }

//-------------------- CHDATIN1R
#define DFSDM_CHDATIN1R(group) (* ((volatile uint32_t *) (kBaseAddress_DFSDM [group] + 0x30)))
#define DFSDM_CHDATIN1R (* ((volatile uint32_t *) (0x40016000 + 0x30)))

  // Field (width: 16 bits): INDAT0
    inline uint32_t DFSDM_CHDATIN1R_INDAT0 (const uint32_t inValue) { return (inValue & 65535U) << 0 ; }

  // Field (width: 16 bits): INDAT1
    inline uint32_t DFSDM_CHDATIN1R_INDAT1 (const uint32_t inValue) { return (inValue & 65535U) << 16 ; }

//-------------------- AWSCD4R
#define DFSDM_AWSCD4R(group) (* ((volatile uint32_t *) (kBaseAddress_DFSDM [group] + 0x88)))
#define DFSDM_AWSCD4R (* ((volatile uint32_t *) (0x40016000 + 0x88)))

  // Field (width: 2 bits): AWFORD
    inline uint32_t DFSDM_AWSCD4R_AWFORD (const uint32_t inValue) { return (inValue & 3U) << 22 ; }

  // Field (width: 5 bits): AWFOSR
    inline uint32_t DFSDM_AWSCD4R_AWFOSR (const uint32_t inValue) { return (inValue & 31U) << 16 ; }

  // Field (width: 8 bits): SCDT
    inline uint32_t DFSDM_AWSCD4R_SCDT (const uint32_t inValue) { return (inValue & 255U) << 0 ; }

  // Field (width: 4 bits): BKSCD
    inline uint32_t DFSDM_AWSCD4R_BKSCD (const uint32_t inValue) { return (inValue & 15U) << 12 ; }

//-------------------- CHWDAT7R
#define DFSDM_CHWDAT7R(group) (* ((volatile uint32_t *) (kBaseAddress_DFSDM [group] + 0xEC)))
#define DFSDM_CHWDAT7R (* ((volatile uint32_t *) (0x40016000 + 0xEC)))

  // Field (width: 16 bits): WDATA
    inline uint32_t DFSDM_CHWDAT7R_WDATA (const uint32_t inValue) { return (inValue & 65535U) << 0 ; }

//-------------------- analog watchdog status
          register
#define DFSDM_DFSDM2_AWSR(group) (* ((const volatile uint32_t *) (kBaseAddress_DFSDM [group] + 0x328)))
#define DFSDM_DFSDM2_AWSR (* ((const volatile uint32_t *) (0x40016000 + 0x328)))

  // Field (width: 8 bits): Analog watchdog high threshold
              flag
    inline uint32_t DFSDM_DFSDM2_AWSR_AWHTF (const uint32_t inValue) { return (inValue & 255U) << 8 ; }

  // Field (width: 8 bits): Analog watchdog low threshold
              flag
    inline uint32_t DFSDM_DFSDM2_AWSR_AWLTF (const uint32_t inValue) { return (inValue & 255U) << 0 ; }

//-------------------- conversion timer register
#define DFSDM_DFSDM0_CNVTIMR(group) (* ((const volatile uint32_t *) (kBaseAddress_DFSDM [group] + 0x138)))
#define DFSDM_DFSDM0_CNVTIMR (* ((const volatile uint32_t *) (0x40016000 + 0x138)))

  // Field (width: 28 bits): 28-bit timer counting conversion time t
              = CNVCNT[27:0] / fDFSDM_CKIN
    inline uint32_t DFSDM_DFSDM0_CNVTIMR_CNVCNT (const uint32_t inValue) { return (inValue & 268435455U) << 4 ; }

//-------------------- channel configuration y
          register
#define DFSDM_CHCFG0R1(group) (* ((volatile uint32_t *) (kBaseAddress_DFSDM [group] + 0x0)))
#define DFSDM_CHCFG0R1 (* ((volatile uint32_t *) (0x40016000 + 0x0)))

  // Field (width: 8 bits): CKOUTDIV
    inline uint32_t DFSDM_CHCFG0R1_CKOUTDIV (const uint32_t inValue) { return (inValue & 255U) << 16 ; }

  // Boolean field: CKABEN
    static const uint32_t DFSDM_CHCFG0R1_CKABEN = 1U << 6 ;

  // Field (width: 2 bits): DATPACK
    inline uint32_t DFSDM_CHCFG0R1_DATPACK (const uint32_t inValue) { return (inValue & 3U) << 14 ; }

  // Boolean field: CHINSEL
    static const uint32_t DFSDM_CHCFG0R1_CHINSEL = 1U << 8 ;

  // Boolean field: CKOUTSRC
    static const uint32_t DFSDM_CHCFG0R1_CKOUTSRC = 1U << 30 ;

  // Field (width: 2 bits): SITP
    inline uint32_t DFSDM_CHCFG0R1_SITP (const uint32_t inValue) { return (inValue & 3U) << 0 ; }

  // Boolean field: DFSDMEN
    static const uint32_t DFSDM_CHCFG0R1_DFSDMEN = 1U << 31 ;

  // Boolean field: CHEN
    static const uint32_t DFSDM_CHCFG0R1_CHEN = 1U << 7 ;

  // Field (width: 2 bits): DATMPX
    inline uint32_t DFSDM_CHCFG0R1_DATMPX (const uint32_t inValue) { return (inValue & 3U) << 12 ; }

  // Field (width: 2 bits): SPICKSEL
    inline uint32_t DFSDM_CHCFG0R1_SPICKSEL (const uint32_t inValue) { return (inValue & 3U) << 2 ; }

  // Boolean field: SCDEN
    static const uint32_t DFSDM_CHCFG0R1_SCDEN = 1U << 5 ;

//-------------------- channel configuration y
          register
#define DFSDM_CHCFG0R2(group) (* ((volatile uint32_t *) (kBaseAddress_DFSDM [group] + 0x4)))
#define DFSDM_CHCFG0R2 (* ((volatile uint32_t *) (0x40016000 + 0x4)))

  // Field (width: 5 bits): DTRBS
    inline uint32_t DFSDM_CHCFG0R2_DTRBS (const uint32_t inValue) { return (inValue & 31U) << 3 ; }

  // Field (width: 24 bits): OFFSET
    inline uint32_t DFSDM_CHCFG0R2_OFFSET (const uint32_t inValue) { return (inValue & 16777215U) << 8 ; }

//-------------------- analog watchdog clear flag
          register
#define DFSDM_DFSDM2_AWCFR(group) (* ((volatile uint32_t *) (kBaseAddress_DFSDM [group] + 0x32C)))
#define DFSDM_DFSDM2_AWCFR (* ((volatile uint32_t *) (0x40016000 + 0x32C)))

  // Field (width: 8 bits): Clear the analog watchdog low threshold
              flag
    inline uint32_t DFSDM_DFSDM2_AWCFR_CLRAWLTF (const uint32_t inValue) { return (inValue & 255U) << 0 ; }

  // Field (width: 8 bits): Clear the analog watchdog high threshold
              flag
    inline uint32_t DFSDM_DFSDM2_AWCFR_CLRAWHTF (const uint32_t inValue) { return (inValue & 255U) << 8 ; }

//-------------------- CHDATIN6R
#define DFSDM_CHDATIN6R(group) (* ((volatile uint32_t *) (kBaseAddress_DFSDM [group] + 0xD0)))
#define DFSDM_CHDATIN6R (* ((volatile uint32_t *) (0x40016000 + 0xD0)))

  // Field (width: 16 bits): INDAT0
    inline uint32_t DFSDM_CHDATIN6R_INDAT0 (const uint32_t inValue) { return (inValue & 65535U) << 0 ; }

  // Field (width: 16 bits): INDAT1
    inline uint32_t DFSDM_CHDATIN6R_INDAT1 (const uint32_t inValue) { return (inValue & 65535U) << 16 ; }

//-------------------- injected channel group selection
          register
#define DFSDM_DFSDM2_JCHGR(group) (* ((volatile uint32_t *) (kBaseAddress_DFSDM [group] + 0x310)))
#define DFSDM_DFSDM2_JCHGR (* ((volatile uint32_t *) (0x40016000 + 0x310)))

  // Field (width: 8 bits): Injected channel group
              selection
    inline uint32_t DFSDM_DFSDM2_JCHGR_JCHG (const uint32_t inValue) { return (inValue & 255U) << 0 ; }

//-------------------- analog watchdog high threshold
          register
#define DFSDM_DFSDM1_AWHTR(group) (* ((volatile uint32_t *) (kBaseAddress_DFSDM [group] + 0x220)))
#define DFSDM_DFSDM1_AWHTR (* ((volatile uint32_t *) (0x40016000 + 0x220)))

  // Field (width: 4 bits): Break signal assignment to analog
              watchdog high threshold event
    inline uint32_t DFSDM_DFSDM1_AWHTR_BKAWH (const uint32_t inValue) { return (inValue & 15U) << 0 ; }

  // Field (width: 24 bits): Analog watchdog high
              threshold
    inline uint32_t DFSDM_DFSDM1_AWHTR_AWHT (const uint32_t inValue) { return (inValue & 16777215U) << 8 ; }

//-------------------- CHCFG4R1
#define DFSDM_CHCFG4R1(group) (* ((volatile uint32_t *) (kBaseAddress_DFSDM [group] + 0x80)))
#define DFSDM_CHCFG4R1 (* ((volatile uint32_t *) (0x40016000 + 0x80)))

  // Boolean field: CKABEN
    static const uint32_t DFSDM_CHCFG4R1_CKABEN = 1U << 6 ;

  // Field (width: 2 bits): DATPACK
    inline uint32_t DFSDM_CHCFG4R1_DATPACK (const uint32_t inValue) { return (inValue & 3U) << 14 ; }

  // Boolean field: CHINSEL
    static const uint32_t DFSDM_CHCFG4R1_CHINSEL = 1U << 8 ;

  // Field (width: 2 bits): SITP
    inline uint32_t DFSDM_CHCFG4R1_SITP (const uint32_t inValue) { return (inValue & 3U) << 0 ; }

  // Boolean field: CHEN
    static const uint32_t DFSDM_CHCFG4R1_CHEN = 1U << 7 ;

  // Field (width: 2 bits): DATMPX
    inline uint32_t DFSDM_CHCFG4R1_DATMPX (const uint32_t inValue) { return (inValue & 3U) << 12 ; }

  // Field (width: 2 bits): SPICKSEL
    inline uint32_t DFSDM_CHCFG4R1_SPICKSEL (const uint32_t inValue) { return (inValue & 3U) << 2 ; }

  // Boolean field: SCDEN
    static const uint32_t DFSDM_CHCFG4R1_SCDEN = 1U << 5 ;

//-------------------- AWSCD7R
#define DFSDM_AWSCD7R(group) (* ((volatile uint32_t *) (kBaseAddress_DFSDM [group] + 0xE8)))
#define DFSDM_AWSCD7R (* ((volatile uint32_t *) (0x40016000 + 0xE8)))

  // Field (width: 2 bits): AWFORD
    inline uint32_t DFSDM_AWSCD7R_AWFORD (const uint32_t inValue) { return (inValue & 3U) << 22 ; }

  // Field (width: 5 bits): AWFOSR
    inline uint32_t DFSDM_AWSCD7R_AWFOSR (const uint32_t inValue) { return (inValue & 31U) << 16 ; }

  // Field (width: 8 bits): SCDT
    inline uint32_t DFSDM_AWSCD7R_SCDT (const uint32_t inValue) { return (inValue & 255U) << 0 ; }

  // Field (width: 4 bits): BKSCD
    inline uint32_t DFSDM_AWSCD7R_BKSCD (const uint32_t inValue) { return (inValue & 15U) << 12 ; }

//-------------------- CHCFG4R2
#define DFSDM_CHCFG4R2(group) (* ((volatile uint32_t *) (kBaseAddress_DFSDM [group] + 0x84)))
#define DFSDM_CHCFG4R2 (* ((volatile uint32_t *) (0x40016000 + 0x84)))

  // Field (width: 5 bits): DTRBS
    inline uint32_t DFSDM_CHCFG4R2_DTRBS (const uint32_t inValue) { return (inValue & 31U) << 3 ; }

  // Field (width: 24 bits): OFFSET
    inline uint32_t DFSDM_CHCFG4R2_OFFSET (const uint32_t inValue) { return (inValue & 16777215U) << 8 ; }

//-------------------- CHCFG2R2
#define DFSDM_CHCFG2R2(group) (* ((volatile uint32_t *) (kBaseAddress_DFSDM [group] + 0x44)))
#define DFSDM_CHCFG2R2 (* ((volatile uint32_t *) (0x40016000 + 0x44)))

  // Field (width: 5 bits): DTRBS
    inline uint32_t DFSDM_CHCFG2R2_DTRBS (const uint32_t inValue) { return (inValue & 31U) << 3 ; }

  // Field (width: 24 bits): OFFSET
    inline uint32_t DFSDM_CHCFG2R2_OFFSET (const uint32_t inValue) { return (inValue & 16777215U) << 8 ; }

//-------------------- CHCFG2R1
#define DFSDM_CHCFG2R1(group) (* ((volatile uint32_t *) (kBaseAddress_DFSDM [group] + 0x40)))
#define DFSDM_CHCFG2R1 (* ((volatile uint32_t *) (0x40016000 + 0x40)))

  // Boolean field: CKABEN
    static const uint32_t DFSDM_CHCFG2R1_CKABEN = 1U << 6 ;

  // Field (width: 2 bits): DATPACK
    inline uint32_t DFSDM_CHCFG2R1_DATPACK (const uint32_t inValue) { return (inValue & 3U) << 14 ; }

  // Boolean field: CHINSEL
    static const uint32_t DFSDM_CHCFG2R1_CHINSEL = 1U << 8 ;

  // Field (width: 2 bits): SITP
    inline uint32_t DFSDM_CHCFG2R1_SITP (const uint32_t inValue) { return (inValue & 3U) << 0 ; }

  // Boolean field: CHEN
    static const uint32_t DFSDM_CHCFG2R1_CHEN = 1U << 7 ;

  // Field (width: 2 bits): DATMPX
    inline uint32_t DFSDM_CHCFG2R1_DATMPX (const uint32_t inValue) { return (inValue & 3U) << 12 ; }

  // Field (width: 2 bits): SPICKSEL
    inline uint32_t DFSDM_CHCFG2R1_SPICKSEL (const uint32_t inValue) { return (inValue & 3U) << 2 ; }

  // Boolean field: SCDEN
    static const uint32_t DFSDM_CHCFG2R1_SCDEN = 1U << 5 ;

//-------------------- control register 2
#define DFSDM_DFSDM1_CR2(group) (* ((volatile uint32_t *) (kBaseAddress_DFSDM [group] + 0x204)))
#define DFSDM_DFSDM1_CR2 (* ((volatile uint32_t *) (0x40016000 + 0x204)))

  // Boolean field: Analog watchdog interrupt
              enable
    static const uint32_t DFSDM_DFSDM1_CR2_AWDIE = 1U << 4 ;

  // Boolean field: Short-circuit detector interrupt
              enable
    static const uint32_t DFSDM_DFSDM1_CR2_SCDIE = 1U << 5 ;

  // Boolean field: Clock absence interrupt
              enable
    static const uint32_t DFSDM_DFSDM1_CR2_CKABIE = 1U << 6 ;

  // Field (width: 8 bits): Analog watchdog channel
              selection
    inline uint32_t DFSDM_DFSDM1_CR2_AWDCH (const uint32_t inValue) { return (inValue & 255U) << 16 ; }

  // Boolean field: Regular data overrun interrupt
              enable
    static const uint32_t DFSDM_DFSDM1_CR2_ROVRIE = 1U << 3 ;

  // Boolean field: Injected data overrun interrupt
              enable
    static const uint32_t DFSDM_DFSDM1_CR2_JOVRIE = 1U << 2 ;

  // Boolean field: Regular end of conversion interrupt
              enable
    static const uint32_t DFSDM_DFSDM1_CR2_REOCIE = 1U << 1 ;

  // Field (width: 8 bits): Extremes detector channel
              selection
    inline uint32_t DFSDM_DFSDM1_CR2_EXCH (const uint32_t inValue) { return (inValue & 255U) << 8 ; }

  // Boolean field: Injected end of conversion interrupt
              enable
    static const uint32_t DFSDM_DFSDM1_CR2_JEOCIE = 1U << 0 ;

//-------------------- control register 1
#define DFSDM_DFSDM1_CR1(group) (* ((volatile uint32_t *) (kBaseAddress_DFSDM [group] + 0x200)))
#define DFSDM_DFSDM1_CR1 (* ((volatile uint32_t *) (0x40016000 + 0x200)))

  // Boolean field: Launch regular conversion synchronously
              with DFSDM0
    static const uint32_t DFSDM_DFSDM1_CR1_RSYNC = 1U << 19 ;

  // Boolean field: Start a conversion of the injected group
              of channels
    static const uint32_t DFSDM_DFSDM1_CR1_JSWSTART = 1U << 1 ;

  // Boolean field: Continuous mode selection for regular
              conversions
    static const uint32_t DFSDM_DFSDM1_CR1_RCONT = 1U << 18 ;

  // Boolean field: Scanning conversion mode for injected
              conversions
    static const uint32_t DFSDM_DFSDM1_CR1_JSCAN = 1U << 4 ;

  // Boolean field: Fast conversion mode selection for
              regular conversions
    static const uint32_t DFSDM_DFSDM1_CR1_FAST = 1U << 29 ;

  // Field (width: 2 bits): Trigger enable and trigger edge
              selection for injected conversions
    inline uint32_t DFSDM_DFSDM1_CR1_JEXTEN (const uint32_t inValue) { return (inValue & 3U) << 13 ; }

  // Field (width: 3 bits): Regular channel selection
    inline uint32_t DFSDM_DFSDM1_CR1_RCH (const uint32_t inValue) { return (inValue & 7U) << 24 ; }

  // Field (width: 3 bits): Trigger signal selection for launching
              injected conversions
    inline uint32_t DFSDM_DFSDM1_CR1_JEXTSEL (const uint32_t inValue) { return (inValue & 7U) << 8 ; }

  // Boolean field: DMA channel enabled to read data for the
              regular conversion
    static const uint32_t DFSDM_DFSDM1_CR1_RDMAEN = 1U << 21 ;

  // Boolean field: Software start of a conversion on the
              regular channel
    static const uint32_t DFSDM_DFSDM1_CR1_RSWSTART = 1U << 17 ;

  // Boolean field: Launch an injected conversion
              synchronously with the DFSDM0 JSWSTART
              trigger
    static const uint32_t DFSDM_DFSDM1_CR1_JSYNC = 1U << 3 ;

  // Boolean field: DFSDM enable
    static const uint32_t DFSDM_DFSDM1_CR1_DFEN = 1U << 0 ;

  // Boolean field: Analog watchdog fast mode
              select
    static const uint32_t DFSDM_DFSDM1_CR1_AWFSEL = 1U << 30 ;

  // Boolean field: DMA channel enabled to read data for the
              injected channel group
    static const uint32_t DFSDM_DFSDM1_CR1_JDMAEN = 1U << 5 ;

//-------------------- CHDATIN2R
#define DFSDM_CHDATIN2R(group) (* ((volatile uint32_t *) (kBaseAddress_DFSDM [group] + 0x50)))
#define DFSDM_CHDATIN2R (* ((volatile uint32_t *) (0x40016000 + 0x50)))

  // Field (width: 16 bits): INDAT0
    inline uint32_t DFSDM_CHDATIN2R_INDAT0 (const uint32_t inValue) { return (inValue & 65535U) << 0 ; }

  // Field (width: 16 bits): INDAT1
    inline uint32_t DFSDM_CHDATIN2R_INDAT1 (const uint32_t inValue) { return (inValue & 65535U) << 16 ; }

//-------------------- filter control register
#define DFSDM_DFSDM0_FCR(group) (* ((volatile uint32_t *) (kBaseAddress_DFSDM [group] + 0x114)))
#define DFSDM_DFSDM0_FCR (* ((volatile uint32_t *) (0x40016000 + 0x114)))

  // Field (width: 10 bits): Sinc filter oversampling ratio
              (decimation rate)
    inline uint32_t DFSDM_DFSDM0_FCR_FOSR (const uint32_t inValue) { return (inValue & 1023U) << 16 ; }

  // Field (width: 8 bits): Integrator oversampling ratio (averaging
              length)
    inline uint32_t DFSDM_DFSDM0_FCR_IOSR (const uint32_t inValue) { return (inValue & 255U) << 0 ; }

  // Field (width: 3 bits): Sinc filter order
    inline uint32_t DFSDM_DFSDM0_FCR_FORD (const uint32_t inValue) { return (inValue & 7U) << 29 ; }

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
// Peripheral group DMA
//                DMA1 at 0x40020000
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

static const uint32_t kBaseAddress_DMA [1] = {0x40020000} ;

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

//-------------------- channel x number of data
          register
#define DMA_CNDTR3(group) (* ((volatile uint32_t *) (kBaseAddress_DMA [group] + 0x34)))
#define DMA1_CNDTR3 (* ((volatile uint32_t *) (0x40020000 + 0x34)))

  // Field (width: 16 bits): Number of data to transfer
    inline uint32_t DMA_CNDTR3_NDT (const uint32_t inValue) { return (inValue & 65535U) << 0 ; }

//-------------------- channel x number of data
          register
#define DMA_CNDTR2(group) (* ((volatile uint32_t *) (kBaseAddress_DMA [group] + 0x20)))
#define DMA1_CNDTR2 (* ((volatile uint32_t *) (0x40020000 + 0x20)))

  // Field (width: 16 bits): Number of data to transfer
    inline uint32_t DMA_CNDTR2_NDT (const uint32_t inValue) { return (inValue & 65535U) << 0 ; }

//-------------------- channel x number of data
          register
#define DMA_CNDTR1(group) (* ((volatile uint32_t *) (kBaseAddress_DMA [group] + 0xC)))
#define DMA1_CNDTR1 (* ((volatile uint32_t *) (0x40020000 + 0xC)))

  // Field (width: 16 bits): Number of data to transfer
    inline uint32_t DMA_CNDTR1_NDT (const uint32_t inValue) { return (inValue & 65535U) << 0 ; }

//-------------------- channel x number of data
          register
#define DMA_CNDTR7(group) (* ((volatile uint32_t *) (kBaseAddress_DMA [group] + 0x84)))
#define DMA1_CNDTR7 (* ((volatile uint32_t *) (0x40020000 + 0x84)))

  // Field (width: 16 bits): Number of data to transfer
    inline uint32_t DMA_CNDTR7_NDT (const uint32_t inValue) { return (inValue & 65535U) << 0 ; }

//-------------------- channel x number of data
          register
#define DMA_CNDTR6(group) (* ((volatile uint32_t *) (kBaseAddress_DMA [group] + 0x70)))
#define DMA1_CNDTR6 (* ((volatile uint32_t *) (0x40020000 + 0x70)))

  // Field (width: 16 bits): Number of data to transfer
    inline uint32_t DMA_CNDTR6_NDT (const uint32_t inValue) { return (inValue & 65535U) << 0 ; }

//-------------------- channel x number of data
          register
#define DMA_CNDTR5(group) (* ((volatile uint32_t *) (kBaseAddress_DMA [group] + 0x5C)))
#define DMA1_CNDTR5 (* ((volatile uint32_t *) (0x40020000 + 0x5C)))

  // Field (width: 16 bits): Number of data to transfer
    inline uint32_t DMA_CNDTR5_NDT (const uint32_t inValue) { return (inValue & 65535U) << 0 ; }

//-------------------- channel x number of data
          register
#define DMA_CNDTR4(group) (* ((volatile uint32_t *) (kBaseAddress_DMA [group] + 0x48)))
#define DMA1_CNDTR4 (* ((volatile uint32_t *) (0x40020000 + 0x48)))

  // Field (width: 16 bits): Number of data to transfer
    inline uint32_t DMA_CNDTR4_NDT (const uint32_t inValue) { return (inValue & 65535U) << 0 ; }

//-------------------- interrupt status register
#define DMA_ISR(group) (* ((const volatile uint32_t *) (kBaseAddress_DMA [group] + 0x0)))
#define DMA1_ISR (* ((const volatile uint32_t *) (0x40020000 + 0x0)))

  // Boolean field: Channel x half transfer flag (x = 1
              ..7)
    static const uint32_t DMA_ISR_HTIF6 = 1U << 22 ;

  // Boolean field: Channel x half transfer flag (x = 1
              ..7)
    static const uint32_t DMA_ISR_HTIF7 = 1U << 26 ;

  // Boolean field: Channel x half transfer flag (x = 1
              ..7)
    static const uint32_t DMA_ISR_HTIF4 = 1U << 14 ;

  // Boolean field: Channel x half transfer flag (x = 1
              ..7)
    static const uint32_t DMA_ISR_HTIF5 = 1U << 18 ;

  // Boolean field: Channel x half transfer flag (x = 1
              ..7)
    static const uint32_t DMA_ISR_HTIF2 = 1U << 6 ;

  // Boolean field: Channel x half transfer flag (x = 1
              ..7)
    static const uint32_t DMA_ISR_HTIF3 = 1U << 10 ;

  // Boolean field: Channel x half transfer flag (x = 1
              ..7)
    static const uint32_t DMA_ISR_HTIF1 = 1U << 2 ;

  // Boolean field: Channel x transfer complete flag (x = 1
              ..7)
    static const uint32_t DMA_ISR_TCIF3 = 1U << 9 ;

  // Boolean field: Channel x transfer complete flag (x = 1
              ..7)
    static const uint32_t DMA_ISR_TCIF2 = 1U << 5 ;

  // Boolean field: Channel x transfer complete flag (x = 1
              ..7)
    static const uint32_t DMA_ISR_TCIF1 = 1U << 1 ;

  // Boolean field: Channel x transfer complete flag (x = 1
              ..7)
    static const uint32_t DMA_ISR_TCIF7 = 1U << 25 ;

  // Boolean field: Channel x transfer complete flag (x = 1
              ..7)
    static const uint32_t DMA_ISR_TCIF6 = 1U << 21 ;

  // Boolean field: Channel x transfer complete flag (x = 1
              ..7)
    static const uint32_t DMA_ISR_TCIF5 = 1U << 17 ;

  // Boolean field: Channel x transfer complete flag (x = 1
              ..7)
    static const uint32_t DMA_ISR_TCIF4 = 1U << 13 ;

  // Boolean field: Channel x global interrupt flag (x = 1
              ..7)
    static const uint32_t DMA_ISR_GIF2 = 1U << 4 ;

  // Boolean field: Channel x global interrupt flag (x = 1
              ..7)
    static const uint32_t DMA_ISR_GIF3 = 1U << 8 ;

  // Boolean field: Channel x global interrupt flag (x = 1
              ..7)
    static const uint32_t DMA_ISR_GIF1 = 1U << 0 ;

  // Boolean field: Channel x global interrupt flag (x = 1
              ..7)
    static const uint32_t DMA_ISR_GIF6 = 1U << 20 ;

  // Boolean field: Channel x global interrupt flag (x = 1
              ..7)
    static const uint32_t DMA_ISR_GIF7 = 1U << 24 ;

  // Boolean field: Channel x global interrupt flag (x = 1
              ..7)
    static const uint32_t DMA_ISR_GIF4 = 1U << 12 ;

  // Boolean field: Channel x global interrupt flag (x = 1
              ..7)
    static const uint32_t DMA_ISR_GIF5 = 1U << 16 ;

  // Boolean field: Channel x transfer error flag (x = 1
              ..7)
    static const uint32_t DMA_ISR_TEIF5 = 1U << 19 ;

  // Boolean field: Channel x transfer error flag (x = 1
              ..7)
    static const uint32_t DMA_ISR_TEIF4 = 1U << 15 ;

  // Boolean field: Channel x transfer error flag (x = 1
              ..7)
    static const uint32_t DMA_ISR_TEIF7 = 1U << 27 ;

  // Boolean field: Channel x transfer error flag (x = 1
              ..7)
    static const uint32_t DMA_ISR_TEIF6 = 1U << 23 ;

  // Boolean field: Channel x transfer error flag (x = 1
              ..7)
    static const uint32_t DMA_ISR_TEIF1 = 1U << 3 ;

  // Boolean field: Channel x transfer error flag (x = 1
              ..7)
    static const uint32_t DMA_ISR_TEIF3 = 1U << 11 ;

  // Boolean field: Channel x transfer error flag (x = 1
              ..7)
    static const uint32_t DMA_ISR_TEIF2 = 1U << 7 ;

//-------------------- channel x configuration
          register
#define DMA_CCR1(group) (* ((volatile uint32_t *) (kBaseAddress_DMA [group] + 0x8)))
#define DMA1_CCR1 (* ((volatile uint32_t *) (0x40020000 + 0x8)))

  // Boolean field: Memory to memory mode
    static const uint32_t DMA_CCR1_MEM2MEM = 1U << 14 ;

  // Boolean field: Channel enable
    static const uint32_t DMA_CCR1_EN = 1U << 0 ;

  // Boolean field: Half transfer interrupt
              enable
    static const uint32_t DMA_CCR1_HTIE = 1U << 2 ;

  // Boolean field: Transfer error interrupt
              enable
    static const uint32_t DMA_CCR1_TEIE = 1U << 3 ;

  // Boolean field: Peripheral increment mode
    static const uint32_t DMA_CCR1_PINC = 1U << 6 ;

  // Boolean field: Memory increment mode
    static const uint32_t DMA_CCR1_MINC = 1U << 7 ;

  // Field (width: 2 bits): Peripheral size
    inline uint32_t DMA_CCR1_PSIZE (const uint32_t inValue) { return (inValue & 3U) << 8 ; }

  // Field (width: 2 bits): Memory size
    inline uint32_t DMA_CCR1_MSIZE (const uint32_t inValue) { return (inValue & 3U) << 10 ; }

  // Boolean field: Circular mode
    static const uint32_t DMA_CCR1_CIRC = 1U << 5 ;

  // Boolean field: Data transfer direction
    static const uint32_t DMA_CCR1_DIR = 1U << 4 ;

  // Boolean field: Transfer complete interrupt
              enable
    static const uint32_t DMA_CCR1_TCIE = 1U << 1 ;

  // Field (width: 2 bits): Channel priority level
    inline uint32_t DMA_CCR1_PL (const uint32_t inValue) { return (inValue & 3U) << 12 ; }

//-------------------- channel x configuration
          register
#define DMA_CCR2(group) (* ((volatile uint32_t *) (kBaseAddress_DMA [group] + 0x1C)))
#define DMA1_CCR2 (* ((volatile uint32_t *) (0x40020000 + 0x1C)))

  // Boolean field: Memory to memory mode
    static const uint32_t DMA_CCR2_MEM2MEM = 1U << 14 ;

  // Boolean field: Channel enable
    static const uint32_t DMA_CCR2_EN = 1U << 0 ;

  // Boolean field: Half transfer interrupt
              enable
    static const uint32_t DMA_CCR2_HTIE = 1U << 2 ;

  // Boolean field: Transfer error interrupt
              enable
    static const uint32_t DMA_CCR2_TEIE = 1U << 3 ;

  // Boolean field: Peripheral increment mode
    static const uint32_t DMA_CCR2_PINC = 1U << 6 ;

  // Boolean field: Memory increment mode
    static const uint32_t DMA_CCR2_MINC = 1U << 7 ;

  // Field (width: 2 bits): Peripheral size
    inline uint32_t DMA_CCR2_PSIZE (const uint32_t inValue) { return (inValue & 3U) << 8 ; }

  // Field (width: 2 bits): Memory size
    inline uint32_t DMA_CCR2_MSIZE (const uint32_t inValue) { return (inValue & 3U) << 10 ; }

  // Boolean field: Circular mode
    static const uint32_t DMA_CCR2_CIRC = 1U << 5 ;

  // Boolean field: Data transfer direction
    static const uint32_t DMA_CCR2_DIR = 1U << 4 ;

  // Boolean field: Transfer complete interrupt
              enable
    static const uint32_t DMA_CCR2_TCIE = 1U << 1 ;

  // Field (width: 2 bits): Channel priority level
    inline uint32_t DMA_CCR2_PL (const uint32_t inValue) { return (inValue & 3U) << 12 ; }

//-------------------- channel x configuration
          register
#define DMA_CCR3(group) (* ((volatile uint32_t *) (kBaseAddress_DMA [group] + 0x30)))
#define DMA1_CCR3 (* ((volatile uint32_t *) (0x40020000 + 0x30)))

  // Boolean field: Memory to memory mode
    static const uint32_t DMA_CCR3_MEM2MEM = 1U << 14 ;

  // Boolean field: Channel enable
    static const uint32_t DMA_CCR3_EN = 1U << 0 ;

  // Boolean field: Half transfer interrupt
              enable
    static const uint32_t DMA_CCR3_HTIE = 1U << 2 ;

  // Boolean field: Transfer error interrupt
              enable
    static const uint32_t DMA_CCR3_TEIE = 1U << 3 ;

  // Boolean field: Peripheral increment mode
    static const uint32_t DMA_CCR3_PINC = 1U << 6 ;

  // Boolean field: Memory increment mode
    static const uint32_t DMA_CCR3_MINC = 1U << 7 ;

  // Field (width: 2 bits): Peripheral size
    inline uint32_t DMA_CCR3_PSIZE (const uint32_t inValue) { return (inValue & 3U) << 8 ; }

  // Field (width: 2 bits): Memory size
    inline uint32_t DMA_CCR3_MSIZE (const uint32_t inValue) { return (inValue & 3U) << 10 ; }

  // Boolean field: Circular mode
    static const uint32_t DMA_CCR3_CIRC = 1U << 5 ;

  // Boolean field: Data transfer direction
    static const uint32_t DMA_CCR3_DIR = 1U << 4 ;

  // Boolean field: Transfer complete interrupt
              enable
    static const uint32_t DMA_CCR3_TCIE = 1U << 1 ;

  // Field (width: 2 bits): Channel priority level
    inline uint32_t DMA_CCR3_PL (const uint32_t inValue) { return (inValue & 3U) << 12 ; }

//-------------------- channel x configuration
          register
#define DMA_CCR4(group) (* ((volatile uint32_t *) (kBaseAddress_DMA [group] + 0x44)))
#define DMA1_CCR4 (* ((volatile uint32_t *) (0x40020000 + 0x44)))

  // Boolean field: Memory to memory mode
    static const uint32_t DMA_CCR4_MEM2MEM = 1U << 14 ;

  // Boolean field: Channel enable
    static const uint32_t DMA_CCR4_EN = 1U << 0 ;

  // Boolean field: Half transfer interrupt
              enable
    static const uint32_t DMA_CCR4_HTIE = 1U << 2 ;

  // Boolean field: Transfer error interrupt
              enable
    static const uint32_t DMA_CCR4_TEIE = 1U << 3 ;

  // Boolean field: Peripheral increment mode
    static const uint32_t DMA_CCR4_PINC = 1U << 6 ;

  // Boolean field: Memory increment mode
    static const uint32_t DMA_CCR4_MINC = 1U << 7 ;

  // Field (width: 2 bits): Peripheral size
    inline uint32_t DMA_CCR4_PSIZE (const uint32_t inValue) { return (inValue & 3U) << 8 ; }

  // Field (width: 2 bits): Memory size
    inline uint32_t DMA_CCR4_MSIZE (const uint32_t inValue) { return (inValue & 3U) << 10 ; }

  // Boolean field: Circular mode
    static const uint32_t DMA_CCR4_CIRC = 1U << 5 ;

  // Boolean field: Data transfer direction
    static const uint32_t DMA_CCR4_DIR = 1U << 4 ;

  // Boolean field: Transfer complete interrupt
              enable
    static const uint32_t DMA_CCR4_TCIE = 1U << 1 ;

  // Field (width: 2 bits): Channel priority level
    inline uint32_t DMA_CCR4_PL (const uint32_t inValue) { return (inValue & 3U) << 12 ; }

//-------------------- channel x configuration
          register
#define DMA_CCR5(group) (* ((volatile uint32_t *) (kBaseAddress_DMA [group] + 0x58)))
#define DMA1_CCR5 (* ((volatile uint32_t *) (0x40020000 + 0x58)))

  // Boolean field: Memory to memory mode
    static const uint32_t DMA_CCR5_MEM2MEM = 1U << 14 ;

  // Boolean field: Channel enable
    static const uint32_t DMA_CCR5_EN = 1U << 0 ;

  // Boolean field: Half transfer interrupt
              enable
    static const uint32_t DMA_CCR5_HTIE = 1U << 2 ;

  // Boolean field: Transfer error interrupt
              enable
    static const uint32_t DMA_CCR5_TEIE = 1U << 3 ;

  // Boolean field: Peripheral increment mode
    static const uint32_t DMA_CCR5_PINC = 1U << 6 ;

  // Boolean field: Memory increment mode
    static const uint32_t DMA_CCR5_MINC = 1U << 7 ;

  // Field (width: 2 bits): Peripheral size
    inline uint32_t DMA_CCR5_PSIZE (const uint32_t inValue) { return (inValue & 3U) << 8 ; }

  // Field (width: 2 bits): Memory size
    inline uint32_t DMA_CCR5_MSIZE (const uint32_t inValue) { return (inValue & 3U) << 10 ; }

  // Boolean field: Circular mode
    static const uint32_t DMA_CCR5_CIRC = 1U << 5 ;

  // Boolean field: Data transfer direction
    static const uint32_t DMA_CCR5_DIR = 1U << 4 ;

  // Boolean field: Transfer complete interrupt
              enable
    static const uint32_t DMA_CCR5_TCIE = 1U << 1 ;

  // Field (width: 2 bits): Channel priority level
    inline uint32_t DMA_CCR5_PL (const uint32_t inValue) { return (inValue & 3U) << 12 ; }

//-------------------- channel x configuration
          register
#define DMA_CCR6(group) (* ((volatile uint32_t *) (kBaseAddress_DMA [group] + 0x6C)))
#define DMA1_CCR6 (* ((volatile uint32_t *) (0x40020000 + 0x6C)))

  // Boolean field: Memory to memory mode
    static const uint32_t DMA_CCR6_MEM2MEM = 1U << 14 ;

  // Boolean field: Channel enable
    static const uint32_t DMA_CCR6_EN = 1U << 0 ;

  // Boolean field: Half transfer interrupt
              enable
    static const uint32_t DMA_CCR6_HTIE = 1U << 2 ;

  // Boolean field: Transfer error interrupt
              enable
    static const uint32_t DMA_CCR6_TEIE = 1U << 3 ;

  // Boolean field: Peripheral increment mode
    static const uint32_t DMA_CCR6_PINC = 1U << 6 ;

  // Boolean field: Memory increment mode
    static const uint32_t DMA_CCR6_MINC = 1U << 7 ;

  // Field (width: 2 bits): Peripheral size
    inline uint32_t DMA_CCR6_PSIZE (const uint32_t inValue) { return (inValue & 3U) << 8 ; }

  // Field (width: 2 bits): Memory size
    inline uint32_t DMA_CCR6_MSIZE (const uint32_t inValue) { return (inValue & 3U) << 10 ; }

  // Boolean field: Circular mode
    static const uint32_t DMA_CCR6_CIRC = 1U << 5 ;

  // Boolean field: Data transfer direction
    static const uint32_t DMA_CCR6_DIR = 1U << 4 ;

  // Boolean field: Transfer complete interrupt
              enable
    static const uint32_t DMA_CCR6_TCIE = 1U << 1 ;

  // Field (width: 2 bits): Channel priority level
    inline uint32_t DMA_CCR6_PL (const uint32_t inValue) { return (inValue & 3U) << 12 ; }

//-------------------- channel x configuration
          register
#define DMA_CCR7(group) (* ((volatile uint32_t *) (kBaseAddress_DMA [group] + 0x80)))
#define DMA1_CCR7 (* ((volatile uint32_t *) (0x40020000 + 0x80)))

  // Boolean field: Memory to memory mode
    static const uint32_t DMA_CCR7_MEM2MEM = 1U << 14 ;

  // Boolean field: Channel enable
    static const uint32_t DMA_CCR7_EN = 1U << 0 ;

  // Boolean field: Half transfer interrupt
              enable
    static const uint32_t DMA_CCR7_HTIE = 1U << 2 ;

  // Boolean field: Transfer error interrupt
              enable
    static const uint32_t DMA_CCR7_TEIE = 1U << 3 ;

  // Boolean field: Peripheral increment mode
    static const uint32_t DMA_CCR7_PINC = 1U << 6 ;

  // Boolean field: Memory increment mode
    static const uint32_t DMA_CCR7_MINC = 1U << 7 ;

  // Field (width: 2 bits): Peripheral size
    inline uint32_t DMA_CCR7_PSIZE (const uint32_t inValue) { return (inValue & 3U) << 8 ; }

  // Field (width: 2 bits): Memory size
    inline uint32_t DMA_CCR7_MSIZE (const uint32_t inValue) { return (inValue & 3U) << 10 ; }

  // Boolean field: Circular mode
    static const uint32_t DMA_CCR7_CIRC = 1U << 5 ;

  // Boolean field: Data transfer direction
    static const uint32_t DMA_CCR7_DIR = 1U << 4 ;

  // Boolean field: Transfer complete interrupt
              enable
    static const uint32_t DMA_CCR7_TCIE = 1U << 1 ;

  // Field (width: 2 bits): Channel priority level
    inline uint32_t DMA_CCR7_PL (const uint32_t inValue) { return (inValue & 3U) << 12 ; }

//-------------------- channel x peripheral address
          register
#define DMA_CPAR1(group) (* ((volatile uint32_t *) (kBaseAddress_DMA [group] + 0x10)))
#define DMA1_CPAR1 (* ((volatile uint32_t *) (0x40020000 + 0x10)))

//-------------------- channel x peripheral address
          register
#define DMA_CPAR3(group) (* ((volatile uint32_t *) (kBaseAddress_DMA [group] + 0x38)))
#define DMA1_CPAR3 (* ((volatile uint32_t *) (0x40020000 + 0x38)))

//-------------------- channel x peripheral address
          register
#define DMA_CPAR2(group) (* ((volatile uint32_t *) (kBaseAddress_DMA [group] + 0x24)))
#define DMA1_CPAR2 (* ((volatile uint32_t *) (0x40020000 + 0x24)))

//-------------------- channel x peripheral address
          register
#define DMA_CPAR5(group) (* ((volatile uint32_t *) (kBaseAddress_DMA [group] + 0x60)))
#define DMA1_CPAR5 (* ((volatile uint32_t *) (0x40020000 + 0x60)))

//-------------------- channel x peripheral address
          register
#define DMA_CPAR4(group) (* ((volatile uint32_t *) (kBaseAddress_DMA [group] + 0x4C)))
#define DMA1_CPAR4 (* ((volatile uint32_t *) (0x40020000 + 0x4C)))

//-------------------- channel x peripheral address
          register
#define DMA_CPAR7(group) (* ((volatile uint32_t *) (kBaseAddress_DMA [group] + 0x88)))
#define DMA1_CPAR7 (* ((volatile uint32_t *) (0x40020000 + 0x88)))

//-------------------- channel x peripheral address
          register
#define DMA_CPAR6(group) (* ((volatile uint32_t *) (kBaseAddress_DMA [group] + 0x74)))
#define DMA1_CPAR6 (* ((volatile uint32_t *) (0x40020000 + 0x74)))

//-------------------- channel selection register
#define DMA_CSELR(group) (* ((volatile uint32_t *) (kBaseAddress_DMA [group] + 0xA8)))
#define DMA1_CSELR (* ((volatile uint32_t *) (0x40020000 + 0xA8)))

  // Field (width: 4 bits): DMA channel 2 selection
    inline uint32_t DMA_CSELR_C2S (const uint32_t inValue) { return (inValue & 15U) << 4 ; }

  // Field (width: 4 bits): DMA channel 5 selection
    inline uint32_t DMA_CSELR_C5S (const uint32_t inValue) { return (inValue & 15U) << 16 ; }

  // Field (width: 4 bits): DMA channel 4 selection
    inline uint32_t DMA_CSELR_C4S (const uint32_t inValue) { return (inValue & 15U) << 12 ; }

  // Field (width: 4 bits): DMA channel 7 selection
    inline uint32_t DMA_CSELR_C7S (const uint32_t inValue) { return (inValue & 15U) << 24 ; }

  // Field (width: 4 bits): DMA channel 6 selection
    inline uint32_t DMA_CSELR_C6S (const uint32_t inValue) { return (inValue & 15U) << 20 ; }

  // Field (width: 4 bits): DMA channel 1 selection
    inline uint32_t DMA_CSELR_C1S (const uint32_t inValue) { return (inValue & 15U) << 0 ; }

  // Field (width: 4 bits): DMA channel 3 selection
    inline uint32_t DMA_CSELR_C3S (const uint32_t inValue) { return (inValue & 15U) << 8 ; }

//-------------------- channel x memory address
          register
#define DMA_CMAR2(group) (* ((volatile uint32_t *) (kBaseAddress_DMA [group] + 0x28)))
#define DMA1_CMAR2 (* ((volatile uint32_t *) (0x40020000 + 0x28)))

//-------------------- channel x memory address
          register
#define DMA_CMAR3(group) (* ((volatile uint32_t *) (kBaseAddress_DMA [group] + 0x3C)))
#define DMA1_CMAR3 (* ((volatile uint32_t *) (0x40020000 + 0x3C)))

//-------------------- interrupt flag clear register
#define DMA_IFCR(group) (* ((volatile uint32_t *) (kBaseAddress_DMA [group] + 0x4)))
#define DMA1_IFCR (* ((volatile uint32_t *) (0x40020000 + 0x4)))

  // Boolean field: Channel x transfer error clear (x = 1
              ..7)
    static const uint32_t DMA_IFCR_CTEIF7 = 1U << 27 ;

  // Boolean field: Channel x transfer error clear (x = 1
              ..7)
    static const uint32_t DMA_IFCR_CTEIF6 = 1U << 23 ;

  // Boolean field: Channel x transfer error clear (x = 1
              ..7)
    static const uint32_t DMA_IFCR_CTEIF5 = 1U << 19 ;

  // Boolean field: Channel x transfer error clear (x = 1
              ..7)
    static const uint32_t DMA_IFCR_CTEIF4 = 1U << 15 ;

  // Boolean field: Channel x transfer error clear (x = 1
              ..7)
    static const uint32_t DMA_IFCR_CTEIF3 = 1U << 11 ;

  // Boolean field: Channel x transfer error clear (x = 1
              ..7)
    static const uint32_t DMA_IFCR_CTEIF2 = 1U << 7 ;

  // Boolean field: Channel x transfer error clear (x = 1
              ..7)
    static const uint32_t DMA_IFCR_CTEIF1 = 1U << 3 ;

  // Boolean field: Channel x half transfer clear (x = 1
              ..7)
    static const uint32_t DMA_IFCR_CHTIF1 = 1U << 2 ;

  // Boolean field: Channel x half transfer clear (x = 1
              ..7)
    static const uint32_t DMA_IFCR_CHTIF2 = 1U << 6 ;

  // Boolean field: Channel x half transfer clear (x = 1
              ..7)
    static const uint32_t DMA_IFCR_CHTIF3 = 1U << 10 ;

  // Boolean field: Channel x half transfer clear (x = 1
              ..7)
    static const uint32_t DMA_IFCR_CHTIF4 = 1U << 14 ;

  // Boolean field: Channel x half transfer clear (x = 1
              ..7)
    static const uint32_t DMA_IFCR_CHTIF5 = 1U << 18 ;

  // Boolean field: Channel x half transfer clear (x = 1
              ..7)
    static const uint32_t DMA_IFCR_CHTIF6 = 1U << 22 ;

  // Boolean field: Channel x half transfer clear (x = 1
              ..7)
    static const uint32_t DMA_IFCR_CHTIF7 = 1U << 26 ;

  // Boolean field: Channel x global interrupt clear (x = 1
              ..7)
    static const uint32_t DMA_IFCR_CGIF1 = 1U << 0 ;

  // Boolean field: Channel x global interrupt clear (x = 1
              ..7)
    static const uint32_t DMA_IFCR_CGIF2 = 1U << 4 ;

  // Boolean field: Channel x global interrupt clear (x = 1
              ..7)
    static const uint32_t DMA_IFCR_CGIF3 = 1U << 8 ;

  // Boolean field: Channel x global interrupt clear (x = 1
              ..7)
    static const uint32_t DMA_IFCR_CGIF4 = 1U << 12 ;

  // Boolean field: Channel x global interrupt clear (x = 1
              ..7)
    static const uint32_t DMA_IFCR_CGIF5 = 1U << 16 ;

  // Boolean field: Channel x global interrupt clear (x = 1
              ..7)
    static const uint32_t DMA_IFCR_CGIF6 = 1U << 20 ;

  // Boolean field: Channel x global interrupt clear (x = 1
              ..7)
    static const uint32_t DMA_IFCR_CGIF7 = 1U << 24 ;

  // Boolean field: Channel x transfer complete clear (x = 1
              ..7)
    static const uint32_t DMA_IFCR_CTCIF5 = 1U << 17 ;

  // Boolean field: Channel x transfer complete clear (x = 1
              ..7)
    static const uint32_t DMA_IFCR_CTCIF4 = 1U << 13 ;

  // Boolean field: Channel x transfer complete clear (x = 1
              ..7)
    static const uint32_t DMA_IFCR_CTCIF7 = 1U << 25 ;

  // Boolean field: Channel x transfer complete clear (x = 1
              ..7)
    static const uint32_t DMA_IFCR_CTCIF6 = 1U << 21 ;

  // Boolean field: Channel x transfer complete clear (x = 1
              ..7)
    static const uint32_t DMA_IFCR_CTCIF1 = 1U << 1 ;

  // Boolean field: Channel x transfer complete clear (x = 1
              ..7)
    static const uint32_t DMA_IFCR_CTCIF3 = 1U << 9 ;

  // Boolean field: Channel x transfer complete clear (x = 1
              ..7)
    static const uint32_t DMA_IFCR_CTCIF2 = 1U << 5 ;

//-------------------- channel x memory address
          register
#define DMA_CMAR1(group) (* ((volatile uint32_t *) (kBaseAddress_DMA [group] + 0x14)))
#define DMA1_CMAR1 (* ((volatile uint32_t *) (0x40020000 + 0x14)))

//-------------------- channel x memory address
          register
#define DMA_CMAR6(group) (* ((volatile uint32_t *) (kBaseAddress_DMA [group] + 0x78)))
#define DMA1_CMAR6 (* ((volatile uint32_t *) (0x40020000 + 0x78)))

//-------------------- channel x memory address
          register
#define DMA_CMAR7(group) (* ((volatile uint32_t *) (kBaseAddress_DMA [group] + 0x8C)))
#define DMA1_CMAR7 (* ((volatile uint32_t *) (0x40020000 + 0x8C)))

//-------------------- channel x memory address
          register
#define DMA_CMAR4(group) (* ((volatile uint32_t *) (kBaseAddress_DMA [group] + 0x50)))
#define DMA1_CMAR4 (* ((volatile uint32_t *) (0x40020000 + 0x50)))

//-------------------- channel x memory address
          register
#define DMA_CMAR5(group) (* ((volatile uint32_t *) (kBaseAddress_DMA [group] + 0x64)))
#define DMA1_CMAR5 (* ((volatile uint32_t *) (0x40020000 + 0x64)))

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
// Peripheral group EXTI
//                EXTI at 0x40010400
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

static const uint32_t kBaseAddress_EXTI [1] = {0x40010400} ;

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

//-------------------- Falling Trigger selection
          register
#define EXTI_FTSR2(group) (* ((volatile uint32_t *) (kBaseAddress_EXTI [group] + 0x2C)))
#define EXTI_FTSR2 (* ((volatile uint32_t *) (0x40010400 + 0x2C)))

  // Boolean field: Falling trigger event configuration bit
              of line 37
    static const uint32_t EXTI_FTSR2_FT37 = 1U << 5 ;

  // Boolean field: Falling trigger event configuration bit
              of line 36
    static const uint32_t EXTI_FTSR2_FT36 = 1U << 4 ;

  // Boolean field: Falling trigger event configuration bit
              of line 35
    static const uint32_t EXTI_FTSR2_FT35 = 1U << 3 ;

  // Boolean field: Falling trigger event configuration bit
              of line 38
    static const uint32_t EXTI_FTSR2_FT38 = 1U << 6 ;

//-------------------- Interrupt mask register
#define EXTI_IMR1(group) (* ((volatile uint32_t *) (kBaseAddress_EXTI [group] + 0x0)))
#define EXTI_IMR1 (* ((volatile uint32_t *) (0x40010400 + 0x0)))

  // Boolean field: Interrupt Mask on line 8
    static const uint32_t EXTI_IMR1_MR8 = 1U << 8 ;

  // Boolean field: Interrupt Mask on line 9
    static const uint32_t EXTI_IMR1_MR9 = 1U << 9 ;

  // Boolean field: Interrupt Mask on line 4
    static const uint32_t EXTI_IMR1_MR4 = 1U << 4 ;

  // Boolean field: Interrupt Mask on line 5
    static const uint32_t EXTI_IMR1_MR5 = 1U << 5 ;

  // Boolean field: Interrupt Mask on line 6
    static const uint32_t EXTI_IMR1_MR6 = 1U << 6 ;

  // Boolean field: Interrupt Mask on line 7
    static const uint32_t EXTI_IMR1_MR7 = 1U << 7 ;

  // Boolean field: Interrupt Mask on line 0
    static const uint32_t EXTI_IMR1_MR0 = 1U << 0 ;

  // Boolean field: Interrupt Mask on line 1
    static const uint32_t EXTI_IMR1_MR1 = 1U << 1 ;

  // Boolean field: Interrupt Mask on line 2
    static const uint32_t EXTI_IMR1_MR2 = 1U << 2 ;

  // Boolean field: Interrupt Mask on line 3
    static const uint32_t EXTI_IMR1_MR3 = 1U << 3 ;

  // Boolean field: Interrupt Mask on line 30
    static const uint32_t EXTI_IMR1_MR30 = 1U << 30 ;

  // Boolean field: Interrupt Mask on line 31
    static const uint32_t EXTI_IMR1_MR31 = 1U << 31 ;

  // Boolean field: Interrupt Mask on line 18
    static const uint32_t EXTI_IMR1_MR18 = 1U << 18 ;

  // Boolean field: Interrupt Mask on line 19
    static const uint32_t EXTI_IMR1_MR19 = 1U << 19 ;

  // Boolean field: Interrupt Mask on line 16
    static const uint32_t EXTI_IMR1_MR16 = 1U << 16 ;

  // Boolean field: Interrupt Mask on line 17
    static const uint32_t EXTI_IMR1_MR17 = 1U << 17 ;

  // Boolean field: Interrupt Mask on line 14
    static const uint32_t EXTI_IMR1_MR14 = 1U << 14 ;

  // Boolean field: Interrupt Mask on line 15
    static const uint32_t EXTI_IMR1_MR15 = 1U << 15 ;

  // Boolean field: Interrupt Mask on line 12
    static const uint32_t EXTI_IMR1_MR12 = 1U << 12 ;

  // Boolean field: Interrupt Mask on line 13
    static const uint32_t EXTI_IMR1_MR13 = 1U << 13 ;

  // Boolean field: Interrupt Mask on line 10
    static const uint32_t EXTI_IMR1_MR10 = 1U << 10 ;

  // Boolean field: Interrupt Mask on line 11
    static const uint32_t EXTI_IMR1_MR11 = 1U << 11 ;

  // Boolean field: Interrupt Mask on line 23
    static const uint32_t EXTI_IMR1_MR23 = 1U << 23 ;

  // Boolean field: Interrupt Mask on line 22
    static const uint32_t EXTI_IMR1_MR22 = 1U << 22 ;

  // Boolean field: Interrupt Mask on line 21
    static const uint32_t EXTI_IMR1_MR21 = 1U << 21 ;

  // Boolean field: Interrupt Mask on line 20
    static const uint32_t EXTI_IMR1_MR20 = 1U << 20 ;

  // Boolean field: Interrupt Mask on line 27
    static const uint32_t EXTI_IMR1_MR27 = 1U << 27 ;

  // Boolean field: Interrupt Mask on line 26
    static const uint32_t EXTI_IMR1_MR26 = 1U << 26 ;

  // Boolean field: Interrupt Mask on line 25
    static const uint32_t EXTI_IMR1_MR25 = 1U << 25 ;

  // Boolean field: Interrupt Mask on line 24
    static const uint32_t EXTI_IMR1_MR24 = 1U << 24 ;

  // Boolean field: Interrupt Mask on line 29
    static const uint32_t EXTI_IMR1_MR29 = 1U << 29 ;

  // Boolean field: Interrupt Mask on line 28
    static const uint32_t EXTI_IMR1_MR28 = 1U << 28 ;

//-------------------- Interrupt mask register
#define EXTI_IMR2(group) (* ((volatile uint32_t *) (kBaseAddress_EXTI [group] + 0x20)))
#define EXTI_IMR2 (* ((volatile uint32_t *) (0x40010400 + 0x20)))

  // Boolean field: Interrupt Mask on external/internal line
              32
    static const uint32_t EXTI_IMR2_MR32 = 1U << 0 ;

  // Boolean field: Interrupt Mask on external/internal line
              33
    static const uint32_t EXTI_IMR2_MR33 = 1U << 1 ;

  // Boolean field: Interrupt Mask on external/internal line
              34
    static const uint32_t EXTI_IMR2_MR34 = 1U << 2 ;

  // Boolean field: Interrupt Mask on external/internal line
              35
    static const uint32_t EXTI_IMR2_MR35 = 1U << 3 ;

  // Boolean field: Interrupt Mask on external/internal line
              36
    static const uint32_t EXTI_IMR2_MR36 = 1U << 4 ;

  // Boolean field: Interrupt Mask on external/internal line
              37
    static const uint32_t EXTI_IMR2_MR37 = 1U << 5 ;

  // Boolean field: Interrupt Mask on external/internal line
              38
    static const uint32_t EXTI_IMR2_MR38 = 1U << 6 ;

  // Boolean field: Interrupt Mask on external/internal line
              39
    static const uint32_t EXTI_IMR2_MR39 = 1U << 7 ;

//-------------------- Falling Trigger selection
          register
#define EXTI_FTSR1(group) (* ((volatile uint32_t *) (kBaseAddress_EXTI [group] + 0xC)))
#define EXTI_FTSR1 (* ((volatile uint32_t *) (0x40010400 + 0xC)))

  // Boolean field: Falling trigger event configuration of
              line 20
    static const uint32_t EXTI_FTSR1_TR20 = 1U << 20 ;

  // Boolean field: Falling trigger event configuration of
              line 21
    static const uint32_t EXTI_FTSR1_TR21 = 1U << 21 ;

  // Boolean field: Falling trigger event configuration of
              line 22
    static const uint32_t EXTI_FTSR1_TR22 = 1U << 22 ;

  // Boolean field: Falling trigger event configuration of
              line 9
    static const uint32_t EXTI_FTSR1_TR9 = 1U << 9 ;

  // Boolean field: Falling trigger event configuration of
              line 8
    static const uint32_t EXTI_FTSR1_TR8 = 1U << 8 ;

  // Boolean field: Falling trigger event configuration of
              line 1
    static const uint32_t EXTI_FTSR1_TR1 = 1U << 1 ;

  // Boolean field: Falling trigger event configuration of
              line 0
    static const uint32_t EXTI_FTSR1_TR0 = 1U << 0 ;

  // Boolean field: Falling trigger event configuration of
              line 3
    static const uint32_t EXTI_FTSR1_TR3 = 1U << 3 ;

  // Boolean field: Falling trigger event configuration of
              line 2
    static const uint32_t EXTI_FTSR1_TR2 = 1U << 2 ;

  // Boolean field: Falling trigger event configuration of
              line 5
    static const uint32_t EXTI_FTSR1_TR5 = 1U << 5 ;

  // Boolean field: Falling trigger event configuration of
              line 4
    static const uint32_t EXTI_FTSR1_TR4 = 1U << 4 ;

  // Boolean field: Falling trigger event configuration of
              line 7
    static const uint32_t EXTI_FTSR1_TR7 = 1U << 7 ;

  // Boolean field: Falling trigger event configuration of
              line 6
    static const uint32_t EXTI_FTSR1_TR6 = 1U << 6 ;

  // Boolean field: Falling trigger event configuration of
              line 15
    static const uint32_t EXTI_FTSR1_TR15 = 1U << 15 ;

  // Boolean field: Falling trigger event configuration of
              line 14
    static const uint32_t EXTI_FTSR1_TR14 = 1U << 14 ;

  // Boolean field: Falling trigger event configuration of
              line 16
    static const uint32_t EXTI_FTSR1_TR16 = 1U << 16 ;

  // Boolean field: Falling trigger event configuration of
              line 11
    static const uint32_t EXTI_FTSR1_TR11 = 1U << 11 ;

  // Boolean field: Falling trigger event configuration of
              line 10
    static const uint32_t EXTI_FTSR1_TR10 = 1U << 10 ;

  // Boolean field: Falling trigger event configuration of
              line 13
    static const uint32_t EXTI_FTSR1_TR13 = 1U << 13 ;

  // Boolean field: Falling trigger event configuration of
              line 12
    static const uint32_t EXTI_FTSR1_TR12 = 1U << 12 ;

  // Boolean field: Falling trigger event configuration of
              line 19
    static const uint32_t EXTI_FTSR1_TR19 = 1U << 19 ;

  // Boolean field: Falling trigger event configuration of
              line 18
    static const uint32_t EXTI_FTSR1_TR18 = 1U << 18 ;

//-------------------- Event mask register
#define EXTI_EMR1(group) (* ((volatile uint32_t *) (kBaseAddress_EXTI [group] + 0x4)))
#define EXTI_EMR1 (* ((volatile uint32_t *) (0x40010400 + 0x4)))

  // Boolean field: Event Mask on line 8
    static const uint32_t EXTI_EMR1_MR8 = 1U << 8 ;

  // Boolean field: Event Mask on line 9
    static const uint32_t EXTI_EMR1_MR9 = 1U << 9 ;

  // Boolean field: Event Mask on line 4
    static const uint32_t EXTI_EMR1_MR4 = 1U << 4 ;

  // Boolean field: Event Mask on line 5
    static const uint32_t EXTI_EMR1_MR5 = 1U << 5 ;

  // Boolean field: Event Mask on line 6
    static const uint32_t EXTI_EMR1_MR6 = 1U << 6 ;

  // Boolean field: Event Mask on line 7
    static const uint32_t EXTI_EMR1_MR7 = 1U << 7 ;

  // Boolean field: Event Mask on line 0
    static const uint32_t EXTI_EMR1_MR0 = 1U << 0 ;

  // Boolean field: Event Mask on line 1
    static const uint32_t EXTI_EMR1_MR1 = 1U << 1 ;

  // Boolean field: Event Mask on line 2
    static const uint32_t EXTI_EMR1_MR2 = 1U << 2 ;

  // Boolean field: Event Mask on line 3
    static const uint32_t EXTI_EMR1_MR3 = 1U << 3 ;

  // Boolean field: Event Mask on line 30
    static const uint32_t EXTI_EMR1_MR30 = 1U << 30 ;

  // Boolean field: Event Mask on line 31
    static const uint32_t EXTI_EMR1_MR31 = 1U << 31 ;

  // Boolean field: Event Mask on line 18
    static const uint32_t EXTI_EMR1_MR18 = 1U << 18 ;

  // Boolean field: Event Mask on line 19
    static const uint32_t EXTI_EMR1_MR19 = 1U << 19 ;

  // Boolean field: Event Mask on line 16
    static const uint32_t EXTI_EMR1_MR16 = 1U << 16 ;

  // Boolean field: Event Mask on line 17
    static const uint32_t EXTI_EMR1_MR17 = 1U << 17 ;

  // Boolean field: Event Mask on line 14
    static const uint32_t EXTI_EMR1_MR14 = 1U << 14 ;

  // Boolean field: Event Mask on line 15
    static const uint32_t EXTI_EMR1_MR15 = 1U << 15 ;

  // Boolean field: Event Mask on line 12
    static const uint32_t EXTI_EMR1_MR12 = 1U << 12 ;

  // Boolean field: Event Mask on line 13
    static const uint32_t EXTI_EMR1_MR13 = 1U << 13 ;

  // Boolean field: Event Mask on line 10
    static const uint32_t EXTI_EMR1_MR10 = 1U << 10 ;

  // Boolean field: Event Mask on line 11
    static const uint32_t EXTI_EMR1_MR11 = 1U << 11 ;

  // Boolean field: Event Mask on line 23
    static const uint32_t EXTI_EMR1_MR23 = 1U << 23 ;

  // Boolean field: Event Mask on line 22
    static const uint32_t EXTI_EMR1_MR22 = 1U << 22 ;

  // Boolean field: Event Mask on line 21
    static const uint32_t EXTI_EMR1_MR21 = 1U << 21 ;

  // Boolean field: Event Mask on line 20
    static const uint32_t EXTI_EMR1_MR20 = 1U << 20 ;

  // Boolean field: Event Mask on line 27
    static const uint32_t EXTI_EMR1_MR27 = 1U << 27 ;

  // Boolean field: Event Mask on line 26
    static const uint32_t EXTI_EMR1_MR26 = 1U << 26 ;

  // Boolean field: Event Mask on line 25
    static const uint32_t EXTI_EMR1_MR25 = 1U << 25 ;

  // Boolean field: Event Mask on line 24
    static const uint32_t EXTI_EMR1_MR24 = 1U << 24 ;

  // Boolean field: Event Mask on line 29
    static const uint32_t EXTI_EMR1_MR29 = 1U << 29 ;

  // Boolean field: Event Mask on line 28
    static const uint32_t EXTI_EMR1_MR28 = 1U << 28 ;

//-------------------- Event mask register
#define EXTI_EMR2(group) (* ((volatile uint32_t *) (kBaseAddress_EXTI [group] + 0x24)))
#define EXTI_EMR2 (* ((volatile uint32_t *) (0x40010400 + 0x24)))

  // Boolean field: Event mask on external/internal line
              32
    static const uint32_t EXTI_EMR2_MR32 = 1U << 0 ;

  // Boolean field: Event mask on external/internal line
              33
    static const uint32_t EXTI_EMR2_MR33 = 1U << 1 ;

  // Boolean field: Event mask on external/internal line
              34
    static const uint32_t EXTI_EMR2_MR34 = 1U << 2 ;

  // Boolean field: Event mask on external/internal line
              35
    static const uint32_t EXTI_EMR2_MR35 = 1U << 3 ;

  // Boolean field: Event mask on external/internal line
              36
    static const uint32_t EXTI_EMR2_MR36 = 1U << 4 ;

  // Boolean field: Event mask on external/internal line
              37
    static const uint32_t EXTI_EMR2_MR37 = 1U << 5 ;

  // Boolean field: Event mask on external/internal line
              38
    static const uint32_t EXTI_EMR2_MR38 = 1U << 6 ;

  // Boolean field: Event mask on external/internal line
              39
    static const uint32_t EXTI_EMR2_MR39 = 1U << 7 ;

//-------------------- Rising Trigger selection
          register
#define EXTI_RTSR2(group) (* ((volatile uint32_t *) (kBaseAddress_EXTI [group] + 0x28)))
#define EXTI_RTSR2 (* ((volatile uint32_t *) (0x40010400 + 0x28)))

  // Boolean field: Rising trigger event configuration bit
              of line 38
    static const uint32_t EXTI_RTSR2_RT38 = 1U << 6 ;

  // Boolean field: Rising trigger event configuration bit
              of line 37
    static const uint32_t EXTI_RTSR2_RT37 = 1U << 5 ;

  // Boolean field: Rising trigger event configuration bit
              of line 36
    static const uint32_t EXTI_RTSR2_RT36 = 1U << 4 ;

  // Boolean field: Rising trigger event configuration bit
              of line 35
    static const uint32_t EXTI_RTSR2_RT35 = 1U << 3 ;

//-------------------- Rising Trigger selection
          register
#define EXTI_RTSR1(group) (* ((volatile uint32_t *) (kBaseAddress_EXTI [group] + 0x8)))
#define EXTI_RTSR1 (* ((volatile uint32_t *) (0x40010400 + 0x8)))

  // Boolean field: Rising trigger event configuration of
              line 20
    static const uint32_t EXTI_RTSR1_TR20 = 1U << 20 ;

  // Boolean field: Rising trigger event configuration of
              line 21
    static const uint32_t EXTI_RTSR1_TR21 = 1U << 21 ;

  // Boolean field: Rising trigger event configuration of
              line 22
    static const uint32_t EXTI_RTSR1_TR22 = 1U << 22 ;

  // Boolean field: Rising trigger event configuration of
              line 9
    static const uint32_t EXTI_RTSR1_TR9 = 1U << 9 ;

  // Boolean field: Rising trigger event configuration of
              line 8
    static const uint32_t EXTI_RTSR1_TR8 = 1U << 8 ;

  // Boolean field: Rising trigger event configuration of
              line 1
    static const uint32_t EXTI_RTSR1_TR1 = 1U << 1 ;

  // Boolean field: Rising trigger event configuration of
              line 0
    static const uint32_t EXTI_RTSR1_TR0 = 1U << 0 ;

  // Boolean field: Rising trigger event configuration of
              line 3
    static const uint32_t EXTI_RTSR1_TR3 = 1U << 3 ;

  // Boolean field: Rising trigger event configuration of
              line 2
    static const uint32_t EXTI_RTSR1_TR2 = 1U << 2 ;

  // Boolean field: Rising trigger event configuration of
              line 5
    static const uint32_t EXTI_RTSR1_TR5 = 1U << 5 ;

  // Boolean field: Rising trigger event configuration of
              line 4
    static const uint32_t EXTI_RTSR1_TR4 = 1U << 4 ;

  // Boolean field: Rising trigger event configuration of
              line 7
    static const uint32_t EXTI_RTSR1_TR7 = 1U << 7 ;

  // Boolean field: Rising trigger event configuration of
              line 6
    static const uint32_t EXTI_RTSR1_TR6 = 1U << 6 ;

  // Boolean field: Rising trigger event configuration of
              line 15
    static const uint32_t EXTI_RTSR1_TR15 = 1U << 15 ;

  // Boolean field: Rising trigger event configuration of
              line 14
    static const uint32_t EXTI_RTSR1_TR14 = 1U << 14 ;

  // Boolean field: Rising trigger event configuration of
              line 16
    static const uint32_t EXTI_RTSR1_TR16 = 1U << 16 ;

  // Boolean field: Rising trigger event configuration of
              line 11
    static const uint32_t EXTI_RTSR1_TR11 = 1U << 11 ;

  // Boolean field: Rising trigger event configuration of
              line 10
    static const uint32_t EXTI_RTSR1_TR10 = 1U << 10 ;

  // Boolean field: Rising trigger event configuration of
              line 13
    static const uint32_t EXTI_RTSR1_TR13 = 1U << 13 ;

  // Boolean field: Rising trigger event configuration of
              line 12
    static const uint32_t EXTI_RTSR1_TR12 = 1U << 12 ;

  // Boolean field: Rising trigger event configuration of
              line 19
    static const uint32_t EXTI_RTSR1_TR19 = 1U << 19 ;

  // Boolean field: Rising trigger event configuration of
              line 18
    static const uint32_t EXTI_RTSR1_TR18 = 1U << 18 ;

//-------------------- Pending register
#define EXTI_PR1(group) (* ((volatile uint32_t *) (kBaseAddress_EXTI [group] + 0x14)))
#define EXTI_PR1 (* ((volatile uint32_t *) (0x40010400 + 0x14)))

  // Boolean field: Pending bit 20
    static const uint32_t EXTI_PR1_PR20 = 1U << 20 ;

  // Boolean field: Pending bit 21
    static const uint32_t EXTI_PR1_PR21 = 1U << 21 ;

  // Boolean field: Pending bit 22
    static const uint32_t EXTI_PR1_PR22 = 1U << 22 ;

  // Boolean field: Pending bit 5
    static const uint32_t EXTI_PR1_PR5 = 1U << 5 ;

  // Boolean field: Pending bit 4
    static const uint32_t EXTI_PR1_PR4 = 1U << 4 ;

  // Boolean field: Pending bit 7
    static const uint32_t EXTI_PR1_PR7 = 1U << 7 ;

  // Boolean field: Pending bit 6
    static const uint32_t EXTI_PR1_PR6 = 1U << 6 ;

  // Boolean field: Pending bit 1
    static const uint32_t EXTI_PR1_PR1 = 1U << 1 ;

  // Boolean field: Pending bit 0
    static const uint32_t EXTI_PR1_PR0 = 1U << 0 ;

  // Boolean field: Pending bit 3
    static const uint32_t EXTI_PR1_PR3 = 1U << 3 ;

  // Boolean field: Pending bit 2
    static const uint32_t EXTI_PR1_PR2 = 1U << 2 ;

  // Boolean field: Pending bit 9
    static const uint32_t EXTI_PR1_PR9 = 1U << 9 ;

  // Boolean field: Pending bit 8
    static const uint32_t EXTI_PR1_PR8 = 1U << 8 ;

  // Boolean field: Pending bit 11
    static const uint32_t EXTI_PR1_PR11 = 1U << 11 ;

  // Boolean field: Pending bit 10
    static const uint32_t EXTI_PR1_PR10 = 1U << 10 ;

  // Boolean field: Pending bit 13
    static const uint32_t EXTI_PR1_PR13 = 1U << 13 ;

  // Boolean field: Pending bit 12
    static const uint32_t EXTI_PR1_PR12 = 1U << 12 ;

  // Boolean field: Pending bit 15
    static const uint32_t EXTI_PR1_PR15 = 1U << 15 ;

  // Boolean field: Pending bit 14
    static const uint32_t EXTI_PR1_PR14 = 1U << 14 ;

  // Boolean field: Pending bit 16
    static const uint32_t EXTI_PR1_PR16 = 1U << 16 ;

  // Boolean field: Pending bit 19
    static const uint32_t EXTI_PR1_PR19 = 1U << 19 ;

  // Boolean field: Pending bit 18
    static const uint32_t EXTI_PR1_PR18 = 1U << 18 ;

//-------------------- Software interrupt event
          register
#define EXTI_SWIER1(group) (* ((volatile uint32_t *) (kBaseAddress_EXTI [group] + 0x10)))
#define EXTI_SWIER1 (* ((volatile uint32_t *) (0x40010400 + 0x10)))

  // Boolean field: Software Interrupt on line
              18
    static const uint32_t EXTI_SWIER1_SWIER18 = 1U << 18 ;

  // Boolean field: Software Interrupt on line
              19
    static const uint32_t EXTI_SWIER1_SWIER19 = 1U << 19 ;

  // Boolean field: Software Interrupt on line
              16
    static const uint32_t EXTI_SWIER1_SWIER16 = 1U << 16 ;

  // Boolean field: Software Interrupt on line
              14
    static const uint32_t EXTI_SWIER1_SWIER14 = 1U << 14 ;

  // Boolean field: Software Interrupt on line
              15
    static const uint32_t EXTI_SWIER1_SWIER15 = 1U << 15 ;

  // Boolean field: Software Interrupt on line
              12
    static const uint32_t EXTI_SWIER1_SWIER12 = 1U << 12 ;

  // Boolean field: Software Interrupt on line
              13
    static const uint32_t EXTI_SWIER1_SWIER13 = 1U << 13 ;

  // Boolean field: Software Interrupt on line
              10
    static const uint32_t EXTI_SWIER1_SWIER10 = 1U << 10 ;

  // Boolean field: Software Interrupt on line
              11
    static const uint32_t EXTI_SWIER1_SWIER11 = 1U << 11 ;

  // Boolean field: Software Interrupt on line
              22
    static const uint32_t EXTI_SWIER1_SWIER22 = 1U << 22 ;

  // Boolean field: Software Interrupt on line
              21
    static const uint32_t EXTI_SWIER1_SWIER21 = 1U << 21 ;

  // Boolean field: Software Interrupt on line
              20
    static const uint32_t EXTI_SWIER1_SWIER20 = 1U << 20 ;

  // Boolean field: Software Interrupt on line
              4
    static const uint32_t EXTI_SWIER1_SWIER4 = 1U << 4 ;

  // Boolean field: Software Interrupt on line
              5
    static const uint32_t EXTI_SWIER1_SWIER5 = 1U << 5 ;

  // Boolean field: Software Interrupt on line
              6
    static const uint32_t EXTI_SWIER1_SWIER6 = 1U << 6 ;

  // Boolean field: Software Interrupt on line
              7
    static const uint32_t EXTI_SWIER1_SWIER7 = 1U << 7 ;

  // Boolean field: Software Interrupt on line
              0
    static const uint32_t EXTI_SWIER1_SWIER0 = 1U << 0 ;

  // Boolean field: Software Interrupt on line
              1
    static const uint32_t EXTI_SWIER1_SWIER1 = 1U << 1 ;

  // Boolean field: Software Interrupt on line
              2
    static const uint32_t EXTI_SWIER1_SWIER2 = 1U << 2 ;

  // Boolean field: Software Interrupt on line
              3
    static const uint32_t EXTI_SWIER1_SWIER3 = 1U << 3 ;

  // Boolean field: Software Interrupt on line
              8
    static const uint32_t EXTI_SWIER1_SWIER8 = 1U << 8 ;

  // Boolean field: Software Interrupt on line
              9
    static const uint32_t EXTI_SWIER1_SWIER9 = 1U << 9 ;

//-------------------- Software interrupt event
          register
#define EXTI_SWIER2(group) (* ((volatile uint32_t *) (kBaseAddress_EXTI [group] + 0x30)))
#define EXTI_SWIER2 (* ((volatile uint32_t *) (0x40010400 + 0x30)))

  // Boolean field: Software interrupt on line
              38
    static const uint32_t EXTI_SWIER2_SWI38 = 1U << 6 ;

  // Boolean field: Software interrupt on line
              37
    static const uint32_t EXTI_SWIER2_SWI37 = 1U << 5 ;

  // Boolean field: Software interrupt on line
              36
    static const uint32_t EXTI_SWIER2_SWI36 = 1U << 4 ;

  // Boolean field: Software interrupt on line
              35
    static const uint32_t EXTI_SWIER2_SWI35 = 1U << 3 ;

//-------------------- Pending register
#define EXTI_PR2(group) (* ((volatile uint32_t *) (kBaseAddress_EXTI [group] + 0x34)))
#define EXTI_PR2 (* ((volatile uint32_t *) (0x40010400 + 0x34)))

  // Boolean field: Pending interrupt flag on line
              38
    static const uint32_t EXTI_PR2_PIF38 = 1U << 6 ;

  // Boolean field: Pending interrupt flag on line
              35
    static const uint32_t EXTI_PR2_PIF35 = 1U << 3 ;

  // Boolean field: Pending interrupt flag on line
              37
    static const uint32_t EXTI_PR2_PIF37 = 1U << 5 ;

  // Boolean field: Pending interrupt flag on line
              36
    static const uint32_t EXTI_PR2_PIF36 = 1U << 4 ;

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
// Peripheral group FPU
//                FPU at 0xE000EF34
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

static const uint32_t kBaseAddress_FPU [1] = {0xE000EF34} ;

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

//-------------------- Floating-point status control
          register
#define FPU_FPSCR(group) (* ((volatile uint32_t *) (kBaseAddress_FPU [group] + 0x8)))
#define FPU_FPSCR (* ((volatile uint32_t *) (0xE000EF34 + 0x8)))

  // Boolean field: Default NaN mode control
              bit
    static const uint32_t FPU_FPSCR_DN = 1U << 25 ;

  // Boolean field: Overflow cumulative exception
              bit
    static const uint32_t FPU_FPSCR_OFC = 1U << 2 ;

  // Boolean field: Division by zero cumulative exception
              bit.
    static const uint32_t FPU_FPSCR_DZC = 1U << 1 ;

  // Boolean field: Inexact cumulative exception
              bit
    static const uint32_t FPU_FPSCR_IXC = 1U << 4 ;

  // Boolean field: Flush-to-zero mode control
              bit:
    static const uint32_t FPU_FPSCR_FZ = 1U << 24 ;

  // Boolean field: Underflow cumulative exception
              bit
    static const uint32_t FPU_FPSCR_UFC = 1U << 3 ;

  // Boolean field: Carry condition code flag
    static const uint32_t FPU_FPSCR_C = 1U << 29 ;

  // Boolean field: Negative condition code
              flag
    static const uint32_t FPU_FPSCR_N = 1U << 31 ;

  // Boolean field: Alternative half-precision control
              bit
    static const uint32_t FPU_FPSCR_AHP = 1U << 26 ;

  // Boolean field: Overflow condition code
              flag
    static const uint32_t FPU_FPSCR_V = 1U << 28 ;

  // Field (width: 2 bits): Rounding Mode control
              field
    inline uint32_t FPU_FPSCR_RMode (const uint32_t inValue) { return (inValue & 3U) << 22 ; }

  // Boolean field: Zero condition code flag
    static const uint32_t FPU_FPSCR_Z = 1U << 30 ;

  // Boolean field: Invalid operation cumulative exception
              bit
    static const uint32_t FPU_FPSCR_IOC = 1U << 0 ;

  // Boolean field: Input denormal cumulative exception
              bit.
    static const uint32_t FPU_FPSCR_IDC = 1U << 7 ;

//-------------------- Floating-point context control
          register
#define FPU_FPCCR(group) (* ((volatile uint32_t *) (kBaseAddress_FPU [group] + 0x0)))
#define FPU_FPCCR (* ((volatile uint32_t *) (0xE000EF34 + 0x0)))

  // Boolean field: MONRDY
    static const uint32_t FPU_FPCCR_MONRDY = 1U << 8 ;

  // Boolean field: ASPEN
    static const uint32_t FPU_FPCCR_ASPEN = 1U << 31 ;

  // Boolean field: LSPEN
    static const uint32_t FPU_FPCCR_LSPEN = 1U << 30 ;

  // Boolean field: THREAD
    static const uint32_t FPU_FPCCR_THREAD = 1U << 3 ;

  // Boolean field: HFRDY
    static const uint32_t FPU_FPCCR_HFRDY = 1U << 4 ;

  // Boolean field: BFRDY
    static const uint32_t FPU_FPCCR_BFRDY = 1U << 6 ;

  // Boolean field: USER
    static const uint32_t FPU_FPCCR_USER = 1U << 1 ;

  // Boolean field: LSPACT
    static const uint32_t FPU_FPCCR_LSPACT = 1U << 0 ;

  // Boolean field: MMRDY
    static const uint32_t FPU_FPCCR_MMRDY = 1U << 5 ;

//-------------------- Floating-point context address
          register
#define FPU_FPCAR(group) (* ((volatile uint32_t *) (kBaseAddress_FPU [group] + 0x4)))
#define FPU_FPCAR (* ((volatile uint32_t *) (0xE000EF34 + 0x4)))

  // Field (width: 29 bits): Location of unpopulated
              floating-point
    inline uint32_t FPU_FPCAR_ADDRESS (const uint32_t inValue) { return (inValue & 536870911U) << 3 ; }

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
// Peripheral group Firewall
//                FIREWALL at 0x40011C00
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

static const uint32_t kBaseAddress_Firewall [1] = {0x40011C00} ;

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

//-------------------- Non-volatile data segment
          length
#define Firewall_NVDSL(group) (* ((volatile uint32_t *) (kBaseAddress_Firewall [group] + 0xC)))
#define FIREWALL_NVDSL (* ((volatile uint32_t *) (0x40011C00 + 0xC)))

  // Field (width: 14 bits): Non-volatile data segment
              length
    inline uint32_t Firewall_NVDSL_LENG (const uint32_t inValue) { return (inValue & 16383U) << 8 ; }

//-------------------- Code segment length
#define Firewall_CSL(group) (* ((volatile uint32_t *) (kBaseAddress_Firewall [group] + 0x4)))
#define FIREWALL_CSL (* ((volatile uint32_t *) (0x40011C00 + 0x4)))

  // Field (width: 14 bits): code segment length
    inline uint32_t Firewall_CSL_LENG (const uint32_t inValue) { return (inValue & 16383U) << 8 ; }

//-------------------- Non-volatile data segment start
          address
#define Firewall_NVDSSA(group) (* ((volatile uint32_t *) (kBaseAddress_Firewall [group] + 0x8)))
#define FIREWALL_NVDSSA (* ((volatile uint32_t *) (0x40011C00 + 0x8)))

  // Field (width: 16 bits): Non-volatile data segment start
              address
    inline uint32_t Firewall_NVDSSA_ADD (const uint32_t inValue) { return (inValue & 65535U) << 8 ; }

//-------------------- Volatile data segment length
#define Firewall_VDSL(group) (* ((volatile uint32_t *) (kBaseAddress_Firewall [group] + 0x14)))
#define FIREWALL_VDSL (* ((volatile uint32_t *) (0x40011C00 + 0x14)))

  // Field (width: 10 bits): Non-volatile data segment
              length
    inline uint32_t Firewall_VDSL_LENG (const uint32_t inValue) { return (inValue & 1023U) << 6 ; }

//-------------------- Code segment start address
#define Firewall_CSSA(group) (* ((volatile uint32_t *) (kBaseAddress_Firewall [group] + 0x0)))
#define FIREWALL_CSSA (* ((volatile uint32_t *) (0x40011C00 + 0x0)))

  // Field (width: 16 bits): code segment start address
    inline uint32_t Firewall_CSSA_ADD (const uint32_t inValue) { return (inValue & 65535U) << 8 ; }

//-------------------- Volatile data segment start
          address
#define Firewall_VDSSA(group) (* ((volatile uint32_t *) (kBaseAddress_Firewall [group] + 0x10)))
#define FIREWALL_VDSSA (* ((volatile uint32_t *) (0x40011C00 + 0x10)))

  // Field (width: 10 bits): Volatile data segment start
              address
    inline uint32_t Firewall_VDSSA_ADD (const uint32_t inValue) { return (inValue & 1023U) << 6 ; }

//-------------------- Configuration register
#define Firewall_CR(group) (* ((volatile uint32_t *) (kBaseAddress_Firewall [group] + 0x20)))
#define FIREWALL_CR (* ((volatile uint32_t *) (0x40011C00 + 0x20)))

  // Boolean field: Firewall pre alarm
    static const uint32_t Firewall_CR_FPA = 1U << 0 ;

  // Boolean field: Volatile data shared
    static const uint32_t Firewall_CR_VDS = 1U << 1 ;

  // Boolean field: Volatile data execution
    static const uint32_t Firewall_CR_VDE = 1U << 2 ;

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
// Peripheral group Flash
//                FLASH at 0x40022000
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

static const uint32_t kBaseAddress_Flash [1] = {0x40022000} ;

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

//-------------------- Flash ECC register
#define Flash_ECCR(group) (* ((const volatile uint32_t *) (kBaseAddress_Flash [group] + 0x18)))
#define FLASH_ECCR (* ((const volatile uint32_t *) (0x40022000 + 0x18)))

  // Boolean field: ECC fail bank
    static const uint32_t Flash_ECCR_BK_ECC = 1U << 19 ;

  // Boolean field: ECC correction
    static const uint32_t Flash_ECCR_ECCC = 1U << 30 ;

  // Boolean field: ECC correction interrupt
              enable
    static const uint32_t Flash_ECCR_ECCIE = 1U << 24 ;

  // Boolean field: System Flash ECC fail
    static const uint32_t Flash_ECCR_SYSF_ECC = 1U << 20 ;

  // Field (width: 19 bits): ECC fail address
    inline uint32_t Flash_ECCR_ADDR_ECC (const uint32_t inValue) { return (inValue & 524287U) << 0 ; }

  // Boolean field: ECC detection
    static const uint32_t Flash_ECCR_ECCD = 1U << 31 ;

//-------------------- Flash Bank 2 PCROP End address
          register
#define Flash_PCROP2ER(group) (* ((volatile uint32_t *) (kBaseAddress_Flash [group] + 0x48)))
#define FLASH_PCROP2ER (* ((volatile uint32_t *) (0x40022000 + 0x48)))

  // Field (width: 16 bits): Bank 2 PCROP area end
              offset
    inline uint32_t Flash_PCROP2ER_PCROP2_END (const uint32_t inValue) { return (inValue & 65535U) << 0 ; }

//-------------------- Option byte key register
#define Flash_OPTKEYR(group) (* ((volatile uint32_t *) (kBaseAddress_Flash [group] + 0xC)))
#define FLASH_OPTKEYR (* ((volatile uint32_t *) (0x40022000 + 0xC)))

//-------------------- Flash Bank 2 WRP area A address
          register
#define Flash_WRP2AR(group) (* ((volatile uint32_t *) (kBaseAddress_Flash [group] + 0x4C)))
#define FLASH_WRP2AR (* ((volatile uint32_t *) (0x40022000 + 0x4C)))

  // Field (width: 8 bits): Bank 2 WRP first area A start
              offset
    inline uint32_t Flash_WRP2AR_WRP2A_STRT (const uint32_t inValue) { return (inValue & 255U) << 0 ; }

  // Field (width: 8 bits): Bank 2 WRP first area A end
              offset
    inline uint32_t Flash_WRP2AR_WRP2A_END (const uint32_t inValue) { return (inValue & 255U) << 16 ; }

//-------------------- Flash Bank 2 WRP area B address
          register
#define Flash_WRP2BR(group) (* ((volatile uint32_t *) (kBaseAddress_Flash [group] + 0x50)))
#define FLASH_WRP2BR (* ((volatile uint32_t *) (0x40022000 + 0x50)))

  // Field (width: 8 bits): Bank 2 WRP second area B start
              offset
    inline uint32_t Flash_WRP2BR_WRP2B_STRT (const uint32_t inValue) { return (inValue & 255U) << 0 ; }

  // Field (width: 8 bits): Bank 2 WRP second area B end
              offset
    inline uint32_t Flash_WRP2BR_WRP2B_END (const uint32_t inValue) { return (inValue & 255U) << 16 ; }

//-------------------- Status register
#define Flash_SR(group) (* ((const volatile uint32_t *) (kBaseAddress_Flash [group] + 0x10)))
#define FLASH_SR (* ((const volatile uint32_t *) (0x40022000 + 0x10)))

  // Boolean field: Write protected error
    static const uint32_t Flash_SR_WRPERR = 1U << 4 ;

  // Boolean field: Programming sequence error
    static const uint32_t Flash_SR_PGSERR = 1U << 7 ;

  // Boolean field: Option validity error
    static const uint32_t Flash_SR_OPTVERR = 1U << 15 ;

  // Boolean field: PCROP read error
    static const uint32_t Flash_SR_RDERR = 1U << 14 ;

  // Boolean field: Fast programming error
    static const uint32_t Flash_SR_FASTERR = 1U << 9 ;

  // Boolean field: Programming alignment
              error
    static const uint32_t Flash_SR_PGAERR = 1U << 5 ;

  // Boolean field: End of operation
    static const uint32_t Flash_SR_EOP = 1U << 0 ;

  // Boolean field: Programming error
    static const uint32_t Flash_SR_PROGERR = 1U << 3 ;

  // Boolean field: Operation error
    static const uint32_t Flash_SR_OPERR = 1U << 1 ;

  // Boolean field: Fast programming data miss
              error
    static const uint32_t Flash_SR_MISERR = 1U << 8 ;

  // Boolean field: Size error
    static const uint32_t Flash_SR_SIZERR = 1U << 6 ;

  // Boolean field: Busy
    static const uint32_t Flash_SR_BSY = 1U << 16 ;

//-------------------- Flash Bank 1 WRP area B address
          register
#define Flash_WRP1BR(group) (* ((volatile uint32_t *) (kBaseAddress_Flash [group] + 0x30)))
#define FLASH_WRP1BR (* ((volatile uint32_t *) (0x40022000 + 0x30)))

  // Field (width: 8 bits): Bank 1 WRP second area B end
              offset
    inline uint32_t Flash_WRP1BR_WRP1B_STRT (const uint32_t inValue) { return (inValue & 255U) << 16 ; }

  // Field (width: 8 bits): Bank 1 WRP second area B start
              offset
    inline uint32_t Flash_WRP1BR_WRP1B_END (const uint32_t inValue) { return (inValue & 255U) << 0 ; }

//-------------------- Flash Bank 2 PCROP Start address
          register
#define Flash_PCROP2SR(group) (* ((volatile uint32_t *) (kBaseAddress_Flash [group] + 0x44)))
#define FLASH_PCROP2SR (* ((volatile uint32_t *) (0x40022000 + 0x44)))

  // Field (width: 16 bits): Bank 2 PCROP area start
              offset
    inline uint32_t Flash_PCROP2SR_PCROP2_STRT (const uint32_t inValue) { return (inValue & 65535U) << 0 ; }

//-------------------- Flash Bank 1 PCROP Start address
          register
#define Flash_PCROP1SR(group) (* ((volatile uint32_t *) (kBaseAddress_Flash [group] + 0x24)))
#define FLASH_PCROP1SR (* ((volatile uint32_t *) (0x40022000 + 0x24)))

  // Field (width: 16 bits): Bank 1 PCROP area start
              offset
    inline uint32_t Flash_PCROP1SR_PCROP1_STRT (const uint32_t inValue) { return (inValue & 65535U) << 0 ; }

//-------------------- Access control register
#define Flash_ACR(group) (* ((volatile uint32_t *) (kBaseAddress_Flash [group] + 0x0)))
#define FLASH_ACR (* ((volatile uint32_t *) (0x40022000 + 0x0)))

  // Field (width: 3 bits): Latency
    inline uint32_t Flash_ACR_LATENCY (const uint32_t inValue) { return (inValue & 7U) << 0 ; }

  // Boolean field: Prefetch enable
    static const uint32_t Flash_ACR_PRFTEN = 1U << 8 ;

  // Boolean field: Instruction cache reset
    static const uint32_t Flash_ACR_ICRST = 1U << 11 ;

  // Boolean field: Flash Power-down mode during Low-power
              run mode
    static const uint32_t Flash_ACR_RUN_PD = 1U << 13 ;

  // Boolean field: Instruction cache enable
    static const uint32_t Flash_ACR_ICEN = 1U << 9 ;

  // Boolean field: Flash Power-down mode during Low-power
              sleep mode
    static const uint32_t Flash_ACR_SLEEP_PD = 1U << 14 ;

  // Boolean field: Data cache enable
    static const uint32_t Flash_ACR_DCEN = 1U << 10 ;

  // Boolean field: Data cache reset
    static const uint32_t Flash_ACR_DCRST = 1U << 12 ;

//-------------------- Flash Bank 1 PCROP End address
          register
#define Flash_PCROP1ER(group) (* ((volatile uint32_t *) (kBaseAddress_Flash [group] + 0x28)))
#define FLASH_PCROP1ER (* ((volatile uint32_t *) (0x40022000 + 0x28)))

  // Field (width: 16 bits): Bank 1 PCROP area end
              offset
    inline uint32_t Flash_PCROP1ER_PCROP1_END (const uint32_t inValue) { return (inValue & 65535U) << 0 ; }

  // Boolean field: PCROP area preserved when RDP level
              decreased
    static const uint32_t Flash_PCROP1ER_PCROP_RDP = 1U << 31 ;

//-------------------- Flash Bank 1 WRP area A address
          register
#define Flash_WRP1AR(group) (* ((volatile uint32_t *) (kBaseAddress_Flash [group] + 0x2C)))
#define FLASH_WRP1AR (* ((volatile uint32_t *) (0x40022000 + 0x2C)))

  // Field (width: 8 bits): Bank 1 WRP first area tart
              offset
    inline uint32_t Flash_WRP1AR_WRP1A_STRT (const uint32_t inValue) { return (inValue & 255U) << 0 ; }

  // Field (width: 8 bits): Bank 1 WRP first area A end
              offset
    inline uint32_t Flash_WRP1AR_WRP1A_END (const uint32_t inValue) { return (inValue & 255U) << 16 ; }

//-------------------- Flash key register
#define Flash_KEYR(group) (* ((volatile uint32_t *) (kBaseAddress_Flash [group] + 0x8)))
#define FLASH_KEYR (* ((volatile uint32_t *) (0x40022000 + 0x8)))

//-------------------- Flash control register
#define Flash_CR(group) (* ((volatile uint32_t *) (kBaseAddress_Flash [group] + 0x14)))
#define FLASH_CR (* ((volatile uint32_t *) (0x40022000 + 0x14)))

  // Boolean field: Options Lock
    static const uint32_t Flash_CR_OPTLOCK = 1U << 30 ;

  // Boolean field: Options modification start
    static const uint32_t Flash_CR_OPTSTRT = 1U << 17 ;

  // Boolean field: Bank 1 Mass erase
    static const uint32_t Flash_CR_MER1 = 1U << 2 ;

  // Boolean field: Bank 2 Mass erase
    static const uint32_t Flash_CR_MER2 = 1U << 15 ;

  // Boolean field: End of operation interrupt
              enable
    static const uint32_t Flash_CR_EOPIE = 1U << 24 ;

  // Boolean field: PCROP read error interrupt
              enable
    static const uint32_t Flash_CR_RDERRIE = 1U << 26 ;

  // Boolean field: Page erase
    static const uint32_t Flash_CR_PER = 1U << 1 ;

  // Boolean field: Force the option byte
              loading
    static const uint32_t Flash_CR_OBL_LAUNCH = 1U << 27 ;

  // Boolean field: Bank erase
    static const uint32_t Flash_CR_BKER = 1U << 11 ;

  // Boolean field: Start
    static const uint32_t Flash_CR_START = 1U << 16 ;

  // Boolean field: Error interrupt enable
    static const uint32_t Flash_CR_ERRIE = 1U << 25 ;

  // Boolean field: Programming
    static const uint32_t Flash_CR_PG = 1U << 0 ;

  // Boolean field: FLASH_CR Lock
    static const uint32_t Flash_CR_LOCK = 1U << 31 ;

  // Field (width: 8 bits): Page number
    inline uint32_t Flash_CR_PNB (const uint32_t inValue) { return (inValue & 255U) << 3 ; }

  // Boolean field: Fast programming
    static const uint32_t Flash_CR_FSTPG = 1U << 18 ;

//-------------------- Flash option register
#define Flash_OPTR(group) (* ((volatile uint32_t *) (kBaseAddress_Flash [group] + 0x20)))
#define FLASH_OPTR (* ((volatile uint32_t *) (0x40022000 + 0x20)))

  // Boolean field: nRST_STDBY
    static const uint32_t Flash_OPTR_nRST_STDBY = 1U << 13 ;

  // Field (width: 8 bits): Read protection level
    inline uint32_t Flash_OPTR_RDP (const uint32_t inValue) { return (inValue & 255U) << 0 ; }

  // Boolean field: Dual-Bank on 512 KB or 256 KB Flash
              memory devices
    static const uint32_t Flash_OPTR_DUALBANK = 1U << 21 ;

  // Boolean field: Boot configuration
    static const uint32_t Flash_OPTR_nBOOT1 = 1U << 23 ;

  // Boolean field: Independent watchdog counter freeze in
              Standby mode
    static const uint32_t Flash_OPTR_IWDG_STDBY = 1U << 18 ;

  // Boolean field: SRAM2 parity check enable
    static const uint32_t Flash_OPTR_SRAM2_PE = 1U << 24 ;

  // Boolean field: Dual-bank boot
    static const uint32_t Flash_OPTR_BFB2 = 1U << 20 ;

  // Boolean field: nRST_STOP
    static const uint32_t Flash_OPTR_nRST_STOP = 1U << 12 ;

  // Boolean field: SRAM2 Erase when system
              reset
    static const uint32_t Flash_OPTR_SRAM2_RST = 1U << 25 ;

  // Boolean field: Window watchdog selection
    static const uint32_t Flash_OPTR_WWDG_SW = 1U << 19 ;

  // Boolean field: Independent watchdog counter freeze in
              Stop mode
    static const uint32_t Flash_OPTR_IWDG_STOP = 1U << 17 ;

  // Boolean field: Independent watchdog
              selection
    static const uint32_t Flash_OPTR_IDWG_SW = 1U << 16 ;

  // Field (width: 3 bits): BOR reset Level
    inline uint32_t Flash_OPTR_BOR_LEV (const uint32_t inValue) { return (inValue & 7U) << 8 ; }

//-------------------- Power down key register
#define Flash_PDKEYR(group) (* ((volatile uint32_t *) (kBaseAddress_Flash [group] + 0x4)))
#define FLASH_PDKEYR (* ((volatile uint32_t *) (0x40022000 + 0x4)))

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
// Peripheral group GPIO
//                GPIOA at 0x48000000
//                GPIOB at 0x48000400
//                GPIOC at 0x48000800
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

static const uint32_t kBaseAddress_GPIO [3] = {0x48000000, 0x48000400, 0x48000800} ;

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

//-------------------- GPIO port mode register
#define GPIO_MODER(group) (* ((volatile uint32_t *) (kBaseAddress_GPIO [group] + 0x0)))
#define GPIOA_MODER (* ((volatile uint32_t *) (0x48000000 + 0x0)))
#define GPIOB_MODER (* ((volatile uint32_t *) (0x48000400 + 0x0)))
#define GPIOC_MODER (* ((volatile uint32_t *) (0x48000800 + 0x0)))

  // Field (width: 2 bits): Port x configuration bits (y =
              0..15)
    inline uint32_t GPIO_MODER_MODER11 (const uint32_t inValue) { return (inValue & 3U) << 22 ; }

  // Field (width: 2 bits): Port x configuration bits (y =
              0..15)
    inline uint32_t GPIO_MODER_MODER10 (const uint32_t inValue) { return (inValue & 3U) << 20 ; }

  // Field (width: 2 bits): Port x configuration bits (y =
              0..15)
    inline uint32_t GPIO_MODER_MODER13 (const uint32_t inValue) { return (inValue & 3U) << 26 ; }

  // Field (width: 2 bits): Port x configuration bits (y =
              0..15)
    inline uint32_t GPIO_MODER_MODER12 (const uint32_t inValue) { return (inValue & 3U) << 24 ; }

  // Field (width: 2 bits): Port x configuration bits (y =
              0..15)
    inline uint32_t GPIO_MODER_MODER15 (const uint32_t inValue) { return (inValue & 3U) << 30 ; }

  // Field (width: 2 bits): Port x configuration bits (y =
              0..15)
    inline uint32_t GPIO_MODER_MODER14 (const uint32_t inValue) { return (inValue & 3U) << 28 ; }

  // Field (width: 2 bits): Port x configuration bits (y =
              0..15)
    inline uint32_t GPIO_MODER_MODER5 (const uint32_t inValue) { return (inValue & 3U) << 10 ; }

  // Field (width: 2 bits): Port x configuration bits (y =
              0..15)
    inline uint32_t GPIO_MODER_MODER4 (const uint32_t inValue) { return (inValue & 3U) << 8 ; }

  // Field (width: 2 bits): Port x configuration bits (y =
              0..15)
    inline uint32_t GPIO_MODER_MODER7 (const uint32_t inValue) { return (inValue & 3U) << 14 ; }

  // Field (width: 2 bits): Port x configuration bits (y =
              0..15)
    inline uint32_t GPIO_MODER_MODER6 (const uint32_t inValue) { return (inValue & 3U) << 12 ; }

  // Field (width: 2 bits): Port x configuration bits (y =
              0..15)
    inline uint32_t GPIO_MODER_MODER1 (const uint32_t inValue) { return (inValue & 3U) << 2 ; }

  // Field (width: 2 bits): Port x configuration bits (y =
              0..15)
    inline uint32_t GPIO_MODER_MODER0 (const uint32_t inValue) { return (inValue & 3U) << 0 ; }

  // Field (width: 2 bits): Port x configuration bits (y =
              0..15)
    inline uint32_t GPIO_MODER_MODER3 (const uint32_t inValue) { return (inValue & 3U) << 6 ; }

  // Field (width: 2 bits): Port x configuration bits (y =
              0..15)
    inline uint32_t GPIO_MODER_MODER2 (const uint32_t inValue) { return (inValue & 3U) << 4 ; }

  // Field (width: 2 bits): Port x configuration bits (y =
              0..15)
    inline uint32_t GPIO_MODER_MODER9 (const uint32_t inValue) { return (inValue & 3U) << 18 ; }

  // Field (width: 2 bits): Port x configuration bits (y =
              0..15)
    inline uint32_t GPIO_MODER_MODER8 (const uint32_t inValue) { return (inValue & 3U) << 16 ; }

//-------------------- GPIO port bit set/reset
          register
#define GPIO_BSRR(group) (* ((volatile uint32_t *) (kBaseAddress_GPIO [group] + 0x18)))
#define GPIOA_BSRR (* ((volatile uint32_t *) (0x48000000 + 0x18)))
#define GPIOB_BSRR (* ((volatile uint32_t *) (0x48000400 + 0x18)))
#define GPIOC_BSRR (* ((volatile uint32_t *) (0x48000800 + 0x18)))

  // Boolean field: Port x reset bit y (y =
              0..15)
    static const uint32_t GPIO_BSRR_BR9 = 1U << 25 ;

  // Boolean field: Port x reset bit y (y =
              0..15)
    static const uint32_t GPIO_BSRR_BR8 = 1U << 24 ;

  // Boolean field: Port x reset bit y (y =
              0..15)
    static const uint32_t GPIO_BSRR_BR7 = 1U << 23 ;

  // Boolean field: Port x reset bit y (y =
              0..15)
    static const uint32_t GPIO_BSRR_BR6 = 1U << 22 ;

  // Boolean field: Port x reset bit y (y =
              0..15)
    static const uint32_t GPIO_BSRR_BR5 = 1U << 21 ;

  // Boolean field: Port x reset bit y (y =
              0..15)
    static const uint32_t GPIO_BSRR_BR4 = 1U << 20 ;

  // Boolean field: Port x reset bit y (y =
              0..15)
    static const uint32_t GPIO_BSRR_BR3 = 1U << 19 ;

  // Boolean field: Port x reset bit y (y =
              0..15)
    static const uint32_t GPIO_BSRR_BR2 = 1U << 18 ;

  // Boolean field: Port x reset bit y (y =
              0..15)
    static const uint32_t GPIO_BSRR_BR1 = 1U << 17 ;

  // Boolean field: Port x set bit y (y=
              0..15)
    static const uint32_t GPIO_BSRR_BR0 = 1U << 16 ;

  // Boolean field: Port x set bit y (y=
              0..15)
    static const uint32_t GPIO_BSRR_BS8 = 1U << 8 ;

  // Boolean field: Port x set bit y (y=
              0..15)
    static const uint32_t GPIO_BSRR_BS9 = 1U << 9 ;

  // Boolean field: Port x set bit y (y=
              0..15)
    static const uint32_t GPIO_BSRR_BS4 = 1U << 4 ;

  // Boolean field: Port x set bit y (y=
              0..15)
    static const uint32_t GPIO_BSRR_BS5 = 1U << 5 ;

  // Boolean field: Port x set bit y (y=
              0..15)
    static const uint32_t GPIO_BSRR_BS6 = 1U << 6 ;

  // Boolean field: Port x set bit y (y=
              0..15)
    static const uint32_t GPIO_BSRR_BS7 = 1U << 7 ;

  // Boolean field: Port x set bit y (y=
              0..15)
    static const uint32_t GPIO_BSRR_BS0 = 1U << 0 ;

  // Boolean field: Port x set bit y (y=
              0..15)
    static const uint32_t GPIO_BSRR_BS1 = 1U << 1 ;

  // Boolean field: Port x set bit y (y=
              0..15)
    static const uint32_t GPIO_BSRR_BS2 = 1U << 2 ;

  // Boolean field: Port x set bit y (y=
              0..15)
    static const uint32_t GPIO_BSRR_BS3 = 1U << 3 ;

  // Boolean field: Port x reset bit y (y =
              0..15)
    static const uint32_t GPIO_BSRR_BR13 = 1U << 29 ;

  // Boolean field: Port x reset bit y (y =
              0..15)
    static const uint32_t GPIO_BSRR_BR12 = 1U << 28 ;

  // Boolean field: Port x reset bit y (y =
              0..15)
    static const uint32_t GPIO_BSRR_BR11 = 1U << 27 ;

  // Boolean field: Port x reset bit y (y =
              0..15)
    static const uint32_t GPIO_BSRR_BR10 = 1U << 26 ;

  // Boolean field: Port x reset bit y (y =
              0..15)
    static const uint32_t GPIO_BSRR_BR15 = 1U << 31 ;

  // Boolean field: Port x reset bit y (y =
              0..15)
    static const uint32_t GPIO_BSRR_BR14 = 1U << 30 ;

  // Boolean field: Port x set bit y (y=
              0..15)
    static const uint32_t GPIO_BSRR_BS14 = 1U << 14 ;

  // Boolean field: Port x set bit y (y=
              0..15)
    static const uint32_t GPIO_BSRR_BS15 = 1U << 15 ;

  // Boolean field: Port x set bit y (y=
              0..15)
    static const uint32_t GPIO_BSRR_BS12 = 1U << 12 ;

  // Boolean field: Port x set bit y (y=
              0..15)
    static const uint32_t GPIO_BSRR_BS13 = 1U << 13 ;

  // Boolean field: Port x set bit y (y=
              0..15)
    static const uint32_t GPIO_BSRR_BS10 = 1U << 10 ;

  // Boolean field: Port x set bit y (y=
              0..15)
    static const uint32_t GPIO_BSRR_BS11 = 1U << 11 ;

//-------------------- GPIO port configuration lock
          register
#define GPIO_LCKR(group) (* ((volatile uint32_t *) (kBaseAddress_GPIO [group] + 0x1C)))
#define GPIOA_LCKR (* ((volatile uint32_t *) (0x48000000 + 0x1C)))
#define GPIOB_LCKR (* ((volatile uint32_t *) (0x48000400 + 0x1C)))
#define GPIOC_LCKR (* ((volatile uint32_t *) (0x48000800 + 0x1C)))

  // Boolean field: Port x lock bit y (y=
              0..15)
    static const uint32_t GPIO_LCKR_LCK8 = 1U << 8 ;

  // Boolean field: Port x lock bit y (y=
              0..15)
    static const uint32_t GPIO_LCKR_LCK9 = 1U << 9 ;

  // Boolean field: Port x lock bit y (y=
              0..15)
    static const uint32_t GPIO_LCKR_LCK6 = 1U << 6 ;

  // Boolean field: Port x lock bit y (y=
              0..15)
    static const uint32_t GPIO_LCKR_LCK7 = 1U << 7 ;

  // Boolean field: Port x lock bit y (y=
              0..15)
    static const uint32_t GPIO_LCKR_LCK4 = 1U << 4 ;

  // Boolean field: Port x lock bit y (y=
              0..15)
    static const uint32_t GPIO_LCKR_LCK5 = 1U << 5 ;

  // Boolean field: Port x lock bit y (y=
              0..15)
    static const uint32_t GPIO_LCKR_LCK2 = 1U << 2 ;

  // Boolean field: Port x lock bit y (y=
              0..15)
    static const uint32_t GPIO_LCKR_LCK3 = 1U << 3 ;

  // Boolean field: Port x lock bit y (y=
              0..15)
    static const uint32_t GPIO_LCKR_LCK0 = 1U << 0 ;

  // Boolean field: Port x lock bit y (y=
              0..15)
    static const uint32_t GPIO_LCKR_LCK1 = 1U << 1 ;

  // Boolean field: Port x lock bit y (y=
              0..15)
    static const uint32_t GPIO_LCKR_LCK14 = 1U << 14 ;

  // Boolean field: Port x lock bit y (y=
              0..15)
    static const uint32_t GPIO_LCKR_LCK15 = 1U << 15 ;

  // Boolean field: Port x lock bit y (y=
              0..15)
    static const uint32_t GPIO_LCKR_LCK10 = 1U << 10 ;

  // Boolean field: Port x lock bit y (y=
              0..15)
    static const uint32_t GPIO_LCKR_LCK11 = 1U << 11 ;

  // Boolean field: Port x lock bit y (y=
              0..15)
    static const uint32_t GPIO_LCKR_LCK12 = 1U << 12 ;

  // Boolean field: Port x lock bit y (y=
              0..15)
    static const uint32_t GPIO_LCKR_LCK13 = 1U << 13 ;

  // Boolean field: Port x lock bit y (y=
              0..15)
    static const uint32_t GPIO_LCKR_LCKK = 1U << 16 ;

//-------------------- GPIO port output data register
#define GPIO_ODR(group) (* ((volatile uint32_t *) (kBaseAddress_GPIO [group] + 0x14)))
#define GPIOA_ODR (* ((volatile uint32_t *) (0x48000000 + 0x14)))
#define GPIOB_ODR (* ((volatile uint32_t *) (0x48000400 + 0x14)))
#define GPIOC_ODR (* ((volatile uint32_t *) (0x48000800 + 0x14)))

  // Boolean field: Port output data (y =
              0..15)
    static const uint32_t GPIO_ODR_ODR4 = 1U << 4 ;

  // Boolean field: Port output data (y =
              0..15)
    static const uint32_t GPIO_ODR_ODR9 = 1U << 9 ;

  // Boolean field: Port output data (y =
              0..15)
    static const uint32_t GPIO_ODR_ODR8 = 1U << 8 ;

  // Boolean field: Port output data (y =
              0..15)
    static const uint32_t GPIO_ODR_ODR13 = 1U << 13 ;

  // Boolean field: Port output data (y =
              0..15)
    static const uint32_t GPIO_ODR_ODR12 = 1U << 12 ;

  // Boolean field: Port output data (y =
              0..15)
    static const uint32_t GPIO_ODR_ODR11 = 1U << 11 ;

  // Boolean field: Port output data (y =
              0..15)
    static const uint32_t GPIO_ODR_ODR10 = 1U << 10 ;

  // Boolean field: Port output data (y =
              0..15)
    static const uint32_t GPIO_ODR_ODR3 = 1U << 3 ;

  // Boolean field: Port output data (y =
              0..15)
    static const uint32_t GPIO_ODR_ODR2 = 1U << 2 ;

  // Boolean field: Port output data (y =
              0..15)
    static const uint32_t GPIO_ODR_ODR15 = 1U << 15 ;

  // Boolean field: Port output data (y =
              0..15)
    static const uint32_t GPIO_ODR_ODR14 = 1U << 14 ;

  // Boolean field: Port output data (y =
              0..15)
    static const uint32_t GPIO_ODR_ODR7 = 1U << 7 ;

  // Boolean field: Port output data (y =
              0..15)
    static const uint32_t GPIO_ODR_ODR1 = 1U << 1 ;

  // Boolean field: Port output data (y =
              0..15)
    static const uint32_t GPIO_ODR_ODR6 = 1U << 6 ;

  // Boolean field: Port output data (y =
              0..15)
    static const uint32_t GPIO_ODR_ODR0 = 1U << 0 ;

  // Boolean field: Port output data (y =
              0..15)
    static const uint32_t GPIO_ODR_ODR5 = 1U << 5 ;

//-------------------- GPIO port input data register
#define GPIO_IDR(group) (* ((const volatile uint32_t *) (kBaseAddress_GPIO [group] + 0x10)))
#define GPIOA_IDR (* ((const volatile uint32_t *) (0x48000000 + 0x10)))
#define GPIOB_IDR (* ((const volatile uint32_t *) (0x48000400 + 0x10)))
#define GPIOC_IDR (* ((const volatile uint32_t *) (0x48000800 + 0x10)))

  // Boolean field: Port input data (y =
              0..15)
    static const uint32_t GPIO_IDR_IDR11 = 1U << 11 ;

  // Boolean field: Port input data (y =
              0..15)
    static const uint32_t GPIO_IDR_IDR10 = 1U << 10 ;

  // Boolean field: Port input data (y =
              0..15)
    static const uint32_t GPIO_IDR_IDR13 = 1U << 13 ;

  // Boolean field: Port input data (y =
              0..15)
    static const uint32_t GPIO_IDR_IDR12 = 1U << 12 ;

  // Boolean field: Port input data (y =
              0..15)
    static const uint32_t GPIO_IDR_IDR15 = 1U << 15 ;

  // Boolean field: Port input data (y =
              0..15)
    static const uint32_t GPIO_IDR_IDR14 = 1U << 14 ;

  // Boolean field: Port input data (y =
              0..15)
    static const uint32_t GPIO_IDR_IDR9 = 1U << 9 ;

  // Boolean field: Port input data (y =
              0..15)
    static const uint32_t GPIO_IDR_IDR8 = 1U << 8 ;

  // Boolean field: Port input data (y =
              0..15)
    static const uint32_t GPIO_IDR_IDR1 = 1U << 1 ;

  // Boolean field: Port input data (y =
              0..15)
    static const uint32_t GPIO_IDR_IDR0 = 1U << 0 ;

  // Boolean field: Port input data (y =
              0..15)
    static const uint32_t GPIO_IDR_IDR3 = 1U << 3 ;

  // Boolean field: Port input data (y =
              0..15)
    static const uint32_t GPIO_IDR_IDR2 = 1U << 2 ;

  // Boolean field: Port input data (y =
              0..15)
    static const uint32_t GPIO_IDR_IDR5 = 1U << 5 ;

  // Boolean field: Port input data (y =
              0..15)
    static const uint32_t GPIO_IDR_IDR4 = 1U << 4 ;

  // Boolean field: Port input data (y =
              0..15)
    static const uint32_t GPIO_IDR_IDR7 = 1U << 7 ;

  // Boolean field: Port input data (y =
              0..15)
    static const uint32_t GPIO_IDR_IDR6 = 1U << 6 ;

//-------------------- GPIO port output type register
#define GPIO_OTYPER(group) (* ((volatile uint32_t *) (kBaseAddress_GPIO [group] + 0x4)))
#define GPIOA_OTYPER (* ((volatile uint32_t *) (0x48000000 + 0x4)))
#define GPIOB_OTYPER (* ((volatile uint32_t *) (0x48000400 + 0x4)))
#define GPIOC_OTYPER (* ((volatile uint32_t *) (0x48000800 + 0x4)))

  // Boolean field: Port x configuration bits (y =
              0..15)
    static const uint32_t GPIO_OTYPER_OT3 = 1U << 3 ;

  // Boolean field: Port x configuration bits (y =
              0..15)
    static const uint32_t GPIO_OTYPER_OT7 = 1U << 7 ;

  // Boolean field: Port x configuration bits (y =
              0..15)
    static const uint32_t GPIO_OTYPER_OT2 = 1U << 2 ;

  // Boolean field: Port x configuration bits (y =
              0..15)
    static const uint32_t GPIO_OTYPER_OT8 = 1U << 8 ;

  // Boolean field: Port x configuration bits (y =
              0..15)
    static const uint32_t GPIO_OTYPER_OT9 = 1U << 9 ;

  // Boolean field: Port x configuration bits (y =
              0..15)
    static const uint32_t GPIO_OTYPER_OT0 = 1U << 0 ;

  // Boolean field: Port x configuration bits (y =
              0..15)
    static const uint32_t GPIO_OTYPER_OT6 = 1U << 6 ;

  // Boolean field: Port x configuration bits (y =
              0..15)
    static const uint32_t GPIO_OTYPER_OT1 = 1U << 1 ;

  // Boolean field: Port x configuration bits (y =
              0..15)
    static const uint32_t GPIO_OTYPER_OT12 = 1U << 12 ;

  // Boolean field: Port x configuration bits (y =
              0..15)
    static const uint32_t GPIO_OTYPER_OT13 = 1U << 13 ;

  // Boolean field: Port x configuration bits (y =
              0..15)
    static const uint32_t GPIO_OTYPER_OT10 = 1U << 10 ;

  // Boolean field: Port x configuration bits (y =
              0..15)
    static const uint32_t GPIO_OTYPER_OT11 = 1U << 11 ;

  // Boolean field: Port x configuration bits (y =
              0..15)
    static const uint32_t GPIO_OTYPER_OT4 = 1U << 4 ;

  // Boolean field: Port x configuration bits (y =
              0..15)
    static const uint32_t GPIO_OTYPER_OT5 = 1U << 5 ;

  // Boolean field: Port x configuration bits (y =
              0..15)
    static const uint32_t GPIO_OTYPER_OT14 = 1U << 14 ;

  // Boolean field: Port x configuration bits (y =
              0..15)
    static const uint32_t GPIO_OTYPER_OT15 = 1U << 15 ;

//-------------------- GPIO alternate function high
          register
#define GPIO_AFRH(group) (* ((volatile uint32_t *) (kBaseAddress_GPIO [group] + 0x24)))
#define GPIOA_AFRH (* ((volatile uint32_t *) (0x48000000 + 0x24)))
#define GPIOB_AFRH (* ((volatile uint32_t *) (0x48000400 + 0x24)))
#define GPIOC_AFRH (* ((volatile uint32_t *) (0x48000800 + 0x24)))

  // Field (width: 4 bits): Alternate function selection for port x
              bit y (y = 8..15)
    inline uint32_t GPIO_AFRH_AFRH8 (const uint32_t inValue) { return (inValue & 15U) << 0 ; }

  // Field (width: 4 bits): Alternate function selection for port x
              bit y (y = 8..15)
    inline uint32_t GPIO_AFRH_AFRH9 (const uint32_t inValue) { return (inValue & 15U) << 4 ; }

  // Field (width: 4 bits): Alternate function selection for port x
              bit y (y = 8..15)
    inline uint32_t GPIO_AFRH_AFRH12 (const uint32_t inValue) { return (inValue & 15U) << 16 ; }

  // Field (width: 4 bits): Alternate function selection for port x
              bit y (y = 8..15)
    inline uint32_t GPIO_AFRH_AFRH13 (const uint32_t inValue) { return (inValue & 15U) << 20 ; }

  // Field (width: 4 bits): Alternate function selection for port x
              bit y (y = 8..15)
    inline uint32_t GPIO_AFRH_AFRH10 (const uint32_t inValue) { return (inValue & 15U) << 8 ; }

  // Field (width: 4 bits): Alternate function selection for port x
              bit y (y = 8..15)
    inline uint32_t GPIO_AFRH_AFRH11 (const uint32_t inValue) { return (inValue & 15U) << 12 ; }

  // Field (width: 4 bits): Alternate function selection for port x
              bit y (y = 8..15)
    inline uint32_t GPIO_AFRH_AFRH14 (const uint32_t inValue) { return (inValue & 15U) << 24 ; }

  // Field (width: 4 bits): Alternate function selection for port x
              bit y (y = 8..15)
    inline uint32_t GPIO_AFRH_AFRH15 (const uint32_t inValue) { return (inValue & 15U) << 28 ; }

//-------------------- GPIO port pull-up/pull-down
          register
#define GPIO_PUPDR(group) (* ((volatile uint32_t *) (kBaseAddress_GPIO [group] + 0xC)))
#define GPIOA_PUPDR (* ((volatile uint32_t *) (0x48000000 + 0xC)))
#define GPIOB_PUPDR (* ((volatile uint32_t *) (0x48000400 + 0xC)))
#define GPIOC_PUPDR (* ((volatile uint32_t *) (0x48000800 + 0xC)))

  // Field (width: 2 bits): Port x configuration bits (y =
              0..15)
    inline uint32_t GPIO_PUPDR_PUPDR6 (const uint32_t inValue) { return (inValue & 3U) << 12 ; }

  // Field (width: 2 bits): Port x configuration bits (y =
              0..15)
    inline uint32_t GPIO_PUPDR_PUPDR1 (const uint32_t inValue) { return (inValue & 3U) << 2 ; }

  // Field (width: 2 bits): Port x configuration bits (y =
              0..15)
    inline uint32_t GPIO_PUPDR_PUPDR0 (const uint32_t inValue) { return (inValue & 3U) << 0 ; }

  // Field (width: 2 bits): Port x configuration bits (y =
              0..15)
    inline uint32_t GPIO_PUPDR_PUPDR5 (const uint32_t inValue) { return (inValue & 3U) << 10 ; }

  // Field (width: 2 bits): Port x configuration bits (y =
              0..15)
    inline uint32_t GPIO_PUPDR_PUPDR7 (const uint32_t inValue) { return (inValue & 3U) << 14 ; }

  // Field (width: 2 bits): Port x configuration bits (y =
              0..15)
    inline uint32_t GPIO_PUPDR_PUPDR9 (const uint32_t inValue) { return (inValue & 3U) << 18 ; }

  // Field (width: 2 bits): Port x configuration bits (y =
              0..15)
    inline uint32_t GPIO_PUPDR_PUPDR8 (const uint32_t inValue) { return (inValue & 3U) << 16 ; }

  // Field (width: 2 bits): Port x configuration bits (y =
              0..15)
    inline uint32_t GPIO_PUPDR_PUPDR4 (const uint32_t inValue) { return (inValue & 3U) << 8 ; }

  // Field (width: 2 bits): Port x configuration bits (y =
              0..15)
    inline uint32_t GPIO_PUPDR_PUPDR11 (const uint32_t inValue) { return (inValue & 3U) << 22 ; }

  // Field (width: 2 bits): Port x configuration bits (y =
              0..15)
    inline uint32_t GPIO_PUPDR_PUPDR10 (const uint32_t inValue) { return (inValue & 3U) << 20 ; }

  // Field (width: 2 bits): Port x configuration bits (y =
              0..15)
    inline uint32_t GPIO_PUPDR_PUPDR13 (const uint32_t inValue) { return (inValue & 3U) << 26 ; }

  // Field (width: 2 bits): Port x configuration bits (y =
              0..15)
    inline uint32_t GPIO_PUPDR_PUPDR12 (const uint32_t inValue) { return (inValue & 3U) << 24 ; }

  // Field (width: 2 bits): Port x configuration bits (y =
              0..15)
    inline uint32_t GPIO_PUPDR_PUPDR15 (const uint32_t inValue) { return (inValue & 3U) << 30 ; }

  // Field (width: 2 bits): Port x configuration bits (y =
              0..15)
    inline uint32_t GPIO_PUPDR_PUPDR14 (const uint32_t inValue) { return (inValue & 3U) << 28 ; }

  // Field (width: 2 bits): Port x configuration bits (y =
              0..15)
    inline uint32_t GPIO_PUPDR_PUPDR3 (const uint32_t inValue) { return (inValue & 3U) << 6 ; }

  // Field (width: 2 bits): Port x configuration bits (y =
              0..15)
    inline uint32_t GPIO_PUPDR_PUPDR2 (const uint32_t inValue) { return (inValue & 3U) << 4 ; }

//-------------------- GPIO port output speed
          register
#define GPIO_OSPEEDR(group) (* ((volatile uint32_t *) (kBaseAddress_GPIO [group] + 0x8)))
#define GPIOA_OSPEEDR (* ((volatile uint32_t *) (0x48000000 + 0x8)))
#define GPIOB_OSPEEDR (* ((volatile uint32_t *) (0x48000400 + 0x8)))
#define GPIOC_OSPEEDR (* ((volatile uint32_t *) (0x48000800 + 0x8)))

  // Field (width: 2 bits): Port x configuration bits (y =
              0..15)
    inline uint32_t GPIO_OSPEEDR_OSPEEDR14 (const uint32_t inValue) { return (inValue & 3U) << 28 ; }

  // Field (width: 2 bits): Port x configuration bits (y =
              0..15)
    inline uint32_t GPIO_OSPEEDR_OSPEEDR15 (const uint32_t inValue) { return (inValue & 3U) << 30 ; }

  // Field (width: 2 bits): Port x configuration bits (y =
              0..15)
    inline uint32_t GPIO_OSPEEDR_OSPEEDR10 (const uint32_t inValue) { return (inValue & 3U) << 20 ; }

  // Field (width: 2 bits): Port x configuration bits (y =
              0..15)
    inline uint32_t GPIO_OSPEEDR_OSPEEDR11 (const uint32_t inValue) { return (inValue & 3U) << 22 ; }

  // Field (width: 2 bits): Port x configuration bits (y =
              0..15)
    inline uint32_t GPIO_OSPEEDR_OSPEEDR12 (const uint32_t inValue) { return (inValue & 3U) << 24 ; }

  // Field (width: 2 bits): Port x configuration bits (y =
              0..15)
    inline uint32_t GPIO_OSPEEDR_OSPEEDR13 (const uint32_t inValue) { return (inValue & 3U) << 26 ; }

  // Field (width: 2 bits): Port x configuration bits (y =
              0..15)
    inline uint32_t GPIO_OSPEEDR_OSPEEDR6 (const uint32_t inValue) { return (inValue & 3U) << 12 ; }

  // Field (width: 2 bits): Port x configuration bits (y =
              0..15)
    inline uint32_t GPIO_OSPEEDR_OSPEEDR7 (const uint32_t inValue) { return (inValue & 3U) << 14 ; }

  // Field (width: 2 bits): Port x configuration bits (y =
              0..15)
    inline uint32_t GPIO_OSPEEDR_OSPEEDR4 (const uint32_t inValue) { return (inValue & 3U) << 8 ; }

  // Field (width: 2 bits): Port x configuration bits (y =
              0..15)
    inline uint32_t GPIO_OSPEEDR_OSPEEDR5 (const uint32_t inValue) { return (inValue & 3U) << 10 ; }

  // Field (width: 2 bits): Port x configuration bits (y =
              0..15)
    inline uint32_t GPIO_OSPEEDR_OSPEEDR2 (const uint32_t inValue) { return (inValue & 3U) << 4 ; }

  // Field (width: 2 bits): Port x configuration bits (y =
              0..15)
    inline uint32_t GPIO_OSPEEDR_OSPEEDR3 (const uint32_t inValue) { return (inValue & 3U) << 6 ; }

  // Field (width: 2 bits): Port x configuration bits (y =
              0..15)
    inline uint32_t GPIO_OSPEEDR_OSPEEDR0 (const uint32_t inValue) { return (inValue & 3U) << 0 ; }

  // Field (width: 2 bits): Port x configuration bits (y =
              0..15)
    inline uint32_t GPIO_OSPEEDR_OSPEEDR1 (const uint32_t inValue) { return (inValue & 3U) << 2 ; }

  // Field (width: 2 bits): Port x configuration bits (y =
              0..15)
    inline uint32_t GPIO_OSPEEDR_OSPEEDR8 (const uint32_t inValue) { return (inValue & 3U) << 16 ; }

  // Field (width: 2 bits): Port x configuration bits (y =
              0..15)
    inline uint32_t GPIO_OSPEEDR_OSPEEDR9 (const uint32_t inValue) { return (inValue & 3U) << 18 ; }

//-------------------- GPIO alternate function low
          register
#define GPIO_AFRL(group) (* ((volatile uint32_t *) (kBaseAddress_GPIO [group] + 0x20)))
#define GPIOA_AFRL (* ((volatile uint32_t *) (0x48000000 + 0x20)))
#define GPIOB_AFRL (* ((volatile uint32_t *) (0x48000400 + 0x20)))
#define GPIOC_AFRL (* ((volatile uint32_t *) (0x48000800 + 0x20)))

  // Field (width: 4 bits): Alternate function selection for port x
              bit y (y = 0..7)
    inline uint32_t GPIO_AFRL_AFRL4 (const uint32_t inValue) { return (inValue & 15U) << 16 ; }

  // Field (width: 4 bits): Alternate function selection for port x
              bit y (y = 0..7)
    inline uint32_t GPIO_AFRL_AFRL5 (const uint32_t inValue) { return (inValue & 15U) << 20 ; }

  // Field (width: 4 bits): Alternate function selection for port x
              bit y (y = 0..7)
    inline uint32_t GPIO_AFRL_AFRL6 (const uint32_t inValue) { return (inValue & 15U) << 24 ; }

  // Field (width: 4 bits): Alternate function selection for port x
              bit y (y = 0..7)
    inline uint32_t GPIO_AFRL_AFRL7 (const uint32_t inValue) { return (inValue & 15U) << 28 ; }

  // Field (width: 4 bits): Alternate function selection for port x
              bit y (y = 0..7)
    inline uint32_t GPIO_AFRL_AFRL0 (const uint32_t inValue) { return (inValue & 15U) << 0 ; }

  // Field (width: 4 bits): Alternate function selection for port x
              bit y (y = 0..7)
    inline uint32_t GPIO_AFRL_AFRL1 (const uint32_t inValue) { return (inValue & 15U) << 4 ; }

  // Field (width: 4 bits): Alternate function selection for port x
              bit y (y = 0..7)
    inline uint32_t GPIO_AFRL_AFRL2 (const uint32_t inValue) { return (inValue & 15U) << 8 ; }

  // Field (width: 4 bits): Alternate function selection for port x
              bit y (y = 0..7)
    inline uint32_t GPIO_AFRL_AFRL3 (const uint32_t inValue) { return (inValue & 15U) << 12 ; }

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
// Peripheral group I2C
//                I2C1 at 0x40005400
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

static const uint32_t kBaseAddress_I2C [1] = {0x40005400} ;

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

//-------------------- Control register 2
#define I2C_CR2(group) (* ((volatile uint32_t *) (kBaseAddress_I2C [group] + 0x4)))
#define I2C1_CR2 (* ((volatile uint32_t *) (0x40005400 + 0x4)))

  // Field (width: 10 bits): Slave address bit (master
              mode)
    inline uint32_t I2C_CR2_SADD (const uint32_t inValue) { return (inValue & 1023U) << 0 ; }

  // Boolean field: Start generation
    static const uint32_t I2C_CR2_START = 1U << 13 ;

  // Boolean field: NACK generation (slave
              mode)
    static const uint32_t I2C_CR2_NACK = 1U << 15 ;

  // Boolean field: Transfer direction (master
              mode)
    static const uint32_t I2C_CR2_RD_WRN = 1U << 10 ;

  // Boolean field: Stop generation (master
              mode)
    static const uint32_t I2C_CR2_STOP = 1U << 14 ;

  // Boolean field: Packet error checking byte
    static const uint32_t I2C_CR2_PECBYTE = 1U << 26 ;

  // Boolean field: NBYTES reload mode
    static const uint32_t I2C_CR2_RELOAD = 1U << 24 ;

  // Boolean field: 10-bit addressing mode (master
              mode)
    static const uint32_t I2C_CR2_ADD10 = 1U << 11 ;

  // Field (width: 8 bits): Number of bytes
    inline uint32_t I2C_CR2_NBYTES (const uint32_t inValue) { return (inValue & 255U) << 16 ; }

  // Boolean field: Automatic end mode (master
              mode)
    static const uint32_t I2C_CR2_AUTOEND = 1U << 25 ;

  // Boolean field: 10-bit address header only read
              direction (master receiver mode)
    static const uint32_t I2C_CR2_HEAD10R = 1U << 12 ;

//-------------------- PEC register
#define I2C_PECR(group) (* ((const volatile uint32_t *) (kBaseAddress_I2C [group] + 0x20)))
#define I2C1_PECR (* ((const volatile uint32_t *) (0x40005400 + 0x20)))

  // Field (width: 8 bits): Packet error checking
              register
    inline uint32_t I2C_PECR_PEC (const uint32_t inValue) { return (inValue & 255U) << 0 ; }

//-------------------- Control register 1
#define I2C_CR1(group) (* ((volatile uint32_t *) (kBaseAddress_I2C [group] + 0x0)))
#define I2C1_CR1 (* ((volatile uint32_t *) (0x40005400 + 0x0)))

  // Boolean field: DMA reception requests
              enable
    static const uint32_t I2C_CR1_RXDMAEN = 1U << 15 ;

  // Field (width: 4 bits): Digital noise filter
    inline uint32_t I2C_CR1_DNF (const uint32_t inValue) { return (inValue & 15U) << 8 ; }

  // Boolean field: Wakeup from STOP enable
    static const uint32_t I2C_CR1_WUPEN = 1U << 18 ;

  // Boolean field: Analog noise filter OFF
    static const uint32_t I2C_CR1_ANFOFF = 1U << 12 ;

  // Boolean field: SMBus Host address enable
    static const uint32_t I2C_CR1_SMBHEN = 1U << 20 ;

  // Boolean field: RX Interrupt enable
    static const uint32_t I2C_CR1_RXIE = 1U << 2 ;

  // Boolean field: Not acknowledge received interrupt
              enable
    static const uint32_t I2C_CR1_NACKIE = 1U << 4 ;

  // Boolean field: Clock stretching disable
    static const uint32_t I2C_CR1_NOSTRETCH = 1U << 17 ;

  // Boolean field: TX Interrupt enable
    static const uint32_t I2C_CR1_TXIE = 1U << 1 ;

  // Boolean field: Transfer Complete interrupt
              enable
    static const uint32_t I2C_CR1_TCIE = 1U << 6 ;

  // Boolean field: STOP detection Interrupt
              enable
    static const uint32_t I2C_CR1_STOPIE = 1U << 5 ;

  // Boolean field: Slave byte control
    static const uint32_t I2C_CR1_SBC = 1U << 16 ;

  // Boolean field: Error interrupts enable
    static const uint32_t I2C_CR1_ERRIE = 1U << 7 ;

  // Boolean field: DMA transmission requests
              enable
    static const uint32_t I2C_CR1_TXDMAEN = 1U << 14 ;

  // Boolean field: SMBus Device Default address
              enable
    static const uint32_t I2C_CR1_SMBDEN = 1U << 21 ;

  // Boolean field: Peripheral enable
    static const uint32_t I2C_CR1_PE = 1U << 0 ;

  // Boolean field: SMBUS alert enable
    static const uint32_t I2C_CR1_ALERTEN = 1U << 22 ;

  // Boolean field: PEC enable
    static const uint32_t I2C_CR1_PECEN = 1U << 23 ;

  // Boolean field: Address match interrupt enable (slave
              only)
    static const uint32_t I2C_CR1_ADDRIE = 1U << 3 ;

  // Boolean field: General call enable
    static const uint32_t I2C_CR1_GCEN = 1U << 19 ;

//-------------------- Status register 1
#define I2C_TIMEOUTR(group) (* ((volatile uint32_t *) (kBaseAddress_I2C [group] + 0x14)))
#define I2C1_TIMEOUTR (* ((volatile uint32_t *) (0x40005400 + 0x14)))

  // Field (width: 12 bits): Bus timeout B
    inline uint32_t I2C_TIMEOUTR_TIMEOUTB (const uint32_t inValue) { return (inValue & 4095U) << 16 ; }

  // Field (width: 12 bits): Bus timeout A
    inline uint32_t I2C_TIMEOUTR_TIMEOUTA (const uint32_t inValue) { return (inValue & 4095U) << 0 ; }

  // Boolean field: Clock timeout enable
    static const uint32_t I2C_TIMEOUTR_TIMOUTEN = 1U << 15 ;

  // Boolean field: Extended clock timeout
              enable
    static const uint32_t I2C_TIMEOUTR_TEXTEN = 1U << 31 ;

  // Boolean field: Idle clock timeout
              detection
    static const uint32_t I2C_TIMEOUTR_TIDLE = 1U << 12 ;

//-------------------- Interrupt and Status register
#define I2C_ISR(group) (* ((const volatile uint32_t *) (kBaseAddress_I2C [group] + 0x18)))
#define I2C1_ISR (* ((const volatile uint32_t *) (0x40005400 + 0x18)))

  // Boolean field: Overrun/Underrun (slave
              mode)
    static const uint32_t I2C_ISR_OVR = 1U << 10 ;

  // Boolean field: Bus busy
    static const uint32_t I2C_ISR_BUSY = 1U << 15 ;

  // Boolean field: Not acknowledge received
              flag
    static const uint32_t I2C_ISR_NACKF = 1U << 4 ;

  // Boolean field: Arbitration lost
    static const uint32_t I2C_ISR_ARLO = 1U << 9 ;

  // Boolean field: Bus error
    static const uint32_t I2C_ISR_BERR = 1U << 8 ;

  // Field (width: 7 bits): Address match code (Slave
              mode)
    inline uint32_t I2C_ISR_ADDCODE (const uint32_t inValue) { return (inValue & 127U) << 17 ; }

  // Boolean field: Transmit data register empty
              (transmitters)
    static const uint32_t I2C_ISR_TXE = 1U << 0 ;

  // Boolean field: Transfer Complete Reload
    static const uint32_t I2C_ISR_TCR = 1U << 7 ;

  // Boolean field: Receive data register not empty
              (receivers)
    static const uint32_t I2C_ISR_RXNE = 1U << 2 ;

  // Boolean field: SMBus alert
    static const uint32_t I2C_ISR_ALERT = 1U << 13 ;

  // Boolean field: Timeout or t_low detection
              flag
    static const uint32_t I2C_ISR_TIMEOUT = 1U << 12 ;

  // Boolean field: PEC Error in reception
    static const uint32_t I2C_ISR_PECERR = 1U << 11 ;

  // Boolean field: Transmit interrupt status
              (transmitters)
    static const uint32_t I2C_ISR_TXIS = 1U << 1 ;

  // Boolean field: Stop detection flag
    static const uint32_t I2C_ISR_STOPF = 1U << 5 ;

  // Boolean field: Transfer Complete (master
              mode)
    static const uint32_t I2C_ISR_TC = 1U << 6 ;

  // Boolean field: Transfer direction (Slave
              mode)
    static const uint32_t I2C_ISR_DIR = 1U << 16 ;

  // Boolean field: Address matched (slave
              mode)
    static const uint32_t I2C_ISR_ADDR = 1U << 3 ;

//-------------------- Transmit data register
#define I2C_TXDR(group) (* ((volatile uint32_t *) (kBaseAddress_I2C [group] + 0x28)))
#define I2C1_TXDR (* ((volatile uint32_t *) (0x40005400 + 0x28)))

  // Field (width: 8 bits): 8-bit transmit data
    inline uint32_t I2C_TXDR_TXDATA (const uint32_t inValue) { return (inValue & 255U) << 0 ; }

//-------------------- Timing register
#define I2C_TIMINGR(group) (* ((volatile uint32_t *) (kBaseAddress_I2C [group] + 0x10)))
#define I2C1_TIMINGR (* ((volatile uint32_t *) (0x40005400 + 0x10)))

  // Field (width: 4 bits): Timing prescaler
    inline uint32_t I2C_TIMINGR_PRESC (const uint32_t inValue) { return (inValue & 15U) << 28 ; }

  // Field (width: 8 bits): SCL high period (master
              mode)
    inline uint32_t I2C_TIMINGR_SCLH (const uint32_t inValue) { return (inValue & 255U) << 8 ; }

  // Field (width: 4 bits): Data setup time
    inline uint32_t I2C_TIMINGR_SCLDEL (const uint32_t inValue) { return (inValue & 15U) << 20 ; }

  // Field (width: 8 bits): SCL low period (master
              mode)
    inline uint32_t I2C_TIMINGR_SCLL (const uint32_t inValue) { return (inValue & 255U) << 0 ; }

  // Field (width: 4 bits): Data hold time
    inline uint32_t I2C_TIMINGR_SDADEL (const uint32_t inValue) { return (inValue & 15U) << 16 ; }

//-------------------- Own address register 2
#define I2C_OAR2(group) (* ((volatile uint32_t *) (kBaseAddress_I2C [group] + 0xC)))
#define I2C1_OAR2 (* ((volatile uint32_t *) (0x40005400 + 0xC)))

  // Field (width: 7 bits): Interface address
    inline uint32_t I2C_OAR2_OA2 (const uint32_t inValue) { return (inValue & 127U) << 1 ; }

  // Boolean field: Own Address 2 enable
    static const uint32_t I2C_OAR2_OA2EN = 1U << 15 ;

  // Field (width: 3 bits): Own Address 2 masks
    inline uint32_t I2C_OAR2_OA2MSK (const uint32_t inValue) { return (inValue & 7U) << 8 ; }

//-------------------- Own address register 1
#define I2C_OAR1(group) (* ((volatile uint32_t *) (kBaseAddress_I2C [group] + 0x8)))
#define I2C1_OAR1 (* ((volatile uint32_t *) (0x40005400 + 0x8)))

  // Boolean field: Own Address 1 enable
    static const uint32_t I2C_OAR1_OA1EN = 1U << 15 ;

  // Field (width: 10 bits): Interface address
    inline uint32_t I2C_OAR1_OA1 (const uint32_t inValue) { return (inValue & 1023U) << 0 ; }

  // Boolean field: Own Address 1 10-bit mode
    static const uint32_t I2C_OAR1_OA1MODE = 1U << 10 ;

//-------------------- Interrupt clear register
#define I2C_ICR(group) (* ((volatile uint32_t *) (kBaseAddress_I2C [group] + 0x1C)))
#define I2C1_ICR (* ((volatile uint32_t *) (0x40005400 + 0x1C)))

  // Boolean field: Address Matched flag clear
    static const uint32_t I2C_ICR_ADDRCF = 1U << 3 ;

  // Boolean field: PEC Error flag clear
    static const uint32_t I2C_ICR_PECCF = 1U << 11 ;

  // Boolean field: Not Acknowledge flag clear
    static const uint32_t I2C_ICR_NACKCF = 1U << 4 ;

  // Boolean field: Stop detection flag clear
    static const uint32_t I2C_ICR_STOPCF = 1U << 5 ;

  // Boolean field: Timeout detection flag
              clear
    static const uint32_t I2C_ICR_TIMOUTCF = 1U << 12 ;

  // Boolean field: Alert flag clear
    static const uint32_t I2C_ICR_ALERTCF = 1U << 13 ;

  // Boolean field: Overrun/Underrun flag
              clear
    static const uint32_t I2C_ICR_OVRCF = 1U << 10 ;

  // Boolean field: Bus error flag clear
    static const uint32_t I2C_ICR_BERRCF = 1U << 8 ;

  // Boolean field: Arbitration lost flag
              clear
    static const uint32_t I2C_ICR_ARLOCF = 1U << 9 ;

//-------------------- Receive data register
#define I2C_RXDR(group) (* ((const volatile uint32_t *) (kBaseAddress_I2C [group] + 0x24)))
#define I2C1_RXDR (* ((const volatile uint32_t *) (0x40005400 + 0x24)))

  // Field (width: 8 bits): 8-bit receive data
    inline uint32_t I2C_RXDR_RXDATA (const uint32_t inValue) { return (inValue & 255U) << 0 ; }

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
// Peripheral group IWDG
//                IWDG at 0x40003000
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

static const uint32_t kBaseAddress_IWDG [1] = {0x40003000} ;

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

//-------------------- Prescaler register
#define IWDG_PR(group) (* ((volatile uint32_t *) (kBaseAddress_IWDG [group] + 0x4)))
#define IWDG_PR (* ((volatile uint32_t *) (0x40003000 + 0x4)))

  // Field (width: 3 bits): Prescaler divider
    inline uint32_t IWDG_PR_PR (const uint32_t inValue) { return (inValue & 7U) << 0 ; }

//-------------------- Key register
#define IWDG_KR(group) (* ((volatile uint32_t *) (kBaseAddress_IWDG [group] + 0x0)))
#define IWDG_KR (* ((volatile uint32_t *) (0x40003000 + 0x0)))

  // Field (width: 16 bits): Key value (write only, read
              0x0000)
    inline uint32_t IWDG_KR_KEY (const uint32_t inValue) { return (inValue & 65535U) << 0 ; }

//-------------------- Window register
#define IWDG_WINR(group) (* ((volatile uint32_t *) (kBaseAddress_IWDG [group] + 0x10)))
#define IWDG_WINR (* ((volatile uint32_t *) (0x40003000 + 0x10)))

  // Field (width: 12 bits): Watchdog counter window
              value
    inline uint32_t IWDG_WINR_WIN (const uint32_t inValue) { return (inValue & 4095U) << 0 ; }

//-------------------- Status register
#define IWDG_SR(group) (* ((const volatile uint32_t *) (kBaseAddress_IWDG [group] + 0xC)))
#define IWDG_SR (* ((const volatile uint32_t *) (0x40003000 + 0xC)))

  // Boolean field: Watchdog prescaler value
              update
    static const uint32_t IWDG_SR_PVU = 1U << 0 ;

  // Boolean field: Watchdog counter reload value
              update
    static const uint32_t IWDG_SR_RVU = 1U << 1 ;

  // Boolean field: Watchdog counter window value
              update
    static const uint32_t IWDG_SR_WVU = 1U << 2 ;

//-------------------- Reload register
#define IWDG_RLR(group) (* ((volatile uint32_t *) (kBaseAddress_IWDG [group] + 0x8)))
#define IWDG_RLR (* ((volatile uint32_t *) (0x40003000 + 0x8)))

  // Field (width: 12 bits): Watchdog counter reload
              value
    inline uint32_t IWDG_RLR_RL (const uint32_t inValue) { return (inValue & 4095U) << 0 ; }

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
// Peripheral group LCD
//                LCD at 0x40002400
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

static const uint32_t kBaseAddress_LCD [1] = {0x40002400} ;

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

//-------------------- display memory
#define LCD_RAM_COM6(group) (* ((volatile uint32_t *) (kBaseAddress_LCD [group] + 0x44)))
#define LCD_RAM_COM6 (* ((volatile uint32_t *) (0x40002400 + 0x44)))

  // Boolean field: S31
    static const uint32_t LCD_RAM_COM6_S31 = 1U << 31 ;

  // Boolean field: S16
    static const uint32_t LCD_RAM_COM6_S16 = 1U << 16 ;

  // Boolean field: S19
    static const uint32_t LCD_RAM_COM6_S19 = 1U << 19 ;

  // Boolean field: S18
    static const uint32_t LCD_RAM_COM6_S18 = 1U << 18 ;

  // Boolean field: S13
    static const uint32_t LCD_RAM_COM6_S13 = 1U << 13 ;

  // Boolean field: S12
    static const uint32_t LCD_RAM_COM6_S12 = 1U << 12 ;

  // Boolean field: S11
    static const uint32_t LCD_RAM_COM6_S11 = 1U << 11 ;

  // Boolean field: S10
    static const uint32_t LCD_RAM_COM6_S10 = 1U << 10 ;

  // Boolean field: S17
    static const uint32_t LCD_RAM_COM6_S17 = 1U << 17 ;

  // Boolean field: S30
    static const uint32_t LCD_RAM_COM6_S30 = 1U << 30 ;

  // Boolean field: S15
    static const uint32_t LCD_RAM_COM6_S15 = 1U << 15 ;

  // Boolean field: S14
    static const uint32_t LCD_RAM_COM6_S14 = 1U << 14 ;

  // Boolean field: S22
    static const uint32_t LCD_RAM_COM6_S22 = 1U << 22 ;

  // Boolean field: S23
    static const uint32_t LCD_RAM_COM6_S23 = 1U << 23 ;

  // Boolean field: S20
    static const uint32_t LCD_RAM_COM6_S20 = 1U << 20 ;

  // Boolean field: S21
    static const uint32_t LCD_RAM_COM6_S21 = 1U << 21 ;

  // Boolean field: S26
    static const uint32_t LCD_RAM_COM6_S26 = 1U << 26 ;

  // Boolean field: S27
    static const uint32_t LCD_RAM_COM6_S27 = 1U << 27 ;

  // Boolean field: S24
    static const uint32_t LCD_RAM_COM6_S24 = 1U << 24 ;

  // Boolean field: S25
    static const uint32_t LCD_RAM_COM6_S25 = 1U << 25 ;

  // Boolean field: S28
    static const uint32_t LCD_RAM_COM6_S28 = 1U << 28 ;

  // Boolean field: S29
    static const uint32_t LCD_RAM_COM6_S29 = 1U << 29 ;

  // Boolean field: S08
    static const uint32_t LCD_RAM_COM6_S08 = 1U << 8 ;

  // Boolean field: S09
    static const uint32_t LCD_RAM_COM6_S09 = 1U << 9 ;

  // Boolean field: S00
    static const uint32_t LCD_RAM_COM6_S00 = 1U << 0 ;

  // Boolean field: S01
    static const uint32_t LCD_RAM_COM6_S01 = 1U << 1 ;

  // Boolean field: S02
    static const uint32_t LCD_RAM_COM6_S02 = 1U << 2 ;

  // Boolean field: S03
    static const uint32_t LCD_RAM_COM6_S03 = 1U << 3 ;

  // Boolean field: S04
    static const uint32_t LCD_RAM_COM6_S04 = 1U << 4 ;

  // Boolean field: S05
    static const uint32_t LCD_RAM_COM6_S05 = 1U << 5 ;

  // Boolean field: S06
    static const uint32_t LCD_RAM_COM6_S06 = 1U << 6 ;

  // Boolean field: S07
    static const uint32_t LCD_RAM_COM6_S07 = 1U << 7 ;

//-------------------- display memory
#define LCD_RAM_COM7(group) (* ((volatile uint32_t *) (kBaseAddress_LCD [group] + 0x4C)))
#define LCD_RAM_COM7 (* ((volatile uint32_t *) (0x40002400 + 0x4C)))

  // Boolean field: S31
    static const uint32_t LCD_RAM_COM7_S31 = 1U << 31 ;

  // Boolean field: S16
    static const uint32_t LCD_RAM_COM7_S16 = 1U << 16 ;

  // Boolean field: S19
    static const uint32_t LCD_RAM_COM7_S19 = 1U << 19 ;

  // Boolean field: S18
    static const uint32_t LCD_RAM_COM7_S18 = 1U << 18 ;

  // Boolean field: S13
    static const uint32_t LCD_RAM_COM7_S13 = 1U << 13 ;

  // Boolean field: S12
    static const uint32_t LCD_RAM_COM7_S12 = 1U << 12 ;

  // Boolean field: S11
    static const uint32_t LCD_RAM_COM7_S11 = 1U << 11 ;

  // Boolean field: S10
    static const uint32_t LCD_RAM_COM7_S10 = 1U << 10 ;

  // Boolean field: S17
    static const uint32_t LCD_RAM_COM7_S17 = 1U << 17 ;

  // Boolean field: S30
    static const uint32_t LCD_RAM_COM7_S30 = 1U << 30 ;

  // Boolean field: S15
    static const uint32_t LCD_RAM_COM7_S15 = 1U << 15 ;

  // Boolean field: S14
    static const uint32_t LCD_RAM_COM7_S14 = 1U << 14 ;

  // Boolean field: S22
    static const uint32_t LCD_RAM_COM7_S22 = 1U << 22 ;

  // Boolean field: S23
    static const uint32_t LCD_RAM_COM7_S23 = 1U << 23 ;

  // Boolean field: S20
    static const uint32_t LCD_RAM_COM7_S20 = 1U << 20 ;

  // Boolean field: S21
    static const uint32_t LCD_RAM_COM7_S21 = 1U << 21 ;

  // Boolean field: S26
    static const uint32_t LCD_RAM_COM7_S26 = 1U << 26 ;

  // Boolean field: S27
    static const uint32_t LCD_RAM_COM7_S27 = 1U << 27 ;

  // Boolean field: S24
    static const uint32_t LCD_RAM_COM7_S24 = 1U << 24 ;

  // Boolean field: S25
    static const uint32_t LCD_RAM_COM7_S25 = 1U << 25 ;

  // Boolean field: S28
    static const uint32_t LCD_RAM_COM7_S28 = 1U << 28 ;

  // Boolean field: S29
    static const uint32_t LCD_RAM_COM7_S29 = 1U << 29 ;

  // Boolean field: S08
    static const uint32_t LCD_RAM_COM7_S08 = 1U << 8 ;

  // Boolean field: S09
    static const uint32_t LCD_RAM_COM7_S09 = 1U << 9 ;

  // Boolean field: S00
    static const uint32_t LCD_RAM_COM7_S00 = 1U << 0 ;

  // Boolean field: S01
    static const uint32_t LCD_RAM_COM7_S01 = 1U << 1 ;

  // Boolean field: S02
    static const uint32_t LCD_RAM_COM7_S02 = 1U << 2 ;

  // Boolean field: S03
    static const uint32_t LCD_RAM_COM7_S03 = 1U << 3 ;

  // Boolean field: S04
    static const uint32_t LCD_RAM_COM7_S04 = 1U << 4 ;

  // Boolean field: S05
    static const uint32_t LCD_RAM_COM7_S05 = 1U << 5 ;

  // Boolean field: S06
    static const uint32_t LCD_RAM_COM7_S06 = 1U << 6 ;

  // Boolean field: S07
    static const uint32_t LCD_RAM_COM7_S07 = 1U << 7 ;

//-------------------- frame control register
#define LCD_FCR(group) (* ((volatile uint32_t *) (kBaseAddress_LCD [group] + 0x4)))
#define LCD_FCR (* ((volatile uint32_t *) (0x40002400 + 0x4)))

  // Field (width: 4 bits): PS 16-bit prescaler
    inline uint32_t LCD_FCR_PS (const uint32_t inValue) { return (inValue & 15U) << 22 ; }

  // Boolean field: Update display done interrupt
              enable
    static const uint32_t LCD_FCR_UDDIE = 1U << 3 ;

  // Field (width: 3 bits): Contrast control
    inline uint32_t LCD_FCR_CC (const uint32_t inValue) { return (inValue & 7U) << 10 ; }

  // Field (width: 3 bits): Dead time duration
    inline uint32_t LCD_FCR_DEAD (const uint32_t inValue) { return (inValue & 7U) << 7 ; }

  // Field (width: 2 bits): Blink mode selection
    inline uint32_t LCD_FCR_BLINK (const uint32_t inValue) { return (inValue & 3U) << 16 ; }

  // Field (width: 3 bits): Pulse ON duration
    inline uint32_t LCD_FCR_PON (const uint32_t inValue) { return (inValue & 7U) << 4 ; }

  // Boolean field: High drive enable
    static const uint32_t LCD_FCR_HD = 1U << 0 ;

  // Field (width: 4 bits): DIV clock divider
    inline uint32_t LCD_FCR_DIV (const uint32_t inValue) { return (inValue & 15U) << 18 ; }

  // Boolean field: Start of frame interrupt
              enable
    static const uint32_t LCD_FCR_SOFIE = 1U << 1 ;

  // Field (width: 3 bits): Blink frequency selection
    inline uint32_t LCD_FCR_BLINKF (const uint32_t inValue) { return (inValue & 7U) << 13 ; }

//-------------------- display memory
#define LCD_RAM_COM5(group) (* ((volatile uint32_t *) (kBaseAddress_LCD [group] + 0x3C)))
#define LCD_RAM_COM5 (* ((volatile uint32_t *) (0x40002400 + 0x3C)))

  // Boolean field: S31
    static const uint32_t LCD_RAM_COM5_S31 = 1U << 31 ;

  // Boolean field: S16
    static const uint32_t LCD_RAM_COM5_S16 = 1U << 16 ;

  // Boolean field: S19
    static const uint32_t LCD_RAM_COM5_S19 = 1U << 19 ;

  // Boolean field: S18
    static const uint32_t LCD_RAM_COM5_S18 = 1U << 18 ;

  // Boolean field: S13
    static const uint32_t LCD_RAM_COM5_S13 = 1U << 13 ;

  // Boolean field: S12
    static const uint32_t LCD_RAM_COM5_S12 = 1U << 12 ;

  // Boolean field: S11
    static const uint32_t LCD_RAM_COM5_S11 = 1U << 11 ;

  // Boolean field: S10
    static const uint32_t LCD_RAM_COM5_S10 = 1U << 10 ;

  // Boolean field: S17
    static const uint32_t LCD_RAM_COM5_S17 = 1U << 17 ;

  // Boolean field: S30
    static const uint32_t LCD_RAM_COM5_S30 = 1U << 30 ;

  // Boolean field: S15
    static const uint32_t LCD_RAM_COM5_S15 = 1U << 15 ;

  // Boolean field: S14
    static const uint32_t LCD_RAM_COM5_S14 = 1U << 14 ;

  // Boolean field: S22
    static const uint32_t LCD_RAM_COM5_S22 = 1U << 22 ;

  // Boolean field: S23
    static const uint32_t LCD_RAM_COM5_S23 = 1U << 23 ;

  // Boolean field: S20
    static const uint32_t LCD_RAM_COM5_S20 = 1U << 20 ;

  // Boolean field: S21
    static const uint32_t LCD_RAM_COM5_S21 = 1U << 21 ;

  // Boolean field: S26
    static const uint32_t LCD_RAM_COM5_S26 = 1U << 26 ;

  // Boolean field: S27
    static const uint32_t LCD_RAM_COM5_S27 = 1U << 27 ;

  // Boolean field: S24
    static const uint32_t LCD_RAM_COM5_S24 = 1U << 24 ;

  // Boolean field: S25
    static const uint32_t LCD_RAM_COM5_S25 = 1U << 25 ;

  // Boolean field: S28
    static const uint32_t LCD_RAM_COM5_S28 = 1U << 28 ;

  // Boolean field: S29
    static const uint32_t LCD_RAM_COM5_S29 = 1U << 29 ;

  // Boolean field: S08
    static const uint32_t LCD_RAM_COM5_S08 = 1U << 8 ;

  // Boolean field: S09
    static const uint32_t LCD_RAM_COM5_S09 = 1U << 9 ;

  // Boolean field: S00
    static const uint32_t LCD_RAM_COM5_S00 = 1U << 0 ;

  // Boolean field: S01
    static const uint32_t LCD_RAM_COM5_S01 = 1U << 1 ;

  // Boolean field: S02
    static const uint32_t LCD_RAM_COM5_S02 = 1U << 2 ;

  // Boolean field: S03
    static const uint32_t LCD_RAM_COM5_S03 = 1U << 3 ;

  // Boolean field: S04
    static const uint32_t LCD_RAM_COM5_S04 = 1U << 4 ;

  // Boolean field: S05
    static const uint32_t LCD_RAM_COM5_S05 = 1U << 5 ;

  // Boolean field: S06
    static const uint32_t LCD_RAM_COM5_S06 = 1U << 6 ;

  // Boolean field: S07
    static const uint32_t LCD_RAM_COM5_S07 = 1U << 7 ;

//-------------------- display memory
#define LCD_RAM_COM2(group) (* ((volatile uint32_t *) (kBaseAddress_LCD [group] + 0x24)))
#define LCD_RAM_COM2 (* ((volatile uint32_t *) (0x40002400 + 0x24)))

  // Boolean field: S31
    static const uint32_t LCD_RAM_COM2_S31 = 1U << 31 ;

  // Boolean field: S16
    static const uint32_t LCD_RAM_COM2_S16 = 1U << 16 ;

  // Boolean field: S19
    static const uint32_t LCD_RAM_COM2_S19 = 1U << 19 ;

  // Boolean field: S18
    static const uint32_t LCD_RAM_COM2_S18 = 1U << 18 ;

  // Boolean field: S13
    static const uint32_t LCD_RAM_COM2_S13 = 1U << 13 ;

  // Boolean field: S12
    static const uint32_t LCD_RAM_COM2_S12 = 1U << 12 ;

  // Boolean field: S11
    static const uint32_t LCD_RAM_COM2_S11 = 1U << 11 ;

  // Boolean field: S10
    static const uint32_t LCD_RAM_COM2_S10 = 1U << 10 ;

  // Boolean field: S17
    static const uint32_t LCD_RAM_COM2_S17 = 1U << 17 ;

  // Boolean field: S30
    static const uint32_t LCD_RAM_COM2_S30 = 1U << 30 ;

  // Boolean field: S15
    static const uint32_t LCD_RAM_COM2_S15 = 1U << 15 ;

  // Boolean field: S14
    static const uint32_t LCD_RAM_COM2_S14 = 1U << 14 ;

  // Boolean field: S22
    static const uint32_t LCD_RAM_COM2_S22 = 1U << 22 ;

  // Boolean field: S23
    static const uint32_t LCD_RAM_COM2_S23 = 1U << 23 ;

  // Boolean field: S20
    static const uint32_t LCD_RAM_COM2_S20 = 1U << 20 ;

  // Boolean field: S21
    static const uint32_t LCD_RAM_COM2_S21 = 1U << 21 ;

  // Boolean field: S26
    static const uint32_t LCD_RAM_COM2_S26 = 1U << 26 ;

  // Boolean field: S27
    static const uint32_t LCD_RAM_COM2_S27 = 1U << 27 ;

  // Boolean field: S24
    static const uint32_t LCD_RAM_COM2_S24 = 1U << 24 ;

  // Boolean field: S25
    static const uint32_t LCD_RAM_COM2_S25 = 1U << 25 ;

  // Boolean field: S28
    static const uint32_t LCD_RAM_COM2_S28 = 1U << 28 ;

  // Boolean field: S29
    static const uint32_t LCD_RAM_COM2_S29 = 1U << 29 ;

  // Boolean field: S08
    static const uint32_t LCD_RAM_COM2_S08 = 1U << 8 ;

  // Boolean field: S09
    static const uint32_t LCD_RAM_COM2_S09 = 1U << 9 ;

  // Boolean field: S00
    static const uint32_t LCD_RAM_COM2_S00 = 1U << 0 ;

  // Boolean field: S01
    static const uint32_t LCD_RAM_COM2_S01 = 1U << 1 ;

  // Boolean field: S02
    static const uint32_t LCD_RAM_COM2_S02 = 1U << 2 ;

  // Boolean field: S03
    static const uint32_t LCD_RAM_COM2_S03 = 1U << 3 ;

  // Boolean field: S04
    static const uint32_t LCD_RAM_COM2_S04 = 1U << 4 ;

  // Boolean field: S05
    static const uint32_t LCD_RAM_COM2_S05 = 1U << 5 ;

  // Boolean field: S06
    static const uint32_t LCD_RAM_COM2_S06 = 1U << 6 ;

  // Boolean field: S07
    static const uint32_t LCD_RAM_COM2_S07 = 1U << 7 ;

//-------------------- display memory
#define LCD_RAM_COM3(group) (* ((volatile uint32_t *) (kBaseAddress_LCD [group] + 0x2C)))
#define LCD_RAM_COM3 (* ((volatile uint32_t *) (0x40002400 + 0x2C)))

  // Boolean field: S31
    static const uint32_t LCD_RAM_COM3_S31 = 1U << 31 ;

  // Boolean field: S16
    static const uint32_t LCD_RAM_COM3_S16 = 1U << 16 ;

  // Boolean field: S19
    static const uint32_t LCD_RAM_COM3_S19 = 1U << 19 ;

  // Boolean field: S18
    static const uint32_t LCD_RAM_COM3_S18 = 1U << 18 ;

  // Boolean field: S13
    static const uint32_t LCD_RAM_COM3_S13 = 1U << 13 ;

  // Boolean field: S12
    static const uint32_t LCD_RAM_COM3_S12 = 1U << 12 ;

  // Boolean field: S11
    static const uint32_t LCD_RAM_COM3_S11 = 1U << 11 ;

  // Boolean field: S10
    static const uint32_t LCD_RAM_COM3_S10 = 1U << 10 ;

  // Boolean field: S17
    static const uint32_t LCD_RAM_COM3_S17 = 1U << 17 ;

  // Boolean field: S30
    static const uint32_t LCD_RAM_COM3_S30 = 1U << 30 ;

  // Boolean field: S15
    static const uint32_t LCD_RAM_COM3_S15 = 1U << 15 ;

  // Boolean field: S14
    static const uint32_t LCD_RAM_COM3_S14 = 1U << 14 ;

  // Boolean field: S22
    static const uint32_t LCD_RAM_COM3_S22 = 1U << 22 ;

  // Boolean field: S23
    static const uint32_t LCD_RAM_COM3_S23 = 1U << 23 ;

  // Boolean field: S20
    static const uint32_t LCD_RAM_COM3_S20 = 1U << 20 ;

  // Boolean field: S21
    static const uint32_t LCD_RAM_COM3_S21 = 1U << 21 ;

  // Boolean field: S26
    static const uint32_t LCD_RAM_COM3_S26 = 1U << 26 ;

  // Boolean field: S27
    static const uint32_t LCD_RAM_COM3_S27 = 1U << 27 ;

  // Boolean field: S24
    static const uint32_t LCD_RAM_COM3_S24 = 1U << 24 ;

  // Boolean field: S25
    static const uint32_t LCD_RAM_COM3_S25 = 1U << 25 ;

  // Boolean field: S28
    static const uint32_t LCD_RAM_COM3_S28 = 1U << 28 ;

  // Boolean field: S29
    static const uint32_t LCD_RAM_COM3_S29 = 1U << 29 ;

  // Boolean field: S08
    static const uint32_t LCD_RAM_COM3_S08 = 1U << 8 ;

  // Boolean field: S09
    static const uint32_t LCD_RAM_COM3_S09 = 1U << 9 ;

  // Boolean field: S00
    static const uint32_t LCD_RAM_COM3_S00 = 1U << 0 ;

  // Boolean field: S01
    static const uint32_t LCD_RAM_COM3_S01 = 1U << 1 ;

  // Boolean field: S02
    static const uint32_t LCD_RAM_COM3_S02 = 1U << 2 ;

  // Boolean field: S03
    static const uint32_t LCD_RAM_COM3_S03 = 1U << 3 ;

  // Boolean field: S04
    static const uint32_t LCD_RAM_COM3_S04 = 1U << 4 ;

  // Boolean field: S05
    static const uint32_t LCD_RAM_COM3_S05 = 1U << 5 ;

  // Boolean field: S06
    static const uint32_t LCD_RAM_COM3_S06 = 1U << 6 ;

  // Boolean field: S07
    static const uint32_t LCD_RAM_COM3_S07 = 1U << 7 ;

//-------------------- display memory
#define LCD_RAM_COM0(group) (* ((volatile uint32_t *) (kBaseAddress_LCD [group] + 0x14)))
#define LCD_RAM_COM0 (* ((volatile uint32_t *) (0x40002400 + 0x14)))

  // Boolean field: S16
    static const uint32_t LCD_RAM_COM0_S16 = 1U << 16 ;

  // Boolean field: S19
    static const uint32_t LCD_RAM_COM0_S19 = 1U << 19 ;

  // Boolean field: S18
    static const uint32_t LCD_RAM_COM0_S18 = 1U << 18 ;

  // Boolean field: S13
    static const uint32_t LCD_RAM_COM0_S13 = 1U << 13 ;

  // Boolean field: S12
    static const uint32_t LCD_RAM_COM0_S12 = 1U << 12 ;

  // Boolean field: S11
    static const uint32_t LCD_RAM_COM0_S11 = 1U << 11 ;

  // Boolean field: S10
    static const uint32_t LCD_RAM_COM0_S10 = 1U << 10 ;

  // Boolean field: S17
    static const uint32_t LCD_RAM_COM0_S17 = 1U << 17 ;

  // Boolean field: S30
    static const uint32_t LCD_RAM_COM0_S30 = 1U << 30 ;

  // Boolean field: S15
    static const uint32_t LCD_RAM_COM0_S15 = 1U << 15 ;

  // Boolean field: S14
    static const uint32_t LCD_RAM_COM0_S14 = 1U << 14 ;

  // Boolean field: S22
    static const uint32_t LCD_RAM_COM0_S22 = 1U << 22 ;

  // Boolean field: S23
    static const uint32_t LCD_RAM_COM0_S23 = 1U << 23 ;

  // Boolean field: S20
    static const uint32_t LCD_RAM_COM0_S20 = 1U << 20 ;

  // Boolean field: S21
    static const uint32_t LCD_RAM_COM0_S21 = 1U << 21 ;

  // Boolean field: S26
    static const uint32_t LCD_RAM_COM0_S26 = 1U << 26 ;

  // Boolean field: S27
    static const uint32_t LCD_RAM_COM0_S27 = 1U << 27 ;

  // Boolean field: S24
    static const uint32_t LCD_RAM_COM0_S24 = 1U << 24 ;

  // Boolean field: S25
    static const uint32_t LCD_RAM_COM0_S25 = 1U << 25 ;

  // Boolean field: S28
    static const uint32_t LCD_RAM_COM0_S28 = 1U << 28 ;

  // Boolean field: S29
    static const uint32_t LCD_RAM_COM0_S29 = 1U << 29 ;

  // Boolean field: S08
    static const uint32_t LCD_RAM_COM0_S08 = 1U << 8 ;

  // Boolean field: S09
    static const uint32_t LCD_RAM_COM0_S09 = 1U << 9 ;

  // Boolean field: S00
    static const uint32_t LCD_RAM_COM0_S00 = 1U << 0 ;

  // Boolean field: S01
    static const uint32_t LCD_RAM_COM0_S01 = 1U << 1 ;

  // Boolean field: S02
    static const uint32_t LCD_RAM_COM0_S02 = 1U << 2 ;

  // Boolean field: S03
    static const uint32_t LCD_RAM_COM0_S03 = 1U << 3 ;

  // Boolean field: S04
    static const uint32_t LCD_RAM_COM0_S04 = 1U << 4 ;

  // Boolean field: S05
    static const uint32_t LCD_RAM_COM0_S05 = 1U << 5 ;

  // Boolean field: S06
    static const uint32_t LCD_RAM_COM0_S06 = 1U << 6 ;

  // Boolean field: S07
    static const uint32_t LCD_RAM_COM0_S07 = 1U << 7 ;

//-------------------- display memory
#define LCD_RAM_COM1(group) (* ((volatile uint32_t *) (kBaseAddress_LCD [group] + 0x1C)))
#define LCD_RAM_COM1 (* ((volatile uint32_t *) (0x40002400 + 0x1C)))

  // Boolean field: S31
    static const uint32_t LCD_RAM_COM1_S31 = 1U << 31 ;

  // Boolean field: S16
    static const uint32_t LCD_RAM_COM1_S16 = 1U << 16 ;

  // Boolean field: S19
    static const uint32_t LCD_RAM_COM1_S19 = 1U << 19 ;

  // Boolean field: S18
    static const uint32_t LCD_RAM_COM1_S18 = 1U << 18 ;

  // Boolean field: S13
    static const uint32_t LCD_RAM_COM1_S13 = 1U << 13 ;

  // Boolean field: S12
    static const uint32_t LCD_RAM_COM1_S12 = 1U << 12 ;

  // Boolean field: S11
    static const uint32_t LCD_RAM_COM1_S11 = 1U << 11 ;

  // Boolean field: S10
    static const uint32_t LCD_RAM_COM1_S10 = 1U << 10 ;

  // Boolean field: S17
    static const uint32_t LCD_RAM_COM1_S17 = 1U << 17 ;

  // Boolean field: S30
    static const uint32_t LCD_RAM_COM1_S30 = 1U << 30 ;

  // Boolean field: S15
    static const uint32_t LCD_RAM_COM1_S15 = 1U << 15 ;

  // Boolean field: S14
    static const uint32_t LCD_RAM_COM1_S14 = 1U << 14 ;

  // Boolean field: S22
    static const uint32_t LCD_RAM_COM1_S22 = 1U << 22 ;

  // Boolean field: S23
    static const uint32_t LCD_RAM_COM1_S23 = 1U << 23 ;

  // Boolean field: S20
    static const uint32_t LCD_RAM_COM1_S20 = 1U << 20 ;

  // Boolean field: S21
    static const uint32_t LCD_RAM_COM1_S21 = 1U << 21 ;

  // Boolean field: S26
    static const uint32_t LCD_RAM_COM1_S26 = 1U << 26 ;

  // Boolean field: S27
    static const uint32_t LCD_RAM_COM1_S27 = 1U << 27 ;

  // Boolean field: S24
    static const uint32_t LCD_RAM_COM1_S24 = 1U << 24 ;

  // Boolean field: S25
    static const uint32_t LCD_RAM_COM1_S25 = 1U << 25 ;

  // Boolean field: S28
    static const uint32_t LCD_RAM_COM1_S28 = 1U << 28 ;

  // Boolean field: S29
    static const uint32_t LCD_RAM_COM1_S29 = 1U << 29 ;

  // Boolean field: S08
    static const uint32_t LCD_RAM_COM1_S08 = 1U << 8 ;

  // Boolean field: S09
    static const uint32_t LCD_RAM_COM1_S09 = 1U << 9 ;

  // Boolean field: S00
    static const uint32_t LCD_RAM_COM1_S00 = 1U << 0 ;

  // Boolean field: S01
    static const uint32_t LCD_RAM_COM1_S01 = 1U << 1 ;

  // Boolean field: S02
    static const uint32_t LCD_RAM_COM1_S02 = 1U << 2 ;

  // Boolean field: S03
    static const uint32_t LCD_RAM_COM1_S03 = 1U << 3 ;

  // Boolean field: S04
    static const uint32_t LCD_RAM_COM1_S04 = 1U << 4 ;

  // Boolean field: S05
    static const uint32_t LCD_RAM_COM1_S05 = 1U << 5 ;

  // Boolean field: S06
    static const uint32_t LCD_RAM_COM1_S06 = 1U << 6 ;

  // Boolean field: S07
    static const uint32_t LCD_RAM_COM1_S07 = 1U << 7 ;

//-------------------- status register
#define LCD_SR(group) (* ((const volatile uint32_t *) (kBaseAddress_LCD [group] + 0x8)))
#define LCD_SR (* ((const volatile uint32_t *) (0x40002400 + 0x8)))

  // Boolean field: Update display request
    static const uint32_t LCD_SR_UDR = 1U << 2 ;

  // Boolean field: Start of frame flag
    static const uint32_t LCD_SR_SOF = 1U << 1 ;

  // Boolean field: Ready flag
    static const uint32_t LCD_SR_RDY = 1U << 4 ;

  // Boolean field: LCD Frame Control Register
              Synchronization flag
    static const uint32_t LCD_SR_FCRSF = 1U << 5 ;

  // Boolean field: ENS
    static const uint32_t LCD_SR_ENS = 1U << 0 ;

  // Boolean field: Update Display Done
    static const uint32_t LCD_SR_UDD = 1U << 3 ;

//-------------------- display memory
#define LCD_RAM_COM4(group) (* ((volatile uint32_t *) (kBaseAddress_LCD [group] + 0x34)))
#define LCD_RAM_COM4 (* ((volatile uint32_t *) (0x40002400 + 0x34)))

  // Boolean field: S31
    static const uint32_t LCD_RAM_COM4_S31 = 1U << 31 ;

  // Boolean field: S16
    static const uint32_t LCD_RAM_COM4_S16 = 1U << 16 ;

  // Boolean field: S19
    static const uint32_t LCD_RAM_COM4_S19 = 1U << 19 ;

  // Boolean field: S18
    static const uint32_t LCD_RAM_COM4_S18 = 1U << 18 ;

  // Boolean field: S13
    static const uint32_t LCD_RAM_COM4_S13 = 1U << 13 ;

  // Boolean field: S12
    static const uint32_t LCD_RAM_COM4_S12 = 1U << 12 ;

  // Boolean field: S11
    static const uint32_t LCD_RAM_COM4_S11 = 1U << 11 ;

  // Boolean field: S10
    static const uint32_t LCD_RAM_COM4_S10 = 1U << 10 ;

  // Boolean field: S17
    static const uint32_t LCD_RAM_COM4_S17 = 1U << 17 ;

  // Boolean field: S30
    static const uint32_t LCD_RAM_COM4_S30 = 1U << 30 ;

  // Boolean field: S15
    static const uint32_t LCD_RAM_COM4_S15 = 1U << 15 ;

  // Boolean field: S14
    static const uint32_t LCD_RAM_COM4_S14 = 1U << 14 ;

  // Boolean field: S22
    static const uint32_t LCD_RAM_COM4_S22 = 1U << 22 ;

  // Boolean field: S23
    static const uint32_t LCD_RAM_COM4_S23 = 1U << 23 ;

  // Boolean field: S20
    static const uint32_t LCD_RAM_COM4_S20 = 1U << 20 ;

  // Boolean field: S21
    static const uint32_t LCD_RAM_COM4_S21 = 1U << 21 ;

  // Boolean field: S26
    static const uint32_t LCD_RAM_COM4_S26 = 1U << 26 ;

  // Boolean field: S27
    static const uint32_t LCD_RAM_COM4_S27 = 1U << 27 ;

  // Boolean field: S24
    static const uint32_t LCD_RAM_COM4_S24 = 1U << 24 ;

  // Boolean field: S25
    static const uint32_t LCD_RAM_COM4_S25 = 1U << 25 ;

  // Boolean field: S28
    static const uint32_t LCD_RAM_COM4_S28 = 1U << 28 ;

  // Boolean field: S29
    static const uint32_t LCD_RAM_COM4_S29 = 1U << 29 ;

  // Boolean field: S08
    static const uint32_t LCD_RAM_COM4_S08 = 1U << 8 ;

  // Boolean field: S09
    static const uint32_t LCD_RAM_COM4_S09 = 1U << 9 ;

  // Boolean field: S00
    static const uint32_t LCD_RAM_COM4_S00 = 1U << 0 ;

  // Boolean field: S01
    static const uint32_t LCD_RAM_COM4_S01 = 1U << 1 ;

  // Boolean field: S02
    static const uint32_t LCD_RAM_COM4_S02 = 1U << 2 ;

  // Boolean field: S03
    static const uint32_t LCD_RAM_COM4_S03 = 1U << 3 ;

  // Boolean field: S04
    static const uint32_t LCD_RAM_COM4_S04 = 1U << 4 ;

  // Boolean field: S05
    static const uint32_t LCD_RAM_COM4_S05 = 1U << 5 ;

  // Boolean field: S06
    static const uint32_t LCD_RAM_COM4_S06 = 1U << 6 ;

  // Boolean field: S07
    static const uint32_t LCD_RAM_COM4_S07 = 1U << 7 ;

//-------------------- control register
#define LCD_CR(group) (* ((volatile uint32_t *) (kBaseAddress_LCD [group] + 0x0)))
#define LCD_CR (* ((volatile uint32_t *) (0x40002400 + 0x0)))

  // Field (width: 3 bits): Duty selection
    inline uint32_t LCD_CR_DUTY (const uint32_t inValue) { return (inValue & 7U) << 2 ; }

  // Boolean field: Voltage output buffer
              enable
    static const uint32_t LCD_CR_BUFEN = 1U << 8 ;

  // Boolean field: LCD controller enable
    static const uint32_t LCD_CR_LCDEN = 1U << 0 ;

  // Boolean field: Voltage source selection
    static const uint32_t LCD_CR_VSEL = 1U << 1 ;

  // Field (width: 2 bits): Bias selector
    inline uint32_t LCD_CR_BIAS (const uint32_t inValue) { return (inValue & 3U) << 5 ; }

  // Boolean field: Mux segment enable
    static const uint32_t LCD_CR_MUX_SEG = 1U << 7 ;

//-------------------- clear register
#define LCD_CLR(group) (* ((volatile uint32_t *) (kBaseAddress_LCD [group] + 0xC)))
#define LCD_CLR (* ((volatile uint32_t *) (0x40002400 + 0xC)))

  // Boolean field: Update display done clear
    static const uint32_t LCD_CLR_UDDC = 1U << 3 ;

  // Boolean field: Start of frame flag clear
    static const uint32_t LCD_CLR_SOFC = 1U << 1 ;

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
// Peripheral group LPTIM
//                LPTIM1 at 0x40007C00
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

static const uint32_t kBaseAddress_LPTIM [1] = {0x40007C00} ;

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

//-------------------- Autoreload Register
#define LPTIM_ARR(group) (* ((volatile uint32_t *) (kBaseAddress_LPTIM [group] + 0x18)))
#define LPTIM1_ARR (* ((volatile uint32_t *) (0x40007C00 + 0x18)))

  // Field (width: 16 bits): Auto reload value
    inline uint32_t LPTIM_ARR_ARR (const uint32_t inValue) { return (inValue & 65535U) << 0 ; }

//-------------------- Configuration Register
#define LPTIM_CFGR(group) (* ((volatile uint32_t *) (kBaseAddress_LPTIM [group] + 0xC)))
#define LPTIM1_CFGR (* ((volatile uint32_t *) (0x40007C00 + 0xC)))

  // Boolean field: Registers update mode
    static const uint32_t LPTIM_CFGR_PRELOAD = 1U << 22 ;

  // Field (width: 3 bits): Trigger selector
    inline uint32_t LPTIM_CFGR_TRIGSEL (const uint32_t inValue) { return (inValue & 7U) << 13 ; }

  // Boolean field: Encoder mode enable
    static const uint32_t LPTIM_CFGR_ENC = 1U << 24 ;

  // Field (width: 2 bits): Trigger enable and
              polarity
    inline uint32_t LPTIM_CFGR_TRIGEN (const uint32_t inValue) { return (inValue & 3U) << 17 ; }

  // Boolean field: Clock selector
    static const uint32_t LPTIM_CFGR_CKSEL = 1U << 0 ;

  // Boolean field: Timeout enable
    static const uint32_t LPTIM_CFGR_TIMOUT = 1U << 19 ;

  // Field (width: 3 bits): Clock prescaler
    inline uint32_t LPTIM_CFGR_PRESC (const uint32_t inValue) { return (inValue & 7U) << 9 ; }

  // Field (width: 2 bits): Clock Polarity
    inline uint32_t LPTIM_CFGR_CKPOL (const uint32_t inValue) { return (inValue & 3U) << 1 ; }

  // Boolean field: Waveform shape
    static const uint32_t LPTIM_CFGR_WAVE = 1U << 20 ;

  // Boolean field: counter mode enabled
    static const uint32_t LPTIM_CFGR_COUNTMODE = 1U << 23 ;

  // Boolean field: Waveform shape polarity
    static const uint32_t LPTIM_CFGR_WAVPOL = 1U << 21 ;

  // Field (width: 2 bits): Configurable digital filter for external
              clock
    inline uint32_t LPTIM_CFGR_CKFLT (const uint32_t inValue) { return (inValue & 3U) << 3 ; }

  // Field (width: 2 bits): Configurable digital filter for
              trigger
    inline uint32_t LPTIM_CFGR_TRGFLT (const uint32_t inValue) { return (inValue & 3U) << 6 ; }

//-------------------- Interrupt and Status Register
#define LPTIM_ISR(group) (* ((const volatile uint32_t *) (kBaseAddress_LPTIM [group] + 0x0)))
#define LPTIM1_ISR (* ((const volatile uint32_t *) (0x40007C00 + 0x0)))

  // Boolean field: Autoreload register update
              OK
    static const uint32_t LPTIM_ISR_ARROK = 1U << 4 ;

  // Boolean field: Counter direction change down to
              up
    static const uint32_t LPTIM_ISR_UP = 1U << 5 ;

  // Boolean field: Compare match
    static const uint32_t LPTIM_ISR_CMPM = 1U << 0 ;

  // Boolean field: Counter direction change up to
              down
    static const uint32_t LPTIM_ISR_DOWN = 1U << 6 ;

  // Boolean field: External trigger edge
              event
    static const uint32_t LPTIM_ISR_EXTTRIG = 1U << 2 ;

  // Boolean field: Autoreload match
    static const uint32_t LPTIM_ISR_ARRM = 1U << 1 ;

  // Boolean field: Compare register update OK
    static const uint32_t LPTIM_ISR_CMPOK = 1U << 3 ;

//-------------------- Interrupt Enable Register
#define LPTIM_IER(group) (* ((volatile uint32_t *) (kBaseAddress_LPTIM [group] + 0x8)))
#define LPTIM1_IER (* ((volatile uint32_t *) (0x40007C00 + 0x8)))

  // Boolean field: Compare match Interrupt
              Enable
    static const uint32_t LPTIM_IER_CMPMIE = 1U << 0 ;

  // Boolean field: Direction change to down Interrupt
              Enable
    static const uint32_t LPTIM_IER_DOWNIE = 1U << 6 ;

  // Boolean field: Autoreload match Interrupt
              Enable
    static const uint32_t LPTIM_IER_ARRMIE = 1U << 1 ;

  // Boolean field: Direction change to UP Interrupt
              Enable
    static const uint32_t LPTIM_IER_UPIE = 1U << 5 ;

  // Boolean field: Autoreload register update OK Interrupt
              Enable
    static const uint32_t LPTIM_IER_ARROKIE = 1U << 4 ;

  // Boolean field: Compare register update OK Interrupt
              Enable
    static const uint32_t LPTIM_IER_CMPOKIE = 1U << 3 ;

  // Boolean field: External trigger valid edge Interrupt
              Enable
    static const uint32_t LPTIM_IER_EXTTRIGIE = 1U << 2 ;

//-------------------- Counter Register
#define LPTIM_CNT(group) (* ((const volatile uint32_t *) (kBaseAddress_LPTIM [group] + 0x1C)))
#define LPTIM1_CNT (* ((const volatile uint32_t *) (0x40007C00 + 0x1C)))

  // Field (width: 16 bits): Counter value
    inline uint32_t LPTIM_CNT_CNT (const uint32_t inValue) { return (inValue & 65535U) << 0 ; }

//-------------------- Interrupt Clear Register
#define LPTIM_ICR(group) (* ((volatile uint32_t *) (kBaseAddress_LPTIM [group] + 0x4)))
#define LPTIM1_ICR (* ((volatile uint32_t *) (0x40007C00 + 0x4)))

  // Boolean field: External trigger valid edge Clear
              Flag
    static const uint32_t LPTIM_ICR_EXTTRIGCF = 1U << 2 ;

  // Boolean field: Compare register update OK Clear
              Flag
    static const uint32_t LPTIM_ICR_CMPOKCF = 1U << 3 ;

  // Boolean field: Direction change to UP Clear
              Flag
    static const uint32_t LPTIM_ICR_UPCF = 1U << 5 ;

  // Boolean field: Autoreload register update OK Clear
              Flag
    static const uint32_t LPTIM_ICR_ARROKCF = 1U << 4 ;

  // Boolean field: compare match Clear Flag
    static const uint32_t LPTIM_ICR_CMPMCF = 1U << 0 ;

  // Boolean field: Autoreload match Clear
              Flag
    static const uint32_t LPTIM_ICR_ARRMCF = 1U << 1 ;

  // Boolean field: Direction change to down Clear
              Flag
    static const uint32_t LPTIM_ICR_DOWNCF = 1U << 6 ;

//-------------------- Control Register
#define LPTIM_CR(group) (* ((volatile uint32_t *) (kBaseAddress_LPTIM [group] + 0x10)))
#define LPTIM1_CR (* ((volatile uint32_t *) (0x40007C00 + 0x10)))

  // Boolean field: Timer start in continuous
              mode
    static const uint32_t LPTIM_CR_CNTSTRT = 1U << 2 ;

  // Boolean field: LPTIM start in single mode
    static const uint32_t LPTIM_CR_SNGSTRT = 1U << 1 ;

  // Boolean field: LPTIM Enable
    static const uint32_t LPTIM_CR_ENABLE = 1U << 0 ;

//-------------------- Compare Register
#define LPTIM_CMP(group) (* ((volatile uint32_t *) (kBaseAddress_LPTIM [group] + 0x14)))
#define LPTIM1_CMP (* ((volatile uint32_t *) (0x40007C00 + 0x14)))

  // Field (width: 16 bits): Compare value
    inline uint32_t LPTIM_CMP_CMP (const uint32_t inValue) { return (inValue & 65535U) << 0 ; }

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
// Peripheral group MPU
//                MPU at 0xE000ED90
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

static const uint32_t kBaseAddress_MPU [1] = {0xE000ED90} ;

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

//-------------------- MPU region number register
#define MPU_MPU_RNR(group) (* ((volatile uint32_t *) (kBaseAddress_MPU [group] + 0x8)))
#define MPU_MPU_RNR (* ((volatile uint32_t *) (0xE000ED90 + 0x8)))

  // Field (width: 8 bits): MPU region
    inline uint32_t MPU_MPU_RNR_REGION (const uint32_t inValue) { return (inValue & 255U) << 0 ; }

//-------------------- MPU control register
#define MPU_MPU_CTRL(group) (* ((const volatile uint32_t *) (kBaseAddress_MPU [group] + 0x4)))
#define MPU_MPU_CTRL (* ((const volatile uint32_t *) (0xE000ED90 + 0x4)))

  // Boolean field: Enable priviliged software access to
              default memory map
    static const uint32_t MPU_MPU_CTRL_PRIVDEFENA = 1U << 2 ;

  // Boolean field: Enables the MPU
    static const uint32_t MPU_MPU_CTRL_ENABLE = 1U << 0 ;

  // Boolean field: Enables the operation of MPU during hard
              fault
    static const uint32_t MPU_MPU_CTRL_HFNMIENA = 1U << 1 ;

//-------------------- MPU region base address
          register
#define MPU_MPU_RBAR(group) (* ((volatile uint32_t *) (kBaseAddress_MPU [group] + 0xC)))
#define MPU_MPU_RBAR (* ((volatile uint32_t *) (0xE000ED90 + 0xC)))

  // Field (width: 4 bits): MPU region field
    inline uint32_t MPU_MPU_RBAR_REGION (const uint32_t inValue) { return (inValue & 15U) << 0 ; }

  // Boolean field: MPU region number valid
    static const uint32_t MPU_MPU_RBAR_VALID = 1U << 4 ;

  // Field (width: 27 bits): Region base address field
    inline uint32_t MPU_MPU_RBAR_ADDR (const uint32_t inValue) { return (inValue & 134217727U) << 5 ; }

//-------------------- MPU type register
#define MPU_MPU_TYPER(group) (* ((const volatile uint32_t *) (kBaseAddress_MPU [group] + 0x0)))
#define MPU_MPU_TYPER (* ((const volatile uint32_t *) (0xE000ED90 + 0x0)))

  // Field (width: 8 bits): Number of MPU data regions
    inline uint32_t MPU_MPU_TYPER_DREGION (const uint32_t inValue) { return (inValue & 255U) << 8 ; }

  // Field (width: 8 bits): Number of MPU instruction
              regions
    inline uint32_t MPU_MPU_TYPER_IREGION (const uint32_t inValue) { return (inValue & 255U) << 16 ; }

  // Boolean field: Separate flag
    static const uint32_t MPU_MPU_TYPER_SEPARATE = 1U << 0 ;

//-------------------- MPU region attribute and size
          register
#define MPU_MPU_RASR(group) (* ((volatile uint32_t *) (kBaseAddress_MPU [group] + 0x10)))
#define MPU_MPU_RASR (* ((volatile uint32_t *) (0xE000ED90 + 0x10)))

  // Boolean field: memory attribute
    static const uint32_t MPU_MPU_RASR_C = 1U << 17 ;

  // Boolean field: memory attribute
    static const uint32_t MPU_MPU_RASR_B = 1U << 16 ;

  // Boolean field: Instruction access disable
              bit
    static const uint32_t MPU_MPU_RASR_XN = 1U << 28 ;

  // Field (width: 8 bits): Subregion disable bits
    inline uint32_t MPU_MPU_RASR_SRD (const uint32_t inValue) { return (inValue & 255U) << 8 ; }

  // Field (width: 3 bits): memory attribute
    inline uint32_t MPU_MPU_RASR_TEX (const uint32_t inValue) { return (inValue & 7U) << 19 ; }

  // Field (width: 3 bits): Access permission
    inline uint32_t MPU_MPU_RASR_AP (const uint32_t inValue) { return (inValue & 7U) << 24 ; }

  // Boolean field: Shareable memory attribute
    static const uint32_t MPU_MPU_RASR_S = 1U << 18 ;

  // Boolean field: Region enable bit.
    static const uint32_t MPU_MPU_RASR_ENABLE = 1U << 0 ;

  // Field (width: 5 bits): Size of the MPU protection
              region
    inline uint32_t MPU_MPU_RASR_SIZE (const uint32_t inValue) { return (inValue & 31U) << 1 ; }

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
// Peripheral group NVIC
//                NVIC at 0xE000E100
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

static const uint32_t kBaseAddress_NVIC [1] = {0xE000E100} ;

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

//-------------------- Interrupt Clear-Enable
          Register
#define NVIC_ICER1(group) (* ((volatile uint32_t *) (kBaseAddress_NVIC [group] + 0x84)))
#define NVIC_ICER1 (* ((volatile uint32_t *) (0xE000E100 + 0x84)))

//-------------------- Interrupt Active Bit Register
#define NVIC_IABR2(group) (* ((const volatile uint32_t *) (kBaseAddress_NVIC [group] + 0x208)))
#define NVIC_IABR2 (* ((const volatile uint32_t *) (0xE000E100 + 0x208)))

//-------------------- Interrupt Active Bit Register
#define NVIC_IABR1(group) (* ((const volatile uint32_t *) (kBaseAddress_NVIC [group] + 0x204)))
#define NVIC_IABR1 (* ((const volatile uint32_t *) (0xE000E100 + 0x204)))

//-------------------- Interrupt Active Bit Register
#define NVIC_IABR0(group) (* ((const volatile uint32_t *) (kBaseAddress_NVIC [group] + 0x200)))
#define NVIC_IABR0 (* ((const volatile uint32_t *) (0xE000E100 + 0x200)))

//-------------------- Interrupt Priority Register
#define NVIC_IPR9(group) (* ((volatile uint32_t *) (kBaseAddress_NVIC [group] + 0x324)))
#define NVIC_IPR9 (* ((volatile uint32_t *) (0xE000E100 + 0x324)))

  // Field (width: 8 bits): IPR_N2
    inline uint32_t NVIC_IPR9_IPR_N2 (const uint32_t inValue) { return (inValue & 255U) << 16 ; }

  // Field (width: 8 bits): IPR_N3
    inline uint32_t NVIC_IPR9_IPR_N3 (const uint32_t inValue) { return (inValue & 255U) << 24 ; }

  // Field (width: 8 bits): IPR_N0
    inline uint32_t NVIC_IPR9_IPR_N0 (const uint32_t inValue) { return (inValue & 255U) << 0 ; }

  // Field (width: 8 bits): IPR_N1
    inline uint32_t NVIC_IPR9_IPR_N1 (const uint32_t inValue) { return (inValue & 255U) << 8 ; }

//-------------------- Interrupt Priority Register
#define NVIC_IPR8(group) (* ((volatile uint32_t *) (kBaseAddress_NVIC [group] + 0x320)))
#define NVIC_IPR8 (* ((volatile uint32_t *) (0xE000E100 + 0x320)))

  // Field (width: 8 bits): IPR_N2
    inline uint32_t NVIC_IPR8_IPR_N2 (const uint32_t inValue) { return (inValue & 255U) << 16 ; }

  // Field (width: 8 bits): IPR_N3
    inline uint32_t NVIC_IPR8_IPR_N3 (const uint32_t inValue) { return (inValue & 255U) << 24 ; }

  // Field (width: 8 bits): IPR_N0
    inline uint32_t NVIC_IPR8_IPR_N0 (const uint32_t inValue) { return (inValue & 255U) << 0 ; }

  // Field (width: 8 bits): IPR_N1
    inline uint32_t NVIC_IPR8_IPR_N1 (const uint32_t inValue) { return (inValue & 255U) << 8 ; }

//-------------------- Interrupt Priority Register
#define NVIC_IPR5(group) (* ((volatile uint32_t *) (kBaseAddress_NVIC [group] + 0x314)))
#define NVIC_IPR5 (* ((volatile uint32_t *) (0xE000E100 + 0x314)))

  // Field (width: 8 bits): IPR_N2
    inline uint32_t NVIC_IPR5_IPR_N2 (const uint32_t inValue) { return (inValue & 255U) << 16 ; }

  // Field (width: 8 bits): IPR_N3
    inline uint32_t NVIC_IPR5_IPR_N3 (const uint32_t inValue) { return (inValue & 255U) << 24 ; }

  // Field (width: 8 bits): IPR_N0
    inline uint32_t NVIC_IPR5_IPR_N0 (const uint32_t inValue) { return (inValue & 255U) << 0 ; }

  // Field (width: 8 bits): IPR_N1
    inline uint32_t NVIC_IPR5_IPR_N1 (const uint32_t inValue) { return (inValue & 255U) << 8 ; }

//-------------------- Interrupt Priority Register
#define NVIC_IPR4(group) (* ((volatile uint32_t *) (kBaseAddress_NVIC [group] + 0x310)))
#define NVIC_IPR4 (* ((volatile uint32_t *) (0xE000E100 + 0x310)))

  // Field (width: 8 bits): IPR_N2
    inline uint32_t NVIC_IPR4_IPR_N2 (const uint32_t inValue) { return (inValue & 255U) << 16 ; }

  // Field (width: 8 bits): IPR_N3
    inline uint32_t NVIC_IPR4_IPR_N3 (const uint32_t inValue) { return (inValue & 255U) << 24 ; }

  // Field (width: 8 bits): IPR_N0
    inline uint32_t NVIC_IPR4_IPR_N0 (const uint32_t inValue) { return (inValue & 255U) << 0 ; }

  // Field (width: 8 bits): IPR_N1
    inline uint32_t NVIC_IPR4_IPR_N1 (const uint32_t inValue) { return (inValue & 255U) << 8 ; }

//-------------------- Interrupt Clear-Enable
          Register
#define NVIC_ICER0(group) (* ((volatile uint32_t *) (kBaseAddress_NVIC [group] + 0x80)))
#define NVIC_ICER0 (* ((volatile uint32_t *) (0xE000E100 + 0x80)))

//-------------------- Interrupt Priority Register
#define NVIC_IPR6(group) (* ((volatile uint32_t *) (kBaseAddress_NVIC [group] + 0x318)))
#define NVIC_IPR6 (* ((volatile uint32_t *) (0xE000E100 + 0x318)))

  // Field (width: 8 bits): IPR_N2
    inline uint32_t NVIC_IPR6_IPR_N2 (const uint32_t inValue) { return (inValue & 255U) << 16 ; }

  // Field (width: 8 bits): IPR_N3
    inline uint32_t NVIC_IPR6_IPR_N3 (const uint32_t inValue) { return (inValue & 255U) << 24 ; }

  // Field (width: 8 bits): IPR_N0
    inline uint32_t NVIC_IPR6_IPR_N0 (const uint32_t inValue) { return (inValue & 255U) << 0 ; }

  // Field (width: 8 bits): IPR_N1
    inline uint32_t NVIC_IPR6_IPR_N1 (const uint32_t inValue) { return (inValue & 255U) << 8 ; }

//-------------------- Interrupt Priority Register
#define NVIC_IPR1(group) (* ((volatile uint32_t *) (kBaseAddress_NVIC [group] + 0x304)))
#define NVIC_IPR1 (* ((volatile uint32_t *) (0xE000E100 + 0x304)))

  // Field (width: 8 bits): IPR_N2
    inline uint32_t NVIC_IPR1_IPR_N2 (const uint32_t inValue) { return (inValue & 255U) << 16 ; }

  // Field (width: 8 bits): IPR_N3
    inline uint32_t NVIC_IPR1_IPR_N3 (const uint32_t inValue) { return (inValue & 255U) << 24 ; }

  // Field (width: 8 bits): IPR_N0
    inline uint32_t NVIC_IPR1_IPR_N0 (const uint32_t inValue) { return (inValue & 255U) << 0 ; }

  // Field (width: 8 bits): IPR_N1
    inline uint32_t NVIC_IPR1_IPR_N1 (const uint32_t inValue) { return (inValue & 255U) << 8 ; }

//-------------------- Interrupt Priority Register
#define NVIC_IPR0(group) (* ((volatile uint32_t *) (kBaseAddress_NVIC [group] + 0x300)))
#define NVIC_IPR0 (* ((volatile uint32_t *) (0xE000E100 + 0x300)))

  // Field (width: 8 bits): IPR_N2
    inline uint32_t NVIC_IPR0_IPR_N2 (const uint32_t inValue) { return (inValue & 255U) << 16 ; }

  // Field (width: 8 bits): IPR_N3
    inline uint32_t NVIC_IPR0_IPR_N3 (const uint32_t inValue) { return (inValue & 255U) << 24 ; }

  // Field (width: 8 bits): IPR_N0
    inline uint32_t NVIC_IPR0_IPR_N0 (const uint32_t inValue) { return (inValue & 255U) << 0 ; }

  // Field (width: 8 bits): IPR_N1
    inline uint32_t NVIC_IPR0_IPR_N1 (const uint32_t inValue) { return (inValue & 255U) << 8 ; }

//-------------------- Interrupt Priority Register
#define NVIC_IPR3(group) (* ((volatile uint32_t *) (kBaseAddress_NVIC [group] + 0x30C)))
#define NVIC_IPR3 (* ((volatile uint32_t *) (0xE000E100 + 0x30C)))

  // Field (width: 8 bits): IPR_N2
    inline uint32_t NVIC_IPR3_IPR_N2 (const uint32_t inValue) { return (inValue & 255U) << 16 ; }

  // Field (width: 8 bits): IPR_N3
    inline uint32_t NVIC_IPR3_IPR_N3 (const uint32_t inValue) { return (inValue & 255U) << 24 ; }

  // Field (width: 8 bits): IPR_N0
    inline uint32_t NVIC_IPR3_IPR_N0 (const uint32_t inValue) { return (inValue & 255U) << 0 ; }

  // Field (width: 8 bits): IPR_N1
    inline uint32_t NVIC_IPR3_IPR_N1 (const uint32_t inValue) { return (inValue & 255U) << 8 ; }

//-------------------- Interrupt Priority Register
#define NVIC_IPR2(group) (* ((volatile uint32_t *) (kBaseAddress_NVIC [group] + 0x308)))
#define NVIC_IPR2 (* ((volatile uint32_t *) (0xE000E100 + 0x308)))

  // Field (width: 8 bits): IPR_N2
    inline uint32_t NVIC_IPR2_IPR_N2 (const uint32_t inValue) { return (inValue & 255U) << 16 ; }

  // Field (width: 8 bits): IPR_N3
    inline uint32_t NVIC_IPR2_IPR_N3 (const uint32_t inValue) { return (inValue & 255U) << 24 ; }

  // Field (width: 8 bits): IPR_N0
    inline uint32_t NVIC_IPR2_IPR_N0 (const uint32_t inValue) { return (inValue & 255U) << 0 ; }

  // Field (width: 8 bits): IPR_N1
    inline uint32_t NVIC_IPR2_IPR_N1 (const uint32_t inValue) { return (inValue & 255U) << 8 ; }

//-------------------- Interrupt Set-Enable Register
#define NVIC_ISER2(group) (* ((volatile uint32_t *) (kBaseAddress_NVIC [group] + 0x8)))
#define NVIC_ISER2 (* ((volatile uint32_t *) (0xE000E100 + 0x8)))

//-------------------- Interrupt Clear-Pending
          Register
#define NVIC_ICPR2(group) (* ((volatile uint32_t *) (kBaseAddress_NVIC [group] + 0x188)))
#define NVIC_ICPR2 (* ((volatile uint32_t *) (0xE000E100 + 0x188)))

//-------------------- Interrupt Clear-Pending
          Register
#define NVIC_ICPR1(group) (* ((volatile uint32_t *) (kBaseAddress_NVIC [group] + 0x184)))
#define NVIC_ICPR1 (* ((volatile uint32_t *) (0xE000E100 + 0x184)))

//-------------------- Interrupt Clear-Pending
          Register
#define NVIC_ICPR0(group) (* ((volatile uint32_t *) (kBaseAddress_NVIC [group] + 0x180)))
#define NVIC_ICPR0 (* ((volatile uint32_t *) (0xE000E100 + 0x180)))

//-------------------- Interrupt Priority Register
#define NVIC_IPR19(group) (* ((volatile uint32_t *) (kBaseAddress_NVIC [group] + 0x34C)))
#define NVIC_IPR19 (* ((volatile uint32_t *) (0xE000E100 + 0x34C)))

  // Field (width: 8 bits): IPR_N2
    inline uint32_t NVIC_IPR19_IPR_N2 (const uint32_t inValue) { return (inValue & 255U) << 16 ; }

  // Field (width: 8 bits): IPR_N3
    inline uint32_t NVIC_IPR19_IPR_N3 (const uint32_t inValue) { return (inValue & 255U) << 24 ; }

  // Field (width: 8 bits): IPR_N0
    inline uint32_t NVIC_IPR19_IPR_N0 (const uint32_t inValue) { return (inValue & 255U) << 0 ; }

  // Field (width: 8 bits): IPR_N1
    inline uint32_t NVIC_IPR19_IPR_N1 (const uint32_t inValue) { return (inValue & 255U) << 8 ; }

//-------------------- Interrupt Priority Register
#define NVIC_IPR18(group) (* ((volatile uint32_t *) (kBaseAddress_NVIC [group] + 0x348)))
#define NVIC_IPR18 (* ((volatile uint32_t *) (0xE000E100 + 0x348)))

  // Field (width: 8 bits): IPR_N2
    inline uint32_t NVIC_IPR18_IPR_N2 (const uint32_t inValue) { return (inValue & 255U) << 16 ; }

  // Field (width: 8 bits): IPR_N3
    inline uint32_t NVIC_IPR18_IPR_N3 (const uint32_t inValue) { return (inValue & 255U) << 24 ; }

  // Field (width: 8 bits): IPR_N0
    inline uint32_t NVIC_IPR18_IPR_N0 (const uint32_t inValue) { return (inValue & 255U) << 0 ; }

  // Field (width: 8 bits): IPR_N1
    inline uint32_t NVIC_IPR18_IPR_N1 (const uint32_t inValue) { return (inValue & 255U) << 8 ; }

//-------------------- Interrupt Priority Register
#define NVIC_IPR15(group) (* ((volatile uint32_t *) (kBaseAddress_NVIC [group] + 0x33C)))
#define NVIC_IPR15 (* ((volatile uint32_t *) (0xE000E100 + 0x33C)))

  // Field (width: 8 bits): IPR_N2
    inline uint32_t NVIC_IPR15_IPR_N2 (const uint32_t inValue) { return (inValue & 255U) << 16 ; }

  // Field (width: 8 bits): IPR_N3
    inline uint32_t NVIC_IPR15_IPR_N3 (const uint32_t inValue) { return (inValue & 255U) << 24 ; }

  // Field (width: 8 bits): IPR_N0
    inline uint32_t NVIC_IPR15_IPR_N0 (const uint32_t inValue) { return (inValue & 255U) << 0 ; }

  // Field (width: 8 bits): IPR_N1
    inline uint32_t NVIC_IPR15_IPR_N1 (const uint32_t inValue) { return (inValue & 255U) << 8 ; }

//-------------------- Interrupt Priority Register
#define NVIC_IPR14(group) (* ((volatile uint32_t *) (kBaseAddress_NVIC [group] + 0x338)))
#define NVIC_IPR14 (* ((volatile uint32_t *) (0xE000E100 + 0x338)))

  // Field (width: 8 bits): IPR_N2
    inline uint32_t NVIC_IPR14_IPR_N2 (const uint32_t inValue) { return (inValue & 255U) << 16 ; }

  // Field (width: 8 bits): IPR_N3
    inline uint32_t NVIC_IPR14_IPR_N3 (const uint32_t inValue) { return (inValue & 255U) << 24 ; }

  // Field (width: 8 bits): IPR_N0
    inline uint32_t NVIC_IPR14_IPR_N0 (const uint32_t inValue) { return (inValue & 255U) << 0 ; }

  // Field (width: 8 bits): IPR_N1
    inline uint32_t NVIC_IPR14_IPR_N1 (const uint32_t inValue) { return (inValue & 255U) << 8 ; }

//-------------------- Interrupt Priority Register
#define NVIC_IPR17(group) (* ((volatile uint32_t *) (kBaseAddress_NVIC [group] + 0x344)))
#define NVIC_IPR17 (* ((volatile uint32_t *) (0xE000E100 + 0x344)))

  // Field (width: 8 bits): IPR_N2
    inline uint32_t NVIC_IPR17_IPR_N2 (const uint32_t inValue) { return (inValue & 255U) << 16 ; }

  // Field (width: 8 bits): IPR_N3
    inline uint32_t NVIC_IPR17_IPR_N3 (const uint32_t inValue) { return (inValue & 255U) << 24 ; }

  // Field (width: 8 bits): IPR_N0
    inline uint32_t NVIC_IPR17_IPR_N0 (const uint32_t inValue) { return (inValue & 255U) << 0 ; }

  // Field (width: 8 bits): IPR_N1
    inline uint32_t NVIC_IPR17_IPR_N1 (const uint32_t inValue) { return (inValue & 255U) << 8 ; }

//-------------------- Interrupt Priority Register
#define NVIC_IPR16(group) (* ((volatile uint32_t *) (kBaseAddress_NVIC [group] + 0x340)))
#define NVIC_IPR16 (* ((volatile uint32_t *) (0xE000E100 + 0x340)))

  // Field (width: 8 bits): IPR_N2
    inline uint32_t NVIC_IPR16_IPR_N2 (const uint32_t inValue) { return (inValue & 255U) << 16 ; }

  // Field (width: 8 bits): IPR_N3
    inline uint32_t NVIC_IPR16_IPR_N3 (const uint32_t inValue) { return (inValue & 255U) << 24 ; }

  // Field (width: 8 bits): IPR_N0
    inline uint32_t NVIC_IPR16_IPR_N0 (const uint32_t inValue) { return (inValue & 255U) << 0 ; }

  // Field (width: 8 bits): IPR_N1
    inline uint32_t NVIC_IPR16_IPR_N1 (const uint32_t inValue) { return (inValue & 255U) << 8 ; }

//-------------------- Interrupt Priority Register
#define NVIC_IPR11(group) (* ((volatile uint32_t *) (kBaseAddress_NVIC [group] + 0x32C)))
#define NVIC_IPR11 (* ((volatile uint32_t *) (0xE000E100 + 0x32C)))

  // Field (width: 8 bits): IPR_N2
    inline uint32_t NVIC_IPR11_IPR_N2 (const uint32_t inValue) { return (inValue & 255U) << 16 ; }

  // Field (width: 8 bits): IPR_N3
    inline uint32_t NVIC_IPR11_IPR_N3 (const uint32_t inValue) { return (inValue & 255U) << 24 ; }

  // Field (width: 8 bits): IPR_N0
    inline uint32_t NVIC_IPR11_IPR_N0 (const uint32_t inValue) { return (inValue & 255U) << 0 ; }

  // Field (width: 8 bits): IPR_N1
    inline uint32_t NVIC_IPR11_IPR_N1 (const uint32_t inValue) { return (inValue & 255U) << 8 ; }

//-------------------- Interrupt Priority Register
#define NVIC_IPR10(group) (* ((volatile uint32_t *) (kBaseAddress_NVIC [group] + 0x328)))
#define NVIC_IPR10 (* ((volatile uint32_t *) (0xE000E100 + 0x328)))

  // Field (width: 8 bits): IPR_N2
    inline uint32_t NVIC_IPR10_IPR_N2 (const uint32_t inValue) { return (inValue & 255U) << 16 ; }

  // Field (width: 8 bits): IPR_N3
    inline uint32_t NVIC_IPR10_IPR_N3 (const uint32_t inValue) { return (inValue & 255U) << 24 ; }

  // Field (width: 8 bits): IPR_N0
    inline uint32_t NVIC_IPR10_IPR_N0 (const uint32_t inValue) { return (inValue & 255U) << 0 ; }

  // Field (width: 8 bits): IPR_N1
    inline uint32_t NVIC_IPR10_IPR_N1 (const uint32_t inValue) { return (inValue & 255U) << 8 ; }

//-------------------- Interrupt Priority Register
#define NVIC_IPR13(group) (* ((volatile uint32_t *) (kBaseAddress_NVIC [group] + 0x334)))
#define NVIC_IPR13 (* ((volatile uint32_t *) (0xE000E100 + 0x334)))

  // Field (width: 8 bits): IPR_N2
    inline uint32_t NVIC_IPR13_IPR_N2 (const uint32_t inValue) { return (inValue & 255U) << 16 ; }

  // Field (width: 8 bits): IPR_N3
    inline uint32_t NVIC_IPR13_IPR_N3 (const uint32_t inValue) { return (inValue & 255U) << 24 ; }

  // Field (width: 8 bits): IPR_N0
    inline uint32_t NVIC_IPR13_IPR_N0 (const uint32_t inValue) { return (inValue & 255U) << 0 ; }

  // Field (width: 8 bits): IPR_N1
    inline uint32_t NVIC_IPR13_IPR_N1 (const uint32_t inValue) { return (inValue & 255U) << 8 ; }

//-------------------- Interrupt Priority Register
#define NVIC_IPR12(group) (* ((volatile uint32_t *) (kBaseAddress_NVIC [group] + 0x330)))
#define NVIC_IPR12 (* ((volatile uint32_t *) (0xE000E100 + 0x330)))

  // Field (width: 8 bits): IPR_N2
    inline uint32_t NVIC_IPR12_IPR_N2 (const uint32_t inValue) { return (inValue & 255U) << 16 ; }

  // Field (width: 8 bits): IPR_N3
    inline uint32_t NVIC_IPR12_IPR_N3 (const uint32_t inValue) { return (inValue & 255U) << 24 ; }

  // Field (width: 8 bits): IPR_N0
    inline uint32_t NVIC_IPR12_IPR_N0 (const uint32_t inValue) { return (inValue & 255U) << 0 ; }

  // Field (width: 8 bits): IPR_N1
    inline uint32_t NVIC_IPR12_IPR_N1 (const uint32_t inValue) { return (inValue & 255U) << 8 ; }

//-------------------- Interrupt Set-Enable Register
#define NVIC_ISER0(group) (* ((volatile uint32_t *) (kBaseAddress_NVIC [group] + 0x0)))
#define NVIC_ISER0 (* ((volatile uint32_t *) (0xE000E100 + 0x0)))

//-------------------- Interrupt Set-Enable Register
#define NVIC_ISER1(group) (* ((volatile uint32_t *) (kBaseAddress_NVIC [group] + 0x4)))
#define NVIC_ISER1 (* ((volatile uint32_t *) (0xE000E100 + 0x4)))

//-------------------- Interrupt Set-Pending Register
#define NVIC_ISPR2(group) (* ((volatile uint32_t *) (kBaseAddress_NVIC [group] + 0x108)))
#define NVIC_ISPR2 (* ((volatile uint32_t *) (0xE000E100 + 0x108)))

//-------------------- Interrupt Set-Pending Register
#define NVIC_ISPR1(group) (* ((volatile uint32_t *) (kBaseAddress_NVIC [group] + 0x104)))
#define NVIC_ISPR1 (* ((volatile uint32_t *) (0xE000E100 + 0x104)))

//-------------------- Interrupt Set-Pending Register
#define NVIC_ISPR0(group) (* ((volatile uint32_t *) (kBaseAddress_NVIC [group] + 0x100)))
#define NVIC_ISPR0 (* ((volatile uint32_t *) (0xE000E100 + 0x100)))

//-------------------- Interrupt Clear-Enable
          Register
#define NVIC_ICER2(group) (* ((volatile uint32_t *) (kBaseAddress_NVIC [group] + 0x88)))
#define NVIC_ICER2 (* ((volatile uint32_t *) (0xE000E100 + 0x88)))

//-------------------- Interrupt Priority Register
#define NVIC_IPR20(group) (* ((volatile uint32_t *) (kBaseAddress_NVIC [group] + 0x350)))
#define NVIC_IPR20 (* ((volatile uint32_t *) (0xE000E100 + 0x350)))

  // Field (width: 8 bits): IPR_N2
    inline uint32_t NVIC_IPR20_IPR_N2 (const uint32_t inValue) { return (inValue & 255U) << 16 ; }

  // Field (width: 8 bits): IPR_N3
    inline uint32_t NVIC_IPR20_IPR_N3 (const uint32_t inValue) { return (inValue & 255U) << 24 ; }

  // Field (width: 8 bits): IPR_N0
    inline uint32_t NVIC_IPR20_IPR_N0 (const uint32_t inValue) { return (inValue & 255U) << 0 ; }

  // Field (width: 8 bits): IPR_N1
    inline uint32_t NVIC_IPR20_IPR_N1 (const uint32_t inValue) { return (inValue & 255U) << 8 ; }

//-------------------- Interrupt Priority Register
#define NVIC_IPR7(group) (* ((volatile uint32_t *) (kBaseAddress_NVIC [group] + 0x31C)))
#define NVIC_IPR7 (* ((volatile uint32_t *) (0xE000E100 + 0x31C)))

  // Field (width: 8 bits): IPR_N2
    inline uint32_t NVIC_IPR7_IPR_N2 (const uint32_t inValue) { return (inValue & 255U) << 16 ; }

  // Field (width: 8 bits): IPR_N3
    inline uint32_t NVIC_IPR7_IPR_N3 (const uint32_t inValue) { return (inValue & 255U) << 24 ; }

  // Field (width: 8 bits): IPR_N0
    inline uint32_t NVIC_IPR7_IPR_N0 (const uint32_t inValue) { return (inValue & 255U) << 0 ; }

  // Field (width: 8 bits): IPR_N1
    inline uint32_t NVIC_IPR7_IPR_N1 (const uint32_t inValue) { return (inValue & 255U) << 8 ; }

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
// Peripheral group OPAMP
//                OPAMP at 0x40007800
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

static const uint32_t kBaseAddress_OPAMP [1] = {0x40007800} ;

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

//-------------------- OPAMP2 offset trimming register in normal
          mode
#define OPAMP_OPAMP2_OTR(group) (* ((volatile uint32_t *) (kBaseAddress_OPAMP [group] + 0x14)))
#define OPAMP_OPAMP2_OTR (* ((volatile uint32_t *) (0x40007800 + 0x14)))

  // Field (width: 5 bits): Trim for NMOS differential
              pairs
    inline uint32_t OPAMP_OPAMP2_OTR_TRIMOFFSETN (const uint32_t inValue) { return (inValue & 31U) << 0 ; }

  // Field (width: 5 bits): Trim for PMOS differential
              pairs
    inline uint32_t OPAMP_OPAMP2_OTR_TRIMOFFSETP (const uint32_t inValue) { return (inValue & 31U) << 8 ; }

//-------------------- OPAMP1 control/status register
#define OPAMP_OPAMP1_CSR(group) (* ((volatile uint32_t *) (kBaseAddress_OPAMP [group] + 0x0)))
#define OPAMP_OPAMP1_CSR (* ((volatile uint32_t *) (0x40007800 + 0x0)))

  // Field (width: 2 bits): Operational amplifier PGA
              mode
    inline uint32_t OPAMP_OPAMP1_CSR_OPAMODE (const uint32_t inValue) { return (inValue & 3U) << 2 ; }

  // Boolean field: Operational amplifier Low Power
              Mode
    static const uint32_t OPAMP_OPAMP1_CSR_OPALPM = 1U << 1 ;

  // Boolean field: Calibration selection
    static const uint32_t OPAMP_OPAMP1_CSR_CALSEL = 1U << 13 ;

  // Field (width: 2 bits): Operational amplifier Programmable
              amplifier gain value
    inline uint32_t OPAMP_OPAMP1_CSR_PGA_GAIN (const uint32_t inValue) { return (inValue & 3U) << 4 ; }

  // Boolean field: Operational amplifier power supply range
              for stability
    static const uint32_t OPAMP_OPAMP1_CSR_OPA_RANGE = 1U << 31 ;

  // Boolean field: allows to switch from AOP offset trimmed
              values to AOP offset
    static const uint32_t OPAMP_OPAMP1_CSR_USERTRIM = 1U << 14 ;

  // Boolean field: Calibration mode enabled
    static const uint32_t OPAMP_OPAMP1_CSR_CALON = 1U << 12 ;

  // Field (width: 2 bits): Inverting input selection
    inline uint32_t OPAMP_OPAMP1_CSR_VM_SEL (const uint32_t inValue) { return (inValue & 3U) << 8 ; }

  // Boolean field: Operational amplifier calibration
              output
    static const uint32_t OPAMP_OPAMP1_CSR_CALOUT = 1U << 15 ;

  // Boolean field: Non inverted input
              selection
    static const uint32_t OPAMP_OPAMP1_CSR_VP_SEL = 1U << 10 ;

  // Boolean field: Operational amplifier
              Enable
    static const uint32_t OPAMP_OPAMP1_CSR_OPAEN = 1U << 0 ;

//-------------------- OPAMP2 control/status register
#define OPAMP_OPAMP2_CSR(group) (* ((volatile uint32_t *) (kBaseAddress_OPAMP [group] + 0x10)))
#define OPAMP_OPAMP2_CSR (* ((volatile uint32_t *) (0x40007800 + 0x10)))

  // Field (width: 2 bits): Operational amplifier PGA
              mode
    inline uint32_t OPAMP_OPAMP2_CSR_OPAMODE (const uint32_t inValue) { return (inValue & 3U) << 2 ; }

  // Boolean field: Operational amplifier Low Power
              Mode
    static const uint32_t OPAMP_OPAMP2_CSR_OPALPM = 1U << 1 ;

  // Boolean field: Calibration selection
    static const uint32_t OPAMP_OPAMP2_CSR_CALSEL = 1U << 13 ;

  // Field (width: 2 bits): Operational amplifier Programmable
              amplifier gain value
    inline uint32_t OPAMP_OPAMP2_CSR_PGA_GAIN (const uint32_t inValue) { return (inValue & 3U) << 4 ; }

  // Boolean field: allows to switch from AOP offset trimmed
              values to AOP offset
    static const uint32_t OPAMP_OPAMP2_CSR_USERTRIM = 1U << 14 ;

  // Boolean field: Calibration mode enabled
    static const uint32_t OPAMP_OPAMP2_CSR_CALON = 1U << 12 ;

  // Field (width: 2 bits): Inverting input selection
    inline uint32_t OPAMP_OPAMP2_CSR_VM_SEL (const uint32_t inValue) { return (inValue & 3U) << 8 ; }

  // Boolean field: Operational amplifier calibration
              output
    static const uint32_t OPAMP_OPAMP2_CSR_CALOUT = 1U << 15 ;

  // Boolean field: Non inverted input
              selection
    static const uint32_t OPAMP_OPAMP2_CSR_VP_SEL = 1U << 10 ;

  // Boolean field: Operational amplifier
              Enable
    static const uint32_t OPAMP_OPAMP2_CSR_OPAEN = 1U << 0 ;

//-------------------- OPAMP2 offset trimming register in low-power
          mode
#define OPAMP_OPAMP2_LPOTR(group) (* ((volatile uint32_t *) (kBaseAddress_OPAMP [group] + 0x18)))
#define OPAMP_OPAMP2_LPOTR (* ((volatile uint32_t *) (0x40007800 + 0x18)))

  // Field (width: 5 bits): Trim for NMOS differential
              pairs
    inline uint32_t OPAMP_OPAMP2_LPOTR_TRIMLPOFFSETN (const uint32_t inValue) { return (inValue & 31U) << 0 ; }

  // Field (width: 5 bits): Trim for PMOS differential
              pairs
    inline uint32_t OPAMP_OPAMP2_LPOTR_TRIMLPOFFSETP (const uint32_t inValue) { return (inValue & 31U) << 8 ; }

//-------------------- OPAMP1 offset trimming register in normal
          mode
#define OPAMP_OPAMP1_OTR(group) (* ((volatile uint32_t *) (kBaseAddress_OPAMP [group] + 0x4)))
#define OPAMP_OPAMP1_OTR (* ((volatile uint32_t *) (0x40007800 + 0x4)))

  // Field (width: 5 bits): Trim for NMOS differential
              pairs
    inline uint32_t OPAMP_OPAMP1_OTR_TRIMOFFSETN (const uint32_t inValue) { return (inValue & 31U) << 0 ; }

  // Field (width: 5 bits): Trim for PMOS differential
              pairs
    inline uint32_t OPAMP_OPAMP1_OTR_TRIMOFFSETP (const uint32_t inValue) { return (inValue & 31U) << 8 ; }

//-------------------- OPAMP1 offset trimming register in low-power
          mode
#define OPAMP_OPAMP1_LPOTR(group) (* ((volatile uint32_t *) (kBaseAddress_OPAMP [group] + 0x8)))
#define OPAMP_OPAMP1_LPOTR (* ((volatile uint32_t *) (0x40007800 + 0x8)))

  // Field (width: 5 bits): Trim for NMOS differential
              pairs
    inline uint32_t OPAMP_OPAMP1_LPOTR_TRIMLPOFFSETN (const uint32_t inValue) { return (inValue & 31U) << 0 ; }

  // Field (width: 5 bits): Trim for PMOS differential
              pairs
    inline uint32_t OPAMP_OPAMP1_LPOTR_TRIMLPOFFSETP (const uint32_t inValue) { return (inValue & 31U) << 8 ; }

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
// Peripheral group PWR
//                PWR at 0x40007000
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

static const uint32_t kBaseAddress_PWR [1] = {0x40007000} ;

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

//-------------------- Power Port G pull-up control
          register
#define PWR_PUCRG(group) (* ((volatile uint32_t *) (kBaseAddress_PWR [group] + 0x50)))
#define PWR_PUCRG (* ((volatile uint32_t *) (0x40007000 + 0x50)))

  // Boolean field: Port G pull-up bit y
              (y=0..15)
    static const uint32_t PWR_PUCRG_PU14 = 1U << 14 ;

  // Boolean field: Port G pull-up bit y
              (y=0..15)
    static const uint32_t PWR_PUCRG_PU15 = 1U << 15 ;

  // Boolean field: Port G pull-up bit y
              (y=0..15)
    static const uint32_t PWR_PUCRG_PU12 = 1U << 12 ;

  // Boolean field: Port G pull-up bit y
              (y=0..15)
    static const uint32_t PWR_PUCRG_PU13 = 1U << 13 ;

  // Boolean field: Port G pull-up bit y
              (y=0..15)
    static const uint32_t PWR_PUCRG_PU10 = 1U << 10 ;

  // Boolean field: Port G pull-up bit y
              (y=0..15)
    static const uint32_t PWR_PUCRG_PU11 = 1U << 11 ;

  // Boolean field: Port G pull-up bit y
              (y=0..15)
    static const uint32_t PWR_PUCRG_PU8 = 1U << 8 ;

  // Boolean field: Port G pull-up bit y
              (y=0..15)
    static const uint32_t PWR_PUCRG_PU9 = 1U << 9 ;

  // Boolean field: Port G pull-up bit y
              (y=0..15)
    static const uint32_t PWR_PUCRG_PU4 = 1U << 4 ;

  // Boolean field: Port G pull-up bit y
              (y=0..15)
    static const uint32_t PWR_PUCRG_PU5 = 1U << 5 ;

  // Boolean field: Port G pull-up bit y
              (y=0..15)
    static const uint32_t PWR_PUCRG_PU6 = 1U << 6 ;

  // Boolean field: Port G pull-up bit y
              (y=0..15)
    static const uint32_t PWR_PUCRG_PU7 = 1U << 7 ;

  // Boolean field: Port G pull-up bit y
              (y=0..15)
    static const uint32_t PWR_PUCRG_PU0 = 1U << 0 ;

  // Boolean field: Port G pull-up bit y
              (y=0..15)
    static const uint32_t PWR_PUCRG_PU1 = 1U << 1 ;

  // Boolean field: Port G pull-up bit y
              (y=0..15)
    static const uint32_t PWR_PUCRG_PU2 = 1U << 2 ;

  // Boolean field: Port G pull-up bit y
              (y=0..15)
    static const uint32_t PWR_PUCRG_PU3 = 1U << 3 ;

//-------------------- Power Port F pull-up control
          register
#define PWR_PUCRF(group) (* ((volatile uint32_t *) (kBaseAddress_PWR [group] + 0x48)))
#define PWR_PUCRF (* ((volatile uint32_t *) (0x40007000 + 0x48)))

  // Boolean field: Port F pull-up bit y
              (y=0..15)
    static const uint32_t PWR_PUCRF_PU14 = 1U << 14 ;

  // Boolean field: Port F pull-up bit y
              (y=0..15)
    static const uint32_t PWR_PUCRF_PU15 = 1U << 15 ;

  // Boolean field: Port F pull-up bit y
              (y=0..15)
    static const uint32_t PWR_PUCRF_PU12 = 1U << 12 ;

  // Boolean field: Port F pull-up bit y
              (y=0..15)
    static const uint32_t PWR_PUCRF_PU13 = 1U << 13 ;

  // Boolean field: Port F pull-up bit y
              (y=0..15)
    static const uint32_t PWR_PUCRF_PU10 = 1U << 10 ;

  // Boolean field: Port F pull-up bit y
              (y=0..15)
    static const uint32_t PWR_PUCRF_PU11 = 1U << 11 ;

  // Boolean field: Port F pull-up bit y
              (y=0..15)
    static const uint32_t PWR_PUCRF_PU8 = 1U << 8 ;

  // Boolean field: Port F pull-up bit y
              (y=0..15)
    static const uint32_t PWR_PUCRF_PU9 = 1U << 9 ;

  // Boolean field: Port F pull-up bit y
              (y=0..15)
    static const uint32_t PWR_PUCRF_PU4 = 1U << 4 ;

  // Boolean field: Port F pull-up bit y
              (y=0..15)
    static const uint32_t PWR_PUCRF_PU5 = 1U << 5 ;

  // Boolean field: Port F pull-up bit y
              (y=0..15)
    static const uint32_t PWR_PUCRF_PU6 = 1U << 6 ;

  // Boolean field: Port F pull-up bit y
              (y=0..15)
    static const uint32_t PWR_PUCRF_PU7 = 1U << 7 ;

  // Boolean field: Port F pull-up bit y
              (y=0..15)
    static const uint32_t PWR_PUCRF_PU0 = 1U << 0 ;

  // Boolean field: Port F pull-up bit y
              (y=0..15)
    static const uint32_t PWR_PUCRF_PU1 = 1U << 1 ;

  // Boolean field: Port F pull-up bit y
              (y=0..15)
    static const uint32_t PWR_PUCRF_PU2 = 1U << 2 ;

  // Boolean field: Port F pull-up bit y
              (y=0..15)
    static const uint32_t PWR_PUCRF_PU3 = 1U << 3 ;

//-------------------- Power Port E pull-up control
          register
#define PWR_PUCRE(group) (* ((volatile uint32_t *) (kBaseAddress_PWR [group] + 0x40)))
#define PWR_PUCRE (* ((volatile uint32_t *) (0x40007000 + 0x40)))

  // Boolean field: Port E pull-up bit y
              (y=0..15)
    static const uint32_t PWR_PUCRE_PU14 = 1U << 14 ;

  // Boolean field: Port E pull-up bit y
              (y=0..15)
    static const uint32_t PWR_PUCRE_PU15 = 1U << 15 ;

  // Boolean field: Port E pull-up bit y
              (y=0..15)
    static const uint32_t PWR_PUCRE_PU12 = 1U << 12 ;

  // Boolean field: Port E pull-up bit y
              (y=0..15)
    static const uint32_t PWR_PUCRE_PU13 = 1U << 13 ;

  // Boolean field: Port E pull-up bit y
              (y=0..15)
    static const uint32_t PWR_PUCRE_PU10 = 1U << 10 ;

  // Boolean field: Port E pull-up bit y
              (y=0..15)
    static const uint32_t PWR_PUCRE_PU11 = 1U << 11 ;

  // Boolean field: Port E pull-up bit y
              (y=0..15)
    static const uint32_t PWR_PUCRE_PU8 = 1U << 8 ;

  // Boolean field: Port E pull-up bit y
              (y=0..15)
    static const uint32_t PWR_PUCRE_PU9 = 1U << 9 ;

  // Boolean field: Port E pull-up bit y
              (y=0..15)
    static const uint32_t PWR_PUCRE_PU4 = 1U << 4 ;

  // Boolean field: Port E pull-up bit y
              (y=0..15)
    static const uint32_t PWR_PUCRE_PU5 = 1U << 5 ;

  // Boolean field: Port E pull-up bit y
              (y=0..15)
    static const uint32_t PWR_PUCRE_PU6 = 1U << 6 ;

  // Boolean field: Port E pull-up bit y
              (y=0..15)
    static const uint32_t PWR_PUCRE_PU7 = 1U << 7 ;

  // Boolean field: Port E pull-up bit y
              (y=0..15)
    static const uint32_t PWR_PUCRE_PU0 = 1U << 0 ;

  // Boolean field: Port E pull-up bit y
              (y=0..15)
    static const uint32_t PWR_PUCRE_PU1 = 1U << 1 ;

  // Boolean field: Port E pull-up bit y
              (y=0..15)
    static const uint32_t PWR_PUCRE_PU2 = 1U << 2 ;

  // Boolean field: Port E pull-up bit y
              (y=0..15)
    static const uint32_t PWR_PUCRE_PU3 = 1U << 3 ;

//-------------------- Power Port D pull-up control
          register
#define PWR_PUCRD(group) (* ((volatile uint32_t *) (kBaseAddress_PWR [group] + 0x38)))
#define PWR_PUCRD (* ((volatile uint32_t *) (0x40007000 + 0x38)))

  // Boolean field: Port D pull-up bit y
              (y=0..15)
    static const uint32_t PWR_PUCRD_PU14 = 1U << 14 ;

  // Boolean field: Port D pull-up bit y
              (y=0..15)
    static const uint32_t PWR_PUCRD_PU15 = 1U << 15 ;

  // Boolean field: Port D pull-up bit y
              (y=0..15)
    static const uint32_t PWR_PUCRD_PU12 = 1U << 12 ;

  // Boolean field: Port D pull-up bit y
              (y=0..15)
    static const uint32_t PWR_PUCRD_PU13 = 1U << 13 ;

  // Boolean field: Port D pull-up bit y
              (y=0..15)
    static const uint32_t PWR_PUCRD_PU10 = 1U << 10 ;

  // Boolean field: Port D pull-up bit y
              (y=0..15)
    static const uint32_t PWR_PUCRD_PU11 = 1U << 11 ;

  // Boolean field: Port D pull-up bit y
              (y=0..15)
    static const uint32_t PWR_PUCRD_PU8 = 1U << 8 ;

  // Boolean field: Port D pull-up bit y
              (y=0..15)
    static const uint32_t PWR_PUCRD_PU9 = 1U << 9 ;

  // Boolean field: Port D pull-up bit y
              (y=0..15)
    static const uint32_t PWR_PUCRD_PU4 = 1U << 4 ;

  // Boolean field: Port D pull-up bit y
              (y=0..15)
    static const uint32_t PWR_PUCRD_PU5 = 1U << 5 ;

  // Boolean field: Port D pull-up bit y
              (y=0..15)
    static const uint32_t PWR_PUCRD_PU6 = 1U << 6 ;

  // Boolean field: Port D pull-up bit y
              (y=0..15)
    static const uint32_t PWR_PUCRD_PU7 = 1U << 7 ;

  // Boolean field: Port D pull-up bit y
              (y=0..15)
    static const uint32_t PWR_PUCRD_PU0 = 1U << 0 ;

  // Boolean field: Port D pull-up bit y
              (y=0..15)
    static const uint32_t PWR_PUCRD_PU1 = 1U << 1 ;

  // Boolean field: Port D pull-up bit y
              (y=0..15)
    static const uint32_t PWR_PUCRD_PU2 = 1U << 2 ;

  // Boolean field: Port D pull-up bit y
              (y=0..15)
    static const uint32_t PWR_PUCRD_PU3 = 1U << 3 ;

//-------------------- Power Port C pull-up control
          register
#define PWR_PUCRC(group) (* ((volatile uint32_t *) (kBaseAddress_PWR [group] + 0x30)))
#define PWR_PUCRC (* ((volatile uint32_t *) (0x40007000 + 0x30)))

  // Boolean field: Port C pull-up bit y
              (y=0..15)
    static const uint32_t PWR_PUCRC_PU14 = 1U << 14 ;

  // Boolean field: Port C pull-up bit y
              (y=0..15)
    static const uint32_t PWR_PUCRC_PU15 = 1U << 15 ;

  // Boolean field: Port C pull-up bit y
              (y=0..15)
    static const uint32_t PWR_PUCRC_PU12 = 1U << 12 ;

  // Boolean field: Port C pull-up bit y
              (y=0..15)
    static const uint32_t PWR_PUCRC_PU13 = 1U << 13 ;

  // Boolean field: Port C pull-up bit y
              (y=0..15)
    static const uint32_t PWR_PUCRC_PU10 = 1U << 10 ;

  // Boolean field: Port C pull-up bit y
              (y=0..15)
    static const uint32_t PWR_PUCRC_PU11 = 1U << 11 ;

  // Boolean field: Port C pull-up bit y
              (y=0..15)
    static const uint32_t PWR_PUCRC_PU8 = 1U << 8 ;

  // Boolean field: Port C pull-up bit y
              (y=0..15)
    static const uint32_t PWR_PUCRC_PU9 = 1U << 9 ;

  // Boolean field: Port C pull-up bit y
              (y=0..15)
    static const uint32_t PWR_PUCRC_PU4 = 1U << 4 ;

  // Boolean field: Port C pull-up bit y
              (y=0..15)
    static const uint32_t PWR_PUCRC_PU5 = 1U << 5 ;

  // Boolean field: Port C pull-up bit y
              (y=0..15)
    static const uint32_t PWR_PUCRC_PU6 = 1U << 6 ;

  // Boolean field: Port C pull-up bit y
              (y=0..15)
    static const uint32_t PWR_PUCRC_PU7 = 1U << 7 ;

  // Boolean field: Port C pull-up bit y
              (y=0..15)
    static const uint32_t PWR_PUCRC_PU0 = 1U << 0 ;

  // Boolean field: Port C pull-up bit y
              (y=0..15)
    static const uint32_t PWR_PUCRC_PU1 = 1U << 1 ;

  // Boolean field: Port C pull-up bit y
              (y=0..15)
    static const uint32_t PWR_PUCRC_PU2 = 1U << 2 ;

  // Boolean field: Port C pull-up bit y
              (y=0..15)
    static const uint32_t PWR_PUCRC_PU3 = 1U << 3 ;

//-------------------- Power Port B pull-up control
          register
#define PWR_PUCRB(group) (* ((volatile uint32_t *) (kBaseAddress_PWR [group] + 0x28)))
#define PWR_PUCRB (* ((volatile uint32_t *) (0x40007000 + 0x28)))

  // Boolean field: Port B pull-up bit y
              (y=0..15)
    static const uint32_t PWR_PUCRB_PU14 = 1U << 14 ;

  // Boolean field: Port B pull-up bit y
              (y=0..15)
    static const uint32_t PWR_PUCRB_PU15 = 1U << 15 ;

  // Boolean field: Port B pull-up bit y
              (y=0..15)
    static const uint32_t PWR_PUCRB_PU12 = 1U << 12 ;

  // Boolean field: Port B pull-up bit y
              (y=0..15)
    static const uint32_t PWR_PUCRB_PU13 = 1U << 13 ;

  // Boolean field: Port B pull-up bit y
              (y=0..15)
    static const uint32_t PWR_PUCRB_PU10 = 1U << 10 ;

  // Boolean field: Port B pull-up bit y
              (y=0..15)
    static const uint32_t PWR_PUCRB_PU11 = 1U << 11 ;

  // Boolean field: Port B pull-up bit y
              (y=0..15)
    static const uint32_t PWR_PUCRB_PU8 = 1U << 8 ;

  // Boolean field: Port B pull-up bit y
              (y=0..15)
    static const uint32_t PWR_PUCRB_PU9 = 1U << 9 ;

  // Boolean field: Port B pull-up bit y
              (y=0..15)
    static const uint32_t PWR_PUCRB_PU4 = 1U << 4 ;

  // Boolean field: Port B pull-up bit y
              (y=0..15)
    static const uint32_t PWR_PUCRB_PU5 = 1U << 5 ;

  // Boolean field: Port B pull-up bit y
              (y=0..15)
    static const uint32_t PWR_PUCRB_PU6 = 1U << 6 ;

  // Boolean field: Port B pull-up bit y
              (y=0..15)
    static const uint32_t PWR_PUCRB_PU7 = 1U << 7 ;

  // Boolean field: Port B pull-up bit y
              (y=0..15)
    static const uint32_t PWR_PUCRB_PU0 = 1U << 0 ;

  // Boolean field: Port B pull-up bit y
              (y=0..15)
    static const uint32_t PWR_PUCRB_PU1 = 1U << 1 ;

  // Boolean field: Port B pull-up bit y
              (y=0..15)
    static const uint32_t PWR_PUCRB_PU2 = 1U << 2 ;

  // Boolean field: Port B pull-up bit y
              (y=0..15)
    static const uint32_t PWR_PUCRB_PU3 = 1U << 3 ;

//-------------------- Power Port A pull-up control
          register
#define PWR_PUCRA(group) (* ((volatile uint32_t *) (kBaseAddress_PWR [group] + 0x20)))
#define PWR_PUCRA (* ((volatile uint32_t *) (0x40007000 + 0x20)))

  // Boolean field: Port A pull-up bit y
              (y=0..15)
    static const uint32_t PWR_PUCRA_PU14 = 1U << 14 ;

  // Boolean field: Port A pull-up bit y
              (y=0..15)
    static const uint32_t PWR_PUCRA_PU15 = 1U << 15 ;

  // Boolean field: Port A pull-up bit y
              (y=0..15)
    static const uint32_t PWR_PUCRA_PU12 = 1U << 12 ;

  // Boolean field: Port A pull-up bit y
              (y=0..15)
    static const uint32_t PWR_PUCRA_PU13 = 1U << 13 ;

  // Boolean field: Port A pull-up bit y
              (y=0..15)
    static const uint32_t PWR_PUCRA_PU10 = 1U << 10 ;

  // Boolean field: Port A pull-up bit y
              (y=0..15)
    static const uint32_t PWR_PUCRA_PU11 = 1U << 11 ;

  // Boolean field: Port A pull-up bit y
              (y=0..15)
    static const uint32_t PWR_PUCRA_PU8 = 1U << 8 ;

  // Boolean field: Port A pull-up bit y
              (y=0..15)
    static const uint32_t PWR_PUCRA_PU9 = 1U << 9 ;

  // Boolean field: Port A pull-up bit y
              (y=0..15)
    static const uint32_t PWR_PUCRA_PU4 = 1U << 4 ;

  // Boolean field: Port A pull-up bit y
              (y=0..15)
    static const uint32_t PWR_PUCRA_PU5 = 1U << 5 ;

  // Boolean field: Port A pull-up bit y
              (y=0..15)
    static const uint32_t PWR_PUCRA_PU6 = 1U << 6 ;

  // Boolean field: Port A pull-up bit y
              (y=0..15)
    static const uint32_t PWR_PUCRA_PU7 = 1U << 7 ;

  // Boolean field: Port A pull-up bit y
              (y=0..15)
    static const uint32_t PWR_PUCRA_PU0 = 1U << 0 ;

  // Boolean field: Port A pull-up bit y
              (y=0..15)
    static const uint32_t PWR_PUCRA_PU1 = 1U << 1 ;

  // Boolean field: Port A pull-up bit y
              (y=0..15)
    static const uint32_t PWR_PUCRA_PU2 = 1U << 2 ;

  // Boolean field: Port A pull-up bit y
              (y=0..15)
    static const uint32_t PWR_PUCRA_PU3 = 1U << 3 ;

//-------------------- Power Port H pull-up control
          register
#define PWR_PUCRH(group) (* ((volatile uint32_t *) (kBaseAddress_PWR [group] + 0x58)))
#define PWR_PUCRH (* ((volatile uint32_t *) (0x40007000 + 0x58)))

  // Boolean field: Port H pull-up bit y
              (y=0..1)
    static const uint32_t PWR_PUCRH_PU0 = 1U << 0 ;

  // Boolean field: Port H pull-up bit y
              (y=0..1)
    static const uint32_t PWR_PUCRH_PU1 = 1U << 1 ;

//-------------------- Power Port H pull-down control
          register
#define PWR_PDCRH(group) (* ((volatile uint32_t *) (kBaseAddress_PWR [group] + 0x5C)))
#define PWR_PDCRH (* ((volatile uint32_t *) (0x40007000 + 0x5C)))

  // Boolean field: Port H pull-down bit y
              (y=0..1)
    static const uint32_t PWR_PDCRH_PD1 = 1U << 1 ;

  // Boolean field: Port H pull-down bit y
              (y=0..1)
    static const uint32_t PWR_PDCRH_PD0 = 1U << 0 ;

//-------------------- Power Port A pull-down control
          register
#define PWR_PDCRA(group) (* ((volatile uint32_t *) (kBaseAddress_PWR [group] + 0x24)))
#define PWR_PDCRA (* ((volatile uint32_t *) (0x40007000 + 0x24)))

  // Boolean field: Port A pull-down bit y
              (y=0..15)
    static const uint32_t PWR_PDCRA_PD9 = 1U << 9 ;

  // Boolean field: Port A pull-down bit y
              (y=0..15)
    static const uint32_t PWR_PDCRA_PD8 = 1U << 8 ;

  // Boolean field: Port A pull-down bit y
              (y=0..15)
    static const uint32_t PWR_PDCRA_PD7 = 1U << 7 ;

  // Boolean field: Port A pull-down bit y
              (y=0..15)
    static const uint32_t PWR_PDCRA_PD6 = 1U << 6 ;

  // Boolean field: Port A pull-down bit y
              (y=0..15)
    static const uint32_t PWR_PDCRA_PD5 = 1U << 5 ;

  // Boolean field: Port A pull-down bit y
              (y=0..15)
    static const uint32_t PWR_PDCRA_PD4 = 1U << 4 ;

  // Boolean field: Port A pull-down bit y
              (y=0..15)
    static const uint32_t PWR_PDCRA_PD3 = 1U << 3 ;

  // Boolean field: Port A pull-down bit y
              (y=0..15)
    static const uint32_t PWR_PDCRA_PD2 = 1U << 2 ;

  // Boolean field: Port A pull-down bit y
              (y=0..15)
    static const uint32_t PWR_PDCRA_PD1 = 1U << 1 ;

  // Boolean field: Port A pull-down bit y
              (y=0..15)
    static const uint32_t PWR_PDCRA_PD0 = 1U << 0 ;

  // Boolean field: Port A pull-down bit y
              (y=0..15)
    static const uint32_t PWR_PDCRA_PD13 = 1U << 13 ;

  // Boolean field: Port A pull-down bit y
              (y=0..15)
    static const uint32_t PWR_PDCRA_PD12 = 1U << 12 ;

  // Boolean field: Port A pull-down bit y
              (y=0..15)
    static const uint32_t PWR_PDCRA_PD11 = 1U << 11 ;

  // Boolean field: Port A pull-down bit y
              (y=0..15)
    static const uint32_t PWR_PDCRA_PD10 = 1U << 10 ;

  // Boolean field: Port A pull-down bit y
              (y=0..15)
    static const uint32_t PWR_PDCRA_PD15 = 1U << 15 ;

  // Boolean field: Port A pull-down bit y
              (y=0..15)
    static const uint32_t PWR_PDCRA_PD14 = 1U << 14 ;

//-------------------- Power Port B pull-down control
          register
#define PWR_PDCRB(group) (* ((volatile uint32_t *) (kBaseAddress_PWR [group] + 0x2C)))
#define PWR_PDCRB (* ((volatile uint32_t *) (0x40007000 + 0x2C)))

  // Boolean field: Port B pull-down bit y
              (y=0..15)
    static const uint32_t PWR_PDCRB_PD9 = 1U << 9 ;

  // Boolean field: Port B pull-down bit y
              (y=0..15)
    static const uint32_t PWR_PDCRB_PD8 = 1U << 8 ;

  // Boolean field: Port B pull-down bit y
              (y=0..15)
    static const uint32_t PWR_PDCRB_PD7 = 1U << 7 ;

  // Boolean field: Port B pull-down bit y
              (y=0..15)
    static const uint32_t PWR_PDCRB_PD6 = 1U << 6 ;

  // Boolean field: Port B pull-down bit y
              (y=0..15)
    static const uint32_t PWR_PDCRB_PD5 = 1U << 5 ;

  // Boolean field: Port B pull-down bit y
              (y=0..15)
    static const uint32_t PWR_PDCRB_PD4 = 1U << 4 ;

  // Boolean field: Port B pull-down bit y
              (y=0..15)
    static const uint32_t PWR_PDCRB_PD3 = 1U << 3 ;

  // Boolean field: Port B pull-down bit y
              (y=0..15)
    static const uint32_t PWR_PDCRB_PD2 = 1U << 2 ;

  // Boolean field: Port B pull-down bit y
              (y=0..15)
    static const uint32_t PWR_PDCRB_PD1 = 1U << 1 ;

  // Boolean field: Port B pull-down bit y
              (y=0..15)
    static const uint32_t PWR_PDCRB_PD0 = 1U << 0 ;

  // Boolean field: Port B pull-down bit y
              (y=0..15)
    static const uint32_t PWR_PDCRB_PD13 = 1U << 13 ;

  // Boolean field: Port B pull-down bit y
              (y=0..15)
    static const uint32_t PWR_PDCRB_PD12 = 1U << 12 ;

  // Boolean field: Port B pull-down bit y
              (y=0..15)
    static const uint32_t PWR_PDCRB_PD11 = 1U << 11 ;

  // Boolean field: Port B pull-down bit y
              (y=0..15)
    static const uint32_t PWR_PDCRB_PD10 = 1U << 10 ;

  // Boolean field: Port B pull-down bit y
              (y=0..15)
    static const uint32_t PWR_PDCRB_PD15 = 1U << 15 ;

  // Boolean field: Port B pull-down bit y
              (y=0..15)
    static const uint32_t PWR_PDCRB_PD14 = 1U << 14 ;

//-------------------- Power Port C pull-down control
          register
#define PWR_PDCRC(group) (* ((volatile uint32_t *) (kBaseAddress_PWR [group] + 0x34)))
#define PWR_PDCRC (* ((volatile uint32_t *) (0x40007000 + 0x34)))

  // Boolean field: Port C pull-down bit y
              (y=0..15)
    static const uint32_t PWR_PDCRC_PD9 = 1U << 9 ;

  // Boolean field: Port C pull-down bit y
              (y=0..15)
    static const uint32_t PWR_PDCRC_PD8 = 1U << 8 ;

  // Boolean field: Port C pull-down bit y
              (y=0..15)
    static const uint32_t PWR_PDCRC_PD7 = 1U << 7 ;

  // Boolean field: Port C pull-down bit y
              (y=0..15)
    static const uint32_t PWR_PDCRC_PD6 = 1U << 6 ;

  // Boolean field: Port C pull-down bit y
              (y=0..15)
    static const uint32_t PWR_PDCRC_PD5 = 1U << 5 ;

  // Boolean field: Port C pull-down bit y
              (y=0..15)
    static const uint32_t PWR_PDCRC_PD4 = 1U << 4 ;

  // Boolean field: Port C pull-down bit y
              (y=0..15)
    static const uint32_t PWR_PDCRC_PD3 = 1U << 3 ;

  // Boolean field: Port C pull-down bit y
              (y=0..15)
    static const uint32_t PWR_PDCRC_PD2 = 1U << 2 ;

  // Boolean field: Port C pull-down bit y
              (y=0..15)
    static const uint32_t PWR_PDCRC_PD1 = 1U << 1 ;

  // Boolean field: Port C pull-down bit y
              (y=0..15)
    static const uint32_t PWR_PDCRC_PD0 = 1U << 0 ;

  // Boolean field: Port C pull-down bit y
              (y=0..15)
    static const uint32_t PWR_PDCRC_PD13 = 1U << 13 ;

  // Boolean field: Port C pull-down bit y
              (y=0..15)
    static const uint32_t PWR_PDCRC_PD12 = 1U << 12 ;

  // Boolean field: Port C pull-down bit y
              (y=0..15)
    static const uint32_t PWR_PDCRC_PD11 = 1U << 11 ;

  // Boolean field: Port C pull-down bit y
              (y=0..15)
    static const uint32_t PWR_PDCRC_PD10 = 1U << 10 ;

  // Boolean field: Port C pull-down bit y
              (y=0..15)
    static const uint32_t PWR_PDCRC_PD15 = 1U << 15 ;

  // Boolean field: Port C pull-down bit y
              (y=0..15)
    static const uint32_t PWR_PDCRC_PD14 = 1U << 14 ;

//-------------------- Power Port D pull-down control
          register
#define PWR_PDCRD(group) (* ((volatile uint32_t *) (kBaseAddress_PWR [group] + 0x3C)))
#define PWR_PDCRD (* ((volatile uint32_t *) (0x40007000 + 0x3C)))

  // Boolean field: Port D pull-down bit y
              (y=0..15)
    static const uint32_t PWR_PDCRD_PD9 = 1U << 9 ;

  // Boolean field: Port D pull-down bit y
              (y=0..15)
    static const uint32_t PWR_PDCRD_PD8 = 1U << 8 ;

  // Boolean field: Port D pull-down bit y
              (y=0..15)
    static const uint32_t PWR_PDCRD_PD7 = 1U << 7 ;

  // Boolean field: Port D pull-down bit y
              (y=0..15)
    static const uint32_t PWR_PDCRD_PD6 = 1U << 6 ;

  // Boolean field: Port D pull-down bit y
              (y=0..15)
    static const uint32_t PWR_PDCRD_PD5 = 1U << 5 ;

  // Boolean field: Port D pull-down bit y
              (y=0..15)
    static const uint32_t PWR_PDCRD_PD4 = 1U << 4 ;

  // Boolean field: Port D pull-down bit y
              (y=0..15)
    static const uint32_t PWR_PDCRD_PD3 = 1U << 3 ;

  // Boolean field: Port D pull-down bit y
              (y=0..15)
    static const uint32_t PWR_PDCRD_PD2 = 1U << 2 ;

  // Boolean field: Port D pull-down bit y
              (y=0..15)
    static const uint32_t PWR_PDCRD_PD1 = 1U << 1 ;

  // Boolean field: Port D pull-down bit y
              (y=0..15)
    static const uint32_t PWR_PDCRD_PD0 = 1U << 0 ;

  // Boolean field: Port D pull-down bit y
              (y=0..15)
    static const uint32_t PWR_PDCRD_PD13 = 1U << 13 ;

  // Boolean field: Port D pull-down bit y
              (y=0..15)
    static const uint32_t PWR_PDCRD_PD12 = 1U << 12 ;

  // Boolean field: Port D pull-down bit y
              (y=0..15)
    static const uint32_t PWR_PDCRD_PD11 = 1U << 11 ;

  // Boolean field: Port D pull-down bit y
              (y=0..15)
    static const uint32_t PWR_PDCRD_PD10 = 1U << 10 ;

  // Boolean field: Port D pull-down bit y
              (y=0..15)
    static const uint32_t PWR_PDCRD_PD15 = 1U << 15 ;

  // Boolean field: Port D pull-down bit y
              (y=0..15)
    static const uint32_t PWR_PDCRD_PD14 = 1U << 14 ;

//-------------------- Power Port E pull-down control
          register
#define PWR_PDCRE(group) (* ((volatile uint32_t *) (kBaseAddress_PWR [group] + 0x44)))
#define PWR_PDCRE (* ((volatile uint32_t *) (0x40007000 + 0x44)))

  // Boolean field: Port E pull-down bit y
              (y=0..15)
    static const uint32_t PWR_PDCRE_PD9 = 1U << 9 ;

  // Boolean field: Port E pull-down bit y
              (y=0..15)
    static const uint32_t PWR_PDCRE_PD8 = 1U << 8 ;

  // Boolean field: Port E pull-down bit y
              (y=0..15)
    static const uint32_t PWR_PDCRE_PD7 = 1U << 7 ;

  // Boolean field: Port E pull-down bit y
              (y=0..15)
    static const uint32_t PWR_PDCRE_PD6 = 1U << 6 ;

  // Boolean field: Port E pull-down bit y
              (y=0..15)
    static const uint32_t PWR_PDCRE_PD5 = 1U << 5 ;

  // Boolean field: Port E pull-down bit y
              (y=0..15)
    static const uint32_t PWR_PDCRE_PD4 = 1U << 4 ;

  // Boolean field: Port E pull-down bit y
              (y=0..15)
    static const uint32_t PWR_PDCRE_PD3 = 1U << 3 ;

  // Boolean field: Port E pull-down bit y
              (y=0..15)
    static const uint32_t PWR_PDCRE_PD2 = 1U << 2 ;

  // Boolean field: Port E pull-down bit y
              (y=0..15)
    static const uint32_t PWR_PDCRE_PD1 = 1U << 1 ;

  // Boolean field: Port E pull-down bit y
              (y=0..15)
    static const uint32_t PWR_PDCRE_PD0 = 1U << 0 ;

  // Boolean field: Port E pull-down bit y
              (y=0..15)
    static const uint32_t PWR_PDCRE_PD13 = 1U << 13 ;

  // Boolean field: Port E pull-down bit y
              (y=0..15)
    static const uint32_t PWR_PDCRE_PD12 = 1U << 12 ;

  // Boolean field: Port E pull-down bit y
              (y=0..15)
    static const uint32_t PWR_PDCRE_PD11 = 1U << 11 ;

  // Boolean field: Port E pull-down bit y
              (y=0..15)
    static const uint32_t PWR_PDCRE_PD10 = 1U << 10 ;

  // Boolean field: Port E pull-down bit y
              (y=0..15)
    static const uint32_t PWR_PDCRE_PD15 = 1U << 15 ;

  // Boolean field: Port E pull-down bit y
              (y=0..15)
    static const uint32_t PWR_PDCRE_PD14 = 1U << 14 ;

//-------------------- Power Port F pull-down control
          register
#define PWR_PDCRF(group) (* ((volatile uint32_t *) (kBaseAddress_PWR [group] + 0x4C)))
#define PWR_PDCRF (* ((volatile uint32_t *) (0x40007000 + 0x4C)))

  // Boolean field: Port F pull-down bit y
              (y=0..15)
    static const uint32_t PWR_PDCRF_PD9 = 1U << 9 ;

  // Boolean field: Port F pull-down bit y
              (y=0..15)
    static const uint32_t PWR_PDCRF_PD8 = 1U << 8 ;

  // Boolean field: Port F pull-down bit y
              (y=0..15)
    static const uint32_t PWR_PDCRF_PD7 = 1U << 7 ;

  // Boolean field: Port F pull-down bit y
              (y=0..15)
    static const uint32_t PWR_PDCRF_PD6 = 1U << 6 ;

  // Boolean field: Port F pull-down bit y
              (y=0..15)
    static const uint32_t PWR_PDCRF_PD5 = 1U << 5 ;

  // Boolean field: Port F pull-down bit y
              (y=0..15)
    static const uint32_t PWR_PDCRF_PD4 = 1U << 4 ;

  // Boolean field: Port F pull-down bit y
              (y=0..15)
    static const uint32_t PWR_PDCRF_PD3 = 1U << 3 ;

  // Boolean field: Port F pull-down bit y
              (y=0..15)
    static const uint32_t PWR_PDCRF_PD2 = 1U << 2 ;

  // Boolean field: Port F pull-down bit y
              (y=0..15)
    static const uint32_t PWR_PDCRF_PD1 = 1U << 1 ;

  // Boolean field: Port F pull-down bit y
              (y=0..15)
    static const uint32_t PWR_PDCRF_PD0 = 1U << 0 ;

  // Boolean field: Port F pull-down bit y
              (y=0..15)
    static const uint32_t PWR_PDCRF_PD13 = 1U << 13 ;

  // Boolean field: Port F pull-down bit y
              (y=0..15)
    static const uint32_t PWR_PDCRF_PD12 = 1U << 12 ;

  // Boolean field: Port F pull-down bit y
              (y=0..15)
    static const uint32_t PWR_PDCRF_PD11 = 1U << 11 ;

  // Boolean field: Port F pull-down bit y
              (y=0..15)
    static const uint32_t PWR_PDCRF_PD10 = 1U << 10 ;

  // Boolean field: Port F pull-down bit y
              (y=0..15)
    static const uint32_t PWR_PDCRF_PD15 = 1U << 15 ;

  // Boolean field: Port F pull-down bit y
              (y=0..15)
    static const uint32_t PWR_PDCRF_PD14 = 1U << 14 ;

//-------------------- Power Port G pull-down control
          register
#define PWR_PDCRG(group) (* ((volatile uint32_t *) (kBaseAddress_PWR [group] + 0x54)))
#define PWR_PDCRG (* ((volatile uint32_t *) (0x40007000 + 0x54)))

  // Boolean field: Port G pull-down bit y
              (y=0..15)
    static const uint32_t PWR_PDCRG_PD9 = 1U << 9 ;

  // Boolean field: Port G pull-down bit y
              (y=0..15)
    static const uint32_t PWR_PDCRG_PD8 = 1U << 8 ;

  // Boolean field: Port G pull-down bit y
              (y=0..15)
    static const uint32_t PWR_PDCRG_PD7 = 1U << 7 ;

  // Boolean field: Port G pull-down bit y
              (y=0..15)
    static const uint32_t PWR_PDCRG_PD6 = 1U << 6 ;

  // Boolean field: Port G pull-down bit y
              (y=0..15)
    static const uint32_t PWR_PDCRG_PD5 = 1U << 5 ;

  // Boolean field: Port G pull-down bit y
              (y=0..15)
    static const uint32_t PWR_PDCRG_PD4 = 1U << 4 ;

  // Boolean field: Port G pull-down bit y
              (y=0..15)
    static const uint32_t PWR_PDCRG_PD3 = 1U << 3 ;

  // Boolean field: Port G pull-down bit y
              (y=0..15)
    static const uint32_t PWR_PDCRG_PD2 = 1U << 2 ;

  // Boolean field: Port G pull-down bit y
              (y=0..15)
    static const uint32_t PWR_PDCRG_PD1 = 1U << 1 ;

  // Boolean field: Port G pull-down bit y
              (y=0..15)
    static const uint32_t PWR_PDCRG_PD0 = 1U << 0 ;

  // Boolean field: Port G pull-down bit y
              (y=0..15)
    static const uint32_t PWR_PDCRG_PD13 = 1U << 13 ;

  // Boolean field: Port G pull-down bit y
              (y=0..15)
    static const uint32_t PWR_PDCRG_PD12 = 1U << 12 ;

  // Boolean field: Port G pull-down bit y
              (y=0..15)
    static const uint32_t PWR_PDCRG_PD11 = 1U << 11 ;

  // Boolean field: Port G pull-down bit y
              (y=0..15)
    static const uint32_t PWR_PDCRG_PD10 = 1U << 10 ;

  // Boolean field: Port G pull-down bit y
              (y=0..15)
    static const uint32_t PWR_PDCRG_PD15 = 1U << 15 ;

  // Boolean field: Port G pull-down bit y
              (y=0..15)
    static const uint32_t PWR_PDCRG_PD14 = 1U << 14 ;

//-------------------- Power status register 2
#define PWR_SR2(group) (* ((const volatile uint32_t *) (kBaseAddress_PWR [group] + 0x14)))
#define PWR_SR2 (* ((const volatile uint32_t *) (0x40007000 + 0x14)))

  // Boolean field: Peripheral voltage monitoring output:
              VDDA vs. 1.62 V
    static const uint32_t PWR_SR2_PVMO3 = 1U << 14 ;

  // Boolean field: Peripheral voltage monitoring output:
              VDDIO2 vs. 0.9 V
    static const uint32_t PWR_SR2_PVMO2 = 1U << 13 ;

  // Boolean field: Peripheral voltage monitoring output:
              VDDUSB vs. 1.2 V
    static const uint32_t PWR_SR2_PVMO1 = 1U << 12 ;

  // Boolean field: Low-power regulator
              started
    static const uint32_t PWR_SR2_REGLPS = 1U << 8 ;

  // Boolean field: Peripheral voltage monitoring output:
              VDDA vs. 2.2 V
    static const uint32_t PWR_SR2_PVMO4 = 1U << 15 ;

  // Boolean field: Power voltage detector
              output
    static const uint32_t PWR_SR2_PVDO = 1U << 11 ;

  // Boolean field: Low-power regulator flag
    static const uint32_t PWR_SR2_REGLPF = 1U << 9 ;

  // Boolean field: Voltage scaling flag
    static const uint32_t PWR_SR2_VOSF = 1U << 10 ;

//-------------------- Power status register 1
#define PWR_SR1(group) (* ((const volatile uint32_t *) (kBaseAddress_PWR [group] + 0x10)))
#define PWR_SR1 (* ((const volatile uint32_t *) (0x40007000 + 0x10)))

  // Boolean field: Standby flag
    static const uint32_t PWR_SR1_CSBF = 1U << 8 ;

  // Boolean field: Wakeup flag internal
    static const uint32_t PWR_SR1_WUFI = 1U << 15 ;

  // Boolean field: Wakeup flag 4
    static const uint32_t PWR_SR1_CWUF4 = 1U << 3 ;

  // Boolean field: Wakeup flag 5
    static const uint32_t PWR_SR1_CWUF5 = 1U << 4 ;

  // Boolean field: Wakeup flag 1
    static const uint32_t PWR_SR1_CWUF1 = 1U << 0 ;

  // Boolean field: Wakeup flag 2
    static const uint32_t PWR_SR1_CWUF2 = 1U << 1 ;

  // Boolean field: Wakeup flag 3
    static const uint32_t PWR_SR1_CWUF3 = 1U << 2 ;

//-------------------- Power status clear register
#define PWR_SCR(group) (* ((volatile uint32_t *) (kBaseAddress_PWR [group] + 0x18)))
#define PWR_SCR (* ((volatile uint32_t *) (0x40007000 + 0x18)))

  // Boolean field: Clear wakeup flag 4
    static const uint32_t PWR_SCR_WUF4 = 1U << 3 ;

  // Boolean field: Clear wakeup flag 5
    static const uint32_t PWR_SCR_WUF5 = 1U << 4 ;

  // Boolean field: Clear wakeup flag 2
    static const uint32_t PWR_SCR_WUF2 = 1U << 1 ;

  // Boolean field: Clear wakeup flag 3
    static const uint32_t PWR_SCR_WUF3 = 1U << 2 ;

  // Boolean field: Clear wakeup flag 1
    static const uint32_t PWR_SCR_WUF1 = 1U << 0 ;

  // Boolean field: Clear standby flag
    static const uint32_t PWR_SCR_SBF = 1U << 8 ;

//-------------------- Power control register 2
#define PWR_CR2(group) (* ((volatile uint32_t *) (kBaseAddress_PWR [group] + 0x4)))
#define PWR_CR2 (* ((volatile uint32_t *) (0x40007000 + 0x4)))

  // Boolean field: Power voltage detector
              enable
    static const uint32_t PWR_CR2_PVDE = 1U << 0 ;

  // Field (width: 3 bits): Power voltage detector level
              selection
    inline uint32_t PWR_CR2_PLS (const uint32_t inValue) { return (inValue & 7U) << 1 ; }

  // Boolean field: VDDUSB USB supply valid
    static const uint32_t PWR_CR2_USV = 1U << 10 ;

  // Boolean field: Peripheral voltage monitoring 4 enable:
              VDDA vs. 2.2V
    static const uint32_t PWR_CR2_PVME4 = 1U << 7 ;

  // Boolean field: VDDIO2 Independent I/Os supply
              valid
    static const uint32_t PWR_CR2_IOSV = 1U << 9 ;

  // Boolean field: Peripheral voltage monitoring 1 enable:
              VDDUSB vs. 1.2V
    static const uint32_t PWR_CR2_PVME1 = 1U << 4 ;

  // Boolean field: Peripheral voltage monitoring 3 enable:
              VDDA vs. 1.62V
    static const uint32_t PWR_CR2_PVME3 = 1U << 6 ;

  // Boolean field: Peripheral voltage monitoring 2 enable:
              VDDIO2 vs. 0.9V
    static const uint32_t PWR_CR2_PVME2 = 1U << 5 ;

//-------------------- Power control register 3
#define PWR_CR3(group) (* ((volatile uint32_t *) (kBaseAddress_PWR [group] + 0x8)))
#define PWR_CR3 (* ((volatile uint32_t *) (0x40007000 + 0x8)))

  // Boolean field: Enable Wakeup pin WKUP1
    static const uint32_t PWR_CR3_EWUP1 = 1U << 0 ;

  // Boolean field: Enable Wakeup pin WKUP2
    static const uint32_t PWR_CR3_EWUP2 = 1U << 1 ;

  // Boolean field: Enable Wakeup pin WKUP3
    static const uint32_t PWR_CR3_EWUP3 = 1U << 2 ;

  // Boolean field: Enable Wakeup pin WKUP4
    static const uint32_t PWR_CR3_EWUP4 = 1U << 3 ;

  // Boolean field: Enable Wakeup pin WKUP5
    static const uint32_t PWR_CR3_EWUP5 = 1U << 4 ;

  // Boolean field: Enable internal wakeup
              line
    static const uint32_t PWR_CR3_EWF = 1U << 15 ;

  // Boolean field: Apply pull-up and pull-down
              configuration
    static const uint32_t PWR_CR3_APC = 1U << 10 ;

  // Boolean field: SRAM2 retention in Standby
              mode
    static const uint32_t PWR_CR3_RRS = 1U << 8 ;

//-------------------- Power control register 1
#define PWR_CR1(group) (* ((volatile uint32_t *) (kBaseAddress_PWR [group] + 0x0)))
#define PWR_CR1 (* ((volatile uint32_t *) (0x40007000 + 0x0)))

  // Boolean field: Disable backup domain write
              protection
    static const uint32_t PWR_CR1_DBP = 1U << 8 ;

  // Field (width: 3 bits): Low-power mode selection
    inline uint32_t PWR_CR1_LPMS (const uint32_t inValue) { return (inValue & 7U) << 0 ; }

  // Boolean field: Low-power run
    static const uint32_t PWR_CR1_LPR = 1U << 14 ;

  // Field (width: 2 bits): Voltage scaling range
              selection
    inline uint32_t PWR_CR1_VOS (const uint32_t inValue) { return (inValue & 3U) << 9 ; }

//-------------------- Power control register 4
#define PWR_CR4(group) (* ((volatile uint32_t *) (kBaseAddress_PWR [group] + 0xC)))
#define PWR_CR4 (* ((volatile uint32_t *) (0x40007000 + 0xC)))

  // Boolean field: VBAT battery charging resistor
              selection
    static const uint32_t PWR_CR4_VBRS = 1U << 9 ;

  // Boolean field: VBAT battery charging
              enable
    static const uint32_t PWR_CR4_VBE = 1U << 8 ;

  // Boolean field: Wakeup pin WKUP4 polarity
    static const uint32_t PWR_CR4_WP4 = 1U << 3 ;

  // Boolean field: Wakeup pin WKUP5 polarity
    static const uint32_t PWR_CR4_WP5 = 1U << 4 ;

  // Boolean field: Wakeup pin WKUP1 polarity
    static const uint32_t PWR_CR4_WP1 = 1U << 0 ;

  // Boolean field: Wakeup pin WKUP2 polarity
    static const uint32_t PWR_CR4_WP2 = 1U << 1 ;

  // Boolean field: Wakeup pin WKUP3 polarity
    static const uint32_t PWR_CR4_WP3 = 1U << 2 ;

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
// Peripheral group QUADSPI
//                QUADSPI at 0xA0001000
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

static const uint32_t kBaseAddress_QUADSPI [1] = {0xA0001000} ;

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

//-------------------- flag clear register
#define QUADSPI_FCR(group) (* ((volatile uint32_t *) (kBaseAddress_QUADSPI [group] + 0xC)))
#define QUADSPI_FCR (* ((volatile uint32_t *) (0xA0001000 + 0xC)))

  // Boolean field: Clear timeout flag
    static const uint32_t QUADSPI_FCR_CTOF = 1U << 4 ;

  // Boolean field: Clear status match flag
    static const uint32_t QUADSPI_FCR_CSMF = 1U << 3 ;

  // Boolean field: Clear transfer error flag
    static const uint32_t QUADSPI_FCR_CTEF = 1U << 0 ;

  // Boolean field: Clear transfer complete
              flag
    static const uint32_t QUADSPI_FCR_CTCF = 1U << 1 ;

//-------------------- status register
#define QUADSPI_SR(group) (* ((const volatile uint32_t *) (kBaseAddress_QUADSPI [group] + 0x8)))
#define QUADSPI_SR (* ((const volatile uint32_t *) (0xA0001000 + 0x8)))

  // Boolean field: Busy
    static const uint32_t QUADSPI_SR_BUSY = 1U << 5 ;

  // Field (width: 7 bits): FIFO level
    inline uint32_t QUADSPI_SR_FLEVEL (const uint32_t inValue) { return (inValue & 127U) << 8 ; }

  // Boolean field: Transfer error flag
    static const uint32_t QUADSPI_SR_TEF = 1U << 0 ;

  // Boolean field: FIFO threshold flag
    static const uint32_t QUADSPI_SR_FTF = 1U << 2 ;

  // Boolean field: Transfer complete flag
    static const uint32_t QUADSPI_SR_TCF = 1U << 1 ;

  // Boolean field: Status match flag
    static const uint32_t QUADSPI_SR_SMF = 1U << 3 ;

  // Boolean field: Timeout flag
    static const uint32_t QUADSPI_SR_TOF = 1U << 4 ;

//-------------------- data register
#define QUADSPI_DR(group) (* ((volatile uint32_t *) (kBaseAddress_QUADSPI [group] + 0x20)))
#define QUADSPI_DR (* ((volatile uint32_t *) (0xA0001000 + 0x20)))

//-------------------- polling status mask register
#define QUADSPI_PSMKR(group) (* ((volatile uint32_t *) (kBaseAddress_QUADSPI [group] + 0x24)))
#define QUADSPI_PSMKR (* ((volatile uint32_t *) (0xA0001000 + 0x24)))

//-------------------- low-power timeout register
#define QUADSPI_LPTR(group) (* ((volatile uint32_t *) (kBaseAddress_QUADSPI [group] + 0x30)))
#define QUADSPI_LPTR (* ((volatile uint32_t *) (0xA0001000 + 0x30)))

  // Field (width: 16 bits): Timeout period
    inline uint32_t QUADSPI_LPTR_TIMEOUT (const uint32_t inValue) { return (inValue & 65535U) << 0 ; }

//-------------------- communication configuration
          register
#define QUADSPI_CCR(group) (* ((volatile uint32_t *) (kBaseAddress_QUADSPI [group] + 0x14)))
#define QUADSPI_CCR (* ((volatile uint32_t *) (0xA0001000 + 0x14)))

  // Field (width: 2 bits): Data mode
    inline uint32_t QUADSPI_CCR_DMODE (const uint32_t inValue) { return (inValue & 3U) << 24 ; }

  // Field (width: 2 bits): Address mode
    inline uint32_t QUADSPI_CCR_ADMODE (const uint32_t inValue) { return (inValue & 3U) << 10 ; }

  // Field (width: 2 bits): Alternate bytes mode
    inline uint32_t QUADSPI_CCR_ABMODE (const uint32_t inValue) { return (inValue & 3U) << 14 ; }

  // Field (width: 8 bits): Instruction
    inline uint32_t QUADSPI_CCR_INSTRUCTION (const uint32_t inValue) { return (inValue & 255U) << 0 ; }

  // Boolean field: Send instruction only once
              mode
    static const uint32_t QUADSPI_CCR_SIOO = 1U << 28 ;

  // Field (width: 2 bits): Instruction mode
    inline uint32_t QUADSPI_CCR_IMODE (const uint32_t inValue) { return (inValue & 3U) << 8 ; }

  // Boolean field: DDR hold half cycle
    static const uint32_t QUADSPI_CCR_DHHC = 1U << 30 ;

  // Field (width: 2 bits): Address size
    inline uint32_t QUADSPI_CCR_ADSIZE (const uint32_t inValue) { return (inValue & 3U) << 12 ; }

  // Field (width: 2 bits): Alternate bytes size
    inline uint32_t QUADSPI_CCR_ABSIZE (const uint32_t inValue) { return (inValue & 3U) << 16 ; }

  // Field (width: 2 bits): Functional mode
    inline uint32_t QUADSPI_CCR_FMODE (const uint32_t inValue) { return (inValue & 3U) << 26 ; }

  // Boolean field: Double data rate mode
    static const uint32_t QUADSPI_CCR_DDRM = 1U << 31 ;

  // Field (width: 5 bits): Number of dummy cycles
    inline uint32_t QUADSPI_CCR_DCYC (const uint32_t inValue) { return (inValue & 31U) << 18 ; }

//-------------------- polling status match register
#define QUADSPI_PSMAR(group) (* ((volatile uint32_t *) (kBaseAddress_QUADSPI [group] + 0x28)))
#define QUADSPI_PSMAR (* ((volatile uint32_t *) (0xA0001000 + 0x28)))

//-------------------- data length register
#define QUADSPI_DLR(group) (* ((volatile uint32_t *) (kBaseAddress_QUADSPI [group] + 0x10)))
#define QUADSPI_DLR (* ((volatile uint32_t *) (0xA0001000 + 0x10)))

//-------------------- ABR
#define QUADSPI_ABR(group) (* ((volatile uint32_t *) (kBaseAddress_QUADSPI [group] + 0x1C)))
#define QUADSPI_ABR (* ((volatile uint32_t *) (0xA0001000 + 0x1C)))

//-------------------- address register
#define QUADSPI_AR(group) (* ((volatile uint32_t *) (kBaseAddress_QUADSPI [group] + 0x18)))
#define QUADSPI_AR (* ((volatile uint32_t *) (0xA0001000 + 0x18)))

//-------------------- control register
#define QUADSPI_CR(group) (* ((volatile uint32_t *) (kBaseAddress_QUADSPI [group] + 0x0)))
#define QUADSPI_CR (* ((volatile uint32_t *) (0xA0001000 + 0x0)))

  // Boolean field: Dual-flash mode
    static const uint32_t QUADSPI_CR_DFM = 1U << 6 ;

  // Boolean field: Timeout counter enable
    static const uint32_t QUADSPI_CR_TCEN = 1U << 3 ;

  // Boolean field: Enable
    static const uint32_t QUADSPI_CR_EN = 1U << 0 ;

  // Field (width: 5 bits): IFO threshold level
    inline uint32_t QUADSPI_CR_FTHRES (const uint32_t inValue) { return (inValue & 31U) << 8 ; }

  // Field (width: 8 bits): Clock prescaler
    inline uint32_t QUADSPI_CR_PRESCALER (const uint32_t inValue) { return (inValue & 255U) << 24 ; }

  // Boolean field: Transfer error interrupt
              enable
    static const uint32_t QUADSPI_CR_TEIE = 1U << 16 ;

  // Boolean field: Automatic poll mode stop
    static const uint32_t QUADSPI_CR_APMS = 1U << 22 ;

  // Boolean field: DMA enable
    static const uint32_t QUADSPI_CR_DMAEN = 1U << 2 ;

  // Boolean field: FIFO threshold interrupt
              enable
    static const uint32_t QUADSPI_CR_FTIE = 1U << 18 ;

  // Boolean field: TimeOut interrupt enable
    static const uint32_t QUADSPI_CR_TOIE = 1U << 20 ;

  // Boolean field: Abort request
    static const uint32_t QUADSPI_CR_ABORT = 1U << 1 ;

  // Boolean field: Polling match mode
    static const uint32_t QUADSPI_CR_PMM = 1U << 23 ;

  // Boolean field: FLASH memory selection
    static const uint32_t QUADSPI_CR_FSEL = 1U << 7 ;

  // Boolean field: Sample shift
    static const uint32_t QUADSPI_CR_SSHIFT = 1U << 4 ;

  // Boolean field: Transfer complete interrupt
              enable
    static const uint32_t QUADSPI_CR_TCIE = 1U << 17 ;

  // Boolean field: Status match interrupt
              enable
    static const uint32_t QUADSPI_CR_SMIE = 1U << 19 ;

//-------------------- polling interval register
#define QUADSPI_PIR(group) (* ((volatile uint32_t *) (kBaseAddress_QUADSPI [group] + 0x2C)))
#define QUADSPI_PIR (* ((volatile uint32_t *) (0xA0001000 + 0x2C)))

  // Field (width: 16 bits): Polling interval
    inline uint32_t QUADSPI_PIR_INTERVAL (const uint32_t inValue) { return (inValue & 65535U) << 0 ; }

//-------------------- device configuration register
#define QUADSPI_DCR(group) (* ((volatile uint32_t *) (kBaseAddress_QUADSPI [group] + 0x4)))
#define QUADSPI_DCR (* ((volatile uint32_t *) (0xA0001000 + 0x4)))

  // Boolean field: Mode 0 / mode 3
    static const uint32_t QUADSPI_DCR_CKMODE = 1U << 0 ;

  // Field (width: 3 bits): Chip select high time
    inline uint32_t QUADSPI_DCR_CSHT (const uint32_t inValue) { return (inValue & 7U) << 8 ; }

  // Field (width: 5 bits): FLASH memory size
    inline uint32_t QUADSPI_DCR_FSIZE (const uint32_t inValue) { return (inValue & 31U) << 16 ; }

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
// Peripheral group RCC
//                RCC at 0x40021000
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

static const uint32_t kBaseAddress_RCC [1] = {0x40021000} ;

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

//-------------------- AHB2 peripheral clock enable
          register
#define RCC_AHB2ENR(group) (* ((volatile uint32_t *) (kBaseAddress_RCC [group] + 0x4C)))
#define RCC_AHB2ENR (* ((volatile uint32_t *) (0x40021000 + 0x4C)))

  // Boolean field: IO port H clock enable
    static const uint32_t RCC_AHB2ENR_GPIOHEN = 1U << 7 ;

  // Boolean field: IO port C clock enable
    static const uint32_t RCC_AHB2ENR_GPIOCEN = 1U << 2 ;

  // Boolean field: IO port B clock enable
    static const uint32_t RCC_AHB2ENR_GPIOBEN = 1U << 1 ;

  // Boolean field: IO port E clock enable
    static const uint32_t RCC_AHB2ENR_GPIOEEN = 1U << 4 ;

  // Boolean field: Random Number Generator clock
              enable
    static const uint32_t RCC_AHB2ENR_RNGEN = 1U << 18 ;

  // Boolean field: AES accelerator clock
              enable
    static const uint32_t RCC_AHB2ENR_AESEN = 1U << 16 ;

  // Boolean field: IO port A clock enable
    static const uint32_t RCC_AHB2ENR_GPIOAEN = 1U << 0 ;

  // Boolean field: IO port D clock enable
    static const uint32_t RCC_AHB2ENR_GPIODEN = 1U << 3 ;

  // Boolean field: ADC clock enable
    static const uint32_t RCC_AHB2ENR_ADCEN = 1U << 13 ;

//-------------------- APB1 peripheral clock enable register
          2
#define RCC_APB1ENR2(group) (* ((volatile uint32_t *) (kBaseAddress_RCC [group] + 0x5C)))
#define RCC_APB1ENR2 (* ((volatile uint32_t *) (0x40021000 + 0x5C)))

  // Boolean field: LPTIM2EN
    static const uint32_t RCC_APB1ENR2_LPTIM2EN = 1U << 5 ;

  // Boolean field: DFSDMEN enable
    static const uint32_t RCC_APB1ENR2_DFSDMEN = 1U << 24 ;

  // Boolean field: I2C4 clock enable
    static const uint32_t RCC_APB1ENR2_I2C4EN = 1U << 1 ;

  // Boolean field: Single wire protocol clock
              enable
    static const uint32_t RCC_APB1ENR2_SWPMI1EN = 1U << 2 ;

  // Boolean field: Low power UART 1 clock
              enable
    static const uint32_t RCC_APB1ENR2_LPUART1EN = 1U << 0 ;

//-------------------- APB1ENR1
#define RCC_APB1ENR1(group) (* ((volatile uint32_t *) (kBaseAddress_RCC [group] + 0x58)))
#define RCC_APB1ENR1 (* ((volatile uint32_t *) (0x40021000 + 0x58)))

  // Boolean field: SPI1 clock enable
    static const uint32_t RCC_APB1ENR1_SPI1EN = 1U << 14 ;

  // Boolean field: USART2 clock enable
    static const uint32_t RCC_APB1ENR1_USART2EN = 1U << 17 ;

  // Boolean field: RTC APB clock enable
    static const uint32_t RCC_APB1ENR1_RTCAPBEN = 1U << 10 ;

  // Boolean field: Low power timer 1 clock
              enable
    static const uint32_t RCC_APB1ENR1_LPTIM1EN = 1U << 31 ;

  // Boolean field: OPAMP interface clock
              enable
    static const uint32_t RCC_APB1ENR1_OPAMPEN = 1U << 30 ;

  // Boolean field: USART1 clock enable
    static const uint32_t RCC_APB1ENR1_USART1EN = 1U << 18 ;

  // Boolean field: CRS clock enable
    static const uint32_t RCC_APB1ENR1_CRSEN = 1U << 24 ;

  // Boolean field: SPI3 clock enable
    static const uint32_t RCC_APB1ENR1_SPI3EN = 1U << 15 ;

  // Boolean field: TIM6 timer clock enable
    static const uint32_t RCC_APB1ENR1_TIM6EN = 1U << 4 ;

  // Boolean field: LCD clock enable
    static const uint32_t RCC_APB1ENR1_LCDEN = 1U << 9 ;

  // Boolean field: USB FS clock enable
    static const uint32_t RCC_APB1ENR1_USBF = 1U << 26 ;

  // Boolean field: TIM2 timer clock enable
    static const uint32_t RCC_APB1ENR1_TIM2EN = 1U << 0 ;

  // Boolean field: TIM3 timer clock enable
    static const uint32_t RCC_APB1ENR1_TIM3EN = 1U << 1 ;

  // Boolean field: TIM7 timer clock enable
    static const uint32_t RCC_APB1ENR1_TIM7EN = 1U << 5 ;

  // Boolean field: Power interface clock
              enable
    static const uint32_t RCC_APB1ENR1_PWREN = 1U << 28 ;

  // Boolean field: CAN1 clock enable
    static const uint32_t RCC_APB1ENR1_CAN1EN = 1U << 25 ;

  // Boolean field: I2C1 clock enable
    static const uint32_t RCC_APB1ENR1_I2C1EN = 1U << 21 ;

  // Boolean field: I2C2 clock enable
    static const uint32_t RCC_APB1ENR1_I2C2EN = 1U << 22 ;

  // Boolean field: Window watchdog clock
              enable
    static const uint32_t RCC_APB1ENR1_WWDGEN = 1U << 11 ;

  // Boolean field: I2C3 clock enable
    static const uint32_t RCC_APB1ENR1_I2C3EN = 1U << 23 ;

  // Boolean field: UART4 clock enable
    static const uint32_t RCC_APB1ENR1_UART4EN = 1U << 19 ;

  // Boolean field: DAC1 interface clock
              enable
    static const uint32_t RCC_APB1ENR1_DAC1EN = 1U << 29 ;

//-------------------- APB1SMENR1
#define RCC_APB1SMENR1(group) (* ((volatile uint32_t *) (kBaseAddress_RCC [group] + 0x78)))
#define RCC_APB1SMENR1 (* ((volatile uint32_t *) (0x40021000 + 0x78)))

  // Boolean field: Window watchdog clocks enable during
              Sleep and Stop modes
    static const uint32_t RCC_APB1SMENR1_WWDGSMEN = 1U << 11 ;

  // Boolean field: Power interface clocks enable during
              Sleep and Stop modes
    static const uint32_t RCC_APB1SMENR1_PWRSMEN = 1U << 28 ;

  // Boolean field: USB FS clock enable during Sleep and
              Stop modes
    static const uint32_t RCC_APB1SMENR1_USBFSSMEN = 1U << 26 ;

  // Boolean field: USART2 clocks enable during Sleep and
              Stop modes
    static const uint32_t RCC_APB1SMENR1_USART2SMEN = 1U << 18 ;

  // Boolean field: I2C3 clocks enable during Sleep and Stop
              modes
    static const uint32_t RCC_APB1SMENR1_I2C3SMEN = 1U << 23 ;

  // Boolean field: I2C2 clocks enable during Sleep and Stop
              modes
    static const uint32_t RCC_APB1SMENR1_I2C2SMEN = 1U << 22 ;

  // Boolean field: TIM6 timer clocks enable during Sleep
              and Stop modes
    static const uint32_t RCC_APB1SMENR1_TIM6SMEN = 1U << 4 ;

  // Boolean field: LCD clocks enable during Sleep and Stop
              modes
    static const uint32_t RCC_APB1SMENR1_LCDSMEN = 1U << 9 ;

  // Boolean field: TIM7 timer clocks enable during Sleep
              and Stop modes
    static const uint32_t RCC_APB1SMENR1_TIM7SMEN = 1U << 5 ;

  // Boolean field: I2C1 clocks enable during Sleep and Stop
              modes
    static const uint32_t RCC_APB1SMENR1_I2C1SMEN = 1U << 21 ;

  // Boolean field: CAN1 clocks enable during Sleep and Stop
              modes
    static const uint32_t RCC_APB1SMENR1_CAN1SMEN = 1U << 25 ;

  // Boolean field: RTC APB clock enable during Sleep and
              Stop modes
    static const uint32_t RCC_APB1SMENR1_RTCAPBSMEN = 1U << 10 ;

  // Boolean field: DAC1 interface clocks enable during
              Sleep and Stop modes
    static const uint32_t RCC_APB1SMENR1_DAC1SMEN = 1U << 29 ;

  // Boolean field: OPAMP interface clocks enable during
              Sleep and Stop modes
    static const uint32_t RCC_APB1SMENR1_OPAMPSMEN = 1U << 30 ;

  // Boolean field: USART1 clocks enable during Sleep and
              Stop modes
    static const uint32_t RCC_APB1SMENR1_USART1SMEN = 1U << 17 ;

  // Boolean field: Low power timer 1 clocks enable during
              Sleep and Stop modes
    static const uint32_t RCC_APB1SMENR1_LPTIM1SMEN = 1U << 31 ;

  // Boolean field: SPI2 clocks enable during Sleep and Stop
              modes
    static const uint32_t RCC_APB1SMENR1_SPI2SMEN = 1U << 14 ;

  // Boolean field: TIM2 timer clocks enable during Sleep
              and Stop modes
    static const uint32_t RCC_APB1SMENR1_TIM2SMEN = 1U << 0 ;

  // Boolean field: CRS clock enable during Sleep and Stop
              modes
    static const uint32_t RCC_APB1SMENR1_CRSSMEN = 1U << 24 ;

  // Boolean field: SPI3 clocks enable during Sleep and Stop
              modes
    static const uint32_t RCC_APB1SMENR1_SP3SMEN = 1U << 15 ;

//-------------------- AHB1 peripheral reset register
#define RCC_AHB1RSTR(group) (* ((volatile uint32_t *) (kBaseAddress_RCC [group] + 0x28)))
#define RCC_AHB1RSTR (* ((volatile uint32_t *) (0x40021000 + 0x28)))

  // Boolean field: DMA2 reset
    static const uint32_t RCC_AHB1RSTR_DMA2RST = 1U << 1 ;

  // Boolean field: DMA1 reset
    static const uint32_t RCC_AHB1RSTR_DMA1RST = 1U << 0 ;

  // Boolean field: Touch Sensing Controller
              reset
    static const uint32_t RCC_AHB1RSTR_TSCRST = 1U << 16 ;

  // Boolean field: Flash memory interface
              reset
    static const uint32_t RCC_AHB1RSTR_FLASHRST = 1U << 8 ;

  // Boolean field: CRC reset
    static const uint32_t RCC_AHB1RSTR_CRCRST = 1U << 11 ;

//-------------------- AHB2 peripheral reset register
#define RCC_AHB2RSTR(group) (* ((volatile uint32_t *) (kBaseAddress_RCC [group] + 0x2C)))
#define RCC_AHB2RSTR (* ((volatile uint32_t *) (0x40021000 + 0x2C)))

  // Boolean field: IO port B reset
    static const uint32_t RCC_AHB2RSTR_GPIOBRST = 1U << 1 ;

  // Boolean field: IO port E reset
    static const uint32_t RCC_AHB2RSTR_GPIOERST = 1U << 4 ;

  // Boolean field: IO port H reset
    static const uint32_t RCC_AHB2RSTR_GPIOHRST = 1U << 7 ;

  // Boolean field: IO port D reset
    static const uint32_t RCC_AHB2RSTR_GPIODRST = 1U << 3 ;

  // Boolean field: AES hardware accelerator
              reset
    static const uint32_t RCC_AHB2RSTR_AESRST = 1U << 16 ;

  // Boolean field: IO port A reset
    static const uint32_t RCC_AHB2RSTR_GPIOARST = 1U << 0 ;

  // Boolean field: IO port C reset
    static const uint32_t RCC_AHB2RSTR_GPIOCRST = 1U << 2 ;

  // Boolean field: Random number generator
              reset
    static const uint32_t RCC_AHB2RSTR_RNGRST = 1U << 18 ;

  // Boolean field: ADC reset
    static const uint32_t RCC_AHB2RSTR_ADCRST = 1U << 13 ;

//-------------------- AHB3 peripheral clocks enable in Sleep and
          Stop modes register
#define RCC_AHB3SMENR(group) (* ((volatile uint32_t *) (kBaseAddress_RCC [group] + 0x70)))
#define RCC_AHB3SMENR (* ((volatile uint32_t *) (0x40021000 + 0x70)))

  // Boolean field: QSPISMEN
    static const uint32_t RCC_AHB3SMENR_QSPISMEN = 1U << 8 ;

//-------------------- Clock control register
#define RCC_CR(group) (* ((const volatile uint32_t *) (kBaseAddress_RCC [group] + 0x0)))
#define RCC_CR (* ((const volatile uint32_t *) (0x40021000 + 0x0)))

  // Boolean field: Main PLL clock ready flag
    static const uint32_t RCC_CR_PLLRDY = 1U << 25 ;

  // Boolean field: HSE clock enable
    static const uint32_t RCC_CR_HSEON = 1U << 16 ;

  // Boolean field: Clock security system
              enable
    static const uint32_t RCC_CR_CSSON = 1U << 19 ;

  // Boolean field: SAI1 PLL enable
    static const uint32_t RCC_CR_PLLSAI1ON = 1U << 26 ;

  // Boolean field: HSE clock ready flag
    static const uint32_t RCC_CR_HSERDY = 1U << 17 ;

  // Boolean field: HSI always enable for peripheral
              kernels
    static const uint32_t RCC_CR_HSIKERON = 1U << 9 ;

  // Boolean field: MSI clock PLL enable
    static const uint32_t RCC_CR_MSIPLLEN = 1U << 2 ;

  // Boolean field: HSI clock enable
    static const uint32_t RCC_CR_HSION = 1U << 8 ;

  // Boolean field: HSE crystal oscillator
              bypass
    static const uint32_t RCC_CR_HSEBYP = 1U << 18 ;

  // Boolean field: MSI clock range selection
    static const uint32_t RCC_CR_MSIRGSEL = 1U << 3 ;

  // Boolean field: HSI clock ready flag
    static const uint32_t RCC_CR_HSIRDY = 1U << 10 ;

  // Boolean field: SAI1 PLL clock ready flag
    static const uint32_t RCC_CR_PLLSAI1RDY = 1U << 27 ;

  // Field (width: 4 bits): MSI clock ranges
    inline uint32_t RCC_CR_MSIRANGE (const uint32_t inValue) { return (inValue & 15U) << 4 ; }

  // Boolean field: HSI automatic start from
              Stop
    static const uint32_t RCC_CR_HSIASFS = 1U << 11 ;

  // Boolean field: MSI clock ready flag
    static const uint32_t RCC_CR_MSIRDY = 1U << 1 ;

  // Boolean field: MSI clock enable
    static const uint32_t RCC_CR_MSION = 1U << 0 ;

  // Boolean field: Main PLL enable
    static const uint32_t RCC_CR_PLLON = 1U << 24 ;

//-------------------- Clock interrupt enable
          register
#define RCC_CIER(group) (* ((volatile uint32_t *) (kBaseAddress_RCC [group] + 0x18)))
#define RCC_CIER (* ((volatile uint32_t *) (0x40021000 + 0x18)))

  // Boolean field: LSE ready interrupt enable
    static const uint32_t RCC_CIER_LSERDYIE = 1U << 1 ;

  // Boolean field: MSI ready interrupt enable
    static const uint32_t RCC_CIER_MSIRDYIE = 1U << 2 ;

  // Boolean field: HSI48 ready interrupt
              enable
    static const uint32_t RCC_CIER_HSI48RDYIE = 1U << 10 ;

  // Boolean field: HSI ready interrupt enable
    static const uint32_t RCC_CIER_HSIRDYIE = 1U << 3 ;

  // Boolean field: HSE ready interrupt enable
    static const uint32_t RCC_CIER_HSERDYIE = 1U << 4 ;

  // Boolean field: LSI ready interrupt enable
    static const uint32_t RCC_CIER_LSIRDYIE = 1U << 0 ;

  // Boolean field: LSE clock security system interrupt
              enable
    static const uint32_t RCC_CIER_LSECSSIE = 1U << 9 ;

  // Boolean field: PLL ready interrupt enable
    static const uint32_t RCC_CIER_PLLRDYIE = 1U << 5 ;

  // Boolean field: PLLSAI1 ready interrupt
              enable
    static const uint32_t RCC_CIER_PLLSAI1RDYIE = 1U << 6 ;

//-------------------- Clock interrupt clear register
#define RCC_CICR(group) (* ((volatile uint32_t *) (kBaseAddress_RCC [group] + 0x20)))
#define RCC_CICR (* ((volatile uint32_t *) (0x40021000 + 0x20)))

  // Boolean field: HSI ready interrupt clear
    static const uint32_t RCC_CICR_HSIRDYC = 1U << 3 ;

  // Boolean field: LSI ready interrupt clear
    static const uint32_t RCC_CICR_LSIRDYC = 1U << 0 ;

  // Boolean field: LSE ready interrupt clear
    static const uint32_t RCC_CICR_LSERDYC = 1U << 1 ;

  // Boolean field: HSE ready interrupt clear
    static const uint32_t RCC_CICR_HSERDYC = 1U << 4 ;

  // Boolean field: Clock security system interrupt
              clear
    static const uint32_t RCC_CICR_CSSC = 1U << 8 ;

  // Boolean field: PLL ready interrupt clear
    static const uint32_t RCC_CICR_PLLRDYC = 1U << 5 ;

  // Boolean field: LSE Clock security system interrupt
              clear
    static const uint32_t RCC_CICR_LSECSSC = 1U << 9 ;

  // Boolean field: PLLSAI1 ready interrupt
              clear
    static const uint32_t RCC_CICR_PLLSAI1RDYC = 1U << 6 ;

  // Boolean field: MSI ready interrupt clear
    static const uint32_t RCC_CICR_MSIRDYC = 1U << 2 ;

  // Boolean field: HSI48 oscillator ready interrupt
              clear
    static const uint32_t RCC_CICR_HSI48RDYC = 1U << 10 ;

//-------------------- AHB1 peripheral clocks enable in Sleep and
          Stop modes register
#define RCC_AHB1SMENR(group) (* ((volatile uint32_t *) (kBaseAddress_RCC [group] + 0x68)))
#define RCC_AHB1SMENR (* ((volatile uint32_t *) (0x40021000 + 0x68)))

  // Boolean field: CRCSMEN
    static const uint32_t RCC_AHB1SMENR_CRCSMEN = 1U << 12 ;

  // Boolean field: Flash memory interface clocks enable
              during Sleep and Stop modes
    static const uint32_t RCC_AHB1SMENR_FLASHSMEN = 1U << 8 ;

  // Boolean field: DMA2 clocks enable during Sleep and Stop
              modes
    static const uint32_t RCC_AHB1SMENR_DMA2SMEN = 1U << 1 ;

  // Boolean field: Touch Sensing Controller clocks enable
              during Sleep and Stop modes
    static const uint32_t RCC_AHB1SMENR_TSCSMEN = 1U << 16 ;

  // Boolean field: SRAM1 interface clocks enable during
              Sleep and Stop modes
    static const uint32_t RCC_AHB1SMENR_SRAM1SMEN = 1U << 9 ;

  // Boolean field: DMA1 clocks enable during Sleep and Stop
              modes
    static const uint32_t RCC_AHB1SMENR_DMA1SMEN = 1U << 0 ;

//-------------------- AHB1 peripheral clock enable
          register
#define RCC_AHB1ENR(group) (* ((volatile uint32_t *) (kBaseAddress_RCC [group] + 0x48)))
#define RCC_AHB1ENR (* ((volatile uint32_t *) (0x40021000 + 0x48)))

  // Boolean field: DMA1 clock enable
    static const uint32_t RCC_AHB1ENR_DMA1EN = 1U << 0 ;

  // Boolean field: CRC clock enable
    static const uint32_t RCC_AHB1ENR_CRCEN = 1U << 12 ;

  // Boolean field: DMA2 clock enable
    static const uint32_t RCC_AHB1ENR_DMA2EN = 1U << 1 ;

  // Boolean field: Flash memory interface clock
              enable
    static const uint32_t RCC_AHB1ENR_FLASHEN = 1U << 8 ;

  // Boolean field: Touch Sensing Controller clock
              enable
    static const uint32_t RCC_AHB1ENR_TSCEN = 1U << 16 ;

//-------------------- BDCR
#define RCC_BDCR(group) (* ((const volatile uint32_t *) (kBaseAddress_RCC [group] + 0x90)))
#define RCC_BDCR (* ((const volatile uint32_t *) (0x40021000 + 0x90)))

  // Boolean field: LSE oscillator enable
    static const uint32_t RCC_BDCR_LSEON = 1U << 0 ;

  // Boolean field: LSE oscillator ready
    static const uint32_t RCC_BDCR_LSERDY = 1U << 1 ;

  // Field (width: 2 bits): SE oscillator drive
              capability
    inline uint32_t RCC_BDCR_LSEDRV (const uint32_t inValue) { return (inValue & 3U) << 3 ; }

  // Boolean field: LSE oscillator bypass
    static const uint32_t RCC_BDCR_LSEBYP = 1U << 2 ;

  // Boolean field: LSECSSON
    static const uint32_t RCC_BDCR_LSECSSON = 1U << 5 ;

  // Boolean field: Low speed clock output
              selection
    static const uint32_t RCC_BDCR_LSCOSEL = 1U << 25 ;

  // Boolean field: LSECSSD
    static const uint32_t RCC_BDCR_LSECSSD = 1U << 6 ;

  // Boolean field: RTC clock enable
    static const uint32_t RCC_BDCR_RTCEN = 1U << 15 ;

  // Field (width: 2 bits): RTC clock source selection
    inline uint32_t RCC_BDCR_RTCSEL (const uint32_t inValue) { return (inValue & 3U) << 8 ; }

  // Boolean field: Backup domain software
              reset
    static const uint32_t RCC_BDCR_BDRST = 1U << 16 ;

  // Boolean field: Low speed clock output
              enable
    static const uint32_t RCC_BDCR_LSCOEN = 1U << 24 ;

//-------------------- Clock interrupt flag register
#define RCC_CIFR(group) (* ((const volatile uint32_t *) (kBaseAddress_RCC [group] + 0x1C)))
#define RCC_CIFR (* ((const volatile uint32_t *) (0x40021000 + 0x1C)))

  // Boolean field: LSI ready interrupt flag
    static const uint32_t RCC_CIFR_LSIRDYF = 1U << 0 ;

  // Boolean field: HSI ready interrupt flag
    static const uint32_t RCC_CIFR_HSIRDYF = 1U << 3 ;

  // Boolean field: LSE Clock security system interrupt
              flag
    static const uint32_t RCC_CIFR_LSECSSF = 1U << 9 ;

  // Boolean field: HSE ready interrupt flag
    static const uint32_t RCC_CIFR_HSERDYF = 1U << 4 ;

  // Boolean field: LSE ready interrupt flag
    static const uint32_t RCC_CIFR_LSERDYF = 1U << 1 ;

  // Boolean field: MSI ready interrupt flag
    static const uint32_t RCC_CIFR_MSIRDYF = 1U << 2 ;

  // Boolean field: PLL ready interrupt flag
    static const uint32_t RCC_CIFR_PLLRDYF = 1U << 5 ;

  // Boolean field: Clock security system interrupt
              flag
    static const uint32_t RCC_CIFR_CSSF = 1U << 8 ;

  // Boolean field: PLLSAI1 ready interrupt
              flag
    static const uint32_t RCC_CIFR_PLLSAI1RDYF = 1U << 6 ;

  // Boolean field: HSI48 ready interrupt flag
    static const uint32_t RCC_CIFR_HSI48RDYF = 1U << 10 ;

//-------------------- Clock recovery RC register
#define RCC_CRRCR(group) (* ((const volatile uint32_t *) (kBaseAddress_RCC [group] + 0x98)))
#define RCC_CRRCR (* ((const volatile uint32_t *) (0x40021000 + 0x98)))

  // Boolean field: HSI48 clock enable
    static const uint32_t RCC_CRRCR_HSI48ON = 1U << 0 ;

  // Field (width: 9 bits): HSI48 clock calibration
    inline uint32_t RCC_CRRCR_HSI48CAL (const uint32_t inValue) { return (inValue & 511U) << 7 ; }

  // Boolean field: HSI48 clock ready flag
    static const uint32_t RCC_CRRCR_HSI48RDY = 1U << 1 ;

//-------------------- APB1 peripheral reset register
          1
#define RCC_APB1RSTR1(group) (* ((volatile uint32_t *) (kBaseAddress_RCC [group] + 0x38)))
#define RCC_APB1RSTR1 (* ((volatile uint32_t *) (0x40021000 + 0x38)))

  // Boolean field: Power interface reset
    static const uint32_t RCC_APB1RSTR1_PWRRST = 1U << 28 ;

  // Boolean field: LCD interface reset
    static const uint32_t RCC_APB1RSTR1_LCDRST = 1U << 9 ;

  // Boolean field: Low Power Timer 1 reset
    static const uint32_t RCC_APB1RSTR1_LPTIM1RST = 1U << 31 ;

  // Boolean field: CAN1 reset
    static const uint32_t RCC_APB1RSTR1_CAN1RST = 1U << 25 ;

  // Boolean field: I2C2 reset
    static const uint32_t RCC_APB1RSTR1_I2C2RST = 1U << 22 ;

  // Boolean field: DAC1 interface reset
    static const uint32_t RCC_APB1RSTR1_DAC1RST = 1U << 29 ;

  // Boolean field: OPAMP interface reset
    static const uint32_t RCC_APB1RSTR1_OPAMPRST = 1U << 30 ;

  // Boolean field: USART4 reset.
    static const uint32_t RCC_APB1RSTR1_USART4RST = 1U << 19 ;

  // Boolean field: USART1 reset
    static const uint32_t RCC_APB1RSTR1_USART1RST = 1U << 18 ;

  // Boolean field: CRS reset
    static const uint32_t RCC_APB1RSTR1_CRSRST = 1U << 24 ;

  // Boolean field: TIM2 timer reset
    static const uint32_t RCC_APB1RSTR1_TIM2RST = 1U << 0 ;

  // Boolean field: SPI2 reset
    static const uint32_t RCC_APB1RSTR1_SPI2RST = 1U << 14 ;

  // Boolean field: USART2 reset
    static const uint32_t RCC_APB1RSTR1_USART2RST = 1U << 17 ;

  // Boolean field: TIM7 timer reset
    static const uint32_t RCC_APB1RSTR1_TIM7RST = 1U << 5 ;

  // Boolean field: USB FS reset
    static const uint32_t RCC_APB1RSTR1_USBFSRST = 1U << 26 ;

  // Boolean field: I2C1 reset
    static const uint32_t RCC_APB1RSTR1_I2C1RST = 1U << 21 ;

  // Boolean field: TIM6 timer reset
    static const uint32_t RCC_APB1RSTR1_TIM6RST = 1U << 4 ;

  // Boolean field: I2C3 reset
    static const uint32_t RCC_APB1RSTR1_I2C3RST = 1U << 23 ;

  // Boolean field: SPI3 reset
    static const uint32_t RCC_APB1RSTR1_SPI3RST = 1U << 15 ;

//-------------------- APB1 peripheral reset register
          2
#define RCC_APB1RSTR2(group) (* ((volatile uint32_t *) (kBaseAddress_RCC [group] + 0x3C)))
#define RCC_APB1RSTR2 (* ((volatile uint32_t *) (0x40021000 + 0x3C)))

  // Boolean field: I2C4 reset
    static const uint32_t RCC_APB1RSTR2_I2C4RST = 1U << 1 ;

  // Boolean field: Low-power timer 2 reset
    static const uint32_t RCC_APB1RSTR2_LPTIM2RST = 1U << 5 ;

  // Boolean field: Single wire protocol reset
    static const uint32_t RCC_APB1RSTR2_SWPMI1RST = 1U << 2 ;

  // Boolean field: Low-power UART 1 reset
    static const uint32_t RCC_APB1RSTR2_LPUART1RST = 1U << 0 ;

//-------------------- PLLSAI1 configuration register
#define RCC_PLLSAI1CFGR(group) (* ((volatile uint32_t *) (kBaseAddress_RCC [group] + 0x10)))
#define RCC_PLLSAI1CFGR (* ((volatile uint32_t *) (0x40021000 + 0x10)))

  // Field (width: 5 bits): PLLSAI1 division factor for
              PLLSAI1CLK
    inline uint32_t RCC_PLLSAI1CFGR_PLLSAI1PDIV (const uint32_t inValue) { return (inValue & 31U) << 27 ; }

  // Field (width: 7 bits): SAI1PLL multiplication factor for
              VCO
    inline uint32_t RCC_PLLSAI1CFGR_PLLSAI1N (const uint32_t inValue) { return (inValue & 127U) << 8 ; }

  // Boolean field: PLLSAI1 PLLADC1CLK output
              enable
    static const uint32_t RCC_PLLSAI1CFGR_PLLSAI1REN = 1U << 24 ;

  // Boolean field: SAI1PLL PLLUSB2CLK output
              enable
    static const uint32_t RCC_PLLSAI1CFGR_PLLSAI1QEN = 1U << 20 ;

  // Field (width: 2 bits): PLLSAI1 division factor for PLLADC1CLK
              (ADC clock)
    inline uint32_t RCC_PLLSAI1CFGR_PLLSAI1R (const uint32_t inValue) { return (inValue & 3U) << 25 ; }

  // Boolean field: SAI1PLL division factor for PLLSAI1CLK
              (SAI1 or SAI2 clock)
    static const uint32_t RCC_PLLSAI1CFGR_PLLSAI1P = 1U << 17 ;

  // Field (width: 2 bits): SAI1PLL division factor for PLLUSB2CLK
              (48 MHz clock)
    inline uint32_t RCC_PLLSAI1CFGR_PLLSAI1Q (const uint32_t inValue) { return (inValue & 3U) << 21 ; }

  // Boolean field: SAI1PLL PLLSAI1CLK output
              enable
    static const uint32_t RCC_PLLSAI1CFGR_PLLSAI1PEN = 1U << 16 ;

//-------------------- AHB3 peripheral clock enable
          register
#define RCC_AHB3ENR(group) (* ((volatile uint32_t *) (kBaseAddress_RCC [group] + 0x50)))
#define RCC_AHB3ENR (* ((volatile uint32_t *) (0x40021000 + 0x50)))

  // Boolean field: QSPIEN
    static const uint32_t RCC_AHB3ENR_QSPIEN = 1U << 8 ;

//-------------------- AHB3 peripheral reset register
#define RCC_AHB3RSTR(group) (* ((volatile uint32_t *) (kBaseAddress_RCC [group] + 0x30)))
#define RCC_AHB3RSTR (* ((volatile uint32_t *) (0x40021000 + 0x30)))

  // Boolean field: Quad SPI memory interface
              reset
    static const uint32_t RCC_AHB3RSTR_QSPIRST = 1U << 8 ;

//-------------------- CSR
#define RCC_CSR(group) (* ((const volatile uint32_t *) (kBaseAddress_RCC [group] + 0x94)))
#define RCC_CSR (* ((const volatile uint32_t *) (0x40021000 + 0x94)))

  // Boolean field: Window watchdog reset flag
    static const uint32_t RCC_CSR_WWDGRSTF = 1U << 30 ;

  // Boolean field: Firewall reset flag
    static const uint32_t RCC_CSR_FIREWALLRSTF = 1U << 24 ;

  // Boolean field: BOR flag
    static const uint32_t RCC_CSR_BORRSTF = 1U << 27 ;

  // Boolean field: Pin reset flag
    static const uint32_t RCC_CSR_PINRSTF = 1U << 26 ;

  // Boolean field: LSI oscillator enable
    static const uint32_t RCC_CSR_LSION = 1U << 0 ;

  // Boolean field: LSI oscillator ready
    static const uint32_t RCC_CSR_LSIRDY = 1U << 1 ;

  // Boolean field: Remove reset flag
    static const uint32_t RCC_CSR_RMVF = 1U << 23 ;

  // Field (width: 4 bits): SI range after Standby
              mode
    inline uint32_t RCC_CSR_MSISRANGE (const uint32_t inValue) { return (inValue & 15U) << 8 ; }

  // Boolean field: Low-power reset flag
    static const uint32_t RCC_CSR_LPWRSTF = 1U << 31 ;

  // Boolean field: Independent window watchdog reset
              flag
    static const uint32_t RCC_CSR_IWDGRSTF = 1U << 29 ;

  // Boolean field: Option byte loader reset
              flag
    static const uint32_t RCC_CSR_OBLRSTF = 1U << 25 ;

  // Boolean field: Software reset flag
    static const uint32_t RCC_CSR_SFTRSTF = 1U << 28 ;

//-------------------- Internal clock sources calibration
          register
#define RCC_ICSCR(group) (* ((const volatile uint32_t *) (kBaseAddress_RCC [group] + 0x4)))
#define RCC_ICSCR (* ((const volatile uint32_t *) (0x40021000 + 0x4)))

  // Field (width: 8 bits): HSI clock calibration
    inline uint32_t RCC_ICSCR_HSICAL (const uint32_t inValue) { return (inValue & 255U) << 16 ; }

  // Field (width: 5 bits): HSI clock trimming
    inline uint32_t RCC_ICSCR_HSITRIM (const uint32_t inValue) { return (inValue & 31U) << 24 ; }

  // Field (width: 8 bits): MSI clock trimming
    inline uint32_t RCC_ICSCR_MSITRIM (const uint32_t inValue) { return (inValue & 255U) << 8 ; }

  // Field (width: 8 bits): MSI clock calibration
    inline uint32_t RCC_ICSCR_MSICAL (const uint32_t inValue) { return (inValue & 255U) << 0 ; }

//-------------------- PLL configuration register
#define RCC_PLLCFGR(group) (* ((volatile uint32_t *) (kBaseAddress_RCC [group] + 0xC)))
#define RCC_PLLCFGR (* ((volatile uint32_t *) (0x40021000 + 0xC)))

  // Field (width: 3 bits): Division factor for the main PLL and
              audio PLL (PLLSAI1 and PLLSAI2) input
              clock
    inline uint32_t RCC_PLLCFGR_PLLM (const uint32_t inValue) { return (inValue & 7U) << 4 ; }

  // Boolean field: Main PLL PLLUSB1CLK output
              enable
    static const uint32_t RCC_PLLCFGR_PLLQEN = 1U << 20 ;

  // Boolean field: Main PLL PLLCLK output
              enable
    static const uint32_t RCC_PLLCFGR_PLLREN = 1U << 24 ;

  // Field (width: 2 bits): Main PLL, PLLSAI1 and PLLSAI2 entry
              clock source
    inline uint32_t RCC_PLLCFGR_PLLSRC (const uint32_t inValue) { return (inValue & 3U) << 0 ; }

  // Field (width: 7 bits): Main PLL multiplication factor for
              VCO
    inline uint32_t RCC_PLLCFGR_PLLN (const uint32_t inValue) { return (inValue & 127U) << 8 ; }

  // Boolean field: Main PLL PLLSAI3CLK output
              enable
    static const uint32_t RCC_PLLCFGR_PLLPEN = 1U << 16 ;

  // Field (width: 5 bits): Main PLL division factor for
              PLLSAI2CLK
    inline uint32_t RCC_PLLCFGR_PLLPDIV (const uint32_t inValue) { return (inValue & 31U) << 27 ; }

  // Boolean field: Main PLL division factor for PLLSAI3CLK
              (SAI1 and SAI2 clock)
    static const uint32_t RCC_PLLCFGR_PLLP = 1U << 17 ;

  // Field (width: 2 bits): Main PLL division factor for
              PLLUSB1CLK(48 MHz clock)
    inline uint32_t RCC_PLLCFGR_PLLQ (const uint32_t inValue) { return (inValue & 3U) << 21 ; }

  // Field (width: 2 bits): Main PLL division factor for PLLCLK
              (system clock)
    inline uint32_t RCC_PLLCFGR_PLLR (const uint32_t inValue) { return (inValue & 3U) << 25 ; }

//-------------------- APB2SMENR
#define RCC_APB2SMENR(group) (* ((volatile uint32_t *) (kBaseAddress_RCC [group] + 0x80)))
#define RCC_APB2SMENR (* ((volatile uint32_t *) (0x40021000 + 0x80)))

  // Boolean field: TIM16 timer clocks enable during Sleep
              and Stop modes
    static const uint32_t RCC_APB2SMENR_TIM16SMEN = 1U << 17 ;

  // Boolean field: TIM15 timer clocks enable during Sleep
              and Stop modes
    static const uint32_t RCC_APB2SMENR_TIM15SMEN = 1U << 16 ;

  // Boolean field: TIM1 timer clocks enable during Sleep
              and Stop modes
    static const uint32_t RCC_APB2SMENR_TIM1SMEN = 1U << 11 ;

  // Boolean field: SAI1 clocks enable during Sleep and Stop
              modes
    static const uint32_t RCC_APB2SMENR_SAI1SMEN = 1U << 21 ;

  // Boolean field: SYSCFG clocks enable during Sleep and
              Stop modes
    static const uint32_t RCC_APB2SMENR_SYSCFGSMEN = 1U << 0 ;

  // Boolean field: SPI1 clocks enable during Sleep and Stop
              modes
    static const uint32_t RCC_APB2SMENR_SPI1SMEN = 1U << 12 ;

  // Boolean field: SDMMC clocks enable during Sleep and
              Stop modes
    static const uint32_t RCC_APB2SMENR_SDMMCSMEN = 1U << 10 ;

  // Boolean field: USART1clocks enable during Sleep and
              Stop modes
    static const uint32_t RCC_APB2SMENR_USART1SMEN = 1U << 14 ;

//-------------------- Clock configuration register
#define RCC_CFGR(group) (* ((const volatile uint32_t *) (kBaseAddress_RCC [group] + 0x8)))
#define RCC_CFGR (* ((const volatile uint32_t *) (0x40021000 + 0x8)))

  // Boolean field: Wakeup from Stop and CSS backup clock
              selection
    static const uint32_t RCC_CFGR_STOPWUCK = 1U << 15 ;

  // Field (width: 3 bits): Microcontroller clock output
              prescaler
    inline uint32_t RCC_CFGR_MCOPRE (const uint32_t inValue) { return (inValue & 7U) << 28 ; }

  // Field (width: 3 bits): Microcontroller clock
              output
    inline uint32_t RCC_CFGR_MCOSEL (const uint32_t inValue) { return (inValue & 7U) << 24 ; }

  // Field (width: 2 bits): System clock switch
    inline uint32_t RCC_CFGR_SW (const uint32_t inValue) { return (inValue & 3U) << 0 ; }

  // Field (width: 3 bits): PB low-speed prescaler
              (APB1)
    inline uint32_t RCC_CFGR_PPRE1 (const uint32_t inValue) { return (inValue & 7U) << 8 ; }

  // Field (width: 3 bits): APB high-speed prescaler
              (APB2)
    inline uint32_t RCC_CFGR_PPRE2 (const uint32_t inValue) { return (inValue & 7U) << 11 ; }

  // Field (width: 2 bits): System clock switch status
    inline uint32_t RCC_CFGR_SWS (const uint32_t inValue) { return (inValue & 3U) << 2 ; }

  // Field (width: 4 bits): AHB prescaler
    inline uint32_t RCC_CFGR_HPRE (const uint32_t inValue) { return (inValue & 15U) << 4 ; }

//-------------------- APB2ENR
#define RCC_APB2ENR(group) (* ((volatile uint32_t *) (kBaseAddress_RCC [group] + 0x60)))
#define RCC_APB2ENR (* ((volatile uint32_t *) (0x40021000 + 0x60)))

  // Boolean field: TIM1 timer clock enable
    static const uint32_t RCC_APB2ENR_TIM1EN = 1U << 11 ;

  // Boolean field: TIM15 timer clock enable
    static const uint32_t RCC_APB2ENR_TIM15EN = 1U << 16 ;

  // Boolean field: USART1clock enable
    static const uint32_t RCC_APB2ENR_USART1EN = 1U << 14 ;

  // Boolean field: Firewall clock enable
    static const uint32_t RCC_APB2ENR_FIREWALLEN = 1U << 7 ;

  // Boolean field: TIM16 timer clock enable
    static const uint32_t RCC_APB2ENR_TIM16EN = 1U << 17 ;

  // Boolean field: SYSCFG clock enable
    static const uint32_t RCC_APB2ENR_SYSCFGEN = 1U << 0 ;

  // Boolean field: SAI1 clock enable
    static const uint32_t RCC_APB2ENR_SAI1EN = 1U << 21 ;

  // Boolean field: SDMMC clock enable
    static const uint32_t RCC_APB2ENR_SDMMCEN = 1U << 10 ;

  // Boolean field: SPI1 clock enable
    static const uint32_t RCC_APB2ENR_SPI1EN = 1U << 12 ;

//-------------------- APB2 peripheral reset register
#define RCC_APB2RSTR(group) (* ((volatile uint32_t *) (kBaseAddress_RCC [group] + 0x40)))
#define RCC_APB2RSTR (* ((volatile uint32_t *) (0x40021000 + 0x40)))

  // Boolean field: SPI1 reset
    static const uint32_t RCC_APB2RSTR_SPI1RST = 1U << 12 ;

  // Boolean field: DFSDM filter reset
    static const uint32_t RCC_APB2RSTR_DFSDMRST = 1U << 24 ;

  // Boolean field: TIM1 timer reset
    static const uint32_t RCC_APB2RSTR_TIM1RST = 1U << 11 ;

  // Boolean field: USART1 reset
    static const uint32_t RCC_APB2RSTR_USART1RST = 1U << 14 ;

  // Boolean field: System configuration (SYSCFG)
              reset
    static const uint32_t RCC_APB2RSTR_SYSCFGRST = 1U << 0 ;

  // Boolean field: Serial audio interface 1 (SAI1)
              reset
    static const uint32_t RCC_APB2RSTR_SAI1RST = 1U << 21 ;

  // Boolean field: TIM15 timer reset
    static const uint32_t RCC_APB2RSTR_TIM15RST = 1U << 16 ;

  // Boolean field: SDMMC reset
    static const uint32_t RCC_APB2RSTR_SDMMCRST = 1U << 10 ;

  // Boolean field: TIM16 timer reset
    static const uint32_t RCC_APB2RSTR_TIM16RST = 1U << 17 ;

//-------------------- APB1 peripheral clocks enable in Sleep and
          Stop modes register 2
#define RCC_APB1SMENR2(group) (* ((volatile uint32_t *) (kBaseAddress_RCC [group] + 0x7C)))
#define RCC_APB1SMENR2 (* ((volatile uint32_t *) (0x40021000 + 0x7C)))

  // Boolean field: Single wire protocol clocks enable
              during Sleep and Stop modes
    static const uint32_t RCC_APB1SMENR2_SWPMI1SMEN = 1U << 2 ;

  // Boolean field: Low power UART 1 clocks enable during
              Sleep and Stop modes
    static const uint32_t RCC_APB1SMENR2_LPUART1SMEN = 1U << 0 ;

  // Boolean field: LPTIM2SMEN
    static const uint32_t RCC_APB1SMENR2_LPTIM2SMEN = 1U << 5 ;

//-------------------- CCIPR
#define RCC_CCIPR(group) (* ((volatile uint32_t *) (kBaseAddress_RCC [group] + 0x88)))
#define RCC_CCIPR (* ((volatile uint32_t *) (0x40021000 + 0x88)))

  // Field (width: 2 bits): 48 MHz clock source
              selection
    inline uint32_t RCC_CCIPR_CLK48SEL (const uint32_t inValue) { return (inValue & 3U) << 26 ; }

  // Field (width: 2 bits): USART2 clock source
              selection
    inline uint32_t RCC_CCIPR_USART2SEL (const uint32_t inValue) { return (inValue & 3U) << 2 ; }

  // Field (width: 2 bits): I2C3 clock source
              selection
    inline uint32_t RCC_CCIPR_I2C3SEL (const uint32_t inValue) { return (inValue & 3U) << 16 ; }

  // Field (width: 2 bits): ADCs clock source
              selection
    inline uint32_t RCC_CCIPR_ADCSEL (const uint32_t inValue) { return (inValue & 3U) << 28 ; }

  // Field (width: 2 bits): Low power timer 2 clock source
              selection
    inline uint32_t RCC_CCIPR_LPTIM2SEL (const uint32_t inValue) { return (inValue & 3U) << 20 ; }

  // Boolean field: SWPMI1 clock source
              selection
    static const uint32_t RCC_CCIPR_SWPMI1SEL = 1U << 30 ;

  // Field (width: 2 bits): I2C1 clock source
              selection
    inline uint32_t RCC_CCIPR_I2C1SEL (const uint32_t inValue) { return (inValue & 3U) << 12 ; }

  // Field (width: 2 bits): USART3 clock source
              selection
    inline uint32_t RCC_CCIPR_USART3SEL (const uint32_t inValue) { return (inValue & 3U) << 4 ; }

  // Field (width: 2 bits): SAI1 clock source
              selection
    inline uint32_t RCC_CCIPR_SAI1SEL (const uint32_t inValue) { return (inValue & 3U) << 22 ; }

  // Field (width: 2 bits): LPUART1 clock source
              selection
    inline uint32_t RCC_CCIPR_LPUART1SEL (const uint32_t inValue) { return (inValue & 3U) << 10 ; }

  // Field (width: 2 bits): USART1 clock source
              selection
    inline uint32_t RCC_CCIPR_USART1SEL (const uint32_t inValue) { return (inValue & 3U) << 0 ; }

  // Field (width: 2 bits): Low power timer 1 clock source
              selection
    inline uint32_t RCC_CCIPR_LPTIM1SEL (const uint32_t inValue) { return (inValue & 3U) << 18 ; }

  // Field (width: 2 bits): I2C2 clock source
              selection
    inline uint32_t RCC_CCIPR_I2C2SEL (const uint32_t inValue) { return (inValue & 3U) << 14 ; }

  // Field (width: 2 bits): USART4 clock source
              selection
    inline uint32_t RCC_CCIPR_USART4SEL (const uint32_t inValue) { return (inValue & 3U) << 6 ; }

//-------------------- AHB2 peripheral clocks enable in Sleep and
          Stop modes register
#define RCC_AHB2SMENR(group) (* ((volatile uint32_t *) (kBaseAddress_RCC [group] + 0x6C)))
#define RCC_AHB2SMENR (* ((volatile uint32_t *) (0x40021000 + 0x6C)))

  // Boolean field: IO port C clocks enable during Sleep and
              Stop modes
    static const uint32_t RCC_AHB2SMENR_GPIOCSMEN = 1U << 2 ;

  // Boolean field: Random Number Generator clocks enable
              during Sleep and Stop modes
    static const uint32_t RCC_AHB2SMENR_RNGSMEN = 1U << 18 ;

  // Boolean field: IO port H clocks enable during Sleep and
              Stop modes
    static const uint32_t RCC_AHB2SMENR_GPIOHSMEN = 1U << 7 ;

  // Boolean field: IO port E clocks enable during Sleep and
              Stop modes
    static const uint32_t RCC_AHB2SMENR_GPIOESMEN = 1U << 4 ;

  // Boolean field: IO port B clocks enable during Sleep and
              Stop modes
    static const uint32_t RCC_AHB2SMENR_GPIOBSMEN = 1U << 1 ;

  // Boolean field: IO port D clocks enable during Sleep and
              Stop modes
    static const uint32_t RCC_AHB2SMENR_GPIODSMEN = 1U << 3 ;

  // Boolean field: ADC clocks enable during Sleep and Stop
              modes
    static const uint32_t RCC_AHB2SMENR_ADCFSSMEN = 1U << 13 ;

  // Boolean field: IO port A clocks enable during Sleep and
              Stop modes
    static const uint32_t RCC_AHB2SMENR_GPIOASMEN = 1U << 0 ;

  // Boolean field: SRAM2 interface clocks enable during
              Sleep and Stop modes
    static const uint32_t RCC_AHB2SMENR_SRAM2SMEN = 1U << 9 ;

  // Boolean field: AES accelerator clocks enable during
              Sleep and Stop modes
    static const uint32_t RCC_AHB2SMENR_AESSMEN = 1U << 16 ;

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
// Peripheral group RNG
//                RNG at 0x50060800
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

static const uint32_t kBaseAddress_RNG [1] = {0x50060800} ;

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

//-------------------- control register
#define RNG_CR(group) (* ((volatile uint32_t *) (kBaseAddress_RNG [group] + 0x0)))
#define RNG_CR (* ((volatile uint32_t *) (0x50060800 + 0x0)))

  // Boolean field: Random number generator
              enable
    static const uint32_t RNG_CR_RNGEN = 1U << 2 ;

  // Boolean field: Interrupt enable
    static const uint32_t RNG_CR_IE = 1U << 3 ;

//-------------------- data register
#define RNG_DR(group) (* ((const volatile uint32_t *) (kBaseAddress_RNG [group] + 0x8)))
#define RNG_DR (* ((const volatile uint32_t *) (0x50060800 + 0x8)))

//-------------------- status register
#define RNG_SR(group) (* ((const volatile uint32_t *) (kBaseAddress_RNG [group] + 0x4)))
#define RNG_SR (* ((const volatile uint32_t *) (0x50060800 + 0x4)))

  // Boolean field: Seed error interrupt
              status
    static const uint32_t RNG_SR_SEIS = 1U << 6 ;

  // Boolean field: Clock error interrupt
              status
    static const uint32_t RNG_SR_CEIS = 1U << 5 ;

  // Boolean field: Seed error current status
    static const uint32_t RNG_SR_SECS = 1U << 2 ;

  // Boolean field: Clock error current status
    static const uint32_t RNG_SR_CECS = 1U << 1 ;

  // Boolean field: Data ready
    static const uint32_t RNG_SR_DRDY = 1U << 0 ;

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
// Peripheral group RTC
//                RTC at 0x40002800
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

static const uint32_t kBaseAddress_RTC [1] = {0x40002800} ;

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

//-------------------- backup register
#define RTC_BKP8R(group) (* ((volatile uint32_t *) (kBaseAddress_RTC [group] + 0x70)))
#define RTC_BKP8R (* ((volatile uint32_t *) (0x40002800 + 0x70)))

//-------------------- backup register
#define RTC_BKP27R(group) (* ((volatile uint32_t *) (kBaseAddress_RTC [group] + 0xBC)))
#define RTC_BKP27R (* ((volatile uint32_t *) (0x40002800 + 0xBC)))

//-------------------- alarm A sub second register
#define RTC_ALRMASSR(group) (* ((volatile uint32_t *) (kBaseAddress_RTC [group] + 0x44)))
#define RTC_ALRMASSR (* ((volatile uint32_t *) (0x40002800 + 0x44)))

  // Field (width: 15 bits): Sub seconds value
    inline uint32_t RTC_ALRMASSR_SS (const uint32_t inValue) { return (inValue & 32767U) << 0 ; }

  // Field (width: 4 bits): Mask the most-significant bits starting
              at this bit
    inline uint32_t RTC_ALRMASSR_MASKSS (const uint32_t inValue) { return (inValue & 15U) << 24 ; }

//-------------------- backup register
#define RTC_BKP25R(group) (* ((volatile uint32_t *) (kBaseAddress_RTC [group] + 0xB4)))
#define RTC_BKP25R (* ((volatile uint32_t *) (0x40002800 + 0xB4)))

//-------------------- backup register
#define RTC_BKP21R(group) (* ((volatile uint32_t *) (kBaseAddress_RTC [group] + 0xA4)))
#define RTC_BKP21R (* ((volatile uint32_t *) (0x40002800 + 0xA4)))

//-------------------- initialization and status
          register
#define RTC_ISR(group) (* ((const volatile uint32_t *) (kBaseAddress_RTC [group] + 0xC)))
#define RTC_ISR (* ((const volatile uint32_t *) (0x40002800 + 0xC)))

  // Boolean field: Initialization flag
    static const uint32_t RTC_ISR_INITF = 1U << 6 ;

  // Boolean field: Tamper detection flag
    static const uint32_t RTC_ISR_TAMP1F = 1U << 13 ;

  // Boolean field: Time-stamp flag
    static const uint32_t RTC_ISR_TSF = 1U << 11 ;

  // Boolean field: Alarm A write flag
    static const uint32_t RTC_ISR_ALRAWF = 1U << 0 ;

  // Boolean field: Registers synchronization
              flag
    static const uint32_t RTC_ISR_RSF = 1U << 5 ;

  // Boolean field: Shift operation pending
    static const uint32_t RTC_ISR_SHPF = 1U << 3 ;

  // Boolean field: Initialization mode
    static const uint32_t RTC_ISR_INIT = 1U << 7 ;

  // Boolean field: Wakeup timer flag
    static const uint32_t RTC_ISR_WUTF = 1U << 10 ;

  // Boolean field: Recalibration pending Flag
    static const uint32_t RTC_ISR_RECALPF = 1U << 16 ;

  // Boolean field: Wakeup timer write flag
    static const uint32_t RTC_ISR_WUTWF = 1U << 2 ;

  // Boolean field: Time-stamp overflow flag
    static const uint32_t RTC_ISR_TSOVF = 1U << 12 ;

  // Boolean field: Initialization status flag
    static const uint32_t RTC_ISR_INITS = 1U << 4 ;

  // Boolean field: Alarm B flag
    static const uint32_t RTC_ISR_ALRBF = 1U << 9 ;

  // Boolean field: Alarm A flag
    static const uint32_t RTC_ISR_ALRAF = 1U << 8 ;

  // Boolean field: RTC_TAMP2 detection flag
    static const uint32_t RTC_ISR_TAMP2F = 1U << 14 ;

  // Boolean field: RTC_TAMP3 detection flag
    static const uint32_t RTC_ISR_TAMP3F = 1U << 15 ;

  // Boolean field: Alarm B write flag
    static const uint32_t RTC_ISR_ALRBWF = 1U << 1 ;

//-------------------- backup register
#define RTC_BKP16R(group) (* ((volatile uint32_t *) (kBaseAddress_RTC [group] + 0x90)))
#define RTC_BKP16R (* ((volatile uint32_t *) (0x40002800 + 0x90)))

//-------------------- timestamp sub second register
#define RTC_TSSSR(group) (* ((const volatile uint32_t *) (kBaseAddress_RTC [group] + 0x38)))
#define RTC_TSSSR (* ((const volatile uint32_t *) (0x40002800 + 0x38)))

  // Field (width: 16 bits): Sub second value
    inline uint32_t RTC_TSSSR_SS (const uint32_t inValue) { return (inValue & 65535U) << 0 ; }

//-------------------- time stamp date register
#define RTC_TSDR(group) (* ((const volatile uint32_t *) (kBaseAddress_RTC [group] + 0x34)))
#define RTC_TSDR (* ((const volatile uint32_t *) (0x40002800 + 0x34)))

  // Field (width: 4 bits): Month units in BCD format
    inline uint32_t RTC_TSDR_MU (const uint32_t inValue) { return (inValue & 15U) << 8 ; }

  // Boolean field: Month tens in BCD format
    static const uint32_t RTC_TSDR_MT = 1U << 12 ;

  // Field (width: 2 bits): Date tens in BCD format
    inline uint32_t RTC_TSDR_DT (const uint32_t inValue) { return (inValue & 3U) << 4 ; }

  // Field (width: 4 bits): Date units in BCD format
    inline uint32_t RTC_TSDR_DU (const uint32_t inValue) { return (inValue & 15U) << 0 ; }

  // Field (width: 3 bits): Week day units
    inline uint32_t RTC_TSDR_WDU (const uint32_t inValue) { return (inValue & 7U) << 13 ; }

//-------------------- backup register
#define RTC_BKP2R(group) (* ((volatile uint32_t *) (kBaseAddress_RTC [group] + 0x58)))
#define RTC_BKP2R (* ((volatile uint32_t *) (0x40002800 + 0x58)))

//-------------------- backup register
#define RTC_BKP6R(group) (* ((volatile uint32_t *) (kBaseAddress_RTC [group] + 0x68)))
#define RTC_BKP6R (* ((volatile uint32_t *) (0x40002800 + 0x68)))

//-------------------- backup register
#define RTC_BKP18R(group) (* ((volatile uint32_t *) (kBaseAddress_RTC [group] + 0x98)))
#define RTC_BKP18R (* ((volatile uint32_t *) (0x40002800 + 0x98)))

//-------------------- date register
#define RTC_DR(group) (* ((volatile uint32_t *) (kBaseAddress_RTC [group] + 0x4)))
#define RTC_DR (* ((volatile uint32_t *) (0x40002800 + 0x4)))

  // Field (width: 4 bits): Month units in BCD format
    inline uint32_t RTC_DR_MU (const uint32_t inValue) { return (inValue & 15U) << 8 ; }

  // Boolean field: Month tens in BCD format
    static const uint32_t RTC_DR_MT = 1U << 12 ;

  // Field (width: 3 bits): Week day units
    inline uint32_t RTC_DR_WDU (const uint32_t inValue) { return (inValue & 7U) << 13 ; }

  // Field (width: 2 bits): Date tens in BCD format
    inline uint32_t RTC_DR_DT (const uint32_t inValue) { return (inValue & 3U) << 4 ; }

  // Field (width: 4 bits): Date units in BCD format
    inline uint32_t RTC_DR_DU (const uint32_t inValue) { return (inValue & 15U) << 0 ; }

  // Field (width: 4 bits): Year units in BCD format
    inline uint32_t RTC_DR_YU (const uint32_t inValue) { return (inValue & 15U) << 16 ; }

  // Field (width: 4 bits): Year tens in BCD format
    inline uint32_t RTC_DR_YT (const uint32_t inValue) { return (inValue & 15U) << 20 ; }

//-------------------- backup register
#define RTC_BKP29R(group) (* ((volatile uint32_t *) (kBaseAddress_RTC [group] + 0xC4)))
#define RTC_BKP29R (* ((volatile uint32_t *) (0x40002800 + 0xC4)))

//-------------------- backup register
#define RTC_BKP7R(group) (* ((volatile uint32_t *) (kBaseAddress_RTC [group] + 0x6C)))
#define RTC_BKP7R (* ((volatile uint32_t *) (0x40002800 + 0x6C)))

//-------------------- alarm A register
#define RTC_ALRMAR(group) (* ((volatile uint32_t *) (kBaseAddress_RTC [group] + 0x1C)))
#define RTC_ALRMAR (* ((volatile uint32_t *) (0x40002800 + 0x1C)))

  // Field (width: 4 bits): Second units in BCD format
    inline uint32_t RTC_ALRMAR_SU (const uint32_t inValue) { return (inValue & 15U) << 0 ; }

  // Field (width: 3 bits): Minute tens in BCD format
    inline uint32_t RTC_ALRMAR_MNT (const uint32_t inValue) { return (inValue & 7U) << 12 ; }

  // Field (width: 4 bits): Minute units in BCD format
    inline uint32_t RTC_ALRMAR_MNU (const uint32_t inValue) { return (inValue & 15U) << 8 ; }

  // Field (width: 2 bits): Hour tens in BCD format
    inline uint32_t RTC_ALRMAR_HT (const uint32_t inValue) { return (inValue & 3U) << 20 ; }

  // Field (width: 4 bits): Hour units in BCD format
    inline uint32_t RTC_ALRMAR_HU (const uint32_t inValue) { return (inValue & 15U) << 16 ; }

  // Boolean field: Alarm A seconds mask
    static const uint32_t RTC_ALRMAR_MSK1 = 1U << 7 ;

  // Field (width: 3 bits): Second tens in BCD format
    inline uint32_t RTC_ALRMAR_ST (const uint32_t inValue) { return (inValue & 7U) << 4 ; }

  // Boolean field: Alarm A hours mask
    static const uint32_t RTC_ALRMAR_MSK3 = 1U << 23 ;

  // Boolean field: Alarm A minutes mask
    static const uint32_t RTC_ALRMAR_MSK2 = 1U << 15 ;

  // Boolean field: Alarm A date mask
    static const uint32_t RTC_ALRMAR_MSK4 = 1U << 31 ;

  // Boolean field: Week day selection
    static const uint32_t RTC_ALRMAR_WDSEL = 1U << 30 ;

  // Field (width: 2 bits): Date tens in BCD format
    inline uint32_t RTC_ALRMAR_DT (const uint32_t inValue) { return (inValue & 3U) << 28 ; }

  // Field (width: 4 bits): Date units or day in BCD
              format
    inline uint32_t RTC_ALRMAR_DU (const uint32_t inValue) { return (inValue & 15U) << 24 ; }

  // Boolean field: AM/PM notation
    static const uint32_t RTC_ALRMAR_PM = 1U << 22 ;

//-------------------- backup register
#define RTC_BKP31R(group) (* ((volatile uint32_t *) (kBaseAddress_RTC [group] + 0xCC)))
#define RTC_BKP31R (* ((volatile uint32_t *) (0x40002800 + 0xCC)))

//-------------------- backup register
#define RTC_BKP1R(group) (* ((volatile uint32_t *) (kBaseAddress_RTC [group] + 0x54)))
#define RTC_BKP1R (* ((volatile uint32_t *) (0x40002800 + 0x54)))

//-------------------- time register
#define RTC_TR(group) (* ((volatile uint32_t *) (kBaseAddress_RTC [group] + 0x0)))
#define RTC_TR (* ((volatile uint32_t *) (0x40002800 + 0x0)))

  // Field (width: 3 bits): Minute tens in BCD format
    inline uint32_t RTC_TR_MNT (const uint32_t inValue) { return (inValue & 7U) << 12 ; }

  // Field (width: 4 bits): Minute units in BCD format
    inline uint32_t RTC_TR_MNU (const uint32_t inValue) { return (inValue & 15U) << 8 ; }

  // Field (width: 2 bits): Hour tens in BCD format
    inline uint32_t RTC_TR_HT (const uint32_t inValue) { return (inValue & 3U) << 20 ; }

  // Field (width: 3 bits): Second tens in BCD format
    inline uint32_t RTC_TR_ST (const uint32_t inValue) { return (inValue & 7U) << 4 ; }

  // Field (width: 4 bits): Second units in BCD format
    inline uint32_t RTC_TR_SU (const uint32_t inValue) { return (inValue & 15U) << 0 ; }

  // Field (width: 4 bits): Hour units in BCD format
    inline uint32_t RTC_TR_HU (const uint32_t inValue) { return (inValue & 15U) << 16 ; }

  // Boolean field: AM/PM notation
    static const uint32_t RTC_TR_PM = 1U << 22 ;

//-------------------- write protection register
#define RTC_WPR(group) (* ((volatile uint32_t *) (kBaseAddress_RTC [group] + 0x24)))
#define RTC_WPR (* ((volatile uint32_t *) (0x40002800 + 0x24)))

  // Field (width: 8 bits): Write protection key
    inline uint32_t RTC_WPR_KEY (const uint32_t inValue) { return (inValue & 255U) << 0 ; }

//-------------------- backup register
#define RTC_BKP10R(group) (* ((volatile uint32_t *) (kBaseAddress_RTC [group] + 0x78)))
#define RTC_BKP10R (* ((volatile uint32_t *) (0x40002800 + 0x78)))

//-------------------- backup register
#define RTC_BKP23R(group) (* ((volatile uint32_t *) (kBaseAddress_RTC [group] + 0xAC)))
#define RTC_BKP23R (* ((volatile uint32_t *) (0x40002800 + 0xAC)))

//-------------------- backup register
#define RTC_BKP12R(group) (* ((volatile uint32_t *) (kBaseAddress_RTC [group] + 0x80)))
#define RTC_BKP12R (* ((volatile uint32_t *) (0x40002800 + 0x80)))

//-------------------- tamper configuration register
#define RTC_TAMPCR(group) (* ((volatile uint32_t *) (kBaseAddress_RTC [group] + 0x40)))
#define RTC_TAMPCR (* ((volatile uint32_t *) (0x40002800 + 0x40)))

  // Boolean field: Tamper 1 no erase
    static const uint32_t RTC_TAMPCR_TAMP1NOERASE = 1U << 17 ;

  // Boolean field: Tamper 1 detection enable
    static const uint32_t RTC_TAMPCR_TAMP1E = 1U << 0 ;

  // Field (width: 2 bits): Tamper filter count
    inline uint32_t RTC_TAMPCR_TAMPFLT (const uint32_t inValue) { return (inValue & 3U) << 11 ; }

  // Boolean field: Tamper 1 mask flag
    static const uint32_t RTC_TAMPCR_TAMP1MF = 1U << 18 ;

  // Boolean field: Tamper 2 interrupt enable
    static const uint32_t RTC_TAMPCR_TAMP2IE = 1U << 19 ;

  // Boolean field: Active level for tamper 1
    static const uint32_t RTC_TAMPCR_TAMP1TRG = 1U << 1 ;

  // Boolean field: Tamper 3 no erase
    static const uint32_t RTC_TAMPCR_TAMP3NOERASE = 1U << 23 ;

  // Boolean field: Active level for tamper 2
    static const uint32_t RTC_TAMPCR_TAMP2TRG = 1U << 4 ;

  // Boolean field: TAMPER pull-up disable
    static const uint32_t RTC_TAMPCR_TAMPPUDIS = 1U << 15 ;

  // Boolean field: Active level for tamper 3
    static const uint32_t RTC_TAMPCR_TAMP3TRG = 1U << 6 ;

  // Boolean field: Tamper 3 mask flag
    static const uint32_t RTC_TAMPCR_TAMP3MF = 1U << 24 ;

  // Boolean field: Tamper 2 no erase
    static const uint32_t RTC_TAMPCR_TAMP2NOERASE = 1U << 20 ;

  // Field (width: 2 bits): Tamper precharge duration
    inline uint32_t RTC_TAMPCR_TAMPPRCH (const uint32_t inValue) { return (inValue & 3U) << 13 ; }

  // Boolean field: Tamper 3 detection enable
    static const uint32_t RTC_TAMPCR_TAMP3E = 1U << 5 ;

  // Boolean field: Tamper 3 interrupt enable
    static const uint32_t RTC_TAMPCR_TAMP3IE = 1U << 22 ;

  // Boolean field: Tamper interrupt enable
    static const uint32_t RTC_TAMPCR_TAMPIE = 1U << 2 ;

  // Boolean field: Tamper 2 detection enable
    static const uint32_t RTC_TAMPCR_TAMP2E = 1U << 3 ;

  // Field (width: 3 bits): Tamper sampling frequency
    inline uint32_t RTC_TAMPCR_TAMPFREQ (const uint32_t inValue) { return (inValue & 7U) << 8 ; }

  // Boolean field: Tamper 1 interrupt enable
    static const uint32_t RTC_TAMPCR_TAMP1IE = 1U << 16 ;

  // Boolean field: Tamper 2 mask flag
    static const uint32_t RTC_TAMPCR_TAMP2MF = 1U << 21 ;

  // Boolean field: Activate timestamp on tamper detection
              event
    static const uint32_t RTC_TAMPCR_TAMPTS = 1U << 7 ;

//-------------------- backup register
#define RTC_BKP30R(group) (* ((volatile uint32_t *) (kBaseAddress_RTC [group] + 0xC8)))
#define RTC_BKP30R (* ((volatile uint32_t *) (0x40002800 + 0xC8)))

//-------------------- backup register
#define RTC_BKP9R(group) (* ((volatile uint32_t *) (kBaseAddress_RTC [group] + 0x74)))
#define RTC_BKP9R (* ((volatile uint32_t *) (0x40002800 + 0x74)))

//-------------------- backup register
#define RTC_BKP24R(group) (* ((volatile uint32_t *) (kBaseAddress_RTC [group] + 0xB0)))
#define RTC_BKP24R (* ((volatile uint32_t *) (0x40002800 + 0xB0)))

//-------------------- backup register
#define RTC_BKP14R(group) (* ((volatile uint32_t *) (kBaseAddress_RTC [group] + 0x88)))
#define RTC_BKP14R (* ((volatile uint32_t *) (0x40002800 + 0x88)))

//-------------------- backup register
#define RTC_BKP20R(group) (* ((volatile uint32_t *) (kBaseAddress_RTC [group] + 0xA0)))
#define RTC_BKP20R (* ((volatile uint32_t *) (0x40002800 + 0xA0)))

//-------------------- backup register
#define RTC_BKP26R(group) (* ((volatile uint32_t *) (kBaseAddress_RTC [group] + 0xB8)))
#define RTC_BKP26R (* ((volatile uint32_t *) (0x40002800 + 0xB8)))

//-------------------- backup register
#define RTC_BKP15R(group) (* ((volatile uint32_t *) (kBaseAddress_RTC [group] + 0x8C)))
#define RTC_BKP15R (* ((volatile uint32_t *) (0x40002800 + 0x8C)))

//-------------------- backup register
#define RTC_BKP3R(group) (* ((volatile uint32_t *) (kBaseAddress_RTC [group] + 0x5C)))
#define RTC_BKP3R (* ((volatile uint32_t *) (0x40002800 + 0x5C)))

//-------------------- control register
#define RTC_CR(group) (* ((volatile uint32_t *) (kBaseAddress_RTC [group] + 0x8)))
#define RTC_CR (* ((volatile uint32_t *) (0x40002800 + 0x8)))

  // Boolean field: Wakeup timer interrupt
              enable
    static const uint32_t RTC_CR_WUTIE = 1U << 14 ;

  // Boolean field: Add 1 hour (summer time
              change)
    static const uint32_t RTC_CR_ADD1H = 1U << 16 ;

  // Boolean field: Subtract 1 hour (winter time
              change)
    static const uint32_t RTC_CR_SUB1H = 1U << 17 ;

  // Boolean field: Time-stamp interrupt
              enable
    static const uint32_t RTC_CR_TSIE = 1U << 15 ;

  // Boolean field: Calibration output enable
    static const uint32_t RTC_CR_COE = 1U << 23 ;

  // Boolean field: Hour format
    static const uint32_t RTC_CR_FMT = 1U << 6 ;

  // Boolean field: Time stamp enable
    static const uint32_t RTC_CR_TSE = 1U << 11 ;

  // Field (width: 3 bits): Wakeup clock selection
    inline uint32_t RTC_CR_WCKSEL (const uint32_t inValue) { return (inValue & 7U) << 0 ; }

  // Boolean field: timestamp on internal event
              enable
    static const uint32_t RTC_CR_ITSE = 1U << 24 ;

  // Boolean field: Alarm B enable
    static const uint32_t RTC_CR_ALRBE = 1U << 9 ;

  // Boolean field: Alarm B interrupt enable
    static const uint32_t RTC_CR_ALRBIE = 1U << 13 ;

  // Boolean field: Output polarity
    static const uint32_t RTC_CR_POL = 1U << 20 ;

  // Boolean field: Bypass the shadow
              registers
    static const uint32_t RTC_CR_BYPSHAD = 1U << 5 ;

  // Field (width: 2 bits): Output selection
    inline uint32_t RTC_CR_OSEL (const uint32_t inValue) { return (inValue & 3U) << 21 ; }

  // Boolean field: Calibration output
              selection
    static const uint32_t RTC_CR_COSEL = 1U << 19 ;

  // Boolean field: Backup
    static const uint32_t RTC_CR_BKP = 1U << 18 ;

  // Boolean field: Alarm A enable
    static const uint32_t RTC_CR_ALRAE = 1U << 8 ;

  // Boolean field: Time-stamp event active
              edge
    static const uint32_t RTC_CR_TSEDGE = 1U << 3 ;

  // Boolean field: Alarm A interrupt enable
    static const uint32_t RTC_CR_ALRAIE = 1U << 12 ;

  // Boolean field: Reference clock detection enable (50 or
              60 Hz)
    static const uint32_t RTC_CR_REFCKON = 1U << 4 ;

  // Boolean field: Wakeup timer enable
    static const uint32_t RTC_CR_WUTE = 1U << 10 ;

//-------------------- backup register
#define RTC_BKP19R(group) (* ((volatile uint32_t *) (kBaseAddress_RTC [group] + 0x9C)))
#define RTC_BKP19R (* ((volatile uint32_t *) (0x40002800 + 0x9C)))

//-------------------- time stamp time register
#define RTC_TSTR(group) (* ((const volatile uint32_t *) (kBaseAddress_RTC [group] + 0x30)))
#define RTC_TSTR (* ((const volatile uint32_t *) (0x40002800 + 0x30)))

  // Field (width: 3 bits): Minute tens in BCD format
    inline uint32_t RTC_TSTR_MNT (const uint32_t inValue) { return (inValue & 7U) << 12 ; }

  // Field (width: 4 bits): Minute units in BCD format
    inline uint32_t RTC_TSTR_MNU (const uint32_t inValue) { return (inValue & 15U) << 8 ; }

  // Field (width: 2 bits): Hour tens in BCD format
    inline uint32_t RTC_TSTR_HT (const uint32_t inValue) { return (inValue & 3U) << 20 ; }

  // Field (width: 4 bits): Hour units in BCD format
    inline uint32_t RTC_TSTR_HU (const uint32_t inValue) { return (inValue & 15U) << 16 ; }

  // Field (width: 4 bits): Second units in BCD format
    inline uint32_t RTC_TSTR_SU (const uint32_t inValue) { return (inValue & 15U) << 0 ; }

  // Field (width: 3 bits): Second tens in BCD format
    inline uint32_t RTC_TSTR_ST (const uint32_t inValue) { return (inValue & 7U) << 4 ; }

  // Boolean field: AM/PM notation
    static const uint32_t RTC_TSTR_PM = 1U << 22 ;

//-------------------- alarm B register
#define RTC_ALRMBR(group) (* ((volatile uint32_t *) (kBaseAddress_RTC [group] + 0x20)))
#define RTC_ALRMBR (* ((volatile uint32_t *) (0x40002800 + 0x20)))

  // Field (width: 4 bits): Second units in BCD format
    inline uint32_t RTC_ALRMBR_SU (const uint32_t inValue) { return (inValue & 15U) << 0 ; }

  // Field (width: 3 bits): Minute tens in BCD format
    inline uint32_t RTC_ALRMBR_MNT (const uint32_t inValue) { return (inValue & 7U) << 12 ; }

  // Field (width: 4 bits): Minute units in BCD format
    inline uint32_t RTC_ALRMBR_MNU (const uint32_t inValue) { return (inValue & 15U) << 8 ; }

  // Field (width: 2 bits): Hour tens in BCD format
    inline uint32_t RTC_ALRMBR_HT (const uint32_t inValue) { return (inValue & 3U) << 20 ; }

  // Field (width: 4 bits): Hour units in BCD format
    inline uint32_t RTC_ALRMBR_HU (const uint32_t inValue) { return (inValue & 15U) << 16 ; }

  // Boolean field: Alarm B seconds mask
    static const uint32_t RTC_ALRMBR_MSK1 = 1U << 7 ;

  // Field (width: 3 bits): Second tens in BCD format
    inline uint32_t RTC_ALRMBR_ST (const uint32_t inValue) { return (inValue & 7U) << 4 ; }

  // Boolean field: Alarm B hours mask
    static const uint32_t RTC_ALRMBR_MSK3 = 1U << 23 ;

  // Boolean field: Alarm B minutes mask
    static const uint32_t RTC_ALRMBR_MSK2 = 1U << 15 ;

  // Boolean field: Alarm B date mask
    static const uint32_t RTC_ALRMBR_MSK4 = 1U << 31 ;

  // Boolean field: Week day selection
    static const uint32_t RTC_ALRMBR_WDSEL = 1U << 30 ;

  // Field (width: 2 bits): Date tens in BCD format
    inline uint32_t RTC_ALRMBR_DT (const uint32_t inValue) { return (inValue & 3U) << 28 ; }

  // Field (width: 4 bits): Date units or day in BCD
              format
    inline uint32_t RTC_ALRMBR_DU (const uint32_t inValue) { return (inValue & 15U) << 24 ; }

  // Boolean field: AM/PM notation
    static const uint32_t RTC_ALRMBR_PM = 1U << 22 ;

//-------------------- backup register
#define RTC_BKP28R(group) (* ((volatile uint32_t *) (kBaseAddress_RTC [group] + 0xC0)))
#define RTC_BKP28R (* ((volatile uint32_t *) (0x40002800 + 0xC0)))

//-------------------- backup register
#define RTC_BKP4R(group) (* ((volatile uint32_t *) (kBaseAddress_RTC [group] + 0x60)))
#define RTC_BKP4R (* ((volatile uint32_t *) (0x40002800 + 0x60)))

//-------------------- backup register
#define RTC_BKP0R(group) (* ((volatile uint32_t *) (kBaseAddress_RTC [group] + 0x50)))
#define RTC_BKP0R (* ((volatile uint32_t *) (0x40002800 + 0x50)))

//-------------------- calibration register
#define RTC_CALR(group) (* ((volatile uint32_t *) (kBaseAddress_RTC [group] + 0x3C)))
#define RTC_CALR (* ((volatile uint32_t *) (0x40002800 + 0x3C)))

  // Boolean field: Increase frequency of RTC by 488.5
              ppm
    static const uint32_t RTC_CALR_CALP = 1U << 15 ;

  // Boolean field: Use a 16-second calibration cycle
              period
    static const uint32_t RTC_CALR_CALW16 = 1U << 13 ;

  // Boolean field: Use an 8-second calibration cycle
              period
    static const uint32_t RTC_CALR_CALW8 = 1U << 14 ;

  // Field (width: 9 bits): Calibration minus
    inline uint32_t RTC_CALR_CALM (const uint32_t inValue) { return (inValue & 511U) << 0 ; }

//-------------------- backup register
#define RTC_BKP5R(group) (* ((volatile uint32_t *) (kBaseAddress_RTC [group] + 0x64)))
#define RTC_BKP5R (* ((volatile uint32_t *) (0x40002800 + 0x64)))

//-------------------- alarm B sub second register
#define RTC_ALRMBSSR(group) (* ((volatile uint32_t *) (kBaseAddress_RTC [group] + 0x48)))
#define RTC_ALRMBSSR (* ((volatile uint32_t *) (0x40002800 + 0x48)))

  // Field (width: 15 bits): Sub seconds value
    inline uint32_t RTC_ALRMBSSR_SS (const uint32_t inValue) { return (inValue & 32767U) << 0 ; }

  // Field (width: 4 bits): Mask the most-significant bits starting
              at this bit
    inline uint32_t RTC_ALRMBSSR_MASKSS (const uint32_t inValue) { return (inValue & 15U) << 24 ; }

//-------------------- sub second register
#define RTC_SSR(group) (* ((const volatile uint32_t *) (kBaseAddress_RTC [group] + 0x28)))
#define RTC_SSR (* ((const volatile uint32_t *) (0x40002800 + 0x28)))

  // Field (width: 16 bits): Sub second value
    inline uint32_t RTC_SSR_SS (const uint32_t inValue) { return (inValue & 65535U) << 0 ; }

//-------------------- shift control register
#define RTC_SHIFTR(group) (* ((volatile uint32_t *) (kBaseAddress_RTC [group] + 0x2C)))
#define RTC_SHIFTR (* ((volatile uint32_t *) (0x40002800 + 0x2C)))

  // Boolean field: Add one second
    static const uint32_t RTC_SHIFTR_ADD1S = 1U << 31 ;

  // Field (width: 15 bits): Subtract a fraction of a
              second
    inline uint32_t RTC_SHIFTR_SUBFS (const uint32_t inValue) { return (inValue & 32767U) << 0 ; }

//-------------------- backup register
#define RTC_BKP22R(group) (* ((volatile uint32_t *) (kBaseAddress_RTC [group] + 0xA8)))
#define RTC_BKP22R (* ((volatile uint32_t *) (0x40002800 + 0xA8)))

//-------------------- backup register
#define RTC_BKP11R(group) (* ((volatile uint32_t *) (kBaseAddress_RTC [group] + 0x7C)))
#define RTC_BKP11R (* ((volatile uint32_t *) (0x40002800 + 0x7C)))

//-------------------- backup register
#define RTC_BKP17R(group) (* ((volatile uint32_t *) (kBaseAddress_RTC [group] + 0x94)))
#define RTC_BKP17R (* ((volatile uint32_t *) (0x40002800 + 0x94)))

//-------------------- backup register
#define RTC_BKP13R(group) (* ((volatile uint32_t *) (kBaseAddress_RTC [group] + 0x84)))
#define RTC_BKP13R (* ((volatile uint32_t *) (0x40002800 + 0x84)))

//-------------------- wakeup timer register
#define RTC_WUTR(group) (* ((volatile uint32_t *) (kBaseAddress_RTC [group] + 0x14)))
#define RTC_WUTR (* ((volatile uint32_t *) (0x40002800 + 0x14)))

  // Field (width: 16 bits): Wakeup auto-reload value
              bits
    inline uint32_t RTC_WUTR_WUT (const uint32_t inValue) { return (inValue & 65535U) << 0 ; }

//-------------------- option register
#define RTC_OR(group) (* ((volatile uint32_t *) (kBaseAddress_RTC [group] + 0x4C)))
#define RTC_OR (* ((volatile uint32_t *) (0x40002800 + 0x4C)))

  // Boolean field: RTC_ALARM on PC13 output
              type
    static const uint32_t RTC_OR_RTC_ALARM_TYPE = 1U << 0 ;

  // Boolean field: RTC_OUT remap
    static const uint32_t RTC_OR_RTC_OUT_RMP = 1U << 1 ;

//-------------------- prescaler register
#define RTC_PRER(group) (* ((volatile uint32_t *) (kBaseAddress_RTC [group] + 0x10)))
#define RTC_PRER (* ((volatile uint32_t *) (0x40002800 + 0x10)))

  // Field (width: 7 bits): Asynchronous prescaler
              factor
    inline uint32_t RTC_PRER_PREDIV_A (const uint32_t inValue) { return (inValue & 127U) << 16 ; }

  // Field (width: 15 bits): Synchronous prescaler
              factor
    inline uint32_t RTC_PRER_PREDIV_S (const uint32_t inValue) { return (inValue & 32767U) << 0 ; }

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
// Peripheral group SAI
//                SAI1 at 0x40015400
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

static const uint32_t kBaseAddress_SAI [1] = {0x40015400} ;

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

//-------------------- AConfiguration register 2
#define SAI_ACR2(group) (* ((volatile uint32_t *) (kBaseAddress_SAI [group] + 0x8)))
#define SAI1_ACR2 (* ((volatile uint32_t *) (0x40015400 + 0x8)))

  // Boolean field: Complement bit
    static const uint32_t SAI_ACR2_CPL = 1U << 13 ;

  // Boolean field: Mute
    static const uint32_t SAI_ACR2_MUTE = 1U << 5 ;

  // Field (width: 2 bits): Companding mode
    inline uint32_t SAI_ACR2_COMP (const uint32_t inValue) { return (inValue & 3U) << 14 ; }

  // Field (width: 6 bits): Mute counter
    inline uint32_t SAI_ACR2_MUTECN (const uint32_t inValue) { return (inValue & 63U) << 7 ; }

  // Field (width: 3 bits): FIFO threshold
    inline uint32_t SAI_ACR2_FTH (const uint32_t inValue) { return (inValue & 7U) << 0 ; }

  // Boolean field: FIFO flush
    static const uint32_t SAI_ACR2_FFLUS = 1U << 3 ;

  // Boolean field: Tristate management on data
              line
    static const uint32_t SAI_ACR2_TRIS = 1U << 4 ;

  // Boolean field: Mute value
    static const uint32_t SAI_ACR2_MUTEVAL = 1U << 6 ;

//-------------------- BConfiguration register 2
#define SAI_BCR2(group) (* ((volatile uint32_t *) (kBaseAddress_SAI [group] + 0x28)))
#define SAI1_BCR2 (* ((volatile uint32_t *) (0x40015400 + 0x28)))

  // Boolean field: Complement bit
    static const uint32_t SAI_BCR2_CPL = 1U << 13 ;

  // Boolean field: Mute
    static const uint32_t SAI_BCR2_MUTE = 1U << 5 ;

  // Field (width: 2 bits): Companding mode
    inline uint32_t SAI_BCR2_COMP (const uint32_t inValue) { return (inValue & 3U) << 14 ; }

  // Field (width: 6 bits): Mute counter
    inline uint32_t SAI_BCR2_MUTECN (const uint32_t inValue) { return (inValue & 63U) << 7 ; }

  // Field (width: 3 bits): FIFO threshold
    inline uint32_t SAI_BCR2_FTH (const uint32_t inValue) { return (inValue & 7U) << 0 ; }

  // Boolean field: FIFO flush
    static const uint32_t SAI_BCR2_FFLUS = 1U << 3 ;

  // Boolean field: Tristate management on data
              line
    static const uint32_t SAI_BCR2_TRIS = 1U << 4 ;

  // Boolean field: Mute value
    static const uint32_t SAI_BCR2_MUTEVAL = 1U << 6 ;

//-------------------- BConfiguration register 1
#define SAI_BCR1(group) (* ((volatile uint32_t *) (kBaseAddress_SAI [group] + 0x24)))
#define SAI1_BCR1 (* ((volatile uint32_t *) (0x40015400 + 0x24)))

  // Boolean field: DMA enable
    static const uint32_t SAI_BCR1_DMAEN = 1U << 17 ;

  // Boolean field: Least significant bit
              first
    static const uint32_t SAI_BCR1_LSBFIRST = 1U << 8 ;

  // Boolean field: Output drive
    static const uint32_t SAI_BCR1_OutDri = 1U << 13 ;

  // Field (width: 2 bits): Protocol configuration
    inline uint32_t SAI_BCR1_PRTCFG (const uint32_t inValue) { return (inValue & 3U) << 2 ; }

  // Boolean field: No divider
    static const uint32_t SAI_BCR1_NODIV = 1U << 19 ;

  // Field (width: 2 bits): Synchronization enable
    inline uint32_t SAI_BCR1_SYNCEN (const uint32_t inValue) { return (inValue & 3U) << 10 ; }

  // Field (width: 2 bits): Audio block mode
    inline uint32_t SAI_BCR1_MODE (const uint32_t inValue) { return (inValue & 3U) << 0 ; }

  // Boolean field: Clock strobing edge
    static const uint32_t SAI_BCR1_CKSTR = 1U << 9 ;

  // Boolean field: Mono mode
    static const uint32_t SAI_BCR1_MONO = 1U << 12 ;

  // Boolean field: Audio block B enable
    static const uint32_t SAI_BCR1_SAIBEN = 1U << 16 ;

  // Field (width: 3 bits): Data size
    inline uint32_t SAI_BCR1_DS (const uint32_t inValue) { return (inValue & 7U) << 5 ; }

  // Field (width: 4 bits): Master clock divider
    inline uint32_t SAI_BCR1_MCKDIV (const uint32_t inValue) { return (inValue & 15U) << 20 ; }

//-------------------- BInterrupt mask register2
#define SAI_BIM(group) (* ((volatile uint32_t *) (kBaseAddress_SAI [group] + 0x34)))
#define SAI1_BIM (* ((volatile uint32_t *) (0x40015400 + 0x34)))

  // Boolean field: Overrun/underrun interrupt
              enable
    static const uint32_t SAI_BIM_OVRUDRIE = 1U << 0 ;

  // Boolean field: Codec not ready interrupt
              enable
    static const uint32_t SAI_BIM_CNRDYIE = 1U << 4 ;

  // Boolean field: Mute detection interrupt
              enable
    static const uint32_t SAI_BIM_MUTEDET = 1U << 1 ;

  // Boolean field: FIFO request interrupt
              enable
    static const uint32_t SAI_BIM_FREQIE = 1U << 3 ;

  // Boolean field: Wrong clock configuration interrupt
              enable
    static const uint32_t SAI_BIM_WCKCFG = 1U << 2 ;

  // Boolean field: Late frame synchronization detection
              interrupt enable
    static const uint32_t SAI_BIM_LFSDETIE = 1U << 6 ;

  // Boolean field: Anticipated frame synchronization
              detection interrupt enable
    static const uint32_t SAI_BIM_AFSDETIE = 1U << 5 ;

//-------------------- AData register
#define SAI_ADR(group) (* ((volatile uint32_t *) (kBaseAddress_SAI [group] + 0x20)))
#define SAI1_ADR (* ((volatile uint32_t *) (0x40015400 + 0x20)))

//-------------------- AStatus register
#define SAI_ASR(group) (* ((volatile uint32_t *) (kBaseAddress_SAI [group] + 0x18)))
#define SAI1_ASR (* ((volatile uint32_t *) (0x40015400 + 0x18)))

  // Boolean field: Overrun / underrun
    static const uint32_t SAI_ASR_OVRUDR = 1U << 0 ;

  // Field (width: 3 bits): FIFO level threshold
    inline uint32_t SAI_ASR_FLVL (const uint32_t inValue) { return (inValue & 7U) << 16 ; }

  // Boolean field: Anticipated frame synchronization
              detection
    static const uint32_t SAI_ASR_AFSDET = 1U << 5 ;

  // Boolean field: Late frame synchronization
              detection
    static const uint32_t SAI_ASR_LFSDET = 1U << 6 ;

  // Boolean field: Codec not ready
    static const uint32_t SAI_ASR_CNRDY = 1U << 4 ;

  // Boolean field: Mute detection
    static const uint32_t SAI_ASR_MUTEDET = 1U << 1 ;

  // Boolean field: FIFO request
    static const uint32_t SAI_ASR_FREQ = 1U << 3 ;

  // Boolean field: Wrong clock configuration flag. This bit
              is read only
    static const uint32_t SAI_ASR_WCKCFG = 1U << 2 ;

//-------------------- BFRCR
#define SAI_BFRCR(group) (* ((volatile uint32_t *) (kBaseAddress_SAI [group] + 0x2C)))
#define SAI1_BFRCR (* ((volatile uint32_t *) (0x40015400 + 0x2C)))

  // Field (width: 8 bits): Frame length
    inline uint32_t SAI_BFRCR_FRL (const uint32_t inValue) { return (inValue & 255U) << 0 ; }

  // Boolean field: Frame synchronization
              polarity
    static const uint32_t SAI_BFRCR_FSPOL = 1U << 17 ;

  // Field (width: 7 bits): Frame synchronization active level
              length
    inline uint32_t SAI_BFRCR_FSALL (const uint32_t inValue) { return (inValue & 127U) << 8 ; }

  // Boolean field: Frame synchronization
              offset
    static const uint32_t SAI_BFRCR_FSOFF = 1U << 18 ;

  // Boolean field: Frame synchronization
              definition
    static const uint32_t SAI_BFRCR_FSDEF = 1U << 16 ;

//-------------------- AFRCR
#define SAI_AFRCR(group) (* ((volatile uint32_t *) (kBaseAddress_SAI [group] + 0xC)))
#define SAI1_AFRCR (* ((volatile uint32_t *) (0x40015400 + 0xC)))

  // Field (width: 8 bits): Frame length
    inline uint32_t SAI_AFRCR_FRL (const uint32_t inValue) { return (inValue & 255U) << 0 ; }

  // Boolean field: Frame synchronization
              polarity
    static const uint32_t SAI_AFRCR_FSPOL = 1U << 17 ;

  // Field (width: 7 bits): Frame synchronization active level
              length
    inline uint32_t SAI_AFRCR_FSALL (const uint32_t inValue) { return (inValue & 127U) << 8 ; }

  // Boolean field: Frame synchronization
              offset
    static const uint32_t SAI_AFRCR_FSOFF = 1U << 18 ;

  // Boolean field: Frame synchronization
              definition
    static const uint32_t SAI_AFRCR_FSDEF = 1U << 16 ;

//-------------------- BStatus register
#define SAI_BSR(group) (* ((const volatile uint32_t *) (kBaseAddress_SAI [group] + 0x38)))
#define SAI1_BSR (* ((const volatile uint32_t *) (0x40015400 + 0x38)))

  // Boolean field: Overrun / underrun
    static const uint32_t SAI_BSR_OVRUDR = 1U << 0 ;

  // Field (width: 3 bits): FIFO level threshold
    inline uint32_t SAI_BSR_FLVL (const uint32_t inValue) { return (inValue & 7U) << 16 ; }

  // Boolean field: Anticipated frame synchronization
              detection
    static const uint32_t SAI_BSR_AFSDET = 1U << 5 ;

  // Boolean field: Late frame synchronization
              detection
    static const uint32_t SAI_BSR_LFSDET = 1U << 6 ;

  // Boolean field: Codec not ready
    static const uint32_t SAI_BSR_CNRDY = 1U << 4 ;

  // Boolean field: Mute detection
    static const uint32_t SAI_BSR_MUTEDET = 1U << 1 ;

  // Boolean field: FIFO request
    static const uint32_t SAI_BSR_FREQ = 1U << 3 ;

  // Boolean field: Wrong clock configuration
              flag
    static const uint32_t SAI_BSR_WCKCFG = 1U << 2 ;

//-------------------- AInterrupt mask register2
#define SAI_AIM(group) (* ((volatile uint32_t *) (kBaseAddress_SAI [group] + 0x14)))
#define SAI1_AIM (* ((volatile uint32_t *) (0x40015400 + 0x14)))

  // Boolean field: Overrun/underrun interrupt
              enable
    static const uint32_t SAI_AIM_OVRUDRIE = 1U << 0 ;

  // Boolean field: Codec not ready interrupt
              enable
    static const uint32_t SAI_AIM_CNRDYIE = 1U << 4 ;

  // Boolean field: Late frame synchronization detection
              interrupt enable
    static const uint32_t SAI_AIM_LFSDET = 1U << 6 ;

  // Boolean field: Mute detection interrupt
              enable
    static const uint32_t SAI_AIM_MUTEDET = 1U << 1 ;

  // Boolean field: FIFO request interrupt
              enable
    static const uint32_t SAI_AIM_FREQIE = 1U << 3 ;

  // Boolean field: Wrong clock configuration interrupt
              enable
    static const uint32_t SAI_AIM_WCKCFG = 1U << 2 ;

  // Boolean field: Anticipated frame synchronization
              detection interrupt enable
    static const uint32_t SAI_AIM_AFSDETIE = 1U << 5 ;

//-------------------- BClear flag register
#define SAI_BCLRFR(group) (* ((volatile uint32_t *) (kBaseAddress_SAI [group] + 0x3C)))
#define SAI1_BCLRFR (* ((volatile uint32_t *) (0x40015400 + 0x3C)))

  // Boolean field: Clear anticipated frame synchronization
              detection flag
    static const uint32_t SAI_BCLRFR_CAFSDET = 1U << 5 ;

  // Boolean field: Clear overrun / underrun
    static const uint32_t SAI_BCLRFR_OVRUDR = 1U << 0 ;

  // Boolean field: Clear late frame synchronization
              detection flag
    static const uint32_t SAI_BCLRFR_LFSDET = 1U << 6 ;

  // Boolean field: Clear codec not ready flag
    static const uint32_t SAI_BCLRFR_CNRDY = 1U << 4 ;

  // Boolean field: Mute detection flag
    static const uint32_t SAI_BCLRFR_MUTEDET = 1U << 1 ;

  // Boolean field: Clear wrong clock configuration
              flag
    static const uint32_t SAI_BCLRFR_WCKCFG = 1U << 2 ;

//-------------------- AConfiguration register 1
#define SAI_ACR1(group) (* ((volatile uint32_t *) (kBaseAddress_SAI [group] + 0x4)))
#define SAI1_ACR1 (* ((volatile uint32_t *) (0x40015400 + 0x4)))

  // Boolean field: Audio block A enable
    static const uint32_t SAI_ACR1_SAIAEN = 1U << 16 ;

  // Boolean field: DMA enable
    static const uint32_t SAI_ACR1_DMAEN = 1U << 17 ;

  // Boolean field: Least significant bit
              first
    static const uint32_t SAI_ACR1_LSBFIRST = 1U << 8 ;

  // Boolean field: Mono mode
    static const uint32_t SAI_ACR1_MONO = 1U << 12 ;

  // Field (width: 2 bits): Protocol configuration
    inline uint32_t SAI_ACR1_PRTCFG (const uint32_t inValue) { return (inValue & 3U) << 2 ; }

  // Boolean field: No divider
    static const uint32_t SAI_ACR1_NODIV = 1U << 19 ;

  // Field (width: 2 bits): Synchronization enable
    inline uint32_t SAI_ACR1_SYNCEN (const uint32_t inValue) { return (inValue & 3U) << 10 ; }

  // Field (width: 2 bits): Audio block mode
    inline uint32_t SAI_ACR1_MODE (const uint32_t inValue) { return (inValue & 3U) << 0 ; }

  // Boolean field: Clock strobing edge
    static const uint32_t SAI_ACR1_CKSTR = 1U << 9 ;

  // Boolean field: Output drive
    static const uint32_t SAI_ACR1_OutDri = 1U << 13 ;

  // Field (width: 3 bits): Data size
    inline uint32_t SAI_ACR1_DS (const uint32_t inValue) { return (inValue & 7U) << 5 ; }

  // Field (width: 4 bits): Master clock divider
    inline uint32_t SAI_ACR1_MCKDIV (const uint32_t inValue) { return (inValue & 15U) << 20 ; }

//-------------------- BSlot register
#define SAI_BSLOTR(group) (* ((volatile uint32_t *) (kBaseAddress_SAI [group] + 0x30)))
#define SAI1_BSLOTR (* ((volatile uint32_t *) (0x40015400 + 0x30)))

  // Field (width: 2 bits): Slot size
    inline uint32_t SAI_BSLOTR_SLOTSZ (const uint32_t inValue) { return (inValue & 3U) << 6 ; }

  // Field (width: 4 bits): Number of slots in an audio
              frame
    inline uint32_t SAI_BSLOTR_NBSLOT (const uint32_t inValue) { return (inValue & 15U) << 8 ; }

  // Field (width: 16 bits): Slot enable
    inline uint32_t SAI_BSLOTR_SLOTEN (const uint32_t inValue) { return (inValue & 65535U) << 16 ; }

  // Field (width: 5 bits): First bit offset
    inline uint32_t SAI_BSLOTR_FBOFF (const uint32_t inValue) { return (inValue & 31U) << 0 ; }

//-------------------- BData register
#define SAI_BDR(group) (* ((volatile uint32_t *) (kBaseAddress_SAI [group] + 0x40)))
#define SAI1_BDR (* ((volatile uint32_t *) (0x40015400 + 0x40)))

//-------------------- AClear flag register
#define SAI_ACLRFR(group) (* ((volatile uint32_t *) (kBaseAddress_SAI [group] + 0x1C)))
#define SAI1_ACLRFR (* ((volatile uint32_t *) (0x40015400 + 0x1C)))

  // Boolean field: Clear anticipated frame synchronization
              detection flag
    static const uint32_t SAI_ACLRFR_CAFSDET = 1U << 5 ;

  // Boolean field: Clear overrun / underrun
    static const uint32_t SAI_ACLRFR_OVRUDR = 1U << 0 ;

  // Boolean field: Clear late frame synchronization
              detection flag
    static const uint32_t SAI_ACLRFR_LFSDET = 1U << 6 ;

  // Boolean field: Clear codec not ready flag
    static const uint32_t SAI_ACLRFR_CNRDY = 1U << 4 ;

  // Boolean field: Mute detection flag
    static const uint32_t SAI_ACLRFR_MUTEDET = 1U << 1 ;

  // Boolean field: Clear wrong clock configuration
              flag
    static const uint32_t SAI_ACLRFR_WCKCFG = 1U << 2 ;

//-------------------- ASlot register
#define SAI_ASLOTR(group) (* ((volatile uint32_t *) (kBaseAddress_SAI [group] + 0x10)))
#define SAI1_ASLOTR (* ((volatile uint32_t *) (0x40015400 + 0x10)))

  // Field (width: 2 bits): Slot size
    inline uint32_t SAI_ASLOTR_SLOTSZ (const uint32_t inValue) { return (inValue & 3U) << 6 ; }

  // Field (width: 4 bits): Number of slots in an audio
              frame
    inline uint32_t SAI_ASLOTR_NBSLOT (const uint32_t inValue) { return (inValue & 15U) << 8 ; }

  // Field (width: 16 bits): Slot enable
    inline uint32_t SAI_ASLOTR_SLOTEN (const uint32_t inValue) { return (inValue & 65535U) << 16 ; }

  // Field (width: 5 bits): First bit offset
    inline uint32_t SAI_ASLOTR_FBOFF (const uint32_t inValue) { return (inValue & 31U) << 0 ; }

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
// Peripheral group SCB
//                SCB at 0xE000ED00
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

static const uint32_t kBaseAddress_SCB [1] = {0xE000ED00} ;

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

//-------------------- Auxiliary fault status
          register
#define SCB_AFSR(group) (* ((volatile uint32_t *) (kBaseAddress_SCB [group] + 0x3C)))
#define SCB_AFSR (* ((volatile uint32_t *) (0xE000ED00 + 0x3C)))

//-------------------- Application interrupt and reset control
          register
#define SCB_AIRCR(group) (* ((volatile uint32_t *) (kBaseAddress_SCB [group] + 0xC)))
#define SCB_AIRCR (* ((volatile uint32_t *) (0xE000ED00 + 0xC)))

  // Boolean field: VECTCLRACTIVE
    static const uint32_t SCB_AIRCR_VECTCLRACTIVE = 1U << 1 ;

  // Field (width: 3 bits): PRIGROUP
    inline uint32_t SCB_AIRCR_PRIGROUP (const uint32_t inValue) { return (inValue & 7U) << 8 ; }

  // Boolean field: ENDIANESS
    static const uint32_t SCB_AIRCR_ENDIANESS = 1U << 15 ;

  // Field (width: 16 bits): Register key
    inline uint32_t SCB_AIRCR_VECTKEYSTAT (const uint32_t inValue) { return (inValue & 65535U) << 16 ; }

  // Boolean field: VECTRESET
    static const uint32_t SCB_AIRCR_VECTRESET = 1U << 0 ;

  // Boolean field: SYSRESETREQ
    static const uint32_t SCB_AIRCR_SYSRESETREQ = 1U << 2 ;

//-------------------- System handler priority
          registers
#define SCB_SHPR1(group) (* ((volatile uint32_t *) (kBaseAddress_SCB [group] + 0x18)))
#define SCB_SHPR1 (* ((volatile uint32_t *) (0xE000ED00 + 0x18)))

  // Field (width: 8 bits): Priority of system handler
              6
    inline uint32_t SCB_SHPR1_PRI_6 (const uint32_t inValue) { return (inValue & 255U) << 16 ; }

  // Field (width: 8 bits): Priority of system handler
              5
    inline uint32_t SCB_SHPR1_PRI_5 (const uint32_t inValue) { return (inValue & 255U) << 8 ; }

  // Field (width: 8 bits): Priority of system handler
              4
    inline uint32_t SCB_SHPR1_PRI_4 (const uint32_t inValue) { return (inValue & 255U) << 0 ; }

//-------------------- System handler priority
          registers
#define SCB_SHPR2(group) (* ((volatile uint32_t *) (kBaseAddress_SCB [group] + 0x1C)))
#define SCB_SHPR2 (* ((volatile uint32_t *) (0xE000ED00 + 0x1C)))

  // Field (width: 8 bits): Priority of system handler
              11
    inline uint32_t SCB_SHPR2_PRI_11 (const uint32_t inValue) { return (inValue & 255U) << 24 ; }

//-------------------- Interrupt control and state
          register
#define SCB_ICSR(group) (* ((volatile uint32_t *) (kBaseAddress_SCB [group] + 0x4)))
#define SCB_ICSR (* ((volatile uint32_t *) (0xE000ED00 + 0x4)))

  // Boolean field: Interrupt pending flag
    static const uint32_t SCB_ICSR_ISRPENDING = 1U << 22 ;

  // Field (width: 9 bits): Active vector
    inline uint32_t SCB_ICSR_VECTACTIVE (const uint32_t inValue) { return (inValue & 511U) << 0 ; }

  // Boolean field: PendSV set-pending bit
    static const uint32_t SCB_ICSR_PENDSVSET = 1U << 28 ;

  // Boolean field: PendSV clear-pending bit
    static const uint32_t SCB_ICSR_PENDSVCLR = 1U << 27 ;

  // Boolean field: Return to base level
    static const uint32_t SCB_ICSR_RETTOBASE = 1U << 11 ;

  // Boolean field: SysTick exception clear-pending
              bit
    static const uint32_t SCB_ICSR_PENDSTCLR = 1U << 25 ;

  // Boolean field: NMI set-pending bit.
    static const uint32_t SCB_ICSR_NMIPENDSET = 1U << 31 ;

  // Field (width: 7 bits): Pending vector
    inline uint32_t SCB_ICSR_VECTPENDING (const uint32_t inValue) { return (inValue & 127U) << 12 ; }

  // Boolean field: SysTick exception set-pending
              bit
    static const uint32_t SCB_ICSR_PENDSTSET = 1U << 26 ;

//-------------------- System handler priority
          registers
#define SCB_SHPR3(group) (* ((volatile uint32_t *) (kBaseAddress_SCB [group] + 0x20)))
#define SCB_SHPR3 (* ((volatile uint32_t *) (0xE000ED00 + 0x20)))

  // Field (width: 8 bits): Priority of system handler
              15
    inline uint32_t SCB_SHPR3_PRI_15 (const uint32_t inValue) { return (inValue & 255U) << 24 ; }

  // Field (width: 8 bits): Priority of system handler
              14
    inline uint32_t SCB_SHPR3_PRI_14 (const uint32_t inValue) { return (inValue & 255U) << 16 ; }

//-------------------- Memory management fault address
          register
#define SCB_MMFAR(group) (* ((volatile uint32_t *) (kBaseAddress_SCB [group] + 0x34)))
#define SCB_MMFAR (* ((volatile uint32_t *) (0xE000ED00 + 0x34)))

//-------------------- Hard fault status register
#define SCB_HFSR(group) (* ((volatile uint32_t *) (kBaseAddress_SCB [group] + 0x2C)))
#define SCB_HFSR (* ((volatile uint32_t *) (0xE000ED00 + 0x2C)))

  // Boolean field: Forced hard fault
    static const uint32_t SCB_HFSR_FORCED = 1U << 30 ;

  // Boolean field: Vector table hard fault
    static const uint32_t SCB_HFSR_VECTTBL = 1U << 1 ;

  // Boolean field: Reserved for Debug use
    static const uint32_t SCB_HFSR_DEBUG_VT = 1U << 31 ;

//-------------------- Configuration and control
          register
#define SCB_CCR(group) (* ((volatile uint32_t *) (kBaseAddress_SCB [group] + 0x14)))
#define SCB_CCR (* ((volatile uint32_t *) (0xE000ED00 + 0x14)))

  // Boolean field: UNALIGN_ TRP
    static const uint32_t SCB_CCR_UNALIGN__TRP = 1U << 3 ;

  // Boolean field: DIV_0_TRP
    static const uint32_t SCB_CCR_DIV_0_TRP = 1U << 4 ;

  // Boolean field: Configures how the processor enters
              Thread mode
    static const uint32_t SCB_CCR_NONBASETHRDENA = 1U << 0 ;

  // Boolean field: STKALIGN
    static const uint32_t SCB_CCR_STKALIGN = 1U << 9 ;

  // Boolean field: USERSETMPEND
    static const uint32_t SCB_CCR_USERSETMPEND = 1U << 1 ;

  // Boolean field: BFHFNMIGN
    static const uint32_t SCB_CCR_BFHFNMIGN = 1U << 8 ;

//-------------------- System handler control and state
          register
#define SCB_SHCRS(group) (* ((volatile uint32_t *) (kBaseAddress_SCB [group] + 0x24)))
#define SCB_SHCRS (* ((volatile uint32_t *) (0xE000ED00 + 0x24)))

  // Boolean field: Memory management fault exception active
              bit
    static const uint32_t SCB_SHCRS_MEMFAULTACT = 1U << 0 ;

  // Boolean field: PendSV exception active
              bit
    static const uint32_t SCB_SHCRS_PENDSVACT = 1U << 10 ;

  // Boolean field: Usage fault exception pending
              bit
    static const uint32_t SCB_SHCRS_USGFAULTPENDED = 1U << 12 ;

  // Boolean field: SVC call pending bit
    static const uint32_t SCB_SHCRS_SVCALLPENDED = 1U << 15 ;

  // Boolean field: Bus fault exception pending
              bit
    static const uint32_t SCB_SHCRS_BUSFAULTPENDED = 1U << 14 ;

  // Boolean field: Bus fault enable bit
    static const uint32_t SCB_SHCRS_BUSFAULTENA = 1U << 17 ;

  // Boolean field: Memory management fault exception
              pending bit
    static const uint32_t SCB_SHCRS_MEMFAULTPENDED = 1U << 13 ;

  // Boolean field: SysTick exception active
              bit
    static const uint32_t SCB_SHCRS_SYSTICKACT = 1U << 11 ;

  // Boolean field: Bus fault exception active
              bit
    static const uint32_t SCB_SHCRS_BUSFAULTACT = 1U << 1 ;

  // Boolean field: SVC call active bit
    static const uint32_t SCB_SHCRS_SVCALLACT = 1U << 7 ;

  // Boolean field: Memory management fault enable
              bit
    static const uint32_t SCB_SHCRS_MEMFAULTENA = 1U << 16 ;

  // Boolean field: Usage fault enable bit
    static const uint32_t SCB_SHCRS_USGFAULTENA = 1U << 18 ;

  // Boolean field: Usage fault exception active
              bit
    static const uint32_t SCB_SHCRS_USGFAULTACT = 1U << 3 ;

  // Boolean field: Debug monitor active bit
    static const uint32_t SCB_SHCRS_MONITORACT = 1U << 8 ;

//-------------------- Vector table offset register
#define SCB_VTOR(group) (* ((volatile uint32_t *) (kBaseAddress_SCB [group] + 0x8)))
#define SCB_VTOR (* ((volatile uint32_t *) (0xE000ED00 + 0x8)))

  // Field (width: 21 bits): Vector table base offset
              field
    inline uint32_t SCB_VTOR_TBLOFF (const uint32_t inValue) { return (inValue & 2097151U) << 9 ; }

//-------------------- Bus fault address register
#define SCB_BFAR(group) (* ((volatile uint32_t *) (kBaseAddress_SCB [group] + 0x38)))
#define SCB_BFAR (* ((volatile uint32_t *) (0xE000ED00 + 0x38)))

//-------------------- CPUID base register
#define SCB_CPUID(group) (* ((const volatile uint32_t *) (kBaseAddress_SCB [group] + 0x0)))
#define SCB_CPUID (* ((const volatile uint32_t *) (0xE000ED00 + 0x0)))

  // Field (width: 12 bits): Part number of the
              processor
    inline uint32_t SCB_CPUID_PartNo (const uint32_t inValue) { return (inValue & 4095U) << 4 ; }

  // Field (width: 4 bits): Variant number
    inline uint32_t SCB_CPUID_Variant (const uint32_t inValue) { return (inValue & 15U) << 20 ; }

  // Field (width: 4 bits): Reads as 0xF
    inline uint32_t SCB_CPUID_Constant (const uint32_t inValue) { return (inValue & 15U) << 16 ; }

  // Field (width: 8 bits): Implementer code
    inline uint32_t SCB_CPUID_Implementer (const uint32_t inValue) { return (inValue & 255U) << 24 ; }

  // Field (width: 4 bits): Revision number
    inline uint32_t SCB_CPUID_Revision (const uint32_t inValue) { return (inValue & 15U) << 0 ; }

//-------------------- Configurable fault status
          register
#define SCB_CFSR_UFSR_BFSR_MMFSR(group) (* ((volatile uint32_t *) (kBaseAddress_SCB [group] + 0x28)))
#define SCB_CFSR_UFSR_BFSR_MMFSR (* ((volatile uint32_t *) (0xE000ED00 + 0x28)))

  // Boolean field: Memory manager fault on unstacking for a
              return from exception
    static const uint32_t SCB_CFSR_UFSR_BFSR_MMFSR_MUNSTKERR = 1U << 3 ;

  // Boolean field: Bus fault on floating-point lazy state
              preservation
    static const uint32_t SCB_CFSR_UFSR_BFSR_MMFSR_LSPERR = 1U << 13 ;

  // Boolean field: Undefined instruction usage
              fault
    static const uint32_t SCB_CFSR_UFSR_BFSR_MMFSR_UNDEFINSTR = 1U << 16 ;

  // Boolean field: Divide by zero usage fault
    static const uint32_t SCB_CFSR_UFSR_BFSR_MMFSR_DIVBYZERO = 1U << 25 ;

  // Boolean field: Memory manager fault on stacking for
              exception entry.
    static const uint32_t SCB_CFSR_UFSR_BFSR_MMFSR_MSTKERR = 1U << 4 ;

  // Boolean field: Invalid state usage fault
    static const uint32_t SCB_CFSR_UFSR_BFSR_MMFSR_INVSTATE = 1U << 17 ;

  // Boolean field: Instruction access violation
              flag
    static const uint32_t SCB_CFSR_UFSR_BFSR_MMFSR_IACCVIOL = 1U << 1 ;

  // Boolean field: Bus fault on stacking for exception
              entry
    static const uint32_t SCB_CFSR_UFSR_BFSR_MMFSR_STKERR = 1U << 12 ;

  // Boolean field: Bus fault on unstacking for a return
              from exception
    static const uint32_t SCB_CFSR_UFSR_BFSR_MMFSR_UNSTKERR = 1U << 11 ;

  // Boolean field: Instruction bus error
    static const uint32_t SCB_CFSR_UFSR_BFSR_MMFSR_IBUSERR = 1U << 8 ;

  // Boolean field: Precise data bus error
    static const uint32_t SCB_CFSR_UFSR_BFSR_MMFSR_PRECISERR = 1U << 9 ;

  // Boolean field: MLSPERR
    static const uint32_t SCB_CFSR_UFSR_BFSR_MMFSR_MLSPERR = 1U << 5 ;

  // Boolean field: Invalid PC load usage
              fault
    static const uint32_t SCB_CFSR_UFSR_BFSR_MMFSR_INVPC = 1U << 18 ;

  // Boolean field: No coprocessor usage
              fault.
    static const uint32_t SCB_CFSR_UFSR_BFSR_MMFSR_NOCP = 1U << 19 ;

  // Boolean field: Memory Management Fault Address Register
              (MMAR) valid flag
    static const uint32_t SCB_CFSR_UFSR_BFSR_MMFSR_MMARVALID = 1U << 7 ;

  // Boolean field: Bus Fault Address Register (BFAR) valid
              flag
    static const uint32_t SCB_CFSR_UFSR_BFSR_MMFSR_BFARVALID = 1U << 15 ;

  // Boolean field: Unaligned access usage
              fault
    static const uint32_t SCB_CFSR_UFSR_BFSR_MMFSR_UNALIGNED = 1U << 24 ;

  // Boolean field: Imprecise data bus error
    static const uint32_t SCB_CFSR_UFSR_BFSR_MMFSR_IMPRECISERR = 1U << 10 ;

//-------------------- System control register
#define SCB_SCR(group) (* ((volatile uint32_t *) (kBaseAddress_SCB [group] + 0x10)))
#define SCB_SCR (* ((volatile uint32_t *) (0xE000ED00 + 0x10)))

  // Boolean field: SLEEPONEXIT
    static const uint32_t SCB_SCR_SLEEPONEXIT = 1U << 1 ;

  // Boolean field: SLEEPDEEP
    static const uint32_t SCB_SCR_SLEEPDEEP = 1U << 2 ;

  // Boolean field: Send Event on Pending bit
    static const uint32_t SCB_SCR_SEVEONPEND = 1U << 4 ;

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
// Peripheral group SDIO
//                SDMMC at 0x40012800
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

static const uint32_t kBaseAddress_SDIO [1] = {0x40012800} ;

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

//-------------------- command response register
#define SDIO_RESPCMD(group) (* ((const volatile uint32_t *) (kBaseAddress_SDIO [group] + 0x10)))
#define SDMMC_RESPCMD (* ((const volatile uint32_t *) (0x40012800 + 0x10)))

  // Field (width: 6 bits): Response command index
    inline uint32_t SDIO_RESPCMD_RESPCMD (const uint32_t inValue) { return (inValue & 63U) << 0 ; }

//-------------------- data control register
#define SDIO_DCTRL(group) (* ((volatile uint32_t *) (kBaseAddress_SDIO [group] + 0x2C)))
#define SDMMC_DCTRL (* ((volatile uint32_t *) (0x40012800 + 0x2C)))

  // Boolean field: DMA enable bit
    static const uint32_t SDIO_DCTRL_DMAEN = 1U << 3 ;

  // Boolean field: SD I/O enable functions
    static const uint32_t SDIO_DCTRL_SDIOEN = 1U << 11 ;

  // Boolean field: Read wait start
    static const uint32_t SDIO_DCTRL_RWSTART = 1U << 8 ;

  // Boolean field: DTEN
    static const uint32_t SDIO_DCTRL_DTEN = 1U << 0 ;

  // Boolean field: Read wait mode
    static const uint32_t SDIO_DCTRL_RWMOD = 1U << 10 ;

  // Boolean field: Data transfer mode selection 1: Stream
              or SDIO multibyte data transfer
    static const uint32_t SDIO_DCTRL_DTMODE = 1U << 2 ;

  // Boolean field: Data transfer direction
              selection
    static const uint32_t SDIO_DCTRL_DTDIR = 1U << 1 ;

  // Field (width: 4 bits): Data block size
    inline uint32_t SDIO_DCTRL_DBLOCKSIZE (const uint32_t inValue) { return (inValue & 15U) << 4 ; }

  // Boolean field: Read wait stop
    static const uint32_t SDIO_DCTRL_RWSTOP = 1U << 9 ;

//-------------------- data length register
#define SDIO_DLEN(group) (* ((volatile uint32_t *) (kBaseAddress_SDIO [group] + 0x28)))
#define SDMMC_DLEN (* ((volatile uint32_t *) (0x40012800 + 0x28)))

  // Field (width: 25 bits): Data length value
    inline uint32_t SDIO_DLEN_DATALENGTH (const uint32_t inValue) { return (inValue & 33554431U) << 0 ; }

//-------------------- power control register
#define SDIO_POWER(group) (* ((volatile uint32_t *) (kBaseAddress_SDIO [group] + 0x0)))
#define SDMMC_POWER (* ((volatile uint32_t *) (0x40012800 + 0x0)))

  // Field (width: 2 bits): PWRCTRL
    inline uint32_t SDIO_POWER_PWRCTRL (const uint32_t inValue) { return (inValue & 3U) << 0 ; }

//-------------------- data counter register
#define SDIO_DCOUNT(group) (* ((const volatile uint32_t *) (kBaseAddress_SDIO [group] + 0x30)))
#define SDMMC_DCOUNT (* ((const volatile uint32_t *) (0x40012800 + 0x30)))

  // Field (width: 25 bits): Data count value
    inline uint32_t SDIO_DCOUNT_DATACOUNT (const uint32_t inValue) { return (inValue & 33554431U) << 0 ; }

//-------------------- command register
#define SDIO_CMD(group) (* ((volatile uint32_t *) (kBaseAddress_SDIO [group] + 0xC)))
#define SDMMC_CMD (* ((volatile uint32_t *) (0x40012800 + 0xC)))

  // Boolean field: CPSM waits for interrupt
              request
    static const uint32_t SDIO_CMD_WAITINT = 1U << 8 ;

  // Field (width: 6 bits): Command index
    inline uint32_t SDIO_CMD_CMDINDEX (const uint32_t inValue) { return (inValue & 63U) << 0 ; }

  // Boolean field: not Interrupt Enable
    static const uint32_t SDIO_CMD_nIEN = 1U << 13 ;

  // Boolean field: CPSM Waits for ends of data transfer
              (CmdPend internal signal)
    static const uint32_t SDIO_CMD_WAITPEND = 1U << 9 ;

  // Boolean field: CE-ATA command
    static const uint32_t SDIO_CMD_CE_ATACMD = 1U << 14 ;

  // Boolean field: Command path state machine (CPSM) Enable
              bit
    static const uint32_t SDIO_CMD_CPSMEN = 1U << 10 ;

  // Boolean field: Enable CMD completion
    static const uint32_t SDIO_CMD_ENCMDcompl = 1U << 12 ;

  // Boolean field: SD I/O suspend command
    static const uint32_t SDIO_CMD_SDIOSuspend = 1U << 11 ;

  // Field (width: 2 bits): Wait for response bits
    inline uint32_t SDIO_CMD_WAITRESP (const uint32_t inValue) { return (inValue & 3U) << 6 ; }

//-------------------- mask register
#define SDIO_MASK(group) (* ((volatile uint32_t *) (kBaseAddress_SDIO [group] + 0x3C)))
#define SDMMC_MASK (* ((volatile uint32_t *) (0x40012800 + 0x3C)))

  // Boolean field: Data transmit acting interrupt
              enable
    static const uint32_t SDIO_MASK_TXACTIE = 1U << 12 ;

  // Boolean field: Tx FIFO empty interrupt
              enable
    static const uint32_t SDIO_MASK_TXFIFOEIE = 1U << 18 ;

  // Boolean field: Command acting interrupt
              enable
    static const uint32_t SDIO_MASK_CMDACTIE = 1U << 11 ;

  // Boolean field: Data end interrupt enable
    static const uint32_t SDIO_MASK_DATAENDIE = 1U << 8 ;

  // Boolean field: Command CRC fail interrupt
              enable
    static const uint32_t SDIO_MASK_CCRCFAILIE = 1U << 0 ;

  // Boolean field: Data CRC fail interrupt
              enable
    static const uint32_t SDIO_MASK_DCRCFAILIE = 1U << 1 ;

  // Boolean field: CE-ATA command completion signal
              received interrupt enable
    static const uint32_t SDIO_MASK_CEATAENDIE = 1U << 23 ;

  // Boolean field: SDIO mode interrupt received interrupt
              enable
    static const uint32_t SDIO_MASK_SDIOITIE = 1U << 22 ;

  // Boolean field: Rx FIFO empty interrupt
              enable
    static const uint32_t SDIO_MASK_RXFIFOEIE = 1U << 19 ;

  // Boolean field: Tx FIFO full interrupt
              enable
    static const uint32_t SDIO_MASK_TXFIFOFIE = 1U << 16 ;

  // Boolean field: Command timeout interrupt
              enable
    static const uint32_t SDIO_MASK_CTIMEOUTIE = 1U << 2 ;

  // Boolean field: Rx FIFO overrun error interrupt
              enable
    static const uint32_t SDIO_MASK_RXOVERRIE = 1U << 5 ;

  // Boolean field: Data available in Rx FIFO interrupt
              enable
    static const uint32_t SDIO_MASK_RXDAVLIE = 1U << 21 ;

  // Boolean field: Command response received interrupt
              enable
    static const uint32_t SDIO_MASK_CMDRENDIE = 1U << 6 ;

  // Boolean field: Rx FIFO full interrupt
              enable
    static const uint32_t SDIO_MASK_RXFIFOFIE = 1U << 17 ;

  // Boolean field: Command sent interrupt
              enable
    static const uint32_t SDIO_MASK_CMDSENTIE = 1U << 7 ;

  // Boolean field: Tx FIFO half empty interrupt
              enable
    static const uint32_t SDIO_MASK_TXFIFOHEIE = 1U << 14 ;

  // Boolean field: Data timeout interrupt
              enable
    static const uint32_t SDIO_MASK_DTIMEOUTIE = 1U << 3 ;

  // Boolean field: Rx FIFO half full interrupt
              enable
    static const uint32_t SDIO_MASK_RXFIFOHFIE = 1U << 15 ;

  // Boolean field: Data available in Tx FIFO interrupt
              enable
    static const uint32_t SDIO_MASK_TXDAVLIE = 1U << 20 ;

  // Boolean field: Data block end interrupt
              enable
    static const uint32_t SDIO_MASK_DBCKENDIE = 1U << 10 ;

  // Boolean field: Start bit error interrupt
              enable
    static const uint32_t SDIO_MASK_STBITERRIE = 1U << 9 ;

  // Boolean field: Tx FIFO underrun error interrupt
              enable
    static const uint32_t SDIO_MASK_TXUNDERRIE = 1U << 4 ;

  // Boolean field: Data receive acting interrupt
              enable
    static const uint32_t SDIO_MASK_RXACTIE = 1U << 13 ;

//-------------------- data FIFO register
#define SDIO_FIFO(group) (* ((volatile uint32_t *) (kBaseAddress_SDIO [group] + 0x80)))
#define SDMMC_FIFO (* ((volatile uint32_t *) (0x40012800 + 0x80)))

//-------------------- interrupt clear register
#define SDIO_ICR(group) (* ((volatile uint32_t *) (kBaseAddress_SDIO [group] + 0x38)))
#define SDMMC_ICR (* ((volatile uint32_t *) (0x40012800 + 0x38)))

  // Boolean field: CMDREND flag clear bit
    static const uint32_t SDIO_ICR_CMDRENDC = 1U << 6 ;

  // Boolean field: DCRCFAIL flag clear bit
    static const uint32_t SDIO_ICR_DCRCFAILC = 1U << 1 ;

  // Boolean field: RXOVERR flag clear bit
    static const uint32_t SDIO_ICR_RXOVERRC = 1U << 5 ;

  // Boolean field: SDIOIT flag clear bit
    static const uint32_t SDIO_ICR_SDIOITC = 1U << 22 ;

  // Boolean field: CCRCFAIL flag clear bit
    static const uint32_t SDIO_ICR_CCRCFAILC = 1U << 0 ;

  // Boolean field: DTIMEOUT flag clear bit
    static const uint32_t SDIO_ICR_DTIMEOUTC = 1U << 3 ;

  // Boolean field: DBCKEND flag clear bit
    static const uint32_t SDIO_ICR_DBCKENDC = 1U << 10 ;

  // Boolean field: STBITERR flag clear bit
    static const uint32_t SDIO_ICR_STBITERRC = 1U << 9 ;

  // Boolean field: TXUNDERR flag clear bit
    static const uint32_t SDIO_ICR_TXUNDERRC = 1U << 4 ;

  // Boolean field: DATAEND flag clear bit
    static const uint32_t SDIO_ICR_DATAENDC = 1U << 8 ;

  // Boolean field: CEATAEND flag clear bit
    static const uint32_t SDIO_ICR_CEATAENDC = 1U << 23 ;

  // Boolean field: CMDSENT flag clear bit
    static const uint32_t SDIO_ICR_CMDSENTC = 1U << 7 ;

  // Boolean field: CTIMEOUT flag clear bit
    static const uint32_t SDIO_ICR_CTIMEOUTC = 1U << 2 ;

//-------------------- argument register
#define SDIO_ARG(group) (* ((volatile uint32_t *) (kBaseAddress_SDIO [group] + 0x8)))
#define SDMMC_ARG (* ((volatile uint32_t *) (0x40012800 + 0x8)))

//-------------------- FIFO counter register
#define SDIO_FIFOCNT(group) (* ((const volatile uint32_t *) (kBaseAddress_SDIO [group] + 0x48)))
#define SDMMC_FIFOCNT (* ((const volatile uint32_t *) (0x40012800 + 0x48)))

  // Field (width: 24 bits): Remaining number of words to be written
              to or read from the FIFO
    inline uint32_t SDIO_FIFOCNT_FIFOCOUNT (const uint32_t inValue) { return (inValue & 16777215U) << 0 ; }

//-------------------- data timer register
#define SDIO_DTIMER(group) (* ((volatile uint32_t *) (kBaseAddress_SDIO [group] + 0x24)))
#define SDMMC_DTIMER (* ((volatile uint32_t *) (0x40012800 + 0x24)))

//-------------------- SDI clock control register
#define SDIO_CLKCR(group) (* ((volatile uint32_t *) (kBaseAddress_SDIO [group] + 0x4)))
#define SDMMC_CLKCR (* ((volatile uint32_t *) (0x40012800 + 0x4)))

  // Boolean field: HW Flow Control enable
    static const uint32_t SDIO_CLKCR_HWFC_EN = 1U << 14 ;

  // Boolean field: Power saving configuration
              bit
    static const uint32_t SDIO_CLKCR_PWRSAV = 1U << 9 ;

  // Boolean field: SDIO_CK dephasing selection
              bit
    static const uint32_t SDIO_CLKCR_NEGEDGE = 1U << 13 ;

  // Field (width: 2 bits): Wide bus mode enable bit
    inline uint32_t SDIO_CLKCR_WIDBUS (const uint32_t inValue) { return (inValue & 3U) << 11 ; }

  // Boolean field: Clock enable bit
    static const uint32_t SDIO_CLKCR_CLKEN = 1U << 8 ;

  // Field (width: 8 bits): Clock divide factor
    inline uint32_t SDIO_CLKCR_CLKDIV (const uint32_t inValue) { return (inValue & 255U) << 0 ; }

  // Boolean field: Clock divider bypass enable
              bit
    static const uint32_t SDIO_CLKCR_BYPASS = 1U << 10 ;

//-------------------- response 1..4 register
#define SDIO_RESP4(group) (* ((const volatile uint32_t *) (kBaseAddress_SDIO [group] + 0x20)))
#define SDMMC_RESP4 (* ((const volatile uint32_t *) (0x40012800 + 0x20)))

//-------------------- response 1..4 register
#define SDIO_RESP3(group) (* ((const volatile uint32_t *) (kBaseAddress_SDIO [group] + 0x1C)))
#define SDMMC_RESP3 (* ((const volatile uint32_t *) (0x40012800 + 0x1C)))

//-------------------- response 1..4 register
#define SDIO_RESP2(group) (* ((const volatile uint32_t *) (kBaseAddress_SDIO [group] + 0x18)))
#define SDMMC_RESP2 (* ((const volatile uint32_t *) (0x40012800 + 0x18)))

//-------------------- response 1..4 register
#define SDIO_RESP1(group) (* ((const volatile uint32_t *) (kBaseAddress_SDIO [group] + 0x14)))
#define SDMMC_RESP1 (* ((const volatile uint32_t *) (0x40012800 + 0x14)))

//-------------------- status register
#define SDIO_STA(group) (* ((const volatile uint32_t *) (kBaseAddress_SDIO [group] + 0x34)))
#define SDMMC_STA (* ((const volatile uint32_t *) (0x40012800 + 0x34)))

  // Boolean field: Transmit FIFO underrun
              error
    static const uint32_t SDIO_STA_TXUNDERR = 1U << 4 ;

  // Boolean field: Data block sent/received (CRC check
              failed)
    static const uint32_t SDIO_STA_DCRCFAIL = 1U << 1 ;

  // Boolean field: Command response received (CRC check
              failed)
    static const uint32_t SDIO_STA_CCRCFAIL = 1U << 0 ;

  // Boolean field: Receive FIFO half full: there are at
              least 8 words in the FIFO
    static const uint32_t SDIO_STA_RXFIFOHF = 1U << 15 ;

  // Boolean field: SDIO interrupt received
    static const uint32_t SDIO_STA_SDIOIT = 1U << 22 ;

  // Boolean field: Command response received (CRC check
              passed)
    static const uint32_t SDIO_STA_CMDREND = 1U << 6 ;

  // Boolean field: CE-ATA command completion signal
              received for CMD61
    static const uint32_t SDIO_STA_CEATAEND = 1U << 23 ;

  // Boolean field: Transmit FIFO half empty: at least 8
              words can be written into the FIFO
    static const uint32_t SDIO_STA_TXFIFOHE = 1U << 14 ;

  // Boolean field: Data timeout
    static const uint32_t SDIO_STA_DTIMEOUT = 1U << 3 ;

  // Boolean field: Received FIFO overrun
              error
    static const uint32_t SDIO_STA_RXOVERR = 1U << 5 ;

  // Boolean field: Command transfer in
              progress
    static const uint32_t SDIO_STA_CMDACT = 1U << 11 ;

  // Boolean field: Data available in receive
              FIFO
    static const uint32_t SDIO_STA_RXDAVL = 1U << 21 ;

  // Boolean field: Data block sent/received (CRC check
              passed)
    static const uint32_t SDIO_STA_DBCKEND = 1U << 10 ;

  // Boolean field: Data transmit in progress
    static const uint32_t SDIO_STA_TXACT = 1U << 12 ;

  // Boolean field: Start bit not detected on all data
              signals in wide bus mode
    static const uint32_t SDIO_STA_STBITERR = 1U << 9 ;

  // Boolean field: Receive FIFO full
    static const uint32_t SDIO_STA_RXFIFOF = 1U << 17 ;

  // Boolean field: Receive FIFO empty
    static const uint32_t SDIO_STA_RXFIFOE = 1U << 19 ;

  // Boolean field: Data available in transmit
              FIFO
    static const uint32_t SDIO_STA_TXDAVL = 1U << 20 ;

  // Boolean field: Transmit FIFO empty
    static const uint32_t SDIO_STA_TXFIFOE = 1U << 18 ;

  // Boolean field: Transmit FIFO full
    static const uint32_t SDIO_STA_TXFIFOF = 1U << 16 ;

  // Boolean field: Command response timeout
    static const uint32_t SDIO_STA_CTIMEOUT = 1U << 2 ;

  // Boolean field: Command sent (no response
              required)
    static const uint32_t SDIO_STA_CMDSENT = 1U << 7 ;

  // Boolean field: Data receive in progress
    static const uint32_t SDIO_STA_RXACT = 1U << 13 ;

  // Boolean field: Data end (data counter, SDIDCOUNT, is
              zero)
    static const uint32_t SDIO_STA_DATAEND = 1U << 8 ;

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
// Peripheral group SPI
//                SPI1 at 0x40013000
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

static const uint32_t kBaseAddress_SPI [1] = {0x40013000} ;

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

//-------------------- control register 2
#define SPI_CR2(group) (* ((volatile uint32_t *) (kBaseAddress_SPI [group] + 0x4)))
#define SPI1_CR2 (* ((volatile uint32_t *) (0x40013000 + 0x4)))

  // Boolean field: Last DMA transfer for
              reception
    static const uint32_t SPI_CR2_LDMA_RX = 1U << 13 ;

  // Boolean field: Rx buffer DMA enable
    static const uint32_t SPI_CR2_RXDMAEN = 1U << 0 ;

  // Boolean field: Frame format
    static const uint32_t SPI_CR2_FRF = 1U << 4 ;

  // Boolean field: Last DMA transfer for
              transmission
    static const uint32_t SPI_CR2_LDMA_TX = 1U << 14 ;

  // Boolean field: Error interrupt enable
    static const uint32_t SPI_CR2_ERRIE = 1U << 5 ;

  // Boolean field: SS output enable
    static const uint32_t SPI_CR2_SSOE = 1U << 2 ;

  // Boolean field: Tx buffer DMA enable
    static const uint32_t SPI_CR2_TXDMAEN = 1U << 1 ;

  // Boolean field: RX buffer not empty interrupt
              enable
    static const uint32_t SPI_CR2_RXNEIE = 1U << 6 ;

  // Boolean field: Tx buffer empty interrupt
              enable
    static const uint32_t SPI_CR2_TXEIE = 1U << 7 ;

  // Boolean field: FIFO reception threshold
    static const uint32_t SPI_CR2_FRXTH = 1U << 12 ;

  // Boolean field: NSS pulse management
    static const uint32_t SPI_CR2_NSSP = 1U << 3 ;

  // Field (width: 4 bits): Data size
    inline uint32_t SPI_CR2_DS (const uint32_t inValue) { return (inValue & 15U) << 8 ; }

//-------------------- control register 1
#define SPI_CR1(group) (* ((volatile uint32_t *) (kBaseAddress_SPI [group] + 0x0)))
#define SPI1_CR1 (* ((volatile uint32_t *) (0x40013000 + 0x0)))

  // Boolean field: Frame format
    static const uint32_t SPI_CR1_LSBFIRST = 1U << 7 ;

  // Boolean field: Clock polarity
    static const uint32_t SPI_CR1_CPOL = 1U << 1 ;

  // Boolean field: Output enable in bidirectional
              mode
    static const uint32_t SPI_CR1_BIDIOE = 1U << 14 ;

  // Boolean field: Clock phase
    static const uint32_t SPI_CR1_CPHA = 1U << 0 ;

  // Boolean field: Receive only
    static const uint32_t SPI_CR1_RXONLY = 1U << 10 ;

  // Boolean field: CRC transfer next
    static const uint32_t SPI_CR1_CRCNEXT = 1U << 12 ;

  // Boolean field: Software slave management
    static const uint32_t SPI_CR1_SSM = 1U << 9 ;

  // Boolean field: Hardware CRC calculation
              enable
    static const uint32_t SPI_CR1_CRCEN = 1U << 13 ;

  // Boolean field: Internal slave select
    static const uint32_t SPI_CR1_SSI = 1U << 8 ;

  // Boolean field: Master selection
    static const uint32_t SPI_CR1_MSTR = 1U << 2 ;

  // Field (width: 3 bits): Baud rate control
    inline uint32_t SPI_CR1_BR (const uint32_t inValue) { return (inValue & 7U) << 3 ; }

  // Boolean field: Bidirectional data mode
              enable
    static const uint32_t SPI_CR1_BIDIMODE = 1U << 15 ;

  // Boolean field: Data frame format
    static const uint32_t SPI_CR1_DFF = 1U << 11 ;

  // Boolean field: SPI enable
    static const uint32_t SPI_CR1_SPE = 1U << 6 ;

//-------------------- CRC polynomial register
#define SPI_CRCPR(group) (* ((volatile uint32_t *) (kBaseAddress_SPI [group] + 0x10)))
#define SPI1_CRCPR (* ((volatile uint32_t *) (0x40013000 + 0x10)))

  // Field (width: 16 bits): CRC polynomial register
    inline uint32_t SPI_CRCPR_CRCPOLY (const uint32_t inValue) { return (inValue & 65535U) << 0 ; }

//-------------------- status register
#define SPI_SR(group) (* ((const volatile uint32_t *) (kBaseAddress_SPI [group] + 0x8)))
#define SPI1_SR (* ((const volatile uint32_t *) (0x40013000 + 0x8)))

  // Boolean field: Overrun flag
    static const uint32_t SPI_SR_OVR = 1U << 6 ;

  // Boolean field: TI frame format error
    static const uint32_t SPI_SR_TIFRFE = 1U << 8 ;

  // Boolean field: Busy flag
    static const uint32_t SPI_SR_BSY = 1U << 7 ;

  // Boolean field: Transmit buffer empty
    static const uint32_t SPI_SR_TXE = 1U << 1 ;

  // Boolean field: Receive buffer not empty
    static const uint32_t SPI_SR_RXNE = 1U << 0 ;

  // Field (width: 2 bits): FIFO transmission level
    inline uint32_t SPI_SR_FTLVL (const uint32_t inValue) { return (inValue & 3U) << 11 ; }

  // Boolean field: CRC error flag
    static const uint32_t SPI_SR_CRCERR = 1U << 4 ;

  // Boolean field: Mode fault
    static const uint32_t SPI_SR_MODF = 1U << 5 ;

  // Field (width: 2 bits): FIFO reception level
    inline uint32_t SPI_SR_FRLVL (const uint32_t inValue) { return (inValue & 3U) << 9 ; }

//-------------------- data register
#define SPI_DR(group) (* ((volatile uint32_t *) (kBaseAddress_SPI [group] + 0xC)))
#define SPI1_DR (* ((volatile uint32_t *) (0x40013000 + 0xC)))

  // Field (width: 16 bits): Data register
    inline uint32_t SPI_DR_DR (const uint32_t inValue) { return (inValue & 65535U) << 0 ; }

//-------------------- TX CRC register
#define SPI_TXCRCR(group) (* ((const volatile uint32_t *) (kBaseAddress_SPI [group] + 0x18)))
#define SPI1_TXCRCR (* ((const volatile uint32_t *) (0x40013000 + 0x18)))

  // Field (width: 16 bits): Tx CRC register
    inline uint32_t SPI_TXCRCR_TxCRC (const uint32_t inValue) { return (inValue & 65535U) << 0 ; }

//-------------------- RX CRC register
#define SPI_RXCRCR(group) (* ((const volatile uint32_t *) (kBaseAddress_SPI [group] + 0x14)))
#define SPI1_RXCRCR (* ((const volatile uint32_t *) (0x40013000 + 0x14)))

  // Field (width: 16 bits): Rx CRC register
    inline uint32_t SPI_RXCRCR_RxCRC (const uint32_t inValue) { return (inValue & 65535U) << 0 ; }

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
// Peripheral group STK
//                STK at 0xE000E010
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

static const uint32_t kBaseAddress_STK [1] = {0xE000E010} ;

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

//-------------------- SysTick reload value register
#define STK_LOAD(group) (* ((volatile uint32_t *) (kBaseAddress_STK [group] + 0x4)))
#define STK_LOAD (* ((volatile uint32_t *) (0xE000E010 + 0x4)))

  // Field (width: 24 bits): RELOAD value
    inline uint32_t STK_LOAD_RELOAD (const uint32_t inValue) { return (inValue & 16777215U) << 0 ; }

//-------------------- SysTick calibration value
          register
#define STK_CALIB(group) (* ((volatile uint32_t *) (kBaseAddress_STK [group] + 0xC)))
#define STK_CALIB (* ((volatile uint32_t *) (0xE000E010 + 0xC)))

  // Field (width: 24 bits): Calibration value
    inline uint32_t STK_CALIB_TENMS (const uint32_t inValue) { return (inValue & 16777215U) << 0 ; }

  // Boolean field: SKEW flag: Indicates whether the TENMS
              value is exact
    static const uint32_t STK_CALIB_SKEW = 1U << 30 ;

  // Boolean field: NOREF flag. Reads as zero
    static const uint32_t STK_CALIB_NOREF = 1U << 31 ;

//-------------------- SysTick current value register
#define STK_VAL(group) (* ((volatile uint32_t *) (kBaseAddress_STK [group] + 0x8)))
#define STK_VAL (* ((volatile uint32_t *) (0xE000E010 + 0x8)))

  // Field (width: 24 bits): Current counter value
    inline uint32_t STK_VAL_CURRENT (const uint32_t inValue) { return (inValue & 16777215U) << 0 ; }

//-------------------- SysTick control and status
          register
#define STK_CTRL(group) (* ((volatile uint32_t *) (kBaseAddress_STK [group] + 0x0)))
#define STK_CTRL (* ((volatile uint32_t *) (0xE000E010 + 0x0)))

  // Boolean field: Clock source selection
    static const uint32_t STK_CTRL_CLKSOURCE = 1U << 2 ;

  // Boolean field: Counter enable
    static const uint32_t STK_CTRL_ENABLE = 1U << 0 ;

  // Boolean field: COUNTFLAG
    static const uint32_t STK_CTRL_COUNTFLAG = 1U << 16 ;

  // Boolean field: SysTick exception request
              enable
    static const uint32_t STK_CTRL_TICKINT = 1U << 1 ;

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
// Peripheral group SWPMI
//                SWPMI1 at 0x40008800
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

static const uint32_t kBaseAddress_SWPMI [1] = {0x40008800} ;

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

//-------------------- SWPMI Receive data register
#define SWPMI_RDR(group) (* ((const volatile uint32_t *) (kBaseAddress_SWPMI [group] + 0x20)))
#define SWPMI1_RDR (* ((const volatile uint32_t *) (0x40008800 + 0x20)))

//-------------------- SWPMI Interrupt and Status
          register
#define SWPMI_ISR(group) (* ((const volatile uint32_t *) (kBaseAddress_SWPMI [group] + 0xC)))
#define SWPMI1_ISR (* ((const volatile uint32_t *) (0x40008800 + 0xC)))

  // Boolean field: Slave resume flag
    static const uint32_t SWPMI_ISR_SRF = 1U << 8 ;

  // Boolean field: Transmit data register
              empty
    static const uint32_t SWPMI_ISR_TXE = 1U << 6 ;

  // Boolean field: Receive overrun error flag
    static const uint32_t SWPMI_ISR_RXOVRF = 1U << 3 ;

  // Boolean field: Receive data register not
              empty
    static const uint32_t SWPMI_ISR_RXNE = 1U << 5 ;

  // Boolean field: Transmit buffer empty flag
    static const uint32_t SWPMI_ISR_TXBEF = 1U << 1 ;

  // Boolean field: Receive CRC error flag
    static const uint32_t SWPMI_ISR_RXBERF = 1U << 2 ;

  // Boolean field: SUSPEND flag
    static const uint32_t SWPMI_ISR_SUSP = 1U << 9 ;

  // Boolean field: DEACTIVATED flag
    static const uint32_t SWPMI_ISR_DEACTF = 1U << 10 ;

  // Boolean field: Transmit underrun error
              flag
    static const uint32_t SWPMI_ISR_TXUNRF = 1U << 4 ;

  // Boolean field: Transfer complete flag
    static const uint32_t SWPMI_ISR_TCF = 1U << 7 ;

  // Boolean field: Receive buffer full flag
    static const uint32_t SWPMI_ISR_RXBFF = 1U << 0 ;

//-------------------- SWPMI Interrupt Enable
          register
#define SWPMI_IER(group) (* ((volatile uint32_t *) (kBaseAddress_SWPMI [group] + 0x14)))
#define SWPMI1_IER (* ((volatile uint32_t *) (0x40008800 + 0x14)))

  // Boolean field: Receive overrun error interrupt
              enable
    static const uint32_t SWPMI_IER_RXOVRIE = 1U << 3 ;

  // Boolean field: Transmit buffer empty interrupt
              enable
    static const uint32_t SWPMI_IER_TXBEIE = 1U << 1 ;

  // Boolean field: Receive CRC error interrupt
              enable
    static const uint32_t SWPMI_IER_RXBERIE = 1U << 2 ;

  // Boolean field: Slave resume interrupt
              enable
    static const uint32_t SWPMI_IER_SRIE = 1U << 8 ;

  // Boolean field: Transmit underrun error interrupt
              enable
    static const uint32_t SWPMI_IER_TXUNRIE = 1U << 4 ;

  // Boolean field: Transmit interrupt enable
    static const uint32_t SWPMI_IER_TIE = 1U << 6 ;

  // Boolean field: Receive buffer full interrupt
              enable
    static const uint32_t SWPMI_IER_RXBFIE = 1U << 0 ;

  // Boolean field: Receive interrupt enable
    static const uint32_t SWPMI_IER_RIE = 1U << 5 ;

  // Boolean field: Transmit complete interrupt
              enable
    static const uint32_t SWPMI_IER_TCIE = 1U << 7 ;

//-------------------- SWPMI Bitrate register
#define SWPMI_BRR(group) (* ((volatile uint32_t *) (kBaseAddress_SWPMI [group] + 0x4)))
#define SWPMI1_BRR (* ((volatile uint32_t *) (0x40008800 + 0x4)))

  // Field (width: 6 bits): Bitrate prescaler
    inline uint32_t SWPMI_BRR_BR (const uint32_t inValue) { return (inValue & 63U) << 0 ; }

//-------------------- SWPMI Interrupt Flag Clear
          register
#define SWPMI_ICR(group) (* ((volatile uint32_t *) (kBaseAddress_SWPMI [group] + 0x10)))
#define SWPMI1_ICR (* ((volatile uint32_t *) (0x40008800 + 0x10)))

  // Boolean field: Clear transmit underrun error
              flag
    static const uint32_t SWPMI_ICR_CTXUNRF = 1U << 4 ;

  // Boolean field: Clear receive overrun error
              flag
    static const uint32_t SWPMI_ICR_CRXOVRF = 1U << 3 ;

  // Boolean field: Clear receive buffer full
              flag
    static const uint32_t SWPMI_ICR_CRXBFF = 1U << 0 ;

  // Boolean field: Clear receive CRC error
              flag
    static const uint32_t SWPMI_ICR_CRXBERF = 1U << 2 ;

  // Boolean field: Clear slave resume flag
    static const uint32_t SWPMI_ICR_CSRF = 1U << 8 ;

  // Boolean field: Clear transmit buffer empty
              flag
    static const uint32_t SWPMI_ICR_CTXBEF = 1U << 1 ;

  // Boolean field: Clear transfer complete
              flag
    static const uint32_t SWPMI_ICR_CTCF = 1U << 7 ;

//-------------------- SWPMI Configuration/Control
          register
#define SWPMI_CR(group) (* ((volatile uint32_t *) (kBaseAddress_SWPMI [group] + 0x0)))
#define SWPMI1_CR (* ((volatile uint32_t *) (0x40008800 + 0x0)))

  // Boolean field: Transmission buffering
              mode
    static const uint32_t SWPMI_CR_TXMODE = 1U << 3 ;

  // Boolean field: Single wire protocol master interface
              enable
    static const uint32_t SWPMI_CR_SWPME = 1U << 5 ;

  // Boolean field: Reception DMA enable
    static const uint32_t SWPMI_CR_RXDMA = 1U << 0 ;

  // Boolean field: Loopback mode enable
    static const uint32_t SWPMI_CR_LPBK = 1U << 4 ;

  // Boolean field: Single wire protocol master interface
              deactivate
    static const uint32_t SWPMI_CR_DEACT = 1U << 10 ;

  // Boolean field: Transmission DMA enable
    static const uint32_t SWPMI_CR_TXDMA = 1U << 1 ;

  // Boolean field: Reception buffering mode
    static const uint32_t SWPMI_CR_RXMODE = 1U << 2 ;

//-------------------- SWPMI Transmit data register
#define SWPMI_TDR(group) (* ((volatile uint32_t *) (kBaseAddress_SWPMI [group] + 0x1C)))
#define SWPMI1_TDR (* ((volatile uint32_t *) (0x40008800 + 0x1C)))

//-------------------- SWPMI Receive Frame Length
          register
#define SWPMI_RFL(group) (* ((const volatile uint32_t *) (kBaseAddress_SWPMI [group] + 0x18)))
#define SWPMI1_RFL (* ((const volatile uint32_t *) (0x40008800 + 0x18)))

  // Field (width: 5 bits): Receive frame length
    inline uint32_t SWPMI_RFL_RFL (const uint32_t inValue) { return (inValue & 31U) << 0 ; }

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
// Peripheral group SYSCFG
//                SYSCFG at 0x40010000
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

static const uint32_t kBaseAddress_SYSCFG [1] = {0x40010000} ;

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

//-------------------- SCSR
#define SYSCFG_SCSR(group) (* ((const volatile uint32_t *) (kBaseAddress_SYSCFG [group] + 0x18)))
#define SYSCFG_SCSR (* ((const volatile uint32_t *) (0x40010000 + 0x18)))

  // Boolean field: SRAM2 Erase
    static const uint32_t SYSCFG_SCSR_SRAM2ER = 1U << 0 ;

  // Boolean field: SRAM2 busy by erase
              operation
    static const uint32_t SYSCFG_SCSR_SRAM2BSY = 1U << 1 ;

//-------------------- SKR
#define SYSCFG_SKR(group) (* ((volatile uint32_t *) (kBaseAddress_SYSCFG [group] + 0x24)))
#define SYSCFG_SKR (* ((volatile uint32_t *) (0x40010000 + 0x24)))

  // Field (width: 8 bits): SRAM2 write protection key for software
              erase
    inline uint32_t SYSCFG_SKR_KEY (const uint32_t inValue) { return (inValue & 255U) << 0 ; }

//-------------------- external interrupt configuration register
          1
#define SYSCFG_EXTICR1(group) (* ((volatile uint32_t *) (kBaseAddress_SYSCFG [group] + 0x8)))
#define SYSCFG_EXTICR1 (* ((volatile uint32_t *) (0x40010000 + 0x8)))

  // Field (width: 3 bits): EXTI 3 configuration bits
    inline uint32_t SYSCFG_EXTICR1_EXTI3 (const uint32_t inValue) { return (inValue & 7U) << 12 ; }

  // Field (width: 3 bits): EXTI 2 configuration bits
    inline uint32_t SYSCFG_EXTICR1_EXTI2 (const uint32_t inValue) { return (inValue & 7U) << 8 ; }

  // Field (width: 3 bits): EXTI 1 configuration bits
    inline uint32_t SYSCFG_EXTICR1_EXTI1 (const uint32_t inValue) { return (inValue & 7U) << 4 ; }

  // Field (width: 3 bits): EXTI 0 configuration bits
    inline uint32_t SYSCFG_EXTICR1_EXTI0 (const uint32_t inValue) { return (inValue & 7U) << 0 ; }

//-------------------- memory remap register
#define SYSCFG_MEMRMP(group) (* ((volatile uint32_t *) (kBaseAddress_SYSCFG [group] + 0x0)))
#define SYSCFG_MEMRMP (* ((volatile uint32_t *) (0x40010000 + 0x0)))

  // Boolean field: Flash Bank mode selection
    static const uint32_t SYSCFG_MEMRMP_FB_MODE = 1U << 8 ;

  // Field (width: 3 bits): Memory mapping selection
    inline uint32_t SYSCFG_MEMRMP_MEM_MODE (const uint32_t inValue) { return (inValue & 7U) << 0 ; }

  // Boolean field: QUADSPI memory mapping
              swap
    static const uint32_t SYSCFG_MEMRMP_QFS = 1U << 3 ;

//-------------------- external interrupt configuration register
          3
#define SYSCFG_EXTICR3(group) (* ((volatile uint32_t *) (kBaseAddress_SYSCFG [group] + 0x10)))
#define SYSCFG_EXTICR3 (* ((volatile uint32_t *) (0x40010000 + 0x10)))

  // Field (width: 3 bits): EXTI 8 configuration bits
    inline uint32_t SYSCFG_EXTICR3_EXTI8 (const uint32_t inValue) { return (inValue & 7U) << 0 ; }

  // Field (width: 3 bits): EXTI 11 configuration bits
    inline uint32_t SYSCFG_EXTICR3_EXTI11 (const uint32_t inValue) { return (inValue & 7U) << 12 ; }

  // Field (width: 3 bits): EXTI 10 configuration bits
    inline uint32_t SYSCFG_EXTICR3_EXTI10 (const uint32_t inValue) { return (inValue & 7U) << 8 ; }

  // Field (width: 3 bits): EXTI 9 configuration bits
    inline uint32_t SYSCFG_EXTICR3_EXTI9 (const uint32_t inValue) { return (inValue & 7U) << 4 ; }

//-------------------- external interrupt configuration register
          4
#define SYSCFG_EXTICR4(group) (* ((volatile uint32_t *) (kBaseAddress_SYSCFG [group] + 0x14)))
#define SYSCFG_EXTICR4 (* ((volatile uint32_t *) (0x40010000 + 0x14)))

  // Field (width: 3 bits): EXTI13 configuration bits
    inline uint32_t SYSCFG_EXTICR4_EXTI13 (const uint32_t inValue) { return (inValue & 7U) << 4 ; }

  // Field (width: 3 bits): EXTI12 configuration bits
    inline uint32_t SYSCFG_EXTICR4_EXTI12 (const uint32_t inValue) { return (inValue & 7U) << 0 ; }

  // Field (width: 3 bits): EXTI15 configuration bits
    inline uint32_t SYSCFG_EXTICR4_EXTI15 (const uint32_t inValue) { return (inValue & 7U) << 12 ; }

  // Field (width: 3 bits): EXTI14 configuration bits
    inline uint32_t SYSCFG_EXTICR4_EXTI14 (const uint32_t inValue) { return (inValue & 7U) << 8 ; }

//-------------------- configuration register 1
#define SYSCFG_CFGR1(group) (* ((volatile uint32_t *) (kBaseAddress_SYSCFG [group] + 0x4)))
#define SYSCFG_CFGR1 (* ((volatile uint32_t *) (0x40010000 + 0x4)))

  // Boolean field: I2C3 Fast-mode Plus driving capability
              activation
    static const uint32_t SYSCFG_CFGR1_I2C3_FMP = 1U << 22 ;

  // Boolean field: Fast-mode Plus (Fm+) driving capability
              activation on PB9
    static const uint32_t SYSCFG_CFGR1_I2C_PB9_FMP = 1U << 19 ;

  // Boolean field: Fast-mode Plus (Fm+) driving capability
              activation on PB6
    static const uint32_t SYSCFG_CFGR1_I2C_PB6_FMP = 1U << 16 ;

  // Boolean field: Fast-mode Plus (Fm+) driving capability
              activation on PB8
    static const uint32_t SYSCFG_CFGR1_I2C_PB8_FMP = 1U << 18 ;

  // Boolean field: I2C2 Fast-mode Plus driving capability
              activation
    static const uint32_t SYSCFG_CFGR1_I2C2_FMP = 1U << 21 ;

  // Boolean field: Fast-mode Plus (Fm+) driving capability
              activation on PB7
    static const uint32_t SYSCFG_CFGR1_I2C_PB7_FMP = 1U << 17 ;

  // Boolean field: I2C1 Fast-mode Plus driving capability
              activation
    static const uint32_t SYSCFG_CFGR1_I2C1_FMP = 1U << 20 ;

  // Field (width: 6 bits): Floating Point Unit interrupts enable
              bits
    inline uint32_t SYSCFG_CFGR1_FPU_IE (const uint32_t inValue) { return (inValue & 63U) << 26 ; }

  // Boolean field: I/O analog switch voltage booster
              enable
    static const uint32_t SYSCFG_CFGR1_BOOSTEN = 1U << 8 ;

  // Boolean field: Firewall disable
    static const uint32_t SYSCFG_CFGR1_FWDIS = 1U << 0 ;

//-------------------- CFGR2
#define SYSCFG_CFGR2(group) (* ((const volatile uint32_t *) (kBaseAddress_SYSCFG [group] + 0x1C)))
#define SYSCFG_CFGR2 (* ((const volatile uint32_t *) (0x40010000 + 0x1C)))

  // Boolean field: OCKUP (Hardfault) output enable
              bit
    static const uint32_t SYSCFG_CFGR2_CLL = 1U << 0 ;

  // Boolean field: PVD lock enable bit
    static const uint32_t SYSCFG_CFGR2_PVDL = 1U << 2 ;

  // Boolean field: SRAM2 parity lock bit
    static const uint32_t SYSCFG_CFGR2_SPL = 1U << 1 ;

  // Boolean field: ECC Lock
    static const uint32_t SYSCFG_CFGR2_ECCL = 1U << 3 ;

  // Boolean field: SRAM2 parity error flag
    static const uint32_t SYSCFG_CFGR2_SPF = 1U << 8 ;

//-------------------- SWPR
#define SYSCFG_SWPR(group) (* ((volatile uint32_t *) (kBaseAddress_SYSCFG [group] + 0x20)))
#define SYSCFG_SWPR (* ((volatile uint32_t *) (0x40010000 + 0x20)))

  // Boolean field: P26WP
    static const uint32_t SYSCFG_SWPR_P26WP = 1U << 26 ;

  // Boolean field: P21WP
    static const uint32_t SYSCFG_SWPR_P21WP = 1U << 21 ;

  // Boolean field: P20WP
    static const uint32_t SYSCFG_SWPR_P20WP = 1U << 20 ;

  // Boolean field: P23WP
    static const uint32_t SYSCFG_SWPR_P23WP = 1U << 23 ;

  // Boolean field: P28WP
    static const uint32_t SYSCFG_SWPR_P28WP = 1U << 28 ;

  // Boolean field: P24WP
    static const uint32_t SYSCFG_SWPR_P24WP = 1U << 24 ;

  // Boolean field: P27WP
    static const uint32_t SYSCFG_SWPR_P27WP = 1U << 27 ;

  // Boolean field: P6WP
    static const uint32_t SYSCFG_SWPR_P6WP = 1U << 6 ;

  // Boolean field: P18WP
    static const uint32_t SYSCFG_SWPR_P18WP = 1U << 18 ;

  // Boolean field: P1WP
    static const uint32_t SYSCFG_SWPR_P1WP = 1U << 1 ;

  // Boolean field: P9WP
    static const uint32_t SYSCFG_SWPR_P9WP = 1U << 9 ;

  // Boolean field: P22WP
    static const uint32_t SYSCFG_SWPR_P22WP = 1U << 22 ;

  // Boolean field: P8WP
    static const uint32_t SYSCFG_SWPR_P8WP = 1U << 8 ;

  // Boolean field: P25WP
    static const uint32_t SYSCFG_SWPR_P25WP = 1U << 25 ;

  // Boolean field: P13WP
    static const uint32_t SYSCFG_SWPR_P13WP = 1U << 13 ;

  // Boolean field: P14WP
    static const uint32_t SYSCFG_SWPR_P14WP = 1U << 14 ;

  // Boolean field: P4WP
    static const uint32_t SYSCFG_SWPR_P4WP = 1U << 4 ;

  // Boolean field: P2WP
    static const uint32_t SYSCFG_SWPR_P2WP = 1U << 2 ;

  // Boolean field: P15WP
    static const uint32_t SYSCFG_SWPR_P15WP = 1U << 15 ;

  // Boolean field: P16WP
    static const uint32_t SYSCFG_SWPR_P16WP = 1U << 16 ;

  // Boolean field: P3WP
    static const uint32_t SYSCFG_SWPR_P3WP = 1U << 3 ;

  // Boolean field: P0WP
    static const uint32_t SYSCFG_SWPR_P0WP = 1U << 0 ;

  // Boolean field: P11WP
    static const uint32_t SYSCFG_SWPR_P11WP = 1U << 11 ;

  // Boolean field: P12WP
    static const uint32_t SYSCFG_SWPR_P12WP = 1U << 12 ;

  // Boolean field: P5WP
    static const uint32_t SYSCFG_SWPR_P5WP = 1U << 5 ;

  // Boolean field: P30WP
    static const uint32_t SYSCFG_SWPR_P30WP = 1U << 30 ;

  // Boolean field: SRAM2 page 31 write
              protection
    static const uint32_t SYSCFG_SWPR_P31WP = 1U << 31 ;

  // Boolean field: P29WP
    static const uint32_t SYSCFG_SWPR_P29WP = 1U << 29 ;

  // Boolean field: P7WP
    static const uint32_t SYSCFG_SWPR_P7WP = 1U << 7 ;

  // Boolean field: P17WP
    static const uint32_t SYSCFG_SWPR_P17WP = 1U << 17 ;

  // Boolean field: P19WP
    static const uint32_t SYSCFG_SWPR_P19WP = 1U << 19 ;

  // Boolean field: P10WP
    static const uint32_t SYSCFG_SWPR_P10WP = 1U << 10 ;

//-------------------- external interrupt configuration register
          2
#define SYSCFG_EXTICR2(group) (* ((volatile uint32_t *) (kBaseAddress_SYSCFG [group] + 0xC)))
#define SYSCFG_EXTICR2 (* ((volatile uint32_t *) (0x40010000 + 0xC)))

  // Field (width: 3 bits): EXTI 7 configuration bits
    inline uint32_t SYSCFG_EXTICR2_EXTI7 (const uint32_t inValue) { return (inValue & 7U) << 12 ; }

  // Field (width: 3 bits): EXTI 6 configuration bits
    inline uint32_t SYSCFG_EXTICR2_EXTI6 (const uint32_t inValue) { return (inValue & 7U) << 8 ; }

  // Field (width: 3 bits): EXTI 5 configuration bits
    inline uint32_t SYSCFG_EXTICR2_EXTI5 (const uint32_t inValue) { return (inValue & 7U) << 4 ; }

  // Field (width: 3 bits): EXTI 4 configuration bits
    inline uint32_t SYSCFG_EXTICR2_EXTI4 (const uint32_t inValue) { return (inValue & 7U) << 0 ; }

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
// Peripheral group TIM
//                TIM2 at 0x40000000
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

static const uint32_t kBaseAddress_TIM [1] = {0x40000000} ;

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

//-------------------- control register 2
#define TIM_CR2(group) (* ((volatile uint32_t *) (kBaseAddress_TIM [group] + 0x4)))
#define TIM2_CR2 (* ((volatile uint32_t *) (0x40000000 + 0x4)))

  // Boolean field: Capture/compare DMA
              selection
    static const uint32_t TIM_CR2_CCDS = 1U << 3 ;

  // Boolean field: TI1 selection
    static const uint32_t TIM_CR2_TI1S = 1U << 7 ;

  // Field (width: 3 bits): Master mode selection
    inline uint32_t TIM_CR2_MMS (const uint32_t inValue) { return (inValue & 7U) << 4 ; }

//-------------------- counter
#define TIM_CNT(group) (* ((volatile uint32_t *) (kBaseAddress_TIM [group] + 0x24)))
#define TIM2_CNT (* ((volatile uint32_t *) (0x40000000 + 0x24)))

  // Field (width: 16 bits): High counter value (TIM2
              only)
    inline uint32_t TIM_CNT_CNT_H (const uint32_t inValue) { return (inValue & 65535U) << 16 ; }

  // Field (width: 16 bits): Low counter value
    inline uint32_t TIM_CNT_CNT_L (const uint32_t inValue) { return (inValue & 65535U) << 0 ; }

//-------------------- control register 1
#define TIM_CR1(group) (* ((volatile uint32_t *) (kBaseAddress_TIM [group] + 0x0)))
#define TIM2_CR1 (* ((volatile uint32_t *) (0x40000000 + 0x0)))

  // Field (width: 2 bits): Clock division
    inline uint32_t TIM_CR1_CKD (const uint32_t inValue) { return (inValue & 3U) << 8 ; }

  // Boolean field: Auto-reload preload enable
    static const uint32_t TIM_CR1_ARPE = 1U << 7 ;

  // Boolean field: Counter enable
    static const uint32_t TIM_CR1_CEN = 1U << 0 ;

  // Boolean field: Update request source
    static const uint32_t TIM_CR1_URS = 1U << 2 ;

  // Boolean field: One-pulse mode
    static const uint32_t TIM_CR1_OPM = 1U << 3 ;

  // Field (width: 2 bits): Center-aligned mode
              selection
    inline uint32_t TIM_CR1_CMS (const uint32_t inValue) { return (inValue & 3U) << 5 ; }

  // Boolean field: Direction
    static const uint32_t TIM_CR1_DIR = 1U << 4 ;

  // Boolean field: Update disable
    static const uint32_t TIM_CR1_UDIS = 1U << 1 ;

//-------------------- capture/compare enable
          register
#define TIM_CCER(group) (* ((volatile uint32_t *) (kBaseAddress_TIM [group] + 0x20)))
#define TIM2_CCER (* ((volatile uint32_t *) (0x40000000 + 0x20)))

  // Boolean field: Capture/Compare 4 output
              Polarity
    static const uint32_t TIM_CCER_CC4NP = 1U << 15 ;

  // Boolean field: Capture/Compare 3 output
              enable
    static const uint32_t TIM_CCER_CC3E = 1U << 8 ;

  // Boolean field: Capture/Compare 1 output
              enable
    static const uint32_t TIM_CCER_CC1E = 1U << 0 ;

  // Boolean field: Capture/Compare 3 output
              Polarity
    static const uint32_t TIM_CCER_CC4P = 1U << 13 ;

  // Boolean field: Capture/Compare 2 output
              Polarity
    static const uint32_t TIM_CCER_CC2NP = 1U << 7 ;

  // Boolean field: Capture/Compare 2 output
              enable
    static const uint32_t TIM_CCER_CC2E = 1U << 4 ;

  // Boolean field: Capture/Compare 3 output
              Polarity
    static const uint32_t TIM_CCER_CC3NP = 1U << 11 ;

  // Boolean field: Capture/Compare 2 output
              Polarity
    static const uint32_t TIM_CCER_CC2P = 1U << 5 ;

  // Boolean field: Capture/Compare 3 output
              Polarity
    static const uint32_t TIM_CCER_CC3P = 1U << 9 ;

  // Boolean field: Capture/Compare 1 output
              Polarity
    static const uint32_t TIM_CCER_CC1P = 1U << 1 ;

  // Boolean field: Capture/Compare 1 output
              Polarity
    static const uint32_t TIM_CCER_CC1NP = 1U << 3 ;

  // Boolean field: Capture/Compare 4 output
              enable
    static const uint32_t TIM_CCER_CC4E = 1U << 12 ;

//-------------------- DMA/Interrupt enable register
#define TIM_DIER(group) (* ((volatile uint32_t *) (kBaseAddress_TIM [group] + 0xC)))
#define TIM2_DIER (* ((volatile uint32_t *) (0x40000000 + 0xC)))

  // Boolean field: Capture/Compare 2 DMA request
              enable
    static const uint32_t TIM_DIER_CC2DE = 1U << 10 ;

  // Boolean field: Update interrupt enable
    static const uint32_t TIM_DIER_UIE = 1U << 0 ;

  // Boolean field: Capture/Compare 4 interrupt
              enable
    static const uint32_t TIM_DIER_CC4IE = 1U << 4 ;

  // Boolean field: Capture/Compare 2 interrupt
              enable
    static const uint32_t TIM_DIER_CC2IE = 1U << 2 ;

  // Boolean field: Capture/Compare 3 DMA request
              enable
    static const uint32_t TIM_DIER_CC3DE = 1U << 11 ;

  // Boolean field: Capture/Compare 3 interrupt
              enable
    static const uint32_t TIM_DIER_CC3IE = 1U << 3 ;

  // Boolean field: COM DMA request enable
    static const uint32_t TIM_DIER_COMDE = 1U << 13 ;

  // Boolean field: Capture/Compare 1 interrupt
              enable
    static const uint32_t TIM_DIER_CC1IE = 1U << 1 ;

  // Boolean field: Capture/Compare 4 DMA request
              enable
    static const uint32_t TIM_DIER_CC4DE = 1U << 12 ;

  // Boolean field: Trigger DMA request enable
    static const uint32_t TIM_DIER_TDE = 1U << 14 ;

  // Boolean field: Update DMA request enable
    static const uint32_t TIM_DIER_UDE = 1U << 8 ;

  // Boolean field: Trigger interrupt enable
    static const uint32_t TIM_DIER_TIE = 1U << 6 ;

  // Boolean field: Capture/Compare 1 DMA request
              enable
    static const uint32_t TIM_DIER_CC1DE = 1U << 9 ;

//-------------------- event generation register
#define TIM_EGR(group) (* ((volatile uint32_t *) (kBaseAddress_TIM [group] + 0x14)))
#define TIM2_EGR (* ((volatile uint32_t *) (0x40000000 + 0x14)))

  // Boolean field: Capture/compare 3
              generation
    static const uint32_t TIM_EGR_CC3G = 1U << 3 ;

  // Boolean field: Capture/compare 2
              generation
    static const uint32_t TIM_EGR_CC2G = 1U << 2 ;

  // Boolean field: Capture/compare 1
              generation
    static const uint32_t TIM_EGR_CC1G = 1U << 1 ;

  // Boolean field: Trigger generation
    static const uint32_t TIM_EGR_TG = 1U << 6 ;

  // Boolean field: Update generation
    static const uint32_t TIM_EGR_UG = 1U << 0 ;

  // Boolean field: Capture/compare 4
              generation
    static const uint32_t TIM_EGR_CC4G = 1U << 4 ;

//-------------------- slave mode control register
#define TIM_SMCR(group) (* ((volatile uint32_t *) (kBaseAddress_TIM [group] + 0x8)))
#define TIM2_SMCR (* ((volatile uint32_t *) (0x40000000 + 0x8)))

  // Boolean field: External trigger polarity
    static const uint32_t TIM_SMCR_ETP = 1U << 15 ;

  // Field (width: 3 bits): Slave mode selection
    inline uint32_t TIM_SMCR_SMS (const uint32_t inValue) { return (inValue & 7U) << 0 ; }

  // Boolean field: External clock enable
    static const uint32_t TIM_SMCR_ECE = 1U << 14 ;

  // Field (width: 3 bits): Trigger selection
    inline uint32_t TIM_SMCR_TS (const uint32_t inValue) { return (inValue & 7U) << 4 ; }

  // Boolean field: Master/Slave mode
    static const uint32_t TIM_SMCR_MSM = 1U << 7 ;

  // Field (width: 4 bits): External trigger filter
    inline uint32_t TIM_SMCR_ETF (const uint32_t inValue) { return (inValue & 15U) << 8 ; }

  // Field (width: 2 bits): External trigger prescaler
    inline uint32_t TIM_SMCR_ETPS (const uint32_t inValue) { return (inValue & 3U) << 12 ; }

//-------------------- capture/compare register 1
#define TIM_CCR1(group) (* ((volatile uint32_t *) (kBaseAddress_TIM [group] + 0x34)))
#define TIM2_CCR1 (* ((volatile uint32_t *) (0x40000000 + 0x34)))

  // Field (width: 16 bits): Low Capture/Compare 1
              value
    inline uint32_t TIM_CCR1_CCR1_L (const uint32_t inValue) { return (inValue & 65535U) << 0 ; }

  // Field (width: 16 bits): High Capture/Compare 1 value (TIM2
              only)
    inline uint32_t TIM_CCR1_CCR1_H (const uint32_t inValue) { return (inValue & 65535U) << 16 ; }

//-------------------- capture/compare mode register 2 (output
          mode)
#define TIM_CCMR2_Output(group) (* ((volatile uint32_t *) (kBaseAddress_TIM [group] + 0x1C)))
#define TIM2_CCMR2_Output (* ((volatile uint32_t *) (0x40000000 + 0x1C)))

  // Field (width: 3 bits): Output compare 3 mode
    inline uint32_t TIM_CCMR2_Output_OC3M (const uint32_t inValue) { return (inValue & 7U) << 4 ; }

  // Boolean field: Output compare 3 fast
              enable
    static const uint32_t TIM_CCMR2_Output_OC3FE = 1U << 2 ;

  // Field (width: 2 bits): Capture/Compare 4
              selection
    inline uint32_t TIM_CCMR2_Output_CC4S (const uint32_t inValue) { return (inValue & 3U) << 8 ; }

  // Boolean field: Output compare 4 clear
              enable
    static const uint32_t TIM_CCMR2_Output_OC4CE = 1U << 15 ;

  // Field (width: 2 bits): Capture/Compare 3
              selection
    inline uint32_t TIM_CCMR2_Output_CC3S (const uint32_t inValue) { return (inValue & 3U) << 0 ; }

  // Boolean field: Output compare 3 preload
              enable
    static const uint32_t TIM_CCMR2_Output_OC3PE = 1U << 3 ;

  // Field (width: 3 bits): Output compare 4 mode
    inline uint32_t TIM_CCMR2_Output_OC4M (const uint32_t inValue) { return (inValue & 7U) << 12 ; }

  // Boolean field: Output compare 4 fast
              enable
    static const uint32_t TIM_CCMR2_Output_OC4FE = 1U << 10 ;

  // Boolean field: Output compare 3 clear
              enable
    static const uint32_t TIM_CCMR2_Output_OC3CE = 1U << 7 ;

  // Boolean field: Output compare 4 preload
              enable
    static const uint32_t TIM_CCMR2_Output_OC4PE = 1U << 11 ;

//-------------------- DMA address for full transfer
#define TIM_DMAR(group) (* ((volatile uint32_t *) (kBaseAddress_TIM [group] + 0x4C)))
#define TIM2_DMAR (* ((volatile uint32_t *) (0x40000000 + 0x4C)))

  // Field (width: 16 bits): DMA register for burst
              accesses
    inline uint32_t TIM_DMAR_DMAB (const uint32_t inValue) { return (inValue & 65535U) << 0 ; }

//-------------------- capture/compare mode register 1 (output
          mode)
#define TIM_CCMR1_Output(group) (* ((volatile uint32_t *) (kBaseAddress_TIM [group] + 0x18)))
#define TIM2_CCMR1_Output (* ((volatile uint32_t *) (0x40000000 + 0x18)))

  // Boolean field: Output compare 2 clear
              enable
    static const uint32_t TIM_CCMR1_Output_OC2CE = 1U << 15 ;

  // Boolean field: Output compare 1 preload
              enable
    static const uint32_t TIM_CCMR1_Output_OC1PE = 1U << 3 ;

  // Boolean field: Output compare 1 fast
              enable
    static const uint32_t TIM_CCMR1_Output_OC1FE = 1U << 2 ;

  // Field (width: 3 bits): Output compare 2 mode
    inline uint32_t TIM_CCMR1_Output_OC2M (const uint32_t inValue) { return (inValue & 7U) << 12 ; }

  // Boolean field: Output compare 2 preload
              enable
    static const uint32_t TIM_CCMR1_Output_OC2PE = 1U << 11 ;

  // Boolean field: Output compare 2 fast
              enable
    static const uint32_t TIM_CCMR1_Output_OC2FE = 1U << 10 ;

  // Field (width: 2 bits): Capture/Compare 2
              selection
    inline uint32_t TIM_CCMR1_Output_CC2S (const uint32_t inValue) { return (inValue & 3U) << 8 ; }

  // Boolean field: Output compare 1 clear
              enable
    static const uint32_t TIM_CCMR1_Output_OC1CE = 1U << 7 ;

  // Field (width: 3 bits): Output compare 1 mode
    inline uint32_t TIM_CCMR1_Output_OC1M (const uint32_t inValue) { return (inValue & 7U) << 4 ; }

  // Field (width: 2 bits): Capture/Compare 1
              selection
    inline uint32_t TIM_CCMR1_Output_CC1S (const uint32_t inValue) { return (inValue & 3U) << 0 ; }

//-------------------- capture/compare register 2
#define TIM_CCR2(group) (* ((volatile uint32_t *) (kBaseAddress_TIM [group] + 0x38)))
#define TIM2_CCR2 (* ((volatile uint32_t *) (0x40000000 + 0x38)))

  // Field (width: 16 bits): High Capture/Compare 2 value (TIM2
              only)
    inline uint32_t TIM_CCR2_CCR2_H (const uint32_t inValue) { return (inValue & 65535U) << 16 ; }

  // Field (width: 16 bits): Low Capture/Compare 2
              value
    inline uint32_t TIM_CCR2_CCR2_L (const uint32_t inValue) { return (inValue & 65535U) << 0 ; }

//-------------------- capture/compare register 3
#define TIM_CCR3(group) (* ((volatile uint32_t *) (kBaseAddress_TIM [group] + 0x3C)))
#define TIM2_CCR3 (* ((volatile uint32_t *) (0x40000000 + 0x3C)))

  // Field (width: 16 bits): High Capture/Compare value (TIM2
              only)
    inline uint32_t TIM_CCR3_CCR3_H (const uint32_t inValue) { return (inValue & 65535U) << 16 ; }

  // Field (width: 16 bits): Low Capture/Compare value
    inline uint32_t TIM_CCR3_CCR3_L (const uint32_t inValue) { return (inValue & 65535U) << 0 ; }

//-------------------- capture/compare register 4
#define TIM_CCR4(group) (* ((volatile uint32_t *) (kBaseAddress_TIM [group] + 0x40)))
#define TIM2_CCR4 (* ((volatile uint32_t *) (0x40000000 + 0x40)))

  // Field (width: 16 bits): High Capture/Compare value (TIM2
              only)
    inline uint32_t TIM_CCR4_CCR4_H (const uint32_t inValue) { return (inValue & 65535U) << 16 ; }

  // Field (width: 16 bits): Low Capture/Compare value
    inline uint32_t TIM_CCR4_CCR4_L (const uint32_t inValue) { return (inValue & 65535U) << 0 ; }

//-------------------- auto-reload register
#define TIM_ARR(group) (* ((volatile uint32_t *) (kBaseAddress_TIM [group] + 0x2C)))
#define TIM2_ARR (* ((volatile uint32_t *) (0x40000000 + 0x2C)))

  // Field (width: 16 bits): High Auto-reload value (TIM2
              only)
    inline uint32_t TIM_ARR_ARR_H (const uint32_t inValue) { return (inValue & 65535U) << 16 ; }

  // Field (width: 16 bits): Low Auto-reload value
    inline uint32_t TIM_ARR_ARR_L (const uint32_t inValue) { return (inValue & 65535U) << 0 ; }

//-------------------- status register
#define TIM_SR(group) (* ((volatile uint32_t *) (kBaseAddress_TIM [group] + 0x10)))
#define TIM2_SR (* ((volatile uint32_t *) (0x40000000 + 0x10)))

  // Boolean field: Capture/compare 2 overcapture
              flag
    static const uint32_t TIM_SR_CC2OF = 1U << 10 ;

  // Boolean field: Capture/Compare 2 interrupt
              flag
    static const uint32_t TIM_SR_CC2IF = 1U << 2 ;

  // Boolean field: Capture/Compare 1 overcapture
              flag
    static const uint32_t TIM_SR_CC1OF = 1U << 9 ;

  // Boolean field: Capture/Compare 4 interrupt
              flag
    static const uint32_t TIM_SR_CC4IF = 1U << 4 ;

  // Boolean field: Update interrupt flag
    static const uint32_t TIM_SR_UIF = 1U << 0 ;

  // Boolean field: Capture/Compare 3 interrupt
              flag
    static const uint32_t TIM_SR_CC3IF = 1U << 3 ;

  // Boolean field: Capture/compare 1 interrupt
              flag
    static const uint32_t TIM_SR_CC1IF = 1U << 1 ;

  // Boolean field: Capture/Compare 4 overcapture
              flag
    static const uint32_t TIM_SR_CC4OF = 1U << 12 ;

  // Boolean field: Trigger interrupt flag
    static const uint32_t TIM_SR_TIF = 1U << 6 ;

  // Boolean field: Capture/Compare 3 overcapture
              flag
    static const uint32_t TIM_SR_CC3OF = 1U << 11 ;

//-------------------- capture/compare mode register 1 (input
          mode)
#define TIM_CCMR1_Input(group) (* ((volatile uint32_t *) (kBaseAddress_TIM [group] + 0x18)))
#define TIM2_CCMR1_Input (* ((volatile uint32_t *) (0x40000000 + 0x18)))

  // Field (width: 2 bits): Input capture 1 prescaler
    inline uint32_t TIM_CCMR1_Input_IC1PSC (const uint32_t inValue) { return (inValue & 3U) << 2 ; }

  // Field (width: 4 bits): Input capture 1 filter
    inline uint32_t TIM_CCMR1_Input_IC1F (const uint32_t inValue) { return (inValue & 15U) << 4 ; }

  // Field (width: 4 bits): Input capture 2 filter
    inline uint32_t TIM_CCMR1_Input_IC2F (const uint32_t inValue) { return (inValue & 15U) << 12 ; }

  // Field (width: 2 bits): Capture/compare 2
              selection
    inline uint32_t TIM_CCMR1_Input_CC2S (const uint32_t inValue) { return (inValue & 3U) << 8 ; }

  // Field (width: 2 bits): Capture/Compare 1
              selection
    inline uint32_t TIM_CCMR1_Input_CC1S (const uint32_t inValue) { return (inValue & 3U) << 0 ; }

  // Field (width: 2 bits): Input capture 2 prescaler
    inline uint32_t TIM_CCMR1_Input_IC2PSC (const uint32_t inValue) { return (inValue & 3U) << 10 ; }

//-------------------- prescaler
#define TIM_PSC(group) (* ((volatile uint32_t *) (kBaseAddress_TIM [group] + 0x28)))
#define TIM2_PSC (* ((volatile uint32_t *) (0x40000000 + 0x28)))

  // Field (width: 16 bits): Prescaler value
    inline uint32_t TIM_PSC_PSC (const uint32_t inValue) { return (inValue & 65535U) << 0 ; }

//-------------------- DMA control register
#define TIM_DCR(group) (* ((volatile uint32_t *) (kBaseAddress_TIM [group] + 0x48)))
#define TIM2_DCR (* ((volatile uint32_t *) (0x40000000 + 0x48)))

  // Field (width: 5 bits): DMA base address
    inline uint32_t TIM_DCR_DBA (const uint32_t inValue) { return (inValue & 31U) << 0 ; }

  // Field (width: 5 bits): DMA burst length
    inline uint32_t TIM_DCR_DBL (const uint32_t inValue) { return (inValue & 31U) << 8 ; }

//-------------------- TIM2 option register
#define TIM_OR(group) (* ((volatile uint32_t *) (kBaseAddress_TIM [group] + 0x50)))
#define TIM2_OR (* ((volatile uint32_t *) (0x40000000 + 0x50)))

  // Field (width: 3 bits): Timer2 ETR remap
    inline uint32_t TIM_OR_ETR_RMP (const uint32_t inValue) { return (inValue & 7U) << 0 ; }

  // Field (width: 2 bits): Internal trigger
    inline uint32_t TIM_OR_TI4_RMP (const uint32_t inValue) { return (inValue & 3U) << 3 ; }

//-------------------- capture/compare mode register 2 (input
          mode)
#define TIM_CCMR2_Input(group) (* ((volatile uint32_t *) (kBaseAddress_TIM [group] + 0x1C)))
#define TIM2_CCMR2_Input (* ((volatile uint32_t *) (0x40000000 + 0x1C)))

  // Field (width: 2 bits): Capture/Compare 4
              selection
    inline uint32_t TIM_CCMR2_Input_CC4S (const uint32_t inValue) { return (inValue & 3U) << 8 ; }

  // Field (width: 2 bits): Capture/Compare 3
              selection
    inline uint32_t TIM_CCMR2_Input_CC3S (const uint32_t inValue) { return (inValue & 3U) << 0 ; }

  // Field (width: 4 bits): Input capture 3 filter
    inline uint32_t TIM_CCMR2_Input_IC3F (const uint32_t inValue) { return (inValue & 15U) << 4 ; }

  // Field (width: 2 bits): Input capture 3 prescaler
    inline uint32_t TIM_CCMR2_Input_IC3PSC (const uint32_t inValue) { return (inValue & 3U) << 2 ; }

  // Field (width: 4 bits): Input capture 4 filter
    inline uint32_t TIM_CCMR2_Input_IC4F (const uint32_t inValue) { return (inValue & 15U) << 12 ; }

  // Field (width: 2 bits): Input capture 4 prescaler
    inline uint32_t TIM_CCMR2_Input_IC4PSC (const uint32_t inValue) { return (inValue & 3U) << 10 ; }

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
// Peripheral group TSC
//                TSC at 0x40024000
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

static const uint32_t kBaseAddress_TSC [1] = {0x40024000} ;

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

//-------------------- I/O group x counter register
#define TSC_IOG5CR(group) (* ((const volatile uint32_t *) (kBaseAddress_TSC [group] + 0x44)))
#define TSC_IOG5CR (* ((const volatile uint32_t *) (0x40024000 + 0x44)))

  // Field (width: 14 bits): Counter value
    inline uint32_t TSC_IOG5CR_CNT (const uint32_t inValue) { return (inValue & 16383U) << 0 ; }

//-------------------- I/O group x counter register
#define TSC_IOG3CR(group) (* ((const volatile uint32_t *) (kBaseAddress_TSC [group] + 0x3C)))
#define TSC_IOG3CR (* ((const volatile uint32_t *) (0x40024000 + 0x3C)))

  // Field (width: 14 bits): Counter value
    inline uint32_t TSC_IOG3CR_CNT (const uint32_t inValue) { return (inValue & 16383U) << 0 ; }

//-------------------- I/O group x counter register
#define TSC_IOG6CR(group) (* ((const volatile uint32_t *) (kBaseAddress_TSC [group] + 0x48)))
#define TSC_IOG6CR (* ((const volatile uint32_t *) (0x40024000 + 0x48)))

  // Field (width: 14 bits): Counter value
    inline uint32_t TSC_IOG6CR_CNT (const uint32_t inValue) { return (inValue & 16383U) << 0 ; }

//-------------------- I/O group x counter register
#define TSC_IOG7CR(group) (* ((const volatile uint32_t *) (kBaseAddress_TSC [group] + 0x4C)))
#define TSC_IOG7CR (* ((const volatile uint32_t *) (0x40024000 + 0x4C)))

  // Field (width: 14 bits): Counter value
    inline uint32_t TSC_IOG7CR_CNT (const uint32_t inValue) { return (inValue & 16383U) << 0 ; }

//-------------------- interrupt status register
#define TSC_ISR(group) (* ((volatile uint32_t *) (kBaseAddress_TSC [group] + 0xC)))
#define TSC_ISR (* ((volatile uint32_t *) (0x40024000 + 0xC)))

  // Boolean field: Max count error flag
    static const uint32_t TSC_ISR_MCEF = 1U << 1 ;

  // Boolean field: End of acquisition flag
    static const uint32_t TSC_ISR_EOAF = 1U << 0 ;

//-------------------- I/O hysteresis control
          register
#define TSC_IOHCR(group) (* ((volatile uint32_t *) (kBaseAddress_TSC [group] + 0x10)))
#define TSC_IOHCR (* ((volatile uint32_t *) (0x40024000 + 0x10)))

  // Boolean field: G1_IO3
    static const uint32_t TSC_IOHCR_G1_IO3 = 1U << 2 ;

  // Boolean field: G7_IO4
    static const uint32_t TSC_IOHCR_G7_IO4 = 1U << 27 ;

  // Boolean field: G2_IO2
    static const uint32_t TSC_IOHCR_G2_IO2 = 1U << 5 ;

  // Boolean field: G5_IO4
    static const uint32_t TSC_IOHCR_G5_IO4 = 1U << 19 ;

  // Boolean field: G7_IO1
    static const uint32_t TSC_IOHCR_G7_IO1 = 1U << 24 ;

  // Boolean field: G5_IO2
    static const uint32_t TSC_IOHCR_G5_IO2 = 1U << 17 ;

  // Boolean field: G7_IO3
    static const uint32_t TSC_IOHCR_G7_IO3 = 1U << 26 ;

  // Boolean field: G7_IO2
    static const uint32_t TSC_IOHCR_G7_IO2 = 1U << 25 ;

  // Boolean field: G8_IO2
    static const uint32_t TSC_IOHCR_G8_IO2 = 1U << 29 ;

  // Boolean field: G8_IO3
    static const uint32_t TSC_IOHCR_G8_IO3 = 1U << 30 ;

  // Boolean field: G8_IO1
    static const uint32_t TSC_IOHCR_G8_IO1 = 1U << 28 ;

  // Boolean field: G8_IO4
    static const uint32_t TSC_IOHCR_G8_IO4 = 1U << 31 ;

  // Boolean field: G6_IO4
    static const uint32_t TSC_IOHCR_G6_IO4 = 1U << 23 ;

  // Boolean field: G4_IO4
    static const uint32_t TSC_IOHCR_G4_IO4 = 1U << 15 ;

  // Boolean field: G4_IO2
    static const uint32_t TSC_IOHCR_G4_IO2 = 1U << 13 ;

  // Boolean field: G4_IO3
    static const uint32_t TSC_IOHCR_G4_IO3 = 1U << 14 ;

  // Boolean field: G6_IO2
    static const uint32_t TSC_IOHCR_G6_IO2 = 1U << 21 ;

  // Boolean field: G4_IO1
    static const uint32_t TSC_IOHCR_G4_IO1 = 1U << 12 ;

  // Boolean field: G6_IO1
    static const uint32_t TSC_IOHCR_G6_IO1 = 1U << 20 ;

  // Boolean field: G2_IO1
    static const uint32_t TSC_IOHCR_G2_IO1 = 1U << 4 ;

  // Boolean field: G6_IO3
    static const uint32_t TSC_IOHCR_G6_IO3 = 1U << 22 ;

  // Boolean field: G1_IO1
    static const uint32_t TSC_IOHCR_G1_IO1 = 1U << 0 ;

  // Boolean field: G2_IO4
    static const uint32_t TSC_IOHCR_G2_IO4 = 1U << 7 ;

  // Boolean field: G2_IO3
    static const uint32_t TSC_IOHCR_G2_IO3 = 1U << 6 ;

  // Boolean field: G5_IO3
    static const uint32_t TSC_IOHCR_G5_IO3 = 1U << 18 ;

  // Boolean field: G1_IO4
    static const uint32_t TSC_IOHCR_G1_IO4 = 1U << 3 ;

  // Boolean field: G5_IO1
    static const uint32_t TSC_IOHCR_G5_IO1 = 1U << 16 ;

  // Boolean field: G3_IO1
    static const uint32_t TSC_IOHCR_G3_IO1 = 1U << 8 ;

  // Boolean field: G3_IO3
    static const uint32_t TSC_IOHCR_G3_IO3 = 1U << 10 ;

  // Boolean field: G3_IO2
    static const uint32_t TSC_IOHCR_G3_IO2 = 1U << 9 ;

  // Boolean field: G3_IO4
    static const uint32_t TSC_IOHCR_G3_IO4 = 1U << 11 ;

  // Boolean field: G1_IO2
    static const uint32_t TSC_IOHCR_G1_IO2 = 1U << 1 ;

//-------------------- interrupt enable register
#define TSC_IER(group) (* ((volatile uint32_t *) (kBaseAddress_TSC [group] + 0x4)))
#define TSC_IER (* ((volatile uint32_t *) (0x40024000 + 0x4)))

  // Boolean field: End of acquisition interrupt
              enable
    static const uint32_t TSC_IER_EOAIE = 1U << 0 ;

  // Boolean field: Max count error interrupt
              enable
    static const uint32_t TSC_IER_MCEIE = 1U << 1 ;

//-------------------- I/O channel control register
#define TSC_IOCCR(group) (* ((volatile uint32_t *) (kBaseAddress_TSC [group] + 0x28)))
#define TSC_IOCCR (* ((volatile uint32_t *) (0x40024000 + 0x28)))

  // Boolean field: G1_IO3
    static const uint32_t TSC_IOCCR_G1_IO3 = 1U << 2 ;

  // Boolean field: G7_IO4
    static const uint32_t TSC_IOCCR_G7_IO4 = 1U << 27 ;

  // Boolean field: G2_IO2
    static const uint32_t TSC_IOCCR_G2_IO2 = 1U << 5 ;

  // Boolean field: G5_IO4
    static const uint32_t TSC_IOCCR_G5_IO4 = 1U << 19 ;

  // Boolean field: G7_IO1
    static const uint32_t TSC_IOCCR_G7_IO1 = 1U << 24 ;

  // Boolean field: G5_IO2
    static const uint32_t TSC_IOCCR_G5_IO2 = 1U << 17 ;

  // Boolean field: G7_IO3
    static const uint32_t TSC_IOCCR_G7_IO3 = 1U << 26 ;

  // Boolean field: G7_IO2
    static const uint32_t TSC_IOCCR_G7_IO2 = 1U << 25 ;

  // Boolean field: G8_IO2
    static const uint32_t TSC_IOCCR_G8_IO2 = 1U << 29 ;

  // Boolean field: G8_IO3
    static const uint32_t TSC_IOCCR_G8_IO3 = 1U << 30 ;

  // Boolean field: G8_IO1
    static const uint32_t TSC_IOCCR_G8_IO1 = 1U << 28 ;

  // Boolean field: G8_IO4
    static const uint32_t TSC_IOCCR_G8_IO4 = 1U << 31 ;

  // Boolean field: G6_IO4
    static const uint32_t TSC_IOCCR_G6_IO4 = 1U << 23 ;

  // Boolean field: G4_IO4
    static const uint32_t TSC_IOCCR_G4_IO4 = 1U << 15 ;

  // Boolean field: G4_IO2
    static const uint32_t TSC_IOCCR_G4_IO2 = 1U << 13 ;

  // Boolean field: G4_IO3
    static const uint32_t TSC_IOCCR_G4_IO3 = 1U << 14 ;

  // Boolean field: G6_IO2
    static const uint32_t TSC_IOCCR_G6_IO2 = 1U << 21 ;

  // Boolean field: G4_IO1
    static const uint32_t TSC_IOCCR_G4_IO1 = 1U << 12 ;

  // Boolean field: G6_IO1
    static const uint32_t TSC_IOCCR_G6_IO1 = 1U << 20 ;

  // Boolean field: G2_IO1
    static const uint32_t TSC_IOCCR_G2_IO1 = 1U << 4 ;

  // Boolean field: G6_IO3
    static const uint32_t TSC_IOCCR_G6_IO3 = 1U << 22 ;

  // Boolean field: G1_IO1
    static const uint32_t TSC_IOCCR_G1_IO1 = 1U << 0 ;

  // Boolean field: G2_IO4
    static const uint32_t TSC_IOCCR_G2_IO4 = 1U << 7 ;

  // Boolean field: G2_IO3
    static const uint32_t TSC_IOCCR_G2_IO3 = 1U << 6 ;

  // Boolean field: G5_IO3
    static const uint32_t TSC_IOCCR_G5_IO3 = 1U << 18 ;

  // Boolean field: G1_IO4
    static const uint32_t TSC_IOCCR_G1_IO4 = 1U << 3 ;

  // Boolean field: G5_IO1
    static const uint32_t TSC_IOCCR_G5_IO1 = 1U << 16 ;

  // Boolean field: G3_IO1
    static const uint32_t TSC_IOCCR_G3_IO1 = 1U << 8 ;

  // Boolean field: G3_IO3
    static const uint32_t TSC_IOCCR_G3_IO3 = 1U << 10 ;

  // Boolean field: G3_IO2
    static const uint32_t TSC_IOCCR_G3_IO2 = 1U << 9 ;

  // Boolean field: G3_IO4
    static const uint32_t TSC_IOCCR_G3_IO4 = 1U << 11 ;

  // Boolean field: G1_IO2
    static const uint32_t TSC_IOCCR_G1_IO2 = 1U << 1 ;

//-------------------- I/O group x counter register
#define TSC_IOG1CR(group) (* ((const volatile uint32_t *) (kBaseAddress_TSC [group] + 0x34)))
#define TSC_IOG1CR (* ((const volatile uint32_t *) (0x40024000 + 0x34)))

  // Field (width: 14 bits): Counter value
    inline uint32_t TSC_IOG1CR_CNT (const uint32_t inValue) { return (inValue & 16383U) << 0 ; }

//-------------------- I/O group x counter register
#define TSC_IOG4CR(group) (* ((const volatile uint32_t *) (kBaseAddress_TSC [group] + 0x40)))
#define TSC_IOG4CR (* ((const volatile uint32_t *) (0x40024000 + 0x40)))

  // Field (width: 14 bits): Counter value
    inline uint32_t TSC_IOG4CR_CNT (const uint32_t inValue) { return (inValue & 16383U) << 0 ; }

//-------------------- interrupt clear register
#define TSC_ICR(group) (* ((volatile uint32_t *) (kBaseAddress_TSC [group] + 0x8)))
#define TSC_ICR (* ((volatile uint32_t *) (0x40024000 + 0x8)))

  // Boolean field: Max count error interrupt
              clear
    static const uint32_t TSC_ICR_MCEIC = 1U << 1 ;

  // Boolean field: End of acquisition interrupt
              clear
    static const uint32_t TSC_ICR_EOAIC = 1U << 0 ;

//-------------------- I/O group x counter register
#define TSC_IOG2CR(group) (* ((const volatile uint32_t *) (kBaseAddress_TSC [group] + 0x38)))
#define TSC_IOG2CR (* ((const volatile uint32_t *) (0x40024000 + 0x38)))

  // Field (width: 14 bits): Counter value
    inline uint32_t TSC_IOG2CR_CNT (const uint32_t inValue) { return (inValue & 16383U) << 0 ; }

//-------------------- control register
#define TSC_CR(group) (* ((volatile uint32_t *) (kBaseAddress_TSC [group] + 0x0)))
#define TSC_CR (* ((volatile uint32_t *) (0x40024000 + 0x0)))

  // Boolean field: Synchronization pin
              polarity
    static const uint32_t TSC_CR_SYNCPOL = 1U << 3 ;

  // Field (width: 3 bits): pulse generator prescaler
    inline uint32_t TSC_CR_PGPSC (const uint32_t inValue) { return (inValue & 7U) << 12 ; }

  // Boolean field: I/O Default mode
    static const uint32_t TSC_CR_IODEF = 1U << 4 ;

  // Boolean field: Touch sensing controller
              enable
    static const uint32_t TSC_CR_TSCE = 1U << 0 ;

  // Boolean field: Acquisition mode
    static const uint32_t TSC_CR_AM = 1U << 2 ;

  // Boolean field: Spread spectrum prescaler
    static const uint32_t TSC_CR_SSPSC = 1U << 15 ;

  // Boolean field: Start a new acquisition
    static const uint32_t TSC_CR_START = 1U << 1 ;

  // Field (width: 3 bits): Max count value
    inline uint32_t TSC_CR_MCV (const uint32_t inValue) { return (inValue & 7U) << 5 ; }

  // Field (width: 7 bits): Spread spectrum deviation
    inline uint32_t TSC_CR_SSD (const uint32_t inValue) { return (inValue & 127U) << 17 ; }

  // Boolean field: Spread spectrum enable
    static const uint32_t TSC_CR_SSE = 1U << 16 ;

  // Field (width: 4 bits): Charge transfer pulse high
    inline uint32_t TSC_CR_CTPH (const uint32_t inValue) { return (inValue & 15U) << 28 ; }

  // Field (width: 4 bits): Charge transfer pulse low
    inline uint32_t TSC_CR_CTPL (const uint32_t inValue) { return (inValue & 15U) << 24 ; }

//-------------------- I/O analog switch control
          register
#define TSC_IOASCR(group) (* ((volatile uint32_t *) (kBaseAddress_TSC [group] + 0x18)))
#define TSC_IOASCR (* ((volatile uint32_t *) (0x40024000 + 0x18)))

  // Boolean field: G1_IO3
    static const uint32_t TSC_IOASCR_G1_IO3 = 1U << 2 ;

  // Boolean field: G7_IO4
    static const uint32_t TSC_IOASCR_G7_IO4 = 1U << 27 ;

  // Boolean field: G2_IO2
    static const uint32_t TSC_IOASCR_G2_IO2 = 1U << 5 ;

  // Boolean field: G5_IO4
    static const uint32_t TSC_IOASCR_G5_IO4 = 1U << 19 ;

  // Boolean field: G7_IO1
    static const uint32_t TSC_IOASCR_G7_IO1 = 1U << 24 ;

  // Boolean field: G5_IO2
    static const uint32_t TSC_IOASCR_G5_IO2 = 1U << 17 ;

  // Boolean field: G7_IO3
    static const uint32_t TSC_IOASCR_G7_IO3 = 1U << 26 ;

  // Boolean field: G7_IO2
    static const uint32_t TSC_IOASCR_G7_IO2 = 1U << 25 ;

  // Boolean field: G8_IO2
    static const uint32_t TSC_IOASCR_G8_IO2 = 1U << 29 ;

  // Boolean field: G8_IO3
    static const uint32_t TSC_IOASCR_G8_IO3 = 1U << 30 ;

  // Boolean field: G8_IO1
    static const uint32_t TSC_IOASCR_G8_IO1 = 1U << 28 ;

  // Boolean field: G8_IO4
    static const uint32_t TSC_IOASCR_G8_IO4 = 1U << 31 ;

  // Boolean field: G6_IO4
    static const uint32_t TSC_IOASCR_G6_IO4 = 1U << 23 ;

  // Boolean field: G4_IO4
    static const uint32_t TSC_IOASCR_G4_IO4 = 1U << 15 ;

  // Boolean field: G4_IO2
    static const uint32_t TSC_IOASCR_G4_IO2 = 1U << 13 ;

  // Boolean field: G4_IO3
    static const uint32_t TSC_IOASCR_G4_IO3 = 1U << 14 ;

  // Boolean field: G6_IO2
    static const uint32_t TSC_IOASCR_G6_IO2 = 1U << 21 ;

  // Boolean field: G4_IO1
    static const uint32_t TSC_IOASCR_G4_IO1 = 1U << 12 ;

  // Boolean field: G6_IO1
    static const uint32_t TSC_IOASCR_G6_IO1 = 1U << 20 ;

  // Boolean field: G2_IO1
    static const uint32_t TSC_IOASCR_G2_IO1 = 1U << 4 ;

  // Boolean field: G6_IO3
    static const uint32_t TSC_IOASCR_G6_IO3 = 1U << 22 ;

  // Boolean field: G1_IO1
    static const uint32_t TSC_IOASCR_G1_IO1 = 1U << 0 ;

  // Boolean field: G2_IO4
    static const uint32_t TSC_IOASCR_G2_IO4 = 1U << 7 ;

  // Boolean field: G2_IO3
    static const uint32_t TSC_IOASCR_G2_IO3 = 1U << 6 ;

  // Boolean field: G5_IO3
    static const uint32_t TSC_IOASCR_G5_IO3 = 1U << 18 ;

  // Boolean field: G1_IO4
    static const uint32_t TSC_IOASCR_G1_IO4 = 1U << 3 ;

  // Boolean field: G5_IO1
    static const uint32_t TSC_IOASCR_G5_IO1 = 1U << 16 ;

  // Boolean field: G3_IO1
    static const uint32_t TSC_IOASCR_G3_IO1 = 1U << 8 ;

  // Boolean field: G3_IO3
    static const uint32_t TSC_IOASCR_G3_IO3 = 1U << 10 ;

  // Boolean field: G3_IO2
    static const uint32_t TSC_IOASCR_G3_IO2 = 1U << 9 ;

  // Boolean field: G3_IO4
    static const uint32_t TSC_IOASCR_G3_IO4 = 1U << 11 ;

  // Boolean field: G1_IO2
    static const uint32_t TSC_IOASCR_G1_IO2 = 1U << 1 ;

//-------------------- I/O group control status
          register
#define TSC_IOGCSR(group) (* ((const volatile uint32_t *) (kBaseAddress_TSC [group] + 0x30)))
#define TSC_IOGCSR (* ((const volatile uint32_t *) (0x40024000 + 0x30)))

  // Boolean field: Analog I/O group x enable
    static const uint32_t TSC_IOGCSR_G7E = 1U << 6 ;

  // Boolean field: Analog I/O group x enable
    static const uint32_t TSC_IOGCSR_G8E = 1U << 7 ;

  // Boolean field: Analog I/O group x status
    static const uint32_t TSC_IOGCSR_G3S = 1U << 18 ;

  // Boolean field: Analog I/O group x enable
    static const uint32_t TSC_IOGCSR_G2E = 1U << 1 ;

  // Boolean field: Analog I/O group x status
    static const uint32_t TSC_IOGCSR_G2S = 1U << 17 ;

  // Boolean field: Analog I/O group x enable
    static const uint32_t TSC_IOGCSR_G5E = 1U << 4 ;

  // Boolean field: Analog I/O group x enable
    static const uint32_t TSC_IOGCSR_G1E = 1U << 0 ;

  // Boolean field: Analog I/O group x enable
    static const uint32_t TSC_IOGCSR_G6E = 1U << 5 ;

  // Boolean field: Analog I/O group x status
    static const uint32_t TSC_IOGCSR_G5S = 1U << 20 ;

  // Boolean field: Analog I/O group x status
    static const uint32_t TSC_IOGCSR_G4S = 1U << 19 ;

  // Boolean field: Analog I/O group x enable
    static const uint32_t TSC_IOGCSR_G3E = 1U << 2 ;

  // Boolean field: Analog I/O group x status
    static const uint32_t TSC_IOGCSR_G7S = 1U << 22 ;

  // Boolean field: Analog I/O group x status
    static const uint32_t TSC_IOGCSR_G8S = 1U << 23 ;

  // Boolean field: Analog I/O group x status
    static const uint32_t TSC_IOGCSR_G6S = 1U << 21 ;

  // Boolean field: Analog I/O group x status
    static const uint32_t TSC_IOGCSR_G1S = 1U << 16 ;

  // Boolean field: Analog I/O group x enable
    static const uint32_t TSC_IOGCSR_G4E = 1U << 3 ;

//-------------------- I/O group x counter register
#define TSC_IOG8CR(group) (* ((const volatile uint32_t *) (kBaseAddress_TSC [group] + 0x50)))
#define TSC_IOG8CR (* ((const volatile uint32_t *) (0x40024000 + 0x50)))

  // Field (width: 14 bits): Counter value
    inline uint32_t TSC_IOG8CR_CNT (const uint32_t inValue) { return (inValue & 16383U) << 0 ; }

//-------------------- I/O sampling control register
#define TSC_IOSCR(group) (* ((volatile uint32_t *) (kBaseAddress_TSC [group] + 0x20)))
#define TSC_IOSCR (* ((volatile uint32_t *) (0x40024000 + 0x20)))

  // Boolean field: G1_IO3
    static const uint32_t TSC_IOSCR_G1_IO3 = 1U << 2 ;

  // Boolean field: G7_IO4
    static const uint32_t TSC_IOSCR_G7_IO4 = 1U << 27 ;

  // Boolean field: G2_IO2
    static const uint32_t TSC_IOSCR_G2_IO2 = 1U << 5 ;

  // Boolean field: G5_IO4
    static const uint32_t TSC_IOSCR_G5_IO4 = 1U << 19 ;

  // Boolean field: G7_IO1
    static const uint32_t TSC_IOSCR_G7_IO1 = 1U << 24 ;

  // Boolean field: G5_IO2
    static const uint32_t TSC_IOSCR_G5_IO2 = 1U << 17 ;

  // Boolean field: G7_IO3
    static const uint32_t TSC_IOSCR_G7_IO3 = 1U << 26 ;

  // Boolean field: G7_IO2
    static const uint32_t TSC_IOSCR_G7_IO2 = 1U << 25 ;

  // Boolean field: G8_IO2
    static const uint32_t TSC_IOSCR_G8_IO2 = 1U << 29 ;

  // Boolean field: G8_IO3
    static const uint32_t TSC_IOSCR_G8_IO3 = 1U << 30 ;

  // Boolean field: G8_IO1
    static const uint32_t TSC_IOSCR_G8_IO1 = 1U << 28 ;

  // Boolean field: G8_IO4
    static const uint32_t TSC_IOSCR_G8_IO4 = 1U << 31 ;

  // Boolean field: G6_IO4
    static const uint32_t TSC_IOSCR_G6_IO4 = 1U << 23 ;

  // Boolean field: G4_IO4
    static const uint32_t TSC_IOSCR_G4_IO4 = 1U << 15 ;

  // Boolean field: G4_IO2
    static const uint32_t TSC_IOSCR_G4_IO2 = 1U << 13 ;

  // Boolean field: G4_IO3
    static const uint32_t TSC_IOSCR_G4_IO3 = 1U << 14 ;

  // Boolean field: G6_IO2
    static const uint32_t TSC_IOSCR_G6_IO2 = 1U << 21 ;

  // Boolean field: G4_IO1
    static const uint32_t TSC_IOSCR_G4_IO1 = 1U << 12 ;

  // Boolean field: G6_IO1
    static const uint32_t TSC_IOSCR_G6_IO1 = 1U << 20 ;

  // Boolean field: G2_IO1
    static const uint32_t TSC_IOSCR_G2_IO1 = 1U << 4 ;

  // Boolean field: G6_IO3
    static const uint32_t TSC_IOSCR_G6_IO3 = 1U << 22 ;

  // Boolean field: G1_IO1
    static const uint32_t TSC_IOSCR_G1_IO1 = 1U << 0 ;

  // Boolean field: G2_IO4
    static const uint32_t TSC_IOSCR_G2_IO4 = 1U << 7 ;

  // Boolean field: G2_IO3
    static const uint32_t TSC_IOSCR_G2_IO3 = 1U << 6 ;

  // Boolean field: G5_IO3
    static const uint32_t TSC_IOSCR_G5_IO3 = 1U << 18 ;

  // Boolean field: G1_IO4
    static const uint32_t TSC_IOSCR_G1_IO4 = 1U << 3 ;

  // Boolean field: G5_IO1
    static const uint32_t TSC_IOSCR_G5_IO1 = 1U << 16 ;

  // Boolean field: G3_IO1
    static const uint32_t TSC_IOSCR_G3_IO1 = 1U << 8 ;

  // Boolean field: G3_IO3
    static const uint32_t TSC_IOSCR_G3_IO3 = 1U << 10 ;

  // Boolean field: G3_IO2
    static const uint32_t TSC_IOSCR_G3_IO2 = 1U << 9 ;

  // Boolean field: G3_IO4
    static const uint32_t TSC_IOSCR_G3_IO4 = 1U << 11 ;

  // Boolean field: G1_IO2
    static const uint32_t TSC_IOSCR_G1_IO2 = 1U << 1 ;

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
// Peripheral group USART
//                USART1 at 0x40013800
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

static const uint32_t kBaseAddress_USART [1] = {0x40013800} ;

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

//-------------------- Control register 2
#define USART_CR2(group) (* ((volatile uint32_t *) (kBaseAddress_USART [group] + 0x4)))
#define USART1_CR2 (* ((volatile uint32_t *) (0x40013800 + 0x4)))

  // Boolean field: Clock enable
    static const uint32_t USART_CR2_CLKEN = 1U << 11 ;

  // Boolean field: Clock phase
    static const uint32_t USART_CR2_CPHA = 1U << 9 ;

  // Boolean field: Last bit clock pulse
    static const uint32_t USART_CR2_LBCL = 1U << 8 ;

  // Boolean field: Clock polarity
    static const uint32_t USART_CR2_CPOL = 1U << 10 ;

  // Boolean field: RX pin active level
              inversion
    static const uint32_t USART_CR2_RXINV = 1U << 16 ;

  // Boolean field: ABRMOD0
    static const uint32_t USART_CR2_ABRMOD0 = 1U << 21 ;

  // Boolean field: Auto baud rate mode
    static const uint32_t USART_CR2_ABRMOD1 = 1U << 22 ;

  // Boolean field: Most significant bit first
    static const uint32_t USART_CR2_MSBFIRST = 1U << 19 ;

  // Boolean field: Auto baud rate enable
    static const uint32_t USART_CR2_ABREN = 1U << 20 ;

  // Boolean field: LIN break detection length
    static const uint32_t USART_CR2_LBDL = 1U << 5 ;

  // Field (width: 2 bits): STOP bits
    inline uint32_t USART_CR2_STOP (const uint32_t inValue) { return (inValue & 3U) << 12 ; }

  // Field (width: 4 bits): Address of the USART node
    inline uint32_t USART_CR2_ADD4_7 (const uint32_t inValue) { return (inValue & 15U) << 28 ; }

  // Boolean field: TX pin active level
              inversion
    static const uint32_t USART_CR2_TXINV = 1U << 17 ;

  // Boolean field: Receiver timeout enable
    static const uint32_t USART_CR2_RTOEN = 1U << 23 ;

  // Boolean field: Swap TX/RX pins
    static const uint32_t USART_CR2_SWAP = 1U << 15 ;

  // Boolean field: LIN break detection interrupt
              enable
    static const uint32_t USART_CR2_LBDIE = 1U << 6 ;

  // Field (width: 4 bits): Address of the USART node
    inline uint32_t USART_CR2_ADD0_3 (const uint32_t inValue) { return (inValue & 15U) << 24 ; }

  // Boolean field: LIN mode enable
    static const uint32_t USART_CR2_LINEN = 1U << 14 ;

  // Boolean field: Binary data inversion
    static const uint32_t USART_CR2_TAINV = 1U << 18 ;

  // Boolean field: 7-bit Address Detection/4-bit Address
              Detection
    static const uint32_t USART_CR2_ADDM7 = 1U << 4 ;

//-------------------- Control register 3
#define USART_CR3(group) (* ((volatile uint32_t *) (kBaseAddress_USART [group] + 0x8)))
#define USART1_CR3 (* ((volatile uint32_t *) (0x40013800 + 0x8)))

  // Field (width: 2 bits): Wakeup from Stop mode interrupt flag
              selection
    inline uint32_t USART_CR3_WUS (const uint32_t inValue) { return (inValue & 3U) << 20 ; }

  // Boolean field: Wakeup from Stop mode interrupt
              enable
    static const uint32_t USART_CR3_WUFIE = 1U << 22 ;

  // Boolean field: One sample bit method
              enable
    static const uint32_t USART_CR3_ONEBIT = 1U << 11 ;

  // Boolean field: Driver enable polarity
              selection
    static const uint32_t USART_CR3_DEP = 1U << 15 ;

  // Boolean field: Smartcard NACK enable
    static const uint32_t USART_CR3_NACK = 1U << 4 ;

  // Boolean field: CTS interrupt enable
    static const uint32_t USART_CR3_CTSIE = 1U << 10 ;

  // Boolean field: Smartcard mode enable
    static const uint32_t USART_CR3_SCEN = 1U << 5 ;

  // Boolean field: CTS enable
    static const uint32_t USART_CR3_CTSE = 1U << 9 ;

  // Field (width: 3 bits): Smartcard auto-retry count
    inline uint32_t USART_CR3_SCARCNT (const uint32_t inValue) { return (inValue & 7U) << 17 ; }

  // Boolean field: DMA enable receiver
    static const uint32_t USART_CR3_DMAR = 1U << 6 ;

  // Boolean field: Ir low-power
    static const uint32_t USART_CR3_IRLP = 1U << 2 ;

  // Boolean field: Error interrupt enable
    static const uint32_t USART_CR3_EIE = 1U << 0 ;

  // Boolean field: Driver enable mode
    static const uint32_t USART_CR3_DEM = 1U << 14 ;

  // Boolean field: DMA enable transmitter
    static const uint32_t USART_CR3_DMAT = 1U << 7 ;

  // Boolean field: Half-duplex selection
    static const uint32_t USART_CR3_HDSEL = 1U << 3 ;

  // Boolean field: Ir mode enable
    static const uint32_t USART_CR3_IREN = 1U << 1 ;

  // Boolean field: Overrun Disable
    static const uint32_t USART_CR3_OVRDIS = 1U << 12 ;

  // Boolean field: RTS enable
    static const uint32_t USART_CR3_RTSE = 1U << 8 ;

  // Boolean field: DMA Disable on Reception
              Error
    static const uint32_t USART_CR3_DDRE = 1U << 13 ;

//-------------------- Control register 1
#define USART_CR1(group) (* ((volatile uint32_t *) (kBaseAddress_USART [group] + 0x0)))
#define USART1_CR1 (* ((volatile uint32_t *) (0x40013800 + 0x0)))

  // Boolean field: PE interrupt enable
    static const uint32_t USART_CR1_PEIE = 1U << 8 ;

  // Boolean field: Receiver timeout interrupt
              enable
    static const uint32_t USART_CR1_RTOIE = 1U << 26 ;

  // Boolean field: USART enable
    static const uint32_t USART_CR1_UE = 1U << 0 ;

  // Boolean field: Character match interrupt
              enable
    static const uint32_t USART_CR1_CMIE = 1U << 14 ;

  // Boolean field: Word length
    static const uint32_t USART_CR1_M1 = 1U << 28 ;

  // Boolean field: Word length
    static const uint32_t USART_CR1_M0 = 1U << 12 ;

  // Boolean field: interrupt enable
    static const uint32_t USART_CR1_TXEIE = 1U << 7 ;

  // Boolean field: Oversampling mode
    static const uint32_t USART_CR1_OVER8 = 1U << 15 ;

  // Boolean field: Parity control enable
    static const uint32_t USART_CR1_PCE = 1U << 10 ;

  // Boolean field: Parity selection
    static const uint32_t USART_CR1_PS = 1U << 9 ;

  // Boolean field: Driver Enable de-assertion
              time
    static const uint32_t USART_CR1_DEDT4 = 1U << 20 ;

  // Boolean field: DEDT2
    static const uint32_t USART_CR1_DEDT2 = 1U << 18 ;

  // Boolean field: DEDT3
    static const uint32_t USART_CR1_DEDT3 = 1U << 19 ;

  // Boolean field: DEDT0
    static const uint32_t USART_CR1_DEDT0 = 1U << 16 ;

  // Boolean field: DEDT1
    static const uint32_t USART_CR1_DEDT1 = 1U << 17 ;

  // Boolean field: Receiver enable
    static const uint32_t USART_CR1_RE = 1U << 2 ;

  // Boolean field: Transmitter enable
    static const uint32_t USART_CR1_TE = 1U << 3 ;

  // Boolean field: USART enable in Stop mode
    static const uint32_t USART_CR1_UESM = 1U << 1 ;

  // Boolean field: IDLE interrupt enable
    static const uint32_t USART_CR1_IDLEIE = 1U << 4 ;

  // Boolean field: DEAT3
    static const uint32_t USART_CR1_DEAT3 = 1U << 24 ;

  // Boolean field: Receiver wakeup method
    static const uint32_t USART_CR1_WAKE = 1U << 11 ;

  // Boolean field: Transmission complete interrupt
              enable
    static const uint32_t USART_CR1_TCIE = 1U << 6 ;

  // Boolean field: End of Block interrupt
              enable
    static const uint32_t USART_CR1_EOBIE = 1U << 27 ;

  // Boolean field: RXNE interrupt enable
    static const uint32_t USART_CR1_RXNEIE = 1U << 5 ;

  // Boolean field: Mute mode enable
    static const uint32_t USART_CR1_MME = 1U << 13 ;

  // Boolean field: DEAT2
    static const uint32_t USART_CR1_DEAT2 = 1U << 23 ;

  // Boolean field: DEAT1
    static const uint32_t USART_CR1_DEAT1 = 1U << 22 ;

  // Boolean field: DEAT0
    static const uint32_t USART_CR1_DEAT0 = 1U << 21 ;

  // Boolean field: Driver Enable assertion
              time
    static const uint32_t USART_CR1_DEAT4 = 1U << 25 ;

//-------------------- Request register
#define USART_RQR(group) (* ((volatile uint32_t *) (kBaseAddress_USART [group] + 0x18)))
#define USART1_RQR (* ((volatile uint32_t *) (0x40013800 + 0x18)))

  // Boolean field: Transmit data flush
              request
    static const uint32_t USART_RQR_TXFRQ = 1U << 4 ;

  // Boolean field: Mute mode request
    static const uint32_t USART_RQR_MMRQ = 1U << 2 ;

  // Boolean field: Send break request
    static const uint32_t USART_RQR_SBKRQ = 1U << 1 ;

  // Boolean field: Receive data flush request
    static const uint32_t USART_RQR_RXFRQ = 1U << 3 ;

  // Boolean field: Auto baud rate request
    static const uint32_t USART_RQR_ABRRQ = 1U << 0 ;

//-------------------- Receive data register
#define USART_RDR(group) (* ((const volatile uint32_t *) (kBaseAddress_USART [group] + 0x24)))
#define USART1_RDR (* ((const volatile uint32_t *) (0x40013800 + 0x24)))

  // Field (width: 9 bits): Receive data value
    inline uint32_t USART_RDR_RDR (const uint32_t inValue) { return (inValue & 511U) << 0 ; }

//-------------------- Interrupt & status
          register
#define USART_ISR(group) (* ((const volatile uint32_t *) (kBaseAddress_USART [group] + 0x1C)))
#define USART1_ISR (* ((const volatile uint32_t *) (0x40013800 + 0x1C)))

  // Boolean field: CTS
    static const uint32_t USART_ISR_CTS = 1U << 10 ;

  // Boolean field: CMF
    static const uint32_t USART_ISR_CMF = 1U << 17 ;

  // Boolean field: RXNE
    static const uint32_t USART_ISR_RXNE = 1U << 5 ;

  // Boolean field: FE
    static const uint32_t USART_ISR_FE = 1U << 1 ;

  // Boolean field: BUSY
    static const uint32_t USART_ISR_BUSY = 1U << 16 ;

  // Boolean field: TXE
    static const uint32_t USART_ISR_TXE = 1U << 7 ;

  // Boolean field: SBKF
    static const uint32_t USART_ISR_SBKF = 1U << 18 ;

  // Boolean field: NF
    static const uint32_t USART_ISR_NF = 1U << 2 ;

  // Boolean field: REACK
    static const uint32_t USART_ISR_REACK = 1U << 22 ;

  // Boolean field: IDLE
    static const uint32_t USART_ISR_IDLE = 1U << 4 ;

  // Boolean field: PE
    static const uint32_t USART_ISR_PE = 1U << 0 ;

  // Boolean field: TEACK
    static const uint32_t USART_ISR_TEACK = 1U << 21 ;

  // Boolean field: TC
    static const uint32_t USART_ISR_TC = 1U << 6 ;

  // Boolean field: WUF
    static const uint32_t USART_ISR_WUF = 1U << 20 ;

  // Boolean field: EOBF
    static const uint32_t USART_ISR_EOBF = 1U << 12 ;

  // Boolean field: CTSIF
    static const uint32_t USART_ISR_CTSIF = 1U << 9 ;

  // Boolean field: LBDF
    static const uint32_t USART_ISR_LBDF = 1U << 8 ;

  // Boolean field: ABRF
    static const uint32_t USART_ISR_ABRF = 1U << 15 ;

  // Boolean field: ABRE
    static const uint32_t USART_ISR_ABRE = 1U << 14 ;

  // Boolean field: RWU
    static const uint32_t USART_ISR_RWU = 1U << 19 ;

  // Boolean field: RTOF
    static const uint32_t USART_ISR_RTOF = 1U << 11 ;

  // Boolean field: ORE
    static const uint32_t USART_ISR_ORE = 1U << 3 ;

//-------------------- Receiver timeout register
#define USART_RTOR(group) (* ((volatile uint32_t *) (kBaseAddress_USART [group] + 0x14)))
#define USART1_RTOR (* ((volatile uint32_t *) (0x40013800 + 0x14)))

  // Field (width: 24 bits): Receiver timeout value
    inline uint32_t USART_RTOR_RTO (const uint32_t inValue) { return (inValue & 16777215U) << 0 ; }

  // Field (width: 8 bits): Block Length
    inline uint32_t USART_RTOR_BLEN (const uint32_t inValue) { return (inValue & 255U) << 24 ; }

//-------------------- Baud rate register
#define USART_BRR(group) (* ((volatile uint32_t *) (kBaseAddress_USART [group] + 0xC)))
#define USART1_BRR (* ((volatile uint32_t *) (0x40013800 + 0xC)))

  // Field (width: 12 bits): DIV_Mantissa
    inline uint32_t USART_BRR_DIV_Mantissa (const uint32_t inValue) { return (inValue & 4095U) << 4 ; }

  // Field (width: 4 bits): DIV_Fraction
    inline uint32_t USART_BRR_DIV_Fraction (const uint32_t inValue) { return (inValue & 15U) << 0 ; }

//-------------------- Transmit data register
#define USART_TDR(group) (* ((volatile uint32_t *) (kBaseAddress_USART [group] + 0x28)))
#define USART1_TDR (* ((volatile uint32_t *) (0x40013800 + 0x28)))

  // Field (width: 9 bits): Transmit data value
    inline uint32_t USART_TDR_TDR (const uint32_t inValue) { return (inValue & 511U) << 0 ; }

//-------------------- Interrupt flag clear register
#define USART_ICR(group) (* ((volatile uint32_t *) (kBaseAddress_USART [group] + 0x20)))
#define USART1_ICR (* ((volatile uint32_t *) (0x40013800 + 0x20)))

  // Boolean field: LIN break detection clear
              flag
    static const uint32_t USART_ICR_LBDCF = 1U << 8 ;

  // Boolean field: Overrun error clear flag
    static const uint32_t USART_ICR_ORECF = 1U << 3 ;

  // Boolean field: Idle line detected clear
              flag
    static const uint32_t USART_ICR_IDLECF = 1U << 4 ;

  // Boolean field: Receiver timeout clear
              flag
    static const uint32_t USART_ICR_RTOCF = 1U << 11 ;

  // Boolean field: End of block clear flag
    static const uint32_t USART_ICR_EOBCF = 1U << 12 ;

  // Boolean field: CTS clear flag
    static const uint32_t USART_ICR_CTSCF = 1U << 9 ;

  // Boolean field: Character match clear flag
    static const uint32_t USART_ICR_CMCF = 1U << 17 ;

  // Boolean field: Framing error clear flag
    static const uint32_t USART_ICR_FECF = 1U << 1 ;

  // Boolean field: Parity error clear flag
    static const uint32_t USART_ICR_PECF = 1U << 0 ;

  // Boolean field: Transmission complete clear
              flag
    static const uint32_t USART_ICR_TCCF = 1U << 6 ;

  // Boolean field: Wakeup from Stop mode clear
              flag
    static const uint32_t USART_ICR_WUCF = 1U << 20 ;

  // Boolean field: Noise detected clear flag
    static const uint32_t USART_ICR_NCF = 1U << 2 ;

//-------------------- Guard time and prescaler
          register
#define USART_GTPR(group) (* ((volatile uint32_t *) (kBaseAddress_USART [group] + 0x10)))
#define USART1_GTPR (* ((volatile uint32_t *) (0x40013800 + 0x10)))

  // Field (width: 8 bits): Prescaler value
    inline uint32_t USART_GTPR_PSC (const uint32_t inValue) { return (inValue & 255U) << 0 ; }

  // Field (width: 8 bits): Guard time value
    inline uint32_t USART_GTPR_GT (const uint32_t inValue) { return (inValue & 255U) << 8 ; }

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
// Peripheral group USB
//                USB_SRAM at 0x40006C00
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

static const uint32_t kBaseAddress_USB [1] = {0x40006C00} ;

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

//-------------------- interrupt status register
#define USB_ISTR(group) (* ((const volatile uint32_t *) (kBaseAddress_USB [group] + 0x44)))
#define USB_SRAM_ISTR (* ((const volatile uint32_t *) (0x40006C00 + 0x44)))

  // Boolean field: reset request
    static const uint32_t USB_ISTR_RESET = 1U << 10 ;

  // Boolean field: Correct transfer
    static const uint32_t USB_ISTR_CTR = 1U << 15 ;

  // Boolean field: Error
    static const uint32_t USB_ISTR_ERR = 1U << 13 ;

  // Boolean field: start of frame
    static const uint32_t USB_ISTR_SOF = 1U << 9 ;

  // Boolean field: Wakeup
    static const uint32_t USB_ISTR_WKUP = 1U << 12 ;

  // Boolean field: Packet memory area over /
              underrun
    static const uint32_t USB_ISTR_PMAOVR = 1U << 14 ;

  // Field (width: 4 bits): Endpoint Identifier
    inline uint32_t USB_ISTR_EP_ID (const uint32_t inValue) { return (inValue & 15U) << 0 ; }

  // Boolean field: Suspend mode request
    static const uint32_t USB_ISTR_SUSP = 1U << 11 ;

  // Boolean field: LPM L1 state request
    static const uint32_t USB_ISTR_L1REQ = 1U << 7 ;

  // Boolean field: Expected start frame
    static const uint32_t USB_ISTR_ESOF = 1U << 8 ;

  // Boolean field: Direction of transaction
    static const uint32_t USB_ISTR_DIR = 1U << 4 ;

//-------------------- endpoint 7 register
#define USB_EP7R(group) (* ((volatile uint32_t *) (kBaseAddress_USB [group] + 0x1C)))
#define USB_SRAM_EP7R (* ((volatile uint32_t *) (0x40006C00 + 0x1C)))

  // Field (width: 2 bits): Status bits, for reception
              transfers
    inline uint32_t USB_EP7R_STAT_RX (const uint32_t inValue) { return (inValue & 3U) << 12 ; }

  // Boolean field: Data Toggle, for reception
              transfers
    static const uint32_t USB_EP7R_DTOG_RX = 1U << 14 ;

  // Field (width: 2 bits): Status bits, for transmission
              transfers
    inline uint32_t USB_EP7R_STAT_TX (const uint32_t inValue) { return (inValue & 3U) << 4 ; }

  // Boolean field: Setup transaction
              completed
    static const uint32_t USB_EP7R_SETUP = 1U << 11 ;

  // Field (width: 4 bits): Endpoint address
    inline uint32_t USB_EP7R_EA (const uint32_t inValue) { return (inValue & 15U) << 0 ; }

  // Boolean field: Correct Transfer for
              transmission
    static const uint32_t USB_EP7R_CTR_TX = 1U << 7 ;

  // Boolean field: Endpoint kind
    static const uint32_t USB_EP7R_EP_KIND = 1U << 8 ;

  // Boolean field: Data Toggle, for transmission
              transfers
    static const uint32_t USB_EP7R_DTOG_TX = 1U << 6 ;

  // Field (width: 2 bits): Endpoint type
    inline uint32_t USB_EP7R_EP_TYPE (const uint32_t inValue) { return (inValue & 3U) << 9 ; }

  // Boolean field: Correct transfer for
              reception
    static const uint32_t USB_EP7R_CTR_RX = 1U << 15 ;

//-------------------- Buffer table address
#define USB_BTABLE(group) (* ((volatile uint32_t *) (kBaseAddress_USB [group] + 0x50)))
#define USB_SRAM_BTABLE (* ((volatile uint32_t *) (0x40006C00 + 0x50)))

  // Field (width: 13 bits): Buffer table
    inline uint32_t USB_BTABLE_BTABLE (const uint32_t inValue) { return (inValue & 8191U) << 3 ; }

//-------------------- endpoint 4 register
#define USB_EP4R(group) (* ((volatile uint32_t *) (kBaseAddress_USB [group] + 0x10)))
#define USB_SRAM_EP4R (* ((volatile uint32_t *) (0x40006C00 + 0x10)))

  // Field (width: 2 bits): Status bits, for reception
              transfers
    inline uint32_t USB_EP4R_STAT_RX (const uint32_t inValue) { return (inValue & 3U) << 12 ; }

  // Boolean field: Data Toggle, for reception
              transfers
    static const uint32_t USB_EP4R_DTOG_RX = 1U << 14 ;

  // Field (width: 2 bits): Status bits, for transmission
              transfers
    inline uint32_t USB_EP4R_STAT_TX (const uint32_t inValue) { return (inValue & 3U) << 4 ; }

  // Boolean field: Setup transaction
              completed
    static const uint32_t USB_EP4R_SETUP = 1U << 11 ;

  // Field (width: 4 bits): Endpoint address
    inline uint32_t USB_EP4R_EA (const uint32_t inValue) { return (inValue & 15U) << 0 ; }

  // Boolean field: Correct Transfer for
              transmission
    static const uint32_t USB_EP4R_CTR_TX = 1U << 7 ;

  // Boolean field: Endpoint kind
    static const uint32_t USB_EP4R_EP_KIND = 1U << 8 ;

  // Boolean field: Data Toggle, for transmission
              transfers
    static const uint32_t USB_EP4R_DTOG_TX = 1U << 6 ;

  // Field (width: 2 bits): Endpoint type
    inline uint32_t USB_EP4R_EP_TYPE (const uint32_t inValue) { return (inValue & 3U) << 9 ; }

  // Boolean field: Correct transfer for
              reception
    static const uint32_t USB_EP4R_CTR_RX = 1U << 15 ;

//-------------------- endpoint 5 register
#define USB_EP5R(group) (* ((volatile uint32_t *) (kBaseAddress_USB [group] + 0x14)))
#define USB_SRAM_EP5R (* ((volatile uint32_t *) (0x40006C00 + 0x14)))

  // Field (width: 2 bits): Status bits, for reception
              transfers
    inline uint32_t USB_EP5R_STAT_RX (const uint32_t inValue) { return (inValue & 3U) << 12 ; }

  // Boolean field: Data Toggle, for reception
              transfers
    static const uint32_t USB_EP5R_DTOG_RX = 1U << 14 ;

  // Field (width: 2 bits): Status bits, for transmission
              transfers
    inline uint32_t USB_EP5R_STAT_TX (const uint32_t inValue) { return (inValue & 3U) << 4 ; }

  // Boolean field: Setup transaction
              completed
    static const uint32_t USB_EP5R_SETUP = 1U << 11 ;

  // Field (width: 4 bits): Endpoint address
    inline uint32_t USB_EP5R_EA (const uint32_t inValue) { return (inValue & 15U) << 0 ; }

  // Boolean field: Correct Transfer for
              transmission
    static const uint32_t USB_EP5R_CTR_TX = 1U << 7 ;

  // Boolean field: Endpoint kind
    static const uint32_t USB_EP5R_EP_KIND = 1U << 8 ;

  // Boolean field: Data Toggle, for transmission
              transfers
    static const uint32_t USB_EP5R_DTOG_TX = 1U << 6 ;

  // Field (width: 2 bits): Endpoint type
    inline uint32_t USB_EP5R_EP_TYPE (const uint32_t inValue) { return (inValue & 3U) << 9 ; }

  // Boolean field: Correct transfer for
              reception
    static const uint32_t USB_EP5R_CTR_RX = 1U << 15 ;

//-------------------- device address
#define USB_DADDR(group) (* ((volatile uint32_t *) (kBaseAddress_USB [group] + 0x4C)))
#define USB_SRAM_DADDR (* ((volatile uint32_t *) (0x40006C00 + 0x4C)))

  // Field (width: 7 bits): Device address
    inline uint32_t USB_DADDR_ADD (const uint32_t inValue) { return (inValue & 127U) << 0 ; }

  // Boolean field: Enable function
    static const uint32_t USB_DADDR_EF = 1U << 7 ;

//-------------------- endpoint 0 register
#define USB_EP0R(group) (* ((volatile uint32_t *) (kBaseAddress_USB [group] + 0x0)))
#define USB_SRAM_EP0R (* ((volatile uint32_t *) (0x40006C00 + 0x0)))

  // Field (width: 2 bits): Status bits, for reception
              transfers
    inline uint32_t USB_EP0R_STAT_RX (const uint32_t inValue) { return (inValue & 3U) << 12 ; }

  // Boolean field: Data Toggle, for reception
              transfers
    static const uint32_t USB_EP0R_DTOG_RX = 1U << 14 ;

  // Field (width: 2 bits): Status bits, for transmission
              transfers
    inline uint32_t USB_EP0R_STAT_TX (const uint32_t inValue) { return (inValue & 3U) << 4 ; }

  // Boolean field: Setup transaction
              completed
    static const uint32_t USB_EP0R_SETUP = 1U << 11 ;

  // Field (width: 4 bits): Endpoint address
    inline uint32_t USB_EP0R_EA (const uint32_t inValue) { return (inValue & 15U) << 0 ; }

  // Boolean field: Correct Transfer for
              transmission
    static const uint32_t USB_EP0R_CTR_TX = 1U << 7 ;

  // Boolean field: Endpoint kind
    static const uint32_t USB_EP0R_EP_KIND = 1U << 8 ;

  // Boolean field: Data Toggle, for transmission
              transfers
    static const uint32_t USB_EP0R_DTOG_TX = 1U << 6 ;

  // Field (width: 2 bits): Endpoint type
    inline uint32_t USB_EP0R_EP_TYPE (const uint32_t inValue) { return (inValue & 3U) << 9 ; }

  // Boolean field: Correct transfer for
              reception
    static const uint32_t USB_EP0R_CTR_RX = 1U << 15 ;

//-------------------- endpoint 1 register
#define USB_EP1R(group) (* ((volatile uint32_t *) (kBaseAddress_USB [group] + 0x4)))
#define USB_SRAM_EP1R (* ((volatile uint32_t *) (0x40006C00 + 0x4)))

  // Field (width: 2 bits): Status bits, for reception
              transfers
    inline uint32_t USB_EP1R_STAT_RX (const uint32_t inValue) { return (inValue & 3U) << 12 ; }

  // Boolean field: Data Toggle, for reception
              transfers
    static const uint32_t USB_EP1R_DTOG_RX = 1U << 14 ;

  // Field (width: 2 bits): Status bits, for transmission
              transfers
    inline uint32_t USB_EP1R_STAT_TX (const uint32_t inValue) { return (inValue & 3U) << 4 ; }

  // Boolean field: Setup transaction
              completed
    static const uint32_t USB_EP1R_SETUP = 1U << 11 ;

  // Field (width: 4 bits): Endpoint address
    inline uint32_t USB_EP1R_EA (const uint32_t inValue) { return (inValue & 15U) << 0 ; }

  // Boolean field: Correct Transfer for
              transmission
    static const uint32_t USB_EP1R_CTR_TX = 1U << 7 ;

  // Boolean field: Endpoint kind
    static const uint32_t USB_EP1R_EP_KIND = 1U << 8 ;

  // Boolean field: Data Toggle, for transmission
              transfers
    static const uint32_t USB_EP1R_DTOG_TX = 1U << 6 ;

  // Field (width: 2 bits): Endpoint type
    inline uint32_t USB_EP1R_EP_TYPE (const uint32_t inValue) { return (inValue & 3U) << 9 ; }

  // Boolean field: Correct transfer for
              reception
    static const uint32_t USB_EP1R_CTR_RX = 1U << 15 ;

//-------------------- Battery charging detector
#define USB_BCDR(group) (* ((const volatile uint32_t *) (kBaseAddress_USB [group] + 0x58)))
#define USB_SRAM_BCDR (* ((const volatile uint32_t *) (0x40006C00 + 0x58)))

  // Boolean field: Primary detection
    static const uint32_t USB_BCDR_PDEN = 1U << 2 ;

  // Boolean field: Secondary detection
    static const uint32_t USB_BCDR_SDET = 1U << 6 ;

  // Boolean field: Battery charging detector
    static const uint32_t USB_BCDR_BCDEN = 1U << 0 ;

  // Boolean field: DM pull-up detection
              status
    static const uint32_t USB_BCDR_PS2DET = 1U << 7 ;

  // Boolean field: Data contact detection
    static const uint32_t USB_BCDR_DCDET = 1U << 4 ;

  // Boolean field: Data contact detection
    static const uint32_t USB_BCDR_DCDEN = 1U << 1 ;

  // Boolean field: Primary detection
    static const uint32_t USB_BCDR_PDET = 1U << 5 ;

  // Boolean field: Secondary detection
    static const uint32_t USB_BCDR_SDEN = 1U << 3 ;

  // Boolean field: DP pull-up control
    static const uint32_t USB_BCDR_DPPU = 1U << 15 ;

//-------------------- control register
#define USB_CNTR(group) (* ((volatile uint32_t *) (kBaseAddress_USB [group] + 0x40)))
#define USB_SRAM_CNTR (* ((volatile uint32_t *) (0x40006C00 + 0x40)))

  // Boolean field: USB reset interrupt mask
    static const uint32_t USB_CNTR_RESETM = 1U << 10 ;

  // Boolean field: Start of frame interrupt
              mask
    static const uint32_t USB_CNTR_SOFM = 1U << 9 ;

  // Boolean field: Force suspend
    static const uint32_t USB_CNTR_FSUSP = 1U << 3 ;

  // Boolean field: Resume request
    static const uint32_t USB_CNTR_RESUME = 1U << 4 ;

  // Boolean field: Packet memory area over / underrun
              interrupt mask
    static const uint32_t USB_CNTR_PMAOVRM = 1U << 14 ;

  // Boolean field: Correct transfer interrupt
              mask
    static const uint32_t USB_CNTR_CTRM = 1U << 15 ;

  // Boolean field: Power down
    static const uint32_t USB_CNTR_PDWN = 1U << 1 ;

  // Boolean field: Expected start of frame interrupt
              mask
    static const uint32_t USB_CNTR_ESOFM = 1U << 8 ;

  // Boolean field: LPM L1 state request interrupt
              mask
    static const uint32_t USB_CNTR_L1REQM = 1U << 7 ;

  // Boolean field: Wakeup interrupt mask
    static const uint32_t USB_CNTR_WKUPM = 1U << 12 ;

  // Boolean field: Low-power mode
    static const uint32_t USB_CNTR_LPMODE = 1U << 2 ;

  // Boolean field: LPM L1 Resume request
    static const uint32_t USB_CNTR_L1RESUME = 1U << 5 ;

  // Boolean field: Error interrupt mask
    static const uint32_t USB_CNTR_ERRM = 1U << 13 ;

  // Boolean field: Suspend mode interrupt
              mask
    static const uint32_t USB_CNTR_SUSPM = 1U << 11 ;

  // Boolean field: Force USB Reset
    static const uint32_t USB_CNTR_FRES = 1U << 0 ;

//-------------------- endpoint 6 register
#define USB_EP6R(group) (* ((volatile uint32_t *) (kBaseAddress_USB [group] + 0x18)))
#define USB_SRAM_EP6R (* ((volatile uint32_t *) (0x40006C00 + 0x18)))

  // Field (width: 2 bits): Status bits, for reception
              transfers
    inline uint32_t USB_EP6R_STAT_RX (const uint32_t inValue) { return (inValue & 3U) << 12 ; }

  // Boolean field: Data Toggle, for reception
              transfers
    static const uint32_t USB_EP6R_DTOG_RX = 1U << 14 ;

  // Field (width: 2 bits): Status bits, for transmission
              transfers
    inline uint32_t USB_EP6R_STAT_TX (const uint32_t inValue) { return (inValue & 3U) << 4 ; }

  // Boolean field: Setup transaction
              completed
    static const uint32_t USB_EP6R_SETUP = 1U << 11 ;

  // Field (width: 4 bits): Endpoint address
    inline uint32_t USB_EP6R_EA (const uint32_t inValue) { return (inValue & 15U) << 0 ; }

  // Boolean field: Correct Transfer for
              transmission
    static const uint32_t USB_EP6R_CTR_TX = 1U << 7 ;

  // Boolean field: Endpoint kind
    static const uint32_t USB_EP6R_EP_KIND = 1U << 8 ;

  // Boolean field: Data Toggle, for transmission
              transfers
    static const uint32_t USB_EP6R_DTOG_TX = 1U << 6 ;

  // Field (width: 2 bits): Endpoint type
    inline uint32_t USB_EP6R_EP_TYPE (const uint32_t inValue) { return (inValue & 3U) << 9 ; }

  // Boolean field: Correct transfer for
              reception
    static const uint32_t USB_EP6R_CTR_RX = 1U << 15 ;

//-------------------- endpoint 2 register
#define USB_EP2R(group) (* ((volatile uint32_t *) (kBaseAddress_USB [group] + 0x8)))
#define USB_SRAM_EP2R (* ((volatile uint32_t *) (0x40006C00 + 0x8)))

  // Field (width: 2 bits): Status bits, for reception
              transfers
    inline uint32_t USB_EP2R_STAT_RX (const uint32_t inValue) { return (inValue & 3U) << 12 ; }

  // Boolean field: Data Toggle, for reception
              transfers
    static const uint32_t USB_EP2R_DTOG_RX = 1U << 14 ;

  // Field (width: 2 bits): Status bits, for transmission
              transfers
    inline uint32_t USB_EP2R_STAT_TX (const uint32_t inValue) { return (inValue & 3U) << 4 ; }

  // Boolean field: Setup transaction
              completed
    static const uint32_t USB_EP2R_SETUP = 1U << 11 ;

  // Field (width: 4 bits): Endpoint address
    inline uint32_t USB_EP2R_EA (const uint32_t inValue) { return (inValue & 15U) << 0 ; }

  // Boolean field: Correct Transfer for
              transmission
    static const uint32_t USB_EP2R_CTR_TX = 1U << 7 ;

  // Boolean field: Endpoint kind
    static const uint32_t USB_EP2R_EP_KIND = 1U << 8 ;

  // Boolean field: Data Toggle, for transmission
              transfers
    static const uint32_t USB_EP2R_DTOG_TX = 1U << 6 ;

  // Field (width: 2 bits): Endpoint type
    inline uint32_t USB_EP2R_EP_TYPE (const uint32_t inValue) { return (inValue & 3U) << 9 ; }

  // Boolean field: Correct transfer for
              reception
    static const uint32_t USB_EP2R_CTR_RX = 1U << 15 ;

//-------------------- endpoint 3 register
#define USB_EP3R(group) (* ((volatile uint32_t *) (kBaseAddress_USB [group] + 0xC)))
#define USB_SRAM_EP3R (* ((volatile uint32_t *) (0x40006C00 + 0xC)))

  // Field (width: 2 bits): Status bits, for reception
              transfers
    inline uint32_t USB_EP3R_STAT_RX (const uint32_t inValue) { return (inValue & 3U) << 12 ; }

  // Boolean field: Data Toggle, for reception
              transfers
    static const uint32_t USB_EP3R_DTOG_RX = 1U << 14 ;

  // Field (width: 2 bits): Status bits, for transmission
              transfers
    inline uint32_t USB_EP3R_STAT_TX (const uint32_t inValue) { return (inValue & 3U) << 4 ; }

  // Boolean field: Setup transaction
              completed
    static const uint32_t USB_EP3R_SETUP = 1U << 11 ;

  // Field (width: 4 bits): Endpoint address
    inline uint32_t USB_EP3R_EA (const uint32_t inValue) { return (inValue & 15U) << 0 ; }

  // Boolean field: Correct Transfer for
              transmission
    static const uint32_t USB_EP3R_CTR_TX = 1U << 7 ;

  // Boolean field: Endpoint kind
    static const uint32_t USB_EP3R_EP_KIND = 1U << 8 ;

  // Boolean field: Data Toggle, for transmission
              transfers
    static const uint32_t USB_EP3R_DTOG_TX = 1U << 6 ;

  // Field (width: 2 bits): Endpoint type
    inline uint32_t USB_EP3R_EP_TYPE (const uint32_t inValue) { return (inValue & 3U) << 9 ; }

  // Boolean field: Correct transfer for
              reception
    static const uint32_t USB_EP3R_CTR_RX = 1U << 15 ;

//-------------------- LPM control and status
          register
#define USB_LPMCSR(group) (* ((const volatile uint32_t *) (kBaseAddress_USB [group] + 0x54)))
#define USB_SRAM_LPMCSR (* ((const volatile uint32_t *) (0x40006C00 + 0x54)))

  // Boolean field: LPM support enable
    static const uint32_t USB_LPMCSR_LPMEN = 1U << 0 ;

  // Boolean field: LPM Token acknowledge
              enable
    static const uint32_t USB_LPMCSR_LPMACK = 1U << 1 ;

  // Boolean field: bRemoteWake value
    static const uint32_t USB_LPMCSR_REMWAKE = 1U << 3 ;

  // Field (width: 4 bits): BESL value
    inline uint32_t USB_LPMCSR_BESL (const uint32_t inValue) { return (inValue & 15U) << 4 ; }

//-------------------- frame number register
#define USB_FNR(group) (* ((const volatile uint32_t *) (kBaseAddress_USB [group] + 0x48)))
#define USB_SRAM_FNR (* ((const volatile uint32_t *) (0x40006C00 + 0x48)))

  // Boolean field: Receive data + line status
    static const uint32_t USB_FNR_RXDP = 1U << 15 ;

  // Boolean field: Receive data - line status
    static const uint32_t USB_FNR_RXDM = 1U << 14 ;

  // Field (width: 2 bits): Lost SOF
    inline uint32_t USB_FNR_LSOF (const uint32_t inValue) { return (inValue & 3U) << 11 ; }

  // Boolean field: Locked
    static const uint32_t USB_FNR_LCK = 1U << 13 ;

  // Field (width: 11 bits): Frame number
    inline uint32_t USB_FNR_FN (const uint32_t inValue) { return (inValue & 2047U) << 0 ; }

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
// Peripheral group VREF
//                VREFBUF at 0x40010030
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

static const uint32_t kBaseAddress_VREF [1] = {0x40010030} ;

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

//-------------------- calibration control register
#define VREF_CCR(group) (* ((volatile uint32_t *) (kBaseAddress_VREF [group] + 0x4)))
#define VREFBUF_CCR (* ((volatile uint32_t *) (0x40010030 + 0x4)))

  // Field (width: 6 bits): Trimming code
    inline uint32_t VREF_CCR_TRIM (const uint32_t inValue) { return (inValue & 63U) << 0 ; }

//-------------------- VREF control and status
          register
#define VREF_CSR(group) (* ((const volatile uint32_t *) (kBaseAddress_VREF [group] + 0x0)))
#define VREFBUF_CSR (* ((const volatile uint32_t *) (0x40010030 + 0x0)))

  // Boolean field: Voltage reference scale
    static const uint32_t VREF_CSR_VRS = 1U << 2 ;

  // Boolean field: Voltage reference buffer
              enable
    static const uint32_t VREF_CSR_ENVR = 1U << 0 ;

  // Boolean field: High impedance mode
    static const uint32_t VREF_CSR_HIZ = 1U << 1 ;

  // Boolean field: Voltage reference buffer
              ready
    static const uint32_t VREF_CSR_VRR = 1U << 3 ;

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
// Peripheral group WWDG
//                WWDG at 0x40002C00
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

static const uint32_t kBaseAddress_WWDG [1] = {0x40002C00} ;

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

//-------------------- Control register
#define WWDG_CR(group) (* ((volatile uint32_t *) (kBaseAddress_WWDG [group] + 0x0)))
#define WWDG_CR (* ((volatile uint32_t *) (0x40002C00 + 0x0)))

  // Boolean field: Activation bit
    static const uint32_t WWDG_CR_WDGA = 1U << 7 ;

  // Field (width: 7 bits): 7-bit counter (MSB to LSB)
    inline uint32_t WWDG_CR_T (const uint32_t inValue) { return (inValue & 127U) << 0 ; }

//-------------------- Configuration register
#define WWDG_CFR(group) (* ((volatile uint32_t *) (kBaseAddress_WWDG [group] + 0x4)))
#define WWDG_CFR (* ((volatile uint32_t *) (0x40002C00 + 0x4)))

  // Boolean field: Early wakeup interrupt
    static const uint32_t WWDG_CFR_EWI = 1U << 9 ;

  // Field (width: 7 bits): 7-bit window value
    inline uint32_t WWDG_CFR_W (const uint32_t inValue) { return (inValue & 127U) << 0 ; }

  // Field (width: 2 bits): Timer base
    inline uint32_t WWDG_CFR_WDGTB (const uint32_t inValue) { return (inValue & 3U) << 7 ; }

//-------------------- Status register
#define WWDG_SR(group) (* ((volatile uint32_t *) (kBaseAddress_WWDG [group] + 0x8)))
#define WWDG_SR (* ((volatile uint32_t *) (0x40002C00 + 0x8)))

  // Boolean field: Early wakeup interrupt
              flag
    static const uint32_t WWDG_SR_EWIF = 1U << 0 ;

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
// INTERRUPTS
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

enum class ISRSlot : uint8_t {
  ADC1 = 18,
  ADC3 = 47,
  AES = 79,
  CAN1_RX0 = 20,
  CAN1_RX1 = 21,
  CAN1_SCE = 22,
  CAN1_TX = 19,
  COMP = 64,
  CRS = 82,
  DFSDM1 = 61,
  DFSDM1_FLT2 = 63,
  DFSDM1_FLT3 = 42,
  DFSDM2 = 62,
  DMA1_CH1 = 11,
  DMA1_CH2 = 12,
  DMA1_CH3 = 13,
  DMA1_CH4 = 14,
  DMA1_CH5 = 15,
  DMA1_CH6 = 16,
  DMA1_CH7 = 17,
  DMA2_CH1 = 56,
  DMA2_CH2 = 57,
  DMA2_CH3 = 58,
  DMA2_CH4 = 59,
  DMA2_CH5 = 60,
  DMA2_CH6 = 68,
  DMA2_CH7 = 69,
  EXTI0 = 6,
  EXTI1 = 7,
  EXTI15_10 = 40,
  EXTI2 = 8,
  EXTI3 = 9,
  EXTI4 = 10,
  EXTI9_5 = 23,
  FLASH = 4,
  FPU = 81,
  I2C1_ER = 32,
  I2C1_EV = 31,
  I2C2_ER = 34,
  I2C2_EV = 33,
  I2C3_ER = 73,
  I2C3_EV = 72,
  I2C4_ER = 84,
  I2C4_EV = 83,
  LCD = 78,
  LPTIM1 = 65,
  LPTIM2 = 66,
  LPUART1 = 70,
  PVD_PVM = 1,
  QUADSPI = 71,
  RCC = 5,
  RNG = 80,
  RTC_ALARM = 41,
  RTC_TAMP_STAMP = 2,
  RTC_WKUP = 3,
  SAI1 = 74,
  SDMMC1 = 49,
  SPI1 = 35,
  SPI2 = 36,
  SPI3 = 51,
  SWPMI1 = 76,
  TIM1_BRK_TIM15 = 24,
  TIM1_CC = 27,
  TIM1_TRG_COM = 26,
  TIM1_UP_TIM16 = 25,
  TIM2 = 28,
  TIM3 = 29,
  TIM6_DACUNDER = 54,
  TIM7 = 55,
  TSC = 77,
  UART4 = 52,
  USART1 = 37,
  USART2 = 38,
  USART3 = 39,
  USB_FS = 67,
  WWDG = 0,
} ;

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

inline void NVIC_ENABLE_IRQ (const ISRSlot inInterrupt) {
  const uint32_t it = static_cast <uint32_t> (inInterrupt) ;
  *((volatile uint32_t *) (0xE000E100 + 4 * (it >> 5))) = 1U << (it & 31) ;
}

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

inline void NVIC_DISABLE_IRQ (const ISRSlot inInterrupt) {
  const uint32_t it = static_cast <uint32_t> (inInterrupt) ;
  *((volatile uint32_t *) (0xE000E180 + 4 * (it >> 5))) = 1U << (it & 31) ;
}

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
// BITBAND
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

inline void bitband32 (const volatile uint32_t & inRegister, const uint8_t inBit, const bool inValue) {
  const uint32_t address = ((uint32_t) &inRegister - 0x40000000) * 32 + ((uint32_t) inBit) * 4 + 0x42000000 ;
  volatile uint32_t * ptr = (volatile uint32_t *) address ;
  *ptr = (uint32_t) inValue ;
}

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
