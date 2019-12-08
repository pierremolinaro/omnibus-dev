@-------------------------------------------------------------------------------
@ INTERRUPT VECTORS, STM32L4x2: STM32L4x2
@-------------------------------------------------------------------------------

  .syntax unified
  .cpu cortex-m4
  .thumb

@-------------------------------------------------------------------------------

  .section isr.vectors, "a", %progbits

@-------------------------------------------------------------------------------

  .word __system_stack_end
@--- ARM Core System Handler Vectors
  .word reset.handler @ 1
  .word interrupt.NMI @ 2
  .word interrupt.HardFault @ 3
  .word interrupt.MemManage @ 4
  .word interrupt.BusFault @ 5
  .word interrupt.UsageFault @ 6
  .word -1 @ 7, reserved
  .word -1 @ 8, reserved
  .word -1 @ 9, reserved
  .word -1 @ 10, reserved
  .word interrupt.SVC @ 11
  .word interrupt.DebugMonitor @ 12
  .word -1 @ 13, reserved
  .word interrupt.PendSV @ 14
  .word interrupt.SysTick @ 15
@--- Non-Core Vectors
  .word interrupt.WWDG @ 16
  .word interrupt.PVD_PVM @ 17
  .word interrupt.RTC_TAMP_STAMP @ 18
  .word interrupt.RTC_WKUP @ 19
  .word interrupt.FLASH @ 20
  .word interrupt.RCC @ 21
  .word interrupt.EXTI0 @ 22
  .word interrupt.EXTI1 @ 23
  .word interrupt.EXTI2 @ 24
  .word interrupt.EXTI3 @ 25
  .word interrupt.EXTI4 @ 26
  .word interrupt.DMA1_CH1 @ 27
  .word interrupt.DMA1_CH2 @ 28
  .word interrupt.DMA1_CH3 @ 29
  .word interrupt.DMA1_CH4 @ 30
  .word interrupt.DMA1_CH5 @ 31
  .word interrupt.DMA1_CH6 @ 32
  .word interrupt.DMA1_CH7 @ 33
  .word interrupt.ADC1 @ 34
  .word interrupt.CAN1_TX @ 35
  .word interrupt.CAN1_RX0 @ 36
  .word interrupt.CAN1_RX1 @ 37
  .word interrupt.CAN1_SCE @ 38
  .word interrupt.EXTI9_5 @ 39
  .word interrupt.TIM1_BRK_TIM15 @ 40
  .word interrupt.TIM1_UP_TIM16 @ 41
  .word interrupt.TIM1_TRG_COM @ 42
  .word interrupt.TIM1_CC @ 43
  .word interrupt.TIM2 @ 44
  .word interrupt.TIM3 @ 45
  .word -1 @ 46 (unused)
  .word interrupt.I2C1_EV @ 47
  .word interrupt.I2C1_ER @ 48
  .word interrupt.I2C2_EV @ 49
  .word interrupt.I2C2_ER @ 50
  .word interrupt.SPI1 @ 51
  .word interrupt.SPI2 @ 52
  .word interrupt.USART1 @ 53
  .word interrupt.USART2 @ 54
  .word interrupt.USART3 @ 55
  .word interrupt.EXTI15_10 @ 56
  .word interrupt.RTC_ALARM @ 57
  .word interrupt.DFSDM1_FLT3 @ 58
  .word -1 @ 59 (unused)
  .word -1 @ 60 (unused)
  .word -1 @ 61 (unused)
  .word -1 @ 62 (unused)
  .word interrupt.ADC3 @ 63
  .word -1 @ 64 (unused)
  .word interrupt.SDMMC1 @ 65
  .word -1 @ 66 (unused)
  .word interrupt.SPI3 @ 67
  .word interrupt.UART4 @ 68
  .word -1 @ 69 (unused)
  .word interrupt.TIM6_DACUNDER @ 70
  .word interrupt.TIM7 @ 71
  .word interrupt.DMA2_CH1 @ 72
  .word interrupt.DMA2_CH2 @ 73
  .word interrupt.DMA2_CH3 @ 74
  .word interrupt.DMA2_CH4 @ 75
  .word interrupt.DMA2_CH5 @ 76
  .word interrupt.DFSDM1 @ 77
  .word interrupt.DFSDM2 @ 78
  .word interrupt.DFSDM1_FLT2 @ 79
  .word interrupt.COMP @ 80
  .word interrupt.LPTIM1 @ 81
  .word interrupt.LPTIM2 @ 82
  .word interrupt.USB_FS @ 83
  .word interrupt.DMA2_CH6 @ 84
  .word interrupt.DMA2_CH7 @ 85
  .word interrupt.LPUART1 @ 86
  .word interrupt.QUADSPI @ 87
  .word interrupt.I2C3_EV @ 88
  .word interrupt.I2C3_ER @ 89
  .word interrupt.SAI1 @ 90
  .word -1 @ 91 (unused)
  .word interrupt.SWPMI1 @ 92
  .word interrupt.TSC @ 93
  .word interrupt.LCD @ 94
  .word interrupt.AES @ 95
  .word interrupt.RNG @ 96
  .word interrupt.FPU @ 97
  .word interrupt.CRS @ 98
  .word interrupt.I2C4_EV @ 99
  .word interrupt.I2C4_ER @ 100
  .word -1 @ 101 (unused)
  .word -1 @ 102 (unused)
  .word -1 @ 103 (unused)
  .word -1 @ 104 (unused)
  .word -1 @ 105 (unused)
  .word -1 @ 106 (unused)
  .word -1 @ 107 (unused)
  .word -1 @ 108 (unused)
  .word -1 @ 109 (unused)
  .word -1 @ 110 (unused)
  .word -1 @ 111 (unused)
  .word -1 @ 112 (unused)
  .word -1 @ 113 (unused)
  .word -1 @ 114 (unused)
  .word -1 @ 115 (unused)
  .word -1 @ 116 (unused)
  .word -1 @ 117 (unused)
  .word -1 @ 118 (unused)
  .word -1 @ 119 (unused)
  .word -1 @ 120 (unused)
  .word -1 @ 121 (unused)
  .word -1 @ 122 (unused)
  .word -1 @ 123 (unused)
  .word -1 @ 124 (unused)
  .word -1 @ 125 (unused)
  .word -1 @ 126 (unused)
  .word -1 @ 127 (unused)
  .word -1 @ 128 (unused)
  .word -1 @ 129 (unused)
  .word -1 @ 130 (unused)
  .word -1 @ 131 (unused)
  .word -1 @ 132 (unused)
  .word -1 @ 133 (unused)
  .word -1 @ 134 (unused)
  .word -1 @ 135 (unused)
  .word -1 @ 136 (unused)
  .word -1 @ 137 (unused)
  .word -1 @ 138 (unused)
  .word -1 @ 139 (unused)
  .word -1 @ 140 (unused)
  .word -1 @ 141 (unused)
  .word -1 @ 142 (unused)
  .word -1 @ 143 (unused)
  .word -1 @ 144 (unused)
  .word -1 @ 145 (unused)
  .word -1 @ 146 (unused)
  .word -1 @ 147 (unused)
  .word -1 @ 148 (unused)
  .word -1 @ 149 (unused)
  .word -1 @ 150 (unused)
  .word -1 @ 151 (unused)
  .word -1 @ 152 (unused)
  .word -1 @ 153 (unused)
  .word -1 @ 154 (unused)
  .word -1 @ 155 (unused)
  .word -1 @ 156 (unused)
  .word -1 @ 157 (unused)
  .word -1 @ 158 (unused)
  .word -1 @ 159 (unused)
  .word -1 @ 160 (unused)
  .word -1 @ 161 (unused)
  .word -1 @ 162 (unused)
  .word -1 @ 163 (unused)
  .word -1 @ 164 (unused)
  .word -1 @ 165 (unused)
  .word -1 @ 166 (unused)
  .word -1 @ 167 (unused)
  .word -1 @ 168 (unused)
  .word -1 @ 169 (unused)
  .word -1 @ 170 (unused)
  .word -1 @ 171 (unused)
  .word -1 @ 172 (unused)
  .word -1 @ 173 (unused)
  .word -1 @ 174 (unused)
  .word -1 @ 175 (unused)
  .word -1 @ 176 (unused)
  .word -1 @ 177 (unused)
  .word -1 @ 178 (unused)
  .word -1 @ 179 (unused)
  .word -1 @ 180 (unused)
  .word -1 @ 181 (unused)
  .word -1 @ 182 (unused)
  .word -1 @ 183 (unused)
  .word -1 @ 184 (unused)
  .word -1 @ 185 (unused)
  .word -1 @ 186 (unused)
  .word -1 @ 187 (unused)
  .word -1 @ 188 (unused)
  .word -1 @ 189 (unused)
  .word -1 @ 190 (unused)
  .word -1 @ 191 (unused)
  .word -1 @ 192 (unused)
  .word -1 @ 193 (unused)
  .word -1 @ 194 (unused)
  .word -1 @ 195 (unused)
  .word -1 @ 196 (unused)
  .word -1 @ 197 (unused)
  .word -1 @ 198 (unused)
  .word -1 @ 199 (unused)
  .word -1 @ 200 (unused)
  .word -1 @ 201 (unused)
  .word -1 @ 202 (unused)
  .word -1 @ 203 (unused)
  .word -1 @ 204 (unused)
  .word -1 @ 205 (unused)
  .word -1 @ 206 (unused)
  .word -1 @ 207 (unused)
  .word -1 @ 208 (unused)
  .word -1 @ 209 (unused)
  .word -1 @ 210 (unused)
  .word -1 @ 211 (unused)
  .word -1 @ 212 (unused)
  .word -1 @ 213 (unused)
  .word -1 @ 214 (unused)
  .word -1 @ 215 (unused)
  .word -1 @ 216 (unused)
  .word -1 @ 217 (unused)
  .word -1 @ 218 (unused)
  .word -1 @ 219 (unused)
  .word -1 @ 220 (unused)
  .word -1 @ 221 (unused)
  .word -1 @ 222 (unused)
  .word -1 @ 223 (unused)
  .word -1 @ 224 (unused)
  .word -1 @ 225 (unused)
  .word -1 @ 226 (unused)
  .word -1 @ 227 (unused)
  .word -1 @ 228 (unused)
  .word -1 @ 229 (unused)
  .word -1 @ 230 (unused)
  .word -1 @ 231 (unused)
  .word -1 @ 232 (unused)
  .word -1 @ 233 (unused)
  .word -1 @ 234 (unused)
  .word -1 @ 235 (unused)
  .word -1 @ 236 (unused)
  .word -1 @ 237 (unused)
  .word -1 @ 238 (unused)
  .word -1 @ 239 (unused)
  .word -1 @ 240 (unused)
  .word -1 @ 241 (unused)
  .word -1 @ 242 (unused)
  .word -1 @ 243 (unused)
  .word -1 @ 244 (unused)
  .word -1 @ 245 (unused)
  .word -1 @ 246 (unused)
  .word -1 @ 247 (unused)
  .word -1 @ 248 (unused)
  .word -1 @ 249 (unused)
  .word -1 @ 250 (unused)
  .word -1 @ 251 (unused)
  .word -1 @ 252 (unused)
  .word -1 @ 253 (unused)
  .word -1 @ 254 (unused)
  .word -1 @ 255 (unused)

@-------------------------------------------------------------------------------

