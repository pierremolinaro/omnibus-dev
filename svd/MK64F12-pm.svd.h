#pragma once

//------------------------------------------------------------------------------
// MK64F12: MK64F12 Freescale Microcontroller
//------------------------------------------------------------------------------

#include <stdint.h>

//------------------------------------------------------------------------------
// PERIPHERAL GROUP: ADC
//        ADC0 at 0x4003b000
//        ADC1 at 0x400bb000
//------------------------------------------------------------------------------

static const uint32_t kBaseAddress_ADC [2] = {0x4003b000, 0x400bb000} ;

//------------------------------------------------------------------------------

//---  Registers SC1(A,B): ADC Status and Control Registers 1
  #define ADC_SC1(group,idx) (* ((volatile uint32_t *) (kBaseAddress_SC1 [group] + 0x0 + (idx) * 0x4)))
  #define ADC0_SC1(idx) (* ((volatile uint32_t *) (0x4003b000 + 0x0 + (idx) * 0x4)))
  #define ADC1_SC1(idx) (* ((volatile uint32_t *) (0x400bb000 + 0x0 + (idx) * 0x4)))
  #define ADC0_SC1A (* ((volatile uint32_t *) (0x4003b000 + 0x0 + 0 * 0x4)))
  #define ADC1_SC1A (* ((volatile uint32_t *) (0x400bb000 + 0x0 + 0 * 0x4)))
  #define ADC0_SC1B (* ((volatile uint32_t *) (0x4003b000 + 0x0 + 1 * 0x4)))
  #define ADC1_SC1B (* ((volatile uint32_t *) (0x400bb000 + 0x0 + 1 * 0x4)))

  // Field ADCH: Input channel select
    inline uint32_t ADC_SC1_ADCH (const uint32_t inValue) {return (inValue & 0x1fU) << 0 ; }

  // Field DIFF: Differential Mode Enable
    const uint32_t ADC_SC1_DIFF = 1U << 5 ;

  // Field AIEN: Interrupt Enable
    const uint32_t ADC_SC1_AIEN = 1U << 6 ;

  // Field COCO: Conversion Complete Flag
    const uint32_t ADC_SC1_COCO = 1U << 7 ;

//---  Register CFG1: ADC Configuration Register 1
  #define ADC_CFG1(group) (* ((volatile uint32_t *) (kBaseAddress_CFG1 [group] + 0x8)))
  #define ADC0_CFG1 (* ((volatile uint32_t *) (0x4003b000 + 0x8)))
  #define ADC1_CFG1 (* ((volatile uint32_t *) (0x400bb000 + 0x8)))

  // Field ADICLK: Input Clock Select
    inline uint32_t ADC_CFG1_ADICLK (const uint32_t inValue) {return (inValue & 0x3U) << 0 ; }

  // Field MODE: Conversion mode selection
    inline uint32_t ADC_CFG1_MODE (const uint32_t inValue) {return (inValue & 0x3U) << 2 ; }

  // Field ADLSMP: Sample Time Configuration
    const uint32_t ADC_CFG1_ADLSMP = 1U << 4 ;

  // Field ADIV: Clock Divide Select
    inline uint32_t ADC_CFG1_ADIV (const uint32_t inValue) {return (inValue & 0x3U) << 5 ; }

  // Field ADLPC: Low-Power Configuration
    const uint32_t ADC_CFG1_ADLPC = 1U << 7 ;

//---  Register CFG2: ADC Configuration Register 2
  #define ADC_CFG2(group) (* ((volatile uint32_t *) (kBaseAddress_CFG2 [group] + 0xc)))
  #define ADC0_CFG2 (* ((volatile uint32_t *) (0x4003b000 + 0xc)))
  #define ADC1_CFG2 (* ((volatile uint32_t *) (0x400bb000 + 0xc)))

  // Field ADLSTS: Long Sample Time Select
    inline uint32_t ADC_CFG2_ADLSTS (const uint32_t inValue) {return (inValue & 0x3U) << 0 ; }

  // Field ADHSC: High-Speed Configuration
    const uint32_t ADC_CFG2_ADHSC = 1U << 2 ;

  // Field ADACKEN: Asynchronous Clock Output Enable
    const uint32_t ADC_CFG2_ADACKEN = 1U << 3 ;

  // Field MUXSEL: ADC Mux Select
    const uint32_t ADC_CFG2_MUXSEL = 1U << 4 ;

//---  Registers R(A,B): ADC Data Result Register
  #define ADC_R(group,idx) (* ((volatile uint32_t *) (kBaseAddress_R [group] + 0x10 + (idx) * 0x4)))
  #define ADC0_R(idx) (* ((volatile uint32_t *) (0x4003b000 + 0x10 + (idx) * 0x4)))
  #define ADC1_R(idx) (* ((volatile uint32_t *) (0x400bb000 + 0x10 + (idx) * 0x4)))
  #define ADC0_RA (* ((const volatile uint32_t *) (0x4003b000 + 0x10 + 0 * 0x4)))
  #define ADC1_RA (* ((const volatile uint32_t *) (0x400bb000 + 0x10 + 0 * 0x4)))
  #define ADC0_RB (* ((const volatile uint32_t *) (0x4003b000 + 0x10 + 1 * 0x4)))
  #define ADC1_RB (* ((const volatile uint32_t *) (0x400bb000 + 0x10 + 1 * 0x4)))

  // Field D: Data result
    inline uint32_t ADC_R_D (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Registers CV(1,2): Compare Value Registers
  #define ADC_CV(group,idx) (* ((volatile uint32_t *) (kBaseAddress_CV [group] + 0x18 + (idx) * 0x4)))
  #define ADC0_CV(idx) (* ((volatile uint32_t *) (0x4003b000 + 0x18 + (idx) * 0x4)))
  #define ADC1_CV(idx) (* ((volatile uint32_t *) (0x400bb000 + 0x18 + (idx) * 0x4)))
  #define ADC0_CV1 (* ((volatile uint32_t *) (0x4003b000 + 0x18 + 0 * 0x4)))
  #define ADC1_CV1 (* ((volatile uint32_t *) (0x400bb000 + 0x18 + 0 * 0x4)))
  #define ADC0_CV2 (* ((volatile uint32_t *) (0x4003b000 + 0x18 + 1 * 0x4)))
  #define ADC1_CV2 (* ((volatile uint32_t *) (0x400bb000 + 0x18 + 1 * 0x4)))

  // Field CV: Compare Value.
    inline uint32_t ADC_CV_CV (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register SC2: Status and Control Register 2
  #define ADC_SC2(group) (* ((volatile uint32_t *) (kBaseAddress_SC2 [group] + 0x20)))
  #define ADC0_SC2 (* ((volatile uint32_t *) (0x4003b000 + 0x20)))
  #define ADC1_SC2 (* ((volatile uint32_t *) (0x400bb000 + 0x20)))

  // Field REFSEL: Voltage Reference Selection
    inline uint32_t ADC_SC2_REFSEL (const uint32_t inValue) {return (inValue & 0x3U) << 0 ; }

  // Field DMAEN: DMA Enable
    const uint32_t ADC_SC2_DMAEN = 1U << 2 ;

  // Field ACREN: Compare Function Range Enable
    const uint32_t ADC_SC2_ACREN = 1U << 3 ;

  // Field ACFGT: Compare Function Greater Than Enable
    const uint32_t ADC_SC2_ACFGT = 1U << 4 ;

  // Field ACFE: Compare Function Enable
    const uint32_t ADC_SC2_ACFE = 1U << 5 ;

  // Field ADTRG: Conversion Trigger Select
    const uint32_t ADC_SC2_ADTRG = 1U << 6 ;

  // Field ADACT: Conversion Active
    const uint32_t ADC_SC2_ADACT = 1U << 7 ;

//---  Register SC3: Status and Control Register 3
  #define ADC_SC3(group) (* ((volatile uint32_t *) (kBaseAddress_SC3 [group] + 0x24)))
  #define ADC0_SC3 (* ((volatile uint32_t *) (0x4003b000 + 0x24)))
  #define ADC1_SC3 (* ((volatile uint32_t *) (0x400bb000 + 0x24)))

  // Field AVGS: Hardware Average Select
    inline uint32_t ADC_SC3_AVGS (const uint32_t inValue) {return (inValue & 0x3U) << 0 ; }

  // Field AVGE: Hardware Average Enable
    const uint32_t ADC_SC3_AVGE = 1U << 2 ;

  // Field ADCO: Continuous Conversion Enable
    const uint32_t ADC_SC3_ADCO = 1U << 3 ;

  // Field CALF: Calibration Failed Flag
    const uint32_t ADC_SC3_CALF = 1U << 6 ;

  // Field CAL: Calibration
    const uint32_t ADC_SC3_CAL = 1U << 7 ;

//---  Register OFS: ADC Offset Correction Register
  #define ADC_OFS(group) (* ((volatile uint32_t *) (kBaseAddress_OFS [group] + 0x28)))
  #define ADC0_OFS (* ((volatile uint32_t *) (0x4003b000 + 0x28)))
  #define ADC1_OFS (* ((volatile uint32_t *) (0x400bb000 + 0x28)))

  // Field OFS: Offset Error Correction Value
    inline uint32_t ADC_OFS_OFS (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register PG: ADC Plus-Side Gain Register
  #define ADC_PG(group) (* ((volatile uint32_t *) (kBaseAddress_PG [group] + 0x2c)))
  #define ADC0_PG (* ((volatile uint32_t *) (0x4003b000 + 0x2c)))
  #define ADC1_PG (* ((volatile uint32_t *) (0x400bb000 + 0x2c)))

  // Field PG: Plus-Side Gain
    inline uint32_t ADC_PG_PG (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register MG: ADC Minus-Side Gain Register
  #define ADC_MG(group) (* ((volatile uint32_t *) (kBaseAddress_MG [group] + 0x30)))
  #define ADC0_MG (* ((volatile uint32_t *) (0x4003b000 + 0x30)))
  #define ADC1_MG (* ((volatile uint32_t *) (0x400bb000 + 0x30)))

  // Field MG: Minus-Side Gain
    inline uint32_t ADC_MG_MG (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register CLPD: ADC Plus-Side General Calibration Value Register
  #define ADC_CLPD(group) (* ((volatile uint32_t *) (kBaseAddress_CLPD [group] + 0x34)))
  #define ADC0_CLPD (* ((volatile uint32_t *) (0x4003b000 + 0x34)))
  #define ADC1_CLPD (* ((volatile uint32_t *) (0x400bb000 + 0x34)))

  // Field CLPD: Calibration Value
    inline uint32_t ADC_CLPD_CLPD (const uint32_t inValue) {return (inValue & 0x3fU) << 0 ; }

//---  Register CLPS: ADC Plus-Side General Calibration Value Register
  #define ADC_CLPS(group) (* ((volatile uint32_t *) (kBaseAddress_CLPS [group] + 0x38)))
  #define ADC0_CLPS (* ((volatile uint32_t *) (0x4003b000 + 0x38)))
  #define ADC1_CLPS (* ((volatile uint32_t *) (0x400bb000 + 0x38)))

  // Field CLPS: Calibration Value
    inline uint32_t ADC_CLPS_CLPS (const uint32_t inValue) {return (inValue & 0x3fU) << 0 ; }

//---  Register CLP4: ADC Plus-Side General Calibration Value Register
  #define ADC_CLP4(group) (* ((volatile uint32_t *) (kBaseAddress_CLP4 [group] + 0x3c)))
  #define ADC0_CLP4 (* ((volatile uint32_t *) (0x4003b000 + 0x3c)))
  #define ADC1_CLP4 (* ((volatile uint32_t *) (0x400bb000 + 0x3c)))

  // Field CLP4: Calibration Value
    inline uint32_t ADC_CLP4_CLP4 (const uint32_t inValue) {return (inValue & 0x3ffU) << 0 ; }

//---  Register CLP3: ADC Plus-Side General Calibration Value Register
  #define ADC_CLP3(group) (* ((volatile uint32_t *) (kBaseAddress_CLP3 [group] + 0x40)))
  #define ADC0_CLP3 (* ((volatile uint32_t *) (0x4003b000 + 0x40)))
  #define ADC1_CLP3 (* ((volatile uint32_t *) (0x400bb000 + 0x40)))

  // Field CLP3: Calibration Value
    inline uint32_t ADC_CLP3_CLP3 (const uint32_t inValue) {return (inValue & 0x1ffU) << 0 ; }

//---  Register CLP2: ADC Plus-Side General Calibration Value Register
  #define ADC_CLP2(group) (* ((volatile uint32_t *) (kBaseAddress_CLP2 [group] + 0x44)))
  #define ADC0_CLP2 (* ((volatile uint32_t *) (0x4003b000 + 0x44)))
  #define ADC1_CLP2 (* ((volatile uint32_t *) (0x400bb000 + 0x44)))

  // Field CLP2: Calibration Value
    inline uint32_t ADC_CLP2_CLP2 (const uint32_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register CLP1: ADC Plus-Side General Calibration Value Register
  #define ADC_CLP1(group) (* ((volatile uint32_t *) (kBaseAddress_CLP1 [group] + 0x48)))
  #define ADC0_CLP1 (* ((volatile uint32_t *) (0x4003b000 + 0x48)))
  #define ADC1_CLP1 (* ((volatile uint32_t *) (0x400bb000 + 0x48)))

  // Field CLP1: Calibration Value
    inline uint32_t ADC_CLP1_CLP1 (const uint32_t inValue) {return (inValue & 0x7fU) << 0 ; }

//---  Register CLP0: ADC Plus-Side General Calibration Value Register
  #define ADC_CLP0(group) (* ((volatile uint32_t *) (kBaseAddress_CLP0 [group] + 0x4c)))
  #define ADC0_CLP0 (* ((volatile uint32_t *) (0x4003b000 + 0x4c)))
  #define ADC1_CLP0 (* ((volatile uint32_t *) (0x400bb000 + 0x4c)))

  // Field CLP0: Calibration Value
    inline uint32_t ADC_CLP0_CLP0 (const uint32_t inValue) {return (inValue & 0x3fU) << 0 ; }

//---  Register CLMD: ADC Minus-Side General Calibration Value Register
  #define ADC_CLMD(group) (* ((volatile uint32_t *) (kBaseAddress_CLMD [group] + 0x54)))
  #define ADC0_CLMD (* ((volatile uint32_t *) (0x4003b000 + 0x54)))
  #define ADC1_CLMD (* ((volatile uint32_t *) (0x400bb000 + 0x54)))

  // Field CLMD: Calibration Value
    inline uint32_t ADC_CLMD_CLMD (const uint32_t inValue) {return (inValue & 0x3fU) << 0 ; }

//---  Register CLMS: ADC Minus-Side General Calibration Value Register
  #define ADC_CLMS(group) (* ((volatile uint32_t *) (kBaseAddress_CLMS [group] + 0x58)))
  #define ADC0_CLMS (* ((volatile uint32_t *) (0x4003b000 + 0x58)))
  #define ADC1_CLMS (* ((volatile uint32_t *) (0x400bb000 + 0x58)))

  // Field CLMS: Calibration Value
    inline uint32_t ADC_CLMS_CLMS (const uint32_t inValue) {return (inValue & 0x3fU) << 0 ; }

//---  Register CLM4: ADC Minus-Side General Calibration Value Register
  #define ADC_CLM4(group) (* ((volatile uint32_t *) (kBaseAddress_CLM4 [group] + 0x5c)))
  #define ADC0_CLM4 (* ((volatile uint32_t *) (0x4003b000 + 0x5c)))
  #define ADC1_CLM4 (* ((volatile uint32_t *) (0x400bb000 + 0x5c)))

  // Field CLM4: Calibration Value
    inline uint32_t ADC_CLM4_CLM4 (const uint32_t inValue) {return (inValue & 0x3ffU) << 0 ; }

//---  Register CLM3: ADC Minus-Side General Calibration Value Register
  #define ADC_CLM3(group) (* ((volatile uint32_t *) (kBaseAddress_CLM3 [group] + 0x60)))
  #define ADC0_CLM3 (* ((volatile uint32_t *) (0x4003b000 + 0x60)))
  #define ADC1_CLM3 (* ((volatile uint32_t *) (0x400bb000 + 0x60)))

  // Field CLM3: Calibration Value
    inline uint32_t ADC_CLM3_CLM3 (const uint32_t inValue) {return (inValue & 0x1ffU) << 0 ; }

//---  Register CLM2: ADC Minus-Side General Calibration Value Register
  #define ADC_CLM2(group) (* ((volatile uint32_t *) (kBaseAddress_CLM2 [group] + 0x64)))
  #define ADC0_CLM2 (* ((volatile uint32_t *) (0x4003b000 + 0x64)))
  #define ADC1_CLM2 (* ((volatile uint32_t *) (0x400bb000 + 0x64)))

  // Field CLM2: Calibration Value
    inline uint32_t ADC_CLM2_CLM2 (const uint32_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register CLM1: ADC Minus-Side General Calibration Value Register
  #define ADC_CLM1(group) (* ((volatile uint32_t *) (kBaseAddress_CLM1 [group] + 0x68)))
  #define ADC0_CLM1 (* ((volatile uint32_t *) (0x4003b000 + 0x68)))
  #define ADC1_CLM1 (* ((volatile uint32_t *) (0x400bb000 + 0x68)))

  // Field CLM1: Calibration Value
    inline uint32_t ADC_CLM1_CLM1 (const uint32_t inValue) {return (inValue & 0x7fU) << 0 ; }

//---  Register CLM0: ADC Minus-Side General Calibration Value Register
  #define ADC_CLM0(group) (* ((volatile uint32_t *) (kBaseAddress_CLM0 [group] + 0x6c)))
  #define ADC0_CLM0 (* ((volatile uint32_t *) (0x4003b000 + 0x6c)))
  #define ADC1_CLM0 (* ((volatile uint32_t *) (0x400bb000 + 0x6c)))

  // Field CLM0: Calibration Value
    inline uint32_t ADC_CLM0_CLM0 (const uint32_t inValue) {return (inValue & 0x3fU) << 0 ; }

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

  // Field MPL5: Master 5 Privilege Level
    const uint32_t AIPS_MPRA_MPL5 = 1U << 8 ;

  // Field MTW5: Master 5 Trusted For Writes
    const uint32_t AIPS_MPRA_MTW5 = 1U << 9 ;

  // Field MTR5: Master 5 Trusted For Read
    const uint32_t AIPS_MPRA_MTR5 = 1U << 10 ;

  // Field MPL4: Master 4 Privilege Level
    const uint32_t AIPS_MPRA_MPL4 = 1U << 12 ;

  // Field MTW4: Master 4 Trusted For Writes
    const uint32_t AIPS_MPRA_MTW4 = 1U << 13 ;

  // Field MTR4: Master 4 Trusted For Read
    const uint32_t AIPS_MPRA_MTR4 = 1U << 14 ;

  // Field MPL3: Master 3 Privilege Level
    const uint32_t AIPS_MPRA_MPL3 = 1U << 16 ;

  // Field MTW3: Master 3 Trusted For Writes
    const uint32_t AIPS_MPRA_MTW3 = 1U << 17 ;

  // Field MTR3: Master 3 Trusted For Read
    const uint32_t AIPS_MPRA_MTR3 = 1U << 18 ;

  // Field MPL2: Master 2 Privilege Level
    const uint32_t AIPS_MPRA_MPL2 = 1U << 20 ;

  // Field MTW2: Master 2 Trusted For Writes
    const uint32_t AIPS_MPRA_MTW2 = 1U << 21 ;

  // Field MTR2: Master 2 Trusted For Read
    const uint32_t AIPS_MPRA_MTR2 = 1U << 22 ;

  // Field MPL1: Master 1 Privilege Level
    const uint32_t AIPS_MPRA_MPL1 = 1U << 24 ;

  // Field MTW1: Master 1 Trusted for Writes
    const uint32_t AIPS_MPRA_MTW1 = 1U << 25 ;

  // Field MTR1: Master 1 Trusted for Read
    const uint32_t AIPS_MPRA_MTR1 = 1U << 26 ;

  // Field MPL0: Master 0 Privilege Level
    const uint32_t AIPS_MPRA_MPL0 = 1U << 28 ;

  // Field MTW0: Master 0 Trusted For Writes
    const uint32_t AIPS_MPRA_MTW0 = 1U << 29 ;

  // Field MTR0: Master 0 Trusted For Read
    const uint32_t AIPS_MPRA_MTR0 = 1U << 30 ;

//---  Register PACRA: Peripheral Access Control Register
  #define AIPS_PACRA(group) (* ((volatile uint32_t *) (kBaseAddress_PACRA [group] + 0x20)))
  #define AIPS0_PACRA (* ((volatile uint32_t *) (0x40000000 + 0x20)))
  #define AIPS1_PACRA (* ((volatile uint32_t *) (0x40080000 + 0x20)))

  // Field TP7: Trusted Protect
    const uint32_t AIPS_PACRA_TP7 = 1U << 0 ;

  // Field WP7: Write Protect
    const uint32_t AIPS_PACRA_WP7 = 1U << 1 ;

  // Field SP7: Supervisor Protect
    const uint32_t AIPS_PACRA_SP7 = 1U << 2 ;

  // Field TP6: Trusted Protect
    const uint32_t AIPS_PACRA_TP6 = 1U << 4 ;

  // Field WP6: Write Protect
    const uint32_t AIPS_PACRA_WP6 = 1U << 5 ;

  // Field SP6: Supervisor Protect
    const uint32_t AIPS_PACRA_SP6 = 1U << 6 ;

  // Field TP5: Trusted Protect
    const uint32_t AIPS_PACRA_TP5 = 1U << 8 ;

  // Field WP5: Write Protect
    const uint32_t AIPS_PACRA_WP5 = 1U << 9 ;

  // Field SP5: Supervisor Protect
    const uint32_t AIPS_PACRA_SP5 = 1U << 10 ;

  // Field TP4: Trusted Protect
    const uint32_t AIPS_PACRA_TP4 = 1U << 12 ;

  // Field WP4: Write Protect
    const uint32_t AIPS_PACRA_WP4 = 1U << 13 ;

  // Field SP4: Supervisor Protect
    const uint32_t AIPS_PACRA_SP4 = 1U << 14 ;

  // Field TP3: Trusted Protect
    const uint32_t AIPS_PACRA_TP3 = 1U << 16 ;

  // Field WP3: Write Protect
    const uint32_t AIPS_PACRA_WP3 = 1U << 17 ;

  // Field SP3: Supervisor Protect
    const uint32_t AIPS_PACRA_SP3 = 1U << 18 ;

  // Field TP2: Trusted Protect
    const uint32_t AIPS_PACRA_TP2 = 1U << 20 ;

  // Field WP2: Write Protect
    const uint32_t AIPS_PACRA_WP2 = 1U << 21 ;

  // Field SP2: Supervisor Protect
    const uint32_t AIPS_PACRA_SP2 = 1U << 22 ;

  // Field TP1: Trusted Protect
    const uint32_t AIPS_PACRA_TP1 = 1U << 24 ;

  // Field WP1: Write Protect
    const uint32_t AIPS_PACRA_WP1 = 1U << 25 ;

  // Field SP1: Supervisor Protect
    const uint32_t AIPS_PACRA_SP1 = 1U << 26 ;

  // Field TP0: Trusted Protect
    const uint32_t AIPS_PACRA_TP0 = 1U << 28 ;

  // Field WP0: Write Protect
    const uint32_t AIPS_PACRA_WP0 = 1U << 29 ;

  // Field SP0: Supervisor Protect
    const uint32_t AIPS_PACRA_SP0 = 1U << 30 ;

//---  Register PACRB: Peripheral Access Control Register
  #define AIPS_PACRB(group) (* ((volatile uint32_t *) (kBaseAddress_PACRB [group] + 0x24)))
  #define AIPS0_PACRB (* ((volatile uint32_t *) (0x40000000 + 0x24)))
  #define AIPS1_PACRB (* ((volatile uint32_t *) (0x40080000 + 0x24)))

  // Field TP7: Trusted Protect
    const uint32_t AIPS_PACRB_TP7 = 1U << 0 ;

  // Field WP7: Write Protect
    const uint32_t AIPS_PACRB_WP7 = 1U << 1 ;

  // Field SP7: Supervisor Protect
    const uint32_t AIPS_PACRB_SP7 = 1U << 2 ;

  // Field TP6: Trusted Protect
    const uint32_t AIPS_PACRB_TP6 = 1U << 4 ;

  // Field WP6: Write Protect
    const uint32_t AIPS_PACRB_WP6 = 1U << 5 ;

  // Field SP6: Supervisor Protect
    const uint32_t AIPS_PACRB_SP6 = 1U << 6 ;

  // Field TP5: Trusted Protect
    const uint32_t AIPS_PACRB_TP5 = 1U << 8 ;

  // Field WP5: Write Protect
    const uint32_t AIPS_PACRB_WP5 = 1U << 9 ;

  // Field SP5: Supervisor Protect
    const uint32_t AIPS_PACRB_SP5 = 1U << 10 ;

  // Field TP4: Trusted Protect
    const uint32_t AIPS_PACRB_TP4 = 1U << 12 ;

  // Field WP4: Write Protect
    const uint32_t AIPS_PACRB_WP4 = 1U << 13 ;

  // Field SP4: Supervisor Protect
    const uint32_t AIPS_PACRB_SP4 = 1U << 14 ;

  // Field TP3: Trusted Protect
    const uint32_t AIPS_PACRB_TP3 = 1U << 16 ;

  // Field WP3: Write Protect
    const uint32_t AIPS_PACRB_WP3 = 1U << 17 ;

  // Field SP3: Supervisor Protect
    const uint32_t AIPS_PACRB_SP3 = 1U << 18 ;

  // Field TP2: Trusted Protect
    const uint32_t AIPS_PACRB_TP2 = 1U << 20 ;

  // Field WP2: Write Protect
    const uint32_t AIPS_PACRB_WP2 = 1U << 21 ;

  // Field SP2: Supervisor Protect
    const uint32_t AIPS_PACRB_SP2 = 1U << 22 ;

  // Field TP1: Trusted Protect
    const uint32_t AIPS_PACRB_TP1 = 1U << 24 ;

  // Field WP1: Write Protect
    const uint32_t AIPS_PACRB_WP1 = 1U << 25 ;

  // Field SP1: Supervisor Protect
    const uint32_t AIPS_PACRB_SP1 = 1U << 26 ;

  // Field TP0: Trusted Protect
    const uint32_t AIPS_PACRB_TP0 = 1U << 28 ;

  // Field WP0: Write Protect
    const uint32_t AIPS_PACRB_WP0 = 1U << 29 ;

  // Field SP0: Supervisor Protect
    const uint32_t AIPS_PACRB_SP0 = 1U << 30 ;

//---  Register PACRC: Peripheral Access Control Register
  #define AIPS_PACRC(group) (* ((volatile uint32_t *) (kBaseAddress_PACRC [group] + 0x28)))
  #define AIPS0_PACRC (* ((volatile uint32_t *) (0x40000000 + 0x28)))
  #define AIPS1_PACRC (* ((volatile uint32_t *) (0x40080000 + 0x28)))

  // Field TP7: Trusted Protect
    const uint32_t AIPS_PACRC_TP7 = 1U << 0 ;

  // Field WP7: Write Protect
    const uint32_t AIPS_PACRC_WP7 = 1U << 1 ;

  // Field SP7: Supervisor Protect
    const uint32_t AIPS_PACRC_SP7 = 1U << 2 ;

  // Field TP6: Trusted Protect
    const uint32_t AIPS_PACRC_TP6 = 1U << 4 ;

  // Field WP6: Write Protect
    const uint32_t AIPS_PACRC_WP6 = 1U << 5 ;

  // Field SP6: Supervisor Protect
    const uint32_t AIPS_PACRC_SP6 = 1U << 6 ;

  // Field TP5: Trusted Protect
    const uint32_t AIPS_PACRC_TP5 = 1U << 8 ;

  // Field WP5: Write Protect
    const uint32_t AIPS_PACRC_WP5 = 1U << 9 ;

  // Field SP5: Supervisor Protect
    const uint32_t AIPS_PACRC_SP5 = 1U << 10 ;

  // Field TP4: Trusted Protect
    const uint32_t AIPS_PACRC_TP4 = 1U << 12 ;

  // Field WP4: Write Protect
    const uint32_t AIPS_PACRC_WP4 = 1U << 13 ;

  // Field SP4: Supervisor Protect
    const uint32_t AIPS_PACRC_SP4 = 1U << 14 ;

  // Field TP3: Trusted Protect
    const uint32_t AIPS_PACRC_TP3 = 1U << 16 ;

  // Field WP3: Write Protect
    const uint32_t AIPS_PACRC_WP3 = 1U << 17 ;

  // Field SP3: Supervisor Protect
    const uint32_t AIPS_PACRC_SP3 = 1U << 18 ;

  // Field TP2: Trusted Protect
    const uint32_t AIPS_PACRC_TP2 = 1U << 20 ;

  // Field WP2: Write Protect
    const uint32_t AIPS_PACRC_WP2 = 1U << 21 ;

  // Field SP2: Supervisor Protect
    const uint32_t AIPS_PACRC_SP2 = 1U << 22 ;

  // Field TP1: Trusted Protect
    const uint32_t AIPS_PACRC_TP1 = 1U << 24 ;

  // Field WP1: Write Protect
    const uint32_t AIPS_PACRC_WP1 = 1U << 25 ;

  // Field SP1: Supervisor Protect
    const uint32_t AIPS_PACRC_SP1 = 1U << 26 ;

  // Field TP0: Trusted Protect
    const uint32_t AIPS_PACRC_TP0 = 1U << 28 ;

  // Field WP0: Write Protect
    const uint32_t AIPS_PACRC_WP0 = 1U << 29 ;

  // Field SP0: Supervisor Protect
    const uint32_t AIPS_PACRC_SP0 = 1U << 30 ;

//---  Register PACRD: Peripheral Access Control Register
  #define AIPS_PACRD(group) (* ((volatile uint32_t *) (kBaseAddress_PACRD [group] + 0x2c)))
  #define AIPS0_PACRD (* ((volatile uint32_t *) (0x40000000 + 0x2c)))
  #define AIPS1_PACRD (* ((volatile uint32_t *) (0x40080000 + 0x2c)))

  // Field TP7: Trusted Protect
    const uint32_t AIPS_PACRD_TP7 = 1U << 0 ;

  // Field WP7: Write Protect
    const uint32_t AIPS_PACRD_WP7 = 1U << 1 ;

  // Field SP7: Supervisor Protect
    const uint32_t AIPS_PACRD_SP7 = 1U << 2 ;

  // Field TP6: Trusted Protect
    const uint32_t AIPS_PACRD_TP6 = 1U << 4 ;

  // Field WP6: Write Protect
    const uint32_t AIPS_PACRD_WP6 = 1U << 5 ;

  // Field SP6: Supervisor Protect
    const uint32_t AIPS_PACRD_SP6 = 1U << 6 ;

  // Field TP5: Trusted Protect
    const uint32_t AIPS_PACRD_TP5 = 1U << 8 ;

  // Field WP5: Write Protect
    const uint32_t AIPS_PACRD_WP5 = 1U << 9 ;

  // Field SP5: Supervisor Protect
    const uint32_t AIPS_PACRD_SP5 = 1U << 10 ;

  // Field TP4: Trusted Protect
    const uint32_t AIPS_PACRD_TP4 = 1U << 12 ;

  // Field WP4: Write Protect
    const uint32_t AIPS_PACRD_WP4 = 1U << 13 ;

  // Field SP4: Supervisor Protect
    const uint32_t AIPS_PACRD_SP4 = 1U << 14 ;

  // Field TP3: Trusted Protect
    const uint32_t AIPS_PACRD_TP3 = 1U << 16 ;

  // Field WP3: Write Protect
    const uint32_t AIPS_PACRD_WP3 = 1U << 17 ;

  // Field SP3: Supervisor Protect
    const uint32_t AIPS_PACRD_SP3 = 1U << 18 ;

  // Field TP2: Trusted Protect
    const uint32_t AIPS_PACRD_TP2 = 1U << 20 ;

  // Field WP2: Write Protect
    const uint32_t AIPS_PACRD_WP2 = 1U << 21 ;

  // Field SP2: Supervisor Protect
    const uint32_t AIPS_PACRD_SP2 = 1U << 22 ;

  // Field TP1: Trusted Protect
    const uint32_t AIPS_PACRD_TP1 = 1U << 24 ;

  // Field WP1: Write Protect
    const uint32_t AIPS_PACRD_WP1 = 1U << 25 ;

  // Field SP1: Supervisor Protect
    const uint32_t AIPS_PACRD_SP1 = 1U << 26 ;

  // Field TP0: Trusted Protect
    const uint32_t AIPS_PACRD_TP0 = 1U << 28 ;

  // Field WP0: Write Protect
    const uint32_t AIPS_PACRD_WP0 = 1U << 29 ;

  // Field SP0: Supervisor Protect
    const uint32_t AIPS_PACRD_SP0 = 1U << 30 ;

//---  Register PACRE: Peripheral Access Control Register
  #define AIPS_PACRE(group) (* ((volatile uint32_t *) (kBaseAddress_PACRE [group] + 0x40)))
  #define AIPS0_PACRE (* ((volatile uint32_t *) (0x40000000 + 0x40)))
  #define AIPS1_PACRE (* ((volatile uint32_t *) (0x40080000 + 0x40)))

  // Field TP7: Trusted Protect
    const uint32_t AIPS_PACRE_TP7 = 1U << 0 ;

  // Field WP7: Write Protect
    const uint32_t AIPS_PACRE_WP7 = 1U << 1 ;

  // Field SP7: Supervisor Protect
    const uint32_t AIPS_PACRE_SP7 = 1U << 2 ;

  // Field TP6: Trusted Protect
    const uint32_t AIPS_PACRE_TP6 = 1U << 4 ;

  // Field WP6: Write Protect
    const uint32_t AIPS_PACRE_WP6 = 1U << 5 ;

  // Field SP6: Supervisor Protect
    const uint32_t AIPS_PACRE_SP6 = 1U << 6 ;

  // Field TP5: Trusted Protect
    const uint32_t AIPS_PACRE_TP5 = 1U << 8 ;

  // Field WP5: Write Protect
    const uint32_t AIPS_PACRE_WP5 = 1U << 9 ;

  // Field SP5: Supervisor Protect
    const uint32_t AIPS_PACRE_SP5 = 1U << 10 ;

  // Field TP4: Trusted Protect
    const uint32_t AIPS_PACRE_TP4 = 1U << 12 ;

  // Field WP4: Write Protect
    const uint32_t AIPS_PACRE_WP4 = 1U << 13 ;

  // Field SP4: Supervisor Protect
    const uint32_t AIPS_PACRE_SP4 = 1U << 14 ;

  // Field TP3: Trusted Protect
    const uint32_t AIPS_PACRE_TP3 = 1U << 16 ;

  // Field WP3: Write Protect
    const uint32_t AIPS_PACRE_WP3 = 1U << 17 ;

  // Field SP3: Supervisor Protect
    const uint32_t AIPS_PACRE_SP3 = 1U << 18 ;

  // Field TP2: Trusted Protect
    const uint32_t AIPS_PACRE_TP2 = 1U << 20 ;

  // Field WP2: Write Protect
    const uint32_t AIPS_PACRE_WP2 = 1U << 21 ;

  // Field SP2: Supervisor Protect
    const uint32_t AIPS_PACRE_SP2 = 1U << 22 ;

  // Field TP1: Trusted Protect
    const uint32_t AIPS_PACRE_TP1 = 1U << 24 ;

  // Field WP1: Write Protect
    const uint32_t AIPS_PACRE_WP1 = 1U << 25 ;

  // Field SP1: Supervisor Protect
    const uint32_t AIPS_PACRE_SP1 = 1U << 26 ;

  // Field TP0: Trusted Protect
    const uint32_t AIPS_PACRE_TP0 = 1U << 28 ;

  // Field WP0: Write Protect
    const uint32_t AIPS_PACRE_WP0 = 1U << 29 ;

  // Field SP0: Supervisor Protect
    const uint32_t AIPS_PACRE_SP0 = 1U << 30 ;

//---  Register PACRF: Peripheral Access Control Register
  #define AIPS_PACRF(group) (* ((volatile uint32_t *) (kBaseAddress_PACRF [group] + 0x44)))
  #define AIPS0_PACRF (* ((volatile uint32_t *) (0x40000000 + 0x44)))
  #define AIPS1_PACRF (* ((volatile uint32_t *) (0x40080000 + 0x44)))

  // Field TP7: Trusted Protect
    const uint32_t AIPS_PACRF_TP7 = 1U << 0 ;

  // Field WP7: Write Protect
    const uint32_t AIPS_PACRF_WP7 = 1U << 1 ;

  // Field SP7: Supervisor Protect
    const uint32_t AIPS_PACRF_SP7 = 1U << 2 ;

  // Field TP6: Trusted Protect
    const uint32_t AIPS_PACRF_TP6 = 1U << 4 ;

  // Field WP6: Write Protect
    const uint32_t AIPS_PACRF_WP6 = 1U << 5 ;

  // Field SP6: Supervisor Protect
    const uint32_t AIPS_PACRF_SP6 = 1U << 6 ;

  // Field TP5: Trusted Protect
    const uint32_t AIPS_PACRF_TP5 = 1U << 8 ;

  // Field WP5: Write Protect
    const uint32_t AIPS_PACRF_WP5 = 1U << 9 ;

  // Field SP5: Supervisor Protect
    const uint32_t AIPS_PACRF_SP5 = 1U << 10 ;

  // Field TP4: Trusted Protect
    const uint32_t AIPS_PACRF_TP4 = 1U << 12 ;

  // Field WP4: Write Protect
    const uint32_t AIPS_PACRF_WP4 = 1U << 13 ;

  // Field SP4: Supervisor Protect
    const uint32_t AIPS_PACRF_SP4 = 1U << 14 ;

  // Field TP3: Trusted Protect
    const uint32_t AIPS_PACRF_TP3 = 1U << 16 ;

  // Field WP3: Write Protect
    const uint32_t AIPS_PACRF_WP3 = 1U << 17 ;

  // Field SP3: Supervisor Protect
    const uint32_t AIPS_PACRF_SP3 = 1U << 18 ;

  // Field TP2: Trusted Protect
    const uint32_t AIPS_PACRF_TP2 = 1U << 20 ;

  // Field WP2: Write Protect
    const uint32_t AIPS_PACRF_WP2 = 1U << 21 ;

  // Field SP2: Supervisor Protect
    const uint32_t AIPS_PACRF_SP2 = 1U << 22 ;

  // Field TP1: Trusted Protect
    const uint32_t AIPS_PACRF_TP1 = 1U << 24 ;

  // Field WP1: Write Protect
    const uint32_t AIPS_PACRF_WP1 = 1U << 25 ;

  // Field SP1: Supervisor Protect
    const uint32_t AIPS_PACRF_SP1 = 1U << 26 ;

  // Field TP0: Trusted Protect
    const uint32_t AIPS_PACRF_TP0 = 1U << 28 ;

  // Field WP0: Write Protect
    const uint32_t AIPS_PACRF_WP0 = 1U << 29 ;

  // Field SP0: Supervisor Protect
    const uint32_t AIPS_PACRF_SP0 = 1U << 30 ;

//---  Register PACRG: Peripheral Access Control Register
  #define AIPS_PACRG(group) (* ((volatile uint32_t *) (kBaseAddress_PACRG [group] + 0x48)))
  #define AIPS0_PACRG (* ((volatile uint32_t *) (0x40000000 + 0x48)))
  #define AIPS1_PACRG (* ((volatile uint32_t *) (0x40080000 + 0x48)))

  // Field TP7: Trusted Protect
    const uint32_t AIPS_PACRG_TP7 = 1U << 0 ;

  // Field WP7: Write Protect
    const uint32_t AIPS_PACRG_WP7 = 1U << 1 ;

  // Field SP7: Supervisor Protect
    const uint32_t AIPS_PACRG_SP7 = 1U << 2 ;

  // Field TP6: Trusted Protect
    const uint32_t AIPS_PACRG_TP6 = 1U << 4 ;

  // Field WP6: Write Protect
    const uint32_t AIPS_PACRG_WP6 = 1U << 5 ;

  // Field SP6: Supervisor Protect
    const uint32_t AIPS_PACRG_SP6 = 1U << 6 ;

  // Field TP5: Trusted Protect
    const uint32_t AIPS_PACRG_TP5 = 1U << 8 ;

  // Field WP5: Write Protect
    const uint32_t AIPS_PACRG_WP5 = 1U << 9 ;

  // Field SP5: Supervisor Protect
    const uint32_t AIPS_PACRG_SP5 = 1U << 10 ;

  // Field TP4: Trusted Protect
    const uint32_t AIPS_PACRG_TP4 = 1U << 12 ;

  // Field WP4: Write Protect
    const uint32_t AIPS_PACRG_WP4 = 1U << 13 ;

  // Field SP4: Supervisor Protect
    const uint32_t AIPS_PACRG_SP4 = 1U << 14 ;

  // Field TP3: Trusted Protect
    const uint32_t AIPS_PACRG_TP3 = 1U << 16 ;

  // Field WP3: Write Protect
    const uint32_t AIPS_PACRG_WP3 = 1U << 17 ;

  // Field SP3: Supervisor Protect
    const uint32_t AIPS_PACRG_SP3 = 1U << 18 ;

  // Field TP2: Trusted Protect
    const uint32_t AIPS_PACRG_TP2 = 1U << 20 ;

  // Field WP2: Write Protect
    const uint32_t AIPS_PACRG_WP2 = 1U << 21 ;

  // Field SP2: Supervisor Protect
    const uint32_t AIPS_PACRG_SP2 = 1U << 22 ;

  // Field TP1: Trusted Protect
    const uint32_t AIPS_PACRG_TP1 = 1U << 24 ;

  // Field WP1: Write Protect
    const uint32_t AIPS_PACRG_WP1 = 1U << 25 ;

  // Field SP1: Supervisor Protect
    const uint32_t AIPS_PACRG_SP1 = 1U << 26 ;

  // Field TP0: Trusted Protect
    const uint32_t AIPS_PACRG_TP0 = 1U << 28 ;

  // Field WP0: Write Protect
    const uint32_t AIPS_PACRG_WP0 = 1U << 29 ;

  // Field SP0: Supervisor Protect
    const uint32_t AIPS_PACRG_SP0 = 1U << 30 ;

//---  Register PACRH: Peripheral Access Control Register
  #define AIPS_PACRH(group) (* ((volatile uint32_t *) (kBaseAddress_PACRH [group] + 0x4c)))
  #define AIPS0_PACRH (* ((volatile uint32_t *) (0x40000000 + 0x4c)))
  #define AIPS1_PACRH (* ((volatile uint32_t *) (0x40080000 + 0x4c)))

  // Field TP7: Trusted Protect
    const uint32_t AIPS_PACRH_TP7 = 1U << 0 ;

  // Field WP7: Write Protect
    const uint32_t AIPS_PACRH_WP7 = 1U << 1 ;

  // Field SP7: Supervisor Protect
    const uint32_t AIPS_PACRH_SP7 = 1U << 2 ;

  // Field TP6: Trusted Protect
    const uint32_t AIPS_PACRH_TP6 = 1U << 4 ;

  // Field WP6: Write Protect
    const uint32_t AIPS_PACRH_WP6 = 1U << 5 ;

  // Field SP6: Supervisor Protect
    const uint32_t AIPS_PACRH_SP6 = 1U << 6 ;

  // Field TP5: Trusted Protect
    const uint32_t AIPS_PACRH_TP5 = 1U << 8 ;

  // Field WP5: Write Protect
    const uint32_t AIPS_PACRH_WP5 = 1U << 9 ;

  // Field SP5: Supervisor Protect
    const uint32_t AIPS_PACRH_SP5 = 1U << 10 ;

  // Field TP4: Trusted Protect
    const uint32_t AIPS_PACRH_TP4 = 1U << 12 ;

  // Field WP4: Write Protect
    const uint32_t AIPS_PACRH_WP4 = 1U << 13 ;

  // Field SP4: Supervisor Protect
    const uint32_t AIPS_PACRH_SP4 = 1U << 14 ;

  // Field TP3: Trusted Protect
    const uint32_t AIPS_PACRH_TP3 = 1U << 16 ;

  // Field WP3: Write Protect
    const uint32_t AIPS_PACRH_WP3 = 1U << 17 ;

  // Field SP3: Supervisor Protect
    const uint32_t AIPS_PACRH_SP3 = 1U << 18 ;

  // Field TP2: Trusted Protect
    const uint32_t AIPS_PACRH_TP2 = 1U << 20 ;

  // Field WP2: Write Protect
    const uint32_t AIPS_PACRH_WP2 = 1U << 21 ;

  // Field SP2: Supervisor Protect
    const uint32_t AIPS_PACRH_SP2 = 1U << 22 ;

  // Field TP1: Trusted Protect
    const uint32_t AIPS_PACRH_TP1 = 1U << 24 ;

  // Field WP1: Write Protect
    const uint32_t AIPS_PACRH_WP1 = 1U << 25 ;

  // Field SP1: Supervisor Protect
    const uint32_t AIPS_PACRH_SP1 = 1U << 26 ;

  // Field TP0: Trusted Protect
    const uint32_t AIPS_PACRH_TP0 = 1U << 28 ;

  // Field WP0: Write Protect
    const uint32_t AIPS_PACRH_WP0 = 1U << 29 ;

  // Field SP0: Supervisor Protect
    const uint32_t AIPS_PACRH_SP0 = 1U << 30 ;

//---  Register PACRI: Peripheral Access Control Register
  #define AIPS_PACRI(group) (* ((volatile uint32_t *) (kBaseAddress_PACRI [group] + 0x50)))
  #define AIPS0_PACRI (* ((volatile uint32_t *) (0x40000000 + 0x50)))
  #define AIPS1_PACRI (* ((volatile uint32_t *) (0x40080000 + 0x50)))

  // Field TP7: Trusted Protect
    const uint32_t AIPS_PACRI_TP7 = 1U << 0 ;

  // Field WP7: Write Protect
    const uint32_t AIPS_PACRI_WP7 = 1U << 1 ;

  // Field SP7: Supervisor Protect
    const uint32_t AIPS_PACRI_SP7 = 1U << 2 ;

  // Field TP6: Trusted Protect
    const uint32_t AIPS_PACRI_TP6 = 1U << 4 ;

  // Field WP6: Write Protect
    const uint32_t AIPS_PACRI_WP6 = 1U << 5 ;

  // Field SP6: Supervisor Protect
    const uint32_t AIPS_PACRI_SP6 = 1U << 6 ;

  // Field TP5: Trusted Protect
    const uint32_t AIPS_PACRI_TP5 = 1U << 8 ;

  // Field WP5: Write Protect
    const uint32_t AIPS_PACRI_WP5 = 1U << 9 ;

  // Field SP5: Supervisor Protect
    const uint32_t AIPS_PACRI_SP5 = 1U << 10 ;

  // Field TP4: Trusted Protect
    const uint32_t AIPS_PACRI_TP4 = 1U << 12 ;

  // Field WP4: Write Protect
    const uint32_t AIPS_PACRI_WP4 = 1U << 13 ;

  // Field SP4: Supervisor Protect
    const uint32_t AIPS_PACRI_SP4 = 1U << 14 ;

  // Field TP3: Trusted Protect
    const uint32_t AIPS_PACRI_TP3 = 1U << 16 ;

  // Field WP3: Write Protect
    const uint32_t AIPS_PACRI_WP3 = 1U << 17 ;

  // Field SP3: Supervisor Protect
    const uint32_t AIPS_PACRI_SP3 = 1U << 18 ;

  // Field TP2: Trusted Protect
    const uint32_t AIPS_PACRI_TP2 = 1U << 20 ;

  // Field WP2: Write Protect
    const uint32_t AIPS_PACRI_WP2 = 1U << 21 ;

  // Field SP2: Supervisor Protect
    const uint32_t AIPS_PACRI_SP2 = 1U << 22 ;

  // Field TP1: Trusted Protect
    const uint32_t AIPS_PACRI_TP1 = 1U << 24 ;

  // Field WP1: Write Protect
    const uint32_t AIPS_PACRI_WP1 = 1U << 25 ;

  // Field SP1: Supervisor Protect
    const uint32_t AIPS_PACRI_SP1 = 1U << 26 ;

  // Field TP0: Trusted Protect
    const uint32_t AIPS_PACRI_TP0 = 1U << 28 ;

  // Field WP0: Write Protect
    const uint32_t AIPS_PACRI_WP0 = 1U << 29 ;

  // Field SP0: Supervisor Protect
    const uint32_t AIPS_PACRI_SP0 = 1U << 30 ;

//---  Register PACRJ: Peripheral Access Control Register
  #define AIPS_PACRJ(group) (* ((volatile uint32_t *) (kBaseAddress_PACRJ [group] + 0x54)))
  #define AIPS0_PACRJ (* ((volatile uint32_t *) (0x40000000 + 0x54)))
  #define AIPS1_PACRJ (* ((volatile uint32_t *) (0x40080000 + 0x54)))

  // Field TP7: Trusted Protect
    const uint32_t AIPS_PACRJ_TP7 = 1U << 0 ;

  // Field WP7: Write Protect
    const uint32_t AIPS_PACRJ_WP7 = 1U << 1 ;

  // Field SP7: Supervisor Protect
    const uint32_t AIPS_PACRJ_SP7 = 1U << 2 ;

  // Field TP6: Trusted Protect
    const uint32_t AIPS_PACRJ_TP6 = 1U << 4 ;

  // Field WP6: Write Protect
    const uint32_t AIPS_PACRJ_WP6 = 1U << 5 ;

  // Field SP6: Supervisor Protect
    const uint32_t AIPS_PACRJ_SP6 = 1U << 6 ;

  // Field TP5: Trusted Protect
    const uint32_t AIPS_PACRJ_TP5 = 1U << 8 ;

  // Field WP5: Write Protect
    const uint32_t AIPS_PACRJ_WP5 = 1U << 9 ;

  // Field SP5: Supervisor Protect
    const uint32_t AIPS_PACRJ_SP5 = 1U << 10 ;

  // Field TP4: Trusted Protect
    const uint32_t AIPS_PACRJ_TP4 = 1U << 12 ;

  // Field WP4: Write Protect
    const uint32_t AIPS_PACRJ_WP4 = 1U << 13 ;

  // Field SP4: Supervisor Protect
    const uint32_t AIPS_PACRJ_SP4 = 1U << 14 ;

  // Field TP3: Trusted Protect
    const uint32_t AIPS_PACRJ_TP3 = 1U << 16 ;

  // Field WP3: Write Protect
    const uint32_t AIPS_PACRJ_WP3 = 1U << 17 ;

  // Field SP3: Supervisor Protect
    const uint32_t AIPS_PACRJ_SP3 = 1U << 18 ;

  // Field TP2: Trusted Protect
    const uint32_t AIPS_PACRJ_TP2 = 1U << 20 ;

  // Field WP2: Write Protect
    const uint32_t AIPS_PACRJ_WP2 = 1U << 21 ;

  // Field SP2: Supervisor Protect
    const uint32_t AIPS_PACRJ_SP2 = 1U << 22 ;

  // Field TP1: Trusted Protect
    const uint32_t AIPS_PACRJ_TP1 = 1U << 24 ;

  // Field WP1: Write Protect
    const uint32_t AIPS_PACRJ_WP1 = 1U << 25 ;

  // Field SP1: Supervisor Protect
    const uint32_t AIPS_PACRJ_SP1 = 1U << 26 ;

  // Field TP0: Trusted Protect
    const uint32_t AIPS_PACRJ_TP0 = 1U << 28 ;

  // Field WP0: Write Protect
    const uint32_t AIPS_PACRJ_WP0 = 1U << 29 ;

  // Field SP0: Supervisor Protect
    const uint32_t AIPS_PACRJ_SP0 = 1U << 30 ;

//---  Register PACRK: Peripheral Access Control Register
  #define AIPS_PACRK(group) (* ((volatile uint32_t *) (kBaseAddress_PACRK [group] + 0x58)))
  #define AIPS0_PACRK (* ((volatile uint32_t *) (0x40000000 + 0x58)))
  #define AIPS1_PACRK (* ((volatile uint32_t *) (0x40080000 + 0x58)))

  // Field TP7: Trusted Protect
    const uint32_t AIPS_PACRK_TP7 = 1U << 0 ;

  // Field WP7: Write Protect
    const uint32_t AIPS_PACRK_WP7 = 1U << 1 ;

  // Field SP7: Supervisor Protect
    const uint32_t AIPS_PACRK_SP7 = 1U << 2 ;

  // Field TP6: Trusted Protect
    const uint32_t AIPS_PACRK_TP6 = 1U << 4 ;

  // Field WP6: Write Protect
    const uint32_t AIPS_PACRK_WP6 = 1U << 5 ;

  // Field SP6: Supervisor Protect
    const uint32_t AIPS_PACRK_SP6 = 1U << 6 ;

  // Field TP5: Trusted Protect
    const uint32_t AIPS_PACRK_TP5 = 1U << 8 ;

  // Field WP5: Write Protect
    const uint32_t AIPS_PACRK_WP5 = 1U << 9 ;

  // Field SP5: Supervisor Protect
    const uint32_t AIPS_PACRK_SP5 = 1U << 10 ;

  // Field TP4: Trusted Protect
    const uint32_t AIPS_PACRK_TP4 = 1U << 12 ;

  // Field WP4: Write Protect
    const uint32_t AIPS_PACRK_WP4 = 1U << 13 ;

  // Field SP4: Supervisor Protect
    const uint32_t AIPS_PACRK_SP4 = 1U << 14 ;

  // Field TP3: Trusted Protect
    const uint32_t AIPS_PACRK_TP3 = 1U << 16 ;

  // Field WP3: Write Protect
    const uint32_t AIPS_PACRK_WP3 = 1U << 17 ;

  // Field SP3: Supervisor Protect
    const uint32_t AIPS_PACRK_SP3 = 1U << 18 ;

  // Field TP2: Trusted Protect
    const uint32_t AIPS_PACRK_TP2 = 1U << 20 ;

  // Field WP2: Write Protect
    const uint32_t AIPS_PACRK_WP2 = 1U << 21 ;

  // Field SP2: Supervisor Protect
    const uint32_t AIPS_PACRK_SP2 = 1U << 22 ;

  // Field TP1: Trusted Protect
    const uint32_t AIPS_PACRK_TP1 = 1U << 24 ;

  // Field WP1: Write Protect
    const uint32_t AIPS_PACRK_WP1 = 1U << 25 ;

  // Field SP1: Supervisor Protect
    const uint32_t AIPS_PACRK_SP1 = 1U << 26 ;

  // Field TP0: Trusted Protect
    const uint32_t AIPS_PACRK_TP0 = 1U << 28 ;

  // Field WP0: Write Protect
    const uint32_t AIPS_PACRK_WP0 = 1U << 29 ;

  // Field SP0: Supervisor Protect
    const uint32_t AIPS_PACRK_SP0 = 1U << 30 ;

//---  Register PACRL: Peripheral Access Control Register
  #define AIPS_PACRL(group) (* ((volatile uint32_t *) (kBaseAddress_PACRL [group] + 0x5c)))
  #define AIPS0_PACRL (* ((volatile uint32_t *) (0x40000000 + 0x5c)))
  #define AIPS1_PACRL (* ((volatile uint32_t *) (0x40080000 + 0x5c)))

  // Field TP7: Trusted Protect
    const uint32_t AIPS_PACRL_TP7 = 1U << 0 ;

  // Field WP7: Write Protect
    const uint32_t AIPS_PACRL_WP7 = 1U << 1 ;

  // Field SP7: Supervisor Protect
    const uint32_t AIPS_PACRL_SP7 = 1U << 2 ;

  // Field TP6: Trusted Protect
    const uint32_t AIPS_PACRL_TP6 = 1U << 4 ;

  // Field WP6: Write Protect
    const uint32_t AIPS_PACRL_WP6 = 1U << 5 ;

  // Field SP6: Supervisor Protect
    const uint32_t AIPS_PACRL_SP6 = 1U << 6 ;

  // Field TP5: Trusted Protect
    const uint32_t AIPS_PACRL_TP5 = 1U << 8 ;

  // Field WP5: Write Protect
    const uint32_t AIPS_PACRL_WP5 = 1U << 9 ;

  // Field SP5: Supervisor Protect
    const uint32_t AIPS_PACRL_SP5 = 1U << 10 ;

  // Field TP4: Trusted Protect
    const uint32_t AIPS_PACRL_TP4 = 1U << 12 ;

  // Field WP4: Write Protect
    const uint32_t AIPS_PACRL_WP4 = 1U << 13 ;

  // Field SP4: Supervisor Protect
    const uint32_t AIPS_PACRL_SP4 = 1U << 14 ;

  // Field TP3: Trusted Protect
    const uint32_t AIPS_PACRL_TP3 = 1U << 16 ;

  // Field WP3: Write Protect
    const uint32_t AIPS_PACRL_WP3 = 1U << 17 ;

  // Field SP3: Supervisor Protect
    const uint32_t AIPS_PACRL_SP3 = 1U << 18 ;

  // Field TP2: Trusted Protect
    const uint32_t AIPS_PACRL_TP2 = 1U << 20 ;

  // Field WP2: Write Protect
    const uint32_t AIPS_PACRL_WP2 = 1U << 21 ;

  // Field SP2: Supervisor Protect
    const uint32_t AIPS_PACRL_SP2 = 1U << 22 ;

  // Field TP1: Trusted Protect
    const uint32_t AIPS_PACRL_TP1 = 1U << 24 ;

  // Field WP1: Write Protect
    const uint32_t AIPS_PACRL_WP1 = 1U << 25 ;

  // Field SP1: Supervisor Protect
    const uint32_t AIPS_PACRL_SP1 = 1U << 26 ;

  // Field TP0: Trusted Protect
    const uint32_t AIPS_PACRL_TP0 = 1U << 28 ;

  // Field WP0: Write Protect
    const uint32_t AIPS_PACRL_WP0 = 1U << 29 ;

  // Field SP0: Supervisor Protect
    const uint32_t AIPS_PACRL_SP0 = 1U << 30 ;

//---  Register PACRM: Peripheral Access Control Register
  #define AIPS_PACRM(group) (* ((volatile uint32_t *) (kBaseAddress_PACRM [group] + 0x60)))
  #define AIPS0_PACRM (* ((volatile uint32_t *) (0x40000000 + 0x60)))
  #define AIPS1_PACRM (* ((volatile uint32_t *) (0x40080000 + 0x60)))

  // Field TP7: Trusted Protect
    const uint32_t AIPS_PACRM_TP7 = 1U << 0 ;

  // Field WP7: Write Protect
    const uint32_t AIPS_PACRM_WP7 = 1U << 1 ;

  // Field SP7: Supervisor Protect
    const uint32_t AIPS_PACRM_SP7 = 1U << 2 ;

  // Field TP6: Trusted Protect
    const uint32_t AIPS_PACRM_TP6 = 1U << 4 ;

  // Field WP6: Write Protect
    const uint32_t AIPS_PACRM_WP6 = 1U << 5 ;

  // Field SP6: Supervisor Protect
    const uint32_t AIPS_PACRM_SP6 = 1U << 6 ;

  // Field TP5: Trusted Protect
    const uint32_t AIPS_PACRM_TP5 = 1U << 8 ;

  // Field WP5: Write Protect
    const uint32_t AIPS_PACRM_WP5 = 1U << 9 ;

  // Field SP5: Supervisor Protect
    const uint32_t AIPS_PACRM_SP5 = 1U << 10 ;

  // Field TP4: Trusted Protect
    const uint32_t AIPS_PACRM_TP4 = 1U << 12 ;

  // Field WP4: Write Protect
    const uint32_t AIPS_PACRM_WP4 = 1U << 13 ;

  // Field SP4: Supervisor Protect
    const uint32_t AIPS_PACRM_SP4 = 1U << 14 ;

  // Field TP3: Trusted Protect
    const uint32_t AIPS_PACRM_TP3 = 1U << 16 ;

  // Field WP3: Write Protect
    const uint32_t AIPS_PACRM_WP3 = 1U << 17 ;

  // Field SP3: Supervisor Protect
    const uint32_t AIPS_PACRM_SP3 = 1U << 18 ;

  // Field TP2: Trusted Protect
    const uint32_t AIPS_PACRM_TP2 = 1U << 20 ;

  // Field WP2: Write Protect
    const uint32_t AIPS_PACRM_WP2 = 1U << 21 ;

  // Field SP2: Supervisor Protect
    const uint32_t AIPS_PACRM_SP2 = 1U << 22 ;

  // Field TP1: Trusted Protect
    const uint32_t AIPS_PACRM_TP1 = 1U << 24 ;

  // Field WP1: Write Protect
    const uint32_t AIPS_PACRM_WP1 = 1U << 25 ;

  // Field SP1: Supervisor Protect
    const uint32_t AIPS_PACRM_SP1 = 1U << 26 ;

  // Field TP0: Trusted Protect
    const uint32_t AIPS_PACRM_TP0 = 1U << 28 ;

  // Field WP0: Write Protect
    const uint32_t AIPS_PACRM_WP0 = 1U << 29 ;

  // Field SP0: Supervisor Protect
    const uint32_t AIPS_PACRM_SP0 = 1U << 30 ;

//---  Register PACRN: Peripheral Access Control Register
  #define AIPS_PACRN(group) (* ((volatile uint32_t *) (kBaseAddress_PACRN [group] + 0x64)))
  #define AIPS0_PACRN (* ((volatile uint32_t *) (0x40000000 + 0x64)))
  #define AIPS1_PACRN (* ((volatile uint32_t *) (0x40080000 + 0x64)))

  // Field TP7: Trusted Protect
    const uint32_t AIPS_PACRN_TP7 = 1U << 0 ;

  // Field WP7: Write Protect
    const uint32_t AIPS_PACRN_WP7 = 1U << 1 ;

  // Field SP7: Supervisor Protect
    const uint32_t AIPS_PACRN_SP7 = 1U << 2 ;

  // Field TP6: Trusted Protect
    const uint32_t AIPS_PACRN_TP6 = 1U << 4 ;

  // Field WP6: Write Protect
    const uint32_t AIPS_PACRN_WP6 = 1U << 5 ;

  // Field SP6: Supervisor Protect
    const uint32_t AIPS_PACRN_SP6 = 1U << 6 ;

  // Field TP5: Trusted Protect
    const uint32_t AIPS_PACRN_TP5 = 1U << 8 ;

  // Field WP5: Write Protect
    const uint32_t AIPS_PACRN_WP5 = 1U << 9 ;

  // Field SP5: Supervisor Protect
    const uint32_t AIPS_PACRN_SP5 = 1U << 10 ;

  // Field TP4: Trusted Protect
    const uint32_t AIPS_PACRN_TP4 = 1U << 12 ;

  // Field WP4: Write Protect
    const uint32_t AIPS_PACRN_WP4 = 1U << 13 ;

  // Field SP4: Supervisor Protect
    const uint32_t AIPS_PACRN_SP4 = 1U << 14 ;

  // Field TP3: Trusted Protect
    const uint32_t AIPS_PACRN_TP3 = 1U << 16 ;

  // Field WP3: Write Protect
    const uint32_t AIPS_PACRN_WP3 = 1U << 17 ;

  // Field SP3: Supervisor Protect
    const uint32_t AIPS_PACRN_SP3 = 1U << 18 ;

  // Field TP2: Trusted Protect
    const uint32_t AIPS_PACRN_TP2 = 1U << 20 ;

  // Field WP2: Write Protect
    const uint32_t AIPS_PACRN_WP2 = 1U << 21 ;

  // Field SP2: Supervisor Protect
    const uint32_t AIPS_PACRN_SP2 = 1U << 22 ;

  // Field TP1: Trusted Protect
    const uint32_t AIPS_PACRN_TP1 = 1U << 24 ;

  // Field WP1: Write Protect
    const uint32_t AIPS_PACRN_WP1 = 1U << 25 ;

  // Field SP1: Supervisor Protect
    const uint32_t AIPS_PACRN_SP1 = 1U << 26 ;

  // Field TP0: Trusted Protect
    const uint32_t AIPS_PACRN_TP0 = 1U << 28 ;

  // Field WP0: Write Protect
    const uint32_t AIPS_PACRN_WP0 = 1U << 29 ;

  // Field SP0: Supervisor Protect
    const uint32_t AIPS_PACRN_SP0 = 1U << 30 ;

//---  Register PACRO: Peripheral Access Control Register
  #define AIPS_PACRO(group) (* ((volatile uint32_t *) (kBaseAddress_PACRO [group] + 0x68)))
  #define AIPS0_PACRO (* ((volatile uint32_t *) (0x40000000 + 0x68)))
  #define AIPS1_PACRO (* ((volatile uint32_t *) (0x40080000 + 0x68)))

  // Field TP7: Trusted Protect
    const uint32_t AIPS_PACRO_TP7 = 1U << 0 ;

  // Field WP7: Write Protect
    const uint32_t AIPS_PACRO_WP7 = 1U << 1 ;

  // Field SP7: Supervisor Protect
    const uint32_t AIPS_PACRO_SP7 = 1U << 2 ;

  // Field TP6: Trusted Protect
    const uint32_t AIPS_PACRO_TP6 = 1U << 4 ;

  // Field WP6: Write Protect
    const uint32_t AIPS_PACRO_WP6 = 1U << 5 ;

  // Field SP6: Supervisor Protect
    const uint32_t AIPS_PACRO_SP6 = 1U << 6 ;

  // Field TP5: Trusted Protect
    const uint32_t AIPS_PACRO_TP5 = 1U << 8 ;

  // Field WP5: Write Protect
    const uint32_t AIPS_PACRO_WP5 = 1U << 9 ;

  // Field SP5: Supervisor Protect
    const uint32_t AIPS_PACRO_SP5 = 1U << 10 ;

  // Field TP4: Trusted Protect
    const uint32_t AIPS_PACRO_TP4 = 1U << 12 ;

  // Field WP4: Write Protect
    const uint32_t AIPS_PACRO_WP4 = 1U << 13 ;

  // Field SP4: Supervisor Protect
    const uint32_t AIPS_PACRO_SP4 = 1U << 14 ;

  // Field TP3: Trusted Protect
    const uint32_t AIPS_PACRO_TP3 = 1U << 16 ;

  // Field WP3: Write Protect
    const uint32_t AIPS_PACRO_WP3 = 1U << 17 ;

  // Field SP3: Supervisor Protect
    const uint32_t AIPS_PACRO_SP3 = 1U << 18 ;

  // Field TP2: Trusted Protect
    const uint32_t AIPS_PACRO_TP2 = 1U << 20 ;

  // Field WP2: Write Protect
    const uint32_t AIPS_PACRO_WP2 = 1U << 21 ;

  // Field SP2: Supervisor Protect
    const uint32_t AIPS_PACRO_SP2 = 1U << 22 ;

  // Field TP1: Trusted Protect
    const uint32_t AIPS_PACRO_TP1 = 1U << 24 ;

  // Field WP1: Write Protect
    const uint32_t AIPS_PACRO_WP1 = 1U << 25 ;

  // Field SP1: Supervisor Protect
    const uint32_t AIPS_PACRO_SP1 = 1U << 26 ;

  // Field TP0: Trusted Protect
    const uint32_t AIPS_PACRO_TP0 = 1U << 28 ;

  // Field WP0: Write Protect
    const uint32_t AIPS_PACRO_WP0 = 1U << 29 ;

  // Field SP0: Supervisor Protect
    const uint32_t AIPS_PACRO_SP0 = 1U << 30 ;

//---  Register PACRP: Peripheral Access Control Register
  #define AIPS_PACRP(group) (* ((volatile uint32_t *) (kBaseAddress_PACRP [group] + 0x6c)))
  #define AIPS0_PACRP (* ((volatile uint32_t *) (0x40000000 + 0x6c)))
  #define AIPS1_PACRP (* ((volatile uint32_t *) (0x40080000 + 0x6c)))

  // Field TP7: Trusted Protect
    const uint32_t AIPS_PACRP_TP7 = 1U << 0 ;

  // Field WP7: Write Protect
    const uint32_t AIPS_PACRP_WP7 = 1U << 1 ;

  // Field SP7: Supervisor Protect
    const uint32_t AIPS_PACRP_SP7 = 1U << 2 ;

  // Field TP6: Trusted Protect
    const uint32_t AIPS_PACRP_TP6 = 1U << 4 ;

  // Field WP6: Write Protect
    const uint32_t AIPS_PACRP_WP6 = 1U << 5 ;

  // Field SP6: Supervisor Protect
    const uint32_t AIPS_PACRP_SP6 = 1U << 6 ;

  // Field TP5: Trusted Protect
    const uint32_t AIPS_PACRP_TP5 = 1U << 8 ;

  // Field WP5: Write Protect
    const uint32_t AIPS_PACRP_WP5 = 1U << 9 ;

  // Field SP5: Supervisor Protect
    const uint32_t AIPS_PACRP_SP5 = 1U << 10 ;

  // Field TP4: Trusted Protect
    const uint32_t AIPS_PACRP_TP4 = 1U << 12 ;

  // Field WP4: Write Protect
    const uint32_t AIPS_PACRP_WP4 = 1U << 13 ;

  // Field SP4: Supervisor Protect
    const uint32_t AIPS_PACRP_SP4 = 1U << 14 ;

  // Field TP3: Trusted Protect
    const uint32_t AIPS_PACRP_TP3 = 1U << 16 ;

  // Field WP3: Write Protect
    const uint32_t AIPS_PACRP_WP3 = 1U << 17 ;

  // Field SP3: Supervisor Protect
    const uint32_t AIPS_PACRP_SP3 = 1U << 18 ;

  // Field TP2: Trusted Protect
    const uint32_t AIPS_PACRP_TP2 = 1U << 20 ;

  // Field WP2: Write Protect
    const uint32_t AIPS_PACRP_WP2 = 1U << 21 ;

  // Field SP2: Supervisor Protect
    const uint32_t AIPS_PACRP_SP2 = 1U << 22 ;

  // Field TP1: Trusted Protect
    const uint32_t AIPS_PACRP_TP1 = 1U << 24 ;

  // Field WP1: Write Protect
    const uint32_t AIPS_PACRP_WP1 = 1U << 25 ;

  // Field SP1: Supervisor Protect
    const uint32_t AIPS_PACRP_SP1 = 1U << 26 ;

  // Field TP0: Trusted Protect
    const uint32_t AIPS_PACRP_TP0 = 1U << 28 ;

  // Field WP0: Write Protect
    const uint32_t AIPS_PACRP_WP0 = 1U << 29 ;

  // Field SP0: Supervisor Protect
    const uint32_t AIPS_PACRP_SP0 = 1U << 30 ;

//---  Register PACRU: Peripheral Access Control Register
  #define AIPS_PACRU(group) (* ((volatile uint32_t *) (kBaseAddress_PACRU [group] + 0x80)))
  #define AIPS0_PACRU (* ((volatile uint32_t *) (0x40000000 + 0x80)))
  #define AIPS1_PACRU (* ((volatile uint32_t *) (0x40080000 + 0x80)))

  // Field TP1: Trusted Protect
    const uint32_t AIPS_PACRU_TP1 = 1U << 24 ;

  // Field WP1: Write Protect
    const uint32_t AIPS_PACRU_WP1 = 1U << 25 ;

  // Field SP1: Supervisor Protect
    const uint32_t AIPS_PACRU_SP1 = 1U << 26 ;

  // Field TP0: Trusted Protect
    const uint32_t AIPS_PACRU_TP0 = 1U << 28 ;

  // Field WP0: Write Protect
    const uint32_t AIPS_PACRU_WP0 = 1U << 29 ;

  // Field SP0: Supervisor Protect
    const uint32_t AIPS_PACRU_SP0 = 1U << 30 ;

//------------------------------------------------------------------------------
// Peripheral AXBS: Crossbar switch
//------------------------------------------------------------------------------

//---  Registers PRS(0,1,2,3,4): Priority Registers Slave
  #define AXBS_PRS(idx) (* ((volatile uint32_t *) (0x40004000 + 0x0 + (idx) * 0x100)))
  #define AXBS_PRS0 (* ((volatile uint32_t *) (0x40004000 + 0x0 + 0 * 0x100)))
  #define AXBS_PRS1 (* ((volatile uint32_t *) (0x40004000 + 0x0 + 1 * 0x100)))
  #define AXBS_PRS2 (* ((volatile uint32_t *) (0x40004000 + 0x0 + 2 * 0x100)))
  #define AXBS_PRS3 (* ((volatile uint32_t *) (0x40004000 + 0x0 + 3 * 0x100)))
  #define AXBS_PRS4 (* ((volatile uint32_t *) (0x40004000 + 0x0 + 4 * 0x100)))

  // Field M0: Master 0 Priority. Sets the arbitration priority for this port on the associated slave port.
    inline uint32_t AXBS_PRS_M0 (const uint32_t inValue) {return (inValue & 0x7U) << 0 ; }

  // Field M1: Master 1 Priority. Sets the arbitration priority for this port on the associated slave port.
    inline uint32_t AXBS_PRS_M1 (const uint32_t inValue) {return (inValue & 0x7U) << 4 ; }

  // Field M2: Master 2 Priority. Sets the arbitration priority for this port on the associated slave port.
    inline uint32_t AXBS_PRS_M2 (const uint32_t inValue) {return (inValue & 0x7U) << 8 ; }

  // Field M3: Master 3 Priority. Sets the arbitration priority for this port on the associated slave port.
    inline uint32_t AXBS_PRS_M3 (const uint32_t inValue) {return (inValue & 0x7U) << 12 ; }

  // Field M4: Master 4 Priority. Sets the arbitration priority for this port on the associated slave port.
    inline uint32_t AXBS_PRS_M4 (const uint32_t inValue) {return (inValue & 0x7U) << 16 ; }

  // Field M5: Master 5 Priority. Sets the arbitration priority for this port on the associated slave port.
    inline uint32_t AXBS_PRS_M5 (const uint32_t inValue) {return (inValue & 0x7U) << 20 ; }

//---  Registers CRS(0,1,2,3,4): Control Register
  #define AXBS_CRS(idx) (* ((volatile uint32_t *) (0x40004000 + 0x10 + (idx) * 0x100)))
  #define AXBS_CRS0 (* ((volatile uint32_t *) (0x40004000 + 0x10 + 0 * 0x100)))
  #define AXBS_CRS1 (* ((volatile uint32_t *) (0x40004000 + 0x10 + 1 * 0x100)))
  #define AXBS_CRS2 (* ((volatile uint32_t *) (0x40004000 + 0x10 + 2 * 0x100)))
  #define AXBS_CRS3 (* ((volatile uint32_t *) (0x40004000 + 0x10 + 3 * 0x100)))
  #define AXBS_CRS4 (* ((volatile uint32_t *) (0x40004000 + 0x10 + 4 * 0x100)))

  // Field PARK: Park
    inline uint32_t AXBS_CRS_PARK (const uint32_t inValue) {return (inValue & 0x7U) << 0 ; }

  // Field PCTL: Parking Control
    inline uint32_t AXBS_CRS_PCTL (const uint32_t inValue) {return (inValue & 0x3U) << 4 ; }

  // Field ARB: Arbitration Mode
    inline uint32_t AXBS_CRS_ARB (const uint32_t inValue) {return (inValue & 0x3U) << 8 ; }

  // Field HLP: Halt Low Priority
    const uint32_t AXBS_CRS_HLP = 1U << 30 ;

  // Field RO: Read Only
    const uint32_t AXBS_CRS_RO = 1U << 31 ;

//---  Registers MGPCR(0,1,2,3,4,5): Master General Purpose Control Register
  #define AXBS_MGPCR(idx) (* ((volatile uint32_t *) (0x40004000 + 0x800 + (idx) * 0x100)))
  #define AXBS_MGPCR0 (* ((volatile uint32_t *) (0x40004000 + 0x800 + 0 * 0x100)))
  #define AXBS_MGPCR1 (* ((volatile uint32_t *) (0x40004000 + 0x800 + 1 * 0x100)))
  #define AXBS_MGPCR2 (* ((volatile uint32_t *) (0x40004000 + 0x800 + 2 * 0x100)))
  #define AXBS_MGPCR3 (* ((volatile uint32_t *) (0x40004000 + 0x800 + 3 * 0x100)))
  #define AXBS_MGPCR4 (* ((volatile uint32_t *) (0x40004000 + 0x800 + 4 * 0x100)))
  #define AXBS_MGPCR5 (* ((volatile uint32_t *) (0x40004000 + 0x800 + 5 * 0x100)))

  // Field AULB: Arbitrates On Undefined Length Bursts
    inline uint32_t AXBS_MGPCR_AULB (const uint32_t inValue) {return (inValue & 0x7U) << 0 ; }

//------------------------------------------------------------------------------
// Peripheral CAN0: Flex Controller Area Network module
//------------------------------------------------------------------------------

//---  Register MCR: Module Configuration Register
  #define CAN0_MCR (* ((volatile uint32_t *) (0x40024000 + 0)))

  // Field MAXMB: Number Of The Last Message Buffer
    inline uint32_t CAN0_MCR_MAXMB (const uint32_t inValue) {return (inValue & 0x7fU) << 0 ; }

  // Field IDAM: ID Acceptance Mode
    inline uint32_t CAN0_MCR_IDAM (const uint32_t inValue) {return (inValue & 0x3U) << 8 ; }

  // Field AEN: Abort Enable
    const uint32_t CAN0_MCR_AEN = 1U << 12 ;

  // Field LPRIOEN: Local Priority Enable
    const uint32_t CAN0_MCR_LPRIOEN = 1U << 13 ;

  // Field IRMQ: Individual Rx Masking And Queue Enable
    const uint32_t CAN0_MCR_IRMQ = 1U << 16 ;

  // Field SRXDIS: Self Reception Disable
    const uint32_t CAN0_MCR_SRXDIS = 1U << 17 ;

  // Field WAKSRC: Wake Up Source
    const uint32_t CAN0_MCR_WAKSRC = 1U << 19 ;

  // Field LPMACK: Low-Power Mode Acknowledge
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

//---  Register CTRL1: Control 1 register
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

  // Field TIMER: Timer Value
    inline uint32_t CAN0_TIMER_TIMER (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register RXMGMASK: Rx Mailboxes Global Mask Register
  #define CAN0_RXMGMASK (* ((volatile uint32_t *) (0x40024000 + 16)))

  // Field MG: Rx Mailboxes Global Mask Bits
    inline uint32_t CAN0_RXMGMASK_MG (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register RX14MASK: Rx 14 Mask register
  #define CAN0_RX14MASK (* ((volatile uint32_t *) (0x40024000 + 20)))

  // Field RX14M: Rx Buffer 14 Mask Bits
    inline uint32_t CAN0_RX14MASK_RX14M (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register RX15MASK: Rx 15 Mask register
  #define CAN0_RX15MASK (* ((volatile uint32_t *) (0x40024000 + 24)))

  // Field RX15M: Rx Buffer 15 Mask Bits
    inline uint32_t CAN0_RX15MASK_RX15M (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register ECR: Error Counter
  #define CAN0_ECR (* ((volatile uint32_t *) (0x40024000 + 28)))

  // Field TXERRCNT: Transmit Error Counter
    inline uint32_t CAN0_ECR_TXERRCNT (const uint32_t inValue) {return (inValue & 0xffU) << 0 ; }

  // Field RXERRCNT: Receive Error Counter
    inline uint32_t CAN0_ECR_RXERRCNT (const uint32_t inValue) {return (inValue & 0xffU) << 8 ; }

//---  Register ESR1: Error and Status 1 register
  #define CAN0_ESR1 (* ((volatile uint32_t *) (0x40024000 + 32)))

  // Field WAKINT: Wake-Up Interrupt
    const uint32_t CAN0_ESR1_WAKINT = 1U << 0 ;

  // Field ERRINT: Error Interrupt
    const uint32_t CAN0_ESR1_ERRINT = 1U << 1 ;

  // Field BOFFINT: Bus Off Interrupt
    const uint32_t CAN0_ESR1_BOFFINT = 1U << 2 ;

  // Field RX: FlexCAN In Reception
    const uint32_t CAN0_ESR1_RX = 1U << 3 ;

  // Field FLTCONF: Fault Confinement State
    inline uint32_t CAN0_ESR1_FLTCONF (const uint32_t inValue) {return (inValue & 0x3U) << 4 ; }

  // Field TX: FlexCAN In Transmission
    const uint32_t CAN0_ESR1_TX = 1U << 6 ;

  // Field IDLE: This bit indicates when CAN bus is in IDLE state
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

//---  Register IMASK1: Interrupt Masks 1 register
  #define CAN0_IMASK1 (* ((volatile uint32_t *) (0x40024000 + 40)))

  // Field BUFLM: Buffer MB i Mask
    inline uint32_t CAN0_IMASK1_BUFLM (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register IFLAG1: Interrupt Flags 1 register
  #define CAN0_IFLAG1 (* ((volatile uint32_t *) (0x40024000 + 48)))

  // Field BUF0I: Buffer MB0 Interrupt Or "reserved"
    const uint32_t CAN0_IFLAG1_BUF0I = 1U << 0 ;

  // Field BUF4TO1I: Buffer MB i Interrupt Or "reserved"
    inline uint32_t CAN0_IFLAG1_BUF4TO1I (const uint32_t inValue) {return (inValue & 0xfU) << 1 ; }

  // Field BUF5I: Buffer MB5 Interrupt Or "Frames available in Rx FIFO"
    const uint32_t CAN0_IFLAG1_BUF5I = 1U << 5 ;

  // Field BUF6I: Buffer MB6 Interrupt Or "Rx FIFO Warning"
    const uint32_t CAN0_IFLAG1_BUF6I = 1U << 6 ;

  // Field BUF7I: Buffer MB7 Interrupt Or "Rx FIFO Overflow"
    const uint32_t CAN0_IFLAG1_BUF7I = 1U << 7 ;

  // Field BUF31TO8I: Buffer MBi Interrupt
    inline uint32_t CAN0_IFLAG1_BUF31TO8I (const uint32_t inValue) {return (inValue & 0xffffffU) << 8 ; }

//---  Register CTRL2: Control 2 register
  #define CAN0_CTRL2 (* ((volatile uint32_t *) (0x40024000 + 52)))

  // Field EACEN: Entire Frame Arbitration Field Comparison Enable For Rx Mailboxes
    const uint32_t CAN0_CTRL2_EACEN = 1U << 16 ;

  // Field RRS: Remote Request Storing
    const uint32_t CAN0_CTRL2_RRS = 1U << 17 ;

  // Field MRP: Mailboxes Reception Priority
    const uint32_t CAN0_CTRL2_MRP = 1U << 18 ;

  // Field TASD: Tx Arbitration Start Delay
    inline uint32_t CAN0_CTRL2_TASD (const uint32_t inValue) {return (inValue & 0x1fU) << 19 ; }

  // Field RFFN: Number Of Rx FIFO Filters
    inline uint32_t CAN0_CTRL2_RFFN (const uint32_t inValue) {return (inValue & 0xfU) << 24 ; }

  // Field WRMFRZ: Write-Access To Memory In Freeze Mode
    const uint32_t CAN0_CTRL2_WRMFRZ = 1U << 28 ;

//---  Register ESR2: Error and Status 2 register
  #define CAN0_ESR2 (* ((const volatile uint32_t *) (0x40024000 + 56)))

  // Field IMB: Inactive Mailbox
    const uint32_t CAN0_ESR2_IMB = 1U << 13 ;

  // Field VPS: Valid Priority Status
    const uint32_t CAN0_ESR2_VPS = 1U << 14 ;

  // Field LPTM: Lowest Priority Tx Mailbox
    inline uint32_t CAN0_ESR2_LPTM (const uint32_t inValue) {return (inValue & 0x7fU) << 16 ; }

//---  Register CRCR: CRC Register
  #define CAN0_CRCR (* ((const volatile uint32_t *) (0x40024000 + 68)))

  // Field TXCRC: CRC Transmitted
    inline uint32_t CAN0_CRCR_TXCRC (const uint32_t inValue) {return (inValue & 0x7fffU) << 0 ; }

  // Field MBCRC: CRC Mailbox
    inline uint32_t CAN0_CRCR_MBCRC (const uint32_t inValue) {return (inValue & 0x7fU) << 16 ; }

//---  Register RXFGMASK: Rx FIFO Global Mask register
  #define CAN0_RXFGMASK (* ((volatile uint32_t *) (0x40024000 + 72)))

  // Field FGM: Rx FIFO Global Mask Bits
    inline uint32_t CAN0_RXFGMASK_FGM (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register RXFIR: Rx FIFO Information Register
  #define CAN0_RXFIR (* ((const volatile uint32_t *) (0x40024000 + 76)))

  // Field IDHIT: Identifier Acceptance Filter Hit Indicator
    inline uint32_t CAN0_RXFIR_IDHIT (const uint32_t inValue) {return (inValue & 0x1ffU) << 0 ; }

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

  // Field CODE: Reserved
    inline uint32_t CAN0_CS0_CODE (const uint32_t inValue) {return (inValue & 0xfU) << 24 ; }

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

  // Field CODE: Reserved
    inline uint32_t CAN0_CS1_CODE (const uint32_t inValue) {return (inValue & 0xfU) << 24 ; }

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

  // Field CODE: Reserved
    inline uint32_t CAN0_CS2_CODE (const uint32_t inValue) {return (inValue & 0xfU) << 24 ; }

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

  // Field CODE: Reserved
    inline uint32_t CAN0_CS3_CODE (const uint32_t inValue) {return (inValue & 0xfU) << 24 ; }

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

  // Field CODE: Reserved
    inline uint32_t CAN0_CS4_CODE (const uint32_t inValue) {return (inValue & 0xfU) << 24 ; }

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

  // Field CODE: Reserved
    inline uint32_t CAN0_CS5_CODE (const uint32_t inValue) {return (inValue & 0xfU) << 24 ; }

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

  // Field CODE: Reserved
    inline uint32_t CAN0_CS6_CODE (const uint32_t inValue) {return (inValue & 0xfU) << 24 ; }

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

  // Field CODE: Reserved
    inline uint32_t CAN0_CS7_CODE (const uint32_t inValue) {return (inValue & 0xfU) << 24 ; }

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

  // Field CODE: Reserved
    inline uint32_t CAN0_CS8_CODE (const uint32_t inValue) {return (inValue & 0xfU) << 24 ; }

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

  // Field CODE: Reserved
    inline uint32_t CAN0_CS9_CODE (const uint32_t inValue) {return (inValue & 0xfU) << 24 ; }

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

  // Field CODE: Reserved
    inline uint32_t CAN0_CS10_CODE (const uint32_t inValue) {return (inValue & 0xfU) << 24 ; }

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

  // Field CODE: Reserved
    inline uint32_t CAN0_CS11_CODE (const uint32_t inValue) {return (inValue & 0xfU) << 24 ; }

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

  // Field CODE: Reserved
    inline uint32_t CAN0_CS12_CODE (const uint32_t inValue) {return (inValue & 0xfU) << 24 ; }

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

  // Field CODE: Reserved
    inline uint32_t CAN0_CS13_CODE (const uint32_t inValue) {return (inValue & 0xfU) << 24 ; }

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

  // Field CODE: Reserved
    inline uint32_t CAN0_CS14_CODE (const uint32_t inValue) {return (inValue & 0xfU) << 24 ; }

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

  // Field CODE: Reserved
    inline uint32_t CAN0_CS15_CODE (const uint32_t inValue) {return (inValue & 0xfU) << 24 ; }

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
// Peripheral CAU: Memory Mapped Cryptographic Acceleration Unit (MMCAU)
//------------------------------------------------------------------------------

//---  Register CAU_DIRECT0: Direct access register 0
  #define CAU_CAU_DIRECT0 (* ((volatile uint32_t *) (0xe0081000 + 0)))

  // Field CAU_DIRECT0: Direct register 0
    inline uint32_t CAU_CAU_DIRECT0_CAU_DIRECT0 (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register CAU_DIRECT1: Direct access register 1
  #define CAU_CAU_DIRECT1 (* ((volatile uint32_t *) (0xe0081000 + 4)))

  // Field CAU_DIRECT1: Direct register 1
    inline uint32_t CAU_CAU_DIRECT1_CAU_DIRECT1 (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register CAU_DIRECT2: Direct access register 2
  #define CAU_CAU_DIRECT2 (* ((volatile uint32_t *) (0xe0081000 + 8)))

  // Field CAU_DIRECT2: Direct register 2
    inline uint32_t CAU_CAU_DIRECT2_CAU_DIRECT2 (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register CAU_DIRECT3: Direct access register 3
  #define CAU_CAU_DIRECT3 (* ((volatile uint32_t *) (0xe0081000 + 12)))

  // Field CAU_DIRECT3: Direct register 3
    inline uint32_t CAU_CAU_DIRECT3_CAU_DIRECT3 (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register CAU_DIRECT4: Direct access register 4
  #define CAU_CAU_DIRECT4 (* ((volatile uint32_t *) (0xe0081000 + 16)))

  // Field CAU_DIRECT4: Direct register 4
    inline uint32_t CAU_CAU_DIRECT4_CAU_DIRECT4 (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register CAU_DIRECT5: Direct access register 5
  #define CAU_CAU_DIRECT5 (* ((volatile uint32_t *) (0xe0081000 + 20)))

  // Field CAU_DIRECT5: Direct register 5
    inline uint32_t CAU_CAU_DIRECT5_CAU_DIRECT5 (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register CAU_DIRECT6: Direct access register 6
  #define CAU_CAU_DIRECT6 (* ((volatile uint32_t *) (0xe0081000 + 24)))

  // Field CAU_DIRECT6: Direct register 6
    inline uint32_t CAU_CAU_DIRECT6_CAU_DIRECT6 (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register CAU_DIRECT7: Direct access register 7
  #define CAU_CAU_DIRECT7 (* ((volatile uint32_t *) (0xe0081000 + 28)))

  // Field CAU_DIRECT7: Direct register 7
    inline uint32_t CAU_CAU_DIRECT7_CAU_DIRECT7 (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register CAU_DIRECT8: Direct access register 8
  #define CAU_CAU_DIRECT8 (* ((volatile uint32_t *) (0xe0081000 + 32)))

  // Field CAU_DIRECT8: Direct register 8
    inline uint32_t CAU_CAU_DIRECT8_CAU_DIRECT8 (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register CAU_DIRECT9: Direct access register 9
  #define CAU_CAU_DIRECT9 (* ((volatile uint32_t *) (0xe0081000 + 36)))

  // Field CAU_DIRECT9: Direct register 9
    inline uint32_t CAU_CAU_DIRECT9_CAU_DIRECT9 (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register CAU_DIRECT10: Direct access register 10
  #define CAU_CAU_DIRECT10 (* ((volatile uint32_t *) (0xe0081000 + 40)))

  // Field CAU_DIRECT10: Direct register 10
    inline uint32_t CAU_CAU_DIRECT10_CAU_DIRECT10 (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register CAU_DIRECT11: Direct access register 11
  #define CAU_CAU_DIRECT11 (* ((volatile uint32_t *) (0xe0081000 + 44)))

  // Field CAU_DIRECT11: Direct register 11
    inline uint32_t CAU_CAU_DIRECT11_CAU_DIRECT11 (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register CAU_DIRECT12: Direct access register 12
  #define CAU_CAU_DIRECT12 (* ((volatile uint32_t *) (0xe0081000 + 48)))

  // Field CAU_DIRECT12: Direct register 12
    inline uint32_t CAU_CAU_DIRECT12_CAU_DIRECT12 (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register CAU_DIRECT13: Direct access register 13
  #define CAU_CAU_DIRECT13 (* ((volatile uint32_t *) (0xe0081000 + 52)))

  // Field CAU_DIRECT13: Direct register 13
    inline uint32_t CAU_CAU_DIRECT13_CAU_DIRECT13 (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register CAU_DIRECT14: Direct access register 14
  #define CAU_CAU_DIRECT14 (* ((volatile uint32_t *) (0xe0081000 + 56)))

  // Field CAU_DIRECT14: Direct register 14
    inline uint32_t CAU_CAU_DIRECT14_CAU_DIRECT14 (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register CAU_DIRECT15: Direct access register 15
  #define CAU_CAU_DIRECT15 (* ((volatile uint32_t *) (0xe0081000 + 60)))

  // Field CAU_DIRECT15: Direct register 15
    inline uint32_t CAU_CAU_DIRECT15_CAU_DIRECT15 (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register CAU_LDR_CASR: Status register - Load Register command
  #define CAU_CAU_LDR_CASR (* ((volatile uint32_t *) (0xe0081000 + 2112)))

  // Field IC: no description available
    const uint32_t CAU_CAU_LDR_CASR_IC = 1U << 0 ;

  // Field DPE: no description available
    const uint32_t CAU_CAU_LDR_CASR_DPE = 1U << 1 ;

  // Field VER: CAU version
    inline uint32_t CAU_CAU_LDR_CASR_VER (const uint32_t inValue) {return (inValue & 0xfU) << 28 ; }

//---  Register CAU_LDR_CAA: Accumulator register - Load Register command
  #define CAU_CAU_LDR_CAA (* ((volatile uint32_t *) (0xe0081000 + 2116)))

  // Field ACC: ACC
    inline uint32_t CAU_CAU_LDR_CAA_ACC (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register CAU_LDR_CA0: General Purpose Register 0 - Load Register command
  #define CAU_CAU_LDR_CA0 (* ((volatile uint32_t *) (0xe0081000 + 2120)))

  // Field CA0: CA0
    inline uint32_t CAU_CAU_LDR_CA0_CA0 (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register CAU_LDR_CA1: General Purpose Register 1 - Load Register command
  #define CAU_CAU_LDR_CA1 (* ((volatile uint32_t *) (0xe0081000 + 2124)))

  // Field CA1: CA1
    inline uint32_t CAU_CAU_LDR_CA1_CA1 (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register CAU_LDR_CA2: General Purpose Register 2 - Load Register command
  #define CAU_CAU_LDR_CA2 (* ((volatile uint32_t *) (0xe0081000 + 2128)))

  // Field CA2: CA2
    inline uint32_t CAU_CAU_LDR_CA2_CA2 (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register CAU_LDR_CA3: General Purpose Register 3 - Load Register command
  #define CAU_CAU_LDR_CA3 (* ((volatile uint32_t *) (0xe0081000 + 2132)))

  // Field CA3: CA3
    inline uint32_t CAU_CAU_LDR_CA3_CA3 (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register CAU_LDR_CA4: General Purpose Register 4 - Load Register command
  #define CAU_CAU_LDR_CA4 (* ((volatile uint32_t *) (0xe0081000 + 2136)))

  // Field CA4: CA4
    inline uint32_t CAU_CAU_LDR_CA4_CA4 (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register CAU_LDR_CA5: General Purpose Register 5 - Load Register command
  #define CAU_CAU_LDR_CA5 (* ((volatile uint32_t *) (0xe0081000 + 2140)))

  // Field CA5: CA5
    inline uint32_t CAU_CAU_LDR_CA5_CA5 (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register CAU_LDR_CA6: General Purpose Register 6 - Load Register command
  #define CAU_CAU_LDR_CA6 (* ((volatile uint32_t *) (0xe0081000 + 2144)))

  // Field CA6: CA6
    inline uint32_t CAU_CAU_LDR_CA6_CA6 (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register CAU_LDR_CA7: General Purpose Register 7 - Load Register command
  #define CAU_CAU_LDR_CA7 (* ((volatile uint32_t *) (0xe0081000 + 2148)))

  // Field CA7: CA7
    inline uint32_t CAU_CAU_LDR_CA7_CA7 (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register CAU_LDR_CA8: General Purpose Register 8 - Load Register command
  #define CAU_CAU_LDR_CA8 (* ((volatile uint32_t *) (0xe0081000 + 2152)))

  // Field CA8: CA8
    inline uint32_t CAU_CAU_LDR_CA8_CA8 (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register CAU_STR_CASR: Status register - Store Register command
  #define CAU_CAU_STR_CASR (* ((const volatile uint32_t *) (0xe0081000 + 2176)))

  // Field IC: no description available
    const uint32_t CAU_CAU_STR_CASR_IC = 1U << 0 ;

  // Field DPE: no description available
    const uint32_t CAU_CAU_STR_CASR_DPE = 1U << 1 ;

  // Field VER: CAU version
    inline uint32_t CAU_CAU_STR_CASR_VER (const uint32_t inValue) {return (inValue & 0xfU) << 28 ; }

//---  Register CAU_STR_CAA: Accumulator register - Store Register command
  #define CAU_CAU_STR_CAA (* ((const volatile uint32_t *) (0xe0081000 + 2180)))

  // Field ACC: ACC
    inline uint32_t CAU_CAU_STR_CAA_ACC (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register CAU_STR_CA0: General Purpose Register 0 - Store Register command
  #define CAU_CAU_STR_CA0 (* ((const volatile uint32_t *) (0xe0081000 + 2184)))

  // Field CA0: CA0
    inline uint32_t CAU_CAU_STR_CA0_CA0 (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register CAU_STR_CA1: General Purpose Register 1 - Store Register command
  #define CAU_CAU_STR_CA1 (* ((const volatile uint32_t *) (0xe0081000 + 2188)))

  // Field CA1: CA1
    inline uint32_t CAU_CAU_STR_CA1_CA1 (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register CAU_STR_CA2: General Purpose Register 2 - Store Register command
  #define CAU_CAU_STR_CA2 (* ((const volatile uint32_t *) (0xe0081000 + 2192)))

  // Field CA2: CA2
    inline uint32_t CAU_CAU_STR_CA2_CA2 (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register CAU_STR_CA3: General Purpose Register 3 - Store Register command
  #define CAU_CAU_STR_CA3 (* ((const volatile uint32_t *) (0xe0081000 + 2196)))

  // Field CA3: CA3
    inline uint32_t CAU_CAU_STR_CA3_CA3 (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register CAU_STR_CA4: General Purpose Register 4 - Store Register command
  #define CAU_CAU_STR_CA4 (* ((const volatile uint32_t *) (0xe0081000 + 2200)))

  // Field CA4: CA4
    inline uint32_t CAU_CAU_STR_CA4_CA4 (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register CAU_STR_CA5: General Purpose Register 5 - Store Register command
  #define CAU_CAU_STR_CA5 (* ((const volatile uint32_t *) (0xe0081000 + 2204)))

  // Field CA5: CA5
    inline uint32_t CAU_CAU_STR_CA5_CA5 (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register CAU_STR_CA6: General Purpose Register 6 - Store Register command
  #define CAU_CAU_STR_CA6 (* ((const volatile uint32_t *) (0xe0081000 + 2208)))

  // Field CA6: CA6
    inline uint32_t CAU_CAU_STR_CA6_CA6 (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register CAU_STR_CA7: General Purpose Register 7 - Store Register command
  #define CAU_CAU_STR_CA7 (* ((const volatile uint32_t *) (0xe0081000 + 2212)))

  // Field CA7: CA7
    inline uint32_t CAU_CAU_STR_CA7_CA7 (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register CAU_STR_CA8: General Purpose Register 8 - Store Register command
  #define CAU_CAU_STR_CA8 (* ((const volatile uint32_t *) (0xe0081000 + 2216)))

  // Field CA8: CA8
    inline uint32_t CAU_CAU_STR_CA8_CA8 (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register CAU_ADR_CASR: Status register - Add Register command
  #define CAU_CAU_ADR_CASR (* ((volatile uint32_t *) (0xe0081000 + 2240)))

  // Field IC: no description available
    const uint32_t CAU_CAU_ADR_CASR_IC = 1U << 0 ;

  // Field DPE: no description available
    const uint32_t CAU_CAU_ADR_CASR_DPE = 1U << 1 ;

  // Field VER: CAU version
    inline uint32_t CAU_CAU_ADR_CASR_VER (const uint32_t inValue) {return (inValue & 0xfU) << 28 ; }

//---  Register CAU_ADR_CAA: Accumulator register - Add to register command
  #define CAU_CAU_ADR_CAA (* ((volatile uint32_t *) (0xe0081000 + 2244)))

  // Field ACC: ACC
    inline uint32_t CAU_CAU_ADR_CAA_ACC (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register CAU_ADR_CA0: General Purpose Register 0 - Add to register command
  #define CAU_CAU_ADR_CA0 (* ((volatile uint32_t *) (0xe0081000 + 2248)))

  // Field CA0: CA0
    inline uint32_t CAU_CAU_ADR_CA0_CA0 (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register CAU_ADR_CA1: General Purpose Register 1 - Add to register command
  #define CAU_CAU_ADR_CA1 (* ((volatile uint32_t *) (0xe0081000 + 2252)))

  // Field CA1: CA1
    inline uint32_t CAU_CAU_ADR_CA1_CA1 (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register CAU_ADR_CA2: General Purpose Register 2 - Add to register command
  #define CAU_CAU_ADR_CA2 (* ((volatile uint32_t *) (0xe0081000 + 2256)))

  // Field CA2: CA2
    inline uint32_t CAU_CAU_ADR_CA2_CA2 (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register CAU_ADR_CA3: General Purpose Register 3 - Add to register command
  #define CAU_CAU_ADR_CA3 (* ((volatile uint32_t *) (0xe0081000 + 2260)))

  // Field CA3: CA3
    inline uint32_t CAU_CAU_ADR_CA3_CA3 (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register CAU_ADR_CA4: General Purpose Register 4 - Add to register command
  #define CAU_CAU_ADR_CA4 (* ((volatile uint32_t *) (0xe0081000 + 2264)))

  // Field CA4: CA4
    inline uint32_t CAU_CAU_ADR_CA4_CA4 (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register CAU_ADR_CA5: General Purpose Register 5 - Add to register command
  #define CAU_CAU_ADR_CA5 (* ((volatile uint32_t *) (0xe0081000 + 2268)))

  // Field CA5: CA5
    inline uint32_t CAU_CAU_ADR_CA5_CA5 (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register CAU_ADR_CA6: General Purpose Register 6 - Add to register command
  #define CAU_CAU_ADR_CA6 (* ((volatile uint32_t *) (0xe0081000 + 2272)))

  // Field CA6: CA6
    inline uint32_t CAU_CAU_ADR_CA6_CA6 (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register CAU_ADR_CA7: General Purpose Register 7 - Add to register command
  #define CAU_CAU_ADR_CA7 (* ((volatile uint32_t *) (0xe0081000 + 2276)))

  // Field CA7: CA7
    inline uint32_t CAU_CAU_ADR_CA7_CA7 (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register CAU_ADR_CA8: General Purpose Register 8 - Add to register command
  #define CAU_CAU_ADR_CA8 (* ((volatile uint32_t *) (0xe0081000 + 2280)))

  // Field CA8: CA8
    inline uint32_t CAU_CAU_ADR_CA8_CA8 (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register CAU_RADR_CASR: Status register - Reverse and Add to Register command
  #define CAU_CAU_RADR_CASR (* ((volatile uint32_t *) (0xe0081000 + 2304)))

  // Field IC: no description available
    const uint32_t CAU_CAU_RADR_CASR_IC = 1U << 0 ;

  // Field DPE: no description available
    const uint32_t CAU_CAU_RADR_CASR_DPE = 1U << 1 ;

  // Field VER: CAU version
    inline uint32_t CAU_CAU_RADR_CASR_VER (const uint32_t inValue) {return (inValue & 0xfU) << 28 ; }

//---  Register CAU_RADR_CAA: Accumulator register - Reverse and Add to Register command
  #define CAU_CAU_RADR_CAA (* ((volatile uint32_t *) (0xe0081000 + 2308)))

  // Field ACC: ACC
    inline uint32_t CAU_CAU_RADR_CAA_ACC (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register CAU_RADR_CA0: General Purpose Register 0 - Reverse and Add to Register command
  #define CAU_CAU_RADR_CA0 (* ((volatile uint32_t *) (0xe0081000 + 2312)))

  // Field CA0: CA0
    inline uint32_t CAU_CAU_RADR_CA0_CA0 (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register CAU_RADR_CA1: General Purpose Register 1 - Reverse and Add to Register command
  #define CAU_CAU_RADR_CA1 (* ((volatile uint32_t *) (0xe0081000 + 2316)))

  // Field CA1: CA1
    inline uint32_t CAU_CAU_RADR_CA1_CA1 (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register CAU_RADR_CA2: General Purpose Register 2 - Reverse and Add to Register command
  #define CAU_CAU_RADR_CA2 (* ((volatile uint32_t *) (0xe0081000 + 2320)))

  // Field CA2: CA2
    inline uint32_t CAU_CAU_RADR_CA2_CA2 (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register CAU_RADR_CA3: General Purpose Register 3 - Reverse and Add to Register command
  #define CAU_CAU_RADR_CA3 (* ((volatile uint32_t *) (0xe0081000 + 2324)))

  // Field CA3: CA3
    inline uint32_t CAU_CAU_RADR_CA3_CA3 (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register CAU_RADR_CA4: General Purpose Register 4 - Reverse and Add to Register command
  #define CAU_CAU_RADR_CA4 (* ((volatile uint32_t *) (0xe0081000 + 2328)))

  // Field CA4: CA4
    inline uint32_t CAU_CAU_RADR_CA4_CA4 (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register CAU_RADR_CA5: General Purpose Register 5 - Reverse and Add to Register command
  #define CAU_CAU_RADR_CA5 (* ((volatile uint32_t *) (0xe0081000 + 2332)))

  // Field CA5: CA5
    inline uint32_t CAU_CAU_RADR_CA5_CA5 (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register CAU_RADR_CA6: General Purpose Register 6 - Reverse and Add to Register command
  #define CAU_CAU_RADR_CA6 (* ((volatile uint32_t *) (0xe0081000 + 2336)))

  // Field CA6: CA6
    inline uint32_t CAU_CAU_RADR_CA6_CA6 (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register CAU_RADR_CA7: General Purpose Register 7 - Reverse and Add to Register command
  #define CAU_CAU_RADR_CA7 (* ((volatile uint32_t *) (0xe0081000 + 2340)))

  // Field CA7: CA7
    inline uint32_t CAU_CAU_RADR_CA7_CA7 (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register CAU_RADR_CA8: General Purpose Register 8 - Reverse and Add to Register command
  #define CAU_CAU_RADR_CA8 (* ((volatile uint32_t *) (0xe0081000 + 2344)))

  // Field CA8: CA8
    inline uint32_t CAU_CAU_RADR_CA8_CA8 (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register CAU_XOR_CASR: Status register - Exclusive Or command
  #define CAU_CAU_XOR_CASR (* ((volatile uint32_t *) (0xe0081000 + 2432)))

  // Field IC: no description available
    const uint32_t CAU_CAU_XOR_CASR_IC = 1U << 0 ;

  // Field DPE: no description available
    const uint32_t CAU_CAU_XOR_CASR_DPE = 1U << 1 ;

  // Field VER: CAU version
    inline uint32_t CAU_CAU_XOR_CASR_VER (const uint32_t inValue) {return (inValue & 0xfU) << 28 ; }

//---  Register CAU_XOR_CAA: Accumulator register - Exclusive Or command
  #define CAU_CAU_XOR_CAA (* ((volatile uint32_t *) (0xe0081000 + 2436)))

  // Field ACC: ACC
    inline uint32_t CAU_CAU_XOR_CAA_ACC (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register CAU_XOR_CA0: General Purpose Register 0 - Exclusive Or command
  #define CAU_CAU_XOR_CA0 (* ((volatile uint32_t *) (0xe0081000 + 2440)))

  // Field CA0: CA0
    inline uint32_t CAU_CAU_XOR_CA0_CA0 (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register CAU_XOR_CA1: General Purpose Register 1 - Exclusive Or command
  #define CAU_CAU_XOR_CA1 (* ((volatile uint32_t *) (0xe0081000 + 2444)))

  // Field CA1: CA1
    inline uint32_t CAU_CAU_XOR_CA1_CA1 (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register CAU_XOR_CA2: General Purpose Register 2 - Exclusive Or command
  #define CAU_CAU_XOR_CA2 (* ((volatile uint32_t *) (0xe0081000 + 2448)))

  // Field CA2: CA2
    inline uint32_t CAU_CAU_XOR_CA2_CA2 (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register CAU_XOR_CA3: General Purpose Register 3 - Exclusive Or command
  #define CAU_CAU_XOR_CA3 (* ((volatile uint32_t *) (0xe0081000 + 2452)))

  // Field CA3: CA3
    inline uint32_t CAU_CAU_XOR_CA3_CA3 (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register CAU_XOR_CA4: General Purpose Register 4 - Exclusive Or command
  #define CAU_CAU_XOR_CA4 (* ((volatile uint32_t *) (0xe0081000 + 2456)))

  // Field CA4: CA4
    inline uint32_t CAU_CAU_XOR_CA4_CA4 (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register CAU_XOR_CA5: General Purpose Register 5 - Exclusive Or command
  #define CAU_CAU_XOR_CA5 (* ((volatile uint32_t *) (0xe0081000 + 2460)))

  // Field CA5: CA5
    inline uint32_t CAU_CAU_XOR_CA5_CA5 (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register CAU_XOR_CA6: General Purpose Register 6 - Exclusive Or command
  #define CAU_CAU_XOR_CA6 (* ((volatile uint32_t *) (0xe0081000 + 2464)))

  // Field CA6: CA6
    inline uint32_t CAU_CAU_XOR_CA6_CA6 (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register CAU_XOR_CA7: General Purpose Register 7 - Exclusive Or command
  #define CAU_CAU_XOR_CA7 (* ((volatile uint32_t *) (0xe0081000 + 2468)))

  // Field CA7: CA7
    inline uint32_t CAU_CAU_XOR_CA7_CA7 (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register CAU_XOR_CA8: General Purpose Register 8 - Exclusive Or command
  #define CAU_CAU_XOR_CA8 (* ((volatile uint32_t *) (0xe0081000 + 2472)))

  // Field CA8: CA8
    inline uint32_t CAU_CAU_XOR_CA8_CA8 (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register CAU_ROTL_CASR: Status register - Rotate Left command
  #define CAU_CAU_ROTL_CASR (* ((volatile uint32_t *) (0xe0081000 + 2496)))

  // Field IC: no description available
    const uint32_t CAU_CAU_ROTL_CASR_IC = 1U << 0 ;

  // Field DPE: no description available
    const uint32_t CAU_CAU_ROTL_CASR_DPE = 1U << 1 ;

  // Field VER: CAU version
    inline uint32_t CAU_CAU_ROTL_CASR_VER (const uint32_t inValue) {return (inValue & 0xfU) << 28 ; }

//---  Register CAU_ROTL_CAA: Accumulator register - Rotate Left command
  #define CAU_CAU_ROTL_CAA (* ((volatile uint32_t *) (0xe0081000 + 2500)))

  // Field ACC: ACC
    inline uint32_t CAU_CAU_ROTL_CAA_ACC (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register CAU_ROTL_CA0: General Purpose Register 0 - Rotate Left command
  #define CAU_CAU_ROTL_CA0 (* ((volatile uint32_t *) (0xe0081000 + 2504)))

  // Field CA0: CA0
    inline uint32_t CAU_CAU_ROTL_CA0_CA0 (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register CAU_ROTL_CA1: General Purpose Register 1 - Rotate Left command
  #define CAU_CAU_ROTL_CA1 (* ((volatile uint32_t *) (0xe0081000 + 2508)))

  // Field CA1: CA1
    inline uint32_t CAU_CAU_ROTL_CA1_CA1 (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register CAU_ROTL_CA2: General Purpose Register 2 - Rotate Left command
  #define CAU_CAU_ROTL_CA2 (* ((volatile uint32_t *) (0xe0081000 + 2512)))

  // Field CA2: CA2
    inline uint32_t CAU_CAU_ROTL_CA2_CA2 (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register CAU_ROTL_CA3: General Purpose Register 3 - Rotate Left command
  #define CAU_CAU_ROTL_CA3 (* ((volatile uint32_t *) (0xe0081000 + 2516)))

  // Field CA3: CA3
    inline uint32_t CAU_CAU_ROTL_CA3_CA3 (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register CAU_ROTL_CA4: General Purpose Register 4 - Rotate Left command
  #define CAU_CAU_ROTL_CA4 (* ((volatile uint32_t *) (0xe0081000 + 2520)))

  // Field CA4: CA4
    inline uint32_t CAU_CAU_ROTL_CA4_CA4 (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register CAU_ROTL_CA5: General Purpose Register 5 - Rotate Left command
  #define CAU_CAU_ROTL_CA5 (* ((volatile uint32_t *) (0xe0081000 + 2524)))

  // Field CA5: CA5
    inline uint32_t CAU_CAU_ROTL_CA5_CA5 (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register CAU_ROTL_CA6: General Purpose Register 6 - Rotate Left command
  #define CAU_CAU_ROTL_CA6 (* ((volatile uint32_t *) (0xe0081000 + 2528)))

  // Field CA6: CA6
    inline uint32_t CAU_CAU_ROTL_CA6_CA6 (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register CAU_ROTL_CA7: General Purpose Register 7 - Rotate Left command
  #define CAU_CAU_ROTL_CA7 (* ((volatile uint32_t *) (0xe0081000 + 2532)))

  // Field CA7: CA7
    inline uint32_t CAU_CAU_ROTL_CA7_CA7 (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register CAU_ROTL_CA8: General Purpose Register 8 - Rotate Left command
  #define CAU_CAU_ROTL_CA8 (* ((volatile uint32_t *) (0xe0081000 + 2536)))

  // Field CA8: CA8
    inline uint32_t CAU_CAU_ROTL_CA8_CA8 (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register CAU_AESC_CASR: Status register - AES Column Operation command
  #define CAU_CAU_AESC_CASR (* ((volatile uint32_t *) (0xe0081000 + 2816)))

  // Field IC: no description available
    const uint32_t CAU_CAU_AESC_CASR_IC = 1U << 0 ;

  // Field DPE: no description available
    const uint32_t CAU_CAU_AESC_CASR_DPE = 1U << 1 ;

  // Field VER: CAU version
    inline uint32_t CAU_CAU_AESC_CASR_VER (const uint32_t inValue) {return (inValue & 0xfU) << 28 ; }

//---  Register CAU_AESC_CAA: Accumulator register - AES Column Operation command
  #define CAU_CAU_AESC_CAA (* ((volatile uint32_t *) (0xe0081000 + 2820)))

  // Field ACC: ACC
    inline uint32_t CAU_CAU_AESC_CAA_ACC (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register CAU_AESC_CA0: General Purpose Register 0 - AES Column Operation command
  #define CAU_CAU_AESC_CA0 (* ((volatile uint32_t *) (0xe0081000 + 2824)))

  // Field CA0: CA0
    inline uint32_t CAU_CAU_AESC_CA0_CA0 (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register CAU_AESC_CA1: General Purpose Register 1 - AES Column Operation command
  #define CAU_CAU_AESC_CA1 (* ((volatile uint32_t *) (0xe0081000 + 2828)))

  // Field CA1: CA1
    inline uint32_t CAU_CAU_AESC_CA1_CA1 (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register CAU_AESC_CA2: General Purpose Register 2 - AES Column Operation command
  #define CAU_CAU_AESC_CA2 (* ((volatile uint32_t *) (0xe0081000 + 2832)))

  // Field CA2: CA2
    inline uint32_t CAU_CAU_AESC_CA2_CA2 (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register CAU_AESC_CA3: General Purpose Register 3 - AES Column Operation command
  #define CAU_CAU_AESC_CA3 (* ((volatile uint32_t *) (0xe0081000 + 2836)))

  // Field CA3: CA3
    inline uint32_t CAU_CAU_AESC_CA3_CA3 (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register CAU_AESC_CA4: General Purpose Register 4 - AES Column Operation command
  #define CAU_CAU_AESC_CA4 (* ((volatile uint32_t *) (0xe0081000 + 2840)))

  // Field CA4: CA4
    inline uint32_t CAU_CAU_AESC_CA4_CA4 (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register CAU_AESC_CA5: General Purpose Register 5 - AES Column Operation command
  #define CAU_CAU_AESC_CA5 (* ((volatile uint32_t *) (0xe0081000 + 2844)))

  // Field CA5: CA5
    inline uint32_t CAU_CAU_AESC_CA5_CA5 (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register CAU_AESC_CA6: General Purpose Register 6 - AES Column Operation command
  #define CAU_CAU_AESC_CA6 (* ((volatile uint32_t *) (0xe0081000 + 2848)))

  // Field CA6: CA6
    inline uint32_t CAU_CAU_AESC_CA6_CA6 (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register CAU_AESC_CA7: General Purpose Register 7 - AES Column Operation command
  #define CAU_CAU_AESC_CA7 (* ((volatile uint32_t *) (0xe0081000 + 2852)))

  // Field CA7: CA7
    inline uint32_t CAU_CAU_AESC_CA7_CA7 (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register CAU_AESC_CA8: General Purpose Register 8 - AES Column Operation command
  #define CAU_CAU_AESC_CA8 (* ((volatile uint32_t *) (0xe0081000 + 2856)))

  // Field CA8: CA8
    inline uint32_t CAU_CAU_AESC_CA8_CA8 (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register CAU_AESIC_CASR: Status register - AES Inverse Column Operation command
  #define CAU_CAU_AESIC_CASR (* ((volatile uint32_t *) (0xe0081000 + 2880)))

  // Field IC: no description available
    const uint32_t CAU_CAU_AESIC_CASR_IC = 1U << 0 ;

  // Field DPE: no description available
    const uint32_t CAU_CAU_AESIC_CASR_DPE = 1U << 1 ;

  // Field VER: CAU version
    inline uint32_t CAU_CAU_AESIC_CASR_VER (const uint32_t inValue) {return (inValue & 0xfU) << 28 ; }

//---  Register CAU_AESIC_CAA: Accumulator register - AES Inverse Column Operation command
  #define CAU_CAU_AESIC_CAA (* ((volatile uint32_t *) (0xe0081000 + 2884)))

  // Field ACC: ACC
    inline uint32_t CAU_CAU_AESIC_CAA_ACC (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register CAU_AESIC_CA0: General Purpose Register 0 - AES Inverse Column Operation command
  #define CAU_CAU_AESIC_CA0 (* ((volatile uint32_t *) (0xe0081000 + 2888)))

  // Field CA0: CA0
    inline uint32_t CAU_CAU_AESIC_CA0_CA0 (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register CAU_AESIC_CA1: General Purpose Register 1 - AES Inverse Column Operation command
  #define CAU_CAU_AESIC_CA1 (* ((volatile uint32_t *) (0xe0081000 + 2892)))

  // Field CA1: CA1
    inline uint32_t CAU_CAU_AESIC_CA1_CA1 (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register CAU_AESIC_CA2: General Purpose Register 2 - AES Inverse Column Operation command
  #define CAU_CAU_AESIC_CA2 (* ((volatile uint32_t *) (0xe0081000 + 2896)))

  // Field CA2: CA2
    inline uint32_t CAU_CAU_AESIC_CA2_CA2 (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register CAU_AESIC_CA3: General Purpose Register 3 - AES Inverse Column Operation command
  #define CAU_CAU_AESIC_CA3 (* ((volatile uint32_t *) (0xe0081000 + 2900)))

  // Field CA3: CA3
    inline uint32_t CAU_CAU_AESIC_CA3_CA3 (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register CAU_AESIC_CA4: General Purpose Register 4 - AES Inverse Column Operation command
  #define CAU_CAU_AESIC_CA4 (* ((volatile uint32_t *) (0xe0081000 + 2904)))

  // Field CA4: CA4
    inline uint32_t CAU_CAU_AESIC_CA4_CA4 (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register CAU_AESIC_CA5: General Purpose Register 5 - AES Inverse Column Operation command
  #define CAU_CAU_AESIC_CA5 (* ((volatile uint32_t *) (0xe0081000 + 2908)))

  // Field CA5: CA5
    inline uint32_t CAU_CAU_AESIC_CA5_CA5 (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register CAU_AESIC_CA6: General Purpose Register 6 - AES Inverse Column Operation command
  #define CAU_CAU_AESIC_CA6 (* ((volatile uint32_t *) (0xe0081000 + 2912)))

  // Field CA6: CA6
    inline uint32_t CAU_CAU_AESIC_CA6_CA6 (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register CAU_AESIC_CA7: General Purpose Register 7 - AES Inverse Column Operation command
  #define CAU_CAU_AESIC_CA7 (* ((volatile uint32_t *) (0xe0081000 + 2916)))

  // Field CA7: CA7
    inline uint32_t CAU_CAU_AESIC_CA7_CA7 (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register CAU_AESIC_CA8: General Purpose Register 8 - AES Inverse Column Operation command
  #define CAU_CAU_AESIC_CA8 (* ((volatile uint32_t *) (0xe0081000 + 2920)))

  // Field CA8: CA8
    inline uint32_t CAU_CAU_AESIC_CA8_CA8 (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

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

  // Field FILTER_CNT: Filter Sample Count
    inline uint8_t CMP_CR0_FILTER_CNT (const uint8_t inValue) {return (inValue & 0x7U) << 4 ; }

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

  // Field DMAEN: DMA Enable Control
    const uint8_t CMP_SCR_DMAEN = 1U << 6 ;

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

  // Field MSEL: Minus Input Mux Control
    inline uint8_t CMP_MUXCR_MSEL (const uint8_t inValue) {return (inValue & 0x7U) << 0 ; }

  // Field PSEL: Plus Input Mux Control
    inline uint8_t CMP_MUXCR_PSEL (const uint8_t inValue) {return (inValue & 0x7U) << 3 ; }

  // Field PSTM: Pass Through Mode Enable
    const uint8_t CMP_MUXCR_PSTM = 1U << 7 ;

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

  // Field MB: Controls the upper mark periods of the modulator for all modes.
    inline uint8_t CMT_CMD1_MB (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register CMD2: CMT Modulator Data Register Mark Low
  #define CMT_CMD2 (* ((volatile uint8_t *) (0x40062000 + 7)))

  // Field MB: Controls the lower mark periods of the modulator for all modes.
    inline uint8_t CMT_CMD2_MB (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register CMD3: CMT Modulator Data Register Space High
  #define CMT_CMD3 (* ((volatile uint8_t *) (0x40062000 + 8)))

  // Field SB: Controls the upper space periods of the modulator for all modes.
    inline uint8_t CMT_CMD3_SB (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register CMD4: CMT Modulator Data Register Space Low
  #define CMT_CMD4 (* ((volatile uint8_t *) (0x40062000 + 9)))

  // Field SB: Controls the lower space periods of the modulator for all modes.
    inline uint8_t CMT_CMD4_SB (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register PPS: CMT Primary Prescaler Register
  #define CMT_PPS (* ((volatile uint8_t *) (0x40062000 + 10)))

  // Field PPSDIV: Primary Prescaler Divider
    inline uint8_t CMT_PPS_PPSDIV (const uint8_t inValue) {return (inValue & 0xfU) << 0 ; }

//---  Register DMA: CMT Direct Memory Access Register
  #define CMT_DMA (* ((volatile uint8_t *) (0x40062000 + 11)))

  // Field DMA: DMA Enable
    const uint8_t CMT_DMA_DMA = 1U << 0 ;

//------------------------------------------------------------------------------
// Peripheral CRC: Cyclic Redundancy Check
//------------------------------------------------------------------------------

//---  Register DATA: CRC Data register
  #define CRC_DATA (* ((volatile uint32_t *) (0x40032000 + 0)))

  // Field LL: CRC Low Lower Byte
    inline uint32_t CRC_DATA_LL (const uint32_t inValue) {return (inValue & 0xffU) << 0 ; }

  // Field LU: CRC Low Upper Byte
    inline uint32_t CRC_DATA_LU (const uint32_t inValue) {return (inValue & 0xffU) << 8 ; }

  // Field HL: CRC High Lower Byte
    inline uint32_t CRC_DATA_HL (const uint32_t inValue) {return (inValue & 0xffU) << 16 ; }

  // Field HU: CRC High Upper Byte
    inline uint32_t CRC_DATA_HU (const uint32_t inValue) {return (inValue & 0xffU) << 24 ; }

//---  Register DATAL: CRC_DATAL register.
  #define CRC_DATAL (* ((volatile uint16_t *) (0x40032000 + 0)))

  // Field DATAL: DATAL stores the lower 16 bits of the 16/32 bit CRC
    inline uint16_t CRC_DATAL_DATAL (const uint16_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register DATALL: CRC_DATALL register.
  #define CRC_DATALL (* ((volatile uint8_t *) (0x40032000 + 0)))

  // Field DATALL: CRCLL stores the first 8 bits of the 32 bit DATA
    inline uint8_t CRC_DATALL_DATALL (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register DATALU: CRC_DATALU register.
  #define CRC_DATALU (* ((volatile uint8_t *) (0x40032000 + 1)))

  // Field DATALU: DATALL stores the second 8 bits of the 32 bit CRC
    inline uint8_t CRC_DATALU_DATALU (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register DATAH: CRC_DATAH register.
  #define CRC_DATAH (* ((volatile uint16_t *) (0x40032000 + 2)))

  // Field DATAH: DATAH stores the high 16 bits of the 16/32 bit CRC
    inline uint16_t CRC_DATAH_DATAH (const uint16_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register DATAHL: CRC_DATAHL register.
  #define CRC_DATAHL (* ((volatile uint8_t *) (0x40032000 + 2)))

  // Field DATAHL: DATAHL stores the third 8 bits of the 32 bit CRC
    inline uint8_t CRC_DATAHL_DATAHL (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register DATAHU: CRC_DATAHU register.
  #define CRC_DATAHU (* ((volatile uint8_t *) (0x40032000 + 3)))

  // Field DATAHU: DATAHU stores the fourth 8 bits of the 32 bit CRC
    inline uint8_t CRC_DATAHU_DATAHU (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register GPOLY: CRC Polynomial register
  #define CRC_GPOLY (* ((volatile uint32_t *) (0x40032000 + 4)))

  // Field LOW: Low Polynominal Half-word
    inline uint32_t CRC_GPOLY_LOW (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

  // Field HIGH: High Polynominal Half-word
    inline uint32_t CRC_GPOLY_HIGH (const uint32_t inValue) {return (inValue & 0xffffU) << 16 ; }

//---  Register GPOLYL: CRC_GPOLYL register.
  #define CRC_GPOLYL (* ((volatile uint16_t *) (0x40032000 + 4)))

  // Field GPOLYL: POLYL stores the lower 16 bits of the 16/32 bit CRC polynomial value
    inline uint16_t CRC_GPOLYL_GPOLYL (const uint16_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register GPOLYLL: CRC_GPOLYLL register.
  #define CRC_GPOLYLL (* ((volatile uint8_t *) (0x40032000 + 4)))

  // Field GPOLYLL: POLYLL stores the first 8 bits of the 32 bit CRC
    inline uint8_t CRC_GPOLYLL_GPOLYLL (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

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

//---  Register CTRL: CRC Control register
  #define CRC_CTRL (* ((volatile uint32_t *) (0x40032000 + 8)))

  // Field TCRC: Width of CRC protocol.
    const uint32_t CRC_CTRL_TCRC = 1U << 24 ;

  // Field WAS: Write CRC Data Register As Seed
    const uint32_t CRC_CTRL_WAS = 1U << 25 ;

  // Field FXOR: Complement Read Of CRC Data Register
    const uint32_t CRC_CTRL_FXOR = 1U << 26 ;

  // Field TOTR: Type Of Transpose For Read
    inline uint32_t CRC_CTRL_TOTR (const uint32_t inValue) {return (inValue & 0x3U) << 28 ; }

  // Field TOT: Type Of Transpose For Writes
    inline uint32_t CRC_CTRL_TOT (const uint32_t inValue) {return (inValue & 0x3U) << 30 ; }

//---  Register CTRLHU: CRC_CTRLHU register.
  #define CRC_CTRLHU (* ((volatile uint8_t *) (0x40032000 + 11)))

  // Field TCRC: no description available
    const uint8_t CRC_CTRLHU_TCRC = 1U << 0 ;

  // Field WAS: no description available
    const uint8_t CRC_CTRLHU_WAS = 1U << 1 ;

  // Field FXOR: no description available
    const uint8_t CRC_CTRLHU_FXOR = 1U << 2 ;

  // Field TOTR: no description available
    inline uint8_t CRC_CTRLHU_TOTR (const uint8_t inValue) {return (inValue & 0x3U) << 4 ; }

  // Field TOT: no description available
    inline uint8_t CRC_CTRLHU_TOT (const uint8_t inValue) {return (inValue & 0x3U) << 6 ; }

//------------------------------------------------------------------------------
// PERIPHERAL GROUP: DAC
//        DAC0 at 0x400cc000
//        DAC1 at 0x400cd000
//------------------------------------------------------------------------------

static const uint32_t kBaseAddress_DAC [2] = {0x400cc000, 0x400cd000} ;

//------------------------------------------------------------------------------

//---  Registers DATL(0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15): DAC Data Low Register
  #define DAC_DATL(group,idx) (* ((volatile uint8_t *) (kBaseAddress_DATL [group] + 0x0 + (idx) * 0x2)))
  #define DAC0_DATL(idx) (* ((volatile uint8_t *) (0x400cc000 + 0x0 + (idx) * 0x2)))
  #define DAC1_DATL(idx) (* ((volatile uint8_t *) (0x400cd000 + 0x0 + (idx) * 0x2)))
  #define DAC0_DAT0L (* ((volatile uint8_t *) (0x400cc000 + 0x0 + 0 * 0x2)))
  #define DAC1_DAT0L (* ((volatile uint8_t *) (0x400cd000 + 0x0 + 0 * 0x2)))
  #define DAC0_DAT1L (* ((volatile uint8_t *) (0x400cc000 + 0x0 + 1 * 0x2)))
  #define DAC1_DAT1L (* ((volatile uint8_t *) (0x400cd000 + 0x0 + 1 * 0x2)))
  #define DAC0_DAT2L (* ((volatile uint8_t *) (0x400cc000 + 0x0 + 2 * 0x2)))
  #define DAC1_DAT2L (* ((volatile uint8_t *) (0x400cd000 + 0x0 + 2 * 0x2)))
  #define DAC0_DAT3L (* ((volatile uint8_t *) (0x400cc000 + 0x0 + 3 * 0x2)))
  #define DAC1_DAT3L (* ((volatile uint8_t *) (0x400cd000 + 0x0 + 3 * 0x2)))
  #define DAC0_DAT4L (* ((volatile uint8_t *) (0x400cc000 + 0x0 + 4 * 0x2)))
  #define DAC1_DAT4L (* ((volatile uint8_t *) (0x400cd000 + 0x0 + 4 * 0x2)))
  #define DAC0_DAT5L (* ((volatile uint8_t *) (0x400cc000 + 0x0 + 5 * 0x2)))
  #define DAC1_DAT5L (* ((volatile uint8_t *) (0x400cd000 + 0x0 + 5 * 0x2)))
  #define DAC0_DAT6L (* ((volatile uint8_t *) (0x400cc000 + 0x0 + 6 * 0x2)))
  #define DAC1_DAT6L (* ((volatile uint8_t *) (0x400cd000 + 0x0 + 6 * 0x2)))
  #define DAC0_DAT7L (* ((volatile uint8_t *) (0x400cc000 + 0x0 + 7 * 0x2)))
  #define DAC1_DAT7L (* ((volatile uint8_t *) (0x400cd000 + 0x0 + 7 * 0x2)))
  #define DAC0_DAT8L (* ((volatile uint8_t *) (0x400cc000 + 0x0 + 8 * 0x2)))
  #define DAC1_DAT8L (* ((volatile uint8_t *) (0x400cd000 + 0x0 + 8 * 0x2)))
  #define DAC0_DAT9L (* ((volatile uint8_t *) (0x400cc000 + 0x0 + 9 * 0x2)))
  #define DAC1_DAT9L (* ((volatile uint8_t *) (0x400cd000 + 0x0 + 9 * 0x2)))
  #define DAC0_DAT10L (* ((volatile uint8_t *) (0x400cc000 + 0x0 + 10 * 0x2)))
  #define DAC1_DAT10L (* ((volatile uint8_t *) (0x400cd000 + 0x0 + 10 * 0x2)))
  #define DAC0_DAT11L (* ((volatile uint8_t *) (0x400cc000 + 0x0 + 11 * 0x2)))
  #define DAC1_DAT11L (* ((volatile uint8_t *) (0x400cd000 + 0x0 + 11 * 0x2)))
  #define DAC0_DAT12L (* ((volatile uint8_t *) (0x400cc000 + 0x0 + 12 * 0x2)))
  #define DAC1_DAT12L (* ((volatile uint8_t *) (0x400cd000 + 0x0 + 12 * 0x2)))
  #define DAC0_DAT13L (* ((volatile uint8_t *) (0x400cc000 + 0x0 + 13 * 0x2)))
  #define DAC1_DAT13L (* ((volatile uint8_t *) (0x400cd000 + 0x0 + 13 * 0x2)))
  #define DAC0_DAT14L (* ((volatile uint8_t *) (0x400cc000 + 0x0 + 14 * 0x2)))
  #define DAC1_DAT14L (* ((volatile uint8_t *) (0x400cd000 + 0x0 + 14 * 0x2)))
  #define DAC0_DAT15L (* ((volatile uint8_t *) (0x400cc000 + 0x0 + 15 * 0x2)))
  #define DAC1_DAT15L (* ((volatile uint8_t *) (0x400cd000 + 0x0 + 15 * 0x2)))

  // Field DATA0: When the DAC buffer is not enabled, DATA[11:0] controls the output voltage based on the following formula: V out = V in * (1 + DACDAT0[11:0])/4096 When the DAC buffer is enabled, DATA is mapped to the 16-word buffer
    inline uint8_t DAC_DATL_DATA0 (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Registers DATH(0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15): DAC Data High Register
  #define DAC_DATH(group,idx) (* ((volatile uint8_t *) (kBaseAddress_DATH [group] + 0x1 + (idx) * 0x2)))
  #define DAC0_DATH(idx) (* ((volatile uint8_t *) (0x400cc000 + 0x1 + (idx) * 0x2)))
  #define DAC1_DATH(idx) (* ((volatile uint8_t *) (0x400cd000 + 0x1 + (idx) * 0x2)))
  #define DAC0_DAT0H (* ((volatile uint8_t *) (0x400cc000 + 0x1 + 0 * 0x2)))
  #define DAC1_DAT0H (* ((volatile uint8_t *) (0x400cd000 + 0x1 + 0 * 0x2)))
  #define DAC0_DAT1H (* ((volatile uint8_t *) (0x400cc000 + 0x1 + 1 * 0x2)))
  #define DAC1_DAT1H (* ((volatile uint8_t *) (0x400cd000 + 0x1 + 1 * 0x2)))
  #define DAC0_DAT2H (* ((volatile uint8_t *) (0x400cc000 + 0x1 + 2 * 0x2)))
  #define DAC1_DAT2H (* ((volatile uint8_t *) (0x400cd000 + 0x1 + 2 * 0x2)))
  #define DAC0_DAT3H (* ((volatile uint8_t *) (0x400cc000 + 0x1 + 3 * 0x2)))
  #define DAC1_DAT3H (* ((volatile uint8_t *) (0x400cd000 + 0x1 + 3 * 0x2)))
  #define DAC0_DAT4H (* ((volatile uint8_t *) (0x400cc000 + 0x1 + 4 * 0x2)))
  #define DAC1_DAT4H (* ((volatile uint8_t *) (0x400cd000 + 0x1 + 4 * 0x2)))
  #define DAC0_DAT5H (* ((volatile uint8_t *) (0x400cc000 + 0x1 + 5 * 0x2)))
  #define DAC1_DAT5H (* ((volatile uint8_t *) (0x400cd000 + 0x1 + 5 * 0x2)))
  #define DAC0_DAT6H (* ((volatile uint8_t *) (0x400cc000 + 0x1 + 6 * 0x2)))
  #define DAC1_DAT6H (* ((volatile uint8_t *) (0x400cd000 + 0x1 + 6 * 0x2)))
  #define DAC0_DAT7H (* ((volatile uint8_t *) (0x400cc000 + 0x1 + 7 * 0x2)))
  #define DAC1_DAT7H (* ((volatile uint8_t *) (0x400cd000 + 0x1 + 7 * 0x2)))
  #define DAC0_DAT8H (* ((volatile uint8_t *) (0x400cc000 + 0x1 + 8 * 0x2)))
  #define DAC1_DAT8H (* ((volatile uint8_t *) (0x400cd000 + 0x1 + 8 * 0x2)))
  #define DAC0_DAT9H (* ((volatile uint8_t *) (0x400cc000 + 0x1 + 9 * 0x2)))
  #define DAC1_DAT9H (* ((volatile uint8_t *) (0x400cd000 + 0x1 + 9 * 0x2)))
  #define DAC0_DAT10H (* ((volatile uint8_t *) (0x400cc000 + 0x1 + 10 * 0x2)))
  #define DAC1_DAT10H (* ((volatile uint8_t *) (0x400cd000 + 0x1 + 10 * 0x2)))
  #define DAC0_DAT11H (* ((volatile uint8_t *) (0x400cc000 + 0x1 + 11 * 0x2)))
  #define DAC1_DAT11H (* ((volatile uint8_t *) (0x400cd000 + 0x1 + 11 * 0x2)))
  #define DAC0_DAT12H (* ((volatile uint8_t *) (0x400cc000 + 0x1 + 12 * 0x2)))
  #define DAC1_DAT12H (* ((volatile uint8_t *) (0x400cd000 + 0x1 + 12 * 0x2)))
  #define DAC0_DAT13H (* ((volatile uint8_t *) (0x400cc000 + 0x1 + 13 * 0x2)))
  #define DAC1_DAT13H (* ((volatile uint8_t *) (0x400cd000 + 0x1 + 13 * 0x2)))
  #define DAC0_DAT14H (* ((volatile uint8_t *) (0x400cc000 + 0x1 + 14 * 0x2)))
  #define DAC1_DAT14H (* ((volatile uint8_t *) (0x400cd000 + 0x1 + 14 * 0x2)))
  #define DAC0_DAT15H (* ((volatile uint8_t *) (0x400cc000 + 0x1 + 15 * 0x2)))
  #define DAC1_DAT15H (* ((volatile uint8_t *) (0x400cd000 + 0x1 + 15 * 0x2)))

  // Field DATA1: When the DAC Buffer is not enabled, DATA[11:0] controls the output voltage based on the following formula
    inline uint8_t DAC_DATH_DATA1 (const uint8_t inValue) {return (inValue & 0xfU) << 0 ; }

//---  Register SR: DAC Status Register
  #define DAC_SR(group) (* ((volatile uint8_t *) (kBaseAddress_SR [group] + 0x20)))
  #define DAC0_SR (* ((volatile uint8_t *) (0x400cc000 + 0x20)))
  #define DAC1_SR (* ((volatile uint8_t *) (0x400cd000 + 0x20)))

  // Field DACBFRPBF: DAC Buffer Read Pointer Bottom Position Flag
    const uint8_t DAC_SR_DACBFRPBF = 1U << 0 ;

  // Field DACBFRPTF: DAC Buffer Read Pointer Top Position Flag
    const uint8_t DAC_SR_DACBFRPTF = 1U << 1 ;

  // Field DACBFWMF: DAC Buffer Watermark Flag
    const uint8_t DAC_SR_DACBFWMF = 1U << 2 ;

//---  Register C0: DAC Control Register
  #define DAC_C0(group) (* ((volatile uint8_t *) (kBaseAddress_C0 [group] + 0x21)))
  #define DAC0_C0 (* ((volatile uint8_t *) (0x400cc000 + 0x21)))
  #define DAC1_C0 (* ((volatile uint8_t *) (0x400cd000 + 0x21)))

  // Field DACBBIEN: DAC Buffer Read Pointer Bottom Flag Interrupt Enable
    const uint8_t DAC_C0_DACBBIEN = 1U << 0 ;

  // Field DACBTIEN: DAC Buffer Read Pointer Top Flag Interrupt Enable
    const uint8_t DAC_C0_DACBTIEN = 1U << 1 ;

  // Field DACBWIEN: DAC Buffer Watermark Interrupt Enable
    const uint8_t DAC_C0_DACBWIEN = 1U << 2 ;

  // Field LPEN: DAC Low Power Control
    const uint8_t DAC_C0_LPEN = 1U << 3 ;

  // Field DACSWTRG: DAC Software Trigger
    const uint8_t DAC_C0_DACSWTRG = 1U << 4 ;

  // Field DACTRGSEL: DAC Trigger Select
    const uint8_t DAC_C0_DACTRGSEL = 1U << 5 ;

  // Field DACRFS: DAC Reference Select
    const uint8_t DAC_C0_DACRFS = 1U << 6 ;

  // Field DACEN: DAC Enable
    const uint8_t DAC_C0_DACEN = 1U << 7 ;

//---  Register C1: DAC Control Register 1
  #define DAC_C1(group) (* ((volatile uint8_t *) (kBaseAddress_C1 [group] + 0x22)))
  #define DAC0_C1 (* ((volatile uint8_t *) (0x400cc000 + 0x22)))
  #define DAC1_C1 (* ((volatile uint8_t *) (0x400cd000 + 0x22)))

  // Field DACBFEN: DAC Buffer Enable
    const uint8_t DAC_C1_DACBFEN = 1U << 0 ;

  // Field DACBFMD: DAC Buffer Work Mode Select
    inline uint8_t DAC_C1_DACBFMD (const uint8_t inValue) {return (inValue & 0x3U) << 1 ; }

  // Field DACBFWM: DAC Buffer Watermark Select
    inline uint8_t DAC_C1_DACBFWM (const uint8_t inValue) {return (inValue & 0x3U) << 3 ; }

  // Field DMAEN: DMA Enable Select
    const uint8_t DAC_C1_DMAEN = 1U << 7 ;

//---  Register C2: DAC Control Register 2
  #define DAC_C2(group) (* ((volatile uint8_t *) (kBaseAddress_C2 [group] + 0x23)))
  #define DAC0_C2 (* ((volatile uint8_t *) (0x400cc000 + 0x23)))
  #define DAC1_C2 (* ((volatile uint8_t *) (0x400cd000 + 0x23)))

  // Field DACBFUP: DAC Buffer Upper Limit
    inline uint8_t DAC_C2_DACBFUP (const uint8_t inValue) {return (inValue & 0xfU) << 0 ; }

  // Field DACBFRP: DAC Buffer Read Pointer
    inline uint8_t DAC_C2_DACBFRP (const uint8_t inValue) {return (inValue & 0xfU) << 4 ; }

//------------------------------------------------------------------------------
// Peripheral DMA: Enhanced direct memory access controller
//------------------------------------------------------------------------------

//---  Register CR: Control Register
  #define DMA_CR (* ((volatile uint32_t *) (0x40008000 + 0)))

  // Field EDBG: Enable Debug
    const uint32_t DMA_CR_EDBG = 1U << 1 ;

  // Field ERCA: Enable Round Robin Channel Arbitration
    const uint32_t DMA_CR_ERCA = 1U << 2 ;

  // Field HOE: Halt On Error
    const uint32_t DMA_CR_HOE = 1U << 4 ;

  // Field HALT: Halt DMA Operations
    const uint32_t DMA_CR_HALT = 1U << 5 ;

  // Field CLM: Continuous Link Mode
    const uint32_t DMA_CR_CLM = 1U << 6 ;

  // Field EMLM: Enable Minor Loop Mapping
    const uint32_t DMA_CR_EMLM = 1U << 7 ;

  // Field ECX: Error Cancel Transfer
    const uint32_t DMA_CR_ECX = 1U << 16 ;

  // Field CX: Cancel Transfer
    const uint32_t DMA_CR_CX = 1U << 17 ;

//---  Register ES: Error Status Register
  #define DMA_ES (* ((const volatile uint32_t *) (0x40008000 + 4)))

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

  // Field ERRCHN: Error Channel Number or Canceled Channel Number
    inline uint32_t DMA_ES_ERRCHN (const uint32_t inValue) {return (inValue & 0xfU) << 8 ; }

  // Field CPE: Channel Priority Error
    const uint32_t DMA_ES_CPE = 1U << 14 ;

  // Field ECX: Transfer Canceled
    const uint32_t DMA_ES_ECX = 1U << 16 ;

  // Field VLD: Logical OR of all ERR status bits
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

//---  Register CEEI: Clear Enable Error Interrupt Register
  #define DMA_CEEI (* ((volatile uint8_t *) (0x40008000 + 24)))

  // Field CEEI: Clear Enable Error Interrupt
    inline uint8_t DMA_CEEI_CEEI (const uint8_t inValue) {return (inValue & 0xfU) << 0 ; }

  // Field CAEE: Clear All Enable Error Interrupts
    const uint8_t DMA_CEEI_CAEE = 1U << 6 ;

  // Field NOP: No Op enable
    const uint8_t DMA_CEEI_NOP = 1U << 7 ;

//---  Register SEEI: Set Enable Error Interrupt Register
  #define DMA_SEEI (* ((volatile uint8_t *) (0x40008000 + 25)))

  // Field SEEI: Set Enable Error Interrupt
    inline uint8_t DMA_SEEI_SEEI (const uint8_t inValue) {return (inValue & 0xfU) << 0 ; }

  // Field SAEE: Sets All Enable Error Interrupts
    const uint8_t DMA_SEEI_SAEE = 1U << 6 ;

  // Field NOP: No Op enable
    const uint8_t DMA_SEEI_NOP = 1U << 7 ;

//---  Register CERQ: Clear Enable Request Register
  #define DMA_CERQ (* ((volatile uint8_t *) (0x40008000 + 26)))

  // Field CERQ: Clear Enable Request
    inline uint8_t DMA_CERQ_CERQ (const uint8_t inValue) {return (inValue & 0xfU) << 0 ; }

  // Field CAER: Clear All Enable Requests
    const uint8_t DMA_CERQ_CAER = 1U << 6 ;

  // Field NOP: No Op enable
    const uint8_t DMA_CERQ_NOP = 1U << 7 ;

//---  Register SERQ: Set Enable Request Register
  #define DMA_SERQ (* ((volatile uint8_t *) (0x40008000 + 27)))

  // Field SERQ: Set enable request
    inline uint8_t DMA_SERQ_SERQ (const uint8_t inValue) {return (inValue & 0xfU) << 0 ; }

  // Field SAER: Set All Enable Requests
    const uint8_t DMA_SERQ_SAER = 1U << 6 ;

  // Field NOP: No Op enable
    const uint8_t DMA_SERQ_NOP = 1U << 7 ;

//---  Register CDNE: Clear DONE Status Bit Register
  #define DMA_CDNE (* ((volatile uint8_t *) (0x40008000 + 28)))

  // Field CDNE: Clear DONE Bit
    inline uint8_t DMA_CDNE_CDNE (const uint8_t inValue) {return (inValue & 0xfU) << 0 ; }

  // Field CADN: Clears All DONE Bits
    const uint8_t DMA_CDNE_CADN = 1U << 6 ;

  // Field NOP: No Op enable
    const uint8_t DMA_CDNE_NOP = 1U << 7 ;

//---  Register SSRT: Set START Bit Register
  #define DMA_SSRT (* ((volatile uint8_t *) (0x40008000 + 29)))

  // Field SSRT: Set START Bit
    inline uint8_t DMA_SSRT_SSRT (const uint8_t inValue) {return (inValue & 0xfU) << 0 ; }

  // Field SAST: Set All START Bits (activates all channels)
    const uint8_t DMA_SSRT_SAST = 1U << 6 ;

  // Field NOP: No Op enable
    const uint8_t DMA_SSRT_NOP = 1U << 7 ;

//---  Register CERR: Clear Error Register
  #define DMA_CERR (* ((volatile uint8_t *) (0x40008000 + 30)))

  // Field CERR: Clear Error Indicator
    inline uint8_t DMA_CERR_CERR (const uint8_t inValue) {return (inValue & 0xfU) << 0 ; }

  // Field CAEI: Clear All Error Indicators
    const uint8_t DMA_CERR_CAEI = 1U << 6 ;

  // Field NOP: No Op enable
    const uint8_t DMA_CERR_NOP = 1U << 7 ;

//---  Register CINT: Clear Interrupt Request Register
  #define DMA_CINT (* ((volatile uint8_t *) (0x40008000 + 31)))

  // Field CINT: Clear Interrupt Request
    inline uint8_t DMA_CINT_CINT (const uint8_t inValue) {return (inValue & 0xfU) << 0 ; }

  // Field CAIR: Clear All Interrupt Requests
    const uint8_t DMA_CINT_CAIR = 1U << 6 ;

  // Field NOP: No Op enable
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

//---  Register HRS: Hardware Request Status Register
  #define DMA_HRS (* ((const volatile uint32_t *) (0x40008000 + 52)))

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

  // Field ELINK: Enable channel-to-channel linking on minor-loop complete
    const uint16_t DMA_TCD_CITER_ELINKYES_ELINK = 1U << 15 ;

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

  // Field DLASTSGA: Destination last address adjustment or the memory address for the next transfer control descriptor to be loaded into this channel (scatter/gather)
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

  // Field BWC: Bandwidth Control
    inline uint16_t DMA_TCD_CSR_BWC (const uint16_t inValue) {return (inValue & 0x3U) << 14 ; }

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

  // Field ELINK: Enables channel-to-channel linking on minor loop complete
    const uint16_t DMA_TCD_BITER_ELINKYES_ELINK = 1U << 15 ;

//------------------------------------------------------------------------------
// Peripheral DMAMUX: DMA channel multiplexor
//------------------------------------------------------------------------------

//---  Registers CHCFG(0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15): Channel Configuration register
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

  // Field SOURCE: DMA Channel Source (Slot)
    inline uint8_t DMAMUX_CHCFG_SOURCE (const uint8_t inValue) {return (inValue & 0x3fU) << 0 ; }

  // Field TRIG: DMA Channel Trigger Enable
    const uint8_t DMAMUX_CHCFG_TRIG = 1U << 6 ;

  // Field ENBL: DMA Channel Enable
    const uint8_t DMAMUX_CHCFG_ENBL = 1U << 7 ;

//------------------------------------------------------------------------------
// Peripheral ENET: Ethernet MAC-NET Core
//------------------------------------------------------------------------------

//---  Register EIR: Interrupt Event Register
  #define ENET_EIR (* ((volatile uint32_t *) (0x400c0000 + 4)))

  // Field TS_TIMER: Timestamp Timer
    const uint32_t ENET_EIR_TS_TIMER = 1U << 15 ;

  // Field TS_AVAIL: Transmit Timestamp Available
    const uint32_t ENET_EIR_TS_AVAIL = 1U << 16 ;

  // Field WAKEUP: Node Wakeup Request Indication
    const uint32_t ENET_EIR_WAKEUP = 1U << 17 ;

  // Field PLR: Payload Receive Error
    const uint32_t ENET_EIR_PLR = 1U << 18 ;

  // Field UN: Transmit FIFO Underrun
    const uint32_t ENET_EIR_UN = 1U << 19 ;

  // Field RL: Collision Retry Limit
    const uint32_t ENET_EIR_RL = 1U << 20 ;

  // Field LC: Late Collision
    const uint32_t ENET_EIR_LC = 1U << 21 ;

  // Field EBERR: Ethernet Bus Error
    const uint32_t ENET_EIR_EBERR = 1U << 22 ;

  // Field MII: MII Interrupt.
    const uint32_t ENET_EIR_MII = 1U << 23 ;

  // Field RXB: Receive Buffer Interrupt
    const uint32_t ENET_EIR_RXB = 1U << 24 ;

  // Field RXF: Receive Frame Interrupt
    const uint32_t ENET_EIR_RXF = 1U << 25 ;

  // Field TXB: Transmit Buffer Interrupt
    const uint32_t ENET_EIR_TXB = 1U << 26 ;

  // Field TXF: Transmit Frame Interrupt
    const uint32_t ENET_EIR_TXF = 1U << 27 ;

  // Field GRA: Graceful Stop Complete
    const uint32_t ENET_EIR_GRA = 1U << 28 ;

  // Field BABT: Babbling Transmit Error
    const uint32_t ENET_EIR_BABT = 1U << 29 ;

  // Field BABR: Babbling Receive Error
    const uint32_t ENET_EIR_BABR = 1U << 30 ;

//---  Register EIMR: Interrupt Mask Register
  #define ENET_EIMR (* ((volatile uint32_t *) (0x400c0000 + 8)))

  // Field TS_TIMER: TS_TIMER Interrupt Mask
    const uint32_t ENET_EIMR_TS_TIMER = 1U << 15 ;

  // Field TS_AVAIL: TS_AVAIL Interrupt Mask
    const uint32_t ENET_EIMR_TS_AVAIL = 1U << 16 ;

  // Field WAKEUP: WAKEUP Interrupt Mask
    const uint32_t ENET_EIMR_WAKEUP = 1U << 17 ;

  // Field PLR: PLR Interrupt Mask
    const uint32_t ENET_EIMR_PLR = 1U << 18 ;

  // Field UN: UN Interrupt Mask
    const uint32_t ENET_EIMR_UN = 1U << 19 ;

  // Field RL: RL Interrupt Mask
    const uint32_t ENET_EIMR_RL = 1U << 20 ;

  // Field LC: LC Interrupt Mask
    const uint32_t ENET_EIMR_LC = 1U << 21 ;

  // Field EBERR: EBERR Interrupt Mask
    const uint32_t ENET_EIMR_EBERR = 1U << 22 ;

  // Field MII: MII Interrupt Mask
    const uint32_t ENET_EIMR_MII = 1U << 23 ;

  // Field RXB: RXB Interrupt Mask
    const uint32_t ENET_EIMR_RXB = 1U << 24 ;

  // Field RXF: RXF Interrupt Mask
    const uint32_t ENET_EIMR_RXF = 1U << 25 ;

  // Field TXB: TXB Interrupt Mask
    const uint32_t ENET_EIMR_TXB = 1U << 26 ;

  // Field TXF: TXF Interrupt Mask
    const uint32_t ENET_EIMR_TXF = 1U << 27 ;

  // Field GRA: GRA Interrupt Mask
    const uint32_t ENET_EIMR_GRA = 1U << 28 ;

  // Field BABT: BABT Interrupt Mask
    const uint32_t ENET_EIMR_BABT = 1U << 29 ;

  // Field BABR: BABR Interrupt Mask
    const uint32_t ENET_EIMR_BABR = 1U << 30 ;

//---  Register RDAR: Receive Descriptor Active Register
  #define ENET_RDAR (* ((volatile uint32_t *) (0x400c0000 + 16)))

  // Field RDAR: Receive Descriptor Active
    const uint32_t ENET_RDAR_RDAR = 1U << 24 ;

//---  Register TDAR: Transmit Descriptor Active Register
  #define ENET_TDAR (* ((volatile uint32_t *) (0x400c0000 + 20)))

  // Field TDAR: Transmit Descriptor Active
    const uint32_t ENET_TDAR_TDAR = 1U << 24 ;

//---  Register ECR: Ethernet Control Register
  #define ENET_ECR (* ((volatile uint32_t *) (0x400c0000 + 36)))

  // Field RESET: Ethernet MAC Reset
    const uint32_t ENET_ECR_RESET = 1U << 0 ;

  // Field ETHEREN: Ethernet Enable
    const uint32_t ENET_ECR_ETHEREN = 1U << 1 ;

  // Field MAGICEN: Magic Packet Detection Enable
    const uint32_t ENET_ECR_MAGICEN = 1U << 2 ;

  // Field SLEEP: Sleep Mode Enable
    const uint32_t ENET_ECR_SLEEP = 1U << 3 ;

  // Field EN1588: EN1588 Enable
    const uint32_t ENET_ECR_EN1588 = 1U << 4 ;

  // Field DBGEN: Debug Enable
    const uint32_t ENET_ECR_DBGEN = 1U << 6 ;

  // Field STOPEN: STOPEN Signal Control
    const uint32_t ENET_ECR_STOPEN = 1U << 7 ;

  // Field DBSWP: Descriptor Byte Swapping Enable
    const uint32_t ENET_ECR_DBSWP = 1U << 8 ;

//---  Register MMFR: MII Management Frame Register
  #define ENET_MMFR (* ((volatile uint32_t *) (0x400c0000 + 64)))

  // Field DATA: Management Frame Data
    inline uint32_t ENET_MMFR_DATA (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

  // Field TA: Turn Around
    inline uint32_t ENET_MMFR_TA (const uint32_t inValue) {return (inValue & 0x3U) << 16 ; }

  // Field RA: Register Address
    inline uint32_t ENET_MMFR_RA (const uint32_t inValue) {return (inValue & 0x1fU) << 18 ; }

  // Field PA: PHY Address
    inline uint32_t ENET_MMFR_PA (const uint32_t inValue) {return (inValue & 0x1fU) << 23 ; }

  // Field OP: Operation Code
    inline uint32_t ENET_MMFR_OP (const uint32_t inValue) {return (inValue & 0x3U) << 28 ; }

  // Field ST: Start Of Frame Delimiter
    inline uint32_t ENET_MMFR_ST (const uint32_t inValue) {return (inValue & 0x3U) << 30 ; }

//---  Register MSCR: MII Speed Control Register
  #define ENET_MSCR (* ((volatile uint32_t *) (0x400c0000 + 68)))

  // Field MII_SPEED: MII Speed
    inline uint32_t ENET_MSCR_MII_SPEED (const uint32_t inValue) {return (inValue & 0x3fU) << 1 ; }

  // Field DIS_PRE: Disable Preamble
    const uint32_t ENET_MSCR_DIS_PRE = 1U << 7 ;

  // Field HOLDTIME: Hold time On MDIO Output
    inline uint32_t ENET_MSCR_HOLDTIME (const uint32_t inValue) {return (inValue & 0x7U) << 8 ; }

//---  Register MIBC: MIB Control Register
  #define ENET_MIBC (* ((volatile uint32_t *) (0x400c0000 + 100)))

  // Field MIB_CLEAR: MIB Clear
    const uint32_t ENET_MIBC_MIB_CLEAR = 1U << 29 ;

  // Field MIB_IDLE: MIB Idle
    const uint32_t ENET_MIBC_MIB_IDLE = 1U << 30 ;

  // Field MIB_DIS: Disable MIB Logic
    const uint32_t ENET_MIBC_MIB_DIS = 1U << 31 ;

//---  Register RCR: Receive Control Register
  #define ENET_RCR (* ((volatile uint32_t *) (0x400c0000 + 132)))

  // Field LOOP: Internal Loopback
    const uint32_t ENET_RCR_LOOP = 1U << 0 ;

  // Field DRT: Disable Receive On Transmit
    const uint32_t ENET_RCR_DRT = 1U << 1 ;

  // Field MII_MODE: Media Independent Interface Mode
    const uint32_t ENET_RCR_MII_MODE = 1U << 2 ;

  // Field PROM: Promiscuous Mode
    const uint32_t ENET_RCR_PROM = 1U << 3 ;

  // Field BC_REJ: Broadcast Frame Reject
    const uint32_t ENET_RCR_BC_REJ = 1U << 4 ;

  // Field FCE: Flow Control Enable
    const uint32_t ENET_RCR_FCE = 1U << 5 ;

  // Field RMII_MODE: RMII Mode Enable
    const uint32_t ENET_RCR_RMII_MODE = 1U << 8 ;

  // Field RMII_10T: Enables 10-Mbps mode of the RMII .
    const uint32_t ENET_RCR_RMII_10T = 1U << 9 ;

  // Field PADEN: Enable Frame Padding Remove On Receive
    const uint32_t ENET_RCR_PADEN = 1U << 12 ;

  // Field PAUFWD: Terminate/Forward Pause Frames
    const uint32_t ENET_RCR_PAUFWD = 1U << 13 ;

  // Field CRCFWD: Terminate/Forward Received CRC
    const uint32_t ENET_RCR_CRCFWD = 1U << 14 ;

  // Field CFEN: MAC Control Frame Enable
    const uint32_t ENET_RCR_CFEN = 1U << 15 ;

  // Field MAX_FL: Maximum Frame Length
    inline uint32_t ENET_RCR_MAX_FL (const uint32_t inValue) {return (inValue & 0x3fffU) << 16 ; }

  // Field NLC: Payload Length Check Disable
    const uint32_t ENET_RCR_NLC = 1U << 30 ;

  // Field GRS: Graceful Receive Stopped
    const uint32_t ENET_RCR_GRS = 1U << 31 ;

//---  Register TCR: Transmit Control Register
  #define ENET_TCR (* ((volatile uint32_t *) (0x400c0000 + 196)))

  // Field GTS: Graceful Transmit Stop
    const uint32_t ENET_TCR_GTS = 1U << 0 ;

  // Field FDEN: Full-Duplex Enable
    const uint32_t ENET_TCR_FDEN = 1U << 2 ;

  // Field TFC_PAUSE: Transmit Frame Control Pause
    const uint32_t ENET_TCR_TFC_PAUSE = 1U << 3 ;

  // Field RFC_PAUSE: Receive Frame Control Pause
    const uint32_t ENET_TCR_RFC_PAUSE = 1U << 4 ;

  // Field ADDSEL: Source MAC Address Select On Transmit
    inline uint32_t ENET_TCR_ADDSEL (const uint32_t inValue) {return (inValue & 0x7U) << 5 ; }

  // Field ADDINS: Set MAC Address On Transmit
    const uint32_t ENET_TCR_ADDINS = 1U << 8 ;

  // Field CRCFWD: Forward Frame From Application With CRC
    const uint32_t ENET_TCR_CRCFWD = 1U << 9 ;

//---  Register PALR: Physical Address Lower Register
  #define ENET_PALR (* ((volatile uint32_t *) (0x400c0000 + 228)))

  // Field PADDR1: Pause Address
    inline uint32_t ENET_PALR_PADDR1 (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register PAUR: Physical Address Upper Register
  #define ENET_PAUR (* ((volatile uint32_t *) (0x400c0000 + 232)))

  // Field TYPE: Type Field In PAUSE Frames
    inline uint32_t ENET_PAUR_TYPE (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

  // Field PADDR2: Bytes 4 (bits 31:24) and 5 (bits 23:16) of the 6-byte individual address used for exact match, and the source address field in PAUSE frames
    inline uint32_t ENET_PAUR_PADDR2 (const uint32_t inValue) {return (inValue & 0xffffU) << 16 ; }

//---  Register OPD: Opcode/Pause Duration Register
  #define ENET_OPD (* ((volatile uint32_t *) (0x400c0000 + 236)))

  // Field PAUSE_DUR: Pause Duration
    inline uint32_t ENET_OPD_PAUSE_DUR (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

  // Field OPCODE: Opcode Field In PAUSE Frames
    inline uint32_t ENET_OPD_OPCODE (const uint32_t inValue) {return (inValue & 0xffffU) << 16 ; }

//---  Register IAUR: Descriptor Individual Upper Address Register
  #define ENET_IAUR (* ((volatile uint32_t *) (0x400c0000 + 280)))

  // Field IADDR1: Contains the upper 32 bits of the 64-bit hash table used in the address recognition process for receive frames with a unicast address
    inline uint32_t ENET_IAUR_IADDR1 (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register IALR: Descriptor Individual Lower Address Register
  #define ENET_IALR (* ((volatile uint32_t *) (0x400c0000 + 284)))

  // Field IADDR2: Contains the lower 32 bits of the 64-bit hash table used in the address recognition process for receive frames with a unicast address
    inline uint32_t ENET_IALR_IADDR2 (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register GAUR: Descriptor Group Upper Address Register
  #define ENET_GAUR (* ((volatile uint32_t *) (0x400c0000 + 288)))

  // Field GADDR1: Contains the upper 32 bits of the 64-bit hash table used in the address recognition process for receive frames with a multicast address
    inline uint32_t ENET_GAUR_GADDR1 (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register GALR: Descriptor Group Lower Address Register
  #define ENET_GALR (* ((volatile uint32_t *) (0x400c0000 + 292)))

  // Field GADDR2: Contains the lower 32 bits of the 64-bit hash table used in the address recognition process for receive frames with a multicast address
    inline uint32_t ENET_GALR_GADDR2 (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register TFWR: Transmit FIFO Watermark Register
  #define ENET_TFWR (* ((volatile uint32_t *) (0x400c0000 + 324)))

  // Field TFWR: Transmit FIFO Write
    inline uint32_t ENET_TFWR_TFWR (const uint32_t inValue) {return (inValue & 0x3fU) << 0 ; }

  // Field STRFWD: Store And Forward Enable
    const uint32_t ENET_TFWR_STRFWD = 1U << 8 ;

//---  Register RDSR: Receive Descriptor Ring Start Register
  #define ENET_RDSR (* ((volatile uint32_t *) (0x400c0000 + 384)))

  // Field R_DES_START: Pointer to the beginning of the receive buffer descriptor queue.
    inline uint32_t ENET_RDSR_R_DES_START (const uint32_t inValue) {return (inValue & 0x1fffffffU) << 3 ; }

//---  Register TDSR: Transmit Buffer Descriptor Ring Start Register
  #define ENET_TDSR (* ((volatile uint32_t *) (0x400c0000 + 388)))

  // Field X_DES_START: Pointer to the beginning of the transmit buffer descriptor queue.
    inline uint32_t ENET_TDSR_X_DES_START (const uint32_t inValue) {return (inValue & 0x1fffffffU) << 3 ; }

//---  Register MRBR: Maximum Receive Buffer Size Register
  #define ENET_MRBR (* ((volatile uint32_t *) (0x400c0000 + 392)))

  // Field R_BUF_SIZE: Receive buffer size in bytes.
    inline uint32_t ENET_MRBR_R_BUF_SIZE (const uint32_t inValue) {return (inValue & 0x3ffU) << 4 ; }

//---  Register RSFL: Receive FIFO Section Full Threshold
  #define ENET_RSFL (* ((volatile uint32_t *) (0x400c0000 + 400)))

  // Field RX_SECTION_FULL: Value Of Receive FIFO Section Full Threshold
    inline uint32_t ENET_RSFL_RX_SECTION_FULL (const uint32_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register RSEM: Receive FIFO Section Empty Threshold
  #define ENET_RSEM (* ((volatile uint32_t *) (0x400c0000 + 404)))

  // Field RX_SECTION_EMPTY: Value Of The Receive FIFO Section Empty Threshold
    inline uint32_t ENET_RSEM_RX_SECTION_EMPTY (const uint32_t inValue) {return (inValue & 0xffU) << 0 ; }

  // Field STAT_SECTION_EMPTY: RX Status FIFO Section Empty Threshold
    inline uint32_t ENET_RSEM_STAT_SECTION_EMPTY (const uint32_t inValue) {return (inValue & 0x1fU) << 16 ; }

//---  Register RAEM: Receive FIFO Almost Empty Threshold
  #define ENET_RAEM (* ((volatile uint32_t *) (0x400c0000 + 408)))

  // Field RX_ALMOST_EMPTY: Value Of The Receive FIFO Almost Empty Threshold
    inline uint32_t ENET_RAEM_RX_ALMOST_EMPTY (const uint32_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register RAFL: Receive FIFO Almost Full Threshold
  #define ENET_RAFL (* ((volatile uint32_t *) (0x400c0000 + 412)))

  // Field RX_ALMOST_FULL: Value Of The Receive FIFO Almost Full Threshold
    inline uint32_t ENET_RAFL_RX_ALMOST_FULL (const uint32_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register TSEM: Transmit FIFO Section Empty Threshold
  #define ENET_TSEM (* ((volatile uint32_t *) (0x400c0000 + 416)))

  // Field TX_SECTION_EMPTY: Value Of The Transmit FIFO Section Empty Threshold
    inline uint32_t ENET_TSEM_TX_SECTION_EMPTY (const uint32_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register TAEM: Transmit FIFO Almost Empty Threshold
  #define ENET_TAEM (* ((volatile uint32_t *) (0x400c0000 + 420)))

  // Field TX_ALMOST_EMPTY: Value of Transmit FIFO Almost Empty Threshold
    inline uint32_t ENET_TAEM_TX_ALMOST_EMPTY (const uint32_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register TAFL: Transmit FIFO Almost Full Threshold
  #define ENET_TAFL (* ((volatile uint32_t *) (0x400c0000 + 424)))

  // Field TX_ALMOST_FULL: Value Of The Transmit FIFO Almost Full Threshold
    inline uint32_t ENET_TAFL_TX_ALMOST_FULL (const uint32_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register TIPG: Transmit Inter-Packet Gap
  #define ENET_TIPG (* ((volatile uint32_t *) (0x400c0000 + 428)))

  // Field IPG: Transmit Inter-Packet Gap
    inline uint32_t ENET_TIPG_IPG (const uint32_t inValue) {return (inValue & 0x1fU) << 0 ; }

//---  Register FTRL: Frame Truncation Length
  #define ENET_FTRL (* ((volatile uint32_t *) (0x400c0000 + 432)))

  // Field TRUNC_FL: Frame Truncation Length
    inline uint32_t ENET_FTRL_TRUNC_FL (const uint32_t inValue) {return (inValue & 0x3fffU) << 0 ; }

//---  Register TACC: Transmit Accelerator Function Configuration
  #define ENET_TACC (* ((volatile uint32_t *) (0x400c0000 + 448)))

  // Field SHIFT16: TX FIFO Shift-16
    const uint32_t ENET_TACC_SHIFT16 = 1U << 0 ;

  // Field IPCHK: Enables insertion of IP header checksum.
    const uint32_t ENET_TACC_IPCHK = 1U << 3 ;

  // Field PROCHK: Enables insertion of protocol checksum.
    const uint32_t ENET_TACC_PROCHK = 1U << 4 ;

//---  Register RACC: Receive Accelerator Function Configuration
  #define ENET_RACC (* ((volatile uint32_t *) (0x400c0000 + 452)))

  // Field PADREM: Enable Padding Removal For Short IP Frames
    const uint32_t ENET_RACC_PADREM = 1U << 0 ;

  // Field IPDIS: Enable Discard Of Frames With Wrong IPv4 Header Checksum
    const uint32_t ENET_RACC_IPDIS = 1U << 1 ;

  // Field PRODIS: Enable Discard Of Frames With Wrong Protocol Checksum
    const uint32_t ENET_RACC_PRODIS = 1U << 2 ;

  // Field LINEDIS: Enable Discard Of Frames With MAC Layer Errors
    const uint32_t ENET_RACC_LINEDIS = 1U << 6 ;

  // Field SHIFT16: RX FIFO Shift-16
    const uint32_t ENET_RACC_SHIFT16 = 1U << 7 ;

//---  Register RMON_T_PACKETS: Tx Packet Count Statistic Register
  #define ENET_RMON_T_PACKETS (* ((const volatile uint32_t *) (0x400c0000 + 516)))

  // Field TXPKTS: Packet count
    inline uint32_t ENET_RMON_T_PACKETS_TXPKTS (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register RMON_T_BC_PKT: Tx Broadcast Packets Statistic Register
  #define ENET_RMON_T_BC_PKT (* ((const volatile uint32_t *) (0x400c0000 + 520)))

  // Field TXPKTS: Broadcast packets
    inline uint32_t ENET_RMON_T_BC_PKT_TXPKTS (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register RMON_T_MC_PKT: Tx Multicast Packets Statistic Register
  #define ENET_RMON_T_MC_PKT (* ((const volatile uint32_t *) (0x400c0000 + 524)))

  // Field TXPKTS: Multicast packets
    inline uint32_t ENET_RMON_T_MC_PKT_TXPKTS (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register RMON_T_CRC_ALIGN: Tx Packets with CRC/Align Error Statistic Register
  #define ENET_RMON_T_CRC_ALIGN (* ((const volatile uint32_t *) (0x400c0000 + 528)))

  // Field TXPKTS: Packets with CRC/align error
    inline uint32_t ENET_RMON_T_CRC_ALIGN_TXPKTS (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register RMON_T_UNDERSIZE: Tx Packets Less Than Bytes and Good CRC Statistic Register
  #define ENET_RMON_T_UNDERSIZE (* ((const volatile uint32_t *) (0x400c0000 + 532)))

  // Field TXPKTS: Packet count
    inline uint32_t ENET_RMON_T_UNDERSIZE_TXPKTS (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register RMON_T_OVERSIZE: Tx Packets GT MAX_FL bytes and Good CRC Statistic Register
  #define ENET_RMON_T_OVERSIZE (* ((const volatile uint32_t *) (0x400c0000 + 536)))

  // Field TXPKTS: Packet count
    inline uint32_t ENET_RMON_T_OVERSIZE_TXPKTS (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register RMON_T_FRAG: Tx Packets Less Than 64 Bytes and Bad CRC Statistic Register
  #define ENET_RMON_T_FRAG (* ((const volatile uint32_t *) (0x400c0000 + 540)))

  // Field TXPKTS: Packet count
    inline uint32_t ENET_RMON_T_FRAG_TXPKTS (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register RMON_T_JAB: Tx Packets Greater Than MAX_FL bytes and Bad CRC Statistic Register
  #define ENET_RMON_T_JAB (* ((const volatile uint32_t *) (0x400c0000 + 544)))

  // Field TXPKTS: Packet count
    inline uint32_t ENET_RMON_T_JAB_TXPKTS (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register RMON_T_COL: Tx Collision Count Statistic Register
  #define ENET_RMON_T_COL (* ((const volatile uint32_t *) (0x400c0000 + 548)))

  // Field TXPKTS: Packet count
    inline uint32_t ENET_RMON_T_COL_TXPKTS (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register RMON_T_P64: Tx 64-Byte Packets Statistic Register
  #define ENET_RMON_T_P64 (* ((const volatile uint32_t *) (0x400c0000 + 552)))

  // Field TXPKTS: Packet count
    inline uint32_t ENET_RMON_T_P64_TXPKTS (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register RMON_T_P65TO127: Tx 65- to 127-byte Packets Statistic Register
  #define ENET_RMON_T_P65TO127 (* ((const volatile uint32_t *) (0x400c0000 + 556)))

  // Field TXPKTS: Packet count
    inline uint32_t ENET_RMON_T_P65TO127_TXPKTS (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register RMON_T_P128TO255: Tx 128- to 255-byte Packets Statistic Register
  #define ENET_RMON_T_P128TO255 (* ((const volatile uint32_t *) (0x400c0000 + 560)))

  // Field TXPKTS: Packet count
    inline uint32_t ENET_RMON_T_P128TO255_TXPKTS (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register RMON_T_P256TO511: Tx 256- to 511-byte Packets Statistic Register
  #define ENET_RMON_T_P256TO511 (* ((const volatile uint32_t *) (0x400c0000 + 564)))

  // Field TXPKTS: Packet count
    inline uint32_t ENET_RMON_T_P256TO511_TXPKTS (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register RMON_T_P512TO1023: Tx 512- to 1023-byte Packets Statistic Register
  #define ENET_RMON_T_P512TO1023 (* ((const volatile uint32_t *) (0x400c0000 + 568)))

  // Field TXPKTS: Packet count
    inline uint32_t ENET_RMON_T_P512TO1023_TXPKTS (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register RMON_T_P1024TO2047: Tx 1024- to 2047-byte Packets Statistic Register
  #define ENET_RMON_T_P1024TO2047 (* ((const volatile uint32_t *) (0x400c0000 + 572)))

  // Field TXPKTS: Packet count
    inline uint32_t ENET_RMON_T_P1024TO2047_TXPKTS (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register RMON_T_P_GTE2048: Tx Packets Greater Than 2048 Bytes Statistic Register
  #define ENET_RMON_T_P_GTE2048 (* ((const volatile uint32_t *) (0x400c0000 + 576)))

  // Field TXPKTS: Packet count
    inline uint32_t ENET_RMON_T_P_GTE2048_TXPKTS (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register RMON_T_OCTETS: Tx Octets Statistic Register
  #define ENET_RMON_T_OCTETS (* ((const volatile uint32_t *) (0x400c0000 + 580)))

  // Field TXOCTS: Octet count
    inline uint32_t ENET_RMON_T_OCTETS_TXOCTS (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register IEEE_T_FRAME_OK: Frames Transmitted OK Statistic Register
  #define ENET_IEEE_T_FRAME_OK (* ((const volatile uint32_t *) (0x400c0000 + 588)))

  // Field COUNT: Frame count
    inline uint32_t ENET_IEEE_T_FRAME_OK_COUNT (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register IEEE_T_1COL: Frames Transmitted with Single Collision Statistic Register
  #define ENET_IEEE_T_1COL (* ((const volatile uint32_t *) (0x400c0000 + 592)))

  // Field COUNT: Frame count
    inline uint32_t ENET_IEEE_T_1COL_COUNT (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register IEEE_T_MCOL: Frames Transmitted with Multiple Collisions Statistic Register
  #define ENET_IEEE_T_MCOL (* ((const volatile uint32_t *) (0x400c0000 + 596)))

  // Field COUNT: Frame count
    inline uint32_t ENET_IEEE_T_MCOL_COUNT (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register IEEE_T_DEF: Frames Transmitted after Deferral Delay Statistic Register
  #define ENET_IEEE_T_DEF (* ((const volatile uint32_t *) (0x400c0000 + 600)))

  // Field COUNT: Frame count
    inline uint32_t ENET_IEEE_T_DEF_COUNT (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register IEEE_T_LCOL: Frames Transmitted with Late Collision Statistic Register
  #define ENET_IEEE_T_LCOL (* ((const volatile uint32_t *) (0x400c0000 + 604)))

  // Field COUNT: Frame count
    inline uint32_t ENET_IEEE_T_LCOL_COUNT (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register IEEE_T_EXCOL: Frames Transmitted with Excessive Collisions Statistic Register
  #define ENET_IEEE_T_EXCOL (* ((const volatile uint32_t *) (0x400c0000 + 608)))

  // Field COUNT: Frame count
    inline uint32_t ENET_IEEE_T_EXCOL_COUNT (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register IEEE_T_MACERR: Frames Transmitted with Tx FIFO Underrun Statistic Register
  #define ENET_IEEE_T_MACERR (* ((const volatile uint32_t *) (0x400c0000 + 612)))

  // Field COUNT: Frame count
    inline uint32_t ENET_IEEE_T_MACERR_COUNT (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register IEEE_T_CSERR: Frames Transmitted with Carrier Sense Error Statistic Register
  #define ENET_IEEE_T_CSERR (* ((const volatile uint32_t *) (0x400c0000 + 616)))

  // Field COUNT: Frame count
    inline uint32_t ENET_IEEE_T_CSERR_COUNT (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register IEEE_T_FDXFC: Flow Control Pause Frames Transmitted Statistic Register
  #define ENET_IEEE_T_FDXFC (* ((const volatile uint32_t *) (0x400c0000 + 624)))

  // Field COUNT: Frame count
    inline uint32_t ENET_IEEE_T_FDXFC_COUNT (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register IEEE_T_OCTETS_OK: Octet Count for Frames Transmitted w/o Error Statistic Register
  #define ENET_IEEE_T_OCTETS_OK (* ((const volatile uint32_t *) (0x400c0000 + 628)))

  // Field COUNT: Octet count
    inline uint32_t ENET_IEEE_T_OCTETS_OK_COUNT (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register RMON_R_PACKETS: Rx Packet Count Statistic Register
  #define ENET_RMON_R_PACKETS (* ((const volatile uint32_t *) (0x400c0000 + 644)))

  // Field COUNT: Packet count
    inline uint32_t ENET_RMON_R_PACKETS_COUNT (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register RMON_R_BC_PKT: Rx Broadcast Packets Statistic Register
  #define ENET_RMON_R_BC_PKT (* ((const volatile uint32_t *) (0x400c0000 + 648)))

  // Field COUNT: Packet count
    inline uint32_t ENET_RMON_R_BC_PKT_COUNT (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register RMON_R_MC_PKT: Rx Multicast Packets Statistic Register
  #define ENET_RMON_R_MC_PKT (* ((const volatile uint32_t *) (0x400c0000 + 652)))

  // Field COUNT: Packet count
    inline uint32_t ENET_RMON_R_MC_PKT_COUNT (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register RMON_R_CRC_ALIGN: Rx Packets with CRC/Align Error Statistic Register
  #define ENET_RMON_R_CRC_ALIGN (* ((const volatile uint32_t *) (0x400c0000 + 656)))

  // Field COUNT: Packet count
    inline uint32_t ENET_RMON_R_CRC_ALIGN_COUNT (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register RMON_R_UNDERSIZE: Rx Packets with Less Than 64 Bytes and Good CRC Statistic Register
  #define ENET_RMON_R_UNDERSIZE (* ((const volatile uint32_t *) (0x400c0000 + 660)))

  // Field COUNT: Packet count
    inline uint32_t ENET_RMON_R_UNDERSIZE_COUNT (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register RMON_R_OVERSIZE: Rx Packets Greater Than MAX_FL and Good CRC Statistic Register
  #define ENET_RMON_R_OVERSIZE (* ((const volatile uint32_t *) (0x400c0000 + 664)))

  // Field COUNT: Packet count
    inline uint32_t ENET_RMON_R_OVERSIZE_COUNT (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register RMON_R_FRAG: Rx Packets Less Than 64 Bytes and Bad CRC Statistic Register
  #define ENET_RMON_R_FRAG (* ((const volatile uint32_t *) (0x400c0000 + 668)))

  // Field COUNT: Packet count
    inline uint32_t ENET_RMON_R_FRAG_COUNT (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register RMON_R_JAB: Rx Packets Greater Than MAX_FL Bytes and Bad CRC Statistic Register
  #define ENET_RMON_R_JAB (* ((const volatile uint32_t *) (0x400c0000 + 672)))

  // Field COUNT: Packet count
    inline uint32_t ENET_RMON_R_JAB_COUNT (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register RMON_R_P64: Rx 64-Byte Packets Statistic Register
  #define ENET_RMON_R_P64 (* ((const volatile uint32_t *) (0x400c0000 + 680)))

  // Field COUNT: Packet count
    inline uint32_t ENET_RMON_R_P64_COUNT (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register RMON_R_P65TO127: Rx 65- to 127-Byte Packets Statistic Register
  #define ENET_RMON_R_P65TO127 (* ((const volatile uint32_t *) (0x400c0000 + 684)))

  // Field COUNT: Packet count
    inline uint32_t ENET_RMON_R_P65TO127_COUNT (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register RMON_R_P128TO255: Rx 128- to 255-Byte Packets Statistic Register
  #define ENET_RMON_R_P128TO255 (* ((const volatile uint32_t *) (0x400c0000 + 688)))

  // Field COUNT: Packet count
    inline uint32_t ENET_RMON_R_P128TO255_COUNT (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register RMON_R_P256TO511: Rx 256- to 511-Byte Packets Statistic Register
  #define ENET_RMON_R_P256TO511 (* ((const volatile uint32_t *) (0x400c0000 + 692)))

  // Field COUNT: Packet count
    inline uint32_t ENET_RMON_R_P256TO511_COUNT (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register RMON_R_P512TO1023: Rx 512- to 1023-Byte Packets Statistic Register
  #define ENET_RMON_R_P512TO1023 (* ((const volatile uint32_t *) (0x400c0000 + 696)))

  // Field COUNT: Packet count
    inline uint32_t ENET_RMON_R_P512TO1023_COUNT (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register RMON_R_P1024TO2047: Rx 1024- to 2047-Byte Packets Statistic Register
  #define ENET_RMON_R_P1024TO2047 (* ((const volatile uint32_t *) (0x400c0000 + 700)))

  // Field COUNT: Packet count
    inline uint32_t ENET_RMON_R_P1024TO2047_COUNT (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register RMON_R_P_GTE2048: Rx Packets Greater than 2048 Bytes Statistic Register
  #define ENET_RMON_R_P_GTE2048 (* ((const volatile uint32_t *) (0x400c0000 + 704)))

  // Field COUNT: Packet count
    inline uint32_t ENET_RMON_R_P_GTE2048_COUNT (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register RMON_R_OCTETS: Rx Octets Statistic Register
  #define ENET_RMON_R_OCTETS (* ((const volatile uint32_t *) (0x400c0000 + 708)))

  // Field COUNT: Octet count
    inline uint32_t ENET_RMON_R_OCTETS_COUNT (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register IEEE_R_DROP: Frames not Counted Correctly Statistic Register
  #define ENET_IEEE_R_DROP (* ((const volatile uint32_t *) (0x400c0000 + 712)))

  // Field COUNT: Frame count
    inline uint32_t ENET_IEEE_R_DROP_COUNT (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register IEEE_R_FRAME_OK: Frames Received OK Statistic Register
  #define ENET_IEEE_R_FRAME_OK (* ((const volatile uint32_t *) (0x400c0000 + 716)))

  // Field COUNT: Frame count
    inline uint32_t ENET_IEEE_R_FRAME_OK_COUNT (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register IEEE_R_CRC: Frames Received with CRC Error Statistic Register
  #define ENET_IEEE_R_CRC (* ((const volatile uint32_t *) (0x400c0000 + 720)))

  // Field COUNT: Frame count
    inline uint32_t ENET_IEEE_R_CRC_COUNT (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register IEEE_R_ALIGN: Frames Received with Alignment Error Statistic Register
  #define ENET_IEEE_R_ALIGN (* ((const volatile uint32_t *) (0x400c0000 + 724)))

  // Field COUNT: Frame count
    inline uint32_t ENET_IEEE_R_ALIGN_COUNT (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register IEEE_R_MACERR: Receive FIFO Overflow Count Statistic Register
  #define ENET_IEEE_R_MACERR (* ((const volatile uint32_t *) (0x400c0000 + 728)))

  // Field COUNT: Count
    inline uint32_t ENET_IEEE_R_MACERR_COUNT (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register IEEE_R_FDXFC: Flow Control Pause Frames Received Statistic Register
  #define ENET_IEEE_R_FDXFC (* ((const volatile uint32_t *) (0x400c0000 + 732)))

  // Field COUNT: Pause frame count
    inline uint32_t ENET_IEEE_R_FDXFC_COUNT (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register IEEE_R_OCTETS_OK: Octet Count for Frames Received without Error Statistic Register
  #define ENET_IEEE_R_OCTETS_OK (* ((const volatile uint32_t *) (0x400c0000 + 736)))

  // Field COUNT: Octet count
    inline uint32_t ENET_IEEE_R_OCTETS_OK_COUNT (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register ATCR: Adjustable Timer Control Register
  #define ENET_ATCR (* ((volatile uint32_t *) (0x400c0000 + 1024)))

  // Field EN: Enable Timer
    const uint32_t ENET_ATCR_EN = 1U << 0 ;

  // Field OFFEN: Enable One-Shot Offset Event
    const uint32_t ENET_ATCR_OFFEN = 1U << 2 ;

  // Field OFFRST: Reset Timer On Offset Event
    const uint32_t ENET_ATCR_OFFRST = 1U << 3 ;

  // Field PEREN: Enable Periodical Event
    const uint32_t ENET_ATCR_PEREN = 1U << 4 ;

  // Field PINPER: Enables event signal output assertion on period event
    const uint32_t ENET_ATCR_PINPER = 1U << 7 ;

  // Field RESTART: Reset Timer
    const uint32_t ENET_ATCR_RESTART = 1U << 9 ;

  // Field CAPTURE: Capture Timer Value
    const uint32_t ENET_ATCR_CAPTURE = 1U << 11 ;

  // Field SLAVE: Enable Timer Slave Mode
    const uint32_t ENET_ATCR_SLAVE = 1U << 13 ;

//---  Register ATVR: Timer Value Register
  #define ENET_ATVR (* ((volatile uint32_t *) (0x400c0000 + 1028)))

  // Field ATIME: A write sets the timer
    inline uint32_t ENET_ATVR_ATIME (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register ATOFF: Timer Offset Register
  #define ENET_ATOFF (* ((volatile uint32_t *) (0x400c0000 + 1032)))

  // Field OFFSET: Offset value for one-shot event generation
    inline uint32_t ENET_ATOFF_OFFSET (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register ATPER: Timer Period Register
  #define ENET_ATPER (* ((volatile uint32_t *) (0x400c0000 + 1036)))

  // Field PERIOD: Value for generating periodic events
    inline uint32_t ENET_ATPER_PERIOD (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register ATCOR: Timer Correction Register
  #define ENET_ATCOR (* ((volatile uint32_t *) (0x400c0000 + 1040)))

  // Field COR: Correction Counter Wrap-Around Value
    inline uint32_t ENET_ATCOR_COR (const uint32_t inValue) {return (inValue & 0x7fffffffU) << 0 ; }

//---  Register ATINC: Time-Stamping Clock Period Register
  #define ENET_ATINC (* ((volatile uint32_t *) (0x400c0000 + 1044)))

  // Field INC: Clock Period Of The Timestamping Clock (ts_clk) In Nanoseconds
    inline uint32_t ENET_ATINC_INC (const uint32_t inValue) {return (inValue & 0x7fU) << 0 ; }

  // Field INC_CORR: Correction Increment Value
    inline uint32_t ENET_ATINC_INC_CORR (const uint32_t inValue) {return (inValue & 0x7fU) << 8 ; }

//---  Register ATSTMP: Timestamp of Last Transmitted Frame
  #define ENET_ATSTMP (* ((const volatile uint32_t *) (0x400c0000 + 1048)))

  // Field TIMESTAMP: Timestamp of the last frame transmitted by the core that had TxBD[TS] set
    inline uint32_t ENET_ATSTMP_TIMESTAMP (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register TGSR: Timer Global Status Register
  #define ENET_TGSR (* ((volatile uint32_t *) (0x400c0000 + 1540)))

  // Field TF0: Copy Of Timer Flag For Channel 0
    const uint32_t ENET_TGSR_TF0 = 1U << 0 ;

  // Field TF1: Copy Of Timer Flag For Channel 1
    const uint32_t ENET_TGSR_TF1 = 1U << 1 ;

  // Field TF2: Copy Of Timer Flag For Channel 2
    const uint32_t ENET_TGSR_TF2 = 1U << 2 ;

  // Field TF3: Copy Of Timer Flag For Channel 3
    const uint32_t ENET_TGSR_TF3 = 1U << 3 ;

//---  Registers TCSR(0,1,2,3): Timer Control Status Register
  #define ENET_TCSR(idx) (* ((volatile uint32_t *) (0x400c0000 + 0x608 + (idx) * 0x8)))
  #define ENET_TCSR0 (* ((volatile uint32_t *) (0x400c0000 + 0x608 + 0 * 0x8)))
  #define ENET_TCSR1 (* ((volatile uint32_t *) (0x400c0000 + 0x608 + 1 * 0x8)))
  #define ENET_TCSR2 (* ((volatile uint32_t *) (0x400c0000 + 0x608 + 2 * 0x8)))
  #define ENET_TCSR3 (* ((volatile uint32_t *) (0x400c0000 + 0x608 + 3 * 0x8)))

  // Field TDRE: Timer DMA Request Enable
    const uint32_t ENET_TCSR_TDRE = 1U << 0 ;

  // Field TMODE: Timer Mode
    inline uint32_t ENET_TCSR_TMODE (const uint32_t inValue) {return (inValue & 0xfU) << 2 ; }

  // Field TIE: Timer Interrupt Enable
    const uint32_t ENET_TCSR_TIE = 1U << 6 ;

  // Field TF: Timer Flag
    const uint32_t ENET_TCSR_TF = 1U << 7 ;

//---  Registers TCCR(0,1,2,3): Timer Compare Capture Register
  #define ENET_TCCR(idx) (* ((volatile uint32_t *) (0x400c0000 + 0x60c + (idx) * 0x8)))
  #define ENET_TCCR0 (* ((volatile uint32_t *) (0x400c0000 + 0x60c + 0 * 0x8)))
  #define ENET_TCCR1 (* ((volatile uint32_t *) (0x400c0000 + 0x60c + 1 * 0x8)))
  #define ENET_TCCR2 (* ((volatile uint32_t *) (0x400c0000 + 0x60c + 2 * 0x8)))
  #define ENET_TCCR3 (* ((volatile uint32_t *) (0x400c0000 + 0x60c + 3 * 0x8)))

  // Field TCC: Timer Capture Compare
    inline uint32_t ENET_TCCR_TCC (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

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

//---  Register SERV: Service Register
  #define EWM_SERV (* ((volatile uint8_t *) (0x40061000 + 1)))

  // Field SERVICE: The EWM service mechanism requires the CPU to write two values to the SERV register: a first data byte of 0xB4, followed by a second data byte of 0x2C
    inline uint8_t EWM_SERV_SERVICE (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register CMPL: Compare Low Register
  #define EWM_CMPL (* ((volatile uint8_t *) (0x40061000 + 2)))

  // Field COMPAREL: To prevent runaway code from changing this field, software should write to this field after a CPU reset even if the (default) minimum service time is required
    inline uint8_t EWM_CMPL_COMPAREL (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register CMPH: Compare High Register
  #define EWM_CMPH (* ((volatile uint8_t *) (0x40061000 + 3)))

  // Field COMPAREH: To prevent runaway code from changing this field, software should write to this field after a CPU reset even if the (default) maximum service time is required
    inline uint8_t EWM_CMPH_COMPAREH (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//------------------------------------------------------------------------------
// Peripheral FB: FlexBus external bus interface
//------------------------------------------------------------------------------

//---  Registers CSAR(0,1,2,3,4,5): Chip Select Address Register
  #define FB_CSAR(idx) (* ((volatile uint32_t *) (0x4000c000 + 0x0 + (idx) * 0xc)))
  #define FB_CSAR0 (* ((volatile uint32_t *) (0x4000c000 + 0x0 + 0 * 0xc)))
  #define FB_CSAR1 (* ((volatile uint32_t *) (0x4000c000 + 0x0 + 1 * 0xc)))
  #define FB_CSAR2 (* ((volatile uint32_t *) (0x4000c000 + 0x0 + 2 * 0xc)))
  #define FB_CSAR3 (* ((volatile uint32_t *) (0x4000c000 + 0x0 + 3 * 0xc)))
  #define FB_CSAR4 (* ((volatile uint32_t *) (0x4000c000 + 0x0 + 4 * 0xc)))
  #define FB_CSAR5 (* ((volatile uint32_t *) (0x4000c000 + 0x0 + 5 * 0xc)))

  // Field BA: Base Address
    inline uint32_t FB_CSAR_BA (const uint32_t inValue) {return (inValue & 0xffffU) << 16 ; }

//---  Registers CSMR(0,1,2,3,4,5): Chip Select Mask Register
  #define FB_CSMR(idx) (* ((volatile uint32_t *) (0x4000c000 + 0x4 + (idx) * 0xc)))
  #define FB_CSMR0 (* ((volatile uint32_t *) (0x4000c000 + 0x4 + 0 * 0xc)))
  #define FB_CSMR1 (* ((volatile uint32_t *) (0x4000c000 + 0x4 + 1 * 0xc)))
  #define FB_CSMR2 (* ((volatile uint32_t *) (0x4000c000 + 0x4 + 2 * 0xc)))
  #define FB_CSMR3 (* ((volatile uint32_t *) (0x4000c000 + 0x4 + 3 * 0xc)))
  #define FB_CSMR4 (* ((volatile uint32_t *) (0x4000c000 + 0x4 + 4 * 0xc)))
  #define FB_CSMR5 (* ((volatile uint32_t *) (0x4000c000 + 0x4 + 5 * 0xc)))

  // Field V: Valid
    const uint32_t FB_CSMR_V = 1U << 0 ;

  // Field WP: Write Protect
    const uint32_t FB_CSMR_WP = 1U << 8 ;

  // Field BAM: Base Address Mask
    inline uint32_t FB_CSMR_BAM (const uint32_t inValue) {return (inValue & 0xffffU) << 16 ; }

//---  Registers CSCR(0,1,2,3,4,5): Chip Select Control Register
  #define FB_CSCR(idx) (* ((volatile uint32_t *) (0x4000c000 + 0x8 + (idx) * 0xc)))
  #define FB_CSCR0 (* ((volatile uint32_t *) (0x4000c000 + 0x8 + 0 * 0xc)))
  #define FB_CSCR1 (* ((volatile uint32_t *) (0x4000c000 + 0x8 + 1 * 0xc)))
  #define FB_CSCR2 (* ((volatile uint32_t *) (0x4000c000 + 0x8 + 2 * 0xc)))
  #define FB_CSCR3 (* ((volatile uint32_t *) (0x4000c000 + 0x8 + 3 * 0xc)))
  #define FB_CSCR4 (* ((volatile uint32_t *) (0x4000c000 + 0x8 + 4 * 0xc)))
  #define FB_CSCR5 (* ((volatile uint32_t *) (0x4000c000 + 0x8 + 5 * 0xc)))

  // Field BSTW: Burst-Write Enable
    const uint32_t FB_CSCR_BSTW = 1U << 3 ;

  // Field BSTR: Burst-Read Enable
    const uint32_t FB_CSCR_BSTR = 1U << 4 ;

  // Field BEM: Byte-Enable Mode
    const uint32_t FB_CSCR_BEM = 1U << 5 ;

  // Field PS: Port Size
    inline uint32_t FB_CSCR_PS (const uint32_t inValue) {return (inValue & 0x3U) << 6 ; }

  // Field AA: Auto-Acknowledge Enable
    const uint32_t FB_CSCR_AA = 1U << 8 ;

  // Field BLS: Byte-Lane Shift
    const uint32_t FB_CSCR_BLS = 1U << 9 ;

  // Field WS: Wait States
    inline uint32_t FB_CSCR_WS (const uint32_t inValue) {return (inValue & 0x3fU) << 10 ; }

  // Field WRAH: Write Address Hold or Deselect
    inline uint32_t FB_CSCR_WRAH (const uint32_t inValue) {return (inValue & 0x3U) << 16 ; }

  // Field RDAH: Read Address Hold or Deselect
    inline uint32_t FB_CSCR_RDAH (const uint32_t inValue) {return (inValue & 0x3U) << 18 ; }

  // Field ASET: Address Setup
    inline uint32_t FB_CSCR_ASET (const uint32_t inValue) {return (inValue & 0x3U) << 20 ; }

  // Field EXTS: Extended Transfer Start/Extended Address Latch Enable Controls how long FB_TS /FB_ALE is asserted.
    const uint32_t FB_CSCR_EXTS = 1U << 22 ;

  // Field SWSEN: Secondary Wait State Enable
    const uint32_t FB_CSCR_SWSEN = 1U << 23 ;

  // Field SWS: Secondary Wait States
    inline uint32_t FB_CSCR_SWS (const uint32_t inValue) {return (inValue & 0x3fU) << 26 ; }

//---  Register CSPMCR: Chip Select port Multiplexing Control Register
  #define FB_CSPMCR (* ((volatile uint32_t *) (0x4000c000 + 96)))

  // Field GROUP5: FlexBus Signal Group 5 Multiplex control
    inline uint32_t FB_CSPMCR_GROUP5 (const uint32_t inValue) {return (inValue & 0xfU) << 12 ; }

  // Field GROUP4: FlexBus Signal Group 4 Multiplex control
    inline uint32_t FB_CSPMCR_GROUP4 (const uint32_t inValue) {return (inValue & 0xfU) << 16 ; }

  // Field GROUP3: FlexBus Signal Group 3 Multiplex control
    inline uint32_t FB_CSPMCR_GROUP3 (const uint32_t inValue) {return (inValue & 0xfU) << 20 ; }

  // Field GROUP2: FlexBus Signal Group 2 Multiplex control
    inline uint32_t FB_CSPMCR_GROUP2 (const uint32_t inValue) {return (inValue & 0xfU) << 24 ; }

  // Field GROUP1: FlexBus Signal Group 1 Multiplex control
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

  // Field B1MW: Bank 1 Memory Width
    inline uint32_t FMC_PFB1CR_B1MW (const uint32_t inValue) {return (inValue & 0x3U) << 17 ; }

  // Field B1RWSC: Bank 1 Read Wait State Control
    inline uint32_t FMC_PFB1CR_B1RWSC (const uint32_t inValue) {return (inValue & 0xfU) << 28 ; }

//---  Registers TAGVDW0S(0,1,2,3): Cache Tag Storage
  #define FMC_TAGVDW0S(idx) (* ((volatile uint32_t *) (0x4001f000 + 0x100 + (idx) * 0x4)))
  #define FMC_TAGVDW0S0 (* ((volatile uint32_t *) (0x4001f000 + 0x100 + 0 * 0x4)))
  #define FMC_TAGVDW0S1 (* ((volatile uint32_t *) (0x4001f000 + 0x100 + 1 * 0x4)))
  #define FMC_TAGVDW0S2 (* ((volatile uint32_t *) (0x4001f000 + 0x100 + 2 * 0x4)))
  #define FMC_TAGVDW0S3 (* ((volatile uint32_t *) (0x4001f000 + 0x100 + 3 * 0x4)))

  // Field valid: 1-bit valid for cache entry
    const uint32_t FMC_TAGVDW0S_valid = 1U << 0 ;

  // Field tag: 14-bit tag for cache entry
    inline uint32_t FMC_TAGVDW0S_tag (const uint32_t inValue) {return (inValue & 0x3fffU) << 5 ; }

//---  Registers TAGVDW1S(0,1,2,3): Cache Tag Storage
  #define FMC_TAGVDW1S(idx) (* ((volatile uint32_t *) (0x4001f000 + 0x110 + (idx) * 0x4)))
  #define FMC_TAGVDW1S0 (* ((volatile uint32_t *) (0x4001f000 + 0x110 + 0 * 0x4)))
  #define FMC_TAGVDW1S1 (* ((volatile uint32_t *) (0x4001f000 + 0x110 + 1 * 0x4)))
  #define FMC_TAGVDW1S2 (* ((volatile uint32_t *) (0x4001f000 + 0x110 + 2 * 0x4)))
  #define FMC_TAGVDW1S3 (* ((volatile uint32_t *) (0x4001f000 + 0x110 + 3 * 0x4)))

  // Field valid: 1-bit valid for cache entry
    const uint32_t FMC_TAGVDW1S_valid = 1U << 0 ;

  // Field tag: 14-bit tag for cache entry
    inline uint32_t FMC_TAGVDW1S_tag (const uint32_t inValue) {return (inValue & 0x3fffU) << 5 ; }

//---  Registers TAGVDW2S(0,1,2,3): Cache Tag Storage
  #define FMC_TAGVDW2S(idx) (* ((volatile uint32_t *) (0x4001f000 + 0x120 + (idx) * 0x4)))
  #define FMC_TAGVDW2S0 (* ((volatile uint32_t *) (0x4001f000 + 0x120 + 0 * 0x4)))
  #define FMC_TAGVDW2S1 (* ((volatile uint32_t *) (0x4001f000 + 0x120 + 1 * 0x4)))
  #define FMC_TAGVDW2S2 (* ((volatile uint32_t *) (0x4001f000 + 0x120 + 2 * 0x4)))
  #define FMC_TAGVDW2S3 (* ((volatile uint32_t *) (0x4001f000 + 0x120 + 3 * 0x4)))

  // Field valid: 1-bit valid for cache entry
    const uint32_t FMC_TAGVDW2S_valid = 1U << 0 ;

  // Field tag: 14-bit tag for cache entry
    inline uint32_t FMC_TAGVDW2S_tag (const uint32_t inValue) {return (inValue & 0x3fffU) << 5 ; }

//---  Registers TAGVDW3S(0,1,2,3): Cache Tag Storage
  #define FMC_TAGVDW3S(idx) (* ((volatile uint32_t *) (0x4001f000 + 0x130 + (idx) * 0x4)))
  #define FMC_TAGVDW3S0 (* ((volatile uint32_t *) (0x4001f000 + 0x130 + 0 * 0x4)))
  #define FMC_TAGVDW3S1 (* ((volatile uint32_t *) (0x4001f000 + 0x130 + 1 * 0x4)))
  #define FMC_TAGVDW3S2 (* ((volatile uint32_t *) (0x4001f000 + 0x130 + 2 * 0x4)))
  #define FMC_TAGVDW3S3 (* ((volatile uint32_t *) (0x4001f000 + 0x130 + 3 * 0x4)))

  // Field valid: 1-bit valid for cache entry
    const uint32_t FMC_TAGVDW3S_valid = 1U << 0 ;

  // Field tag: 14-bit tag for cache entry
    inline uint32_t FMC_TAGVDW3S_tag (const uint32_t inValue) {return (inValue & 0x3fffU) << 5 ; }

//---  Registers DATAW0SU(0,1,2,3): Cache Data Storage (upper word)
  #define FMC_DATAW0SU(idx) (* ((volatile uint32_t *) (0x4001f000 + 0x200 + (idx) * 0x8)))
  #define FMC_DATAW0S0U (* ((volatile uint32_t *) (0x4001f000 + 0x200 + 0 * 0x8)))
  #define FMC_DATAW0S1U (* ((volatile uint32_t *) (0x4001f000 + 0x200 + 1 * 0x8)))
  #define FMC_DATAW0S2U (* ((volatile uint32_t *) (0x4001f000 + 0x200 + 2 * 0x8)))
  #define FMC_DATAW0S3U (* ((volatile uint32_t *) (0x4001f000 + 0x200 + 3 * 0x8)))

  // Field data: Bits [63:32] of data entry
    inline uint32_t FMC_DATAW0SU_data (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Registers DATAW0SL(0,1,2,3): Cache Data Storage (lower word)
  #define FMC_DATAW0SL(idx) (* ((volatile uint32_t *) (0x4001f000 + 0x204 + (idx) * 0x8)))
  #define FMC_DATAW0S0L (* ((volatile uint32_t *) (0x4001f000 + 0x204 + 0 * 0x8)))
  #define FMC_DATAW0S1L (* ((volatile uint32_t *) (0x4001f000 + 0x204 + 1 * 0x8)))
  #define FMC_DATAW0S2L (* ((volatile uint32_t *) (0x4001f000 + 0x204 + 2 * 0x8)))
  #define FMC_DATAW0S3L (* ((volatile uint32_t *) (0x4001f000 + 0x204 + 3 * 0x8)))

  // Field data: Bits [31:0] of data entry
    inline uint32_t FMC_DATAW0SL_data (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Registers DATAW1SU(0,1,2,3): Cache Data Storage (upper word)
  #define FMC_DATAW1SU(idx) (* ((volatile uint32_t *) (0x4001f000 + 0x220 + (idx) * 0x8)))
  #define FMC_DATAW1S0U (* ((volatile uint32_t *) (0x4001f000 + 0x220 + 0 * 0x8)))
  #define FMC_DATAW1S1U (* ((volatile uint32_t *) (0x4001f000 + 0x220 + 1 * 0x8)))
  #define FMC_DATAW1S2U (* ((volatile uint32_t *) (0x4001f000 + 0x220 + 2 * 0x8)))
  #define FMC_DATAW1S3U (* ((volatile uint32_t *) (0x4001f000 + 0x220 + 3 * 0x8)))

  // Field data: Bits [63:32] of data entry
    inline uint32_t FMC_DATAW1SU_data (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Registers DATAW1SL(0,1,2,3): Cache Data Storage (lower word)
  #define FMC_DATAW1SL(idx) (* ((volatile uint32_t *) (0x4001f000 + 0x224 + (idx) * 0x8)))
  #define FMC_DATAW1S0L (* ((volatile uint32_t *) (0x4001f000 + 0x224 + 0 * 0x8)))
  #define FMC_DATAW1S1L (* ((volatile uint32_t *) (0x4001f000 + 0x224 + 1 * 0x8)))
  #define FMC_DATAW1S2L (* ((volatile uint32_t *) (0x4001f000 + 0x224 + 2 * 0x8)))
  #define FMC_DATAW1S3L (* ((volatile uint32_t *) (0x4001f000 + 0x224 + 3 * 0x8)))

  // Field data: Bits [31:0] of data entry
    inline uint32_t FMC_DATAW1SL_data (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Registers DATAW2SU(0,1,2,3): Cache Data Storage (upper word)
  #define FMC_DATAW2SU(idx) (* ((volatile uint32_t *) (0x4001f000 + 0x240 + (idx) * 0x8)))
  #define FMC_DATAW2S0U (* ((volatile uint32_t *) (0x4001f000 + 0x240 + 0 * 0x8)))
  #define FMC_DATAW2S1U (* ((volatile uint32_t *) (0x4001f000 + 0x240 + 1 * 0x8)))
  #define FMC_DATAW2S2U (* ((volatile uint32_t *) (0x4001f000 + 0x240 + 2 * 0x8)))
  #define FMC_DATAW2S3U (* ((volatile uint32_t *) (0x4001f000 + 0x240 + 3 * 0x8)))

  // Field data: Bits [63:32] of data entry
    inline uint32_t FMC_DATAW2SU_data (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Registers DATAW2SL(0,1,2,3): Cache Data Storage (lower word)
  #define FMC_DATAW2SL(idx) (* ((volatile uint32_t *) (0x4001f000 + 0x244 + (idx) * 0x8)))
  #define FMC_DATAW2S0L (* ((volatile uint32_t *) (0x4001f000 + 0x244 + 0 * 0x8)))
  #define FMC_DATAW2S1L (* ((volatile uint32_t *) (0x4001f000 + 0x244 + 1 * 0x8)))
  #define FMC_DATAW2S2L (* ((volatile uint32_t *) (0x4001f000 + 0x244 + 2 * 0x8)))
  #define FMC_DATAW2S3L (* ((volatile uint32_t *) (0x4001f000 + 0x244 + 3 * 0x8)))

  // Field data: Bits [31:0] of data entry
    inline uint32_t FMC_DATAW2SL_data (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Registers DATAW3SU(0,1,2,3): Cache Data Storage (upper word)
  #define FMC_DATAW3SU(idx) (* ((volatile uint32_t *) (0x4001f000 + 0x260 + (idx) * 0x8)))
  #define FMC_DATAW3S0U (* ((volatile uint32_t *) (0x4001f000 + 0x260 + 0 * 0x8)))
  #define FMC_DATAW3S1U (* ((volatile uint32_t *) (0x4001f000 + 0x260 + 1 * 0x8)))
  #define FMC_DATAW3S2U (* ((volatile uint32_t *) (0x4001f000 + 0x260 + 2 * 0x8)))
  #define FMC_DATAW3S3U (* ((volatile uint32_t *) (0x4001f000 + 0x260 + 3 * 0x8)))

  // Field data: Bits [63:32] of data entry
    inline uint32_t FMC_DATAW3SU_data (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Registers DATAW3SL(0,1,2,3): Cache Data Storage (lower word)
  #define FMC_DATAW3SL(idx) (* ((volatile uint32_t *) (0x4001f000 + 0x264 + (idx) * 0x8)))
  #define FMC_DATAW3S0L (* ((volatile uint32_t *) (0x4001f000 + 0x264 + 0 * 0x8)))
  #define FMC_DATAW3S1L (* ((volatile uint32_t *) (0x4001f000 + 0x264 + 1 * 0x8)))
  #define FMC_DATAW3S2L (* ((volatile uint32_t *) (0x4001f000 + 0x264 + 2 * 0x8)))
  #define FMC_DATAW3S3L (* ((volatile uint32_t *) (0x4001f000 + 0x264 + 3 * 0x8)))

  // Field data: Bits [31:0] of data entry
    inline uint32_t FMC_DATAW3SL_data (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//------------------------------------------------------------------------------
// Peripheral FTFE: Flash Memory Interface
//------------------------------------------------------------------------------

//---  Register FSTAT: Flash Status Register
  #define FTFE_FSTAT (* ((volatile uint8_t *) (0x40020000 + 0)))

  // Field MGSTAT0: Memory Controller Command Completion Status Flag
    const uint8_t FTFE_FSTAT_MGSTAT0 = 1U << 0 ;

  // Field FPVIOL: Flash Protection Violation Flag
    const uint8_t FTFE_FSTAT_FPVIOL = 1U << 4 ;

  // Field ACCERR: Flash Access Error Flag
    const uint8_t FTFE_FSTAT_ACCERR = 1U << 5 ;

  // Field RDCOLERR: FTFE Read Collision Error Flag
    const uint8_t FTFE_FSTAT_RDCOLERR = 1U << 6 ;

  // Field CCIF: Command Complete Interrupt Flag
    const uint8_t FTFE_FSTAT_CCIF = 1U << 7 ;

//---  Register FCNFG: Flash Configuration Register
  #define FTFE_FCNFG (* ((volatile uint8_t *) (0x40020000 + 1)))

  // Field EEERDY: For devices with FlexNVM: This flag indicates if the EEPROM backup data has been copied to the FlexRAM and is therefore available for read access
    const uint8_t FTFE_FCNFG_EEERDY = 1U << 0 ;

  // Field RAMRDY: RAM Ready
    const uint8_t FTFE_FCNFG_RAMRDY = 1U << 1 ;

  // Field PFLSH: FTFE configuration
    const uint8_t FTFE_FCNFG_PFLSH = 1U << 2 ;

  // Field SWAP: Swap
    const uint8_t FTFE_FCNFG_SWAP = 1U << 3 ;

  // Field ERSSUSP: Erase Suspend
    const uint8_t FTFE_FCNFG_ERSSUSP = 1U << 4 ;

  // Field ERSAREQ: Erase All Request
    const uint8_t FTFE_FCNFG_ERSAREQ = 1U << 5 ;

  // Field RDCOLLIE: Read Collision Error Interrupt Enable
    const uint8_t FTFE_FCNFG_RDCOLLIE = 1U << 6 ;

  // Field CCIE: Command Complete Interrupt Enable
    const uint8_t FTFE_FCNFG_CCIE = 1U << 7 ;

//---  Register FSEC: Flash Security Register
  #define FTFE_FSEC (* ((const volatile uint8_t *) (0x40020000 + 2)))

  // Field SEC: Flash Security
    inline uint8_t FTFE_FSEC_SEC (const uint8_t inValue) {return (inValue & 0x3U) << 0 ; }

  // Field FSLACC: Freescale Failure Analysis Access Code
    inline uint8_t FTFE_FSEC_FSLACC (const uint8_t inValue) {return (inValue & 0x3U) << 2 ; }

  // Field MEEN: Mass Erase Enable Bits
    inline uint8_t FTFE_FSEC_MEEN (const uint8_t inValue) {return (inValue & 0x3U) << 4 ; }

  // Field KEYEN: Backdoor Key Security Enable
    inline uint8_t FTFE_FSEC_KEYEN (const uint8_t inValue) {return (inValue & 0x3U) << 6 ; }

//---  Register FOPT: Flash Option Register
  #define FTFE_FOPT (* ((const volatile uint8_t *) (0x40020000 + 3)))

  // Field OPT: Nonvolatile Option
    inline uint8_t FTFE_FOPT_OPT (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register FCCOB_0_3: Flash Common Command Object Registers (0 ... 3)
  #define FTFE_FCCOB_0_3 (* ((volatile uint32_t *) (0x40020000 + 4)))

//---  Register FCCOB_4_7: Flash Common Command Object Registers (4 ... 7)
  #define FTFE_FCCOB_4_7 (* ((volatile uint32_t *) (0x40020000 + 8)))

//---  Register FCCOB_8_11: Flash Common Command Object Registers (8 ... 11)
  #define FTFE_FCCOB_8_11 (* ((volatile uint32_t *) (0x40020000 + 12)))

//---  Registers FPROT(3,2,1,0): Program Flash Protection Registers
  #define FTFE_FPROT(idx) (* ((volatile uint8_t *) (0x40020000 + 0x10 + (idx) * 0x1)))
  #define FTFE_FPROT3 (* ((volatile uint8_t *) (0x40020000 + 0x10 + 0 * 0x1)))
  #define FTFE_FPROT2 (* ((volatile uint8_t *) (0x40020000 + 0x10 + 1 * 0x1)))
  #define FTFE_FPROT1 (* ((volatile uint8_t *) (0x40020000 + 0x10 + 2 * 0x1)))
  #define FTFE_FPROT0 (* ((volatile uint8_t *) (0x40020000 + 0x10 + 3 * 0x1)))

  // Field PROT: Program Flash Region Protect
    inline uint8_t FTFE_FPROT_PROT (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register FEPROT: EEPROM Protection Register
  #define FTFE_FEPROT (* ((volatile uint8_t *) (0x40020000 + 22)))

  // Field EPROT: EEPROM Region Protect
    inline uint8_t FTFE_FEPROT_EPROT (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register FDPROT: Data Flash Protection Register
  #define FTFE_FDPROT (* ((volatile uint8_t *) (0x40020000 + 23)))

  // Field DPROT: Data Flash Region Protect
    inline uint8_t FTFE_FDPROT_DPROT (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//------------------------------------------------------------------------------
// Peripheral FTFE_FlashConfig: Flash configuration field
//------------------------------------------------------------------------------

//---  Register BACKKEY3: Backdoor Comparison Key 3.
  #define FTFE_FlashConfig_BACKKEY3 (* ((const volatile uint8_t *) (0x400 + 0)))

  // Field KEY: Backdoor Comparison Key.
    inline uint8_t FTFE_FlashConfig_BACKKEY3_KEY (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register BACKKEY2: Backdoor Comparison Key 2.
  #define FTFE_FlashConfig_BACKKEY2 (* ((const volatile uint8_t *) (0x400 + 1)))

  // Field KEY: Backdoor Comparison Key.
    inline uint8_t FTFE_FlashConfig_BACKKEY2_KEY (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register BACKKEY1: Backdoor Comparison Key 1.
  #define FTFE_FlashConfig_BACKKEY1 (* ((const volatile uint8_t *) (0x400 + 2)))

  // Field KEY: Backdoor Comparison Key.
    inline uint8_t FTFE_FlashConfig_BACKKEY1_KEY (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register BACKKEY0: Backdoor Comparison Key 0.
  #define FTFE_FlashConfig_BACKKEY0 (* ((const volatile uint8_t *) (0x400 + 3)))

  // Field KEY: Backdoor Comparison Key.
    inline uint8_t FTFE_FlashConfig_BACKKEY0_KEY (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register BACKKEY7: Backdoor Comparison Key 7.
  #define FTFE_FlashConfig_BACKKEY7 (* ((const volatile uint8_t *) (0x400 + 4)))

  // Field KEY: Backdoor Comparison Key.
    inline uint8_t FTFE_FlashConfig_BACKKEY7_KEY (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register BACKKEY6: Backdoor Comparison Key 6.
  #define FTFE_FlashConfig_BACKKEY6 (* ((const volatile uint8_t *) (0x400 + 5)))

  // Field KEY: Backdoor Comparison Key.
    inline uint8_t FTFE_FlashConfig_BACKKEY6_KEY (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register BACKKEY5: Backdoor Comparison Key 5.
  #define FTFE_FlashConfig_BACKKEY5 (* ((const volatile uint8_t *) (0x400 + 6)))

  // Field KEY: Backdoor Comparison Key.
    inline uint8_t FTFE_FlashConfig_BACKKEY5_KEY (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register BACKKEY4: Backdoor Comparison Key 4.
  #define FTFE_FlashConfig_BACKKEY4 (* ((const volatile uint8_t *) (0x400 + 7)))

  // Field KEY: Backdoor Comparison Key.
    inline uint8_t FTFE_FlashConfig_BACKKEY4_KEY (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register FPROT3: Non-volatile P-Flash Protection 1 - Low Register
  #define FTFE_FlashConfig_FPROT3 (* ((const volatile uint8_t *) (0x400 + 8)))

  // Field PROT: P-Flash Region Protect
    inline uint8_t FTFE_FlashConfig_FPROT3_PROT (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register FPROT2: Non-volatile P-Flash Protection 1 - High Register
  #define FTFE_FlashConfig_FPROT2 (* ((const volatile uint8_t *) (0x400 + 9)))

  // Field PROT: P-Flash Region Protect
    inline uint8_t FTFE_FlashConfig_FPROT2_PROT (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register FPROT1: Non-volatile P-Flash Protection 0 - Low Register
  #define FTFE_FlashConfig_FPROT1 (* ((const volatile uint8_t *) (0x400 + 10)))

  // Field PROT: P-Flash Region Protect
    inline uint8_t FTFE_FlashConfig_FPROT1_PROT (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register FPROT0: Non-volatile P-Flash Protection 0 - High Register
  #define FTFE_FlashConfig_FPROT0 (* ((const volatile uint8_t *) (0x400 + 11)))

  // Field PROT: P-Flash Region Protect
    inline uint8_t FTFE_FlashConfig_FPROT0_PROT (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register FSEC: Non-volatile Flash Security Register
  #define FTFE_FlashConfig_FSEC (* ((const volatile uint8_t *) (0x400 + 12)))

  // Field SEC: Flash Security
    inline uint8_t FTFE_FlashConfig_FSEC_SEC (const uint8_t inValue) {return (inValue & 0x3U) << 0 ; }

  // Field FSLACC: Freescale Failure Analysis Access Code
    inline uint8_t FTFE_FlashConfig_FSEC_FSLACC (const uint8_t inValue) {return (inValue & 0x3U) << 2 ; }

  // Field MEEN: no description available
    inline uint8_t FTFE_FlashConfig_FSEC_MEEN (const uint8_t inValue) {return (inValue & 0x3U) << 4 ; }

  // Field KEYEN: Backdoor Key Security Enable
    inline uint8_t FTFE_FlashConfig_FSEC_KEYEN (const uint8_t inValue) {return (inValue & 0x3U) << 6 ; }

//---  Register FOPT: Non-volatile Flash Option Register
  #define FTFE_FlashConfig_FOPT (* ((const volatile uint8_t *) (0x400 + 13)))

  // Field LPBOOT: no description available
    const uint8_t FTFE_FlashConfig_FOPT_LPBOOT = 1U << 0 ;

  // Field EZPORT_DIS: no description available
    const uint8_t FTFE_FlashConfig_FOPT_EZPORT_DIS = 1U << 1 ;

//---  Register FEPROT: Non-volatile EERAM Protection Register
  #define FTFE_FlashConfig_FEPROT (* ((const volatile uint8_t *) (0x400 + 14)))

  // Field EPROT: no description available
    inline uint8_t FTFE_FlashConfig_FEPROT_EPROT (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register FDPROT: Non-volatile D-Flash Protection Register
  #define FTFE_FlashConfig_FDPROT (* ((const volatile uint8_t *) (0x400 + 15)))

  // Field DPROT: D-Flash Region Protect
    inline uint8_t FTFE_FlashConfig_FDPROT_DPROT (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//------------------------------------------------------------------------------
// PERIPHERAL GROUP: FTM
//        FTM0 at 0x40038000
//        FTM1 at 0x40039000
//        FTM2 at 0x4003a000
//        FTM3 at 0x400b9000
//------------------------------------------------------------------------------

static const uint32_t kBaseAddress_FTM [4] = {0x40038000, 0x40039000, 0x4003a000, 0x400b9000} ;

//------------------------------------------------------------------------------

//---  Register SC: Status And Control
  #define FTM_SC(group) (* ((volatile uint32_t *) (kBaseAddress_SC [group] + 0x0)))
  #define FTM0_SC (* ((volatile uint32_t *) (0x40038000 + 0x0)))
  #define FTM1_SC (* ((volatile uint32_t *) (0x40039000 + 0x0)))
  #define FTM2_SC (* ((volatile uint32_t *) (0x4003a000 + 0x0)))
  #define FTM3_SC (* ((volatile uint32_t *) (0x400b9000 + 0x0)))

  // Field PS: Prescale Factor Selection
    inline uint32_t FTM_SC_PS (const uint32_t inValue) {return (inValue & 0x7U) << 0 ; }

  // Field CLKS: Clock Source Selection
    inline uint32_t FTM_SC_CLKS (const uint32_t inValue) {return (inValue & 0x3U) << 3 ; }

  // Field CPWMS: Center-Aligned PWM Select
    const uint32_t FTM_SC_CPWMS = 1U << 5 ;

  // Field TOIE: Timer Overflow Interrupt Enable
    const uint32_t FTM_SC_TOIE = 1U << 6 ;

  // Field TOF: Timer Overflow Flag
    const uint32_t FTM_SC_TOF = 1U << 7 ;

//---  Register CNT: Counter
  #define FTM_CNT(group) (* ((volatile uint32_t *) (kBaseAddress_CNT [group] + 0x4)))
  #define FTM0_CNT (* ((volatile uint32_t *) (0x40038000 + 0x4)))
  #define FTM1_CNT (* ((volatile uint32_t *) (0x40039000 + 0x4)))
  #define FTM2_CNT (* ((volatile uint32_t *) (0x4003a000 + 0x4)))
  #define FTM3_CNT (* ((volatile uint32_t *) (0x400b9000 + 0x4)))

  // Field COUNT: Counter Value
    inline uint32_t FTM_CNT_COUNT (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register MOD: Modulo
  #define FTM_MOD(group) (* ((volatile uint32_t *) (kBaseAddress_MOD [group] + 0x8)))
  #define FTM0_MOD (* ((volatile uint32_t *) (0x40038000 + 0x8)))
  #define FTM1_MOD (* ((volatile uint32_t *) (0x40039000 + 0x8)))
  #define FTM2_MOD (* ((volatile uint32_t *) (0x4003a000 + 0x8)))
  #define FTM3_MOD (* ((volatile uint32_t *) (0x400b9000 + 0x8)))

  // Field MOD: Modulo Value
    inline uint32_t FTM_MOD_MOD (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Registers CSC(0,1,2,3,4,5,6,7): Channel (n) Status And Control
  #define FTM_CSC(group,idx) (* ((volatile uint32_t *) (kBaseAddress_CSC [group] + 0xc + (idx) * 0x8)))
  #define FTM0_CSC(idx) (* ((volatile uint32_t *) (0x40038000 + 0xc + (idx) * 0x8)))
  #define FTM1_CSC(idx) (* ((volatile uint32_t *) (0x40039000 + 0xc + (idx) * 0x8)))
  #define FTM2_CSC(idx) (* ((volatile uint32_t *) (0x4003a000 + 0xc + (idx) * 0x8)))
  #define FTM3_CSC(idx) (* ((volatile uint32_t *) (0x400b9000 + 0xc + (idx) * 0x8)))
  #define FTM0_C0SC (* ((volatile uint32_t *) (0x40038000 + 0xc + 0 * 0x8)))
  #define FTM1_C0SC (* ((volatile uint32_t *) (0x40039000 + 0xc + 0 * 0x8)))
  #define FTM2_C0SC (* ((volatile uint32_t *) (0x4003a000 + 0xc + 0 * 0x8)))
  #define FTM3_C0SC (* ((volatile uint32_t *) (0x400b9000 + 0xc + 0 * 0x8)))
  #define FTM0_C1SC (* ((volatile uint32_t *) (0x40038000 + 0xc + 1 * 0x8)))
  #define FTM1_C1SC (* ((volatile uint32_t *) (0x40039000 + 0xc + 1 * 0x8)))
  #define FTM2_C1SC (* ((volatile uint32_t *) (0x4003a000 + 0xc + 1 * 0x8)))
  #define FTM3_C1SC (* ((volatile uint32_t *) (0x400b9000 + 0xc + 1 * 0x8)))
  #define FTM0_C2SC (* ((volatile uint32_t *) (0x40038000 + 0xc + 2 * 0x8)))
  #define FTM1_C2SC (* ((volatile uint32_t *) (0x40039000 + 0xc + 2 * 0x8)))
  #define FTM2_C2SC (* ((volatile uint32_t *) (0x4003a000 + 0xc + 2 * 0x8)))
  #define FTM3_C2SC (* ((volatile uint32_t *) (0x400b9000 + 0xc + 2 * 0x8)))
  #define FTM0_C3SC (* ((volatile uint32_t *) (0x40038000 + 0xc + 3 * 0x8)))
  #define FTM1_C3SC (* ((volatile uint32_t *) (0x40039000 + 0xc + 3 * 0x8)))
  #define FTM2_C3SC (* ((volatile uint32_t *) (0x4003a000 + 0xc + 3 * 0x8)))
  #define FTM3_C3SC (* ((volatile uint32_t *) (0x400b9000 + 0xc + 3 * 0x8)))
  #define FTM0_C4SC (* ((volatile uint32_t *) (0x40038000 + 0xc + 4 * 0x8)))
  #define FTM1_C4SC (* ((volatile uint32_t *) (0x40039000 + 0xc + 4 * 0x8)))
  #define FTM2_C4SC (* ((volatile uint32_t *) (0x4003a000 + 0xc + 4 * 0x8)))
  #define FTM3_C4SC (* ((volatile uint32_t *) (0x400b9000 + 0xc + 4 * 0x8)))
  #define FTM0_C5SC (* ((volatile uint32_t *) (0x40038000 + 0xc + 5 * 0x8)))
  #define FTM1_C5SC (* ((volatile uint32_t *) (0x40039000 + 0xc + 5 * 0x8)))
  #define FTM2_C5SC (* ((volatile uint32_t *) (0x4003a000 + 0xc + 5 * 0x8)))
  #define FTM3_C5SC (* ((volatile uint32_t *) (0x400b9000 + 0xc + 5 * 0x8)))
  #define FTM0_C6SC (* ((volatile uint32_t *) (0x40038000 + 0xc + 6 * 0x8)))
  #define FTM1_C6SC (* ((volatile uint32_t *) (0x40039000 + 0xc + 6 * 0x8)))
  #define FTM2_C6SC (* ((volatile uint32_t *) (0x4003a000 + 0xc + 6 * 0x8)))
  #define FTM3_C6SC (* ((volatile uint32_t *) (0x400b9000 + 0xc + 6 * 0x8)))
  #define FTM0_C7SC (* ((volatile uint32_t *) (0x40038000 + 0xc + 7 * 0x8)))
  #define FTM1_C7SC (* ((volatile uint32_t *) (0x40039000 + 0xc + 7 * 0x8)))
  #define FTM2_C7SC (* ((volatile uint32_t *) (0x4003a000 + 0xc + 7 * 0x8)))
  #define FTM3_C7SC (* ((volatile uint32_t *) (0x400b9000 + 0xc + 7 * 0x8)))

  // Field DMA: DMA Enable
    const uint32_t FTM_CSC_DMA = 1U << 0 ;

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

//---  Registers CV(0,1,2,3,4,5,6,7): Channel (n) Value
  #define FTM_CV(group,idx) (* ((volatile uint32_t *) (kBaseAddress_CV [group] + 0x10 + (idx) * 0x8)))
  #define FTM0_CV(idx) (* ((volatile uint32_t *) (0x40038000 + 0x10 + (idx) * 0x8)))
  #define FTM1_CV(idx) (* ((volatile uint32_t *) (0x40039000 + 0x10 + (idx) * 0x8)))
  #define FTM2_CV(idx) (* ((volatile uint32_t *) (0x4003a000 + 0x10 + (idx) * 0x8)))
  #define FTM3_CV(idx) (* ((volatile uint32_t *) (0x400b9000 + 0x10 + (idx) * 0x8)))
  #define FTM0_C0V (* ((volatile uint32_t *) (0x40038000 + 0x10 + 0 * 0x8)))
  #define FTM1_C0V (* ((volatile uint32_t *) (0x40039000 + 0x10 + 0 * 0x8)))
  #define FTM2_C0V (* ((volatile uint32_t *) (0x4003a000 + 0x10 + 0 * 0x8)))
  #define FTM3_C0V (* ((volatile uint32_t *) (0x400b9000 + 0x10 + 0 * 0x8)))
  #define FTM0_C1V (* ((volatile uint32_t *) (0x40038000 + 0x10 + 1 * 0x8)))
  #define FTM1_C1V (* ((volatile uint32_t *) (0x40039000 + 0x10 + 1 * 0x8)))
  #define FTM2_C1V (* ((volatile uint32_t *) (0x4003a000 + 0x10 + 1 * 0x8)))
  #define FTM3_C1V (* ((volatile uint32_t *) (0x400b9000 + 0x10 + 1 * 0x8)))
  #define FTM0_C2V (* ((volatile uint32_t *) (0x40038000 + 0x10 + 2 * 0x8)))
  #define FTM1_C2V (* ((volatile uint32_t *) (0x40039000 + 0x10 + 2 * 0x8)))
  #define FTM2_C2V (* ((volatile uint32_t *) (0x4003a000 + 0x10 + 2 * 0x8)))
  #define FTM3_C2V (* ((volatile uint32_t *) (0x400b9000 + 0x10 + 2 * 0x8)))
  #define FTM0_C3V (* ((volatile uint32_t *) (0x40038000 + 0x10 + 3 * 0x8)))
  #define FTM1_C3V (* ((volatile uint32_t *) (0x40039000 + 0x10 + 3 * 0x8)))
  #define FTM2_C3V (* ((volatile uint32_t *) (0x4003a000 + 0x10 + 3 * 0x8)))
  #define FTM3_C3V (* ((volatile uint32_t *) (0x400b9000 + 0x10 + 3 * 0x8)))
  #define FTM0_C4V (* ((volatile uint32_t *) (0x40038000 + 0x10 + 4 * 0x8)))
  #define FTM1_C4V (* ((volatile uint32_t *) (0x40039000 + 0x10 + 4 * 0x8)))
  #define FTM2_C4V (* ((volatile uint32_t *) (0x4003a000 + 0x10 + 4 * 0x8)))
  #define FTM3_C4V (* ((volatile uint32_t *) (0x400b9000 + 0x10 + 4 * 0x8)))
  #define FTM0_C5V (* ((volatile uint32_t *) (0x40038000 + 0x10 + 5 * 0x8)))
  #define FTM1_C5V (* ((volatile uint32_t *) (0x40039000 + 0x10 + 5 * 0x8)))
  #define FTM2_C5V (* ((volatile uint32_t *) (0x4003a000 + 0x10 + 5 * 0x8)))
  #define FTM3_C5V (* ((volatile uint32_t *) (0x400b9000 + 0x10 + 5 * 0x8)))
  #define FTM0_C6V (* ((volatile uint32_t *) (0x40038000 + 0x10 + 6 * 0x8)))
  #define FTM1_C6V (* ((volatile uint32_t *) (0x40039000 + 0x10 + 6 * 0x8)))
  #define FTM2_C6V (* ((volatile uint32_t *) (0x4003a000 + 0x10 + 6 * 0x8)))
  #define FTM3_C6V (* ((volatile uint32_t *) (0x400b9000 + 0x10 + 6 * 0x8)))
  #define FTM0_C7V (* ((volatile uint32_t *) (0x40038000 + 0x10 + 7 * 0x8)))
  #define FTM1_C7V (* ((volatile uint32_t *) (0x40039000 + 0x10 + 7 * 0x8)))
  #define FTM2_C7V (* ((volatile uint32_t *) (0x4003a000 + 0x10 + 7 * 0x8)))
  #define FTM3_C7V (* ((volatile uint32_t *) (0x400b9000 + 0x10 + 7 * 0x8)))

  // Field VAL: Channel Value
    inline uint32_t FTM_CV_VAL (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register CNTIN: Counter Initial Value
  #define FTM_CNTIN(group) (* ((volatile uint32_t *) (kBaseAddress_CNTIN [group] + 0x4c)))
  #define FTM0_CNTIN (* ((volatile uint32_t *) (0x40038000 + 0x4c)))
  #define FTM1_CNTIN (* ((volatile uint32_t *) (0x40039000 + 0x4c)))
  #define FTM2_CNTIN (* ((volatile uint32_t *) (0x4003a000 + 0x4c)))
  #define FTM3_CNTIN (* ((volatile uint32_t *) (0x400b9000 + 0x4c)))

  // Field INIT: Initial Value Of The FTM Counter
    inline uint32_t FTM_CNTIN_INIT (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register STATUS: Capture And Compare Status
  #define FTM_STATUS(group) (* ((volatile uint32_t *) (kBaseAddress_STATUS [group] + 0x50)))
  #define FTM0_STATUS (* ((volatile uint32_t *) (0x40038000 + 0x50)))
  #define FTM1_STATUS (* ((volatile uint32_t *) (0x40039000 + 0x50)))
  #define FTM2_STATUS (* ((volatile uint32_t *) (0x4003a000 + 0x50)))
  #define FTM3_STATUS (* ((volatile uint32_t *) (0x400b9000 + 0x50)))

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

//---  Register MODE: Features Mode Selection
  #define FTM_MODE(group) (* ((volatile uint32_t *) (kBaseAddress_MODE [group] + 0x54)))
  #define FTM0_MODE (* ((volatile uint32_t *) (0x40038000 + 0x54)))
  #define FTM1_MODE (* ((volatile uint32_t *) (0x40039000 + 0x54)))
  #define FTM2_MODE (* ((volatile uint32_t *) (0x4003a000 + 0x54)))
  #define FTM3_MODE (* ((volatile uint32_t *) (0x400b9000 + 0x54)))

  // Field FTMEN: FTM Enable
    const uint32_t FTM_MODE_FTMEN = 1U << 0 ;

  // Field INIT: Initialize The Channels Output
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

//---  Register SYNC: Synchronization
  #define FTM_SYNC(group) (* ((volatile uint32_t *) (kBaseAddress_SYNC [group] + 0x58)))
  #define FTM0_SYNC (* ((volatile uint32_t *) (0x40038000 + 0x58)))
  #define FTM1_SYNC (* ((volatile uint32_t *) (0x40039000 + 0x58)))
  #define FTM2_SYNC (* ((volatile uint32_t *) (0x4003a000 + 0x58)))
  #define FTM3_SYNC (* ((volatile uint32_t *) (0x400b9000 + 0x58)))

  // Field CNTMIN: Minimum Loading Point Enable
    const uint32_t FTM_SYNC_CNTMIN = 1U << 0 ;

  // Field CNTMAX: Maximum Loading Point Enable
    const uint32_t FTM_SYNC_CNTMAX = 1U << 1 ;

  // Field REINIT: FTM Counter Reinitialization By Synchronization (FTM counter synchronization)
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

//---  Register OUTINIT: Initial State For Channels Output
  #define FTM_OUTINIT(group) (* ((volatile uint32_t *) (kBaseAddress_OUTINIT [group] + 0x5c)))
  #define FTM0_OUTINIT (* ((volatile uint32_t *) (0x40038000 + 0x5c)))
  #define FTM1_OUTINIT (* ((volatile uint32_t *) (0x40039000 + 0x5c)))
  #define FTM2_OUTINIT (* ((volatile uint32_t *) (0x4003a000 + 0x5c)))
  #define FTM3_OUTINIT (* ((volatile uint32_t *) (0x400b9000 + 0x5c)))

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

//---  Register OUTMASK: Output Mask
  #define FTM_OUTMASK(group) (* ((volatile uint32_t *) (kBaseAddress_OUTMASK [group] + 0x60)))
  #define FTM0_OUTMASK (* ((volatile uint32_t *) (0x40038000 + 0x60)))
  #define FTM1_OUTMASK (* ((volatile uint32_t *) (0x40039000 + 0x60)))
  #define FTM2_OUTMASK (* ((volatile uint32_t *) (0x4003a000 + 0x60)))
  #define FTM3_OUTMASK (* ((volatile uint32_t *) (0x400b9000 + 0x60)))

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

//---  Register COMBINE: Function For Linked Channels
  #define FTM_COMBINE(group) (* ((volatile uint32_t *) (kBaseAddress_COMBINE [group] + 0x64)))
  #define FTM0_COMBINE (* ((volatile uint32_t *) (0x40038000 + 0x64)))
  #define FTM1_COMBINE (* ((volatile uint32_t *) (0x40039000 + 0x64)))
  #define FTM2_COMBINE (* ((volatile uint32_t *) (0x4003a000 + 0x64)))
  #define FTM3_COMBINE (* ((volatile uint32_t *) (0x400b9000 + 0x64)))

  // Field COMBINE0: Combine Channels For n = 0
    const uint32_t FTM_COMBINE_COMBINE0 = 1U << 0 ;

  // Field COMP0: Complement Of Channel (n) For n = 0
    const uint32_t FTM_COMBINE_COMP0 = 1U << 1 ;

  // Field DECAPEN0: Dual Edge Capture Mode Enable For n = 0
    const uint32_t FTM_COMBINE_DECAPEN0 = 1U << 2 ;

  // Field DECAP0: Dual Edge Capture Mode Captures For n = 0
    const uint32_t FTM_COMBINE_DECAP0 = 1U << 3 ;

  // Field DTEN0: Deadtime Enable For n = 0
    const uint32_t FTM_COMBINE_DTEN0 = 1U << 4 ;

  // Field SYNCEN0: Synchronization Enable For n = 0
    const uint32_t FTM_COMBINE_SYNCEN0 = 1U << 5 ;

  // Field FAULTEN0: Fault Control Enable For n = 0
    const uint32_t FTM_COMBINE_FAULTEN0 = 1U << 6 ;

  // Field COMBINE1: Combine Channels For n = 2
    const uint32_t FTM_COMBINE_COMBINE1 = 1U << 8 ;

  // Field COMP1: Complement Of Channel (n) For n = 2
    const uint32_t FTM_COMBINE_COMP1 = 1U << 9 ;

  // Field DECAPEN1: Dual Edge Capture Mode Enable For n = 2
    const uint32_t FTM_COMBINE_DECAPEN1 = 1U << 10 ;

  // Field DECAP1: Dual Edge Capture Mode Captures For n = 2
    const uint32_t FTM_COMBINE_DECAP1 = 1U << 11 ;

  // Field DTEN1: Deadtime Enable For n = 2
    const uint32_t FTM_COMBINE_DTEN1 = 1U << 12 ;

  // Field SYNCEN1: Synchronization Enable For n = 2
    const uint32_t FTM_COMBINE_SYNCEN1 = 1U << 13 ;

  // Field FAULTEN1: Fault Control Enable For n = 2
    const uint32_t FTM_COMBINE_FAULTEN1 = 1U << 14 ;

  // Field COMBINE2: Combine Channels For n = 4
    const uint32_t FTM_COMBINE_COMBINE2 = 1U << 16 ;

  // Field COMP2: Complement Of Channel (n) For n = 4
    const uint32_t FTM_COMBINE_COMP2 = 1U << 17 ;

  // Field DECAPEN2: Dual Edge Capture Mode Enable For n = 4
    const uint32_t FTM_COMBINE_DECAPEN2 = 1U << 18 ;

  // Field DECAP2: Dual Edge Capture Mode Captures For n = 4
    const uint32_t FTM_COMBINE_DECAP2 = 1U << 19 ;

  // Field DTEN2: Deadtime Enable For n = 4
    const uint32_t FTM_COMBINE_DTEN2 = 1U << 20 ;

  // Field SYNCEN2: Synchronization Enable For n = 4
    const uint32_t FTM_COMBINE_SYNCEN2 = 1U << 21 ;

  // Field FAULTEN2: Fault Control Enable For n = 4
    const uint32_t FTM_COMBINE_FAULTEN2 = 1U << 22 ;

  // Field COMBINE3: Combine Channels For n = 6
    const uint32_t FTM_COMBINE_COMBINE3 = 1U << 24 ;

  // Field COMP3: Complement Of Channel (n) for n = 6
    const uint32_t FTM_COMBINE_COMP3 = 1U << 25 ;

  // Field DECAPEN3: Dual Edge Capture Mode Enable For n = 6
    const uint32_t FTM_COMBINE_DECAPEN3 = 1U << 26 ;

  // Field DECAP3: Dual Edge Capture Mode Captures For n = 6
    const uint32_t FTM_COMBINE_DECAP3 = 1U << 27 ;

  // Field DTEN3: Deadtime Enable For n = 6
    const uint32_t FTM_COMBINE_DTEN3 = 1U << 28 ;

  // Field SYNCEN3: Synchronization Enable For n = 6
    const uint32_t FTM_COMBINE_SYNCEN3 = 1U << 29 ;

  // Field FAULTEN3: Fault Control Enable For n = 6
    const uint32_t FTM_COMBINE_FAULTEN3 = 1U << 30 ;

//---  Register DEADTIME: Deadtime Insertion Control
  #define FTM_DEADTIME(group) (* ((volatile uint32_t *) (kBaseAddress_DEADTIME [group] + 0x68)))
  #define FTM0_DEADTIME (* ((volatile uint32_t *) (0x40038000 + 0x68)))
  #define FTM1_DEADTIME (* ((volatile uint32_t *) (0x40039000 + 0x68)))
  #define FTM2_DEADTIME (* ((volatile uint32_t *) (0x4003a000 + 0x68)))
  #define FTM3_DEADTIME (* ((volatile uint32_t *) (0x400b9000 + 0x68)))

  // Field DTVAL: Deadtime Value
    inline uint32_t FTM_DEADTIME_DTVAL (const uint32_t inValue) {return (inValue & 0x3fU) << 0 ; }

  // Field DTPS: Deadtime Prescaler Value
    inline uint32_t FTM_DEADTIME_DTPS (const uint32_t inValue) {return (inValue & 0x3U) << 6 ; }

//---  Register EXTTRIG: FTM External Trigger
  #define FTM_EXTTRIG(group) (* ((volatile uint32_t *) (kBaseAddress_EXTTRIG [group] + 0x6c)))
  #define FTM0_EXTTRIG (* ((volatile uint32_t *) (0x40038000 + 0x6c)))
  #define FTM1_EXTTRIG (* ((volatile uint32_t *) (0x40039000 + 0x6c)))
  #define FTM2_EXTTRIG (* ((volatile uint32_t *) (0x4003a000 + 0x6c)))
  #define FTM3_EXTTRIG (* ((volatile uint32_t *) (0x400b9000 + 0x6c)))

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

//---  Register POL: Channels Polarity
  #define FTM_POL(group) (* ((volatile uint32_t *) (kBaseAddress_POL [group] + 0x70)))
  #define FTM0_POL (* ((volatile uint32_t *) (0x40038000 + 0x70)))
  #define FTM1_POL (* ((volatile uint32_t *) (0x40039000 + 0x70)))
  #define FTM2_POL (* ((volatile uint32_t *) (0x4003a000 + 0x70)))
  #define FTM3_POL (* ((volatile uint32_t *) (0x400b9000 + 0x70)))

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

//---  Register FMS: Fault Mode Status
  #define FTM_FMS(group) (* ((volatile uint32_t *) (kBaseAddress_FMS [group] + 0x74)))
  #define FTM0_FMS (* ((volatile uint32_t *) (0x40038000 + 0x74)))
  #define FTM1_FMS (* ((volatile uint32_t *) (0x40039000 + 0x74)))
  #define FTM2_FMS (* ((volatile uint32_t *) (0x4003a000 + 0x74)))
  #define FTM3_FMS (* ((volatile uint32_t *) (0x400b9000 + 0x74)))

  // Field FAULTF0: Fault Detection Flag 0
    const uint32_t FTM_FMS_FAULTF0 = 1U << 0 ;

  // Field FAULTF1: Fault Detection Flag 1
    const uint32_t FTM_FMS_FAULTF1 = 1U << 1 ;

  // Field FAULTF2: Fault Detection Flag 2
    const uint32_t FTM_FMS_FAULTF2 = 1U << 2 ;

  // Field FAULTF3: Fault Detection Flag 3
    const uint32_t FTM_FMS_FAULTF3 = 1U << 3 ;

  // Field FAULTIN: Fault Inputs
    const uint32_t FTM_FMS_FAULTIN = 1U << 5 ;

  // Field WPEN: Write Protection Enable
    const uint32_t FTM_FMS_WPEN = 1U << 6 ;

  // Field FAULTF: Fault Detection Flag
    const uint32_t FTM_FMS_FAULTF = 1U << 7 ;

//---  Register FILTER: Input Capture Filter Control
  #define FTM_FILTER(group) (* ((volatile uint32_t *) (kBaseAddress_FILTER [group] + 0x78)))
  #define FTM0_FILTER (* ((volatile uint32_t *) (0x40038000 + 0x78)))
  #define FTM1_FILTER (* ((volatile uint32_t *) (0x40039000 + 0x78)))
  #define FTM2_FILTER (* ((volatile uint32_t *) (0x4003a000 + 0x78)))
  #define FTM3_FILTER (* ((volatile uint32_t *) (0x400b9000 + 0x78)))

  // Field CH0FVAL: Channel 0 Input Filter
    inline uint32_t FTM_FILTER_CH0FVAL (const uint32_t inValue) {return (inValue & 0xfU) << 0 ; }

  // Field CH1FVAL: Channel 1 Input Filter
    inline uint32_t FTM_FILTER_CH1FVAL (const uint32_t inValue) {return (inValue & 0xfU) << 4 ; }

  // Field CH2FVAL: Channel 2 Input Filter
    inline uint32_t FTM_FILTER_CH2FVAL (const uint32_t inValue) {return (inValue & 0xfU) << 8 ; }

  // Field CH3FVAL: Channel 3 Input Filter
    inline uint32_t FTM_FILTER_CH3FVAL (const uint32_t inValue) {return (inValue & 0xfU) << 12 ; }

//---  Register FLTCTRL: Fault Control
  #define FTM_FLTCTRL(group) (* ((volatile uint32_t *) (kBaseAddress_FLTCTRL [group] + 0x7c)))
  #define FTM0_FLTCTRL (* ((volatile uint32_t *) (0x40038000 + 0x7c)))
  #define FTM1_FLTCTRL (* ((volatile uint32_t *) (0x40039000 + 0x7c)))
  #define FTM2_FLTCTRL (* ((volatile uint32_t *) (0x4003a000 + 0x7c)))
  #define FTM3_FLTCTRL (* ((volatile uint32_t *) (0x400b9000 + 0x7c)))

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

//---  Register QDCTRL: Quadrature Decoder Control And Status
  #define FTM_QDCTRL(group) (* ((volatile uint32_t *) (kBaseAddress_QDCTRL [group] + 0x80)))
  #define FTM0_QDCTRL (* ((volatile uint32_t *) (0x40038000 + 0x80)))
  #define FTM1_QDCTRL (* ((volatile uint32_t *) (0x40039000 + 0x80)))
  #define FTM2_QDCTRL (* ((volatile uint32_t *) (0x4003a000 + 0x80)))
  #define FTM3_QDCTRL (* ((volatile uint32_t *) (0x400b9000 + 0x80)))

  // Field QUADEN: Quadrature Decoder Mode Enable
    const uint32_t FTM_QDCTRL_QUADEN = 1U << 0 ;

  // Field TOFDIR: Timer Overflow Direction In Quadrature Decoder Mode
    const uint32_t FTM_QDCTRL_TOFDIR = 1U << 1 ;

  // Field QUADIR: FTM Counter Direction In Quadrature Decoder Mode
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

//---  Register CONF: Configuration
  #define FTM_CONF(group) (* ((volatile uint32_t *) (kBaseAddress_CONF [group] + 0x84)))
  #define FTM0_CONF (* ((volatile uint32_t *) (0x40038000 + 0x84)))
  #define FTM1_CONF (* ((volatile uint32_t *) (0x40039000 + 0x84)))
  #define FTM2_CONF (* ((volatile uint32_t *) (0x4003a000 + 0x84)))
  #define FTM3_CONF (* ((volatile uint32_t *) (0x400b9000 + 0x84)))

  // Field NUMTOF: TOF Frequency
    inline uint32_t FTM_CONF_NUMTOF (const uint32_t inValue) {return (inValue & 0x1fU) << 0 ; }

  // Field BDMMODE: BDM Mode
    inline uint32_t FTM_CONF_BDMMODE (const uint32_t inValue) {return (inValue & 0x3U) << 6 ; }

  // Field GTBEEN: Global Time Base Enable
    const uint32_t FTM_CONF_GTBEEN = 1U << 9 ;

  // Field GTBEOUT: Global Time Base Output
    const uint32_t FTM_CONF_GTBEOUT = 1U << 10 ;

//---  Register FLTPOL: FTM Fault Input Polarity
  #define FTM_FLTPOL(group) (* ((volatile uint32_t *) (kBaseAddress_FLTPOL [group] + 0x88)))
  #define FTM0_FLTPOL (* ((volatile uint32_t *) (0x40038000 + 0x88)))
  #define FTM1_FLTPOL (* ((volatile uint32_t *) (0x40039000 + 0x88)))
  #define FTM2_FLTPOL (* ((volatile uint32_t *) (0x4003a000 + 0x88)))
  #define FTM3_FLTPOL (* ((volatile uint32_t *) (0x400b9000 + 0x88)))

  // Field FLT0POL: Fault Input 0 Polarity
    const uint32_t FTM_FLTPOL_FLT0POL = 1U << 0 ;

  // Field FLT1POL: Fault Input 1 Polarity
    const uint32_t FTM_FLTPOL_FLT1POL = 1U << 1 ;

  // Field FLT2POL: Fault Input 2 Polarity
    const uint32_t FTM_FLTPOL_FLT2POL = 1U << 2 ;

  // Field FLT3POL: Fault Input 3 Polarity
    const uint32_t FTM_FLTPOL_FLT3POL = 1U << 3 ;

//---  Register SYNCONF: Synchronization Configuration
  #define FTM_SYNCONF(group) (* ((volatile uint32_t *) (kBaseAddress_SYNCONF [group] + 0x8c)))
  #define FTM0_SYNCONF (* ((volatile uint32_t *) (0x40038000 + 0x8c)))
  #define FTM1_SYNCONF (* ((volatile uint32_t *) (0x40039000 + 0x8c)))
  #define FTM2_SYNCONF (* ((volatile uint32_t *) (0x4003a000 + 0x8c)))
  #define FTM3_SYNCONF (* ((volatile uint32_t *) (0x400b9000 + 0x8c)))

  // Field HWTRIGMODE: Hardware Trigger Mode
    const uint32_t FTM_SYNCONF_HWTRIGMODE = 1U << 0 ;

  // Field CNTINC: CNTIN Register Synchronization
    const uint32_t FTM_SYNCONF_CNTINC = 1U << 2 ;

  // Field INVC: INVCTRL Register Synchronization
    const uint32_t FTM_SYNCONF_INVC = 1U << 4 ;

  // Field SWOC: SWOCTRL Register Synchronization
    const uint32_t FTM_SYNCONF_SWOC = 1U << 5 ;

  // Field SYNCMODE: Synchronization Mode
    const uint32_t FTM_SYNCONF_SYNCMODE = 1U << 7 ;

  // Field SWRSTCNT: FTM counter synchronization is activated by the software trigger.
    const uint32_t FTM_SYNCONF_SWRSTCNT = 1U << 8 ;

  // Field SWWRBUF: MOD, CNTIN, and CV registers synchronization is activated by the software trigger.
    const uint32_t FTM_SYNCONF_SWWRBUF = 1U << 9 ;

  // Field SWOM: Output mask synchronization is activated by the software trigger.
    const uint32_t FTM_SYNCONF_SWOM = 1U << 10 ;

  // Field SWINVC: Inverting control synchronization is activated by the software trigger.
    const uint32_t FTM_SYNCONF_SWINVC = 1U << 11 ;

  // Field SWSOC: Software output control synchronization is activated by the software trigger.
    const uint32_t FTM_SYNCONF_SWSOC = 1U << 12 ;

  // Field HWRSTCNT: FTM counter synchronization is activated by a hardware trigger.
    const uint32_t FTM_SYNCONF_HWRSTCNT = 1U << 16 ;

  // Field HWWRBUF: MOD, CNTIN, and CV registers synchronization is activated by a hardware trigger.
    const uint32_t FTM_SYNCONF_HWWRBUF = 1U << 17 ;

  // Field HWOM: Output mask synchronization is activated by a hardware trigger.
    const uint32_t FTM_SYNCONF_HWOM = 1U << 18 ;

  // Field HWINVC: Inverting control synchronization is activated by a hardware trigger.
    const uint32_t FTM_SYNCONF_HWINVC = 1U << 19 ;

  // Field HWSOC: Software output control synchronization is activated by a hardware trigger.
    const uint32_t FTM_SYNCONF_HWSOC = 1U << 20 ;

//---  Register INVCTRL: FTM Inverting Control
  #define FTM_INVCTRL(group) (* ((volatile uint32_t *) (kBaseAddress_INVCTRL [group] + 0x90)))
  #define FTM0_INVCTRL (* ((volatile uint32_t *) (0x40038000 + 0x90)))
  #define FTM1_INVCTRL (* ((volatile uint32_t *) (0x40039000 + 0x90)))
  #define FTM2_INVCTRL (* ((volatile uint32_t *) (0x4003a000 + 0x90)))
  #define FTM3_INVCTRL (* ((volatile uint32_t *) (0x400b9000 + 0x90)))

  // Field INV0EN: Pair Channels 0 Inverting Enable
    const uint32_t FTM_INVCTRL_INV0EN = 1U << 0 ;

  // Field INV1EN: Pair Channels 1 Inverting Enable
    const uint32_t FTM_INVCTRL_INV1EN = 1U << 1 ;

  // Field INV2EN: Pair Channels 2 Inverting Enable
    const uint32_t FTM_INVCTRL_INV2EN = 1U << 2 ;

  // Field INV3EN: Pair Channels 3 Inverting Enable
    const uint32_t FTM_INVCTRL_INV3EN = 1U << 3 ;

//---  Register SWOCTRL: FTM Software Output Control
  #define FTM_SWOCTRL(group) (* ((volatile uint32_t *) (kBaseAddress_SWOCTRL [group] + 0x94)))
  #define FTM0_SWOCTRL (* ((volatile uint32_t *) (0x40038000 + 0x94)))
  #define FTM1_SWOCTRL (* ((volatile uint32_t *) (0x40039000 + 0x94)))
  #define FTM2_SWOCTRL (* ((volatile uint32_t *) (0x4003a000 + 0x94)))
  #define FTM3_SWOCTRL (* ((volatile uint32_t *) (0x400b9000 + 0x94)))

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

//---  Register PWMLOAD: FTM PWM Load
  #define FTM_PWMLOAD(group) (* ((volatile uint32_t *) (kBaseAddress_PWMLOAD [group] + 0x98)))
  #define FTM0_PWMLOAD (* ((volatile uint32_t *) (0x40038000 + 0x98)))
  #define FTM1_PWMLOAD (* ((volatile uint32_t *) (0x40039000 + 0x98)))
  #define FTM2_PWMLOAD (* ((volatile uint32_t *) (0x4003a000 + 0x98)))
  #define FTM3_PWMLOAD (* ((volatile uint32_t *) (0x400b9000 + 0x98)))

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

  // Field LDOK: Load Enable
    const uint32_t FTM_PWMLOAD_LDOK = 1U << 9 ;

//------------------------------------------------------------------------------
// PERIPHERAL GROUP: GPIO
//        GPIOA at 0x400ff000
//        GPIOB at 0x400ff040
//        GPIOC at 0x400ff080
//        GPIOD at 0x400ff0c0
//        GPIOE at 0x400ff100
//------------------------------------------------------------------------------

static const uint32_t kBaseAddress_GPIO [5] = {0x400ff000, 0x400ff040, 0x400ff080, 0x400ff0c0, 0x400ff100} ;

//------------------------------------------------------------------------------

//---  Register PDOR: Port Data Output Register
  #define GPIO_PDOR(group) (* ((volatile uint32_t *) (kBaseAddress_PDOR [group] + 0x0)))
  #define GPIOA_PDOR (* ((volatile uint32_t *) (0x400ff000 + 0x0)))
  #define GPIOB_PDOR (* ((volatile uint32_t *) (0x400ff040 + 0x0)))
  #define GPIOC_PDOR (* ((volatile uint32_t *) (0x400ff080 + 0x0)))
  #define GPIOD_PDOR (* ((volatile uint32_t *) (0x400ff0c0 + 0x0)))
  #define GPIOE_PDOR (* ((volatile uint32_t *) (0x400ff100 + 0x0)))

  // Field PDO: Port Data Output
    inline uint32_t GPIO_PDOR_PDO (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register PSOR: Port Set Output Register
  #define GPIO_PSOR(group) (* ((volatile uint32_t *) (kBaseAddress_PSOR [group] + 0x4)))
  #define GPIOA_PSOR (* ((volatile uint32_t *) (0x400ff000 + 0x4)))
  #define GPIOB_PSOR (* ((volatile uint32_t *) (0x400ff040 + 0x4)))
  #define GPIOC_PSOR (* ((volatile uint32_t *) (0x400ff080 + 0x4)))
  #define GPIOD_PSOR (* ((volatile uint32_t *) (0x400ff0c0 + 0x4)))
  #define GPIOE_PSOR (* ((volatile uint32_t *) (0x400ff100 + 0x4)))

  // Field PTSO: Port Set Output
    inline uint32_t GPIO_PSOR_PTSO (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register PCOR: Port Clear Output Register
  #define GPIO_PCOR(group) (* ((volatile uint32_t *) (kBaseAddress_PCOR [group] + 0x8)))
  #define GPIOA_PCOR (* ((volatile uint32_t *) (0x400ff000 + 0x8)))
  #define GPIOB_PCOR (* ((volatile uint32_t *) (0x400ff040 + 0x8)))
  #define GPIOC_PCOR (* ((volatile uint32_t *) (0x400ff080 + 0x8)))
  #define GPIOD_PCOR (* ((volatile uint32_t *) (0x400ff0c0 + 0x8)))
  #define GPIOE_PCOR (* ((volatile uint32_t *) (0x400ff100 + 0x8)))

  // Field PTCO: Port Clear Output
    inline uint32_t GPIO_PCOR_PTCO (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register PTOR: Port Toggle Output Register
  #define GPIO_PTOR(group) (* ((volatile uint32_t *) (kBaseAddress_PTOR [group] + 0xc)))
  #define GPIOA_PTOR (* ((volatile uint32_t *) (0x400ff000 + 0xc)))
  #define GPIOB_PTOR (* ((volatile uint32_t *) (0x400ff040 + 0xc)))
  #define GPIOC_PTOR (* ((volatile uint32_t *) (0x400ff080 + 0xc)))
  #define GPIOD_PTOR (* ((volatile uint32_t *) (0x400ff0c0 + 0xc)))
  #define GPIOE_PTOR (* ((volatile uint32_t *) (0x400ff100 + 0xc)))

  // Field PTTO: Port Toggle Output
    inline uint32_t GPIO_PTOR_PTTO (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register PDIR: Port Data Input Register
  #define GPIO_PDIR(group) (* ((volatile uint32_t *) (kBaseAddress_PDIR [group] + 0x10)))
  #define GPIOA_PDIR (* ((const volatile uint32_t *) (0x400ff000 + 0x10)))
  #define GPIOB_PDIR (* ((const volatile uint32_t *) (0x400ff040 + 0x10)))
  #define GPIOC_PDIR (* ((const volatile uint32_t *) (0x400ff080 + 0x10)))
  #define GPIOD_PDIR (* ((const volatile uint32_t *) (0x400ff0c0 + 0x10)))
  #define GPIOE_PDIR (* ((const volatile uint32_t *) (0x400ff100 + 0x10)))

  // Field PDI: Port Data Input
    inline uint32_t GPIO_PDIR_PDI (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register PDDR: Port Data Direction Register
  #define GPIO_PDDR(group) (* ((volatile uint32_t *) (kBaseAddress_PDDR [group] + 0x14)))
  #define GPIOA_PDDR (* ((volatile uint32_t *) (0x400ff000 + 0x14)))
  #define GPIOB_PDDR (* ((volatile uint32_t *) (0x400ff040 + 0x14)))
  #define GPIOC_PDDR (* ((volatile uint32_t *) (0x400ff080 + 0x14)))
  #define GPIOD_PDDR (* ((volatile uint32_t *) (0x400ff0c0 + 0x14)))
  #define GPIOE_PDDR (* ((volatile uint32_t *) (0x400ff100 + 0x14)))

  // Field PDD: Port Data Direction
    inline uint32_t GPIO_PDDR_PDD (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//------------------------------------------------------------------------------
// PERIPHERAL GROUP: I2C
//        I2C0 at 0x40066000
//        I2C1 at 0x40067000
//        I2C2 at 0x400e6000
//------------------------------------------------------------------------------

static const uint32_t kBaseAddress_I2C [3] = {0x40066000, 0x40067000, 0x400e6000} ;

//------------------------------------------------------------------------------

//---  Register A1: I2C Address Register 1
  #define I2C_A1(group) (* ((volatile uint8_t *) (kBaseAddress_A1 [group] + 0x0)))
  #define I2C0_A1 (* ((volatile uint8_t *) (0x40066000 + 0x0)))
  #define I2C1_A1 (* ((volatile uint8_t *) (0x40067000 + 0x0)))
  #define I2C2_A1 (* ((volatile uint8_t *) (0x400e6000 + 0x0)))

  // Field AD: Address
    inline uint8_t I2C_A1_AD (const uint8_t inValue) {return (inValue & 0x7fU) << 1 ; }

//---  Register F: I2C Frequency Divider register
  #define I2C_F(group) (* ((volatile uint8_t *) (kBaseAddress_F [group] + 0x1)))
  #define I2C0_F (* ((volatile uint8_t *) (0x40066000 + 0x1)))
  #define I2C1_F (* ((volatile uint8_t *) (0x40067000 + 0x1)))
  #define I2C2_F (* ((volatile uint8_t *) (0x400e6000 + 0x1)))

  // Field ICR: ClockRate
    inline uint8_t I2C_F_ICR (const uint8_t inValue) {return (inValue & 0x3fU) << 0 ; }

  // Field MULT: Multiplier Factor
    inline uint8_t I2C_F_MULT (const uint8_t inValue) {return (inValue & 0x3U) << 6 ; }

//---  Register C1: I2C Control Register 1
  #define I2C_C1(group) (* ((volatile uint8_t *) (kBaseAddress_C1 [group] + 0x2)))
  #define I2C0_C1 (* ((volatile uint8_t *) (0x40066000 + 0x2)))
  #define I2C1_C1 (* ((volatile uint8_t *) (0x40067000 + 0x2)))
  #define I2C2_C1 (* ((volatile uint8_t *) (0x400e6000 + 0x2)))

  // Field DMAEN: DMA Enable
    const uint8_t I2C_C1_DMAEN = 1U << 0 ;

  // Field WUEN: Wakeup Enable
    const uint8_t I2C_C1_WUEN = 1U << 1 ;

  // Field RSTA: Repeat START
    const uint8_t I2C_C1_RSTA = 1U << 2 ;

  // Field TXAK: Transmit Acknowledge Enable
    const uint8_t I2C_C1_TXAK = 1U << 3 ;

  // Field TX: Transmit Mode Select
    const uint8_t I2C_C1_TX = 1U << 4 ;

  // Field MST: Master Mode Select
    const uint8_t I2C_C1_MST = 1U << 5 ;

  // Field IICIE: I2C Interrupt Enable
    const uint8_t I2C_C1_IICIE = 1U << 6 ;

  // Field IICEN: I2C Enable
    const uint8_t I2C_C1_IICEN = 1U << 7 ;

//---  Register S: I2C Status register
  #define I2C_S(group) (* ((volatile uint8_t *) (kBaseAddress_S [group] + 0x3)))
  #define I2C0_S (* ((volatile uint8_t *) (0x40066000 + 0x3)))
  #define I2C1_S (* ((volatile uint8_t *) (0x40067000 + 0x3)))
  #define I2C2_S (* ((volatile uint8_t *) (0x400e6000 + 0x3)))

  // Field RXAK: Receive Acknowledge
    const uint8_t I2C_S_RXAK = 1U << 0 ;

  // Field IICIF: Interrupt Flag
    const uint8_t I2C_S_IICIF = 1U << 1 ;

  // Field SRW: Slave Read/Write
    const uint8_t I2C_S_SRW = 1U << 2 ;

  // Field RAM: Range Address Match
    const uint8_t I2C_S_RAM = 1U << 3 ;

  // Field ARBL: Arbitration Lost
    const uint8_t I2C_S_ARBL = 1U << 4 ;

  // Field BUSY: Bus Busy
    const uint8_t I2C_S_BUSY = 1U << 5 ;

  // Field IAAS: Addressed As A Slave
    const uint8_t I2C_S_IAAS = 1U << 6 ;

  // Field TCF: Transfer Complete Flag
    const uint8_t I2C_S_TCF = 1U << 7 ;

//---  Register D: I2C Data I/O register
  #define I2C_D(group) (* ((volatile uint8_t *) (kBaseAddress_D [group] + 0x4)))
  #define I2C0_D (* ((volatile uint8_t *) (0x40066000 + 0x4)))
  #define I2C1_D (* ((volatile uint8_t *) (0x40067000 + 0x4)))
  #define I2C2_D (* ((volatile uint8_t *) (0x400e6000 + 0x4)))

  // Field DATA: Data
    inline uint8_t I2C_D_DATA (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register C2: I2C Control Register 2
  #define I2C_C2(group) (* ((volatile uint8_t *) (kBaseAddress_C2 [group] + 0x5)))
  #define I2C0_C2 (* ((volatile uint8_t *) (0x40066000 + 0x5)))
  #define I2C1_C2 (* ((volatile uint8_t *) (0x40067000 + 0x5)))
  #define I2C2_C2 (* ((volatile uint8_t *) (0x400e6000 + 0x5)))

  // Field AD: Slave Address
    inline uint8_t I2C_C2_AD (const uint8_t inValue) {return (inValue & 0x7U) << 0 ; }

  // Field RMEN: Range Address Matching Enable
    const uint8_t I2C_C2_RMEN = 1U << 3 ;

  // Field SBRC: Slave Baud Rate Control
    const uint8_t I2C_C2_SBRC = 1U << 4 ;

  // Field HDRS: High Drive Select
    const uint8_t I2C_C2_HDRS = 1U << 5 ;

  // Field ADEXT: Address Extension
    const uint8_t I2C_C2_ADEXT = 1U << 6 ;

  // Field GCAEN: General Call Address Enable
    const uint8_t I2C_C2_GCAEN = 1U << 7 ;

//---  Register FLT: I2C Programmable Input Glitch Filter register
  #define I2C_FLT(group) (* ((volatile uint8_t *) (kBaseAddress_FLT [group] + 0x6)))
  #define I2C0_FLT (* ((volatile uint8_t *) (0x40066000 + 0x6)))
  #define I2C1_FLT (* ((volatile uint8_t *) (0x40067000 + 0x6)))
  #define I2C2_FLT (* ((volatile uint8_t *) (0x400e6000 + 0x6)))

  // Field FLT: I2C Programmable Filter Factor
    inline uint8_t I2C_FLT_FLT (const uint8_t inValue) {return (inValue & 0xfU) << 0 ; }

  // Field STARTF: I2C Bus Start Detect Flag
    const uint8_t I2C_FLT_STARTF = 1U << 4 ;

  // Field SSIE: I2C Bus Stop or Start Interrupt Enable
    const uint8_t I2C_FLT_SSIE = 1U << 5 ;

  // Field STOPF: I2C Bus Stop Detect Flag
    const uint8_t I2C_FLT_STOPF = 1U << 6 ;

  // Field SHEN: Stop Hold Enable
    const uint8_t I2C_FLT_SHEN = 1U << 7 ;

//---  Register RA: I2C Range Address register
  #define I2C_RA(group) (* ((volatile uint8_t *) (kBaseAddress_RA [group] + 0x7)))
  #define I2C0_RA (* ((volatile uint8_t *) (0x40066000 + 0x7)))
  #define I2C1_RA (* ((volatile uint8_t *) (0x40067000 + 0x7)))
  #define I2C2_RA (* ((volatile uint8_t *) (0x400e6000 + 0x7)))

  // Field RAD: Range Slave Address
    inline uint8_t I2C_RA_RAD (const uint8_t inValue) {return (inValue & 0x7fU) << 1 ; }

//---  Register SMB: I2C SMBus Control and Status register
  #define I2C_SMB(group) (* ((volatile uint8_t *) (kBaseAddress_SMB [group] + 0x8)))
  #define I2C0_SMB (* ((volatile uint8_t *) (0x40066000 + 0x8)))
  #define I2C1_SMB (* ((volatile uint8_t *) (0x40067000 + 0x8)))
  #define I2C2_SMB (* ((volatile uint8_t *) (0x400e6000 + 0x8)))

  // Field SHTF2IE: SHTF2 Interrupt Enable
    const uint8_t I2C_SMB_SHTF2IE = 1U << 0 ;

  // Field SHTF2: SCL High Timeout Flag 2
    const uint8_t I2C_SMB_SHTF2 = 1U << 1 ;

  // Field SHTF1: SCL High Timeout Flag 1
    const uint8_t I2C_SMB_SHTF1 = 1U << 2 ;

  // Field SLTF: SCL Low Timeout Flag
    const uint8_t I2C_SMB_SLTF = 1U << 3 ;

  // Field TCKSEL: Timeout Counter Clock Select
    const uint8_t I2C_SMB_TCKSEL = 1U << 4 ;

  // Field SIICAEN: Second I2C Address Enable
    const uint8_t I2C_SMB_SIICAEN = 1U << 5 ;

  // Field ALERTEN: SMBus Alert Response Address Enable
    const uint8_t I2C_SMB_ALERTEN = 1U << 6 ;

  // Field FACK: Fast NACK/ACK Enable
    const uint8_t I2C_SMB_FACK = 1U << 7 ;

//---  Register A2: I2C Address Register 2
  #define I2C_A2(group) (* ((volatile uint8_t *) (kBaseAddress_A2 [group] + 0x9)))
  #define I2C0_A2 (* ((volatile uint8_t *) (0x40066000 + 0x9)))
  #define I2C1_A2 (* ((volatile uint8_t *) (0x40067000 + 0x9)))
  #define I2C2_A2 (* ((volatile uint8_t *) (0x400e6000 + 0x9)))

  // Field SAD: SMBus Address
    inline uint8_t I2C_A2_SAD (const uint8_t inValue) {return (inValue & 0x7fU) << 1 ; }

//---  Register SLTH: I2C SCL Low Timeout Register High
  #define I2C_SLTH(group) (* ((volatile uint8_t *) (kBaseAddress_SLTH [group] + 0xa)))
  #define I2C0_SLTH (* ((volatile uint8_t *) (0x40066000 + 0xa)))
  #define I2C1_SLTH (* ((volatile uint8_t *) (0x40067000 + 0xa)))
  #define I2C2_SLTH (* ((volatile uint8_t *) (0x400e6000 + 0xa)))

  // Field SSLT: Most significant byte of SCL low timeout value that determines the timeout period of SCL low.
    inline uint8_t I2C_SLTH_SSLT (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register SLTL: I2C SCL Low Timeout Register Low
  #define I2C_SLTL(group) (* ((volatile uint8_t *) (kBaseAddress_SLTL [group] + 0xb)))
  #define I2C0_SLTL (* ((volatile uint8_t *) (0x40066000 + 0xb)))
  #define I2C1_SLTL (* ((volatile uint8_t *) (0x40067000 + 0xb)))
  #define I2C2_SLTL (* ((volatile uint8_t *) (0x400e6000 + 0xb)))

  // Field SSLT: Least significant byte of SCL low timeout value that determines the timeout period of SCL low.
    inline uint8_t I2C_SLTL_SSLT (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//------------------------------------------------------------------------------
// Peripheral I2S0: Inter-IC Sound / Synchronous Audio Interface
//------------------------------------------------------------------------------

//---  Register TCSR: SAI Transmit Control Register
  #define I2S0_TCSR (* ((volatile uint32_t *) (0x4002f000 + 0)))

  // Field FRDE: FIFO Request DMA Enable
    const uint32_t I2S0_TCSR_FRDE = 1U << 0 ;

  // Field FWDE: FIFO Warning DMA Enable
    const uint32_t I2S0_TCSR_FWDE = 1U << 1 ;

  // Field FRIE: FIFO Request Interrupt Enable
    const uint32_t I2S0_TCSR_FRIE = 1U << 8 ;

  // Field FWIE: FIFO Warning Interrupt Enable
    const uint32_t I2S0_TCSR_FWIE = 1U << 9 ;

  // Field FEIE: FIFO Error Interrupt Enable
    const uint32_t I2S0_TCSR_FEIE = 1U << 10 ;

  // Field SEIE: Sync Error Interrupt Enable
    const uint32_t I2S0_TCSR_SEIE = 1U << 11 ;

  // Field WSIE: Word Start Interrupt Enable
    const uint32_t I2S0_TCSR_WSIE = 1U << 12 ;

  // Field FRF: FIFO Request Flag
    const uint32_t I2S0_TCSR_FRF = 1U << 16 ;

  // Field FWF: FIFO Warning Flag
    const uint32_t I2S0_TCSR_FWF = 1U << 17 ;

  // Field FEF: FIFO Error Flag
    const uint32_t I2S0_TCSR_FEF = 1U << 18 ;

  // Field SEF: Sync Error Flag
    const uint32_t I2S0_TCSR_SEF = 1U << 19 ;

  // Field WSF: Word Start Flag
    const uint32_t I2S0_TCSR_WSF = 1U << 20 ;

  // Field SR: Software Reset
    const uint32_t I2S0_TCSR_SR = 1U << 24 ;

  // Field FR: FIFO Reset
    const uint32_t I2S0_TCSR_FR = 1U << 25 ;

  // Field BCE: Bit Clock Enable
    const uint32_t I2S0_TCSR_BCE = 1U << 28 ;

  // Field DBGE: Debug Enable
    const uint32_t I2S0_TCSR_DBGE = 1U << 29 ;

  // Field STOPE: Stop Enable
    const uint32_t I2S0_TCSR_STOPE = 1U << 30 ;

  // Field TE: Transmitter Enable
    const uint32_t I2S0_TCSR_TE = 1U << 31 ;

//---  Register TCR1: SAI Transmit Configuration 1 Register
  #define I2S0_TCR1 (* ((volatile uint32_t *) (0x4002f000 + 4)))

  // Field TFW: Transmit FIFO Watermark
    inline uint32_t I2S0_TCR1_TFW (const uint32_t inValue) {return (inValue & 0x7U) << 0 ; }

//---  Register TCR2: SAI Transmit Configuration 2 Register
  #define I2S0_TCR2 (* ((volatile uint32_t *) (0x4002f000 + 8)))

  // Field DIV: Bit Clock Divide
    inline uint32_t I2S0_TCR2_DIV (const uint32_t inValue) {return (inValue & 0xffU) << 0 ; }

  // Field BCD: Bit Clock Direction
    const uint32_t I2S0_TCR2_BCD = 1U << 24 ;

  // Field BCP: Bit Clock Polarity
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

  // Field WDFL: Word Flag Configuration
    inline uint32_t I2S0_TCR3_WDFL (const uint32_t inValue) {return (inValue & 0x1fU) << 0 ; }

  // Field TCE: Transmit Channel Enable
    inline uint32_t I2S0_TCR3_TCE (const uint32_t inValue) {return (inValue & 0x3U) << 16 ; }

//---  Register TCR4: SAI Transmit Configuration 4 Register
  #define I2S0_TCR4 (* ((volatile uint32_t *) (0x4002f000 + 16)))

  // Field FSD: Frame Sync Direction
    const uint32_t I2S0_TCR4_FSD = 1U << 0 ;

  // Field FSP: Frame Sync Polarity
    const uint32_t I2S0_TCR4_FSP = 1U << 1 ;

  // Field FSE: Frame Sync Early
    const uint32_t I2S0_TCR4_FSE = 1U << 3 ;

  // Field MF: MSB First
    const uint32_t I2S0_TCR4_MF = 1U << 4 ;

  // Field SYWD: Sync Width
    inline uint32_t I2S0_TCR4_SYWD (const uint32_t inValue) {return (inValue & 0x1fU) << 8 ; }

  // Field FRSZ: Frame size
    inline uint32_t I2S0_TCR4_FRSZ (const uint32_t inValue) {return (inValue & 0x1fU) << 16 ; }

//---  Register TCR5: SAI Transmit Configuration 5 Register
  #define I2S0_TCR5 (* ((volatile uint32_t *) (0x4002f000 + 20)))

  // Field FBT: First Bit Shifted
    inline uint32_t I2S0_TCR5_FBT (const uint32_t inValue) {return (inValue & 0x1fU) << 8 ; }

  // Field W0W: Word 0 Width
    inline uint32_t I2S0_TCR5_W0W (const uint32_t inValue) {return (inValue & 0x1fU) << 16 ; }

  // Field WNW: Word N Width
    inline uint32_t I2S0_TCR5_WNW (const uint32_t inValue) {return (inValue & 0x1fU) << 24 ; }

//---  Registers TDR(0,1): SAI Transmit Data Register
  #define I2S0_TDR(idx) (* ((volatile uint32_t *) (0x4002f000 + 0x20 + (idx) * 0x4)))
  #define I2S0_TDR0 (* ((volatile uint32_t *) (0x4002f000 + 0x20 + 0 * 0x4)))
  #define I2S0_TDR1 (* ((volatile uint32_t *) (0x4002f000 + 0x20 + 1 * 0x4)))

  // Field TDR: Transmit Data Register
    inline uint32_t I2S0_TDR_TDR (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Registers TFR(0,1): SAI Transmit FIFO Register
  #define I2S0_TFR(idx) (* ((volatile uint32_t *) (0x4002f000 + 0x40 + (idx) * 0x4)))
  #define I2S0_TFR0 (* ((const volatile uint32_t *) (0x4002f000 + 0x40 + 0 * 0x4)))
  #define I2S0_TFR1 (* ((const volatile uint32_t *) (0x4002f000 + 0x40 + 1 * 0x4)))

  // Field RFP: Read FIFO Pointer
    inline uint32_t I2S0_TFR_RFP (const uint32_t inValue) {return (inValue & 0xfU) << 0 ; }

  // Field WFP: Write FIFO Pointer
    inline uint32_t I2S0_TFR_WFP (const uint32_t inValue) {return (inValue & 0xfU) << 16 ; }

//---  Register TMR: SAI Transmit Mask Register
  #define I2S0_TMR (* ((volatile uint32_t *) (0x4002f000 + 96)))

  // Field TWM: Transmit Word Mask
    inline uint32_t I2S0_TMR_TWM (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register RCSR: SAI Receive Control Register
  #define I2S0_RCSR (* ((volatile uint32_t *) (0x4002f000 + 128)))

  // Field FRDE: FIFO Request DMA Enable
    const uint32_t I2S0_RCSR_FRDE = 1U << 0 ;

  // Field FWDE: FIFO Warning DMA Enable
    const uint32_t I2S0_RCSR_FWDE = 1U << 1 ;

  // Field FRIE: FIFO Request Interrupt Enable
    const uint32_t I2S0_RCSR_FRIE = 1U << 8 ;

  // Field FWIE: FIFO Warning Interrupt Enable
    const uint32_t I2S0_RCSR_FWIE = 1U << 9 ;

  // Field FEIE: FIFO Error Interrupt Enable
    const uint32_t I2S0_RCSR_FEIE = 1U << 10 ;

  // Field SEIE: Sync Error Interrupt Enable
    const uint32_t I2S0_RCSR_SEIE = 1U << 11 ;

  // Field WSIE: Word Start Interrupt Enable
    const uint32_t I2S0_RCSR_WSIE = 1U << 12 ;

  // Field FRF: FIFO Request Flag
    const uint32_t I2S0_RCSR_FRF = 1U << 16 ;

  // Field FWF: FIFO Warning Flag
    const uint32_t I2S0_RCSR_FWF = 1U << 17 ;

  // Field FEF: FIFO Error Flag
    const uint32_t I2S0_RCSR_FEF = 1U << 18 ;

  // Field SEF: Sync Error Flag
    const uint32_t I2S0_RCSR_SEF = 1U << 19 ;

  // Field WSF: Word Start Flag
    const uint32_t I2S0_RCSR_WSF = 1U << 20 ;

  // Field SR: Software Reset
    const uint32_t I2S0_RCSR_SR = 1U << 24 ;

  // Field FR: FIFO Reset
    const uint32_t I2S0_RCSR_FR = 1U << 25 ;

  // Field BCE: Bit Clock Enable
    const uint32_t I2S0_RCSR_BCE = 1U << 28 ;

  // Field DBGE: Debug Enable
    const uint32_t I2S0_RCSR_DBGE = 1U << 29 ;

  // Field STOPE: Stop Enable
    const uint32_t I2S0_RCSR_STOPE = 1U << 30 ;

  // Field RE: Receiver Enable
    const uint32_t I2S0_RCSR_RE = 1U << 31 ;

//---  Register RCR1: SAI Receive Configuration 1 Register
  #define I2S0_RCR1 (* ((volatile uint32_t *) (0x4002f000 + 132)))

  // Field RFW: Receive FIFO Watermark
    inline uint32_t I2S0_RCR1_RFW (const uint32_t inValue) {return (inValue & 0x7U) << 0 ; }

//---  Register RCR2: SAI Receive Configuration 2 Register
  #define I2S0_RCR2 (* ((volatile uint32_t *) (0x4002f000 + 136)))

  // Field DIV: Bit Clock Divide
    inline uint32_t I2S0_RCR2_DIV (const uint32_t inValue) {return (inValue & 0xffU) << 0 ; }

  // Field BCD: Bit Clock Direction
    const uint32_t I2S0_RCR2_BCD = 1U << 24 ;

  // Field BCP: Bit Clock Polarity
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

  // Field WDFL: Word Flag Configuration
    inline uint32_t I2S0_RCR3_WDFL (const uint32_t inValue) {return (inValue & 0x1fU) << 0 ; }

  // Field RCE: Receive Channel Enable
    inline uint32_t I2S0_RCR3_RCE (const uint32_t inValue) {return (inValue & 0x3U) << 16 ; }

//---  Register RCR4: SAI Receive Configuration 4 Register
  #define I2S0_RCR4 (* ((volatile uint32_t *) (0x4002f000 + 144)))

  // Field FSD: Frame Sync Direction
    const uint32_t I2S0_RCR4_FSD = 1U << 0 ;

  // Field FSP: Frame Sync Polarity
    const uint32_t I2S0_RCR4_FSP = 1U << 1 ;

  // Field FSE: Frame Sync Early
    const uint32_t I2S0_RCR4_FSE = 1U << 3 ;

  // Field MF: MSB First
    const uint32_t I2S0_RCR4_MF = 1U << 4 ;

  // Field SYWD: Sync Width
    inline uint32_t I2S0_RCR4_SYWD (const uint32_t inValue) {return (inValue & 0x1fU) << 8 ; }

  // Field FRSZ: Frame Size
    inline uint32_t I2S0_RCR4_FRSZ (const uint32_t inValue) {return (inValue & 0x1fU) << 16 ; }

//---  Register RCR5: SAI Receive Configuration 5 Register
  #define I2S0_RCR5 (* ((volatile uint32_t *) (0x4002f000 + 148)))

  // Field FBT: First Bit Shifted
    inline uint32_t I2S0_RCR5_FBT (const uint32_t inValue) {return (inValue & 0x1fU) << 8 ; }

  // Field W0W: Word 0 Width
    inline uint32_t I2S0_RCR5_W0W (const uint32_t inValue) {return (inValue & 0x1fU) << 16 ; }

  // Field WNW: Word N Width
    inline uint32_t I2S0_RCR5_WNW (const uint32_t inValue) {return (inValue & 0x1fU) << 24 ; }

//---  Registers RDR(0,1): SAI Receive Data Register
  #define I2S0_RDR(idx) (* ((volatile uint32_t *) (0x4002f000 + 0xa0 + (idx) * 0x4)))
  #define I2S0_RDR0 (* ((const volatile uint32_t *) (0x4002f000 + 0xa0 + 0 * 0x4)))
  #define I2S0_RDR1 (* ((const volatile uint32_t *) (0x4002f000 + 0xa0 + 1 * 0x4)))

  // Field RDR: Receive Data Register
    inline uint32_t I2S0_RDR_RDR (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Registers RFR(0,1): SAI Receive FIFO Register
  #define I2S0_RFR(idx) (* ((volatile uint32_t *) (0x4002f000 + 0xc0 + (idx) * 0x4)))
  #define I2S0_RFR0 (* ((const volatile uint32_t *) (0x4002f000 + 0xc0 + 0 * 0x4)))
  #define I2S0_RFR1 (* ((const volatile uint32_t *) (0x4002f000 + 0xc0 + 1 * 0x4)))

  // Field RFP: Read FIFO Pointer
    inline uint32_t I2S0_RFR_RFP (const uint32_t inValue) {return (inValue & 0xfU) << 0 ; }

  // Field WFP: Write FIFO Pointer
    inline uint32_t I2S0_RFR_WFP (const uint32_t inValue) {return (inValue & 0xfU) << 16 ; }

//---  Register RMR: SAI Receive Mask Register
  #define I2S0_RMR (* ((volatile uint32_t *) (0x4002f000 + 224)))

  // Field RWM: Receive Word Mask
    inline uint32_t I2S0_RMR_RWM (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register MCR: SAI MCLK Control Register
  #define I2S0_MCR (* ((volatile uint32_t *) (0x4002f000 + 256)))

  // Field MICS: MCLK Input Clock Select
    inline uint32_t I2S0_MCR_MICS (const uint32_t inValue) {return (inValue & 0x3U) << 24 ; }

  // Field MOE: MCLK Output Enable
    const uint32_t I2S0_MCR_MOE = 1U << 30 ;

  // Field DUF: Divider Update Flag
    const uint32_t I2S0_MCR_DUF = 1U << 31 ;

//---  Register MDR: SAI MCLK Divide Register
  #define I2S0_MDR (* ((volatile uint32_t *) (0x4002f000 + 260)))

  // Field DIVIDE: MCLK Divide
    inline uint32_t I2S0_MDR_DIVIDE (const uint32_t inValue) {return (inValue & 0xfffU) << 0 ; }

  // Field FRACT: MCLK Fraction
    inline uint32_t I2S0_MDR_FRACT (const uint32_t inValue) {return (inValue & 0xffU) << 12 ; }

//------------------------------------------------------------------------------
// Peripheral LLWU: Low leakage wakeup unit
//------------------------------------------------------------------------------

//---  Register PE1: LLWU Pin Enable 1 register
  #define LLWU_PE1 (* ((volatile uint8_t *) (0x4007c000 + 0)))

  // Field WUPE0: Wakeup Pin Enable For LLWU_P0
    inline uint8_t LLWU_PE1_WUPE0 (const uint8_t inValue) {return (inValue & 0x3U) << 0 ; }

  // Field WUPE1: Wakeup Pin Enable For LLWU_P1
    inline uint8_t LLWU_PE1_WUPE1 (const uint8_t inValue) {return (inValue & 0x3U) << 2 ; }

  // Field WUPE2: Wakeup Pin Enable For LLWU_P2
    inline uint8_t LLWU_PE1_WUPE2 (const uint8_t inValue) {return (inValue & 0x3U) << 4 ; }

  // Field WUPE3: Wakeup Pin Enable For LLWU_P3
    inline uint8_t LLWU_PE1_WUPE3 (const uint8_t inValue) {return (inValue & 0x3U) << 6 ; }

//---  Register PE2: LLWU Pin Enable 2 register
  #define LLWU_PE2 (* ((volatile uint8_t *) (0x4007c000 + 1)))

  // Field WUPE4: Wakeup Pin Enable For LLWU_P4
    inline uint8_t LLWU_PE2_WUPE4 (const uint8_t inValue) {return (inValue & 0x3U) << 0 ; }

  // Field WUPE5: Wakeup Pin Enable For LLWU_P5
    inline uint8_t LLWU_PE2_WUPE5 (const uint8_t inValue) {return (inValue & 0x3U) << 2 ; }

  // Field WUPE6: Wakeup Pin Enable For LLWU_P6
    inline uint8_t LLWU_PE2_WUPE6 (const uint8_t inValue) {return (inValue & 0x3U) << 4 ; }

  // Field WUPE7: Wakeup Pin Enable For LLWU_P7
    inline uint8_t LLWU_PE2_WUPE7 (const uint8_t inValue) {return (inValue & 0x3U) << 6 ; }

//---  Register PE3: LLWU Pin Enable 3 register
  #define LLWU_PE3 (* ((volatile uint8_t *) (0x4007c000 + 2)))

  // Field WUPE8: Wakeup Pin Enable For LLWU_P8
    inline uint8_t LLWU_PE3_WUPE8 (const uint8_t inValue) {return (inValue & 0x3U) << 0 ; }

  // Field WUPE9: Wakeup Pin Enable For LLWU_P9
    inline uint8_t LLWU_PE3_WUPE9 (const uint8_t inValue) {return (inValue & 0x3U) << 2 ; }

  // Field WUPE10: Wakeup Pin Enable For LLWU_P10
    inline uint8_t LLWU_PE3_WUPE10 (const uint8_t inValue) {return (inValue & 0x3U) << 4 ; }

  // Field WUPE11: Wakeup Pin Enable For LLWU_P11
    inline uint8_t LLWU_PE3_WUPE11 (const uint8_t inValue) {return (inValue & 0x3U) << 6 ; }

//---  Register PE4: LLWU Pin Enable 4 register
  #define LLWU_PE4 (* ((volatile uint8_t *) (0x4007c000 + 3)))

  // Field WUPE12: Wakeup Pin Enable For LLWU_P12
    inline uint8_t LLWU_PE4_WUPE12 (const uint8_t inValue) {return (inValue & 0x3U) << 0 ; }

  // Field WUPE13: Wakeup Pin Enable For LLWU_P13
    inline uint8_t LLWU_PE4_WUPE13 (const uint8_t inValue) {return (inValue & 0x3U) << 2 ; }

  // Field WUPE14: Wakeup Pin Enable For LLWU_P14
    inline uint8_t LLWU_PE4_WUPE14 (const uint8_t inValue) {return (inValue & 0x3U) << 4 ; }

  // Field WUPE15: Wakeup Pin Enable For LLWU_P15
    inline uint8_t LLWU_PE4_WUPE15 (const uint8_t inValue) {return (inValue & 0x3U) << 6 ; }

//---  Register ME: LLWU Module Enable register
  #define LLWU_ME (* ((volatile uint8_t *) (0x4007c000 + 4)))

  // Field WUME0: Wakeup Module Enable For Module 0
    const uint8_t LLWU_ME_WUME0 = 1U << 0 ;

  // Field WUME1: Wakeup Module Enable for Module 1
    const uint8_t LLWU_ME_WUME1 = 1U << 1 ;

  // Field WUME2: Wakeup Module Enable For Module 2
    const uint8_t LLWU_ME_WUME2 = 1U << 2 ;

  // Field WUME3: Wakeup Module Enable For Module 3
    const uint8_t LLWU_ME_WUME3 = 1U << 3 ;

  // Field WUME4: Wakeup Module Enable For Module 4
    const uint8_t LLWU_ME_WUME4 = 1U << 4 ;

  // Field WUME5: Wakeup Module Enable For Module 5
    const uint8_t LLWU_ME_WUME5 = 1U << 5 ;

  // Field WUME6: Wakeup Module Enable For Module 6
    const uint8_t LLWU_ME_WUME6 = 1U << 6 ;

  // Field WUME7: Wakeup Module Enable For Module 7
    const uint8_t LLWU_ME_WUME7 = 1U << 7 ;

//---  Register F1: LLWU Flag 1 register
  #define LLWU_F1 (* ((volatile uint8_t *) (0x4007c000 + 5)))

  // Field WUF0: Wakeup Flag For LLWU_P0
    const uint8_t LLWU_F1_WUF0 = 1U << 0 ;

  // Field WUF1: Wakeup Flag For LLWU_P1
    const uint8_t LLWU_F1_WUF1 = 1U << 1 ;

  // Field WUF2: Wakeup Flag For LLWU_P2
    const uint8_t LLWU_F1_WUF2 = 1U << 2 ;

  // Field WUF3: Wakeup Flag For LLWU_P3
    const uint8_t LLWU_F1_WUF3 = 1U << 3 ;

  // Field WUF4: Wakeup Flag For LLWU_P4
    const uint8_t LLWU_F1_WUF4 = 1U << 4 ;

  // Field WUF5: Wakeup Flag For LLWU_P5
    const uint8_t LLWU_F1_WUF5 = 1U << 5 ;

  // Field WUF6: Wakeup Flag For LLWU_P6
    const uint8_t LLWU_F1_WUF6 = 1U << 6 ;

  // Field WUF7: Wakeup Flag For LLWU_P7
    const uint8_t LLWU_F1_WUF7 = 1U << 7 ;

//---  Register F2: LLWU Flag 2 register
  #define LLWU_F2 (* ((volatile uint8_t *) (0x4007c000 + 6)))

  // Field WUF8: Wakeup Flag For LLWU_P8
    const uint8_t LLWU_F2_WUF8 = 1U << 0 ;

  // Field WUF9: Wakeup Flag For LLWU_P9
    const uint8_t LLWU_F2_WUF9 = 1U << 1 ;

  // Field WUF10: Wakeup Flag For LLWU_P10
    const uint8_t LLWU_F2_WUF10 = 1U << 2 ;

  // Field WUF11: Wakeup Flag For LLWU_P11
    const uint8_t LLWU_F2_WUF11 = 1U << 3 ;

  // Field WUF12: Wakeup Flag For LLWU_P12
    const uint8_t LLWU_F2_WUF12 = 1U << 4 ;

  // Field WUF13: Wakeup Flag For LLWU_P13
    const uint8_t LLWU_F2_WUF13 = 1U << 5 ;

  // Field WUF14: Wakeup Flag For LLWU_P14
    const uint8_t LLWU_F2_WUF14 = 1U << 6 ;

  // Field WUF15: Wakeup Flag For LLWU_P15
    const uint8_t LLWU_F2_WUF15 = 1U << 7 ;

//---  Register F3: LLWU Flag 3 register
  #define LLWU_F3 (* ((const volatile uint8_t *) (0x4007c000 + 7)))

  // Field MWUF0: Wakeup flag For module 0
    const uint8_t LLWU_F3_MWUF0 = 1U << 0 ;

  // Field MWUF1: Wakeup flag For module 1
    const uint8_t LLWU_F3_MWUF1 = 1U << 1 ;

  // Field MWUF2: Wakeup flag For module 2
    const uint8_t LLWU_F3_MWUF2 = 1U << 2 ;

  // Field MWUF3: Wakeup flag For module 3
    const uint8_t LLWU_F3_MWUF3 = 1U << 3 ;

  // Field MWUF4: Wakeup flag For module 4
    const uint8_t LLWU_F3_MWUF4 = 1U << 4 ;

  // Field MWUF5: Wakeup flag For module 5
    const uint8_t LLWU_F3_MWUF5 = 1U << 5 ;

  // Field MWUF6: Wakeup flag For module 6
    const uint8_t LLWU_F3_MWUF6 = 1U << 6 ;

  // Field MWUF7: Wakeup flag For module 7
    const uint8_t LLWU_F3_MWUF7 = 1U << 7 ;

//---  Register FILT1: LLWU Pin Filter 1 register
  #define LLWU_FILT1 (* ((volatile uint8_t *) (0x4007c000 + 8)))

  // Field FILTSEL: Filter Pin Select
    inline uint8_t LLWU_FILT1_FILTSEL (const uint8_t inValue) {return (inValue & 0xfU) << 0 ; }

  // Field FILTE: Digital Filter On External Pin
    inline uint8_t LLWU_FILT1_FILTE (const uint8_t inValue) {return (inValue & 0x3U) << 5 ; }

  // Field FILTF: Filter Detect Flag
    const uint8_t LLWU_FILT1_FILTF = 1U << 7 ;

//---  Register FILT2: LLWU Pin Filter 2 register
  #define LLWU_FILT2 (* ((volatile uint8_t *) (0x4007c000 + 9)))

  // Field FILTSEL: Filter Pin Select
    inline uint8_t LLWU_FILT2_FILTSEL (const uint8_t inValue) {return (inValue & 0xfU) << 0 ; }

  // Field FILTE: Digital Filter On External Pin
    inline uint8_t LLWU_FILT2_FILTE (const uint8_t inValue) {return (inValue & 0x3U) << 5 ; }

  // Field FILTF: Filter Detect Flag
    const uint8_t LLWU_FILT2_FILTF = 1U << 7 ;

//---  Register RST: LLWU Reset Enable register
  #define LLWU_RST (* ((volatile uint8_t *) (0x4007c000 + 10)))

  // Field RSTFILT: Digital Filter On RESET Pin
    const uint8_t LLWU_RST_RSTFILT = 1U << 0 ;

  // Field LLRSTE: Low-Leakage Mode RESET Enable
    const uint8_t LLWU_RST_LLRSTE = 1U << 1 ;

//------------------------------------------------------------------------------
// Peripheral LPTMR0: Low Power Timer
//------------------------------------------------------------------------------

//---  Register CSR: Low Power Timer Control Status Register
  #define LPTMR0_CSR (* ((volatile uint32_t *) (0x40040000 + 0)))

  // Field TEN: Timer Enable
    const uint32_t LPTMR0_CSR_TEN = 1U << 0 ;

  // Field TMS: Timer Mode Select
    const uint32_t LPTMR0_CSR_TMS = 1U << 1 ;

  // Field TFC: Timer Free-Running Counter
    const uint32_t LPTMR0_CSR_TFC = 1U << 2 ;

  // Field TPP: Timer Pin Polarity
    const uint32_t LPTMR0_CSR_TPP = 1U << 3 ;

  // Field TPS: Timer Pin Select
    inline uint32_t LPTMR0_CSR_TPS (const uint32_t inValue) {return (inValue & 0x3U) << 4 ; }

  // Field TIE: Timer Interrupt Enable
    const uint32_t LPTMR0_CSR_TIE = 1U << 6 ;

  // Field TCF: Timer Compare Flag
    const uint32_t LPTMR0_CSR_TCF = 1U << 7 ;

//---  Register PSR: Low Power Timer Prescale Register
  #define LPTMR0_PSR (* ((volatile uint32_t *) (0x40040000 + 4)))

  // Field PCS: Prescaler Clock Select
    inline uint32_t LPTMR0_PSR_PCS (const uint32_t inValue) {return (inValue & 0x3U) << 0 ; }

  // Field PBYP: Prescaler Bypass
    const uint32_t LPTMR0_PSR_PBYP = 1U << 2 ;

  // Field PRESCALE: Prescale Value
    inline uint32_t LPTMR0_PSR_PRESCALE (const uint32_t inValue) {return (inValue & 0xfU) << 3 ; }

//---  Register CMR: Low Power Timer Compare Register
  #define LPTMR0_CMR (* ((volatile uint32_t *) (0x40040000 + 8)))

  // Field COMPARE: Compare Value
    inline uint32_t LPTMR0_CMR_COMPARE (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register CNR: Low Power Timer Counter Register
  #define LPTMR0_CNR (* ((volatile uint32_t *) (0x40040000 + 12)))

  // Field COUNTER: Counter Value
    inline uint32_t LPTMR0_CNR_COUNTER (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

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

  // Field EREFS: External Reference Select
    const uint8_t MCG_C2_EREFS = 1U << 2 ;

  // Field HGO: High Gain Oscillator Select
    const uint8_t MCG_C2_HGO = 1U << 3 ;

  // Field RANGE: Frequency Range Select
    inline uint8_t MCG_C2_RANGE (const uint8_t inValue) {return (inValue & 0x3U) << 4 ; }

  // Field FCFTRIM: Fast Internal Reference Clock Fine Trim
    const uint8_t MCG_C2_FCFTRIM = 1U << 6 ;

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

  // Field ATMF: Automatic Trim Machine Fail Flag
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
    inline uint8_t MCG_C7_OSCSEL (const uint8_t inValue) {return (inValue & 0x3U) << 0 ; }

//---  Register C8: MCG Control 8 Register
  #define MCG_C8 (* ((volatile uint8_t *) (0x40064000 + 13)))

  // Field LOCS1: RTC Loss of Clock Status
    const uint8_t MCG_C8_LOCS1 = 1U << 0 ;

  // Field CME1: Clock Monitor Enable1
    const uint8_t MCG_C8_CME1 = 1U << 5 ;

  // Field LOLRE: PLL Loss of Lock Reset Enable
    const uint8_t MCG_C8_LOLRE = 1U << 6 ;

  // Field LOCRE1: Loss of Clock Reset Enable
    const uint8_t MCG_C8_LOCRE1 = 1U << 7 ;

//------------------------------------------------------------------------------
// Peripheral MCM: Core Platform Miscellaneous Control Module
//------------------------------------------------------------------------------

//---  Register PLASC: Crossbar Switch (AXBS) Slave Configuration
  #define MCM_PLASC (* ((const volatile uint16_t *) (0xe0080000 + 8)))

  // Field ASC: Each bit in the ASC field indicates whether there is a corresponding connection to the crossbar switch's slave input port.
    inline uint16_t MCM_PLASC_ASC (const uint16_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register PLAMC: Crossbar Switch (AXBS) Master Configuration
  #define MCM_PLAMC (* ((const volatile uint16_t *) (0xe0080000 + 10)))

  // Field AMC: Each bit in the AMC field indicates whether there is a corresponding connection to the AXBS master input port.
    inline uint16_t MCM_PLAMC_AMC (const uint16_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register CR: Control Register
  #define MCM_CR (* ((volatile uint32_t *) (0xe0080000 + 12)))

  // Field SRAMUAP: SRAM_U arbitration priority
    inline uint32_t MCM_CR_SRAMUAP (const uint32_t inValue) {return (inValue & 0x3U) << 24 ; }

  // Field SRAMUWP: SRAM_U write protect
    const uint32_t MCM_CR_SRAMUWP = 1U << 26 ;

  // Field SRAMLAP: SRAM_L arbitration priority
    inline uint32_t MCM_CR_SRAMLAP (const uint32_t inValue) {return (inValue & 0x3U) << 28 ; }

  // Field SRAMLWP: SRAM_L Write Protect
    const uint32_t MCM_CR_SRAMLWP = 1U << 30 ;

//---  Register ISCR: Interrupt Status Register
  #define MCM_ISCR (* ((volatile uint32_t *) (0xe0080000 + 16)))

  // Field IRQ: Normal Interrupt Pending
    const uint32_t MCM_ISCR_IRQ = 1U << 1 ;

  // Field NMI: Non-maskable Interrupt Pending
    const uint32_t MCM_ISCR_NMI = 1U << 2 ;

  // Field DHREQ: Debug Halt Request Indicator
    const uint32_t MCM_ISCR_DHREQ = 1U << 3 ;

  // Field FIOC: FPU invalid operation interrupt status
    const uint32_t MCM_ISCR_FIOC = 1U << 8 ;

  // Field FDZC: FPU divide-by-zero interrupt status
    const uint32_t MCM_ISCR_FDZC = 1U << 9 ;

  // Field FOFC: FPU overflow interrupt status
    const uint32_t MCM_ISCR_FOFC = 1U << 10 ;

  // Field FUFC: FPU underflow interrupt status
    const uint32_t MCM_ISCR_FUFC = 1U << 11 ;

  // Field FIXC: FPU inexact interrupt status
    const uint32_t MCM_ISCR_FIXC = 1U << 12 ;

  // Field FIDC: FPU input denormal interrupt status
    const uint32_t MCM_ISCR_FIDC = 1U << 15 ;

  // Field FIOCE: FPU invalid operation interrupt enable
    const uint32_t MCM_ISCR_FIOCE = 1U << 24 ;

  // Field FDZCE: FPU divide-by-zero interrupt enable
    const uint32_t MCM_ISCR_FDZCE = 1U << 25 ;

  // Field FOFCE: FPU overflow interrupt enable
    const uint32_t MCM_ISCR_FOFCE = 1U << 26 ;

  // Field FUFCE: FPU underflow interrupt enable
    const uint32_t MCM_ISCR_FUFCE = 1U << 27 ;

  // Field FIXCE: FPU inexact interrupt enable
    const uint32_t MCM_ISCR_FIXCE = 1U << 28 ;

  // Field FIDCE: FPU input denormal interrupt enable
    const uint32_t MCM_ISCR_FIDCE = 1U << 31 ;

//---  Register ETBCC: ETB Counter Control register
  #define MCM_ETBCC (* ((volatile uint32_t *) (0xe0080000 + 20)))

  // Field CNTEN: Counter Enable
    const uint32_t MCM_ETBCC_CNTEN = 1U << 0 ;

  // Field RSPT: Response Type
    inline uint32_t MCM_ETBCC_RSPT (const uint32_t inValue) {return (inValue & 0x3U) << 1 ; }

  // Field RLRQ: Reload Request
    const uint32_t MCM_ETBCC_RLRQ = 1U << 3 ;

  // Field ETDIS: ETM-To-TPIU Disable
    const uint32_t MCM_ETBCC_ETDIS = 1U << 4 ;

  // Field ITDIS: ITM-To-TPIU Disable
    const uint32_t MCM_ETBCC_ITDIS = 1U << 5 ;

//---  Register ETBRL: ETB Reload register
  #define MCM_ETBRL (* ((volatile uint32_t *) (0xe0080000 + 24)))

  // Field RELOAD: Byte Count Reload Value
    inline uint32_t MCM_ETBRL_RELOAD (const uint32_t inValue) {return (inValue & 0x7ffU) << 0 ; }

//---  Register ETBCNT: ETB Counter Value register
  #define MCM_ETBCNT (* ((const volatile uint32_t *) (0xe0080000 + 28)))

  // Field COUNTER: Byte Count Counter Value
    inline uint32_t MCM_ETBCNT_COUNTER (const uint32_t inValue) {return (inValue & 0x7ffU) << 0 ; }

//---  Register PID: Process ID register
  #define MCM_PID (* ((volatile uint32_t *) (0xe0080000 + 48)))

  // Field PID: M0_PID And M1_PID For MPU
    inline uint32_t MCM_PID_PID (const uint32_t inValue) {return (inValue & 0xffU) << 0 ; }

//------------------------------------------------------------------------------
// Peripheral MPU: Memory protection unit
//------------------------------------------------------------------------------

//---  Register CESR: Control/Error Status Register
  #define MPU_CESR (* ((volatile uint32_t *) (0x4000d000 + 0)))

  // Field VLD: Valid
    const uint32_t MPU_CESR_VLD = 1U << 0 ;

  // Field NRGD: Number Of Region Descriptors
    inline uint32_t MPU_CESR_NRGD (const uint32_t inValue) {return (inValue & 0xfU) << 8 ; }

  // Field NSP: Number Of Slave Ports
    inline uint32_t MPU_CESR_NSP (const uint32_t inValue) {return (inValue & 0xfU) << 12 ; }

  // Field HRL: Hardware Revision Level
    inline uint32_t MPU_CESR_HRL (const uint32_t inValue) {return (inValue & 0xfU) << 16 ; }

  // Field SPERR: Slave Port n Error
    inline uint32_t MPU_CESR_SPERR (const uint32_t inValue) {return (inValue & 0x1fU) << 27 ; }

//---  Registers EAR(0,1,2,3,4): Error Address Register, slave port n
  #define MPU_EAR(idx) (* ((volatile uint32_t *) (0x4000d000 + 0x10 + (idx) * 0x8)))
  #define MPU_EAR0 (* ((const volatile uint32_t *) (0x4000d000 + 0x10 + 0 * 0x8)))
  #define MPU_EAR1 (* ((const volatile uint32_t *) (0x4000d000 + 0x10 + 1 * 0x8)))
  #define MPU_EAR2 (* ((const volatile uint32_t *) (0x4000d000 + 0x10 + 2 * 0x8)))
  #define MPU_EAR3 (* ((const volatile uint32_t *) (0x4000d000 + 0x10 + 3 * 0x8)))
  #define MPU_EAR4 (* ((const volatile uint32_t *) (0x4000d000 + 0x10 + 4 * 0x8)))

  // Field EADDR: Error Address
    inline uint32_t MPU_EAR_EADDR (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Registers EDR(0,1,2,3,4): Error Detail Register, slave port n
  #define MPU_EDR(idx) (* ((volatile uint32_t *) (0x4000d000 + 0x14 + (idx) * 0x8)))
  #define MPU_EDR0 (* ((const volatile uint32_t *) (0x4000d000 + 0x14 + 0 * 0x8)))
  #define MPU_EDR1 (* ((const volatile uint32_t *) (0x4000d000 + 0x14 + 1 * 0x8)))
  #define MPU_EDR2 (* ((const volatile uint32_t *) (0x4000d000 + 0x14 + 2 * 0x8)))
  #define MPU_EDR3 (* ((const volatile uint32_t *) (0x4000d000 + 0x14 + 3 * 0x8)))
  #define MPU_EDR4 (* ((const volatile uint32_t *) (0x4000d000 + 0x14 + 4 * 0x8)))

  // Field ERW: Error Read/Write
    const uint32_t MPU_EDR_ERW = 1U << 0 ;

  // Field EATTR: Error Attributes
    inline uint32_t MPU_EDR_EATTR (const uint32_t inValue) {return (inValue & 0x7U) << 1 ; }

  // Field EMN: Error Master Number
    inline uint32_t MPU_EDR_EMN (const uint32_t inValue) {return (inValue & 0xfU) << 4 ; }

  // Field EPID: Error Process Identification
    inline uint32_t MPU_EDR_EPID (const uint32_t inValue) {return (inValue & 0xffU) << 8 ; }

  // Field EACD: Error Access Control Detail
    inline uint32_t MPU_EDR_EACD (const uint32_t inValue) {return (inValue & 0xffffU) << 16 ; }

//---  Registers RGD_WORD0(0,1,2,3,4,5,6,7,8,9,10,11): Region Descriptor n, Word 0
  #define MPU_RGD_WORD0(idx) (* ((volatile uint32_t *) (0x4000d000 + 0x400 + (idx) * 0x10)))
  #define MPU_RGD0_WORD0 (* ((volatile uint32_t *) (0x4000d000 + 0x400 + 0 * 0x10)))
  #define MPU_RGD1_WORD0 (* ((volatile uint32_t *) (0x4000d000 + 0x400 + 1 * 0x10)))
  #define MPU_RGD2_WORD0 (* ((volatile uint32_t *) (0x4000d000 + 0x400 + 2 * 0x10)))
  #define MPU_RGD3_WORD0 (* ((volatile uint32_t *) (0x4000d000 + 0x400 + 3 * 0x10)))
  #define MPU_RGD4_WORD0 (* ((volatile uint32_t *) (0x4000d000 + 0x400 + 4 * 0x10)))
  #define MPU_RGD5_WORD0 (* ((volatile uint32_t *) (0x4000d000 + 0x400 + 5 * 0x10)))
  #define MPU_RGD6_WORD0 (* ((volatile uint32_t *) (0x4000d000 + 0x400 + 6 * 0x10)))
  #define MPU_RGD7_WORD0 (* ((volatile uint32_t *) (0x4000d000 + 0x400 + 7 * 0x10)))
  #define MPU_RGD8_WORD0 (* ((volatile uint32_t *) (0x4000d000 + 0x400 + 8 * 0x10)))
  #define MPU_RGD9_WORD0 (* ((volatile uint32_t *) (0x4000d000 + 0x400 + 9 * 0x10)))
  #define MPU_RGD10_WORD0 (* ((volatile uint32_t *) (0x4000d000 + 0x400 + 10 * 0x10)))
  #define MPU_RGD11_WORD0 (* ((volatile uint32_t *) (0x4000d000 + 0x400 + 11 * 0x10)))

  // Field SRTADDR: Start Address
    inline uint32_t MPU_RGD_WORD0_SRTADDR (const uint32_t inValue) {return (inValue & 0x7ffffffU) << 5 ; }

//---  Registers RGD_WORD1(0,1,2,3,4,5,6,7,8,9,10,11): Region Descriptor n, Word 1
  #define MPU_RGD_WORD1(idx) (* ((volatile uint32_t *) (0x4000d000 + 0x404 + (idx) * 0x10)))
  #define MPU_RGD0_WORD1 (* ((volatile uint32_t *) (0x4000d000 + 0x404 + 0 * 0x10)))
  #define MPU_RGD1_WORD1 (* ((volatile uint32_t *) (0x4000d000 + 0x404 + 1 * 0x10)))
  #define MPU_RGD2_WORD1 (* ((volatile uint32_t *) (0x4000d000 + 0x404 + 2 * 0x10)))
  #define MPU_RGD3_WORD1 (* ((volatile uint32_t *) (0x4000d000 + 0x404 + 3 * 0x10)))
  #define MPU_RGD4_WORD1 (* ((volatile uint32_t *) (0x4000d000 + 0x404 + 4 * 0x10)))
  #define MPU_RGD5_WORD1 (* ((volatile uint32_t *) (0x4000d000 + 0x404 + 5 * 0x10)))
  #define MPU_RGD6_WORD1 (* ((volatile uint32_t *) (0x4000d000 + 0x404 + 6 * 0x10)))
  #define MPU_RGD7_WORD1 (* ((volatile uint32_t *) (0x4000d000 + 0x404 + 7 * 0x10)))
  #define MPU_RGD8_WORD1 (* ((volatile uint32_t *) (0x4000d000 + 0x404 + 8 * 0x10)))
  #define MPU_RGD9_WORD1 (* ((volatile uint32_t *) (0x4000d000 + 0x404 + 9 * 0x10)))
  #define MPU_RGD10_WORD1 (* ((volatile uint32_t *) (0x4000d000 + 0x404 + 10 * 0x10)))
  #define MPU_RGD11_WORD1 (* ((volatile uint32_t *) (0x4000d000 + 0x404 + 11 * 0x10)))

  // Field ENDADDR: End Address
    inline uint32_t MPU_RGD_WORD1_ENDADDR (const uint32_t inValue) {return (inValue & 0x7ffffffU) << 5 ; }

//---  Registers RGD_WORD2(0,1,2,3,4,5,6,7,8,9,10,11): Region Descriptor n, Word 2
  #define MPU_RGD_WORD2(idx) (* ((volatile uint32_t *) (0x4000d000 + 0x408 + (idx) * 0x10)))
  #define MPU_RGD0_WORD2 (* ((volatile uint32_t *) (0x4000d000 + 0x408 + 0 * 0x10)))
  #define MPU_RGD1_WORD2 (* ((volatile uint32_t *) (0x4000d000 + 0x408 + 1 * 0x10)))
  #define MPU_RGD2_WORD2 (* ((volatile uint32_t *) (0x4000d000 + 0x408 + 2 * 0x10)))
  #define MPU_RGD3_WORD2 (* ((volatile uint32_t *) (0x4000d000 + 0x408 + 3 * 0x10)))
  #define MPU_RGD4_WORD2 (* ((volatile uint32_t *) (0x4000d000 + 0x408 + 4 * 0x10)))
  #define MPU_RGD5_WORD2 (* ((volatile uint32_t *) (0x4000d000 + 0x408 + 5 * 0x10)))
  #define MPU_RGD6_WORD2 (* ((volatile uint32_t *) (0x4000d000 + 0x408 + 6 * 0x10)))
  #define MPU_RGD7_WORD2 (* ((volatile uint32_t *) (0x4000d000 + 0x408 + 7 * 0x10)))
  #define MPU_RGD8_WORD2 (* ((volatile uint32_t *) (0x4000d000 + 0x408 + 8 * 0x10)))
  #define MPU_RGD9_WORD2 (* ((volatile uint32_t *) (0x4000d000 + 0x408 + 9 * 0x10)))
  #define MPU_RGD10_WORD2 (* ((volatile uint32_t *) (0x4000d000 + 0x408 + 10 * 0x10)))
  #define MPU_RGD11_WORD2 (* ((volatile uint32_t *) (0x4000d000 + 0x408 + 11 * 0x10)))

  // Field M0UM: Bus Master 0 User Mode Access Control
    inline uint32_t MPU_RGD_WORD2_M0UM (const uint32_t inValue) {return (inValue & 0x7U) << 0 ; }

  // Field M0SM: Bus Master 0 Supervisor Mode Access Control
    inline uint32_t MPU_RGD_WORD2_M0SM (const uint32_t inValue) {return (inValue & 0x3U) << 3 ; }

  // Field M0PE: Bus Master 0 Process Identifier enable
    const uint32_t MPU_RGD_WORD2_M0PE = 1U << 5 ;

  // Field M1UM: Bus Master 1 User Mode Access Control
    inline uint32_t MPU_RGD_WORD2_M1UM (const uint32_t inValue) {return (inValue & 0x7U) << 6 ; }

  // Field M1SM: Bus Master 1 Supervisor Mode Access Control
    inline uint32_t MPU_RGD_WORD2_M1SM (const uint32_t inValue) {return (inValue & 0x3U) << 9 ; }

  // Field M1PE: Bus Master 1 Process Identifier enable
    const uint32_t MPU_RGD_WORD2_M1PE = 1U << 11 ;

  // Field M2UM: Bus Master 2 User Mode Access control
    inline uint32_t MPU_RGD_WORD2_M2UM (const uint32_t inValue) {return (inValue & 0x7U) << 12 ; }

  // Field M2SM: Bus Master 2 Supervisor Mode Access Control
    inline uint32_t MPU_RGD_WORD2_M2SM (const uint32_t inValue) {return (inValue & 0x3U) << 15 ; }

  // Field M2PE: Bus Master 2 Process Identifier Enable
    const uint32_t MPU_RGD_WORD2_M2PE = 1U << 17 ;

  // Field M3UM: Bus Master 3 User Mode Access Control
    inline uint32_t MPU_RGD_WORD2_M3UM (const uint32_t inValue) {return (inValue & 0x7U) << 18 ; }

  // Field M3SM: Bus Master 3 Supervisor Mode Access Control
    inline uint32_t MPU_RGD_WORD2_M3SM (const uint32_t inValue) {return (inValue & 0x3U) << 21 ; }

  // Field M3PE: Bus Master 3 Process Identifier Enable
    const uint32_t MPU_RGD_WORD2_M3PE = 1U << 23 ;

  // Field M4WE: Bus Master 4 Write Enable
    const uint32_t MPU_RGD_WORD2_M4WE = 1U << 24 ;

  // Field M4RE: Bus Master 4 Read Enable
    const uint32_t MPU_RGD_WORD2_M4RE = 1U << 25 ;

  // Field M5WE: Bus Master 5 Write Enable
    const uint32_t MPU_RGD_WORD2_M5WE = 1U << 26 ;

  // Field M5RE: Bus Master 5 Read Enable
    const uint32_t MPU_RGD_WORD2_M5RE = 1U << 27 ;

  // Field M6WE: Bus Master 6 Write Enable
    const uint32_t MPU_RGD_WORD2_M6WE = 1U << 28 ;

  // Field M6RE: Bus Master 6 Read Enable
    const uint32_t MPU_RGD_WORD2_M6RE = 1U << 29 ;

  // Field M7WE: Bus Master 7 Write Enable
    const uint32_t MPU_RGD_WORD2_M7WE = 1U << 30 ;

  // Field M7RE: Bus Master 7 Read Enable
    const uint32_t MPU_RGD_WORD2_M7RE = 1U << 31 ;

//---  Registers RGD_WORD3(0,1,2,3,4,5,6,7,8,9,10,11): Region Descriptor n, Word 3
  #define MPU_RGD_WORD3(idx) (* ((volatile uint32_t *) (0x4000d000 + 0x40c + (idx) * 0x10)))
  #define MPU_RGD0_WORD3 (* ((volatile uint32_t *) (0x4000d000 + 0x40c + 0 * 0x10)))
  #define MPU_RGD1_WORD3 (* ((volatile uint32_t *) (0x4000d000 + 0x40c + 1 * 0x10)))
  #define MPU_RGD2_WORD3 (* ((volatile uint32_t *) (0x4000d000 + 0x40c + 2 * 0x10)))
  #define MPU_RGD3_WORD3 (* ((volatile uint32_t *) (0x4000d000 + 0x40c + 3 * 0x10)))
  #define MPU_RGD4_WORD3 (* ((volatile uint32_t *) (0x4000d000 + 0x40c + 4 * 0x10)))
  #define MPU_RGD5_WORD3 (* ((volatile uint32_t *) (0x4000d000 + 0x40c + 5 * 0x10)))
  #define MPU_RGD6_WORD3 (* ((volatile uint32_t *) (0x4000d000 + 0x40c + 6 * 0x10)))
  #define MPU_RGD7_WORD3 (* ((volatile uint32_t *) (0x4000d000 + 0x40c + 7 * 0x10)))
  #define MPU_RGD8_WORD3 (* ((volatile uint32_t *) (0x4000d000 + 0x40c + 8 * 0x10)))
  #define MPU_RGD9_WORD3 (* ((volatile uint32_t *) (0x4000d000 + 0x40c + 9 * 0x10)))
  #define MPU_RGD10_WORD3 (* ((volatile uint32_t *) (0x4000d000 + 0x40c + 10 * 0x10)))
  #define MPU_RGD11_WORD3 (* ((volatile uint32_t *) (0x4000d000 + 0x40c + 11 * 0x10)))

  // Field VLD: Valid
    const uint32_t MPU_RGD_WORD3_VLD = 1U << 0 ;

  // Field PIDMASK: Process Identifier Mask
    inline uint32_t MPU_RGD_WORD3_PIDMASK (const uint32_t inValue) {return (inValue & 0xffU) << 16 ; }

  // Field PID: Process Identifier
    inline uint32_t MPU_RGD_WORD3_PID (const uint32_t inValue) {return (inValue & 0xffU) << 24 ; }

//---  Registers RGDAAC(0,1,2,3,4,5,6,7,8,9,10,11): Region Descriptor Alternate Access Control n
  #define MPU_RGDAAC(idx) (* ((volatile uint32_t *) (0x4000d000 + 0x800 + (idx) * 0x4)))
  #define MPU_RGDAAC0 (* ((volatile uint32_t *) (0x4000d000 + 0x800 + 0 * 0x4)))
  #define MPU_RGDAAC1 (* ((volatile uint32_t *) (0x4000d000 + 0x800 + 1 * 0x4)))
  #define MPU_RGDAAC2 (* ((volatile uint32_t *) (0x4000d000 + 0x800 + 2 * 0x4)))
  #define MPU_RGDAAC3 (* ((volatile uint32_t *) (0x4000d000 + 0x800 + 3 * 0x4)))
  #define MPU_RGDAAC4 (* ((volatile uint32_t *) (0x4000d000 + 0x800 + 4 * 0x4)))
  #define MPU_RGDAAC5 (* ((volatile uint32_t *) (0x4000d000 + 0x800 + 5 * 0x4)))
  #define MPU_RGDAAC6 (* ((volatile uint32_t *) (0x4000d000 + 0x800 + 6 * 0x4)))
  #define MPU_RGDAAC7 (* ((volatile uint32_t *) (0x4000d000 + 0x800 + 7 * 0x4)))
  #define MPU_RGDAAC8 (* ((volatile uint32_t *) (0x4000d000 + 0x800 + 8 * 0x4)))
  #define MPU_RGDAAC9 (* ((volatile uint32_t *) (0x4000d000 + 0x800 + 9 * 0x4)))
  #define MPU_RGDAAC10 (* ((volatile uint32_t *) (0x4000d000 + 0x800 + 10 * 0x4)))
  #define MPU_RGDAAC11 (* ((volatile uint32_t *) (0x4000d000 + 0x800 + 11 * 0x4)))

  // Field M0UM: Bus Master 0 User Mode Access Control
    inline uint32_t MPU_RGDAAC_M0UM (const uint32_t inValue) {return (inValue & 0x7U) << 0 ; }

  // Field M0SM: Bus Master 0 Supervisor Mode Access Control
    inline uint32_t MPU_RGDAAC_M0SM (const uint32_t inValue) {return (inValue & 0x3U) << 3 ; }

  // Field M0PE: Bus Master 0 Process Identifier Enable
    const uint32_t MPU_RGDAAC_M0PE = 1U << 5 ;

  // Field M1UM: Bus Master 1 User Mode Access Control
    inline uint32_t MPU_RGDAAC_M1UM (const uint32_t inValue) {return (inValue & 0x7U) << 6 ; }

  // Field M1SM: Bus Master 1 Supervisor Mode Access Control
    inline uint32_t MPU_RGDAAC_M1SM (const uint32_t inValue) {return (inValue & 0x3U) << 9 ; }

  // Field M1PE: Bus Master 1 Process Identifier Enable
    const uint32_t MPU_RGDAAC_M1PE = 1U << 11 ;

  // Field M2UM: Bus Master 2 User Mode Access Control
    inline uint32_t MPU_RGDAAC_M2UM (const uint32_t inValue) {return (inValue & 0x7U) << 12 ; }

  // Field M2SM: Bus Master 2 Supervisor Mode Access Control
    inline uint32_t MPU_RGDAAC_M2SM (const uint32_t inValue) {return (inValue & 0x3U) << 15 ; }

  // Field M2PE: Bus Master 2 Process Identifier Enable
    const uint32_t MPU_RGDAAC_M2PE = 1U << 17 ;

  // Field M3UM: Bus Master 3 User Mode Access Control
    inline uint32_t MPU_RGDAAC_M3UM (const uint32_t inValue) {return (inValue & 0x7U) << 18 ; }

  // Field M3SM: Bus Master 3 Supervisor Mode Access Control
    inline uint32_t MPU_RGDAAC_M3SM (const uint32_t inValue) {return (inValue & 0x3U) << 21 ; }

  // Field M3PE: Bus Master 3 Process Identifier Enable
    const uint32_t MPU_RGDAAC_M3PE = 1U << 23 ;

  // Field M4WE: Bus Master 4 Write Enable
    const uint32_t MPU_RGDAAC_M4WE = 1U << 24 ;

  // Field M4RE: Bus Master 4 Read Enable
    const uint32_t MPU_RGDAAC_M4RE = 1U << 25 ;

  // Field M5WE: Bus Master 5 Write Enable
    const uint32_t MPU_RGDAAC_M5WE = 1U << 26 ;

  // Field M5RE: Bus Master 5 Read Enable
    const uint32_t MPU_RGDAAC_M5RE = 1U << 27 ;

  // Field M6WE: Bus Master 6 Write Enable
    const uint32_t MPU_RGDAAC_M6WE = 1U << 28 ;

  // Field M6RE: Bus Master 6 Read Enable
    const uint32_t MPU_RGDAAC_M6RE = 1U << 29 ;

  // Field M7WE: Bus Master 7 Write Enable
    const uint32_t MPU_RGDAAC_M7WE = 1U << 30 ;

  // Field M7RE: Bus Master 7 Read Enable
    const uint32_t MPU_RGDAAC_M7RE = 1U << 31 ;

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

  // Field EREFSTEN: External Reference Stop Enable
    const uint8_t OSC_CR_EREFSTEN = 1U << 5 ;

  // Field ERCLKEN: External Reference Enable
    const uint8_t OSC_CR_ERCLKEN = 1U << 7 ;

//------------------------------------------------------------------------------
// Peripheral PDB0: Programmable Delay Block
//------------------------------------------------------------------------------

//---  Register SC: Status and Control register
  #define PDB0_SC (* ((volatile uint32_t *) (0x40036000 + 0)))

  // Field LDOK: Load OK
    const uint32_t PDB0_SC_LDOK = 1U << 0 ;

  // Field CONT: Continuous Mode Enable
    const uint32_t PDB0_SC_CONT = 1U << 1 ;

  // Field MULT: Multiplication Factor Select for Prescaler
    inline uint32_t PDB0_SC_MULT (const uint32_t inValue) {return (inValue & 0x3U) << 2 ; }

  // Field PDBIE: PDB Interrupt Enable
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

//---  Register MOD: Modulus register
  #define PDB0_MOD (* ((volatile uint32_t *) (0x40036000 + 4)))

  // Field MOD: PDB Modulus
    inline uint32_t PDB0_MOD_MOD (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register CNT: Counter register
  #define PDB0_CNT (* ((const volatile uint32_t *) (0x40036000 + 8)))

  // Field CNT: PDB Counter
    inline uint32_t PDB0_CNT_CNT (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register IDLY: Interrupt Delay register
  #define PDB0_IDLY (* ((volatile uint32_t *) (0x40036000 + 12)))

  // Field IDLY: PDB Interrupt Delay
    inline uint32_t PDB0_IDLY_IDLY (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Registers CHC1(0,1): Channel n Control register 1
  #define PDB0_CHC1(idx) (* ((volatile uint32_t *) (0x40036000 + 0x10 + (idx) * 0x28)))
  #define PDB0_CH0C1 (* ((volatile uint32_t *) (0x40036000 + 0x10 + 0 * 0x28)))
  #define PDB0_CH1C1 (* ((volatile uint32_t *) (0x40036000 + 0x10 + 1 * 0x28)))

  // Field EN: PDB Channel Pre-Trigger Enable
    inline uint32_t PDB0_CHC1_EN (const uint32_t inValue) {return (inValue & 0xffU) << 0 ; }

  // Field TOS: PDB Channel Pre-Trigger Output Select
    inline uint32_t PDB0_CHC1_TOS (const uint32_t inValue) {return (inValue & 0xffU) << 8 ; }

  // Field BB: PDB Channel Pre-Trigger Back-to-Back Operation Enable
    inline uint32_t PDB0_CHC1_BB (const uint32_t inValue) {return (inValue & 0xffU) << 16 ; }

//---  Registers CHS(0,1): Channel n Status register
  #define PDB0_CHS(idx) (* ((volatile uint32_t *) (0x40036000 + 0x14 + (idx) * 0x28)))
  #define PDB0_CH0S (* ((volatile uint32_t *) (0x40036000 + 0x14 + 0 * 0x28)))
  #define PDB0_CH1S (* ((volatile uint32_t *) (0x40036000 + 0x14 + 1 * 0x28)))

  // Field ERR: PDB Channel Sequence Error Flags
    inline uint32_t PDB0_CHS_ERR (const uint32_t inValue) {return (inValue & 0xffU) << 0 ; }

  // Field CF: PDB Channel Flags
    inline uint32_t PDB0_CHS_CF (const uint32_t inValue) {return (inValue & 0xffU) << 16 ; }

//---  Registers CHDLY0(0,1): Channel n Delay 0 register
  #define PDB0_CHDLY0(idx) (* ((volatile uint32_t *) (0x40036000 + 0x18 + (idx) * 0x28)))
  #define PDB0_CH0DLY0 (* ((volatile uint32_t *) (0x40036000 + 0x18 + 0 * 0x28)))
  #define PDB0_CH1DLY0 (* ((volatile uint32_t *) (0x40036000 + 0x18 + 1 * 0x28)))

  // Field DLY: PDB Channel Delay
    inline uint32_t PDB0_CHDLY0_DLY (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Registers CHDLY1(0,1): Channel n Delay 1 register
  #define PDB0_CHDLY1(idx) (* ((volatile uint32_t *) (0x40036000 + 0x1c + (idx) * 0x28)))
  #define PDB0_CH0DLY1 (* ((volatile uint32_t *) (0x40036000 + 0x1c + 0 * 0x28)))
  #define PDB0_CH1DLY1 (* ((volatile uint32_t *) (0x40036000 + 0x1c + 1 * 0x28)))

  // Field DLY: PDB Channel Delay
    inline uint32_t PDB0_CHDLY1_DLY (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Registers DACINTC(0,1): DAC Interval Trigger n Control register
  #define PDB0_DACINTC(idx) (* ((volatile uint32_t *) (0x40036000 + 0x150 + (idx) * 0x8)))
  #define PDB0_DACINTC0 (* ((volatile uint32_t *) (0x40036000 + 0x150 + 0 * 0x8)))
  #define PDB0_DACINTC1 (* ((volatile uint32_t *) (0x40036000 + 0x150 + 1 * 0x8)))

  // Field TOE: DAC Interval Trigger Enable
    const uint32_t PDB0_DACINTC_TOE = 1U << 0 ;

  // Field EXT: DAC External Trigger Input Enable
    const uint32_t PDB0_DACINTC_EXT = 1U << 1 ;

//---  Registers DACINT(0,1): DAC Interval n register
  #define PDB0_DACINT(idx) (* ((volatile uint32_t *) (0x40036000 + 0x154 + (idx) * 0x8)))
  #define PDB0_DACINT0 (* ((volatile uint32_t *) (0x40036000 + 0x154 + 0 * 0x8)))
  #define PDB0_DACINT1 (* ((volatile uint32_t *) (0x40036000 + 0x154 + 1 * 0x8)))

  // Field INT: DAC Interval
    inline uint32_t PDB0_DACINT_INT (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register POEN: Pulse-Out n Enable register
  #define PDB0_POEN (* ((volatile uint32_t *) (0x40036000 + 400)))

  // Field POEN: PDB Pulse-Out Enable
    inline uint32_t PDB0_POEN_POEN (const uint32_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Registers PODLY(0,1,2): Pulse-Out n Delay register
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

  // Field MDIS: Module Disable - (PIT section)
    const uint32_t PIT_MCR_MDIS = 1U << 1 ;

//---  Registers LDVAL(0,1,2,3): Timer Load Value Register
  #define PIT_LDVAL(idx) (* ((volatile uint32_t *) (0x40037000 + 0x100 + (idx) * 0x10)))
  #define PIT_LDVAL0 (* ((volatile uint32_t *) (0x40037000 + 0x100 + 0 * 0x10)))
  #define PIT_LDVAL1 (* ((volatile uint32_t *) (0x40037000 + 0x100 + 1 * 0x10)))
  #define PIT_LDVAL2 (* ((volatile uint32_t *) (0x40037000 + 0x100 + 2 * 0x10)))
  #define PIT_LDVAL3 (* ((volatile uint32_t *) (0x40037000 + 0x100 + 3 * 0x10)))

  // Field TSV: Timer Start Value
    inline uint32_t PIT_LDVAL_TSV (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Registers CVAL(0,1,2,3): Current Timer Value Register
  #define PIT_CVAL(idx) (* ((volatile uint32_t *) (0x40037000 + 0x104 + (idx) * 0x10)))
  #define PIT_CVAL0 (* ((const volatile uint32_t *) (0x40037000 + 0x104 + 0 * 0x10)))
  #define PIT_CVAL1 (* ((const volatile uint32_t *) (0x40037000 + 0x104 + 1 * 0x10)))
  #define PIT_CVAL2 (* ((const volatile uint32_t *) (0x40037000 + 0x104 + 2 * 0x10)))
  #define PIT_CVAL3 (* ((const volatile uint32_t *) (0x40037000 + 0x104 + 3 * 0x10)))

  // Field TVL: Current Timer Value
    inline uint32_t PIT_CVAL_TVL (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Registers TCTRL(0,1,2,3): Timer Control Register
  #define PIT_TCTRL(idx) (* ((volatile uint32_t *) (0x40037000 + 0x108 + (idx) * 0x10)))
  #define PIT_TCTRL0 (* ((volatile uint32_t *) (0x40037000 + 0x108 + 0 * 0x10)))
  #define PIT_TCTRL1 (* ((volatile uint32_t *) (0x40037000 + 0x108 + 1 * 0x10)))
  #define PIT_TCTRL2 (* ((volatile uint32_t *) (0x40037000 + 0x108 + 2 * 0x10)))
  #define PIT_TCTRL3 (* ((volatile uint32_t *) (0x40037000 + 0x108 + 3 * 0x10)))

  // Field TEN: Timer Enable
    const uint32_t PIT_TCTRL_TEN = 1U << 0 ;

  // Field TIE: Timer Interrupt Enable
    const uint32_t PIT_TCTRL_TIE = 1U << 1 ;

  // Field CHN: Chain Mode
    const uint32_t PIT_TCTRL_CHN = 1U << 2 ;

//---  Registers TFLG(0,1,2,3): Timer Flag Register
  #define PIT_TFLG(idx) (* ((volatile uint32_t *) (0x40037000 + 0x10c + (idx) * 0x10)))
  #define PIT_TFLG0 (* ((volatile uint32_t *) (0x40037000 + 0x10c + 0 * 0x10)))
  #define PIT_TFLG1 (* ((volatile uint32_t *) (0x40037000 + 0x10c + 1 * 0x10)))
  #define PIT_TFLG2 (* ((volatile uint32_t *) (0x40037000 + 0x10c + 2 * 0x10)))
  #define PIT_TFLG3 (* ((volatile uint32_t *) (0x40037000 + 0x10c + 3 * 0x10)))

  // Field TIF: Timer Interrupt Flag
    const uint32_t PIT_TFLG_TIF = 1U << 0 ;

//------------------------------------------------------------------------------
// Peripheral PMC: Power Management Controller
//------------------------------------------------------------------------------

//---  Register LVDSC1: Low Voltage Detect Status And Control 1 register
  #define PMC_LVDSC1 (* ((volatile uint8_t *) (0x4007d000 + 0)))

  // Field LVDV: Low-Voltage Detect Voltage Select
    inline uint8_t PMC_LVDSC1_LVDV (const uint8_t inValue) {return (inValue & 0x3U) << 0 ; }

  // Field LVDRE: Low-Voltage Detect Reset Enable
    const uint8_t PMC_LVDSC1_LVDRE = 1U << 4 ;

  // Field LVDIE: Low-Voltage Detect Interrupt Enable
    const uint8_t PMC_LVDSC1_LVDIE = 1U << 5 ;

  // Field LVDACK: Low-Voltage Detect Acknowledge
    const uint8_t PMC_LVDSC1_LVDACK = 1U << 6 ;

  // Field LVDF: Low-Voltage Detect Flag
    const uint8_t PMC_LVDSC1_LVDF = 1U << 7 ;

//---  Register LVDSC2: Low Voltage Detect Status And Control 2 register
  #define PMC_LVDSC2 (* ((volatile uint8_t *) (0x4007d000 + 1)))

  // Field LVWV: Low-Voltage Warning Voltage Select
    inline uint8_t PMC_LVDSC2_LVWV (const uint8_t inValue) {return (inValue & 0x3U) << 0 ; }

  // Field LVWIE: Low-Voltage Warning Interrupt Enable
    const uint8_t PMC_LVDSC2_LVWIE = 1U << 5 ;

  // Field LVWACK: Low-Voltage Warning Acknowledge
    const uint8_t PMC_LVDSC2_LVWACK = 1U << 6 ;

  // Field LVWF: Low-Voltage Warning Flag
    const uint8_t PMC_LVDSC2_LVWF = 1U << 7 ;

//---  Register REGSC: Regulator Status And Control register
  #define PMC_REGSC (* ((volatile uint8_t *) (0x4007d000 + 2)))

  // Field BGBE: Bandgap Buffer Enable
    const uint8_t PMC_REGSC_BGBE = 1U << 0 ;

  // Field REGONS: Regulator In Run Regulation Status
    const uint8_t PMC_REGSC_REGONS = 1U << 2 ;

  // Field ACKISO: Acknowledge Isolation
    const uint8_t PMC_REGSC_ACKISO = 1U << 3 ;

  // Field BGEN: Bandgap Enable In VLPx Operation
    const uint8_t PMC_REGSC_BGEN = 1U << 4 ;

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

  // Field PFE: Passive Filter Enable
    const uint32_t PORT_PCR_PFE = 1U << 4 ;

  // Field ODE: Open Drain Enable
    const uint32_t PORT_PCR_ODE = 1U << 5 ;

  // Field DSE: Drive Strength Enable
    const uint32_t PORT_PCR_DSE = 1U << 6 ;

  // Field MUX: Pin Mux Control
    inline uint32_t PORT_PCR_MUX (const uint32_t inValue) {return (inValue & 0x7U) << 8 ; }

  // Field LK: Lock Register
    const uint32_t PORT_PCR_LK = 1U << 15 ;

  // Field IRQC: Interrupt Configuration
    inline uint32_t PORT_PCR_IRQC (const uint32_t inValue) {return (inValue & 0xfU) << 16 ; }

  // Field ISF: Interrupt Status Flag
    const uint32_t PORT_PCR_ISF = 1U << 24 ;

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

//---  Register DFWR: Digital Filter Width Register
  #define PORT_DFWR(group) (* ((volatile uint32_t *) (kBaseAddress_DFWR [group] + 0xc8)))
  #define PORTA_DFWR (* ((volatile uint32_t *) (0x40049000 + 0xc8)))
  #define PORTB_DFWR (* ((volatile uint32_t *) (0x4004a000 + 0xc8)))
  #define PORTC_DFWR (* ((volatile uint32_t *) (0x4004b000 + 0xc8)))
  #define PORTD_DFWR (* ((volatile uint32_t *) (0x4004c000 + 0xc8)))
  #define PORTE_DFWR (* ((volatile uint32_t *) (0x4004d000 + 0xc8)))

  // Field FILT: Filter Length
    inline uint32_t PORT_DFWR_FILT (const uint32_t inValue) {return (inValue & 0x1fU) << 0 ; }

//------------------------------------------------------------------------------
// Peripheral RCM: Reset Control Module
//------------------------------------------------------------------------------

//---  Register SRS0: System Reset Status Register 0
  #define RCM_SRS0 (* ((const volatile uint8_t *) (0x4007f000 + 0)))

  // Field WAKEUP: Low Leakage Wakeup Reset
    const uint8_t RCM_SRS0_WAKEUP = 1U << 0 ;

  // Field LVD: Low-Voltage Detect Reset
    const uint8_t RCM_SRS0_LVD = 1U << 1 ;

  // Field LOC: Loss-of-Clock Reset
    const uint8_t RCM_SRS0_LOC = 1U << 2 ;

  // Field LOL: Loss-of-Lock Reset
    const uint8_t RCM_SRS0_LOL = 1U << 3 ;

  // Field WDOG: Watchdog
    const uint8_t RCM_SRS0_WDOG = 1U << 5 ;

  // Field PIN: External Reset Pin
    const uint8_t RCM_SRS0_PIN = 1U << 6 ;

  // Field POR: Power-On Reset
    const uint8_t RCM_SRS0_POR = 1U << 7 ;

//---  Register SRS1: System Reset Status Register 1
  #define RCM_SRS1 (* ((const volatile uint8_t *) (0x4007f000 + 1)))

  // Field JTAG: JTAG Generated Reset
    const uint8_t RCM_SRS1_JTAG = 1U << 0 ;

  // Field LOCKUP: Core Lockup
    const uint8_t RCM_SRS1_LOCKUP = 1U << 1 ;

  // Field SW: Software
    const uint8_t RCM_SRS1_SW = 1U << 2 ;

  // Field MDM_AP: MDM-AP System Reset Request
    const uint8_t RCM_SRS1_MDM_AP = 1U << 3 ;

  // Field EZPT: EzPort Reset
    const uint8_t RCM_SRS1_EZPT = 1U << 4 ;

  // Field SACKERR: Stop Mode Acknowledge Error Reset
    const uint8_t RCM_SRS1_SACKERR = 1U << 5 ;

//---  Register RPFC: Reset Pin Filter Control register
  #define RCM_RPFC (* ((volatile uint8_t *) (0x4007f000 + 4)))

  // Field RSTFLTSRW: Reset Pin Filter Select in Run and Wait Modes
    inline uint8_t RCM_RPFC_RSTFLTSRW (const uint8_t inValue) {return (inValue & 0x3U) << 0 ; }

  // Field RSTFLTSS: Reset Pin Filter Select in Stop Mode
    const uint8_t RCM_RPFC_RSTFLTSS = 1U << 2 ;

//---  Register RPFW: Reset Pin Filter Width register
  #define RCM_RPFW (* ((volatile uint8_t *) (0x4007f000 + 5)))

  // Field RSTFLTSEL: Reset Pin Filter Bus Clock Select
    inline uint8_t RCM_RPFW_RSTFLTSEL (const uint8_t inValue) {return (inValue & 0x1fU) << 0 ; }

//---  Register MR: Mode Register
  #define RCM_MR (* ((const volatile uint8_t *) (0x4007f000 + 7)))

  // Field EZP_MS: EZP_MS_B pin state
    const uint8_t RCM_MR_EZP_MS = 1U << 1 ;

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

  // Field LL: Low lower byte
    inline uint32_t RFSYS_REG_LL (const uint32_t inValue) {return (inValue & 0xffU) << 0 ; }

  // Field LH: Low higher byte
    inline uint32_t RFSYS_REG_LH (const uint32_t inValue) {return (inValue & 0xffU) << 8 ; }

  // Field HL: High lower byte
    inline uint32_t RFSYS_REG_HL (const uint32_t inValue) {return (inValue & 0xffU) << 16 ; }

  // Field HH: High higher byte
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

  // Field LL: Low lower byte
    inline uint32_t RFVBAT_REG_LL (const uint32_t inValue) {return (inValue & 0xffU) << 0 ; }

  // Field LH: Low higher byte
    inline uint32_t RFVBAT_REG_LH (const uint32_t inValue) {return (inValue & 0xffU) << 8 ; }

  // Field HL: High lower byte
    inline uint32_t RFVBAT_REG_HL (const uint32_t inValue) {return (inValue & 0xffU) << 16 ; }

  // Field HH: High higher byte
    inline uint32_t RFVBAT_REG_HH (const uint32_t inValue) {return (inValue & 0xffU) << 24 ; }

//------------------------------------------------------------------------------
// Peripheral RNG: Random Number Generator Accelerator
//------------------------------------------------------------------------------

//---  Register CR: RNGA Control Register
  #define RNG_CR (* ((volatile uint32_t *) (0x40029000 + 0)))

  // Field GO: Go
    const uint32_t RNG_CR_GO = 1U << 0 ;

  // Field HA: High Assurance
    const uint32_t RNG_CR_HA = 1U << 1 ;

  // Field INTM: Interrupt Mask
    const uint32_t RNG_CR_INTM = 1U << 2 ;

  // Field CLRI: Clear Interrupt
    const uint32_t RNG_CR_CLRI = 1U << 3 ;

  // Field SLP: Sleep
    const uint32_t RNG_CR_SLP = 1U << 4 ;

//---  Register SR: RNGA Status Register
  #define RNG_SR (* ((const volatile uint32_t *) (0x40029000 + 4)))

  // Field SECV: Security Violation
    const uint32_t RNG_SR_SECV = 1U << 0 ;

  // Field LRS: Last Read Status
    const uint32_t RNG_SR_LRS = 1U << 1 ;

  // Field ORU: Output Register Underflow
    const uint32_t RNG_SR_ORU = 1U << 2 ;

  // Field ERRI: Error Interrupt
    const uint32_t RNG_SR_ERRI = 1U << 3 ;

  // Field SLP: Sleep
    const uint32_t RNG_SR_SLP = 1U << 4 ;

  // Field OREG_LVL: Output Register Level
    inline uint32_t RNG_SR_OREG_LVL (const uint32_t inValue) {return (inValue & 0xffU) << 8 ; }

  // Field OREG_SIZE: Output Register Size
    inline uint32_t RNG_SR_OREG_SIZE (const uint32_t inValue) {return (inValue & 0xffU) << 16 ; }

//---  Register ER: RNGA Entropy Register
  #define RNG_ER (* ((volatile uint32_t *) (0x40029000 + 8)))

  // Field EXT_ENT: External Entropy
    inline uint32_t RNG_ER_EXT_ENT (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register OR: RNGA Output Register
  #define RNG_OR (* ((const volatile uint32_t *) (0x40029000 + 12)))

  // Field RANDOUT: Random Output
    inline uint32_t RNG_OR_RANDOUT (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

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

  // Field WPS: Wakeup Pin Select
    const uint32_t RTC_CR_WPS = 1U << 4 ;

  // Field OSCE: Oscillator Enable
    const uint32_t RTC_CR_OSCE = 1U << 8 ;

  // Field CLKO: Clock Output
    const uint32_t RTC_CR_CLKO = 1U << 9 ;

  // Field SC16P: Oscillator 16pF Load Configure
    const uint32_t RTC_CR_SC16P = 1U << 10 ;

  // Field SC8P: Oscillator 8pF Load Configure
    const uint32_t RTC_CR_SC8P = 1U << 11 ;

  // Field SC4P: Oscillator 4pF Load Configure
    const uint32_t RTC_CR_SC4P = 1U << 12 ;

  // Field SC2P: Oscillator 2pF Load Configure
    const uint32_t RTC_CR_SC2P = 1U << 13 ;

//---  Register SR: RTC Status Register
  #define RTC_SR (* ((volatile uint32_t *) (0x4003d000 + 20)))

  // Field TIF: Time Invalid Flag
    const uint32_t RTC_SR_TIF = 1U << 0 ;

  // Field TOF: Time Overflow Flag
    const uint32_t RTC_SR_TOF = 1U << 1 ;

  // Field TAF: Time Alarm Flag
    const uint32_t RTC_SR_TAF = 1U << 2 ;

  // Field TCE: Time Counter Enable
    const uint32_t RTC_SR_TCE = 1U << 4 ;

//---  Register LR: RTC Lock Register
  #define RTC_LR (* ((volatile uint32_t *) (0x4003d000 + 24)))

  // Field TCL: Time Compensation Lock
    const uint32_t RTC_LR_TCL = 1U << 3 ;

  // Field CRL: Control Register Lock
    const uint32_t RTC_LR_CRL = 1U << 4 ;

  // Field SRL: Status Register Lock
    const uint32_t RTC_LR_SRL = 1U << 5 ;

  // Field LRL: Lock Register Lock
    const uint32_t RTC_LR_LRL = 1U << 6 ;

//---  Register IER: RTC Interrupt Enable Register
  #define RTC_IER (* ((volatile uint32_t *) (0x4003d000 + 28)))

  // Field TIIE: Time Invalid Interrupt Enable
    const uint32_t RTC_IER_TIIE = 1U << 0 ;

  // Field TOIE: Time Overflow Interrupt Enable
    const uint32_t RTC_IER_TOIE = 1U << 1 ;

  // Field TAIE: Time Alarm Interrupt Enable
    const uint32_t RTC_IER_TAIE = 1U << 2 ;

  // Field TSIE: Time Seconds Interrupt Enable
    const uint32_t RTC_IER_TSIE = 1U << 4 ;

  // Field WPON: Wakeup Pin On
    const uint32_t RTC_IER_WPON = 1U << 7 ;

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

//------------------------------------------------------------------------------
// Peripheral SDHC: Secured Digital Host Controller
//------------------------------------------------------------------------------

//---  Register DSADDR: DMA System Address register
  #define SDHC_DSADDR (* ((volatile uint32_t *) (0x400b1000 + 0)))

  // Field DSADDR: DMA System Address
    inline uint32_t SDHC_DSADDR_DSADDR (const uint32_t inValue) {return (inValue & 0x3fffffffU) << 2 ; }

//---  Register BLKATTR: Block Attributes register
  #define SDHC_BLKATTR (* ((volatile uint32_t *) (0x400b1000 + 4)))

  // Field BLKSIZE: Transfer Block Size
    inline uint32_t SDHC_BLKATTR_BLKSIZE (const uint32_t inValue) {return (inValue & 0x1fffU) << 0 ; }

  // Field BLKCNT: Blocks Count For Current Transfer
    inline uint32_t SDHC_BLKATTR_BLKCNT (const uint32_t inValue) {return (inValue & 0xffffU) << 16 ; }

//---  Register CMDARG: Command Argument register
  #define SDHC_CMDARG (* ((volatile uint32_t *) (0x400b1000 + 8)))

  // Field CMDARG: Command Argument
    inline uint32_t SDHC_CMDARG_CMDARG (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register XFERTYP: Transfer Type register
  #define SDHC_XFERTYP (* ((volatile uint32_t *) (0x400b1000 + 12)))

  // Field DMAEN: DMA Enable
    const uint32_t SDHC_XFERTYP_DMAEN = 1U << 0 ;

  // Field BCEN: Block Count Enable
    const uint32_t SDHC_XFERTYP_BCEN = 1U << 1 ;

  // Field AC12EN: Auto CMD12 Enable
    const uint32_t SDHC_XFERTYP_AC12EN = 1U << 2 ;

  // Field DTDSEL: Data Transfer Direction Select
    const uint32_t SDHC_XFERTYP_DTDSEL = 1U << 4 ;

  // Field MSBSEL: Multi/Single Block Select
    const uint32_t SDHC_XFERTYP_MSBSEL = 1U << 5 ;

  // Field RSPTYP: Response Type Select
    inline uint32_t SDHC_XFERTYP_RSPTYP (const uint32_t inValue) {return (inValue & 0x3U) << 16 ; }

  // Field CCCEN: Command CRC Check Enable
    const uint32_t SDHC_XFERTYP_CCCEN = 1U << 19 ;

  // Field CICEN: Command Index Check Enable
    const uint32_t SDHC_XFERTYP_CICEN = 1U << 20 ;

  // Field DPSEL: Data Present Select
    const uint32_t SDHC_XFERTYP_DPSEL = 1U << 21 ;

  // Field CMDTYP: Command Type
    inline uint32_t SDHC_XFERTYP_CMDTYP (const uint32_t inValue) {return (inValue & 0x3U) << 22 ; }

  // Field CMDINX: Command Index
    inline uint32_t SDHC_XFERTYP_CMDINX (const uint32_t inValue) {return (inValue & 0x3fU) << 24 ; }

//---  Register CMDRSP0: Command Response 0
  #define SDHC_CMDRSP0 (* ((const volatile uint32_t *) (0x400b1000 + 16)))

  // Field CMDRSP0: Command Response 0
    inline uint32_t SDHC_CMDRSP0_CMDRSP0 (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register CMDRSP1: Command Response 1
  #define SDHC_CMDRSP1 (* ((const volatile uint32_t *) (0x400b1000 + 20)))

  // Field CMDRSP1: Command Response 1
    inline uint32_t SDHC_CMDRSP1_CMDRSP1 (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register CMDRSP2: Command Response 2
  #define SDHC_CMDRSP2 (* ((const volatile uint32_t *) (0x400b1000 + 24)))

  // Field CMDRSP2: Command Response 2
    inline uint32_t SDHC_CMDRSP2_CMDRSP2 (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register CMDRSP3: Command Response 3
  #define SDHC_CMDRSP3 (* ((const volatile uint32_t *) (0x400b1000 + 28)))

  // Field CMDRSP3: Command Response 3
    inline uint32_t SDHC_CMDRSP3_CMDRSP3 (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register DATPORT: Buffer Data Port register
  #define SDHC_DATPORT (* ((volatile uint32_t *) (0x400b1000 + 32)))

  // Field DATCONT: Data Content
    inline uint32_t SDHC_DATPORT_DATCONT (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register PRSSTAT: Present State register
  #define SDHC_PRSSTAT (* ((const volatile uint32_t *) (0x400b1000 + 36)))

  // Field CIHB: Command Inhibit (CMD)
    const uint32_t SDHC_PRSSTAT_CIHB = 1U << 0 ;

  // Field CDIHB: Command Inhibit (DAT)
    const uint32_t SDHC_PRSSTAT_CDIHB = 1U << 1 ;

  // Field DLA: Data Line Active
    const uint32_t SDHC_PRSSTAT_DLA = 1U << 2 ;

  // Field SDSTB: SD Clock Stable
    const uint32_t SDHC_PRSSTAT_SDSTB = 1U << 3 ;

  // Field IPGOFF: Bus Clock Gated Off Internally
    const uint32_t SDHC_PRSSTAT_IPGOFF = 1U << 4 ;

  // Field HCKOFF: System Clock Gated Off Internally
    const uint32_t SDHC_PRSSTAT_HCKOFF = 1U << 5 ;

  // Field PEROFF: SDHC clock Gated Off Internally
    const uint32_t SDHC_PRSSTAT_PEROFF = 1U << 6 ;

  // Field SDOFF: SD Clock Gated Off Internally
    const uint32_t SDHC_PRSSTAT_SDOFF = 1U << 7 ;

  // Field WTA: Write Transfer Active
    const uint32_t SDHC_PRSSTAT_WTA = 1U << 8 ;

  // Field RTA: Read Transfer Active
    const uint32_t SDHC_PRSSTAT_RTA = 1U << 9 ;

  // Field BWEN: Buffer Write Enable
    const uint32_t SDHC_PRSSTAT_BWEN = 1U << 10 ;

  // Field BREN: Buffer Read Enable
    const uint32_t SDHC_PRSSTAT_BREN = 1U << 11 ;

  // Field CINS: Card Inserted
    const uint32_t SDHC_PRSSTAT_CINS = 1U << 16 ;

  // Field CLSL: CMD Line Signal Level
    const uint32_t SDHC_PRSSTAT_CLSL = 1U << 23 ;

  // Field DLSL: DAT Line Signal Level
    inline uint32_t SDHC_PRSSTAT_DLSL (const uint32_t inValue) {return (inValue & 0xffU) << 24 ; }

//---  Register PROCTL: Protocol Control register
  #define SDHC_PROCTL (* ((volatile uint32_t *) (0x400b1000 + 40)))

  // Field LCTL: LED Control
    const uint32_t SDHC_PROCTL_LCTL = 1U << 0 ;

  // Field DTW: Data Transfer Width
    inline uint32_t SDHC_PROCTL_DTW (const uint32_t inValue) {return (inValue & 0x3U) << 1 ; }

  // Field D3CD: DAT3 As Card Detection Pin
    const uint32_t SDHC_PROCTL_D3CD = 1U << 3 ;

  // Field EMODE: Endian Mode
    inline uint32_t SDHC_PROCTL_EMODE (const uint32_t inValue) {return (inValue & 0x3U) << 4 ; }

  // Field CDTL: Card Detect Test Level
    const uint32_t SDHC_PROCTL_CDTL = 1U << 6 ;

  // Field CDSS: Card Detect Signal Selection
    const uint32_t SDHC_PROCTL_CDSS = 1U << 7 ;

  // Field DMAS: DMA Select
    inline uint32_t SDHC_PROCTL_DMAS (const uint32_t inValue) {return (inValue & 0x3U) << 8 ; }

  // Field SABGREQ: Stop At Block Gap Request
    const uint32_t SDHC_PROCTL_SABGREQ = 1U << 16 ;

  // Field CREQ: Continue Request
    const uint32_t SDHC_PROCTL_CREQ = 1U << 17 ;

  // Field RWCTL: Read Wait Control
    const uint32_t SDHC_PROCTL_RWCTL = 1U << 18 ;

  // Field IABG: Interrupt At Block Gap
    const uint32_t SDHC_PROCTL_IABG = 1U << 19 ;

  // Field WECINT: Wakeup Event Enable On Card Interrupt
    const uint32_t SDHC_PROCTL_WECINT = 1U << 24 ;

  // Field WECINS: Wakeup Event Enable On SD Card Insertion
    const uint32_t SDHC_PROCTL_WECINS = 1U << 25 ;

  // Field WECRM: Wakeup Event Enable On SD Card Removal
    const uint32_t SDHC_PROCTL_WECRM = 1U << 26 ;

//---  Register SYSCTL: System Control register
  #define SDHC_SYSCTL (* ((volatile uint32_t *) (0x400b1000 + 44)))

  // Field IPGEN: IPG Clock Enable
    const uint32_t SDHC_SYSCTL_IPGEN = 1U << 0 ;

  // Field HCKEN: System Clock Enable
    const uint32_t SDHC_SYSCTL_HCKEN = 1U << 1 ;

  // Field PEREN: Peripheral Clock Enable
    const uint32_t SDHC_SYSCTL_PEREN = 1U << 2 ;

  // Field SDCLKEN: SD Clock Enable
    const uint32_t SDHC_SYSCTL_SDCLKEN = 1U << 3 ;

  // Field DVS: Divisor
    inline uint32_t SDHC_SYSCTL_DVS (const uint32_t inValue) {return (inValue & 0xfU) << 4 ; }

  // Field SDCLKFS: SDCLK Frequency Select
    inline uint32_t SDHC_SYSCTL_SDCLKFS (const uint32_t inValue) {return (inValue & 0xffU) << 8 ; }

  // Field DTOCV: Data Timeout Counter Value
    inline uint32_t SDHC_SYSCTL_DTOCV (const uint32_t inValue) {return (inValue & 0xfU) << 16 ; }

  // Field RSTA: Software Reset For ALL
    const uint32_t SDHC_SYSCTL_RSTA = 1U << 24 ;

  // Field RSTC: Software Reset For CMD Line
    const uint32_t SDHC_SYSCTL_RSTC = 1U << 25 ;

  // Field RSTD: Software Reset For DAT Line
    const uint32_t SDHC_SYSCTL_RSTD = 1U << 26 ;

  // Field INITA: Initialization Active
    const uint32_t SDHC_SYSCTL_INITA = 1U << 27 ;

//---  Register IRQSTAT: Interrupt Status register
  #define SDHC_IRQSTAT (* ((volatile uint32_t *) (0x400b1000 + 48)))

  // Field CC: Command Complete
    const uint32_t SDHC_IRQSTAT_CC = 1U << 0 ;

  // Field TC: Transfer Complete
    const uint32_t SDHC_IRQSTAT_TC = 1U << 1 ;

  // Field BGE: Block Gap Event
    const uint32_t SDHC_IRQSTAT_BGE = 1U << 2 ;

  // Field DINT: DMA Interrupt
    const uint32_t SDHC_IRQSTAT_DINT = 1U << 3 ;

  // Field BWR: Buffer Write Ready
    const uint32_t SDHC_IRQSTAT_BWR = 1U << 4 ;

  // Field BRR: Buffer Read Ready
    const uint32_t SDHC_IRQSTAT_BRR = 1U << 5 ;

  // Field CINS: Card Insertion
    const uint32_t SDHC_IRQSTAT_CINS = 1U << 6 ;

  // Field CRM: Card Removal
    const uint32_t SDHC_IRQSTAT_CRM = 1U << 7 ;

  // Field CINT: Card Interrupt
    const uint32_t SDHC_IRQSTAT_CINT = 1U << 8 ;

  // Field CTOE: Command Timeout Error
    const uint32_t SDHC_IRQSTAT_CTOE = 1U << 16 ;

  // Field CCE: Command CRC Error
    const uint32_t SDHC_IRQSTAT_CCE = 1U << 17 ;

  // Field CEBE: Command End Bit Error
    const uint32_t SDHC_IRQSTAT_CEBE = 1U << 18 ;

  // Field CIE: Command Index Error
    const uint32_t SDHC_IRQSTAT_CIE = 1U << 19 ;

  // Field DTOE: Data Timeout Error
    const uint32_t SDHC_IRQSTAT_DTOE = 1U << 20 ;

  // Field DCE: Data CRC Error
    const uint32_t SDHC_IRQSTAT_DCE = 1U << 21 ;

  // Field DEBE: Data End Bit Error
    const uint32_t SDHC_IRQSTAT_DEBE = 1U << 22 ;

  // Field AC12E: Auto CMD12 Error
    const uint32_t SDHC_IRQSTAT_AC12E = 1U << 24 ;

  // Field DMAE: DMA Error
    const uint32_t SDHC_IRQSTAT_DMAE = 1U << 28 ;

//---  Register IRQSTATEN: Interrupt Status Enable register
  #define SDHC_IRQSTATEN (* ((volatile uint32_t *) (0x400b1000 + 52)))

  // Field CCSEN: Command Complete Status Enable
    const uint32_t SDHC_IRQSTATEN_CCSEN = 1U << 0 ;

  // Field TCSEN: Transfer Complete Status Enable
    const uint32_t SDHC_IRQSTATEN_TCSEN = 1U << 1 ;

  // Field BGESEN: Block Gap Event Status Enable
    const uint32_t SDHC_IRQSTATEN_BGESEN = 1U << 2 ;

  // Field DINTSEN: DMA Interrupt Status Enable
    const uint32_t SDHC_IRQSTATEN_DINTSEN = 1U << 3 ;

  // Field BWRSEN: Buffer Write Ready Status Enable
    const uint32_t SDHC_IRQSTATEN_BWRSEN = 1U << 4 ;

  // Field BRRSEN: Buffer Read Ready Status Enable
    const uint32_t SDHC_IRQSTATEN_BRRSEN = 1U << 5 ;

  // Field CINSEN: Card Insertion Status Enable
    const uint32_t SDHC_IRQSTATEN_CINSEN = 1U << 6 ;

  // Field CRMSEN: Card Removal Status Enable
    const uint32_t SDHC_IRQSTATEN_CRMSEN = 1U << 7 ;

  // Field CINTSEN: Card Interrupt Status Enable
    const uint32_t SDHC_IRQSTATEN_CINTSEN = 1U << 8 ;

  // Field CTOESEN: Command Timeout Error Status Enable
    const uint32_t SDHC_IRQSTATEN_CTOESEN = 1U << 16 ;

  // Field CCESEN: Command CRC Error Status Enable
    const uint32_t SDHC_IRQSTATEN_CCESEN = 1U << 17 ;

  // Field CEBESEN: Command End Bit Error Status Enable
    const uint32_t SDHC_IRQSTATEN_CEBESEN = 1U << 18 ;

  // Field CIESEN: Command Index Error Status Enable
    const uint32_t SDHC_IRQSTATEN_CIESEN = 1U << 19 ;

  // Field DTOESEN: Data Timeout Error Status Enable
    const uint32_t SDHC_IRQSTATEN_DTOESEN = 1U << 20 ;

  // Field DCESEN: Data CRC Error Status Enable
    const uint32_t SDHC_IRQSTATEN_DCESEN = 1U << 21 ;

  // Field DEBESEN: Data End Bit Error Status Enable
    const uint32_t SDHC_IRQSTATEN_DEBESEN = 1U << 22 ;

  // Field AC12ESEN: Auto CMD12 Error Status Enable
    const uint32_t SDHC_IRQSTATEN_AC12ESEN = 1U << 24 ;

  // Field DMAESEN: DMA Error Status Enable
    const uint32_t SDHC_IRQSTATEN_DMAESEN = 1U << 28 ;

//---  Register IRQSIGEN: Interrupt Signal Enable register
  #define SDHC_IRQSIGEN (* ((volatile uint32_t *) (0x400b1000 + 56)))

  // Field CCIEN: Command Complete Interrupt Enable
    const uint32_t SDHC_IRQSIGEN_CCIEN = 1U << 0 ;

  // Field TCIEN: Transfer Complete Interrupt Enable
    const uint32_t SDHC_IRQSIGEN_TCIEN = 1U << 1 ;

  // Field BGEIEN: Block Gap Event Interrupt Enable
    const uint32_t SDHC_IRQSIGEN_BGEIEN = 1U << 2 ;

  // Field DINTIEN: DMA Interrupt Enable
    const uint32_t SDHC_IRQSIGEN_DINTIEN = 1U << 3 ;

  // Field BWRIEN: Buffer Write Ready Interrupt Enable
    const uint32_t SDHC_IRQSIGEN_BWRIEN = 1U << 4 ;

  // Field BRRIEN: Buffer Read Ready Interrupt Enable
    const uint32_t SDHC_IRQSIGEN_BRRIEN = 1U << 5 ;

  // Field CINSIEN: Card Insertion Interrupt Enable
    const uint32_t SDHC_IRQSIGEN_CINSIEN = 1U << 6 ;

  // Field CRMIEN: Card Removal Interrupt Enable
    const uint32_t SDHC_IRQSIGEN_CRMIEN = 1U << 7 ;

  // Field CINTIEN: Card Interrupt Enable
    const uint32_t SDHC_IRQSIGEN_CINTIEN = 1U << 8 ;

  // Field CTOEIEN: Command Timeout Error Interrupt Enable
    const uint32_t SDHC_IRQSIGEN_CTOEIEN = 1U << 16 ;

  // Field CCEIEN: Command CRC Error Interrupt Enable
    const uint32_t SDHC_IRQSIGEN_CCEIEN = 1U << 17 ;

  // Field CEBEIEN: Command End Bit Error Interrupt Enable
    const uint32_t SDHC_IRQSIGEN_CEBEIEN = 1U << 18 ;

  // Field CIEIEN: Command Index Error Interrupt Enable
    const uint32_t SDHC_IRQSIGEN_CIEIEN = 1U << 19 ;

  // Field DTOEIEN: Data Timeout Error Interrupt Enable
    const uint32_t SDHC_IRQSIGEN_DTOEIEN = 1U << 20 ;

  // Field DCEIEN: Data CRC Error Interrupt Enable
    const uint32_t SDHC_IRQSIGEN_DCEIEN = 1U << 21 ;

  // Field DEBEIEN: Data End Bit Error Interrupt Enable
    const uint32_t SDHC_IRQSIGEN_DEBEIEN = 1U << 22 ;

  // Field AC12EIEN: Auto CMD12 Error Interrupt Enable
    const uint32_t SDHC_IRQSIGEN_AC12EIEN = 1U << 24 ;

  // Field DMAEIEN: DMA Error Interrupt Enable
    const uint32_t SDHC_IRQSIGEN_DMAEIEN = 1U << 28 ;

//---  Register AC12ERR: Auto CMD12 Error Status Register
  #define SDHC_AC12ERR (* ((const volatile uint32_t *) (0x400b1000 + 60)))

  // Field AC12NE: Auto CMD12 Not Executed
    const uint32_t SDHC_AC12ERR_AC12NE = 1U << 0 ;

  // Field AC12TOE: Auto CMD12 Timeout Error
    const uint32_t SDHC_AC12ERR_AC12TOE = 1U << 1 ;

  // Field AC12EBE: Auto CMD12 End Bit Error
    const uint32_t SDHC_AC12ERR_AC12EBE = 1U << 2 ;

  // Field AC12CE: Auto CMD12 CRC Error
    const uint32_t SDHC_AC12ERR_AC12CE = 1U << 3 ;

  // Field AC12IE: Auto CMD12 Index Error
    const uint32_t SDHC_AC12ERR_AC12IE = 1U << 4 ;

  // Field CNIBAC12E: Command Not Issued By Auto CMD12 Error
    const uint32_t SDHC_AC12ERR_CNIBAC12E = 1U << 7 ;

//---  Register HTCAPBLT: Host Controller Capabilities
  #define SDHC_HTCAPBLT (* ((const volatile uint32_t *) (0x400b1000 + 64)))

  // Field MBL: Max Block Length
    inline uint32_t SDHC_HTCAPBLT_MBL (const uint32_t inValue) {return (inValue & 0x7U) << 16 ; }

  // Field ADMAS: ADMA Support
    const uint32_t SDHC_HTCAPBLT_ADMAS = 1U << 20 ;

  // Field HSS: High Speed Support
    const uint32_t SDHC_HTCAPBLT_HSS = 1U << 21 ;

  // Field DMAS: DMA Support
    const uint32_t SDHC_HTCAPBLT_DMAS = 1U << 22 ;

  // Field SRS: Suspend/Resume Support
    const uint32_t SDHC_HTCAPBLT_SRS = 1U << 23 ;

  // Field VS33: Voltage Support 3.3 V
    const uint32_t SDHC_HTCAPBLT_VS33 = 1U << 24 ;

//---  Register WML: Watermark Level Register
  #define SDHC_WML (* ((volatile uint32_t *) (0x400b1000 + 68)))

  // Field RDWML: Read Watermark Level
    inline uint32_t SDHC_WML_RDWML (const uint32_t inValue) {return (inValue & 0xffU) << 0 ; }

  // Field WRWML: Write Watermark Level
    inline uint32_t SDHC_WML_WRWML (const uint32_t inValue) {return (inValue & 0xffU) << 16 ; }

//---  Register FEVT: Force Event register
  #define SDHC_FEVT (* ((volatile uint32_t *) (0x400b1000 + 80)))

  // Field AC12NE: Force Event Auto Command 12 Not Executed
    const uint32_t SDHC_FEVT_AC12NE = 1U << 0 ;

  // Field AC12TOE: Force Event Auto Command 12 Time Out Error
    const uint32_t SDHC_FEVT_AC12TOE = 1U << 1 ;

  // Field AC12CE: Force Event Auto Command 12 CRC Error
    const uint32_t SDHC_FEVT_AC12CE = 1U << 2 ;

  // Field AC12EBE: Force Event Auto Command 12 End Bit Error
    const uint32_t SDHC_FEVT_AC12EBE = 1U << 3 ;

  // Field AC12IE: Force Event Auto Command 12 Index Error
    const uint32_t SDHC_FEVT_AC12IE = 1U << 4 ;

  // Field CNIBAC12E: Force Event Command Not Executed By Auto Command 12 Error
    const uint32_t SDHC_FEVT_CNIBAC12E = 1U << 7 ;

  // Field CTOE: Force Event Command Time Out Error
    const uint32_t SDHC_FEVT_CTOE = 1U << 16 ;

  // Field CCE: Force Event Command CRC Error
    const uint32_t SDHC_FEVT_CCE = 1U << 17 ;

  // Field CEBE: Force Event Command End Bit Error
    const uint32_t SDHC_FEVT_CEBE = 1U << 18 ;

  // Field CIE: Force Event Command Index Error
    const uint32_t SDHC_FEVT_CIE = 1U << 19 ;

  // Field DTOE: Force Event Data Time Out Error
    const uint32_t SDHC_FEVT_DTOE = 1U << 20 ;

  // Field DCE: Force Event Data CRC Error
    const uint32_t SDHC_FEVT_DCE = 1U << 21 ;

  // Field DEBE: Force Event Data End Bit Error
    const uint32_t SDHC_FEVT_DEBE = 1U << 22 ;

  // Field AC12E: Force Event Auto Command 12 Error
    const uint32_t SDHC_FEVT_AC12E = 1U << 24 ;

  // Field DMAE: Force Event DMA Error
    const uint32_t SDHC_FEVT_DMAE = 1U << 28 ;

  // Field CINT: Force Event Card Interrupt
    const uint32_t SDHC_FEVT_CINT = 1U << 31 ;

//---  Register ADMAES: ADMA Error Status register
  #define SDHC_ADMAES (* ((const volatile uint32_t *) (0x400b1000 + 84)))

  // Field ADMAES: ADMA Error State (When ADMA Error Is Occurred.)
    inline uint32_t SDHC_ADMAES_ADMAES (const uint32_t inValue) {return (inValue & 0x3U) << 0 ; }

  // Field ADMALME: ADMA Length Mismatch Error
    const uint32_t SDHC_ADMAES_ADMALME = 1U << 2 ;

  // Field ADMADCE: ADMA Descriptor Error
    const uint32_t SDHC_ADMAES_ADMADCE = 1U << 3 ;

//---  Register ADSADDR: ADMA System Addressregister
  #define SDHC_ADSADDR (* ((volatile uint32_t *) (0x400b1000 + 88)))

  // Field ADSADDR: ADMA System Address
    inline uint32_t SDHC_ADSADDR_ADSADDR (const uint32_t inValue) {return (inValue & 0x3fffffffU) << 2 ; }

//---  Register VENDOR: Vendor Specific register
  #define SDHC_VENDOR (* ((volatile uint32_t *) (0x400b1000 + 192)))

  // Field EXTDMAEN: External DMA Request Enable
    const uint32_t SDHC_VENDOR_EXTDMAEN = 1U << 0 ;

  // Field EXBLKNU: Exact Block Number Block Read Enable For SDIO CMD53
    const uint32_t SDHC_VENDOR_EXBLKNU = 1U << 1 ;

  // Field INTSTVAL: Internal State Value
    inline uint32_t SDHC_VENDOR_INTSTVAL (const uint32_t inValue) {return (inValue & 0xffU) << 16 ; }

//---  Register MMCBOOT: MMC Boot register
  #define SDHC_MMCBOOT (* ((volatile uint32_t *) (0x400b1000 + 196)))

  // Field DTOCVACK: Boot ACK Time Out Counter Value
    inline uint32_t SDHC_MMCBOOT_DTOCVACK (const uint32_t inValue) {return (inValue & 0xfU) << 0 ; }

  // Field BOOTACK: Boot Ack Mode Select
    const uint32_t SDHC_MMCBOOT_BOOTACK = 1U << 4 ;

  // Field BOOTMODE: Boot Mode Select
    const uint32_t SDHC_MMCBOOT_BOOTMODE = 1U << 5 ;

  // Field BOOTEN: Boot Mode Enable
    const uint32_t SDHC_MMCBOOT_BOOTEN = 1U << 6 ;

  // Field AUTOSABGEN: When boot, enable auto stop at block gap function
    const uint32_t SDHC_MMCBOOT_AUTOSABGEN = 1U << 7 ;

  // Field BOOTBLKCNT: Defines the stop at block gap value of automatic mode
    inline uint32_t SDHC_MMCBOOT_BOOTBLKCNT (const uint32_t inValue) {return (inValue & 0xffffU) << 16 ; }

//---  Register HOSTVER: Host Controller Version
  #define SDHC_HOSTVER (* ((const volatile uint32_t *) (0x400b1000 + 252)))

  // Field SVN: Specification Version Number
    inline uint32_t SDHC_HOSTVER_SVN (const uint32_t inValue) {return (inValue & 0xffU) << 0 ; }

  // Field VVN: Vendor Version Number
    inline uint32_t SDHC_HOSTVER_VVN (const uint32_t inValue) {return (inValue & 0xffU) << 8 ; }

//------------------------------------------------------------------------------
// Peripheral SIM: System Integration Module
//------------------------------------------------------------------------------

//---  Register SOPT1: System Options Register 1
  #define SIM_SOPT1 (* ((volatile uint32_t *) (0x40047000 + 0)))

  // Field RAMSIZE: RAM size
    inline uint32_t SIM_SOPT1_RAMSIZE (const uint32_t inValue) {return (inValue & 0xfU) << 12 ; }

  // Field OSC32KSEL: 32K oscillator clock select
    inline uint32_t SIM_SOPT1_OSC32KSEL (const uint32_t inValue) {return (inValue & 0x3U) << 18 ; }

  // Field USBVSTBY: USB voltage regulator in standby mode during VLPR and VLPW modes
    const uint32_t SIM_SOPT1_USBVSTBY = 1U << 29 ;

  // Field USBSSTBY: USB voltage regulator in standby mode during Stop, VLPS, LLS and VLLS modes.
    const uint32_t SIM_SOPT1_USBSSTBY = 1U << 30 ;

  // Field USBREGEN: USB voltage regulator enable
    const uint32_t SIM_SOPT1_USBREGEN = 1U << 31 ;

//---  Register SOPT1CFG: SOPT1 Configuration Register
  #define SIM_SOPT1CFG (* ((volatile uint32_t *) (0x40047000 + 4)))

  // Field URWE: USB voltage regulator enable write enable
    const uint32_t SIM_SOPT1CFG_URWE = 1U << 24 ;

  // Field UVSWE: USB voltage regulator VLP standby write enable
    const uint32_t SIM_SOPT1CFG_UVSWE = 1U << 25 ;

  // Field USSWE: USB voltage regulator stop standby write enable
    const uint32_t SIM_SOPT1CFG_USSWE = 1U << 26 ;

//---  Register SOPT2: System Options Register 2
  #define SIM_SOPT2 (* ((volatile uint32_t *) (0x40047000 + 4100)))

  // Field RTCCLKOUTSEL: RTC clock out select
    const uint32_t SIM_SOPT2_RTCCLKOUTSEL = 1U << 4 ;

  // Field CLKOUTSEL: CLKOUT select
    inline uint32_t SIM_SOPT2_CLKOUTSEL (const uint32_t inValue) {return (inValue & 0x7U) << 5 ; }

  // Field FBSL: FlexBus security level
    inline uint32_t SIM_SOPT2_FBSL (const uint32_t inValue) {return (inValue & 0x3U) << 8 ; }

  // Field PTD7PAD: PTD7 pad drive strength
    const uint32_t SIM_SOPT2_PTD7PAD = 1U << 11 ;

  // Field TRACECLKSEL: Debug trace clock select
    const uint32_t SIM_SOPT2_TRACECLKSEL = 1U << 12 ;

  // Field PLLFLLSEL: PLL/FLL clock select
    inline uint32_t SIM_SOPT2_PLLFLLSEL (const uint32_t inValue) {return (inValue & 0x3U) << 16 ; }

  // Field USBSRC: USB clock source select
    const uint32_t SIM_SOPT2_USBSRC = 1U << 18 ;

  // Field RMIISRC: RMII clock source select
    const uint32_t SIM_SOPT2_RMIISRC = 1U << 19 ;

  // Field TIMESRC: IEEE 1588 timestamp clock source select
    inline uint32_t SIM_SOPT2_TIMESRC (const uint32_t inValue) {return (inValue & 0x3U) << 20 ; }

  // Field SDHCSRC: SDHC clock source select
    inline uint32_t SIM_SOPT2_SDHCSRC (const uint32_t inValue) {return (inValue & 0x3U) << 28 ; }

//---  Register SOPT4: System Options Register 4
  #define SIM_SOPT4 (* ((volatile uint32_t *) (0x40047000 + 4108)))

  // Field FTM0FLT0: FTM0 Fault 0 Select
    const uint32_t SIM_SOPT4_FTM0FLT0 = 1U << 0 ;

  // Field FTM0FLT1: FTM0 Fault 1 Select
    const uint32_t SIM_SOPT4_FTM0FLT1 = 1U << 1 ;

  // Field FTM0FLT2: FTM0 Fault 2 Select
    const uint32_t SIM_SOPT4_FTM0FLT2 = 1U << 2 ;

  // Field FTM1FLT0: FTM1 Fault 0 Select
    const uint32_t SIM_SOPT4_FTM1FLT0 = 1U << 4 ;

  // Field FTM2FLT0: FTM2 Fault 0 Select
    const uint32_t SIM_SOPT4_FTM2FLT0 = 1U << 8 ;

  // Field FTM3FLT0: FTM3 Fault 0 Select
    const uint32_t SIM_SOPT4_FTM3FLT0 = 1U << 12 ;

  // Field FTM1CH0SRC: FTM1 channel 0 input capture source select
    inline uint32_t SIM_SOPT4_FTM1CH0SRC (const uint32_t inValue) {return (inValue & 0x3U) << 18 ; }

  // Field FTM2CH0SRC: FTM2 channel 0 input capture source select
    inline uint32_t SIM_SOPT4_FTM2CH0SRC (const uint32_t inValue) {return (inValue & 0x3U) << 20 ; }

  // Field FTM0CLKSEL: FlexTimer 0 External Clock Pin Select
    const uint32_t SIM_SOPT4_FTM0CLKSEL = 1U << 24 ;

  // Field FTM1CLKSEL: FTM1 External Clock Pin Select
    const uint32_t SIM_SOPT4_FTM1CLKSEL = 1U << 25 ;

  // Field FTM2CLKSEL: FlexTimer 2 External Clock Pin Select
    const uint32_t SIM_SOPT4_FTM2CLKSEL = 1U << 26 ;

  // Field FTM3CLKSEL: FlexTimer 3 External Clock Pin Select
    const uint32_t SIM_SOPT4_FTM3CLKSEL = 1U << 27 ;

  // Field FTM0TRG0SRC: FlexTimer 0 Hardware Trigger 0 Source Select
    const uint32_t SIM_SOPT4_FTM0TRG0SRC = 1U << 28 ;

  // Field FTM0TRG1SRC: FlexTimer 0 Hardware Trigger 1 Source Select
    const uint32_t SIM_SOPT4_FTM0TRG1SRC = 1U << 29 ;

  // Field FTM3TRG0SRC: FlexTimer 3 Hardware Trigger 0 Source Select
    const uint32_t SIM_SOPT4_FTM3TRG0SRC = 1U << 30 ;

  // Field FTM3TRG1SRC: FlexTimer 3 Hardware Trigger 1 Source Select
    const uint32_t SIM_SOPT4_FTM3TRG1SRC = 1U << 31 ;

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

//---  Register SOPT7: System Options Register 7
  #define SIM_SOPT7 (* ((volatile uint32_t *) (0x40047000 + 4120)))

  // Field ADC0TRGSEL: ADC0 trigger select
    inline uint32_t SIM_SOPT7_ADC0TRGSEL (const uint32_t inValue) {return (inValue & 0xfU) << 0 ; }

  // Field ADC0PRETRGSEL: ADC0 pretrigger select
    const uint32_t SIM_SOPT7_ADC0PRETRGSEL = 1U << 4 ;

  // Field ADC0ALTTRGEN: ADC0 alternate trigger enable
    const uint32_t SIM_SOPT7_ADC0ALTTRGEN = 1U << 7 ;

  // Field ADC1TRGSEL: ADC1 trigger select
    inline uint32_t SIM_SOPT7_ADC1TRGSEL (const uint32_t inValue) {return (inValue & 0xfU) << 8 ; }

  // Field ADC1PRETRGSEL: ADC1 pre-trigger select
    const uint32_t SIM_SOPT7_ADC1PRETRGSEL = 1U << 12 ;

  // Field ADC1ALTTRGEN: ADC1 alternate trigger enable
    const uint32_t SIM_SOPT7_ADC1ALTTRGEN = 1U << 15 ;

//---  Register SDID: System Device Identification Register
  #define SIM_SDID (* ((const volatile uint32_t *) (0x40047000 + 4132)))

  // Field PINID: Pincount identification
    inline uint32_t SIM_SDID_PINID (const uint32_t inValue) {return (inValue & 0xfU) << 0 ; }

  // Field FAMID: Kinetis family identification
    inline uint32_t SIM_SDID_FAMID (const uint32_t inValue) {return (inValue & 0x7U) << 4 ; }

  // Field DIEID: Device Die ID
    inline uint32_t SIM_SDID_DIEID (const uint32_t inValue) {return (inValue & 0x1fU) << 7 ; }

  // Field REVID: Device revision number
    inline uint32_t SIM_SDID_REVID (const uint32_t inValue) {return (inValue & 0xfU) << 12 ; }

  // Field SERIESID: Kinetis Series ID
    inline uint32_t SIM_SDID_SERIESID (const uint32_t inValue) {return (inValue & 0xfU) << 20 ; }

  // Field SUBFAMID: Kinetis Sub-Family ID
    inline uint32_t SIM_SDID_SUBFAMID (const uint32_t inValue) {return (inValue & 0xfU) << 24 ; }

  // Field FAMILYID: Kinetis Family ID
    inline uint32_t SIM_SDID_FAMILYID (const uint32_t inValue) {return (inValue & 0xfU) << 28 ; }

//---  Register SCGC1: System Clock Gating Control Register 1
  #define SIM_SCGC1 (* ((volatile uint32_t *) (0x40047000 + 4136)))

  // Field I2C2: I2C2 Clock Gate Control
    const uint32_t SIM_SCGC1_I2C2 = 1U << 6 ;

  // Field UART4: UART4 Clock Gate Control
    const uint32_t SIM_SCGC1_UART4 = 1U << 10 ;

  // Field UART5: UART5 Clock Gate Control
    const uint32_t SIM_SCGC1_UART5 = 1U << 11 ;

//---  Register SCGC2: System Clock Gating Control Register 2
  #define SIM_SCGC2 (* ((volatile uint32_t *) (0x40047000 + 4140)))

  // Field ENET: ENET Clock Gate Control
    const uint32_t SIM_SCGC2_ENET = 1U << 0 ;

  // Field DAC0: DAC0 Clock Gate Control
    const uint32_t SIM_SCGC2_DAC0 = 1U << 12 ;

  // Field DAC1: DAC1 Clock Gate Control
    const uint32_t SIM_SCGC2_DAC1 = 1U << 13 ;

//---  Register SCGC3: System Clock Gating Control Register 3
  #define SIM_SCGC3 (* ((volatile uint32_t *) (0x40047000 + 4144)))

  // Field RNGA: RNGA Clock Gate Control
    const uint32_t SIM_SCGC3_RNGA = 1U << 0 ;

  // Field SPI2: SPI2 Clock Gate Control
    const uint32_t SIM_SCGC3_SPI2 = 1U << 12 ;

  // Field SDHC: SDHC Clock Gate Control
    const uint32_t SIM_SCGC3_SDHC = 1U << 17 ;

  // Field FTM2: FTM2 Clock Gate Control
    const uint32_t SIM_SCGC3_FTM2 = 1U << 24 ;

  // Field FTM3: FTM3 Clock Gate Control
    const uint32_t SIM_SCGC3_FTM3 = 1U << 25 ;

  // Field ADC1: ADC1 Clock Gate Control
    const uint32_t SIM_SCGC3_ADC1 = 1U << 27 ;

//---  Register SCGC4: System Clock Gating Control Register 4
  #define SIM_SCGC4 (* ((volatile uint32_t *) (0x40047000 + 4148)))

  // Field EWM: EWM Clock Gate Control
    const uint32_t SIM_SCGC4_EWM = 1U << 1 ;

  // Field CMT: CMT Clock Gate Control
    const uint32_t SIM_SCGC4_CMT = 1U << 2 ;

  // Field I2C0: I2C0 Clock Gate Control
    const uint32_t SIM_SCGC4_I2C0 = 1U << 6 ;

  // Field I2C1: I2C1 Clock Gate Control
    const uint32_t SIM_SCGC4_I2C1 = 1U << 7 ;

  // Field UART0: UART0 Clock Gate Control
    const uint32_t SIM_SCGC4_UART0 = 1U << 10 ;

  // Field UART1: UART1 Clock Gate Control
    const uint32_t SIM_SCGC4_UART1 = 1U << 11 ;

  // Field UART2: UART2 Clock Gate Control
    const uint32_t SIM_SCGC4_UART2 = 1U << 12 ;

  // Field UART3: UART3 Clock Gate Control
    const uint32_t SIM_SCGC4_UART3 = 1U << 13 ;

  // Field USBOTG: USB Clock Gate Control
    const uint32_t SIM_SCGC4_USBOTG = 1U << 18 ;

  // Field CMP: Comparator Clock Gate Control
    const uint32_t SIM_SCGC4_CMP = 1U << 19 ;

  // Field VREF: VREF Clock Gate Control
    const uint32_t SIM_SCGC4_VREF = 1U << 20 ;

//---  Register SCGC5: System Clock Gating Control Register 5
  #define SIM_SCGC5 (* ((volatile uint32_t *) (0x40047000 + 4152)))

  // Field LPTMR: Low Power Timer Access Control
    const uint32_t SIM_SCGC5_LPTMR = 1U << 0 ;

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

//---  Register SCGC6: System Clock Gating Control Register 6
  #define SIM_SCGC6 (* ((volatile uint32_t *) (0x40047000 + 4156)))

  // Field FTF: Flash Memory Clock Gate Control
    const uint32_t SIM_SCGC6_FTF = 1U << 0 ;

  // Field DMAMUX: DMA Mux Clock Gate Control
    const uint32_t SIM_SCGC6_DMAMUX = 1U << 1 ;

  // Field FLEXCAN0: FlexCAN0 Clock Gate Control
    const uint32_t SIM_SCGC6_FLEXCAN0 = 1U << 4 ;

  // Field RNGA: RNGA Clock Gate Control
    const uint32_t SIM_SCGC6_RNGA = 1U << 9 ;

  // Field SPI0: SPI0 Clock Gate Control
    const uint32_t SIM_SCGC6_SPI0 = 1U << 12 ;

  // Field SPI1: SPI1 Clock Gate Control
    const uint32_t SIM_SCGC6_SPI1 = 1U << 13 ;

  // Field I2S: I2S Clock Gate Control
    const uint32_t SIM_SCGC6_I2S = 1U << 15 ;

  // Field CRC: CRC Clock Gate Control
    const uint32_t SIM_SCGC6_CRC = 1U << 18 ;

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

  // Field FTM2: FTM2 Clock Gate Control
    const uint32_t SIM_SCGC6_FTM2 = 1U << 26 ;

  // Field ADC0: ADC0 Clock Gate Control
    const uint32_t SIM_SCGC6_ADC0 = 1U << 27 ;

  // Field RTC: RTC Access Control
    const uint32_t SIM_SCGC6_RTC = 1U << 29 ;

  // Field DAC0: DAC0 Clock Gate Control
    const uint32_t SIM_SCGC6_DAC0 = 1U << 31 ;

//---  Register SCGC7: System Clock Gating Control Register 7
  #define SIM_SCGC7 (* ((volatile uint32_t *) (0x40047000 + 4160)))

  // Field FLEXBUS: FlexBus Clock Gate Control
    const uint32_t SIM_SCGC7_FLEXBUS = 1U << 0 ;

  // Field DMA: DMA Clock Gate Control
    const uint32_t SIM_SCGC7_DMA = 1U << 1 ;

  // Field MPU: MPU Clock Gate Control
    const uint32_t SIM_SCGC7_MPU = 1U << 2 ;

//---  Register CLKDIV1: System Clock Divider Register 1
  #define SIM_CLKDIV1 (* ((volatile uint32_t *) (0x40047000 + 4164)))

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

//---  Register FCFG1: Flash Configuration Register 1
  #define SIM_FCFG1 (* ((volatile uint32_t *) (0x40047000 + 4172)))

  // Field FLASHDIS: Flash Disable
    const uint32_t SIM_FCFG1_FLASHDIS = 1U << 0 ;

  // Field FLASHDOZE: Flash Doze
    const uint32_t SIM_FCFG1_FLASHDOZE = 1U << 1 ;

  // Field DEPART: FlexNVM partition
    inline uint32_t SIM_FCFG1_DEPART (const uint32_t inValue) {return (inValue & 0xfU) << 8 ; }

  // Field EESIZE: EEPROM size
    inline uint32_t SIM_FCFG1_EESIZE (const uint32_t inValue) {return (inValue & 0xfU) << 16 ; }

  // Field PFSIZE: Program flash size
    inline uint32_t SIM_FCFG1_PFSIZE (const uint32_t inValue) {return (inValue & 0xfU) << 24 ; }

  // Field NVMSIZE: FlexNVM size
    inline uint32_t SIM_FCFG1_NVMSIZE (const uint32_t inValue) {return (inValue & 0xfU) << 28 ; }

//---  Register FCFG2: Flash Configuration Register 2
  #define SIM_FCFG2 (* ((const volatile uint32_t *) (0x40047000 + 4176)))

  // Field MAXADDR1: Max address block 1
    inline uint32_t SIM_FCFG2_MAXADDR1 (const uint32_t inValue) {return (inValue & 0x7fU) << 16 ; }

  // Field PFLSH: Program flash only
    const uint32_t SIM_FCFG2_PFLSH = 1U << 23 ;

  // Field MAXADDR0: Max address block 0
    inline uint32_t SIM_FCFG2_MAXADDR0 (const uint32_t inValue) {return (inValue & 0x7fU) << 24 ; }

//---  Register UIDH: Unique Identification Register High
  #define SIM_UIDH (* ((const volatile uint32_t *) (0x40047000 + 4180)))

  // Field UID: Unique Identification
    inline uint32_t SIM_UIDH_UID (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register UIDMH: Unique Identification Register Mid-High
  #define SIM_UIDMH (* ((const volatile uint32_t *) (0x40047000 + 4184)))

  // Field UID: Unique Identification
    inline uint32_t SIM_UIDMH_UID (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register UIDML: Unique Identification Register Mid Low
  #define SIM_UIDML (* ((const volatile uint32_t *) (0x40047000 + 4188)))

  // Field UID: Unique Identification
    inline uint32_t SIM_UIDML_UID (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register UIDL: Unique Identification Register Low
  #define SIM_UIDL (* ((const volatile uint32_t *) (0x40047000 + 4192)))

  // Field UID: Unique Identification
    inline uint32_t SIM_UIDL_UID (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//------------------------------------------------------------------------------
// Peripheral SMC: System Mode Controller
//------------------------------------------------------------------------------

//---  Register PMPROT: Power Mode Protection register
  #define SMC_PMPROT (* ((volatile uint8_t *) (0x4007e000 + 0)))

  // Field AVLLS: Allow Very-Low-Leakage Stop Mode
    const uint8_t SMC_PMPROT_AVLLS = 1U << 1 ;

  // Field ALLS: Allow Low-Leakage Stop Mode
    const uint8_t SMC_PMPROT_ALLS = 1U << 3 ;

  // Field AVLP: Allow Very-Low-Power Modes
    const uint8_t SMC_PMPROT_AVLP = 1U << 5 ;

//---  Register PMCTRL: Power Mode Control register
  #define SMC_PMCTRL (* ((volatile uint8_t *) (0x4007e000 + 1)))

  // Field STOPM: Stop Mode Control
    inline uint8_t SMC_PMCTRL_STOPM (const uint8_t inValue) {return (inValue & 0x7U) << 0 ; }

  // Field STOPA: Stop Aborted
    const uint8_t SMC_PMCTRL_STOPA = 1U << 3 ;

  // Field RUNM: Run Mode Control
    inline uint8_t SMC_PMCTRL_RUNM (const uint8_t inValue) {return (inValue & 0x3U) << 5 ; }

  // Field LPWUI: Low-Power Wake Up On Interrupt
    const uint8_t SMC_PMCTRL_LPWUI = 1U << 7 ;

//---  Register VLLSCTRL: VLLS Control register
  #define SMC_VLLSCTRL (* ((volatile uint8_t *) (0x4007e000 + 2)))

  // Field VLLSM: VLLS Mode Control
    inline uint8_t SMC_VLLSCTRL_VLLSM (const uint8_t inValue) {return (inValue & 0x7U) << 0 ; }

  // Field PORPO: POR Power Option
    const uint8_t SMC_VLLSCTRL_PORPO = 1U << 5 ;

//---  Register PMSTAT: Power Mode Status register
  #define SMC_PMSTAT (* ((const volatile uint8_t *) (0x4007e000 + 3)))

  // Field PMSTAT: When debug is enabled, the PMSTAT will not update to STOP or VLPS
    inline uint8_t SMC_PMSTAT_PMSTAT (const uint8_t inValue) {return (inValue & 0x7fU) << 0 ; }

//------------------------------------------------------------------------------
// PERIPHERAL GROUP: SPI
//        SPI0 at 0x4002c000
//        SPI1 at 0x4002d000
//        SPI2 at 0x400ac000
//------------------------------------------------------------------------------

static const uint32_t kBaseAddress_SPI [3] = {0x4002c000, 0x4002d000, 0x400ac000} ;

//------------------------------------------------------------------------------

//---  Register MCR: Module Configuration Register
  #define SPI_MCR(group) (* ((volatile uint32_t *) (kBaseAddress_MCR [group] + 0x0)))
  #define SPI0_MCR (* ((volatile uint32_t *) (0x4002c000 + 0x0)))
  #define SPI1_MCR (* ((volatile uint32_t *) (0x4002d000 + 0x0)))
  #define SPI2_MCR (* ((volatile uint32_t *) (0x400ac000 + 0x0)))

  // Field HALT: Halt
    const uint32_t SPI_MCR_HALT = 1U << 0 ;

  // Field SMPL_PT: Sample Point
    inline uint32_t SPI_MCR_SMPL_PT (const uint32_t inValue) {return (inValue & 0x3U) << 8 ; }

  // Field CLR_RXF: Flushes the RX FIFO
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

  // Field ROOE: Receive FIFO Overflow Overwrite Enable
    const uint32_t SPI_MCR_ROOE = 1U << 24 ;

  // Field PCSSE: Peripheral Chip Select Strobe Enable
    const uint32_t SPI_MCR_PCSSE = 1U << 25 ;

  // Field MTFE: Modified Timing Format Enable
    const uint32_t SPI_MCR_MTFE = 1U << 26 ;

  // Field FRZ: Freeze
    const uint32_t SPI_MCR_FRZ = 1U << 27 ;

  // Field DCONF: SPI Configuration.
    inline uint32_t SPI_MCR_DCONF (const uint32_t inValue) {return (inValue & 0x3U) << 28 ; }

  // Field CONT_SCKE: Continuous SCK Enable
    const uint32_t SPI_MCR_CONT_SCKE = 1U << 30 ;

  // Field MSTR: Master/Slave Mode Select
    const uint32_t SPI_MCR_MSTR = 1U << 31 ;

//---  Register TCR: Transfer Count Register
  #define SPI_TCR(group) (* ((volatile uint32_t *) (kBaseAddress_TCR [group] + 0x8)))
  #define SPI0_TCR (* ((volatile uint32_t *) (0x4002c000 + 0x8)))
  #define SPI1_TCR (* ((volatile uint32_t *) (0x4002d000 + 0x8)))
  #define SPI2_TCR (* ((volatile uint32_t *) (0x400ac000 + 0x8)))

  // Field SPI_TCNT: SPI Transfer Counter
    inline uint32_t SPI_TCR_SPI_TCNT (const uint32_t inValue) {return (inValue & 0xffffU) << 16 ; }

//---  Registers CTAR(0,1): Clock and Transfer Attributes Register (In Master Mode)
  #define SPI_CTAR(group,idx) (* ((volatile uint32_t *) (kBaseAddress_CTAR [group] + 0xc + (idx) * 0x4)))
  #define SPI0_CTAR(idx) (* ((volatile uint32_t *) (0x4002c000 + 0xc + (idx) * 0x4)))
  #define SPI1_CTAR(idx) (* ((volatile uint32_t *) (0x4002d000 + 0xc + (idx) * 0x4)))
  #define SPI2_CTAR(idx) (* ((volatile uint32_t *) (0x400ac000 + 0xc + (idx) * 0x4)))
  #define SPI0_CTAR0 (* ((volatile uint32_t *) (0x4002c000 + 0xc + 0 * 0x4)))
  #define SPI1_CTAR0 (* ((volatile uint32_t *) (0x4002d000 + 0xc + 0 * 0x4)))
  #define SPI2_CTAR0 (* ((volatile uint32_t *) (0x400ac000 + 0xc + 0 * 0x4)))
  #define SPI0_CTAR1 (* ((volatile uint32_t *) (0x4002c000 + 0xc + 1 * 0x4)))
  #define SPI1_CTAR1 (* ((volatile uint32_t *) (0x4002d000 + 0xc + 1 * 0x4)))
  #define SPI2_CTAR1 (* ((volatile uint32_t *) (0x400ac000 + 0xc + 1 * 0x4)))

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

  // Field LSBFE: LSB First
    const uint32_t SPI_CTAR_LSBFE = 1U << 24 ;

  // Field CPHA: Clock Phase
    const uint32_t SPI_CTAR_CPHA = 1U << 25 ;

  // Field CPOL: Clock Polarity
    const uint32_t SPI_CTAR_CPOL = 1U << 26 ;

  // Field FMSZ: Frame Size
    inline uint32_t SPI_CTAR_FMSZ (const uint32_t inValue) {return (inValue & 0xfU) << 27 ; }

  // Field DBR: Double Baud Rate
    const uint32_t SPI_CTAR_DBR = 1U << 31 ;

//---  Register CTAR_SLAVE: Clock and Transfer Attributes Register (In Slave Mode)
  #define SPI_CTAR_SLAVE(group) (* ((volatile uint32_t *) (kBaseAddress_CTAR_SLAVE [group] + 0xc)))
  #define SPI0_CTAR_SLAVE (* ((volatile uint32_t *) (0x4002c000 + 0xc)))
  #define SPI1_CTAR_SLAVE (* ((volatile uint32_t *) (0x4002d000 + 0xc)))
  #define SPI2_CTAR_SLAVE (* ((volatile uint32_t *) (0x400ac000 + 0xc)))

  // Field CPHA: Clock Phase
    const uint32_t SPI_CTAR_SLAVE_CPHA = 1U << 25 ;

  // Field CPOL: Clock Polarity
    const uint32_t SPI_CTAR_SLAVE_CPOL = 1U << 26 ;

  // Field FMSZ: Frame Size
    inline uint32_t SPI_CTAR_SLAVE_FMSZ (const uint32_t inValue) {return (inValue & 0x1fU) << 27 ; }

//---  Register SR: Status Register
  #define SPI_SR(group) (* ((volatile uint32_t *) (kBaseAddress_SR [group] + 0x2c)))
  #define SPI0_SR (* ((volatile uint32_t *) (0x4002c000 + 0x2c)))
  #define SPI1_SR (* ((volatile uint32_t *) (0x4002d000 + 0x2c)))
  #define SPI2_SR (* ((volatile uint32_t *) (0x400ac000 + 0x2c)))

  // Field POPNXTPTR: Pop Next Pointer
    inline uint32_t SPI_SR_POPNXTPTR (const uint32_t inValue) {return (inValue & 0xfU) << 0 ; }

  // Field RXCTR: RX FIFO Counter
    inline uint32_t SPI_SR_RXCTR (const uint32_t inValue) {return (inValue & 0xfU) << 4 ; }

  // Field TXNXTPTR: Transmit Next Pointer
    inline uint32_t SPI_SR_TXNXTPTR (const uint32_t inValue) {return (inValue & 0xfU) << 8 ; }

  // Field TXCTR: TX FIFO Counter
    inline uint32_t SPI_SR_TXCTR (const uint32_t inValue) {return (inValue & 0xfU) << 12 ; }

  // Field RFDF: Receive FIFO Drain Flag
    const uint32_t SPI_SR_RFDF = 1U << 17 ;

  // Field RFOF: Receive FIFO Overflow Flag
    const uint32_t SPI_SR_RFOF = 1U << 19 ;

  // Field TFFF: Transmit FIFO Fill Flag
    const uint32_t SPI_SR_TFFF = 1U << 25 ;

  // Field TFUF: Transmit FIFO Underflow Flag
    const uint32_t SPI_SR_TFUF = 1U << 27 ;

  // Field EOQF: End of Queue Flag
    const uint32_t SPI_SR_EOQF = 1U << 28 ;

  // Field TXRXS: TX and RX Status
    const uint32_t SPI_SR_TXRXS = 1U << 30 ;

  // Field TCF: Transfer Complete Flag
    const uint32_t SPI_SR_TCF = 1U << 31 ;

//---  Register RSER: DMA/Interrupt Request Select and Enable Register
  #define SPI_RSER(group) (* ((volatile uint32_t *) (kBaseAddress_RSER [group] + 0x30)))
  #define SPI0_RSER (* ((volatile uint32_t *) (0x4002c000 + 0x30)))
  #define SPI1_RSER (* ((volatile uint32_t *) (0x4002d000 + 0x30)))
  #define SPI2_RSER (* ((volatile uint32_t *) (0x400ac000 + 0x30)))

  // Field RFDF_DIRS: Receive FIFO Drain DMA or Interrupt Request Select
    const uint32_t SPI_RSER_RFDF_DIRS = 1U << 16 ;

  // Field RFDF_RE: Receive FIFO Drain Request Enable
    const uint32_t SPI_RSER_RFDF_RE = 1U << 17 ;

  // Field RFOF_RE: Receive FIFO Overflow Request Enable
    const uint32_t SPI_RSER_RFOF_RE = 1U << 19 ;

  // Field TFFF_DIRS: Transmit FIFO Fill DMA or Interrupt Request Select
    const uint32_t SPI_RSER_TFFF_DIRS = 1U << 24 ;

  // Field TFFF_RE: Transmit FIFO Fill Request Enable
    const uint32_t SPI_RSER_TFFF_RE = 1U << 25 ;

  // Field TFUF_RE: Transmit FIFO Underflow Request Enable
    const uint32_t SPI_RSER_TFUF_RE = 1U << 27 ;

  // Field EOQF_RE: Finished Request Enable
    const uint32_t SPI_RSER_EOQF_RE = 1U << 28 ;

  // Field TCF_RE: Transmission Complete Request Enable
    const uint32_t SPI_RSER_TCF_RE = 1U << 31 ;

//---  Register PUSHR: PUSH TX FIFO Register In Master Mode
  #define SPI_PUSHR(group) (* ((volatile uint32_t *) (kBaseAddress_PUSHR [group] + 0x34)))
  #define SPI0_PUSHR (* ((volatile uint32_t *) (0x4002c000 + 0x34)))
  #define SPI1_PUSHR (* ((volatile uint32_t *) (0x4002d000 + 0x34)))
  #define SPI2_PUSHR (* ((volatile uint32_t *) (0x400ac000 + 0x34)))

  // Field TXDATA: Transmit Data
    inline uint32_t SPI_PUSHR_TXDATA (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

  // Field PCS: Select which PCS signals are to be asserted for the transfer
    inline uint32_t SPI_PUSHR_PCS (const uint32_t inValue) {return (inValue & 0x3fU) << 16 ; }

  // Field CTCNT: Clear Transfer Counter
    const uint32_t SPI_PUSHR_CTCNT = 1U << 26 ;

  // Field EOQ: End Of Queue
    const uint32_t SPI_PUSHR_EOQ = 1U << 27 ;

  // Field CTAS: Clock and Transfer Attributes Select
    inline uint32_t SPI_PUSHR_CTAS (const uint32_t inValue) {return (inValue & 0x7U) << 28 ; }

  // Field CONT: Continuous Peripheral Chip Select Enable
    const uint32_t SPI_PUSHR_CONT = 1U << 31 ;

//---  Register PUSHR_SLAVE: PUSH TX FIFO Register In Slave Mode
  #define SPI_PUSHR_SLAVE(group) (* ((volatile uint32_t *) (kBaseAddress_PUSHR_SLAVE [group] + 0x34)))
  #define SPI0_PUSHR_SLAVE (* ((volatile uint32_t *) (0x4002c000 + 0x34)))
  #define SPI1_PUSHR_SLAVE (* ((volatile uint32_t *) (0x4002d000 + 0x34)))
  #define SPI2_PUSHR_SLAVE (* ((volatile uint32_t *) (0x400ac000 + 0x34)))

  // Field TXDATA: Transmit Data
    inline uint32_t SPI_PUSHR_SLAVE_TXDATA (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Register POPR: POP RX FIFO Register
  #define SPI_POPR(group) (* ((volatile uint32_t *) (kBaseAddress_POPR [group] + 0x38)))
  #define SPI0_POPR (* ((const volatile uint32_t *) (0x4002c000 + 0x38)))
  #define SPI1_POPR (* ((const volatile uint32_t *) (0x4002d000 + 0x38)))
  #define SPI2_POPR (* ((const volatile uint32_t *) (0x400ac000 + 0x38)))

  // Field RXDATA: Received Data
    inline uint32_t SPI_POPR_RXDATA (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//---  Registers TXFR(0,1,2,3): Transmit FIFO Registers
  #define SPI_TXFR(group,idx) (* ((volatile uint32_t *) (kBaseAddress_TXFR [group] + 0x3c + (idx) * 0x4)))
  #define SPI0_TXFR(idx) (* ((volatile uint32_t *) (0x4002c000 + 0x3c + (idx) * 0x4)))
  #define SPI1_TXFR(idx) (* ((volatile uint32_t *) (0x4002d000 + 0x3c + (idx) * 0x4)))
  #define SPI2_TXFR(idx) (* ((volatile uint32_t *) (0x400ac000 + 0x3c + (idx) * 0x4)))
  #define SPI0_TXFR0 (* ((const volatile uint32_t *) (0x4002c000 + 0x3c + 0 * 0x4)))
  #define SPI1_TXFR0 (* ((const volatile uint32_t *) (0x4002d000 + 0x3c + 0 * 0x4)))
  #define SPI2_TXFR0 (* ((const volatile uint32_t *) (0x400ac000 + 0x3c + 0 * 0x4)))
  #define SPI0_TXFR1 (* ((const volatile uint32_t *) (0x4002c000 + 0x3c + 1 * 0x4)))
  #define SPI1_TXFR1 (* ((const volatile uint32_t *) (0x4002d000 + 0x3c + 1 * 0x4)))
  #define SPI2_TXFR1 (* ((const volatile uint32_t *) (0x400ac000 + 0x3c + 1 * 0x4)))
  #define SPI0_TXFR2 (* ((const volatile uint32_t *) (0x4002c000 + 0x3c + 2 * 0x4)))
  #define SPI1_TXFR2 (* ((const volatile uint32_t *) (0x4002d000 + 0x3c + 2 * 0x4)))
  #define SPI2_TXFR2 (* ((const volatile uint32_t *) (0x400ac000 + 0x3c + 2 * 0x4)))
  #define SPI0_TXFR3 (* ((const volatile uint32_t *) (0x4002c000 + 0x3c + 3 * 0x4)))
  #define SPI1_TXFR3 (* ((const volatile uint32_t *) (0x4002d000 + 0x3c + 3 * 0x4)))
  #define SPI2_TXFR3 (* ((const volatile uint32_t *) (0x400ac000 + 0x3c + 3 * 0x4)))

  // Field TXDATA: Transmit Data
    inline uint32_t SPI_TXFR_TXDATA (const uint32_t inValue) {return (inValue & 0xffffU) << 0 ; }

  // Field TXCMD_TXDATA: Transmit Command or Transmit Data
    inline uint32_t SPI_TXFR_TXCMD_TXDATA (const uint32_t inValue) {return (inValue & 0xffffU) << 16 ; }

//---  Registers RXFR(0,1,2,3): Receive FIFO Registers
  #define SPI_RXFR(group,idx) (* ((volatile uint32_t *) (kBaseAddress_RXFR [group] + 0x7c + (idx) * 0x4)))
  #define SPI0_RXFR(idx) (* ((volatile uint32_t *) (0x4002c000 + 0x7c + (idx) * 0x4)))
  #define SPI1_RXFR(idx) (* ((volatile uint32_t *) (0x4002d000 + 0x7c + (idx) * 0x4)))
  #define SPI2_RXFR(idx) (* ((volatile uint32_t *) (0x400ac000 + 0x7c + (idx) * 0x4)))
  #define SPI0_RXFR0 (* ((const volatile uint32_t *) (0x4002c000 + 0x7c + 0 * 0x4)))
  #define SPI1_RXFR0 (* ((const volatile uint32_t *) (0x4002d000 + 0x7c + 0 * 0x4)))
  #define SPI2_RXFR0 (* ((const volatile uint32_t *) (0x400ac000 + 0x7c + 0 * 0x4)))
  #define SPI0_RXFR1 (* ((const volatile uint32_t *) (0x4002c000 + 0x7c + 1 * 0x4)))
  #define SPI1_RXFR1 (* ((const volatile uint32_t *) (0x4002d000 + 0x7c + 1 * 0x4)))
  #define SPI2_RXFR1 (* ((const volatile uint32_t *) (0x400ac000 + 0x7c + 1 * 0x4)))
  #define SPI0_RXFR2 (* ((const volatile uint32_t *) (0x4002c000 + 0x7c + 2 * 0x4)))
  #define SPI1_RXFR2 (* ((const volatile uint32_t *) (0x4002d000 + 0x7c + 2 * 0x4)))
  #define SPI2_RXFR2 (* ((const volatile uint32_t *) (0x400ac000 + 0x7c + 2 * 0x4)))
  #define SPI0_RXFR3 (* ((const volatile uint32_t *) (0x4002c000 + 0x7c + 3 * 0x4)))
  #define SPI1_RXFR3 (* ((const volatile uint32_t *) (0x4002d000 + 0x7c + 3 * 0x4)))
  #define SPI2_RXFR3 (* ((const volatile uint32_t *) (0x400ac000 + 0x7c + 3 * 0x4)))

  // Field RXDATA: Receive Data
    inline uint32_t SPI_RXFR_RXDATA (const uint32_t inValue) {return (inValue & 0xffffffffU) << 0 ; }

//------------------------------------------------------------------------------
// Peripheral SYST: System Timer
//------------------------------------------------------------------------------

//---  Register CSR: SysTick Control and Status
  #define SYST_CSR (* ((volatile uint32_t *) (0xe000e000 + 16)))

  // Field ENABLE: Enable the Counter
    const uint32_t SYST_CSR_ENABLE = 1U << 0 ;

  // Field TICKINT: Enables SysTick exception request
    const uint32_t SYST_CSR_TICKINT = 1U << 1 ;

  // Field CLKSOURCE: Clock Source Selection
    const uint32_t SYST_CSR_CLKSOURCE = 1U << 2 ;

  // Field COUNTFLAG: Returns 1 if timer counted to 0 since last time this was read
    const uint32_t SYST_CSR_COUNTFLAG = 1U << 16 ;

//---  Register RVR: SysTick Reload Value Register
  #define SYST_RVR (* ((volatile uint32_t *) (0xe000e000 + 20)))

//---  Register CVR: SysTick Current Value Register
  #define SYST_CVR (* ((volatile uint32_t *) (0xe000e000 + 24)))

//---  Register CALIB: SysTick Calibration Value Register
  #define SYST_CALIB (* ((const volatile uint32_t *) (0xe000e000 + 28)))

//------------------------------------------------------------------------------
// PERIPHERAL GROUP: UART
//        UART0 at 0x4006a000
//        UART1 at 0x4006b000
//        UART2 at 0x4006c000
//        UART3 at 0x4006d000
//        UART4 at 0x400ea000
//        UART5 at 0x400eb000
//------------------------------------------------------------------------------

static const uint32_t kBaseAddress_UART [6] = {0x4006a000, 0x4006b000, 0x4006c000, 0x4006d000, 0x400ea000, 0x400eb000} ;

//------------------------------------------------------------------------------

//---  Register BDH: UART Baud Rate Registers: High
  #define UART_BDH(group) (* ((volatile uint8_t *) (kBaseAddress_BDH [group] + 0x0)))
  #define UART0_BDH (* ((volatile uint8_t *) (0x4006a000 + 0x0)))
  #define UART1_BDH (* ((volatile uint8_t *) (0x4006b000 + 0x0)))
  #define UART2_BDH (* ((volatile uint8_t *) (0x4006c000 + 0x0)))
  #define UART3_BDH (* ((volatile uint8_t *) (0x4006d000 + 0x0)))
  #define UART4_BDH (* ((volatile uint8_t *) (0x400ea000 + 0x0)))
  #define UART5_BDH (* ((volatile uint8_t *) (0x400eb000 + 0x0)))

  // Field SBR: UART Baud Rate Bits
    inline uint8_t UART_BDH_SBR (const uint8_t inValue) {return (inValue & 0x1fU) << 0 ; }

  // Field SBNS: Stop Bit Number Select
    const uint8_t UART_BDH_SBNS = 1U << 5 ;

  // Field RXEDGIE: RxD Input Active Edge Interrupt Enable
    const uint8_t UART_BDH_RXEDGIE = 1U << 6 ;

  // Field LBKDIE: LIN Break Detect Interrupt or DMA Request Enable
    const uint8_t UART_BDH_LBKDIE = 1U << 7 ;

//---  Register BDL: UART Baud Rate Registers: Low
  #define UART_BDL(group) (* ((volatile uint8_t *) (kBaseAddress_BDL [group] + 0x1)))
  #define UART0_BDL (* ((volatile uint8_t *) (0x4006a000 + 0x1)))
  #define UART1_BDL (* ((volatile uint8_t *) (0x4006b000 + 0x1)))
  #define UART2_BDL (* ((volatile uint8_t *) (0x4006c000 + 0x1)))
  #define UART3_BDL (* ((volatile uint8_t *) (0x4006d000 + 0x1)))
  #define UART4_BDL (* ((volatile uint8_t *) (0x400ea000 + 0x1)))
  #define UART5_BDL (* ((volatile uint8_t *) (0x400eb000 + 0x1)))

  // Field SBR: UART Baud Rate Bits
    inline uint8_t UART_BDL_SBR (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register C1: UART Control Register 1
  #define UART_C1(group) (* ((volatile uint8_t *) (kBaseAddress_C1 [group] + 0x2)))
  #define UART0_C1 (* ((volatile uint8_t *) (0x4006a000 + 0x2)))
  #define UART1_C1 (* ((volatile uint8_t *) (0x4006b000 + 0x2)))
  #define UART2_C1 (* ((volatile uint8_t *) (0x4006c000 + 0x2)))
  #define UART3_C1 (* ((volatile uint8_t *) (0x4006d000 + 0x2)))
  #define UART4_C1 (* ((volatile uint8_t *) (0x400ea000 + 0x2)))
  #define UART5_C1 (* ((volatile uint8_t *) (0x400eb000 + 0x2)))

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
  #define UART5_C2 (* ((volatile uint8_t *) (0x400eb000 + 0x3)))

  // Field SBK: Send Break
    const uint8_t UART_C2_SBK = 1U << 0 ;

  // Field RWU: Receiver Wakeup Control
    const uint8_t UART_C2_RWU = 1U << 1 ;

  // Field RE: Receiver Enable
    const uint8_t UART_C2_RE = 1U << 2 ;

  // Field TE: Transmitter Enable
    const uint8_t UART_C2_TE = 1U << 3 ;

  // Field ILIE: Idle Line Interrupt DMA Transfer Enable
    const uint8_t UART_C2_ILIE = 1U << 4 ;

  // Field RIE: Receiver Full Interrupt or DMA Transfer Enable
    const uint8_t UART_C2_RIE = 1U << 5 ;

  // Field TCIE: Transmission Complete Interrupt or DMA Transfer Enable
    const uint8_t UART_C2_TCIE = 1U << 6 ;

  // Field TIE: Transmitter Interrupt or DMA Transfer Enable.
    const uint8_t UART_C2_TIE = 1U << 7 ;

//---  Register S1: UART Status Register 1
  #define UART_S1(group) (* ((volatile uint8_t *) (kBaseAddress_S1 [group] + 0x4)))
  #define UART0_S1 (* ((const volatile uint8_t *) (0x4006a000 + 0x4)))
  #define UART1_S1 (* ((const volatile uint8_t *) (0x4006b000 + 0x4)))
  #define UART2_S1 (* ((const volatile uint8_t *) (0x4006c000 + 0x4)))
  #define UART3_S1 (* ((const volatile uint8_t *) (0x4006d000 + 0x4)))
  #define UART4_S1 (* ((const volatile uint8_t *) (0x400ea000 + 0x4)))
  #define UART5_S1 (* ((const volatile uint8_t *) (0x400eb000 + 0x4)))

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
  #define UART5_S2 (* ((volatile uint8_t *) (0x400eb000 + 0x5)))

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
  #define UART5_C3 (* ((volatile uint8_t *) (0x400eb000 + 0x6)))

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
  #define UART5_D (* ((volatile uint8_t *) (0x400eb000 + 0x7)))

  // Field RT: Reads return the contents of the read-only receive data register and writes go to the write-only transmit data register
    inline uint8_t UART_D_RT (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register MA1: UART Match Address Registers 1
  #define UART_MA1(group) (* ((volatile uint8_t *) (kBaseAddress_MA1 [group] + 0x8)))
  #define UART0_MA1 (* ((volatile uint8_t *) (0x4006a000 + 0x8)))
  #define UART1_MA1 (* ((volatile uint8_t *) (0x4006b000 + 0x8)))
  #define UART2_MA1 (* ((volatile uint8_t *) (0x4006c000 + 0x8)))
  #define UART3_MA1 (* ((volatile uint8_t *) (0x4006d000 + 0x8)))
  #define UART4_MA1 (* ((volatile uint8_t *) (0x400ea000 + 0x8)))
  #define UART5_MA1 (* ((volatile uint8_t *) (0x400eb000 + 0x8)))

  // Field MA: Match Address
    inline uint8_t UART_MA1_MA (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register MA2: UART Match Address Registers 2
  #define UART_MA2(group) (* ((volatile uint8_t *) (kBaseAddress_MA2 [group] + 0x9)))
  #define UART0_MA2 (* ((volatile uint8_t *) (0x4006a000 + 0x9)))
  #define UART1_MA2 (* ((volatile uint8_t *) (0x4006b000 + 0x9)))
  #define UART2_MA2 (* ((volatile uint8_t *) (0x4006c000 + 0x9)))
  #define UART3_MA2 (* ((volatile uint8_t *) (0x4006d000 + 0x9)))
  #define UART4_MA2 (* ((volatile uint8_t *) (0x400ea000 + 0x9)))
  #define UART5_MA2 (* ((volatile uint8_t *) (0x400eb000 + 0x9)))

  // Field MA: Match Address
    inline uint8_t UART_MA2_MA (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register C4: UART Control Register 4
  #define UART_C4(group) (* ((volatile uint8_t *) (kBaseAddress_C4 [group] + 0xa)))
  #define UART0_C4 (* ((volatile uint8_t *) (0x4006a000 + 0xa)))
  #define UART1_C4 (* ((volatile uint8_t *) (0x4006b000 + 0xa)))
  #define UART2_C4 (* ((volatile uint8_t *) (0x4006c000 + 0xa)))
  #define UART3_C4 (* ((volatile uint8_t *) (0x4006d000 + 0xa)))
  #define UART4_C4 (* ((volatile uint8_t *) (0x400ea000 + 0xa)))
  #define UART5_C4 (* ((volatile uint8_t *) (0x400eb000 + 0xa)))

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
  #define UART5_C5 (* ((volatile uint8_t *) (0x400eb000 + 0xb)))

  // Field LBKDDMAS: LIN Break Detect DMA Select Bit
    const uint8_t UART_C5_LBKDDMAS = 1U << 3 ;

  // Field ILDMAS: Idle Line DMA Select
    const uint8_t UART_C5_ILDMAS = 1U << 4 ;

  // Field RDMAS: Receiver Full DMA Select
    const uint8_t UART_C5_RDMAS = 1U << 5 ;

  // Field TCDMAS: Transmission Complete DMA Select
    const uint8_t UART_C5_TCDMAS = 1U << 6 ;

  // Field TDMAS: Transmitter DMA Select
    const uint8_t UART_C5_TDMAS = 1U << 7 ;

//---  Register ED: UART Extended Data Register
  #define UART_ED(group) (* ((volatile uint8_t *) (kBaseAddress_ED [group] + 0xc)))
  #define UART0_ED (* ((const volatile uint8_t *) (0x4006a000 + 0xc)))
  #define UART1_ED (* ((const volatile uint8_t *) (0x4006b000 + 0xc)))
  #define UART2_ED (* ((const volatile uint8_t *) (0x4006c000 + 0xc)))
  #define UART3_ED (* ((const volatile uint8_t *) (0x4006d000 + 0xc)))
  #define UART4_ED (* ((const volatile uint8_t *) (0x400ea000 + 0xc)))
  #define UART5_ED (* ((const volatile uint8_t *) (0x400eb000 + 0xc)))

  // Field PARITYE: The current received dataword contained in D and C3[R8] was received with a parity error.
    const uint8_t UART_ED_PARITYE = 1U << 6 ;

  // Field NOISY: The current received dataword contained in D and C3[R8] was received with noise.
    const uint8_t UART_ED_NOISY = 1U << 7 ;

//---  Register MODEM: UART Modem Register
  #define UART_MODEM(group) (* ((volatile uint8_t *) (kBaseAddress_MODEM [group] + 0xd)))
  #define UART0_MODEM (* ((volatile uint8_t *) (0x4006a000 + 0xd)))
  #define UART1_MODEM (* ((volatile uint8_t *) (0x4006b000 + 0xd)))
  #define UART2_MODEM (* ((volatile uint8_t *) (0x4006c000 + 0xd)))
  #define UART3_MODEM (* ((volatile uint8_t *) (0x4006d000 + 0xd)))
  #define UART4_MODEM (* ((volatile uint8_t *) (0x400ea000 + 0xd)))
  #define UART5_MODEM (* ((volatile uint8_t *) (0x400eb000 + 0xd)))

  // Field TXCTSE: Transmitter clear-to-send enable
    const uint8_t UART_MODEM_TXCTSE = 1U << 0 ;

  // Field TXRTSE: Transmitter request-to-send enable
    const uint8_t UART_MODEM_TXRTSE = 1U << 1 ;

  // Field TXRTSPOL: Transmitter request-to-send polarity
    const uint8_t UART_MODEM_TXRTSPOL = 1U << 2 ;

  // Field RXRTSE: Receiver request-to-send enable
    const uint8_t UART_MODEM_RXRTSE = 1U << 3 ;

//---  Register IR: UART Infrared Register
  #define UART_IR(group) (* ((volatile uint8_t *) (kBaseAddress_IR [group] + 0xe)))
  #define UART0_IR (* ((volatile uint8_t *) (0x4006a000 + 0xe)))
  #define UART1_IR (* ((volatile uint8_t *) (0x4006b000 + 0xe)))
  #define UART2_IR (* ((volatile uint8_t *) (0x4006c000 + 0xe)))
  #define UART3_IR (* ((volatile uint8_t *) (0x4006d000 + 0xe)))
  #define UART4_IR (* ((volatile uint8_t *) (0x400ea000 + 0xe)))
  #define UART5_IR (* ((volatile uint8_t *) (0x400eb000 + 0xe)))

  // Field TNP: Transmitter narrow pulse
    inline uint8_t UART_IR_TNP (const uint8_t inValue) {return (inValue & 0x3U) << 0 ; }

  // Field IREN: Infrared enable
    const uint8_t UART_IR_IREN = 1U << 2 ;

//---  Register PFIFO: UART FIFO Parameters
  #define UART_PFIFO(group) (* ((volatile uint8_t *) (kBaseAddress_PFIFO [group] + 0x10)))
  #define UART0_PFIFO (* ((volatile uint8_t *) (0x4006a000 + 0x10)))
  #define UART1_PFIFO (* ((volatile uint8_t *) (0x4006b000 + 0x10)))
  #define UART2_PFIFO (* ((volatile uint8_t *) (0x4006c000 + 0x10)))
  #define UART3_PFIFO (* ((volatile uint8_t *) (0x4006d000 + 0x10)))
  #define UART4_PFIFO (* ((volatile uint8_t *) (0x400ea000 + 0x10)))
  #define UART5_PFIFO (* ((volatile uint8_t *) (0x400eb000 + 0x10)))

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
  #define UART5_CFIFO (* ((volatile uint8_t *) (0x400eb000 + 0x11)))

  // Field RXUFE: Receive FIFO Underflow Interrupt Enable
    const uint8_t UART_CFIFO_RXUFE = 1U << 0 ;

  // Field TXOFE: Transmit FIFO Overflow Interrupt Enable
    const uint8_t UART_CFIFO_TXOFE = 1U << 1 ;

  // Field RXOFE: Receive FIFO Overflow Interrupt Enable
    const uint8_t UART_CFIFO_RXOFE = 1U << 2 ;

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
  #define UART5_SFIFO (* ((volatile uint8_t *) (0x400eb000 + 0x12)))

  // Field RXUF: Receiver Buffer Underflow Flag
    const uint8_t UART_SFIFO_RXUF = 1U << 0 ;

  // Field TXOF: Transmitter Buffer Overflow Flag
    const uint8_t UART_SFIFO_TXOF = 1U << 1 ;

  // Field RXOF: Receiver Buffer Overflow Flag
    const uint8_t UART_SFIFO_RXOF = 1U << 2 ;

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
  #define UART5_TWFIFO (* ((volatile uint8_t *) (0x400eb000 + 0x13)))

  // Field TXWATER: Transmit Watermark
    inline uint8_t UART_TWFIFO_TXWATER (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register TCFIFO: UART FIFO Transmit Count
  #define UART_TCFIFO(group) (* ((volatile uint8_t *) (kBaseAddress_TCFIFO [group] + 0x14)))
  #define UART0_TCFIFO (* ((const volatile uint8_t *) (0x4006a000 + 0x14)))
  #define UART1_TCFIFO (* ((const volatile uint8_t *) (0x4006b000 + 0x14)))
  #define UART2_TCFIFO (* ((const volatile uint8_t *) (0x4006c000 + 0x14)))
  #define UART3_TCFIFO (* ((const volatile uint8_t *) (0x4006d000 + 0x14)))
  #define UART4_TCFIFO (* ((const volatile uint8_t *) (0x400ea000 + 0x14)))
  #define UART5_TCFIFO (* ((const volatile uint8_t *) (0x400eb000 + 0x14)))

  // Field TXCOUNT: Transmit Counter
    inline uint8_t UART_TCFIFO_TXCOUNT (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register RWFIFO: UART FIFO Receive Watermark
  #define UART_RWFIFO(group) (* ((volatile uint8_t *) (kBaseAddress_RWFIFO [group] + 0x15)))
  #define UART0_RWFIFO (* ((volatile uint8_t *) (0x4006a000 + 0x15)))
  #define UART1_RWFIFO (* ((volatile uint8_t *) (0x4006b000 + 0x15)))
  #define UART2_RWFIFO (* ((volatile uint8_t *) (0x4006c000 + 0x15)))
  #define UART3_RWFIFO (* ((volatile uint8_t *) (0x4006d000 + 0x15)))
  #define UART4_RWFIFO (* ((volatile uint8_t *) (0x400ea000 + 0x15)))
  #define UART5_RWFIFO (* ((volatile uint8_t *) (0x400eb000 + 0x15)))

  // Field RXWATER: Receive Watermark
    inline uint8_t UART_RWFIFO_RXWATER (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register RCFIFO: UART FIFO Receive Count
  #define UART_RCFIFO(group) (* ((volatile uint8_t *) (kBaseAddress_RCFIFO [group] + 0x16)))
  #define UART0_RCFIFO (* ((const volatile uint8_t *) (0x4006a000 + 0x16)))
  #define UART1_RCFIFO (* ((const volatile uint8_t *) (0x4006b000 + 0x16)))
  #define UART2_RCFIFO (* ((const volatile uint8_t *) (0x4006c000 + 0x16)))
  #define UART3_RCFIFO (* ((const volatile uint8_t *) (0x4006d000 + 0x16)))
  #define UART4_RCFIFO (* ((const volatile uint8_t *) (0x400ea000 + 0x16)))
  #define UART5_RCFIFO (* ((const volatile uint8_t *) (0x400eb000 + 0x16)))

  // Field RXCOUNT: Receive Counter
    inline uint8_t UART_RCFIFO_RXCOUNT (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register C7816: UART 7816 Control Register
  #define UART_C7816(group) (* ((volatile uint8_t *) (kBaseAddress_C7816 [group] + 0x18)))
  #define UART0_C7816 (* ((volatile uint8_t *) (0x4006a000 + 0x18)))
  #define UART1_C7816 (* ((volatile uint8_t *) (0x4006b000 + 0x18)))
  #define UART2_C7816 (* ((volatile uint8_t *) (0x4006c000 + 0x18)))
  #define UART3_C7816 (* ((volatile uint8_t *) (0x4006d000 + 0x18)))
  #define UART4_C7816 (* ((volatile uint8_t *) (0x400ea000 + 0x18)))
  #define UART5_C7816 (* ((volatile uint8_t *) (0x400eb000 + 0x18)))

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

//---  Register IE7816: UART 7816 Interrupt Enable Register
  #define UART_IE7816(group) (* ((volatile uint8_t *) (kBaseAddress_IE7816 [group] + 0x19)))
  #define UART0_IE7816 (* ((volatile uint8_t *) (0x4006a000 + 0x19)))
  #define UART1_IE7816 (* ((volatile uint8_t *) (0x4006b000 + 0x19)))
  #define UART2_IE7816 (* ((volatile uint8_t *) (0x4006c000 + 0x19)))
  #define UART3_IE7816 (* ((volatile uint8_t *) (0x4006d000 + 0x19)))
  #define UART4_IE7816 (* ((volatile uint8_t *) (0x400ea000 + 0x19)))
  #define UART5_IE7816 (* ((volatile uint8_t *) (0x400eb000 + 0x19)))

  // Field RXTE: Receive Threshold Exceeded Interrupt Enable
    const uint8_t UART_IE7816_RXTE = 1U << 0 ;

  // Field TXTE: Transmit Threshold Exceeded Interrupt Enable
    const uint8_t UART_IE7816_TXTE = 1U << 1 ;

  // Field GTVE: Guard Timer Violated Interrupt Enable
    const uint8_t UART_IE7816_GTVE = 1U << 2 ;

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
  #define UART5_IS7816 (* ((volatile uint8_t *) (0x400eb000 + 0x1a)))

  // Field RXT: Receive Threshold Exceeded Interrupt
    const uint8_t UART_IS7816_RXT = 1U << 0 ;

  // Field TXT: Transmit Threshold Exceeded Interrupt
    const uint8_t UART_IS7816_TXT = 1U << 1 ;

  // Field GTV: Guard Timer Violated Interrupt
    const uint8_t UART_IS7816_GTV = 1U << 2 ;

  // Field INITD: Initial Character Detected Interrupt
    const uint8_t UART_IS7816_INITD = 1U << 4 ;

  // Field BWT: Block Wait Timer Interrupt
    const uint8_t UART_IS7816_BWT = 1U << 5 ;

  // Field CWT: Character Wait Timer Interrupt
    const uint8_t UART_IS7816_CWT = 1U << 6 ;

  // Field WT: Wait Timer Interrupt
    const uint8_t UART_IS7816_WT = 1U << 7 ;

//---  Register WP7816T0: UART 7816 Wait Parameter Register
  #define UART_WP7816T0(group) (* ((volatile uint8_t *) (kBaseAddress_WP7816T0 [group] + 0x1b)))
  #define UART0_WP7816T0 (* ((volatile uint8_t *) (0x4006a000 + 0x1b)))
  #define UART1_WP7816T0 (* ((volatile uint8_t *) (0x4006b000 + 0x1b)))
  #define UART2_WP7816T0 (* ((volatile uint8_t *) (0x4006c000 + 0x1b)))
  #define UART3_WP7816T0 (* ((volatile uint8_t *) (0x4006d000 + 0x1b)))
  #define UART4_WP7816T0 (* ((volatile uint8_t *) (0x400ea000 + 0x1b)))
  #define UART5_WP7816T0 (* ((volatile uint8_t *) (0x400eb000 + 0x1b)))

  // Field WI: Wait Time Integer (C7816[TTYPE] = 0)
    inline uint8_t UART_WP7816T0_WI (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register WP7816T1: UART 7816 Wait Parameter Register
  #define UART_WP7816T1(group) (* ((volatile uint8_t *) (kBaseAddress_WP7816T1 [group] + 0x1b)))
  #define UART0_WP7816T1 (* ((volatile uint8_t *) (0x4006a000 + 0x1b)))
  #define UART1_WP7816T1 (* ((volatile uint8_t *) (0x4006b000 + 0x1b)))
  #define UART2_WP7816T1 (* ((volatile uint8_t *) (0x4006c000 + 0x1b)))
  #define UART3_WP7816T1 (* ((volatile uint8_t *) (0x4006d000 + 0x1b)))
  #define UART4_WP7816T1 (* ((volatile uint8_t *) (0x400ea000 + 0x1b)))
  #define UART5_WP7816T1 (* ((volatile uint8_t *) (0x400eb000 + 0x1b)))

  // Field BWI: Block Wait Time Integer(C7816[TTYPE] = 1)
    inline uint8_t UART_WP7816T1_BWI (const uint8_t inValue) {return (inValue & 0xfU) << 0 ; }

  // Field CWI: Character Wait Time Integer (C7816[TTYPE] = 1)
    inline uint8_t UART_WP7816T1_CWI (const uint8_t inValue) {return (inValue & 0xfU) << 4 ; }

//---  Register WN7816: UART 7816 Wait N Register
  #define UART_WN7816(group) (* ((volatile uint8_t *) (kBaseAddress_WN7816 [group] + 0x1c)))
  #define UART0_WN7816 (* ((volatile uint8_t *) (0x4006a000 + 0x1c)))
  #define UART1_WN7816 (* ((volatile uint8_t *) (0x4006b000 + 0x1c)))
  #define UART2_WN7816 (* ((volatile uint8_t *) (0x4006c000 + 0x1c)))
  #define UART3_WN7816 (* ((volatile uint8_t *) (0x4006d000 + 0x1c)))
  #define UART4_WN7816 (* ((volatile uint8_t *) (0x400ea000 + 0x1c)))
  #define UART5_WN7816 (* ((volatile uint8_t *) (0x400eb000 + 0x1c)))

  // Field GTN: Guard Band N
    inline uint8_t UART_WN7816_GTN (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register WF7816: UART 7816 Wait FD Register
  #define UART_WF7816(group) (* ((volatile uint8_t *) (kBaseAddress_WF7816 [group] + 0x1d)))
  #define UART0_WF7816 (* ((volatile uint8_t *) (0x4006a000 + 0x1d)))
  #define UART1_WF7816 (* ((volatile uint8_t *) (0x4006b000 + 0x1d)))
  #define UART2_WF7816 (* ((volatile uint8_t *) (0x4006c000 + 0x1d)))
  #define UART3_WF7816 (* ((volatile uint8_t *) (0x4006d000 + 0x1d)))
  #define UART4_WF7816 (* ((volatile uint8_t *) (0x400ea000 + 0x1d)))
  #define UART5_WF7816 (* ((volatile uint8_t *) (0x400eb000 + 0x1d)))

  // Field GTFD: FD Multiplier
    inline uint8_t UART_WF7816_GTFD (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register ET7816: UART 7816 Error Threshold Register
  #define UART_ET7816(group) (* ((volatile uint8_t *) (kBaseAddress_ET7816 [group] + 0x1e)))
  #define UART0_ET7816 (* ((volatile uint8_t *) (0x4006a000 + 0x1e)))
  #define UART1_ET7816 (* ((volatile uint8_t *) (0x4006b000 + 0x1e)))
  #define UART2_ET7816 (* ((volatile uint8_t *) (0x4006c000 + 0x1e)))
  #define UART3_ET7816 (* ((volatile uint8_t *) (0x4006d000 + 0x1e)))
  #define UART4_ET7816 (* ((volatile uint8_t *) (0x400ea000 + 0x1e)))
  #define UART5_ET7816 (* ((volatile uint8_t *) (0x400eb000 + 0x1e)))

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
  #define UART5_TL7816 (* ((volatile uint8_t *) (0x400eb000 + 0x1f)))

  // Field TLEN: Transmit Length
    inline uint8_t UART_TL7816_TLEN (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//------------------------------------------------------------------------------
// Peripheral USB0: Universal Serial Bus, OTG Capable Controller
//------------------------------------------------------------------------------

//---  Register PERID: Peripheral ID register
  #define USB0_PERID (* ((const volatile uint8_t *) (0x40072000 + 0)))

  // Field ID: Peripheral Identification
    inline uint8_t USB0_PERID_ID (const uint8_t inValue) {return (inValue & 0x3fU) << 0 ; }

//---  Register IDCOMP: Peripheral ID Complement register
  #define USB0_IDCOMP (* ((const volatile uint8_t *) (0x40072000 + 4)))

  // Field NID: Ones' complement of PERID[ID]. bits.
    inline uint8_t USB0_IDCOMP_NID (const uint8_t inValue) {return (inValue & 0x3fU) << 0 ; }

//---  Register REV: Peripheral Revision register
  #define USB0_REV (* ((const volatile uint8_t *) (0x40072000 + 8)))

  // Field REV: Revision
    inline uint8_t USB0_REV_REV (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register ADDINFO: Peripheral Additional Info register
  #define USB0_ADDINFO (* ((const volatile uint8_t *) (0x40072000 + 12)))

  // Field IEHOST: This bit is set if host mode is enabled.
    const uint8_t USB0_ADDINFO_IEHOST = 1U << 0 ;

  // Field IRQNUM: Assigned Interrupt Request Number
    inline uint8_t USB0_ADDINFO_IRQNUM (const uint8_t inValue) {return (inValue & 0x1fU) << 3 ; }

//---  Register OTGISTAT: OTG Interrupt Status register
  #define USB0_OTGISTAT (* ((volatile uint8_t *) (0x40072000 + 16)))

  // Field AVBUSCHG: This bit is set when a change in VBUS is detected on an A device.
    const uint8_t USB0_OTGISTAT_AVBUSCHG = 1U << 0 ;

  // Field B_SESS_CHG: This bit is set when a change in VBUS is detected on a B device.
    const uint8_t USB0_OTGISTAT_B_SESS_CHG = 1U << 2 ;

  // Field SESSVLDCHG: This bit is set when a change in VBUS is detected indicating a session valid or a session no longer valid
    const uint8_t USB0_OTGISTAT_SESSVLDCHG = 1U << 3 ;

  // Field LINE_STATE_CHG: This interrupt is set when the USB line state (CTL[SE0] and CTL[JSTATE] bits) are stable without change for 1 millisecond, and the value of the line state is different from the last time when the line state was stable
    const uint8_t USB0_OTGISTAT_LINE_STATE_CHG = 1U << 5 ;

  // Field ONEMSEC: This bit is set when the 1 millisecond timer expires
    const uint8_t USB0_OTGISTAT_ONEMSEC = 1U << 6 ;

  // Field IDCHG: This bit is set when a change in the ID Signal from the USB connector is sensed.
    const uint8_t USB0_OTGISTAT_IDCHG = 1U << 7 ;

//---  Register OTGICR: OTG Interrupt Control register
  #define USB0_OTGICR (* ((volatile uint8_t *) (0x40072000 + 20)))

  // Field AVBUSEN: A VBUS Valid Interrupt Enable
    const uint8_t USB0_OTGICR_AVBUSEN = 1U << 0 ;

  // Field BSESSEN: B Session END Interrupt Enable
    const uint8_t USB0_OTGICR_BSESSEN = 1U << 2 ;

  // Field SESSVLDEN: Session Valid Interrupt Enable
    const uint8_t USB0_OTGICR_SESSVLDEN = 1U << 3 ;

  // Field LINESTATEEN: Line State Change Interrupt Enable
    const uint8_t USB0_OTGICR_LINESTATEEN = 1U << 5 ;

  // Field ONEMSECEN: One Millisecond Interrupt Enable
    const uint8_t USB0_OTGICR_ONEMSECEN = 1U << 6 ;

  // Field IDEN: ID Interrupt Enable
    const uint8_t USB0_OTGICR_IDEN = 1U << 7 ;

//---  Register OTGSTAT: OTG Status register
  #define USB0_OTGSTAT (* ((volatile uint8_t *) (0x40072000 + 24)))

  // Field AVBUSVLD: A VBUS Valid
    const uint8_t USB0_OTGSTAT_AVBUSVLD = 1U << 0 ;

  // Field BSESSEND: B Session End
    const uint8_t USB0_OTGSTAT_BSESSEND = 1U << 2 ;

  // Field SESS_VLD: Session Valid
    const uint8_t USB0_OTGSTAT_SESS_VLD = 1U << 3 ;

  // Field LINESTATESTABLE: Indicates that the internal signals that control the LINE_STATE_CHG field of OTGISTAT are stable for at least 1 millisecond
    const uint8_t USB0_OTGSTAT_LINESTATESTABLE = 1U << 5 ;

  // Field ONEMSECEN: This bit is reserved for the 1ms count, but it is not useful to software.
    const uint8_t USB0_OTGSTAT_ONEMSECEN = 1U << 6 ;

  // Field ID: Indicates the current state of the ID pin on the USB connector
    const uint8_t USB0_OTGSTAT_ID = 1U << 7 ;

//---  Register OTGCTL: OTG Control register
  #define USB0_OTGCTL (* ((volatile uint8_t *) (0x40072000 + 28)))

  // Field OTGEN: On-The-Go pullup/pulldown resistor enable
    const uint8_t USB0_OTGCTL_OTGEN = 1U << 2 ;

  // Field DMLOW: D- Data Line pull-down resistor enable
    const uint8_t USB0_OTGCTL_DMLOW = 1U << 4 ;

  // Field DPLOW: D+ Data Line pull-down resistor enable
    const uint8_t USB0_OTGCTL_DPLOW = 1U << 5 ;

  // Field DPHIGH: D+ Data Line pullup resistor enable
    const uint8_t USB0_OTGCTL_DPHIGH = 1U << 7 ;

//---  Register ISTAT: Interrupt Status register
  #define USB0_ISTAT (* ((volatile uint8_t *) (0x40072000 + 128)))

  // Field USBRST: This bit is set when the USB Module has decoded a valid USB reset
    const uint8_t USB0_ISTAT_USBRST = 1U << 0 ;

  // Field ERROR: This bit is set when any of the error conditions within Error Interrupt Status (ERRSTAT) register occur
    const uint8_t USB0_ISTAT_ERROR = 1U << 1 ;

  // Field SOFTOK: This bit is set when the USB Module receives a Start Of Frame (SOF) token
    const uint8_t USB0_ISTAT_SOFTOK = 1U << 2 ;

  // Field TOKDNE: This bit is set when the current token being processed has completed
    const uint8_t USB0_ISTAT_TOKDNE = 1U << 3 ;

  // Field SLEEP: This bit is set when the USB Module detects a constant idle on the USB bus for 3 ms
    const uint8_t USB0_ISTAT_SLEEP = 1U << 4 ;

  // Field RESUME: This bit is set when a K-state is observed on the DP/DM signals for 2
    const uint8_t USB0_ISTAT_RESUME = 1U << 5 ;

  // Field ATTACH: Attach Interrupt
    const uint8_t USB0_ISTAT_ATTACH = 1U << 6 ;

  // Field STALL: Stall Interrupt
    const uint8_t USB0_ISTAT_STALL = 1U << 7 ;

//---  Register INTEN: Interrupt Enable register
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

//---  Register ERRSTAT: Error Interrupt Status register
  #define USB0_ERRSTAT (* ((volatile uint8_t *) (0x40072000 + 136)))

  // Field PIDERR: This bit is set when the PID check field fails.
    const uint8_t USB0_ERRSTAT_PIDERR = 1U << 0 ;

  // Field CRC5EOF: This error interrupt has two functions
    const uint8_t USB0_ERRSTAT_CRC5EOF = 1U << 1 ;

  // Field CRC16: This bit is set when a data packet is rejected due to a CRC16 error.
    const uint8_t USB0_ERRSTAT_CRC16 = 1U << 2 ;

  // Field DFN8: This bit is set if the data field received was not 8 bits in length
    const uint8_t USB0_ERRSTAT_DFN8 = 1U << 3 ;

  // Field BTOERR: This bit is set when a bus turnaround timeout error occurs
    const uint8_t USB0_ERRSTAT_BTOERR = 1U << 4 ;

  // Field DMAERR: This bit is set if the USB Module has requested a DMA access to read a new BDT but has not been given the bus before it needs to receive or transmit data
    const uint8_t USB0_ERRSTAT_DMAERR = 1U << 5 ;

  // Field BTSERR: This bit is set when a bit stuff error is detected
    const uint8_t USB0_ERRSTAT_BTSERR = 1U << 7 ;

//---  Register ERREN: Error Interrupt Enable register
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

  // Field BTSERREN: BTSERR Interrupt Enable
    const uint8_t USB0_ERREN_BTSERREN = 1U << 7 ;

//---  Register STAT: Status register
  #define USB0_STAT (* ((const volatile uint8_t *) (0x40072000 + 144)))

  // Field ODD: This bit is set if the last buffer descriptor updated was in the odd bank of the BDT.
    const uint8_t USB0_STAT_ODD = 1U << 2 ;

  // Field TX: Transmit Indicator
    const uint8_t USB0_STAT_TX = 1U << 3 ;

  // Field ENDP: This four-bit field encodes the endpoint address that received or transmitted the previous token
    inline uint8_t USB0_STAT_ENDP (const uint8_t inValue) {return (inValue & 0xfU) << 4 ; }

//---  Register CTL: Control register
  #define USB0_CTL (* ((volatile uint8_t *) (0x40072000 + 148)))

  // Field USBENSOFEN: USB Enable
    const uint8_t USB0_CTL_USBENSOFEN = 1U << 0 ;

  // Field ODDRST: Setting this bit to 1 resets all the BDT ODD ping/pong fields to 0, which then specifies the EVEN BDT bank
    const uint8_t USB0_CTL_ODDRST = 1U << 1 ;

  // Field RESUME: When set to 1 this bit enables the USB Module to execute resume signaling
    const uint8_t USB0_CTL_RESUME = 1U << 2 ;

  // Field HOSTMODEEN: When set to 1, this bit enables the USB Module to operate in Host mode
    const uint8_t USB0_CTL_HOSTMODEEN = 1U << 3 ;

  // Field RESET: Setting this bit enables the USB Module to generate USB reset signaling
    const uint8_t USB0_CTL_RESET = 1U << 4 ;

  // Field TXSUSPENDTOKENBUSY: In Host mode, TOKEN_BUSY is set when the USB module is busy executing a USB token
    const uint8_t USB0_CTL_TXSUSPENDTOKENBUSY = 1U << 5 ;

  // Field SE0: Live USB Single Ended Zero signal
    const uint8_t USB0_CTL_SE0 = 1U << 6 ;

  // Field JSTATE: Live USB differential receiver JSTATE signal
    const uint8_t USB0_CTL_JSTATE = 1U << 7 ;

//---  Register ADDR: Address register
  #define USB0_ADDR (* ((volatile uint8_t *) (0x40072000 + 152)))

  // Field ADDR: USB Address
    inline uint8_t USB0_ADDR_ADDR (const uint8_t inValue) {return (inValue & 0x7fU) << 0 ; }

  // Field LSEN: Low Speed Enable bit
    const uint8_t USB0_ADDR_LSEN = 1U << 7 ;

//---  Register BDTPAGE1: BDT Page register 1
  #define USB0_BDTPAGE1 (* ((volatile uint8_t *) (0x40072000 + 156)))

  // Field BDTBA: Provides address bits 15 through 9 of the BDT base address.
    inline uint8_t USB0_BDTPAGE1_BDTBA (const uint8_t inValue) {return (inValue & 0x7fU) << 1 ; }

//---  Register FRMNUML: Frame Number register Low
  #define USB0_FRMNUML (* ((volatile uint8_t *) (0x40072000 + 160)))

  // Field FRM: This 8-bit field and the 3-bit field in the Frame Number Register High are used to compute the address where the current Buffer Descriptor Table (BDT) resides in system memory
    inline uint8_t USB0_FRMNUML_FRM (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register FRMNUMH: Frame Number register High
  #define USB0_FRMNUMH (* ((volatile uint8_t *) (0x40072000 + 164)))

  // Field FRM: This 3-bit field and the 8-bit field in the Frame Number Register Low are used to compute the address where the current Buffer Descriptor Table (BDT) resides in system memory
    inline uint8_t USB0_FRMNUMH_FRM (const uint8_t inValue) {return (inValue & 0x7U) << 0 ; }

//---  Register TOKEN: Token register
  #define USB0_TOKEN (* ((volatile uint8_t *) (0x40072000 + 168)))

  // Field TOKENENDPT: Holds the Endpoint address for the token command
    inline uint8_t USB0_TOKEN_TOKENENDPT (const uint8_t inValue) {return (inValue & 0xfU) << 0 ; }

  // Field TOKENPID: Contains the token type executed by the USB module.
    inline uint8_t USB0_TOKEN_TOKENPID (const uint8_t inValue) {return (inValue & 0xfU) << 4 ; }

//---  Register SOFTHLD: SOF Threshold register
  #define USB0_SOFTHLD (* ((volatile uint8_t *) (0x40072000 + 172)))

  // Field CNT: Represents the SOF count threshold in byte times.
    inline uint8_t USB0_SOFTHLD_CNT (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register BDTPAGE2: BDT Page Register 2
  #define USB0_BDTPAGE2 (* ((volatile uint8_t *) (0x40072000 + 176)))

  // Field BDTBA: Provides address bits 23 through 16 of the BDT base address that defines the location of Buffer Descriptor Table resides in system memory
    inline uint8_t USB0_BDTPAGE2_BDTBA (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register BDTPAGE3: BDT Page Register 3
  #define USB0_BDTPAGE3 (* ((volatile uint8_t *) (0x40072000 + 180)))

  // Field BDTBA: Provides address bits 31 through 24 of the BDT base address that defines the location of Buffer Descriptor Table resides in system memory
    inline uint8_t USB0_BDTPAGE3_BDTBA (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Registers ENDPT(0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15): Endpoint Control register
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

  // Field EPHSHK: When set this bit enables an endpoint to perform handshaking during a transaction to this endpoint
    const uint8_t USB0_ENDPT_EPHSHK = 1U << 0 ;

  // Field EPSTALL: When set this bit indicates that the endpoint is called
    const uint8_t USB0_ENDPT_EPSTALL = 1U << 1 ;

  // Field EPTXEN: This bit, when set, enables the endpoint for TX transfers.
    const uint8_t USB0_ENDPT_EPTXEN = 1U << 2 ;

  // Field EPRXEN: This bit, when set, enables the endpoint for RX transfers.
    const uint8_t USB0_ENDPT_EPRXEN = 1U << 3 ;

  // Field EPCTLDIS: This bit, when set, disables control (SETUP) transfers
    const uint8_t USB0_ENDPT_EPCTLDIS = 1U << 4 ;

  // Field RETRYDIS: This is a Host mode only bit and is present in the control register for endpoint 0 (ENDPT0) only
    const uint8_t USB0_ENDPT_RETRYDIS = 1U << 6 ;

  // Field HOSTWOHUB: This is a Host mode only field and is present in the control register for endpoint 0 (ENDPT0) only
    const uint8_t USB0_ENDPT_HOSTWOHUB = 1U << 7 ;

//---  Register USBCTRL: USB Control register
  #define USB0_USBCTRL (* ((volatile uint8_t *) (0x40072000 + 256)))

  // Field PDE: Enables the weak pulldowns on the USB transceiver.
    const uint8_t USB0_USBCTRL_PDE = 1U << 6 ;

  // Field SUSP: Places the USB transceiver into the suspend state.
    const uint8_t USB0_USBCTRL_SUSP = 1U << 7 ;

//---  Register OBSERVE: USB OTG Observe register
  #define USB0_OBSERVE (* ((const volatile uint8_t *) (0x40072000 + 260)))

  // Field DMPD: Provides observability of the D- Pulldown enable at the USB transceiver.
    const uint8_t USB0_OBSERVE_DMPD = 1U << 4 ;

  // Field DPPD: Provides observability of the D+ Pulldown enable at the USB transceiver.
    const uint8_t USB0_OBSERVE_DPPD = 1U << 6 ;

  // Field DPPU: Provides observability of the D+ Pullup enable at the USB transceiver.
    const uint8_t USB0_OBSERVE_DPPU = 1U << 7 ;

//---  Register CONTROL: USB OTG Control register
  #define USB0_CONTROL (* ((volatile uint8_t *) (0x40072000 + 264)))

  // Field DPPULLUPNONOTG: Provides control of the DP Pullup in USBOTG, if USB is configured in non-OTG device mode.
    const uint8_t USB0_CONTROL_DPPULLUPNONOTG = 1U << 4 ;

//---  Register USBTRC0: USB Transceiver Control register 0
  #define USB0_USBTRC0 (* ((volatile uint8_t *) (0x40072000 + 268)))

  // Field USB_RESUME_INT: USB Asynchronous Interrupt
    const uint8_t USB0_USBTRC0_USB_RESUME_INT = 1U << 0 ;

  // Field SYNC_DET: Synchronous USB Interrupt Detect
    const uint8_t USB0_USBTRC0_SYNC_DET = 1U << 1 ;

  // Field USB_CLK_RECOVERY_INT: Combined USB Clock Recovery interrupt status
    const uint8_t USB0_USBTRC0_USB_CLK_RECOVERY_INT = 1U << 2 ;

  // Field USBRESMEN: Asynchronous Resume Interrupt Enable
    const uint8_t USB0_USBTRC0_USBRESMEN = 1U << 5 ;

  // Field USBRESET: USB Reset
    const uint8_t USB0_USBTRC0_USBRESET = 1U << 7 ;

//---  Register USBFRMADJUST: Frame Adjust Register
  #define USB0_USBFRMADJUST (* ((volatile uint8_t *) (0x40072000 + 276)))

  // Field ADJ: Frame Adjustment
    inline uint8_t USB0_USBFRMADJUST_ADJ (const uint8_t inValue) {return (inValue & 0xffU) << 0 ; }

//---  Register CLK_RECOVER_CTRL: USB Clock recovery control
  #define USB0_CLK_RECOVER_CTRL (* ((volatile uint8_t *) (0x40072000 + 320)))

  // Field RESTART_IFRTRIM_EN: Restart from IFR trim value
    const uint8_t USB0_CLK_RECOVER_CTRL_RESTART_IFRTRIM_EN = 1U << 5 ;

  // Field RESET_RESUME_ROUGH_EN: Reset/resume to rough phase enable
    const uint8_t USB0_CLK_RECOVER_CTRL_RESET_RESUME_ROUGH_EN = 1U << 6 ;

  // Field CLOCK_RECOVER_EN: Crystal-less USB enable
    const uint8_t USB0_CLK_RECOVER_CTRL_CLOCK_RECOVER_EN = 1U << 7 ;

//---  Register CLK_RECOVER_IRC_EN: IRC48M oscillator enable register
  #define USB0_CLK_RECOVER_IRC_EN (* ((volatile uint8_t *) (0x40072000 + 324)))

  // Field REG_EN: IRC48M regulator enable
    const uint8_t USB0_CLK_RECOVER_IRC_EN_REG_EN = 1U << 0 ;

  // Field IRC_EN: IRC48M enable
    const uint8_t USB0_CLK_RECOVER_IRC_EN_IRC_EN = 1U << 1 ;

//---  Register CLK_RECOVER_INT_STATUS: Clock recovery separated interrupt status
  #define USB0_CLK_RECOVER_INT_STATUS (* ((volatile uint8_t *) (0x40072000 + 348)))

  // Field OVF_ERROR: Indicates that the USB clock recovery algorithm has detected that the frequency trim adjustment needed for the IRC48M output clock is outside the available TRIM_FINE adjustment range for the IRC48M module
    const uint8_t USB0_CLK_RECOVER_INT_STATUS_OVF_ERROR = 1U << 4 ;

//------------------------------------------------------------------------------
// Peripheral USBDCD: USB Device Charger Detection module
//------------------------------------------------------------------------------

//---  Register CONTROL: Control register
  #define USBDCD_CONTROL (* ((volatile uint32_t *) (0x40035000 + 0)))

  // Field IACK: Interrupt Acknowledge
    const uint32_t USBDCD_CONTROL_IACK = 1U << 0 ;

  // Field IF: Interrupt Flag
    const uint32_t USBDCD_CONTROL_IF = 1U << 8 ;

  // Field IE: Interrupt Enable
    const uint32_t USBDCD_CONTROL_IE = 1U << 16 ;

  // Field BC12: BC1.2 compatibility. This bit cannot be changed after start detection.
    const uint32_t USBDCD_CONTROL_BC12 = 1U << 17 ;

  // Field START: Start Change Detection Sequence
    const uint32_t USBDCD_CONTROL_START = 1U << 24 ;

  // Field SR: Software Reset
    const uint32_t USBDCD_CONTROL_SR = 1U << 25 ;

//---  Register CLOCK: Clock register
  #define USBDCD_CLOCK (* ((volatile uint32_t *) (0x40035000 + 4)))

  // Field CLOCK_UNIT: Unit of Measurement Encoding for Clock Speed
    const uint32_t USBDCD_CLOCK_CLOCK_UNIT = 1U << 0 ;

  // Field CLOCK_SPEED: Numerical Value of Clock Speed in Binary
    inline uint32_t USBDCD_CLOCK_CLOCK_SPEED (const uint32_t inValue) {return (inValue & 0x3ffU) << 2 ; }

//---  Register STATUS: Status register
  #define USBDCD_STATUS (* ((const volatile uint32_t *) (0x40035000 + 8)))

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

//---  Register TIMER0: TIMER0 register
  #define USBDCD_TIMER0 (* ((volatile uint32_t *) (0x40035000 + 16)))

  // Field TUNITCON: Unit Connection Timer Elapse (in ms)
    inline uint32_t USBDCD_TIMER0_TUNITCON (const uint32_t inValue) {return (inValue & 0xfffU) << 0 ; }

  // Field TSEQ_INIT: Sequence Initiation Time
    inline uint32_t USBDCD_TIMER0_TSEQ_INIT (const uint32_t inValue) {return (inValue & 0x3ffU) << 16 ; }

//---  Register TIMER1: TIMER1 register
  #define USBDCD_TIMER1 (* ((volatile uint32_t *) (0x40035000 + 20)))

  // Field TVDPSRC_ON: Time Period Comparator Enabled
    inline uint32_t USBDCD_TIMER1_TVDPSRC_ON (const uint32_t inValue) {return (inValue & 0x3ffU) << 0 ; }

  // Field TDCD_DBNC: Time Period to Debounce D+ Signal
    inline uint32_t USBDCD_TIMER1_TDCD_DBNC (const uint32_t inValue) {return (inValue & 0x3ffU) << 16 ; }

//---  Register TIMER2_BC11: TIMER2_BC11 register
  #define USBDCD_TIMER2_BC11 (* ((volatile uint32_t *) (0x40035000 + 24)))

  // Field CHECK_DM: Time Before Check of D- Line
    inline uint32_t USBDCD_TIMER2_BC11_CHECK_DM (const uint32_t inValue) {return (inValue & 0xfU) << 0 ; }

  // Field TVDPSRC_CON: Time Period Before Enabling D+ Pullup
    inline uint32_t USBDCD_TIMER2_BC11_TVDPSRC_CON (const uint32_t inValue) {return (inValue & 0x3ffU) << 16 ; }

//---  Register TIMER2_BC12: TIMER2_BC12 register
  #define USBDCD_TIMER2_BC12 (* ((volatile uint32_t *) (0x40035000 + 24)))

  // Field TVDMSRC_ON: Sets the amount of time (in ms) that the module enables the VDM_SRC. Valid values are 0-40ms.
    inline uint32_t USBDCD_TIMER2_BC12_TVDMSRC_ON (const uint32_t inValue) {return (inValue & 0x3ffU) << 0 ; }

  // Field TWAIT_AFTER_PRD: Sets the amount of time (in ms) that the module waits after primary detection before start to secondary detection
    inline uint32_t USBDCD_TIMER2_BC12_TWAIT_AFTER_PRD (const uint32_t inValue) {return (inValue & 0x3ffU) << 16 ; }

//------------------------------------------------------------------------------
// Peripheral VREF: Voltage Reference
//------------------------------------------------------------------------------

//---  Register TRM: VREF Trim Register
  #define VREF_TRM (* ((volatile uint8_t *) (0x40074000 + 0)))

  // Field TRIM: Trim bits
    inline uint8_t VREF_TRM_TRIM (const uint8_t inValue) {return (inValue & 0x3fU) << 0 ; }

  // Field CHOPEN: Chop oscillator enable. When set, internal chopping operation is enabled and the internal analog offset will be minimized.
    const uint8_t VREF_TRM_CHOPEN = 1U << 6 ;

//---  Register SC: VREF Status and Control Register
  #define VREF_SC (* ((volatile uint8_t *) (0x40074000 + 1)))

  // Field MODE_LV: Buffer Mode selection
    inline uint8_t VREF_SC_MODE_LV (const uint8_t inValue) {return (inValue & 0x3U) << 0 ; }

  // Field VREFST: Internal Voltage Reference stable
    const uint8_t VREF_SC_VREFST = 1U << 2 ;

  // Field ICOMPEN: Second order curvature compensation enable
    const uint8_t VREF_SC_ICOMPEN = 1U << 5 ;

  // Field REGEN: Regulator enable
    const uint8_t VREF_SC_REGEN = 1U << 6 ;

  // Field VREFEN: Internal Voltage Reference enable
    const uint8_t VREF_SC_VREFEN = 1U << 7 ;

//------------------------------------------------------------------------------
// Peripheral WDOG: Generation 2008 Watchdog Timer
//------------------------------------------------------------------------------

//---  Register STCTRLH: Watchdog Status and Control Register High
  #define WDOG_STCTRLH (* ((volatile uint16_t *) (0x40052000 + 0)))

  // Field WDOGEN: Enables or disables the WDOG's operation
    const uint16_t WDOG_STCTRLH_WDOGEN = 1U << 0 ;

  // Field CLKSRC: Selects clock source for the WDOG timer and other internal timing operations.
    const uint16_t WDOG_STCTRLH_CLKSRC = 1U << 1 ;

  // Field IRQRSTEN: Used to enable the debug breadcrumbs feature
    const uint16_t WDOG_STCTRLH_IRQRSTEN = 1U << 2 ;

  // Field WINEN: Enables Windowing mode.
    const uint16_t WDOG_STCTRLH_WINEN = 1U << 3 ;

  // Field ALLOWUPDATE: Enables updates to watchdog write-once registers, after the reset-triggered initial configuration window (WCT) closes, through unlock sequence
    const uint16_t WDOG_STCTRLH_ALLOWUPDATE = 1U << 4 ;

  // Field DBGEN: Enables or disables WDOG in Debug mode.
    const uint16_t WDOG_STCTRLH_DBGEN = 1U << 5 ;

  // Field STOPEN: Enables or disables WDOG in Stop mode.
    const uint16_t WDOG_STCTRLH_STOPEN = 1U << 6 ;

  // Field WAITEN: Enables or disables WDOG in Wait mode.
    const uint16_t WDOG_STCTRLH_WAITEN = 1U << 7 ;

  // Field TESTWDOG: Puts the watchdog in the functional test mode
    const uint16_t WDOG_STCTRLH_TESTWDOG = 1U << 10 ;

  // Field TESTSEL: Effective only if TESTWDOG is set. Selects the test to be run on the watchdog timer.
    const uint16_t WDOG_STCTRLH_TESTSEL = 1U << 11 ;

  // Field BYTESEL: This 2-bit field selects the byte to be tested when the watchdog is in the byte test mode.
    inline uint16_t WDOG_STCTRLH_BYTESEL (const uint16_t inValue) {return (inValue & 0x3U) << 12 ; }

  // Field DISTESTWDOG: Allows the WDOG's functional test mode to be disabled permanently
    const uint16_t WDOG_STCTRLH_DISTESTWDOG = 1U << 14 ;

//---  Register STCTRLL: Watchdog Status and Control Register Low
  #define WDOG_STCTRLL (* ((volatile uint16_t *) (0x40052000 + 2)))

  // Field INTFLG: Interrupt flag
    const uint16_t WDOG_STCTRLL_INTFLG = 1U << 15 ;

//---  Register TOVALH: Watchdog Time-out Value Register High
  #define WDOG_TOVALH (* ((volatile uint16_t *) (0x40052000 + 4)))

  // Field TOVALHIGH: Defines the upper 16 bits of the 32-bit time-out value for the watchdog timer
    inline uint16_t WDOG_TOVALH_TOVALHIGH (const uint16_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register TOVALL: Watchdog Time-out Value Register Low
  #define WDOG_TOVALL (* ((volatile uint16_t *) (0x40052000 + 6)))

  // Field TOVALLOW: Defines the lower 16 bits of the 32-bit time-out value for the watchdog timer
    inline uint16_t WDOG_TOVALL_TOVALLOW (const uint16_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register WINH: Watchdog Window Register High
  #define WDOG_WINH (* ((volatile uint16_t *) (0x40052000 + 8)))

  // Field WINHIGH: Defines the upper 16 bits of the 32-bit window for the windowed mode of operation of the watchdog
    inline uint16_t WDOG_WINH_WINHIGH (const uint16_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register WINL: Watchdog Window Register Low
  #define WDOG_WINL (* ((volatile uint16_t *) (0x40052000 + 10)))

  // Field WINLOW: Defines the lower 16 bits of the 32-bit window for the windowed mode of operation of the watchdog
    inline uint16_t WDOG_WINL_WINLOW (const uint16_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register REFRESH: Watchdog Refresh register
  #define WDOG_REFRESH (* ((volatile uint16_t *) (0x40052000 + 12)))

  // Field WDOGREFRESH: Watchdog refresh register
    inline uint16_t WDOG_REFRESH_WDOGREFRESH (const uint16_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register UNLOCK: Watchdog Unlock register
  #define WDOG_UNLOCK (* ((volatile uint16_t *) (0x40052000 + 14)))

  // Field WDOGUNLOCK: Writing the unlock sequence values to this register to makes the watchdog write-once registers writable again
    inline uint16_t WDOG_UNLOCK_WDOGUNLOCK (const uint16_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register TMROUTH: Watchdog Timer Output Register High
  #define WDOG_TMROUTH (* ((volatile uint16_t *) (0x40052000 + 16)))

  // Field TIMEROUTHIGH: Shows the value of the upper 16 bits of the watchdog timer.
    inline uint16_t WDOG_TMROUTH_TIMEROUTHIGH (const uint16_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register TMROUTL: Watchdog Timer Output Register Low
  #define WDOG_TMROUTL (* ((volatile uint16_t *) (0x40052000 + 18)))

  // Field TIMEROUTLOW: Shows the value of the lower 16 bits of the watchdog timer.
    inline uint16_t WDOG_TMROUTL_TIMEROUTLOW (const uint16_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register RSTCNT: Watchdog Reset Count register
  #define WDOG_RSTCNT (* ((volatile uint16_t *) (0x40052000 + 20)))

  // Field RSTCNT: Counts the number of times the watchdog resets the system
    inline uint16_t WDOG_RSTCNT_RSTCNT (const uint16_t inValue) {return (inValue & 0xffffU) << 0 ; }

//---  Register PRESC: Watchdog Prescaler register
  #define WDOG_PRESC (* ((volatile uint16_t *) (0x40052000 + 22)))

  // Field PRESCVAL: 3-bit prescaler for the watchdog clock source
    inline uint16_t WDOG_PRESC_PRESCVAL (const uint16_t inValue) {return (inValue & 0x7U) << 8 ; }

//------------------------------------------------------------------------------
// INTERRUPTS
//------------------------------------------------------------------------------

enum class ISRSlot : uint8_t {
  DMA0 = 0,
  DMA1 = 1,
  DMA2 = 2,
  DMA3 = 3,
  DMA4 = 4,
  DMA5 = 5,
  DMA6 = 6,
  DMA7 = 7,
  DMA8 = 8,
  DMA9 = 9,
  DMA10 = 10,
  DMA11 = 11,
  DMA12 = 12,
  DMA13 = 13,
  DMA14 = 14,
  DMA15 = 15,
  DMA_Error = 16,
  MCM = 17,
  FTFE = 18,
  Read_Collision = 19,
  LVD_LVW = 20,
  LLWU = 21,
  WDOG_EWM = 22,
  RNG = 23,
  I2C0 = 24,
  I2C1 = 25,
  SPI0 = 26,
  SPI1 = 27,
  I2S0_Tx = 28,
  I2S0_Rx = 29,
  UART0_LON = 30,
  UART0_RX_TX = 31,
  UART0_ERR = 32,
  UART1_RX_TX = 33,
  UART1_ERR = 34,
  UART2_RX_TX = 35,
  UART2_ERR = 36,
  UART3_RX_TX = 37,
  UART3_ERR = 38,
  ADC0 = 39,
  CMP0 = 40,
  CMP1 = 41,
  FTM0 = 42,
  FTM1 = 43,
  FTM2 = 44,
  CMT = 45,
  RTC = 46,
  RTC_Seconds = 47,
  PIT0 = 48,
  PIT1 = 49,
  PIT2 = 50,
  PIT3 = 51,
  PDB0 = 52,
  USB0 = 53,
  USBDCD = 54,
  DAC0 = 56,
  LPTMR0 = 58,
  PORTA = 59,
  PORTB = 60,
  PORTC = 61,
  PORTD = 62,
  PORTE = 63,
  SPI2 = 65,
  UART4_RX_TX = 66,
  UART4_ERR = 67,
  UART5_RX_TX = 68,
  UART5_ERR = 69,
  CMP2 = 70,
  FTM3 = 71,
  DAC1 = 72,
  ADC1 = 73,
  I2C2 = 74,
  CAN0_ORed_Message_buffer = 75,
  CAN0_Bus_Off = 76,
  CAN0_Error = 77,
  CAN0_Tx_Warning = 78,
  CAN0_Rx_Warning = 79,
  CAN0_Wake_Up = 80,
  SDHC = 81,
  ENET_1588_Timer = 82,
  ENET_Transmit = 83,
  ENET_Receive = 84,
  ENET_Error = 85,
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
