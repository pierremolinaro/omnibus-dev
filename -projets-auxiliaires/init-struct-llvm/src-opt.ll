; ModuleID = 'src.ll'
source_filename = "src.ll"
target datalayout = "e-m:e-p:32:32-Fi8-i64:64-v128:64:128-a:0:32-n32-S64"
target triple = "thumbv7em-none--eabi"

%U = type { i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32 }

@source = private unnamed_addr constant %U { i32 12, i32 56, i32 98, i32 143, i32 112, i32 156, i32 198, i32 243, i32 112, i32 156, i32 198, i32 1143, i32 1112, i32 1156, i32 1198, i32 1243 }

; Function Attrs: nofree norecurse nounwind writeonly
define void @myInit(%U* nocapture %target) local_unnamed_addr #0 {
  %target.repack = getelementptr inbounds %U, %U* %target, i32 0, i32 0
  store i32 12, i32* %target.repack, align 4
  %target.repack1 = getelementptr inbounds %U, %U* %target, i32 0, i32 1
  store i32 56, i32* %target.repack1, align 4
  %target.repack2 = getelementptr inbounds %U, %U* %target, i32 0, i32 2
  store i32 98, i32* %target.repack2, align 4
  %target.repack3 = getelementptr inbounds %U, %U* %target, i32 0, i32 3
  store i32 143, i32* %target.repack3, align 4
  %target.repack4 = getelementptr inbounds %U, %U* %target, i32 0, i32 4
  store i32 112, i32* %target.repack4, align 4
  %target.repack5 = getelementptr inbounds %U, %U* %target, i32 0, i32 5
  store i32 156, i32* %target.repack5, align 4
  %target.repack6 = getelementptr inbounds %U, %U* %target, i32 0, i32 6
  store i32 198, i32* %target.repack6, align 4
  %target.repack7 = getelementptr inbounds %U, %U* %target, i32 0, i32 7
  store i32 243, i32* %target.repack7, align 4
  %target.repack8 = getelementptr inbounds %U, %U* %target, i32 0, i32 8
  store i32 112, i32* %target.repack8, align 4
  %target.repack9 = getelementptr inbounds %U, %U* %target, i32 0, i32 9
  store i32 156, i32* %target.repack9, align 4
  %target.repack10 = getelementptr inbounds %U, %U* %target, i32 0, i32 10
  store i32 198, i32* %target.repack10, align 4
  %target.repack11 = getelementptr inbounds %U, %U* %target, i32 0, i32 11
  store i32 1143, i32* %target.repack11, align 4
  %target.repack12 = getelementptr inbounds %U, %U* %target, i32 0, i32 12
  store i32 1112, i32* %target.repack12, align 4
  %target.repack13 = getelementptr inbounds %U, %U* %target, i32 0, i32 13
  store i32 1156, i32* %target.repack13, align 4
  %target.repack14 = getelementptr inbounds %U, %U* %target, i32 0, i32 14
  store i32 1198, i32* %target.repack14, align 4
  %target.repack15 = getelementptr inbounds %U, %U* %target, i32 0, i32 15
  store i32 1243, i32* %target.repack15, align 4
  ret void
}

; Function Attrs: nofree norecurse nounwind writeonly
define void @myInit2(%U* nocapture %target) local_unnamed_addr #0 {
end:
  %target1 = bitcast %U* %target to i8*
  call void @llvm.memcpy.p0i8.p0i8.i32(i8* align 4 %target1, i8* align 16 bitcast (%U* @source to i8*), i32 64, i1 false)
  ret void
}

; Function Attrs: argmemonly nounwind
declare void @llvm.memcpy.p0i8.p0i8.i32(i8* nocapture writeonly, i8* nocapture readonly, i32, i1 immarg) #1

attributes #0 = { nofree norecurse nounwind writeonly }
attributes #1 = { argmemonly nounwind }
