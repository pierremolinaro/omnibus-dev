target datalayout = "e-m:e-p:32:32-i64:64-v128:64:128-a:0:32-n32-S64"
target triple = "thumbv7em-none--eabi"

;----------------------------------------------------------------------------------------------------------------------*
;    ISR Vector                                                                                                        *
;----------------------------------------------------------------------------------------------------------------------*

%vectorStructSeq = type {
  i32*,            ; unsigned * mStackPointer
  [15  x void()*], ; void (* mCoreSystemHandlerVector [15]) (void) ;
  [240 x void()*], ; void (* mNonCoreHandlerVector [240]) (void) ;
  [4   x i32]      ; int mFlash [4] ;
} 

;----------------------------------------------------------------------------------------------------------------------*

@__system_stack_end = external global i32

;----------------------------------------------------------------------------------------------------------------------*

declare void @as_resetHandler () nounwind
declare void @as_svcHandler () nounwind
declare void @as_systickHandler () nounwind

@startup = constant %vectorStructSeq {
  i32* @__system_stack_end,
;--- ARM Core System Handler Vectors
  [15  x void()*] [
    void()* @as_resetHandler, ; 1
    void()* @!PROC!NMIHandler, ; 2
    void()* @!PROC!HardFaultHandler, ; 3
    void()* @!PROC!MemManageHandler, ; 4
    void()* @!PROC!BusFaultHandler, ; 5
    void()* @!PROC!UsageFaultHandler, ; 6
    void()* null, ; 7, reserved
    void()* null, ; 8, reserved
    void()* null, ; 9, reserved
    void()* null, ; 10, reserved
    void()* @as_svcHandler, ; 11
    void()* @!PROC!DebugMonitorHandler, ; 12
    void()* null, ; 13, reserved
    void()* @!PROC!PendSVHandler, ; 14
    void()* @as_systickHandler  ; 15
  ],
;--- Non-Core Vectors
  [240  x void()*] [
    void()* @!PROC!DMAChannel0TranfertCompleteHandler, ; 16
    void()* @!PROC!DMAChannel1TranfertCompleteHandler, ; 17
    void()* @!PROC!DMAChannel2TranfertCompleteHandler, ; 18
    void()* @!PROC!DMAChannel3TranfertCompleteHandler, ; 19
    void()* @!PROC!DMAChannel4TranfertCompleteHandler, ; 20
    void()* @!PROC!DMAChannel5TranfertCompleteHandler, ; 21
    void()* @!PROC!DMAChannel6TranfertCompleteHandler, ; 22
    void()* @!PROC!DMAChannel7TranfertCompleteHandler, ; 23
    void()* @!PROC!DMAChannel8TranfertCompleteHandler, ; 24
    void()* @!PROC!DMAChannel9TranfertCompleteHandler, ; 25
    void()* @!PROC!DMAChannel10TranfertCompleteHandler, ; 26
    void()* @!PROC!DMAChannel11TranfertCompleteHandler, ; 27
    void()* @!PROC!DMAChannel12TranfertCompleteHandler, ; 28
    void()* @!PROC!DMAChannel13TranfertCompleteHandler, ; 29
    void()* @!PROC!DMAChannel14TranfertCompleteHandler, ; 30
    void()* @!PROC!DMAChannel15TranfertCompleteHandler, ; 31
    void()* @!PROC!DMAErrorHandler, ; 32
    void()* null, ; 33
    void()* @!PROC!flashMemoryCommandCompleteHandler, ; 34
    void()* @!PROC!flashMemoryReadCollisionHandler, ; 35
    void()* @!PROC!modeControllerHandler, ; 36
    void()* @!PROC!LLWUHandler, ; 37
    void()* @!PROC!WDOGEWMHandler, ; 38
    void()* null, ; 39
    void()* @!PROC!I2C0Handler, ; 40
    void()* @!PROC!I2C1Handler, ; 41
    void()* @!PROC!SPI0Handler, ; 42
    void()* @!PROC!SPI1Handler, ; 43
    void()* null, ; 44
    void()* @!PROC!CAN0MessageBufferHandler, ; 45
    void()* @!PROC!CAN0BusOffHandler, ; 46
    void()* @!PROC!CAN0ErrorHandler, ; 47
    void()* @!PROC!CAN0TransmitWarningHandler, ; 48
    void()* @!PROC!CAN0ReceiveWarningHandler, ; 49
    void()* @!PROC!CAN0WakeUpHandler, ; 50
    void()* @!PROC!I2S0TransmitHandler, ; 51
    void()* @!PROC!I2S0ReceiveHandler, ; 52
    void()* null, ; 53
    void()* null, ; 54
    void()* null, ; 55
    void()* null, ; 56
    void()* null, ; 57
    void()* null, ; 58
    void()* null, ; 59
    void()* @!PROC!UART0LONHandler, ; 60
    void()* @!PROC!UART0StatusHandler, ; 61
    void()* @!PROC!UART0ErrorHandler, ; 62
    void()* @!PROC!UART1StatusHandler, ; 63
    void()* @!PROC!UART1ErrorHandler, ; 64
    void()* @!PROC!UART2StatusHandler, ; 65
    void()* @!PROC!UART2ErrorHandler, ; 66
    void()* null, ; 67
    void()* null, ; 68
    void()* null, ; 69
    void()* null, ; 70
    void()* null, ; 71
    void()* null, ; 72
    void()* @!PROC!ADC0Handler, ; 73
    void()* @!PROC!ADC1Handler, ; 74
    void()* @!PROC!CMP0Handler, ; 75
    void()* @!PROC!CMP1Handler, ; 76
    void()* @!PROC!CMP2Handler, ; 77
    void()* @!PROC!FMT0Handler, ; 78
    void()* @!PROC!FMT1Handler, ; 79
    void()* @!PROC!FMT2Handler, ; 80
    void()* @!PROC!CMTHandler, ; 81
    void()* @!PROC!RTCAlarmHandler, ; 82
    void()* @!PROC!RTCSecondHandler, ; 83
    void()* @!PROC!PITChannel0Handler, ; 84
    void()* @!PROC!PITChannel1Handler, ; 85
    void()* @!PROC!PITChannel2Handler, ; 86
    void()* @!PROC!PITChannel3Handler, ; 87
    void()* @!PROC!PDBHandler, ; 88
    void()* @!PROC!USBOTGHandler, ; 89
    void()* @!PROC!USBChargerDetectHandler, ; 90
    void()* null, ; 91
    void()* null, ; 92
    void()* null, ; 93
    void()* null, ; 94
    void()* null, ; 95
    void()* null, ; 96
    void()* @!PROC!DAC0Handler, ; 97
    void()* null, ; 98
    void()* @!PROC!TSIHandler, ; 99
    void()* @!PROC!MCGHandler, ; 100
    void()* @!PROC!lowPowerTimerHandler, ; 101
    void()* null, ; 102
    void()* @!PROC!pinDetectPortAHandler, ; 103
    void()* @!PROC!pinDetectPortBHandler, ; 104
    void()* @!PROC!pinDetectPortCHandler, ; 105
    void()* @!PROC!pinDetectPortDHandler, ; 106
    void()* @!PROC!pinDetectPortEHandler, ; 107
    void()* null, ; 108
    void()* null, ; 109
    void()* @!PROC!softwareInterruptHandler, ; 110
    void()* null, ; 111
    void()* null, void()* null, void()* null, void()* null, void()* null, void()* null, void()* null, void()* null, ; 112 à 119
    void()* null, void()* null, void()* null, void()* null, void()* null, void()* null, void()* null, void()* null, ; 120 à 127
    void()* null, void()* null, void()* null, void()* null, void()* null, void()* null, void()* null, void()* null, ; 128 à 135
    void()* null, void()* null, void()* null, void()* null, void()* null, void()* null, void()* null, void()* null, ; 136 à 143
    void()* null, void()* null, void()* null, void()* null, void()* null, void()* null, void()* null, void()* null, ; 144 à 151
    void()* null, void()* null, void()* null, void()* null, void()* null, void()* null, void()* null, void()* null, ; 152 à 159
    void()* null, void()* null, void()* null, void()* null, void()* null, void()* null, void()* null, void()* null, ; 160 à 167
    void()* null, void()* null, void()* null, void()* null, void()* null, void()* null, void()* null, void()* null, ; 168 à 175
    void()* null, void()* null, void()* null, void()* null, void()* null, void()* null, void()* null, void()* null, ; 176 à 183
    void()* null, void()* null, void()* null, void()* null, void()* null, void()* null, void()* null, void()* null, ; 184 à 191
    void()* null, void()* null, void()* null, void()* null, void()* null, void()* null, void()* null, void()* null, ; 192 à 199
    void()* null, void()* null, void()* null, void()* null, void()* null, void()* null, void()* null, void()* null, ; 200 à 207
    void()* null, void()* null, void()* null, void()* null, void()* null, void()* null, void()* null, void()* null, ; 208 à 215
    void()* null, void()* null, void()* null, void()* null, void()* null, void()* null, void()* null, void()* null, ; 216 à 223
    void()* null, void()* null, void()* null, void()* null, void()* null, void()* null, void()* null, void()* null, ; 224 à 231
    void()* null, void()* null, void()* null, void()* null, void()* null, void()* null, void()* null, void()* null, ; 232 à 239
    void()* null, void()* null, void()* null, void()* null, void()* null, void()* null, void()* null, void()* null, ; 240 à 247
    void()* null, void()* null, void()* null, void()* null, void()* null, void()* null, void()* null, void()* null  ; 248 à 255
  ],
;--- Flash magic values
  [4   x i32] [i32 -1, i32 -1, i32 -1, i32 -2]
}, section ".isr_vector"

