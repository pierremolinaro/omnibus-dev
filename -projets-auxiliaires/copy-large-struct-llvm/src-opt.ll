; ModuleID = 'src.ll'
source_filename = "src.ll"
target datalayout = "e-m:e-p:32:32-Fi8-i64:64-v128:64:128-a:0:32-n32-S64"
target triple = "thumbv7em-none--eabi"

; Function Attrs: nofree norecurse nounwind
define void @myCopyRef(i1024* nocapture %target, i1024* nocapture readonly %source) local_unnamed_addr #0 {
  %u = load i1024, i1024* %source, align 8
  store i1024 %u, i1024* %target, align 8
  ret void
}

; Function Attrs: nofree norecurse nounwind writeonly
define void @myCopyVal(i1024* nocapture %target, i1024 %source) local_unnamed_addr #1 {
  store i1024 %source, i1024* %target, align 8
  ret void
}

; Function Attrs: norecurse nounwind readonly
define i1024 @myAddRef(i1024* nocapture readonly %op1, i1024* nocapture readonly %op2) local_unnamed_addr #2 {
  %x1 = load i1024, i1024* %op1, align 8
  %x2 = load i1024, i1024* %op2, align 8
  %r = add i1024 %x2, %x1
  ret i1024 %r
}

; Function Attrs: norecurse nounwind readnone
define i1024 @myAddVal(i1024 %op1, i1024 %op2) local_unnamed_addr #3 {
  %r = add i1024 %op2, %op1
  ret i1024 %r
}

; Function Attrs: nofree norecurse nounwind writeonly
define void @myAssignment(i1024* nocapture %target) local_unnamed_addr #1 {
  store i1024 123456789012345667890123456789012345678901234566789012345678901234567890123456678901234567890, i1024* %target, align 8
  ret void
}

attributes #0 = { nofree norecurse nounwind }
attributes #1 = { nofree norecurse nounwind writeonly }
attributes #2 = { norecurse nounwind readonly }
attributes #3 = { norecurse nounwind readnone }
