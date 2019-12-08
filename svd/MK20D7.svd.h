#pragma once

//------------------------------------------------------------------------------
// MK20D7: MK20D7 Freescale Microcontroller
//------------------------------------------------------------------------------

#include <stdint.h>

//------------------------------------------------------------------------------
// PERIPHERAL GROUP: ADC
//        ADC0 at 0x4003b000
//        ADC1 at 0x400bb000
//------------------------------------------------------------------------------

static const uint32_t kBaseAddress_ADC [2] = {0x4003b000, 0x400bb000} ;

//------------------------------------------------------------------------------

//---  Registers SC1(A,B): ADC status and control registers 1
  #define ADC_SC1(group,idx) (* ((volatile uint32_t *) (kBaseAddress_SC1 [group] + 0x0 + (idx) * 0x4)))
  #define ADC0_SC1(idx) (* ((volatile uint32_t *) (0x4003b000 + 0x0 + (idx) * 0x4)))
  #define ADC1_SC1(idx) (* ((volatile uint32_t *) (0x400bb000 + 0x0 + (idx) * 0x4)))
  #define ADC0_SC1A (* ((volatile uint32_t *) (0x4003b000 + 0x0 + 0 * 0x4)))
  #define ADC1_SC1A (* ((volatile uint32_t *) (0x400bb000 + 0x0 + 0 * 0x4)))
  #define ADC0_SC1B (* ((volatile uint32_t *) (0x4003b000 + 0x0 + 1 * 0x4)))
  #define ADC1_SC1B (* ((volatile uint32_t *) (0x400bb000 + 0x0 + 1 * 0x4)))

  // Field ADCH: Input channel select
    inline uint32_t ADC_SC1_ADCH (const uint32_t inValue) {return (inValue & 0x1fU) << 0 ; }

  // Field DIFF: Differential mode enable
    const uint32_t ADC_SC1_DIFF = 1U << 5 ;

  // Field AIEN: Interrupt enable
    const uint32_t ADC_SC1_AIEN = 1U << 6 ;

  // Field COCO: Conversion complete flag
    const uint32_t ADC_SC1_COCO = 1U << 7 ;

  // Field RESERVED: no description available
    inline uint32_t ADC_SC1_RESERVED (const uint32_t inValue) {return (inValue & 0xffffffU) << 8 ; }

//---  Register CFG1: ADC configuration register 1
  #define ADC_CFG1(group) (* ((volatile uint32_t *) (kBaseAddress_CFG1 [group] + 0x8)))
  #define ADC0_CFG1 (* ((volatile uint32_t *) (0x4003b000 + 0x8)))
  #define ADC1_CFG1 (* ((volatile uint32_t *) (0x400bb000 + 0x8)))

  // Field ADICLK: Input clock select
    inline uint32_t ADC_CFG1_ADICLK (const uint32_t inValue) {return (inValue & 0x3U) << 0 ; }

  // Field MODE: Conversion mode selection
    inline uint32_t ADC_CFG1_MODE (const uint32_t inValue) {return (inValue & 0x3U) << 2 ; }

  // Field ADLSMP: Sample time configuration
    const uint32_t ADC_CFG1_ADLSMP = 1U << 4 ;

  // Field ADIV: Clock divide select
    inline uint32_t ADC_CFG1_ADIV (const uint32_t inValue) {return (inValue & 0x3U) << 5 ; }

  // Field ADLPC: Low-power configuration
    const uint32_t ADC_CFG1_ADLPC = 1U << 7 ;

  // Field RESERVED: no description available
    inline uint32_t ADC_CFG1_RESERVED (const uint32_t inValue) {return (inValue & 0xffffffU) << 8 ; }

//---  Register CFG2: Configuration register 2
  #define ADC_CFG2(group) (* ((volatile uint32_t *) (kBaseAddress_CFG2 [group] + 0xc)))
  #define ADC0_CFG2 (* ((volatile uint32_t *) (0x4003b000 + 0xc)))
  #define ADC1_CFG2 (* ((volatile uint32_t *) (0x400bb000 + 0xc)))

  // Field ADLSTS: Long sample time select
    inline uint32_t ADC_CFG2_ADLSTS (const uint32_t inValue) {return (inValue & 0x3U) << 0 ; }

  // Field ADHSC: High speed configuration
    const uint32_t ADC_CFG2_ADHSC = 1U << 2 ;

  // Field ADACKEN: Asynchronous clock output enable
    const uint32_t ADC_CFG2_ADACKEN = 1U << 3 ;

  // Field MUXSEL: ADC Mux select
    const uint32_t ADC_CFG2_MUXSEL = 1U << 4 ;

  // Field RESERVED: no description available
    inline uint32_t ADC_CFG2_RESERVED (const uint32_t inValue) {return (inValue & 0x7U) << 5 ; }

  // Field RESERVED: no description available
    inline uint32_t ADC_CFG2_RESERVED (const uint32_t inValue) {return (inValue & 0xffffffU) << 8 ; }

//---  Registers R(A,B): ADC data result register
  #define ADC_R(group,idx) (* ((volatile uint32_t *) (kBaseAddress_R [group] + 0x10 + (idx) * 0x4)))
  #define ADC0_R(idx) (* ((volatile uint32_t *) (0x4003b000 + 0x10 + (idx) * 0x4)))
  #define ADC1_R(idx) (* ((volatile uint32_t *) (0x400bb000 + 0x10 + (idx) * 0x4)))
  #define ADC0_RA (* ((volatile uint32_t *) (0x4003b000 + 0x10 + 0 * 0x4)))
  #define ADC1_RA (* ((volatile uint32_t *) (0x400bb000 + 0x10 + 0 * 0x4)))
  #define ADC0_RB (* ((volatile uint32_t *) (0x4003b000 + 0x10 + 1 * 0x4)))
  #define ADC1_RB (* ((volatile uint32_t *) (0x400bb000 + 0x10 + 1 * 0x4)))

  // Field D: Data result
    inline uint32_t ADC_R_D (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

  // Field RESERVED: no description available
    inline uint32_t ADC_R_RESERVED (const uint32_t inValue) {return (inValue & 0xffffU) << 16 ; }

//---  Registers CV(1,2): Compare value registers
  #define ADC_CV(group,idx) (* ((volatile uint32_t *) (kBaseAddress_CV [group] + 0x18 + (idx) * 0x4)))
  #define ADC0_CV(idx) (* ((volatile uint32_t *) (0x4003b000 + 0x18 + (idx) * 0x4)))
  #define ADC1_CV(idx) (* ((volatile uint32_t *) (0x400bb000 + 0x18 + (idx) * 0x4)))
  #define ADC0_CV1 (* ((volatile uint32_t *) (0x4003b000 + 0x18 + 0 * 0x4)))
  #define ADC1_CV1 (* ((volatile uint32_t *) (0x400bb000 + 0x18 + 0 * 0x4)))
  #define ADC0_CV2 (* ((volatile uint32_t *) (0x4003b000 + 0x18 + 1 * 0x4)))
  #define ADC1_CV2 (* ((volatile uint32_t *) (0x400bb000 + 0x18 + 1 * 0x4)))

  // Field CV: Compare value
    inline uint32_t ADC_CV_CV (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

  // Field RESERVED: no description available
    inline uint32_t ADC_CV_RESERVED (const uint32_t inValue) {return (inValue & 0xffffU) << 16 ; }

//---  Register SC2: Status and control register 2
  #define ADC_SC2(group) (* ((volatile uint32_t *) (kBaseAddress_SC2 [group] + 0x20)))
  #define ADC0_SC2 (* ((volatile uint32_t *) (0x4003b000 + 0x20)))
  #define ADC1_SC2 (* ((volatile uint32_t *) (0x400bb000 + 0x20)))

  // Field REFSEL: Voltage reference selection
    inline uint32_t ADC_SC2_REFSEL (const uint32_t inValue) {return (inValue & 0x3U) << 0 ; }

  // Field DMAEN: DMA enable
    const uint32_t ADC_SC2_DMAEN = 1U << 2 ;

  // Field ACREN: Compare function range enable
    const uint32_t ADC_SC2_ACREN = 1U << 3 ;

  // Field ACFGT: Compare function greater than enable
    const uint32_t ADC_SC2_ACFGT = 1U << 4 ;

  // Field ACFE: Compare function enable
    const uint32_t ADC_SC2_ACFE = 1U << 5 ;

  // Field ADTRG: Conversion trigger select
    const uint32_t ADC_SC2_ADTRG = 1U << 6 ;

  // Field ADACT: Conversion active
    const uint32_t ADC_SC2_ADACT = 1U << 7 ;

  // Field RESERVED: no description available
    inline uint32_t ADC_SC2_RESERVED (const uint32_t inValue) {return (inValue & 0xffffffU) << 8 ; }

//---  Register SC3: Status and control register 3
  #define ADC_SC3(group) (* ((volatile uint32_t *) (kBaseAddress_SC3 [group] + 0x24)))
  #define ADC0_SC3 (* ((volatile uint32_t *) (0x4003b000 + 0x24)))
  #define ADC1_SC3 (* ((volatile uint32_t *) (0x400bb000 + 0x24)))

  // Field AVGS: Hardware average select
    inline uint32_t ADC_SC3_AVGS (const uint32_t inValue) {return (inValue & 0x3U) << 0 ; }

  // Field AVGE: Hardware average enable
    const uint32_t ADC_SC3_AVGE = 1U << 2 ;

  // Field ADCO: Continuous conversion enable
    const uint32_t ADC_SC3_ADCO = 1U << 3 ;

  // Field RESERVED: no description available
    inline uint32_t ADC_SC3_RESERVED (const uint32_t inValue) {return (inValue & 0x3U) << 4 ; }

  // Field CALF: Calibration failed flag
    const uint32_t ADC_SC3_CALF = 1U << 6 ;

  // Field CAL: Calibration
    const uint32_t ADC_SC3_CAL = 1U << 7 ;

  // Field RESERVED: no description available
    inline uint32_t ADC_SC3_RESERVED (const uint32_t inValue) {return (inValue & 0xffffffU) << 8 ; }

//---  Register OFS: ADC offset correction register
  #define ADC_OFS(group) (* ((volatile uint32_t *) (kBaseAddress_OFS [group] + 0x28)))
  #define ADC0_OFS (* ((volatile uint32_t *) (0x4003b000 + 0x28)))
  #define ADC1_OFS (* ((volatile uint32_t *) (0x400bb000 + 0x28)))

  // Field OFS: Offset error correction value
    inline uint32_t ADC_OFS_OFS (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

  // Field RESERVED: no description available
    inline uint32_t ADC_OFS_RESERVED (const uint32_t inValue) {return (inValue & 0xffffU) << 16 ; }

//---  Register PG: ADC plus-side gain register
  #define ADC_PG(group) (* ((volatile uint32_t *) (kBaseAddress_PG [group] + 0x2c)))
  #define ADC0_PG (* ((volatile uint32_t *) (0x4003b000 + 0x2c)))
  #define ADC1_PG (* ((volatile uint32_t *) (0x400bb000 + 0x2c)))

  // Field PG: Plus-side gain
    inline uint32_t ADC_PG_PG (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

  // Field RESERVED: no description available
    inline uint32_t ADC_PG_RESERVED (const uint32_t inValue) {return (inValue & 0xffffU) << 16 ; }

//---  Register MG: ADC minus-side gain register
  #define ADC_MG(group) (* ((volatile uint32_t *) (kBaseAddress_MG [group] + 0x30)))
  #define ADC0_MG (* ((volatile uint32_t *) (0x4003b000 + 0x30)))
  #define ADC1_MG (* ((volatile uint32_t *) (0x400bb000 + 0x30)))

  // Field MG: Minus-side gain
    inline uint32_t ADC_MG_MG (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

  // Field RESERVED: no description available
    inline uint32_t ADC_MG_RESERVED (const uint32_t inValue) {return (inValue & 0xffffU) << 16 ; }

//---  Register CLPD: ADC plus-side general calibration value register
  #define ADC_CLPD(group) (* ((volatile uint32_t *) (kBaseAddress_CLPD [group] + 0x34)))
  #define ADC0_CLPD (* ((volatile uint32_t *) (0x4003b000 + 0x34)))
  #define ADC1_CLPD (* ((volatile uint32_t *) (0x400bb000 + 0x34)))

  // Field CLPD: no description available
    inline uint32_t ADC_CLPD_CLPD (const uint32_t inValue) {return (inValue & 0x3fU) << 0 ; }

  // Field RESERVED: no description available
    inline uint32_t ADC_CLPD_RESERVED (const uint32_t inValue) {return (inValue & 0x3ffffffU) << 6 ; }

//---  Register CLPS: ADC plus-side general calibration value register
  #define ADC_CLPS(group) (* ((volatile uint32_t *) (kBaseAddress_CLPS [group] + 0x38)))
  #define ADC0_CLPS (* ((volatile uint32_t *) (0x4003b000 + 0x38)))
  #define ADC1_CLPS (* ((volatile uint32_t *) (0x400bb000 + 0x38)))

  // Field CLPS: no description available
    inline uint32_t ADC_CLPS_CLPS (const uint32_t inValue) {return (inValue & 0x3fU) << 0 ; }

  // Field RESERVED: no description available
    inline uint32_t ADC_CLPS_RESERVED (const uint32_t inValue) {return (inValue & 0x3ffffffU) << 6 ; }

//---  Register CLP4: ADC plus-side general calibration value register
  #define ADC_CLP4(group) (* ((volatile uint32_t *) (kBaseAddress_CLP4 [group] + 0x3c)))
  #define ADC0_CLP4 (* ((volatile uint32_t *) (0x4003b000 + 0x3c)))
  #define ADC1_CLP4 (* ((volatile uint32_t *) (0x400bb000 + 0x3c)))

  // Field CLP4: no description available
    inline uint32_t ADC_CLP4_CLP4 (const uint32_t inValue) {return (inValue & 0x3ffU) << 0 ; }

  // Field RESERVED: no description available
    inline uint32_t ADC_CLP4_RESERVED (const uint32_t inValue) {return (inValue & 0x3fffffU) << 10 ; }

//---  Register CLP3: ADC plus-side general calibration value register
  #define ADC_CLP3(group) (* ((volatile uint32_t *) (kBaseAddress_CLP3 [group] + 0x40)))
  #define ADC0_CLP3 (* ((volatile uint32_t *) (0x4003b000 + 0x40)))
  #define ADC1_CLP3 (* ((volatile uint32_t *) (0x400bb000 + 0x40)))

  // Field CLP3: no description available
    inline uint32_t ADC_CLP3_CLP3 (const uint32_t inValue) {return (inValue & 0x1ffU) << 0 ; }

  // Field RESERVED: no description available
    inline uint32_t ADC_CLP3_RESERVED (const uint32_t inValue) {return (inValue & 0x7fffffU) << 9 ; }

//---  Register CLP2: ADC plus-side general calibration value register
  #define ADC_CLP2(group) (* ((volatile uint32_t *) (kBaseAddress_CLP2 [group] + 0x44)))
  #define ADC0_CLP2 (* ((volatile uint32_t *) (0x4003b000 + 0x44)))
  #define ADC1_CLP2 (* ((volatile uint32_t *) (0x400bb000 + 0x44)))

  // Field CLP2: no description available
    inline uint32_t ADC_CLP2_CLP2 (const uint32_t inValue) {return (inValue & 0xffU) << 0 ; }

  // Field RESERVED: no description available
    inline uint32_t ADC_CLP2_RESERVED (const uint32_t inValue) {return (inValue & 0xffffffU) << 8 ; }

//---  Register CLP1: ADC plus-side general calibration value register
  #define ADC_CLP1(group) (* ((volatile uint32_t *) (kBaseAddress_CLP1 [group] + 0x48)))
  #define ADC0_CLP1 (* ((volatile uint32_t *) (0x4003b000 + 0x48)))
  #define ADC1_CLP1 (* ((volatile uint32_t *) (0x400bb000 + 0x48)))

  // Field CLP1: no description available
    inline uint32_t ADC_CLP1_CLP1 (const uint32_t inValue) {return (inValue & 0x7fU) << 0 ; }

  // Field RESERVED: no description available
    inline uint32_t ADC_CLP1_RESERVED (const uint32_t inValue) {return (inValue & 0x1ffffffU) << 7 ; }

//---  Register CLP0: ADC plus-side general calibration value register
  #define ADC_CLP0(group) (* ((volatile uint32_t *) (kBaseAddress_CLP0 [group] + 0x4c)))
  #define ADC0_CLP0 (* ((volatile uint32_t *) (0x4003b000 + 0x4c)))
  #define ADC1_CLP0 (* ((volatile uint32_t *) (0x400bb000 + 0x4c)))

  // Field CLP0: no description available
    inline uint32_t ADC_CLP0_CLP0 (const uint32_t inValue) {return (inValue & 0x3fU) << 0 ; }

  // Field RESERVED: no description available
    inline uint32_t ADC_CLP0_RESERVED (const uint32_t inValue) {return (inValue & 0x3ffffffU) << 6 ; }

//---  Register PGA: ADC PGA register
  #define ADC_PGA(group) (* ((volatile uint32_t *) (kBaseAddress_PGA [group] + 0x50)))
  #define ADC0_PGA (* ((volatile uint32_t *) (0x4003b000 + 0x50)))
  #define ADC1_PGA (* ((volatile uint32_t *) (0x400bb000 + 0x50)))

  // Field RESERVED: no description available
    inline uint32_t ADC_PGA_RESERVED (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

  // Field PGAG: PGA gain setting
    inline uint32_t ADC_PGA_PGAG (const uint32_t inValue) {return (inValue & 0xfU) << 16 ; }

  // Field PGALPb: PGA low-power mode control
    const uint32_t ADC_PGA_PGALPb = 1U << 20 ;

  // Field RESERVED: no description available
    const uint32_t ADC_PGA_RESERVED = 1U << 21 ;

  // Field RESERVED: no description available
    const uint32_t ADC_PGA_RESERVED = 1U << 22 ;

  // Field PGAEN: PGA enable
    const uint32_t ADC_PGA_PGAEN = 1U << 23 ;

  // Field RESERVED: no description available
    inline uint32_t ADC_PGA_RESERVED (const uint32_t inValue) {return (inValue & 0xffU) << 24 ; }

//---  Register CLMD: ADC minus-side general calibration value register
  #define ADC_CLMD(group) (* ((volatile uint32_t *) (kBaseAddress_CLMD [group] + 0x54)))
  #define ADC0_CLMD (* ((volatile uint32_t *) (0x4003b000 + 0x54)))
  #define ADC1_CLMD (* ((volatile uint32_t *) (0x400bb000 + 0x54)))

  // Field CLMD: no description available
    inline uint32_t ADC_CLMD_CLMD (const uint32_t inValue) {return (inValue & 0x3fU) << 0 ; }

  // Field RESERVED: no description available
    inline uint32_t ADC_CLMD_RESERVED (const uint32_t inValue) {return (inValue & 0x3ffffffU) << 6 ; }

//---  Register CLMS: ADC minus-side general calibration value register
  #define ADC_CLMS(group) (* ((volatile uint32_t *) (kBaseAddress_CLMS [group] + 0x58)))
  #define ADC0_CLMS (* ((volatile uint32_t *) (0x4003b000 + 0x58)))
  #define ADC1_CLMS (* ((volatile uint32_t *) (0x400bb000 + 0x58)))

  // Field CLMS: no description available
    inline uint32_t ADC_CLMS_CLMS (const uint32_t inValue) {return (inValue & 0x3fU) << 0 ; }

  // Field RESERVED: no description available
    inline uint32_t ADC_CLMS_RESERVED (const uint32_t inValue) {return (inValue & 0x3ffffffU) << 6 ; }

//---  Register CLM4: ADC minus-side general calibration value register
  #define ADC_CLM4(group) (* ((volatile uint32_t *) (kBaseAddress_CLM4 [group] + 0x5c)))
  #define ADC0_CLM4 (* ((volatile uint32_t *) (0x4003b000 + 0x5c)))
  #define ADC1_CLM4 (* ((volatile uint32_t *) (0x400bb000 + 0x5c)))

  // Field CLM4: no description available
    inline uint32_t ADC_CLM4_CLM4 (const uint32_t inValue) {return (inValue & 0x3ffU) << 0 ; }

  // Field RESERVED: no description available
    inline uint32_t ADC_CLM4_RESERVED (const uint32_t inValue) {return (inValue & 0x3fffffU) << 10 ; }

//---  Register CLM3: ADC minus-side general calibration value register
  #define ADC_CLM3(group) (* ((volatile uint32_t *) (kBaseAddress_CLM3 [group] + 0x60)))
  #define ADC0_CLM3 (* ((volatile uint32_t *) (0x4003b000 + 0x60)))
  #define ADC1_CLM3 (* ((volatile uint32_t *) (0x400bb000 + 0x60)))

  // Field CLM3: no description available
    inline uint32_t ADC_CLM3_CLM3 (const uint32_t inValue) {return (inValue & 0x1ffU) << 0 ; }

  // Field RESERVED: no description available
    inline uint32_t ADC_CLM3_RESERVED (const uint32_t inValue) {return (inValue & 0x7fffffU) << 9 ; }

//---  Register CLM2: ADC minus-side general calibration value register
  #define ADC_CLM2(group) (* ((volatile uint32_t *) (kBaseAddress_CLM2 [group] + 0x64)))
  #define ADC0_CLM2 (* ((volatile uint32_t *) (0x4003b000 + 0x64)))
  #define ADC1_CLM2 (* ((volatile uint32_t *) (0x400bb000 + 0x64)))

  // Field CLM2: no description available
    inline uint32_t ADC_CLM2_CLM2 (const uint32_t inValue) {return (inValue & 0xffU) << 0 ; }

  // Field RESERVED: no description available
    inline uint32_t ADC_CLM2_RESERVED (const uint32_t inValue) {return (inValue & 0xffffffU) << 8 ; }

//---  Register CLM1: ADC minus-side general calibration value register
  #define ADC_CLM1(group) (* ((volatile uint32_t *) (kBaseAddress_CLM1 [group] + 0x68)))
  #define ADC0_CLM1 (* ((volatile uint32_t *) (0x4003b000 + 0x68)))
  #define ADC1_CLM1 (* ((volatile uint32_t *) (0x400bb000 + 0x68)))

  // Field CLM1: no description available
    inline uint32_t ADC_CLM1_CLM1 (const uint32_t inValue) {return (inValue & 0x7fU) << 0 ; }

  // Field RESERVED: no description available
    inline uint32_t ADC_CLM1_RESERVED (const uint32_t inValue) {return (inValue & 0x1ffffffU) << 7 ; }

//---  Register CLM0: ADC minus-side general calibration value register
  #define ADC_CLM0(group) (* ((volatile uint32_t *) (kBaseAddress_CLM0 [group] + 0x6c)))
  #define ADC0_CLM0 (* ((volatile uint32_t *) (0x4003b000 + 0x6c)))
  #define ADC1_CLM0 (* ((volatile uint32_t *) (0x400bb000 + 0x6c)))

  // Field CLM0: no description available
    inline uint32_t ADC_CLM0_CLM0 (const uint32_t inValue) {return (inValue & 0x3fU) << 0 ; }

  // Field RESERVED: no description available
    inline uint32_t ADC_CLM0_RESERVED (const uint32_t inValue) {return (inValue & 0x3ffffffU) << 6 ; }

//------------------------------------------------------------------------------
// PERIPHERAL GROUP: AIPS
//        AIPS0 at 0x40000000
//        AIPS1 at 0x40080000
//------------------------------------------------------------------------------

static const uint32_t kBaseAddress_AIPS [2] = {0x40000000, 0x40080000} ;

//------------------------------------------------------------------------------

//---  Register MPRA: Master Privilege Register A
  #define AIPS_MPRA(group) (* ((volatile uint32_t *) (kBaseAddress_MPRA [group] + 0x0)))
  #define AIPS0_MPRA (* ((volatile uint32_t *) (0x40000000 + 0x0)))
  #define AIPS1_MPRA (* ((volatile uint32_t *) (0x40080000 + 0x0)))

  // Field RESERVED: no description available
    inline uint32_t AIPS_MPRA_RESERVED (const uint32_t inValue) {return (inValue & 0xfU) << 0 ; }

  // Field RESERVED: no description available
    inline uint32_t AIPS_MPRA_RESERVED (const uint32_t inValue) {return (inValue & 0xfU) << 4 ; }

  // Field RESERVED: no description available
    inline uint32_t AIPS_MPRA_RESERVED (const uint32_t inValue) {return (inValue & 0xfU) << 8 ; }

  // Field RESERVED: no description available
    inline uint32_t AIPS_MPRA_RESERVED (const uint32_t inValue) {return (inValue & 0xfU) << 12 ; }

  // Field MPL3: Master privilege level
    const uint32_t AIPS_MPRA_MPL3 = 1U << 16 ;

  // Field MTW3: Master trusted for writes
    const uint32_t AIPS_MPRA_MTW3 = 1U << 17 ;

  // Field MTR3: Master trusted for read
    const uint32_t AIPS_MPRA_MTR3 = 1U << 18 ;

  // Field RESERVED: no description available
    const uint32_t AIPS_MPRA_RESERVED = 1U << 19 ;

  // Field MPL2: Master privilege level
    const uint32_t AIPS_MPRA_MPL2 = 1U << 20 ;

  // Field MTW2: Master trusted for writes
    const uint32_t AIPS_MPRA_MTW2 = 1U << 21 ;

  // Field MTR2: Master trusted for read
    const uint32_t AIPS_MPRA_MTR2 = 1U << 22 ;

  // Field RESERVED: no description available
    const uint32_t AIPS_MPRA_RESERVED = 1U << 23 ;

  // Field MPL1: Master privilege level
    const uint32_t AIPS_MPRA_MPL1 = 1U << 24 ;

  // Field MTW1: Master trusted for writes
    const uint32_t AIPS_MPRA_MTW1 = 1U << 25 ;

  // Field MTR1: Master trusted for read
    const uint32_t AIPS_MPRA_MTR1 = 1U << 26 ;

  // Field RESERVED: no description available
    const uint32_t AIPS_MPRA_RESERVED = 1U << 27 ;

  // Field MPL0: Master privilege level
    const uint32_t AIPS_MPRA_MPL0 = 1U << 28 ;

  // Field MTW0: Master trusted for writes
    const uint32_t AIPS_MPRA_MTW0 = 1U << 29 ;

  // Field MTR0: Master trusted for read
    const uint32_t AIPS_MPRA_MTR0 = 1U << 30 ;

  // Field RESERVED: no description available
    const uint32_t AIPS_MPRA_RESERVED = 1U << 31 ;

//---  Register PACRA: Peripheral Access Control Register
  #define AIPS_PACRA(group) (* ((volatile uint32_t *) (kBaseAddress_PACRA [group] + 0x20)))
  #define AIPS0_PACRA (* ((volatile uint32_t *) (0x40000000 + 0x20)))
  #define AIPS1_PACRA (* ((volatile uint32_t *) (0x40080000 + 0x20)))

  // Field TP7: Trusted protect
    const uint32_t AIPS_PACRA_TP7 = 1U << 0 ;

  // Field WP7: Write protect
    const uint32_t AIPS_PACRA_WP7 = 1U << 1 ;

  // Field SP7: Supervisor protect
    const uint32_t AIPS_PACRA_SP7 = 1U << 2 ;

  // Field RESERVED: no description available
    const uint32_t AIPS_PACRA_RESERVED = 1U << 3 ;

  // Field TP6: Trusted protect
    const uint32_t AIPS_PACRA_TP6 = 1U << 4 ;

  // Field WP6: Write protect
    const uint32_t AIPS_PACRA_WP6 = 1U << 5 ;

  // Field SP6: Supervisor protect
    const uint32_t AIPS_PACRA_SP6 = 1U << 6 ;

  // Field RESERVED: no description available
    const uint32_t AIPS_PACRA_RESERVED = 1U << 7 ;

  // Field TP5: Trusted protect
    const uint32_t AIPS_PACRA_TP5 = 1U << 8 ;

  // Field WP5: Write protect
    const uint32_t AIPS_PACRA_WP5 = 1U << 9 ;

  // Field SP5: Supervisor protect
    const uint32_t AIPS_PACRA_SP5 = 1U << 10 ;

  // Field RESERVED: no description available
    const uint32_t AIPS_PACRA_RESERVED = 1U << 11 ;

  // Field TP4: Trusted protect
    const uint32_t AIPS_PACRA_TP4 = 1U << 12 ;

  // Field WP4: Write protect
    const uint32_t AIPS_PACRA_WP4 = 1U << 13 ;

  // Field SP4: Supervisor protect
    const uint32_t AIPS_PACRA_SP4 = 1U << 14 ;

  // Field RESERVED: no description available
    const uint32_t AIPS_PACRA_RESERVED = 1U << 15 ;

  // Field TP3: Trusted protect
    const uint32_t AIPS_PACRA_TP3 = 1U << 16 ;

  // Field WP3: Write protect
    const uint32_t AIPS_PACRA_WP3 = 1U << 17 ;

  // Field SP3: Supervisor protect
    const uint32_t AIPS_PACRA_SP3 = 1U << 18 ;

  // Field RESERVED: no description available
    const uint32_t AIPS_PACRA_RESERVED = 1U << 19 ;

  // Field TP2: Trusted protect
    const uint32_t AIPS_PACRA_TP2 = 1U << 20 ;

  // Field WP2: Write protect
    const uint32_t AIPS_PACRA_WP2 = 1U << 21 ;

  // Field SP2: Supervisor protect
    const uint32_t AIPS_PACRA_SP2 = 1U << 22 ;

  // Field RESERVED: no description available
    const uint32_t AIPS_PACRA_RESERVED = 1U << 23 ;

  // Field TP1: Trusted protect
    const uint32_t AIPS_PACRA_TP1 = 1U << 24 ;

  // Field WP1: Write protect
    const uint32_t AIPS_PACRA_WP1 = 1U << 25 ;

  // Field SP1: Supervisor protect
    const uint32_t AIPS_PACRA_SP1 = 1U << 26 ;

  // Field RESERVED: no description available
    const uint32_t AIPS_PACRA_RESERVED = 1U << 27 ;

  // Field TP0: Trusted protect
    const uint32_t AIPS_PACRA_TP0 = 1U << 28 ;

  // Field WP0: Write protect
    const uint32_t AIPS_PACRA_WP0 = 1U << 29 ;

  // Field SP0: Supervisor protect
    const uint32_t AIPS_PACRA_SP0 = 1U << 30 ;

  // Field RESERVED: no description available
    const uint32_t AIPS_PACRA_RESERVED = 1U << 31 ;

//---  Register PACRB: Peripheral Access Control Register
  #define AIPS_PACRB(group) (* ((volatile uint32_t *) (kBaseAddress_PACRB [group] + 0x24)))
  #define AIPS0_PACRB (* ((volatile uint32_t *) (0x40000000 + 0x24)))
  #define AIPS1_PACRB (* ((volatile uint32_t *) (0x40080000 + 0x24)))

  // Field TP7: Trusted protect
    const uint32_t AIPS_PACRB_TP7 = 1U << 0 ;

  // Field WP7: Write protect
    const uint32_t AIPS_PACRB_WP7 = 1U << 1 ;

  // Field SP7: Supervisor protect
    const uint32_t AIPS_PACRB_SP7 = 1U << 2 ;

  // Field RESERVED: no description available
    const uint32_t AIPS_PACRB_RESERVED = 1U << 3 ;

  // Field TP6: Trusted protect
    const uint32_t AIPS_PACRB_TP6 = 1U << 4 ;

  // Field WP6: Write protect
    const uint32_t AIPS_PACRB_WP6 = 1U << 5 ;

  // Field SP6: Supervisor protect
    const uint32_t AIPS_PACRB_SP6 = 1U << 6 ;

  // Field RESERVED: no description available
    const uint32_t AIPS_PACRB_RESERVED = 1U << 7 ;

  // Field TP5: Trusted protect
    const uint32_t AIPS_PACRB_TP5 = 1U << 8 ;

  // Field WP5: Write protect
    const uint32_t AIPS_PACRB_WP5 = 1U << 9 ;

  // Field SP5: Supervisor protect
    const uint32_t AIPS_PACRB_SP5 = 1U << 10 ;

  // Field RESERVED: no description available
    const uint32_t AIPS_PACRB_RESERVED = 1U << 11 ;

  // Field TP4: Trusted protect
    const uint32_t AIPS_PACRB_TP4 = 1U << 12 ;

  // Field WP4: Write protect
    const uint32_t AIPS_PACRB_WP4 = 1U << 13 ;

  // Field SP4: Supervisor protect
    const uint32_t AIPS_PACRB_SP4 = 1U << 14 ;

  // Field RESERVED: no description available
    const uint32_t AIPS_PACRB_RESERVED = 1U << 15 ;

  // Field TP3: Trusted protect
    const uint32_t AIPS_PACRB_TP3 = 1U << 16 ;

  // Field WP3: Write protect
    const uint32_t AIPS_PACRB_WP3 = 1U << 17 ;

  // Field SP3: Supervisor protect
    const uint32_t AIPS_PACRB_SP3 = 1U << 18 ;

  // Field RESERVED: no description available
    const uint32_t AIPS_PACRB_RESERVED = 1U << 19 ;

  // Field TP2: Trusted protect
    const uint32_t AIPS_PACRB_TP2 = 1U << 20 ;

  // Field WP2: Write protect
    const uint32_t AIPS_PACRB_WP2 = 1U << 21 ;

  // Field SP2: Supervisor protect
    const uint32_t AIPS_PACRB_SP2 = 1U << 22 ;

  // Field RESERVED: no description available
    const uint32_t AIPS_PACRB_RESERVED = 1U << 23 ;

  // Field TP1: Trusted protect
    const uint32_t AIPS_PACRB_TP1 = 1U << 24 ;

  // Field WP1: Write protect
    const uint32_t AIPS_PACRB_WP1 = 1U << 25 ;

  // Field SP1: Supervisor protect
    const uint32_t AIPS_PACRB_SP1 = 1U << 26 ;

  // Field RESERVED: no description available
    const uint32_t AIPS_PACRB_RESERVED = 1U << 27 ;

  // Field TP0: Trusted protect
    const uint32_t AIPS_PACRB_TP0 = 1U << 28 ;

  // Field WP0: Write protect
    const uint32_t AIPS_PACRB_WP0 = 1U << 29 ;

  // Field SP0: Supervisor protect
    const uint32_t AIPS_PACRB_SP0 = 1U << 30 ;

  // Field RESERVED: no description available
    const uint32_t AIPS_PACRB_RESERVED = 1U << 31 ;

//---  Register PACRC: Peripheral Access Control Register
  #define AIPS_PACRC(group) (* ((volatile uint32_t *) (kBaseAddress_PACRC [group] + 0x28)))
  #define AIPS0_PACRC (* ((volatile uint32_t *) (0x40000000 + 0x28)))
  #define AIPS1_PACRC (* ((volatile uint32_t *) (0x40080000 + 0x28)))

  // Field TP7: Trusted protect
    const uint32_t AIPS_PACRC_TP7 = 1U << 0 ;

  // Field WP7: Write protect
    const uint32_t AIPS_PACRC_WP7 = 1U << 1 ;

  // Field SP7: Supervisor protect
    const uint32_t AIPS_PACRC_SP7 = 1U << 2 ;

  // Field RESERVED: no description available
    const uint32_t AIPS_PACRC_RESERVED = 1U << 3 ;

  // Field TP6: Trusted protect
    const uint32_t AIPS_PACRC_TP6 = 1U << 4 ;

  // Field WP6: Write protect
    const uint32_t AIPS_PACRC_WP6 = 1U << 5 ;

  // Field SP6: Supervisor protect
    const uint32_t AIPS_PACRC_SP6 = 1U << 6 ;

  // Field RESERVED: no description available
    const uint32_t AIPS_PACRC_RESERVED = 1U << 7 ;

  // Field TP5: Trusted protect
    const uint32_t AIPS_PACRC_TP5 = 1U << 8 ;

  // Field WP5: Write protect
    const uint32_t AIPS_PACRC_WP5 = 1U << 9 ;

  // Field SP5: Supervisor protect
    const uint32_t AIPS_PACRC_SP5 = 1U << 10 ;

  // Field RESERVED: no description available
    const uint32_t AIPS_PACRC_RESERVED = 1U << 11 ;

  // Field TP4: Trusted protect
    const uint32_t AIPS_PACRC_TP4 = 1U << 12 ;

  // Field WP4: Write protect
    const uint32_t AIPS_PACRC_WP4 = 1U << 13 ;

  // Field SP4: Supervisor protect
    const uint32_t AIPS_PACRC_SP4 = 1U << 14 ;

  // Field RESERVED: no description available
    const uint32_t AIPS_PACRC_RESERVED = 1U << 15 ;

  // Field TP3: Trusted protect
    const uint32_t AIPS_PACRC_TP3 = 1U << 16 ;

  // Field WP3: Write protect
    const uint32_t AIPS_PACRC_WP3 = 1U << 17 ;

  // Field SP3: Supervisor protect
    const uint32_t AIPS_PACRC_SP3 = 1U << 18 ;

  // Field RESERVED: no description available
    const uint32_t AIPS_PACRC_RESERVED = 1U << 19 ;

  // Field TP2: Trusted protect
    const uint32_t AIPS_PACRC_TP2 = 1U << 20 ;

  // Field WP2: Write protect
    const uint32_t AIPS_PACRC_WP2 = 1U << 21 ;

  // Field SP2: Supervisor protect
    const uint32_t AIPS_PACRC_SP2 = 1U << 22 ;

  // Field RESERVED: no description available
    const uint32_t AIPS_PACRC_RESERVED = 1U << 23 ;

  // Field TP1: Trusted protect
    const uint32_t AIPS_PACRC_TP1 = 1U << 24 ;

  // Field WP1: Write protect
    const uint32_t AIPS_PACRC_WP1 = 1U << 25 ;

  // Field SP1: Supervisor protect
    const uint32_t AIPS_PACRC_SP1 = 1U << 26 ;

  // Field RESERVED: no description available
    const uint32_t AIPS_PACRC_RESERVED = 1U << 27 ;

  // Field TP0: Trusted protect
    const uint32_t AIPS_PACRC_TP0 = 1U << 28 ;

  // Field WP0: Write protect
    const uint32_t AIPS_PACRC_WP0 = 1U << 29 ;

  // Field SP0: Supervisor protect
    const uint32_t AIPS_PACRC_SP0 = 1U << 30 ;

  // Field RESERVED: no description available
    const uint32_t AIPS_PACRC_RESERVED = 1U << 31 ;

//---  Register PACRD: Peripheral Access Control Register
  #define AIPS_PACRD(group) (* ((volatile uint32_t *) (kBaseAddress_PACRD [group] + 0x2c)))
  #define AIPS0_PACRD (* ((volatile uint32_t *) (0x40000000 + 0x2c)))
  #define AIPS1_PACRD (* ((volatile uint32_t *) (0x40080000 + 0x2c)))

  // Field TP7: Trusted protect
    const uint32_t AIPS_PACRD_TP7 = 1U << 0 ;

  // Field WP7: Write protect
    const uint32_t AIPS_PACRD_WP7 = 1U << 1 ;

  // Field SP7: Supervisor protect
    const uint32_t AIPS_PACRD_SP7 = 1U << 2 ;

  // Field RESERVED: no description available
    const uint32_t AIPS_PACRD_RESERVED = 1U << 3 ;

  // Field TP6: Trusted protect
    const uint32_t AIPS_PACRD_TP6 = 1U << 4 ;

  // Field WP6: Write protect
    const uint32_t AIPS_PACRD_WP6 = 1U << 5 ;

  // Field SP6: Supervisor protect
    const uint32_t AIPS_PACRD_SP6 = 1U << 6 ;

  // Field RESERVED: no description available
    const uint32_t AIPS_PACRD_RESERVED = 1U << 7 ;

  // Field TP5: Trusted protect
    const uint32_t AIPS_PACRD_TP5 = 1U << 8 ;

  // Field WP5: Write protect
    const uint32_t AIPS_PACRD_WP5 = 1U << 9 ;

  // Field SP5: Supervisor protect
    const uint32_t AIPS_PACRD_SP5 = 1U << 10 ;

  // Field RESERVED: no description available
    const uint32_t AIPS_PACRD_RESERVED = 1U << 11 ;

  // Field TP4: Trusted protect
    const uint32_t AIPS_PACRD_TP4 = 1U << 12 ;

  // Field WP4: Write protect
    const uint32_t AIPS_PACRD_WP4 = 1U << 13 ;

  // Field SP4: Supervisor protect
    const uint32_t AIPS_PACRD_SP4 = 1U << 14 ;

  // Field RESERVED: no description available
    const uint32_t AIPS_PACRD_RESERVED = 1U << 15 ;

  // Field TP3: Trusted protect
    const uint32_t AIPS_PACRD_TP3 = 1U << 16 ;

  // Field WP3: Write protect
    const uint32_t AIPS_PACRD_WP3 = 1U << 17 ;

  // Field SP3: Supervisor protect
    const uint32_t AIPS_PACRD_SP3 = 1U << 18 ;

  // Field RESERVED: no description available
    const uint32_t AIPS_PACRD_RESERVED = 1U << 19 ;

  // Field TP2: Trusted protect
    const uint32_t AIPS_PACRD_TP2 = 1U << 20 ;

  // Field WP2: Write protect
    const uint32_t AIPS_PACRD_WP2 = 1U << 21 ;

  // Field SP2: Supervisor protect
    const uint32_t AIPS_PACRD_SP2 = 1U << 22 ;

  // Field RESERVED: no description available
    const uint32_t AIPS_PACRD_RESERVED = 1U << 23 ;

  // Field TP1: Trusted protect
    const uint32_t AIPS_PACRD_TP1 = 1U << 24 ;

  // Field WP1: Write protect
    const uint32_t AIPS_PACRD_WP1 = 1U << 25 ;

  // Field SP1: Supervisor protect
    const uint32_t AIPS_PACRD_SP1 = 1U << 26 ;

  // Field RESERVED: no description available
    const uint32_t AIPS_PACRD_RESERVED = 1U << 27 ;

  // Field TP0: Trusted protect
    const uint32_t AIPS_PACRD_TP0 = 1U << 28 ;

  // Field WP0: Write protect
    const uint32_t AIPS_PACRD_WP0 = 1U << 29 ;

  // Field SP0: Supervisor protect
    const uint32_t AIPS_PACRD_SP0 = 1U << 30 ;

  // Field RESERVED: no description available
    const uint32_t AIPS_PACRD_RESERVED = 1U << 31 ;

//---  Register PACRE: Peripheral Access Control Register
  #define AIPS_PACRE(group) (* ((volatile uint32_t *) (kBaseAddress_PACRE [group] + 0x40)))
  #define AIPS0_PACRE (* ((volatile uint32_t *) (0x40000000 + 0x40)))
  #define AIPS1_PACRE (* ((volatile uint32_t *) (0x40080000 + 0x40)))

  // Field TP7: Trusted protect
    const uint32_t AIPS_PACRE_TP7 = 1U << 0 ;

  // Field WP7: Write protect
    const uint32_t AIPS_PACRE_WP7 = 1U << 1 ;

  // Field SP7: Supervisor protect
    const uint32_t AIPS_PACRE_SP7 = 1U << 2 ;

  // Field RESERVED: no description available
    const uint32_t AIPS_PACRE_RESERVED = 1U << 3 ;

  // Field TP6: Trusted protect
    const uint32_t AIPS_PACRE_TP6 = 1U << 4 ;

  // Field WP6: Write protect
    const uint32_t AIPS_PACRE_WP6 = 1U << 5 ;

  // Field SP6: Supervisor protect
    const uint32_t AIPS_PACRE_SP6 = 1U << 6 ;

  // Field RESERVED: no description available
    const uint32_t AIPS_PACRE_RESERVED = 1U << 7 ;

  // Field TP5: Trusted protect
    const uint32_t AIPS_PACRE_TP5 = 1U << 8 ;

  // Field WP5: Write protect
    const uint32_t AIPS_PACRE_WP5 = 1U << 9 ;

  // Field SP5: Supervisor protect
    const uint32_t AIPS_PACRE_SP5 = 1U << 10 ;

  // Field RESERVED: no description available
    const uint32_t AIPS_PACRE_RESERVED = 1U << 11 ;

  // Field TP4: Trusted protect
    const uint32_t AIPS_PACRE_TP4 = 1U << 12 ;

  // Field WP4: Write protect
    const uint32_t AIPS_PACRE_WP4 = 1U << 13 ;

  // Field SP4: Supervisor protect
    const uint32_t AIPS_PACRE_SP4 = 1U << 14 ;

  // Field RESERVED: no description available
    const uint32_t AIPS_PACRE_RESERVED = 1U << 15 ;

  // Field TP3: Trusted protect
    const uint32_t AIPS_PACRE_TP3 = 1U << 16 ;

  // Field WP3: Write protect
    const uint32_t AIPS_PACRE_WP3 = 1U << 17 ;

  // Field SP3: Supervisor protect
    const uint32_t AIPS_PACRE_SP3 = 1U << 18 ;

  // Field RESERVED: no description available
    const uint32_t AIPS_PACRE_RESERVED = 1U << 19 ;

  // Field TP2: Trusted protect
    const uint32_t AIPS_PACRE_TP2 = 1U << 20 ;

  // Field WP2: Write protect
    const uint32_t AIPS_PACRE_WP2 = 1U << 21 ;

  // Field SP2: Supervisor protect
    const uint32_t AIPS_PACRE_SP2 = 1U << 22 ;

  // Field RESERVED: no description available
    const uint32_t AIPS_PACRE_RESERVED = 1U << 23 ;

  // Field TP1: Trusted protect
    const uint32_t AIPS_PACRE_TP1 = 1U << 24 ;

  // Field WP1: Write protect
    const uint32_t AIPS_PACRE_WP1 = 1U << 25 ;

  // Field SP1: Supervisor protect
    const uint32_t AIPS_PACRE_SP1 = 1U << 26 ;

  // Field RESERVED: no description available
    const uint32_t AIPS_PACRE_RESERVED = 1U << 27 ;

  // Field TP0: Trusted protect
    const uint32_t AIPS_PACRE_TP0 = 1U << 28 ;

  // Field WP0: Write protect
    const uint32_t AIPS_PACRE_WP0 = 1U << 29 ;

  // Field SP0: Supervisor protect
    const uint32_t AIPS_PACRE_SP0 = 1U << 30 ;

  // Field RESERVED: no description available
    const uint32_t AIPS_PACRE_RESERVED = 1U << 31 ;

//---  Register PACRF: Peripheral Access Control Register
  #define AIPS_PACRF(group) (* ((volatile uint32_t *) (kBaseAddress_PACRF [group] + 0x44)))
  #define AIPS0_PACRF (* ((volatile uint32_t *) (0x40000000 + 0x44)))
  #define AIPS1_PACRF (* ((volatile uint32_t *) (0x40080000 + 0x44)))

  // Field TP7: Trusted protect
    const uint32_t AIPS_PACRF_TP7 = 1U << 0 ;

  // Field WP7: Write protect
    const uint32_t AIPS_PACRF_WP7 = 1U << 1 ;

  // Field SP7: Supervisor protect
    const uint32_t AIPS_PACRF_SP7 = 1U << 2 ;

  // Field RESERVED: no description available
    const uint32_t AIPS_PACRF_RESERVED = 1U << 3 ;

  // Field TP6: Trusted protect
    const uint32_t AIPS_PACRF_TP6 = 1U << 4 ;

  // Field WP6: Write protect
    const uint32_t AIPS_PACRF_WP6 = 1U << 5 ;

  // Field SP6: Supervisor protect
    const uint32_t AIPS_PACRF_SP6 = 1U << 6 ;

  // Field RESERVED: no description available
    const uint32_t AIPS_PACRF_RESERVED = 1U << 7 ;

  // Field TP5: Trusted protect
    const uint32_t AIPS_PACRF_TP5 = 1U << 8 ;

  // Field WP5: Write protect
    const uint32_t AIPS_PACRF_WP5 = 1U << 9 ;

  // Field SP5: Supervisor protect
    const uint32_t AIPS_PACRF_SP5 = 1U << 10 ;

  // Field RESERVED: no description available
    const uint32_t AIPS_PACRF_RESERVED = 1U << 11 ;

  // Field TP4: Trusted protect
    const uint32_t AIPS_PACRF_TP4 = 1U << 12 ;

  // Field WP4: Write protect
    const uint32_t AIPS_PACRF_WP4 = 1U << 13 ;

  // Field SP4: Supervisor protect
    const uint32_t AIPS_PACRF_SP4 = 1U << 14 ;

  // Field RESERVED: no description available
    const uint32_t AIPS_PACRF_RESERVED = 1U << 15 ;

  // Field TP3: Trusted protect
    const uint32_t AIPS_PACRF_TP3 = 1U << 16 ;

  // Field WP3: Write protect
    const uint32_t AIPS_PACRF_WP3 = 1U << 17 ;

  // Field SP3: Supervisor protect
    const uint32_t AIPS_PACRF_SP3 = 1U << 18 ;

  // Field RESERVED: no description available
    const uint32_t AIPS_PACRF_RESERVED = 1U << 19 ;

  // Field TP2: Trusted protect
    const uint32_t AIPS_PACRF_TP2 = 1U << 20 ;

  // Field WP2: Write protect
    const uint32_t AIPS_PACRF_WP2 = 1U << 21 ;

  // Field SP2: Supervisor protect
    const uint32_t AIPS_PACRF_SP2 = 1U << 22 ;

  // Field RESERVED: no description available
    const uint32_t AIPS_PACRF_RESERVED = 1U << 23 ;

  // Field TP1: Trusted protect
    const uint32_t AIPS_PACRF_TP1 = 1U << 24 ;

  // Field WP1: Write protect
    const uint32_t AIPS_PACRF_WP1 = 1U << 25 ;

  // Field SP1: Supervisor protect
    const uint32_t AIPS_PACRF_SP1 = 1U << 26 ;

  // Field RESERVED: no description available
    const uint32_t AIPS_PACRF_RESERVED = 1U << 27 ;

  // Field TP0: Trusted protect
    const uint32_t AIPS_PACRF_TP0 = 1U << 28 ;

  // Field WP0: Write protect
    const uint32_t AIPS_PACRF_WP0 = 1U << 29 ;

  // Field SP0: Supervisor protect
    const uint32_t AIPS_PACRF_SP0 = 1U << 30 ;

  // Field RESERVED: no description available
    const uint32_t AIPS_PACRF_RESERVED = 1U << 31 ;

//---  Register PACRG: Peripheral Access Control Register
  #define AIPS_PACRG(group) (* ((volatile uint32_t *) (kBaseAddress_PACRG [group] + 0x48)))
  #define AIPS0_PACRG (* ((volatile uint32_t *) (0x40000000 + 0x48)))
  #define AIPS1_PACRG (* ((volatile uint32_t *) (0x40080000 + 0x48)))

  // Field TP7: Trusted protect
    const uint32_t AIPS_PACRG_TP7 = 1U << 0 ;

  // Field WP7: Write protect
    const uint32_t AIPS_PACRG_WP7 = 1U << 1 ;

  // Field SP7: Supervisor protect
    const uint32_t AIPS_PACRG_SP7 = 1U << 2 ;

  // Field RESERVED: no description available
    const uint32_t AIPS_PACRG_RESERVED = 1U << 3 ;

  // Field TP6: Trusted protect
    const uint32_t AIPS_PACRG_TP6 = 1U << 4 ;

  // Field WP6: Write protect
    const uint32_t AIPS_PACRG_WP6 = 1U << 5 ;

  // Field SP6: Supervisor protect
    const uint32_t AIPS_PACRG_SP6 = 1U << 6 ;

  // Field RESERVED: no description available
    const uint32_t AIPS_PACRG_RESERVED = 1U << 7 ;

  // Field TP5: Trusted protect
    const uint32_t AIPS_PACRG_TP5 = 1U << 8 ;

  // Field WP5: Write protect
    const uint32_t AIPS_PACRG_WP5 = 1U << 9 ;

  // Field SP5: Supervisor protect
    const uint32_t AIPS_PACRG_SP5 = 1U << 10 ;

  // Field RESERVED: no description available
    const uint32_t AIPS_PACRG_RESERVED = 1U << 11 ;

  // Field TP4: Trusted protect
    const uint32_t AIPS_PACRG_TP4 = 1U << 12 ;

  // Field WP4: Write protect
    const uint32_t AIPS_PACRG_WP4 = 1U << 13 ;

  // Field SP4: Supervisor protect
    const uint32_t AIPS_PACRG_SP4 = 1U << 14 ;

  // Field RESERVED: no description available
    const uint32_t AIPS_PACRG_RESERVED = 1U << 15 ;

  // Field TP3: Trusted protect
    const uint32_t AIPS_PACRG_TP3 = 1U << 16 ;

  // Field WP3: Write protect
    const uint32_t AIPS_PACRG_WP3 = 1U << 17 ;

  // Field SP3: Supervisor protect
    const uint32_t AIPS_PACRG_SP3 = 1U << 18 ;

  // Field RESERVED: no description available
    const uint32_t AIPS_PACRG_RESERVED = 1U << 19 ;

  // Field TP2: Trusted protect
    const uint32_t AIPS_PACRG_TP2 = 1U << 20 ;

  // Field WP2: Write protect
    const uint32_t AIPS_PACRG_WP2 = 1U << 21 ;

  // Field SP2: Supervisor protect
    const uint32_t AIPS_PACRG_SP2 = 1U << 22 ;

  // Field RESERVED: no description available
    const uint32_t AIPS_PACRG_RESERVED = 1U << 23 ;

  // Field TP1: Trusted protect
    const uint32_t AIPS_PACRG_TP1 = 1U << 24 ;

  // Field WP1: Write protect
    const uint32_t AIPS_PACRG_WP1 = 1U << 25 ;

  // Field SP1: Supervisor protect
    const uint32_t AIPS_PACRG_SP1 = 1U << 26 ;

  // Field RESERVED: no description available
    const uint32_t AIPS_PACRG_RESERVED = 1U << 27 ;

  // Field TP0: Trusted protect
    const uint32_t AIPS_PACRG_TP0 = 1U << 28 ;

  // Field WP0: Write protect
    const uint32_t AIPS_PACRG_WP0 = 1U << 29 ;

  // Field SP0: Supervisor protect
    const uint32_t AIPS_PACRG_SP0 = 1U << 30 ;

  // Field RESERVED: no description available
    const uint32_t AIPS_PACRG_RESERVED = 1U << 31 ;

//---  Register PACRH: Peripheral Access Control Register
  #define AIPS_PACRH(group) (* ((volatile uint32_t *) (kBaseAddress_PACRH [group] + 0x4c)))
  #define AIPS0_PACRH (* ((volatile uint32_t *) (0x40000000 + 0x4c)))
  #define AIPS1_PACRH (* ((volatile uint32_t *) (0x40080000 + 0x4c)))

  // Field TP7: Trusted protect
    const uint32_t AIPS_PACRH_TP7 = 1U << 0 ;

  // Field WP7: Write protect
    const uint32_t AIPS_PACRH_WP7 = 1U << 1 ;

  // Field SP7: Supervisor protect
    const uint32_t AIPS_PACRH_SP7 = 1U << 2 ;

  // Field RESERVED: no description available
    const uint32_t AIPS_PACRH_RESERVED = 1U << 3 ;

  // Field TP6: Trusted protect
    const uint32_t AIPS_PACRH_TP6 = 1U << 4 ;

  // Field WP6: Write protect
    const uint32_t AIPS_PACRH_WP6 = 1U << 5 ;

  // Field SP6: Supervisor protect
    const uint32_t AIPS_PACRH_SP6 = 1U << 6 ;

  // Field RESERVED: no description available
    const uint32_t AIPS_PACRH_RESERVED = 1U << 7 ;

  // Field TP5: Trusted protect
    const uint32_t AIPS_PACRH_TP5 = 1U << 8 ;

  // Field WP5: Write protect
    const uint32_t AIPS_PACRH_WP5 = 1U << 9 ;

  // Field SP5: Supervisor protect
    const uint32_t AIPS_PACRH_SP5 = 1U << 10 ;

  // Field RESERVED: no description available
    const uint32_t AIPS_PACRH_RESERVED = 1U << 11 ;

  // Field TP4: Trusted protect
    const uint32_t AIPS_PACRH_TP4 = 1U << 12 ;

  // Field WP4: Write protect
    const uint32_t AIPS_PACRH_WP4 = 1U << 13 ;

  // Field SP4: Supervisor protect
    const uint32_t AIPS_PACRH_SP4 = 1U << 14 ;

  // Field RESERVED: no description available
    const uint32_t AIPS_PACRH_RESERVED = 1U << 15 ;

  // Field TP3: Trusted protect
    const uint32_t AIPS_PACRH_TP3 = 1U << 16 ;

  // Field WP3: Write protect
    const uint32_t AIPS_PACRH_WP3 = 1U << 17 ;

  // Field SP3: Supervisor protect
    const uint32_t AIPS_PACRH_SP3 = 1U << 18 ;

  // Field RESERVED: no description available
    const uint32_t AIPS_PACRH_RESERVED = 1U << 19 ;

  // Field TP2: Trusted protect
    const uint32_t AIPS_PACRH_TP2 = 1U << 20 ;

  // Field WP2: Write protect
    const uint32_t AIPS_PACRH_WP2 = 1U << 21 ;

  // Field SP2: Supervisor protect
    const uint32_t AIPS_PACRH_SP2 = 1U << 22 ;

  // Field RESERVED: no description available
    const uint32_t AIPS_PACRH_RESERVED = 1U << 23 ;

  // Field TP1: Trusted protect
    const uint32_t AIPS_PACRH_TP1 = 1U << 24 ;

  // Field WP1: Write protect
    const uint32_t AIPS_PACRH_WP1 = 1U << 25 ;

  // Field SP1: Supervisor protect
    const uint32_t AIPS_PACRH_SP1 = 1U << 26 ;

  // Field RESERVED: no description available
    const uint32_t AIPS_PACRH_RESERVED = 1U << 27 ;

  // Field TP0: Trusted protect
    const uint32_t AIPS_PACRH_TP0 = 1U << 28 ;

  // Field WP0: Write protect
    const uint32_t AIPS_PACRH_WP0 = 1U << 29 ;

  // Field SP0: Supervisor protect
    const uint32_t AIPS_PACRH_SP0 = 1U << 30 ;

  // Field RESERVED: no description available
    const uint32_t AIPS_PACRH_RESERVED = 1U << 31 ;

//---  Register PACRI: Peripheral Access Control Register
  #define AIPS_PACRI(group) (* ((volatile uint32_t *) (kBaseAddress_PACRI [group] + 0x50)))
  #define AIPS0_PACRI (* ((volatile uint32_t *) (0x40000000 + 0x50)))
  #define AIPS1_PACRI (* ((volatile uint32_t *) (0x40080000 + 0x50)))

  // Field TP7: Trusted protect
    const uint32_t AIPS_PACRI_TP7 = 1U << 0 ;

  // Field WP7: Write protect
    const uint32_t AIPS_PACRI_WP7 = 1U << 1 ;

  // Field SP7: Supervisor protect
    const uint32_t AIPS_PACRI_SP7 = 1U << 2 ;

  // Field RESERVED: no description available
    const uint32_t AIPS_PACRI_RESERVED = 1U << 3 ;

  // Field TP6: Trusted protect
    const uint32_t AIPS_PACRI_TP6 = 1U << 4 ;

  // Field WP6: Write protect
    const uint32_t AIPS_PACRI_WP6 = 1U << 5 ;

  // Field SP6: Supervisor protect
    const uint32_t AIPS_PACRI_SP6 = 1U << 6 ;

  // Field RESERVED: no description available
    const uint32_t AIPS_PACRI_RESERVED = 1U << 7 ;

  // Field TP5: Trusted protect
    const uint32_t AIPS_PACRI_TP5 = 1U << 8 ;

  // Field WP5: Write protect
    const uint32_t AIPS_PACRI_WP5 = 1U << 9 ;

  // Field SP5: Supervisor protect
    const uint32_t AIPS_PACRI_SP5 = 1U << 10 ;

  // Field RESERVED: no description available
    const uint32_t AIPS_PACRI_RESERVED = 1U << 11 ;

  // Field TP4: Trusted protect
    const uint32_t AIPS_PACRI_TP4 = 1U << 12 ;

  // Field WP4: Write protect
    const uint32_t AIPS_PACRI_WP4 = 1U << 13 ;

  // Field SP4: Supervisor protect
    const uint32_t AIPS_PACRI_SP4 = 1U << 14 ;

  // Field RESERVED: no description available
    const uint32_t AIPS_PACRI_RESERVED = 1U << 15 ;

  // Field TP3: Trusted protect
    const uint32_t AIPS_PACRI_TP3 = 1U << 16 ;

  // Field WP3: Write protect
    const uint32_t AIPS_PACRI_WP3 = 1U << 17 ;

  // Field SP3: Supervisor protect
    const uint32_t AIPS_PACRI_SP3 = 1U << 18 ;

  // Field RESERVED: no description available
    const uint32_t AIPS_PACRI_RESERVED = 1U << 19 ;

  // Field TP2: Trusted protect
    const uint32_t AIPS_PACRI_TP2 = 1U << 20 ;

  // Field WP2: Write protect
    const uint32_t AIPS_PACRI_WP2 = 1U << 21 ;

  // Field SP2: Supervisor protect
    const uint32_t AIPS_PACRI_SP2 = 1U << 22 ;

  // Field RESERVED: no description available
    const uint32_t AIPS_PACRI_RESERVED = 1U << 23 ;

  // Field TP1: Trusted protect
    const uint32_t AIPS_PACRI_TP1 = 1U << 24 ;

  // Field WP1: Write protect
    const uint32_t AIPS_PACRI_WP1 = 1U << 25 ;

  // Field SP1: Supervisor protect
    const uint32_t AIPS_PACRI_SP1 = 1U << 26 ;

  // Field RESERVED: no description available
    const uint32_t AIPS_PACRI_RESERVED = 1U << 27 ;

  // Field TP0: Trusted protect
    const uint32_t AIPS_PACRI_TP0 = 1U << 28 ;

  // Field WP0: Write protect
    const uint32_t AIPS_PACRI_WP0 = 1U << 29 ;

  // Field SP0: Supervisor protect
    const uint32_t AIPS_PACRI_SP0 = 1U << 30 ;

  // Field RESERVED: no description available
    const uint32_t AIPS_PACRI_RESERVED = 1U << 31 ;

//---  Register PACRJ: Peripheral Access Control Register
  #define AIPS_PACRJ(group) (* ((volatile uint32_t *) (kBaseAddress_PACRJ [group] + 0x54)))
  #define AIPS0_PACRJ (* ((volatile uint32_t *) (0x40000000 + 0x54)))
  #define AIPS1_PACRJ (* ((volatile uint32_t *) (0x40080000 + 0x54)))

  // Field TP7: Trusted protect
    const uint32_t AIPS_PACRJ_TP7 = 1U << 0 ;

  // Field WP7: Write protect
    const uint32_t AIPS_PACRJ_WP7 = 1U << 1 ;

  // Field SP7: Supervisor protect
    const uint32_t AIPS_PACRJ_SP7 = 1U << 2 ;

  // Field RESERVED: no description available
    const uint32_t AIPS_PACRJ_RESERVED = 1U << 3 ;

  // Field TP6: Trusted protect
    const uint32_t AIPS_PACRJ_TP6 = 1U << 4 ;

  // Field WP6: Write protect
    const uint32_t AIPS_PACRJ_WP6 = 1U << 5 ;

  // Field SP6: Supervisor protect
    const uint32_t AIPS_PACRJ_SP6 = 1U << 6 ;

  // Field RESERVED: no description available
    const uint32_t AIPS_PACRJ_RESERVED = 1U << 7 ;

  // Field TP5: Trusted protect
    const uint32_t AIPS_PACRJ_TP5 = 1U << 8 ;

  // Field WP5: Write protect
    const uint32_t AIPS_PACRJ_WP5 = 1U << 9 ;

  // Field SP5: Supervisor protect
    const uint32_t AIPS_PACRJ_SP5 = 1U << 10 ;

  // Field RESERVED: no description available
    const uint32_t AIPS_PACRJ_RESERVED = 1U << 11 ;

  // Field TP4: Trusted protect
    const uint32_t AIPS_PACRJ_TP4 = 1U << 12 ;

  // Field WP4: Write protect
    const uint32_t AIPS_PACRJ_WP4 = 1U << 13 ;

  // Field SP4: Supervisor protect
    const uint32_t AIPS_PACRJ_SP4 = 1U << 14 ;

  // Field RESERVED: no description available
    const uint32_t AIPS_PACRJ_RESERVED = 1U << 15 ;

  // Field TP3: Trusted protect
    const uint32_t AIPS_PACRJ_TP3 = 1U << 16 ;

  // Field WP3: Write protect
    const uint32_t AIPS_PACRJ_WP3 = 1U << 17 ;

  // Field SP3: Supervisor protect
    const uint32_t AIPS_PACRJ_SP3 = 1U << 18 ;

  // Field RESERVED: no description available
    const uint32_t AIPS_PACRJ_RESERVED = 1U << 19 ;

  // Field TP2: Trusted protect
    const uint32_t AIPS_PACRJ_TP2 = 1U << 20 ;

  // Field WP2: Write protect
    const uint32_t AIPS_PACRJ_WP2 = 1U << 21 ;

  // Field SP2: Supervisor protect
    const uint32_t AIPS_PACRJ_SP2 = 1U << 22 ;

  // Field RESERVED: no description available
    const uint32_t AIPS_PACRJ_RESERVED = 1U << 23 ;

  // Field TP1: Trusted protect
    const uint32_t AIPS_PACRJ_TP1 = 1U << 24 ;

  // Field WP1: Write protect
    const uint32_t AIPS_PACRJ_WP1 = 1U << 25 ;

  // Field SP1: Supervisor protect
    const uint32_t AIPS_PACRJ_SP1 = 1U << 26 ;

  // Field RESERVED: no description available
    const uint32_t AIPS_PACRJ_RESERVED = 1U << 27 ;

  // Field TP0: Trusted protect
    const uint32_t AIPS_PACRJ_TP0 = 1U << 28 ;

  // Field WP0: Write protect
    const uint32_t AIPS_PACRJ_WP0 = 1U << 29 ;

  // Field SP0: Supervisor protect
    const uint32_t AIPS_PACRJ_SP0 = 1U << 30 ;

  // Field RESERVED: no description available
    const uint32_t AIPS_PACRJ_RESERVED = 1U << 31 ;

//---  Register PACRK: Peripheral Access Control Register
  #define AIPS_PACRK(group) (* ((volatile uint32_t *) (kBaseAddress_PACRK [group] + 0x58)))
  #define AIPS0_PACRK (* ((volatile uint32_t *) (0x40000000 + 0x58)))
  #define AIPS1_PACRK (* ((volatile uint32_t *) (0x40080000 + 0x58)))

  // Field TP7: Trusted protect
    const uint32_t AIPS_PACRK_TP7 = 1U << 0 ;

  // Field WP7: Write protect
    const uint32_t AIPS_PACRK_WP7 = 1U << 1 ;

  // Field SP7: Supervisor protect
    const uint32_t AIPS_PACRK_SP7 = 1U << 2 ;

  // Field RESERVED: no description available
    const uint32_t AIPS_PACRK_RESERVED = 1U << 3 ;

  // Field TP6: Trusted protect
    const uint32_t AIPS_PACRK_TP6 = 1U << 4 ;

  // Field WP6: Write protect
    const uint32_t AIPS_PACRK_WP6 = 1U << 5 ;

  // Field SP6: Supervisor protect
    const uint32_t AIPS_PACRK_SP6 = 1U << 6 ;

  // Field RESERVED: no description available
    const uint32_t AIPS_PACRK_RESERVED = 1U << 7 ;

  // Field TP5: Trusted protect
    const uint32_t AIPS_PACRK_TP5 = 1U << 8 ;

  // Field WP5: Write protect
    const uint32_t AIPS_PACRK_WP5 = 1U << 9 ;

  // Field SP5: Supervisor protect
    const uint32_t AIPS_PACRK_SP5 = 1U << 10 ;

  // Field RESERVED: no description available
    const uint32_t AIPS_PACRK_RESERVED = 1U << 11 ;

  // Field TP4: Trusted protect
    const uint32_t AIPS_PACRK_TP4 = 1U << 12 ;

  // Field WP4: Write protect
    const uint32_t AIPS_PACRK_WP4 = 1U << 13 ;

  // Field SP4: Supervisor protect
    const uint32_t AIPS_PACRK_SP4 = 1U << 14 ;

  // Field RESERVED: no description available
    const uint32_t AIPS_PACRK_RESERVED = 1U << 15 ;

  // Field TP3: Trusted protect
    const uint32_t AIPS_PACRK_TP3 = 1U << 16 ;

  // Field WP3: Write protect
    const uint32_t AIPS_PACRK_WP3 = 1U << 17 ;

  // Field SP3: Supervisor protect
    const uint32_t AIPS_PACRK_SP3 = 1U << 18 ;

  // Field RESERVED: no description available
    const uint32_t AIPS_PACRK_RESERVED = 1U << 19 ;

  // Field TP2: Trusted protect
    const uint32_t AIPS_PACRK_TP2 = 1U << 20 ;

  // Field WP2: Write protect
    const uint32_t AIPS_PACRK_WP2 = 1U << 21 ;

  // Field SP2: Supervisor protect
    const uint32_t AIPS_PACRK_SP2 = 1U << 22 ;

  // Field RESERVED: no description available
    const uint32_t AIPS_PACRK_RESERVED = 1U << 23 ;

  // Field TP1: Trusted protect
    const uint32_t AIPS_PACRK_TP1 = 1U << 24 ;

  // Field WP1: Write protect
    const uint32_t AIPS_PACRK_WP1 = 1U << 25 ;

  // Field SP1: Supervisor protect
    const uint32_t AIPS_PACRK_SP1 = 1U << 26 ;

  // Field RESERVED: no description available
    const uint32_t AIPS_PACRK_RESERVED = 1U << 27 ;

  // Field TP0: Trusted protect
    const uint32_t AIPS_PACRK_TP0 = 1U << 28 ;

  // Field WP0: Write protect
    const uint32_t AIPS_PACRK_WP0 = 1U << 29 ;

  // Field SP0: Supervisor protect
    const uint32_t AIPS_PACRK_SP0 = 1U << 30 ;

  // Field RESERVED: no description available
    const uint32_t AIPS_PACRK_RESERVED = 1U << 31 ;

//---  Register PACRL: Peripheral Access Control Register
  #define AIPS_PACRL(group) (* ((volatile uint32_t *) (kBaseAddress_PACRL [group] + 0x5c)))
  #define AIPS0_PACRL (* ((volatile uint32_t *) (0x40000000 + 0x5c)))
  #define AIPS1_PACRL (* ((volatile uint32_t *) (0x40080000 + 0x5c)))

  // Field TP7: Trusted protect
    const uint32_t AIPS_PACRL_TP7 = 1U << 0 ;

  // Field WP7: Write protect
    const uint32_t AIPS_PACRL_WP7 = 1U << 1 ;

  // Field SP7: Supervisor protect
    const uint32_t AIPS_PACRL_SP7 = 1U << 2 ;

  // Field RESERVED: no description available
    const uint32_t AIPS_PACRL_RESERVED = 1U << 3 ;

  // Field TP6: Trusted protect
    const uint32_t AIPS_PACRL_TP6 = 1U << 4 ;

  // Field WP6: Write protect
    const uint32_t AIPS_PACRL_WP6 = 1U << 5 ;

  // Field SP6: Supervisor protect
    const uint32_t AIPS_PACRL_SP6 = 1U << 6 ;

  // Field RESERVED: no description available
    const uint32_t AIPS_PACRL_RESERVED = 1U << 7 ;

  // Field TP5: Trusted protect
    const uint32_t AIPS_PACRL_TP5 = 1U << 8 ;

  // Field WP5: Write protect
    const uint32_t AIPS_PACRL_WP5 = 1U << 9 ;

  // Field SP5: Supervisor protect
    const uint32_t AIPS_PACRL_SP5 = 1U << 10 ;

  // Field RESERVED: no description available
    const uint32_t AIPS_PACRL_RESERVED = 1U << 11 ;

  // Field TP4: Trusted protect
    const uint32_t AIPS_PACRL_TP4 = 1U << 12 ;

  // Field WP4: Write protect
    const uint32_t AIPS_PACRL_WP4 = 1U << 13 ;

  // Field SP4: Supervisor protect
    const uint32_t AIPS_PACRL_SP4 = 1U << 14 ;

  // Field RESERVED: no description available
    const uint32_t AIPS_PACRL_RESERVED = 1U << 15 ;

  // Field TP3: Trusted protect
    const uint32_t AIPS_PACRL_TP3 = 1U << 16 ;

  // Field WP3: Write protect
    const uint32_t AIPS_PACRL_WP3 = 1U << 17 ;

  // Field SP3: Supervisor protect
    const uint32_t AIPS_PACRL_SP3 = 1U << 18 ;

  // Field RESERVED: no description available
    const uint32_t AIPS_PACRL_RESERVED = 1U << 19 ;

  // Field TP2: Trusted protect
    const uint32_t AIPS_PACRL_TP2 = 1U << 20 ;

  // Field WP2: Write protect
    const uint32_t AIPS_PACRL_WP2 = 1U << 21 ;

  // Field SP2: Supervisor protect
    const uint32_t AIPS_PACRL_SP2 = 1U << 22 ;

  // Field RESERVED: no description available
    const uint32_t AIPS_PACRL_RESERVED = 1U << 23 ;

  // Field TP1: Trusted protect
    const uint32_t AIPS_PACRL_TP1 = 1U << 24 ;

  // Field WP1: Write protect
    const uint32_t AIPS_PACRL_WP1 = 1U << 25 ;

  // Field SP1: Supervisor protect
    const uint32_t AIPS_PACRL_SP1 = 1U << 26 ;

  // Field RESERVED: no description available
    const uint32_t AIPS_PACRL_RESERVED = 1U << 27 ;

  // Field TP0: Trusted protect
    const uint32_t AIPS_PACRL_TP0 = 1U << 28 ;

  // Field WP0: Write protect
    const uint32_t AIPS_PACRL_WP0 = 1U << 29 ;

  // Field SP0: Supervisor protect
    const uint32_t AIPS_PACRL_SP0 = 1U << 30 ;

  // Field RESERVED: no description available
    const uint32_t AIPS_PACRL_RESERVED = 1U << 31 ;

//---  Register PACRM: Peripheral Access Control Register
  #define AIPS_PACRM(group) (* ((volatile uint32_t *) (kBaseAddress_PACRM [group] + 0x60)))
  #define AIPS0_PACRM (* ((volatile uint32_t *) (0x40000000 + 0x60)))
  #define AIPS1_PACRM (* ((volatile uint32_t *) (0x40080000 + 0x60)))

  // Field TP7: Trusted protect
    const uint32_t AIPS_PACRM_TP7 = 1U << 0 ;

  // Field WP7: Write protect
    const uint32_t AIPS_PACRM_WP7 = 1U << 1 ;

  // Field SP7: Supervisor protect
    const uint32_t AIPS_PACRM_SP7 = 1U << 2 ;

  // Field RESERVED: no description available
    const uint32_t AIPS_PACRM_RESERVED = 1U << 3 ;

  // Field TP6: Trusted protect
    const uint32_t AIPS_PACRM_TP6 = 1U << 4 ;

  // Field WP6: Write protect
    const uint32_t AIPS_PACRM_WP6 = 1U << 5 ;

  // Field SP6: Supervisor protect
    const uint32_t AIPS_PACRM_SP6 = 1U << 6 ;

  // Field RESERVED: no description available
    const uint32_t AIPS_PACRM_RESERVED = 1U << 7 ;

  // Field TP5: Trusted protect
    const uint32_t AIPS_PACRM_TP5 = 1U << 8 ;

  // Field WP5: Write protect
    const uint32_t AIPS_PACRM_WP5 = 1U << 9 ;

  // Field SP5: Supervisor protect
    const uint32_t AIPS_PACRM_SP5 = 1U << 10 ;

  // Field RESERVED: no description available
    const uint32_t AIPS_PACRM_RESERVED = 1U << 11 ;

  // Field TP4: Trusted protect
    const uint32_t AIPS_PACRM_TP4 = 1U << 12 ;

  // Field WP4: Write protect
    const uint32_t AIPS_PACRM_WP4 = 1U << 13 ;

  // Field SP4: Supervisor protect
    const uint32_t AIPS_PACRM_SP4 = 1U << 14 ;

  // Field RESERVED: no description available
    const uint32_t AIPS_PACRM_RESERVED = 1U << 15 ;

  // Field TP3: Trusted protect
    const uint32_t AIPS_PACRM_TP3 = 1U << 16 ;

  // Field WP3: Write protect
    const uint32_t AIPS_PACRM_WP3 = 1U << 17 ;

  // Field SP3: Supervisor protect
    const uint32_t AIPS_PACRM_SP3 = 1U << 18 ;

  // Field RESERVED: no description available
    const uint32_t AIPS_PACRM_RESERVED = 1U << 19 ;

  // Field TP2: Trusted protect
    const uint32_t AIPS_PACRM_TP2 = 1U << 20 ;

  // Field WP2: Write protect
    const uint32_t AIPS_PACRM_WP2 = 1U << 21 ;

  // Field SP2: Supervisor protect
    const uint32_t AIPS_PACRM_SP2 = 1U << 22 ;

  // Field RESERVED: no description available
    const uint32_t AIPS_PACRM_RESERVED = 1U << 23 ;

  // Field TP1: Trusted protect
    const uint32_t AIPS_PACRM_TP1 = 1U << 24 ;

  // Field WP1: Write protect
    const uint32_t AIPS_PACRM_WP1 = 1U << 25 ;

  // Field SP1: Supervisor protect
    const uint32_t AIPS_PACRM_SP1 = 1U << 26 ;

  // Field RESERVED: no description available
    const uint32_t AIPS_PACRM_RESERVED = 1U << 27 ;

  // Field TP0: Trusted protect
    const uint32_t AIPS_PACRM_TP0 = 1U << 28 ;

  // Field WP0: Write protect
    const uint32_t AIPS_PACRM_WP0 = 1U << 29 ;

  // Field SP0: Supervisor protect
    const uint32_t AIPS_PACRM_SP0 = 1U << 30 ;

  // Field RESERVED: no description available
    const uint32_t AIPS_PACRM_RESERVED = 1U << 31 ;

//---  Register PACRN: Peripheral Access Control Register
  #define AIPS_PACRN(group) (* ((volatile uint32_t *) (kBaseAddress_PACRN [group] + 0x64)))
  #define AIPS0_PACRN (* ((volatile uint32_t *) (0x40000000 + 0x64)))
  #define AIPS1_PACRN (* ((volatile uint32_t *) (0x40080000 + 0x64)))

  // Field TP7: Trusted protect
    const uint32_t AIPS_PACRN_TP7 = 1U << 0 ;

  // Field WP7: Write protect
    const uint32_t AIPS_PACRN_WP7 = 1U << 1 ;

  // Field SP7: Supervisor protect
    const uint32_t AIPS_PACRN_SP7 = 1U << 2 ;

  // Field RESERVED: no description available
    const uint32_t AIPS_PACRN_RESERVED = 1U << 3 ;

  // Field TP6: Trusted protect
    const uint32_t AIPS_PACRN_TP6 = 1U << 4 ;

  // Field WP6: Write protect
    const uint32_t AIPS_PACRN_WP6 = 1U << 5 ;

  // Field SP6: Supervisor protect
    const uint32_t AIPS_PACRN_SP6 = 1U << 6 ;

  // Field RESERVED: no description available
    const uint32_t AIPS_PACRN_RESERVED = 1U << 7 ;

  // Field TP5: Trusted protect
    const uint32_t AIPS_PACRN_TP5 = 1U << 8 ;

  // Field WP5: Write protect
    const uint32_t AIPS_PACRN_WP5 = 1U << 9 ;

  // Field SP5: Supervisor protect
    const uint32_t AIPS_PACRN_SP5 = 1U << 10 ;

  // Field RESERVED: no description available
    const uint32_t AIPS_PACRN_RESERVED = 1U << 11 ;

  // Field TP4: Trusted protect
    const uint32_t AIPS_PACRN_TP4 = 1U << 12 ;

  // Field WP4: Write protect
    const uint32_t AIPS_PACRN_WP4 = 1U << 13 ;

  // Field SP4: Supervisor protect
    const uint32_t AIPS_PACRN_SP4 = 1U << 14 ;

  // Field RESERVED: no description available
    const uint32_t AIPS_PACRN_RESERVED = 1U << 15 ;

  // Field TP3: Trusted protect
    const uint32_t AIPS_PACRN_TP3 = 1U << 16 ;

  // Field WP3: Write protect
    const uint32_t AIPS_PACRN_WP3 = 1U << 17 ;

  // Field SP3: Supervisor protect
    const uint32_t AIPS_PACRN_SP3 = 1U << 18 ;

  // Field RESERVED: no description available
    const uint32_t AIPS_PACRN_RESERVED = 1U << 19 ;

  // Field TP2: Trusted protect
    const uint32_t AIPS_PACRN_TP2 = 1U << 20 ;

  // Field WP2: Write protect
    const uint32_t AIPS_PACRN_WP2 = 1U << 21 ;

  // Field SP2: Supervisor protect
    const uint32_t AIPS_PACRN_SP2 = 1U << 22 ;

  // Field RESERVED: no description available
    const uint32_t AIPS_PACRN_RESERVED = 1U << 23 ;

  // Field TP1: Trusted protect
    const uint32_t AIPS_PACRN_TP1 = 1U << 24 ;

  // Field WP1: Write protect
    const uint32_t AIPS_PACRN_WP1 = 1U << 25 ;

  // Field SP1: Supervisor protect
    const uint32_t AIPS_PACRN_SP1 = 1U << 26 ;

  // Field RESERVED: no description available
    const uint32_t AIPS_PACRN_RESERVED = 1U << 27 ;

  // Field TP0: Trusted protect
    const uint32_t AIPS_PACRN_TP0 = 1U << 28 ;

  // Field WP0: Write protect
    const uint32_t AIPS_PACRN_WP0 = 1U << 29 ;

  // Field SP0: Supervisor protect
    const uint32_t AIPS_PACRN_SP0 = 1U << 30 ;

  // Field RESERVED: no description available
    const uint32_t AIPS_PACRN_RESERVED = 1U << 31 ;

//---  Register PACRO: Peripheral Access Control Register
  #define AIPS_PACRO(group) (* ((volatile uint32_t *) (kBaseAddress_PACRO [group] + 0x68)))
  #define AIPS0_PACRO (* ((volatile uint32_t *) (0x40000000 + 0x68)))
  #define AIPS1_PACRO (* ((volatile uint32_t *) (0x40080000 + 0x68)))

  // Field TP7: Trusted protect
    const uint32_t AIPS_PACRO_TP7 = 1U << 0 ;

  // Field WP7: Write protect
    const uint32_t AIPS_PACRO_WP7 = 1U << 1 ;

  // Field SP7: Supervisor protect
    const uint32_t AIPS_PACRO_SP7 = 1U << 2 ;

  // Field RESERVED: no description available
    const uint32_t AIPS_PACRO_RESERVED = 1U << 3 ;

  // Field TP6: Trusted protect
    const uint32_t AIPS_PACRO_TP6 = 1U << 4 ;

  // Field WP6: Write protect
    const uint32_t AIPS_PACRO_WP6 = 1U << 5 ;

  // Field SP6: Supervisor protect
    const uint32_t AIPS_PACRO_SP6 = 1U << 6 ;

  // Field RESERVED: no description available
    const uint32_t AIPS_PACRO_RESERVED = 1U << 7 ;

  // Field TP5: Trusted protect
    const uint32_t AIPS_PACRO_TP5 = 1U << 8 ;

  // Field WP5: Write protect
    const uint32_t AIPS_PACRO_WP5 = 1U << 9 ;

  // Field SP5: Supervisor protect
    const uint32_t AIPS_PACRO_SP5 = 1U << 10 ;

  // Field RESERVED: no description available
    const uint32_t AIPS_PACRO_RESERVED = 1U << 11 ;

  // Field TP4: Trusted protect
    const uint32_t AIPS_PACRO_TP4 = 1U << 12 ;

  // Field WP4: Write protect
    const uint32_t AIPS_PACRO_WP4 = 1U << 13 ;

  // Field SP4: Supervisor protect
    const uint32_t AIPS_PACRO_SP4 = 1U << 14 ;

  // Field RESERVED: no description available
    const uint32_t AIPS_PACRO_RESERVED = 1U << 15 ;

  // Field TP3: Trusted protect
    const uint32_t AIPS_PACRO_TP3 = 1U << 16 ;

  // Field WP3: Write protect
    const uint32_t AIPS_PACRO_WP3 = 1U << 17 ;

  // Field SP3: Supervisor protect
    const uint32_t AIPS_PACRO_SP3 = 1U << 18 ;

  // Field RESERVED: no description available
    const uint32_t AIPS_PACRO_RESERVED = 1U << 19 ;

  // Field TP2: Trusted protect
    const uint32_t AIPS_PACRO_TP2 = 1U << 20 ;

  // Field WP2: Write protect
    const uint32_t AIPS_PACRO_WP2 = 1U << 21 ;

  // Field SP2: Supervisor protect
    const uint32_t AIPS_PACRO_SP2 = 1U << 22 ;

  // Field RESERVED: no description available
    const uint32_t AIPS_PACRO_RESERVED = 1U << 23 ;

  // Field TP1: Trusted protect
    const uint32_t AIPS_PACRO_TP1 = 1U << 24 ;

  // Field WP1: Write protect
    const uint32_t AIPS_PACRO_WP1 = 1U << 25 ;

  // Field SP1: Supervisor protect
    const uint32_t AIPS_PACRO_SP1 = 1U << 26 ;

  // Field RESERVED: no description available
    const uint32_t AIPS_PACRO_RESERVED = 1U << 27 ;

  // Field TP0: Trusted protect
    const uint32_t AIPS_PACRO_TP0 = 1U << 28 ;

  // Field WP0: Write protect
    const uint32_t AIPS_PACRO_WP0 = 1U << 29 ;

  // Field SP0: Supervisor protect
    const uint32_t AIPS_PACRO_SP0 = 1U << 30 ;

  // Field RESERVED: no description available
    const uint32_t AIPS_PACRO_RESERVED = 1U << 31 ;

//---  Register PACRP: Peripheral Access Control Register
  #define AIPS_PACRP(group) (* ((volatile uint32_t *) (kBaseAddress_PACRP [group] + 0x6c)))
  #define AIPS0_PACRP (* ((volatile uint32_t *) (0x40000000 + 0x6c)))
  #define AIPS1_PACRP (* ((volatile uint32_t *) (0x40080000 + 0x6c)))

  // Field TP7: Trusted protect
    const uint32_t AIPS_PACRP_TP7 = 1U << 0 ;

  // Field WP7: Write protect
    const uint32_t AIPS_PACRP_WP7 = 1U << 1 ;

  // Field SP7: Supervisor protect
    const uint32_t AIPS_PACRP_SP7 = 1U << 2 ;

  // Field RESERVED: no description available
    const uint32_t AIPS_PACRP_RESERVED = 1U << 3 ;

  // Field TP6: Trusted protect
    const uint32_t AIPS_PACRP_TP6 = 1U << 4 ;

  // Field WP6: Write protect
    const uint32_t AIPS_PACRP_WP6 = 1U << 5 ;

  // Field SP6: Supervisor protect
    const uint32_t AIPS_PACRP_SP6 = 1U << 6 ;

  // Field RESERVED: no description available
    const uint32_t AIPS_PACRP_RESERVED = 1U << 7 ;

  // Field TP5: Trusted protect
    const uint32_t AIPS_PACRP_TP5 = 1U << 8 ;

  // Field WP5: Write protect
    const uint32_t AIPS_PACRP_WP5 = 1U << 9 ;

  // Field SP5: Supervisor protect
    const uint32_t AIPS_PACRP_SP5 = 1U << 10 ;

  // Field RESERVED: no description available
    const uint32_t AIPS_PACRP_RESERVED = 1U << 11 ;

  // Field TP4: Trusted protect
    const uint32_t AIPS_PACRP_TP4 = 1U << 12 ;

  // Field WP4: Write protect
    const uint32_t AIPS_PACRP_WP4 = 1U << 13 ;

  // Field SP4: Supervisor protect
    const uint32_t AIPS_PACRP_SP4 = 1U << 14 ;

  // Field RESERVED: no description available
    const uint32_t AIPS_PACRP_RESERVED = 1U << 15 ;

  // Field TP3: Trusted protect
    const uint32_t AIPS_PACRP_TP3 = 1U << 16 ;

  // Field WP3: Write protect
    const uint32_t AIPS_PACRP_WP3 = 1U << 17 ;

  // Field SP3: Supervisor protect
    const uint32_t AIPS_PACRP_SP3 = 1U << 18 ;

  // Field RESERVED: no description available
    const uint32_t AIPS_PACRP_RESERVED = 1U << 19 ;

  // Field TP2: Trusted protect
    const uint32_t AIPS_PACRP_TP2 = 1U << 20 ;

  // Field WP2: Write protect
    const uint32_t AIPS_PACRP_WP2 = 1U << 21 ;

  // Field SP2: Supervisor protect
    const uint32_t AIPS_PACRP_SP2 = 1U << 22 ;

  // Field RESERVED: no description available
    const uint32_t AIPS_PACRP_RESERVED = 1U << 23 ;

  // Field TP1: Trusted protect
    const uint32_t AIPS_PACRP_TP1 = 1U << 24 ;

  // Field WP1: Write protect
    const uint32_t AIPS_PACRP_WP1 = 1U << 25 ;

  // Field SP1: Supervisor protect
    const uint32_t AIPS_PACRP_SP1 = 1U << 26 ;

  // Field RESERVED: no description available
    const uint32_t AIPS_PACRP_RESERVED = 1U << 27 ;

  // Field TP0: Trusted protect
    const uint32_t AIPS_PACRP_TP0 = 1U << 28 ;

  // Field WP0: Write protect
    const uint32_t AIPS_PACRP_WP0 = 1U << 29 ;

  // Field SP0: Supervisor protect
    const uint32_t AIPS_PACRP_SP0 = 1U << 30 ;

  // Field RESERVED: no description available
    const uint32_t AIPS_PACRP_RESERVED = 1U << 31 ;

//------------------------------------------------------------------------------
// Peripheral AXBS: Crossbar switch
//------------------------------------------------------------------------------

//---  Registers PRS(0,1,2,3): Priority Registers Slave
  #define AXBS_PRS(idx) (* ((volatile uint32_t *) (0x40004000 + 0x0 + (idx) * 0x100)))
  #define AXBS_PRS0 (* ((volatile uint32_t *) (0x40004000 + 0x0 + 0 * 0x100)))
  #define AXBS_PRS1 (* ((volatile uint32_t *) (0x40004000 + 0x0 + 1 * 0x100)))
  #define AXBS_PRS2 (* ((volatile uint32_t *) (0x40004000 + 0x0 + 2 * 0x100)))
  #define AXBS_PRS3 (* ((volatile uint32_t *) (0x40004000 + 0x0 + 3 * 0x100)))

  // Field M0: Master 0 priority. Sets the arbitration priority for this port on the associated slave port.
    inline uint32_t AXBS_PRS_M0 (const uint32_t inValue) {return (inValue & 0x7U) << 0 ; }

  // Field RESERVED: no description available
    const uint32_t AXBS_PRS_RESERVED = 1U << 3 ;

  // Field M1: Master 1 priority. Sets the arbitration priority for this port on the associated slave port.
    inline uint32_t AXBS_PRS_M1 (const uint32_t inValue) {return (inValue & 0x7U) << 4 ; }

  // Field RESERVED: no description available
    const uint32_t AXBS_PRS_RESERVED = 1U << 7 ;

  // Field M2: Master 2 priority. Sets the arbitration priority for this port on the associated slave port.
    inline uint32_t AXBS_PRS_M2 (const uint32_t inValue) {return (inValue & 0x7U) << 8 ; }

  // Field RESERVED: no description available
    const uint32_t AXBS_PRS_RESERVED = 1U << 11 ;

  // Field M3: Master 3 priority. Sets the arbitration priority for this port on the associated slave port.
    inline uint32_t AXBS_PRS_M3 (const uint32_t inValue) {return (inValue & 0x7U) << 12 ; }

  // Field RESERVED: no description available
    const uint32_t AXBS_PRS_RESERVED = 1U << 15 ;

  // Field M4: Master 4 priority. Sets the arbitration priority for this port on the associated slave port.
    inline uint32_t AXBS_PRS_M4 (const uint32_t inValue) {return (inValue & 0x7U) << 16 ; }

  // Field RESERVED: no description available
    const uint32_t AXBS_PRS_RESERVED = 1U << 19 ;

  // Field M5: Master 5 priority. Sets the arbitration priority for this port on the associated slave port.
    inline uint32_t AXBS_PRS_M5 (const uint32_t inValue) {return (inValue & 0x7U) << 20 ; }

  // Field RESERVED: no description available
    const uint32_t AXBS_PRS_RESERVED = 1U << 23 ;

  // Field RESERVED: no description available
    inline uint32_t AXBS_PRS_RESERVED (const uint32_t inValue) {return (inValue & 0xfU) << 24 ; }

  // Field RESERVED: no description available
    inline uint32_t AXBS_PRS_RESERVED (const uint32_t inValue) {return (inValue & 0xfU) << 28 ; }

//---  Registers CRS(0,1,2,3): Control Register
  #define AXBS_CRS(idx) (* ((volatile uint32_t *) (0x40004000 + 0x10 + (idx) * 0x100)))
  #define AXBS_CRS0 (* ((volatile uint32_t *) (0x40004000 + 0x10 + 0 * 0x100)))
  #define AXBS_CRS1 (* ((volatile uint32_t *) (0x40004000 + 0x10 + 1 * 0x100)))
  #define AXBS_CRS2 (* ((volatile uint32_t *) (0x40004000 + 0x10 + 2 * 0x100)))
  #define AXBS_CRS3 (* ((volatile uint32_t *) (0x40004000 + 0x10 + 3 * 0x100)))

  // Field PARK: Park
    inline uint32_t AXBS_CRS_PARK (const uint32_t inValue) {return (inValue & 0x7U) << 0 ; }

  // Field RESERVED: no description available
    const uint32_t AXBS_CRS_RESERVED = 1U << 3 ;

  // Field PCTL: Parking control
    inline uint32_t AXBS_CRS_PCTL (const uint32_t inValue) {return (inValue & 0x3U) << 4 ; }

  // Field RESERVED: no description available
    inline uint32_t AXBS_CRS_RESERVED (const uint32_t inValue) {return (inValue & 0x3U) << 6 ; }

  // Field ARB: Arbitration mode
    inline uint32_t AXBS_CRS_ARB (const uint32_t inValue) {return (inValue & 0x3U) << 8 ; }

  // Field RESERVED: no description available
    inline uint32_t AXBS_CRS_RESERVED (const uint32_t inValue) {return (inValue & 0xfffffU) << 10 ; }

  // Field HLP: Halt low priority
    const uint32_t AXBS_CRS_HLP = 1U << 30 ;

  // Field RO: Read only
    const uint32_t AXBS_CRS_RO = 1U << 31 ;

//---  Registers MGPCR(0,1,2,3): Master General Purpose Control Register
  #define AXBS_MGPCR(idx) (* ((volatile uint32_t *) (0x40004000 + 0x800 + (idx) * 0x100)))
  #define AXBS_MGPCR0 (* ((volatile uint32_t *) (0x40004000 + 0x800 + 0 * 0x100)))
  #define AXBS_MGPCR1 (* ((volatile uint32_t *) (0x40004000 + 0x800 + 1 * 0x100)))
  #define AXBS_MGPCR2 (* ((volatile uint32_t *) (0x40004000 + 0x800 + 2 * 0x100)))
  #define AXBS_MGPCR3 (* ((volatile uint32_t *) (0x40004000 + 0x800 + 3 * 0x100)))

  // Field AULB: Arbitrates on undefined length bursts
    inline uint32_t AXBS_MGPCR_AULB (const uint32_t inValue) {return (inValue & 0x7U) << 0 ; }

  // Field RESERVED: no description available
    inline uint32_t AXBS_MGPCR_RESERVED (const uint32_t inValue) {return (inValue & 0x1fffffffU) << 3 ; }

//------------------------------------------------------------------------------
// Peripheral CAN0: Flex Controller Area Network module
//------------------------------------------------------------------------------

//---  Register MCR: Module Configuration Register
  #define CAN0_MCR (* ((volatile uint32_t *) (0x40024000 + 0)))

  // Field MAXMB: Number of the Last Message Buffer
    inline uint32_t CAN0_MCR_MAXMB (const uint32_t inValue) {return (inValue & 0x7fU) << 0 ; }

  // Field RESERVED: no description available
    const uint32_t CAN0_MCR_RESERVED = 1U << 7 ;

  // Field IDAM: ID Acceptance Mode
    inline uint32_t CAN0_MCR_IDAM (const uint32_t inValue) {return (inValue & 0x3U) << 8 ; }

  // Field RESERVED: no description available
    inline uint32_t CAN0_MCR_RESERVED (const uint32_t inValue) {return (inValue & 0x3U) << 10 ; }

  // Field AEN: Abort Enable
    const uint32_t CAN0_MCR_AEN = 1U << 12 ;

  // Field LPRIOEN: Local Priority Enable
    const uint32_t CAN0_MCR_LPRIOEN = 1U << 13 ;

  // Field RESERVED: no description available
    inline uint32_t CAN0_MCR_RESERVED (const uint32_t inValue) {return (inValue & 0x3U) << 14 ; }

  // Field IRMQ: Individual Rx Masking and Queue Enable
    const uint32_t CAN0_MCR_IRMQ = 1U << 16 ;

  // Field SRXDIS: Self Reception Disable
    const uint32_t CAN0_MCR_SRXDIS = 1U << 17 ;

  // Field RESERVED: no description available
    const uint32_t CAN0_MCR_RESERVED = 1U << 18 ;

  // Field RESERVED: no description available
    const uint32_t CAN0_MCR_RESERVED = 1U << 19 ;

  // Field LPMACK: Low Power Mode Acknowledge
    const uint32_t CAN0_MCR_LPMACK = 1U << 20 ;

  // Field WRNEN: Warning Interrupt Enable
    const uint32_t CAN0_MCR_WRNEN = 1U << 21 ;

  // Field SLFWAK: Self Wake Up
    const uint32_t CAN0_MCR_SLFWAK = 1U << 22 ;

  // Field SUPV: Supervisor Mode
    const uint32_t CAN0_MCR_SUPV = 1U << 23 ;

  // Field FRZACK: Freeze Mode Acknowledge
    const uint32_t CAN0_MCR_FRZACK = 1U << 24 ;

  // Field SOFTRST: Soft Reset
    const uint32_t CAN0_MCR_SOFTRST = 1U << 25 ;

  // Field WAKMSK: Wake Up Interrupt Mask
    const uint32_t CAN0_MCR_WAKMSK = 1U << 26 ;

  // Field NOTRDY: FlexCAN Not Ready
    const uint32_t CAN0_MCR_NOTRDY = 1U << 27 ;

  // Field HALT: Halt FlexCAN
    const uint32_t CAN0_MCR_HALT = 1U << 28 ;

  // Field RFEN: Rx FIFO Enable
    const uint32_t CAN0_MCR_RFEN = 1U << 29 ;

  // Field FRZ: Freeze Enable
    const uint32_t CAN0_MCR_FRZ = 1U << 30 ;

  // Field MDIS: Module Disable
    const uint32_t CAN0_MCR_MDIS = 1U << 31 ;

//---  Register CTRL1: Control 1 Register
  #define CAN0_CTRL1 (* ((volatile uint32_t *) (0x40024000 + 4)))

  // Field PROPSEG: Propagation Segment
    inline uint32_t CAN0_CTRL1_PROPSEG (const uint32_t inValue) {return (inValue & 0x7U) << 0 ; }

  // Field LOM: Listen-Only Mode
    const uint32_t CAN0_CTRL1_LOM = 1U << 3 ;

  // Field LBUF: Lowest Buffer Transmitted First
    const uint32_t CAN0_CTRL1_LBUF = 1U << 4 ;

  // Field TSYN: Timer Sync
    const uint32_t CAN0_CTRL1_TSYN = 1U << 5 ;

  // Field BOFFREC: Bus Off Recovery
    const uint32_t CAN0_CTRL1_BOFFREC = 1U << 6 ;

  // Field SMP: CAN Bit Sampling
    const uint32_t CAN0_CTRL1_SMP = 1U << 7 ;

  // Field RESERVED: no description available
    inline uint32_t CAN0_CTRL1_RESERVED (const uint32_t inValue) {return (inValue & 0x3U) << 8 ; }

  // Field RWRNMSK: Rx Warning Interrupt Mask
    const uint32_t CAN0_CTRL1_RWRNMSK = 1U << 10 ;

  // Field TWRNMSK: Tx Warning Interrupt Mask
    const uint32_t CAN0_CTRL1_TWRNMSK = 1U << 11 ;

  // Field LPB: Loop Back Mode
    const uint32_t CAN0_CTRL1_LPB = 1U << 12 ;

  // Field CLKSRC: CAN Engine Clock Source
    const uint32_t CAN0_CTRL1_CLKSRC = 1U << 13 ;

  // Field ERRMSK: Error Mask
    const uint32_t CAN0_CTRL1_ERRMSK = 1U << 14 ;

  // Field BOFFMSK: Bus Off Mask
    const uint32_t CAN0_CTRL1_BOFFMSK = 1U << 15 ;

  // Field PSEG2: Phase Segment 2
    inline uint32_t CAN0_CTRL1_PSEG2 (const uint32_t inValue) {return (inValue & 0x7U) << 16 ; }

  // Field PSEG1: Phase Segment 1
    inline uint32_t CAN0_CTRL1_PSEG1 (const uint32_t inValue) {return (inValue & 0x7U) << 19 ; }

  // Field RJW: Resync Jump Width
    inline uint32_t CAN0_CTRL1_RJW (const uint32_t inValue) {return (inValue & 0x3U) << 22 ; }

  // Field PRESDIV: Prescaler Division Factor
    inline uint32_t CAN0_CTRL1_PRESDIV (const uint32_t inValue) {return (inValue & 0xffU) << 24 ; }

//---  Register TIMER: Free Running Timer
  #define CAN0_TIMER (* ((volatile uint32_t *) (0x40024000 + 8)))

  // Field TIMER: Timer value
    inline uint32_t CAN0_TIMER_TIMER (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

  // Field RESERVED: no description available
    inline uint32_t CAN0_TIMER_RESERVED (const uint32_t inValue) {return (inValue & 0xffffU) << 16 ; }

//---  Register RXMGMASK: Rx Mailboxes Global Mask Register
  #define CAN0_RXMGMASK (* ((volatile uint32_t *) (0x40024000 + 16)))

  // Field MG: Rx Mailboxes Global Mask Bits
    inline uint32_t CAN0_RXMGMASK_MG (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register RX14MASK: Rx 14 Mask Register
  #define CAN0_RX14MASK (* ((volatile uint32_t *) (0x40024000 + 20)))

  // Field RX14M: Rx Buffer 14 Mask Bits
    inline uint32_t CAN0_RX14MASK_RX14M (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register RX15MASK: Rx 15 Mask Register
  #define CAN0_RX15MASK (* ((volatile uint32_t *) (0x40024000 + 24)))

  // Field RX15M: Rx Buffer 15 Mask Bits
    inline uint32_t CAN0_RX15MASK_RX15M (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register ECR: Error Counter
  #define CAN0_ECR (* ((volatile uint32_t *) (0x40024000 + 28)))

  // Field TXERRCNT: Transmit Error Counter
    inline uint32_t CAN0_ECR_TXERRCNT (const uint32_t inValue) {return (inValue & 0xffU) << 0 ; }

  // Field RXERRCNT: Receive Error Counter
    inline uint32_t CAN0_ECR_RXERRCNT (const uint32_t inValue) {return (inValue & 0xffU) << 8 ; }

  // Field RESERVED: no description available
    inline uint32_t CAN0_ECR_RESERVED (const uint32_t inValue) {return (inValue & 0xffffU) << 16 ; }

//---  Register ESR1: Error and Status 1 Register
  #define CAN0_ESR1 (* ((volatile uint32_t *) (0x40024000 + 32)))

  // Field WAKINT: Wake-Up Interrupt
    const uint32_t CAN0_ESR1_WAKINT = 1U << 0 ;

  // Field ERRINT: Error Interrupt
    const uint32_t CAN0_ESR1_ERRINT = 1U << 1 ;

  // Field BOFFINT: 'Bus Off' Interrupt
    const uint32_t CAN0_ESR1_BOFFINT = 1U << 2 ;

  // Field RX: FlexCAN in Reception
    const uint32_t CAN0_ESR1_RX = 1U << 3 ;

  // Field FLTCONF: Fault Confinement State
    inline uint32_t CAN0_ESR1_FLTCONF (const uint32_t inValue) {return (inValue & 0x3U) << 4 ; }

  // Field TX: FlexCAN in Transmission
    const uint32_t CAN0_ESR1_TX = 1U << 6 ;

  // Field IDLE: no description available
    const uint32_t CAN0_ESR1_IDLE = 1U << 7 ;

  // Field RXWRN: Rx Error Warning
    const uint32_t CAN0_ESR1_RXWRN = 1U << 8 ;

  // Field TXWRN: TX Error Warning
    const uint32_t CAN0_ESR1_TXWRN = 1U << 9 ;

  // Field STFERR: Stuffing Error
    const uint32_t CAN0_ESR1_STFERR = 1U << 10 ;

  // Field FRMERR: Form Error
    const uint32_t CAN0_ESR1_FRMERR = 1U << 11 ;

  // Field CRCERR: Cyclic Redundancy Check Error
    const uint32_t CAN0_ESR1_CRCERR = 1U << 12 ;

  // Field ACKERR: Acknowledge Error
    const uint32_t CAN0_ESR1_ACKERR = 1U << 13 ;

  // Field BIT0ERR: Bit0 Error
    const uint32_t CAN0_ESR1_BIT0ERR = 1U << 14 ;

  // Field BIT1ERR: Bit1 Error
    const uint32_t CAN0_ESR1_BIT1ERR = 1U << 15 ;

  // Field RWRNINT: Rx Warning Interrupt Flag
    const uint32_t CAN0_ESR1_RWRNINT = 1U << 16 ;

  // Field TWRNINT: Tx Warning Interrupt Flag
    const uint32_t CAN0_ESR1_TWRNINT = 1U << 17 ;

  // Field SYNCH: CAN Synchronization Status
    const uint32_t CAN0_ESR1_SYNCH = 1U << 18 ;

  // Field RESERVED: no description available
    inline uint32_t CAN0_ESR1_RESERVED (const uint32_t inValue) {return (inValue & 0x1fffU) << 19 ; }

//---  Register IMASK2: Interrupt Masks 2 Register
  #define CAN0_IMASK2 (* ((volatile uint32_t *) (0x40024000 + 36)))

  // Field BUFHM: Buffer MBi Mask
    inline uint32_t CAN0_IMASK2_BUFHM (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register IMASK1: Interrupt Masks 1 Register
  #define CAN0_IMASK1 (* ((volatile uint32_t *) (0x40024000 + 40)))

  // Field BUFLM: Buffer MBi Mask
    inline uint32_t CAN0_IMASK1_BUFLM (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register IFLAG2: Interrupt Flags 2 Register
  #define CAN0_IFLAG2 (* ((volatile uint32_t *) (0x40024000 + 44)))

  // Field BUFHI: Buffer MBi Interrupt
    inline uint32_t CAN0_IFLAG2_BUFHI (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register IFLAG1: Interrupt Flags 1 Register
  #define CAN0_IFLAG1 (* ((volatile uint32_t *) (0x40024000 + 48)))

  // Field BUF4TO0I: Buffer MBi Interrupt or "reserved"
    inline uint32_t CAN0_IFLAG1_BUF4TO0I (const uint32_t inValue) {return (inValue & 0x1fU) << 0 ; }

  // Field BUF5I: Buffer MB5 Interrupt or "Frames available in Rx FIFO"
    const uint32_t CAN0_IFLAG1_BUF5I = 1U << 5 ;

  // Field BUF6I: Buffer MB6 Interrupt or "Rx FIFO Warning"
    const uint32_t CAN0_IFLAG1_BUF6I = 1U << 6 ;

  // Field BUF7I: Buffer MB7 Interrupt or "Rx FIFO Overflow"
    const uint32_t CAN0_IFLAG1_BUF7I = 1U << 7 ;

  // Field BUF31TO8I: Buffer MBi Interrupt
    inline uint32_t CAN0_IFLAG1_BUF31TO8I (const uint32_t inValue) {return (inValue & 0xffffffU) << 8 ; }

//---  Register CTRL2: Control 2 Register
  #define CAN0_CTRL2 (* ((volatile uint32_t *) (0x40024000 + 52)))

  // Field RESERVED: no description available
    inline uint32_t CAN0_CTRL2_RESERVED (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

  // Field EACEN: Entire Frame Arbitration Field Comparison Enable for Rx Mailboxes
    const uint32_t CAN0_CTRL2_EACEN = 1U << 16 ;

  // Field RRS: Remote Request Storing
    const uint32_t CAN0_CTRL2_RRS = 1U << 17 ;

  // Field MRP: Mailboxes Reception Priority
    const uint32_t CAN0_CTRL2_MRP = 1U << 18 ;

  // Field TASD: Tx Arbitration Start Delay
    inline uint32_t CAN0_CTRL2_TASD (const uint32_t inValue) {return (inValue & 0x1fU) << 19 ; }

  // Field RFFN: Number of Rx FIFO Filters
    inline uint32_t CAN0_CTRL2_RFFN (const uint32_t inValue) {return (inValue & 0xfU) << 24 ; }

  // Field WRMFRZ: Write-Access to Memory in Freeze mode
    const uint32_t CAN0_CTRL2_WRMFRZ = 1U << 28 ;

  // Field RESERVED: no description available
    inline uint32_t CAN0_CTRL2_RESERVED (const uint32_t inValue) {return (inValue & 0x3U) << 29 ; }

  // Field RESERVED: no description available
    const uint32_t CAN0_CTRL2_RESERVED = 1U << 31 ;

//---  Register ESR2: Error and Status 2 Register
  #define CAN0_ESR2 (* ((volatile uint32_t *) (0x40024000 + 56)))

  // Field RESERVED: no description available
    inline uint32_t CAN0_ESR2_RESERVED (const uint32_t inValue) {return (inValue & 0x1fffU) << 0 ; }

  // Field IMB: Inactive Mailbox
    const uint32_t CAN0_ESR2_IMB = 1U << 13 ;

  // Field VPS: Valid Priority Status
    const uint32_t CAN0_ESR2_VPS = 1U << 14 ;

  // Field RESERVED: no description available
    const uint32_t CAN0_ESR2_RESERVED = 1U << 15 ;

  // Field LPTM: Lowest Priority Tx Mailbox
    inline uint32_t CAN0_ESR2_LPTM (const uint32_t inValue) {return (inValue & 0x7fU) << 16 ; }

  // Field RESERVED: no description available
    inline uint32_t CAN0_ESR2_RESERVED (const uint32_t inValue) {return (inValue & 0x1ffU) << 23 ; }

//---  Register CRCR: CRC Register
  #define CAN0_CRCR (* ((volatile uint32_t *) (0x40024000 + 68)))

  // Field TXCRC: CRC Transmitted
    inline uint32_t CAN0_CRCR_TXCRC (const uint32_t inValue) {return (inValue & 0x7fffU) << 0 ; }

  // Field RESERVED: no description available
    const uint32_t CAN0_CRCR_RESERVED = 1U << 15 ;

  // Field MBCRC: CRC Mailbox
    inline uint32_t CAN0_CRCR_MBCRC (const uint32_t inValue) {return (inValue & 0x7fU) << 16 ; }

  // Field RESERVED: no description available
    inline uint32_t CAN0_CRCR_RESERVED (const uint32_t inValue) {return (inValue & 0x1ffU) << 23 ; }

//---  Register RXFGMASK: Rx FIFO Global Mask Register
  #define CAN0_RXFGMASK (* ((volatile uint32_t *) (0x40024000 + 72)))

  // Field FGM: Rx FIFO Global Mask Bits
    inline uint32_t CAN0_RXFGMASK_FGM (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register RXFIR: Rx FIFO Information Register
  #define CAN0_RXFIR (* ((volatile uint32_t *) (0x40024000 + 76)))

  // Field IDHIT: Identifier Acceptance Filter Hit Indicator
    inline uint32_t CAN0_RXFIR_IDHIT (const uint32_t inValue) {return (inValue & 0x1ffU) << 0 ; }

  // Field RESERVED: no description available
    inline uint32_t CAN0_RXFIR_RESERVED (const uint32_t inValue) {return (inValue & 0x7fffffU) << 9 ; }

//---  Register CS0: Message Buffer 0 CS Register
  #define CAN0_CS0 (* ((volatile uint32_t *) (0x40024000 + 128)))

  // Field TIME_STAMP: Free-Running Counter Time stamp. This 16-bit field is a copy of the Free-Running Timer, captured for Tx and Rx frames at the time when the beginning of the Identifier field appears on the CAN bus.
    inline uint32_t CAN0_CS0_TIME_STAMP (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

  // Field DLC: Length of the data to be stored/transmitted.
    inline uint32_t CAN0_CS0_DLC (const uint32_t inValue) {return (inValue & 0xfU) << 16 ; }

  // Field RTR: Remote Transmission Request. One/zero for remote/data frame.
    const uint32_t CAN0_CS0_RTR = 1U << 20 ;

  // Field IDE: ID Extended. One/zero for extended/standard format frame.
    const uint32_t CAN0_CS0_IDE = 1U << 21 ;

  // Field SRR: Substitute Remote Request. Contains a fixed recessive bit.
    const uint32_t CAN0_CS0_SRR = 1U << 22 ;

  // Field RESERVED: Reserved
    const uint32_t CAN0_CS0_RESERVED = 1U << 23 ;

  // Field CODE: Reserved
    inline uint32_t CAN0_CS0_CODE (const uint32_t inValue) {return (inValue & 0xfU) << 24 ; }

  // Field RESERVED: Reserved
    const uint32_t CAN0_CS0_RESERVED = 1U << 28 ;

  // Field RESERVED: Reserved
    const uint32_t CAN0_CS0_RESERVED = 1U << 29 ;

  // Field RESERVED: Reserved
    const uint32_t CAN0_CS0_RESERVED = 1U << 30 ;

  // Field RESERVED: Reserved
    const uint32_t CAN0_CS0_RESERVED = 1U << 31 ;

//---  Register ID0: Message Buffer 0 ID Register
  #define CAN0_ID0 (* ((volatile uint32_t *) (0x40024000 + 132)))

  // Field EXT: Contains extended (LOW word) identifier of message buffer.
    inline uint32_t CAN0_ID0_EXT (const uint32_t inValue) {return (inValue & 0x3ffffU) << 0 ; }

  // Field STD: Contains standard/extended (HIGH word) identifier of message buffer.
    inline uint32_t CAN0_ID0_STD (const uint32_t inValue) {return (inValue & 0x7ffU) << 18 ; }

  // Field PRIO: Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR and it only makes sense for Tx buffers. These bits are not transmitted. They are appended to the regular ID to define the transmission priority.
    inline uint32_t CAN0_ID0_PRIO (const uint32_t inValue) {return (inValue & 0x7U) << 29 ; }

//---  Register WORD00: Message Buffer 0 WORD0 Register
  #define CAN0_WORD00 (* ((volatile uint32_t *) (0x40024000 + 136)))

  // Field DATA_BYTE_3: Data byte 3 of Rx/Tx frame.
    inline uint32_t CAN0_WORD00_DATA_BYTE_3 (const uint32_t inValue) {return (inValue & 0xffU) << 0 ; }

  // Field DATA_BYTE_2: Data byte 2 of Rx/Tx frame.
    inline uint32_t CAN0_WORD00_DATA_BYTE_2 (const uint32_t inValue) {return (inValue & 0xffU) << 8 ; }

  // Field DATA_BYTE_1: Data byte 1 of Rx/Tx frame.
    inline uint32_t CAN0_WORD00_DATA_BYTE_1 (const uint32_t inValue) {return (inValue & 0xffU) << 16 ; }

  // Field DATA_BYTE_0: Data byte 0 of Rx/Tx frame.
    inline uint32_t CAN0_WORD00_DATA_BYTE_0 (const uint32_t inValue) {return (inValue & 0xffU) << 24 ; }

//---  Register WORD10: Message Buffer 0 WORD1 Register
  #define CAN0_WORD10 (* ((volatile uint32_t *) (0x40024000 + 140)))

  // Field DATA_BYTE_7: Data byte 7 of Rx/Tx frame.
    inline uint32_t CAN0_WORD10_DATA_BYTE_7 (const uint32_t inValue) {return (inValue & 0xffU) << 0 ; }

  // Field DATA_BYTE_6: Data byte 6 of Rx/Tx frame.
    inline uint32_t CAN0_WORD10_DATA_BYTE_6 (const uint32_t inValue) {return (inValue & 0xffU) << 8 ; }

  // Field DATA_BYTE_5: Data byte 5 of Rx/Tx frame.
    inline uint32_t CAN0_WORD10_DATA_BYTE_5 (const uint32_t inValue) {return (inValue & 0xffU) << 16 ; }

  // Field DATA_BYTE_4: Data byte 4 of Rx/Tx frame.
    inline uint32_t CAN0_WORD10_DATA_BYTE_4 (const uint32_t inValue) {return (inValue & 0xffU) << 24 ; }

//---  Register CS1: Message Buffer 1 CS Register
  #define CAN0_CS1 (* ((volatile uint32_t *) (0x40024000 + 144)))

  // Field TIME_STAMP: Free-Running Counter Time stamp. This 16-bit field is a copy of the Free-Running Timer, captured for Tx and Rx frames at the time when the beginning of the Identifier field appears on the CAN bus.
    inline uint32_t CAN0_CS1_TIME_STAMP (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

  // Field DLC: Length of the data to be stored/transmitted.
    inline uint32_t CAN0_CS1_DLC (const uint32_t inValue) {return (inValue & 0xfU) << 16 ; }

  // Field RTR: Remote Transmission Request. One/zero for remote/data frame.
    const uint32_t CAN0_CS1_RTR = 1U << 20 ;

  // Field IDE: ID Extended. One/zero for extended/standard format frame.
    const uint32_t CAN0_CS1_IDE = 1U << 21 ;

  // Field SRR: Substitute Remote Request. Contains a fixed recessive bit.
    const uint32_t CAN0_CS1_SRR = 1U << 22 ;

  // Field RESERVED: Reserved
    const uint32_t CAN0_CS1_RESERVED = 1U << 23 ;

  // Field CODE: Reserved
    inline uint32_t CAN0_CS1_CODE (const uint32_t inValue) {return (inValue & 0xfU) << 24 ; }

  // Field RESERVED: Reserved
    const uint32_t CAN0_CS1_RESERVED = 1U << 28 ;

  // Field RESERVED: Reserved
    const uint32_t CAN0_CS1_RESERVED = 1U << 29 ;

  // Field RESERVED: Reserved
    const uint32_t CAN0_CS1_RESERVED = 1U << 30 ;

  // Field RESERVED: Reserved
    const uint32_t CAN0_CS1_RESERVED = 1U << 31 ;

//---  Register ID1: Message Buffer 1 ID Register
  #define CAN0_ID1 (* ((volatile uint32_t *) (0x40024000 + 148)))

  // Field EXT: Contains extended (LOW word) identifier of message buffer.
    inline uint32_t CAN0_ID1_EXT (const uint32_t inValue) {return (inValue & 0x3ffffU) << 0 ; }

  // Field STD: Contains standard/extended (HIGH word) identifier of message buffer.
    inline uint32_t CAN0_ID1_STD (const uint32_t inValue) {return (inValue & 0x7ffU) << 18 ; }

  // Field PRIO: Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR and it only makes sense for Tx buffers. These bits are not transmitted. They are appended to the regular ID to define the transmission priority.
    inline uint32_t CAN0_ID1_PRIO (const uint32_t inValue) {return (inValue & 0x7U) << 29 ; }

//---  Register WORD01: Message Buffer 1 WORD0 Register
  #define CAN0_WORD01 (* ((volatile uint32_t *) (0x40024000 + 152)))

  // Field DATA_BYTE_3: Data byte 3 of Rx/Tx frame.
    inline uint32_t CAN0_WORD01_DATA_BYTE_3 (const uint32_t inValue) {return (inValue & 0xffU) << 0 ; }

  // Field DATA_BYTE_2: Data byte 2 of Rx/Tx frame.
    inline uint32_t CAN0_WORD01_DATA_BYTE_2 (const uint32_t inValue) {return (inValue & 0xffU) << 8 ; }

  // Field DATA_BYTE_1: Data byte 1 of Rx/Tx frame.
    inline uint32_t CAN0_WORD01_DATA_BYTE_1 (const uint32_t inValue) {return (inValue & 0xffU) << 16 ; }

  // Field DATA_BYTE_0: Data byte 0 of Rx/Tx frame.
    inline uint32_t CAN0_WORD01_DATA_BYTE_0 (const uint32_t inValue) {return (inValue & 0xffU) << 24 ; }

//---  Register WORD11: Message Buffer 1 WORD1 Register
  #define CAN0_WORD11 (* ((volatile uint32_t *) (0x40024000 + 156)))

  // Field DATA_BYTE_7: Data byte 7 of Rx/Tx frame.
    inline uint32_t CAN0_WORD11_DATA_BYTE_7 (const uint32_t inValue) {return (inValue & 0xffU) << 0 ; }

  // Field DATA_BYTE_6: Data byte 6 of Rx/Tx frame.
    inline uint32_t CAN0_WORD11_DATA_BYTE_6 (const uint32_t inValue) {return (inValue & 0xffU) << 8 ; }

  // Field DATA_BYTE_5: Data byte 5 of Rx/Tx frame.
    inline uint32_t CAN0_WORD11_DATA_BYTE_5 (const uint32_t inValue) {return (inValue & 0xffU) << 16 ; }

  // Field DATA_BYTE_4: Data byte 4 of Rx/Tx frame.
    inline uint32_t CAN0_WORD11_DATA_BYTE_4 (const uint32_t inValue) {return (inValue & 0xffU) << 24 ; }

//---  Register CS2: Message Buffer 2 CS Register
  #define CAN0_CS2 (* ((volatile uint32_t *) (0x40024000 + 160)))

  // Field TIME_STAMP: Free-Running Counter Time stamp. This 16-bit field is a copy of the Free-Running Timer, captured for Tx and Rx frames at the time when the beginning of the Identifier field appears on the CAN bus.
    inline uint32_t CAN0_CS2_TIME_STAMP (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

  // Field DLC: Length of the data to be stored/transmitted.
    inline uint32_t CAN0_CS2_DLC (const uint32_t inValue) {return (inValue & 0xfU) << 16 ; }

  // Field RTR: Remote Transmission Request. One/zero for remote/data frame.
    const uint32_t CAN0_CS2_RTR = 1U << 20 ;

  // Field IDE: ID Extended. One/zero for extended/standard format frame.
    const uint32_t CAN0_CS2_IDE = 1U << 21 ;

  // Field SRR: Substitute Remote Request. Contains a fixed recessive bit.
    const uint32_t CAN0_CS2_SRR = 1U << 22 ;

  // Field RESERVED: Reserved
    const uint32_t CAN0_CS2_RESERVED = 1U << 23 ;

  // Field CODE: Reserved
    inline uint32_t CAN0_CS2_CODE (const uint32_t inValue) {return (inValue & 0xfU) << 24 ; }

  // Field RESERVED: Reserved
    const uint32_t CAN0_CS2_RESERVED = 1U << 28 ;

  // Field RESERVED: Reserved
    const uint32_t CAN0_CS2_RESERVED = 1U << 29 ;

  // Field RESERVED: Reserved
    const uint32_t CAN0_CS2_RESERVED = 1U << 30 ;

  // Field RESERVED: Reserved
    const uint32_t CAN0_CS2_RESERVED = 1U << 31 ;

//---  Register ID2: Message Buffer 2 ID Register
  #define CAN0_ID2 (* ((volatile uint32_t *) (0x40024000 + 164)))

  // Field EXT: Contains extended (LOW word) identifier of message buffer.
    inline uint32_t CAN0_ID2_EXT (const uint32_t inValue) {return (inValue & 0x3ffffU) << 0 ; }

  // Field STD: Contains standard/extended (HIGH word) identifier of message buffer.
    inline uint32_t CAN0_ID2_STD (const uint32_t inValue) {return (inValue & 0x7ffU) << 18 ; }

  // Field PRIO: Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR and it only makes sense for Tx buffers. These bits are not transmitted. They are appended to the regular ID to define the transmission priority.
    inline uint32_t CAN0_ID2_PRIO (const uint32_t inValue) {return (inValue & 0x7U) << 29 ; }

//---  Register WORD02: Message Buffer 2 WORD0 Register
  #define CAN0_WORD02 (* ((volatile uint32_t *) (0x40024000 + 168)))

  // Field DATA_BYTE_3: Data byte 3 of Rx/Tx frame.
    inline uint32_t CAN0_WORD02_DATA_BYTE_3 (const uint32_t inValue) {return (inValue & 0xffU) << 0 ; }

  // Field DATA_BYTE_2: Data byte 2 of Rx/Tx frame.
    inline uint32_t CAN0_WORD02_DATA_BYTE_2 (const uint32_t inValue) {return (inValue & 0xffU) << 8 ; }

  // Field DATA_BYTE_1: Data byte 1 of Rx/Tx frame.
    inline uint32_t CAN0_WORD02_DATA_BYTE_1 (const uint32_t inValue) {return (inValue & 0xffU) << 16 ; }

  // Field DATA_BYTE_0: Data byte 0 of Rx/Tx frame.
    inline uint32_t CAN0_WORD02_DATA_BYTE_0 (const uint32_t inValue) {return (inValue & 0xffU) << 24 ; }

//---  Register WORD12: Message Buffer 2 WORD1 Register
  #define CAN0_WORD12 (* ((volatile uint32_t *) (0x40024000 + 172)))

  // Field DATA_BYTE_7: Data byte 7 of Rx/Tx frame.
    inline uint32_t CAN0_WORD12_DATA_BYTE_7 (const uint32_t inValue) {return (inValue & 0xffU) << 0 ; }

  // Field DATA_BYTE_6: Data byte 6 of Rx/Tx frame.
    inline uint32_t CAN0_WORD12_DATA_BYTE_6 (const uint32_t inValue) {return (inValue & 0xffU) << 8 ; }

  // Field DATA_BYTE_5: Data byte 5 of Rx/Tx frame.
    inline uint32_t CAN0_WORD12_DATA_BYTE_5 (const uint32_t inValue) {return (inValue & 0xffU) << 16 ; }

  // Field DATA_BYTE_4: Data byte 4 of Rx/Tx frame.
    inline uint32_t CAN0_WORD12_DATA_BYTE_4 (const uint32_t inValue) {return (inValue & 0xffU) << 24 ; }

//---  Register CS3: Message Buffer 3 CS Register
  #define CAN0_CS3 (* ((volatile uint32_t *) (0x40024000 + 176)))

  // Field TIME_STAMP: Free-Running Counter Time stamp. This 16-bit field is a copy of the Free-Running Timer, captured for Tx and Rx frames at the time when the beginning of the Identifier field appears on the CAN bus.
    inline uint32_t CAN0_CS3_TIME_STAMP (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

  // Field DLC: Length of the data to be stored/transmitted.
    inline uint32_t CAN0_CS3_DLC (const uint32_t inValue) {return (inValue & 0xfU) << 16 ; }

  // Field RTR: Remote Transmission Request. One/zero for remote/data frame.
    const uint32_t CAN0_CS3_RTR = 1U << 20 ;

  // Field IDE: ID Extended. One/zero for extended/standard format frame.
    const uint32_t CAN0_CS3_IDE = 1U << 21 ;

  // Field SRR: Substitute Remote Request. Contains a fixed recessive bit.
    const uint32_t CAN0_CS3_SRR = 1U << 22 ;

  // Field RESERVED: Reserved
    const uint32_t CAN0_CS3_RESERVED = 1U << 23 ;

  // Field CODE: Reserved
    inline uint32_t CAN0_CS3_CODE (const uint32_t inValue) {return (inValue & 0xfU) << 24 ; }

  // Field RESERVED: Reserved
    const uint32_t CAN0_CS3_RESERVED = 1U << 28 ;

  // Field RESERVED: Reserved
    const uint32_t CAN0_CS3_RESERVED = 1U << 29 ;

  // Field RESERVED: Reserved
    const uint32_t CAN0_CS3_RESERVED = 1U << 30 ;

  // Field RESERVED: Reserved
    const uint32_t CAN0_CS3_RESERVED = 1U << 31 ;

//---  Register ID3: Message Buffer 3 ID Register
  #define CAN0_ID3 (* ((volatile uint32_t *) (0x40024000 + 180)))

  // Field EXT: Contains extended (LOW word) identifier of message buffer.
    inline uint32_t CAN0_ID3_EXT (const uint32_t inValue) {return (inValue & 0x3ffffU) << 0 ; }

  // Field STD: Contains standard/extended (HIGH word) identifier of message buffer.
    inline uint32_t CAN0_ID3_STD (const uint32_t inValue) {return (inValue & 0x7ffU) << 18 ; }

  // Field PRIO: Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR and it only makes sense for Tx buffers. These bits are not transmitted. They are appended to the regular ID to define the transmission priority.
    inline uint32_t CAN0_ID3_PRIO (const uint32_t inValue) {return (inValue & 0x7U) << 29 ; }

//---  Register WORD03: Message Buffer 3 WORD0 Register
  #define CAN0_WORD03 (* ((volatile uint32_t *) (0x40024000 + 184)))

  // Field DATA_BYTE_3: Data byte 3 of Rx/Tx frame.
    inline uint32_t CAN0_WORD03_DATA_BYTE_3 (const uint32_t inValue) {return (inValue & 0xffU) << 0 ; }

  // Field DATA_BYTE_2: Data byte 2 of Rx/Tx frame.
    inline uint32_t CAN0_WORD03_DATA_BYTE_2 (const uint32_t inValue) {return (inValue & 0xffU) << 8 ; }

  // Field DATA_BYTE_1: Data byte 1 of Rx/Tx frame.
    inline uint32_t CAN0_WORD03_DATA_BYTE_1 (const uint32_t inValue) {return (inValue & 0xffU) << 16 ; }

  // Field DATA_BYTE_0: Data byte 0 of Rx/Tx frame.
    inline uint32_t CAN0_WORD03_DATA_BYTE_0 (const uint32_t inValue) {return (inValue & 0xffU) << 24 ; }

//---  Register WORD13: Message Buffer 3 WORD1 Register
  #define CAN0_WORD13 (* ((volatile uint32_t *) (0x40024000 + 188)))

  // Field DATA_BYTE_7: Data byte 7 of Rx/Tx frame.
    inline uint32_t CAN0_WORD13_DATA_BYTE_7 (const uint32_t inValue) {return (inValue & 0xffU) << 0 ; }

  // Field DATA_BYTE_6: Data byte 6 of Rx/Tx frame.
    inline uint32_t CAN0_WORD13_DATA_BYTE_6 (const uint32_t inValue) {return (inValue & 0xffU) << 8 ; }

  // Field DATA_BYTE_5: Data byte 5 of Rx/Tx frame.
    inline uint32_t CAN0_WORD13_DATA_BYTE_5 (const uint32_t inValue) {return (inValue & 0xffU) << 16 ; }

  // Field DATA_BYTE_4: Data byte 4 of Rx/Tx frame.
    inline uint32_t CAN0_WORD13_DATA_BYTE_4 (const uint32_t inValue) {return (inValue & 0xffU) << 24 ; }

//---  Register CS4: Message Buffer 4 CS Register
  #define CAN0_CS4 (* ((volatile uint32_t *) (0x40024000 + 192)))

  // Field TIME_STAMP: Free-Running Counter Time stamp. This 16-bit field is a copy of the Free-Running Timer, captured for Tx and Rx frames at the time when the beginning of the Identifier field appears on the CAN bus.
    inline uint32_t CAN0_CS4_TIME_STAMP (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

  // Field DLC: Length of the data to be stored/transmitted.
    inline uint32_t CAN0_CS4_DLC (const uint32_t inValue) {return (inValue & 0xfU) << 16 ; }

  // Field RTR: Remote Transmission Request. One/zero for remote/data frame.
    const uint32_t CAN0_CS4_RTR = 1U << 20 ;

  // Field IDE: ID Extended. One/zero for extended/standard format frame.
    const uint32_t CAN0_CS4_IDE = 1U << 21 ;

  // Field SRR: Substitute Remote Request. Contains a fixed recessive bit.
    const uint32_t CAN0_CS4_SRR = 1U << 22 ;

  // Field RESERVED: Reserved
    const uint32_t CAN0_CS4_RESERVED = 1U << 23 ;

  // Field CODE: Reserved
    inline uint32_t CAN0_CS4_CODE (const uint32_t inValue) {return (inValue & 0xfU) << 24 ; }

  // Field RESERVED: Reserved
    const uint32_t CAN0_CS4_RESERVED = 1U << 28 ;

  // Field RESERVED: Reserved
    const uint32_t CAN0_CS4_RESERVED = 1U << 29 ;

  // Field RESERVED: Reserved
    const uint32_t CAN0_CS4_RESERVED = 1U << 30 ;

  // Field RESERVED: Reserved
    const uint32_t CAN0_CS4_RESERVED = 1U << 31 ;

//---  Register ID4: Message Buffer 4 ID Register
  #define CAN0_ID4 (* ((volatile uint32_t *) (0x40024000 + 196)))

  // Field EXT: Contains extended (LOW word) identifier of message buffer.
    inline uint32_t CAN0_ID4_EXT (const uint32_t inValue) {return (inValue & 0x3ffffU) << 0 ; }

  // Field STD: Contains standard/extended (HIGH word) identifier of message buffer.
    inline uint32_t CAN0_ID4_STD (const uint32_t inValue) {return (inValue & 0x7ffU) << 18 ; }

  // Field PRIO: Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR and it only makes sense for Tx buffers. These bits are not transmitted. They are appended to the regular ID to define the transmission priority.
    inline uint32_t CAN0_ID4_PRIO (const uint32_t inValue) {return (inValue & 0x7U) << 29 ; }

//---  Register WORD04: Message Buffer 4 WORD0 Register
  #define CAN0_WORD04 (* ((volatile uint32_t *) (0x40024000 + 200)))

  // Field DATA_BYTE_3: Data byte 3 of Rx/Tx frame.
    inline uint32_t CAN0_WORD04_DATA_BYTE_3 (const uint32_t inValue) {return (inValue & 0xffU) << 0 ; }

  // Field DATA_BYTE_2: Data byte 2 of Rx/Tx frame.
    inline uint32_t CAN0_WORD04_DATA_BYTE_2 (const uint32_t inValue) {return (inValue & 0xffU) << 8 ; }

  // Field DATA_BYTE_1: Data byte 1 of Rx/Tx frame.
    inline uint32_t CAN0_WORD04_DATA_BYTE_1 (const uint32_t inValue) {return (inValue & 0xffU) << 16 ; }

  // Field DATA_BYTE_0: Data byte 0 of Rx/Tx frame.
    inline uint32_t CAN0_WORD04_DATA_BYTE_0 (const uint32_t inValue) {return (inValue & 0xffU) << 24 ; }

//---  Register WORD14: Message Buffer 4 WORD1 Register
  #define CAN0_WORD14 (* ((volatile uint32_t *) (0x40024000 + 204)))

  // Field DATA_BYTE_7: Data byte 7 of Rx/Tx frame.
    inline uint32_t CAN0_WORD14_DATA_BYTE_7 (const uint32_t inValue) {return (inValue & 0xffU) << 0 ; }

  // Field DATA_BYTE_6: Data byte 6 of Rx/Tx frame.
    inline uint32_t CAN0_WORD14_DATA_BYTE_6 (const uint32_t inValue) {return (inValue & 0xffU) << 8 ; }

  // Field DATA_BYTE_5: Data byte 5 of Rx/Tx frame.
    inline uint32_t CAN0_WORD14_DATA_BYTE_5 (const uint32_t inValue) {return (inValue & 0xffU) << 16 ; }

  // Field DATA_BYTE_4: Data byte 4 of Rx/Tx frame.
    inline uint32_t CAN0_WORD14_DATA_BYTE_4 (const uint32_t inValue) {return (inValue & 0xffU) << 24 ; }

//---  Register CS5: Message Buffer 5 CS Register
  #define CAN0_CS5 (* ((volatile uint32_t *) (0x40024000 + 208)))

  // Field TIME_STAMP: Free-Running Counter Time stamp. This 16-bit field is a copy of the Free-Running Timer, captured for Tx and Rx frames at the time when the beginning of the Identifier field appears on the CAN bus.
    inline uint32_t CAN0_CS5_TIME_STAMP (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

  // Field DLC: Length of the data to be stored/transmitted.
    inline uint32_t CAN0_CS5_DLC (const uint32_t inValue) {return (inValue & 0xfU) << 16 ; }

  // Field RTR: Remote Transmission Request. One/zero for remote/data frame.
    const uint32_t CAN0_CS5_RTR = 1U << 20 ;

  // Field IDE: ID Extended. One/zero for extended/standard format frame.
    const uint32_t CAN0_CS5_IDE = 1U << 21 ;

  // Field SRR: Substitute Remote Request. Contains a fixed recessive bit.
    const uint32_t CAN0_CS5_SRR = 1U << 22 ;

  // Field RESERVED: Reserved
    const uint32_t CAN0_CS5_RESERVED = 1U << 23 ;

  // Field CODE: Reserved
    inline uint32_t CAN0_CS5_CODE (const uint32_t inValue) {return (inValue & 0xfU) << 24 ; }

  // Field RESERVED: Reserved
    const uint32_t CAN0_CS5_RESERVED = 1U << 28 ;

  // Field RESERVED: Reserved
    const uint32_t CAN0_CS5_RESERVED = 1U << 29 ;

  // Field RESERVED: Reserved
    const uint32_t CAN0_CS5_RESERVED = 1U << 30 ;

  // Field RESERVED: Reserved
    const uint32_t CAN0_CS5_RESERVED = 1U << 31 ;

//---  Register ID5: Message Buffer 5 ID Register
  #define CAN0_ID5 (* ((volatile uint32_t *) (0x40024000 + 212)))

  // Field EXT: Contains extended (LOW word) identifier of message buffer.
    inline uint32_t CAN0_ID5_EXT (const uint32_t inValue) {return (inValue & 0x3ffffU) << 0 ; }

  // Field STD: Contains standard/extended (HIGH word) identifier of message buffer.
    inline uint32_t CAN0_ID5_STD (const uint32_t inValue) {return (inValue & 0x7ffU) << 18 ; }

  // Field PRIO: Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR and it only makes sense for Tx buffers. These bits are not transmitted. They are appended to the regular ID to define the transmission priority.
    inline uint32_t CAN0_ID5_PRIO (const uint32_t inValue) {return (inValue & 0x7U) << 29 ; }

//---  Register WORD05: Message Buffer 5 WORD0 Register
  #define CAN0_WORD05 (* ((volatile uint32_t *) (0x40024000 + 216)))

  // Field DATA_BYTE_3: Data byte 3 of Rx/Tx frame.
    inline uint32_t CAN0_WORD05_DATA_BYTE_3 (const uint32_t inValue) {return (inValue & 0xffU) << 0 ; }

  // Field DATA_BYTE_2: Data byte 2 of Rx/Tx frame.
    inline uint32_t CAN0_WORD05_DATA_BYTE_2 (const uint32_t inValue) {return (inValue & 0xffU) << 8 ; }

  // Field DATA_BYTE_1: Data byte 1 of Rx/Tx frame.
    inline uint32_t CAN0_WORD05_DATA_BYTE_1 (const uint32_t inValue) {return (inValue & 0xffU) << 16 ; }

  // Field DATA_BYTE_0: Data byte 0 of Rx/Tx frame.
    inline uint32_t CAN0_WORD05_DATA_BYTE_0 (const uint32_t inValue) {return (inValue & 0xffU) << 24 ; }

//---  Register WORD15: Message Buffer 5 WORD1 Register
  #define CAN0_WORD15 (* ((volatile uint32_t *) (0x40024000 + 220)))

  // Field DATA_BYTE_7: Data byte 7 of Rx/Tx frame.
    inline uint32_t CAN0_WORD15_DATA_BYTE_7 (const uint32_t inValue) {return (inValue & 0xffU) << 0 ; }

  // Field DATA_BYTE_6: Data byte 6 of Rx/Tx frame.
    inline uint32_t CAN0_WORD15_DATA_BYTE_6 (const uint32_t inValue) {return (inValue & 0xffU) << 8 ; }

  // Field DATA_BYTE_5: Data byte 5 of Rx/Tx frame.
    inline uint32_t CAN0_WORD15_DATA_BYTE_5 (const uint32_t inValue) {return (inValue & 0xffU) << 16 ; }

  // Field DATA_BYTE_4: Data byte 4 of Rx/Tx frame.
    inline uint32_t CAN0_WORD15_DATA_BYTE_4 (const uint32_t inValue) {return (inValue & 0xffU) << 24 ; }

//---  Register CS6: Message Buffer 6 CS Register
  #define CAN0_CS6 (* ((volatile uint32_t *) (0x40024000 + 224)))

  // Field TIME_STAMP: Free-Running Counter Time stamp. This 16-bit field is a copy of the Free-Running Timer, captured for Tx and Rx frames at the time when the beginning of the Identifier field appears on the CAN bus.
    inline uint32_t CAN0_CS6_TIME_STAMP (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

  // Field DLC: Length of the data to be stored/transmitted.
    inline uint32_t CAN0_CS6_DLC (const uint32_t inValue) {return (inValue & 0xfU) << 16 ; }

  // Field RTR: Remote Transmission Request. One/zero for remote/data frame.
    const uint32_t CAN0_CS6_RTR = 1U << 20 ;

  // Field IDE: ID Extended. One/zero for extended/standard format frame.
    const uint32_t CAN0_CS6_IDE = 1U << 21 ;

  // Field SRR: Substitute Remote Request. Contains a fixed recessive bit.
    const uint32_t CAN0_CS6_SRR = 1U << 22 ;

  // Field RESERVED: Reserved
    const uint32_t CAN0_CS6_RESERVED = 1U << 23 ;

  // Field CODE: Reserved
    inline uint32_t CAN0_CS6_CODE (const uint32_t inValue) {return (inValue & 0xfU) << 24 ; }

  // Field RESERVED: Reserved
    const uint32_t CAN0_CS6_RESERVED = 1U << 28 ;

  // Field RESERVED: Reserved
    const uint32_t CAN0_CS6_RESERVED = 1U << 29 ;

  // Field RESERVED: Reserved
    const uint32_t CAN0_CS6_RESERVED = 1U << 30 ;

  // Field RESERVED: Reserved
    const uint32_t CAN0_CS6_RESERVED = 1U << 31 ;

//---  Register ID6: Message Buffer 6 ID Register
  #define CAN0_ID6 (* ((volatile uint32_t *) (0x40024000 + 228)))

  // Field EXT: Contains extended (LOW word) identifier of message buffer.
    inline uint32_t CAN0_ID6_EXT (const uint32_t inValue) {return (inValue & 0x3ffffU) << 0 ; }

  // Field STD: Contains standard/extended (HIGH word) identifier of message buffer.
    inline uint32_t CAN0_ID6_STD (const uint32_t inValue) {return (inValue & 0x7ffU) << 18 ; }

  // Field PRIO: Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR and it only makes sense for Tx buffers. These bits are not transmitted. They are appended to the regular ID to define the transmission priority.
    inline uint32_t CAN0_ID6_PRIO (const uint32_t inValue) {return (inValue & 0x7U) << 29 ; }

//---  Register WORD06: Message Buffer 6 WORD0 Register
  #define CAN0_WORD06 (* ((volatile uint32_t *) (0x40024000 + 232)))

  // Field DATA_BYTE_3: Data byte 3 of Rx/Tx frame.
    inline uint32_t CAN0_WORD06_DATA_BYTE_3 (const uint32_t inValue) {return (inValue & 0xffU) << 0 ; }

  // Field DATA_BYTE_2: Data byte 2 of Rx/Tx frame.
    inline uint32_t CAN0_WORD06_DATA_BYTE_2 (const uint32_t inValue) {return (inValue & 0xffU) << 8 ; }

  // Field DATA_BYTE_1: Data byte 1 of Rx/Tx frame.
    inline uint32_t CAN0_WORD06_DATA_BYTE_1 (const uint32_t inValue) {return (inValue & 0xffU) << 16 ; }

  // Field DATA_BYTE_0: Data byte 0 of Rx/Tx frame.
    inline uint32_t CAN0_WORD06_DATA_BYTE_0 (const uint32_t inValue) {return (inValue & 0xffU) << 24 ; }

//---  Register WORD16: Message Buffer 6 WORD1 Register
  #define CAN0_WORD16 (* ((volatile uint32_t *) (0x40024000 + 236)))

  // Field DATA_BYTE_7: Data byte 7 of Rx/Tx frame.
    inline uint32_t CAN0_WORD16_DATA_BYTE_7 (const uint32_t inValue) {return (inValue & 0xffU) << 0 ; }

  // Field DATA_BYTE_6: Data byte 6 of Rx/Tx frame.
    inline uint32_t CAN0_WORD16_DATA_BYTE_6 (const uint32_t inValue) {return (inValue & 0xffU) << 8 ; }

  // Field DATA_BYTE_5: Data byte 5 of Rx/Tx frame.
    inline uint32_t CAN0_WORD16_DATA_BYTE_5 (const uint32_t inValue) {return (inValue & 0xffU) << 16 ; }

  // Field DATA_BYTE_4: Data byte 4 of Rx/Tx frame.
    inline uint32_t CAN0_WORD16_DATA_BYTE_4 (const uint32_t inValue) {return (inValue & 0xffU) << 24 ; }

//---  Register CS7: Message Buffer 7 CS Register
  #define CAN0_CS7 (* ((volatile uint32_t *) (0x40024000 + 240)))

  // Field TIME_STAMP: Free-Running Counter Time stamp. This 16-bit field is a copy of the Free-Running Timer, captured for Tx and Rx frames at the time when the beginning of the Identifier field appears on the CAN bus.
    inline uint32_t CAN0_CS7_TIME_STAMP (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

  // Field DLC: Length of the data to be stored/transmitted.
    inline uint32_t CAN0_CS7_DLC (const uint32_t inValue) {return (inValue & 0xfU) << 16 ; }

  // Field RTR: Remote Transmission Request. One/zero for remote/data frame.
    const uint32_t CAN0_CS7_RTR = 1U << 20 ;

  // Field IDE: ID Extended. One/zero for extended/standard format frame.
    const uint32_t CAN0_CS7_IDE = 1U << 21 ;

  // Field SRR: Substitute Remote Request. Contains a fixed recessive bit.
    const uint32_t CAN0_CS7_SRR = 1U << 22 ;

  // Field RESERVED: Reserved
    const uint32_t CAN0_CS7_RESERVED = 1U << 23 ;

  // Field CODE: Reserved
    inline uint32_t CAN0_CS7_CODE (const uint32_t inValue) {return (inValue & 0xfU) << 24 ; }

  // Field RESERVED: Reserved
    const uint32_t CAN0_CS7_RESERVED = 1U << 28 ;

  // Field RESERVED: Reserved
    const uint32_t CAN0_CS7_RESERVED = 1U << 29 ;

  // Field RESERVED: Reserved
    const uint32_t CAN0_CS7_RESERVED = 1U << 30 ;

  // Field RESERVED: Reserved
    const uint32_t CAN0_CS7_RESERVED = 1U << 31 ;

//---  Register ID7: Message Buffer 7 ID Register
  #define CAN0_ID7 (* ((volatile uint32_t *) (0x40024000 + 244)))

  // Field EXT: Contains extended (LOW word) identifier of message buffer.
    inline uint32_t CAN0_ID7_EXT (const uint32_t inValue) {return (inValue & 0x3ffffU) << 0 ; }

  // Field STD: Contains standard/extended (HIGH word) identifier of message buffer.
    inline uint32_t CAN0_ID7_STD (const uint32_t inValue) {return (inValue & 0x7ffU) << 18 ; }

  // Field PRIO: Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR and it only makes sense for Tx buffers. These bits are not transmitted. They are appended to the regular ID to define the transmission priority.
    inline uint32_t CAN0_ID7_PRIO (const uint32_t inValue) {return (inValue & 0x7U) << 29 ; }

//---  Register WORD07: Message Buffer 7 WORD0 Register
  #define CAN0_WORD07 (* ((volatile uint32_t *) (0x40024000 + 248)))

  // Field DATA_BYTE_3: Data byte 3 of Rx/Tx frame.
    inline uint32_t CAN0_WORD07_DATA_BYTE_3 (const uint32_t inValue) {return (inValue & 0xffU) << 0 ; }

  // Field DATA_BYTE_2: Data byte 2 of Rx/Tx frame.
    inline uint32_t CAN0_WORD07_DATA_BYTE_2 (const uint32_t inValue) {return (inValue & 0xffU) << 8 ; }

  // Field DATA_BYTE_1: Data byte 1 of Rx/Tx frame.
    inline uint32_t CAN0_WORD07_DATA_BYTE_1 (const uint32_t inValue) {return (inValue & 0xffU) << 16 ; }

  // Field DATA_BYTE_0: Data byte 0 of Rx/Tx frame.
    inline uint32_t CAN0_WORD07_DATA_BYTE_0 (const uint32_t inValue) {return (inValue & 0xffU) << 24 ; }

//---  Register WORD17: Message Buffer 7 WORD1 Register
  #define CAN0_WORD17 (* ((volatile uint32_t *) (0x40024000 + 252)))

  // Field DATA_BYTE_7: Data byte 7 of Rx/Tx frame.
    inline uint32_t CAN0_WORD17_DATA_BYTE_7 (const uint32_t inValue) {return (inValue & 0xffU) << 0 ; }

  // Field DATA_BYTE_6: Data byte 6 of Rx/Tx frame.
    inline uint32_t CAN0_WORD17_DATA_BYTE_6 (const uint32_t inValue) {return (inValue & 0xffU) << 8 ; }

  // Field DATA_BYTE_5: Data byte 5 of Rx/Tx frame.
    inline uint32_t CAN0_WORD17_DATA_BYTE_5 (const uint32_t inValue) {return (inValue & 0xffU) << 16 ; }

  // Field DATA_BYTE_4: Data byte 4 of Rx/Tx frame.
    inline uint32_t CAN0_WORD17_DATA_BYTE_4 (const uint32_t inValue) {return (inValue & 0xffU) << 24 ; }

//---  Register CS8: Message Buffer 8 CS Register
  #define CAN0_CS8 (* ((volatile uint32_t *) (0x40024000 + 256)))

  // Field TIME_STAMP: Free-Running Counter Time stamp. This 16-bit field is a copy of the Free-Running Timer, captured for Tx and Rx frames at the time when the beginning of the Identifier field appears on the CAN bus.
    inline uint32_t CAN0_CS8_TIME_STAMP (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

  // Field DLC: Length of the data to be stored/transmitted.
    inline uint32_t CAN0_CS8_DLC (const uint32_t inValue) {return (inValue & 0xfU) << 16 ; }

  // Field RTR: Remote Transmission Request. One/zero for remote/data frame.
    const uint32_t CAN0_CS8_RTR = 1U << 20 ;

  // Field IDE: ID Extended. One/zero for extended/standard format frame.
    const uint32_t CAN0_CS8_IDE = 1U << 21 ;

  // Field SRR: Substitute Remote Request. Contains a fixed recessive bit.
    const uint32_t CAN0_CS8_SRR = 1U << 22 ;

  // Field RESERVED: Reserved
    const uint32_t CAN0_CS8_RESERVED = 1U << 23 ;

  // Field CODE: Reserved
    inline uint32_t CAN0_CS8_CODE (const uint32_t inValue) {return (inValue & 0xfU) << 24 ; }

  // Field RESERVED: Reserved
    const uint32_t CAN0_CS8_RESERVED = 1U << 28 ;

  // Field RESERVED: Reserved
    const uint32_t CAN0_CS8_RESERVED = 1U << 29 ;

  // Field RESERVED: Reserved
    const uint32_t CAN0_CS8_RESERVED = 1U << 30 ;

  // Field RESERVED: Reserved
    const uint32_t CAN0_CS8_RESERVED = 1U << 31 ;

//---  Register ID8: Message Buffer 8 ID Register
  #define CAN0_ID8 (* ((volatile uint32_t *) (0x40024000 + 260)))

  // Field EXT: Contains extended (LOW word) identifier of message buffer.
    inline uint32_t CAN0_ID8_EXT (const uint32_t inValue) {return (inValue & 0x3ffffU) << 0 ; }

  // Field STD: Contains standard/extended (HIGH word) identifier of message buffer.
    inline uint32_t CAN0_ID8_STD (const uint32_t inValue) {return (inValue & 0x7ffU) << 18 ; }

  // Field PRIO: Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR and it only makes sense for Tx buffers. These bits are not transmitted. They are appended to the regular ID to define the transmission priority.
    inline uint32_t CAN0_ID8_PRIO (const uint32_t inValue) {return (inValue & 0x7U) << 29 ; }

//---  Register WORD08: Message Buffer 8 WORD0 Register
  #define CAN0_WORD08 (* ((volatile uint32_t *) (0x40024000 + 264)))

  // Field DATA_BYTE_3: Data byte 3 of Rx/Tx frame.
    inline uint32_t CAN0_WORD08_DATA_BYTE_3 (const uint32_t inValue) {return (inValue & 0xffU) << 0 ; }

  // Field DATA_BYTE_2: Data byte 2 of Rx/Tx frame.
    inline uint32_t CAN0_WORD08_DATA_BYTE_2 (const uint32_t inValue) {return (inValue & 0xffU) << 8 ; }

  // Field DATA_BYTE_1: Data byte 1 of Rx/Tx frame.
    inline uint32_t CAN0_WORD08_DATA_BYTE_1 (const uint32_t inValue) {return (inValue & 0xffU) << 16 ; }

  // Field DATA_BYTE_0: Data byte 0 of Rx/Tx frame.
    inline uint32_t CAN0_WORD08_DATA_BYTE_0 (const uint32_t inValue) {return (inValue & 0xffU) << 24 ; }

//---  Register WORD18: Message Buffer 8 WORD1 Register
  #define CAN0_WORD18 (* ((volatile uint32_t *) (0x40024000 + 268)))

  // Field DATA_BYTE_7: Data byte 7 of Rx/Tx frame.
    inline uint32_t CAN0_WORD18_DATA_BYTE_7 (const uint32_t inValue) {return (inValue & 0xffU) << 0 ; }

  // Field DATA_BYTE_6: Data byte 6 of Rx/Tx frame.
    inline uint32_t CAN0_WORD18_DATA_BYTE_6 (const uint32_t inValue) {return (inValue & 0xffU) << 8 ; }

  // Field DATA_BYTE_5: Data byte 5 of Rx/Tx frame.
    inline uint32_t CAN0_WORD18_DATA_BYTE_5 (const uint32_t inValue) {return (inValue & 0xffU) << 16 ; }

  // Field DATA_BYTE_4: Data byte 4 of Rx/Tx frame.
    inline uint32_t CAN0_WORD18_DATA_BYTE_4 (const uint32_t inValue) {return (inValue & 0xffU) << 24 ; }

//---  Register CS9: Message Buffer 9 CS Register
  #define CAN0_CS9 (* ((volatile uint32_t *) (0x40024000 + 272)))

  // Field TIME_STAMP: Free-Running Counter Time stamp. This 16-bit field is a copy of the Free-Running Timer, captured for Tx and Rx frames at the time when the beginning of the Identifier field appears on the CAN bus.
    inline uint32_t CAN0_CS9_TIME_STAMP (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

  // Field DLC: Length of the data to be stored/transmitted.
    inline uint32_t CAN0_CS9_DLC (const uint32_t inValue) {return (inValue & 0xfU) << 16 ; }

  // Field RTR: Remote Transmission Request. One/zero for remote/data frame.
    const uint32_t CAN0_CS9_RTR = 1U << 20 ;

  // Field IDE: ID Extended. One/zero for extended/standard format frame.
    const uint32_t CAN0_CS9_IDE = 1U << 21 ;

  // Field SRR: Substitute Remote Request. Contains a fixed recessive bit.
    const uint32_t CAN0_CS9_SRR = 1U << 22 ;

  // Field RESERVED: Reserved
    const uint32_t CAN0_CS9_RESERVED = 1U << 23 ;

  // Field CODE: Reserved
    inline uint32_t CAN0_CS9_CODE (const uint32_t inValue) {return (inValue & 0xfU) << 24 ; }

  // Field RESERVED: Reserved
    const uint32_t CAN0_CS9_RESERVED = 1U << 28 ;

  // Field RESERVED: Reserved
    const uint32_t CAN0_CS9_RESERVED = 1U << 29 ;

  // Field RESERVED: Reserved
    const uint32_t CAN0_CS9_RESERVED = 1U << 30 ;

  // Field RESERVED: Reserved
    const uint32_t CAN0_CS9_RESERVED = 1U << 31 ;

//---  Register ID9: Message Buffer 9 ID Register
  #define CAN0_ID9 (* ((volatile uint32_t *) (0x40024000 + 276)))

  // Field EXT: Contains extended (LOW word) identifier of message buffer.
    inline uint32_t CAN0_ID9_EXT (const uint32_t inValue) {return (inValue & 0x3ffffU) << 0 ; }

  // Field STD: Contains standard/extended (HIGH word) identifier of message buffer.
    inline uint32_t CAN0_ID9_STD (const uint32_t inValue) {return (inValue & 0x7ffU) << 18 ; }

  // Field PRIO: Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR and it only makes sense for Tx buffers. These bits are not transmitted. They are appended to the regular ID to define the transmission priority.
    inline uint32_t CAN0_ID9_PRIO (const uint32_t inValue) {return (inValue & 0x7U) << 29 ; }

//---  Register WORD09: Message Buffer 9 WORD0 Register
  #define CAN0_WORD09 (* ((volatile uint32_t *) (0x40024000 + 280)))

  // Field DATA_BYTE_3: Data byte 3 of Rx/Tx frame.
    inline uint32_t CAN0_WORD09_DATA_BYTE_3 (const uint32_t inValue) {return (inValue & 0xffU) << 0 ; }

  // Field DATA_BYTE_2: Data byte 2 of Rx/Tx frame.
    inline uint32_t CAN0_WORD09_DATA_BYTE_2 (const uint32_t inValue) {return (inValue & 0xffU) << 8 ; }

  // Field DATA_BYTE_1: Data byte 1 of Rx/Tx frame.
    inline uint32_t CAN0_WORD09_DATA_BYTE_1 (const uint32_t inValue) {return (inValue & 0xffU) << 16 ; }

  // Field DATA_BYTE_0: Data byte 0 of Rx/Tx frame.
    inline uint32_t CAN0_WORD09_DATA_BYTE_0 (const uint32_t inValue) {return (inValue & 0xffU) << 24 ; }

//---  Register WORD19: Message Buffer 9 WORD1 Register
  #define CAN0_WORD19 (* ((volatile uint32_t *) (0x40024000 + 284)))

  // Field DATA_BYTE_7: Data byte 7 of Rx/Tx frame.
    inline uint32_t CAN0_WORD19_DATA_BYTE_7 (const uint32_t inValue) {return (inValue & 0xffU) << 0 ; }

  // Field DATA_BYTE_6: Data byte 6 of Rx/Tx frame.
    inline uint32_t CAN0_WORD19_DATA_BYTE_6 (const uint32_t inValue) {return (inValue & 0xffU) << 8 ; }

  // Field DATA_BYTE_5: Data byte 5 of Rx/Tx frame.
    inline uint32_t CAN0_WORD19_DATA_BYTE_5 (const uint32_t inValue) {return (inValue & 0xffU) << 16 ; }

  // Field DATA_BYTE_4: Data byte 4 of Rx/Tx frame.
    inline uint32_t CAN0_WORD19_DATA_BYTE_4 (const uint32_t inValue) {return (inValue & 0xffU) << 24 ; }

//---  Register CS10: Message Buffer 10 CS Register
  #define CAN0_CS10 (* ((volatile uint32_t *) (0x40024000 + 288)))

  // Field TIME_STAMP: Free-Running Counter Time stamp. This 16-bit field is a copy of the Free-Running Timer, captured for Tx and Rx frames at the time when the beginning of the Identifier field appears on the CAN bus.
    inline uint32_t CAN0_CS10_TIME_STAMP (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

  // Field DLC: Length of the data to be stored/transmitted.
    inline uint32_t CAN0_CS10_DLC (const uint32_t inValue) {return (inValue & 0xfU) << 16 ; }

  // Field RTR: Remote Transmission Request. One/zero for remote/data frame.
    const uint32_t CAN0_CS10_RTR = 1U << 20 ;

  // Field IDE: ID Extended. One/zero for extended/standard format frame.
    const uint32_t CAN0_CS10_IDE = 1U << 21 ;

  // Field SRR: Substitute Remote Request. Contains a fixed recessive bit.
    const uint32_t CAN0_CS10_SRR = 1U << 22 ;

  // Field RESERVED: Reserved
    const uint32_t CAN0_CS10_RESERVED = 1U << 23 ;

  // Field CODE: Reserved
    inline uint32_t CAN0_CS10_CODE (const uint32_t inValue) {return (inValue & 0xfU) << 24 ; }

  // Field RESERVED: Reserved
    const uint32_t CAN0_CS10_RESERVED = 1U << 28 ;

  // Field RESERVED: Reserved
    const uint32_t CAN0_CS10_RESERVED = 1U << 29 ;

  // Field RESERVED: Reserved
    const uint32_t CAN0_CS10_RESERVED = 1U << 30 ;

  // Field RESERVED: Reserved
    const uint32_t CAN0_CS10_RESERVED = 1U << 31 ;

//---  Register ID10: Message Buffer 10 ID Register
  #define CAN0_ID10 (* ((volatile uint32_t *) (0x40024000 + 292)))

  // Field EXT: Contains extended (LOW word) identifier of message buffer.
    inline uint32_t CAN0_ID10_EXT (const uint32_t inValue) {return (inValue & 0x3ffffU) << 0 ; }

  // Field STD: Contains standard/extended (HIGH word) identifier of message buffer.
    inline uint32_t CAN0_ID10_STD (const uint32_t inValue) {return (inValue & 0x7ffU) << 18 ; }

  // Field PRIO: Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR and it only makes sense for Tx buffers. These bits are not transmitted. They are appended to the regular ID to define the transmission priority.
    inline uint32_t CAN0_ID10_PRIO (const uint32_t inValue) {return (inValue & 0x7U) << 29 ; }

//---  Register WORD010: Message Buffer 10 WORD0 Register
  #define CAN0_WORD010 (* ((volatile uint32_t *) (0x40024000 + 296)))

  // Field DATA_BYTE_3: Data byte 3 of Rx/Tx frame.
    inline uint32_t CAN0_WORD010_DATA_BYTE_3 (const uint32_t inValue) {return (inValue & 0xffU) << 0 ; }

  // Field DATA_BYTE_2: Data byte 2 of Rx/Tx frame.
    inline uint32_t CAN0_WORD010_DATA_BYTE_2 (const uint32_t inValue) {return (inValue & 0xffU) << 8 ; }

  // Field DATA_BYTE_1: Data byte 1 of Rx/Tx frame.
    inline uint32_t CAN0_WORD010_DATA_BYTE_1 (const uint32_t inValue) {return (inValue & 0xffU) << 16 ; }

  // Field DATA_BYTE_0: Data byte 0 of Rx/Tx frame.
    inline uint32_t CAN0_WORD010_DATA_BYTE_0 (const uint32_t inValue) {return (inValue & 0xffU) << 24 ; }

//---  Register WORD110: Message Buffer 10 WORD1 Register
  #define CAN0_WORD110 (* ((volatile uint32_t *) (0x40024000 + 300)))

  // Field DATA_BYTE_7: Data byte 7 of Rx/Tx frame.
    inline uint32_t CAN0_WORD110_DATA_BYTE_7 (const uint32_t inValue) {return (inValue & 0xffU) << 0 ; }

  // Field DATA_BYTE_6: Data byte 6 of Rx/Tx frame.
    inline uint32_t CAN0_WORD110_DATA_BYTE_6 (const uint32_t inValue) {return (inValue & 0xffU) << 8 ; }

  // Field DATA_BYTE_5: Data byte 5 of Rx/Tx frame.
    inline uint32_t CAN0_WORD110_DATA_BYTE_5 (const uint32_t inValue) {return (inValue & 0xffU) << 16 ; }

  // Field DATA_BYTE_4: Data byte 4 of Rx/Tx frame.
    inline uint32_t CAN0_WORD110_DATA_BYTE_4 (const uint32_t inValue) {return (inValue & 0xffU) << 24 ; }

//---  Register CS11: Message Buffer 11 CS Register
  #define CAN0_CS11 (* ((volatile uint32_t *) (0x40024000 + 304)))

  // Field TIME_STAMP: Free-Running Counter Time stamp. This 16-bit field is a copy of the Free-Running Timer, captured for Tx and Rx frames at the time when the beginning of the Identifier field appears on the CAN bus.
    inline uint32_t CAN0_CS11_TIME_STAMP (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

  // Field DLC: Length of the data to be stored/transmitted.
    inline uint32_t CAN0_CS11_DLC (const uint32_t inValue) {return (inValue & 0xfU) << 16 ; }

  // Field RTR: Remote Transmission Request. One/zero for remote/data frame.
    const uint32_t CAN0_CS11_RTR = 1U << 20 ;

  // Field IDE: ID Extended. One/zero for extended/standard format frame.
    const uint32_t CAN0_CS11_IDE = 1U << 21 ;

  // Field SRR: Substitute Remote Request. Contains a fixed recessive bit.
    const uint32_t CAN0_CS11_SRR = 1U << 22 ;

  // Field RESERVED: Reserved
    const uint32_t CAN0_CS11_RESERVED = 1U << 23 ;

  // Field CODE: Reserved
    inline uint32_t CAN0_CS11_CODE (const uint32_t inValue) {return (inValue & 0xfU) << 24 ; }

  // Field RESERVED: Reserved
    const uint32_t CAN0_CS11_RESERVED = 1U << 28 ;

  // Field RESERVED: Reserved
    const uint32_t CAN0_CS11_RESERVED = 1U << 29 ;

  // Field RESERVED: Reserved
    const uint32_t CAN0_CS11_RESERVED = 1U << 30 ;

  // Field RESERVED: Reserved
    const uint32_t CAN0_CS11_RESERVED = 1U << 31 ;

//---  Register ID11: Message Buffer 11 ID Register
  #define CAN0_ID11 (* ((volatile uint32_t *) (0x40024000 + 308)))

  // Field EXT: Contains extended (LOW word) identifier of message buffer.
    inline uint32_t CAN0_ID11_EXT (const uint32_t inValue) {return (inValue & 0x3ffffU) << 0 ; }

  // Field STD: Contains standard/extended (HIGH word) identifier of message buffer.
    inline uint32_t CAN0_ID11_STD (const uint32_t inValue) {return (inValue & 0x7ffU) << 18 ; }

  // Field PRIO: Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR and it only makes sense for Tx buffers. These bits are not transmitted. They are appended to the regular ID to define the transmission priority.
    inline uint32_t CAN0_ID11_PRIO (const uint32_t inValue) {return (inValue & 0x7U) << 29 ; }

//---  Register WORD011: Message Buffer 11 WORD0 Register
  #define CAN0_WORD011 (* ((volatile uint32_t *) (0x40024000 + 312)))

  // Field DATA_BYTE_3: Data byte 3 of Rx/Tx frame.
    inline uint32_t CAN0_WORD011_DATA_BYTE_3 (const uint32_t inValue) {return (inValue & 0xffU) << 0 ; }

  // Field DATA_BYTE_2: Data byte 2 of Rx/Tx frame.
    inline uint32_t CAN0_WORD011_DATA_BYTE_2 (const uint32_t inValue) {return (inValue & 0xffU) << 8 ; }

  // Field DATA_BYTE_1: Data byte 1 of Rx/Tx frame.
    inline uint32_t CAN0_WORD011_DATA_BYTE_1 (const uint32_t inValue) {return (inValue & 0xffU) << 16 ; }

  // Field DATA_BYTE_0: Data byte 0 of Rx/Tx frame.
    inline uint32_t CAN0_WORD011_DATA_BYTE_0 (const uint32_t inValue) {return (inValue & 0xffU) << 24 ; }

//---  Register WORD111: Message Buffer 11 WORD1 Register
  #define CAN0_WORD111 (* ((volatile uint32_t *) (0x40024000 + 316)))

  // Field DATA_BYTE_7: Data byte 7 of Rx/Tx frame.
    inline uint32_t CAN0_WORD111_DATA_BYTE_7 (const uint32_t inValue) {return (inValue & 0xffU) << 0 ; }

  // Field DATA_BYTE_6: Data byte 6 of Rx/Tx frame.
    inline uint32_t CAN0_WORD111_DATA_BYTE_6 (const uint32_t inValue) {return (inValue & 0xffU) << 8 ; }

  // Field DATA_BYTE_5: Data byte 5 of Rx/Tx frame.
    inline uint32_t CAN0_WORD111_DATA_BYTE_5 (const uint32_t inValue) {return (inValue & 0xffU) << 16 ; }

  // Field DATA_BYTE_4: Data byte 4 of Rx/Tx frame.
    inline uint32_t CAN0_WORD111_DATA_BYTE_4 (const uint32_t inValue) {return (inValue & 0xffU) << 24 ; }

//---  Register CS12: Message Buffer 12 CS Register
  #define CAN0_CS12 (* ((volatile uint32_t *) (0x40024000 + 320)))

  // Field TIME_STAMP: Free-Running Counter Time stamp. This 16-bit field is a copy of the Free-Running Timer, captured for Tx and Rx frames at the time when the beginning of the Identifier field appears on the CAN bus.
    inline uint32_t CAN0_CS12_TIME_STAMP (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

  // Field DLC: Length of the data to be stored/transmitted.
    inline uint32_t CAN0_CS12_DLC (const uint32_t inValue) {return (inValue & 0xfU) << 16 ; }

  // Field RTR: Remote Transmission Request. One/zero for remote/data frame.
    const uint32_t CAN0_CS12_RTR = 1U << 20 ;

  // Field IDE: ID Extended. One/zero for extended/standard format frame.
    const uint32_t CAN0_CS12_IDE = 1U << 21 ;

  // Field SRR: Substitute Remote Request. Contains a fixed recessive bit.
    const uint32_t CAN0_CS12_SRR = 1U << 22 ;

  // Field RESERVED: Reserved
    const uint32_t CAN0_CS12_RESERVED = 1U << 23 ;

  // Field CODE: Reserved
    inline uint32_t CAN0_CS12_CODE (const uint32_t inValue) {return (inValue & 0xfU) << 24 ; }

  // Field RESERVED: Reserved
    const uint32_t CAN0_CS12_RESERVED = 1U << 28 ;

  // Field RESERVED: Reserved
    const uint32_t CAN0_CS12_RESERVED = 1U << 29 ;

  // Field RESERVED: Reserved
    const uint32_t CAN0_CS12_RESERVED = 1U << 30 ;

  // Field RESERVED: Reserved
    const uint32_t CAN0_CS12_RESERVED = 1U << 31 ;

//---  Register ID12: Message Buffer 12 ID Register
  #define CAN0_ID12 (* ((volatile uint32_t *) (0x40024000 + 324)))

  // Field EXT: Contains extended (LOW word) identifier of message buffer.
    inline uint32_t CAN0_ID12_EXT (const uint32_t inValue) {return (inValue & 0x3ffffU) << 0 ; }

  // Field STD: Contains standard/extended (HIGH word) identifier of message buffer.
    inline uint32_t CAN0_ID12_STD (const uint32_t inValue) {return (inValue & 0x7ffU) << 18 ; }

  // Field PRIO: Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR and it only makes sense for Tx buffers. These bits are not transmitted. They are appended to the regular ID to define the transmission priority.
    inline uint32_t CAN0_ID12_PRIO (const uint32_t inValue) {return (inValue & 0x7U) << 29 ; }

//---  Register WORD012: Message Buffer 12 WORD0 Register
  #define CAN0_WORD012 (* ((volatile uint32_t *) (0x40024000 + 328)))

  // Field DATA_BYTE_3: Data byte 3 of Rx/Tx frame.
    inline uint32_t CAN0_WORD012_DATA_BYTE_3 (const uint32_t inValue) {return (inValue & 0xffU) << 0 ; }

  // Field DATA_BYTE_2: Data byte 2 of Rx/Tx frame.
    inline uint32_t CAN0_WORD012_DATA_BYTE_2 (const uint32_t inValue) {return (inValue & 0xffU) << 8 ; }

  // Field DATA_BYTE_1: Data byte 1 of Rx/Tx frame.
    inline uint32_t CAN0_WORD012_DATA_BYTE_1 (const uint32_t inValue) {return (inValue & 0xffU) << 16 ; }

  // Field DATA_BYTE_0: Data byte 0 of Rx/Tx frame.
    inline uint32_t CAN0_WORD012_DATA_BYTE_0 (const uint32_t inValue) {return (inValue & 0xffU) << 24 ; }

//---  Register WORD112: Message Buffer 12 WORD1 Register
  #define CAN0_WORD112 (* ((volatile uint32_t *) (0x40024000 + 332)))

  // Field DATA_BYTE_7: Data byte 7 of Rx/Tx frame.
    inline uint32_t CAN0_WORD112_DATA_BYTE_7 (const uint32_t inValue) {return (inValue & 0xffU) << 0 ; }

  // Field DATA_BYTE_6: Data byte 6 of Rx/Tx frame.
    inline uint32_t CAN0_WORD112_DATA_BYTE_6 (const uint32_t inValue) {return (inValue & 0xffU) << 8 ; }

  // Field DATA_BYTE_5: Data byte 5 of Rx/Tx frame.
    inline uint32_t CAN0_WORD112_DATA_BYTE_5 (const uint32_t inValue) {return (inValue & 0xffU) << 16 ; }

  // Field DATA_BYTE_4: Data byte 4 of Rx/Tx frame.
    inline uint32_t CAN0_WORD112_DATA_BYTE_4 (const uint32_t inValue) {return (inValue & 0xffU) << 24 ; }

//---  Register CS13: Message Buffer 13 CS Register
  #define CAN0_CS13 (* ((volatile uint32_t *) (0x40024000 + 336)))

  // Field TIME_STAMP: Free-Running Counter Time stamp. This 16-bit field is a copy of the Free-Running Timer, captured for Tx and Rx frames at the time when the beginning of the Identifier field appears on the CAN bus.
    inline uint32_t CAN0_CS13_TIME_STAMP (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

  // Field DLC: Length of the data to be stored/transmitted.
    inline uint32_t CAN0_CS13_DLC (const uint32_t inValue) {return (inValue & 0xfU) << 16 ; }

  // Field RTR: Remote Transmission Request. One/zero for remote/data frame.
    const uint32_t CAN0_CS13_RTR = 1U << 20 ;

  // Field IDE: ID Extended. One/zero for extended/standard format frame.
    const uint32_t CAN0_CS13_IDE = 1U << 21 ;

  // Field SRR: Substitute Remote Request. Contains a fixed recessive bit.
    const uint32_t CAN0_CS13_SRR = 1U << 22 ;

  // Field RESERVED: Reserved
    const uint32_t CAN0_CS13_RESERVED = 1U << 23 ;

  // Field CODE: Reserved
    inline uint32_t CAN0_CS13_CODE (const uint32_t inValue) {return (inValue & 0xfU) << 24 ; }

  // Field RESERVED: Reserved
    const uint32_t CAN0_CS13_RESERVED = 1U << 28 ;

  // Field RESERVED: Reserved
    const uint32_t CAN0_CS13_RESERVED = 1U << 29 ;

  // Field RESERVED: Reserved
    const uint32_t CAN0_CS13_RESERVED = 1U << 30 ;

  // Field RESERVED: Reserved
    const uint32_t CAN0_CS13_RESERVED = 1U << 31 ;

//---  Register ID13: Message Buffer 13 ID Register
  #define CAN0_ID13 (* ((volatile uint32_t *) (0x40024000 + 340)))

  // Field EXT: Contains extended (LOW word) identifier of message buffer.
    inline uint32_t CAN0_ID13_EXT (const uint32_t inValue) {return (inValue & 0x3ffffU) << 0 ; }

  // Field STD: Contains standard/extended (HIGH word) identifier of message buffer.
    inline uint32_t CAN0_ID13_STD (const uint32_t inValue) {return (inValue & 0x7ffU) << 18 ; }

  // Field PRIO: Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR and it only makes sense for Tx buffers. These bits are not transmitted. They are appended to the regular ID to define the transmission priority.
    inline uint32_t CAN0_ID13_PRIO (const uint32_t inValue) {return (inValue & 0x7U) << 29 ; }

//---  Register WORD013: Message Buffer 13 WORD0 Register
  #define CAN0_WORD013 (* ((volatile uint32_t *) (0x40024000 + 344)))

  // Field DATA_BYTE_3: Data byte 3 of Rx/Tx frame.
    inline uint32_t CAN0_WORD013_DATA_BYTE_3 (const uint32_t inValue) {return (inValue & 0xffU) << 0 ; }

  // Field DATA_BYTE_2: Data byte 2 of Rx/Tx frame.
    inline uint32_t CAN0_WORD013_DATA_BYTE_2 (const uint32_t inValue) {return (inValue & 0xffU) << 8 ; }

  // Field DATA_BYTE_1: Data byte 1 of Rx/Tx frame.
    inline uint32_t CAN0_WORD013_DATA_BYTE_1 (const uint32_t inValue) {return (inValue & 0xffU) << 16 ; }

  // Field DATA_BYTE_0: Data byte 0 of Rx/Tx frame.
    inline uint32_t CAN0_WORD013_DATA_BYTE_0 (const uint32_t inValue) {return (inValue & 0xffU) << 24 ; }

//---  Register WORD113: Message Buffer 13 WORD1 Register
  #define CAN0_WORD113 (* ((volatile uint32_t *) (0x40024000 + 348)))

  // Field DATA_BYTE_7: Data byte 7 of Rx/Tx frame.
    inline uint32_t CAN0_WORD113_DATA_BYTE_7 (const uint32_t inValue) {return (inValue & 0xffU) << 0 ; }

  // Field DATA_BYTE_6: Data byte 6 of Rx/Tx frame.
    inline uint32_t CAN0_WORD113_DATA_BYTE_6 (const uint32_t inValue) {return (inValue & 0xffU) << 8 ; }

  // Field DATA_BYTE_5: Data byte 5 of Rx/Tx frame.
    inline uint32_t CAN0_WORD113_DATA_BYTE_5 (const uint32_t inValue) {return (inValue & 0xffU) << 16 ; }

  // Field DATA_BYTE_4: Data byte 4 of Rx/Tx frame.
    inline uint32_t CAN0_WORD113_DATA_BYTE_4 (const uint32_t inValue) {return (inValue & 0xffU) << 24 ; }

//---  Register CS14: Message Buffer 14 CS Register
  #define CAN0_CS14 (* ((volatile uint32_t *) (0x40024000 + 352)))

  // Field TIME_STAMP: Free-Running Counter Time stamp. This 16-bit field is a copy of the Free-Running Timer, captured for Tx and Rx frames at the time when the beginning of the Identifier field appears on the CAN bus.
    inline uint32_t CAN0_CS14_TIME_STAMP (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

  // Field DLC: Length of the data to be stored/transmitted.
    inline uint32_t CAN0_CS14_DLC (const uint32_t inValue) {return (inValue & 0xfU) << 16 ; }

  // Field RTR: Remote Transmission Request. One/zero for remote/data frame.
    const uint32_t CAN0_CS14_RTR = 1U << 20 ;

  // Field IDE: ID Extended. One/zero for extended/standard format frame.
    const uint32_t CAN0_CS14_IDE = 1U << 21 ;

  // Field SRR: Substitute Remote Request. Contains a fixed recessive bit.
    const uint32_t CAN0_CS14_SRR = 1U << 22 ;

  // Field RESERVED: Reserved
    const uint32_t CAN0_CS14_RESERVED = 1U << 23 ;

  // Field CODE: Reserved
    inline uint32_t CAN0_CS14_CODE (const uint32_t inValue) {return (inValue & 0xfU) << 24 ; }

  // Field RESERVED: Reserved
    const uint32_t CAN0_CS14_RESERVED = 1U << 28 ;

  // Field RESERVED: Reserved
    const uint32_t CAN0_CS14_RESERVED = 1U << 29 ;

  // Field RESERVED: Reserved
    const uint32_t CAN0_CS14_RESERVED = 1U << 30 ;

  // Field RESERVED: Reserved
    const uint32_t CAN0_CS14_RESERVED = 1U << 31 ;

//---  Register ID14: Message Buffer 14 ID Register
  #define CAN0_ID14 (* ((volatile uint32_t *) (0x40024000 + 356)))

  // Field EXT: Contains extended (LOW word) identifier of message buffer.
    inline uint32_t CAN0_ID14_EXT (const uint32_t inValue) {return (inValue & 0x3ffffU) << 0 ; }

  // Field STD: Contains standard/extended (HIGH word) identifier of message buffer.
    inline uint32_t CAN0_ID14_STD (const uint32_t inValue) {return (inValue & 0x7ffU) << 18 ; }

  // Field PRIO: Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR and it only makes sense for Tx buffers. These bits are not transmitted. They are appended to the regular ID to define the transmission priority.
    inline uint32_t CAN0_ID14_PRIO (const uint32_t inValue) {return (inValue & 0x7U) << 29 ; }

//---  Register WORD014: Message Buffer 14 WORD0 Register
  #define CAN0_WORD014 (* ((volatile uint32_t *) (0x40024000 + 360)))

  // Field DATA_BYTE_3: Data byte 3 of Rx/Tx frame.
    inline uint32_t CAN0_WORD014_DATA_BYTE_3 (const uint32_t inValue) {return (inValue & 0xffU) << 0 ; }

  // Field DATA_BYTE_2: Data byte 2 of Rx/Tx frame.
    inline uint32_t CAN0_WORD014_DATA_BYTE_2 (const uint32_t inValue) {return (inValue & 0xffU) << 8 ; }

  // Field DATA_BYTE_1: Data byte 1 of Rx/Tx frame.
    inline uint32_t CAN0_WORD014_DATA_BYTE_1 (const uint32_t inValue) {return (inValue & 0xffU) << 16 ; }

  // Field DATA_BYTE_0: Data byte 0 of Rx/Tx frame.
    inline uint32_t CAN0_WORD014_DATA_BYTE_0 (const uint32_t inValue) {return (inValue & 0xffU) << 24 ; }

//---  Register WORD114: Message Buffer 14 WORD1 Register
  #define CAN0_WORD114 (* ((volatile uint32_t *) (0x40024000 + 364)))

  // Field DATA_BYTE_7: Data byte 7 of Rx/Tx frame.
    inline uint32_t CAN0_WORD114_DATA_BYTE_7 (const uint32_t inValue) {return (inValue & 0xffU) << 0 ; }

  // Field DATA_BYTE_6: Data byte 6 of Rx/Tx frame.
    inline uint32_t CAN0_WORD114_DATA_BYTE_6 (const uint32_t inValue) {return (inValue & 0xffU) << 8 ; }

  // Field DATA_BYTE_5: Data byte 5 of Rx/Tx frame.
    inline uint32_t CAN0_WORD114_DATA_BYTE_5 (const uint32_t inValue) {return (inValue & 0xffU) << 16 ; }

  // Field DATA_BYTE_4: Data byte 4 of Rx/Tx frame.
    inline uint32_t CAN0_WORD114_DATA_BYTE_4 (const uint32_t inValue) {return (inValue & 0xffU) << 24 ; }

//---  Register CS15: Message Buffer 15 CS Register
  #define CAN0_CS15 (* ((volatile uint32_t *) (0x40024000 + 368)))

  // Field TIME_STAMP: Free-Running Counter Time stamp. This 16-bit field is a copy of the Free-Running Timer, captured for Tx and Rx frames at the time when the beginning of the Identifier field appears on the CAN bus.
    inline uint32_t CAN0_CS15_TIME_STAMP (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

  // Field DLC: Length of the data to be stored/transmitted.
    inline uint32_t CAN0_CS15_DLC (const uint32_t inValue) {return (inValue & 0xfU) << 16 ; }

  // Field RTR: Remote Transmission Request. One/zero for remote/data frame.
    const uint32_t CAN0_CS15_RTR = 1U << 20 ;

  // Field IDE: ID Extended. One/zero for extended/standard format frame.
    const uint32_t CAN0_CS15_IDE = 1U << 21 ;

  // Field SRR: Substitute Remote Request. Contains a fixed recessive bit.
    const uint32_t CAN0_CS15_SRR = 1U << 22 ;

  // Field RESERVED: Reserved
    const uint32_t CAN0_CS15_RESERVED = 1U << 23 ;

  // Field CODE: Reserved
    inline uint32_t CAN0_CS15_CODE (const uint32_t inValue) {return (inValue & 0xfU) << 24 ; }

  // Field RESERVED: Reserved
    const uint32_t CAN0_CS15_RESERVED = 1U << 28 ;

  // Field RESERVED: Reserved
    const uint32_t CAN0_CS15_RESERVED = 1U << 29 ;

  // Field RESERVED: Reserved
    const uint32_t CAN0_CS15_RESERVED = 1U << 30 ;

  // Field RESERVED: Reserved
    const uint32_t CAN0_CS15_RESERVED = 1U << 31 ;

//---  Register ID15: Message Buffer 15 ID Register
  #define CAN0_ID15 (* ((volatile uint32_t *) (0x40024000 + 372)))

  // Field EXT: Contains extended (LOW word) identifier of message buffer.
    inline uint32_t CAN0_ID15_EXT (const uint32_t inValue) {return (inValue & 0x3ffffU) << 0 ; }

  // Field STD: Contains standard/extended (HIGH word) identifier of message buffer.
    inline uint32_t CAN0_ID15_STD (const uint32_t inValue) {return (inValue & 0x7ffU) << 18 ; }

  // Field PRIO: Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR and it only makes sense for Tx buffers. These bits are not transmitted. They are appended to the regular ID to define the transmission priority.
    inline uint32_t CAN0_ID15_PRIO (const uint32_t inValue) {return (inValue & 0x7U) << 29 ; }

//---  Register WORD015: Message Buffer 15 WORD0 Register
  #define CAN0_WORD015 (* ((volatile uint32_t *) (0x40024000 + 376)))

  // Field DATA_BYTE_3: Data byte 3 of Rx/Tx frame.
    inline uint32_t CAN0_WORD015_DATA_BYTE_3 (const uint32_t inValue) {return (inValue & 0xffU) << 0 ; }

  // Field DATA_BYTE_2: Data byte 2 of Rx/Tx frame.
    inline uint32_t CAN0_WORD015_DATA_BYTE_2 (const uint32_t inValue) {return (inValue & 0xffU) << 8 ; }

  // Field DATA_BYTE_1: Data byte 1 of Rx/Tx frame.
    inline uint32_t CAN0_WORD015_DATA_BYTE_1 (const uint32_t inValue) {return (inValue & 0xffU) << 16 ; }

  // Field DATA_BYTE_0: Data byte 0 of Rx/Tx frame.
    inline uint32_t CAN0_WORD015_DATA_BYTE_0 (const uint32_t inValue) {return (inValue & 0xffU) << 24 ; }

//---  Register WORD115: Message Buffer 15 WORD1 Register
  #define CAN0_WORD115 (* ((volatile uint32_t *) (0x40024000 + 380)))

  // Field DATA_BYTE_7: Data byte 7 of Rx/Tx frame.
    inline uint32_t CAN0_WORD115_DATA_BYTE_7 (const uint32_t inValue) {return (inValue & 0xffU) << 0 ; }

  // Field DATA_BYTE_6: Data byte 6 of Rx/Tx frame.
    inline uint32_t CAN0_WORD115_DATA_BYTE_6 (const uint32_t inValue) {return (inValue & 0xffU) << 8 ; }

  // Field DATA_BYTE_5: Data byte 5 of Rx/Tx frame.
    inline uint32_t CAN0_WORD115_DATA_BYTE_5 (const uint32_t inValue) {return (inValue & 0xffU) << 16 ; }

  // Field DATA_BYTE_4: Data byte 4 of Rx/Tx frame.
    inline uint32_t CAN0_WORD115_DATA_BYTE_4 (const uint32_t inValue) {return (inValue & 0xffU) << 24 ; }

//---  Registers RXIMR(0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15): Rx Individual Mask Registers
  #define CAN0_RXIMR(idx) (* ((volatile uint32_t *) (0x40024000 + 0x880 + (idx) * 0x4)))
  #define CAN0_RXIMR0 (* ((volatile uint32_t *) (0x40024000 + 0x880 + 0 * 0x4)))
  #define CAN0_RXIMR1 (* ((volatile uint32_t *) (0x40024000 + 0x880 + 1 * 0x4)))
  #define CAN0_RXIMR2 (* ((volatile uint32_t *) (0x40024000 + 0x880 + 2 * 0x4)))
  #define CAN0_RXIMR3 (* ((volatile uint32_t *) (0x40024000 + 0x880 + 3 * 0x4)))
  #define CAN0_RXIMR4 (* ((volatile uint32_t *) (0x40024000 + 0x880 + 4 * 0x4)))
  #define CAN0_RXIMR5 (* ((volatile uint32_t *) (0x40024000 + 0x880 + 5 * 0x4)))
  #define CAN0_RXIMR6 (* ((volatile uint32_t *) (0x40024000 + 0x880 + 6 * 0x4)))
  #define CAN0_RXIMR7 (* ((volatile uint32_t *) (0x40024000 + 0x880 + 7 * 0x4)))
  #define CAN0_RXIMR8 (* ((volatile uint32_t *) (0x40024000 + 0x880 + 8 * 0x4)))
  #define CAN0_RXIMR9 (* ((volatile uint32_t *) (0x40024000 + 0x880 + 9 * 0x4)))
  #define CAN0_RXIMR10 (* ((volatile uint32_t *) (0x40024000 + 0x880 + 10 * 0x4)))
  #define CAN0_RXIMR11 (* ((volatile uint32_t *) (0x40024000 + 0x880 + 11 * 0x4)))
  #define CAN0_RXIMR12 (* ((volatile uint32_t *) (0x40024000 + 0x880 + 12 * 0x4)))
  #define CAN0_RXIMR13 (* ((volatile uint32_t *) (0x40024000 + 0x880 + 13 * 0x4)))
  #define CAN0_RXIMR14 (* ((volatile uint32_t *) (0x40024000 + 0x880 + 14 * 0x4)))
  #define CAN0_RXIMR15 (* ((volatile uint32_t *) (0x40024000 + 0x880 + 15 * 0x4)))

  // Field MI: Individual Mask Bits
    inline uint32_t CAN0_RXIMR_MI (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//------------------------------------------------------------------------------
// PERIPHERAL GROUP: CMP
//        CMP0 at 0x40073000
//        CMP1 at 0x40073008
//        CMP2 at 0x40073010
//------------------------------------------------------------------------------

static const uint32_t kBaseAddress_CMP [3] = {0x40073000, 0x40073008, 0x40073010} ;

//------------------------------------------------------------------------------

//---  Register CR0: CMP Control Register 0
  #define CMP_CR0(group) (* ((volatile uint8_t *) (kBaseAddress_CR0 [group] + 0x0)))
  #define CMP0_CR0 (* ((volatile uint8_t *) (0x40073000 + 0x0)))
  #define CMP1_CR0 (* ((volatile uint8_t *) (0x40073008 + 0x0)))
  #define CMP2_CR0 (* ((volatile uint8_t *) (0x40073010 + 0x0)))

  // Field HYSTCTR: Comparator hard block hysteresis control
    inline uint8_t CMP_CR0_HYSTCTR (const uint8_t inValue) {return (inValue & 0x3U) << 0 ; }

  // Field RESERVED: no description available
    const uint8_t CMP_CR0_RESERVED = 1U << 2 ;

  // Field RESERVED: no description available
    const uint8_t CMP_CR0_RESERVED = 1U << 3 ;

  // Field FILTER_CNT: Filter Sample Count
    inline uint8_t CMP_CR0_FILTER_CNT (const uint8_t inValue) {return (inValue & 0x7U) << 4 ; }

  // Field RESERVED: no description available
    const uint8_t CMP_CR0_RESERVED = 1U << 7 ;

//---  Register CR1: CMP Control Register 1
  #define CMP_CR1(group) (* ((volatile uint8_t *) (kBaseAddress_CR1 [group] + 0x1)))
  #define CMP0_CR1 (* ((volatile uint8_t *) (0x40073000 + 0x1)))
  #define CMP1_CR1 (* ((volatile uint8_t *) (0x40073008 + 0x1)))
  #define CMP2_CR1 (* ((volatile uint8_t *) (0x40073010 + 0x1)))

  // Field EN: Comparator Module Enable
    const uint8_t CMP_CR1_EN = 1U << 0 ;

  // Field OPE: Comparator Output Pin Enable
    const uint8_t CMP_CR1_OPE = 1U << 1 ;

  // Field COS: Comparator Output Select
    const uint8_t CMP_CR1_COS = 1U << 2 ;

  // Field INV: Comparator INVERT
    const uint8_t CMP_CR1_INV = 1U << 3 ;

  // Field PMODE: Power Mode Select
    const uint8_t CMP_CR1_PMODE = 1U << 4 ;

  // Field RESERVED: no description available
    const uint8_t CMP_CR1_RESERVED = 1U << 5 ;

  // Field WE: Windowing Enable
    const uint8_t CMP_CR1_WE = 1U << 6 ;

  // Field SE: Sample Enable
    const uint8_t CMP_CR1_SE = 1U << 7 ;

//---  Register FPR: CMP Filter Period Register
  #define CMP_FPR(group) (* ((volatile uint8_t *) (kBaseAddress_FPR [group] + 0x2)))
  #define CMP0_FPR (* ((volatile uint8_t *) (0x40073000 + 0x2)))
  #define CMP1_FPR (* ((volatile uint8_t *) (0x40073008 + 0x2)))
  #define CMP2_FPR (* ((volatile uint8_t *) (0x40073010 + 0x2)))

  // Field FILT_PER: Filter Sample Period
    inline uint8_t CMP_FPR_FILT_PER (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register SCR: CMP Status and Control Register
  #define CMP_SCR(group) (* ((volatile uint8_t *) (kBaseAddress_SCR [group] + 0x3)))
  #define CMP0_SCR (* ((volatile uint8_t *) (0x40073000 + 0x3)))
  #define CMP1_SCR (* ((volatile uint8_t *) (0x40073008 + 0x3)))
  #define CMP2_SCR (* ((volatile uint8_t *) (0x40073010 + 0x3)))

  // Field COUT: Analog Comparator Output
    const uint8_t CMP_SCR_COUT = 1U << 0 ;

  // Field CFF: Analog Comparator Flag Falling
    const uint8_t CMP_SCR_CFF = 1U << 1 ;

  // Field CFR: Analog Comparator Flag Rising
    const uint8_t CMP_SCR_CFR = 1U << 2 ;

  // Field IEF: Comparator Interrupt Enable Falling
    const uint8_t CMP_SCR_IEF = 1U << 3 ;

  // Field IER: Comparator Interrupt Enable Rising
    const uint8_t CMP_SCR_IER = 1U << 4 ;

  // Field RESERVED: no description available
    const uint8_t CMP_SCR_RESERVED = 1U << 5 ;

  // Field DMAEN: DMA Enable Control
    const uint8_t CMP_SCR_DMAEN = 1U << 6 ;

  // Field RESERVED: no description available
    const uint8_t CMP_SCR_RESERVED = 1U << 7 ;

//---  Register DACCR: DAC Control Register
  #define CMP_DACCR(group) (* ((volatile uint8_t *) (kBaseAddress_DACCR [group] + 0x4)))
  #define CMP0_DACCR (* ((volatile uint8_t *) (0x40073000 + 0x4)))
  #define CMP1_DACCR (* ((volatile uint8_t *) (0x40073008 + 0x4)))
  #define CMP2_DACCR (* ((volatile uint8_t *) (0x40073010 + 0x4)))

  // Field VOSEL: DAC Output Voltage Select
    inline uint8_t CMP_DACCR_VOSEL (const uint8_t inValue) {return (inValue & 0x3fU) << 0 ; }

  // Field VRSEL: Supply Voltage Reference Source Select
    const uint8_t CMP_DACCR_VRSEL = 1U << 6 ;

  // Field DACEN: DAC Enable
    const uint8_t CMP_DACCR_DACEN = 1U << 7 ;

//---  Register MUXCR: MUX Control Register
  #define CMP_MUXCR(group) (* ((volatile uint8_t *) (kBaseAddress_MUXCR [group] + 0x5)))
  #define CMP0_MUXCR (* ((volatile uint8_t *) (0x40073000 + 0x5)))
  #define CMP1_MUXCR (* ((volatile uint8_t *) (0x40073008 + 0x5)))
  #define CMP2_MUXCR (* ((volatile uint8_t *) (0x40073010 + 0x5)))

  // Field MSEL: Minus Input MUX Control
    inline uint8_t CMP_MUXCR_MSEL (const uint8_t inValue) {return (inValue & 0x7U) << 0 ; }

  // Field PSEL: Plus Input MUX Control
    inline uint8_t CMP_MUXCR_PSEL (const uint8_t inValue) {return (inValue & 0x7U) << 3 ; }

  // Field RESERVED: no description available
    inline uint8_t CMP_MUXCR_RESERVED (const uint8_t inValue) {return (inValue & 0x3U) << 6 ; }

//------------------------------------------------------------------------------
// Peripheral CMT: Carrier Modulator Transmitter
//------------------------------------------------------------------------------

//---  Register CGH1: CMT Carrier Generator High Data Register 1
  #define CMT_CGH1 (* ((volatile uint8_t *) (0x40062000 + 0)))

  // Field PH: Primary Carrier High Time Data Value
    inline uint8_t CMT_CGH1_PH (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register CGL1: CMT Carrier Generator Low Data Register 1
  #define CMT_CGL1 (* ((volatile uint8_t *) (0x40062000 + 1)))

  // Field PL: Primary Carrier Low Time Data Value
    inline uint8_t CMT_CGL1_PL (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register CGH2: CMT Carrier Generator High Data Register 2
  #define CMT_CGH2 (* ((volatile uint8_t *) (0x40062000 + 2)))

  // Field SH: Secondary Carrier High Time Data Value
    inline uint8_t CMT_CGH2_SH (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register CGL2: CMT Carrier Generator Low Data Register 2
  #define CMT_CGL2 (* ((volatile uint8_t *) (0x40062000 + 3)))

  // Field SL: Secondary Carrier Low Time Data Value
    inline uint8_t CMT_CGL2_SL (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register OC: CMT Output Control Register
  #define CMT_OC (* ((volatile uint8_t *) (0x40062000 + 4)))

  // Field RESERVED: no description available
    inline uint8_t CMT_OC_RESERVED (const uint8_t inValue) {return (inValue & 0x1fU) << 0 ; }

  // Field IROPEN: IRO Pin Enable
    const uint8_t CMT_OC_IROPEN = 1U << 5 ;

  // Field CMTPOL: CMT Output Polarity
    const uint8_t CMT_OC_CMTPOL = 1U << 6 ;

  // Field IROL: IRO Latch Control
    const uint8_t CMT_OC_IROL = 1U << 7 ;

//---  Register MSC: CMT Modulator Status and Control Register
  #define CMT_MSC (* ((volatile uint8_t *) (0x40062000 + 5)))

  // Field MCGEN: Modulator and Carrier Generator Enable
    const uint8_t CMT_MSC_MCGEN = 1U << 0 ;

  // Field EOCIE: End of Cycle Interrupt Enable
    const uint8_t CMT_MSC_EOCIE = 1U << 1 ;

  // Field FSK: FSK Mode Select
    const uint8_t CMT_MSC_FSK = 1U << 2 ;

  // Field BASE: Baseband Enable
    const uint8_t CMT_MSC_BASE = 1U << 3 ;

  // Field EXSPC: Extended Space Enable
    const uint8_t CMT_MSC_EXSPC = 1U << 4 ;

  // Field CMTDIV: CMT Clock Divide Prescaler
    inline uint8_t CMT_MSC_CMTDIV (const uint8_t inValue) {return (inValue & 0x3U) << 5 ; }

  // Field EOCF: End Of Cycle Status Flag
    const uint8_t CMT_MSC_EOCF = 1U << 7 ;

//---  Register CMD1: CMT Modulator Data Register Mark High
  #define CMT_CMD1 (* ((volatile uint8_t *) (0x40062000 + 6)))

  // Field MB: no description available
    inline uint8_t CMT_CMD1_MB (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register CMD2: CMT Modulator Data Register Mark Low
  #define CMT_CMD2 (* ((volatile uint8_t *) (0x40062000 + 7)))

  // Field MB: no description available
    inline uint8_t CMT_CMD2_MB (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register CMD3: CMT Modulator Data Register Space High
  #define CMT_CMD3 (* ((volatile uint8_t *) (0x40062000 + 8)))

  // Field SB: no description available
    inline uint8_t CMT_CMD3_SB (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register CMD4: CMT Modulator Data Register Space Low
  #define CMT_CMD4 (* ((volatile uint8_t *) (0x40062000 + 9)))

  // Field SB: no description available
    inline uint8_t CMT_CMD4_SB (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register PPS: CMT Primary Prescaler Register
  #define CMT_PPS (* ((volatile uint8_t *) (0x40062000 + 10)))

  // Field PPSDIV: Primary Prescaler Divider
    inline uint8_t CMT_PPS_PPSDIV (const uint8_t inValue) {return (inValue & 0xfU) << 0 ; }

  // Field RESERVED: no description available
    inline uint8_t CMT_PPS_RESERVED (const uint8_t inValue) {return (inValue & 0xfU) << 4 ; }

//---  Register DMA: CMT Direct Memory Access
  #define CMT_DMA (* ((volatile uint8_t *) (0x40062000 + 11)))

  // Field DMA: DMA Enable
    const uint8_t CMT_DMA_DMA = 1U << 0 ;

  // Field RESERVED: no description available
    inline uint8_t CMT_DMA_RESERVED (const uint8_t inValue) {return (inValue & 0x7fU) << 1 ; }

//------------------------------------------------------------------------------
// Peripheral CRC: Cyclic Redundancy Check
//------------------------------------------------------------------------------

//---  Register CRCLL: CRC_CRCLL register.
  #define CRC_CRCLL (* ((volatile uint8_t *) (0x40032000 + 0)))

  // Field CRCLL: CRCLL stores the first 8 bits of the 32 bit CRC
    inline uint8_t CRC_CRCLL_CRCLL (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register CRC: CRC Data Register
  #define CRC_CRC (* ((volatile uint32_t *) (0x40032000 + 0)))

  // Field LL: CRC Low Lower Byte
    inline uint32_t CRC_CRC_LL (const uint32_t inValue) {return (inValue & 0xffU) << 0 ; }

  // Field LU: CRC Low Upper Byte
    inline uint32_t CRC_CRC_LU (const uint32_t inValue) {return (inValue & 0xffU) << 8 ; }

  // Field HL: CRC High Lower Byte
    inline uint32_t CRC_CRC_HL (const uint32_t inValue) {return (inValue & 0xffU) << 16 ; }

  // Field HU: CRC High Upper Byte
    inline uint32_t CRC_CRC_HU (const uint32_t inValue) {return (inValue & 0xffU) << 24 ; }

//---  Register CRCL: CRC_CRCL register.
  #define CRC_CRCL (* ((volatile uint16_t *) (0x40032000 + 0)))

  // Field CRCL: CRCL stores the lower 16 bits of the 16/32 bit CRC
    inline uint16_t CRC_CRCL_CRCL (const uint16_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register CRCLU: CRC_CRCLU register.
  #define CRC_CRCLU (* ((volatile uint8_t *) (0x40032000 + 1)))

  // Field CRCLU: CRCLL stores the second 8 bits of the 32 bit CRC
    inline uint8_t CRC_CRCLU_CRCLU (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register CRCHL: CRC_CRCHL register.
  #define CRC_CRCHL (* ((volatile uint8_t *) (0x40032000 + 2)))

  // Field CRCHL: CRCHL stores the third 8 bits of the 32 bit CRC
    inline uint8_t CRC_CRCHL_CRCHL (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register CRCH: CRC_CRCH register.
  #define CRC_CRCH (* ((volatile uint16_t *) (0x40032000 + 2)))

  // Field CRCH: CRCL stores the high 16 bits of the 16/32 bit CRC
    inline uint16_t CRC_CRCH_CRCH (const uint16_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register CRCHU: CRC_CRCHU register.
  #define CRC_CRCHU (* ((volatile uint8_t *) (0x40032000 + 3)))

  // Field CRCHU: CRCHU stores the fourth 8 bits of the 32 bit CRC
    inline uint8_t CRC_CRCHU_CRCHU (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register GPOLY: CRC Polynomial Register
  #define CRC_GPOLY (* ((volatile uint32_t *) (0x40032000 + 4)))

  // Field LOW: Low polynominal half-word
    inline uint32_t CRC_GPOLY_LOW (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

  // Field HIGH: High polynominal half-word
    inline uint32_t CRC_GPOLY_HIGH (const uint32_t inValue) {return (inValue & 0xffffU) << 16 ; }

//---  Register GPOLYLL: CRC_GPOLYLL register.
  #define CRC_GPOLYLL (* ((volatile uint8_t *) (0x40032000 + 4)))

  // Field GPOLYLL: POLYLL stores the first 8 bits of the 32 bit CRC
    inline uint8_t CRC_GPOLYLL_GPOLYLL (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register GPOLYL: CRC_GPOLYL register.
  #define CRC_GPOLYL (* ((volatile uint16_t *) (0x40032000 + 4)))

  // Field GPOLYL: POLYL stores the lower 16 bits of the 16/32 bit CRC polynomial value
    inline uint16_t CRC_GPOLYL_GPOLYL (const uint16_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register GPOLYLU: CRC_GPOLYLU register.
  #define CRC_GPOLYLU (* ((volatile uint8_t *) (0x40032000 + 5)))

  // Field GPOLYLU: POLYLL stores the second 8 bits of the 32 bit CRC
    inline uint8_t CRC_GPOLYLU_GPOLYLU (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register GPOLYH: CRC_GPOLYH register.
  #define CRC_GPOLYH (* ((volatile uint16_t *) (0x40032000 + 6)))

  // Field GPOLYH: POLYH stores the high 16 bits of the 16/32 bit CRC polynomial value
    inline uint16_t CRC_GPOLYH_GPOLYH (const uint16_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register GPOLYHL: CRC_GPOLYHL register.
  #define CRC_GPOLYHL (* ((volatile uint8_t *) (0x40032000 + 6)))

  // Field GPOLYHL: POLYHL stores the third 8 bits of the 32 bit CRC
    inline uint8_t CRC_GPOLYHL_GPOLYHL (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register GPOLYHU: CRC_GPOLYHU register.
  #define CRC_GPOLYHU (* ((volatile uint8_t *) (0x40032000 + 7)))

  // Field GPOLYHU: POLYHU stores the fourth 8 bits of the 32 bit CRC
    inline uint8_t CRC_GPOLYHU_GPOLYHU (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register CTRL: CRC Control Register
  #define CRC_CTRL (* ((volatile uint32_t *) (0x40032000 + 8)))

  // Field RESERVED: no description available
    inline uint32_t CRC_CTRL_RESERVED (const uint32_t inValue) {return (inValue & 0xffffffU) << 0 ; }

  // Field TCRC: no description available
    const uint32_t CRC_CTRL_TCRC = 1U << 24 ;

  // Field WAS: Write CRC data register as seed
    const uint32_t CRC_CTRL_WAS = 1U << 25 ;

  // Field FXOR: Complement Read of CRC data register
    const uint32_t CRC_CTRL_FXOR = 1U << 26 ;

  // Field RESERVED: no description available
    const uint32_t CRC_CTRL_RESERVED = 1U << 27 ;

  // Field TOTR: Type of Transpose for Read
    inline uint32_t CRC_CTRL_TOTR (const uint32_t inValue) {return (inValue & 0x3U) << 28 ; }

  // Field TOT: Type of Transpose for Writes
    inline uint32_t CRC_CTRL_TOT (const uint32_t inValue) {return (inValue & 0x3U) << 30 ; }

//---  Register CTRLHU: CRC_CTRLHU register.
  #define CRC_CTRLHU (* ((volatile uint8_t *) (0x40032000 + 11)))

  // Field TCRC: no description available
    const uint8_t CRC_CTRLHU_TCRC = 1U << 0 ;

  // Field WAS: no description available
    const uint8_t CRC_CTRLHU_WAS = 1U << 1 ;

  // Field FXOR: no description available
    const uint8_t CRC_CTRLHU_FXOR = 1U << 2 ;

  // Field RESERVED: no description available
    const uint8_t CRC_CTRLHU_RESERVED = 1U << 3 ;

  // Field TOTR: no description available
    inline uint8_t CRC_CTRLHU_TOTR (const uint8_t inValue) {return (inValue & 0x3U) << 4 ; }

  // Field TOT: no description available
    inline uint8_t CRC_CTRLHU_TOT (const uint8_t inValue) {return (inValue & 0x3U) << 6 ; }

//------------------------------------------------------------------------------
// Peripheral DAC0: 12-Bit Digital-to-Analog Converter
//------------------------------------------------------------------------------

//---  Registers DATL(0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15): DAC Data Low Register
  #define DAC0_DATL(idx) (* ((volatile uint8_t *) (0x400cc000 + 0x0 + (idx) * 0x2)))
  #define DAC0_DAT0L (* ((volatile uint8_t *) (0x400cc000 + 0x0 + 0 * 0x2)))
  #define DAC0_DAT1L (* ((volatile uint8_t *) (0x400cc000 + 0x0 + 1 * 0x2)))
  #define DAC0_DAT2L (* ((volatile uint8_t *) (0x400cc000 + 0x0 + 2 * 0x2)))
  #define DAC0_DAT3L (* ((volatile uint8_t *) (0x400cc000 + 0x0 + 3 * 0x2)))
  #define DAC0_DAT4L (* ((volatile uint8_t *) (0x400cc000 + 0x0 + 4 * 0x2)))
  #define DAC0_DAT5L (* ((volatile uint8_t *) (0x400cc000 + 0x0 + 5 * 0x2)))
  #define DAC0_DAT6L (* ((volatile uint8_t *) (0x400cc000 + 0x0 + 6 * 0x2)))
  #define DAC0_DAT7L (* ((volatile uint8_t *) (0x400cc000 + 0x0 + 7 * 0x2)))
  #define DAC0_DAT8L (* ((volatile uint8_t *) (0x400cc000 + 0x0 + 8 * 0x2)))
  #define DAC0_DAT9L (* ((volatile uint8_t *) (0x400cc000 + 0x0 + 9 * 0x2)))
  #define DAC0_DAT10L (* ((volatile uint8_t *) (0x400cc000 + 0x0 + 10 * 0x2)))
  #define DAC0_DAT11L (* ((volatile uint8_t *) (0x400cc000 + 0x0 + 11 * 0x2)))
  #define DAC0_DAT12L (* ((volatile uint8_t *) (0x400cc000 + 0x0 + 12 * 0x2)))
  #define DAC0_DAT13L (* ((volatile uint8_t *) (0x400cc000 + 0x0 + 13 * 0x2)))
  #define DAC0_DAT14L (* ((volatile uint8_t *) (0x400cc000 + 0x0 + 14 * 0x2)))
  #define DAC0_DAT15L (* ((volatile uint8_t *) (0x400cc000 + 0x0 + 15 * 0x2)))

  // Field DATA: no description available
    inline uint8_t DAC0_DATL_DATA (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Registers DATH(0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15): DAC Data High Register
  #define DAC0_DATH(idx) (* ((volatile uint8_t *) (0x400cc000 + 0x1 + (idx) * 0x2)))
  #define DAC0_DAT0H (* ((volatile uint8_t *) (0x400cc000 + 0x1 + 0 * 0x2)))
  #define DAC0_DAT1H (* ((volatile uint8_t *) (0x400cc000 + 0x1 + 1 * 0x2)))
  #define DAC0_DAT2H (* ((volatile uint8_t *) (0x400cc000 + 0x1 + 2 * 0x2)))
  #define DAC0_DAT3H (* ((volatile uint8_t *) (0x400cc000 + 0x1 + 3 * 0x2)))
  #define DAC0_DAT4H (* ((volatile uint8_t *) (0x400cc000 + 0x1 + 4 * 0x2)))
  #define DAC0_DAT5H (* ((volatile uint8_t *) (0x400cc000 + 0x1 + 5 * 0x2)))
  #define DAC0_DAT6H (* ((volatile uint8_t *) (0x400cc000 + 0x1 + 6 * 0x2)))
  #define DAC0_DAT7H (* ((volatile uint8_t *) (0x400cc000 + 0x1 + 7 * 0x2)))
  #define DAC0_DAT8H (* ((volatile uint8_t *) (0x400cc000 + 0x1 + 8 * 0x2)))
  #define DAC0_DAT9H (* ((volatile uint8_t *) (0x400cc000 + 0x1 + 9 * 0x2)))
  #define DAC0_DAT10H (* ((volatile uint8_t *) (0x400cc000 + 0x1 + 10 * 0x2)))
  #define DAC0_DAT11H (* ((volatile uint8_t *) (0x400cc000 + 0x1 + 11 * 0x2)))
  #define DAC0_DAT12H (* ((volatile uint8_t *) (0x400cc000 + 0x1 + 12 * 0x2)))
  #define DAC0_DAT13H (* ((volatile uint8_t *) (0x400cc000 + 0x1 + 13 * 0x2)))
  #define DAC0_DAT14H (* ((volatile uint8_t *) (0x400cc000 + 0x1 + 14 * 0x2)))
  #define DAC0_DAT15H (* ((volatile uint8_t *) (0x400cc000 + 0x1 + 15 * 0x2)))

  // Field DATA: no description available
    inline uint8_t DAC0_DATH_DATA (const uint8_t inValue) {return (inValue & 0xfU) << 0 ; }

  // Field RESERVED: no description available
    inline uint8_t DAC0_DATH_RESERVED (const uint8_t inValue) {return (inValue & 0xfU) << 4 ; }

//---  Register SR: DAC Status Register
  #define DAC0_SR (* ((volatile uint8_t *) (0x400cc000 + 32)))

  // Field DACBFRPBF: DAC buffer read pointer bottom position flag
    const uint8_t DAC0_SR_DACBFRPBF = 1U << 0 ;

  // Field DACBFRPTF: DAC buffer read pointer top position flag
    const uint8_t DAC0_SR_DACBFRPTF = 1U << 1 ;

  // Field DACBFWMF: DAC buffer watermark flag
    const uint8_t DAC0_SR_DACBFWMF = 1U << 2 ;

  // Field RESERVED: no description available
    inline uint8_t DAC0_SR_RESERVED (const uint8_t inValue) {return (inValue & 0x1fU) << 3 ; }

//---  Register C0: DAC Control Register
  #define DAC0_C0 (* ((volatile uint8_t *) (0x400cc000 + 33)))

  // Field DACBBIEN: DAC buffer read pointer bottom flag interrupt enable
    const uint8_t DAC0_C0_DACBBIEN = 1U << 0 ;

  // Field DACBTIEN: DAC buffer read pointer top flag interrupt enable
    const uint8_t DAC0_C0_DACBTIEN = 1U << 1 ;

  // Field DACBWIEN: DAC buffer watermark interrupt enable
    const uint8_t DAC0_C0_DACBWIEN = 1U << 2 ;

  // Field LPEN: DAC low power control
    const uint8_t DAC0_C0_LPEN = 1U << 3 ;

  // Field DACSWTRG: DAC software trigger
    const uint8_t DAC0_C0_DACSWTRG = 1U << 4 ;

  // Field DACTRGSEL: DAC trigger select
    const uint8_t DAC0_C0_DACTRGSEL = 1U << 5 ;

  // Field DACRFS: DAC Reference Select
    const uint8_t DAC0_C0_DACRFS = 1U << 6 ;

  // Field DACEN: DAC enable
    const uint8_t DAC0_C0_DACEN = 1U << 7 ;

//---  Register C1: DAC Control Register 1
  #define DAC0_C1 (* ((volatile uint8_t *) (0x400cc000 + 34)))

  // Field DACBFEN: DAC buffer enable
    const uint8_t DAC0_C1_DACBFEN = 1U << 0 ;

  // Field DACBFMD: DAC buffer work mode select
    inline uint8_t DAC0_C1_DACBFMD (const uint8_t inValue) {return (inValue & 0x3U) << 1 ; }

  // Field DACBFWM: DAC buffer watermark select
    inline uint8_t DAC0_C1_DACBFWM (const uint8_t inValue) {return (inValue & 0x3U) << 3 ; }

  // Field RESERVED: no description available
    inline uint8_t DAC0_C1_RESERVED (const uint8_t inValue) {return (inValue & 0x3U) << 5 ; }

  // Field DMAEN: DMA enable select
    const uint8_t DAC0_C1_DMAEN = 1U << 7 ;

//---  Register C2: DAC Control Register 2
  #define DAC0_C2 (* ((volatile uint8_t *) (0x400cc000 + 35)))

  // Field DACBFUP: DAC buffer upper limit
    inline uint8_t DAC0_C2_DACBFUP (const uint8_t inValue) {return (inValue & 0xfU) << 0 ; }

  // Field DACBFRP: DAC buffer read pointer
    inline uint8_t DAC0_C2_DACBFRP (const uint8_t inValue) {return (inValue & 0xfU) << 4 ; }

//------------------------------------------------------------------------------
// Peripheral DMA: Enhanced direct memory access controller
//------------------------------------------------------------------------------

//---  Register CR: Control Register
  #define DMA_CR (* ((volatile uint32_t *) (0x40008000 + 0)))

  // Field RESERVED: no description available
    const uint32_t DMA_CR_RESERVED = 1U << 0 ;

  // Field EDBG: Enable Debug
    const uint32_t DMA_CR_EDBG = 1U << 1 ;

  // Field ERCA: Enable Round Robin Channel Arbitration
    const uint32_t DMA_CR_ERCA = 1U << 2 ;

  // Field RESERVED: no description available
    const uint32_t DMA_CR_RESERVED = 1U << 3 ;

  // Field HOE: Halt On Error
    const uint32_t DMA_CR_HOE = 1U << 4 ;

  // Field HALT: Halt DMA Operations
    const uint32_t DMA_CR_HALT = 1U << 5 ;

  // Field CLM: Continuous Link Mode
    const uint32_t DMA_CR_CLM = 1U << 6 ;

  // Field EMLM: Enable Minor Loop Mapping
    const uint32_t DMA_CR_EMLM = 1U << 7 ;

  // Field RESERVED: no description available
    inline uint32_t DMA_CR_RESERVED (const uint32_t inValue) {return (inValue & 0xffU) << 8 ; }

  // Field ECX: Error Cancel Transfer
    const uint32_t DMA_CR_ECX = 1U << 16 ;

  // Field CX: Cancel Transfer
    const uint32_t DMA_CR_CX = 1U << 17 ;

  // Field RESERVED: no description available
    inline uint32_t DMA_CR_RESERVED (const uint32_t inValue) {return (inValue & 0x3fffU) << 18 ; }

//---  Register ES: Error Status Register
  #define DMA_ES (* ((volatile uint32_t *) (0x40008000 + 4)))

  // Field DBE: Destination Bus Error
    const uint32_t DMA_ES_DBE = 1U << 0 ;

  // Field SBE: Source Bus Error
    const uint32_t DMA_ES_SBE = 1U << 1 ;

  // Field SGE: Scatter/Gather Configuration Error
    const uint32_t DMA_ES_SGE = 1U << 2 ;

  // Field NCE: NBYTES/CITER Configuration Error
    const uint32_t DMA_ES_NCE = 1U << 3 ;

  // Field DOE: Destination Offset Error
    const uint32_t DMA_ES_DOE = 1U << 4 ;

  // Field DAE: Destination Address Error
    const uint32_t DMA_ES_DAE = 1U << 5 ;

  // Field SOE: Source Offset Error
    const uint32_t DMA_ES_SOE = 1U << 6 ;

  // Field SAE: Source Address Error
    const uint32_t DMA_ES_SAE = 1U << 7 ;

  // Field ERRCHN: Error Channel Number or Cancelled Channel Number
    inline uint32_t DMA_ES_ERRCHN (const uint32_t inValue) {return (inValue & 0xfU) << 8 ; }

  // Field RESERVED: no description available
    inline uint32_t DMA_ES_RESERVED (const uint32_t inValue) {return (inValue & 0x3U) << 12 ; }

  // Field CPE: Channel Priority Error
    const uint32_t DMA_ES_CPE = 1U << 14 ;

  // Field RESERVED: no description available
    const uint32_t DMA_ES_RESERVED = 1U << 15 ;

  // Field ECX: Transfer Cancelled
    const uint32_t DMA_ES_ECX = 1U << 16 ;

  // Field RESERVED: no description available
    inline uint32_t DMA_ES_RESERVED (const uint32_t inValue) {return (inValue & 0x3fffU) << 17 ; }

  // Field VLD: no description available
    const uint32_t DMA_ES_VLD = 1U << 31 ;

//---  Register ERQ: Enable Request Register
  #define DMA_ERQ (* ((volatile uint32_t *) (0x40008000 + 12)))

  // Field ERQ0: Enable DMA Request 0
    const uint32_t DMA_ERQ_ERQ0 = 1U << 0 ;

  // Field ERQ1: Enable DMA Request 1
    const uint32_t DMA_ERQ_ERQ1 = 1U << 1 ;

  // Field ERQ2: Enable DMA Request 2
    const uint32_t DMA_ERQ_ERQ2 = 1U << 2 ;

  // Field ERQ3: Enable DMA Request 3
    const uint32_t DMA_ERQ_ERQ3 = 1U << 3 ;

  // Field ERQ4: Enable DMA Request 4
    const uint32_t DMA_ERQ_ERQ4 = 1U << 4 ;

  // Field ERQ5: Enable DMA Request 5
    const uint32_t DMA_ERQ_ERQ5 = 1U << 5 ;

  // Field ERQ6: Enable DMA Request 6
    const uint32_t DMA_ERQ_ERQ6 = 1U << 6 ;

  // Field ERQ7: Enable DMA Request 7
    const uint32_t DMA_ERQ_ERQ7 = 1U << 7 ;

  // Field ERQ8: Enable DMA Request 8
    const uint32_t DMA_ERQ_ERQ8 = 1U << 8 ;

  // Field ERQ9: Enable DMA Request 9
    const uint32_t DMA_ERQ_ERQ9 = 1U << 9 ;

  // Field ERQ10: Enable DMA Request 10
    const uint32_t DMA_ERQ_ERQ10 = 1U << 10 ;

  // Field ERQ11: Enable DMA Request 11
    const uint32_t DMA_ERQ_ERQ11 = 1U << 11 ;

  // Field ERQ12: Enable DMA Request 12
    const uint32_t DMA_ERQ_ERQ12 = 1U << 12 ;

  // Field ERQ13: Enable DMA Request 13
    const uint32_t DMA_ERQ_ERQ13 = 1U << 13 ;

  // Field ERQ14: Enable DMA Request 14
    const uint32_t DMA_ERQ_ERQ14 = 1U << 14 ;

  // Field ERQ15: Enable DMA Request 15
    const uint32_t DMA_ERQ_ERQ15 = 1U << 15 ;

  // Field RESERVED: no description available
    inline uint32_t DMA_ERQ_RESERVED (const uint32_t inValue) {return (inValue & 0xffffU) << 16 ; }

//---  Register EEI: Enable Error Interrupt Register
  #define DMA_EEI (* ((volatile uint32_t *) (0x40008000 + 20)))

  // Field EEI0: Enable Error Interrupt 0
    const uint32_t DMA_EEI_EEI0 = 1U << 0 ;

  // Field EEI1: Enable Error Interrupt 1
    const uint32_t DMA_EEI_EEI1 = 1U << 1 ;

  // Field EEI2: Enable Error Interrupt 2
    const uint32_t DMA_EEI_EEI2 = 1U << 2 ;

  // Field EEI3: Enable Error Interrupt 3
    const uint32_t DMA_EEI_EEI3 = 1U << 3 ;

  // Field EEI4: Enable Error Interrupt 4
    const uint32_t DMA_EEI_EEI4 = 1U << 4 ;

  // Field EEI5: Enable Error Interrupt 5
    const uint32_t DMA_EEI_EEI5 = 1U << 5 ;

  // Field EEI6: Enable Error Interrupt 6
    const uint32_t DMA_EEI_EEI6 = 1U << 6 ;

  // Field EEI7: Enable Error Interrupt 7
    const uint32_t DMA_EEI_EEI7 = 1U << 7 ;

  // Field EEI8: Enable Error Interrupt 8
    const uint32_t DMA_EEI_EEI8 = 1U << 8 ;

  // Field EEI9: Enable Error Interrupt 9
    const uint32_t DMA_EEI_EEI9 = 1U << 9 ;

  // Field EEI10: Enable Error Interrupt 10
    const uint32_t DMA_EEI_EEI10 = 1U << 10 ;

  // Field EEI11: Enable Error Interrupt 11
    const uint32_t DMA_EEI_EEI11 = 1U << 11 ;

  // Field EEI12: Enable Error Interrupt 12
    const uint32_t DMA_EEI_EEI12 = 1U << 12 ;

  // Field EEI13: Enable Error Interrupt 13
    const uint32_t DMA_EEI_EEI13 = 1U << 13 ;

  // Field EEI14: Enable Error Interrupt 14
    const uint32_t DMA_EEI_EEI14 = 1U << 14 ;

  // Field EEI15: Enable Error Interrupt 15
    const uint32_t DMA_EEI_EEI15 = 1U << 15 ;

  // Field RESERVED: no description available
    inline uint32_t DMA_EEI_RESERVED (const uint32_t inValue) {return (inValue & 0xffffU) << 16 ; }

//---  Register CEEI: Clear Enable Error Interrupt Register
  #define DMA_CEEI (* ((volatile uint8_t *) (0x40008000 + 24)))

  // Field CEEI: Clear Enable Error Interrupt
    inline uint8_t DMA_CEEI_CEEI (const uint8_t inValue) {return (inValue & 0xfU) << 0 ; }

  // Field RESERVED: no description available
    inline uint8_t DMA_CEEI_RESERVED (const uint8_t inValue) {return (inValue & 0x3U) << 4 ; }

  // Field CAEE: Clear All Enable Error Interrupts
    const uint8_t DMA_CEEI_CAEE = 1U << 6 ;

  // Field NOP: no description available
    const uint8_t DMA_CEEI_NOP = 1U << 7 ;

//---  Register SEEI: Set Enable Error Interrupt Register
  #define DMA_SEEI (* ((volatile uint8_t *) (0x40008000 + 25)))

  // Field SEEI: Set Enable Error Interrupt
    inline uint8_t DMA_SEEI_SEEI (const uint8_t inValue) {return (inValue & 0xfU) << 0 ; }

  // Field RESERVED: no description available
    inline uint8_t DMA_SEEI_RESERVED (const uint8_t inValue) {return (inValue & 0x3U) << 4 ; }

  // Field SAEE: Sets All Enable Error Interrupts
    const uint8_t DMA_SEEI_SAEE = 1U << 6 ;

  // Field NOP: no description available
    const uint8_t DMA_SEEI_NOP = 1U << 7 ;

//---  Register CERQ: Clear Enable Request Register
  #define DMA_CERQ (* ((volatile uint8_t *) (0x40008000 + 26)))

  // Field CERQ: Clear Enable Request
    inline uint8_t DMA_CERQ_CERQ (const uint8_t inValue) {return (inValue & 0xfU) << 0 ; }

  // Field RESERVED: no description available
    inline uint8_t DMA_CERQ_RESERVED (const uint8_t inValue) {return (inValue & 0x3U) << 4 ; }

  // Field CAER: Clear All Enable Requests
    const uint8_t DMA_CERQ_CAER = 1U << 6 ;

  // Field NOP: no description available
    const uint8_t DMA_CERQ_NOP = 1U << 7 ;

//---  Register SERQ: Set Enable Request Register
  #define DMA_SERQ (* ((volatile uint8_t *) (0x40008000 + 27)))

  // Field SERQ: Set enable request
    inline uint8_t DMA_SERQ_SERQ (const uint8_t inValue) {return (inValue & 0xfU) << 0 ; }

  // Field RESERVED: no description available
    inline uint8_t DMA_SERQ_RESERVED (const uint8_t inValue) {return (inValue & 0x3U) << 4 ; }

  // Field SAER: Set All Enable Requests
    const uint8_t DMA_SERQ_SAER = 1U << 6 ;

  // Field NOP: no description available
    const uint8_t DMA_SERQ_NOP = 1U << 7 ;

//---  Register CDNE: Clear DONE Status Bit Register
  #define DMA_CDNE (* ((volatile uint8_t *) (0x40008000 + 28)))

  // Field CDNE: Clear DONE Bit
    inline uint8_t DMA_CDNE_CDNE (const uint8_t inValue) {return (inValue & 0xfU) << 0 ; }

  // Field RESERVED: no description available
    inline uint8_t DMA_CDNE_RESERVED (const uint8_t inValue) {return (inValue & 0x3U) << 4 ; }

  // Field CADN: Clears All DONE Bits
    const uint8_t DMA_CDNE_CADN = 1U << 6 ;

  // Field NOP: no description available
    const uint8_t DMA_CDNE_NOP = 1U << 7 ;

//---  Register SSRT: Set START Bit Register
  #define DMA_SSRT (* ((volatile uint8_t *) (0x40008000 + 29)))

  // Field SSRT: Set START Bit
    inline uint8_t DMA_SSRT_SSRT (const uint8_t inValue) {return (inValue & 0xfU) << 0 ; }

  // Field RESERVED: no description available
    inline uint8_t DMA_SSRT_RESERVED (const uint8_t inValue) {return (inValue & 0x3U) << 4 ; }

  // Field SAST: Set All START Bits (activates all channels)
    const uint8_t DMA_SSRT_SAST = 1U << 6 ;

  // Field NOP: no description available
    const uint8_t DMA_SSRT_NOP = 1U << 7 ;

//---  Register CERR: Clear Error Register
  #define DMA_CERR (* ((volatile uint8_t *) (0x40008000 + 30)))

  // Field CERR: Clear Error Indicator
    inline uint8_t DMA_CERR_CERR (const uint8_t inValue) {return (inValue & 0xfU) << 0 ; }

  // Field RESERVED: no description available
    inline uint8_t DMA_CERR_RESERVED (const uint8_t inValue) {return (inValue & 0x3U) << 4 ; }

  // Field CAEI: Clear All Error Indicators
    const uint8_t DMA_CERR_CAEI = 1U << 6 ;

  // Field NOP: no description available
    const uint8_t DMA_CERR_NOP = 1U << 7 ;

//---  Register CINT: Clear Interrupt Request Register
  #define DMA_CINT (* ((volatile uint8_t *) (0x40008000 + 31)))

  // Field CINT: Clear Interrupt Request
    inline uint8_t DMA_CINT_CINT (const uint8_t inValue) {return (inValue & 0xfU) << 0 ; }

  // Field RESERVED: no description available
    inline uint8_t DMA_CINT_RESERVED (const uint8_t inValue) {return (inValue & 0x3U) << 4 ; }

  // Field CAIR: Clear All Interrupt Requests
    const uint8_t DMA_CINT_CAIR = 1U << 6 ;

  // Field NOP: no description available
    const uint8_t DMA_CINT_NOP = 1U << 7 ;

//---  Register INT: Interrupt Request Register
  #define DMA_INT (* ((volatile uint32_t *) (0x40008000 + 36)))

  // Field INT0: Interrupt Request 0
    const uint32_t DMA_INT_INT0 = 1U << 0 ;

  // Field INT1: Interrupt Request 1
    const uint32_t DMA_INT_INT1 = 1U << 1 ;

  // Field INT2: Interrupt Request 2
    const uint32_t DMA_INT_INT2 = 1U << 2 ;

  // Field INT3: Interrupt Request 3
    const uint32_t DMA_INT_INT3 = 1U << 3 ;

  // Field INT4: Interrupt Request 4
    const uint32_t DMA_INT_INT4 = 1U << 4 ;

  // Field INT5: Interrupt Request 5
    const uint32_t DMA_INT_INT5 = 1U << 5 ;

  // Field INT6: Interrupt Request 6
    const uint32_t DMA_INT_INT6 = 1U << 6 ;

  // Field INT7: Interrupt Request 7
    const uint32_t DMA_INT_INT7 = 1U << 7 ;

  // Field INT8: Interrupt Request 8
    const uint32_t DMA_INT_INT8 = 1U << 8 ;

  // Field INT9: Interrupt Request 9
    const uint32_t DMA_INT_INT9 = 1U << 9 ;

  // Field INT10: Interrupt Request 10
    const uint32_t DMA_INT_INT10 = 1U << 10 ;

  // Field INT11: Interrupt Request 11
    const uint32_t DMA_INT_INT11 = 1U << 11 ;

  // Field INT12: Interrupt Request 12
    const uint32_t DMA_INT_INT12 = 1U << 12 ;

  // Field INT13: Interrupt Request 13
    const uint32_t DMA_INT_INT13 = 1U << 13 ;

  // Field INT14: Interrupt Request 14
    const uint32_t DMA_INT_INT14 = 1U << 14 ;

  // Field INT15: Interrupt Request 15
    const uint32_t DMA_INT_INT15 = 1U << 15 ;

  // Field RESERVED: no description available
    inline uint32_t DMA_INT_RESERVED (const uint32_t inValue) {return (inValue & 0xffffU) << 16 ; }

//---  Register ERR: Error Register
  #define DMA_ERR (* ((volatile uint32_t *) (0x40008000 + 44)))

  // Field ERR0: Error In Channel 0
    const uint32_t DMA_ERR_ERR0 = 1U << 0 ;

  // Field ERR1: Error In Channel 1
    const uint32_t DMA_ERR_ERR1 = 1U << 1 ;

  // Field ERR2: Error In Channel 2
    const uint32_t DMA_ERR_ERR2 = 1U << 2 ;

  // Field ERR3: Error In Channel 3
    const uint32_t DMA_ERR_ERR3 = 1U << 3 ;

  // Field ERR4: Error In Channel 4
    const uint32_t DMA_ERR_ERR4 = 1U << 4 ;

  // Field ERR5: Error In Channel 5
    const uint32_t DMA_ERR_ERR5 = 1U << 5 ;

  // Field ERR6: Error In Channel 6
    const uint32_t DMA_ERR_ERR6 = 1U << 6 ;

  // Field ERR7: Error In Channel 7
    const uint32_t DMA_ERR_ERR7 = 1U << 7 ;

  // Field ERR8: Error In Channel 8
    const uint32_t DMA_ERR_ERR8 = 1U << 8 ;

  // Field ERR9: Error In Channel 9
    const uint32_t DMA_ERR_ERR9 = 1U << 9 ;

  // Field ERR10: Error In Channel 10
    const uint32_t DMA_ERR_ERR10 = 1U << 10 ;

  // Field ERR11: Error In Channel 11
    const uint32_t DMA_ERR_ERR11 = 1U << 11 ;

  // Field ERR12: Error In Channel 12
    const uint32_t DMA_ERR_ERR12 = 1U << 12 ;

  // Field ERR13: Error In Channel 13
    const uint32_t DMA_ERR_ERR13 = 1U << 13 ;

  // Field ERR14: Error In Channel 14
    const uint32_t DMA_ERR_ERR14 = 1U << 14 ;

  // Field ERR15: Error In Channel 15
    const uint32_t DMA_ERR_ERR15 = 1U << 15 ;

  // Field RESERVED: no description available
    inline uint32_t DMA_ERR_RESERVED (const uint32_t inValue) {return (inValue & 0xffffU) << 16 ; }

//---  Register HRS: Hardware Request Status Register
  #define DMA_HRS (* ((volatile uint32_t *) (0x40008000 + 52)))

  // Field HRS0: Hardware Request Status Channel 0
    const uint32_t DMA_HRS_HRS0 = 1U << 0 ;

  // Field HRS1: Hardware Request Status Channel 1
    const uint32_t DMA_HRS_HRS1 = 1U << 1 ;

  // Field HRS2: Hardware Request Status Channel 2
    const uint32_t DMA_HRS_HRS2 = 1U << 2 ;

  // Field HRS3: Hardware Request Status Channel 3
    const uint32_t DMA_HRS_HRS3 = 1U << 3 ;

  // Field HRS4: Hardware Request Status Channel 4
    const uint32_t DMA_HRS_HRS4 = 1U << 4 ;

  // Field HRS5: Hardware Request Status Channel 5
    const uint32_t DMA_HRS_HRS5 = 1U << 5 ;

  // Field HRS6: Hardware Request Status Channel 6
    const uint32_t DMA_HRS_HRS6 = 1U << 6 ;

  // Field HRS7: Hardware Request Status Channel 7
    const uint32_t DMA_HRS_HRS7 = 1U << 7 ;

  // Field HRS8: Hardware Request Status Channel 8
    const uint32_t DMA_HRS_HRS8 = 1U << 8 ;

  // Field HRS9: Hardware Request Status Channel 9
    const uint32_t DMA_HRS_HRS9 = 1U << 9 ;

  // Field HRS10: Hardware Request Status Channel 10
    const uint32_t DMA_HRS_HRS10 = 1U << 10 ;

  // Field HRS11: Hardware Request Status Channel 11
    const uint32_t DMA_HRS_HRS11 = 1U << 11 ;

  // Field HRS12: Hardware Request Status Channel 12
    const uint32_t DMA_HRS_HRS12 = 1U << 12 ;

  // Field HRS13: Hardware Request Status Channel 13
    const uint32_t DMA_HRS_HRS13 = 1U << 13 ;

  // Field HRS14: Hardware Request Status Channel 14
    const uint32_t DMA_HRS_HRS14 = 1U << 14 ;

  // Field HRS15: Hardware Request Status Channel 15
    const uint32_t DMA_HRS_HRS15 = 1U << 15 ;

  // Field RESERVED: no description available
    inline uint32_t DMA_HRS_RESERVED (const uint32_t inValue) {return (inValue & 0xffffU) << 16 ; }

//---  Registers DCHPRI(3,2,1,0,7,6,5,4,11,10,9,8,15,14,13,12): Channel n Priority Register
  #define DMA_DCHPRI(idx) (* ((volatile uint8_t *) (0x40008000 + 0x100 + (idx) * 0x1)))
  #define DMA_DCHPRI3 (* ((volatile uint8_t *) (0x40008000 + 0x100 + 0 * 0x1)))
  #define DMA_DCHPRI2 (* ((volatile uint8_t *) (0x40008000 + 0x100 + 1 * 0x1)))
  #define DMA_DCHPRI1 (* ((volatile uint8_t *) (0x40008000 + 0x100 + 2 * 0x1)))
  #define DMA_DCHPRI0 (* ((volatile uint8_t *) (0x40008000 + 0x100 + 3 * 0x1)))
  #define DMA_DCHPRI7 (* ((volatile uint8_t *) (0x40008000 + 0x100 + 4 * 0x1)))
  #define DMA_DCHPRI6 (* ((volatile uint8_t *) (0x40008000 + 0x100 + 5 * 0x1)))
  #define DMA_DCHPRI5 (* ((volatile uint8_t *) (0x40008000 + 0x100 + 6 * 0x1)))
  #define DMA_DCHPRI4 (* ((volatile uint8_t *) (0x40008000 + 0x100 + 7 * 0x1)))
  #define DMA_DCHPRI11 (* ((volatile uint8_t *) (0x40008000 + 0x100 + 8 * 0x1)))
  #define DMA_DCHPRI10 (* ((volatile uint8_t *) (0x40008000 + 0x100 + 9 * 0x1)))
  #define DMA_DCHPRI9 (* ((volatile uint8_t *) (0x40008000 + 0x100 + 10 * 0x1)))
  #define DMA_DCHPRI8 (* ((volatile uint8_t *) (0x40008000 + 0x100 + 11 * 0x1)))
  #define DMA_DCHPRI15 (* ((volatile uint8_t *) (0x40008000 + 0x100 + 12 * 0x1)))
  #define DMA_DCHPRI14 (* ((volatile uint8_t *) (0x40008000 + 0x100 + 13 * 0x1)))
  #define DMA_DCHPRI13 (* ((volatile uint8_t *) (0x40008000 + 0x100 + 14 * 0x1)))
  #define DMA_DCHPRI12 (* ((volatile uint8_t *) (0x40008000 + 0x100 + 15 * 0x1)))

  // Field CHPRI: Channel n Arbitration Priority
    inline uint8_t DMA_DCHPRI_CHPRI (const uint8_t inValue) {return (inValue & 0xfU) << 0 ; }

  // Field RESERVED: no description available
    inline uint8_t DMA_DCHPRI_RESERVED (const uint8_t inValue) {return (inValue & 0x3U) << 4 ; }

  // Field DPA: Disable Preempt Ability
    const uint8_t DMA_DCHPRI_DPA = 1U << 6 ;

  // Field ECP: Enable Channel Preemption
    const uint8_t DMA_DCHPRI_ECP = 1U << 7 ;

//---  Registers TCD_SADDR(0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15): TCD Source Address
  #define DMA_TCD_SADDR(idx) (* ((volatile uint32_t *) (0x40008000 + 0x1000 + (idx) * 0x20)))
  #define DMA_TCD0_SADDR (* ((volatile uint32_t *) (0x40008000 + 0x1000 + 0 * 0x20)))
  #define DMA_TCD1_SADDR (* ((volatile uint32_t *) (0x40008000 + 0x1000 + 1 * 0x20)))
  #define DMA_TCD2_SADDR (* ((volatile uint32_t *) (0x40008000 + 0x1000 + 2 * 0x20)))
  #define DMA_TCD3_SADDR (* ((volatile uint32_t *) (0x40008000 + 0x1000 + 3 * 0x20)))
  #define DMA_TCD4_SADDR (* ((volatile uint32_t *) (0x40008000 + 0x1000 + 4 * 0x20)))
  #define DMA_TCD5_SADDR (* ((volatile uint32_t *) (0x40008000 + 0x1000 + 5 * 0x20)))
  #define DMA_TCD6_SADDR (* ((volatile uint32_t *) (0x40008000 + 0x1000 + 6 * 0x20)))
  #define DMA_TCD7_SADDR (* ((volatile uint32_t *) (0x40008000 + 0x1000 + 7 * 0x20)))
  #define DMA_TCD8_SADDR (* ((volatile uint32_t *) (0x40008000 + 0x1000 + 8 * 0x20)))
  #define DMA_TCD9_SADDR (* ((volatile uint32_t *) (0x40008000 + 0x1000 + 9 * 0x20)))
  #define DMA_TCD10_SADDR (* ((volatile uint32_t *) (0x40008000 + 0x1000 + 10 * 0x20)))
  #define DMA_TCD11_SADDR (* ((volatile uint32_t *) (0x40008000 + 0x1000 + 11 * 0x20)))
  #define DMA_TCD12_SADDR (* ((volatile uint32_t *) (0x40008000 + 0x1000 + 12 * 0x20)))
  #define DMA_TCD13_SADDR (* ((volatile uint32_t *) (0x40008000 + 0x1000 + 13 * 0x20)))
  #define DMA_TCD14_SADDR (* ((volatile uint32_t *) (0x40008000 + 0x1000 + 14 * 0x20)))
  #define DMA_TCD15_SADDR (* ((volatile uint32_t *) (0x40008000 + 0x1000 + 15 * 0x20)))

  // Field SADDR: Source Address
    inline uint32_t DMA_TCD_SADDR_SADDR (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Registers TCD_SOFF(0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15): TCD Signed Source Address Offset
  #define DMA_TCD_SOFF(idx) (* ((volatile uint16_t *) (0x40008000 + 0x1004 + (idx) * 0x20)))
  #define DMA_TCD0_SOFF (* ((volatile uint16_t *) (0x40008000 + 0x1004 + 0 * 0x20)))
  #define DMA_TCD1_SOFF (* ((volatile uint16_t *) (0x40008000 + 0x1004 + 1 * 0x20)))
  #define DMA_TCD2_SOFF (* ((volatile uint16_t *) (0x40008000 + 0x1004 + 2 * 0x20)))
  #define DMA_TCD3_SOFF (* ((volatile uint16_t *) (0x40008000 + 0x1004 + 3 * 0x20)))
  #define DMA_TCD4_SOFF (* ((volatile uint16_t *) (0x40008000 + 0x1004 + 4 * 0x20)))
  #define DMA_TCD5_SOFF (* ((volatile uint16_t *) (0x40008000 + 0x1004 + 5 * 0x20)))
  #define DMA_TCD6_SOFF (* ((volatile uint16_t *) (0x40008000 + 0x1004 + 6 * 0x20)))
  #define DMA_TCD7_SOFF (* ((volatile uint16_t *) (0x40008000 + 0x1004 + 7 * 0x20)))
  #define DMA_TCD8_SOFF (* ((volatile uint16_t *) (0x40008000 + 0x1004 + 8 * 0x20)))
  #define DMA_TCD9_SOFF (* ((volatile uint16_t *) (0x40008000 + 0x1004 + 9 * 0x20)))
  #define DMA_TCD10_SOFF (* ((volatile uint16_t *) (0x40008000 + 0x1004 + 10 * 0x20)))
  #define DMA_TCD11_SOFF (* ((volatile uint16_t *) (0x40008000 + 0x1004 + 11 * 0x20)))
  #define DMA_TCD12_SOFF (* ((volatile uint16_t *) (0x40008000 + 0x1004 + 12 * 0x20)))
  #define DMA_TCD13_SOFF (* ((volatile uint16_t *) (0x40008000 + 0x1004 + 13 * 0x20)))
  #define DMA_TCD14_SOFF (* ((volatile uint16_t *) (0x40008000 + 0x1004 + 14 * 0x20)))
  #define DMA_TCD15_SOFF (* ((volatile uint16_t *) (0x40008000 + 0x1004 + 15 * 0x20)))

  // Field SOFF: Source address signed offset
    inline uint16_t DMA_TCD_SOFF_SOFF (const uint16_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Registers TCD_ATTR(0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15): TCD Transfer Attributes
  #define DMA_TCD_ATTR(idx) (* ((volatile uint16_t *) (0x40008000 + 0x1006 + (idx) * 0x20)))
  #define DMA_TCD0_ATTR (* ((volatile uint16_t *) (0x40008000 + 0x1006 + 0 * 0x20)))
  #define DMA_TCD1_ATTR (* ((volatile uint16_t *) (0x40008000 + 0x1006 + 1 * 0x20)))
  #define DMA_TCD2_ATTR (* ((volatile uint16_t *) (0x40008000 + 0x1006 + 2 * 0x20)))
  #define DMA_TCD3_ATTR (* ((volatile uint16_t *) (0x40008000 + 0x1006 + 3 * 0x20)))
  #define DMA_TCD4_ATTR (* ((volatile uint16_t *) (0x40008000 + 0x1006 + 4 * 0x20)))
  #define DMA_TCD5_ATTR (* ((volatile uint16_t *) (0x40008000 + 0x1006 + 5 * 0x20)))
  #define DMA_TCD6_ATTR (* ((volatile uint16_t *) (0x40008000 + 0x1006 + 6 * 0x20)))
  #define DMA_TCD7_ATTR (* ((volatile uint16_t *) (0x40008000 + 0x1006 + 7 * 0x20)))
  #define DMA_TCD8_ATTR (* ((volatile uint16_t *) (0x40008000 + 0x1006 + 8 * 0x20)))
  #define DMA_TCD9_ATTR (* ((volatile uint16_t *) (0x40008000 + 0x1006 + 9 * 0x20)))
  #define DMA_TCD10_ATTR (* ((volatile uint16_t *) (0x40008000 + 0x1006 + 10 * 0x20)))
  #define DMA_TCD11_ATTR (* ((volatile uint16_t *) (0x40008000 + 0x1006 + 11 * 0x20)))
  #define DMA_TCD12_ATTR (* ((volatile uint16_t *) (0x40008000 + 0x1006 + 12 * 0x20)))
  #define DMA_TCD13_ATTR (* ((volatile uint16_t *) (0x40008000 + 0x1006 + 13 * 0x20)))
  #define DMA_TCD14_ATTR (* ((volatile uint16_t *) (0x40008000 + 0x1006 + 14 * 0x20)))
  #define DMA_TCD15_ATTR (* ((volatile uint16_t *) (0x40008000 + 0x1006 + 15 * 0x20)))

  // Field DSIZE: Destination Data Transfer Size
    inline uint16_t DMA_TCD_ATTR_DSIZE (const uint16_t inValue) {return (inValue & 0x7U) << 0 ; }

  // Field DMOD: Destination Address Modulo
    inline uint16_t DMA_TCD_ATTR_DMOD (const uint16_t inValue) {return (inValue & 0x1fU) << 3 ; }

  // Field SSIZE: Source data transfer size
    inline uint16_t DMA_TCD_ATTR_SSIZE (const uint16_t inValue) {return (inValue & 0x7U) << 8 ; }

  // Field SMOD: Source Address Modulo.
    inline uint16_t DMA_TCD_ATTR_SMOD (const uint16_t inValue) {return (inValue & 0x1fU) << 11 ; }

//---  Registers TCD_NBYTES_MLOFFYES(0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15): TCD Signed Minor Loop Offset (Minor Loop and Offset Enabled)
  #define DMA_TCD_NBYTES_MLOFFYES(idx) (* ((volatile uint32_t *) (0x40008000 + 0x1008 + (idx) * 0x20)))
  #define DMA_TCD0_NBYTES_MLOFFYES (* ((volatile uint32_t *) (0x40008000 + 0x1008 + 0 * 0x20)))
  #define DMA_TCD1_NBYTES_MLOFFYES (* ((volatile uint32_t *) (0x40008000 + 0x1008 + 1 * 0x20)))
  #define DMA_TCD2_NBYTES_MLOFFYES (* ((volatile uint32_t *) (0x40008000 + 0x1008 + 2 * 0x20)))
  #define DMA_TCD3_NBYTES_MLOFFYES (* ((volatile uint32_t *) (0x40008000 + 0x1008 + 3 * 0x20)))
  #define DMA_TCD4_NBYTES_MLOFFYES (* ((volatile uint32_t *) (0x40008000 + 0x1008 + 4 * 0x20)))
  #define DMA_TCD5_NBYTES_MLOFFYES (* ((volatile uint32_t *) (0x40008000 + 0x1008 + 5 * 0x20)))
  #define DMA_TCD6_NBYTES_MLOFFYES (* ((volatile uint32_t *) (0x40008000 + 0x1008 + 6 * 0x20)))
  #define DMA_TCD7_NBYTES_MLOFFYES (* ((volatile uint32_t *) (0x40008000 + 0x1008 + 7 * 0x20)))
  #define DMA_TCD8_NBYTES_MLOFFYES (* ((volatile uint32_t *) (0x40008000 + 0x1008 + 8 * 0x20)))
  #define DMA_TCD9_NBYTES_MLOFFYES (* ((volatile uint32_t *) (0x40008000 + 0x1008 + 9 * 0x20)))
  #define DMA_TCD10_NBYTES_MLOFFYES (* ((volatile uint32_t *) (0x40008000 + 0x1008 + 10 * 0x20)))
  #define DMA_TCD11_NBYTES_MLOFFYES (* ((volatile uint32_t *) (0x40008000 + 0x1008 + 11 * 0x20)))
  #define DMA_TCD12_NBYTES_MLOFFYES (* ((volatile uint32_t *) (0x40008000 + 0x1008 + 12 * 0x20)))
  #define DMA_TCD13_NBYTES_MLOFFYES (* ((volatile uint32_t *) (0x40008000 + 0x1008 + 13 * 0x20)))
  #define DMA_TCD14_NBYTES_MLOFFYES (* ((volatile uint32_t *) (0x40008000 + 0x1008 + 14 * 0x20)))
  #define DMA_TCD15_NBYTES_MLOFFYES (* ((volatile uint32_t *) (0x40008000 + 0x1008 + 15 * 0x20)))

  // Field NBYTES: Minor Byte Transfer Count
    inline uint32_t DMA_TCD_NBYTES_MLOFFYES_NBYTES (const uint32_t inValue) {return (inValue & 0x3ffU) << 0 ; }

  // Field MLOFF: If SMLOE or DMLOE is set, this field represents a sign-extended offset applied to the source or destination address to form the next-state value after the minor loop completes.
    inline uint32_t DMA_TCD_NBYTES_MLOFFYES_MLOFF (const uint32_t inValue) {return (inValue & 0xfffffU) << 10 ; }

  // Field DMLOE: Destination Minor Loop Offset enable
    const uint32_t DMA_TCD_NBYTES_MLOFFYES_DMLOE = 1U << 30 ;

  // Field SMLOE: Source Minor Loop Offset Enable
    const uint32_t DMA_TCD_NBYTES_MLOFFYES_SMLOE = 1U << 31 ;

//---  Registers TCD_NBYTES_MLOFFNO(0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15): TCD Signed Minor Loop Offset (Minor Loop Enabled and Offset Disabled)
  #define DMA_TCD_NBYTES_MLOFFNO(idx) (* ((volatile uint32_t *) (0x40008000 + 0x1008 + (idx) * 0x20)))
  #define DMA_TCD0_NBYTES_MLOFFNO (* ((volatile uint32_t *) (0x40008000 + 0x1008 + 0 * 0x20)))
  #define DMA_TCD1_NBYTES_MLOFFNO (* ((volatile uint32_t *) (0x40008000 + 0x1008 + 1 * 0x20)))
  #define DMA_TCD2_NBYTES_MLOFFNO (* ((volatile uint32_t *) (0x40008000 + 0x1008 + 2 * 0x20)))
  #define DMA_TCD3_NBYTES_MLOFFNO (* ((volatile uint32_t *) (0x40008000 + 0x1008 + 3 * 0x20)))
  #define DMA_TCD4_NBYTES_MLOFFNO (* ((volatile uint32_t *) (0x40008000 + 0x1008 + 4 * 0x20)))
  #define DMA_TCD5_NBYTES_MLOFFNO (* ((volatile uint32_t *) (0x40008000 + 0x1008 + 5 * 0x20)))
  #define DMA_TCD6_NBYTES_MLOFFNO (* ((volatile uint32_t *) (0x40008000 + 0x1008 + 6 * 0x20)))
  #define DMA_TCD7_NBYTES_MLOFFNO (* ((volatile uint32_t *) (0x40008000 + 0x1008 + 7 * 0x20)))
  #define DMA_TCD8_NBYTES_MLOFFNO (* ((volatile uint32_t *) (0x40008000 + 0x1008 + 8 * 0x20)))
  #define DMA_TCD9_NBYTES_MLOFFNO (* ((volatile uint32_t *) (0x40008000 + 0x1008 + 9 * 0x20)))
  #define DMA_TCD10_NBYTES_MLOFFNO (* ((volatile uint32_t *) (0x40008000 + 0x1008 + 10 * 0x20)))
  #define DMA_TCD11_NBYTES_MLOFFNO (* ((volatile uint32_t *) (0x40008000 + 0x1008 + 11 * 0x20)))
  #define DMA_TCD12_NBYTES_MLOFFNO (* ((volatile uint32_t *) (0x40008000 + 0x1008 + 12 * 0x20)))
  #define DMA_TCD13_NBYTES_MLOFFNO (* ((volatile uint32_t *) (0x40008000 + 0x1008 + 13 * 0x20)))
  #define DMA_TCD14_NBYTES_MLOFFNO (* ((volatile uint32_t *) (0x40008000 + 0x1008 + 14 * 0x20)))
  #define DMA_TCD15_NBYTES_MLOFFNO (* ((volatile uint32_t *) (0x40008000 + 0x1008 + 15 * 0x20)))

  // Field NBYTES: Minor Byte Transfer Count
    inline uint32_t DMA_TCD_NBYTES_MLOFFNO_NBYTES (const uint32_t inValue) {return (inValue & 0x3fffffffU) << 0 ; }

  // Field DMLOE: Destination Minor Loop Offset enable
    const uint32_t DMA_TCD_NBYTES_MLOFFNO_DMLOE = 1U << 30 ;

  // Field SMLOE: Source Minor Loop Offset Enable
    const uint32_t DMA_TCD_NBYTES_MLOFFNO_SMLOE = 1U << 31 ;

//---  Registers TCD_NBYTES_MLNO(0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15): TCD Minor Byte Count (Minor Loop Disabled)
  #define DMA_TCD_NBYTES_MLNO(idx) (* ((volatile uint32_t *) (0x40008000 + 0x1008 + (idx) * 0x20)))
  #define DMA_TCD0_NBYTES_MLNO (* ((volatile uint32_t *) (0x40008000 + 0x1008 + 0 * 0x20)))
  #define DMA_TCD1_NBYTES_MLNO (* ((volatile uint32_t *) (0x40008000 + 0x1008 + 1 * 0x20)))
  #define DMA_TCD2_NBYTES_MLNO (* ((volatile uint32_t *) (0x40008000 + 0x1008 + 2 * 0x20)))
  #define DMA_TCD3_NBYTES_MLNO (* ((volatile uint32_t *) (0x40008000 + 0x1008 + 3 * 0x20)))
  #define DMA_TCD4_NBYTES_MLNO (* ((volatile uint32_t *) (0x40008000 + 0x1008 + 4 * 0x20)))
  #define DMA_TCD5_NBYTES_MLNO (* ((volatile uint32_t *) (0x40008000 + 0x1008 + 5 * 0x20)))
  #define DMA_TCD6_NBYTES_MLNO (* ((volatile uint32_t *) (0x40008000 + 0x1008 + 6 * 0x20)))
  #define DMA_TCD7_NBYTES_MLNO (* ((volatile uint32_t *) (0x40008000 + 0x1008 + 7 * 0x20)))
  #define DMA_TCD8_NBYTES_MLNO (* ((volatile uint32_t *) (0x40008000 + 0x1008 + 8 * 0x20)))
  #define DMA_TCD9_NBYTES_MLNO (* ((volatile uint32_t *) (0x40008000 + 0x1008 + 9 * 0x20)))
  #define DMA_TCD10_NBYTES_MLNO (* ((volatile uint32_t *) (0x40008000 + 0x1008 + 10 * 0x20)))
  #define DMA_TCD11_NBYTES_MLNO (* ((volatile uint32_t *) (0x40008000 + 0x1008 + 11 * 0x20)))
  #define DMA_TCD12_NBYTES_MLNO (* ((volatile uint32_t *) (0x40008000 + 0x1008 + 12 * 0x20)))
  #define DMA_TCD13_NBYTES_MLNO (* ((volatile uint32_t *) (0x40008000 + 0x1008 + 13 * 0x20)))
  #define DMA_TCD14_NBYTES_MLNO (* ((volatile uint32_t *) (0x40008000 + 0x1008 + 14 * 0x20)))
  #define DMA_TCD15_NBYTES_MLNO (* ((volatile uint32_t *) (0x40008000 + 0x1008 + 15 * 0x20)))

  // Field NBYTES: Minor Byte Transfer Count
    inline uint32_t DMA_TCD_NBYTES_MLNO_NBYTES (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Registers TCD_SLAST(0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15): TCD Last Source Address Adjustment
  #define DMA_TCD_SLAST(idx) (* ((volatile uint32_t *) (0x40008000 + 0x100c + (idx) * 0x20)))
  #define DMA_TCD0_SLAST (* ((volatile uint32_t *) (0x40008000 + 0x100c + 0 * 0x20)))
  #define DMA_TCD1_SLAST (* ((volatile uint32_t *) (0x40008000 + 0x100c + 1 * 0x20)))
  #define DMA_TCD2_SLAST (* ((volatile uint32_t *) (0x40008000 + 0x100c + 2 * 0x20)))
  #define DMA_TCD3_SLAST (* ((volatile uint32_t *) (0x40008000 + 0x100c + 3 * 0x20)))
  #define DMA_TCD4_SLAST (* ((volatile uint32_t *) (0x40008000 + 0x100c + 4 * 0x20)))
  #define DMA_TCD5_SLAST (* ((volatile uint32_t *) (0x40008000 + 0x100c + 5 * 0x20)))
  #define DMA_TCD6_SLAST (* ((volatile uint32_t *) (0x40008000 + 0x100c + 6 * 0x20)))
  #define DMA_TCD7_SLAST (* ((volatile uint32_t *) (0x40008000 + 0x100c + 7 * 0x20)))
  #define DMA_TCD8_SLAST (* ((volatile uint32_t *) (0x40008000 + 0x100c + 8 * 0x20)))
  #define DMA_TCD9_SLAST (* ((volatile uint32_t *) (0x40008000 + 0x100c + 9 * 0x20)))
  #define DMA_TCD10_SLAST (* ((volatile uint32_t *) (0x40008000 + 0x100c + 10 * 0x20)))
  #define DMA_TCD11_SLAST (* ((volatile uint32_t *) (0x40008000 + 0x100c + 11 * 0x20)))
  #define DMA_TCD12_SLAST (* ((volatile uint32_t *) (0x40008000 + 0x100c + 12 * 0x20)))
  #define DMA_TCD13_SLAST (* ((volatile uint32_t *) (0x40008000 + 0x100c + 13 * 0x20)))
  #define DMA_TCD14_SLAST (* ((volatile uint32_t *) (0x40008000 + 0x100c + 14 * 0x20)))
  #define DMA_TCD15_SLAST (* ((volatile uint32_t *) (0x40008000 + 0x100c + 15 * 0x20)))

  // Field SLAST: Last source Address Adjustment
    inline uint32_t DMA_TCD_SLAST_SLAST (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Registers TCD_DADDR(0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15): TCD Destination Address
  #define DMA_TCD_DADDR(idx) (* ((volatile uint32_t *) (0x40008000 + 0x1010 + (idx) * 0x20)))
  #define DMA_TCD0_DADDR (* ((volatile uint32_t *) (0x40008000 + 0x1010 + 0 * 0x20)))
  #define DMA_TCD1_DADDR (* ((volatile uint32_t *) (0x40008000 + 0x1010 + 1 * 0x20)))
  #define DMA_TCD2_DADDR (* ((volatile uint32_t *) (0x40008000 + 0x1010 + 2 * 0x20)))
  #define DMA_TCD3_DADDR (* ((volatile uint32_t *) (0x40008000 + 0x1010 + 3 * 0x20)))
  #define DMA_TCD4_DADDR (* ((volatile uint32_t *) (0x40008000 + 0x1010 + 4 * 0x20)))
  #define DMA_TCD5_DADDR (* ((volatile uint32_t *) (0x40008000 + 0x1010 + 5 * 0x20)))
  #define DMA_TCD6_DADDR (* ((volatile uint32_t *) (0x40008000 + 0x1010 + 6 * 0x20)))
  #define DMA_TCD7_DADDR (* ((volatile uint32_t *) (0x40008000 + 0x1010 + 7 * 0x20)))
  #define DMA_TCD8_DADDR (* ((volatile uint32_t *) (0x40008000 + 0x1010 + 8 * 0x20)))
  #define DMA_TCD9_DADDR (* ((volatile uint32_t *) (0x40008000 + 0x1010 + 9 * 0x20)))
  #define DMA_TCD10_DADDR (* ((volatile uint32_t *) (0x40008000 + 0x1010 + 10 * 0x20)))
  #define DMA_TCD11_DADDR (* ((volatile uint32_t *) (0x40008000 + 0x1010 + 11 * 0x20)))
  #define DMA_TCD12_DADDR (* ((volatile uint32_t *) (0x40008000 + 0x1010 + 12 * 0x20)))
  #define DMA_TCD13_DADDR (* ((volatile uint32_t *) (0x40008000 + 0x1010 + 13 * 0x20)))
  #define DMA_TCD14_DADDR (* ((volatile uint32_t *) (0x40008000 + 0x1010 + 14 * 0x20)))
  #define DMA_TCD15_DADDR (* ((volatile uint32_t *) (0x40008000 + 0x1010 + 15 * 0x20)))

  // Field DADDR: Destination Address
    inline uint32_t DMA_TCD_DADDR_DADDR (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Registers TCD_DOFF(0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15): TCD Signed Destination Address Offset
  #define DMA_TCD_DOFF(idx) (* ((volatile uint16_t *) (0x40008000 + 0x1014 + (idx) * 0x20)))
  #define DMA_TCD0_DOFF (* ((volatile uint16_t *) (0x40008000 + 0x1014 + 0 * 0x20)))
  #define DMA_TCD1_DOFF (* ((volatile uint16_t *) (0x40008000 + 0x1014 + 1 * 0x20)))
  #define DMA_TCD2_DOFF (* ((volatile uint16_t *) (0x40008000 + 0x1014 + 2 * 0x20)))
  #define DMA_TCD3_DOFF (* ((volatile uint16_t *) (0x40008000 + 0x1014 + 3 * 0x20)))
  #define DMA_TCD4_DOFF (* ((volatile uint16_t *) (0x40008000 + 0x1014 + 4 * 0x20)))
  #define DMA_TCD5_DOFF (* ((volatile uint16_t *) (0x40008000 + 0x1014 + 5 * 0x20)))
  #define DMA_TCD6_DOFF (* ((volatile uint16_t *) (0x40008000 + 0x1014 + 6 * 0x20)))
  #define DMA_TCD7_DOFF (* ((volatile uint16_t *) (0x40008000 + 0x1014 + 7 * 0x20)))
  #define DMA_TCD8_DOFF (* ((volatile uint16_t *) (0x40008000 + 0x1014 + 8 * 0x20)))
  #define DMA_TCD9_DOFF (* ((volatile uint16_t *) (0x40008000 + 0x1014 + 9 * 0x20)))
  #define DMA_TCD10_DOFF (* ((volatile uint16_t *) (0x40008000 + 0x1014 + 10 * 0x20)))
  #define DMA_TCD11_DOFF (* ((volatile uint16_t *) (0x40008000 + 0x1014 + 11 * 0x20)))
  #define DMA_TCD12_DOFF (* ((volatile uint16_t *) (0x40008000 + 0x1014 + 12 * 0x20)))
  #define DMA_TCD13_DOFF (* ((volatile uint16_t *) (0x40008000 + 0x1014 + 13 * 0x20)))
  #define DMA_TCD14_DOFF (* ((volatile uint16_t *) (0x40008000 + 0x1014 + 14 * 0x20)))
  #define DMA_TCD15_DOFF (* ((volatile uint16_t *) (0x40008000 + 0x1014 + 15 * 0x20)))

  // Field DOFF: Destination Address Signed offset
    inline uint16_t DMA_TCD_DOFF_DOFF (const uint16_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Registers TCD_CITER_ELINKYES(0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15): TCD Current Minor Loop Link, Major Loop Count (Channel Linking Enabled)
  #define DMA_TCD_CITER_ELINKYES(idx) (* ((volatile uint16_t *) (0x40008000 + 0x1016 + (idx) * 0x20)))
  #define DMA_TCD0_CITER_ELINKYES (* ((volatile uint16_t *) (0x40008000 + 0x1016 + 0 * 0x20)))
  #define DMA_TCD1_CITER_ELINKYES (* ((volatile uint16_t *) (0x40008000 + 0x1016 + 1 * 0x20)))
  #define DMA_TCD2_CITER_ELINKYES (* ((volatile uint16_t *) (0x40008000 + 0x1016 + 2 * 0x20)))
  #define DMA_TCD3_CITER_ELINKYES (* ((volatile uint16_t *) (0x40008000 + 0x1016 + 3 * 0x20)))
  #define DMA_TCD4_CITER_ELINKYES (* ((volatile uint16_t *) (0x40008000 + 0x1016 + 4 * 0x20)))
  #define DMA_TCD5_CITER_ELINKYES (* ((volatile uint16_t *) (0x40008000 + 0x1016 + 5 * 0x20)))
  #define DMA_TCD6_CITER_ELINKYES (* ((volatile uint16_t *) (0x40008000 + 0x1016 + 6 * 0x20)))
  #define DMA_TCD7_CITER_ELINKYES (* ((volatile uint16_t *) (0x40008000 + 0x1016 + 7 * 0x20)))
  #define DMA_TCD8_CITER_ELINKYES (* ((volatile uint16_t *) (0x40008000 + 0x1016 + 8 * 0x20)))
  #define DMA_TCD9_CITER_ELINKYES (* ((volatile uint16_t *) (0x40008000 + 0x1016 + 9 * 0x20)))
  #define DMA_TCD10_CITER_ELINKYES (* ((volatile uint16_t *) (0x40008000 + 0x1016 + 10 * 0x20)))
  #define DMA_TCD11_CITER_ELINKYES (* ((volatile uint16_t *) (0x40008000 + 0x1016 + 11 * 0x20)))
  #define DMA_TCD12_CITER_ELINKYES (* ((volatile uint16_t *) (0x40008000 + 0x1016 + 12 * 0x20)))
  #define DMA_TCD13_CITER_ELINKYES (* ((volatile uint16_t *) (0x40008000 + 0x1016 + 13 * 0x20)))
  #define DMA_TCD14_CITER_ELINKYES (* ((volatile uint16_t *) (0x40008000 + 0x1016 + 14 * 0x20)))
  #define DMA_TCD15_CITER_ELINKYES (* ((volatile uint16_t *) (0x40008000 + 0x1016 + 15 * 0x20)))

  // Field CITER: Current Major Iteration Count
    inline uint16_t DMA_TCD_CITER_ELINKYES_CITER (const uint16_t inValue) {return (inValue & 0x1ffU) << 0 ; }

  // Field LINKCH: Link Channel Number
    inline uint16_t DMA_TCD_CITER_ELINKYES_LINKCH (const uint16_t inValue) {return (inValue & 0xfU) << 9 ; }

  // Field RESERVED: no description available
    inline uint16_t DMA_TCD_CITER_ELINKYES_RESERVED (const uint16_t inValue) {return (inValue & 0x3U) << 13 ; }

  // Field ELINK: Enable channel-to-channel linking on minor-loop complete
    const uint16_t DMA_TCD_CITER_ELINKYES_ELINK = 1U << 15 ;

//---  Registers TCD_CITER_ELINKNO(0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15): TCD Current Minor Loop Link, Major Loop Count (Channel Linking Disabled)
  #define DMA_TCD_CITER_ELINKNO(idx) (* ((volatile uint16_t *) (0x40008000 + 0x1016 + (idx) * 0x20)))
  #define DMA_TCD0_CITER_ELINKNO (* ((volatile uint16_t *) (0x40008000 + 0x1016 + 0 * 0x20)))
  #define DMA_TCD1_CITER_ELINKNO (* ((volatile uint16_t *) (0x40008000 + 0x1016 + 1 * 0x20)))
  #define DMA_TCD2_CITER_ELINKNO (* ((volatile uint16_t *) (0x40008000 + 0x1016 + 2 * 0x20)))
  #define DMA_TCD3_CITER_ELINKNO (* ((volatile uint16_t *) (0x40008000 + 0x1016 + 3 * 0x20)))
  #define DMA_TCD4_CITER_ELINKNO (* ((volatile uint16_t *) (0x40008000 + 0x1016 + 4 * 0x20)))
  #define DMA_TCD5_CITER_ELINKNO (* ((volatile uint16_t *) (0x40008000 + 0x1016 + 5 * 0x20)))
  #define DMA_TCD6_CITER_ELINKNO (* ((volatile uint16_t *) (0x40008000 + 0x1016 + 6 * 0x20)))
  #define DMA_TCD7_CITER_ELINKNO (* ((volatile uint16_t *) (0x40008000 + 0x1016 + 7 * 0x20)))
  #define DMA_TCD8_CITER_ELINKNO (* ((volatile uint16_t *) (0x40008000 + 0x1016 + 8 * 0x20)))
  #define DMA_TCD9_CITER_ELINKNO (* ((volatile uint16_t *) (0x40008000 + 0x1016 + 9 * 0x20)))
  #define DMA_TCD10_CITER_ELINKNO (* ((volatile uint16_t *) (0x40008000 + 0x1016 + 10 * 0x20)))
  #define DMA_TCD11_CITER_ELINKNO (* ((volatile uint16_t *) (0x40008000 + 0x1016 + 11 * 0x20)))
  #define DMA_TCD12_CITER_ELINKNO (* ((volatile uint16_t *) (0x40008000 + 0x1016 + 12 * 0x20)))
  #define DMA_TCD13_CITER_ELINKNO (* ((volatile uint16_t *) (0x40008000 + 0x1016 + 13 * 0x20)))
  #define DMA_TCD14_CITER_ELINKNO (* ((volatile uint16_t *) (0x40008000 + 0x1016 + 14 * 0x20)))
  #define DMA_TCD15_CITER_ELINKNO (* ((volatile uint16_t *) (0x40008000 + 0x1016 + 15 * 0x20)))

  // Field CITER: Current Major Iteration Count
    inline uint16_t DMA_TCD_CITER_ELINKNO_CITER (const uint16_t inValue) {return (inValue & 0x7fffU) << 0 ; }

  // Field ELINK: Enable channel-to-channel linking on minor-loop complete
    const uint16_t DMA_TCD_CITER_ELINKNO_ELINK = 1U << 15 ;

//---  Registers TCD_DLASTSGA(0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15): TCD Last Destination Address Adjustment/Scatter Gather Address
  #define DMA_TCD_DLASTSGA(idx) (* ((volatile uint32_t *) (0x40008000 + 0x1018 + (idx) * 0x20)))
  #define DMA_TCD0_DLASTSGA (* ((volatile uint32_t *) (0x40008000 + 0x1018 + 0 * 0x20)))
  #define DMA_TCD1_DLASTSGA (* ((volatile uint32_t *) (0x40008000 + 0x1018 + 1 * 0x20)))
  #define DMA_TCD2_DLASTSGA (* ((volatile uint32_t *) (0x40008000 + 0x1018 + 2 * 0x20)))
  #define DMA_TCD3_DLASTSGA (* ((volatile uint32_t *) (0x40008000 + 0x1018 + 3 * 0x20)))
  #define DMA_TCD4_DLASTSGA (* ((volatile uint32_t *) (0x40008000 + 0x1018 + 4 * 0x20)))
  #define DMA_TCD5_DLASTSGA (* ((volatile uint32_t *) (0x40008000 + 0x1018 + 5 * 0x20)))
  #define DMA_TCD6_DLASTSGA (* ((volatile uint32_t *) (0x40008000 + 0x1018 + 6 * 0x20)))
  #define DMA_TCD7_DLASTSGA (* ((volatile uint32_t *) (0x40008000 + 0x1018 + 7 * 0x20)))
  #define DMA_TCD8_DLASTSGA (* ((volatile uint32_t *) (0x40008000 + 0x1018 + 8 * 0x20)))
  #define DMA_TCD9_DLASTSGA (* ((volatile uint32_t *) (0x40008000 + 0x1018 + 9 * 0x20)))
  #define DMA_TCD10_DLASTSGA (* ((volatile uint32_t *) (0x40008000 + 0x1018 + 10 * 0x20)))
  #define DMA_TCD11_DLASTSGA (* ((volatile uint32_t *) (0x40008000 + 0x1018 + 11 * 0x20)))
  #define DMA_TCD12_DLASTSGA (* ((volatile uint32_t *) (0x40008000 + 0x1018 + 12 * 0x20)))
  #define DMA_TCD13_DLASTSGA (* ((volatile uint32_t *) (0x40008000 + 0x1018 + 13 * 0x20)))
  #define DMA_TCD14_DLASTSGA (* ((volatile uint32_t *) (0x40008000 + 0x1018 + 14 * 0x20)))
  #define DMA_TCD15_DLASTSGA (* ((volatile uint32_t *) (0x40008000 + 0x1018 + 15 * 0x20)))

  // Field DLASTSGA: no description available
    inline uint32_t DMA_TCD_DLASTSGA_DLASTSGA (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Registers TCD_CSR(0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15): TCD Control and Status
  #define DMA_TCD_CSR(idx) (* ((volatile uint16_t *) (0x40008000 + 0x101c + (idx) * 0x20)))
  #define DMA_TCD0_CSR (* ((volatile uint16_t *) (0x40008000 + 0x101c + 0 * 0x20)))
  #define DMA_TCD1_CSR (* ((volatile uint16_t *) (0x40008000 + 0x101c + 1 * 0x20)))
  #define DMA_TCD2_CSR (* ((volatile uint16_t *) (0x40008000 + 0x101c + 2 * 0x20)))
  #define DMA_TCD3_CSR (* ((volatile uint16_t *) (0x40008000 + 0x101c + 3 * 0x20)))
  #define DMA_TCD4_CSR (* ((volatile uint16_t *) (0x40008000 + 0x101c + 4 * 0x20)))
  #define DMA_TCD5_CSR (* ((volatile uint16_t *) (0x40008000 + 0x101c + 5 * 0x20)))
  #define DMA_TCD6_CSR (* ((volatile uint16_t *) (0x40008000 + 0x101c + 6 * 0x20)))
  #define DMA_TCD7_CSR (* ((volatile uint16_t *) (0x40008000 + 0x101c + 7 * 0x20)))
  #define DMA_TCD8_CSR (* ((volatile uint16_t *) (0x40008000 + 0x101c + 8 * 0x20)))
  #define DMA_TCD9_CSR (* ((volatile uint16_t *) (0x40008000 + 0x101c + 9 * 0x20)))
  #define DMA_TCD10_CSR (* ((volatile uint16_t *) (0x40008000 + 0x101c + 10 * 0x20)))
  #define DMA_TCD11_CSR (* ((volatile uint16_t *) (0x40008000 + 0x101c + 11 * 0x20)))
  #define DMA_TCD12_CSR (* ((volatile uint16_t *) (0x40008000 + 0x101c + 12 * 0x20)))
  #define DMA_TCD13_CSR (* ((volatile uint16_t *) (0x40008000 + 0x101c + 13 * 0x20)))
  #define DMA_TCD14_CSR (* ((volatile uint16_t *) (0x40008000 + 0x101c + 14 * 0x20)))
  #define DMA_TCD15_CSR (* ((volatile uint16_t *) (0x40008000 + 0x101c + 15 * 0x20)))

  // Field START: Channel Start
    const uint16_t DMA_TCD_CSR_START = 1U << 0 ;

  // Field INTMAJOR: Enable an interrupt when major iteration count completes
    const uint16_t DMA_TCD_CSR_INTMAJOR = 1U << 1 ;

  // Field INTHALF: Enable an interrupt when major counter is half complete.
    const uint16_t DMA_TCD_CSR_INTHALF = 1U << 2 ;

  // Field DREQ: Disable Request
    const uint16_t DMA_TCD_CSR_DREQ = 1U << 3 ;

  // Field ESG: Enable Scatter/Gather Processing
    const uint16_t DMA_TCD_CSR_ESG = 1U << 4 ;

  // Field MAJORELINK: Enable channel-to-channel linking on major loop complete
    const uint16_t DMA_TCD_CSR_MAJORELINK = 1U << 5 ;

  // Field ACTIVE: Channel Active
    const uint16_t DMA_TCD_CSR_ACTIVE = 1U << 6 ;

  // Field DONE: Channel Done
    const uint16_t DMA_TCD_CSR_DONE = 1U << 7 ;

  // Field MAJORLINKCH: Link Channel Number
    inline uint16_t DMA_TCD_CSR_MAJORLINKCH (const uint16_t inValue) {return (inValue & 0xfU) << 8 ; }

  // Field RESERVED: no description available
    inline uint16_t DMA_TCD_CSR_RESERVED (const uint16_t inValue) {return (inValue & 0x3U) << 12 ; }

  // Field BWC: Bandwidth Control
    inline uint16_t DMA_TCD_CSR_BWC (const uint16_t inValue) {return (inValue & 0x3U) << 14 ; }

//---  Registers TCD_BITER_ELINKYES(0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15): TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Enabled)
  #define DMA_TCD_BITER_ELINKYES(idx) (* ((volatile uint16_t *) (0x40008000 + 0x101e + (idx) * 0x20)))
  #define DMA_TCD0_BITER_ELINKYES (* ((volatile uint16_t *) (0x40008000 + 0x101e + 0 * 0x20)))
  #define DMA_TCD1_BITER_ELINKYES (* ((volatile uint16_t *) (0x40008000 + 0x101e + 1 * 0x20)))
  #define DMA_TCD2_BITER_ELINKYES (* ((volatile uint16_t *) (0x40008000 + 0x101e + 2 * 0x20)))
  #define DMA_TCD3_BITER_ELINKYES (* ((volatile uint16_t *) (0x40008000 + 0x101e + 3 * 0x20)))
  #define DMA_TCD4_BITER_ELINKYES (* ((volatile uint16_t *) (0x40008000 + 0x101e + 4 * 0x20)))
  #define DMA_TCD5_BITER_ELINKYES (* ((volatile uint16_t *) (0x40008000 + 0x101e + 5 * 0x20)))
  #define DMA_TCD6_BITER_ELINKYES (* ((volatile uint16_t *) (0x40008000 + 0x101e + 6 * 0x20)))
  #define DMA_TCD7_BITER_ELINKYES (* ((volatile uint16_t *) (0x40008000 + 0x101e + 7 * 0x20)))
  #define DMA_TCD8_BITER_ELINKYES (* ((volatile uint16_t *) (0x40008000 + 0x101e + 8 * 0x20)))
  #define DMA_TCD9_BITER_ELINKYES (* ((volatile uint16_t *) (0x40008000 + 0x101e + 9 * 0x20)))
  #define DMA_TCD10_BITER_ELINKYES (* ((volatile uint16_t *) (0x40008000 + 0x101e + 10 * 0x20)))
  #define DMA_TCD11_BITER_ELINKYES (* ((volatile uint16_t *) (0x40008000 + 0x101e + 11 * 0x20)))
  #define DMA_TCD12_BITER_ELINKYES (* ((volatile uint16_t *) (0x40008000 + 0x101e + 12 * 0x20)))
  #define DMA_TCD13_BITER_ELINKYES (* ((volatile uint16_t *) (0x40008000 + 0x101e + 13 * 0x20)))
  #define DMA_TCD14_BITER_ELINKYES (* ((volatile uint16_t *) (0x40008000 + 0x101e + 14 * 0x20)))
  #define DMA_TCD15_BITER_ELINKYES (* ((volatile uint16_t *) (0x40008000 + 0x101e + 15 * 0x20)))

  // Field BITER: Starting Major Iteration Count
    inline uint16_t DMA_TCD_BITER_ELINKYES_BITER (const uint16_t inValue) {return (inValue & 0x1ffU) << 0 ; }

  // Field LINKCH: Link Channel Number
    inline uint16_t DMA_TCD_BITER_ELINKYES_LINKCH (const uint16_t inValue) {return (inValue & 0xfU) << 9 ; }

  // Field RESERVED: no description available
    inline uint16_t DMA_TCD_BITER_ELINKYES_RESERVED (const uint16_t inValue) {return (inValue & 0x3U) << 13 ; }

  // Field ELINK: Enables channel-to-channel linking on minor loop complete
    const uint16_t DMA_TCD_BITER_ELINKYES_ELINK = 1U << 15 ;

//---  Registers TCD_BITER_ELINKNO(0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15): TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Disabled)
  #define DMA_TCD_BITER_ELINKNO(idx) (* ((volatile uint16_t *) (0x40008000 + 0x101e + (idx) * 0x20)))
  #define DMA_TCD0_BITER_ELINKNO (* ((volatile uint16_t *) (0x40008000 + 0x101e + 0 * 0x20)))
  #define DMA_TCD1_BITER_ELINKNO (* ((volatile uint16_t *) (0x40008000 + 0x101e + 1 * 0x20)))
  #define DMA_TCD2_BITER_ELINKNO (* ((volatile uint16_t *) (0x40008000 + 0x101e + 2 * 0x20)))
  #define DMA_TCD3_BITER_ELINKNO (* ((volatile uint16_t *) (0x40008000 + 0x101e + 3 * 0x20)))
  #define DMA_TCD4_BITER_ELINKNO (* ((volatile uint16_t *) (0x40008000 + 0x101e + 4 * 0x20)))
  #define DMA_TCD5_BITER_ELINKNO (* ((volatile uint16_t *) (0x40008000 + 0x101e + 5 * 0x20)))
  #define DMA_TCD6_BITER_ELINKNO (* ((volatile uint16_t *) (0x40008000 + 0x101e + 6 * 0x20)))
  #define DMA_TCD7_BITER_ELINKNO (* ((volatile uint16_t *) (0x40008000 + 0x101e + 7 * 0x20)))
  #define DMA_TCD8_BITER_ELINKNO (* ((volatile uint16_t *) (0x40008000 + 0x101e + 8 * 0x20)))
  #define DMA_TCD9_BITER_ELINKNO (* ((volatile uint16_t *) (0x40008000 + 0x101e + 9 * 0x20)))
  #define DMA_TCD10_BITER_ELINKNO (* ((volatile uint16_t *) (0x40008000 + 0x101e + 10 * 0x20)))
  #define DMA_TCD11_BITER_ELINKNO (* ((volatile uint16_t *) (0x40008000 + 0x101e + 11 * 0x20)))
  #define DMA_TCD12_BITER_ELINKNO (* ((volatile uint16_t *) (0x40008000 + 0x101e + 12 * 0x20)))
  #define DMA_TCD13_BITER_ELINKNO (* ((volatile uint16_t *) (0x40008000 + 0x101e + 13 * 0x20)))
  #define DMA_TCD14_BITER_ELINKNO (* ((volatile uint16_t *) (0x40008000 + 0x101e + 14 * 0x20)))
  #define DMA_TCD15_BITER_ELINKNO (* ((volatile uint16_t *) (0x40008000 + 0x101e + 15 * 0x20)))

  // Field BITER: Starting Major Iteration Count
    inline uint16_t DMA_TCD_BITER_ELINKNO_BITER (const uint16_t inValue) {return (inValue & 0x7fffU) << 0 ; }

  // Field ELINK: Enables channel-to-channel linking on minor loop complete
    const uint16_t DMA_TCD_BITER_ELINKNO_ELINK = 1U << 15 ;

//------------------------------------------------------------------------------
// Peripheral DMAMUX: DMA channel multiplexor
//------------------------------------------------------------------------------

//---  Registers CHCFG(0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15): Channel Configuration Register
  #define DMAMUX_CHCFG(idx) (* ((volatile uint8_t *) (0x40021000 + 0x0 + (idx) * 0x1)))
  #define DMAMUX_CHCFG0 (* ((volatile uint8_t *) (0x40021000 + 0x0 + 0 * 0x1)))
  #define DMAMUX_CHCFG1 (* ((volatile uint8_t *) (0x40021000 + 0x0 + 1 * 0x1)))
  #define DMAMUX_CHCFG2 (* ((volatile uint8_t *) (0x40021000 + 0x0 + 2 * 0x1)))
  #define DMAMUX_CHCFG3 (* ((volatile uint8_t *) (0x40021000 + 0x0 + 3 * 0x1)))
  #define DMAMUX_CHCFG4 (* ((volatile uint8_t *) (0x40021000 + 0x0 + 4 * 0x1)))
  #define DMAMUX_CHCFG5 (* ((volatile uint8_t *) (0x40021000 + 0x0 + 5 * 0x1)))
  #define DMAMUX_CHCFG6 (* ((volatile uint8_t *) (0x40021000 + 0x0 + 6 * 0x1)))
  #define DMAMUX_CHCFG7 (* ((volatile uint8_t *) (0x40021000 + 0x0 + 7 * 0x1)))
  #define DMAMUX_CHCFG8 (* ((volatile uint8_t *) (0x40021000 + 0x0 + 8 * 0x1)))
  #define DMAMUX_CHCFG9 (* ((volatile uint8_t *) (0x40021000 + 0x0 + 9 * 0x1)))
  #define DMAMUX_CHCFG10 (* ((volatile uint8_t *) (0x40021000 + 0x0 + 10 * 0x1)))
  #define DMAMUX_CHCFG11 (* ((volatile uint8_t *) (0x40021000 + 0x0 + 11 * 0x1)))
  #define DMAMUX_CHCFG12 (* ((volatile uint8_t *) (0x40021000 + 0x0 + 12 * 0x1)))
  #define DMAMUX_CHCFG13 (* ((volatile uint8_t *) (0x40021000 + 0x0 + 13 * 0x1)))
  #define DMAMUX_CHCFG14 (* ((volatile uint8_t *) (0x40021000 + 0x0 + 14 * 0x1)))
  #define DMAMUX_CHCFG15 (* ((volatile uint8_t *) (0x40021000 + 0x0 + 15 * 0x1)))

  // Field SOURCE: DMA Channel Source (slot)
    inline uint8_t DMAMUX_CHCFG_SOURCE (const uint8_t inValue) {return (inValue & 0x3fU) << 0 ; }

  // Field TRIG: DMA Channel Trigger Enable
    const uint8_t DMAMUX_CHCFG_TRIG = 1U << 6 ;

  // Field ENBL: DMA Channel Enable
    const uint8_t DMAMUX_CHCFG_ENBL = 1U << 7 ;

//------------------------------------------------------------------------------
// Peripheral EWM: External Watchdog Monitor
//------------------------------------------------------------------------------

//---  Register CTRL: Control Register
  #define EWM_CTRL (* ((volatile uint8_t *) (0x40061000 + 0)))

  // Field EWMEN: EWM enable.
    const uint8_t EWM_CTRL_EWMEN = 1U << 0 ;

  // Field ASSIN: EWM_in's Assertion State Select.
    const uint8_t EWM_CTRL_ASSIN = 1U << 1 ;

  // Field INEN: Input Enable.
    const uint8_t EWM_CTRL_INEN = 1U << 2 ;

  // Field INTEN: Interrupt Enable.
    const uint8_t EWM_CTRL_INTEN = 1U << 3 ;

  // Field RESERVED: no description available
    inline uint8_t EWM_CTRL_RESERVED (const uint8_t inValue) {return (inValue & 0xfU) << 4 ; }

//---  Register SERV: Service Register
  #define EWM_SERV (* ((volatile uint8_t *) (0x40061000 + 1)))

  // Field SERVICE: no description available
    inline uint8_t EWM_SERV_SERVICE (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register CMPL: Compare Low Register
  #define EWM_CMPL (* ((volatile uint8_t *) (0x40061000 + 2)))

  // Field COMPAREL: no description available
    inline uint8_t EWM_CMPL_COMPAREL (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register CMPH: Compare High Register
  #define EWM_CMPH (* ((volatile uint8_t *) (0x40061000 + 3)))

  // Field COMPAREH: no description available
    inline uint8_t EWM_CMPH_COMPAREH (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//------------------------------------------------------------------------------
// Peripheral FB: FlexBus external bus interface
//------------------------------------------------------------------------------

//---  Registers CSAR(0,1,2,3,4,5): Chip select address register
  #define FB_CSAR(idx) (* ((volatile uint32_t *) (0x4000c000 + 0x0 + (idx) * 0xc)))
  #define FB_CSAR0 (* ((volatile uint32_t *) (0x4000c000 + 0x0 + 0 * 0xc)))
  #define FB_CSAR1 (* ((volatile uint32_t *) (0x4000c000 + 0x0 + 1 * 0xc)))
  #define FB_CSAR2 (* ((volatile uint32_t *) (0x4000c000 + 0x0 + 2 * 0xc)))
  #define FB_CSAR3 (* ((volatile uint32_t *) (0x4000c000 + 0x0 + 3 * 0xc)))
  #define FB_CSAR4 (* ((volatile uint32_t *) (0x4000c000 + 0x0 + 4 * 0xc)))
  #define FB_CSAR5 (* ((volatile uint32_t *) (0x4000c000 + 0x0 + 5 * 0xc)))

  // Field RESERVED: no description available
    inline uint32_t FB_CSAR_RESERVED (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

  // Field BA: Base address
    inline uint32_t FB_CSAR_BA (const uint32_t inValue) {return (inValue & 0xffffU) << 16 ; }

//---  Registers CSMR(0,1,2,3,4,5): Chip select mask register
  #define FB_CSMR(idx) (* ((volatile uint32_t *) (0x4000c000 + 0x4 + (idx) * 0xc)))
  #define FB_CSMR0 (* ((volatile uint32_t *) (0x4000c000 + 0x4 + 0 * 0xc)))
  #define FB_CSMR1 (* ((volatile uint32_t *) (0x4000c000 + 0x4 + 1 * 0xc)))
  #define FB_CSMR2 (* ((volatile uint32_t *) (0x4000c000 + 0x4 + 2 * 0xc)))
  #define FB_CSMR3 (* ((volatile uint32_t *) (0x4000c000 + 0x4 + 3 * 0xc)))
  #define FB_CSMR4 (* ((volatile uint32_t *) (0x4000c000 + 0x4 + 4 * 0xc)))
  #define FB_CSMR5 (* ((volatile uint32_t *) (0x4000c000 + 0x4 + 5 * 0xc)))

  // Field V: Valid
    const uint32_t FB_CSMR_V = 1U << 0 ;

  // Field RESERVED: no description available
    inline uint32_t FB_CSMR_RESERVED (const uint32_t inValue) {return (inValue & 0x7fU) << 1 ; }

  // Field WP: Write protect
    const uint32_t FB_CSMR_WP = 1U << 8 ;

  // Field RESERVED: no description available
    inline uint32_t FB_CSMR_RESERVED (const uint32_t inValue) {return (inValue & 0x7fU) << 9 ; }

  // Field BAM: Base address mask
    inline uint32_t FB_CSMR_BAM (const uint32_t inValue) {return (inValue & 0xffffU) << 16 ; }

//---  Registers CSCR(0,1,2,3,4,5): Chip select control register
  #define FB_CSCR(idx) (* ((volatile uint32_t *) (0x4000c000 + 0x8 + (idx) * 0xc)))
  #define FB_CSCR0 (* ((volatile uint32_t *) (0x4000c000 + 0x8 + 0 * 0xc)))
  #define FB_CSCR1 (* ((volatile uint32_t *) (0x4000c000 + 0x8 + 1 * 0xc)))
  #define FB_CSCR2 (* ((volatile uint32_t *) (0x4000c000 + 0x8 + 2 * 0xc)))
  #define FB_CSCR3 (* ((volatile uint32_t *) (0x4000c000 + 0x8 + 3 * 0xc)))
  #define FB_CSCR4 (* ((volatile uint32_t *) (0x4000c000 + 0x8 + 4 * 0xc)))
  #define FB_CSCR5 (* ((volatile uint32_t *) (0x4000c000 + 0x8 + 5 * 0xc)))

  // Field RESERVED: no description available
    inline uint32_t FB_CSCR_RESERVED (const uint32_t inValue) {return (inValue & 0x7U) << 0 ; }

  // Field BSTW: Burst-write enable
    const uint32_t FB_CSCR_BSTW = 1U << 3 ;

  // Field BSTR: Burst-read enable
    const uint32_t FB_CSCR_BSTR = 1U << 4 ;

  // Field BEM: Byte-enable mode
    const uint32_t FB_CSCR_BEM = 1U << 5 ;

  // Field PS: Port size
    inline uint32_t FB_CSCR_PS (const uint32_t inValue) {return (inValue & 0x3U) << 6 ; }

  // Field AA: Auto-acknowledge enable
    const uint32_t FB_CSCR_AA = 1U << 8 ;

  // Field BLS: Byte-lane shift
    const uint32_t FB_CSCR_BLS = 1U << 9 ;

  // Field WS: Wait states
    inline uint32_t FB_CSCR_WS (const uint32_t inValue) {return (inValue & 0x3fU) << 10 ; }

  // Field WRAH: Write address hold or deselect
    inline uint32_t FB_CSCR_WRAH (const uint32_t inValue) {return (inValue & 0x3U) << 16 ; }

  // Field RDAH: Read address hold or deselect
    inline uint32_t FB_CSCR_RDAH (const uint32_t inValue) {return (inValue & 0x3U) << 18 ; }

  // Field ASET: Address setup
    inline uint32_t FB_CSCR_ASET (const uint32_t inValue) {return (inValue & 0x3U) << 20 ; }

  // Field EXTS: no description available
    const uint32_t FB_CSCR_EXTS = 1U << 22 ;

  // Field SWSEN: Secondary wait state enable
    const uint32_t FB_CSCR_SWSEN = 1U << 23 ;

  // Field RESERVED: no description available
    inline uint32_t FB_CSCR_RESERVED (const uint32_t inValue) {return (inValue & 0x3U) << 24 ; }

  // Field SWS: Secondary wait states
    inline uint32_t FB_CSCR_SWS (const uint32_t inValue) {return (inValue & 0x3fU) << 26 ; }

//---  Register CSPMCR: Chip select port multiplexing control register
  #define FB_CSPMCR (* ((volatile uint32_t *) (0x4000c000 + 96)))

  // Field RESERVED: no description available
    inline uint32_t FB_CSPMCR_RESERVED (const uint32_t inValue) {return (inValue & 0xfffU) << 0 ; }

  // Field GROUP5: FlexBus signal group 5 multiplex control
    inline uint32_t FB_CSPMCR_GROUP5 (const uint32_t inValue) {return (inValue & 0xfU) << 12 ; }

  // Field GROUP4: FlexBus signal group 4 multiplex control
    inline uint32_t FB_CSPMCR_GROUP4 (const uint32_t inValue) {return (inValue & 0xfU) << 16 ; }

  // Field GROUP3: FlexBus signal group 3 multiplex control
    inline uint32_t FB_CSPMCR_GROUP3 (const uint32_t inValue) {return (inValue & 0xfU) << 20 ; }

  // Field GROUP2: FlexBus signal group 2 multiplex control
    inline uint32_t FB_CSPMCR_GROUP2 (const uint32_t inValue) {return (inValue & 0xfU) << 24 ; }

  // Field GROUP1: FlexBus signal group 1 multiplex control
    inline uint32_t FB_CSPMCR_GROUP1 (const uint32_t inValue) {return (inValue & 0xfU) << 28 ; }

//------------------------------------------------------------------------------
// Peripheral FMC: Flash Memory Controller
//------------------------------------------------------------------------------

//---  Register PFAPR: Flash Access Protection Register
  #define FMC_PFAPR (* ((volatile uint32_t *) (0x4001f000 + 0)))

  // Field M0AP: Master 0 Access Protection
    inline uint32_t FMC_PFAPR_M0AP (const uint32_t inValue) {return (inValue & 0x3U) << 0 ; }

  // Field M1AP: Master 1 Access Protection
    inline uint32_t FMC_PFAPR_M1AP (const uint32_t inValue) {return (inValue & 0x3U) << 2 ; }

  // Field M2AP: Master 2 Access Protection
    inline uint32_t FMC_PFAPR_M2AP (const uint32_t inValue) {return (inValue & 0x3U) << 4 ; }

  // Field M3AP: Master 3 Access Protection
    inline uint32_t FMC_PFAPR_M3AP (const uint32_t inValue) {return (inValue & 0x3U) << 6 ; }

  // Field M4AP: Master 4 Access Protection
    inline uint32_t FMC_PFAPR_M4AP (const uint32_t inValue) {return (inValue & 0x3U) << 8 ; }

  // Field M5AP: Master 5 Access Protection
    inline uint32_t FMC_PFAPR_M5AP (const uint32_t inValue) {return (inValue & 0x3U) << 10 ; }

  // Field M6AP: Master 6 Access Protection
    inline uint32_t FMC_PFAPR_M6AP (const uint32_t inValue) {return (inValue & 0x3U) << 12 ; }

  // Field M7AP: Master 7 Access Protection
    inline uint32_t FMC_PFAPR_M7AP (const uint32_t inValue) {return (inValue & 0x3U) << 14 ; }

  // Field M0PFD: Master 0 Prefetch Disable
    const uint32_t FMC_PFAPR_M0PFD = 1U << 16 ;

  // Field M1PFD: Master 1 Prefetch Disable
    const uint32_t FMC_PFAPR_M1PFD = 1U << 17 ;

  // Field M2PFD: Master 2 Prefetch Disable
    const uint32_t FMC_PFAPR_M2PFD = 1U << 18 ;

  // Field M3PFD: Master 3 Prefetch Disable
    const uint32_t FMC_PFAPR_M3PFD = 1U << 19 ;

  // Field M4PFD: Master 4 Prefetch Disable
    const uint32_t FMC_PFAPR_M4PFD = 1U << 20 ;

  // Field M5PFD: Master 5 Prefetch Disable
    const uint32_t FMC_PFAPR_M5PFD = 1U << 21 ;

  // Field M6PFD: Master 6 Prefetch Disable
    const uint32_t FMC_PFAPR_M6PFD = 1U << 22 ;

  // Field M7PFD: Master 7 Prefetch Disable
    const uint32_t FMC_PFAPR_M7PFD = 1U << 23 ;

  // Field RESERVED: no description available
    inline uint32_t FMC_PFAPR_RESERVED (const uint32_t inValue) {return (inValue & 0xffU) << 24 ; }

//---  Register PFB0CR: Flash Bank 0 Control Register
  #define FMC_PFB0CR (* ((volatile uint32_t *) (0x4001f000 + 4)))

  // Field B0SEBE: Bank 0 Single Entry Buffer Enable
    const uint32_t FMC_PFB0CR_B0SEBE = 1U << 0 ;

  // Field B0IPE: Bank 0 Instruction Prefetch Enable
    const uint32_t FMC_PFB0CR_B0IPE = 1U << 1 ;

  // Field B0DPE: Bank 0 Data Prefetch Enable
    const uint32_t FMC_PFB0CR_B0DPE = 1U << 2 ;

  // Field B0ICE: Bank 0 Instruction Cache Enable
    const uint32_t FMC_PFB0CR_B0ICE = 1U << 3 ;

  // Field B0DCE: Bank 0 Data Cache Enable
    const uint32_t FMC_PFB0CR_B0DCE = 1U << 4 ;

  // Field CRC: Cache Replacement Control
    inline uint32_t FMC_PFB0CR_CRC (const uint32_t inValue) {return (inValue & 0x7U) << 5 ; }

  // Field RESERVED: no description available
    inline uint32_t FMC_PFB0CR_RESERVED (const uint32_t inValue) {return (inValue & 0xffU) << 8 ; }

  // Field RESERVED: no description available
    const uint32_t FMC_PFB0CR_RESERVED = 1U << 16 ;

  // Field B0MW: Bank 0 Memory Width
    inline uint32_t FMC_PFB0CR_B0MW (const uint32_t inValue) {return (inValue & 0x3U) << 17 ; }

  // Field S_B_INV: Invalidate Prefetch Speculation Buffer
    const uint32_t FMC_PFB0CR_S_B_INV = 1U << 19 ;

  // Field CINV_WAY: Cache Invalidate Way x
    inline uint32_t FMC_PFB0CR_CINV_WAY (const uint32_t inValue) {return (inValue & 0xfU) << 20 ; }

  // Field CLCK_WAY: Cache Lock Way x
    inline uint32_t FMC_PFB0CR_CLCK_WAY (const uint32_t inValue) {return (inValue & 0xfU) << 24 ; }

  // Field B0RWSC: Bank 0 Read Wait State Control
    inline uint32_t FMC_PFB0CR_B0RWSC (const uint32_t inValue) {return (inValue & 0xfU) << 28 ; }

//---  Register PFB1CR: Flash Bank 1 Control Register
  #define FMC_PFB1CR (* ((volatile uint32_t *) (0x4001f000 + 8)))

  // Field B1SEBE: Bank 1 Single Entry Buffer Enable
    const uint32_t FMC_PFB1CR_B1SEBE = 1U << 0 ;

  // Field B1IPE: Bank 1 Instruction Prefetch Enable
    const uint32_t FMC_PFB1CR_B1IPE = 1U << 1 ;

  // Field B1DPE: Bank 1 Data Prefetch Enable
    const uint32_t FMC_PFB1CR_B1DPE = 1U << 2 ;

  // Field B1ICE: Bank 1 Instruction Cache Enable
    const uint32_t FMC_PFB1CR_B1ICE = 1U << 3 ;

  // Field B1DCE: Bank 1 Data Cache Enable
    const uint32_t FMC_PFB1CR_B1DCE = 1U << 4 ;

  // Field RESERVED: no description available
    inline uint32_t FMC_PFB1CR_RESERVED (const uint32_t inValue) {return (inValue & 0x7U) << 5 ; }

  // Field RESERVED: no description available
    inline uint32_t FMC_PFB1CR_RESERVED (const uint32_t inValue) {return (inValue & 0xffU) << 8 ; }

  // Field RESERVED: no description available
    const uint32_t FMC_PFB1CR_RESERVED = 1U << 16 ;

  // Field B1MW: Bank 1 Memory Width
    inline uint32_t FMC_PFB1CR_B1MW (const uint32_t inValue) {return (inValue & 0x3U) << 17 ; }

  // Field RESERVED: no description available
    inline uint32_t FMC_PFB1CR_RESERVED (const uint32_t inValue) {return (inValue & 0x1ffU) << 19 ; }

  // Field B1RWSC: Bank 1 Read Wait State Control
    inline uint32_t FMC_PFB1CR_B1RWSC (const uint32_t inValue) {return (inValue & 0xfU) << 28 ; }

//---  Registers TAGVDW0S(0,1,2,3,4,5,6,7): Cache Tag Storage
  #define FMC_TAGVDW0S(idx) (* ((volatile uint32_t *) (0x4001f000 + 0x100 + (idx) * 0x4)))
  #define FMC_TAGVDW0S0 (* ((volatile uint32_t *) (0x4001f000 + 0x100 + 0 * 0x4)))
  #define FMC_TAGVDW0S1 (* ((volatile uint32_t *) (0x4001f000 + 0x100 + 1 * 0x4)))
  #define FMC_TAGVDW0S2 (* ((volatile uint32_t *) (0x4001f000 + 0x100 + 2 * 0x4)))
  #define FMC_TAGVDW0S3 (* ((volatile uint32_t *) (0x4001f000 + 0x100 + 3 * 0x4)))
  #define FMC_TAGVDW0S4 (* ((volatile uint32_t *) (0x4001f000 + 0x100 + 4 * 0x4)))
  #define FMC_TAGVDW0S5 (* ((volatile uint32_t *) (0x4001f000 + 0x100 + 5 * 0x4)))
  #define FMC_TAGVDW0S6 (* ((volatile uint32_t *) (0x4001f000 + 0x100 + 6 * 0x4)))
  #define FMC_TAGVDW0S7 (* ((volatile uint32_t *) (0x4001f000 + 0x100 + 7 * 0x4)))

  // Field valid: 1-bit valid for cache entry
    const uint32_t FMC_TAGVDW0S_valid = 1U << 0 ;

  // Field RESERVED: no description available
    inline uint32_t FMC_TAGVDW0S_RESERVED (const uint32_t inValue) {return (inValue & 0x1fU) << 1 ; }

  // Field tag: 13-bit tag for cache entry
    inline uint32_t FMC_TAGVDW0S_tag (const uint32_t inValue) {return (inValue & 0x1fffU) << 6 ; }

  // Field RESERVED: no description available
    inline uint32_t FMC_TAGVDW0S_RESERVED (const uint32_t inValue) {return (inValue & 0x1fffU) << 19 ; }

//---  Registers TAGVDW1S(0,1,2,3,4,5,6,7): Cache Tag Storage
  #define FMC_TAGVDW1S(idx) (* ((volatile uint32_t *) (0x4001f000 + 0x120 + (idx) * 0x4)))
  #define FMC_TAGVDW1S0 (* ((volatile uint32_t *) (0x4001f000 + 0x120 + 0 * 0x4)))
  #define FMC_TAGVDW1S1 (* ((volatile uint32_t *) (0x4001f000 + 0x120 + 1 * 0x4)))
  #define FMC_TAGVDW1S2 (* ((volatile uint32_t *) (0x4001f000 + 0x120 + 2 * 0x4)))
  #define FMC_TAGVDW1S3 (* ((volatile uint32_t *) (0x4001f000 + 0x120 + 3 * 0x4)))
  #define FMC_TAGVDW1S4 (* ((volatile uint32_t *) (0x4001f000 + 0x120 + 4 * 0x4)))
  #define FMC_TAGVDW1S5 (* ((volatile uint32_t *) (0x4001f000 + 0x120 + 5 * 0x4)))
  #define FMC_TAGVDW1S6 (* ((volatile uint32_t *) (0x4001f000 + 0x120 + 6 * 0x4)))
  #define FMC_TAGVDW1S7 (* ((volatile uint32_t *) (0x4001f000 + 0x120 + 7 * 0x4)))

  // Field valid: 1-bit valid for cache entry
    const uint32_t FMC_TAGVDW1S_valid = 1U << 0 ;

  // Field RESERVED: no description available
    inline uint32_t FMC_TAGVDW1S_RESERVED (const uint32_t inValue) {return (inValue & 0x1fU) << 1 ; }

  // Field tag: 13-bit tag for cache entry
    inline uint32_t FMC_TAGVDW1S_tag (const uint32_t inValue) {return (inValue & 0x1fffU) << 6 ; }

  // Field RESERVED: no description available
    inline uint32_t FMC_TAGVDW1S_RESERVED (const uint32_t inValue) {return (inValue & 0x1fffU) << 19 ; }

//---  Registers TAGVDW2S(0,1,2,3,4,5,6,7): Cache Tag Storage
  #define FMC_TAGVDW2S(idx) (* ((volatile uint32_t *) (0x4001f000 + 0x140 + (idx) * 0x4)))
  #define FMC_TAGVDW2S0 (* ((volatile uint32_t *) (0x4001f000 + 0x140 + 0 * 0x4)))
  #define FMC_TAGVDW2S1 (* ((volatile uint32_t *) (0x4001f000 + 0x140 + 1 * 0x4)))
  #define FMC_TAGVDW2S2 (* ((volatile uint32_t *) (0x4001f000 + 0x140 + 2 * 0x4)))
  #define FMC_TAGVDW2S3 (* ((volatile uint32_t *) (0x4001f000 + 0x140 + 3 * 0x4)))
  #define FMC_TAGVDW2S4 (* ((volatile uint32_t *) (0x4001f000 + 0x140 + 4 * 0x4)))
  #define FMC_TAGVDW2S5 (* ((volatile uint32_t *) (0x4001f000 + 0x140 + 5 * 0x4)))
  #define FMC_TAGVDW2S6 (* ((volatile uint32_t *) (0x4001f000 + 0x140 + 6 * 0x4)))
  #define FMC_TAGVDW2S7 (* ((volatile uint32_t *) (0x4001f000 + 0x140 + 7 * 0x4)))

  // Field valid: 1-bit valid for cache entry
    const uint32_t FMC_TAGVDW2S_valid = 1U << 0 ;

  // Field RESERVED: no description available
    inline uint32_t FMC_TAGVDW2S_RESERVED (const uint32_t inValue) {return (inValue & 0x1fU) << 1 ; }

  // Field tag: 13-bit tag for cache entry
    inline uint32_t FMC_TAGVDW2S_tag (const uint32_t inValue) {return (inValue & 0x1fffU) << 6 ; }

  // Field RESERVED: no description available
    inline uint32_t FMC_TAGVDW2S_RESERVED (const uint32_t inValue) {return (inValue & 0x1fffU) << 19 ; }

//---  Registers TAGVDW3S(0,1,2,3,4,5,6,7): Cache Tag Storage
  #define FMC_TAGVDW3S(idx) (* ((volatile uint32_t *) (0x4001f000 + 0x160 + (idx) * 0x4)))
  #define FMC_TAGVDW3S0 (* ((volatile uint32_t *) (0x4001f000 + 0x160 + 0 * 0x4)))
  #define FMC_TAGVDW3S1 (* ((volatile uint32_t *) (0x4001f000 + 0x160 + 1 * 0x4)))
  #define FMC_TAGVDW3S2 (* ((volatile uint32_t *) (0x4001f000 + 0x160 + 2 * 0x4)))
  #define FMC_TAGVDW3S3 (* ((volatile uint32_t *) (0x4001f000 + 0x160 + 3 * 0x4)))
  #define FMC_TAGVDW3S4 (* ((volatile uint32_t *) (0x4001f000 + 0x160 + 4 * 0x4)))
  #define FMC_TAGVDW3S5 (* ((volatile uint32_t *) (0x4001f000 + 0x160 + 5 * 0x4)))
  #define FMC_TAGVDW3S6 (* ((volatile uint32_t *) (0x4001f000 + 0x160 + 6 * 0x4)))
  #define FMC_TAGVDW3S7 (* ((volatile uint32_t *) (0x4001f000 + 0x160 + 7 * 0x4)))

  // Field valid: 1-bit valid for cache entry
    const uint32_t FMC_TAGVDW3S_valid = 1U << 0 ;

  // Field RESERVED: no description available
    inline uint32_t FMC_TAGVDW3S_RESERVED (const uint32_t inValue) {return (inValue & 0x1fU) << 1 ; }

  // Field tag: 13-bit tag for cache entry
    inline uint32_t FMC_TAGVDW3S_tag (const uint32_t inValue) {return (inValue & 0x1fffU) << 6 ; }

  // Field RESERVED: no description available
    inline uint32_t FMC_TAGVDW3S_RESERVED (const uint32_t inValue) {return (inValue & 0x1fffU) << 19 ; }

//---  Registers DATAW0SU(0,1,2,3,4,5,6,7): Cache Data Storage (upper word)
  #define FMC_DATAW0SU(idx) (* ((volatile uint32_t *) (0x4001f000 + 0x200 + (idx) * 0x8)))
  #define FMC_DATAW0S0U (* ((volatile uint32_t *) (0x4001f000 + 0x200 + 0 * 0x8)))
  #define FMC_DATAW0S1U (* ((volatile uint32_t *) (0x4001f000 + 0x200 + 1 * 0x8)))
  #define FMC_DATAW0S2U (* ((volatile uint32_t *) (0x4001f000 + 0x200 + 2 * 0x8)))
  #define FMC_DATAW0S3U (* ((volatile uint32_t *) (0x4001f000 + 0x200 + 3 * 0x8)))
  #define FMC_DATAW0S4U (* ((volatile uint32_t *) (0x4001f000 + 0x200 + 4 * 0x8)))
  #define FMC_DATAW0S5U (* ((volatile uint32_t *) (0x4001f000 + 0x200 + 5 * 0x8)))
  #define FMC_DATAW0S6U (* ((volatile uint32_t *) (0x4001f000 + 0x200 + 6 * 0x8)))
  #define FMC_DATAW0S7U (* ((volatile uint32_t *) (0x4001f000 + 0x200 + 7 * 0x8)))

  // Field data: Bits [63:32] of data entry
    inline uint32_t FMC_DATAW0SU_data (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Registers DATAW0SL(0,1,2,3,4,5,6,7): Cache Data Storage (lower word)
  #define FMC_DATAW0SL(idx) (* ((volatile uint32_t *) (0x4001f000 + 0x204 + (idx) * 0x8)))
  #define FMC_DATAW0S0L (* ((volatile uint32_t *) (0x4001f000 + 0x204 + 0 * 0x8)))
  #define FMC_DATAW0S1L (* ((volatile uint32_t *) (0x4001f000 + 0x204 + 1 * 0x8)))
  #define FMC_DATAW0S2L (* ((volatile uint32_t *) (0x4001f000 + 0x204 + 2 * 0x8)))
  #define FMC_DATAW0S3L (* ((volatile uint32_t *) (0x4001f000 + 0x204 + 3 * 0x8)))
  #define FMC_DATAW0S4L (* ((volatile uint32_t *) (0x4001f000 + 0x204 + 4 * 0x8)))
  #define FMC_DATAW0S5L (* ((volatile uint32_t *) (0x4001f000 + 0x204 + 5 * 0x8)))
  #define FMC_DATAW0S6L (* ((volatile uint32_t *) (0x4001f000 + 0x204 + 6 * 0x8)))
  #define FMC_DATAW0S7L (* ((volatile uint32_t *) (0x4001f000 + 0x204 + 7 * 0x8)))

  // Field data: Bits [31:0] of data entry
    inline uint32_t FMC_DATAW0SL_data (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Registers DATAW1SU(0,1,2,3,4,5,6,7): Cache Data Storage (upper word)
  #define FMC_DATAW1SU(idx) (* ((volatile uint32_t *) (0x4001f000 + 0x240 + (idx) * 0x8)))
  #define FMC_DATAW1S0U (* ((volatile uint32_t *) (0x4001f000 + 0x240 + 0 * 0x8)))
  #define FMC_DATAW1S1U (* ((volatile uint32_t *) (0x4001f000 + 0x240 + 1 * 0x8)))
  #define FMC_DATAW1S2U (* ((volatile uint32_t *) (0x4001f000 + 0x240 + 2 * 0x8)))
  #define FMC_DATAW1S3U (* ((volatile uint32_t *) (0x4001f000 + 0x240 + 3 * 0x8)))
  #define FMC_DATAW1S4U (* ((volatile uint32_t *) (0x4001f000 + 0x240 + 4 * 0x8)))
  #define FMC_DATAW1S5U (* ((volatile uint32_t *) (0x4001f000 + 0x240 + 5 * 0x8)))
  #define FMC_DATAW1S6U (* ((volatile uint32_t *) (0x4001f000 + 0x240 + 6 * 0x8)))
  #define FMC_DATAW1S7U (* ((volatile uint32_t *) (0x4001f000 + 0x240 + 7 * 0x8)))

  // Field data: Bits [63:32] of data entry
    inline uint32_t FMC_DATAW1SU_data (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Registers DATAW1SL(0,1,2,3,4,5,6,7): Cache Data Storage (lower word)
  #define FMC_DATAW1SL(idx) (* ((volatile uint32_t *) (0x4001f000 + 0x244 + (idx) * 0x8)))
  #define FMC_DATAW1S0L (* ((volatile uint32_t *) (0x4001f000 + 0x244 + 0 * 0x8)))
  #define FMC_DATAW1S1L (* ((volatile uint32_t *) (0x4001f000 + 0x244 + 1 * 0x8)))
  #define FMC_DATAW1S2L (* ((volatile uint32_t *) (0x4001f000 + 0x244 + 2 * 0x8)))
  #define FMC_DATAW1S3L (* ((volatile uint32_t *) (0x4001f000 + 0x244 + 3 * 0x8)))
  #define FMC_DATAW1S4L (* ((volatile uint32_t *) (0x4001f000 + 0x244 + 4 * 0x8)))
  #define FMC_DATAW1S5L (* ((volatile uint32_t *) (0x4001f000 + 0x244 + 5 * 0x8)))
  #define FMC_DATAW1S6L (* ((volatile uint32_t *) (0x4001f000 + 0x244 + 6 * 0x8)))
  #define FMC_DATAW1S7L (* ((volatile uint32_t *) (0x4001f000 + 0x244 + 7 * 0x8)))

  // Field data: Bits [31:0] of data entry
    inline uint32_t FMC_DATAW1SL_data (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Registers DATAW2SU(0,1,2,3,4,5,6,7): Cache Data Storage (upper word)
  #define FMC_DATAW2SU(idx) (* ((volatile uint32_t *) (0x4001f000 + 0x280 + (idx) * 0x8)))
  #define FMC_DATAW2S0U (* ((volatile uint32_t *) (0x4001f000 + 0x280 + 0 * 0x8)))
  #define FMC_DATAW2S1U (* ((volatile uint32_t *) (0x4001f000 + 0x280 + 1 * 0x8)))
  #define FMC_DATAW2S2U (* ((volatile uint32_t *) (0x4001f000 + 0x280 + 2 * 0x8)))
  #define FMC_DATAW2S3U (* ((volatile uint32_t *) (0x4001f000 + 0x280 + 3 * 0x8)))
  #define FMC_DATAW2S4U (* ((volatile uint32_t *) (0x4001f000 + 0x280 + 4 * 0x8)))
  #define FMC_DATAW2S5U (* ((volatile uint32_t *) (0x4001f000 + 0x280 + 5 * 0x8)))
  #define FMC_DATAW2S6U (* ((volatile uint32_t *) (0x4001f000 + 0x280 + 6 * 0x8)))
  #define FMC_DATAW2S7U (* ((volatile uint32_t *) (0x4001f000 + 0x280 + 7 * 0x8)))

  // Field data: Bits [63:32] of data entry
    inline uint32_t FMC_DATAW2SU_data (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Registers DATAW2SL(0,1,2,3,4,5,6,7): Cache Data Storage (lower word)
  #define FMC_DATAW2SL(idx) (* ((volatile uint32_t *) (0x4001f000 + 0x284 + (idx) * 0x8)))
  #define FMC_DATAW2S0L (* ((volatile uint32_t *) (0x4001f000 + 0x284 + 0 * 0x8)))
  #define FMC_DATAW2S1L (* ((volatile uint32_t *) (0x4001f000 + 0x284 + 1 * 0x8)))
  #define FMC_DATAW2S2L (* ((volatile uint32_t *) (0x4001f000 + 0x284 + 2 * 0x8)))
  #define FMC_DATAW2S3L (* ((volatile uint32_t *) (0x4001f000 + 0x284 + 3 * 0x8)))
  #define FMC_DATAW2S4L (* ((volatile uint32_t *) (0x4001f000 + 0x284 + 4 * 0x8)))
  #define FMC_DATAW2S5L (* ((volatile uint32_t *) (0x4001f000 + 0x284 + 5 * 0x8)))
  #define FMC_DATAW2S6L (* ((volatile uint32_t *) (0x4001f000 + 0x284 + 6 * 0x8)))
  #define FMC_DATAW2S7L (* ((volatile uint32_t *) (0x4001f000 + 0x284 + 7 * 0x8)))

  // Field data: Bits [31:0] of data entry
    inline uint32_t FMC_DATAW2SL_data (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Registers DATAW3SU(0,1,2,3,4,5,6,7): Cache Data Storage (upper word)
  #define FMC_DATAW3SU(idx) (* ((volatile uint32_t *) (0x4001f000 + 0x2c0 + (idx) * 0x8)))
  #define FMC_DATAW3S0U (* ((volatile uint32_t *) (0x4001f000 + 0x2c0 + 0 * 0x8)))
  #define FMC_DATAW3S1U (* ((volatile uint32_t *) (0x4001f000 + 0x2c0 + 1 * 0x8)))
  #define FMC_DATAW3S2U (* ((volatile uint32_t *) (0x4001f000 + 0x2c0 + 2 * 0x8)))
  #define FMC_DATAW3S3U (* ((volatile uint32_t *) (0x4001f000 + 0x2c0 + 3 * 0x8)))
  #define FMC_DATAW3S4U (* ((volatile uint32_t *) (0x4001f000 + 0x2c0 + 4 * 0x8)))
  #define FMC_DATAW3S5U (* ((volatile uint32_t *) (0x4001f000 + 0x2c0 + 5 * 0x8)))
  #define FMC_DATAW3S6U (* ((volatile uint32_t *) (0x4001f000 + 0x2c0 + 6 * 0x8)))
  #define FMC_DATAW3S7U (* ((volatile uint32_t *) (0x4001f000 + 0x2c0 + 7 * 0x8)))

  // Field data: Bits [63:32] of data entry
    inline uint32_t FMC_DATAW3SU_data (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Registers DATAW3SL(0,1,2,3,4,5,6,7): Cache Data Storage (lower word)
  #define FMC_DATAW3SL(idx) (* ((volatile uint32_t *) (0x4001f000 + 0x2c4 + (idx) * 0x8)))
  #define FMC_DATAW3S0L (* ((volatile uint32_t *) (0x4001f000 + 0x2c4 + 0 * 0x8)))
  #define FMC_DATAW3S1L (* ((volatile uint32_t *) (0x4001f000 + 0x2c4 + 1 * 0x8)))
  #define FMC_DATAW3S2L (* ((volatile uint32_t *) (0x4001f000 + 0x2c4 + 2 * 0x8)))
  #define FMC_DATAW3S3L (* ((volatile uint32_t *) (0x4001f000 + 0x2c4 + 3 * 0x8)))
  #define FMC_DATAW3S4L (* ((volatile uint32_t *) (0x4001f000 + 0x2c4 + 4 * 0x8)))
  #define FMC_DATAW3S5L (* ((volatile uint32_t *) (0x4001f000 + 0x2c4 + 5 * 0x8)))
  #define FMC_DATAW3S6L (* ((volatile uint32_t *) (0x4001f000 + 0x2c4 + 6 * 0x8)))
  #define FMC_DATAW3S7L (* ((volatile uint32_t *) (0x4001f000 + 0x2c4 + 7 * 0x8)))

  // Field data: Bits [31:0] of data entry
    inline uint32_t FMC_DATAW3SL_data (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//------------------------------------------------------------------------------
// Peripheral FTFL: Flash Memory Interface
//------------------------------------------------------------------------------

//---  Register FSTAT: Flash Status Register
  #define FTFL_FSTAT (* ((volatile uint8_t *) (0x40020000 + 0)))

  // Field MGSTAT0: Memory Controller Command Completion Status Flag
    const uint8_t FTFL_FSTAT_MGSTAT0 = 1U << 0 ;

  // Field RESERVED: no description available
    inline uint8_t FTFL_FSTAT_RESERVED (const uint8_t inValue) {return (inValue & 0x7U) << 1 ; }

  // Field FPVIOL: Flash Protection Violation Flag
    const uint8_t FTFL_FSTAT_FPVIOL = 1U << 4 ;

  // Field ACCERR: Flash Access Error Flag
    const uint8_t FTFL_FSTAT_ACCERR = 1U << 5 ;

  // Field RDCOLERR: FTFL Read Collision Error Flag
    const uint8_t FTFL_FSTAT_RDCOLERR = 1U << 6 ;

  // Field CCIF: Command Complete Interrupt Flag
    const uint8_t FTFL_FSTAT_CCIF = 1U << 7 ;

//---  Register FCNFG: Flash Configuration Register
  #define FTFL_FCNFG (* ((volatile uint8_t *) (0x40020000 + 1)))

  // Field EEERDY: no description available
    const uint8_t FTFL_FCNFG_EEERDY = 1U << 0 ;

  // Field RAMRDY: RAM Ready
    const uint8_t FTFL_FCNFG_RAMRDY = 1U << 1 ;

  // Field PFLSH: FTFL configuration
    const uint8_t FTFL_FCNFG_PFLSH = 1U << 2 ;

  // Field SWAP: Swap
    const uint8_t FTFL_FCNFG_SWAP = 1U << 3 ;

  // Field ERSSUSP: Erase Suspend
    const uint8_t FTFL_FCNFG_ERSSUSP = 1U << 4 ;

  // Field ERSAREQ: Erase All Request
    const uint8_t FTFL_FCNFG_ERSAREQ = 1U << 5 ;

  // Field RDCOLLIE: Read Collision Error Interrupt Enable
    const uint8_t FTFL_FCNFG_RDCOLLIE = 1U << 6 ;

  // Field CCIE: Command Complete Interrupt Enable
    const uint8_t FTFL_FCNFG_CCIE = 1U << 7 ;

//---  Register FSEC: Flash Security Register
  #define FTFL_FSEC (* ((volatile uint8_t *) (0x40020000 + 2)))

  // Field SEC: Flash Security
    inline uint8_t FTFL_FSEC_SEC (const uint8_t inValue) {return (inValue & 0x3U) << 0 ; }

  // Field FSLACC: Freescale Failure Analysis Access Code
    inline uint8_t FTFL_FSEC_FSLACC (const uint8_t inValue) {return (inValue & 0x3U) << 2 ; }

  // Field MEEN: Mass Erase Enable Bits
    inline uint8_t FTFL_FSEC_MEEN (const uint8_t inValue) {return (inValue & 0x3U) << 4 ; }

  // Field KEYEN: Backdoor Key Security Enable
    inline uint8_t FTFL_FSEC_KEYEN (const uint8_t inValue) {return (inValue & 0x3U) << 6 ; }

//---  Register FOPT: Flash Option Register
  #define FTFL_FOPT (* ((volatile uint8_t *) (0x40020000 + 3)))

  // Field OPT: Nonvolatile Option
    inline uint8_t FTFL_FOPT_OPT (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Registers FCCOB(3,2,1,0,7,6,5,4,B,A,9,8): Flash Common Command Object Registers
  #define FTFL_FCCOB(idx) (* ((volatile uint8_t *) (0x40020000 + 0x4 + (idx) * 0x1)))
  #define FTFL_FCCOB3 (* ((volatile uint8_t *) (0x40020000 + 0x4 + 0 * 0x1)))
  #define FTFL_FCCOB2 (* ((volatile uint8_t *) (0x40020000 + 0x4 + 1 * 0x1)))
  #define FTFL_FCCOB1 (* ((volatile uint8_t *) (0x40020000 + 0x4 + 2 * 0x1)))
  #define FTFL_FCCOB0 (* ((volatile uint8_t *) (0x40020000 + 0x4 + 3 * 0x1)))
  #define FTFL_FCCOB7 (* ((volatile uint8_t *) (0x40020000 + 0x4 + 4 * 0x1)))
  #define FTFL_FCCOB6 (* ((volatile uint8_t *) (0x40020000 + 0x4 + 5 * 0x1)))
  #define FTFL_FCCOB5 (* ((volatile uint8_t *) (0x40020000 + 0x4 + 6 * 0x1)))
  #define FTFL_FCCOB4 (* ((volatile uint8_t *) (0x40020000 + 0x4 + 7 * 0x1)))
  #define FTFL_FCCOBB (* ((volatile uint8_t *) (0x40020000 + 0x4 + 8 * 0x1)))
  #define FTFL_FCCOBA (* ((volatile uint8_t *) (0x40020000 + 0x4 + 9 * 0x1)))
  #define FTFL_FCCOB9 (* ((volatile uint8_t *) (0x40020000 + 0x4 + 10 * 0x1)))
  #define FTFL_FCCOB8 (* ((volatile uint8_t *) (0x40020000 + 0x4 + 11 * 0x1)))

  // Field CCOBn: no description available
    inline uint8_t FTFL_FCCOB_CCOBn (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Registers FPROT(3,2,1,0): Program Flash Protection Registers
  #define FTFL_FPROT(idx) (* ((volatile uint8_t *) (0x40020000 + 0x10 + (idx) * 0x1)))
  #define FTFL_FPROT3 (* ((volatile uint8_t *) (0x40020000 + 0x10 + 0 * 0x1)))
  #define FTFL_FPROT2 (* ((volatile uint8_t *) (0x40020000 + 0x10 + 1 * 0x1)))
  #define FTFL_FPROT1 (* ((volatile uint8_t *) (0x40020000 + 0x10 + 2 * 0x1)))
  #define FTFL_FPROT0 (* ((volatile uint8_t *) (0x40020000 + 0x10 + 3 * 0x1)))

  // Field PROT: Program Flash Region Protect
    inline uint8_t FTFL_FPROT_PROT (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register FEPROT: EEPROM Protection Register
  #define FTFL_FEPROT (* ((volatile uint8_t *) (0x40020000 + 22)))

  // Field EPROT: EEPROM Region Protect
    inline uint8_t FTFL_FEPROT_EPROT (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register FDPROT: Data Flash Protection Register
  #define FTFL_FDPROT (* ((volatile uint8_t *) (0x40020000 + 23)))

  // Field DPROT: Data Flash Region Protect
    inline uint8_t FTFL_FDPROT_DPROT (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//------------------------------------------------------------------------------
// Peripheral FTFL_FlashConfig: Flash Memory Interface
//------------------------------------------------------------------------------

//---  Register BACKKEY3: Backdoor Comparison Key 3.
  #define FTFL_FlashConfig_BACKKEY3 (* ((volatile uint8_t *) (0x400 + 0)))

  // Field KEY: Backdoor Comparison Key.
    inline uint8_t FTFL_FlashConfig_BACKKEY3_KEY (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register BACKKEY2: Backdoor Comparison Key 2.
  #define FTFL_FlashConfig_BACKKEY2 (* ((volatile uint8_t *) (0x400 + 1)))

  // Field KEY: Backdoor Comparison Key.
    inline uint8_t FTFL_FlashConfig_BACKKEY2_KEY (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register BACKKEY1: Backdoor Comparison Key 1.
  #define FTFL_FlashConfig_BACKKEY1 (* ((volatile uint8_t *) (0x400 + 2)))

  // Field KEY: Backdoor Comparison Key.
    inline uint8_t FTFL_FlashConfig_BACKKEY1_KEY (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register BACKKEY0: Backdoor Comparison Key 0.
  #define FTFL_FlashConfig_BACKKEY0 (* ((volatile uint8_t *) (0x400 + 3)))

  // Field KEY: Backdoor Comparison Key.
    inline uint8_t FTFL_FlashConfig_BACKKEY0_KEY (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register BACKKEY7: Backdoor Comparison Key 7.
  #define FTFL_FlashConfig_BACKKEY7 (* ((volatile uint8_t *) (0x400 + 4)))

  // Field KEY: Backdoor Comparison Key.
    inline uint8_t FTFL_FlashConfig_BACKKEY7_KEY (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register BACKKEY6: Backdoor Comparison Key 6.
  #define FTFL_FlashConfig_BACKKEY6 (* ((volatile uint8_t *) (0x400 + 5)))

  // Field KEY: Backdoor Comparison Key.
    inline uint8_t FTFL_FlashConfig_BACKKEY6_KEY (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register BACKKEY5: Backdoor Comparison Key 5.
  #define FTFL_FlashConfig_BACKKEY5 (* ((volatile uint8_t *) (0x400 + 6)))

  // Field KEY: Backdoor Comparison Key.
    inline uint8_t FTFL_FlashConfig_BACKKEY5_KEY (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register BACKKEY4: Backdoor Comparison Key 4.
  #define FTFL_FlashConfig_BACKKEY4 (* ((volatile uint8_t *) (0x400 + 7)))

  // Field KEY: Backdoor Comparison Key.
    inline uint8_t FTFL_FlashConfig_BACKKEY4_KEY (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register FPROT3: Non-volatile P-Flash Protection 1 - Low Register
  #define FTFL_FlashConfig_FPROT3 (* ((volatile uint8_t *) (0x400 + 8)))

  // Field PROT: P-Flash Region Protect
    inline uint8_t FTFL_FlashConfig_FPROT3_PROT (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register FPROT2: Non-volatile P-Flash Protection 1 - High Register
  #define FTFL_FlashConfig_FPROT2 (* ((volatile uint8_t *) (0x400 + 9)))

  // Field PROT: P-Flash Region Protect
    inline uint8_t FTFL_FlashConfig_FPROT2_PROT (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register FPROT1: Non-volatile P-Flash Protection 0 - Low Register
  #define FTFL_FlashConfig_FPROT1 (* ((volatile uint8_t *) (0x400 + 10)))

  // Field PROT: P-Flash Region Protect
    inline uint8_t FTFL_FlashConfig_FPROT1_PROT (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register FPROT0: Non-volatile P-Flash Protection 0 - High Register
  #define FTFL_FlashConfig_FPROT0 (* ((volatile uint8_t *) (0x400 + 11)))

  // Field PROT: P-Flash Region Protect
    inline uint8_t FTFL_FlashConfig_FPROT0_PROT (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register FSEC: Non-volatile Flash Security Register
  #define FTFL_FlashConfig_FSEC (* ((volatile uint8_t *) (0x400 + 12)))

  // Field SEC: Flash Security
    inline uint8_t FTFL_FlashConfig_FSEC_SEC (const uint8_t inValue) {return (inValue & 0x3U) << 0 ; }

  // Field FSLACC: Freescale Failure Analysis Access Code
    inline uint8_t FTFL_FlashConfig_FSEC_FSLACC (const uint8_t inValue) {return (inValue & 0x3U) << 2 ; }

  // Field MEEN: no description available
    inline uint8_t FTFL_FlashConfig_FSEC_MEEN (const uint8_t inValue) {return (inValue & 0x3U) << 4 ; }

  // Field KEYEN: Backdoor Key Security Enable
    inline uint8_t FTFL_FlashConfig_FSEC_KEYEN (const uint8_t inValue) {return (inValue & 0x3U) << 6 ; }

//---  Register FOPT: Non-volatile Flash Option Register
  #define FTFL_FlashConfig_FOPT (* ((volatile uint8_t *) (0x400 + 13)))

  // Field LPBOOT: no description available
    const uint8_t FTFL_FlashConfig_FOPT_LPBOOT = 1U << 0 ;

  // Field EZPORT_DIS: no description available
    const uint8_t FTFL_FlashConfig_FOPT_EZPORT_DIS = 1U << 1 ;

  // Field RESERVED: no description available
    const uint8_t FTFL_FlashConfig_FOPT_RESERVED = 1U << 2 ;

  // Field RESERVED: no description available
    const uint8_t FTFL_FlashConfig_FOPT_RESERVED = 1U << 3 ;

  // Field RESERVED: no description available
    const uint8_t FTFL_FlashConfig_FOPT_RESERVED = 1U << 4 ;

  // Field RESERVED: no description available
    const uint8_t FTFL_FlashConfig_FOPT_RESERVED = 1U << 5 ;

  // Field RESERVED: no description available
    const uint8_t FTFL_FlashConfig_FOPT_RESERVED = 1U << 6 ;

  // Field RESERVED: no description available
    const uint8_t FTFL_FlashConfig_FOPT_RESERVED = 1U << 7 ;

//---  Register FEPROT: Non-volatile EERAM Protection Register
  #define FTFL_FlashConfig_FEPROT (* ((volatile uint8_t *) (0x400 + 14)))

  // Field EPROT: no description available
    inline uint8_t FTFL_FlashConfig_FEPROT_EPROT (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register FDPROT: Non-volatile D-Flash Protection Register
  #define FTFL_FlashConfig_FDPROT (* ((volatile uint8_t *) (0x400 + 15)))

  // Field DPROT: D-Flash Region Protect
    inline uint8_t FTFL_FlashConfig_FDPROT_DPROT (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//------------------------------------------------------------------------------
// PERIPHERAL GROUP: FTM
//        FTM0 at 0x40038000
//        FTM1 at 0x40039000
//        FTM2 at 0x400b8000
//------------------------------------------------------------------------------

static const uint32_t kBaseAddress_FTM [3] = {0x40038000, 0x40039000, 0x400b8000} ;

//------------------------------------------------------------------------------

//---  Register SC: Status and Control
  #define FTM_SC(group) (* ((volatile uint32_t *) (kBaseAddress_SC [group] + 0x0)))
  #define FTM0_SC (* ((volatile uint32_t *) (0x40038000 + 0x0)))
  #define FTM1_SC (* ((volatile uint32_t *) (0x40039000 + 0x0)))
  #define FTM2_SC (* ((volatile uint32_t *) (0x400b8000 + 0x0)))

  // Field PS: Prescale Factor Selection
    inline uint32_t FTM_SC_PS (const uint32_t inValue) {return (inValue & 0x7U) << 0 ; }

  // Field CLKS: Clock Source Selection
    inline uint32_t FTM_SC_CLKS (const uint32_t inValue) {return (inValue & 0x3U) << 3 ; }

  // Field CPWMS: Center-aligned PWM Select
    const uint32_t FTM_SC_CPWMS = 1U << 5 ;

  // Field TOIE: Timer Overflow Interrupt Enable
    const uint32_t FTM_SC_TOIE = 1U << 6 ;

  // Field TOF: Timer Overflow Flag
    const uint32_t FTM_SC_TOF = 1U << 7 ;

  // Field RESERVED: no description available
    inline uint32_t FTM_SC_RESERVED (const uint32_t inValue) {return (inValue & 0xffffffU) << 8 ; }

//---  Register CNT: Counter
  #define FTM_CNT(group) (* ((volatile uint32_t *) (kBaseAddress_CNT [group] + 0x4)))
  #define FTM0_CNT (* ((volatile uint32_t *) (0x40038000 + 0x4)))
  #define FTM1_CNT (* ((volatile uint32_t *) (0x40039000 + 0x4)))
  #define FTM2_CNT (* ((volatile uint32_t *) (0x400b8000 + 0x4)))

  // Field COUNT: Counter value
    inline uint32_t FTM_CNT_COUNT (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

  // Field RESERVED: no description available
    inline uint32_t FTM_CNT_RESERVED (const uint32_t inValue) {return (inValue & 0xffffU) << 16 ; }

//---  Register MOD: Modulo
  #define FTM_MOD(group) (* ((volatile uint32_t *) (kBaseAddress_MOD [group] + 0x8)))
  #define FTM0_MOD (* ((volatile uint32_t *) (0x40038000 + 0x8)))
  #define FTM1_MOD (* ((volatile uint32_t *) (0x40039000 + 0x8)))
  #define FTM2_MOD (* ((volatile uint32_t *) (0x400b8000 + 0x8)))

  // Field MOD: no description available
    inline uint32_t FTM_MOD_MOD (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

  // Field RESERVED: no description available
    inline uint32_t FTM_MOD_RESERVED (const uint32_t inValue) {return (inValue & 0xffffU) << 16 ; }

//---  Registers CSC(0,1,2,3,4,5,6,7): Channel (n) Status and Control
  #define FTM_CSC(group,idx) (* ((volatile uint32_t *) (kBaseAddress_CSC [group] + 0xc + (idx) * 0x8)))
  #define FTM0_CSC(idx) (* ((volatile uint32_t *) (0x40038000 + 0xc + (idx) * 0x8)))
  #define FTM1_CSC(idx) (* ((volatile uint32_t *) (0x40039000 + 0xc + (idx) * 0x8)))
  #define FTM2_CSC(idx) (* ((volatile uint32_t *) (0x400b8000 + 0xc + (idx) * 0x8)))
  #define FTM0_C0SC (* ((volatile uint32_t *) (0x40038000 + 0xc + 0 * 0x8)))
  #define FTM1_C0SC (* ((volatile uint32_t *) (0x40039000 + 0xc + 0 * 0x8)))
  #define FTM2_C0SC (* ((volatile uint32_t *) (0x400b8000 + 0xc + 0 * 0x8)))
  #define FTM0_C1SC (* ((volatile uint32_t *) (0x40038000 + 0xc + 1 * 0x8)))
  #define FTM1_C1SC (* ((volatile uint32_t *) (0x40039000 + 0xc + 1 * 0x8)))
  #define FTM2_C1SC (* ((volatile uint32_t *) (0x400b8000 + 0xc + 1 * 0x8)))
  #define FTM0_C2SC (* ((volatile uint32_t *) (0x40038000 + 0xc + 2 * 0x8)))
  #define FTM1_C2SC (* ((volatile uint32_t *) (0x40039000 + 0xc + 2 * 0x8)))
  #define FTM2_C2SC (* ((volatile uint32_t *) (0x400b8000 + 0xc + 2 * 0x8)))
  #define FTM0_C3SC (* ((volatile uint32_t *) (0x40038000 + 0xc + 3 * 0x8)))
  #define FTM1_C3SC (* ((volatile uint32_t *) (0x40039000 + 0xc + 3 * 0x8)))
  #define FTM2_C3SC (* ((volatile uint32_t *) (0x400b8000 + 0xc + 3 * 0x8)))
  #define FTM0_C4SC (* ((volatile uint32_t *) (0x40038000 + 0xc + 4 * 0x8)))
  #define FTM1_C4SC (* ((volatile uint32_t *) (0x40039000 + 0xc + 4 * 0x8)))
  #define FTM2_C4SC (* ((volatile uint32_t *) (0x400b8000 + 0xc + 4 * 0x8)))
  #define FTM0_C5SC (* ((volatile uint32_t *) (0x40038000 + 0xc + 5 * 0x8)))
  #define FTM1_C5SC (* ((volatile uint32_t *) (0x40039000 + 0xc + 5 * 0x8)))
  #define FTM2_C5SC (* ((volatile uint32_t *) (0x400b8000 + 0xc + 5 * 0x8)))
  #define FTM0_C6SC (* ((volatile uint32_t *) (0x40038000 + 0xc + 6 * 0x8)))
  #define FTM1_C6SC (* ((volatile uint32_t *) (0x40039000 + 0xc + 6 * 0x8)))
  #define FTM2_C6SC (* ((volatile uint32_t *) (0x400b8000 + 0xc + 6 * 0x8)))
  #define FTM0_C7SC (* ((volatile uint32_t *) (0x40038000 + 0xc + 7 * 0x8)))
  #define FTM1_C7SC (* ((volatile uint32_t *) (0x40039000 + 0xc + 7 * 0x8)))
  #define FTM2_C7SC (* ((volatile uint32_t *) (0x400b8000 + 0xc + 7 * 0x8)))

  // Field DMA: DMA Enable
    const uint32_t FTM_CSC_DMA = 1U << 0 ;

  // Field RESERVED: no description available
    const uint32_t FTM_CSC_RESERVED = 1U << 1 ;

  // Field ELSA: Edge or Level Select
    const uint32_t FTM_CSC_ELSA = 1U << 2 ;

  // Field ELSB: Edge or Level Select
    const uint32_t FTM_CSC_ELSB = 1U << 3 ;

  // Field MSA: Channel Mode Select
    const uint32_t FTM_CSC_MSA = 1U << 4 ;

  // Field MSB: Channel Mode Select
    const uint32_t FTM_CSC_MSB = 1U << 5 ;

  // Field CHIE: Channel Interrupt Enable
    const uint32_t FTM_CSC_CHIE = 1U << 6 ;

  // Field CHF: Channel Flag
    const uint32_t FTM_CSC_CHF = 1U << 7 ;

  // Field RESERVED: no description available
    inline uint32_t FTM_CSC_RESERVED (const uint32_t inValue) {return (inValue & 0xffffffU) << 8 ; }

//---  Registers CV(0,1,2,3,4,5,6,7): Channel (n) Value
  #define FTM_CV(group,idx) (* ((volatile uint32_t *) (kBaseAddress_CV [group] + 0x10 + (idx) * 0x8)))
  #define FTM0_CV(idx) (* ((volatile uint32_t *) (0x40038000 + 0x10 + (idx) * 0x8)))
  #define FTM1_CV(idx) (* ((volatile uint32_t *) (0x40039000 + 0x10 + (idx) * 0x8)))
  #define FTM2_CV(idx) (* ((volatile uint32_t *) (0x400b8000 + 0x10 + (idx) * 0x8)))
  #define FTM0_C0V (* ((volatile uint32_t *) (0x40038000 + 0x10 + 0 * 0x8)))
  #define FTM1_C0V (* ((volatile uint32_t *) (0x40039000 + 0x10 + 0 * 0x8)))
  #define FTM2_C0V (* ((volatile uint32_t *) (0x400b8000 + 0x10 + 0 * 0x8)))
  #define FTM0_C1V (* ((volatile uint32_t *) (0x40038000 + 0x10 + 1 * 0x8)))
  #define FTM1_C1V (* ((volatile uint32_t *) (0x40039000 + 0x10 + 1 * 0x8)))
  #define FTM2_C1V (* ((volatile uint32_t *) (0x400b8000 + 0x10 + 1 * 0x8)))
  #define FTM0_C2V (* ((volatile uint32_t *) (0x40038000 + 0x10 + 2 * 0x8)))
  #define FTM1_C2V (* ((volatile uint32_t *) (0x40039000 + 0x10 + 2 * 0x8)))
  #define FTM2_C2V (* ((volatile uint32_t *) (0x400b8000 + 0x10 + 2 * 0x8)))
  #define FTM0_C3V (* ((volatile uint32_t *) (0x40038000 + 0x10 + 3 * 0x8)))
  #define FTM1_C3V (* ((volatile uint32_t *) (0x40039000 + 0x10 + 3 * 0x8)))
  #define FTM2_C3V (* ((volatile uint32_t *) (0x400b8000 + 0x10 + 3 * 0x8)))
  #define FTM0_C4V (* ((volatile uint32_t *) (0x40038000 + 0x10 + 4 * 0x8)))
  #define FTM1_C4V (* ((volatile uint32_t *) (0x40039000 + 0x10 + 4 * 0x8)))
  #define FTM2_C4V (* ((volatile uint32_t *) (0x400b8000 + 0x10 + 4 * 0x8)))
  #define FTM0_C5V (* ((volatile uint32_t *) (0x40038000 + 0x10 + 5 * 0x8)))
  #define FTM1_C5V (* ((volatile uint32_t *) (0x40039000 + 0x10 + 5 * 0x8)))
  #define FTM2_C5V (* ((volatile uint32_t *) (0x400b8000 + 0x10 + 5 * 0x8)))
  #define FTM0_C6V (* ((volatile uint32_t *) (0x40038000 + 0x10 + 6 * 0x8)))
  #define FTM1_C6V (* ((volatile uint32_t *) (0x40039000 + 0x10 + 6 * 0x8)))
  #define FTM2_C6V (* ((volatile uint32_t *) (0x400b8000 + 0x10 + 6 * 0x8)))
  #define FTM0_C7V (* ((volatile uint32_t *) (0x40038000 + 0x10 + 7 * 0x8)))
  #define FTM1_C7V (* ((volatile uint32_t *) (0x40039000 + 0x10 + 7 * 0x8)))
  #define FTM2_C7V (* ((volatile uint32_t *) (0x400b8000 + 0x10 + 7 * 0x8)))

  // Field VAL: Channel Value
    inline uint32_t FTM_CV_VAL (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

  // Field RESERVED: no description available
    inline uint32_t FTM_CV_RESERVED (const uint32_t inValue) {return (inValue & 0xffffU) << 16 ; }

//---  Register CNTIN: Counter Initial Value
  #define FTM_CNTIN(group) (* ((volatile uint32_t *) (kBaseAddress_CNTIN [group] + 0x4c)))
  #define FTM0_CNTIN (* ((volatile uint32_t *) (0x40038000 + 0x4c)))
  #define FTM1_CNTIN (* ((volatile uint32_t *) (0x40039000 + 0x4c)))
  #define FTM2_CNTIN (* ((volatile uint32_t *) (0x400b8000 + 0x4c)))

  // Field INIT: no description available
    inline uint32_t FTM_CNTIN_INIT (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

  // Field RESERVED: no description available
    inline uint32_t FTM_CNTIN_RESERVED (const uint32_t inValue) {return (inValue & 0xffffU) << 16 ; }

//---  Register STATUS: Capture and Compare Status
  #define FTM_STATUS(group) (* ((volatile uint32_t *) (kBaseAddress_STATUS [group] + 0x50)))
  #define FTM0_STATUS (* ((volatile uint32_t *) (0x40038000 + 0x50)))
  #define FTM1_STATUS (* ((volatile uint32_t *) (0x40039000 + 0x50)))
  #define FTM2_STATUS (* ((volatile uint32_t *) (0x400b8000 + 0x50)))

  // Field CH0F: Channel 0 Flag
    const uint32_t FTM_STATUS_CH0F = 1U << 0 ;

  // Field CH1F: Channel 1 Flag
    const uint32_t FTM_STATUS_CH1F = 1U << 1 ;

  // Field CH2F: Channel 2 Flag
    const uint32_t FTM_STATUS_CH2F = 1U << 2 ;

  // Field CH3F: Channel 3 Flag
    const uint32_t FTM_STATUS_CH3F = 1U << 3 ;

  // Field CH4F: Channel 4 Flag
    const uint32_t FTM_STATUS_CH4F = 1U << 4 ;

  // Field CH5F: Channel 5 Flag
    const uint32_t FTM_STATUS_CH5F = 1U << 5 ;

  // Field CH6F: Channel 6 Flag
    const uint32_t FTM_STATUS_CH6F = 1U << 6 ;

  // Field CH7F: Channel 7 Flag
    const uint32_t FTM_STATUS_CH7F = 1U << 7 ;

  // Field RESERVED: no description available
    inline uint32_t FTM_STATUS_RESERVED (const uint32_t inValue) {return (inValue & 0xffffffU) << 8 ; }

//---  Register MODE: Features Mode Selection
  #define FTM_MODE(group) (* ((volatile uint32_t *) (kBaseAddress_MODE [group] + 0x54)))
  #define FTM0_MODE (* ((volatile uint32_t *) (0x40038000 + 0x54)))
  #define FTM1_MODE (* ((volatile uint32_t *) (0x40039000 + 0x54)))
  #define FTM2_MODE (* ((volatile uint32_t *) (0x400b8000 + 0x54)))

  // Field FTMEN: FTM Enable
    const uint32_t FTM_MODE_FTMEN = 1U << 0 ;

  // Field INIT: Initialize the Channels Output
    const uint32_t FTM_MODE_INIT = 1U << 1 ;

  // Field WPDIS: Write Protection Disable
    const uint32_t FTM_MODE_WPDIS = 1U << 2 ;

  // Field PWMSYNC: PWM Synchronization Mode
    const uint32_t FTM_MODE_PWMSYNC = 1U << 3 ;

  // Field CAPTEST: Capture Test Mode Enable
    const uint32_t FTM_MODE_CAPTEST = 1U << 4 ;

  // Field FAULTM: Fault Control Mode
    inline uint32_t FTM_MODE_FAULTM (const uint32_t inValue) {return (inValue & 0x3U) << 5 ; }

  // Field FAULTIE: Fault Interrupt Enable
    const uint32_t FTM_MODE_FAULTIE = 1U << 7 ;

  // Field RESERVED: no description available
    inline uint32_t FTM_MODE_RESERVED (const uint32_t inValue) {return (inValue & 0xffffffU) << 8 ; }

//---  Register SYNC: Synchronization
  #define FTM_SYNC(group) (* ((volatile uint32_t *) (kBaseAddress_SYNC [group] + 0x58)))
  #define FTM0_SYNC (* ((volatile uint32_t *) (0x40038000 + 0x58)))
  #define FTM1_SYNC (* ((volatile uint32_t *) (0x40039000 + 0x58)))
  #define FTM2_SYNC (* ((volatile uint32_t *) (0x400b8000 + 0x58)))

  // Field CNTMIN: Minimum loading point enable
    const uint32_t FTM_SYNC_CNTMIN = 1U << 0 ;

  // Field CNTMAX: Maximum loading point enable
    const uint32_t FTM_SYNC_CNTMAX = 1U << 1 ;

  // Field REINIT: FTM Counter Reinitialization by Synchronization (FTM Counter Synchronization)
    const uint32_t FTM_SYNC_REINIT = 1U << 2 ;

  // Field SYNCHOM: Output Mask Synchronization
    const uint32_t FTM_SYNC_SYNCHOM = 1U << 3 ;

  // Field TRIG0: PWM Synchronization Hardware Trigger 0
    const uint32_t FTM_SYNC_TRIG0 = 1U << 4 ;

  // Field TRIG1: PWM Synchronization Hardware Trigger 1
    const uint32_t FTM_SYNC_TRIG1 = 1U << 5 ;

  // Field TRIG2: PWM Synchronization Hardware Trigger 2
    const uint32_t FTM_SYNC_TRIG2 = 1U << 6 ;

  // Field SWSYNC: PWM Synchronization Software Trigger
    const uint32_t FTM_SYNC_SWSYNC = 1U << 7 ;

  // Field RESERVED: no description available
    inline uint32_t FTM_SYNC_RESERVED (const uint32_t inValue) {return (inValue & 0xffffffU) << 8 ; }

//---  Register OUTINIT: Initial State for Channels Output
  #define FTM_OUTINIT(group) (* ((volatile uint32_t *) (kBaseAddress_OUTINIT [group] + 0x5c)))
  #define FTM0_OUTINIT (* ((volatile uint32_t *) (0x40038000 + 0x5c)))
  #define FTM1_OUTINIT (* ((volatile uint32_t *) (0x40039000 + 0x5c)))
  #define FTM2_OUTINIT (* ((volatile uint32_t *) (0x400b8000 + 0x5c)))

  // Field CH0OI: Channel 0 Output Initialization Value
    const uint32_t FTM_OUTINIT_CH0OI = 1U << 0 ;

  // Field CH1OI: Channel 1 Output Initialization Value
    const uint32_t FTM_OUTINIT_CH1OI = 1U << 1 ;

  // Field CH2OI: Channel 2 Output Initialization Value
    const uint32_t FTM_OUTINIT_CH2OI = 1U << 2 ;

  // Field CH3OI: Channel 3 Output Initialization Value
    const uint32_t FTM_OUTINIT_CH3OI = 1U << 3 ;

  // Field CH4OI: Channel 4 Output Initialization Value
    const uint32_t FTM_OUTINIT_CH4OI = 1U << 4 ;

  // Field CH5OI: Channel 5 Output Initialization Value
    const uint32_t FTM_OUTINIT_CH5OI = 1U << 5 ;

  // Field CH6OI: Channel 6 Output Initialization Value
    const uint32_t FTM_OUTINIT_CH6OI = 1U << 6 ;

  // Field CH7OI: Channel 7 Output Initialization Value
    const uint32_t FTM_OUTINIT_CH7OI = 1U << 7 ;

  // Field RESERVED: no description available
    inline uint32_t FTM_OUTINIT_RESERVED (const uint32_t inValue) {return (inValue & 0xffffffU) << 8 ; }

//---  Register OUTMASK: Output Mask
  #define FTM_OUTMASK(group) (* ((volatile uint32_t *) (kBaseAddress_OUTMASK [group] + 0x60)))
  #define FTM0_OUTMASK (* ((volatile uint32_t *) (0x40038000 + 0x60)))
  #define FTM1_OUTMASK (* ((volatile uint32_t *) (0x40039000 + 0x60)))
  #define FTM2_OUTMASK (* ((volatile uint32_t *) (0x400b8000 + 0x60)))

  // Field CH0OM: Channel 0 Output Mask
    const uint32_t FTM_OUTMASK_CH0OM = 1U << 0 ;

  // Field CH1OM: Channel 1 Output Mask
    const uint32_t FTM_OUTMASK_CH1OM = 1U << 1 ;

  // Field CH2OM: Channel 2 Output Mask
    const uint32_t FTM_OUTMASK_CH2OM = 1U << 2 ;

  // Field CH3OM: Channel 3 Output Mask
    const uint32_t FTM_OUTMASK_CH3OM = 1U << 3 ;

  // Field CH4OM: Channel 4 Output Mask
    const uint32_t FTM_OUTMASK_CH4OM = 1U << 4 ;

  // Field CH5OM: Channel 5 Output Mask
    const uint32_t FTM_OUTMASK_CH5OM = 1U << 5 ;

  // Field CH6OM: Channel 6 Output Mask
    const uint32_t FTM_OUTMASK_CH6OM = 1U << 6 ;

  // Field CH7OM: Channel 7 Output Mask
    const uint32_t FTM_OUTMASK_CH7OM = 1U << 7 ;

  // Field RESERVED: no description available
    inline uint32_t FTM_OUTMASK_RESERVED (const uint32_t inValue) {return (inValue & 0xffffffU) << 8 ; }

//---  Register COMBINE: Function for Linked Channels
  #define FTM_COMBINE(group) (* ((volatile uint32_t *) (kBaseAddress_COMBINE [group] + 0x64)))
  #define FTM0_COMBINE (* ((volatile uint32_t *) (0x40038000 + 0x64)))
  #define FTM1_COMBINE (* ((volatile uint32_t *) (0x40039000 + 0x64)))
  #define FTM2_COMBINE (* ((volatile uint32_t *) (0x400b8000 + 0x64)))

  // Field COMBINE0: Combine Channels for n = 0
    const uint32_t FTM_COMBINE_COMBINE0 = 1U << 0 ;

  // Field COMP0: Complement of Channel (n) for n = 0
    const uint32_t FTM_COMBINE_COMP0 = 1U << 1 ;

  // Field DECAPEN0: Dual Edge Capture Mode Enable for n = 0
    const uint32_t FTM_COMBINE_DECAPEN0 = 1U << 2 ;

  // Field DECAP0: Dual Edge Capture Mode Captures for n = 0
    const uint32_t FTM_COMBINE_DECAP0 = 1U << 3 ;

  // Field DTEN0: Deadtime Enable for n = 0
    const uint32_t FTM_COMBINE_DTEN0 = 1U << 4 ;

  // Field SYNCEN0: Synchronization Enable for n = 0
    const uint32_t FTM_COMBINE_SYNCEN0 = 1U << 5 ;

  // Field FAULTEN0: Fault Control Enable for n = 0
    const uint32_t FTM_COMBINE_FAULTEN0 = 1U << 6 ;

  // Field RESERVED: no description available
    const uint32_t FTM_COMBINE_RESERVED = 1U << 7 ;

  // Field COMBINE1: Combine Channels for n = 2
    const uint32_t FTM_COMBINE_COMBINE1 = 1U << 8 ;

  // Field COMP1: Complement of Channel (n) for n = 2
    const uint32_t FTM_COMBINE_COMP1 = 1U << 9 ;

  // Field DECAPEN1: Dual Edge Capture Mode Enable for n = 2
    const uint32_t FTM_COMBINE_DECAPEN1 = 1U << 10 ;

  // Field DECAP1: Dual Edge Capture Mode Captures for n = 2
    const uint32_t FTM_COMBINE_DECAP1 = 1U << 11 ;

  // Field DTEN1: Deadtime Enable for n = 2
    const uint32_t FTM_COMBINE_DTEN1 = 1U << 12 ;

  // Field SYNCEN1: Synchronization Enable for n = 2
    const uint32_t FTM_COMBINE_SYNCEN1 = 1U << 13 ;

  // Field FAULTEN1: Fault Control Enable for n = 2
    const uint32_t FTM_COMBINE_FAULTEN1 = 1U << 14 ;

  // Field RESERVED: no description available
    const uint32_t FTM_COMBINE_RESERVED = 1U << 15 ;

  // Field COMBINE2: Combine Channels for n = 4
    const uint32_t FTM_COMBINE_COMBINE2 = 1U << 16 ;

  // Field COMP2: Complement of Channel (n) for n = 4
    const uint32_t FTM_COMBINE_COMP2 = 1U << 17 ;

  // Field DECAPEN2: Dual Edge Capture Mode Enable for n = 4
    const uint32_t FTM_COMBINE_DECAPEN2 = 1U << 18 ;

  // Field DECAP2: Dual Edge Capture Mode Captures for n = 4
    const uint32_t FTM_COMBINE_DECAP2 = 1U << 19 ;

  // Field DTEN2: Deadtime Enable for n = 4
    const uint32_t FTM_COMBINE_DTEN2 = 1U << 20 ;

  // Field SYNCEN2: Synchronization Enable for n = 4
    const uint32_t FTM_COMBINE_SYNCEN2 = 1U << 21 ;

  // Field FAULTEN2: Fault Control Enable for n = 4
    const uint32_t FTM_COMBINE_FAULTEN2 = 1U << 22 ;

  // Field RESERVED: no description available
    const uint32_t FTM_COMBINE_RESERVED = 1U << 23 ;

  // Field COMBINE3: Combine Channels for n = 6
    const uint32_t FTM_COMBINE_COMBINE3 = 1U << 24 ;

  // Field COMP3: Complement of Channel (n) for n = 6
    const uint32_t FTM_COMBINE_COMP3 = 1U << 25 ;

  // Field DECAPEN3: Dual Edge Capture Mode Enable for n = 6
    const uint32_t FTM_COMBINE_DECAPEN3 = 1U << 26 ;

  // Field DECAP3: Dual Edge Capture Mode Captures for n = 6
    const uint32_t FTM_COMBINE_DECAP3 = 1U << 27 ;

  // Field DTEN3: Deadtime Enable for n = 6
    const uint32_t FTM_COMBINE_DTEN3 = 1U << 28 ;

  // Field SYNCEN3: Synchronization Enable for n = 6
    const uint32_t FTM_COMBINE_SYNCEN3 = 1U << 29 ;

  // Field FAULTEN3: Fault Control Enable for n = 6
    const uint32_t FTM_COMBINE_FAULTEN3 = 1U << 30 ;

  // Field RESERVED: no description available
    const uint32_t FTM_COMBINE_RESERVED = 1U << 31 ;

//---  Register DEADTIME: Deadtime Insertion Control
  #define FTM_DEADTIME(group) (* ((volatile uint32_t *) (kBaseAddress_DEADTIME [group] + 0x68)))
  #define FTM0_DEADTIME (* ((volatile uint32_t *) (0x40038000 + 0x68)))
  #define FTM1_DEADTIME (* ((volatile uint32_t *) (0x40039000 + 0x68)))
  #define FTM2_DEADTIME (* ((volatile uint32_t *) (0x400b8000 + 0x68)))

  // Field DTVAL: Deadtime Value
    inline uint32_t FTM_DEADTIME_DTVAL (const uint32_t inValue) {return (inValue & 0x3fU) << 0 ; }

  // Field DTPS: Deadtime Prescaler Value
    inline uint32_t FTM_DEADTIME_DTPS (const uint32_t inValue) {return (inValue & 0x3U) << 6 ; }

  // Field RESERVED: no description available
    inline uint32_t FTM_DEADTIME_RESERVED (const uint32_t inValue) {return (inValue & 0xffffffU) << 8 ; }

//---  Register EXTTRIG: FTM External Trigger
  #define FTM_EXTTRIG(group) (* ((volatile uint32_t *) (kBaseAddress_EXTTRIG [group] + 0x6c)))
  #define FTM0_EXTTRIG (* ((volatile uint32_t *) (0x40038000 + 0x6c)))
  #define FTM1_EXTTRIG (* ((volatile uint32_t *) (0x40039000 + 0x6c)))
  #define FTM2_EXTTRIG (* ((volatile uint32_t *) (0x400b8000 + 0x6c)))

  // Field CH2TRIG: Channel 2 Trigger Enable
    const uint32_t FTM_EXTTRIG_CH2TRIG = 1U << 0 ;

  // Field CH3TRIG: Channel 3 Trigger Enable
    const uint32_t FTM_EXTTRIG_CH3TRIG = 1U << 1 ;

  // Field CH4TRIG: Channel 4 Trigger Enable
    const uint32_t FTM_EXTTRIG_CH4TRIG = 1U << 2 ;

  // Field CH5TRIG: Channel 5 Trigger Enable
    const uint32_t FTM_EXTTRIG_CH5TRIG = 1U << 3 ;

  // Field CH0TRIG: Channel 0 Trigger Enable
    const uint32_t FTM_EXTTRIG_CH0TRIG = 1U << 4 ;

  // Field CH1TRIG: Channel 1 Trigger Enable
    const uint32_t FTM_EXTTRIG_CH1TRIG = 1U << 5 ;

  // Field INITTRIGEN: Initialization Trigger Enable
    const uint32_t FTM_EXTTRIG_INITTRIGEN = 1U << 6 ;

  // Field TRIGF: Channel Trigger Flag
    const uint32_t FTM_EXTTRIG_TRIGF = 1U << 7 ;

  // Field RESERVED: no description available
    inline uint32_t FTM_EXTTRIG_RESERVED (const uint32_t inValue) {return (inValue & 0xffffffU) << 8 ; }

//---  Register POL: Channels Polarity
  #define FTM_POL(group) (* ((volatile uint32_t *) (kBaseAddress_POL [group] + 0x70)))
  #define FTM0_POL (* ((volatile uint32_t *) (0x40038000 + 0x70)))
  #define FTM1_POL (* ((volatile uint32_t *) (0x40039000 + 0x70)))
  #define FTM2_POL (* ((volatile uint32_t *) (0x400b8000 + 0x70)))

  // Field POL0: Channel 0 Polarity
    const uint32_t FTM_POL_POL0 = 1U << 0 ;

  // Field POL1: Channel 1 Polarity
    const uint32_t FTM_POL_POL1 = 1U << 1 ;

  // Field POL2: Channel 2 Polarity
    const uint32_t FTM_POL_POL2 = 1U << 2 ;

  // Field POL3: Channel 3 Polarity
    const uint32_t FTM_POL_POL3 = 1U << 3 ;

  // Field POL4: Channel 4 Polarity
    const uint32_t FTM_POL_POL4 = 1U << 4 ;

  // Field POL5: Channel 5 Polarity
    const uint32_t FTM_POL_POL5 = 1U << 5 ;

  // Field POL6: Channel 6 Polarity
    const uint32_t FTM_POL_POL6 = 1U << 6 ;

  // Field POL7: Channel 7 Polarity
    const uint32_t FTM_POL_POL7 = 1U << 7 ;

  // Field RESERVED: no description available
    inline uint32_t FTM_POL_RESERVED (const uint32_t inValue) {return (inValue & 0xffffffU) << 8 ; }

//---  Register FMS: Fault Mode Status
  #define FTM_FMS(group) (* ((volatile uint32_t *) (kBaseAddress_FMS [group] + 0x74)))
  #define FTM0_FMS (* ((volatile uint32_t *) (0x40038000 + 0x74)))
  #define FTM1_FMS (* ((volatile uint32_t *) (0x40039000 + 0x74)))
  #define FTM2_FMS (* ((volatile uint32_t *) (0x400b8000 + 0x74)))

  // Field FAULTF0: Fault Detection Flag 0
    const uint32_t FTM_FMS_FAULTF0 = 1U << 0 ;

  // Field FAULTF1: Fault Detection Flag 1
    const uint32_t FTM_FMS_FAULTF1 = 1U << 1 ;

  // Field FAULTF2: Fault Detection Flag 2
    const uint32_t FTM_FMS_FAULTF2 = 1U << 2 ;

  // Field FAULTF3: Fault Detection Flag 3
    const uint32_t FTM_FMS_FAULTF3 = 1U << 3 ;

  // Field RESERVED: no description available
    const uint32_t FTM_FMS_RESERVED = 1U << 4 ;

  // Field FAULTIN: Fault Inputs
    const uint32_t FTM_FMS_FAULTIN = 1U << 5 ;

  // Field WPEN: Write Protection Enable
    const uint32_t FTM_FMS_WPEN = 1U << 6 ;

  // Field FAULTF: Fault Detection Flag
    const uint32_t FTM_FMS_FAULTF = 1U << 7 ;

  // Field RESERVED: no description available
    inline uint32_t FTM_FMS_RESERVED (const uint32_t inValue) {return (inValue & 0xffffffU) << 8 ; }

//---  Register FILTER: Input Capture Filter Control
  #define FTM_FILTER(group) (* ((volatile uint32_t *) (kBaseAddress_FILTER [group] + 0x78)))
  #define FTM0_FILTER (* ((volatile uint32_t *) (0x40038000 + 0x78)))
  #define FTM1_FILTER (* ((volatile uint32_t *) (0x40039000 + 0x78)))
  #define FTM2_FILTER (* ((volatile uint32_t *) (0x400b8000 + 0x78)))

  // Field CH0FVAL: Channel 0 Input Filter
    inline uint32_t FTM_FILTER_CH0FVAL (const uint32_t inValue) {return (inValue & 0xfU) << 0 ; }

  // Field CH1FVAL: Channel 1 Input Filter
    inline uint32_t FTM_FILTER_CH1FVAL (const uint32_t inValue) {return (inValue & 0xfU) << 4 ; }

  // Field CH2FVAL: Channel 2 Input Filter
    inline uint32_t FTM_FILTER_CH2FVAL (const uint32_t inValue) {return (inValue & 0xfU) << 8 ; }

  // Field CH3FVAL: Channel 3 Input Filter
    inline uint32_t FTM_FILTER_CH3FVAL (const uint32_t inValue) {return (inValue & 0xfU) << 12 ; }

  // Field RESERVED: no description available
    inline uint32_t FTM_FILTER_RESERVED (const uint32_t inValue) {return (inValue & 0xffffU) << 16 ; }

//---  Register FLTCTRL: Fault Control
  #define FTM_FLTCTRL(group) (* ((volatile uint32_t *) (kBaseAddress_FLTCTRL [group] + 0x7c)))
  #define FTM0_FLTCTRL (* ((volatile uint32_t *) (0x40038000 + 0x7c)))
  #define FTM1_FLTCTRL (* ((volatile uint32_t *) (0x40039000 + 0x7c)))
  #define FTM2_FLTCTRL (* ((volatile uint32_t *) (0x400b8000 + 0x7c)))

  // Field FAULT0EN: Fault Input 0 Enable
    const uint32_t FTM_FLTCTRL_FAULT0EN = 1U << 0 ;

  // Field FAULT1EN: Fault Input 1 Enable
    const uint32_t FTM_FLTCTRL_FAULT1EN = 1U << 1 ;

  // Field FAULT2EN: Fault Input 2 Enable
    const uint32_t FTM_FLTCTRL_FAULT2EN = 1U << 2 ;

  // Field FAULT3EN: Fault Input 3 Enable
    const uint32_t FTM_FLTCTRL_FAULT3EN = 1U << 3 ;

  // Field FFLTR0EN: Fault Input 0 Filter Enable
    const uint32_t FTM_FLTCTRL_FFLTR0EN = 1U << 4 ;

  // Field FFLTR1EN: Fault Input 1 Filter Enable
    const uint32_t FTM_FLTCTRL_FFLTR1EN = 1U << 5 ;

  // Field FFLTR2EN: Fault Input 2 Filter Enable
    const uint32_t FTM_FLTCTRL_FFLTR2EN = 1U << 6 ;

  // Field FFLTR3EN: Fault Input 3 Filter Enable
    const uint32_t FTM_FLTCTRL_FFLTR3EN = 1U << 7 ;

  // Field FFVAL: Fault Input Filter
    inline uint32_t FTM_FLTCTRL_FFVAL (const uint32_t inValue) {return (inValue & 0xfU) << 8 ; }

  // Field RESERVED: no description available
    inline uint32_t FTM_FLTCTRL_RESERVED (const uint32_t inValue) {return (inValue & 0xfffffU) << 12 ; }

//---  Register QDCTRL: Quadrature Decoder Control and Status
  #define FTM_QDCTRL(group) (* ((volatile uint32_t *) (kBaseAddress_QDCTRL [group] + 0x80)))
  #define FTM0_QDCTRL (* ((volatile uint32_t *) (0x40038000 + 0x80)))
  #define FTM1_QDCTRL (* ((volatile uint32_t *) (0x40039000 + 0x80)))
  #define FTM2_QDCTRL (* ((volatile uint32_t *) (0x400b8000 + 0x80)))

  // Field QUADEN: Quadrature Decoder Mode Enable
    const uint32_t FTM_QDCTRL_QUADEN = 1U << 0 ;

  // Field TOFDIR: Timer Overflow Direction in Quadrature Decoder Mode
    const uint32_t FTM_QDCTRL_TOFDIR = 1U << 1 ;

  // Field QUADIR: FTM Counter Direction in Quadrature Decoder Mode
    const uint32_t FTM_QDCTRL_QUADIR = 1U << 2 ;

  // Field QUADMODE: Quadrature Decoder Mode
    const uint32_t FTM_QDCTRL_QUADMODE = 1U << 3 ;

  // Field PHBPOL: Phase B Input Polarity
    const uint32_t FTM_QDCTRL_PHBPOL = 1U << 4 ;

  // Field PHAPOL: Phase A Input Polarity
    const uint32_t FTM_QDCTRL_PHAPOL = 1U << 5 ;

  // Field PHBFLTREN: Phase B Input Filter Enable
    const uint32_t FTM_QDCTRL_PHBFLTREN = 1U << 6 ;

  // Field PHAFLTREN: Phase A Input Filter Enable
    const uint32_t FTM_QDCTRL_PHAFLTREN = 1U << 7 ;

  // Field RESERVED: no description available
    inline uint32_t FTM_QDCTRL_RESERVED (const uint32_t inValue) {return (inValue & 0xffffffU) << 8 ; }

//---  Register CONF: Configuration
  #define FTM_CONF(group) (* ((volatile uint32_t *) (kBaseAddress_CONF [group] + 0x84)))
  #define FTM0_CONF (* ((volatile uint32_t *) (0x40038000 + 0x84)))
  #define FTM1_CONF (* ((volatile uint32_t *) (0x40039000 + 0x84)))
  #define FTM2_CONF (* ((volatile uint32_t *) (0x400b8000 + 0x84)))

  // Field NUMTOF: TOF Frequency
    inline uint32_t FTM_CONF_NUMTOF (const uint32_t inValue) {return (inValue & 0x1fU) << 0 ; }

  // Field RESERVED: no description available
    const uint32_t FTM_CONF_RESERVED = 1U << 5 ;

  // Field BDMMODE: BDM Mode
    inline uint32_t FTM_CONF_BDMMODE (const uint32_t inValue) {return (inValue & 0x3U) << 6 ; }

  // Field RESERVED: no description available
    const uint32_t FTM_CONF_RESERVED = 1U << 8 ;

  // Field GTBEEN: Global time base enable
    const uint32_t FTM_CONF_GTBEEN = 1U << 9 ;

  // Field GTBEOUT: Global time base output
    const uint32_t FTM_CONF_GTBEOUT = 1U << 10 ;

  // Field RESERVED: no description available
    inline uint32_t FTM_CONF_RESERVED (const uint32_t inValue) {return (inValue & 0x1fffffU) << 11 ; }

//---  Register FLTPOL: FTM Fault Input Polarity
  #define FTM_FLTPOL(group) (* ((volatile uint32_t *) (kBaseAddress_FLTPOL [group] + 0x88)))
  #define FTM0_FLTPOL (* ((volatile uint32_t *) (0x40038000 + 0x88)))
  #define FTM1_FLTPOL (* ((volatile uint32_t *) (0x40039000 + 0x88)))
  #define FTM2_FLTPOL (* ((volatile uint32_t *) (0x400b8000 + 0x88)))

  // Field FLT0POL: Fault Input 0 Polarity
    const uint32_t FTM_FLTPOL_FLT0POL = 1U << 0 ;

  // Field FLT1POL: Fault Input 1 Polarity
    const uint32_t FTM_FLTPOL_FLT1POL = 1U << 1 ;

  // Field FLT2POL: Fault Input 2 Polarity
    const uint32_t FTM_FLTPOL_FLT2POL = 1U << 2 ;

  // Field FLT3POL: Fault Input 3 Polarity
    const uint32_t FTM_FLTPOL_FLT3POL = 1U << 3 ;

  // Field RESERVED: no description available
    inline uint32_t FTM_FLTPOL_RESERVED (const uint32_t inValue) {return (inValue & 0xfffffffU) << 4 ; }

//---  Register SYNCONF: Synchronization Configuration
  #define FTM_SYNCONF(group) (* ((volatile uint32_t *) (kBaseAddress_SYNCONF [group] + 0x8c)))
  #define FTM0_SYNCONF (* ((volatile uint32_t *) (0x40038000 + 0x8c)))
  #define FTM1_SYNCONF (* ((volatile uint32_t *) (0x40039000 + 0x8c)))
  #define FTM2_SYNCONF (* ((volatile uint32_t *) (0x400b8000 + 0x8c)))

  // Field HWTRIGMODE: Hardware Trigger Mode
    const uint32_t FTM_SYNCONF_HWTRIGMODE = 1U << 0 ;

  // Field RESERVED: no description available
    const uint32_t FTM_SYNCONF_RESERVED = 1U << 1 ;

  // Field CNTINC: CNTIN register synchronization
    const uint32_t FTM_SYNCONF_CNTINC = 1U << 2 ;

  // Field RESERVED: no description available
    const uint32_t FTM_SYNCONF_RESERVED = 1U << 3 ;

  // Field INVC: INVCTRL register synchronization
    const uint32_t FTM_SYNCONF_INVC = 1U << 4 ;

  // Field SWOC: SWOCTRL register synchronization
    const uint32_t FTM_SYNCONF_SWOC = 1U << 5 ;

  // Field RESERVED: no description available
    const uint32_t FTM_SYNCONF_RESERVED = 1U << 6 ;

  // Field SYNCMODE: Synchronization Mode
    const uint32_t FTM_SYNCONF_SYNCMODE = 1U << 7 ;

  // Field SWRSTCNT: no description available
    const uint32_t FTM_SYNCONF_SWRSTCNT = 1U << 8 ;

  // Field SWWRBUF: no description available
    const uint32_t FTM_SYNCONF_SWWRBUF = 1U << 9 ;

  // Field SWOM: no description available
    const uint32_t FTM_SYNCONF_SWOM = 1U << 10 ;

  // Field SWINVC: no description available
    const uint32_t FTM_SYNCONF_SWINVC = 1U << 11 ;

  // Field SWSOC: no description available
    const uint32_t FTM_SYNCONF_SWSOC = 1U << 12 ;

  // Field RESERVED: no description available
    inline uint32_t FTM_SYNCONF_RESERVED (const uint32_t inValue) {return (inValue & 0x7U) << 13 ; }

  // Field HWRSTCNT: no description available
    const uint32_t FTM_SYNCONF_HWRSTCNT = 1U << 16 ;

  // Field HWWRBUF: no description available
    const uint32_t FTM_SYNCONF_HWWRBUF = 1U << 17 ;

  // Field HWOM: no description available
    const uint32_t FTM_SYNCONF_HWOM = 1U << 18 ;

  // Field HWINVC: no description available
    const uint32_t FTM_SYNCONF_HWINVC = 1U << 19 ;

  // Field HWSOC: no description available
    const uint32_t FTM_SYNCONF_HWSOC = 1U << 20 ;

  // Field RESERVED: no description available
    inline uint32_t FTM_SYNCONF_RESERVED (const uint32_t inValue) {return (inValue & 0x7ffU) << 21 ; }

//---  Register INVCTRL: FTM Inverting Control
  #define FTM_INVCTRL(group) (* ((volatile uint32_t *) (kBaseAddress_INVCTRL [group] + 0x90)))
  #define FTM0_INVCTRL (* ((volatile uint32_t *) (0x40038000 + 0x90)))
  #define FTM1_INVCTRL (* ((volatile uint32_t *) (0x40039000 + 0x90)))
  #define FTM2_INVCTRL (* ((volatile uint32_t *) (0x400b8000 + 0x90)))

  // Field INV0EN: Pair Channels 0 Inverting Enable
    const uint32_t FTM_INVCTRL_INV0EN = 1U << 0 ;

  // Field INV1EN: Pair Channels 1 Inverting Enable
    const uint32_t FTM_INVCTRL_INV1EN = 1U << 1 ;

  // Field INV2EN: Pair Channels 2 Inverting Enable
    const uint32_t FTM_INVCTRL_INV2EN = 1U << 2 ;

  // Field INV3EN: Pair Channels 3 Inverting Enable
    const uint32_t FTM_INVCTRL_INV3EN = 1U << 3 ;

  // Field RESERVED: no description available
    inline uint32_t FTM_INVCTRL_RESERVED (const uint32_t inValue) {return (inValue & 0xfffffffU) << 4 ; }

//---  Register SWOCTRL: FTM Software Output Control
  #define FTM_SWOCTRL(group) (* ((volatile uint32_t *) (kBaseAddress_SWOCTRL [group] + 0x94)))
  #define FTM0_SWOCTRL (* ((volatile uint32_t *) (0x40038000 + 0x94)))
  #define FTM1_SWOCTRL (* ((volatile uint32_t *) (0x40039000 + 0x94)))
  #define FTM2_SWOCTRL (* ((volatile uint32_t *) (0x400b8000 + 0x94)))

  // Field CH0OC: Channel 0 Software Output Control Enable
    const uint32_t FTM_SWOCTRL_CH0OC = 1U << 0 ;

  // Field CH1OC: Channel 1 Software Output Control Enable
    const uint32_t FTM_SWOCTRL_CH1OC = 1U << 1 ;

  // Field CH2OC: Channel 2 Software Output Control Enable
    const uint32_t FTM_SWOCTRL_CH2OC = 1U << 2 ;

  // Field CH3OC: Channel 3 Software Output Control Enable
    const uint32_t FTM_SWOCTRL_CH3OC = 1U << 3 ;

  // Field CH4OC: Channel 4 Software Output Control Enable
    const uint32_t FTM_SWOCTRL_CH4OC = 1U << 4 ;

  // Field CH5OC: Channel 5 Software Output Control Enable
    const uint32_t FTM_SWOCTRL_CH5OC = 1U << 5 ;

  // Field CH6OC: Channel 6 Software Output Control Enable
    const uint32_t FTM_SWOCTRL_CH6OC = 1U << 6 ;

  // Field CH7OC: Channel 7 Software Output Control Enable
    const uint32_t FTM_SWOCTRL_CH7OC = 1U << 7 ;

  // Field CH0OCV: Channel 0 Software Output Control Value
    const uint32_t FTM_SWOCTRL_CH0OCV = 1U << 8 ;

  // Field CH1OCV: Channel 1 Software Output Control Value
    const uint32_t FTM_SWOCTRL_CH1OCV = 1U << 9 ;

  // Field CH2OCV: Channel 2 Software Output Control Value
    const uint32_t FTM_SWOCTRL_CH2OCV = 1U << 10 ;

  // Field CH3OCV: Channel 3 Software Output Control Value
    const uint32_t FTM_SWOCTRL_CH3OCV = 1U << 11 ;

  // Field CH4OCV: Channel 4 Software Output Control Value
    const uint32_t FTM_SWOCTRL_CH4OCV = 1U << 12 ;

  // Field CH5OCV: Channel 5 Software Output Control Value
    const uint32_t FTM_SWOCTRL_CH5OCV = 1U << 13 ;

  // Field CH6OCV: Channel 6 Software Output Control Value
    const uint32_t FTM_SWOCTRL_CH6OCV = 1U << 14 ;

  // Field CH7OCV: Channel 7 Software Output Control Value
    const uint32_t FTM_SWOCTRL_CH7OCV = 1U << 15 ;

  // Field RESERVED: no description available
    inline uint32_t FTM_SWOCTRL_RESERVED (const uint32_t inValue) {return (inValue & 0xffffU) << 16 ; }

//---  Register PWMLOAD: FTM PWM Load
  #define FTM_PWMLOAD(group) (* ((volatile uint32_t *) (kBaseAddress_PWMLOAD [group] + 0x98)))
  #define FTM0_PWMLOAD (* ((volatile uint32_t *) (0x40038000 + 0x98)))
  #define FTM1_PWMLOAD (* ((volatile uint32_t *) (0x40039000 + 0x98)))
  #define FTM2_PWMLOAD (* ((volatile uint32_t *) (0x400b8000 + 0x98)))

  // Field CH0SEL: Channel 0 Select
    const uint32_t FTM_PWMLOAD_CH0SEL = 1U << 0 ;

  // Field CH1SEL: Channel 1 Select
    const uint32_t FTM_PWMLOAD_CH1SEL = 1U << 1 ;

  // Field CH2SEL: Channel 2 Select
    const uint32_t FTM_PWMLOAD_CH2SEL = 1U << 2 ;

  // Field CH3SEL: Channel 3 Select
    const uint32_t FTM_PWMLOAD_CH3SEL = 1U << 3 ;

  // Field CH4SEL: Channel 4 Select
    const uint32_t FTM_PWMLOAD_CH4SEL = 1U << 4 ;

  // Field CH5SEL: Channel 5 Select
    const uint32_t FTM_PWMLOAD_CH5SEL = 1U << 5 ;

  // Field CH6SEL: Channel 6 Select
    const uint32_t FTM_PWMLOAD_CH6SEL = 1U << 6 ;

  // Field CH7SEL: Channel 7 Select
    const uint32_t FTM_PWMLOAD_CH7SEL = 1U << 7 ;

  // Field RESERVED: no description available
    const uint32_t FTM_PWMLOAD_RESERVED = 1U << 8 ;

  // Field LDOK: Load Enable
    const uint32_t FTM_PWMLOAD_LDOK = 1U << 9 ;

  // Field RESERVED: no description available
    inline uint32_t FTM_PWMLOAD_RESERVED (const uint32_t inValue) {return (inValue & 0x3fffffU) << 10 ; }

//------------------------------------------------------------------------------
// PERIPHERAL GROUP: GPIO
//        PTA at 0x400ff000
//        PTB at 0x400ff040
//        PTC at 0x400ff080
//        PTD at 0x400ff0c0
//        PTE at 0x400ff100
//------------------------------------------------------------------------------

static const uint32_t kBaseAddress_GPIO [5] = {0x400ff000, 0x400ff040, 0x400ff080, 0x400ff0c0, 0x400ff100} ;

//------------------------------------------------------------------------------

//---  Register PDOR: Port Data Output Register
  #define GPIO_PDOR(group) (* ((volatile uint32_t *) (kBaseAddress_PDOR [group] + 0x0)))
  #define PTA_PDOR (* ((volatile uint32_t *) (0x400ff000 + 0x0)))
  #define PTB_PDOR (* ((volatile uint32_t *) (0x400ff040 + 0x0)))
  #define PTC_PDOR (* ((volatile uint32_t *) (0x400ff080 + 0x0)))
  #define PTD_PDOR (* ((volatile uint32_t *) (0x400ff0c0 + 0x0)))
  #define PTE_PDOR (* ((volatile uint32_t *) (0x400ff100 + 0x0)))

  // Field PDO: Port Data Output
    inline uint32_t GPIO_PDOR_PDO (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register PSOR: Port Set Output Register
  #define GPIO_PSOR(group) (* ((volatile uint32_t *) (kBaseAddress_PSOR [group] + 0x4)))
  #define PTA_PSOR (* ((volatile uint32_t *) (0x400ff000 + 0x4)))
  #define PTB_PSOR (* ((volatile uint32_t *) (0x400ff040 + 0x4)))
  #define PTC_PSOR (* ((volatile uint32_t *) (0x400ff080 + 0x4)))
  #define PTD_PSOR (* ((volatile uint32_t *) (0x400ff0c0 + 0x4)))
  #define PTE_PSOR (* ((volatile uint32_t *) (0x400ff100 + 0x4)))

  // Field PTSO: Port Set Output
    inline uint32_t GPIO_PSOR_PTSO (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register PCOR: Port Clear Output Register
  #define GPIO_PCOR(group) (* ((volatile uint32_t *) (kBaseAddress_PCOR [group] + 0x8)))
  #define PTA_PCOR (* ((volatile uint32_t *) (0x400ff000 + 0x8)))
  #define PTB_PCOR (* ((volatile uint32_t *) (0x400ff040 + 0x8)))
  #define PTC_PCOR (* ((volatile uint32_t *) (0x400ff080 + 0x8)))
  #define PTD_PCOR (* ((volatile uint32_t *) (0x400ff0c0 + 0x8)))
  #define PTE_PCOR (* ((volatile uint32_t *) (0x400ff100 + 0x8)))

  // Field PTCO: Port Clear Output
    inline uint32_t GPIO_PCOR_PTCO (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register PTOR: Port Toggle Output Register
  #define GPIO_PTOR(group) (* ((volatile uint32_t *) (kBaseAddress_PTOR [group] + 0xc)))
  #define PTA_PTOR (* ((volatile uint32_t *) (0x400ff000 + 0xc)))
  #define PTB_PTOR (* ((volatile uint32_t *) (0x400ff040 + 0xc)))
  #define PTC_PTOR (* ((volatile uint32_t *) (0x400ff080 + 0xc)))
  #define PTD_PTOR (* ((volatile uint32_t *) (0x400ff0c0 + 0xc)))
  #define PTE_PTOR (* ((volatile uint32_t *) (0x400ff100 + 0xc)))

  // Field PTTO: Port Toggle Output
    inline uint32_t GPIO_PTOR_PTTO (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register PDIR: Port Data Input Register
  #define GPIO_PDIR(group) (* ((volatile uint32_t *) (kBaseAddress_PDIR [group] + 0x10)))
  #define PTA_PDIR (* ((volatile uint32_t *) (0x400ff000 + 0x10)))
  #define PTB_PDIR (* ((volatile uint32_t *) (0x400ff040 + 0x10)))
  #define PTC_PDIR (* ((volatile uint32_t *) (0x400ff080 + 0x10)))
  #define PTD_PDIR (* ((volatile uint32_t *) (0x400ff0c0 + 0x10)))
  #define PTE_PDIR (* ((volatile uint32_t *) (0x400ff100 + 0x10)))

  // Field PDI: Port Data Input
    inline uint32_t GPIO_PDIR_PDI (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register PDDR: Port Data Direction Register
  #define GPIO_PDDR(group) (* ((volatile uint32_t *) (kBaseAddress_PDDR [group] + 0x14)))
  #define PTA_PDDR (* ((volatile uint32_t *) (0x400ff000 + 0x14)))
  #define PTB_PDDR (* ((volatile uint32_t *) (0x400ff040 + 0x14)))
  #define PTC_PDDR (* ((volatile uint32_t *) (0x400ff080 + 0x14)))
  #define PTD_PDDR (* ((volatile uint32_t *) (0x400ff0c0 + 0x14)))
  #define PTE_PDDR (* ((volatile uint32_t *) (0x400ff100 + 0x14)))

  // Field PDD: Port data direction
    inline uint32_t GPIO_PDDR_PDD (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//------------------------------------------------------------------------------
// PERIPHERAL GROUP: I2C
//        I2C0 at 0x40066000
//        I2C1 at 0x40067000
//------------------------------------------------------------------------------

static const uint32_t kBaseAddress_I2C [2] = {0x40066000, 0x40067000} ;

//------------------------------------------------------------------------------

//---  Register A1: I2C Address Register 1
  #define I2C_A1(group) (* ((volatile uint8_t *) (kBaseAddress_A1 [group] + 0x0)))
  #define I2C0_A1 (* ((volatile uint8_t *) (0x40066000 + 0x0)))
  #define I2C1_A1 (* ((volatile uint8_t *) (0x40067000 + 0x0)))

  // Field RESERVED: no description available
    const uint8_t I2C_A1_RESERVED = 1U << 0 ;

  // Field AD: Address
    inline uint8_t I2C_A1_AD (const uint8_t inValue) {return (inValue & 0x7fU) << 1 ; }

//---  Register F: I2C Frequency Divider register
  #define I2C_F(group) (* ((volatile uint8_t *) (kBaseAddress_F [group] + 0x1)))
  #define I2C0_F (* ((volatile uint8_t *) (0x40066000 + 0x1)))
  #define I2C1_F (* ((volatile uint8_t *) (0x40067000 + 0x1)))

  // Field ICR: Clock rate
    inline uint8_t I2C_F_ICR (const uint8_t inValue) {return (inValue & 0x3fU) << 0 ; }

  // Field MULT: no description available
    inline uint8_t I2C_F_MULT (const uint8_t inValue) {return (inValue & 0x3U) << 6 ; }

//---  Register C1: I2C Control Register 1
  #define I2C_C1(group) (* ((volatile uint8_t *) (kBaseAddress_C1 [group] + 0x2)))
  #define I2C0_C1 (* ((volatile uint8_t *) (0x40066000 + 0x2)))
  #define I2C1_C1 (* ((volatile uint8_t *) (0x40067000 + 0x2)))

  // Field DMAEN: DMA enable
    const uint8_t I2C_C1_DMAEN = 1U << 0 ;

  // Field WUEN: Wakeup enable
    const uint8_t I2C_C1_WUEN = 1U << 1 ;

  // Field RSTA: Repeat START
    const uint8_t I2C_C1_RSTA = 1U << 2 ;

  // Field TXAK: Transmit acknowledge enable
    const uint8_t I2C_C1_TXAK = 1U << 3 ;

  // Field TX: Transmit mode select
    const uint8_t I2C_C1_TX = 1U << 4 ;

  // Field MST: Master mode select
    const uint8_t I2C_C1_MST = 1U << 5 ;

  // Field IICIE: I2C interrupt enable
    const uint8_t I2C_C1_IICIE = 1U << 6 ;

  // Field IICEN: I2C enable
    const uint8_t I2C_C1_IICEN = 1U << 7 ;

//---  Register S: I2C Status Register
  #define I2C_S(group) (* ((volatile uint8_t *) (kBaseAddress_S [group] + 0x3)))
  #define I2C0_S (* ((volatile uint8_t *) (0x40066000 + 0x3)))
  #define I2C1_S (* ((volatile uint8_t *) (0x40067000 + 0x3)))

  // Field RXAK: Receive acknowledge
    const uint8_t I2C_S_RXAK = 1U << 0 ;

  // Field IICIF: Interrupt flag
    const uint8_t I2C_S_IICIF = 1U << 1 ;

  // Field SRW: Slave read/write
    const uint8_t I2C_S_SRW = 1U << 2 ;

  // Field RAM: Range address match
    const uint8_t I2C_S_RAM = 1U << 3 ;

  // Field ARBL: Arbitration lost
    const uint8_t I2C_S_ARBL = 1U << 4 ;

  // Field BUSY: Bus busy
    const uint8_t I2C_S_BUSY = 1U << 5 ;

  // Field IAAS: Addressed as a slave
    const uint8_t I2C_S_IAAS = 1U << 6 ;

  // Field TCF: Transfer complete flag
    const uint8_t I2C_S_TCF = 1U << 7 ;

//---  Register D: I2C Data I/O register
  #define I2C_D(group) (* ((volatile uint8_t *) (kBaseAddress_D [group] + 0x4)))
  #define I2C0_D (* ((volatile uint8_t *) (0x40066000 + 0x4)))
  #define I2C1_D (* ((volatile uint8_t *) (0x40067000 + 0x4)))

  // Field DATA: Data
    inline uint8_t I2C_D_DATA (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register C2: I2C Control Register 2
  #define I2C_C2(group) (* ((volatile uint8_t *) (kBaseAddress_C2 [group] + 0x5)))
  #define I2C0_C2 (* ((volatile uint8_t *) (0x40066000 + 0x5)))
  #define I2C1_C2 (* ((volatile uint8_t *) (0x40067000 + 0x5)))

  // Field AD: Slave address
    inline uint8_t I2C_C2_AD (const uint8_t inValue) {return (inValue & 0x7U) << 0 ; }

  // Field RMEN: Range address matching enable
    const uint8_t I2C_C2_RMEN = 1U << 3 ;

  // Field SBRC: Slave baud rate control
    const uint8_t I2C_C2_SBRC = 1U << 4 ;

  // Field HDRS: High drive select
    const uint8_t I2C_C2_HDRS = 1U << 5 ;

  // Field ADEXT: Address extension
    const uint8_t I2C_C2_ADEXT = 1U << 6 ;

  // Field GCAEN: General call address enable
    const uint8_t I2C_C2_GCAEN = 1U << 7 ;

//---  Register FLT: I2C Programmable Input Glitch Filter register
  #define I2C_FLT(group) (* ((volatile uint8_t *) (kBaseAddress_FLT [group] + 0x6)))
  #define I2C0_FLT (* ((volatile uint8_t *) (0x40066000 + 0x6)))
  #define I2C1_FLT (* ((volatile uint8_t *) (0x40067000 + 0x6)))

  // Field FLT: I2C programmable filter factor
    inline uint8_t I2C_FLT_FLT (const uint8_t inValue) {return (inValue & 0x1fU) << 0 ; }

  // Field RESERVED: no description available
    inline uint8_t I2C_FLT_RESERVED (const uint8_t inValue) {return (inValue & 0x3U) << 5 ; }

  // Field RESERVED: no description available
    const uint8_t I2C_FLT_RESERVED = 1U << 7 ;

//---  Register RA: I2C Range Address register
  #define I2C_RA(group) (* ((volatile uint8_t *) (kBaseAddress_RA [group] + 0x7)))
  #define I2C0_RA (* ((volatile uint8_t *) (0x40066000 + 0x7)))
  #define I2C1_RA (* ((volatile uint8_t *) (0x40067000 + 0x7)))

  // Field RESERVED: no description available
    const uint8_t I2C_RA_RESERVED = 1U << 0 ;

  // Field RAD: Range slave address
    inline uint8_t I2C_RA_RAD (const uint8_t inValue) {return (inValue & 0x7fU) << 1 ; }

//---  Register SMB: I2C SMBus Control and Status register
  #define I2C_SMB(group) (* ((volatile uint8_t *) (kBaseAddress_SMB [group] + 0x8)))
  #define I2C0_SMB (* ((volatile uint8_t *) (0x40066000 + 0x8)))
  #define I2C1_SMB (* ((volatile uint8_t *) (0x40067000 + 0x8)))

  // Field SHTF2IE: SHTF2 interrupt enable
    const uint8_t I2C_SMB_SHTF2IE = 1U << 0 ;

  // Field SHTF2: SCL high timeout flag 2
    const uint8_t I2C_SMB_SHTF2 = 1U << 1 ;

  // Field SHTF1: SCL high timeout flag 1
    const uint8_t I2C_SMB_SHTF1 = 1U << 2 ;

  // Field SLTF: SCL low timeout flag
    const uint8_t I2C_SMB_SLTF = 1U << 3 ;

  // Field TCKSEL: Timeout counter clock select
    const uint8_t I2C_SMB_TCKSEL = 1U << 4 ;

  // Field SIICAEN: Second I2C address enable
    const uint8_t I2C_SMB_SIICAEN = 1U << 5 ;

  // Field ALERTEN: SMBus alert response address enable
    const uint8_t I2C_SMB_ALERTEN = 1U << 6 ;

  // Field FACK: Fast NACK/ACK enable
    const uint8_t I2C_SMB_FACK = 1U << 7 ;

//---  Register A2: I2C Address Register 2
  #define I2C_A2(group) (* ((volatile uint8_t *) (kBaseAddress_A2 [group] + 0x9)))
  #define I2C0_A2 (* ((volatile uint8_t *) (0x40066000 + 0x9)))
  #define I2C1_A2 (* ((volatile uint8_t *) (0x40067000 + 0x9)))

  // Field RESERVED: no description available
    const uint8_t I2C_A2_RESERVED = 1U << 0 ;

  // Field SAD: SMBus address
    inline uint8_t I2C_A2_SAD (const uint8_t inValue) {return (inValue & 0x7fU) << 1 ; }

//---  Register SLTH: I2C SCL Low Timeout Register High
  #define I2C_SLTH(group) (* ((volatile uint8_t *) (kBaseAddress_SLTH [group] + 0xa)))
  #define I2C0_SLTH (* ((volatile uint8_t *) (0x40066000 + 0xa)))
  #define I2C1_SLTH (* ((volatile uint8_t *) (0x40067000 + 0xa)))

  // Field SSLT: no description available
    inline uint8_t I2C_SLTH_SSLT (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register SLTL: I2C SCL Low Timeout Register Low
  #define I2C_SLTL(group) (* ((volatile uint8_t *) (kBaseAddress_SLTL [group] + 0xb)))
  #define I2C0_SLTL (* ((volatile uint8_t *) (0x40066000 + 0xb)))
  #define I2C1_SLTL (* ((volatile uint8_t *) (0x40067000 + 0xb)))

  // Field SSLT: no description available
    inline uint8_t I2C_SLTL_SSLT (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//------------------------------------------------------------------------------
// Peripheral I2S0: Inter-IC Sound / Synchronous Audio Interface
//------------------------------------------------------------------------------

//---  Register TCSR: SAI Transmit Control Register
  #define I2S0_TCSR (* ((volatile uint32_t *) (0x4002f000 + 0)))

  // Field FRDE: FIFO request DMA enable
    const uint32_t I2S0_TCSR_FRDE = 1U << 0 ;

  // Field FWDE: FIFO warning DMA enable
    const uint32_t I2S0_TCSR_FWDE = 1U << 1 ;

  // Field RESERVED: no description available
    inline uint32_t I2S0_TCSR_RESERVED (const uint32_t inValue) {return (inValue & 0x7U) << 2 ; }

  // Field RESERVED: no description available
    inline uint32_t I2S0_TCSR_RESERVED (const uint32_t inValue) {return (inValue & 0x7U) << 5 ; }

  // Field FRIE: FIFO request interrupt enable
    const uint32_t I2S0_TCSR_FRIE = 1U << 8 ;

  // Field FWIE: FIFO warning interrupt enable
    const uint32_t I2S0_TCSR_FWIE = 1U << 9 ;

  // Field FEIE: FIFO error interrupt enable
    const uint32_t I2S0_TCSR_FEIE = 1U << 10 ;

  // Field SEIE: Sync error interrupt enable
    const uint32_t I2S0_TCSR_SEIE = 1U << 11 ;

  // Field WSIE: Word start interrupt enable
    const uint32_t I2S0_TCSR_WSIE = 1U << 12 ;

  // Field RESERVED: no description available
    inline uint32_t I2S0_TCSR_RESERVED (const uint32_t inValue) {return (inValue & 0x7U) << 13 ; }

  // Field FRF: FIFO request flag
    const uint32_t I2S0_TCSR_FRF = 1U << 16 ;

  // Field FWF: FIFO warning flag
    const uint32_t I2S0_TCSR_FWF = 1U << 17 ;

  // Field FEF: FIFO error flag
    const uint32_t I2S0_TCSR_FEF = 1U << 18 ;

  // Field SEF: Sync error flag
    const uint32_t I2S0_TCSR_SEF = 1U << 19 ;

  // Field WSF: Word start flag
    const uint32_t I2S0_TCSR_WSF = 1U << 20 ;

  // Field RESERVED: no description available
    inline uint32_t I2S0_TCSR_RESERVED (const uint32_t inValue) {return (inValue & 0x7U) << 21 ; }

  // Field SR: Software reset
    const uint32_t I2S0_TCSR_SR = 1U << 24 ;

  // Field FR: FIFO reset
    const uint32_t I2S0_TCSR_FR = 1U << 25 ;

  // Field RESERVED: no description available
    inline uint32_t I2S0_TCSR_RESERVED (const uint32_t inValue) {return (inValue & 0x3U) << 26 ; }

  // Field BCE: Bit Clock Enable
    const uint32_t I2S0_TCSR_BCE = 1U << 28 ;

  // Field DBGE: Debug enable
    const uint32_t I2S0_TCSR_DBGE = 1U << 29 ;

  // Field STOPE: Stop enable
    const uint32_t I2S0_TCSR_STOPE = 1U << 30 ;

  // Field TE: Transmitter enable
    const uint32_t I2S0_TCSR_TE = 1U << 31 ;

//---  Register TCR1: SAI Transmit Configuration 1 Register
  #define I2S0_TCR1 (* ((volatile uint32_t *) (0x4002f000 + 4)))

  // Field TFW: Transmit FIFO watermark
    inline uint32_t I2S0_TCR1_TFW (const uint32_t inValue) {return (inValue & 0x7U) << 0 ; }

  // Field RESERVED: no description available
    inline uint32_t I2S0_TCR1_RESERVED (const uint32_t inValue) {return (inValue & 0x1fffffffU) << 3 ; }

//---  Register TCR2: SAI Transmit Configuration 2 Register
  #define I2S0_TCR2 (* ((volatile uint32_t *) (0x4002f000 + 8)))

  // Field DIV: Bit clock divide
    inline uint32_t I2S0_TCR2_DIV (const uint32_t inValue) {return (inValue & 0xffU) << 0 ; }

  // Field RESERVED: no description available
    inline uint32_t I2S0_TCR2_RESERVED (const uint32_t inValue) {return (inValue & 0xffffU) << 8 ; }

  // Field BCD: Bit clock direction
    const uint32_t I2S0_TCR2_BCD = 1U << 24 ;

  // Field BCP: Bit clock polarity
    const uint32_t I2S0_TCR2_BCP = 1U << 25 ;

  // Field MSEL: MCLK Select
    inline uint32_t I2S0_TCR2_MSEL (const uint32_t inValue) {return (inValue & 0x3U) << 26 ; }

  // Field BCI: Bit Clock Input
    const uint32_t I2S0_TCR2_BCI = 1U << 28 ;

  // Field BCS: Bit Clock Swap
    const uint32_t I2S0_TCR2_BCS = 1U << 29 ;

  // Field SYNC: Synchronous Mode
    inline uint32_t I2S0_TCR2_SYNC (const uint32_t inValue) {return (inValue & 0x3U) << 30 ; }

//---  Register TCR3: SAI Transmit Configuration 3 Register
  #define I2S0_TCR3 (* ((volatile uint32_t *) (0x4002f000 + 12)))

  // Field WDFL: Word flag configuration
    inline uint32_t I2S0_TCR3_WDFL (const uint32_t inValue) {return (inValue & 0x1fU) << 0 ; }

  // Field RESERVED: no description available
    inline uint32_t I2S0_TCR3_RESERVED (const uint32_t inValue) {return (inValue & 0x7ffU) << 5 ; }

  // Field TCE: Transmit channel enable
    inline uint32_t I2S0_TCR3_TCE (const uint32_t inValue) {return (inValue & 0x3U) << 16 ; }

  // Field RESERVED: no description available
    inline uint32_t I2S0_TCR3_RESERVED (const uint32_t inValue) {return (inValue & 0x3fffU) << 18 ; }

//---  Register TCR4: SAI Transmit Configuration 4 Register
  #define I2S0_TCR4 (* ((volatile uint32_t *) (0x4002f000 + 16)))

  // Field FSD: Frame sync direction
    const uint32_t I2S0_TCR4_FSD = 1U << 0 ;

  // Field FSP: Frame sync polarity
    const uint32_t I2S0_TCR4_FSP = 1U << 1 ;

  // Field RESERVED: no description available
    const uint32_t I2S0_TCR4_RESERVED = 1U << 2 ;

  // Field FSE: Frame sync early
    const uint32_t I2S0_TCR4_FSE = 1U << 3 ;

  // Field MF: MSB first
    const uint32_t I2S0_TCR4_MF = 1U << 4 ;

  // Field RESERVED: no description available
    inline uint32_t I2S0_TCR4_RESERVED (const uint32_t inValue) {return (inValue & 0x7U) << 5 ; }

  // Field SYWD: Sync width
    inline uint32_t I2S0_TCR4_SYWD (const uint32_t inValue) {return (inValue & 0x1fU) << 8 ; }

  // Field RESERVED: no description available
    inline uint32_t I2S0_TCR4_RESERVED (const uint32_t inValue) {return (inValue & 0x7U) << 13 ; }

  // Field FRSZ: Frame size
    inline uint32_t I2S0_TCR4_FRSZ (const uint32_t inValue) {return (inValue & 0x1fU) << 16 ; }

  // Field RESERVED: no description available
    inline uint32_t I2S0_TCR4_RESERVED (const uint32_t inValue) {return (inValue & 0x7ffU) << 21 ; }

//---  Register TCR5: SAI Transmit Configuration 5 Register
  #define I2S0_TCR5 (* ((volatile uint32_t *) (0x4002f000 + 20)))

  // Field RESERVED: no description available
    inline uint32_t I2S0_TCR5_RESERVED (const uint32_t inValue) {return (inValue & 0xffU) << 0 ; }

  // Field FBT: First bit shifted
    inline uint32_t I2S0_TCR5_FBT (const uint32_t inValue) {return (inValue & 0x1fU) << 8 ; }

  // Field RESERVED: no description available
    inline uint32_t I2S0_TCR5_RESERVED (const uint32_t inValue) {return (inValue & 0x7U) << 13 ; }

  // Field W0W: Word 0 width
    inline uint32_t I2S0_TCR5_W0W (const uint32_t inValue) {return (inValue & 0x1fU) << 16 ; }

  // Field RESERVED: no description available
    inline uint32_t I2S0_TCR5_RESERVED (const uint32_t inValue) {return (inValue & 0x7U) << 21 ; }

  // Field WNW: Word N width
    inline uint32_t I2S0_TCR5_WNW (const uint32_t inValue) {return (inValue & 0x1fU) << 24 ; }

  // Field RESERVED: no description available
    inline uint32_t I2S0_TCR5_RESERVED (const uint32_t inValue) {return (inValue & 0x7U) << 29 ; }

//---  Registers TDR(0,1): SAI Transmit Data Register
  #define I2S0_TDR(idx) (* ((volatile uint32_t *) (0x4002f000 + 0x20 + (idx) * 0x4)))
  #define I2S0_TDR0 (* ((volatile uint32_t *) (0x4002f000 + 0x20 + 0 * 0x4)))
  #define I2S0_TDR1 (* ((volatile uint32_t *) (0x4002f000 + 0x20 + 1 * 0x4)))

  // Field TDR: Transmit data register
    inline uint32_t I2S0_TDR_TDR (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Registers TFR(0,1): SAI Transmit FIFO Register
  #define I2S0_TFR(idx) (* ((volatile uint32_t *) (0x4002f000 + 0x40 + (idx) * 0x4)))
  #define I2S0_TFR0 (* ((volatile uint32_t *) (0x4002f000 + 0x40 + 0 * 0x4)))
  #define I2S0_TFR1 (* ((volatile uint32_t *) (0x4002f000 + 0x40 + 1 * 0x4)))

  // Field RFP: Read FIFO pointer
    inline uint32_t I2S0_TFR_RFP (const uint32_t inValue) {return (inValue & 0xfU) << 0 ; }

  // Field RESERVED: no description available
    inline uint32_t I2S0_TFR_RESERVED (const uint32_t inValue) {return (inValue & 0xfffU) << 4 ; }

  // Field WFP: Write FIFO pointer
    inline uint32_t I2S0_TFR_WFP (const uint32_t inValue) {return (inValue & 0xfU) << 16 ; }

  // Field RESERVED: no description available
    inline uint32_t I2S0_TFR_RESERVED (const uint32_t inValue) {return (inValue & 0xfffU) << 20 ; }

//---  Register TMR: SAI Transmit Mask Register
  #define I2S0_TMR (* ((volatile uint32_t *) (0x4002f000 + 96)))

  // Field TWM: Transmit word mask
    inline uint32_t I2S0_TMR_TWM (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register RCSR: SAI Receive Control Register
  #define I2S0_RCSR (* ((volatile uint32_t *) (0x4002f000 + 128)))

  // Field FRDE: FIFO request DMA enable
    const uint32_t I2S0_RCSR_FRDE = 1U << 0 ;

  // Field FWDE: FIFO warning DMA enable
    const uint32_t I2S0_RCSR_FWDE = 1U << 1 ;

  // Field RESERVED: no description available
    inline uint32_t I2S0_RCSR_RESERVED (const uint32_t inValue) {return (inValue & 0x7U) << 2 ; }

  // Field RESERVED: no description available
    inline uint32_t I2S0_RCSR_RESERVED (const uint32_t inValue) {return (inValue & 0x7U) << 5 ; }

  // Field FRIE: FIFO request interrupt enable
    const uint32_t I2S0_RCSR_FRIE = 1U << 8 ;

  // Field FWIE: FIFO warning interrupt enable
    const uint32_t I2S0_RCSR_FWIE = 1U << 9 ;

  // Field FEIE: FIFO error interrupt enable
    const uint32_t I2S0_RCSR_FEIE = 1U << 10 ;

  // Field SEIE: Sync error interrupt enable
    const uint32_t I2S0_RCSR_SEIE = 1U << 11 ;

  // Field WSIE: Word start interrupt enable
    const uint32_t I2S0_RCSR_WSIE = 1U << 12 ;

  // Field RESERVED: no description available
    inline uint32_t I2S0_RCSR_RESERVED (const uint32_t inValue) {return (inValue & 0x7U) << 13 ; }

  // Field FRF: FIFO request flag
    const uint32_t I2S0_RCSR_FRF = 1U << 16 ;

  // Field FWF: FIFO warning flag
    const uint32_t I2S0_RCSR_FWF = 1U << 17 ;

  // Field FEF: FIFO error flag
    const uint32_t I2S0_RCSR_FEF = 1U << 18 ;

  // Field SEF: Sync error flag
    const uint32_t I2S0_RCSR_SEF = 1U << 19 ;

  // Field WSF: Word start flag
    const uint32_t I2S0_RCSR_WSF = 1U << 20 ;

  // Field RESERVED: no description available
    inline uint32_t I2S0_RCSR_RESERVED (const uint32_t inValue) {return (inValue & 0x7U) << 21 ; }

  // Field SR: Software reset
    const uint32_t I2S0_RCSR_SR = 1U << 24 ;

  // Field FR: FIFO reset
    const uint32_t I2S0_RCSR_FR = 1U << 25 ;

  // Field RESERVED: no description available
    inline uint32_t I2S0_RCSR_RESERVED (const uint32_t inValue) {return (inValue & 0x3U) << 26 ; }

  // Field BCE: Bit Clock enable
    const uint32_t I2S0_RCSR_BCE = 1U << 28 ;

  // Field DBGE: Debug enable
    const uint32_t I2S0_RCSR_DBGE = 1U << 29 ;

  // Field STOPE: Stop enable
    const uint32_t I2S0_RCSR_STOPE = 1U << 30 ;

  // Field RE: Receiver enable
    const uint32_t I2S0_RCSR_RE = 1U << 31 ;

//---  Register RCR1: SAI Receive Configuration 1 Register
  #define I2S0_RCR1 (* ((volatile uint32_t *) (0x4002f000 + 132)))

  // Field RFW: Receive FIFO watermark
    inline uint32_t I2S0_RCR1_RFW (const uint32_t inValue) {return (inValue & 0x7U) << 0 ; }

  // Field RESERVED: no description available
    inline uint32_t I2S0_RCR1_RESERVED (const uint32_t inValue) {return (inValue & 0x1fffffffU) << 3 ; }

//---  Register RCR2: SAI Receive Configuration 2 Register
  #define I2S0_RCR2 (* ((volatile uint32_t *) (0x4002f000 + 136)))

  // Field DIV: Bit clock divide
    inline uint32_t I2S0_RCR2_DIV (const uint32_t inValue) {return (inValue & 0xffU) << 0 ; }

  // Field RESERVED: no description available
    inline uint32_t I2S0_RCR2_RESERVED (const uint32_t inValue) {return (inValue & 0xffffU) << 8 ; }

  // Field BCD: Bit clock direction
    const uint32_t I2S0_RCR2_BCD = 1U << 24 ;

  // Field BCP: Bit clock polarity
    const uint32_t I2S0_RCR2_BCP = 1U << 25 ;

  // Field MSEL: MCLK Select
    inline uint32_t I2S0_RCR2_MSEL (const uint32_t inValue) {return (inValue & 0x3U) << 26 ; }

  // Field BCI: Bit Clock Input
    const uint32_t I2S0_RCR2_BCI = 1U << 28 ;

  // Field BCS: Bit Clock Swap
    const uint32_t I2S0_RCR2_BCS = 1U << 29 ;

  // Field SYNC: Synchronous Mode
    inline uint32_t I2S0_RCR2_SYNC (const uint32_t inValue) {return (inValue & 0x3U) << 30 ; }

//---  Register RCR3: SAI Receive Configuration 3 Register
  #define I2S0_RCR3 (* ((volatile uint32_t *) (0x4002f000 + 140)))

  // Field WDFL: Word flag configuration
    inline uint32_t I2S0_RCR3_WDFL (const uint32_t inValue) {return (inValue & 0x1fU) << 0 ; }

  // Field RESERVED: no description available
    inline uint32_t I2S0_RCR3_RESERVED (const uint32_t inValue) {return (inValue & 0x7ffU) << 5 ; }

  // Field RCE: Receive channel enable
    inline uint32_t I2S0_RCR3_RCE (const uint32_t inValue) {return (inValue & 0x3U) << 16 ; }

  // Field RESERVED: no description available
    inline uint32_t I2S0_RCR3_RESERVED (const uint32_t inValue) {return (inValue & 0x3fffU) << 18 ; }

//---  Register RCR4: SAI Receive Configuration 4 Register
  #define I2S0_RCR4 (* ((volatile uint32_t *) (0x4002f000 + 144)))

  // Field FSD: Frame sync direction
    const uint32_t I2S0_RCR4_FSD = 1U << 0 ;

  // Field FSP: Frame sync polarity
    const uint32_t I2S0_RCR4_FSP = 1U << 1 ;

  // Field RESERVED: no description available
    const uint32_t I2S0_RCR4_RESERVED = 1U << 2 ;

  // Field FSE: Frame sync early
    const uint32_t I2S0_RCR4_FSE = 1U << 3 ;

  // Field MF: MSB first
    const uint32_t I2S0_RCR4_MF = 1U << 4 ;

  // Field RESERVED: no description available
    inline uint32_t I2S0_RCR4_RESERVED (const uint32_t inValue) {return (inValue & 0x7U) << 5 ; }

  // Field SYWD: Sync width
    inline uint32_t I2S0_RCR4_SYWD (const uint32_t inValue) {return (inValue & 0x1fU) << 8 ; }

  // Field RESERVED: no description available
    inline uint32_t I2S0_RCR4_RESERVED (const uint32_t inValue) {return (inValue & 0x7U) << 13 ; }

  // Field FRSZ: Frame size
    inline uint32_t I2S0_RCR4_FRSZ (const uint32_t inValue) {return (inValue & 0x1fU) << 16 ; }

  // Field RESERVED: no description available
    inline uint32_t I2S0_RCR4_RESERVED (const uint32_t inValue) {return (inValue & 0x7ffU) << 21 ; }

//---  Register RCR5: SAI Receive Configuration 5 Register
  #define I2S0_RCR5 (* ((volatile uint32_t *) (0x4002f000 + 148)))

  // Field RESERVED: no description available
    inline uint32_t I2S0_RCR5_RESERVED (const uint32_t inValue) {return (inValue & 0xffU) << 0 ; }

  // Field FBT: First bit shifted
    inline uint32_t I2S0_RCR5_FBT (const uint32_t inValue) {return (inValue & 0x1fU) << 8 ; }

  // Field RESERVED: no description available
    inline uint32_t I2S0_RCR5_RESERVED (const uint32_t inValue) {return (inValue & 0x7U) << 13 ; }

  // Field W0W: Word 0 width
    inline uint32_t I2S0_RCR5_W0W (const uint32_t inValue) {return (inValue & 0x1fU) << 16 ; }

  // Field RESERVED: no description available
    inline uint32_t I2S0_RCR5_RESERVED (const uint32_t inValue) {return (inValue & 0x7U) << 21 ; }

  // Field WNW: Word N width
    inline uint32_t I2S0_RCR5_WNW (const uint32_t inValue) {return (inValue & 0x1fU) << 24 ; }

  // Field RESERVED: no description available
    inline uint32_t I2S0_RCR5_RESERVED (const uint32_t inValue) {return (inValue & 0x7U) << 29 ; }

//---  Registers RDR(0,1): SAI Receive Data Register
  #define I2S0_RDR(idx) (* ((volatile uint32_t *) (0x4002f000 + 0xa0 + (idx) * 0x4)))
  #define I2S0_RDR0 (* ((volatile uint32_t *) (0x4002f000 + 0xa0 + 0 * 0x4)))
  #define I2S0_RDR1 (* ((volatile uint32_t *) (0x4002f000 + 0xa0 + 1 * 0x4)))

  // Field RDR: Receive data register
    inline uint32_t I2S0_RDR_RDR (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Registers RFR(0,1): SAI Receive FIFO Register
  #define I2S0_RFR(idx) (* ((volatile uint32_t *) (0x4002f000 + 0xc0 + (idx) * 0x4)))
  #define I2S0_RFR0 (* ((volatile uint32_t *) (0x4002f000 + 0xc0 + 0 * 0x4)))
  #define I2S0_RFR1 (* ((volatile uint32_t *) (0x4002f000 + 0xc0 + 1 * 0x4)))

  // Field RFP: Read FIFO pointer
    inline uint32_t I2S0_RFR_RFP (const uint32_t inValue) {return (inValue & 0xfU) << 0 ; }

  // Field RESERVED: no description available
    inline uint32_t I2S0_RFR_RESERVED (const uint32_t inValue) {return (inValue & 0xfffU) << 4 ; }

  // Field WFP: Write FIFO pointer
    inline uint32_t I2S0_RFR_WFP (const uint32_t inValue) {return (inValue & 0xfU) << 16 ; }

  // Field RESERVED: no description available
    inline uint32_t I2S0_RFR_RESERVED (const uint32_t inValue) {return (inValue & 0xfffU) << 20 ; }

//---  Register RMR: SAI Receive Mask Register
  #define I2S0_RMR (* ((volatile uint32_t *) (0x4002f000 + 224)))

  // Field RWM: Receive word mask
    inline uint32_t I2S0_RMR_RWM (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register MCR: SAI MCLK Control Register
  #define I2S0_MCR (* ((volatile uint32_t *) (0x4002f000 + 256)))

  // Field RESERVED: no description available
    inline uint32_t I2S0_MCR_RESERVED (const uint32_t inValue) {return (inValue & 0xffffffU) << 0 ; }

  // Field MICS: MCLK Input Clock Select
    inline uint32_t I2S0_MCR_MICS (const uint32_t inValue) {return (inValue & 0x3U) << 24 ; }

  // Field RESERVED: no description available
    inline uint32_t I2S0_MCR_RESERVED (const uint32_t inValue) {return (inValue & 0xfU) << 26 ; }

  // Field MOE: MCLK Output Enable
    const uint32_t I2S0_MCR_MOE = 1U << 30 ;

  // Field DUF: Divider Update Flag
    const uint32_t I2S0_MCR_DUF = 1U << 31 ;

//---  Register MDR: MCLK Divide Register
  #define I2S0_MDR (* ((volatile uint32_t *) (0x4002f000 + 260)))

  // Field DIVIDE: MCLK Divide
    inline uint32_t I2S0_MDR_DIVIDE (const uint32_t inValue) {return (inValue & 0xfffU) << 0 ; }

  // Field FRACT: MCLK Fraction
    inline uint32_t I2S0_MDR_FRACT (const uint32_t inValue) {return (inValue & 0xffU) << 12 ; }

  // Field RESERVED: no description available
    inline uint32_t I2S0_MDR_RESERVED (const uint32_t inValue) {return (inValue & 0xfffU) << 20 ; }

//------------------------------------------------------------------------------
// Peripheral LLWU: Low leakage wakeup unit
//------------------------------------------------------------------------------

//---  Register PE1: LLWU Pin Enable 1 Register
  #define LLWU_PE1 (* ((volatile uint8_t *) (0x4007c000 + 0)))

  // Field WUPE0: Wakeup Pin Enable for LLWU_P0
    inline uint8_t LLWU_PE1_WUPE0 (const uint8_t inValue) {return (inValue & 0x3U) << 0 ; }

  // Field WUPE1: Wakeup Pin Enable for LLWU_P1
    inline uint8_t LLWU_PE1_WUPE1 (const uint8_t inValue) {return (inValue & 0x3U) << 2 ; }

  // Field WUPE2: Wakeup Pin Enable for LLWU_P2
    inline uint8_t LLWU_PE1_WUPE2 (const uint8_t inValue) {return (inValue & 0x3U) << 4 ; }

  // Field WUPE3: Wakeup Pin Enable for LLWU_P3
    inline uint8_t LLWU_PE1_WUPE3 (const uint8_t inValue) {return (inValue & 0x3U) << 6 ; }

//---  Register PE2: LLWU Pin Enable 2 Register
  #define LLWU_PE2 (* ((volatile uint8_t *) (0x4007c000 + 1)))

  // Field WUPE4: Wakeup Pin Enable for LLWU_P4
    inline uint8_t LLWU_PE2_WUPE4 (const uint8_t inValue) {return (inValue & 0x3U) << 0 ; }

  // Field WUPE5: Wakeup Pin Enable for LLWU_P5
    inline uint8_t LLWU_PE2_WUPE5 (const uint8_t inValue) {return (inValue & 0x3U) << 2 ; }

  // Field WUPE6: Wakeup Pin Enable for LLWU_P6
    inline uint8_t LLWU_PE2_WUPE6 (const uint8_t inValue) {return (inValue & 0x3U) << 4 ; }

  // Field WUPE7: Wakeup Pin Enable for LLWU_P7
    inline uint8_t LLWU_PE2_WUPE7 (const uint8_t inValue) {return (inValue & 0x3U) << 6 ; }

//---  Register PE3: LLWU Pin Enable 3 Register
  #define LLWU_PE3 (* ((volatile uint8_t *) (0x4007c000 + 2)))

  // Field WUPE8: Wakeup Pin Enable for LLWU_P8
    inline uint8_t LLWU_PE3_WUPE8 (const uint8_t inValue) {return (inValue & 0x3U) << 0 ; }

  // Field WUPE9: Wakeup Pin Enable for LLWU_P9
    inline uint8_t LLWU_PE3_WUPE9 (const uint8_t inValue) {return (inValue & 0x3U) << 2 ; }

  // Field WUPE10: Wakeup Pin Enable for LLWU_P10
    inline uint8_t LLWU_PE3_WUPE10 (const uint8_t inValue) {return (inValue & 0x3U) << 4 ; }

  // Field WUPE11: Wakeup Pin Enable for LLWU_P11
    inline uint8_t LLWU_PE3_WUPE11 (const uint8_t inValue) {return (inValue & 0x3U) << 6 ; }

//---  Register PE4: LLWU Pin Enable 4 Register
  #define LLWU_PE4 (* ((volatile uint8_t *) (0x4007c000 + 3)))

  // Field WUPE12: Wakeup Pin Enable for LLWU_P12
    inline uint8_t LLWU_PE4_WUPE12 (const uint8_t inValue) {return (inValue & 0x3U) << 0 ; }

  // Field WUPE13: Wakeup Pin Enable for LLWU_P13
    inline uint8_t LLWU_PE4_WUPE13 (const uint8_t inValue) {return (inValue & 0x3U) << 2 ; }

  // Field WUPE14: Wakeup Pin Enable for LLWU_P14
    inline uint8_t LLWU_PE4_WUPE14 (const uint8_t inValue) {return (inValue & 0x3U) << 4 ; }

  // Field WUPE15: Wakeup Pin Enable for LLWU_P15
    inline uint8_t LLWU_PE4_WUPE15 (const uint8_t inValue) {return (inValue & 0x3U) << 6 ; }

//---  Register ME: LLWU Module Enable Register
  #define LLWU_ME (* ((volatile uint8_t *) (0x4007c000 + 4)))

  // Field WUME0: Wakeup Module Enable for Module 0
    const uint8_t LLWU_ME_WUME0 = 1U << 0 ;

  // Field WUME1: Wakeup Module Enable for Module 1
    const uint8_t LLWU_ME_WUME1 = 1U << 1 ;

  // Field WUME2: Wakeup Module Enable for Module 2
    const uint8_t LLWU_ME_WUME2 = 1U << 2 ;

  // Field WUME3: Wakeup Module Enable for Module 3
    const uint8_t LLWU_ME_WUME3 = 1U << 3 ;

  // Field WUME4: Wakeup Module Enable for Module 4
    const uint8_t LLWU_ME_WUME4 = 1U << 4 ;

  // Field WUME5: Wakeup Module Enable for Module 5
    const uint8_t LLWU_ME_WUME5 = 1U << 5 ;

  // Field WUME6: Wakeup Module Enable for Module 6
    const uint8_t LLWU_ME_WUME6 = 1U << 6 ;

  // Field WUME7: Wakeup Module Enable for Module 7
    const uint8_t LLWU_ME_WUME7 = 1U << 7 ;

//---  Register F1: LLWU Flag 1 Register
  #define LLWU_F1 (* ((volatile uint8_t *) (0x4007c000 + 5)))

  // Field WUF0: Wakeup Flag for LLWU_P0
    const uint8_t LLWU_F1_WUF0 = 1U << 0 ;

  // Field WUF1: Wakeup Flag for LLWU_P1
    const uint8_t LLWU_F1_WUF1 = 1U << 1 ;

  // Field WUF2: Wakeup Flag for LLWU_P2
    const uint8_t LLWU_F1_WUF2 = 1U << 2 ;

  // Field WUF3: Wakeup Flag for LLWU_P3
    const uint8_t LLWU_F1_WUF3 = 1U << 3 ;

  // Field WUF4: Wakeup Flag for LLWU_P4
    const uint8_t LLWU_F1_WUF4 = 1U << 4 ;

  // Field WUF5: Wakeup Flag for LLWU_P5
    const uint8_t LLWU_F1_WUF5 = 1U << 5 ;

  // Field WUF6: Wakeup Flag for LLWU_P6
    const uint8_t LLWU_F1_WUF6 = 1U << 6 ;

  // Field WUF7: Wakeup Flag for LLWU_P7
    const uint8_t LLWU_F1_WUF7 = 1U << 7 ;

//---  Register F2: LLWU Flag 2 Register
  #define LLWU_F2 (* ((volatile uint8_t *) (0x4007c000 + 6)))

  // Field WUF8: Wakeup Flag for LLWU_P8
    const uint8_t LLWU_F2_WUF8 = 1U << 0 ;

  // Field WUF9: Wakeup Flag for LLWU_P9
    const uint8_t LLWU_F2_WUF9 = 1U << 1 ;

  // Field WUF10: Wakeup Flag for LLWU_P10
    const uint8_t LLWU_F2_WUF10 = 1U << 2 ;

  // Field WUF11: Wakeup Flag for LLWU_P11
    const uint8_t LLWU_F2_WUF11 = 1U << 3 ;

  // Field WUF12: Wakeup Flag for LLWU_P12
    const uint8_t LLWU_F2_WUF12 = 1U << 4 ;

  // Field WUF13: Wakeup Flag for LLWU_P13
    const uint8_t LLWU_F2_WUF13 = 1U << 5 ;

  // Field WUF14: Wakeup Flag for LLWU_P14
    const uint8_t LLWU_F2_WUF14 = 1U << 6 ;

  // Field WUF15: Wakeup Flag for LLWU_P15
    const uint8_t LLWU_F2_WUF15 = 1U << 7 ;

//---  Register F3: LLWU Flag 3 Register
  #define LLWU_F3 (* ((volatile uint8_t *) (0x4007c000 + 7)))

  // Field MWUF0: Wakeup flag for module 0
    const uint8_t LLWU_F3_MWUF0 = 1U << 0 ;

  // Field MWUF1: Wakeup flag for module 1
    const uint8_t LLWU_F3_MWUF1 = 1U << 1 ;

  // Field MWUF2: Wakeup flag for module 2
    const uint8_t LLWU_F3_MWUF2 = 1U << 2 ;

  // Field MWUF3: Wakeup flag for module 3
    const uint8_t LLWU_F3_MWUF3 = 1U << 3 ;

  // Field MWUF4: Wakeup flag for module 4
    const uint8_t LLWU_F3_MWUF4 = 1U << 4 ;

  // Field MWUF5: Wakeup flag for module 5
    const uint8_t LLWU_F3_MWUF5 = 1U << 5 ;

  // Field MWUF6: Wakeup flag for module 6
    const uint8_t LLWU_F3_MWUF6 = 1U << 6 ;

  // Field MWUF7: Wakeup flag for module 7
    const uint8_t LLWU_F3_MWUF7 = 1U << 7 ;

//---  Register FILT1: LLWU Pin Filter 1 Register
  #define LLWU_FILT1 (* ((volatile uint8_t *) (0x4007c000 + 8)))

  // Field FILTSEL: Filter pin select
    inline uint8_t LLWU_FILT1_FILTSEL (const uint8_t inValue) {return (inValue & 0xfU) << 0 ; }

  // Field RESERVED: no description available
    const uint8_t LLWU_FILT1_RESERVED = 1U << 4 ;

  // Field FILTE: Digital Filter on External Pin
    inline uint8_t LLWU_FILT1_FILTE (const uint8_t inValue) {return (inValue & 0x3U) << 5 ; }

  // Field FILTF: Filter Detect Flag
    const uint8_t LLWU_FILT1_FILTF = 1U << 7 ;

//---  Register FILT2: LLWU Pin Filter 2 Register
  #define LLWU_FILT2 (* ((volatile uint8_t *) (0x4007c000 + 9)))

  // Field FILTSEL: Filter pin select
    inline uint8_t LLWU_FILT2_FILTSEL (const uint8_t inValue) {return (inValue & 0xfU) << 0 ; }

  // Field RESERVED: no description available
    const uint8_t LLWU_FILT2_RESERVED = 1U << 4 ;

  // Field FILTE: Digital Filter on External Pin
    inline uint8_t LLWU_FILT2_FILTE (const uint8_t inValue) {return (inValue & 0x3U) << 5 ; }

  // Field FILTF: Filter Detect Flag
    const uint8_t LLWU_FILT2_FILTF = 1U << 7 ;

//---  Register RST: LLWU Reset Enable Register
  #define LLWU_RST (* ((volatile uint8_t *) (0x4007c000 + 10)))

  // Field RSTFILT: Digital Filter on RESET Pin
    const uint8_t LLWU_RST_RSTFILT = 1U << 0 ;

  // Field LLRSTE: Low Leakage mode RESET enable
    const uint8_t LLWU_RST_LLRSTE = 1U << 1 ;

  // Field RESERVED: no description available
    inline uint8_t LLWU_RST_RESERVED (const uint8_t inValue) {return (inValue & 0x3fU) << 2 ; }

//------------------------------------------------------------------------------
// Peripheral LPTMR0: Low Power Timer
//------------------------------------------------------------------------------

//---  Register CSR: Low Power Timer Control Status Register
  #define LPTMR0_CSR (* ((volatile uint32_t *) (0x40040000 + 0)))

  // Field TEN: Timer Enable
    const uint32_t LPTMR0_CSR_TEN = 1U << 0 ;

  // Field TMS: Timer Mode Select
    const uint32_t LPTMR0_CSR_TMS = 1U << 1 ;

  // Field TFC: Timer Free Running Counter
    const uint32_t LPTMR0_CSR_TFC = 1U << 2 ;

  // Field TPP: Timer Pin Polarity
    const uint32_t LPTMR0_CSR_TPP = 1U << 3 ;

  // Field TPS: Timer Pin Select
    inline uint32_t LPTMR0_CSR_TPS (const uint32_t inValue) {return (inValue & 0x3U) << 4 ; }

  // Field TIE: Timer Interrupt Enable
    const uint32_t LPTMR0_CSR_TIE = 1U << 6 ;

  // Field TCF: Timer Compare Flag
    const uint32_t LPTMR0_CSR_TCF = 1U << 7 ;

  // Field RESERVED: no description available
    inline uint32_t LPTMR0_CSR_RESERVED (const uint32_t inValue) {return (inValue & 0xffffffU) << 8 ; }

//---  Register PSR: Low Power Timer Prescale Register
  #define LPTMR0_PSR (* ((volatile uint32_t *) (0x40040000 + 4)))

  // Field PCS: Prescaler Clock Select
    inline uint32_t LPTMR0_PSR_PCS (const uint32_t inValue) {return (inValue & 0x3U) << 0 ; }

  // Field PBYP: Prescaler Bypass
    const uint32_t LPTMR0_PSR_PBYP = 1U << 2 ;

  // Field PRESCALE: Prescale Value
    inline uint32_t LPTMR0_PSR_PRESCALE (const uint32_t inValue) {return (inValue & 0xfU) << 3 ; }

  // Field RESERVED: no description available
    inline uint32_t LPTMR0_PSR_RESERVED (const uint32_t inValue) {return (inValue & 0x1ffffffU) << 7 ; }

//---  Register CMR: Low Power Timer Compare Register
  #define LPTMR0_CMR (* ((volatile uint32_t *) (0x40040000 + 8)))

  // Field COMPARE: Compare Value
    inline uint32_t LPTMR0_CMR_COMPARE (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

  // Field RESERVED: no description available
    inline uint32_t LPTMR0_CMR_RESERVED (const uint32_t inValue) {return (inValue & 0xffffU) << 16 ; }

//---  Register CNR: Low Power Timer Counter Register
  #define LPTMR0_CNR (* ((volatile uint32_t *) (0x40040000 + 12)))

  // Field COUNTER: Counter Value
    inline uint32_t LPTMR0_CNR_COUNTER (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

  // Field RESERVED: no description available
    inline uint32_t LPTMR0_CNR_RESERVED (const uint32_t inValue) {return (inValue & 0xffffU) << 16 ; }

//------------------------------------------------------------------------------
// Peripheral MCG: Multipurpose Clock Generator module
//------------------------------------------------------------------------------

//---  Register C1: MCG Control 1 Register
  #define MCG_C1 (* ((volatile uint8_t *) (0x40064000 + 0)))

  // Field IREFSTEN: Internal Reference Stop Enable
    const uint8_t MCG_C1_IREFSTEN = 1U << 0 ;

  // Field IRCLKEN: Internal Reference Clock Enable
    const uint8_t MCG_C1_IRCLKEN = 1U << 1 ;

  // Field IREFS: Internal Reference Select
    const uint8_t MCG_C1_IREFS = 1U << 2 ;

  // Field FRDIV: FLL External Reference Divider
    inline uint8_t MCG_C1_FRDIV (const uint8_t inValue) {return (inValue & 0x7U) << 3 ; }

  // Field CLKS: Clock Source Select
    inline uint8_t MCG_C1_CLKS (const uint8_t inValue) {return (inValue & 0x3U) << 6 ; }

//---  Register C2: MCG Control 2 Register
  #define MCG_C2 (* ((volatile uint8_t *) (0x40064000 + 1)))

  // Field IRCS: Internal Reference Clock Select
    const uint8_t MCG_C2_IRCS = 1U << 0 ;

  // Field LP: Low Power Select
    const uint8_t MCG_C2_LP = 1U << 1 ;

  // Field EREFS0: External Reference Select
    const uint8_t MCG_C2_EREFS0 = 1U << 2 ;

  // Field HGO0: High Gain Oscillator Select
    const uint8_t MCG_C2_HGO0 = 1U << 3 ;

  // Field RANGE0: Frequency Range Select
    inline uint8_t MCG_C2_RANGE0 (const uint8_t inValue) {return (inValue & 0x3U) << 4 ; }

  // Field RESERVED: no description available
    const uint8_t MCG_C2_RESERVED = 1U << 6 ;

  // Field LOCRE0: Loss of Clock Reset Enable
    const uint8_t MCG_C2_LOCRE0 = 1U << 7 ;

//---  Register C3: MCG Control 3 Register
  #define MCG_C3 (* ((volatile uint8_t *) (0x40064000 + 2)))

  // Field SCTRIM: Slow Internal Reference Clock Trim Setting
    inline uint8_t MCG_C3_SCTRIM (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register C4: MCG Control 4 Register
  #define MCG_C4 (* ((volatile uint8_t *) (0x40064000 + 3)))

  // Field SCFTRIM: Slow Internal Reference Clock Fine Trim
    const uint8_t MCG_C4_SCFTRIM = 1U << 0 ;

  // Field FCTRIM: Fast Internal Reference Clock Trim Setting
    inline uint8_t MCG_C4_FCTRIM (const uint8_t inValue) {return (inValue & 0xfU) << 1 ; }

  // Field DRST_DRS: DCO Range Select
    inline uint8_t MCG_C4_DRST_DRS (const uint8_t inValue) {return (inValue & 0x3U) << 5 ; }

  // Field DMX32: DCO Maximum Frequency with 32.768 kHz Reference
    const uint8_t MCG_C4_DMX32 = 1U << 7 ;

//---  Register C5: MCG Control 5 Register
  #define MCG_C5 (* ((volatile uint8_t *) (0x40064000 + 4)))

  // Field PRDIV0: PLL External Reference Divider
    inline uint8_t MCG_C5_PRDIV0 (const uint8_t inValue) {return (inValue & 0x1fU) << 0 ; }

  // Field PLLSTEN0: PLL Stop Enable
    const uint8_t MCG_C5_PLLSTEN0 = 1U << 5 ;

  // Field PLLCLKEN0: PLL Clock Enable
    const uint8_t MCG_C5_PLLCLKEN0 = 1U << 6 ;

  // Field RESERVED: no description available
    const uint8_t MCG_C5_RESERVED = 1U << 7 ;

//---  Register C6: MCG Control 6 Register
  #define MCG_C6 (* ((volatile uint8_t *) (0x40064000 + 5)))

  // Field VDIV0: VCO 0 Divider
    inline uint8_t MCG_C6_VDIV0 (const uint8_t inValue) {return (inValue & 0x1fU) << 0 ; }

  // Field CME0: Clock Monitor Enable
    const uint8_t MCG_C6_CME0 = 1U << 5 ;

  // Field PLLS: PLL Select
    const uint8_t MCG_C6_PLLS = 1U << 6 ;

  // Field LOLIE0: Loss of Lock Interrrupt Enable
    const uint8_t MCG_C6_LOLIE0 = 1U << 7 ;

//---  Register S: MCG Status Register
  #define MCG_S (* ((volatile uint8_t *) (0x40064000 + 6)))

  // Field IRCST: Internal Reference Clock Status
    const uint8_t MCG_S_IRCST = 1U << 0 ;

  // Field OSCINIT0: OSC Initialization
    const uint8_t MCG_S_OSCINIT0 = 1U << 1 ;

  // Field CLKST: Clock Mode Status
    inline uint8_t MCG_S_CLKST (const uint8_t inValue) {return (inValue & 0x3U) << 2 ; }

  // Field IREFST: Internal Reference Status
    const uint8_t MCG_S_IREFST = 1U << 4 ;

  // Field PLLST: PLL Select Status
    const uint8_t MCG_S_PLLST = 1U << 5 ;

  // Field LOCK0: Lock Status
    const uint8_t MCG_S_LOCK0 = 1U << 6 ;

  // Field LOLS0: Loss of Lock Status
    const uint8_t MCG_S_LOLS0 = 1U << 7 ;

//---  Register SC: MCG Status and Control Register
  #define MCG_SC (* ((volatile uint8_t *) (0x40064000 + 8)))

  // Field LOCS0: OSC0 Loss of Clock Status
    const uint8_t MCG_SC_LOCS0 = 1U << 0 ;

  // Field FCRDIV: Fast Clock Internal Reference Divider
    inline uint8_t MCG_SC_FCRDIV (const uint8_t inValue) {return (inValue & 0x7U) << 1 ; }

  // Field FLTPRSRV: FLL Filter Preserve Enable
    const uint8_t MCG_SC_FLTPRSRV = 1U << 4 ;

  // Field ATMF: Automatic Trim machine Fail Flag
    const uint8_t MCG_SC_ATMF = 1U << 5 ;

  // Field ATMS: Automatic Trim Machine Select
    const uint8_t MCG_SC_ATMS = 1U << 6 ;

  // Field ATME: Automatic Trim Machine Enable
    const uint8_t MCG_SC_ATME = 1U << 7 ;

//---  Register ATCVH: MCG Auto Trim Compare Value High Register
  #define MCG_ATCVH (* ((volatile uint8_t *) (0x40064000 + 10)))

  // Field ATCVH: ATM Compare Value High
    inline uint8_t MCG_ATCVH_ATCVH (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register ATCVL: MCG Auto Trim Compare Value Low Register
  #define MCG_ATCVL (* ((volatile uint8_t *) (0x40064000 + 11)))

  // Field ATCVL: ATM Compare Value Low
    inline uint8_t MCG_ATCVL_ATCVL (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register C7: MCG Control 7 Register
  #define MCG_C7 (* ((volatile uint8_t *) (0x40064000 + 12)))

  // Field OSCSEL: MCG OSC Clock Select
    const uint8_t MCG_C7_OSCSEL = 1U << 0 ;

  // Field RESERVED: no description available
    inline uint8_t MCG_C7_RESERVED (const uint8_t inValue) {return (inValue & 0x7fU) << 1 ; }

//---  Register C8: MCG Control 8 Register
  #define MCG_C8 (* ((volatile uint8_t *) (0x40064000 + 13)))

  // Field LOCS1: RTC Loss of Clock Status
    const uint8_t MCG_C8_LOCS1 = 1U << 0 ;

  // Field RESERVED: no description available
    inline uint8_t MCG_C8_RESERVED (const uint8_t inValue) {return (inValue & 0xfU) << 1 ; }

  // Field CME1: Clock Monitor Enable1
    const uint8_t MCG_C8_CME1 = 1U << 5 ;

  // Field LOLRE: no description available
    const uint8_t MCG_C8_LOLRE = 1U << 6 ;

  // Field LOCRE1: Loss of Clock Reset Enable
    const uint8_t MCG_C8_LOCRE1 = 1U << 7 ;

//------------------------------------------------------------------------------
// Peripheral MCM: Core Platform Miscellaneous Control Module
//------------------------------------------------------------------------------

//---  Register PLASC: Crossbar switch (AXBS) slave configuration
  #define MCM_PLASC (* ((volatile uint16_t *) (0xe0080000 + 8)))

  // Field ASC: Each bit in the ASC field indicates if there is a corresponding connection to the crossbar switch's slave input port.
    inline uint16_t MCM_PLASC_ASC (const uint16_t inValue) {return (inValue & 0xffU) << 0 ; }

  // Field RESERVED: no description available
    inline uint16_t MCM_PLASC_RESERVED (const uint16_t inValue) {return (inValue & 0xffU) << 8 ; }

//---  Register PLAMC: Crossbar switch (AXBS) master configuration
  #define MCM_PLAMC (* ((volatile uint16_t *) (0xe0080000 + 10)))

  // Field AMC: Each bit in the AMC field indicates if there is a corresponding connection to the AXBS master input port.
    inline uint16_t MCM_PLAMC_AMC (const uint16_t inValue) {return (inValue & 0xffU) << 0 ; }

  // Field RESERVED: no description available
    inline uint16_t MCM_PLAMC_RESERVED (const uint16_t inValue) {return (inValue & 0xffU) << 8 ; }

//---  Register CR: Control register
  #define MCM_CR (* ((volatile uint32_t *) (0xe0080000 + 12)))

  // Field RESERVED: no description available
    inline uint32_t MCM_CR_RESERVED (const uint32_t inValue) {return (inValue & 0x1ffU) << 0 ; }

  // Field RESERVED: no description available
    const uint32_t MCM_CR_RESERVED = 1U << 9 ;

  // Field RESERVED: no description available
    inline uint32_t MCM_CR_RESERVED (const uint32_t inValue) {return (inValue & 0x3fffU) << 10 ; }

  // Field SRAMUAP: SRAM_U arbitration priority
    inline uint32_t MCM_CR_SRAMUAP (const uint32_t inValue) {return (inValue & 0x3U) << 24 ; }

  // Field SRAMUWP: SRAM_U write protect
    const uint32_t MCM_CR_SRAMUWP = 1U << 26 ;

  // Field RESERVED: no description available
    const uint32_t MCM_CR_RESERVED = 1U << 27 ;

  // Field SRAMLAP: SRAM_L arbitration priority
    inline uint32_t MCM_CR_SRAMLAP (const uint32_t inValue) {return (inValue & 0x3U) << 28 ; }

  // Field SRAMLWP: SRAM_L write protect
    const uint32_t MCM_CR_SRAMLWP = 1U << 30 ;

  // Field RESERVED: no description available
    const uint32_t MCM_CR_RESERVED = 1U << 31 ;

//------------------------------------------------------------------------------
// Peripheral NVIC: Nested Vectored Interrupt Controller
//------------------------------------------------------------------------------

//---  Register NVICISER0: Interrupt Set Enable Register n
  #define NVIC_NVICISER0 (* ((volatile uint32_t *) (0xe000e100 + 0)))

  // Field SETENA: Interrupt set enable bits
    inline uint32_t NVIC_NVICISER0_SETENA (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register NVICISER1: Interrupt Set Enable Register n
  #define NVIC_NVICISER1 (* ((volatile uint32_t *) (0xe000e100 + 4)))

  // Field SETENA: Interrupt set enable bits
    inline uint32_t NVIC_NVICISER1_SETENA (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register NVICISER2: Interrupt Set Enable Register n
  #define NVIC_NVICISER2 (* ((volatile uint32_t *) (0xe000e100 + 8)))

  // Field SETENA: Interrupt set enable bits
    inline uint32_t NVIC_NVICISER2_SETENA (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register NVICISER3: Interrupt Set Enable Register n
  #define NVIC_NVICISER3 (* ((volatile uint32_t *) (0xe000e100 + 12)))

  // Field SETENA: Interrupt set enable bits
    inline uint32_t NVIC_NVICISER3_SETENA (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register NVICICER0: Interrupt Clear Enable Register n
  #define NVIC_NVICICER0 (* ((volatile uint32_t *) (0xe000e100 + 128)))

  // Field CLRENA: Interrupt clear-enable bits
    inline uint32_t NVIC_NVICICER0_CLRENA (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register NVICICER1: Interrupt Clear Enable Register n
  #define NVIC_NVICICER1 (* ((volatile uint32_t *) (0xe000e100 + 132)))

  // Field CLRENA: Interrupt clear-enable bits
    inline uint32_t NVIC_NVICICER1_CLRENA (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register NVICICER2: Interrupt Clear Enable Register n
  #define NVIC_NVICICER2 (* ((volatile uint32_t *) (0xe000e100 + 136)))

  // Field CLRENA: Interrupt clear-enable bits
    inline uint32_t NVIC_NVICICER2_CLRENA (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register NVICICER3: Interrupt Clear Enable Register n
  #define NVIC_NVICICER3 (* ((volatile uint32_t *) (0xe000e100 + 140)))

  // Field CLRENA: Interrupt clear-enable bits
    inline uint32_t NVIC_NVICICER3_CLRENA (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register NVICISPR0: Interrupt Set Pending Register n
  #define NVIC_NVICISPR0 (* ((volatile uint32_t *) (0xe000e100 + 256)))

  // Field SETPEND: Interrupt set-pending bits
    inline uint32_t NVIC_NVICISPR0_SETPEND (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register NVICISPR1: Interrupt Set Pending Register n
  #define NVIC_NVICISPR1 (* ((volatile uint32_t *) (0xe000e100 + 260)))

  // Field SETPEND: Interrupt set-pending bits
    inline uint32_t NVIC_NVICISPR1_SETPEND (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register NVICISPR2: Interrupt Set Pending Register n
  #define NVIC_NVICISPR2 (* ((volatile uint32_t *) (0xe000e100 + 264)))

  // Field SETPEND: Interrupt set-pending bits
    inline uint32_t NVIC_NVICISPR2_SETPEND (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register NVICISPR3: Interrupt Set Pending Register n
  #define NVIC_NVICISPR3 (* ((volatile uint32_t *) (0xe000e100 + 268)))

  // Field SETPEND: Interrupt set-pending bits
    inline uint32_t NVIC_NVICISPR3_SETPEND (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register NVICICPR0: Interrupt Clear Pending Register n
  #define NVIC_NVICICPR0 (* ((volatile uint32_t *) (0xe000e100 + 384)))

  // Field CLRPEND: Interrupt clear-pending bits
    inline uint32_t NVIC_NVICICPR0_CLRPEND (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register NVICICPR1: Interrupt Clear Pending Register n
  #define NVIC_NVICICPR1 (* ((volatile uint32_t *) (0xe000e100 + 388)))

  // Field CLRPEND: Interrupt clear-pending bits
    inline uint32_t NVIC_NVICICPR1_CLRPEND (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register NVICICPR2: Interrupt Clear Pending Register n
  #define NVIC_NVICICPR2 (* ((volatile uint32_t *) (0xe000e100 + 392)))

  // Field CLRPEND: Interrupt clear-pending bits
    inline uint32_t NVIC_NVICICPR2_CLRPEND (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register NVICICPR3: Interrupt Clear Pending Register n
  #define NVIC_NVICICPR3 (* ((volatile uint32_t *) (0xe000e100 + 396)))

  // Field CLRPEND: Interrupt clear-pending bits
    inline uint32_t NVIC_NVICICPR3_CLRPEND (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register NVICIABR0: Interrupt Active bit Register n
  #define NVIC_NVICIABR0 (* ((volatile uint32_t *) (0xe000e100 + 512)))

  // Field ACTIVE: Interrupt active flags
    inline uint32_t NVIC_NVICIABR0_ACTIVE (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register NVICIABR1: Interrupt Active bit Register n
  #define NVIC_NVICIABR1 (* ((volatile uint32_t *) (0xe000e100 + 516)))

  // Field ACTIVE: Interrupt active flags
    inline uint32_t NVIC_NVICIABR1_ACTIVE (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register NVICIABR2: Interrupt Active bit Register n
  #define NVIC_NVICIABR2 (* ((volatile uint32_t *) (0xe000e100 + 520)))

  // Field ACTIVE: Interrupt active flags
    inline uint32_t NVIC_NVICIABR2_ACTIVE (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register NVICIABR3: Interrupt Active bit Register n
  #define NVIC_NVICIABR3 (* ((volatile uint32_t *) (0xe000e100 + 524)))

  // Field ACTIVE: Interrupt active flags
    inline uint32_t NVIC_NVICIABR3_ACTIVE (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register NVICIP0: Interrupt Priority Register n
  #define NVIC_NVICIP0 (* ((volatile uint8_t *) (0xe000e100 + 768)))

  // Field PRI0: Priority of interrupt 0
    inline uint8_t NVIC_NVICIP0_PRI0 (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register NVICIP1: Interrupt Priority Register n
  #define NVIC_NVICIP1 (* ((volatile uint8_t *) (0xe000e100 + 769)))

  // Field PRI1: Priority of interrupt 1
    inline uint8_t NVIC_NVICIP1_PRI1 (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register NVICIP2: Interrupt Priority Register n
  #define NVIC_NVICIP2 (* ((volatile uint8_t *) (0xe000e100 + 770)))

  // Field PRI2: Priority of interrupt 2
    inline uint8_t NVIC_NVICIP2_PRI2 (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register NVICIP3: Interrupt Priority Register n
  #define NVIC_NVICIP3 (* ((volatile uint8_t *) (0xe000e100 + 771)))

  // Field PRI3: Priority of interrupt 3
    inline uint8_t NVIC_NVICIP3_PRI3 (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register NVICIP4: Interrupt Priority Register n
  #define NVIC_NVICIP4 (* ((volatile uint8_t *) (0xe000e100 + 772)))

  // Field PRI4: Priority of interrupt 4
    inline uint8_t NVIC_NVICIP4_PRI4 (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register NVICIP5: Interrupt Priority Register n
  #define NVIC_NVICIP5 (* ((volatile uint8_t *) (0xe000e100 + 773)))

  // Field PRI5: Priority of interrupt 5
    inline uint8_t NVIC_NVICIP5_PRI5 (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register NVICIP6: Interrupt Priority Register n
  #define NVIC_NVICIP6 (* ((volatile uint8_t *) (0xe000e100 + 774)))

  // Field PRI6: Priority of interrupt 6
    inline uint8_t NVIC_NVICIP6_PRI6 (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register NVICIP7: Interrupt Priority Register n
  #define NVIC_NVICIP7 (* ((volatile uint8_t *) (0xe000e100 + 775)))

  // Field PRI7: Priority of interrupt 7
    inline uint8_t NVIC_NVICIP7_PRI7 (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register NVICIP8: Interrupt Priority Register n
  #define NVIC_NVICIP8 (* ((volatile uint8_t *) (0xe000e100 + 776)))

  // Field PRI8: Priority of interrupt 8
    inline uint8_t NVIC_NVICIP8_PRI8 (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register NVICIP9: Interrupt Priority Register n
  #define NVIC_NVICIP9 (* ((volatile uint8_t *) (0xe000e100 + 777)))

  // Field PRI9: Priority of interrupt 9
    inline uint8_t NVIC_NVICIP9_PRI9 (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register NVICIP10: Interrupt Priority Register n
  #define NVIC_NVICIP10 (* ((volatile uint8_t *) (0xe000e100 + 778)))

  // Field PRI10: Priority of interrupt 10
    inline uint8_t NVIC_NVICIP10_PRI10 (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register NVICIP11: Interrupt Priority Register n
  #define NVIC_NVICIP11 (* ((volatile uint8_t *) (0xe000e100 + 779)))

  // Field PRI11: Priority of interrupt 11
    inline uint8_t NVIC_NVICIP11_PRI11 (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register NVICIP12: Interrupt Priority Register n
  #define NVIC_NVICIP12 (* ((volatile uint8_t *) (0xe000e100 + 780)))

  // Field PRI12: Priority of interrupt 12
    inline uint8_t NVIC_NVICIP12_PRI12 (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register NVICIP13: Interrupt Priority Register n
  #define NVIC_NVICIP13 (* ((volatile uint8_t *) (0xe000e100 + 781)))

  // Field PRI13: Priority of interrupt 13
    inline uint8_t NVIC_NVICIP13_PRI13 (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register NVICIP14: Interrupt Priority Register n
  #define NVIC_NVICIP14 (* ((volatile uint8_t *) (0xe000e100 + 782)))

  // Field PRI14: Priority of interrupt 14
    inline uint8_t NVIC_NVICIP14_PRI14 (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register NVICIP15: Interrupt Priority Register n
  #define NVIC_NVICIP15 (* ((volatile uint8_t *) (0xe000e100 + 783)))

  // Field PRI15: Priority of interrupt 15
    inline uint8_t NVIC_NVICIP15_PRI15 (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register NVICIP16: Interrupt Priority Register n
  #define NVIC_NVICIP16 (* ((volatile uint8_t *) (0xe000e100 + 784)))

  // Field PRI16: Priority of interrupt 16
    inline uint8_t NVIC_NVICIP16_PRI16 (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register NVICIP17: Interrupt Priority Register n
  #define NVIC_NVICIP17 (* ((volatile uint8_t *) (0xe000e100 + 785)))

  // Field PRI17: Priority of interrupt 17
    inline uint8_t NVIC_NVICIP17_PRI17 (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register NVICIP18: Interrupt Priority Register n
  #define NVIC_NVICIP18 (* ((volatile uint8_t *) (0xe000e100 + 786)))

  // Field PRI18: Priority of interrupt 18
    inline uint8_t NVIC_NVICIP18_PRI18 (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register NVICIP19: Interrupt Priority Register n
  #define NVIC_NVICIP19 (* ((volatile uint8_t *) (0xe000e100 + 787)))

  // Field PRI19: Priority of interrupt 19
    inline uint8_t NVIC_NVICIP19_PRI19 (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register NVICIP20: Interrupt Priority Register n
  #define NVIC_NVICIP20 (* ((volatile uint8_t *) (0xe000e100 + 788)))

  // Field PRI20: Priority of interrupt 20
    inline uint8_t NVIC_NVICIP20_PRI20 (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register NVICIP21: Interrupt Priority Register n
  #define NVIC_NVICIP21 (* ((volatile uint8_t *) (0xe000e100 + 789)))

  // Field PRI21: Priority of interrupt 21
    inline uint8_t NVIC_NVICIP21_PRI21 (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register NVICIP22: Interrupt Priority Register n
  #define NVIC_NVICIP22 (* ((volatile uint8_t *) (0xe000e100 + 790)))

  // Field PRI22: Priority of interrupt 22
    inline uint8_t NVIC_NVICIP22_PRI22 (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register NVICIP23: Interrupt Priority Register n
  #define NVIC_NVICIP23 (* ((volatile uint8_t *) (0xe000e100 + 791)))

  // Field PRI23: Priority of interrupt 23
    inline uint8_t NVIC_NVICIP23_PRI23 (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register NVICIP24: Interrupt Priority Register n
  #define NVIC_NVICIP24 (* ((volatile uint8_t *) (0xe000e100 + 792)))

  // Field PRI24: Priority of interrupt 24
    inline uint8_t NVIC_NVICIP24_PRI24 (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register NVICIP25: Interrupt Priority Register n
  #define NVIC_NVICIP25 (* ((volatile uint8_t *) (0xe000e100 + 793)))

  // Field PRI25: Priority of interrupt 25
    inline uint8_t NVIC_NVICIP25_PRI25 (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register NVICIP26: Interrupt Priority Register n
  #define NVIC_NVICIP26 (* ((volatile uint8_t *) (0xe000e100 + 794)))

  // Field PRI26: Priority of interrupt 26
    inline uint8_t NVIC_NVICIP26_PRI26 (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register NVICIP27: Interrupt Priority Register n
  #define NVIC_NVICIP27 (* ((volatile uint8_t *) (0xe000e100 + 795)))

  // Field PRI27: Priority of interrupt 27
    inline uint8_t NVIC_NVICIP27_PRI27 (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register NVICIP28: Interrupt Priority Register n
  #define NVIC_NVICIP28 (* ((volatile uint8_t *) (0xe000e100 + 796)))

  // Field PRI28: Priority of interrupt 28
    inline uint8_t NVIC_NVICIP28_PRI28 (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register NVICIP29: Interrupt Priority Register n
  #define NVIC_NVICIP29 (* ((volatile uint8_t *) (0xe000e100 + 797)))

  // Field PRI29: Priority of interrupt 29
    inline uint8_t NVIC_NVICIP29_PRI29 (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register NVICIP30: Interrupt Priority Register n
  #define NVIC_NVICIP30 (* ((volatile uint8_t *) (0xe000e100 + 798)))

  // Field PRI30: Priority of interrupt 30
    inline uint8_t NVIC_NVICIP30_PRI30 (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register NVICIP31: Interrupt Priority Register n
  #define NVIC_NVICIP31 (* ((volatile uint8_t *) (0xe000e100 + 799)))

  // Field PRI31: Priority of interrupt 31
    inline uint8_t NVIC_NVICIP31_PRI31 (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register NVICIP32: Interrupt Priority Register n
  #define NVIC_NVICIP32 (* ((volatile uint8_t *) (0xe000e100 + 800)))

  // Field PRI32: Priority of interrupt 32
    inline uint8_t NVIC_NVICIP32_PRI32 (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register NVICIP33: Interrupt Priority Register n
  #define NVIC_NVICIP33 (* ((volatile uint8_t *) (0xe000e100 + 801)))

  // Field PRI33: Priority of interrupt 33
    inline uint8_t NVIC_NVICIP33_PRI33 (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register NVICIP34: Interrupt Priority Register n
  #define NVIC_NVICIP34 (* ((volatile uint8_t *) (0xe000e100 + 802)))

  // Field PRI34: Priority of interrupt 34
    inline uint8_t NVIC_NVICIP34_PRI34 (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register NVICIP35: Interrupt Priority Register n
  #define NVIC_NVICIP35 (* ((volatile uint8_t *) (0xe000e100 + 803)))

  // Field PRI35: Priority of interrupt 35
    inline uint8_t NVIC_NVICIP35_PRI35 (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register NVICIP36: Interrupt Priority Register n
  #define NVIC_NVICIP36 (* ((volatile uint8_t *) (0xe000e100 + 804)))

  // Field PRI36: Priority of interrupt 36
    inline uint8_t NVIC_NVICIP36_PRI36 (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register NVICIP37: Interrupt Priority Register n
  #define NVIC_NVICIP37 (* ((volatile uint8_t *) (0xe000e100 + 805)))

  // Field PRI37: Priority of interrupt 37
    inline uint8_t NVIC_NVICIP37_PRI37 (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register NVICIP38: Interrupt Priority Register n
  #define NVIC_NVICIP38 (* ((volatile uint8_t *) (0xe000e100 + 806)))

  // Field PRI38: Priority of interrupt 38
    inline uint8_t NVIC_NVICIP38_PRI38 (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register NVICIP39: Interrupt Priority Register n
  #define NVIC_NVICIP39 (* ((volatile uint8_t *) (0xe000e100 + 807)))

  // Field PRI39: Priority of interrupt 39
    inline uint8_t NVIC_NVICIP39_PRI39 (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register NVICIP40: Interrupt Priority Register n
  #define NVIC_NVICIP40 (* ((volatile uint8_t *) (0xe000e100 + 808)))

  // Field PRI40: Priority of interrupt 40
    inline uint8_t NVIC_NVICIP40_PRI40 (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register NVICIP41: Interrupt Priority Register n
  #define NVIC_NVICIP41 (* ((volatile uint8_t *) (0xe000e100 + 809)))

  // Field PRI41: Priority of interrupt 41
    inline uint8_t NVIC_NVICIP41_PRI41 (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register NVICIP42: Interrupt Priority Register n
  #define NVIC_NVICIP42 (* ((volatile uint8_t *) (0xe000e100 + 810)))

  // Field PRI42: Priority of interrupt 42
    inline uint8_t NVIC_NVICIP42_PRI42 (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register NVICIP43: Interrupt Priority Register n
  #define NVIC_NVICIP43 (* ((volatile uint8_t *) (0xe000e100 + 811)))

  // Field PRI43: Priority of interrupt 43
    inline uint8_t NVIC_NVICIP43_PRI43 (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register NVICIP44: Interrupt Priority Register n
  #define NVIC_NVICIP44 (* ((volatile uint8_t *) (0xe000e100 + 812)))

  // Field PRI44: Priority of interrupt 44
    inline uint8_t NVIC_NVICIP44_PRI44 (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register NVICIP45: Interrupt Priority Register n
  #define NVIC_NVICIP45 (* ((volatile uint8_t *) (0xe000e100 + 813)))

  // Field PRI45: Priority of interrupt 45
    inline uint8_t NVIC_NVICIP45_PRI45 (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register NVICIP46: Interrupt Priority Register n
  #define NVIC_NVICIP46 (* ((volatile uint8_t *) (0xe000e100 + 814)))

  // Field PRI46: Priority of interrupt 46
    inline uint8_t NVIC_NVICIP46_PRI46 (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register NVICIP47: Interrupt Priority Register n
  #define NVIC_NVICIP47 (* ((volatile uint8_t *) (0xe000e100 + 815)))

  // Field PRI47: Priority of interrupt 47
    inline uint8_t NVIC_NVICIP47_PRI47 (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register NVICIP48: Interrupt Priority Register n
  #define NVIC_NVICIP48 (* ((volatile uint8_t *) (0xe000e100 + 816)))

  // Field PRI48: Priority of interrupt 48
    inline uint8_t NVIC_NVICIP48_PRI48 (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register NVICIP49: Interrupt Priority Register n
  #define NVIC_NVICIP49 (* ((volatile uint8_t *) (0xe000e100 + 817)))

  // Field PRI49: Priority of interrupt 49
    inline uint8_t NVIC_NVICIP49_PRI49 (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register NVICIP50: Interrupt Priority Register n
  #define NVIC_NVICIP50 (* ((volatile uint8_t *) (0xe000e100 + 818)))

  // Field PRI50: Priority of interrupt 50
    inline uint8_t NVIC_NVICIP50_PRI50 (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register NVICIP51: Interrupt Priority Register n
  #define NVIC_NVICIP51 (* ((volatile uint8_t *) (0xe000e100 + 819)))

  // Field PRI51: Priority of interrupt 51
    inline uint8_t NVIC_NVICIP51_PRI51 (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register NVICIP52: Interrupt Priority Register n
  #define NVIC_NVICIP52 (* ((volatile uint8_t *) (0xe000e100 + 820)))

  // Field PRI52: Priority of interrupt 52
    inline uint8_t NVIC_NVICIP52_PRI52 (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register NVICIP53: Interrupt Priority Register n
  #define NVIC_NVICIP53 (* ((volatile uint8_t *) (0xe000e100 + 821)))

  // Field PRI53: Priority of interrupt 53
    inline uint8_t NVIC_NVICIP53_PRI53 (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register NVICIP54: Interrupt Priority Register n
  #define NVIC_NVICIP54 (* ((volatile uint8_t *) (0xe000e100 + 822)))

  // Field PRI54: Priority of interrupt 54
    inline uint8_t NVIC_NVICIP54_PRI54 (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register NVICIP55: Interrupt Priority Register n
  #define NVIC_NVICIP55 (* ((volatile uint8_t *) (0xe000e100 + 823)))

  // Field PRI55: Priority of interrupt 55
    inline uint8_t NVIC_NVICIP55_PRI55 (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register NVICIP56: Interrupt Priority Register n
  #define NVIC_NVICIP56 (* ((volatile uint8_t *) (0xe000e100 + 824)))

  // Field PRI56: Priority of interrupt 56
    inline uint8_t NVIC_NVICIP56_PRI56 (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register NVICIP57: Interrupt Priority Register n
  #define NVIC_NVICIP57 (* ((volatile uint8_t *) (0xe000e100 + 825)))

  // Field PRI57: Priority of interrupt 57
    inline uint8_t NVIC_NVICIP57_PRI57 (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register NVICIP58: Interrupt Priority Register n
  #define NVIC_NVICIP58 (* ((volatile uint8_t *) (0xe000e100 + 826)))

  // Field PRI58: Priority of interrupt 58
    inline uint8_t NVIC_NVICIP58_PRI58 (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register NVICIP59: Interrupt Priority Register n
  #define NVIC_NVICIP59 (* ((volatile uint8_t *) (0xe000e100 + 827)))

  // Field PRI59: Priority of interrupt 59
    inline uint8_t NVIC_NVICIP59_PRI59 (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register NVICIP60: Interrupt Priority Register n
  #define NVIC_NVICIP60 (* ((volatile uint8_t *) (0xe000e100 + 828)))

  // Field PRI60: Priority of interrupt 60
    inline uint8_t NVIC_NVICIP60_PRI60 (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register NVICIP61: Interrupt Priority Register n
  #define NVIC_NVICIP61 (* ((volatile uint8_t *) (0xe000e100 + 829)))

  // Field PRI61: Priority of interrupt 61
    inline uint8_t NVIC_NVICIP61_PRI61 (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register NVICIP62: Interrupt Priority Register n
  #define NVIC_NVICIP62 (* ((volatile uint8_t *) (0xe000e100 + 830)))

  // Field PRI62: Priority of interrupt 62
    inline uint8_t NVIC_NVICIP62_PRI62 (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register NVICIP63: Interrupt Priority Register n
  #define NVIC_NVICIP63 (* ((volatile uint8_t *) (0xe000e100 + 831)))

  // Field PRI63: Priority of interrupt 63
    inline uint8_t NVIC_NVICIP63_PRI63 (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register NVICIP64: Interrupt Priority Register n
  #define NVIC_NVICIP64 (* ((volatile uint8_t *) (0xe000e100 + 832)))

  // Field PRI64: Priority of interrupt 64
    inline uint8_t NVIC_NVICIP64_PRI64 (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register NVICIP65: Interrupt Priority Register n
  #define NVIC_NVICIP65 (* ((volatile uint8_t *) (0xe000e100 + 833)))

  // Field PRI65: Priority of interrupt 65
    inline uint8_t NVIC_NVICIP65_PRI65 (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register NVICIP66: Interrupt Priority Register n
  #define NVIC_NVICIP66 (* ((volatile uint8_t *) (0xe000e100 + 834)))

  // Field PRI66: Priority of interrupt 66
    inline uint8_t NVIC_NVICIP66_PRI66 (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register NVICIP67: Interrupt Priority Register n
  #define NVIC_NVICIP67 (* ((volatile uint8_t *) (0xe000e100 + 835)))

  // Field PRI67: Priority of interrupt 67
    inline uint8_t NVIC_NVICIP67_PRI67 (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register NVICIP68: Interrupt Priority Register n
  #define NVIC_NVICIP68 (* ((volatile uint8_t *) (0xe000e100 + 836)))

  // Field PRI68: Priority of interrupt 68
    inline uint8_t NVIC_NVICIP68_PRI68 (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register NVICIP69: Interrupt Priority Register n
  #define NVIC_NVICIP69 (* ((volatile uint8_t *) (0xe000e100 + 837)))

  // Field PRI69: Priority of interrupt 69
    inline uint8_t NVIC_NVICIP69_PRI69 (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register NVICIP70: Interrupt Priority Register n
  #define NVIC_NVICIP70 (* ((volatile uint8_t *) (0xe000e100 + 838)))

  // Field PRI70: Priority of interrupt 70
    inline uint8_t NVIC_NVICIP70_PRI70 (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register NVICIP71: Interrupt Priority Register n
  #define NVIC_NVICIP71 (* ((volatile uint8_t *) (0xe000e100 + 839)))

  // Field PRI71: Priority of interrupt 71
    inline uint8_t NVIC_NVICIP71_PRI71 (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register NVICIP72: Interrupt Priority Register n
  #define NVIC_NVICIP72 (* ((volatile uint8_t *) (0xe000e100 + 840)))

  // Field PRI72: Priority of interrupt 72
    inline uint8_t NVIC_NVICIP72_PRI72 (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register NVICIP73: Interrupt Priority Register n
  #define NVIC_NVICIP73 (* ((volatile uint8_t *) (0xe000e100 + 841)))

  // Field PRI73: Priority of interrupt 73
    inline uint8_t NVIC_NVICIP73_PRI73 (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register NVICIP74: Interrupt Priority Register n
  #define NVIC_NVICIP74 (* ((volatile uint8_t *) (0xe000e100 + 842)))

  // Field PRI74: Priority of interrupt 74
    inline uint8_t NVIC_NVICIP74_PRI74 (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register NVICIP75: Interrupt Priority Register n
  #define NVIC_NVICIP75 (* ((volatile uint8_t *) (0xe000e100 + 843)))

  // Field PRI75: Priority of interrupt 75
    inline uint8_t NVIC_NVICIP75_PRI75 (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register NVICIP76: Interrupt Priority Register n
  #define NVIC_NVICIP76 (* ((volatile uint8_t *) (0xe000e100 + 844)))

  // Field PRI76: Priority of interrupt 76
    inline uint8_t NVIC_NVICIP76_PRI76 (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register NVICIP77: Interrupt Priority Register n
  #define NVIC_NVICIP77 (* ((volatile uint8_t *) (0xe000e100 + 845)))

  // Field PRI77: Priority of interrupt 77
    inline uint8_t NVIC_NVICIP77_PRI77 (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register NVICIP78: Interrupt Priority Register n
  #define NVIC_NVICIP78 (* ((volatile uint8_t *) (0xe000e100 + 846)))

  // Field PRI78: Priority of interrupt 78
    inline uint8_t NVIC_NVICIP78_PRI78 (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register NVICIP79: Interrupt Priority Register n
  #define NVIC_NVICIP79 (* ((volatile uint8_t *) (0xe000e100 + 847)))

  // Field PRI79: Priority of interrupt 79
    inline uint8_t NVIC_NVICIP79_PRI79 (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register NVICIP80: Interrupt Priority Register n
  #define NVIC_NVICIP80 (* ((volatile uint8_t *) (0xe000e100 + 848)))

  // Field PRI80: Priority of interrupt 80
    inline uint8_t NVIC_NVICIP80_PRI80 (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register NVICIP81: Interrupt Priority Register n
  #define NVIC_NVICIP81 (* ((volatile uint8_t *) (0xe000e100 + 849)))

  // Field PRI81: Priority of interrupt 81
    inline uint8_t NVIC_NVICIP81_PRI81 (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register NVICIP82: Interrupt Priority Register n
  #define NVIC_NVICIP82 (* ((volatile uint8_t *) (0xe000e100 + 850)))

  // Field PRI82: Priority of interrupt 82
    inline uint8_t NVIC_NVICIP82_PRI82 (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register NVICIP83: Interrupt Priority Register n
  #define NVIC_NVICIP83 (* ((volatile uint8_t *) (0xe000e100 + 851)))

  // Field PRI83: Priority of interrupt 83
    inline uint8_t NVIC_NVICIP83_PRI83 (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register NVICIP84: Interrupt Priority Register n
  #define NVIC_NVICIP84 (* ((volatile uint8_t *) (0xe000e100 + 852)))

  // Field PRI84: Priority of interrupt 84
    inline uint8_t NVIC_NVICIP84_PRI84 (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register NVICIP85: Interrupt Priority Register n
  #define NVIC_NVICIP85 (* ((volatile uint8_t *) (0xe000e100 + 853)))

  // Field PRI85: Priority of interrupt 85
    inline uint8_t NVIC_NVICIP85_PRI85 (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register NVICIP86: Interrupt Priority Register n
  #define NVIC_NVICIP86 (* ((volatile uint8_t *) (0xe000e100 + 854)))

  // Field PRI86: Priority of interrupt 86
    inline uint8_t NVIC_NVICIP86_PRI86 (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register NVICIP87: Interrupt Priority Register n
  #define NVIC_NVICIP87 (* ((volatile uint8_t *) (0xe000e100 + 855)))

  // Field PRI87: Priority of interrupt 87
    inline uint8_t NVIC_NVICIP87_PRI87 (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register NVICIP88: Interrupt Priority Register n
  #define NVIC_NVICIP88 (* ((volatile uint8_t *) (0xe000e100 + 856)))

  // Field PRI88: Priority of interrupt 88
    inline uint8_t NVIC_NVICIP88_PRI88 (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register NVICIP89: Interrupt Priority Register n
  #define NVIC_NVICIP89 (* ((volatile uint8_t *) (0xe000e100 + 857)))

  // Field PRI89: Priority of interrupt 89
    inline uint8_t NVIC_NVICIP89_PRI89 (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register NVICIP90: Interrupt Priority Register n
  #define NVIC_NVICIP90 (* ((volatile uint8_t *) (0xe000e100 + 858)))

  // Field PRI90: Priority of interrupt 90
    inline uint8_t NVIC_NVICIP90_PRI90 (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register NVICIP91: Interrupt Priority Register n
  #define NVIC_NVICIP91 (* ((volatile uint8_t *) (0xe000e100 + 859)))

  // Field PRI91: Priority of interrupt 91
    inline uint8_t NVIC_NVICIP91_PRI91 (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register NVICIP92: Interrupt Priority Register n
  #define NVIC_NVICIP92 (* ((volatile uint8_t *) (0xe000e100 + 860)))

  // Field PRI92: Priority of interrupt 92
    inline uint8_t NVIC_NVICIP92_PRI92 (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register NVICIP93: Interrupt Priority Register n
  #define NVIC_NVICIP93 (* ((volatile uint8_t *) (0xe000e100 + 861)))

  // Field PRI93: Priority of interrupt 93
    inline uint8_t NVIC_NVICIP93_PRI93 (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register NVICIP94: Interrupt Priority Register n
  #define NVIC_NVICIP94 (* ((volatile uint8_t *) (0xe000e100 + 862)))

  // Field PRI94: Priority of interrupt 94
    inline uint8_t NVIC_NVICIP94_PRI94 (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register NVICIP95: Interrupt Priority Register n
  #define NVIC_NVICIP95 (* ((volatile uint8_t *) (0xe000e100 + 863)))

  // Field PRI95: Priority of interrupt 95
    inline uint8_t NVIC_NVICIP95_PRI95 (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register NVICIP96: Interrupt Priority Register n
  #define NVIC_NVICIP96 (* ((volatile uint8_t *) (0xe000e100 + 864)))

  // Field PRI96: Priority of interrupt 96
    inline uint8_t NVIC_NVICIP96_PRI96 (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register NVICIP97: Interrupt Priority Register n
  #define NVIC_NVICIP97 (* ((volatile uint8_t *) (0xe000e100 + 865)))

  // Field PRI97: Priority of interrupt 97
    inline uint8_t NVIC_NVICIP97_PRI97 (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register NVICIP98: Interrupt Priority Register n
  #define NVIC_NVICIP98 (* ((volatile uint8_t *) (0xe000e100 + 866)))

  // Field PRI98: Priority of interrupt 98
    inline uint8_t NVIC_NVICIP98_PRI98 (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register NVICIP99: Interrupt Priority Register n
  #define NVIC_NVICIP99 (* ((volatile uint8_t *) (0xe000e100 + 867)))

  // Field PRI99: Priority of interrupt 99
    inline uint8_t NVIC_NVICIP99_PRI99 (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register NVICIP100: Interrupt Priority Register n
  #define NVIC_NVICIP100 (* ((volatile uint8_t *) (0xe000e100 + 868)))

  // Field PRI100: Priority of interrupt 100
    inline uint8_t NVIC_NVICIP100_PRI100 (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register NVICIP101: Interrupt Priority Register n
  #define NVIC_NVICIP101 (* ((volatile uint8_t *) (0xe000e100 + 869)))

  // Field PRI101: Priority of interrupt 101
    inline uint8_t NVIC_NVICIP101_PRI101 (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register NVICIP102: Interrupt Priority Register n
  #define NVIC_NVICIP102 (* ((volatile uint8_t *) (0xe000e100 + 870)))

  // Field PRI102: Priority of interrupt 102
    inline uint8_t NVIC_NVICIP102_PRI102 (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register NVICIP103: Interrupt Priority Register n
  #define NVIC_NVICIP103 (* ((volatile uint8_t *) (0xe000e100 + 871)))

  // Field PRI103: Priority of interrupt 103
    inline uint8_t NVIC_NVICIP103_PRI103 (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register NVICIP104: Interrupt Priority Register n
  #define NVIC_NVICIP104 (* ((volatile uint8_t *) (0xe000e100 + 872)))

  // Field PRI104: Priority of interrupt 104
    inline uint8_t NVIC_NVICIP104_PRI104 (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register NVICIP105: Interrupt Priority Register n
  #define NVIC_NVICIP105 (* ((volatile uint8_t *) (0xe000e100 + 873)))

  // Field PRI105: Priority of interrupt 105
    inline uint8_t NVIC_NVICIP105_PRI105 (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register NVICSTIR: Software Trigger Interrupt Register
  #define NVIC_NVICSTIR (* ((volatile uint32_t *) (0xe000e100 + 3584)))

  // Field INTID: Interrupt ID of the interrupt to trigger, in the range 0-239. For example, a value of 0x03 specifies interrupt IRQ3.
    inline uint32_t NVIC_NVICSTIR_INTID (const uint32_t inValue) {return (inValue & 0x1ffU) << 0 ; }

  // Field RESERVED: no description available
    const uint32_t NVIC_NVICSTIR_RESERVED = 1U << 9 ;

  // Field RESERVED: no description available
    const uint32_t NVIC_NVICSTIR_RESERVED = 1U << 10 ;

  // Field RESERVED: no description available
    const uint32_t NVIC_NVICSTIR_RESERVED = 1U << 11 ;

  // Field RESERVED: no description available
    const uint32_t NVIC_NVICSTIR_RESERVED = 1U << 12 ;

  // Field RESERVED: no description available
    const uint32_t NVIC_NVICSTIR_RESERVED = 1U << 13 ;

  // Field RESERVED: no description available
    const uint32_t NVIC_NVICSTIR_RESERVED = 1U << 14 ;

  // Field RESERVED: no description available
    const uint32_t NVIC_NVICSTIR_RESERVED = 1U << 15 ;

  // Field RESERVED: no description available
    const uint32_t NVIC_NVICSTIR_RESERVED = 1U << 16 ;

  // Field RESERVED: no description available
    const uint32_t NVIC_NVICSTIR_RESERVED = 1U << 17 ;

  // Field RESERVED: no description available
    const uint32_t NVIC_NVICSTIR_RESERVED = 1U << 18 ;

  // Field RESERVED: no description available
    const uint32_t NVIC_NVICSTIR_RESERVED = 1U << 19 ;

  // Field RESERVED: no description available
    const uint32_t NVIC_NVICSTIR_RESERVED = 1U << 20 ;

  // Field RESERVED: no description available
    const uint32_t NVIC_NVICSTIR_RESERVED = 1U << 21 ;

  // Field RESERVED: no description available
    const uint32_t NVIC_NVICSTIR_RESERVED = 1U << 22 ;

  // Field RESERVED: no description available
    const uint32_t NVIC_NVICSTIR_RESERVED = 1U << 23 ;

  // Field RESERVED: no description available
    const uint32_t NVIC_NVICSTIR_RESERVED = 1U << 24 ;

  // Field RESERVED: no description available
    const uint32_t NVIC_NVICSTIR_RESERVED = 1U << 25 ;

  // Field RESERVED: no description available
    const uint32_t NVIC_NVICSTIR_RESERVED = 1U << 26 ;

  // Field RESERVED: no description available
    const uint32_t NVIC_NVICSTIR_RESERVED = 1U << 27 ;

  // Field RESERVED: no description available
    const uint32_t NVIC_NVICSTIR_RESERVED = 1U << 28 ;

  // Field RESERVED: no description available
    const uint32_t NVIC_NVICSTIR_RESERVED = 1U << 29 ;

  // Field RESERVED: no description available
    const uint32_t NVIC_NVICSTIR_RESERVED = 1U << 30 ;

  // Field RESERVED: no description available
    const uint32_t NVIC_NVICSTIR_RESERVED = 1U << 31 ;

//------------------------------------------------------------------------------
// Peripheral OSC: Oscillator
//------------------------------------------------------------------------------

//---  Register CR: OSC Control Register
  #define OSC_CR (* ((volatile uint8_t *) (0x40065000 + 0)))

  // Field SC16P: Oscillator 16 pF Capacitor Load Configure
    const uint8_t OSC_CR_SC16P = 1U << 0 ;

  // Field SC8P: Oscillator 8 pF Capacitor Load Configure
    const uint8_t OSC_CR_SC8P = 1U << 1 ;

  // Field SC4P: Oscillator 4 pF Capacitor Load Configure
    const uint8_t OSC_CR_SC4P = 1U << 2 ;

  // Field SC2P: Oscillator 2 pF Capacitor Load Configure
    const uint8_t OSC_CR_SC2P = 1U << 3 ;

  // Field RESERVED: no description available
    const uint8_t OSC_CR_RESERVED = 1U << 4 ;

  // Field EREFSTEN: External Reference Stop Enable
    const uint8_t OSC_CR_EREFSTEN = 1U << 5 ;

  // Field RESERVED: no description available
    const uint8_t OSC_CR_RESERVED = 1U << 6 ;

  // Field ERCLKEN: External Reference Enable
    const uint8_t OSC_CR_ERCLKEN = 1U << 7 ;

//------------------------------------------------------------------------------
// Peripheral PDB0: Programmable Delay Block
//------------------------------------------------------------------------------

//---  Register SC: Status and Control Register
  #define PDB0_SC (* ((volatile uint32_t *) (0x40036000 + 0)))

  // Field LDOK: Load OK
    const uint32_t PDB0_SC_LDOK = 1U << 0 ;

  // Field CONT: Continuous Mode Enable
    const uint32_t PDB0_SC_CONT = 1U << 1 ;

  // Field MULT: Multiplication Factor Select for Prescaler
    inline uint32_t PDB0_SC_MULT (const uint32_t inValue) {return (inValue & 0x3U) << 2 ; }

  // Field RESERVED: no description available
    const uint32_t PDB0_SC_RESERVED = 1U << 4 ;

  // Field PDBIE: PDB Interrupt Enable.
    const uint32_t PDB0_SC_PDBIE = 1U << 5 ;

  // Field PDBIF: PDB Interrupt Flag
    const uint32_t PDB0_SC_PDBIF = 1U << 6 ;

  // Field PDBEN: PDB Enable
    const uint32_t PDB0_SC_PDBEN = 1U << 7 ;

  // Field TRGSEL: Trigger Input Source Select
    inline uint32_t PDB0_SC_TRGSEL (const uint32_t inValue) {return (inValue & 0xfU) << 8 ; }

  // Field PRESCALER: Prescaler Divider Select
    inline uint32_t PDB0_SC_PRESCALER (const uint32_t inValue) {return (inValue & 0x7U) << 12 ; }

  // Field DMAEN: DMA Enable
    const uint32_t PDB0_SC_DMAEN = 1U << 15 ;

  // Field SWTRIG: Software Trigger
    const uint32_t PDB0_SC_SWTRIG = 1U << 16 ;

  // Field PDBEIE: PDB Sequence Error Interrupt Enable
    const uint32_t PDB0_SC_PDBEIE = 1U << 17 ;

  // Field LDMOD: Load Mode Select
    inline uint32_t PDB0_SC_LDMOD (const uint32_t inValue) {return (inValue & 0x3U) << 18 ; }

  // Field RESERVED: no description available
    inline uint32_t PDB0_SC_RESERVED (const uint32_t inValue) {return (inValue & 0xfffU) << 20 ; }

//---  Register MOD: Modulus Register
  #define PDB0_MOD (* ((volatile uint32_t *) (0x40036000 + 4)))

  // Field MOD: PDB Modulus.
    inline uint32_t PDB0_MOD_MOD (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

  // Field RESERVED: no description available
    inline uint32_t PDB0_MOD_RESERVED (const uint32_t inValue) {return (inValue & 0xffffU) << 16 ; }

//---  Register CNT: Counter Register
  #define PDB0_CNT (* ((volatile uint32_t *) (0x40036000 + 8)))

  // Field CNT: PDB Counter
    inline uint32_t PDB0_CNT_CNT (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

  // Field RESERVED: no description available
    inline uint32_t PDB0_CNT_RESERVED (const uint32_t inValue) {return (inValue & 0xffffU) << 16 ; }

//---  Register IDLY: Interrupt Delay Register
  #define PDB0_IDLY (* ((volatile uint32_t *) (0x40036000 + 12)))

  // Field IDLY: PDB Interrupt Delay
    inline uint32_t PDB0_IDLY_IDLY (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

  // Field RESERVED: no description available
    inline uint32_t PDB0_IDLY_RESERVED (const uint32_t inValue) {return (inValue & 0xffffU) << 16 ; }

//---  Registers CHC1(0,1): Channel n Control Register 1
  #define PDB0_CHC1(idx) (* ((volatile uint32_t *) (0x40036000 + 0x10 + (idx) * 0x28)))
  #define PDB0_CH0C1 (* ((volatile uint32_t *) (0x40036000 + 0x10 + 0 * 0x28)))
  #define PDB0_CH1C1 (* ((volatile uint32_t *) (0x40036000 + 0x10 + 1 * 0x28)))

  // Field EN: PDB Channel Pre-Trigger Enable
    inline uint32_t PDB0_CHC1_EN (const uint32_t inValue) {return (inValue & 0xffU) << 0 ; }

  // Field TOS: PDB Channel Pre-Trigger Output Select
    inline uint32_t PDB0_CHC1_TOS (const uint32_t inValue) {return (inValue & 0xffU) << 8 ; }

  // Field BB: PDB Channel Pre-Trigger Back-to-Back Operation Enable
    inline uint32_t PDB0_CHC1_BB (const uint32_t inValue) {return (inValue & 0xffU) << 16 ; }

  // Field RESERVED: no description available
    inline uint32_t PDB0_CHC1_RESERVED (const uint32_t inValue) {return (inValue & 0xffU) << 24 ; }

//---  Registers CHS(0,1): Channel n Status Register
  #define PDB0_CHS(idx) (* ((volatile uint32_t *) (0x40036000 + 0x14 + (idx) * 0x28)))
  #define PDB0_CH0S (* ((volatile uint32_t *) (0x40036000 + 0x14 + 0 * 0x28)))
  #define PDB0_CH1S (* ((volatile uint32_t *) (0x40036000 + 0x14 + 1 * 0x28)))

  // Field ERR: PDB Channel Sequence Error Flags
    inline uint32_t PDB0_CHS_ERR (const uint32_t inValue) {return (inValue & 0xffU) << 0 ; }

  // Field RESERVED: no description available
    inline uint32_t PDB0_CHS_RESERVED (const uint32_t inValue) {return (inValue & 0xffU) << 8 ; }

  // Field CF: PDB Channel Flags
    inline uint32_t PDB0_CHS_CF (const uint32_t inValue) {return (inValue & 0xffU) << 16 ; }

  // Field RESERVED: no description available
    inline uint32_t PDB0_CHS_RESERVED (const uint32_t inValue) {return (inValue & 0xffU) << 24 ; }

//---  Registers CHDLY0(0,1): Channel n Delay 0 Register
  #define PDB0_CHDLY0(idx) (* ((volatile uint32_t *) (0x40036000 + 0x18 + (idx) * 0x28)))
  #define PDB0_CH0DLY0 (* ((volatile uint32_t *) (0x40036000 + 0x18 + 0 * 0x28)))
  #define PDB0_CH1DLY0 (* ((volatile uint32_t *) (0x40036000 + 0x18 + 1 * 0x28)))

  // Field DLY: PDB Channel Delay
    inline uint32_t PDB0_CHDLY0_DLY (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

  // Field RESERVED: no description available
    inline uint32_t PDB0_CHDLY0_RESERVED (const uint32_t inValue) {return (inValue & 0xffffU) << 16 ; }

//---  Registers CHDLY1(0,1): Channel n Delay 1 Register
  #define PDB0_CHDLY1(idx) (* ((volatile uint32_t *) (0x40036000 + 0x1c + (idx) * 0x28)))
  #define PDB0_CH0DLY1 (* ((volatile uint32_t *) (0x40036000 + 0x1c + 0 * 0x28)))
  #define PDB0_CH1DLY1 (* ((volatile uint32_t *) (0x40036000 + 0x1c + 1 * 0x28)))

  // Field DLY: PDB Channel Delay
    inline uint32_t PDB0_CHDLY1_DLY (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

  // Field RESERVED: no description available
    inline uint32_t PDB0_CHDLY1_RESERVED (const uint32_t inValue) {return (inValue & 0xffffU) << 16 ; }

//---  Register DACINTC: DAC Interval Trigger n Control Register
  #define PDB0_DACINTC (* ((volatile uint32_t *) (0x40036000 + 336)))

  // Field TOE: DAC Interval Trigger Enable
    const uint32_t PDB0_DACINTC_TOE = 1U << 0 ;

  // Field EXT: DAC External Trigger Input Enable
    const uint32_t PDB0_DACINTC_EXT = 1U << 1 ;

  // Field RESERVED: no description available
    inline uint32_t PDB0_DACINTC_RESERVED (const uint32_t inValue) {return (inValue & 0x3fffffffU) << 2 ; }

//---  Register DACINT: DAC Interval n Register
  #define PDB0_DACINT (* ((volatile uint32_t *) (0x40036000 + 340)))

  // Field INT: DAC Interval
    inline uint32_t PDB0_DACINT_INT (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

  // Field RESERVED: no description available
    inline uint32_t PDB0_DACINT_RESERVED (const uint32_t inValue) {return (inValue & 0xffffU) << 16 ; }

//---  Register POEN: Pulse-Out n Enable Register
  #define PDB0_POEN (* ((volatile uint32_t *) (0x40036000 + 400)))

  // Field POEN: PDB Pulse-Out Enable
    inline uint32_t PDB0_POEN_POEN (const uint32_t inValue) {return (inValue & 0xffU) << 0 ; }

  // Field RESERVED: no description available
    inline uint32_t PDB0_POEN_RESERVED (const uint32_t inValue) {return (inValue & 0xffffffU) << 8 ; }

//---  Registers PODLY(0,1,2): Pulse-Out n Delay Register
  #define PDB0_PODLY(idx) (* ((volatile uint32_t *) (0x40036000 + 0x194 + (idx) * 0x4)))
  #define PDB0_PO0DLY (* ((volatile uint32_t *) (0x40036000 + 0x194 + 0 * 0x4)))
  #define PDB0_PO1DLY (* ((volatile uint32_t *) (0x40036000 + 0x194 + 1 * 0x4)))
  #define PDB0_PO2DLY (* ((volatile uint32_t *) (0x40036000 + 0x194 + 2 * 0x4)))

  // Field DLY2: PDB Pulse-Out Delay 2
    inline uint32_t PDB0_PODLY_DLY2 (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

  // Field DLY1: PDB Pulse-Out Delay 1
    inline uint32_t PDB0_PODLY_DLY1 (const uint32_t inValue) {return (inValue & 0xffffU) << 16 ; }

//------------------------------------------------------------------------------
// Peripheral PIT: Periodic Interrupt Timer
//------------------------------------------------------------------------------

//---  Register MCR: PIT Module Control Register
  #define PIT_MCR (* ((volatile uint32_t *) (0x40037000 + 0)))

  // Field FRZ: Freeze
    const uint32_t PIT_MCR_FRZ = 1U << 0 ;

  // Field MDIS: Module Disable
    const uint32_t PIT_MCR_MDIS = 1U << 1 ;

  // Field RESERVED: no description available
    inline uint32_t PIT_MCR_RESERVED (const uint32_t inValue) {return (inValue & 0x3fffffffU) << 2 ; }

//---  Registers LDVAL(0,1,2,3): Timer Load Value Register
  #define PIT_LDVAL(idx) (* ((volatile uint32_t *) (0x40037000 + 0x100 + (idx) * 0x10)))
  #define PIT_LDVAL0 (* ((volatile uint32_t *) (0x40037000 + 0x100 + 0 * 0x10)))
  #define PIT_LDVAL1 (* ((volatile uint32_t *) (0x40037000 + 0x100 + 1 * 0x10)))
  #define PIT_LDVAL2 (* ((volatile uint32_t *) (0x40037000 + 0x100 + 2 * 0x10)))
  #define PIT_LDVAL3 (* ((volatile uint32_t *) (0x40037000 + 0x100 + 3 * 0x10)))

  // Field TSV: Timer Start Value Bits
    inline uint32_t PIT_LDVAL_TSV (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Registers CVAL(0,1,2,3): Current Timer Value Register
  #define PIT_CVAL(idx) (* ((volatile uint32_t *) (0x40037000 + 0x104 + (idx) * 0x10)))
  #define PIT_CVAL0 (* ((volatile uint32_t *) (0x40037000 + 0x104 + 0 * 0x10)))
  #define PIT_CVAL1 (* ((volatile uint32_t *) (0x40037000 + 0x104 + 1 * 0x10)))
  #define PIT_CVAL2 (* ((volatile uint32_t *) (0x40037000 + 0x104 + 2 * 0x10)))
  #define PIT_CVAL3 (* ((volatile uint32_t *) (0x40037000 + 0x104 + 3 * 0x10)))

  // Field TVL: Current Timer Value
    inline uint32_t PIT_CVAL_TVL (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Registers TCTRL(0,1,2,3): Timer Control Register
  #define PIT_TCTRL(idx) (* ((volatile uint32_t *) (0x40037000 + 0x108 + (idx) * 0x10)))
  #define PIT_TCTRL0 (* ((volatile uint32_t *) (0x40037000 + 0x108 + 0 * 0x10)))
  #define PIT_TCTRL1 (* ((volatile uint32_t *) (0x40037000 + 0x108 + 1 * 0x10)))
  #define PIT_TCTRL2 (* ((volatile uint32_t *) (0x40037000 + 0x108 + 2 * 0x10)))
  #define PIT_TCTRL3 (* ((volatile uint32_t *) (0x40037000 + 0x108 + 3 * 0x10)))

  // Field TEN: Timer Enable Bit.
    const uint32_t PIT_TCTRL_TEN = 1U << 0 ;

  // Field TIE: Timer Interrupt Enable Bit.
    const uint32_t PIT_TCTRL_TIE = 1U << 1 ;

  // Field RESERVED: no description available
    inline uint32_t PIT_TCTRL_RESERVED (const uint32_t inValue) {return (inValue & 0x3fffffffU) << 2 ; }

//---  Registers TFLG(0,1,2,3): Timer Flag Register
  #define PIT_TFLG(idx) (* ((volatile uint32_t *) (0x40037000 + 0x10c + (idx) * 0x10)))
  #define PIT_TFLG0 (* ((volatile uint32_t *) (0x40037000 + 0x10c + 0 * 0x10)))
  #define PIT_TFLG1 (* ((volatile uint32_t *) (0x40037000 + 0x10c + 1 * 0x10)))
  #define PIT_TFLG2 (* ((volatile uint32_t *) (0x40037000 + 0x10c + 2 * 0x10)))
  #define PIT_TFLG3 (* ((volatile uint32_t *) (0x40037000 + 0x10c + 3 * 0x10)))

  // Field TIF: Timer Interrupt Flag.
    const uint32_t PIT_TFLG_TIF = 1U << 0 ;

  // Field RESERVED: no description available
    inline uint32_t PIT_TFLG_RESERVED (const uint32_t inValue) {return (inValue & 0x7fffffffU) << 1 ; }

//------------------------------------------------------------------------------
// Peripheral PMC: Power Management Controller
//------------------------------------------------------------------------------

//---  Register LVDSC1: Low Voltage Detect Status and Control 1 Register
  #define PMC_LVDSC1 (* ((volatile uint8_t *) (0x4007d000 + 0)))

  // Field LVDV: Low-Voltage Detect Voltage Select
    inline uint8_t PMC_LVDSC1_LVDV (const uint8_t inValue) {return (inValue & 0x3U) << 0 ; }

  // Field RESERVED: no description available
    inline uint8_t PMC_LVDSC1_RESERVED (const uint8_t inValue) {return (inValue & 0x3U) << 2 ; }

  // Field LVDRE: Low-Voltage Detect Reset Enable
    const uint8_t PMC_LVDSC1_LVDRE = 1U << 4 ;

  // Field LVDIE: Low-Voltage Detect Interrupt Enable
    const uint8_t PMC_LVDSC1_LVDIE = 1U << 5 ;

  // Field LVDACK: Low-Voltage Detect Acknowledge
    const uint8_t PMC_LVDSC1_LVDACK = 1U << 6 ;

  // Field LVDF: Low-Voltage Detect Flag
    const uint8_t PMC_LVDSC1_LVDF = 1U << 7 ;

//---  Register LVDSC2: Low Voltage Detect Status and Control 2 Register
  #define PMC_LVDSC2 (* ((volatile uint8_t *) (0x4007d000 + 1)))

  // Field LVWV: Low-Voltage Warning Voltage Select
    inline uint8_t PMC_LVDSC2_LVWV (const uint8_t inValue) {return (inValue & 0x3U) << 0 ; }

  // Field RESERVED: no description available
    inline uint8_t PMC_LVDSC2_RESERVED (const uint8_t inValue) {return (inValue & 0x7U) << 2 ; }

  // Field LVWIE: Low-Voltage Warning Interrupt Enable
    const uint8_t PMC_LVDSC2_LVWIE = 1U << 5 ;

  // Field LVWACK: Low-Voltage Warning Acknowledge
    const uint8_t PMC_LVDSC2_LVWACK = 1U << 6 ;

  // Field LVWF: Low-Voltage Warning Flag
    const uint8_t PMC_LVDSC2_LVWF = 1U << 7 ;

//---  Register REGSC: Regulator Status and Control Register
  #define PMC_REGSC (* ((volatile uint8_t *) (0x4007d000 + 2)))

  // Field BGBE: Bandgap Buffer Enable
    const uint8_t PMC_REGSC_BGBE = 1U << 0 ;

  // Field RESERVED: no description available
    const uint8_t PMC_REGSC_RESERVED = 1U << 1 ;

  // Field REGONS: Regulator in Run Regulation Status
    const uint8_t PMC_REGSC_REGONS = 1U << 2 ;

  // Field ACKISO: Acknowledge Isolation
    const uint8_t PMC_REGSC_ACKISO = 1U << 3 ;

  // Field BGEN: Bandgap enable in VLPx operation
    const uint8_t PMC_REGSC_BGEN = 1U << 4 ;

  // Field RESERVED: no description available
    inline uint8_t PMC_REGSC_RESERVED (const uint8_t inValue) {return (inValue & 0x7U) << 5 ; }

//------------------------------------------------------------------------------
// PERIPHERAL GROUP: PORT
//        PORTA at 0x40049000
//        PORTB at 0x4004a000
//        PORTC at 0x4004b000
//        PORTD at 0x4004c000
//        PORTE at 0x4004d000
//------------------------------------------------------------------------------

static const uint32_t kBaseAddress_PORT [5] = {0x40049000, 0x4004a000, 0x4004b000, 0x4004c000, 0x4004d000} ;

//------------------------------------------------------------------------------

//---  Registers PCR(0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31): Pin Control Register n
  #define PORT_PCR(group,idx) (* ((volatile uint32_t *) (kBaseAddress_PCR [group] + 0x0 + (idx) * 0x4)))
  #define PORTA_PCR(idx) (* ((volatile uint32_t *) (0x40049000 + 0x0 + (idx) * 0x4)))
  #define PORTB_PCR(idx) (* ((volatile uint32_t *) (0x4004a000 + 0x0 + (idx) * 0x4)))
  #define PORTC_PCR(idx) (* ((volatile uint32_t *) (0x4004b000 + 0x0 + (idx) * 0x4)))
  #define PORTD_PCR(idx) (* ((volatile uint32_t *) (0x4004c000 + 0x0 + (idx) * 0x4)))
  #define PORTE_PCR(idx) (* ((volatile uint32_t *) (0x4004d000 + 0x0 + (idx) * 0x4)))
  #define PORTA_PCR0 (* ((volatile uint32_t *) (0x40049000 + 0x0 + 0 * 0x4)))
  #define PORTB_PCR0 (* ((volatile uint32_t *) (0x4004a000 + 0x0 + 0 * 0x4)))
  #define PORTC_PCR0 (* ((volatile uint32_t *) (0x4004b000 + 0x0 + 0 * 0x4)))
  #define PORTD_PCR0 (* ((volatile uint32_t *) (0x4004c000 + 0x0 + 0 * 0x4)))
  #define PORTE_PCR0 (* ((volatile uint32_t *) (0x4004d000 + 0x0 + 0 * 0x4)))
  #define PORTA_PCR1 (* ((volatile uint32_t *) (0x40049000 + 0x0 + 1 * 0x4)))
  #define PORTB_PCR1 (* ((volatile uint32_t *) (0x4004a000 + 0x0 + 1 * 0x4)))
  #define PORTC_PCR1 (* ((volatile uint32_t *) (0x4004b000 + 0x0 + 1 * 0x4)))
  #define PORTD_PCR1 (* ((volatile uint32_t *) (0x4004c000 + 0x0 + 1 * 0x4)))
  #define PORTE_PCR1 (* ((volatile uint32_t *) (0x4004d000 + 0x0 + 1 * 0x4)))
  #define PORTA_PCR2 (* ((volatile uint32_t *) (0x40049000 + 0x0 + 2 * 0x4)))
  #define PORTB_PCR2 (* ((volatile uint32_t *) (0x4004a000 + 0x0 + 2 * 0x4)))
  #define PORTC_PCR2 (* ((volatile uint32_t *) (0x4004b000 + 0x0 + 2 * 0x4)))
  #define PORTD_PCR2 (* ((volatile uint32_t *) (0x4004c000 + 0x0 + 2 * 0x4)))
  #define PORTE_PCR2 (* ((volatile uint32_t *) (0x4004d000 + 0x0 + 2 * 0x4)))
  #define PORTA_PCR3 (* ((volatile uint32_t *) (0x40049000 + 0x0 + 3 * 0x4)))
  #define PORTB_PCR3 (* ((volatile uint32_t *) (0x4004a000 + 0x0 + 3 * 0x4)))
  #define PORTC_PCR3 (* ((volatile uint32_t *) (0x4004b000 + 0x0 + 3 * 0x4)))
  #define PORTD_PCR3 (* ((volatile uint32_t *) (0x4004c000 + 0x0 + 3 * 0x4)))
  #define PORTE_PCR3 (* ((volatile uint32_t *) (0x4004d000 + 0x0 + 3 * 0x4)))
  #define PORTA_PCR4 (* ((volatile uint32_t *) (0x40049000 + 0x0 + 4 * 0x4)))
  #define PORTB_PCR4 (* ((volatile uint32_t *) (0x4004a000 + 0x0 + 4 * 0x4)))
  #define PORTC_PCR4 (* ((volatile uint32_t *) (0x4004b000 + 0x0 + 4 * 0x4)))
  #define PORTD_PCR4 (* ((volatile uint32_t *) (0x4004c000 + 0x0 + 4 * 0x4)))
  #define PORTE_PCR4 (* ((volatile uint32_t *) (0x4004d000 + 0x0 + 4 * 0x4)))
  #define PORTA_PCR5 (* ((volatile uint32_t *) (0x40049000 + 0x0 + 5 * 0x4)))
  #define PORTB_PCR5 (* ((volatile uint32_t *) (0x4004a000 + 0x0 + 5 * 0x4)))
  #define PORTC_PCR5 (* ((volatile uint32_t *) (0x4004b000 + 0x0 + 5 * 0x4)))
  #define PORTD_PCR5 (* ((volatile uint32_t *) (0x4004c000 + 0x0 + 5 * 0x4)))
  #define PORTE_PCR5 (* ((volatile uint32_t *) (0x4004d000 + 0x0 + 5 * 0x4)))
  #define PORTA_PCR6 (* ((volatile uint32_t *) (0x40049000 + 0x0 + 6 * 0x4)))
  #define PORTB_PCR6 (* ((volatile uint32_t *) (0x4004a000 + 0x0 + 6 * 0x4)))
  #define PORTC_PCR6 (* ((volatile uint32_t *) (0x4004b000 + 0x0 + 6 * 0x4)))
  #define PORTD_PCR6 (* ((volatile uint32_t *) (0x4004c000 + 0x0 + 6 * 0x4)))
  #define PORTE_PCR6 (* ((volatile uint32_t *) (0x4004d000 + 0x0 + 6 * 0x4)))
  #define PORTA_PCR7 (* ((volatile uint32_t *) (0x40049000 + 0x0 + 7 * 0x4)))
  #define PORTB_PCR7 (* ((volatile uint32_t *) (0x4004a000 + 0x0 + 7 * 0x4)))
  #define PORTC_PCR7 (* ((volatile uint32_t *) (0x4004b000 + 0x0 + 7 * 0x4)))
  #define PORTD_PCR7 (* ((volatile uint32_t *) (0x4004c000 + 0x0 + 7 * 0x4)))
  #define PORTE_PCR7 (* ((volatile uint32_t *) (0x4004d000 + 0x0 + 7 * 0x4)))
  #define PORTA_PCR8 (* ((volatile uint32_t *) (0x40049000 + 0x0 + 8 * 0x4)))
  #define PORTB_PCR8 (* ((volatile uint32_t *) (0x4004a000 + 0x0 + 8 * 0x4)))
  #define PORTC_PCR8 (* ((volatile uint32_t *) (0x4004b000 + 0x0 + 8 * 0x4)))
  #define PORTD_PCR8 (* ((volatile uint32_t *) (0x4004c000 + 0x0 + 8 * 0x4)))
  #define PORTE_PCR8 (* ((volatile uint32_t *) (0x4004d000 + 0x0 + 8 * 0x4)))
  #define PORTA_PCR9 (* ((volatile uint32_t *) (0x40049000 + 0x0 + 9 * 0x4)))
  #define PORTB_PCR9 (* ((volatile uint32_t *) (0x4004a000 + 0x0 + 9 * 0x4)))
  #define PORTC_PCR9 (* ((volatile uint32_t *) (0x4004b000 + 0x0 + 9 * 0x4)))
  #define PORTD_PCR9 (* ((volatile uint32_t *) (0x4004c000 + 0x0 + 9 * 0x4)))
  #define PORTE_PCR9 (* ((volatile uint32_t *) (0x4004d000 + 0x0 + 9 * 0x4)))
  #define PORTA_PCR10 (* ((volatile uint32_t *) (0x40049000 + 0x0 + 10 * 0x4)))
  #define PORTB_PCR10 (* ((volatile uint32_t *) (0x4004a000 + 0x0 + 10 * 0x4)))
  #define PORTC_PCR10 (* ((volatile uint32_t *) (0x4004b000 + 0x0 + 10 * 0x4)))
  #define PORTD_PCR10 (* ((volatile uint32_t *) (0x4004c000 + 0x0 + 10 * 0x4)))
  #define PORTE_PCR10 (* ((volatile uint32_t *) (0x4004d000 + 0x0 + 10 * 0x4)))
  #define PORTA_PCR11 (* ((volatile uint32_t *) (0x40049000 + 0x0 + 11 * 0x4)))
  #define PORTB_PCR11 (* ((volatile uint32_t *) (0x4004a000 + 0x0 + 11 * 0x4)))
  #define PORTC_PCR11 (* ((volatile uint32_t *) (0x4004b000 + 0x0 + 11 * 0x4)))
  #define PORTD_PCR11 (* ((volatile uint32_t *) (0x4004c000 + 0x0 + 11 * 0x4)))
  #define PORTE_PCR11 (* ((volatile uint32_t *) (0x4004d000 + 0x0 + 11 * 0x4)))
  #define PORTA_PCR12 (* ((volatile uint32_t *) (0x40049000 + 0x0 + 12 * 0x4)))
  #define PORTB_PCR12 (* ((volatile uint32_t *) (0x4004a000 + 0x0 + 12 * 0x4)))
  #define PORTC_PCR12 (* ((volatile uint32_t *) (0x4004b000 + 0x0 + 12 * 0x4)))
  #define PORTD_PCR12 (* ((volatile uint32_t *) (0x4004c000 + 0x0 + 12 * 0x4)))
  #define PORTE_PCR12 (* ((volatile uint32_t *) (0x4004d000 + 0x0 + 12 * 0x4)))
  #define PORTA_PCR13 (* ((volatile uint32_t *) (0x40049000 + 0x0 + 13 * 0x4)))
  #define PORTB_PCR13 (* ((volatile uint32_t *) (0x4004a000 + 0x0 + 13 * 0x4)))
  #define PORTC_PCR13 (* ((volatile uint32_t *) (0x4004b000 + 0x0 + 13 * 0x4)))
  #define PORTD_PCR13 (* ((volatile uint32_t *) (0x4004c000 + 0x0 + 13 * 0x4)))
  #define PORTE_PCR13 (* ((volatile uint32_t *) (0x4004d000 + 0x0 + 13 * 0x4)))
  #define PORTA_PCR14 (* ((volatile uint32_t *) (0x40049000 + 0x0 + 14 * 0x4)))
  #define PORTB_PCR14 (* ((volatile uint32_t *) (0x4004a000 + 0x0 + 14 * 0x4)))
  #define PORTC_PCR14 (* ((volatile uint32_t *) (0x4004b000 + 0x0 + 14 * 0x4)))
  #define PORTD_PCR14 (* ((volatile uint32_t *) (0x4004c000 + 0x0 + 14 * 0x4)))
  #define PORTE_PCR14 (* ((volatile uint32_t *) (0x4004d000 + 0x0 + 14 * 0x4)))
  #define PORTA_PCR15 (* ((volatile uint32_t *) (0x40049000 + 0x0 + 15 * 0x4)))
  #define PORTB_PCR15 (* ((volatile uint32_t *) (0x4004a000 + 0x0 + 15 * 0x4)))
  #define PORTC_PCR15 (* ((volatile uint32_t *) (0x4004b000 + 0x0 + 15 * 0x4)))
  #define PORTD_PCR15 (* ((volatile uint32_t *) (0x4004c000 + 0x0 + 15 * 0x4)))
  #define PORTE_PCR15 (* ((volatile uint32_t *) (0x4004d000 + 0x0 + 15 * 0x4)))
  #define PORTA_PCR16 (* ((volatile uint32_t *) (0x40049000 + 0x0 + 16 * 0x4)))
  #define PORTB_PCR16 (* ((volatile uint32_t *) (0x4004a000 + 0x0 + 16 * 0x4)))
  #define PORTC_PCR16 (* ((volatile uint32_t *) (0x4004b000 + 0x0 + 16 * 0x4)))
  #define PORTD_PCR16 (* ((volatile uint32_t *) (0x4004c000 + 0x0 + 16 * 0x4)))
  #define PORTE_PCR16 (* ((volatile uint32_t *) (0x4004d000 + 0x0 + 16 * 0x4)))
  #define PORTA_PCR17 (* ((volatile uint32_t *) (0x40049000 + 0x0 + 17 * 0x4)))
  #define PORTB_PCR17 (* ((volatile uint32_t *) (0x4004a000 + 0x0 + 17 * 0x4)))
  #define PORTC_PCR17 (* ((volatile uint32_t *) (0x4004b000 + 0x0 + 17 * 0x4)))
  #define PORTD_PCR17 (* ((volatile uint32_t *) (0x4004c000 + 0x0 + 17 * 0x4)))
  #define PORTE_PCR17 (* ((volatile uint32_t *) (0x4004d000 + 0x0 + 17 * 0x4)))
  #define PORTA_PCR18 (* ((volatile uint32_t *) (0x40049000 + 0x0 + 18 * 0x4)))
  #define PORTB_PCR18 (* ((volatile uint32_t *) (0x4004a000 + 0x0 + 18 * 0x4)))
  #define PORTC_PCR18 (* ((volatile uint32_t *) (0x4004b000 + 0x0 + 18 * 0x4)))
  #define PORTD_PCR18 (* ((volatile uint32_t *) (0x4004c000 + 0x0 + 18 * 0x4)))
  #define PORTE_PCR18 (* ((volatile uint32_t *) (0x4004d000 + 0x0 + 18 * 0x4)))
  #define PORTA_PCR19 (* ((volatile uint32_t *) (0x40049000 + 0x0 + 19 * 0x4)))
  #define PORTB_PCR19 (* ((volatile uint32_t *) (0x4004a000 + 0x0 + 19 * 0x4)))
  #define PORTC_PCR19 (* ((volatile uint32_t *) (0x4004b000 + 0x0 + 19 * 0x4)))
  #define PORTD_PCR19 (* ((volatile uint32_t *) (0x4004c000 + 0x0 + 19 * 0x4)))
  #define PORTE_PCR19 (* ((volatile uint32_t *) (0x4004d000 + 0x0 + 19 * 0x4)))
  #define PORTA_PCR20 (* ((volatile uint32_t *) (0x40049000 + 0x0 + 20 * 0x4)))
  #define PORTB_PCR20 (* ((volatile uint32_t *) (0x4004a000 + 0x0 + 20 * 0x4)))
  #define PORTC_PCR20 (* ((volatile uint32_t *) (0x4004b000 + 0x0 + 20 * 0x4)))
  #define PORTD_PCR20 (* ((volatile uint32_t *) (0x4004c000 + 0x0 + 20 * 0x4)))
  #define PORTE_PCR20 (* ((volatile uint32_t *) (0x4004d000 + 0x0 + 20 * 0x4)))
  #define PORTA_PCR21 (* ((volatile uint32_t *) (0x40049000 + 0x0 + 21 * 0x4)))
  #define PORTB_PCR21 (* ((volatile uint32_t *) (0x4004a000 + 0x0 + 21 * 0x4)))
  #define PORTC_PCR21 (* ((volatile uint32_t *) (0x4004b000 + 0x0 + 21 * 0x4)))
  #define PORTD_PCR21 (* ((volatile uint32_t *) (0x4004c000 + 0x0 + 21 * 0x4)))
  #define PORTE_PCR21 (* ((volatile uint32_t *) (0x4004d000 + 0x0 + 21 * 0x4)))
  #define PORTA_PCR22 (* ((volatile uint32_t *) (0x40049000 + 0x0 + 22 * 0x4)))
  #define PORTB_PCR22 (* ((volatile uint32_t *) (0x4004a000 + 0x0 + 22 * 0x4)))
  #define PORTC_PCR22 (* ((volatile uint32_t *) (0x4004b000 + 0x0 + 22 * 0x4)))
  #define PORTD_PCR22 (* ((volatile uint32_t *) (0x4004c000 + 0x0 + 22 * 0x4)))
  #define PORTE_PCR22 (* ((volatile uint32_t *) (0x4004d000 + 0x0 + 22 * 0x4)))
  #define PORTA_PCR23 (* ((volatile uint32_t *) (0x40049000 + 0x0 + 23 * 0x4)))
  #define PORTB_PCR23 (* ((volatile uint32_t *) (0x4004a000 + 0x0 + 23 * 0x4)))
  #define PORTC_PCR23 (* ((volatile uint32_t *) (0x4004b000 + 0x0 + 23 * 0x4)))
  #define PORTD_PCR23 (* ((volatile uint32_t *) (0x4004c000 + 0x0 + 23 * 0x4)))
  #define PORTE_PCR23 (* ((volatile uint32_t *) (0x4004d000 + 0x0 + 23 * 0x4)))
  #define PORTA_PCR24 (* ((volatile uint32_t *) (0x40049000 + 0x0 + 24 * 0x4)))
  #define PORTB_PCR24 (* ((volatile uint32_t *) (0x4004a000 + 0x0 + 24 * 0x4)))
  #define PORTC_PCR24 (* ((volatile uint32_t *) (0x4004b000 + 0x0 + 24 * 0x4)))
  #define PORTD_PCR24 (* ((volatile uint32_t *) (0x4004c000 + 0x0 + 24 * 0x4)))
  #define PORTE_PCR24 (* ((volatile uint32_t *) (0x4004d000 + 0x0 + 24 * 0x4)))
  #define PORTA_PCR25 (* ((volatile uint32_t *) (0x40049000 + 0x0 + 25 * 0x4)))
  #define PORTB_PCR25 (* ((volatile uint32_t *) (0x4004a000 + 0x0 + 25 * 0x4)))
  #define PORTC_PCR25 (* ((volatile uint32_t *) (0x4004b000 + 0x0 + 25 * 0x4)))
  #define PORTD_PCR25 (* ((volatile uint32_t *) (0x4004c000 + 0x0 + 25 * 0x4)))
  #define PORTE_PCR25 (* ((volatile uint32_t *) (0x4004d000 + 0x0 + 25 * 0x4)))
  #define PORTA_PCR26 (* ((volatile uint32_t *) (0x40049000 + 0x0 + 26 * 0x4)))
  #define PORTB_PCR26 (* ((volatile uint32_t *) (0x4004a000 + 0x0 + 26 * 0x4)))
  #define PORTC_PCR26 (* ((volatile uint32_t *) (0x4004b000 + 0x0 + 26 * 0x4)))
  #define PORTD_PCR26 (* ((volatile uint32_t *) (0x4004c000 + 0x0 + 26 * 0x4)))
  #define PORTE_PCR26 (* ((volatile uint32_t *) (0x4004d000 + 0x0 + 26 * 0x4)))
  #define PORTA_PCR27 (* ((volatile uint32_t *) (0x40049000 + 0x0 + 27 * 0x4)))
  #define PORTB_PCR27 (* ((volatile uint32_t *) (0x4004a000 + 0x0 + 27 * 0x4)))
  #define PORTC_PCR27 (* ((volatile uint32_t *) (0x4004b000 + 0x0 + 27 * 0x4)))
  #define PORTD_PCR27 (* ((volatile uint32_t *) (0x4004c000 + 0x0 + 27 * 0x4)))
  #define PORTE_PCR27 (* ((volatile uint32_t *) (0x4004d000 + 0x0 + 27 * 0x4)))
  #define PORTA_PCR28 (* ((volatile uint32_t *) (0x40049000 + 0x0 + 28 * 0x4)))
  #define PORTB_PCR28 (* ((volatile uint32_t *) (0x4004a000 + 0x0 + 28 * 0x4)))
  #define PORTC_PCR28 (* ((volatile uint32_t *) (0x4004b000 + 0x0 + 28 * 0x4)))
  #define PORTD_PCR28 (* ((volatile uint32_t *) (0x4004c000 + 0x0 + 28 * 0x4)))
  #define PORTE_PCR28 (* ((volatile uint32_t *) (0x4004d000 + 0x0 + 28 * 0x4)))
  #define PORTA_PCR29 (* ((volatile uint32_t *) (0x40049000 + 0x0 + 29 * 0x4)))
  #define PORTB_PCR29 (* ((volatile uint32_t *) (0x4004a000 + 0x0 + 29 * 0x4)))
  #define PORTC_PCR29 (* ((volatile uint32_t *) (0x4004b000 + 0x0 + 29 * 0x4)))
  #define PORTD_PCR29 (* ((volatile uint32_t *) (0x4004c000 + 0x0 + 29 * 0x4)))
  #define PORTE_PCR29 (* ((volatile uint32_t *) (0x4004d000 + 0x0 + 29 * 0x4)))
  #define PORTA_PCR30 (* ((volatile uint32_t *) (0x40049000 + 0x0 + 30 * 0x4)))
  #define PORTB_PCR30 (* ((volatile uint32_t *) (0x4004a000 + 0x0 + 30 * 0x4)))
  #define PORTC_PCR30 (* ((volatile uint32_t *) (0x4004b000 + 0x0 + 30 * 0x4)))
  #define PORTD_PCR30 (* ((volatile uint32_t *) (0x4004c000 + 0x0 + 30 * 0x4)))
  #define PORTE_PCR30 (* ((volatile uint32_t *) (0x4004d000 + 0x0 + 30 * 0x4)))
  #define PORTA_PCR31 (* ((volatile uint32_t *) (0x40049000 + 0x0 + 31 * 0x4)))
  #define PORTB_PCR31 (* ((volatile uint32_t *) (0x4004a000 + 0x0 + 31 * 0x4)))
  #define PORTC_PCR31 (* ((volatile uint32_t *) (0x4004b000 + 0x0 + 31 * 0x4)))
  #define PORTD_PCR31 (* ((volatile uint32_t *) (0x4004c000 + 0x0 + 31 * 0x4)))
  #define PORTE_PCR31 (* ((volatile uint32_t *) (0x4004d000 + 0x0 + 31 * 0x4)))

  // Field PS: Pull Select
    const uint32_t PORT_PCR_PS = 1U << 0 ;

  // Field PE: Pull Enable
    const uint32_t PORT_PCR_PE = 1U << 1 ;

  // Field SRE: Slew Rate Enable
    const uint32_t PORT_PCR_SRE = 1U << 2 ;

  // Field RESERVED: no description available
    const uint32_t PORT_PCR_RESERVED = 1U << 3 ;

  // Field PFE: Passive Filter Enable
    const uint32_t PORT_PCR_PFE = 1U << 4 ;

  // Field ODE: Open Drain Enable
    const uint32_t PORT_PCR_ODE = 1U << 5 ;

  // Field DSE: Drive Strength Enable
    const uint32_t PORT_PCR_DSE = 1U << 6 ;

  // Field RESERVED: no description available
    const uint32_t PORT_PCR_RESERVED = 1U << 7 ;

  // Field MUX: Pin Mux Control
    inline uint32_t PORT_PCR_MUX (const uint32_t inValue) {return (inValue & 0x7U) << 8 ; }

  // Field RESERVED: no description available
    inline uint32_t PORT_PCR_RESERVED (const uint32_t inValue) {return (inValue & 0xfU) << 11 ; }

  // Field LK: Lock Register
    const uint32_t PORT_PCR_LK = 1U << 15 ;

  // Field IRQC: Interrupt Configuration
    inline uint32_t PORT_PCR_IRQC (const uint32_t inValue) {return (inValue & 0xfU) << 16 ; }

  // Field RESERVED: no description available
    inline uint32_t PORT_PCR_RESERVED (const uint32_t inValue) {return (inValue & 0xfU) << 20 ; }

  // Field ISF: Interrupt Status Flag
    const uint32_t PORT_PCR_ISF = 1U << 24 ;

  // Field RESERVED: no description available
    inline uint32_t PORT_PCR_RESERVED (const uint32_t inValue) {return (inValue & 0x7fU) << 25 ; }

//---  Register GPCLR: Global Pin Control Low Register
  #define PORT_GPCLR(group) (* ((volatile uint32_t *) (kBaseAddress_GPCLR [group] + 0x80)))
  #define PORTA_GPCLR (* ((volatile uint32_t *) (0x40049000 + 0x80)))
  #define PORTB_GPCLR (* ((volatile uint32_t *) (0x4004a000 + 0x80)))
  #define PORTC_GPCLR (* ((volatile uint32_t *) (0x4004b000 + 0x80)))
  #define PORTD_GPCLR (* ((volatile uint32_t *) (0x4004c000 + 0x80)))
  #define PORTE_GPCLR (* ((volatile uint32_t *) (0x4004d000 + 0x80)))

  // Field GPWD: Global Pin Write Data
    inline uint32_t PORT_GPCLR_GPWD (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

  // Field GPWE: Global Pin Write Enable
    inline uint32_t PORT_GPCLR_GPWE (const uint32_t inValue) {return (inValue & 0xffffU) << 16 ; }

//---  Register GPCHR: Global Pin Control High Register
  #define PORT_GPCHR(group) (* ((volatile uint32_t *) (kBaseAddress_GPCHR [group] + 0x84)))
  #define PORTA_GPCHR (* ((volatile uint32_t *) (0x40049000 + 0x84)))
  #define PORTB_GPCHR (* ((volatile uint32_t *) (0x4004a000 + 0x84)))
  #define PORTC_GPCHR (* ((volatile uint32_t *) (0x4004b000 + 0x84)))
  #define PORTD_GPCHR (* ((volatile uint32_t *) (0x4004c000 + 0x84)))
  #define PORTE_GPCHR (* ((volatile uint32_t *) (0x4004d000 + 0x84)))

  // Field GPWD: Global Pin Write Data
    inline uint32_t PORT_GPCHR_GPWD (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

  // Field GPWE: Global Pin Write Enable
    inline uint32_t PORT_GPCHR_GPWE (const uint32_t inValue) {return (inValue & 0xffffU) << 16 ; }

//---  Register ISFR: Interrupt Status Flag Register
  #define PORT_ISFR(group) (* ((volatile uint32_t *) (kBaseAddress_ISFR [group] + 0xa0)))
  #define PORTA_ISFR (* ((volatile uint32_t *) (0x40049000 + 0xa0)))
  #define PORTB_ISFR (* ((volatile uint32_t *) (0x4004a000 + 0xa0)))
  #define PORTC_ISFR (* ((volatile uint32_t *) (0x4004b000 + 0xa0)))
  #define PORTD_ISFR (* ((volatile uint32_t *) (0x4004c000 + 0xa0)))
  #define PORTE_ISFR (* ((volatile uint32_t *) (0x4004d000 + 0xa0)))

  // Field ISF: Interrupt Status Flag
    inline uint32_t PORT_ISFR_ISF (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register DFER: Digital Filter Enable Register
  #define PORT_DFER(group) (* ((volatile uint32_t *) (kBaseAddress_DFER [group] + 0xc0)))
  #define PORTA_DFER (* ((volatile uint32_t *) (0x40049000 + 0xc0)))
  #define PORTB_DFER (* ((volatile uint32_t *) (0x4004a000 + 0xc0)))
  #define PORTC_DFER (* ((volatile uint32_t *) (0x4004b000 + 0xc0)))
  #define PORTD_DFER (* ((volatile uint32_t *) (0x4004c000 + 0xc0)))
  #define PORTE_DFER (* ((volatile uint32_t *) (0x4004d000 + 0xc0)))

  // Field DFE: Digital Filter Enable
    inline uint32_t PORT_DFER_DFE (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register DFCR: Digital Filter Clock Register
  #define PORT_DFCR(group) (* ((volatile uint32_t *) (kBaseAddress_DFCR [group] + 0xc4)))
  #define PORTA_DFCR (* ((volatile uint32_t *) (0x40049000 + 0xc4)))
  #define PORTB_DFCR (* ((volatile uint32_t *) (0x4004a000 + 0xc4)))
  #define PORTC_DFCR (* ((volatile uint32_t *) (0x4004b000 + 0xc4)))
  #define PORTD_DFCR (* ((volatile uint32_t *) (0x4004c000 + 0xc4)))
  #define PORTE_DFCR (* ((volatile uint32_t *) (0x4004d000 + 0xc4)))

  // Field CS: Clock Source
    const uint32_t PORT_DFCR_CS = 1U << 0 ;

  // Field RESERVED: no description available
    inline uint32_t PORT_DFCR_RESERVED (const uint32_t inValue) {return (inValue & 0x7fffffffU) << 1 ; }

//---  Register DFWR: Digital Filter Width Register
  #define PORT_DFWR(group) (* ((volatile uint32_t *) (kBaseAddress_DFWR [group] + 0xc8)))
  #define PORTA_DFWR (* ((volatile uint32_t *) (0x40049000 + 0xc8)))
  #define PORTB_DFWR (* ((volatile uint32_t *) (0x4004a000 + 0xc8)))
  #define PORTC_DFWR (* ((volatile uint32_t *) (0x4004b000 + 0xc8)))
  #define PORTD_DFWR (* ((volatile uint32_t *) (0x4004c000 + 0xc8)))
  #define PORTE_DFWR (* ((volatile uint32_t *) (0x4004d000 + 0xc8)))

  // Field FILT: Filter Length
    inline uint32_t PORT_DFWR_FILT (const uint32_t inValue) {return (inValue & 0x1fU) << 0 ; }

  // Field RESERVED: no description available
    inline uint32_t PORT_DFWR_RESERVED (const uint32_t inValue) {return (inValue & 0x7ffffffU) << 5 ; }

//------------------------------------------------------------------------------
// Peripheral RCM: Reset Control Module
//------------------------------------------------------------------------------

//---  Register SRS0: System Reset Status Register 0
  #define RCM_SRS0 (* ((volatile uint8_t *) (0x4007f000 + 0)))

  // Field WAKEUP: Low leakage wakeup reset
    const uint8_t RCM_SRS0_WAKEUP = 1U << 0 ;

  // Field LVD: Low-voltage detect reset
    const uint8_t RCM_SRS0_LVD = 1U << 1 ;

  // Field LOC: Loss-of-clock reset
    const uint8_t RCM_SRS0_LOC = 1U << 2 ;

  // Field LOL: Loss-of-lock reset
    const uint8_t RCM_SRS0_LOL = 1U << 3 ;

  // Field RESERVED: no description available
    const uint8_t RCM_SRS0_RESERVED = 1U << 4 ;

  // Field WDOG: Watchdog
    const uint8_t RCM_SRS0_WDOG = 1U << 5 ;

  // Field PIN: External reset pin
    const uint8_t RCM_SRS0_PIN = 1U << 6 ;

  // Field POR: Power-on reset
    const uint8_t RCM_SRS0_POR = 1U << 7 ;

//---  Register SRS1: System Reset Status Register 1
  #define RCM_SRS1 (* ((volatile uint8_t *) (0x4007f000 + 1)))

  // Field JTAG: JTAG generated reset
    const uint8_t RCM_SRS1_JTAG = 1U << 0 ;

  // Field LOCKUP: Core Lockup
    const uint8_t RCM_SRS1_LOCKUP = 1U << 1 ;

  // Field SW: Software
    const uint8_t RCM_SRS1_SW = 1U << 2 ;

  // Field MDM_AP: MDM-AP system reset request
    const uint8_t RCM_SRS1_MDM_AP = 1U << 3 ;

  // Field EZPT: EzPort Reset
    const uint8_t RCM_SRS1_EZPT = 1U << 4 ;

  // Field SACKERR: Stop Mode Acknowledge Error Reset
    const uint8_t RCM_SRS1_SACKERR = 1U << 5 ;

  // Field RESERVED: no description available
    const uint8_t RCM_SRS1_RESERVED = 1U << 6 ;

  // Field RESERVED: no description available
    const uint8_t RCM_SRS1_RESERVED = 1U << 7 ;

//---  Register RPFC: Reset Pin Filter Control Register
  #define RCM_RPFC (* ((volatile uint8_t *) (0x4007f000 + 4)))

  // Field RSTFLTSRW: Reset pin filter select in run and wait modes
    inline uint8_t RCM_RPFC_RSTFLTSRW (const uint8_t inValue) {return (inValue & 0x3U) << 0 ; }

  // Field RSTFLTSS: Reset pin filter select in stop mode
    const uint8_t RCM_RPFC_RSTFLTSS = 1U << 2 ;

  // Field RESERVED: no description available
    inline uint8_t RCM_RPFC_RESERVED (const uint8_t inValue) {return (inValue & 0x1fU) << 3 ; }

//---  Register RPFW: Reset Pin Filter Width Register
  #define RCM_RPFW (* ((volatile uint8_t *) (0x4007f000 + 5)))

  // Field RSTFLTSEL: Reset pin filter bus clock select
    inline uint8_t RCM_RPFW_RSTFLTSEL (const uint8_t inValue) {return (inValue & 0x1fU) << 0 ; }

  // Field RESERVED: no description available
    inline uint8_t RCM_RPFW_RESERVED (const uint8_t inValue) {return (inValue & 0x7U) << 5 ; }

//---  Register MR: Mode Register
  #define RCM_MR (* ((volatile uint8_t *) (0x4007f000 + 7)))

  // Field RESERVED: no description available
    const uint8_t RCM_MR_RESERVED = 1U << 0 ;

  // Field EZP_MS: EZP_MS_B pin state
    const uint8_t RCM_MR_EZP_MS = 1U << 1 ;

  // Field RESERVED: no description available
    inline uint8_t RCM_MR_RESERVED (const uint8_t inValue) {return (inValue & 0x3fU) << 2 ; }

//------------------------------------------------------------------------------
// Peripheral RFSYS: System register file
//------------------------------------------------------------------------------

//---  Registers REG(0,1,2,3,4,5,6,7): Register file register
  #define RFSYS_REG(idx) (* ((volatile uint32_t *) (0x40041000 + 0x0 + (idx) * 0x4)))
  #define RFSYS_REG0 (* ((volatile uint32_t *) (0x40041000 + 0x0 + 0 * 0x4)))
  #define RFSYS_REG1 (* ((volatile uint32_t *) (0x40041000 + 0x0 + 1 * 0x4)))
  #define RFSYS_REG2 (* ((volatile uint32_t *) (0x40041000 + 0x0 + 2 * 0x4)))
  #define RFSYS_REG3 (* ((volatile uint32_t *) (0x40041000 + 0x0 + 3 * 0x4)))
  #define RFSYS_REG4 (* ((volatile uint32_t *) (0x40041000 + 0x0 + 4 * 0x4)))
  #define RFSYS_REG5 (* ((volatile uint32_t *) (0x40041000 + 0x0 + 5 * 0x4)))
  #define RFSYS_REG6 (* ((volatile uint32_t *) (0x40041000 + 0x0 + 6 * 0x4)))
  #define RFSYS_REG7 (* ((volatile uint32_t *) (0x40041000 + 0x0 + 7 * 0x4)))

  // Field LL: no description available
    inline uint32_t RFSYS_REG_LL (const uint32_t inValue) {return (inValue & 0xffU) << 0 ; }

  // Field LH: no description available
    inline uint32_t RFSYS_REG_LH (const uint32_t inValue) {return (inValue & 0xffU) << 8 ; }

  // Field HL: no description available
    inline uint32_t RFSYS_REG_HL (const uint32_t inValue) {return (inValue & 0xffU) << 16 ; }

  // Field HH: no description available
    inline uint32_t RFSYS_REG_HH (const uint32_t inValue) {return (inValue & 0xffU) << 24 ; }

//------------------------------------------------------------------------------
// Peripheral RFVBAT: VBAT register file
//------------------------------------------------------------------------------

//---  Registers REG(0,1,2,3,4,5,6,7): VBAT register file register
  #define RFVBAT_REG(idx) (* ((volatile uint32_t *) (0x4003e000 + 0x0 + (idx) * 0x4)))
  #define RFVBAT_REG0 (* ((volatile uint32_t *) (0x4003e000 + 0x0 + 0 * 0x4)))
  #define RFVBAT_REG1 (* ((volatile uint32_t *) (0x4003e000 + 0x0 + 1 * 0x4)))
  #define RFVBAT_REG2 (* ((volatile uint32_t *) (0x4003e000 + 0x0 + 2 * 0x4)))
  #define RFVBAT_REG3 (* ((volatile uint32_t *) (0x4003e000 + 0x0 + 3 * 0x4)))
  #define RFVBAT_REG4 (* ((volatile uint32_t *) (0x4003e000 + 0x0 + 4 * 0x4)))
  #define RFVBAT_REG5 (* ((volatile uint32_t *) (0x4003e000 + 0x0 + 5 * 0x4)))
  #define RFVBAT_REG6 (* ((volatile uint32_t *) (0x4003e000 + 0x0 + 6 * 0x4)))
  #define RFVBAT_REG7 (* ((volatile uint32_t *) (0x4003e000 + 0x0 + 7 * 0x4)))

  // Field LL: no description available
    inline uint32_t RFVBAT_REG_LL (const uint32_t inValue) {return (inValue & 0xffU) << 0 ; }

  // Field LH: no description available
    inline uint32_t RFVBAT_REG_LH (const uint32_t inValue) {return (inValue & 0xffU) << 8 ; }

  // Field HL: no description available
    inline uint32_t RFVBAT_REG_HL (const uint32_t inValue) {return (inValue & 0xffU) << 16 ; }

  // Field HH: no description available
    inline uint32_t RFVBAT_REG_HH (const uint32_t inValue) {return (inValue & 0xffU) << 24 ; }

//------------------------------------------------------------------------------
// Peripheral RTC: Secure Real Time Clock
//------------------------------------------------------------------------------

//---  Register TSR: RTC Time Seconds Register
  #define RTC_TSR (* ((volatile uint32_t *) (0x4003d000 + 0)))

  // Field TSR: Time Seconds Register
    inline uint32_t RTC_TSR_TSR (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register TPR: RTC Time Prescaler Register
  #define RTC_TPR (* ((volatile uint32_t *) (0x4003d000 + 4)))

  // Field TPR: Time Prescaler Register
    inline uint32_t RTC_TPR_TPR (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

  // Field RESERVED: no description available
    inline uint32_t RTC_TPR_RESERVED (const uint32_t inValue) {return (inValue & 0xffffU) << 16 ; }

//---  Register TAR: RTC Time Alarm Register
  #define RTC_TAR (* ((volatile uint32_t *) (0x4003d000 + 8)))

  // Field TAR: Time Alarm Register
    inline uint32_t RTC_TAR_TAR (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register TCR: RTC Time Compensation Register
  #define RTC_TCR (* ((volatile uint32_t *) (0x4003d000 + 12)))

  // Field TCR: Time Compensation Register
    inline uint32_t RTC_TCR_TCR (const uint32_t inValue) {return (inValue & 0xffU) << 0 ; }

  // Field CIR: Compensation Interval Register
    inline uint32_t RTC_TCR_CIR (const uint32_t inValue) {return (inValue & 0xffU) << 8 ; }

  // Field TCV: Time Compensation Value
    inline uint32_t RTC_TCR_TCV (const uint32_t inValue) {return (inValue & 0xffU) << 16 ; }

  // Field CIC: Compensation Interval Counter
    inline uint32_t RTC_TCR_CIC (const uint32_t inValue) {return (inValue & 0xffU) << 24 ; }

//---  Register CR: RTC Control Register
  #define RTC_CR (* ((volatile uint32_t *) (0x4003d000 + 16)))

  // Field SWR: Software Reset
    const uint32_t RTC_CR_SWR = 1U << 0 ;

  // Field WPE: Wakeup Pin Enable
    const uint32_t RTC_CR_WPE = 1U << 1 ;

  // Field SUP: Supervisor Access
    const uint32_t RTC_CR_SUP = 1U << 2 ;

  // Field UM: Update Mode
    const uint32_t RTC_CR_UM = 1U << 3 ;

  // Field RESERVED: no description available
    inline uint32_t RTC_CR_RESERVED (const uint32_t inValue) {return (inValue & 0xfU) << 4 ; }

  // Field OSCE: Oscillator Enable
    const uint32_t RTC_CR_OSCE = 1U << 8 ;

  // Field CLKO: Clock Output
    const uint32_t RTC_CR_CLKO = 1U << 9 ;

  // Field SC16P: Oscillator 16pF load configure
    const uint32_t RTC_CR_SC16P = 1U << 10 ;

  // Field SC8P: Oscillator 8pF load configure
    const uint32_t RTC_CR_SC8P = 1U << 11 ;

  // Field SC4P: Oscillator 4pF load configure
    const uint32_t RTC_CR_SC4P = 1U << 12 ;

  // Field SC2P: Oscillator 2pF load configure
    const uint32_t RTC_CR_SC2P = 1U << 13 ;

  // Field RESERVED: no description available
    const uint32_t RTC_CR_RESERVED = 1U << 14 ;

  // Field RESERVED: no description available
    inline uint32_t RTC_CR_RESERVED (const uint32_t inValue) {return (inValue & 0x1ffffU) << 15 ; }

//---  Register SR: RTC Status Register
  #define RTC_SR (* ((volatile uint32_t *) (0x4003d000 + 20)))

  // Field TIF: Time Invalid Flag
    const uint32_t RTC_SR_TIF = 1U << 0 ;

  // Field TOF: Time Overflow Flag
    const uint32_t RTC_SR_TOF = 1U << 1 ;

  // Field TAF: Time Alarm Flag
    const uint32_t RTC_SR_TAF = 1U << 2 ;

  // Field RESERVED: no description available
    const uint32_t RTC_SR_RESERVED = 1U << 3 ;

  // Field TCE: Time Counter Enable
    const uint32_t RTC_SR_TCE = 1U << 4 ;

  // Field RESERVED: no description available
    inline uint32_t RTC_SR_RESERVED (const uint32_t inValue) {return (inValue & 0x7ffffffU) << 5 ; }

//---  Register LR: RTC Lock Register
  #define RTC_LR (* ((volatile uint32_t *) (0x4003d000 + 24)))

  // Field RESERVED: no description available
    inline uint32_t RTC_LR_RESERVED (const uint32_t inValue) {return (inValue & 0x7U) << 0 ; }

  // Field TCL: Time Compensation Lock
    const uint32_t RTC_LR_TCL = 1U << 3 ;

  // Field CRL: Control Register Lock
    const uint32_t RTC_LR_CRL = 1U << 4 ;

  // Field SRL: Status Register Lock
    const uint32_t RTC_LR_SRL = 1U << 5 ;

  // Field LRL: Lock Register Lock
    const uint32_t RTC_LR_LRL = 1U << 6 ;

  // Field RESERVED: no description available
    const uint32_t RTC_LR_RESERVED = 1U << 7 ;

  // Field RESERVED: no description available
    inline uint32_t RTC_LR_RESERVED (const uint32_t inValue) {return (inValue & 0xffffffU) << 8 ; }

//---  Register IER: RTC Interrupt Enable Register
  #define RTC_IER (* ((volatile uint32_t *) (0x4003d000 + 28)))

  // Field TIIE: Time Invalid Interrupt Enable
    const uint32_t RTC_IER_TIIE = 1U << 0 ;

  // Field TOIE: Time Overflow Interrupt Enable
    const uint32_t RTC_IER_TOIE = 1U << 1 ;

  // Field TAIE: Time Alarm Interrupt Enable
    const uint32_t RTC_IER_TAIE = 1U << 2 ;

  // Field RESERVED: no description available
    const uint32_t RTC_IER_RESERVED = 1U << 3 ;

  // Field TSIE: Time Seconds Interrupt Enable
    const uint32_t RTC_IER_TSIE = 1U << 4 ;

  // Field RESERVED: no description available
    inline uint32_t RTC_IER_RESERVED (const uint32_t inValue) {return (inValue & 0x7U) << 5 ; }

  // Field RESERVED: no description available
    inline uint32_t RTC_IER_RESERVED (const uint32_t inValue) {return (inValue & 0xffffffU) << 8 ; }

//---  Register WAR: RTC Write Access Register
  #define RTC_WAR (* ((volatile uint32_t *) (0x4003d000 + 2048)))

  // Field TSRW: Time Seconds Register Write
    const uint32_t RTC_WAR_TSRW = 1U << 0 ;

  // Field TPRW: Time Prescaler Register Write
    const uint32_t RTC_WAR_TPRW = 1U << 1 ;

  // Field TARW: Time Alarm Register Write
    const uint32_t RTC_WAR_TARW = 1U << 2 ;

  // Field TCRW: Time Compensation Register Write
    const uint32_t RTC_WAR_TCRW = 1U << 3 ;

  // Field CRW: Control Register Write
    const uint32_t RTC_WAR_CRW = 1U << 4 ;

  // Field SRW: Status Register Write
    const uint32_t RTC_WAR_SRW = 1U << 5 ;

  // Field LRW: Lock Register Write
    const uint32_t RTC_WAR_LRW = 1U << 6 ;

  // Field IERW: Interrupt Enable Register Write
    const uint32_t RTC_WAR_IERW = 1U << 7 ;

  // Field RESERVED: no description available
    inline uint32_t RTC_WAR_RESERVED (const uint32_t inValue) {return (inValue & 0xffffffU) << 8 ; }

//---  Register RAR: RTC Read Access Register
  #define RTC_RAR (* ((volatile uint32_t *) (0x4003d000 + 2052)))

  // Field TSRR: Time Seconds Register Read
    const uint32_t RTC_RAR_TSRR = 1U << 0 ;

  // Field TPRR: Time Prescaler Register Read
    const uint32_t RTC_RAR_TPRR = 1U << 1 ;

  // Field TARR: Time Alarm Register Read
    const uint32_t RTC_RAR_TARR = 1U << 2 ;

  // Field TCRR: Time Compensation Register Read
    const uint32_t RTC_RAR_TCRR = 1U << 3 ;

  // Field CRR: Control Register Read
    const uint32_t RTC_RAR_CRR = 1U << 4 ;

  // Field SRR: Status Register Read
    const uint32_t RTC_RAR_SRR = 1U << 5 ;

  // Field LRR: Lock Register Read
    const uint32_t RTC_RAR_LRR = 1U << 6 ;

  // Field IERR: Interrupt Enable Register Read
    const uint32_t RTC_RAR_IERR = 1U << 7 ;

  // Field RESERVED: no description available
    inline uint32_t RTC_RAR_RESERVED (const uint32_t inValue) {return (inValue & 0xffffffU) << 8 ; }

//------------------------------------------------------------------------------
// Peripheral SIM: System Integration Module
//------------------------------------------------------------------------------

//---  Register SOPT1: System Options Register 1
  #define SIM_SOPT1 (* ((volatile uint32_t *) (0x40047000 + 0)))

  // Field RESERVED: no description available
    inline uint32_t SIM_SOPT1_RESERVED (const uint32_t inValue) {return (inValue & 0x3fU) << 0 ; }

  // Field RESERVED: no description available
    inline uint32_t SIM_SOPT1_RESERVED (const uint32_t inValue) {return (inValue & 0x3fU) << 6 ; }

  // Field RAMSIZE: RAM size
    inline uint32_t SIM_SOPT1_RAMSIZE (const uint32_t inValue) {return (inValue & 0xfU) << 12 ; }

  // Field RESERVED: no description available
    inline uint32_t SIM_SOPT1_RESERVED (const uint32_t inValue) {return (inValue & 0x3U) << 16 ; }

  // Field OSC32KSEL: 32K oscillator clock select
    inline uint32_t SIM_SOPT1_OSC32KSEL (const uint32_t inValue) {return (inValue & 0x3U) << 18 ; }

  // Field RESERVED: no description available
    inline uint32_t SIM_SOPT1_RESERVED (const uint32_t inValue) {return (inValue & 0x1ffU) << 20 ; }

  // Field USBVSTBY: USB voltage regulator in standby mode during VLPR and VLPW modes
    const uint32_t SIM_SOPT1_USBVSTBY = 1U << 29 ;

  // Field USBSSTBY: USB voltage regulator in standby mode during Stop, VLPS, LLS and VLLS modes.
    const uint32_t SIM_SOPT1_USBSSTBY = 1U << 30 ;

  // Field USBREGEN: USB voltage regulator enable
    const uint32_t SIM_SOPT1_USBREGEN = 1U << 31 ;

//---  Register SOPT1CFG: SOPT1 Configuration Register
  #define SIM_SOPT1CFG (* ((volatile uint32_t *) (0x40047000 + 4)))

  // Field RESERVED: no description available
    inline uint32_t SIM_SOPT1CFG_RESERVED (const uint32_t inValue) {return (inValue & 0xffU) << 0 ; }

  // Field RESERVED: no description available
    inline uint32_t SIM_SOPT1CFG_RESERVED (const uint32_t inValue) {return (inValue & 0x3U) << 8 ; }

  // Field RESERVED: no description available
    inline uint32_t SIM_SOPT1CFG_RESERVED (const uint32_t inValue) {return (inValue & 0x3fffU) << 10 ; }

  // Field URWE: USB voltage regulator enable write enable
    const uint32_t SIM_SOPT1CFG_URWE = 1U << 24 ;

  // Field UVSWE: USB voltage regulator VLP standby write enable
    const uint32_t SIM_SOPT1CFG_UVSWE = 1U << 25 ;

  // Field USSWE: USB voltage regulator stop standby write enable
    const uint32_t SIM_SOPT1CFG_USSWE = 1U << 26 ;

  // Field RESERVED: no description available
    inline uint32_t SIM_SOPT1CFG_RESERVED (const uint32_t inValue) {return (inValue & 0x1fU) << 27 ; }

//---  Register SOPT2: System Options Register 2
  #define SIM_SOPT2 (* ((volatile uint32_t *) (0x40047000 + 4100)))

  // Field RESERVED: no description available
    inline uint32_t SIM_SOPT2_RESERVED (const uint32_t inValue) {return (inValue & 0xfU) << 0 ; }

  // Field RTCCLKOUTSEL: RTC clock out select
    const uint32_t SIM_SOPT2_RTCCLKOUTSEL = 1U << 4 ;

  // Field CLKOUTSEL: CLKOUT select
    inline uint32_t SIM_SOPT2_CLKOUTSEL (const uint32_t inValue) {return (inValue & 0x7U) << 5 ; }

  // Field FBSL: FlexBus security level
    inline uint32_t SIM_SOPT2_FBSL (const uint32_t inValue) {return (inValue & 0x3U) << 8 ; }

  // Field RESERVED: no description available
    const uint32_t SIM_SOPT2_RESERVED = 1U << 10 ;

  // Field PTD7PAD: PTD7 pad drive strength
    const uint32_t SIM_SOPT2_PTD7PAD = 1U << 11 ;

  // Field TRACECLKSEL: Debug trace clock select
    const uint32_t SIM_SOPT2_TRACECLKSEL = 1U << 12 ;

  // Field RESERVED: no description available
    inline uint32_t SIM_SOPT2_RESERVED (const uint32_t inValue) {return (inValue & 0x7U) << 13 ; }

  // Field PLLFLLSEL: PLL/FLL clock select
    const uint32_t SIM_SOPT2_PLLFLLSEL = 1U << 16 ;

  // Field RESERVED: no description available
    const uint32_t SIM_SOPT2_RESERVED = 1U << 17 ;

  // Field USBSRC: USB clock source select
    const uint32_t SIM_SOPT2_USBSRC = 1U << 18 ;

  // Field RESERVED: no description available
    inline uint32_t SIM_SOPT2_RESERVED (const uint32_t inValue) {return (inValue & 0x7U) << 19 ; }

  // Field RESERVED: no description available
    inline uint32_t SIM_SOPT2_RESERVED (const uint32_t inValue) {return (inValue & 0x3fU) << 22 ; }

  // Field RESERVED: no description available
    inline uint32_t SIM_SOPT2_RESERVED (const uint32_t inValue) {return (inValue & 0x3U) << 28 ; }

  // Field RESERVED: no description available
    inline uint32_t SIM_SOPT2_RESERVED (const uint32_t inValue) {return (inValue & 0x3U) << 30 ; }

//---  Register SOPT4: System Options Register 4
  #define SIM_SOPT4 (* ((volatile uint32_t *) (0x40047000 + 4108)))

  // Field FTM0FLT0: FTM0 Fault 0 Select
    const uint32_t SIM_SOPT4_FTM0FLT0 = 1U << 0 ;

  // Field FTM0FLT1: FTM0 Fault 1 Select
    const uint32_t SIM_SOPT4_FTM0FLT1 = 1U << 1 ;

  // Field FTM0FLT2: FTM0 Fault 2 Select
    const uint32_t SIM_SOPT4_FTM0FLT2 = 1U << 2 ;

  // Field RESERVED: no description available
    const uint32_t SIM_SOPT4_RESERVED = 1U << 3 ;

  // Field FTM1FLT0: FTM1 Fault 0 Select
    const uint32_t SIM_SOPT4_FTM1FLT0 = 1U << 4 ;

  // Field RESERVED: no description available
    inline uint32_t SIM_SOPT4_RESERVED (const uint32_t inValue) {return (inValue & 0x7U) << 5 ; }

  // Field FTM2FLT0: FTM2 Fault 0 Select
    const uint32_t SIM_SOPT4_FTM2FLT0 = 1U << 8 ;

  // Field RESERVED: no description available
    inline uint32_t SIM_SOPT4_RESERVED (const uint32_t inValue) {return (inValue & 0x1ffU) << 9 ; }

  // Field FTM1CH0SRC: FTM1 channel 0 input capture source select
    inline uint32_t SIM_SOPT4_FTM1CH0SRC (const uint32_t inValue) {return (inValue & 0x3U) << 18 ; }

  // Field FTM2CH0SRC: FTM2 channel 0 input capture source select
    inline uint32_t SIM_SOPT4_FTM2CH0SRC (const uint32_t inValue) {return (inValue & 0x3U) << 20 ; }

  // Field RESERVED: no description available
    inline uint32_t SIM_SOPT4_RESERVED (const uint32_t inValue) {return (inValue & 0x3U) << 22 ; }

  // Field FTM0CLKSEL: FlexTimer 0 External Clock Pin Select
    const uint32_t SIM_SOPT4_FTM0CLKSEL = 1U << 24 ;

  // Field FTM1CLKSEL: FTM1 External Clock Pin Select
    const uint32_t SIM_SOPT4_FTM1CLKSEL = 1U << 25 ;

  // Field FTM2CLKSEL: FlexTimer 2 External Clock Pin Select
    const uint32_t SIM_SOPT4_FTM2CLKSEL = 1U << 26 ;

  // Field RESERVED: no description available
    const uint32_t SIM_SOPT4_RESERVED = 1U << 27 ;

  // Field FTM0TRG0SRC: FlexTimer 0 Hardware Trigger 0 Source Select
    const uint32_t SIM_SOPT4_FTM0TRG0SRC = 1U << 28 ;

  // Field FTM0TRG1SRC: FlexTimer 0 Hardware Trigger 1 Source Select
    const uint32_t SIM_SOPT4_FTM0TRG1SRC = 1U << 29 ;

  // Field RESERVED: no description available
    inline uint32_t SIM_SOPT4_RESERVED (const uint32_t inValue) {return (inValue & 0x3U) << 30 ; }

//---  Register SOPT5: System Options Register 5
  #define SIM_SOPT5 (* ((volatile uint32_t *) (0x40047000 + 4112)))

  // Field UART0TXSRC: UART 0 transmit data source select
    inline uint32_t SIM_SOPT5_UART0TXSRC (const uint32_t inValue) {return (inValue & 0x3U) << 0 ; }

  // Field UART0RXSRC: UART 0 receive data source select
    inline uint32_t SIM_SOPT5_UART0RXSRC (const uint32_t inValue) {return (inValue & 0x3U) << 2 ; }

  // Field UART1TXSRC: UART 1 transmit data source select
    inline uint32_t SIM_SOPT5_UART1TXSRC (const uint32_t inValue) {return (inValue & 0x3U) << 4 ; }

  // Field UART1RXSRC: UART 1 receive data source select
    inline uint32_t SIM_SOPT5_UART1RXSRC (const uint32_t inValue) {return (inValue & 0x3U) << 6 ; }

  // Field RESERVED: no description available
    inline uint32_t SIM_SOPT5_RESERVED (const uint32_t inValue) {return (inValue & 0xffffffU) << 8 ; }

//---  Register SOPT7: System Options Register 7
  #define SIM_SOPT7 (* ((volatile uint32_t *) (0x40047000 + 4120)))

  // Field ADC0TRGSEL: ADC0 trigger select
    inline uint32_t SIM_SOPT7_ADC0TRGSEL (const uint32_t inValue) {return (inValue & 0xfU) << 0 ; }

  // Field ADC0PRETRGSEL: ADC0 pretrigger select
    const uint32_t SIM_SOPT7_ADC0PRETRGSEL = 1U << 4 ;

  // Field RESERVED: no description available
    inline uint32_t SIM_SOPT7_RESERVED (const uint32_t inValue) {return (inValue & 0x3U) << 5 ; }

  // Field ADC0ALTTRGEN: ADC0 alternate trigger enable
    const uint32_t SIM_SOPT7_ADC0ALTTRGEN = 1U << 7 ;

  // Field ADC1TRGSEL: ADC1 trigger select
    inline uint32_t SIM_SOPT7_ADC1TRGSEL (const uint32_t inValue) {return (inValue & 0xfU) << 8 ; }

  // Field ADC1PRETRGSEL: ADC1 pre-trigger select
    const uint32_t SIM_SOPT7_ADC1PRETRGSEL = 1U << 12 ;

  // Field RESERVED: no description available
    inline uint32_t SIM_SOPT7_RESERVED (const uint32_t inValue) {return (inValue & 0x3U) << 13 ; }

  // Field ADC1ALTTRGEN: ADC1 alternate trigger enable
    const uint32_t SIM_SOPT7_ADC1ALTTRGEN = 1U << 15 ;

  // Field RESERVED: no description available
    inline uint32_t SIM_SOPT7_RESERVED (const uint32_t inValue) {return (inValue & 0xffffU) << 16 ; }

//---  Register SDID: System Device Identification Register
  #define SIM_SDID (* ((volatile uint32_t *) (0x40047000 + 4132)))

  // Field PINID: Pincount identification
    inline uint32_t SIM_SDID_PINID (const uint32_t inValue) {return (inValue & 0xfU) << 0 ; }

  // Field FAMID: Kinetis family identification
    inline uint32_t SIM_SDID_FAMID (const uint32_t inValue) {return (inValue & 0x7U) << 4 ; }

  // Field RESERVED: no description available
    const uint32_t SIM_SDID_RESERVED = 1U << 7 ;

  // Field RESERVED: no description available
    const uint32_t SIM_SDID_RESERVED = 1U << 8 ;

  // Field RESERVED: no description available
    const uint32_t SIM_SDID_RESERVED = 1U << 9 ;

  // Field RESERVED: no description available
    const uint32_t SIM_SDID_RESERVED = 1U << 10 ;

  // Field RESERVED: no description available
    const uint32_t SIM_SDID_RESERVED = 1U << 11 ;

  // Field REVID: Device revision number
    inline uint32_t SIM_SDID_REVID (const uint32_t inValue) {return (inValue & 0xfU) << 12 ; }

  // Field RESERVED: no description available
    inline uint32_t SIM_SDID_RESERVED (const uint32_t inValue) {return (inValue & 0xffffU) << 16 ; }

//---  Register SCGC1: System Clock Gating Control Register 1
  #define SIM_SCGC1 (* ((volatile uint32_t *) (0x40047000 + 4136)))

  // Field RESERVED: no description available
    inline uint32_t SIM_SCGC1_RESERVED (const uint32_t inValue) {return (inValue & 0x3fU) << 0 ; }

  // Field RESERVED: no description available
    const uint32_t SIM_SCGC1_RESERVED = 1U << 6 ;

  // Field RESERVED: no description available
    const uint32_t SIM_SCGC1_RESERVED = 1U << 7 ;

  // Field RESERVED: no description available
    inline uint32_t SIM_SCGC1_RESERVED (const uint32_t inValue) {return (inValue & 0x3U) << 8 ; }

  // Field UART4: UART4 Clock Gate Control
    const uint32_t SIM_SCGC1_UART4 = 1U << 10 ;

  // Field RESERVED: no description available
    const uint32_t SIM_SCGC1_RESERVED = 1U << 11 ;

  // Field RESERVED: no description available
    inline uint32_t SIM_SCGC1_RESERVED (const uint32_t inValue) {return (inValue & 0x1ffU) << 12 ; }

  // Field RESERVED: no description available
    const uint32_t SIM_SCGC1_RESERVED = 1U << 21 ;

  // Field RESERVED: no description available
    inline uint32_t SIM_SCGC1_RESERVED (const uint32_t inValue) {return (inValue & 0x3U) << 22 ; }

  // Field RESERVED: no description available
    const uint32_t SIM_SCGC1_RESERVED = 1U << 24 ;

  // Field RESERVED: no description available
    inline uint32_t SIM_SCGC1_RESERVED (const uint32_t inValue) {return (inValue & 0x7fU) << 25 ; }

//---  Register SCGC2: System Clock Gating Control Register 2
  #define SIM_SCGC2 (* ((volatile uint32_t *) (0x40047000 + 4140)))

  // Field RESERVED: no description available
    const uint32_t SIM_SCGC2_RESERVED = 1U << 0 ;

  // Field RESERVED: no description available
    inline uint32_t SIM_SCGC2_RESERVED (const uint32_t inValue) {return (inValue & 0x7ffU) << 1 ; }

  // Field DAC0: DAC0 Clock Gate Control
    const uint32_t SIM_SCGC2_DAC0 = 1U << 12 ;

  // Field RESERVED: no description available
    const uint32_t SIM_SCGC2_RESERVED = 1U << 13 ;

  // Field RESERVED: no description available
    inline uint32_t SIM_SCGC2_RESERVED (const uint32_t inValue) {return (inValue & 0x3ffffU) << 14 ; }

//---  Register SCGC3: System Clock Gating Control Register 3
  #define SIM_SCGC3 (* ((volatile uint32_t *) (0x40047000 + 4144)))

  // Field RESERVED: no description available
    const uint32_t SIM_SCGC3_RESERVED = 1U << 0 ;

  // Field RESERVED: no description available
    inline uint32_t SIM_SCGC3_RESERVED (const uint32_t inValue) {return (inValue & 0x7U) << 1 ; }

  // Field RESERVED: no description available
    const uint32_t SIM_SCGC3_RESERVED = 1U << 4 ;

  // Field RESERVED: no description available
    inline uint32_t SIM_SCGC3_RESERVED (const uint32_t inValue) {return (inValue & 0x7fU) << 5 ; }

  // Field RESERVED: no description available
    const uint32_t SIM_SCGC3_RESERVED = 1U << 12 ;

  // Field RESERVED: no description available
    inline uint32_t SIM_SCGC3_RESERVED (const uint32_t inValue) {return (inValue & 0xfU) << 13 ; }

  // Field RESERVED: no description available
    const uint32_t SIM_SCGC3_RESERVED = 1U << 17 ;

  // Field RESERVED: no description available
    inline uint32_t SIM_SCGC3_RESERVED (const uint32_t inValue) {return (inValue & 0x3fU) << 18 ; }

  // Field FTM2: FTM2 Clock Gate Control
    const uint32_t SIM_SCGC3_FTM2 = 1U << 24 ;

  // Field RESERVED: no description available
    inline uint32_t SIM_SCGC3_RESERVED (const uint32_t inValue) {return (inValue & 0x3U) << 25 ; }

  // Field ADC1: ADC1 Clock Gate Control
    const uint32_t SIM_SCGC3_ADC1 = 1U << 27 ;

  // Field RESERVED: no description available
    inline uint32_t SIM_SCGC3_RESERVED (const uint32_t inValue) {return (inValue & 0x3U) << 28 ; }

  // Field RESERVED: no description available
    const uint32_t SIM_SCGC3_RESERVED = 1U << 30 ;

  // Field RESERVED: no description available
    const uint32_t SIM_SCGC3_RESERVED = 1U << 31 ;

//---  Register SCGC4: System Clock Gating Control Register 4
  #define SIM_SCGC4 (* ((volatile uint32_t *) (0x40047000 + 4148)))

  // Field RESERVED: no description available
    const uint32_t SIM_SCGC4_RESERVED = 1U << 0 ;

  // Field EWM: EWM Clock Gate Control
    const uint32_t SIM_SCGC4_EWM = 1U << 1 ;

  // Field CMT: CMT Clock Gate Control
    const uint32_t SIM_SCGC4_CMT = 1U << 2 ;

  // Field RESERVED: no description available
    const uint32_t SIM_SCGC4_RESERVED = 1U << 3 ;

  // Field RESERVED: no description available
    inline uint32_t SIM_SCGC4_RESERVED (const uint32_t inValue) {return (inValue & 0x3U) << 4 ; }

  // Field I2C0: I2C0 Clock Gate Control
    const uint32_t SIM_SCGC4_I2C0 = 1U << 6 ;

  // Field I2C1: I2C1 Clock Gate Control
    const uint32_t SIM_SCGC4_I2C1 = 1U << 7 ;

  // Field RESERVED: no description available
    inline uint32_t SIM_SCGC4_RESERVED (const uint32_t inValue) {return (inValue & 0x3U) << 8 ; }

  // Field UART0: UART0 Clock Gate Control
    const uint32_t SIM_SCGC4_UART0 = 1U << 10 ;

  // Field UART1: UART1 Clock Gate Control
    const uint32_t SIM_SCGC4_UART1 = 1U << 11 ;

  // Field UART2: UART2 Clock Gate Control
    const uint32_t SIM_SCGC4_UART2 = 1U << 12 ;

  // Field UART3: UART3 Clock Gate Control
    const uint32_t SIM_SCGC4_UART3 = 1U << 13 ;

  // Field RESERVED: no description available
    inline uint32_t SIM_SCGC4_RESERVED (const uint32_t inValue) {return (inValue & 0xfU) << 14 ; }

  // Field USBOTG: USB Clock Gate Control
    const uint32_t SIM_SCGC4_USBOTG = 1U << 18 ;

  // Field CMP: Comparator Clock Gate Control
    const uint32_t SIM_SCGC4_CMP = 1U << 19 ;

  // Field VREF: VREF Clock Gate Control
    const uint32_t SIM_SCGC4_VREF = 1U << 20 ;

  // Field RESERVED: no description available
    inline uint32_t SIM_SCGC4_RESERVED (const uint32_t inValue) {return (inValue & 0x7fU) << 21 ; }

  // Field RESERVED: no description available
    inline uint32_t SIM_SCGC4_RESERVED (const uint32_t inValue) {return (inValue & 0xfU) << 28 ; }

//---  Register SCGC5: System Clock Gating Control Register 5
  #define SIM_SCGC5 (* ((volatile uint32_t *) (0x40047000 + 4152)))

  // Field LPTIMER: Low Power Timer Access Control
    const uint32_t SIM_SCGC5_LPTIMER = 1U << 0 ;

  // Field RESERVED: no description available
    const uint32_t SIM_SCGC5_RESERVED = 1U << 1 ;

  // Field RESERVED: no description available
    inline uint32_t SIM_SCGC5_RESERVED (const uint32_t inValue) {return (inValue & 0x3U) << 2 ; }

  // Field RESERVED: no description available
    const uint32_t SIM_SCGC5_RESERVED = 1U << 4 ;

  // Field TSI: TSI Clock Gate Control
    const uint32_t SIM_SCGC5_TSI = 1U << 5 ;

  // Field RESERVED: no description available
    const uint32_t SIM_SCGC5_RESERVED = 1U << 6 ;

  // Field RESERVED: no description available
    inline uint32_t SIM_SCGC5_RESERVED (const uint32_t inValue) {return (inValue & 0x3U) << 7 ; }

  // Field PORTA: Port A Clock Gate Control
    const uint32_t SIM_SCGC5_PORTA = 1U << 9 ;

  // Field PORTB: Port B Clock Gate Control
    const uint32_t SIM_SCGC5_PORTB = 1U << 10 ;

  // Field PORTC: Port C Clock Gate Control
    const uint32_t SIM_SCGC5_PORTC = 1U << 11 ;

  // Field PORTD: Port D Clock Gate Control
    const uint32_t SIM_SCGC5_PORTD = 1U << 12 ;

  // Field PORTE: Port E Clock Gate Control
    const uint32_t SIM_SCGC5_PORTE = 1U << 13 ;

  // Field RESERVED: no description available
    inline uint32_t SIM_SCGC5_RESERVED (const uint32_t inValue) {return (inValue & 0xfU) << 14 ; }

  // Field RESERVED: no description available
    const uint32_t SIM_SCGC5_RESERVED = 1U << 18 ;

  // Field RESERVED: no description available
    inline uint32_t SIM_SCGC5_RESERVED (const uint32_t inValue) {return (inValue & 0x1fffU) << 19 ; }

//---  Register SCGC6: System Clock Gating Control Register 6
  #define SIM_SCGC6 (* ((volatile uint32_t *) (0x40047000 + 4156)))

  // Field FTFL: Flash Memory Clock Gate Control
    const uint32_t SIM_SCGC6_FTFL = 1U << 0 ;

  // Field DMAMUX: DMA Mux Clock Gate Control
    const uint32_t SIM_SCGC6_DMAMUX = 1U << 1 ;

  // Field RESERVED: no description available
    inline uint32_t SIM_SCGC6_RESERVED (const uint32_t inValue) {return (inValue & 0x3U) << 2 ; }

  // Field FLEXCAN0: FlexCAN0 Clock Gate Control
    const uint32_t SIM_SCGC6_FLEXCAN0 = 1U << 4 ;

  // Field RESERVED: no description available
    inline uint32_t SIM_SCGC6_RESERVED (const uint32_t inValue) {return (inValue & 0xfU) << 5 ; }

  // Field RESERVED: no description available
    const uint32_t SIM_SCGC6_RESERVED = 1U << 9 ;

  // Field RESERVED: no description available
    inline uint32_t SIM_SCGC6_RESERVED (const uint32_t inValue) {return (inValue & 0x3U) << 10 ; }

  // Field SPI0: SPI0 Clock Gate Control
    const uint32_t SIM_SCGC6_SPI0 = 1U << 12 ;

  // Field SPI1: SPI1 Clock Gate Control
    const uint32_t SIM_SCGC6_SPI1 = 1U << 13 ;

  // Field RESERVED: no description available
    const uint32_t SIM_SCGC6_RESERVED = 1U << 14 ;

  // Field I2S: I2S Clock Gate Control
    const uint32_t SIM_SCGC6_I2S = 1U << 15 ;

  // Field RESERVED: no description available
    inline uint32_t SIM_SCGC6_RESERVED (const uint32_t inValue) {return (inValue & 0x3U) << 16 ; }

  // Field CRC: CRC Clock Gate Control
    const uint32_t SIM_SCGC6_CRC = 1U << 18 ;

  // Field RESERVED: no description available
    inline uint32_t SIM_SCGC6_RESERVED (const uint32_t inValue) {return (inValue & 0x3U) << 19 ; }

  // Field USBDCD: USB DCD Clock Gate Control
    const uint32_t SIM_SCGC6_USBDCD = 1U << 21 ;

  // Field PDB: PDB Clock Gate Control
    const uint32_t SIM_SCGC6_PDB = 1U << 22 ;

  // Field PIT: PIT Clock Gate Control
    const uint32_t SIM_SCGC6_PIT = 1U << 23 ;

  // Field FTM0: FTM0 Clock Gate Control
    const uint32_t SIM_SCGC6_FTM0 = 1U << 24 ;

  // Field FTM1: FTM1 Clock Gate Control
    const uint32_t SIM_SCGC6_FTM1 = 1U << 25 ;

  // Field RESERVED: no description available
    const uint32_t SIM_SCGC6_RESERVED = 1U << 26 ;

  // Field ADC0: ADC0 Clock Gate Control
    const uint32_t SIM_SCGC6_ADC0 = 1U << 27 ;

  // Field RESERVED: no description available
    const uint32_t SIM_SCGC6_RESERVED = 1U << 28 ;

  // Field RTC: RTC Access Control
    const uint32_t SIM_SCGC6_RTC = 1U << 29 ;

  // Field RESERVED: no description available
    const uint32_t SIM_SCGC6_RESERVED = 1U << 30 ;

  // Field RESERVED: no description available
    const uint32_t SIM_SCGC6_RESERVED = 1U << 31 ;

//---  Register SCGC7: System Clock Gating Control Register 7
  #define SIM_SCGC7 (* ((volatile uint32_t *) (0x40047000 + 4160)))

  // Field FLEXBUS: FlexBus Clock Gate Control
    const uint32_t SIM_SCGC7_FLEXBUS = 1U << 0 ;

  // Field DMA: DMA Clock Gate Control
    const uint32_t SIM_SCGC7_DMA = 1U << 1 ;

  // Field RESERVED: no description available
    const uint32_t SIM_SCGC7_RESERVED = 1U << 2 ;

  // Field RESERVED: no description available
    inline uint32_t SIM_SCGC7_RESERVED (const uint32_t inValue) {return (inValue & 0x1fffffffU) << 3 ; }

//---  Register CLKDIV1: System Clock Divider Register 1
  #define SIM_CLKDIV1 (* ((volatile uint32_t *) (0x40047000 + 4164)))

  // Field RESERVED: no description available
    inline uint32_t SIM_CLKDIV1_RESERVED (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

  // Field OUTDIV4: Clock 4 output divider value
    inline uint32_t SIM_CLKDIV1_OUTDIV4 (const uint32_t inValue) {return (inValue & 0xfU) << 16 ; }

  // Field OUTDIV3: Clock 3 output divider value
    inline uint32_t SIM_CLKDIV1_OUTDIV3 (const uint32_t inValue) {return (inValue & 0xfU) << 20 ; }

  // Field OUTDIV2: Clock 2 output divider value
    inline uint32_t SIM_CLKDIV1_OUTDIV2 (const uint32_t inValue) {return (inValue & 0xfU) << 24 ; }

  // Field OUTDIV1: Clock 1 output divider value
    inline uint32_t SIM_CLKDIV1_OUTDIV1 (const uint32_t inValue) {return (inValue & 0xfU) << 28 ; }

//---  Register CLKDIV2: System Clock Divider Register 2
  #define SIM_CLKDIV2 (* ((volatile uint32_t *) (0x40047000 + 4168)))

  // Field USBFRAC: USB clock divider fraction
    const uint32_t SIM_CLKDIV2_USBFRAC = 1U << 0 ;

  // Field USBDIV: USB clock divider divisor
    inline uint32_t SIM_CLKDIV2_USBDIV (const uint32_t inValue) {return (inValue & 0x7U) << 1 ; }

  // Field RESERVED: no description available
    inline uint32_t SIM_CLKDIV2_RESERVED (const uint32_t inValue) {return (inValue & 0xfffffffU) << 4 ; }

//---  Register FCFG1: Flash Configuration Register 1
  #define SIM_FCFG1 (* ((volatile uint32_t *) (0x40047000 + 4172)))

  // Field FLASHDIS: Flash Disable
    const uint32_t SIM_FCFG1_FLASHDIS = 1U << 0 ;

  // Field FLASHDOZE: Flash Doze
    const uint32_t SIM_FCFG1_FLASHDOZE = 1U << 1 ;

  // Field RESERVED: no description available
    inline uint32_t SIM_FCFG1_RESERVED (const uint32_t inValue) {return (inValue & 0x3fU) << 2 ; }

  // Field DEPART: FlexNVM partition
    inline uint32_t SIM_FCFG1_DEPART (const uint32_t inValue) {return (inValue & 0xfU) << 8 ; }

  // Field RESERVED: no description available
    inline uint32_t SIM_FCFG1_RESERVED (const uint32_t inValue) {return (inValue & 0xfU) << 12 ; }

  // Field EESIZE: EEPROM size
    inline uint32_t SIM_FCFG1_EESIZE (const uint32_t inValue) {return (inValue & 0xfU) << 16 ; }

  // Field RESERVED: no description available
    inline uint32_t SIM_FCFG1_RESERVED (const uint32_t inValue) {return (inValue & 0xfU) << 20 ; }

  // Field PFSIZE: Program flash size
    inline uint32_t SIM_FCFG1_PFSIZE (const uint32_t inValue) {return (inValue & 0xfU) << 24 ; }

  // Field NVMSIZE: FlexNVM size
    inline uint32_t SIM_FCFG1_NVMSIZE (const uint32_t inValue) {return (inValue & 0xfU) << 28 ; }

//---  Register FCFG2: Flash Configuration Register 2
  #define SIM_FCFG2 (* ((volatile uint32_t *) (0x40047000 + 4176)))

  // Field RESERVED: no description available
    inline uint32_t SIM_FCFG2_RESERVED (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

  // Field MAXADDR1: Max address block 1
    inline uint32_t SIM_FCFG2_MAXADDR1 (const uint32_t inValue) {return (inValue & 0x7fU) << 16 ; }

  // Field PFLSH: Program flash
    const uint32_t SIM_FCFG2_PFLSH = 1U << 23 ;

  // Field MAXADDR0: Max address block 0
    inline uint32_t SIM_FCFG2_MAXADDR0 (const uint32_t inValue) {return (inValue & 0x7fU) << 24 ; }

  // Field SWAPPFLSH: Swap program flash
    const uint32_t SIM_FCFG2_SWAPPFLSH = 1U << 31 ;

//---  Register UIDH: Unique Identification Register High
  #define SIM_UIDH (* ((volatile uint32_t *) (0x40047000 + 4180)))

  // Field UID: Unique Identification
    inline uint32_t SIM_UIDH_UID (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register UIDMH: Unique Identification Register Mid-High
  #define SIM_UIDMH (* ((volatile uint32_t *) (0x40047000 + 4184)))

  // Field UID: Unique Identification
    inline uint32_t SIM_UIDMH_UID (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register UIDML: Unique Identification Register Mid Low
  #define SIM_UIDML (* ((volatile uint32_t *) (0x40047000 + 4188)))

  // Field UID: Unique Identification
    inline uint32_t SIM_UIDML_UID (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register UIDL: Unique Identification Register Low
  #define SIM_UIDL (* ((volatile uint32_t *) (0x40047000 + 4192)))

  // Field UID: Unique Identification
    inline uint32_t SIM_UIDL_UID (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//------------------------------------------------------------------------------
// Peripheral SMC: System Mode Controller
//------------------------------------------------------------------------------

//---  Register PMPROT: Power Mode Protection Register
  #define SMC_PMPROT (* ((volatile uint8_t *) (0x4007e000 + 0)))

  // Field RESERVED: no description available
    const uint8_t SMC_PMPROT_RESERVED = 1U << 0 ;

  // Field AVLLS: Allow very low leakage stop mode
    const uint8_t SMC_PMPROT_AVLLS = 1U << 1 ;

  // Field RESERVED: no description available
    const uint8_t SMC_PMPROT_RESERVED = 1U << 2 ;

  // Field ALLS: Allow low leakage stop mode
    const uint8_t SMC_PMPROT_ALLS = 1U << 3 ;

  // Field RESERVED: no description available
    const uint8_t SMC_PMPROT_RESERVED = 1U << 4 ;

  // Field AVLP: Allow very low power modes
    const uint8_t SMC_PMPROT_AVLP = 1U << 5 ;

  // Field RESERVED: no description available
    inline uint8_t SMC_PMPROT_RESERVED (const uint8_t inValue) {return (inValue & 0x3U) << 6 ; }

//---  Register PMCTRL: Power Mode Control Register
  #define SMC_PMCTRL (* ((volatile uint8_t *) (0x4007e000 + 1)))

  // Field STOPM: Stop Mode Control
    inline uint8_t SMC_PMCTRL_STOPM (const uint8_t inValue) {return (inValue & 0x7U) << 0 ; }

  // Field STOPA: Stop Aborted
    const uint8_t SMC_PMCTRL_STOPA = 1U << 3 ;

  // Field RESERVED: no description available
    const uint8_t SMC_PMCTRL_RESERVED = 1U << 4 ;

  // Field RUNM: Run Mode Control
    inline uint8_t SMC_PMCTRL_RUNM (const uint8_t inValue) {return (inValue & 0x3U) << 5 ; }

  // Field RESERVED: no description available
    const uint8_t SMC_PMCTRL_RESERVED = 1U << 7 ;

//---  Register VLLSCTRL: VLLS Control Register
  #define SMC_VLLSCTRL (* ((volatile uint8_t *) (0x4007e000 + 2)))

  // Field VLLSM: VLLS Mode Control
    inline uint8_t SMC_VLLSCTRL_VLLSM (const uint8_t inValue) {return (inValue & 0x7U) << 0 ; }

  // Field RESERVED: no description available
    const uint8_t SMC_VLLSCTRL_RESERVED = 1U << 3 ;

  // Field RESERVED: no description available
    const uint8_t SMC_VLLSCTRL_RESERVED = 1U << 4 ;

  // Field RESERVED: no description available
    const uint8_t SMC_VLLSCTRL_RESERVED = 1U << 5 ;

  // Field RESERVED: no description available
    inline uint8_t SMC_VLLSCTRL_RESERVED (const uint8_t inValue) {return (inValue & 0x3U) << 6 ; }

//---  Register PMSTAT: Power Mode Status Register
  #define SMC_PMSTAT (* ((volatile uint8_t *) (0x4007e000 + 3)))

  // Field PMSTAT: no description available
    inline uint8_t SMC_PMSTAT_PMSTAT (const uint8_t inValue) {return (inValue & 0x7fU) << 0 ; }

  // Field RESERVED: no description available
    const uint8_t SMC_PMSTAT_RESERVED = 1U << 7 ;

//------------------------------------------------------------------------------
// PERIPHERAL GROUP: SPI
//        SPI0 at 0x4002c000
//        SPI1 at 0x4002d000
//------------------------------------------------------------------------------

static const uint32_t kBaseAddress_SPI [2] = {0x4002c000, 0x4002d000} ;

//------------------------------------------------------------------------------

//---  Register MCR: DSPI Module Configuration Register
  #define SPI_MCR(group) (* ((volatile uint32_t *) (kBaseAddress_MCR [group] + 0x0)))
  #define SPI0_MCR (* ((volatile uint32_t *) (0x4002c000 + 0x0)))
  #define SPI1_MCR (* ((volatile uint32_t *) (0x4002d000 + 0x0)))

  // Field HALT: Halt
    const uint32_t SPI_MCR_HALT = 1U << 0 ;

  // Field RESERVED: no description available
    const uint32_t SPI_MCR_RESERVED = 1U << 1 ;

  // Field RESERVED: no description available
    inline uint32_t SPI_MCR_RESERVED (const uint32_t inValue) {return (inValue & 0x3fU) << 2 ; }

  // Field SMPL_PT: Sample Point
    inline uint32_t SPI_MCR_SMPL_PT (const uint32_t inValue) {return (inValue & 0x3U) << 8 ; }

  // Field CLR_RXF: no description available
    const uint32_t SPI_MCR_CLR_RXF = 1U << 10 ;

  // Field CLR_TXF: Clear TX FIFO
    const uint32_t SPI_MCR_CLR_TXF = 1U << 11 ;

  // Field DIS_RXF: Disable Receive FIFO
    const uint32_t SPI_MCR_DIS_RXF = 1U << 12 ;

  // Field DIS_TXF: Disable Transmit FIFO
    const uint32_t SPI_MCR_DIS_TXF = 1U << 13 ;

  // Field MDIS: Module Disable
    const uint32_t SPI_MCR_MDIS = 1U << 14 ;

  // Field DOZE: Doze Enable
    const uint32_t SPI_MCR_DOZE = 1U << 15 ;

  // Field PCSIS: Peripheral Chip Select x Inactive State
    inline uint32_t SPI_MCR_PCSIS (const uint32_t inValue) {return (inValue & 0x3fU) << 16 ; }

  // Field RESERVED: no description available
    inline uint32_t SPI_MCR_RESERVED (const uint32_t inValue) {return (inValue & 0x3U) << 22 ; }

  // Field ROOE: Receive FIFO Overflow Overwrite Enable
    const uint32_t SPI_MCR_ROOE = 1U << 24 ;

  // Field PCSSE: Peripheral Chip Select Strobe Enable
    const uint32_t SPI_MCR_PCSSE = 1U << 25 ;

  // Field MTFE: Modified Timing Format Enable
    const uint32_t SPI_MCR_MTFE = 1U << 26 ;

  // Field FRZ: Freeze
    const uint32_t SPI_MCR_FRZ = 1U << 27 ;

  // Field DCONF: DSPI Configuration
    inline uint32_t SPI_MCR_DCONF (const uint32_t inValue) {return (inValue & 0x3U) << 28 ; }

  // Field CONT_SCKE: Continuous SCK Enable
    const uint32_t SPI_MCR_CONT_SCKE = 1U << 30 ;

  // Field MSTR: Master/Slave Mode Select
    const uint32_t SPI_MCR_MSTR = 1U << 31 ;

//---  Register TCR: DSPI Transfer Count Register
  #define SPI_TCR(group) (* ((volatile uint32_t *) (kBaseAddress_TCR [group] + 0x8)))
  #define SPI0_TCR (* ((volatile uint32_t *) (0x4002c000 + 0x8)))
  #define SPI1_TCR (* ((volatile uint32_t *) (0x4002d000 + 0x8)))

  // Field RESERVED: no description available
    inline uint32_t SPI_TCR_RESERVED (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

  // Field SPI_TCNT: SPI Transfer Counter
    inline uint32_t SPI_TCR_SPI_TCNT (const uint32_t inValue) {return (inValue & 0xffffU) << 16 ; }

//---  Register CTAR_SLAVE: DSPI Clock and Transfer Attributes Register (In Slave Mode)
  #define SPI_CTAR_SLAVE(group) (* ((volatile uint32_t *) (kBaseAddress_CTAR_SLAVE [group] + 0xc)))
  #define SPI0_CTAR_SLAVE (* ((volatile uint32_t *) (0x4002c000 + 0xc)))
  #define SPI1_CTAR_SLAVE (* ((volatile uint32_t *) (0x4002d000 + 0xc)))

  // Field RESERVED: no description available
    inline uint32_t SPI_CTAR_SLAVE_RESERVED (const uint32_t inValue) {return (inValue & 0x7fffffU) << 0 ; }

  // Field RESERVED: no description available
    inline uint32_t SPI_CTAR_SLAVE_RESERVED (const uint32_t inValue) {return (inValue & 0x3U) << 23 ; }

  // Field CPHA: Clock Phase
    const uint32_t SPI_CTAR_SLAVE_CPHA = 1U << 25 ;

  // Field CPOL: Clock Polarity
    const uint32_t SPI_CTAR_SLAVE_CPOL = 1U << 26 ;

  // Field FMSZ: Frame Size
    inline uint32_t SPI_CTAR_SLAVE_FMSZ (const uint32_t inValue) {return (inValue & 0x1fU) << 27 ; }

//---  Registers CTAR(0,1): DSPI Clock and Transfer Attributes Register (In Master Mode)
  #define SPI_CTAR(group,idx) (* ((volatile uint32_t *) (kBaseAddress_CTAR [group] + 0xc + (idx) * 0x4)))
  #define SPI0_CTAR(idx) (* ((volatile uint32_t *) (0x4002c000 + 0xc + (idx) * 0x4)))
  #define SPI1_CTAR(idx) (* ((volatile uint32_t *) (0x4002d000 + 0xc + (idx) * 0x4)))
  #define SPI0_CTAR0 (* ((volatile uint32_t *) (0x4002c000 + 0xc + 0 * 0x4)))
  #define SPI1_CTAR0 (* ((volatile uint32_t *) (0x4002d000 + 0xc + 0 * 0x4)))
  #define SPI0_CTAR1 (* ((volatile uint32_t *) (0x4002c000 + 0xc + 1 * 0x4)))
  #define SPI1_CTAR1 (* ((volatile uint32_t *) (0x4002d000 + 0xc + 1 * 0x4)))

  // Field BR: Baud Rate Scaler
    inline uint32_t SPI_CTAR_BR (const uint32_t inValue) {return (inValue & 0xfU) << 0 ; }

  // Field DT: Delay After Transfer Scaler
    inline uint32_t SPI_CTAR_DT (const uint32_t inValue) {return (inValue & 0xfU) << 4 ; }

  // Field ASC: After SCK Delay Scaler
    inline uint32_t SPI_CTAR_ASC (const uint32_t inValue) {return (inValue & 0xfU) << 8 ; }

  // Field CSSCK: PCS to SCK Delay Scaler
    inline uint32_t SPI_CTAR_CSSCK (const uint32_t inValue) {return (inValue & 0xfU) << 12 ; }

  // Field PBR: Baud Rate Prescaler
    inline uint32_t SPI_CTAR_PBR (const uint32_t inValue) {return (inValue & 0x3U) << 16 ; }

  // Field PDT: Delay after Transfer Prescaler
    inline uint32_t SPI_CTAR_PDT (const uint32_t inValue) {return (inValue & 0x3U) << 18 ; }

  // Field PASC: After SCK Delay Prescaler
    inline uint32_t SPI_CTAR_PASC (const uint32_t inValue) {return (inValue & 0x3U) << 20 ; }

  // Field PCSSCK: PCS to SCK Delay Prescaler
    inline uint32_t SPI_CTAR_PCSSCK (const uint32_t inValue) {return (inValue & 0x3U) << 22 ; }

  // Field LSBFE: LBS First
    const uint32_t SPI_CTAR_LSBFE = 1U << 24 ;

  // Field CPHA: Clock Phase
    const uint32_t SPI_CTAR_CPHA = 1U << 25 ;

  // Field CPOL: Clock Polarity
    const uint32_t SPI_CTAR_CPOL = 1U << 26 ;

  // Field FMSZ: Frame Size
    inline uint32_t SPI_CTAR_FMSZ (const uint32_t inValue) {return (inValue & 0xfU) << 27 ; }

  // Field DBR: Double Baud Rate
    const uint32_t SPI_CTAR_DBR = 1U << 31 ;

//---  Register SR: DSPI Status Register
  #define SPI_SR(group) (* ((volatile uint32_t *) (kBaseAddress_SR [group] + 0x2c)))
  #define SPI0_SR (* ((volatile uint32_t *) (0x4002c000 + 0x2c)))
  #define SPI1_SR (* ((volatile uint32_t *) (0x4002d000 + 0x2c)))

  // Field POPNXTPTR: Pop Next Pointer
    inline uint32_t SPI_SR_POPNXTPTR (const uint32_t inValue) {return (inValue & 0xfU) << 0 ; }

  // Field RXCTR: RX FIFO Counter
    inline uint32_t SPI_SR_RXCTR (const uint32_t inValue) {return (inValue & 0xfU) << 4 ; }

  // Field TXNXTPTR: Transmit Next Pointer
    inline uint32_t SPI_SR_TXNXTPTR (const uint32_t inValue) {return (inValue & 0xfU) << 8 ; }

  // Field TXCTR: TX FIFO Counter
    inline uint32_t SPI_SR_TXCTR (const uint32_t inValue) {return (inValue & 0xfU) << 12 ; }

  // Field RESERVED: no description available
    const uint32_t SPI_SR_RESERVED = 1U << 16 ;

  // Field RFDF: Receive FIFO Drain Flag
    const uint32_t SPI_SR_RFDF = 1U << 17 ;

  // Field RESERVED: no description available
    const uint32_t SPI_SR_RESERVED = 1U << 18 ;

  // Field RFOF: Receive FIFO Overflow Flag
    const uint32_t SPI_SR_RFOF = 1U << 19 ;

  // Field RESERVED: no description available
    const uint32_t SPI_SR_RESERVED = 1U << 20 ;

  // Field RESERVED: no description available
    const uint32_t SPI_SR_RESERVED = 1U << 21 ;

  // Field RESERVED: no description available
    const uint32_t SPI_SR_RESERVED = 1U << 22 ;

  // Field RESERVED: no description available
    const uint32_t SPI_SR_RESERVED = 1U << 23 ;

  // Field RESERVED: no description available
    const uint32_t SPI_SR_RESERVED = 1U << 24 ;

  // Field TFFF: Transmit FIFO Fill Flag
    const uint32_t SPI_SR_TFFF = 1U << 25 ;

  // Field RESERVED: no description available
    const uint32_t SPI_SR_RESERVED = 1U << 26 ;

  // Field TFUF: Transmit FIFO Underflow Flag
    const uint32_t SPI_SR_TFUF = 1U << 27 ;

  // Field EOQF: End of Queue Flag
    const uint32_t SPI_SR_EOQF = 1U << 28 ;

  // Field RESERVED: no description available
    const uint32_t SPI_SR_RESERVED = 1U << 29 ;

  // Field TXRXS: TX and RX Status
    const uint32_t SPI_SR_TXRXS = 1U << 30 ;

  // Field TCF: Transfer Complete Flag
    const uint32_t SPI_SR_TCF = 1U << 31 ;

//---  Register RSER: DSPI DMA/Interrupt Request Select and Enable Register
  #define SPI_RSER(group) (* ((volatile uint32_t *) (kBaseAddress_RSER [group] + 0x30)))
  #define SPI0_RSER (* ((volatile uint32_t *) (0x4002c000 + 0x30)))
  #define SPI1_RSER (* ((volatile uint32_t *) (0x4002d000 + 0x30)))

  // Field RESERVED: no description available
    inline uint32_t SPI_RSER_RESERVED (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

  // Field RFDF_DIRS: Receive FIFO Drain DMA or Interrupt Request Select.
    const uint32_t SPI_RSER_RFDF_DIRS = 1U << 16 ;

  // Field RFDF_RE: Receive FIFO Drain Request Enable
    const uint32_t SPI_RSER_RFDF_RE = 1U << 17 ;

  // Field RESERVED: no description available
    const uint32_t SPI_RSER_RESERVED = 1U << 18 ;

  // Field RFOF_RE: Receive FIFO Overflow Request Enable
    const uint32_t SPI_RSER_RFOF_RE = 1U << 19 ;

  // Field RESERVED: no description available
    const uint32_t SPI_RSER_RESERVED = 1U << 20 ;

  // Field RESERVED: no description available
    const uint32_t SPI_RSER_RESERVED = 1U << 21 ;

  // Field RESERVED: no description available
    const uint32_t SPI_RSER_RESERVED = 1U << 22 ;

  // Field RESERVED: no description available
    const uint32_t SPI_RSER_RESERVED = 1U << 23 ;

  // Field TFFF_DIRS: Transmit FIFO Fill DMA or Interrupt Request Select
    const uint32_t SPI_RSER_TFFF_DIRS = 1U << 24 ;

  // Field TFFF_RE: Transmit FIFO Fill Request Enable
    const uint32_t SPI_RSER_TFFF_RE = 1U << 25 ;

  // Field RESERVED: no description available
    const uint32_t SPI_RSER_RESERVED = 1U << 26 ;

  // Field TFUF_RE: Transmit FIFO Underflow Request Enable
    const uint32_t SPI_RSER_TFUF_RE = 1U << 27 ;

  // Field EOQF_RE: DSPI Finished Request Enable
    const uint32_t SPI_RSER_EOQF_RE = 1U << 28 ;

  // Field RESERVED: no description available
    const uint32_t SPI_RSER_RESERVED = 1U << 29 ;

  // Field RESERVED: no description available
    const uint32_t SPI_RSER_RESERVED = 1U << 30 ;

  // Field TCF_RE: Transmission Complete Request Enable
    const uint32_t SPI_RSER_TCF_RE = 1U << 31 ;

//---  Register PUSHR: DSPI PUSH TX FIFO Register In Master Mode
  #define SPI_PUSHR(group) (* ((volatile uint32_t *) (kBaseAddress_PUSHR [group] + 0x34)))
  #define SPI0_PUSHR (* ((volatile uint32_t *) (0x4002c000 + 0x34)))
  #define SPI1_PUSHR (* ((volatile uint32_t *) (0x4002d000 + 0x34)))

  // Field TXDATA: Transmit Data
    inline uint32_t SPI_PUSHR_TXDATA (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

  // Field PCS: no description available
    inline uint32_t SPI_PUSHR_PCS (const uint32_t inValue) {return (inValue & 0x3fU) << 16 ; }

  // Field RESERVED: no description available
    inline uint32_t SPI_PUSHR_RESERVED (const uint32_t inValue) {return (inValue & 0x3U) << 22 ; }

  // Field RESERVED: no description available
    inline uint32_t SPI_PUSHR_RESERVED (const uint32_t inValue) {return (inValue & 0x3U) << 24 ; }

  // Field CTCNT: Clear Transfer Counter.
    const uint32_t SPI_PUSHR_CTCNT = 1U << 26 ;

  // Field EOQ: End Of Queue
    const uint32_t SPI_PUSHR_EOQ = 1U << 27 ;

  // Field CTAS: Clock and Transfer Attributes Select.
    inline uint32_t SPI_PUSHR_CTAS (const uint32_t inValue) {return (inValue & 0x7U) << 28 ; }

  // Field CONT: Continuous Peripheral Chip Select Enable
    const uint32_t SPI_PUSHR_CONT = 1U << 31 ;

//---  Register PUSHR_SLAVE: DSPI PUSH TX FIFO Register In Slave Mode
  #define SPI_PUSHR_SLAVE(group) (* ((volatile uint32_t *) (kBaseAddress_PUSHR_SLAVE [group] + 0x34)))
  #define SPI0_PUSHR_SLAVE (* ((volatile uint32_t *) (0x4002c000 + 0x34)))
  #define SPI1_PUSHR_SLAVE (* ((volatile uint32_t *) (0x4002d000 + 0x34)))

  // Field TXDATA: Transmit Data
    inline uint32_t SPI_PUSHR_SLAVE_TXDATA (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register POPR: DSPI POP RX FIFO Register
  #define SPI_POPR(group) (* ((volatile uint32_t *) (kBaseAddress_POPR [group] + 0x38)))
  #define SPI0_POPR (* ((volatile uint32_t *) (0x4002c000 + 0x38)))
  #define SPI1_POPR (* ((volatile uint32_t *) (0x4002d000 + 0x38)))

  // Field RXDATA: Received Data
    inline uint32_t SPI_POPR_RXDATA (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Registers TXFR(0,1,2,3): DSPI Transmit FIFO Registers
  #define SPI_TXFR(group,idx) (* ((volatile uint32_t *) (kBaseAddress_TXFR [group] + 0x3c + (idx) * 0x4)))
  #define SPI0_TXFR(idx) (* ((volatile uint32_t *) (0x4002c000 + 0x3c + (idx) * 0x4)))
  #define SPI1_TXFR(idx) (* ((volatile uint32_t *) (0x4002d000 + 0x3c + (idx) * 0x4)))
  #define SPI0_TXFR0 (* ((volatile uint32_t *) (0x4002c000 + 0x3c + 0 * 0x4)))
  #define SPI1_TXFR0 (* ((volatile uint32_t *) (0x4002d000 + 0x3c + 0 * 0x4)))
  #define SPI0_TXFR1 (* ((volatile uint32_t *) (0x4002c000 + 0x3c + 1 * 0x4)))
  #define SPI1_TXFR1 (* ((volatile uint32_t *) (0x4002d000 + 0x3c + 1 * 0x4)))
  #define SPI0_TXFR2 (* ((volatile uint32_t *) (0x4002c000 + 0x3c + 2 * 0x4)))
  #define SPI1_TXFR2 (* ((volatile uint32_t *) (0x4002d000 + 0x3c + 2 * 0x4)))
  #define SPI0_TXFR3 (* ((volatile uint32_t *) (0x4002c000 + 0x3c + 3 * 0x4)))
  #define SPI1_TXFR3 (* ((volatile uint32_t *) (0x4002d000 + 0x3c + 3 * 0x4)))

  // Field TXDATA: Transmit Data
    inline uint32_t SPI_TXFR_TXDATA (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

  // Field TXCMD_TXDATA: Transmit Command or Transmit Data
    inline uint32_t SPI_TXFR_TXCMD_TXDATA (const uint32_t inValue) {return (inValue & 0xffffU) << 16 ; }

//---  Registers RXFR(0,1,2,3): DSPI Receive FIFO Registers
  #define SPI_RXFR(group,idx) (* ((volatile uint32_t *) (kBaseAddress_RXFR [group] + 0x7c + (idx) * 0x4)))
  #define SPI0_RXFR(idx) (* ((volatile uint32_t *) (0x4002c000 + 0x7c + (idx) * 0x4)))
  #define SPI1_RXFR(idx) (* ((volatile uint32_t *) (0x4002d000 + 0x7c + (idx) * 0x4)))
  #define SPI0_RXFR0 (* ((volatile uint32_t *) (0x4002c000 + 0x7c + 0 * 0x4)))
  #define SPI1_RXFR0 (* ((volatile uint32_t *) (0x4002d000 + 0x7c + 0 * 0x4)))
  #define SPI0_RXFR1 (* ((volatile uint32_t *) (0x4002c000 + 0x7c + 1 * 0x4)))
  #define SPI1_RXFR1 (* ((volatile uint32_t *) (0x4002d000 + 0x7c + 1 * 0x4)))
  #define SPI0_RXFR2 (* ((volatile uint32_t *) (0x4002c000 + 0x7c + 2 * 0x4)))
  #define SPI1_RXFR2 (* ((volatile uint32_t *) (0x4002d000 + 0x7c + 2 * 0x4)))
  #define SPI0_RXFR3 (* ((volatile uint32_t *) (0x4002c000 + 0x7c + 3 * 0x4)))
  #define SPI1_RXFR3 (* ((volatile uint32_t *) (0x4002d000 + 0x7c + 3 * 0x4)))

  // Field RXDATA: Receive Data
    inline uint32_t SPI_RXFR_RXDATA (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//------------------------------------------------------------------------------
// Peripheral SysTick: System timer
//------------------------------------------------------------------------------

//---  Register CSR: SysTick Control and Status Register
  #define SysTick_CSR (* ((volatile uint32_t *) (0xe000e010 + 0)))

  // Field ENABLE: no description available
    const uint32_t SysTick_CSR_ENABLE = 1U << 0 ;

  // Field TICKINT: no description available
    const uint32_t SysTick_CSR_TICKINT = 1U << 1 ;

  // Field CLKSOURCE: no description available
    const uint32_t SysTick_CSR_CLKSOURCE = 1U << 2 ;

  // Field RESERVED: no description available
    const uint32_t SysTick_CSR_RESERVED = 1U << 3 ;

  // Field RESERVED: no description available
    const uint32_t SysTick_CSR_RESERVED = 1U << 4 ;

  // Field RESERVED: no description available
    const uint32_t SysTick_CSR_RESERVED = 1U << 5 ;

  // Field RESERVED: no description available
    const uint32_t SysTick_CSR_RESERVED = 1U << 6 ;

  // Field RESERVED: no description available
    const uint32_t SysTick_CSR_RESERVED = 1U << 7 ;

  // Field RESERVED: no description available
    const uint32_t SysTick_CSR_RESERVED = 1U << 8 ;

  // Field RESERVED: no description available
    const uint32_t SysTick_CSR_RESERVED = 1U << 9 ;

  // Field RESERVED: no description available
    const uint32_t SysTick_CSR_RESERVED = 1U << 10 ;

  // Field RESERVED: no description available
    const uint32_t SysTick_CSR_RESERVED = 1U << 11 ;

  // Field RESERVED: no description available
    const uint32_t SysTick_CSR_RESERVED = 1U << 12 ;

  // Field RESERVED: no description available
    const uint32_t SysTick_CSR_RESERVED = 1U << 13 ;

  // Field RESERVED: no description available
    const uint32_t SysTick_CSR_RESERVED = 1U << 14 ;

  // Field RESERVED: no description available
    const uint32_t SysTick_CSR_RESERVED = 1U << 15 ;

  // Field COUNTFLAG: no description available
    const uint32_t SysTick_CSR_COUNTFLAG = 1U << 16 ;

  // Field RESERVED: no description available
    const uint32_t SysTick_CSR_RESERVED = 1U << 17 ;

  // Field RESERVED: no description available
    const uint32_t SysTick_CSR_RESERVED = 1U << 18 ;

  // Field RESERVED: no description available
    const uint32_t SysTick_CSR_RESERVED = 1U << 19 ;

  // Field RESERVED: no description available
    const uint32_t SysTick_CSR_RESERVED = 1U << 20 ;

  // Field RESERVED: no description available
    const uint32_t SysTick_CSR_RESERVED = 1U << 21 ;

  // Field RESERVED: no description available
    const uint32_t SysTick_CSR_RESERVED = 1U << 22 ;

  // Field RESERVED: no description available
    const uint32_t SysTick_CSR_RESERVED = 1U << 23 ;

  // Field RESERVED: no description available
    const uint32_t SysTick_CSR_RESERVED = 1U << 24 ;

  // Field RESERVED: no description available
    const uint32_t SysTick_CSR_RESERVED = 1U << 25 ;

  // Field RESERVED: no description available
    const uint32_t SysTick_CSR_RESERVED = 1U << 26 ;

  // Field RESERVED: no description available
    const uint32_t SysTick_CSR_RESERVED = 1U << 27 ;

  // Field RESERVED: no description available
    const uint32_t SysTick_CSR_RESERVED = 1U << 28 ;

  // Field RESERVED: no description available
    const uint32_t SysTick_CSR_RESERVED = 1U << 29 ;

  // Field RESERVED: no description available
    const uint32_t SysTick_CSR_RESERVED = 1U << 30 ;

  // Field RESERVED: no description available
    const uint32_t SysTick_CSR_RESERVED = 1U << 31 ;

//---  Register RVR: SysTick Reload Value Register
  #define SysTick_RVR (* ((volatile uint32_t *) (0xe000e010 + 4)))

  // Field RELOAD: Value to load into the SysTick Current Value Register when the counter reaches 0
    inline uint32_t SysTick_RVR_RELOAD (const uint32_t inValue) {return (inValue & 0xffffffU) << 0 ; }

  // Field RESERVED: no description available
    const uint32_t SysTick_RVR_RESERVED = 1U << 24 ;

  // Field RESERVED: no description available
    const uint32_t SysTick_RVR_RESERVED = 1U << 25 ;

  // Field RESERVED: no description available
    const uint32_t SysTick_RVR_RESERVED = 1U << 26 ;

  // Field RESERVED: no description available
    const uint32_t SysTick_RVR_RESERVED = 1U << 27 ;

  // Field RESERVED: no description available
    const uint32_t SysTick_RVR_RESERVED = 1U << 28 ;

  // Field RESERVED: no description available
    const uint32_t SysTick_RVR_RESERVED = 1U << 29 ;

  // Field RESERVED: no description available
    const uint32_t SysTick_RVR_RESERVED = 1U << 30 ;

  // Field RESERVED: no description available
    const uint32_t SysTick_RVR_RESERVED = 1U << 31 ;

//---  Register CVR: SysTick Current Value Register
  #define SysTick_CVR (* ((volatile uint32_t *) (0xe000e010 + 8)))

  // Field CURRENT: Current value at the time the register is accessed
    inline uint32_t SysTick_CVR_CURRENT (const uint32_t inValue) {return (inValue & 0xffffffU) << 0 ; }

  // Field RESERVED: no description available
    const uint32_t SysTick_CVR_RESERVED = 1U << 24 ;

  // Field RESERVED: no description available
    const uint32_t SysTick_CVR_RESERVED = 1U << 25 ;

  // Field RESERVED: no description available
    const uint32_t SysTick_CVR_RESERVED = 1U << 26 ;

  // Field RESERVED: no description available
    const uint32_t SysTick_CVR_RESERVED = 1U << 27 ;

  // Field RESERVED: no description available
    const uint32_t SysTick_CVR_RESERVED = 1U << 28 ;

  // Field RESERVED: no description available
    const uint32_t SysTick_CVR_RESERVED = 1U << 29 ;

  // Field RESERVED: no description available
    const uint32_t SysTick_CVR_RESERVED = 1U << 30 ;

  // Field RESERVED: no description available
    const uint32_t SysTick_CVR_RESERVED = 1U << 31 ;

//---  Register CALIB: SysTick Calibration Value Register
  #define SysTick_CALIB (* ((volatile uint32_t *) (0xe000e010 + 12)))

  // Field TENMS: Reload value to use for 10ms timing
    inline uint32_t SysTick_CALIB_TENMS (const uint32_t inValue) {return (inValue & 0xffffffU) << 0 ; }

  // Field RESERVED: no description available
    const uint32_t SysTick_CALIB_RESERVED = 1U << 24 ;

  // Field RESERVED: no description available
    const uint32_t SysTick_CALIB_RESERVED = 1U << 25 ;

  // Field RESERVED: no description available
    const uint32_t SysTick_CALIB_RESERVED = 1U << 26 ;

  // Field RESERVED: no description available
    const uint32_t SysTick_CALIB_RESERVED = 1U << 27 ;

  // Field RESERVED: no description available
    const uint32_t SysTick_CALIB_RESERVED = 1U << 28 ;

  // Field RESERVED: no description available
    const uint32_t SysTick_CALIB_RESERVED = 1U << 29 ;

  // Field SKEW: no description available
    const uint32_t SysTick_CALIB_SKEW = 1U << 30 ;

  // Field NOREF: no description available
    const uint32_t SysTick_CALIB_NOREF = 1U << 31 ;

//------------------------------------------------------------------------------
// Peripheral SystemControl: System Control Registers
//------------------------------------------------------------------------------

//---  Register ACTLR: Auxiliary Control Register,
  #define SystemControl_ACTLR (* ((volatile uint32_t *) (0xe000e000 + 8)))

  // Field DISMCYCINT: Disables interruption of multi-cycle instructions.
    const uint32_t SystemControl_ACTLR_DISMCYCINT = 1U << 0 ;

  // Field DISDEFWBUF: Disables write buffer use during default memory map accesses.
    const uint32_t SystemControl_ACTLR_DISDEFWBUF = 1U << 1 ;

  // Field DISFOLD: Disables folding of IT instructions.
    const uint32_t SystemControl_ACTLR_DISFOLD = 1U << 2 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_ACTLR_RESERVED = 1U << 3 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_ACTLR_RESERVED = 1U << 4 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_ACTLR_RESERVED = 1U << 5 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_ACTLR_RESERVED = 1U << 6 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_ACTLR_RESERVED = 1U << 7 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_ACTLR_RESERVED = 1U << 8 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_ACTLR_RESERVED = 1U << 9 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_ACTLR_RESERVED = 1U << 10 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_ACTLR_RESERVED = 1U << 11 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_ACTLR_RESERVED = 1U << 12 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_ACTLR_RESERVED = 1U << 13 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_ACTLR_RESERVED = 1U << 14 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_ACTLR_RESERVED = 1U << 15 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_ACTLR_RESERVED = 1U << 16 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_ACTLR_RESERVED = 1U << 17 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_ACTLR_RESERVED = 1U << 18 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_ACTLR_RESERVED = 1U << 19 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_ACTLR_RESERVED = 1U << 20 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_ACTLR_RESERVED = 1U << 21 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_ACTLR_RESERVED = 1U << 22 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_ACTLR_RESERVED = 1U << 23 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_ACTLR_RESERVED = 1U << 24 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_ACTLR_RESERVED = 1U << 25 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_ACTLR_RESERVED = 1U << 26 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_ACTLR_RESERVED = 1U << 27 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_ACTLR_RESERVED = 1U << 28 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_ACTLR_RESERVED = 1U << 29 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_ACTLR_RESERVED = 1U << 30 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_ACTLR_RESERVED = 1U << 31 ;

//---  Register CPUID: CPUID Base Register
  #define SystemControl_CPUID (* ((volatile uint32_t *) (0xe000e000 + 3328)))

  // Field REVISION: Indicates patch release: 0x0 = Patch 0
    inline uint32_t SystemControl_CPUID_REVISION (const uint32_t inValue) {return (inValue & 0xfU) << 0 ; }

  // Field PARTNO: Indicates part number
    inline uint32_t SystemControl_CPUID_PARTNO (const uint32_t inValue) {return (inValue & 0xfffU) << 4 ; }

  // Field RESERVED: (Constant) Reads as 1
    const uint32_t SystemControl_CPUID_RESERVED = 1U << 16 ;

  // Field RESERVED: (Constant) Reads as 1
    const uint32_t SystemControl_CPUID_RESERVED = 1U << 17 ;

  // Field RESERVED: (Constant) Reads as 1
    const uint32_t SystemControl_CPUID_RESERVED = 1U << 18 ;

  // Field RESERVED: (Constant) Reads as 1
    const uint32_t SystemControl_CPUID_RESERVED = 1U << 19 ;

  // Field VARIANT: Indicates processor revision: 0x2 = Revision 2
    inline uint32_t SystemControl_CPUID_VARIANT (const uint32_t inValue) {return (inValue & 0xfU) << 20 ; }

  // Field IMPLEMENTER: Implementer code
    inline uint32_t SystemControl_CPUID_IMPLEMENTER (const uint32_t inValue) {return (inValue & 0xffU) << 24 ; }

//---  Register ICSR: Interrupt Control and State Register
  #define SystemControl_ICSR (* ((volatile uint32_t *) (0xe000e000 + 3332)))

  // Field VECTACTIVE: Active exception number
    inline uint32_t SystemControl_ICSR_VECTACTIVE (const uint32_t inValue) {return (inValue & 0x1ffU) << 0 ; }

  // Field RESERVED: Reserved
    const uint32_t SystemControl_ICSR_RESERVED = 1U << 9 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_ICSR_RESERVED = 1U << 10 ;

  // Field RETTOBASE: no description available
    const uint32_t SystemControl_ICSR_RETTOBASE = 1U << 11 ;

  // Field VECTPENDING: Exception number of the highest priority pending enabled exception
    inline uint32_t SystemControl_ICSR_VECTPENDING (const uint32_t inValue) {return (inValue & 0x3fU) << 12 ; }

  // Field RESERVED: Reserved
    const uint32_t SystemControl_ICSR_RESERVED = 1U << 18 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_ICSR_RESERVED = 1U << 19 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_ICSR_RESERVED = 1U << 20 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_ICSR_RESERVED = 1U << 21 ;

  // Field ISRPENDING: no description available
    const uint32_t SystemControl_ICSR_ISRPENDING = 1U << 22 ;

  // Field ISRPREEMPT: no description available
    const uint32_t SystemControl_ICSR_ISRPREEMPT = 1U << 23 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_ICSR_RESERVED = 1U << 24 ;

  // Field PENDSTCLR: no description available
    const uint32_t SystemControl_ICSR_PENDSTCLR = 1U << 25 ;

  // Field PENDSTSET: no description available
    const uint32_t SystemControl_ICSR_PENDSTSET = 1U << 26 ;

  // Field PENDSVCLR: no description available
    const uint32_t SystemControl_ICSR_PENDSVCLR = 1U << 27 ;

  // Field PENDSVSET: no description available
    const uint32_t SystemControl_ICSR_PENDSVSET = 1U << 28 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_ICSR_RESERVED = 1U << 29 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_ICSR_RESERVED = 1U << 30 ;

  // Field NMIPENDSET: no description available
    const uint32_t SystemControl_ICSR_NMIPENDSET = 1U << 31 ;

//---  Register VTOR: Vector Table Offset Register
  #define SystemControl_VTOR (* ((volatile uint32_t *) (0xe000e000 + 3336)))

  // Field RESERVED: Reserved
    const uint32_t SystemControl_VTOR_RESERVED = 1U << 0 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_VTOR_RESERVED = 1U << 1 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_VTOR_RESERVED = 1U << 2 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_VTOR_RESERVED = 1U << 3 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_VTOR_RESERVED = 1U << 4 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_VTOR_RESERVED = 1U << 5 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_VTOR_RESERVED = 1U << 6 ;

  // Field TBLOFF: Vector table base offset
    inline uint32_t SystemControl_VTOR_TBLOFF (const uint32_t inValue) {return (inValue & 0x1ffffffU) << 7 ; }

//---  Register AIRCR: Application Interrupt and Reset Control Register
  #define SystemControl_AIRCR (* ((volatile uint32_t *) (0xe000e000 + 3340)))

  // Field VECTRESET: no description available
    const uint32_t SystemControl_AIRCR_VECTRESET = 1U << 0 ;

  // Field VECTCLRACTIVE: no description available
    const uint32_t SystemControl_AIRCR_VECTCLRACTIVE = 1U << 1 ;

  // Field SYSRESETREQ: no description available
    const uint32_t SystemControl_AIRCR_SYSRESETREQ = 1U << 2 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_AIRCR_RESERVED = 1U << 3 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_AIRCR_RESERVED = 1U << 4 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_AIRCR_RESERVED = 1U << 5 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_AIRCR_RESERVED = 1U << 6 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_AIRCR_RESERVED = 1U << 7 ;

  // Field PRIGROUP: Interrupt priority grouping field. This field determines the split of group priority from subpriority.
    inline uint32_t SystemControl_AIRCR_PRIGROUP (const uint32_t inValue) {return (inValue & 0x7U) << 8 ; }

  // Field RESERVED: Reserved
    const uint32_t SystemControl_AIRCR_RESERVED = 1U << 11 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_AIRCR_RESERVED = 1U << 12 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_AIRCR_RESERVED = 1U << 13 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_AIRCR_RESERVED = 1U << 14 ;

  // Field ENDIANNESS: no description available
    const uint32_t SystemControl_AIRCR_ENDIANNESS = 1U << 15 ;

  // Field VECTKEY: Register key
    inline uint32_t SystemControl_AIRCR_VECTKEY (const uint32_t inValue) {return (inValue & 0xffffU) << 16 ; }

//---  Register SCR: System Control Register
  #define SystemControl_SCR (* ((volatile uint32_t *) (0xe000e000 + 3344)))

  // Field RESERVED: Reserved
    const uint32_t SystemControl_SCR_RESERVED = 1U << 0 ;

  // Field SLEEPONEXIT: no description available
    const uint32_t SystemControl_SCR_SLEEPONEXIT = 1U << 1 ;

  // Field SLEEPDEEP: no description available
    const uint32_t SystemControl_SCR_SLEEPDEEP = 1U << 2 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_SCR_RESERVED = 1U << 3 ;

  // Field SEVONPEND: no description available
    const uint32_t SystemControl_SCR_SEVONPEND = 1U << 4 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_SCR_RESERVED = 1U << 5 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_SCR_RESERVED = 1U << 6 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_SCR_RESERVED = 1U << 7 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_SCR_RESERVED = 1U << 8 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_SCR_RESERVED = 1U << 9 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_SCR_RESERVED = 1U << 10 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_SCR_RESERVED = 1U << 11 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_SCR_RESERVED = 1U << 12 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_SCR_RESERVED = 1U << 13 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_SCR_RESERVED = 1U << 14 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_SCR_RESERVED = 1U << 15 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_SCR_RESERVED = 1U << 16 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_SCR_RESERVED = 1U << 17 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_SCR_RESERVED = 1U << 18 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_SCR_RESERVED = 1U << 19 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_SCR_RESERVED = 1U << 20 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_SCR_RESERVED = 1U << 21 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_SCR_RESERVED = 1U << 22 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_SCR_RESERVED = 1U << 23 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_SCR_RESERVED = 1U << 24 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_SCR_RESERVED = 1U << 25 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_SCR_RESERVED = 1U << 26 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_SCR_RESERVED = 1U << 27 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_SCR_RESERVED = 1U << 28 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_SCR_RESERVED = 1U << 29 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_SCR_RESERVED = 1U << 30 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_SCR_RESERVED = 1U << 31 ;

//---  Register CCR: Configuration and Control Register
  #define SystemControl_CCR (* ((volatile uint32_t *) (0xe000e000 + 3348)))

  // Field NONBASETHRDENA: no description available
    const uint32_t SystemControl_CCR_NONBASETHRDENA = 1U << 0 ;

  // Field USERSETMPEND: Enables unprivileged software access to the STIR
    const uint32_t SystemControl_CCR_USERSETMPEND = 1U << 1 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_CCR_RESERVED = 1U << 2 ;

  // Field UNALIGN_TRP: Enables unaligned access traps
    const uint32_t SystemControl_CCR_UNALIGN_TRP = 1U << 3 ;

  // Field DIV_0_TRP: Enables faulting or halting when the processor executes an SDIV or UDIV instruction with a divisor of 0
    const uint32_t SystemControl_CCR_DIV_0_TRP = 1U << 4 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_CCR_RESERVED = 1U << 5 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_CCR_RESERVED = 1U << 6 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_CCR_RESERVED = 1U << 7 ;

  // Field BFHFNMIGN: Enables handlers with priority -1 or -2 to ignore data BusFaults caused by load and store instructions.
    const uint32_t SystemControl_CCR_BFHFNMIGN = 1U << 8 ;

  // Field STKALIGN: Indicates stack alignment on exception entry
    const uint32_t SystemControl_CCR_STKALIGN = 1U << 9 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_CCR_RESERVED = 1U << 10 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_CCR_RESERVED = 1U << 11 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_CCR_RESERVED = 1U << 12 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_CCR_RESERVED = 1U << 13 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_CCR_RESERVED = 1U << 14 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_CCR_RESERVED = 1U << 15 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_CCR_RESERVED = 1U << 16 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_CCR_RESERVED = 1U << 17 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_CCR_RESERVED = 1U << 18 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_CCR_RESERVED = 1U << 19 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_CCR_RESERVED = 1U << 20 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_CCR_RESERVED = 1U << 21 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_CCR_RESERVED = 1U << 22 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_CCR_RESERVED = 1U << 23 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_CCR_RESERVED = 1U << 24 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_CCR_RESERVED = 1U << 25 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_CCR_RESERVED = 1U << 26 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_CCR_RESERVED = 1U << 27 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_CCR_RESERVED = 1U << 28 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_CCR_RESERVED = 1U << 29 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_CCR_RESERVED = 1U << 30 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_CCR_RESERVED = 1U << 31 ;

//---  Register SHPR1: System Handler Priority Register 1
  #define SystemControl_SHPR1 (* ((volatile uint32_t *) (0xe000e000 + 3352)))

  // Field PRI_4: Priority of system handler 4, MemManage
    inline uint32_t SystemControl_SHPR1_PRI_4 (const uint32_t inValue) {return (inValue & 0xffU) << 0 ; }

  // Field PRI_5: Priority of system handler 5, BusFault
    inline uint32_t SystemControl_SHPR1_PRI_5 (const uint32_t inValue) {return (inValue & 0xffU) << 8 ; }

  // Field PRI_6: Priority of system handler 6, UsageFault
    inline uint32_t SystemControl_SHPR1_PRI_6 (const uint32_t inValue) {return (inValue & 0xffU) << 16 ; }

  // Field RESERVED: Reserved
    const uint32_t SystemControl_SHPR1_RESERVED = 1U << 24 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_SHPR1_RESERVED = 1U << 25 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_SHPR1_RESERVED = 1U << 26 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_SHPR1_RESERVED = 1U << 27 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_SHPR1_RESERVED = 1U << 28 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_SHPR1_RESERVED = 1U << 29 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_SHPR1_RESERVED = 1U << 30 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_SHPR1_RESERVED = 1U << 31 ;

//---  Register SHPR2: System Handler Priority Register 2
  #define SystemControl_SHPR2 (* ((volatile uint32_t *) (0xe000e000 + 3356)))

  // Field RESERVED: Reserved
    const uint32_t SystemControl_SHPR2_RESERVED = 1U << 0 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_SHPR2_RESERVED = 1U << 1 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_SHPR2_RESERVED = 1U << 2 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_SHPR2_RESERVED = 1U << 3 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_SHPR2_RESERVED = 1U << 4 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_SHPR2_RESERVED = 1U << 5 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_SHPR2_RESERVED = 1U << 6 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_SHPR2_RESERVED = 1U << 7 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_SHPR2_RESERVED = 1U << 8 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_SHPR2_RESERVED = 1U << 9 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_SHPR2_RESERVED = 1U << 10 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_SHPR2_RESERVED = 1U << 11 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_SHPR2_RESERVED = 1U << 12 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_SHPR2_RESERVED = 1U << 13 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_SHPR2_RESERVED = 1U << 14 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_SHPR2_RESERVED = 1U << 15 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_SHPR2_RESERVED = 1U << 16 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_SHPR2_RESERVED = 1U << 17 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_SHPR2_RESERVED = 1U << 18 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_SHPR2_RESERVED = 1U << 19 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_SHPR2_RESERVED = 1U << 20 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_SHPR2_RESERVED = 1U << 21 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_SHPR2_RESERVED = 1U << 22 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_SHPR2_RESERVED = 1U << 23 ;

  // Field PRI_11: Priority of system handler 11, SVCall
    inline uint32_t SystemControl_SHPR2_PRI_11 (const uint32_t inValue) {return (inValue & 0xffU) << 24 ; }

//---  Register SHPR3: System Handler Priority Register 3
  #define SystemControl_SHPR3 (* ((volatile uint32_t *) (0xe000e000 + 3360)))

  // Field RESERVED: Reserved
    const uint32_t SystemControl_SHPR3_RESERVED = 1U << 0 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_SHPR3_RESERVED = 1U << 1 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_SHPR3_RESERVED = 1U << 2 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_SHPR3_RESERVED = 1U << 3 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_SHPR3_RESERVED = 1U << 4 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_SHPR3_RESERVED = 1U << 5 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_SHPR3_RESERVED = 1U << 6 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_SHPR3_RESERVED = 1U << 7 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_SHPR3_RESERVED = 1U << 8 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_SHPR3_RESERVED = 1U << 9 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_SHPR3_RESERVED = 1U << 10 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_SHPR3_RESERVED = 1U << 11 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_SHPR3_RESERVED = 1U << 12 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_SHPR3_RESERVED = 1U << 13 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_SHPR3_RESERVED = 1U << 14 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_SHPR3_RESERVED = 1U << 15 ;

  // Field PRI_14: Priority of system handler 14, PendSV
    inline uint32_t SystemControl_SHPR3_PRI_14 (const uint32_t inValue) {return (inValue & 0xffU) << 16 ; }

  // Field PRI_15: Priority of system handler 15, SysTick exception
    inline uint32_t SystemControl_SHPR3_PRI_15 (const uint32_t inValue) {return (inValue & 0xffU) << 24 ; }

//---  Register SHCSR: System Handler Control and State Register
  #define SystemControl_SHCSR (* ((volatile uint32_t *) (0xe000e000 + 3364)))

  // Field MEMFAULTACT: no description available
    const uint32_t SystemControl_SHCSR_MEMFAULTACT = 1U << 0 ;

  // Field BUSFAULTACT: no description available
    const uint32_t SystemControl_SHCSR_BUSFAULTACT = 1U << 1 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_SHCSR_RESERVED = 1U << 2 ;

  // Field USGFAULTACT: no description available
    const uint32_t SystemControl_SHCSR_USGFAULTACT = 1U << 3 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_SHCSR_RESERVED = 1U << 4 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_SHCSR_RESERVED = 1U << 5 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_SHCSR_RESERVED = 1U << 6 ;

  // Field SVCALLACT: no description available
    const uint32_t SystemControl_SHCSR_SVCALLACT = 1U << 7 ;

  // Field MONITORACT: no description available
    const uint32_t SystemControl_SHCSR_MONITORACT = 1U << 8 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_SHCSR_RESERVED = 1U << 9 ;

  // Field PENDSVACT: no description available
    const uint32_t SystemControl_SHCSR_PENDSVACT = 1U << 10 ;

  // Field SYSTICKACT: no description available
    const uint32_t SystemControl_SHCSR_SYSTICKACT = 1U << 11 ;

  // Field USGFAULTPENDED: no description available
    const uint32_t SystemControl_SHCSR_USGFAULTPENDED = 1U << 12 ;

  // Field MEMFAULTPENDED: no description available
    const uint32_t SystemControl_SHCSR_MEMFAULTPENDED = 1U << 13 ;

  // Field BUSFAULTPENDED: no description available
    const uint32_t SystemControl_SHCSR_BUSFAULTPENDED = 1U << 14 ;

  // Field SVCALLPENDED: no description available
    const uint32_t SystemControl_SHCSR_SVCALLPENDED = 1U << 15 ;

  // Field MEMFAULTENA: no description available
    const uint32_t SystemControl_SHCSR_MEMFAULTENA = 1U << 16 ;

  // Field BUSFAULTENA: no description available
    const uint32_t SystemControl_SHCSR_BUSFAULTENA = 1U << 17 ;

  // Field USGFAULTENA: no description available
    const uint32_t SystemControl_SHCSR_USGFAULTENA = 1U << 18 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_SHCSR_RESERVED = 1U << 19 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_SHCSR_RESERVED = 1U << 20 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_SHCSR_RESERVED = 1U << 21 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_SHCSR_RESERVED = 1U << 22 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_SHCSR_RESERVED = 1U << 23 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_SHCSR_RESERVED = 1U << 24 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_SHCSR_RESERVED = 1U << 25 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_SHCSR_RESERVED = 1U << 26 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_SHCSR_RESERVED = 1U << 27 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_SHCSR_RESERVED = 1U << 28 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_SHCSR_RESERVED = 1U << 29 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_SHCSR_RESERVED = 1U << 30 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_SHCSR_RESERVED = 1U << 31 ;

//---  Register CFSR: Configurable Fault Status Registers
  #define SystemControl_CFSR (* ((volatile uint32_t *) (0xe000e000 + 3368)))

  // Field IACCVIOL: no description available
    const uint32_t SystemControl_CFSR_IACCVIOL = 1U << 0 ;

  // Field DACCVIOL: no description available
    const uint32_t SystemControl_CFSR_DACCVIOL = 1U << 1 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_CFSR_RESERVED = 1U << 2 ;

  // Field MUNSTKERR: no description available
    const uint32_t SystemControl_CFSR_MUNSTKERR = 1U << 3 ;

  // Field MSTKERR: no description available
    const uint32_t SystemControl_CFSR_MSTKERR = 1U << 4 ;

  // Field MLSPERR: no description available
    const uint32_t SystemControl_CFSR_MLSPERR = 1U << 5 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_CFSR_RESERVED = 1U << 6 ;

  // Field MMARVALID: no description available
    const uint32_t SystemControl_CFSR_MMARVALID = 1U << 7 ;

  // Field IBUSERR: no description available
    const uint32_t SystemControl_CFSR_IBUSERR = 1U << 8 ;

  // Field PRECISERR: no description available
    const uint32_t SystemControl_CFSR_PRECISERR = 1U << 9 ;

  // Field IMPRECISERR: no description available
    const uint32_t SystemControl_CFSR_IMPRECISERR = 1U << 10 ;

  // Field UNSTKERR: no description available
    const uint32_t SystemControl_CFSR_UNSTKERR = 1U << 11 ;

  // Field STKERR: no description available
    const uint32_t SystemControl_CFSR_STKERR = 1U << 12 ;

  // Field LSPERR: no description available
    const uint32_t SystemControl_CFSR_LSPERR = 1U << 13 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_CFSR_RESERVED = 1U << 14 ;

  // Field BFARVALID: no description available
    const uint32_t SystemControl_CFSR_BFARVALID = 1U << 15 ;

  // Field UNDEFINSTR: no description available
    const uint32_t SystemControl_CFSR_UNDEFINSTR = 1U << 16 ;

  // Field INVSTATE: no description available
    const uint32_t SystemControl_CFSR_INVSTATE = 1U << 17 ;

  // Field INVPC: no description available
    const uint32_t SystemControl_CFSR_INVPC = 1U << 18 ;

  // Field NOCP: no description available
    const uint32_t SystemControl_CFSR_NOCP = 1U << 19 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_CFSR_RESERVED = 1U << 20 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_CFSR_RESERVED = 1U << 21 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_CFSR_RESERVED = 1U << 22 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_CFSR_RESERVED = 1U << 23 ;

  // Field UNALIGNED: no description available
    const uint32_t SystemControl_CFSR_UNALIGNED = 1U << 24 ;

  // Field DIVBYZERO: no description available
    const uint32_t SystemControl_CFSR_DIVBYZERO = 1U << 25 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_CFSR_RESERVED = 1U << 26 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_CFSR_RESERVED = 1U << 27 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_CFSR_RESERVED = 1U << 28 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_CFSR_RESERVED = 1U << 29 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_CFSR_RESERVED = 1U << 30 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_CFSR_RESERVED = 1U << 31 ;

//---  Register HFSR: HardFault Status register
  #define SystemControl_HFSR (* ((volatile uint32_t *) (0xe000e000 + 3372)))

  // Field RESERVED: Reserved
    const uint32_t SystemControl_HFSR_RESERVED = 1U << 0 ;

  // Field VECTTBL: no description available
    const uint32_t SystemControl_HFSR_VECTTBL = 1U << 1 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_HFSR_RESERVED = 1U << 2 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_HFSR_RESERVED = 1U << 3 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_HFSR_RESERVED = 1U << 4 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_HFSR_RESERVED = 1U << 5 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_HFSR_RESERVED = 1U << 6 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_HFSR_RESERVED = 1U << 7 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_HFSR_RESERVED = 1U << 8 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_HFSR_RESERVED = 1U << 9 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_HFSR_RESERVED = 1U << 10 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_HFSR_RESERVED = 1U << 11 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_HFSR_RESERVED = 1U << 12 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_HFSR_RESERVED = 1U << 13 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_HFSR_RESERVED = 1U << 14 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_HFSR_RESERVED = 1U << 15 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_HFSR_RESERVED = 1U << 16 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_HFSR_RESERVED = 1U << 17 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_HFSR_RESERVED = 1U << 18 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_HFSR_RESERVED = 1U << 19 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_HFSR_RESERVED = 1U << 20 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_HFSR_RESERVED = 1U << 21 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_HFSR_RESERVED = 1U << 22 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_HFSR_RESERVED = 1U << 23 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_HFSR_RESERVED = 1U << 24 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_HFSR_RESERVED = 1U << 25 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_HFSR_RESERVED = 1U << 26 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_HFSR_RESERVED = 1U << 27 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_HFSR_RESERVED = 1U << 28 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_HFSR_RESERVED = 1U << 29 ;

  // Field FORCED: no description available
    const uint32_t SystemControl_HFSR_FORCED = 1U << 30 ;

  // Field DEBUGEVT: no description available
    const uint32_t SystemControl_HFSR_DEBUGEVT = 1U << 31 ;

//---  Register DFSR: Debug Fault Status Register
  #define SystemControl_DFSR (* ((volatile uint32_t *) (0xe000e000 + 3376)))

  // Field HALTED: no description available
    const uint32_t SystemControl_DFSR_HALTED = 1U << 0 ;

  // Field BKPT: no description available
    const uint32_t SystemControl_DFSR_BKPT = 1U << 1 ;

  // Field DWTTRAP: no description available
    const uint32_t SystemControl_DFSR_DWTTRAP = 1U << 2 ;

  // Field VCATCH: no description available
    const uint32_t SystemControl_DFSR_VCATCH = 1U << 3 ;

  // Field EXTERNAL: no description available
    const uint32_t SystemControl_DFSR_EXTERNAL = 1U << 4 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_DFSR_RESERVED = 1U << 5 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_DFSR_RESERVED = 1U << 6 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_DFSR_RESERVED = 1U << 7 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_DFSR_RESERVED = 1U << 8 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_DFSR_RESERVED = 1U << 9 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_DFSR_RESERVED = 1U << 10 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_DFSR_RESERVED = 1U << 11 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_DFSR_RESERVED = 1U << 12 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_DFSR_RESERVED = 1U << 13 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_DFSR_RESERVED = 1U << 14 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_DFSR_RESERVED = 1U << 15 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_DFSR_RESERVED = 1U << 16 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_DFSR_RESERVED = 1U << 17 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_DFSR_RESERVED = 1U << 18 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_DFSR_RESERVED = 1U << 19 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_DFSR_RESERVED = 1U << 20 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_DFSR_RESERVED = 1U << 21 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_DFSR_RESERVED = 1U << 22 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_DFSR_RESERVED = 1U << 23 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_DFSR_RESERVED = 1U << 24 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_DFSR_RESERVED = 1U << 25 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_DFSR_RESERVED = 1U << 26 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_DFSR_RESERVED = 1U << 27 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_DFSR_RESERVED = 1U << 28 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_DFSR_RESERVED = 1U << 29 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_DFSR_RESERVED = 1U << 30 ;

  // Field RESERVED: Reserved
    const uint32_t SystemControl_DFSR_RESERVED = 1U << 31 ;

//---  Register MMFAR: MemManage Address Register
  #define SystemControl_MMFAR (* ((volatile uint32_t *) (0xe000e000 + 3380)))

  // Field ADDRESS: Address of MemManage fault location
    inline uint32_t SystemControl_MMFAR_ADDRESS (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register BFAR: BusFault Address Register
  #define SystemControl_BFAR (* ((volatile uint32_t *) (0xe000e000 + 3384)))

  // Field ADDRESS: Address of the BusFault location
    inline uint32_t SystemControl_BFAR_ADDRESS (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register AFSR: Auxiliary Fault Status Register
  #define SystemControl_AFSR (* ((volatile uint32_t *) (0xe000e000 + 3388)))

  // Field AUXFAULT: Latched version of the AUXFAULT inputs
    inline uint32_t SystemControl_AFSR_AUXFAULT (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//------------------------------------------------------------------------------
// Peripheral TSI0: Touch Sensing Input
//------------------------------------------------------------------------------

//---  Register GENCS: General Control and Status Register
  #define TSI0_GENCS (* ((volatile uint32_t *) (0x40045000 + 0)))

  // Field STPE: no description available
    const uint32_t TSI0_GENCS_STPE = 1U << 0 ;

  // Field STM: Scan Trigger Mode. This bit-field can only be changed if the TSI module is disabled (TSIEN bit = 0).
    const uint32_t TSI0_GENCS_STM = 1U << 1 ;

  // Field RESERVED: Reserved
    const uint32_t TSI0_GENCS_RESERVED = 1U << 2 ;

  // Field RESERVED: no description available
    const uint32_t TSI0_GENCS_RESERVED = 1U << 3 ;

  // Field ESOR: End-of-Scan or Out-of-Range Interrupt select
    const uint32_t TSI0_GENCS_ESOR = 1U << 4 ;

  // Field ERIE: Error Interrupt Enable
    const uint32_t TSI0_GENCS_ERIE = 1U << 5 ;

  // Field TSIIE: Touch Sensing Input Interrupt Module Enable
    const uint32_t TSI0_GENCS_TSIIE = 1U << 6 ;

  // Field TSIEN: Touch Sensing Input Module Enable
    const uint32_t TSI0_GENCS_TSIEN = 1U << 7 ;

  // Field SWTS: Software Trigger Start
    const uint32_t TSI0_GENCS_SWTS = 1U << 8 ;

  // Field SCNIP: Scan In Progress status
    const uint32_t TSI0_GENCS_SCNIP = 1U << 9 ;

  // Field RESERVED: no description available
    inline uint32_t TSI0_GENCS_RESERVED (const uint32_t inValue) {return (inValue & 0x3U) << 10 ; }

  // Field OVRF: Overrun error Flag. This flag is set when a scan trigger occurs while a scan is still in progress. Write "1", when this flag is set, to clear it.
    const uint32_t TSI0_GENCS_OVRF = 1U << 12 ;

  // Field EXTERF: External Electrode error occurred
    const uint32_t TSI0_GENCS_EXTERF = 1U << 13 ;

  // Field OUTRGF: Out of Range Flag.
    const uint32_t TSI0_GENCS_OUTRGF = 1U << 14 ;

  // Field EOSF: End of Scan Flag.
    const uint32_t TSI0_GENCS_EOSF = 1U << 15 ;

  // Field PS: Electrode Oscillator prescaler. .
    inline uint32_t TSI0_GENCS_PS (const uint32_t inValue) {return (inValue & 0x7U) << 16 ; }

  // Field NSCN: Number of Consecutive Scans per Electrode electrode.
    inline uint32_t TSI0_GENCS_NSCN (const uint32_t inValue) {return (inValue & 0x1fU) << 19 ; }

  // Field LPSCNITV: TSI Low Power Mode Scan Interval.
    inline uint32_t TSI0_GENCS_LPSCNITV (const uint32_t inValue) {return (inValue & 0xfU) << 24 ; }

  // Field LPCLKS: Low Power Mode Clock Source Selection.
    const uint32_t TSI0_GENCS_LPCLKS = 1U << 28 ;

  // Field RESERVED: no description available
    inline uint32_t TSI0_GENCS_RESERVED (const uint32_t inValue) {return (inValue & 0x7U) << 29 ; }

//---  Register SCANC: SCAN Control Register
  #define TSI0_SCANC (* ((volatile uint32_t *) (0x40045000 + 4)))

  // Field AMPSC: Active Mode Prescaler
    inline uint32_t TSI0_SCANC_AMPSC (const uint32_t inValue) {return (inValue & 0x7U) << 0 ; }

  // Field AMCLKS: Active Mode Clock Source
    inline uint32_t TSI0_SCANC_AMCLKS (const uint32_t inValue) {return (inValue & 0x3U) << 3 ; }

  // Field RESERVED: no description available
    const uint32_t TSI0_SCANC_RESERVED = 1U << 5 ;

  // Field RESERVED: no description available
    inline uint32_t TSI0_SCANC_RESERVED (const uint32_t inValue) {return (inValue & 0x3U) << 6 ; }

  // Field SMOD: Scan Module
    inline uint32_t TSI0_SCANC_SMOD (const uint32_t inValue) {return (inValue & 0xffU) << 8 ; }

  // Field EXTCHRG: External OSC Charge Current select
    inline uint32_t TSI0_SCANC_EXTCHRG (const uint32_t inValue) {return (inValue & 0xfU) << 16 ; }

  // Field RESERVED: no description available
    inline uint32_t TSI0_SCANC_RESERVED (const uint32_t inValue) {return (inValue & 0xfU) << 20 ; }

  // Field REFCHRG: Ref OSC Charge Current select
    inline uint32_t TSI0_SCANC_REFCHRG (const uint32_t inValue) {return (inValue & 0xfU) << 24 ; }

  // Field RESERVED: no description available
    inline uint32_t TSI0_SCANC_RESERVED (const uint32_t inValue) {return (inValue & 0xfU) << 28 ; }

//---  Register PEN: Pin Enable Register
  #define TSI0_PEN (* ((volatile uint32_t *) (0x40045000 + 8)))

  // Field PEN0: Touch Sensing Input Pin Enable Register 0
    const uint32_t TSI0_PEN_PEN0 = 1U << 0 ;

  // Field PEN1: Touch Sensing Input Pin Enable Register 1
    const uint32_t TSI0_PEN_PEN1 = 1U << 1 ;

  // Field PEN2: Touch Sensing Input Pin Enable Register 2
    const uint32_t TSI0_PEN_PEN2 = 1U << 2 ;

  // Field PEN3: Touch Sensing Input Pin Enable Register 3
    const uint32_t TSI0_PEN_PEN3 = 1U << 3 ;

  // Field PEN4: Touch Sensing Input Pin Enable Register 4
    const uint32_t TSI0_PEN_PEN4 = 1U << 4 ;

  // Field PEN5: Touch Sensing Input Pin Enable Register 5
    const uint32_t TSI0_PEN_PEN5 = 1U << 5 ;

  // Field PEN6: Touch Sensing Input Pin Enable Register 6
    const uint32_t TSI0_PEN_PEN6 = 1U << 6 ;

  // Field PEN7: Touch Sensing Input Pin Enable Register 7
    const uint32_t TSI0_PEN_PEN7 = 1U << 7 ;

  // Field PEN8: Touch Sensing Input Pin Enable Register 8
    const uint32_t TSI0_PEN_PEN8 = 1U << 8 ;

  // Field PEN9: Touch Sensing Input Pin Enable Register 9
    const uint32_t TSI0_PEN_PEN9 = 1U << 9 ;

  // Field PEN10: Touch Sensing Input Pin Enable Register 10
    const uint32_t TSI0_PEN_PEN10 = 1U << 10 ;

  // Field PEN11: Touch Sensing Input Pin Enable Register 11
    const uint32_t TSI0_PEN_PEN11 = 1U << 11 ;

  // Field PEN12: Touch Sensing Input Pin Enable Register 12
    const uint32_t TSI0_PEN_PEN12 = 1U << 12 ;

  // Field PEN13: Touch Sensing Input Pin Enable Register 13
    const uint32_t TSI0_PEN_PEN13 = 1U << 13 ;

  // Field PEN14: Touch Sensing Input Pin Enable Register 14
    const uint32_t TSI0_PEN_PEN14 = 1U << 14 ;

  // Field PEN15: Touch Sensing Input Pin Enable Register 15
    const uint32_t TSI0_PEN_PEN15 = 1U << 15 ;

  // Field LPSP: Low Power Scan Pin
    inline uint32_t TSI0_PEN_LPSP (const uint32_t inValue) {return (inValue & 0xfU) << 16 ; }

  // Field RESERVED: no description available
    inline uint32_t TSI0_PEN_RESERVED (const uint32_t inValue) {return (inValue & 0xfffU) << 20 ; }

//---  Register WUCNTR: Wake-Up Channel Counter Register
  #define TSI0_WUCNTR (* ((volatile uint32_t *) (0x40045000 + 12)))

  // Field WUCNT: TouchSensing wake-up Channel 16bit counter value
    inline uint32_t TSI0_WUCNTR_WUCNT (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

  // Field RESERVED: no description available
    inline uint32_t TSI0_WUCNTR_RESERVED (const uint32_t inValue) {return (inValue & 0xffffU) << 16 ; }

//---  Registers CNTR(1,3,5,7,9,11,13,15): Counter Register
  #define TSI0_CNTR(idx) (* ((volatile uint32_t *) (0x40045000 + 0x100 + (idx) * 0x4)))
  #define TSI0_CNTR1 (* ((volatile uint32_t *) (0x40045000 + 0x100 + 0 * 0x4)))
  #define TSI0_CNTR3 (* ((volatile uint32_t *) (0x40045000 + 0x100 + 1 * 0x4)))
  #define TSI0_CNTR5 (* ((volatile uint32_t *) (0x40045000 + 0x100 + 2 * 0x4)))
  #define TSI0_CNTR7 (* ((volatile uint32_t *) (0x40045000 + 0x100 + 3 * 0x4)))
  #define TSI0_CNTR9 (* ((volatile uint32_t *) (0x40045000 + 0x100 + 4 * 0x4)))
  #define TSI0_CNTR11 (* ((volatile uint32_t *) (0x40045000 + 0x100 + 5 * 0x4)))
  #define TSI0_CNTR13 (* ((volatile uint32_t *) (0x40045000 + 0x100 + 6 * 0x4)))
  #define TSI0_CNTR15 (* ((volatile uint32_t *) (0x40045000 + 0x100 + 7 * 0x4)))

  // Field CTN1: TouchSensing Channel n-1 16-bit counter value
    inline uint32_t TSI0_CNTR_CTN1 (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

  // Field CTN: TouchSensing Channel n 16-bit counter value
    inline uint32_t TSI0_CNTR_CTN (const uint32_t inValue) {return (inValue & 0xffffU) << 16 ; }

//---  Register THRESHOLD: Low Power Channel Threshold Register
  #define TSI0_THRESHOLD (* ((volatile uint32_t *) (0x40045000 + 288)))

  // Field HTHH: Touch Sensing Channel High Threshold value
    inline uint32_t TSI0_THRESHOLD_HTHH (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

  // Field LTHH: Touch Sensing Channel Low Threshold value
    inline uint32_t TSI0_THRESHOLD_LTHH (const uint32_t inValue) {return (inValue & 0xffffU) << 16 ; }

//------------------------------------------------------------------------------
// PERIPHERAL GROUP: UART
//        UART0 at 0x4006a000
//        UART1 at 0x4006b000
//        UART2 at 0x4006c000
//        UART3 at 0x4006d000
//        UART4 at 0x400ea000
//------------------------------------------------------------------------------

static const uint32_t kBaseAddress_UART [5] = {0x4006a000, 0x4006b000, 0x4006c000, 0x4006d000, 0x400ea000} ;

//------------------------------------------------------------------------------

//---  Register BDH: UART Baud Rate Registers:High
  #define UART_BDH(group) (* ((volatile uint8_t *) (kBaseAddress_BDH [group] + 0x0)))
  #define UART0_BDH (* ((volatile uint8_t *) (0x4006a000 + 0x0)))
  #define UART1_BDH (* ((volatile uint8_t *) (0x4006b000 + 0x0)))
  #define UART2_BDH (* ((volatile uint8_t *) (0x4006c000 + 0x0)))
  #define UART3_BDH (* ((volatile uint8_t *) (0x4006d000 + 0x0)))
  #define UART4_BDH (* ((volatile uint8_t *) (0x400ea000 + 0x0)))

  // Field SBR: UART Baud Rate Bits
    inline uint8_t UART_BDH_SBR (const uint8_t inValue) {return (inValue & 0x1fU) << 0 ; }

  // Field RESERVED: no description available
    const uint8_t UART_BDH_RESERVED = 1U << 5 ;

  // Field RXEDGIE: RxD Input Active Edge Interrupt Enable
    const uint8_t UART_BDH_RXEDGIE = 1U << 6 ;

  // Field LBKDIE: LIN Break Detect Interrupt Enable
    const uint8_t UART_BDH_LBKDIE = 1U << 7 ;

//---  Register BDL: UART Baud Rate Registers: Low
  #define UART_BDL(group) (* ((volatile uint8_t *) (kBaseAddress_BDL [group] + 0x1)))
  #define UART0_BDL (* ((volatile uint8_t *) (0x4006a000 + 0x1)))
  #define UART1_BDL (* ((volatile uint8_t *) (0x4006b000 + 0x1)))
  #define UART2_BDL (* ((volatile uint8_t *) (0x4006c000 + 0x1)))
  #define UART3_BDL (* ((volatile uint8_t *) (0x4006d000 + 0x1)))
  #define UART4_BDL (* ((volatile uint8_t *) (0x400ea000 + 0x1)))

  // Field SBR: UART Baud Rate Bits
    inline uint8_t UART_BDL_SBR (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register C1: UART Control Register 1
  #define UART_C1(group) (* ((volatile uint8_t *) (kBaseAddress_C1 [group] + 0x2)))
  #define UART0_C1 (* ((volatile uint8_t *) (0x4006a000 + 0x2)))
  #define UART1_C1 (* ((volatile uint8_t *) (0x4006b000 + 0x2)))
  #define UART2_C1 (* ((volatile uint8_t *) (0x4006c000 + 0x2)))
  #define UART3_C1 (* ((volatile uint8_t *) (0x4006d000 + 0x2)))
  #define UART4_C1 (* ((volatile uint8_t *) (0x400ea000 + 0x2)))

  // Field PT: Parity Type
    const uint8_t UART_C1_PT = 1U << 0 ;

  // Field PE: Parity Enable
    const uint8_t UART_C1_PE = 1U << 1 ;

  // Field ILT: Idle Line Type Select
    const uint8_t UART_C1_ILT = 1U << 2 ;

  // Field WAKE: Receiver Wakeup Method Select
    const uint8_t UART_C1_WAKE = 1U << 3 ;

  // Field M: 9-bit or 8-bit Mode Select
    const uint8_t UART_C1_M = 1U << 4 ;

  // Field RSRC: Receiver Source Select
    const uint8_t UART_C1_RSRC = 1U << 5 ;

  // Field UARTSWAI: UART Stops in Wait Mode
    const uint8_t UART_C1_UARTSWAI = 1U << 6 ;

  // Field LOOPS: Loop Mode Select
    const uint8_t UART_C1_LOOPS = 1U << 7 ;

//---  Register C2: UART Control Register 2
  #define UART_C2(group) (* ((volatile uint8_t *) (kBaseAddress_C2 [group] + 0x3)))
  #define UART0_C2 (* ((volatile uint8_t *) (0x4006a000 + 0x3)))
  #define UART1_C2 (* ((volatile uint8_t *) (0x4006b000 + 0x3)))
  #define UART2_C2 (* ((volatile uint8_t *) (0x4006c000 + 0x3)))
  #define UART3_C2 (* ((volatile uint8_t *) (0x4006d000 + 0x3)))
  #define UART4_C2 (* ((volatile uint8_t *) (0x400ea000 + 0x3)))

  // Field SBK: Send Break
    const uint8_t UART_C2_SBK = 1U << 0 ;

  // Field RWU: Receiver Wakeup Control
    const uint8_t UART_C2_RWU = 1U << 1 ;

  // Field RE: Receiver Enable
    const uint8_t UART_C2_RE = 1U << 2 ;

  // Field TE: Transmitter Enable
    const uint8_t UART_C2_TE = 1U << 3 ;

  // Field ILIE: Idle Line Interrupt Enable
    const uint8_t UART_C2_ILIE = 1U << 4 ;

  // Field RIE: Receiver Full Interrupt or DMA Transfer Enable
    const uint8_t UART_C2_RIE = 1U << 5 ;

  // Field TCIE: Transmission Complete Interrupt Enable
    const uint8_t UART_C2_TCIE = 1U << 6 ;

  // Field TIE: Transmitter Interrupt or DMA Transfer Enable.
    const uint8_t UART_C2_TIE = 1U << 7 ;

//---  Register S1: UART Status Register 1
  #define UART_S1(group) (* ((volatile uint8_t *) (kBaseAddress_S1 [group] + 0x4)))
  #define UART0_S1 (* ((volatile uint8_t *) (0x4006a000 + 0x4)))
  #define UART1_S1 (* ((volatile uint8_t *) (0x4006b000 + 0x4)))
  #define UART2_S1 (* ((volatile uint8_t *) (0x4006c000 + 0x4)))
  #define UART3_S1 (* ((volatile uint8_t *) (0x4006d000 + 0x4)))
  #define UART4_S1 (* ((volatile uint8_t *) (0x400ea000 + 0x4)))

  // Field PF: Parity Error Flag
    const uint8_t UART_S1_PF = 1U << 0 ;

  // Field FE: Framing Error Flag
    const uint8_t UART_S1_FE = 1U << 1 ;

  // Field NF: Noise Flag
    const uint8_t UART_S1_NF = 1U << 2 ;

  // Field OR: Receiver Overrun Flag
    const uint8_t UART_S1_OR = 1U << 3 ;

  // Field IDLE: Idle Line Flag
    const uint8_t UART_S1_IDLE = 1U << 4 ;

  // Field RDRF: Receive Data Register Full Flag
    const uint8_t UART_S1_RDRF = 1U << 5 ;

  // Field TC: Transmit Complete Flag
    const uint8_t UART_S1_TC = 1U << 6 ;

  // Field TDRE: Transmit Data Register Empty Flag
    const uint8_t UART_S1_TDRE = 1U << 7 ;

//---  Register S2: UART Status Register 2
  #define UART_S2(group) (* ((volatile uint8_t *) (kBaseAddress_S2 [group] + 0x5)))
  #define UART0_S2 (* ((volatile uint8_t *) (0x4006a000 + 0x5)))
  #define UART1_S2 (* ((volatile uint8_t *) (0x4006b000 + 0x5)))
  #define UART2_S2 (* ((volatile uint8_t *) (0x4006c000 + 0x5)))
  #define UART3_S2 (* ((volatile uint8_t *) (0x4006d000 + 0x5)))
  #define UART4_S2 (* ((volatile uint8_t *) (0x400ea000 + 0x5)))

  // Field RAF: Receiver Active Flag
    const uint8_t UART_S2_RAF = 1U << 0 ;

  // Field LBKDE: LIN Break Detection Enable
    const uint8_t UART_S2_LBKDE = 1U << 1 ;

  // Field BRK13: Break Transmit Character Length
    const uint8_t UART_S2_BRK13 = 1U << 2 ;

  // Field RWUID: Receive Wakeup Idle Detect
    const uint8_t UART_S2_RWUID = 1U << 3 ;

  // Field RXINV: Receive Data Inversion
    const uint8_t UART_S2_RXINV = 1U << 4 ;

  // Field MSBF: Most Significant Bit First
    const uint8_t UART_S2_MSBF = 1U << 5 ;

  // Field RXEDGIF: RxD Pin Active Edge Interrupt Flag
    const uint8_t UART_S2_RXEDGIF = 1U << 6 ;

  // Field LBKDIF: LIN Break Detect Interrupt Flag
    const uint8_t UART_S2_LBKDIF = 1U << 7 ;

//---  Register C3: UART Control Register 3
  #define UART_C3(group) (* ((volatile uint8_t *) (kBaseAddress_C3 [group] + 0x6)))
  #define UART0_C3 (* ((volatile uint8_t *) (0x4006a000 + 0x6)))
  #define UART1_C3 (* ((volatile uint8_t *) (0x4006b000 + 0x6)))
  #define UART2_C3 (* ((volatile uint8_t *) (0x4006c000 + 0x6)))
  #define UART3_C3 (* ((volatile uint8_t *) (0x4006d000 + 0x6)))
  #define UART4_C3 (* ((volatile uint8_t *) (0x400ea000 + 0x6)))

  // Field PEIE: Parity Error Interrupt Enable
    const uint8_t UART_C3_PEIE = 1U << 0 ;

  // Field FEIE: Framing Error Interrupt Enable
    const uint8_t UART_C3_FEIE = 1U << 1 ;

  // Field NEIE: Noise Error Interrupt Enable
    const uint8_t UART_C3_NEIE = 1U << 2 ;

  // Field ORIE: Overrun Error Interrupt Enable
    const uint8_t UART_C3_ORIE = 1U << 3 ;

  // Field TXINV: Transmit Data Inversion.
    const uint8_t UART_C3_TXINV = 1U << 4 ;

  // Field TXDIR: Transmitter Pin Data Direction in Single-Wire mode
    const uint8_t UART_C3_TXDIR = 1U << 5 ;

  // Field T8: Transmit Bit 8
    const uint8_t UART_C3_T8 = 1U << 6 ;

  // Field R8: Received Bit 8
    const uint8_t UART_C3_R8 = 1U << 7 ;

//---  Register D: UART Data Register
  #define UART_D(group) (* ((volatile uint8_t *) (kBaseAddress_D [group] + 0x7)))
  #define UART0_D (* ((volatile uint8_t *) (0x4006a000 + 0x7)))
  #define UART1_D (* ((volatile uint8_t *) (0x4006b000 + 0x7)))
  #define UART2_D (* ((volatile uint8_t *) (0x4006c000 + 0x7)))
  #define UART3_D (* ((volatile uint8_t *) (0x4006d000 + 0x7)))
  #define UART4_D (* ((volatile uint8_t *) (0x400ea000 + 0x7)))

  // Field RT: no description available
    inline uint8_t UART_D_RT (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register MA1: UART Match Address Registers 1
  #define UART_MA1(group) (* ((volatile uint8_t *) (kBaseAddress_MA1 [group] + 0x8)))
  #define UART0_MA1 (* ((volatile uint8_t *) (0x4006a000 + 0x8)))
  #define UART1_MA1 (* ((volatile uint8_t *) (0x4006b000 + 0x8)))
  #define UART2_MA1 (* ((volatile uint8_t *) (0x4006c000 + 0x8)))
  #define UART3_MA1 (* ((volatile uint8_t *) (0x4006d000 + 0x8)))
  #define UART4_MA1 (* ((volatile uint8_t *) (0x400ea000 + 0x8)))

  // Field MA: Match Address
    inline uint8_t UART_MA1_MA (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register MA2: UART Match Address Registers 2
  #define UART_MA2(group) (* ((volatile uint8_t *) (kBaseAddress_MA2 [group] + 0x9)))
  #define UART0_MA2 (* ((volatile uint8_t *) (0x4006a000 + 0x9)))
  #define UART1_MA2 (* ((volatile uint8_t *) (0x4006b000 + 0x9)))
  #define UART2_MA2 (* ((volatile uint8_t *) (0x4006c000 + 0x9)))
  #define UART3_MA2 (* ((volatile uint8_t *) (0x4006d000 + 0x9)))
  #define UART4_MA2 (* ((volatile uint8_t *) (0x400ea000 + 0x9)))

  // Field MA: Match Address
    inline uint8_t UART_MA2_MA (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register C4: UART Control Register 4
  #define UART_C4(group) (* ((volatile uint8_t *) (kBaseAddress_C4 [group] + 0xa)))
  #define UART0_C4 (* ((volatile uint8_t *) (0x4006a000 + 0xa)))
  #define UART1_C4 (* ((volatile uint8_t *) (0x4006b000 + 0xa)))
  #define UART2_C4 (* ((volatile uint8_t *) (0x4006c000 + 0xa)))
  #define UART3_C4 (* ((volatile uint8_t *) (0x4006d000 + 0xa)))
  #define UART4_C4 (* ((volatile uint8_t *) (0x400ea000 + 0xa)))

  // Field BRFA: Baud Rate Fine Adjust
    inline uint8_t UART_C4_BRFA (const uint8_t inValue) {return (inValue & 0x1fU) << 0 ; }

  // Field M10: 10-bit Mode select
    const uint8_t UART_C4_M10 = 1U << 5 ;

  // Field MAEN2: Match Address Mode Enable 2
    const uint8_t UART_C4_MAEN2 = 1U << 6 ;

  // Field MAEN1: Match Address Mode Enable 1
    const uint8_t UART_C4_MAEN1 = 1U << 7 ;

//---  Register C5: UART Control Register 5
  #define UART_C5(group) (* ((volatile uint8_t *) (kBaseAddress_C5 [group] + 0xb)))
  #define UART0_C5 (* ((volatile uint8_t *) (0x4006a000 + 0xb)))
  #define UART1_C5 (* ((volatile uint8_t *) (0x4006b000 + 0xb)))
  #define UART2_C5 (* ((volatile uint8_t *) (0x4006c000 + 0xb)))
  #define UART3_C5 (* ((volatile uint8_t *) (0x4006d000 + 0xb)))
  #define UART4_C5 (* ((volatile uint8_t *) (0x400ea000 + 0xb)))

  // Field RESERVED: no description available
    inline uint8_t UART_C5_RESERVED (const uint8_t inValue) {return (inValue & 0x1fU) << 0 ; }

  // Field RDMAS: Receiver Full DMA Select
    const uint8_t UART_C5_RDMAS = 1U << 5 ;

  // Field RESERVED: no description available
    const uint8_t UART_C5_RESERVED = 1U << 6 ;

  // Field TDMAS: Transmitter DMA Select
    const uint8_t UART_C5_TDMAS = 1U << 7 ;

//---  Register ED: UART Extended Data Register
  #define UART_ED(group) (* ((volatile uint8_t *) (kBaseAddress_ED [group] + 0xc)))
  #define UART0_ED (* ((volatile uint8_t *) (0x4006a000 + 0xc)))
  #define UART1_ED (* ((volatile uint8_t *) (0x4006b000 + 0xc)))
  #define UART2_ED (* ((volatile uint8_t *) (0x4006c000 + 0xc)))
  #define UART3_ED (* ((volatile uint8_t *) (0x4006d000 + 0xc)))
  #define UART4_ED (* ((volatile uint8_t *) (0x400ea000 + 0xc)))

  // Field RESERVED: no description available
    inline uint8_t UART_ED_RESERVED (const uint8_t inValue) {return (inValue & 0x3fU) << 0 ; }

  // Field PARITYE: no description available
    const uint8_t UART_ED_PARITYE = 1U << 6 ;

  // Field NOISY: no description available
    const uint8_t UART_ED_NOISY = 1U << 7 ;

//---  Register MODEM: UART Modem Register
  #define UART_MODEM(group) (* ((volatile uint8_t *) (kBaseAddress_MODEM [group] + 0xd)))
  #define UART0_MODEM (* ((volatile uint8_t *) (0x4006a000 + 0xd)))
  #define UART1_MODEM (* ((volatile uint8_t *) (0x4006b000 + 0xd)))
  #define UART2_MODEM (* ((volatile uint8_t *) (0x4006c000 + 0xd)))
  #define UART3_MODEM (* ((volatile uint8_t *) (0x4006d000 + 0xd)))
  #define UART4_MODEM (* ((volatile uint8_t *) (0x400ea000 + 0xd)))

  // Field TXCTSE: Transmitter clear-to-send enable
    const uint8_t UART_MODEM_TXCTSE = 1U << 0 ;

  // Field TXRTSE: Transmitter request-to-send enable
    const uint8_t UART_MODEM_TXRTSE = 1U << 1 ;

  // Field TXRTSPOL: Transmitter request-to-send polarity
    const uint8_t UART_MODEM_TXRTSPOL = 1U << 2 ;

  // Field RXRTSE: Receiver request-to-send enable
    const uint8_t UART_MODEM_RXRTSE = 1U << 3 ;

  // Field RESERVED: no description available
    inline uint8_t UART_MODEM_RESERVED (const uint8_t inValue) {return (inValue & 0xfU) << 4 ; }

//---  Register IR: UART Infrared Register
  #define UART_IR(group) (* ((volatile uint8_t *) (kBaseAddress_IR [group] + 0xe)))
  #define UART0_IR (* ((volatile uint8_t *) (0x4006a000 + 0xe)))
  #define UART1_IR (* ((volatile uint8_t *) (0x4006b000 + 0xe)))
  #define UART2_IR (* ((volatile uint8_t *) (0x4006c000 + 0xe)))
  #define UART3_IR (* ((volatile uint8_t *) (0x4006d000 + 0xe)))
  #define UART4_IR (* ((volatile uint8_t *) (0x400ea000 + 0xe)))

  // Field TNP: Transmitter narrow pulse
    inline uint8_t UART_IR_TNP (const uint8_t inValue) {return (inValue & 0x3U) << 0 ; }

  // Field IREN: Infrared enable
    const uint8_t UART_IR_IREN = 1U << 2 ;

  // Field RESERVED: no description available
    inline uint8_t UART_IR_RESERVED (const uint8_t inValue) {return (inValue & 0x1fU) << 3 ; }

//---  Register PFIFO: UART FIFO Parameters
  #define UART_PFIFO(group) (* ((volatile uint8_t *) (kBaseAddress_PFIFO [group] + 0x10)))
  #define UART0_PFIFO (* ((volatile uint8_t *) (0x4006a000 + 0x10)))
  #define UART1_PFIFO (* ((volatile uint8_t *) (0x4006b000 + 0x10)))
  #define UART2_PFIFO (* ((volatile uint8_t *) (0x4006c000 + 0x10)))
  #define UART3_PFIFO (* ((volatile uint8_t *) (0x4006d000 + 0x10)))
  #define UART4_PFIFO (* ((volatile uint8_t *) (0x400ea000 + 0x10)))

  // Field RXFIFOSIZE: Receive FIFO. Buffer Depth
    inline uint8_t UART_PFIFO_RXFIFOSIZE (const uint8_t inValue) {return (inValue & 0x7U) << 0 ; }

  // Field RXFE: Receive FIFO Enable
    const uint8_t UART_PFIFO_RXFE = 1U << 3 ;

  // Field TXFIFOSIZE: Transmit FIFO. Buffer Depth
    inline uint8_t UART_PFIFO_TXFIFOSIZE (const uint8_t inValue) {return (inValue & 0x7U) << 4 ; }

  // Field TXFE: Transmit FIFO Enable
    const uint8_t UART_PFIFO_TXFE = 1U << 7 ;

//---  Register CFIFO: UART FIFO Control Register
  #define UART_CFIFO(group) (* ((volatile uint8_t *) (kBaseAddress_CFIFO [group] + 0x11)))
  #define UART0_CFIFO (* ((volatile uint8_t *) (0x4006a000 + 0x11)))
  #define UART1_CFIFO (* ((volatile uint8_t *) (0x4006b000 + 0x11)))
  #define UART2_CFIFO (* ((volatile uint8_t *) (0x4006c000 + 0x11)))
  #define UART3_CFIFO (* ((volatile uint8_t *) (0x4006d000 + 0x11)))
  #define UART4_CFIFO (* ((volatile uint8_t *) (0x400ea000 + 0x11)))

  // Field RXUFE: Receive FIFO Underflow Interrupt Enable
    const uint8_t UART_CFIFO_RXUFE = 1U << 0 ;

  // Field TXOFE: Transmit FIFO Overflow Interrupt Enable
    const uint8_t UART_CFIFO_TXOFE = 1U << 1 ;

  // Field RESERVED: no description available
    inline uint8_t UART_CFIFO_RESERVED (const uint8_t inValue) {return (inValue & 0xfU) << 2 ; }

  // Field RXFLUSH: Receive FIFO/Buffer Flush
    const uint8_t UART_CFIFO_RXFLUSH = 1U << 6 ;

  // Field TXFLUSH: Transmit FIFO/Buffer Flush
    const uint8_t UART_CFIFO_TXFLUSH = 1U << 7 ;

//---  Register SFIFO: UART FIFO Status Register
  #define UART_SFIFO(group) (* ((volatile uint8_t *) (kBaseAddress_SFIFO [group] + 0x12)))
  #define UART0_SFIFO (* ((volatile uint8_t *) (0x4006a000 + 0x12)))
  #define UART1_SFIFO (* ((volatile uint8_t *) (0x4006b000 + 0x12)))
  #define UART2_SFIFO (* ((volatile uint8_t *) (0x4006c000 + 0x12)))
  #define UART3_SFIFO (* ((volatile uint8_t *) (0x4006d000 + 0x12)))
  #define UART4_SFIFO (* ((volatile uint8_t *) (0x400ea000 + 0x12)))

  // Field RXUF: Receiver Buffer Underflow Flag
    const uint8_t UART_SFIFO_RXUF = 1U << 0 ;

  // Field TXOF: Transmitter Buffer Overflow Flag
    const uint8_t UART_SFIFO_TXOF = 1U << 1 ;

  // Field RESERVED: no description available
    inline uint8_t UART_SFIFO_RESERVED (const uint8_t inValue) {return (inValue & 0xfU) << 2 ; }

  // Field RXEMPT: Receive Buffer/FIFO Empty
    const uint8_t UART_SFIFO_RXEMPT = 1U << 6 ;

  // Field TXEMPT: Transmit Buffer/FIFO Empty
    const uint8_t UART_SFIFO_TXEMPT = 1U << 7 ;

//---  Register TWFIFO: UART FIFO Transmit Watermark
  #define UART_TWFIFO(group) (* ((volatile uint8_t *) (kBaseAddress_TWFIFO [group] + 0x13)))
  #define UART0_TWFIFO (* ((volatile uint8_t *) (0x4006a000 + 0x13)))
  #define UART1_TWFIFO (* ((volatile uint8_t *) (0x4006b000 + 0x13)))
  #define UART2_TWFIFO (* ((volatile uint8_t *) (0x4006c000 + 0x13)))
  #define UART3_TWFIFO (* ((volatile uint8_t *) (0x4006d000 + 0x13)))
  #define UART4_TWFIFO (* ((volatile uint8_t *) (0x400ea000 + 0x13)))

  // Field TXWATER: Transmit Watermark
    inline uint8_t UART_TWFIFO_TXWATER (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register TCFIFO: UART FIFO Transmit Count
  #define UART_TCFIFO(group) (* ((volatile uint8_t *) (kBaseAddress_TCFIFO [group] + 0x14)))
  #define UART0_TCFIFO (* ((volatile uint8_t *) (0x4006a000 + 0x14)))
  #define UART1_TCFIFO (* ((volatile uint8_t *) (0x4006b000 + 0x14)))
  #define UART2_TCFIFO (* ((volatile uint8_t *) (0x4006c000 + 0x14)))
  #define UART3_TCFIFO (* ((volatile uint8_t *) (0x4006d000 + 0x14)))
  #define UART4_TCFIFO (* ((volatile uint8_t *) (0x400ea000 + 0x14)))

  // Field TXCOUNT: Transmit Counter
    inline uint8_t UART_TCFIFO_TXCOUNT (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register RWFIFO: UART FIFO Receive Watermark
  #define UART_RWFIFO(group) (* ((volatile uint8_t *) (kBaseAddress_RWFIFO [group] + 0x15)))
  #define UART0_RWFIFO (* ((volatile uint8_t *) (0x4006a000 + 0x15)))
  #define UART1_RWFIFO (* ((volatile uint8_t *) (0x4006b000 + 0x15)))
  #define UART2_RWFIFO (* ((volatile uint8_t *) (0x4006c000 + 0x15)))
  #define UART3_RWFIFO (* ((volatile uint8_t *) (0x4006d000 + 0x15)))
  #define UART4_RWFIFO (* ((volatile uint8_t *) (0x400ea000 + 0x15)))

  // Field RXWATER: Receive Watermark
    inline uint8_t UART_RWFIFO_RXWATER (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register RCFIFO: UART FIFO Receive Count
  #define UART_RCFIFO(group) (* ((volatile uint8_t *) (kBaseAddress_RCFIFO [group] + 0x16)))
  #define UART0_RCFIFO (* ((volatile uint8_t *) (0x4006a000 + 0x16)))
  #define UART1_RCFIFO (* ((volatile uint8_t *) (0x4006b000 + 0x16)))
  #define UART2_RCFIFO (* ((volatile uint8_t *) (0x4006c000 + 0x16)))
  #define UART3_RCFIFO (* ((volatile uint8_t *) (0x4006d000 + 0x16)))
  #define UART4_RCFIFO (* ((volatile uint8_t *) (0x400ea000 + 0x16)))

  // Field RXCOUNT: Receive Counter
    inline uint8_t UART_RCFIFO_RXCOUNT (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register C7816: UART 7816 Control Register
  #define UART_C7816(group) (* ((volatile uint8_t *) (kBaseAddress_C7816 [group] + 0x18)))
  #define UART0_C7816 (* ((volatile uint8_t *) (0x4006a000 + 0x18)))
  #define UART1_C7816 (* ((volatile uint8_t *) (0x4006b000 + 0x18)))
  #define UART2_C7816 (* ((volatile uint8_t *) (0x4006c000 + 0x18)))
  #define UART3_C7816 (* ((volatile uint8_t *) (0x4006d000 + 0x18)))
  #define UART4_C7816 (* ((volatile uint8_t *) (0x400ea000 + 0x18)))

  // Field ISO_7816E: ISO-7816 Functionality Enabled
    const uint8_t UART_C7816_ISO_7816E = 1U << 0 ;

  // Field TTYPE: Transfer Type
    const uint8_t UART_C7816_TTYPE = 1U << 1 ;

  // Field INIT: Detect Initial Character
    const uint8_t UART_C7816_INIT = 1U << 2 ;

  // Field ANACK: Generate NACK on Error
    const uint8_t UART_C7816_ANACK = 1U << 3 ;

  // Field ONACK: Generate NACK on Overflow
    const uint8_t UART_C7816_ONACK = 1U << 4 ;

  // Field RESERVED: no description available
    inline uint8_t UART_C7816_RESERVED (const uint8_t inValue) {return (inValue & 0x7U) << 5 ; }

//---  Register IE7816: UART 7816 Interrupt Enable Register
  #define UART_IE7816(group) (* ((volatile uint8_t *) (kBaseAddress_IE7816 [group] + 0x19)))
  #define UART0_IE7816 (* ((volatile uint8_t *) (0x4006a000 + 0x19)))
  #define UART1_IE7816 (* ((volatile uint8_t *) (0x4006b000 + 0x19)))
  #define UART2_IE7816 (* ((volatile uint8_t *) (0x4006c000 + 0x19)))
  #define UART3_IE7816 (* ((volatile uint8_t *) (0x4006d000 + 0x19)))
  #define UART4_IE7816 (* ((volatile uint8_t *) (0x400ea000 + 0x19)))

  // Field RXTE: Receive Threshold Exceeded Interrupt Enable
    const uint8_t UART_IE7816_RXTE = 1U << 0 ;

  // Field TXTE: Transmit Threshold Exceeded Interrupt Enable
    const uint8_t UART_IE7816_TXTE = 1U << 1 ;

  // Field GTVE: Guard Timer Violated Interrupt Enable
    const uint8_t UART_IE7816_GTVE = 1U << 2 ;

  // Field RESERVED: no description available
    const uint8_t UART_IE7816_RESERVED = 1U << 3 ;

  // Field INITDE: Initial Character Detected Interrupt Enable
    const uint8_t UART_IE7816_INITDE = 1U << 4 ;

  // Field BWTE: Block Wait Timer Interrupt Enable
    const uint8_t UART_IE7816_BWTE = 1U << 5 ;

  // Field CWTE: Character Wait Timer Interrupt Enable
    const uint8_t UART_IE7816_CWTE = 1U << 6 ;

  // Field WTE: Wait Timer Interrupt Enable
    const uint8_t UART_IE7816_WTE = 1U << 7 ;

//---  Register IS7816: UART 7816 Interrupt Status Register
  #define UART_IS7816(group) (* ((volatile uint8_t *) (kBaseAddress_IS7816 [group] + 0x1a)))
  #define UART0_IS7816 (* ((volatile uint8_t *) (0x4006a000 + 0x1a)))
  #define UART1_IS7816 (* ((volatile uint8_t *) (0x4006b000 + 0x1a)))
  #define UART2_IS7816 (* ((volatile uint8_t *) (0x4006c000 + 0x1a)))
  #define UART3_IS7816 (* ((volatile uint8_t *) (0x4006d000 + 0x1a)))
  #define UART4_IS7816 (* ((volatile uint8_t *) (0x400ea000 + 0x1a)))

  // Field RXT: Receive Threshold Exceeded Interrupt
    const uint8_t UART_IS7816_RXT = 1U << 0 ;

  // Field TXT: Transmit Threshold Exceeded Interrupt
    const uint8_t UART_IS7816_TXT = 1U << 1 ;

  // Field GTV: Guard Timer Violated Interrupt
    const uint8_t UART_IS7816_GTV = 1U << 2 ;

  // Field RESERVED: no description available
    const uint8_t UART_IS7816_RESERVED = 1U << 3 ;

  // Field INITD: Initial Character Detected Interrupt
    const uint8_t UART_IS7816_INITD = 1U << 4 ;

  // Field BWT: Block Wait Timer Interrupt
    const uint8_t UART_IS7816_BWT = 1U << 5 ;

  // Field CWT: Character Wait Timer Interrupt
    const uint8_t UART_IS7816_CWT = 1U << 6 ;

  // Field WT: Wait Timer Interrupt
    const uint8_t UART_IS7816_WT = 1U << 7 ;

//---  Register WP7816T1: UART 7816 Wait Parameter Register
  #define UART_WP7816T1(group) (* ((volatile uint8_t *) (kBaseAddress_WP7816T1 [group] + 0x1b)))
  #define UART0_WP7816T1 (* ((volatile uint8_t *) (0x4006a000 + 0x1b)))
  #define UART1_WP7816T1 (* ((volatile uint8_t *) (0x4006b000 + 0x1b)))
  #define UART2_WP7816T1 (* ((volatile uint8_t *) (0x4006c000 + 0x1b)))
  #define UART3_WP7816T1 (* ((volatile uint8_t *) (0x4006d000 + 0x1b)))
  #define UART4_WP7816T1 (* ((volatile uint8_t *) (0x400ea000 + 0x1b)))

  // Field BWI: Block Wait Time Integer(C7816[TTYPE] = 1)
    inline uint8_t UART_WP7816T1_BWI (const uint8_t inValue) {return (inValue & 0xfU) << 0 ; }

  // Field CWI: Character Wait Time Integer (C7816[TTYPE] = 1)
    inline uint8_t UART_WP7816T1_CWI (const uint8_t inValue) {return (inValue & 0xfU) << 4 ; }

//---  Register WP7816T0: UART 7816 Wait Parameter Register
  #define UART_WP7816T0(group) (* ((volatile uint8_t *) (kBaseAddress_WP7816T0 [group] + 0x1b)))
  #define UART0_WP7816T0 (* ((volatile uint8_t *) (0x4006a000 + 0x1b)))
  #define UART1_WP7816T0 (* ((volatile uint8_t *) (0x4006b000 + 0x1b)))
  #define UART2_WP7816T0 (* ((volatile uint8_t *) (0x4006c000 + 0x1b)))
  #define UART3_WP7816T0 (* ((volatile uint8_t *) (0x4006d000 + 0x1b)))
  #define UART4_WP7816T0 (* ((volatile uint8_t *) (0x400ea000 + 0x1b)))

  // Field WI: Wait Timer Interrupt (C7816[TTYPE] = 0)
    inline uint8_t UART_WP7816T0_WI (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register WN7816: UART 7816 Wait N Register
  #define UART_WN7816(group) (* ((volatile uint8_t *) (kBaseAddress_WN7816 [group] + 0x1c)))
  #define UART0_WN7816 (* ((volatile uint8_t *) (0x4006a000 + 0x1c)))
  #define UART1_WN7816 (* ((volatile uint8_t *) (0x4006b000 + 0x1c)))
  #define UART2_WN7816 (* ((volatile uint8_t *) (0x4006c000 + 0x1c)))
  #define UART3_WN7816 (* ((volatile uint8_t *) (0x4006d000 + 0x1c)))
  #define UART4_WN7816 (* ((volatile uint8_t *) (0x400ea000 + 0x1c)))

  // Field GTN: Guard Band N
    inline uint8_t UART_WN7816_GTN (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register WF7816: UART 7816 Wait FD Register
  #define UART_WF7816(group) (* ((volatile uint8_t *) (kBaseAddress_WF7816 [group] + 0x1d)))
  #define UART0_WF7816 (* ((volatile uint8_t *) (0x4006a000 + 0x1d)))
  #define UART1_WF7816 (* ((volatile uint8_t *) (0x4006b000 + 0x1d)))
  #define UART2_WF7816 (* ((volatile uint8_t *) (0x4006c000 + 0x1d)))
  #define UART3_WF7816 (* ((volatile uint8_t *) (0x4006d000 + 0x1d)))
  #define UART4_WF7816 (* ((volatile uint8_t *) (0x400ea000 + 0x1d)))

  // Field GTFD: FD Multiplier
    inline uint8_t UART_WF7816_GTFD (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register ET7816: UART 7816 Error Threshold Register
  #define UART_ET7816(group) (* ((volatile uint8_t *) (kBaseAddress_ET7816 [group] + 0x1e)))
  #define UART0_ET7816 (* ((volatile uint8_t *) (0x4006a000 + 0x1e)))
  #define UART1_ET7816 (* ((volatile uint8_t *) (0x4006b000 + 0x1e)))
  #define UART2_ET7816 (* ((volatile uint8_t *) (0x4006c000 + 0x1e)))
  #define UART3_ET7816 (* ((volatile uint8_t *) (0x4006d000 + 0x1e)))
  #define UART4_ET7816 (* ((volatile uint8_t *) (0x400ea000 + 0x1e)))

  // Field RXTHRESHOLD: Receive NACK Threshold
    inline uint8_t UART_ET7816_RXTHRESHOLD (const uint8_t inValue) {return (inValue & 0xfU) << 0 ; }

  // Field TXTHRESHOLD: Transmit NACK Threshold
    inline uint8_t UART_ET7816_TXTHRESHOLD (const uint8_t inValue) {return (inValue & 0xfU) << 4 ; }

//---  Register TL7816: UART 7816 Transmit Length Register
  #define UART_TL7816(group) (* ((volatile uint8_t *) (kBaseAddress_TL7816 [group] + 0x1f)))
  #define UART0_TL7816 (* ((volatile uint8_t *) (0x4006a000 + 0x1f)))
  #define UART1_TL7816 (* ((volatile uint8_t *) (0x4006b000 + 0x1f)))
  #define UART2_TL7816 (* ((volatile uint8_t *) (0x4006c000 + 0x1f)))
  #define UART3_TL7816 (* ((volatile uint8_t *) (0x4006d000 + 0x1f)))
  #define UART4_TL7816 (* ((volatile uint8_t *) (0x400ea000 + 0x1f)))

  // Field TLEN: Transmit Length
    inline uint8_t UART_TL7816_TLEN (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//------------------------------------------------------------------------------
// Peripheral USB0: Universal Serial Bus, OTG Capable Controller
//------------------------------------------------------------------------------

//---  Register PERID: Peripheral ID Register
  #define USB0_PERID (* ((volatile uint8_t *) (0x40072000 + 0)))

  // Field ID: Peripheral identification bits
    inline uint8_t USB0_PERID_ID (const uint8_t inValue) {return (inValue & 0x3fU) << 0 ; }

  // Field RESERVED: no description available
    inline uint8_t USB0_PERID_RESERVED (const uint8_t inValue) {return (inValue & 0x3U) << 6 ; }

//---  Register IDCOMP: Peripheral ID Complement Register
  #define USB0_IDCOMP (* ((volatile uint8_t *) (0x40072000 + 4)))

  // Field NID: no description available
    inline uint8_t USB0_IDCOMP_NID (const uint8_t inValue) {return (inValue & 0x3fU) << 0 ; }

  // Field RESERVED: no description available
    inline uint8_t USB0_IDCOMP_RESERVED (const uint8_t inValue) {return (inValue & 0x3U) << 6 ; }

//---  Register REV: Peripheral Revision Register
  #define USB0_REV (* ((volatile uint8_t *) (0x40072000 + 8)))

  // Field REV: Revision
    inline uint8_t USB0_REV_REV (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register ADDINFO: Peripheral Additional Info Register
  #define USB0_ADDINFO (* ((volatile uint8_t *) (0x40072000 + 12)))

  // Field IEHOST: no description available
    const uint8_t USB0_ADDINFO_IEHOST = 1U << 0 ;

  // Field RESERVED: no description available
    inline uint8_t USB0_ADDINFO_RESERVED (const uint8_t inValue) {return (inValue & 0x3U) << 1 ; }

  // Field IRQNUM: Assigned Interrupt Request Number
    inline uint8_t USB0_ADDINFO_IRQNUM (const uint8_t inValue) {return (inValue & 0x1fU) << 3 ; }

//---  Register OTGISTAT: OTG Interrupt Status Register
  #define USB0_OTGISTAT (* ((volatile uint8_t *) (0x40072000 + 16)))

  // Field AVBUSCHG: no description available
    const uint8_t USB0_OTGISTAT_AVBUSCHG = 1U << 0 ;

  // Field RESERVED: no description available
    const uint8_t USB0_OTGISTAT_RESERVED = 1U << 1 ;

  // Field B_SESS_CHG: no description available
    const uint8_t USB0_OTGISTAT_B_SESS_CHG = 1U << 2 ;

  // Field SESSVLDCHG: no description available
    const uint8_t USB0_OTGISTAT_SESSVLDCHG = 1U << 3 ;

  // Field RESERVED: no description available
    const uint8_t USB0_OTGISTAT_RESERVED = 1U << 4 ;

  // Field LINE_STATE_CHG: no description available
    const uint8_t USB0_OTGISTAT_LINE_STATE_CHG = 1U << 5 ;

  // Field ONEMSEC: no description available
    const uint8_t USB0_OTGISTAT_ONEMSEC = 1U << 6 ;

  // Field IDCHG: no description available
    const uint8_t USB0_OTGISTAT_IDCHG = 1U << 7 ;

//---  Register OTGICR: OTG Interrupt Control Register
  #define USB0_OTGICR (* ((volatile uint8_t *) (0x40072000 + 20)))

  // Field AVBUSEN: A VBUS Valid interrupt enable
    const uint8_t USB0_OTGICR_AVBUSEN = 1U << 0 ;

  // Field RESERVED: no description available
    const uint8_t USB0_OTGICR_RESERVED = 1U << 1 ;

  // Field BSESSEN: B Session END interrupt enable
    const uint8_t USB0_OTGICR_BSESSEN = 1U << 2 ;

  // Field SESSVLDEN: Session valid interrupt enable
    const uint8_t USB0_OTGICR_SESSVLDEN = 1U << 3 ;

  // Field RESERVED: no description available
    const uint8_t USB0_OTGICR_RESERVED = 1U << 4 ;

  // Field LINESTATEEN: Line State change interrupt enable
    const uint8_t USB0_OTGICR_LINESTATEEN = 1U << 5 ;

  // Field ONEMSECEN: 1 millisecond interrupt enable
    const uint8_t USB0_OTGICR_ONEMSECEN = 1U << 6 ;

  // Field IDEN: ID interrupt enable
    const uint8_t USB0_OTGICR_IDEN = 1U << 7 ;

//---  Register OTGSTAT: OTG Status Register
  #define USB0_OTGSTAT (* ((volatile uint8_t *) (0x40072000 + 24)))

  // Field AVBUSVLD: A VBUS Valid
    const uint8_t USB0_OTGSTAT_AVBUSVLD = 1U << 0 ;

  // Field RESERVED: no description available
    const uint8_t USB0_OTGSTAT_RESERVED = 1U << 1 ;

  // Field BSESSEND: B Session END
    const uint8_t USB0_OTGSTAT_BSESSEND = 1U << 2 ;

  // Field SESS_VLD: Session valid
    const uint8_t USB0_OTGSTAT_SESS_VLD = 1U << 3 ;

  // Field RESERVED: no description available
    const uint8_t USB0_OTGSTAT_RESERVED = 1U << 4 ;

  // Field LINESTATESTABLE: no description available
    const uint8_t USB0_OTGSTAT_LINESTATESTABLE = 1U << 5 ;

  // Field ONEMSECEN: no description available
    const uint8_t USB0_OTGSTAT_ONEMSECEN = 1U << 6 ;

  // Field ID: no description available
    const uint8_t USB0_OTGSTAT_ID = 1U << 7 ;

//---  Register OTGCTL: OTG Control Register
  #define USB0_OTGCTL (* ((volatile uint8_t *) (0x40072000 + 28)))

  // Field RESERVED: no description available
    inline uint8_t USB0_OTGCTL_RESERVED (const uint8_t inValue) {return (inValue & 0x3U) << 0 ; }

  // Field OTGEN: On-The-Go pullup/pulldown resistor enable
    const uint8_t USB0_OTGCTL_OTGEN = 1U << 2 ;

  // Field RESERVED: no description available
    const uint8_t USB0_OTGCTL_RESERVED = 1U << 3 ;

  // Field DMLOW: D- Data Line pull-down resistor enable
    const uint8_t USB0_OTGCTL_DMLOW = 1U << 4 ;

  // Field DPLOW: D+ Data Line pull-down resistor enable
    const uint8_t USB0_OTGCTL_DPLOW = 1U << 5 ;

  // Field RESERVED: no description available
    const uint8_t USB0_OTGCTL_RESERVED = 1U << 6 ;

  // Field DPHIGH: D+ Data Line pullup resistor enable
    const uint8_t USB0_OTGCTL_DPHIGH = 1U << 7 ;

//---  Register ISTAT: Interrupt Status Register
  #define USB0_ISTAT (* ((volatile uint8_t *) (0x40072000 + 128)))

  // Field USBRST: no description available
    const uint8_t USB0_ISTAT_USBRST = 1U << 0 ;

  // Field ERROR: no description available
    const uint8_t USB0_ISTAT_ERROR = 1U << 1 ;

  // Field SOFTOK: no description available
    const uint8_t USB0_ISTAT_SOFTOK = 1U << 2 ;

  // Field TOKDNE: no description available
    const uint8_t USB0_ISTAT_TOKDNE = 1U << 3 ;

  // Field SLEEP: no description available
    const uint8_t USB0_ISTAT_SLEEP = 1U << 4 ;

  // Field RESUME: no description available
    const uint8_t USB0_ISTAT_RESUME = 1U << 5 ;

  // Field ATTACH: Attach Interrupt
    const uint8_t USB0_ISTAT_ATTACH = 1U << 6 ;

  // Field STALL: Stall Interrupt
    const uint8_t USB0_ISTAT_STALL = 1U << 7 ;

//---  Register INTEN: Interrupt Enable Register
  #define USB0_INTEN (* ((volatile uint8_t *) (0x40072000 + 132)))

  // Field USBRSTEN: USBRST Interrupt Enable
    const uint8_t USB0_INTEN_USBRSTEN = 1U << 0 ;

  // Field ERROREN: ERROR Interrupt Enable
    const uint8_t USB0_INTEN_ERROREN = 1U << 1 ;

  // Field SOFTOKEN: SOFTOK Interrupt Enable
    const uint8_t USB0_INTEN_SOFTOKEN = 1U << 2 ;

  // Field TOKDNEEN: TOKDNE Interrupt Enable
    const uint8_t USB0_INTEN_TOKDNEEN = 1U << 3 ;

  // Field SLEEPEN: SLEEP Interrupt Enable
    const uint8_t USB0_INTEN_SLEEPEN = 1U << 4 ;

  // Field RESUMEEN: RESUME Interrupt Enable
    const uint8_t USB0_INTEN_RESUMEEN = 1U << 5 ;

  // Field ATTACHEN: ATTACH Interrupt Enable
    const uint8_t USB0_INTEN_ATTACHEN = 1U << 6 ;

  // Field STALLEN: STALL Interrupt Enable
    const uint8_t USB0_INTEN_STALLEN = 1U << 7 ;

//---  Register ERRSTAT: Error Interrupt Status Register
  #define USB0_ERRSTAT (* ((volatile uint8_t *) (0x40072000 + 136)))

  // Field PIDERR: no description available
    const uint8_t USB0_ERRSTAT_PIDERR = 1U << 0 ;

  // Field CRC5EOF: no description available
    const uint8_t USB0_ERRSTAT_CRC5EOF = 1U << 1 ;

  // Field CRC16: no description available
    const uint8_t USB0_ERRSTAT_CRC16 = 1U << 2 ;

  // Field DFN8: no description available
    const uint8_t USB0_ERRSTAT_DFN8 = 1U << 3 ;

  // Field BTOERR: no description available
    const uint8_t USB0_ERRSTAT_BTOERR = 1U << 4 ;

  // Field DMAERR: no description available
    const uint8_t USB0_ERRSTAT_DMAERR = 1U << 5 ;

  // Field RESERVED: no description available
    const uint8_t USB0_ERRSTAT_RESERVED = 1U << 6 ;

  // Field BTSERR: no description available
    const uint8_t USB0_ERRSTAT_BTSERR = 1U << 7 ;

//---  Register ERREN: Error Interrupt Enable Register
  #define USB0_ERREN (* ((volatile uint8_t *) (0x40072000 + 140)))

  // Field PIDERREN: PIDERR Interrupt Enable
    const uint8_t USB0_ERREN_PIDERREN = 1U << 0 ;

  // Field CRC5EOFEN: CRC5/EOF Interrupt Enable
    const uint8_t USB0_ERREN_CRC5EOFEN = 1U << 1 ;

  // Field CRC16EN: CRC16 Interrupt Enable
    const uint8_t USB0_ERREN_CRC16EN = 1U << 2 ;

  // Field DFN8EN: DFN8 Interrupt Enable
    const uint8_t USB0_ERREN_DFN8EN = 1U << 3 ;

  // Field BTOERREN: BTOERR Interrupt Enable
    const uint8_t USB0_ERREN_BTOERREN = 1U << 4 ;

  // Field DMAERREN: DMAERR Interrupt Enable
    const uint8_t USB0_ERREN_DMAERREN = 1U << 5 ;

  // Field RESERVED: no description available
    const uint8_t USB0_ERREN_RESERVED = 1U << 6 ;

  // Field BTSERREN: BTSERR Interrupt Enable
    const uint8_t USB0_ERREN_BTSERREN = 1U << 7 ;

//---  Register STAT: Status Register
  #define USB0_STAT (* ((volatile uint8_t *) (0x40072000 + 144)))

  // Field RESERVED: no description available
    inline uint8_t USB0_STAT_RESERVED (const uint8_t inValue) {return (inValue & 0x3U) << 0 ; }

  // Field ODD: no description available
    const uint8_t USB0_STAT_ODD = 1U << 2 ;

  // Field TX: Transmit Indicator
    const uint8_t USB0_STAT_TX = 1U << 3 ;

  // Field ENDP: no description available
    inline uint8_t USB0_STAT_ENDP (const uint8_t inValue) {return (inValue & 0xfU) << 4 ; }

//---  Register CTL: Control Register
  #define USB0_CTL (* ((volatile uint8_t *) (0x40072000 + 148)))

  // Field USBENSOFEN: USB Enable
    const uint8_t USB0_CTL_USBENSOFEN = 1U << 0 ;

  // Field ODDRST: no description available
    const uint8_t USB0_CTL_ODDRST = 1U << 1 ;

  // Field RESUME: no description available
    const uint8_t USB0_CTL_RESUME = 1U << 2 ;

  // Field HOSTMODEEN: no description available
    const uint8_t USB0_CTL_HOSTMODEEN = 1U << 3 ;

  // Field RESET: no description available
    const uint8_t USB0_CTL_RESET = 1U << 4 ;

  // Field TXSUSPENDTOKENBUSY: no description available
    const uint8_t USB0_CTL_TXSUSPENDTOKENBUSY = 1U << 5 ;

  // Field SE0: Live USB Single Ended Zero signal
    const uint8_t USB0_CTL_SE0 = 1U << 6 ;

  // Field JSTATE: Live USB differential receiver JSTATE signal
    const uint8_t USB0_CTL_JSTATE = 1U << 7 ;

//---  Register ADDR: Address Register
  #define USB0_ADDR (* ((volatile uint8_t *) (0x40072000 + 152)))

  // Field ADDR: USB address
    inline uint8_t USB0_ADDR_ADDR (const uint8_t inValue) {return (inValue & 0x7fU) << 0 ; }

  // Field LSEN: Low Speed Enable bit
    const uint8_t USB0_ADDR_LSEN = 1U << 7 ;

//---  Register BDTPAGE1: BDT Page Register 1
  #define USB0_BDTPAGE1 (* ((volatile uint8_t *) (0x40072000 + 156)))

  // Field RESERVED: no description available
    const uint8_t USB0_BDTPAGE1_RESERVED = 1U << 0 ;

  // Field BDTBA: no description available
    inline uint8_t USB0_BDTPAGE1_BDTBA (const uint8_t inValue) {return (inValue & 0x7fU) << 1 ; }

//---  Register FRMNUML: Frame Number Register Low
  #define USB0_FRMNUML (* ((volatile uint8_t *) (0x40072000 + 160)))

  // Field FRM: no description available
    inline uint8_t USB0_FRMNUML_FRM (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register FRMNUMH: Frame Number Register High
  #define USB0_FRMNUMH (* ((volatile uint8_t *) (0x40072000 + 164)))

  // Field FRM: no description available
    inline uint8_t USB0_FRMNUMH_FRM (const uint8_t inValue) {return (inValue & 0x7U) << 0 ; }

  // Field RESERVED: no description available
    inline uint8_t USB0_FRMNUMH_RESERVED (const uint8_t inValue) {return (inValue & 0x1fU) << 3 ; }

//---  Register TOKEN: Token Register
  #define USB0_TOKEN (* ((volatile uint8_t *) (0x40072000 + 168)))

  // Field TOKENENDPT: no description available
    inline uint8_t USB0_TOKEN_TOKENENDPT (const uint8_t inValue) {return (inValue & 0xfU) << 0 ; }

  // Field TOKENPID: no description available
    inline uint8_t USB0_TOKEN_TOKENPID (const uint8_t inValue) {return (inValue & 0xfU) << 4 ; }

//---  Register SOFTHLD: SOF Threshold Register
  #define USB0_SOFTHLD (* ((volatile uint8_t *) (0x40072000 + 172)))

  // Field CNT: no description available
    inline uint8_t USB0_SOFTHLD_CNT (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register BDTPAGE2: BDT Page Register 2
  #define USB0_BDTPAGE2 (* ((volatile uint8_t *) (0x40072000 + 176)))

  // Field BDTBA: no description available
    inline uint8_t USB0_BDTPAGE2_BDTBA (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register BDTPAGE3: BDT Page Register 3
  #define USB0_BDTPAGE3 (* ((volatile uint8_t *) (0x40072000 + 180)))

  // Field BDTBA: no description available
    inline uint8_t USB0_BDTPAGE3_BDTBA (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Registers ENDPT(0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15): Endpoint Control Register
  #define USB0_ENDPT(idx) (* ((volatile uint8_t *) (0x40072000 + 0xc0 + (idx) * 0x4)))
  #define USB0_ENDPT0 (* ((volatile uint8_t *) (0x40072000 + 0xc0 + 0 * 0x4)))
  #define USB0_ENDPT1 (* ((volatile uint8_t *) (0x40072000 + 0xc0 + 1 * 0x4)))
  #define USB0_ENDPT2 (* ((volatile uint8_t *) (0x40072000 + 0xc0 + 2 * 0x4)))
  #define USB0_ENDPT3 (* ((volatile uint8_t *) (0x40072000 + 0xc0 + 3 * 0x4)))
  #define USB0_ENDPT4 (* ((volatile uint8_t *) (0x40072000 + 0xc0 + 4 * 0x4)))
  #define USB0_ENDPT5 (* ((volatile uint8_t *) (0x40072000 + 0xc0 + 5 * 0x4)))
  #define USB0_ENDPT6 (* ((volatile uint8_t *) (0x40072000 + 0xc0 + 6 * 0x4)))
  #define USB0_ENDPT7 (* ((volatile uint8_t *) (0x40072000 + 0xc0 + 7 * 0x4)))
  #define USB0_ENDPT8 (* ((volatile uint8_t *) (0x40072000 + 0xc0 + 8 * 0x4)))
  #define USB0_ENDPT9 (* ((volatile uint8_t *) (0x40072000 + 0xc0 + 9 * 0x4)))
  #define USB0_ENDPT10 (* ((volatile uint8_t *) (0x40072000 + 0xc0 + 10 * 0x4)))
  #define USB0_ENDPT11 (* ((volatile uint8_t *) (0x40072000 + 0xc0 + 11 * 0x4)))
  #define USB0_ENDPT12 (* ((volatile uint8_t *) (0x40072000 + 0xc0 + 12 * 0x4)))
  #define USB0_ENDPT13 (* ((volatile uint8_t *) (0x40072000 + 0xc0 + 13 * 0x4)))
  #define USB0_ENDPT14 (* ((volatile uint8_t *) (0x40072000 + 0xc0 + 14 * 0x4)))
  #define USB0_ENDPT15 (* ((volatile uint8_t *) (0x40072000 + 0xc0 + 15 * 0x4)))

  // Field EPHSHK: no description available
    const uint8_t USB0_ENDPT_EPHSHK = 1U << 0 ;

  // Field EPSTALL: no description available
    const uint8_t USB0_ENDPT_EPSTALL = 1U << 1 ;

  // Field EPTXEN: no description available
    const uint8_t USB0_ENDPT_EPTXEN = 1U << 2 ;

  // Field EPRXEN: no description available
    const uint8_t USB0_ENDPT_EPRXEN = 1U << 3 ;

  // Field EPCTLDIS: no description available
    const uint8_t USB0_ENDPT_EPCTLDIS = 1U << 4 ;

  // Field RESERVED: no description available
    const uint8_t USB0_ENDPT_RESERVED = 1U << 5 ;

  // Field RETRYDIS: no description available
    const uint8_t USB0_ENDPT_RETRYDIS = 1U << 6 ;

  // Field HOSTWOHUB: no description available
    const uint8_t USB0_ENDPT_HOSTWOHUB = 1U << 7 ;

//---  Register USBCTRL: USB Control Register
  #define USB0_USBCTRL (* ((volatile uint8_t *) (0x40072000 + 256)))

  // Field RESERVED: no description available
    inline uint8_t USB0_USBCTRL_RESERVED (const uint8_t inValue) {return (inValue & 0x3fU) << 0 ; }

  // Field PDE: no description available
    const uint8_t USB0_USBCTRL_PDE = 1U << 6 ;

  // Field SUSP: no description available
    const uint8_t USB0_USBCTRL_SUSP = 1U << 7 ;

//---  Register OBSERVE: USB OTG Observe Register
  #define USB0_OBSERVE (* ((volatile uint8_t *) (0x40072000 + 260)))

  // Field RESERVED: no description available
    const uint8_t USB0_OBSERVE_RESERVED = 1U << 0 ;

  // Field RESERVED: no description available
    inline uint8_t USB0_OBSERVE_RESERVED (const uint8_t inValue) {return (inValue & 0x7U) << 1 ; }

  // Field DMPD: no description available
    const uint8_t USB0_OBSERVE_DMPD = 1U << 4 ;

  // Field RESERVED: no description available
    const uint8_t USB0_OBSERVE_RESERVED = 1U << 5 ;

  // Field DPPD: no description available
    const uint8_t USB0_OBSERVE_DPPD = 1U << 6 ;

  // Field DPPU: no description available
    const uint8_t USB0_OBSERVE_DPPU = 1U << 7 ;

//---  Register CONTROL: USB OTG Control Register
  #define USB0_CONTROL (* ((volatile uint8_t *) (0x40072000 + 264)))

  // Field RESERVED: no description available
    inline uint8_t USB0_CONTROL_RESERVED (const uint8_t inValue) {return (inValue & 0xfU) << 0 ; }

  // Field DPPULLUPNONOTG: no description available
    const uint8_t USB0_CONTROL_DPPULLUPNONOTG = 1U << 4 ;

  // Field RESERVED: no description available
    inline uint8_t USB0_CONTROL_RESERVED (const uint8_t inValue) {return (inValue & 0x7U) << 5 ; }

//---  Register USBTRC0: USB Transceiver Control Register 0
  #define USB0_USBTRC0 (* ((volatile uint8_t *) (0x40072000 + 268)))

  // Field USB_RESUME_INT: USB Asynchronous Interrupt
    const uint8_t USB0_USBTRC0_USB_RESUME_INT = 1U << 0 ;

  // Field SYNC_DET: Synchronous USB Interrupt Detect
    const uint8_t USB0_USBTRC0_SYNC_DET = 1U << 1 ;

  // Field RESERVED: no description available
    inline uint8_t USB0_USBTRC0_RESERVED (const uint8_t inValue) {return (inValue & 0x7U) << 2 ; }

  // Field USBRESMEN: Asynchronous Resume Interrupt Enable
    const uint8_t USB0_USBTRC0_USBRESMEN = 1U << 5 ;

  // Field RESERVED: no description available
    const uint8_t USB0_USBTRC0_RESERVED = 1U << 6 ;

  // Field USBRESET: USB reset
    const uint8_t USB0_USBTRC0_USBRESET = 1U << 7 ;

//---  Register USBFRMADJUST: Frame Adjust Register
  #define USB0_USBFRMADJUST (* ((volatile uint8_t *) (0x40072000 + 276)))

  // Field ADJ: Frame Adjustment
    inline uint8_t USB0_USBFRMADJUST_ADJ (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//------------------------------------------------------------------------------
// Peripheral USBDCD: USB Device Charger Detection module
//------------------------------------------------------------------------------

//---  Register CONTROL: Control Register
  #define USBDCD_CONTROL (* ((volatile uint32_t *) (0x40035000 + 0)))

  // Field IACK: Interrupt Acknowledge
    const uint32_t USBDCD_CONTROL_IACK = 1U << 0 ;

  // Field RESERVED: no description available
    inline uint32_t USBDCD_CONTROL_RESERVED (const uint32_t inValue) {return (inValue & 0x7fU) << 1 ; }

  // Field IF: Interrupt Flag
    const uint32_t USBDCD_CONTROL_IF = 1U << 8 ;

  // Field RESERVED: no description available
    inline uint32_t USBDCD_CONTROL_RESERVED (const uint32_t inValue) {return (inValue & 0x7fU) << 9 ; }

  // Field IE: Interrupt Enable
    const uint32_t USBDCD_CONTROL_IE = 1U << 16 ;

  // Field RESERVED: no description available
    inline uint32_t USBDCD_CONTROL_RESERVED (const uint32_t inValue) {return (inValue & 0x7fU) << 17 ; }

  // Field START: Start Change Detection Sequence
    const uint32_t USBDCD_CONTROL_START = 1U << 24 ;

  // Field SR: Software Reset
    const uint32_t USBDCD_CONTROL_SR = 1U << 25 ;

  // Field RESERVED: no description available
    inline uint32_t USBDCD_CONTROL_RESERVED (const uint32_t inValue) {return (inValue & 0x3fU) << 26 ; }

//---  Register CLOCK: Clock Register
  #define USBDCD_CLOCK (* ((volatile uint32_t *) (0x40035000 + 4)))

  // Field CLOCK_UNIT: Unit of measurement encoding for Clock Speed
    const uint32_t USBDCD_CLOCK_CLOCK_UNIT = 1U << 0 ;

  // Field RESERVED: no description available
    const uint32_t USBDCD_CLOCK_RESERVED = 1U << 1 ;

  // Field CLOCK_SPEED: Numerical Value of Clock Speed in Binary
    inline uint32_t USBDCD_CLOCK_CLOCK_SPEED (const uint32_t inValue) {return (inValue & 0x3ffU) << 2 ; }

  // Field RESERVED: no description available
    inline uint32_t USBDCD_CLOCK_RESERVED (const uint32_t inValue) {return (inValue & 0xfffffU) << 12 ; }

//---  Register STATUS: Status Register
  #define USBDCD_STATUS (* ((volatile uint32_t *) (0x40035000 + 8)))

  // Field RESERVED: no description available
    inline uint32_t USBDCD_STATUS_RESERVED (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

  // Field SEQ_RES: Charger Detection Sequence Results
    inline uint32_t USBDCD_STATUS_SEQ_RES (const uint32_t inValue) {return (inValue & 0x3U) << 16 ; }

  // Field SEQ_STAT: Charger Detection Sequence Status
    inline uint32_t USBDCD_STATUS_SEQ_STAT (const uint32_t inValue) {return (inValue & 0x3U) << 18 ; }

  // Field ERR: Error Flag
    const uint32_t USBDCD_STATUS_ERR = 1U << 20 ;

  // Field TO: Timeout Flag
    const uint32_t USBDCD_STATUS_TO = 1U << 21 ;

  // Field ACTIVE: Active Status Indicator
    const uint32_t USBDCD_STATUS_ACTIVE = 1U << 22 ;

  // Field RESERVED: no description available
    inline uint32_t USBDCD_STATUS_RESERVED (const uint32_t inValue) {return (inValue & 0x1ffU) << 23 ; }

//---  Register TIMER0: TIMER0 Register
  #define USBDCD_TIMER0 (* ((volatile uint32_t *) (0x40035000 + 16)))

  // Field TUNITCON: Unit Connection Timer Elapse (in ms)
    inline uint32_t USBDCD_TIMER0_TUNITCON (const uint32_t inValue) {return (inValue & 0xfffU) << 0 ; }

  // Field RESERVED: no description available
    inline uint32_t USBDCD_TIMER0_RESERVED (const uint32_t inValue) {return (inValue & 0xfU) << 12 ; }

  // Field TSEQ_INIT: Sequence Initiation Time
    inline uint32_t USBDCD_TIMER0_TSEQ_INIT (const uint32_t inValue) {return (inValue & 0x3ffU) << 16 ; }

  // Field RESERVED: no description available
    inline uint32_t USBDCD_TIMER0_RESERVED (const uint32_t inValue) {return (inValue & 0x3fU) << 26 ; }

//---  Register TIMER1: no description available
  #define USBDCD_TIMER1 (* ((volatile uint32_t *) (0x40035000 + 20)))

  // Field TVDPSRC_ON: Time Period Comparator Enabled
    inline uint32_t USBDCD_TIMER1_TVDPSRC_ON (const uint32_t inValue) {return (inValue & 0x3ffU) << 0 ; }

  // Field RESERVED: no description available
    inline uint32_t USBDCD_TIMER1_RESERVED (const uint32_t inValue) {return (inValue & 0x3fU) << 10 ; }

  // Field TDCD_DBNC: Time Period to Debounce D+ Signal
    inline uint32_t USBDCD_TIMER1_TDCD_DBNC (const uint32_t inValue) {return (inValue & 0x3ffU) << 16 ; }

  // Field RESERVED: no description available
    inline uint32_t USBDCD_TIMER1_RESERVED (const uint32_t inValue) {return (inValue & 0x3fU) << 26 ; }

//---  Register TIMER2: no description available
  #define USBDCD_TIMER2 (* ((volatile uint32_t *) (0x40035000 + 24)))

  // Field CHECK_DM: Time Before Check of D- Line
    inline uint32_t USBDCD_TIMER2_CHECK_DM (const uint32_t inValue) {return (inValue & 0xfU) << 0 ; }

  // Field RESERVED: no description available
    inline uint32_t USBDCD_TIMER2_RESERVED (const uint32_t inValue) {return (inValue & 0xfffU) << 4 ; }

  // Field TVDPSRC_CON: Time Period Before Enabling D+ Pullup
    inline uint32_t USBDCD_TIMER2_TVDPSRC_CON (const uint32_t inValue) {return (inValue & 0x3ffU) << 16 ; }

  // Field RESERVED: no description available
    inline uint32_t USBDCD_TIMER2_RESERVED (const uint32_t inValue) {return (inValue & 0x3fU) << 26 ; }

//------------------------------------------------------------------------------
// Peripheral VREF: Voltage Reference
//------------------------------------------------------------------------------

//---  Register TRM: VREF Trim Register
  #define VREF_TRM (* ((volatile uint8_t *) (0x40074000 + 0)))

  // Field TRIM: Trim bits
    inline uint8_t VREF_TRM_TRIM (const uint8_t inValue) {return (inValue & 0x3fU) << 0 ; }

  // Field CHOPEN: Chop oscillator enable. When set, internal chopping operation is enabled and the internal analog offset will be minimized.
    const uint8_t VREF_TRM_CHOPEN = 1U << 6 ;

  // Field RESERVED: no description available
    const uint8_t VREF_TRM_RESERVED = 1U << 7 ;

//---  Register SC: VREF Status and Control Register
  #define VREF_SC (* ((volatile uint8_t *) (0x40074000 + 1)))

  // Field MODE_LV: Buffer Mode selection
    inline uint8_t VREF_SC_MODE_LV (const uint8_t inValue) {return (inValue & 0x3U) << 0 ; }

  // Field VREFST: Internal Voltage Reference stable
    const uint8_t VREF_SC_VREFST = 1U << 2 ;

  // Field RESERVED: no description available
    const uint8_t VREF_SC_RESERVED = 1U << 3 ;

  // Field RESERVED: no description available
    const uint8_t VREF_SC_RESERVED = 1U << 4 ;

  // Field RESERVED: no description available
    const uint8_t VREF_SC_RESERVED = 1U << 5 ;

  // Field REGEN: Regulator enable
    const uint8_t VREF_SC_REGEN = 1U << 6 ;

  // Field VREFEN: Internal Voltage Reference enable
    const uint8_t VREF_SC_VREFEN = 1U << 7 ;

//------------------------------------------------------------------------------
// Peripheral WDOG: Generation 2008 Watchdog Timer
//------------------------------------------------------------------------------

//---  Register STCTRLH: Watchdog Status and Control Register High
  #define WDOG_STCTRLH (* ((volatile uint16_t *) (0x40052000 + 0)))

  // Field WDOGEN: no description available
    const uint16_t WDOG_STCTRLH_WDOGEN = 1U << 0 ;

  // Field CLKSRC: no description available
    const uint16_t WDOG_STCTRLH_CLKSRC = 1U << 1 ;

  // Field IRQRSTEN: no description available
    const uint16_t WDOG_STCTRLH_IRQRSTEN = 1U << 2 ;

  // Field WINEN: no description available
    const uint16_t WDOG_STCTRLH_WINEN = 1U << 3 ;

  // Field ALLOWUPDATE: no description available
    const uint16_t WDOG_STCTRLH_ALLOWUPDATE = 1U << 4 ;

  // Field DBGEN: no description available
    const uint16_t WDOG_STCTRLH_DBGEN = 1U << 5 ;

  // Field STOPEN: no description available
    const uint16_t WDOG_STCTRLH_STOPEN = 1U << 6 ;

  // Field WAITEN: no description available
    const uint16_t WDOG_STCTRLH_WAITEN = 1U << 7 ;

  // Field RESERVED: no description available
    const uint16_t WDOG_STCTRLH_RESERVED = 1U << 8 ;

  // Field RESERVED: no description available
    const uint16_t WDOG_STCTRLH_RESERVED = 1U << 9 ;

  // Field TESTWDOG: no description available
    const uint16_t WDOG_STCTRLH_TESTWDOG = 1U << 10 ;

  // Field TESTSEL: no description available
    const uint16_t WDOG_STCTRLH_TESTSEL = 1U << 11 ;

  // Field BYTESEL: no description available
    inline uint16_t WDOG_STCTRLH_BYTESEL (const uint16_t inValue) {return (inValue & 0x3U) << 12 ; }

  // Field DISTESTWDOG: no description available
    const uint16_t WDOG_STCTRLH_DISTESTWDOG = 1U << 14 ;

  // Field RESERVED: no description available
    const uint16_t WDOG_STCTRLH_RESERVED = 1U << 15 ;

//---  Register STCTRLL: Watchdog Status and Control Register Low
  #define WDOG_STCTRLL (* ((volatile uint16_t *) (0x40052000 + 2)))

  // Field RESERVED: no description available
    inline uint16_t WDOG_STCTRLL_RESERVED (const uint16_t inValue) {return (inValue & 0x7fffU) << 0 ; }

  // Field INTFLG: no description available
    const uint16_t WDOG_STCTRLL_INTFLG = 1U << 15 ;

//---  Register TOVALH: Watchdog Time-out Value Register High
  #define WDOG_TOVALH (* ((volatile uint16_t *) (0x40052000 + 4)))

  // Field TOVALHIGH: no description available
    inline uint16_t WDOG_TOVALH_TOVALHIGH (const uint16_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register TOVALL: Watchdog Time-out Value Register Low
  #define WDOG_TOVALL (* ((volatile uint16_t *) (0x40052000 + 6)))

  // Field TOVALLOW: no description available
    inline uint16_t WDOG_TOVALL_TOVALLOW (const uint16_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register WINH: Watchdog Window Register High
  #define WDOG_WINH (* ((volatile uint16_t *) (0x40052000 + 8)))

  // Field WINHIGH: no description available
    inline uint16_t WDOG_WINH_WINHIGH (const uint16_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register WINL: Watchdog Window Register Low
  #define WDOG_WINL (* ((volatile uint16_t *) (0x40052000 + 10)))

  // Field WINLOW: no description available
    inline uint16_t WDOG_WINL_WINLOW (const uint16_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register REFRESH: Watchdog Refresh Register
  #define WDOG_REFRESH (* ((volatile uint16_t *) (0x40052000 + 12)))

  // Field WDOGREFRESH: no description available
    inline uint16_t WDOG_REFRESH_WDOGREFRESH (const uint16_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register UNLOCK: Watchdog Unlock Register
  #define WDOG_UNLOCK (* ((volatile uint16_t *) (0x40052000 + 14)))

  // Field WDOGUNLOCK: no description available
    inline uint16_t WDOG_UNLOCK_WDOGUNLOCK (const uint16_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register TMROUTH: Watchdog Timer Output Register High
  #define WDOG_TMROUTH (* ((volatile uint16_t *) (0x40052000 + 16)))

  // Field TIMEROUTHIGH: no description available
    inline uint16_t WDOG_TMROUTH_TIMEROUTHIGH (const uint16_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register TMROUTL: Watchdog Timer Output Register Low
  #define WDOG_TMROUTL (* ((volatile uint16_t *) (0x40052000 + 18)))

  // Field TIMEROUTLOW: no description available
    inline uint16_t WDOG_TMROUTL_TIMEROUTLOW (const uint16_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register RSTCNT: Watchdog Reset Count Register
  #define WDOG_RSTCNT (* ((volatile uint16_t *) (0x40052000 + 20)))

  // Field RSTCNT: no description available
    inline uint16_t WDOG_RSTCNT_RSTCNT (const uint16_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register PRESC: Watchdog Prescaler Register
  #define WDOG_PRESC (* ((volatile uint16_t *) (0x40052000 + 22)))

  // Field RESERVED: no description available
    inline uint16_t WDOG_PRESC_RESERVED (const uint16_t inValue) {return (inValue & 0xffU) << 0 ; }

  // Field PRESCVAL: no description available
    inline uint16_t WDOG_PRESC_PRESCVAL (const uint16_t inValue) {return (inValue & 0x7U) << 8 ; }

  // Field RESERVED: no description available
    inline uint16_t WDOG_PRESC_RESERVED (const uint16_t inValue) {return (inValue & 0x1fU) << 11 ; }

//------------------------------------------------------------------------------
// INTERRUPTS
//------------------------------------------------------------------------------

enum class ISRSlot : uint8_t {
  INT_DMA0 = 16,
  INT_DMA1 = 17,
  INT_DMA2 = 18,
  INT_DMA3 = 19,
  INT_DMA4 = 20,
  INT_DMA5 = 21,
  INT_DMA6 = 22,
  INT_DMA7 = 23,
  INT_DMA8 = 24,
  INT_DMA9 = 25,
  INT_DMA10 = 26,
  INT_DMA11 = 27,
  INT_DMA12 = 28,
  INT_DMA13 = 29,
  INT_DMA14 = 30,
  INT_DMA15 = 31,
  INT_DMA_Error = 32,
  INT_FTFL = 34,
  INT_LVD_LVW = 36,
  INT_LLW = 37,
  INT_Watchdog = 38,
  INT_I2C0 = 40,
  INT_I2C1 = 41,
  INT_SPI0 = 42,
  INT_SPI1 = 43,
  INT_CAN0_ORed_Message_buffer = 45,
  INT_CAN0_Bus_Off = 46,
  INT_CAN0_Error = 47,
  INT_CAN0_Tx_Warning = 48,
  INT_CAN0_Rx_Warning = 49,
  INT_CAN0_Wake_Up = 50,
  INT_I2S0_Tx = 51,
  INT_I2S0_Rx = 52,
  INT_UART0_LON = 60,
  INT_UART0_RX_TX = 61,
  INT_UART0_ERR = 62,
  INT_UART1_RX_TX = 63,
  INT_UART1_ERR = 64,
  INT_UART2_RX_TX = 65,
  INT_UART2_ERR = 66,
  INT_UART3_RX_TX = 67,
  INT_UART3_ERR = 68,
  INT_UART4_RX_TX = 69,
  INT_UART4_ERR = 70,
  INT_ADC0 = 73,
  INT_ADC1 = 74,
  INT_CMP0 = 75,
  INT_CMP1 = 76,
  INT_CMP2 = 77,
  INT_FTM0 = 78,
  INT_FTM1 = 79,
  INT_FTM2 = 80,
  INT_CMT = 81,
  INT_RTC = 82,
  INT_RTC_Seconds = 83,
  INT_PIT0 = 84,
  INT_PIT1 = 85,
  INT_PIT2 = 86,
  INT_PIT3 = 87,
  INT_PDB0 = 88,
  INT_USB0 = 89,
  INT_USBDCD = 90,
  INT_Reserved95 = 95,
  INT_DAC0 = 97,
  INT_TSI0 = 99,
  INT_LPTimer = 101,
  INT_PORTA = 103,
  INT_PORTB = 104,
  INT_PORTC = 105,
  INT_PORTD = 106,
  INT_PORTE = 107,
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
