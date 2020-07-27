@-------------------------------------------------------------------------------
@ INTERRUPT VECTORS, STM32F767: STM32F767
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
  .word interrupt.PVD @ 17
  .word interrupt.TAMP_STAMP @ 18
  .word interrupt.RTC_WKUP @ 19
  .word interrupt.FLASH @ 20
  .word interrupt.RCC @ 21
  .word interrupt.EXTI0 @ 22
  .word interrupt.EXTI1 @ 23
  .word interrupt.EXTI2 @ 24
  .word interrupt.EXTI3 @ 25
  .word interrupt.EXTI4 @ 26
  .word interrupt.DMA1_Stream0 @ 27
  .word interrupt.DMA1_Stream1 @ 28
  .word interrupt.DMA1_Stream2 @ 29
  .word interrupt.DMA1_Stream3 @ 30
  .word interrupt.DMA1_Stream4 @ 31
  .word interrupt.DMA1_Stream5 @ 32
  .word interrupt.DMA1_Stream6 @ 33
  .word interrupt.ADC @ 34
  .word interrupt.CAN1_TX @ 35
  .word interrupt.CAN1_RX0 @ 36
  .word interrupt.CAN1_RX1 @ 37
  .word interrupt.CAN1_SCE @ 38
  .word interrupt.EXTI9_5 @ 39
  .word interrupt.TIM1_BRK_TIM9 @ 40
  .word interrupt.TIM1_UP_TIM10 @ 41
  .word interrupt.TIM1_TRG_COM_TIM11 @ 42
  .word interrupt.TIM1_CC @ 43
  .word interrupt.TIM2 @ 44
  .word interrupt.TIM3 @ 45
  .word interrupt.TIM4 @ 46
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
  .word interrupt.OTG_FS_WKUP @ 58
  .word interrupt.TIM8_BRK_TIM12 @ 59
  .word interrupt.TIM8_UP_TIM13 @ 60
  .word interrupt.TIM8_TRG_COM_TIM14 @ 61
  .word interrupt.TIM8_CC @ 62
  .word interrupt.DMA1_Stream7 @ 63
  .word interrupt.FMC @ 64
  .word interrupt.SDMMC1 @ 65
  .word interrupt.TIM5 @ 66
  .word interrupt.SPI3 @ 67
  .word interrupt.UART4 @ 68
  .word interrupt.UART5 @ 69
  .word interrupt.TIM6_DAC @ 70
  .word interrupt.TIM7 @ 71
  .word interrupt.DMA2_Stream0 @ 72
  .word interrupt.DMA2_Stream1 @ 73
  .word interrupt.DMA2_Stream2 @ 74
  .word interrupt.DMA2_Stream3 @ 75
  .word interrupt.DMA2_Stream4 @ 76
  .word interrupt.ETH @ 77
  .word interrupt.ETH_WKUP @ 78
  .word interrupt.CAN2_TX @ 79
  .word interrupt.CAN2_RX0 @ 80
  .word interrupt.CAN2_RX1 @ 81
  .word interrupt.CAN2_SCE @ 82
  .word interrupt.OTG_FS @ 83
  .word interrupt.DMA2_Stream5 @ 84
  .word interrupt.DMA2_Stream6 @ 85
  .word interrupt.DMA2_Stream7 @ 86
  .word interrupt.USART6 @ 87
  .word interrupt.I2C3_EV @ 88
  .word interrupt.I2C3_ER @ 89
  .word interrupt.OTG_HS_EP1_OUT @ 90
  .word interrupt.OTG_HS_EP1_IN @ 91
  .word interrupt.OTG_HS_WKUP @ 92
  .word interrupt.OTG_HS @ 93
  .word interrupt.DCMI @ 94
  .word interrupt.CRYP @ 95
  .word interrupt.HASH_RNG @ 96
  .word interrupt.FPU @ 97
  .word interrupt.UART7 @ 98
  .word interrupt.UART8 @ 99
  .word interrupt.SPI4 @ 100
  .word interrupt.SPI5 @ 101
  .word interrupt.SPI6 @ 102
  .word interrupt.SAI1 @ 103
  .word interrupt.LCD_TFT @ 104
  .word interrupt.LCD_TFT_1 @ 105
  .word interrupt.DMA2D @ 106
  .word interrupt.SAI2 @ 107
  .word interrupt.QuadSPI @ 108
  .word interrupt.LP_Timer1 @ 109
  .word -1 @ 110 (unused)
  .word interrupt.I2C4_EV @ 111
  .word interrupt.I2C4_ER @ 112
  .word interrupt.SPDIFRX @ 113
  .word interrupt.DSIHOST @ 114
  .word interrupt.DFSDM1_FLT0 @ 115
  .word interrupt.DFSDM1_FLT1 @ 116
  .word interrupt.DFSDM1_FLT2 @ 117
  .word interrupt.DFSDM1_FLT3 @ 118
  .word interrupt.SDMMC2 @ 119
  .word interrupt.CAN3_TX @ 120
  .word interrupt.CAN3_RX0 @ 121
  .word interrupt.CAN3_RX1 @ 122
  .word interrupt.CAN3_SCE @ 123
  .word interrupt.JPEG @ 124
  .word interrupt.MDIOS @ 125
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

