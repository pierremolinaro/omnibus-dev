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
declare void @as_sectionHandler () nounwind

@startup = constant %vectorStructSeq {
  i32* @__system_stack_end,
;--- ARM Core System Handler Vectors
  [15  x void()*] [
    void()* @as_resetHandler, ; 1
    void()* @!FUNC!NMIHandler, ; 2
    void()* @as_sectionHandler, ; 3
    void()* @!FUNC!MemManageHandler, ; 4
    void()* @!FUNC!BusFaultHandler, ; 5
    void()* @!FUNC!UsageFaultHandler, ; 6
    void()* null, ; 7, reserved
    void()* null, ; 8, reserved
    void()* null, ; 9, reserved
    void()* null, ; 10, reserved
    void()* @as_svcHandler, ; 11
    void()* @!FUNC!DebugMonitorHandler, ; 12
    void()* null, ; 13, reserved
    void()* @!FUNC!PendSVHandler, ; 14
    void()* @as_systickHandler  ; 15
  ],
;--- Non-Core Vectors
  [240  x void()*] [
    void()* @!FUNC!DMAChannel0TranfertCompleteHandler, ; 16
    void()* @!FUNC!DMAChannel1TranfertCompleteHandler, ; 17
    void()* @!FUNC!DMAChannel2TranfertCompleteHandler, ; 18
    void()* @!FUNC!DMAChannel3TranfertCompleteHandler, ; 19
    void()* @!FUNC!DMAChannel4TranfertCompleteHandler, ; 20
    void()* @!FUNC!DMAChannel5TranfertCompleteHandler, ; 21
    void()* @!FUNC!DMAChannel6TranfertCompleteHandler, ; 22
    void()* @!FUNC!DMAChannel7TranfertCompleteHandler, ; 23
    void()* @!FUNC!DMAChannel8TranfertCompleteHandler, ; 24
    void()* @!FUNC!DMAChannel9TranfertCompleteHandler, ; 25
    void()* @!FUNC!DMAChannel10TranfertCompleteHandler, ; 26
    void()* @!FUNC!DMAChannel11TranfertCompleteHandler, ; 27
    void()* @!FUNC!DMAChannel12TranfertCompleteHandler, ; 28
    void()* @!FUNC!DMAChannel13TranfertCompleteHandler, ; 29
    void()* @!FUNC!DMAChannel14TranfertCompleteHandler, ; 30
    void()* @!FUNC!DMAChannel15TranfertCompleteHandler, ; 31
    void()* @!FUNC!DMAErrorHandler, ; 32
    void()* null, ; 33
    void()* @!FUNC!flashMemoryCommandCompleteHandler, ; 34
    void()* @!FUNC!flashMemoryReadCollisionHandler, ; 35
    void()* @!FUNC!modeControllerHandler, ; 36
    void()* @!FUNC!LLWUHandler, ; 37
    void()* @!FUNC!WDOGEWMHandler, ; 38
    void()* null, ; 39
    void()* @!FUNC!I2C0Handler, ; 40
    void()* @!FUNC!I2C1Handler, ; 41
    void()* @!FUNC!SPI0Handler, ; 42
    void()* @!FUNC!SPI1Handler, ; 43
    void()* null, ; 44
    void()* @!FUNC!CAN0MessageBufferHandler, ; 45
    void()* @!FUNC!CAN0BusOffHandler, ; 46
    void()* @!FUNC!CAN0ErrorHandler, ; 47
    void()* @!FUNC!CAN0TransmitWarningHandler, ; 48
    void()* @!FUNC!CAN0ReceiveWarningHandler, ; 49
    void()* @!FUNC!CAN0WakeUpHandler, ; 50
    void()* @!FUNC!I2S0TransmitHandler, ; 51
    void()* @!FUNC!I2S0ReceiveHandler, ; 52
    void()* null, ; 53
    void()* null, ; 54
    void()* null, ; 55
    void()* null, ; 56
    void()* null, ; 57
    void()* null, ; 58
    void()* null, ; 59
    void()* @!FUNC!UART0LONHandler, ; 60
    void()* @!FUNC!UART0StatusHandler, ; 61
    void()* @!FUNC!UART0ErrorHandler, ; 62
    void()* @!FUNC!UART1StatusHandler, ; 63
    void()* @!FUNC!UART1ErrorHandler, ; 64
    void()* @!FUNC!UART2StatusHandler, ; 65
    void()* @!FUNC!UART2ErrorHandler, ; 66
    void()* null, ; 67
    void()* null, ; 68
    void()* null, ; 69
    void()* null, ; 70
    void()* null, ; 71
    void()* null, ; 72
    void()* @!FUNC!ADC0Handler, ; 73
    void()* @!FUNC!ADC1Handler, ; 74
    void()* @!FUNC!CMP0Handler, ; 75
    void()* @!FUNC!CMP1Handler, ; 76
    void()* @!FUNC!CMP2Handler, ; 77
    void()* @!FUNC!FMT0Handler, ; 78
    void()* @!FUNC!FMT1Handler, ; 79
    void()* @!FUNC!FMT2Handler, ; 80
    void()* @!FUNC!CMTHandler, ; 81
    void()* @!FUNC!RTCAlarmHandler, ; 82
    void()* @!FUNC!RTCSecondHandler, ; 83
    void()* @!FUNC!PITChannel0Handler, ; 84
    void()* @!FUNC!PITChannel1Handler, ; 85
    void()* @!FUNC!PITChannel2Handler, ; 86
    void()* @!FUNC!PITChannel3Handler, ; 87
    void()* @!FUNC!PDBHandler, ; 88
    void()* @!FUNC!USBOTGHandler, ; 89
    void()* @!FUNC!USBChargerDetectHandler, ; 90
    void()* null, ; 91
    void()* null, ; 92
    void()* null, ; 93
    void()* null, ; 94
    void()* null, ; 95
    void()* null, ; 96
    void()* @!FUNC!DAC0Handler, ; 97
    void()* null, ; 98
    void()* @!FUNC!TSIHandler, ; 99
    void()* @!FUNC!MCGHandler, ; 100
    void()* @!FUNC!lowPowerTimerHandler, ; 101
    void()* null, ; 102
    void()* @!FUNC!pinDetectPortAHandler, ; 103
    void()* @!FUNC!pinDetectPortBHandler, ; 104
    void()* @!FUNC!pinDetectPortCHandler, ; 105
    void()* @!FUNC!pinDetectPortDHandler, ; 106
    void()* @!FUNC!pinDetectPortEHandler, ; 107
    void()* null, ; 108
    void()* null, ; 109
    void()* @!FUNC!softwareInterruptHandler, ; 110
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

define internal void @clearBSS () nounwind minsize optsize {
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

define internal void @copyData () nounwind minsize optsize {
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

define void @configuration.on.boot () nounwind minsize optsize {
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
