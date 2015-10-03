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

@startup = constant %vectorStructSeq {
  i32* @__system_stack_end,
;--- ARM Core System Handler Vectors
  [15  x void()*] [
    void()* @ResetISR, ; 1
    void()* @proc_NMIHandler, ; 2
    void()* @proc_HardFaultHandler, ; 3
    void()* @proc_MemManageHandler, ; 4
    void()* @proc_BusFaultHandler, ; 5
    void()* @proc_UsageFaultHandler, ; 6
    void()* null, ; 7, reserved
    void()* null, ; 8, reserved
    void()* null, ; 9, reserved
    void()* null, ; 10, reserved
    void()* @proc_svcHandler, ; 11
    void()* @proc_DebugMonitorHandler, ; 12
    void()* null, ; 13, reserved
    void()* @proc_PendSVHandler, ; 14
    void()* @proc_systickHandler  ; 15
  ],
;--- Non-Core Vectors
  [240  x void()*] [
    void()* @proc_DMAChannel0TranfertCompleteHandler, ; 16
    void()* @proc_DMAChannel1TranfertCompleteHandler, ; 17
    void()* @proc_DMAChannel2TranfertCompleteHandler, ; 18
    void()* @proc_DMAChannel3TranfertCompleteHandler, ; 19
    void()* @proc_DMAChannel4TranfertCompleteHandler, ; 20
    void()* @proc_DMAChannel5TranfertCompleteHandler, ; 21
    void()* @proc_DMAChannel6TranfertCompleteHandler, ; 22
    void()* @proc_DMAChannel7TranfertCompleteHandler, ; 23
    void()* @proc_DMAChannel8TranfertCompleteHandler, ; 24
    void()* @proc_DMAChannel9TranfertCompleteHandler, ; 25
    void()* @proc_DMAChannel10TranfertCompleteHandler, ; 26
    void()* @proc_DMAChannel11TranfertCompleteHandler, ; 27
    void()* @proc_DMAChannel12TranfertCompleteHandler, ; 28
    void()* @proc_DMAChannel13TranfertCompleteHandler, ; 29
    void()* @proc_DMAChannel14TranfertCompleteHandler, ; 30
    void()* @proc_DMAChannel15TranfertCompleteHandler, ; 31
    void()* @proc_DMAErrorHandler, ; 32
    void()* null, ; 33
    void()* @proc_flashMemoryCommandCompleteHandler, ; 34
    void()* @proc_flashMemoryReadCollisionHandler, ; 35
    void()* @proc_modeControllerHandler, ; 36
    void()* @proc_LLWUHandler, ; 37
    void()* @proc_WDOGEWMHandler, ; 38
    void()* null, ; 39
    void()* @proc_I2C0Handler, ; 40
    void()* @proc_I2C1Handler, ; 41
    void()* @proc_SPI0Handler, ; 42
    void()* @proc_SPI1Handler, ; 43
    void()* null, ; 44
    void()* @proc_CAN0MessageBufferHandler, ; 45
    void()* @proc_CAN0BusOffHandler, ; 46
    void()* @proc_CAN0ErrorHandler, ; 47
    void()* @proc_CAN0TransmitWarningHandler, ; 48
    void()* @proc_CAN0ReceiveWarningHandler, ; 49
    void()* @proc_CAN0WakeUpHandler, ; 50
    void()* @proc_I2S0TransmitHandler, ; 51
    void()* @proc_I2S0ReceiveHandler, ; 52
    void()* null, ; 53
    void()* null, ; 54
    void()* null, ; 55
    void()* null, ; 56
    void()* null, ; 57
    void()* null, ; 58
    void()* null, ; 59
    void()* @proc_UART0LONHandler, ; 60
    void()* @proc_UART0StatusHandler, ; 61
    void()* @proc_UART0ErrorHandler, ; 62
    void()* @proc_UART1StatusHandler, ; 63
    void()* @proc_UART1ErrorHandler, ; 64
    void()* @proc_UART2StatusHandler, ; 65
    void()* @proc_UART2ErrorHandler, ; 66
    void()* null, ; 67
    void()* null, ; 68
    void()* null, ; 69
    void()* null, ; 70
    void()* null, ; 71
    void()* null, ; 72
    void()* @proc_ADC0Handler, ; 73
    void()* @proc_ADC1Handler, ; 74
    void()* @proc_CMP0Handler, ; 75
    void()* @proc_CMP1Handler, ; 76
    void()* @proc_CMP2Handler, ; 77
    void()* @proc_FMT0Handler, ; 78
    void()* @proc_FMT1Handler, ; 79
    void()* @proc_FMT2Handler, ; 80
    void()* @proc_CMTHandler, ; 81
    void()* @proc_RTCAlarmHandler, ; 82
    void()* @proc_RTCSecondHandler, ; 83
    void()* @proc_PITChannel0Handler, ; 84
    void()* @proc_PITChannel1Handler, ; 85
    void()* @proc_PITChannel2Handler, ; 86
    void()* @proc_PITChannel3Handler, ; 87
    void()* @proc_PDBHandler, ; 88
    void()* @proc_USBOTGHandler, ; 89
    void()* @proc_USBChargerDetectHandler, ; 90
    void()* null, ; 91
    void()* null, ; 92
    void()* null, ; 93
    void()* null, ; 94
    void()* null, ; 95
    void()* null, ; 96
    void()* @proc_DAC0Handler, ; 97
    void()* null, ; 98
    void()* @proc_TSIHandler, ; 99
    void()* @proc_MCGHandler, ; 100
    void()* @proc_lowPowerTimerHandler, ; 101
    void()* null, ; 102
    void()* @proc_pinDetectPortAHandler, ; 103
    void()* @proc_pinDetectPortBHandler, ; 104
    void()* @proc_pinDetectPortCHandler, ; 105
    void()* @proc_pinDetectPortDHandler, ; 106
    void()* @proc_pinDetectPortEHandler, ; 107
    void()* null, ; 108
    void()* null, ; 109
    void()* @proc_softwareInterruptHandler, ; 110
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
;   ResetISR                                                                                                           *
;----------------------------------------------------------------------------------------------------------------------*

define internal void @ResetISR () nounwind noreturn naked {
  call void @boot ()
  call void @clearBSS ()
  call void @copyData ()
  call void @init ()
  call void @proc_setup ()
  br label %loop
loop:
  call void @proc_loop ()
  br label %loop
}
