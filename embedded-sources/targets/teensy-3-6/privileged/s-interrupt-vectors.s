@----------------------------------------------------------------------------------------------------------------------*
@   INTERRUPT VECTOR                                                                                                   *
@----------------------------------------------------------------------------------------------------------------------*

	.section	.isr_vector,"a",%progbits

  .word __system_stack_end
@--- ARM Core System Handler Vectors
  .word as_reset_handler @ 1
  .word !ISR!NMI @ 2
  .word !ISR!HardFault @ 3
  .word !ISR!MemManage @ 4
  .word !ISR!BusFault @ 5
  .word !ISR!UsageFault @ 6
  .word -1 @ 7, reserved
  .word -1 @ 8, reserved
  .word -1 @ 9, reserved
  .word -1 @ 10, reserved
  .word as_svc_handler @ 11
  .word !ISR!DebugMonitor @ 12
  .word -1 @ 13, reserved
  .word !ISR!PendSV @ 14
  .word !ISR!systick @ 15
@--- Non-Core Vectors
  .word !ISR!DMAChannel_0_16_TransferComplete @ 16
  .word !ISR!DMAChannel_1_17_TransferComplete @ 17
  .word !ISR!DMAChannel_2_18_TransferComplete @ 18
  .word !ISR!DMAChannel_3_19_TransferComplete @ 19
  .word !ISR!DMAChannel_4_20_TransferComplete @ 20
  .word !ISR!DMAChannel_5_21_TransferComplete @ 21
  .word !ISR!DMAChannel_6_22_TransferComplete @ 22
  .word !ISR!DMAChannel_7_23_TransferComplete @ 23
  .word !ISR!DMAChannel_8_24_TransferComplete @ 24
  .word !ISR!DMAChannel_9_25_TransferComplete @ 25
  .word !ISR!DMAChannel_10_26_TransferComplete @ 26
  .word !ISR!DMAChannel_11_27_TransferComplete @ 27
  .word !ISR!DMAChannel_12_28_TransferComplete @ 28
  .word !ISR!DMAChannel_13_29_TransferComplete @ 29
  .word !ISR!DMAChannel_14_30_TransferComplete @ 30
  .word !ISR!DMAChannel_15_31_TransferComplete @ 31
  .word !ISR!DMAError @ 32
  .word !ISR!MCM @ 33
  .word !ISR!FlashMemoryCommandComplete @ 34
  .word !ISR!FlashMemoryReadCollision @ 35
  .word !ISR!LowVoltage @ 36
  .word !ISR!LowLeakageWakeup @ 37
  .word !ISR!WDOG_EWM @ 38
  .word !ISR!RandomNumberGenerator @ 39
  .word !ISR!I2C0 @ 40
  .word !ISR!I2C1 @ 41
  .word !ISR!SPI0 @ 42
  .word !ISR!SPI1 @ 43
  .word !ISR!I2S0Transmit @ 44
  .word !ISR!I2S0Receive @ 45
  .word -1 @ 64
  .word !ISR!UART0Status @ 47
  .word !ISR!UART0Error @ 48
  .word !ISR!UART1Status @ 49
  .word !ISR!UART1Error @ 50
  .word !ISR!UART2Status @ 51
  .word !ISR!UART2Error @ 52
  .word !ISR!UART3Status @ 53
  .word !ISR!UART3Error @ 54
  .word !ISR!ADC0 @ 55
  .word !ISR!CMP0 @ 56
  .word !ISR!CMP1 @ 57
  .word !ISR!FMT0 @ 58
  .word !ISR!FMT1 @ 59
  .word !ISR!FMT2 @ 60
  .word !ISR!CMT @ 61
  .word !ISR!RTCAlarm @ 62
  .word !ISR!RTCSecond @ 63
  .word !ISR!PITChannel0 @ 64
  .word !ISR!PITChannel1 @ 65
  .word !ISR!PITChannel2 @ 66
  .word !ISR!PITChannel3 @ 67
  .word !ISR!PDB @ 68
  .word !ISR!USBFS_OTG @ 69
  .word !ISR!USBFSChargerDetect @ 70
  .word -1 @ 71
  .word !ISR!DAC0 @ 72
  .word !ISR!MCG @ 73
  .word !ISR!lowPowerTimer @ 74
  .word !ISR!pinDetectPortA @ 75
  .word !ISR!pinDetectPortB @ 76
  .word !ISR!pinDetectPortC @ 77
  .word !ISR!pinDetectPortD @ 78
  .word !ISR!pinDetectPortE @ 79
  .word !ISR!softwareInterrupt @ 80
  .word !ISR!SPI2 @ 81
  .word !ISR!UART4Status @ 82
  .word !ISR!UART4Error @ 83
  .word -1 @ 84
  .word -1 @ 85
  .word !ISR!CMP2 @ 86
  .word !ISR!FMT3 @ 87
  .word !ISR!DAC1 @ 88
  .word !ISR!ADC1 @ 89
  .word !ISR!I2C2 @ 90
  .word !ISR!CAN0MessageBuffer @ 91
  .word !ISR!CAN0BusOff @ 92
  .word !ISR!CAN0Error @ 93
  .word !ISR!CAN0TransmitWarning @ 94
  .word !ISR!CAN0ReceiveWarning @ 95
  .word !ISR!CAN0WakeUp @ 96
  .word !ISR!SDHC @ 97
  .word !ISR!EthernetTimer @ 98
  .word !ISR!EthernetTransmit @ 99
  .word !ISR!EthernetReceive @ 100
  .word !ISR!EthernetError @ 101
  .word !ISR!LPUART0Status @ 102
  .word !ISR!TSI0 @ 103
  .word !ISR!TPM1 @ 104
  .word !ISR!TPM2 @ 105
  .word !ISR!USB_HS_DCD_PHY @ 106
  .word !ISR!I2C3 @ 107
  .word !ISR!CMP3 @ 108
  .word !ISR!USB_HS_OTG @ 109
  .word !ISR!CAN1MessageBuffer @ 110
  .word !ISR!CAN1BusOff @ 111
  .word !ISR!CAN1Error @ 112
  .word !ISR!CAN1TransmitWarning @ 113
  .word !ISR!CAN1ReceiveWarning @ 114
  .word !ISR!CAN0WakeUp @ 115

  .word                 -1, -1, -1, -1 @ 116 to 119
  .word -1, -1, -1, -1, -1, -1, -1, -1 @ 120 to 127
  .word -1, -1, -1, -1, -1, -1, -1, -1 @ 128 to 135
  .word -1, -1, -1, -1, -1, -1, -1, -1 @ 136 to 143
  .word -1, -1, -1, -1, -1, -1, -1, -1 @ 144 to 151
  .word -1, -1, -1, -1, -1, -1, -1, -1 @ 152 to 159
  .word -1, -1, -1, -1, -1, -1, -1, -1 @ 160 to 167
  .word -1, -1, -1, -1, -1, -1, -1, -1 @ 168 to 175
  .word -1, -1, -1, -1, -1, -1, -1, -1 @ 176 to 183
  .word -1, -1, -1, -1, -1, -1, -1, -1 @ 184 to 191
  .word -1, -1, -1, -1, -1, -1, -1, -1 @ 192 to 199
  .word -1, -1, -1, -1, -1, -1, -1, -1 @ 200 to 207
  .word -1, -1, -1, -1, -1, -1, -1, -1 @ 208 to 215
  .word -1, -1, -1, -1, -1, -1, -1, -1 @ 216 to 223
  .word -1, -1, -1, -1, -1, -1, -1, -1 @ 224 to 231
  .word -1, -1, -1, -1, -1, -1, -1, -1 @ 232 to 239
  .word -1, -1, -1, -1, -1, -1, -1, -1 @ 240 to 247
  .word -1, -1, -1, -1, -1, -1, -1, -1 @ 248 to 255
@--- Flash magic values
  .word -1
  .word -1
  .word -1
  .word -2

