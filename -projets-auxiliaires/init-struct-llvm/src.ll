;------------------------------------------------------------------
;    Target specific code                                                                                              *
;------------------------------------------------------------------

;--- For LLVM < 9.0.0
;target datalayout = "e-m:e-p:32:32-i64:64-v128:64:128-a:0:32-n32-S64"

;--- For LLVM >= 9.0.0
target datalayout = "e-m:e-p:32:32-Fi8-i64:64-v128:64:128-a:0:32-n32-S64"

;---
target triple = "thumbv7em-none--eabi"


;------------------------------------------------------------------
;    User Defined Types                                                                                                *
;------------------------------------------------------------------

%U = type {i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32}

@source = private unnamed_addr constant %U {
  i32 12, i32 56, i32 98, i32 143, i32 112, i32 156, i32 198, i32 243,
  i32 112, i32 156, i32 198, i32 1143, i32 1112, i32 1156, i32 1198, i32 1243
}

;------------------------------------------------------------------
;    Sample code
;------------------------------------------------------------------

define void @myInit (%U* %target) {
  %temp = load %U, %U* @source
  store %U %temp, %U* %target
  ret void
}

;------------------------------------------------------------------

define void @myInit2 (%U* %target) {
  %indexPtr = alloca i32
  %targetPtr = bitcast %U* %target to [16 x i32]*
  %sourcePtr = bitcast %U* @source to [16 x i32]*
  store i32 0, i32* %indexPtr
  br label %loop
loop:
  %index = load i32, i32* %indexPtr
  %targetElementPtr = getelementptr [16 x i32], [16 x i32]* %targetPtr, i32 0, i32 %index
  %sourceElementPtr = getelementptr [16 x i32], [16 x i32]* %sourcePtr, i32 0, i32 %index
  %temp = load i32, i32* %sourceElementPtr
  store i32 %temp, i32* %targetElementPtr
  %nextIndex = add i32 1, %index
  store i32 %nextIndex, i32* %indexPtr
  %continue = icmp ult i32 %nextIndex, 16
  br i1 %continue, label %loop, label %end
end:
  ret void
}

;------------------------------------------------------------------
