@-------------------------------------------------------------------------------
@ INTERRUPT VECTORS, MK20D7: MK20D7 Freescale Microcontroller
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
  .word -1 @ 16 (unused)
  .word -1 @ 17 (unused)
  .word -1 @ 18 (unused)
  .word -1 @ 19 (unused)
  .word -1 @ 20 (unused)
  .word -1 @ 21 (unused)
  .word -1 @ 22 (unused)
  .word -1 @ 23 (unused)
  .word -1 @ 24 (unused)
  .word -1 @ 25 (unused)
  .word -1 @ 26 (unused)
  .word -1 @ 27 (unused)
  .word -1 @ 28 (unused)
  .word -1 @ 29 (unused)
  .word -1 @ 30 (unused)
  .word -1 @ 31 (unused)
  .word interrupt.INT_DMA0 @ 32
  .word interrupt.INT_DMA1 @ 33
  .word interrupt.INT_DMA2 @ 34
  .word interrupt.INT_DMA3 @ 35
  .word interrupt.INT_DMA4 @ 36
  .word interrupt.INT_DMA5 @ 37
  .word interrupt.INT_DMA6 @ 38
  .word interrupt.INT_DMA7 @ 39
  .word interrupt.INT_DMA8 @ 40
  .word interrupt.INT_DMA9 @ 41
  .word interrupt.INT_DMA10 @ 42
  .word interrupt.INT_DMA11 @ 43
  .word interrupt.INT_DMA12 @ 44
  .word interrupt.INT_DMA13 @ 45
  .word interrupt.INT_DMA14 @ 46
  .word interrupt.INT_DMA15 @ 47
  .word interrupt.INT_DMA_Error @ 48
  .word -1 @ 49 (unused)
  .word interrupt.INT_FTFL @ 50
  .word -1 @ 51 (unused)
  .word interrupt.INT_LVD_LVW @ 52
  .word interrupt.INT_LLW @ 53
  .word interrupt.INT_Watchdog @ 54
  .word -1 @ 55 (unused)
  .word interrupt.INT_I2C0 @ 56
  .word interrupt.INT_I2C1 @ 57
  .word interrupt.INT_SPI0 @ 58
  .word interrupt.INT_SPI1 @ 59
  .word -1 @ 60 (unused)
  .word interrupt.INT_CAN0_ORed_Message_buffer @ 61
  .word interrupt.INT_CAN0_Bus_Off @ 62
  .word interrupt.INT_CAN0_Error @ 63
  .word interrupt.INT_CAN0_Tx_Warning @ 64
  .word interrupt.INT_CAN0_Rx_Warning @ 65
  .word interrupt.INT_CAN0_Wake_Up @ 66
  .word interrupt.INT_I2S0_Tx @ 67
  .word interrupt.INT_I2S0_Rx @ 68
  .word -1 @ 69 (unused)
  .word -1 @ 70 (unused)
  .word -1 @ 71 (unused)
  .word -1 @ 72 (unused)
  .word -1 @ 73 (unused)
  .word -1 @ 74 (unused)
  .word -1 @ 75 (unused)
  .word interrupt.INT_UART0_LON @ 76
  .word interrupt.INT_UART0_RX_TX @ 77
  .word interrupt.INT_UART0_ERR @ 78
  .word interrupt.INT_UART1_RX_TX @ 79
  .word interrupt.INT_UART1_ERR @ 80
  .word interrupt.INT_UART2_RX_TX @ 81
  .word interrupt.INT_UART2_ERR @ 82
  .word interrupt.INT_UART3_RX_TX @ 83
  .word interrupt.INT_UART3_ERR @ 84
  .word interrupt.INT_UART4_RX_TX @ 85
  .word interrupt.INT_UART4_ERR @ 86
  .word -1 @ 87 (unused)
  .word -1 @ 88 (unused)
  .word interrupt.INT_ADC0 @ 89
  .word interrupt.INT_ADC1 @ 90
  .word interrupt.INT_CMP0 @ 91
  .word interrupt.INT_CMP1 @ 92
  .word interrupt.INT_CMP2 @ 93
  .word interrupt.INT_FTM0 @ 94
  .word interrupt.INT_FTM1 @ 95
  .word interrupt.INT_FTM2 @ 96
  .word interrupt.INT_CMT @ 97
  .word interrupt.INT_RTC @ 98
  .word interrupt.INT_RTC_Seconds @ 99
  .word interrupt.INT_PIT0 @ 100
  .word interrupt.INT_PIT1 @ 101
  .word interrupt.INT_PIT2 @ 102
  .word interrupt.INT_PIT3 @ 103
  .word interrupt.INT_PDB0 @ 104
  .word interrupt.INT_USB0 @ 105
  .word interrupt.INT_USBDCD @ 106
  .word -1 @ 107 (unused)
  .word -1 @ 108 (unused)
  .word -1 @ 109 (unused)
  .word -1 @ 110 (unused)
  .word interrupt.INT_Reserved95 @ 111
  .word -1 @ 112 (unused)
  .word interrupt.INT_DAC0 @ 113
  .word -1 @ 114 (unused)
  .word interrupt.INT_TSI0 @ 115
  .word -1 @ 116 (unused)
  .word interrupt.INT_LPTimer @ 117
  .word -1 @ 118 (unused)
  .word interrupt.INT_PORTA @ 119
  .word interrupt.INT_PORTB @ 120
  .word interrupt.INT_PORTC @ 121
  .word interrupt.INT_PORTD @ 122
  .word interrupt.INT_PORTE @ 123
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

