#!/usr/bin/python
# -*- coding: utf-8 -*-

#-------------------------------------------------------------------------------
# INTERRUPT DICTIONARY, MK20D7: MK20D7 Freescale Microcontroller
#-------------------------------------------------------------------------------

def interruptNames () :
  result = {}
  result ["NMI"] = 2
  result ["HardFault"] = 3
  result ["MemManage"] = 4
  result ["BusFault"] = 5
  result ["UsageFault"] = 6
  result ["SVC"] = 11
  result ["DebugMonitor"] = 12
  result ["PendSV"] = 14
  result ["SysTick"] = 15
  result ["INT_DMA0"] = 32
  result ["INT_DMA1"] = 33
  result ["INT_DMA2"] = 34
  result ["INT_DMA3"] = 35
  result ["INT_DMA4"] = 36
  result ["INT_DMA5"] = 37
  result ["INT_DMA6"] = 38
  result ["INT_DMA7"] = 39
  result ["INT_DMA8"] = 40
  result ["INT_DMA9"] = 41
  result ["INT_DMA10"] = 42
  result ["INT_DMA11"] = 43
  result ["INT_DMA12"] = 44
  result ["INT_DMA13"] = 45
  result ["INT_DMA14"] = 46
  result ["INT_DMA15"] = 47
  result ["INT_DMA_Error"] = 48
  result ["INT_FTFL"] = 50
  result ["INT_LVD_LVW"] = 52
  result ["INT_LLW"] = 53
  result ["INT_Watchdog"] = 54
  result ["INT_I2C0"] = 56
  result ["INT_I2C1"] = 57
  result ["INT_SPI0"] = 58
  result ["INT_SPI1"] = 59
  result ["INT_CAN0_ORed_Message_buffer"] = 61
  result ["INT_CAN0_Bus_Off"] = 62
  result ["INT_CAN0_Error"] = 63
  result ["INT_CAN0_Tx_Warning"] = 64
  result ["INT_CAN0_Rx_Warning"] = 65
  result ["INT_CAN0_Wake_Up"] = 66
  result ["INT_I2S0_Tx"] = 67
  result ["INT_I2S0_Rx"] = 68
  result ["INT_UART0_LON"] = 76
  result ["INT_UART0_RX_TX"] = 77
  result ["INT_UART0_ERR"] = 78
  result ["INT_UART1_RX_TX"] = 79
  result ["INT_UART1_ERR"] = 80
  result ["INT_UART2_RX_TX"] = 81
  result ["INT_UART2_ERR"] = 82
  result ["INT_UART3_RX_TX"] = 83
  result ["INT_UART3_ERR"] = 84
  result ["INT_UART4_RX_TX"] = 85
  result ["INT_UART4_ERR"] = 86
  result ["INT_ADC0"] = 89
  result ["INT_ADC1"] = 90
  result ["INT_CMP0"] = 91
  result ["INT_CMP1"] = 92
  result ["INT_CMP2"] = 93
  result ["INT_FTM0"] = 94
  result ["INT_FTM1"] = 95
  result ["INT_FTM2"] = 96
  result ["INT_CMT"] = 97
  result ["INT_RTC"] = 98
  result ["INT_RTC_Seconds"] = 99
  result ["INT_PIT0"] = 100
  result ["INT_PIT1"] = 101
  result ["INT_PIT2"] = 102
  result ["INT_PIT3"] = 103
  result ["INT_PDB0"] = 104
  result ["INT_USB0"] = 105
  result ["INT_USBDCD"] = 106
  result ["INT_Reserved95"] = 111
  result ["INT_DAC0"] = 113
  result ["INT_TSI0"] = 115
  result ["INT_LPTimer"] = 117
  result ["INT_PORTA"] = 119
  result ["INT_PORTB"] = 120
  result ["INT_PORTC"] = 121
  result ["INT_PORTD"] = 122
  result ["INT_PORTE"] = 123
  return result

#-------------------------------------------------------------------------------

