; ModuleID = 'source.cpp'
source_filename = "source.cpp"
target datalayout = "e-m:e-p:32:32-Fi8-i64:64-v128:64:128-a:0:32-n32-S64"
target triple = "thumbv7em-none-unknown-eabi"

%struct.Struct = type { [1000 x i32] }

; Function Attrs: nounwind
define dso_local void @_Z10maCopieRefR6StructRKS_(%struct.Struct* nocapture dereferenceable(4000), %struct.Struct* nocapture readonly dereferenceable(4000)) local_unnamed_addr #0 {
  %3 = bitcast %struct.Struct* %0 to i8*
  %4 = bitcast %struct.Struct* %1 to i8*
  tail call void @llvm.memcpy.p0i8.p0i8.i32(i8* nonnull align 4 %3, i8* nonnull align 4 %4, i32 4000, i1 false), !tbaa.struct !3
  ret void
}

; Function Attrs: argmemonly nounwind
declare void @llvm.memcpy.p0i8.p0i8.i32(i8* nocapture writeonly, i8* nocapture readonly, i32, i1 immarg) #1

; Function Attrs: nounwind
define dso_local void @_Z10maCopieValR6StructS_(%struct.Struct* nocapture dereferenceable(4000), %struct.Struct* nocapture readonly byval(%struct.Struct) align 4) local_unnamed_addr #0 {
  %3 = bitcast %struct.Struct* %0 to i8*
  %4 = bitcast %struct.Struct* %1 to i8*
  call void @llvm.memcpy.p0i8.p0i8.i32(i8* nonnull align 4 %3, i8* nonnull align 4 %4, i32 4000, i1 false), !tbaa.struct !3
  ret void
}

attributes #0 = { nounwind "correctly-rounded-divide-sqrt-fp-math"="false" "disable-tail-calls"="false" "less-precise-fpmad"="false" "min-legal-vector-width"="0" "no-frame-pointer-elim"="false" "no-infs-fp-math"="false" "no-jump-tables"="false" "no-nans-fp-math"="false" "no-signed-zeros-fp-math"="false" "no-trapping-math"="false" "stack-protector-buffer-size"="8" "target-cpu"="cortex-m4" "target-features"="+armv7e-m,+dsp,+fp16,+fpregs,+hwdiv,+strict-align,+thumb-mode,+vfp2d16sp,+vfp3d16sp,+vfp4d16sp,-aes,-crc,-crypto,-dotprod,-fp16fml,-fullfp16,-hwdiv-arm,-lob,-mve,-mve.fp,-ras,-sb,-sha2" "unsafe-fp-math"="false" "use-soft-float"="false" }
attributes #1 = { argmemonly nounwind }

!llvm.module.flags = !{!0, !1}
!llvm.ident = !{!2}

!0 = !{i32 1, !"wchar_size", i32 4}
!1 = !{i32 1, !"min_enum_size", i32 1}
!2 = !{!"clang version 9.0.0 (https://github.com/pierremolinaro/omnibus-dev.git d312afe63b29d46d1764ab91823adc6d459414d1)"}
!3 = !{i64 0, i64 4000, !4}
!4 = !{!5, !5, i64 0}
!5 = !{!"omnipotent char", !6, i64 0}
!6 = !{!"Simple C++ TBAA"}
