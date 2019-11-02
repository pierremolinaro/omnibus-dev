; ModuleID = 'classes.cpp'
source_filename = "classes.cpp"
target datalayout = "e-m:e-p:32:32-Fi8-i64:64-v128:64:128-a:0:32-n32-S64"
target triple = "thumbv7em-none-unknown-eabi"

%class.A = type <{ i32 (...)**, i8, [3 x i8] }>
%class.B = type { %class.A.base, i16 }
%class.A.base = type <{ i32 (...)**, i8 }>

$_ZN1BC2Ev = comdat any

$_ZN1AC2Ev = comdat any

@_ZTV1A = dso_local unnamed_addr constant { [3 x i8*] } { [3 x i8*] [i8* null, i8* null, i8* bitcast (i32 (%class.A*)* @_ZN1A3getEv to i8*)] }, align 4
@_ZTV1B = dso_local unnamed_addr constant { [3 x i8*] } { [3 x i8*] [i8* null, i8* null, i8* bitcast (i32 (%class.B*)* @_ZN1B3getEv to i8*)] }, align 4

; Function Attrs: noinline nounwind optnone
define dso_local zeroext i8 @_ZN1A4getAEv(%class.A*) #0 align 2 {
  %2 = alloca %class.A*, align 4
  store %class.A* %0, %class.A** %2, align 4
  %3 = load %class.A*, %class.A** %2, align 4
  %4 = getelementptr inbounds %class.A, %class.A* %3, i32 0, i32 1
  %5 = load i8, i8* %4, align 4
  ret i8 %5
}

; Function Attrs: noinline nounwind optnone
define dso_local i32 @_ZN1A3getEv(%class.A*) unnamed_addr #0 align 2 {
  %2 = alloca %class.A*, align 4
  store %class.A* %0, %class.A** %2, align 4
  %3 = load %class.A*, %class.A** %2, align 4
  %4 = getelementptr inbounds %class.A, %class.A* %3, i32 0, i32 1
  %5 = load i8, i8* %4, align 4
  %6 = zext i8 %5 to i32
  ret i32 %6
}

; Function Attrs: noinline nounwind optnone
define dso_local zeroext i16 @_ZNK1B4getBEv(%class.B*) #0 align 2 {
  %2 = alloca %class.B*, align 4
  store %class.B* %0, %class.B** %2, align 4
  %3 = load %class.B*, %class.B** %2, align 4
  %4 = getelementptr inbounds %class.B, %class.B* %3, i32 0, i32 1
  %5 = load i16, i16* %4, align 2
  ret i16 %5
}

; Function Attrs: noinline nounwind optnone
define dso_local i32 @_ZN1B3getEv(%class.B*) unnamed_addr #0 align 2 {
  %2 = alloca %class.B*, align 4
  store %class.B* %0, %class.B** %2, align 4
  %3 = load %class.B*, %class.B** %2, align 4
  %4 = getelementptr inbounds %class.B, %class.B* %3, i32 0, i32 1
  %5 = load i16, i16* %4, align 2
  %6 = zext i16 %5 to i32
  ret i32 %6
}

; Function Attrs: noinline nounwind optnone
define dso_local zeroext i8 @_Z10maFonctionv() #0 {
  %1 = alloca %class.B, align 4
  %2 = call %class.B* @_ZN1BC2Ev(%class.B* %1) #1
  %3 = bitcast %class.B* %1 to %class.A*
  %4 = call zeroext i8 @_ZN1A4getAEv(%class.A* %3)
  ret i8 %4
}

; Function Attrs: noinline nounwind optnone
define linkonce_odr dso_local %class.B* @_ZN1BC2Ev(%class.B* returned) unnamed_addr #0 comdat align 2 {
  %2 = alloca %class.B*, align 4
  store %class.B* %0, %class.B** %2, align 4
  %3 = load %class.B*, %class.B** %2, align 4
  %4 = bitcast %class.B* %3 to %class.A*
  %5 = call %class.A* @_ZN1AC2Ev(%class.A* %4) #1
  %6 = bitcast %class.B* %3 to i32 (...)***
  store i32 (...)** bitcast (i8** getelementptr inbounds ({ [3 x i8*] }, { [3 x i8*] }* @_ZTV1B, i32 0, inrange i32 0, i32 2) to i32 (...)**), i32 (...)*** %6, align 4
  ret %class.B* %3
}

; Function Attrs: noinline nounwind optnone
define dso_local zeroext i8 @_Z16monAutreFonctionv() #0 {
  %1 = alloca %class.B, align 4
  %2 = call %class.B* @_ZN1BC2Ev(%class.B* %1) #1
  %3 = call i32 @_ZN1B3getEv(%class.B* %1)
  %4 = trunc i32 %3 to i8
  ret i8 %4
}

; Function Attrs: noinline nounwind optnone
define linkonce_odr dso_local %class.A* @_ZN1AC2Ev(%class.A* returned) unnamed_addr #0 comdat align 2 {
  %2 = alloca %class.A*, align 4
  store %class.A* %0, %class.A** %2, align 4
  %3 = load %class.A*, %class.A** %2, align 4
  %4 = bitcast %class.A* %3 to i32 (...)***
  store i32 (...)** bitcast (i8** getelementptr inbounds ({ [3 x i8*] }, { [3 x i8*] }* @_ZTV1A, i32 0, inrange i32 0, i32 2) to i32 (...)**), i32 (...)*** %4, align 4
  ret %class.A* %3
}

attributes #0 = { noinline nounwind optnone "correctly-rounded-divide-sqrt-fp-math"="false" "disable-tail-calls"="false" "less-precise-fpmad"="false" "min-legal-vector-width"="0" "no-frame-pointer-elim"="false" "no-infs-fp-math"="false" "no-jump-tables"="false" "no-nans-fp-math"="false" "no-signed-zeros-fp-math"="false" "no-trapping-math"="false" "stack-protector-buffer-size"="8" "target-cpu"="cortex-m4" "target-features"="+armv7e-m,+dsp,+fp16,+fpregs,+hwdiv,+strict-align,+thumb-mode,+vfp2d16sp,+vfp3d16sp,+vfp4d16sp,-aes,-crc,-crypto,-dotprod,-fp16fml,-fullfp16,-hwdiv-arm,-lob,-mve,-mve.fp,-ras,-sb,-sha2" "unsafe-fp-math"="false" "use-soft-float"="false" }
attributes #1 = { nounwind }

!llvm.module.flags = !{!0, !1}
!llvm.ident = !{!2}

!0 = !{i32 1, !"wchar_size", i32 4}
!1 = !{i32 1, !"min_enum_size", i32 1}
!2 = !{!"clang version 9.0.0 (https://github.com/pierremolinaro/omnibus-dev.git d312afe63b29d46d1764ab91823adc6d459414d1)"}
