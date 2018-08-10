#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

#include "all-declarations-9.h"

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                       Routine 'generateLLVMcodeForStructure'                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_generateLLVMcodeForStructure (GALGAS_string & ioArgument_ioLLVMcode,
                                           GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                           const GALGAS_PLMType constinArgument_inStructureType,
                                           const GALGAS_uint constinArgument_inPointerSize,
                                           C_Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_llvmTypeName_25737 = extensionGetter_llvmTypeName (constinArgument_inStructureType, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 700)) ;
  GALGAS_string var_llvmBaseTypeName_25793 = constinArgument_inStructureType.getter_llvmBaseTypeName (SOURCE_FILE ("type-structure-declaration.galgas", 701)).getter_assemblerRepresentation (SOURCE_FILE ("type-structure-declaration.galgas", 701)) ;
  const enumGalgasBool test_0 = extensionGetter_deinitNeeded (constinArgument_inStructureType, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 702)).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (GALGAS_string ("CODE FOR STRUCTURE TYPE ").add_operation (constinArgument_inStructureType.getter_plmTypeDescriptionName (HERE), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 703)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 703)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 703)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal void @deinit.").add_operation (var_llvmBaseTypeName_25793, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 704)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 704)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" (i").add_operation (constinArgument_inPointerSize.getter_string (SOURCE_FILE ("type-structure-declaration.galgas", 705)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 705)).add_operation (GALGAS_string (" %inPointer) nounwind {\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 705)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 705)) ;
    GALGAS_string var_arg_26154 = GALGAS_string ("ptr") ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (function_llvmNameForLocalVariable (var_arg_26154, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 707)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 707)).add_operation (GALGAS_string (" = inttoptr i"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 707)).add_operation (constinArgument_inPointerSize.getter_string (SOURCE_FILE ("type-structure-declaration.galgas", 707)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 707)).add_operation (GALGAS_string (" %inPointer to "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 707)).add_operation (var_llvmTypeName_25737, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 707)).add_operation (GALGAS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 707)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 707)) ;
    extensionMethod_generateRelease (constinArgument_inStructureType, var_arg_26154, ioArgument_ioLLVMcode, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 708)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 709)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
      "\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 710)) ;
  }
  const enumGalgasBool test_1 = constinArgument_inStructureType.getter_attributes (HERE).getter_copyable (SOURCE_FILE ("type-structure-declaration.galgas", 713)).boolEnum () ;
  if (kBoolTrue == test_1) {
    GALGAS_arcAssignmentList var_arcAssignmentList_26528 = extensionGetter_arcList (constinArgument_inStructureType, GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("type-structure-declaration.galgas", 714)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 714)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(function_llvmSeparatorLine (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 716)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 716)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 716)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal void @plm.assign."), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 717)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(var_llvmBaseTypeName_25793, inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 718)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("."), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 719)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(var_llvmBaseTypeName_25793, inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 720)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" (").add_operation (var_llvmTypeName_25737, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 721)).add_operation (GALGAS_string (" * %inTarget, "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 721)).add_operation (var_llvmTypeName_25737, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 721)).add_operation (GALGAS_string ("* %inSource) nounwind optsize {\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 721)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 721)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--- Handle ARC properties\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 722)) ;
    cEnumerator_arcAssignmentList enumerator_26999 (var_arcAssignmentList_26528, kENUMERATION_UP) ;
    while (enumerator_26999.hasCurrentObject ()) {
      GALGAS_string var_propertyTypeLLVMName_27035 = extensionGetter_llvmTypeName (enumerator_26999.current_mPropertyType (HERE), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 724)) ;
      GALGAS_string var_llvmVarName_27089 = GALGAS_string ("%arc.retain.").add_operation (enumerator_26999.current_mPropertyName (HERE).getter_assemblerRepresentation (SOURCE_FILE ("type-structure-declaration.galgas", 725)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 725)).add_operation (ioArgument_ioGenerationAdds.getter_mUniqueIndex (HERE).getter_string (SOURCE_FILE ("type-structure-declaration.galgas", 725)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 725)) ;
      ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 726)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_llvmVarName_27089, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 727)).add_operation (GALGAS_string (" = getelementptr inbounds "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 727)).add_operation (var_llvmTypeName_25737, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 727)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 727)).add_operation (var_llvmTypeName_25737, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 727)).add_operation (GALGAS_string ("* %inSource, i32 0"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 727)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 727)) ;
      cEnumerator_uintlist enumerator_27383 (enumerator_26999.current_mPropertyIndexPath (HERE), kENUMERATION_UP) ;
      while (enumerator_27383.hasCurrentObject ()) {
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", i32 ").add_operation (enumerator_27383.current_mValue (HERE).getter_string (SOURCE_FILE ("type-structure-declaration.galgas", 729)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 729)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 729)) ;
        enumerator_27383.gotoNextObject () ;
      }
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ; ").add_operation (enumerator_26999.current_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 731)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 731)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 731)) ;
      GALGAS_string var_llvmLoadedVarName_27517 = var_llvmVarName_27089.add_operation (GALGAS_string (".loaded"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 732)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_llvmLoadedVarName_27517, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 733)).add_operation (GALGAS_string (" = load "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 733)).add_operation (var_propertyTypeLLVMName_27035, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 733)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 733)).add_operation (var_propertyTypeLLVMName_27035, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 733)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 733)).add_operation (var_llvmVarName_27089, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 733)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 733)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 733)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @arc.retain (").add_operation (var_propertyTypeLLVMName_27035, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 734)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 734)).add_operation (var_llvmLoadedVarName_27517, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 734)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 734)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 734)) ;
      enumerator_26999.gotoNextObject () ;
    }
    cEnumerator_arcAssignmentList enumerator_27872 (var_arcAssignmentList_26528, kENUMERATION_UP) ;
    while (enumerator_27872.hasCurrentObject ()) {
      GALGAS_string var_llvmVarName_27899 = GALGAS_string ("%arc.release.").add_operation (enumerator_27872.current_mPropertyName (HERE).getter_assemblerRepresentation (SOURCE_FILE ("type-structure-declaration.galgas", 737)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 737)).add_operation (ioArgument_ioGenerationAdds.getter_mUniqueIndex (HERE).getter_string (SOURCE_FILE ("type-structure-declaration.galgas", 737)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 737)) ;
      ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 738)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_llvmVarName_27899, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 739)).add_operation (GALGAS_string (" = getelementptr inbounds "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 739)).add_operation (var_llvmTypeName_25737, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 739)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 739)).add_operation (var_llvmTypeName_25737, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 739)).add_operation (GALGAS_string ("* %inTarget, i32 0"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 739)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 739)) ;
      cEnumerator_uintlist enumerator_28194 (enumerator_27872.current_mPropertyIndexPath (HERE), kENUMERATION_UP) ;
      while (enumerator_28194.hasCurrentObject ()) {
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", i32 ").add_operation (enumerator_28194.current_mValue (HERE).getter_string (SOURCE_FILE ("type-structure-declaration.galgas", 741)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 741)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 741)) ;
        enumerator_28194.gotoNextObject () ;
      }
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ; ").add_operation (enumerator_27872.current_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 743)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 743)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 743)) ;
      GALGAS_string var_propertyTypeLLVMName_28331 = extensionGetter_llvmTypeName (enumerator_27872.current_mPropertyType (HERE), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 744)) ;
      GALGAS_string var_llvmLoadedVarName_28391 = var_llvmVarName_27899.add_operation (GALGAS_string (".loaded"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 745)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_llvmLoadedVarName_28391, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 746)).add_operation (GALGAS_string (" = load "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 746)).add_operation (var_propertyTypeLLVMName_28331, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 746)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 746)).add_operation (var_propertyTypeLLVMName_28331, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 746)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 746)).add_operation (var_llvmVarName_27899, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 746)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 746)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 746)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @arc.release (").add_operation (var_propertyTypeLLVMName_28331, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 747)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 747)).add_operation (var_llvmLoadedVarName_28391, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 747)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 747)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 747)) ;
      enumerator_27872.gotoNextObject () ;
    }
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--- Compute type size\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 749)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %sizeAsPtr = getelementptr inbounds ").add_operation (var_llvmTypeName_25737, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 750)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 750)).add_operation (var_llvmTypeName_25737, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 750)).add_operation (GALGAS_string ("* null, i32 1\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 750)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 750)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %byteCount = ptrtoint ").add_operation (var_llvmTypeName_25737, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 751)).add_operation (GALGAS_string ("* %sizeAsPtr to i32\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 751)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 751)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %useLoadStore = icmp ule i32 %byteCount, 12\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 752)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 %useLoadStore, label %loadStore, label %copyBytesOrCopyWords\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 753)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--- Copy\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 754)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("loadStore:\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 755)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %v = load ").add_operation (var_llvmTypeName_25737, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 756)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 756)).add_operation (var_llvmTypeName_25737, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 756)).add_operation (GALGAS_string ("* %inSource\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 756)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 756)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store ").add_operation (var_llvmTypeName_25737, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 757)).add_operation (GALGAS_string (" %v, "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 757)).add_operation (var_llvmTypeName_25737, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 757)).add_operation (GALGAS_string ("* %inTarget\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 757)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 757)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %copy.end\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 758)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("copyBytesOrCopyWords:\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 759)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %byteCountAnd3 = and i32 %byteCount, 3\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 760)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %byteCountIsMutipleOf4 = icmp eq i32 %byteCountAnd3, 0\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 761)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 %byteCountIsMutipleOf4, label %testTarget, label %copyBytes\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 762)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("testTarget:\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 763)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %targetAsUnsigned = ptrtoint ").add_operation (var_llvmTypeName_25737, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 764)).add_operation (GALGAS_string ("* %inTarget to i32\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 764)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 764)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %targetAsUnsignedAnd3 = and i32 %targetAsUnsigned, 3\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 765)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %targetAsUnsignedIsMutipleOf4 = icmp eq i32%targetAsUnsignedAnd3, 0\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 766)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 %targetAsUnsignedIsMutipleOf4, label %testSource, label %copyBytes\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 767)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("testSource:\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 768)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %sourceAsUnsigned = ptrtoint ").add_operation (var_llvmTypeName_25737, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 769)).add_operation (GALGAS_string ("* %inSource to i32\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 769)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 769)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %sourceAsUnsignedAnd3 = and i32 %sourceAsUnsigned, 3\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 770)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %sourceAsUnsignedIsMutipleOf4 = icmp eq i32 %sourceAsUnsignedAnd3, 0\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 771)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 %targetAsUnsignedIsMutipleOf4, label %copyWords, label %copyBytes\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 772)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("copyWords:\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 773)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %target32 = bitcast ").add_operation (var_llvmTypeName_25737, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 774)).add_operation (GALGAS_string ("* %inTarget to i32*\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 774)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 774)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %source32 = bitcast ").add_operation (var_llvmTypeName_25737, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 775)).add_operation (GALGAS_string ("* %inSource to i32*\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 775)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 775)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %temp = add nsw nuw i32 %byteCount, 3\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 776)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %wordCount = udiv i32 %temp, 4\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 777)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %copyWords.loop\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 778)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("copyWords.loop:\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 779)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @copy.word.array (i32* %target32, i32* %source32, i32 %wordCount)\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 780)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %copy.end\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 781)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("copyBytes:\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 782)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %target8 = bitcast ").add_operation (var_llvmTypeName_25737, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 783)).add_operation (GALGAS_string ("* %inTarget to i8*\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 783)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 783)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %source8 = bitcast ").add_operation (var_llvmTypeName_25737, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 784)).add_operation (GALGAS_string ("* %inSource to i8*\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 784)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 784)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @copy.byte.array (i8* %target8, i8* %source8, i32 %byteCount)\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 785)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %copy.end\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 786)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("copy.end:\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 787)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 788)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
      "\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 789)) ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                      Overriding extension method '@syncDeclarationAST enterInPrecedenceGraph'                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_syncDeclarationAST_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                                       GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_syncDeclarationAST * object = (const cPtr_syncDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_syncDeclarationAST) ;
  {
  const GALGAS_syncDeclarationAST temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (object->mProperty_mSyncToolName, temp_0, inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 59)) ;
  }
  cEnumerator_structurePropertyListAST enumerator_2767 (object->mProperty_mStructurePropertyListAST, kENUMERATION_UP) ;
  while (enumerator_2767.hasCurrentObject ()) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, enumerator_2767.current_mPropertyTypeName (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      {
      ioArgument_ioGraph.setter_addEdge (object->mProperty_mSyncToolName, enumerator_2767.current_mPropertyTypeName (HERE) COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 63)) ;
      }
    }
    const enumGalgasBool test_2 = enumerator_2767.current_mIsPublic (HERE).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (enumerator_2767.current_mPropertyName (HERE).getter_location (SOURCE_FILE ("type-sync-declaration.galgas", 66)), GALGAS_string ("a sync tool property cannot be public (should be private)"), fixItArray3  COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 66)) ;
    }
    switch (enumerator_2767.current_mInitialisation (HERE).enumValue ()) {
    case GALGAS_structurePropertyInitOptionalExpressionAST::kNotBuilt:
      break ;
    case GALGAS_structurePropertyInitOptionalExpressionAST::kEnum_noExpression:
      {
      }
      break ;
    case GALGAS_structurePropertyInitOptionalExpressionAST::kEnum_expression:
      {
        const cEnumAssociatedValues_structurePropertyInitOptionalExpressionAST_expression * extractPtr_3161 = (const cEnumAssociatedValues_structurePropertyInitOptionalExpressionAST_expression *) (enumerator_2767.current_mInitialisation (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_initExpression = extractPtr_3161->mAssociatedValue0 ;
        callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) extractedValue_initExpression.ptr (), object->mProperty_mSyncToolName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 71)) ;
      }
      break ;
    }
    enumerator_2767.gotoNextObject () ;
  }
  cEnumerator_functionDeclarationListAST enumerator_3244 (object->mProperty_mFunctionDeclarationListAST, kENUMERATION_UP) ;
  while (enumerator_3244.hasCurrentObject ()) {
    cEnumerator_routineFormalArgumentListAST enumerator_3317 (enumerator_3244.current_mFunctionFormalArgumentList (HERE), kENUMERATION_UP) ;
    while (enumerator_3317.hasCurrentObject ()) {
      {
      ioArgument_ioGraph.setter_noteNode (enumerator_3317.current_mFormalArgumentTypeName (HERE) COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 77)) ;
      }
      enumerator_3317.gotoNextObject () ;
    }
    const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, enumerator_3244.current_mFunctionReturnTypeName (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_4) {
      {
      ioArgument_ioGraph.setter_noteNode (enumerator_3244.current_mFunctionReturnTypeName (HERE) COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 80)) ;
      }
    }
    extensionMethod_noteInstructionListTypesInPrecedenceGraph (enumerator_3244.current_mFunctionInstructionList (HERE), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 82)) ;
    enumerator_3244.gotoNextObject () ;
  }
  extensionMethod_noteTypesInPrecedenceGraph (object->mProperty_mSystemRoutineListAST, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 85)) ;
  extensionMethod_noteTypesInPrecedenceGraph (object->mProperty_mGuardListAST, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 86)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_syncDeclarationAST_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_syncDeclarationAST.mSlotID,
                                               extensionMethod_syncDeclarationAST_enterInPrecedenceGraph) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_syncDeclarationAST_enterInPrecedenceGraph (defineExtensionMethod_syncDeclarationAST_enterInPrecedenceGraph, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                Overriding extension getter '@syncDeclarationAST keyRepresentationForErrorSignaling'                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string extensionGetter_syncDeclarationAST_keyRepresentationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  const cPtr_syncDeclarationAST * object = (const cPtr_syncDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_syncDeclarationAST) ;
  result_outRepresentation = GALGAS_string ("synctype.").add_operation (object->mProperty_mSyncToolName.getter_string (SOURCE_FILE ("type-sync-declaration.galgas", 92)), inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 92)) ;
//---
  return result_outRepresentation ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_syncDeclarationAST_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_syncDeclarationAST.mSlotID,
                                                           extensionGetter_syncDeclarationAST_keyRepresentationForErrorSignaling) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_syncDeclarationAST_keyRepresentationForErrorSignaling (defineExtensionGetter_syncDeclarationAST_keyRepresentationForErrorSignaling, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                     Overriding extension getter '@syncDeclarationAST locationForErrorSignaling'                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_location extensionGetter_syncDeclarationAST_locationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                     C_Compiler * /* inCompiler */
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_outLocation ; // Returned variable
  const cPtr_syncDeclarationAST * object = (const cPtr_syncDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_syncDeclarationAST) ;
  result_outLocation = object->mProperty_mSyncToolName.getter_location (HERE) ;
//---
  return result_outLocation ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_syncDeclarationAST_locationForErrorSignaling (void) {
  enterExtensionGetter_locationForErrorSignaling (kTypeDescriptor_GALGAS_syncDeclarationAST.mSlotID,
                                                  extensionGetter_syncDeclarationAST_locationForErrorSignaling) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_syncDeclarationAST_locationForErrorSignaling (defineExtensionGetter_syncDeclarationAST_locationForErrorSignaling, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                          Overriding extension method '@syncDeclarationAST enterInContext'                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_syncDeclarationAST_enterInContext (const cPtr_abstractDeclarationAST * inObject,
                                                               const GALGAS_functionDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                               GALGAS_semanticContext & ioArgument_ioContext,
                                                               GALGAS_declarationDecorationList & ioArgument_ioDecoratedDeclarationList,
                                                               GALGAS_decoratedRegularRoutineList & ioArgument_ioDecoratedRoutineList,
                                                               GALGAS_routineListIR & ioArgument_ioRoutineListIR,
                                                               GALGAS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                               GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                               GALGAS_globalVariableIRList & ioArgument_ioGlobalVariableIRList,
                                                               GALGAS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                               C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_syncDeclarationAST * object = (const cPtr_syncDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_syncDeclarationAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_selfTypeProxy_5430 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeOptionalProxy (ioArgument_ioContext.mProperty_mTypeMap, object->mProperty_mSyncToolName, var_selfTypeProxy_5430 COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 117)) ;
  }
  GALGAS_propertyList var_propertyList_5513 = GALGAS_propertyList::constructor_emptyList (SOURCE_FILE ("type-sync-declaration.galgas", 119)) ;
  GALGAS_propertyMap var_propertyMap_5545 = GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-sync-declaration.galgas", 120)) ;
  GALGAS_sortedOperandIRList var_sortedOperandIRList_5593 = GALGAS_sortedOperandIRList::constructor_emptySortedList (SOURCE_FILE ("type-sync-declaration.galgas", 121)) ;
  GALGAS_constructorSignature var_constructorSignature_5643 = GALGAS_constructorSignature::constructor_emptyList (SOURCE_FILE ("type-sync-declaration.galgas", 122)) ;
  GALGAS_string var_constructorKey_5673 = GALGAS_string ("(") ;
  cEnumerator_structurePropertyListAST enumerator_5723 (object->mProperty_mStructurePropertyListAST, kENUMERATION_UP) ;
  while (enumerator_5723.hasCurrentObject ()) {
    GALGAS_bool joker_5982 = GALGAS_bool::constructor_default (SOURCE_FILE ("type-sync-declaration.galgas", 134)) ;
    extensionMethod_enterPropertyInContext (enumerator_5723.current (HERE), object->mProperty_mSyncToolName, ioArgument_ioContext, ioArgument_ioStaticEntityMap, var_propertyList_5513, var_propertyMap_5545, var_sortedOperandIRList_5593, var_constructorSignature_5643, var_constructorKey_5673, joker_5982, ioArgument_ioGlobalVariableIRList, inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 125)) ;
    enumerator_5723.gotoNextObject () ;
  }
  var_constructorKey_5673.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 138)) ;
  GALGAS_constructorMap var_constructorMap_6141 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-sync-declaration.galgas", 140)) ;
  {
  var_constructorMap_6141.setter_insertKey (GALGAS_lstring::constructor_new (var_constructorKey_5673, object->mProperty_mSyncToolName.getter_location (HERE)  COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 142)), var_constructorSignature_5643, GALGAS_constructorValue::constructor_structure (var_sortedOperandIRList_5593  COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 144)), inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 141)) ;
  }
  extensionMethod_enterFunctionsInPropertyMap (object->mProperty_mFunctionDeclarationListAST, object->mProperty_mSyncToolName.getter_string (SOURCE_FILE ("type-sync-declaration.galgas", 147)), ioArgument_ioContext, var_propertyMap_5545, inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 147)) ;
  cEnumerator_systemRoutineDeclarationListAST enumerator_6616 (object->mProperty_mSystemRoutineListAST, kENUMERATION_UP) ;
  while (enumerator_6616.hasCurrentObject ()) {
    GALGAS_stringset var_attributeSet_6665 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-sync-declaration.galgas", 151)) ;
    cEnumerator_lstringlist enumerator_6713 (enumerator_6616.current (HERE).getter_mAttributeList (HERE), kENUMERATION_UP) ;
    while (enumerator_6713.hasCurrentObject ()) {
      var_attributeSet_6665.addAssign_operation (enumerator_6713.current (HERE).getter_mValue (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 153)) ;
      enumerator_6713.gotoNextObject () ;
    }
    GALGAS_bool var_exportedRoutine_6795 = var_attributeSet_6665.getter_hasKey (function_exportedAttribute (inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 155)) COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 155)) ;
    GALGAS_bool var_canMutateProperties_6869 = var_attributeSet_6665.getter_hasKey (function_mutatingAttribute (inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 156)) COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 156)) ;
    GALGAS_lstring var_routineMangledName_6970 = function_routineMangledNameFromAST (object->mProperty_mSyncToolName.getter_string (SOURCE_FILE ("type-sync-declaration.galgas", 159)), enumerator_6616.current (HERE).getter_mName (HERE), enumerator_6616.current (HERE).getter_mFormalArgumentList (HERE), inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 158)) ;
    GALGAS_routineTypedSignature var_signature_7184 ;
    {
    routine_routineSignature (ioArgument_ioContext.mProperty_mTypeMap, enumerator_6616.current (HERE).getter_mFormalArgumentList (HERE), var_signature_7184, inCompiler  COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 164)) ;
    }
    GALGAS_unifiedTypeMap_2D_proxy var_returnTypeProxy_7315 ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeOptionalProxy (ioArgument_ioContext.mProperty_mTypeMap, enumerator_6616.current (HERE).getter_mReturnTypeName (HERE), var_returnTypeProxy_7315 COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 166)) ;
    }
    GALGAS_bool var_mutating_7351 = GALGAS_bool (false) ;
    GALGAS_bool var_noUnusedWarning_7383 = GALGAS_bool (false) ;
    GALGAS_bool var_isSafe_7406 = GALGAS_bool (false) ;
    cEnumerator_lstringlist enumerator_7459 (enumerator_6616.current (HERE).getter_mAttributeList (HERE), kENUMERATION_UP) ;
    while (enumerator_7459.hasCurrentObject ()) {
      const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_7459.current_mValue (HERE).getter_string (HERE).objectCompare (function_noUnusedWarningAttribute (inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 172)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        const enumGalgasBool test_1 = var_noUnusedWarning_7383.boolEnum () ;
        if (kBoolTrue == test_1) {
          TC_Array <C_FixItDescription> fixItArray2 ;
          fixItArray2.appendObject (C_FixItDescription (kFixItRemove, "")) ;
          inCompiler->emitSemanticError (enumerator_7459.current_mValue (HERE).getter_location (SOURCE_FILE ("type-sync-declaration.galgas", 174)), GALGAS_string ("duplicated @").add_operation (function_noUnusedWarningAttribute (inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 174)), inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 174)).add_operation (GALGAS_string (" attribute"), inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 174)), fixItArray2  COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 174)) ;
        }
        var_noUnusedWarning_7383 = GALGAS_bool (true) ;
      }else if (kBoolFalse == test_0) {
        const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, enumerator_7459.current_mValue (HERE).getter_string (HERE).objectCompare (function_mutatingAttribute (inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 177)))).boolEnum () ;
        if (kBoolTrue == test_3) {
          const enumGalgasBool test_4 = var_mutating_7351.boolEnum () ;
          if (kBoolTrue == test_4) {
            TC_Array <C_FixItDescription> fixItArray5 ;
            fixItArray5.appendObject (C_FixItDescription (kFixItRemove, "")) ;
            inCompiler->emitSemanticError (enumerator_7459.current_mValue (HERE).getter_location (SOURCE_FILE ("type-sync-declaration.galgas", 179)), GALGAS_string ("duplicated @").add_operation (function_mutatingAttribute (inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 179)), inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 179)).add_operation (GALGAS_string (" attribute"), inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 179)), fixItArray5  COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 179)) ;
          }
          var_mutating_7351 = GALGAS_bool (true) ;
        }else if (kBoolFalse == test_3) {
          const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, enumerator_7459.current_mValue (HERE).getter_string (HERE).objectCompare (function_safeAttribute (inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 182)))).boolEnum () ;
          if (kBoolTrue == test_6) {
            const enumGalgasBool test_7 = var_isSafe_7406.boolEnum () ;
            if (kBoolTrue == test_7) {
              TC_Array <C_FixItDescription> fixItArray8 ;
              fixItArray8.appendObject (C_FixItDescription (kFixItRemove, "")) ;
              inCompiler->emitSemanticError (enumerator_7459.current_mValue (HERE).getter_location (SOURCE_FILE ("type-sync-declaration.galgas", 184)), GALGAS_string ("duplicated @").add_operation (function_safeAttribute (inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 184)), inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 184)).add_operation (GALGAS_string (" attribute"), inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 184)), fixItArray8  COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 184)) ;
            }
            var_isSafe_7406 = GALGAS_bool (true) ;
          }else if (kBoolFalse == test_6) {
            TC_Array <C_FixItDescription> fixItArray9 ;
            fixItArray9.appendObject (C_FixItDescription (kFixItRemove, "")) ;
            inCompiler->emitSemanticError (enumerator_7459.current_mValue (HERE).getter_location (SOURCE_FILE ("type-sync-declaration.galgas", 188)), GALGAS_string ("unknown attribute; available attributes are @").add_operation (function_mutatingAttribute (inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 189)), inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 189)).add_operation (GALGAS_string (", @"), inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 189)).add_operation (function_mutatingAttribute (inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 189)), inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 189)), fixItArray9  COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 188)) ;
          }
        }
      }
      enumerator_7459.gotoNextObject () ;
    }
    GALGAS_string var_s_8365 = object->mProperty_mSyncToolName.getter_string (HERE).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 194)) ;
    var_s_8365.plusAssign_operation(enumerator_6616.current (HERE).getter_mName (HERE).getter_string (HERE), inCompiler  COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 195)) ;
    var_s_8365.plusAssign_operation(GALGAS_string ("("), inCompiler  COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 196)) ;
    cEnumerator_routineFormalArgumentListAST enumerator_8536 (enumerator_6616.current (HERE).getter_mFormalArgumentList (HERE), kENUMERATION_UP) ;
    while (enumerator_8536.hasCurrentObject ()) {
      var_s_8365.plusAssign_operation(extensionGetter_formalPassingModeString (enumerator_8536.current_mFormalArgumentPassingMode (HERE), inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 198)).add_operation (enumerator_8536.current_mSelector (HERE).getter_string (SOURCE_FILE ("type-sync-declaration.galgas", 198)), inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 198)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 198)), inCompiler  COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 198)) ;
      enumerator_8536.gotoNextObject () ;
    }
    var_s_8365.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 200)) ;
    GALGAS_routineDescriptor var_descriptor_8659 = GALGAS_routineDescriptor::constructor_new (enumerator_6616.current (HERE).getter_mPublic (HERE), var_exportedRoutine_6795, enumerator_6616.current (HERE).getter_mName (HERE).getter_string (SOURCE_FILE ("type-sync-declaration.galgas", 204)), var_s_8365, enumerator_6616.current (HERE).getter_mRoutineKind (HERE), var_signature_7184, var_returnTypeProxy_7315, GALGAS_bool (true), var_canMutateProperties_6869, var_isSafe_7406  COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 201)) ;
    {
    var_propertyMap_5545.setter_insertKey (var_routineMangledName_6970, enumerator_6616.current (HERE).getter_mPublic (HERE), GALGAS_propertyAccessKind::constructor_nonVirtualMethod (var_descriptor_8659  COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 214)), inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 214)) ;
    }
    GALGAS_lstring var_userRoutineMangledName_9243 = function_systemUserMangledNameFromAST (object->mProperty_mSyncToolName.getter_string (SOURCE_FILE ("type-sync-declaration.galgas", 218)), enumerator_6616.current (HERE).getter_mRoutineKind (HERE), enumerator_6616.current (HERE).getter_mName (HERE), enumerator_6616.current (HERE).getter_mFormalArgumentList (HERE), inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 217)) ;
    GALGAS_lstring var_implementationRoutineMangledName_9425 = function_systemImplementationMangledNameFromAST (object->mProperty_mSyncToolName.getter_string (SOURCE_FILE ("type-sync-declaration.galgas", 224)), enumerator_6616.current (HERE).getter_mRoutineKind (HERE), enumerator_6616.current (HERE).getter_mName (HERE), enumerator_6616.current (HERE).getter_mFormalArgumentList (HERE), inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 223)) ;
    ioArgument_ioRoutineListIR.addAssign_operation (GALGAS_systemUserRoutineIR::constructor_new (var_userRoutineMangledName_9243, GALGAS_bool (false), GALGAS_bool (false), var_implementationRoutineMangledName_9425.getter_string (SOURCE_FILE ("type-sync-declaration.galgas", 233)), var_signature_7184, var_selfTypeProxy_5430, GALGAS_bool (kIsEqual, enumerator_6616.current (HERE).getter_mRoutineKind (HERE).objectCompare (GALGAS_routineKind::constructor_section (SOURCE_FILE ("type-sync-declaration.galgas", 236)))), var_returnTypeProxy_7315  COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 229))  COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 229)) ;
    GALGAS_mode var_mode_9877 ;
    switch (enumerator_6616.current (HERE).getter_mRoutineKind (HERE).enumValue ()) {
    case GALGAS_routineKind::kNotBuilt:
      break ;
    case GALGAS_routineKind::kEnum_section:
      {
        var_mode_9877 = GALGAS_mode::constructor_sectionMode (SOURCE_FILE ("type-sync-declaration.galgas", 241)) ;
      }
      break ;
    case GALGAS_routineKind::kEnum_primitive:
      {
        var_mode_9877 = GALGAS_mode::constructor_primitiveMode (SOURCE_FILE ("type-sync-declaration.galgas", 242)) ;
      }
      break ;
    case GALGAS_routineKind::kEnum_service:
      {
        var_mode_9877 = GALGAS_mode::constructor_serviceMode (SOURCE_FILE ("type-sync-declaration.galgas", 243)) ;
      }
      break ;
    case GALGAS_routineKind::kEnum_function:
      {
        TC_Array <C_FixItDescription> fixItArray10 ;
        inCompiler->emitSemanticError (enumerator_6616.current (HERE).getter_mEndOfInstructionListLocation (HERE), GALGAS_string ("INTERNAL ERROR"), fixItArray10  COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 244)) ;
        var_mode_9877.drop () ; // Release error dropped variable
      }
      break ;
    }
    GALGAS_routineAttributes var_attributes_10164 = GALGAS_routineAttributes::constructor_mutating (SOURCE_FILE ("type-sync-declaration.galgas", 246)).operator_or (GALGAS_routineAttributes::constructor_directPropertyAccess (SOURCE_FILE ("type-sync-declaration.galgas", 246)) COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 246)).operator_or (GALGAS_routineAttributes::constructor_controlRegisterReadable (SOURCE_FILE ("type-sync-declaration.galgas", 246)) COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 246)) ;
    const enumGalgasBool test_11 = var_isSafe_7406.operator_not (SOURCE_FILE ("type-sync-declaration.galgas", 247)).boolEnum () ;
    if (kBoolTrue == test_11) {
      var_attributes_10164 = var_attributes_10164.operator_or (GALGAS_routineAttributes::constructor_panicAllowed (SOURCE_FILE ("type-sync-declaration.galgas", 248)) COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 248)) ;
    }
    ioArgument_ioDecoratedRoutineList.addAssign_operation (object->mProperty_mSyncToolName, var_mode_9877, GALGAS_bool (false), GALGAS_routineKind::constructor_function (var_mode_9877  COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 254)), var_noUnusedWarning_7383, GALGAS_bool (true), var_attributes_10164, var_implementationRoutineMangledName_9425, enumerator_6616.current (HERE).getter_mFormalArgumentList (HERE), enumerator_6616.current (HERE).getter_mInstructionList (HERE), enumerator_6616.current (HERE).getter_mEndOfInstructionListLocation (HERE), enumerator_6616.current (HERE).getter_mReturnTypeName (HERE)  COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 250)) ;
    enumerator_6616.gotoNextObject () ;
  }
  GALGAS_guardMapForContext var_guardMap_10813 = GALGAS_guardMapForContext::constructor_emptyMap (SOURCE_FILE ("type-sync-declaration.galgas", 265)) ;
  cEnumerator_guardDeclarationListAST enumerator_10847 (object->mProperty_mGuardListAST, kENUMERATION_UP) ;
  while (enumerator_10847.hasCurrentObject ()) {
    GALGAS_lstring var_guardMangledName_10901 = function_guardUserMangledNameFromAST (object->mProperty_mSyncToolName.getter_string (SOURCE_FILE ("type-sync-declaration.galgas", 269)), enumerator_10847.current (HERE).getter_mGuardName (HERE), enumerator_10847.current (HERE).getter_mGuardFormalArgumentList (HERE), inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 268)) ;
    GALGAS_routineTypedSignature var_signature_11129 ;
    {
    routine_routineSignature (ioArgument_ioContext.mProperty_mTypeMap, enumerator_10847.current (HERE).getter_mGuardFormalArgumentList (HERE), var_signature_11129, inCompiler  COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 274)) ;
    }
    {
    var_guardMap_10813.setter_insertKey (var_guardMangledName_10901, enumerator_10847.current (HERE).getter_mIsPublic (HERE), var_signature_11129, inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 276)) ;
    }
    enumerator_10847.gotoNextObject () ;
  }
  GALGAS_PLMType var_structureType_11336 = GALGAS_PLMType::constructor_new (var_propertyMap_5545, GALGAS_classConstantMap::constructor_emptyMap (SOURCE_FILE ("type-sync-declaration.galgas", 285)), var_constructorMap_6141, var_guardMap_10813, GALGAS_PLMTypeAttributes::constructor_instanciable (SOURCE_FILE ("type-sync-declaration.galgas", 288)), object->mProperty_mSyncToolName.getter_string (SOURCE_FILE ("type-sync-declaration.galgas", 289)), GALGAS_typeKind::constructor_syncTool (var_propertyList_5513  COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 290)), object->mProperty_mSyncToolName.getter_string (SOURCE_FILE ("type-sync-declaration.galgas", 291))  COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 283)) ;
  {
  ioArgument_ioContext.mProperty_mTypeMap.setter_insertType (object->mProperty_mSyncToolName, var_structureType_11336, ioArgument_ioContext.getter_mTypeMap (HERE).getter_count (SOURCE_FILE ("type-sync-declaration.galgas", 296)), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 293)) ;
  }
  cEnumerator_functionDeclarationListAST enumerator_11886 (object->mProperty_mFunctionDeclarationListAST, kENUMERATION_UP) ;
  while (enumerator_11886.hasCurrentObject ()) {
    GALGAS_bool var_warnIfUnused_11910 = GALGAS_bool (true) ;
    GALGAS_routineAttributes var_functionAttributes_11944 = GALGAS_routineAttributes::constructor_panicAllowed (SOURCE_FILE ("type-sync-declaration.galgas", 302)).operator_or (GALGAS_routineAttributes::constructor_controlRegisterReadable (SOURCE_FILE ("type-sync-declaration.galgas", 302)) COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 302)) ;
    cEnumerator_lstringlist enumerator_12060 (enumerator_11886.current (HERE).getter_mFunctionAttributeList (HERE), kENUMERATION_UP) ;
    while (enumerator_12060.hasCurrentObject ()) {
      const enumGalgasBool test_12 = GALGAS_bool (kIsEqual, enumerator_12060.current_mValue (HERE).getter_string (HERE).objectCompare (function_noUnusedWarningAttribute (inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 304)))).boolEnum () ;
      if (kBoolTrue == test_12) {
        const enumGalgasBool test_13 = var_warnIfUnused_11910.operator_not (SOURCE_FILE ("type-sync-declaration.galgas", 305)).boolEnum () ;
        if (kBoolTrue == test_13) {
          TC_Array <C_FixItDescription> fixItArray14 ;
          inCompiler->emitSemanticError (enumerator_12060.current_mValue (HERE).getter_location (SOURCE_FILE ("type-sync-declaration.galgas", 306)), GALGAS_string ("duplicated @").add_operation (function_noUnusedWarningAttribute (inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 306)), inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 306)).add_operation (GALGAS_string (" attribute"), inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 306)), fixItArray14  COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 306)) ;
        }
        var_warnIfUnused_11910 = GALGAS_bool (false) ;
      }else if (kBoolFalse == test_12) {
        const enumGalgasBool test_15 = GALGAS_bool (kIsEqual, enumerator_12060.current_mValue (HERE).getter_string (HERE).objectCompare (function_userAccessAttribute (inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 309)))).boolEnum () ;
        if (kBoolTrue == test_15) {
          const enumGalgasBool test_16 = var_functionAttributes_11944.getter_directPropertyAccess (SOURCE_FILE ("type-sync-declaration.galgas", 310)).boolEnum () ;
          if (kBoolTrue == test_16) {
            TC_Array <C_FixItDescription> fixItArray17 ;
            inCompiler->emitSemanticError (enumerator_12060.current_mValue (HERE).getter_location (SOURCE_FILE ("type-sync-declaration.galgas", 311)), GALGAS_string ("duplicated @").add_operation (function_userAccessAttribute (inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 311)), inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 311)).add_operation (GALGAS_string (" attribute"), inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 311)), fixItArray17  COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 311)) ;
          }
          var_functionAttributes_11944 = var_functionAttributes_11944.operator_or (GALGAS_routineAttributes::constructor_directPropertyAccess (SOURCE_FILE ("type-sync-declaration.galgas", 313)) COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 313)) ;
        }else if (kBoolFalse == test_15) {
          const enumGalgasBool test_18 = GALGAS_bool (kIsEqual, enumerator_12060.current_mValue (HERE).getter_string (HERE).objectCompare (function_safeAttribute (inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 314)))).boolEnum () ;
          if (kBoolTrue == test_18) {
            const enumGalgasBool test_19 = var_functionAttributes_11944.getter_panicAllowed (SOURCE_FILE ("type-sync-declaration.galgas", 315)).operator_not (SOURCE_FILE ("type-sync-declaration.galgas", 315)).boolEnum () ;
            if (kBoolTrue == test_19) {
              TC_Array <C_FixItDescription> fixItArray20 ;
              inCompiler->emitSemanticError (enumerator_12060.current_mValue (HERE).getter_location (SOURCE_FILE ("type-sync-declaration.galgas", 316)), GALGAS_string ("duplicated @").add_operation (function_safeAttribute (inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 316)), inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 316)).add_operation (GALGAS_string (" attribute"), inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 316)), fixItArray20  COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 316)) ;
            }
            var_functionAttributes_11944 = var_functionAttributes_11944.substract_operation (GALGAS_routineAttributes::constructor_panicAllowed (SOURCE_FILE ("type-sync-declaration.galgas", 318)), inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 318)) ;
          }else if (kBoolFalse == test_18) {
            const enumGalgasBool test_21 = GALGAS_bool (kIsEqual, enumerator_12060.current_mValue (HERE).getter_string (HERE).objectCompare (function_mutatingAttribute (inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 319)))).boolEnum () ;
            if (kBoolTrue == test_21) {
              const enumGalgasBool test_22 = var_functionAttributes_11944.getter_mutating (SOURCE_FILE ("type-sync-declaration.galgas", 320)).boolEnum () ;
              if (kBoolTrue == test_22) {
                TC_Array <C_FixItDescription> fixItArray23 ;
                inCompiler->emitSemanticError (enumerator_12060.current_mValue (HERE).getter_location (SOURCE_FILE ("type-sync-declaration.galgas", 321)), GALGAS_string ("duplicated @").add_operation (function_mutatingAttribute (inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 321)), inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 321)).add_operation (GALGAS_string (" attribute"), inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 321)), fixItArray23  COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 321)) ;
              }
              var_functionAttributes_11944 = var_functionAttributes_11944.operator_or (GALGAS_routineAttributes::constructor_mutating (SOURCE_FILE ("type-sync-declaration.galgas", 323)) COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 323)) ;
            }else if (kBoolFalse == test_21) {
              TC_Array <C_FixItDescription> fixItArray24 ;
              inCompiler->emitSemanticError (enumerator_12060.current_mValue (HERE).getter_location (SOURCE_FILE ("type-sync-declaration.galgas", 325)), GALGAS_string ("unknown attribute; available attributes are @").add_operation (function_noUnusedWarningAttribute (inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 325)), inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 325)).add_operation (GALGAS_string (", @"), inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 325)).add_operation (function_mutatingAttribute (inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 326)), inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 326)).add_operation (GALGAS_string (" and @"), inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 326)).add_operation (function_userAccessAttribute (inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 326)), inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 326)), fixItArray24  COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 325)) ;
            }
          }
        }
      }
      enumerator_12060.gotoNextObject () ;
    }
    GALGAS_lstring var_functionMangledName_13342 = function_routineMangledNameFromAST (object->mProperty_mSyncToolName.getter_string (SOURCE_FILE ("type-sync-declaration.galgas", 329)), enumerator_11886.current (HERE).getter_mFunctionName (HERE), enumerator_11886.current (HERE).getter_mFunctionFormalArgumentList (HERE), inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 329)) ;
    ioArgument_ioDecoratedRoutineList.addAssign_operation (object->mProperty_mSyncToolName, enumerator_11886.current (HERE).getter_mMode (HERE), GALGAS_bool (false), GALGAS_routineKind::constructor_function (enumerator_11886.current (HERE).getter_mMode (HERE)  COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 334)), var_warnIfUnused_11910, GALGAS_bool (false), var_functionAttributes_11944, var_functionMangledName_13342, enumerator_11886.current (HERE).getter_mFunctionFormalArgumentList (HERE), enumerator_11886.current (HERE).getter_mFunctionInstructionList (HERE), enumerator_11886.current (HERE).getter_mEndOfFunctionDeclaration (HERE), enumerator_11886.current (HERE).getter_mFunctionReturnTypeName (HERE)  COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 330)) ;
    enumerator_11886.gotoNextObject () ;
  }
  ioArgument_ioDecoratedDeclarationList.addAssign_operation (GALGAS_decoratedStructureDeclaration::constructor_new (object->mProperty_mSyncToolName, object->mProperty_mGuardListAST, GALGAS_bool (false)  COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 345))  COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 345)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_syncDeclarationAST_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_syncDeclarationAST.mSlotID,
                                       extensionMethod_syncDeclarationAST_enterInContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_syncDeclarationAST_enterInContext (defineExtensionMethod_syncDeclarationAST_enterInContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                   Overriding extension getter '@integerDeclarationAST locationForErrorSignaling'                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_location extensionGetter_integerDeclarationAST_locationForErrorSignaling (const cPtr_abstractDeclarationAST * /* inObject */,
                                                                                        C_Compiler * /* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_outLocation ; // Returned variable
  result_outLocation = GALGAS_location::constructor_nowhere (SOURCE_FILE ("type-integer.galgas", 13)) ;
//---
  return result_outLocation ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_integerDeclarationAST_locationForErrorSignaling (void) {
  enterExtensionGetter_locationForErrorSignaling (kTypeDescriptor_GALGAS_integerDeclarationAST.mSlotID,
                                                  extensionGetter_integerDeclarationAST_locationForErrorSignaling) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_integerDeclarationAST_locationForErrorSignaling (defineExtensionGetter_integerDeclarationAST_locationForErrorSignaling, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                     Overriding extension method '@integerDeclarationAST enterInPrecedenceGraph'                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_integerDeclarationAST_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                                          GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_integerDeclarationAST * object = (const cPtr_integerDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_integerDeclarationAST) ;
  const GALGAS_integerDeclarationAST temp_0 = object ;
  GALGAS_lstring var_integerTypeName_1434 = callExtensionGetter_typeName ((const cPtr_integerDeclarationAST *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 29)).getter_nowhere (SOURCE_FILE ("type-integer.galgas", 29)) ;
  {
  const GALGAS_integerDeclarationAST temp_1 = object ;
  ioArgument_ioGraph.setter_addNode (var_integerTypeName_1434, temp_1, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 30)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (var_integerTypeName_1434, function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 31)).getter_nowhere (SOURCE_FILE ("type-integer.galgas", 31)) COMMA_SOURCE_FILE ("type-integer.galgas", 31)) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_integerDeclarationAST_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_integerDeclarationAST.mSlotID,
                                               extensionMethod_integerDeclarationAST_enterInPrecedenceGraph) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_integerDeclarationAST_enterInPrecedenceGraph (defineExtensionMethod_integerDeclarationAST_enterInPrecedenceGraph, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//               Overriding extension getter '@integerDeclarationAST keyRepresentationForErrorSignaling'               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string extensionGetter_integerDeclarationAST_keyRepresentationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  const cPtr_integerDeclarationAST * object = (const cPtr_integerDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_integerDeclarationAST) ;
  const GALGAS_integerDeclarationAST temp_0 = object ;
  result_outRepresentation = GALGAS_string ("integer ").add_operation (callExtensionGetter_typeName ((const cPtr_integerDeclarationAST *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 37)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 37)) ;
//---
  return result_outRepresentation ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_integerDeclarationAST_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_integerDeclarationAST.mSlotID,
                                                           extensionGetter_integerDeclarationAST_keyRepresentationForErrorSignaling) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_integerDeclarationAST_keyRepresentationForErrorSignaling (defineExtensionGetter_integerDeclarationAST_keyRepresentationForErrorSignaling, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                            Function 'minValueForInteger'                                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bigint function_minValueForInteger (const GALGAS_bool & constinArgument_inIsUnsigned,
                                           const GALGAS_uint & constinArgument_inBitCount,
                                           C_Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_result ; // Returned variable
  const enumGalgasBool test_0 = constinArgument_inIsUnsigned.boolEnum () ;
  if (kBoolTrue == test_0) {
    result_result = GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 46)) ;
  }else if (kBoolFalse == test_0) {
    result_result = GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 48)).left_shift_operation (constinArgument_inBitCount.substract_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 48)) COMMA_SOURCE_FILE ("type-integer.galgas", 48)).operator_unary_minus (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 48)) ;
  }
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function introspection                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const C_galgas_type_descriptor * functionArgs_minValueForInteger [3] = {
  & kTypeDescriptor_GALGAS_bool,
  & kTypeDescriptor_GALGAS_uint,
  NULL
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_object functionWithGenericHeader_minValueForInteger (C_Compiler * inCompiler,
                                                                   const cObjectArray & inEffectiveParameterArray,
                                                                   const GALGAS_location & /* inErrorLocation */
                                                                   COMMA_LOCATION_ARGS) {
  const GALGAS_bool operand0 = GALGAS_bool::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  const GALGAS_uint operand1 = GALGAS_uint::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  return function_minValueForInteger (operand0,
                                      operand1,
                                      inCompiler
                                      COMMA_THERE).getter_object (THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_galgas_function_descriptor functionDescriptor_minValueForInteger ("minValueForInteger",
                                                                    functionWithGenericHeader_minValueForInteger,
                                                                    & kTypeDescriptor_GALGAS_bigint,
                                                                    2,
                                                                    functionArgs_minValueForInteger) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                            Function 'maxValueForInteger'                                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bigint function_maxValueForInteger (const GALGAS_bool & constinArgument_inIsUnsigned,
                                           const GALGAS_uint & constinArgument_inBitCount,
                                           C_Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_result ; // Returned variable
  const enumGalgasBool test_0 = constinArgument_inIsUnsigned.boolEnum () ;
  if (kBoolTrue == test_0) {
    result_result = GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 56)).left_shift_operation (constinArgument_inBitCount COMMA_SOURCE_FILE ("type-integer.galgas", 56)).substract_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 56)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 56)) ;
  }else if (kBoolFalse == test_0) {
    result_result = GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 58)).left_shift_operation (constinArgument_inBitCount.substract_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 58)) COMMA_SOURCE_FILE ("type-integer.galgas", 58)).substract_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 58)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 58)) ;
  }
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function introspection                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const C_galgas_type_descriptor * functionArgs_maxValueForInteger [3] = {
  & kTypeDescriptor_GALGAS_bool,
  & kTypeDescriptor_GALGAS_uint,
  NULL
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_object functionWithGenericHeader_maxValueForInteger (C_Compiler * inCompiler,
                                                                   const cObjectArray & inEffectiveParameterArray,
                                                                   const GALGAS_location & /* inErrorLocation */
                                                                   COMMA_LOCATION_ARGS) {
  const GALGAS_bool operand0 = GALGAS_bool::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  const GALGAS_uint operand1 = GALGAS_uint::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  return function_maxValueForInteger (operand0,
                                      operand1,
                                      inCompiler
                                      COMMA_THERE).getter_object (THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_galgas_function_descriptor functionDescriptor_maxValueForInteger ("maxValueForInteger",
                                                                    functionWithGenericHeader_maxValueForInteger,
                                                                    & kTypeDescriptor_GALGAS_bigint,
                                                                    2,
                                                                    functionArgs_maxValueForInteger) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        Once function 'byteSwappedMethodName'                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string onceFunction_byteSwappedMethodName (C_Compiler * /* inCompiler */
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("byteSwapped") ;
//---
  return result_result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function implementation                                                                                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static bool gOnceFunctionResultAvailable_byteSwappedMethodName = false ;
static GALGAS_string gOnceFunctionResult_byteSwappedMethodName ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string function_byteSwappedMethodName (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_byteSwappedMethodName) {
    gOnceFunctionResult_byteSwappedMethodName = onceFunction_byteSwappedMethodName (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_byteSwappedMethodName = true ;
  }
  return gOnceFunctionResult_byteSwappedMethodName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void releaseOnceFunctionResult_byteSwappedMethodName (void) {
  gOnceFunctionResult_byteSwappedMethodName.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gEpilogueForOnceFunction_byteSwappedMethodName (NULL,
                                                                   releaseOnceFunctionResult_byteSwappedMethodName) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function introspection                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const C_galgas_type_descriptor * functionArgs_byteSwappedMethodName [1] = {
  NULL
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_object functionWithGenericHeader_byteSwappedMethodName (C_Compiler * inCompiler,
                                                                      const cObjectArray & /* inEffectiveParameterArray */,
                                                                      const GALGAS_location & /* inErrorLocation */
                                                                      COMMA_LOCATION_ARGS) {
  return function_byteSwappedMethodName (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_galgas_function_descriptor functionDescriptor_byteSwappedMethodName ("byteSwappedMethodName",
                                                                       functionWithGenericHeader_byteSwappedMethodName,
                                                                       & kTypeDescriptor_GALGAS_string,
                                                                       0,
                                                                       functionArgs_byteSwappedMethodName) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        Once function 'bitReversedMethodName'                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string onceFunction_bitReversedMethodName (C_Compiler * /* inCompiler */
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("bitReversed") ;
//---
  return result_result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function implementation                                                                                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static bool gOnceFunctionResultAvailable_bitReversedMethodName = false ;
static GALGAS_string gOnceFunctionResult_bitReversedMethodName ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string function_bitReversedMethodName (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_bitReversedMethodName) {
    gOnceFunctionResult_bitReversedMethodName = onceFunction_bitReversedMethodName (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_bitReversedMethodName = true ;
  }
  return gOnceFunctionResult_bitReversedMethodName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void releaseOnceFunctionResult_bitReversedMethodName (void) {
  gOnceFunctionResult_bitReversedMethodName.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gEpilogueForOnceFunction_bitReversedMethodName (NULL,
                                                                   releaseOnceFunctionResult_bitReversedMethodName) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function introspection                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const C_galgas_type_descriptor * functionArgs_bitReversedMethodName [1] = {
  NULL
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_object functionWithGenericHeader_bitReversedMethodName (C_Compiler * inCompiler,
                                                                      const cObjectArray & /* inEffectiveParameterArray */,
                                                                      const GALGAS_location & /* inErrorLocation */
                                                                      COMMA_LOCATION_ARGS) {
  return function_bitReversedMethodName (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_galgas_function_descriptor functionDescriptor_bitReversedMethodName ("bitReversedMethodName",
                                                                       functionWithGenericHeader_bitReversedMethodName,
                                                                       & kTypeDescriptor_GALGAS_string,
                                                                       0,
                                                                       functionArgs_bitReversedMethodName) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                     Once function 'countLeadingZerosMethodName'                                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string onceFunction_countLeadingZerosMethodName (C_Compiler * /* inCompiler */
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("leadingZeroCount") ;
//---
  return result_result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function implementation                                                                                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static bool gOnceFunctionResultAvailable_countLeadingZerosMethodName = false ;
static GALGAS_string gOnceFunctionResult_countLeadingZerosMethodName ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string function_countLeadingZerosMethodName (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_countLeadingZerosMethodName) {
    gOnceFunctionResult_countLeadingZerosMethodName = onceFunction_countLeadingZerosMethodName (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_countLeadingZerosMethodName = true ;
  }
  return gOnceFunctionResult_countLeadingZerosMethodName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void releaseOnceFunctionResult_countLeadingZerosMethodName (void) {
  gOnceFunctionResult_countLeadingZerosMethodName.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gEpilogueForOnceFunction_countLeadingZerosMethodName (NULL,
                                                                         releaseOnceFunctionResult_countLeadingZerosMethodName) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function introspection                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const C_galgas_type_descriptor * functionArgs_countLeadingZerosMethodName [1] = {
  NULL
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_object functionWithGenericHeader_countLeadingZerosMethodName (C_Compiler * inCompiler,
                                                                            const cObjectArray & /* inEffectiveParameterArray */,
                                                                            const GALGAS_location & /* inErrorLocation */
                                                                            COMMA_LOCATION_ARGS) {
  return function_countLeadingZerosMethodName (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_galgas_function_descriptor functionDescriptor_countLeadingZerosMethodName ("countLeadingZerosMethodName",
                                                                             functionWithGenericHeader_countLeadingZerosMethodName,
                                                                             & kTypeDescriptor_GALGAS_string,
                                                                             0,
                                                                             functionArgs_countLeadingZerosMethodName) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                    Once function 'countTrainingZerosMethodName'                                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string onceFunction_countTrainingZerosMethodName (C_Compiler * /* inCompiler */
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("trainingZeroCount") ;
//---
  return result_result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function implementation                                                                                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static bool gOnceFunctionResultAvailable_countTrainingZerosMethodName = false ;
static GALGAS_string gOnceFunctionResult_countTrainingZerosMethodName ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string function_countTrainingZerosMethodName (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_countTrainingZerosMethodName) {
    gOnceFunctionResult_countTrainingZerosMethodName = onceFunction_countTrainingZerosMethodName (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_countTrainingZerosMethodName = true ;
  }
  return gOnceFunctionResult_countTrainingZerosMethodName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void releaseOnceFunctionResult_countTrainingZerosMethodName (void) {
  gOnceFunctionResult_countTrainingZerosMethodName.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gEpilogueForOnceFunction_countTrainingZerosMethodName (NULL,
                                                                          releaseOnceFunctionResult_countTrainingZerosMethodName) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function introspection                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const C_galgas_type_descriptor * functionArgs_countTrainingZerosMethodName [1] = {
  NULL
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_object functionWithGenericHeader_countTrainingZerosMethodName (C_Compiler * inCompiler,
                                                                             const cObjectArray & /* inEffectiveParameterArray */,
                                                                             const GALGAS_location & /* inErrorLocation */
                                                                             COMMA_LOCATION_ARGS) {
  return function_countTrainingZerosMethodName (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_galgas_function_descriptor functionDescriptor_countTrainingZerosMethodName ("countTrainingZerosMethodName",
                                                                              functionWithGenericHeader_countTrainingZerosMethodName,
                                                                              & kTypeDescriptor_GALGAS_string,
                                                                              0,
                                                                              functionArgs_countTrainingZerosMethodName) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        Once function 'setBitCountMethodName'                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string onceFunction_setBitCountMethodName (C_Compiler * /* inCompiler */
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("setBitCount") ;
//---
  return result_result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function implementation                                                                                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static bool gOnceFunctionResultAvailable_setBitCountMethodName = false ;
static GALGAS_string gOnceFunctionResult_setBitCountMethodName ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string function_setBitCountMethodName (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_setBitCountMethodName) {
    gOnceFunctionResult_setBitCountMethodName = onceFunction_setBitCountMethodName (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_setBitCountMethodName = true ;
  }
  return gOnceFunctionResult_setBitCountMethodName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void releaseOnceFunctionResult_setBitCountMethodName (void) {
  gOnceFunctionResult_setBitCountMethodName.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gEpilogueForOnceFunction_setBitCountMethodName (NULL,
                                                                   releaseOnceFunctionResult_setBitCountMethodName) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function introspection                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const C_galgas_type_descriptor * functionArgs_setBitCountMethodName [1] = {
  NULL
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_object functionWithGenericHeader_setBitCountMethodName (C_Compiler * inCompiler,
                                                                      const cObjectArray & /* inEffectiveParameterArray */,
                                                                      const GALGAS_location & /* inErrorLocation */
                                                                      COMMA_LOCATION_ARGS) {
  return function_setBitCountMethodName (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_galgas_function_descriptor functionDescriptor_setBitCountMethodName ("setBitCountMethodName",
                                                                       functionWithGenericHeader_setBitCountMethodName,
                                                                       & kTypeDescriptor_GALGAS_string,
                                                                       0,
                                                                       functionArgs_setBitCountMethodName) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                         Overriding extension method '@integerDeclarationAST enterInContext'                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_integerDeclarationAST_enterInContext (const cPtr_abstractDeclarationAST * inObject,
                                                                  const GALGAS_functionDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                                  GALGAS_semanticContext & ioArgument_ioContext,
                                                                  GALGAS_declarationDecorationList & /* ioArgument_ioDecoratedDeclarationList */,
                                                                  GALGAS_decoratedRegularRoutineList & /* ioArgument_ioDecoratedRoutineList */,
                                                                  GALGAS_routineListIR & ioArgument_ioRoutineListIR,
                                                                  GALGAS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                                  GALGAS_staticEntityMap & /* ioArgument_ioStaticEntityMap */,
                                                                  GALGAS_globalVariableIRList & /* ioArgument_ioGlobalVariableIRList */,
                                                                  GALGAS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_integerDeclarationAST * object = (const cPtr_integerDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_integerDeclarationAST) ;
  const GALGAS_integerDeclarationAST temp_0 = object ;
  GALGAS_lstring var_integerTypeName_4786 = callExtensionGetter_typeName ((const cPtr_integerDeclarationAST *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 107)).getter_nowhere (SOURCE_FILE ("type-integer.galgas", 107)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_selfTypeProxy_4906 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioContext.mProperty_mTypeMap, var_integerTypeName_4786, var_selfTypeProxy_4906 COMMA_SOURCE_FILE ("type-integer.galgas", 108)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_boolTypeProxy_5017 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioContext.mProperty_mTypeMap, GALGAS_lstring::constructor_new (function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 109)), GALGAS_location::constructor_nowhere (SOURCE_FILE ("type-integer.galgas", 109))  COMMA_SOURCE_FILE ("type-integer.galgas", 109)), var_boolTypeProxy_5017 COMMA_SOURCE_FILE ("type-integer.galgas", 109)) ;
  }
  GALGAS_bigint var_min_5085 = function_minValueForInteger (object->mProperty_mIsSigned.operator_not (SOURCE_FILE ("type-integer.galgas", 111)), object->mProperty_mSize, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 111)) ;
  GALGAS_bigint var_max_5140 = function_maxValueForInteger (object->mProperty_mIsSigned.operator_not (SOURCE_FILE ("type-integer.galgas", 112)), object->mProperty_mSize, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 112)) ;
  GALGAS_string var_llvmTypeName_5258 = GALGAS_string ("i").add_operation (object->mProperty_mSize.getter_string (SOURCE_FILE ("type-integer.galgas", 114)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 114)) ;
  GALGAS_propertyMap var_propertyMap_5299 = GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-integer.galgas", 115)) ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, object->mProperty_mSize.modulo_operation (GALGAS_uint ((uint32_t) 16U), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 116)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_1) {
    {
    extensionSetter_addFunctionWithoutArgument (var_propertyMap_5299, var_integerTypeName_4786.getter_string (SOURCE_FILE ("type-integer.galgas", 118)), function_byteSwappedMethodName (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 119)), GALGAS_bool (true), var_selfTypeProxy_4906, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 117)) ;
    }
    ioArgument_ioRoutineListIR.addAssign_operation (GALGAS_integerBuiltinFunctionIR::constructor_new (function_routineMangledNameFromAST (var_integerTypeName_4786.getter_string (SOURCE_FILE ("type-integer.galgas", 125)), function_byteSwappedMethodName (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 125)).getter_nowhere (SOURCE_FILE ("type-integer.galgas", 125)), GALGAS_routineFormalArgumentListAST::constructor_emptyList (SOURCE_FILE ("type-integer.galgas", 125)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 125)), GALGAS_bool (false), GALGAS_bool (false), var_llvmTypeName_5258, GALGAS_string ("bswap")  COMMA_SOURCE_FILE ("type-integer.galgas", 124))  COMMA_SOURCE_FILE ("type-integer.galgas", 124)) ;
  }
  GALGAS_bool test_2 = GALGAS_bool (kIsEqual, object->mProperty_mSize.objectCompare (GALGAS_uint ((uint32_t) 1U))) ;
  if (kBoolTrue == test_2.boolEnum ()) {
    test_2 = object->mProperty_mIsSigned.operator_not (SOURCE_FILE ("type-integer.galgas", 132)) ;
  }
  const enumGalgasBool test_3 = test_2.boolEnum () ;
  if (kBoolTrue == test_3) {
    {
    extensionSetter_addFunctionWithoutArgument (var_propertyMap_5299, var_integerTypeName_4786.getter_string (SOURCE_FILE ("type-integer.galgas", 134)), function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 135)), GALGAS_bool (true), var_boolTypeProxy_5017, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 133)) ;
    }
    ioArgument_ioRoutineListIR.addAssign_operation (GALGAS_uint_31_ToBoolFunctionIR::constructor_new (function_routineMangledNameFromAST (var_integerTypeName_4786.getter_string (SOURCE_FILE ("type-integer.galgas", 141)), function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 141)).getter_nowhere (SOURCE_FILE ("type-integer.galgas", 141)), GALGAS_routineFormalArgumentListAST::constructor_emptyList (SOURCE_FILE ("type-integer.galgas", 141)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 141)), GALGAS_bool (false), GALGAS_bool (false), var_llvmTypeName_5258  COMMA_SOURCE_FILE ("type-integer.galgas", 140))  COMMA_SOURCE_FILE ("type-integer.galgas", 140)) ;
  }
  {
  extensionSetter_addFunctionWithoutArgument (var_propertyMap_5299, var_integerTypeName_4786.getter_string (SOURCE_FILE ("type-integer.galgas", 148)), function_bitReversedMethodName (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 149)), GALGAS_bool (true), var_selfTypeProxy_4906, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 147)) ;
  }
  ioArgument_ioRoutineListIR.addAssign_operation (GALGAS_integerBuiltinFunctionIR::constructor_new (function_routineMangledNameFromAST (var_integerTypeName_4786.getter_string (SOURCE_FILE ("type-integer.galgas", 155)), function_bitReversedMethodName (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 155)).getter_nowhere (SOURCE_FILE ("type-integer.galgas", 155)), GALGAS_routineFormalArgumentListAST::constructor_emptyList (SOURCE_FILE ("type-integer.galgas", 155)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 155)), GALGAS_bool (false), GALGAS_bool (false), var_llvmTypeName_5258, GALGAS_string ("bitreverse")  COMMA_SOURCE_FILE ("type-integer.galgas", 154))  COMMA_SOURCE_FILE ("type-integer.galgas", 154)) ;
  {
  extensionSetter_addFunctionWithoutArgument (var_propertyMap_5299, var_integerTypeName_4786.getter_string (SOURCE_FILE ("type-integer.galgas", 162)), function_countLeadingZerosMethodName (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 163)), GALGAS_bool (true), var_selfTypeProxy_4906, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 161)) ;
  }
  ioArgument_ioRoutineListIR.addAssign_operation (GALGAS_integerBuiltinFunctionIR::constructor_new (function_routineMangledNameFromAST (var_integerTypeName_4786.getter_string (SOURCE_FILE ("type-integer.galgas", 169)), function_countLeadingZerosMethodName (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 169)).getter_nowhere (SOURCE_FILE ("type-integer.galgas", 169)), GALGAS_routineFormalArgumentListAST::constructor_emptyList (SOURCE_FILE ("type-integer.galgas", 169)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 169)), GALGAS_bool (false), GALGAS_bool (false), var_llvmTypeName_5258, GALGAS_string ("ctlz")  COMMA_SOURCE_FILE ("type-integer.galgas", 168))  COMMA_SOURCE_FILE ("type-integer.galgas", 168)) ;
  {
  extensionSetter_addFunctionWithoutArgument (var_propertyMap_5299, var_integerTypeName_4786.getter_string (SOURCE_FILE ("type-integer.galgas", 176)), function_countTrainingZerosMethodName (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 177)), GALGAS_bool (true), var_selfTypeProxy_4906, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 175)) ;
  }
  ioArgument_ioRoutineListIR.addAssign_operation (GALGAS_integerBuiltinFunctionIR::constructor_new (function_routineMangledNameFromAST (var_integerTypeName_4786.getter_string (SOURCE_FILE ("type-integer.galgas", 183)), function_countTrainingZerosMethodName (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 183)).getter_nowhere (SOURCE_FILE ("type-integer.galgas", 183)), GALGAS_routineFormalArgumentListAST::constructor_emptyList (SOURCE_FILE ("type-integer.galgas", 183)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 183)), GALGAS_bool (false), GALGAS_bool (false), var_llvmTypeName_5258, GALGAS_string ("cttz")  COMMA_SOURCE_FILE ("type-integer.galgas", 182))  COMMA_SOURCE_FILE ("type-integer.galgas", 182)) ;
  {
  extensionSetter_addFunctionWithoutArgument (var_propertyMap_5299, var_integerTypeName_4786.getter_string (SOURCE_FILE ("type-integer.galgas", 190)), function_setBitCountMethodName (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 191)), GALGAS_bool (true), var_selfTypeProxy_4906, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 189)) ;
  }
  ioArgument_ioRoutineListIR.addAssign_operation (GALGAS_integerBuiltinFunctionIR::constructor_new (function_routineMangledNameFromAST (var_integerTypeName_4786.getter_string (SOURCE_FILE ("type-integer.galgas", 197)), function_setBitCountMethodName (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 197)).getter_nowhere (SOURCE_FILE ("type-integer.galgas", 197)), GALGAS_routineFormalArgumentListAST::constructor_emptyList (SOURCE_FILE ("type-integer.galgas", 197)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 197)), GALGAS_bool (false), GALGAS_bool (false), var_llvmTypeName_5258, GALGAS_string ("ctpop")  COMMA_SOURCE_FILE ("type-integer.galgas", 196))  COMMA_SOURCE_FILE ("type-integer.galgas", 196)) ;
  GALGAS_classConstantMap var_classConstantMap_8061 = GALGAS_classConstantMap::constructor_emptyMap (SOURCE_FILE ("type-integer.galgas", 204)) ;
  {
  var_classConstantMap_8061.setter_insertKey (GALGAS_string ("min").getter_nowhere (SOURCE_FILE ("type-integer.galgas", 205)), var_min_5085, var_integerTypeName_4786, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 205)) ;
  }
  {
  var_classConstantMap_8061.setter_insertKey (GALGAS_string ("max").getter_nowhere (SOURCE_FILE ("type-integer.galgas", 206)), var_max_5140, var_integerTypeName_4786, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 206)) ;
  }
  GALGAS_constructorMap var_constructorMap_8300 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-integer.galgas", 208)) ;
  {
  var_constructorMap_8300.setter_insertKey (GALGAS_string ("()").getter_nowhere (SOURCE_FILE ("type-integer.galgas", 209)), GALGAS_constructorSignature::constructor_emptyList (SOURCE_FILE ("type-integer.galgas", 209)), GALGAS_constructorValue::constructor_simple (GALGAS_uint ((uint32_t) 0U).getter_bigint (SOURCE_FILE ("type-integer.galgas", 209))  COMMA_SOURCE_FILE ("type-integer.galgas", 209)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 209)) ;
  }
  GALGAS_PLMType var_integerType_8454 = GALGAS_PLMType::constructor_new (var_propertyMap_5299, var_classConstantMap_8061, var_constructorMap_8300, GALGAS_guardMapForContext::constructor_emptyMap (SOURCE_FILE ("type-integer.galgas", 215)), GALGAS_PLMTypeAttributes::constructor_instanciable (SOURCE_FILE ("type-integer.galgas", 216)).operator_or (GALGAS_PLMTypeAttributes::constructor_equatable (SOURCE_FILE ("type-integer.galgas", 216)) COMMA_SOURCE_FILE ("type-integer.galgas", 216)).operator_or (GALGAS_PLMTypeAttributes::constructor_copyable (SOURCE_FILE ("type-integer.galgas", 216)) COMMA_SOURCE_FILE ("type-integer.galgas", 216)).operator_or (GALGAS_PLMTypeAttributes::constructor_comparable (SOURCE_FILE ("type-integer.galgas", 216)) COMMA_SOURCE_FILE ("type-integer.galgas", 216)), var_integerTypeName_4786.getter_string (SOURCE_FILE ("type-integer.galgas", 217)), GALGAS_typeKind::constructor_integer (var_min_5085, var_max_5140, object->mProperty_mIsSigned.operator_not (SOURCE_FILE ("type-integer.galgas", 218)), object->mProperty_mSize  COMMA_SOURCE_FILE ("type-integer.galgas", 218)), var_integerTypeName_4786.getter_string (SOURCE_FILE ("type-integer.galgas", 219))  COMMA_SOURCE_FILE ("type-integer.galgas", 211)) ;
  {
  ioArgument_ioContext.mProperty_mTypeMap.setter_insertType (var_integerTypeName_4786, var_integerType_8454, ioArgument_ioContext.getter_mTypeMap (HERE).getter_count (SOURCE_FILE ("type-integer.galgas", 224)), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 221)) ;
  }
  {
  routine_enter_5F_integer_5F_integer_5F_operators (var_integerTypeName_4786, object->mProperty_mIsSigned, ioArgument_ioContext, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 228)) ;
  }
  {
  routine_enter_5F_integer_5F_literal_5F_operators (var_integerTypeName_4786, object->mProperty_mIsSigned, ioArgument_ioContext, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 234)) ;
  }
  {
  routine_enter_5F_literal_5F_integer_5F_operators (var_integerTypeName_4786, object->mProperty_mIsSigned, ioArgument_ioContext, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 240)) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_integerDeclarationAST_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_integerDeclarationAST.mSlotID,
                                       extensionMethod_integerDeclarationAST_enterInContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_integerDeclarationAST_enterInContext (defineExtensionMethod_integerDeclarationAST_enterInContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                      Routine 'enter_integer_integer_operators'                                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_enter_5F_integer_5F_integer_5F_operators (const GALGAS_lstring constinArgument_inIntegerTypeName,
                                                       const GALGAS_bool constinArgument_inIsSigned,
                                                       GALGAS_semanticContext & ioArgument_ioContext,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_PLMType var_selfType_10051 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.getter_mTypeMap (HERE), constinArgument_inIntegerTypeName, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 256)).getter_type (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 256)) ;
  GALGAS_PLMType var_booleanType_10151 = extensionGetter_booleanType (ioArgument_ioContext, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 257)) ;
  GALGAS_lstring var_intIntOp_10223 = function_combineTypeNamesForInfixOperator (constinArgument_inIntegerTypeName.getter_string (SOURCE_FILE ("type-integer.galgas", 259)), constinArgument_inIntegerTypeName.getter_string (SOURCE_FILE ("type-integer.galgas", 259)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 259)) ;
  {
  ioArgument_ioContext.mProperty_mEqualOperatorMap.setter_insertKey (var_intIntOp_10223, var_booleanType_10151, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_eq (SOURCE_FILE ("type-integer.galgas", 263))  COMMA_SOURCE_FILE ("type-integer.galgas", 263)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 260)) ;
  }
  {
  ioArgument_ioContext.mProperty_mNonEqualOperatorMap.setter_insertKey (var_intIntOp_10223, var_booleanType_10151, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_ne (SOURCE_FILE ("type-integer.galgas", 268))  COMMA_SOURCE_FILE ("type-integer.galgas", 268)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 265)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_0 ;
  const enumGalgasBool test_1 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_slt (SOURCE_FILE ("type-integer.galgas", 273)) ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_ult (SOURCE_FILE ("type-integer.galgas", 273)) ;
  }
  ioArgument_ioContext.mProperty_mStrictInfOperatorMap.setter_insertKey (var_intIntOp_10223, var_booleanType_10151, GALGAS_infixObjectObjectOperatorDescription::constructor_new (temp_0  COMMA_SOURCE_FILE ("type-integer.galgas", 273)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 270)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_2 ;
  const enumGalgasBool test_3 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_3) {
    temp_2 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_sle (SOURCE_FILE ("type-integer.galgas", 278)) ;
  }else if (kBoolFalse == test_3) {
    temp_2 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_ule (SOURCE_FILE ("type-integer.galgas", 278)) ;
  }
  ioArgument_ioContext.mProperty_mInfEqualOperatorMap.setter_insertKey (var_intIntOp_10223, var_booleanType_10151, GALGAS_infixObjectObjectOperatorDescription::constructor_new (temp_2  COMMA_SOURCE_FILE ("type-integer.galgas", 278)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 275)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_4 ;
  const enumGalgasBool test_5 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_5) {
    temp_4 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_sgt (SOURCE_FILE ("type-integer.galgas", 283)) ;
  }else if (kBoolFalse == test_5) {
    temp_4 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_ugt (SOURCE_FILE ("type-integer.galgas", 283)) ;
  }
  ioArgument_ioContext.mProperty_mStrictSupOperatorMap.setter_insertKey (var_intIntOp_10223, var_booleanType_10151, GALGAS_infixObjectObjectOperatorDescription::constructor_new (temp_4  COMMA_SOURCE_FILE ("type-integer.galgas", 283)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 280)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_6 ;
  const enumGalgasBool test_7 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_7) {
    temp_6 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_sge (SOURCE_FILE ("type-integer.galgas", 288)) ;
  }else if (kBoolFalse == test_7) {
    temp_6 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_uge (SOURCE_FILE ("type-integer.galgas", 288)) ;
  }
  ioArgument_ioContext.mProperty_mSupEqualOperatorMap.setter_insertKey (var_intIntOp_10223, var_booleanType_10151, GALGAS_infixObjectObjectOperatorDescription::constructor_new (temp_6  COMMA_SOURCE_FILE ("type-integer.galgas", 288)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 285)) ;
  }
  const enumGalgasBool test_8 = constinArgument_inIsSigned.operator_not (SOURCE_FILE ("type-integer.galgas", 291)).boolEnum () ;
  if (kBoolTrue == test_8) {
    {
    ioArgument_ioContext.mProperty_mAndOperatorMap.setter_insertKey (var_intIntOp_10223, var_selfType_10051, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_and (SOURCE_FILE ("type-integer.galgas", 295))  COMMA_SOURCE_FILE ("type-integer.galgas", 295)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 292)) ;
    }
    {
    ioArgument_ioContext.mProperty_mOrOperatorMap.setter_insertKey (var_intIntOp_10223, var_selfType_10051, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_ior (SOURCE_FILE ("type-integer.galgas", 300))  COMMA_SOURCE_FILE ("type-integer.galgas", 300)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 297)) ;
    }
    {
    ioArgument_ioContext.mProperty_mXorOperatorMap.setter_insertKey (var_intIntOp_10223, var_selfType_10051, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_xor (SOURCE_FILE ("type-integer.galgas", 305))  COMMA_SOURCE_FILE ("type-integer.galgas", 305)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 302)) ;
    }
    {
    ioArgument_ioContext.mProperty_mUnsignedComplementOperatorMap.setter_insertKey (constinArgument_inIntegerTypeName, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 307)) ;
    }
  }
  const enumGalgasBool test_9 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_9) {
    {
    ioArgument_ioContext.mProperty_mUnaryMinusOperatorMap.setter_insertKey (constinArgument_inIntegerTypeName, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 313)) ;
    }
  }
  {
  GALGAS_llvmBinaryOperation temp_10 ;
  const enumGalgasBool test_11 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_11) {
    temp_10 = GALGAS_llvmBinaryOperation::constructor_saddOVF (SOURCE_FILE ("type-integer.galgas", 321)) ;
  }else if (kBoolFalse == test_11) {
    temp_10 = GALGAS_llvmBinaryOperation::constructor_uaddOVF (SOURCE_FILE ("type-integer.galgas", 321)) ;
  }
  ioArgument_ioContext.mProperty_mAddOperatorMap.setter_insertKey (var_intIntOp_10223, var_selfType_10051, GALGAS_infixObjectObjectOperatorDescription::constructor_new (temp_10  COMMA_SOURCE_FILE ("type-integer.galgas", 321)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 318)) ;
  }
  {
  ioArgument_ioContext.mProperty_mAddNoOvfOperatorMap.setter_insertKey (var_intIntOp_10223, var_selfType_10051, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_addNoOVF (SOURCE_FILE ("type-integer.galgas", 326))  COMMA_SOURCE_FILE ("type-integer.galgas", 326)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 323)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_12 ;
  const enumGalgasBool test_13 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_13) {
    temp_12 = GALGAS_llvmBinaryOperation::constructor_ssubOVF (SOURCE_FILE ("type-integer.galgas", 331)) ;
  }else if (kBoolFalse == test_13) {
    temp_12 = GALGAS_llvmBinaryOperation::constructor_usubOVF (SOURCE_FILE ("type-integer.galgas", 331)) ;
  }
  ioArgument_ioContext.mProperty_mSubOperatorMap.setter_insertKey (var_intIntOp_10223, var_selfType_10051, GALGAS_infixObjectObjectOperatorDescription::constructor_new (temp_12  COMMA_SOURCE_FILE ("type-integer.galgas", 331)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 328)) ;
  }
  {
  ioArgument_ioContext.mProperty_mSubNoOvfOperatorMap.setter_insertKey (var_intIntOp_10223, var_selfType_10051, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_subNoOVF (SOURCE_FILE ("type-integer.galgas", 336))  COMMA_SOURCE_FILE ("type-integer.galgas", 336)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 333)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_14 ;
  const enumGalgasBool test_15 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_15) {
    temp_14 = GALGAS_llvmBinaryOperation::constructor_smulOVF (SOURCE_FILE ("type-integer.galgas", 341)) ;
  }else if (kBoolFalse == test_15) {
    temp_14 = GALGAS_llvmBinaryOperation::constructor_umulOVF (SOURCE_FILE ("type-integer.galgas", 341)) ;
  }
  ioArgument_ioContext.mProperty_mMulOperatorMap.setter_insertKey (var_intIntOp_10223, var_selfType_10051, GALGAS_infixObjectObjectOperatorDescription::constructor_new (temp_14  COMMA_SOURCE_FILE ("type-integer.galgas", 341)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 338)) ;
  }
  {
  ioArgument_ioContext.mProperty_mMulNoOvfOperatorMap.setter_insertKey (var_intIntOp_10223, var_selfType_10051, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_mulNoOVF (SOURCE_FILE ("type-integer.galgas", 346))  COMMA_SOURCE_FILE ("type-integer.galgas", 346)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 343)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_16 ;
  const enumGalgasBool test_17 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_17) {
    temp_16 = GALGAS_llvmBinaryOperation::constructor_sdivOVF (SOURCE_FILE ("type-integer.galgas", 351)) ;
  }else if (kBoolFalse == test_17) {
    temp_16 = GALGAS_llvmBinaryOperation::constructor_udivOVF (SOURCE_FILE ("type-integer.galgas", 351)) ;
  }
  ioArgument_ioContext.mProperty_mDivOperatorMap.setter_insertKey (var_intIntOp_10223, var_selfType_10051, GALGAS_infixObjectObjectOperatorDescription::constructor_new (temp_16  COMMA_SOURCE_FILE ("type-integer.galgas", 351)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 348)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_18 ;
  const enumGalgasBool test_19 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_19) {
    temp_18 = GALGAS_llvmBinaryOperation::constructor_sdivNoOVF (SOURCE_FILE ("type-integer.galgas", 356)) ;
  }else if (kBoolFalse == test_19) {
    temp_18 = GALGAS_llvmBinaryOperation::constructor_udivNoOVF (SOURCE_FILE ("type-integer.galgas", 356)) ;
  }
  ioArgument_ioContext.mProperty_mDivNoOvfOperatorMap.setter_insertKey (var_intIntOp_10223, var_selfType_10051, GALGAS_infixObjectObjectOperatorDescription::constructor_new (temp_18  COMMA_SOURCE_FILE ("type-integer.galgas", 356)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 353)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_20 ;
  const enumGalgasBool test_21 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_21) {
    temp_20 = GALGAS_llvmBinaryOperation::constructor_sremOVF (SOURCE_FILE ("type-integer.galgas", 361)) ;
  }else if (kBoolFalse == test_21) {
    temp_20 = GALGAS_llvmBinaryOperation::constructor_uremOVF (SOURCE_FILE ("type-integer.galgas", 361)) ;
  }
  ioArgument_ioContext.mProperty_mModOperatorMap.setter_insertKey (var_intIntOp_10223, var_selfType_10051, GALGAS_infixObjectObjectOperatorDescription::constructor_new (temp_20  COMMA_SOURCE_FILE ("type-integer.galgas", 361)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 358)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_22 ;
  const enumGalgasBool test_23 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_23) {
    temp_22 = GALGAS_llvmBinaryOperation::constructor_sremNoOVF (SOURCE_FILE ("type-integer.galgas", 366)) ;
  }else if (kBoolFalse == test_23) {
    temp_22 = GALGAS_llvmBinaryOperation::constructor_uremNoOVF (SOURCE_FILE ("type-integer.galgas", 366)) ;
  }
  ioArgument_ioContext.mProperty_mModNoOvfOperatorMap.setter_insertKey (var_intIntOp_10223, var_selfType_10051, GALGAS_infixObjectObjectOperatorDescription::constructor_new (temp_22  COMMA_SOURCE_FILE ("type-integer.galgas", 366)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 363)) ;
  }
  {
  ioArgument_ioContext.mProperty_mLeftShiftOperatorMap.setter_insertKey (var_intIntOp_10223, var_selfType_10051, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_shl (SOURCE_FILE ("type-integer.galgas", 372))  COMMA_SOURCE_FILE ("type-integer.galgas", 372)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 369)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_24 ;
  const enumGalgasBool test_25 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_25) {
    temp_24 = GALGAS_llvmBinaryOperation::constructor_ashr (SOURCE_FILE ("type-integer.galgas", 377)) ;
  }else if (kBoolFalse == test_25) {
    temp_24 = GALGAS_llvmBinaryOperation::constructor_lshr (SOURCE_FILE ("type-integer.galgas", 377)) ;
  }
  ioArgument_ioContext.mProperty_mRightShiftOperatorMap.setter_insertKey (var_intIntOp_10223, var_selfType_10051, GALGAS_infixObjectObjectOperatorDescription::constructor_new (temp_24  COMMA_SOURCE_FILE ("type-integer.galgas", 377)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 374)) ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//            Overriding extension method '@infixObjectObjectOperatorDescription generateInfixOperatorCode'            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_infixObjectObjectOperatorDescription_generateInfixOperatorCode (const cPtr_infixOperatorDescription * inObject,
                                                                                            GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                                            GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                                            const GALGAS_objectIR constinArgument_inLeftOperand,
                                                                                            const GALGAS_location constinArgument_inOperatorLocation,
                                                                                            const GALGAS_objectIR constinArgument_inRightOperand,
                                                                                            const GALGAS_PLMType constinArgument_inResultType,
                                                                                            GALGAS_objectIR & outArgument_outResult,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_infixObjectObjectOperatorDescription * object = (const cPtr_infixObjectObjectOperatorDescription *) inObject ;
  macroValidSharedObject (object, cPtr_infixObjectObjectOperatorDescription) ;
  GALGAS_bool test_0 = constinArgument_inLeftOperand.getter_isLiteralInteger (SOURCE_FILE ("type-integer.galgas", 397)) ;
  if (kBoolTrue == test_0.boolEnum ()) {
    test_0 = constinArgument_inRightOperand.getter_isLiteralInteger (SOURCE_FILE ("type-integer.galgas", 397)) ;
  }
  const enumGalgasBool test_1 = test_0.boolEnum () ;
  if (kBoolTrue == test_1) {
    GALGAS_bigint var_left_14787 ;
    GALGAS_PLMType joker_14761_1 ; // Joker input parameter
    constinArgument_inLeftOperand.method_literalInteger (joker_14761_1, var_left_14787, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 398)) ;
    GALGAS_bigint var_right_14852 ;
    GALGAS_PLMType joker_14825_1 ; // Joker input parameter
    constinArgument_inRightOperand.method_literalInteger (joker_14825_1, var_right_14852, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 399)) ;
    const GALGAS_infixObjectObjectOperatorDescription temp_2 = object ;
    GALGAS_bigint var_resultValue_14873 = callExtensionGetter_performStaticOperation ((const cPtr_infixObjectObjectOperatorDescription *) temp_2.ptr (), var_left_14787, var_right_14852, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 400)) ;
    outArgument_outResult = GALGAS_objectIR::constructor_literalInteger (constinArgument_inResultType, var_resultValue_14873  COMMA_SOURCE_FILE ("type-integer.galgas", 401)) ;
  }else if (kBoolFalse == test_1) {
    {
    routine_getNewTempValue (constinArgument_inResultType, ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 403)) ;
    }
    {
    extensionSetter_appendBinaryOperation (ioArgument_ioInstructionGenerationList, outArgument_outResult, extensionGetter_type (constinArgument_inLeftOperand, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 407)), constinArgument_inOperatorLocation, constinArgument_inLeftOperand, object->mProperty_mOperator, constinArgument_inRightOperand, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 405)) ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_infixObjectObjectOperatorDescription_generateInfixOperatorCode (void) {
  enterExtensionMethod_generateInfixOperatorCode (kTypeDescriptor_GALGAS_infixObjectObjectOperatorDescription.mSlotID,
                                                  extensionMethod_infixObjectObjectOperatorDescription_generateInfixOperatorCode) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_infixObjectObjectOperatorDescription_generateInfixOperatorCode (defineExtensionMethod_infixObjectObjectOperatorDescription_generateInfixOperatorCode, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                      Routine 'enter_integer_literal_operators'                                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_enter_5F_integer_5F_literal_5F_operators (const GALGAS_lstring constinArgument_inIntegerTypeName,
                                                       const GALGAS_bool constinArgument_inIsSigned,
                                                       GALGAS_semanticContext & ioArgument_ioContext,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_PLMType var_selfType_15818 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.getter_mTypeMap (HERE), constinArgument_inIntegerTypeName, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 426)).getter_type (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 426)) ;
  GALGAS_PLMType var_booleanType_15918 = extensionGetter_booleanType (ioArgument_ioContext, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 427)) ;
  GALGAS_lstring var_intLiteralOp_15994 = function_combineTypeNamesForInfixOperator (constinArgument_inIntegerTypeName.getter_string (HERE), function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 429)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 429)) ;
  {
  ioArgument_ioContext.mProperty_mEqualOperatorMap.setter_insertKey (var_intLiteralOp_15994, var_booleanType_15918, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_eq (SOURCE_FILE ("type-integer.galgas", 433))  COMMA_SOURCE_FILE ("type-integer.galgas", 433)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 430)) ;
  }
  {
  ioArgument_ioContext.mProperty_mNonEqualOperatorMap.setter_insertKey (var_intLiteralOp_15994, var_booleanType_15918, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_ne (SOURCE_FILE ("type-integer.galgas", 438))  COMMA_SOURCE_FILE ("type-integer.galgas", 438)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 435)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_0 ;
  const enumGalgasBool test_1 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_slt (SOURCE_FILE ("type-integer.galgas", 443)) ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_ult (SOURCE_FILE ("type-integer.galgas", 443)) ;
  }
  ioArgument_ioContext.mProperty_mStrictInfOperatorMap.setter_insertKey (var_intLiteralOp_15994, var_booleanType_15918, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (temp_0  COMMA_SOURCE_FILE ("type-integer.galgas", 443)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 440)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_2 ;
  const enumGalgasBool test_3 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_3) {
    temp_2 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_sle (SOURCE_FILE ("type-integer.galgas", 448)) ;
  }else if (kBoolFalse == test_3) {
    temp_2 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_ule (SOURCE_FILE ("type-integer.galgas", 448)) ;
  }
  ioArgument_ioContext.mProperty_mInfEqualOperatorMap.setter_insertKey (var_intLiteralOp_15994, var_booleanType_15918, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (temp_2  COMMA_SOURCE_FILE ("type-integer.galgas", 448)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 445)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_4 ;
  const enumGalgasBool test_5 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_5) {
    temp_4 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_sgt (SOURCE_FILE ("type-integer.galgas", 453)) ;
  }else if (kBoolFalse == test_5) {
    temp_4 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_ugt (SOURCE_FILE ("type-integer.galgas", 453)) ;
  }
  ioArgument_ioContext.mProperty_mStrictSupOperatorMap.setter_insertKey (var_intLiteralOp_15994, var_booleanType_15918, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (temp_4  COMMA_SOURCE_FILE ("type-integer.galgas", 453)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 450)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_6 ;
  const enumGalgasBool test_7 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_7) {
    temp_6 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_sge (SOURCE_FILE ("type-integer.galgas", 458)) ;
  }else if (kBoolFalse == test_7) {
    temp_6 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_uge (SOURCE_FILE ("type-integer.galgas", 458)) ;
  }
  ioArgument_ioContext.mProperty_mSupEqualOperatorMap.setter_insertKey (var_intLiteralOp_15994, var_booleanType_15918, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (temp_6  COMMA_SOURCE_FILE ("type-integer.galgas", 458)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 455)) ;
  }
  const enumGalgasBool test_8 = constinArgument_inIsSigned.operator_not (SOURCE_FILE ("type-integer.galgas", 461)).boolEnum () ;
  if (kBoolTrue == test_8) {
    {
    ioArgument_ioContext.mProperty_mAndOperatorMap.setter_insertKey (var_intLiteralOp_15994, var_selfType_15818, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_and (SOURCE_FILE ("type-integer.galgas", 465))  COMMA_SOURCE_FILE ("type-integer.galgas", 465)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 462)) ;
    }
    {
    ioArgument_ioContext.mProperty_mOrOperatorMap.setter_insertKey (var_intLiteralOp_15994, var_selfType_15818, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_ior (SOURCE_FILE ("type-integer.galgas", 470))  COMMA_SOURCE_FILE ("type-integer.galgas", 470)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 467)) ;
    }
    {
    ioArgument_ioContext.mProperty_mXorOperatorMap.setter_insertKey (var_intLiteralOp_15994, var_selfType_15818, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_xor (SOURCE_FILE ("type-integer.galgas", 475))  COMMA_SOURCE_FILE ("type-integer.galgas", 475)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 472)) ;
    }
  }
  {
  GALGAS_llvmBinaryOperation temp_9 ;
  const enumGalgasBool test_10 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_10) {
    temp_9 = GALGAS_llvmBinaryOperation::constructor_saddOVF (SOURCE_FILE ("type-integer.galgas", 482)) ;
  }else if (kBoolFalse == test_10) {
    temp_9 = GALGAS_llvmBinaryOperation::constructor_uaddOVF (SOURCE_FILE ("type-integer.galgas", 482)) ;
  }
  ioArgument_ioContext.mProperty_mAddOperatorMap.setter_insertKey (var_intLiteralOp_15994, var_selfType_15818, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (temp_9  COMMA_SOURCE_FILE ("type-integer.galgas", 482)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 479)) ;
  }
  {
  ioArgument_ioContext.mProperty_mAddNoOvfOperatorMap.setter_insertKey (var_intLiteralOp_15994, var_selfType_15818, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_addNoOVF (SOURCE_FILE ("type-integer.galgas", 487))  COMMA_SOURCE_FILE ("type-integer.galgas", 487)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 484)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_11 ;
  const enumGalgasBool test_12 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_12) {
    temp_11 = GALGAS_llvmBinaryOperation::constructor_ssubOVF (SOURCE_FILE ("type-integer.galgas", 492)) ;
  }else if (kBoolFalse == test_12) {
    temp_11 = GALGAS_llvmBinaryOperation::constructor_usubOVF (SOURCE_FILE ("type-integer.galgas", 492)) ;
  }
  ioArgument_ioContext.mProperty_mSubOperatorMap.setter_insertKey (var_intLiteralOp_15994, var_selfType_15818, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (temp_11  COMMA_SOURCE_FILE ("type-integer.galgas", 492)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 489)) ;
  }
  {
  ioArgument_ioContext.mProperty_mSubNoOvfOperatorMap.setter_insertKey (var_intLiteralOp_15994, var_selfType_15818, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_subNoOVF (SOURCE_FILE ("type-integer.galgas", 497))  COMMA_SOURCE_FILE ("type-integer.galgas", 497)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 494)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_13 ;
  const enumGalgasBool test_14 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_14) {
    temp_13 = GALGAS_llvmBinaryOperation::constructor_smulOVF (SOURCE_FILE ("type-integer.galgas", 502)) ;
  }else if (kBoolFalse == test_14) {
    temp_13 = GALGAS_llvmBinaryOperation::constructor_umulOVF (SOURCE_FILE ("type-integer.galgas", 502)) ;
  }
  ioArgument_ioContext.mProperty_mMulOperatorMap.setter_insertKey (var_intLiteralOp_15994, var_selfType_15818, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (temp_13  COMMA_SOURCE_FILE ("type-integer.galgas", 502)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 499)) ;
  }
  {
  ioArgument_ioContext.mProperty_mMulNoOvfOperatorMap.setter_insertKey (var_intLiteralOp_15994, var_selfType_15818, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_mulNoOVF (SOURCE_FILE ("type-integer.galgas", 507))  COMMA_SOURCE_FILE ("type-integer.galgas", 507)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 504)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_15 ;
  const enumGalgasBool test_16 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_16) {
    temp_15 = GALGAS_llvmBinaryOperation::constructor_sdivNoOVF (SOURCE_FILE ("type-integer.galgas", 512)) ;
  }else if (kBoolFalse == test_16) {
    temp_15 = GALGAS_llvmBinaryOperation::constructor_udivNoOVF (SOURCE_FILE ("type-integer.galgas", 512)) ;
  }
  ioArgument_ioContext.mProperty_mDivOperatorMap.setter_insertKey (var_intLiteralOp_15994, var_selfType_15818, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (temp_15  COMMA_SOURCE_FILE ("type-integer.galgas", 512)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 509)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_17 ;
  const enumGalgasBool test_18 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_18) {
    temp_17 = GALGAS_llvmBinaryOperation::constructor_sdivNoOVF (SOURCE_FILE ("type-integer.galgas", 517)) ;
  }else if (kBoolFalse == test_18) {
    temp_17 = GALGAS_llvmBinaryOperation::constructor_udivNoOVF (SOURCE_FILE ("type-integer.galgas", 517)) ;
  }
  ioArgument_ioContext.mProperty_mDivNoOvfOperatorMap.setter_insertKey (var_intLiteralOp_15994, var_selfType_15818, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (temp_17  COMMA_SOURCE_FILE ("type-integer.galgas", 517)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 514)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_19 ;
  const enumGalgasBool test_20 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_20) {
    temp_19 = GALGAS_llvmBinaryOperation::constructor_sremNoOVF (SOURCE_FILE ("type-integer.galgas", 522)) ;
  }else if (kBoolFalse == test_20) {
    temp_19 = GALGAS_llvmBinaryOperation::constructor_uremNoOVF (SOURCE_FILE ("type-integer.galgas", 522)) ;
  }
  ioArgument_ioContext.mProperty_mModOperatorMap.setter_insertKey (var_intLiteralOp_15994, var_selfType_15818, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (temp_19  COMMA_SOURCE_FILE ("type-integer.galgas", 522)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 519)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_21 ;
  const enumGalgasBool test_22 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_22) {
    temp_21 = GALGAS_llvmBinaryOperation::constructor_sremNoOVF (SOURCE_FILE ("type-integer.galgas", 527)) ;
  }else if (kBoolFalse == test_22) {
    temp_21 = GALGAS_llvmBinaryOperation::constructor_uremNoOVF (SOURCE_FILE ("type-integer.galgas", 527)) ;
  }
  ioArgument_ioContext.mProperty_mModNoOvfOperatorMap.setter_insertKey (var_intLiteralOp_15994, var_selfType_15818, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (temp_21  COMMA_SOURCE_FILE ("type-integer.galgas", 527)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 524)) ;
  }
  {
  ioArgument_ioContext.mProperty_mLeftShiftOperatorMap.setter_insertKey (var_intLiteralOp_15994, var_selfType_15818, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_shl (SOURCE_FILE ("type-integer.galgas", 533))  COMMA_SOURCE_FILE ("type-integer.galgas", 533)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 530)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_23 ;
  const enumGalgasBool test_24 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_24) {
    temp_23 = GALGAS_llvmBinaryOperation::constructor_ashr (SOURCE_FILE ("type-integer.galgas", 538)) ;
  }else if (kBoolFalse == test_24) {
    temp_23 = GALGAS_llvmBinaryOperation::constructor_lshr (SOURCE_FILE ("type-integer.galgas", 538)) ;
  }
  ioArgument_ioContext.mProperty_mRightShiftOperatorMap.setter_insertKey (var_intLiteralOp_15994, var_selfType_15818, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (temp_23  COMMA_SOURCE_FILE ("type-integer.galgas", 538)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 535)) ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//            Overriding extension method '@integerObject_literal_infixOperator generateInfixOperatorCode'             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_integerObject_5F_literal_5F_infixOperator_generateInfixOperatorCode (const cPtr_infixOperatorDescription * inObject,
                                                                                                 GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                                                 GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                                                 const GALGAS_objectIR constinArgument_inLeftOperand,
                                                                                                 const GALGAS_location constinArgument_inOperatorLocation,
                                                                                                 const GALGAS_objectIR constinArgument_inRightOperand,
                                                                                                 const GALGAS_PLMType constinArgument_inResultType,
                                                                                                 GALGAS_objectIR & outArgument_outResult,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_integerObject_5F_literal_5F_infixOperator * object = (const cPtr_integerObject_5F_literal_5F_infixOperator *) inObject ;
  macroValidSharedObject (object, cPtr_integerObject_5F_literal_5F_infixOperator) ;
  GALGAS_bigint var_literalValue_20414 ;
  GALGAS_PLMType joker_20380_1 ; // Joker input parameter
  constinArgument_inRightOperand.method_literalInteger (joker_20380_1, var_literalValue_20414, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 559)) ;
  GALGAS_bigint var_min_20473 ;
  GALGAS_bigint var_max_20494 ;
  GALGAS_bool joker_20496_2 ; // Joker input parameter
  GALGAS_uint joker_20496_1 ; // Joker input parameter
  extensionGetter_type (constinArgument_inLeftOperand, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 560)).getter_kind (HERE).method_integer (var_min_20473, var_max_20494, joker_20496_2, joker_20496_1, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 560)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictInf, var_literalValue_20414.objectCompare (var_min_20473)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GALGAS_string ("literal right integer expression too small (should be >= ").add_operation (var_min_20473.getter_string (SOURCE_FILE ("type-integer.galgas", 562)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 562)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 562)), fixItArray1  COMMA_SOURCE_FILE ("type-integer.galgas", 562)) ;
    outArgument_outResult.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsStrictSup, var_literalValue_20414.objectCompare (var_max_20494)).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GALGAS_string ("literal right integer expression too large (should be <= ").add_operation (var_max_20494.getter_string (SOURCE_FILE ("type-integer.galgas", 564)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 564)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 564)), fixItArray3  COMMA_SOURCE_FILE ("type-integer.galgas", 564)) ;
      outArgument_outResult.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_2) {
      {
      routine_getNewTempValue (constinArgument_inResultType, ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 566)) ;
      }
      {
      extensionSetter_appendBinaryOperation (ioArgument_ioInstructionGenerationList, outArgument_outResult, extensionGetter_type (constinArgument_inLeftOperand, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 569)), constinArgument_inOperatorLocation, constinArgument_inLeftOperand, object->mProperty_mOperator, constinArgument_inRightOperand, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 567)) ;
      }
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_integerObject_5F_literal_5F_infixOperator_generateInfixOperatorCode (void) {
  enterExtensionMethod_generateInfixOperatorCode (kTypeDescriptor_GALGAS_integerObject_5F_literal_5F_infixOperator.mSlotID,
                                                  extensionMethod_integerObject_5F_literal_5F_infixOperator_generateInfixOperatorCode) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_integerObject_5F_literal_5F_infixOperator_generateInfixOperatorCode (defineExtensionMethod_integerObject_5F_literal_5F_infixOperator_generateInfixOperatorCode, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                      Routine 'enter_literal_integer_operators'                                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_enter_5F_literal_5F_integer_5F_operators (const GALGAS_lstring constinArgument_inIntegerTypeName,
                                                       const GALGAS_bool constinArgument_inIsSigned,
                                                       GALGAS_semanticContext & ioArgument_ioContext,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_PLMType var_selfType_21596 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.getter_mTypeMap (HERE), constinArgument_inIntegerTypeName, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 588)).getter_type (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 588)) ;
  GALGAS_lstring var_intLiteralOp_21728 = function_combineTypeNamesForInfixOperator (function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 590)), constinArgument_inIntegerTypeName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 590)) ;
  GALGAS_PLMType var_booleanType_21835 = extensionGetter_booleanType (ioArgument_ioContext, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 591)) ;
  {
  ioArgument_ioContext.mProperty_mEqualOperatorMap.setter_insertKey (var_intLiteralOp_21728, var_booleanType_21835, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_eq (SOURCE_FILE ("type-integer.galgas", 595))  COMMA_SOURCE_FILE ("type-integer.galgas", 595)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 592)) ;
  }
  {
  ioArgument_ioContext.mProperty_mNonEqualOperatorMap.setter_insertKey (var_intLiteralOp_21728, var_booleanType_21835, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_ne (SOURCE_FILE ("type-integer.galgas", 600))  COMMA_SOURCE_FILE ("type-integer.galgas", 600)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 597)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_0 ;
  const enumGalgasBool test_1 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_slt (SOURCE_FILE ("type-integer.galgas", 605)) ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_ult (SOURCE_FILE ("type-integer.galgas", 605)) ;
  }
  ioArgument_ioContext.mProperty_mStrictInfOperatorMap.setter_insertKey (var_intLiteralOp_21728, var_booleanType_21835, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (temp_0  COMMA_SOURCE_FILE ("type-integer.galgas", 605)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 602)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_2 ;
  const enumGalgasBool test_3 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_3) {
    temp_2 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_sle (SOURCE_FILE ("type-integer.galgas", 610)) ;
  }else if (kBoolFalse == test_3) {
    temp_2 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_ule (SOURCE_FILE ("type-integer.galgas", 610)) ;
  }
  ioArgument_ioContext.mProperty_mInfEqualOperatorMap.setter_insertKey (var_intLiteralOp_21728, var_booleanType_21835, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (temp_2  COMMA_SOURCE_FILE ("type-integer.galgas", 610)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 607)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_4 ;
  const enumGalgasBool test_5 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_5) {
    temp_4 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_sgt (SOURCE_FILE ("type-integer.galgas", 615)) ;
  }else if (kBoolFalse == test_5) {
    temp_4 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_ugt (SOURCE_FILE ("type-integer.galgas", 615)) ;
  }
  ioArgument_ioContext.mProperty_mStrictSupOperatorMap.setter_insertKey (var_intLiteralOp_21728, var_booleanType_21835, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (temp_4  COMMA_SOURCE_FILE ("type-integer.galgas", 615)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 612)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_6 ;
  const enumGalgasBool test_7 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_7) {
    temp_6 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_sge (SOURCE_FILE ("type-integer.galgas", 620)) ;
  }else if (kBoolFalse == test_7) {
    temp_6 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_uge (SOURCE_FILE ("type-integer.galgas", 620)) ;
  }
  ioArgument_ioContext.mProperty_mSupEqualOperatorMap.setter_insertKey (var_intLiteralOp_21728, var_booleanType_21835, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (temp_6  COMMA_SOURCE_FILE ("type-integer.galgas", 620)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 617)) ;
  }
  const enumGalgasBool test_8 = constinArgument_inIsSigned.operator_not (SOURCE_FILE ("type-integer.galgas", 623)).boolEnum () ;
  if (kBoolTrue == test_8) {
    {
    ioArgument_ioContext.mProperty_mAndOperatorMap.setter_insertKey (var_intLiteralOp_21728, var_selfType_21596, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_and (SOURCE_FILE ("type-integer.galgas", 627))  COMMA_SOURCE_FILE ("type-integer.galgas", 627)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 624)) ;
    }
    {
    ioArgument_ioContext.mProperty_mOrOperatorMap.setter_insertKey (var_intLiteralOp_21728, var_selfType_21596, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_ior (SOURCE_FILE ("type-integer.galgas", 632))  COMMA_SOURCE_FILE ("type-integer.galgas", 632)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 629)) ;
    }
    {
    ioArgument_ioContext.mProperty_mXorOperatorMap.setter_insertKey (var_intLiteralOp_21728, var_selfType_21596, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_xor (SOURCE_FILE ("type-integer.galgas", 637))  COMMA_SOURCE_FILE ("type-integer.galgas", 637)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 634)) ;
    }
  }
  {
  GALGAS_llvmBinaryOperation temp_9 ;
  const enumGalgasBool test_10 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_10) {
    temp_9 = GALGAS_llvmBinaryOperation::constructor_saddOVF (SOURCE_FILE ("type-integer.galgas", 644)) ;
  }else if (kBoolFalse == test_10) {
    temp_9 = GALGAS_llvmBinaryOperation::constructor_uaddOVF (SOURCE_FILE ("type-integer.galgas", 644)) ;
  }
  ioArgument_ioContext.mProperty_mAddOperatorMap.setter_insertKey (var_intLiteralOp_21728, var_selfType_21596, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (temp_9  COMMA_SOURCE_FILE ("type-integer.galgas", 644)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 641)) ;
  }
  {
  ioArgument_ioContext.mProperty_mAddNoOvfOperatorMap.setter_insertKey (var_intLiteralOp_21728, var_selfType_21596, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_addNoOVF (SOURCE_FILE ("type-integer.galgas", 649))  COMMA_SOURCE_FILE ("type-integer.galgas", 649)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 646)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_11 ;
  const enumGalgasBool test_12 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_12) {
    temp_11 = GALGAS_llvmBinaryOperation::constructor_ssubOVF (SOURCE_FILE ("type-integer.galgas", 654)) ;
  }else if (kBoolFalse == test_12) {
    temp_11 = GALGAS_llvmBinaryOperation::constructor_usubOVF (SOURCE_FILE ("type-integer.galgas", 654)) ;
  }
  ioArgument_ioContext.mProperty_mSubOperatorMap.setter_insertKey (var_intLiteralOp_21728, var_selfType_21596, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (temp_11  COMMA_SOURCE_FILE ("type-integer.galgas", 654)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 651)) ;
  }
  {
  ioArgument_ioContext.mProperty_mSubNoOvfOperatorMap.setter_insertKey (var_intLiteralOp_21728, var_selfType_21596, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_subNoOVF (SOURCE_FILE ("type-integer.galgas", 659))  COMMA_SOURCE_FILE ("type-integer.galgas", 659)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 656)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_13 ;
  const enumGalgasBool test_14 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_14) {
    temp_13 = GALGAS_llvmBinaryOperation::constructor_smulOVF (SOURCE_FILE ("type-integer.galgas", 664)) ;
  }else if (kBoolFalse == test_14) {
    temp_13 = GALGAS_llvmBinaryOperation::constructor_umulOVF (SOURCE_FILE ("type-integer.galgas", 664)) ;
  }
  ioArgument_ioContext.mProperty_mMulOperatorMap.setter_insertKey (var_intLiteralOp_21728, var_selfType_21596, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (temp_13  COMMA_SOURCE_FILE ("type-integer.galgas", 664)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 661)) ;
  }
  {
  ioArgument_ioContext.mProperty_mMulNoOvfOperatorMap.setter_insertKey (var_intLiteralOp_21728, var_selfType_21596, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_mulNoOVF (SOURCE_FILE ("type-integer.galgas", 669))  COMMA_SOURCE_FILE ("type-integer.galgas", 669)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 666)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_15 ;
  const enumGalgasBool test_16 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_16) {
    temp_15 = GALGAS_llvmBinaryOperation::constructor_sdivOVF (SOURCE_FILE ("type-integer.galgas", 674)) ;
  }else if (kBoolFalse == test_16) {
    temp_15 = GALGAS_llvmBinaryOperation::constructor_udivOVF (SOURCE_FILE ("type-integer.galgas", 674)) ;
  }
  ioArgument_ioContext.mProperty_mDivOperatorMap.setter_insertKey (var_intLiteralOp_21728, var_selfType_21596, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (temp_15  COMMA_SOURCE_FILE ("type-integer.galgas", 674)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 671)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_17 ;
  const enumGalgasBool test_18 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_18) {
    temp_17 = GALGAS_llvmBinaryOperation::constructor_sdivNoOVF (SOURCE_FILE ("type-integer.galgas", 679)) ;
  }else if (kBoolFalse == test_18) {
    temp_17 = GALGAS_llvmBinaryOperation::constructor_udivNoOVF (SOURCE_FILE ("type-integer.galgas", 679)) ;
  }
  ioArgument_ioContext.mProperty_mDivNoOvfOperatorMap.setter_insertKey (var_intLiteralOp_21728, var_selfType_21596, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (temp_17  COMMA_SOURCE_FILE ("type-integer.galgas", 679)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 676)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_19 ;
  const enumGalgasBool test_20 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_20) {
    temp_19 = GALGAS_llvmBinaryOperation::constructor_sremOVF (SOURCE_FILE ("type-integer.galgas", 684)) ;
  }else if (kBoolFalse == test_20) {
    temp_19 = GALGAS_llvmBinaryOperation::constructor_uremOVF (SOURCE_FILE ("type-integer.galgas", 684)) ;
  }
  ioArgument_ioContext.mProperty_mModOperatorMap.setter_insertKey (var_intLiteralOp_21728, var_selfType_21596, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (temp_19  COMMA_SOURCE_FILE ("type-integer.galgas", 684)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 681)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_21 ;
  const enumGalgasBool test_22 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_22) {
    temp_21 = GALGAS_llvmBinaryOperation::constructor_sremNoOVF (SOURCE_FILE ("type-integer.galgas", 689)) ;
  }else if (kBoolFalse == test_22) {
    temp_21 = GALGAS_llvmBinaryOperation::constructor_uremNoOVF (SOURCE_FILE ("type-integer.galgas", 689)) ;
  }
  ioArgument_ioContext.mProperty_mModNoOvfOperatorMap.setter_insertKey (var_intLiteralOp_21728, var_selfType_21596, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (temp_21  COMMA_SOURCE_FILE ("type-integer.galgas", 689)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 686)) ;
  }
  {
  ioArgument_ioContext.mProperty_mLeftShiftOperatorMap.setter_insertKey (var_intLiteralOp_21728, var_selfType_21596, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_shl (SOURCE_FILE ("type-integer.galgas", 695))  COMMA_SOURCE_FILE ("type-integer.galgas", 695)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 692)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_23 ;
  const enumGalgasBool test_24 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_24) {
    temp_23 = GALGAS_llvmBinaryOperation::constructor_ashr (SOURCE_FILE ("type-integer.galgas", 700)) ;
  }else if (kBoolFalse == test_24) {
    temp_23 = GALGAS_llvmBinaryOperation::constructor_lshr (SOURCE_FILE ("type-integer.galgas", 700)) ;
  }
  ioArgument_ioContext.mProperty_mRightShiftOperatorMap.setter_insertKey (var_intLiteralOp_21728, var_selfType_21596, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (temp_23  COMMA_SOURCE_FILE ("type-integer.galgas", 700)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 697)) ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//            Overriding extension method '@literal_integerObject_infixOperator generateInfixOperatorCode'             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_literal_5F_integerObject_5F_infixOperator_generateInfixOperatorCode (const cPtr_infixOperatorDescription * inObject,
                                                                                                 GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                                                 GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                                                 const GALGAS_objectIR constinArgument_inLeftOperand,
                                                                                                 const GALGAS_location constinArgument_inOperatorLocation,
                                                                                                 const GALGAS_objectIR constinArgument_inRightOperand,
                                                                                                 const GALGAS_PLMType constinArgument_inResultType,
                                                                                                 GALGAS_objectIR & outArgument_outResult,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literal_5F_integerObject_5F_infixOperator * object = (const cPtr_literal_5F_integerObject_5F_infixOperator *) inObject ;
  macroValidSharedObject (object, cPtr_literal_5F_integerObject_5F_infixOperator) ;
  GALGAS_bigint var_literalValue_26166 ;
  GALGAS_PLMType joker_26132_1 ; // Joker input parameter
  constinArgument_inLeftOperand.method_literalInteger (joker_26132_1, var_literalValue_26166, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 721)) ;
  GALGAS_bigint var_min_26226 ;
  GALGAS_bigint var_max_26247 ;
  GALGAS_bool joker_26249_2 ; // Joker input parameter
  GALGAS_uint joker_26249_1 ; // Joker input parameter
  extensionGetter_type (constinArgument_inRightOperand, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 722)).getter_kind (HERE).method_integer (var_min_26226, var_max_26247, joker_26249_2, joker_26249_1, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 722)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictInf, var_literalValue_26166.objectCompare (var_min_26226)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GALGAS_string ("literal left integer expression too small (should be >= ").add_operation (var_min_26226.getter_string (SOURCE_FILE ("type-integer.galgas", 724)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 724)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 724)), fixItArray1  COMMA_SOURCE_FILE ("type-integer.galgas", 724)) ;
    outArgument_outResult.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsStrictSup, var_literalValue_26166.objectCompare (var_max_26247)).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GALGAS_string ("literal left integer expression too large (should be <= ").add_operation (var_max_26247.getter_string (SOURCE_FILE ("type-integer.galgas", 726)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 726)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 726)), fixItArray3  COMMA_SOURCE_FILE ("type-integer.galgas", 726)) ;
      outArgument_outResult.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_2) {
      {
      routine_getNewTempValue (constinArgument_inResultType, ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 728)) ;
      }
      {
      extensionSetter_appendBinaryOperation (ioArgument_ioInstructionGenerationList, outArgument_outResult, extensionGetter_type (constinArgument_inRightOperand, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 731)), constinArgument_inOperatorLocation, constinArgument_inLeftOperand, object->mProperty_mOperator, constinArgument_inRightOperand, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 729)) ;
      }
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_literal_5F_integerObject_5F_infixOperator_generateInfixOperatorCode (void) {
  enterExtensionMethod_generateInfixOperatorCode (kTypeDescriptor_GALGAS_literal_5F_integerObject_5F_infixOperator.mSlotID,
                                                  extensionMethod_literal_5F_integerObject_5F_infixOperator_generateInfixOperatorCode) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_literal_5F_integerObject_5F_infixOperator_generateInfixOperatorCode (defineExtensionMethod_literal_5F_integerObject_5F_infixOperator_generateInfixOperatorCode, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                      Routine 'generateLLVMCodeForIntegerType'                                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_generateLLVMCodeForIntegerType (GALGAS_string & ioArgument_ioLLVMcode,
                                             GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                             const GALGAS_uint constinArgument_inSize,
                                             const GALGAS_bool constinArgument_inIsSigned,
                                             C_Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_llvmTypeName_27345 = GALGAS_string ("i").add_operation (constinArgument_inSize.getter_string (SOURCE_FILE ("type-integer.galgas", 750)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 750)) ;
  GALGAS_string temp_0 ;
  const enumGalgasBool test_1 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_string ("int") ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_string ("uint") ;
  }
  GALGAS_string var_llvmBaseTypeName_27383 = GALGAS_string ("$").add_operation (temp_0, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 751)).add_operation (constinArgument_inSize.getter_string (SOURCE_FILE ("type-integer.galgas", 751)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 751)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (GALGAS_string ("GENERATED FUNCTIONS FOR ").add_operation (var_llvmBaseTypeName_27383, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 752)).add_operation (GALGAS_string (" TYPE"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 752)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 752)), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 752)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(function_llvmSeparatorLine (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 796)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 796)), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 796)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal void @plm.assign.").add_operation (var_llvmBaseTypeName_27383, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 797)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 797)).add_operation (var_llvmBaseTypeName_27383, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 797)), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 797)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" (").add_operation (var_llvmTypeName_27345, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 798)).add_operation (GALGAS_string ("* %outTarget, "), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 798)).add_operation (var_llvmTypeName_27345, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 798)).add_operation (GALGAS_string ("* %inSource) {\n"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 798)), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 798)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--- Compute type size\n"), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 799)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %sizeAsPtr = getelementptr inbounds ").add_operation (var_llvmTypeName_27345, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 800)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 800)).add_operation (var_llvmTypeName_27345, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 800)).add_operation (GALGAS_string ("* null, i32 1\n"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 800)), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 800)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %byteCount = ptrtoint ").add_operation (var_llvmTypeName_27345, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 801)).add_operation (GALGAS_string ("* %sizeAsPtr to i32\n"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 801)), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 801)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %useLoadStore = icmp ule i32 %byteCount, 12\n"), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 802)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 %useLoadStore, label %loadStore, label %copyWords\n"), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 803)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--- Copy using load/store\n"), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 804)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("loadStore:\n"), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 805)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %value = load ").add_operation (var_llvmTypeName_27345, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 806)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 806)).add_operation (var_llvmTypeName_27345, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 806)).add_operation (GALGAS_string ("* %inSource\n"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 806)), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 806)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store ").add_operation (var_llvmTypeName_27345, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 807)).add_operation (GALGAS_string (" %value, "), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 807)).add_operation (var_llvmTypeName_27345, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 807)).add_operation (GALGAS_string ("* %outTarget\n"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 807)), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 807)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 808)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--- Copy using copy function\n"), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 809)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("copyWords:\n"), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 810)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %target32 = bitcast ").add_operation (var_llvmTypeName_27345, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 811)).add_operation (GALGAS_string ("* %outTarget to i32*\n"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 811)), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 811)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %source32 = bitcast ").add_operation (var_llvmTypeName_27345, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 812)).add_operation (GALGAS_string ("* %inSource to i32*\n"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 812)), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 812)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %temp = add nsw nuw i32 %byteCount, 3\n"), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 813)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %wordCount = udiv i32 %temp, 4\n"), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 814)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @copy.word.array (i32* %target32, i32* %source32, i32 %wordCount)\n"), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 815)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 816)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 817)) ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                       Overriding extension method '@uint1ToBoolFunctionIR llvmCodeGeneration'                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_uint_31_ToBoolFunctionIR_llvmCodeGeneration (const cPtr_abstractRoutineIR * inObject,
                                                                         GALGAS_string & ioArgument_ioLLVMcode,
                                                                         const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                         GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_uint_31_ToBoolFunctionIR * object = (const cPtr_uint_31_ToBoolFunctionIR *) inObject ;
  macroValidSharedObject (object, cPtr_uint_31_ToBoolFunctionIR) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal ").add_operation (object->mProperty_mLLVMTypeName, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 835)).add_operation (GALGAS_string (" @"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 835)).add_operation (object->mProperty_mRoutineMangledName.getter_string (HERE).getter_assemblerRepresentation (SOURCE_FILE ("type-integer.galgas", 835)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 835)), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 835)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" (").add_operation (object->mProperty_mLLVMTypeName, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 836)).add_operation (GALGAS_string ("* %inValue) {\n"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 836)), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 836)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %value = load ").add_operation (object->mProperty_mLLVMTypeName, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 837)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 837)).add_operation (object->mProperty_mLLVMTypeName, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 837)).add_operation (GALGAS_string ("* %inValue\n"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 837)), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 837)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret i1 %value\n"), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 838)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 839)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_uint_31_ToBoolFunctionIR_llvmCodeGeneration (void) {
  enterExtensionMethod_llvmCodeGeneration (kTypeDescriptor_GALGAS_uint_31_ToBoolFunctionIR.mSlotID,
                                           extensionMethod_uint_31_ToBoolFunctionIR_llvmCodeGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_uint_31_ToBoolFunctionIR_llvmCodeGeneration (defineExtensionMethod_uint_31_ToBoolFunctionIR_llvmCodeGeneration, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                     Overriding extension method '@integerBuiltinFunctionIR llvmCodeGeneration'                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_integerBuiltinFunctionIR_llvmCodeGeneration (const cPtr_abstractRoutineIR * inObject,
                                                                         GALGAS_string & ioArgument_ioLLVMcode,
                                                                         const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                         GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_integerBuiltinFunctionIR * object = (const cPtr_integerBuiltinFunctionIR *) inObject ;
  macroValidSharedObject (object, cPtr_integerBuiltinFunctionIR) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal ").add_operation (object->mProperty_mLLVMTypeName, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 858)).add_operation (GALGAS_string (" @"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 858)).add_operation (object->mProperty_mRoutineMangledName.getter_string (HERE).getter_assemblerRepresentation (SOURCE_FILE ("type-integer.galgas", 858)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 858)), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 858)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" (").add_operation (object->mProperty_mLLVMTypeName, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 859)).add_operation (GALGAS_string ("* %inValue) {\n"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 859)), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 859)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %value = load ").add_operation (object->mProperty_mLLVMTypeName, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 860)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 860)).add_operation (object->mProperty_mLLVMTypeName, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 860)).add_operation (GALGAS_string ("* %inValue\n"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 860)), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 860)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %result = call ").add_operation (object->mProperty_mLLVMTypeName, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 861)).add_operation (GALGAS_string (" @llvm."), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 861)).add_operation (object->mProperty_mIntrinsicName, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 861)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 861)).add_operation (object->mProperty_mLLVMTypeName, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 861)), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 861)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" (").add_operation (object->mProperty_mLLVMTypeName, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 862)).add_operation (GALGAS_string (" %value)\n"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 862)), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 862)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret ").add_operation (object->mProperty_mLLVMTypeName, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 863)).add_operation (GALGAS_string (" %result\n"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 863)), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 863)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 864)) ;
  ioArgument_ioGenerationAdds.mProperty_mExternFunctionDeclarationSet.addAssign_operation (object->mProperty_mLLVMTypeName.add_operation (GALGAS_string (" @llvm."), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 866)).add_operation (object->mProperty_mIntrinsicName, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 866)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 866)).add_operation (object->mProperty_mLLVMTypeName, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 866)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 866)).add_operation (object->mProperty_mLLVMTypeName, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 866)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 866))  COMMA_SOURCE_FILE ("type-integer.galgas", 865)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_integerBuiltinFunctionIR_llvmCodeGeneration (void) {
  enterExtensionMethod_llvmCodeGeneration (kTypeDescriptor_GALGAS_integerBuiltinFunctionIR.mSlotID,
                                           extensionMethod_integerBuiltinFunctionIR_llvmCodeGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_integerBuiltinFunctionIR_llvmCodeGeneration (defineExtensionMethod_integerBuiltinFunctionIR_llvmCodeGeneration, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                Overriding extension getter '@literalIntegerDeclarationAST locationForErrorSignaling'                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_location extensionGetter_literalIntegerDeclarationAST_locationForErrorSignaling (const cPtr_abstractDeclarationAST * /* inObject */,
                                                                                               C_Compiler * /* inCompiler */
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_outLocation ; // Returned variable
  result_outLocation = GALGAS_location::constructor_nowhere (SOURCE_FILE ("type-literal-integer.galgas", 11)) ;
//---
  return result_outLocation ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_literalIntegerDeclarationAST_locationForErrorSignaling (void) {
  enterExtensionGetter_locationForErrorSignaling (kTypeDescriptor_GALGAS_literalIntegerDeclarationAST.mSlotID,
                                                  extensionGetter_literalIntegerDeclarationAST_locationForErrorSignaling) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_literalIntegerDeclarationAST_locationForErrorSignaling (defineExtensionGetter_literalIntegerDeclarationAST_locationForErrorSignaling, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                 Overriding extension method '@literalIntegerDeclarationAST enterInPrecedenceGraph'                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_literalIntegerDeclarationAST_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                                                 GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalIntegerDeclarationAST * object = (const cPtr_literalIntegerDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_literalIntegerDeclarationAST) ;
  GALGAS_lstring var_staticIntegerTypeName_1182 = function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 21)).getter_nowhere (SOURCE_FILE ("type-literal-integer.galgas", 21)) ;
  {
  const GALGAS_literalIntegerDeclarationAST temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (var_staticIntegerTypeName_1182, temp_0, inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 22)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (var_staticIntegerTypeName_1182, function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 23)).getter_nowhere (SOURCE_FILE ("type-literal-integer.galgas", 23)) COMMA_SOURCE_FILE ("type-literal-integer.galgas", 23)) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_literalIntegerDeclarationAST_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_literalIntegerDeclarationAST.mSlotID,
                                               extensionMethod_literalIntegerDeclarationAST_enterInPrecedenceGraph) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_literalIntegerDeclarationAST_enterInPrecedenceGraph (defineExtensionMethod_literalIntegerDeclarationAST_enterInPrecedenceGraph, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//           Overriding extension getter '@literalIntegerDeclarationAST keyRepresentationForErrorSignaling'            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string extensionGetter_literalIntegerDeclarationAST_keyRepresentationForErrorSignaling (const cPtr_abstractDeclarationAST * /* inObject */,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  result_outRepresentation = function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 29)) ;
//---
  return result_outRepresentation ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_literalIntegerDeclarationAST_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_literalIntegerDeclarationAST.mSlotID,
                                                           extensionGetter_literalIntegerDeclarationAST_keyRepresentationForErrorSignaling) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_literalIntegerDeclarationAST_keyRepresentationForErrorSignaling (defineExtensionGetter_literalIntegerDeclarationAST_keyRepresentationForErrorSignaling, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                     Overriding extension method '@literalIntegerDeclarationAST enterInContext'                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_literalIntegerDeclarationAST_enterInContext (const cPtr_abstractDeclarationAST * /* inObject */,
                                                                         const GALGAS_functionDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                                         GALGAS_semanticContext & ioArgument_ioContext,
                                                                         GALGAS_declarationDecorationList & /* ioArgument_ioDecoratedDeclarationList */,
                                                                         GALGAS_decoratedRegularRoutineList & /* ioArgument_ioDecoratedRoutineList */,
                                                                         GALGAS_routineListIR & /* ioArgument_ioRoutineListIR */,
                                                                         GALGAS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                                         GALGAS_staticEntityMap & /* ioArgument_ioStaticEntityMap */,
                                                                         GALGAS_globalVariableIRList & /* ioArgument_ioGlobalVariableIRList */,
                                                                         GALGAS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring var_integerTypeName_2681 = function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 47)).getter_nowhere (SOURCE_FILE ("type-literal-integer.galgas", 47)) ;
  {
  ioArgument_ioContext.mProperty_mTypeMap.setter_insertType (var_integerTypeName_2681, function_staticIntegerType (inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 51)), ioArgument_ioContext.getter_mTypeMap (HERE).getter_count (SOURCE_FILE ("type-literal-integer.galgas", 52)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 49)) ;
  }
  {
  routine_enterLiteralIntegerOperators (ioArgument_ioContext, inCompiler  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 56)) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_literalIntegerDeclarationAST_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_literalIntegerDeclarationAST.mSlotID,
                                       extensionMethod_literalIntegerDeclarationAST_enterInContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_literalIntegerDeclarationAST_enterInContext (defineExtensionMethod_literalIntegerDeclarationAST_enterInContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                       Routine 'enterLiteralIntegerOperators'                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_enterLiteralIntegerOperators (GALGAS_semanticContext & ioArgument_ioContext,
                                           C_Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring var_literalIntegerTypeName_3205 = function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 66)).getter_nowhere (SOURCE_FILE ("type-literal-integer.galgas", 66)) ;
  GALGAS_lstring var_intIntOp_3278 = function_combineTypeNamesForInfixOperator (var_literalIntegerTypeName_3205.getter_string (HERE), var_literalIntegerTypeName_3205.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 68)) ;
  GALGAS_PLMType var_selfType_3392 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.getter_mTypeMap (HERE), var_literalIntegerTypeName_3205, inCompiler  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 69)).getter_type (inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 69)) ;
  GALGAS_PLMType var_booleanType_3528 = extensionGetter_booleanType (ioArgument_ioContext, inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 71)) ;
  {
  ioArgument_ioContext.mProperty_mEqualOperatorMap.setter_insertKey (var_intIntOp_3278, var_booleanType_3528, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_eq (SOURCE_FILE ("type-literal-integer.galgas", 75))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 75)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 72)) ;
  }
  {
  ioArgument_ioContext.mProperty_mNonEqualOperatorMap.setter_insertKey (var_intIntOp_3278, var_booleanType_3528, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_ne (SOURCE_FILE ("type-literal-integer.galgas", 80))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 80)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 77)) ;
  }
  {
  ioArgument_ioContext.mProperty_mStrictInfOperatorMap.setter_insertKey (var_intIntOp_3278, var_booleanType_3528, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_slt (SOURCE_FILE ("type-literal-integer.galgas", 85))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 85)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 82)) ;
  }
  {
  ioArgument_ioContext.mProperty_mInfEqualOperatorMap.setter_insertKey (var_intIntOp_3278, var_booleanType_3528, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_sle (SOURCE_FILE ("type-literal-integer.galgas", 90))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 90)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 87)) ;
  }
  {
  ioArgument_ioContext.mProperty_mStrictSupOperatorMap.setter_insertKey (var_intIntOp_3278, var_booleanType_3528, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_sgt (SOURCE_FILE ("type-literal-integer.galgas", 95))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 95)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 92)) ;
  }
  {
  ioArgument_ioContext.mProperty_mSupEqualOperatorMap.setter_insertKey (var_intIntOp_3278, var_booleanType_3528, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_sge (SOURCE_FILE ("type-literal-integer.galgas", 100))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 100)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 97)) ;
  }
  {
  ioArgument_ioContext.mProperty_mAndOperatorMap.setter_insertKey (var_intIntOp_3278, var_selfType_3392, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_and (SOURCE_FILE ("type-literal-integer.galgas", 106))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 106)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 103)) ;
  }
  {
  ioArgument_ioContext.mProperty_mOrOperatorMap.setter_insertKey (var_intIntOp_3278, var_selfType_3392, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_ior (SOURCE_FILE ("type-literal-integer.galgas", 111))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 111)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 108)) ;
  }
  {
  ioArgument_ioContext.mProperty_mXorOperatorMap.setter_insertKey (var_intIntOp_3278, var_selfType_3392, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_xor (SOURCE_FILE ("type-literal-integer.galgas", 116))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 116)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 113)) ;
  }
  {
  ioArgument_ioContext.mProperty_mUnsignedComplementOperatorMap.setter_insertKey (var_literalIntegerTypeName_3205, inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 118)) ;
  }
  {
  ioArgument_ioContext.mProperty_mUnaryMinusOperatorMap.setter_insertKey (var_literalIntegerTypeName_3205, inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 122)) ;
  }
  {
  ioArgument_ioContext.mProperty_mAddOperatorMap.setter_insertKey (var_intIntOp_3278, var_selfType_3392, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_saddOVF (SOURCE_FILE ("type-literal-integer.galgas", 129))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 129)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 126)) ;
  }
  {
  ioArgument_ioContext.mProperty_mAddNoOvfOperatorMap.setter_insertKey (var_intIntOp_3278, var_selfType_3392, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_addNoOVF (SOURCE_FILE ("type-literal-integer.galgas", 134))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 134)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 131)) ;
  }
  {
  ioArgument_ioContext.mProperty_mSubOperatorMap.setter_insertKey (var_intIntOp_3278, var_selfType_3392, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_ssubOVF (SOURCE_FILE ("type-literal-integer.galgas", 139))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 139)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 136)) ;
  }
  {
  ioArgument_ioContext.mProperty_mSubNoOvfOperatorMap.setter_insertKey (var_intIntOp_3278, var_selfType_3392, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_subNoOVF (SOURCE_FILE ("type-literal-integer.galgas", 144))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 144)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 141)) ;
  }
  {
  ioArgument_ioContext.mProperty_mMulOperatorMap.setter_insertKey (var_intIntOp_3278, var_selfType_3392, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_smulOVF (SOURCE_FILE ("type-literal-integer.galgas", 149))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 149)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 146)) ;
  }
  {
  ioArgument_ioContext.mProperty_mMulNoOvfOperatorMap.setter_insertKey (var_intIntOp_3278, var_selfType_3392, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_mulNoOVF (SOURCE_FILE ("type-literal-integer.galgas", 154))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 154)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 151)) ;
  }
  {
  ioArgument_ioContext.mProperty_mDivOperatorMap.setter_insertKey (var_intIntOp_3278, var_selfType_3392, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_sdivOVF (SOURCE_FILE ("type-literal-integer.galgas", 159))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 159)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 156)) ;
  }
  {
  ioArgument_ioContext.mProperty_mDivNoOvfOperatorMap.setter_insertKey (var_intIntOp_3278, var_selfType_3392, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_sdivNoOVF (SOURCE_FILE ("type-literal-integer.galgas", 164))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 164)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 161)) ;
  }
  {
  ioArgument_ioContext.mProperty_mModOperatorMap.setter_insertKey (var_intIntOp_3278, var_selfType_3392, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_sremOVF (SOURCE_FILE ("type-literal-integer.galgas", 169))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 169)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 166)) ;
  }
  {
  ioArgument_ioContext.mProperty_mModNoOvfOperatorMap.setter_insertKey (var_intIntOp_3278, var_selfType_3392, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_sremNoOVF (SOURCE_FILE ("type-literal-integer.galgas", 174))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 174)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 171)) ;
  }
  {
  ioArgument_ioContext.mProperty_mLeftShiftOperatorMap.setter_insertKey (var_intIntOp_3278, var_selfType_3392, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_shl (SOURCE_FILE ("type-literal-integer.galgas", 180))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 180)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 177)) ;
  }
  {
  ioArgument_ioContext.mProperty_mRightShiftOperatorMap.setter_insertKey (var_intIntOp_3278, var_selfType_3392, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_lshr (SOURCE_FILE ("type-literal-integer.galgas", 185))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 185)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 182)) ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//           Overriding extension method '@literal_literal_integerInfixOperation generateInfixOperatorCode'            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_literal_5F_literal_5F_integerInfixOperation_generateInfixOperatorCode (const cPtr_infixOperatorDescription * inObject,
                                                                                                   GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                                                   GALGAS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                                                                   const GALGAS_objectIR constinArgument_inLeftOperand,
                                                                                                   const GALGAS_location /* constinArgument_inOperatorLocation */,
                                                                                                   const GALGAS_objectIR constinArgument_inRightOperand,
                                                                                                   const GALGAS_PLMType constinArgument_inResultType,
                                                                                                   GALGAS_objectIR & outArgument_outResult,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literal_5F_literal_5F_integerInfixOperation * object = (const cPtr_literal_5F_literal_5F_integerInfixOperation *) inObject ;
  macroValidSharedObject (object, cPtr_literal_5F_literal_5F_integerInfixOperation) ;
  GALGAS_bigint var_leftValue_7691 ;
  GALGAS_PLMType joker_7660_1 ; // Joker input parameter
  constinArgument_inLeftOperand.method_literalInteger (joker_7660_1, var_leftValue_7691, inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 207)) ;
  GALGAS_bigint var_rightValue_7759 ;
  GALGAS_PLMType joker_7727_1 ; // Joker input parameter
  constinArgument_inRightOperand.method_literalInteger (joker_7727_1, var_rightValue_7759, inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 208)) ;
  const GALGAS_literal_5F_literal_5F_integerInfixOperation temp_0 = object ;
  GALGAS_bigint var_result_7773 = callExtensionGetter_performStaticOperation ((const cPtr_literal_5F_literal_5F_integerInfixOperation *) temp_0.ptr (), var_leftValue_7691, var_rightValue_7759, inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 209)) ;
  outArgument_outResult = GALGAS_objectIR::constructor_literalInteger (constinArgument_inResultType, var_result_7773  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 210)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_literal_5F_literal_5F_integerInfixOperation_generateInfixOperatorCode (void) {
  enterExtensionMethod_generateInfixOperatorCode (kTypeDescriptor_GALGAS_literal_5F_literal_5F_integerInfixOperation.mSlotID,
                                                  extensionMethod_literal_5F_literal_5F_integerInfixOperation_generateInfixOperatorCode) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_literal_5F_literal_5F_integerInfixOperation_generateInfixOperatorCode (defineExtensionMethod_literal_5F_literal_5F_integerInfixOperation_generateInfixOperatorCode, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                Overriding extension getter '@literalStringDeclarationAST locationForErrorSignaling'                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_location extensionGetter_literalStringDeclarationAST_locationForErrorSignaling (const cPtr_abstractDeclarationAST * /* inObject */,
                                                                                              C_Compiler * /* inCompiler */
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_outLocation ; // Returned variable
  result_outLocation = GALGAS_location::constructor_nowhere (SOURCE_FILE ("type-static-string.galgas", 11)) ;
//---
  return result_outLocation ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_literalStringDeclarationAST_locationForErrorSignaling (void) {
  enterExtensionGetter_locationForErrorSignaling (kTypeDescriptor_GALGAS_literalStringDeclarationAST.mSlotID,
                                                  extensionGetter_literalStringDeclarationAST_locationForErrorSignaling) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_literalStringDeclarationAST_locationForErrorSignaling (defineExtensionGetter_literalStringDeclarationAST_locationForErrorSignaling, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                  Overriding extension method '@literalStringDeclarationAST enterInPrecedenceGraph'                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_literalStringDeclarationAST_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                                                GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalStringDeclarationAST * object = (const cPtr_literalStringDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_literalStringDeclarationAST) ;
  GALGAS_lstring var_literalStringTypeName_1179 = function_staticStringTypeName (inCompiler COMMA_SOURCE_FILE ("type-static-string.galgas", 21)).getter_nowhere (SOURCE_FILE ("type-static-string.galgas", 21)) ;
  {
  const GALGAS_literalStringDeclarationAST temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (var_literalStringTypeName_1179, temp_0, inCompiler COMMA_SOURCE_FILE ("type-static-string.galgas", 22)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (var_literalStringTypeName_1179, GALGAS_string ("$uint8").getter_nowhere (SOURCE_FILE ("type-static-string.galgas", 23)) COMMA_SOURCE_FILE ("type-static-string.galgas", 23)) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_literalStringDeclarationAST_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_literalStringDeclarationAST.mSlotID,
                                               extensionMethod_literalStringDeclarationAST_enterInPrecedenceGraph) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_literalStringDeclarationAST_enterInPrecedenceGraph (defineExtensionMethod_literalStringDeclarationAST_enterInPrecedenceGraph, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//            Overriding extension getter '@literalStringDeclarationAST keyRepresentationForErrorSignaling'            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string extensionGetter_literalStringDeclarationAST_keyRepresentationForErrorSignaling (const cPtr_abstractDeclarationAST * /* inObject */,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  result_outRepresentation = GALGAS_string ("literal string ").add_operation (function_staticStringTypeName (inCompiler COMMA_SOURCE_FILE ("type-static-string.galgas", 29)), inCompiler COMMA_SOURCE_FILE ("type-static-string.galgas", 29)) ;
//---
  return result_outRepresentation ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_literalStringDeclarationAST_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_literalStringDeclarationAST.mSlotID,
                                                           extensionGetter_literalStringDeclarationAST_keyRepresentationForErrorSignaling) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_literalStringDeclarationAST_keyRepresentationForErrorSignaling (defineExtensionGetter_literalStringDeclarationAST_keyRepresentationForErrorSignaling, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                      Overriding extension method '@literalStringDeclarationAST enterInContext'                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_literalStringDeclarationAST_enterInContext (const cPtr_abstractDeclarationAST * /* inObject */,
                                                                        const GALGAS_functionDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                                        GALGAS_semanticContext & ioArgument_ioContext,
                                                                        GALGAS_declarationDecorationList & /* ioArgument_ioDecoratedDeclarationList */,
                                                                        GALGAS_decoratedRegularRoutineList & /* ioArgument_ioDecoratedRoutineList */,
                                                                        GALGAS_routineListIR & /* ioArgument_ioRoutineListIR */,
                                                                        GALGAS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                                        GALGAS_staticEntityMap & /* ioArgument_ioStaticEntityMap */,
                                                                        GALGAS_globalVariableIRList & /* ioArgument_ioGlobalVariableIRList */,
                                                                        GALGAS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioArgument_ioContext.mProperty_mTypeMap.setter_insertType (function_staticStringTypeName (inCompiler COMMA_SOURCE_FILE ("type-static-string.galgas", 49)).getter_nowhere (SOURCE_FILE ("type-static-string.galgas", 49)), function_literalStringType (inCompiler COMMA_SOURCE_FILE ("type-static-string.galgas", 50)), ioArgument_ioContext.getter_mTypeMap (HERE).getter_count (SOURCE_FILE ("type-static-string.galgas", 51)), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("type-static-string.galgas", 48)) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_literalStringDeclarationAST_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_literalStringDeclarationAST.mSlotID,
                                       extensionMethod_literalStringDeclarationAST_enterInContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_literalStringDeclarationAST_enterInContext (defineExtensionMethod_literalStringDeclarationAST_enterInContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                     Routine 'generateStaticStringTypeLLVMCode'                                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_generateStaticStringTypeLLVMCode (GALGAS_string & ioArgument_ioLLVMcode,
                                               const GALGAS_string constinArgument_inLLVMTypeName,
                                               C_Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (GALGAS_string ("GENERATED FUNCTIONS FOR $staticString TYPE"), inCompiler COMMA_SOURCE_FILE ("type-static-string.galgas", 61)), inCompiler  COMMA_SOURCE_FILE ("type-static-string.galgas", 61)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal void @plm.assign.").add_operation (function_staticStringTypeName (inCompiler COMMA_SOURCE_FILE ("type-static-string.galgas", 62)), inCompiler COMMA_SOURCE_FILE ("type-static-string.galgas", 62)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("type-static-string.galgas", 62)).add_operation (function_staticStringTypeName (inCompiler COMMA_SOURCE_FILE ("type-static-string.galgas", 62)), inCompiler COMMA_SOURCE_FILE ("type-static-string.galgas", 62)), inCompiler  COMMA_SOURCE_FILE ("type-static-string.galgas", 62)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" (").add_operation (constinArgument_inLLVMTypeName, inCompiler COMMA_SOURCE_FILE ("type-static-string.galgas", 63)).add_operation (GALGAS_string ("* %target, "), inCompiler COMMA_SOURCE_FILE ("type-static-string.galgas", 63)).add_operation (constinArgument_inLLVMTypeName, inCompiler COMMA_SOURCE_FILE ("type-static-string.galgas", 63)).add_operation (GALGAS_string ("*%source) {\n"), inCompiler COMMA_SOURCE_FILE ("type-static-string.galgas", 63)), inCompiler  COMMA_SOURCE_FILE ("type-static-string.galgas", 63)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %value = load ").add_operation (constinArgument_inLLVMTypeName, inCompiler COMMA_SOURCE_FILE ("type-static-string.galgas", 64)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-static-string.galgas", 64)).add_operation (constinArgument_inLLVMTypeName, inCompiler COMMA_SOURCE_FILE ("type-static-string.galgas", 64)).add_operation (GALGAS_string ("* %source\n"), inCompiler COMMA_SOURCE_FILE ("type-static-string.galgas", 64)), inCompiler  COMMA_SOURCE_FILE ("type-static-string.galgas", 64)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store ").add_operation (constinArgument_inLLVMTypeName, inCompiler COMMA_SOURCE_FILE ("type-static-string.galgas", 65)).add_operation (GALGAS_string (" %value, "), inCompiler COMMA_SOURCE_FILE ("type-static-string.galgas", 65)).add_operation (constinArgument_inLLVMTypeName, inCompiler COMMA_SOURCE_FILE ("type-static-string.galgas", 65)).add_operation (GALGAS_string ("* %target\n"), inCompiler COMMA_SOURCE_FILE ("type-static-string.galgas", 65)), inCompiler  COMMA_SOURCE_FILE ("type-static-string.galgas", 65)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("type-static-string.galgas", 66)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("type-static-string.galgas", 67)) ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                   Overriding extension method '@typeOpaqueDeclarationAST enterInPrecedenceGraph'                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_typeOpaqueDeclarationAST_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                                             GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_typeOpaqueDeclarationAST * object = (const cPtr_typeOpaqueDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_typeOpaqueDeclarationAST) ;
  {
  const GALGAS_typeOpaqueDeclarationAST temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (object->mProperty_mOpaqueTypeName, temp_0, inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 58)) ;
  }
  callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) object->mProperty_mSizeExpression.ptr (), object->mProperty_mOpaqueTypeName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 60)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_typeOpaqueDeclarationAST_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_typeOpaqueDeclarationAST.mSlotID,
                                               extensionMethod_typeOpaqueDeclarationAST_enterInPrecedenceGraph) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_typeOpaqueDeclarationAST_enterInPrecedenceGraph (defineExtensionMethod_typeOpaqueDeclarationAST_enterInPrecedenceGraph, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//             Overriding extension getter '@typeOpaqueDeclarationAST keyRepresentationForErrorSignaling'              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string extensionGetter_typeOpaqueDeclarationAST_keyRepresentationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  const cPtr_typeOpaqueDeclarationAST * object = (const cPtr_typeOpaqueDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_typeOpaqueDeclarationAST) ;
  result_outRepresentation = GALGAS_string ("opaque ").add_operation (object->mProperty_mOpaqueTypeName.getter_string (SOURCE_FILE ("type-opaque-declaration.galgas", 66)), inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 66)) ;
//---
  return result_outRepresentation ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_typeOpaqueDeclarationAST_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_typeOpaqueDeclarationAST.mSlotID,
                                                           extensionGetter_typeOpaqueDeclarationAST_keyRepresentationForErrorSignaling) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_typeOpaqueDeclarationAST_keyRepresentationForErrorSignaling (defineExtensionGetter_typeOpaqueDeclarationAST_keyRepresentationForErrorSignaling, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                  Overriding extension getter '@typeOpaqueDeclarationAST locationForErrorSignaling'                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_location extensionGetter_typeOpaqueDeclarationAST_locationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                           C_Compiler * /* inCompiler */
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_outLocation ; // Returned variable
  const cPtr_typeOpaqueDeclarationAST * object = (const cPtr_typeOpaqueDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_typeOpaqueDeclarationAST) ;
  result_outLocation = object->mProperty_mOpaqueTypeName.getter_location (HERE) ;
//---
  return result_outLocation ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_typeOpaqueDeclarationAST_locationForErrorSignaling (void) {
  enterExtensionGetter_locationForErrorSignaling (kTypeDescriptor_GALGAS_typeOpaqueDeclarationAST.mSlotID,
                                                  extensionGetter_typeOpaqueDeclarationAST_locationForErrorSignaling) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_typeOpaqueDeclarationAST_locationForErrorSignaling (defineExtensionGetter_typeOpaqueDeclarationAST_locationForErrorSignaling, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                       Overriding extension method '@typeOpaqueDeclarationAST enterInContext'                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_typeOpaqueDeclarationAST_enterInContext (const cPtr_abstractDeclarationAST * inObject,
                                                                     const GALGAS_functionDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                                     GALGAS_semanticContext & ioArgument_ioContext,
                                                                     GALGAS_declarationDecorationList & /* ioArgument_ioDecoratedDeclarationList */,
                                                                     GALGAS_decoratedRegularRoutineList & /* ioArgument_ioDecoratedRoutineList */,
                                                                     GALGAS_routineListIR & /* ioArgument_ioRoutineListIR */,
                                                                     GALGAS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                                     GALGAS_staticEntityMap & /* ioArgument_ioStaticEntityMap */,
                                                                     GALGAS_globalVariableIRList & /* ioArgument_ioGlobalVariableIRList */,
                                                                     GALGAS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_typeOpaqueDeclarationAST * object = (const cPtr_typeOpaqueDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_typeOpaqueDeclarationAST) ;
  GALGAS_PLMTypeAttributes var_opaqueTypeAttributes_4300 = GALGAS_PLMTypeAttributes::constructor_none (SOURCE_FILE ("type-opaque-declaration.galgas", 90)) ;
  cEnumerator_lstringlist enumerator_4344 (object->mProperty_mAttributeList, kENUMERATION_UP) ;
  while (enumerator_4344.hasCurrentObject ()) {
    const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_4344.current_mValue (HERE).getter_string (HERE).objectCompare (function_instantiableAttribute (inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 92)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const enumGalgasBool test_1 = var_opaqueTypeAttributes_4300.getter_instanciable (SOURCE_FILE ("type-opaque-declaration.galgas", 93)).boolEnum () ;
      if (kBoolTrue == test_1) {
        TC_Array <C_FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (enumerator_4344.current_mValue (HERE).getter_location (SOURCE_FILE ("type-opaque-declaration.galgas", 94)), GALGAS_string ("duplicated attribute"), fixItArray2  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 94)) ;
      }else if (kBoolFalse == test_1) {
        var_opaqueTypeAttributes_4300 = var_opaqueTypeAttributes_4300.operator_or (GALGAS_PLMTypeAttributes::constructor_instanciable (SOURCE_FILE ("type-opaque-declaration.galgas", 96)) COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 96)) ;
      }
    }else if (kBoolFalse == test_0) {
      const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, enumerator_4344.current_mValue (HERE).getter_string (HERE).objectCompare (function_copyableAttribute (inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 98)))).boolEnum () ;
      if (kBoolTrue == test_3) {
        const enumGalgasBool test_4 = var_opaqueTypeAttributes_4300.getter_copyable (SOURCE_FILE ("type-opaque-declaration.galgas", 99)).boolEnum () ;
        if (kBoolTrue == test_4) {
          TC_Array <C_FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (enumerator_4344.current_mValue (HERE).getter_location (SOURCE_FILE ("type-opaque-declaration.galgas", 100)), GALGAS_string ("duplicated attribute"), fixItArray5  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 100)) ;
        }else if (kBoolFalse == test_4) {
          var_opaqueTypeAttributes_4300 = var_opaqueTypeAttributes_4300.operator_or (GALGAS_PLMTypeAttributes::constructor_copyable (SOURCE_FILE ("type-opaque-declaration.galgas", 102)) COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 102)) ;
        }
      }else if (kBoolFalse == test_3) {
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (enumerator_4344.current_mValue (HERE).getter_location (SOURCE_FILE ("type-opaque-declaration.galgas", 105)), GALGAS_string ("only @").add_operation (function_copyableAttribute (inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 106)), inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 106)).add_operation (GALGAS_string (" and @"), inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 106)).add_operation (function_instantiableAttribute (inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 106)), inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 106)).add_operation (GALGAS_string (" attributes are allowed here"), inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 106)), fixItArray6  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 105)) ;
      }
    }
    enumerator_4344.gotoNextObject () ;
  }
  GALGAS_instructionListIR var_initInstructionGenerationList_5067 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("type-opaque-declaration.galgas", 111)) ;
  GALGAS_allocaList var_allocaList_5097 = GALGAS_allocaList::constructor_emptyList (SOURCE_FILE ("type-opaque-declaration.galgas", 112)) ;
  GALGAS_semanticTemporariesStruct var_temporaries_5143 = GALGAS_semanticTemporariesStruct::constructor_default (SOURCE_FILE ("type-opaque-declaration.galgas", 113)) ;
  GALGAS_staticEntityMap joker_5372 = GALGAS_staticEntityMap::constructor_default (SOURCE_FILE ("type-opaque-declaration.galgas", 121)) ;
  GALGAS_objectIR var_sizeExpressionIR_5539 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mSizeExpression.ptr (), function_voidType (inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 115)), GALGAS_routineAttributes::constructor_none (SOURCE_FILE ("type-opaque-declaration.galgas", 116)), function_voidType (inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 117)), ioArgument_ioContext, GALGAS_mode::constructor_bootMode (SOURCE_FILE ("type-opaque-declaration.galgas", 119)), var_temporaries_5143, joker_5372, ioArgument_ioContext.mProperty_mValuedObjectMap, var_allocaList_5097, var_initInstructionGenerationList_5067, var_sizeExpressionIR_5539, inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 114)) ;
  GALGAS_bool test_7 = GALGAS_bool (kIsStrictSup, var_allocaList_5097.getter_length (SOURCE_FILE ("type-opaque-declaration.galgas", 127)).add_operation (var_initInstructionGenerationList_5067.getter_length (SOURCE_FILE ("type-opaque-declaration.galgas", 127)), inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 127)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
  if (kBoolTrue != test_7.boolEnum ()) {
    test_7 = var_sizeExpressionIR_5539.getter_isLiteralInteger (SOURCE_FILE ("type-opaque-declaration.galgas", 127)).operator_not (SOURCE_FILE ("type-opaque-declaration.galgas", 127)) ;
  }
  const enumGalgasBool test_8 = test_7.boolEnum () ;
  if (kBoolTrue == test_8) {
    TC_Array <C_FixItDescription> fixItArray9 ;
    inCompiler->emitSemanticError (object->mProperty_mSizeExpressionLocation, GALGAS_string ("array size expression is not static"), fixItArray9  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 128)) ;
  }else if (kBoolFalse == test_8) {
    GALGAS_constructorMap var_constructorMap_5781 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-opaque-declaration.galgas", 130)) ;
    const enumGalgasBool test_10 = var_opaqueTypeAttributes_4300.getter_instanciable (SOURCE_FILE ("type-opaque-declaration.galgas", 131)).boolEnum () ;
    if (kBoolTrue == test_10) {
      {
      var_constructorMap_5781.setter_insertKey (GALGAS_string ("()").getter_nowhere (SOURCE_FILE ("type-opaque-declaration.galgas", 132)), GALGAS_constructorSignature::constructor_emptyList (SOURCE_FILE ("type-opaque-declaration.galgas", 132)), GALGAS_constructorValue::constructor_simple (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 132))  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 132)), inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 132)) ;
      }
    }
    GALGAS_bigint var_bitSize_5978 ;
    GALGAS_PLMType joker_5957_1 ; // Joker input parameter
    var_sizeExpressionIR_5539.method_literalInteger (joker_5957_1, var_bitSize_5978, inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 134)) ;
    GALGAS_PLMType var_opaqueType_5998 = GALGAS_PLMType::constructor_new (GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-opaque-declaration.galgas", 136)), GALGAS_classConstantMap::constructor_emptyMap (SOURCE_FILE ("type-opaque-declaration.galgas", 137)), var_constructorMap_5781, GALGAS_guardMapForContext::constructor_emptyMap (SOURCE_FILE ("type-opaque-declaration.galgas", 139)), var_opaqueTypeAttributes_4300, object->mProperty_mOpaqueTypeName.getter_string (SOURCE_FILE ("type-opaque-declaration.galgas", 141)), GALGAS_typeKind::constructor_opaque (var_bitSize_5978  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 142)), object->mProperty_mOpaqueTypeName.getter_string (SOURCE_FILE ("type-opaque-declaration.galgas", 143))  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 135)) ;
    {
    ioArgument_ioContext.mProperty_mTypeMap.setter_insertType (object->mProperty_mOpaqueTypeName, var_opaqueType_5998, ioArgument_ioContext.getter_mTypeMap (HERE).getter_count (SOURCE_FILE ("type-opaque-declaration.galgas", 148)), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 145)) ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_typeOpaqueDeclarationAST_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_typeOpaqueDeclarationAST.mSlotID,
                                       extensionMethod_typeOpaqueDeclarationAST_enterInContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_typeOpaqueDeclarationAST_enterInContext (defineExtensionMethod_typeOpaqueDeclarationAST_enterInContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//        Overriding extension getter '@controlRegisterGroupDeclarationAST keyRepresentationForErrorSignaling'         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string extensionGetter_controlRegisterGroupDeclarationAST_keyRepresentationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  const cPtr_controlRegisterGroupDeclarationAST * object = (const cPtr_controlRegisterGroupDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_controlRegisterGroupDeclarationAST) ;
  result_outRepresentation = function_registerGroupNameFromPLMname (object->mProperty_mRegisterGroupList.getter_mRegisterGroupNameAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 264)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 264)).getter_string (SOURCE_FILE ("declaration-control-register.galgas", 264)) ;
//---
  return result_outRepresentation ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_controlRegisterGroupDeclarationAST_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_controlRegisterGroupDeclarationAST.mSlotID,
                                                           extensionGetter_controlRegisterGroupDeclarationAST_keyRepresentationForErrorSignaling) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_controlRegisterGroupDeclarationAST_keyRepresentationForErrorSignaling (defineExtensionGetter_controlRegisterGroupDeclarationAST_keyRepresentationForErrorSignaling, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//             Overriding extension getter '@controlRegisterGroupDeclarationAST locationForErrorSignaling'             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_location extensionGetter_controlRegisterGroupDeclarationAST_locationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_result ; // Returned variable
  const cPtr_controlRegisterGroupDeclarationAST * object = (const cPtr_controlRegisterGroupDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_controlRegisterGroupDeclarationAST) ;
  result_result = object->mProperty_mRegisterGroupList.getter_mRegisterGroupNameAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 270)).getter_location (SOURCE_FILE ("declaration-control-register.galgas", 270)) ;
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_controlRegisterGroupDeclarationAST_locationForErrorSignaling (void) {
  enterExtensionGetter_locationForErrorSignaling (kTypeDescriptor_GALGAS_controlRegisterGroupDeclarationAST.mSlotID,
                                                  extensionGetter_controlRegisterGroupDeclarationAST_locationForErrorSignaling) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_controlRegisterGroupDeclarationAST_locationForErrorSignaling (defineExtensionGetter_controlRegisterGroupDeclarationAST_locationForErrorSignaling, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//              Overriding extension method '@controlRegisterGroupDeclarationAST enterInPrecedenceGraph'               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_controlRegisterGroupDeclarationAST_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                                                       GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_controlRegisterGroupDeclarationAST * object = (const cPtr_controlRegisterGroupDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_controlRegisterGroupDeclarationAST) ;
  GALGAS_lstring var_nodeName_10529 = function_registerGroupNameFromPLMname (object->mProperty_mRegisterGroupList.getter_mRegisterGroupNameAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 276)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 276)) ;
  {
  const GALGAS_controlRegisterGroupDeclarationAST temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (var_nodeName_10529, temp_0, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 278)) ;
  }
  cEnumerator_controlRegisterDeclarationList enumerator_10721 (object->mProperty_mRegisters, kENUMERATION_UP) ;
  while (enumerator_10721.hasCurrentObject ()) {
    {
    ioArgument_ioGraph.setter_addEdge (var_nodeName_10529, enumerator_10721.current (HERE).getter_mRegisterTypeName (HERE) COMMA_SOURCE_FILE ("declaration-control-register.galgas", 282)) ;
    }
    GALGAS_stringlist var_split_10917 = enumerator_10721.current (HERE).getter_mRegisterTypeName (HERE).getter_string (HERE).getter_componentsSeparatedByString (GALGAS_string ("$uint") COMMA_SOURCE_FILE ("declaration-control-register.galgas", 284)) ;
    GALGAS_bool test_1 = GALGAS_bool (kIsEqual, var_split_10917.getter_length (SOURCE_FILE ("declaration-control-register.galgas", 285)).objectCompare (GALGAS_uint ((uint32_t) 2U))) ;
    if (kBoolTrue == test_1.boolEnum ()) {
      test_1 = var_split_10917.getter_mValueAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 285)).getter_isDecimalUnsignedNumber (SOURCE_FILE ("declaration-control-register.galgas", 285)) ;
    }
    const enumGalgasBool test_2 = test_1.boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_uint var_n_11080 = var_split_10917.getter_mValueAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 286)).getter_decimalUnsignedNumber (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 286)) ;
      const enumGalgasBool test_3 = GALGAS_bool (kIsStrictSup, var_n_11080.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_3) {
        GALGAS_lstring var_bitSizeTypeName_11179 = GALGAS_lstring::constructor_new (GALGAS_string ("$uint").add_operation (var_n_11080.substract_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 288)).getter_significantBitCount (SOURCE_FILE ("declaration-control-register.galgas", 288)).getter_string (SOURCE_FILE ("declaration-control-register.galgas", 288)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 288)), enumerator_10721.current (HERE).getter_mRegisterTypeName (HERE).getter_location (SOURCE_FILE ("declaration-control-register.galgas", 288))  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 288)) ;
        {
        ioArgument_ioGraph.setter_addEdge (var_nodeName_10529, var_bitSizeTypeName_11179 COMMA_SOURCE_FILE ("declaration-control-register.galgas", 289)) ;
        }
      }
    }
    cEnumerator_controlRegisterBitSliceList enumerator_11422 (enumerator_10721.current (HERE).getter_mRegisterBitSliceList (HERE), kENUMERATION_UP) ;
    while (enumerator_11422.hasCurrentObject ()) {
      switch (enumerator_11422.current_mRegisterBitSlice (HERE).enumValue ()) {
      case GALGAS_controlRegisterBitSlice::kNotBuilt:
        break ;
      case GALGAS_controlRegisterBitSlice::kEnum_unusedBits:
        {
        }
        break ;
      case GALGAS_controlRegisterBitSlice::kEnum_namedBit:
        {
          const cEnumAssociatedValues_controlRegisterBitSlice_namedBit * extractPtr_11632 = (const cEnumAssociatedValues_controlRegisterBitSlice_namedBit *) (enumerator_11422.current_mRegisterBitSlice (HERE).unsafePointer ()) ;
          const GALGAS_lbigint extractedValue_count = extractPtr_11632->mAssociatedValue1 ;
          const enumGalgasBool test_4 = GALGAS_bool (kIsSupOrEqual, extractedValue_count.getter_bigint (HERE).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 297)))).boolEnum () ;
          if (kBoolTrue == test_4) {
            {
            extensionSetter_noteUINTType (ioArgument_ioGraph, extractedValue_count.getter_bigint (HERE).getter_uint (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 298)), extractedValue_count.getter_location (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 298)) ;
            }
          }
        }
        break ;
      }
      enumerator_11422.gotoNextObject () ;
    }
    GALGAS_lstring var_rootNode_11706 = GALGAS_lstring::constructor_new (function_configurationNodeNameForPrecedenceGraph (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 303)), var_nodeName_10529.getter_location (HERE)  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 303)) ;
    {
    ioArgument_ioGraph.setter_addEdge (var_nodeName_10529, var_rootNode_11706 COMMA_SOURCE_FILE ("declaration-control-register.galgas", 304)) ;
    }
    cEnumerator_controlRegisterNameListAST enumerator_11919 (enumerator_10721.current (HERE).getter_mRegisterArrayList (HERE), kENUMERATION_UP) ;
    while (enumerator_11919.hasCurrentObject ()) {
      switch (enumerator_11919.current (HERE).getter_mControlRegisterKind (HERE).enumValue ()) {
      case GALGAS_controlRegisterKind::kNotBuilt:
        break ;
      case GALGAS_controlRegisterKind::kEnum_scalar:
        {
        }
        break ;
      case GALGAS_controlRegisterKind::kEnum_registerArray:
        {
          const cEnumAssociatedValues_controlRegisterKind_registerArray * extractPtr_12236 = (const cEnumAssociatedValues_controlRegisterKind_registerArray *) (enumerator_11919.current (HERE).getter_mControlRegisterKind (HERE).unsafePointer ()) ;
          const GALGAS_expressionAST extractedValue_arraySize = extractPtr_12236->mAssociatedValue0 ;
          const GALGAS_expressionAST extractedValue_arrayElementSize = extractPtr_12236->mAssociatedValue2 ;
          callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) extractedValue_arraySize.ptr (), var_nodeName_10529, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 310)) ;
          callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) extractedValue_arrayElementSize.ptr (), var_nodeName_10529, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 311)) ;
        }
        break ;
      }
      enumerator_11919.gotoNextObject () ;
    }
    enumerator_10721.gotoNextObject () ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_controlRegisterGroupDeclarationAST_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_controlRegisterGroupDeclarationAST.mSlotID,
                                               extensionMethod_controlRegisterGroupDeclarationAST_enterInPrecedenceGraph) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_controlRegisterGroupDeclarationAST_enterInPrecedenceGraph (defineExtensionMethod_controlRegisterGroupDeclarationAST_enterInPrecedenceGraph, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                            Routine 'controlRegisterType'                                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_controlRegisterType (const GALGAS_lstring constinArgument_inRegisterTypeName,
                                  GALGAS_semanticContext & ioArgument_ioContext,
                                  GALGAS_PLMType & outArgument_outRegisterType,
                                  GALGAS_uint & outArgument_outRegisterBitCount,
                                  C_Compiler * inCompiler
                                  COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outRegisterType.drop () ; // Release 'out' argument
  outArgument_outRegisterBitCount.drop () ; // Release 'out' argument
  GALGAS_uint joker_14069_2 ; // Joker input parameter
  GALGAS_bool joker_14069_1 ; // Joker input parameter
  ioArgument_ioContext.getter_mTypeMap (HERE).method_searchKey (constinArgument_inRegisterTypeName, outArgument_outRegisterType, joker_14069_2, joker_14069_1, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 360)) ;
  switch (outArgument_outRegisterType.getter_kind (HERE).enumValue ()) {
  case GALGAS_typeKind::kNotBuilt:
    break ;
  case GALGAS_typeKind::kEnum_integer:
    {
      const cEnumAssociatedValues_typeKind_integer * extractPtr_14170 = (const cEnumAssociatedValues_typeKind_integer *) (outArgument_outRegisterType.getter_kind (HERE).unsafePointer ()) ;
      const GALGAS_uint extractedValue_bitCount = extractPtr_14170->mAssociatedValue3 ;
      outArgument_outRegisterBitCount = extractedValue_bitCount ;
    }
    break ;
  case GALGAS_typeKind::kEnum_boolean:
  case GALGAS_typeKind::kEnum_void:
    {
      TC_Array <C_FixItDescription> fixItArray0 ;
      inCompiler->emitSemanticError (constinArgument_inRegisterTypeName.getter_location (SOURCE_FILE ("declaration-control-register.galgas", 365)), GALGAS_string ("a register should be an $intXX or an $uintXX"), fixItArray0  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 365)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_enumeration:
    {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inRegisterTypeName.getter_location (SOURCE_FILE ("declaration-control-register.galgas", 367)), GALGAS_string ("a register should be an $intXX or an $uintXX"), fixItArray1  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 367)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_literalString:
    {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (constinArgument_inRegisterTypeName.getter_location (SOURCE_FILE ("declaration-control-register.galgas", 369)), GALGAS_string ("a register should be an $intXX or an $uintXX"), fixItArray2  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 369)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_staticInteger:
    {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (constinArgument_inRegisterTypeName.getter_location (SOURCE_FILE ("declaration-control-register.galgas", 371)), GALGAS_string ("a register should be an $intXX or an $uintXX"), fixItArray3  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 371)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_structure:
    {
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (constinArgument_inRegisterTypeName.getter_location (SOURCE_FILE ("declaration-control-register.galgas", 373)), GALGAS_string ("a register should be an $intXX or an $uintXX"), fixItArray4  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 373)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_syncTool:
    {
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (constinArgument_inRegisterTypeName.getter_location (SOURCE_FILE ("declaration-control-register.galgas", 375)), GALGAS_string ("a register should be an $intXX or an $uintXX"), fixItArray5  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 375)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_opaque:
    {
      TC_Array <C_FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (constinArgument_inRegisterTypeName.getter_location (SOURCE_FILE ("declaration-control-register.galgas", 377)), GALGAS_string ("a register should be an $intXX or an $uintXX"), fixItArray6  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 377)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_arrayType:
    {
      TC_Array <C_FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (constinArgument_inRegisterTypeName.getter_location (SOURCE_FILE ("declaration-control-register.galgas", 379)), GALGAS_string ("a register should be an $intXX or an $uintXX"), fixItArray7  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 379)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_dynamicArrayType:
    {
      TC_Array <C_FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (constinArgument_inRegisterTypeName.getter_location (SOURCE_FILE ("declaration-control-register.galgas", 381)), GALGAS_string ("a register should be an $intXX or an $uintXX"), fixItArray8  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 381)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_function:
    {
      TC_Array <C_FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (constinArgument_inRegisterTypeName.getter_location (SOURCE_FILE ("declaration-control-register.galgas", 383)), GALGAS_string ("a register should be an $intXX or an $uintXX"), fixItArray9  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 383)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_pointer:
    {
      TC_Array <C_FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (constinArgument_inRegisterTypeName.getter_location (SOURCE_FILE ("declaration-control-register.galgas", 385)), GALGAS_string ("a register should be an $intXX or an $uintXX"), fixItArray10  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 385)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                       Routine 'buildControlRegisterSliceMap'                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_buildControlRegisterSliceMap (const GALGAS_controlRegisterBitSliceList constinArgument_inRegisterBitSliceList,
                                           const GALGAS_location constinArgument_inEndOfBitSliceLocation,
                                           GALGAS_semanticContext & /* ioArgument_ioContext */,
                                           GALGAS_PLMType & ioArgument_ioRegisterType,
                                           const GALGAS_uint constinArgument_inRegisterBitCount,
                                           GALGAS_controlRegisterFieldMap & outArgument_outRegisterFieldMap,
                                           GALGAS_sliceMap & outArgument_outRegisterBitSliceMap,
                                           GALGAS_controlRegisterFieldList & outArgument_outControlRegisterFieldList,
                                           C_Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outRegisterFieldMap.drop () ; // Release 'out' argument
  outArgument_outRegisterBitSliceMap.drop () ; // Release 'out' argument
  outArgument_outControlRegisterFieldList.drop () ; // Release 'out' argument
  outArgument_outRegisterFieldMap = GALGAS_controlRegisterFieldMap::constructor_emptyMap (SOURCE_FILE ("declaration-control-register.galgas", 402)) ;
  outArgument_outRegisterBitSliceMap = GALGAS_sliceMap::constructor_emptyMap (SOURCE_FILE ("declaration-control-register.galgas", 403)) ;
  outArgument_outControlRegisterFieldList = GALGAS_controlRegisterFieldList::constructor_emptyList (SOURCE_FILE ("declaration-control-register.galgas", 404)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, constinArgument_inRegisterBitSliceList.getter_length (SOURCE_FILE ("declaration-control-register.galgas", 405)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_uint var_shiftCount_16268 = GALGAS_uint ((uint32_t) 0U) ;
    cEnumerator_controlRegisterBitSliceList enumerator_16311 (constinArgument_inRegisterBitSliceList, kENUMERATION_DOWN) ;
    while (enumerator_16311.hasCurrentObject ()) {
      switch (enumerator_16311.current_mRegisterBitSlice (HERE).enumValue ()) {
      case GALGAS_controlRegisterBitSlice::kNotBuilt:
        break ;
      case GALGAS_controlRegisterBitSlice::kEnum_unusedBits:
        {
          const cEnumAssociatedValues_controlRegisterBitSlice_unusedBits * extractPtr_16506 = (const cEnumAssociatedValues_controlRegisterBitSlice_unusedBits *) (enumerator_16311.current_mRegisterBitSlice (HERE).unsafePointer ()) ;
          const GALGAS_lbigint extractedValue_count = extractPtr_16506->mAssociatedValue0 ;
          var_shiftCount_16268 = var_shiftCount_16268.add_operation (extractedValue_count.getter_bigint (HERE).getter_uint (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 410)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 410)) ;
          outArgument_outControlRegisterFieldList.addAssign_operation (extractedValue_count.getter_bigint (HERE).getter_uint (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 411)), GALGAS_string ("\xE2""\x80""\x94""")  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 411)) ;
        }
        break ;
      case GALGAS_controlRegisterBitSlice::kEnum_namedBit:
        {
          const cEnumAssociatedValues_controlRegisterBitSlice_namedBit * extractPtr_17027 = (const cEnumAssociatedValues_controlRegisterBitSlice_namedBit *) (enumerator_16311.current_mRegisterBitSlice (HERE).unsafePointer ()) ;
          const GALGAS_lstring extractedValue_name = extractPtr_17027->mAssociatedValue0 ;
          const GALGAS_lbigint extractedValue_count = extractPtr_17027->mAssociatedValue1 ;
          GALGAS_uint var_bitCount_16580 = extractedValue_count.getter_bigint (HERE).getter_uint (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 413)) ;
          outArgument_outControlRegisterFieldList.addAssign_operation (var_bitCount_16580, extractedValue_name.getter_string (HERE)  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 414)) ;
          {
          outArgument_outRegisterFieldMap.setter_insertKey (extractedValue_name, var_shiftCount_16268, var_bitCount_16580, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 415)) ;
          }
          GALGAS_bigint var_mask_16816 = GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 421)).left_shift_operation (var_bitCount_16580 COMMA_SOURCE_FILE ("declaration-control-register.galgas", 421)).substract_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 421)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 421)).left_shift_operation (var_shiftCount_16268 COMMA_SOURCE_FILE ("declaration-control-register.galgas", 421)) ;
          {
          outArgument_outRegisterBitSliceMap.setter_insertKey (extractedValue_name, GALGAS_llvmBinaryOperation::constructor_and (SOURCE_FILE ("declaration-control-register.galgas", 424)), var_mask_16816, ioArgument_ioRegisterType, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 422)) ;
          }
          var_shiftCount_16268 = var_shiftCount_16268.add_operation (var_bitCount_16580, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 428)) ;
        }
        break ;
      }
      enumerator_16311.gotoNextObject () ;
    }
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, constinArgument_inRegisterBitCount.objectCompare (var_shiftCount_16268)).boolEnum () ;
    if (kBoolTrue == test_1) {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (constinArgument_inEndOfBitSliceLocation, GALGAS_string ("total bit slice count is ").add_operation (var_shiftCount_16268.getter_string (SOURCE_FILE ("declaration-control-register.galgas", 434)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 434)).add_operation (GALGAS_string (" (should be "), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 434)).add_operation (constinArgument_inRegisterBitCount.getter_string (SOURCE_FILE ("declaration-control-register.galgas", 434)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 434)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 434)), fixItArray2  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 433)) ;
    }
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                  Overriding extension method '@controlRegisterGroupDeclarationAST enterInContext'                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_controlRegisterGroupDeclarationAST_enterInContext (const cPtr_abstractDeclarationAST * inObject,
                                                                               const GALGAS_functionDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                                               GALGAS_semanticContext & ioArgument_ioContext,
                                                                               GALGAS_declarationDecorationList & ioArgument_ioDecoratedDeclarationList,
                                                                               GALGAS_decoratedRegularRoutineList & /* ioArgument_ioDecoratedRoutineList */,
                                                                               GALGAS_routineListIR & /* ioArgument_ioRoutineListIR */,
                                                                               GALGAS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                                               GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                               GALGAS_globalVariableIRList & /* ioArgument_ioGlobalVariableIRList */,
                                                                               GALGAS_controlRegisterUserAccesMapAST & ioArgument_ioControlRegisterUserAccesMapAST,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_controlRegisterGroupDeclarationAST * object = (const cPtr_controlRegisterGroupDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_controlRegisterGroupDeclarationAST) ;
  GALGAS_controlRegisterMap var_regMap_22767 = GALGAS_controlRegisterMap::constructor_emptyMap (SOURCE_FILE ("declaration-control-register.galgas", 575)) ;
  cEnumerator_controlRegisterDeclarationList enumerator_22796 (object->mProperty_mRegisters, kENUMERATION_UP) ;
  while (enumerator_22796.hasCurrentObject ()) {
    extensionMethod_buildControlRegisterMapForGroup (enumerator_22796.current (HERE), ioArgument_ioContext, var_regMap_22767, ioArgument_ioStaticEntityMap, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 577)) ;
    enumerator_22796.gotoNextObject () ;
  }
  cEnumerator_registerGroupListAST enumerator_22969 (object->mProperty_mRegisterGroupList, kENUMERATION_UP) ;
  while (enumerator_22969.hasCurrentObject ()) {
    GALGAS_controlRegisterMap var_registerMap_23008 = var_regMap_22767 ;
    cEnumerator_controlRegisterMap enumerator_23079 (var_regMap_22767, kENUMERATION_UP) ;
    while (enumerator_23079.hasCurrentObject ()) {
      GALGAS_string var_key_23096 = GALGAS_string ("#").add_operation (enumerator_22969.current (HERE).getter_mRegisterGroupName (HERE).getter_string (SOURCE_FILE ("declaration-control-register.galgas", 587)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 587)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 587)).add_operation (enumerator_23079.current (HERE).getter_lkey (HERE).getter_string (SOURCE_FILE ("declaration-control-register.galgas", 587)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 587)) ;
      const enumGalgasBool test_0 = ioArgument_ioControlRegisterUserAccesMapAST.getter_hasKey (var_key_23096 COMMA_SOURCE_FILE ("declaration-control-register.galgas", 588)).boolEnum () ;
      if (kBoolTrue == test_0) {
        {
        var_registerMap_23008.setter_setMUserAccessForKey (GALGAS_bool (true), enumerator_23079.current (HERE).getter_lkey (HERE).getter_string (SOURCE_FILE ("declaration-control-register.galgas", 589)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 589)) ;
        }
        {
        ioArgument_ioControlRegisterUserAccesMapAST.setter_removeKey (var_key_23096.getter_nowhere (SOURCE_FILE ("declaration-control-register.galgas", 590)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 590)) ;
        }
      }
      enumerator_23079.gotoNextObject () ;
    }
    switch (enumerator_22969.current (HERE).getter_mControlRegisterGroupKind (HERE).enumValue ()) {
    case GALGAS_controlRegisterGroupKindAST::kNotBuilt:
      break ;
    case GALGAS_controlRegisterGroupKindAST::kEnum_single:
      {
        const cEnumAssociatedValues_controlRegisterGroupKindAST_single * extractPtr_23737 = (const cEnumAssociatedValues_controlRegisterGroupKindAST_single *) (enumerator_22969.current (HERE).getter_mControlRegisterGroupKind (HERE).unsafePointer ()) ;
        const GALGAS_lbigint extractedValue_baseAddress = extractPtr_23737->mAssociatedValue0 ;
        GALGAS_registerGroupKind var_groupKind_23470 = GALGAS_registerGroupKind::constructor_single (extractedValue_baseAddress.getter_bigint (SOURCE_FILE ("declaration-control-register.galgas", 596))  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 596)) ;
        {
        ioArgument_ioContext.mProperty_mControlRegisterGroupMap.setter_insertKey (enumerator_22969.current (HERE).getter_mRegisterGroupName (HERE), var_groupKind_23470, var_registerMap_23008, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 597)) ;
        }
        {
        extensionSetter_insertRegisterGroup (ioArgument_ioContext.mProperty_mValuedObjectMap, enumerator_22969.current (HERE).getter_mRegisterGroupName (HERE), var_groupKind_23470, var_registerMap_23008, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 598)) ;
        }
      }
      break ;
    case GALGAS_controlRegisterGroupKindAST::kEnum_groupArray:
      {
        const cEnumAssociatedValues_controlRegisterGroupKindAST_groupArray * extractPtr_24423 = (const cEnumAssociatedValues_controlRegisterGroupKindAST_groupArray *) (enumerator_22969.current (HERE).getter_mControlRegisterGroupKind (HERE).unsafePointer ()) ;
        const GALGAS_lbigint extractedValue_size = extractPtr_24423->mAssociatedValue0 ;
        const GALGAS_lbigintlist extractedValue_baseAddresses = extractPtr_24423->mAssociatedValue1 ;
        const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, extractedValue_size.getter_bigint (HERE).getter_uint (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 600)).objectCompare (extractedValue_baseAddresses.getter_length (SOURCE_FILE ("declaration-control-register.galgas", 600)))).boolEnum () ;
        if (kBoolTrue == test_1) {
          TC_Array <C_FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticError (extractedValue_size.getter_location (SOURCE_FILE ("declaration-control-register.galgas", 601)), GALGAS_string ("the group size is ").add_operation (extractedValue_size.getter_bigint (HERE).getter_string (SOURCE_FILE ("declaration-control-register.galgas", 601)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 601)).add_operation (GALGAS_string (", but "), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 601)).add_operation (extractedValue_baseAddresses.getter_length (SOURCE_FILE ("declaration-control-register.galgas", 601)).getter_string (SOURCE_FILE ("declaration-control-register.galgas", 601)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 601)).add_operation (GALGAS_string (" base addresses are defined"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 601)), fixItArray2  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 601)) ;
        }
        GALGAS_registerGroupKind var_groupKind_23993 = GALGAS_registerGroupKind::constructor_arrayGroup (extractedValue_baseAddresses  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 603)) ;
        {
        ioArgument_ioContext.mProperty_mControlRegisterGroupMap.setter_insertKey (enumerator_22969.current (HERE).getter_mRegisterGroupName (HERE), var_groupKind_23993, var_registerMap_23008, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 604)) ;
        }
        {
        extensionSetter_insertRegisterGroup (ioArgument_ioContext.mProperty_mValuedObjectMap, enumerator_22969.current (HERE).getter_mRegisterGroupName (HERE), var_groupKind_23993, var_registerMap_23008, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 605)) ;
        }
        ioArgument_ioDecoratedDeclarationList.addAssign_operation (GALGAS_decoratedControlRegisterArrayGroupDeclaration::constructor_new (enumerator_22969.current (HERE).getter_mRegisterGroupName (HERE), extractedValue_baseAddresses  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 606))  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 606)) ;
      }
      break ;
    }
    enumerator_22969.gotoNextObject () ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_controlRegisterGroupDeclarationAST_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_controlRegisterGroupDeclarationAST.mSlotID,
                                       extensionMethod_controlRegisterGroupDeclarationAST_enterInContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_controlRegisterGroupDeclarationAST_enterInContext (defineExtensionMethod_controlRegisterGroupDeclarationAST_enterInContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//            Overriding extension method '@decoratedControlRegisterArrayGroupDeclaration semanticAnalysis'            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_decoratedControlRegisterArrayGroupDeclaration_semanticAnalysis (const cPtr_abstractDecoratedDeclaration * inObject,
                                                                                            const GALGAS_semanticContext /* constinArgument_inContext */,
                                                                                            GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                                            GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                                                                            C_Compiler * /* inCompiler */
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_decoratedControlRegisterArrayGroupDeclaration * object = (const cPtr_decoratedControlRegisterArrayGroupDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_decoratedControlRegisterArrayGroupDeclaration) ;
  ioArgument_ioIntermediateCodeStruct.mProperty_mControlRegisterGroupArrayList.addAssign_operation (object->mProperty_mGroupName, object->mProperty_mBaseAddresses  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 630)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_decoratedControlRegisterArrayGroupDeclaration_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_decoratedControlRegisterArrayGroupDeclaration.mSlotID,
                                         extensionMethod_decoratedControlRegisterArrayGroupDeclaration_semanticAnalysis) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_decoratedControlRegisterArrayGroupDeclaration_semanticAnalysis (defineExtensionMethod_decoratedControlRegisterArrayGroupDeclaration_semanticAnalysis, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                      Routine 'buildControlRegisterMapHTMLFile'                                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_buildControlRegisterMapHTMLFile (const GALGAS_controlRegisterGroupMap constinArgument_inControlRegisterGroupMap,
                                              const GALGAS_lstring constinArgument_inSourceFile,
                                              C_Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_byAddressFilePath_27701 = constinArgument_inSourceFile.getter_string (HERE).add_operation (GALGAS_string (".control-registers-sorted-by-address.html"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 691)) ;
  GALGAS_string var_byNameFilePath_27790 = constinArgument_inSourceFile.getter_string (HERE).add_operation (GALGAS_string (".control-registers-sorted-by-name.html"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 692)) ;
  const enumGalgasBool test_0 = GALGAS_bool (gOption_plm_5F_options_writeControlRegisterHTMLDumpFile.getter_value ()).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_controlRegisterByAddress var_controlRegisterByAddress_27980 = GALGAS_controlRegisterByAddress::constructor_emptySortedList (SOURCE_FILE ("declaration-control-register.galgas", 694)) ;
    GALGAS_controlRegisterByName var_controlRegisterByName_28034 = GALGAS_controlRegisterByName::constructor_emptySortedList (SOURCE_FILE ("declaration-control-register.galgas", 695)) ;
    GALGAS_uint var_controlRegisterCount_28070 = GALGAS_uint ((uint32_t) 0U) ;
    cEnumerator_controlRegisterGroupMap enumerator_28121 (constinArgument_inControlRegisterGroupMap, kENUMERATION_UP) ;
    while (enumerator_28121.hasCurrentObject ()) {
      switch (enumerator_28121.current_mGroupKind (HERE).enumValue ()) {
      case GALGAS_registerGroupKind::kNotBuilt:
        break ;
      case GALGAS_registerGroupKind::kEnum_single:
        {
          const cEnumAssociatedValues_registerGroupKind_single * extractPtr_28436 = (const cEnumAssociatedValues_registerGroupKind_single *) (enumerator_28121.current_mGroupKind (HERE).unsafePointer ()) ;
          const GALGAS_bigint extractedValue_groupBaseAddress = extractPtr_28436->mAssociatedValue0 ;
          {
          routine_buildControlRegisterMaps (enumerator_28121.current_mControlRegisterMap (HERE), extractedValue_groupBaseAddress, enumerator_28121.current_lkey (HERE).getter_string (HERE), var_controlRegisterByAddress_27980, var_controlRegisterByName_28034, var_controlRegisterCount_28070, inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 700)) ;
          }
        }
        break ;
      case GALGAS_registerGroupKind::kEnum_arrayGroup:
        {
          const cEnumAssociatedValues_registerGroupKind_arrayGroup * extractPtr_28826 = (const cEnumAssociatedValues_registerGroupKind_arrayGroup *) (enumerator_28121.current_mGroupKind (HERE).unsafePointer ()) ;
          const GALGAS_lbigintlist extractedValue_baseAddresses = extractPtr_28826->mAssociatedValue0 ;
          cEnumerator_lbigintlist enumerator_28529 (extractedValue_baseAddresses, kENUMERATION_UP) ;
          GALGAS_uint index_28501 ((uint32_t) 0) ;
          while (enumerator_28529.hasCurrentObject ()) {
            {
            routine_buildControlRegisterMaps (enumerator_28121.current_mControlRegisterMap (HERE), enumerator_28529.current_mValue (HERE).getter_bigint (HERE), enumerator_28121.current_lkey (HERE).getter_string (HERE).add_operation (GALGAS_string ("["), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 713)).add_operation (index_28501.getter_string (SOURCE_FILE ("declaration-control-register.galgas", 713)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 713)).add_operation (GALGAS_string ("]"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 713)), var_controlRegisterByAddress_27980, var_controlRegisterByName_28034, var_controlRegisterCount_28070, inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 710)) ;
            }
            enumerator_28529.gotoNextObject () ;
            index_28501.increment_operation (inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 709)) ;
          }
        }
        break ;
      }
      enumerator_28121.gotoNextObject () ;
    }
    GALGAS_string var_typeDumpString_28867 = GALGAS_string (filewrapperTemplate_controlRegisterDumpGenerationTemplate_dumpByAddress (inCompiler, constinArgument_inSourceFile.getter_string (HERE).getter_lastPathComponent (SOURCE_FILE ("declaration-control-register.galgas", 722)), var_controlRegisterCount_28070, var_controlRegisterByAddress_27980 COMMA_SOURCE_FILE ("declaration-control-register.galgas", 721))) ;
    GALGAS_bool joker_29114 ; // Joker input parameter
    var_typeDumpString_28867.method_writeToFileWhenDifferentContents (var_byAddressFilePath_27701, joker_29114, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 726)) ;
    var_typeDumpString_28867 = GALGAS_string (filewrapperTemplate_controlRegisterDumpGenerationTemplate_dumpByName (inCompiler, constinArgument_inSourceFile.getter_string (HERE).getter_lastPathComponent (SOURCE_FILE ("declaration-control-register.galgas", 728)), var_controlRegisterCount_28070, var_controlRegisterByName_28034 COMMA_SOURCE_FILE ("declaration-control-register.galgas", 727))) ;
    GALGAS_bool joker_29373 ; // Joker input parameter
    var_typeDumpString_28867.method_writeToFileWhenDifferentContents (var_byNameFilePath_27790, joker_29373, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 732)) ;
  }else if (kBoolFalse == test_0) {
    {
    GALGAS_string::class_method_deleteFileIfExists (var_byAddressFilePath_27701, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 734)) ;
    }
    {
    GALGAS_string::class_method_deleteFileIfExists (var_byNameFilePath_27790, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 735)) ;
    }
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                         Routine 'buildControlRegisterMaps'                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_buildControlRegisterMaps (const GALGAS_controlRegisterMap constinArgument_inControlRegisterMap,
                                       const GALGAS_bigint constinArgument_inGroupBaseAddress,
                                       const GALGAS_string constinArgument_inGroupName,
                                       GALGAS_controlRegisterByAddress & ioArgument_ioControlRegisterByAddress,
                                       GALGAS_controlRegisterByName & ioArgument_ioControlRegisterByName,
                                       GALGAS_uint & ioArgument_ioControlRegisterCount,
                                       C_Compiler * inCompiler
                                       COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_controlRegisterMap enumerator_29942 (constinArgument_inControlRegisterMap, kENUMERATION_UP) ;
  while (enumerator_29942.hasCurrentObject ()) {
    GALGAS_bigint var_registerAddress_29969 = constinArgument_inGroupBaseAddress.add_operation (enumerator_29942.current_mAddressOffset (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 750)) ;
    const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_29942.current_mArraySize (HERE).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_0) {
      ioArgument_ioControlRegisterCount = ioArgument_ioControlRegisterCount.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 752)) ;
      GALGAS_string var_registerName_30124 = constinArgument_inGroupName.add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 753)).add_operation (enumerator_29942.current_lkey (HERE).getter_string (SOURCE_FILE ("declaration-control-register.galgas", 753)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 753)) ;
      GALGAS_string var_s_30167 = GALGAS_string ("<tr class=\"result_line\"><td class=\"name\">").add_operation (var_registerName_30124, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 754)).add_operation (GALGAS_string ("</td><td class=\"type\">$"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 755)).add_operation (enumerator_29942.current_mType (HERE).getter_plmTypeDescriptionName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 756)).add_operation (GALGAS_string ("</td><td class=\"address\">"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 756)).add_operation (var_registerAddress_29969.getter_hexStringSeparatedBy (GALGAS_char (TO_UNICODE (95)), GALGAS_uint ((uint32_t) 4U), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 757)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 756)).add_operation (GALGAS_string ("</td><td>"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 757)) ;
      const enumGalgasBool test_1 = GALGAS_bool (kIsStrictSup, enumerator_29942.current_mControlRegisterFieldList (HERE).getter_length (SOURCE_FILE ("declaration-control-register.galgas", 758)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_1) {
        var_s_30167.plusAssign_operation(GALGAS_string ("<table class=\"fields\">").add_operation (GALGAS_string ("<tr>"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 759)).add_operation (function_fieldIndexColumns (enumerator_29942.current_mRegisterBitCount (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 760)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 760)).add_operation (GALGAS_string ("</tr>"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 760)).add_operation (GALGAS_string ("<tr>"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 760)), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 759)) ;
        cEnumerator_controlRegisterFieldList enumerator_30657 (enumerator_29942.current_mControlRegisterFieldList (HERE), kENUMERATION_DOWN) ;
        while (enumerator_30657.hasCurrentObject ()) {
          var_s_30167.plusAssign_operation(GALGAS_string ("<td class=\"fields\" colspan=\"").add_operation (enumerator_30657.current_mFieldBitCount (HERE).getter_string (SOURCE_FILE ("declaration-control-register.galgas", 763)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 763)).add_operation (GALGAS_string ("\">"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 763)).add_operation (enumerator_30657.current_mFieldName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 763)).add_operation (GALGAS_string ("</td>"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 763)), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 763)) ;
          enumerator_30657.gotoNextObject () ;
        }
        var_s_30167.plusAssign_operation(GALGAS_string ("</tr></table>"), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 765)) ;
      }
      var_s_30167.plusAssign_operation(GALGAS_string ("</td></tr>\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 767)) ;
      ioArgument_ioControlRegisterByAddress.addAssign_operation (var_registerAddress_29969, var_s_30167  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 768)) ;
      ioArgument_ioControlRegisterByName.addAssign_operation (var_registerAddress_29969, var_s_30167, var_registerName_30124  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 769)) ;
    }else if (kBoolFalse == test_0) {
      ioArgument_ioControlRegisterCount = ioArgument_ioControlRegisterCount.add_operation (enumerator_29942.current_mArraySize (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 771)) ;
      cEnumerator_uintlist enumerator_31105 (function_arrayIndexListFor (enumerator_29942.current_mArraySize (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 772)), kENUMERATION_UP) ;
      while (enumerator_31105.hasCurrentObject ()) {
        GALGAS_bigint var_address_31128 = var_registerAddress_29969.add_operation (enumerator_31105.current_mValue (HERE).multiply_operation (enumerator_29942.current_mElementArraySize (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 773)).getter_bigint (SOURCE_FILE ("declaration-control-register.galgas", 773)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 773)) ;
        GALGAS_string var_registerName_31204 = constinArgument_inGroupName.add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 774)).add_operation (enumerator_29942.current_lkey (HERE).getter_string (SOURCE_FILE ("declaration-control-register.galgas", 774)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 774)).add_operation (GALGAS_string ("["), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 774)).add_operation (enumerator_31105.current_mValue (HERE).getter_string (SOURCE_FILE ("declaration-control-register.galgas", 774)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 774)).add_operation (GALGAS_string ("]"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 774)) ;
        GALGAS_string var_s_31279 = GALGAS_string ("<tr class=\"result_line\"><td class=\"name\">").add_operation (var_registerName_31204, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 775)).add_operation (GALGAS_string ("</td><td class=\"type\">$"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 776)).add_operation (enumerator_29942.current_mType (HERE).getter_plmTypeDescriptionName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 777)).add_operation (GALGAS_string ("</td><td class=\"address\">"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 777)).add_operation (var_address_31128.getter_hexStringSeparatedBy (GALGAS_char (TO_UNICODE (95)), GALGAS_uint ((uint32_t) 4U), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 778)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 777)).add_operation (GALGAS_string ("</td><td>"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 778)) ;
        const enumGalgasBool test_2 = GALGAS_bool (kIsStrictSup, enumerator_29942.current_mControlRegisterFieldList (HERE).getter_length (SOURCE_FILE ("declaration-control-register.galgas", 780)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_2) {
          var_s_31279.plusAssign_operation(GALGAS_string ("<table class=\"fields\">").add_operation (GALGAS_string ("<tr>"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 781)).add_operation (function_fieldIndexColumns (enumerator_29942.current_mRegisterBitCount (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 782)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 782)).add_operation (GALGAS_string ("</tr><tr>"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 782)), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 781)) ;
          cEnumerator_controlRegisterFieldList enumerator_31768 (enumerator_29942.current_mControlRegisterFieldList (HERE), kENUMERATION_DOWN) ;
          while (enumerator_31768.hasCurrentObject ()) {
            var_s_31279.plusAssign_operation(GALGAS_string ("<td class=\"fields\" colspan=\"").add_operation (enumerator_31768.current_mFieldBitCount (HERE).getter_string (SOURCE_FILE ("declaration-control-register.galgas", 784)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 784)).add_operation (GALGAS_string ("\">"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 784)).add_operation (enumerator_31768.current_mFieldName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 784)).add_operation (GALGAS_string ("</td>"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 784)), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 784)) ;
            enumerator_31768.gotoNextObject () ;
          }
          var_s_31279.plusAssign_operation(GALGAS_string ("</tr></table>"), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 786)) ;
        }
        var_s_31279.plusAssign_operation(GALGAS_string ("</td></tr>\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 788)) ;
        ioArgument_ioControlRegisterByAddress.addAssign_operation (var_registerAddress_29969, var_s_31279  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 789)) ;
        ioArgument_ioControlRegisterByName.addAssign_operation (var_registerAddress_29969, var_s_31279, var_registerName_31204  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 790)) ;
        enumerator_31105.gotoNextObject () ;
      }
    }
    enumerator_29942.gotoNextObject () ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                 Filewrapper 'controlRegisterDumpGenerationTemplate'                                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_controlRegisterDumpGenerationTemplate_0 [1] = {
  NULL
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_controlRegisterDumpGenerationTemplate_0 [1] = {
  NULL
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_controlRegisterDumpGenerationTemplate (
  "",
  0,
  gWrapperAllFiles_controlRegisterDumpGenerationTemplate_0,
  0,
  gWrapperAllDirectories_controlRegisterDumpGenerationTemplate_0
) ;


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                       Filewrapper template 'controlRegisterDumpGenerationTemplate dumpByName'                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string filewrapperTemplate_controlRegisterDumpGenerationTemplate_dumpByName (C_Compiler * /* inCompiler */,
                                                                                    const GALGAS_string & in_PROJECT_5F_NAME,
                                                                                    const GALGAS_uint & in_CONTROL_5F_REGISTER_5F_COUNT,
                                                                                    const GALGAS_controlRegisterByName & in_CONTROL_5F_REGISTER_5F_SORTED_5F_BY_5F_NAME
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.01//EN\" \"http://www.w3.org/TR/html4/strict.dtd\">\n"
    "<html>\n"
    "<head>\n"
    "<meta http-equiv=\"Content-Type\" content=\"text/html; charset=utf-8\">\n"
    "<title>Control Registers of " ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << ", sorted by name</title>\n"
    "<style type=\"text/css\">body {\n"
    "  font-size: small ;\n"
    "}\n"
    "\n"
    "h1 {\n"
    "  text-align: center ;\n"
    "}\n"
    "\n"
    ".selecteur {\n"
    "  color:green ;\n"
    "}\n"
    "\n"
    "a.header_link {\n"
    "  background-color: #FFFFCC ;\n"
    "}\n"
    "\n"
    "a:visited, a:link, a:active{\n"
    "  color: blue ;\n"
    "  text-decoration: underline ;\n"
    "}\n"
    "\n"
    "a:hover {\n"
    "  color:green ;\n"
    "  background-color: #FFFF00 ;\n"
    "  text-decoration: none ;\n"
    "}\n"
    "\n"
    "table.result {\n"
    "  border: 1px solid #666666 ;\n"
    "}\n"
    "\n"
    "table.fields {\n"
    "\xC2""\xA0""\xC2""\xA0""border-collapse: collapse ;\n"
    "  border-spacing: 1px 1px;\n"
    "}\n"
    "\n"
    "td.fields {\n"
    "  border: 1px solid #333333 ;\n"
    "  text-align: center ;\n"
    "  padding : 4px ;\n"
    "}\n"
    "\n"
    "td.result_title {\n"
    "  font-weight: bold ;\n"
    "  text-align: center ;\n"
    "  background-color: yellow ;\n"
    "}\n"
    "\n"
    "td.address {\n"
    "  font-family: Courier ;\n"
    "  padding : 4px ;\n"
    "}\n"
    "\n"
    "td.name {\n"
    "  font-family: Courier ;\n"
    "  padding : 4px ;\n"
    "}\n"
    "\n"
    "td.type {\n"
    "  font-family: Courier ;\n"
    "  padding : 4px ;\n"
    "}\n"
    "\n"
    "tr.result_line {\n"
    "  background-color: #EEEEEE ;\n"
    "}\n"
    "\n"
    "</style>\n"
    "</head>\n"
    "<body>\n"
    "<div>\n"
    "<h1>Control Registers of " ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << ", sorted by name</h1>\n"
    "<p>This document lists all " ;
  result << in_CONTROL_5F_REGISTER_5F_COUNT.getter_string (SOURCE_FILE ("controlRegisterByNameDump.html.galgasTemplate", 78)).stringValue () ;
  result << " defined control registers, sorted by name.</p>\n"
    "<table class=\"result\">\n"
    "<tr><td class=\"result_title\">Control Register Name</td><td class=\"result_title\">PLM Type</td><td class=\"result_title\">Address</td><td class=\"result_ti"
    "tle\">Value</td></tr>\n" ;
  GALGAS_uint index_1537_ (0) ;
  if (in_CONTROL_5F_REGISTER_5F_SORTED_5F_BY_5F_NAME.isValid ()) {
    cEnumerator_controlRegisterByName enumerator_1537 (in_CONTROL_5F_REGISTER_5F_SORTED_5F_BY_5F_NAME, kENUMERATION_UP) ;
    while (enumerator_1537.hasCurrentObject ()) {
      result << enumerator_1537.current_mHTML (HERE).stringValue () ;
      index_1537_.increment () ;
      enumerator_1537.gotoNextObject () ;
    }
  }
  result << "\n"
    "</table>\n"
    "</div>\n"
    "</body>\n"
    "</html>\n" ;
  return GALGAS_string (result) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                     Filewrapper template 'controlRegisterDumpGenerationTemplate dumpByAddress'                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string filewrapperTemplate_controlRegisterDumpGenerationTemplate_dumpByAddress (C_Compiler * /* inCompiler */,
                                                                                       const GALGAS_string & in_PROJECT_5F_NAME,
                                                                                       const GALGAS_uint & in_CONTROL_5F_REGISTER_5F_COUNT,
                                                                                       const GALGAS_controlRegisterByAddress & in_CONTROL_5F_REGISTER_5F_SORTED_5F_BY_5F_ADDRESS
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.01//EN\" \"http://www.w3.org/TR/html4/strict.dtd\">\n"
    "<html>\n"
    "<head>\n"
    "<meta http-equiv=\"Content-Type\" content=\"text/html; charset=utf-8\">\n"
    "<title>Control Registers of " ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << ", sorted by address</title>\n"
    "<style type=\"text/css\">body {\n"
    "  font-size: small ;\n"
    "}\n"
    "\n"
    "h1 {\n"
    "  text-align: center ;\n"
    "}\n"
    "\n"
    ".selecteur {\n"
    "  color:green ;\n"
    "}\n"
    "\n"
    "a.header_link {\n"
    "  background-color: #FFFFCC ;\n"
    "}\n"
    "\n"
    "a:visited, a:link, a:active{\n"
    "  color: blue ;\n"
    "  text-decoration: underline ;\n"
    "}\n"
    "\n"
    "a:hover {\n"
    "  color:green ;\n"
    "  background-color: #FFFF00 ;\n"
    "  text-decoration: none ;\n"
    "}\n"
    "\n"
    "table.result {\n"
    "  border: 1px solid #666666 ;\n"
    "}\n"
    "\n"
    "table.fields {\n"
    "\xC2""\xA0""\xC2""\xA0""border-collapse: collapse ;\n"
    "  border-spacing: 1px 1px;\n"
    "}\n"
    "\n"
    "td.fields {\n"
    "  border: 1px solid #333333 ;\n"
    "  text-align: center ;\n"
    "  padding : 4px ;\n"
    "}\n"
    "\n"
    "td.result_title {\n"
    "  font-weight: bold ;\n"
    "  text-align: center ;\n"
    "  background-color: yellow ;\n"
    "}\n"
    "\n"
    "td.address {\n"
    "  font-family: Courier ;\n"
    "  padding : 4px ;\n"
    "}\n"
    "\n"
    "td.name {\n"
    "  font-family: Courier ;\n"
    "  padding : 4px ;\n"
    "}\n"
    "\n"
    "td.type {\n"
    "  font-family: Courier ;\n"
    "  padding : 4px ;\n"
    "}\n"
    "\n"
    "tr.result_line {\n"
    "  background-color: #EEEEEE ;\n"
    "}\n"
    "\n"
    "</style>\n"
    "</head>\n"
    "<body>\n"
    "<div>\n"
    "<h1>Control Registers of " ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << ", sorted by address</h1>\n"
    "<p>This document lists all " ;
  result << in_CONTROL_5F_REGISTER_5F_COUNT.getter_string (SOURCE_FILE ("controlRegisterByAddressDump.html.galgasTemplate", 78)).stringValue () ;
  result << " defined control registers, sorted by address.</p>\n"
    "<table class=\"result\">\n"
    "<tr><td class=\"result_title\">Control Register Name</td><td class=\"result_title\">PLM Type</td><td class=\"result_title\">Address</td><td class=\"result_ti"
    "tle\">Value</td></tr>\n" ;
  GALGAS_uint index_1549_ (0) ;
  if (in_CONTROL_5F_REGISTER_5F_SORTED_5F_BY_5F_ADDRESS.isValid ()) {
    cEnumerator_controlRegisterByAddress enumerator_1549 (in_CONTROL_5F_REGISTER_5F_SORTED_5F_BY_5F_ADDRESS, kENUMERATION_UP) ;
    while (enumerator_1549.hasCurrentObject ()) {
      result << enumerator_1549.current_mHTML (HERE).stringValue () ;
      index_1549_.increment () ;
      enumerator_1549.gotoNextObject () ;
    }
  }
  result << "\n"
    "</table>\n"
    "</div>\n"
    "</body>\n"
    "</html>\n" ;
  return GALGAS_string (result) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                            Function 'fieldIndexColumns'                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string function_fieldIndexColumns (const GALGAS_uint & constinArgument_inBitCount,
                                          C_Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string::makeEmptyString () ;
  cEnumerator_range enumerator_32951 (GALGAS_range (GALGAS_uint ((uint32_t) 0U), constinArgument_inBitCount.substract_operation (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 816))), kENUMERATION_DOWN) ;
  while (enumerator_32951.hasCurrentObject ()) {
    result_result.plusAssign_operation(GALGAS_string ("<td class=\"fields\">").add_operation (enumerator_32951.current (HERE).getter_string (SOURCE_FILE ("declaration-control-register.galgas", 817)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 817)).add_operation (GALGAS_string ("</td>"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 817)), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 817)) ;
    enumerator_32951.gotoNextObject () ;
  }
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function introspection                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const C_galgas_type_descriptor * functionArgs_fieldIndexColumns [2] = {
  & kTypeDescriptor_GALGAS_uint,
  NULL
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_object functionWithGenericHeader_fieldIndexColumns (C_Compiler * inCompiler,
                                                                  const cObjectArray & inEffectiveParameterArray,
                                                                  const GALGAS_location & /* inErrorLocation */
                                                                  COMMA_LOCATION_ARGS) {
  const GALGAS_uint operand0 = GALGAS_uint::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  return function_fieldIndexColumns (operand0,
                                     inCompiler
                                     COMMA_THERE).getter_object (THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_galgas_function_descriptor functionDescriptor_fieldIndexColumns ("fieldIndexColumns",
                                                                   functionWithGenericHeader_fieldIndexColumns,
                                                                   & kTypeDescriptor_GALGAS_string,
                                                                   1,
                                                                   functionArgs_fieldIndexColumns) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                            Function 'arrayIndexListFor'                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uintlist function_arrayIndexListFor (const GALGAS_uint & constinArgument_inSize,
                                            C_Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uintlist result_result ; // Returned variable
  result_result = GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("declaration-control-register.galgas", 824)) ;
  cEnumerator_range enumerator_33236 (GALGAS_range (GALGAS_uint ((uint32_t) 0U), constinArgument_inSize.substract_operation (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 825))), kENUMERATION_UP) ;
  while (enumerator_33236.hasCurrentObject ()) {
    result_result.addAssign_operation (enumerator_33236.current (HERE)  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 826)) ;
    enumerator_33236.gotoNextObject () ;
  }
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function introspection                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const C_galgas_type_descriptor * functionArgs_arrayIndexListFor [2] = {
  & kTypeDescriptor_GALGAS_uint,
  NULL
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_object functionWithGenericHeader_arrayIndexListFor (C_Compiler * inCompiler,
                                                                  const cObjectArray & inEffectiveParameterArray,
                                                                  const GALGAS_location & /* inErrorLocation */
                                                                  COMMA_LOCATION_ARGS) {
  const GALGAS_uint operand0 = GALGAS_uint::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  return function_arrayIndexListFor (operand0,
                                     inCompiler
                                     COMMA_THERE).getter_object (THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_galgas_function_descriptor functionDescriptor_arrayIndexListFor ("arrayIndexListFor",
                                                                   functionWithGenericHeader_arrayIndexListFor,
                                                                   & kTypeDescriptor_GALGAS_uintlist,
                                                                   1,
                                                                   functionArgs_arrayIndexListFor) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                Overriding extension getter '@globalConstantDeclarationAST locationForErrorSignaling'                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_location extensionGetter_globalConstantDeclarationAST_locationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                               C_Compiler * /* inCompiler */
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_outLocation ; // Returned variable
  const cPtr_globalConstantDeclarationAST * object = (const cPtr_globalConstantDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_globalConstantDeclarationAST) ;
  result_outLocation = object->mProperty_mConstantName.getter_location (HERE) ;
//---
  return result_outLocation ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_globalConstantDeclarationAST_locationForErrorSignaling (void) {
  enterExtensionGetter_locationForErrorSignaling (kTypeDescriptor_GALGAS_globalConstantDeclarationAST.mSlotID,
                                                  extensionGetter_globalConstantDeclarationAST_locationForErrorSignaling) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_globalConstantDeclarationAST_locationForErrorSignaling (defineExtensionGetter_globalConstantDeclarationAST_locationForErrorSignaling, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                 Overriding extension method '@globalConstantDeclarationAST enterInPrecedenceGraph'                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_globalConstantDeclarationAST_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                                                 GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_globalConstantDeclarationAST * object = (const cPtr_globalConstantDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_globalConstantDeclarationAST) ;
  {
  const GALGAS_globalConstantDeclarationAST temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (object->mProperty_mConstantName, temp_0, inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 67)) ;
  }
  const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, object->mProperty_mConstantTypeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_1) {
    {
    ioArgument_ioGraph.setter_addEdge (object->mProperty_mConstantName, object->mProperty_mConstantTypeName COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 70)) ;
    }
  }
  callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) object->mProperty_mSourceExpression.ptr (), object->mProperty_mConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 73)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_globalConstantDeclarationAST_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_globalConstantDeclarationAST.mSlotID,
                                               extensionMethod_globalConstantDeclarationAST_enterInPrecedenceGraph) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_globalConstantDeclarationAST_enterInPrecedenceGraph (defineExtensionMethod_globalConstantDeclarationAST_enterInPrecedenceGraph, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//           Overriding extension getter '@globalConstantDeclarationAST keyRepresentationForErrorSignaling'            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string extensionGetter_globalConstantDeclarationAST_keyRepresentationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  const cPtr_globalConstantDeclarationAST * object = (const cPtr_globalConstantDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_globalConstantDeclarationAST) ;
  result_outRepresentation = GALGAS_string ("global.constant.").add_operation (object->mProperty_mConstantName.getter_string (SOURCE_FILE ("declaration-global-constant.galgas", 79)), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 79)) ;
//---
  return result_outRepresentation ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_globalConstantDeclarationAST_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_globalConstantDeclarationAST.mSlotID,
                                                           extensionGetter_globalConstantDeclarationAST_keyRepresentationForErrorSignaling) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_globalConstantDeclarationAST_keyRepresentationForErrorSignaling (defineExtensionGetter_globalConstantDeclarationAST_keyRepresentationForErrorSignaling, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                     Overriding extension method '@globalConstantDeclarationAST enterInContext'                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_globalConstantDeclarationAST_enterInContext (const cPtr_abstractDeclarationAST * inObject,
                                                                         const GALGAS_functionDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                                         GALGAS_semanticContext & ioArgument_ioContext,
                                                                         GALGAS_declarationDecorationList & /* ioArgument_ioDecoratedDeclarationList */,
                                                                         GALGAS_decoratedRegularRoutineList & /* ioArgument_ioDecoratedRoutineList */,
                                                                         GALGAS_routineListIR & /* ioArgument_ioRoutineListIR */,
                                                                         GALGAS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                                         GALGAS_staticEntityMap & /* ioArgument_ioStaticEntityMap */,
                                                                         GALGAS_globalVariableIRList & /* ioArgument_ioGlobalVariableIRList */,
                                                                         GALGAS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_globalConstantDeclarationAST * object = (const cPtr_globalConstantDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_globalConstantDeclarationAST) ;
  GALGAS_bool var_displayValue_4480 = GALGAS_bool (false) ;
  cEnumerator_lstringlist enumerator_4524 (object->mProperty_mAttributeList, kENUMERATION_UP) ;
  while (enumerator_4524.hasCurrentObject ()) {
    const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, enumerator_4524.current_mValue (HERE).getter_string (HERE).objectCompare (GALGAS_string ("display"))).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (enumerator_4524.current_mValue (HERE).getter_location (SOURCE_FILE ("declaration-global-constant.galgas", 100)), GALGAS_string ("attribute should be @display"), fixItArray1  COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 100)) ;
    }else if (kBoolFalse == test_0) {
      const enumGalgasBool test_2 = var_displayValue_4480.boolEnum () ;
      if (kBoolTrue == test_2) {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (enumerator_4524.current_mValue (HERE).getter_location (SOURCE_FILE ("declaration-global-constant.galgas", 102)), GALGAS_string ("duplicated attribute"), fixItArray3  COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 102)) ;
      }else if (kBoolFalse == test_2) {
        var_displayValue_4480 = GALGAS_bool (true) ;
      }
    }
    enumerator_4524.gotoNextObject () ;
  }
  GALGAS_objectIR var_expressionResult_5001 ;
  {
  routine_computeStaticExpression (ioArgument_ioContext, object->mProperty_mSourceExpression, object->mProperty_mConstantName.getter_location (HERE), object->mProperty_mConstantTypeName, var_expressionResult_5001, inCompiler  COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 108)) ;
  }
  {
  ioArgument_ioContext.mProperty_mGlobalConstantMap.setter_insertKey (object->mProperty_mConstantName, var_expressionResult_5001, inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 116)) ;
  }
  {
  extensionSetter_insertGlobalConstant (ioArgument_ioContext.mProperty_mValuedObjectMap, object->mProperty_mConstantName, var_expressionResult_5001, inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 117)) ;
  }
  const enumGalgasBool test_4 = var_displayValue_4480.boolEnum () ;
  if (kBoolTrue == test_4) {
    inCompiler->printMessage (GALGAS_string ("Global constant '").add_operation (object->mProperty_mConstantName.getter_string (SOURCE_FILE ("declaration-global-constant.galgas", 120)), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 120)).add_operation (GALGAS_string ("' = "), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 120)).add_operation (extensionGetter_llvmValue (var_expressionResult_5001, inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 120)), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 120)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 120))  COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 120)) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_globalConstantDeclarationAST_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_globalConstantDeclarationAST.mSlotID,
                                       extensionMethod_globalConstantDeclarationAST_enterInContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_globalConstantDeclarationAST_enterInContext (defineExtensionMethod_globalConstantDeclarationAST_enterInContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                      Routine 'buildGlobalConstantMapHTMLFile'                                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_buildGlobalConstantMapHTMLFile (GALGAS_globalConstantMap inArgument_inGlobalConstantMap,
                                             const GALGAS_lstring constinArgument_inSourceFile,
                                             C_Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_typeDumpFilePath_5957 = constinArgument_inSourceFile.getter_string (HERE).add_operation (GALGAS_string (".global-constants.html"), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 133)) ;
  const enumGalgasBool test_0 = GALGAS_bool (gOption_plm_5F_options_emitGlobalConstantHTMLDumpFile.getter_value ()).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_stringset var_firstLetterSet_6104 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("declaration-global-constant.galgas", 135)) ;
    cEnumerator_globalConstantMap enumerator_6143 (inArgument_inGlobalConstantMap, kENUMERATION_UP) ;
    while (enumerator_6143.hasCurrentObject ()) {
      var_firstLetterSet_6104.addAssign_operation (enumerator_6143.current_lkey (HERE).getter_string (HERE).getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 137)).getter_string (SOURCE_FILE ("declaration-global-constant.galgas", 137))  COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 137)) ;
      enumerator_6143.gotoNextObject () ;
    }
    GALGAS_string var_tableOfTypeString_6251 = GALGAS_string::makeEmptyString () ;
    GALGAS_char var_currentFirstLetter_6285 = GALGAS_char (TO_UNICODE (32)) ;
    cEnumerator_globalConstantMap enumerator_6331 (inArgument_inGlobalConstantMap, kENUMERATION_UP) ;
    while (enumerator_6331.hasCurrentObject ()) {
      const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_currentFirstLetter_6285.objectCompare (enumerator_6331.current_lkey (HERE).getter_string (HERE).getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 142)))).boolEnum () ;
      if (kBoolTrue == test_1) {
        var_currentFirstLetter_6285 = enumerator_6331.current_lkey (HERE).getter_string (HERE).getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 143)) ;
        var_tableOfTypeString_6251.plusAssign_operation(GALGAS_string ("<br><a name=\"").add_operation (var_currentFirstLetter_6285.getter_uint (SOURCE_FILE ("declaration-global-constant.galgas", 144)).getter_string (SOURCE_FILE ("declaration-global-constant.galgas", 144)), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 144)).add_operation (GALGAS_string ("\"><b>"), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 144)).add_operation (var_currentFirstLetter_6285.getter_string (SOURCE_FILE ("declaration-global-constant.galgas", 144)), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 144)).add_operation (GALGAS_string ("</b></a><br>"), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 144)), inCompiler  COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 144)) ;
      }
      var_tableOfTypeString_6251.plusAssign_operation(function_linkForGlobalConstant (enumerator_6331.current_lkey (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 146)).add_operation (GALGAS_string ("<br>"), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 146)), inCompiler  COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 146)) ;
      enumerator_6331.gotoNextObject () ;
    }
    GALGAS_string var_typeDumpString_6727 = GALGAS_string (filewrapperTemplate_constantDumpGenerationTemplate_dump (inCompiler, constinArgument_inSourceFile.getter_string (HERE).getter_lastPathComponent (SOURCE_FILE ("declaration-global-constant.galgas", 149)), inArgument_inGlobalConstantMap, var_firstLetterSet_6104, var_tableOfTypeString_6251 COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 148))) ;
    GALGAS_bool joker_6971 ; // Joker input parameter
    var_typeDumpString_6727.method_writeToFileWhenDifferentContents (var_typeDumpFilePath_5957, joker_6971, inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 154)) ;
  }else if (kBoolFalse == test_0) {
    {
    GALGAS_string::class_method_deleteFileIfExists (var_typeDumpFilePath_5957, inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 156)) ;
    }
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                    Filewrapper 'constantDumpGenerationTemplate'                                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_constantDumpGenerationTemplate_0 [1] = {
  NULL
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_constantDumpGenerationTemplate_0 [1] = {
  NULL
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_constantDumpGenerationTemplate (
  "",
  0,
  gWrapperAllFiles_constantDumpGenerationTemplate_0,
  0,
  gWrapperAllDirectories_constantDumpGenerationTemplate_0
) ;


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                             Filewrapper template 'constantDumpGenerationTemplate dump'                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string filewrapperTemplate_constantDumpGenerationTemplate_dump (C_Compiler * inCompiler,
                                                                       const GALGAS_string & in_PROJECT_5F_NAME,
                                                                       const GALGAS_globalConstantMap & in_GLOBAL_5F_CONSTANT_5F_MAP,
                                                                       const GALGAS_stringset & in_FIRST_5F_LETTER_5F_SET,
                                                                       const GALGAS_string & in_TABLE_5F_OF_5F_TYPES_5F_STRING
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.01//EN\" \"http://www.w3.org/TR/html4/strict.dtd\">\n"
    "<html>\n"
    "<head>\n"
    "<meta http-equiv=\"Content-Type\" content=\"text/html; charset=utf-8\">\n"
    "<title>Global constants of " ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << "</title>\n"
    "<style type=\"text/css\">body {\n"
    "  font-family: Georgia, sans-serif ;\n"
    "  font-size: small ;\n"
    "}\n"
    "\n"
    "h1 {\n"
    "  text-align: center ;\n"
    "}\n"
    "\n"
    ".selecteur {\n"
    "  color:green ;\n"
    "}\n"
    "\n"
    "a.header_link {\n"
    "  background-color: #FFFFCC ;\n"
    "}\n"
    "\n"
    "a:visited, a:link, a:active{\n"
    "  color: blue ;\n"
    "  text-decoration: underline ;\n"
    "}\n"
    "\n"
    "a:hover {\n"
    "  color:green ;\n"
    "  background-color: #FFFF00 ;\n"
    "  text-decoration: none ;\n"
    "}\n"
    "\n"
    "table.result {\n"
    "  border: 1px solid #666666 ;\n"
    "}\n"
    "\n"
    "td.result_title {\n"
    "  font-weight: bold ;\n"
    "  text-align: center ;\n"
    "  background-color: yellow ;\n"
    "}\n"
    "\n"
    "tr.result_line {\n"
    "  background-color: #EEEEEE ;\n"
    "}\n"
    "\n"
    "</style>\n"
    "</head>\n"
    "<body>\n"
    "<div>\n"
    "<h1>Global Constants of " ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << "</h1>\n"
    "<p>This document lists all " ;
  result << in_GLOBAL_5F_CONSTANT_5F_MAP.getter_count (SOURCE_FILE ("globalConstantDump.html.galgasTemplate", 53)).getter_string (SOURCE_FILE ("globalConstantDump.html.galgasTemplate", 53)).stringValue () ;
  result << " defined global constants, sorted by name.</p>\n"
    "<p>" ;
  GALGAS_uint index_1005_ (0) ;
  if (in_FIRST_5F_LETTER_5F_SET.isValid ()) {
    cEnumerator_stringset enumerator_1005 (in_FIRST_5F_LETTER_5F_SET, kENUMERATION_UP) ;
    while (enumerator_1005.hasCurrentObject ()) {
      result << "<a class=\"header_link\" href=\"#" ;
      result << enumerator_1005.current_key (HERE).getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("globalConstantDump.html.galgasTemplate", 56)).getter_uint (SOURCE_FILE ("globalConstantDump.html.galgasTemplate", 56)).getter_string (SOURCE_FILE ("globalConstantDump.html.galgasTemplate", 56)).stringValue () ;
      result << "\">" ;
      result << enumerator_1005.current_key (HERE).stringValue () ;
      result << "</a>" ;
      if (enumerator_1005.hasNextObject ()) {
        result << " - " ;
      }
      index_1005_.increment () ;
      enumerator_1005.gotoNextObject () ;
    }
  }
  result << "</p>\n"
    "<p>" ;
  result << in_TABLE_5F_OF_5F_TYPES_5F_STRING.stringValue () ;
  result << "\n"
    "</p>\n"
    "<table class=\"result\">\n"
    "<tr><td class=\"result_title\">Constant Name</td><td class=\"result_title\">PLM Type</td><td class=\"result_title\">LLVM Type</td><td class=\"result_title\">V"
    "alue</td></tr>\n" ;
  GALGAS_uint index_1375_ (0) ;
  if (in_GLOBAL_5F_CONSTANT_5F_MAP.isValid ()) {
    cEnumerator_globalConstantMap enumerator_1375 (in_GLOBAL_5F_CONSTANT_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_1375.hasCurrentObject ()) {
      result << "<tr class=\"result_line\"><td><a name=\"" ;
      result << enumerator_1375.current_lkey (HERE).getter_string (HERE).stringValue () ;
      result << "\">" ;
      result << enumerator_1375.current_lkey (HERE).getter_string (HERE).stringValue () ;
      result << "</a></td><td>$" ;
      result << extensionGetter_plmTypeDescriptionName (enumerator_1375.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("globalConstantDump.html.galgasTemplate", 66)).stringValue () ;
      result << "</td><td>" ;
      result << extensionGetter_llvmTypeName (enumerator_1375.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("globalConstantDump.html.galgasTemplate", 66)).stringValue () ;
      result << "</td><td>" ;
      result << extensionGetter_llvmName (enumerator_1375.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("globalConstantDump.html.galgasTemplate", 66)).stringValue () ;
      result << "</td></tr>\n" ;
      index_1375_.increment () ;
      enumerator_1375.gotoNextObject () ;
    }
  }
  result << "\n"
    "</table>\n"
    "</div>\n"
    "</body>\n"
    "</html>\n" ;
  return GALGAS_string (result) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                          Function 'linkForGlobalConstant'                                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string function_linkForGlobalConstant (const GALGAS_string & constinArgument_inConstantName,
                                              C_Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("<a class=\"header_link\" href=\"#").add_operation (constinArgument_inConstantName, inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 175)).add_operation (GALGAS_string ("\">"), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 175)).add_operation (constinArgument_inConstantName, inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 175)).add_operation (GALGAS_string ("</a>"), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 175)) ;
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function introspection                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const C_galgas_type_descriptor * functionArgs_linkForGlobalConstant [2] = {
  & kTypeDescriptor_GALGAS_string,
  NULL
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_object functionWithGenericHeader_linkForGlobalConstant (C_Compiler * inCompiler,
                                                                      const cObjectArray & inEffectiveParameterArray,
                                                                      const GALGAS_location & /* inErrorLocation */
                                                                      COMMA_LOCATION_ARGS) {
  const GALGAS_string operand0 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  return function_linkForGlobalConstant (operand0,
                                         inCompiler
                                         COMMA_THERE).getter_object (THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_galgas_function_descriptor functionDescriptor_linkForGlobalConstant ("linkForGlobalConstant",
                                                                       functionWithGenericHeader_linkForGlobalConstant,
                                                                       & kTypeDescriptor_GALGAS_string,
                                                                       1,
                                                                       functionArgs_linkForGlobalConstant) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                Overriding extension method '@syncToolInstanceDeclarationAST enterInPrecedenceGraph'                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_syncToolInstanceDeclarationAST_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                                                   GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_syncToolInstanceDeclarationAST * object = (const cPtr_syncToolInstanceDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_syncToolInstanceDeclarationAST) ;
  {
  const GALGAS_syncToolInstanceDeclarationAST temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (object->mProperty_mSyncInstanceName, temp_0, inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 46)) ;
  }
  const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, object->mProperty_mSyncTypeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_1) {
    {
    ioArgument_ioGraph.setter_addEdge (object->mProperty_mSyncInstanceName, object->mProperty_mSyncTypeName COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 48)) ;
    }
  }
  callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) object->mProperty_mSourceExpression.ptr (), object->mProperty_mSyncInstanceName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 50)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_syncToolInstanceDeclarationAST_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_syncToolInstanceDeclarationAST.mSlotID,
                                               extensionMethod_syncToolInstanceDeclarationAST_enterInPrecedenceGraph) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_syncToolInstanceDeclarationAST_enterInPrecedenceGraph (defineExtensionMethod_syncToolInstanceDeclarationAST_enterInPrecedenceGraph, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//          Overriding extension getter '@syncToolInstanceDeclarationAST keyRepresentationForErrorSignaling'           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string extensionGetter_syncToolInstanceDeclarationAST_keyRepresentationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  const cPtr_syncToolInstanceDeclarationAST * object = (const cPtr_syncToolInstanceDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_syncToolInstanceDeclarationAST) ;
  result_outRepresentation = GALGAS_string ("sync ").add_operation (object->mProperty_mSyncInstanceName.getter_string (SOURCE_FILE ("declaration-global-sync-instance.galgas", 56)), inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 56)) ;
//---
  return result_outRepresentation ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_syncToolInstanceDeclarationAST_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_syncToolInstanceDeclarationAST.mSlotID,
                                                           extensionGetter_syncToolInstanceDeclarationAST_keyRepresentationForErrorSignaling) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_syncToolInstanceDeclarationAST_keyRepresentationForErrorSignaling (defineExtensionGetter_syncToolInstanceDeclarationAST_keyRepresentationForErrorSignaling, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//               Overriding extension getter '@syncToolInstanceDeclarationAST locationForErrorSignaling'               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_location extensionGetter_syncToolInstanceDeclarationAST_locationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                                 C_Compiler * /* inCompiler */
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_outLocation ; // Returned variable
  const cPtr_syncToolInstanceDeclarationAST * object = (const cPtr_syncToolInstanceDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_syncToolInstanceDeclarationAST) ;
  result_outLocation = object->mProperty_mSyncInstanceName.getter_location (HERE) ;
//---
  return result_outLocation ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_syncToolInstanceDeclarationAST_locationForErrorSignaling (void) {
  enterExtensionGetter_locationForErrorSignaling (kTypeDescriptor_GALGAS_syncToolInstanceDeclarationAST.mSlotID,
                                                  extensionGetter_syncToolInstanceDeclarationAST_locationForErrorSignaling) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_syncToolInstanceDeclarationAST_locationForErrorSignaling (defineExtensionGetter_syncToolInstanceDeclarationAST_locationForErrorSignaling, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                    Overriding extension method '@syncToolInstanceDeclarationAST enterInContext'                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_syncToolInstanceDeclarationAST_enterInContext (const cPtr_abstractDeclarationAST * inObject,
                                                                           const GALGAS_functionDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                                           GALGAS_semanticContext & ioArgument_ioContext,
                                                                           GALGAS_declarationDecorationList & ioArgument_ioDecoratedDeclarationList,
                                                                           GALGAS_decoratedRegularRoutineList & /* ioArgument_ioDecoratedRoutineList */,
                                                                           GALGAS_routineListIR & /* ioArgument_ioRoutineListIR */,
                                                                           GALGAS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                                           GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                           GALGAS_globalVariableIRList & /* ioArgument_ioGlobalVariableIRList */,
                                                                           GALGAS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_syncToolInstanceDeclarationAST * object = (const cPtr_syncToolInstanceDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_syncToolInstanceDeclarationAST) ;
  GALGAS_PLMType var_optionalSyncType_4281 ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mProperty_mSyncTypeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_optionalSyncType_4281 = function_voidType (inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 93)) ;
  }else if (kBoolFalse == test_0) {
    GALGAS_uint joker_4439_2 ; // Joker input parameter
    GALGAS_bool joker_4439_1 ; // Joker input parameter
    ioArgument_ioContext.getter_mTypeMap (HERE).method_searchKey (object->mProperty_mSyncTypeName, var_optionalSyncType_4281, joker_4439_2, joker_4439_1, inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 95)) ;
  }
  GALGAS_semanticTemporariesStruct joker_4676 = GALGAS_semanticTemporariesStruct::constructor_default (SOURCE_FILE ("declaration-global-sync-instance.galgas", 104)) ;
  GALGAS_allocaList joker_4779 = GALGAS_allocaList::constructor_emptyList (SOURCE_FILE ("declaration-global-sync-instance.galgas", 107)) ;
  GALGAS_instructionListIR joker_4806 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("declaration-global-sync-instance.galgas", 108)) ;
  GALGAS_objectIR var_expressionResult_4847 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mSourceExpression.ptr (), function_voidType (inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 99)), GALGAS_routineAttributes::constructor_none (SOURCE_FILE ("declaration-global-sync-instance.galgas", 100)), var_optionalSyncType_4281, ioArgument_ioContext, GALGAS_mode::constructor_bootMode (SOURCE_FILE ("declaration-global-sync-instance.galgas", 103)), joker_4676, ioArgument_ioStaticEntityMap, ioArgument_ioContext.mProperty_mValuedObjectMap, joker_4779, joker_4806, var_expressionResult_4847, inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 98)) ;
  const enumGalgasBool test_1 = extensionGetter_isStatic (var_expressionResult_4847, inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 111)).operator_not (SOURCE_FILE ("declaration-global-sync-instance.galgas", 111)).boolEnum () ;
  if (kBoolTrue == test_1) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (object->mProperty_mSyncInstanceName.getter_location (SOURCE_FILE ("declaration-global-sync-instance.galgas", 112)), GALGAS_string ("source expression cannot be statically computed"), fixItArray2  COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 112)) ;
  }
  GALGAS_objectIR var_result_5037 = function_checkAssignmentCompatibility (var_expressionResult_4847, var_optionalSyncType_4281, object->mProperty_mSyncInstanceName.getter_location (HERE), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 115)) ;
  {
  ioArgument_ioContext.mProperty_mGlobalSyncInstanceMap.setter_insertKey (object->mProperty_mSyncInstanceName, extensionGetter_type (var_result_5037, inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 124)), var_result_5037, inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 122)) ;
  }
  const enumGalgasBool test_3 = extensionGetter_type (var_result_5037, inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 128)).getter_kind (HERE).getter_isSyncTool (SOURCE_FILE ("declaration-global-sync-instance.galgas", 128)).operator_not (SOURCE_FILE ("declaration-global-sync-instance.galgas", 128)).boolEnum () ;
  if (kBoolTrue == test_3) {
    TC_Array <C_FixItDescription> fixItArray4 ;
    inCompiler->emitSemanticError (object->mProperty_mSyncInstanceName.getter_location (SOURCE_FILE ("declaration-global-sync-instance.galgas", 129)), GALGAS_string ("the type is not a synchronization tool type"), fixItArray4  COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 129)) ;
  }
  {
  extensionSetter_insertGlobalSyncInstance (ioArgument_ioContext.mProperty_mValuedObjectMap, object->mProperty_mSyncInstanceName, extensionGetter_type (var_result_5037, inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 132)), inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 132)) ;
  }
  ioArgument_ioDecoratedDeclarationList.addAssign_operation (GALGAS_decoratedSyncInstance::constructor_new (object->mProperty_mSyncInstanceName, var_result_5037  COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 134))  COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 134)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_syncToolInstanceDeclarationAST_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_syncToolInstanceDeclarationAST.mSlotID,
                                       extensionMethod_syncToolInstanceDeclarationAST_enterInContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_syncToolInstanceDeclarationAST_enterInContext (defineExtensionMethod_syncToolInstanceDeclarationAST_enterInContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                        Overriding extension method '@decoratedSyncInstance semanticAnalysis'                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_decoratedSyncInstance_semanticAnalysis (const cPtr_abstractDecoratedDeclaration * inObject,
                                                                    const GALGAS_semanticContext /* constinArgument_inContext */,
                                                                    GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                    GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_decoratedSyncInstance * object = (const cPtr_decoratedSyncInstance *) inObject ;
  macroValidSharedObject (object, cPtr_decoratedSyncInstance) ;
  {
  ioArgument_ioIntermediateCodeStruct.mProperty_mGlobalSyncInstanceMap.setter_insertKey (object->mProperty_mSyncInstanceName, object->mProperty_mExpressionGeneratedCode, inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 153)) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_decoratedSyncInstance_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_decoratedSyncInstance.mSlotID,
                                         extensionMethod_decoratedSyncInstance_semanticAnalysis) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_decoratedSyncInstance_semanticAnalysis (defineExtensionMethod_decoratedSyncInstance_semanticAnalysis, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                     Overriding extension method '@implementedDriverAST enterInPrecedenceGraph'                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_implementedDriverAST_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                                         GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_implementedDriverAST * object = (const cPtr_implementedDriverAST *) inObject ;
  macroValidSharedObject (object, cPtr_implementedDriverAST) ;
  {
  const GALGAS_implementedDriverAST temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (object->mProperty_mDriverName, temp_0, inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 216)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (object->mProperty_mDriverName, function_typeNameForTypeMapForDriver (object->mProperty_mDriverName, inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 217)) COMMA_SOURCE_FILE ("declaration-driver.galgas", 217)) ;
  }
  cEnumerator_lstringlist enumerator_7566 (object->mProperty_mDriverDependanceList, kENUMERATION_UP) ;
  while (enumerator_7566.hasCurrentObject ()) {
    {
    ioArgument_ioGraph.setter_addEdge (object->mProperty_mDriverName, enumerator_7566.current_mValue (HERE) COMMA_SOURCE_FILE ("declaration-driver.galgas", 219)) ;
    }
    enumerator_7566.gotoNextObject () ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_implementedDriverAST_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_implementedDriverAST.mSlotID,
                                               extensionMethod_implementedDriverAST_enterInPrecedenceGraph) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_implementedDriverAST_enterInPrecedenceGraph (defineExtensionMethod_implementedDriverAST_enterInPrecedenceGraph, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//               Overriding extension getter '@implementedDriverAST keyRepresentationForErrorSignaling'                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string extensionGetter_implementedDriverAST_keyRepresentationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  const cPtr_implementedDriverAST * object = (const cPtr_implementedDriverAST *) inObject ;
  macroValidSharedObject (object, cPtr_implementedDriverAST) ;
  result_outRepresentation = GALGAS_string ("driver ").add_operation (object->mProperty_mDriverName.getter_string (SOURCE_FILE ("declaration-driver.galgas", 226)), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 226)) ;
//---
  return result_outRepresentation ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_implementedDriverAST_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_implementedDriverAST.mSlotID,
                                                           extensionGetter_implementedDriverAST_keyRepresentationForErrorSignaling) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_implementedDriverAST_keyRepresentationForErrorSignaling (defineExtensionGetter_implementedDriverAST_keyRepresentationForErrorSignaling, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                    Overriding extension getter '@implementedDriverAST locationForErrorSignaling'                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_location extensionGetter_implementedDriverAST_locationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                       C_Compiler * /* inCompiler */
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_outLocation ; // Returned variable
  const cPtr_implementedDriverAST * object = (const cPtr_implementedDriverAST *) inObject ;
  macroValidSharedObject (object, cPtr_implementedDriverAST) ;
  result_outLocation = object->mProperty_mDriverName.getter_location (HERE) ;
//---
  return result_outLocation ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_implementedDriverAST_locationForErrorSignaling (void) {
  enterExtensionGetter_locationForErrorSignaling (kTypeDescriptor_GALGAS_implementedDriverAST.mSlotID,
                                                  extensionGetter_implementedDriverAST_locationForErrorSignaling) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_implementedDriverAST_locationForErrorSignaling (defineExtensionGetter_implementedDriverAST_locationForErrorSignaling, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                       Function 'typeNameForTypeMapForDriver'                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring function_typeNameForTypeMapForDriver (const GALGAS_lstring & constinArgument_inDriverName,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  result_result = GALGAS_lstring::constructor_new (GALGAS_string ("driver.").add_operation (constinArgument_inDriverName.getter_string (SOURCE_FILE ("declaration-driver.galgas", 240)), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 240)), constinArgument_inDriverName.getter_location (HERE)  COMMA_SOURCE_FILE ("declaration-driver.galgas", 240)) ;
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function introspection                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const C_galgas_type_descriptor * functionArgs_typeNameForTypeMapForDriver [2] = {
  & kTypeDescriptor_GALGAS_lstring,
  NULL
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_object functionWithGenericHeader_typeNameForTypeMapForDriver (C_Compiler * inCompiler,
                                                                            const cObjectArray & inEffectiveParameterArray,
                                                                            const GALGAS_location & /* inErrorLocation */
                                                                            COMMA_LOCATION_ARGS) {
  const GALGAS_lstring operand0 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  return function_typeNameForTypeMapForDriver (operand0,
                                               inCompiler
                                               COMMA_THERE).getter_object (THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_galgas_function_descriptor functionDescriptor_typeNameForTypeMapForDriver ("typeNameForTypeMapForDriver",
                                                                             functionWithGenericHeader_typeNameForTypeMapForDriver,
                                                                             & kTypeDescriptor_GALGAS_lstring,
                                                                             1,
                                                                             functionArgs_typeNameForTypeMapForDriver) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                       Function 'plmTypeSpecificNameForDriver'                                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring function_plmTypeSpecificNameForDriver (const GALGAS_lstring & constinArgument_inDriverName,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  result_result = GALGAS_lstring::constructor_new (GALGAS_string ("Driver ").add_operation (constinArgument_inDriverName.getter_string (SOURCE_FILE ("declaration-driver.galgas", 246)), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 246)), constinArgument_inDriverName.getter_location (HERE)  COMMA_SOURCE_FILE ("declaration-driver.galgas", 246)) ;
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function introspection                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const C_galgas_type_descriptor * functionArgs_plmTypeSpecificNameForDriver [2] = {
  & kTypeDescriptor_GALGAS_lstring,
  NULL
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_object functionWithGenericHeader_plmTypeSpecificNameForDriver (C_Compiler * inCompiler,
                                                                             const cObjectArray & inEffectiveParameterArray,
                                                                             const GALGAS_location & /* inErrorLocation */
                                                                             COMMA_LOCATION_ARGS) {
  const GALGAS_lstring operand0 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  return function_plmTypeSpecificNameForDriver (operand0,
                                                inCompiler
                                                COMMA_THERE).getter_object (THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_galgas_function_descriptor functionDescriptor_plmTypeSpecificNameForDriver ("plmTypeSpecificNameForDriver",
                                                                              functionWithGenericHeader_plmTypeSpecificNameForDriver,
                                                                              & kTypeDescriptor_GALGAS_lstring,
                                                                              1,
                                                                              functionArgs_plmTypeSpecificNameForDriver) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                          Function 'llvmDriverNameFromName'                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring function_llvmDriverNameFromName (const GALGAS_lstring & constinArgument_inDriverName,
                                                C_Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  result_result = GALGAS_lstring::constructor_new (GALGAS_string ("driver$").add_operation (constinArgument_inDriverName.getter_string (SOURCE_FILE ("declaration-driver.galgas", 252)), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 252)), constinArgument_inDriverName.getter_location (HERE)  COMMA_SOURCE_FILE ("declaration-driver.galgas", 252)) ;
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function introspection                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const C_galgas_type_descriptor * functionArgs_llvmDriverNameFromName [2] = {
  & kTypeDescriptor_GALGAS_lstring,
  NULL
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_object functionWithGenericHeader_llvmDriverNameFromName (C_Compiler * inCompiler,
                                                                       const cObjectArray & inEffectiveParameterArray,
                                                                       const GALGAS_location & /* inErrorLocation */
                                                                       COMMA_LOCATION_ARGS) {
  const GALGAS_lstring operand0 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  return function_llvmDriverNameFromName (operand0,
                                          inCompiler
                                          COMMA_THERE).getter_object (THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_galgas_function_descriptor functionDescriptor_llvmDriverNameFromName ("llvmDriverNameFromName",
                                                                        functionWithGenericHeader_llvmDriverNameFromName,
                                                                        & kTypeDescriptor_GALGAS_lstring,
                                                                        1,
                                                                        functionArgs_llvmDriverNameFromName) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                      Function 'llvmBootRoutineNameFromDriver'                                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring function_llvmBootRoutineNameFromDriver (const GALGAS_lstring & constinArgument_inDriverName,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  result_result = GALGAS_lstring::constructor_new (GALGAS_string ("boot.").add_operation (constinArgument_inDriverName.getter_string (SOURCE_FILE ("declaration-driver.galgas", 258)), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 258)), constinArgument_inDriverName.getter_location (HERE)  COMMA_SOURCE_FILE ("declaration-driver.galgas", 258)) ;
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function introspection                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const C_galgas_type_descriptor * functionArgs_llvmBootRoutineNameFromDriver [2] = {
  & kTypeDescriptor_GALGAS_lstring,
  NULL
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_object functionWithGenericHeader_llvmBootRoutineNameFromDriver (C_Compiler * inCompiler,
                                                                              const cObjectArray & inEffectiveParameterArray,
                                                                              const GALGAS_location & /* inErrorLocation */
                                                                              COMMA_LOCATION_ARGS) {
  const GALGAS_lstring operand0 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  return function_llvmBootRoutineNameFromDriver (operand0,
                                                 inCompiler
                                                 COMMA_THERE).getter_object (THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_galgas_function_descriptor functionDescriptor_llvmBootRoutineNameFromDriver ("llvmBootRoutineNameFromDriver",
                                                                               functionWithGenericHeader_llvmBootRoutineNameFromDriver,
                                                                               & kTypeDescriptor_GALGAS_lstring,
                                                                               1,
                                                                               functionArgs_llvmBootRoutineNameFromDriver) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                     Function 'llvmStartupRoutineNameFromDriver'                                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring function_llvmStartupRoutineNameFromDriver (const GALGAS_lstring & constinArgument_inDriverName,
                                                          C_Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  result_result = GALGAS_lstring::constructor_new (GALGAS_string ("startup.").add_operation (constinArgument_inDriverName.getter_string (SOURCE_FILE ("declaration-driver.galgas", 264)), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 264)), constinArgument_inDriverName.getter_location (HERE)  COMMA_SOURCE_FILE ("declaration-driver.galgas", 264)) ;
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function introspection                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const C_galgas_type_descriptor * functionArgs_llvmStartupRoutineNameFromDriver [2] = {
  & kTypeDescriptor_GALGAS_lstring,
  NULL
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_object functionWithGenericHeader_llvmStartupRoutineNameFromDriver (C_Compiler * inCompiler,
                                                                                 const cObjectArray & inEffectiveParameterArray,
                                                                                 const GALGAS_location & /* inErrorLocation */
                                                                                 COMMA_LOCATION_ARGS) {
  const GALGAS_lstring operand0 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  return function_llvmStartupRoutineNameFromDriver (operand0,
                                                    inCompiler
                                                    COMMA_THERE).getter_object (THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_galgas_function_descriptor functionDescriptor_llvmStartupRoutineNameFromDriver ("llvmStartupRoutineNameFromDriver",
                                                                                  functionWithGenericHeader_llvmStartupRoutineNameFromDriver,
                                                                                  & kTypeDescriptor_GALGAS_lstring,
                                                                                  1,
                                                                                  functionArgs_llvmStartupRoutineNameFromDriver) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                           Routine 'retainRequiredDrivers'                                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_retainRequiredDrivers (GALGAS_ast & ioArgument_ioAST,
                                    C_Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstringlist var_driverWithNoDependenceList_10833 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("declaration-driver.galgas", 289)) ;
  cEnumerator_driverDeclarationListAST enumerator_10893 (ioArgument_ioAST.getter_mDriverDeclarationListAST (HERE), kENUMERATION_UP) ;
  while (enumerator_10893.hasCurrentObject ()) {
    const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_10893.current_mDriver (HERE).getter_mDriverDependanceList (HERE).getter_length (SOURCE_FILE ("declaration-driver.galgas", 291)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_0) {
      var_driverWithNoDependenceList_10833.addAssign_operation (enumerator_10893.current_mDriver (HERE).getter_mDriverName (HERE)  COMMA_SOURCE_FILE ("declaration-driver.galgas", 292)) ;
    }
    enumerator_10893.gotoNextObject () ;
  }
  const enumGalgasBool test_1 = GALGAS_bool (kIsStrictSup, var_driverWithNoDependenceList_10833.getter_length (SOURCE_FILE ("declaration-driver.galgas", 295)).objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
  if (kBoolTrue == test_1) {
    cEnumerator_lstringlist enumerator_11135 (var_driverWithNoDependenceList_10833, kENUMERATION_UP) ;
    while (enumerator_11135.hasCurrentObject ()) {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (enumerator_11135.current_mValue (HERE).getter_location (SOURCE_FILE ("declaration-driver.galgas", 297)), GALGAS_string ("almost one driver can have no dependence"), fixItArray2  COMMA_SOURCE_FILE ("declaration-driver.galgas", 297)) ;
      enumerator_11135.gotoNextObject () ;
    }
  }
  GALGAS_instanciedDriverMap var_instanciedDriverMap_11296 = GALGAS_instanciedDriverMap::constructor_emptyMap (SOURCE_FILE ("declaration-driver.galgas", 301)) ;
  cEnumerator_driverInstanciationListAST enumerator_11357 (ioArgument_ioAST.getter_mRequiredDriverListAST (HERE), kENUMERATION_UP) ;
  while (enumerator_11357.hasCurrentObject ()) {
    GALGAS_driverInstanciationArgumentMap var_driverInstanciationArgumentMap_11428 = GALGAS_driverInstanciationArgumentMap::constructor_emptyMap (SOURCE_FILE ("declaration-driver.galgas", 303)) ;
    cEnumerator_driverInstanciationArgumentListAST enumerator_11472 (enumerator_11357.current_mDriverInstanciationArgumentList (HERE), kENUMERATION_UP) ;
    while (enumerator_11472.hasCurrentObject ()) {
      {
      var_driverInstanciationArgumentMap_11428.setter_insertKey (enumerator_11472.current_mSelector (HERE), enumerator_11472.current_mExpression (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 305)) ;
      }
      enumerator_11472.gotoNextObject () ;
    }
    {
    var_instanciedDriverMap_11296.setter_insertKey (enumerator_11357.current_mDriverName (HERE), var_driverInstanciationArgumentMap_11428, inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 307)) ;
    }
    enumerator_11357.gotoNextObject () ;
  }
  GALGAS_stringset var_validDriverNames_11749 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("declaration-driver.galgas", 310)) ;
  cEnumerator_driverDeclarationListAST enumerator_11864 (ioArgument_ioAST.getter_mDriverDeclarationListAST (HERE), kENUMERATION_UP) ;
  while (enumerator_11864.hasCurrentObject ()) {
    var_validDriverNames_11749.addAssign_operation (enumerator_11864.current_mDriver (HERE).getter_mDriverName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("declaration-driver.galgas", 312)) ;
    GALGAS_bool var_driverIsInstancied_11950 = var_instanciedDriverMap_11296.getter_hasKey (enumerator_11864.current_mDriver (HERE).getter_mDriverName (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("declaration-driver.galgas", 313)) ;
    GALGAS_structurePropertyListAST var_driverPropertyListAST_12113 = GALGAS_structurePropertyListAST::constructor_emptyList (SOURCE_FILE ("declaration-driver.galgas", 315)) ;
    const enumGalgasBool test_3 = var_driverIsInstancied_11950.boolEnum () ;
    if (kBoolTrue == test_3) {
      GALGAS_driverInstanciationArgumentMap var_driverInstanciationArgumentMap_12247 ;
      var_instanciedDriverMap_11296.method_searchKey (enumerator_11864.current_mDriver (HERE).getter_mDriverName (HERE), var_driverInstanciationArgumentMap_12247, inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 317)) ;
      GALGAS_stringset var_validArgumentSet_12342 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("declaration-driver.galgas", 319)) ;
      cEnumerator_driverPropertyListAST enumerator_12489 (enumerator_11864.current_mDriver (HERE).getter_mDriverPropertyListAST (HERE), kENUMERATION_UP) ;
      while (enumerator_12489.hasCurrentObject ()) {
        GALGAS_expressionAST var_initExpression_12530 ;
        switch (enumerator_12489.current_mOptionalExpression (HERE).enumValue ()) {
        case GALGAS_structurePropertyInitOptionalExpressionAST::kNotBuilt:
          break ;
        case GALGAS_structurePropertyInitOptionalExpressionAST::kEnum_noExpression:
          {
            var_driverInstanciationArgumentMap_12247.method_searchKey (enumerator_12489.current_mPropertyName (HERE), var_initExpression_12530, inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 324)) ;
            var_validArgumentSet_12342.addAssign_operation (enumerator_12489.current_mPropertyName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("declaration-driver.galgas", 325)) ;
          }
          break ;
        case GALGAS_structurePropertyInitOptionalExpressionAST::kEnum_expression:
          {
            const cEnumAssociatedValues_structurePropertyInitOptionalExpressionAST_expression * extractPtr_12808 = (const cEnumAssociatedValues_structurePropertyInitOptionalExpressionAST_expression *) (enumerator_12489.current_mOptionalExpression (HERE).unsafePointer ()) ;
            const GALGAS_expressionAST extractedValue_expression = extractPtr_12808->mAssociatedValue0 ;
            var_initExpression_12530 = extractedValue_expression ;
          }
          break ;
        }
        var_driverPropertyListAST_12113.addAssign_operation (enumerator_12489.current_mPropertyName (HERE), enumerator_12489.current_mPropertyAttributeList (HERE), enumerator_12489.current_mIsConstant (HERE), GALGAS_bool (false), enumerator_12489.current_mTypeName (HERE), GALGAS_structurePropertyInitOptionalExpressionAST::constructor_expression (var_initExpression_12530  COMMA_SOURCE_FILE ("declaration-driver.galgas", 335)), GALGAS_bool (true)  COMMA_SOURCE_FILE ("declaration-driver.galgas", 329)) ;
        enumerator_12489.gotoNextObject () ;
      }
      cEnumerator_stringset enumerator_13239 (var_driverInstanciationArgumentMap_12247.getter_keySet (SOURCE_FILE ("declaration-driver.galgas", 339)).substract_operation (var_validArgumentSet_12342, inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 339)), kENUMERATION_UP) ;
      while (enumerator_13239.hasCurrentObject ()) {
        TC_Array <C_FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (var_driverInstanciationArgumentMap_12247.getter_locationForKey (enumerator_13239.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 340)), GALGAS_string ("invalid selector"), fixItArray4  COMMA_SOURCE_FILE ("declaration-driver.galgas", 340)) ;
        enumerator_13239.gotoNextObject () ;
      }
    }
    ioArgument_ioAST.mProperty_mDeclarationListAST.addAssign_operation (GALGAS_structureDeclarationAST::constructor_new (function_typeNameForTypeMapForDriver (enumerator_11864.current_mDriver (HERE).getter_mDriverName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 345)), function_plmTypeSpecificNameForDriver (enumerator_11864.current_mDriver (HERE).getter_mDriverName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 346)), function_llvmDriverNameFromName (enumerator_11864.current_mDriver (HERE).getter_mDriverName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 347)), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("declaration-driver.galgas", 348)), GALGAS_bool (false), var_driverPropertyListAST_12113, enumerator_11864.current_mDriver (HERE).getter_mDriverFunctionDeclarationListAST (HERE), enumerator_11864.current_mDriver (HERE).getter_mDriverSystemRoutineListAST (HERE), enumerator_11864.current_mDriver (HERE).getter_mDriverGuardListAST (HERE), GALGAS_bool (false)  COMMA_SOURCE_FILE ("declaration-driver.galgas", 344))  COMMA_SOURCE_FILE ("declaration-driver.galgas", 344)) ;
    ioArgument_ioAST.mProperty_mDeclarationListAST.addAssign_operation (GALGAS_implementedDriverAST::constructor_new (enumerator_11864.current_mDriver (HERE).getter_mDriverName (HERE), enumerator_11864.current_mDriver (HERE).getter_mDriverDependanceList (HERE), var_driverIsInstancied_11950, enumerator_11864.current_mDriver (HERE).getter_mBootLocation (HERE), enumerator_11864.current_mDriver (HERE).getter_mBootInstructionList (HERE), enumerator_11864.current_mDriver (HERE).getter_mBootEndLocation (HERE), enumerator_11864.current_mDriver (HERE).getter_mStartupLocation (HERE), enumerator_11864.current_mDriver (HERE).getter_mStartupInstructionList (HERE), enumerator_11864.current_mDriver (HERE).getter_mStartupEndLocation (HERE)  COMMA_SOURCE_FILE ("declaration-driver.galgas", 356))  COMMA_SOURCE_FILE ("declaration-driver.galgas", 356)) ;
    enumerator_11864.gotoNextObject () ;
  }
  ioArgument_ioAST.mProperty_mDriverDeclarationListAST = GALGAS_driverDeclarationListAST::constructor_emptyList (SOURCE_FILE ("declaration-driver.galgas", 368)) ;
  cEnumerator_stringset enumerator_14479 (var_instanciedDriverMap_11296.getter_keySet (SOURCE_FILE ("declaration-driver.galgas", 370)).substract_operation (var_validDriverNames_11749, inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 370)), kENUMERATION_UP) ;
  while (enumerator_14479.hasCurrentObject ()) {
    TC_Array <C_FixItDescription> fixItArray5 ;
    inCompiler->emitSemanticError (var_instanciedDriverMap_11296.getter_locationForKey (enumerator_14479.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 371)), GALGAS_string ("undefined driver"), fixItArray5  COMMA_SOURCE_FILE ("declaration-driver.galgas", 371)) ;
    enumerator_14479.gotoNextObject () ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                         Overriding extension method '@implementedDriverAST enterInContext'                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_implementedDriverAST_enterInContext (const cPtr_abstractDeclarationAST * inObject,
                                                                 const GALGAS_functionDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                                 GALGAS_semanticContext & ioArgument_ioContext,
                                                                 GALGAS_declarationDecorationList & ioArgument_ioDecoratedDeclarationList,
                                                                 GALGAS_decoratedRegularRoutineList & ioArgument_ioDecoratedRoutineList,
                                                                 GALGAS_routineListIR & /* ioArgument_ioRoutineListIR */,
                                                                 GALGAS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                                 GALGAS_staticEntityMap & /* ioArgument_ioStaticEntityMap */,
                                                                 GALGAS_globalVariableIRList & /* ioArgument_ioGlobalVariableIRList */,
                                                                 GALGAS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_implementedDriverAST * object = (const cPtr_implementedDriverAST *) inObject ;
  macroValidSharedObject (object, cPtr_implementedDriverAST) ;
  GALGAS_PLMType var_driverType_15695 ;
  GALGAS_uint joker_15701_2 ; // Joker input parameter
  GALGAS_bool joker_15701_1 ; // Joker input parameter
  ioArgument_ioContext.getter_mTypeMap (HERE).method_searchKey (function_typeNameForTypeMapForDriver (object->mProperty_mDriverName, inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 391)), var_driverType_15695, joker_15701_2, joker_15701_1, inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 390)) ;
  {
  extensionSetter_insertDriver (ioArgument_ioContext.mProperty_mValuedObjectMap, object->mProperty_mDriverName, object->mProperty_mIsInstancied, var_driverType_15695, inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 395)) ;
  }
  ioArgument_ioDecoratedDeclarationList.addAssign_operation (GALGAS_decoratedRequiredDriver::constructor_new (object->mProperty_mDriverName  COMMA_SOURCE_FILE ("declaration-driver.galgas", 397))  COMMA_SOURCE_FILE ("declaration-driver.galgas", 397)) ;
  ioArgument_ioDecoratedRoutineList.addAssign_operation (function_typeNameForTypeMapForDriver (object->mProperty_mDriverName, inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 400)), GALGAS_mode::constructor_bootMode (SOURCE_FILE ("declaration-driver.galgas", 401)), GALGAS_bool (true), GALGAS_routineKind::constructor_function (GALGAS_mode::constructor_bootMode (SOURCE_FILE ("declaration-driver.galgas", 403))  COMMA_SOURCE_FILE ("declaration-driver.galgas", 403)), GALGAS_bool (true), GALGAS_bool (false), GALGAS_routineAttributes::constructor_directPropertyAccess (SOURCE_FILE ("declaration-driver.galgas", 406)), function_llvmBootRoutineNameFromDriver (object->mProperty_mDriverName, inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 407)), GALGAS_routineFormalArgumentListAST::constructor_emptyList (SOURCE_FILE ("declaration-driver.galgas", 408)), object->mProperty_mBootInstructionList, object->mProperty_mBootEndLocation, GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), object->mProperty_mBootLocation  COMMA_SOURCE_FILE ("declaration-driver.galgas", 411))  COMMA_SOURCE_FILE ("declaration-driver.galgas", 399)) ;
  ioArgument_ioDecoratedRoutineList.addAssign_operation (function_typeNameForTypeMapForDriver (object->mProperty_mDriverName, inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 414)), GALGAS_mode::constructor_startupMode (SOURCE_FILE ("declaration-driver.galgas", 415)), GALGAS_bool (true), GALGAS_routineKind::constructor_function (GALGAS_mode::constructor_startupMode (SOURCE_FILE ("declaration-driver.galgas", 417))  COMMA_SOURCE_FILE ("declaration-driver.galgas", 417)), GALGAS_bool (true), GALGAS_bool (false), GALGAS_routineAttributes::constructor_directPropertyAccess (SOURCE_FILE ("declaration-driver.galgas", 420)), function_llvmStartupRoutineNameFromDriver (object->mProperty_mDriverName, inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 421)), GALGAS_routineFormalArgumentListAST::constructor_emptyList (SOURCE_FILE ("declaration-driver.galgas", 422)), object->mProperty_mStartupInstructionList, object->mProperty_mStartupEndLocation, GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), object->mProperty_mStartupLocation  COMMA_SOURCE_FILE ("declaration-driver.galgas", 425))  COMMA_SOURCE_FILE ("declaration-driver.galgas", 413)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_implementedDriverAST_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_implementedDriverAST.mSlotID,
                                       extensionMethod_implementedDriverAST_enterInContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_implementedDriverAST_enterInContext (defineExtensionMethod_implementedDriverAST_enterInContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                       Overriding extension method '@decoratedRequiredDriver semanticAnalysis'                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_decoratedRequiredDriver_semanticAnalysis (const cPtr_abstractDecoratedDeclaration * inObject,
                                                                      const GALGAS_semanticContext constinArgument_inContext,
                                                                      GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                      GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_decoratedRequiredDriver * object = (const cPtr_decoratedRequiredDriver *) inObject ;
  macroValidSharedObject (object, cPtr_decoratedRequiredDriver) ;
  GALGAS_PLMType var_driverType_17861 ;
  GALGAS_uint joker_17867_2 ; // Joker input parameter
  GALGAS_bool joker_17867_1 ; // Joker input parameter
  constinArgument_inContext.getter_mTypeMap (HERE).method_searchKey (function_typeNameForTypeMapForDriver (object->mProperty_mDriverName, inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 444)), var_driverType_17861, joker_17867_2, joker_17867_1, inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 443)) ;
  GALGAS_constructorMap var_constructorMap_17894 = var_driverType_17861.getter_constructorMap (HERE) ;
  GALGAS_constructorValue var_constructorValue_18011 ;
  GALGAS_constructorSignature joker_17988 ; // Joker input parameter
  var_constructorMap_17894.method_searchKey (GALGAS_lstring::constructor_new (GALGAS_string ("()"), object->mProperty_mDriverName.getter_location (HERE)  COMMA_SOURCE_FILE ("declaration-driver.galgas", 449)), joker_17988, var_constructorValue_18011, inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 449)) ;
  GALGAS_sortedOperandIRList var_sortedOperandList_18083 ;
  var_constructorValue_18011.method_structure (var_sortedOperandList_18083, inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 450)) ;
  GALGAS_operandIRList var_initialValueList_18118 = GALGAS_operandIRList::constructor_emptyList (SOURCE_FILE ("declaration-driver.galgas", 451)) ;
  cEnumerator_sortedOperandIRList enumerator_18167 (var_sortedOperandList_18083, kENUMERATION_UP) ;
  while (enumerator_18167.hasCurrentObject ()) {
    var_initialValueList_18118.addAssign_operation (enumerator_18167.current_mOperand (HERE)  COMMA_SOURCE_FILE ("declaration-driver.galgas", 453)) ;
    enumerator_18167.gotoNextObject () ;
  }
  ioArgument_ioIntermediateCodeStruct.mProperty_mDriverList.addAssign_operation (object->mProperty_mDriverName, var_driverType_17861, var_initialValueList_18118  COMMA_SOURCE_FILE ("declaration-driver.galgas", 455)) ;
  ioArgument_ioTemporaries.mProperty_mInitializedDriverSet.addAssign_operation (object->mProperty_mDriverName.getter_string (HERE)  COMMA_SOURCE_FILE ("declaration-driver.galgas", 460)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_decoratedRequiredDriver_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_decoratedRequiredDriver.mSlotID,
                                         extensionMethod_decoratedRequiredDriver_semanticAnalysis) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_decoratedRequiredDriver_semanticAnalysis (defineExtensionMethod_decoratedRequiredDriver_semanticAnalysis, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                         Overriding extension method '@staticListAST enterInPrecedenceGraph'                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_staticListAST_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                                  GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_staticListAST * object = (const cPtr_staticListAST *) inObject ;
  macroValidSharedObject (object, cPtr_staticListAST) ;
  {
  const GALGAS_staticListAST temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (object->mProperty_mStaticListName, temp_0, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 163)) ;
  }
  cEnumerator_staticListPropertyListAST enumerator_6081 (object->mProperty_mPropertyList, kENUMERATION_UP) ;
  while (enumerator_6081.hasCurrentObject ()) {
    switch (enumerator_6081.current_mPropertyType (HERE).enumValue ()) {
    case GALGAS_staticListPropertyTypeAST::kNotBuilt:
      break ;
    case GALGAS_staticListPropertyTypeAST::kEnum_valueType:
      {
        const cEnumAssociatedValues_staticListPropertyTypeAST_valueType * extractPtr_6210 = (const cEnumAssociatedValues_staticListPropertyTypeAST_valueType *) (enumerator_6081.current_mPropertyType (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_propertyTypeName = extractPtr_6210->mAssociatedValue0 ;
        {
        ioArgument_ioGraph.setter_addEdge (object->mProperty_mStaticListName, extractedValue_propertyTypeName COMMA_SOURCE_FILE ("declaration-static-list.galgas", 168)) ;
        }
      }
      break ;
    case GALGAS_staticListPropertyTypeAST::kEnum_function:
      {
        const cEnumAssociatedValues_staticListPropertyTypeAST_function * extractPtr_6523 = (const cEnumAssociatedValues_staticListPropertyTypeAST_function *) (enumerator_6081.current_mPropertyType (HERE).unsafePointer ()) ;
        const GALGAS_routineFormalArgumentListAST extractedValue_formalArgs = extractPtr_6523->mAssociatedValue2 ;
        const GALGAS_lstring extractedValue_returnType = extractPtr_6523->mAssociatedValue3 ;
        cEnumerator_routineFormalArgumentListAST enumerator_6352 (extractedValue_formalArgs, kENUMERATION_UP) ;
        while (enumerator_6352.hasCurrentObject ()) {
          {
          ioArgument_ioGraph.setter_noteNode (enumerator_6352.current_mFormalArgumentTypeName (HERE) COMMA_SOURCE_FILE ("declaration-static-list.galgas", 171)) ;
          }
          enumerator_6352.gotoNextObject () ;
        }
        const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, extractedValue_returnType.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_1) {
          {
          ioArgument_ioGraph.setter_addEdge (object->mProperty_mStaticListName, extractedValue_returnType COMMA_SOURCE_FILE ("declaration-static-list.galgas", 174)) ;
          }
        }
      }
      break ;
    }
    enumerator_6081.gotoNextObject () ;
  }
  cEnumerator_staticListValueListAST enumerator_6626 (object->mProperty_mValueList, kENUMERATION_UP) ;
  while (enumerator_6626.hasCurrentObject ()) {
    cEnumerator_extendStaticListElementListAST enumerator_6658 (enumerator_6626.current_mExpressions (HERE), kENUMERATION_UP) ;
    while (enumerator_6658.hasCurrentObject ()) {
      switch (enumerator_6658.current_mExpression (HERE).enumValue ()) {
      case GALGAS_extendStaticListExpressionAST::kNotBuilt:
        break ;
      case GALGAS_extendStaticListExpressionAST::kEnum_expression:
        {
          const cEnumAssociatedValues_extendStaticListExpressionAST_expression * extractPtr_6805 = (const cEnumAssociatedValues_extendStaticListExpressionAST_expression *) (enumerator_6658.current_mExpression (HERE).unsafePointer ()) ;
          const GALGAS_expressionAST extractedValue_exp = extractPtr_6805->mAssociatedValue0 ;
          callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) extractedValue_exp.ptr (), object->mProperty_mStaticListName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 183)) ;
        }
        break ;
      case GALGAS_extendStaticListExpressionAST::kEnum_function:
        {
          const cEnumAssociatedValues_extendStaticListExpressionAST_function * extractPtr_6999 = (const cEnumAssociatedValues_extendStaticListExpressionAST_function *) (enumerator_6658.current_mExpression (HERE).unsafePointer ()) ;
          const GALGAS_routineFormalArgumentListAST extractedValue_formalArgs = extractPtr_6999->mAssociatedValue1 ;
          cEnumerator_routineFormalArgumentListAST enumerator_6929 (extractedValue_formalArgs, kENUMERATION_UP) ;
          while (enumerator_6929.hasCurrentObject ()) {
            {
            ioArgument_ioGraph.setter_noteNode (enumerator_6929.current_mFormalArgumentTypeName (HERE) COMMA_SOURCE_FILE ("declaration-static-list.galgas", 186)) ;
            }
            enumerator_6929.gotoNextObject () ;
          }
        }
        break ;
      }
      enumerator_6658.gotoNextObject () ;
    }
    enumerator_6626.gotoNextObject () ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_staticListAST_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_staticListAST.mSlotID,
                                               extensionMethod_staticListAST_enterInPrecedenceGraph) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_staticListAST_enterInPrecedenceGraph (defineExtensionMethod_staticListAST_enterInPrecedenceGraph, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                       Overriding extension getter '@staticListAST locationForErrorSignaling'                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_location extensionGetter_staticListAST_locationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                C_Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_result ; // Returned variable
  const cPtr_staticListAST * object = (const cPtr_staticListAST *) inObject ;
  macroValidSharedObject (object, cPtr_staticListAST) ;
  result_result = object->mProperty_mStaticListName.getter_location (HERE) ;
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_staticListAST_locationForErrorSignaling (void) {
  enterExtensionGetter_locationForErrorSignaling (kTypeDescriptor_GALGAS_staticListAST.mSlotID,
                                                  extensionGetter_staticListAST_locationForErrorSignaling) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_staticListAST_locationForErrorSignaling (defineExtensionGetter_staticListAST_locationForErrorSignaling, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                   Overriding extension getter '@staticListAST keyRepresentationForErrorSignaling'                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string extensionGetter_staticListAST_keyRepresentationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_staticListAST * object = (const cPtr_staticListAST *) inObject ;
  macroValidSharedObject (object, cPtr_staticListAST) ;
  result_result = GALGAS_string ("staticlist ").add_operation (object->mProperty_mStaticListName.getter_string (SOURCE_FILE ("declaration-static-list.galgas", 202)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 202)) ;
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_staticListAST_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_staticListAST.mSlotID,
                                                           extensionGetter_staticListAST_keyRepresentationForErrorSignaling) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_staticListAST_keyRepresentationForErrorSignaling (defineExtensionGetter_staticListAST_keyRepresentationForErrorSignaling, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                         Function 'plmNameForStaticListType'                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring function_plmNameForStaticListType (const GALGAS_lstring & constinArgument_inStaticListName,
                                                  C_Compiler * inCompiler
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  result_result = GALGAS_lstring::constructor_new (GALGAS_string ("staticlist ").add_operation (constinArgument_inStaticListName.getter_string (SOURCE_FILE ("declaration-static-list.galgas", 212)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 212)), constinArgument_inStaticListName.getter_location (SOURCE_FILE ("declaration-static-list.galgas", 212))  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 212)) ;
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function introspection                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const C_galgas_type_descriptor * functionArgs_plmNameForStaticListType [2] = {
  & kTypeDescriptor_GALGAS_lstring,
  NULL
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_object functionWithGenericHeader_plmNameForStaticListType (C_Compiler * inCompiler,
                                                                         const cObjectArray & inEffectiveParameterArray,
                                                                         const GALGAS_location & /* inErrorLocation */
                                                                         COMMA_LOCATION_ARGS) {
  const GALGAS_lstring operand0 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  return function_plmNameForStaticListType (operand0,
                                            inCompiler
                                            COMMA_THERE).getter_object (THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_galgas_function_descriptor functionDescriptor_plmNameForStaticListType ("plmNameForStaticListType",
                                                                          functionWithGenericHeader_plmNameForStaticListType,
                                                                          & kTypeDescriptor_GALGAS_lstring,
                                                                          1,
                                                                          functionArgs_plmNameForStaticListType) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        Function 'llvmNameForStaticListType'                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring function_llvmNameForStaticListType (const GALGAS_lstring & constinArgument_inStaticListName,
                                                   C_Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  result_result = GALGAS_lstring::constructor_new (GALGAS_string ("staticlist-").add_operation (constinArgument_inStaticListName.getter_string (SOURCE_FILE ("declaration-static-list.galgas", 218)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 218)), constinArgument_inStaticListName.getter_location (SOURCE_FILE ("declaration-static-list.galgas", 218))  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 218)) ;
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function introspection                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const C_galgas_type_descriptor * functionArgs_llvmNameForStaticListType [2] = {
  & kTypeDescriptor_GALGAS_lstring,
  NULL
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_object functionWithGenericHeader_llvmNameForStaticListType (C_Compiler * inCompiler,
                                                                          const cObjectArray & inEffectiveParameterArray,
                                                                          const GALGAS_location & /* inErrorLocation */
                                                                          COMMA_LOCATION_ARGS) {
  const GALGAS_lstring operand0 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  return function_llvmNameForStaticListType (operand0,
                                             inCompiler
                                             COMMA_THERE).getter_object (THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_galgas_function_descriptor functionDescriptor_llvmNameForStaticListType ("llvmNameForStaticListType",
                                                                           functionWithGenericHeader_llvmNameForStaticListType,
                                                                           & kTypeDescriptor_GALGAS_lstring,
                                                                           1,
                                                                           functionArgs_llvmNameForStaticListType) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                     Function 'plmNameForStaticListElementType'                                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring function_plmNameForStaticListElementType (const GALGAS_lstring & constinArgument_inStaticListName,
                                                         C_Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  result_result = GALGAS_lstring::constructor_new (GALGAS_string ("staticlist element ").add_operation (constinArgument_inStaticListName.getter_string (SOURCE_FILE ("declaration-static-list.galgas", 224)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 224)), constinArgument_inStaticListName.getter_location (SOURCE_FILE ("declaration-static-list.galgas", 224))  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 224)) ;
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function introspection                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const C_galgas_type_descriptor * functionArgs_plmNameForStaticListElementType [2] = {
  & kTypeDescriptor_GALGAS_lstring,
  NULL
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_object functionWithGenericHeader_plmNameForStaticListElementType (C_Compiler * inCompiler,
                                                                                const cObjectArray & inEffectiveParameterArray,
                                                                                const GALGAS_location & /* inErrorLocation */
                                                                                COMMA_LOCATION_ARGS) {
  const GALGAS_lstring operand0 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  return function_plmNameForStaticListElementType (operand0,
                                                   inCompiler
                                                   COMMA_THERE).getter_object (THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_galgas_function_descriptor functionDescriptor_plmNameForStaticListElementType ("plmNameForStaticListElementType",
                                                                                 functionWithGenericHeader_plmNameForStaticListElementType,
                                                                                 & kTypeDescriptor_GALGAS_lstring,
                                                                                 1,
                                                                                 functionArgs_plmNameForStaticListElementType) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                     Function 'llvmNameForStaticListElementType'                                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring function_llvmNameForStaticListElementType (const GALGAS_lstring & constinArgument_inStaticListName,
                                                          C_Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  result_result = GALGAS_lstring::constructor_new (GALGAS_string ("staticlist-element-type-").add_operation (constinArgument_inStaticListName.getter_string (HERE).getter_assemblerRepresentation (SOURCE_FILE ("declaration-static-list.galgas", 230)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 230)), constinArgument_inStaticListName.getter_location (HERE)  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 230)) ;
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function introspection                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const C_galgas_type_descriptor * functionArgs_llvmNameForStaticListElementType [2] = {
  & kTypeDescriptor_GALGAS_lstring,
  NULL
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_object functionWithGenericHeader_llvmNameForStaticListElementType (C_Compiler * inCompiler,
                                                                                 const cObjectArray & inEffectiveParameterArray,
                                                                                 const GALGAS_location & /* inErrorLocation */
                                                                                 COMMA_LOCATION_ARGS) {
  const GALGAS_lstring operand0 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  return function_llvmNameForStaticListElementType (operand0,
                                                    inCompiler
                                                    COMMA_THERE).getter_object (THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_galgas_function_descriptor functionDescriptor_llvmNameForStaticListElementType ("llvmNameForStaticListElementType",
                                                                                  functionWithGenericHeader_llvmNameForStaticListElementType,
                                                                                  & kTypeDescriptor_GALGAS_lstring,
                                                                                  1,
                                                                                  functionArgs_llvmNameForStaticListElementType) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                             Overriding extension method '@staticListAST enterInContext'                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_staticListAST_enterInContext (const cPtr_abstractDeclarationAST * inObject,
                                                          const GALGAS_functionDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                          GALGAS_semanticContext & ioArgument_ioContext,
                                                          GALGAS_declarationDecorationList & ioArgument_ioDecoratedDeclarationList,
                                                          GALGAS_decoratedRegularRoutineList & /* ioArgument_ioDecoratedRoutineList */,
                                                          GALGAS_routineListIR & /* ioArgument_ioRoutineListIR */,
                                                          GALGAS_staticListInitializationMap & ioArgument_ioStaticListValueMap,
                                                          GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                          GALGAS_globalVariableIRList & /* ioArgument_ioGlobalVariableIRList */,
                                                          GALGAS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                          C_Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_staticListAST * object = (const cPtr_staticListAST *) inObject ;
  macroValidSharedObject (object, cPtr_staticListAST) ;
  GALGAS_propertyList var_propertyList_10372 = GALGAS_propertyList::constructor_emptyList (SOURCE_FILE ("declaration-static-list.galgas", 262)) ;
  GALGAS_propertyMap var_propertyMap_10404 = GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("declaration-static-list.galgas", 263)) ;
  GALGAS_stringset var_propertyNameSet_10438 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("declaration-static-list.galgas", 264)) ;
  GALGAS_lstring var_plmElementTypeName_10468 = function_plmNameForStaticListElementType (object->mProperty_mStaticListName, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 265)) ;
  cEnumerator_staticListPropertyListAST enumerator_10659 (object->mProperty_mPropertyList, kENUMERATION_UP) ;
  GALGAS_uint index_10622 ((uint32_t) 0) ;
  while (enumerator_10659.hasCurrentObject ()) {
    switch (enumerator_10659.current_mPropertyType (HERE).enumValue ()) {
    case GALGAS_staticListPropertyTypeAST::kNotBuilt:
      break ;
    case GALGAS_staticListPropertyTypeAST::kEnum_valueType:
      {
        const cEnumAssociatedValues_staticListPropertyTypeAST_valueType * extractPtr_11223 = (const cEnumAssociatedValues_staticListPropertyTypeAST_valueType *) (enumerator_10659.current_mPropertyType (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_propertyTypeName = extractPtr_11223->mAssociatedValue0 ;
        GALGAS_PLMType var_propertyType_10766 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.getter_mTypeMap (HERE), extractedValue_propertyTypeName, inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 270)).getter_type (inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 270)) ;
        const enumGalgasBool test_0 = var_propertyNameSet_10438.getter_hasKey (enumerator_10659.current_mPropertyName (HERE).getter_string (SOURCE_FILE ("declaration-static-list.galgas", 271)) COMMA_SOURCE_FILE ("declaration-static-list.galgas", 271)).boolEnum () ;
        if (kBoolTrue == test_0) {
          TC_Array <C_FixItDescription> fixItArray1 ;
          inCompiler->emitSemanticError (enumerator_10659.current_mPropertyName (HERE).getter_location (SOURCE_FILE ("declaration-static-list.galgas", 272)), GALGAS_string ("duplicated property name"), fixItArray1  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 272)) ;
        }else if (kBoolFalse == test_0) {
          var_propertyNameSet_10438.addAssign_operation (enumerator_10659.current_mPropertyName (HERE).getter_string (SOURCE_FILE ("declaration-static-list.galgas", 274))  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 274)) ;
          var_propertyList_10372.addAssign_operation (enumerator_10659.current_mPropertyName (HERE).getter_string (SOURCE_FILE ("declaration-static-list.galgas", 275)), var_propertyType_10766  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 275)) ;
          {
          var_propertyMap_10404.setter_insertKey (enumerator_10659.current_mPropertyName (HERE), GALGAS_bool (true), GALGAS_propertyAccessKind::constructor_indexed (var_propertyType_10766, index_10622  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 279)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 276)) ;
          }
        }
      }
      break ;
    case GALGAS_staticListPropertyTypeAST::kEnum_function:
      {
        const cEnumAssociatedValues_staticListPropertyTypeAST_function * extractPtr_13075 = (const cEnumAssociatedValues_staticListPropertyTypeAST_function *) (enumerator_10659.current_mPropertyType (HERE).unsafePointer ()) ;
        const GALGAS_mode extractedValue_mode = extractPtr_13075->mAssociatedValue0 ;
        const GALGAS_bool extractedValue_safe = extractPtr_13075->mAssociatedValue1 ;
        const GALGAS_routineFormalArgumentListAST extractedValue_formalArgs = extractPtr_13075->mAssociatedValue2 ;
        const GALGAS_lstring extractedValue_returnTypeName = extractPtr_13075->mAssociatedValue3 ;
        GALGAS_lstring var_routineMangledName_11391 = function_routineMangledNameFromAST (function_llvmNameForStaticListElementType (object->mProperty_mStaticListName, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 285)).getter_string (SOURCE_FILE ("declaration-static-list.galgas", 285)), enumerator_10659.current_mPropertyName (HERE), extractedValue_formalArgs, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 284)) ;
        GALGAS_routineTypedSignature var_signature_11623 ;
        {
        routine_routineSignature (ioArgument_ioContext.mProperty_mTypeMap, extractedValue_formalArgs, var_signature_11623, inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 290)) ;
        }
        GALGAS_unifiedTypeMap_2D_proxy temp_2 ;
        const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, extractedValue_returnTypeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_3) {
          temp_2 = GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-static-list.galgas", 292)) ;
        }else if (kBoolFalse == test_3) {
          temp_2 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.getter_mTypeMap (HERE), extractedValue_returnTypeName, inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 294)) ;
        }
        GALGAS_unifiedTypeMap_2D_proxy var_returnTypeProxy_11672 = temp_2 ;
        GALGAS_routineDescriptor var_descriptor_11844 = GALGAS_routineDescriptor::constructor_new (GALGAS_bool (true), GALGAS_bool (false), enumerator_10659.current_mPropertyName (HERE).getter_string (SOURCE_FILE ("declaration-static-list.galgas", 299)), var_routineMangledName_11391.getter_string (SOURCE_FILE ("declaration-static-list.galgas", 300)), GALGAS_routineKind::constructor_function (extractedValue_mode  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 301)), var_signature_11623, var_returnTypeProxy_11672, GALGAS_bool (true), GALGAS_bool (true), extractedValue_safe  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 296)) ;
        GALGAS_PLMType var_type_12473 = function_functionType (var_descriptor_11844, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 308)) ;
        const enumGalgasBool test_4 = ioArgument_ioContext.getter_mTypeMap (HERE).getter_hasKey (var_routineMangledName_11391.getter_string (SOURCE_FILE ("declaration-static-list.galgas", 309)) COMMA_SOURCE_FILE ("declaration-static-list.galgas", 309)).operator_not (SOURCE_FILE ("declaration-static-list.galgas", 309)).boolEnum () ;
        if (kBoolTrue == test_4) {
          {
          ioArgument_ioContext.mProperty_mTypeMap.setter_insertType (var_routineMangledName_11391, var_type_12473, ioArgument_ioContext.getter_mTypeMap (HERE).getter_count (SOURCE_FILE ("declaration-static-list.galgas", 313)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 310)) ;
          }
        }
        GALGAS_PLMType var_propertyType_12778 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.getter_mTypeMap (HERE), var_routineMangledName_11391, inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 317)).getter_type (inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 317)) ;
        var_propertyList_10372.addAssign_operation (enumerator_10659.current_mPropertyName (HERE).getter_string (SOURCE_FILE ("declaration-static-list.galgas", 318)), var_propertyType_12778  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 318)) ;
        {
        var_propertyMap_10404.setter_insertKey (var_routineMangledName_11391, GALGAS_bool (true), GALGAS_propertyAccessKind::constructor_indexed (var_propertyType_12778, index_10622  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 322)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 319)) ;
        }
      }
      break ;
    }
    enumerator_10659.gotoNextObject () ;
    index_10622.increment_operation (inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 267)) ;
  }
  {
  ioArgument_ioContext.mProperty_mStaticListMap.setter_insertKey (object->mProperty_mStaticListName, var_propertyList_10372, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 326)) ;
  }
  GALGAS_PLMType var_type_13273 = GALGAS_PLMType::constructor_new (var_propertyMap_10404, GALGAS_classConstantMap::constructor_emptyMap (SOURCE_FILE ("declaration-static-list.galgas", 330)), GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("declaration-static-list.galgas", 331)), GALGAS_guardMapForContext::constructor_emptyMap (SOURCE_FILE ("declaration-static-list.galgas", 332)), GALGAS_PLMTypeAttributes::constructor_none (SOURCE_FILE ("declaration-static-list.galgas", 333)), function_plmNameForStaticListElementType (object->mProperty_mStaticListName, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 334)).getter_string (SOURCE_FILE ("declaration-static-list.galgas", 334)), GALGAS_typeKind::constructor_structure (var_propertyList_10372  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 335)), function_llvmNameForStaticListElementType (object->mProperty_mStaticListName, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 336)).getter_string (SOURCE_FILE ("declaration-static-list.galgas", 336))  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 328)) ;
  {
  ioArgument_ioContext.mProperty_mTypeMap.setter_insertType (var_plmElementTypeName_10468, var_type_13273, ioArgument_ioContext.getter_mTypeMap (HERE).getter_count (SOURCE_FILE ("declaration-static-list.galgas", 341)), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 338)) ;
  }
  GALGAS_stringlist var_stringValueList_13878 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("declaration-static-list.galgas", 345)) ;
  cEnumerator_staticListValueListAST enumerator_13909 (object->mProperty_mValueList, kENUMERATION_UP) ;
  while (enumerator_13909.hasCurrentObject ()) {
    const enumGalgasBool test_5 = GALGAS_bool (kIsNotEqual, var_propertyList_10372.getter_length (SOURCE_FILE ("declaration-static-list.galgas", 347)).objectCompare (enumerator_13909.current (HERE).getter_mExpressions (HERE).getter_length (SOURCE_FILE ("declaration-static-list.galgas", 347)))).boolEnum () ;
    if (kBoolTrue == test_5) {
      TC_Array <C_FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (object->mProperty_mStaticListName.getter_location (SOURCE_FILE ("declaration-static-list.galgas", 348)), var_propertyList_10372.getter_length (SOURCE_FILE ("declaration-static-list.galgas", 349)).getter_string (SOURCE_FILE ("declaration-static-list.galgas", 349)).add_operation (GALGAS_string (" expressions required, "), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 349)).add_operation (enumerator_13909.current (HERE).getter_mExpressions (HERE).getter_length (SOURCE_FILE ("declaration-static-list.galgas", 350)).getter_string (SOURCE_FILE ("declaration-static-list.galgas", 350)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 349)).add_operation (GALGAS_string (" provided"), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 350)), fixItArray6  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 348)) ;
    }else if (kBoolFalse == test_5) {
      GALGAS_string var_staticValue_14162 = GALGAS_string ("{") ;
      cEnumerator_extendStaticListElementListAST enumerator_14219 (enumerator_13909.current (HERE).getter_mExpressions (HERE), kENUMERATION_UP) ;
      cEnumerator_propertyList enumerator_14245 (var_propertyList_10372, kENUMERATION_UP) ;
      while (enumerator_14219.hasCurrentObject () && enumerator_14245.hasCurrentObject ()) {
        switch (enumerator_14219.current_mExpression (HERE).enumValue ()) {
        case GALGAS_extendStaticListExpressionAST::kNotBuilt:
          break ;
        case GALGAS_extendStaticListExpressionAST::kEnum_expression:
          {
            const cEnumAssociatedValues_extendStaticListExpressionAST_expression * extractPtr_15748 = (const cEnumAssociatedValues_extendStaticListExpressionAST_expression *) (enumerator_14219.current_mExpression (HERE).unsafePointer ()) ;
            const GALGAS_expressionAST extractedValue_exp = extractPtr_15748->mAssociatedValue0 ;
            const enumGalgasBool test_7 = enumerator_14245.current_mType (HERE).getter_kind (HERE).getter_isFunction (SOURCE_FILE ("declaration-static-list.galgas", 356)).boolEnum () ;
            if (kBoolTrue == test_7) {
              TC_Array <C_FixItDescription> fixItArray8 ;
              inCompiler->emitSemanticError (enumerator_14219.current_mEndOfExpression (HERE), GALGAS_string ("a function name is expected here"), fixItArray8  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 357)) ;
            }else if (kBoolFalse == test_7) {
              GALGAS_semanticTemporariesStruct var_temporaries_14489 = GALGAS_semanticTemporariesStruct::constructor_default (SOURCE_FILE ("declaration-static-list.galgas", 359)) ;
              GALGAS_instructionListIR var_instructionGenerationList_14557 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("declaration-static-list.galgas", 360)) ;
              GALGAS_allocaList var_allocaList_14597 = GALGAS_allocaList::constructor_emptyList (SOURCE_FILE ("declaration-static-list.galgas", 361)) ;
              GALGAS_objectIR var_expressionResult_15115 ;
              callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) extractedValue_exp.ptr (), function_voidType (inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 363)), GALGAS_routineAttributes::constructor_none (SOURCE_FILE ("declaration-static-list.galgas", 364)), enumerator_14245.current_mType (HERE), ioArgument_ioContext, GALGAS_mode::constructor_bootMode (SOURCE_FILE ("declaration-static-list.galgas", 367)), var_temporaries_14489, ioArgument_ioStaticEntityMap, ioArgument_ioContext.mProperty_mValuedObjectMap, var_allocaList_14597, var_instructionGenerationList_14557, var_expressionResult_15115, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 362)) ;
              GALGAS_objectIR var_result_15198 = function_checkAssignmentCompatibility (var_expressionResult_15115, enumerator_14245.current_mType (HERE), enumerator_14219.current_mEndOfExpression (HERE), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 376)) ;
              GALGAS_bool test_9 = GALGAS_bool (kIsStrictSup, var_instructionGenerationList_14557.getter_length (SOURCE_FILE ("declaration-static-list.galgas", 382)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
              if (kBoolTrue != test_9.boolEnum ()) {
                test_9 = GALGAS_bool (kIsStrictSup, var_allocaList_14597.getter_length (SOURCE_FILE ("declaration-static-list.galgas", 382)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
              }
              GALGAS_bool test_10 = test_9 ;
              if (kBoolTrue != test_10.boolEnum ()) {
                test_10 = extensionGetter_isStatic (var_result_15198, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 382)).operator_not (SOURCE_FILE ("declaration-static-list.galgas", 382)) ;
              }
              const enumGalgasBool test_11 = test_10.boolEnum () ;
              if (kBoolTrue == test_11) {
                TC_Array <C_FixItDescription> fixItArray12 ;
                inCompiler->emitSemanticError (enumerator_14219.current_mEndOfExpression (HERE), GALGAS_string ("source expression cannot be statically computed"), fixItArray12  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 383)) ;
              }
              var_staticValue_14162.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_14245.current_mType (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 386)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 386)).add_operation (extensionGetter_llvmName (var_expressionResult_15115, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 386)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 386)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 386)) ;
            }
          }
          break ;
        case GALGAS_extendStaticListExpressionAST::kEnum_function:
          {
            const cEnumAssociatedValues_extendStaticListExpressionAST_function * extractPtr_18643 = (const cEnumAssociatedValues_extendStaticListExpressionAST_function *) (enumerator_14219.current_mExpression (HERE).unsafePointer ()) ;
            const GALGAS_lstring extractedValue_functionName = extractPtr_18643->mAssociatedValue0 ;
            const GALGAS_routineFormalArgumentListAST extractedValue_formalArgs = extractPtr_18643->mAssociatedValue1 ;
            const enumGalgasBool test_13 = enumerator_14245.current_mType (HERE).getter_kind (HERE).getter_isFunction (SOURCE_FILE ("declaration-static-list.galgas", 389)).operator_not (SOURCE_FILE ("declaration-static-list.galgas", 389)).boolEnum () ;
            if (kBoolTrue == test_13) {
              TC_Array <C_FixItDescription> fixItArray14 ;
              inCompiler->emitSemanticError (enumerator_14219.current_mEndOfExpression (HERE), GALGAS_string ("a static expression is expected here"), fixItArray14  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 390)) ;
            }else if (kBoolFalse == test_13) {
              GALGAS_routineDescriptor var_descriptor_16030 ;
              enumerator_14245.current_mType (HERE).getter_kind (HERE).method_function (var_descriptor_16030, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 392)) ;
              GALGAS_lstring var_argumentSignature_16065 = extensionGetter_routineSignature (extractedValue_formalArgs, extractedValue_functionName.getter_location (SOURCE_FILE ("declaration-static-list.galgas", 393)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 393)) ;
              GALGAS_lstring var_candidateRoutineLLVMName_16298 ;
              GALGAS_routineDescriptor var_routineDescriptor_16354 ;
              GALGAS_location var_functionDefinitionLocation_16400 ;
              extensionMethod_searchKey (ioArgument_ioContext.getter_mRoutineMapForContext (HERE), GALGAS_string::makeEmptyString (), extractedValue_functionName, var_argumentSignature_16065, var_candidateRoutineLLVMName_16298, var_routineDescriptor_16354, var_functionDefinitionLocation_16400, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 394)) ;
              GALGAS_bool var_candidateIsPublic_16448 = var_routineDescriptor_16354.getter_isPublic (HERE) ;
              GALGAS_routineKind var_candidateRoutineKind_16514 = var_routineDescriptor_16354.getter_routineKind (HERE) ;
              GALGAS_mode var_candidateMode_16576 = extensionGetter_executionMode (var_routineDescriptor_16354.getter_routineKind (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 404)) ;
              GALGAS_routineTypedSignature var_candidateSignature_16659 = var_routineDescriptor_16354.getter_signature (HERE) ;
              GALGAS_unifiedTypeMap_2D_proxy var_candidateReturnTypeProxy_16730 = var_routineDescriptor_16354.getter_returnTypeProxy (HERE) ;
              const enumGalgasBool test_15 = var_candidateIsPublic_16448.operator_not (SOURCE_FILE ("declaration-static-list.galgas", 408)).boolEnum () ;
              if (kBoolTrue == test_15) {
                GALGAS_string var_declarationFile_16877 = var_functionDefinitionLocation_16400.getter_file (inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 409)) ;
                GALGAS_string var_invocationFile_16946 = extractedValue_functionName.getter_location (HERE).getter_file (inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 410)) ;
                const enumGalgasBool test_16 = GALGAS_bool (kIsNotEqual, var_invocationFile_16946.objectCompare (var_declarationFile_16877)).boolEnum () ;
                if (kBoolTrue == test_16) {
                  TC_Array <C_FixItDescription> fixItArray17 ;
                  inCompiler->emitSemanticError (extractedValue_functionName.getter_location (SOURCE_FILE ("declaration-static-list.galgas", 412)), GALGAS_string ("this function is not public"), fixItArray17  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 412)) ;
                }
              }
              const enumGalgasBool test_18 = var_candidateRoutineKind_16514.getter_isFunction (SOURCE_FILE ("declaration-static-list.galgas", 415)).operator_not (SOURCE_FILE ("declaration-static-list.galgas", 415)).boolEnum () ;
              if (kBoolTrue == test_18) {
                TC_Array <C_FixItDescription> fixItArray19 ;
                inCompiler->emitSemanticError (extractedValue_functionName.getter_location (SOURCE_FILE ("declaration-static-list.galgas", 416)), GALGAS_string ("this routine is not a function"), fixItArray19  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 416)) ;
              }
              GALGAS_mode var_currentMode_17304 = extensionGetter_executionMode (var_descriptor_16030.getter_routineKind (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 418)) ;
              const enumGalgasBool test_20 = GALGAS_bool (kIsNotEqual, var_currentMode_17304.objectCompare (var_candidateMode_16576)).boolEnum () ;
              if (kBoolTrue == test_20) {
                TC_Array <C_FixItDescription> fixItArray21 ;
                inCompiler->emitSemanticError (extractedValue_functionName.getter_location (SOURCE_FILE ("declaration-static-list.galgas", 420)), GALGAS_string ("this function runs in ").add_operation (extensionGetter_string (var_candidateMode_16576, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 420)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 420)).add_operation (GALGAS_string (" mode, but "), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 420)).add_operation (extensionGetter_string (var_currentMode_17304, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 420)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 420)).add_operation (GALGAS_string (" is required"), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 420)), fixItArray21  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 420)) ;
              }
              GALGAS_bool test_22 = GALGAS_bool (kIsEqual, var_descriptor_16030.getter_returnTypeProxy (HERE).objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-static-list.galgas", 422)))) ;
              if (kBoolTrue == test_22.boolEnum ()) {
                test_22 = GALGAS_bool (kIsNotEqual, var_candidateReturnTypeProxy_16730.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-static-list.galgas", 422)))) ;
              }
              const enumGalgasBool test_23 = test_22.boolEnum () ;
              if (kBoolTrue == test_23) {
                TC_Array <C_FixItDescription> fixItArray24 ;
                inCompiler->emitSemanticError (extractedValue_functionName.getter_location (SOURCE_FILE ("declaration-static-list.galgas", 423)), GALGAS_string ("this function should return an $").add_operation (var_candidateReturnTypeProxy_16730.getter_key (inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 423)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 423)).add_operation (GALGAS_string (" object"), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 423)), fixItArray24  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 423)) ;
              }else if (kBoolFalse == test_23) {
                GALGAS_bool test_25 = GALGAS_bool (kIsNotEqual, var_descriptor_16030.getter_returnTypeProxy (HERE).objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-static-list.galgas", 424)))) ;
                if (kBoolTrue == test_25.boolEnum ()) {
                  test_25 = GALGAS_bool (kIsEqual, var_candidateReturnTypeProxy_16730.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-static-list.galgas", 424)))) ;
                }
                const enumGalgasBool test_26 = test_25.boolEnum () ;
                if (kBoolTrue == test_26) {
                  TC_Array <C_FixItDescription> fixItArray27 ;
                  inCompiler->emitSemanticError (extractedValue_functionName.getter_location (SOURCE_FILE ("declaration-static-list.galgas", 425)), GALGAS_string ("this function should return no object"), fixItArray27  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 425)) ;
                }
              }
              const enumGalgasBool test_28 = GALGAS_bool (kIsNotEqual, var_descriptor_16030.getter_signature (HERE).getter_length (SOURCE_FILE ("declaration-static-list.galgas", 427)).objectCompare (var_candidateSignature_16659.getter_length (SOURCE_FILE ("declaration-static-list.galgas", 427)))).boolEnum () ;
              if (kBoolTrue == test_28) {
                TC_Array <C_FixItDescription> fixItArray29 ;
                inCompiler->emitSemanticError (extractedValue_functionName.getter_location (SOURCE_FILE ("declaration-static-list.galgas", 428)), GALGAS_string ("this function has ").add_operation (var_candidateSignature_16659.getter_length (SOURCE_FILE ("declaration-static-list.galgas", 429)).getter_string (SOURCE_FILE ("declaration-static-list.galgas", 429)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 429)).add_operation (GALGAS_string (" argument(s) ("), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 429)).add_operation (var_descriptor_16030.getter_signature (HERE).getter_length (SOURCE_FILE ("declaration-static-list.galgas", 430)).getter_string (SOURCE_FILE ("declaration-static-list.galgas", 429)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 429)).add_operation (GALGAS_string (" required)"), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 430)), fixItArray29  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 428)) ;
              }else if (kBoolFalse == test_28) {
                cEnumerator_routineTypedSignature enumerator_18265 (var_descriptor_16030.getter_signature (HERE), kENUMERATION_UP) ;
                cEnumerator_routineTypedSignature enumerator_18298 (var_candidateSignature_16659, kENUMERATION_UP) ;
                while (enumerator_18265.hasCurrentObject () && enumerator_18298.hasCurrentObject ()) {
                  const enumGalgasBool test_30 = GALGAS_bool (kIsNotEqual, enumerator_18265.current (HERE).getter_mTypeProxy (HERE).objectCompare (enumerator_18298.current (HERE).getter_mTypeProxy (HERE))).boolEnum () ;
                  if (kBoolTrue == test_30) {
                    TC_Array <C_FixItDescription> fixItArray31 ;
                    inCompiler->emitSemanticError (enumerator_18298.current (HERE).getter_mSelector (HERE).getter_location (SOURCE_FILE ("declaration-static-list.galgas", 434)), GALGAS_string ("argument type should be $").add_operation (enumerator_18265.current (HERE).getter_mTypeProxy (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 434)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 434)), fixItArray31  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 434)) ;
                  }
                  enumerator_18265.gotoNextObject () ;
                  enumerator_18298.gotoNextObject () ;
                }
              }
              var_staticValue_14162.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_14245.current_mType (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 438)).add_operation (GALGAS_string (" @"), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 438)).add_operation (function_llvmNameForFunction (var_candidateRoutineLLVMName_16298.getter_string (SOURCE_FILE ("declaration-static-list.galgas", 438)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 438)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 438)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 438)) ;
            }
          }
          break ;
        }
        if (enumerator_14219.hasNextObject () && enumerator_14245.hasNextObject ()) {
          var_staticValue_14162.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 442)) ;
        }
        enumerator_14219.gotoNextObject () ;
        enumerator_14245.gotoNextObject () ;
      }
      var_staticValue_14162.plusAssign_operation(GALGAS_string ("}"), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 444)) ;
      var_stringValueList_13878.addAssign_operation (var_staticValue_14162  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 445)) ;
    }
    enumerator_13909.gotoNextObject () ;
  }
  {
  ioArgument_ioStaticListValueMap.setter_insertKey (object->mProperty_mStaticListName, var_stringValueList_13878, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 448)) ;
  }
  GALGAS_propertyMap var_listTypePropertyMap_18983 = GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("declaration-static-list.galgas", 450)) ;
  {
  var_listTypePropertyMap_18983.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("count"), object->mProperty_mStaticListName.getter_location (HERE)  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 452)), GALGAS_bool (true), GALGAS_propertyAccessKind::constructor_constantProperty (GALGAS_objectIR::constructor_literalInteger (function_staticIntegerType (inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 454)), object->mProperty_mValueList.getter_length (SOURCE_FILE ("declaration-static-list.galgas", 454)).getter_bigint (SOURCE_FILE ("declaration-static-list.galgas", 454))  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 454))  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 454)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 451)) ;
  }
  GALGAS_PLMType var_elementType_19332 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.getter_mTypeMap (HERE), var_plmElementTypeName_10468, inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 457)).getter_type (inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 457)) ;
  GALGAS_PLMType var_arrayType_19431 = GALGAS_PLMType::constructor_new (var_listTypePropertyMap_18983, GALGAS_classConstantMap::constructor_emptyMap (SOURCE_FILE ("declaration-static-list.galgas", 460)), GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("declaration-static-list.galgas", 461)), GALGAS_guardMapForContext::constructor_emptyMap (SOURCE_FILE ("declaration-static-list.galgas", 462)), GALGAS_PLMTypeAttributes::constructor_instanciable (SOURCE_FILE ("declaration-static-list.galgas", 463)).operator_or (GALGAS_PLMTypeAttributes::constructor_equatable (SOURCE_FILE ("declaration-static-list.galgas", 463)) COMMA_SOURCE_FILE ("declaration-static-list.galgas", 463)).operator_or (GALGAS_PLMTypeAttributes::constructor_copyable (SOURCE_FILE ("declaration-static-list.galgas", 463)) COMMA_SOURCE_FILE ("declaration-static-list.galgas", 463)), function_plmNameForStaticListType (object->mProperty_mStaticListName, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 464)).getter_string (SOURCE_FILE ("declaration-static-list.galgas", 464)), GALGAS_typeKind::constructor_arrayType (var_elementType_19332, var_stringValueList_13878.getter_length (SOURCE_FILE ("declaration-static-list.galgas", 465)).getter_bigint (SOURCE_FILE ("declaration-static-list.galgas", 465))  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 465)), function_llvmNameForStaticListType (object->mProperty_mStaticListName, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 466)).getter_string (SOURCE_FILE ("declaration-static-list.galgas", 466))  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 458)) ;
  {
  ioArgument_ioContext.mProperty_mTypeMap.setter_insertType (function_plmNameForStaticListType (object->mProperty_mStaticListName, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 469)), var_arrayType_19431, ioArgument_ioContext.getter_mTypeMap (HERE).getter_count (SOURCE_FILE ("declaration-static-list.galgas", 471)), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 468)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_staticListType_20115 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.getter_mTypeMap (HERE), function_plmNameForStaticListType (object->mProperty_mStaticListName, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 475)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 475)) ;
  {
  ioArgument_ioContext.mProperty_mGlobalConstantMap.setter_insertKey (object->mProperty_mStaticListName, GALGAS_objectIR::constructor_reference (var_staticListType_20115.getter_type (inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 478)), function_llvmNameForGlobalVariable (object->mProperty_mStaticListName.getter_string (SOURCE_FILE ("declaration-static-list.galgas", 478)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 478))  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 478)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 476)) ;
  }
  {
  extensionSetter_insertGlobalConstant (ioArgument_ioContext.mProperty_mValuedObjectMap, object->mProperty_mStaticListName, GALGAS_objectIR::constructor_reference (var_staticListType_20115.getter_type (inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 482)), function_llvmNameForGlobalVariable (object->mProperty_mStaticListName.getter_string (SOURCE_FILE ("declaration-static-list.galgas", 482)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 482))  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 482)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 480)) ;
  }
  ioArgument_ioDecoratedDeclarationList.addAssign_operation (GALGAS_decoratedStaticList::constructor_new (object->mProperty_mStaticListName, object->mProperty_mValueList  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 485))  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 485)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_staticListAST_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_staticListAST.mSlotID,
                                       extensionMethod_staticListAST_enterInContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_staticListAST_enterInContext (defineExtensionMethod_staticListAST_enterInContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                         Overriding extension method '@decoratedStaticList semanticAnalysis'                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_decoratedStaticList_semanticAnalysis (const cPtr_abstractDecoratedDeclaration * inObject,
                                                                  const GALGAS_semanticContext /* constinArgument_inContext */,
                                                                  GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                  GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_decoratedStaticList * object = (const cPtr_decoratedStaticList *) inObject ;
  macroValidSharedObject (object, cPtr_decoratedStaticList) ;
  GALGAS_stringset var_invokedFunctionSet_21878 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("declaration-static-list.galgas", 513)) ;
  cEnumerator_staticListValueListAST enumerator_21909 (object->mProperty_mValueList, kENUMERATION_UP) ;
  while (enumerator_21909.hasCurrentObject ()) {
    cEnumerator_extendStaticListElementListAST enumerator_21961 (enumerator_21909.current (HERE).getter_mExpressions (HERE), kENUMERATION_UP) ;
    while (enumerator_21961.hasCurrentObject ()) {
      switch (enumerator_21961.current_mExpression (HERE).enumValue ()) {
      case GALGAS_extendStaticListExpressionAST::kNotBuilt:
        break ;
      case GALGAS_extendStaticListExpressionAST::kEnum_expression:
        {
          const cEnumAssociatedValues_extendStaticListExpressionAST_expression * extractPtr_22037 = (const cEnumAssociatedValues_extendStaticListExpressionAST_expression *) (enumerator_21961.current_mExpression (HERE).unsafePointer ()) ;
          const GALGAS_expressionAST extractedValue_exp = extractPtr_22037->mAssociatedValue0 ;
        }
        break ;
      case GALGAS_extendStaticListExpressionAST::kEnum_function:
        {
          const cEnumAssociatedValues_extendStaticListExpressionAST_function * extractPtr_22338 = (const cEnumAssociatedValues_extendStaticListExpressionAST_function *) (enumerator_21961.current_mExpression (HERE).unsafePointer ()) ;
          const GALGAS_lstring extractedValue_functionName = extractPtr_22338->mAssociatedValue0 ;
          const GALGAS_routineFormalArgumentListAST extractedValue_formalArgs = extractPtr_22338->mAssociatedValue1 ;
          GALGAS_lstring var_routineMangledName_22187 = function_routineMangledNameFromAST (GALGAS_string::makeEmptyString (), extractedValue_functionName, extractedValue_formalArgs, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 520)) ;
          var_invokedFunctionSet_21878.addAssign_operation (var_routineMangledName_22187.getter_string (SOURCE_FILE ("declaration-static-list.galgas", 525))  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 525)) ;
        }
        break ;
      }
      enumerator_21961.gotoNextObject () ;
    }
    enumerator_21909.gotoNextObject () ;
  }
  {
  ioArgument_ioTemporaries.mProperty_mStaticArrayMapForTemporaries.setter_insertKey (object->mProperty_mStaticListName, var_invokedFunctionSet_21878, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 529)) ;
  }
  {
  ioArgument_ioIntermediateCodeStruct.mProperty_mStaticArrayMapForIntermediate.setter_insertKey (object->mProperty_mStaticListName, var_invokedFunctionSet_21878, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 530)) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_decoratedStaticList_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_decoratedStaticList.mSlotID,
                                         extensionMethod_decoratedStaticList_semanticAnalysis) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_decoratedStaticList_semanticAnalysis (defineExtensionMethod_decoratedStaticList_semanticAnalysis, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                    Overriding extension method '@decoratedTaskListDeclaration semanticAnalysis'                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_decoratedTaskListDeclaration_semanticAnalysis (const cPtr_abstractDecoratedDeclaration * inObject,
                                                                           const GALGAS_semanticContext constinArgument_inContext,
                                                                           GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                           GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_decoratedTaskListDeclaration * object = (const cPtr_decoratedTaskListDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_decoratedTaskListDeclaration) ;
  cEnumerator_decoratedTaskList enumerator_15111 (object->mProperty_mTaskList, kENUMERATION_UP) ;
  GALGAS_uint index_15093 ((uint32_t) 0) ;
  while (enumerator_15111.hasCurrentObject ()) {
    extensionMethod_taskSemanticAnalysis (enumerator_15111.current (HERE), constinArgument_inContext, index_15093, ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 406)) ;
    enumerator_15111.gotoNextObject () ;
    index_15093.increment_operation (inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 405)) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_decoratedTaskListDeclaration_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_decoratedTaskListDeclaration.mSlotID,
                                         extensionMethod_decoratedTaskListDeclaration_semanticAnalysis) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_decoratedTaskListDeclaration_semanticAnalysis (defineExtensionMethod_decoratedTaskListDeclaration_semanticAnalysis, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        Routine 'analyzeOrderedTaskRoutines'                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_analyzeOrderedTaskRoutines (const GALGAS_taskSetupListAST constinArgument_inTaskRoutineLISTAST,
                                         GALGAS_stringlist & outArgument_outSetupOrderedList,
                                         C_Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSetupOrderedList.drop () ; // Release 'out' argument
  outArgument_outSetupOrderedList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("task-declaration.galgas", 421)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, constinArgument_inTaskRoutineLISTAST.getter_length (SOURCE_FILE ("task-declaration.galgas", 422)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_uint var_numberOfEntriesWithoutAnyPrecedence_15728 = GALGAS_uint ((uint32_t) 0U) ;
    cEnumerator_taskSetupListAST enumerator_15786 (constinArgument_inTaskRoutineLISTAST, kENUMERATION_UP) ;
    while (enumerator_15786.hasCurrentObject ()) {
      const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_15786.current_mDependanceList (HERE).getter_length (SOURCE_FILE ("task-declaration.galgas", 426)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_1) {
        var_numberOfEntriesWithoutAnyPrecedence_15728.plusAssign_operation(var_numberOfEntriesWithoutAnyPrecedence_15728.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 427)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 427)) ;
      }
      enumerator_15786.gotoNextObject () ;
    }
    const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, var_numberOfEntriesWithoutAnyPrecedence_15728.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_2) {
      cEnumerator_taskSetupListAST enumerator_16034 (constinArgument_inTaskRoutineLISTAST, kENUMERATION_UP) ;
      while (enumerator_16034.hasCurrentObject ()) {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (enumerator_16034.current_mName (HERE).getter_location (SOURCE_FILE ("task-declaration.galgas", 432)), GALGAS_string ("Exactly one routine should have no precedence"), fixItArray3  COMMA_SOURCE_FILE ("task-declaration.galgas", 432)) ;
        enumerator_16034.gotoNextObject () ;
      }
    }else if (kBoolFalse == test_2) {
      const enumGalgasBool test_4 = GALGAS_bool (kIsStrictSup, var_numberOfEntriesWithoutAnyPrecedence_15728.objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
      if (kBoolTrue == test_4) {
        cEnumerator_taskSetupListAST enumerator_16230 (constinArgument_inTaskRoutineLISTAST, kENUMERATION_UP) ;
        while (enumerator_16230.hasCurrentObject ()) {
          const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, enumerator_16230.current_mDependanceList (HERE).getter_length (SOURCE_FILE ("task-declaration.galgas", 436)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
          if (kBoolTrue == test_5) {
            TC_Array <C_FixItDescription> fixItArray6 ;
            inCompiler->emitSemanticError (enumerator_16230.current_mName (HERE).getter_location (SOURCE_FILE ("task-declaration.galgas", 437)), GALGAS_string ("Exactly one routine should have no precedence"), fixItArray6  COMMA_SOURCE_FILE ("task-declaration.galgas", 437)) ;
          }
          enumerator_16230.gotoNextObject () ;
        }
      }
    }
    GALGAS_taskSetupListAST var_taskSetupListAST_16462 = constinArgument_inTaskRoutineLISTAST ;
    GALGAS_stringset var_precedenceSet_16514 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("task-declaration.galgas", 443)) ;
    GALGAS_bool var_continue_16536 = GALGAS_bool (true) ;
    if (constinArgument_inTaskRoutineLISTAST.getter_length (SOURCE_FILE ("task-declaration.galgas", 445)).isValid ()) {
      uint32_t variant_16552 = constinArgument_inTaskRoutineLISTAST.getter_length (SOURCE_FILE ("task-declaration.galgas", 445)).uintValue () ;
      bool loop_16552 = true ;
      while (loop_16552) {
        GALGAS_bool test_7 = var_continue_16536 ;
        if (kBoolTrue == test_7.boolEnum ()) {
          test_7 = GALGAS_bool (kIsStrictSup, var_taskSetupListAST_16462.getter_length (SOURCE_FILE ("task-declaration.galgas", 445)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
        }
        loop_16552 = test_7.isValid () ;
        if (loop_16552) {
          loop_16552 = test_7.boolValue () ;
        }
        if (loop_16552 && (0 == variant_16552)) {
          loop_16552 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("task-declaration.galgas", 445)) ;
        }
        if (loop_16552) {
          variant_16552 -- ;
          var_continue_16536 = GALGAS_bool (false) ;
          GALGAS_uint var_idx_16674 = GALGAS_uint ((uint32_t) 0U) ;
          cEnumerator_taskSetupListAST enumerator_16763 (var_taskSetupListAST_16462, kENUMERATION_UP) ;
          while (enumerator_16763.hasCurrentObject ()) {
            GALGAS_bool var_allPrecedenceDefined_16799 = GALGAS_bool (true) ;
            cEnumerator_lstringlist enumerator_16853 (enumerator_16763.current_mDependanceList (HERE), kENUMERATION_UP) ;
            bool bool_8 = var_allPrecedenceDefined_16799.isValidAndTrue () ;
            if (enumerator_16853.hasCurrentObject () && bool_8) {
              while (enumerator_16853.hasCurrentObject () && bool_8) {
                var_allPrecedenceDefined_16799 = var_precedenceSet_16514.getter_hasKey (enumerator_16853.current_mValue (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("task-declaration.galgas", 451)) ;
                enumerator_16853.gotoNextObject () ;
                if (enumerator_16853.hasCurrentObject ()) {
                  bool_8 = var_allPrecedenceDefined_16799.isValidAndTrue () ;
                }
              }
            }
            const enumGalgasBool test_9 = var_allPrecedenceDefined_16799.boolEnum () ;
            if (kBoolTrue == test_9) {
              outArgument_outSetupOrderedList.addAssign_operation (enumerator_16763.current_mName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("task-declaration.galgas", 454)) ;
              var_precedenceSet_16514.addAssign_operation (enumerator_16763.current_mName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("task-declaration.galgas", 455)) ;
              var_continue_16536 = GALGAS_bool (true) ;
              {
              GALGAS_lstring joker_17169_4 ; // Joker input parameter
              GALGAS_lstringlist joker_17169_3 ; // Joker input parameter
              GALGAS_instructionListAST joker_17169_2 ; // Joker input parameter
              GALGAS_location joker_17169_1 ; // Joker input parameter
              var_taskSetupListAST_16462.setter_removeAtIndex (joker_17169_4, joker_17169_3, joker_17169_2, joker_17169_1, var_idx_16674, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 457)) ;
              }
            }else if (kBoolFalse == test_9) {
              var_idx_16674 = var_idx_16674.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 459)) ;
            }
            enumerator_16763.gotoNextObject () ;
          }
        }
      }
    }
    cEnumerator_taskSetupListAST enumerator_17322 (var_taskSetupListAST_16462, kENUMERATION_UP) ;
    while (enumerator_17322.hasCurrentObject ()) {
      TC_Array <C_FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (enumerator_17322.current_mName (HERE).getter_location (SOURCE_FILE ("task-declaration.galgas", 465)), GALGAS_string ("this routine is out of execution order"), fixItArray10  COMMA_SOURCE_FILE ("task-declaration.galgas", 465)) ;
      enumerator_17322.gotoNextObject () ;
    }
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                       Routine 'analyzeOrderedTaskRoutinesEX'                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_analyzeOrderedTaskRoutinesEX (const GALGAS_PLMType constinArgument_inTaskType,
                                           const GALGAS_taskSetupListAST constinArgument_inTaskRoutineLISTAST,
                                           const GALGAS_semanticContext constinArgument_inContext,
                                           GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                           GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                           GALGAS_instructionListIR & outArgument_outInstructionListIR,
                                           GALGAS_allocaList & outArgument_outAllocaList,
                                           C_Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outInstructionListIR.drop () ; // Release 'out' argument
  outArgument_outAllocaList.drop () ; // Release 'out' argument
  GALGAS_taskSetupSortedListAST var_taskSetupSortedListAST_18002 = GALGAS_taskSetupSortedListAST::constructor_emptyList (SOURCE_FILE ("task-declaration.galgas", 482)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, constinArgument_inTaskRoutineLISTAST.getter_length (SOURCE_FILE ("task-declaration.galgas", 483)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_uint var_numberOfEntriesWithoutAnyPrecedence_18161 = GALGAS_uint ((uint32_t) 0U) ;
    cEnumerator_taskSetupListAST enumerator_18219 (constinArgument_inTaskRoutineLISTAST, kENUMERATION_UP) ;
    while (enumerator_18219.hasCurrentObject ()) {
      const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_18219.current_mDependanceList (HERE).getter_length (SOURCE_FILE ("task-declaration.galgas", 487)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_1) {
        var_numberOfEntriesWithoutAnyPrecedence_18161.plusAssign_operation(var_numberOfEntriesWithoutAnyPrecedence_18161.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 488)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 488)) ;
      }
      enumerator_18219.gotoNextObject () ;
    }
    const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, var_numberOfEntriesWithoutAnyPrecedence_18161.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_2) {
      cEnumerator_taskSetupListAST enumerator_18467 (constinArgument_inTaskRoutineLISTAST, kENUMERATION_UP) ;
      while (enumerator_18467.hasCurrentObject ()) {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (enumerator_18467.current_mName (HERE).getter_location (SOURCE_FILE ("task-declaration.galgas", 493)), GALGAS_string ("Exactly one routine should have no precedence"), fixItArray3  COMMA_SOURCE_FILE ("task-declaration.galgas", 493)) ;
        enumerator_18467.gotoNextObject () ;
      }
    }else if (kBoolFalse == test_2) {
      const enumGalgasBool test_4 = GALGAS_bool (kIsStrictSup, var_numberOfEntriesWithoutAnyPrecedence_18161.objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
      if (kBoolTrue == test_4) {
        cEnumerator_taskSetupListAST enumerator_18663 (constinArgument_inTaskRoutineLISTAST, kENUMERATION_UP) ;
        while (enumerator_18663.hasCurrentObject ()) {
          const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, enumerator_18663.current_mDependanceList (HERE).getter_length (SOURCE_FILE ("task-declaration.galgas", 497)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
          if (kBoolTrue == test_5) {
            TC_Array <C_FixItDescription> fixItArray6 ;
            inCompiler->emitSemanticError (enumerator_18663.current_mName (HERE).getter_location (SOURCE_FILE ("task-declaration.galgas", 498)), GALGAS_string ("Exactly one routine should have no precedence"), fixItArray6  COMMA_SOURCE_FILE ("task-declaration.galgas", 498)) ;
          }
          enumerator_18663.gotoNextObject () ;
        }
      }
    }
    GALGAS_taskSetupListAST var_taskSetupListAST_18895 = constinArgument_inTaskRoutineLISTAST ;
    GALGAS_stringset var_precedenceSet_18947 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("task-declaration.galgas", 504)) ;
    GALGAS_bool var_continue_18969 = GALGAS_bool (true) ;
    if (constinArgument_inTaskRoutineLISTAST.getter_length (SOURCE_FILE ("task-declaration.galgas", 506)).isValid ()) {
      uint32_t variant_18985 = constinArgument_inTaskRoutineLISTAST.getter_length (SOURCE_FILE ("task-declaration.galgas", 506)).uintValue () ;
      bool loop_18985 = true ;
      while (loop_18985) {
        GALGAS_bool test_7 = var_continue_18969 ;
        if (kBoolTrue == test_7.boolEnum ()) {
          test_7 = GALGAS_bool (kIsStrictSup, var_taskSetupListAST_18895.getter_length (SOURCE_FILE ("task-declaration.galgas", 506)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
        }
        loop_18985 = test_7.isValid () ;
        if (loop_18985) {
          loop_18985 = test_7.boolValue () ;
        }
        if (loop_18985 && (0 == variant_18985)) {
          loop_18985 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("task-declaration.galgas", 506)) ;
        }
        if (loop_18985) {
          variant_18985 -- ;
          var_continue_18969 = GALGAS_bool (false) ;
          GALGAS_uint var_idx_19107 = GALGAS_uint ((uint32_t) 0U) ;
          cEnumerator_taskSetupListAST enumerator_19196 (var_taskSetupListAST_18895, kENUMERATION_UP) ;
          while (enumerator_19196.hasCurrentObject ()) {
            GALGAS_bool var_allPrecedenceDefined_19232 = GALGAS_bool (true) ;
            cEnumerator_lstringlist enumerator_19286 (enumerator_19196.current_mDependanceList (HERE), kENUMERATION_UP) ;
            bool bool_8 = var_allPrecedenceDefined_19232.isValidAndTrue () ;
            if (enumerator_19286.hasCurrentObject () && bool_8) {
              while (enumerator_19286.hasCurrentObject () && bool_8) {
                var_allPrecedenceDefined_19232 = var_precedenceSet_18947.getter_hasKey (enumerator_19286.current_mValue (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("task-declaration.galgas", 512)) ;
                enumerator_19286.gotoNextObject () ;
                if (enumerator_19286.hasCurrentObject ()) {
                  bool_8 = var_allPrecedenceDefined_19232.isValidAndTrue () ;
                }
              }
            }
            const enumGalgasBool test_9 = var_allPrecedenceDefined_19232.boolEnum () ;
            if (kBoolTrue == test_9) {
              var_taskSetupSortedListAST_18002.addAssign_operation (enumerator_19196.current_mTaskSetupInstructionList (HERE), enumerator_19196.current_mEndOfTaskSetupDeclaration (HERE), GALGAS_luint::constructor_new (var_taskSetupSortedListAST_18002.getter_length (SOURCE_FILE ("task-declaration.galgas", 515)), enumerator_19196.current_mName (HERE).getter_location (SOURCE_FILE ("task-declaration.galgas", 515))  COMMA_SOURCE_FILE ("task-declaration.galgas", 515))  COMMA_SOURCE_FILE ("task-declaration.galgas", 515)) ;
              var_precedenceSet_18947.addAssign_operation (enumerator_19196.current_mName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("task-declaration.galgas", 516)) ;
              var_continue_18969 = GALGAS_bool (true) ;
              {
              GALGAS_lstring joker_19674_4 ; // Joker input parameter
              GALGAS_lstringlist joker_19674_3 ; // Joker input parameter
              GALGAS_instructionListAST joker_19674_2 ; // Joker input parameter
              GALGAS_location joker_19674_1 ; // Joker input parameter
              var_taskSetupListAST_18895.setter_removeAtIndex (joker_19674_4, joker_19674_3, joker_19674_2, joker_19674_1, var_idx_19107, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 518)) ;
              }
            }else if (kBoolFalse == test_9) {
              var_idx_19107 = var_idx_19107.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 520)) ;
            }
            enumerator_19196.gotoNextObject () ;
          }
        }
      }
    }
    cEnumerator_taskSetupListAST enumerator_19827 (var_taskSetupListAST_18895, kENUMERATION_UP) ;
    while (enumerator_19827.hasCurrentObject ()) {
      TC_Array <C_FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (enumerator_19827.current_mName (HERE).getter_location (SOURCE_FILE ("task-declaration.galgas", 526)), GALGAS_string ("this routine is out of execution order"), fixItArray10  COMMA_SOURCE_FILE ("task-declaration.galgas", 526)) ;
      enumerator_19827.gotoNextObject () ;
    }
  }
  outArgument_outInstructionListIR = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("task-declaration.galgas", 529)) ;
  outArgument_outAllocaList = GALGAS_allocaList::constructor_emptyList (SOURCE_FILE ("task-declaration.galgas", 530)) ;
  cEnumerator_taskSetupSortedListAST enumerator_20054 (var_taskSetupSortedListAST_18002, kENUMERATION_UP) ;
  while (enumerator_20054.hasCurrentObject ()) {
    GALGAS_allocaList var_partialAllocaList_20399 ;
    GALGAS_instructionListIR var_partialInstructionGenerationList_20462 ;
    {
    routine_setupSemanticAnalysis (constinArgument_inContext, ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct, constinArgument_inTaskType, enumerator_20054.current_mPriority (HERE), GALGAS_mode::constructor_userMode (SOURCE_FILE ("task-declaration.galgas", 538)), enumerator_20054.current_mTaskSetupInstructionList (HERE), enumerator_20054.current_mEndOfTaskSetupDeclaration (HERE), var_partialAllocaList_20399, var_partialInstructionGenerationList_20462, inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 532)) ;
    }
    outArgument_outInstructionListIR.plusAssign_operation(var_partialInstructionGenerationList_20462, inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 544)) ;
    outArgument_outAllocaList.plusAssign_operation(var_partialAllocaList_20399, inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 545)) ;
    enumerator_20054.gotoNextObject () ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                           Routine 'setupSemanticAnalysis'                                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_setupSemanticAnalysis (const GALGAS_semanticContext constinArgument_inContext,
                                    GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                    GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                    const GALGAS_PLMType constinArgument_inSelfType,
                                    const GALGAS_luint /* constinArgument_inPriority */,
                                    const GALGAS_mode constinArgument_inCurrentMode,
                                    const GALGAS_instructionListAST constinArgument_inInstructionListAST,
                                    const GALGAS_location constinArgument_inEndOfInitDeclaration,
                                    GALGAS_allocaList & outArgument_outAllocaList,
                                    GALGAS_instructionListIR & outArgument_outInstructionGenerationList,
                                    C_Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outAllocaList.drop () ; // Release 'out' argument
  outArgument_outInstructionGenerationList.drop () ; // Release 'out' argument
  GALGAS_universalValuedObjectMap var_universalMap_23318 = constinArgument_inContext.getter_mValuedObjectMap (HERE) ;
  {
  extensionSetter_openOverrideForSelectBlock (var_universalMap_23318, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 622)) ;
  }
  {
  extensionSetter_openBranch (var_universalMap_23318, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 623)) ;
  }
  outArgument_outInstructionGenerationList = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("task-declaration.galgas", 625)) ;
  outArgument_outAllocaList = GALGAS_allocaList::constructor_emptyList (SOURCE_FILE ("task-declaration.galgas", 626)) ;
  extensionMethod_analyzeRoutineInstructionList (constinArgument_inInstructionListAST, constinArgument_inSelfType, GALGAS_routineAttributes::constructor_mutating (SOURCE_FILE ("task-declaration.galgas", 629)).operator_or (GALGAS_routineAttributes::constructor_directPropertyAccess (SOURCE_FILE ("task-declaration.galgas", 629)) COMMA_SOURCE_FILE ("task-declaration.galgas", 629)).operator_or (GALGAS_routineAttributes::constructor_controlRegisterReadable (SOURCE_FILE ("task-declaration.galgas", 629)) COMMA_SOURCE_FILE ("task-declaration.galgas", 629)), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct.mProperty_mStaticEntityMap, var_universalMap_23318, outArgument_outAllocaList, outArgument_outInstructionGenerationList, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 627)) ;
  extensionMethod_checkLocalVariableFinalState (var_universalMap_23318, outArgument_outInstructionGenerationList, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 639)) ;
  {
  extensionSetter_closeBranch (var_universalMap_23318, constinArgument_inEndOfInitDeclaration, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 640)) ;
  }
  {
  extensionSetter_closeOverride (var_universalMap_23318, constinArgument_inEndOfInitDeclaration, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 641)) ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                      Overriding extension method '@taskActivateFunctionIR llvmCodeGeneration'                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_taskActivateFunctionIR_llvmCodeGeneration (const cPtr_abstractRoutineIR * inObject,
                                                                       GALGAS_string & ioArgument_ioLLVMcode,
                                                                       const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                       GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_taskActivateFunctionIR * object = (const cPtr_taskActivateFunctionIR *) inObject ;
  macroValidSharedObject (object, cPtr_taskActivateFunctionIR) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal void @").add_operation (object->mProperty_mRoutineMangledName.getter_string (HERE).getter_assemblerRepresentation (SOURCE_FILE ("task-declaration.galgas", 828)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 828)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 828)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 828)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("(%").add_operation (object->mProperty_mAssemblerTaskName, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 829)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 829)).add_operation (function_llvmNameForSelf (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 829)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 829)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 829)).add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 829)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 829)).add_operation (GALGAS_string ("{\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 829)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 829)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @").add_operation (object->mProperty_mActivateServiceInvocationName, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 830)).add_operation (GALGAS_string (" (i8 "), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 830)).add_operation (object->mProperty_mTaskIndex.getter_string (SOURCE_FILE ("task-declaration.galgas", 830)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 830)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 830)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 830)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 831)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 832)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(function_llvmSeparatorLine (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 833)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 833)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 834)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_taskActivateFunctionIR_llvmCodeGeneration (void) {
  enterExtensionMethod_llvmCodeGeneration (kTypeDescriptor_GALGAS_taskActivateFunctionIR.mSlotID,
                                           extensionMethod_taskActivateFunctionIR_llvmCodeGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_taskActivateFunctionIR_llvmCodeGeneration (defineExtensionMethod_taskActivateFunctionIR_llvmCodeGeneration, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                       Function 'systemUserMangledNameFromAST'                                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring function_systemUserMangledNameFromAST (const GALGAS_string & constinArgument_inReceiverLLVMBaseTypeName,
                                                      const GALGAS_routineKind & constinArgument_inKind,
                                                      const GALGAS_lstring & constinArgument_inGuardName,
                                                      const GALGAS_routineFormalArgumentListAST & constinArgument_inFormalArgumentList,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  GALGAS_string var_s_4495 ;
  switch (constinArgument_inKind.enumValue ()) {
  case GALGAS_routineKind::kNotBuilt:
    break ;
  case GALGAS_routineKind::kEnum_section:
    {
      var_s_4495 = GALGAS_string ("section") ;
    }
    break ;
  case GALGAS_routineKind::kEnum_service:
    {
      var_s_4495 = GALGAS_string ("service") ;
    }
    break ;
  case GALGAS_routineKind::kEnum_primitive:
    {
      var_s_4495 = GALGAS_string ("primitive") ;
    }
    break ;
  case GALGAS_routineKind::kEnum_function:
    {
      var_s_4495 = GALGAS_string ("\?\?\?") ;
    }
    break ;
  }
  var_s_4495.plusAssign_operation(GALGAS_string (".user."), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 141)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inReceiverLLVMBaseTypeName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_s_4495.plusAssign_operation(constinArgument_inReceiverLLVMBaseTypeName.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 143)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 143)) ;
  }
  var_s_4495.plusAssign_operation(constinArgument_inGuardName.getter_string (HERE), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 145)) ;
  var_s_4495.plusAssign_operation(GALGAS_string ("("), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 146)) ;
  cEnumerator_routineFormalArgumentListAST enumerator_4899 (constinArgument_inFormalArgumentList, kENUMERATION_UP) ;
  while (enumerator_4899.hasCurrentObject ()) {
    var_s_4495.plusAssign_operation(extensionGetter_formalPassingModeString (enumerator_4899.current_mFormalArgumentPassingMode (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 148)).add_operation (enumerator_4899.current_mSelector (HERE).getter_string (SOURCE_FILE ("declaration-svc.galgas", 148)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 148)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 148)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 148)) ;
    enumerator_4899.gotoNextObject () ;
  }
  var_s_4495.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 150)) ;
  result_result = GALGAS_lstring::constructor_new (var_s_4495, constinArgument_inGuardName.getter_location (HERE)  COMMA_SOURCE_FILE ("declaration-svc.galgas", 151)) ;
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function introspection                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const C_galgas_type_descriptor * functionArgs_systemUserMangledNameFromAST [5] = {
  & kTypeDescriptor_GALGAS_string,
  & kTypeDescriptor_GALGAS_routineKind,
  & kTypeDescriptor_GALGAS_lstring,
  & kTypeDescriptor_GALGAS_routineFormalArgumentListAST,
  NULL
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_object functionWithGenericHeader_systemUserMangledNameFromAST (C_Compiler * inCompiler,
                                                                             const cObjectArray & inEffectiveParameterArray,
                                                                             const GALGAS_location & /* inErrorLocation */
                                                                             COMMA_LOCATION_ARGS) {
  const GALGAS_string operand0 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  const GALGAS_routineKind operand1 = GALGAS_routineKind::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                                         inCompiler
                                                                         COMMA_THERE) ;
  const GALGAS_lstring operand2 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (2 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  const GALGAS_routineFormalArgumentListAST operand3 = GALGAS_routineFormalArgumentListAST::extractObject (inEffectiveParameterArray.objectAtIndex (3 COMMA_HERE),
                                                                                                           inCompiler
                                                                                                           COMMA_THERE) ;
  return function_systemUserMangledNameFromAST (operand0,
                                                operand1,
                                                operand2,
                                                operand3,
                                                inCompiler
                                                COMMA_THERE).getter_object (THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_galgas_function_descriptor functionDescriptor_systemUserMangledNameFromAST ("systemUserMangledNameFromAST",
                                                                              functionWithGenericHeader_systemUserMangledNameFromAST,
                                                                              & kTypeDescriptor_GALGAS_lstring,
                                                                              4,
                                                                              functionArgs_systemUserMangledNameFromAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                  Function 'systemImplementationMangledNameFromAST'                                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring function_systemImplementationMangledNameFromAST (const GALGAS_string & constinArgument_inReceiverLLVMBaseTypeName,
                                                                const GALGAS_routineKind & constinArgument_inKind,
                                                                const GALGAS_lstring & constinArgument_inGuardName,
                                                                const GALGAS_routineFormalArgumentListAST & constinArgument_inFormalArgumentList,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  GALGAS_string var_s_5514 ;
  switch (constinArgument_inKind.enumValue ()) {
  case GALGAS_routineKind::kNotBuilt:
    break ;
  case GALGAS_routineKind::kEnum_section:
    {
      var_s_5514 = GALGAS_string ("section") ;
    }
    break ;
  case GALGAS_routineKind::kEnum_service:
    {
      var_s_5514 = GALGAS_string ("service") ;
    }
    break ;
  case GALGAS_routineKind::kEnum_primitive:
    {
      var_s_5514 = GALGAS_string ("primitive") ;
    }
    break ;
  case GALGAS_routineKind::kEnum_function:
    {
      var_s_5514 = GALGAS_string ("\?\?\?") ;
    }
    break ;
  }
  var_s_5514.plusAssign_operation(GALGAS_string (".implementation."), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 172)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inReceiverLLVMBaseTypeName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_s_5514.plusAssign_operation(constinArgument_inReceiverLLVMBaseTypeName.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 174)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 174)) ;
  }
  var_s_5514.plusAssign_operation(constinArgument_inGuardName.getter_string (HERE), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 176)) ;
  var_s_5514.plusAssign_operation(GALGAS_string ("("), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 177)) ;
  cEnumerator_routineFormalArgumentListAST enumerator_5928 (constinArgument_inFormalArgumentList, kENUMERATION_UP) ;
  while (enumerator_5928.hasCurrentObject ()) {
    var_s_5514.plusAssign_operation(extensionGetter_formalPassingModeString (enumerator_5928.current_mFormalArgumentPassingMode (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 179)).add_operation (enumerator_5928.current_mSelector (HERE).getter_string (SOURCE_FILE ("declaration-svc.galgas", 179)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 179)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 179)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 179)) ;
    enumerator_5928.gotoNextObject () ;
  }
  var_s_5514.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 181)) ;
  result_result = GALGAS_lstring::constructor_new (var_s_5514, constinArgument_inGuardName.getter_location (HERE)  COMMA_SOURCE_FILE ("declaration-svc.galgas", 182)) ;
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function introspection                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const C_galgas_type_descriptor * functionArgs_systemImplementationMangledNameFromAST [5] = {
  & kTypeDescriptor_GALGAS_string,
  & kTypeDescriptor_GALGAS_routineKind,
  & kTypeDescriptor_GALGAS_lstring,
  & kTypeDescriptor_GALGAS_routineFormalArgumentListAST,
  NULL
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_object functionWithGenericHeader_systemImplementationMangledNameFromAST (C_Compiler * inCompiler,
                                                                                       const cObjectArray & inEffectiveParameterArray,
                                                                                       const GALGAS_location & /* inErrorLocation */
                                                                                       COMMA_LOCATION_ARGS) {
  const GALGAS_string operand0 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  const GALGAS_routineKind operand1 = GALGAS_routineKind::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                                         inCompiler
                                                                         COMMA_THERE) ;
  const GALGAS_lstring operand2 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (2 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  const GALGAS_routineFormalArgumentListAST operand3 = GALGAS_routineFormalArgumentListAST::extractObject (inEffectiveParameterArray.objectAtIndex (3 COMMA_HERE),
                                                                                                           inCompiler
                                                                                                           COMMA_THERE) ;
  return function_systemImplementationMangledNameFromAST (operand0,
                                                          operand1,
                                                          operand2,
                                                          operand3,
                                                          inCompiler
                                                          COMMA_THERE).getter_object (THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_galgas_function_descriptor functionDescriptor_systemImplementationMangledNameFromAST ("systemImplementationMangledNameFromAST",
                                                                                        functionWithGenericHeader_systemImplementationMangledNameFromAST,
                                                                                        & kTypeDescriptor_GALGAS_lstring,
                                                                                        4,
                                                                                        functionArgs_systemImplementationMangledNameFromAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                          Function 'llvmFunctionPrototype'                                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string function_llvmFunctionPrototype (const GALGAS_string & constinArgument_inReturnTypeLLVMName,
                                              const GALGAS_string & constinArgument_inFunctionName,
                                              const GALGAS_PLMType & constinArgument_inReceiverType,
                                              const GALGAS_routineFormalArgumentListIR & constinArgument_inFormalArgumentListForGeneration,
                                              C_Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = constinArgument_inReturnTypeLLVMName ;
  result_result.plusAssign_operation(GALGAS_string (" @").add_operation (constinArgument_inFunctionName, inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 457)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 457)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 457)) ;
  GALGAS_bool var_first_16554 = GALGAS_bool (true) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inReceiverType.getter_kind (HERE).objectCompare (GALGAS_typeKind::constructor_void (SOURCE_FILE ("declaration-svc.galgas", 459)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    result_result.plusAssign_operation(extensionGetter_llvmTypeName (constinArgument_inReceiverType, inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 460)).add_operation (GALGAS_string (" * %receiver"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 460)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 460)) ;
    var_first_16554 = GALGAS_bool (false) ;
  }
  cEnumerator_routineFormalArgumentListIR enumerator_16731 (constinArgument_inFormalArgumentListForGeneration, kENUMERATION_UP) ;
  while (enumerator_16731.hasCurrentObject ()) {
    const enumGalgasBool test_1 = var_first_16554.boolEnum () ;
    if (kBoolTrue == test_1) {
      var_first_16554 = GALGAS_bool (false) ;
    }else if (kBoolFalse == test_1) {
      result_result.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 467)) ;
    }
    switch (enumerator_16731.current_mFormalArgumentKind (HERE).enumValue ()) {
    case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_input:
      {
        result_result.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_16731.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 471)).add_operation (GALGAS_string (" %in."), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 471)).add_operation (enumerator_16731.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 471)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 471)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_output:
      {
        result_result.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_16731.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 473)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 473)).add_operation (function_llvmNameForLocalVariable (enumerator_16731.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 473)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 473)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 473)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
      {
        result_result.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_16731.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 475)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 475)).add_operation (function_llvmNameForLocalVariable (enumerator_16731.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 475)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 475)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 475)) ;
      }
      break ;
    }
    enumerator_16731.gotoNextObject () ;
  }
  result_result.plusAssign_operation(GALGAS_string (")").add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 478)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 478)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 478)) ;
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function introspection                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const C_galgas_type_descriptor * functionArgs_llvmFunctionPrototype [5] = {
  & kTypeDescriptor_GALGAS_string,
  & kTypeDescriptor_GALGAS_string,
  & kTypeDescriptor_GALGAS_PLMType,
  & kTypeDescriptor_GALGAS_routineFormalArgumentListIR,
  NULL
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_object functionWithGenericHeader_llvmFunctionPrototype (C_Compiler * inCompiler,
                                                                      const cObjectArray & inEffectiveParameterArray,
                                                                      const GALGAS_location & /* inErrorLocation */
                                                                      COMMA_LOCATION_ARGS) {
  const GALGAS_string operand0 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  const GALGAS_string operand1 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  const GALGAS_PLMType operand2 = GALGAS_PLMType::extractObject (inEffectiveParameterArray.objectAtIndex (2 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  const GALGAS_routineFormalArgumentListIR operand3 = GALGAS_routineFormalArgumentListIR::extractObject (inEffectiveParameterArray.objectAtIndex (3 COMMA_HERE),
                                                                                                         inCompiler
                                                                                                         COMMA_THERE) ;
  return function_llvmFunctionPrototype (operand0,
                                         operand1,
                                         operand2,
                                         operand3,
                                         inCompiler
                                         COMMA_THERE).getter_object (THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_galgas_function_descriptor functionDescriptor_llvmFunctionPrototype ("llvmFunctionPrototype",
                                                                       functionWithGenericHeader_llvmFunctionPrototype,
                                                                       & kTypeDescriptor_GALGAS_string,
                                                                       4,
                                                                       functionArgs_llvmFunctionPrototype) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                         Routine 'generateSectionDispatcher'                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_generateSectionDispatcher (const GALGAS_string constinArgument_inCurrentDirectory,
                                        const GALGAS_string constinArgument_inTargetName,
                                        const GALGAS_targetParameters constinArgument_inTargetParameters,
                                        GALGAS_string & ioArgument_ioAssemblerCode,
                                        const GALGAS_sectionIRlist constinArgument_inSectionIRlist,
                                        C_Compiler * inCompiler
                                        COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_sectionIRlist enumerator_17636 (constinArgument_inSectionIRlist, kENUMERATION_UP) ;
  GALGAS_uint index_17609 ((uint32_t) 0) ;
  while (enumerator_17636.hasCurrentObject ()) {
    const enumGalgasBool test_0 = enumerator_17636.current (HERE).getter_mInvocationFromUserModeOnly (HERE).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_string var_s_17705 = function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 494)).add_operation (constinArgument_inTargetParameters.getter_mSectionDispatcherInvocationFromUserMode (HERE).getter_string (SOURCE_FILE ("declaration-svc.galgas", 494)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 494)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 492)) ;
      var_s_17705 = var_s_17705.getter_stringByReplacingStringByString (GALGAS_string ("!USER_ROUTINE!"), enumerator_17636.current (HERE).getter_mSectionCallName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 496)) ;
      var_s_17705 = var_s_17705.getter_stringByReplacingStringByString (GALGAS_string ("!IMPLEMENTATION_ROUTINE!"), enumerator_17636.current (HERE).getter_mSectionImplementationName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 497)) ;
      var_s_17705 = var_s_17705.getter_stringByReplacingStringByString (GALGAS_string ("!IDX!"), index_17609.getter_string (SOURCE_FILE ("declaration-svc.galgas", 498)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 498)) ;
      ioArgument_ioAssemblerCode.plusAssign_operation(var_s_17705, inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 499)) ;
    }else if (kBoolFalse == test_0) {
      GALGAS_string var_s_18186 = function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 503)).add_operation (constinArgument_inTargetParameters.getter_mSectionDispatcherInvocationFromAnyMode (HERE).getter_string (SOURCE_FILE ("declaration-svc.galgas", 503)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 503)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 501)) ;
      var_s_18186 = var_s_18186.getter_stringByReplacingStringByString (GALGAS_string ("!USER_ROUTINE!"), enumerator_17636.current (HERE).getter_mSectionCallName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 505)) ;
      var_s_18186 = var_s_18186.getter_stringByReplacingStringByString (GALGAS_string ("!IMPLEMENTATION_ROUTINE!"), enumerator_17636.current (HERE).getter_mSectionImplementationName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 506)) ;
      var_s_18186 = var_s_18186.getter_stringByReplacingStringByString (GALGAS_string ("!IDX!"), index_17609.getter_string (SOURCE_FILE ("declaration-svc.galgas", 507)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 507)) ;
      ioArgument_ioAssemblerCode.plusAssign_operation(var_s_18186, inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 508)) ;
    }
    enumerator_17636.gotoNextObject () ;
    index_17609.increment_operation (inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 490)) ;
  }
  ioArgument_ioAssemblerCode.plusAssign_operation(function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 513)).add_operation (constinArgument_inTargetParameters.getter_mSectionDispatcherHeader (HERE).getter_string (SOURCE_FILE ("declaration-svc.galgas", 513)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 513)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 511)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 511)) ;
  cEnumerator_sectionIRlist enumerator_18896 (constinArgument_inSectionIRlist, kENUMERATION_UP) ;
  GALGAS_uint index_18820 ((uint32_t) 0) ;
  while (enumerator_18896.hasCurrentObject ()) {
    GALGAS_string var_s_18915 = function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 518)).add_operation (constinArgument_inTargetParameters.getter_mSectionDispatcherEntry (HERE).getter_string (SOURCE_FILE ("declaration-svc.galgas", 518)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 518)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 516)) ;
    var_s_18915 = var_s_18915.getter_stringByReplacingStringByString (GALGAS_string ("!USER_ROUTINE!"), enumerator_18896.current_mSectionCallName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 520)) ;
    var_s_18915 = var_s_18915.getter_stringByReplacingStringByString (GALGAS_string ("!IMPLEMENTATION_ROUTINE!"), enumerator_18896.current_mSectionImplementationName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 521)) ;
    var_s_18915 = var_s_18915.getter_stringByReplacingStringByString (GALGAS_string ("!IDX!"), index_18820.getter_string (SOURCE_FILE ("declaration-svc.galgas", 522)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 522)) ;
    ioArgument_ioAssemblerCode.plusAssign_operation(var_s_18915, inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 523)) ;
    enumerator_18896.gotoNextObject () ;
    index_18820.increment_operation (inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 515)) ;
  }
  ioArgument_ioAssemblerCode.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 525)) ;
  ioArgument_ioAssemblerCode.plusAssign_operation(function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 528)).add_operation (constinArgument_inTargetParameters.getter_mSectionHandler (HERE).getter_string (SOURCE_FILE ("declaration-svc.galgas", 528)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 528)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 526)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 526)) ;
  ioArgument_ioAssemblerCode.plusAssign_operation(GALGAS_string ("@-------------------------------------------------------------"), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 530)) ;
  ioArgument_ioAssemblerCode.plusAssign_operation(GALGAS_string ("---------------------------------------------------------*\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 531)) ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                   Routine 'generatePrimitiveAndServiceDispatcher'                                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_generatePrimitiveAndServiceDispatcher (const GALGAS_string constinArgument_inCurrentDirectory,
                                                    const GALGAS_string constinArgument_inTargetName,
                                                    GALGAS_string & ioArgument_ioAssemblerCode,
                                                    const GALGAS_primitiveAndServiceIRlist constinArgument_inServiceList,
                                                    const GALGAS_targetParameters constinArgument_inTargetParameters,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioAssemblerCode.plusAssign_operation(function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 546)).add_operation (constinArgument_inTargetParameters.getter_mServiceHandler (HERE).getter_string (SOURCE_FILE ("declaration-svc.galgas", 546)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 546)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 544)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 544)) ;
  cEnumerator_primitiveAndServiceIRlist enumerator_20241 (constinArgument_inServiceList, kENUMERATION_UP) ;
  GALGAS_uint index_20216 ((uint32_t) 0) ;
  while (enumerator_20241.hasCurrentObject ()) {
    const enumGalgasBool test_0 = enumerator_20241.current (HERE).getter_mHasReturnValue (HERE).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_string var_s_20298 = function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 553)).add_operation (constinArgument_inTargetParameters.getter_mServiceEntryWithReturnValue (HERE).getter_string (SOURCE_FILE ("declaration-svc.galgas", 553)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 553)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 551)) ;
      var_s_20298 = var_s_20298.getter_stringByReplacingStringByString (GALGAS_string ("!ENTRY!"), enumerator_20241.current (HERE).getter_mCallName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 555)) ;
      var_s_20298 = var_s_20298.getter_stringByReplacingStringByString (GALGAS_string ("!IDX!"), index_20216.getter_string (SOURCE_FILE ("declaration-svc.galgas", 556)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 556)) ;
      ioArgument_ioAssemblerCode.plusAssign_operation(var_s_20298, inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 557)) ;
    }else if (kBoolFalse == test_0) {
      GALGAS_string var_s_20643 = function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 561)).add_operation (constinArgument_inTargetParameters.getter_mServiceEntryNoReturnedValue (HERE).getter_string (SOURCE_FILE ("declaration-svc.galgas", 561)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 561)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 559)) ;
      var_s_20643 = var_s_20643.getter_stringByReplacingStringByString (GALGAS_string ("!ENTRY!"), enumerator_20241.current (HERE).getter_mCallName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 563)) ;
      var_s_20643 = var_s_20643.getter_stringByReplacingStringByString (GALGAS_string ("!IDX!"), index_20216.getter_string (SOURCE_FILE ("declaration-svc.galgas", 564)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 564)) ;
      ioArgument_ioAssemblerCode.plusAssign_operation(var_s_20643, inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 565)) ;
    }
    enumerator_20241.gotoNextObject () ;
    index_20216.increment_operation (inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 549)) ;
  }
  ioArgument_ioAssemblerCode.plusAssign_operation(function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 570)).add_operation (constinArgument_inTargetParameters.getter_mServiceDispatcherHeader (HERE).getter_string (SOURCE_FILE ("declaration-svc.galgas", 570)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 570)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 568)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 568)) ;
  cEnumerator_primitiveAndServiceIRlist enumerator_21167 (constinArgument_inServiceList, kENUMERATION_UP) ;
  GALGAS_uint index_21142 ((uint32_t) 0) ;
  while (enumerator_21167.hasCurrentObject ()) {
    GALGAS_string var_s_21186 = function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 575)).add_operation (constinArgument_inTargetParameters.getter_mServiceDispatcherEntry (HERE).getter_string (SOURCE_FILE ("declaration-svc.galgas", 575)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 575)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 573)) ;
    var_s_21186 = var_s_21186.getter_stringByReplacingStringByString (GALGAS_string ("!ENTRY!"), enumerator_21167.current (HERE).getter_mImplementationName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 577)) ;
    var_s_21186 = var_s_21186.getter_stringByReplacingStringByString (GALGAS_string ("!IDX!"), index_21142.getter_string (SOURCE_FILE ("declaration-svc.galgas", 578)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 578)) ;
    ioArgument_ioAssemblerCode.plusAssign_operation(var_s_21186, inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 579)) ;
    enumerator_21167.gotoNextObject () ;
    index_21142.increment_operation (inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 572)) ;
  }
  ioArgument_ioAssemblerCode.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 581)) ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                     Overriding extension method '@systemUserRoutineIR enterAccessibleEntities'                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_systemUserRoutineIR_enterAccessibleEntities (const cPtr_abstractRoutineIR * inObject,
                                                                         GALGAS_stringset & ioArgument_ioInvokedRoutineSet,
                                                                         GALGAS_uint & /* ioArgument_ioMaxBranchOfOnInstructions */,
                                                                         C_Compiler * /* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_systemUserRoutineIR * object = (const cPtr_systemUserRoutineIR *) inObject ;
  macroValidSharedObject (object, cPtr_systemUserRoutineIR) ;
  ioArgument_ioInvokedRoutineSet.addAssign_operation (object->mProperty_mMangledImplementationName  COMMA_SOURCE_FILE ("declaration-svc.galgas", 602)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_systemUserRoutineIR_enterAccessibleEntities (void) {
  enterExtensionMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_systemUserRoutineIR.mSlotID,
                                                extensionMethod_systemUserRoutineIR_enterAccessibleEntities) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_systemUserRoutineIR_enterAccessibleEntities (defineExtensionMethod_systemUserRoutineIR_enterAccessibleEntities, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                     Overriding extension method '@systemUserRoutineIR svcDeclarationGeneration'                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_systemUserRoutineIR_svcDeclarationGeneration (const cPtr_abstractRoutineIR * inObject,
                                                                          GALGAS_primitiveAndServiceIRlist & ioArgument_ioPrimitiveAndServiceList,
                                                                          GALGAS_sectionIRlist & ioArgument_ioSectionList,
                                                                          GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                          C_Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_systemUserRoutineIR * object = (const cPtr_systemUserRoutineIR *) inObject ;
  macroValidSharedObject (object, cPtr_systemUserRoutineIR) ;
  GALGAS_string var_userMangledName_22743 = object->mProperty_mRoutineMangledName.getter_string (HERE).getter_assemblerRepresentation (SOURCE_FILE ("declaration-svc.galgas", 612)) ;
  GALGAS_string var_implementationMangledName_22823 = object->mProperty_mMangledImplementationName.getter_assemblerRepresentation (SOURCE_FILE ("declaration-svc.galgas", 613)) ;
  const enumGalgasBool test_0 = object->mProperty_mIsSection.boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioSectionList.addAssign_operation (var_userMangledName_22743, var_implementationMangledName_22823, GALGAS_bool (false)  COMMA_SOURCE_FILE ("declaration-svc.galgas", 615)) ;
  }else if (kBoolFalse == test_0) {
    ioArgument_ioPrimitiveAndServiceList.addAssign_operation (var_userMangledName_22743, var_implementationMangledName_22823, GALGAS_bool (false)  COMMA_SOURCE_FILE ("declaration-svc.galgas", 617)) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_systemUserRoutineIR_svcDeclarationGeneration (void) {
  enterExtensionMethod_svcDeclarationGeneration (kTypeDescriptor_GALGAS_systemUserRoutineIR.mSlotID,
                                                 extensionMethod_systemUserRoutineIR_svcDeclarationGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_systemUserRoutineIR_svcDeclarationGeneration (defineExtensionMethod_systemUserRoutineIR_svcDeclarationGeneration, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                        Overriding extension method '@systemUserRoutineIR llvmCodeGeneration'                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_systemUserRoutineIR_llvmCodeGeneration (const cPtr_abstractRoutineIR * inObject,
                                                                    GALGAS_string & ioArgument_ioLLVMcode,
                                                                    const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                    GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_systemUserRoutineIR * object = (const cPtr_systemUserRoutineIR *) inObject ;
  macroValidSharedObject (object, cPtr_systemUserRoutineIR) ;
  ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (object->mProperty_mRoutineMangledName.getter_string (SOURCE_FILE ("declaration-svc.galgas", 628)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 628)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 628)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("declare "), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 629)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mProperty_mReturnTypeProxy.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-svc.galgas", 630)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("void"), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 631)) ;
  }else if (kBoolFalse == test_0) {
    ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (object->mProperty_mReturnTypeProxy.getter_type (inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 633)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 633)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 633)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" @").add_operation (object->mProperty_mRoutineMangledName.getter_string (HERE).getter_assemblerRepresentation (SOURCE_FILE ("declaration-svc.galgas", 635)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 635)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 635)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 635)) ;
  GALGAS_bool var_first_23674 = GALGAS_bool (true) ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, object->mProperty_mReceiverTypeProxy.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-svc.galgas", 637)))).boolEnum () ;
  if (kBoolTrue == test_1) {
    ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (object->mProperty_mReceiverTypeProxy.getter_type (inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 638)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 638)).add_operation (GALGAS_string ("* %receiver"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 638)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 638)) ;
    var_first_23674 = GALGAS_bool (false) ;
  }
  cEnumerator_routineTypedSignature enumerator_23850 (object->mProperty_mFormalArgumentList, kENUMERATION_UP) ;
  while (enumerator_23850.hasCurrentObject ()) {
    const enumGalgasBool test_2 = var_first_23674.boolEnum () ;
    if (kBoolTrue == test_2) {
      var_first_23674 = GALGAS_bool (false) ;
    }else if (kBoolFalse == test_2) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 645)) ;
    }
    switch (enumerator_23850.current_mFormalArgumentPassingMode (HERE).enumValue ()) {
    case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_input:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_23850.current_mTypeProxy (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 649)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 649)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 649)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_output:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_23850.current_mTypeProxy (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 651)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 651)).add_operation (GALGAS_string ("*"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 651)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 651)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_23850.current_mTypeProxy (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 653)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 653)).add_operation (GALGAS_string ("*"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 653)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 653)) ;
      }
      break ;
    }
    enumerator_23850.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (")").add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 656)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 656)).add_operation (GALGAS_string ("; \xC2""\xA7""\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 656)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 656)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_systemUserRoutineIR_llvmCodeGeneration (void) {
  enterExtensionMethod_llvmCodeGeneration (kTypeDescriptor_GALGAS_systemUserRoutineIR.mSlotID,
                                           extensionMethod_systemUserRoutineIR_llvmCodeGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_systemUserRoutineIR_llvmCodeGeneration (defineExtensionMethod_systemUserRoutineIR_llvmCodeGeneration, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                          Routine 'checkRequiredProcedures'                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_checkRequiredProcedures (const GALGAS_ast constinArgument_inAST,
                                      const GALGAS_semanticContext constinArgument_inSemanticContext,
                                      const GALGAS_location /* constinArgument_inEndOfSourceFile */,
                                      C_Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_requiredProcedureDeclarationListAST enumerator_2539 (constinArgument_inAST.getter_mRequiredProcListAST (HERE), kENUMERATION_UP) ;
  while (enumerator_2539.hasCurrentObject ()) {
    GALGAS_lstring var_argumentSignature_2568 = extensionGetter_routineSignature (enumerator_2539.current (HERE).getter_mFormalArgumentList (HERE), enumerator_2539.current (HERE).getter_mName (HERE).getter_location (SOURCE_FILE ("declaration-required-proc.galgas", 70)), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 70)) ;
    const enumGalgasBool test_0 = extensionGetter_hasKey (constinArgument_inSemanticContext.getter_mRoutineMapForContext (HERE), GALGAS_string::makeEmptyString (), enumerator_2539.current (HERE).getter_mName (HERE), var_argumentSignature_2568, inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 71)).operator_not (SOURCE_FILE ("declaration-required-proc.galgas", 71)).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (enumerator_2539.current (HERE).getter_mName (HERE).getter_location (SOURCE_FILE ("declaration-required-proc.galgas", 72)), GALGAS_string ("required func is not implemented"), fixItArray1  COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 72)) ;
    }else if (kBoolFalse == test_0) {
      GALGAS_routineDescriptor var_routineDescriptor_3012 ;
      GALGAS_location var_routineLocation_3051 ;
      GALGAS_lstring joker_2961 ; // Joker input parameter
      extensionMethod_searchKey (constinArgument_inSemanticContext.getter_mRoutineMapForContext (HERE), GALGAS_string::makeEmptyString (), enumerator_2539.current (HERE).getter_mName (HERE), var_argumentSignature_2568, joker_2961, var_routineDescriptor_3012, var_routineLocation_3051, inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 74)) ;
      GALGAS_bool var_isExported_3080 = var_routineDescriptor_3012.getter_exported (HERE) ;
      GALGAS_mode var_mode_3124 = extensionGetter_executionMode (var_routineDescriptor_3012.getter_routineKind (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 83)) ;
      const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_mode_3124.objectCompare (enumerator_2539.current (HERE).getter_mExecutionMode (HERE))).boolEnum () ;
      if (kBoolTrue == test_2) {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (var_routineLocation_3051, GALGAS_string ("required mode should be '").add_operation (extensionGetter_string (enumerator_2539.current (HERE).getter_mExecutionMode (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 86)), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 86)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 86)), fixItArray3  COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 86)) ;
      }
      GALGAS_bool test_4 = enumerator_2539.current (HERE).getter_mIsExported (HERE) ;
      if (kBoolTrue == test_4.boolEnum ()) {
        test_4 = var_isExported_3080.operator_not (SOURCE_FILE ("declaration-required-proc.galgas", 89)) ;
      }
      const enumGalgasBool test_5 = test_4.boolEnum () ;
      if (kBoolTrue == test_5) {
        TC_Array <C_FixItDescription> fixItArray6 ;
        appendFixItActions (fixItArray6, kFixItInsertAfter, GALGAS_string (" @").add_operation (function_exportedAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 92)), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 92))) ;
        inCompiler->emitSemanticError (var_routineLocation_3051, GALGAS_string ("missing @").add_operation (function_exportedAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 91)), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 91)).add_operation (GALGAS_string (" attribute (required function declaration names it)"), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 91)), fixItArray6  COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 90)) ;
      }else if (kBoolFalse == test_5) {
        GALGAS_bool test_7 = var_isExported_3080 ;
        if (kBoolTrue == test_7.boolEnum ()) {
          test_7 = enumerator_2539.current (HERE).getter_mIsExported (HERE).operator_not (SOURCE_FILE ("declaration-required-proc.galgas", 93)) ;
        }
        const enumGalgasBool test_8 = test_7.boolEnum () ;
        if (kBoolTrue == test_8) {
          TC_Array <C_FixItDescription> fixItArray9 ;
          inCompiler->emitSemanticError (var_routineLocation_3051, GALGAS_string ("incorrect @").add_operation (function_exportedAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 95)), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 95)).add_operation (GALGAS_string (" attribute (required function declaration does not name it)"), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 95)), fixItArray9  COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 94)) ;
        }
      }
    }
    enumerator_2539.gotoNextObject () ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                          Overriding extension method '@externRoutineIR llvmCodeGeneration'                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_externRoutineIR_llvmCodeGeneration (const cPtr_abstractRoutineIR * inObject,
                                                                GALGAS_string & ioArgument_ioLLVMcode,
                                                                const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_externRoutineIR * object = (const cPtr_externRoutineIR *) inObject ;
  macroValidSharedObject (object, cPtr_externRoutineIR) ;
  ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (object->mProperty_mRoutineMangledName.getter_string (SOURCE_FILE ("declaration-extern-proc.galgas", 183)), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 183)), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 183)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("declare"), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 184)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mProperty_mReturnType.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-extern-proc.galgas", 185)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" void"), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 186)) ;
  }else if (kBoolFalse == test_0) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ").add_operation (extensionGetter_llvmTypeName (object->mProperty_mReturnType.getter_type (inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 188)), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 188)), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 188)), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 188)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" @").add_operation (object->mProperty_mRoutineMangledName.getter_string (HERE).getter_assemblerRepresentation (SOURCE_FILE ("declaration-extern-proc.galgas", 190)), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 190)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 190)), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 190)) ;
  cEnumerator_routineFormalArgumentListIR enumerator_7505 (object->mProperty_mFormalArgumentListForGeneration, kENUMERATION_UP) ;
  while (enumerator_7505.hasCurrentObject ()) {
    switch (enumerator_7505.current_mFormalArgumentKind (HERE).enumValue ()) {
    case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_input:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_7505.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 195)).add_operation (GALGAS_string (" %in."), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 195)).add_operation (enumerator_7505.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 195)), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 195)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_output:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_7505.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 197)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 197)).add_operation (function_llvmNameForLocalVariable (enumerator_7505.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 197)), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 197)), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 197)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_7505.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 199)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 199)).add_operation (function_llvmNameForLocalVariable (enumerator_7505.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 199)), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 199)), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 199)) ;
      }
      break ;
    }
    if (enumerator_7505.hasNextObject ()) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 202)) ;
    }
    enumerator_7505.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (")").add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 204)), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 204)).add_operation (GALGAS_string ("; declared by extern PLM function declaration\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 204)), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 204)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_externRoutineIR_llvmCodeGeneration (void) {
  enterExtensionMethod_llvmCodeGeneration (kTypeDescriptor_GALGAS_externRoutineIR.mSlotID,
                                           extensionMethod_externRoutineIR_llvmCodeGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_externRoutineIR_llvmCodeGeneration (defineExtensionMethod_externRoutineIR_llvmCodeGeneration, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                      Overriding extension method '@decoratedISRDeclarations semanticAnalysis'                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_decoratedISRDeclarations_semanticAnalysis (const cPtr_abstractDecoratedDeclaration * inObject,
                                                                       const GALGAS_semanticContext constinArgument_inContext,
                                                                       GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                       GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_decoratedISRDeclarations * object = (const cPtr_decoratedISRDeclarations *) inObject ;
  macroValidSharedObject (object, cPtr_decoratedISRDeclarations) ;
  cEnumerator_isrDeclarationListAST enumerator_3871 (object->mProperty_mISRDeclarationList, kENUMERATION_UP) ;
  while (enumerator_3871.hasCurrentObject ()) {
    GALGAS_PLMType var_selfType_4308 ;
    GALGAS_uint joker_4310_2 ; // Joker input parameter
    GALGAS_bool joker_4310_1 ; // Joker input parameter
    constinArgument_inContext.getter_mTypeMap (HERE).method_searchKey (function_typeNameForTypeMapForDriver (enumerator_3871.current (HERE).getter_mDriverName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 99)), var_selfType_4308, joker_4310_2, joker_4310_1, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 99)) ;
    GALGAS_interruptionPanicCode joker_4400 ; // Joker input parameter
    constinArgument_inContext.getter_mAvailableInterruptMap (HERE).method_searchKey (enumerator_3871.current (HERE).getter_mISRName (HERE), joker_4400, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 101)) ;
    {
    ioArgument_ioIntermediateCodeStruct.mProperty_mInterruptMapIR.setter_insertKey (enumerator_3871.current (HERE).getter_mISRName (HERE), var_selfType_4308, enumerator_3871.current (HERE).getter_mDriverName (HERE).getter_string (SOURCE_FILE ("declaration-isr.galgas", 105)), enumerator_3871.current (HERE).getter_mMode (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 102)) ;
    }
    enumerator_3871.gotoNextObject () ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_decoratedISRDeclarations_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_decoratedISRDeclarations.mSlotID,
                                         extensionMethod_decoratedISRDeclarations_semanticAnalysis) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_decoratedISRDeclarations_semanticAnalysis (defineExtensionMethod_decoratedISRDeclarations_semanticAnalysis, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                       Function 'guardUserMangledNameFromAST'                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring function_guardUserMangledNameFromAST (const GALGAS_string & constinArgument_inReceiverTypeName,
                                                     const GALGAS_lstring & constinArgument_inGuardName,
                                                     const GALGAS_routineFormalArgumentListAST & constinArgument_inFormalArgumentList,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  GALGAS_string var_s_3627 = GALGAS_string ("guard.user.") ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inReceiverTypeName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_s_3627.plusAssign_operation(constinArgument_inReceiverTypeName.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 95)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 95)) ;
  }
  var_s_3627.plusAssign_operation(constinArgument_inGuardName.getter_string (HERE), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 97)) ;
  var_s_3627.plusAssign_operation(GALGAS_string ("("), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 98)) ;
  cEnumerator_routineFormalArgumentListAST enumerator_3847 (constinArgument_inFormalArgumentList, kENUMERATION_UP) ;
  while (enumerator_3847.hasCurrentObject ()) {
    var_s_3627.plusAssign_operation(extensionGetter_formalPassingModeString (enumerator_3847.current_mFormalArgumentPassingMode (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 100)).add_operation (enumerator_3847.current_mSelector (HERE).getter_string (SOURCE_FILE ("declaration-guard.galgas", 100)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 100)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 100)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 100)) ;
    enumerator_3847.gotoNextObject () ;
  }
  var_s_3627.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 102)) ;
  result_result = GALGAS_lstring::constructor_new (var_s_3627, constinArgument_inGuardName.getter_location (HERE)  COMMA_SOURCE_FILE ("declaration-guard.galgas", 103)) ;
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function introspection                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const C_galgas_type_descriptor * functionArgs_guardUserMangledNameFromAST [4] = {
  & kTypeDescriptor_GALGAS_string,
  & kTypeDescriptor_GALGAS_lstring,
  & kTypeDescriptor_GALGAS_routineFormalArgumentListAST,
  NULL
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_object functionWithGenericHeader_guardUserMangledNameFromAST (C_Compiler * inCompiler,
                                                                            const cObjectArray & inEffectiveParameterArray,
                                                                            const GALGAS_location & /* inErrorLocation */
                                                                            COMMA_LOCATION_ARGS) {
  const GALGAS_string operand0 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  const GALGAS_lstring operand1 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  const GALGAS_routineFormalArgumentListAST operand2 = GALGAS_routineFormalArgumentListAST::extractObject (inEffectiveParameterArray.objectAtIndex (2 COMMA_HERE),
                                                                                                           inCompiler
                                                                                                           COMMA_THERE) ;
  return function_guardUserMangledNameFromAST (operand0,
                                               operand1,
                                               operand2,
                                               inCompiler
                                               COMMA_THERE).getter_object (THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_galgas_function_descriptor functionDescriptor_guardUserMangledNameFromAST ("guardUserMangledNameFromAST",
                                                                             functionWithGenericHeader_guardUserMangledNameFromAST,
                                                                             & kTypeDescriptor_GALGAS_lstring,
                                                                             3,
                                                                             functionArgs_guardUserMangledNameFromAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                       Function 'guardUserMangledNameFromCall'                                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring function_guardUserMangledNameFromCall (const GALGAS_string & constinArgument_inReceiverTypeName,
                                                      const GALGAS_lstring & constinArgument_inGuardName,
                                                      const GALGAS_effectiveArgumentListAST & constinArgument_inEffectiveParameterList,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  GALGAS_string var_s_4350 = GALGAS_string ("guard.user.") ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inReceiverTypeName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_s_4350.plusAssign_operation(constinArgument_inReceiverTypeName.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 114)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 114)) ;
  }
  var_s_4350.plusAssign_operation(constinArgument_inGuardName.getter_string (HERE), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 116)) ;
  var_s_4350.plusAssign_operation(GALGAS_string ("("), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 117)) ;
  cEnumerator_effectiveArgumentListAST enumerator_4535 (constinArgument_inEffectiveParameterList, kENUMERATION_UP) ;
  while (enumerator_4535.hasCurrentObject ()) {
    var_s_4350.plusAssign_operation(extensionGetter_matchingFormalArgument (enumerator_4535.current_mEffectiveParameterKind (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 119)).add_operation (enumerator_4535.current_mSelector (HERE).getter_string (SOURCE_FILE ("declaration-guard.galgas", 119)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 119)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 119)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 119)) ;
    enumerator_4535.gotoNextObject () ;
  }
  var_s_4350.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 121)) ;
  result_result = GALGAS_lstring::constructor_new (var_s_4350, constinArgument_inGuardName.getter_location (HERE)  COMMA_SOURCE_FILE ("declaration-guard.galgas", 122)) ;
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function introspection                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const C_galgas_type_descriptor * functionArgs_guardUserMangledNameFromCall [4] = {
  & kTypeDescriptor_GALGAS_string,
  & kTypeDescriptor_GALGAS_lstring,
  & kTypeDescriptor_GALGAS_effectiveArgumentListAST,
  NULL
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_object functionWithGenericHeader_guardUserMangledNameFromCall (C_Compiler * inCompiler,
                                                                             const cObjectArray & inEffectiveParameterArray,
                                                                             const GALGAS_location & /* inErrorLocation */
                                                                             COMMA_LOCATION_ARGS) {
  const GALGAS_string operand0 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  const GALGAS_lstring operand1 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  const GALGAS_effectiveArgumentListAST operand2 = GALGAS_effectiveArgumentListAST::extractObject (inEffectiveParameterArray.objectAtIndex (2 COMMA_HERE),
                                                                                                   inCompiler
                                                                                                   COMMA_THERE) ;
  return function_guardUserMangledNameFromCall (operand0,
                                                operand1,
                                                operand2,
                                                inCompiler
                                                COMMA_THERE).getter_object (THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_galgas_function_descriptor functionDescriptor_guardUserMangledNameFromCall ("guardUserMangledNameFromCall",
                                                                              functionWithGenericHeader_guardUserMangledNameFromCall,
                                                                              & kTypeDescriptor_GALGAS_lstring,
                                                                              3,
                                                                              functionArgs_guardUserMangledNameFromCall) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                  Function 'guardImplementationMangledNameFromAST'                                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring function_guardImplementationMangledNameFromAST (const GALGAS_string & constinArgument_inReceiverTypeName,
                                                               const GALGAS_lstring & constinArgument_inGuardName,
                                                               const GALGAS_routineFormalArgumentListAST & constinArgument_inFormalArgumentList,
                                                               C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  GALGAS_string var_s_5051 = GALGAS_string ("guard.implementation.") ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inReceiverTypeName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_s_5051.plusAssign_operation(constinArgument_inReceiverTypeName.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 133)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 133)) ;
  }
  var_s_5051.plusAssign_operation(constinArgument_inGuardName.getter_string (HERE), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 135)) ;
  var_s_5051.plusAssign_operation(GALGAS_string ("("), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 136)) ;
  cEnumerator_routineFormalArgumentListAST enumerator_5281 (constinArgument_inFormalArgumentList, kENUMERATION_UP) ;
  while (enumerator_5281.hasCurrentObject ()) {
    var_s_5051.plusAssign_operation(extensionGetter_formalPassingModeString (enumerator_5281.current_mFormalArgumentPassingMode (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 138)).add_operation (enumerator_5281.current_mSelector (HERE).getter_string (SOURCE_FILE ("declaration-guard.galgas", 138)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 138)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 138)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 138)) ;
    enumerator_5281.gotoNextObject () ;
  }
  var_s_5051.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 140)) ;
  result_result = GALGAS_lstring::constructor_new (var_s_5051, constinArgument_inGuardName.getter_location (HERE)  COMMA_SOURCE_FILE ("declaration-guard.galgas", 141)) ;
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function introspection                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const C_galgas_type_descriptor * functionArgs_guardImplementationMangledNameFromAST [4] = {
  & kTypeDescriptor_GALGAS_string,
  & kTypeDescriptor_GALGAS_lstring,
  & kTypeDescriptor_GALGAS_routineFormalArgumentListAST,
  NULL
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_object functionWithGenericHeader_guardImplementationMangledNameFromAST (C_Compiler * inCompiler,
                                                                                      const cObjectArray & inEffectiveParameterArray,
                                                                                      const GALGAS_location & /* inErrorLocation */
                                                                                      COMMA_LOCATION_ARGS) {
  const GALGAS_string operand0 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  const GALGAS_lstring operand1 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  const GALGAS_routineFormalArgumentListAST operand2 = GALGAS_routineFormalArgumentListAST::extractObject (inEffectiveParameterArray.objectAtIndex (2 COMMA_HERE),
                                                                                                           inCompiler
                                                                                                           COMMA_THERE) ;
  return function_guardImplementationMangledNameFromAST (operand0,
                                                         operand1,
                                                         operand2,
                                                         inCompiler
                                                         COMMA_THERE).getter_object (THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_galgas_function_descriptor functionDescriptor_guardImplementationMangledNameFromAST ("guardImplementationMangledNameFromAST",
                                                                                       functionWithGenericHeader_guardImplementationMangledNameFromAST,
                                                                                       & kTypeDescriptor_GALGAS_lstring,
                                                                                       3,
                                                                                       functionArgs_guardImplementationMangledNameFromAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                  Function 'guardImplementationMangledNameFromCall'                                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring function_guardImplementationMangledNameFromCall (const GALGAS_string & constinArgument_inReceiverTypeName,
                                                                const GALGAS_lstring & constinArgument_inGuardName,
                                                                const GALGAS_effectiveArgumentListAST & constinArgument_inEffectiveParameterList,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  GALGAS_string var_s_5814 = GALGAS_string ("guard.implementation.") ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inReceiverTypeName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_s_5814.plusAssign_operation(constinArgument_inReceiverTypeName.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 152)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 152)) ;
  }
  var_s_5814.plusAssign_operation(constinArgument_inGuardName.getter_string (HERE), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 154)) ;
  var_s_5814.plusAssign_operation(GALGAS_string ("("), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 155)) ;
  cEnumerator_effectiveArgumentListAST enumerator_6009 (constinArgument_inEffectiveParameterList, kENUMERATION_UP) ;
  while (enumerator_6009.hasCurrentObject ()) {
    var_s_5814.plusAssign_operation(extensionGetter_matchingFormalArgument (enumerator_6009.current_mEffectiveParameterKind (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 157)).add_operation (enumerator_6009.current_mSelector (HERE).getter_string (SOURCE_FILE ("declaration-guard.galgas", 157)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 157)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 157)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 157)) ;
    enumerator_6009.gotoNextObject () ;
  }
  var_s_5814.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 159)) ;
  result_result = GALGAS_lstring::constructor_new (var_s_5814, constinArgument_inGuardName.getter_location (HERE)  COMMA_SOURCE_FILE ("declaration-guard.galgas", 160)) ;
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function introspection                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const C_galgas_type_descriptor * functionArgs_guardImplementationMangledNameFromCall [4] = {
  & kTypeDescriptor_GALGAS_string,
  & kTypeDescriptor_GALGAS_lstring,
  & kTypeDescriptor_GALGAS_effectiveArgumentListAST,
  NULL
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_object functionWithGenericHeader_guardImplementationMangledNameFromCall (C_Compiler * inCompiler,
                                                                                       const cObjectArray & inEffectiveParameterArray,
                                                                                       const GALGAS_location & /* inErrorLocation */
                                                                                       COMMA_LOCATION_ARGS) {
  const GALGAS_string operand0 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  const GALGAS_lstring operand1 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  const GALGAS_effectiveArgumentListAST operand2 = GALGAS_effectiveArgumentListAST::extractObject (inEffectiveParameterArray.objectAtIndex (2 COMMA_HERE),
                                                                                                   inCompiler
                                                                                                   COMMA_THERE) ;
  return function_guardImplementationMangledNameFromCall (operand0,
                                                          operand1,
                                                          operand2,
                                                          inCompiler
                                                          COMMA_THERE).getter_object (THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_galgas_function_descriptor functionDescriptor_guardImplementationMangledNameFromCall ("guardImplementationMangledNameFromCall",
                                                                                        functionWithGenericHeader_guardImplementationMangledNameFromCall,
                                                                                        & kTypeDescriptor_GALGAS_lstring,
                                                                                        3,
                                                                                        functionArgs_guardImplementationMangledNameFromCall) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                           Routine 'guardSemanticAnalysis'                                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_guardSemanticAnalysis (const GALGAS_PLMType constinArgument_inSelfType,
                                    const GALGAS_lstring constinArgument_inGuardName,
                                    const GALGAS_routineFormalArgumentListAST constinArgument_inRoutineFormalArgumentList,
                                    const GALGAS_guardKind constinArgument_inGuardKind,
                                    const GALGAS_instructionListAST constinArgument_inRoutineInstructionList,
                                    const GALGAS_location constinArgument_inEndOfRoutineDeclaration,
                                    const GALGAS_bool constinArgument_inWarnIfUnused,
                                    const GALGAS_semanticContext constinArgument_inContext,
                                    GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                    GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                    C_Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_universalValuedObjectMap var_universalMap_8272 = constinArgument_inContext.getter_mValuedObjectMap (HERE) ;
  {
  extensionSetter_openOverrideForSelectBlock (var_universalMap_8272, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 216)) ;
  }
  {
  extensionSetter_openBranch (var_universalMap_8272, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 217)) ;
  }
  GALGAS_routineFormalArgumentListIR var_formalArguments_8424 = GALGAS_routineFormalArgumentListIR::constructor_emptyList (SOURCE_FILE ("declaration-guard.galgas", 218)) ;
  GALGAS_guardKindGenerationIR var_convenienceGuardGenerationIR_8483 ;
  GALGAS_allocaList var_allocaList_8508 = GALGAS_allocaList::constructor_emptyList (SOURCE_FILE ("declaration-guard.galgas", 220)) ;
  GALGAS_instructionListIR var_instructionGenerationList_8560 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("declaration-guard.galgas", 221)) ;
  switch (constinArgument_inGuardKind.enumValue ()) {
  case GALGAS_guardKind::kNotBuilt:
    break ;
  case GALGAS_guardKind::kEnum_baseGuard:
    {
      GALGAS_lstring var_resultVarName_8663 = GALGAS_lstring::constructor_new (function_acceptVariablePLMName (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 225)), constinArgument_inGuardName.getter_location (HERE)  COMMA_SOURCE_FILE ("declaration-guard.galgas", 225)) ;
      GALGAS_PLMType var_resultType_8814 ;
      GALGAS_uint joker_8816_2 ; // Joker input parameter
      GALGAS_bool joker_8816_1 ; // Joker input parameter
      constinArgument_inContext.getter_mTypeMap (HERE).method_searchKey (function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 226)).getter_nowhere (SOURCE_FILE ("declaration-guard.galgas", 226)), var_resultType_8814, joker_8816_2, joker_8816_1, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 226)) ;
      var_allocaList_8508.addAssign_operation (function_llvmNameForLocalVariable (var_resultVarName_8663.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 227)), var_resultType_8814, GALGAS_bool (false)  COMMA_SOURCE_FILE ("declaration-guard.galgas", 227)) ;
      {
      extensionSetter_insertLocalVariable (var_universalMap_8272, var_resultVarName_8663, var_resultType_8814, var_resultVarName_8663, GALGAS_valuedObjectState::constructor_noValue (SOURCE_FILE ("declaration-guard.galgas", 232)), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 228)) ;
      }
      {
      routine_enterFormalArguments (constinArgument_inContext, constinArgument_inRoutineFormalArgumentList, var_universalMap_8272, var_formalArguments_8424, inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 236)) ;
      }
      var_convenienceGuardGenerationIR_8483 = GALGAS_guardKindGenerationIR::constructor_baseGuard (SOURCE_FILE ("declaration-guard.galgas", 242)) ;
      extensionMethod_analyzeRoutineInstructionList (constinArgument_inRoutineInstructionList, constinArgument_inSelfType, GALGAS_routineAttributes::constructor_mutating (SOURCE_FILE ("declaration-guard.galgas", 246)).operator_or (GALGAS_routineAttributes::constructor_directPropertyAccess (SOURCE_FILE ("declaration-guard.galgas", 246)) COMMA_SOURCE_FILE ("declaration-guard.galgas", 246)).operator_or (GALGAS_routineAttributes::constructor_panicAllowed (SOURCE_FILE ("declaration-guard.galgas", 246)) COMMA_SOURCE_FILE ("declaration-guard.galgas", 246)), constinArgument_inContext, GALGAS_mode::constructor_guardMode (SOURCE_FILE ("declaration-guard.galgas", 248)), ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct.mProperty_mStaticEntityMap, var_universalMap_8272, var_allocaList_8508, var_instructionGenerationList_8560, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 244)) ;
    }
    break ;
  case GALGAS_guardKind::kEnum_convenienceGuard:
    {
      const cEnumAssociatedValues_guardKind_convenienceGuard * extractPtr_10876 = (const cEnumAssociatedValues_guardKind_convenienceGuard *) (constinArgument_inGuardKind.unsafePointer ()) ;
      const GALGAS_callInstructionAST extractedValue_baseGuardInstruction = extractPtr_10876->mAssociatedValue0 ;
      {
      routine_enterFormalArguments (constinArgument_inContext, constinArgument_inRoutineFormalArgumentList, var_universalMap_8272, var_formalArguments_8424, inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 257)) ;
      }
      callExtensionMethod_baseGuardAnalyze ((const cPtr_callInstructionAST *) extractedValue_baseGuardInstruction.ptr (), constinArgument_inSelfType, GALGAS_routineAttributes::constructor_mutating (SOURCE_FILE ("declaration-guard.galgas", 266)).operator_or (GALGAS_routineAttributes::constructor_directPropertyAccess (SOURCE_FILE ("declaration-guard.galgas", 266)) COMMA_SOURCE_FILE ("declaration-guard.galgas", 266)), constinArgument_inContext, GALGAS_mode::constructor_serviceMode (SOURCE_FILE ("declaration-guard.galgas", 268)), ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct.mProperty_mStaticEntityMap, var_universalMap_8272, var_convenienceGuardGenerationIR_8483, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 264)) ;
      extensionMethod_analyzeRoutineInstructionList (constinArgument_inRoutineInstructionList, constinArgument_inSelfType, GALGAS_routineAttributes::constructor_mutating (SOURCE_FILE ("declaration-guard.galgas", 277)).operator_or (GALGAS_routineAttributes::constructor_directPropertyAccess (SOURCE_FILE ("declaration-guard.galgas", 277)) COMMA_SOURCE_FILE ("declaration-guard.galgas", 277)).operator_or (GALGAS_routineAttributes::constructor_panicAllowed (SOURCE_FILE ("declaration-guard.galgas", 277)) COMMA_SOURCE_FILE ("declaration-guard.galgas", 277)), constinArgument_inContext, GALGAS_mode::constructor_serviceMode (SOURCE_FILE ("declaration-guard.galgas", 279)), ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct.mProperty_mStaticEntityMap, var_universalMap_8272, var_allocaList_8508, var_instructionGenerationList_8560, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 275)) ;
    }
    break ;
  }
  extensionMethod_checkLocalVariableFinalState (var_universalMap_8272, var_instructionGenerationList_8560, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 288)) ;
  {
  extensionSetter_closeBranch (var_universalMap_8272, constinArgument_inEndOfRoutineDeclaration, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 289)) ;
  }
  {
  extensionSetter_closeOverride (var_universalMap_8272, constinArgument_inEndOfRoutineDeclaration, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 290)) ;
  }
  GALGAS_string temp_0 ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, constinArgument_inSelfType.getter_kind (HERE).objectCompare (GALGAS_typeKind::constructor_void (SOURCE_FILE ("declaration-guard.galgas", 293)))).boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_string::makeEmptyString () ;
  }else if (kBoolFalse == test_1) {
    temp_0 = constinArgument_inSelfType.getter_llvmBaseTypeName (HERE) ;
  }
  GALGAS_lstring var_guardUserMangledName_11150 = function_guardUserMangledNameFromAST (temp_0, constinArgument_inGuardName, constinArgument_inRoutineFormalArgumentList, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 292)) ;
  GALGAS_string temp_2 ;
  const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, constinArgument_inSelfType.getter_kind (HERE).objectCompare (GALGAS_typeKind::constructor_void (SOURCE_FILE ("declaration-guard.galgas", 298)))).boolEnum () ;
  if (kBoolTrue == test_3) {
    temp_2 = GALGAS_string::makeEmptyString () ;
  }else if (kBoolFalse == test_3) {
    temp_2 = constinArgument_inSelfType.getter_llvmBaseTypeName (HERE) ;
  }
  GALGAS_lstring var_guardImplementationMangledName_11351 = function_guardImplementationMangledNameFromAST (temp_2, constinArgument_inGuardName, constinArgument_inRoutineFormalArgumentList, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 297)) ;
  ioArgument_ioIntermediateCodeStruct.mProperty_mRoutineListIR.addAssign_operation (GALGAS_guardUserRoutineIR::constructor_new (var_guardUserMangledName_11150, GALGAS_bool (false), constinArgument_inWarnIfUnused, var_guardImplementationMangledName_11351.getter_string (SOURCE_FILE ("declaration-guard.galgas", 307)), var_formalArguments_8424, constinArgument_inSelfType, var_convenienceGuardGenerationIR_8483  COMMA_SOURCE_FILE ("declaration-guard.galgas", 303))  COMMA_SOURCE_FILE ("declaration-guard.galgas", 303)) ;
  ioArgument_ioIntermediateCodeStruct.mProperty_mRoutineListIR.addAssign_operation (GALGAS_guardImplementationRoutineIR::constructor_new (var_guardImplementationMangledName_11351, GALGAS_bool (false), constinArgument_inWarnIfUnused, var_formalArguments_8424, constinArgument_inSelfType, var_convenienceGuardGenerationIR_8483, var_allocaList_8508, var_instructionGenerationList_8560  COMMA_SOURCE_FILE ("declaration-guard.galgas", 312))  COMMA_SOURCE_FILE ("declaration-guard.galgas", 312)) ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                Overriding extension method '@standAloneProcedureCallInstructionAST baseGuardAnalyze'                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_standAloneProcedureCallInstructionAST_baseGuardAnalyze (const cPtr_callInstructionAST * inObject,
                                                                                    const GALGAS_PLMType /* constinArgument_inSelfType */,
                                                                                    const GALGAS_routineAttributes /* constinArgument_inRoutineAttributes */,
                                                                                    const GALGAS_semanticContext /* constinArgument_inContext */,
                                                                                    const GALGAS_mode /* constinArgument_inMode */,
                                                                                    GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                                    GALGAS_staticEntityMap & /* ioArgument_ioStaticEntityMap */,
                                                                                    GALGAS_universalValuedObjectMap & /* ioArgument_ioUniversalMap */,
                                                                                    GALGAS_guardKindGenerationIR & outArgument_outConvenienceGuardGenerationIR,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_standAloneProcedureCallInstructionAST * object = (const cPtr_standAloneProcedureCallInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_standAloneProcedureCallInstructionAST) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_mSandAloneRoutineName.getter_location (SOURCE_FILE ("declaration-guard.galgas", 348)), GALGAS_string ("NOT HANDLED YET"), fixItArray0  COMMA_SOURCE_FILE ("declaration-guard.galgas", 348)) ;
  outArgument_outConvenienceGuardGenerationIR.drop () ; // Release error dropped variable
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_standAloneProcedureCallInstructionAST_baseGuardAnalyze (void) {
  enterExtensionMethod_baseGuardAnalyze (kTypeDescriptor_GALGAS_standAloneProcedureCallInstructionAST.mSlotID,
                                         extensionMethod_standAloneProcedureCallInstructionAST_baseGuardAnalyze) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_standAloneProcedureCallInstructionAST_baseGuardAnalyze (defineExtensionMethod_standAloneProcedureCallInstructionAST_baseGuardAnalyze, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                     Overriding extension method '@procedureCallInstructionAST baseGuardAnalyze'                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_procedureCallInstructionAST_baseGuardAnalyze (const cPtr_callInstructionAST * inObject,
                                                                          const GALGAS_PLMType constinArgument_inSelfType,
                                                                          const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                                                          const GALGAS_semanticContext constinArgument_inContext,
                                                                          const GALGAS_mode constinArgument_inMode,
                                                                          GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                          GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                          GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                          GALGAS_guardKindGenerationIR & outArgument_outConvenienceGuardGenerationIR,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_procedureCallInstructionAST * object = (const cPtr_procedureCallInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_procedureCallInstructionAST) ;
  GALGAS_allocaList var_baseGuardAllocaList_13980 = GALGAS_allocaList::constructor_emptyList (SOURCE_FILE ("declaration-guard.galgas", 363)) ;
  GALGAS_instructionListIR var_baseGuardInstructionGenerationList_14041 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("declaration-guard.galgas", 364)) ;
  GALGAS_objectIR var_currentObject_14172 ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mProperty_mIdentifier.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, constinArgument_inSelfType.getter_kind (HERE).objectCompare (GALGAS_typeKind::constructor_void (SOURCE_FILE ("declaration-guard.galgas", 368)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (object->mProperty_mIdentifier.getter_location (SOURCE_FILE ("declaration-guard.galgas", 369)), GALGAS_string ("self is not available in this context"), fixItArray2  COMMA_SOURCE_FILE ("declaration-guard.galgas", 369)) ;
      var_currentObject_14172.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_1) {
      var_currentObject_14172 = GALGAS_objectIR::constructor_reference (constinArgument_inSelfType, function_llvmNameForSelf (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 371))  COMMA_SOURCE_FILE ("declaration-guard.galgas", 371)) ;
    }
  }else if (kBoolFalse == test_0) {
    extensionMethod_searchValuedObject (ioArgument_ioUniversalMap, object->mProperty_mIdentifier, constinArgument_inRoutineAttributes, ioArgument_ioTemporaries.getter_mInitializedDriverSet (HERE), var_currentObject_14172, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 374)) ;
  }
  GALGAS_location var_currentErrorLocation_14638 = object->mProperty_mIdentifier.getter_location (HERE) ;
  GALGAS_accessInAssignmentListAST var_accessList_14704 = object->mProperty_mAccessList ;
  GALGAS_accessInAssignmentAST var_lastAccess_14758 ;
  {
  var_accessList_14704.setter_popLast (var_lastAccess_14758, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 384)) ;
  }
  cEnumerator_accessInAssignmentListAST enumerator_14814 (var_accessList_14704, kENUMERATION_UP) ;
  while (enumerator_14814.hasCurrentObject ()) {
    GALGAS_PLMType var_currentType_14837 = extensionGetter_type (var_currentObject_14172, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 387)) ;
    switch (enumerator_14814.current_mAccess (HERE).enumValue ()) {
    case GALGAS_accessInAssignmentAST::kNotBuilt:
      break ;
    case GALGAS_accessInAssignmentAST::kEnum_property:
      {
        const cEnumAssociatedValues_accessInAssignmentAST_property * extractPtr_15847 = (const cEnumAssociatedValues_accessInAssignmentAST_property *) (enumerator_14814.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_propertyName = extractPtr_15847->mAssociatedValue0 ;
        GALGAS_propertyMap var_propertyMap_14957 = var_currentType_14837.getter_propertyMap (HERE) ;
        GALGAS_propertyAccessKind var_propertyAccess_15049 ;
        GALGAS_bool joker_15028 ; // Joker input parameter
        var_propertyMap_14957.method_searchKey (extractedValue_propertyName, joker_15028, var_propertyAccess_15049, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 391)) ;
        switch (var_propertyAccess_15049.enumValue ()) {
        case GALGAS_propertyAccessKind::kNotBuilt:
          break ;
        case GALGAS_propertyAccessKind::kEnum_nonVirtualMethod:
          {
            TC_Array <C_FixItDescription> fixItArray3 ;
            inCompiler->emitSemanticError (extractedValue_propertyName.getter_location (SOURCE_FILE ("declaration-guard.galgas", 394)), GALGAS_string ("a method cannot be used in this context"), fixItArray3  COMMA_SOURCE_FILE ("declaration-guard.galgas", 394)) ;
            var_currentObject_14172.drop () ; // Release error dropped variable
          }
          break ;
        case GALGAS_propertyAccessKind::kEnum_constantProperty:
          {
            TC_Array <C_FixItDescription> fixItArray4 ;
            inCompiler->emitSemanticError (extractedValue_propertyName.getter_location (SOURCE_FILE ("declaration-guard.galgas", 396)), GALGAS_string ("a constant property not available in this context"), fixItArray4  COMMA_SOURCE_FILE ("declaration-guard.galgas", 396)) ;
            var_currentObject_14172.drop () ; // Release error dropped variable
          }
          break ;
        case GALGAS_propertyAccessKind::kEnum_singleton:
          {
            const cEnumAssociatedValues_propertyAccessKind_singleton * extractPtr_15395 = (const cEnumAssociatedValues_propertyAccessKind_singleton *) (var_propertyAccess_15049.unsafePointer ()) ;
            const GALGAS_objectIR extractedValue_object = extractPtr_15395->mAssociatedValue0 ;
            var_currentObject_14172 = extractedValue_object ;
          }
          break ;
        case GALGAS_propertyAccessKind::kEnum_indexed:
          {
            const cEnumAssociatedValues_propertyAccessKind_indexed * extractPtr_15837 = (const cEnumAssociatedValues_propertyAccessKind_indexed *) (var_propertyAccess_15049.unsafePointer ()) ;
            const GALGAS_PLMType extractedValue_propertyType = extractPtr_15837->mAssociatedValue0 ;
            const GALGAS_uint extractedValue_propertyIndex = extractPtr_15837->mAssociatedValue1 ;
            GALGAS_string var_property_5F_llvmName_15523 ;
            {
            extensionSetter_newTempLLVMVar (ioArgument_ioTemporaries, var_property_5F_llvmName_15523, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 400)) ;
            }
            {
            extensionSetter_appendGetUniversalPropertyReference (var_baseGuardInstructionGenerationList_14041, var_currentType_14837, extensionGetter_llvmName (var_currentObject_14172, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 403)), var_property_5F_llvmName_15523, extractedValue_propertyIndex, extractedValue_propertyName.getter_string (SOURCE_FILE ("declaration-guard.galgas", 406)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 401)) ;
            }
            var_currentObject_14172 = GALGAS_objectIR::constructor_reference (extractedValue_propertyType, var_property_5F_llvmName_15523  COMMA_SOURCE_FILE ("declaration-guard.galgas", 408)) ;
          }
          break ;
        }
      }
      break ;
    case GALGAS_accessInAssignmentAST::kEnum_arrayAccess:
      {
        const cEnumAssociatedValues_accessInAssignmentAST_arrayAccess * extractPtr_15990 = (const cEnumAssociatedValues_accessInAssignmentAST_arrayAccess *) (enumerator_14814.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_indexExpression = extractPtr_15990->mAssociatedValue0 ;
        const GALGAS_location extractedValue_endOfIndex = extractPtr_15990->mAssociatedValue1 ;
        TC_Array <C_FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (extractedValue_endOfIndex, GALGAS_string ("not handled yet"), fixItArray5  COMMA_SOURCE_FILE ("declaration-guard.galgas", 411)) ;
        var_currentObject_14172.drop () ; // Release error dropped variable
      }
      break ;
    }
    enumerator_14814.gotoNextObject () ;
  }
  switch (var_lastAccess_14758.enumValue ()) {
  case GALGAS_accessInAssignmentAST::kNotBuilt:
    break ;
  case GALGAS_accessInAssignmentAST::kEnum_property:
    {
      const cEnumAssociatedValues_accessInAssignmentAST_property * extractPtr_17615 = (const cEnumAssociatedValues_accessInAssignmentAST_property *) (var_lastAccess_14758.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_methodName = extractPtr_17615->mAssociatedValue0 ;
      GALGAS_PLMType var_currentType_16108 = extensionGetter_type (var_currentObject_14172, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 417)) ;
      GALGAS_lstring var_key_16143 = function_guardUserMangledNameFromCall (var_currentType_16108.getter_llvmBaseTypeName (HERE), extractedValue_methodName, object->mProperty_mArguments, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 418)) ;
      GALGAS_routineTypedSignature var_formalSignature_16295 ;
      GALGAS_bool joker_16273 ; // Joker input parameter
      var_currentType_16108.getter_guardMap (HERE).method_searchKey (var_key_16143, joker_16273, var_formalSignature_16295, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 419)) ;
      GALGAS_procCallEffectiveParameterListIR temp_6 = GALGAS_procCallEffectiveParameterListIR::constructor_emptyList (SOURCE_FILE ("declaration-guard.galgas", 423)) ;
      temp_6.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_outputInput (SOURCE_FILE ("declaration-guard.galgas", 422)), GALGAS_objectIR::constructor_reference (var_currentType_16108, extensionGetter_llvmName (var_currentObject_14172, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 423))  COMMA_SOURCE_FILE ("declaration-guard.galgas", 423))  COMMA_SOURCE_FILE ("declaration-guard.galgas", 423)) ;
      GALGAS_procCallEffectiveParameterListIR var_effectiveParameterListIR_16441 = temp_6 ;
      {
      routine_analyzeEffectiveParameters (constinArgument_inSelfType, constinArgument_inRoutineAttributes, var_formalSignature_16295, object->mProperty_mArguments, extractedValue_methodName.getter_location (HERE), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, var_baseGuardAllocaList_13980, var_baseGuardInstructionGenerationList_14041, var_effectiveParameterListIR_16441, inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 426)) ;
      }
      GALGAS_lstring var_routineMangledName_17183 = function_guardImplementationMangledNameFromCall (var_currentType_16108.getter_plmTypeDescriptionName (HERE), extractedValue_methodName, object->mProperty_mArguments, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 442)) ;
      outArgument_outConvenienceGuardGenerationIR = GALGAS_guardKindGenerationIR::constructor_convenienceGuard (var_baseGuardAllocaList_13980, var_baseGuardInstructionGenerationList_14041, var_routineMangledName_17183.getter_string (HERE), var_effectiveParameterListIR_16441  COMMA_SOURCE_FILE ("declaration-guard.galgas", 444)) ;
    }
    break ;
  case GALGAS_accessInAssignmentAST::kEnum_arrayAccess:
    {
      const cEnumAssociatedValues_accessInAssignmentAST_arrayAccess * extractPtr_17755 = (const cEnumAssociatedValues_accessInAssignmentAST_arrayAccess *) (var_lastAccess_14758.unsafePointer ()) ;
      const GALGAS_location extractedValue_endOfIndex = extractPtr_17755->mAssociatedValue1 ;
      TC_Array <C_FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (extractedValue_endOfIndex, GALGAS_string ("a property access is required here"), fixItArray7  COMMA_SOURCE_FILE ("declaration-guard.galgas", 451)) ;
      outArgument_outConvenienceGuardGenerationIR.drop () ; // Release error dropped variable
    }
    break ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_procedureCallInstructionAST_baseGuardAnalyze (void) {
  enterExtensionMethod_baseGuardAnalyze (kTypeDescriptor_GALGAS_procedureCallInstructionAST.mSlotID,
                                         extensionMethod_procedureCallInstructionAST_baseGuardAnalyze) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_procedureCallInstructionAST_baseGuardAnalyze (defineExtensionMethod_procedureCallInstructionAST_baseGuardAnalyze, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                      Overriding extension method '@guardUserRoutineIR enterAccessibleEntities'                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_guardUserRoutineIR_enterAccessibleEntities (const cPtr_abstractRoutineIR * inObject,
                                                                        GALGAS_stringset & ioArgument_ioInvokedRoutineSet,
                                                                        GALGAS_uint & /* ioArgument_ioMaxBranchOfOnInstructions */,
                                                                        C_Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_guardUserRoutineIR * object = (const cPtr_guardUserRoutineIR *) inObject ;
  macroValidSharedObject (object, cPtr_guardUserRoutineIR) ;
  ioArgument_ioInvokedRoutineSet.addAssign_operation (object->mProperty_mMangledImplementationGuardName  COMMA_SOURCE_FILE ("declaration-guard.galgas", 482)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_guardUserRoutineIR_enterAccessibleEntities (void) {
  enterExtensionMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_guardUserRoutineIR.mSlotID,
                                                extensionMethod_guardUserRoutineIR_enterAccessibleEntities) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_guardUserRoutineIR_enterAccessibleEntities (defineExtensionMethod_guardUserRoutineIR_enterAccessibleEntities, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                     Overriding extension method '@guardUserRoutineIR svcDeclarationGeneration'                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_guardUserRoutineIR_svcDeclarationGeneration (const cPtr_abstractRoutineIR * inObject,
                                                                         GALGAS_primitiveAndServiceIRlist & ioArgument_ioPrimitiveAndServiceList,
                                                                         GALGAS_sectionIRlist & ioArgument_ioSectionList,
                                                                         GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                         C_Compiler * /* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_guardUserRoutineIR * object = (const cPtr_guardUserRoutineIR *) inObject ;
  macroValidSharedObject (object, cPtr_guardUserRoutineIR) ;
  GALGAS_string var_userMangledName_19679 = object->mProperty_mRoutineMangledName.getter_string (HERE).getter_assemblerRepresentation (SOURCE_FILE ("declaration-guard.galgas", 498)) ;
  GALGAS_string var_implementationMangledName_19759 = object->mProperty_mMangledImplementationGuardName.getter_assemblerRepresentation (SOURCE_FILE ("declaration-guard.galgas", 499)) ;
  switch (object->mProperty_mGuardKindGenerationIR.enumValue ()) {
  case GALGAS_guardKindGenerationIR::kNotBuilt:
    break ;
  case GALGAS_guardKindGenerationIR::kEnum_convenienceGuard:
    {
      ioArgument_ioPrimitiveAndServiceList.addAssign_operation (var_userMangledName_19679, var_implementationMangledName_19759, GALGAS_bool (false)  COMMA_SOURCE_FILE ("declaration-guard.galgas", 502)) ;
    }
    break ;
  case GALGAS_guardKindGenerationIR::kEnum_baseGuard:
    {
      ioArgument_ioSectionList.addAssign_operation (var_userMangledName_19679, var_implementationMangledName_19759, GALGAS_bool (true)  COMMA_SOURCE_FILE ("declaration-guard.galgas", 504)) ;
    }
    break ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_guardUserRoutineIR_svcDeclarationGeneration (void) {
  enterExtensionMethod_svcDeclarationGeneration (kTypeDescriptor_GALGAS_guardUserRoutineIR.mSlotID,
                                                 extensionMethod_guardUserRoutineIR_svcDeclarationGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_guardUserRoutineIR_svcDeclarationGeneration (defineExtensionMethod_guardUserRoutineIR_svcDeclarationGeneration, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                        Overriding extension method '@guardUserRoutineIR llvmCodeGeneration'                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_guardUserRoutineIR_llvmCodeGeneration (const cPtr_abstractRoutineIR * inObject,
                                                                   GALGAS_string & ioArgument_ioLLVMcode,
                                                                   const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                   GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_guardUserRoutineIR * object = (const cPtr_guardUserRoutineIR *) inObject ;
  macroValidSharedObject (object, cPtr_guardUserRoutineIR) ;
  ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (object->mProperty_mRoutineMangledName.getter_string (SOURCE_FILE ("declaration-guard.galgas", 518)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 518)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 518)) ;
  GALGAS_string var_prototype_20493 = function_llvmFunctionPrototype (GALGAS_string ("i1"), object->mProperty_mRoutineMangledName.getter_string (HERE).getter_assemblerRepresentation (SOURCE_FILE ("declaration-guard.galgas", 521)), object->mProperty_mReceiverType, object->mProperty_mFormalArgumentListForGeneration, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 519)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("declare ").add_operation (var_prototype_20493, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 525)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 525)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 525)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_guardUserRoutineIR_llvmCodeGeneration (void) {
  enterExtensionMethod_llvmCodeGeneration (kTypeDescriptor_GALGAS_guardUserRoutineIR.mSlotID,
                                           extensionMethod_guardUserRoutineIR_llvmCodeGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_guardUserRoutineIR_llvmCodeGeneration (defineExtensionMethod_guardUserRoutineIR_llvmCodeGeneration, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                   Overriding extension method '@guardImplementationRoutineIR llvmCodeGeneration'                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_guardImplementationRoutineIR_llvmCodeGeneration (const cPtr_abstractRoutineIR * inObject,
                                                                             GALGAS_string & ioArgument_ioLLVMcode,
                                                                             const GALGAS_generationContext constinArgument_inGenerationContext,
                                                                             GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_guardImplementationRoutineIR * object = (const cPtr_guardImplementationRoutineIR *) inObject ;
  macroValidSharedObject (object, cPtr_guardImplementationRoutineIR) ;
  GALGAS_string var_guardRoutineName_21416 = object->mProperty_mRoutineMangledName.getter_string (HERE).getter_assemblerRepresentation (SOURCE_FILE ("declaration-guard.galgas", 545)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (var_guardRoutineName_21416, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 546)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 546)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define i1 @").add_operation (var_guardRoutineName_21416, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 547)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 547)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 547)) ;
  GALGAS_string temp_0 ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, object->mProperty_mReceiverType.getter_kind (HERE).objectCompare (GALGAS_typeKind::constructor_void (SOURCE_FILE ("declaration-guard.galgas", 548)))).boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_string::makeEmptyString () ;
  }else if (kBoolFalse == test_1) {
    temp_0 = extensionGetter_llvmTypeName (object->mProperty_mReceiverType, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 551)) ;
  }
  GALGAS_string var_receiverLLVMTypeName_21600 = temp_0 ;
  GALGAS_bool var_first_21703 = GALGAS_bool (true) ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_receiverLLVMTypeName_21600.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_2) {
    ioArgument_ioLLVMcode.plusAssign_operation(var_receiverLLVMTypeName_21600.add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 555)).add_operation (function_llvmNameForSelf (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 555)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 555)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 555)) ;
    var_first_21703 = GALGAS_bool (false) ;
  }
  cEnumerator_routineFormalArgumentListIR enumerator_21883 (object->mProperty_mFormalArgumentListForGeneration, kENUMERATION_UP) ;
  while (enumerator_21883.hasCurrentObject ()) {
    const enumGalgasBool test_3 = var_first_21703.boolEnum () ;
    if (kBoolTrue == test_3) {
      var_first_21703 = GALGAS_bool (false) ;
    }else if (kBoolFalse == test_3) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 562)) ;
    }
    switch (enumerator_21883.current_mFormalArgumentKind (HERE).enumValue ()) {
    case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_input:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_21883.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 566)).add_operation (GALGAS_string (" %in."), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 566)).add_operation (enumerator_21883.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 566)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 566)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_output:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_21883.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 568)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 568)).add_operation (function_llvmNameForLocalVariable (enumerator_21883.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 568)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 568)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 568)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_21883.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 570)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 570)).add_operation (function_llvmNameForLocalVariable (enumerator_21883.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 570)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 570)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 570)) ;
      }
      break ;
    }
    enumerator_21883.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (")").add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 573)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 573)).add_operation (GALGAS_string ("{\n"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 573)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 573)) ;
  GALGAS_allocaList var_allocaList_22482 = object->mProperty_mAllocaList ;
  cEnumerator_routineFormalArgumentListIR enumerator_22578 (object->mProperty_mFormalArgumentListForGeneration, kENUMERATION_UP) ;
  while (enumerator_22578.hasCurrentObject ()) {
    switch (enumerator_22578.current_mFormalArgumentKind (HERE).enumValue ()) {
    case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_input:
      {
        var_allocaList_22482.addAssign_operation (function_llvmNameForLocalVariable (enumerator_22578.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 580)), enumerator_22578.current_mFormalArgumentType (HERE), GALGAS_bool (true)  COMMA_SOURCE_FILE ("declaration-guard.galgas", 580)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_output:
    case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
      {
      }
      break ;
    }
    enumerator_22578.gotoNextObject () ;
  }
  extensionMethod_generateAllocaList (var_allocaList_22482, ioArgument_ioLLVMcode, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 585)) ;
  cEnumerator_routineFormalArgumentListIR enumerator_22898 (object->mProperty_mFormalArgumentListForGeneration, kENUMERATION_UP) ;
  while (enumerator_22898.hasCurrentObject ()) {
    switch (enumerator_22898.current_mFormalArgumentKind (HERE).enumValue ()) {
    case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_input:
      {
        GALGAS_string var_llvmType_22968 = extensionGetter_llvmTypeName (enumerator_22898.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 590)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store ").add_operation (var_llvmType_22968, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 591)).add_operation (GALGAS_string (" %in."), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 591)).add_operation (enumerator_22898.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 591)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 591)).add_operation (var_llvmType_22968, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 591)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 592)).add_operation (function_llvmNameForLocalVariable (enumerator_22898.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 592)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 592)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 592)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 591)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_output:
    case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
      {
      }
      break ;
    }
    enumerator_22898.gotoNextObject () ;
  }
  GALGAS_string var_accepted_5F_llvmName_23272 = function_llvmNameForLocalVariable (function_acceptVariablePLMName (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 597)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 597)) ;
  GALGAS_string var_accepted_5F_llvmName_5F_loaded_23358 = function_llvmNameForLocalVariable (function_acceptVariablePLMName (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 598)).add_operation (GALGAS_string (".loaded"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 598)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 598)) ;
  switch (object->mProperty_mGuardKindGenerationIR.enumValue ()) {
  case GALGAS_guardKindGenerationIR::kNotBuilt:
    break ;
  case GALGAS_guardKindGenerationIR::kEnum_baseGuard:
    {
      GALGAS_string var_accepted_5F_label_23538 = function_acceptVariablePLMName (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 602)).add_operation (GALGAS_string (".guard.accepted"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 602)) ;
      GALGAS_string var_rejected_5F_label_23608 = function_acceptVariablePLMName (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 603)).add_operation (GALGAS_string (".guard.rejected"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 603)) ;
      extensionMethod_instructionListLLVMCode (object->mProperty_mInstructionGenerationList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 604)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_accepted_5F_llvmName_5F_loaded_23358, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 605)).add_operation (GALGAS_string (" = load i1, i1* "), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 605)).add_operation (var_accepted_5F_llvmName_23272, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 605)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 605)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 605)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (var_accepted_5F_llvmName_5F_loaded_23358, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 606)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 606)).add_operation (var_accepted_5F_label_23538, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 606)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 606)).add_operation (var_rejected_5F_label_23608, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 606)).add_operation (GALGAS_string ("\n"
        "\n"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 606)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 606)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(var_accepted_5F_label_23538.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 607)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 607)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @accept.guard ()\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 608)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret i1 true\n"
        "\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 609)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(var_rejected_5F_label_23608.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 610)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 610)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret i1 false\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 611)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
        "\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 612)) ;
    }
    break ;
  case GALGAS_guardKindGenerationIR::kEnum_convenienceGuard:
    {
      const cEnumAssociatedValues_guardKindGenerationIR_convenienceGuard * extractPtr_25560 = (const cEnumAssociatedValues_guardKindGenerationIR_convenienceGuard *) (object->mProperty_mGuardKindGenerationIR.unsafePointer ()) ;
      const GALGAS_allocaList extractedValue_baseGuardAllocaList = extractPtr_25560->mAssociatedValue0 ;
      const GALGAS_instructionListIR extractedValue_baseGuardInstructionGenerationList = extractPtr_25560->mAssociatedValue1 ;
      const GALGAS_string extractedValue_baseGuardMangledName = extractPtr_25560->mAssociatedValue2 ;
      const GALGAS_procCallEffectiveParameterListIR extractedValue_baseGuardEffectiveParameterList = extractPtr_25560->mAssociatedValue3 ;
      extensionMethod_generateAllocaList (extractedValue_baseGuardAllocaList, ioArgument_ioLLVMcode, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 614)) ;
      extensionMethod_instructionListLLVMCode (extractedValue_baseGuardInstructionGenerationList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 615)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %invoked.guard.result = call i1 @").add_operation (extractedValue_baseGuardMangledName.getter_assemblerRepresentation (SOURCE_FILE ("declaration-guard.galgas", 616)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 616)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 616)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ("), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 617)) ;
      cEnumerator_procCallEffectiveParameterListIR enumerator_24710 (extractedValue_baseGuardEffectiveParameterList, kENUMERATION_UP) ;
      while (enumerator_24710.hasCurrentObject ()) {
        switch (enumerator_24710.current_mEffectiveParameterPassingMode (HERE).enumValue ()) {
        case GALGAS_procEffectiveParameterPassingModeIR::kNotBuilt:
          break ;
        case GALGAS_procEffectiveParameterPassingModeIR::kEnum_input:
          {
            ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_24710.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 621)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 621)).add_operation (extensionGetter_llvmName (enumerator_24710.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 621)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 621)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 621)) ;
          }
          break ;
        case GALGAS_procEffectiveParameterPassingModeIR::kEnum_output:
          {
            ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_24710.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 623)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 623)).add_operation (extensionGetter_llvmName (enumerator_24710.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 623)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 623)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 623)) ;
          }
          break ;
        case GALGAS_procEffectiveParameterPassingModeIR::kEnum_outputInput:
          {
            ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_24710.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 625)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 625)).add_operation (extensionGetter_llvmName (enumerator_24710.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 625)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 625)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 625)) ;
          }
          break ;
        }
        if (enumerator_24710.hasNextObject ()) {
          ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 628)) ;
        }
        enumerator_24710.gotoNextObject () ;
      }
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (")\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 630)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 %invoked.guard.result, label %invoked.guard.acceptation, label %invoked.guard.rejection\n"
        "\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 631)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("invoked.guard.acceptation:\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 632)) ;
      extensionMethod_instructionListLLVMCode (object->mProperty_mInstructionGenerationList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 633)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret i1 true\n"
        "\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 634)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("invoked.guard.rejection:\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 635)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret i1 false\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 636)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
        "\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 637)) ;
    }
    break ;
  }
  ioArgument_ioGenerationAdds.mProperty_mExternFunctionDeclarationSet.addAssign_operation (GALGAS_string ("void @accept.guard ()")  COMMA_SOURCE_FILE ("declaration-guard.galgas", 639)) ;
  ioArgument_ioGenerationAdds.mProperty_mExternFunctionDeclarationSet.addAssign_operation (GALGAS_string ("i1 @xtr.user.result ()")  COMMA_SOURCE_FILE ("declaration-guard.galgas", 640)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_guardImplementationRoutineIR_llvmCodeGeneration (void) {
  enterExtensionMethod_llvmCodeGeneration (kTypeDescriptor_GALGAS_guardImplementationRoutineIR.mSlotID,
                                           extensionMethod_guardImplementationRoutineIR_llvmCodeGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_guardImplementationRoutineIR_llvmCodeGeneration (defineExtensionMethod_guardImplementationRoutineIR_llvmCodeGeneration, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                 Overriding extension method '@guardImplementationRoutineIR enterAccessibleEntities'                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_guardImplementationRoutineIR_enterAccessibleEntities (const cPtr_abstractRoutineIR * inObject,
                                                                                  GALGAS_stringset & ioArgument_ioInvokedRoutineSet,
                                                                                  GALGAS_uint & ioArgument_ioMaxBranchOfOnInstructions,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_guardImplementationRoutineIR * object = (const cPtr_guardImplementationRoutineIR *) inObject ;
  macroValidSharedObject (object, cPtr_guardImplementationRoutineIR) ;
  extensionMethod_enterAccessibleEntities (object->mProperty_mInstructionGenerationList, ioArgument_ioInvokedRoutineSet, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 649)) ;
  switch (object->mProperty_mGuardKindGenerationIR.enumValue ()) {
  case GALGAS_guardKindGenerationIR::kNotBuilt:
    break ;
  case GALGAS_guardKindGenerationIR::kEnum_baseGuard:
    {
    }
    break ;
  case GALGAS_guardKindGenerationIR::kEnum_convenienceGuard:
    {
      const cEnumAssociatedValues_guardKindGenerationIR_convenienceGuard * extractPtr_26431 = (const cEnumAssociatedValues_guardKindGenerationIR_convenienceGuard *) (object->mProperty_mGuardKindGenerationIR.unsafePointer ()) ;
      const GALGAS_instructionListIR extractedValue_baseGuardInstructionGenerationList = extractPtr_26431->mAssociatedValue1 ;
      const GALGAS_string extractedValue_baseGuardImplementationMangledName = extractPtr_26431->mAssociatedValue2 ;
      ioArgument_ioInvokedRoutineSet.addAssign_operation (extractedValue_baseGuardImplementationMangledName  COMMA_SOURCE_FILE ("declaration-guard.galgas", 653)) ;
      extensionMethod_enterAccessibleEntities (extractedValue_baseGuardInstructionGenerationList, ioArgument_ioInvokedRoutineSet, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 654)) ;
    }
    break ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_guardImplementationRoutineIR_enterAccessibleEntities (void) {
  enterExtensionMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_guardImplementationRoutineIR.mSlotID,
                                                extensionMethod_guardImplementationRoutineIR_enterAccessibleEntities) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_guardImplementationRoutineIR_enterAccessibleEntities (defineExtensionMethod_guardImplementationRoutineIR_enterAccessibleEntities, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                       Overriding extension method '@regularRoutineIR enterAccessibleEntities'                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_regularRoutineIR_enterAccessibleEntities (const cPtr_abstractRoutineIR * inObject,
                                                                      GALGAS_stringset & ioArgument_ioInvokedRoutineSet,
                                                                      GALGAS_uint & ioArgument_ioMaxBranchOfOnInstructions,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_regularRoutineIR * object = (const cPtr_regularRoutineIR *) inObject ;
  macroValidSharedObject (object, cPtr_regularRoutineIR) ;
  cEnumerator_instructionListIR enumerator_4868 (object->mProperty_mInstructionGenerationList, kENUMERATION_UP) ;
  while (enumerator_4868.hasCurrentObject ()) {
    callExtensionMethod_enterAccessibleEntities ((const cPtr_abstractInstructionIR *) enumerator_4868.current (HERE).getter_mInstructionGeneration (HERE).ptr (), ioArgument_ioInvokedRoutineSet, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 129)) ;
    enumerator_4868.gotoNextObject () ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_regularRoutineIR_enterAccessibleEntities (void) {
  enterExtensionMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_regularRoutineIR.mSlotID,
                                                extensionMethod_regularRoutineIR_enterAccessibleEntities) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_regularRoutineIR_enterAccessibleEntities (defineExtensionMethod_regularRoutineIR_enterAccessibleEntities, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                      Overriding extension method '@regularRoutineIR svcDeclarationGeneration'                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_regularRoutineIR_svcDeclarationGeneration (const cPtr_abstractRoutineIR * inObject,
                                                                       GALGAS_primitiveAndServiceIRlist & ioArgument_ioPrimitiveAndServiceList,
                                                                       GALGAS_sectionIRlist & ioArgument_ioSectionList,
                                                                       GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_regularRoutineIR * object = (const cPtr_regularRoutineIR *) inObject ;
  macroValidSharedObject (object, cPtr_regularRoutineIR) ;
  const enumGalgasBool test_0 = object->mProperty_mKind.getter_isFunction (SOURCE_FILE ("regular-routine-analysis.galgas", 143)).operator_not (SOURCE_FILE ("regular-routine-analysis.galgas", 143)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_string var_svcCallName_5377 = function_llvmNameForSVCCall (object->mProperty_mRoutineMangledName, object->mProperty_mKind, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 144)) ;
    GALGAS_string var_svcImplementationName_5458 = function_llvmNameForSVCImplementation (object->mProperty_mRoutineMangledName, object->mProperty_mKind, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 145)) ;
    GALGAS_string var_prototype_5537 = function_llvmFunctionPrototype (extensionGetter_llvmTypeName (object->mProperty_mReturnType, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 147)), var_svcCallName_5377, object->mProperty_mReceiverType, object->mProperty_mFormalArgumentListForGeneration, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 146)) ;
    ioArgument_ioGenerationAdds.mProperty_mExternFunctionDeclarationSet.addAssign_operation (var_prototype_5537  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 152)) ;
    switch (object->mProperty_mKind.enumValue ()) {
    case GALGAS_routineKind::kNotBuilt:
      break ;
    case GALGAS_routineKind::kEnum_section:
      {
        ioArgument_ioSectionList.addAssign_operation (var_svcCallName_5377, var_svcImplementationName_5458, GALGAS_bool (true)  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 155)) ;
      }
      break ;
    case GALGAS_routineKind::kEnum_primitive:
    case GALGAS_routineKind::kEnum_service:
      {
        ioArgument_ioPrimitiveAndServiceList.addAssign_operation (var_svcCallName_5377, var_svcImplementationName_5458, GALGAS_bool (false)  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 157)) ;
      }
      break ;
    case GALGAS_routineKind::kEnum_function:
      {
        TC_Array <C_FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (GALGAS_location::constructor_nowhere (SOURCE_FILE ("regular-routine-analysis.galgas", 159)), GALGAS_string ("INTERNAL ERROR"), fixItArray1  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 159)) ;
      }
      break ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_regularRoutineIR_svcDeclarationGeneration (void) {
  enterExtensionMethod_svcDeclarationGeneration (kTypeDescriptor_GALGAS_regularRoutineIR.mSlotID,
                                                 extensionMethod_regularRoutineIR_svcDeclarationGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_regularRoutineIR_svcDeclarationGeneration (defineExtensionMethod_regularRoutineIR_svcDeclarationGeneration, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                         Overriding extension method '@regularRoutineIR llvmCodeGeneration'                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_regularRoutineIR_llvmCodeGeneration (const cPtr_abstractRoutineIR * inObject,
                                                                 GALGAS_string & ioArgument_ioLLVMcode,
                                                                 const GALGAS_generationContext constinArgument_inGenerationContext,
                                                                 GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_regularRoutineIR * object = (const cPtr_regularRoutineIR *) inObject ;
  macroValidSharedObject (object, cPtr_regularRoutineIR) ;
  GALGAS_string var_routineName_6377 ;
  switch (object->mProperty_mKind.enumValue ()) {
  case GALGAS_routineKind::kNotBuilt:
    break ;
  case GALGAS_routineKind::kEnum_function:
    {
      var_routineName_6377 = function_llvmNameForFunction (object->mProperty_mRoutineMangledName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 173)) ;
    }
    break ;
  case GALGAS_routineKind::kEnum_section:
    {
      var_routineName_6377 = function_llvmNameForSectionImplementation (object->mProperty_mRoutineMangledName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 174)) ;
    }
    break ;
  case GALGAS_routineKind::kEnum_service:
    {
      var_routineName_6377 = function_llvmNameForServiceImplementation (object->mProperty_mRoutineMangledName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 175)) ;
    }
    break ;
  case GALGAS_routineKind::kEnum_primitive:
    {
      var_routineName_6377 = function_llvmNameForPrimitiveImplementation (object->mProperty_mRoutineMangledName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 176)) ;
    }
    break ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (var_routineName_6377, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 178)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 178)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define"), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 179)) ;
  const enumGalgasBool test_0 = object->mProperty_mExportedFunction.operator_not (SOURCE_FILE ("regular-routine-analysis.galgas", 180)).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" internal"), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 181)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ").add_operation (extensionGetter_llvmTypeName (object->mProperty_mReturnType, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 183)), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 183)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 183)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" @").add_operation (var_routineName_6377, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 184)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 184)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 184)) ;
  GALGAS_string temp_1 ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, object->mProperty_mReceiverType.getter_kind (HERE).objectCompare (GALGAS_typeKind::constructor_void (SOURCE_FILE ("regular-routine-analysis.galgas", 185)))).boolEnum () ;
  if (kBoolTrue == test_2) {
    temp_1 = GALGAS_string::makeEmptyString () ;
  }else if (kBoolFalse == test_2) {
    temp_1 = extensionGetter_llvmTypeName (object->mProperty_mReceiverType, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 187)) ;
  }
  GALGAS_string var_receiverLLVMTypeName_7029 = temp_1 ;
  GALGAS_bool var_first_7130 = GALGAS_bool (true) ;
  const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, var_receiverLLVMTypeName_7029.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_3) {
    ioArgument_ioLLVMcode.plusAssign_operation(var_receiverLLVMTypeName_7029.add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 191)).add_operation (function_llvmNameForSelf (inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 191)), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 191)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 191)) ;
    var_first_7130 = GALGAS_bool (false) ;
  }
  cEnumerator_routineFormalArgumentListIR enumerator_7310 (object->mProperty_mFormalArgumentListForGeneration, kENUMERATION_UP) ;
  while (enumerator_7310.hasCurrentObject ()) {
    const enumGalgasBool test_4 = var_first_7130.boolEnum () ;
    if (kBoolTrue == test_4) {
      var_first_7130 = GALGAS_bool (false) ;
    }else if (kBoolFalse == test_4) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 198)) ;
    }
    switch (enumerator_7310.current_mFormalArgumentKind (HERE).enumValue ()) {
    case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_input:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_7310.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 202)).add_operation (GALGAS_string (" %in."), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 202)).add_operation (enumerator_7310.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 202)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 202)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_output:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_7310.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 204)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 204)).add_operation (function_llvmNameForLocalVariable (enumerator_7310.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 204)), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 204)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 204)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_7310.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 206)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 206)).add_operation (function_llvmNameForLocalVariable (enumerator_7310.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 206)), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 206)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 206)) ;
      }
      break ;
    }
    enumerator_7310.gotoNextObject () ;
  }
  GALGAS_bool test_5 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).operator_not (SOURCE_FILE ("regular-routine-analysis.galgas", 209)) ;
  if (kBoolTrue == test_5.boolEnum ()) {
    test_5 = object->mProperty_mAppendFileAndLineArgumentForPanicLocation ;
  }
  const enumGalgasBool test_6 = test_5.boolEnum () ;
  if (kBoolTrue == test_6) {
    const enumGalgasBool test_7 = var_first_7130.operator_not (SOURCE_FILE ("regular-routine-analysis.galgas", 210)).boolEnum () ;
    if (kBoolTrue == test_7) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 211)) ;
    }
    ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (constinArgument_inGenerationContext.getter_mPanicLineLLVMType (HERE), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 213)).add_operation (GALGAS_string (" %LINE, i8* %FILE"), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 213)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 213)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (")").add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 215)), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 215)).add_operation (GALGAS_string ("{\n"), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 215)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 215)) ;
  GALGAS_allocaList var_allocaList_8167 = object->mProperty_mAllocaList ;
  const enumGalgasBool test_8 = GALGAS_bool (kIsNotEqual, object->mProperty_mReturnType.getter_kind (HERE).objectCompare (GALGAS_typeKind::constructor_void (SOURCE_FILE ("regular-routine-analysis.galgas", 218)))).boolEnum () ;
  if (kBoolTrue == test_8) {
    var_allocaList_8167.addAssign_operation (function_llvmNameForLocalVariable (function_functionResultVariableName (inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 219)), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 219)), object->mProperty_mReturnType, GALGAS_bool (false)  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 219)) ;
  }
  cEnumerator_routineFormalArgumentListIR enumerator_8402 (object->mProperty_mFormalArgumentListForGeneration, kENUMERATION_UP) ;
  while (enumerator_8402.hasCurrentObject ()) {
    switch (enumerator_8402.current_mFormalArgumentKind (HERE).enumValue ()) {
    case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_input:
      {
        var_allocaList_8167.addAssign_operation (function_llvmNameForLocalVariable (enumerator_8402.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 225)), enumerator_8402.current_mFormalArgumentType (HERE), GALGAS_bool (true)  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 225)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_output:
    case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
      {
      }
      break ;
    }
    enumerator_8402.gotoNextObject () ;
  }
  extensionMethod_generateAllocaList (var_allocaList_8167, ioArgument_ioLLVMcode, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 229)) ;
  cEnumerator_routineFormalArgumentListIR enumerator_8812 (object->mProperty_mFormalArgumentListForGeneration, kENUMERATION_UP) ;
  while (enumerator_8812.hasCurrentObject ()) {
    switch (enumerator_8812.current_mFormalArgumentKind (HERE).enumValue ()) {
    case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_input:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--------- Input argument '").add_operation (enumerator_8812.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 235)).add_operation (GALGAS_string ("'\n"), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 235)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 235)) ;
        GALGAS_string var_llvmType_8962 = extensionGetter_llvmTypeName (enumerator_8812.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 236)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store ").add_operation (var_llvmType_8962, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 237)).add_operation (GALGAS_string (" %in."), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 237)).add_operation (enumerator_8812.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 237)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 237)).add_operation (var_llvmType_8962, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 237)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 237)).add_operation (function_llvmNameForLocalVariable (enumerator_8812.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 238)), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 237)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 238)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 237)) ;
        extensionMethod_generateRetain (enumerator_8812.current_mFormalArgumentType (HERE), enumerator_8812.current_mFormalArgumentName (HERE), ioArgument_ioLLVMcode, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 239)) ;
        const enumGalgasBool test_9 = GALGAS_bool (kIsEqual, object->mProperty_mKind.objectCompare (GALGAS_routineKind::constructor_section (SOURCE_FILE ("regular-routine-analysis.galgas", 240)))).boolEnum () ;
        if (kBoolTrue == test_9) {
          extensionMethod_generateInsulate (enumerator_8812.current_mFormalArgumentType (HERE), enumerator_8812.current_mFormalArgumentName (HERE), ioArgument_ioLLVMcode, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 241)) ;
        }
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
      {
        const enumGalgasBool test_10 = GALGAS_bool (kIsEqual, object->mProperty_mKind.objectCompare (GALGAS_routineKind::constructor_section (SOURCE_FILE ("regular-routine-analysis.galgas", 244)))).boolEnum () ;
        if (kBoolTrue == test_10) {
          ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--------- Insulate input/output argument '").add_operation (enumerator_8812.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 245)).add_operation (GALGAS_string ("'\n"), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 245)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 245)) ;
          extensionMethod_generateInsulate (enumerator_8812.current_mFormalArgumentType (HERE), enumerator_8812.current_mFormalArgumentName (HERE), ioArgument_ioLLVMcode, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 246)) ;
        }
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_output:
      {
      }
      break ;
    }
    enumerator_8812.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--------- Function instruction list\n"), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 252)) ;
  extensionMethod_instructionListLLVMCode (object->mProperty_mInstructionGenerationList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 253)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--------- Release input arguments\n"), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 256)) ;
  cEnumerator_routineFormalArgumentListIR enumerator_10094 (object->mProperty_mFormalArgumentListForGeneration, kENUMERATION_UP) ;
  while (enumerator_10094.hasCurrentObject ()) {
    switch (enumerator_10094.current_mFormalArgumentKind (HERE).enumValue ()) {
    case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_input:
      {
        extensionMethod_generateRelease (enumerator_10094.current_mFormalArgumentType (HERE), enumerator_10094.current_mFormalArgumentName (HERE), ioArgument_ioLLVMcode, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 260)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
      {
        const enumGalgasBool test_11 = GALGAS_bool (kIsEqual, object->mProperty_mKind.objectCompare (GALGAS_routineKind::constructor_section (SOURCE_FILE ("regular-routine-analysis.galgas", 262)))).boolEnum () ;
        if (kBoolTrue == test_11) {
          ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--------- Insulate input/output argument '").add_operation (enumerator_10094.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 263)).add_operation (GALGAS_string ("'\n"), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 263)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 263)) ;
          extensionMethod_generateInsulate (enumerator_10094.current_mFormalArgumentType (HERE), enumerator_10094.current_mFormalArgumentName (HERE), ioArgument_ioLLVMcode, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 264)) ;
        }
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_output:
      {
        const enumGalgasBool test_12 = GALGAS_bool (kIsEqual, object->mProperty_mKind.objectCompare (GALGAS_routineKind::constructor_section (SOURCE_FILE ("regular-routine-analysis.galgas", 267)))).boolEnum () ;
        if (kBoolTrue == test_12) {
          ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--------- Insulate output argument '").add_operation (enumerator_10094.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 268)).add_operation (GALGAS_string ("'\n"), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 268)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 268)) ;
          extensionMethod_generateInsulate (enumerator_10094.current_mFormalArgumentType (HERE), enumerator_10094.current_mFormalArgumentName (HERE), ioArgument_ioLLVMcode, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 269)) ;
        }
      }
      break ;
    }
    enumerator_10094.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--------- Return\n"), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 274)) ;
  const enumGalgasBool test_13 = GALGAS_bool (kIsEqual, object->mProperty_mReturnType.getter_kind (HERE).objectCompare (GALGAS_typeKind::constructor_void (SOURCE_FILE ("regular-routine-analysis.galgas", 275)))).boolEnum () ;
  if (kBoolTrue == test_13) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 276)) ;
  }else if (kBoolFalse == test_13) {
    GALGAS_string var_resultVarLLVMName_10919 = function_llvmNameForLocalVariable (function_functionResultVariableName (inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 278)), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 278)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %result = load ").add_operation (extensionGetter_llvmTypeName (object->mProperty_mReturnType, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 279)), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 279)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 279)).add_operation (extensionGetter_llvmTypeName (object->mProperty_mReturnType, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 279)), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 279)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 279)).add_operation (var_resultVarLLVMName_10919, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 279)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 279)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 279)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret ").add_operation (extensionGetter_llvmTypeName (object->mProperty_mReturnType, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 280)), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 280)).add_operation (GALGAS_string (" %result\n"), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 280)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 280)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 282)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_regularRoutineIR_llvmCodeGeneration (void) {
  enterExtensionMethod_llvmCodeGeneration (kTypeDescriptor_GALGAS_regularRoutineIR.mSlotID,
                                           extensionMethod_regularRoutineIR_llvmCodeGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_regularRoutineIR_llvmCodeGeneration (defineExtensionMethod_regularRoutineIR_llvmCodeGeneration, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                                Function 'checkMode'                                                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_calleeKindIR function_checkMode (const GALGAS_mode & constinArgument_inCallerMode,
                                        const GALGAS_mode & constinArgument_inCalleeMode,
                                        const GALGAS_routineKind & constinArgument_inRoutineKind,
                                        const GALGAS_location & constinArgument_inErrorLocation,
                                        C_Compiler * inCompiler
                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_calleeKindIR result_outResult ; // Returned variable
  switch (constinArgument_inRoutineKind.enumValue ()) {
  case GALGAS_routineKind::kNotBuilt:
    break ;
  case GALGAS_routineKind::kEnum_section:
    {
      const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, constinArgument_inCallerMode.objectCompare (GALGAS_mode::constructor_userMode (SOURCE_FILE ("logical-modes.galgas", 44)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        result_outResult = GALGAS_calleeKindIR::constructor_sectionFromProcessorUserMode (SOURCE_FILE ("logical-modes.galgas", 45)) ;
      }else if (kBoolFalse == test_0) {
        GALGAS_bool test_1 = GALGAS_bool (kIsEqual, constinArgument_inCallerMode.objectCompare (GALGAS_mode::constructor_primitiveMode (SOURCE_FILE ("logical-modes.galgas", 46)))) ;
        if (kBoolTrue != test_1.boolEnum ()) {
          test_1 = GALGAS_bool (kIsEqual, constinArgument_inCallerMode.objectCompare (GALGAS_mode::constructor_sectionMode (SOURCE_FILE ("logical-modes.galgas", 46)))) ;
        }
        GALGAS_bool test_2 = test_1 ;
        if (kBoolTrue != test_2.boolEnum ()) {
          test_2 = GALGAS_bool (kIsEqual, constinArgument_inCallerMode.objectCompare (GALGAS_mode::constructor_startupMode (SOURCE_FILE ("logical-modes.galgas", 46)))) ;
        }
        GALGAS_bool test_3 = test_2 ;
        if (kBoolTrue != test_3.boolEnum ()) {
          test_3 = GALGAS_bool (kIsEqual, constinArgument_inCallerMode.objectCompare (GALGAS_mode::constructor_guardMode (SOURCE_FILE ("logical-modes.galgas", 46)))) ;
        }
        const enumGalgasBool test_4 = test_3.boolEnum () ;
        if (kBoolTrue == test_4) {
          result_outResult = GALGAS_calleeKindIR::constructor_sectionFromProcessorPrivilegedMode (SOURCE_FILE ("logical-modes.galgas", 47)) ;
        }else if (kBoolFalse == test_4) {
          TC_Array <C_FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("a section cannot be called from ").add_operation (extensionGetter_string (constinArgument_inCallerMode, inCompiler COMMA_SOURCE_FILE ("logical-modes.galgas", 49)), inCompiler COMMA_SOURCE_FILE ("logical-modes.galgas", 49)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("logical-modes.galgas", 49)), fixItArray5  COMMA_SOURCE_FILE ("logical-modes.galgas", 49)) ;
          result_outResult.drop () ; // Release error dropped variable
        }
      }
    }
    break ;
  case GALGAS_routineKind::kEnum_primitive:
    {
      const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, constinArgument_inCallerMode.objectCompare (GALGAS_mode::constructor_userMode (SOURCE_FILE ("logical-modes.galgas", 52)))).boolEnum () ;
      if (kBoolTrue == test_6) {
        result_outResult = GALGAS_calleeKindIR::constructor_primitiveFromProcessorUserMode (SOURCE_FILE ("logical-modes.galgas", 53)) ;
      }else if (kBoolFalse == test_6) {
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("a primitive cannot be called from ").add_operation (extensionGetter_string (constinArgument_inCallerMode, inCompiler COMMA_SOURCE_FILE ("logical-modes.galgas", 55)), inCompiler COMMA_SOURCE_FILE ("logical-modes.galgas", 55)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("logical-modes.galgas", 55)), fixItArray7  COMMA_SOURCE_FILE ("logical-modes.galgas", 55)) ;
        result_outResult.drop () ; // Release error dropped variable
      }
    }
    break ;
  case GALGAS_routineKind::kEnum_service:
    {
      const enumGalgasBool test_8 = GALGAS_bool (kIsEqual, constinArgument_inCallerMode.objectCompare (GALGAS_mode::constructor_userMode (SOURCE_FILE ("logical-modes.galgas", 58)))).boolEnum () ;
      if (kBoolTrue == test_8) {
        result_outResult = GALGAS_calleeKindIR::constructor_serviceFromProcessorUserMode (SOURCE_FILE ("logical-modes.galgas", 59)) ;
      }else if (kBoolFalse == test_8) {
        GALGAS_bool test_9 = GALGAS_bool (kIsEqual, constinArgument_inCallerMode.objectCompare (GALGAS_mode::constructor_primitiveMode (SOURCE_FILE ("logical-modes.galgas", 60)))) ;
        if (kBoolTrue != test_9.boolEnum ()) {
          test_9 = GALGAS_bool (kIsEqual, constinArgument_inCallerMode.objectCompare (GALGAS_mode::constructor_serviceMode (SOURCE_FILE ("logical-modes.galgas", 60)))) ;
        }
        GALGAS_bool test_10 = test_9 ;
        if (kBoolTrue != test_10.boolEnum ()) {
          test_10 = GALGAS_bool (kIsEqual, constinArgument_inCallerMode.objectCompare (GALGAS_mode::constructor_guardMode (SOURCE_FILE ("logical-modes.galgas", 60)))) ;
        }
        const enumGalgasBool test_11 = test_10.boolEnum () ;
        if (kBoolTrue == test_11) {
          result_outResult = GALGAS_calleeKindIR::constructor_serviceFromProcessorPrivilegedMode (SOURCE_FILE ("logical-modes.galgas", 61)) ;
        }else if (kBoolFalse == test_11) {
          TC_Array <C_FixItDescription> fixItArray12 ;
          inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("a service cannot be called from ").add_operation (extensionGetter_string (constinArgument_inCallerMode, inCompiler COMMA_SOURCE_FILE ("logical-modes.galgas", 63)), inCompiler COMMA_SOURCE_FILE ("logical-modes.galgas", 63)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("logical-modes.galgas", 63)), fixItArray12  COMMA_SOURCE_FILE ("logical-modes.galgas", 63)) ;
          result_outResult.drop () ; // Release error dropped variable
        }
      }
    }
    break ;
  case GALGAS_routineKind::kEnum_function:
    {
      GALGAS_bool var_ok_2479 = GALGAS_bool (kIsEqual, constinArgument_inCallerMode.objectCompare (constinArgument_inCalleeMode)) ;
      const enumGalgasBool test_13 = var_ok_2479.operator_not (SOURCE_FILE ("logical-modes.galgas", 67)).boolEnum () ;
      if (kBoolTrue == test_13) {
        switch (constinArgument_inCallerMode.enumValue ()) {
        case GALGAS_mode::kNotBuilt:
          break ;
        case GALGAS_mode::kEnum_userMode:
          {
            var_ok_2479 = GALGAS_bool (kIsEqual, constinArgument_inCalleeMode.objectCompare (GALGAS_mode::constructor_anyMode (SOURCE_FILE ("logical-modes.galgas", 70)))) ;
          }
          break ;
        case GALGAS_mode::kEnum_sectionMode:
          {
            var_ok_2479 = GALGAS_bool (kIsEqual, constinArgument_inCalleeMode.objectCompare (GALGAS_mode::constructor_anyMode (SOURCE_FILE ("logical-modes.galgas", 72)))) ;
          }
          break ;
        case GALGAS_mode::kEnum_serviceMode:
          {
            GALGAS_bool test_14 = GALGAS_bool (kIsEqual, constinArgument_inCalleeMode.objectCompare (GALGAS_mode::constructor_sectionMode (SOURCE_FILE ("logical-modes.galgas", 74)))) ;
            if (kBoolTrue != test_14.boolEnum ()) {
              test_14 = GALGAS_bool (kIsEqual, constinArgument_inCalleeMode.objectCompare (GALGAS_mode::constructor_anyMode (SOURCE_FILE ("logical-modes.galgas", 74)))) ;
            }
            var_ok_2479 = test_14 ;
          }
          break ;
        case GALGAS_mode::kEnum_primitiveMode:
          {
            GALGAS_bool test_15 = GALGAS_bool (kIsEqual, constinArgument_inCalleeMode.objectCompare (GALGAS_mode::constructor_serviceMode (SOURCE_FILE ("logical-modes.galgas", 76)))) ;
            if (kBoolTrue != test_15.boolEnum ()) {
              test_15 = GALGAS_bool (kIsEqual, constinArgument_inCalleeMode.objectCompare (GALGAS_mode::constructor_sectionMode (SOURCE_FILE ("logical-modes.galgas", 76)))) ;
            }
            GALGAS_bool test_16 = test_15 ;
            if (kBoolTrue != test_16.boolEnum ()) {
              test_16 = GALGAS_bool (kIsEqual, constinArgument_inCalleeMode.objectCompare (GALGAS_mode::constructor_anyMode (SOURCE_FILE ("logical-modes.galgas", 76)))) ;
            }
            var_ok_2479 = test_16 ;
          }
          break ;
        case GALGAS_mode::kEnum_guardMode:
          {
            GALGAS_bool test_17 = GALGAS_bool (kIsEqual, constinArgument_inCalleeMode.objectCompare (GALGAS_mode::constructor_serviceMode (SOURCE_FILE ("logical-modes.galgas", 78)))) ;
            if (kBoolTrue != test_17.boolEnum ()) {
              test_17 = GALGAS_bool (kIsEqual, constinArgument_inCalleeMode.objectCompare (GALGAS_mode::constructor_sectionMode (SOURCE_FILE ("logical-modes.galgas", 78)))) ;
            }
            GALGAS_bool test_18 = test_17 ;
            if (kBoolTrue != test_18.boolEnum ()) {
              test_18 = GALGAS_bool (kIsEqual, constinArgument_inCalleeMode.objectCompare (GALGAS_mode::constructor_anyMode (SOURCE_FILE ("logical-modes.galgas", 78)))) ;
            }
            var_ok_2479 = test_18 ;
          }
          break ;
        case GALGAS_mode::kEnum_panicMode:
        case GALGAS_mode::kEnum_startupMode:
          {
            var_ok_2479 = GALGAS_bool (kIsEqual, constinArgument_inCalleeMode.objectCompare (GALGAS_mode::constructor_anyMode (SOURCE_FILE ("logical-modes.galgas", 80)))) ;
          }
          break ;
        case GALGAS_mode::kEnum_bootMode:
          {
          }
          break ;
        case GALGAS_mode::kEnum_anyMode:
          {
          }
          break ;
        }
      }
      const enumGalgasBool test_19 = var_ok_2479.operator_not (SOURCE_FILE ("logical-modes.galgas", 85)).boolEnum () ;
      if (kBoolTrue == test_19) {
        TC_Array <C_FixItDescription> fixItArray20 ;
        inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("a func ").add_operation (extensionGetter_string (constinArgument_inCalleeMode, inCompiler COMMA_SOURCE_FILE ("logical-modes.galgas", 87)), inCompiler COMMA_SOURCE_FILE ("logical-modes.galgas", 87)).add_operation (GALGAS_string (" cannot be called from "), inCompiler COMMA_SOURCE_FILE ("logical-modes.galgas", 87)).add_operation (extensionGetter_string (constinArgument_inCallerMode, inCompiler COMMA_SOURCE_FILE ("logical-modes.galgas", 87)), inCompiler COMMA_SOURCE_FILE ("logical-modes.galgas", 87)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("logical-modes.galgas", 87)), fixItArray20  COMMA_SOURCE_FILE ("logical-modes.galgas", 86)) ;
      }
      result_outResult = GALGAS_calleeKindIR::constructor_function (SOURCE_FILE ("logical-modes.galgas", 89)) ;
    }
    break ;
  }
//---
  return result_outResult ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function introspection                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const C_galgas_type_descriptor * functionArgs_checkMode [5] = {
  & kTypeDescriptor_GALGAS_mode,
  & kTypeDescriptor_GALGAS_mode,
  & kTypeDescriptor_GALGAS_routineKind,
  & kTypeDescriptor_GALGAS_location,
  NULL
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_object functionWithGenericHeader_checkMode (C_Compiler * inCompiler,
                                                          const cObjectArray & inEffectiveParameterArray,
                                                          const GALGAS_location & /* inErrorLocation */
                                                          COMMA_LOCATION_ARGS) {
  const GALGAS_mode operand0 = GALGAS_mode::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  const GALGAS_mode operand1 = GALGAS_mode::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  const GALGAS_routineKind operand2 = GALGAS_routineKind::extractObject (inEffectiveParameterArray.objectAtIndex (2 COMMA_HERE),
                                                                         inCompiler
                                                                         COMMA_THERE) ;
  const GALGAS_location operand3 = GALGAS_location::extractObject (inEffectiveParameterArray.objectAtIndex (3 COMMA_HERE),
                                                                   inCompiler
                                                                   COMMA_THERE) ;
  return function_checkMode (operand0,
                             operand1,
                             operand2,
                             operand3,
                             inCompiler
                             COMMA_THERE).getter_object (THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_galgas_function_descriptor functionDescriptor_checkMode ("checkMode",
                                                           functionWithGenericHeader_checkMode,
                                                           & kTypeDescriptor_GALGAS_calleeKindIR,
                                                           4,
                                                           functionArgs_checkMode) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                          Routine 'computeStaticExpression'                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_computeStaticExpression (GALGAS_semanticContext & ioArgument_ioContext,
                                      const GALGAS_expressionAST constinArgument_inExpression,
                                      const GALGAS_location constinArgument_inErrorLocation,
                                      const GALGAS_lstring constinArgument_inOptionalTypeName,
                                      GALGAS_objectIR & outArgument_outStaticExpressionIR,
                                      C_Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outStaticExpressionIR.drop () ; // Release 'out' argument
  GALGAS_PLMType var_annotationType_689 ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, constinArgument_inOptionalTypeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_annotationType_689 = function_voidType (inCompiler COMMA_SOURCE_FILE ("compute-static-expression.galgas", 15)) ;
  }else if (kBoolFalse == test_0) {
    GALGAS_uint joker_853_2 ; // Joker input parameter
    GALGAS_bool joker_853_1 ; // Joker input parameter
    ioArgument_ioContext.getter_mTypeMap (HERE).method_searchKey (constinArgument_inOptionalTypeName, var_annotationType_689, joker_853_2, joker_853_1, inCompiler COMMA_SOURCE_FILE ("compute-static-expression.galgas", 17)) ;
  }
  GALGAS_semanticTemporariesStruct joker_1051 = GALGAS_semanticTemporariesStruct::constructor_default (SOURCE_FILE ("compute-static-expression.galgas", 26)) ;
  GALGAS_staticEntityMap joker_1075 = GALGAS_staticEntityMap::constructor_default (SOURCE_FILE ("compute-static-expression.galgas", 27)) ;
  GALGAS_allocaList joker_1135 = GALGAS_allocaList::constructor_emptyList (SOURCE_FILE ("compute-static-expression.galgas", 29)) ;
  GALGAS_instructionListIR joker_1161 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("compute-static-expression.galgas", 30)) ;
  GALGAS_objectIR var_expressionIR_1201 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) constinArgument_inExpression.ptr (), function_voidType (inCompiler COMMA_SOURCE_FILE ("compute-static-expression.galgas", 21)), GALGAS_routineAttributes::constructor_none (SOURCE_FILE ("compute-static-expression.galgas", 22)), var_annotationType_689, ioArgument_ioContext, GALGAS_mode::constructor_bootMode (SOURCE_FILE ("compute-static-expression.galgas", 25)), joker_1051, joker_1075, ioArgument_ioContext.mProperty_mValuedObjectMap, joker_1135, joker_1161, var_expressionIR_1201, inCompiler COMMA_SOURCE_FILE ("compute-static-expression.galgas", 20)) ;
  const enumGalgasBool test_1 = extensionGetter_isStatic (var_expressionIR_1201, inCompiler COMMA_SOURCE_FILE ("compute-static-expression.galgas", 33)).operator_not (SOURCE_FILE ("compute-static-expression.galgas", 33)).boolEnum () ;
  if (kBoolTrue == test_1) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("expression is not static"), fixItArray2  COMMA_SOURCE_FILE ("compute-static-expression.galgas", 34)) ;
    outArgument_outStaticExpressionIR.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_1) {
    outArgument_outStaticExpressionIR = function_checkAssignmentCompatibility (var_expressionIR_1201, var_annotationType_689, constinArgument_inErrorLocation, GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("compute-static-expression.galgas", 37)) ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        Function 'routineMangledNameFromAST'                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring function_routineMangledNameFromAST (const GALGAS_string & constinArgument_inReceiverTypeName,
                                                   const GALGAS_lstring & constinArgument_inRoutineName,
                                                   const GALGAS_routineFormalArgumentListAST & constinArgument_inFormalArgumentList,
                                                   C_Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  GALGAS_string var_s_4365 = GALGAS_string ("func.") ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inReceiverTypeName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_s_4365.plusAssign_operation(constinArgument_inReceiverTypeName.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 102)), inCompiler  COMMA_SOURCE_FILE ("context-routines.galgas", 102)) ;
  }
  var_s_4365.plusAssign_operation(constinArgument_inRoutineName.getter_string (HERE), inCompiler  COMMA_SOURCE_FILE ("context-routines.galgas", 104)) ;
  var_s_4365.plusAssign_operation(GALGAS_string ("("), inCompiler  COMMA_SOURCE_FILE ("context-routines.galgas", 105)) ;
  cEnumerator_routineFormalArgumentListAST enumerator_4581 (constinArgument_inFormalArgumentList, kENUMERATION_UP) ;
  while (enumerator_4581.hasCurrentObject ()) {
    var_s_4365.plusAssign_operation(extensionGetter_formalPassingModeString (enumerator_4581.current_mFormalArgumentPassingMode (HERE), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 107)).add_operation (enumerator_4581.current_mSelector (HERE).getter_string (SOURCE_FILE ("context-routines.galgas", 107)), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 107)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 107)), inCompiler  COMMA_SOURCE_FILE ("context-routines.galgas", 107)) ;
    enumerator_4581.gotoNextObject () ;
  }
  var_s_4365.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("context-routines.galgas", 109)) ;
  result_result = GALGAS_lstring::constructor_new (var_s_4365, constinArgument_inRoutineName.getter_location (HERE)  COMMA_SOURCE_FILE ("context-routines.galgas", 110)) ;
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function introspection                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const C_galgas_type_descriptor * functionArgs_routineMangledNameFromAST [4] = {
  & kTypeDescriptor_GALGAS_string,
  & kTypeDescriptor_GALGAS_lstring,
  & kTypeDescriptor_GALGAS_routineFormalArgumentListAST,
  NULL
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_object functionWithGenericHeader_routineMangledNameFromAST (C_Compiler * inCompiler,
                                                                          const cObjectArray & inEffectiveParameterArray,
                                                                          const GALGAS_location & /* inErrorLocation */
                                                                          COMMA_LOCATION_ARGS) {
  const GALGAS_string operand0 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  const GALGAS_lstring operand1 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  const GALGAS_routineFormalArgumentListAST operand2 = GALGAS_routineFormalArgumentListAST::extractObject (inEffectiveParameterArray.objectAtIndex (2 COMMA_HERE),
                                                                                                           inCompiler
                                                                                                           COMMA_THERE) ;
  return function_routineMangledNameFromAST (operand0,
                                             operand1,
                                             operand2,
                                             inCompiler
                                             COMMA_THERE).getter_object (THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_galgas_function_descriptor functionDescriptor_routineMangledNameFromAST ("routineMangledNameFromAST",
                                                                           functionWithGenericHeader_routineMangledNameFromAST,
                                                                           & kTypeDescriptor_GALGAS_lstring,
                                                                           3,
                                                                           functionArgs_routineMangledNameFromAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        Function 'routineMangledNameFromCall'                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring function_routineMangledNameFromCall (const GALGAS_string & constinArgument_inReceiverTypeName,
                                                    const GALGAS_lstring & constinArgument_inRoutineName,
                                                    const GALGAS_effectiveArgumentListAST & constinArgument_inEffectiveParameterList,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  GALGAS_string var_s_5082 = GALGAS_string ("func.") ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inReceiverTypeName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_s_5082.plusAssign_operation(constinArgument_inReceiverTypeName.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 121)), inCompiler  COMMA_SOURCE_FILE ("context-routines.galgas", 121)) ;
  }
  var_s_5082.plusAssign_operation(constinArgument_inRoutineName.getter_string (HERE), inCompiler  COMMA_SOURCE_FILE ("context-routines.galgas", 123)) ;
  var_s_5082.plusAssign_operation(GALGAS_string ("("), inCompiler  COMMA_SOURCE_FILE ("context-routines.galgas", 124)) ;
  cEnumerator_effectiveArgumentListAST enumerator_5263 (constinArgument_inEffectiveParameterList, kENUMERATION_UP) ;
  while (enumerator_5263.hasCurrentObject ()) {
    var_s_5082.plusAssign_operation(extensionGetter_matchingFormalArgument (enumerator_5263.current_mEffectiveParameterKind (HERE), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 126)).add_operation (enumerator_5263.current_mSelector (HERE).getter_string (SOURCE_FILE ("context-routines.galgas", 126)), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 126)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 126)), inCompiler  COMMA_SOURCE_FILE ("context-routines.galgas", 126)) ;
    enumerator_5263.gotoNextObject () ;
  }
  var_s_5082.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("context-routines.galgas", 128)) ;
  result_result = GALGAS_lstring::constructor_new (var_s_5082, constinArgument_inRoutineName.getter_location (HERE)  COMMA_SOURCE_FILE ("context-routines.galgas", 129)) ;
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function introspection                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const C_galgas_type_descriptor * functionArgs_routineMangledNameFromCall [4] = {
  & kTypeDescriptor_GALGAS_string,
  & kTypeDescriptor_GALGAS_lstring,
  & kTypeDescriptor_GALGAS_effectiveArgumentListAST,
  NULL
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_object functionWithGenericHeader_routineMangledNameFromCall (C_Compiler * inCompiler,
                                                                           const cObjectArray & inEffectiveParameterArray,
                                                                           const GALGAS_location & /* inErrorLocation */
                                                                           COMMA_LOCATION_ARGS) {
  const GALGAS_string operand0 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  const GALGAS_lstring operand1 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  const GALGAS_effectiveArgumentListAST operand2 = GALGAS_effectiveArgumentListAST::extractObject (inEffectiveParameterArray.objectAtIndex (2 COMMA_HERE),
                                                                                                   inCompiler
                                                                                                   COMMA_THERE) ;
  return function_routineMangledNameFromCall (operand0,
                                              operand1,
                                              operand2,
                                              inCompiler
                                              COMMA_THERE).getter_object (THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_galgas_function_descriptor functionDescriptor_routineMangledNameFromCall ("routineMangledNameFromCall",
                                                                            functionWithGenericHeader_routineMangledNameFromCall,
                                                                            & kTypeDescriptor_GALGAS_lstring,
                                                                            3,
                                                                            functionArgs_routineMangledNameFromCall) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             Routine 'routineSignature'                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_routineSignature (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                               const GALGAS_routineFormalArgumentListAST constinArgument_inFormalArgumentList,
                               GALGAS_routineTypedSignature & outArgument_outSignature,
                               C_Compiler * /* inCompiler */
                               COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSignature.drop () ; // Release 'out' argument
  outArgument_outSignature = GALGAS_routineTypedSignature::constructor_emptyList (SOURCE_FILE ("context-routines.galgas", 138)) ;
  cEnumerator_routineFormalArgumentListAST enumerator_5817 (constinArgument_inFormalArgumentList, kENUMERATION_UP) ;
  while (enumerator_5817.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_proxy var_typeProxy_5908 ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioTypeMap, enumerator_5817.current_mFormalArgumentTypeName (HERE), var_typeProxy_5908 COMMA_SOURCE_FILE ("context-routines.galgas", 140)) ;
    }
    outArgument_outSignature.addAssign_operation (enumerator_5817.current_mFormalArgumentPassingMode (HERE), enumerator_5817.current_mSelector (HERE), var_typeProxy_5908  COMMA_SOURCE_FILE ("context-routines.galgas", 141)) ;
    enumerator_5817.gotoNextObject () ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        Routine 'buildOrderedDeclarationList'                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_buildOrderedDeclarationList (const GALGAS_ast constinArgument_inAST,
                                          const GALGAS_string constinArgument_inSourceFile,
                                          const GALGAS_location constinArgument_inEndOfSourceFile,
                                          GALGAS_declarationListAST & outArgument_outDeclarationListAST,
                                          C_Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outDeclarationListAST.drop () ; // Release 'out' argument
  GALGAS_semanticTypePrecedenceGraph var_precedenceGraph_1950 = GALGAS_semanticTypePrecedenceGraph::constructor_emptyGraph (SOURCE_FILE ("ordered-declaration-list.galgas", 35)) ;
  cEnumerator_declarationListAST enumerator_2002 (constinArgument_inAST.getter_mDeclarationListAST (HERE), kENUMERATION_UP) ;
  while (enumerator_2002.hasCurrentObject ()) {
    callExtensionMethod_enterInPrecedenceGraph ((const cPtr_abstractDeclarationAST *) enumerator_2002.current_mDeclaration (HERE).ptr (), var_precedenceGraph_1950, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 37)) ;
    enumerator_2002.gotoNextObject () ;
  }
  extensionMethod_noteTypesInPrecedenceGraph (constinArgument_inAST.getter_mStandaloneFunctionDeclarationListAST (HERE), var_precedenceGraph_1950, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 39)) ;
  extensionMethod_noteTypesInPrecedenceGraph (constinArgument_inAST.getter_mExternProcListAST (HERE), var_precedenceGraph_1950, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 40)) ;
  extensionMethod_noteTypesInPrecedenceGraph (constinArgument_inAST.getter_mStandAloneSystemRoutineListAST (HERE), var_precedenceGraph_1950, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 41)) ;
  extensionMethod_noteTypesInPrecedenceGraph (constinArgument_inAST.getter_mTaskListAST (HERE), var_precedenceGraph_1950, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 42)) ;
  cEnumerator_stringlist enumerator_2521 (var_precedenceGraph_1950.getter_undefinedNodeKeyList (SOURCE_FILE ("ordered-declaration-list.galgas", 44)), kENUMERATION_UP) ;
  while (enumerator_2521.hasCurrentObject ()) {
    GALGAS_stringlist var_split_2538 = enumerator_2521.current_mValue (HERE).getter_componentsSeparatedByString (GALGAS_string ("int") COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 45)) ;
    GALGAS_bool test_0 = GALGAS_bool (kIsEqual, var_split_2538.getter_length (SOURCE_FILE ("ordered-declaration-list.galgas", 46)).objectCompare (GALGAS_uint ((uint32_t) 2U))) ;
    if (kBoolTrue == test_0.boolEnum ()) {
      test_0 = var_split_2538.getter_mValueAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 46)).getter_isDecimalUnsignedNumber (SOURCE_FILE ("ordered-declaration-list.galgas", 46)) ;
    }
    const enumGalgasBool test_1 = test_0.boolEnum () ;
    if (kBoolTrue == test_1) {
      const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, var_split_2538.getter_mValueAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 47)).objectCompare (GALGAS_string ("$u"))).boolEnum () ;
      if (kBoolTrue == test_2) {
        GALGAS_uint var_n_2733 = var_split_2538.getter_mValueAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 48)).getter_decimalUnsignedNumber (inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 48)) ;
        GALGAS_integerDeclarationAST var_declaration_2808 = GALGAS_integerDeclarationAST::constructor_new (GALGAS_bool (false), var_n_2733  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 49)) ;
        callExtensionMethod_enterInPrecedenceGraph ((const cPtr_integerDeclarationAST *) var_declaration_2808.ptr (), var_precedenceGraph_1950, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 50)) ;
      }else if (kBoolFalse == test_2) {
        const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, var_split_2538.getter_mValueAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 51)).objectCompare (GALGAS_string ("$"))).boolEnum () ;
        if (kBoolTrue == test_3) {
          GALGAS_uint var_n_2975 = var_split_2538.getter_mValueAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 52)).getter_decimalUnsignedNumber (inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 52)) ;
          GALGAS_integerDeclarationAST var_declaration_3050 = GALGAS_integerDeclarationAST::constructor_new (GALGAS_bool (true), var_n_2975  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 53)) ;
          callExtensionMethod_enterInPrecedenceGraph ((const cPtr_integerDeclarationAST *) var_declaration_3050.ptr (), var_precedenceGraph_1950, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 54)) ;
        }
      }
    }
    enumerator_2521.gotoNextObject () ;
  }
  GALGAS_bool test_4 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("ordered-declaration-list.galgas", 59)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
  if (kBoolTrue == test_4.boolEnum ()) {
    test_4 = GALGAS_bool (gOption_plm_5F_options_writeDeclarationDependencyGraphFile.getter_value ()) ;
  }
  const enumGalgasBool test_5 = test_4.boolEnum () ;
  if (kBoolTrue == test_5) {
    GALGAS_string var_s_3362 = var_precedenceGraph_1950.getter_graphviz (SOURCE_FILE ("ordered-declaration-list.galgas", 60)) ;
    GALGAS_string var_filePath_3408 = constinArgument_inSourceFile.add_operation (GALGAS_string (".declarationDependency.dot"), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 61)) ;
    GALGAS_bool joker_3506 ; // Joker input parameter
    var_s_3362.method_writeToFileWhenDifferentContents (var_filePath_3408, joker_3506, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 62)) ;
  }
  outArgument_outDeclarationListAST = GALGAS_declarationListAST::constructor_emptyList (SOURCE_FILE ("ordered-declaration-list.galgas", 65)) ;
  const enumGalgasBool test_6 = GALGAS_bool (kIsStrictSup, var_precedenceGraph_1950.getter_undefinedNodeCount (SOURCE_FILE ("ordered-declaration-list.galgas", 66)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_6) {
    cEnumerator_lstringlist enumerator_3728 (var_precedenceGraph_1950.getter_undefinedNodeReferenceList (SOURCE_FILE ("ordered-declaration-list.galgas", 67)), kENUMERATION_UP) ;
    while (enumerator_3728.hasCurrentObject ()) {
      TC_Array <C_FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (enumerator_3728.current_mValue (HERE).getter_location (SOURCE_FILE ("ordered-declaration-list.galgas", 68)), enumerator_3728.current_mValue (HERE).getter_string (HERE).add_operation (GALGAS_string (" is not defined in declaration dependency graph"), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 68)), fixItArray7  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 68)) ;
      enumerator_3728.gotoNextObject () ;
    }
    var_precedenceGraph_1950.getter_keyList (SOURCE_FILE ("ordered-declaration-list.galgas", 70)).log (""  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 70)) ;
  }else if (kBoolFalse == test_6) {
    GALGAS_declarationListAST var_unsortedSemanticDeclarationListAST_4013 ;
    GALGAS_lstringlist joker_3946 ; // Joker input parameter
    GALGAS_lstringlist joker_4021 ; // Joker input parameter
    var_precedenceGraph_1950.method_topologicalSort (outArgument_outDeclarationListAST, joker_3946, var_unsortedSemanticDeclarationListAST_4013, joker_4021, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 72)) ;
    const enumGalgasBool test_8 = GALGAS_bool (kIsStrictSup, var_unsortedSemanticDeclarationListAST_4013.getter_length (SOURCE_FILE ("ordered-declaration-list.galgas", 78)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_8) {
      GALGAS_string var_s_4100 = GALGAS_string ("semantic analysis not performed, ").add_operation (var_unsortedSemanticDeclarationListAST_4013.getter_length (SOURCE_FILE ("ordered-declaration-list.galgas", 80)).getter_string (SOURCE_FILE ("ordered-declaration-list.galgas", 79)), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 79)).add_operation (GALGAS_string (" declarations are involved in circular definition:"), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 80)) ;
      cEnumerator_declarationListAST enumerator_4315 (var_unsortedSemanticDeclarationListAST_4013, kENUMERATION_UP) ;
      while (enumerator_4315.hasCurrentObject ()) {
        var_s_4100.plusAssign_operation(GALGAS_string ("\n"
          "-  ").add_operation (callExtensionGetter_keyRepresentationForErrorSignaling ((const cPtr_abstractDeclarationAST *) enumerator_4315.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 83)), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 83)), inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 83)) ;
        enumerator_4315.gotoNextObject () ;
      }
      TC_Array <C_FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (constinArgument_inEndOfSourceFile, var_s_4100, fixItArray9  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 85)) ;
      cEnumerator_declarationListAST enumerator_4487 (var_unsortedSemanticDeclarationListAST_4013, kENUMERATION_UP) ;
      while (enumerator_4487.hasCurrentObject ()) {
        TC_Array <C_FixItDescription> fixItArray10 ;
        inCompiler->emitSemanticError (callExtensionGetter_locationForErrorSignaling ((const cPtr_abstractDeclarationAST *) enumerator_4487.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 87)), GALGAS_string ("the ").add_operation (callExtensionGetter_keyRepresentationForErrorSignaling ((const cPtr_abstractDeclarationAST *) enumerator_4487.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 87)), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 87)).add_operation (GALGAS_string (" is declared here"), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 87)), fixItArray10  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 87)) ;
        enumerator_4487.gotoNextObject () ;
      }
    }
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                           Routine 'buildSemanticContext'                                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_buildSemanticContext (const GALGAS_lstring constinArgument_inSourceFile,
                                   const GALGAS_ast constinArgument_inAST,
                                   GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                   GALGAS_staticListInitializationMap & ioArgument_ioStaticListValueMap,
                                   GALGAS_semanticContext & outArgument_outSemanticContext,
                                   GALGAS_declarationDecorationList & outArgument_outDecoratedDeclarationList,
                                   GALGAS_decoratedRegularRoutineList & outArgument_outDecoratedRoutineList,
                                   GALGAS_routineListIR & outArgument_outRoutineListIR,
                                   GALGAS_globalVariableIRList & outArgument_outGlobalVariableIRList,
                                   C_Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSemanticContext.drop () ; // Release 'out' argument
  outArgument_outDecoratedDeclarationList.drop () ; // Release 'out' argument
  outArgument_outDecoratedRoutineList.drop () ; // Release 'out' argument
  outArgument_outRoutineListIR.drop () ; // Release 'out' argument
  outArgument_outGlobalVariableIRList.drop () ; // Release 'out' argument
  outArgument_outSemanticContext = GALGAS_semanticContext::constructor_default (SOURCE_FILE ("context.galgas", 181)) ;
  outArgument_outDecoratedDeclarationList = GALGAS_declarationDecorationList::constructor_emptyList (SOURCE_FILE ("context.galgas", 182)) ;
  outArgument_outDecoratedRoutineList = GALGAS_decoratedRegularRoutineList::constructor_emptyList (SOURCE_FILE ("context.galgas", 183)) ;
  outArgument_outRoutineListIR = GALGAS_routineListIR::constructor_emptyList (SOURCE_FILE ("context.galgas", 184)) ;
  cEnumerator_requiredProcedureDeclarationListAST enumerator_7572 (constinArgument_inAST.getter_mRequiredProcListAST (HERE), kENUMERATION_UP) ;
  while (enumerator_7572.hasCurrentObject ()) {
    GALGAS_lstring var_procedureMangledName_7604 = function_routineMangledNameFromAST (GALGAS_string::makeEmptyString (), enumerator_7572.current (HERE).getter_mName (HERE), enumerator_7572.current (HERE).getter_mFormalArgumentList (HERE), inCompiler COMMA_SOURCE_FILE ("context.galgas", 187)) ;
    outArgument_outSemanticContext.mProperty_mRequiredRoutineSet.addAssign_operation (var_procedureMangledName_7604.getter_string (HERE)  COMMA_SOURCE_FILE ("context.galgas", 188)) ;
    enumerator_7572.gotoNextObject () ;
  }
  extensionMethod_enterInContext (constinArgument_inAST.getter_mISRDeclarationListAST (HERE), outArgument_outSemanticContext, outArgument_outDecoratedDeclarationList, outArgument_outDecoratedRoutineList, inCompiler COMMA_SOURCE_FILE ("context.galgas", 191)) ;
  extensionMethod_enterFunctionInContext (constinArgument_inAST.getter_mStandaloneFunctionDeclarationListAST (HERE), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("context.galgas", 193)), outArgument_outSemanticContext, outArgument_outDecoratedRoutineList, inCompiler COMMA_SOURCE_FILE ("context.galgas", 192)) ;
  extensionMethod_enterExternProcInContext (constinArgument_inAST.getter_mExternProcListAST (HERE), outArgument_outSemanticContext, inCompiler COMMA_SOURCE_FILE ("context.galgas", 197)) ;
  extensionMethod_enterSystemRoutineInContext (constinArgument_inAST.getter_mStandAloneSystemRoutineListAST (HERE), GALGAS_string::makeEmptyString (), outArgument_outSemanticContext, outArgument_outDecoratedRoutineList, outArgument_outRoutineListIR, inCompiler COMMA_SOURCE_FILE ("context.galgas", 198)) ;
  outArgument_outGlobalVariableIRList = GALGAS_globalVariableIRList::constructor_emptySortedList (SOURCE_FILE ("context.galgas", 205)) ;
  GALGAS_controlRegisterUserAccesMapAST var_controlRegisterUserAccesMapAST_8492 = constinArgument_inAST.getter_mControlRegisterUserAccesMapAST (HERE) ;
  cEnumerator_declarationListAST enumerator_8581 (constinArgument_inAST.getter_mDeclarationListAST (HERE), kENUMERATION_UP) ;
  while (enumerator_8581.hasCurrentObject ()) {
    callExtensionMethod_enterInContext ((const cPtr_abstractDeclarationAST *) enumerator_8581.current_mDeclaration (HERE).ptr (), constinArgument_inAST.getter_mStandaloneFunctionDeclarationListAST (HERE), outArgument_outSemanticContext, outArgument_outDecoratedDeclarationList, outArgument_outDecoratedRoutineList, outArgument_outRoutineListIR, ioArgument_ioStaticListValueMap, ioArgument_ioStaticEntityMap, outArgument_outGlobalVariableIRList, var_controlRegisterUserAccesMapAST_8492, inCompiler COMMA_SOURCE_FILE ("context.galgas", 208)) ;
    enumerator_8581.gotoNextObject () ;
  }
  cEnumerator_controlRegisterUserAccesMapAST enumerator_9137 (var_controlRegisterUserAccesMapAST_8492, kENUMERATION_UP) ;
  while (enumerator_9137.hasCurrentObject ()) {
    TC_Array <C_FixItDescription> fixItArray0 ;
    inCompiler->emitSemanticError (enumerator_9137.current_lkey (HERE).getter_location (SOURCE_FILE ("context.galgas", 222)), GALGAS_string ("this control register is not defined"), fixItArray0  COMMA_SOURCE_FILE ("context.galgas", 222)) ;
    enumerator_9137.gotoNextObject () ;
  }
  {
  routine_buildGlobalConstantMapHTMLFile (outArgument_outSemanticContext.getter_mGlobalConstantMap (HERE), constinArgument_inSourceFile, inCompiler  COMMA_SOURCE_FILE ("context.galgas", 225)) ;
  }
  {
  routine_buildTypeMapHTMLFile (outArgument_outSemanticContext.getter_mTypeMap (HERE), constinArgument_inSourceFile, inCompiler  COMMA_SOURCE_FILE ("context.galgas", 230)) ;
  }
  {
  routine_buildControlRegisterMapHTMLFile (outArgument_outSemanticContext.getter_mControlRegisterGroupMap (HERE), constinArgument_inSourceFile, inCompiler  COMMA_SOURCE_FILE ("context.galgas", 235)) ;
  }
  extensionMethod_enterInContext (constinArgument_inAST.getter_mTaskListAST (HERE), outArgument_outSemanticContext, outArgument_outDecoratedDeclarationList, outArgument_outDecoratedRoutineList, outArgument_outRoutineListIR, ioArgument_ioStaticEntityMap, outArgument_outGlobalVariableIRList, inCompiler COMMA_SOURCE_FILE ("context.galgas", 240)) ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                     Function 'combineTypeNamesForInfixOperator'                                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring function_combineTypeNamesForInfixOperator (const GALGAS_string & constinArgument_inLeftTypeName,
                                                          const GALGAS_string & constinArgument_inRightTypeName,
                                                          C_Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  result_result = GALGAS_string ("{").add_operation (constinArgument_inLeftTypeName, inCompiler COMMA_SOURCE_FILE ("context.galgas", 253)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("context.galgas", 253)).add_operation (constinArgument_inRightTypeName, inCompiler COMMA_SOURCE_FILE ("context.galgas", 253)).add_operation (GALGAS_string ("}"), inCompiler COMMA_SOURCE_FILE ("context.galgas", 253)).getter_nowhere (SOURCE_FILE ("context.galgas", 253)) ;
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function introspection                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const C_galgas_type_descriptor * functionArgs_combineTypeNamesForInfixOperator [3] = {
  & kTypeDescriptor_GALGAS_string,
  & kTypeDescriptor_GALGAS_string,
  NULL
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_object functionWithGenericHeader_combineTypeNamesForInfixOperator (C_Compiler * inCompiler,
                                                                                 const cObjectArray & inEffectiveParameterArray,
                                                                                 const GALGAS_location & /* inErrorLocation */
                                                                                 COMMA_LOCATION_ARGS) {
  const GALGAS_string operand0 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  const GALGAS_string operand1 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  return function_combineTypeNamesForInfixOperator (operand0,
                                                    operand1,
                                                    inCompiler
                                                    COMMA_THERE).getter_object (THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_galgas_function_descriptor functionDescriptor_combineTypeNamesForInfixOperator ("combineTypeNamesForInfixOperator",
                                                                                  functionWithGenericHeader_combineTypeNamesForInfixOperator,
                                                                                  & kTypeDescriptor_GALGAS_lstring,
                                                                                  2,
                                                                                  functionArgs_combineTypeNamesForInfixOperator) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                            Function 'staticIntegerType'                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_PLMType function_staticIntegerType (C_Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_PLMType result_result ; // Returned variable
  result_result = GALGAS_PLMType::constructor_new (GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("types.galgas", 95)), GALGAS_classConstantMap::constructor_emptyMap (SOURCE_FILE ("types.galgas", 96)), GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("types.galgas", 97)), GALGAS_guardMapForContext::constructor_emptyMap (SOURCE_FILE ("types.galgas", 98)), GALGAS_PLMTypeAttributes::constructor_equatable (SOURCE_FILE ("types.galgas", 99)).operator_or (GALGAS_PLMTypeAttributes::constructor_copyable (SOURCE_FILE ("types.galgas", 99)) COMMA_SOURCE_FILE ("types.galgas", 99)), function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("types.galgas", 100)), GALGAS_typeKind::constructor_staticInteger (SOURCE_FILE ("types.galgas", 101)), function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("types.galgas", 102))  COMMA_SOURCE_FILE ("types.galgas", 94)) ;
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function introspection                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const C_galgas_type_descriptor * functionArgs_staticIntegerType [1] = {
  NULL
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_object functionWithGenericHeader_staticIntegerType (C_Compiler * inCompiler,
                                                                  const cObjectArray & /* inEffectiveParameterArray */,
                                                                  const GALGAS_location & /* inErrorLocation */
                                                                  COMMA_LOCATION_ARGS) {
  return function_staticIntegerType (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_galgas_function_descriptor functionDescriptor_staticIntegerType ("staticIntegerType",
                                                                   functionWithGenericHeader_staticIntegerType,
                                                                   & kTypeDescriptor_GALGAS_PLMType,
                                                                   0,
                                                                   functionArgs_staticIntegerType) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                            Function 'literalStringType'                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_PLMType function_literalStringType (C_Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_PLMType result_result ; // Returned variable
  result_result = GALGAS_PLMType::constructor_new (GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("types.galgas", 110)), GALGAS_classConstantMap::constructor_emptyMap (SOURCE_FILE ("types.galgas", 111)), GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("types.galgas", 112)), GALGAS_guardMapForContext::constructor_emptyMap (SOURCE_FILE ("types.galgas", 113)), GALGAS_PLMTypeAttributes::constructor_instanciable (SOURCE_FILE ("types.galgas", 114)).operator_or (GALGAS_PLMTypeAttributes::constructor_equatable (SOURCE_FILE ("types.galgas", 114)) COMMA_SOURCE_FILE ("types.galgas", 114)).operator_or (GALGAS_PLMTypeAttributes::constructor_copyable (SOURCE_FILE ("types.galgas", 114)) COMMA_SOURCE_FILE ("types.galgas", 114)), function_staticStringTypeName (inCompiler COMMA_SOURCE_FILE ("types.galgas", 115)), GALGAS_typeKind::constructor_literalString (SOURCE_FILE ("types.galgas", 116)), function_staticStringTypeName (inCompiler COMMA_SOURCE_FILE ("types.galgas", 117))  COMMA_SOURCE_FILE ("types.galgas", 109)) ;
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function introspection                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const C_galgas_type_descriptor * functionArgs_literalStringType [1] = {
  NULL
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_object functionWithGenericHeader_literalStringType (C_Compiler * inCompiler,
                                                                  const cObjectArray & /* inEffectiveParameterArray */,
                                                                  const GALGAS_location & /* inErrorLocation */
                                                                  COMMA_LOCATION_ARGS) {
  return function_literalStringType (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_galgas_function_descriptor functionDescriptor_literalStringType ("literalStringType",
                                                                   functionWithGenericHeader_literalStringType,
                                                                   & kTypeDescriptor_GALGAS_PLMType,
                                                                   0,
                                                                   functionArgs_literalStringType) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                                 Function 'voidType'                                                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_PLMType function_voidType (C_Compiler * /* inCompiler */
                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_PLMType result_result ; // Returned variable
  result_result = GALGAS_PLMType::constructor_new (GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("types.galgas", 125)), GALGAS_classConstantMap::constructor_emptyMap (SOURCE_FILE ("types.galgas", 126)), GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("types.galgas", 127)), GALGAS_guardMapForContext::constructor_emptyMap (SOURCE_FILE ("types.galgas", 128)), GALGAS_PLMTypeAttributes::constructor_none (SOURCE_FILE ("types.galgas", 129)), GALGAS_string::makeEmptyString (), GALGAS_typeKind::constructor_void (SOURCE_FILE ("types.galgas", 131)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("types.galgas", 124)) ;
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function introspection                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const C_galgas_type_descriptor * functionArgs_voidType [1] = {
  NULL
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_object functionWithGenericHeader_voidType (C_Compiler * inCompiler,
                                                         const cObjectArray & /* inEffectiveParameterArray */,
                                                         const GALGAS_location & /* inErrorLocation */
                                                         COMMA_LOCATION_ARGS) {
  return function_voidType (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_galgas_function_descriptor functionDescriptor_voidType ("voidType",
                                                          functionWithGenericHeader_voidType,
                                                          & kTypeDescriptor_GALGAS_PLMType,
                                                          0,
                                                          functionArgs_voidType) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                               Function 'functionType'                                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_PLMType function_functionType (const GALGAS_routineDescriptor & constinArgument_inDescriptor,
                                      C_Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_PLMType result_result ; // Returned variable
  GALGAS_string var_llvmTypeName_4879 ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, constinArgument_inDescriptor.getter_returnTypeProxy (HERE).objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("types.galgas", 140)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_llvmTypeName_4879 = GALGAS_string ("void") ;
  }else if (kBoolFalse == test_0) {
    var_llvmTypeName_4879 = extensionGetter_llvmTypeName (constinArgument_inDescriptor.getter_returnTypeProxy (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("types.galgas", 143)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 143)) ;
  }
  var_llvmTypeName_4879.plusAssign_operation(GALGAS_string ("("), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 145)) ;
  cEnumerator_routineTypedSignature enumerator_5107 (constinArgument_inDescriptor.getter_signature (HERE), kENUMERATION_UP) ;
  while (enumerator_5107.hasCurrentObject ()) {
    var_llvmTypeName_4879.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_5107.current_mTypeProxy (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("types.galgas", 148)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 148)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 148)) ;
    switch (enumerator_5107.current_mFormalArgumentPassingMode (HERE).enumValue ()) {
    case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
    case GALGAS_procFormalArgumentPassingMode::kEnum_output:
      {
        var_llvmTypeName_4879.plusAssign_operation(GALGAS_string ("*"), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 150)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_input:
      {
      }
      break ;
    }
    if (enumerator_5107.hasNextObject ()) {
      var_llvmTypeName_4879.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 153)) ;
    }
    enumerator_5107.gotoNextObject () ;
  }
  var_llvmTypeName_4879.plusAssign_operation(GALGAS_string (")*"), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 155)) ;
  result_result = GALGAS_PLMType::constructor_new (GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("types.galgas", 157)), GALGAS_classConstantMap::constructor_emptyMap (SOURCE_FILE ("types.galgas", 158)), GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("types.galgas", 159)), GALGAS_guardMapForContext::constructor_emptyMap (SOURCE_FILE ("types.galgas", 160)), GALGAS_PLMTypeAttributes::constructor_none (SOURCE_FILE ("types.galgas", 161)), GALGAS_string::makeEmptyString (), GALGAS_typeKind::constructor_function (constinArgument_inDescriptor  COMMA_SOURCE_FILE ("types.galgas", 163)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("types.galgas", 156)) ;
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function introspection                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const C_galgas_type_descriptor * functionArgs_functionType [2] = {
  & kTypeDescriptor_GALGAS_routineDescriptor,
  NULL
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_object functionWithGenericHeader_functionType (C_Compiler * inCompiler,
                                                             const cObjectArray & inEffectiveParameterArray,
                                                             const GALGAS_location & /* inErrorLocation */
                                                             COMMA_LOCATION_ARGS) {
  const GALGAS_routineDescriptor operand0 = GALGAS_routineDescriptor::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                                     inCompiler
                                                                                     COMMA_THERE) ;
  return function_functionType (operand0,
                                inCompiler
                                COMMA_THERE).getter_object (THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_galgas_function_descriptor functionDescriptor_functionType ("functionType",
                                                              functionWithGenericHeader_functionType,
                                                              & kTypeDescriptor_GALGAS_PLMType,
                                                              1,
                                                              functionArgs_functionType) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                           Routine 'buildTypeMapHTMLFile'                                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_buildTypeMapHTMLFile (GALGAS_unifiedTypeMap inArgument_inTypeMap,
                                   const GALGAS_lstring constinArgument_inSourceFile,
                                   C_Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_typeDumpFilePath_16560 = constinArgument_inSourceFile.getter_string (HERE).add_operation (GALGAS_string (".types.html"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 439)) ;
  const enumGalgasBool test_0 = GALGAS_bool (gOption_plm_5F_options_emitTypeMap.getter_value ()).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_stringset var_firstLetterSet_16677 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("types.galgas", 441)) ;
    cEnumerator_unifiedTypeMap enumerator_16706 (inArgument_inTypeMap, kENUMERATION_UP) ;
    while (enumerator_16706.hasCurrentObject ()) {
      var_firstLetterSet_16677.addAssign_operation (enumerator_16706.current_lkey (HERE).getter_string (HERE).getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("types.galgas", 443)).getter_string (SOURCE_FILE ("types.galgas", 443))  COMMA_SOURCE_FILE ("types.galgas", 443)) ;
      enumerator_16706.gotoNextObject () ;
    }
    GALGAS_string var_tableOfTypeString_16814 = GALGAS_string::makeEmptyString () ;
    GALGAS_char var_currentFirstLetter_16848 = GALGAS_char (TO_UNICODE (32)) ;
    cEnumerator_unifiedTypeMap enumerator_16884 (inArgument_inTypeMap, kENUMERATION_UP) ;
    while (enumerator_16884.hasCurrentObject ()) {
      const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_currentFirstLetter_16848.objectCompare (enumerator_16884.current_lkey (HERE).getter_string (HERE).getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("types.galgas", 448)))).boolEnum () ;
      if (kBoolTrue == test_1) {
        var_currentFirstLetter_16848 = enumerator_16884.current_lkey (HERE).getter_string (HERE).getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("types.galgas", 449)) ;
        var_tableOfTypeString_16814.plusAssign_operation(GALGAS_string ("<br><a name=\"").add_operation (var_currentFirstLetter_16848.getter_uint (SOURCE_FILE ("types.galgas", 450)).getter_string (SOURCE_FILE ("types.galgas", 450)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 450)).add_operation (GALGAS_string ("\"><b>"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 450)).add_operation (var_currentFirstLetter_16848.getter_string (SOURCE_FILE ("types.galgas", 450)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 450)).add_operation (GALGAS_string ("</b></a><br>"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 450)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 450)) ;
      }
      var_tableOfTypeString_16814.plusAssign_operation(function_linkForHTMLTypeMap (enumerator_16884.current_lkey (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("types.galgas", 452)).add_operation (GALGAS_string ("<br>"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 452)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 452)) ;
      enumerator_16884.gotoNextObject () ;
    }
    GALGAS_string var_typeDumpString_17277 = GALGAS_string (filewrapperTemplate_typeDumpGenerationTemplate_dump (inCompiler, constinArgument_inSourceFile.getter_string (HERE).getter_lastPathComponent (SOURCE_FILE ("types.galgas", 455)), inArgument_inTypeMap, var_firstLetterSet_16677, var_tableOfTypeString_16814 COMMA_SOURCE_FILE ("types.galgas", 454))) ;
    GALGAS_bool joker_17507 ; // Joker input parameter
    var_typeDumpString_17277.method_writeToFileWhenDifferentContents (var_typeDumpFilePath_16560, joker_17507, inCompiler COMMA_SOURCE_FILE ("types.galgas", 460)) ;
  }else if (kBoolFalse == test_0) {
    {
    GALGAS_string::class_method_deleteFileIfExists (var_typeDumpFilePath_16560, inCompiler COMMA_SOURCE_FILE ("types.galgas", 462)) ;
    }
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                      Filewrapper 'typeDumpGenerationTemplate'                                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_typeDumpGenerationTemplate_0 [1] = {
  NULL
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_typeDumpGenerationTemplate_0 [1] = {
  NULL
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_typeDumpGenerationTemplate (
  "",
  0,
  gWrapperAllFiles_typeDumpGenerationTemplate_0,
  0,
  gWrapperAllDirectories_typeDumpGenerationTemplate_0
) ;


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                               Filewrapper template 'typeDumpGenerationTemplate dump'                                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string filewrapperTemplate_typeDumpGenerationTemplate_dump (C_Compiler * inCompiler,
                                                                   const GALGAS_string & in_PROJECT_5F_NAME,
                                                                   const GALGAS_unifiedTypeMap & in_GLOBAL_5F_TYPE_5F_MAP,
                                                                   const GALGAS_stringset & in_FIRST_5F_LETTER_5F_SET,
                                                                   const GALGAS_string & in_TABLE_5F_OF_5F_TYPES_5F_STRING
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.01//EN\" \"http://www.w3.org/TR/html4/strict.dtd\">\n"
    "<html>\n"
    "<head>\n"
    "<meta http-equiv=\"Content-Type\" content=\"text/html; charset=utf-8\">\n"
    "<title>Global constants of " ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << "</title>\n"
    "<style type=\"text/css\">body {\n"
    "  font-family: Georgia, sans-serif ;\n"
    "  font-size: small ;\n"
    "}\n"
    "\n"
    "h1 {\n"
    "  text-align: center ;\n"
    "}\n"
    "\n"
    ".selecteur {\n"
    "  color:green ;\n"
    "}\n"
    "\n"
    "a.header_link {\n"
    "  background-color: #FFFFCC ;\n"
    "}\n"
    "\n"
    "a:visited, a:link, a:active{\n"
    "  color: blue ;\n"
    "  text-decoration: underline ;\n"
    "}\n"
    "\n"
    "a:hover {\n"
    "  color:green ;\n"
    "  background-color: #FFFF00 ;\n"
    "  text-decoration: none ;\n"
    "}\n"
    "\n"
    "table.result {\n"
    "  border: 1px solid #666666 ;\n"
    "}\n"
    "\n"
    "td.result_title {\n"
    "  font-weight: bold ;\n"
    "  text-align: center ;\n"
    "  background-color: yellow ;\n"
    "}\n"
    "\n"
    "tr.result_line {\n"
    "  background-color: #EEEEEE ;\n"
    "}\n"
    "\n"
    "</style>\n"
    "</head>\n"
    "<body>\n"
    "<div>\n"
    "<h1>Types defined by " ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << "</h1>\n"
    "<p>This document lists all " ;
  result << in_GLOBAL_5F_TYPE_5F_MAP.getter_count (SOURCE_FILE ("typeDump.html.galgasTemplate", 53)).getter_string (SOURCE_FILE ("typeDump.html.galgasTemplate", 53)).stringValue () ;
  result << " defined types, sorted by name.</p>\n"
    "<p>" ;
  GALGAS_uint index_987_ (0) ;
  if (in_FIRST_5F_LETTER_5F_SET.isValid ()) {
    cEnumerator_stringset enumerator_987 (in_FIRST_5F_LETTER_5F_SET, kENUMERATION_UP) ;
    while (enumerator_987.hasCurrentObject ()) {
      result << "<a class=\"header_link\" href=\"#" ;
      result << enumerator_987.current_key (HERE).getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 56)).getter_uint (SOURCE_FILE ("typeDump.html.galgasTemplate", 56)).getter_string (SOURCE_FILE ("typeDump.html.galgasTemplate", 56)).stringValue () ;
      result << "\">" ;
      result << enumerator_987.current_key (HERE).stringValue () ;
      result << "</a>" ;
      if (enumerator_987.hasNextObject ()) {
        result << " - " ;
      }
      index_987_.increment () ;
      enumerator_987.gotoNextObject () ;
    }
  }
  result << "</p>\n"
    "<p>" ;
  result << in_TABLE_5F_OF_5F_TYPES_5F_STRING.stringValue () ;
  result << "\n"
    "</p>\n"
    "<table class=\"result\">\n"
    "<tr><td class=\"result_title\">Type Name</td><td class=\"result_title\">Kind</td><td class=\"result_title\">Description</td><td class=\"result_title\">LLVM Ba"
    "se Name</td><td class=\"result_title\">LLVM Type Name</td></tr>\n" ;
  GALGAS_uint index_1400_ (0) ;
  if (in_GLOBAL_5F_TYPE_5F_MAP.isValid ()) {
    cEnumerator_unifiedTypeMap enumerator_1400 (in_GLOBAL_5F_TYPE_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_1400.hasCurrentObject ()) {
      result << "<tr class=\"result_line\"><td><a name=\"" ;
      result << enumerator_1400.current_lkey (HERE).getter_string (HERE).stringValue () ;
      result << "\">" ;
      result << enumerator_1400.current_lkey (HERE).getter_string (HERE).stringValue () ;
      result << "</a></td><td>" ;
      result << extensionGetter_descriptionForHTMLFile (enumerator_1400.current_type (HERE), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 66)).stringValue () ;
      result << "</td><td>" ;
      result << enumerator_1400.current_type (HERE).getter_plmTypeDescriptionName (SOURCE_FILE ("typeDump.html.galgasTemplate", 66)).stringValue () ;
      result << "</td><td>" ;
      result << enumerator_1400.current_type (HERE).getter_llvmBaseTypeName (SOURCE_FILE ("typeDump.html.galgasTemplate", 66)).stringValue () ;
      result << "</td><td>" ;
      result << extensionGetter_llvmTypeName (enumerator_1400.current_type (HERE), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 66)).stringValue () ;
      result << "</td></tr>\n" ;
      index_1400_.increment () ;
      enumerator_1400.gotoNextObject () ;
    }
  }
  result << "\n"
    "</table>\n"
    "</div>\n"
    "</body>\n"
    "</html>\n" ;
  return GALGAS_string (result) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                            Function 'linkForHTMLTypeMap'                                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string function_linkForHTMLTypeMap (const GALGAS_string & constinArgument_inTypeName,
                                           C_Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("<a class=\"header_link\" href=\"#").add_operation (constinArgument_inTypeName, inCompiler COMMA_SOURCE_FILE ("types.galgas", 481)).add_operation (GALGAS_string ("\">"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 481)).add_operation (constinArgument_inTypeName, inCompiler COMMA_SOURCE_FILE ("types.galgas", 481)).add_operation (GALGAS_string ("</a>"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 481)) ;
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function introspection                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const C_galgas_type_descriptor * functionArgs_linkForHTMLTypeMap [2] = {
  & kTypeDescriptor_GALGAS_string,
  NULL
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_object functionWithGenericHeader_linkForHTMLTypeMap (C_Compiler * inCompiler,
                                                                   const cObjectArray & inEffectiveParameterArray,
                                                                   const GALGAS_location & /* inErrorLocation */
                                                                   COMMA_LOCATION_ARGS) {
  const GALGAS_string operand0 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  return function_linkForHTMLTypeMap (operand0,
                                      inCompiler
                                      COMMA_THERE).getter_object (THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_galgas_function_descriptor functionDescriptor_linkForHTMLTypeMap ("linkForHTMLTypeMap",
                                                                    functionWithGenericHeader_linkForHTMLTypeMap,
                                                                    & kTypeDescriptor_GALGAS_string,
                                                                    1,
                                                                    functionArgs_linkForHTMLTypeMap) ;

