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
    void()* null, ; 2
    void()* null, ; 3
    void()* null, ; 4
    void()* null, ; 5
    void()* null, ; 6
    void()* null, ; 7
    void()* null, ; 8
    void()* null, ; 9
    void()* null, ; 10
    void()* null, ; 11
    void()* null, ; 12
    void()* null, ; 13
    void()* null, ; 14
    void()* null  ; 15
  ],
;--- Non-Core Vectors
  [240 x void()*] zeroinitializer,
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

;@__bss_start = external global i8
;@__bss_end   = external global i8

;----------------------------------------------------------------------------------------------------------------------*

;declare void @llvm.memset.p0i8.i32 (i8* <dest>, i8 <val>, i32 <len>, i32 <align>, i1 <isvolatile>)
;declare void @llvm.memset.p0i8.i32 (i8*, i8, i32, i32, i1)

;----------------------------------------------------------------------------------------------------------------------*

;define internal void @clearBSS () nounwind {
;  %bssStartAsInt = ptrtoint i8* @__bss_start to i32
;  %bssEndAsInt = ptrtoint i8* @__bss_end to i32
;  %length = sub i32 %bssEndAsInt, %bssStartAsInt
;  call void @llvm.memset.p0i8.i32 (i8* @__bss_start, i8 0, i32 %length, i32 4, i1 false)
;  ret void
;}

;----------------------------------------------------------------------------------------------------------------------*

@__bss_start = external global i32
@__bss_end   = external global i32

;----------------------------------------------------------------------------------------------------------------------*

define internal void @clearBSS () nounwind noinline optnone {
entry:
  br label %bssLoopTest
 
bssLoopTest:
  %p = phi i32* [@__bss_start, %entry], [%p.next, %bssLoop]
  %completed = icmp eq i32* %p, @__bss_end
  br i1 %completed, label %clearCompleted, label %bssLoop
 
bssLoop:
  store i32 0, i32* %p, align 4
  %p.next = getelementptr inbounds i32* %p, i32 1
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

@__data_start = external global i32
@__data_end = external global i32
@__data_load_start = external global i32

;----------------------------------------------------------------------------------------------------------------------*

define internal void @copyData () nounwind noinline optnone {
entry:
  br label %copyLoop.test
 
copyLoop.test:
  %pDest = phi i32* [@__data_start, %entry], [%pDestInct, %copyLoop]
  %pSource = phi i32* [@__data_load_start, %entry], [%pSourceInc, %copyLoop]
  %equal = icmp eq i32* %pDest, @__data_end
  br i1 %equal, label %copyCompleted, label %copyLoop
 
copyLoop:
  %value = load i32* %pSource
  store i32 %value, i32* %pDest, align 4
  %pDestInct = getelementptr inbounds i32* %pDest, i32 1
  %pSourceInc = getelementptr inbounds i32* %pSource, i32 1
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
  call void @procSetup ()
  br label %loop

loop:
  call void @procLoop ()
  br label %loop
}

;----------------------------------------------------------------------------------------------------------------------*
;   Boot                                                                                                               *
;----------------------------------------------------------------------------------------------------------------------*

define internal void @boot () nounwind {
;   register_WDOG_UNLOCK = 50464 ;
  store volatile i16 50464, i16* inttoptr (i32 1074077710 to i16*) ; 0x4005200E
;   register_WDOG_UNLOCK = 55592 ;
  store volatile i16 55592, i16* inttoptr (i32 1074077710 to i16*) ; 0x4005200E
;   register_WDOG_STCTRLH = 16 ;
  store volatile i16 16, i16* inttoptr (i32 1074077696 to i16*) ; 0x40052000
;   register_SIM_SCGC5 = 278402 ;
  store volatile i32 278402, i32* inttoptr (i32 1074036792 to i32*) ; 0x40048038
;---
  ret void
}

;----------------------------------------------------------------------------------------------------------------------*
;   Setup                                                                                                              *
;----------------------------------------------------------------------------------------------------------------------*

define internal void @procSetup () nounwind {
;   register_PORTC_PCR5 = 256 ;
  store volatile i32 256, i32* inttoptr (i32 1074049044 to i32*) ; 0x4004B014
;   register_GPIOC_PDDR |= 32 ;
  %v = load volatile i32* inttoptr (i32 1074786452 to i32*) ; 0x400F_F094
  %r = or i32 %v, 32
  store volatile i32 %r, i32* inttoptr (i32 1074786452 to i32*)
  ret void
}

;----------------------------------------------------------------------------------------------------------------------*
;   Wait                                                                                                               *
;----------------------------------------------------------------------------------------------------------------------*

@compteur = global i32 0

;----------------------------------------------------------------------------------------------------------------------*

define internal void @wait () nounwind {
;   compteur = 1000000 ;
  store volatile i32 1000000, i32* @compteur
  br label %boucle

boucle:
  %v = load volatile i32* @compteur
  %isZero = icmp eq i32 %v, 0
  br i1 %isZero, label %fin, label %dec

dec:
  %vv = load volatile i32* @compteur
  %vvv = sub i32 %vv, 1
  store volatile i32 %vvv, i32* @compteur
  br label %boucle

fin:
  ret void
}

;----------------------------------------------------------------------------------------------------------------------*
;   Loop                                                                                                               *
;----------------------------------------------------------------------------------------------------------------------*

define internal void @procLoop () nounwind {
;     register_GPIOC_PSOR = 32 ;
  store volatile i32 32, i32* inttoptr (i32 1074786436 to i32*) ; 0x400FF084
;     wait ()
  call void @wait ()
;     register_GPIOC_PCOR = 32 ;
  store volatile i32 32, i32* inttoptr (i32 1074786440 to i32*) ; 0x400FF088
;     wait ()
  call void @wait ()
;---
  ret void
}

;----------------------------------------------------------------------------------------------------------------------*
