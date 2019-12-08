#!/usr/bin/python
# -*- coding: utf-8 -*-

#-------------------------------------------------------------------------------
# INTERRUPT DICTIONARY, MK64F12: MK64F12 Freescale Microcontroller
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
  result ["DMA0"] = 16
  result ["DMA1"] = 17
  result ["DMA2"] = 18
  result ["DMA3"] = 19
  result ["DMA4"] = 20
  result ["DMA5"] = 21
  result ["DMA6"] = 22
  result ["DMA7"] = 23
  result ["DMA8"] = 24
  result ["DMA9"] = 25
  result ["DMA10"] = 26
  result ["DMA11"] = 27
  result ["DMA12"] = 28
  result ["DMA13"] = 29
  result ["DMA14"] = 30
  result ["DMA15"] = 31
  result ["DMA_Error"] = 32
  result ["MCM"] = 33
  result ["FTFE"] = 34
  result ["Read_Collision"] = 35
  result ["LVD_LVW"] = 36
  result ["LLWU"] = 37
  result ["WDOG_EWM"] = 38
  result ["RNG"] = 39
  result ["I2C0"] = 40
  result ["I2C1"] = 41
  result ["SPI0"] = 42
  result ["SPI1"] = 43
  result ["I2S0_Tx"] = 44
  result ["I2S0_Rx"] = 45
  result ["UART0_LON"] = 46
  result ["UART0_RX_TX"] = 47
  result ["UART0_ERR"] = 48
  result ["UART1_RX_TX"] = 49
  result ["UART1_ERR"] = 50
  result ["UART2_RX_TX"] = 51
  result ["UART2_ERR"] = 52
  result ["UART3_RX_TX"] = 53
  result ["UART3_ERR"] = 54
  result ["ADC0"] = 55
  result ["CMP0"] = 56
  result ["CMP1"] = 57
  result ["FTM0"] = 58
  result ["FTM1"] = 59
  result ["FTM2"] = 60
  result ["CMT"] = 61
  result ["RTC"] = 62
  result ["RTC_Seconds"] = 63
  result ["PIT0"] = 64
  result ["PIT1"] = 65
  result ["PIT2"] = 66
  result ["PIT3"] = 67
  result ["PDB0"] = 68
  result ["USB0"] = 69
  result ["USBDCD"] = 70
  result ["DAC0"] = 72
  result ["LPTMR0"] = 74
  result ["PORTA"] = 75
  result ["PORTB"] = 76
  result ["PORTC"] = 77
  result ["PORTD"] = 78
  result ["PORTE"] = 79
  result ["SPI2"] = 81
  result ["UART4_RX_TX"] = 82
  result ["UART4_ERR"] = 83
  result ["UART5_RX_TX"] = 84
  result ["UART5_ERR"] = 85
  result ["CMP2"] = 86
  result ["FTM3"] = 87
  result ["DAC1"] = 88
  result ["ADC1"] = 89
  result ["I2C2"] = 90
  result ["CAN0_ORed_Message_buffer"] = 91
  result ["CAN0_Bus_Off"] = 92
  result ["CAN0_Error"] = 93
  result ["CAN0_Tx_Warning"] = 94
  result ["CAN0_Rx_Warning"] = 95
  result ["CAN0_Wake_Up"] = 96
  result ["SDHC"] = 97
  result ["ENET_1588_Timer"] = 98
  result ["ENET_Transmit"] = 99
  result ["ENET_Receive"] = 100
  result ["ENET_Error"] = 101
  return result

#-------------------------------------------------------------------------------

