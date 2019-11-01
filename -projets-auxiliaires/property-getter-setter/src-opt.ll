; ModuleID = 'src.ll'
source_filename = "src.ll"
target datalayout = "e-m:e-p:32:32-Fi8-i64:64-v128:64:128-a:0:32-n32-S64"
target triple = "thumbv7em-none--eabi"

%U = type { i32 }
%V = type { %U }

; Function Attrs: nofree norecurse nounwind writeonly
define void @myFunctionU(%U* nocapture %variable) local_unnamed_addr #0 {
entry:
  %ptr.i = getelementptr inbounds %U, %U* %variable, i32 0, i32 0
  store i32 55, i32* %ptr.i, align 4
  ret void
}

; Function Attrs: nofree norecurse nounwind
define void @myFunctionV(%V* nocapture %variable) local_unnamed_addr #1 {
entry:
  %0 = getelementptr inbounds %V, %V* %variable, i32 0, i32 0, i32 0
  store i32 55, i32* %0, align 4
  ret void
}

define void @myFunctionW(i32 ()* nocapture %getter, void (i32)* nocapture %setter) local_unnamed_addr {
  %value = tail call i32 %getter()
  %result = add i32 %value, 1
  tail call void %setter(i32 %result)
  ret void
}

attributes #0 = { nofree norecurse nounwind writeonly }
attributes #1 = { nofree norecurse nounwind }