;----------------------------------------------------------------------------------------------------------------------*
;   Clear BSS                                                                                                          *
;----------------------------------------------------------------------------------------------------------------------*
;void clearBSS (void) {
;  extern unsigned __bss_start ;
;  extern unsigned __bss_end ;
;  unsigned * p = & __bss_start ;
;  while (p != & __bss_end) {
;    * p = 0 ;
;    p ++ ;
;  }
;}
;----------------------------------------------------------------------------------------------------------------------*

@__bss_start = external global [0 x i32]
@__bss_end = external global [0 x i32]

;----------------------------------------------------------------------------------------------------------------------*

define internal void @clearBSS () nounwind {
entry:
  %startPtr = getelementptr  [0 x i32], [0 x i32]* @__bss_start, i32 0, i32 0
  %endPtr = getelementptr  [0 x i32], [0 x i32]* @__bss_end, i32 0, i32 0
  br label %bssLoopTest
 
bssLoopTest:
  %p = phi i32* [%startPtr, %entry], [%p.next, %bssLoop]
  %completed = icmp eq i32* %p, %endPtr
  br i1 %completed, label %clearCompleted, label %bssLoop
 
bssLoop:
  store i32 0, i32* %p, align 4
  %p.next = getelementptr inbounds i32, i32* %p, i32 1
  br label %bssLoopTest
 
clearCompleted:
  ret void
}

