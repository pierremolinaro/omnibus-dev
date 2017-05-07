@----------------------------------------------------------------------------------------------------------------------*
@   INTERRUPT VECTOR                                                                                                   *
@----------------------------------------------------------------------------------------------------------------------*

	.section	.isr_vector,"a",%progbits

  .word __system_stack_end
@--- ARM Core System Handler Vectors
  .word as_reset_handler @ 1
  .word !ISR!NMI @ 2
  .word as_section_handler @ 3
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
  .word !ISR!DMAChannel0TranfertComplete @ 16
  .word !ISR!DMAChannel1TranfertComplete @ 17
  .word !ISR!DMAChannel2TranfertComplete @ 18
  .word !ISR!DMAChannel3TranfertComplete @ 19
  .word !ISR!DMAChannel4TranfertComplete @ 20
  .word !ISR!DMAChannel5TranfertComplete @ 21
  .word !ISR!DMAChannel6TranfertComplete @ 22
  .word !ISR!DMAChannel7TranfertComplete @ 23
  .word !ISR!DMAChannel8TranfertComplete @ 24
  .word !ISR!DMAChannel9TranfertComplete @ 25
  .word !ISR!DMAChannel10TranfertComplete @ 26
  .word !ISR!DMAChannel11TranfertComplete @ 27
  .word !ISR!DMAChannel12TranfertComplete @ 28
  .word !ISR!DMAChannel13TranfertComplete @ 29
  .word !ISR!DMAChannel14TranfertComplete @ 30
  .word !ISR!DMAChannel15TranfertComplete @ 31
  .word !ISR!DMAError @ 32
  .word -1 @ 33
  .word !ISR!flashMemoryCommandComplete @ 34
  .word !ISR!flashMemoryReadCollision @ 35
  .word !ISR!modeController @ 36
  .word !ISR!LLWU @ 37
  .word !ISR!WDOGEWM @ 38
  .word -1 @ 39
  .word !ISR!I2C0 @ 40
  .word !ISR!I2C1 @ 41
  .word !ISR!SPI0 @ 42
  .word !ISR!SPI1 @ 43
  .word -1 @ 44
  .word !ISR!CAN0MessageBuffer @ 45
  .word !ISR!CAN0BusOff @ 46
  .word !ISR!CAN0Error @ 47
  .word !ISR!CAN0TransmitWarning @ 48
  .word !ISR!CAN0ReceiveWarning @ 49
  .word !ISR!CAN0WakeUp @ 50
  .word !ISR!I2S0Transmit @ 51
  .word !ISR!I2S0Receive @ 52
  .word -1 @ 53
  .word -1 @ 54
  .word -1 @ 55
  .word -1 @ 56
  .word -1 @ 57
  .word -1 @ 58
  .word -1 @ 59
  .word !ISR!UART0LON @ 60
  .word !ISR!UART0Status @ 61
  .word !ISR!UART0Error @ 62
  .word !ISR!UART1Status @ 63
  .word !ISR!UART1Error @ 64
  .word !ISR!UART2Status @ 65
  .word !ISR!UART2Error @ 66
  .word -1 @ 67
  .word -1 @ 68
  .word -1 @ 69
  .word -1 @ 70
  .word -1 @ 71
  .word -1 @ 72
  .word !ISR!ADC0 @ 73
  .word !ISR!ADC1 @ 74
  .word !ISR!CMP0 @ 75
  .word !ISR!CMP1 @ 76
  .word !ISR!CMP2 @ 77
  .word !ISR!FMT0 @ 78
  .word !ISR!FMT1 @ 79
  .word !ISR!FMT2 @ 80
  .word !ISR!CMT @ 81
  .word !ISR!RTCAlarm @ 82
  .word !ISR!RTCSecond @ 83
  .word !ISR!PITChannel0 @ 84
  .word !ISR!PITChannel1 @ 85
  .word !ISR!PITChannel2 @ 86
  .word !ISR!PITChannel3 @ 87
  .word !ISR!PDB @ 88
  .word !ISR!USBOTG @ 89
  .word !ISR!USBChargerDetect @ 90
  .word -1 @ 91
  .word -1 @ 92
  .word -1 @ 93
  .word -1 @ 94
  .word -1 @ 95
  .word -1 @ 96
  .word !ISR!DAC0 @ 97
  .word -1 @ 98
  .word !ISR!TSI @ 99
  .word !ISR!MCG @ 100
  .word !ISR!lowPowerTimer @ 101
  .word -1 @ 102
  .word !ISR!pinDetectPortA @ 103
  .word !ISR!pinDetectPortB @ 104
  .word !ISR!pinDetectPortC @ 105
  .word !ISR!pinDetectPortD @ 106
  .word !ISR!pinDetectPortE @ 107
  .word -1 @ 108
  .word -1 @ 109
  .word !ISR!softwareInterrupt @ 110
  .word -1 @ 111
  .word -1, -1, -1, -1, -1, -1, -1, -1 @ 112 to 119
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

