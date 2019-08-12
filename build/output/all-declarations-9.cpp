#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

#include "all-declarations-9.h"

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                     Overriding extension method '@dynArrayAppendFunctionIR llvmCodeGeneration'                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_dynArrayAppendFunctionIR_llvmCodeGeneration (const cPtr_abstractRoutineIR * inObject,
                                                                         GALGAS_string & ioArgument_ioLLVMcode,
                                                                         const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                         GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_dynArrayAppendFunctionIR * object = (const cPtr_dynArrayAppendFunctionIR *) inObject ;
  macroValidSharedObject (object, cPtr_dynArrayAppendFunctionIR) ;
  GALGAS_omnibusType var_elementType_12039 = object->mProperty_mElementTypeProxy.getter_type (inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 268)) ;
  GALGAS_routineFormalArgumentListAST temp_0 = GALGAS_routineFormalArgumentListAST::constructor_emptyList (SOURCE_FILE ("type-dynamic-array.galgas", 278)) ;
  temp_0.addAssign_operation (GALGAS_procFormalArgumentPassingMode::constructor_input (SOURCE_FILE ("type-dynamic-array.galgas", 270)), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-dynamic-array.galgas", 271)), var_elementType_12039.getter_llvmBaseTypeName (HERE).getter_nowhere (SOURCE_FILE ("type-dynamic-array.galgas", 272)), GALGAS_string ("inValue").getter_nowhere (SOURCE_FILE ("type-dynamic-array.galgas", 273))  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 273)) ;
  temp_0.addAssign_operation (GALGAS_procFormalArgumentPassingMode::constructor_input (SOURCE_FILE ("type-dynamic-array.galgas", 275)), GALGAS_string ("atIndex").getter_nowhere (SOURCE_FILE ("type-dynamic-array.galgas", 276)), GALGAS_string ("uint32").getter_nowhere (SOURCE_FILE ("type-dynamic-array.galgas", 277)), GALGAS_string ("inIndex").getter_nowhere (SOURCE_FILE ("type-dynamic-array.galgas", 278))  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 278)) ;
  GALGAS_routineFormalArgumentListAST var_argumentList_12115 = temp_0 ;
  GALGAS_lstring var_insertRoutineMangledName_12343 = function_routineMangledNameFromAST (object->mProperty_mArrayTypeProxy.getter_type (inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 281)).getter_llvmBaseTypeName (HERE), GALGAS_string ("insert").getter_nowhere (SOURCE_FILE ("type-dynamic-array.galgas", 282)), var_argumentList_12115, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 280)) ;
  GALGAS_string var_insertRoutineLLVMName_12492 = function_llvmNameForFunction (var_insertRoutineMangledName_12343.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 285)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal void @").add_operation (object->mProperty_mRoutineMangledName.getter_string (HERE).getter_assemblerRepresentation (SOURCE_FILE ("type-dynamic-array.galgas", 286)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 286)).add_operation (GALGAS_string (" (%ptrtype* %ioArray, "), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 286)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) var_elementType_12039.ptr (), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 287)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 287)).add_operation (GALGAS_string (" %inValue)"), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 287)).add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 287)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 287)).add_operation (GALGAS_string ("{\n"), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 287)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 286)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--- Get buffer length\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 288)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %current.buffer.pointer = load %ptrtype, %ptrtype* %ioArray\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 289)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %current.buffer.length = call i32 @arc.length (%ptrtype %current.buffer.pointer)\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 290)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--- Insert\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 291)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @").add_operation (var_insertRoutineLLVMName_12492, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 292)).add_operation (GALGAS_string ("(%ptrtype* %ioArray, "), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 292)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) var_elementType_12039.ptr (), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 293)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 293)).add_operation (GALGAS_string (" %inValue, i32 %current.buffer.length)\n"), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 293)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 292)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--- Return\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 294)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 295)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 296)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_dynArrayAppendFunctionIR_llvmCodeGeneration (void) {
  enterExtensionMethod_llvmCodeGeneration (kTypeDescriptor_GALGAS_dynArrayAppendFunctionIR.mSlotID,
                                           extensionMethod_dynArrayAppendFunctionIR_llvmCodeGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_dynArrayAppendFunctionIR_llvmCodeGeneration (defineExtensionMethod_dynArrayAppendFunctionIR_llvmCodeGeneration, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                   Overriding extension method '@dynArrayInsertFunctionIR enterAccessibleEntities'                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_dynArrayInsertFunctionIR_enterAccessibleEntities (const cPtr_abstractRoutineIR * inObject,
                                                                              GALGAS_stringset & ioArgument_ioInvokedRoutineSet,
                                                                              GALGAS_uint & /* ioArgument_ioMaxBranchOfOnInstructions */,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_dynArrayInsertFunctionIR * object = (const cPtr_dynArrayInsertFunctionIR *) inObject ;
  macroValidSharedObject (object, cPtr_dynArrayInsertFunctionIR) ;
  GALGAS_string var_elementLLVMBaseTypeName_13952 = object->mProperty_mElementTypeProxy.getter_type (inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 313)).getter_llvmBaseTypeName (HERE) ;
  GALGAS_string var_assignRoutineLLVMName_14024 = function_assignmentPrefix (inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 314)).add_operation (var_elementLLVMBaseTypeName_13952, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 314)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 314)).add_operation (var_elementLLVMBaseTypeName_13952, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 314)) ;
  ioArgument_ioInvokedRoutineSet.addAssign_operation (var_assignRoutineLLVMName_14024  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 315)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_dynArrayInsertFunctionIR_enterAccessibleEntities (void) {
  enterExtensionMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_dynArrayInsertFunctionIR.mSlotID,
                                                extensionMethod_dynArrayInsertFunctionIR_enterAccessibleEntities) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_dynArrayInsertFunctionIR_enterAccessibleEntities (defineExtensionMethod_dynArrayInsertFunctionIR_enterAccessibleEntities, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                     Overriding extension method '@dynArrayInsertFunctionIR llvmCodeGeneration'                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_dynArrayInsertFunctionIR_llvmCodeGeneration (const cPtr_abstractRoutineIR * inObject,
                                                                         GALGAS_string & ioArgument_ioLLVMcode,
                                                                         const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                         GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_dynArrayInsertFunctionIR * object = (const cPtr_dynArrayInsertFunctionIR *) inObject ;
  macroValidSharedObject (object, cPtr_dynArrayInsertFunctionIR) ;
  GALGAS_string var_elementLLVMTypeName_14487 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) object->mProperty_mElementTypeProxy.getter_type (inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 325)).ptr (), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 325)) ;
  GALGAS_string var_elementLLVMBaseTypeName_14559 = object->mProperty_mElementTypeProxy.getter_type (inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 326)).getter_llvmBaseTypeName (HERE) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal void @").add_operation (object->mProperty_mRoutineMangledName.getter_string (HERE).getter_assemblerRepresentation (SOURCE_FILE ("type-dynamic-array.galgas", 327)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 327)).add_operation (GALGAS_string (" (%ptrtype* %ioArray"), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 327)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 327)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", ").add_operation (var_elementLLVMTypeName_14487, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 328)).add_operation (GALGAS_string (" %inValue"), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 328)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 328)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", i32 %inIndex"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 329)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (")").add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 330)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 330)).add_operation (GALGAS_string ("{\n"), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 330)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 330)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--- Inserted element pointer\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 331)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %insert.address = alloca %ptrtype\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 332)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--- value pointer\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 333)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %value.pointer = alloca ").add_operation (var_elementLLVMTypeName_14487, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 334)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 334)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 334)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store ").add_operation (var_elementLLVMTypeName_14487, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 335)).add_operation (GALGAS_string (" %inValue, "), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 335)).add_operation (var_elementLLVMTypeName_14487, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 335)).add_operation (GALGAS_string ("* %value.pointer\n"), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 335)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 335)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--- Size of element\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 336)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %sizeAsPtr = getelementptr inbounds ").add_operation (var_elementLLVMTypeName_14487, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 337)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 337)).add_operation (var_elementLLVMTypeName_14487, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 337)).add_operation (GALGAS_string ("* null, i32 1\n"), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 337)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 337)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %element.byte.size = ptrtoint ").add_operation (var_elementLLVMTypeName_14487, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 338)).add_operation (GALGAS_string ("* %sizeAsPtr to i32\n"), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 338)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 338)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--- Get inserted element pointer\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 339)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %current.buffer.pointer = load %ptrtype, %ptrtype* %ioArray\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 340)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %new.buffer.pointer = call %ptrtype @arc.insert.at.index "), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 341)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("(%ptrtype %current.buffer.pointer, i32 %inIndex, i32 %element.byte.size, %ptrtype* %insert.address)\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 342)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--- Perform copy\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 343)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %typed.insert.address = bitcast %ptrtype* %insert.address to ").add_operation (var_elementLLVMTypeName_14487, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 344)).add_operation (GALGAS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 344)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 344)) ;
  GALGAS_string var_assignRoutineLLVMName_15971 = function_assignmentPrefix (inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 345)).add_operation (var_elementLLVMBaseTypeName_14559, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 345)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 345)).add_operation (var_elementLLVMBaseTypeName_14559, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 345)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @").add_operation (var_assignRoutineLLVMName_15971.getter_assemblerRepresentation (SOURCE_FILE ("type-dynamic-array.galgas", 346)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 346)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 346)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" (").add_operation (var_elementLLVMTypeName_14487, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 347)).add_operation (GALGAS_string ("* %typed.insert.address, "), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 347)).add_operation (var_elementLLVMTypeName_14487, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 347)).add_operation (GALGAS_string ("* %value.pointer)\n"), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 347)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 347)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--- Store new buffer pointer\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 348)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store %ptrtype %new.buffer.pointer, %ptrtype* %ioArray\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 349)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--- Return\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 350)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 351)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 352)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_dynArrayInsertFunctionIR_llvmCodeGeneration (void) {
  enterExtensionMethod_llvmCodeGeneration (kTypeDescriptor_GALGAS_dynArrayInsertFunctionIR.mSlotID,
                                           extensionMethod_dynArrayInsertFunctionIR_llvmCodeGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_dynArrayInsertFunctionIR_llvmCodeGeneration (defineExtensionMethod_dynArrayInsertFunctionIR_llvmCodeGeneration, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                 Overriding extension method '@dynamicArrayTypeAssignFunctionIR llvmCodeGeneration'                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_dynamicArrayTypeAssignFunctionIR_llvmCodeGeneration (const cPtr_abstractRoutineIR * inObject,
                                                                                 GALGAS_string & ioArgument_ioLLVMcode,
                                                                                 const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                                 GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_dynamicArrayTypeAssignFunctionIR * object = (const cPtr_dynamicArrayTypeAssignFunctionIR *) inObject ;
  macroValidSharedObject (object, cPtr_dynamicArrayTypeAssignFunctionIR) ;
  ioArgument_ioGenerationAdds.mProperty_mNeedsDynamicMemoryAllocation = GALGAS_bool (true) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal void @").add_operation (object->mProperty_mRoutineMangledName.getter_string (HERE).getter_assemblerRepresentation (SOURCE_FILE ("type-dynamic-array.galgas", 371)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 371)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 371)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" (%ptrtype * %inTargetPtr, %ptrtype* %inSourcePtr) nounwind optsize {\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 372)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %source = load %ptrtype, %ptrtype* %inSourcePtr\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 373)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @arc.retain (%ptrtype %source)\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 374)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %target = load %ptrtype, %ptrtype* %inTargetPtr\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 375)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @arc.release (%ptrtype %target)\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 376)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store %ptrtype %source, %ptrtype* %inTargetPtr\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 377)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 378)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 379)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_dynamicArrayTypeAssignFunctionIR_llvmCodeGeneration (void) {
  enterExtensionMethod_llvmCodeGeneration (kTypeDescriptor_GALGAS_dynamicArrayTypeAssignFunctionIR.mSlotID,
                                           extensionMethod_dynamicArrayTypeAssignFunctionIR_llvmCodeGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_dynamicArrayTypeAssignFunctionIR_llvmCodeGeneration (defineExtensionMethod_dynamicArrayTypeAssignFunctionIR_llvmCodeGeneration, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                   Overriding extension getter '@booleanDeclarationAST locationForErrorSignaling'                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_location extensionGetter_booleanDeclarationAST_locationForErrorSignaling (const cPtr_abstractDeclarationAST * /* inObject */,
                                                                                        C_Compiler * /* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_outLocation ; // Returned variable
  result_outLocation = GALGAS_location::constructor_nowhere (SOURCE_FILE ("type-bool.galgas", 11)) ;
//---
  return result_outLocation ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_booleanDeclarationAST_locationForErrorSignaling (void) {
  enterExtensionGetter_locationForErrorSignaling (kTypeDescriptor_GALGAS_booleanDeclarationAST.mSlotID,
                                                  extensionGetter_booleanDeclarationAST_locationForErrorSignaling) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_booleanDeclarationAST_locationForErrorSignaling (defineExtensionGetter_booleanDeclarationAST_locationForErrorSignaling, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                     Overriding extension method '@booleanDeclarationAST enterInPrecedenceGraph'                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_booleanDeclarationAST_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                                          GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_booleanDeclarationAST * object = (const cPtr_booleanDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_booleanDeclarationAST) ;
  {
  const GALGAS_booleanDeclarationAST temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 19)).getter_nowhere (SOURCE_FILE ("type-bool.galgas", 19)), temp_0, inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 19)) ;
  }
  {
  ioArgument_ioGraph.setter_noteNode (GALGAS_string ("uint1").getter_nowhere (SOURCE_FILE ("type-bool.galgas", 20)) COMMA_SOURCE_FILE ("type-bool.galgas", 20)) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_booleanDeclarationAST_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_booleanDeclarationAST.mSlotID,
                                               extensionMethod_booleanDeclarationAST_enterInPrecedenceGraph) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_booleanDeclarationAST_enterInPrecedenceGraph (defineExtensionMethod_booleanDeclarationAST_enterInPrecedenceGraph, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//               Overriding extension getter '@booleanDeclarationAST keyRepresentationForErrorSignaling'               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string extensionGetter_booleanDeclarationAST_keyRepresentationForErrorSignaling (const cPtr_abstractDeclarationAST * /* inObject */,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  result_outRepresentation = function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 26)) ;
//---
  return result_outRepresentation ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_booleanDeclarationAST_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_booleanDeclarationAST.mSlotID,
                                                           extensionGetter_booleanDeclarationAST_keyRepresentationForErrorSignaling) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_booleanDeclarationAST_keyRepresentationForErrorSignaling (defineExtensionGetter_booleanDeclarationAST_keyRepresentationForErrorSignaling, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                            Once function 'boolTypeName'                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string onceFunction_boolTypeName (C_Compiler * /* inCompiler */
                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("bool") ;
//---
  return result_result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function implementation                                                                                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static bool gOnceFunctionResultAvailable_boolTypeName = false ;
static GALGAS_string gOnceFunctionResult_boolTypeName ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string function_boolTypeName (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_boolTypeName) {
    gOnceFunctionResult_boolTypeName = onceFunction_boolTypeName (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_boolTypeName = true ;
  }
  return gOnceFunctionResult_boolTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void releaseOnceFunctionResult_boolTypeName (void) {
  gOnceFunctionResult_boolTypeName.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gEpilogueForOnceFunction_boolTypeName (NULL,
                                                          releaseOnceFunctionResult_boolTypeName) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function introspection                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const C_galgas_type_descriptor * functionArgs_boolTypeName [1] = {
  NULL
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_object functionWithGenericHeader_boolTypeName (C_Compiler * inCompiler,
                                                             const cObjectArray & /* inEffectiveParameterArray */,
                                                             const GALGAS_location & /* inErrorLocation */
                                                             COMMA_LOCATION_ARGS) {
  return function_boolTypeName (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_galgas_function_descriptor functionDescriptor_boolTypeName ("boolTypeName",
                                                              functionWithGenericHeader_boolTypeName,
                                                              & kTypeDescriptor_GALGAS_string,
                                                              0,
                                                              functionArgs_boolTypeName) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                         Overriding extension method '@booleanDeclarationAST enterInContext'                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_booleanDeclarationAST_enterInContext (const cPtr_abstractDeclarationAST * /* inObject */,
                                                                  const GALGAS_functionDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                                  GALGAS_semanticContext & ioArgument_ioContext,
                                                                  GALGAS_declarationDecorationList & /* ioArgument_ioDecoratedDeclarationList */,
                                                                  GALGAS_decoratedRegularRoutineList & /* ioArgument_ioDecoratedRoutineList */,
                                                                  GALGAS_routineListIR & ioArgument_ioRoutineListIR,
                                                                  GALGAS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                                  GALGAS_staticEntityMap & /* ioArgument_ioStaticEntityMap */,
                                                                  GALGAS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                                  GALGAS_userLLVMTypeDefinitionListIR & /* ioArgument_ioUserLLVMTypeDefinitionListIR */,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap_2D_proxy var_uint_31_TypeProxy_2860 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioContext.mProperty_mTypeMap, GALGAS_lstring::constructor_new (GALGAS_string ("uint1"), function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 51)).getter_nowhere (SOURCE_FILE ("type-bool.galgas", 51)).getter_location (SOURCE_FILE ("type-bool.galgas", 51))  COMMA_SOURCE_FILE ("type-bool.galgas", 51)), var_uint_31_TypeProxy_2860 COMMA_SOURCE_FILE ("type-bool.galgas", 51)) ;
  }
  GALGAS_routineMapCTXT var_routineMap_2915 = GALGAS_routineMapCTXT::constructor_emptyMap (SOURCE_FILE ("type-bool.galgas", 53)) ;
  {
  GALGAS_lstring joker_3140 ; // Joker input parameter
  extensionSetter_addFunctionWithoutArgument (var_routineMap_2915, function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 56)), GALGAS_string ("uint1").getter_nowhere (SOURCE_FILE ("type-bool.galgas", 57)), GALGAS_mode::constructor_anySafeMode (SOURCE_FILE ("type-bool.galgas", 58)), var_uint_31_TypeProxy_2860, joker_3140, inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 55)) ;
  }
  GALGAS_stringset temp_0 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-bool.galgas", 71)) ;
  temp_0.addAssign_operation (function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 71))  COMMA_SOURCE_FILE ("type-bool.galgas", 71)) ;
  GALGAS_omnibusType var_booleanType_3207 = GALGAS_omnibusType::constructor_new (GALGAS_propertyGetterMap::constructor_emptyMap (SOURCE_FILE ("type-bool.galgas", 64)), GALGAS_propertySetterMap::constructor_emptyMap (SOURCE_FILE ("type-bool.galgas", 65)), var_routineMap_2915, GALGAS_classConstantMap::constructor_emptyMap (SOURCE_FILE ("type-bool.galgas", 67)), GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-bool.galgas", 68)), GALGAS_guardMapCTXT::constructor_emptyMap (SOURCE_FILE ("type-bool.galgas", 69)), GALGAS_subscript::constructor_noSubscript (SOURCE_FILE ("type-bool.galgas", 70)), temp_0, GALGAS_omnibusTypeAttributes::constructor_instanciable (SOURCE_FILE ("type-bool.galgas", 72)).operator_or (GALGAS_omnibusTypeAttributes::constructor_equatable (SOURCE_FILE ("type-bool.galgas", 72)) COMMA_SOURCE_FILE ("type-bool.galgas", 72)).operator_or (GALGAS_omnibusTypeAttributes::constructor_copyable (SOURCE_FILE ("type-bool.galgas", 72)) COMMA_SOURCE_FILE ("type-bool.galgas", 72)), function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 73)), GALGAS_typeKind::constructor_boolean (SOURCE_FILE ("type-bool.galgas", 74)), function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 75))  COMMA_SOURCE_FILE ("type-bool.galgas", 63)) ;
  {
  ioArgument_ioContext.mProperty_mTypeMap.setter_insertType (function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 79)).getter_nowhere (SOURCE_FILE ("type-bool.galgas", 79)), var_booleanType_3207, inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 78)) ;
  }
  GALGAS_omnibusType var_selfType_3787 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.getter_mTypeMap (HERE), function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 83)).getter_nowhere (SOURCE_FILE ("type-bool.galgas", 83)), inCompiler  COMMA_SOURCE_FILE ("type-bool.galgas", 83)).getter_type (inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 83)) ;
  GALGAS_lstring var_boolBoolOp_3894 = function_combineTypeNamesForInfixOperator (function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 84)), function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 84)), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 84)) ;
  {
  ioArgument_ioContext.mProperty_mEqualOperatorMap.setter_insertKey (var_boolBoolOp_3894, var_selfType_3787, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_eq (SOURCE_FILE ("type-bool.galgas", 88))  COMMA_SOURCE_FILE ("type-bool.galgas", 88)), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 85)) ;
  }
  {
  ioArgument_ioContext.mProperty_mStrictInfOperatorMap.setter_insertKey (var_boolBoolOp_3894, var_selfType_3787, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_ult (SOURCE_FILE ("type-bool.galgas", 98))  COMMA_SOURCE_FILE ("type-bool.galgas", 98)), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 95)) ;
  }
  {
  ioArgument_ioContext.mProperty_mInfEqualOperatorMap.setter_insertKey (var_boolBoolOp_3894, var_selfType_3787, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_ule (SOURCE_FILE ("type-bool.galgas", 103))  COMMA_SOURCE_FILE ("type-bool.galgas", 103)), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 100)) ;
  }
  {
  ioArgument_ioContext.mProperty_mBooleanXorOperatorMap.setter_insertKey (var_boolBoolOp_3894, var_selfType_3787, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_xor (SOURCE_FILE ("type-bool.galgas", 118))  COMMA_SOURCE_FILE ("type-bool.galgas", 118)), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 115)) ;
  }
  {
  ioArgument_ioContext.mProperty_mOrOperatorMap.setter_insertKey (var_boolBoolOp_3894, var_selfType_3787, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_ior (SOURCE_FILE ("type-bool.galgas", 123))  COMMA_SOURCE_FILE ("type-bool.galgas", 123)), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 120)) ;
  }
  {
  ioArgument_ioContext.mProperty_mAndOperatorMap.setter_insertKey (var_boolBoolOp_3894, var_selfType_3787, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_and (SOURCE_FILE ("type-bool.galgas", 128))  COMMA_SOURCE_FILE ("type-bool.galgas", 128)), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 125)) ;
  }
  {
  ioArgument_ioContext.mProperty_mNotOperatorMap.setter_insertKey (function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 131)).getter_nowhere (SOURCE_FILE ("type-bool.galgas", 131)), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 130)) ;
  }
  ioArgument_ioRoutineListIR.addAssign_operation (GALGAS_basicIntegerAssignFunctionIR::constructor_new (function_assignmentPrefix (inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 135)).add_operation (function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 135)), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 135)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 135)).add_operation (function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 135)), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 135)).getter_nowhere (SOURCE_FILE ("type-bool.galgas", 135)), GALGAS_bool (false), GALGAS_bool (false), GALGAS_string ("i1")  COMMA_SOURCE_FILE ("type-bool.galgas", 134))  COMMA_SOURCE_FILE ("type-bool.galgas", 134)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_booleanDeclarationAST_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_booleanDeclarationAST.mSlotID,
                                       extensionMethod_booleanDeclarationAST_enterInContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_booleanDeclarationAST_enterInContext (defineExtensionMethod_booleanDeclarationAST_enterInContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                   Overriding extension method '@basicIntegerAssignFunctionIR llvmCodeGeneration'                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_basicIntegerAssignFunctionIR_llvmCodeGeneration (const cPtr_abstractRoutineIR * inObject,
                                                                             GALGAS_string & ioArgument_ioLLVMcode,
                                                                             const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                             GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_basicIntegerAssignFunctionIR * object = (const cPtr_basicIntegerAssignFunctionIR *) inObject ;
  macroValidSharedObject (object, cPtr_basicIntegerAssignFunctionIR) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal void @").add_operation (object->mProperty_mRoutineMangledName.getter_string (HERE).getter_assemblerRepresentation (SOURCE_FILE ("type-bool.galgas", 157)), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 157)), inCompiler  COMMA_SOURCE_FILE ("type-bool.galgas", 157)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" (").add_operation (object->mProperty_mLLVMTypeName, inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 158)).add_operation (GALGAS_string ("* %target, "), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 158)).add_operation (object->mProperty_mLLVMTypeName, inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 158)).add_operation (GALGAS_string ("* %source) alwaysinline {\n"), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 158)), inCompiler  COMMA_SOURCE_FILE ("type-bool.galgas", 158)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %value = load ").add_operation (object->mProperty_mLLVMTypeName, inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 159)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 159)).add_operation (object->mProperty_mLLVMTypeName, inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 159)).add_operation (GALGAS_string ("* %source\n"), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 159)), inCompiler  COMMA_SOURCE_FILE ("type-bool.galgas", 159)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store ").add_operation (object->mProperty_mLLVMTypeName, inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 160)).add_operation (GALGAS_string (" %value, "), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 160)).add_operation (object->mProperty_mLLVMTypeName, inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 160)).add_operation (GALGAS_string ("* %target\n"), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 160)), inCompiler  COMMA_SOURCE_FILE ("type-bool.galgas", 160)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("type-bool.galgas", 161)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("type-bool.galgas", 162)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_basicIntegerAssignFunctionIR_llvmCodeGeneration (void) {
  enterExtensionMethod_llvmCodeGeneration (kTypeDescriptor_GALGAS_basicIntegerAssignFunctionIR.mSlotID,
                                           extensionMethod_basicIntegerAssignFunctionIR_llvmCodeGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_basicIntegerAssignFunctionIR_llvmCodeGeneration (defineExtensionMethod_basicIntegerAssignFunctionIR_llvmCodeGeneration, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                   Overriding extension method '@enumerationDeclarationAST enterInPrecedenceGraph'                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_enumerationDeclarationAST_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                                              GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_enumerationDeclarationAST * object = (const cPtr_enumerationDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_enumerationDeclarationAST) ;
  {
  const GALGAS_enumerationDeclarationAST temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (object->mProperty_mEnumerationName, temp_0, inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 53)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (object->mProperty_mEnumerationName, function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 54)).getter_nowhere (SOURCE_FILE ("type-enumeration-declaration.galgas", 54)) COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 54)) ;
  }
  GALGAS_bigint var_maxValue_2403 = GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 56)) ;
  cEnumerator_enumerationConstantList enumerator_2441 (object->mProperty_mCaseNameList, kENUMERATION_UP) ;
  while (enumerator_2441.hasCurrentObject ()) {
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = GALGAS_bool (kIsStrictInf, var_maxValue_2403.objectCompare (enumerator_2441.current_mConstantValue (HERE))).boolEnum () ;
      if (kBoolTrue == test_1) {
        var_maxValue_2403 = enumerator_2441.current_mConstantValue (HERE) ;
      }
    }
    enumerator_2441.gotoNextObject () ;
  }
  GALGAS_uint var_representationBitCount_2541 = GALGAS_uint ((uint32_t) 0U) ;
  if (GALGAS_uint::constructor_max (SOURCE_FILE ("type-enumeration-declaration.galgas", 63)).isValid ()) {
    uint32_t variant_2552 = GALGAS_uint::constructor_max (SOURCE_FILE ("type-enumeration-declaration.galgas", 63)).uintValue () ;
    bool loop_2552 = true ;
    while (loop_2552) {
      loop_2552 = GALGAS_bool (kIsStrictSup, var_maxValue_2403.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 63)))).isValid () ;
      if (loop_2552) {
        loop_2552 = GALGAS_bool (kIsStrictSup, var_maxValue_2403.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 63)))).boolValue () ;
      }
      if (loop_2552 && (0 == variant_2552)) {
        loop_2552 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("type-enumeration-declaration.galgas", 63)) ;
      }
      if (loop_2552) {
        variant_2552 -- ;
        var_representationBitCount_2541.increment_operation (inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 64)) ;
        var_maxValue_2403 = var_maxValue_2403.divide_operation (GALGAS_bigint ("2", inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 65)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 65)) ;
      }
    }
  }
  {
  ioArgument_ioGraph.setter_addEdge (object->mProperty_mEnumerationName, GALGAS_string ("uint").add_operation (var_representationBitCount_2541.getter_string (SOURCE_FILE ("type-enumeration-declaration.galgas", 67)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 67)).getter_nowhere (SOURCE_FILE ("type-enumeration-declaration.galgas", 67)) COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 67)) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_enumerationDeclarationAST_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_enumerationDeclarationAST.mSlotID,
                                               extensionMethod_enumerationDeclarationAST_enterInPrecedenceGraph) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_enumerationDeclarationAST_enterInPrecedenceGraph (defineExtensionMethod_enumerationDeclarationAST_enterInPrecedenceGraph, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                 Overriding extension getter '@enumerationDeclarationAST locationForErrorSignaling'                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_location extensionGetter_enumerationDeclarationAST_locationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                            C_Compiler * /* inCompiler */
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_outLocation ; // Returned variable
  const cPtr_enumerationDeclarationAST * object = (const cPtr_enumerationDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_enumerationDeclarationAST) ;
  result_outLocation = object->mProperty_mEnumerationName.getter_location (HERE) ;
//---
  return result_outLocation ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_enumerationDeclarationAST_locationForErrorSignaling (void) {
  enterExtensionGetter_locationForErrorSignaling (kTypeDescriptor_GALGAS_enumerationDeclarationAST.mSlotID,
                                                  extensionGetter_enumerationDeclarationAST_locationForErrorSignaling) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_enumerationDeclarationAST_locationForErrorSignaling (defineExtensionGetter_enumerationDeclarationAST_locationForErrorSignaling, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//             Overriding extension getter '@enumerationDeclarationAST keyRepresentationForErrorSignaling'             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string extensionGetter_enumerationDeclarationAST_keyRepresentationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  const cPtr_enumerationDeclarationAST * object = (const cPtr_enumerationDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_enumerationDeclarationAST) ;
  result_outRepresentation = GALGAS_string ("enum ").add_operation (object->mProperty_mEnumerationName.getter_string (SOURCE_FILE ("type-enumeration-declaration.galgas", 79)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 79)) ;
//---
  return result_outRepresentation ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_enumerationDeclarationAST_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_enumerationDeclarationAST.mSlotID,
                                                           extensionGetter_enumerationDeclarationAST_keyRepresentationForErrorSignaling) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_enumerationDeclarationAST_keyRepresentationForErrorSignaling (defineExtensionGetter_enumerationDeclarationAST_keyRepresentationForErrorSignaling, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                       Overriding extension method '@enumerationDeclarationAST enterInContext'                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_enumerationDeclarationAST_enterInContext (const cPtr_abstractDeclarationAST * inObject,
                                                                      const GALGAS_functionDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                                      GALGAS_semanticContext & ioArgument_ioContext,
                                                                      GALGAS_declarationDecorationList & /* ioArgument_ioDecoratedDeclarationList */,
                                                                      GALGAS_decoratedRegularRoutineList & /* ioArgument_ioDecoratedRoutineList */,
                                                                      GALGAS_routineListIR & ioArgument_ioRoutineListIR,
                                                                      GALGAS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                                      GALGAS_staticEntityMap & /* ioArgument_ioStaticEntityMap */,
                                                                      GALGAS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                                      GALGAS_userLLVMTypeDefinitionListIR & /* ioArgument_ioUserLLVMTypeDefinitionListIR */,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_enumerationDeclarationAST * object = (const cPtr_enumerationDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_enumerationDeclarationAST) ;
  GALGAS_classConstantMap var_enumConstantMap_4723 = GALGAS_classConstantMap::constructor_emptyMap (SOURCE_FILE ("type-enumeration-declaration.galgas", 107)) ;
  GALGAS_bigint var_maxValue_4747 = GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 108)) ;
  cEnumerator_enumerationConstantList enumerator_4788 (object->mProperty_mCaseNameList, kENUMERATION_UP) ;
  while (enumerator_4788.hasCurrentObject ()) {
    {
    var_enumConstantMap_4723.setter_insertKey (enumerator_4788.current_mConstantName (HERE), enumerator_4788.current_mConstantValue (HERE), object->mProperty_mEnumerationName, inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 110)) ;
    }
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GALGAS_bool (kIsStrictInf, var_maxValue_4747.objectCompare (enumerator_4788.current_mConstantValue (HERE))).boolEnum () ;
      if (kBoolTrue == test_0) {
        var_maxValue_4747 = enumerator_4788.current_mConstantValue (HERE) ;
      }
    }
    enumerator_4788.gotoNextObject () ;
  }
  GALGAS_uint var_representationBitCount_5004 = GALGAS_uint ((uint32_t) 0U) ;
  if (GALGAS_uint::constructor_max (SOURCE_FILE ("type-enumeration-declaration.galgas", 117)).isValid ()) {
    uint32_t variant_5015 = GALGAS_uint::constructor_max (SOURCE_FILE ("type-enumeration-declaration.galgas", 117)).uintValue () ;
    bool loop_5015 = true ;
    while (loop_5015) {
      loop_5015 = GALGAS_bool (kIsStrictSup, var_maxValue_4747.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 117)))).isValid () ;
      if (loop_5015) {
        loop_5015 = GALGAS_bool (kIsStrictSup, var_maxValue_4747.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 117)))).boolValue () ;
      }
      if (loop_5015 && (0 == variant_5015)) {
        loop_5015 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("type-enumeration-declaration.galgas", 117)) ;
      }
      if (loop_5015) {
        variant_5015 -- ;
        var_representationBitCount_5004.increment_operation (inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 118)) ;
        var_maxValue_4747 = var_maxValue_4747.divide_operation (GALGAS_bigint ("2", inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 119)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 119)) ;
      }
    }
  }
  GALGAS_routineMapCTXT var_routineMap_5199 = GALGAS_routineMapCTXT::constructor_emptyMap (SOURCE_FILE ("type-enumeration-declaration.galgas", 122)) ;
  GALGAS_propertyGetterMap var_propertyGetterMap_5243 = GALGAS_propertyGetterMap::constructor_emptyMap (SOURCE_FILE ("type-enumeration-declaration.galgas", 123)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_integerTypeProxy_5271 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.getter_mTypeMap (HERE), GALGAS_lstring::constructor_new (GALGAS_string ("uint").add_operation (var_representationBitCount_5004.getter_string (SOURCE_FILE ("type-enumeration-declaration.galgas", 126)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 126)), object->mProperty_mEnumerationName.getter_location (SOURCE_FILE ("type-enumeration-declaration.galgas", 126))  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 126)), inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 124)) ;
  GALGAS_lstring var_conversionToUIntN_5678 ;
  {
  extensionSetter_addPropertyGetter (var_propertyGetterMap_5243, object->mProperty_mEnumerationName.getter_string (SOURCE_FILE ("type-enumeration-declaration.galgas", 129)), GALGAS_lstring::constructor_new (GALGAS_string ("uint").add_operation (var_representationBitCount_5004.getter_string (SOURCE_FILE ("type-enumeration-declaration.galgas", 130)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 130)), object->mProperty_mEnumerationName.getter_location (SOURCE_FILE ("type-enumeration-declaration.galgas", 130))  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 130)), GALGAS_mode::constructor_anySafeMode (SOURCE_FILE ("type-enumeration-declaration.galgas", 131)), GALGAS_bool (true), var_integerTypeProxy_5271, var_conversionToUIntN_5678, inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 128)) ;
  }
  ioArgument_ioRoutineListIR.addAssign_operation (GALGAS_enumToUintRoutineIR::constructor_new (var_conversionToUIntN_5678, GALGAS_bool (false), GALGAS_bool (false), GALGAS_string ("i").add_operation (var_representationBitCount_5004.getter_string (SOURCE_FILE ("type-enumeration-declaration.galgas", 140)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 140))  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 136))  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 136)) ;
  {
  routine_enterEnumerationComparisonOperators (object->mProperty_mEnumerationName, ioArgument_ioContext, inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 143)) ;
  }
  GALGAS_stringset temp_1 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-enumeration-declaration.galgas", 153)) ;
  temp_1.addAssign_operation (object->mProperty_mEnumerationName.getter_string (SOURCE_FILE ("type-enumeration-declaration.galgas", 153))  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 153)) ;
  GALGAS_omnibusType var_enumerationType_6063 = GALGAS_omnibusType::constructor_new (var_propertyGetterMap_5243, GALGAS_propertySetterMap::constructor_emptyMap (SOURCE_FILE ("type-enumeration-declaration.galgas", 147)), var_routineMap_5199, var_enumConstantMap_4723, GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-enumeration-declaration.galgas", 150)), GALGAS_guardMapCTXT::constructor_emptyMap (SOURCE_FILE ("type-enumeration-declaration.galgas", 151)), GALGAS_subscript::constructor_noSubscript (SOURCE_FILE ("type-enumeration-declaration.galgas", 152)), temp_1, GALGAS_omnibusTypeAttributes::constructor_instanciable (SOURCE_FILE ("type-enumeration-declaration.galgas", 154)).operator_or (GALGAS_omnibusTypeAttributes::constructor_equatable (SOURCE_FILE ("type-enumeration-declaration.galgas", 154)) COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 154)).operator_or (GALGAS_omnibusTypeAttributes::constructor_copyable (SOURCE_FILE ("type-enumeration-declaration.galgas", 154)) COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 154)), object->mProperty_mEnumerationName.getter_string (SOURCE_FILE ("type-enumeration-declaration.galgas", 155)), GALGAS_typeKind::constructor_enumeration (var_representationBitCount_5004  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 156)), object->mProperty_mEnumerationName.getter_string (SOURCE_FILE ("type-enumeration-declaration.galgas", 157))  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 145)) ;
  {
  ioArgument_ioContext.mProperty_mTypeMap.setter_insertType (object->mProperty_mEnumerationName, var_enumerationType_6063, inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 159)) ;
  }
  ioArgument_ioRoutineListIR.addAssign_operation (GALGAS_basicIntegerAssignFunctionIR::constructor_new (function_assignmentPrefix (inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 165)).add_operation (object->mProperty_mEnumerationName.getter_string (SOURCE_FILE ("type-enumeration-declaration.galgas", 165)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 165)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 165)).add_operation (object->mProperty_mEnumerationName.getter_string (SOURCE_FILE ("type-enumeration-declaration.galgas", 165)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 165)).getter_nowhere (SOURCE_FILE ("type-enumeration-declaration.galgas", 165)), GALGAS_bool (false), GALGAS_bool (false), callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) var_enumerationType_6063.ptr (), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 168))  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 164))  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 164)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_enumerationDeclarationAST_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_enumerationDeclarationAST.mSlotID,
                                       extensionMethod_enumerationDeclarationAST_enterInContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_enumerationDeclarationAST_enterInContext (defineExtensionMethod_enumerationDeclarationAST_enterInContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                    Routine 'enterEnumerationComparisonOperators'                                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_enterEnumerationComparisonOperators (GALGAS_lstring inArgument_inTypeName,
                                                  GALGAS_semanticContext & ioArgument_ioContext,
                                                  C_Compiler * inCompiler
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring var_key_7149 = function_combineTypeNamesForInfixOperator (inArgument_inTypeName.getter_string (HERE), inArgument_inTypeName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 178)) ;
  GALGAS_omnibusType var_booleanType_7242 = extensionGetter_booleanType (ioArgument_ioContext, inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 179)) ;
  {
  ioArgument_ioContext.mProperty_mEqualOperatorMap.setter_insertKey (var_key_7149, var_booleanType_7242, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_eq (SOURCE_FILE ("type-enumeration-declaration.galgas", 183))  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 183)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 180)) ;
  }
  {
  ioArgument_ioContext.mProperty_mStrictInfOperatorMap.setter_insertKey (var_key_7149, var_booleanType_7242, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_ult (SOURCE_FILE ("type-enumeration-declaration.galgas", 193))  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 193)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 190)) ;
  }
  {
  ioArgument_ioContext.mProperty_mInfEqualOperatorMap.setter_insertKey (var_key_7149, var_booleanType_7242, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_ule (SOURCE_FILE ("type-enumeration-declaration.galgas", 198))  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 198)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 195)) ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                        Overriding extension method '@enumToUintRoutineIR llvmCodeGeneration'                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_enumToUintRoutineIR_llvmCodeGeneration (const cPtr_abstractRoutineIR * inObject,
                                                                    GALGAS_string & ioArgument_ioLLVMcode,
                                                                    const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                    GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_enumToUintRoutineIR * object = (const cPtr_enumToUintRoutineIR *) inObject ;
  macroValidSharedObject (object, cPtr_enumToUintRoutineIR) ;
  GALGAS_string var_routineLLVMName_8873 = function_llvmNameForFunction (object->mProperty_mRoutineMangledName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 227)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal ").add_operation (object->mProperty_mEnumerationLLVMTypeName, inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 228)).add_operation (GALGAS_string (" @"), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 228)).add_operation (var_routineLLVMName_8873, inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 228)), inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 228)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" (").add_operation (object->mProperty_mEnumerationLLVMTypeName, inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 229)).add_operation (GALGAS_string ("* %inValue) nounwind {\n"), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 229)), inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 229)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %r = load ").add_operation (object->mProperty_mEnumerationLLVMTypeName, inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 230)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 230)).add_operation (object->mProperty_mEnumerationLLVMTypeName, inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 230)).add_operation (GALGAS_string ("* %inValue\n"), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 230)), inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 230)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret ").add_operation (object->mProperty_mEnumerationLLVMTypeName, inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 231)).add_operation (GALGAS_string (" %r\n"), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 231)), inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 231)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 232)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_enumToUintRoutineIR_llvmCodeGeneration (void) {
  enterExtensionMethod_llvmCodeGeneration (kTypeDescriptor_GALGAS_enumToUintRoutineIR.mSlotID,
                                           extensionMethod_enumToUintRoutineIR_llvmCodeGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_enumToUintRoutineIR_llvmCodeGeneration (defineExtensionMethod_enumToUintRoutineIR_llvmCodeGeneration, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                    Overriding extension method '@structureDeclarationAST enterInPrecedenceGraph'                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_structureDeclarationAST_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                                            GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_structureDeclarationAST * object = (const cPtr_structureDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_structureDeclarationAST) ;
  {
  const GALGAS_structureDeclarationAST temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (object->mProperty_mReceiverTypeName, temp_0, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 320)) ;
  }
  cEnumerator_structurePropertyListAST enumerator_10432 (object->mProperty_mStructurePropertyListAST, kENUMERATION_UP) ;
  while (enumerator_10432.hasCurrentObject ()) {
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = GALGAS_bool (kIsNotEqual, enumerator_10432.current_mPropertyTypeName (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_1) {
        {
        ioArgument_ioGraph.setter_addEdge (object->mProperty_mReceiverTypeName, enumerator_10432.current_mPropertyTypeName (HERE) COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 324)) ;
        }
      }
    }
    switch (enumerator_10432.current_mPropertyKind (HERE).enumValue ()) {
    case GALGAS_propertyKindAST::kNotBuilt:
      break ;
    case GALGAS_propertyKindAST::kEnum_uninitializedStoredProperty:
    case GALGAS_propertyKindAST::kEnum_uninitializedConstantProperty:
      {
      }
      break ;
    case GALGAS_propertyKindAST::kEnum_initializedStoredProperty:
      {
        const cEnumAssociatedValues_propertyKindAST_initializedStoredProperty * extractPtr_10779 = (const cEnumAssociatedValues_propertyKindAST_initializedStoredProperty *) (enumerator_10432.current_mPropertyKind (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_initExpression = extractPtr_10779->mAssociatedValue0 ;
        callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) extractedValue_initExpression.ptr (), object->mProperty_mReceiverTypeName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 329)) ;
      }
      break ;
    case GALGAS_propertyKindAST::kEnum_initializedConstantProperty:
      {
        const cEnumAssociatedValues_propertyKindAST_initializedConstantProperty * extractPtr_10924 = (const cEnumAssociatedValues_propertyKindAST_initializedConstantProperty *) (enumerator_10432.current_mPropertyKind (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_initExpression = extractPtr_10924->mAssociatedValue0 ;
        callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) extractedValue_initExpression.ptr (), object->mProperty_mReceiverTypeName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 331)) ;
      }
      break ;
    case GALGAS_propertyKindAST::kEnum_readOnlyComputedProperty:
      {
        const cEnumAssociatedValues_propertyKindAST_readOnlyComputedProperty * extractPtr_11056 = (const cEnumAssociatedValues_propertyKindAST_readOnlyComputedProperty *) (enumerator_10432.current_mPropertyKind (HERE).unsafePointer ()) ;
        const GALGAS_instructionListAST extractedValue_instructionList = extractPtr_11056->mAssociatedValue0 ;
        extensionMethod_noteInstructionListTypesInPrecedenceGraph (extractedValue_instructionList, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 333)) ;
      }
      break ;
    case GALGAS_propertyKindAST::kEnum_writeComputedProperty:
      {
        const cEnumAssociatedValues_propertyKindAST_writeComputedProperty * extractPtr_11195 = (const cEnumAssociatedValues_propertyKindAST_writeComputedProperty *) (enumerator_10432.current_mPropertyKind (HERE).unsafePointer ()) ;
        const GALGAS_instructionListAST extractedValue_writeInstructionList = extractPtr_11195->mAssociatedValue0 ;
        extensionMethod_noteInstructionListTypesInPrecedenceGraph (extractedValue_writeInstructionList, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 335)) ;
      }
      break ;
    }
    enumerator_10432.gotoNextObject () ;
  }
  cEnumerator_functionDeclarationListAST enumerator_11278 (object->mProperty_mFunctionDeclarationListAST, kENUMERATION_UP) ;
  while (enumerator_11278.hasCurrentObject ()) {
    cEnumerator_routineFormalArgumentListAST enumerator_11351 (enumerator_11278.current_mFunctionFormalArgumentList (HERE), kENUMERATION_UP) ;
    while (enumerator_11351.hasCurrentObject ()) {
      {
      ioArgument_ioGraph.setter_noteNode (enumerator_11351.current_mFormalArgumentTypeName (HERE) COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 341)) ;
      }
      enumerator_11351.gotoNextObject () ;
    }
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = GALGAS_bool (kIsNotEqual, enumerator_11278.current_mFunctionReturnTypeName (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_2) {
        {
        ioArgument_ioGraph.setter_noteNode (enumerator_11278.current_mFunctionReturnTypeName (HERE) COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 344)) ;
        }
      }
    }
    extensionMethod_noteInstructionListTypesInPrecedenceGraph (enumerator_11278.current_mFunctionInstructionList (HERE), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 346)) ;
    enumerator_11278.gotoNextObject () ;
  }
  extensionMethod_noteTypesInPrecedenceGraph (object->mProperty_mSystemRoutineListAST, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 349)) ;
  extensionMethod_noteTypesInPrecedenceGraph (object->mProperty_mGuardListAST, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 350)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_structureDeclarationAST_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_structureDeclarationAST.mSlotID,
                                               extensionMethod_structureDeclarationAST_enterInPrecedenceGraph) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_structureDeclarationAST_enterInPrecedenceGraph (defineExtensionMethod_structureDeclarationAST_enterInPrecedenceGraph, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//              Overriding extension getter '@structureDeclarationAST keyRepresentationForErrorSignaling'              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string extensionGetter_structureDeclarationAST_keyRepresentationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                                 C_Compiler * /* inCompiler */
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  const cPtr_structureDeclarationAST * object = (const cPtr_structureDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_structureDeclarationAST) ;
  result_outRepresentation = object->mProperty_mReceiverTypeName.getter_string (SOURCE_FILE ("type-structure-declaration.galgas", 356)) ;
//---
  return result_outRepresentation ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_structureDeclarationAST_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_structureDeclarationAST.mSlotID,
                                                           extensionGetter_structureDeclarationAST_keyRepresentationForErrorSignaling) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_structureDeclarationAST_keyRepresentationForErrorSignaling (defineExtensionGetter_structureDeclarationAST_keyRepresentationForErrorSignaling, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                  Overriding extension getter '@structureDeclarationAST locationForErrorSignaling'                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_location extensionGetter_structureDeclarationAST_locationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                          C_Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_outLocation ; // Returned variable
  const cPtr_structureDeclarationAST * object = (const cPtr_structureDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_structureDeclarationAST) ;
  result_outLocation = object->mProperty_mReceiverTypeName.getter_location (HERE) ;
//---
  return result_outLocation ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_structureDeclarationAST_locationForErrorSignaling (void) {
  enterExtensionGetter_locationForErrorSignaling (kTypeDescriptor_GALGAS_structureDeclarationAST.mSlotID,
                                                  extensionGetter_structureDeclarationAST_locationForErrorSignaling) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_structureDeclarationAST_locationForErrorSignaling (defineExtensionGetter_structureDeclarationAST_locationForErrorSignaling, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                        Overriding extension method '@structureDeclarationAST enterInContext'                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_structureDeclarationAST_enterInContext (const cPtr_abstractDeclarationAST * inObject,
                                                                    const GALGAS_functionDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                                    GALGAS_semanticContext & ioArgument_ioContext,
                                                                    GALGAS_declarationDecorationList & ioArgument_ioDecoratedDeclarationList,
                                                                    GALGAS_decoratedRegularRoutineList & ioArgument_ioDecoratedRoutineList,
                                                                    GALGAS_routineListIR & ioArgument_ioRoutineListIR,
                                                                    GALGAS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                                    GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                    GALGAS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                                    GALGAS_userLLVMTypeDefinitionListIR & ioArgument_ioUserLLVMTypeDefinitionListIR,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_structureDeclarationAST * object = (const cPtr_structureDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_structureDeclarationAST) ;
  GALGAS_propertyList var_propertyList_13816 = GALGAS_propertyList::constructor_emptyList (SOURCE_FILE ("type-structure-declaration.galgas", 397)) ;
  GALGAS_propertyGetterMap var_propertyGetterMap_13860 = GALGAS_propertyGetterMap::constructor_emptyMap (SOURCE_FILE ("type-structure-declaration.galgas", 398)) ;
  GALGAS_propertySetterMap var_propertySetterMap_13904 = GALGAS_propertySetterMap::constructor_emptyMap (SOURCE_FILE ("type-structure-declaration.galgas", 399)) ;
  GALGAS_sortedOperandIRList var_sortedOperandIRList_13952 = GALGAS_sortedOperandIRList::constructor_emptySortedList (SOURCE_FILE ("type-structure-declaration.galgas", 400)) ;
  GALGAS_constructorSignature var_constructorSignature_14002 = GALGAS_constructorSignature::constructor_emptyList (SOURCE_FILE ("type-structure-declaration.galgas", 401)) ;
  GALGAS_string var_constructorKey_14032 = GALGAS_string ("(") ;
  GALGAS_bool var_canBeCopied_14056 = GALGAS_bool (true) ;
  cEnumerator_structurePropertyListAST enumerator_14107 (object->mProperty_mStructurePropertyListAST, kENUMERATION_UP) ;
  while (enumerator_14107.hasCurrentObject ()) {
    extensionMethod_enterPropertyInContext (enumerator_14107.current (HERE), ioArgument_ioContext, ioArgument_ioStaticEntityMap, object->mProperty_mReceiverTypeName, object->mProperty_mLLVMBaseTypeName.getter_string (SOURCE_FILE ("type-structure-declaration.galgas", 409)), ioArgument_ioDecoratedRoutineList, var_propertyList_13816, var_propertyGetterMap_13860, var_propertySetterMap_13904, var_sortedOperandIRList_13952, var_constructorSignature_14002, var_constructorKey_14032, var_canBeCopied_14056, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 405)) ;
    enumerator_14107.gotoNextObject () ;
  }
  var_constructorKey_14032.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 420)) ;
  GALGAS_constructorMap var_constructorMap_14639 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-structure-declaration.galgas", 422)) ;
  {
  var_constructorMap_14639.setter_insertKey (GALGAS_lstring::constructor_new (var_constructorKey_14032, object->mProperty_mReceiverTypeName.getter_location (HERE)  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 424)), var_constructorSignature_14002, GALGAS_constructorValue::constructor_structure (var_sortedOperandIRList_13952  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 426)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 423)) ;
  }
  GALGAS_omnibusTypeAttributes var_typeAttributes_14913 = GALGAS_omnibusTypeAttributes::constructor_instanciable (SOURCE_FILE ("type-structure-declaration.galgas", 429)) ;
  cEnumerator_lstringlist enumerator_15052 (object->mProperty_mAttributeListAST, kENUMERATION_UP) ;
  while (enumerator_15052.hasCurrentObject ()) {
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GALGAS_bool (kIsEqual, enumerator_15052.current_mValue (HERE).getter_string (HERE).objectCompare (function_copyableAttribute (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 432)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          test_1 = var_typeAttributes_14913.getter_copyable (SOURCE_FILE ("type-structure-declaration.galgas", 433)).boolEnum () ;
          if (kBoolTrue == test_1) {
            TC_Array <C_FixItDescription> fixItArray2 ;
            inCompiler->emitSemanticError (enumerator_15052.current_mValue (HERE).getter_location (SOURCE_FILE ("type-structure-declaration.galgas", 434)), GALGAS_string ("duplicated attribute"), fixItArray2  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 434)) ;
          }
        }
        if (kBoolFalse == test_1) {
          enumGalgasBool test_3 = kBoolTrue ;
          if (kBoolTrue == test_3) {
            test_3 = var_canBeCopied_14056.operator_not (SOURCE_FILE ("type-structure-declaration.galgas", 435)).boolEnum () ;
            if (kBoolTrue == test_3) {
              TC_Array <C_FixItDescription> fixItArray4 ;
              inCompiler->emitSemanticError (object->mProperty_mReceiverTypeName.getter_location (SOURCE_FILE ("type-structure-declaration.galgas", 436)), GALGAS_string ("this structure cannot be copied, one field is not copyable"), fixItArray4  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 436)) ;
            }
          }
        }
      }
    }
    if (kBoolFalse == test_0) {
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (enumerator_15052.current_mValue (HERE).getter_location (SOURCE_FILE ("type-structure-declaration.galgas", 439)), GALGAS_string ("only @copyable attribute is allowed here"), fixItArray5  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 439)) ;
    }
    enumerator_15052.gotoNextObject () ;
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    test_6 = object->mProperty_mGenerateAssignmentRoutine.operator_and (var_canBeCopied_14056 COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 442)).boolEnum () ;
    if (kBoolTrue == test_6) {
      var_typeAttributes_14913 = var_typeAttributes_14913.operator_or (GALGAS_omnibusTypeAttributes::constructor_copyable (SOURCE_FILE ("type-structure-declaration.galgas", 443)) COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 443)) ;
    }
  }
  GALGAS_routineMapCTXT var_routineMapCTXT_15613 = GALGAS_routineMapCTXT::constructor_emptyMap (SOURCE_FILE ("type-structure-declaration.galgas", 446)) ;
  extensionMethod_enterFunctionsInPropertyMap (object->mProperty_mFunctionDeclarationListAST, object->mProperty_mReceiverTypeName, object->mProperty_mLLVMBaseTypeName.getter_string (SOURCE_FILE ("type-structure-declaration.galgas", 449)), var_routineMapCTXT_15613, ioArgument_ioContext, ioArgument_ioDecoratedRoutineList, ioArgument_ioRoutineListIR, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 447)) ;
  extensionMethod_enterSystemRoutineInContext (object->mProperty_mSystemRoutineListAST, object->mProperty_mReceiverTypeName, object->mProperty_mLLVMBaseTypeName.getter_string (SOURCE_FILE ("type-structure-declaration.galgas", 458)), var_routineMapCTXT_15613, ioArgument_ioContext, ioArgument_ioDecoratedRoutineList, ioArgument_ioRoutineListIR, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 456)) ;
  GALGAS_guardMapCTXT var_guardMap_16309 = GALGAS_guardMapCTXT::constructor_emptyMap (SOURCE_FILE ("type-structure-declaration.galgas", 465)) ;
  extensionMethod_enterGuardsInContext (object->mProperty_mGuardListAST, object->mProperty_mReceiverTypeName, object->mProperty_mLLVMBaseTypeName.getter_string (SOURCE_FILE ("type-structure-declaration.galgas", 468)), ioArgument_ioContext, var_guardMap_16309, ioArgument_ioDecoratedDeclarationList, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 466)) ;
  GALGAS_stringset temp_7 ;
  const enumGalgasBool test_8 = object->mProperty_mGenerateAssignmentRoutine.operator_and (var_canBeCopied_14056 COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 482)).boolEnum () ;
  if (kBoolTrue == test_8) {
    GALGAS_stringset temp_9 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-structure-declaration.galgas", 482)) ;
    temp_9.addAssign_operation (object->mProperty_mLLVMBaseTypeName.getter_string (SOURCE_FILE ("type-structure-declaration.galgas", 482))  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 482)) ;
    temp_7 = temp_9 ;
  }else if (kBoolFalse == test_8) {
    temp_7 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-structure-declaration.galgas", 482)) ;
  }
  GALGAS_omnibusType var_structureType_16607 = GALGAS_omnibusType::constructor_new (var_propertyGetterMap_13860, var_propertySetterMap_13904, var_routineMapCTXT_15613, GALGAS_classConstantMap::constructor_emptyMap (SOURCE_FILE ("type-structure-declaration.galgas", 478)), var_constructorMap_14639, var_guardMap_16309, GALGAS_subscript::constructor_noSubscript (SOURCE_FILE ("type-structure-declaration.galgas", 481)), temp_7, var_typeAttributes_14913, object->mProperty_mOmnibusTypeSpecificName.getter_string (SOURCE_FILE ("type-structure-declaration.galgas", 484)), GALGAS_typeKind::constructor_structure (var_propertyList_13816  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 485)), object->mProperty_mLLVMBaseTypeName.getter_string (SOURCE_FILE ("type-structure-declaration.galgas", 486))  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 474)) ;
  {
  ioArgument_ioContext.mProperty_mTypeMap.setter_insertType (object->mProperty_mReceiverTypeName, var_structureType_16607, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 488)) ;
  }
  ioArgument_ioUserLLVMTypeDefinitionListIR.addAssign_operation (GALGAS_userLLVMSructureTypeDefinitionIR::constructor_new (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) var_structureType_16607.ptr (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 494)), var_propertyList_13816  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 493))  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 493)) ;
  enumGalgasBool test_10 = kBoolTrue ;
  if (kBoolTrue == test_10) {
    test_10 = object->mProperty_mGenerateAssignmentRoutine.operator_and (var_canBeCopied_14056 COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 498)).boolEnum () ;
    if (kBoolTrue == test_10) {
      ioArgument_ioRoutineListIR.addAssign_operation (GALGAS_structureTypeAssignFunctionIR::constructor_new (function_assignmentPrefix (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 500)).add_operation (object->mProperty_mOmnibusTypeSpecificName.getter_string (SOURCE_FILE ("type-structure-declaration.galgas", 500)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 500)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 500)).add_operation (object->mProperty_mOmnibusTypeSpecificName.getter_string (SOURCE_FILE ("type-structure-declaration.galgas", 500)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 500)).getter_nowhere (SOURCE_FILE ("type-structure-declaration.galgas", 500)), GALGAS_bool (false), GALGAS_bool (false), var_structureType_16607  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 499))  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 499)) ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_structureDeclarationAST_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_structureDeclarationAST.mSlotID,
                                       extensionMethod_structureDeclarationAST_enterInContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_structureDeclarationAST_enterInContext (defineExtensionMethod_structureDeclarationAST_enterInContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                  Overriding extension method '@userLLVMSructureTypeDefinitionIR generateLLVMType'                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_userLLVMSructureTypeDefinitionIR_generateLLVMType (const cPtr_userLLVMTypeDefinitionIR * inObject,
                                                                               GALGAS_string & ioArgument_ioLLVMcode,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_userLLVMSructureTypeDefinitionIR * object = (const cPtr_userLLVMSructureTypeDefinitionIR *) inObject ;
  macroValidSharedObject (object, cPtr_userLLVMSructureTypeDefinitionIR) ;
  ioArgument_ioLLVMcode.plusAssign_operation(object->mProperty_mLLVMDefinedTypeName.add_operation (GALGAS_string (" = type {"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 727)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 727)) ;
  cEnumerator_propertyList enumerator_26569 (object->mProperty_mPropertyList, kENUMERATION_UP) ;
  while (enumerator_26569.hasCurrentObject ()) {
    ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_26569.current_mType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 729)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 729)) ;
    if (enumerator_26569.hasNextObject ()) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 730)) ;
    }
    enumerator_26569.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 732)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_userLLVMSructureTypeDefinitionIR_generateLLVMType (void) {
  enterExtensionMethod_generateLLVMType (kTypeDescriptor_GALGAS_userLLVMSructureTypeDefinitionIR.mSlotID,
                                         extensionMethod_userLLVMSructureTypeDefinitionIR_generateLLVMType) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_userLLVMSructureTypeDefinitionIR_generateLLVMType (defineExtensionMethod_userLLVMSructureTypeDefinitionIR_generateLLVMType, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                   Overriding extension method '@structureTypeAssignFunctionIR llvmCodeGeneration'                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_structureTypeAssignFunctionIR_llvmCodeGeneration (const cPtr_abstractRoutineIR * inObject,
                                                                              GALGAS_string & ioArgument_ioLLVMcode,
                                                                              const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                              GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_structureTypeAssignFunctionIR * object = (const cPtr_structureTypeAssignFunctionIR *) inObject ;
  macroValidSharedObject (object, cPtr_structureTypeAssignFunctionIR) ;
  GALGAS_arcAssignmentList var_arcAssignmentList_27376 = callExtensionGetter_arcList ((const cPtr_omnibusType *) object->mProperty_mStructureType.ptr (), GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("type-structure-declaration.galgas", 750)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 750)) ;
  GALGAS_string var_structureTypeLLVMTypeName_27439 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) object->mProperty_mStructureType.ptr (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 751)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal void @").add_operation (object->mProperty_mRoutineMangledName.getter_string (HERE).getter_assemblerRepresentation (SOURCE_FILE ("type-structure-declaration.galgas", 752)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 752)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 752)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" (").add_operation (var_structureTypeLLVMTypeName_27439, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 753)).add_operation (GALGAS_string (" * %inTarget, "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 753)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 753)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_structureTypeLLVMTypeName_27439.add_operation (GALGAS_string ("* %inSource) nounwind optsize {\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 754)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 754)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--- Handle ARC properties\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 755)) ;
  cEnumerator_arcAssignmentList enumerator_27820 (var_arcAssignmentList_27376, kENUMERATION_UP) ;
  while (enumerator_27820.hasCurrentObject ()) {
    GALGAS_string var_propertyTypeLLVMName_27852 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_27820.current_mPropertyType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 757)) ;
    GALGAS_string var_llvmVarName_27902 = GALGAS_string ("%arc.retain.").add_operation (enumerator_27820.current_mPropertyName (HERE).getter_assemblerRepresentation (SOURCE_FILE ("type-structure-declaration.galgas", 758)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 758)).add_operation (ioArgument_ioGenerationAdds.getter_mUniqueIndex (HERE).getter_string (SOURCE_FILE ("type-structure-declaration.galgas", 758)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 758)) ;
    ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 759)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_llvmVarName_27902, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 760)).add_operation (GALGAS_string (" = getelementptr inbounds "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 760)).add_operation (var_structureTypeLLVMTypeName_27439, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 760)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 760)).add_operation (var_structureTypeLLVMTypeName_27439, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 760)).add_operation (GALGAS_string ("* %inSource, i32 0"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 760)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 760)) ;
    cEnumerator_uintlist enumerator_28210 (enumerator_27820.current_mPropertyIndexPath (HERE), kENUMERATION_UP) ;
    while (enumerator_28210.hasCurrentObject ()) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", i32 ").add_operation (enumerator_28210.current_mValue (HERE).getter_string (SOURCE_FILE ("type-structure-declaration.galgas", 762)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 762)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 762)) ;
      enumerator_28210.gotoNextObject () ;
    }
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ; ").add_operation (enumerator_27820.current_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 764)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 764)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 764)) ;
    GALGAS_string var_llvmLoadedVarName_28328 = var_llvmVarName_27902.add_operation (GALGAS_string (".loaded"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 765)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_llvmLoadedVarName_28328, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 766)).add_operation (GALGAS_string (" = load "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 766)).add_operation (var_propertyTypeLLVMName_27852, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 766)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 766)).add_operation (var_propertyTypeLLVMName_27852, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 766)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 766)).add_operation (var_llvmVarName_27902, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 766)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 766)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 766)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @arc.retain (").add_operation (var_propertyTypeLLVMName_27852, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 767)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 767)).add_operation (var_llvmLoadedVarName_28328, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 767)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 767)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 767)) ;
    enumerator_27820.gotoNextObject () ;
  }
  cEnumerator_arcAssignmentList enumerator_28667 (var_arcAssignmentList_27376, kENUMERATION_UP) ;
  while (enumerator_28667.hasCurrentObject ()) {
    GALGAS_string var_llvmVarName_28690 = GALGAS_string ("%arc.release.").add_operation (enumerator_28667.current_mPropertyName (HERE).getter_assemblerRepresentation (SOURCE_FILE ("type-structure-declaration.galgas", 770)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 770)).add_operation (ioArgument_ioGenerationAdds.getter_mUniqueIndex (HERE).getter_string (SOURCE_FILE ("type-structure-declaration.galgas", 770)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 770)) ;
    ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 771)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_llvmVarName_28690, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 772)).add_operation (GALGAS_string (" = getelementptr inbounds "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 772)).add_operation (var_structureTypeLLVMTypeName_27439, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 772)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 772)).add_operation (var_structureTypeLLVMTypeName_27439, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 772)).add_operation (GALGAS_string ("* %inTarget, i32 0"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 772)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 772)) ;
    cEnumerator_uintlist enumerator_28999 (enumerator_28667.current_mPropertyIndexPath (HERE), kENUMERATION_UP) ;
    while (enumerator_28999.hasCurrentObject ()) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", i32 ").add_operation (enumerator_28999.current_mValue (HERE).getter_string (SOURCE_FILE ("type-structure-declaration.galgas", 774)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 774)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 774)) ;
      enumerator_28999.gotoNextObject () ;
    }
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ; ").add_operation (enumerator_28667.current_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 776)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 776)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 776)) ;
    GALGAS_string var_propertyTypeLLVMName_29120 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_28667.current_mPropertyType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 777)) ;
    GALGAS_string var_llvmLoadedVarName_29176 = var_llvmVarName_28690.add_operation (GALGAS_string (".loaded"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 778)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_llvmLoadedVarName_29176, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 779)).add_operation (GALGAS_string (" = load "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 779)).add_operation (var_propertyTypeLLVMName_29120, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 779)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 779)).add_operation (var_propertyTypeLLVMName_29120, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 779)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 779)).add_operation (var_llvmVarName_28690, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 779)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 779)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 779)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @arc.release (").add_operation (var_propertyTypeLLVMName_29120, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 780)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 780)).add_operation (var_llvmLoadedVarName_29176, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 780)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 780)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 780)) ;
    enumerator_28667.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--- Compute type size\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 782)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %sizeAsPtr = getelementptr inbounds ").add_operation (var_structureTypeLLVMTypeName_27439, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 783)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 783)).add_operation (var_structureTypeLLVMTypeName_27439, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 783)).add_operation (GALGAS_string ("* null, i32 1\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 783)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 783)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %byteCount = ptrtoint ").add_operation (var_structureTypeLLVMTypeName_27439, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 784)).add_operation (GALGAS_string ("* %sizeAsPtr to i32\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 784)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 784)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %useLoadStore = icmp ule i32 %byteCount, 12\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 785)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 %useLoadStore, label %loadStore, label %copyBytesOrCopyWords\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 786)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--- Copy\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 787)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("loadStore:\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 788)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %v = load ").add_operation (var_structureTypeLLVMTypeName_27439, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 789)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 789)).add_operation (var_structureTypeLLVMTypeName_27439, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 789)).add_operation (GALGAS_string ("* %inSource\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 789)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 789)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store ").add_operation (var_structureTypeLLVMTypeName_27439, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 790)).add_operation (GALGAS_string (" %v, "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 790)).add_operation (var_structureTypeLLVMTypeName_27439, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 790)).add_operation (GALGAS_string ("* %inTarget\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 790)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 790)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %copy.end\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 791)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("copyBytesOrCopyWords:\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 792)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %byteCountAnd3 = and i32 %byteCount, 3\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 793)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %byteCountIsMutipleOf4 = icmp eq i32 %byteCountAnd3, 0\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 794)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 %byteCountIsMutipleOf4, label %testTarget, label %copyBytes\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 795)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("testTarget:\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 796)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %targetAsUnsigned = ptrtoint ").add_operation (var_structureTypeLLVMTypeName_27439, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 797)).add_operation (GALGAS_string ("* %inTarget to i32\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 797)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 797)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %targetAsUnsignedAnd3 = and i32 %targetAsUnsigned, 3\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 798)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %targetAsUnsignedIsMutipleOf4 = icmp eq i32%targetAsUnsignedAnd3, 0\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 799)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 %targetAsUnsignedIsMutipleOf4, label %testSource, label %copyBytes\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 800)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("testSource:\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 801)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %sourceAsUnsigned = ptrtoint ").add_operation (var_structureTypeLLVMTypeName_27439, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 802)).add_operation (GALGAS_string ("* %inSource to i32\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 802)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 802)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %sourceAsUnsignedAnd3 = and i32 %sourceAsUnsigned, 3\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 803)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %sourceAsUnsignedIsMutipleOf4 = icmp eq i32 %sourceAsUnsignedAnd3, 0\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 804)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 %targetAsUnsignedIsMutipleOf4, label %copyWords, label %copyBytes\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 805)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("copyWords:\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 806)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %target32 = bitcast ").add_operation (var_structureTypeLLVMTypeName_27439, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 807)).add_operation (GALGAS_string ("* %inTarget to i32*\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 807)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 807)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %source32 = bitcast ").add_operation (var_structureTypeLLVMTypeName_27439, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 808)).add_operation (GALGAS_string ("* %inSource to i32*\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 808)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 808)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %temp = add nsw nuw i32 %byteCount, 3\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 809)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %wordCount = udiv i32 %temp, 4\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 810)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %copyWords.loop\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 811)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("copyWords.loop:\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 812)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @copy.word.array (i32* %target32, i32* %source32, i32 %wordCount)\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 813)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %copy.end\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 814)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("copyBytes:\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 815)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %target8 = bitcast ").add_operation (var_structureTypeLLVMTypeName_27439, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 816)).add_operation (GALGAS_string ("* %inTarget to i8*\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 816)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 816)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %source8 = bitcast ").add_operation (var_structureTypeLLVMTypeName_27439, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 817)).add_operation (GALGAS_string ("* %inSource to i8*\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 817)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 817)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @copy.byte.array (i8* %target8, i8* %source8, i32 %byteCount)\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 818)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %copy.end\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 819)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("copy.end:\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 820)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 821)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 822)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_structureTypeAssignFunctionIR_llvmCodeGeneration (void) {
  enterExtensionMethod_llvmCodeGeneration (kTypeDescriptor_GALGAS_structureTypeAssignFunctionIR.mSlotID,
                                           extensionMethod_structureTypeAssignFunctionIR_llvmCodeGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_structureTypeAssignFunctionIR_llvmCodeGeneration (defineExtensionMethod_structureTypeAssignFunctionIR_llvmCodeGeneration, NULL) ;

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
  cEnumerator_structurePropertyListAST enumerator_2743 (object->mProperty_mStructurePropertyListAST, kENUMERATION_UP) ;
  while (enumerator_2743.hasCurrentObject ()) {
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = GALGAS_bool (kIsNotEqual, enumerator_2743.current_mPropertyTypeName (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_1) {
        {
        ioArgument_ioGraph.setter_addEdge (object->mProperty_mSyncToolName, enumerator_2743.current_mPropertyTypeName (HERE) COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 63)) ;
        }
      }
    }
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = enumerator_2743.current_mIsPublic (HERE).boolEnum () ;
      if (kBoolTrue == test_2) {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (enumerator_2743.current_mPropertyName (HERE).getter_location (SOURCE_FILE ("type-sync-declaration.galgas", 66)), GALGAS_string ("a sync tool property cannot be public (should be private)"), fixItArray3  COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 66)) ;
      }
    }
    switch (enumerator_2743.current_mPropertyKind (HERE).enumValue ()) {
    case GALGAS_propertyKindAST::kNotBuilt:
      break ;
    case GALGAS_propertyKindAST::kEnum_uninitializedStoredProperty:
    case GALGAS_propertyKindAST::kEnum_uninitializedConstantProperty:
      {
      }
      break ;
    case GALGAS_propertyKindAST::kEnum_initializedStoredProperty:
      {
        const cEnumAssociatedValues_propertyKindAST_initializedStoredProperty * extractPtr_3196 = (const cEnumAssociatedValues_propertyKindAST_initializedStoredProperty *) (enumerator_2743.current_mPropertyKind (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_initExpression = extractPtr_3196->mAssociatedValue0 ;
        callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) extractedValue_initExpression.ptr (), object->mProperty_mSyncToolName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 71)) ;
      }
      break ;
    case GALGAS_propertyKindAST::kEnum_initializedConstantProperty:
      {
        const cEnumAssociatedValues_propertyKindAST_initializedConstantProperty * extractPtr_3337 = (const cEnumAssociatedValues_propertyKindAST_initializedConstantProperty *) (enumerator_2743.current_mPropertyKind (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_initExpression = extractPtr_3337->mAssociatedValue0 ;
        callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) extractedValue_initExpression.ptr (), object->mProperty_mSyncToolName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 73)) ;
      }
      break ;
    case GALGAS_propertyKindAST::kEnum_readOnlyComputedProperty:
      {
        const cEnumAssociatedValues_propertyKindAST_readOnlyComputedProperty * extractPtr_3469 = (const cEnumAssociatedValues_propertyKindAST_readOnlyComputedProperty *) (enumerator_2743.current_mPropertyKind (HERE).unsafePointer ()) ;
        const GALGAS_instructionListAST extractedValue_instructionList = extractPtr_3469->mAssociatedValue0 ;
        extensionMethod_noteInstructionListTypesInPrecedenceGraph (extractedValue_instructionList, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 75)) ;
      }
      break ;
    case GALGAS_propertyKindAST::kEnum_writeComputedProperty:
      {
        const cEnumAssociatedValues_propertyKindAST_writeComputedProperty * extractPtr_3608 = (const cEnumAssociatedValues_propertyKindAST_writeComputedProperty *) (enumerator_2743.current_mPropertyKind (HERE).unsafePointer ()) ;
        const GALGAS_instructionListAST extractedValue_writeInstructionList = extractPtr_3608->mAssociatedValue0 ;
        extensionMethod_noteInstructionListTypesInPrecedenceGraph (extractedValue_writeInstructionList, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 77)) ;
      }
      break ;
    }
    enumerator_2743.gotoNextObject () ;
  }
  cEnumerator_functionDeclarationListAST enumerator_3691 (object->mProperty_mFunctionDeclarationListAST, kENUMERATION_UP) ;
  while (enumerator_3691.hasCurrentObject ()) {
    cEnumerator_routineFormalArgumentListAST enumerator_3764 (enumerator_3691.current_mFunctionFormalArgumentList (HERE), kENUMERATION_UP) ;
    while (enumerator_3764.hasCurrentObject ()) {
      {
      ioArgument_ioGraph.setter_noteNode (enumerator_3764.current_mFormalArgumentTypeName (HERE) COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 83)) ;
      }
      enumerator_3764.gotoNextObject () ;
    }
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = GALGAS_bool (kIsNotEqual, enumerator_3691.current_mFunctionReturnTypeName (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_4) {
        {
        ioArgument_ioGraph.setter_noteNode (enumerator_3691.current_mFunctionReturnTypeName (HERE) COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 86)) ;
        }
      }
    }
    extensionMethod_noteInstructionListTypesInPrecedenceGraph (enumerator_3691.current_mFunctionInstructionList (HERE), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 88)) ;
    enumerator_3691.gotoNextObject () ;
  }
  extensionMethod_noteTypesInPrecedenceGraph (object->mProperty_mSystemRoutineListAST, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 91)) ;
  extensionMethod_noteTypesInPrecedenceGraph (object->mProperty_mGuardListAST, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 92)) ;
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
  result_outRepresentation = GALGAS_string ("sync ").add_operation (object->mProperty_mSyncToolName.getter_string (SOURCE_FILE ("type-sync-declaration.galgas", 98)), inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 98)) ;
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
                                                               GALGAS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                               GALGAS_userLLVMTypeDefinitionListIR & ioArgument_ioUserLLVMTypeDefinitionListIR,
                                                               C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_syncDeclarationAST * object = (const cPtr_syncDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_syncDeclarationAST) ;
  GALGAS_propertyList var_propertyList_5816 = GALGAS_propertyList::constructor_emptyList (SOURCE_FILE ("type-sync-declaration.galgas", 123)) ;
  GALGAS_propertyGetterMap var_propertyGetterMap_5860 = GALGAS_propertyGetterMap::constructor_emptyMap (SOURCE_FILE ("type-sync-declaration.galgas", 124)) ;
  GALGAS_propertySetterMap var_propertySetterMap_5904 = GALGAS_propertySetterMap::constructor_emptyMap (SOURCE_FILE ("type-sync-declaration.galgas", 125)) ;
  GALGAS_sortedOperandIRList var_sortedOperandIRList_5952 = GALGAS_sortedOperandIRList::constructor_emptySortedList (SOURCE_FILE ("type-sync-declaration.galgas", 126)) ;
  GALGAS_constructorSignature var_constructorSignature_6002 = GALGAS_constructorSignature::constructor_emptyList (SOURCE_FILE ("type-sync-declaration.galgas", 127)) ;
  GALGAS_string var_constructorKey_6032 = GALGAS_string ("(") ;
  cEnumerator_structurePropertyListAST enumerator_6082 (object->mProperty_mStructurePropertyListAST, kENUMERATION_UP) ;
  while (enumerator_6082.hasCurrentObject ()) {
    GALGAS_bool joker_6468 = GALGAS_bool::constructor_default (SOURCE_FILE ("type-sync-declaration.galgas", 142)) ;
    extensionMethod_enterPropertyInContext (enumerator_6082.current (HERE), ioArgument_ioContext, ioArgument_ioStaticEntityMap, object->mProperty_mSyncToolName, object->mProperty_mSyncToolName.getter_string (SOURCE_FILE ("type-sync-declaration.galgas", 134)), ioArgument_ioDecoratedRoutineList, var_propertyList_5816, var_propertyGetterMap_5860, var_propertySetterMap_5904, var_sortedOperandIRList_5952, var_constructorSignature_6002, var_constructorKey_6032, joker_6468, inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 130)) ;
    enumerator_6082.gotoNextObject () ;
  }
  var_constructorKey_6032.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 145)) ;
  GALGAS_constructorMap var_constructorMap_6596 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-sync-declaration.galgas", 147)) ;
  {
  var_constructorMap_6596.setter_insertKey (GALGAS_lstring::constructor_new (var_constructorKey_6032, object->mProperty_mSyncToolName.getter_location (HERE)  COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 149)), var_constructorSignature_6002, GALGAS_constructorValue::constructor_structure (var_sortedOperandIRList_5952  COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 151)), inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 148)) ;
  }
  GALGAS_routineMapCTXT var_routineMapCTXT_6877 = GALGAS_routineMapCTXT::constructor_emptyMap (SOURCE_FILE ("type-sync-declaration.galgas", 154)) ;
  extensionMethod_enterFunctionsInPropertyMap (object->mProperty_mFunctionDeclarationListAST, object->mProperty_mSyncToolName, object->mProperty_mSyncToolName.getter_string (SOURCE_FILE ("type-sync-declaration.galgas", 157)), var_routineMapCTXT_6877, ioArgument_ioContext, ioArgument_ioDecoratedRoutineList, ioArgument_ioRoutineListIR, inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 155)) ;
  extensionMethod_enterSystemRoutineInContext (object->mProperty_mSystemRoutineListAST, object->mProperty_mSyncToolName, object->mProperty_mSyncToolName.getter_string (SOURCE_FILE ("type-sync-declaration.galgas", 166)), var_routineMapCTXT_6877, ioArgument_ioContext, ioArgument_ioDecoratedRoutineList, ioArgument_ioRoutineListIR, inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 164)) ;
  GALGAS_guardMapCTXT var_guardMap_7557 = GALGAS_guardMapCTXT::constructor_emptyMap (SOURCE_FILE ("type-sync-declaration.galgas", 173)) ;
  extensionMethod_enterGuardsInContext (object->mProperty_mGuardListAST, object->mProperty_mSyncToolName, object->mProperty_mSyncToolName.getter_string (SOURCE_FILE ("type-sync-declaration.galgas", 176)), ioArgument_ioContext, var_guardMap_7557, ioArgument_ioDecoratedDeclarationList, inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 174)) ;
  GALGAS_omnibusType var_structureType_7847 = GALGAS_omnibusType::constructor_new (var_propertyGetterMap_5860, var_propertySetterMap_5904, var_routineMapCTXT_6877, GALGAS_classConstantMap::constructor_emptyMap (SOURCE_FILE ("type-sync-declaration.galgas", 186)), var_constructorMap_6596, var_guardMap_7557, GALGAS_subscript::constructor_noSubscript (SOURCE_FILE ("type-sync-declaration.galgas", 189)), GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-sync-declaration.galgas", 190)), GALGAS_omnibusTypeAttributes::constructor_instanciable (SOURCE_FILE ("type-sync-declaration.galgas", 191)), object->mProperty_mSyncToolName.getter_string (SOURCE_FILE ("type-sync-declaration.galgas", 192)), GALGAS_typeKind::constructor_syncTool (SOURCE_FILE ("type-sync-declaration.galgas", 193)), object->mProperty_mSyncToolName.getter_string (SOURCE_FILE ("type-sync-declaration.galgas", 194))  COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 182)) ;
  {
  ioArgument_ioContext.mProperty_mTypeMap.setter_insertType (object->mProperty_mSyncToolName, var_structureType_7847, inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 196)) ;
  }
  ioArgument_ioUserLLVMTypeDefinitionListIR.addAssign_operation (GALGAS_userLLVMSructureTypeDefinitionIR::constructor_new (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) var_structureType_7847.ptr (), inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 202)), var_propertyList_5816  COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 201))  COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 201)) ;
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
  GALGAS_lstring var_integerTypeName_1432 = callExtensionGetter_typeName ((const cPtr_integerDeclarationAST *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 29)).getter_nowhere (SOURCE_FILE ("type-integer.galgas", 29)) ;
  {
  const GALGAS_integerDeclarationAST temp_1 = object ;
  ioArgument_ioGraph.setter_addNode (var_integerTypeName_1432, temp_1, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 30)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (var_integerTypeName_1432, function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 31)).getter_nowhere (SOURCE_FILE ("type-integer.galgas", 31)) COMMA_SOURCE_FILE ("type-integer.galgas", 31)) ;
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
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inIsUnsigned.boolEnum () ;
    if (kBoolTrue == test_0) {
      result_result = GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 46)) ;
    }
  }
  if (kBoolFalse == test_0) {
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
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inIsUnsigned.boolEnum () ;
    if (kBoolTrue == test_0) {
      result_result = GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 56)).left_shift_operation (constinArgument_inBitCount COMMA_SOURCE_FILE ("type-integer.galgas", 56)).substract_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 56)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 56)) ;
    }
  }
  if (kBoolFalse == test_0) {
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
                                                                  GALGAS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                                  GALGAS_userLLVMTypeDefinitionListIR & /* ioArgument_ioUserLLVMTypeDefinitionListIR */,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_integerDeclarationAST * object = (const cPtr_integerDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_integerDeclarationAST) ;
  const GALGAS_integerDeclarationAST temp_0 = object ;
  GALGAS_lstring var_integerTypeName_3797 = callExtensionGetter_typeName ((const cPtr_integerDeclarationAST *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 77)).getter_nowhere (SOURCE_FILE ("type-integer.galgas", 77)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_selfTypeProxy_3917 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioContext.mProperty_mTypeMap, var_integerTypeName_3797, var_selfTypeProxy_3917 COMMA_SOURCE_FILE ("type-integer.galgas", 78)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_boolTypeProxy_4028 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioContext.mProperty_mTypeMap, GALGAS_lstring::constructor_new (function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 79)), GALGAS_location::constructor_nowhere (SOURCE_FILE ("type-integer.galgas", 79))  COMMA_SOURCE_FILE ("type-integer.galgas", 79)), var_boolTypeProxy_4028 COMMA_SOURCE_FILE ("type-integer.galgas", 79)) ;
  }
  GALGAS_bigint var_min_4096 = function_minValueForInteger (object->mProperty_mIsSigned.operator_not (SOURCE_FILE ("type-integer.galgas", 81)), object->mProperty_mSize, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 81)) ;
  GALGAS_bigint var_max_4151 = function_maxValueForInteger (object->mProperty_mIsSigned.operator_not (SOURCE_FILE ("type-integer.galgas", 82)), object->mProperty_mSize, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 82)) ;
  GALGAS_string var_llvmTypeName_4269 = GALGAS_string ("i").add_operation (object->mProperty_mSize.getter_string (SOURCE_FILE ("type-integer.galgas", 84)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 84)) ;
  GALGAS_routineMapCTXT var_routineMap_4312 = GALGAS_routineMapCTXT::constructor_emptyMap (SOURCE_FILE ("type-integer.galgas", 85)) ;
  GALGAS_propertyGetterMap var_propertyGetterMap_4356 = GALGAS_propertyGetterMap::constructor_emptyMap (SOURCE_FILE ("type-integer.galgas", 86)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsEqual, object->mProperty_mSize.modulo_operation (GALGAS_uint ((uint32_t) 16U), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 88)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_lstring var_routineLLVMName_4697 ;
      {
      extensionSetter_addPropertyGetter (var_propertyGetterMap_4356, var_integerTypeName_3797.getter_string (SOURCE_FILE ("type-integer.galgas", 90)), GALGAS_string ("byteSwapped").getter_nowhere (SOURCE_FILE ("type-integer.galgas", 91)), GALGAS_mode::constructor_anySafeMode (SOURCE_FILE ("type-integer.galgas", 92)), GALGAS_bool (true), var_selfTypeProxy_3917, var_routineLLVMName_4697, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 89)) ;
      }
      ioArgument_ioRoutineListIR.addAssign_operation (GALGAS_integerBuiltinFunctionIR::constructor_new (var_routineLLVMName_4697, GALGAS_bool (false), GALGAS_bool (false), var_llvmTypeName_4269, GALGAS_string ("bswap")  COMMA_SOURCE_FILE ("type-integer.galgas", 97))  COMMA_SOURCE_FILE ("type-integer.galgas", 97)) ;
    }
  }
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    GALGAS_bool test_3 = GALGAS_bool (kIsEqual, object->mProperty_mSize.objectCompare (GALGAS_uint ((uint32_t) 1U))) ;
    if (kBoolTrue == test_3.boolEnum ()) {
      test_3 = object->mProperty_mIsSigned.operator_not (SOURCE_FILE ("type-integer.galgas", 106)) ;
    }
    test_2 = test_3.boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_lstring var_routineLLVMName_5261 ;
      {
      extensionSetter_addPropertyGetter (var_propertyGetterMap_4356, var_integerTypeName_3797.getter_string (SOURCE_FILE ("type-integer.galgas", 108)), function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 109)).getter_nowhere (SOURCE_FILE ("type-integer.galgas", 109)), GALGAS_mode::constructor_anySafeMode (SOURCE_FILE ("type-integer.galgas", 110)), GALGAS_bool (true), var_boolTypeProxy_4028, var_routineLLVMName_5261, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 107)) ;
      }
      ioArgument_ioRoutineListIR.addAssign_operation (GALGAS_uint_31_ToBoolFunctionIR::constructor_new (var_routineLLVMName_5261, GALGAS_bool (false), GALGAS_bool (false), var_llvmTypeName_4269  COMMA_SOURCE_FILE ("type-integer.galgas", 115))  COMMA_SOURCE_FILE ("type-integer.galgas", 115)) ;
    }
  }
  GALGAS_lstring var_routineLLVMName_5717 ;
  {
  extensionSetter_addPropertyGetter (var_propertyGetterMap_4356, var_integerTypeName_3797.getter_string (SOURCE_FILE ("type-integer.galgas", 124)), GALGAS_string ("bitReversed").getter_nowhere (SOURCE_FILE ("type-integer.galgas", 125)), GALGAS_mode::constructor_anySafeMode (SOURCE_FILE ("type-integer.galgas", 126)), GALGAS_bool (true), var_selfTypeProxy_3917, var_routineLLVMName_5717, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 123)) ;
  }
  ioArgument_ioRoutineListIR.addAssign_operation (GALGAS_integerBuiltinFunctionIR::constructor_new (var_routineLLVMName_5717, GALGAS_bool (false), GALGAS_bool (false), var_llvmTypeName_4269, GALGAS_string ("bitreverse")  COMMA_SOURCE_FILE ("type-integer.galgas", 131))  COMMA_SOURCE_FILE ("type-integer.galgas", 131)) ;
  {
  extensionSetter_addPropertyGetter (var_propertyGetterMap_4356, var_integerTypeName_3797.getter_string (SOURCE_FILE ("type-integer.galgas", 140)), GALGAS_string ("leadingZeroCount").getter_nowhere (SOURCE_FILE ("type-integer.galgas", 141)), GALGAS_mode::constructor_anySafeMode (SOURCE_FILE ("type-integer.galgas", 142)), GALGAS_bool (true), var_selfTypeProxy_3917, var_routineLLVMName_5717, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 139)) ;
  }
  ioArgument_ioRoutineListIR.addAssign_operation (GALGAS_integerBuiltinFunctionIR::constructor_new (var_routineLLVMName_5717, GALGAS_bool (false), GALGAS_bool (false), var_llvmTypeName_4269, GALGAS_string ("ctlz")  COMMA_SOURCE_FILE ("type-integer.galgas", 147))  COMMA_SOURCE_FILE ("type-integer.galgas", 147)) ;
  {
  extensionSetter_addPropertyGetter (var_propertyGetterMap_4356, var_integerTypeName_3797.getter_string (SOURCE_FILE ("type-integer.galgas", 156)), GALGAS_string ("trainingZeroCount").getter_nowhere (SOURCE_FILE ("type-integer.galgas", 157)), GALGAS_mode::constructor_anySafeMode (SOURCE_FILE ("type-integer.galgas", 158)), GALGAS_bool (true), var_selfTypeProxy_3917, var_routineLLVMName_5717, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 155)) ;
  }
  ioArgument_ioRoutineListIR.addAssign_operation (GALGAS_integerBuiltinFunctionIR::constructor_new (var_routineLLVMName_5717, GALGAS_bool (false), GALGAS_bool (false), var_llvmTypeName_4269, GALGAS_string ("cttz")  COMMA_SOURCE_FILE ("type-integer.galgas", 163))  COMMA_SOURCE_FILE ("type-integer.galgas", 163)) ;
  {
  extensionSetter_addPropertyGetter (var_propertyGetterMap_4356, var_integerTypeName_3797.getter_string (SOURCE_FILE ("type-integer.galgas", 172)), GALGAS_string ("setBitCount").getter_nowhere (SOURCE_FILE ("type-integer.galgas", 173)), GALGAS_mode::constructor_anySafeMode (SOURCE_FILE ("type-integer.galgas", 174)), GALGAS_bool (true), var_selfTypeProxy_3917, var_routineLLVMName_5717, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 171)) ;
  }
  ioArgument_ioRoutineListIR.addAssign_operation (GALGAS_integerBuiltinFunctionIR::constructor_new (var_routineLLVMName_5717, GALGAS_bool (false), GALGAS_bool (false), var_llvmTypeName_4269, GALGAS_string ("ctpop")  COMMA_SOURCE_FILE ("type-integer.galgas", 179))  COMMA_SOURCE_FILE ("type-integer.galgas", 179)) ;
  GALGAS_classConstantMap var_classConstantMap_7357 = GALGAS_classConstantMap::constructor_emptyMap (SOURCE_FILE ("type-integer.galgas", 187)) ;
  {
  var_classConstantMap_7357.setter_insertKey (GALGAS_string ("min").getter_nowhere (SOURCE_FILE ("type-integer.galgas", 188)), var_min_4096, var_integerTypeName_3797, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 188)) ;
  }
  {
  var_classConstantMap_7357.setter_insertKey (GALGAS_string ("max").getter_nowhere (SOURCE_FILE ("type-integer.galgas", 189)), var_max_4151, var_integerTypeName_3797, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 189)) ;
  }
  GALGAS_constructorMap var_constructorMap_7596 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-integer.galgas", 191)) ;
  {
  var_constructorMap_7596.setter_insertKey (GALGAS_string ("()").getter_nowhere (SOURCE_FILE ("type-integer.galgas", 192)), GALGAS_constructorSignature::constructor_emptyList (SOURCE_FILE ("type-integer.galgas", 192)), GALGAS_constructorValue::constructor_simple (GALGAS_uint ((uint32_t) 0U).getter_bigint (SOURCE_FILE ("type-integer.galgas", 192))  COMMA_SOURCE_FILE ("type-integer.galgas", 192)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 192)) ;
  }
  GALGAS_stringset temp_4 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-integer.galgas", 202)) ;
  temp_4.addAssign_operation (var_integerTypeName_3797.getter_string (SOURCE_FILE ("type-integer.galgas", 202))  COMMA_SOURCE_FILE ("type-integer.galgas", 202)) ;
  GALGAS_omnibusType var_integerType_7750 = GALGAS_omnibusType::constructor_new (var_propertyGetterMap_4356, GALGAS_propertySetterMap::constructor_emptyMap (SOURCE_FILE ("type-integer.galgas", 196)), var_routineMap_4312, var_classConstantMap_7357, var_constructorMap_7596, GALGAS_guardMapCTXT::constructor_emptyMap (SOURCE_FILE ("type-integer.galgas", 200)), GALGAS_subscript::constructor_noSubscript (SOURCE_FILE ("type-integer.galgas", 201)), temp_4, GALGAS_omnibusTypeAttributes::constructor_instanciable (SOURCE_FILE ("type-integer.galgas", 203)).operator_or (GALGAS_omnibusTypeAttributes::constructor_equatable (SOURCE_FILE ("type-integer.galgas", 203)) COMMA_SOURCE_FILE ("type-integer.galgas", 203)).operator_or (GALGAS_omnibusTypeAttributes::constructor_copyable (SOURCE_FILE ("type-integer.galgas", 203)) COMMA_SOURCE_FILE ("type-integer.galgas", 203)).operator_or (GALGAS_omnibusTypeAttributes::constructor_comparable (SOURCE_FILE ("type-integer.galgas", 203)) COMMA_SOURCE_FILE ("type-integer.galgas", 203)), var_integerTypeName_3797.getter_string (SOURCE_FILE ("type-integer.galgas", 204)), GALGAS_typeKind::constructor_integer (var_min_4096, var_max_4151, object->mProperty_mIsSigned.operator_not (SOURCE_FILE ("type-integer.galgas", 205)), object->mProperty_mSize  COMMA_SOURCE_FILE ("type-integer.galgas", 205)), var_integerTypeName_3797.getter_string (SOURCE_FILE ("type-integer.galgas", 206))  COMMA_SOURCE_FILE ("type-integer.galgas", 194)) ;
  {
  ioArgument_ioContext.mProperty_mTypeMap.setter_insertType (var_integerTypeName_3797, var_integerType_7750, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 208)) ;
  }
  {
  routine_enter_5F_integer_5F_integer_5F_operators (var_integerTypeName_3797, object->mProperty_mIsSigned, ioArgument_ioContext, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 213)) ;
  }
  {
  routine_enter_5F_integer_5F_literal_5F_operators (var_integerTypeName_3797, object->mProperty_mIsSigned, ioArgument_ioContext, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 219)) ;
  }
  {
  routine_enter_5F_literal_5F_integer_5F_operators (var_integerTypeName_3797, object->mProperty_mIsSigned, ioArgument_ioContext, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 225)) ;
  }
  ioArgument_ioRoutineListIR.addAssign_operation (GALGAS_integerTypeAssignFunctionIR::constructor_new (function_assignmentPrefix (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 232)).add_operation (var_integerTypeName_3797.getter_string (SOURCE_FILE ("type-integer.galgas", 232)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 232)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 232)).add_operation (var_integerTypeName_3797.getter_string (SOURCE_FILE ("type-integer.galgas", 232)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 232)).getter_nowhere (SOURCE_FILE ("type-integer.galgas", 232)), GALGAS_bool (false), GALGAS_bool (false), var_llvmTypeName_4269  COMMA_SOURCE_FILE ("type-integer.galgas", 231))  COMMA_SOURCE_FILE ("type-integer.galgas", 231)) ;
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
  GALGAS_omnibusType var_selfType_9685 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.getter_mTypeMap (HERE), constinArgument_inIntegerTypeName, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 248)).getter_type (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 248)) ;
  GALGAS_omnibusType var_booleanType_9785 = extensionGetter_booleanType (ioArgument_ioContext, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 249)) ;
  GALGAS_lstring var_intIntOp_9857 = function_combineTypeNamesForInfixOperator (constinArgument_inIntegerTypeName.getter_string (SOURCE_FILE ("type-integer.galgas", 251)), constinArgument_inIntegerTypeName.getter_string (SOURCE_FILE ("type-integer.galgas", 251)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 251)) ;
  {
  ioArgument_ioContext.mProperty_mEqualOperatorMap.setter_insertKey (var_intIntOp_9857, var_booleanType_9785, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_eq (SOURCE_FILE ("type-integer.galgas", 255))  COMMA_SOURCE_FILE ("type-integer.galgas", 255)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 252)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_0 ;
  const enumGalgasBool test_1 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_slt (SOURCE_FILE ("type-integer.galgas", 260)) ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_ult (SOURCE_FILE ("type-integer.galgas", 260)) ;
  }
  ioArgument_ioContext.mProperty_mStrictInfOperatorMap.setter_insertKey (var_intIntOp_9857, var_booleanType_9785, GALGAS_infixObjectObjectOperatorDescription::constructor_new (temp_0  COMMA_SOURCE_FILE ("type-integer.galgas", 260)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 257)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_2 ;
  const enumGalgasBool test_3 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_3) {
    temp_2 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_sle (SOURCE_FILE ("type-integer.galgas", 265)) ;
  }else if (kBoolFalse == test_3) {
    temp_2 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_ule (SOURCE_FILE ("type-integer.galgas", 265)) ;
  }
  ioArgument_ioContext.mProperty_mInfEqualOperatorMap.setter_insertKey (var_intIntOp_9857, var_booleanType_9785, GALGAS_infixObjectObjectOperatorDescription::constructor_new (temp_2  COMMA_SOURCE_FILE ("type-integer.galgas", 265)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 262)) ;
  }
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = constinArgument_inIsSigned.operator_not (SOURCE_FILE ("type-integer.galgas", 268)).boolEnum () ;
    if (kBoolTrue == test_4) {
      {
      ioArgument_ioContext.mProperty_mAndOperatorMap.setter_insertKey (var_intIntOp_9857, var_selfType_9685, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_and (SOURCE_FILE ("type-integer.galgas", 272))  COMMA_SOURCE_FILE ("type-integer.galgas", 272)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 269)) ;
      }
      {
      ioArgument_ioContext.mProperty_mOrOperatorMap.setter_insertKey (var_intIntOp_9857, var_selfType_9685, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_ior (SOURCE_FILE ("type-integer.galgas", 277))  COMMA_SOURCE_FILE ("type-integer.galgas", 277)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 274)) ;
      }
      {
      ioArgument_ioContext.mProperty_mXorOperatorMap.setter_insertKey (var_intIntOp_9857, var_selfType_9685, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_xor (SOURCE_FILE ("type-integer.galgas", 282))  COMMA_SOURCE_FILE ("type-integer.galgas", 282)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 279)) ;
      }
      {
      ioArgument_ioContext.mProperty_mUnsignedComplementOperatorMap.setter_insertKey (constinArgument_inIntegerTypeName, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 284)) ;
      }
    }
  }
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    test_5 = constinArgument_inIsSigned.boolEnum () ;
    if (kBoolTrue == test_5) {
      {
      ioArgument_ioContext.mProperty_mUnaryMinusOperatorMap.setter_insertKey (constinArgument_inIntegerTypeName, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 290)) ;
      }
    }
  }
  {
  GALGAS_llvmBinaryOperation temp_6 ;
  const enumGalgasBool test_7 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_7) {
    temp_6 = GALGAS_llvmBinaryOperation::constructor_saddOVF (SOURCE_FILE ("type-integer.galgas", 298)) ;
  }else if (kBoolFalse == test_7) {
    temp_6 = GALGAS_llvmBinaryOperation::constructor_uaddOVF (SOURCE_FILE ("type-integer.galgas", 298)) ;
  }
  ioArgument_ioContext.mProperty_mAddOperatorMap.setter_insertKey (var_intIntOp_9857, var_selfType_9685, GALGAS_infixObjectObjectOperatorDescription::constructor_new (temp_6  COMMA_SOURCE_FILE ("type-integer.galgas", 298)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 295)) ;
  }
  {
  ioArgument_ioContext.mProperty_mAddNoOvfOperatorMap.setter_insertKey (var_intIntOp_9857, var_selfType_9685, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_addNoOVF (SOURCE_FILE ("type-integer.galgas", 303))  COMMA_SOURCE_FILE ("type-integer.galgas", 303)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 300)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_8 ;
  const enumGalgasBool test_9 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_9) {
    temp_8 = GALGAS_llvmBinaryOperation::constructor_ssubOVF (SOURCE_FILE ("type-integer.galgas", 308)) ;
  }else if (kBoolFalse == test_9) {
    temp_8 = GALGAS_llvmBinaryOperation::constructor_usubOVF (SOURCE_FILE ("type-integer.galgas", 308)) ;
  }
  ioArgument_ioContext.mProperty_mSubOperatorMap.setter_insertKey (var_intIntOp_9857, var_selfType_9685, GALGAS_infixObjectObjectOperatorDescription::constructor_new (temp_8  COMMA_SOURCE_FILE ("type-integer.galgas", 308)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 305)) ;
  }
  {
  ioArgument_ioContext.mProperty_mSubNoOvfOperatorMap.setter_insertKey (var_intIntOp_9857, var_selfType_9685, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_subNoOVF (SOURCE_FILE ("type-integer.galgas", 313))  COMMA_SOURCE_FILE ("type-integer.galgas", 313)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 310)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_10 ;
  const enumGalgasBool test_11 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_11) {
    temp_10 = GALGAS_llvmBinaryOperation::constructor_smulOVF (SOURCE_FILE ("type-integer.galgas", 318)) ;
  }else if (kBoolFalse == test_11) {
    temp_10 = GALGAS_llvmBinaryOperation::constructor_umulOVF (SOURCE_FILE ("type-integer.galgas", 318)) ;
  }
  ioArgument_ioContext.mProperty_mMulOperatorMap.setter_insertKey (var_intIntOp_9857, var_selfType_9685, GALGAS_infixObjectObjectOperatorDescription::constructor_new (temp_10  COMMA_SOURCE_FILE ("type-integer.galgas", 318)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 315)) ;
  }
  {
  ioArgument_ioContext.mProperty_mMulNoOvfOperatorMap.setter_insertKey (var_intIntOp_9857, var_selfType_9685, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_mulNoOVF (SOURCE_FILE ("type-integer.galgas", 323))  COMMA_SOURCE_FILE ("type-integer.galgas", 323)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 320)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_12 ;
  const enumGalgasBool test_13 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_13) {
    temp_12 = GALGAS_llvmBinaryOperation::constructor_sdivOVF (SOURCE_FILE ("type-integer.galgas", 328)) ;
  }else if (kBoolFalse == test_13) {
    temp_12 = GALGAS_llvmBinaryOperation::constructor_udivOVF (SOURCE_FILE ("type-integer.galgas", 328)) ;
  }
  ioArgument_ioContext.mProperty_mDivOperatorMap.setter_insertKey (var_intIntOp_9857, var_selfType_9685, GALGAS_infixObjectObjectOperatorDescription::constructor_new (temp_12  COMMA_SOURCE_FILE ("type-integer.galgas", 328)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 325)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_14 ;
  const enumGalgasBool test_15 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_15) {
    temp_14 = GALGAS_llvmBinaryOperation::constructor_sdivNoOVF (SOURCE_FILE ("type-integer.galgas", 333)) ;
  }else if (kBoolFalse == test_15) {
    temp_14 = GALGAS_llvmBinaryOperation::constructor_udivNoOVF (SOURCE_FILE ("type-integer.galgas", 333)) ;
  }
  ioArgument_ioContext.mProperty_mDivNoOvfOperatorMap.setter_insertKey (var_intIntOp_9857, var_selfType_9685, GALGAS_infixObjectObjectOperatorDescription::constructor_new (temp_14  COMMA_SOURCE_FILE ("type-integer.galgas", 333)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 330)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_16 ;
  const enumGalgasBool test_17 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_17) {
    temp_16 = GALGAS_llvmBinaryOperation::constructor_sremOVF (SOURCE_FILE ("type-integer.galgas", 338)) ;
  }else if (kBoolFalse == test_17) {
    temp_16 = GALGAS_llvmBinaryOperation::constructor_uremOVF (SOURCE_FILE ("type-integer.galgas", 338)) ;
  }
  ioArgument_ioContext.mProperty_mModOperatorMap.setter_insertKey (var_intIntOp_9857, var_selfType_9685, GALGAS_infixObjectObjectOperatorDescription::constructor_new (temp_16  COMMA_SOURCE_FILE ("type-integer.galgas", 338)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 335)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_18 ;
  const enumGalgasBool test_19 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_19) {
    temp_18 = GALGAS_llvmBinaryOperation::constructor_sremNoOVF (SOURCE_FILE ("type-integer.galgas", 343)) ;
  }else if (kBoolFalse == test_19) {
    temp_18 = GALGAS_llvmBinaryOperation::constructor_uremNoOVF (SOURCE_FILE ("type-integer.galgas", 343)) ;
  }
  ioArgument_ioContext.mProperty_mModNoOvfOperatorMap.setter_insertKey (var_intIntOp_9857, var_selfType_9685, GALGAS_infixObjectObjectOperatorDescription::constructor_new (temp_18  COMMA_SOURCE_FILE ("type-integer.galgas", 343)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 340)) ;
  }
  {
  ioArgument_ioContext.mProperty_mLeftShiftOperatorMap.setter_insertKey (var_intIntOp_9857, var_selfType_9685, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_shl (SOURCE_FILE ("type-integer.galgas", 349))  COMMA_SOURCE_FILE ("type-integer.galgas", 349)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 346)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_20 ;
  const enumGalgasBool test_21 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_21) {
    temp_20 = GALGAS_llvmBinaryOperation::constructor_ashr (SOURCE_FILE ("type-integer.galgas", 354)) ;
  }else if (kBoolFalse == test_21) {
    temp_20 = GALGAS_llvmBinaryOperation::constructor_lshr (SOURCE_FILE ("type-integer.galgas", 354)) ;
  }
  ioArgument_ioContext.mProperty_mRightShiftOperatorMap.setter_insertKey (var_intIntOp_9857, var_selfType_9685, GALGAS_infixObjectObjectOperatorDescription::constructor_new (temp_20  COMMA_SOURCE_FILE ("type-integer.galgas", 354)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 351)) ;
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
                                                                                            const GALGAS_omnibusType constinArgument_inResultType,
                                                                                            GALGAS_objectIR & outArgument_outResult,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_infixObjectObjectOperatorDescription * object = (const cPtr_infixObjectObjectOperatorDescription *) inObject ;
  macroValidSharedObject (object, cPtr_infixObjectObjectOperatorDescription) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    GALGAS_bool test_1 = constinArgument_inLeftOperand.getter_isLiteralInteger (SOURCE_FILE ("type-integer.galgas", 374)) ;
    if (kBoolTrue == test_1.boolEnum ()) {
      test_1 = constinArgument_inRightOperand.getter_isLiteralInteger (SOURCE_FILE ("type-integer.galgas", 374)) ;
    }
    test_0 = test_1.boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_bigint var_left_13926 ;
      GALGAS_omnibusType joker_13900_1 ; // Joker input parameter
      constinArgument_inLeftOperand.method_literalInteger (joker_13900_1, var_left_13926, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 375)) ;
      GALGAS_bigint var_right_13991 ;
      GALGAS_omnibusType joker_13964_1 ; // Joker input parameter
      constinArgument_inRightOperand.method_literalInteger (joker_13964_1, var_right_13991, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 376)) ;
      const GALGAS_infixObjectObjectOperatorDescription temp_2 = object ;
      GALGAS_bigint var_resultValue_14012 = callExtensionGetter_performStaticOperation ((const cPtr_infixObjectObjectOperatorDescription *) temp_2.ptr (), var_left_13926, var_right_13991, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 377)) ;
      outArgument_outResult = GALGAS_objectIR::constructor_literalInteger (constinArgument_inResultType, var_resultValue_14012  COMMA_SOURCE_FILE ("type-integer.galgas", 378)) ;
    }
  }
  if (kBoolFalse == test_0) {
    {
    routine_getNewTempValue (constinArgument_inResultType, ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 380)) ;
    }
    {
    extensionSetter_appendBinaryOperation (ioArgument_ioInstructionGenerationList, outArgument_outResult, extensionGetter_type (constinArgument_inLeftOperand, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 384)), constinArgument_inOperatorLocation, constinArgument_inLeftOperand, object->mProperty_mOperator, constinArgument_inRightOperand, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 382)) ;
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
  GALGAS_omnibusType var_selfType_14957 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.getter_mTypeMap (HERE), constinArgument_inIntegerTypeName, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 403)).getter_type (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 403)) ;
  GALGAS_omnibusType var_booleanType_15057 = extensionGetter_booleanType (ioArgument_ioContext, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 404)) ;
  GALGAS_lstring var_intLiteralOp_15133 = function_combineTypeNamesForInfixOperator (constinArgument_inIntegerTypeName.getter_string (HERE), function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 406)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 406)) ;
  {
  ioArgument_ioContext.mProperty_mEqualOperatorMap.setter_insertKey (var_intLiteralOp_15133, var_booleanType_15057, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_eq (SOURCE_FILE ("type-integer.galgas", 410))  COMMA_SOURCE_FILE ("type-integer.galgas", 410)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 407)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_0 ;
  const enumGalgasBool test_1 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_slt (SOURCE_FILE ("type-integer.galgas", 415)) ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_ult (SOURCE_FILE ("type-integer.galgas", 415)) ;
  }
  ioArgument_ioContext.mProperty_mStrictInfOperatorMap.setter_insertKey (var_intLiteralOp_15133, var_booleanType_15057, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (temp_0  COMMA_SOURCE_FILE ("type-integer.galgas", 415)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 412)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_2 ;
  const enumGalgasBool test_3 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_3) {
    temp_2 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_sle (SOURCE_FILE ("type-integer.galgas", 420)) ;
  }else if (kBoolFalse == test_3) {
    temp_2 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_ule (SOURCE_FILE ("type-integer.galgas", 420)) ;
  }
  ioArgument_ioContext.mProperty_mInfEqualOperatorMap.setter_insertKey (var_intLiteralOp_15133, var_booleanType_15057, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (temp_2  COMMA_SOURCE_FILE ("type-integer.galgas", 420)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 417)) ;
  }
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = constinArgument_inIsSigned.operator_not (SOURCE_FILE ("type-integer.galgas", 423)).boolEnum () ;
    if (kBoolTrue == test_4) {
      {
      ioArgument_ioContext.mProperty_mAndOperatorMap.setter_insertKey (var_intLiteralOp_15133, var_selfType_14957, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_and (SOURCE_FILE ("type-integer.galgas", 427))  COMMA_SOURCE_FILE ("type-integer.galgas", 427)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 424)) ;
      }
      {
      ioArgument_ioContext.mProperty_mOrOperatorMap.setter_insertKey (var_intLiteralOp_15133, var_selfType_14957, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_ior (SOURCE_FILE ("type-integer.galgas", 432))  COMMA_SOURCE_FILE ("type-integer.galgas", 432)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 429)) ;
      }
      {
      ioArgument_ioContext.mProperty_mXorOperatorMap.setter_insertKey (var_intLiteralOp_15133, var_selfType_14957, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_xor (SOURCE_FILE ("type-integer.galgas", 437))  COMMA_SOURCE_FILE ("type-integer.galgas", 437)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 434)) ;
      }
    }
  }
  {
  GALGAS_llvmBinaryOperation temp_5 ;
  const enumGalgasBool test_6 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_6) {
    temp_5 = GALGAS_llvmBinaryOperation::constructor_saddOVF (SOURCE_FILE ("type-integer.galgas", 444)) ;
  }else if (kBoolFalse == test_6) {
    temp_5 = GALGAS_llvmBinaryOperation::constructor_uaddOVF (SOURCE_FILE ("type-integer.galgas", 444)) ;
  }
  ioArgument_ioContext.mProperty_mAddOperatorMap.setter_insertKey (var_intLiteralOp_15133, var_selfType_14957, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (temp_5  COMMA_SOURCE_FILE ("type-integer.galgas", 444)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 441)) ;
  }
  {
  ioArgument_ioContext.mProperty_mAddNoOvfOperatorMap.setter_insertKey (var_intLiteralOp_15133, var_selfType_14957, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_addNoOVF (SOURCE_FILE ("type-integer.galgas", 449))  COMMA_SOURCE_FILE ("type-integer.galgas", 449)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 446)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_7 ;
  const enumGalgasBool test_8 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_8) {
    temp_7 = GALGAS_llvmBinaryOperation::constructor_ssubOVF (SOURCE_FILE ("type-integer.galgas", 454)) ;
  }else if (kBoolFalse == test_8) {
    temp_7 = GALGAS_llvmBinaryOperation::constructor_usubOVF (SOURCE_FILE ("type-integer.galgas", 454)) ;
  }
  ioArgument_ioContext.mProperty_mSubOperatorMap.setter_insertKey (var_intLiteralOp_15133, var_selfType_14957, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (temp_7  COMMA_SOURCE_FILE ("type-integer.galgas", 454)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 451)) ;
  }
  {
  ioArgument_ioContext.mProperty_mSubNoOvfOperatorMap.setter_insertKey (var_intLiteralOp_15133, var_selfType_14957, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_subNoOVF (SOURCE_FILE ("type-integer.galgas", 459))  COMMA_SOURCE_FILE ("type-integer.galgas", 459)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 456)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_9 ;
  const enumGalgasBool test_10 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_10) {
    temp_9 = GALGAS_llvmBinaryOperation::constructor_smulOVF (SOURCE_FILE ("type-integer.galgas", 464)) ;
  }else if (kBoolFalse == test_10) {
    temp_9 = GALGAS_llvmBinaryOperation::constructor_umulOVF (SOURCE_FILE ("type-integer.galgas", 464)) ;
  }
  ioArgument_ioContext.mProperty_mMulOperatorMap.setter_insertKey (var_intLiteralOp_15133, var_selfType_14957, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (temp_9  COMMA_SOURCE_FILE ("type-integer.galgas", 464)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 461)) ;
  }
  {
  ioArgument_ioContext.mProperty_mMulNoOvfOperatorMap.setter_insertKey (var_intLiteralOp_15133, var_selfType_14957, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_mulNoOVF (SOURCE_FILE ("type-integer.galgas", 469))  COMMA_SOURCE_FILE ("type-integer.galgas", 469)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 466)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_11 ;
  const enumGalgasBool test_12 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_12) {
    temp_11 = GALGAS_llvmBinaryOperation::constructor_sdivNoOVF (SOURCE_FILE ("type-integer.galgas", 474)) ;
  }else if (kBoolFalse == test_12) {
    temp_11 = GALGAS_llvmBinaryOperation::constructor_udivNoOVF (SOURCE_FILE ("type-integer.galgas", 474)) ;
  }
  ioArgument_ioContext.mProperty_mDivOperatorMap.setter_insertKey (var_intLiteralOp_15133, var_selfType_14957, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (temp_11  COMMA_SOURCE_FILE ("type-integer.galgas", 474)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 471)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_13 ;
  const enumGalgasBool test_14 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_14) {
    temp_13 = GALGAS_llvmBinaryOperation::constructor_sdivNoOVF (SOURCE_FILE ("type-integer.galgas", 479)) ;
  }else if (kBoolFalse == test_14) {
    temp_13 = GALGAS_llvmBinaryOperation::constructor_udivNoOVF (SOURCE_FILE ("type-integer.galgas", 479)) ;
  }
  ioArgument_ioContext.mProperty_mDivNoOvfOperatorMap.setter_insertKey (var_intLiteralOp_15133, var_selfType_14957, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (temp_13  COMMA_SOURCE_FILE ("type-integer.galgas", 479)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 476)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_15 ;
  const enumGalgasBool test_16 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_16) {
    temp_15 = GALGAS_llvmBinaryOperation::constructor_sremNoOVF (SOURCE_FILE ("type-integer.galgas", 484)) ;
  }else if (kBoolFalse == test_16) {
    temp_15 = GALGAS_llvmBinaryOperation::constructor_uremNoOVF (SOURCE_FILE ("type-integer.galgas", 484)) ;
  }
  ioArgument_ioContext.mProperty_mModOperatorMap.setter_insertKey (var_intLiteralOp_15133, var_selfType_14957, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (temp_15  COMMA_SOURCE_FILE ("type-integer.galgas", 484)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 481)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_17 ;
  const enumGalgasBool test_18 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_18) {
    temp_17 = GALGAS_llvmBinaryOperation::constructor_sremNoOVF (SOURCE_FILE ("type-integer.galgas", 489)) ;
  }else if (kBoolFalse == test_18) {
    temp_17 = GALGAS_llvmBinaryOperation::constructor_uremNoOVF (SOURCE_FILE ("type-integer.galgas", 489)) ;
  }
  ioArgument_ioContext.mProperty_mModNoOvfOperatorMap.setter_insertKey (var_intLiteralOp_15133, var_selfType_14957, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (temp_17  COMMA_SOURCE_FILE ("type-integer.galgas", 489)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 486)) ;
  }
  {
  ioArgument_ioContext.mProperty_mLeftShiftOperatorMap.setter_insertKey (var_intLiteralOp_15133, var_selfType_14957, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_shl (SOURCE_FILE ("type-integer.galgas", 495))  COMMA_SOURCE_FILE ("type-integer.galgas", 495)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 492)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_19 ;
  const enumGalgasBool test_20 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_20) {
    temp_19 = GALGAS_llvmBinaryOperation::constructor_ashr (SOURCE_FILE ("type-integer.galgas", 500)) ;
  }else if (kBoolFalse == test_20) {
    temp_19 = GALGAS_llvmBinaryOperation::constructor_lshr (SOURCE_FILE ("type-integer.galgas", 500)) ;
  }
  ioArgument_ioContext.mProperty_mRightShiftOperatorMap.setter_insertKey (var_intLiteralOp_15133, var_selfType_14957, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (temp_19  COMMA_SOURCE_FILE ("type-integer.galgas", 500)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 497)) ;
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
                                                                                                 const GALGAS_omnibusType constinArgument_inResultType,
                                                                                                 GALGAS_objectIR & outArgument_outResult,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_integerObject_5F_literal_5F_infixOperator * object = (const cPtr_integerObject_5F_literal_5F_infixOperator *) inObject ;
  macroValidSharedObject (object, cPtr_integerObject_5F_literal_5F_infixOperator) ;
  GALGAS_bigint var_rightLiteralValue_19054 ;
  GALGAS_omnibusType joker_19015_1 ; // Joker input parameter
  constinArgument_inRightOperand.method_literalInteger (joker_19015_1, var_rightLiteralValue_19054, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 521)) ;
  GALGAS_bigint var_min_19113 ;
  GALGAS_bigint var_max_19134 ;
  GALGAS_bool joker_19136_2 ; // Joker input parameter
  GALGAS_uint joker_19136_1 ; // Joker input parameter
  extensionGetter_type (constinArgument_inLeftOperand, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 522)).getter_kind (HERE).method_integer (var_min_19113, var_max_19134, joker_19136_2, joker_19136_1, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 522)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsStrictInf, var_rightLiteralValue_19054.objectCompare (var_min_19113)).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GALGAS_string ("literal right integer expression too small (should be >= ").add_operation (var_min_19113.getter_string (SOURCE_FILE ("type-integer.galgas", 524)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 524)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 524)), fixItArray1  COMMA_SOURCE_FILE ("type-integer.galgas", 524)) ;
      outArgument_outResult.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = GALGAS_bool (kIsStrictSup, var_rightLiteralValue_19054.objectCompare (var_max_19134)).boolEnum () ;
      if (kBoolTrue == test_2) {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GALGAS_string ("literal right integer expression too large (should be <= ").add_operation (var_max_19134.getter_string (SOURCE_FILE ("type-integer.galgas", 526)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 526)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 526)), fixItArray3  COMMA_SOURCE_FILE ("type-integer.galgas", 526)) ;
        outArgument_outResult.drop () ; // Release error dropped variable
      }
    }
    if (kBoolFalse == test_2) {
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        test_4 = constinArgument_inLeftOperand.getter_isLiteralInteger (SOURCE_FILE ("type-integer.galgas", 527)).boolEnum () ;
        if (kBoolTrue == test_4) {
          GALGAS_bigint var_leftLiteralValue_19560 ;
          GALGAS_omnibusType joker_19522_1 ; // Joker input parameter
          constinArgument_inLeftOperand.method_literalInteger (joker_19522_1, var_leftLiteralValue_19560, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 528)) ;
          const GALGAS_integerObject_5F_literal_5F_infixOperator temp_5 = object ;
          GALGAS_bigint var_resultValue_19581 = callExtensionGetter_performStaticOperation ((const cPtr_integerObject_5F_literal_5F_infixOperator *) temp_5.ptr (), var_leftLiteralValue_19560, var_rightLiteralValue_19054, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 529)) ;
          outArgument_outResult = GALGAS_objectIR::constructor_literalInteger (constinArgument_inResultType, var_resultValue_19581  COMMA_SOURCE_FILE ("type-integer.galgas", 530)) ;
        }
      }
      if (kBoolFalse == test_4) {
        {
        routine_getNewTempValue (constinArgument_inResultType, ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 532)) ;
        }
        {
        extensionSetter_appendBinaryOperation (ioArgument_ioInstructionGenerationList, outArgument_outResult, extensionGetter_type (constinArgument_inLeftOperand, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 535)), constinArgument_inOperatorLocation, constinArgument_inLeftOperand, object->mProperty_mOperator, constinArgument_inRightOperand, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 533)) ;
        }
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
  GALGAS_omnibusType var_selfType_20529 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.getter_mTypeMap (HERE), constinArgument_inIntegerTypeName, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 554)).getter_type (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 554)) ;
  GALGAS_lstring var_intLiteralOp_20661 = function_combineTypeNamesForInfixOperator (function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 556)), constinArgument_inIntegerTypeName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 556)) ;
  GALGAS_omnibusType var_booleanType_20768 = extensionGetter_booleanType (ioArgument_ioContext, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 557)) ;
  {
  ioArgument_ioContext.mProperty_mEqualOperatorMap.setter_insertKey (var_intLiteralOp_20661, var_booleanType_20768, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_eq (SOURCE_FILE ("type-integer.galgas", 561))  COMMA_SOURCE_FILE ("type-integer.galgas", 561)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 558)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_0 ;
  const enumGalgasBool test_1 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_slt (SOURCE_FILE ("type-integer.galgas", 566)) ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_ult (SOURCE_FILE ("type-integer.galgas", 566)) ;
  }
  ioArgument_ioContext.mProperty_mStrictInfOperatorMap.setter_insertKey (var_intLiteralOp_20661, var_booleanType_20768, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (temp_0  COMMA_SOURCE_FILE ("type-integer.galgas", 566)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 563)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_2 ;
  const enumGalgasBool test_3 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_3) {
    temp_2 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_sle (SOURCE_FILE ("type-integer.galgas", 571)) ;
  }else if (kBoolFalse == test_3) {
    temp_2 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_ule (SOURCE_FILE ("type-integer.galgas", 571)) ;
  }
  ioArgument_ioContext.mProperty_mInfEqualOperatorMap.setter_insertKey (var_intLiteralOp_20661, var_booleanType_20768, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (temp_2  COMMA_SOURCE_FILE ("type-integer.galgas", 571)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 568)) ;
  }
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = constinArgument_inIsSigned.operator_not (SOURCE_FILE ("type-integer.galgas", 574)).boolEnum () ;
    if (kBoolTrue == test_4) {
      {
      ioArgument_ioContext.mProperty_mAndOperatorMap.setter_insertKey (var_intLiteralOp_20661, var_selfType_20529, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_and (SOURCE_FILE ("type-integer.galgas", 578))  COMMA_SOURCE_FILE ("type-integer.galgas", 578)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 575)) ;
      }
      {
      ioArgument_ioContext.mProperty_mOrOperatorMap.setter_insertKey (var_intLiteralOp_20661, var_selfType_20529, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_ior (SOURCE_FILE ("type-integer.galgas", 583))  COMMA_SOURCE_FILE ("type-integer.galgas", 583)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 580)) ;
      }
      {
      ioArgument_ioContext.mProperty_mXorOperatorMap.setter_insertKey (var_intLiteralOp_20661, var_selfType_20529, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_xor (SOURCE_FILE ("type-integer.galgas", 588))  COMMA_SOURCE_FILE ("type-integer.galgas", 588)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 585)) ;
      }
    }
  }
  {
  GALGAS_llvmBinaryOperation temp_5 ;
  const enumGalgasBool test_6 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_6) {
    temp_5 = GALGAS_llvmBinaryOperation::constructor_saddOVF (SOURCE_FILE ("type-integer.galgas", 595)) ;
  }else if (kBoolFalse == test_6) {
    temp_5 = GALGAS_llvmBinaryOperation::constructor_uaddOVF (SOURCE_FILE ("type-integer.galgas", 595)) ;
  }
  ioArgument_ioContext.mProperty_mAddOperatorMap.setter_insertKey (var_intLiteralOp_20661, var_selfType_20529, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (temp_5  COMMA_SOURCE_FILE ("type-integer.galgas", 595)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 592)) ;
  }
  {
  ioArgument_ioContext.mProperty_mAddNoOvfOperatorMap.setter_insertKey (var_intLiteralOp_20661, var_selfType_20529, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_addNoOVF (SOURCE_FILE ("type-integer.galgas", 600))  COMMA_SOURCE_FILE ("type-integer.galgas", 600)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 597)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_7 ;
  const enumGalgasBool test_8 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_8) {
    temp_7 = GALGAS_llvmBinaryOperation::constructor_ssubOVF (SOURCE_FILE ("type-integer.galgas", 605)) ;
  }else if (kBoolFalse == test_8) {
    temp_7 = GALGAS_llvmBinaryOperation::constructor_usubOVF (SOURCE_FILE ("type-integer.galgas", 605)) ;
  }
  ioArgument_ioContext.mProperty_mSubOperatorMap.setter_insertKey (var_intLiteralOp_20661, var_selfType_20529, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (temp_7  COMMA_SOURCE_FILE ("type-integer.galgas", 605)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 602)) ;
  }
  {
  ioArgument_ioContext.mProperty_mSubNoOvfOperatorMap.setter_insertKey (var_intLiteralOp_20661, var_selfType_20529, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_subNoOVF (SOURCE_FILE ("type-integer.galgas", 610))  COMMA_SOURCE_FILE ("type-integer.galgas", 610)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 607)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_9 ;
  const enumGalgasBool test_10 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_10) {
    temp_9 = GALGAS_llvmBinaryOperation::constructor_smulOVF (SOURCE_FILE ("type-integer.galgas", 615)) ;
  }else if (kBoolFalse == test_10) {
    temp_9 = GALGAS_llvmBinaryOperation::constructor_umulOVF (SOURCE_FILE ("type-integer.galgas", 615)) ;
  }
  ioArgument_ioContext.mProperty_mMulOperatorMap.setter_insertKey (var_intLiteralOp_20661, var_selfType_20529, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (temp_9  COMMA_SOURCE_FILE ("type-integer.galgas", 615)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 612)) ;
  }
  {
  ioArgument_ioContext.mProperty_mMulNoOvfOperatorMap.setter_insertKey (var_intLiteralOp_20661, var_selfType_20529, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_mulNoOVF (SOURCE_FILE ("type-integer.galgas", 620))  COMMA_SOURCE_FILE ("type-integer.galgas", 620)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 617)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_11 ;
  const enumGalgasBool test_12 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_12) {
    temp_11 = GALGAS_llvmBinaryOperation::constructor_sdivOVF (SOURCE_FILE ("type-integer.galgas", 625)) ;
  }else if (kBoolFalse == test_12) {
    temp_11 = GALGAS_llvmBinaryOperation::constructor_udivOVF (SOURCE_FILE ("type-integer.galgas", 625)) ;
  }
  ioArgument_ioContext.mProperty_mDivOperatorMap.setter_insertKey (var_intLiteralOp_20661, var_selfType_20529, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (temp_11  COMMA_SOURCE_FILE ("type-integer.galgas", 625)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 622)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_13 ;
  const enumGalgasBool test_14 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_14) {
    temp_13 = GALGAS_llvmBinaryOperation::constructor_sdivNoOVF (SOURCE_FILE ("type-integer.galgas", 630)) ;
  }else if (kBoolFalse == test_14) {
    temp_13 = GALGAS_llvmBinaryOperation::constructor_udivNoOVF (SOURCE_FILE ("type-integer.galgas", 630)) ;
  }
  ioArgument_ioContext.mProperty_mDivNoOvfOperatorMap.setter_insertKey (var_intLiteralOp_20661, var_selfType_20529, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (temp_13  COMMA_SOURCE_FILE ("type-integer.galgas", 630)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 627)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_15 ;
  const enumGalgasBool test_16 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_16) {
    temp_15 = GALGAS_llvmBinaryOperation::constructor_sremOVF (SOURCE_FILE ("type-integer.galgas", 635)) ;
  }else if (kBoolFalse == test_16) {
    temp_15 = GALGAS_llvmBinaryOperation::constructor_uremOVF (SOURCE_FILE ("type-integer.galgas", 635)) ;
  }
  ioArgument_ioContext.mProperty_mModOperatorMap.setter_insertKey (var_intLiteralOp_20661, var_selfType_20529, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (temp_15  COMMA_SOURCE_FILE ("type-integer.galgas", 635)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 632)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_17 ;
  const enumGalgasBool test_18 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_18) {
    temp_17 = GALGAS_llvmBinaryOperation::constructor_sremNoOVF (SOURCE_FILE ("type-integer.galgas", 640)) ;
  }else if (kBoolFalse == test_18) {
    temp_17 = GALGAS_llvmBinaryOperation::constructor_uremNoOVF (SOURCE_FILE ("type-integer.galgas", 640)) ;
  }
  ioArgument_ioContext.mProperty_mModNoOvfOperatorMap.setter_insertKey (var_intLiteralOp_20661, var_selfType_20529, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (temp_17  COMMA_SOURCE_FILE ("type-integer.galgas", 640)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 637)) ;
  }
  {
  ioArgument_ioContext.mProperty_mLeftShiftOperatorMap.setter_insertKey (var_intLiteralOp_20661, var_selfType_20529, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_shl (SOURCE_FILE ("type-integer.galgas", 646))  COMMA_SOURCE_FILE ("type-integer.galgas", 646)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 643)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_19 ;
  const enumGalgasBool test_20 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_20) {
    temp_19 = GALGAS_llvmBinaryOperation::constructor_ashr (SOURCE_FILE ("type-integer.galgas", 651)) ;
  }else if (kBoolFalse == test_20) {
    temp_19 = GALGAS_llvmBinaryOperation::constructor_lshr (SOURCE_FILE ("type-integer.galgas", 651)) ;
  }
  ioArgument_ioContext.mProperty_mRightShiftOperatorMap.setter_insertKey (var_intLiteralOp_20661, var_selfType_20529, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (temp_19  COMMA_SOURCE_FILE ("type-integer.galgas", 651)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 648)) ;
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
                                                                                                 const GALGAS_omnibusType constinArgument_inResultType,
                                                                                                 GALGAS_objectIR & outArgument_outResult,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literal_5F_integerObject_5F_infixOperator * object = (const cPtr_literal_5F_integerObject_5F_infixOperator *) inObject ;
  macroValidSharedObject (object, cPtr_literal_5F_integerObject_5F_infixOperator) ;
  GALGAS_bigint var_leftLiteralValue_24599 ;
  GALGAS_omnibusType joker_24561_1 ; // Joker input parameter
  constinArgument_inLeftOperand.method_literalInteger (joker_24561_1, var_leftLiteralValue_24599, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 672)) ;
  GALGAS_bigint var_min_24659 ;
  GALGAS_bigint var_max_24680 ;
  GALGAS_bool joker_24682_2 ; // Joker input parameter
  GALGAS_uint joker_24682_1 ; // Joker input parameter
  extensionGetter_type (constinArgument_inRightOperand, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 673)).getter_kind (HERE).method_integer (var_min_24659, var_max_24680, joker_24682_2, joker_24682_1, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 673)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsStrictInf, var_leftLiteralValue_24599.objectCompare (var_min_24659)).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GALGAS_string ("literal left integer expression too small (should be >= ").add_operation (var_min_24659.getter_string (SOURCE_FILE ("type-integer.galgas", 675)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 675)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 675)), fixItArray1  COMMA_SOURCE_FILE ("type-integer.galgas", 675)) ;
      outArgument_outResult.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = GALGAS_bool (kIsStrictSup, var_leftLiteralValue_24599.objectCompare (var_max_24680)).boolEnum () ;
      if (kBoolTrue == test_2) {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GALGAS_string ("literal left integer expression too large (should be <= ").add_operation (var_max_24680.getter_string (SOURCE_FILE ("type-integer.galgas", 677)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 677)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 677)), fixItArray3  COMMA_SOURCE_FILE ("type-integer.galgas", 677)) ;
        outArgument_outResult.drop () ; // Release error dropped variable
      }
    }
    if (kBoolFalse == test_2) {
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        test_4 = constinArgument_inRightOperand.getter_isLiteralInteger (SOURCE_FILE ("type-integer.galgas", 678)).boolEnum () ;
        if (kBoolTrue == test_4) {
          GALGAS_bigint var_rightLiteralValue_25105 ;
          GALGAS_omnibusType joker_25066_1 ; // Joker input parameter
          constinArgument_inRightOperand.method_literalInteger (joker_25066_1, var_rightLiteralValue_25105, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 679)) ;
          const GALGAS_literal_5F_integerObject_5F_infixOperator temp_5 = object ;
          GALGAS_bigint var_resultValue_25126 = callExtensionGetter_performStaticOperation ((const cPtr_literal_5F_integerObject_5F_infixOperator *) temp_5.ptr (), var_leftLiteralValue_24599, var_rightLiteralValue_25105, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 680)) ;
          outArgument_outResult = GALGAS_objectIR::constructor_literalInteger (constinArgument_inResultType, var_resultValue_25126  COMMA_SOURCE_FILE ("type-integer.galgas", 681)) ;
        }
      }
      if (kBoolFalse == test_4) {
        {
        routine_getNewTempValue (constinArgument_inResultType, ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 683)) ;
        }
        {
        extensionSetter_appendBinaryOperation (ioArgument_ioInstructionGenerationList, outArgument_outResult, extensionGetter_type (constinArgument_inRightOperand, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 686)), constinArgument_inOperatorLocation, constinArgument_inLeftOperand, object->mProperty_mOperator, constinArgument_inRightOperand, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 684)) ;
        }
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
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal ").add_operation (object->mProperty_mLLVMTypeName, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 710)).add_operation (GALGAS_string (" @"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 710)).add_operation (object->mProperty_mRoutineMangledName.getter_string (HERE).getter_assemblerRepresentation (SOURCE_FILE ("type-integer.galgas", 710)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 710)), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 710)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" (").add_operation (object->mProperty_mLLVMTypeName, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 711)).add_operation (GALGAS_string ("* %inValue) {\n"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 711)), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 711)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %value = load ").add_operation (object->mProperty_mLLVMTypeName, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 712)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 712)).add_operation (object->mProperty_mLLVMTypeName, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 712)).add_operation (GALGAS_string ("* %inValue\n"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 712)), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 712)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret i1 %value\n"), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 713)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 714)) ;
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
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal ").add_operation (object->mProperty_mLLVMTypeName, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 733)).add_operation (GALGAS_string (" @"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 733)).add_operation (object->mProperty_mRoutineMangledName.getter_string (HERE).getter_assemblerRepresentation (SOURCE_FILE ("type-integer.galgas", 733)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 733)), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 733)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" (").add_operation (object->mProperty_mLLVMTypeName, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 734)).add_operation (GALGAS_string ("* %inValue) {\n"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 734)), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 734)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %value = load ").add_operation (object->mProperty_mLLVMTypeName, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 735)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 735)).add_operation (object->mProperty_mLLVMTypeName, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 735)).add_operation (GALGAS_string ("* %inValue\n"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 735)), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 735)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %result = call ").add_operation (object->mProperty_mLLVMTypeName, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 736)).add_operation (GALGAS_string (" @llvm."), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 736)).add_operation (object->mProperty_mIntrinsicName, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 736)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 736)).add_operation (object->mProperty_mLLVMTypeName, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 736)), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 736)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" (").add_operation (object->mProperty_mLLVMTypeName, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 737)).add_operation (GALGAS_string (" %value)\n"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 737)), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 737)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret ").add_operation (object->mProperty_mLLVMTypeName, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 738)).add_operation (GALGAS_string (" %result\n"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 738)), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 738)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 739)) ;
  ioArgument_ioGenerationAdds.mProperty_mExternFunctionDeclarationSet.addAssign_operation (object->mProperty_mLLVMTypeName.add_operation (GALGAS_string (" @llvm."), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 741)).add_operation (object->mProperty_mIntrinsicName, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 741)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 741)).add_operation (object->mProperty_mLLVMTypeName, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 741)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 741)).add_operation (object->mProperty_mLLVMTypeName, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 741)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 741))  COMMA_SOURCE_FILE ("type-integer.galgas", 740)) ;
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
//                    Overriding extension method '@integerTypeAssignFunctionIR llvmCodeGeneration'                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_integerTypeAssignFunctionIR_llvmCodeGeneration (const cPtr_abstractRoutineIR * inObject,
                                                                            GALGAS_string & ioArgument_ioLLVMcode,
                                                                            const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                            GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_integerTypeAssignFunctionIR * object = (const cPtr_integerTypeAssignFunctionIR *) inObject ;
  macroValidSharedObject (object, cPtr_integerTypeAssignFunctionIR) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal void @").add_operation (object->mProperty_mRoutineMangledName.getter_string (HERE).getter_assemblerRepresentation (SOURCE_FILE ("type-integer.galgas", 759)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 759)), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 759)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" (").add_operation (object->mProperty_mLLVMTypeName, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 760)).add_operation (GALGAS_string ("* %outTarget, "), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 760)).add_operation (object->mProperty_mLLVMTypeName, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 760)).add_operation (GALGAS_string ("* %inSource) alwaysinline {\n"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 760)), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 760)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--- Compute type size\n"), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 761)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %sizeAsPtr = getelementptr inbounds ").add_operation (object->mProperty_mLLVMTypeName, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 762)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 762)).add_operation (object->mProperty_mLLVMTypeName, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 762)).add_operation (GALGAS_string ("* null, i32 1\n"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 762)), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 762)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %byteCount = ptrtoint ").add_operation (object->mProperty_mLLVMTypeName, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 763)).add_operation (GALGAS_string ("* %sizeAsPtr to i32\n"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 763)), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 763)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %useLoadStore = icmp ule i32 %byteCount, 12\n"), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 764)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 %useLoadStore, label %loadStore, label %copyWords\n"), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 765)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--- Copy using load/store\n"), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 766)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("loadStore:\n"), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 767)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %value = load ").add_operation (object->mProperty_mLLVMTypeName, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 768)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 768)).add_operation (object->mProperty_mLLVMTypeName, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 768)).add_operation (GALGAS_string ("* %inSource\n"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 768)), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 768)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store ").add_operation (object->mProperty_mLLVMTypeName, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 769)).add_operation (GALGAS_string (" %value, "), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 769)).add_operation (object->mProperty_mLLVMTypeName, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 769)).add_operation (GALGAS_string ("* %outTarget\n"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 769)), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 769)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 770)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--- Copy using copy function\n"), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 771)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("copyWords:\n"), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 772)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %target32 = bitcast ").add_operation (object->mProperty_mLLVMTypeName, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 773)).add_operation (GALGAS_string ("* %outTarget to i32*\n"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 773)), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 773)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %source32 = bitcast ").add_operation (object->mProperty_mLLVMTypeName, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 774)).add_operation (GALGAS_string ("* %inSource to i32*\n"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 774)), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 774)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %temp = add nsw nuw i32 %byteCount, 3\n"), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 775)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %wordCount = udiv i32 %temp, 4\n"), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 776)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @copy.word.array (i32* %target32, i32* %source32, i32 %wordCount)\n"), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 777)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 778)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 779)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_integerTypeAssignFunctionIR_llvmCodeGeneration (void) {
  enterExtensionMethod_llvmCodeGeneration (kTypeDescriptor_GALGAS_integerTypeAssignFunctionIR.mSlotID,
                                           extensionMethod_integerTypeAssignFunctionIR_llvmCodeGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_integerTypeAssignFunctionIR_llvmCodeGeneration (defineExtensionMethod_integerTypeAssignFunctionIR_llvmCodeGeneration, NULL) ;

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
                                                                         GALGAS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                                         GALGAS_userLLVMTypeDefinitionListIR & /* ioArgument_ioUserLLVMTypeDefinitionListIR */,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring var_integerTypeName_2698 = function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 47)).getter_nowhere (SOURCE_FILE ("type-literal-integer.galgas", 47)) ;
  {
  ioArgument_ioContext.mProperty_mTypeMap.setter_insertType (var_integerTypeName_2698, function_literalIntegerType (inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 51)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 49)) ;
  }
  {
  routine_enterLiteralIntegerOperators (ioArgument_ioContext, inCompiler  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 54)) ;
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
  GALGAS_lstring var_literalIntegerTypeName_3165 = function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 64)).getter_nowhere (SOURCE_FILE ("type-literal-integer.galgas", 64)) ;
  GALGAS_lstring var_intIntOp_3238 = function_combineTypeNamesForInfixOperator (var_literalIntegerTypeName_3165.getter_string (HERE), var_literalIntegerTypeName_3165.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 66)) ;
  GALGAS_omnibusType var_selfType_3352 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.getter_mTypeMap (HERE), var_literalIntegerTypeName_3165, inCompiler  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 67)).getter_type (inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 67)) ;
  GALGAS_omnibusType var_booleanType_3488 = extensionGetter_booleanType (ioArgument_ioContext, inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 69)) ;
  {
  ioArgument_ioContext.mProperty_mEqualOperatorMap.setter_insertKey (var_intIntOp_3238, var_booleanType_3488, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_eq (SOURCE_FILE ("type-literal-integer.galgas", 73))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 73)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 70)) ;
  }
  {
  ioArgument_ioContext.mProperty_mStrictInfOperatorMap.setter_insertKey (var_intIntOp_3238, var_booleanType_3488, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_slt (SOURCE_FILE ("type-literal-integer.galgas", 83))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 83)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 80)) ;
  }
  {
  ioArgument_ioContext.mProperty_mInfEqualOperatorMap.setter_insertKey (var_intIntOp_3238, var_booleanType_3488, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_sle (SOURCE_FILE ("type-literal-integer.galgas", 88))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 88)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 85)) ;
  }
  {
  ioArgument_ioContext.mProperty_mAndOperatorMap.setter_insertKey (var_intIntOp_3238, var_selfType_3352, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_and (SOURCE_FILE ("type-literal-integer.galgas", 104))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 104)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 101)) ;
  }
  {
  ioArgument_ioContext.mProperty_mOrOperatorMap.setter_insertKey (var_intIntOp_3238, var_selfType_3352, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_ior (SOURCE_FILE ("type-literal-integer.galgas", 109))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 109)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 106)) ;
  }
  {
  ioArgument_ioContext.mProperty_mXorOperatorMap.setter_insertKey (var_intIntOp_3238, var_selfType_3352, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_xor (SOURCE_FILE ("type-literal-integer.galgas", 114))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 114)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 111)) ;
  }
  {
  ioArgument_ioContext.mProperty_mUnsignedComplementOperatorMap.setter_insertKey (var_literalIntegerTypeName_3165, inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 116)) ;
  }
  {
  ioArgument_ioContext.mProperty_mUnaryMinusOperatorMap.setter_insertKey (var_literalIntegerTypeName_3165, inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 120)) ;
  }
  {
  ioArgument_ioContext.mProperty_mAddOperatorMap.setter_insertKey (var_intIntOp_3238, var_selfType_3352, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_saddOVF (SOURCE_FILE ("type-literal-integer.galgas", 127))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 127)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 124)) ;
  }
  {
  ioArgument_ioContext.mProperty_mAddNoOvfOperatorMap.setter_insertKey (var_intIntOp_3238, var_selfType_3352, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_addNoOVF (SOURCE_FILE ("type-literal-integer.galgas", 132))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 132)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 129)) ;
  }
  {
  ioArgument_ioContext.mProperty_mSubOperatorMap.setter_insertKey (var_intIntOp_3238, var_selfType_3352, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_ssubOVF (SOURCE_FILE ("type-literal-integer.galgas", 137))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 137)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 134)) ;
  }
  {
  ioArgument_ioContext.mProperty_mSubNoOvfOperatorMap.setter_insertKey (var_intIntOp_3238, var_selfType_3352, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_subNoOVF (SOURCE_FILE ("type-literal-integer.galgas", 142))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 142)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 139)) ;
  }
  {
  ioArgument_ioContext.mProperty_mMulOperatorMap.setter_insertKey (var_intIntOp_3238, var_selfType_3352, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_smulOVF (SOURCE_FILE ("type-literal-integer.galgas", 147))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 147)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 144)) ;
  }
  {
  ioArgument_ioContext.mProperty_mMulNoOvfOperatorMap.setter_insertKey (var_intIntOp_3238, var_selfType_3352, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_mulNoOVF (SOURCE_FILE ("type-literal-integer.galgas", 152))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 152)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 149)) ;
  }
  {
  ioArgument_ioContext.mProperty_mDivOperatorMap.setter_insertKey (var_intIntOp_3238, var_selfType_3352, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_sdivOVF (SOURCE_FILE ("type-literal-integer.galgas", 157))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 157)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 154)) ;
  }
  {
  ioArgument_ioContext.mProperty_mDivNoOvfOperatorMap.setter_insertKey (var_intIntOp_3238, var_selfType_3352, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_sdivNoOVF (SOURCE_FILE ("type-literal-integer.galgas", 162))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 162)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 159)) ;
  }
  {
  ioArgument_ioContext.mProperty_mModOperatorMap.setter_insertKey (var_intIntOp_3238, var_selfType_3352, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_sremOVF (SOURCE_FILE ("type-literal-integer.galgas", 167))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 167)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 164)) ;
  }
  {
  ioArgument_ioContext.mProperty_mModNoOvfOperatorMap.setter_insertKey (var_intIntOp_3238, var_selfType_3352, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_sremNoOVF (SOURCE_FILE ("type-literal-integer.galgas", 172))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 172)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 169)) ;
  }
  {
  ioArgument_ioContext.mProperty_mLeftShiftOperatorMap.setter_insertKey (var_intIntOp_3238, var_selfType_3352, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_shl (SOURCE_FILE ("type-literal-integer.galgas", 178))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 178)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 175)) ;
  }
  {
  ioArgument_ioContext.mProperty_mRightShiftOperatorMap.setter_insertKey (var_intIntOp_3238, var_selfType_3352, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_lshr (SOURCE_FILE ("type-literal-integer.galgas", 183))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 183)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 180)) ;
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
                                                                                                   const GALGAS_omnibusType constinArgument_inResultType,
                                                                                                   GALGAS_objectIR & outArgument_outResult,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literal_5F_literal_5F_integerInfixOperation * object = (const cPtr_literal_5F_literal_5F_integerInfixOperation *) inObject ;
  macroValidSharedObject (object, cPtr_literal_5F_literal_5F_integerInfixOperation) ;
  GALGAS_bigint var_leftValue_7670 ;
  GALGAS_omnibusType joker_7639_1 ; // Joker input parameter
  constinArgument_inLeftOperand.method_literalInteger (joker_7639_1, var_leftValue_7670, inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 205)) ;
  GALGAS_bigint var_rightValue_7738 ;
  GALGAS_omnibusType joker_7706_1 ; // Joker input parameter
  constinArgument_inRightOperand.method_literalInteger (joker_7706_1, var_rightValue_7738, inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 206)) ;
  const GALGAS_literal_5F_literal_5F_integerInfixOperation temp_0 = object ;
  GALGAS_bigint var_result_7752 = callExtensionGetter_performStaticOperation ((const cPtr_literal_5F_literal_5F_integerInfixOperation *) temp_0.ptr (), var_leftValue_7670, var_rightValue_7738, inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 207)) ;
  outArgument_outResult = GALGAS_objectIR::constructor_literalInteger (constinArgument_inResultType, var_result_7752  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 208)) ;
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
  ioArgument_ioGraph.setter_addEdge (var_literalStringTypeName_1179, GALGAS_string ("uint8").getter_nowhere (SOURCE_FILE ("type-static-string.galgas", 23)) COMMA_SOURCE_FILE ("type-static-string.galgas", 23)) ;
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
                                                                        GALGAS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                                        GALGAS_userLLVMTypeDefinitionListIR & /* ioArgument_ioUserLLVMTypeDefinitionListIR */,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioArgument_ioContext.mProperty_mTypeMap.setter_insertType (function_staticStringTypeName (inCompiler COMMA_SOURCE_FILE ("type-static-string.galgas", 49)).getter_nowhere (SOURCE_FILE ("type-static-string.galgas", 49)), function_literalStringType (inCompiler COMMA_SOURCE_FILE ("type-static-string.galgas", 50)), inCompiler COMMA_SOURCE_FILE ("type-static-string.galgas", 48)) ;
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
                                                                     GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                     GALGAS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                                     GALGAS_userLLVMTypeDefinitionListIR & /* ioArgument_ioUserLLVMTypeDefinitionListIR */,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_typeOpaqueDeclarationAST * object = (const cPtr_typeOpaqueDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_typeOpaqueDeclarationAST) ;
  GALGAS_omnibusTypeAttributes var_opaqueTypeAttributes_4318 = GALGAS_omnibusTypeAttributes::constructor_none (SOURCE_FILE ("type-opaque-declaration.galgas", 90)) ;
  GALGAS_bool var_copyable_4341 = GALGAS_bool (false) ;
  cEnumerator_lstringlist enumerator_4385 (object->mProperty_mAttributeList, kENUMERATION_UP) ;
  while (enumerator_4385.hasCurrentObject ()) {
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GALGAS_bool (kIsEqual, enumerator_4385.current_mValue (HERE).getter_string (HERE).objectCompare (function_instantiableAttribute (inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 93)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          test_1 = var_opaqueTypeAttributes_4318.getter_instanciable (SOURCE_FILE ("type-opaque-declaration.galgas", 94)).boolEnum () ;
          if (kBoolTrue == test_1) {
            TC_Array <C_FixItDescription> fixItArray2 ;
            inCompiler->emitSemanticError (enumerator_4385.current_mValue (HERE).getter_location (SOURCE_FILE ("type-opaque-declaration.galgas", 95)), GALGAS_string ("duplicated attribute"), fixItArray2  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 95)) ;
          }
        }
        if (kBoolFalse == test_1) {
          var_opaqueTypeAttributes_4318 = var_opaqueTypeAttributes_4318.operator_or (GALGAS_omnibusTypeAttributes::constructor_instanciable (SOURCE_FILE ("type-opaque-declaration.galgas", 97)) COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 97)) ;
        }
      }
    }
    if (kBoolFalse == test_0) {
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = GALGAS_bool (kIsEqual, enumerator_4385.current_mValue (HERE).getter_string (HERE).objectCompare (function_copyableAttribute (inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 99)))).boolEnum () ;
        if (kBoolTrue == test_3) {
          enumGalgasBool test_4 = kBoolTrue ;
          if (kBoolTrue == test_4) {
            test_4 = var_copyable_4341.boolEnum () ;
            if (kBoolTrue == test_4) {
              TC_Array <C_FixItDescription> fixItArray5 ;
              inCompiler->emitSemanticError (enumerator_4385.current_mValue (HERE).getter_location (SOURCE_FILE ("type-opaque-declaration.galgas", 101)), GALGAS_string ("duplicated attribute"), fixItArray5  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 101)) ;
            }
          }
          if (kBoolFalse == test_4) {
            var_copyable_4341 = GALGAS_bool (true) ;
            var_opaqueTypeAttributes_4318 = var_opaqueTypeAttributes_4318.operator_or (GALGAS_omnibusTypeAttributes::constructor_copyable (SOURCE_FILE ("type-opaque-declaration.galgas", 104)) COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 104)) ;
          }
        }
      }
      if (kBoolFalse == test_3) {
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (enumerator_4385.current_mValue (HERE).getter_location (SOURCE_FILE ("type-opaque-declaration.galgas", 107)), GALGAS_string ("only @").add_operation (function_copyableAttribute (inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 108)), inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 108)).add_operation (GALGAS_string (" and @"), inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 108)).add_operation (function_instantiableAttribute (inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 108)), inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 108)).add_operation (GALGAS_string (" attributes are allowed here"), inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 108)), fixItArray6  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 107)) ;
      }
    }
    enumerator_4385.gotoNextObject () ;
  }
  GALGAS_objectIR var_sizeExpressionIR_5314 ;
  {
  routine_computeStaticExpression (ioArgument_ioContext, ioArgument_ioStaticEntityMap, object->mProperty_mSizeExpression, object->mProperty_mSizeExpressionLocation, GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-opaque-declaration.galgas", 118)), var_sizeExpressionIR_5314, inCompiler  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 113)) ;
  }
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    test_7 = var_sizeExpressionIR_5314.getter_isLiteralInteger (SOURCE_FILE ("type-opaque-declaration.galgas", 121)).operator_not (SOURCE_FILE ("type-opaque-declaration.galgas", 121)).boolEnum () ;
    if (kBoolTrue == test_7) {
      TC_Array <C_FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (object->mProperty_mSizeExpressionLocation, GALGAS_string ("array size expression is not a literal integer"), fixItArray8  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 122)) ;
    }
  }
  if (kBoolFalse == test_7) {
    GALGAS_constructorMap var_constructorMap_5495 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-opaque-declaration.galgas", 124)) ;
    enumGalgasBool test_9 = kBoolTrue ;
    if (kBoolTrue == test_9) {
      test_9 = var_opaqueTypeAttributes_4318.getter_instanciable (SOURCE_FILE ("type-opaque-declaration.galgas", 125)).boolEnum () ;
      if (kBoolTrue == test_9) {
        {
        var_constructorMap_5495.setter_insertKey (GALGAS_string ("()").getter_nowhere (SOURCE_FILE ("type-opaque-declaration.galgas", 126)), GALGAS_constructorSignature::constructor_emptyList (SOURCE_FILE ("type-opaque-declaration.galgas", 126)), GALGAS_constructorValue::constructor_simple (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 126))  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 126)), inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 126)) ;
        }
      }
    }
    GALGAS_bigint var_bitSize_5692 ;
    GALGAS_omnibusType joker_5671_1 ; // Joker input parameter
    var_sizeExpressionIR_5314.method_literalInteger (joker_5671_1, var_bitSize_5692, inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 128)) ;
    GALGAS_stringset temp_10 ;
    const enumGalgasBool test_11 = var_copyable_4341.boolEnum () ;
    if (kBoolTrue == test_11) {
      GALGAS_stringset temp_12 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-opaque-declaration.galgas", 137)) ;
      temp_12.addAssign_operation (object->mProperty_mOpaqueTypeName.getter_string (SOURCE_FILE ("type-opaque-declaration.galgas", 137))  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 137)) ;
      temp_10 = temp_12 ;
    }else if (kBoolFalse == test_11) {
      temp_10 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-opaque-declaration.galgas", 137)) ;
    }
    GALGAS_omnibusType var_opaqueType_5712 = GALGAS_omnibusType::constructor_new (GALGAS_propertyGetterMap::constructor_emptyMap (SOURCE_FILE ("type-opaque-declaration.galgas", 130)), GALGAS_propertySetterMap::constructor_emptyMap (SOURCE_FILE ("type-opaque-declaration.galgas", 131)), GALGAS_routineMapCTXT::constructor_emptyMap (SOURCE_FILE ("type-opaque-declaration.galgas", 132)), GALGAS_classConstantMap::constructor_emptyMap (SOURCE_FILE ("type-opaque-declaration.galgas", 133)), var_constructorMap_5495, GALGAS_guardMapCTXT::constructor_emptyMap (SOURCE_FILE ("type-opaque-declaration.galgas", 135)), GALGAS_subscript::constructor_noSubscript (SOURCE_FILE ("type-opaque-declaration.galgas", 136)), temp_10, var_opaqueTypeAttributes_4318, object->mProperty_mOpaqueTypeName.getter_string (SOURCE_FILE ("type-opaque-declaration.galgas", 139)), GALGAS_typeKind::constructor_opaque (var_bitSize_5692  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 140)), object->mProperty_mOpaqueTypeName.getter_string (SOURCE_FILE ("type-opaque-declaration.galgas", 141))  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 129)) ;
    {
    ioArgument_ioContext.mProperty_mTypeMap.setter_insertType (object->mProperty_mOpaqueTypeName, var_opaqueType_5712, inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 143)) ;
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
  result_outRepresentation = function_registerGroupNameFromOmnibusName (object->mProperty_mRegisterGroupList.getter_mRegisterGroupNameAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 304)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 304)).getter_string (SOURCE_FILE ("declaration-control-register.galgas", 304)) ;
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
  result_result = object->mProperty_mRegisterGroupList.getter_mRegisterGroupNameAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 310)).getter_location (SOURCE_FILE ("declaration-control-register.galgas", 310)) ;
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
  GALGAS_lstring var_nodeName_12262 = function_registerGroupNameFromOmnibusName (object->mProperty_mRegisterGroupList.getter_mRegisterGroupNameAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 316)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 316)) ;
  {
  const GALGAS_controlRegisterGroupDeclarationAST temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (var_nodeName_12262, temp_0, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 318)) ;
  }
  cEnumerator_controlRegisterDeclarationList enumerator_12458 (object->mProperty_mRegisters, kENUMERATION_UP) ;
  while (enumerator_12458.hasCurrentObject ()) {
    {
    ioArgument_ioGraph.setter_addEdge (var_nodeName_12262, enumerator_12458.current (HERE).getter_mRegisterTypeName (HERE) COMMA_SOURCE_FILE ("declaration-control-register.galgas", 322)) ;
    }
    GALGAS_stringlist var_split_12654 = enumerator_12458.current (HERE).getter_mRegisterTypeName (HERE).getter_string (HERE).getter_componentsSeparatedByString (GALGAS_string ("uint") COMMA_SOURCE_FILE ("declaration-control-register.galgas", 324)) ;
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      GALGAS_bool test_2 = GALGAS_bool (kIsEqual, var_split_12654.getter_length (SOURCE_FILE ("declaration-control-register.galgas", 325)).objectCompare (GALGAS_uint ((uint32_t) 2U))) ;
      if (kBoolTrue == test_2.boolEnum ()) {
        test_2 = var_split_12654.getter_mValueAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 325)).getter_isDecimalUnsignedNumber (SOURCE_FILE ("declaration-control-register.galgas", 325)) ;
      }
      test_1 = test_2.boolEnum () ;
      if (kBoolTrue == test_1) {
        GALGAS_uint var_n_12816 = var_split_12654.getter_mValueAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 326)).getter_decimalUnsignedNumber (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 326)) ;
        enumGalgasBool test_3 = kBoolTrue ;
        if (kBoolTrue == test_3) {
          test_3 = GALGAS_bool (kIsStrictSup, var_n_12816.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
          if (kBoolTrue == test_3) {
            GALGAS_lstring var_bitSizeTypeName_12915 = GALGAS_lstring::constructor_new (GALGAS_string ("uint").add_operation (var_n_12816.substract_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 328)).getter_significantBitCount (SOURCE_FILE ("declaration-control-register.galgas", 328)).getter_string (SOURCE_FILE ("declaration-control-register.galgas", 328)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 328)), enumerator_12458.current (HERE).getter_mRegisterTypeName (HERE).getter_location (SOURCE_FILE ("declaration-control-register.galgas", 328))  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 328)) ;
            {
            ioArgument_ioGraph.setter_addEdge (var_nodeName_12262, var_bitSizeTypeName_12915 COMMA_SOURCE_FILE ("declaration-control-register.galgas", 329)) ;
            }
          }
        }
      }
    }
    cEnumerator_controlRegisterBitSliceList enumerator_13157 (enumerator_12458.current (HERE).getter_mRegisterBitSliceList (HERE), kENUMERATION_UP) ;
    while (enumerator_13157.hasCurrentObject ()) {
      switch (enumerator_13157.current_mRegisterBitSlice (HERE).enumValue ()) {
      case GALGAS_controlRegisterBitSlice::kNotBuilt:
        break ;
      case GALGAS_controlRegisterBitSlice::kEnum_unusedBits:
        {
        }
        break ;
      case GALGAS_controlRegisterBitSlice::kEnum_namedBit:
        {
          const cEnumAssociatedValues_controlRegisterBitSlice_namedBit * extractPtr_13367 = (const cEnumAssociatedValues_controlRegisterBitSlice_namedBit *) (enumerator_13157.current_mRegisterBitSlice (HERE).unsafePointer ()) ;
          const GALGAS_lbigint extractedValue_count = extractPtr_13367->mAssociatedValue1 ;
          enumGalgasBool test_4 = kBoolTrue ;
          if (kBoolTrue == test_4) {
            test_4 = GALGAS_bool (kIsSupOrEqual, extractedValue_count.getter_bigint (HERE).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 337)))).boolEnum () ;
            if (kBoolTrue == test_4) {
              {
              extensionSetter_noteUINTType (ioArgument_ioGraph, extractedValue_count.getter_bigint (HERE).getter_uint (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 338)), extractedValue_count.getter_location (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 338)) ;
              }
            }
          }
        }
        break ;
      }
      enumerator_13157.gotoNextObject () ;
    }
    GALGAS_lstring var_rootNode_13441 = GALGAS_lstring::constructor_new (function_configurationNodeNameForPrecedenceGraph (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 343)), var_nodeName_12262.getter_location (HERE)  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 343)) ;
    {
    ioArgument_ioGraph.setter_addEdge (var_nodeName_12262, var_rootNode_13441 COMMA_SOURCE_FILE ("declaration-control-register.galgas", 344)) ;
    }
    cEnumerator_controlRegisterNameListAST enumerator_13654 (enumerator_12458.current (HERE).getter_mRegisterArrayList (HERE), kENUMERATION_UP) ;
    while (enumerator_13654.hasCurrentObject ()) {
      switch (enumerator_13654.current (HERE).getter_mControlRegisterKind (HERE).enumValue ()) {
      case GALGAS_controlRegisterKind::kNotBuilt:
        break ;
      case GALGAS_controlRegisterKind::kEnum_scalar:
        {
        }
        break ;
      case GALGAS_controlRegisterKind::kEnum_registerArray:
        {
          const cEnumAssociatedValues_controlRegisterKind_registerArray * extractPtr_13971 = (const cEnumAssociatedValues_controlRegisterKind_registerArray *) (enumerator_13654.current (HERE).getter_mControlRegisterKind (HERE).unsafePointer ()) ;
          const GALGAS_expressionAST extractedValue_arraySize = extractPtr_13971->mAssociatedValue0 ;
          const GALGAS_expressionAST extractedValue_arrayElementSize = extractPtr_13971->mAssociatedValue2 ;
          callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) extractedValue_arraySize.ptr (), var_nodeName_12262, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 350)) ;
          callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) extractedValue_arrayElementSize.ptr (), var_nodeName_12262, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 351)) ;
        }
        break ;
      }
      enumerator_13654.gotoNextObject () ;
    }
    enumerator_12458.gotoNextObject () ;
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
                                  GALGAS_omnibusType & outArgument_outRegisterType,
                                  GALGAS_uint & outArgument_outRegisterBitCount,
                                  C_Compiler * inCompiler
                                  COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outRegisterType.drop () ; // Release 'out' argument
  outArgument_outRegisterBitCount.drop () ; // Release 'out' argument
  ioArgument_ioContext.getter_mTypeMap (HERE).method_searchKey (constinArgument_inRegisterTypeName, outArgument_outRegisterType, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 400)) ;
  switch (outArgument_outRegisterType.getter_kind (HERE).enumValue ()) {
  case GALGAS_typeKind::kNotBuilt:
    break ;
  case GALGAS_typeKind::kEnum_integer:
    {
      const cEnumAssociatedValues_typeKind_integer * extractPtr_15909 = (const cEnumAssociatedValues_typeKind_integer *) (outArgument_outRegisterType.getter_kind (HERE).unsafePointer ()) ;
      const GALGAS_uint extractedValue_bitCount = extractPtr_15909->mAssociatedValue3 ;
      outArgument_outRegisterBitCount = extractedValue_bitCount ;
    }
    break ;
  case GALGAS_typeKind::kEnum_boolean:
  case GALGAS_typeKind::kEnum_void:
    {
      TC_Array <C_FixItDescription> fixItArray0 ;
      inCompiler->emitSemanticError (constinArgument_inRegisterTypeName.getter_location (SOURCE_FILE ("declaration-control-register.galgas", 405)), GALGAS_string ("a register should be an $intXX or an $uintXX"), fixItArray0  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 405)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_enumeration:
    {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inRegisterTypeName.getter_location (SOURCE_FILE ("declaration-control-register.galgas", 407)), GALGAS_string ("a register should be an $intXX or an $uintXX"), fixItArray1  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 407)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_literalString:
    {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (constinArgument_inRegisterTypeName.getter_location (SOURCE_FILE ("declaration-control-register.galgas", 409)), GALGAS_string ("a register should be an $intXX or an $uintXX"), fixItArray2  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 409)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_staticInteger:
    {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (constinArgument_inRegisterTypeName.getter_location (SOURCE_FILE ("declaration-control-register.galgas", 411)), GALGAS_string ("a register should be an $intXX or an $uintXX"), fixItArray3  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 411)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_structure:
    {
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (constinArgument_inRegisterTypeName.getter_location (SOURCE_FILE ("declaration-control-register.galgas", 413)), GALGAS_string ("a register should be an $intXX or an $uintXX"), fixItArray4  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 413)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_syncTool:
    {
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (constinArgument_inRegisterTypeName.getter_location (SOURCE_FILE ("declaration-control-register.galgas", 415)), GALGAS_string ("a register should be an $intXX or an $uintXX"), fixItArray5  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 415)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_opaque:
    {
      TC_Array <C_FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (constinArgument_inRegisterTypeName.getter_location (SOURCE_FILE ("declaration-control-register.galgas", 417)), GALGAS_string ("a register should be an $intXX or an $uintXX"), fixItArray6  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 417)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_staticArrayType:
    {
      TC_Array <C_FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (constinArgument_inRegisterTypeName.getter_location (SOURCE_FILE ("declaration-control-register.galgas", 419)), GALGAS_string ("a register should be an $intXX or an $uintXX"), fixItArray7  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 419)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_dynamicArrayType:
    {
      TC_Array <C_FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (constinArgument_inRegisterTypeName.getter_location (SOURCE_FILE ("declaration-control-register.galgas", 421)), GALGAS_string ("a register should be an $intXX or an $uintXX"), fixItArray8  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 421)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_function:
    {
      TC_Array <C_FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (constinArgument_inRegisterTypeName.getter_location (SOURCE_FILE ("declaration-control-register.galgas", 423)), GALGAS_string ("a register should be an $intXX or an $uintXX"), fixItArray9  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 423)) ;
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
                                           GALGAS_omnibusType & ioArgument_ioRegisterType,
                                           const GALGAS_uint constinArgument_inRegisterBitCount,
                                           GALGAS_controlRegisterFieldMap & outArgument_outRegisterFieldMap,
                                           GALGAS_sliceMap & outArgument_outRegisterBitSliceMap,
                                           GALGAS_controlRegisterFieldList & outArgument_outControlRegisterFieldList,
                                           C_Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outRegisterFieldMap.drop () ; // Release 'out' argument
  outArgument_outRegisterBitSliceMap.drop () ; // Release 'out' argument
  outArgument_outControlRegisterFieldList.drop () ; // Release 'out' argument
  outArgument_outRegisterFieldMap = GALGAS_controlRegisterFieldMap::constructor_emptyMap (SOURCE_FILE ("declaration-control-register.galgas", 440)) ;
  outArgument_outRegisterBitSliceMap = GALGAS_sliceMap::constructor_emptyMap (SOURCE_FILE ("declaration-control-register.galgas", 441)) ;
  outArgument_outControlRegisterFieldList = GALGAS_controlRegisterFieldList::constructor_emptyList (SOURCE_FILE ("declaration-control-register.galgas", 442)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsStrictSup, constinArgument_inRegisterBitSliceList.getter_length (SOURCE_FILE ("declaration-control-register.galgas", 443)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_uint var_shiftCount_17893 = GALGAS_uint ((uint32_t) 0U) ;
      cEnumerator_controlRegisterBitSliceList enumerator_17936 (constinArgument_inRegisterBitSliceList, kENUMERATION_DOWN) ;
      while (enumerator_17936.hasCurrentObject ()) {
        switch (enumerator_17936.current_mRegisterBitSlice (HERE).enumValue ()) {
        case GALGAS_controlRegisterBitSlice::kNotBuilt:
          break ;
        case GALGAS_controlRegisterBitSlice::kEnum_unusedBits:
          {
            const cEnumAssociatedValues_controlRegisterBitSlice_unusedBits * extractPtr_18131 = (const cEnumAssociatedValues_controlRegisterBitSlice_unusedBits *) (enumerator_17936.current_mRegisterBitSlice (HERE).unsafePointer ()) ;
            const GALGAS_lbigint extractedValue_count = extractPtr_18131->mAssociatedValue0 ;
            var_shiftCount_17893 = var_shiftCount_17893.add_operation (extractedValue_count.getter_bigint (HERE).getter_uint (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 448)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 448)) ;
            outArgument_outControlRegisterFieldList.addAssign_operation (extractedValue_count.getter_bigint (HERE).getter_uint (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 449)), GALGAS_string ("\xE2""\x80""\x94""")  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 449)) ;
          }
          break ;
        case GALGAS_controlRegisterBitSlice::kEnum_namedBit:
          {
            const cEnumAssociatedValues_controlRegisterBitSlice_namedBit * extractPtr_18652 = (const cEnumAssociatedValues_controlRegisterBitSlice_namedBit *) (enumerator_17936.current_mRegisterBitSlice (HERE).unsafePointer ()) ;
            const GALGAS_lstring extractedValue_name = extractPtr_18652->mAssociatedValue0 ;
            const GALGAS_lbigint extractedValue_count = extractPtr_18652->mAssociatedValue1 ;
            GALGAS_uint var_bitCount_18205 = extractedValue_count.getter_bigint (HERE).getter_uint (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 451)) ;
            outArgument_outControlRegisterFieldList.addAssign_operation (var_bitCount_18205, extractedValue_name.getter_string (HERE)  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 452)) ;
            {
            outArgument_outRegisterFieldMap.setter_insertKey (extractedValue_name, var_shiftCount_17893, var_bitCount_18205, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 453)) ;
            }
            GALGAS_bigint var_mask_18441 = GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 459)).left_shift_operation (var_bitCount_18205 COMMA_SOURCE_FILE ("declaration-control-register.galgas", 459)).substract_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 459)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 459)).left_shift_operation (var_shiftCount_17893 COMMA_SOURCE_FILE ("declaration-control-register.galgas", 459)) ;
            {
            outArgument_outRegisterBitSliceMap.setter_insertKey (extractedValue_name, GALGAS_llvmBinaryOperation::constructor_and (SOURCE_FILE ("declaration-control-register.galgas", 462)), var_mask_18441, ioArgument_ioRegisterType, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 460)) ;
            }
            var_shiftCount_17893 = var_shiftCount_17893.add_operation (var_bitCount_18205, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 466)) ;
          }
          break ;
        }
        enumerator_17936.gotoNextObject () ;
      }
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = GALGAS_bool (kIsNotEqual, constinArgument_inRegisterBitCount.objectCompare (var_shiftCount_17893)).boolEnum () ;
        if (kBoolTrue == test_1) {
          TC_Array <C_FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticError (constinArgument_inEndOfBitSliceLocation, GALGAS_string ("total bit slice count is ").add_operation (var_shiftCount_17893.getter_string (SOURCE_FILE ("declaration-control-register.galgas", 472)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 472)).add_operation (GALGAS_string (" (should be "), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 472)).add_operation (constinArgument_inRegisterBitCount.getter_string (SOURCE_FILE ("declaration-control-register.galgas", 472)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 472)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 472)), fixItArray2  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 471)) ;
        }
      }
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
                                                                               GALGAS_controlRegisterUserAccesMapAST & ioArgument_ioControlRegisterUserAccesMapAST,
                                                                               GALGAS_userLLVMTypeDefinitionListIR & /* ioArgument_ioUserLLVMTypeDefinitionListIR */,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_controlRegisterGroupDeclarationAST * object = (const cPtr_controlRegisterGroupDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_controlRegisterGroupDeclarationAST) ;
  GALGAS_controlRegisterMap var_regMap_23518 = GALGAS_controlRegisterMap::constructor_emptyMap (SOURCE_FILE ("declaration-control-register.galgas", 589)) ;
  cEnumerator_controlRegisterDeclarationList enumerator_23547 (object->mProperty_mRegisters, kENUMERATION_UP) ;
  while (enumerator_23547.hasCurrentObject ()) {
    extensionMethod_buildControlRegisterMapForGroup (enumerator_23547.current (HERE), ioArgument_ioContext, var_regMap_23518, ioArgument_ioStaticEntityMap, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 591)) ;
    enumerator_23547.gotoNextObject () ;
  }
  cEnumerator_registerGroupListAST enumerator_23720 (object->mProperty_mRegisterGroupList, kENUMERATION_UP) ;
  while (enumerator_23720.hasCurrentObject ()) {
    GALGAS_controlRegisterMap var_registerMap_23759 = var_regMap_23518 ;
    cEnumerator_controlRegisterMap enumerator_23830 (var_regMap_23518, kENUMERATION_UP) ;
    while (enumerator_23830.hasCurrentObject ()) {
      GALGAS_string var_key_23847 = GALGAS_string ("#").add_operation (enumerator_23720.current (HERE).getter_mRegisterGroupName (HERE).getter_string (SOURCE_FILE ("declaration-control-register.galgas", 601)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 601)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 601)).add_operation (enumerator_23830.current (HERE).getter_lkey (HERE).getter_string (SOURCE_FILE ("declaration-control-register.galgas", 601)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 601)) ;
      enumGalgasBool test_0 = kBoolTrue ;
      if (kBoolTrue == test_0) {
        test_0 = ioArgument_ioControlRegisterUserAccesMapAST.getter_hasKey (var_key_23847 COMMA_SOURCE_FILE ("declaration-control-register.galgas", 602)).boolEnum () ;
        if (kBoolTrue == test_0) {
          {
          var_registerMap_23759.setter_setMUserAccessForKey (GALGAS_bool (true), enumerator_23830.current (HERE).getter_lkey (HERE).getter_string (SOURCE_FILE ("declaration-control-register.galgas", 603)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 603)) ;
          }
          {
          ioArgument_ioControlRegisterUserAccesMapAST.setter_removeKey (var_key_23847.getter_nowhere (SOURCE_FILE ("declaration-control-register.galgas", 604)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 604)) ;
          }
        }
      }
      enumerator_23830.gotoNextObject () ;
    }
    switch (enumerator_23720.current (HERE).getter_mControlRegisterGroupKind (HERE).enumValue ()) {
    case GALGAS_controlRegisterGroupKindAST::kNotBuilt:
      break ;
    case GALGAS_controlRegisterGroupKindAST::kEnum_single:
      {
        const cEnumAssociatedValues_controlRegisterGroupKindAST_single * extractPtr_24381 = (const cEnumAssociatedValues_controlRegisterGroupKindAST_single *) (enumerator_23720.current (HERE).getter_mControlRegisterGroupKind (HERE).unsafePointer ()) ;
        const GALGAS_lbigint extractedValue_baseAddress = extractPtr_24381->mAssociatedValue0 ;
        GALGAS_registerGroupKind var_groupKind_24221 = GALGAS_registerGroupKind::constructor_single (extractedValue_baseAddress.getter_bigint (SOURCE_FILE ("declaration-control-register.galgas", 610))  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 610)) ;
        {
        ioArgument_ioContext.mProperty_mControlRegisterGroupMap.setter_insertKey (enumerator_23720.current (HERE).getter_mRegisterGroupName (HERE), var_groupKind_24221, var_registerMap_23759, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 611)) ;
        }
      }
      break ;
    case GALGAS_controlRegisterGroupKindAST::kEnum_groupArray:
      {
        const cEnumAssociatedValues_controlRegisterGroupKindAST_groupArray * extractPtr_25675 = (const cEnumAssociatedValues_controlRegisterGroupKindAST_groupArray *) (enumerator_23720.current (HERE).getter_mControlRegisterGroupKind (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_groupSizeExpression = extractPtr_25675->mAssociatedValue0 ;
        const GALGAS_location extractedValue_groupSizeExpressionLocation = extractPtr_25675->mAssociatedValue1 ;
        const GALGAS_lbigintlist extractedValue_baseAddresses = extractPtr_25675->mAssociatedValue2 ;
        GALGAS_objectIR var_groupArraySizeExpressionResult_24773 ;
        {
        routine_computeStaticExpression (ioArgument_ioContext, ioArgument_ioStaticEntityMap, extractedValue_groupSizeExpression, extractedValue_groupSizeExpressionLocation, GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-control-register.galgas", 618)), var_groupArraySizeExpressionResult_24773, inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 613)) ;
        }
        GALGAS_bigint var_groupSize_24805 ;
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          test_1 = var_groupArraySizeExpressionResult_24773.getter_isLiteralInteger (SOURCE_FILE ("declaration-control-register.galgas", 622)).operator_not (SOURCE_FILE ("declaration-control-register.galgas", 622)).boolEnum () ;
          if (kBoolTrue == test_1) {
            TC_Array <C_FixItDescription> fixItArray2 ;
            inCompiler->emitSemanticError (extractedValue_groupSizeExpressionLocation, GALGAS_string ("control register group size is not a static integer expression"), fixItArray2  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 623)) ;
            var_groupSize_24805.drop () ; // Release error dropped variable
          }
        }
        if (kBoolFalse == test_1) {
          GALGAS_omnibusType joker_25082_1 ; // Joker input parameter
          var_groupArraySizeExpressionResult_24773.method_literalInteger (joker_25082_1, var_groupSize_24805, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 627)) ;
        }
        enumGalgasBool test_3 = kBoolTrue ;
        if (kBoolTrue == test_3) {
          test_3 = GALGAS_bool (kIsNotEqual, var_groupSize_24805.getter_uint (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 629)).objectCompare (extractedValue_baseAddresses.getter_length (SOURCE_FILE ("declaration-control-register.galgas", 629)))).boolEnum () ;
          if (kBoolTrue == test_3) {
            TC_Array <C_FixItDescription> fixItArray4 ;
            inCompiler->emitSemanticError (extractedValue_groupSizeExpressionLocation, GALGAS_string ("the group size is ").add_operation (var_groupSize_24805.getter_string (SOURCE_FILE ("declaration-control-register.galgas", 631)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 631)).add_operation (GALGAS_string (", but "), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 631)).add_operation (extractedValue_baseAddresses.getter_length (SOURCE_FILE ("declaration-control-register.galgas", 631)).getter_string (SOURCE_FILE ("declaration-control-register.galgas", 631)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 631)).add_operation (GALGAS_string (" base addresses are defined"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 631)), fixItArray4  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 630)) ;
          }
        }
        GALGAS_registerGroupKind var_groupKind_25352 = GALGAS_registerGroupKind::constructor_arrayGroup (extractedValue_baseAddresses  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 633)) ;
        {
        ioArgument_ioContext.mProperty_mControlRegisterGroupMap.setter_insertKey (enumerator_23720.current (HERE).getter_mRegisterGroupName (HERE), var_groupKind_25352, var_registerMap_23759, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 634)) ;
        }
        ioArgument_ioDecoratedDeclarationList.addAssign_operation (GALGAS_decoratedControlRegisterArrayGroupDeclaration::constructor_new (enumerator_23720.current (HERE).getter_mRegisterGroupName (HERE), extractedValue_baseAddresses  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 635))  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 635)) ;
      }
      break ;
    }
    enumerator_23720.gotoNextObject () ;
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
  ioArgument_ioIntermediateCodeStruct.mProperty_mControlRegisterGroupArrayList.addAssign_operation (object->mProperty_mGroupName, object->mProperty_mBaseAddresses  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 659)) ;
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
  GALGAS_string var_byAddressFilePath_28953 = constinArgument_inSourceFile.getter_string (HERE).add_operation (GALGAS_string (".control-registers-sorted-by-address.html"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 720)) ;
  GALGAS_string var_byNameFilePath_29042 = constinArgument_inSourceFile.getter_string (HERE).add_operation (GALGAS_string (".control-registers-sorted-by-name.html"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 721)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (gOption_omnibus_5F_options_emitControlRegisterHTMLDumpFile.getter_value ()).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_controlRegisterByAddress var_controlRegisterByAddress_29235 = GALGAS_controlRegisterByAddress::constructor_emptySortedList (SOURCE_FILE ("declaration-control-register.galgas", 723)) ;
      GALGAS_controlRegisterByName var_controlRegisterByName_29289 = GALGAS_controlRegisterByName::constructor_emptySortedList (SOURCE_FILE ("declaration-control-register.galgas", 724)) ;
      GALGAS_uint var_controlRegisterCount_29325 = GALGAS_uint ((uint32_t) 0U) ;
      cEnumerator_controlRegisterGroupMap enumerator_29376 (constinArgument_inControlRegisterGroupMap, kENUMERATION_UP) ;
      while (enumerator_29376.hasCurrentObject ()) {
        switch (enumerator_29376.current_mGroupKind (HERE).enumValue ()) {
        case GALGAS_registerGroupKind::kNotBuilt:
          break ;
        case GALGAS_registerGroupKind::kEnum_single:
          {
            const cEnumAssociatedValues_registerGroupKind_single * extractPtr_29691 = (const cEnumAssociatedValues_registerGroupKind_single *) (enumerator_29376.current_mGroupKind (HERE).unsafePointer ()) ;
            const GALGAS_bigint extractedValue_groupBaseAddress = extractPtr_29691->mAssociatedValue0 ;
            {
            routine_buildControlRegisterMaps (enumerator_29376.current_mControlRegisterMap (HERE), extractedValue_groupBaseAddress, enumerator_29376.current_lkey (HERE).getter_string (HERE), var_controlRegisterByAddress_29235, var_controlRegisterByName_29289, var_controlRegisterCount_29325, inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 729)) ;
            }
          }
          break ;
        case GALGAS_registerGroupKind::kEnum_arrayGroup:
          {
            const cEnumAssociatedValues_registerGroupKind_arrayGroup * extractPtr_30081 = (const cEnumAssociatedValues_registerGroupKind_arrayGroup *) (enumerator_29376.current_mGroupKind (HERE).unsafePointer ()) ;
            const GALGAS_lbigintlist extractedValue_baseAddresses = extractPtr_30081->mAssociatedValue0 ;
            cEnumerator_lbigintlist enumerator_29784 (extractedValue_baseAddresses, kENUMERATION_UP) ;
            GALGAS_uint index_29756 ((uint32_t) 0) ;
            while (enumerator_29784.hasCurrentObject ()) {
              {
              routine_buildControlRegisterMaps (enumerator_29376.current_mControlRegisterMap (HERE), enumerator_29784.current_mValue (HERE).getter_bigint (HERE), enumerator_29376.current_lkey (HERE).getter_string (HERE).add_operation (GALGAS_string ("["), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 742)).add_operation (index_29756.getter_string (SOURCE_FILE ("declaration-control-register.galgas", 742)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 742)).add_operation (GALGAS_string ("]"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 742)), var_controlRegisterByAddress_29235, var_controlRegisterByName_29289, var_controlRegisterCount_29325, inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 739)) ;
              }
              enumerator_29784.gotoNextObject () ;
              index_29756.increment_operation (inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 738)) ;
            }
          }
          break ;
        }
        enumerator_29376.gotoNextObject () ;
      }
      GALGAS_string var_typeDumpString_30122 = GALGAS_string (filewrapperTemplate_controlRegisterDumpGenerationTemplate_dumpByAddress (inCompiler, constinArgument_inSourceFile.getter_string (HERE).getter_lastPathComponent (SOURCE_FILE ("declaration-control-register.galgas", 751)), var_controlRegisterCount_29325, var_controlRegisterByAddress_29235 COMMA_SOURCE_FILE ("declaration-control-register.galgas", 750))) ;
      GALGAS_bool joker_30369 ; // Joker input parameter
      var_typeDumpString_30122.method_writeToFileWhenDifferentContents (var_byAddressFilePath_28953, joker_30369, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 755)) ;
      var_typeDumpString_30122 = GALGAS_string (filewrapperTemplate_controlRegisterDumpGenerationTemplate_dumpByName (inCompiler, constinArgument_inSourceFile.getter_string (HERE).getter_lastPathComponent (SOURCE_FILE ("declaration-control-register.galgas", 757)), var_controlRegisterCount_29325, var_controlRegisterByName_29289 COMMA_SOURCE_FILE ("declaration-control-register.galgas", 756))) ;
      GALGAS_bool joker_30628 ; // Joker input parameter
      var_typeDumpString_30122.method_writeToFileWhenDifferentContents (var_byNameFilePath_29042, joker_30628, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 761)) ;
    }
  }
  if (kBoolFalse == test_0) {
    {
    GALGAS_string::class_method_deleteFileIfExists (var_byAddressFilePath_28953, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 763)) ;
    }
    {
    GALGAS_string::class_method_deleteFileIfExists (var_byNameFilePath_29042, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 764)) ;
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
  cEnumerator_controlRegisterMap enumerator_31197 (constinArgument_inControlRegisterMap, kENUMERATION_UP) ;
  while (enumerator_31197.hasCurrentObject ()) {
    GALGAS_bigint var_registerAddress_31224 = constinArgument_inGroupBaseAddress.add_operation (enumerator_31197.current_mAddressOffset (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 779)) ;
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GALGAS_bool (kIsEqual, enumerator_31197.current_mArraySize (HERE).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_0) {
        ioArgument_ioControlRegisterCount = ioArgument_ioControlRegisterCount.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 781)) ;
        GALGAS_string var_registerName_31379 = constinArgument_inGroupName.add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 782)).add_operation (enumerator_31197.current_lkey (HERE).getter_string (SOURCE_FILE ("declaration-control-register.galgas", 782)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 782)) ;
        GALGAS_string var_s_31422 = GALGAS_string ("<tr class=\"result_line\"><td class=\"name\">").add_operation (var_registerName_31379, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 783)).add_operation (GALGAS_string ("</td><td class=\"type\">"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 784)).add_operation (enumerator_31197.current_mType (HERE).getter_omnibusTypeDescriptionName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 785)).add_operation (GALGAS_string ("</td><td class=\"address\">"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 785)).add_operation (var_registerAddress_31224.getter_hexStringSeparatedBy (GALGAS_char (TO_UNICODE (95)), GALGAS_uint ((uint32_t) 4U), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 786)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 785)).add_operation (GALGAS_string ("</td><td>"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 786)) ;
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          test_1 = GALGAS_bool (kIsStrictSup, enumerator_31197.current_mControlRegisterFieldList (HERE).getter_length (SOURCE_FILE ("declaration-control-register.galgas", 787)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
          if (kBoolTrue == test_1) {
            var_s_31422.plusAssign_operation(GALGAS_string ("<table class=\"fields\">").add_operation (GALGAS_string ("<tr>"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 788)).add_operation (function_fieldIndexColumns (enumerator_31197.current_mRegisterBitCount (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 789)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 789)).add_operation (GALGAS_string ("</tr>"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 789)).add_operation (GALGAS_string ("<tr>"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 789)), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 788)) ;
            cEnumerator_controlRegisterFieldList enumerator_31915 (enumerator_31197.current_mControlRegisterFieldList (HERE), kENUMERATION_DOWN) ;
            while (enumerator_31915.hasCurrentObject ()) {
              var_s_31422.plusAssign_operation(GALGAS_string ("<td class=\"fields\" colspan=\"").add_operation (enumerator_31915.current_mFieldBitCount (HERE).getter_string (SOURCE_FILE ("declaration-control-register.galgas", 792)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 792)).add_operation (GALGAS_string ("\">"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 792)).add_operation (enumerator_31915.current_mFieldName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 792)).add_operation (GALGAS_string ("</td>"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 792)), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 792)) ;
              enumerator_31915.gotoNextObject () ;
            }
            var_s_31422.plusAssign_operation(GALGAS_string ("</tr></table>"), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 794)) ;
          }
        }
        var_s_31422.plusAssign_operation(GALGAS_string ("</td></tr>\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 796)) ;
        ioArgument_ioControlRegisterByAddress.addAssign_operation (var_registerAddress_31224, var_s_31422  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 797)) ;
        ioArgument_ioControlRegisterByName.addAssign_operation (var_registerAddress_31224, var_s_31422, var_registerName_31379  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 798)) ;
      }
    }
    if (kBoolFalse == test_0) {
      ioArgument_ioControlRegisterCount = ioArgument_ioControlRegisterCount.add_operation (enumerator_31197.current_mArraySize (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 800)) ;
      cEnumerator_uintlist enumerator_32363 (function_arrayIndexListFor (enumerator_31197.current_mArraySize (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 801)), kENUMERATION_UP) ;
      while (enumerator_32363.hasCurrentObject ()) {
        GALGAS_bigint var_address_32386 = var_registerAddress_31224.add_operation (enumerator_32363.current_mValue (HERE).multiply_operation (enumerator_31197.current_mElementArraySize (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 802)).getter_bigint (SOURCE_FILE ("declaration-control-register.galgas", 802)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 802)) ;
        GALGAS_string var_registerName_32462 = constinArgument_inGroupName.add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 803)).add_operation (enumerator_31197.current_lkey (HERE).getter_string (SOURCE_FILE ("declaration-control-register.galgas", 803)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 803)).add_operation (GALGAS_string ("["), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 803)).add_operation (enumerator_32363.current_mValue (HERE).getter_string (SOURCE_FILE ("declaration-control-register.galgas", 803)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 803)).add_operation (GALGAS_string ("]"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 803)) ;
        GALGAS_string var_s_32537 = GALGAS_string ("<tr class=\"result_line\"><td class=\"name\">").add_operation (var_registerName_32462, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 804)).add_operation (GALGAS_string ("</td><td class=\"type\">"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 805)).add_operation (enumerator_31197.current_mType (HERE).getter_omnibusTypeDescriptionName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 806)).add_operation (GALGAS_string ("</td><td class=\"address\">"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 806)).add_operation (var_address_32386.getter_hexStringSeparatedBy (GALGAS_char (TO_UNICODE (95)), GALGAS_uint ((uint32_t) 4U), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 807)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 806)).add_operation (GALGAS_string ("</td><td>"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 807)) ;
        enumGalgasBool test_2 = kBoolTrue ;
        if (kBoolTrue == test_2) {
          test_2 = GALGAS_bool (kIsStrictSup, enumerator_31197.current_mControlRegisterFieldList (HERE).getter_length (SOURCE_FILE ("declaration-control-register.galgas", 809)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
          if (kBoolTrue == test_2) {
            var_s_32537.plusAssign_operation(GALGAS_string ("<table class=\"fields\">").add_operation (GALGAS_string ("<tr>"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 810)).add_operation (function_fieldIndexColumns (enumerator_31197.current_mRegisterBitCount (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 811)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 811)).add_operation (GALGAS_string ("</tr><tr>"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 811)), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 810)) ;
            cEnumerator_controlRegisterFieldList enumerator_33029 (enumerator_31197.current_mControlRegisterFieldList (HERE), kENUMERATION_DOWN) ;
            while (enumerator_33029.hasCurrentObject ()) {
              var_s_32537.plusAssign_operation(GALGAS_string ("<td class=\"fields\" colspan=\"").add_operation (enumerator_33029.current_mFieldBitCount (HERE).getter_string (SOURCE_FILE ("declaration-control-register.galgas", 813)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 813)).add_operation (GALGAS_string ("\">"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 813)).add_operation (enumerator_33029.current_mFieldName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 813)).add_operation (GALGAS_string ("</td>"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 813)), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 813)) ;
              enumerator_33029.gotoNextObject () ;
            }
            var_s_32537.plusAssign_operation(GALGAS_string ("</tr></table>"), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 815)) ;
          }
        }
        var_s_32537.plusAssign_operation(GALGAS_string ("</td></tr>\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 817)) ;
        ioArgument_ioControlRegisterByAddress.addAssign_operation (var_registerAddress_31224, var_s_32537  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 818)) ;
        ioArgument_ioControlRegisterByName.addAssign_operation (var_registerAddress_31224, var_s_32537, var_registerName_32462  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 819)) ;
        enumerator_32363.gotoNextObject () ;
      }
    }
    enumerator_31197.gotoNextObject () ;
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
    "<tr><td class=\"result_title\">Control Register Name</td><td class=\"result_title\">OMNIBUS Type</td><td class=\"result_title\">Address</td><td class=\"resul"
    "t_title\">Value</td></tr>\n" ;
  GALGAS_uint index_1541_ (0) ;
  if (in_CONTROL_5F_REGISTER_5F_SORTED_5F_BY_5F_NAME.isValid ()) {
    cEnumerator_controlRegisterByName enumerator_1541 (in_CONTROL_5F_REGISTER_5F_SORTED_5F_BY_5F_NAME, kENUMERATION_UP) ;
    while (enumerator_1541.hasCurrentObject ()) {
      result << enumerator_1541.current_mHTML (HERE).stringValue () ;
      index_1541_.increment () ;
      enumerator_1541.gotoNextObject () ;
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
    "<tr><td class=\"result_title\">Control Register Name</td><td class=\"result_title\">OMNIBUS Type</td><td class=\"result_title\">Address</td><td class=\"resul"
    "t_title\">Value</td></tr>\n" ;
  GALGAS_uint index_1553_ (0) ;
  if (in_CONTROL_5F_REGISTER_5F_SORTED_5F_BY_5F_ADDRESS.isValid ()) {
    cEnumerator_controlRegisterByAddress enumerator_1553 (in_CONTROL_5F_REGISTER_5F_SORTED_5F_BY_5F_ADDRESS, kENUMERATION_UP) ;
    while (enumerator_1553.hasCurrentObject ()) {
      result << enumerator_1553.current_mHTML (HERE).stringValue () ;
      index_1553_.increment () ;
      enumerator_1553.gotoNextObject () ;
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
  cEnumerator_range enumerator_34212 (GALGAS_range (GALGAS_uint ((uint32_t) 0U), constinArgument_inBitCount.substract_operation (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 845))), kENUMERATION_DOWN) ;
  while (enumerator_34212.hasCurrentObject ()) {
    result_result.plusAssign_operation(GALGAS_string ("<td class=\"fields\">").add_operation (enumerator_34212.current (HERE).getter_string (SOURCE_FILE ("declaration-control-register.galgas", 846)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 846)).add_operation (GALGAS_string ("</td>"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 846)), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 846)) ;
    enumerator_34212.gotoNextObject () ;
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
  result_result = GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("declaration-control-register.galgas", 853)) ;
  cEnumerator_range enumerator_34497 (GALGAS_range (GALGAS_uint ((uint32_t) 0U), constinArgument_inSize.substract_operation (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 854))), kENUMERATION_UP) ;
  while (enumerator_34497.hasCurrentObject ()) {
    result_result.addAssign_operation (enumerator_34497.current (HERE)  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 855)) ;
    enumerator_34497.gotoNextObject () ;
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
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsNotEqual, object->mProperty_mConstantTypeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      {
      ioArgument_ioGraph.setter_addEdge (object->mProperty_mConstantName, object->mProperty_mConstantTypeName COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 70)) ;
      }
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
  result_outRepresentation = GALGAS_string ("global constant ").add_operation (object->mProperty_mConstantName.getter_string (SOURCE_FILE ("declaration-global-constant.galgas", 79)), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 79)) ;
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
                                                                         GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                         GALGAS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                                         GALGAS_userLLVMTypeDefinitionListIR & /* ioArgument_ioUserLLVMTypeDefinitionListIR */,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_globalConstantDeclarationAST * object = (const cPtr_globalConstantDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_globalConstantDeclarationAST) ;
  GALGAS_bool var_displayValue_4494 = GALGAS_bool (false) ;
  cEnumerator_lstringlist enumerator_4538 (object->mProperty_mAttributeList, kENUMERATION_UP) ;
  while (enumerator_4538.hasCurrentObject ()) {
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GALGAS_bool (kIsNotEqual, enumerator_4538.current_mValue (HERE).getter_string (HERE).objectCompare (GALGAS_string ("display"))).boolEnum () ;
      if (kBoolTrue == test_0) {
        TC_Array <C_FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (enumerator_4538.current_mValue (HERE).getter_location (SOURCE_FILE ("declaration-global-constant.galgas", 100)), GALGAS_string ("attribute should be @display"), fixItArray1  COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 100)) ;
      }
    }
    if (kBoolFalse == test_0) {
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = var_displayValue_4494.boolEnum () ;
        if (kBoolTrue == test_2) {
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (enumerator_4538.current_mValue (HERE).getter_location (SOURCE_FILE ("declaration-global-constant.galgas", 102)), GALGAS_string ("duplicated attribute"), fixItArray3  COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 102)) ;
        }
      }
      if (kBoolFalse == test_2) {
        var_displayValue_4494 = GALGAS_bool (true) ;
      }
    }
    enumerator_4538.gotoNextObject () ;
  }
  GALGAS_objectIR var_expressionResult_5055 ;
  {
  routine_computeStaticExpression (ioArgument_ioContext, ioArgument_ioStaticEntityMap, object->mProperty_mSourceExpression, object->mProperty_mConstantName.getter_location (HERE), object->mProperty_mConstantTypeName, var_expressionResult_5055, inCompiler  COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 108)) ;
  }
  {
  ioArgument_ioContext.mProperty_mGlobalConstantMap.setter_insertKey (object->mProperty_mConstantName, var_expressionResult_5055, inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 117)) ;
  }
  {
  extensionSetter_insertGlobalConstant (ioArgument_ioContext.mProperty_mValuedObjectMap, object->mProperty_mConstantName, var_expressionResult_5055, inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 118)) ;
  }
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = var_displayValue_4494.boolEnum () ;
    if (kBoolTrue == test_4) {
      inCompiler->printMessage (GALGAS_string ("Global constant '").add_operation (object->mProperty_mConstantName.getter_string (SOURCE_FILE ("declaration-global-constant.galgas", 121)), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 121)).add_operation (GALGAS_string ("' = "), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 121)).add_operation (extensionGetter_llvmValue (var_expressionResult_5055, inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 121)), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 121)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 121))  COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 121)) ;
    }
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
  GALGAS_string var_typeDumpFilePath_6011 = constinArgument_inSourceFile.getter_string (HERE).add_operation (GALGAS_string (".global-constants.html"), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 134)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (gOption_omnibus_5F_options_emitGlobalConstantHTMLDumpFile.getter_value ()).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_stringset var_firstLetterSet_6162 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("declaration-global-constant.galgas", 136)) ;
      cEnumerator_globalConstantMap enumerator_6201 (inArgument_inGlobalConstantMap, kENUMERATION_UP) ;
      while (enumerator_6201.hasCurrentObject ()) {
        var_firstLetterSet_6162.addAssign_operation (enumerator_6201.current_lkey (HERE).getter_string (HERE).getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 138)).getter_string (SOURCE_FILE ("declaration-global-constant.galgas", 138))  COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 138)) ;
        enumerator_6201.gotoNextObject () ;
      }
      GALGAS_string var_tableOfTypeString_6309 = GALGAS_string::makeEmptyString () ;
      GALGAS_char var_currentFirstLetter_6343 = GALGAS_char (TO_UNICODE (32)) ;
      cEnumerator_globalConstantMap enumerator_6389 (inArgument_inGlobalConstantMap, kENUMERATION_UP) ;
      while (enumerator_6389.hasCurrentObject ()) {
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          test_1 = GALGAS_bool (kIsNotEqual, var_currentFirstLetter_6343.objectCompare (enumerator_6389.current_lkey (HERE).getter_string (HERE).getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 143)))).boolEnum () ;
          if (kBoolTrue == test_1) {
            var_currentFirstLetter_6343 = enumerator_6389.current_lkey (HERE).getter_string (HERE).getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 144)) ;
            var_tableOfTypeString_6309.plusAssign_operation(GALGAS_string ("<br><a name=\"").add_operation (var_currentFirstLetter_6343.getter_uint (SOURCE_FILE ("declaration-global-constant.galgas", 145)).getter_string (SOURCE_FILE ("declaration-global-constant.galgas", 145)), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 145)).add_operation (GALGAS_string ("\"><b>"), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 145)).add_operation (var_currentFirstLetter_6343.getter_string (SOURCE_FILE ("declaration-global-constant.galgas", 145)), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 145)).add_operation (GALGAS_string ("</b></a><br>"), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 145)), inCompiler  COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 145)) ;
          }
        }
        var_tableOfTypeString_6309.plusAssign_operation(function_linkForGlobalConstant (enumerator_6389.current_lkey (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 147)).add_operation (GALGAS_string ("<br>"), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 147)), inCompiler  COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 147)) ;
        enumerator_6389.gotoNextObject () ;
      }
      GALGAS_string var_typeDumpString_6785 = GALGAS_string (filewrapperTemplate_constantDumpGenerationTemplate_dump (inCompiler, constinArgument_inSourceFile.getter_string (HERE).getter_lastPathComponent (SOURCE_FILE ("declaration-global-constant.galgas", 150)), inArgument_inGlobalConstantMap, var_firstLetterSet_6162, var_tableOfTypeString_6309 COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 149))) ;
      GALGAS_bool joker_7029 ; // Joker input parameter
      var_typeDumpString_6785.method_writeToFileWhenDifferentContents (var_typeDumpFilePath_6011, joker_7029, inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 155)) ;
    }
  }
  if (kBoolFalse == test_0) {
    {
    GALGAS_string::class_method_deleteFileIfExists (var_typeDumpFilePath_6011, inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 157)) ;
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
    "<tr><td class=\"result_title\">Constant Name</td><td class=\"result_title\">OMNIBUS Type</td><td class=\"result_title\">LLVM Type</td><td class=\"result_titl"
    "e\">Value</td></tr>\n" ;
  GALGAS_uint index_1379_ (0) ;
  if (in_GLOBAL_5F_CONSTANT_5F_MAP.isValid ()) {
    cEnumerator_globalConstantMap enumerator_1379 (in_GLOBAL_5F_CONSTANT_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_1379.hasCurrentObject ()) {
      result << "<tr class=\"result_line\"><td><a name=\"" ;
      result << enumerator_1379.current_lkey (HERE).getter_string (HERE).stringValue () ;
      result << "\">" ;
      result << enumerator_1379.current_lkey (HERE).getter_string (HERE).stringValue () ;
      result << "</a></td><td>..<'$" ;
      result << extensionGetter_omnibusTypeDescriptionName (enumerator_1379.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("globalConstantDump.html.galgasTemplate", 66)).stringValue () ;
      result << "</td><td>" ;
      result << extensionGetter_llvmTypeName (enumerator_1379.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("globalConstantDump.html.galgasTemplate", 66)).stringValue () ;
      result << "</td><td>" ;
      result << extensionGetter_llvmName (enumerator_1379.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("globalConstantDump.html.galgasTemplate", 66)).stringValue () ;
      result << "</td></tr>\n" ;
      index_1379_.increment () ;
      enumerator_1379.gotoNextObject () ;
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
  result_result = GALGAS_string ("<a class=\"header_link\" href=\"#").add_operation (constinArgument_inConstantName, inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 176)).add_operation (GALGAS_string ("\">"), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 176)).add_operation (constinArgument_inConstantName, inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 176)).add_operation (GALGAS_string ("</a>"), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 176)) ;
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
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsNotEqual, object->mProperty_mSyncTypeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      {
      ioArgument_ioGraph.setter_addEdge (object->mProperty_mSyncInstanceName, object->mProperty_mSyncTypeName COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 48)) ;
      }
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
                                                                           GALGAS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                                           GALGAS_userLLVMTypeDefinitionListIR & /* ioArgument_ioUserLLVMTypeDefinitionListIR */,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_syncToolInstanceDeclarationAST * object = (const cPtr_syncToolInstanceDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_syncToolInstanceDeclarationAST) ;
  GALGAS_omnibusType var_optionalSyncType_4310 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsEqual, object->mProperty_mSyncTypeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      var_optionalSyncType_4310 = function_voidType (inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 93)) ;
    }
  }
  if (kBoolFalse == test_0) {
    ioArgument_ioContext.getter_mTypeMap (HERE).method_searchKey (object->mProperty_mSyncTypeName, var_optionalSyncType_4310, inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 95)) ;
  }
  GALGAS_objectIR var_expressionResult_4756 ;
  {
  routine_computeStaticExpression (ioArgument_ioContext, ioArgument_ioStaticEntityMap, object->mProperty_mSourceExpression, object->mProperty_mSyncInstanceName.getter_location (SOURCE_FILE ("declaration-global-sync-instance.galgas", 102)), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-global-sync-instance.galgas", 103)), var_expressionResult_4756, inCompiler  COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 98)) ;
  }
  GALGAS_objectIR var_result_4818 = function_checkAssignmentCompatibility (var_expressionResult_4756, var_optionalSyncType_4310, object->mProperty_mSyncInstanceName.getter_location (HERE), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 107)) ;
  {
  ioArgument_ioContext.mProperty_mGlobalSyncInstanceMap.setter_insertKey (object->mProperty_mSyncInstanceName, extensionGetter_type (var_result_4818, inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 116)), var_result_4818, inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 114)) ;
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = extensionGetter_type (var_result_4818, inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 120)).getter_kind (HERE).getter_isSyncTool (SOURCE_FILE ("declaration-global-sync-instance.galgas", 120)).operator_not (SOURCE_FILE ("declaration-global-sync-instance.galgas", 120)).boolEnum () ;
    if (kBoolTrue == test_1) {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (object->mProperty_mSyncInstanceName.getter_location (SOURCE_FILE ("declaration-global-sync-instance.galgas", 121)), GALGAS_string ("the type is not a synchronization tool type"), fixItArray2  COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 121)) ;
    }
  }
  {
  extensionSetter_insertGlobalSyncInstance (ioArgument_ioContext.mProperty_mValuedObjectMap, object->mProperty_mSyncInstanceName, extensionGetter_type (var_result_4818, inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 124)), inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 124)) ;
  }
  ioArgument_ioDecoratedDeclarationList.addAssign_operation (GALGAS_decoratedSyncInstance::constructor_new (object->mProperty_mSyncInstanceName, var_result_4818  COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 126))  COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 126)) ;
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
  ioArgument_ioIntermediateCodeStruct.mProperty_mGlobalSyncInstanceMap.setter_insertKey (object->mProperty_mSyncInstanceName, object->mProperty_mExpressionGeneratedCode, inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 145)) ;
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
  ioArgument_ioGraph.setter_addNode (object->mProperty_mDriverName, temp_0, inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 171)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (object->mProperty_mDriverName, function_typeNameForTypeMapForDriver (object->mProperty_mDriverName, inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 172)) COMMA_SOURCE_FILE ("declaration-driver.galgas", 172)) ;
  }
  cEnumerator_lstringlist enumerator_6051 (object->mProperty_mDriverDependanceList, kENUMERATION_UP) ;
  while (enumerator_6051.hasCurrentObject ()) {
    {
    ioArgument_ioGraph.setter_addEdge (object->mProperty_mDriverName, enumerator_6051.current_mValue (HERE) COMMA_SOURCE_FILE ("declaration-driver.galgas", 174)) ;
    }
    enumerator_6051.gotoNextObject () ;
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
  result_outRepresentation = GALGAS_string ("driver ").add_operation (object->mProperty_mDriverName.getter_string (SOURCE_FILE ("declaration-driver.galgas", 181)), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 181)) ;
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
  result_result = GALGAS_lstring::constructor_new (GALGAS_string ("driver.").add_operation (constinArgument_inDriverName.getter_string (SOURCE_FILE ("declaration-driver.galgas", 195)), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 195)), constinArgument_inDriverName.getter_location (HERE)  COMMA_SOURCE_FILE ("declaration-driver.galgas", 195)) ;
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
//                                     Function 'omnibusTypeSpecificNameForDriver'                                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring function_omnibusTypeSpecificNameForDriver (const GALGAS_lstring & constinArgument_inDriverName,
                                                          C_Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  result_result = GALGAS_lstring::constructor_new (GALGAS_string ("Driver ").add_operation (constinArgument_inDriverName.getter_string (SOURCE_FILE ("declaration-driver.galgas", 201)), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 201)), constinArgument_inDriverName.getter_location (HERE)  COMMA_SOURCE_FILE ("declaration-driver.galgas", 201)) ;
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function introspection                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const C_galgas_type_descriptor * functionArgs_omnibusTypeSpecificNameForDriver [2] = {
  & kTypeDescriptor_GALGAS_lstring,
  NULL
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_object functionWithGenericHeader_omnibusTypeSpecificNameForDriver (C_Compiler * inCompiler,
                                                                                 const cObjectArray & inEffectiveParameterArray,
                                                                                 const GALGAS_location & /* inErrorLocation */
                                                                                 COMMA_LOCATION_ARGS) {
  const GALGAS_lstring operand0 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  return function_omnibusTypeSpecificNameForDriver (operand0,
                                                    inCompiler
                                                    COMMA_THERE).getter_object (THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_galgas_function_descriptor functionDescriptor_omnibusTypeSpecificNameForDriver ("omnibusTypeSpecificNameForDriver",
                                                                                  functionWithGenericHeader_omnibusTypeSpecificNameForDriver,
                                                                                  & kTypeDescriptor_GALGAS_lstring,
                                                                                  1,
                                                                                  functionArgs_omnibusTypeSpecificNameForDriver) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                          Function 'llvmDriverNameFromName'                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring function_llvmDriverNameFromName (const GALGAS_lstring & constinArgument_inDriverName,
                                                C_Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  result_result = GALGAS_lstring::constructor_new (GALGAS_string ("driver$").add_operation (constinArgument_inDriverName.getter_string (SOURCE_FILE ("declaration-driver.galgas", 207)), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 207)), constinArgument_inDriverName.getter_location (HERE)  COMMA_SOURCE_FILE ("declaration-driver.galgas", 207)) ;
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
  result_result = GALGAS_lstring::constructor_new (GALGAS_string ("boot.").add_operation (constinArgument_inDriverName.getter_string (SOURCE_FILE ("declaration-driver.galgas", 213)), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 213)), constinArgument_inDriverName.getter_location (HERE)  COMMA_SOURCE_FILE ("declaration-driver.galgas", 213)) ;
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
  result_result = GALGAS_lstring::constructor_new (GALGAS_string ("startup.").add_operation (constinArgument_inDriverName.getter_string (SOURCE_FILE ("declaration-driver.galgas", 219)), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 219)), constinArgument_inDriverName.getter_location (HERE)  COMMA_SOURCE_FILE ("declaration-driver.galgas", 219)) ;
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
  GALGAS_lstringlist var_driverWithNoDependenceList_9322 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("declaration-driver.galgas", 244)) ;
  cEnumerator_driverDeclarationListAST enumerator_9382 (ioArgument_ioAST.getter_mDriverDeclarationListAST (HERE), kENUMERATION_UP) ;
  while (enumerator_9382.hasCurrentObject ()) {
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GALGAS_bool (kIsEqual, enumerator_9382.current_mDriver (HERE).getter_mDriverDependanceList (HERE).getter_length (SOURCE_FILE ("declaration-driver.galgas", 246)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_0) {
        var_driverWithNoDependenceList_9322.addAssign_operation (enumerator_9382.current_mDriver (HERE).getter_mDriverName (HERE)  COMMA_SOURCE_FILE ("declaration-driver.galgas", 247)) ;
      }
    }
    enumerator_9382.gotoNextObject () ;
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsStrictSup, var_driverWithNoDependenceList_9322.getter_length (SOURCE_FILE ("declaration-driver.galgas", 250)).objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
    if (kBoolTrue == test_1) {
      cEnumerator_lstringlist enumerator_9624 (var_driverWithNoDependenceList_9322, kENUMERATION_UP) ;
      while (enumerator_9624.hasCurrentObject ()) {
        TC_Array <C_FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (enumerator_9624.current_mValue (HERE).getter_location (SOURCE_FILE ("declaration-driver.galgas", 252)), GALGAS_string ("almost one driver can have no dependence"), fixItArray2  COMMA_SOURCE_FILE ("declaration-driver.galgas", 252)) ;
        enumerator_9624.gotoNextObject () ;
      }
    }
  }
  GALGAS_instanciedDriverMap var_instanciedDriverMap_9785 = GALGAS_instanciedDriverMap::constructor_emptyMap (SOURCE_FILE ("declaration-driver.galgas", 256)) ;
  cEnumerator_driverInstanciationListAST enumerator_9846 (ioArgument_ioAST.getter_mRequiredDriverListAST (HERE), kENUMERATION_UP) ;
  while (enumerator_9846.hasCurrentObject ()) {
    GALGAS_driverInstanciationArgumentMap var_driverInstanciationArgumentMap_9917 = GALGAS_driverInstanciationArgumentMap::constructor_emptyMap (SOURCE_FILE ("declaration-driver.galgas", 258)) ;
    cEnumerator_driverInstanciationArgumentListAST enumerator_9961 (enumerator_9846.current_mDriverInstanciationArgumentList (HERE), kENUMERATION_UP) ;
    while (enumerator_9961.hasCurrentObject ()) {
      {
      var_driverInstanciationArgumentMap_9917.setter_insertKey (enumerator_9961.current_mSelector (HERE), enumerator_9961.current_mExpression (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 260)) ;
      }
      enumerator_9961.gotoNextObject () ;
    }
    {
    var_instanciedDriverMap_9785.setter_insertKey (enumerator_9846.current_mDriverName (HERE), var_driverInstanciationArgumentMap_9917, inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 262)) ;
    }
    enumerator_9846.gotoNextObject () ;
  }
  GALGAS_stringset var_validDriverNames_10238 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("declaration-driver.galgas", 265)) ;
  cEnumerator_driverDeclarationListAST enumerator_10353 (ioArgument_ioAST.getter_mDriverDeclarationListAST (HERE), kENUMERATION_UP) ;
  while (enumerator_10353.hasCurrentObject ()) {
    var_validDriverNames_10238.addAssign_operation (enumerator_10353.current_mDriver (HERE).getter_mDriverName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("declaration-driver.galgas", 267)) ;
    GALGAS_bool var_driverIsInstancied_10439 = var_instanciedDriverMap_9785.getter_hasKey (enumerator_10353.current_mDriver (HERE).getter_mDriverName (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("declaration-driver.galgas", 268)) ;
    GALGAS_structurePropertyListAST var_driverPropertyListAST_10602 = GALGAS_structurePropertyListAST::constructor_emptyList (SOURCE_FILE ("declaration-driver.galgas", 270)) ;
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      test_3 = var_driverIsInstancied_10439.boolEnum () ;
      if (kBoolTrue == test_3) {
        GALGAS_driverInstanciationArgumentMap var_driverInstanciationArgumentMap_10736 ;
        var_instanciedDriverMap_9785.method_searchKey (enumerator_10353.current_mDriver (HERE).getter_mDriverName (HERE), var_driverInstanciationArgumentMap_10736, inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 272)) ;
        GALGAS_stringset var_validArgumentSet_10831 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("declaration-driver.galgas", 274)) ;
        cEnumerator_structurePropertyListAST enumerator_10955 (enumerator_10353.current_mDriver (HERE).getter_mPropertyListAST (HERE), kENUMERATION_UP) ;
        while (enumerator_10955.hasCurrentObject ()) {
          GALGAS_propertyKindAST var_driverPropertyKind_11002 ;
          switch (enumerator_10955.current_mPropertyKind (HERE).enumValue ()) {
          case GALGAS_propertyKindAST::kNotBuilt:
            break ;
          case GALGAS_propertyKindAST::kEnum_uninitializedStoredProperty:
            {
              GALGAS_expressionAST var_initExpression_11160 ;
              var_driverInstanciationArgumentMap_10736.method_searchKey (enumerator_10955.current_mPropertyName (HERE), var_initExpression_11160, inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 279)) ;
              var_validArgumentSet_10831.addAssign_operation (enumerator_10955.current_mPropertyName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("declaration-driver.galgas", 280)) ;
              var_driverPropertyKind_11002 = GALGAS_propertyKindAST::constructor_initializedStoredProperty (var_initExpression_11160  COMMA_SOURCE_FILE ("declaration-driver.galgas", 281)) ;
            }
            break ;
          case GALGAS_propertyKindAST::kEnum_uninitializedConstantProperty:
            {
              GALGAS_expressionAST var_initExpression_11434 ;
              var_driverInstanciationArgumentMap_10736.method_searchKey (enumerator_10955.current_mPropertyName (HERE), var_initExpression_11434, inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 283)) ;
              var_validArgumentSet_10831.addAssign_operation (enumerator_10955.current_mPropertyName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("declaration-driver.galgas", 284)) ;
              var_driverPropertyKind_11002 = GALGAS_propertyKindAST::constructor_initializedConstantProperty (var_initExpression_11434  COMMA_SOURCE_FILE ("declaration-driver.galgas", 285)) ;
            }
            break ;
          case GALGAS_propertyKindAST::kEnum_initializedStoredProperty:
            {
              var_driverPropertyKind_11002 = enumerator_10955.current_mPropertyKind (HERE) ;
            }
            break ;
          case GALGAS_propertyKindAST::kEnum_initializedConstantProperty:
            {
              var_driverPropertyKind_11002 = enumerator_10955.current_mPropertyKind (HERE) ;
            }
            break ;
          case GALGAS_propertyKindAST::kEnum_readOnlyComputedProperty:
            {
              var_driverPropertyKind_11002 = enumerator_10955.current_mPropertyKind (HERE) ;
            }
            break ;
          case GALGAS_propertyKindAST::kEnum_writeComputedProperty:
            {
              var_driverPropertyKind_11002 = enumerator_10955.current_mPropertyKind (HERE) ;
            }
            break ;
          }
          var_driverPropertyListAST_10602.addAssign_operation (enumerator_10955.current_mPropertyName (HERE), enumerator_10955.current_mPropertyAttributeList (HERE), GALGAS_bool (false), enumerator_10955.current_mPropertyTypeName (HERE), var_driverPropertyKind_11002  COMMA_SOURCE_FILE ("declaration-driver.galgas", 295)) ;
          enumerator_10955.gotoNextObject () ;
        }
        cEnumerator_stringset enumerator_12282 (var_driverInstanciationArgumentMap_10736.getter_keySet (SOURCE_FILE ("declaration-driver.galgas", 303)).substract_operation (var_validArgumentSet_10831, inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 303)), kENUMERATION_UP) ;
        while (enumerator_12282.hasCurrentObject ()) {
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (var_driverInstanciationArgumentMap_10736.getter_locationForKey (enumerator_12282.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 304)), GALGAS_string ("invalid selector"), fixItArray4  COMMA_SOURCE_FILE ("declaration-driver.galgas", 304)) ;
          enumerator_12282.gotoNextObject () ;
        }
      }
    }
    ioArgument_ioAST.mProperty_mDeclarationListAST.addAssign_operation (GALGAS_structureDeclarationAST::constructor_new (function_typeNameForTypeMapForDriver (enumerator_10353.current_mDriver (HERE).getter_mDriverName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 309)), function_omnibusTypeSpecificNameForDriver (enumerator_10353.current_mDriver (HERE).getter_mDriverName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 310)), function_llvmDriverNameFromName (enumerator_10353.current_mDriver (HERE).getter_mDriverName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 311)), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("declaration-driver.galgas", 312)), GALGAS_bool (false), var_driverPropertyListAST_10602, enumerator_10353.current_mDriver (HERE).getter_mDriverFunctionDeclarationListAST (HERE), enumerator_10353.current_mDriver (HERE).getter_mDriverSystemRoutineListAST (HERE), enumerator_10353.current_mDriver (HERE).getter_mDriverGuardListAST (HERE), GALGAS_bool (false)  COMMA_SOURCE_FILE ("declaration-driver.galgas", 308))  COMMA_SOURCE_FILE ("declaration-driver.galgas", 308)) ;
    ioArgument_ioAST.mProperty_mDeclarationListAST.addAssign_operation (GALGAS_implementedDriverAST::constructor_new (enumerator_10353.current_mDriver (HERE).getter_mDriverName (HERE), enumerator_10353.current_mDriver (HERE).getter_mDriverDependanceList (HERE), var_driverIsInstancied_10439, enumerator_10353.current_mDriver (HERE).getter_mBootLocation (HERE), enumerator_10353.current_mDriver (HERE).getter_mBootInstructionList (HERE), enumerator_10353.current_mDriver (HERE).getter_mBootEndLocation (HERE), enumerator_10353.current_mDriver (HERE).getter_mStartupLocation (HERE), enumerator_10353.current_mDriver (HERE).getter_mStartupInstructionList (HERE), enumerator_10353.current_mDriver (HERE).getter_mStartupEndLocation (HERE)  COMMA_SOURCE_FILE ("declaration-driver.galgas", 320))  COMMA_SOURCE_FILE ("declaration-driver.galgas", 320)) ;
    enumerator_10353.gotoNextObject () ;
  }
  ioArgument_ioAST.mProperty_mDriverDeclarationListAST = GALGAS_driverDeclarationListAST::constructor_emptyList (SOURCE_FILE ("declaration-driver.galgas", 332)) ;
  cEnumerator_stringset enumerator_13526 (var_instanciedDriverMap_9785.getter_keySet (SOURCE_FILE ("declaration-driver.galgas", 334)).substract_operation (var_validDriverNames_10238, inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 334)), kENUMERATION_UP) ;
  while (enumerator_13526.hasCurrentObject ()) {
    TC_Array <C_FixItDescription> fixItArray5 ;
    inCompiler->emitSemanticError (var_instanciedDriverMap_9785.getter_locationForKey (enumerator_13526.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 335)), GALGAS_string ("undefined driver"), fixItArray5  COMMA_SOURCE_FILE ("declaration-driver.galgas", 335)) ;
    enumerator_13526.gotoNextObject () ;
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
                                                                 GALGAS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                                 GALGAS_userLLVMTypeDefinitionListIR & /* ioArgument_ioUserLLVMTypeDefinitionListIR */,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_implementedDriverAST * object = (const cPtr_implementedDriverAST *) inObject ;
  macroValidSharedObject (object, cPtr_implementedDriverAST) ;
  GALGAS_omnibusType var_driverType_14759 ;
  ioArgument_ioContext.getter_mTypeMap (HERE).method_searchKey (function_typeNameForTypeMapForDriver (object->mProperty_mDriverName, inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 355)), var_driverType_14759, inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 354)) ;
  {
  extensionSetter_insertDriver (ioArgument_ioContext.mProperty_mValuedObjectMap, object->mProperty_mDriverName, object->mProperty_mIsInstancied, var_driverType_14759, inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 358)) ;
  }
  ioArgument_ioDecoratedDeclarationList.addAssign_operation (GALGAS_decoratedRequiredDriver::constructor_new (object->mProperty_mDriverName  COMMA_SOURCE_FILE ("declaration-driver.galgas", 360))  COMMA_SOURCE_FILE ("declaration-driver.galgas", 360)) ;
  ioArgument_ioDecoratedRoutineList.addAssign_operation (function_typeNameForTypeMapForDriver (object->mProperty_mDriverName, inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 363)), GALGAS_mode::constructor_bootMode (SOURCE_FILE ("declaration-driver.galgas", 364)), GALGAS_bool (true), GALGAS_routineKind::constructor_function (SOURCE_FILE ("declaration-driver.galgas", 366)), GALGAS_bool (true), GALGAS_bool (false), GALGAS_routineAttributes::constructor_none (SOURCE_FILE ("declaration-driver.galgas", 369)), function_llvmBootRoutineNameFromDriver (object->mProperty_mDriverName, inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 370)), GALGAS_routineFormalArgumentListAST::constructor_emptyList (SOURCE_FILE ("declaration-driver.galgas", 371)), GALGAS_bool (true), object->mProperty_mBootInstructionList, object->mProperty_mBootEndLocation, GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), object->mProperty_mBootLocation  COMMA_SOURCE_FILE ("declaration-driver.galgas", 375))  COMMA_SOURCE_FILE ("declaration-driver.galgas", 362)) ;
  ioArgument_ioDecoratedRoutineList.addAssign_operation (function_typeNameForTypeMapForDriver (object->mProperty_mDriverName, inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 378)), GALGAS_mode::constructor_startupMode (SOURCE_FILE ("declaration-driver.galgas", 379)), GALGAS_bool (true), GALGAS_routineKind::constructor_function (SOURCE_FILE ("declaration-driver.galgas", 381)), GALGAS_bool (true), GALGAS_bool (false), GALGAS_routineAttributes::constructor_none (SOURCE_FILE ("declaration-driver.galgas", 384)), function_llvmStartupRoutineNameFromDriver (object->mProperty_mDriverName, inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 385)), GALGAS_routineFormalArgumentListAST::constructor_emptyList (SOURCE_FILE ("declaration-driver.galgas", 386)), GALGAS_bool (true), object->mProperty_mStartupInstructionList, object->mProperty_mStartupEndLocation, GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), object->mProperty_mStartupLocation  COMMA_SOURCE_FILE ("declaration-driver.galgas", 390))  COMMA_SOURCE_FILE ("declaration-driver.galgas", 377)) ;
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
  GALGAS_omnibusType var_driverType_16994 ;
  constinArgument_inContext.getter_mTypeMap (HERE).method_searchKey (function_typeNameForTypeMapForDriver (object->mProperty_mDriverName, inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 409)), var_driverType_16994, inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 408)) ;
  GALGAS_constructorMap var_constructorMap_17019 = var_driverType_16994.getter_constructorMap (HERE) ;
  GALGAS_constructorValue var_constructorValue_17136 ;
  GALGAS_constructorSignature joker_17113 ; // Joker input parameter
  var_constructorMap_17019.method_searchKey (GALGAS_lstring::constructor_new (GALGAS_string ("()"), object->mProperty_mDriverName.getter_location (HERE)  COMMA_SOURCE_FILE ("declaration-driver.galgas", 413)), joker_17113, var_constructorValue_17136, inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 413)) ;
  GALGAS_sortedOperandIRList var_sortedOperandList_17208 ;
  var_constructorValue_17136.method_structure (var_sortedOperandList_17208, inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 414)) ;
  GALGAS_operandIRList var_initialValueList_17243 = GALGAS_operandIRList::constructor_emptyList (SOURCE_FILE ("declaration-driver.galgas", 415)) ;
  cEnumerator_sortedOperandIRList enumerator_17292 (var_sortedOperandList_17208, kENUMERATION_UP) ;
  while (enumerator_17292.hasCurrentObject ()) {
    var_initialValueList_17243.addAssign_operation (enumerator_17292.current_mOperand (HERE)  COMMA_SOURCE_FILE ("declaration-driver.galgas", 417)) ;
    enumerator_17292.gotoNextObject () ;
  }
  ioArgument_ioIntermediateCodeStruct.mProperty_mDriverList.addAssign_operation (object->mProperty_mDriverName, var_driverType_16994, var_initialValueList_17243  COMMA_SOURCE_FILE ("declaration-driver.galgas", 419)) ;
  ioArgument_ioTemporaries.mProperty_mInitializedDriverSet.addAssign_operation (object->mProperty_mDriverName.getter_string (HERE)  COMMA_SOURCE_FILE ("declaration-driver.galgas", 424)) ;
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
//                             Overriding extension method '@staticListAST enterExtension'                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_staticListAST_enterExtension (const cPtr_abstractDeclarationAST * inObject,
                                                          GALGAS_extendStaticArrayDeclarationDictAST & ioArgument_ioExtendStaticArrayDeclarationAST,
                                                          GALGAS_abstractDeclarationAST & outArgument_outNewDeclaration,
                                                          C_Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_staticListAST * object = (const cPtr_staticListAST *) inObject ;
  macroValidSharedObject (object, cPtr_staticListAST) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = ioArgument_ioExtendStaticArrayDeclarationAST.getter_hasKey (object->mProperty_mStaticListName.getter_string (HERE) COMMA_SOURCE_FILE ("declaration-static-list.galgas", 161)).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_staticListValueListAST var_elements_6179 ;
      {
      ioArgument_ioExtendStaticArrayDeclarationAST.setter_removeKey (object->mProperty_mStaticListName.getter_string (HERE), var_elements_6179, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 162)) ;
      }
      outArgument_outNewDeclaration = GALGAS_staticListAST::constructor_new (object->mProperty_mStaticListName, object->mProperty_mPropertyList, object->mProperty_mValueList.add_operation (var_elements_6179, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 166))  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 163)) ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_staticListAST temp_1 = object ;
    outArgument_outNewDeclaration = temp_1 ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_staticListAST_enterExtension (void) {
  enterExtensionMethod_enterExtension (kTypeDescriptor_GALGAS_staticListAST.mSlotID,
                                       extensionMethod_staticListAST_enterExtension) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_staticListAST_enterExtension (defineExtensionMethod_staticListAST_enterExtension, NULL) ;

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
  ioArgument_ioGraph.setter_addNode (object->mProperty_mStaticListName, temp_0, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 179)) ;
  }
  cEnumerator_staticListPropertyListAST enumerator_6947 (object->mProperty_mPropertyList, kENUMERATION_UP) ;
  while (enumerator_6947.hasCurrentObject ()) {
    switch (enumerator_6947.current_mPropertyType (HERE).enumValue ()) {
    case GALGAS_staticListPropertyTypeAST::kNotBuilt:
      break ;
    case GALGAS_staticListPropertyTypeAST::kEnum_valueType:
      {
        const cEnumAssociatedValues_staticListPropertyTypeAST_valueType * extractPtr_7076 = (const cEnumAssociatedValues_staticListPropertyTypeAST_valueType *) (enumerator_6947.current_mPropertyType (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_propertyTypeName = extractPtr_7076->mAssociatedValue0 ;
        {
        ioArgument_ioGraph.setter_addEdge (object->mProperty_mStaticListName, extractedValue_propertyTypeName COMMA_SOURCE_FILE ("declaration-static-list.galgas", 184)) ;
        }
      }
      break ;
    case GALGAS_staticListPropertyTypeAST::kEnum_function:
      {
        const cEnumAssociatedValues_staticListPropertyTypeAST_function * extractPtr_7387 = (const cEnumAssociatedValues_staticListPropertyTypeAST_function *) (enumerator_6947.current_mPropertyType (HERE).unsafePointer ()) ;
        const GALGAS_routineFormalArgumentListAST extractedValue_formalArgs = extractPtr_7387->mAssociatedValue1 ;
        const GALGAS_lstring extractedValue_returnType = extractPtr_7387->mAssociatedValue2 ;
        cEnumerator_routineFormalArgumentListAST enumerator_7216 (extractedValue_formalArgs, kENUMERATION_UP) ;
        while (enumerator_7216.hasCurrentObject ()) {
          {
          ioArgument_ioGraph.setter_noteNode (enumerator_7216.current_mFormalArgumentTypeName (HERE) COMMA_SOURCE_FILE ("declaration-static-list.galgas", 187)) ;
          }
          enumerator_7216.gotoNextObject () ;
        }
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          test_1 = GALGAS_bool (kIsNotEqual, extractedValue_returnType.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_1) {
            {
            ioArgument_ioGraph.setter_addEdge (object->mProperty_mStaticListName, extractedValue_returnType COMMA_SOURCE_FILE ("declaration-static-list.galgas", 190)) ;
            }
          }
        }
      }
      break ;
    }
    enumerator_6947.gotoNextObject () ;
  }
  cEnumerator_staticListValueListAST enumerator_7492 (object->mProperty_mValueList, kENUMERATION_UP) ;
  while (enumerator_7492.hasCurrentObject ()) {
    cEnumerator_extendStaticListElementAST enumerator_7524 (enumerator_7492.current_mElement (HERE), kENUMERATION_UP) ;
    while (enumerator_7524.hasCurrentObject ()) {
      switch (enumerator_7524.current_mExpression (HERE).enumValue ()) {
      case GALGAS_extendStaticListExpressionAST::kNotBuilt:
        break ;
      case GALGAS_extendStaticListExpressionAST::kEnum_expression:
        {
          const cEnumAssociatedValues_extendStaticListExpressionAST_expression * extractPtr_7671 = (const cEnumAssociatedValues_extendStaticListExpressionAST_expression *) (enumerator_7524.current_mExpression (HERE).unsafePointer ()) ;
          const GALGAS_expressionAST extractedValue_exp = extractPtr_7671->mAssociatedValue0 ;
          callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) extractedValue_exp.ptr (), object->mProperty_mStaticListName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 199)) ;
        }
        break ;
      case GALGAS_extendStaticListExpressionAST::kEnum_function:
        {
          const cEnumAssociatedValues_extendStaticListExpressionAST_function * extractPtr_7865 = (const cEnumAssociatedValues_extendStaticListExpressionAST_function *) (enumerator_7524.current_mExpression (HERE).unsafePointer ()) ;
          const GALGAS_routineFormalArgumentListAST extractedValue_formalArgs = extractPtr_7865->mAssociatedValue1 ;
          cEnumerator_routineFormalArgumentListAST enumerator_7795 (extractedValue_formalArgs, kENUMERATION_UP) ;
          while (enumerator_7795.hasCurrentObject ()) {
            {
            ioArgument_ioGraph.setter_noteNode (enumerator_7795.current_mFormalArgumentTypeName (HERE) COMMA_SOURCE_FILE ("declaration-static-list.galgas", 202)) ;
            }
            enumerator_7795.gotoNextObject () ;
          }
        }
        break ;
      }
      enumerator_7524.gotoNextObject () ;
    }
    enumerator_7492.gotoNextObject () ;
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
  result_result = GALGAS_string ("staticlist ").add_operation (object->mProperty_mStaticListName.getter_string (SOURCE_FILE ("declaration-static-list.galgas", 218)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 218)) ;
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
//                                       Function 'omnibusNameForStaticListType'                                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring function_omnibusNameForStaticListType (const GALGAS_lstring & constinArgument_inStaticListName,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  result_result = GALGAS_lstring::constructor_new (GALGAS_string ("staticlist ").add_operation (constinArgument_inStaticListName.getter_string (SOURCE_FILE ("declaration-static-list.galgas", 228)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 228)), constinArgument_inStaticListName.getter_location (SOURCE_FILE ("declaration-static-list.galgas", 228))  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 228)) ;
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function introspection                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const C_galgas_type_descriptor * functionArgs_omnibusNameForStaticListType [2] = {
  & kTypeDescriptor_GALGAS_lstring,
  NULL
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_object functionWithGenericHeader_omnibusNameForStaticListType (C_Compiler * inCompiler,
                                                                             const cObjectArray & inEffectiveParameterArray,
                                                                             const GALGAS_location & /* inErrorLocation */
                                                                             COMMA_LOCATION_ARGS) {
  const GALGAS_lstring operand0 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  return function_omnibusNameForStaticListType (operand0,
                                                inCompiler
                                                COMMA_THERE).getter_object (THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_galgas_function_descriptor functionDescriptor_omnibusNameForStaticListType ("omnibusNameForStaticListType",
                                                                              functionWithGenericHeader_omnibusNameForStaticListType,
                                                                              & kTypeDescriptor_GALGAS_lstring,
                                                                              1,
                                                                              functionArgs_omnibusNameForStaticListType) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        Function 'llvmNameForStaticListType'                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring function_llvmNameForStaticListType (const GALGAS_lstring & constinArgument_inStaticListName,
                                                   C_Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  result_result = GALGAS_lstring::constructor_new (GALGAS_string ("staticlist-").add_operation (constinArgument_inStaticListName.getter_string (SOURCE_FILE ("declaration-static-list.galgas", 234)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 234)), constinArgument_inStaticListName.getter_location (SOURCE_FILE ("declaration-static-list.galgas", 234))  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 234)) ;
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
//                                   Function 'omnibusNameForStaticListElementType'                                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring function_omnibusNameForStaticListElementType (const GALGAS_lstring & constinArgument_inStaticListName,
                                                             C_Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  result_result = GALGAS_lstring::constructor_new (GALGAS_string ("staticlist element ").add_operation (constinArgument_inStaticListName.getter_string (SOURCE_FILE ("declaration-static-list.galgas", 240)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 240)), constinArgument_inStaticListName.getter_location (SOURCE_FILE ("declaration-static-list.galgas", 240))  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 240)) ;
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function introspection                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const C_galgas_type_descriptor * functionArgs_omnibusNameForStaticListElementType [2] = {
  & kTypeDescriptor_GALGAS_lstring,
  NULL
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_object functionWithGenericHeader_omnibusNameForStaticListElementType (C_Compiler * inCompiler,
                                                                                    const cObjectArray & inEffectiveParameterArray,
                                                                                    const GALGAS_location & /* inErrorLocation */
                                                                                    COMMA_LOCATION_ARGS) {
  const GALGAS_lstring operand0 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  return function_omnibusNameForStaticListElementType (operand0,
                                                       inCompiler
                                                       COMMA_THERE).getter_object (THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_galgas_function_descriptor functionDescriptor_omnibusNameForStaticListElementType ("omnibusNameForStaticListElementType",
                                                                                     functionWithGenericHeader_omnibusNameForStaticListElementType,
                                                                                     & kTypeDescriptor_GALGAS_lstring,
                                                                                     1,
                                                                                     functionArgs_omnibusNameForStaticListElementType) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                     Function 'llvmNameForStaticListElementType'                                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring function_llvmNameForStaticListElementType (const GALGAS_lstring & constinArgument_inStaticListName,
                                                          C_Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  result_result = GALGAS_lstring::constructor_new (GALGAS_string ("staticlist-element-type-").add_operation (constinArgument_inStaticListName.getter_string (HERE).getter_assemblerRepresentation (SOURCE_FILE ("declaration-static-list.galgas", 246)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 246)), constinArgument_inStaticListName.getter_location (HERE)  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 246)) ;
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
                                                          GALGAS_routineListIR & ioArgument_ioRoutineListIR,
                                                          GALGAS_staticListInitializationMap & ioArgument_ioStaticListValueMap,
                                                          GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                          GALGAS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                          GALGAS_userLLVMTypeDefinitionListIR & ioArgument_ioUserLLVMTypeDefinitionListIR,
                                                          C_Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_staticListAST * object = (const cPtr_staticListAST *) inObject ;
  macroValidSharedObject (object, cPtr_staticListAST) ;
  GALGAS_routineMapCTXT var_routineMap_11249 = GALGAS_routineMapCTXT::constructor_emptyMap (SOURCE_FILE ("declaration-static-list.galgas", 278)) ;
  GALGAS_propertyList var_propertyList_11283 = GALGAS_propertyList::constructor_emptyList (SOURCE_FILE ("declaration-static-list.galgas", 279)) ;
  GALGAS_propertyGetterMap var_propertyGetterMap_11327 = GALGAS_propertyGetterMap::constructor_emptyMap (SOURCE_FILE ("declaration-static-list.galgas", 280)) ;
  GALGAS_stringset var_propertyNameSet_11361 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("declaration-static-list.galgas", 281)) ;
  GALGAS_lstring var_omnibusElementTypeName_11395 = function_omnibusNameForStaticListElementType (object->mProperty_mStaticListName, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 282)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_elementTypeProxy_11554 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioContext.mProperty_mTypeMap, var_omnibusElementTypeName_11395, var_elementTypeProxy_11554 COMMA_SOURCE_FILE ("declaration-static-list.galgas", 283)) ;
  }
  cEnumerator_staticListPropertyListAST enumerator_11693 (object->mProperty_mPropertyList, kENUMERATION_UP) ;
  GALGAS_uint index_11656 ((uint32_t) 0) ;
  while (enumerator_11693.hasCurrentObject ()) {
    switch (enumerator_11693.current_mPropertyType (HERE).enumValue ()) {
    case GALGAS_staticListPropertyTypeAST::kNotBuilt:
      break ;
    case GALGAS_staticListPropertyTypeAST::kEnum_valueType:
      {
        const cEnumAssociatedValues_staticListPropertyTypeAST_valueType * extractPtr_12270 = (const cEnumAssociatedValues_staticListPropertyTypeAST_valueType *) (enumerator_11693.current_mPropertyType (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_propertyTypeName = extractPtr_12270->mAssociatedValue0 ;
        GALGAS_omnibusType var_propertyType_11800 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.getter_mTypeMap (HERE), extractedValue_propertyTypeName, inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 288)).getter_type (inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 288)) ;
        enumGalgasBool test_0 = kBoolTrue ;
        if (kBoolTrue == test_0) {
          test_0 = var_propertyNameSet_11361.getter_hasKey (enumerator_11693.current_mPropertyName (HERE).getter_string (SOURCE_FILE ("declaration-static-list.galgas", 289)) COMMA_SOURCE_FILE ("declaration-static-list.galgas", 289)).boolEnum () ;
          if (kBoolTrue == test_0) {
            TC_Array <C_FixItDescription> fixItArray1 ;
            inCompiler->emitSemanticError (enumerator_11693.current_mPropertyName (HERE).getter_location (SOURCE_FILE ("declaration-static-list.galgas", 290)), GALGAS_string ("duplicated property name"), fixItArray1  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 290)) ;
          }
        }
        if (kBoolFalse == test_0) {
          var_propertyNameSet_11361.addAssign_operation (enumerator_11693.current_mPropertyName (HERE).getter_string (SOURCE_FILE ("declaration-static-list.galgas", 292))  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 292)) ;
          var_propertyList_11283.addAssign_operation (enumerator_11693.current_mPropertyName (HERE).getter_string (SOURCE_FILE ("declaration-static-list.galgas", 293)), var_propertyType_11800  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 293)) ;
          {
          var_propertyGetterMap_11327.setter_insertKey (enumerator_11693.current_mPropertyName (HERE), GALGAS_bool (true), GALGAS_propertyGetterKind::constructor_storedProperty (var_propertyType_11800, index_11656  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 297)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 294)) ;
          }
        }
      }
      break ;
    case GALGAS_staticListPropertyTypeAST::kEnum_function:
      {
        const cEnumAssociatedValues_staticListPropertyTypeAST_function * extractPtr_14151 = (const cEnumAssociatedValues_staticListPropertyTypeAST_function *) (enumerator_11693.current_mPropertyType (HERE).unsafePointer ()) ;
        const GALGAS_mode extractedValue_mode = extractPtr_14151->mAssociatedValue0 ;
        const GALGAS_routineFormalArgumentListAST extractedValue_formalArgs = extractPtr_14151->mAssociatedValue1 ;
        const GALGAS_lstring extractedValue_returnTypeName = extractPtr_14151->mAssociatedValue2 ;
        GALGAS_lstring var_routineLLVMName_12421 = function_routineMangledNameFromAST (function_llvmNameForStaticListElementType (object->mProperty_mStaticListName, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 303)).getter_string (SOURCE_FILE ("declaration-static-list.galgas", 303)), enumerator_11693.current_mPropertyName (HERE), extractedValue_formalArgs, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 302)) ;
        GALGAS_routineTypedSignature var_signature_12658 ;
        {
        routine_routineTypedSignature (ioArgument_ioContext.mProperty_mTypeMap, extractedValue_formalArgs, var_signature_12658, inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 308)) ;
        }
        GALGAS_unifiedTypeMap_2D_proxy temp_2 ;
        const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, extractedValue_returnTypeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_3) {
          temp_2 = GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-static-list.galgas", 310)) ;
        }else if (kBoolFalse == test_3) {
          temp_2 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.getter_mTypeMap (HERE), extractedValue_returnTypeName, inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 312)) ;
        }
        GALGAS_unifiedTypeMap_2D_proxy var_returnTypeProxy_12707 = temp_2 ;
        GALGAS_omnibusType var_propertyType_12921 = GALGAS_omnibusType::constructor_new (GALGAS_propertyGetterMap::constructor_emptyMap (SOURCE_FILE ("declaration-static-list.galgas", 316)), GALGAS_propertySetterMap::constructor_emptyMap (SOURCE_FILE ("declaration-static-list.galgas", 317)), GALGAS_routineMapCTXT::constructor_emptyMap (SOURCE_FILE ("declaration-static-list.galgas", 318)), GALGAS_classConstantMap::constructor_emptyMap (SOURCE_FILE ("declaration-static-list.galgas", 319)), GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("declaration-static-list.galgas", 320)), GALGAS_guardMapCTXT::constructor_emptyMap (SOURCE_FILE ("declaration-static-list.galgas", 321)), GALGAS_subscript::constructor_noSubscript (SOURCE_FILE ("declaration-static-list.galgas", 322)), GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("declaration-static-list.galgas", 323)), GALGAS_omnibusTypeAttributes::constructor_none (SOURCE_FILE ("declaration-static-list.galgas", 324)), GALGAS_string::makeEmptyString (), GALGAS_typeKind::constructor_function (extractedValue_mode, var_signature_12658, var_returnTypeProxy_12707  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 326)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 315)) ;
        var_propertyList_11283.addAssign_operation (enumerator_11693.current_mPropertyName (HERE).getter_string (SOURCE_FILE ("declaration-static-list.galgas", 334)), var_propertyType_12921  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 334)) ;
        GALGAS_lstring var_routineMangledName_13533 = GALGAS_lstring::constructor_new (enumerator_11693.current_mPropertyName (HERE).getter_string (HERE).add_operation (extensionGetter_routineSignature (extractedValue_formalArgs, enumerator_11693.current_mPropertyName (HERE).getter_location (SOURCE_FILE ("declaration-static-list.galgas", 337)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 337)).getter_string (SOURCE_FILE ("declaration-static-list.galgas", 337)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 337)), enumerator_11693.current_mPropertyName (HERE).getter_location (SOURCE_FILE ("declaration-static-list.galgas", 338))  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 336)) ;
        {
        GALGAS_routineLLVMNameDict temp_4 = GALGAS_routineLLVMNameDict::constructor_emptyDict (SOURCE_FILE ("declaration-static-list.galgas", 345)) ;
        temp_4.addAssign_operation (GALGAS_mode::constructor_userMode (SOURCE_FILE ("declaration-static-list.galgas", 345)), var_routineLLVMName_12421.getter_string (SOURCE_FILE ("declaration-static-list.galgas", 345)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 345)) ;
        var_routineMap_11249.setter_insertKey (var_routineMangledName_13533, GALGAS_bool (true), var_signature_12658, var_returnTypeProxy_12707, temp_4, GALGAS_bool (false), GALGAS_mode::constructor_userMode (SOURCE_FILE ("declaration-static-list.galgas", 347)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 340)) ;
        }
        ioArgument_ioRoutineListIR.addAssign_operation (GALGAS_staticListIndirectRoutineIR::constructor_new (var_routineLLVMName_12421, GALGAS_bool (true), GALGAS_bool (true), var_elementTypeProxy_11554, var_signature_12658, var_returnTypeProxy_12707, index_11656  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 350))  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 350)) ;
      }
      break ;
    }
    enumerator_11693.gotoNextObject () ;
    index_11656.increment_operation (inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 285)) ;
  }
  {
  ioArgument_ioContext.mProperty_mStaticListMap.setter_insertKey (object->mProperty_mStaticListName, var_propertyList_11283, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 361)) ;
  }
  GALGAS_omnibusType var_elementType_14356 = GALGAS_omnibusType::constructor_new (var_propertyGetterMap_11327, GALGAS_propertySetterMap::constructor_emptyMap (SOURCE_FILE ("declaration-static-list.galgas", 365)), var_routineMap_11249, GALGAS_classConstantMap::constructor_emptyMap (SOURCE_FILE ("declaration-static-list.galgas", 367)), GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("declaration-static-list.galgas", 368)), GALGAS_guardMapCTXT::constructor_emptyMap (SOURCE_FILE ("declaration-static-list.galgas", 369)), GALGAS_subscript::constructor_noSubscript (SOURCE_FILE ("declaration-static-list.galgas", 370)), GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("declaration-static-list.galgas", 371)), GALGAS_omnibusTypeAttributes::constructor_none (SOURCE_FILE ("declaration-static-list.galgas", 372)), function_omnibusNameForStaticListElementType (object->mProperty_mStaticListName, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 373)).getter_string (SOURCE_FILE ("declaration-static-list.galgas", 373)), GALGAS_typeKind::constructor_structure (var_propertyList_11283  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 374)), function_llvmNameForStaticListElementType (object->mProperty_mStaticListName, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 375)).getter_string (SOURCE_FILE ("declaration-static-list.galgas", 375))  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 363)) ;
  {
  ioArgument_ioContext.mProperty_mTypeMap.setter_insertType (var_omnibusElementTypeName_11395, var_elementType_14356, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 377)) ;
  }
  GALGAS_stringlist var_stringValueList_15049 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("declaration-static-list.galgas", 382)) ;
  cEnumerator_staticListValueListAST enumerator_15086 (object->mProperty_mValueList, kENUMERATION_UP) ;
  while (enumerator_15086.hasCurrentObject ()) {
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      test_5 = GALGAS_bool (kIsNotEqual, var_propertyList_11283.getter_length (SOURCE_FILE ("declaration-static-list.galgas", 384)).objectCompare (enumerator_15086.current_mElement (HERE).getter_length (SOURCE_FILE ("declaration-static-list.galgas", 384)))).boolEnum () ;
      if (kBoolTrue == test_5) {
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (object->mProperty_mStaticListName.getter_location (SOURCE_FILE ("declaration-static-list.galgas", 385)), var_propertyList_11283.getter_length (SOURCE_FILE ("declaration-static-list.galgas", 386)).getter_string (SOURCE_FILE ("declaration-static-list.galgas", 386)).add_operation (GALGAS_string (" expressions required, "), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 386)).add_operation (enumerator_15086.current_mElement (HERE).getter_length (SOURCE_FILE ("declaration-static-list.galgas", 387)).getter_string (SOURCE_FILE ("declaration-static-list.galgas", 387)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 386)).add_operation (GALGAS_string (" provided"), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 387)), fixItArray6  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 385)) ;
      }
    }
    if (kBoolFalse == test_5) {
      GALGAS_string var_staticValue_15317 = GALGAS_string ("{") ;
      cEnumerator_extendStaticListElementAST enumerator_15363 (enumerator_15086.current_mElement (HERE), kENUMERATION_UP) ;
      cEnumerator_propertyList enumerator_15397 (var_propertyList_11283, kENUMERATION_UP) ;
      while (enumerator_15363.hasCurrentObject () && enumerator_15397.hasCurrentObject ()) {
        switch (enumerator_15363.current_mExpression (HERE).enumValue ()) {
        case GALGAS_extendStaticListExpressionAST::kNotBuilt:
          break ;
        case GALGAS_extendStaticListExpressionAST::kEnum_expression:
          {
            const cEnumAssociatedValues_extendStaticListExpressionAST_expression * extractPtr_16053 = (const cEnumAssociatedValues_extendStaticListExpressionAST_expression *) (enumerator_15363.current_mExpression (HERE).unsafePointer ()) ;
            const GALGAS_expressionAST extractedValue_exp = extractPtr_16053->mAssociatedValue0 ;
            enumGalgasBool test_7 = kBoolTrue ;
            if (kBoolTrue == test_7) {
              test_7 = enumerator_15397.current_mType (HERE).getter_kind (HERE).getter_isFunction (SOURCE_FILE ("declaration-static-list.galgas", 393)).boolEnum () ;
              if (kBoolTrue == test_7) {
                TC_Array <C_FixItDescription> fixItArray8 ;
                inCompiler->emitSemanticError (enumerator_15363.current_mEndOfExpression (HERE), GALGAS_string ("a function name is expected here"), fixItArray8  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 394)) ;
              }
            }
            if (kBoolFalse == test_7) {
              GALGAS_objectIR var_expressionResult_15897 ;
              {
              routine_computeStaticExpression (ioArgument_ioContext, ioArgument_ioStaticEntityMap, extractedValue_exp, enumerator_15363.current_mEndOfExpression (HERE), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-static-list.galgas", 401)), var_expressionResult_15897, inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 396)) ;
              }
              var_staticValue_15317.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_15397.current_mType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 405)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 405)).add_operation (extensionGetter_llvmName (var_expressionResult_15897, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 405)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 405)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 405)) ;
            }
          }
          break ;
        case GALGAS_extendStaticListExpressionAST::kEnum_function:
          {
            const cEnumAssociatedValues_extendStaticListExpressionAST_function * extractPtr_18283 = (const cEnumAssociatedValues_extendStaticListExpressionAST_function *) (enumerator_15363.current_mExpression (HERE).unsafePointer ()) ;
            const GALGAS_lstring extractedValue_functionName = extractPtr_18283->mAssociatedValue0 ;
            const GALGAS_routineFormalArgumentListAST extractedValue_formalArgs = extractPtr_18283->mAssociatedValue1 ;
            enumGalgasBool test_9 = kBoolTrue ;
            if (kBoolTrue == test_9) {
              test_9 = enumerator_15397.current_mType (HERE).getter_kind (HERE).getter_isFunction (SOURCE_FILE ("declaration-static-list.galgas", 408)).operator_not (SOURCE_FILE ("declaration-static-list.galgas", 408)).boolEnum () ;
              if (kBoolTrue == test_9) {
                TC_Array <C_FixItDescription> fixItArray10 ;
                inCompiler->emitSemanticError (enumerator_15363.current_mEndOfExpression (HERE), GALGAS_string ("a static expression is expected here"), fixItArray10  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 409)) ;
              }
            }
            if (kBoolFalse == test_9) {
              GALGAS_mode var_mode_16353 ;
              GALGAS_routineTypedSignature var_functionSignature_16400 ;
              GALGAS_unifiedTypeMap_2D_proxy var_functionReturnTypeProxy_16459 ;
              enumerator_15397.current_mType (HERE).getter_kind (HERE).method_function (var_mode_16353, var_functionSignature_16400, var_functionReturnTypeProxy_16459, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 411)) ;
              GALGAS_lstring var_argumentSignature_16507 = extensionGetter_routineSignature (extractedValue_formalArgs, extractedValue_functionName.getter_location (SOURCE_FILE ("declaration-static-list.galgas", 416)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 416)) ;
              GALGAS_lstring var_functionMangledName_16589 = GALGAS_lstring::constructor_new (extractedValue_functionName.getter_string (HERE).add_operation (var_argumentSignature_16507.getter_string (SOURCE_FILE ("declaration-static-list.galgas", 417)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 417)), extractedValue_functionName.getter_location (SOURCE_FILE ("declaration-static-list.galgas", 417))  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 417)) ;
              GALGAS_bool var_candidateIsPublic_16785 ;
              GALGAS_routineTypedSignature var_candidateSignature_16823 ;
              GALGAS_unifiedTypeMap_2D_proxy var_candidateReturnTypeProxy_16867 ;
              GALGAS_routineLLVMNameDict var_implementedModeDictionary_16940 ;
              GALGAS_bool var_implementedIsExported_16988 ;
              GALGAS_mode var_candidateMode_17028 ;
              ioArgument_ioContext.getter_mRoutineMap (HERE).method_searchKey (var_functionMangledName_16589, var_candidateIsPublic_16785, var_candidateSignature_16823, var_candidateReturnTypeProxy_16867, var_implementedModeDictionary_16940, var_implementedIsExported_16988, var_candidateMode_17028, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 418)) ;
              GALGAS_string var_routineLLVMName_17100 = function_checkModeAndReturnsRoutineLLVMName (var_implementedModeDictionary_16940, var_mode_16353, extractedValue_functionName, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 428)) ;
              enumGalgasBool test_11 = kBoolTrue ;
              if (kBoolTrue == test_11) {
                GALGAS_bool test_12 = GALGAS_bool (kIsEqual, var_functionReturnTypeProxy_16459.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-static-list.galgas", 429)))) ;
                if (kBoolTrue == test_12.boolEnum ()) {
                  test_12 = GALGAS_bool (kIsNotEqual, var_candidateReturnTypeProxy_16867.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-static-list.galgas", 429)))) ;
                }
                test_11 = test_12.boolEnum () ;
                if (kBoolTrue == test_11) {
                  TC_Array <C_FixItDescription> fixItArray13 ;
                  inCompiler->emitSemanticError (extractedValue_functionName.getter_location (SOURCE_FILE ("declaration-static-list.galgas", 430)), GALGAS_string ("this function should return an $").add_operation (var_candidateReturnTypeProxy_16867.getter_key (inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 430)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 430)).add_operation (GALGAS_string (" object"), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 430)), fixItArray13  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 430)) ;
                }
              }
              if (kBoolFalse == test_11) {
                enumGalgasBool test_14 = kBoolTrue ;
                if (kBoolTrue == test_14) {
                  GALGAS_bool test_15 = GALGAS_bool (kIsNotEqual, var_functionReturnTypeProxy_16459.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-static-list.galgas", 431)))) ;
                  if (kBoolTrue == test_15.boolEnum ()) {
                    test_15 = GALGAS_bool (kIsEqual, var_candidateReturnTypeProxy_16867.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-static-list.galgas", 431)))) ;
                  }
                  test_14 = test_15.boolEnum () ;
                  if (kBoolTrue == test_14) {
                    TC_Array <C_FixItDescription> fixItArray16 ;
                    inCompiler->emitSemanticError (extractedValue_functionName.getter_location (SOURCE_FILE ("declaration-static-list.galgas", 432)), GALGAS_string ("this function should return no object"), fixItArray16  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 432)) ;
                  }
                }
              }
              enumGalgasBool test_17 = kBoolTrue ;
              if (kBoolTrue == test_17) {
                test_17 = GALGAS_bool (kIsNotEqual, var_functionSignature_16400.getter_length (SOURCE_FILE ("declaration-static-list.galgas", 434)).objectCompare (var_candidateSignature_16823.getter_length (SOURCE_FILE ("declaration-static-list.galgas", 434)))).boolEnum () ;
                if (kBoolTrue == test_17) {
                  TC_Array <C_FixItDescription> fixItArray18 ;
                  inCompiler->emitSemanticError (extractedValue_functionName.getter_location (SOURCE_FILE ("declaration-static-list.galgas", 435)), GALGAS_string ("this function has ").add_operation (var_candidateSignature_16823.getter_length (SOURCE_FILE ("declaration-static-list.galgas", 436)).getter_string (SOURCE_FILE ("declaration-static-list.galgas", 436)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 436)).add_operation (GALGAS_string (" argument(s) ("), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 436)).add_operation (var_functionSignature_16400.getter_length (SOURCE_FILE ("declaration-static-list.galgas", 437)).getter_string (SOURCE_FILE ("declaration-static-list.galgas", 436)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 436)).add_operation (GALGAS_string (" required)"), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 437)), fixItArray18  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 435)) ;
                }
              }
              if (kBoolFalse == test_17) {
                cEnumerator_routineTypedSignature enumerator_17903 (var_functionSignature_16400, kENUMERATION_UP) ;
                cEnumerator_routineTypedSignature enumerator_17936 (var_candidateSignature_16823, kENUMERATION_UP) ;
                while (enumerator_17903.hasCurrentObject () && enumerator_17936.hasCurrentObject ()) {
                  enumGalgasBool test_19 = kBoolTrue ;
                  if (kBoolTrue == test_19) {
                    test_19 = GALGAS_bool (kIsNotEqual, enumerator_17903.current (HERE).getter_mTypeProxy (HERE).objectCompare (enumerator_17936.current (HERE).getter_mTypeProxy (HERE))).boolEnum () ;
                    if (kBoolTrue == test_19) {
                      TC_Array <C_FixItDescription> fixItArray20 ;
                      inCompiler->emitSemanticError (enumerator_17936.current (HERE).getter_mSelector (HERE).getter_location (SOURCE_FILE ("declaration-static-list.galgas", 441)), GALGAS_string ("argument type should be $").add_operation (enumerator_17903.current (HERE).getter_mTypeProxy (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 441)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 441)), fixItArray20  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 441)) ;
                    }
                  }
                  enumerator_17903.gotoNextObject () ;
                  enumerator_17936.gotoNextObject () ;
                }
              }
              var_staticValue_15317.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_15397.current_mType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 445)).add_operation (GALGAS_string (" @"), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 445)).add_operation (var_routineLLVMName_17100.getter_assemblerRepresentation (SOURCE_FILE ("declaration-static-list.galgas", 445)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 445)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 445)) ;
            }
          }
          break ;
        }
        if (enumerator_15363.hasNextObject () && enumerator_15397.hasNextObject ()) {
          var_staticValue_15317.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 449)) ;
        }
        enumerator_15363.gotoNextObject () ;
        enumerator_15397.gotoNextObject () ;
      }
      var_staticValue_15317.plusAssign_operation(GALGAS_string ("}"), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 451)) ;
      var_stringValueList_15049.addAssign_operation (var_staticValue_15317  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 452)) ;
    }
    enumerator_15086.gotoNextObject () ;
  }
  {
  ioArgument_ioStaticListValueMap.setter_insertKey (object->mProperty_mStaticListName, var_stringValueList_15049, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 455)) ;
  }
  GALGAS_propertyGetterMap var_listTypePropertyMap_18629 = GALGAS_propertyGetterMap::constructor_emptyMap (SOURCE_FILE ("declaration-static-list.galgas", 457)) ;
  {
  var_listTypePropertyMap_18629.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("count"), object->mProperty_mStaticListName.getter_location (HERE)  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 459)), GALGAS_bool (true), GALGAS_propertyGetterKind::constructor_constantProperty (GALGAS_objectIR::constructor_literalInteger (function_literalIntegerType (inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 461)), object->mProperty_mValueList.getter_length (SOURCE_FILE ("declaration-static-list.galgas", 461)).getter_bigint (SOURCE_FILE ("declaration-static-list.galgas", 461))  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 461))  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 461)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 458)) ;
  }
  GALGAS_omnibusType var_arrayType_18977 = GALGAS_omnibusType::constructor_new (var_listTypePropertyMap_18629, GALGAS_propertySetterMap::constructor_emptyMap (SOURCE_FILE ("declaration-static-list.galgas", 466)), GALGAS_routineMapCTXT::constructor_emptyMap (SOURCE_FILE ("declaration-static-list.galgas", 467)), GALGAS_classConstantMap::constructor_emptyMap (SOURCE_FILE ("declaration-static-list.galgas", 468)), GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("declaration-static-list.galgas", 469)), GALGAS_guardMapCTXT::constructor_emptyMap (SOURCE_FILE ("declaration-static-list.galgas", 470)), GALGAS_subscript::constructor_staticSubscript (var_elementType_14356, var_stringValueList_15049.getter_length (SOURCE_FILE ("declaration-static-list.galgas", 471)).getter_bigint (SOURCE_FILE ("declaration-static-list.galgas", 471))  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 471)), GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("declaration-static-list.galgas", 472)), GALGAS_omnibusTypeAttributes::constructor_instanciable (SOURCE_FILE ("declaration-static-list.galgas", 473)).operator_or (GALGAS_omnibusTypeAttributes::constructor_equatable (SOURCE_FILE ("declaration-static-list.galgas", 473)) COMMA_SOURCE_FILE ("declaration-static-list.galgas", 473)).operator_or (GALGAS_omnibusTypeAttributes::constructor_copyable (SOURCE_FILE ("declaration-static-list.galgas", 473)) COMMA_SOURCE_FILE ("declaration-static-list.galgas", 473)), function_omnibusNameForStaticListType (object->mProperty_mStaticListName, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 474)).getter_string (SOURCE_FILE ("declaration-static-list.galgas", 474)), GALGAS_typeKind::constructor_staticArrayType (var_elementType_14356, var_stringValueList_15049.getter_length (SOURCE_FILE ("declaration-static-list.galgas", 475)).getter_bigint (SOURCE_FILE ("declaration-static-list.galgas", 475))  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 475)), function_llvmNameForStaticListType (object->mProperty_mStaticListName, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 476)).getter_string (SOURCE_FILE ("declaration-static-list.galgas", 476))  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 464)) ;
  {
  ioArgument_ioContext.mProperty_mTypeMap.setter_insertType (function_omnibusNameForStaticListType (object->mProperty_mStaticListName, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 479)), var_arrayType_18977, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 478)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_staticListType_19796 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.getter_mTypeMap (HERE), function_omnibusNameForStaticListType (object->mProperty_mStaticListName, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 483)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 483)) ;
  {
  ioArgument_ioContext.mProperty_mGlobalConstantMap.setter_insertKey (object->mProperty_mStaticListName, GALGAS_objectIR::constructor_reference (var_staticListType_19796.getter_type (inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 486)), function_llvmNameForGlobalVariable (object->mProperty_mStaticListName.getter_string (SOURCE_FILE ("declaration-static-list.galgas", 486)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 486))  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 486)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 484)) ;
  }
  {
  extensionSetter_insertGlobalConstant (ioArgument_ioContext.mProperty_mValuedObjectMap, object->mProperty_mStaticListName, GALGAS_objectIR::constructor_reference (var_staticListType_19796.getter_type (inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 490)), function_llvmNameForGlobalVariable (object->mProperty_mStaticListName.getter_string (SOURCE_FILE ("declaration-static-list.galgas", 490)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 490))  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 490)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 488)) ;
  }
  ioArgument_ioDecoratedDeclarationList.addAssign_operation (GALGAS_decoratedStaticList::constructor_new (object->mProperty_mStaticListName, object->mProperty_mValueList  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 493))  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 493)) ;
  ioArgument_ioUserLLVMTypeDefinitionListIR.addAssign_operation (GALGAS_userLLVMSructureTypeDefinitionIR::constructor_new (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) var_elementType_14356.ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 496)), var_propertyList_11283  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 495))  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 495)) ;
  ioArgument_ioUserLLVMTypeDefinitionListIR.addAssign_operation (GALGAS_userLLVMStaticArrayTypeDefinitionIR::constructor_new (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) var_arrayType_18977.ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 500)), var_elementType_14356, var_stringValueList_15049.getter_length (SOURCE_FILE ("declaration-static-list.galgas", 502)).getter_bigint (SOURCE_FILE ("declaration-static-list.galgas", 502))  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 499))  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 499)) ;
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
  GALGAS_stringset var_invokedFunctionSet_21931 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("declaration-static-list.galgas", 531)) ;
  cEnumerator_staticListValueListAST enumerator_21968 (object->mProperty_mValueList, kENUMERATION_UP) ;
  while (enumerator_21968.hasCurrentObject ()) {
    cEnumerator_extendStaticListElementAST enumerator_22009 (enumerator_21968.current_mElement (HERE), kENUMERATION_UP) ;
    while (enumerator_22009.hasCurrentObject ()) {
      switch (enumerator_22009.current_mExpression (HERE).enumValue ()) {
      case GALGAS_extendStaticListExpressionAST::kNotBuilt:
        break ;
      case GALGAS_extendStaticListExpressionAST::kEnum_expression:
        {
          const cEnumAssociatedValues_extendStaticListExpressionAST_expression * extractPtr_22085 = (const cEnumAssociatedValues_extendStaticListExpressionAST_expression *) (enumerator_22009.current_mExpression (HERE).unsafePointer ()) ;
          const GALGAS_expressionAST extractedValue_exp = extractPtr_22085->mAssociatedValue0 ;
        }
        break ;
      case GALGAS_extendStaticListExpressionAST::kEnum_function:
        {
          const cEnumAssociatedValues_extendStaticListExpressionAST_function * extractPtr_22386 = (const cEnumAssociatedValues_extendStaticListExpressionAST_function *) (enumerator_22009.current_mExpression (HERE).unsafePointer ()) ;
          const GALGAS_lstring extractedValue_functionName = extractPtr_22386->mAssociatedValue0 ;
          const GALGAS_routineFormalArgumentListAST extractedValue_formalArgs = extractPtr_22386->mAssociatedValue1 ;
          GALGAS_lstring var_routineMangledName_22235 = function_routineMangledNameFromAST (GALGAS_string::makeEmptyString (), extractedValue_functionName, extractedValue_formalArgs, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 538)) ;
          var_invokedFunctionSet_21931.addAssign_operation (var_routineMangledName_22235.getter_string (SOURCE_FILE ("declaration-static-list.galgas", 543))  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 543)) ;
        }
        break ;
      }
      enumerator_22009.gotoNextObject () ;
    }
    enumerator_21968.gotoNextObject () ;
  }
  {
  ioArgument_ioTemporaries.mProperty_mStaticArrayMapForTemporaries.setter_insertKey (object->mProperty_mStaticListName, var_invokedFunctionSet_21931, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 547)) ;
  }
  {
  ioArgument_ioIntermediateCodeStruct.mProperty_mStaticArrayMapForIntermediate.setter_insertKey (object->mProperty_mStaticListName, var_invokedFunctionSet_21931, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 548)) ;
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
//                    Overriding extension method '@staticListIndirectRoutineIR llvmCodeGeneration'                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_staticListIndirectRoutineIR_llvmCodeGeneration (const cPtr_abstractRoutineIR * inObject,
                                                                            GALGAS_string & ioArgument_ioLLVMcode,
                                                                            const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                            GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_staticListIndirectRoutineIR * object = (const cPtr_staticListIndirectRoutineIR *) inObject ;
  macroValidSharedObject (object, cPtr_staticListIndirectRoutineIR) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal "), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 598)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsEqual, object->mProperty_mReturnTypeProxy.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-static-list.galgas", 599)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("void"), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 600)) ;
    }
  }
  if (kBoolFalse == test_0) {
    ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) object->mProperty_mReturnTypeProxy.getter_type (inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 602)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 602)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 602)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" @").add_operation (object->mProperty_mRoutineMangledName.getter_string (HERE).getter_assemblerRepresentation (SOURCE_FILE ("declaration-static-list.galgas", 604)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 604)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 604)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 604)) ;
  GALGAS_string var_receiverLLVMTypeName_24909 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) object->mProperty_mStaticListElementType.getter_type (inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 605)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 605)) ;
  GALGAS_bool var_first_24968 = GALGAS_bool (true) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsNotEqual, var_receiverLLVMTypeName_24909.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      ioArgument_ioLLVMcode.plusAssign_operation(var_receiverLLVMTypeName_24909.add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 608)).add_operation (function_llvmNameForSelf (inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 608)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 608)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 608)) ;
      var_first_24968 = GALGAS_bool (false) ;
    }
  }
  cEnumerator_routineTypedSignature enumerator_25148 (object->mProperty_mFormalArgumentListForGeneration, kENUMERATION_UP) ;
  while (enumerator_25148.hasCurrentObject ()) {
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = var_first_24968.boolEnum () ;
      if (kBoolTrue == test_2) {
        var_first_24968 = GALGAS_bool (false) ;
      }
    }
    if (kBoolFalse == test_2) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 615)) ;
    }
    switch (enumerator_25148.current_mFormalArgumentPassingMode (HERE).enumValue ()) {
    case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_input:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_25148.current_mTypeProxy (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 619)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 619)).add_operation (GALGAS_string (" %in."), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 619)).add_operation (enumerator_25148.current_mFormalArgumentName (HERE).getter_string (HERE).getter_assemblerRepresentation (SOURCE_FILE ("declaration-static-list.galgas", 619)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 619)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 619)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_output:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_25148.current_mTypeProxy (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 621)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 621)).add_operation (GALGAS_string ("* %out."), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 621)).add_operation (enumerator_25148.current_mFormalArgumentName (HERE).getter_string (HERE).getter_assemblerRepresentation (SOURCE_FILE ("declaration-static-list.galgas", 621)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 621)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 621)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_25148.current_mTypeProxy (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 623)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 623)).add_operation (GALGAS_string ("* %inout."), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 623)).add_operation (enumerator_25148.current_mFormalArgumentName (HERE).getter_string (HERE).getter_assemblerRepresentation (SOURCE_FILE ("declaration-static-list.galgas", 623)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 623)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 623)) ;
      }
      break ;
    }
    enumerator_25148.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (")").add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 626)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 626)).add_operation (GALGAS_string ("{\n"), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 626)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 626)) ;
  GALGAS_string var_llvmFunctionTypeName_25803 ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = GALGAS_bool (kIsEqual, object->mProperty_mReturnTypeProxy.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-static-list.galgas", 629)))).boolEnum () ;
    if (kBoolTrue == test_3) {
      var_llvmFunctionTypeName_25803 = GALGAS_string ("void") ;
    }
  }
  if (kBoolFalse == test_3) {
    var_llvmFunctionTypeName_25803 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) object->mProperty_mReturnTypeProxy.getter_type (inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 632)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 632)) ;
  }
  var_llvmFunctionTypeName_25803.plusAssign_operation(GALGAS_string ("("), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 634)) ;
  var_first_24968 = GALGAS_bool (true) ;
  cEnumerator_routineTypedSignature enumerator_26042 (object->mProperty_mFormalArgumentListForGeneration, kENUMERATION_UP) ;
  while (enumerator_26042.hasCurrentObject ()) {
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = var_first_24968.boolEnum () ;
      if (kBoolTrue == test_4) {
        var_first_24968 = GALGAS_bool (false) ;
      }
    }
    if (kBoolFalse == test_4) {
      var_llvmFunctionTypeName_25803.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 640)) ;
    }
    switch (enumerator_26042.current_mFormalArgumentPassingMode (HERE).enumValue ()) {
    case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_input:
      {
        var_llvmFunctionTypeName_25803.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_26042.current_mTypeProxy (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 644)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 644)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 644)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_output:
      {
        var_llvmFunctionTypeName_25803.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_26042.current_mTypeProxy (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 646)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 646)).add_operation (GALGAS_string ("*"), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 646)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 646)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
      {
        var_llvmFunctionTypeName_25803.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_26042.current_mTypeProxy (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 648)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 648)).add_operation (GALGAS_string ("*"), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 648)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 648)) ;
      }
      break ;
    }
    enumerator_26042.gotoNextObject () ;
  }
  var_llvmFunctionTypeName_25803.plusAssign_operation(GALGAS_string (")*"), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 651)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %ptr = getelementptr inbounds ").add_operation (var_receiverLLVMTypeName_24909, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 653)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 653)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", ").add_operation (var_receiverLLVMTypeName_24909, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 654)).add_operation (GALGAS_string ("* %self, i32 0, i32 "), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 654)).add_operation (object->mProperty_mPropertyIndex.getter_string (SOURCE_FILE ("declaration-static-list.galgas", 654)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 654)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 654)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 654)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %f = load ").add_operation (var_llvmFunctionTypeName_25803, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 655)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 655)).add_operation (var_llvmFunctionTypeName_25803, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 655)).add_operation (GALGAS_string ("* %ptr\n"), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 655)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 655)) ;
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    test_5 = GALGAS_bool (kIsEqual, object->mProperty_mReturnTypeProxy.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-static-list.galgas", 656)))).boolEnum () ;
    if (kBoolTrue == test_5) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void"), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 657)) ;
    }
  }
  if (kBoolFalse == test_5) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %result = call ").add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) object->mProperty_mReturnTypeProxy.getter_type (inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 659)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 659)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 659)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 659)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" %f ("), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 661)) ;
  var_first_24968 = GALGAS_bool (true) ;
  cEnumerator_routineTypedSignature enumerator_27004 (object->mProperty_mFormalArgumentListForGeneration, kENUMERATION_UP) ;
  while (enumerator_27004.hasCurrentObject ()) {
    enumGalgasBool test_6 = kBoolTrue ;
    if (kBoolTrue == test_6) {
      test_6 = var_first_24968.boolEnum () ;
      if (kBoolTrue == test_6) {
        var_first_24968 = GALGAS_bool (false) ;
      }
    }
    if (kBoolFalse == test_6) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 667)) ;
    }
    switch (enumerator_27004.current_mFormalArgumentPassingMode (HERE).enumValue ()) {
    case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_input:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_27004.current_mTypeProxy (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 671)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 671)).add_operation (GALGAS_string (" %in."), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 671)).add_operation (enumerator_27004.current_mFormalArgumentName (HERE).getter_string (HERE).getter_assemblerRepresentation (SOURCE_FILE ("declaration-static-list.galgas", 671)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 671)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 671)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_output:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_27004.current_mTypeProxy (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 673)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 673)).add_operation (GALGAS_string ("* %out."), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 673)).add_operation (enumerator_27004.current_mFormalArgumentName (HERE).getter_string (HERE).getter_assemblerRepresentation (SOURCE_FILE ("declaration-static-list.galgas", 673)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 673)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 673)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_27004.current_mTypeProxy (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 675)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 675)).add_operation (GALGAS_string ("* %inout."), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 675)).add_operation (enumerator_27004.current_mFormalArgumentName (HERE).getter_string (HERE).getter_assemblerRepresentation (SOURCE_FILE ("declaration-static-list.galgas", 675)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 675)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 675)) ;
      }
      break ;
    }
    enumerator_27004.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (")\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 678)) ;
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    test_7 = GALGAS_bool (kIsEqual, object->mProperty_mReturnTypeProxy.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-static-list.galgas", 680)))).boolEnum () ;
    if (kBoolTrue == test_7) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 681)) ;
    }
  }
  if (kBoolFalse == test_7) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret ").add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) object->mProperty_mReturnTypeProxy.getter_type (inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 683)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 683)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 683)).add_operation (GALGAS_string (" %result\n"), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 683)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 683)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 685)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_staticListIndirectRoutineIR_llvmCodeGeneration (void) {
  enterExtensionMethod_llvmCodeGeneration (kTypeDescriptor_GALGAS_staticListIndirectRoutineIR.mSlotID,
                                           extensionMethod_staticListIndirectRoutineIR_llvmCodeGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_staticListIndirectRoutineIR_llvmCodeGeneration (defineExtensionMethod_staticListIndirectRoutineIR_llvmCodeGeneration, NULL) ;

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
  cEnumerator_decoratedTaskList enumerator_17037 (object->mProperty_mTaskList, kENUMERATION_UP) ;
  GALGAS_uint index_17019 ((uint32_t) 0) ;
  while (enumerator_17037.hasCurrentObject ()) {
    extensionMethod_taskSemanticAnalysis (enumerator_17037.current (HERE), constinArgument_inContext, index_17019, ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 453)) ;
    enumerator_17037.gotoNextObject () ;
    index_17019.increment_operation (inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 452)) ;
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
  outArgument_outSetupOrderedList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("task-declaration.galgas", 468)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsStrictSup, constinArgument_inTaskRoutineLISTAST.getter_length (SOURCE_FILE ("task-declaration.galgas", 469)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_uint var_numberOfEntriesWithoutAnyPrecedence_17654 = GALGAS_uint ((uint32_t) 0U) ;
      cEnumerator_taskSetupListAST enumerator_17712 (constinArgument_inTaskRoutineLISTAST, kENUMERATION_UP) ;
      while (enumerator_17712.hasCurrentObject ()) {
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          test_1 = GALGAS_bool (kIsEqual, enumerator_17712.current_mDependanceList (HERE).getter_length (SOURCE_FILE ("task-declaration.galgas", 473)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
          if (kBoolTrue == test_1) {
            var_numberOfEntriesWithoutAnyPrecedence_17654.plusAssign_operation(var_numberOfEntriesWithoutAnyPrecedence_17654.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 474)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 474)) ;
          }
        }
        enumerator_17712.gotoNextObject () ;
      }
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = GALGAS_bool (kIsEqual, var_numberOfEntriesWithoutAnyPrecedence_17654.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_2) {
          cEnumerator_taskSetupListAST enumerator_17960 (constinArgument_inTaskRoutineLISTAST, kENUMERATION_UP) ;
          while (enumerator_17960.hasCurrentObject ()) {
            TC_Array <C_FixItDescription> fixItArray3 ;
            inCompiler->emitSemanticError (enumerator_17960.current_mName (HERE).getter_location (SOURCE_FILE ("task-declaration.galgas", 479)), GALGAS_string ("Exactly one routine should have no precedence"), fixItArray3  COMMA_SOURCE_FILE ("task-declaration.galgas", 479)) ;
            enumerator_17960.gotoNextObject () ;
          }
        }
      }
      if (kBoolFalse == test_2) {
        enumGalgasBool test_4 = kBoolTrue ;
        if (kBoolTrue == test_4) {
          test_4 = GALGAS_bool (kIsStrictSup, var_numberOfEntriesWithoutAnyPrecedence_17654.objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
          if (kBoolTrue == test_4) {
            cEnumerator_taskSetupListAST enumerator_18156 (constinArgument_inTaskRoutineLISTAST, kENUMERATION_UP) ;
            while (enumerator_18156.hasCurrentObject ()) {
              enumGalgasBool test_5 = kBoolTrue ;
              if (kBoolTrue == test_5) {
                test_5 = GALGAS_bool (kIsEqual, enumerator_18156.current_mDependanceList (HERE).getter_length (SOURCE_FILE ("task-declaration.galgas", 483)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
                if (kBoolTrue == test_5) {
                  TC_Array <C_FixItDescription> fixItArray6 ;
                  inCompiler->emitSemanticError (enumerator_18156.current_mName (HERE).getter_location (SOURCE_FILE ("task-declaration.galgas", 484)), GALGAS_string ("Exactly one routine should have no precedence"), fixItArray6  COMMA_SOURCE_FILE ("task-declaration.galgas", 484)) ;
                }
              }
              enumerator_18156.gotoNextObject () ;
            }
          }
        }
      }
      GALGAS_taskSetupListAST var_taskSetupListAST_18388 = constinArgument_inTaskRoutineLISTAST ;
      GALGAS_stringset var_precedenceSet_18440 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("task-declaration.galgas", 490)) ;
      GALGAS_bool var_continue_18462 = GALGAS_bool (true) ;
      if (constinArgument_inTaskRoutineLISTAST.getter_length (SOURCE_FILE ("task-declaration.galgas", 492)).isValid ()) {
        uint32_t variant_18478 = constinArgument_inTaskRoutineLISTAST.getter_length (SOURCE_FILE ("task-declaration.galgas", 492)).uintValue () ;
        bool loop_18478 = true ;
        while (loop_18478) {
          GALGAS_bool test_7 = var_continue_18462 ;
          if (kBoolTrue == test_7.boolEnum ()) {
            test_7 = GALGAS_bool (kIsStrictSup, var_taskSetupListAST_18388.getter_length (SOURCE_FILE ("task-declaration.galgas", 492)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
          }
          loop_18478 = test_7.isValid () ;
          if (loop_18478) {
            loop_18478 = test_7.boolValue () ;
          }
          if (loop_18478 && (0 == variant_18478)) {
            loop_18478 = false ;
            inCompiler->loopRunTimeVariantError (SOURCE_FILE ("task-declaration.galgas", 492)) ;
          }
          if (loop_18478) {
            variant_18478 -- ;
            var_continue_18462 = GALGAS_bool (false) ;
            GALGAS_uint var_idx_18600 = GALGAS_uint ((uint32_t) 0U) ;
            cEnumerator_taskSetupListAST enumerator_18689 (var_taskSetupListAST_18388, kENUMERATION_UP) ;
            while (enumerator_18689.hasCurrentObject ()) {
              GALGAS_bool var_allPrecedenceDefined_18725 = GALGAS_bool (true) ;
              cEnumerator_lstringlist enumerator_18779 (enumerator_18689.current_mDependanceList (HERE), kENUMERATION_UP) ;
              bool bool_8 = var_allPrecedenceDefined_18725.isValidAndTrue () ;
              if (enumerator_18779.hasCurrentObject () && bool_8) {
                while (enumerator_18779.hasCurrentObject () && bool_8) {
                  var_allPrecedenceDefined_18725 = var_precedenceSet_18440.getter_hasKey (enumerator_18779.current_mValue (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("task-declaration.galgas", 498)) ;
                  enumerator_18779.gotoNextObject () ;
                  if (enumerator_18779.hasCurrentObject ()) {
                    bool_8 = var_allPrecedenceDefined_18725.isValidAndTrue () ;
                  }
                }
              }
              enumGalgasBool test_9 = kBoolTrue ;
              if (kBoolTrue == test_9) {
                test_9 = var_allPrecedenceDefined_18725.boolEnum () ;
                if (kBoolTrue == test_9) {
                  outArgument_outSetupOrderedList.addAssign_operation (enumerator_18689.current_mName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("task-declaration.galgas", 501)) ;
                  var_precedenceSet_18440.addAssign_operation (enumerator_18689.current_mName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("task-declaration.galgas", 502)) ;
                  var_continue_18462 = GALGAS_bool (true) ;
                  {
                  GALGAS_lstring joker_19095_4 ; // Joker input parameter
                  GALGAS_lstringlist joker_19095_3 ; // Joker input parameter
                  GALGAS_instructionListAST joker_19095_2 ; // Joker input parameter
                  GALGAS_location joker_19095_1 ; // Joker input parameter
                  var_taskSetupListAST_18388.setter_removeAtIndex (joker_19095_4, joker_19095_3, joker_19095_2, joker_19095_1, var_idx_18600, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 504)) ;
                  }
                }
              }
              if (kBoolFalse == test_9) {
                var_idx_18600 = var_idx_18600.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 506)) ;
              }
              enumerator_18689.gotoNextObject () ;
            }
          }
        }
      }
      cEnumerator_taskSetupListAST enumerator_19248 (var_taskSetupListAST_18388, kENUMERATION_UP) ;
      while (enumerator_19248.hasCurrentObject ()) {
        TC_Array <C_FixItDescription> fixItArray10 ;
        inCompiler->emitSemanticError (enumerator_19248.current_mName (HERE).getter_location (SOURCE_FILE ("task-declaration.galgas", 512)), GALGAS_string ("this routine is out of execution order"), fixItArray10  COMMA_SOURCE_FILE ("task-declaration.galgas", 512)) ;
        enumerator_19248.gotoNextObject () ;
      }
    }
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
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal void @").add_operation (object->mProperty_mRoutineMangledName.getter_string (HERE).getter_assemblerRepresentation (SOURCE_FILE ("task-declaration.galgas", 744)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 744)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 744)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 744)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("(%").add_operation (object->mProperty_mAssemblerTaskName, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 745)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 745)).add_operation (function_llvmNameForSelf (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 745)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 745)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 745)).add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 745)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 745)).add_operation (GALGAS_string ("{\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 745)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 745)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @").add_operation (object->mProperty_mActivateServiceInvocationName, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 746)).add_operation (GALGAS_string (" (i8 "), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 746)).add_operation (object->mProperty_mTaskIndex.getter_string (SOURCE_FILE ("task-declaration.galgas", 746)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 746)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 746)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 746)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 747)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 748)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(function_llvmSeparatorLine (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 749)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 749)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 750)) ;
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
//                    Overriding extension method '@functionDeclarationAST enterInPrecedenceGraph'                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_functionDeclarationAST_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                                           GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_functionDeclarationAST * object = (const cPtr_functionDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_functionDeclarationAST) ;
  cEnumerator_routineFormalArgumentListAST enumerator_2828 (object->mProperty_mFunctionFormalArgumentList, kENUMERATION_UP) ;
  while (enumerator_2828.hasCurrentObject ()) {
    {
    ioArgument_ioGraph.setter_noteNode (enumerator_2828.current_mFormalArgumentTypeName (HERE) COMMA_SOURCE_FILE ("declaration-function.galgas", 73)) ;
    }
    enumerator_2828.gotoNextObject () ;
  }
  extensionMethod_noteInstructionListTypesInPrecedenceGraph (object->mProperty_mFunctionInstructionList, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 75)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, object->mProperty_mReceiverTypeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      ioArgument_ioGraph.setter_noteNode (object->mProperty_mReceiverTypeName COMMA_SOURCE_FILE ("declaration-function.galgas", 77)) ;
      }
    }
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsNotEqual, object->mProperty_mFunctionReturnTypeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      {
      ioArgument_ioGraph.setter_noteNode (object->mProperty_mFunctionReturnTypeName COMMA_SOURCE_FILE ("declaration-function.galgas", 80)) ;
      }
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_functionDeclarationAST_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_functionDeclarationAST.mSlotID,
                                               extensionMethod_functionDeclarationAST_enterInPrecedenceGraph) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_functionDeclarationAST_enterInPrecedenceGraph (defineExtensionMethod_functionDeclarationAST_enterInPrecedenceGraph, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//              Overriding extension getter '@functionDeclarationAST keyRepresentationForErrorSignaling'               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string extensionGetter_functionDeclarationAST_keyRepresentationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_functionDeclarationAST * object = (const cPtr_functionDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_functionDeclarationAST) ;
  result_result = GALGAS_string ("function ").add_operation (object->mProperty_mReceiverTypeName.getter_string (SOURCE_FILE ("declaration-function.galgas", 87)), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 87)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 87)).add_operation (object->mProperty_mFunctionName.getter_string (SOURCE_FILE ("declaration-function.galgas", 87)), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 87)) ;
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_functionDeclarationAST_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_functionDeclarationAST.mSlotID,
                                                           extensionGetter_functionDeclarationAST_keyRepresentationForErrorSignaling) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_functionDeclarationAST_keyRepresentationForErrorSignaling (defineExtensionGetter_functionDeclarationAST_keyRepresentationForErrorSignaling, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                   Overriding extension getter '@functionDeclarationAST locationForErrorSignaling'                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_location extensionGetter_functionDeclarationAST_locationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                         C_Compiler * /* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_result ; // Returned variable
  const cPtr_functionDeclarationAST * object = (const cPtr_functionDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_functionDeclarationAST) ;
  result_result = object->mProperty_mFunctionName.getter_location (HERE) ;
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_functionDeclarationAST_locationForErrorSignaling (void) {
  enterExtensionGetter_locationForErrorSignaling (kTypeDescriptor_GALGAS_functionDeclarationAST.mSlotID,
                                                  extensionGetter_functionDeclarationAST_locationForErrorSignaling) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_functionDeclarationAST_locationForErrorSignaling (defineExtensionGetter_functionDeclarationAST_locationForErrorSignaling, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                        Overriding extension method '@functionDeclarationAST enterInContext'                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_functionDeclarationAST_enterInContext (const cPtr_abstractDeclarationAST * inObject,
                                                                   const GALGAS_functionDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                                   GALGAS_semanticContext & ioArgument_ioContext,
                                                                   GALGAS_declarationDecorationList & /* ioArgument_ioDecoratedDeclarationList */,
                                                                   GALGAS_decoratedRegularRoutineList & ioArgument_ioDecoratedRoutineList,
                                                                   GALGAS_routineListIR & /* ioArgument_ioRoutineListIR */,
                                                                   GALGAS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                                   GALGAS_staticEntityMap & /* ioArgument_ioStaticEntityMap */,
                                                                   GALGAS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                                   GALGAS_userLLVMTypeDefinitionListIR & /* ioArgument_ioUserLLVMTypeDefinitionListIR */,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_functionDeclarationAST * object = (const cPtr_functionDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_functionDeclarationAST) ;
  GALGAS_routineTypedSignature var_signature_4820 ;
  {
  routine_routineTypedSignature (ioArgument_ioContext.mProperty_mTypeMap, object->mProperty_mFunctionFormalArgumentList, var_signature_4820, inCompiler  COMMA_SOURCE_FILE ("declaration-function.galgas", 112)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_returnTypeProxy_4948 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeOptionalProxy (ioArgument_ioContext.mProperty_mTypeMap, object->mProperty_mFunctionReturnTypeName, var_returnTypeProxy_4948 COMMA_SOURCE_FILE ("declaration-function.galgas", 114)) ;
  }
  GALGAS_bool var_warnIfUnused_4984 = GALGAS_bool (true) ;
  GALGAS_bool var_exportedFunction_5014 = GALGAS_bool (false) ;
  GALGAS_bool var_canMutateProperties_5048 = GALGAS_bool (false) ;
  cEnumerator_lstringlist enumerator_5100 (object->mProperty_mFunctionAttributeList, kENUMERATION_UP) ;
  while (enumerator_5100.hasCurrentObject ()) {
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GALGAS_bool (kIsEqual, enumerator_5100.current_mValue (HERE).getter_string (HERE).objectCompare (function_noUnusedWarningAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 120)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          test_1 = var_warnIfUnused_4984.operator_not (SOURCE_FILE ("declaration-function.galgas", 121)).boolEnum () ;
          if (kBoolTrue == test_1) {
            TC_Array <C_FixItDescription> fixItArray2 ;
            inCompiler->emitSemanticError (enumerator_5100.current_mValue (HERE).getter_location (SOURCE_FILE ("declaration-function.galgas", 122)), GALGAS_string ("duplicated @").add_operation (function_noUnusedWarningAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 122)), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 122)).add_operation (GALGAS_string (" attribute"), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 122)), fixItArray2  COMMA_SOURCE_FILE ("declaration-function.galgas", 122)) ;
          }
        }
        var_warnIfUnused_4984 = GALGAS_bool (false) ;
      }
    }
    if (kBoolFalse == test_0) {
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = GALGAS_bool (kIsEqual, enumerator_5100.current_mValue (HERE).getter_string (HERE).objectCompare (function_exportedAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 125)))).boolEnum () ;
        if (kBoolTrue == test_3) {
          enumGalgasBool test_4 = kBoolTrue ;
          if (kBoolTrue == test_4) {
            test_4 = var_exportedFunction_5014.boolEnum () ;
            if (kBoolTrue == test_4) {
              TC_Array <C_FixItDescription> fixItArray5 ;
              inCompiler->emitSemanticError (enumerator_5100.current_mValue (HERE).getter_location (SOURCE_FILE ("declaration-function.galgas", 127)), GALGAS_string ("duplicated @").add_operation (function_exportedAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 127)), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 127)).add_operation (GALGAS_string (" attribute"), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 127)), fixItArray5  COMMA_SOURCE_FILE ("declaration-function.galgas", 127)) ;
            }
          }
          var_exportedFunction_5014 = GALGAS_bool (true) ;
        }
      }
      if (kBoolFalse == test_3) {
        enumGalgasBool test_6 = kBoolTrue ;
        if (kBoolTrue == test_6) {
          test_6 = GALGAS_bool (kIsEqual, enumerator_5100.current_mValue (HERE).getter_string (HERE).objectCompare (function_mutatingAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 130)))).boolEnum () ;
          if (kBoolTrue == test_6) {
            enumGalgasBool test_7 = kBoolTrue ;
            if (kBoolTrue == test_7) {
              test_7 = var_canMutateProperties_5048.boolEnum () ;
              if (kBoolTrue == test_7) {
                TC_Array <C_FixItDescription> fixItArray8 ;
                inCompiler->emitSemanticError (enumerator_5100.current_mValue (HERE).getter_location (SOURCE_FILE ("declaration-function.galgas", 132)), GALGAS_string ("duplicated @").add_operation (function_mutatingAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 132)), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 132)).add_operation (GALGAS_string (" attribute"), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 132)), fixItArray8  COMMA_SOURCE_FILE ("declaration-function.galgas", 132)) ;
              }
            }
            var_canMutateProperties_5048 = GALGAS_bool (true) ;
          }
        }
        if (kBoolFalse == test_6) {
          TC_Array <C_FixItDescription> fixItArray9 ;
          inCompiler->emitSemanticError (enumerator_5100.current_mValue (HERE).getter_location (SOURCE_FILE ("declaration-function.galgas", 136)), GALGAS_string ("unknown attribute; available attributes are @").add_operation (function_noUnusedWarningAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 137)), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 136)).add_operation (GALGAS_string (", @"), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 137)).add_operation (function_noUnusedWarningAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 137)), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 137)).add_operation (GALGAS_string (" and @"), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 137)).add_operation (function_exportedAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 137)), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 137)), fixItArray9  COMMA_SOURCE_FILE ("declaration-function.galgas", 136)) ;
        }
      }
    }
    enumerator_5100.gotoNextObject () ;
  }
  GALGAS_lstring var_functionLLVMName_5993 = function_routineMangledNameFromAST (object->mProperty_mReceiverTypeName.getter_string (HERE), object->mProperty_mFunctionName, object->mProperty_mFunctionFormalArgumentList, inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 141)) ;
  GALGAS_routineLLVMNameDict var_routineLLVMNameDict_6202 = extensionGetter_routineLLVMDictionaryForFunction (object->mProperty_mMode, var_functionLLVMName_5993.getter_string (SOURCE_FILE ("declaration-function.galgas", 147)), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 147)) ;
  GALGAS_lstring var_routineMangledName_6288 = extensionGetter_mangledName (var_signature_4820, object->mProperty_mFunctionName, inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 148)) ;
  {
  ioArgument_ioContext.mProperty_mRoutineMap.setter_insertKey (var_routineMangledName_6288, object->mProperty_mPublicFunction, var_signature_4820, var_returnTypeProxy_4948, var_routineLLVMNameDict_6202, var_exportedFunction_5014, object->mProperty_mMode, inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 149)) ;
  }
  ioArgument_ioDecoratedRoutineList.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-function.galgas", 160)), object->mProperty_mMode, ioArgument_ioContext.getter_mRequiredRoutineSet (HERE).getter_hasKey (var_functionLLVMName_5993.getter_string (HERE) COMMA_SOURCE_FILE ("declaration-function.galgas", 162)), GALGAS_routineKind::constructor_function (SOURCE_FILE ("declaration-function.galgas", 163)), var_warnIfUnused_4984, var_exportedFunction_5014, GALGAS_routineAttributes::constructor_none (SOURCE_FILE ("declaration-function.galgas", 166)), var_functionLLVMName_5993, object->mProperty_mFunctionFormalArgumentList, GALGAS_bool (true), object->mProperty_mFunctionInstructionList, object->mProperty_mEndOfFunctionDeclaration, object->mProperty_mFunctionReturnTypeName  COMMA_SOURCE_FILE ("declaration-function.galgas", 159)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_functionDeclarationAST_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_functionDeclarationAST.mSlotID,
                                       extensionMethod_functionDeclarationAST_enterInContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_functionDeclarationAST_enterInContext (defineExtensionMethod_functionDeclarationAST_enterInContext, NULL) ;

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
  GALGAS_string var_s_5563 ;
  switch (constinArgument_inKind.enumValue ()) {
  case GALGAS_routineKind::kNotBuilt:
    break ;
  case GALGAS_routineKind::kEnum_section:
    {
      var_s_5563 = GALGAS_string ("section") ;
    }
    break ;
  case GALGAS_routineKind::kEnum_service:
    {
      var_s_5563 = GALGAS_string ("service") ;
    }
    break ;
  case GALGAS_routineKind::kEnum_primitive:
    {
      var_s_5563 = GALGAS_string ("primitive") ;
    }
    break ;
  case GALGAS_routineKind::kEnum_function:
    {
      var_s_5563 = GALGAS_string ("\?\?\?") ;
    }
    break ;
  }
  var_s_5563.plusAssign_operation(GALGAS_string (".user."), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 189)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inReceiverLLVMBaseTypeName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      var_s_5563.plusAssign_operation(constinArgument_inReceiverLLVMBaseTypeName.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 191)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 191)) ;
    }
  }
  var_s_5563.plusAssign_operation(constinArgument_inGuardName.getter_string (HERE), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 193)) ;
  var_s_5563.plusAssign_operation(GALGAS_string ("("), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 194)) ;
  cEnumerator_routineFormalArgumentListAST enumerator_5963 (constinArgument_inFormalArgumentList, kENUMERATION_UP) ;
  while (enumerator_5963.hasCurrentObject ()) {
    var_s_5563.plusAssign_operation(extensionGetter_formalPassingModeString (enumerator_5963.current_mFormalArgumentPassingMode (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 196)).add_operation (enumerator_5963.current_mSelector (HERE).getter_string (SOURCE_FILE ("declaration-svc.galgas", 196)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 196)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 196)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 196)) ;
    enumerator_5963.gotoNextObject () ;
  }
  var_s_5563.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 199)) ;
  result_result = GALGAS_lstring::constructor_new (var_s_5563, constinArgument_inGuardName.getter_location (HERE)  COMMA_SOURCE_FILE ("declaration-svc.galgas", 200)) ;
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
  GALGAS_string var_s_6638 ;
  switch (constinArgument_inKind.enumValue ()) {
  case GALGAS_routineKind::kNotBuilt:
    break ;
  case GALGAS_routineKind::kEnum_section:
    {
      var_s_6638 = GALGAS_string ("section") ;
    }
    break ;
  case GALGAS_routineKind::kEnum_service:
    {
      var_s_6638 = GALGAS_string ("service") ;
    }
    break ;
  case GALGAS_routineKind::kEnum_primitive:
    {
      var_s_6638 = GALGAS_string ("primitive") ;
    }
    break ;
  case GALGAS_routineKind::kEnum_function:
    {
      var_s_6638 = GALGAS_string ("\?\?\?") ;
    }
    break ;
  }
  var_s_6638.plusAssign_operation(GALGAS_string (".implementation."), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 221)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inReceiverLLVMBaseTypeName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      var_s_6638.plusAssign_operation(constinArgument_inReceiverLLVMBaseTypeName.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 223)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 223)) ;
    }
  }
  var_s_6638.plusAssign_operation(constinArgument_inGuardName.getter_string (HERE), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 225)) ;
  var_s_6638.plusAssign_operation(GALGAS_string ("("), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 226)) ;
  cEnumerator_routineFormalArgumentListAST enumerator_7048 (constinArgument_inFormalArgumentList, kENUMERATION_UP) ;
  while (enumerator_7048.hasCurrentObject ()) {
    var_s_6638.plusAssign_operation(extensionGetter_formalPassingModeString (enumerator_7048.current_mFormalArgumentPassingMode (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 228)).add_operation (enumerator_7048.current_mSelector (HERE).getter_string (SOURCE_FILE ("declaration-svc.galgas", 228)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 228)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 228)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 228)) ;
    enumerator_7048.gotoNextObject () ;
  }
  var_s_6638.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 230)) ;
  result_result = GALGAS_lstring::constructor_new (var_s_6638, constinArgument_inGuardName.getter_location (HERE)  COMMA_SOURCE_FILE ("declaration-svc.galgas", 231)) ;
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
                                              const GALGAS_omnibusType & constinArgument_inReceiverType,
                                              const GALGAS_routineFormalArgumentListIR & constinArgument_inFormalArgumentListForGeneration,
                                              C_Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = constinArgument_inReturnTypeLLVMName ;
  result_result.plusAssign_operation(GALGAS_string (" @").add_operation (constinArgument_inFunctionName, inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 376)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 376)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 376)) ;
  GALGAS_bool var_first_12983 = GALGAS_bool (true) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inReceiverType.getter_kind (HERE).objectCompare (GALGAS_typeKind::constructor_void (SOURCE_FILE ("declaration-svc.galgas", 378)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      result_result.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inReceiverType.ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 379)).add_operation (GALGAS_string (" * %receiver"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 379)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 379)) ;
      var_first_12983 = GALGAS_bool (false) ;
    }
  }
  cEnumerator_routineFormalArgumentListIR enumerator_13160 (constinArgument_inFormalArgumentListForGeneration, kENUMERATION_UP) ;
  while (enumerator_13160.hasCurrentObject ()) {
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = var_first_12983.boolEnum () ;
      if (kBoolTrue == test_1) {
        var_first_12983 = GALGAS_bool (false) ;
      }
    }
    if (kBoolFalse == test_1) {
      result_result.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 386)) ;
    }
    switch (enumerator_13160.current_mFormalArgumentKind (HERE).enumValue ()) {
    case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_input:
      {
        result_result.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_13160.current_mFormalArgumentType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 390)).add_operation (GALGAS_string (" %in."), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 390)).add_operation (enumerator_13160.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 390)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 390)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_output:
      {
        result_result.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_13160.current_mFormalArgumentType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 392)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 392)).add_operation (function_llvmNameForLocalVariable (enumerator_13160.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 392)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 392)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 392)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
      {
        result_result.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_13160.current_mFormalArgumentType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 394)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 394)).add_operation (function_llvmNameForLocalVariable (enumerator_13160.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 394)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 394)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 394)) ;
      }
      break ;
    }
    enumerator_13160.gotoNextObject () ;
  }
  result_result.plusAssign_operation(GALGAS_string (")").add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 397)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 397)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 397)) ;
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function introspection                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const C_galgas_type_descriptor * functionArgs_llvmFunctionPrototype [5] = {
  & kTypeDescriptor_GALGAS_string,
  & kTypeDescriptor_GALGAS_string,
  & kTypeDescriptor_GALGAS_omnibusType,
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
  const GALGAS_omnibusType operand2 = GALGAS_omnibusType::extractObject (inEffectiveParameterArray.objectAtIndex (2 COMMA_HERE),
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
  cEnumerator_sectionIRlist enumerator_14065 (constinArgument_inSectionIRlist, kENUMERATION_UP) ;
  GALGAS_uint index_14038 ((uint32_t) 0) ;
  while (enumerator_14065.hasCurrentObject ()) {
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = enumerator_14065.current (HERE).getter_invocationFromAnyMode (HERE).boolEnum () ;
      if (kBoolTrue == test_0) {
        GALGAS_string var_s_14128 = function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 413)).add_operation (constinArgument_inTargetParameters.getter_mSectionDispatcherInvocationFromAnyMode (HERE).getter_string (SOURCE_FILE ("declaration-svc.galgas", 413)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 413)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 411)) ;
        var_s_14128 = var_s_14128.getter_stringByReplacingStringByString (GALGAS_string ("!USER_ROUTINE!"), enumerator_14065.current (HERE).getter_mSectionCallName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 415)) ;
        var_s_14128 = var_s_14128.getter_stringByReplacingStringByString (GALGAS_string ("!IMPLEMENTATION_ROUTINE!"), enumerator_14065.current (HERE).getter_mSectionImplementationName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 416)) ;
        var_s_14128 = var_s_14128.getter_stringByReplacingStringByString (GALGAS_string ("!IDX!"), index_14038.getter_string (SOURCE_FILE ("declaration-svc.galgas", 417)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 417)) ;
        ioArgument_ioAssemblerCode.plusAssign_operation(var_s_14128, inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 418)) ;
      }
    }
    if (kBoolFalse == test_0) {
      GALGAS_string var_s_14608 = function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 422)).add_operation (constinArgument_inTargetParameters.getter_mSectionDispatcherInvocationFromUserMode (HERE).getter_string (SOURCE_FILE ("declaration-svc.galgas", 422)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 422)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 420)) ;
      var_s_14608 = var_s_14608.getter_stringByReplacingStringByString (GALGAS_string ("!USER_ROUTINE!"), enumerator_14065.current (HERE).getter_mSectionCallName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 424)) ;
      var_s_14608 = var_s_14608.getter_stringByReplacingStringByString (GALGAS_string ("!IMPLEMENTATION_ROUTINE!"), enumerator_14065.current (HERE).getter_mSectionImplementationName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 425)) ;
      var_s_14608 = var_s_14608.getter_stringByReplacingStringByString (GALGAS_string ("!IDX!"), index_14038.getter_string (SOURCE_FILE ("declaration-svc.galgas", 426)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 426)) ;
      ioArgument_ioAssemblerCode.plusAssign_operation(var_s_14608, inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 427)) ;
    }
    enumerator_14065.gotoNextObject () ;
    index_14038.increment_operation (inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 409)) ;
  }
  ioArgument_ioAssemblerCode.plusAssign_operation(function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 432)).add_operation (constinArgument_inTargetParameters.getter_mSectionDispatcherHeader (HERE).getter_string (SOURCE_FILE ("declaration-svc.galgas", 432)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 432)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 430)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 430)) ;
  cEnumerator_sectionIRlist enumerator_15319 (constinArgument_inSectionIRlist, kENUMERATION_UP) ;
  GALGAS_uint index_15243 ((uint32_t) 0) ;
  while (enumerator_15319.hasCurrentObject ()) {
    GALGAS_string var_s_15338 = function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 437)).add_operation (constinArgument_inTargetParameters.getter_mSectionDispatcherEntry (HERE).getter_string (SOURCE_FILE ("declaration-svc.galgas", 437)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 437)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 435)) ;
    var_s_15338 = var_s_15338.getter_stringByReplacingStringByString (GALGAS_string ("!USER_ROUTINE!"), enumerator_15319.current_mSectionCallName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 439)) ;
    var_s_15338 = var_s_15338.getter_stringByReplacingStringByString (GALGAS_string ("!IMPLEMENTATION_ROUTINE!"), enumerator_15319.current_mSectionImplementationName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 440)) ;
    var_s_15338 = var_s_15338.getter_stringByReplacingStringByString (GALGAS_string ("!IDX!"), index_15243.getter_string (SOURCE_FILE ("declaration-svc.galgas", 441)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 441)) ;
    ioArgument_ioAssemblerCode.plusAssign_operation(var_s_15338, inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 442)) ;
    enumerator_15319.gotoNextObject () ;
    index_15243.increment_operation (inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 434)) ;
  }
  ioArgument_ioAssemblerCode.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 444)) ;
  ioArgument_ioAssemblerCode.plusAssign_operation(function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 447)).add_operation (constinArgument_inTargetParameters.getter_mSectionHandler (HERE).getter_string (SOURCE_FILE ("declaration-svc.galgas", 447)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 447)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 445)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 445)) ;
  ioArgument_ioAssemblerCode.plusAssign_operation(GALGAS_string ("@-------------------------------------------------------------"), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 449)) ;
  ioArgument_ioAssemblerCode.plusAssign_operation(GALGAS_string ("---------------------------------------------------------*\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 450)) ;
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
  ioArgument_ioAssemblerCode.plusAssign_operation(function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 465)).add_operation (constinArgument_inTargetParameters.getter_mServiceHandler (HERE).getter_string (SOURCE_FILE ("declaration-svc.galgas", 465)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 465)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 463)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 463)) ;
  cEnumerator_primitiveAndServiceIRlist enumerator_16664 (constinArgument_inServiceList, kENUMERATION_UP) ;
  GALGAS_uint index_16639 ((uint32_t) 0) ;
  while (enumerator_16664.hasCurrentObject ()) {
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = enumerator_16664.current (HERE).getter_mHasReturnValue (HERE).boolEnum () ;
      if (kBoolTrue == test_0) {
        GALGAS_string var_s_16721 = function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 472)).add_operation (constinArgument_inTargetParameters.getter_mServiceEntryWithReturnValue (HERE).getter_string (SOURCE_FILE ("declaration-svc.galgas", 472)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 472)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 470)) ;
        var_s_16721 = var_s_16721.getter_stringByReplacingStringByString (GALGAS_string ("!ENTRY!"), enumerator_16664.current (HERE).getter_mCallName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 474)) ;
        var_s_16721 = var_s_16721.getter_stringByReplacingStringByString (GALGAS_string ("!IDX!"), index_16639.getter_string (SOURCE_FILE ("declaration-svc.galgas", 475)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 475)) ;
        ioArgument_ioAssemblerCode.plusAssign_operation(var_s_16721, inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 476)) ;
      }
    }
    if (kBoolFalse == test_0) {
      GALGAS_string var_s_17066 = function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 480)).add_operation (constinArgument_inTargetParameters.getter_mServiceEntryNoReturnedValue (HERE).getter_string (SOURCE_FILE ("declaration-svc.galgas", 480)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 480)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 478)) ;
      var_s_17066 = var_s_17066.getter_stringByReplacingStringByString (GALGAS_string ("!ENTRY!"), enumerator_16664.current (HERE).getter_mCallName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 482)) ;
      var_s_17066 = var_s_17066.getter_stringByReplacingStringByString (GALGAS_string ("!IDX!"), index_16639.getter_string (SOURCE_FILE ("declaration-svc.galgas", 483)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 483)) ;
      ioArgument_ioAssemblerCode.plusAssign_operation(var_s_17066, inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 484)) ;
    }
    enumerator_16664.gotoNextObject () ;
    index_16639.increment_operation (inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 468)) ;
  }
  ioArgument_ioAssemblerCode.plusAssign_operation(function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 489)).add_operation (constinArgument_inTargetParameters.getter_mServiceDispatcherHeader (HERE).getter_string (SOURCE_FILE ("declaration-svc.galgas", 489)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 489)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 487)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 487)) ;
  cEnumerator_primitiveAndServiceIRlist enumerator_17590 (constinArgument_inServiceList, kENUMERATION_UP) ;
  GALGAS_uint index_17565 ((uint32_t) 0) ;
  while (enumerator_17590.hasCurrentObject ()) {
    GALGAS_string var_s_17609 = function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 494)).add_operation (constinArgument_inTargetParameters.getter_mServiceDispatcherEntry (HERE).getter_string (SOURCE_FILE ("declaration-svc.galgas", 494)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 494)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 492)) ;
    var_s_17609 = var_s_17609.getter_stringByReplacingStringByString (GALGAS_string ("!ENTRY!"), enumerator_17590.current (HERE).getter_mImplementationName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 496)) ;
    var_s_17609 = var_s_17609.getter_stringByReplacingStringByString (GALGAS_string ("!IDX!"), index_17565.getter_string (SOURCE_FILE ("declaration-svc.galgas", 497)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 497)) ;
    ioArgument_ioAssemblerCode.plusAssign_operation(var_s_17609, inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 498)) ;
    enumerator_17590.gotoNextObject () ;
    index_17565.increment_operation (inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 491)) ;
  }
  ioArgument_ioAssemblerCode.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 500)) ;
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
  ioArgument_ioInvokedRoutineSet.addAssign_operation (object->mProperty_mMangledImplementationName  COMMA_SOURCE_FILE ("declaration-svc.galgas", 521)) ;
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
  GALGAS_string var_userMangledName_19166 = object->mProperty_mRoutineMangledName.getter_string (HERE).getter_assemblerRepresentation (SOURCE_FILE ("declaration-svc.galgas", 531)) ;
  GALGAS_string var_implementationMangledName_19246 = object->mProperty_mMangledImplementationName.getter_assemblerRepresentation (SOURCE_FILE ("declaration-svc.galgas", 532)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = object->mProperty_mIsSection.boolEnum () ;
    if (kBoolTrue == test_0) {
      ioArgument_ioSectionList.addAssign_operation (var_userMangledName_19166, var_implementationMangledName_19246, GALGAS_bool (false)  COMMA_SOURCE_FILE ("declaration-svc.galgas", 534)) ;
    }
  }
  if (kBoolFalse == test_0) {
    ioArgument_ioPrimitiveAndServiceList.addAssign_operation (var_userMangledName_19166, var_implementationMangledName_19246, GALGAS_bool (false)  COMMA_SOURCE_FILE ("declaration-svc.galgas", 536)) ;
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
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("declare "), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 547)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsEqual, object->mProperty_mReturnTypeProxy.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-svc.galgas", 548)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("void"), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 549)) ;
    }
  }
  if (kBoolFalse == test_0) {
    ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) object->mProperty_mReturnTypeProxy.getter_type (inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 551)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 551)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 551)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" @").add_operation (object->mProperty_mRoutineMangledName.getter_string (HERE).getter_assemblerRepresentation (SOURCE_FILE ("declaration-svc.galgas", 553)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 553)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 553)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 553)) ;
  GALGAS_bool var_first_20064 = GALGAS_bool (true) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsNotEqual, object->mProperty_mReceiverTypeProxy.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-svc.galgas", 555)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) object->mProperty_mReceiverTypeProxy.getter_type (inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 556)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 556)).add_operation (GALGAS_string ("* %receiver"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 556)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 556)) ;
      var_first_20064 = GALGAS_bool (false) ;
    }
  }
  cEnumerator_routineTypedSignature enumerator_20240 (object->mProperty_mFormalArgumentList, kENUMERATION_UP) ;
  while (enumerator_20240.hasCurrentObject ()) {
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = var_first_20064.boolEnum () ;
      if (kBoolTrue == test_2) {
        var_first_20064 = GALGAS_bool (false) ;
      }
    }
    if (kBoolFalse == test_2) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 563)) ;
    }
    switch (enumerator_20240.current_mFormalArgumentPassingMode (HERE).enumValue ()) {
    case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_input:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_20240.current_mTypeProxy (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 567)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 567)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 567)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_output:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_20240.current_mTypeProxy (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 569)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 569)).add_operation (GALGAS_string ("*"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 569)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 569)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_20240.current_mTypeProxy (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 571)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 571)).add_operation (GALGAS_string ("*"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 571)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 571)) ;
      }
      break ;
    }
    enumerator_20240.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (")").add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 574)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 574)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 574)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 574)) ;
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
                                      const GALGAS_semanticContext constinArgument_inContext,
                                      const GALGAS_location /* constinArgument_inEndOfSourceFile */,
                                      C_Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_requiredFunctionDeclarationListAST enumerator_2276 (constinArgument_inAST.getter_mRequiredFunctionListAST (HERE), kENUMERATION_UP) ;
  while (enumerator_2276.hasCurrentObject ()) {
    GALGAS_lstring var_requiredFunctionSignature_2313 = extensionGetter_routineSignature (enumerator_2276.current (HERE).getter_mFormalArgumentList (HERE), enumerator_2276.current (HERE).getter_mName (HERE).getter_location (SOURCE_FILE ("declaration-required-proc.galgas", 61)), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 61)) ;
    GALGAS_string var_requiredFunctionMangledName_2431 = enumerator_2276.current (HERE).getter_mName (HERE).getter_string (HERE).add_operation (var_requiredFunctionSignature_2313.getter_string (SOURCE_FILE ("declaration-required-proc.galgas", 62)), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 62)) ;
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = constinArgument_inContext.getter_mRoutineMap (HERE).getter_hasKey (var_requiredFunctionMangledName_2431 COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 63)).operator_not (SOURCE_FILE ("declaration-required-proc.galgas", 63)).boolEnum () ;
      if (kBoolTrue == test_0) {
        TC_Array <C_FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (enumerator_2276.current (HERE).getter_mName (HERE).getter_location (SOURCE_FILE ("declaration-required-proc.galgas", 64)), GALGAS_string ("required func is not implemented"), fixItArray1  COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 64)) ;
      }
    }
    if (kBoolFalse == test_0) {
      GALGAS_bool var_implementedPublic_2765 ;
      GALGAS_routineTypedSignature var_implementedSignature_2799 ;
      GALGAS_unifiedTypeMap_2D_proxy var_implementedReturnTypeProxy_2839 ;
      GALGAS_routineLLVMNameDict var_implementedModeDictionary_2913 ;
      GALGAS_bool var_implementedIsExported_2948 ;
      GALGAS_mode var_implementedMode_2977 ;
      constinArgument_inContext.getter_mRoutineMap (HERE).method_searchKey (var_requiredFunctionMangledName_2431.getter_nowhere (SOURCE_FILE ("declaration-required-proc.galgas", 67)), var_implementedPublic_2765, var_implementedSignature_2799, var_implementedReturnTypeProxy_2839, var_implementedModeDictionary_2913, var_implementedIsExported_2948, var_implementedMode_2977, inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 66)) ;
      GALGAS_location var_errorLocation_3009 = constinArgument_inContext.getter_mRoutineMap (HERE).getter_locationForKey (var_requiredFunctionMangledName_2431, inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 75)) ;
      GALGAS_routineTypedSignature var_requiredTypedSignature_3221 ;
      {
      routine_routineTypedSignature_32_ (constinArgument_inContext.getter_mTypeMap (HERE), enumerator_2276.current (HERE).getter_mFormalArgumentList (HERE), var_requiredTypedSignature_3221, inCompiler  COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 77)) ;
      }
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = GALGAS_bool (kIsNotEqual, extensionGetter_typedString (var_requiredTypedSignature_3221, inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 78)).objectCompare (extensionGetter_typedString (var_implementedSignature_2799, inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 78)))).boolEnum () ;
        if (kBoolTrue == test_2) {
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (var_errorLocation_3009, GALGAS_string ("function signature should be ").add_operation (extensionGetter_typedString (var_requiredTypedSignature_3221, inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 80)), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 80)).add_operation (GALGAS_string (" (as required by required function declaration)"), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 80)), fixItArray3  COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 79)) ;
        }
      }
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        test_4 = GALGAS_bool (kIsNotEqual, var_implementedReturnTypeProxy_2839.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-required-proc.galgas", 83)))).boolEnum () ;
        if (kBoolTrue == test_4) {
          TC_Array <C_FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (var_errorLocation_3009, GALGAS_string ("function should not return a value (as required by required function declaration)"), fixItArray5  COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 84)) ;
        }
      }
      enumGalgasBool test_6 = kBoolTrue ;
      if (kBoolTrue == test_6) {
        test_6 = GALGAS_bool (kIsNotEqual, var_implementedMode_2977.objectCompare (enumerator_2276.current (HERE).getter_mExecutionMode (HERE))).boolEnum () ;
        if (kBoolTrue == test_6) {
          TC_Array <C_FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (var_errorLocation_3009, GALGAS_string ("required mode is '").add_operation (extensionGetter_string (enumerator_2276.current (HERE).getter_mExecutionMode (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 96)), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 96)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 96)), fixItArray7  COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 96)) ;
        }
      }
      enumGalgasBool test_8 = kBoolTrue ;
      if (kBoolTrue == test_8) {
        test_8 = var_implementedPublic_2765.operator_not (SOURCE_FILE ("declaration-required-proc.galgas", 99)).boolEnum () ;
        if (kBoolTrue == test_8) {
          TC_Array <C_FixItDescription> fixItArray9 ;
          inCompiler->emitSemanticError (var_errorLocation_3009, GALGAS_string ("function should be public (as required by required function declaration)"), fixItArray9  COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 100)) ;
        }
      }
      enumGalgasBool test_10 = kBoolTrue ;
      if (kBoolTrue == test_10) {
        GALGAS_bool test_11 = enumerator_2276.current (HERE).getter_mIsExported (HERE) ;
        if (kBoolTrue == test_11.boolEnum ()) {
          test_11 = var_implementedIsExported_2948.operator_not (SOURCE_FILE ("declaration-required-proc.galgas", 103)) ;
        }
        test_10 = test_11.boolEnum () ;
        if (kBoolTrue == test_10) {
          TC_Array <C_FixItDescription> fixItArray12 ;
          appendFixItActions (fixItArray12, kFixItInsertAfter, GALGAS_string (" @").add_operation (function_exportedAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 106)), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 106))) ;
          inCompiler->emitSemanticError (var_errorLocation_3009, GALGAS_string ("missing @").add_operation (function_exportedAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 105)), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 105)).add_operation (GALGAS_string (" attribute (required function declaration names it)"), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 105)), fixItArray12  COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 104)) ;
        }
      }
      if (kBoolFalse == test_10) {
        enumGalgasBool test_13 = kBoolTrue ;
        if (kBoolTrue == test_13) {
          GALGAS_bool test_14 = var_implementedIsExported_2948 ;
          if (kBoolTrue == test_14.boolEnum ()) {
            test_14 = enumerator_2276.current (HERE).getter_mIsExported (HERE).operator_not (SOURCE_FILE ("declaration-required-proc.galgas", 107)) ;
          }
          test_13 = test_14.boolEnum () ;
          if (kBoolTrue == test_13) {
            TC_Array <C_FixItDescription> fixItArray15 ;
            inCompiler->emitSemanticError (var_errorLocation_3009, GALGAS_string ("incorrect @").add_operation (function_exportedAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 109)), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 109)).add_operation (GALGAS_string (" attribute (required function declaration does not name it)"), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 109)), fixItArray15  COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 108)) ;
          }
        }
      }
    }
    enumerator_2276.gotoNextObject () ;
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
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("declare"), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 175)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsEqual, object->mProperty_mReturnType.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-extern-proc.galgas", 176)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" void"), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 177)) ;
    }
  }
  if (kBoolFalse == test_0) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ").add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) object->mProperty_mReturnType.getter_type (inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 179)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 179)), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 179)), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 179)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" @").add_operation (object->mProperty_mRoutineMangledName.getter_string (HERE).getter_assemblerRepresentation (SOURCE_FILE ("declaration-extern-proc.galgas", 181)), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 181)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 181)), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 181)) ;
  cEnumerator_routineFormalArgumentListIR enumerator_7067 (object->mProperty_mFormalArgumentListForGeneration, kENUMERATION_UP) ;
  while (enumerator_7067.hasCurrentObject ()) {
    switch (enumerator_7067.current_mFormalArgumentKind (HERE).enumValue ()) {
    case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_input:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_7067.current_mFormalArgumentType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 186)).add_operation (GALGAS_string (" %in."), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 186)).add_operation (enumerator_7067.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 186)), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 186)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_output:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_7067.current_mFormalArgumentType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 188)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 188)).add_operation (function_llvmNameForLocalVariable (enumerator_7067.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 188)), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 188)), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 188)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_7067.current_mFormalArgumentType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 190)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 190)).add_operation (function_llvmNameForLocalVariable (enumerator_7067.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 190)), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 190)), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 190)) ;
      }
      break ;
    }
    if (enumerator_7067.hasNextObject ()) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 193)) ;
    }
    enumerator_7067.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (")").add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 195)), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 195)).add_operation (GALGAS_string ("; declared by extern Omnibus function declaration\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 195)), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 195)) ;
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
  cEnumerator_isrDeclarationListAST enumerator_3934 (object->mProperty_mISRDeclarationList, kENUMERATION_UP) ;
  while (enumerator_3934.hasCurrentObject ()) {
    GALGAS_omnibusType var_selfType_4060 ;
    constinArgument_inContext.getter_mTypeMap (HERE).method_searchKey (function_typeNameForTypeMapForDriver (enumerator_3934.current (HERE).getter_mDriverName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 96)), var_selfType_4060, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 96)) ;
    GALGAS_interruptionPanicCode joker_4148 ; // Joker input parameter
    constinArgument_inContext.getter_mAvailableInterruptMap (HERE).method_searchKey (enumerator_3934.current (HERE).getter_mISRName (HERE), joker_4148, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 98)) ;
    {
    ioArgument_ioIntermediateCodeStruct.mProperty_mInterruptMapIR.setter_insertKey (enumerator_3934.current (HERE).getter_mISRName (HERE), var_selfType_4060, enumerator_3934.current (HERE).getter_mDriverName (HERE).getter_string (SOURCE_FILE ("declaration-isr.galgas", 102)), enumerator_3934.current (HERE).getter_mMode (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 99)) ;
    }
    enumerator_3934.gotoNextObject () ;
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
//                                            Function 'guardUserLLVMName'                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring function_guardUserLLVMName (const GALGAS_string & constinArgument_inReceiverLLVMBaseTypeName,
                                           const GALGAS_lstring & constinArgument_inGuardName,
                                           const GALGAS_routineFormalArgumentListAST & constinArgument_inFormalArgumentList,
                                           C_Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  GALGAS_string var_s_3633 = GALGAS_string ("guard.user.") ;
  var_s_3633.plusAssign_operation(constinArgument_inReceiverLLVMBaseTypeName.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 94)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 94)) ;
  var_s_3633.plusAssign_operation(constinArgument_inGuardName.getter_string (HERE), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 95)) ;
  var_s_3633.plusAssign_operation(GALGAS_string ("("), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 96)) ;
  cEnumerator_routineFormalArgumentListAST enumerator_3818 (constinArgument_inFormalArgumentList, kENUMERATION_UP) ;
  while (enumerator_3818.hasCurrentObject ()) {
    var_s_3633.plusAssign_operation(extensionGetter_formalPassingModeString (enumerator_3818.current_mFormalArgumentPassingMode (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 98)).add_operation (enumerator_3818.current_mSelector (HERE).getter_string (SOURCE_FILE ("declaration-guard.galgas", 98)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 98)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 98)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 98)) ;
    enumerator_3818.gotoNextObject () ;
  }
  var_s_3633.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 100)) ;
  result_result = GALGAS_lstring::constructor_new (var_s_3633, constinArgument_inGuardName.getter_location (HERE)  COMMA_SOURCE_FILE ("declaration-guard.galgas", 101)) ;
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function introspection                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const C_galgas_type_descriptor * functionArgs_guardUserLLVMName [4] = {
  & kTypeDescriptor_GALGAS_string,
  & kTypeDescriptor_GALGAS_lstring,
  & kTypeDescriptor_GALGAS_routineFormalArgumentListAST,
  NULL
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_object functionWithGenericHeader_guardUserLLVMName (C_Compiler * inCompiler,
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
  return function_guardUserLLVMName (operand0,
                                     operand1,
                                     operand2,
                                     inCompiler
                                     COMMA_THERE).getter_object (THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_galgas_function_descriptor functionDescriptor_guardUserLLVMName ("guardUserLLVMName",
                                                                   functionWithGenericHeader_guardUserLLVMName,
                                                                   & kTypeDescriptor_GALGAS_lstring,
                                                                   3,
                                                                   functionArgs_guardUserLLVMName) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                       Function 'guardImplementationLLVMName'                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring function_guardImplementationLLVMName (const GALGAS_string & constinArgument_inReceiverLLVMBaseTypeName,
                                                     const GALGAS_lstring & constinArgument_inGuardName,
                                                     const GALGAS_routineFormalArgumentListAST & constinArgument_inFormalArgumentList,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  GALGAS_string var_s_4351 = GALGAS_string ("guard.implementation.") ;
  var_s_4351.plusAssign_operation(constinArgument_inReceiverLLVMBaseTypeName.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 111)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 111)) ;
  var_s_4351.plusAssign_operation(constinArgument_inGuardName.getter_string (HERE), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 112)) ;
  var_s_4351.plusAssign_operation(GALGAS_string ("("), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 113)) ;
  cEnumerator_routineFormalArgumentListAST enumerator_4546 (constinArgument_inFormalArgumentList, kENUMERATION_UP) ;
  while (enumerator_4546.hasCurrentObject ()) {
    var_s_4351.plusAssign_operation(extensionGetter_formalPassingModeString (enumerator_4546.current_mFormalArgumentPassingMode (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 115)).add_operation (enumerator_4546.current_mSelector (HERE).getter_string (SOURCE_FILE ("declaration-guard.galgas", 115)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 115)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 115)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 115)) ;
    enumerator_4546.gotoNextObject () ;
  }
  var_s_4351.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 117)) ;
  result_result = GALGAS_lstring::constructor_new (var_s_4351, constinArgument_inGuardName.getter_location (HERE)  COMMA_SOURCE_FILE ("declaration-guard.galgas", 118)) ;
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function introspection                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const C_galgas_type_descriptor * functionArgs_guardImplementationLLVMName [4] = {
  & kTypeDescriptor_GALGAS_string,
  & kTypeDescriptor_GALGAS_lstring,
  & kTypeDescriptor_GALGAS_routineFormalArgumentListAST,
  NULL
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_object functionWithGenericHeader_guardImplementationLLVMName (C_Compiler * inCompiler,
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
  return function_guardImplementationLLVMName (operand0,
                                               operand1,
                                               operand2,
                                               inCompiler
                                               COMMA_THERE).getter_object (THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_galgas_function_descriptor functionDescriptor_guardImplementationLLVMName ("guardImplementationLLVMName",
                                                                             functionWithGenericHeader_guardImplementationLLVMName,
                                                                             & kTypeDescriptor_GALGAS_lstring,
                                                                             3,
                                                                             functionArgs_guardImplementationLLVMName) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                      Overriding extension method '@decoratedGuardDeclaration semanticAnalysis'                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_decoratedGuardDeclaration_semanticAnalysis (const cPtr_abstractDecoratedDeclaration * inObject,
                                                                        const GALGAS_semanticContext constinArgument_inContext,
                                                                        GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                        GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_decoratedGuardDeclaration * object = (const cPtr_decoratedGuardDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_decoratedGuardDeclaration) ;
  GALGAS_omnibusType var_receiverType_8045 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), object->mProperty_mReceiverTypeName, inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 205)).getter_type (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 205)) ;
  GALGAS_bool var_warnIfUnused_8160 = GALGAS_bool (true) ;
  cEnumerator_lstringlist enumerator_8208 (object->mProperty_mGuardAttributeList, kENUMERATION_UP) ;
  while (enumerator_8208.hasCurrentObject ()) {
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GALGAS_bool (kIsEqual, enumerator_8208.current_mValue (HERE).getter_string (HERE).objectCompare (function_noUnusedWarningAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 209)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          test_1 = var_warnIfUnused_8160.operator_not (SOURCE_FILE ("declaration-guard.galgas", 210)).boolEnum () ;
          if (kBoolTrue == test_1) {
            TC_Array <C_FixItDescription> fixItArray2 ;
            inCompiler->emitSemanticError (enumerator_8208.current_mValue (HERE).getter_location (SOURCE_FILE ("declaration-guard.galgas", 211)), GALGAS_string ("duplicate @").add_operation (function_noUnusedWarningAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 211)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 211)).add_operation (GALGAS_string (" attribute"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 211)), fixItArray2  COMMA_SOURCE_FILE ("declaration-guard.galgas", 211)) ;
          }
        }
        var_warnIfUnused_8160 = GALGAS_bool (false) ;
      }
    }
    if (kBoolFalse == test_0) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (enumerator_8208.current_mValue (HERE).getter_location (SOURCE_FILE ("declaration-guard.galgas", 215)), GALGAS_string ("unknown attribute; available attribute is @").add_operation (function_noUnusedWarningAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 215)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 215)), fixItArray3  COMMA_SOURCE_FILE ("declaration-guard.galgas", 215)) ;
    }
    enumerator_8208.gotoNextObject () ;
  }
  GALGAS_universalValuedObjectMap var_universalMap_8588 = constinArgument_inContext.getter_mValuedObjectMap (HERE) ;
  {
  extensionSetter_openOverrideForSelectBlock (var_universalMap_8588, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 220)) ;
  }
  {
  extensionSetter_openBranch (var_universalMap_8588, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 221)) ;
  }
  GALGAS_routineFormalArgumentListIR var_formalArguments_8740 = GALGAS_routineFormalArgumentListIR::constructor_emptyList (SOURCE_FILE ("declaration-guard.galgas", 222)) ;
  GALGAS_guardKindGenerationIR var_convenienceGuardGenerationIR_8799 ;
  GALGAS_allocaList var_allocaList_8824 = GALGAS_allocaList::constructor_emptyList (SOURCE_FILE ("declaration-guard.galgas", 224)) ;
  GALGAS_instructionListIR var_instructionGenerationList_8876 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("declaration-guard.galgas", 225)) ;
  switch (object->mProperty_mGuardKind.enumValue ()) {
  case GALGAS_guardKind::kNotBuilt:
    break ;
  case GALGAS_guardKind::kEnum_baseGuard:
    {
      GALGAS_lstring var_resultVarName_8978 = GALGAS_lstring::constructor_new (function_acceptVariableOmnibusName (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 229)), object->mProperty_mGuardName.getter_location (HERE)  COMMA_SOURCE_FILE ("declaration-guard.galgas", 229)) ;
      GALGAS_omnibusType var_resultType_9132 ;
      constinArgument_inContext.getter_mTypeMap (HERE).method_searchKey (function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 230)).getter_nowhere (SOURCE_FILE ("declaration-guard.galgas", 230)), var_resultType_9132, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 230)) ;
      var_allocaList_8824.addAssign_operation (function_llvmNameForLocalVariable (var_resultVarName_8978.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 231)), var_resultType_9132, GALGAS_bool (false)  COMMA_SOURCE_FILE ("declaration-guard.galgas", 231)) ;
      {
      extensionSetter_insertLocalVariable (var_universalMap_8588, var_resultVarName_8978, var_resultType_9132, var_resultVarName_8978, GALGAS_valuedObjectState::constructor_noValue (SOURCE_FILE ("declaration-guard.galgas", 236)), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 232)) ;
      }
      {
      routine_enterFormalArguments (constinArgument_inContext, object->mProperty_mGuardFormalArgumentList, var_universalMap_8588, var_formalArguments_8740, GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 240)) ;
      }
      var_convenienceGuardGenerationIR_8799 = GALGAS_guardKindGenerationIR::constructor_baseGuard (SOURCE_FILE ("declaration-guard.galgas", 247)) ;
      extensionMethod_analyzeRoutineInstructionList (object->mProperty_mGuardInstructionList, var_receiverType_8045, GALGAS_routineAttributes::constructor_mutating (SOURCE_FILE ("declaration-guard.galgas", 251)), constinArgument_inContext, GALGAS_mode::constructor_guardMode (SOURCE_FILE ("declaration-guard.galgas", 253)), ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct.mProperty_mStaticEntityMap, var_universalMap_8588, var_allocaList_8824, var_instructionGenerationList_8876, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 249)) ;
    }
    break ;
  case GALGAS_guardKind::kEnum_convenienceGuard:
    {
      const cEnumAssociatedValues_guardKind_convenienceGuard * extractPtr_11146 = (const cEnumAssociatedValues_guardKind_convenienceGuard *) (object->mProperty_mGuardKind.unsafePointer ()) ;
      const GALGAS_callInstructionAST extractedValue_baseGuardInstruction = extractPtr_11146->mAssociatedValue0 ;
      {
      routine_enterFormalArguments (constinArgument_inContext, object->mProperty_mGuardFormalArgumentList, var_universalMap_8588, var_formalArguments_8740, GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 262)) ;
      }
      callExtensionMethod_baseGuardAnalyze ((const cPtr_callInstructionAST *) extractedValue_baseGuardInstruction.ptr (), var_receiverType_8045, GALGAS_routineAttributes::constructor_mutating (SOURCE_FILE ("declaration-guard.galgas", 272)), constinArgument_inContext, GALGAS_mode::constructor_serviceMode (SOURCE_FILE ("declaration-guard.galgas", 274)), ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct.mProperty_mStaticEntityMap, var_universalMap_8588, var_convenienceGuardGenerationIR_8799, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 270)) ;
      extensionMethod_analyzeRoutineInstructionList (object->mProperty_mGuardInstructionList, var_receiverType_8045, GALGAS_routineAttributes::constructor_mutating (SOURCE_FILE ("declaration-guard.galgas", 283)), constinArgument_inContext, GALGAS_mode::constructor_serviceMode (SOURCE_FILE ("declaration-guard.galgas", 285)), ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct.mProperty_mStaticEntityMap, var_universalMap_8588, var_allocaList_8824, var_instructionGenerationList_8876, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 281)) ;
    }
    break ;
  }
  extensionMethod_checkLocalVariableFinalState (var_universalMap_8588, var_instructionGenerationList_8876, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 294)) ;
  {
  extensionSetter_closeBranch (var_universalMap_8588, object->mProperty_mEndOfGuardDeclaration, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 295)) ;
  }
  {
  extensionSetter_closeOverride (var_universalMap_8588, object->mProperty_mEndOfGuardDeclaration, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 296)) ;
  }
  GALGAS_lstring var_guardUserLLVMName_11411 = function_guardUserLLVMName (var_receiverType_8045.getter_llvmBaseTypeName (HERE), object->mProperty_mGuardName, object->mProperty_mGuardFormalArgumentList, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 298)) ;
  GALGAS_lstring var_guardImplementationLLVMName_11552 = function_guardImplementationLLVMName (var_receiverType_8045.getter_llvmBaseTypeName (HERE), object->mProperty_mGuardName, object->mProperty_mGuardFormalArgumentList, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 303)) ;
  ioArgument_ioIntermediateCodeStruct.mProperty_mRoutineListIR.addAssign_operation (GALGAS_guardUserRoutineIR::constructor_new (var_guardUserLLVMName_11411, GALGAS_bool (false), var_warnIfUnused_8160, var_guardImplementationLLVMName_11552.getter_string (SOURCE_FILE ("declaration-guard.galgas", 313)), var_formalArguments_8740, var_receiverType_8045, var_convenienceGuardGenerationIR_8799  COMMA_SOURCE_FILE ("declaration-guard.galgas", 309))  COMMA_SOURCE_FILE ("declaration-guard.galgas", 309)) ;
  ioArgument_ioIntermediateCodeStruct.mProperty_mRoutineListIR.addAssign_operation (GALGAS_guardImplementationRoutineIR::constructor_new (var_guardImplementationLLVMName_11552, GALGAS_bool (false), var_warnIfUnused_8160, var_formalArguments_8740, var_receiverType_8045, var_convenienceGuardGenerationIR_8799, var_allocaList_8824, var_instructionGenerationList_8876  COMMA_SOURCE_FILE ("declaration-guard.galgas", 318))  COMMA_SOURCE_FILE ("declaration-guard.galgas", 318)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_decoratedGuardDeclaration_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_decoratedGuardDeclaration.mSlotID,
                                         extensionMethod_decoratedGuardDeclaration_semanticAnalysis) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_decoratedGuardDeclaration_semanticAnalysis (defineExtensionMethod_decoratedGuardDeclaration_semanticAnalysis, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                Overriding extension method '@standAloneProcedureCallInstructionAST baseGuardAnalyze'                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_standAloneProcedureCallInstructionAST_baseGuardAnalyze (const cPtr_callInstructionAST * inObject,
                                                                                    const GALGAS_omnibusType /* constinArgument_inSelfType */,
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
  inCompiler->emitSemanticError (object->mProperty_mSandAloneRoutineName.getter_location (SOURCE_FILE ("declaration-guard.galgas", 356)), GALGAS_string ("NOT HANDLED YET"), fixItArray0  COMMA_SOURCE_FILE ("declaration-guard.galgas", 356)) ;
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
                                                                          const GALGAS_omnibusType constinArgument_inSelfType,
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
  GALGAS_allocaList var_baseGuardAllocaList_14420 = GALGAS_allocaList::constructor_emptyList (SOURCE_FILE ("declaration-guard.galgas", 371)) ;
  GALGAS_instructionListIR var_baseGuardInstructionGenerationList_14481 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("declaration-guard.galgas", 372)) ;
  GALGAS_objectIR var_currentObject_14612 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsEqual, object->mProperty_mIdentifier.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = GALGAS_bool (kIsEqual, constinArgument_inSelfType.getter_kind (HERE).objectCompare (GALGAS_typeKind::constructor_void (SOURCE_FILE ("declaration-guard.galgas", 376)))).boolEnum () ;
        if (kBoolTrue == test_1) {
          TC_Array <C_FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticError (object->mProperty_mIdentifier.getter_location (SOURCE_FILE ("declaration-guard.galgas", 377)), GALGAS_string ("self is not available in this context"), fixItArray2  COMMA_SOURCE_FILE ("declaration-guard.galgas", 377)) ;
          var_currentObject_14612.drop () ; // Release error dropped variable
        }
      }
      if (kBoolFalse == test_1) {
        var_currentObject_14612 = GALGAS_objectIR::constructor_reference (constinArgument_inSelfType, function_llvmNameForSelf (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 379))  COMMA_SOURCE_FILE ("declaration-guard.galgas", 379)) ;
      }
    }
  }
  if (kBoolFalse == test_0) {
    extensionMethod_searchValuedObject (ioArgument_ioUniversalMap, object->mProperty_mIdentifier, constinArgument_inMode, ioArgument_ioTemporaries.getter_mInitializedDriverSet (HERE), var_currentObject_14612, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 382)) ;
  }
  GALGAS_location var_currentErrorLocation_15065 = object->mProperty_mIdentifier.getter_location (HERE) ;
  GALGAS_accessInAssignmentListAST var_accessList_15131 = object->mProperty_mAccessList ;
  GALGAS_accessInAssignmentAST var_lastAccess_15185 ;
  {
  var_accessList_15131.setter_popLast (var_lastAccess_15185, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 392)) ;
  }
  cEnumerator_accessInAssignmentListAST enumerator_15241 (var_accessList_15131, kENUMERATION_UP) ;
  while (enumerator_15241.hasCurrentObject ()) {
    GALGAS_omnibusType var_currentType_15264 = extensionGetter_type (var_currentObject_14612, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 395)) ;
    switch (enumerator_15241.current_mAccess (HERE).enumValue ()) {
    case GALGAS_accessInAssignmentAST::kNotBuilt:
      break ;
    case GALGAS_accessInAssignmentAST::kEnum_property:
      {
        const cEnumAssociatedValues_accessInAssignmentAST_property * extractPtr_16249 = (const cEnumAssociatedValues_accessInAssignmentAST_property *) (enumerator_15241.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_propertyName = extractPtr_16249->mAssociatedValue0 ;
        GALGAS_propertyGetterMap var_propertyGetterMap_15396 = var_currentType_15264.getter_propertyGetterMap (HERE) ;
        GALGAS_propertyGetterKind var_propertyAccess_15500 ;
        GALGAS_bool joker_15479 ; // Joker input parameter
        var_propertyGetterMap_15396.method_searchKey (extractedValue_propertyName, joker_15479, var_propertyAccess_15500, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 399)) ;
        switch (var_propertyAccess_15500.enumValue ()) {
        case GALGAS_propertyGetterKind::kNotBuilt:
          break ;
        case GALGAS_propertyGetterKind::kEnum_constantProperty:
          {
            TC_Array <C_FixItDescription> fixItArray3 ;
            inCompiler->emitSemanticError (extractedValue_propertyName.getter_location (SOURCE_FILE ("declaration-guard.galgas", 402)), GALGAS_string ("a constant property not available in this context"), fixItArray3  COMMA_SOURCE_FILE ("declaration-guard.galgas", 402)) ;
            var_currentObject_14612.drop () ; // Release error dropped variable
          }
          break ;
        case GALGAS_propertyGetterKind::kEnum_storedProperty:
          {
            const cEnumAssociatedValues_propertyGetterKind_storedProperty * extractPtr_16112 = (const cEnumAssociatedValues_propertyGetterKind_storedProperty *) (var_propertyAccess_15500.unsafePointer ()) ;
            const GALGAS_omnibusType extractedValue_propertyType = extractPtr_16112->mAssociatedValue0 ;
            const GALGAS_uint extractedValue_propertyIndex = extractPtr_16112->mAssociatedValue1 ;
            GALGAS_string var_property_5F_llvmName_15798 ;
            {
            extensionSetter_newTempLLVMVar (ioArgument_ioTemporaries, var_property_5F_llvmName_15798, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 404)) ;
            }
            {
            extensionSetter_appendGetUniversalPropertyReference (var_baseGuardInstructionGenerationList_14481, var_currentType_15264, extensionGetter_llvmName (var_currentObject_14612, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 407)), var_property_5F_llvmName_15798, extractedValue_propertyIndex, extractedValue_propertyName.getter_string (SOURCE_FILE ("declaration-guard.galgas", 410)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 405)) ;
            }
            var_currentObject_14612 = GALGAS_objectIR::constructor_reference (extractedValue_propertyType, var_property_5F_llvmName_15798  COMMA_SOURCE_FILE ("declaration-guard.galgas", 412)) ;
          }
          break ;
        case GALGAS_propertyGetterKind::kEnum_computedProperty:
          {
            TC_Array <C_FixItDescription> fixItArray4 ;
            inCompiler->emitSemanticError (extractedValue_propertyName.getter_location (SOURCE_FILE ("declaration-guard.galgas", 414)), GALGAS_string ("a computed property cannot be named in guard"), fixItArray4  COMMA_SOURCE_FILE ("declaration-guard.galgas", 414)) ;
            var_currentObject_14612.drop () ; // Release error dropped variable
          }
          break ;
        }
      }
      break ;
    case GALGAS_accessInAssignmentAST::kEnum_arrayAccess:
      {
        const cEnumAssociatedValues_accessInAssignmentAST_arrayAccess * extractPtr_16358 = (const cEnumAssociatedValues_accessInAssignmentAST_arrayAccess *) (enumerator_15241.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_location extractedValue_endOfIndex = extractPtr_16358->mAssociatedValue1 ;
        TC_Array <C_FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (extractedValue_endOfIndex, GALGAS_string ("not handled yet"), fixItArray5  COMMA_SOURCE_FILE ("declaration-guard.galgas", 417)) ;
        var_currentObject_14612.drop () ; // Release error dropped variable
      }
      break ;
    }
    enumerator_15241.gotoNextObject () ;
  }
  switch (var_lastAccess_15185.enumValue ()) {
  case GALGAS_accessInAssignmentAST::kNotBuilt:
    break ;
  case GALGAS_accessInAssignmentAST::kEnum_property:
    {
      const cEnumAssociatedValues_accessInAssignmentAST_property * extractPtr_17875 = (const cEnumAssociatedValues_accessInAssignmentAST_property *) (var_lastAccess_15185.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_methodName = extractPtr_17875->mAssociatedValue0 ;
      GALGAS_omnibusType var_currentType_16476 = extensionGetter_type (var_currentObject_14612, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 423)) ;
      GALGAS_lstring var_guardMangledName_16624 = extensionGetter_mangledName (object->mProperty_mArguments, extractedValue_methodName, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 425)) ;
      GALGAS_routineTypedSignature var_formalSignature_16741 ;
      GALGAS_lstring var_guardRoutineImplentationLLVMName_16782 ;
      GALGAS_bool joker_16719 ; // Joker input parameter
      GALGAS_lstring joker_16743 ; // Joker input parameter
      var_currentType_16476.getter_guardMap (HERE).method_searchKey (var_guardMangledName_16624, joker_16719, var_formalSignature_16741, joker_16743, var_guardRoutineImplentationLLVMName_16782, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 426)) ;
      GALGAS_procCallEffectiveParameterListIR temp_6 = GALGAS_procCallEffectiveParameterListIR::constructor_emptyList (SOURCE_FILE ("declaration-guard.galgas", 430)) ;
      temp_6.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_outputInput (SOURCE_FILE ("declaration-guard.galgas", 429)), GALGAS_objectIR::constructor_reference (var_currentType_16476, extensionGetter_llvmName (var_currentObject_14612, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 430))  COMMA_SOURCE_FILE ("declaration-guard.galgas", 430))  COMMA_SOURCE_FILE ("declaration-guard.galgas", 430)) ;
      GALGAS_procCallEffectiveParameterListIR var_effectiveParameterListIR_16885 = temp_6 ;
      {
      routine_analyzeEffectiveParameters (constinArgument_inSelfType, constinArgument_inRoutineAttributes, var_formalSignature_16741, object->mProperty_mArguments, extractedValue_methodName.getter_location (HERE), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, var_baseGuardAllocaList_14420, var_baseGuardInstructionGenerationList_14481, var_effectiveParameterListIR_16885, inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 433)) ;
      }
      outArgument_outConvenienceGuardGenerationIR = GALGAS_guardKindGenerationIR::constructor_convenienceGuard (var_baseGuardAllocaList_14420, var_baseGuardInstructionGenerationList_14481, var_guardRoutineImplentationLLVMName_16782.getter_string (HERE), var_effectiveParameterListIR_16885  COMMA_SOURCE_FILE ("declaration-guard.galgas", 449)) ;
    }
    break ;
  case GALGAS_accessInAssignmentAST::kEnum_arrayAccess:
    {
      const cEnumAssociatedValues_accessInAssignmentAST_arrayAccess * extractPtr_18017 = (const cEnumAssociatedValues_accessInAssignmentAST_arrayAccess *) (var_lastAccess_15185.unsafePointer ()) ;
      const GALGAS_location extractedValue_endOfIndex = extractPtr_18017->mAssociatedValue1 ;
      TC_Array <C_FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (extractedValue_endOfIndex, GALGAS_string ("a property access is required here"), fixItArray7  COMMA_SOURCE_FILE ("declaration-guard.galgas", 456)) ;
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
  ioArgument_ioInvokedRoutineSet.addAssign_operation (object->mProperty_mMangledImplementationGuardName  COMMA_SOURCE_FILE ("declaration-guard.galgas", 487)) ;
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
  GALGAS_string var_userMangledName_19748 = object->mProperty_mRoutineMangledName.getter_string (HERE).getter_assemblerRepresentation (SOURCE_FILE ("declaration-guard.galgas", 497)) ;
  GALGAS_string var_implementationMangledName_19828 = object->mProperty_mMangledImplementationGuardName.getter_assemblerRepresentation (SOURCE_FILE ("declaration-guard.galgas", 498)) ;
  switch (object->mProperty_mGuardKindGenerationIR.enumValue ()) {
  case GALGAS_guardKindGenerationIR::kNotBuilt:
    break ;
  case GALGAS_guardKindGenerationIR::kEnum_convenienceGuard:
    {
      ioArgument_ioPrimitiveAndServiceList.addAssign_operation (var_userMangledName_19748, var_implementationMangledName_19828, GALGAS_bool (false)  COMMA_SOURCE_FILE ("declaration-guard.galgas", 501)) ;
    }
    break ;
  case GALGAS_guardKindGenerationIR::kEnum_baseGuard:
    {
      ioArgument_ioSectionList.addAssign_operation (var_userMangledName_19748, var_implementationMangledName_19828, GALGAS_bool (false)  COMMA_SOURCE_FILE ("declaration-guard.galgas", 503)) ;
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
  GALGAS_string var_prototype_20497 = function_llvmFunctionPrototype (GALGAS_string ("i1"), object->mProperty_mRoutineMangledName.getter_string (HERE).getter_assemblerRepresentation (SOURCE_FILE ("declaration-guard.galgas", 519)), object->mProperty_mReceiverType, object->mProperty_mFormalArgumentListForGeneration, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 517)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("declare ").add_operation (var_prototype_20497, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 523)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 523)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 523)) ;
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
  GALGAS_string var_guardRoutineName_21424 = object->mProperty_mRoutineMangledName.getter_string (HERE).getter_assemblerRepresentation (SOURCE_FILE ("declaration-guard.galgas", 543)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define i1 @").add_operation (var_guardRoutineName_21424, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 544)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 544)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 544)) ;
  GALGAS_string temp_0 ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, object->mProperty_mReceiverType.getter_kind (HERE).objectCompare (GALGAS_typeKind::constructor_void (SOURCE_FILE ("declaration-guard.galgas", 545)))).boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_string::makeEmptyString () ;
  }else if (kBoolFalse == test_1) {
    temp_0 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) object->mProperty_mReceiverType.ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 548)) ;
  }
  GALGAS_string var_receiverLLVMTypeName_21555 = temp_0 ;
  GALGAS_bool var_first_21658 = GALGAS_bool (true) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (kIsNotEqual, var_receiverLLVMTypeName_21555.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_2) {
      ioArgument_ioLLVMcode.plusAssign_operation(var_receiverLLVMTypeName_21555.add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 552)).add_operation (function_llvmNameForSelf (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 552)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 552)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 552)) ;
      var_first_21658 = GALGAS_bool (false) ;
    }
  }
  cEnumerator_routineFormalArgumentListIR enumerator_21838 (object->mProperty_mFormalArgumentListForGeneration, kENUMERATION_UP) ;
  while (enumerator_21838.hasCurrentObject ()) {
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      test_3 = var_first_21658.boolEnum () ;
      if (kBoolTrue == test_3) {
        var_first_21658 = GALGAS_bool (false) ;
      }
    }
    if (kBoolFalse == test_3) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 559)) ;
    }
    switch (enumerator_21838.current_mFormalArgumentKind (HERE).enumValue ()) {
    case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_input:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_21838.current_mFormalArgumentType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 563)).add_operation (GALGAS_string (" %in."), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 563)).add_operation (enumerator_21838.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 563)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 563)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_output:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_21838.current_mFormalArgumentType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 565)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 565)).add_operation (function_llvmNameForLocalVariable (enumerator_21838.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 565)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 565)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 565)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_21838.current_mFormalArgumentType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 567)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 567)).add_operation (function_llvmNameForLocalVariable (enumerator_21838.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 567)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 567)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 567)) ;
      }
      break ;
    }
    enumerator_21838.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (")").add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 570)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 570)).add_operation (GALGAS_string ("{\n"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 570)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 570)) ;
  GALGAS_allocaList var_allocaList_22437 = object->mProperty_mAllocaList ;
  cEnumerator_routineFormalArgumentListIR enumerator_22533 (object->mProperty_mFormalArgumentListForGeneration, kENUMERATION_UP) ;
  while (enumerator_22533.hasCurrentObject ()) {
    switch (enumerator_22533.current_mFormalArgumentKind (HERE).enumValue ()) {
    case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_input:
      {
        var_allocaList_22437.addAssign_operation (function_llvmNameForLocalVariable (enumerator_22533.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 577)), enumerator_22533.current_mFormalArgumentType (HERE), GALGAS_bool (true)  COMMA_SOURCE_FILE ("declaration-guard.galgas", 577)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_output:
    case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
      {
      }
      break ;
    }
    enumerator_22533.gotoNextObject () ;
  }
  extensionMethod_generateAllocaList (var_allocaList_22437, ioArgument_ioLLVMcode, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 582)) ;
  cEnumerator_routineFormalArgumentListIR enumerator_22853 (object->mProperty_mFormalArgumentListForGeneration, kENUMERATION_UP) ;
  while (enumerator_22853.hasCurrentObject ()) {
    switch (enumerator_22853.current_mFormalArgumentKind (HERE).enumValue ()) {
    case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_input:
      {
        GALGAS_string var_llvmType_22923 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_22853.current_mFormalArgumentType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 587)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store ").add_operation (var_llvmType_22923, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 588)).add_operation (GALGAS_string (" %in."), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 588)).add_operation (enumerator_22853.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 588)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 588)).add_operation (var_llvmType_22923, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 588)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 589)).add_operation (function_llvmNameForLocalVariable (enumerator_22853.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 589)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 589)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 589)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 588)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_output:
    case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
      {
      }
      break ;
    }
    enumerator_22853.gotoNextObject () ;
  }
  GALGAS_string var_accepted_5F_llvmName_23227 = function_llvmNameForLocalVariable (function_acceptVariableOmnibusName (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 594)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 594)) ;
  GALGAS_string var_accepted_5F_llvmName_5F_loaded_23317 = function_llvmNameForLocalVariable (function_acceptVariableOmnibusName (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 595)).add_operation (GALGAS_string (".loaded"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 595)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 595)) ;
  switch (object->mProperty_mGuardKindGenerationIR.enumValue ()) {
  case GALGAS_guardKindGenerationIR::kNotBuilt:
    break ;
  case GALGAS_guardKindGenerationIR::kEnum_baseGuard:
    {
      GALGAS_string var_accepted_5F_label_23501 = function_acceptVariableOmnibusName (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 599)).add_operation (GALGAS_string (".guard.accepted"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 599)) ;
      GALGAS_string var_rejected_5F_label_23575 = function_acceptVariableOmnibusName (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 600)).add_operation (GALGAS_string (".guard.rejected"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 600)) ;
      extensionMethod_instructionListLLVMCode (object->mProperty_mInstructionGenerationList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 601)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_accepted_5F_llvmName_5F_loaded_23317, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 602)).add_operation (GALGAS_string (" = load i1, i1* "), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 602)).add_operation (var_accepted_5F_llvmName_23227, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 602)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 602)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 602)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (var_accepted_5F_llvmName_5F_loaded_23317, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 603)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 603)).add_operation (var_accepted_5F_label_23501, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 603)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 603)).add_operation (var_rejected_5F_label_23575, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 603)).add_operation (GALGAS_string ("\n"
        "\n"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 603)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 603)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(var_accepted_5F_label_23501.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 604)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 604)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @accept.guard ()\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 605)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret i1 true\n"
        "\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 606)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(var_rejected_5F_label_23575.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 607)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 607)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret i1 false\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 608)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
        "\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 609)) ;
    }
    break ;
  case GALGAS_guardKindGenerationIR::kEnum_convenienceGuard:
    {
      const cEnumAssociatedValues_guardKindGenerationIR_convenienceGuard * extractPtr_25531 = (const cEnumAssociatedValues_guardKindGenerationIR_convenienceGuard *) (object->mProperty_mGuardKindGenerationIR.unsafePointer ()) ;
      const GALGAS_allocaList extractedValue_baseGuardAllocaList = extractPtr_25531->mAssociatedValue0 ;
      const GALGAS_instructionListIR extractedValue_baseGuardInstructionGenerationList = extractPtr_25531->mAssociatedValue1 ;
      const GALGAS_string extractedValue_baseGuardMangledName = extractPtr_25531->mAssociatedValue2 ;
      const GALGAS_procCallEffectiveParameterListIR extractedValue_baseGuardEffectiveParameterList = extractPtr_25531->mAssociatedValue3 ;
      extensionMethod_generateAllocaList (extractedValue_baseGuardAllocaList, ioArgument_ioLLVMcode, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 611)) ;
      extensionMethod_instructionListLLVMCode (extractedValue_baseGuardInstructionGenerationList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 612)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %invoked.guard.result = call i1 @").add_operation (extractedValue_baseGuardMangledName.getter_assemblerRepresentation (SOURCE_FILE ("declaration-guard.galgas", 613)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 613)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 613)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ("), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 614)) ;
      cEnumerator_procCallEffectiveParameterListIR enumerator_24681 (extractedValue_baseGuardEffectiveParameterList, kENUMERATION_UP) ;
      while (enumerator_24681.hasCurrentObject ()) {
        switch (enumerator_24681.current_mEffectiveParameterPassingMode (HERE).enumValue ()) {
        case GALGAS_procEffectiveParameterPassingModeIR::kNotBuilt:
          break ;
        case GALGAS_procEffectiveParameterPassingModeIR::kEnum_input:
          {
            ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_24681.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 618)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 618)).add_operation (extensionGetter_llvmName (enumerator_24681.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 618)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 618)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 618)) ;
          }
          break ;
        case GALGAS_procEffectiveParameterPassingModeIR::kEnum_output:
          {
            ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_24681.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 620)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 620)).add_operation (extensionGetter_llvmName (enumerator_24681.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 620)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 620)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 620)) ;
          }
          break ;
        case GALGAS_procEffectiveParameterPassingModeIR::kEnum_outputInput:
          {
            ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_24681.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 622)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 622)).add_operation (extensionGetter_llvmName (enumerator_24681.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 622)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 622)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 622)) ;
          }
          break ;
        }
        if (enumerator_24681.hasNextObject ()) {
          ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 625)) ;
        }
        enumerator_24681.gotoNextObject () ;
      }
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (")\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 627)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 %invoked.guard.result, label %invoked.guard.acceptation, label %invoked.guard.rejection\n"
        "\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 628)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("invoked.guard.acceptation:\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 629)) ;
      extensionMethod_instructionListLLVMCode (object->mProperty_mInstructionGenerationList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 630)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret i1 true\n"
        "\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 631)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("invoked.guard.rejection:\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 632)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret i1 false\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 633)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
        "\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 634)) ;
    }
    break ;
  }
  ioArgument_ioGenerationAdds.mProperty_mExternFunctionDeclarationSet.addAssign_operation (GALGAS_string ("void @accept.guard ()")  COMMA_SOURCE_FILE ("declaration-guard.galgas", 636)) ;
  ioArgument_ioGenerationAdds.mProperty_mExternFunctionDeclarationSet.addAssign_operation (GALGAS_string ("i1 @xtr.user.result ()")  COMMA_SOURCE_FILE ("declaration-guard.galgas", 637)) ;
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
  extensionMethod_enterAccessibleEntities (object->mProperty_mInstructionGenerationList, ioArgument_ioInvokedRoutineSet, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 646)) ;
  switch (object->mProperty_mGuardKindGenerationIR.enumValue ()) {
  case GALGAS_guardKindGenerationIR::kNotBuilt:
    break ;
  case GALGAS_guardKindGenerationIR::kEnum_baseGuard:
    {
    }
    break ;
  case GALGAS_guardKindGenerationIR::kEnum_convenienceGuard:
    {
      const cEnumAssociatedValues_guardKindGenerationIR_convenienceGuard * extractPtr_26402 = (const cEnumAssociatedValues_guardKindGenerationIR_convenienceGuard *) (object->mProperty_mGuardKindGenerationIR.unsafePointer ()) ;
      const GALGAS_instructionListIR extractedValue_baseGuardInstructionGenerationList = extractPtr_26402->mAssociatedValue1 ;
      const GALGAS_string extractedValue_baseGuardImplementationMangledName = extractPtr_26402->mAssociatedValue2 ;
      ioArgument_ioInvokedRoutineSet.addAssign_operation (extractedValue_baseGuardImplementationMangledName  COMMA_SOURCE_FILE ("declaration-guard.galgas", 650)) ;
      extensionMethod_enterAccessibleEntities (extractedValue_baseGuardInstructionGenerationList, ioArgument_ioInvokedRoutineSet, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 651)) ;
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
//                                           Routine 'routineTypedSignature'                                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_routineTypedSignature (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                    const GALGAS_routineFormalArgumentListAST constinArgument_inFormalArgumentList,
                                    GALGAS_routineTypedSignature & outArgument_outSignature,
                                    C_Compiler * /* inCompiler */
                                    COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSignature.drop () ; // Release 'out' argument
  outArgument_outSignature = GALGAS_routineTypedSignature::constructor_emptyList (SOURCE_FILE ("formal-arguments.galgas", 160)) ;
  cEnumerator_routineFormalArgumentListAST enumerator_6030 (constinArgument_inFormalArgumentList, kENUMERATION_UP) ;
  while (enumerator_6030.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_proxy var_typeProxy_6121 ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioTypeMap, enumerator_6030.current_mFormalArgumentTypeName (HERE), var_typeProxy_6121 COMMA_SOURCE_FILE ("formal-arguments.galgas", 162)) ;
    }
    outArgument_outSignature.addAssign_operation (enumerator_6030.current_mFormalArgumentPassingMode (HERE), enumerator_6030.current_mSelector (HERE), var_typeProxy_6121, enumerator_6030.current_mFormalArgumentName (HERE)  COMMA_SOURCE_FILE ("formal-arguments.galgas", 163)) ;
    enumerator_6030.gotoNextObject () ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                          Routine 'routineTypedSignature2'                                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_routineTypedSignature_32_ (GALGAS_unifiedTypeMap inArgument_inTypeMap,
                                        const GALGAS_routineFormalArgumentListAST constinArgument_inFormalArgumentList,
                                        GALGAS_routineTypedSignature & outArgument_outSignature,
                                        C_Compiler * inCompiler
                                        COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSignature.drop () ; // Release 'out' argument
  outArgument_outSignature = GALGAS_routineTypedSignature::constructor_emptyList (SOURCE_FILE ("formal-arguments.galgas", 173)) ;
  cEnumerator_routineFormalArgumentListAST enumerator_6676 (constinArgument_inFormalArgumentList, kENUMERATION_UP) ;
  while (enumerator_6676.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_proxy var_typeProxy_6697 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (inArgument_inTypeMap, enumerator_6676.current_mFormalArgumentTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("formal-arguments.galgas", 175)) ;
    outArgument_outSignature.addAssign_operation (enumerator_6676.current_mFormalArgumentPassingMode (HERE), enumerator_6676.current_mSelector (HERE), var_typeProxy_6697, enumerator_6676.current_mFormalArgumentName (HERE)  COMMA_SOURCE_FILE ("formal-arguments.galgas", 176)) ;
    enumerator_6676.gotoNextObject () ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                           Routine 'enterFormalArguments'                                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_enterFormalArguments (const GALGAS_semanticContext constinArgument_inContext,
                                   const GALGAS_routineFormalArgumentListAST constinArgument_inFormalArgumentsAST,
                                   GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                   GALGAS_routineFormalArgumentListIR & ioArgument_ioFormalArguments,
                                   const GALGAS_bool constinArgument_inUnusedWarning,
                                   C_Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_routineFormalArgumentListAST enumerator_9285 (constinArgument_inFormalArgumentsAST, kENUMERATION_UP) ;
  while (enumerator_9285.hasCurrentObject ()) {
    GALGAS_omnibusType var_typeProxy_9306 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), enumerator_9285.current_mFormalArgumentTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("formal-arguments.galgas", 234)).getter_type (inCompiler COMMA_SOURCE_FILE ("formal-arguments.galgas", 234)) ;
    ioArgument_ioFormalArguments.addAssign_operation (enumerator_9285.current_mFormalArgumentPassingMode (HERE), var_typeProxy_9306, enumerator_9285.current_mFormalArgumentName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("formal-arguments.galgas", 235)) ;
    switch (enumerator_9285.current_mFormalArgumentPassingMode (HERE).enumValue ()) {
    case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_input:
      {
        enumGalgasBool test_0 = kBoolTrue ;
        if (kBoolTrue == test_0) {
          test_0 = GALGAS_bool (kIsNotEqual, enumerator_9285.current_mFormalArgumentName (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_0) {
            enumGalgasBool test_1 = kBoolTrue ;
            if (kBoolTrue == test_1) {
              test_1 = constinArgument_inUnusedWarning.boolEnum () ;
              if (kBoolTrue == test_1) {
                {
                extensionSetter_insertLocalConstant (ioArgument_ioUniversalMap, enumerator_9285.current_mFormalArgumentName (HERE), GALGAS_bool (true), var_typeProxy_9306, enumerator_9285.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("formal-arguments.galgas", 240)) ;
                }
              }
            }
            if (kBoolFalse == test_1) {
              {
              extensionSetter_insertUsedLocalConstant (ioArgument_ioUniversalMap, enumerator_9285.current_mFormalArgumentName (HERE), GALGAS_bool (true), var_typeProxy_9306, enumerator_9285.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("formal-arguments.galgas", 242)) ;
              }
            }
          }
        }
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
      {
        enumGalgasBool test_2 = kBoolTrue ;
        if (kBoolTrue == test_2) {
          test_2 = GALGAS_bool (kIsNotEqual, enumerator_9285.current_mFormalArgumentName (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_2) {
            enumGalgasBool test_3 = kBoolTrue ;
            if (kBoolTrue == test_3) {
              test_3 = constinArgument_inUnusedWarning.boolEnum () ;
              if (kBoolTrue == test_3) {
                {
                extensionSetter_insertLocalVariable (ioArgument_ioUniversalMap, enumerator_9285.current_mFormalArgumentName (HERE), var_typeProxy_9306, enumerator_9285.current_mFormalArgumentName (HERE), GALGAS_valuedObjectState::constructor_hasUnreadValue (SOURCE_FILE ("formal-arguments.galgas", 248)), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("formal-arguments.galgas", 248)) ;
                }
              }
            }
            if (kBoolFalse == test_3) {
              {
              extensionSetter_insertLocalVariable (ioArgument_ioUniversalMap, enumerator_9285.current_mFormalArgumentName (HERE), var_typeProxy_9306, enumerator_9285.current_mFormalArgumentName (HERE), GALGAS_valuedObjectState::constructor_hasReadValue (SOURCE_FILE ("formal-arguments.galgas", 250)), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("formal-arguments.galgas", 250)) ;
              }
            }
          }
        }
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_output:
      {
        {
        extensionSetter_insertLocalVariable (ioArgument_ioUniversalMap, enumerator_9285.current_mFormalArgumentName (HERE), var_typeProxy_9306, enumerator_9285.current_mFormalArgumentName (HERE), GALGAS_valuedObjectState::constructor_noValue (SOURCE_FILE ("formal-arguments.galgas", 254)), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("formal-arguments.galgas", 254)) ;
        }
      }
      break ;
    }
    enumerator_9285.gotoNextObject () ;
  }
}


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
  cEnumerator_instructionListIR enumerator_5929 (object->mProperty_mInstructionGenerationList, kENUMERATION_UP) ;
  while (enumerator_5929.hasCurrentObject ()) {
    callExtensionMethod_enterAccessibleEntities ((const cPtr_abstractInstructionIR *) enumerator_5929.current (HERE).getter_mInstructionGeneration (HERE).ptr (), ioArgument_ioInvokedRoutineSet, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 154)) ;
    enumerator_5929.gotoNextObject () ;
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
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define"), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 168)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = object->mProperty_mExportedFunction.operator_not (SOURCE_FILE ("regular-routine-analysis.galgas", 169)).boolEnum () ;
    if (kBoolTrue == test_0) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" internal"), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 170)) ;
    }
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ").add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) object->mProperty_mReturnType.ptr (), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 172)), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 172)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 172)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" @").add_operation (object->mProperty_mRoutineMangledName.getter_string (HERE).getter_assemblerRepresentation (SOURCE_FILE ("regular-routine-analysis.galgas", 173)), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 173)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 173)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 173)) ;
  GALGAS_string temp_1 ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, object->mProperty_mReceiverType.getter_kind (HERE).objectCompare (GALGAS_typeKind::constructor_void (SOURCE_FILE ("regular-routine-analysis.galgas", 174)))).boolEnum () ;
  if (kBoolTrue == test_2) {
    temp_1 = GALGAS_string::makeEmptyString () ;
  }else if (kBoolFalse == test_2) {
    temp_1 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) object->mProperty_mReceiverType.ptr (), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 176)) ;
  }
  GALGAS_string var_receiverLLVMTypeName_6604 = temp_1 ;
  GALGAS_bool var_first_6705 = GALGAS_bool (true) ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = GALGAS_bool (kIsNotEqual, var_receiverLLVMTypeName_6604.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_3) {
      ioArgument_ioLLVMcode.plusAssign_operation(var_receiverLLVMTypeName_6604.add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 180)).add_operation (function_llvmNameForSelf (inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 180)), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 180)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 180)) ;
      var_first_6705 = GALGAS_bool (false) ;
    }
  }
  cEnumerator_routineFormalArgumentListIR enumerator_6885 (object->mProperty_mFormalArgumentListForGeneration, kENUMERATION_UP) ;
  while (enumerator_6885.hasCurrentObject ()) {
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = var_first_6705.boolEnum () ;
      if (kBoolTrue == test_4) {
        var_first_6705 = GALGAS_bool (false) ;
      }
    }
    if (kBoolFalse == test_4) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 187)) ;
    }
    switch (enumerator_6885.current_mFormalArgumentKind (HERE).enumValue ()) {
    case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_input:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_6885.current_mFormalArgumentType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 191)).add_operation (GALGAS_string (" %in."), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 191)).add_operation (enumerator_6885.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 191)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 191)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_output:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_6885.current_mFormalArgumentType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 193)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 193)).add_operation (function_llvmNameForLocalVariable (enumerator_6885.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 193)), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 193)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 193)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_6885.current_mFormalArgumentType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 195)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 195)).add_operation (function_llvmNameForLocalVariable (enumerator_6885.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 195)), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 195)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 195)) ;
      }
      break ;
    }
    enumerator_6885.gotoNextObject () ;
  }
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    GALGAS_bool test_6 = GALGAS_bool (gOption_omnibus_5F_options_noPanicGeneration.getter_value ()).operator_not (SOURCE_FILE ("regular-routine-analysis.galgas", 198)) ;
    if (kBoolTrue == test_6.boolEnum ()) {
      test_6 = object->mProperty_mAppendFileAndLineArgumentForPanicLocation ;
    }
    test_5 = test_6.boolEnum () ;
    if (kBoolTrue == test_5) {
      enumGalgasBool test_7 = kBoolTrue ;
      if (kBoolTrue == test_7) {
        test_7 = var_first_6705.operator_not (SOURCE_FILE ("regular-routine-analysis.galgas", 199)).boolEnum () ;
        if (kBoolTrue == test_7) {
          ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 200)) ;
        }
      }
      ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inGenerationContext.getter_mPanicLineLLVMType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 202)).add_operation (GALGAS_string (" %LINE, i8* %FILE"), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 202)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 202)) ;
    }
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (")").add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 204)), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 204)).add_operation (GALGAS_string ("{\n"), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 204)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 204)) ;
  GALGAS_allocaList var_allocaList_7746 = object->mProperty_mAllocaList ;
  enumGalgasBool test_8 = kBoolTrue ;
  if (kBoolTrue == test_8) {
    test_8 = GALGAS_bool (kIsNotEqual, object->mProperty_mReturnType.getter_kind (HERE).objectCompare (GALGAS_typeKind::constructor_void (SOURCE_FILE ("regular-routine-analysis.galgas", 207)))).boolEnum () ;
    if (kBoolTrue == test_8) {
      var_allocaList_7746.addAssign_operation (function_llvmNameForLocalVariable (function_functionResultVariableName (inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 208)), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 208)), object->mProperty_mReturnType, GALGAS_bool (false)  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 208)) ;
    }
  }
  cEnumerator_routineFormalArgumentListIR enumerator_7981 (object->mProperty_mFormalArgumentListForGeneration, kENUMERATION_UP) ;
  while (enumerator_7981.hasCurrentObject ()) {
    switch (enumerator_7981.current_mFormalArgumentKind (HERE).enumValue ()) {
    case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_input:
      {
        var_allocaList_7746.addAssign_operation (function_llvmNameForLocalVariable (enumerator_7981.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 214)), enumerator_7981.current_mFormalArgumentType (HERE), GALGAS_bool (true)  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 214)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_output:
    case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
      {
      }
      break ;
    }
    enumerator_7981.gotoNextObject () ;
  }
  extensionMethod_generateAllocaList (var_allocaList_7746, ioArgument_ioLLVMcode, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 218)) ;
  cEnumerator_routineFormalArgumentListIR enumerator_8391 (object->mProperty_mFormalArgumentListForGeneration, kENUMERATION_UP) ;
  while (enumerator_8391.hasCurrentObject ()) {
    switch (enumerator_8391.current_mFormalArgumentKind (HERE).enumValue ()) {
    case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_input:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--------- Input argument '").add_operation (enumerator_8391.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 224)).add_operation (GALGAS_string ("'\n"), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 224)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 224)) ;
        GALGAS_string var_llvmType_8541 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_8391.current_mFormalArgumentType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 225)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store ").add_operation (var_llvmType_8541, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 226)).add_operation (GALGAS_string (" %in."), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 226)).add_operation (enumerator_8391.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 226)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 226)).add_operation (var_llvmType_8541, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 226)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 226)).add_operation (function_llvmNameForLocalVariable (enumerator_8391.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 227)), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 226)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 227)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 226)) ;
        callExtensionMethod_generateRetain ((const cPtr_omnibusType *) enumerator_8391.current_mFormalArgumentType (HERE).ptr (), enumerator_8391.current_mFormalArgumentName (HERE), ioArgument_ioLLVMcode, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 228)) ;
        enumGalgasBool test_9 = kBoolTrue ;
        if (kBoolTrue == test_9) {
          test_9 = GALGAS_bool (kIsEqual, object->mProperty_mKind.objectCompare (GALGAS_routineKind::constructor_section (SOURCE_FILE ("regular-routine-analysis.galgas", 229)))).boolEnum () ;
          if (kBoolTrue == test_9) {
            callExtensionMethod_generateInsulate ((const cPtr_omnibusType *) enumerator_8391.current_mFormalArgumentType (HERE).ptr (), enumerator_8391.current_mFormalArgumentName (HERE), ioArgument_ioLLVMcode, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 230)) ;
          }
        }
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
      {
        enumGalgasBool test_10 = kBoolTrue ;
        if (kBoolTrue == test_10) {
          test_10 = GALGAS_bool (kIsEqual, object->mProperty_mKind.objectCompare (GALGAS_routineKind::constructor_section (SOURCE_FILE ("regular-routine-analysis.galgas", 233)))).boolEnum () ;
          if (kBoolTrue == test_10) {
            ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--------- Insulate input/output argument '").add_operation (enumerator_8391.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 234)).add_operation (GALGAS_string ("'\n"), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 234)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 234)) ;
            callExtensionMethod_generateInsulate ((const cPtr_omnibusType *) enumerator_8391.current_mFormalArgumentType (HERE).ptr (), enumerator_8391.current_mFormalArgumentName (HERE), ioArgument_ioLLVMcode, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 235)) ;
          }
        }
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_output:
      {
      }
      break ;
    }
    enumerator_8391.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--------- Function instruction list\n"), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 241)) ;
  extensionMethod_instructionListLLVMCode (object->mProperty_mInstructionGenerationList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 242)) ;
  cEnumerator_routineFormalArgumentListIR enumerator_9618 (object->mProperty_mFormalArgumentListForGeneration, kENUMERATION_UP) ;
  while (enumerator_9618.hasCurrentObject ()) {
    switch (enumerator_9618.current_mFormalArgumentKind (HERE).enumValue ()) {
    case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_input:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--------- Release input argument '").add_operation (enumerator_9618.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 248)).add_operation (GALGAS_string ("'\n"), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 248)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 248)) ;
        callExtensionMethod_generateRelease ((const cPtr_omnibusType *) enumerator_9618.current_mFormalArgumentType (HERE).ptr (), enumerator_9618.current_mFormalArgumentName (HERE), ioArgument_ioLLVMcode, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 249)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
      {
        enumGalgasBool test_11 = kBoolTrue ;
        if (kBoolTrue == test_11) {
          test_11 = GALGAS_bool (kIsEqual, object->mProperty_mKind.objectCompare (GALGAS_routineKind::constructor_section (SOURCE_FILE ("regular-routine-analysis.galgas", 251)))).boolEnum () ;
          if (kBoolTrue == test_11) {
            ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--------- Insulate input/output argument '").add_operation (enumerator_9618.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 252)).add_operation (GALGAS_string ("'\n"), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 252)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 252)) ;
            callExtensionMethod_generateInsulate ((const cPtr_omnibusType *) enumerator_9618.current_mFormalArgumentType (HERE).ptr (), enumerator_9618.current_mFormalArgumentName (HERE), ioArgument_ioLLVMcode, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 253)) ;
          }
        }
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_output:
      {
        enumGalgasBool test_12 = kBoolTrue ;
        if (kBoolTrue == test_12) {
          test_12 = GALGAS_bool (kIsEqual, object->mProperty_mKind.objectCompare (GALGAS_routineKind::constructor_section (SOURCE_FILE ("regular-routine-analysis.galgas", 256)))).boolEnum () ;
          if (kBoolTrue == test_12) {
            ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--------- Insulate output argument '").add_operation (enumerator_9618.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 257)).add_operation (GALGAS_string ("'\n"), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 257)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 257)) ;
            callExtensionMethod_generateInsulate ((const cPtr_omnibusType *) enumerator_9618.current_mFormalArgumentType (HERE).ptr (), enumerator_9618.current_mFormalArgumentName (HERE), ioArgument_ioLLVMcode, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 258)) ;
          }
        }
      }
      break ;
    }
    enumerator_9618.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--------- Return\n"), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 263)) ;
  enumGalgasBool test_13 = kBoolTrue ;
  if (kBoolTrue == test_13) {
    test_13 = GALGAS_bool (kIsEqual, object->mProperty_mReturnType.getter_kind (HERE).objectCompare (GALGAS_typeKind::constructor_void (SOURCE_FILE ("regular-routine-analysis.galgas", 264)))).boolEnum () ;
    if (kBoolTrue == test_13) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 265)) ;
    }
  }
  if (kBoolFalse == test_13) {
    GALGAS_string var_resultVarLLVMName_10530 = function_llvmNameForLocalVariable (function_functionResultVariableName (inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 267)), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 267)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %result = load ").add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) object->mProperty_mReturnType.ptr (), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 268)), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 268)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 268)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) object->mProperty_mReturnType.ptr (), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 268)), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 268)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 268)).add_operation (var_resultVarLLVMName_10530, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 268)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 268)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 268)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret ").add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) object->mProperty_mReturnType.ptr (), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 269)), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 269)).add_operation (GALGAS_string (" %result\n"), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 269)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 269)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 271)) ;
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
//                                    Function 'checkModeAndReturnsRoutineLLVMName'                                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string function_checkModeAndReturnsRoutineLLVMName (const GALGAS_routineLLVMNameDict & constinArgument_inCalledRoutineDictionary,
                                                           const GALGAS_mode & constinArgument_inCallerRoutineMode,
                                                           const GALGAS_lstring & constinArgument_inRoutineName,
                                                           C_Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inCalledRoutineDictionary.getter_hasKey (constinArgument_inCallerRoutineMode COMMA_SOURCE_FILE ("logical-modes.galgas", 184)).boolEnum () ;
    if (kBoolTrue == test_0) {
      constinArgument_inCalledRoutineDictionary.method_searchKey (constinArgument_inCallerRoutineMode, result_result, inCompiler COMMA_SOURCE_FILE ("logical-modes.galgas", 185)) ;
    }
  }
  if (kBoolFalse == test_0) {
    GALGAS_string var_m_8459 = GALGAS_string ("the '").add_operation (constinArgument_inRoutineName.getter_string (SOURCE_FILE ("logical-modes.galgas", 187)), inCompiler COMMA_SOURCE_FILE ("logical-modes.galgas", 187)).add_operation (GALGAS_string ("' routine cannot be invoked from '"), inCompiler COMMA_SOURCE_FILE ("logical-modes.galgas", 187)).add_operation (extensionGetter_string (constinArgument_inCallerRoutineMode, inCompiler COMMA_SOURCE_FILE ("logical-modes.galgas", 187)), inCompiler COMMA_SOURCE_FILE ("logical-modes.galgas", 187)).add_operation (GALGAS_string ("' mode, but only from:"), inCompiler COMMA_SOURCE_FILE ("logical-modes.galgas", 187)) ;
    cEnumerator_routineLLVMNameDict enumerator_8618 (constinArgument_inCalledRoutineDictionary, kENUMERATION_UP) ;
    while (enumerator_8618.hasCurrentObject ()) {
      var_m_8459.plusAssign_operation(GALGAS_string ("\n"
        "  - '").add_operation (extensionGetter_string (enumerator_8618.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("logical-modes.galgas", 189)), inCompiler COMMA_SOURCE_FILE ("logical-modes.galgas", 189)).add_operation (GALGAS_string ("' mode"), inCompiler COMMA_SOURCE_FILE ("logical-modes.galgas", 189)), inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 189)) ;
      enumerator_8618.gotoNextObject () ;
    }
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (constinArgument_inRoutineName.getter_location (SOURCE_FILE ("logical-modes.galgas", 191)), var_m_8459, fixItArray1  COMMA_SOURCE_FILE ("logical-modes.galgas", 191)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function introspection                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const C_galgas_type_descriptor * functionArgs_checkModeAndReturnsRoutineLLVMName [4] = {
  & kTypeDescriptor_GALGAS_routineLLVMNameDict,
  & kTypeDescriptor_GALGAS_mode,
  & kTypeDescriptor_GALGAS_lstring,
  NULL
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_object functionWithGenericHeader_checkModeAndReturnsRoutineLLVMName (C_Compiler * inCompiler,
                                                                                   const cObjectArray & inEffectiveParameterArray,
                                                                                   const GALGAS_location & /* inErrorLocation */
                                                                                   COMMA_LOCATION_ARGS) {
  const GALGAS_routineLLVMNameDict operand0 = GALGAS_routineLLVMNameDict::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                                         inCompiler
                                                                                         COMMA_THERE) ;
  const GALGAS_mode operand1 = GALGAS_mode::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  const GALGAS_lstring operand2 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (2 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  return function_checkModeAndReturnsRoutineLLVMName (operand0,
                                                      operand1,
                                                      operand2,
                                                      inCompiler
                                                      COMMA_THERE).getter_object (THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_galgas_function_descriptor functionDescriptor_checkModeAndReturnsRoutineLLVMName ("checkModeAndReturnsRoutineLLVMName",
                                                                                    functionWithGenericHeader_checkModeAndReturnsRoutineLLVMName,
                                                                                    & kTypeDescriptor_GALGAS_string,
                                                                                    3,
                                                                                    functionArgs_checkModeAndReturnsRoutineLLVMName) ;