;----------------------------------------------------------------------------------------------------------------------*
;   Copy .data section                                                                                                 *
;----------------------------------------------------------------------------------------------------------------------*
;void copyData (void) {
;  extern unsigned __data_start ;
;  extern unsigned __data_end ;
;  extern unsigned __data_load_start ;
;  unsigned * pSrc = & __data_load_start ;
;  unsigned * pDest = & __data_start ;
;  while (pDest != & __data_end) {
;    * pDest = * pSrc ;
;    pDest ++ ;
;    pSrc ++ ;
;  }
;}
;----------------------------------------------------------------------------------------------------------------------*

@__data_start = external global [0 x i32]
@__data_end = external global [0 x i32]
@__data_load_start = external global [0 x i32]

;----------------------------------------------------------------------------------------------------------------------*

define internal void @copyData () nounwind {
entry:
  %data_start = getelementptr  [0 x i32], [0 x i32]* @__data_start, i32 0, i32 0
  %data_end = getelementptr  [0 x i32], [0 x i32]* @__data_end, i32 0, i32 0
  %data_load_start = getelementptr  [0 x i32], [0 x i32]* @__data_load_start, i32 0, i32 0
  br label %copyLoop.test
 
copyLoop.test:
  %pDest = phi i32* [%data_start, %entry], [%pDestInct, %copyLoop]
  %pSource = phi i32* [%data_load_start, %entry], [%pSourceInc, %copyLoop]
  %equal = icmp eq i32* %pDest, %data_end
  br i1 %equal, label %copyCompleted, label %copyLoop
 
copyLoop:
  %value = load i32, i32* %pSource
  store i32 %value, i32* %pDest, align 4
  %pDestInct = getelementptr inbounds i32, i32* %pDest, i32 1
  %pSourceInc = getelementptr inbounds i32, i32* %pSource, i32 1
  br label %copyLoop.test

copyCompleted:
  ret void
}

;----------------------------------------------------------------------------------------------------------------------*
;   configuration.on.boot                                                                                              *
;----------------------------------------------------------------------------------------------------------------------*

define void @configuration.on.boot () nounwind {
  call void @boot ()
  call void @clearBSS ()
  call void @copyData ()
  call void @init ()
  call void @start.tasks ()
  ret  void
}

;----------------------------------------------------------------------------------------------------------------------*
;   Real time Kernel interface                                                                                         *
;----------------------------------------------------------------------------------------------------------------------*

;--- Create task 
declare void @kernel_create_task (i32 %inTaskIndex, i32* %inStackBufferAddress, i32 %inStackBufferSize, void ()* %inTaskRoutine) nounwind
