#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-13.h"

//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@typeDynamicArrayDeclarationAST enterInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_typeDynamicArrayDeclarationAST::method_enterInPrecedenceGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GALGAS_typeDynamicArrayDeclarationAST temp_0 = this ;
  const GALGAS_typeDynamicArrayDeclarationAST temp_1 = this ;
  ioArgument_ioGraph.setter_addNode (temp_0.readProperty_mDynamicArrayTypeName (), temp_1, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 36)) ;
  }
  {
  const GALGAS_typeDynamicArrayDeclarationAST temp_2 = this ;
  const GALGAS_typeDynamicArrayDeclarationAST temp_3 = this ;
  ioArgument_ioGraph.setter_addEdge (temp_2.readProperty_mDynamicArrayTypeName (), temp_3.readProperty_mElementTypeName () COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 37)) ;
  }
  const GALGAS_typeDynamicArrayDeclarationAST temp_4 = this ;
  GALGAS_lstring var_rootNode_2118 = GALGAS_lstring::init_21__21_ (function_configurationNodeNameForPrecedenceGraph (inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 38)), temp_4.readProperty_mDynamicArrayTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GALGAS_typeDynamicArrayDeclarationAST temp_5 = this ;
  ioArgument_ioGraph.setter_addEdge (temp_5.readProperty_mDynamicArrayTypeName (), var_rootNode_2118 COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 39)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@typeDynamicArrayDeclarationAST keyRepresentationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_typeDynamicArrayDeclarationAST::getter_keyRepresentationForErrorSignaling (Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outRepresentation ; // Returned variable
  const GALGAS_typeDynamicArrayDeclarationAST temp_0 = this ;
  result_outRepresentation = GALGAS_string ("anonymous ").add_operation (temp_0.readProperty_mDynamicArrayTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 45)) ;
//---
  return result_outRepresentation ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@typeDynamicArrayDeclarationAST locationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GALGAS_location cPtr_typeDynamicArrayDeclarationAST::getter_locationForErrorSignaling (Compiler */* inCompiler */
                                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_location result_outLocation ; // Returned variable
  const GALGAS_typeDynamicArrayDeclarationAST temp_0 = this ;
  result_outLocation = temp_0.readProperty_mDynamicArrayTypeName ().readProperty_location () ;
//---
  return result_outLocation ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@typeDynamicArrayDeclarationAST enterInContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_typeDynamicArrayDeclarationAST::method_enterInContext (GALGAS_semanticContext & ioArgument_ioContext,
                                                                 GALGAS_declarationDecorationList & /* ioArgument_ioDecoratedDeclarationList */,
                                                                 GALGAS_decoratedRegularRoutineList & /* ioArgument_ioDecoratedRoutineList */,
                                                                 GALGAS_routineListIR & ioArgument_ioRoutineListIR,
                                                                 GALGAS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                                 GALGAS_staticEntityMap & /* ioArgument_ioStaticEntityMap */,
                                                                 GALGAS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                                 GALGAS_userLLVMTypeDefinitionListIR & /* ioArgument_ioUserLLVMTypeDefinitionListIR */,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = ioArgument_ioContext.readProperty_mTargetParameters ().readProperty_mHandleDynamicArray ().operator_not (SOURCE_FILE ("type-dynamic-array.galgas", 68)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_typeDynamicArrayDeclarationAST temp_1 = this ;
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mElementTypeName ().readProperty_location (), GALGAS_string ("this target does not handle dynamic array"), fixItArray2  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 69)) ;
    }
  }
  GALGAS_unifiedTypeMapEntry var_arrayTypeProxy_4039 ;
  {
  const GALGAS_typeDynamicArrayDeclarationAST temp_3 = this ;
  extensionSetter_makeEntry (ioArgument_ioContext.mProperty_mTypeMap, temp_3.readProperty_mDynamicArrayTypeName (), var_arrayTypeProxy_4039, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 71)) ;
  }
  GALGAS_omnibusType var_elementType_4189 ;
  const GALGAS_typeDynamicArrayDeclarationAST temp_4 = this ;
  extensionMethod_searchType (ioArgument_ioContext.readProperty_mTypeMap (), temp_4.readProperty_mElementTypeName (), var_elementType_4189, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 73)) ;
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    test_5 = callExtensionGetter_copyable ((const cPtr_omnibusType *) var_elementType_4189.ptr (), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 74)).operator_not (SOURCE_FILE ("type-dynamic-array.galgas", 74)).boolEnum () ;
    if (kBoolTrue == test_5) {
      const GALGAS_typeDynamicArrayDeclarationAST temp_6 = this ;
      TC_Array <FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (temp_6.readProperty_mElementTypeName ().readProperty_location (), GALGAS_string ("an array element should be copyable"), fixItArray7  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 75)) ;
    }
  }
  enumGalgasBool test_8 = kBoolTrue ;
  if (kBoolTrue == test_8) {
    test_8 = callExtensionGetter_instanciable ((const cPtr_omnibusType *) var_elementType_4189.ptr (), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 77)).operator_not (SOURCE_FILE ("type-dynamic-array.galgas", 77)).boolEnum () ;
    if (kBoolTrue == test_8) {
      const GALGAS_typeDynamicArrayDeclarationAST temp_9 = this ;
      TC_Array <FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (temp_9.readProperty_mElementTypeName ().readProperty_location (), GALGAS_string ("an array element should be instanciable"), fixItArray10  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 78)) ;
    }
  }
  const GALGAS_typeDynamicArrayDeclarationAST temp_11 = this ;
  GALGAS_lstring var_omnibusTypeDescriptionName_4511 = GALGAS_lstring::init_21__21_ (GALGAS_string ("[").add_operation (var_elementType_4189.readProperty_omnibusTypeDescriptionName (), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 81)).add_operation (GALGAS_string ("]"), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 81)), temp_11.readProperty_mDynamicArrayTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
  const GALGAS_typeDynamicArrayDeclarationAST temp_12 = this ;
  GALGAS_lstring var_llvmBaseTypeName_4642 = GALGAS_lstring::init_21__21_ (GALGAS_string ("dyn-").add_operation (var_elementType_4189.readProperty_llvmBaseTypeName (), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 82)), temp_12.readProperty_mDynamicArrayTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
  enumGalgasBool test_13 = kBoolTrue ;
  if (kBoolTrue == test_13) {
    test_13 = ioArgument_ioContext.readProperty_mTypeMap ().getter_hasKey (var_omnibusTypeDescriptionName_4511.readProperty_string () COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 84)).boolEnum () ;
    if (kBoolTrue == test_13) {
      GALGAS_omnibusType var_type_4954 ;
      extensionMethod_searchType (ioArgument_ioContext.readProperty_mTypeMap (), var_omnibusTypeDescriptionName_4511, var_type_4954, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 85)) ;
      {
      const GALGAS_typeDynamicArrayDeclarationAST temp_14 = this ;
      extensionSetter_insertType (ioArgument_ioContext.mProperty_mTypeMap, temp_14.readProperty_mDynamicArrayTypeName (), var_type_4954, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 86)) ;
      }
    }
  }
  if (kBoolFalse == test_13) {
    GALGAS_unifiedTypeMapEntry var_uint_33__32_TypeProxy_5119 ;
    {
    extensionSetter_makeEntry (ioArgument_ioContext.mProperty_mTypeMap, GALGAS_string ("u32").getter_nowhere (SOURCE_FILE ("type-dynamic-array.galgas", 91)), var_uint_33__32_TypeProxy_5119, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 91)) ;
    }
    GALGAS_unifiedTypeMapEntry var_elementTypeProxy_5200 ;
    {
    const GALGAS_typeDynamicArrayDeclarationAST temp_15 = this ;
    extensionSetter_makeEntry (ioArgument_ioContext.mProperty_mTypeMap, temp_15.readProperty_mElementTypeName (), var_elementTypeProxy_5200, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 92)) ;
    }
    GALGAS_lstring var_routineLLVMName_5615 ;
    {
    const GALGAS_typeDynamicArrayDeclarationAST temp_16 = this ;
    extensionSetter_addFunctionWithoutArgument (ioArgument_ioContext.mProperty_mRoutineMap, var_omnibusTypeDescriptionName_4511.readProperty_string (), var_llvmBaseTypeName_4642.readProperty_string (), GALGAS_lstring::init_21__21_ (GALGAS_string ("removeAll"), temp_16.readProperty_mDynamicArrayTypeName ().readProperty_location (), inCompiler COMMA_HERE), GALGAS_mode::class_func_anySafeMode (SOURCE_FILE ("type-dynamic-array.galgas", 99)), GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("type-dynamic-array.galgas", 100)), var_routineLLVMName_5615, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 95)) ;
    }
    ioArgument_ioRoutineListIR.addAssign_operation (GALGAS_dynArrayRemoveAllFunctionIR::init_21__21_isRequired_21_warnsIfUnused (var_routineLLVMName_5615, GALGAS_bool (false), GALGAS_bool (false), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 103)) ;
    {
    const GALGAS_typeDynamicArrayDeclarationAST temp_17 = this ;
    extensionSetter_addFunctionWithoutArgument (ioArgument_ioContext.mProperty_mRoutineMap, var_omnibusTypeDescriptionName_4511.readProperty_string (), var_llvmBaseTypeName_4642.readProperty_string (), GALGAS_lstring::init_21__21_ (GALGAS_string ("length"), temp_17.readProperty_mDynamicArrayTypeName ().readProperty_location (), inCompiler COMMA_HERE), GALGAS_mode::class_func_anySafeMode (SOURCE_FILE ("type-dynamic-array.galgas", 113)), var_uint_33__32_TypeProxy_5119, var_routineLLVMName_5615, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 109)) ;
    }
    ioArgument_ioRoutineListIR.addAssign_operation (GALGAS_dynArrayLengthFunctionIR::init_21__21_isRequired_21_warnsIfUnused (var_routineLLVMName_5615, GALGAS_bool (false), GALGAS_bool (false), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 117)) ;
    GALGAS_lstring var_insertFunctionMangledName_6885 ;
    {
    const GALGAS_typeDynamicArrayDeclarationAST temp_18 = this ;
    extensionSetter_addFunctionWithTwoInputArguments (ioArgument_ioContext.mProperty_mRoutineMap, var_omnibusTypeDescriptionName_4511.readProperty_string (), ioArgument_ioContext, var_llvmBaseTypeName_4642.readProperty_string (), GALGAS_lstring::init_21__21_ (GALGAS_string ("insert"), temp_18.readProperty_mDynamicArrayTypeName ().readProperty_location (), inCompiler COMMA_HERE), GALGAS_mode::class_func_anySafeMode (SOURCE_FILE ("type-dynamic-array.galgas", 128)), GALGAS_string::makeEmptyString (), var_elementTypeProxy_5200, GALGAS_string ("inValue"), GALGAS_string ("atIndex"), var_uint_33__32_TypeProxy_5119, GALGAS_string ("inIndex"), GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("type-dynamic-array.galgas", 135)), var_insertFunctionMangledName_6885, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 123)) ;
    }
    ioArgument_ioRoutineListIR.addAssign_operation (GALGAS_dynArrayInsertFunctionIR::init_21__21_isRequired_21_warnsIfUnused_21_ (var_insertFunctionMangledName_6885, GALGAS_bool (false), GALGAS_bool (false), var_elementTypeProxy_5200, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 138)) ;
    {
    const GALGAS_typeDynamicArrayDeclarationAST temp_19 = this ;
    extensionSetter_addFunctionWithInputArgument (ioArgument_ioContext.mProperty_mRoutineMap, var_omnibusTypeDescriptionName_4511.readProperty_string (), ioArgument_ioContext, var_llvmBaseTypeName_4642.readProperty_string (), GALGAS_lstring::init_21__21_ (GALGAS_string ("append"), temp_19.readProperty_mDynamicArrayTypeName ().readProperty_location (), inCompiler COMMA_HERE), GALGAS_mode::class_func_anySafeMode (SOURCE_FILE ("type-dynamic-array.galgas", 150)), GALGAS_string::makeEmptyString (), var_elementTypeProxy_5200, GALGAS_string ("inValue"), GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("type-dynamic-array.galgas", 154)), var_routineLLVMName_5615, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 145)) ;
    }
    ioArgument_ioRoutineListIR.addAssign_operation (GALGAS_dynArrayAppendFunctionIR::init_21__21_isRequired_21_warnsIfUnused_21__21__21_ (var_routineLLVMName_5615, GALGAS_bool (false), GALGAS_bool (false), var_arrayTypeProxy_4039, var_elementTypeProxy_5200, var_insertFunctionMangledName_6885.readProperty_string (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 157)) ;
    GALGAS_constructorMap temp_20 = GALGAS_constructorMap::init (inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 166)) ;
    GALGAS_constructorMap var_constructorMap_7894 = temp_20 ;
    {
    GALGAS_constructorSignature temp_21 = GALGAS_constructorSignature::init (inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 167)) ;
    var_constructorMap_7894.setter_insertKey (GALGAS_string ("()").getter_nowhere (SOURCE_FILE ("type-dynamic-array.galgas", 167)), temp_21, GALGAS_constructorValue::class_func_null (SOURCE_FILE ("type-dynamic-array.galgas", 167)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 167)) ;
    }
    {
    ioArgument_ioContext.mProperty_mTypeConstructorMap.setter_insertKey (var_omnibusTypeDescriptionName_4511, var_constructorMap_7894, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 168)) ;
    }
    GALGAS_omnibusTypeAttributes var_typeAttributes_8163 = GALGAS_omnibusTypeAttributes::class_func_instanciable (SOURCE_FILE ("type-dynamic-array.galgas", 170)).operator_or (GALGAS_omnibusTypeAttributes::class_func_copyable (SOURCE_FILE ("type-dynamic-array.galgas", 170)) COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 170)) ;
    GALGAS_omnibusType var_dynamicArrayType_8280 = GALGAS_omnibusType::init_21_subscript_21_attributes_21_omnibusTypeDescriptionName_21_kind_21_llvmBaseTypeName (GALGAS_subscript::class_func_noSubscript (SOURCE_FILE ("type-dynamic-array.galgas", 173)), var_typeAttributes_8163, var_omnibusTypeDescriptionName_4511.readProperty_string (), GALGAS_typeKind::class_func_dynamicArrayType (var_elementType_4189  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 176)), var_llvmBaseTypeName_4642.readProperty_string (), inCompiler COMMA_HERE) ;
    {
    const GALGAS_typeDynamicArrayDeclarationAST temp_22 = this ;
    extensionSetter_insertType (ioArgument_ioContext.mProperty_mTypeMap, temp_22.readProperty_mDynamicArrayTypeName (), var_dynamicArrayType_8280, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 179)) ;
    }
    GALGAS_string var_assignmentFunctionName_8701 = function_assignmentOperatorFuncName (var_dynamicArrayType_8280, var_dynamicArrayType_8280, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 181)) ;
    const GALGAS_typeDynamicArrayDeclarationAST temp_23 = this ;
    GALGAS_dynamicArrayTypeAssignGenericFunctionIR var_routine_8798 = GALGAS_dynamicArrayTypeAssignGenericFunctionIR::init_21__21_isRequired_21_warnsIfUnused (GALGAS_lstring::init_21__21_ (var_assignmentFunctionName_8701, temp_23.readProperty_mDynamicArrayTypeName ().readProperty_location (), inCompiler COMMA_HERE), GALGAS_bool (false), GALGAS_bool (false), inCompiler COMMA_HERE) ;
    ioArgument_ioRoutineListIR.addAssign_operation (var_routine_8798  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 187)) ;
    GALGAS_dynamicArrayTypeAssignUsage var_operatorUsage_9032 = GALGAS_dynamicArrayTypeAssignUsage::init_21__21_ (var_dynamicArrayType_8280, var_assignmentFunctionName_8701, inCompiler COMMA_HERE) ;
    const GALGAS_typeDynamicArrayDeclarationAST temp_24 = this ;
    GALGAS_lstring var_key_9151 = function_assignmentOperatorKey (var_dynamicArrayType_8280, temp_24.readProperty_mDynamicArrayTypeName ().readProperty_location (), var_dynamicArrayType_8280, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 192)) ;
    {
    ioArgument_ioContext.mProperty_mAssignmentOperatorMap.setter_insertKey (var_key_9151, var_operatorUsage_9032, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 193)) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@dynArrayRemoveAllFunctionIR llvmCodeGeneration'
//
//--------------------------------------------------------------------------------------------------

void cPtr_dynArrayRemoveAllFunctionIR::method_llvmCodeGeneration (GALGAS_string & ioArgument_ioLLVMcode,
                                                                  const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                  GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioGenerationAdds.mProperty_mNeedsDynamicMemoryAllocation = GALGAS_bool (true) ;
  const GALGAS_dynArrayRemoveAllFunctionIR temp_0 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal void @").add_operation (temp_0.readProperty_mRoutineMangledName ().readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("type-dynamic-array.galgas", 291)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 291)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 291)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" (%ptrtype* %ioArray)").add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 292)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 292)).add_operation (GALGAS_string ("{\n"), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 292)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 292)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %buffer.pointer = load %ptrtype, %ptrtype* %ioArray\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 293)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @arc.release (%ptrtype %buffer.pointer)\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 294)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store %ptrtype null, %ptrtype* %ioArray\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 295)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 296)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 297)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@dynArrayLengthFunctionIR llvmCodeGeneration'
//
//--------------------------------------------------------------------------------------------------

void cPtr_dynArrayLengthFunctionIR::method_llvmCodeGeneration (GALGAS_string & ioArgument_ioLLVMcode,
                                                               const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                               GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioGenerationAdds.mProperty_mNeedsDynamicMemoryAllocation = GALGAS_bool (true) ;
  const GALGAS_dynArrayLengthFunctionIR temp_0 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal i32 @").add_operation (temp_0.readProperty_mRoutineMangledName ().readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("type-dynamic-array.galgas", 315)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 315)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 315)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" (%ptrtype* %ioArray)").add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 316)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 316)).add_operation (GALGAS_string ("{\n"), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 316)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 316)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %buffer.pointer = load %ptrtype, %ptrtype* %ioArray\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 317)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %length = call i32 @arc.length (%ptrtype %buffer.pointer)\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 318)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret i32 %length\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 319)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 320)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@dynArrayAppendFunctionIR enterAccessibleEntities'
//
//--------------------------------------------------------------------------------------------------

void cPtr_dynArrayAppendFunctionIR::method_enterAccessibleEntities (GALGAS_stringset & ioArgument_ioInvokedRoutineSet,
                                                                    GALGAS_uint & /* ioArgument_ioMaxBranchOfOnInstructions */,
                                                                    Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_dynArrayAppendFunctionIR temp_0 = this ;
  ioArgument_ioInvokedRoutineSet.addAssign_operation (temp_0.readProperty_mInsertFunctionMangledName ()  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 339)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@dynArrayAppendFunctionIR llvmCodeGeneration'
//
//--------------------------------------------------------------------------------------------------

void cPtr_dynArrayAppendFunctionIR::method_llvmCodeGeneration (GALGAS_string & ioArgument_ioLLVMcode,
                                                               const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                               GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioGenerationAdds.mProperty_mNeedsDynamicMemoryAllocation = GALGAS_bool (true) ;
  const GALGAS_dynArrayAppendFunctionIR temp_0 = this ;
  GALGAS_omnibusType var_elementType_16384 = extensionGetter_type (temp_0.readProperty_mElementTypeProxy (), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 350)) ;
  GALGAS_routineFormalArgumentListAST temp_1 = GALGAS_routineFormalArgumentListAST::init (inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 363)) ;
  temp_1.enterElement (GALGAS_routineFormalArgumentListAST_2D_element::init_21__21__21__21_ (GALGAS_procFormalArgumentPassingMode::class_func_input (SOURCE_FILE ("type-dynamic-array.galgas", 353)), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-dynamic-array.galgas", 354)), var_elementType_16384.readProperty_llvmBaseTypeName ().getter_nowhere (SOURCE_FILE ("type-dynamic-array.galgas", 355)), GALGAS_string ("inValue").getter_nowhere (SOURCE_FILE ("type-dynamic-array.galgas", 356)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 357)) ;
  temp_1.enterElement (GALGAS_routineFormalArgumentListAST_2D_element::init_21__21__21__21_ (GALGAS_procFormalArgumentPassingMode::class_func_input (SOURCE_FILE ("type-dynamic-array.galgas", 359)), GALGAS_string ("atIndex").getter_nowhere (SOURCE_FILE ("type-dynamic-array.galgas", 360)), GALGAS_string ("u32").getter_nowhere (SOURCE_FILE ("type-dynamic-array.galgas", 361)), GALGAS_string ("inIndex").getter_nowhere (SOURCE_FILE ("type-dynamic-array.galgas", 362)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 363)) ;
  GALGAS_routineFormalArgumentListAST var_argumentList_16464 = temp_1 ;
  const GALGAS_dynArrayAppendFunctionIR temp_2 = this ;
  GALGAS_lstring var_insertRoutineMangledName_16725 = function_routineMangledNameFromAST (extensionGetter_type (temp_2.readProperty_mArrayTypeProxy (), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 366)).readProperty_llvmBaseTypeName (), GALGAS_string ("insert").getter_nowhere (SOURCE_FILE ("type-dynamic-array.galgas", 367)), var_argumentList_16464, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 365)) ;
  GALGAS_string var_insertRoutineLLVMName_16882 = function_llvmNameForFunction (var_insertRoutineMangledName_16725.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 370)) ;
  const GALGAS_dynArrayAppendFunctionIR temp_3 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal void @").add_operation (temp_3.readProperty_mRoutineMangledName ().readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("type-dynamic-array.galgas", 371)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 371)).add_operation (GALGAS_string (" (%ptrtype* %ioArray, "), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 371)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) var_elementType_16384.ptr (), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 372)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 372)).add_operation (GALGAS_string (" %inValue)"), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 372)).add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 372)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 372)).add_operation (GALGAS_string ("{\n"), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 372)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 371)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--- Get buffer length\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 373)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %current.buffer.pointer = load %ptrtype, %ptrtype* %ioArray\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 374)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %current.buffer.length = call i32 @arc.length (%ptrtype %current.buffer.pointer)\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 375)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--- Insert\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 376)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @").add_operation (var_insertRoutineLLVMName_16882, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 377)).add_operation (GALGAS_string ("(%ptrtype* %ioArray, "), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 377)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) var_elementType_16384.ptr (), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 378)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 378)).add_operation (GALGAS_string (" %inValue, i32 %current.buffer.length)\n"), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 378)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 377)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--- Return\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 379)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 380)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 381)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@dynArrayInsertFunctionIR enterAccessibleEntities'
//
//--------------------------------------------------------------------------------------------------

void cPtr_dynArrayInsertFunctionIR::method_enterAccessibleEntities (GALGAS_stringset & ioArgument_ioInvokedRoutineSet,
                                                                    GALGAS_uint & /* ioArgument_ioMaxBranchOfOnInstructions */,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_dynArrayInsertFunctionIR temp_0 = this ;
  const GALGAS_dynArrayInsertFunctionIR temp_1 = this ;
  GALGAS_string var_assignRoutineLLVMName_18358 = function_assignmentOperatorFuncName (extensionGetter_type (temp_0.readProperty_mElementTypeProxy (), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 398)), extensionGetter_type (temp_1.readProperty_mElementTypeProxy (), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 398)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 398)) ;
  ioArgument_ioInvokedRoutineSet.addAssign_operation (var_assignRoutineLLVMName_18358  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 399)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@dynArrayInsertFunctionIR llvmCodeGeneration'
//
//--------------------------------------------------------------------------------------------------

void cPtr_dynArrayInsertFunctionIR::method_llvmCodeGeneration (GALGAS_string & ioArgument_ioLLVMcode,
                                                               const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                               GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioGenerationAdds.mProperty_mNeedsDynamicMemoryAllocation = GALGAS_bool (true) ;
  const GALGAS_dynArrayInsertFunctionIR temp_0 = this ;
  GALGAS_string var_elementLLVMTypeName_18885 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (temp_0.readProperty_mElementTypeProxy (), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 410)).ptr (), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 410)) ;
  const GALGAS_dynArrayInsertFunctionIR temp_1 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal void @").add_operation (temp_1.readProperty_mRoutineMangledName ().readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("type-dynamic-array.galgas", 411)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 411)).add_operation (GALGAS_string (" (%ptrtype* %ioArray"), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 411)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 411)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", ").add_operation (var_elementLLVMTypeName_18885, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 412)).add_operation (GALGAS_string (" %inValue, i32 %inIndex)"), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 412)).add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 412)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 412)).add_operation (GALGAS_string ("{\n"), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 412)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 412)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--- Inserted element pointer\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 413)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %insert.address = alloca %ptrtype\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 414)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--- value pointer\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 415)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %value.pointer = alloca ").add_operation (var_elementLLVMTypeName_18885, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 416)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 416)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 416)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store ").add_operation (var_elementLLVMTypeName_18885, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 417)).add_operation (GALGAS_string (" %inValue, "), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 417)).add_operation (var_elementLLVMTypeName_18885, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 417)).add_operation (GALGAS_string ("* %value.pointer\n"), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 417)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 417)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--- Size of element\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 418)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %sizeAsPtr = getelementptr inbounds ").add_operation (var_elementLLVMTypeName_18885, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 419)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 419)).add_operation (var_elementLLVMTypeName_18885, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 419)).add_operation (GALGAS_string ("* null, i32 1\n"), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 419)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 419)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %element.byte.size = ptrtoint ").add_operation (var_elementLLVMTypeName_18885, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 420)).add_operation (GALGAS_string ("* %sizeAsPtr to i32\n"), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 420)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 420)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--- Get inserted element pointer\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 421)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %current.buffer.pointer = load %ptrtype, %ptrtype* %ioArray\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 422)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %new.buffer.pointer = call %ptrtype @arc.insert.at.index "), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 423)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("(%ptrtype %current.buffer.pointer, i32 %inIndex, i32 %element.byte.size, %ptrtype* %insert.address)\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 424)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--- Perform copy\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 425)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %typed.insert.address = bitcast %ptrtype* %insert.address to ").add_operation (var_elementLLVMTypeName_18885, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 426)).add_operation (GALGAS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 426)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 426)) ;
  const GALGAS_dynArrayInsertFunctionIR temp_2 = this ;
  const GALGAS_dynArrayInsertFunctionIR temp_3 = this ;
  GALGAS_string var_assignRoutineLLVMName_20265 = function_assignmentOperatorFuncName (extensionGetter_type (temp_2.readProperty_mElementTypeProxy (), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 427)), extensionGetter_type (temp_3.readProperty_mElementTypeProxy (), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 427)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 427)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @").add_operation (var_assignRoutineLLVMName_20265.getter_assemblerRepresentation (SOURCE_FILE ("type-dynamic-array.galgas", 428)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 428)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 428)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" (").add_operation (var_elementLLVMTypeName_18885, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 429)).add_operation (GALGAS_string ("* %typed.insert.address, "), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 429)).add_operation (var_elementLLVMTypeName_18885, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 429)).add_operation (GALGAS_string ("* %value.pointer)\n"), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 429)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 429)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--- Store new buffer pointer\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 430)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store %ptrtype %new.buffer.pointer, %ptrtype* %ioArray\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 431)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--- Return\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 432)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 433)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 434)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@dynamicArrayTypeAssignUsage generateCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_dynamicArrayTypeAssignUsage::method_generateCode (GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                            GALGAS_instructionListIR & ioArgument_ioInstructionListIR,
                                                            GALGAS_allocaList & /* ioArgument_ioAllocaList */,
                                                            const GALGAS_omnibusType constinArgument_inTargetType,
                                                            const GALGAS_string constinArgument_inTargetLLVMName,
                                                            const GALGAS_objectIR constinArgument_inSourcePossibleReference,
                                                            const GALGAS_location /* constinArgument_inErrorLocation */,
                                                            const GALGAS_bool constinArgument_inTargetIsInitialized,
                                                            Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_targetTypeName_21779 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inTargetType.ptr (), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 458)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inTargetIsInitialized.boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_dynamicArrayTypeAssignUsage temp_1 = this ;
      GALGAS_string var_s_21864 = GALGAS_string (" call void  @").add_operation (temp_1.readProperty_mAssignFunctionName ().getter_assemblerRepresentation (SOURCE_FILE ("type-dynamic-array.galgas", 460)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 460)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 460)).add_operation (var_targetTypeName_21779, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 461)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 461)).add_operation (constinArgument_inTargetLLVMName, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 461)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 461)).add_operation (var_targetTypeName_21779, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 462)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 462)).add_operation (extensionGetter_llvmName (constinArgument_inSourcePossibleReference, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 462)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 462)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 462)) ;
      {
      GALGAS_stringset temp_2 = GALGAS_stringset::init (inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 463)) ;
      const GALGAS_dynamicArrayTypeAssignUsage temp_3 = this ;
      temp_2.enterElement (temp_3.readProperty_mAssignFunctionName (), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 463)) ;
      extensionSetter_appendInstructionAsFreeString (ioArgument_ioInstructionListIR, var_s_21864, temp_2, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 463)) ;
      }
    }
  }
  if (kBoolFalse == test_0) {
    GALGAS_objectIR var_sourceValue_22235 = constinArgument_inSourcePossibleReference ;
    {
    extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionListIR, ioArgument_ioTemporaries, var_sourceValue_22235, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 466)) ;
    }
    GALGAS_string var_s_22365 = GALGAS_string ("store ").add_operation (var_targetTypeName_21779, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 467)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 467)).add_operation (extensionGetter_llvmName (var_sourceValue_22235, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 467)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 467)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 467)).add_operation (var_targetTypeName_21779, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 467)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 467)).add_operation (constinArgument_inTargetLLVMName, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 467)) ;
    {
    GALGAS_stringset temp_4 = GALGAS_stringset::init (inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 468)) ;
    extensionSetter_appendInstructionAsFreeString (ioArgument_ioInstructionListIR, var_s_22365, temp_4, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 468)) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@dynamicArrayTypeAssignGenericFunctionIR llvmCodeGeneration'
//
//--------------------------------------------------------------------------------------------------

void cPtr_dynamicArrayTypeAssignGenericFunctionIR::method_llvmCodeGeneration (GALGAS_string & ioArgument_ioLLVMcode,
                                                                              const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                              GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioGenerationAdds.mProperty_mNeedsDynamicMemoryAllocation = GALGAS_bool (true) ;
  const GALGAS_dynamicArrayTypeAssignGenericFunctionIR temp_0 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal void @").add_operation (temp_0.readProperty_mRoutineMangledName ().readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("type-dynamic-array.galgas", 486)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 486)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 486)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" (%ptrtype * %inTargetPtr, %ptrtype* %inSourcePtr) nounwind optsize {\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 487)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %source = load %ptrtype, %ptrtype* %inSourcePtr\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 488)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @arc.retain (%ptrtype %source)\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 489)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %target = load %ptrtype, %ptrtype* %inTargetPtr\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 490)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @arc.release (%ptrtype %target)\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 491)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store %ptrtype %source, %ptrtype* %inTargetPtr\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 492)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 493)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 494)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@enumerationDeclarationAST enterInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_enumerationDeclarationAST::method_enterInPrecedenceGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GALGAS_enumerationDeclarationAST temp_0 = this ;
  const GALGAS_enumerationDeclarationAST temp_1 = this ;
  ioArgument_ioGraph.setter_addNode (temp_0.readProperty_mEnumerationName (), temp_1, inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 53)) ;
  }
  GALGAS_bigint var_maxValue_2404 = GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 55)) ;
  const GALGAS_enumerationDeclarationAST temp_2 = this ;
  cEnumerator_enumerationConstantList enumerator_2426 (temp_2.readProperty_mCaseNameList (), EnumerationOrder::up) ;
  while (enumerator_2426.hasCurrentObject ()) {
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      test_3 = GALGAS_bool (ComparisonKind::lowerThan, var_maxValue_2404.objectCompare (enumerator_2426.current_mConstantValue (HERE))).boolEnum () ;
      if (kBoolTrue == test_3) {
        var_maxValue_2404 = enumerator_2426.current_mConstantValue (HERE) ;
      }
    }
    enumerator_2426.gotoNextObject () ;
  }
  GALGAS_uint var_representationBitCount_2536 = GALGAS_uint (uint32_t (0U)) ;
  if (GALGAS_uint::class_func_max (SOURCE_FILE ("type-enumeration-declaration.galgas", 62)).isValid ()) {
    uint32_t variant_2565 = GALGAS_uint::class_func_max (SOURCE_FILE ("type-enumeration-declaration.galgas", 62)).uintValue () ;
    bool loop_2565 = true ;
    while (loop_2565) {
      loop_2565 = GALGAS_bool (ComparisonKind::greaterThan, var_maxValue_2404.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 62)))).isValid () ;
      if (loop_2565) {
        loop_2565 = GALGAS_bool (ComparisonKind::greaterThan, var_maxValue_2404.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 62)))).boolValue () ;
      }
      if (loop_2565 && (0 == variant_2565)) {
        loop_2565 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("type-enumeration-declaration.galgas", 62)) ;
      }
      if (loop_2565) {
        variant_2565 -- ;
        var_representationBitCount_2536.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 63)) ;
        var_maxValue_2404 = var_maxValue_2404.divide_operation (GALGAS_bigint ("2", inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 64)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 64)) ;
      }
    }
  }
  {
  const GALGAS_enumerationDeclarationAST temp_4 = this ;
  ioArgument_ioGraph.setter_addEdge (temp_4.readProperty_mEnumerationName (), GALGAS_string ("u").add_operation (var_representationBitCount_2536.getter_string (SOURCE_FILE ("type-enumeration-declaration.galgas", 66)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 66)).getter_nowhere (SOURCE_FILE ("type-enumeration-declaration.galgas", 66)) COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 66)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@enumerationDeclarationAST locationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GALGAS_location cPtr_enumerationDeclarationAST::getter_locationForErrorSignaling (Compiler */* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_location result_outLocation ; // Returned variable
  const GALGAS_enumerationDeclarationAST temp_0 = this ;
  result_outLocation = temp_0.readProperty_mEnumerationName ().readProperty_location () ;
//---
  return result_outLocation ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@enumerationDeclarationAST keyRepresentationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_enumerationDeclarationAST::getter_keyRepresentationForErrorSignaling (Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outRepresentation ; // Returned variable
  const GALGAS_enumerationDeclarationAST temp_0 = this ;
  result_outRepresentation = GALGAS_string ("enum ").add_operation (temp_0.readProperty_mEnumerationName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 78)) ;
//---
  return result_outRepresentation ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@enumerationDeclarationAST enterInContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_enumerationDeclarationAST::method_enterInContext (GALGAS_semanticContext & ioArgument_ioContext,
                                                            GALGAS_declarationDecorationList & /* ioArgument_ioDecoratedDeclarationList */,
                                                            GALGAS_decoratedRegularRoutineList & /* ioArgument_ioDecoratedRoutineList */,
                                                            GALGAS_routineListIR & ioArgument_ioRoutineListIR,
                                                            GALGAS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                            GALGAS_staticEntityMap & /* ioArgument_ioStaticEntityMap */,
                                                            GALGAS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                            GALGAS_userLLVMTypeDefinitionListIR & /* ioArgument_ioUserLLVMTypeDefinitionListIR */,
                                                            Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_constantMap temp_0 = GALGAS_constantMap::init (inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 96)) ;
  GALGAS_constantMap var_enumConstantMap_4324 = temp_0 ;
  GALGAS_bigint var_maxValue_4360 = GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 97)) ;
  const GALGAS_enumerationDeclarationAST temp_1 = this ;
  cEnumerator_enumerationConstantList enumerator_4385 (temp_1.readProperty_mCaseNameList (), EnumerationOrder::up) ;
  while (enumerator_4385.hasCurrentObject ()) {
    {
    const GALGAS_enumerationDeclarationAST temp_2 = this ;
    var_enumConstantMap_4324.setter_insertKey (enumerator_4385.current_mConstantName (HERE), enumerator_4385.current_mConstantValue (HERE), temp_2.readProperty_mEnumerationName (), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 99)) ;
    }
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      test_3 = GALGAS_bool (ComparisonKind::lowerThan, var_maxValue_4360.objectCompare (enumerator_4385.current_mConstantValue (HERE))).boolEnum () ;
      if (kBoolTrue == test_3) {
        var_maxValue_4360 = enumerator_4385.current_mConstantValue (HERE) ;
      }
    }
    enumerator_4385.gotoNextObject () ;
  }
  {
  const GALGAS_enumerationDeclarationAST temp_4 = this ;
  ioArgument_ioContext.mProperty_mTypeConstantMap.setter_insertKey (temp_4.readProperty_mEnumerationName (), var_enumConstantMap_4324, inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 104)) ;
  }
  GALGAS_uint var_representationBitCount_4710 = GALGAS_uint (uint32_t (0U)) ;
  if (GALGAS_uint::class_func_max (SOURCE_FILE ("type-enumeration-declaration.galgas", 110)).isValid ()) {
    uint32_t variant_4739 = GALGAS_uint::class_func_max (SOURCE_FILE ("type-enumeration-declaration.galgas", 110)).uintValue () ;
    bool loop_4739 = true ;
    while (loop_4739) {
      loop_4739 = GALGAS_bool (ComparisonKind::greaterThan, var_maxValue_4360.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 110)))).isValid () ;
      if (loop_4739) {
        loop_4739 = GALGAS_bool (ComparisonKind::greaterThan, var_maxValue_4360.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 110)))).boolValue () ;
      }
      if (loop_4739 && (0 == variant_4739)) {
        loop_4739 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("type-enumeration-declaration.galgas", 110)) ;
      }
      if (loop_4739) {
        variant_4739 -- ;
        var_representationBitCount_4710.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 111)) ;
        var_maxValue_4360 = var_maxValue_4360.divide_operation (GALGAS_bigint ("2", inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 112)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 112)) ;
      }
    }
  }
  const GALGAS_enumerationDeclarationAST temp_5 = this ;
  GALGAS_unifiedTypeMapEntry var_integerTypeProxy_4905 = extensionGetter_searchKey (ioArgument_ioContext.readProperty_mTypeMap (), GALGAS_lstring::init_21__21_ (GALGAS_string ("u").add_operation (var_representationBitCount_4710.getter_string (SOURCE_FILE ("type-enumeration-declaration.galgas", 116)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 116)), temp_5.readProperty_mEnumerationName ().readProperty_location (), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 115)) ;
  GALGAS_lstring var_conversionToUIntN_5347 ;
  {
  const GALGAS_enumerationDeclarationAST temp_6 = this ;
  const GALGAS_enumerationDeclarationAST temp_7 = this ;
  const GALGAS_enumerationDeclarationAST temp_8 = this ;
  extensionSetter_addComputedPropertyGetter (ioArgument_ioContext, temp_6.readProperty_mEnumerationName (), temp_7.readProperty_mEnumerationName ().readProperty_string (), GALGAS_lstring::init_21__21_ (GALGAS_string ("u").add_operation (var_representationBitCount_4710.getter_string (SOURCE_FILE ("type-enumeration-declaration.galgas", 121)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 121)), temp_8.readProperty_mEnumerationName ().readProperty_location (), inCompiler COMMA_HERE), GALGAS_mode::class_func_anySafeMode (SOURCE_FILE ("type-enumeration-declaration.galgas", 122)), GALGAS_propertyVisibility::class_func_isPublic (SOURCE_FILE ("type-enumeration-declaration.galgas", 123)), var_integerTypeProxy_4905, var_conversionToUIntN_5347, inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 118)) ;
  }
  ioArgument_ioRoutineListIR.addAssign_operation (GALGAS_enumToUintRoutineIR::init_21__21_isRequired_21_warnsIfUnused_21_ (var_conversionToUIntN_5347, GALGAS_bool (false), GALGAS_bool (false), GALGAS_string ("i").add_operation (var_representationBitCount_4710.getter_string (SOURCE_FILE ("type-enumeration-declaration.galgas", 131)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 131)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 127)) ;
  const GALGAS_enumerationDeclarationAST temp_9 = this ;
  const GALGAS_enumerationDeclarationAST temp_10 = this ;
  GALGAS_omnibusType var_enumerationType_5614 = GALGAS_omnibusType::init_21_subscript_21_attributes_21_omnibusTypeDescriptionName_21_kind_21_llvmBaseTypeName (GALGAS_subscript::class_func_noSubscript (SOURCE_FILE ("type-enumeration-declaration.galgas", 135)), GALGAS_omnibusTypeAttributes::class_func_instanciable (SOURCE_FILE ("type-enumeration-declaration.galgas", 136)).operator_or (GALGAS_omnibusTypeAttributes::class_func_copyable (SOURCE_FILE ("type-enumeration-declaration.galgas", 136)) COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 136)), temp_9.readProperty_mEnumerationName ().readProperty_string (), GALGAS_typeKind::class_func_enumeration (var_representationBitCount_4710  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 138)), temp_10.readProperty_mEnumerationName ().readProperty_string (), inCompiler COMMA_HERE) ;
  {
  const GALGAS_enumerationDeclarationAST temp_11 = this ;
  extensionSetter_insertType (ioArgument_ioContext.mProperty_mTypeMap, temp_11.readProperty_mEnumerationName (), var_enumerationType_5614, inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 141)) ;
  }
  const GALGAS_enumerationDeclarationAST temp_12 = this ;
  GALGAS_lstring var_key_6002 = function_assignmentOperatorKey (var_enumerationType_5614, temp_12.readProperty_mEnumerationName ().readProperty_location (), var_enumerationType_5614, inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 143)) ;
  {
  ioArgument_ioContext.mProperty_mAssignmentOperatorMap.setter_insertKey (var_key_6002, GALGAS_simpleCopyAssignmentOperatorUsage::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 144)) ;
  }
  GALGAS_omnibusType var_boolType_6321 = function_boolType (inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 147)) ;
  {
  routine_addIntegerInfixOperator_3F__3F__3F__26__3F_ (GALGAS_omnibusInfixOperator::class_func_equal (SOURCE_FILE ("type-enumeration-declaration.galgas", 149)), var_enumerationType_5614, GALGAS_string ("icmp eq"), ioArgument_ioContext.mProperty_mInfixOperatorMap, var_boolType_6321, inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 149)) ;
  }
  {
  routine_addIntegerInfixOperator_3F__3F__3F__26__3F_ (GALGAS_omnibusInfixOperator::class_func_infEqual (SOURCE_FILE ("type-enumeration-declaration.galgas", 152)), var_enumerationType_5614, GALGAS_string ("icmp ule"), ioArgument_ioContext.mProperty_mInfixOperatorMap, var_boolType_6321, inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 151)) ;
  }
  {
  routine_addIntegerInfixOperator_3F__3F__3F__26__3F_ (GALGAS_omnibusInfixOperator::class_func_lessThan (SOURCE_FILE ("type-enumeration-declaration.galgas", 160)), var_enumerationType_5614, GALGAS_string ("icmp ult"), ioArgument_ioContext.mProperty_mInfixOperatorMap, var_boolType_6321, inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 159)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@enumToUintRoutineIR llvmCodeGeneration'
//
//--------------------------------------------------------------------------------------------------

void cPtr_enumToUintRoutineIR::method_llvmCodeGeneration (GALGAS_string & ioArgument_ioLLVMcode,
                                                          const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                          GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_enumToUintRoutineIR temp_0 = this ;
  GALGAS_string var_routineLLVMName_8377 = function_llvmNameForFunction (temp_0.readProperty_mRoutineMangledName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 208)) ;
  const GALGAS_enumToUintRoutineIR temp_1 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal ").add_operation (temp_1.readProperty_mEnumerationLLVMTypeName (), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 209)).add_operation (GALGAS_string (" @"), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 209)).add_operation (var_routineLLVMName_8377, inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 209)), inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 209)) ;
  const GALGAS_enumToUintRoutineIR temp_2 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" (").add_operation (temp_2.readProperty_mEnumerationLLVMTypeName (), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 210)).add_operation (GALGAS_string ("* %inValue) nounwind {\n"), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 210)), inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 210)) ;
  const GALGAS_enumToUintRoutineIR temp_3 = this ;
  const GALGAS_enumToUintRoutineIR temp_4 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %r = load ").add_operation (temp_3.readProperty_mEnumerationLLVMTypeName (), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 211)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 211)).add_operation (temp_4.readProperty_mEnumerationLLVMTypeName (), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 211)).add_operation (GALGAS_string ("* %inValue\n"), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 211)), inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 211)) ;
  const GALGAS_enumToUintRoutineIR temp_5 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret ").add_operation (temp_5.readProperty_mEnumerationLLVMTypeName (), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 212)).add_operation (GALGAS_string (" %r\n"), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 212)), inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 212)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n\n"), inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 213)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@structureDeclarationAST enterInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_structureDeclarationAST::method_enterInPrecedenceGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GALGAS_structureDeclarationAST temp_0 = this ;
  const GALGAS_structureDeclarationAST temp_1 = this ;
  ioArgument_ioGraph.setter_addNode (temp_0.readProperty_mReceiverTypeName (), temp_1, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 273)) ;
  }
  const GALGAS_structureDeclarationAST temp_2 = this ;
  cEnumerator_structurePropertyListAST enumerator_9508 (temp_2.readProperty_mStructurePropertyListAST (), EnumerationOrder::up) ;
  while (enumerator_9508.hasCurrentObject ()) {
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      test_3 = GALGAS_bool (ComparisonKind::notEqual, enumerator_9508.current_mPropertyTypeName (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_3) {
        {
        const GALGAS_structureDeclarationAST temp_4 = this ;
        ioArgument_ioGraph.setter_addEdge (temp_4.readProperty_mReceiverTypeName (), enumerator_9508.current_mPropertyTypeName (HERE) COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 277)) ;
        }
      }
    }
    switch (enumerator_9508.current_mPropertyKind (HERE).enumValue ()) {
    case GALGAS_propertyKindAST::kNotBuilt:
      break ;
    case GALGAS_propertyKindAST::kEnum_uninitializedStoredProperty:
    case GALGAS_propertyKindAST::kEnum_uninitializedConstantProperty:
      {
      }
      break ;
    case GALGAS_propertyKindAST::kEnum_initializedStoredProperty:
      {
        const cEnumAssociatedValues_propertyKindAST_initializedStoredProperty * extractPtr_9911 = (const cEnumAssociatedValues_propertyKindAST_initializedStoredProperty *) (enumerator_9508.current_mPropertyKind (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_9801_initExpression = extractPtr_9911->mAssociatedValue0 ;
        const GALGAS_structureDeclarationAST temp_5 = this ;
        callExtensionMethod_addDependenceEdgeForStaticExpression ((cPtr_expressionAST *) extractedValue_9801_initExpression.ptr (), temp_5.readProperty_mReceiverTypeName (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 282)) ;
      }
      break ;
    case GALGAS_propertyKindAST::kEnum_initializedConstantProperty:
      {
        const cEnumAssociatedValues_propertyKindAST_initializedConstantProperty * extractPtr_10061 = (const cEnumAssociatedValues_propertyKindAST_initializedConstantProperty *) (enumerator_9508.current_mPropertyKind (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_9951_initExpression = extractPtr_10061->mAssociatedValue0 ;
        const GALGAS_structureDeclarationAST temp_6 = this ;
        callExtensionMethod_addDependenceEdgeForStaticExpression ((cPtr_expressionAST *) extractedValue_9951_initExpression.ptr (), temp_6.readProperty_mReceiverTypeName (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 284)) ;
      }
      break ;
    case GALGAS_propertyKindAST::kEnum_readOnlyComputedProperty:
      {
        const cEnumAssociatedValues_propertyKindAST_readOnlyComputedProperty * extractPtr_10193 = (const cEnumAssociatedValues_propertyKindAST_readOnlyComputedProperty *) (enumerator_9508.current_mPropertyKind (HERE).unsafePointer ()) ;
        const GALGAS_instructionListAST extractedValue_10098_instructionList = extractPtr_10193->mAssociatedValue0 ;
        extensionMethod_noteInstructionListTypesInPrecedenceGraph (extractedValue_10098_instructionList, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 286)) ;
      }
      break ;
    case GALGAS_propertyKindAST::kEnum_writeComputedProperty:
      {
        const cEnumAssociatedValues_propertyKindAST_writeComputedProperty * extractPtr_10332 = (const cEnumAssociatedValues_propertyKindAST_writeComputedProperty *) (enumerator_9508.current_mPropertyKind (HERE).unsafePointer ()) ;
        const GALGAS_instructionListAST extractedValue_10227_writeInstructionList = extractPtr_10332->mAssociatedValue0 ;
        extensionMethod_noteInstructionListTypesInPrecedenceGraph (extractedValue_10227_writeInstructionList, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 288)) ;
      }
      break ;
    }
    enumerator_9508.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@structureDeclarationAST keyRepresentationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_structureDeclarationAST::getter_keyRepresentationForErrorSignaling (Compiler */* inCompiler */
                                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outRepresentation ; // Returned variable
  const GALGAS_structureDeclarationAST temp_0 = this ;
  result_outRepresentation = temp_0.readProperty_mReceiverTypeName ().readProperty_string () ;
//---
  return result_outRepresentation ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@structureDeclarationAST locationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GALGAS_location cPtr_structureDeclarationAST::getter_locationForErrorSignaling (Compiler */* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_location result_outLocation ; // Returned variable
  const GALGAS_structureDeclarationAST temp_0 = this ;
  result_outLocation = temp_0.readProperty_mReceiverTypeName ().readProperty_location () ;
//---
  return result_outLocation ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@structureDeclarationAST enterInContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_structureDeclarationAST::method_enterInContext (GALGAS_semanticContext & ioArgument_ioContext,
                                                          GALGAS_declarationDecorationList & /* ioArgument_ioDecoratedDeclarationList */,
                                                          GALGAS_decoratedRegularRoutineList & ioArgument_ioDecoratedRoutineList,
                                                          GALGAS_routineListIR & ioArgument_ioRoutineListIR,
                                                          GALGAS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                          GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                          GALGAS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                          GALGAS_userLLVMTypeDefinitionListIR & ioArgument_ioUserLLVMTypeDefinitionListIR,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_propertyList temp_0 = GALGAS_propertyList::init (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 558)) ;
  GALGAS_propertyList var_propertyList_21264 = temp_0 ;
  GALGAS_sortedOperandIRList temp_1 = GALGAS_sortedOperandIRList::init (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 560)) ;
  GALGAS_sortedOperandIRList var_sortedOperandIRList_21356 = temp_1 ;
  GALGAS_constructorSignature temp_2 = GALGAS_constructorSignature::init (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 561)) ;
  GALGAS_constructorSignature var_constructorSignature_21410 = temp_2 ;
  GALGAS_string var_constructorKey_21451 = GALGAS_string ("(") ;
  GALGAS_bool var_canBeCopied_21478 = GALGAS_bool (true) ;
  const GALGAS_structureDeclarationAST temp_3 = this ;
  cEnumerator_structurePropertyListAST enumerator_21520 (temp_3.readProperty_mStructurePropertyListAST (), EnumerationOrder::up) ;
  while (enumerator_21520.hasCurrentObject ()) {
    const GALGAS_structureDeclarationAST temp_4 = this ;
    const GALGAS_structureDeclarationAST temp_5 = this ;
    const GALGAS_structureDeclarationAST temp_6 = this ;
    extensionMethod_enterPropertyInContext (enumerator_21520.current (HERE), ioArgument_ioContext, ioArgument_ioStaticEntityMap, temp_4.readProperty_mReceiverTypeName (), temp_5.readProperty_mOmnibusTypeSpecificName (), temp_6.readProperty_mLLVMBaseTypeName ().readProperty_string (), ioArgument_ioDecoratedRoutineList, var_propertyList_21264, var_sortedOperandIRList_21356, var_constructorSignature_21410, var_constructorKey_21451, var_canBeCopied_21478, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 565)) ;
    enumerator_21520.gotoNextObject () ;
  }
  var_constructorKey_21451.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 580)) ;
  GALGAS_constructorMap temp_7 = GALGAS_constructorMap::init (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 582)) ;
  GALGAS_constructorMap var_constructorMap_22106 = temp_7 ;
  {
  const GALGAS_structureDeclarationAST temp_8 = this ;
  var_constructorMap_22106.setter_insertKey (GALGAS_lstring::init_21__21_ (var_constructorKey_21451, temp_8.readProperty_mReceiverTypeName ().readProperty_location (), inCompiler COMMA_HERE), var_constructorSignature_21410, GALGAS_constructorValue::class_func_structure (var_sortedOperandIRList_21356  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 586)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 583)) ;
  }
  {
  const GALGAS_structureDeclarationAST temp_9 = this ;
  ioArgument_ioContext.mProperty_mTypeConstructorMap.setter_insertKey (temp_9.readProperty_mOmnibusTypeSpecificName (), var_constructorMap_22106, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 588)) ;
  }
  GALGAS_omnibusTypeAttributes var_typeAttributes_22480 = GALGAS_omnibusTypeAttributes::class_func_instanciable (SOURCE_FILE ("type-structure-declaration.galgas", 590)) ;
  const GALGAS_structureDeclarationAST temp_10 = this ;
  cEnumerator_lstringlist enumerator_22610 (temp_10.readProperty_mAttributeListAST (), EnumerationOrder::up) ;
  while (enumerator_22610.hasCurrentObject ()) {
    enumGalgasBool test_11 = kBoolTrue ;
    if (kBoolTrue == test_11) {
      test_11 = GALGAS_bool (ComparisonKind::equal, enumerator_22610.current_mValue (HERE).readProperty_string ().objectCompare (function_copyableAttribute (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 593)))).boolEnum () ;
      if (kBoolTrue == test_11) {
        enumGalgasBool test_12 = kBoolTrue ;
        if (kBoolTrue == test_12) {
          test_12 = var_typeAttributes_22480.getter_copyable (SOURCE_FILE ("type-structure-declaration.galgas", 594)).boolEnum () ;
          if (kBoolTrue == test_12) {
            TC_Array <FixItDescription> fixItArray13 ;
            inCompiler->emitSemanticError (enumerator_22610.current_mValue (HERE).readProperty_location (), GALGAS_string ("duplicated attribute"), fixItArray13  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 595)) ;
          }
        }
        if (kBoolFalse == test_12) {
          enumGalgasBool test_14 = kBoolTrue ;
          if (kBoolTrue == test_14) {
            test_14 = var_canBeCopied_21478.operator_not (SOURCE_FILE ("type-structure-declaration.galgas", 596)).boolEnum () ;
            if (kBoolTrue == test_14) {
              const GALGAS_structureDeclarationAST temp_15 = this ;
              TC_Array <FixItDescription> fixItArray16 ;
              inCompiler->emitSemanticError (temp_15.readProperty_mReceiverTypeName ().readProperty_location (), GALGAS_string ("this structure cannot be copied, one field is not copyable"), fixItArray16  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 597)) ;
            }
          }
        }
      }
    }
    if (kBoolFalse == test_11) {
      TC_Array <FixItDescription> fixItArray17 ;
      inCompiler->emitSemanticError (enumerator_22610.current_mValue (HERE).readProperty_location (), GALGAS_string ("only @copyable attribute is allowed here"), fixItArray17  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 600)) ;
    }
    enumerator_22610.gotoNextObject () ;
  }
  enumGalgasBool test_18 = kBoolTrue ;
  if (kBoolTrue == test_18) {
    const GALGAS_structureDeclarationAST temp_19 = this ;
    test_18 = temp_19.readProperty_mGenerateAssignmentRoutine ().operator_and (var_canBeCopied_21478 COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 603)).boolEnum () ;
    if (kBoolTrue == test_18) {
      var_typeAttributes_22480 = var_typeAttributes_22480.operator_or (GALGAS_omnibusTypeAttributes::class_func_copyable (SOURCE_FILE ("type-structure-declaration.galgas", 604)) COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 604)) ;
    }
  }
  const GALGAS_structureDeclarationAST temp_20 = this ;
  const GALGAS_structureDeclarationAST temp_21 = this ;
  GALGAS_omnibusType var_structureType_23169 = GALGAS_omnibusType::init_21_subscript_21_attributes_21_omnibusTypeDescriptionName_21_kind_21_llvmBaseTypeName (GALGAS_subscript::class_func_noSubscript (SOURCE_FILE ("type-structure-declaration.galgas", 608)), var_typeAttributes_22480, temp_20.readProperty_mOmnibusTypeSpecificName ().readProperty_string (), GALGAS_typeKind::class_func_structure (var_propertyList_21264  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 611)), temp_21.readProperty_mLLVMBaseTypeName ().readProperty_string (), inCompiler COMMA_HERE) ;
  {
  const GALGAS_structureDeclarationAST temp_22 = this ;
  extensionSetter_insertType (ioArgument_ioContext.mProperty_mTypeMap, temp_22.readProperty_mReceiverTypeName (), var_structureType_23169, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 614)) ;
  }
  ioArgument_ioUserLLVMTypeDefinitionListIR.addAssign_operation (GALGAS_userLLVMSructureTypeDefinitionIR::init_21__21_ (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) var_structureType_23169.ptr (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 620)), var_propertyList_21264, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 619)) ;
  GALGAS_string var_assignmentFunctionLLVMName_23808 = function_assignmentOperatorFuncName (var_structureType_23169, var_structureType_23169, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 625)) ;
  ioArgument_ioRoutineListIR.addAssign_operation (GALGAS_structureTypeAssignFunctionIR::init_21__21_isRequired_21_warnsIfUnused_21_ (var_assignmentFunctionLLVMName_23808.getter_nowhere (SOURCE_FILE ("type-structure-declaration.galgas", 627)), GALGAS_bool (false), GALGAS_bool (false), var_structureType_23169, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 626)) ;
  GALGAS_lstring var_key_24107 = function_assignmentOperatorKey (var_structureType_23169, GALGAS_location::class_func_nowhere (SOURCE_FILE ("type-structure-declaration.galgas", 633)), var_structureType_23169, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 633)) ;
  GALGAS_structureAssignmentOperatorUsage var_operatorUsage_24183 = GALGAS_structureAssignmentOperatorUsage::init_21_ (var_structureType_23169, inCompiler COMMA_HERE) ;
  {
  ioArgument_ioContext.mProperty_mAssignmentOperatorMap.setter_insertKey (var_key_24107, var_operatorUsage_24183, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 635)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@userLLVMSructureTypeDefinitionIR generateLLVMType'
//
//--------------------------------------------------------------------------------------------------

void cPtr_userLLVMSructureTypeDefinitionIR::method_generateLLVMType (GALGAS_string & ioArgument_ioLLVMcode,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_userLLVMSructureTypeDefinitionIR temp_0 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(temp_0.readProperty_mLLVMDefinedTypeName ().add_operation (GALGAS_string (" = type {"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 649)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 649)) ;
  const GALGAS_userLLVMSructureTypeDefinitionIR temp_1 = this ;
  cEnumerator_propertyList enumerator_24993 (temp_1.readProperty_mPropertyList (), EnumerationOrder::up) ;
  while (enumerator_24993.hasCurrentObject ()) {
    ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_24993.current_mType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 651)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 651)) ;
    if (enumerator_24993.hasNextObject ()) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 652)) ;
    }
    enumerator_24993.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 654)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@structureAssignmentOperatorUsage generateCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_structureAssignmentOperatorUsage::method_generateCode (GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                 GALGAS_instructionListIR & ioArgument_ioInstructionListIR,
                                                                 GALGAS_allocaList & /* ioArgument_ioAllocaList */,
                                                                 const GALGAS_omnibusType constinArgument_inTargetType,
                                                                 const GALGAS_string constinArgument_inTargetLLVMName,
                                                                 const GALGAS_objectIR constinArgument_inSourcePossibleReference,
                                                                 const GALGAS_location constinArgument_inErrorLocation,
                                                                 const GALGAS_bool constinArgument_inTargetIsInitialized,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_structTypeName_25931 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inTargetType.ptr (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 676)) ;
  GALGAS_uintlist temp_0 = GALGAS_uintlist::init (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 677)) ;
  GALGAS_arcAssignmentList var_arcAssignmentList_25982 = callExtensionGetter_arcList ((const cPtr_omnibusType *) constinArgument_inTargetType.ptr (), temp_0, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 677)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = constinArgument_inTargetIsInitialized.operator_not (SOURCE_FILE ("type-structure-declaration.galgas", 678)).boolEnum () ;
    if (kBoolTrue == test_1) {
      cEnumerator_arcAssignmentList enumerator_26100 (var_arcAssignmentList_25982, EnumerationOrder::up) ;
      while (enumerator_26100.hasCurrentObject ()) {
        GALGAS_string var_llvmPropertyPtrName_26146 = GALGAS_string ("%arc.init.").add_operation (constinArgument_inErrorLocation.getter_endLocationIndex (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 680)).getter_string (SOURCE_FILE ("type-structure-declaration.galgas", 680)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 680)) ;
        GALGAS_string var_s_26228 = GALGAS_string ("  ").add_operation (var_llvmPropertyPtrName_26146, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 681)).add_operation (GALGAS_string (" = getelementptr inbounds "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 681)).add_operation (var_structTypeName_25931, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 681)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 681)).add_operation (var_structTypeName_25931, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 681)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 681)).add_operation (constinArgument_inTargetLLVMName, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 681)).add_operation (GALGAS_string (", i32 0"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 681)) ;
        cEnumerator_uintlist enumerator_26380 (enumerator_26100.current_mPropertyIndexPath (HERE), EnumerationOrder::up) ;
        while (enumerator_26380.hasCurrentObject ()) {
          var_s_26228.plusAssign_operation(GALGAS_string (", i32 ").add_operation (enumerator_26380.current_mValue (HERE).getter_string (SOURCE_FILE ("type-structure-declaration.galgas", 683)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 683)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 683)) ;
          enumerator_26380.gotoNextObject () ;
        }
        var_s_26228.plusAssign_operation(GALGAS_string (" ; ").add_operation (enumerator_26100.current_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 685)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 685)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 685)) ;
        {
        GALGAS_stringset temp_2 = GALGAS_stringset::init (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 686)) ;
        extensionSetter_appendInstructionAsFreeString (ioArgument_ioInstructionListIR, var_s_26228, temp_2, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 686)) ;
        }
        GALGAS_string var_propertyTypeLLVMName_26556 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_26100.current_mPropertyType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 687)) ;
        var_s_26228 = GALGAS_string ("store ").add_operation (var_propertyTypeLLVMName_26556, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 688)).add_operation (GALGAS_string (" null, "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 688)).add_operation (var_propertyTypeLLVMName_26556, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 688)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 688)).add_operation (var_llvmPropertyPtrName_26146, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 688)) ;
        {
        GALGAS_stringset temp_3 = GALGAS_stringset::init (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 689)) ;
        extensionSetter_appendInstructionAsFreeString (ioArgument_ioInstructionListIR, var_s_26228, temp_3, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 689)) ;
        }
        enumerator_26100.gotoNextObject () ;
      }
    }
  }
  switch (constinArgument_inSourcePossibleReference.enumValue ()) {
  case GALGAS_objectIR::kNotBuilt:
    break ;
  case GALGAS_objectIR::kEnum_llvmArrayRepeatedDynamicValue:
    {
      TC_Array <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("invalid structure assignment «llvmArrayRepeatedDynamicValue»"), fixItArray4  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 694)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_llvmArrayDynamicValues:
    {
      TC_Array <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("invalid structure assignment «llvmArrayDynamicValues»"), fixItArray5  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 696)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_llvmArrayStaticValues:
    {
      TC_Array <FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("invalid structure assignment «llvmArrayStaticValues»"), fixItArray6  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 698)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_llvmArrayRepeatedStaticValue:
    {
      const cEnumAssociatedValues_objectIR_llvmArrayRepeatedStaticValue * extractPtr_27674 = (const cEnumAssociatedValues_objectIR_llvmArrayRepeatedStaticValue *) (constinArgument_inSourcePossibleReference.unsafePointer ()) ;
      const GALGAS_uint extractedValue_27252_idx = extractPtr_27674->mAssociatedValue3 ;
      GALGAS_string var_assignmentFunctionLLVMName_27267 = function_assignmentOperatorFuncName (constinArgument_inTargetType, constinArgument_inTargetType, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 700)) ;
      GALGAS_string var_s_27362 = GALGAS_string (" call void  @").add_operation (var_assignmentFunctionLLVMName_27267.getter_assemblerRepresentation (SOURCE_FILE ("type-structure-declaration.galgas", 701)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 701)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 701)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inTargetType.ptr (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 702)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 702)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 702)).add_operation (constinArgument_inTargetLLVMName, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 702)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 702)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inTargetType.ptr (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 703)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 703)).add_operation (GALGAS_string ("* @gconst."), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 703)).add_operation (extractedValue_27252_idx.getter_string (SOURCE_FILE ("type-structure-declaration.galgas", 703)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 703)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 703)) ;
      {
      GALGAS_stringset temp_7 = GALGAS_stringset::init (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 704)) ;
      temp_7.enterElement (var_assignmentFunctionLLVMName_27267, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 704)) ;
      extensionSetter_appendInstructionAsFreeString (ioArgument_ioInstructionListIR, var_s_27362, temp_7, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 704)) ;
      }
    }
    break ;
  case GALGAS_objectIR::kEnum_reference:
    {
      GALGAS_string var_assignmentFunctionLLVMName_27708 = function_assignmentOperatorFuncName (constinArgument_inTargetType, constinArgument_inTargetType, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 706)) ;
      GALGAS_string var_s_27802 = GALGAS_string (" call void  @").add_operation (var_assignmentFunctionLLVMName_27708.getter_assemblerRepresentation (SOURCE_FILE ("type-structure-declaration.galgas", 707)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 707)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 707)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inTargetType.ptr (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 708)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 708)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 708)).add_operation (constinArgument_inTargetLLVMName, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 708)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 708)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inTargetType.ptr (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 709)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 709)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 709)).add_operation (extensionGetter_llvmName (constinArgument_inSourcePossibleReference, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 709)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 709)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 709)) ;
      {
      GALGAS_stringset temp_8 = GALGAS_stringset::init (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 710)) ;
      temp_8.enterElement (var_assignmentFunctionLLVMName_27708, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 710)) ;
      extensionSetter_appendInstructionAsFreeString (ioArgument_ioInstructionListIR, var_s_27802, temp_8, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 710)) ;
      }
    }
    break ;
  case GALGAS_objectIR::kEnum_llvmStructureValue:
    {
      const cEnumAssociatedValues_objectIR_llvmStructureValue * extractPtr_28773 = (const cEnumAssociatedValues_objectIR_llvmStructureValue *) (constinArgument_inSourcePossibleReference.unsafePointer ()) ;
      const GALGAS_sortedOperandIRList extractedValue_28170_sortedOperandValues = extractPtr_28773->mAssociatedValue1 ;
      GALGAS_uint var_uniqueValue_28201 = ioArgument_ioTemporaries.readProperty_mTemporaryIndex () ;
      ioArgument_ioTemporaries.mProperty_mTemporaryIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 713)) ;
      cEnumerator_sortedOperandIRList enumerator_28301 (extractedValue_28170_sortedOperandValues, EnumerationOrder::up) ;
      while (enumerator_28301.hasCurrentObject ()) {
        GALGAS_string var_ptr_28342 = GALGAS_string ("%ptr.").add_operation (var_uniqueValue_28201.getter_string (SOURCE_FILE ("type-structure-declaration.galgas", 715)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 715)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 715)).add_operation (enumerator_28301.current_mIndex (HERE).getter_string (SOURCE_FILE ("type-structure-declaration.galgas", 715)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 715)) ;
        GALGAS_string var_s_28392 = var_ptr_28342.add_operation (GALGAS_string (" = getelementptr "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 716)).add_operation (var_structTypeName_25931, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 716)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 716)).add_operation (var_structTypeName_25931, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 716)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 716)).add_operation (constinArgument_inTargetLLVMName, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 716)).add_operation (GALGAS_string (", i32 0, i32 "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 716)).add_operation (enumerator_28301.current_mIndex (HERE).getter_string (SOURCE_FILE ("type-structure-declaration.galgas", 716)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 716)) ;
        {
        GALGAS_stringset temp_9 = GALGAS_stringset::init (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 717)) ;
        extensionSetter_appendInstructionAsFreeString (ioArgument_ioInstructionListIR, var_s_28392, temp_9, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 717)) ;
        }
        var_s_28392 = GALGAS_string ("store ").add_operation (extensionGetter_llvmTypeName (enumerator_28301.current_mOperand (HERE), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 718)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 718)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 718)).add_operation (extensionGetter_llvmName (enumerator_28301.current_mOperand (HERE), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 718)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 718)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 718)).add_operation (extensionGetter_llvmTypeName (enumerator_28301.current_mOperand (HERE), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 718)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 718)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 718)).add_operation (var_ptr_28342, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 718)) ;
        {
        GALGAS_stringset temp_10 = GALGAS_stringset::init (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 719)) ;
        extensionSetter_appendInstructionAsFreeString (ioArgument_ioInstructionListIR, var_s_28392, temp_10, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 719)) ;
        }
        enumerator_28301.gotoNextObject () ;
      }
    }
    break ;
  case GALGAS_objectIR::kEnum_literalInteger:
    {
      TC_Array <FixItDescription> fixItArray11 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("invalid structure assignment «literalInteger»"), fixItArray11  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 722)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_literalString:
    {
      TC_Array <FixItDescription> fixItArray12 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("invalid structure assignment «literalString»"), fixItArray12  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 724)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_llvmNamedValue:
    {
      TC_Array <FixItDescription> fixItArray13 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("invalid structure assignment «llvmArrayStaticValues»"), fixItArray13  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 726)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_null:
    {
      TC_Array <FixItDescription> fixItArray14 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("invalid structure assignment «llvmValue»"), fixItArray14  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 728)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_void:
    {
      TC_Array <FixItDescription> fixItArray15 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("invalid structure assignment «void»"), fixItArray15  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 730)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_zero:
    {
      TC_Array <FixItDescription> fixItArray16 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("invalid structure assignment «zero»"), fixItArray16  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 732)) ;
    }
    break ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@structureTypeAssignFunctionIR llvmCodeGeneration'
//
//--------------------------------------------------------------------------------------------------

void cPtr_structureTypeAssignFunctionIR::method_llvmCodeGeneration (GALGAS_string & ioArgument_ioLLVMcode,
                                                                    const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                    GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_structureTypeAssignFunctionIR temp_0 = this ;
  GALGAS_uintlist temp_1 = GALGAS_uintlist::init (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 749)) ;
  GALGAS_arcAssignmentList var_arcAssignmentList_29897 = callExtensionGetter_arcList ((const cPtr_omnibusType *) temp_0.readProperty_mStructureType ().ptr (), temp_1, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 749)) ;
  const GALGAS_structureTypeAssignFunctionIR temp_2 = this ;
  GALGAS_string var_structureTypeLLVMTypeName_29958 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_2.readProperty_mStructureType ().ptr (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 750)) ;
  const GALGAS_structureTypeAssignFunctionIR temp_3 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal void @").add_operation (temp_3.readProperty_mRoutineMangledName ().readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("type-structure-declaration.galgas", 751)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 751)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 751)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" (").add_operation (var_structureTypeLLVMTypeName_29958, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 752)).add_operation (GALGAS_string (" * %inTarget, "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 752)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 752)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_structureTypeLLVMTypeName_29958.add_operation (GALGAS_string ("* %inSource) nounwind optsize {\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 753)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 753)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--- Handle ARC properties\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 754)) ;
  cEnumerator_arcAssignmentList enumerator_30343 (var_arcAssignmentList_29897, EnumerationOrder::up) ;
  while (enumerator_30343.hasCurrentObject ()) {
    GALGAS_string var_propertyTypeLLVMName_30386 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_30343.current_mPropertyType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 756)) ;
    GALGAS_string var_llvmVarName_30445 = GALGAS_string ("%arc.retain.").add_operation (enumerator_30343.current_mPropertyName (HERE).getter_assemblerRepresentation (SOURCE_FILE ("type-structure-declaration.galgas", 757)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 757)).add_operation (ioArgument_ioGenerationAdds.readProperty_mUniqueIndex ().getter_string (SOURCE_FILE ("type-structure-declaration.galgas", 757)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 757)) ;
    ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 758)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_llvmVarName_30445, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 759)).add_operation (GALGAS_string (" = getelementptr inbounds "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 759)).add_operation (var_structureTypeLLVMTypeName_29958, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 759)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 759)).add_operation (var_structureTypeLLVMTypeName_29958, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 759)).add_operation (GALGAS_string ("* %inSource, i32 0"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 759)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 759)) ;
    cEnumerator_uintlist enumerator_30749 (enumerator_30343.current_mPropertyIndexPath (HERE), EnumerationOrder::up) ;
    while (enumerator_30749.hasCurrentObject ()) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", i32 ").add_operation (enumerator_30749.current_mValue (HERE).getter_string (SOURCE_FILE ("type-structure-declaration.galgas", 761)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 761)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 761)) ;
      enumerator_30749.gotoNextObject () ;
    }
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ; ").add_operation (enumerator_30343.current_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 763)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 763)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 763)) ;
    GALGAS_string var_llvmLoadedVarName_30867 = var_llvmVarName_30445.add_operation (GALGAS_string (".loaded"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 764)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_llvmLoadedVarName_30867, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 765)).add_operation (GALGAS_string (" = load "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 765)).add_operation (var_propertyTypeLLVMName_30386, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 765)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 765)).add_operation (var_propertyTypeLLVMName_30386, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 765)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 765)).add_operation (var_llvmVarName_30445, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 765)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 765)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 765)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @arc.retain (").add_operation (var_propertyTypeLLVMName_30386, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 766)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 766)).add_operation (var_llvmLoadedVarName_30867, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 766)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 766)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 766)) ;
    enumerator_30343.gotoNextObject () ;
  }
  cEnumerator_arcAssignmentList enumerator_31192 (var_arcAssignmentList_29897, EnumerationOrder::up) ;
  while (enumerator_31192.hasCurrentObject ()) {
    GALGAS_string var_llvmVarName_31235 = GALGAS_string ("%arc.release.").add_operation (enumerator_31192.current_mPropertyName (HERE).getter_assemblerRepresentation (SOURCE_FILE ("type-structure-declaration.galgas", 769)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 769)).add_operation (ioArgument_ioGenerationAdds.readProperty_mUniqueIndex ().getter_string (SOURCE_FILE ("type-structure-declaration.galgas", 769)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 769)) ;
    ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 770)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_llvmVarName_31235, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 771)).add_operation (GALGAS_string (" = getelementptr inbounds "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 771)).add_operation (var_structureTypeLLVMTypeName_29958, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 771)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 771)).add_operation (var_structureTypeLLVMTypeName_29958, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 771)).add_operation (GALGAS_string ("* %inTarget, i32 0"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 771)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 771)) ;
    cEnumerator_uintlist enumerator_31540 (enumerator_31192.current_mPropertyIndexPath (HERE), EnumerationOrder::up) ;
    while (enumerator_31540.hasCurrentObject ()) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", i32 ").add_operation (enumerator_31540.current_mValue (HERE).getter_string (SOURCE_FILE ("type-structure-declaration.galgas", 773)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 773)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 773)) ;
      enumerator_31540.gotoNextObject () ;
    }
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ; ").add_operation (enumerator_31192.current_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 775)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 775)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 775)) ;
    GALGAS_string var_propertyTypeLLVMName_31658 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_31192.current_mPropertyType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 776)) ;
    GALGAS_string var_llvmLoadedVarName_31717 = var_llvmVarName_31235.add_operation (GALGAS_string (".loaded"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 777)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_llvmLoadedVarName_31717, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 778)).add_operation (GALGAS_string (" = load "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 778)).add_operation (var_propertyTypeLLVMName_31658, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 778)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 778)).add_operation (var_propertyTypeLLVMName_31658, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 778)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 778)).add_operation (var_llvmVarName_31235, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 778)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 778)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 778)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @arc.release (").add_operation (var_propertyTypeLLVMName_31658, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 779)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 779)).add_operation (var_llvmLoadedVarName_31717, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 779)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 779)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 779)) ;
    enumerator_31192.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--- Compute type size\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 781)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %sizeAsPtr = getelementptr inbounds ").add_operation (var_structureTypeLLVMTypeName_29958, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 782)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 782)).add_operation (var_structureTypeLLVMTypeName_29958, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 782)).add_operation (GALGAS_string ("* null, i32 1\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 782)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 782)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %byteCount = ptrtoint ").add_operation (var_structureTypeLLVMTypeName_29958, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 783)).add_operation (GALGAS_string ("* %sizeAsPtr to i32\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 783)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 783)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %useLoadStore = icmp ule i32 %byteCount, 12\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 784)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 %useLoadStore, label %loadStore, label %copyBytesOrCopyWords\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 785)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--- Copy\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 786)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("loadStore:\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 787)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %v = load ").add_operation (var_structureTypeLLVMTypeName_29958, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 788)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 788)).add_operation (var_structureTypeLLVMTypeName_29958, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 788)).add_operation (GALGAS_string ("* %inSource\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 788)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 788)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store ").add_operation (var_structureTypeLLVMTypeName_29958, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 789)).add_operation (GALGAS_string (" %v, "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 789)).add_operation (var_structureTypeLLVMTypeName_29958, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 789)).add_operation (GALGAS_string ("* %inTarget\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 789)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 789)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %copy.end\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 790)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("copyBytesOrCopyWords:\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 791)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %byteCountAnd3 = and i32 %byteCount, 3\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 792)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %byteCountIsMutipleOf4 = icmp eq i32 %byteCountAnd3, 0\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 793)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 %byteCountIsMutipleOf4, label %testTarget, label %copyBytes\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 794)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("testTarget:\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 795)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %targetAsUnsigned = ptrtoint ").add_operation (var_structureTypeLLVMTypeName_29958, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 796)).add_operation (GALGAS_string ("* %inTarget to i32\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 796)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 796)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %targetAsUnsignedAnd3 = and i32 %targetAsUnsigned, 3\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 797)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %targetAsUnsignedIsMutipleOf4 = icmp eq i32%targetAsUnsignedAnd3, 0\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 798)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 %targetAsUnsignedIsMutipleOf4, label %testSource, label %copyBytes\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 799)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("testSource:\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 800)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %sourceAsUnsigned = ptrtoint ").add_operation (var_structureTypeLLVMTypeName_29958, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 801)).add_operation (GALGAS_string ("* %inSource to i32\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 801)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 801)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %sourceAsUnsignedAnd3 = and i32 %sourceAsUnsigned, 3\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 802)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %sourceAsUnsignedIsMutipleOf4 = icmp eq i32 %sourceAsUnsignedAnd3, 0\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 803)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 %targetAsUnsignedIsMutipleOf4, label %copyWords, label %copyBytes\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 804)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("copyWords:\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 805)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %target32 = bitcast ").add_operation (var_structureTypeLLVMTypeName_29958, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 806)).add_operation (GALGAS_string ("* %inTarget to i32*\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 806)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 806)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %source32 = bitcast ").add_operation (var_structureTypeLLVMTypeName_29958, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 807)).add_operation (GALGAS_string ("* %inSource to i32*\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 807)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 807)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %temp = add i32 %byteCount, 3\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 808)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %wordCount = udiv i32 %temp, 4\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 809)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %copyWords.loop\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 810)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("copyWords.loop:\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 811)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @copy.word.array (i32* %target32, i32* %source32, i32 %wordCount)\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 812)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %copy.end\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 813)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("copyBytes:\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 814)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %target8 = bitcast ").add_operation (var_structureTypeLLVMTypeName_29958, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 815)).add_operation (GALGAS_string ("* %inTarget to i8*\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 815)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 815)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %source8 = bitcast ").add_operation (var_structureTypeLLVMTypeName_29958, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 816)).add_operation (GALGAS_string ("* %inSource to i8*\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 816)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 816)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @copy.byte.array (i8* %target8, i8* %source8, i32 %byteCount)\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 817)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %copy.end\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 818)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("copy.end:\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 819)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 820)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 821)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@syncDeclarationAST enterInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_syncDeclarationAST::method_enterInPrecedenceGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GALGAS_syncDeclarationAST temp_0 = this ;
  const GALGAS_syncDeclarationAST temp_1 = this ;
  ioArgument_ioGraph.setter_addNode (temp_0.readProperty_mSyncToolName (), temp_1, inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 50)) ;
  }
  const GALGAS_syncDeclarationAST temp_2 = this ;
  cEnumerator_structurePropertyListAST enumerator_2431 (temp_2.readProperty_mStructurePropertyListAST (), EnumerationOrder::up) ;
  while (enumerator_2431.hasCurrentObject ()) {
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      test_3 = GALGAS_bool (ComparisonKind::notEqual, enumerator_2431.current_mPropertyTypeName (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_3) {
        {
        const GALGAS_syncDeclarationAST temp_4 = this ;
        ioArgument_ioGraph.setter_addEdge (temp_4.readProperty_mSyncToolName (), enumerator_2431.current_mPropertyTypeName (HERE) COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 54)) ;
        }
      }
    }
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      test_5 = GALGAS_bool (ComparisonKind::notEqual, enumerator_2431.current_mVisibility (HERE).objectCompare (GALGAS_propertyVisibility::class_func_isPrivate (SOURCE_FILE ("type-sync-declaration.galgas", 56)))).boolEnum () ;
      if (kBoolTrue == test_5) {
        TC_Array <FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (enumerator_2431.current_mPropertyName (HERE).readProperty_location (), GALGAS_string ("a sync tool property should be private"), fixItArray6  COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 57)) ;
      }
    }
    switch (enumerator_2431.current_mPropertyKind (HERE).enumValue ()) {
    case GALGAS_propertyKindAST::kNotBuilt:
      break ;
    case GALGAS_propertyKindAST::kEnum_uninitializedStoredProperty:
    case GALGAS_propertyKindAST::kEnum_uninitializedConstantProperty:
      {
      }
      break ;
    case GALGAS_propertyKindAST::kEnum_initializedStoredProperty:
      {
        const cEnumAssociatedValues_propertyKindAST_initializedStoredProperty * extractPtr_2939 = (const cEnumAssociatedValues_propertyKindAST_initializedStoredProperty *) (enumerator_2431.current_mPropertyKind (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_2833_initExpression = extractPtr_2939->mAssociatedValue0 ;
        const GALGAS_syncDeclarationAST temp_7 = this ;
        callExtensionMethod_addDependenceEdgeForStaticExpression ((cPtr_expressionAST *) extractedValue_2833_initExpression.ptr (), temp_7.readProperty_mSyncToolName (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 62)) ;
      }
      break ;
    case GALGAS_propertyKindAST::kEnum_initializedConstantProperty:
      {
        const cEnumAssociatedValues_propertyKindAST_initializedConstantProperty * extractPtr_3085 = (const cEnumAssociatedValues_propertyKindAST_initializedConstantProperty *) (enumerator_2431.current_mPropertyKind (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_2979_initExpression = extractPtr_3085->mAssociatedValue0 ;
        const GALGAS_syncDeclarationAST temp_8 = this ;
        callExtensionMethod_addDependenceEdgeForStaticExpression ((cPtr_expressionAST *) extractedValue_2979_initExpression.ptr (), temp_8.readProperty_mSyncToolName (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 64)) ;
      }
      break ;
    case GALGAS_propertyKindAST::kEnum_readOnlyComputedProperty:
      {
        const cEnumAssociatedValues_propertyKindAST_readOnlyComputedProperty * extractPtr_3217 = (const cEnumAssociatedValues_propertyKindAST_readOnlyComputedProperty *) (enumerator_2431.current_mPropertyKind (HERE).unsafePointer ()) ;
        const GALGAS_instructionListAST extractedValue_3122_instructionList = extractPtr_3217->mAssociatedValue0 ;
        extensionMethod_noteInstructionListTypesInPrecedenceGraph (extractedValue_3122_instructionList, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 66)) ;
      }
      break ;
    case GALGAS_propertyKindAST::kEnum_writeComputedProperty:
      {
        const cEnumAssociatedValues_propertyKindAST_writeComputedProperty * extractPtr_3356 = (const cEnumAssociatedValues_propertyKindAST_writeComputedProperty *) (enumerator_2431.current_mPropertyKind (HERE).unsafePointer ()) ;
        const GALGAS_instructionListAST extractedValue_3251_writeInstructionList = extractPtr_3356->mAssociatedValue0 ;
        extensionMethod_noteInstructionListTypesInPrecedenceGraph (extractedValue_3251_writeInstructionList, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 68)) ;
      }
      break ;
    }
    enumerator_2431.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@syncDeclarationAST keyRepresentationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_syncDeclarationAST::getter_keyRepresentationForErrorSignaling (Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outRepresentation ; // Returned variable
  const GALGAS_syncDeclarationAST temp_0 = this ;
  result_outRepresentation = GALGAS_string ("sync ").add_operation (temp_0.readProperty_mSyncToolName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 76)) ;
//---
  return result_outRepresentation ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@syncDeclarationAST locationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GALGAS_location cPtr_syncDeclarationAST::getter_locationForErrorSignaling (Compiler */* inCompiler */
                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_location result_outLocation ; // Returned variable
  const GALGAS_syncDeclarationAST temp_0 = this ;
  result_outLocation = temp_0.readProperty_mSyncToolName ().readProperty_location () ;
//---
  return result_outLocation ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@syncDeclarationAST enterInContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_syncDeclarationAST::method_enterInContext (GALGAS_semanticContext & ioArgument_ioContext,
                                                     GALGAS_declarationDecorationList & /* ioArgument_ioDecoratedDeclarationList */,
                                                     GALGAS_decoratedRegularRoutineList & ioArgument_ioDecoratedRoutineList,
                                                     GALGAS_routineListIR & /* ioArgument_ioRoutineListIR */,
                                                     GALGAS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                     GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                     GALGAS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                     GALGAS_userLLVMTypeDefinitionListIR & ioArgument_ioUserLLVMTypeDefinitionListIR,
                                                     Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_propertyList temp_0 = GALGAS_propertyList::init (inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 100)) ;
  GALGAS_propertyList var_propertyList_4915 = temp_0 ;
  GALGAS_sortedOperandIRList temp_1 = GALGAS_sortedOperandIRList::init (inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 101)) ;
  GALGAS_sortedOperandIRList var_sortedOperandIRList_4961 = temp_1 ;
  GALGAS_constructorSignature temp_2 = GALGAS_constructorSignature::init (inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 102)) ;
  GALGAS_constructorSignature var_constructorSignature_5015 = temp_2 ;
  GALGAS_string var_constructorKey_5056 = GALGAS_string ("(") ;
  const GALGAS_syncDeclarationAST temp_3 = this ;
  cEnumerator_structurePropertyListAST enumerator_5100 (temp_3.readProperty_mStructurePropertyListAST (), EnumerationOrder::up) ;
  while (enumerator_5100.hasCurrentObject ()) {
    GALGAS_bool joker_5511 = GALGAS_bool (true) ;
    const GALGAS_syncDeclarationAST temp_4 = this ;
    const GALGAS_syncDeclarationAST temp_5 = this ;
    const GALGAS_syncDeclarationAST temp_6 = this ;
    extensionMethod_enterPropertyInContext (enumerator_5100.current (HERE), ioArgument_ioContext, ioArgument_ioStaticEntityMap, temp_4.readProperty_mSyncToolName (), temp_5.readProperty_mSyncToolName (), temp_6.readProperty_mSyncToolName ().readProperty_string (), ioArgument_ioDecoratedRoutineList, var_propertyList_4915, var_sortedOperandIRList_4961, var_constructorSignature_5015, var_constructorKey_5056, joker_5511, inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 105)) ;
    enumerator_5100.gotoNextObject () ;
  }
  var_constructorKey_5056.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 119)) ;
  GALGAS_constructorMap temp_7 = GALGAS_constructorMap::init (inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 121)) ;
  GALGAS_constructorMap var_constructorMap_5641 = temp_7 ;
  {
  const GALGAS_syncDeclarationAST temp_8 = this ;
  var_constructorMap_5641.setter_insertKey (GALGAS_lstring::init_21__21_ (var_constructorKey_5056, temp_8.readProperty_mSyncToolName ().readProperty_location (), inCompiler COMMA_HERE), var_constructorSignature_5015, GALGAS_constructorValue::class_func_structure (var_sortedOperandIRList_4961  COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 125)), inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 122)) ;
  }
  {
  const GALGAS_syncDeclarationAST temp_9 = this ;
  ioArgument_ioContext.mProperty_mTypeConstructorMap.setter_insertKey (temp_9.readProperty_mSyncToolName (), var_constructorMap_5641, inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 127)) ;
  }
  const GALGAS_syncDeclarationAST temp_10 = this ;
  const GALGAS_syncDeclarationAST temp_11 = this ;
  GALGAS_omnibusType var_structureType_5985 = GALGAS_omnibusType::init_21_subscript_21_attributes_21_omnibusTypeDescriptionName_21_kind_21_llvmBaseTypeName (GALGAS_subscript::class_func_noSubscript (SOURCE_FILE ("type-sync-declaration.galgas", 130)), GALGAS_omnibusTypeAttributes::class_func_instanciable (SOURCE_FILE ("type-sync-declaration.galgas", 131)), temp_10.readProperty_mSyncToolName ().readProperty_string (), GALGAS_typeKind::class_func_syncTool (SOURCE_FILE ("type-sync-declaration.galgas", 133)), temp_11.readProperty_mSyncToolName ().readProperty_string (), inCompiler COMMA_HERE) ;
  {
  const GALGAS_syncDeclarationAST temp_12 = this ;
  extensionSetter_insertType (ioArgument_ioContext.mProperty_mTypeMap, temp_12.readProperty_mSyncToolName (), var_structureType_5985, inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 136)) ;
  }
  ioArgument_ioUserLLVMTypeDefinitionListIR.addAssign_operation (GALGAS_userLLVMSructureTypeDefinitionIR::init_21__21_ (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) var_structureType_5985.ptr (), inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 139)), var_propertyList_4915, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 138)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@integerDeclarationAST locationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GALGAS_location cPtr_integerDeclarationAST::getter_locationForErrorSignaling (Compiler */* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_location result_outLocation ; // Returned variable
  result_outLocation = GALGAS_location::class_func_nowhere (SOURCE_FILE ("type-integer.galgas", 13)) ;
//---
  return result_outLocation ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@integerDeclarationAST enterInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_integerDeclarationAST::method_enterInPrecedenceGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_integerDeclarationAST temp_0 = this ;
  GALGAS_lstring var_nodeName_1448 = callExtensionGetter_typeName ((const cPtr_integerDeclarationAST *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 29)).getter_nowhere (SOURCE_FILE ("type-integer.galgas", 29)) ;
  {
  const GALGAS_integerDeclarationAST temp_1 = this ;
  ioArgument_ioGraph.setter_addNode (var_nodeName_1448, temp_1, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 30)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (var_nodeName_1448, function_ctIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 31)).getter_nowhere (SOURCE_FILE ("type-integer.galgas", 31)) COMMA_SOURCE_FILE ("type-integer.galgas", 31)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (var_nodeName_1448, function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 32)).getter_nowhere (SOURCE_FILE ("type-integer.galgas", 32)) COMMA_SOURCE_FILE ("type-integer.galgas", 32)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (var_nodeName_1448, function_ctBoolTypeName (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 33)).getter_nowhere (SOURCE_FILE ("type-integer.galgas", 33)) COMMA_SOURCE_FILE ("type-integer.galgas", 33)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@integerDeclarationAST keyRepresentationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_integerDeclarationAST::getter_keyRepresentationForErrorSignaling (Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outRepresentation ; // Returned variable
  const GALGAS_integerDeclarationAST temp_0 = this ;
  result_outRepresentation = GALGAS_string ("integer ").add_operation (callExtensionGetter_typeName ((const cPtr_integerDeclarationAST *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 39)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 39)) ;
//---
  return result_outRepresentation ;
}


//--------------------------------------------------------------------------------------------------
//
//Function 'minValueForInteger'
//
//--------------------------------------------------------------------------------------------------

GALGAS_bigint function_minValueForInteger (const GALGAS_bool & constinArgument_inIsUnsigned,
                                           const GALGAS_uint & constinArgument_inBitCount,
                                           Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_result ; // Returned variable
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inIsUnsigned.boolEnum () ;
    if (kBoolTrue == test_0) {
      result_result = GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 48)) ;
    }
  }
  if (kBoolFalse == test_0) {
    result_result = GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 50)).left_shift_operation (constinArgument_inBitCount.substract_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 50)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 50)).operator_unary_minus (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 50)) ;
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_minValueForInteger [3] = {
  & kTypeDescriptor_GALGAS_bool,
  & kTypeDescriptor_GALGAS_uint,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_minValueForInteger (Compiler * inCompiler,
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

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_minValueForInteger ("minValueForInteger",
                                                                    functionWithGenericHeader_minValueForInteger,
                                                                    & kTypeDescriptor_GALGAS_bigint,
                                                                    2,
                                                                    functionArgs_minValueForInteger) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'maxValueForInteger'
//
//--------------------------------------------------------------------------------------------------

GALGAS_bigint function_maxValueForInteger (const GALGAS_bool & constinArgument_inIsUnsigned,
                                           const GALGAS_uint & constinArgument_inBitCount,
                                           Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_result ; // Returned variable
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inIsUnsigned.boolEnum () ;
    if (kBoolTrue == test_0) {
      result_result = GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 58)).left_shift_operation (constinArgument_inBitCount, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 58)).substract_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 58)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 58)) ;
    }
  }
  if (kBoolFalse == test_0) {
    result_result = GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 60)).left_shift_operation (constinArgument_inBitCount.substract_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 60)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 60)).substract_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 60)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 60)) ;
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_maxValueForInteger [3] = {
  & kTypeDescriptor_GALGAS_bool,
  & kTypeDescriptor_GALGAS_uint,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_maxValueForInteger (Compiler * inCompiler,
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

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_maxValueForInteger ("maxValueForInteger",
                                                                    functionWithGenericHeader_maxValueForInteger,
                                                                    & kTypeDescriptor_GALGAS_bigint,
                                                                    2,
                                                                    functionArgs_maxValueForInteger) ;

//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@integerDeclarationAST enterInContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_integerDeclarationAST::method_enterInContext (GALGAS_semanticContext & ioArgument_ioContext,
                                                        GALGAS_declarationDecorationList & /* ioArgument_ioDecoratedDeclarationList */,
                                                        GALGAS_decoratedRegularRoutineList & /* ioArgument_ioDecoratedRoutineList */,
                                                        GALGAS_routineListIR & ioArgument_ioRoutineListIR,
                                                        GALGAS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                        GALGAS_staticEntityMap & /* ioArgument_ioStaticEntityMap */,
                                                        GALGAS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                        GALGAS_userLLVMTypeDefinitionListIR & /* ioArgument_ioUserLLVMTypeDefinitionListIR */,
                                                        Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_integerDeclarationAST temp_0 = this ;
  GALGAS_lstring var_integerTypeName_3816 = callExtensionGetter_typeName ((const cPtr_integerDeclarationAST *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 78)).getter_nowhere (SOURCE_FILE ("type-integer.galgas", 78)) ;
  GALGAS_unifiedTypeMapEntry var_selfTypeProxy_3916 ;
  {
  extensionSetter_makeEntry (ioArgument_ioContext.mProperty_mTypeMap, var_integerTypeName_3816, var_selfTypeProxy_3916, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 79)) ;
  }
  const GALGAS_integerDeclarationAST temp_1 = this ;
  const GALGAS_integerDeclarationAST temp_2 = this ;
  GALGAS_bigint var_min_3994 = function_minValueForInteger (temp_1.readProperty_mIsSigned ().operator_not (SOURCE_FILE ("type-integer.galgas", 81)), temp_2.readProperty_mSize (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 81)) ;
  const GALGAS_integerDeclarationAST temp_3 = this ;
  const GALGAS_integerDeclarationAST temp_4 = this ;
  GALGAS_bigint var_max_4059 = function_maxValueForInteger (temp_3.readProperty_mIsSigned ().operator_not (SOURCE_FILE ("type-integer.galgas", 82)), temp_4.readProperty_mSize (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 82)) ;
  const GALGAS_integerDeclarationAST temp_5 = this ;
  GALGAS_string var_llvmTypeName_4178 = GALGAS_string ("i").add_operation (temp_5.readProperty_mSize ().getter_string (SOURCE_FILE ("type-integer.galgas", 84)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 84)) ;
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    const GALGAS_integerDeclarationAST temp_7 = this ;
    test_6 = GALGAS_bool (ComparisonKind::equal, temp_7.readProperty_mSize ().modulo_operation (GALGAS_uint (uint32_t (16U)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 86)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_6) {
      GALGAS_lstring var_routineLLVMName_4584 ;
      {
      extensionSetter_addComputedPropertyGetter (ioArgument_ioContext, var_integerTypeName_3816, var_integerTypeName_3816.readProperty_string (), GALGAS_string ("byteSwapped").getter_nowhere (SOURCE_FILE ("type-integer.galgas", 90)), GALGAS_mode::class_func_anySafeMode (SOURCE_FILE ("type-integer.galgas", 91)), GALGAS_propertyVisibility::class_func_isPublic (SOURCE_FILE ("type-integer.galgas", 92)), var_selfTypeProxy_3916, var_routineLLVMName_4584, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 87)) ;
      }
      ioArgument_ioRoutineListIR.addAssign_operation (GALGAS_integerBuiltinFunctionIR::init_21__21_isRequired_21_warnsIfUnused_21__21_ (var_routineLLVMName_4584, GALGAS_bool (false), GALGAS_bool (false), var_llvmTypeName_4178, GALGAS_string ("bswap"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("type-integer.galgas", 96)) ;
    }
  }
  GALGAS_lstring var_routineLLVMName_5667 ;
  {
  extensionSetter_addComputedPropertyGetter (ioArgument_ioContext, var_integerTypeName_3816, var_integerTypeName_3816.readProperty_string (), GALGAS_string ("bitReversed").getter_nowhere (SOURCE_FILE ("type-integer.galgas", 125)), GALGAS_mode::class_func_anySafeMode (SOURCE_FILE ("type-integer.galgas", 126)), GALGAS_propertyVisibility::class_func_isPublic (SOURCE_FILE ("type-integer.galgas", 127)), var_selfTypeProxy_3916, var_routineLLVMName_5667, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 122)) ;
  }
  ioArgument_ioRoutineListIR.addAssign_operation (GALGAS_integerBuiltinFunctionIR::init_21__21_isRequired_21_warnsIfUnused_21__21_ (var_routineLLVMName_5667, GALGAS_bool (false), GALGAS_bool (false), var_llvmTypeName_4178, GALGAS_string ("bitreverse"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("type-integer.galgas", 131)) ;
  {
  extensionSetter_addComputedPropertyGetter (ioArgument_ioContext, var_integerTypeName_3816, var_integerTypeName_3816.readProperty_string (), GALGAS_string ("leadingZeroCount").getter_nowhere (SOURCE_FILE ("type-integer.galgas", 142)), GALGAS_mode::class_func_anySafeMode (SOURCE_FILE ("type-integer.galgas", 143)), GALGAS_propertyVisibility::class_func_isPublic (SOURCE_FILE ("type-integer.galgas", 144)), var_selfTypeProxy_3916, var_routineLLVMName_5667, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 139)) ;
  }
  ioArgument_ioRoutineListIR.addAssign_operation (GALGAS_integerBuiltinFunctionIR::init_21__21_isRequired_21_warnsIfUnused_21__21_ (var_routineLLVMName_5667, GALGAS_bool (false), GALGAS_bool (false), var_llvmTypeName_4178, GALGAS_string ("ctlz"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("type-integer.galgas", 148)) ;
  {
  extensionSetter_addComputedPropertyGetter (ioArgument_ioContext, var_integerTypeName_3816, var_integerTypeName_3816.readProperty_string (), GALGAS_string ("trainingZeroCount").getter_nowhere (SOURCE_FILE ("type-integer.galgas", 159)), GALGAS_mode::class_func_anySafeMode (SOURCE_FILE ("type-integer.galgas", 160)), GALGAS_propertyVisibility::class_func_isPublic (SOURCE_FILE ("type-integer.galgas", 161)), var_selfTypeProxy_3916, var_routineLLVMName_5667, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 156)) ;
  }
  ioArgument_ioRoutineListIR.addAssign_operation (GALGAS_integerBuiltinFunctionIR::init_21__21_isRequired_21_warnsIfUnused_21__21_ (var_routineLLVMName_5667, GALGAS_bool (false), GALGAS_bool (false), var_llvmTypeName_4178, GALGAS_string ("cttz"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("type-integer.galgas", 165)) ;
  {
  extensionSetter_addComputedPropertyGetter (ioArgument_ioContext, var_integerTypeName_3816, var_integerTypeName_3816.readProperty_string (), GALGAS_string ("setBitCount").getter_nowhere (SOURCE_FILE ("type-integer.galgas", 176)), GALGAS_mode::class_func_anySafeMode (SOURCE_FILE ("type-integer.galgas", 177)), GALGAS_propertyVisibility::class_func_isPublic (SOURCE_FILE ("type-integer.galgas", 178)), var_selfTypeProxy_3916, var_routineLLVMName_5667, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 173)) ;
  }
  ioArgument_ioRoutineListIR.addAssign_operation (GALGAS_integerBuiltinFunctionIR::init_21__21_isRequired_21_warnsIfUnused_21__21_ (var_routineLLVMName_5667, GALGAS_bool (false), GALGAS_bool (false), var_llvmTypeName_4178, GALGAS_string ("ctpop"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("type-integer.galgas", 182)) ;
  GALGAS_constantMap temp_8 = GALGAS_constantMap::init (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 190)) ;
  GALGAS_constantMap var_constantMap_7451 = temp_8 ;
  {
  var_constantMap_7451.setter_insertKey (GALGAS_string ("min").getter_nowhere (SOURCE_FILE ("type-integer.galgas", 191)), var_min_3994, var_integerTypeName_3816, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 191)) ;
  }
  {
  var_constantMap_7451.setter_insertKey (GALGAS_string ("max").getter_nowhere (SOURCE_FILE ("type-integer.galgas", 192)), var_max_4059, var_integerTypeName_3816, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 192)) ;
  }
  {
  ioArgument_ioContext.mProperty_mTypeConstantMap.setter_insertKey (var_integerTypeName_3816, var_constantMap_7451, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 193)) ;
  }
  GALGAS_constructorMap temp_9 = GALGAS_constructorMap::init (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 198)) ;
  GALGAS_constructorMap var_constructorMap_7766 = temp_9 ;
  {
  GALGAS_constructorSignature temp_10 = GALGAS_constructorSignature::init (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 199)) ;
  var_constructorMap_7766.setter_insertKey (GALGAS_string ("()").getter_nowhere (SOURCE_FILE ("type-integer.galgas", 199)), temp_10, GALGAS_constructorValue::class_func_simple (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 199))  COMMA_SOURCE_FILE ("type-integer.galgas", 199)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 199)) ;
  }
  {
  ioArgument_ioContext.mProperty_mTypeConstructorMap.setter_insertKey (var_integerTypeName_3816, var_constructorMap_7766, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 200)) ;
  }
  const GALGAS_integerDeclarationAST temp_11 = this ;
  const GALGAS_integerDeclarationAST temp_12 = this ;
  GALGAS_omnibusType var_integerType_8004 = GALGAS_omnibusType::init_21_subscript_21_attributes_21_omnibusTypeDescriptionName_21_kind_21_llvmBaseTypeName (GALGAS_subscript::class_func_noSubscript (SOURCE_FILE ("type-integer.galgas", 203)), GALGAS_omnibusTypeAttributes::class_func_instanciable (SOURCE_FILE ("type-integer.galgas", 204)).operator_or (GALGAS_omnibusTypeAttributes::class_func_copyable (SOURCE_FILE ("type-integer.galgas", 204)) COMMA_SOURCE_FILE ("type-integer.galgas", 204)), var_integerTypeName_3816.readProperty_string (), GALGAS_typeKind::class_func_integer (var_min_3994, var_max_4059, temp_11.readProperty_mIsSigned ().operator_not (SOURCE_FILE ("type-integer.galgas", 206)), temp_12.readProperty_mSize ()  COMMA_SOURCE_FILE ("type-integer.galgas", 206)), var_integerTypeName_3816.readProperty_string (), inCompiler COMMA_HERE) ;
  {
  extensionSetter_insertType (ioArgument_ioContext.mProperty_mTypeMap, var_integerTypeName_3816, var_integerType_8004, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 209)) ;
  }
  GALGAS_lstring var_key_9032 = function_assignmentOperatorKey (var_integerType_8004, GALGAS_location::class_func_nowhere (SOURCE_FILE ("type-integer.galgas", 229)), var_integerType_8004, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 229)) ;
  {
  ioArgument_ioContext.mProperty_mAssignmentOperatorMap.setter_insertKey (var_key_9032, GALGAS_simpleCopyAssignmentOperatorUsage::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 230)) ;
  }
  var_key_9032 = function_assignmentOperatorKey (var_integerType_8004, GALGAS_location::class_func_nowhere (SOURCE_FILE ("type-integer.galgas", 231)), function_compileTimeIntegerType (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 231)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 231)) ;
  {
  ioArgument_ioContext.mProperty_mAssignmentOperatorMap.setter_insertKey (var_key_9032, GALGAS_simpleCopyAssignmentOperatorUsage::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 232)) ;
  }
  GALGAS_string var_functionName_9430 = function_assignmentOperatorFuncName (var_integerType_8004, var_integerType_8004, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 234)) ;
  ioArgument_ioRoutineListIR.addAssign_operation (GALGAS_simpleAssignmentCopyRoutineIR::init_21__21_isRequired_21_warnsIfUnused_21_ (var_functionName_9430.getter_nowhere (SOURCE_FILE ("type-integer.galgas", 236)), GALGAS_bool (false), GALGAS_bool (false), var_integerType_8004, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("type-integer.galgas", 235)) ;
  GALGAS_omnibusType var_boolType_9737 = function_boolType (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 242)) ;
  {
  routine_addIntegerInfixOperator_3F__3F__3F__26__3F_ (GALGAS_omnibusInfixOperator::class_func_equal (SOURCE_FILE ("type-integer.galgas", 244)), var_integerType_8004, GALGAS_string ("icmp eq"), ioArgument_ioContext.mProperty_mInfixOperatorMap, var_boolType_9737, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 244)) ;
  }
  {
  const GALGAS_integerDeclarationAST temp_13 = this ;
  GALGAS_string temp_14 ;
  const enumGalgasBool test_15 = temp_13.readProperty_mIsSigned ().boolEnum () ;
  if (kBoolTrue == test_15) {
    temp_14 = GALGAS_string ("icmp sle") ;
  }else if (kBoolFalse == test_15) {
    temp_14 = GALGAS_string ("icmp ule") ;
  }
  routine_addIntegerInfixOperator_3F__3F__3F__26__3F_ (GALGAS_omnibusInfixOperator::class_func_infEqual (SOURCE_FILE ("type-integer.galgas", 247)), var_integerType_8004, temp_14, ioArgument_ioContext.mProperty_mInfixOperatorMap, var_boolType_9737, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 246)) ;
  }
  {
  const GALGAS_integerDeclarationAST temp_16 = this ;
  GALGAS_string temp_17 ;
  const enumGalgasBool test_18 = temp_16.readProperty_mIsSigned ().boolEnum () ;
  if (kBoolTrue == test_18) {
    temp_17 = GALGAS_string ("icmp slt") ;
  }else if (kBoolFalse == test_18) {
    temp_17 = GALGAS_string ("icmp ult") ;
  }
  routine_addIntegerInfixOperator_3F__3F__3F__26__3F_ (GALGAS_omnibusInfixOperator::class_func_lessThan (SOURCE_FILE ("type-integer.galgas", 255)), var_integerType_8004, temp_17, ioArgument_ioContext.mProperty_mInfixOperatorMap, var_boolType_9737, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 254)) ;
  }
  {
  routine_addIntegerInfixOperator_3F__3F__3F__26__3F_ (GALGAS_omnibusInfixOperator::class_func_leftShiftOp (SOURCE_FILE ("type-integer.galgas", 262)), var_integerType_8004, GALGAS_string ("shl"), ioArgument_ioContext.mProperty_mInfixOperatorMap, var_integerType_8004, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 262)) ;
  }
  {
  const GALGAS_integerDeclarationAST temp_19 = this ;
  GALGAS_string temp_20 ;
  const enumGalgasBool test_21 = temp_19.readProperty_mIsSigned ().boolEnum () ;
  if (kBoolTrue == test_21) {
    temp_20 = GALGAS_string ("ashr") ;
  }else if (kBoolFalse == test_21) {
    temp_20 = GALGAS_string ("lshr") ;
  }
  routine_addIntegerInfixOperator_3F__3F__3F__26__3F_ (GALGAS_omnibusInfixOperator::class_func_rightShiftOp (SOURCE_FILE ("type-integer.galgas", 265)), var_integerType_8004, temp_20, ioArgument_ioContext.mProperty_mInfixOperatorMap, var_integerType_8004, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 264)) ;
  }
  {
  routine_addIntegerInfixOperator_3F__3F__3F__26__3F_ (GALGAS_omnibusInfixOperator::class_func_bitWiseOrOp (SOURCE_FILE ("type-integer.galgas", 272)), var_integerType_8004, GALGAS_string ("or"), ioArgument_ioContext.mProperty_mInfixOperatorMap, var_integerType_8004, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 272)) ;
  }
  {
  routine_addIntegerInfixOperator_3F__3F__3F__26__3F_ (GALGAS_omnibusInfixOperator::class_func_bitWiseAndOp (SOURCE_FILE ("type-integer.galgas", 274)), var_integerType_8004, GALGAS_string ("and"), ioArgument_ioContext.mProperty_mInfixOperatorMap, var_integerType_8004, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 274)) ;
  }
  {
  routine_addIntegerInfixOperator_3F__3F__3F__26__3F_ (GALGAS_omnibusInfixOperator::class_func_bitWiseXorOp (SOURCE_FILE ("type-integer.galgas", 276)), var_integerType_8004, GALGAS_string ("xor"), ioArgument_ioContext.mProperty_mInfixOperatorMap, var_integerType_8004, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 276)) ;
  }
  {
  routine_addIntegerInfixOperator_3F__3F__3F__26__3F_ (GALGAS_omnibusInfixOperator::class_func_addOpNoOvf (SOURCE_FILE ("type-integer.galgas", 278)), var_integerType_8004, GALGAS_string ("add"), ioArgument_ioContext.mProperty_mInfixOperatorMap, var_integerType_8004, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 278)) ;
  }
  {
  routine_addIntegerInfixOperator_3F__3F__3F__26__3F_ (GALGAS_omnibusInfixOperator::class_func_subOpNoOvf (SOURCE_FILE ("type-integer.galgas", 280)), var_integerType_8004, GALGAS_string ("sub"), ioArgument_ioContext.mProperty_mInfixOperatorMap, var_integerType_8004, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 280)) ;
  }
  {
  routine_addIntegerInfixOperator_3F__3F__3F__26__3F_ (GALGAS_omnibusInfixOperator::class_func_mulOpNoOvf (SOURCE_FILE ("type-integer.galgas", 282)), var_integerType_8004, GALGAS_string ("mul"), ioArgument_ioContext.mProperty_mInfixOperatorMap, var_integerType_8004, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 282)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Routine 'addIntegerInfixOperator???&?'
//
//--------------------------------------------------------------------------------------------------

void routine_addIntegerInfixOperator_3F__3F__3F__26__3F_ (const GALGAS_omnibusInfixOperator constinArgument_inInfixOperator,
                                                          const GALGAS_omnibusType constinArgument_inIntegerType,
                                                          const GALGAS_string constinArgument_inLLVMOp,
                                                          GALGAS_infixOperatorMap & ioArgument_ioInfixOperatorMap,
                                                          const GALGAS_omnibusType constinArgument_inResultType,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_omnibusType var_ctIntType_11758 = function_compileTimeIntegerType (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 294)) ;
  GALGAS_lstring var_key_11802 = function_infixOperatorMapKey (constinArgument_inIntegerType, constinArgument_inInfixOperator, GALGAS_location::class_func_nowhere (SOURCE_FILE ("type-integer.galgas", 295)), constinArgument_inIntegerType, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 295)) ;
  {
  ioArgument_ioInfixOperatorMap.setter_insertKey (var_key_11802, constinArgument_inResultType, GALGAS_inlineInfixOperatorUsage::init_21_ (constinArgument_inLLVMOp, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 296)) ;
  }
  var_key_11802 = function_infixOperatorMapKey (constinArgument_inIntegerType, constinArgument_inInfixOperator, GALGAS_location::class_func_nowhere (SOURCE_FILE ("type-integer.galgas", 297)), var_ctIntType_11758, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 297)) ;
  {
  ioArgument_ioInfixOperatorMap.setter_insertKey (var_key_11802, constinArgument_inResultType, GALGAS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage::init_21_ (constinArgument_inLLVMOp, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 298)) ;
  }
  var_key_11802 = function_infixOperatorMapKey (var_ctIntType_11758, constinArgument_inInfixOperator, GALGAS_location::class_func_nowhere (SOURCE_FILE ("type-integer.galgas", 299)), constinArgument_inIntegerType, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 299)) ;
  {
  ioArgument_ioInfixOperatorMap.setter_insertKey (var_key_11802, constinArgument_inResultType, GALGAS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage::init_21_ (constinArgument_inLLVMOp, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 300)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@inlineInfix_integer_compileTimeInt_operatorUsage generateCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage::method_generateCode (const GALGAS_objectIR constinArgument_inLeftOperand,
                                                                                          const GALGAS_location constinArgument_inOperatorLocation,
                                                                                          const GALGAS_objectIR constinArgument_inRightOperand,
                                                                                          const GALGAS_omnibusType constinArgument_inResultType,
                                                                                          GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                                          GALGAS_allocaList & /* ioArgument_ioAllocaList */,
                                                                                          GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                                          GALGAS_objectIR & outArgument_outResultValue,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint var_minValue_13418 ;
  GALGAS_bigint var_maxValue_13437 ;
  GALGAS_bool joker_13446_2 ; // Joker input parameter
  GALGAS_uint joker_13446_1 ; // Joker input parameter
  extensionGetter_type (constinArgument_inLeftOperand, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 324)).readProperty_kind ().method_integer (var_minValue_13418, var_maxValue_13437, joker_13446_2, joker_13446_1, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 324)) ;
  GALGAS_bigint var_value_13499 ;
  GALGAS_omnibusType joker_13484_1 ; // Joker input parameter
  constinArgument_inRightOperand.method_literalInteger (joker_13484_1, var_value_13499, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 325)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (ComparisonKind::lowerThan, var_value_13499.objectCompare (var_minValue_13418)).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GALGAS_string ("right operand is a compile time integer with an invalid value, lower than $").add_operation (extensionGetter_type (constinArgument_inLeftOperand, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 329)).readProperty_omnibusTypeDescriptionName (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 328)).add_operation (GALGAS_string (" minimum value"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 329)), fixItArray1  COMMA_SOURCE_FILE ("type-integer.galgas", 327)) ;
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = GALGAS_bool (ComparisonKind::greaterThan, var_value_13499.objectCompare (var_maxValue_13437)).boolEnum () ;
      if (kBoolTrue == test_2) {
        TC_Array <FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GALGAS_string ("right operand is a compile time integer with an invalid value, greater than $").add_operation (extensionGetter_type (constinArgument_inLeftOperand, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 333)).readProperty_omnibusTypeDescriptionName (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 332)).add_operation (GALGAS_string (" maximum value"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 333)), fixItArray3  COMMA_SOURCE_FILE ("type-integer.galgas", 331)) ;
      }
    }
  }
  GALGAS_objectIR var_leftOperand_13958 = constinArgument_inLeftOperand ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_leftOperand_13958, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 337)) ;
  }
  {
  routine_getNewTempValue_3F__26__21_ (constinArgument_inResultType, ioArgument_ioTemporaries, outArgument_outResultValue, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 338)) ;
  }
  const GALGAS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage temp_4 = this ;
  GALGAS_string var_s_14146 = extensionGetter_llvmName (outArgument_outResultValue, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 339)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 339)).add_operation (temp_4.readProperty_mLLVMOperation (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 339)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 339)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (var_leftOperand_13958, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 339)).ptr (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 339)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 339)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 339)).add_operation (extensionGetter_llvmName (var_leftOperand_13958, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 340)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 340)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 340)).add_operation (extensionGetter_llvmName (constinArgument_inRightOperand, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 340)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 340)) ;
  {
  GALGAS_stringset temp_5 = GALGAS_stringset::init (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 341)) ;
  extensionSetter_appendInstructionAsFreeString (ioArgument_ioInstructionGenerationList, var_s_14146, temp_5, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 341)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@inlineInfix_compileTimeInt_integer_operatorUsage generateCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage::method_generateCode (const GALGAS_objectIR constinArgument_inLeftOperand,
                                                                                          const GALGAS_location constinArgument_inOperatorLocation,
                                                                                          const GALGAS_objectIR constinArgument_inRightOperand,
                                                                                          const GALGAS_omnibusType constinArgument_inResultType,
                                                                                          GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                                          GALGAS_allocaList & /* ioArgument_ioAllocaList */,
                                                                                          GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                                          GALGAS_objectIR & outArgument_outResultValue,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint var_minValue_15418 ;
  GALGAS_bigint var_maxValue_15437 ;
  GALGAS_bool joker_15446_2 ; // Joker input parameter
  GALGAS_uint joker_15446_1 ; // Joker input parameter
  extensionGetter_type (constinArgument_inRightOperand, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 365)).readProperty_kind ().method_integer (var_minValue_15418, var_maxValue_15437, joker_15446_2, joker_15446_1, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 365)) ;
  GALGAS_bigint var_value_15498 ;
  GALGAS_omnibusType joker_15483_1 ; // Joker input parameter
  constinArgument_inLeftOperand.method_literalInteger (joker_15483_1, var_value_15498, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 366)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (ComparisonKind::lowerThan, var_value_15498.objectCompare (var_minValue_15418)).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GALGAS_string ("left operand is a compile time integer with an invalid value, lower than $").add_operation (extensionGetter_type (constinArgument_inRightOperand, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 370)).readProperty_omnibusTypeDescriptionName (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 369)).add_operation (GALGAS_string (" minimum value"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 370)), fixItArray1  COMMA_SOURCE_FILE ("type-integer.galgas", 368)) ;
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = GALGAS_bool (ComparisonKind::greaterThan, var_value_15498.objectCompare (var_maxValue_15437)).boolEnum () ;
      if (kBoolTrue == test_2) {
        TC_Array <FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GALGAS_string ("left operand is a compile time integer with an invalid value, greater than $").add_operation (extensionGetter_type (constinArgument_inRightOperand, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 374)).readProperty_omnibusTypeDescriptionName (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 373)).add_operation (GALGAS_string (" maximum value"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 374)), fixItArray3  COMMA_SOURCE_FILE ("type-integer.galgas", 372)) ;
      }
    }
  }
  GALGAS_objectIR var_rightOperand_15957 = constinArgument_inRightOperand ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_rightOperand_15957, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 378)) ;
  }
  {
  routine_getNewTempValue_3F__26__21_ (constinArgument_inResultType, ioArgument_ioTemporaries, outArgument_outResultValue, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 379)) ;
  }
  const GALGAS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage temp_4 = this ;
  GALGAS_string var_s_16148 = extensionGetter_llvmName (outArgument_outResultValue, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 380)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 380)).add_operation (temp_4.readProperty_mLLVMOperation (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 380)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 380)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (var_rightOperand_15957, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 380)).ptr (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 380)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 380)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 380)).add_operation (extensionGetter_llvmName (constinArgument_inLeftOperand, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 381)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 381)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 381)).add_operation (extensionGetter_llvmName (var_rightOperand_15957, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 381)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 381)) ;
  {
  GALGAS_stringset temp_5 = GALGAS_stringset::init (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 382)) ;
  extensionSetter_appendInstructionAsFreeString (ioArgument_ioInstructionGenerationList, var_s_16148, temp_5, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 382)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@integerBuiltinFunctionIR llvmCodeGeneration'
//
//--------------------------------------------------------------------------------------------------

void cPtr_integerBuiltinFunctionIR::method_llvmCodeGeneration (GALGAS_string & ioArgument_ioLLVMcode,
                                                               const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                               GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_integerBuiltinFunctionIR temp_0 = this ;
  const GALGAS_integerBuiltinFunctionIR temp_1 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal ").add_operation (temp_0.readProperty_mLLVMTypeName (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 401)).add_operation (GALGAS_string (" @"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 401)).add_operation (temp_1.readProperty_mRoutineMangledName ().readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("type-integer.galgas", 401)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 401)), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 401)) ;
  const GALGAS_integerBuiltinFunctionIR temp_2 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" (").add_operation (temp_2.readProperty_mLLVMTypeName (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 402)).add_operation (GALGAS_string ("* %inValue) {\n"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 402)), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 402)) ;
  const GALGAS_integerBuiltinFunctionIR temp_3 = this ;
  const GALGAS_integerBuiltinFunctionIR temp_4 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %value = load ").add_operation (temp_3.readProperty_mLLVMTypeName (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 403)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 403)).add_operation (temp_4.readProperty_mLLVMTypeName (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 403)).add_operation (GALGAS_string ("* %inValue\n"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 403)), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 403)) ;
  const GALGAS_integerBuiltinFunctionIR temp_5 = this ;
  const GALGAS_integerBuiltinFunctionIR temp_6 = this ;
  const GALGAS_integerBuiltinFunctionIR temp_7 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %result = call ").add_operation (temp_5.readProperty_mLLVMTypeName (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 404)).add_operation (GALGAS_string (" @llvm."), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 404)).add_operation (temp_6.readProperty_mIntrinsicName (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 404)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 404)).add_operation (temp_7.readProperty_mLLVMTypeName (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 404)), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 404)) ;
  const GALGAS_integerBuiltinFunctionIR temp_8 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" (").add_operation (temp_8.readProperty_mLLVMTypeName (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 405)).add_operation (GALGAS_string (" %value)\n"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 405)), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 405)) ;
  const GALGAS_integerBuiltinFunctionIR temp_9 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret ").add_operation (temp_9.readProperty_mLLVMTypeName (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 406)).add_operation (GALGAS_string (" %result\n"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 406)), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 406)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n\n"), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 407)) ;
  const GALGAS_integerBuiltinFunctionIR temp_10 = this ;
  const GALGAS_integerBuiltinFunctionIR temp_11 = this ;
  const GALGAS_integerBuiltinFunctionIR temp_12 = this ;
  const GALGAS_integerBuiltinFunctionIR temp_13 = this ;
  ioArgument_ioGenerationAdds.mProperty_mExternFunctionDeclarationSet.addAssign_operation (temp_10.readProperty_mLLVMTypeName ().add_operation (GALGAS_string (" @llvm."), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 409)).add_operation (temp_11.readProperty_mIntrinsicName (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 409)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 409)).add_operation (temp_12.readProperty_mLLVMTypeName (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 409)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 409)).add_operation (temp_13.readProperty_mLLVMTypeName (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 409)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 409))  COMMA_SOURCE_FILE ("type-integer.galgas", 408)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@literalStringDeclarationAST locationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GALGAS_location cPtr_literalStringDeclarationAST::getter_locationForErrorSignaling (Compiler */* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_location result_outLocation ; // Returned variable
  result_outLocation = GALGAS_location::class_func_nowhere (SOURCE_FILE ("type-static-string.galgas", 11)) ;
//---
  return result_outLocation ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalStringDeclarationAST enterInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_literalStringDeclarationAST::method_enterInPrecedenceGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring var_literalStringTypeName_1162 = function_staticStringTypeName (inCompiler COMMA_SOURCE_FILE ("type-static-string.galgas", 21)).getter_nowhere (SOURCE_FILE ("type-static-string.galgas", 21)) ;
  {
  const GALGAS_literalStringDeclarationAST temp_0 = this ;
  ioArgument_ioGraph.setter_addNode (var_literalStringTypeName_1162, temp_0, inCompiler COMMA_SOURCE_FILE ("type-static-string.galgas", 22)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (var_literalStringTypeName_1162, GALGAS_string ("u8").getter_nowhere (SOURCE_FILE ("type-static-string.galgas", 23)) COMMA_SOURCE_FILE ("type-static-string.galgas", 23)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@literalStringDeclarationAST keyRepresentationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_literalStringDeclarationAST::getter_keyRepresentationForErrorSignaling (Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outRepresentation ; // Returned variable
  result_outRepresentation = GALGAS_string ("literal string ").add_operation (function_staticStringTypeName (inCompiler COMMA_SOURCE_FILE ("type-static-string.galgas", 29)), inCompiler COMMA_SOURCE_FILE ("type-static-string.galgas", 29)) ;
//---
  return result_outRepresentation ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalStringDeclarationAST enterInContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_literalStringDeclarationAST::method_enterInContext (GALGAS_semanticContext & ioArgument_ioContext,
                                                              GALGAS_declarationDecorationList & /* ioArgument_ioDecoratedDeclarationList */,
                                                              GALGAS_decoratedRegularRoutineList & /* ioArgument_ioDecoratedRoutineList */,
                                                              GALGAS_routineListIR & /* ioArgument_ioRoutineListIR */,
                                                              GALGAS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                              GALGAS_staticEntityMap & /* ioArgument_ioStaticEntityMap */,
                                                              GALGAS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                              GALGAS_userLLVMTypeDefinitionListIR & /* ioArgument_ioUserLLVMTypeDefinitionListIR */,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_omnibusType var_selfType_2626 = function_literalStringType (inCompiler COMMA_SOURCE_FILE ("type-static-string.galgas", 47)) ;
  {
  extensionSetter_insertType (ioArgument_ioContext.mProperty_mTypeMap, function_staticStringTypeName (inCompiler COMMA_SOURCE_FILE ("type-static-string.galgas", 49)).getter_nowhere (SOURCE_FILE ("type-static-string.galgas", 49)), var_selfType_2626, inCompiler COMMA_SOURCE_FILE ("type-static-string.galgas", 48)) ;
  }
  GALGAS_lstring var_key_2793 = function_assignmentOperatorKey (var_selfType_2626, GALGAS_location::class_func_nowhere (SOURCE_FILE ("type-static-string.galgas", 53)), var_selfType_2626, inCompiler COMMA_SOURCE_FILE ("type-static-string.galgas", 53)) ;
  {
  ioArgument_ioContext.mProperty_mAssignmentOperatorMap.setter_insertKey (var_key_2793, GALGAS_simpleCopyAssignmentOperatorUsage::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("type-static-string.galgas", 54)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@typeOpaqueDeclarationAST enterInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_typeOpaqueDeclarationAST::method_enterInPrecedenceGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GALGAS_typeOpaqueDeclarationAST temp_0 = this ;
  const GALGAS_typeOpaqueDeclarationAST temp_1 = this ;
  ioArgument_ioGraph.setter_addNode (temp_0.readProperty_mOpaqueTypeName (), temp_1, inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 58)) ;
  }
  const GALGAS_typeOpaqueDeclarationAST temp_2 = this ;
  const GALGAS_typeOpaqueDeclarationAST temp_3 = this ;
  callExtensionMethod_addDependenceEdgeForStaticExpression ((cPtr_expressionAST *) temp_2.readProperty_mSizeExpression ().ptr (), temp_3.readProperty_mOpaqueTypeName (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 60)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@typeOpaqueDeclarationAST keyRepresentationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_typeOpaqueDeclarationAST::getter_keyRepresentationForErrorSignaling (Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outRepresentation ; // Returned variable
  const GALGAS_typeOpaqueDeclarationAST temp_0 = this ;
  result_outRepresentation = GALGAS_string ("opaque ").add_operation (temp_0.readProperty_mOpaqueTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 66)) ;
//---
  return result_outRepresentation ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@typeOpaqueDeclarationAST locationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GALGAS_location cPtr_typeOpaqueDeclarationAST::getter_locationForErrorSignaling (Compiler */* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_location result_outLocation ; // Returned variable
  const GALGAS_typeOpaqueDeclarationAST temp_0 = this ;
  result_outLocation = temp_0.readProperty_mOpaqueTypeName ().readProperty_location () ;
//---
  return result_outLocation ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@typeOpaqueDeclarationAST enterInContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_typeOpaqueDeclarationAST::method_enterInContext (GALGAS_semanticContext & ioArgument_ioContext,
                                                           GALGAS_declarationDecorationList & /* ioArgument_ioDecoratedDeclarationList */,
                                                           GALGAS_decoratedRegularRoutineList & /* ioArgument_ioDecoratedRoutineList */,
                                                           GALGAS_routineListIR & /* ioArgument_ioRoutineListIR */,
                                                           GALGAS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                           GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                           GALGAS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                           GALGAS_userLLVMTypeDefinitionListIR & /* ioArgument_ioUserLLVMTypeDefinitionListIR */,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_omnibusTypeAttributes var_opaqueTypeAttributes_4305 = GALGAS_omnibusTypeAttributes::class_func_none (SOURCE_FILE ("type-opaque-declaration.galgas", 89)) ;
  GALGAS_bool var_copyable_4340 = GALGAS_bool (false) ;
  const GALGAS_typeOpaqueDeclarationAST temp_0 = this ;
  cEnumerator_lstringlist enumerator_4364 (temp_0.readProperty_mAttributeList (), EnumerationOrder::up) ;
  while (enumerator_4364.hasCurrentObject ()) {
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = GALGAS_bool (ComparisonKind::equal, enumerator_4364.current_mValue (HERE).readProperty_string ().objectCompare (function_instantiableAttribute (inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 92)))).boolEnum () ;
      if (kBoolTrue == test_1) {
        enumGalgasBool test_2 = kBoolTrue ;
        if (kBoolTrue == test_2) {
          test_2 = var_opaqueTypeAttributes_4305.getter_instanciable (SOURCE_FILE ("type-opaque-declaration.galgas", 93)).boolEnum () ;
          if (kBoolTrue == test_2) {
            TC_Array <FixItDescription> fixItArray3 ;
            inCompiler->emitSemanticError (enumerator_4364.current_mValue (HERE).readProperty_location (), GALGAS_string ("duplicated attribute"), fixItArray3  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 94)) ;
          }
        }
        if (kBoolFalse == test_2) {
          var_opaqueTypeAttributes_4305 = var_opaqueTypeAttributes_4305.operator_or (GALGAS_omnibusTypeAttributes::class_func_instanciable (SOURCE_FILE ("type-opaque-declaration.galgas", 96)) COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 96)) ;
        }
      }
    }
    if (kBoolFalse == test_1) {
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        test_4 = GALGAS_bool (ComparisonKind::equal, enumerator_4364.current_mValue (HERE).readProperty_string ().objectCompare (function_copyableAttribute (inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 98)))).boolEnum () ;
        if (kBoolTrue == test_4) {
          enumGalgasBool test_5 = kBoolTrue ;
          if (kBoolTrue == test_5) {
            test_5 = var_copyable_4340.boolEnum () ;
            if (kBoolTrue == test_5) {
              TC_Array <FixItDescription> fixItArray6 ;
              inCompiler->emitSemanticError (enumerator_4364.current_mValue (HERE).readProperty_location (), GALGAS_string ("duplicated attribute"), fixItArray6  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 100)) ;
            }
          }
          if (kBoolFalse == test_5) {
            var_copyable_4340 = GALGAS_bool (true) ;
            var_opaqueTypeAttributes_4305 = var_opaqueTypeAttributes_4305.operator_or (GALGAS_omnibusTypeAttributes::class_func_copyable (SOURCE_FILE ("type-opaque-declaration.galgas", 103)) COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 103)) ;
          }
        }
      }
      if (kBoolFalse == test_4) {
        TC_Array <FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (enumerator_4364.current_mValue (HERE).readProperty_location (), GALGAS_string ("only @").add_operation (function_copyableAttribute (inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 107)), inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 107)).add_operation (GALGAS_string (" and @"), inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 107)).add_operation (function_instantiableAttribute (inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 107)), inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 107)).add_operation (GALGAS_string (" attributes are allowed here"), inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 107)), fixItArray7  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 106)) ;
      }
    }
    enumerator_4364.gotoNextObject () ;
  }
  GALGAS_objectIR var_sizeExpressionIR_5326 ;
  {
  const GALGAS_typeOpaqueDeclarationAST temp_8 = this ;
  const GALGAS_typeOpaqueDeclarationAST temp_9 = this ;
  routine_computeStaticExpression_26_context_26_staticEntityMap_3F_expression_3F_errorLocation_3F_optionalContextualTypeName_21_result (ioArgument_ioContext, ioArgument_ioStaticEntityMap, temp_8.readProperty_mSizeExpression (), temp_9.readProperty_mSizeExpressionLocation (), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-opaque-declaration.galgas", 117)), var_sizeExpressionIR_5326, inCompiler  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 112)) ;
  }
  enumGalgasBool test_10 = kBoolTrue ;
  if (kBoolTrue == test_10) {
    test_10 = var_sizeExpressionIR_5326.getter_isLiteralInteger (SOURCE_FILE ("type-opaque-declaration.galgas", 120)).operator_not (SOURCE_FILE ("type-opaque-declaration.galgas", 120)).boolEnum () ;
    if (kBoolTrue == test_10) {
      const GALGAS_typeOpaqueDeclarationAST temp_11 = this ;
      TC_Array <FixItDescription> fixItArray12 ;
      inCompiler->emitSemanticError (temp_11.readProperty_mSizeExpressionLocation (), GALGAS_string ("array size expression is not a literal integer"), fixItArray12  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 121)) ;
    }
  }
  if (kBoolFalse == test_10) {
    GALGAS_constructorMap temp_13 = GALGAS_constructorMap::init (inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 123)) ;
    GALGAS_constructorMap var_constructorMap_5518 = temp_13 ;
    enumGalgasBool test_14 = kBoolTrue ;
    if (kBoolTrue == test_14) {
      test_14 = var_opaqueTypeAttributes_4305.getter_instanciable (SOURCE_FILE ("type-opaque-declaration.galgas", 124)).boolEnum () ;
      if (kBoolTrue == test_14) {
        {
        GALGAS_constructorSignature temp_15 = GALGAS_constructorSignature::init (inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 125)) ;
        var_constructorMap_5518.setter_insertKey (GALGAS_string ("()").getter_nowhere (SOURCE_FILE ("type-opaque-declaration.galgas", 125)), temp_15, GALGAS_constructorValue::class_func_simple (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 125))  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 125)), inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 125)) ;
        }
        {
        const GALGAS_typeOpaqueDeclarationAST temp_16 = this ;
        ioArgument_ioContext.mProperty_mTypeConstructorMap.setter_insertKey (temp_16.readProperty_mOpaqueTypeName (), var_constructorMap_5518, inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 126)) ;
        }
      }
    }
    GALGAS_bigint var_bitSize_5811 ;
    GALGAS_omnibusType joker_5796_1 ; // Joker input parameter
    var_sizeExpressionIR_5326.method_literalInteger (joker_5796_1, var_bitSize_5811, inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 128)) ;
    const GALGAS_typeOpaqueDeclarationAST temp_17 = this ;
    const GALGAS_typeOpaqueDeclarationAST temp_18 = this ;
    GALGAS_omnibusType var_opaqueType_5828 = GALGAS_omnibusType::init_21_subscript_21_attributes_21_omnibusTypeDescriptionName_21_kind_21_llvmBaseTypeName (GALGAS_subscript::class_func_noSubscript (SOURCE_FILE ("type-opaque-declaration.galgas", 130)), var_opaqueTypeAttributes_4305, temp_17.readProperty_mOpaqueTypeName ().readProperty_string (), GALGAS_typeKind::class_func_opaque (var_bitSize_5811  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 133)), temp_18.readProperty_mOpaqueTypeName ().readProperty_string (), inCompiler COMMA_HERE) ;
    {
    const GALGAS_typeOpaqueDeclarationAST temp_19 = this ;
    extensionSetter_insertType (ioArgument_ioContext.mProperty_mTypeMap, temp_19.readProperty_mOpaqueTypeName (), var_opaqueType_5828, inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 136)) ;
    }
  }
  enumGalgasBool test_20 = kBoolTrue ;
  if (kBoolTrue == test_20) {
    test_20 = var_copyable_4340.boolEnum () ;
    if (kBoolTrue == test_20) {
      {
      const GALGAS_typeOpaqueDeclarationAST temp_21 = this ;
      routine_print_3F_ (GALGAS_string ("OPAQUE ").add_operation (temp_21.readProperty_mOpaqueTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 140)).add_operation (GALGAS_string (" is copyable\n"), inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 140)), inCompiler  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 140)) ;
      }
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@controlRegisterGroupDeclarationAST keyRepresentationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_controlRegisterGroupDeclarationAST::getter_keyRepresentationForErrorSignaling (Compiler * inCompiler
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outRepresentation ; // Returned variable
  const GALGAS_controlRegisterGroupDeclarationAST temp_0 = this ;
  result_outRepresentation = function_registerGroupNameFromOmnibusName (temp_0.readProperty_mRegisterGroupList ().getter_mRegisterGroupNameAtIndex (GALGAS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 305)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 305)).readProperty_string () ;
//---
  return result_outRepresentation ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@controlRegisterGroupDeclarationAST locationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GALGAS_location cPtr_controlRegisterGroupDeclarationAST::getter_locationForErrorSignaling (Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_location result_result ; // Returned variable
  const GALGAS_controlRegisterGroupDeclarationAST temp_0 = this ;
  result_result = temp_0.readProperty_mRegisterGroupList ().getter_mRegisterGroupNameAtIndex (GALGAS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 311)).readProperty_location () ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@controlRegisterGroupDeclarationAST enterInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_controlRegisterGroupDeclarationAST::method_enterInPrecedenceGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_controlRegisterGroupDeclarationAST temp_0 = this ;
  GALGAS_lstring var_nodeName_12628 = function_registerGroupNameFromOmnibusName (temp_0.readProperty_mRegisterGroupList ().getter_mRegisterGroupNameAtIndex (GALGAS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 317)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 317)) ;
  {
  const GALGAS_controlRegisterGroupDeclarationAST temp_1 = this ;
  ioArgument_ioGraph.setter_addNode (var_nodeName_12628, temp_1, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 319)) ;
  }
  const GALGAS_controlRegisterGroupDeclarationAST temp_2 = this ;
  cEnumerator_controlRegisterDeclarationList enumerator_12832 (temp_2.readProperty_mRegisters (), EnumerationOrder::up) ;
  while (enumerator_12832.hasCurrentObject ()) {
    {
    ioArgument_ioGraph.setter_addEdge (var_nodeName_12628, enumerator_12832.current (HERE).readProperty_mRegisterTypeName () COMMA_SOURCE_FILE ("declaration-control-register.galgas", 323)) ;
    }
    {
    ioArgument_ioGraph.setter_addEdge (var_nodeName_12628, function_compileTimeDeclarationBarrier (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 324)) COMMA_SOURCE_FILE ("declaration-control-register.galgas", 324)) ;
    }
    GALGAS_stringlist var_split_13095 = enumerator_12832.current (HERE).readProperty_mRegisterTypeName ().readProperty_string ().getter_componentsSeparatedByString (GALGAS_string ("u") COMMA_SOURCE_FILE ("declaration-control-register.galgas", 326)) ;
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      GALGAS_bool test_4 = GALGAS_bool (ComparisonKind::equal, var_split_13095.getter_count (SOURCE_FILE ("declaration-control-register.galgas", 327)).objectCompare (GALGAS_uint (uint32_t (2U)))) ;
      if (kBoolTrue == test_4.boolEnum ()) {
        test_4 = GALGAS_bool (ComparisonKind::equal, var_split_13095.getter_mValueAtIndex (GALGAS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 327)).objectCompare (GALGAS_string::makeEmptyString ())) ;
      }
      GALGAS_bool test_5 = test_4 ;
      if (kBoolTrue == test_5.boolEnum ()) {
        test_5 = var_split_13095.getter_mValueAtIndex (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 327)).getter_isDecimalUnsignedNumber (SOURCE_FILE ("declaration-control-register.galgas", 327)) ;
      }
      test_3 = test_5.boolEnum () ;
      if (kBoolTrue == test_3) {
        GALGAS_uint var_n_13293 = var_split_13095.getter_mValueAtIndex (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 328)).getter_decimalUnsignedNumber (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 328)) ;
        enumGalgasBool test_6 = kBoolTrue ;
        if (kBoolTrue == test_6) {
          test_6 = GALGAS_bool (ComparisonKind::greaterThan, var_n_13293.objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
          if (kBoolTrue == test_6) {
            GALGAS_lstring var_bitSizeTypeName_13378 = GALGAS_lstring::init_21__21_ (GALGAS_string ("u").add_operation (var_n_13293.substract_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 330)).getter_significantBitCount (SOURCE_FILE ("declaration-control-register.galgas", 330)).getter_string (SOURCE_FILE ("declaration-control-register.galgas", 330)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 330)), enumerator_12832.current (HERE).readProperty_mRegisterTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
            {
            ioArgument_ioGraph.setter_addEdge (var_nodeName_12628, var_bitSizeTypeName_13378 COMMA_SOURCE_FILE ("declaration-control-register.galgas", 331)) ;
            }
          }
        }
      }
    }
    cEnumerator_controlRegisterBitSliceList enumerator_13598 (enumerator_12832.current (HERE).readProperty_mRegisterBitSliceList (), EnumerationOrder::up) ;
    while (enumerator_13598.hasCurrentObject ()) {
      switch (enumerator_13598.current_mRegisterBitSlice (HERE).enumValue ()) {
      case GALGAS_controlRegisterBitSlice::kNotBuilt:
        break ;
      case GALGAS_controlRegisterBitSlice::kEnum_unusedBits:
        {
        }
        break ;
      case GALGAS_controlRegisterBitSlice::kEnum_namedBit:
        {
          const cEnumAssociatedValues_controlRegisterBitSlice_namedBit * extractPtr_13839 = (const cEnumAssociatedValues_controlRegisterBitSlice_namedBit *) (enumerator_13598.current_mRegisterBitSlice (HERE).unsafePointer ()) ;
          const GALGAS_lbigint extractedValue_13716_count = extractPtr_13839->mAssociatedValue1 ;
          enumGalgasBool test_7 = kBoolTrue ;
          if (kBoolTrue == test_7) {
            test_7 = GALGAS_bool (ComparisonKind::greaterOrEqual, extractedValue_13716_count.readProperty_bigint ().objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 339)))).boolEnum () ;
            if (kBoolTrue == test_7) {
              {
              extensionSetter_noteUINTType (ioArgument_ioGraph, extractedValue_13716_count.readProperty_bigint ().getter_uint (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 340)), extractedValue_13716_count.readProperty_location (), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 340)) ;
              }
            }
          }
        }
        break ;
      }
      enumerator_13598.gotoNextObject () ;
    }
    GALGAS_lstring var_rootNode_13908 = GALGAS_lstring::init_21__21_ (function_configurationNodeNameForPrecedenceGraph (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 345)), var_nodeName_12628.readProperty_location (), inCompiler COMMA_HERE) ;
    {
    ioArgument_ioGraph.setter_addEdge (var_nodeName_12628, var_rootNode_13908 COMMA_SOURCE_FILE ("declaration-control-register.galgas", 346)) ;
    }
    cEnumerator_controlRegisterNameListAST enumerator_14112 (enumerator_12832.current (HERE).readProperty_mRegisterArrayList (), EnumerationOrder::up) ;
    while (enumerator_14112.hasCurrentObject ()) {
      switch (enumerator_14112.current (HERE).readProperty_mControlRegisterKind ().enumValue ()) {
      case GALGAS_controlRegisterKind::kNotBuilt:
        break ;
      case GALGAS_controlRegisterKind::kEnum_scalar:
        {
        }
        break ;
      case GALGAS_controlRegisterKind::kEnum_registerArray:
        {
          const cEnumAssociatedValues_controlRegisterKind_registerArray * extractPtr_14446 = (const cEnumAssociatedValues_controlRegisterKind_registerArray *) (enumerator_14112.current (HERE).readProperty_mControlRegisterKind ().unsafePointer ()) ;
          const GALGAS_expressionAST extractedValue_14238_arraySize = extractPtr_14446->mAssociatedValue0 ;
          const GALGAS_expressionAST extractedValue_14265_arrayElementSize = extractPtr_14446->mAssociatedValue2 ;
          callExtensionMethod_addDependenceEdgeForStaticExpression ((cPtr_expressionAST *) extractedValue_14238_arraySize.ptr (), var_nodeName_12628, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 352)) ;
          callExtensionMethod_addDependenceEdgeForStaticExpression ((cPtr_expressionAST *) extractedValue_14265_arrayElementSize.ptr (), var_nodeName_12628, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 353)) ;
        }
        break ;
      }
      enumerator_14112.gotoNextObject () ;
    }
    enumerator_12832.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Routine 'controlRegisterType?&context!type!bitCount'
//
//--------------------------------------------------------------------------------------------------

void routine_controlRegisterType_3F__26_context_21_type_21_bitCount (const GALGAS_lstring constinArgument_inRegisterTypeName,
                                                                     GALGAS_semanticContext & ioArgument_ioContext,
                                                                     GALGAS_omnibusType & outArgument_outRegisterType,
                                                                     GALGAS_uint & outArgument_outRegisterBitCount,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outRegisterType.drop () ; // Release 'out' argument
  outArgument_outRegisterBitCount.drop () ; // Release 'out' argument
  extensionMethod_searchType (ioArgument_ioContext.readProperty_mTypeMap (), constinArgument_inRegisterTypeName, outArgument_outRegisterType, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 402)) ;
  switch (outArgument_outRegisterType.readProperty_kind ().enumValue ()) {
  case GALGAS_typeKind::kNotBuilt:
    break ;
  case GALGAS_typeKind::kEnum_integer:
    {
      const cEnumAssociatedValues_typeKind_integer * extractPtr_16510 = (const cEnumAssociatedValues_typeKind_integer *) (outArgument_outRegisterType.readProperty_kind ().unsafePointer ()) ;
      const GALGAS_uint extractedValue_16473_bitCount = extractPtr_16510->mAssociatedValue3 ;
      outArgument_outRegisterBitCount = extractedValue_16473_bitCount ;
    }
    break ;
  case GALGAS_typeKind::kEnum_boolean:
  case GALGAS_typeKind::kEnum_void:
    {
      TC_Array <FixItDescription> fixItArray0 ;
      inCompiler->emitSemanticError (constinArgument_inRegisterTypeName.readProperty_location (), GALGAS_string ("a register should be an $iXXor an $uXX"), fixItArray0  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 407)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_enumeration:
    {
      TC_Array <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inRegisterTypeName.readProperty_location (), GALGAS_string ("a register should be an $iXXor an $uXX"), fixItArray1  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 409)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_literalString:
    {
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (constinArgument_inRegisterTypeName.readProperty_location (), GALGAS_string ("a register should be an $iXXor an $uXX"), fixItArray2  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 411)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_compileTimeBool:
    {
      TC_Array <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (constinArgument_inRegisterTypeName.readProperty_location (), GALGAS_string ("a register should be an $iXXor an $uXX"), fixItArray3  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 413)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_compileTimeInteger:
    {
      TC_Array <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (constinArgument_inRegisterTypeName.readProperty_location (), GALGAS_string ("a register should be an $iXXor an $uXX"), fixItArray4  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 415)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_structure:
    {
      TC_Array <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (constinArgument_inRegisterTypeName.readProperty_location (), GALGAS_string ("a register should be an $iXXor an $uXX"), fixItArray5  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 417)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_syncTool:
    {
      TC_Array <FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (constinArgument_inRegisterTypeName.readProperty_location (), GALGAS_string ("a register should be an $iXXor an $uXX"), fixItArray6  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 419)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_opaque:
    {
      TC_Array <FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (constinArgument_inRegisterTypeName.readProperty_location (), GALGAS_string ("a register should be an $iXXor an $uXX"), fixItArray7  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 421)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_staticArrayType:
    {
      TC_Array <FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (constinArgument_inRegisterTypeName.readProperty_location (), GALGAS_string ("a register should be an $iXXor an $uXX"), fixItArray8  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 423)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_dynamicArrayType:
    {
      TC_Array <FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (constinArgument_inRegisterTypeName.readProperty_location (), GALGAS_string ("a register should be an $iXXor an $uXX"), fixItArray9  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 425)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_function:
    {
      TC_Array <FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (constinArgument_inRegisterTypeName.readProperty_location (), GALGAS_string ("a register should be an $iXXor an $uXX"), fixItArray10  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 427)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_generic:
    {
      TC_Array <FixItDescription> fixItArray11 ;
      inCompiler->emitSemanticError (constinArgument_inRegisterTypeName.readProperty_location (), GALGAS_string ("a register should be an $iXXor an $uXX"), fixItArray11  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 429)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_llvmType:
    {
      TC_Array <FixItDescription> fixItArray12 ;
      inCompiler->emitSemanticError (constinArgument_inRegisterTypeName.readProperty_location (), GALGAS_string ("a register should be an $iXXor an $uXX"), fixItArray12  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 431)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'buildControlRegisterSliceMap??&context&type?bitCount!!!'
//
//--------------------------------------------------------------------------------------------------

void routine_buildControlRegisterSliceMap_3F__3F__26_context_26_type_3F_bitCount_21__21__21_ (const GALGAS_controlRegisterBitSliceList constinArgument_inRegisterBitSliceList,
                                                                                              const GALGAS_location constinArgument_inEndOfBitSliceLocation,
                                                                                              GALGAS_semanticContext & /* ioArgument_ioContext */,
                                                                                              GALGAS_omnibusType & ioArgument_ioRegisterType,
                                                                                              const GALGAS_uint constinArgument_inRegisterBitCount,
                                                                                              GALGAS_controlRegisterFieldMap & outArgument_outRegisterFieldMap,
                                                                                              GALGAS_sliceMap & outArgument_outRegisterBitSliceMap,
                                                                                              GALGAS_controlRegisterFieldList & outArgument_outControlRegisterFieldList,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outRegisterFieldMap.drop () ; // Release 'out' argument
  outArgument_outRegisterBitSliceMap.drop () ; // Release 'out' argument
  outArgument_outControlRegisterFieldList.drop () ; // Release 'out' argument
  GALGAS_controlRegisterFieldMap temp_0 = GALGAS_controlRegisterFieldMap::init (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 448)) ;
  outArgument_outRegisterFieldMap = temp_0 ;
  GALGAS_sliceMap temp_1 = GALGAS_sliceMap::init (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 449)) ;
  outArgument_outRegisterBitSliceMap = temp_1 ;
  GALGAS_controlRegisterFieldList temp_2 = GALGAS_controlRegisterFieldList::init (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 450)) ;
  outArgument_outControlRegisterFieldList = temp_2 ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = GALGAS_bool (ComparisonKind::greaterThan, constinArgument_inRegisterBitSliceList.getter_count (SOURCE_FILE ("declaration-control-register.galgas", 451)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_3) {
      GALGAS_uint var_shiftCount_18794 = GALGAS_uint (uint32_t (0U)) ;
      cEnumerator_controlRegisterBitSliceList enumerator_18820 (constinArgument_inRegisterBitSliceList, EnumerationOrder::down) ;
      while (enumerator_18820.hasCurrentObject ()) {
        switch (enumerator_18820.current_mRegisterBitSlice (HERE).enumValue ()) {
        case GALGAS_controlRegisterBitSlice::kNotBuilt:
          break ;
        case GALGAS_controlRegisterBitSlice::kEnum_unusedBits:
          {
            const cEnumAssociatedValues_controlRegisterBitSlice_unusedBits * extractPtr_19056 = (const cEnumAssociatedValues_controlRegisterBitSlice_unusedBits *) (enumerator_18820.current_mRegisterBitSlice (HERE).unsafePointer ()) ;
            const GALGAS_lbigint extractedValue_18931_count = extractPtr_19056->mAssociatedValue0 ;
            var_shiftCount_18794 = var_shiftCount_18794.add_operation (extractedValue_18931_count.readProperty_bigint ().getter_uint (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 456)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 456)) ;
            outArgument_outControlRegisterFieldList.addAssign_operation (extractedValue_18931_count.readProperty_bigint ().getter_uint (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 457)), GALGAS_string ("—")  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 457)) ;
          }
          break ;
        case GALGAS_controlRegisterBitSlice::kEnum_namedBit:
          {
            const cEnumAssociatedValues_controlRegisterBitSlice_namedBit * extractPtr_19570 = (const cEnumAssociatedValues_controlRegisterBitSlice_namedBit *) (enumerator_18820.current_mRegisterBitSlice (HERE).unsafePointer ()) ;
            const GALGAS_lstring extractedValue_19090_name = extractPtr_19570->mAssociatedValue0 ;
            const GALGAS_lbigint extractedValue_19104_count = extractPtr_19570->mAssociatedValue1 ;
            GALGAS_uint var_bitCount_19125 = extractedValue_19104_count.readProperty_bigint ().getter_uint (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 459)) ;
            outArgument_outControlRegisterFieldList.addAssign_operation (var_bitCount_19125, extractedValue_19090_name.readProperty_string ()  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 460)) ;
            {
            outArgument_outRegisterFieldMap.setter_insertKey (extractedValue_19090_name, var_shiftCount_18794, var_bitCount_19125, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 461)) ;
            }
            GALGAS_bigint var_mask_19365 = GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 467)).left_shift_operation (var_bitCount_19125, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 467)).substract_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 467)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 467)).left_shift_operation (var_shiftCount_18794, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 467)) ;
            {
            outArgument_outRegisterBitSliceMap.setter_insertKey (extractedValue_19090_name, GALGAS_llvmBinaryOperation::class_func_and (SOURCE_FILE ("declaration-control-register.galgas", 470)), var_mask_19365, ioArgument_ioRegisterType, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 468)) ;
            }
            var_shiftCount_18794 = var_shiftCount_18794.add_operation (var_bitCount_19125, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 474)) ;
          }
          break ;
        }
        enumerator_18820.gotoNextObject () ;
      }
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        test_4 = GALGAS_bool (ComparisonKind::notEqual, constinArgument_inRegisterBitCount.objectCompare (var_shiftCount_18794)).boolEnum () ;
        if (kBoolTrue == test_4) {
          TC_Array <FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (constinArgument_inEndOfBitSliceLocation, GALGAS_string ("total bit slice count is ").add_operation (var_shiftCount_18794.getter_string (SOURCE_FILE ("declaration-control-register.galgas", 480)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 480)).add_operation (GALGAS_string (" (should be "), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 480)).add_operation (constinArgument_inRegisterBitCount.getter_string (SOURCE_FILE ("declaration-control-register.galgas", 480)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 480)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 480)), fixItArray5  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 479)) ;
        }
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@controlRegisterGroupDeclarationAST enterInContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_controlRegisterGroupDeclarationAST::method_enterInContext (GALGAS_semanticContext & ioArgument_ioContext,
                                                                     GALGAS_declarationDecorationList & ioArgument_ioDecoratedDeclarationList,
                                                                     GALGAS_decoratedRegularRoutineList & /* ioArgument_ioDecoratedRoutineList */,
                                                                     GALGAS_routineListIR & /* ioArgument_ioRoutineListIR */,
                                                                     GALGAS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                                     GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                     GALGAS_controlRegisterUserAccesMapAST & ioArgument_ioControlRegisterUserAccesMapAST,
                                                                     GALGAS_userLLVMTypeDefinitionListIR & /* ioArgument_ioUserLLVMTypeDefinitionListIR */,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_controlRegisterMap temp_0 = GALGAS_controlRegisterMap::init (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 596)) ;
  GALGAS_controlRegisterMap var_regMap_24386 = temp_0 ;
  const GALGAS_controlRegisterGroupDeclarationAST temp_1 = this ;
  cEnumerator_controlRegisterDeclarationList enumerator_24417 (temp_1.readProperty_mRegisters (), EnumerationOrder::up) ;
  while (enumerator_24417.hasCurrentObject ()) {
    extensionMethod_buildControlRegisterMapForGroup (enumerator_24417.current (HERE), ioArgument_ioContext, var_regMap_24386, ioArgument_ioStaticEntityMap, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 598)) ;
    enumerator_24417.gotoNextObject () ;
  }
  const GALGAS_controlRegisterGroupDeclarationAST temp_2 = this ;
  cEnumerator_registerGroupListAST enumerator_24587 (temp_2.readProperty_mRegisterGroupList (), EnumerationOrder::up) ;
  while (enumerator_24587.hasCurrentObject ()) {
    GALGAS_controlRegisterMap var_registerMap_24637 = var_regMap_24386 ;
    cEnumerator_controlRegisterMap enumerator_24714 (var_regMap_24386, EnumerationOrder::up) ;
    while (enumerator_24714.hasCurrentObject ()) {
      GALGAS_string var_key_24734 = GALGAS_string ("#").add_operation (enumerator_24587.current (HERE).readProperty_mRegisterGroupName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 608)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 608)).add_operation (enumerator_24714.current (HERE).readProperty_lkey ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 608)) ;
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = ioArgument_ioControlRegisterUserAccesMapAST.getter_hasKey (var_key_24734 COMMA_SOURCE_FILE ("declaration-control-register.galgas", 609)).boolEnum () ;
        if (kBoolTrue == test_3) {
          {
          var_registerMap_24637.setter_setMUserAccessForKey (GALGAS_bool (true), enumerator_24714.current (HERE).readProperty_lkey ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 610)) ;
          }
          {
          ioArgument_ioControlRegisterUserAccesMapAST.setter_removeKey (var_key_24734.getter_nowhere (SOURCE_FILE ("declaration-control-register.galgas", 611)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 611)) ;
          }
        }
      }
      enumerator_24714.gotoNextObject () ;
    }
    switch (enumerator_24587.current (HERE).readProperty_mControlRegisterGroupKind ().enumValue ()) {
    case GALGAS_controlRegisterGroupKindAST::kNotBuilt:
      break ;
    case GALGAS_controlRegisterGroupKindAST::kEnum_single:
      {
        const cEnumAssociatedValues_controlRegisterGroupKindAST_single * extractPtr_25270 = (const cEnumAssociatedValues_controlRegisterGroupKindAST_single *) (enumerator_24587.current (HERE).readProperty_mControlRegisterGroupKind ().unsafePointer ()) ;
        const GALGAS_lbigint extractedValue_25077_baseAddress = extractPtr_25270->mAssociatedValue0 ;
        GALGAS_registerGroupKind var_groupKind_25102 = GALGAS_registerGroupKind::class_func_single (extractedValue_25077_baseAddress.readProperty_bigint ()  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 617)) ;
        {
        ioArgument_ioContext.mProperty_mControlRegisterGroupMap.setter_insertKey (enumerator_24587.current (HERE).readProperty_mRegisterGroupName (), var_groupKind_25102, var_registerMap_24637, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 618)) ;
        }
      }
      break ;
    case GALGAS_controlRegisterGroupKindAST::kEnum_groupArray:
      {
        const cEnumAssociatedValues_controlRegisterGroupKindAST_groupArray * extractPtr_26567 = (const cEnumAssociatedValues_controlRegisterGroupKindAST_groupArray *) (enumerator_24587.current (HERE).readProperty_mControlRegisterGroupKind ().unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_25293_groupSizeExpression = extractPtr_26567->mAssociatedValue0 ;
        const GALGAS_location extractedValue_25313_groupSizeExpressionLocation = extractPtr_26567->mAssociatedValue1 ;
        const GALGAS_lbigintlist extractedValue_25341_baseAddresses = extractPtr_26567->mAssociatedValue2 ;
        GALGAS_objectIR var_groupArraySizeExpressionResult_25633 ;
        {
        routine_computeStaticExpression_26_context_26_staticEntityMap_3F_expression_3F_errorLocation_3F_optionalContextualTypeName_21_result (ioArgument_ioContext, ioArgument_ioStaticEntityMap, extractedValue_25293_groupSizeExpression, extractedValue_25313_groupSizeExpressionLocation, GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-control-register.galgas", 625)), var_groupArraySizeExpressionResult_25633, inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 620)) ;
        }
        GALGAS_bigint var_groupSize_25690 ;
        enumGalgasBool test_4 = kBoolTrue ;
        if (kBoolTrue == test_4) {
          test_4 = var_groupArraySizeExpressionResult_25633.getter_isLiteralInteger (SOURCE_FILE ("declaration-control-register.galgas", 629)).operator_not (SOURCE_FILE ("declaration-control-register.galgas", 629)).boolEnum () ;
          if (kBoolTrue == test_4) {
            TC_Array <FixItDescription> fixItArray5 ;
            inCompiler->emitSemanticError (extractedValue_25313_groupSizeExpressionLocation, GALGAS_string ("control register group size is not a static integer expression"), fixItArray5  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 630)) ;
            var_groupSize_25690.drop () ; // Release error dropped variable
          }
        }
        if (kBoolFalse == test_4) {
          GALGAS_omnibusType joker_25975_1 ; // Joker input parameter
          var_groupArraySizeExpressionResult_25633.method_literalInteger (joker_25975_1, var_groupSize_25690, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 634)) ;
        }
        enumGalgasBool test_6 = kBoolTrue ;
        if (kBoolTrue == test_6) {
          test_6 = GALGAS_bool (ComparisonKind::notEqual, var_groupSize_25690.getter_uint (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 636)).objectCompare (extractedValue_25341_baseAddresses.getter_count (SOURCE_FILE ("declaration-control-register.galgas", 636)))).boolEnum () ;
          if (kBoolTrue == test_6) {
            TC_Array <FixItDescription> fixItArray7 ;
            inCompiler->emitSemanticError (extractedValue_25313_groupSizeExpressionLocation, GALGAS_string ("the group size is ").add_operation (var_groupSize_25690.getter_string (SOURCE_FILE ("declaration-control-register.galgas", 638)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 638)).add_operation (GALGAS_string (", but "), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 638)).add_operation (extractedValue_25341_baseAddresses.getter_count (SOURCE_FILE ("declaration-control-register.galgas", 638)).getter_string (SOURCE_FILE ("declaration-control-register.galgas", 638)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 638)).add_operation (GALGAS_string (" base addresses are defined"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 638)), fixItArray7  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 637)) ;
          }
        }
        GALGAS_registerGroupKind var_groupKind_26235 = GALGAS_registerGroupKind::class_func_arrayGroup (extractedValue_25341_baseAddresses  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 640)) ;
        {
        ioArgument_ioContext.mProperty_mControlRegisterGroupMap.setter_insertKey (enumerator_24587.current (HERE).readProperty_mRegisterGroupName (), var_groupKind_26235, var_registerMap_24637, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 641)) ;
        }
        ioArgument_ioDecoratedDeclarationList.addAssign_operation (GALGAS_decoratedControlRegisterArrayGroupDeclaration::init_21__21_ (enumerator_24587.current (HERE).readProperty_mRegisterGroupName (), extractedValue_25341_baseAddresses, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 642)) ;
      }
      break ;
    }
    enumerator_24587.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@decoratedControlRegisterArrayGroupDeclaration semanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_decoratedControlRegisterArrayGroupDeclaration::method_semanticAnalysis (const GALGAS_semanticContext /* constinArgument_inContext */,
                                                                                  GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                                  GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                                                                  Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_decoratedControlRegisterArrayGroupDeclaration temp_0 = this ;
  const GALGAS_decoratedControlRegisterArrayGroupDeclaration temp_1 = this ;
  ioArgument_ioIntermediateCodeStruct.mProperty_mControlRegisterGroupArrayList.addAssign_operation (temp_0.readProperty_mGroupName (), temp_1.readProperty_mBaseAddresses ()  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 666)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Routine 'buildControlRegisterMapHTMLFile??sourceFile'
//
//--------------------------------------------------------------------------------------------------

void routine_buildControlRegisterMapHTMLFile_3F__3F_sourceFile (const GALGAS_controlRegisterGroupMap constinArgument_inControlRegisterGroupMap,
                                                                const GALGAS_lstring constinArgument_inSourceFile,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_byAddressFilePath_29917 = constinArgument_inSourceFile.readProperty_string ().add_operation (GALGAS_string (".control-registers-sorted-by-address.html"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 727)) ;
  GALGAS_string var_byNameFilePath_30009 = constinArgument_inSourceFile.readProperty_string ().add_operation (GALGAS_string (".control-registers-sorted-by-name.html"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 728)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (gOption_omnibus_5F_options_emitControlRegisterHTMLDumpFile.readProperty_value ()).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_controlRegisterByAddress temp_1 = GALGAS_controlRegisterByAddress::init (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 730)) ;
      GALGAS_controlRegisterByAddress var_controlRegisterByAddress_30196 = temp_1 ;
      GALGAS_controlRegisterByName temp_2 = GALGAS_controlRegisterByName::init (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 731)) ;
      GALGAS_controlRegisterByName var_controlRegisterByName_30258 = temp_2 ;
      GALGAS_uint var_controlRegisterCount_30300 = GALGAS_uint (uint32_t (0U)) ;
      cEnumerator_controlRegisterGroupMap enumerator_30362 (constinArgument_inControlRegisterGroupMap, EnumerationOrder::up) ;
      while (enumerator_30362.hasCurrentObject ()) {
        switch (enumerator_30362.current_mGroupKind (HERE).enumValue ()) {
        case GALGAS_registerGroupKind::kNotBuilt:
          break ;
        case GALGAS_registerGroupKind::kEnum_single:
          {
            const cEnumAssociatedValues_registerGroupKind_single * extractPtr_30731 = (const cEnumAssociatedValues_registerGroupKind_single *) (enumerator_30362.current_mGroupKind (HERE).unsafePointer ()) ;
            const GALGAS_bigint extractedValue_30470_groupBaseAddress = extractPtr_30731->mAssociatedValue0 ;
            {
            routine_buildControlRegisterMaps_3F__3F__3F__26__26__26_ (enumerator_30362.current_mControlRegisterMap (HERE), extractedValue_30470_groupBaseAddress, enumerator_30362.current_lkey (HERE).readProperty_string (), var_controlRegisterByAddress_30196, var_controlRegisterByName_30258, var_controlRegisterCount_30300, inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 736)) ;
            }
          }
          break ;
        case GALGAS_registerGroupKind::kEnum_arrayGroup:
          {
            const cEnumAssociatedValues_registerGroupKind_arrayGroup * extractPtr_31119 = (const cEnumAssociatedValues_registerGroupKind_arrayGroup *) (enumerator_30362.current_mGroupKind (HERE).unsafePointer ()) ;
            const GALGAS_lbigintlist extractedValue_30769_baseAddresses = extractPtr_31119->mAssociatedValue0 ;
            cEnumerator_lbigintlist enumerator_30799 (extractedValue_30769_baseAddresses, EnumerationOrder::up) ;
            GALGAS_uint index_30794 (uint32_t (0)) ;
            while (enumerator_30799.hasCurrentObject ()) {
              {
              routine_buildControlRegisterMaps_3F__3F__3F__26__26__26_ (enumerator_30362.current_mControlRegisterMap (HERE), enumerator_30799.current_mValue (HERE).readProperty_bigint (), enumerator_30362.current_lkey (HERE).readProperty_string ().add_operation (GALGAS_string ("["), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 749)).add_operation (index_30794.getter_string (SOURCE_FILE ("declaration-control-register.galgas", 749)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 749)).add_operation (GALGAS_string ("]"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 749)), var_controlRegisterByAddress_30196, var_controlRegisterByName_30258, var_controlRegisterCount_30300, inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 746)) ;
              }
              enumerator_30799.gotoNextObject () ;
              index_30794.increment_operation (inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 745)) ;
            }
          }
          break ;
        }
        enumerator_30362.gotoNextObject () ;
      }
      GALGAS_string var_typeDumpString_31149 = GALGAS_string (filewrapperTemplate_controlRegisterDumpGenerationTemplate_dumpByAddress (inCompiler, constinArgument_inSourceFile.readProperty_string ().getter_lastPathComponent (SOURCE_FILE ("declaration-control-register.galgas", 758)), var_controlRegisterCount_30300, var_controlRegisterByAddress_30196 COMMA_SOURCE_FILE ("declaration-control-register.galgas", 757))) ;
      GALGAS_bool joker_31409 ; // Joker input parameter
      var_typeDumpString_31149.method_writeToFileWhenDifferentContents (var_byAddressFilePath_29917, joker_31409, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 762)) ;
      var_typeDumpString_31149 = GALGAS_string (filewrapperTemplate_controlRegisterDumpGenerationTemplate_dumpByName (inCompiler, constinArgument_inSourceFile.readProperty_string ().getter_lastPathComponent (SOURCE_FILE ("declaration-control-register.galgas", 764)), var_controlRegisterCount_30300, var_controlRegisterByName_30258 COMMA_SOURCE_FILE ("declaration-control-register.galgas", 763))) ;
      GALGAS_bool joker_31668 ; // Joker input parameter
      var_typeDumpString_31149.method_writeToFileWhenDifferentContents (var_byNameFilePath_30009, joker_31668, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 768)) ;
    }
  }
  if (kBoolFalse == test_0) {
    {
    GALGAS_string::class_method_deleteFileIfExists (var_byAddressFilePath_29917, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 770)) ;
    }
    {
    GALGAS_string::class_method_deleteFileIfExists (var_byNameFilePath_30009, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 771)) ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'buildControlRegisterMaps???&&&'
//
//--------------------------------------------------------------------------------------------------

void routine_buildControlRegisterMaps_3F__3F__3F__26__26__26_ (const GALGAS_controlRegisterMap constinArgument_inControlRegisterMap,
                                                               const GALGAS_bigint constinArgument_inGroupBaseAddress,
                                                               const GALGAS_string constinArgument_inGroupName,
                                                               GALGAS_controlRegisterByAddress & ioArgument_ioControlRegisterByAddress,
                                                               GALGAS_controlRegisterByName & ioArgument_ioControlRegisterByName,
                                                               GALGAS_uint & ioArgument_ioControlRegisterCount,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_controlRegisterMap enumerator_32321 (constinArgument_inControlRegisterMap, EnumerationOrder::up) ;
  while (enumerator_32321.hasCurrentObject ()) {
    GALGAS_bigint var_registerAddress_32379 = constinArgument_inGroupBaseAddress.add_operation (enumerator_32321.current_mAddressOffset (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 786)) ;
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GALGAS_bool (ComparisonKind::equal, enumerator_32321.current_mArraySize (HERE).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        ioArgument_ioControlRegisterCount = ioArgument_ioControlRegisterCount.add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 788)) ;
        GALGAS_string var_registerName_32537 = constinArgument_inGroupName.add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 789)).add_operation (enumerator_32321.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 789)) ;
        GALGAS_string var_s_32591 = GALGAS_string ("<tr class=\"result_line\"><td class=\"name\">").add_operation (var_registerName_32537, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 790)).add_operation (GALGAS_string ("</td><td class=\"type\">"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 791)).add_operation (enumerator_32321.current_mType (HERE).readProperty_omnibusTypeDescriptionName (), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 792)).add_operation (GALGAS_string ("</td><td class=\"address\">"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 792)).add_operation (var_registerAddress_32379.getter_hexStringSeparatedBy (GALGAS_char (TO_UNICODE (95)), GALGAS_uint (uint32_t (4U)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 793)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 792)).add_operation (GALGAS_string ("</td><td>"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 793)) ;
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          test_1 = GALGAS_bool (ComparisonKind::greaterThan, enumerator_32321.current_mControlRegisterFieldList (HERE).getter_count (SOURCE_FILE ("declaration-control-register.galgas", 794)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
          if (kBoolTrue == test_1) {
            var_s_32591.plusAssign_operation(GALGAS_string ("<table class=\"fields\">").add_operation (GALGAS_string ("<tr>"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 795)).add_operation (function_fieldIndexColumns (enumerator_32321.current_mRegisterBitCount (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 796)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 796)).add_operation (GALGAS_string ("</tr>"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 796)).add_operation (GALGAS_string ("<tr>"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 796)), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 795)) ;
            cEnumerator_controlRegisterFieldList enumerator_33065 (enumerator_32321.current_mControlRegisterFieldList (HERE), EnumerationOrder::down) ;
            while (enumerator_33065.hasCurrentObject ()) {
              var_s_32591.plusAssign_operation(GALGAS_string ("<td class=\"fields\" colspan=\"").add_operation (enumerator_33065.current_mFieldBitCount (HERE).getter_string (SOURCE_FILE ("declaration-control-register.galgas", 799)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 799)).add_operation (GALGAS_string ("\">"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 799)).add_operation (enumerator_33065.current_mFieldName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 799)).add_operation (GALGAS_string ("</td>"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 799)), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 799)) ;
              enumerator_33065.gotoNextObject () ;
            }
            var_s_32591.plusAssign_operation(GALGAS_string ("</tr></table>"), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 801)) ;
          }
        }
        var_s_32591.plusAssign_operation(GALGAS_string ("</td></tr>\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 803)) ;
        ioArgument_ioControlRegisterByAddress.addAssign_operation (var_registerAddress_32379, var_s_32591  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 804)) ;
        ioArgument_ioControlRegisterByName.addAssign_operation (var_registerAddress_32379, var_s_32591, var_registerName_32537  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 805)) ;
      }
    }
    if (kBoolFalse == test_0) {
      ioArgument_ioControlRegisterCount = ioArgument_ioControlRegisterCount.add_operation (enumerator_32321.current_mArraySize (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 807)) ;
      cEnumerator_uintlist enumerator_33512 (function_arrayIndexListFor (enumerator_32321.current_mArraySize (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 808)), EnumerationOrder::up) ;
      while (enumerator_33512.hasCurrentObject ()) {
        GALGAS_bigint var_address_33579 = var_registerAddress_32379.add_operation (enumerator_33512.current_mValue (HERE).multiply_operation (enumerator_32321.current_mElementArraySize (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 809)).getter_bigint (SOURCE_FILE ("declaration-control-register.galgas", 809)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 809)) ;
        GALGAS_string var_registerName_33650 = constinArgument_inGroupName.add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 810)).add_operation (enumerator_32321.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 810)).add_operation (GALGAS_string ("["), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 810)).add_operation (enumerator_33512.current_mValue (HERE).getter_string (SOURCE_FILE ("declaration-control-register.galgas", 810)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 810)).add_operation (GALGAS_string ("]"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 810)) ;
        GALGAS_string var_s_33736 = GALGAS_string ("<tr class=\"result_line\"><td class=\"name\">").add_operation (var_registerName_33650, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 811)).add_operation (GALGAS_string ("</td><td class=\"type\">"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 812)).add_operation (enumerator_32321.current_mType (HERE).readProperty_omnibusTypeDescriptionName (), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 813)).add_operation (GALGAS_string ("</td><td class=\"address\">"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 813)).add_operation (var_address_33579.getter_hexStringSeparatedBy (GALGAS_char (TO_UNICODE (95)), GALGAS_uint (uint32_t (4U)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 814)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 813)).add_operation (GALGAS_string ("</td><td>"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 814)) ;
        enumGalgasBool test_2 = kBoolTrue ;
        if (kBoolTrue == test_2) {
          test_2 = GALGAS_bool (ComparisonKind::greaterThan, enumerator_32321.current_mControlRegisterFieldList (HERE).getter_count (SOURCE_FILE ("declaration-control-register.galgas", 816)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
          if (kBoolTrue == test_2) {
            var_s_33736.plusAssign_operation(GALGAS_string ("<table class=\"fields\">").add_operation (GALGAS_string ("<tr>"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 817)).add_operation (function_fieldIndexColumns (enumerator_32321.current_mRegisterBitCount (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 818)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 818)).add_operation (GALGAS_string ("</tr><tr>"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 818)), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 817)) ;
            cEnumerator_controlRegisterFieldList enumerator_34209 (enumerator_32321.current_mControlRegisterFieldList (HERE), EnumerationOrder::down) ;
            while (enumerator_34209.hasCurrentObject ()) {
              var_s_33736.plusAssign_operation(GALGAS_string ("<td class=\"fields\" colspan=\"").add_operation (enumerator_34209.current_mFieldBitCount (HERE).getter_string (SOURCE_FILE ("declaration-control-register.galgas", 820)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 820)).add_operation (GALGAS_string ("\">"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 820)).add_operation (enumerator_34209.current_mFieldName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 820)).add_operation (GALGAS_string ("</td>"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 820)), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 820)) ;
              enumerator_34209.gotoNextObject () ;
            }
            var_s_33736.plusAssign_operation(GALGAS_string ("</tr></table>"), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 822)) ;
          }
        }
        var_s_33736.plusAssign_operation(GALGAS_string ("</td></tr>\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 824)) ;
        ioArgument_ioControlRegisterByAddress.addAssign_operation (var_registerAddress_32379, var_s_33736  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 825)) ;
        ioArgument_ioControlRegisterByName.addAssign_operation (var_registerAddress_32379, var_s_33736, var_registerName_33650  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 826)) ;
        enumerator_33512.gotoNextObject () ;
      }
    }
    enumerator_32321.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'controlRegisterDumpGenerationTemplate'
//
//--------------------------------------------------------------------------------------------------

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_controlRegisterDumpGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_controlRegisterDumpGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_controlRegisterDumpGenerationTemplate (
  "",
  0,
  gWrapperAllFiles_controlRegisterDumpGenerationTemplate_0,
  0,
  gWrapperAllDirectories_controlRegisterDumpGenerationTemplate_0
) ;


//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'controlRegisterDumpGenerationTemplate dumpByName'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_controlRegisterDumpGenerationTemplate_dumpByName (Compiler * /* inCompiler */,
                                                                                    const GALGAS_string & in_PROJECT_5F_NAME,
                                                                                    const GALGAS_uint & in_CONTROL_5F_REGISTER_5F_COUNT,
                                                                                    const GALGAS_controlRegisterByName & in_CONTROL_5F_REGISTER_5F_SORTED_5F_BY_5F_NAME
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.01//EN\" \"http://www.w3.org/TR/html4/strict.dtd\">\n<html>\n<head>\n<meta http-equiv=\"Content-Type\" content=\"text/html; charset=utf-8\">\n<title>Control Registers of ") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString (", sorted by name</title>\n<style type=\"text/css\">body {\n  font-size: small ;\n}\n\nh1 {\n  text-align: center ;\n}\n\n.selecteur {\n  color:green ;\n}\n\na.header_link {\n  background-color: #FFFFCC ;\n}\n\na:visited, a:link, a:active{\n  color: blue ;\n  text-decoration: underline ;\n}\n\na:hover {\n  color:green ;\n  background-color: #FFFF00 ;\n  text-decoration: none ;\n}\n\ntable.result {\n  border: 1px solid #666666 ;\n}\n\ntable.fields {\n  border-collapse: collapse ;\n  border-spacing: 1px 1px;\n}\n\ntd.fields {\n  border: 1px solid #333333 ;\n  text-align: center ;\n  padding : 4px ;\n}\n\ntd.result_title {\n  font-weight: bold ;\n  text-align: center ;\n  background-color: yellow ;\n}\n\ntd.address {\n  font-family: Courier ;\n  padding : 4px ;\n}\n\ntd.name {\n  font-family: Courier ;\n  padding : 4px ;\n}\n\ntd.type {\n  font-family: Courier ;\n  padding : 4px ;\n}\n\ntr.result_line {\n  background-color: #EEEEEE ;\n}\n\n</style>\n</head>\n<body>\n<div>\n<h1>Control Registers of ") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString (", sorted by name</h1>\n<p>This document lists all ") ;
  result.appendString (in_CONTROL_5F_REGISTER_5F_COUNT.getter_string (SOURCE_FILE ("controlRegisterByNameDump.html.galgasTemplate", 78)).stringValue ()) ;
  result.appendString (" defined control registers, sorted by name.</p>\n<table class=\"result\">\n<tr><td class=\"result_title\">Control Register Name</td><td class=\"result_title\">OMNIBUS Type</td><td class=\"result_title\">Address</td><td class=\"result_title\">Value</td></tr>\n") ;
  GALGAS_uint index_1560_ (0) ;
  if (in_CONTROL_5F_REGISTER_5F_SORTED_5F_BY_5F_NAME.isValid ()) {
    cEnumerator_controlRegisterByName enumerator_1560 (in_CONTROL_5F_REGISTER_5F_SORTED_5F_BY_5F_NAME, EnumerationOrder::up) ;
    while (enumerator_1560.hasCurrentObject ()) {
      result.appendString (enumerator_1560.current_mHTML (HERE).stringValue ()) ;
      index_1560_.increment () ;
      enumerator_1560.gotoNextObject () ;
    }
  }
  result.appendString ("\n</table>\n</div>\n</body>\n</html>\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'controlRegisterDumpGenerationTemplate dumpByAddress'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_controlRegisterDumpGenerationTemplate_dumpByAddress (Compiler * /* inCompiler */,
                                                                                       const GALGAS_string & in_PROJECT_5F_NAME,
                                                                                       const GALGAS_uint & in_CONTROL_5F_REGISTER_5F_COUNT,
                                                                                       const GALGAS_controlRegisterByAddress & in_CONTROL_5F_REGISTER_5F_SORTED_5F_BY_5F_ADDRESS
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.01//EN\" \"http://www.w3.org/TR/html4/strict.dtd\">\n<html>\n<head>\n<meta http-equiv=\"Content-Type\" content=\"text/html; charset=utf-8\">\n<title>Control Registers of ") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString (", sorted by address</title>\n<style type=\"text/css\">body {\n  font-size: small ;\n}\n\nh1 {\n  text-align: center ;\n}\n\n.selecteur {\n  color:green ;\n}\n\na.header_link {\n  background-color: #FFFFCC ;\n}\n\na:visited, a:link, a:active{\n  color: blue ;\n  text-decoration: underline ;\n}\n\na:hover {\n  color:green ;\n  background-color: #FFFF00 ;\n  text-decoration: none ;\n}\n\ntable.result {\n  border: 1px solid #666666 ;\n}\n\ntable.fields {\n  border-collapse: collapse ;\n  border-spacing: 1px 1px;\n}\n\ntd.fields {\n  border: 1px solid #333333 ;\n  text-align: center ;\n  padding : 4px ;\n}\n\ntd.result_title {\n  font-weight: bold ;\n  text-align: center ;\n  background-color: yellow ;\n}\n\ntd.address {\n  font-family: Courier ;\n  padding : 4px ;\n}\n\ntd.name {\n  font-family: Courier ;\n  padding : 4px ;\n}\n\ntd.type {\n  font-family: Courier ;\n  padding : 4px ;\n}\n\ntr.result_line {\n  background-color: #EEEEEE ;\n}\n\n</style>\n</head>\n<body>\n<div>\n<h1>Control Registers of ") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString (", sorted by address</h1>\n<p>This document lists all ") ;
  result.appendString (in_CONTROL_5F_REGISTER_5F_COUNT.getter_string (SOURCE_FILE ("controlRegisterByAddressDump.html.galgasTemplate", 78)).stringValue ()) ;
  result.appendString (" defined control registers, sorted by address.</p>\n<table class=\"result\">\n<tr><td class=\"result_title\">Control Register Name</td><td class=\"result_title\">OMNIBUS Type</td><td class=\"result_title\">Address</td><td class=\"result_title\">Value</td></tr>\n") ;
  GALGAS_uint index_1566_ (0) ;
  if (in_CONTROL_5F_REGISTER_5F_SORTED_5F_BY_5F_ADDRESS.isValid ()) {
    cEnumerator_controlRegisterByAddress enumerator_1566 (in_CONTROL_5F_REGISTER_5F_SORTED_5F_BY_5F_ADDRESS, EnumerationOrder::up) ;
    while (enumerator_1566.hasCurrentObject ()) {
      result.appendString (enumerator_1566.current_mHTML (HERE).stringValue ()) ;
      index_1566_.increment () ;
      enumerator_1566.gotoNextObject () ;
    }
  }
  result.appendString ("\n</table>\n</div>\n</body>\n</html>\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Function 'fieldIndexColumns'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string function_fieldIndexColumns (const GALGAS_uint & constinArgument_inBitCount,
                                          Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string::makeEmptyString () ;
  cEnumerator_range enumerator_35426 (GALGAS_range (GALGAS_uint (uint32_t (0U)), constinArgument_inBitCount.substract_operation (GALGAS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 852))), EnumerationOrder::down) ;
  while (enumerator_35426.hasCurrentObject ()) {
    result_result.plusAssign_operation(GALGAS_string ("<td class=\"fields\">").add_operation (enumerator_35426.current (HERE).getter_string (SOURCE_FILE ("declaration-control-register.galgas", 853)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 853)).add_operation (GALGAS_string ("</td>"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 853)), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 853)) ;
    enumerator_35426.gotoNextObject () ;
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_fieldIndexColumns [2] = {
  & kTypeDescriptor_GALGAS_uint,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_fieldIndexColumns (Compiler * inCompiler,
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

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_fieldIndexColumns ("fieldIndexColumns",
                                                                   functionWithGenericHeader_fieldIndexColumns,
                                                                   & kTypeDescriptor_GALGAS_string,
                                                                   1,
                                                                   functionArgs_fieldIndexColumns) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'arrayIndexListFor'
//
//--------------------------------------------------------------------------------------------------

GALGAS_uintlist function_arrayIndexListFor (const GALGAS_uint & constinArgument_inSize,
                                            Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uintlist result_result ; // Returned variable
  GALGAS_uintlist temp_0 = GALGAS_uintlist::init (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 860)) ;
  result_result = temp_0 ;
  cEnumerator_range enumerator_35716 (GALGAS_range (GALGAS_uint (uint32_t (0U)), constinArgument_inSize.substract_operation (GALGAS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 861))), EnumerationOrder::up) ;
  while (enumerator_35716.hasCurrentObject ()) {
    result_result.addAssign_operation (enumerator_35716.current (HERE)  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 862)) ;
    enumerator_35716.gotoNextObject () ;
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_arrayIndexListFor [2] = {
  & kTypeDescriptor_GALGAS_uint,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_arrayIndexListFor (Compiler * inCompiler,
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

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_arrayIndexListFor ("arrayIndexListFor",
                                                                   functionWithGenericHeader_arrayIndexListFor,
                                                                   & kTypeDescriptor_GALGAS_uintlist,
                                                                   1,
                                                                   functionArgs_arrayIndexListFor) ;

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@globalConstantDeclarationAST locationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GALGAS_location cPtr_globalConstantDeclarationAST::getter_locationForErrorSignaling (Compiler */* inCompiler */
                                                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_location result_outLocation ; // Returned variable
  const GALGAS_globalConstantDeclarationAST temp_0 = this ;
  result_outLocation = temp_0.readProperty_mConstantName ().readProperty_location () ;
//---
  return result_outLocation ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@globalConstantDeclarationAST enterInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_globalConstantDeclarationAST::method_enterInPrecedenceGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GALGAS_globalConstantDeclarationAST temp_0 = this ;
  const GALGAS_globalConstantDeclarationAST temp_1 = this ;
  ioArgument_ioGraph.setter_addNode (temp_0.readProperty_mConstantName (), temp_1, inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 67)) ;
  }
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    const GALGAS_globalConstantDeclarationAST temp_3 = this ;
    test_2 = GALGAS_bool (ComparisonKind::notEqual, temp_3.readProperty_mConstantTypeName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_2) {
      {
      const GALGAS_globalConstantDeclarationAST temp_4 = this ;
      const GALGAS_globalConstantDeclarationAST temp_5 = this ;
      ioArgument_ioGraph.setter_addEdge (temp_4.readProperty_mConstantName (), temp_5.readProperty_mConstantTypeName () COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 70)) ;
      }
    }
  }
  const GALGAS_globalConstantDeclarationAST temp_6 = this ;
  const GALGAS_globalConstantDeclarationAST temp_7 = this ;
  callExtensionMethod_addDependenceEdgeForStaticExpression ((cPtr_expressionAST *) temp_6.readProperty_mSourceExpression ().ptr (), temp_7.readProperty_mConstantName (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 73)) ;
  {
  const GALGAS_globalConstantDeclarationAST temp_8 = this ;
  ioArgument_ioGraph.setter_addEdge (temp_8.readProperty_mConstantName (), function_compileTimeDeclarationBarrier (inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 74)) COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 74)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@globalConstantDeclarationAST keyRepresentationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_globalConstantDeclarationAST::getter_keyRepresentationForErrorSignaling (Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outRepresentation ; // Returned variable
  const GALGAS_globalConstantDeclarationAST temp_0 = this ;
  result_outRepresentation = GALGAS_string ("global constant ").add_operation (temp_0.readProperty_mConstantName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 80)) ;
//---
  return result_outRepresentation ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@globalConstantDeclarationAST enterInContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_globalConstantDeclarationAST::method_enterInContext (GALGAS_semanticContext & ioArgument_ioContext,
                                                               GALGAS_declarationDecorationList & /* ioArgument_ioDecoratedDeclarationList */,
                                                               GALGAS_decoratedRegularRoutineList & /* ioArgument_ioDecoratedRoutineList */,
                                                               GALGAS_routineListIR & /* ioArgument_ioRoutineListIR */,
                                                               GALGAS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                               GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                               GALGAS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                               GALGAS_userLLVMTypeDefinitionListIR & /* ioArgument_ioUserLLVMTypeDefinitionListIR */,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool var_displayValue_4570 = GALGAS_bool (false) ;
  const GALGAS_globalConstantDeclarationAST temp_0 = this ;
  cEnumerator_lstringlist enumerator_4598 (temp_0.readProperty_mAttributeList (), EnumerationOrder::up) ;
  while (enumerator_4598.hasCurrentObject ()) {
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = GALGAS_bool (ComparisonKind::notEqual, enumerator_4598.current_mValue (HERE).readProperty_string ().objectCompare (GALGAS_string ("display"))).boolEnum () ;
      if (kBoolTrue == test_1) {
        TC_Array <FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (enumerator_4598.current_mValue (HERE).readProperty_location (), GALGAS_string ("attribute should be @display"), fixItArray2  COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 100)) ;
      }
    }
    if (kBoolFalse == test_1) {
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = var_displayValue_4570.boolEnum () ;
        if (kBoolTrue == test_3) {
          TC_Array <FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (enumerator_4598.current_mValue (HERE).readProperty_location (), GALGAS_string ("duplicated attribute"), fixItArray4  COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 102)) ;
        }
      }
      if (kBoolFalse == test_3) {
        var_displayValue_4570 = GALGAS_bool (true) ;
      }
    }
    enumerator_4598.gotoNextObject () ;
  }
  GALGAS_objectIR var_expressionResult_5147 ;
  {
  const GALGAS_globalConstantDeclarationAST temp_5 = this ;
  const GALGAS_globalConstantDeclarationAST temp_6 = this ;
  const GALGAS_globalConstantDeclarationAST temp_7 = this ;
  routine_computeStaticExpression_26_context_26_staticEntityMap_3F_expression_3F_errorLocation_3F_optionalContextualTypeName_21_result (ioArgument_ioContext, ioArgument_ioStaticEntityMap, temp_5.readProperty_mSourceExpression (), temp_6.readProperty_mConstantName ().readProperty_location (), temp_7.readProperty_mConstantTypeName (), var_expressionResult_5147, inCompiler  COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 108)) ;
  }
  {
  const GALGAS_globalConstantDeclarationAST temp_8 = this ;
  ioArgument_ioContext.mProperty_mGlobalConstantMap.setter_insertKey (temp_8.readProperty_mConstantName (), var_expressionResult_5147, inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 117)) ;
  }
  {
  const GALGAS_globalConstantDeclarationAST temp_9 = this ;
  extensionSetter_insertGlobalConstant (ioArgument_ioContext.mProperty_mValuedObjectMap, temp_9.readProperty_mConstantName (), var_expressionResult_5147, inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 118)) ;
  }
  enumGalgasBool test_10 = kBoolTrue ;
  if (kBoolTrue == test_10) {
    test_10 = var_displayValue_4570.boolEnum () ;
    if (kBoolTrue == test_10) {
      {
      const GALGAS_globalConstantDeclarationAST temp_11 = this ;
      routine_print_3F_ (GALGAS_string ("Global constant '").add_operation (temp_11.readProperty_mConstantName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 121)).add_operation (GALGAS_string ("' = "), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 121)).add_operation (extensionGetter_llvmValue (var_expressionResult_5147, inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 121)), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 121)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 121)), inCompiler  COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 121)) ;
      }
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Routine 'buildGlobalConstantMapHTMLFile??sourceFile'
//
//--------------------------------------------------------------------------------------------------

void routine_buildGlobalConstantMapHTMLFile_3F__3F_sourceFile (GALGAS_globalConstantMap inArgument_inGlobalConstantMap,
                                                               const GALGAS_lstring constinArgument_inSourceFile,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_typeDumpFilePath_6119 = constinArgument_inSourceFile.readProperty_string ().add_operation (GALGAS_string (".global-constants.html"), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 134)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (gOption_omnibus_5F_options_emitGlobalConstantHTMLDumpFile.readProperty_value ()).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_stringset temp_1 = GALGAS_stringset::init (inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 136)) ;
      GALGAS_stringset var_firstLetterSet_6276 = temp_1 ;
      cEnumerator_globalConstantMap enumerator_6311 (inArgument_inGlobalConstantMap, EnumerationOrder::up) ;
      while (enumerator_6311.hasCurrentObject ()) {
        var_firstLetterSet_6276.addAssign_operation (enumerator_6311.current_lkey (HERE).readProperty_string ().getter_characterAtIndex (GALGAS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 138)).getter_string (SOURCE_FILE ("declaration-global-constant.galgas", 138))  COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 138)) ;
        enumerator_6311.gotoNextObject () ;
      }
      GALGAS_string var_tableOfTypeString_6431 = GALGAS_string::makeEmptyString () ;
      GALGAS_char var_currentFirstLetter_6468 = GALGAS_char (TO_UNICODE (32)) ;
      cEnumerator_globalConstantMap enumerator_6512 (inArgument_inGlobalConstantMap, EnumerationOrder::up) ;
      while (enumerator_6512.hasCurrentObject ()) {
        enumGalgasBool test_2 = kBoolTrue ;
        if (kBoolTrue == test_2) {
          test_2 = GALGAS_bool (ComparisonKind::notEqual, var_currentFirstLetter_6468.objectCompare (enumerator_6512.current_lkey (HERE).readProperty_string ().getter_characterAtIndex (GALGAS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 143)))).boolEnum () ;
          if (kBoolTrue == test_2) {
            var_currentFirstLetter_6468 = enumerator_6512.current_lkey (HERE).readProperty_string ().getter_characterAtIndex (GALGAS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 144)) ;
            var_tableOfTypeString_6431.plusAssign_operation(GALGAS_string ("<br><a name=\"").add_operation (var_currentFirstLetter_6468.getter_uint (SOURCE_FILE ("declaration-global-constant.galgas", 145)).getter_string (SOURCE_FILE ("declaration-global-constant.galgas", 145)), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 145)).add_operation (GALGAS_string ("\"><b>"), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 145)).add_operation (var_currentFirstLetter_6468.getter_string (SOURCE_FILE ("declaration-global-constant.galgas", 145)), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 145)).add_operation (GALGAS_string ("</b></a><br>"), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 145)), inCompiler  COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 145)) ;
          }
        }
        var_tableOfTypeString_6431.plusAssign_operation(function_linkForGlobalConstant (enumerator_6512.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 147)).add_operation (GALGAS_string ("<br>"), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 147)), inCompiler  COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 147)) ;
        enumerator_6512.gotoNextObject () ;
      }
      GALGAS_string var_typeDumpString_6919 = GALGAS_string (filewrapperTemplate_constantDumpGenerationTemplate_dump (inCompiler, constinArgument_inSourceFile.readProperty_string ().getter_lastPathComponent (SOURCE_FILE ("declaration-global-constant.galgas", 150)), inArgument_inGlobalConstantMap, var_firstLetterSet_6276, var_tableOfTypeString_6431 COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 149))) ;
      GALGAS_bool joker_7176 ; // Joker input parameter
      var_typeDumpString_6919.method_writeToFileWhenDifferentContents (var_typeDumpFilePath_6119, joker_7176, inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 155)) ;
    }
  }
  if (kBoolFalse == test_0) {
    {
    GALGAS_string::class_method_deleteFileIfExists (var_typeDumpFilePath_6119, inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 157)) ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'constantDumpGenerationTemplate'
//
//--------------------------------------------------------------------------------------------------

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_constantDumpGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_constantDumpGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_constantDumpGenerationTemplate (
  "",
  0,
  gWrapperAllFiles_constantDumpGenerationTemplate_0,
  0,
  gWrapperAllDirectories_constantDumpGenerationTemplate_0
) ;


//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'constantDumpGenerationTemplate dump'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_constantDumpGenerationTemplate_dump (Compiler * inCompiler,
                                                                       const GALGAS_string & in_PROJECT_5F_NAME,
                                                                       const GALGAS_globalConstantMap & in_GLOBAL_5F_CONSTANT_5F_MAP,
                                                                       const GALGAS_stringset & in_FIRST_5F_LETTER_5F_SET,
                                                                       const GALGAS_string & in_TABLE_5F_OF_5F_TYPES_5F_STRING
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.01//EN\" \"http://www.w3.org/TR/html4/strict.dtd\">\n<html>\n<head>\n<meta http-equiv=\"Content-Type\" content=\"text/html; charset=utf-8\">\n<title>Global constants of ") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString ("</title>\n<style type=\"text/css\">body {\n  font-family: Georgia, sans-serif ;\n  font-size: small ;\n}\n\nh1 {\n  text-align: center ;\n}\n\n.selecteur {\n  color:green ;\n}\n\na.header_link {\n  background-color: #FFFFCC ;\n}\n\na:visited, a:link, a:active{\n  color: blue ;\n  text-decoration: underline ;\n}\n\na:hover {\n  color:green ;\n  background-color: #FFFF00 ;\n  text-decoration: none ;\n}\n\ntable.result {\n  border: 1px solid #666666 ;\n}\n\ntd.result_title {\n  font-weight: bold ;\n  text-align: center ;\n  background-color: yellow ;\n}\n\ntr.result_line {\n  background-color: #EEEEEE ;\n}\n\n</style>\n</head>\n<body>\n<div>\n<h1>Global Constants of ") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString ("</h1>\n<p>This document lists all ") ;
  result.appendString (in_GLOBAL_5F_CONSTANT_5F_MAP.getter_count (SOURCE_FILE ("globalConstantDump.html.galgasTemplate", 53)).getter_string (SOURCE_FILE ("globalConstantDump.html.galgasTemplate", 53)).stringValue ()) ;
  result.appendString (" defined global constants, sorted by name.</p>\n<p>") ;
  GALGAS_uint index_1007_ (0) ;
  if (in_FIRST_5F_LETTER_5F_SET.isValid ()) {
    cEnumerator_stringset enumerator_1007 (in_FIRST_5F_LETTER_5F_SET, EnumerationOrder::up) ;
    while (enumerator_1007.hasCurrentObject ()) {
      result.appendString ("<a class=\"header_link\" href=\"#") ;
      result.appendString (enumerator_1007.current_key (HERE).getter_characterAtIndex (GALGAS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("globalConstantDump.html.galgasTemplate", 56)).getter_uint (SOURCE_FILE ("globalConstantDump.html.galgasTemplate", 56)).getter_string (SOURCE_FILE ("globalConstantDump.html.galgasTemplate", 56)).stringValue ()) ;
      result.appendString ("\">") ;
      result.appendString (enumerator_1007.current_key (HERE).stringValue ()) ;
      result.appendString ("</a>") ;
      if (enumerator_1007.hasNextObject ()) {
        result.appendString (" - ") ;
      }
      index_1007_.increment () ;
      enumerator_1007.gotoNextObject () ;
    }
  }
  result.appendString ("</p>\n<p>") ;
  result.appendString (in_TABLE_5F_OF_5F_TYPES_5F_STRING.stringValue ()) ;
  result.appendString ("\n</p>\n<table class=\"result\">\n<tr><td class=\"result_title\">Constant Name</td><td class=\"result_title\">OMNIBUS Type</td><td class=\"result_title\">LLVM Type</td><td class=\"result_title\">Value</td></tr>\n") ;
  GALGAS_uint index_1392_ (0) ;
  if (in_GLOBAL_5F_CONSTANT_5F_MAP.isValid ()) {
    cEnumerator_globalConstantMap enumerator_1392 (in_GLOBAL_5F_CONSTANT_5F_MAP, EnumerationOrder::up) ;
    while (enumerator_1392.hasCurrentObject ()) {
      result.appendString ("<tr class=\"result_line\"><td><a name=\"") ;
      result.appendString (enumerator_1392.current_lkey (HERE).readProperty_string ().stringValue ()) ;
      result.appendString ("\">") ;
      result.appendString (enumerator_1392.current_lkey (HERE).readProperty_string ().stringValue ()) ;
      result.appendString ("</a></td><td>..<'$") ;
      result.appendString (extensionGetter_omnibusTypeDescriptionName (enumerator_1392.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("globalConstantDump.html.galgasTemplate", 66)).stringValue ()) ;
      result.appendString ("</td><td>") ;
      result.appendString (extensionGetter_llvmTypeName (enumerator_1392.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("globalConstantDump.html.galgasTemplate", 66)).stringValue ()) ;
      result.appendString ("</td><td>") ;
      result.appendString (extensionGetter_llvmName (enumerator_1392.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("globalConstantDump.html.galgasTemplate", 66)).stringValue ()) ;
      result.appendString ("</td></tr>\n") ;
      index_1392_.increment () ;
      enumerator_1392.gotoNextObject () ;
    }
  }
  result.appendString ("\n</table>\n</div>\n</body>\n</html>\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Function 'linkForGlobalConstant'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string function_linkForGlobalConstant (const GALGAS_string & constinArgument_inConstantName,
                                              Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("<a class=\"header_link\" href=\"#").add_operation (constinArgument_inConstantName, inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 176)).add_operation (GALGAS_string ("\">"), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 176)).add_operation (constinArgument_inConstantName, inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 176)).add_operation (GALGAS_string ("</a>"), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 176)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_linkForGlobalConstant [2] = {
  & kTypeDescriptor_GALGAS_string,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_linkForGlobalConstant (Compiler * inCompiler,
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

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_linkForGlobalConstant ("linkForGlobalConstant",
                                                                       functionWithGenericHeader_linkForGlobalConstant,
                                                                       & kTypeDescriptor_GALGAS_string,
                                                                       1,
                                                                       functionArgs_linkForGlobalConstant) ;

//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@syncToolInstanceDeclarationAST enterInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_syncToolInstanceDeclarationAST::method_enterInPrecedenceGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GALGAS_syncToolInstanceDeclarationAST temp_0 = this ;
  const GALGAS_syncToolInstanceDeclarationAST temp_1 = this ;
  ioArgument_ioGraph.setter_addNode (temp_0.readProperty_mSyncInstanceName (), temp_1, inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 46)) ;
  }
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    const GALGAS_syncToolInstanceDeclarationAST temp_3 = this ;
    test_2 = GALGAS_bool (ComparisonKind::notEqual, temp_3.readProperty_mSyncTypeName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_2) {
      {
      const GALGAS_syncToolInstanceDeclarationAST temp_4 = this ;
      const GALGAS_syncToolInstanceDeclarationAST temp_5 = this ;
      ioArgument_ioGraph.setter_addEdge (temp_4.readProperty_mSyncInstanceName (), temp_5.readProperty_mSyncTypeName () COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 48)) ;
      }
    }
  }
  const GALGAS_syncToolInstanceDeclarationAST temp_6 = this ;
  const GALGAS_syncToolInstanceDeclarationAST temp_7 = this ;
  callExtensionMethod_addDependenceEdgeForStaticExpression ((cPtr_expressionAST *) temp_6.readProperty_mSourceExpression ().ptr (), temp_7.readProperty_mSyncInstanceName (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 50)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@syncToolInstanceDeclarationAST keyRepresentationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_syncToolInstanceDeclarationAST::getter_keyRepresentationForErrorSignaling (Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outRepresentation ; // Returned variable
  const GALGAS_syncToolInstanceDeclarationAST temp_0 = this ;
  result_outRepresentation = GALGAS_string ("sync ").add_operation (temp_0.readProperty_mSyncInstanceName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 56)) ;
//---
  return result_outRepresentation ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@syncToolInstanceDeclarationAST locationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GALGAS_location cPtr_syncToolInstanceDeclarationAST::getter_locationForErrorSignaling (Compiler */* inCompiler */
                                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_location result_outLocation ; // Returned variable
  const GALGAS_syncToolInstanceDeclarationAST temp_0 = this ;
  result_outLocation = temp_0.readProperty_mSyncInstanceName ().readProperty_location () ;
//---
  return result_outLocation ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@syncToolInstanceDeclarationAST enterInContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_syncToolInstanceDeclarationAST::method_enterInContext (GALGAS_semanticContext & ioArgument_ioContext,
                                                                 GALGAS_declarationDecorationList & ioArgument_ioDecoratedDeclarationList,
                                                                 GALGAS_decoratedRegularRoutineList & /* ioArgument_ioDecoratedRoutineList */,
                                                                 GALGAS_routineListIR & /* ioArgument_ioRoutineListIR */,
                                                                 GALGAS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                                 GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                 GALGAS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                                 GALGAS_userLLVMTypeDefinitionListIR & /* ioArgument_ioUserLLVMTypeDefinitionListIR */,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_omnibusType var_optionalSyncType_4305 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_syncToolInstanceDeclarationAST temp_1 = this ;
    test_0 = GALGAS_bool (ComparisonKind::equal, temp_1.readProperty_mSyncTypeName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      var_optionalSyncType_4305 = function_voidType (inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 92)) ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_syncToolInstanceDeclarationAST temp_2 = this ;
    extensionMethod_searchType (ioArgument_ioContext.readProperty_mTypeMap (), temp_2.readProperty_mSyncTypeName (), var_optionalSyncType_4305, inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 94)) ;
  }
  GALGAS_objectIR var_expressionResult_4772 ;
  {
  const GALGAS_syncToolInstanceDeclarationAST temp_3 = this ;
  const GALGAS_syncToolInstanceDeclarationAST temp_4 = this ;
  routine_computeStaticExpression_26_context_26_staticEntityMap_3F_expression_3F_errorLocation_3F_optionalContextualTypeName_21_result (ioArgument_ioContext, ioArgument_ioStaticEntityMap, temp_3.readProperty_mSourceExpression (), temp_4.readProperty_mSyncInstanceName ().readProperty_location (), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-global-sync-instance.galgas", 102)), var_expressionResult_4772, inCompiler  COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 97)) ;
  }
  const GALGAS_syncToolInstanceDeclarationAST temp_5 = this ;
  GALGAS_objectIR var_result_4844 = function_checkAssignmentCompatibility (ioArgument_ioContext.readProperty_mAssignmentOperatorMap (), var_expressionResult_4772, var_optionalSyncType_4305, temp_5.readProperty_mSyncInstanceName ().readProperty_location (), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 106)) ;
  {
  const GALGAS_syncToolInstanceDeclarationAST temp_6 = this ;
  ioArgument_ioContext.mProperty_mGlobalSyncInstanceMap.setter_insertKey (temp_6.readProperty_mSyncInstanceName (), extensionGetter_type (var_result_4844, inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 116)), var_result_4844, inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 114)) ;
  }
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    test_7 = extensionGetter_type (var_result_4844, inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 120)).readProperty_kind ().getter_isSyncTool (SOURCE_FILE ("declaration-global-sync-instance.galgas", 120)).operator_not (SOURCE_FILE ("declaration-global-sync-instance.galgas", 120)).boolEnum () ;
    if (kBoolTrue == test_7) {
      const GALGAS_syncToolInstanceDeclarationAST temp_8 = this ;
      TC_Array <FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (temp_8.readProperty_mSyncInstanceName ().readProperty_location (), GALGAS_string ("the type is not a synchronization tool type"), fixItArray9  COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 121)) ;
    }
  }
  {
  const GALGAS_syncToolInstanceDeclarationAST temp_10 = this ;
  extensionSetter_insertGlobalSyncInstance (ioArgument_ioContext.mProperty_mValuedObjectMap, temp_10.readProperty_mSyncInstanceName (), extensionGetter_type (var_result_4844, inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 124)), inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 124)) ;
  }
  const GALGAS_syncToolInstanceDeclarationAST temp_11 = this ;
  ioArgument_ioDecoratedDeclarationList.addAssign_operation (GALGAS_decoratedSyncInstance::init_21__21_ (temp_11.readProperty_mSyncInstanceName (), var_result_4844, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 126)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@decoratedSyncInstance semanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_decoratedSyncInstance::method_semanticAnalysis (const GALGAS_semanticContext /* constinArgument_inContext */,
                                                          GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                          GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GALGAS_decoratedSyncInstance temp_0 = this ;
  const GALGAS_decoratedSyncInstance temp_1 = this ;
  ioArgument_ioIntermediateCodeStruct.mProperty_mGlobalSyncInstanceMap.setter_insertKey (temp_0.readProperty_mSyncInstanceName (), temp_1.readProperty_mExpressionGeneratedCode (), inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 145)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@implementedDriverAST enterInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_implementedDriverAST::method_enterInPrecedenceGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GALGAS_implementedDriverAST temp_0 = this ;
  const GALGAS_implementedDriverAST temp_1 = this ;
  ioArgument_ioGraph.setter_addNode (temp_0.readProperty_mDriverName (), temp_1, inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 165)) ;
  }
  {
  const GALGAS_implementedDriverAST temp_2 = this ;
  const GALGAS_implementedDriverAST temp_3 = this ;
  ioArgument_ioGraph.setter_addEdge (temp_2.readProperty_mDriverName (), function_omnibusTypeSpecificNameForDriver (temp_3.readProperty_mDriverName (), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 166)) COMMA_SOURCE_FILE ("declaration-driver.galgas", 166)) ;
  }
  const GALGAS_implementedDriverAST temp_4 = this ;
  cEnumerator_lstringlist enumerator_6192 (temp_4.readProperty_mDriverDependanceList (), EnumerationOrder::up) ;
  while (enumerator_6192.hasCurrentObject ()) {
    {
    const GALGAS_implementedDriverAST temp_5 = this ;
    ioArgument_ioGraph.setter_addEdge (temp_5.readProperty_mDriverName (), enumerator_6192.current_mValue (HERE) COMMA_SOURCE_FILE ("declaration-driver.galgas", 168)) ;
    }
    enumerator_6192.gotoNextObject () ;
  }
  {
  const GALGAS_implementedDriverAST temp_6 = this ;
  ioArgument_ioGraph.setter_addEdge (temp_6.readProperty_mDriverName (), function_compileTimeDeclarationBarrier (inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 170)) COMMA_SOURCE_FILE ("declaration-driver.galgas", 170)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@implementedDriverAST keyRepresentationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_implementedDriverAST::getter_keyRepresentationForErrorSignaling (Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outRepresentation ; // Returned variable
  const GALGAS_implementedDriverAST temp_0 = this ;
  result_outRepresentation = GALGAS_string ("driver ").add_operation (temp_0.readProperty_mDriverName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 176)) ;
//---
  return result_outRepresentation ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@implementedDriverAST locationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GALGAS_location cPtr_implementedDriverAST::getter_locationForErrorSignaling (Compiler */* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_location result_outLocation ; // Returned variable
  const GALGAS_implementedDriverAST temp_0 = this ;
  result_outLocation = temp_0.readProperty_mDriverName ().readProperty_location () ;
//---
  return result_outLocation ;
}


//--------------------------------------------------------------------------------------------------
//
//Function 'omnibusTypeSpecificNameForDriver'
//
//--------------------------------------------------------------------------------------------------

GALGAS_lstring function_omnibusTypeSpecificNameForDriver (const GALGAS_lstring & constinArgument_inDriverName,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  result_result = GALGAS_lstring::init_21__21_ (GALGAS_string ("driver.").add_operation (constinArgument_inDriverName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 190)), constinArgument_inDriverName.readProperty_location (), inCompiler COMMA_HERE) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_omnibusTypeSpecificNameForDriver [2] = {
  & kTypeDescriptor_GALGAS_lstring,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_omnibusTypeSpecificNameForDriver (Compiler * inCompiler,
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

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_omnibusTypeSpecificNameForDriver ("omnibusTypeSpecificNameForDriver",
                                                                                  functionWithGenericHeader_omnibusTypeSpecificNameForDriver,
                                                                                  & kTypeDescriptor_GALGAS_lstring,
                                                                                  1,
                                                                                  functionArgs_omnibusTypeSpecificNameForDriver) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'llvmDriverNameFromName'
//
//--------------------------------------------------------------------------------------------------

GALGAS_lstring function_llvmDriverNameFromName (const GALGAS_lstring & constinArgument_inDriverName,
                                                Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  result_result = GALGAS_lstring::init_21__21_ (GALGAS_string ("driver$").add_operation (constinArgument_inDriverName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 196)), constinArgument_inDriverName.readProperty_location (), inCompiler COMMA_HERE) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_llvmDriverNameFromName [2] = {
  & kTypeDescriptor_GALGAS_lstring,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_llvmDriverNameFromName (Compiler * inCompiler,
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

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_llvmDriverNameFromName ("llvmDriverNameFromName",
                                                                        functionWithGenericHeader_llvmDriverNameFromName,
                                                                        & kTypeDescriptor_GALGAS_lstring,
                                                                        1,
                                                                        functionArgs_llvmDriverNameFromName) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'llvmBootRoutineNameFromDriver'
//
//--------------------------------------------------------------------------------------------------

GALGAS_lstring function_llvmBootRoutineNameFromDriver (const GALGAS_lstring & constinArgument_inDriverName,
                                                       Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  result_result = GALGAS_lstring::init_21__21_ (GALGAS_string ("boot.").add_operation (constinArgument_inDriverName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 202)), constinArgument_inDriverName.readProperty_location (), inCompiler COMMA_HERE) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_llvmBootRoutineNameFromDriver [2] = {
  & kTypeDescriptor_GALGAS_lstring,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_llvmBootRoutineNameFromDriver (Compiler * inCompiler,
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

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_llvmBootRoutineNameFromDriver ("llvmBootRoutineNameFromDriver",
                                                                               functionWithGenericHeader_llvmBootRoutineNameFromDriver,
                                                                               & kTypeDescriptor_GALGAS_lstring,
                                                                               1,
                                                                               functionArgs_llvmBootRoutineNameFromDriver) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'llvmStartupRoutineNameFromDriver'
//
//--------------------------------------------------------------------------------------------------

GALGAS_lstring function_llvmStartupRoutineNameFromDriver (const GALGAS_lstring & constinArgument_inDriverName,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  result_result = GALGAS_lstring::init_21__21_ (GALGAS_string ("startup.").add_operation (constinArgument_inDriverName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 208)), constinArgument_inDriverName.readProperty_location (), inCompiler COMMA_HERE) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_llvmStartupRoutineNameFromDriver [2] = {
  & kTypeDescriptor_GALGAS_lstring,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_llvmStartupRoutineNameFromDriver (Compiler * inCompiler,
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

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_llvmStartupRoutineNameFromDriver ("llvmStartupRoutineNameFromDriver",
                                                                                  functionWithGenericHeader_llvmStartupRoutineNameFromDriver,
                                                                                  & kTypeDescriptor_GALGAS_lstring,
                                                                                  1,
                                                                                  functionArgs_llvmStartupRoutineNameFromDriver) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'retainRequiredDrivers&'
//
//--------------------------------------------------------------------------------------------------

void routine_retainRequiredDrivers_26_ (GALGAS_ast & ioArgument_ioAST,
                                        Compiler * inCompiler
                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstringlist temp_0 = GALGAS_lstringlist::init (inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 233)) ;
  GALGAS_lstringlist var_driverWithNoDependenceList_9329 = temp_0 ;
  cEnumerator_driverDeclarationListAST enumerator_9369 (ioArgument_ioAST.readProperty_mDriverDeclarationListAST (), EnumerationOrder::up) ;
  while (enumerator_9369.hasCurrentObject ()) {
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = GALGAS_bool (ComparisonKind::equal, enumerator_9369.current_mDriver (HERE).readProperty_mDriverDependanceList ().getter_count (SOURCE_FILE ("declaration-driver.galgas", 235)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_1) {
        var_driverWithNoDependenceList_9329.addAssign_operation (enumerator_9369.current_mDriver (HERE).readProperty_mDriverName ()  COMMA_SOURCE_FILE ("declaration-driver.galgas", 236)) ;
      }
    }
    enumerator_9369.gotoNextObject () ;
  }
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (ComparisonKind::greaterThan, var_driverWithNoDependenceList_9329.getter_count (SOURCE_FILE ("declaration-driver.galgas", 239)).objectCompare (GALGAS_uint (uint32_t (1U)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      cEnumerator_lstringlist enumerator_9615 (var_driverWithNoDependenceList_9329, EnumerationOrder::up) ;
      while (enumerator_9615.hasCurrentObject ()) {
        TC_Array <FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (enumerator_9615.current_mValue (HERE).readProperty_location (), GALGAS_string ("almost one driver can have no dependence"), fixItArray3  COMMA_SOURCE_FILE ("declaration-driver.galgas", 241)) ;
        enumerator_9615.gotoNextObject () ;
      }
    }
  }
  GALGAS_instanciedDriverMap temp_4 = GALGAS_instanciedDriverMap::init (inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 245)) ;
  GALGAS_instanciedDriverMap var_instanciedDriverMap_9802 = temp_4 ;
  cEnumerator_driverInstanciationListAST enumerator_9846 (ioArgument_ioAST.readProperty_mRequiredDriverListAST (), EnumerationOrder::up) ;
  while (enumerator_9846.hasCurrentObject ()) {
    GALGAS_driverInstanciationArgumentMap temp_5 = GALGAS_driverInstanciationArgumentMap::init (inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 247)) ;
    GALGAS_driverInstanciationArgumentMap var_driverInstanciationArgumentMap_9928 = temp_5 ;
    cEnumerator_driverInstanciationArgumentListAST enumerator_9984 (enumerator_9846.current_mDriverInstanciationArgumentList (HERE), EnumerationOrder::up) ;
    while (enumerator_9984.hasCurrentObject ()) {
      {
      var_driverInstanciationArgumentMap_9928.setter_insertKey (enumerator_9984.current_mSelector (HERE), enumerator_9984.current_mExpression (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 249)) ;
      }
      enumerator_9984.gotoNextObject () ;
    }
    {
    var_instanciedDriverMap_9802.setter_insertKey (enumerator_9846.current_mDriverName (HERE), var_driverInstanciationArgumentMap_9928, inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 251)) ;
    }
    enumerator_9846.gotoNextObject () ;
  }
  GALGAS_stringset temp_6 = GALGAS_stringset::init (inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 254)) ;
  GALGAS_stringset var_validDriverNames_10268 = temp_6 ;
  cEnumerator_driverDeclarationListAST enumerator_10353 (ioArgument_ioAST.readProperty_mDriverDeclarationListAST (), EnumerationOrder::up) ;
  while (enumerator_10353.hasCurrentObject ()) {
    var_validDriverNames_10268.addAssign_operation (enumerator_10353.current_mDriver (HERE).readProperty_mDriverName ().readProperty_string ()  COMMA_SOURCE_FILE ("declaration-driver.galgas", 256)) ;
    GALGAS_bool var_driverIsInstancied_10468 = var_instanciedDriverMap_9802.getter_hasKey (enumerator_10353.current_mDriver (HERE).readProperty_mDriverName ().readProperty_string () COMMA_SOURCE_FILE ("declaration-driver.galgas", 257)) ;
    GALGAS_structurePropertyListAST temp_7 = GALGAS_structurePropertyListAST::init (inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 259)) ;
    GALGAS_structurePropertyListAST var_driverPropertyListAST_10632 = temp_7 ;
    enumGalgasBool test_8 = kBoolTrue ;
    if (kBoolTrue == test_8) {
      test_8 = var_driverIsInstancied_10468.boolEnum () ;
      if (kBoolTrue == test_8) {
        GALGAS_driverInstanciationArgumentMap var_driverInstanciationArgumentMap_10758 ;
        var_instanciedDriverMap_9802.method_searchKey (enumerator_10353.current_mDriver (HERE).readProperty_mDriverName (), var_driverInstanciationArgumentMap_10758, inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 261)) ;
        GALGAS_stringset temp_9 = GALGAS_stringset::init (inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 263)) ;
        GALGAS_stringset var_validArgumentSet_10871 = temp_9 ;
        cEnumerator_structurePropertyListAST enumerator_10967 (enumerator_10353.current_mDriver (HERE).readProperty_mPropertyListAST (), EnumerationOrder::up) ;
        while (enumerator_10967.hasCurrentObject ()) {
          GALGAS_propertyKindAST var_driverPropertyKind_11045 ;
          switch (enumerator_10967.current_mPropertyKind (HERE).enumValue ()) {
          case GALGAS_propertyKindAST::kNotBuilt:
            break ;
          case GALGAS_propertyKindAST::kEnum_uninitializedStoredProperty:
            {
              GALGAS_expressionAST var_initExpression_11207 ;
              var_driverInstanciationArgumentMap_10758.method_searchKey (enumerator_10967.current_mPropertyName (HERE), var_initExpression_11207, inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 268)) ;
              var_validArgumentSet_10871.addAssign_operation (enumerator_10967.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("declaration-driver.galgas", 269)) ;
              var_driverPropertyKind_11045 = GALGAS_propertyKindAST::class_func_initializedStoredProperty (var_initExpression_11207  COMMA_SOURCE_FILE ("declaration-driver.galgas", 270)) ;
            }
            break ;
          case GALGAS_propertyKindAST::kEnum_uninitializedConstantProperty:
            {
              GALGAS_expressionAST var_initExpression_11481 ;
              var_driverInstanciationArgumentMap_10758.method_searchKey (enumerator_10967.current_mPropertyName (HERE), var_initExpression_11481, inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 272)) ;
              var_validArgumentSet_10871.addAssign_operation (enumerator_10967.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("declaration-driver.galgas", 273)) ;
              var_driverPropertyKind_11045 = GALGAS_propertyKindAST::class_func_initializedConstantProperty (var_initExpression_11481  COMMA_SOURCE_FILE ("declaration-driver.galgas", 274)) ;
            }
            break ;
          case GALGAS_propertyKindAST::kEnum_initializedStoredProperty:
            {
              var_driverPropertyKind_11045 = enumerator_10967.current_mPropertyKind (HERE) ;
            }
            break ;
          case GALGAS_propertyKindAST::kEnum_initializedConstantProperty:
            {
              var_driverPropertyKind_11045 = enumerator_10967.current_mPropertyKind (HERE) ;
            }
            break ;
          case GALGAS_propertyKindAST::kEnum_readOnlyComputedProperty:
            {
              var_driverPropertyKind_11045 = enumerator_10967.current_mPropertyKind (HERE) ;
            }
            break ;
          case GALGAS_propertyKindAST::kEnum_writeComputedProperty:
            {
              var_driverPropertyKind_11045 = enumerator_10967.current_mPropertyKind (HERE) ;
            }
            break ;
          }
          var_driverPropertyListAST_10632.addAssign_operation (enumerator_10967.current_mPropertyName (HERE), enumerator_10967.current_mPropertyAttributeList (HERE), GALGAS_propertyVisibility::class_func_isPrivate (SOURCE_FILE ("declaration-driver.galgas", 287)), enumerator_10967.current_mPropertyTypeName (HERE), var_driverPropertyKind_11045  COMMA_SOURCE_FILE ("declaration-driver.galgas", 284)) ;
          enumerator_10967.gotoNextObject () ;
        }
        cEnumerator_stringset enumerator_12271 (var_driverInstanciationArgumentMap_10758.getter_keySet (SOURCE_FILE ("declaration-driver.galgas", 292)).substract_operation (var_validArgumentSet_10871, inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 292)), EnumerationOrder::up) ;
        while (enumerator_12271.hasCurrentObject ()) {
          TC_Array <FixItDescription> fixItArray10 ;
          inCompiler->emitSemanticError (var_driverInstanciationArgumentMap_10758.getter_locationForKey (enumerator_12271.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 293)), GALGAS_string ("invalid selector"), fixItArray10  COMMA_SOURCE_FILE ("declaration-driver.galgas", 293)) ;
          enumerator_12271.gotoNextObject () ;
        }
      }
    }
    GALGAS_lstringlist temp_11 = GALGAS_lstringlist::init (inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 301)) ;
    ioArgument_ioAST.mProperty_mDeclarationListAST.addAssign_operation (GALGAS_structureDeclarationAST::init_21__21__21__21__21__21__21_ (function_omnibusTypeSpecificNameForDriver (enumerator_10353.current_mDriver (HERE).readProperty_mDriverName (), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 298)), function_omnibusTypeSpecificNameForDriver (enumerator_10353.current_mDriver (HERE).readProperty_mDriverName (), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 299)), function_llvmDriverNameFromName (enumerator_10353.current_mDriver (HERE).readProperty_mDriverName (), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 300)), temp_11, GALGAS_bool (false), var_driverPropertyListAST_10632, GALGAS_bool (false), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-driver.galgas", 297)) ;
    ioArgument_ioAST.mProperty_mDeclarationListAST.addAssign_operation (GALGAS_implementedDriverAST::init_21__21__21__21__21__21__21__21__21_ (enumerator_10353.current_mDriver (HERE).readProperty_mDriverName (), enumerator_10353.current_mDriver (HERE).readProperty_mDriverDependanceList (), var_driverIsInstancied_10468, enumerator_10353.current_mDriver (HERE).readProperty_mBootLocation (), enumerator_10353.current_mDriver (HERE).readProperty_mBootInstructionList (), enumerator_10353.current_mDriver (HERE).readProperty_mBootEndLocation (), enumerator_10353.current_mDriver (HERE).readProperty_mStartupLocation (), enumerator_10353.current_mDriver (HERE).readProperty_mStartupInstructionList (), enumerator_10353.current_mDriver (HERE).readProperty_mStartupEndLocation (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-driver.galgas", 306)) ;
    enumerator_10353.gotoNextObject () ;
  }
  GALGAS_driverDeclarationListAST temp_12 = GALGAS_driverDeclarationListAST::init (inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 318)) ;
  ioArgument_ioAST.mProperty_mDriverDeclarationListAST = temp_12 ;
  cEnumerator_stringset enumerator_13394 (var_instanciedDriverMap_9802.getter_keySet (SOURCE_FILE ("declaration-driver.galgas", 320)).substract_operation (var_validDriverNames_10268, inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 320)), EnumerationOrder::up) ;
  while (enumerator_13394.hasCurrentObject ()) {
    TC_Array <FixItDescription> fixItArray13 ;
    inCompiler->emitSemanticError (var_instanciedDriverMap_9802.getter_locationForKey (enumerator_13394.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 321)), GALGAS_string ("undefined driver"), fixItArray13  COMMA_SOURCE_FILE ("declaration-driver.galgas", 321)) ;
    enumerator_13394.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@implementedDriverAST enterInContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_implementedDriverAST::method_enterInContext (GALGAS_semanticContext & ioArgument_ioContext,
                                                       GALGAS_declarationDecorationList & ioArgument_ioDecoratedDeclarationList,
                                                       GALGAS_decoratedRegularRoutineList & ioArgument_ioDecoratedRoutineList,
                                                       GALGAS_routineListIR & /* ioArgument_ioRoutineListIR */,
                                                       GALGAS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                       GALGAS_staticEntityMap & /* ioArgument_ioStaticEntityMap */,
                                                       GALGAS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                       GALGAS_userLLVMTypeDefinitionListIR & /* ioArgument_ioUserLLVMTypeDefinitionListIR */,
                                                       Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_omnibusType var_driverType_14610 ;
  const GALGAS_implementedDriverAST temp_0 = this ;
  extensionMethod_searchType (ioArgument_ioContext.readProperty_mTypeMap (), function_omnibusTypeSpecificNameForDriver (temp_0.readProperty_mDriverName (), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 340)), var_driverType_14610, inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 339)) ;
  {
  const GALGAS_implementedDriverAST temp_1 = this ;
  const GALGAS_implementedDriverAST temp_2 = this ;
  extensionSetter_insertDriver (ioArgument_ioContext.mProperty_mValuedObjectMap, temp_1.readProperty_mDriverName (), temp_2.readProperty_mIsInstancied (), var_driverType_14610, inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 343)) ;
  }
  const GALGAS_implementedDriverAST temp_3 = this ;
  ioArgument_ioDecoratedDeclarationList.addAssign_operation (GALGAS_decoratedRequiredDriver::init_21_ (temp_3.readProperty_mDriverName (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-driver.galgas", 345)) ;
  const GALGAS_implementedDriverAST temp_4 = this ;
  const GALGAS_implementedDriverAST temp_5 = this ;
  GALGAS_routineFormalArgumentListAST temp_6 = GALGAS_routineFormalArgumentListAST::init (inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 356)) ;
  const GALGAS_implementedDriverAST temp_7 = this ;
  const GALGAS_implementedDriverAST temp_8 = this ;
  const GALGAS_implementedDriverAST temp_9 = this ;
  ioArgument_ioDecoratedRoutineList.addAssign_operation (function_omnibusTypeSpecificNameForDriver (temp_4.readProperty_mDriverName (), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 348)), GALGAS_mode::class_func_bootMode (SOURCE_FILE ("declaration-driver.galgas", 349)), GALGAS_bool (true), GALGAS_routineKind::class_func_function (SOURCE_FILE ("declaration-driver.galgas", 351)), GALGAS_bool (true), GALGAS_bool (false), GALGAS_routineAttributes::class_func_none (SOURCE_FILE ("declaration-driver.galgas", 354)), function_llvmBootRoutineNameFromDriver (temp_5.readProperty_mDriverName (), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 355)), temp_6, GALGAS_bool (true), temp_7.readProperty_mBootInstructionList (), temp_8.readProperty_mBootEndLocation (), GALGAS_lstring::init_21__21_ (GALGAS_string::makeEmptyString (), temp_9.readProperty_mBootLocation (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-driver.galgas", 347)) ;
  const GALGAS_implementedDriverAST temp_10 = this ;
  const GALGAS_implementedDriverAST temp_11 = this ;
  GALGAS_routineFormalArgumentListAST temp_12 = GALGAS_routineFormalArgumentListAST::init (inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 371)) ;
  const GALGAS_implementedDriverAST temp_13 = this ;
  const GALGAS_implementedDriverAST temp_14 = this ;
  const GALGAS_implementedDriverAST temp_15 = this ;
  ioArgument_ioDecoratedRoutineList.addAssign_operation (function_omnibusTypeSpecificNameForDriver (temp_10.readProperty_mDriverName (), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 363)), GALGAS_mode::class_func_startupMode (SOURCE_FILE ("declaration-driver.galgas", 364)), GALGAS_bool (true), GALGAS_routineKind::class_func_function (SOURCE_FILE ("declaration-driver.galgas", 366)), GALGAS_bool (true), GALGAS_bool (false), GALGAS_routineAttributes::class_func_none (SOURCE_FILE ("declaration-driver.galgas", 369)), function_llvmStartupRoutineNameFromDriver (temp_11.readProperty_mDriverName (), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 370)), temp_12, GALGAS_bool (true), temp_13.readProperty_mStartupInstructionList (), temp_14.readProperty_mStartupEndLocation (), GALGAS_lstring::init_21__21_ (GALGAS_string::makeEmptyString (), temp_15.readProperty_mStartupLocation (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-driver.galgas", 362)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@decoratedRequiredDriver semanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_decoratedRequiredDriver::method_semanticAnalysis (const GALGAS_semanticContext constinArgument_inContext,
                                                            GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                            GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                                            Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_omnibusType var_driverType_16951 ;
  const GALGAS_decoratedRequiredDriver temp_0 = this ;
  extensionMethod_searchType (constinArgument_inContext.readProperty_mTypeMap (), function_omnibusTypeSpecificNameForDriver (temp_0.readProperty_mDriverName (), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 394)), var_driverType_16951, inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 393)) ;
  const GALGAS_decoratedRequiredDriver temp_1 = this ;
  GALGAS_lstring var_typeName_16972 = GALGAS_lstring::init_21__21_ (var_driverType_16951.readProperty_omnibusTypeDescriptionName (), temp_1.readProperty_mDriverName ().readProperty_location (), inCompiler COMMA_HERE) ;
  GALGAS_constructorMap var_constructorMap_17114 ;
  constinArgument_inContext.readProperty_mTypeConstructorMap ().method_searchKey (var_typeName_16972, var_constructorMap_17114, inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 398)) ;
  GALGAS_constructorValue var_constructorValue_17208 ;
  const GALGAS_decoratedRequiredDriver temp_2 = this ;
  GALGAS_constructorSignature joker_17200 ; // Joker input parameter
  var_constructorMap_17114.method_searchKey (GALGAS_lstring::init_21__21_ (GALGAS_string ("()"), temp_2.readProperty_mDriverName ().readProperty_location (), inCompiler COMMA_HERE), joker_17200, var_constructorValue_17208, inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 399)) ;
  GALGAS_sortedOperandIRList var_sortedOperandList_17279 ;
  var_constructorValue_17208.method_structure (var_sortedOperandList_17279, inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 400)) ;
  GALGAS_operandIRList temp_3 = GALGAS_operandIRList::init (inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 401)) ;
  GALGAS_operandIRList var_initialValueList_17319 = temp_3 ;
  cEnumerator_sortedOperandIRList enumerator_17362 (var_sortedOperandList_17279, EnumerationOrder::up) ;
  while (enumerator_17362.hasCurrentObject ()) {
    var_initialValueList_17319.addAssign_operation (enumerator_17362.current_mOperand (HERE)  COMMA_SOURCE_FILE ("declaration-driver.galgas", 403)) ;
    enumerator_17362.gotoNextObject () ;
  }
  const GALGAS_decoratedRequiredDriver temp_4 = this ;
  ioArgument_ioIntermediateCodeStruct.mProperty_mDriverList.addAssign_operation (temp_4.readProperty_mDriverName (), var_driverType_16951, var_initialValueList_17319  COMMA_SOURCE_FILE ("declaration-driver.galgas", 405)) ;
  const GALGAS_decoratedRequiredDriver temp_5 = this ;
  ioArgument_ioTemporaries.mProperty_mInitializedDriverSet.addAssign_operation (temp_5.readProperty_mDriverName ().readProperty_string ()  COMMA_SOURCE_FILE ("declaration-driver.galgas", 410)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@staticListAST enterExtension'
//
//--------------------------------------------------------------------------------------------------

void cPtr_staticListAST::method_enterExtension (GALGAS_extendStaticArrayDeclarationDictAST & ioArgument_ioExtendStaticArrayDeclarationAST,
                                                GALGAS_abstractDeclarationAST & outArgument_outNewDeclaration,
                                                Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_staticListAST temp_1 = this ;
    test_0 = ioArgument_ioExtendStaticArrayDeclarationAST.getter_hasKey (temp_1.readProperty_mStaticListName ().readProperty_string () COMMA_SOURCE_FILE ("declaration-static-list.galgas", 162)).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_staticListValueListAST var_elements_6432 ;
      {
      const GALGAS_staticListAST temp_2 = this ;
      ioArgument_ioExtendStaticArrayDeclarationAST.setter_removeKey (temp_2.readProperty_mStaticListName ().readProperty_string (), var_elements_6432, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 163)) ;
      }
      const GALGAS_staticListAST temp_3 = this ;
      const GALGAS_staticListAST temp_4 = this ;
      const GALGAS_staticListAST temp_5 = this ;
      outArgument_outNewDeclaration = GALGAS_staticListAST::init_21__21__21_ (temp_3.readProperty_mStaticListName (), temp_4.readProperty_mPropertyList (), temp_5.readProperty_mValueList ().add_operation (var_elements_6432, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 167)), inCompiler COMMA_HERE) ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_staticListAST temp_6 = this ;
    outArgument_outNewDeclaration = temp_6 ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@staticListAST enterInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_staticListAST::method_enterInPrecedenceGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                        Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GALGAS_staticListAST temp_0 = this ;
  const GALGAS_staticListAST temp_1 = this ;
  ioArgument_ioGraph.setter_addNode (temp_0.readProperty_mStaticListName (), temp_1, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 180)) ;
  }
  {
  const GALGAS_staticListAST temp_2 = this ;
  ioArgument_ioGraph.setter_addEdge (temp_2.readProperty_mStaticListName (), function_compileTimeDeclarationBarrier (inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 181)) COMMA_SOURCE_FILE ("declaration-static-list.galgas", 181)) ;
  }
  const GALGAS_staticListAST temp_3 = this ;
  cEnumerator_staticListPropertyListAST enumerator_7285 (temp_3.readProperty_mPropertyList (), EnumerationOrder::up) ;
  while (enumerator_7285.hasCurrentObject ()) {
    switch (enumerator_7285.current_mPropertyType (HERE).enumValue ()) {
    case GALGAS_staticListPropertyTypeAST::kNotBuilt:
      break ;
    case GALGAS_staticListPropertyTypeAST::kEnum_valueType:
      {
        const cEnumAssociatedValues_staticListPropertyTypeAST_valueType * extractPtr_7445 = (const cEnumAssociatedValues_staticListPropertyTypeAST_valueType *) (enumerator_7285.current_mPropertyType (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_7361_propertyTypeName = extractPtr_7445->mAssociatedValue0 ;
        {
        const GALGAS_staticListAST temp_4 = this ;
        ioArgument_ioGraph.setter_addEdge (temp_4.readProperty_mStaticListName (), extractedValue_7361_propertyTypeName COMMA_SOURCE_FILE ("declaration-static-list.galgas", 186)) ;
        }
      }
      break ;
    case GALGAS_staticListPropertyTypeAST::kEnum_function:
      {
        const cEnumAssociatedValues_staticListPropertyTypeAST_function * extractPtr_7759 = (const cEnumAssociatedValues_staticListPropertyTypeAST_function *) (enumerator_7285.current_mPropertyType (HERE).unsafePointer ()) ;
        const GALGAS_routineFormalArgumentListAST extractedValue_7498_formalArgs = extractPtr_7759->mAssociatedValue1 ;
        const GALGAS_lstring extractedValue_7518_returnType = extractPtr_7759->mAssociatedValue2 ;
        cEnumerator_routineFormalArgumentListAST enumerator_7570 (extractedValue_7498_formalArgs, EnumerationOrder::up) ;
        while (enumerator_7570.hasCurrentObject ()) {
          {
          ioArgument_ioGraph.setter_noteNode (enumerator_7570.current_mFormalArgumentTypeName (HERE) COMMA_SOURCE_FILE ("declaration-static-list.galgas", 189)) ;
          }
          enumerator_7570.gotoNextObject () ;
        }
        enumGalgasBool test_5 = kBoolTrue ;
        if (kBoolTrue == test_5) {
          test_5 = GALGAS_bool (ComparisonKind::notEqual, extractedValue_7518_returnType.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_5) {
            {
            const GALGAS_staticListAST temp_6 = this ;
            ioArgument_ioGraph.setter_addEdge (temp_6.readProperty_mStaticListName (), extractedValue_7518_returnType COMMA_SOURCE_FILE ("declaration-static-list.galgas", 192)) ;
            }
          }
        }
      }
      break ;
    }
    enumerator_7285.gotoNextObject () ;
  }
  const GALGAS_staticListAST temp_7 = this ;
  cEnumerator_staticListValueListAST enumerator_7851 (temp_7.readProperty_mValueList (), EnumerationOrder::up) ;
  while (enumerator_7851.hasCurrentObject ()) {
    cEnumerator_extendStaticListElementAST enumerator_7893 (enumerator_7851.current_mElement (HERE), EnumerationOrder::up) ;
    while (enumerator_7893.hasCurrentObject ()) {
      switch (enumerator_7893.current_mExpression (HERE).enumValue ()) {
      case GALGAS_extendStaticListExpressionAST::kNotBuilt:
        break ;
      case GALGAS_extendStaticListExpressionAST::kEnum_expression:
        {
          const cEnumAssociatedValues_extendStaticListExpressionAST_expression * extractPtr_8055 = (const cEnumAssociatedValues_extendStaticListExpressionAST_expression *) (enumerator_7893.current_mExpression (HERE).unsafePointer ()) ;
          const GALGAS_expressionAST extractedValue_7967_exp = extractPtr_8055->mAssociatedValue0 ;
          const GALGAS_staticListAST temp_8 = this ;
          callExtensionMethod_addDependenceEdgeForStaticExpression ((cPtr_expressionAST *) extractedValue_7967_exp.ptr (), temp_8.readProperty_mStaticListName (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 201)) ;
        }
        break ;
      case GALGAS_extendStaticListExpressionAST::kEnum_function:
        {
          const cEnumAssociatedValues_extendStaticListExpressionAST_function * extractPtr_8247 = (const cEnumAssociatedValues_extendStaticListExpressionAST_function *) (enumerator_7893.current_mExpression (HERE).unsafePointer ()) ;
          const GALGAS_routineFormalArgumentListAST extractedValue_8110_formalArgs = extractPtr_8247->mAssociatedValue1 ;
          cEnumerator_routineFormalArgumentListAST enumerator_8164 (extractedValue_8110_formalArgs, EnumerationOrder::up) ;
          while (enumerator_8164.hasCurrentObject ()) {
            {
            ioArgument_ioGraph.setter_noteNode (enumerator_8164.current_mFormalArgumentTypeName (HERE) COMMA_SOURCE_FILE ("declaration-static-list.galgas", 204)) ;
            }
            enumerator_8164.gotoNextObject () ;
          }
        }
        break ;
      }
      enumerator_7893.gotoNextObject () ;
    }
    enumerator_7851.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@staticListAST locationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GALGAS_location cPtr_staticListAST::getter_locationForErrorSignaling (Compiler */* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_location result_result ; // Returned variable
  const GALGAS_staticListAST temp_0 = this ;
  result_result = temp_0.readProperty_mStaticListName ().readProperty_location () ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@staticListAST keyRepresentationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_staticListAST::getter_keyRepresentationForErrorSignaling (Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_staticListAST temp_0 = this ;
  result_result = GALGAS_string ("staticlist ").add_operation (temp_0.readProperty_mStaticListName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 220)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Function 'omnibusNameForStaticListType'
//
//--------------------------------------------------------------------------------------------------

GALGAS_lstring function_omnibusNameForStaticListType (const GALGAS_lstring & constinArgument_inStaticListName,
                                                      Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  result_result = GALGAS_lstring::init_21__21_ (GALGAS_string ("staticlist ").add_operation (constinArgument_inStaticListName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 230)), constinArgument_inStaticListName.readProperty_location (), inCompiler COMMA_HERE) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_omnibusNameForStaticListType [2] = {
  & kTypeDescriptor_GALGAS_lstring,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_omnibusNameForStaticListType (Compiler * inCompiler,
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

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_omnibusNameForStaticListType ("omnibusNameForStaticListType",
                                                                              functionWithGenericHeader_omnibusNameForStaticListType,
                                                                              & kTypeDescriptor_GALGAS_lstring,
                                                                              1,
                                                                              functionArgs_omnibusNameForStaticListType) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'llvmNameForStaticListType'
//
//--------------------------------------------------------------------------------------------------

GALGAS_lstring function_llvmNameForStaticListType (const GALGAS_lstring & constinArgument_inStaticListName,
                                                   Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  result_result = GALGAS_lstring::init_21__21_ (GALGAS_string ("staticlist-").add_operation (constinArgument_inStaticListName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 236)), constinArgument_inStaticListName.readProperty_location (), inCompiler COMMA_HERE) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_llvmNameForStaticListType [2] = {
  & kTypeDescriptor_GALGAS_lstring,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_llvmNameForStaticListType (Compiler * inCompiler,
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

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_llvmNameForStaticListType ("llvmNameForStaticListType",
                                                                           functionWithGenericHeader_llvmNameForStaticListType,
                                                                           & kTypeDescriptor_GALGAS_lstring,
                                                                           1,
                                                                           functionArgs_llvmNameForStaticListType) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'omnibusNameForStaticListElementType'
//
//--------------------------------------------------------------------------------------------------

GALGAS_lstring function_omnibusNameForStaticListElementType (const GALGAS_lstring & constinArgument_inStaticListName,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  result_result = GALGAS_lstring::init_21__21_ (GALGAS_string ("staticlist element ").add_operation (constinArgument_inStaticListName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 242)), constinArgument_inStaticListName.readProperty_location (), inCompiler COMMA_HERE) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_omnibusNameForStaticListElementType [2] = {
  & kTypeDescriptor_GALGAS_lstring,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_omnibusNameForStaticListElementType (Compiler * inCompiler,
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

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_omnibusNameForStaticListElementType ("omnibusNameForStaticListElementType",
                                                                                     functionWithGenericHeader_omnibusNameForStaticListElementType,
                                                                                     & kTypeDescriptor_GALGAS_lstring,
                                                                                     1,
                                                                                     functionArgs_omnibusNameForStaticListElementType) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'llvmNameForStaticListElementType'
//
//--------------------------------------------------------------------------------------------------

GALGAS_lstring function_llvmNameForStaticListElementType (const GALGAS_lstring & constinArgument_inStaticListName,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  result_result = GALGAS_lstring::init_21__21_ (GALGAS_string ("staticlist-element-type-").add_operation (constinArgument_inStaticListName.readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("declaration-static-list.galgas", 248)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 248)), constinArgument_inStaticListName.readProperty_location (), inCompiler COMMA_HERE) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_llvmNameForStaticListElementType [2] = {
  & kTypeDescriptor_GALGAS_lstring,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_llvmNameForStaticListElementType (Compiler * inCompiler,
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

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_llvmNameForStaticListElementType ("llvmNameForStaticListElementType",
                                                                                  functionWithGenericHeader_llvmNameForStaticListElementType,
                                                                                  & kTypeDescriptor_GALGAS_lstring,
                                                                                  1,
                                                                                  functionArgs_llvmNameForStaticListElementType) ;

//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@staticListAST enterInContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_staticListAST::method_enterInContext (GALGAS_semanticContext & ioArgument_ioContext,
                                                GALGAS_declarationDecorationList & ioArgument_ioDecoratedDeclarationList,
                                                GALGAS_decoratedRegularRoutineList & /* ioArgument_ioDecoratedRoutineList */,
                                                GALGAS_routineListIR & ioArgument_ioRoutineListIR,
                                                GALGAS_staticListInitializationMap & ioArgument_ioStaticListValueMap,
                                                GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                GALGAS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                GALGAS_userLLVMTypeDefinitionListIR & ioArgument_ioUserLLVMTypeDefinitionListIR,
                                                Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_propertyList temp_0 = GALGAS_propertyList::init (inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 279)) ;
  GALGAS_propertyList var_propertyList_11576 = temp_0 ;
  GALGAS_stringset temp_1 = GALGAS_stringset::init (inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 281)) ;
  GALGAS_stringset var_propertyNameSet_11658 = temp_1 ;
  const GALGAS_staticListAST temp_2 = this ;
  GALGAS_lstring var_omnibusElementTypeName_11686 = function_omnibusNameForStaticListElementType (temp_2.readProperty_mStaticListName (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 282)) ;
  GALGAS_unifiedTypeMapEntry var_elementTypeProxy_11834 ;
  {
  extensionSetter_makeEntry (ioArgument_ioContext.mProperty_mTypeMap, var_omnibusElementTypeName_11686, var_elementTypeProxy_11834, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 283)) ;
  }
  const GALGAS_staticListAST temp_3 = this ;
  cEnumerator_staticListPropertyListAST enumerator_11967 (temp_3.readProperty_mPropertyList (), EnumerationOrder::up) ;
  GALGAS_uint index_11949 (uint32_t (0)) ;
  while (enumerator_11967.hasCurrentObject ()) {
    switch (enumerator_11967.current_mPropertyType (HERE).enumValue ()) {
    case GALGAS_staticListPropertyTypeAST::kNotBuilt:
      break ;
    case GALGAS_staticListPropertyTypeAST::kEnum_valueType:
      {
        const cEnumAssociatedValues_staticListPropertyTypeAST_valueType * extractPtr_12624 = (const cEnumAssociatedValues_staticListPropertyTypeAST_valueType *) (enumerator_11967.current_mPropertyType (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_12059_propertyTypeName = extractPtr_12624->mAssociatedValue0 ;
        GALGAS_omnibusType var_propertyType_12089 = extensionGetter_type (extensionGetter_searchKey (ioArgument_ioContext.readProperty_mTypeMap (), extractedValue_12059_propertyTypeName, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 288)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 288)) ;
        enumGalgasBool test_4 = kBoolTrue ;
        if (kBoolTrue == test_4) {
          test_4 = var_propertyNameSet_11658.getter_hasKey (enumerator_11967.current_mPropertyName (HERE).readProperty_string () COMMA_SOURCE_FILE ("declaration-static-list.galgas", 289)).boolEnum () ;
          if (kBoolTrue == test_4) {
            TC_Array <FixItDescription> fixItArray5 ;
            inCompiler->emitSemanticError (enumerator_11967.current_mPropertyName (HERE).readProperty_location (), GALGAS_string ("duplicated property name"), fixItArray5  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 290)) ;
          }
        }
        if (kBoolFalse == test_4) {
          var_propertyNameSet_11658.addAssign_operation (enumerator_11967.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 292)) ;
          var_propertyList_11576.addAssign_operation (enumerator_11967.current_mPropertyName (HERE).readProperty_string (), var_propertyType_12089  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 293)) ;
          {
          const GALGAS_staticListAST temp_6 = this ;
          extensionSetter_insertGetter (ioArgument_ioContext, function_omnibusNameForStaticListElementType (temp_6.readProperty_mStaticListName (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 295)), enumerator_11967.current_mPropertyName (HERE), GALGAS_propertyVisibility::class_func_isPublic (SOURCE_FILE ("declaration-static-list.galgas", 297)), GALGAS_propertyGetterKind::class_func_storedProperty (var_propertyType_12089, index_11949  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 298)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 294)) ;
          }
        }
      }
      break ;
    case GALGAS_staticListPropertyTypeAST::kEnum_function:
      {
        const cEnumAssociatedValues_staticListPropertyTypeAST_function * extractPtr_14392 = (const cEnumAssociatedValues_staticListPropertyTypeAST_function *) (enumerator_11967.current_mPropertyType (HERE).unsafePointer ()) ;
        const GALGAS_mode extractedValue_12653_mode = extractPtr_14392->mAssociatedValue0 ;
        const GALGAS_routineFormalArgumentListAST extractedValue_12688_formalArgs = extractPtr_14392->mAssociatedValue1 ;
        const GALGAS_lstring extractedValue_12708_returnTypeName = extractPtr_14392->mAssociatedValue2 ;
        const GALGAS_staticListAST temp_7 = this ;
        GALGAS_lstring var_routineLLVMName_12763 = function_routineMangledNameFromAST (function_llvmNameForStaticListElementType (temp_7.readProperty_mStaticListName (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 304)).readProperty_string (), enumerator_11967.current_mPropertyName (HERE), extractedValue_12688_formalArgs, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 303)) ;
        GALGAS_routineTypedSignature var_signature_13011 ;
        {
        routine_routineTypedSignature_26__3F__21_ (ioArgument_ioContext.mProperty_mTypeMap, extractedValue_12688_formalArgs, var_signature_13011, inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 309)) ;
        }
        GALGAS_unifiedTypeMapEntry temp_8 ;
        const enumGalgasBool test_9 = GALGAS_bool (ComparisonKind::equal, extractedValue_12708_returnTypeName.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_9) {
          temp_8 = GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-static-list.galgas", 311)) ;
        }else if (kBoolFalse == test_9) {
          temp_8 = extensionGetter_searchKey (ioArgument_ioContext.readProperty_mTypeMap (), extractedValue_12708_returnTypeName, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 313)) ;
        }
        GALGAS_unifiedTypeMapEntry var_returnTypeProxy_13053 = temp_8 ;
        GALGAS_omnibusType var_propertyType_13247 = GALGAS_omnibusType::init_21_subscript_21_attributes_21_omnibusTypeDescriptionName_21_kind_21_llvmBaseTypeName (GALGAS_subscript::class_func_noSubscript (SOURCE_FILE ("declaration-static-list.galgas", 317)), GALGAS_omnibusTypeAttributes::class_func_none (SOURCE_FILE ("declaration-static-list.galgas", 318)), GALGAS_string::makeEmptyString (), GALGAS_typeKind::class_func_function (extractedValue_12653_mode, var_signature_13011, var_returnTypeProxy_13053  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 320)), GALGAS_string::makeEmptyString (), inCompiler COMMA_HERE) ;
        var_propertyList_11576.addAssign_operation (enumerator_11967.current_mPropertyName (HERE).readProperty_string (), var_propertyType_13247  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 328)) ;
        const GALGAS_staticListAST temp_10 = this ;
        GALGAS_lstring var_routineMangledName_13661 = GALGAS_lstring::init_21__21_ (function_omnibusNameForStaticListElementType (temp_10.readProperty_mStaticListName (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 331)).readProperty_string ().add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 331)).add_operation (enumerator_11967.current_mPropertyName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 331)).add_operation (extensionGetter_routineSignature (extractedValue_12688_formalArgs, enumerator_11967.current_mPropertyName (HERE).readProperty_location (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 331)).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 331)), enumerator_11967.current_mPropertyName (HERE).readProperty_location (), inCompiler COMMA_HERE) ;
        {
        GALGAS_routineLLVMNameDict temp_11 = GALGAS_routineLLVMNameDict::init (inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 339)) ;
        temp_11.enterElement (GALGAS_routineLLVMNameDict_2D_element::init_21__21_ (GALGAS_mode::class_func_userMode (SOURCE_FILE ("declaration-static-list.galgas", 339)), var_routineLLVMName_12763.readProperty_string (), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 339)) ;
        ioArgument_ioContext.mProperty_mRoutineMap.setter_insertKey (var_routineMangledName_13661, GALGAS_bool (true), var_signature_13011, var_returnTypeProxy_13053, temp_11, GALGAS_bool (false), GALGAS_mode::class_func_userMode (SOURCE_FILE ("declaration-static-list.galgas", 341)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 334)) ;
        }
        ioArgument_ioRoutineListIR.addAssign_operation (GALGAS_staticListIndirectRoutineIR::init_21__21_isRequired_21_warnsIfUnused_21__21__21__21_ (var_routineLLVMName_12763, GALGAS_bool (true), GALGAS_bool (true), var_elementTypeProxy_11834, var_signature_13011, var_returnTypeProxy_13053, index_11949, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 344)) ;
      }
      break ;
    }
    enumerator_11967.gotoNextObject () ;
    index_11949.increment_operation (inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 285)) ;
  }
  {
  const GALGAS_staticListAST temp_12 = this ;
  ioArgument_ioContext.mProperty_mStaticListMap.setter_insertKey (temp_12.readProperty_mStaticListName (), var_propertyList_11576, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 355)) ;
  }
  const GALGAS_staticListAST temp_13 = this ;
  const GALGAS_staticListAST temp_14 = this ;
  GALGAS_omnibusType var_elementType_14592 = GALGAS_omnibusType::init_21_subscript_21_attributes_21_omnibusTypeDescriptionName_21_kind_21_llvmBaseTypeName (GALGAS_subscript::class_func_noSubscript (SOURCE_FILE ("declaration-static-list.galgas", 358)), GALGAS_omnibusTypeAttributes::class_func_none (SOURCE_FILE ("declaration-static-list.galgas", 359)), function_omnibusNameForStaticListElementType (temp_13.readProperty_mStaticListName (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 360)).readProperty_string (), GALGAS_typeKind::class_func_structure (var_propertyList_11576  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 361)), function_llvmNameForStaticListElementType (temp_14.readProperty_mStaticListName (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 362)).readProperty_string (), inCompiler COMMA_HERE) ;
  {
  extensionSetter_insertType (ioArgument_ioContext.mProperty_mTypeMap, var_omnibusElementTypeName_11686, var_elementType_14592, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 364)) ;
  }
  GALGAS_stringlist temp_15 = GALGAS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 366)) ;
  GALGAS_stringlist var_stringValueList_15092 = temp_15 ;
  const GALGAS_staticListAST temp_16 = this ;
  cEnumerator_staticListValueListAST enumerator_15129 (temp_16.readProperty_mValueList (), EnumerationOrder::up) ;
  while (enumerator_15129.hasCurrentObject ()) {
    enumGalgasBool test_17 = kBoolTrue ;
    if (kBoolTrue == test_17) {
      test_17 = GALGAS_bool (ComparisonKind::notEqual, var_propertyList_11576.getter_count (SOURCE_FILE ("declaration-static-list.galgas", 368)).objectCompare (enumerator_15129.current_mElement (HERE).getter_count (SOURCE_FILE ("declaration-static-list.galgas", 368)))).boolEnum () ;
      if (kBoolTrue == test_17) {
        const GALGAS_staticListAST temp_18 = this ;
        TC_Array <FixItDescription> fixItArray19 ;
        inCompiler->emitSemanticError (temp_18.readProperty_mStaticListName ().readProperty_location (), var_propertyList_11576.getter_count (SOURCE_FILE ("declaration-static-list.galgas", 370)).getter_string (SOURCE_FILE ("declaration-static-list.galgas", 370)).add_operation (GALGAS_string (" expressions required, "), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 370)).add_operation (enumerator_15129.current_mElement (HERE).getter_count (SOURCE_FILE ("declaration-static-list.galgas", 371)).getter_string (SOURCE_FILE ("declaration-static-list.galgas", 371)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 370)).add_operation (GALGAS_string (" provided"), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 371)), fixItArray19  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 369)) ;
      }
    }
    if (kBoolFalse == test_17) {
      GALGAS_string var_staticValue_15371 = GALGAS_string ("{") ;
      cEnumerator_extendStaticListElementAST enumerator_15408 (enumerator_15129.current_mElement (HERE), EnumerationOrder::up) ;
      cEnumerator_propertyList enumerator_15433 (var_propertyList_11576, EnumerationOrder::up) ;
      while (enumerator_15408.hasCurrentObject () && enumerator_15433.hasCurrentObject ()) {
        switch (enumerator_15408.current_mExpression (HERE).enumValue ()) {
        case GALGAS_extendStaticListExpressionAST::kNotBuilt:
          break ;
        case GALGAS_extendStaticListExpressionAST::kEnum_expression:
          {
            const cEnumAssociatedValues_extendStaticListExpressionAST_expression * extractPtr_16115 = (const cEnumAssociatedValues_extendStaticListExpressionAST_expression *) (enumerator_15408.current_mExpression (HERE).unsafePointer ()) ;
            const GALGAS_expressionAST extractedValue_15529_exp = extractPtr_16115->mAssociatedValue0 ;
            enumGalgasBool test_20 = kBoolTrue ;
            if (kBoolTrue == test_20) {
              test_20 = enumerator_15433.current_mType (HERE).readProperty_kind ().getter_isFunction (SOURCE_FILE ("declaration-static-list.galgas", 377)).boolEnum () ;
              if (kBoolTrue == test_20) {
                TC_Array <FixItDescription> fixItArray21 ;
                inCompiler->emitSemanticError (enumerator_15408.current_mEndOfExpression (HERE), GALGAS_string ("a function name is expected here"), fixItArray21  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 378)) ;
              }
            }
            if (kBoolFalse == test_20) {
              GALGAS_objectIR var_expressionResult_15946 ;
              {
              routine_computeStaticExpression_26_context_26_staticEntityMap_3F_expression_3F_errorLocation_3F_optionalContextualTypeName_21_result (ioArgument_ioContext, ioArgument_ioStaticEntityMap, extractedValue_15529_exp, enumerator_15408.current_mEndOfExpression (HERE), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-static-list.galgas", 385)), var_expressionResult_15946, inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 380)) ;
              }
              var_staticValue_15371.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_15433.current_mType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 389)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 389)).add_operation (extensionGetter_llvmName (var_expressionResult_15946, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 389)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 389)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 389)) ;
            }
          }
          break ;
        case GALGAS_extendStaticListExpressionAST::kEnum_function:
          {
            const cEnumAssociatedValues_extendStaticListExpressionAST_function * extractPtr_18342 = (const cEnumAssociatedValues_extendStaticListExpressionAST_function *) (enumerator_15408.current_mExpression (HERE).unsafePointer ()) ;
            const GALGAS_lstring extractedValue_16157_functionName = extractPtr_18342->mAssociatedValue0 ;
            const GALGAS_routineFormalArgumentListAST extractedValue_16200_formalArgs = extractPtr_18342->mAssociatedValue1 ;
            enumGalgasBool test_22 = kBoolTrue ;
            if (kBoolTrue == test_22) {
              test_22 = enumerator_15433.current_mType (HERE).readProperty_kind ().getter_isFunction (SOURCE_FILE ("declaration-static-list.galgas", 392)).operator_not (SOURCE_FILE ("declaration-static-list.galgas", 392)).boolEnum () ;
              if (kBoolTrue == test_22) {
                TC_Array <FixItDescription> fixItArray23 ;
                inCompiler->emitSemanticError (enumerator_15408.current_mEndOfExpression (HERE), GALGAS_string ("a static expression is expected here"), fixItArray23  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 393)) ;
              }
            }
            if (kBoolFalse == test_22) {
              GALGAS_mode var_mode_16414 ;
              GALGAS_routineTypedSignature var_functionSignature_16448 ;
              GALGAS_unifiedTypeMapEntry var_functionReturnTypeProxy_16501 ;
              enumerator_15433.current_mType (HERE).readProperty_kind ().method_function (var_mode_16414, var_functionSignature_16448, var_functionReturnTypeProxy_16501, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 395)) ;
              GALGAS_lstring var_argumentSignature_16555 = extensionGetter_routineSignature (extractedValue_16200_formalArgs, extractedValue_16157_functionName.readProperty_location (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 400)) ;
              GALGAS_lstring var_functionMangledName_16635 = GALGAS_lstring::init_21__21_ (extractedValue_16157_functionName.readProperty_string ().add_operation (var_argumentSignature_16555.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 401)), extractedValue_16157_functionName.readProperty_location (), inCompiler COMMA_HERE) ;
              GALGAS_bool var_candidateIsPublic_16834 ;
              GALGAS_routineTypedSignature var_candidateSignature_16871 ;
              GALGAS_unifiedTypeMapEntry var_candidateReturnTypeProxy_16909 ;
              GALGAS_routineLLVMNameDict var_implementedModeDictionary_16981 ;
              GALGAS_bool var_implementedIsExported_17033 ;
              GALGAS_mode var_candidateMode_17081 ;
              ioArgument_ioContext.readProperty_mRoutineMap ().method_searchKey (var_functionMangledName_16635, var_candidateIsPublic_16834, var_candidateSignature_16871, var_candidateReturnTypeProxy_16909, var_implementedModeDictionary_16981, var_implementedIsExported_17033, var_candidateMode_17081, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 402)) ;
              GALGAS_string var_routineLLVMName_17151 = function_checkModeAndReturnsRoutineLLVMName (var_implementedModeDictionary_16981, var_mode_16414, extractedValue_16157_functionName, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 412)) ;
              enumGalgasBool test_24 = kBoolTrue ;
              if (kBoolTrue == test_24) {
                GALGAS_bool test_25 = GALGAS_bool (ComparisonKind::equal, var_functionReturnTypeProxy_16501.objectCompare (GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-static-list.galgas", 413)))) ;
                if (kBoolTrue == test_25.boolEnum ()) {
                  test_25 = GALGAS_bool (ComparisonKind::notEqual, var_candidateReturnTypeProxy_16909.objectCompare (GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-static-list.galgas", 413)))) ;
                }
                test_24 = test_25.boolEnum () ;
                if (kBoolTrue == test_24) {
                  TC_Array <FixItDescription> fixItArray26 ;
                  inCompiler->emitSemanticError (extractedValue_16157_functionName.readProperty_location (), GALGAS_string ("this function should return an $").add_operation (extensionGetter_key (var_candidateReturnTypeProxy_16909, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 414)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 414)).add_operation (GALGAS_string (" object"), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 414)), fixItArray26  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 414)) ;
                }
              }
              if (kBoolFalse == test_24) {
                enumGalgasBool test_27 = kBoolTrue ;
                if (kBoolTrue == test_27) {
                  GALGAS_bool test_28 = GALGAS_bool (ComparisonKind::notEqual, var_functionReturnTypeProxy_16501.objectCompare (GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-static-list.galgas", 415)))) ;
                  if (kBoolTrue == test_28.boolEnum ()) {
                    test_28 = GALGAS_bool (ComparisonKind::equal, var_candidateReturnTypeProxy_16909.objectCompare (GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-static-list.galgas", 415)))) ;
                  }
                  test_27 = test_28.boolEnum () ;
                  if (kBoolTrue == test_27) {
                    TC_Array <FixItDescription> fixItArray29 ;
                    inCompiler->emitSemanticError (extractedValue_16157_functionName.readProperty_location (), GALGAS_string ("this function should return no object"), fixItArray29  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 416)) ;
                  }
                }
              }
              enumGalgasBool test_30 = kBoolTrue ;
              if (kBoolTrue == test_30) {
                test_30 = GALGAS_bool (ComparisonKind::notEqual, var_functionSignature_16448.getter_count (SOURCE_FILE ("declaration-static-list.galgas", 418)).objectCompare (var_candidateSignature_16871.getter_count (SOURCE_FILE ("declaration-static-list.galgas", 418)))).boolEnum () ;
                if (kBoolTrue == test_30) {
                  TC_Array <FixItDescription> fixItArray31 ;
                  inCompiler->emitSemanticError (extractedValue_16157_functionName.readProperty_location (), GALGAS_string ("this function has ").add_operation (var_candidateSignature_16871.getter_count (SOURCE_FILE ("declaration-static-list.galgas", 420)).getter_string (SOURCE_FILE ("declaration-static-list.galgas", 420)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 420)).add_operation (GALGAS_string (" argument(s) ("), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 420)).add_operation (var_functionSignature_16448.getter_count (SOURCE_FILE ("declaration-static-list.galgas", 421)).getter_string (SOURCE_FILE ("declaration-static-list.galgas", 420)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 420)).add_operation (GALGAS_string (" required)"), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 421)), fixItArray31  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 419)) ;
                }
              }
              if (kBoolFalse == test_30) {
                cEnumerator_routineTypedSignature enumerator_17948 (var_functionSignature_16448, EnumerationOrder::up) ;
                cEnumerator_routineTypedSignature enumerator_17980 (var_candidateSignature_16871, EnumerationOrder::up) ;
                while (enumerator_17948.hasCurrentObject () && enumerator_17980.hasCurrentObject ()) {
                  enumGalgasBool test_32 = kBoolTrue ;
                  if (kBoolTrue == test_32) {
                    test_32 = GALGAS_bool (ComparisonKind::notEqual, enumerator_17948.current (HERE).readProperty_mTypeProxy ().objectCompare (enumerator_17980.current (HERE).readProperty_mTypeProxy ())).boolEnum () ;
                    if (kBoolTrue == test_32) {
                      TC_Array <FixItDescription> fixItArray33 ;
                      inCompiler->emitSemanticError (enumerator_17980.current (HERE).readProperty_mSelector ().readProperty_location (), GALGAS_string ("argument type should be $").add_operation (extensionGetter_key (enumerator_17948.current (HERE).readProperty_mTypeProxy (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 425)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 425)), fixItArray33  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 425)) ;
                    }
                  }
                  enumerator_17948.gotoNextObject () ;
                  enumerator_17980.gotoNextObject () ;
                }
              }
              var_staticValue_15371.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_15433.current_mType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 429)).add_operation (GALGAS_string (" @"), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 429)).add_operation (var_routineLLVMName_17151.getter_assemblerRepresentation (SOURCE_FILE ("declaration-static-list.galgas", 429)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 429)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 429)) ;
            }
          }
          break ;
        }
        if (enumerator_15408.hasNextObject () && enumerator_15433.hasNextObject ()) {
          var_staticValue_15371.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 433)) ;
        }
        enumerator_15408.gotoNextObject () ;
        enumerator_15433.gotoNextObject () ;
      }
      var_staticValue_15371.plusAssign_operation(GALGAS_string ("}"), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 435)) ;
      var_stringValueList_15092.addAssign_operation (var_staticValue_15371  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 436)) ;
    }
    enumerator_15129.gotoNextObject () ;
  }
  {
  const GALGAS_staticListAST temp_34 = this ;
  ioArgument_ioStaticListValueMap.setter_insertKey (temp_34.readProperty_mStaticListName (), var_stringValueList_15092, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 439)) ;
  }
  {
  const GALGAS_staticListAST temp_35 = this ;
  const GALGAS_staticListAST temp_36 = this ;
  const GALGAS_staticListAST temp_37 = this ;
  extensionSetter_insertGetter (ioArgument_ioContext, function_omnibusNameForStaticListType (temp_35.readProperty_mStaticListName (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 442)), GALGAS_lstring::init_21__21_ (GALGAS_string ("count"), temp_36.readProperty_mStaticListName ().readProperty_location (), inCompiler COMMA_HERE), GALGAS_propertyVisibility::class_func_isPublic (SOURCE_FILE ("declaration-static-list.galgas", 444)), GALGAS_propertyGetterKind::class_func_constantProperty (GALGAS_objectIR::class_func_literalInteger (function_compileTimeIntegerType (inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 445)), temp_37.readProperty_mValueList ().getter_count (SOURCE_FILE ("declaration-static-list.galgas", 445)).getter_bigint (SOURCE_FILE ("declaration-static-list.galgas", 445))  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 445))  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 445)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 441)) ;
  }
  const GALGAS_staticListAST temp_38 = this ;
  const GALGAS_staticListAST temp_39 = this ;
  GALGAS_omnibusType var_arrayType_19049 = GALGAS_omnibusType::init_21_subscript_21_attributes_21_omnibusTypeDescriptionName_21_kind_21_llvmBaseTypeName (GALGAS_subscript::class_func_staticSubscript (var_elementType_14592, var_stringValueList_15092.getter_count (SOURCE_FILE ("declaration-static-list.galgas", 449)).getter_bigint (SOURCE_FILE ("declaration-static-list.galgas", 449))  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 449)), GALGAS_omnibusTypeAttributes::class_func_instanciable (SOURCE_FILE ("declaration-static-list.galgas", 450)).operator_or (GALGAS_omnibusTypeAttributes::class_func_copyable (SOURCE_FILE ("declaration-static-list.galgas", 450)) COMMA_SOURCE_FILE ("declaration-static-list.galgas", 450)), function_omnibusNameForStaticListType (temp_38.readProperty_mStaticListName (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 451)).readProperty_string (), GALGAS_typeKind::class_func_staticArrayType (var_elementType_14592, var_stringValueList_15092.getter_count (SOURCE_FILE ("declaration-static-list.galgas", 452)).getter_bigint (SOURCE_FILE ("declaration-static-list.galgas", 452))  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 452)), function_llvmNameForStaticListType (temp_39.readProperty_mStaticListName (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 453)).readProperty_string (), inCompiler COMMA_HERE) ;
  {
  const GALGAS_staticListAST temp_40 = this ;
  extensionSetter_insertType (ioArgument_ioContext.mProperty_mTypeMap, function_omnibusNameForStaticListType (temp_40.readProperty_mStaticListName (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 456)), var_arrayType_19049, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 455)) ;
  }
  const GALGAS_staticListAST temp_41 = this ;
  GALGAS_unifiedTypeMapEntry var_staticListType_19677 = extensionGetter_searchKey (ioArgument_ioContext.readProperty_mTypeMap (), function_omnibusNameForStaticListType (temp_41.readProperty_mStaticListName (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 460)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 460)) ;
  {
  const GALGAS_staticListAST temp_42 = this ;
  const GALGAS_staticListAST temp_43 = this ;
  ioArgument_ioContext.mProperty_mGlobalConstantMap.setter_insertKey (temp_42.readProperty_mStaticListName (), GALGAS_objectIR::class_func_reference (extensionGetter_type (var_staticListType_19677, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 463)), function_llvmNameForGlobalVariable (temp_43.readProperty_mStaticListName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 463))  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 463)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 461)) ;
  }
  {
  const GALGAS_staticListAST temp_44 = this ;
  const GALGAS_staticListAST temp_45 = this ;
  extensionSetter_insertGlobalConstant (ioArgument_ioContext.mProperty_mValuedObjectMap, temp_44.readProperty_mStaticListName (), GALGAS_objectIR::class_func_reference (extensionGetter_type (var_staticListType_19677, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 467)), function_llvmNameForGlobalVariable (temp_45.readProperty_mStaticListName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 467))  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 467)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 465)) ;
  }
  const GALGAS_staticListAST temp_46 = this ;
  const GALGAS_staticListAST temp_47 = this ;
  ioArgument_ioDecoratedDeclarationList.addAssign_operation (GALGAS_decoratedStaticList::init_21__21_ (temp_46.readProperty_mStaticListName (), temp_47.readProperty_mValueList (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 470)) ;
  ioArgument_ioUserLLVMTypeDefinitionListIR.addAssign_operation (GALGAS_userLLVMSructureTypeDefinitionIR::init_21__21_ (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) var_elementType_14592.ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 473)), var_propertyList_11576, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 472)) ;
  ioArgument_ioUserLLVMTypeDefinitionListIR.addAssign_operation (GALGAS_userLLVMStaticArrayTypeDefinitionIR::init_21__21__21_ (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) var_arrayType_19049.ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 477)), var_elementType_14592, var_stringValueList_15092.getter_count (SOURCE_FILE ("declaration-static-list.galgas", 479)).getter_bigint (SOURCE_FILE ("declaration-static-list.galgas", 479)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 476)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@decoratedStaticList semanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_decoratedStaticList::method_semanticAnalysis (const GALGAS_semanticContext /* constinArgument_inContext */,
                                                        GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                        GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                                        Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringset temp_0 = GALGAS_stringset::init (inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 508)) ;
  GALGAS_stringset var_invokedFunctionSet_21862 = temp_0 ;
  const GALGAS_decoratedStaticList temp_1 = this ;
  cEnumerator_staticListValueListAST enumerator_21902 (temp_1.readProperty_mValueList (), EnumerationOrder::up) ;
  while (enumerator_21902.hasCurrentObject ()) {
    cEnumerator_extendStaticListElementAST enumerator_21944 (enumerator_21902.current_mElement (HERE), EnumerationOrder::up) ;
    while (enumerator_21944.hasCurrentObject ()) {
      switch (enumerator_21944.current_mExpression (HERE).enumValue ()) {
      case GALGAS_extendStaticListExpressionAST::kNotBuilt:
        break ;
      case GALGAS_extendStaticListExpressionAST::kEnum_expression:
        {
          const cEnumAssociatedValues_extendStaticListExpressionAST_expression * extractPtr_22032 = (const cEnumAssociatedValues_extendStaticListExpressionAST_expression *) (enumerator_21944.current_mExpression (HERE).unsafePointer ()) ;
          const GALGAS_expressionAST extractedValue_22027_exp = extractPtr_22032->mAssociatedValue0 ;
        }
        break ;
      case GALGAS_extendStaticListExpressionAST::kEnum_function:
        {
          const cEnumAssociatedValues_extendStaticListExpressionAST_function * extractPtr_22316 = (const cEnumAssociatedValues_extendStaticListExpressionAST_function *) (enumerator_21944.current_mExpression (HERE).unsafePointer ()) ;
          const GALGAS_lstring extractedValue_22064_functionName = extractPtr_22316->mAssociatedValue0 ;
          const GALGAS_routineFormalArgumentListAST extractedValue_22107_formalArgs = extractPtr_22316->mAssociatedValue1 ;
          GALGAS_lstring var_routineMangledName_22165 = function_routineMangledNameFromAST (GALGAS_string::makeEmptyString (), extractedValue_22064_functionName, extractedValue_22107_formalArgs, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 515)) ;
          var_invokedFunctionSet_21862.addAssign_operation (var_routineMangledName_22165.readProperty_string ()  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 520)) ;
        }
        break ;
      }
      enumerator_21944.gotoNextObject () ;
    }
    enumerator_21902.gotoNextObject () ;
  }
  {
  const GALGAS_decoratedStaticList temp_2 = this ;
  ioArgument_ioTemporaries.mProperty_mStaticArrayMapForTemporaries.setter_insertKey (temp_2.readProperty_mStaticListName (), var_invokedFunctionSet_21862, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 524)) ;
  }
  {
  const GALGAS_decoratedStaticList temp_3 = this ;
  ioArgument_ioIntermediateCodeStruct.mProperty_mStaticArrayMapForIntermediate.setter_insertKey (temp_3.readProperty_mStaticListName (), var_invokedFunctionSet_21862, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 525)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@staticListIndirectRoutineIR llvmCodeGeneration'
//
//--------------------------------------------------------------------------------------------------

void cPtr_staticListIndirectRoutineIR::method_llvmCodeGeneration (GALGAS_string & ioArgument_ioLLVMcode,
                                                                  const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                  GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal "), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 575)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_staticListIndirectRoutineIR temp_1 = this ;
    test_0 = GALGAS_bool (ComparisonKind::equal, temp_1.readProperty_mReturnTypeProxy ().objectCompare (GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-static-list.galgas", 576)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("void"), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 577)) ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_staticListIndirectRoutineIR temp_2 = this ;
    ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (temp_2.readProperty_mReturnTypeProxy (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 579)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 579)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 579)) ;
  }
  const GALGAS_staticListIndirectRoutineIR temp_3 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" @").add_operation (temp_3.readProperty_mRoutineMangledName ().readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("declaration-static-list.galgas", 581)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 581)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 581)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 581)) ;
  const GALGAS_staticListIndirectRoutineIR temp_4 = this ;
  GALGAS_string var_receiverLLVMTypeName_24906 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (temp_4.readProperty_mStaticListElementType (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 582)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 582)) ;
  GALGAS_bool var_first_24985 = GALGAS_bool (true) ;
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    test_5 = GALGAS_bool (ComparisonKind::notEqual, var_receiverLLVMTypeName_24906.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_5) {
      ioArgument_ioLLVMcode.plusAssign_operation(var_receiverLLVMTypeName_24906.add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 585)).add_operation (function_llvmNameForSelf (inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 585)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 585)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 585)) ;
      var_first_24985 = GALGAS_bool (false) ;
    }
  }
  const GALGAS_staticListIndirectRoutineIR temp_6 = this ;
  cEnumerator_routineTypedSignature enumerator_25173 (temp_6.readProperty_mFormalArgumentListForGeneration (), EnumerationOrder::up) ;
  while (enumerator_25173.hasCurrentObject ()) {
    enumGalgasBool test_7 = kBoolTrue ;
    if (kBoolTrue == test_7) {
      test_7 = var_first_24985.boolEnum () ;
      if (kBoolTrue == test_7) {
        var_first_24985 = GALGAS_bool (false) ;
      }
    }
    if (kBoolFalse == test_7) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 592)) ;
    }
    switch (enumerator_25173.current_mFormalArgumentPassingMode (HERE).enumValue ()) {
    case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_input:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (enumerator_25173.current_mTypeProxy (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 596)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 596)).add_operation (GALGAS_string (" %in."), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 596)).add_operation (enumerator_25173.current_mFormalArgumentName (HERE).readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("declaration-static-list.galgas", 596)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 596)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 596)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_output:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (enumerator_25173.current_mTypeProxy (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 598)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 598)).add_operation (GALGAS_string ("* %out."), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 598)).add_operation (enumerator_25173.current_mFormalArgumentName (HERE).readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("declaration-static-list.galgas", 598)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 598)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 598)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (enumerator_25173.current_mTypeProxy (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 600)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 600)).add_operation (GALGAS_string ("* %inout."), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 600)).add_operation (enumerator_25173.current_mFormalArgumentName (HERE).readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("declaration-static-list.galgas", 600)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 600)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 600)) ;
      }
      break ;
    }
    enumerator_25173.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (")").add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 603)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 603)).add_operation (GALGAS_string ("{\n"), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 603)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 603)) ;
  GALGAS_string var_llvmFunctionTypeName_25873 ;
  enumGalgasBool test_8 = kBoolTrue ;
  if (kBoolTrue == test_8) {
    const GALGAS_staticListIndirectRoutineIR temp_9 = this ;
    test_8 = GALGAS_bool (ComparisonKind::equal, temp_9.readProperty_mReturnTypeProxy ().objectCompare (GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-static-list.galgas", 606)))).boolEnum () ;
    if (kBoolTrue == test_8) {
      var_llvmFunctionTypeName_25873 = GALGAS_string ("void") ;
    }
  }
  if (kBoolFalse == test_8) {
    const GALGAS_staticListIndirectRoutineIR temp_10 = this ;
    var_llvmFunctionTypeName_25873 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (temp_10.readProperty_mReturnTypeProxy (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 609)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 609)) ;
  }
  var_llvmFunctionTypeName_25873.plusAssign_operation(GALGAS_string ("("), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 611)) ;
  var_first_24985 = GALGAS_bool (true) ;
  const GALGAS_staticListIndirectRoutineIR temp_11 = this ;
  cEnumerator_routineTypedSignature enumerator_26145 (temp_11.readProperty_mFormalArgumentListForGeneration (), EnumerationOrder::up) ;
  while (enumerator_26145.hasCurrentObject ()) {
    enumGalgasBool test_12 = kBoolTrue ;
    if (kBoolTrue == test_12) {
      test_12 = var_first_24985.boolEnum () ;
      if (kBoolTrue == test_12) {
        var_first_24985 = GALGAS_bool (false) ;
      }
    }
    if (kBoolFalse == test_12) {
      var_llvmFunctionTypeName_25873.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 617)) ;
    }
    switch (enumerator_26145.current_mFormalArgumentPassingMode (HERE).enumValue ()) {
    case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_input:
      {
        var_llvmFunctionTypeName_25873.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (enumerator_26145.current_mTypeProxy (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 621)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 621)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 621)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_output:
      {
        var_llvmFunctionTypeName_25873.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (enumerator_26145.current_mTypeProxy (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 623)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 623)).add_operation (GALGAS_string ("*"), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 623)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 623)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
      {
        var_llvmFunctionTypeName_25873.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (enumerator_26145.current_mTypeProxy (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 625)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 625)).add_operation (GALGAS_string ("*"), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 625)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 625)) ;
      }
      break ;
    }
    enumerator_26145.gotoNextObject () ;
  }
  var_llvmFunctionTypeName_25873.plusAssign_operation(GALGAS_string (")*"), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 628)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %ptr = getelementptr inbounds ").add_operation (var_receiverLLVMTypeName_24906, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 630)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 630)) ;
  const GALGAS_staticListIndirectRoutineIR temp_13 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", ").add_operation (var_receiverLLVMTypeName_24906, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 631)).add_operation (GALGAS_string ("* %self, i32 0, i32 "), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 631)).add_operation (temp_13.readProperty_mPropertyIndex ().getter_string (SOURCE_FILE ("declaration-static-list.galgas", 631)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 631)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 631)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 631)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %f = load ").add_operation (var_llvmFunctionTypeName_25873, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 632)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 632)).add_operation (var_llvmFunctionTypeName_25873, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 632)).add_operation (GALGAS_string ("* %ptr\n"), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 632)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 632)) ;
  enumGalgasBool test_14 = kBoolTrue ;
  if (kBoolTrue == test_14) {
    const GALGAS_staticListIndirectRoutineIR temp_15 = this ;
    test_14 = GALGAS_bool (ComparisonKind::equal, temp_15.readProperty_mReturnTypeProxy ().objectCompare (GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-static-list.galgas", 633)))).boolEnum () ;
    if (kBoolTrue == test_14) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void"), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 634)) ;
    }
  }
  if (kBoolFalse == test_14) {
    const GALGAS_staticListIndirectRoutineIR temp_16 = this ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %result = call ").add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (temp_16.readProperty_mReturnTypeProxy (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 636)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 636)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 636)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 636)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" %f ("), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 638)) ;
  var_first_24985 = GALGAS_bool (true) ;
  const GALGAS_staticListIndirectRoutineIR temp_17 = this ;
  cEnumerator_routineTypedSignature enumerator_27168 (temp_17.readProperty_mFormalArgumentListForGeneration (), EnumerationOrder::up) ;
  while (enumerator_27168.hasCurrentObject ()) {
    enumGalgasBool test_18 = kBoolTrue ;
    if (kBoolTrue == test_18) {
      test_18 = var_first_24985.boolEnum () ;
      if (kBoolTrue == test_18) {
        var_first_24985 = GALGAS_bool (false) ;
      }
    }
    if (kBoolFalse == test_18) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 644)) ;
    }
    switch (enumerator_27168.current_mFormalArgumentPassingMode (HERE).enumValue ()) {
    case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_input:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (enumerator_27168.current_mTypeProxy (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 648)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 648)).add_operation (GALGAS_string (" %in."), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 648)).add_operation (enumerator_27168.current_mFormalArgumentName (HERE).readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("declaration-static-list.galgas", 648)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 648)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 648)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_output:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (enumerator_27168.current_mTypeProxy (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 650)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 650)).add_operation (GALGAS_string ("* %out."), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 650)).add_operation (enumerator_27168.current_mFormalArgumentName (HERE).readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("declaration-static-list.galgas", 650)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 650)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 650)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (enumerator_27168.current_mTypeProxy (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 652)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 652)).add_operation (GALGAS_string ("* %inout."), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 652)).add_operation (enumerator_27168.current_mFormalArgumentName (HERE).readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("declaration-static-list.galgas", 652)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 652)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 652)) ;
      }
      break ;
    }
    enumerator_27168.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (")\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 655)) ;
  enumGalgasBool test_19 = kBoolTrue ;
  if (kBoolTrue == test_19) {
    const GALGAS_staticListIndirectRoutineIR temp_20 = this ;
    test_19 = GALGAS_bool (ComparisonKind::equal, temp_20.readProperty_mReturnTypeProxy ().objectCompare (GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-static-list.galgas", 657)))).boolEnum () ;
    if (kBoolTrue == test_19) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 658)) ;
    }
  }
  if (kBoolFalse == test_19) {
    const GALGAS_staticListIndirectRoutineIR temp_21 = this ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret ").add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (temp_21.readProperty_mReturnTypeProxy (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 660)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 660)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 660)).add_operation (GALGAS_string (" %result\n"), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 660)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 660)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 662)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@decoratedTaskListDeclaration semanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_decoratedTaskListDeclaration::method_semanticAnalysis (const GALGAS_semanticContext constinArgument_inContext,
                                                                 GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                 GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_decoratedTaskListDeclaration temp_0 = this ;
  cEnumerator_decoratedTaskList enumerator_12267 (temp_0.readProperty_mTaskList (), EnumerationOrder::up) ;
  GALGAS_uint index_12250 (uint32_t (0)) ;
  while (enumerator_12267.hasCurrentObject ()) {
    extensionMethod_taskSemanticAnalysis (enumerator_12267.current (HERE), constinArgument_inContext, index_12250, ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 320)) ;
    enumerator_12267.gotoNextObject () ;
    index_12250.increment_operation (inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 319)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Routine 'analyzeOrderedTaskRoutines?!'
//
//--------------------------------------------------------------------------------------------------

void routine_analyzeOrderedTaskRoutines_3F__21_ (const GALGAS_taskSetupListAST constinArgument_inTaskRoutineLISTAST,
                                                 GALGAS_stringlist & outArgument_outSetupOrderedList,
                                                 Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSetupOrderedList.drop () ; // Release 'out' argument
  GALGAS_stringlist temp_0 = GALGAS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 335)) ;
  outArgument_outSetupOrderedList = temp_0 ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (ComparisonKind::greaterThan, constinArgument_inTaskRoutineLISTAST.getter_count (SOURCE_FILE ("task-declaration.galgas", 336)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_uint var_numberOfEntriesWithoutAnyPrecedence_12862 = GALGAS_uint (uint32_t (0U)) ;
      cEnumerator_taskSetupListAST enumerator_12913 (constinArgument_inTaskRoutineLISTAST, EnumerationOrder::up) ;
      while (enumerator_12913.hasCurrentObject ()) {
        enumGalgasBool test_2 = kBoolTrue ;
        if (kBoolTrue == test_2) {
          test_2 = GALGAS_bool (ComparisonKind::equal, enumerator_12913.current_mDependanceList (HERE).getter_count (SOURCE_FILE ("task-declaration.galgas", 340)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
          if (kBoolTrue == test_2) {
            var_numberOfEntriesWithoutAnyPrecedence_12862.plusAssign_operation(var_numberOfEntriesWithoutAnyPrecedence_12862.add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 341)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 341)) ;
          }
        }
        enumerator_12913.gotoNextObject () ;
      }
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = GALGAS_bool (ComparisonKind::equal, var_numberOfEntriesWithoutAnyPrecedence_12862.objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
        if (kBoolTrue == test_3) {
          cEnumerator_taskSetupListAST enumerator_13172 (constinArgument_inTaskRoutineLISTAST, EnumerationOrder::up) ;
          while (enumerator_13172.hasCurrentObject ()) {
            TC_Array <FixItDescription> fixItArray4 ;
            inCompiler->emitSemanticError (enumerator_13172.current_mName (HERE).readProperty_location (), GALGAS_string ("Exactly one routine should have no precedence"), fixItArray4  COMMA_SOURCE_FILE ("task-declaration.galgas", 346)) ;
            enumerator_13172.gotoNextObject () ;
          }
        }
      }
      if (kBoolFalse == test_3) {
        enumGalgasBool test_5 = kBoolTrue ;
        if (kBoolTrue == test_5) {
          test_5 = GALGAS_bool (ComparisonKind::greaterThan, var_numberOfEntriesWithoutAnyPrecedence_12862.objectCompare (GALGAS_uint (uint32_t (1U)))).boolEnum () ;
          if (kBoolTrue == test_5) {
            cEnumerator_taskSetupListAST enumerator_13352 (constinArgument_inTaskRoutineLISTAST, EnumerationOrder::up) ;
            while (enumerator_13352.hasCurrentObject ()) {
              enumGalgasBool test_6 = kBoolTrue ;
              if (kBoolTrue == test_6) {
                test_6 = GALGAS_bool (ComparisonKind::equal, enumerator_13352.current_mDependanceList (HERE).getter_count (SOURCE_FILE ("task-declaration.galgas", 350)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
                if (kBoolTrue == test_6) {
                  TC_Array <FixItDescription> fixItArray7 ;
                  inCompiler->emitSemanticError (enumerator_13352.current_mName (HERE).readProperty_location (), GALGAS_string ("Exactly one routine should have no precedence"), fixItArray7  COMMA_SOURCE_FILE ("task-declaration.galgas", 351)) ;
                }
              }
              enumerator_13352.gotoNextObject () ;
            }
          }
        }
      }
      GALGAS_taskSetupListAST var_taskSetupListAST_13610 = constinArgument_inTaskRoutineLISTAST ;
      GALGAS_stringset temp_8 = GALGAS_stringset::init (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 357)) ;
      GALGAS_stringset var_precedenceSet_13669 = temp_8 ;
      GALGAS_bool var_continue_13697 = GALGAS_bool (true) ;
      if (constinArgument_inTaskRoutineLISTAST.getter_count (SOURCE_FILE ("task-declaration.galgas", 359)).isValid ()) {
        uint32_t variant_13717 = constinArgument_inTaskRoutineLISTAST.getter_count (SOURCE_FILE ("task-declaration.galgas", 359)).uintValue () ;
        bool loop_13717 = true ;
        while (loop_13717) {
          GALGAS_bool test_9 = var_continue_13697 ;
          if (kBoolTrue == test_9.boolEnum ()) {
            test_9 = GALGAS_bool (ComparisonKind::greaterThan, var_taskSetupListAST_13610.getter_count (SOURCE_FILE ("task-declaration.galgas", 359)).objectCompare (GALGAS_uint (uint32_t (0U)))) ;
          }
          loop_13717 = test_9.isValid () ;
          if (loop_13717) {
            loop_13717 = test_9.boolValue () ;
          }
          if (loop_13717 && (0 == variant_13717)) {
            loop_13717 = false ;
            inCompiler->loopRunTimeVariantError (SOURCE_FILE ("task-declaration.galgas", 359)) ;
          }
          if (loop_13717) {
            variant_13717 -- ;
            var_continue_13697 = GALGAS_bool (false) ;
            GALGAS_bigint var_idx_13838 = GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 361)) ;
            cEnumerator_taskSetupListAST enumerator_13862 (var_taskSetupListAST_13610, EnumerationOrder::up) ;
            while (enumerator_13862.hasCurrentObject ()) {
              GALGAS_bool var_allPrecedenceDefined_13913 = GALGAS_bool (true) ;
              cEnumerator_lstringlist enumerator_13954 (enumerator_13862.current_mDependanceList (HERE), EnumerationOrder::up) ;
              bool bool_10 = var_allPrecedenceDefined_13913.isValidAndTrue () ;
              if (enumerator_13954.hasCurrentObject () && bool_10) {
                while (enumerator_13954.hasCurrentObject () && bool_10) {
                  var_allPrecedenceDefined_13913 = var_precedenceSet_13669.getter_hasKey (enumerator_13954.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("task-declaration.galgas", 365)) ;
                  enumerator_13954.gotoNextObject () ;
                  if (enumerator_13954.hasCurrentObject ()) {
                    bool_10 = var_allPrecedenceDefined_13913.isValidAndTrue () ;
                  }
                }
              }
              enumGalgasBool test_11 = kBoolTrue ;
              if (kBoolTrue == test_11) {
                test_11 = var_allPrecedenceDefined_13913.boolEnum () ;
                if (kBoolTrue == test_11) {
                  outArgument_outSetupOrderedList.addAssign_operation (enumerator_13862.current_mName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("task-declaration.galgas", 368)) ;
                  var_precedenceSet_13669.addAssign_operation (enumerator_13862.current_mName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("task-declaration.galgas", 369)) ;
                  var_continue_13697 = GALGAS_bool (true) ;
                  {
                  GALGAS_lstring joker_14302_2 ; // Joker input parameter
                  GALGAS_lstringlist joker_14302_1 ; // Joker input parameter
                  var_taskSetupListAST_13610.setter_removeAtIndex (joker_14302_2, joker_14302_1, var_idx_13838.getter_uint (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 371)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 371)) ;
                  }
                }
              }
              if (kBoolFalse == test_11) {
                var_idx_13838 = var_idx_13838.add_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 373)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 373)) ;
              }
              enumerator_13862.gotoNextObject () ;
            }
          }
        }
      }
      cEnumerator_taskSetupListAST enumerator_14433 (var_taskSetupListAST_13610, EnumerationOrder::up) ;
      while (enumerator_14433.hasCurrentObject ()) {
        TC_Array <FixItDescription> fixItArray12 ;
        inCompiler->emitSemanticError (enumerator_14433.current_mName (HERE).readProperty_location (), GALGAS_string ("this routine is out of execution order"), fixItArray12  COMMA_SOURCE_FILE ("task-declaration.galgas", 379)) ;
        enumerator_14433.gotoNextObject () ;
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@taskActivateFunctionIR llvmCodeGeneration'
//
//--------------------------------------------------------------------------------------------------

void cPtr_taskActivateFunctionIR::method_llvmCodeGeneration (GALGAS_string & ioArgument_ioLLVMcode,
                                                             const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                             GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_taskActivateFunctionIR temp_0 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal void @").add_operation (temp_0.readProperty_mRoutineMangledName ().readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("task-declaration.galgas", 611)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 611)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 611)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 611)) ;
  const GALGAS_taskActivateFunctionIR temp_1 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("(%").add_operation (temp_1.readProperty_mAssemblerTaskName (), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 612)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 612)).add_operation (function_llvmNameForSelf (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 612)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 612)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 612)).add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 612)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 612)).add_operation (GALGAS_string ("{\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 612)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 612)) ;
  const GALGAS_taskActivateFunctionIR temp_2 = this ;
  const GALGAS_taskActivateFunctionIR temp_3 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @").add_operation (temp_2.readProperty_mActivateServiceInvocationName (), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 613)).add_operation (GALGAS_string (" (i8 "), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 613)).add_operation (temp_3.readProperty_mTaskIndex ().getter_string (SOURCE_FILE ("task-declaration.galgas", 613)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 613)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 613)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 613)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 614)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n\n"), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 615)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(function_llvmSeparatorLine (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 616)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 616)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 617)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@taskSetupDeclarationAST enterInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_taskSetupDeclarationAST::method_enterInPrecedenceGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_taskSetupDeclarationAST temp_0 = this ;
  const GALGAS_taskSetupDeclarationAST temp_1 = this ;
  const GALGAS_taskSetupDeclarationAST temp_2 = this ;
  GALGAS_string var_s_3589 = temp_0.readProperty_mQualifier ().add_operation (temp_1.readProperty_mTaskName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 90)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 90)).add_operation (temp_2.readProperty_mSetupName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 90)).add_operation (GALGAS_string ("()"), inCompiler COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 90)) ;
  {
  const GALGAS_taskSetupDeclarationAST temp_3 = this ;
  const GALGAS_taskSetupDeclarationAST temp_4 = this ;
  ioArgument_ioGraph.setter_addNode (GALGAS_lstring::init_21__21_ (var_s_3589, temp_3.readProperty_mSetupName ().readProperty_location (), inCompiler COMMA_HERE), temp_4, inCompiler COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 91)) ;
  }
  {
  const GALGAS_taskSetupDeclarationAST temp_5 = this ;
  ioArgument_ioGraph.setter_noteNode (temp_5.readProperty_mTaskName () COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 93)) ;
  }
  const GALGAS_taskSetupDeclarationAST temp_6 = this ;
  extensionMethod_noteInstructionListTypesInPrecedenceGraph (temp_6.readProperty_mTaskSetupInstructionList (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 94)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@taskSetupDeclarationAST keyRepresentationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_taskSetupDeclarationAST::getter_keyRepresentationForErrorSignaling (Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_taskSetupDeclarationAST temp_0 = this ;
  const GALGAS_taskSetupDeclarationAST temp_1 = this ;
  result_result = GALGAS_string ("task function ").add_operation (temp_0.readProperty_mTaskName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 100)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 100)).add_operation (temp_1.readProperty_mSetupName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 100)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@taskSetupDeclarationAST locationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GALGAS_location cPtr_taskSetupDeclarationAST::getter_locationForErrorSignaling (Compiler */* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_location result_result ; // Returned variable
  const GALGAS_taskSetupDeclarationAST temp_0 = this ;
  result_result = temp_0.readProperty_mSetupName ().readProperty_location () ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@taskSetupDeclarationAST enterInContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_taskSetupDeclarationAST::method_enterInContext (GALGAS_semanticContext & /* ioArgument_ioContext */,
                                                          GALGAS_declarationDecorationList & /* ioArgument_ioDecoratedDeclarationList */,
                                                          GALGAS_decoratedRegularRoutineList & ioArgument_ioDecoratedRoutineList,
                                                          GALGAS_routineListIR & /* ioArgument_ioRoutineListIR */,
                                                          GALGAS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                          GALGAS_staticEntityMap & /* ioArgument_ioStaticEntityMap */,
                                                          GALGAS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                          GALGAS_userLLVMTypeDefinitionListIR & /* ioArgument_ioUserLLVMTypeDefinitionListIR */,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_taskSetupDeclarationAST temp_0 = this ;
  const GALGAS_taskSetupDeclarationAST temp_1 = this ;
  const GALGAS_taskSetupDeclarationAST temp_2 = this ;
  GALGAS_string var_mangledName_5430 = temp_0.readProperty_mQualifier ().add_operation (temp_1.readProperty_mTaskName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 124)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 124)).add_operation (temp_2.readProperty_mSetupName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 124)) ;
  const GALGAS_taskSetupDeclarationAST temp_3 = this ;
  const GALGAS_taskSetupDeclarationAST temp_4 = this ;
  GALGAS_routineFormalArgumentListAST temp_5 = GALGAS_routineFormalArgumentListAST::init (inCompiler COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 134)) ;
  const GALGAS_taskSetupDeclarationAST temp_6 = this ;
  const GALGAS_taskSetupDeclarationAST temp_7 = this ;
  ioArgument_ioDecoratedRoutineList.addAssign_operation (temp_3.readProperty_mTaskName (), GALGAS_mode::class_func_userMode (SOURCE_FILE ("task-setup-declaration.galgas", 127)), GALGAS_bool (true), GALGAS_routineKind::class_func_function (SOURCE_FILE ("task-setup-declaration.galgas", 129)), GALGAS_bool (true), GALGAS_bool (false), GALGAS_routineAttributes::class_func_mutatingRoutine (SOURCE_FILE ("task-setup-declaration.galgas", 132)), GALGAS_lstring::init_21__21_ (var_mangledName_5430, temp_4.readProperty_mSetupName ().readProperty_location (), inCompiler COMMA_HERE), temp_5, GALGAS_bool (true), temp_6.readProperty_mTaskSetupInstructionList (), temp_7.readProperty_mEndOfTaskSetupDeclaration (), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("task-setup-declaration.galgas", 138))  COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 125)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@functionDeclarationAST enterInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_functionDeclarationAST::method_enterInPrecedenceGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_s_4720 = GALGAS_string::makeEmptyString () ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_functionDeclarationAST temp_1 = this ;
    test_0 = GALGAS_bool (ComparisonKind::notEqual, temp_1.readProperty_mReceiverTypeName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_functionDeclarationAST temp_2 = this ;
      var_s_4720.plusAssign_operation(temp_2.readProperty_mReceiverTypeName ().readProperty_string ().add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 153)), inCompiler  COMMA_SOURCE_FILE ("declaration-function.galgas", 153)) ;
    }
  }
  const GALGAS_functionDeclarationAST temp_3 = this ;
  var_s_4720.plusAssign_operation(temp_3.readProperty_mFunctionName ().readProperty_string ().add_operation (GALGAS_string ("("), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 155)), inCompiler  COMMA_SOURCE_FILE ("declaration-function.galgas", 155)) ;
  const GALGAS_functionDeclarationAST temp_4 = this ;
  cEnumerator_routineFormalArgumentListAST enumerator_4907 (temp_4.readProperty_mFunctionFormalArgumentList (), EnumerationOrder::up) ;
  while (enumerator_4907.hasCurrentObject ()) {
    var_s_4720.plusAssign_operation(extensionGetter_formalPassingModeString (enumerator_4907.current_mFormalArgumentPassingMode (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 157)).add_operation (enumerator_4907.current_mSelector (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 157)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 157)), inCompiler  COMMA_SOURCE_FILE ("declaration-function.galgas", 157)) ;
    enumerator_4907.gotoNextObject () ;
  }
  var_s_4720.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("declaration-function.galgas", 159)) ;
  const GALGAS_functionDeclarationAST temp_5 = this ;
  GALGAS_lstring var_nodeName_5050 = GALGAS_lstring::init_21__21_ (var_s_4720, temp_5.readProperty_mFunctionName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GALGAS_functionDeclarationAST temp_6 = this ;
  ioArgument_ioGraph.setter_addNode (var_nodeName_5050, temp_6, inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 161)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (var_nodeName_5050, function_compileTimeDeclarationBarrier (inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 162)) COMMA_SOURCE_FILE ("declaration-function.galgas", 162)) ;
  }
  const GALGAS_functionDeclarationAST temp_7 = this ;
  cEnumerator_routineFormalArgumentListAST enumerator_5252 (temp_7.readProperty_mFunctionFormalArgumentList (), EnumerationOrder::up) ;
  while (enumerator_5252.hasCurrentObject ()) {
    {
    ioArgument_ioGraph.setter_noteNode (enumerator_5252.current_mFormalArgumentTypeName (HERE) COMMA_SOURCE_FILE ("declaration-function.galgas", 165)) ;
    }
    enumerator_5252.gotoNextObject () ;
  }
  const GALGAS_functionDeclarationAST temp_8 = this ;
  extensionMethod_noteInstructionListTypesInPrecedenceGraph (temp_8.readProperty_mFunctionInstructionList (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 167)) ;
  enumGalgasBool test_9 = kBoolTrue ;
  if (kBoolTrue == test_9) {
    const GALGAS_functionDeclarationAST temp_10 = this ;
    test_9 = GALGAS_bool (ComparisonKind::notEqual, temp_10.readProperty_mReceiverTypeName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_9) {
      {
      const GALGAS_functionDeclarationAST temp_11 = this ;
      ioArgument_ioGraph.setter_noteNode (temp_11.readProperty_mReceiverTypeName () COMMA_SOURCE_FILE ("declaration-function.galgas", 169)) ;
      }
    }
  }
  enumGalgasBool test_12 = kBoolTrue ;
  if (kBoolTrue == test_12) {
    const GALGAS_functionDeclarationAST temp_13 = this ;
    test_12 = GALGAS_bool (ComparisonKind::notEqual, temp_13.readProperty_mFunctionReturnTypeName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_12) {
      {
      const GALGAS_functionDeclarationAST temp_14 = this ;
      ioArgument_ioGraph.setter_noteNode (temp_14.readProperty_mFunctionReturnTypeName () COMMA_SOURCE_FILE ("declaration-function.galgas", 172)) ;
      }
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@functionDeclarationAST keyRepresentationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_functionDeclarationAST::getter_keyRepresentationForErrorSignaling (Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_functionDeclarationAST temp_0 = this ;
  const GALGAS_functionDeclarationAST temp_1 = this ;
  result_result = GALGAS_string ("function ").add_operation (temp_0.readProperty_mReceiverTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 179)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 179)).add_operation (temp_1.readProperty_mFunctionName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 179)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@functionDeclarationAST locationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GALGAS_location cPtr_functionDeclarationAST::getter_locationForErrorSignaling (Compiler */* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_location result_result ; // Returned variable
  const GALGAS_functionDeclarationAST temp_0 = this ;
  result_result = temp_0.readProperty_mFunctionName ().readProperty_location () ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@functionDeclarationAST enterInContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_functionDeclarationAST::method_enterInContext (GALGAS_semanticContext & ioArgument_ioContext,
                                                         GALGAS_declarationDecorationList & /* ioArgument_ioDecoratedDeclarationList */,
                                                         GALGAS_decoratedRegularRoutineList & ioArgument_ioDecoratedRoutineList,
                                                         GALGAS_routineListIR & /* ioArgument_ioRoutineListIR */,
                                                         GALGAS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                         GALGAS_staticEntityMap & /* ioArgument_ioStaticEntityMap */,
                                                         GALGAS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                         GALGAS_userLLVMTypeDefinitionListIR & /* ioArgument_ioUserLLVMTypeDefinitionListIR */,
                                                         Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_routineTypedSignature var_signature_7232 ;
  {
  const GALGAS_functionDeclarationAST temp_0 = this ;
  routine_routineTypedSignature_26__3F__21_ (ioArgument_ioContext.mProperty_mTypeMap, temp_0.readProperty_mFunctionFormalArgumentList (), var_signature_7232, inCompiler  COMMA_SOURCE_FILE ("declaration-function.galgas", 203)) ;
  }
  GALGAS_unifiedTypeMapEntry var_returnTypeProxy_7337 ;
  {
  const GALGAS_functionDeclarationAST temp_1 = this ;
  extensionSetter_makeOptionalEntry (ioArgument_ioContext.mProperty_mTypeMap, temp_1.readProperty_mFunctionReturnTypeName (), var_returnTypeProxy_7337, inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 205)) ;
  }
  GALGAS_bool var_warnIfUnused_7376 = GALGAS_bool (true) ;
  GALGAS_bool var_exportedFunction_7402 = GALGAS_bool (false) ;
  GALGAS_bool var_canMutateProperties_7433 = GALGAS_bool (false) ;
  const GALGAS_functionDeclarationAST temp_2 = this ;
  cEnumerator_lstringlist enumerator_7468 (temp_2.readProperty_mFunctionAttributeList (), EnumerationOrder::up) ;
  while (enumerator_7468.hasCurrentObject ()) {
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      test_3 = GALGAS_bool (ComparisonKind::equal, enumerator_7468.current_mValue (HERE).readProperty_string ().objectCompare (function_noUnusedWarningAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 211)))).boolEnum () ;
      if (kBoolTrue == test_3) {
        enumGalgasBool test_4 = kBoolTrue ;
        if (kBoolTrue == test_4) {
          test_4 = var_warnIfUnused_7376.operator_not (SOURCE_FILE ("declaration-function.galgas", 212)).boolEnum () ;
          if (kBoolTrue == test_4) {
            TC_Array <FixItDescription> fixItArray5 ;
            inCompiler->emitSemanticError (enumerator_7468.current_mValue (HERE).readProperty_location (), GALGAS_string ("duplicated @").add_operation (function_noUnusedWarningAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 213)), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 213)).add_operation (GALGAS_string (" attribute"), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 213)), fixItArray5  COMMA_SOURCE_FILE ("declaration-function.galgas", 213)) ;
          }
        }
        var_warnIfUnused_7376 = GALGAS_bool (false) ;
      }
    }
    if (kBoolFalse == test_3) {
      enumGalgasBool test_6 = kBoolTrue ;
      if (kBoolTrue == test_6) {
        test_6 = GALGAS_bool (ComparisonKind::equal, enumerator_7468.current_mValue (HERE).readProperty_string ().objectCompare (function_exportedAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 216)))).boolEnum () ;
        if (kBoolTrue == test_6) {
          enumGalgasBool test_7 = kBoolTrue ;
          if (kBoolTrue == test_7) {
            test_7 = var_exportedFunction_7402.boolEnum () ;
            if (kBoolTrue == test_7) {
              TC_Array <FixItDescription> fixItArray8 ;
              inCompiler->emitSemanticError (enumerator_7468.current_mValue (HERE).readProperty_location (), GALGAS_string ("duplicated @").add_operation (function_exportedAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 218)), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 218)).add_operation (GALGAS_string (" attribute"), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 218)), fixItArray8  COMMA_SOURCE_FILE ("declaration-function.galgas", 218)) ;
            }
          }
          var_exportedFunction_7402 = GALGAS_bool (true) ;
        }
      }
      if (kBoolFalse == test_6) {
        enumGalgasBool test_9 = kBoolTrue ;
        if (kBoolTrue == test_9) {
          test_9 = GALGAS_bool (ComparisonKind::equal, enumerator_7468.current_mValue (HERE).readProperty_string ().objectCompare (function_mutatingAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 221)))).boolEnum () ;
          if (kBoolTrue == test_9) {
            enumGalgasBool test_10 = kBoolTrue ;
            if (kBoolTrue == test_10) {
              test_10 = var_canMutateProperties_7433.boolEnum () ;
              if (kBoolTrue == test_10) {
                TC_Array <FixItDescription> fixItArray11 ;
                inCompiler->emitSemanticError (enumerator_7468.current_mValue (HERE).readProperty_location (), GALGAS_string ("duplicated @").add_operation (function_mutatingAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 223)), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 223)).add_operation (GALGAS_string (" attribute"), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 223)), fixItArray11  COMMA_SOURCE_FILE ("declaration-function.galgas", 223)) ;
              }
            }
            var_canMutateProperties_7433 = GALGAS_bool (true) ;
          }
        }
        if (kBoolFalse == test_9) {
          TC_Array <FixItDescription> fixItArray12 ;
          inCompiler->emitSemanticError (enumerator_7468.current_mValue (HERE).readProperty_location (), GALGAS_string ("unknown attribute; available attributes are @").add_operation (function_noUnusedWarningAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 228)), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 227)).add_operation (GALGAS_string (", @"), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 228)).add_operation (function_noUnusedWarningAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 228)), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 228)).add_operation (GALGAS_string (" and @"), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 228)).add_operation (function_exportedAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 228)), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 228)), fixItArray12  COMMA_SOURCE_FILE ("declaration-function.galgas", 227)) ;
        }
      }
    }
    enumerator_7468.gotoNextObject () ;
  }
  const GALGAS_functionDeclarationAST temp_13 = this ;
  const GALGAS_functionDeclarationAST temp_14 = this ;
  const GALGAS_functionDeclarationAST temp_15 = this ;
  GALGAS_lstring var_functionLLVMName_8386 = function_routineMangledNameFromAST (temp_13.readProperty_mReceiverTypeName ().readProperty_string (), temp_14.readProperty_mFunctionName (), temp_15.readProperty_mFunctionFormalArgumentList (), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 232)) ;
  const GALGAS_functionDeclarationAST temp_16 = this ;
  GALGAS_routineLLVMNameDict var_routineLLVMNameDict_8607 = extensionGetter_routineLLVMDictionaryForFunction (temp_16.readProperty_mMode (), var_functionLLVMName_8386.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 238)) ;
  const GALGAS_functionDeclarationAST temp_17 = this ;
  const GALGAS_functionDeclarationAST temp_18 = this ;
  GALGAS_lstring var_routineMangledName_8699 = extensionGetter_mangledName (var_signature_7232, temp_17.readProperty_mReceiverTypeName ().readProperty_string (), temp_18.readProperty_mFunctionName (), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 239)) ;
  {
  const GALGAS_functionDeclarationAST temp_19 = this ;
  const GALGAS_functionDeclarationAST temp_20 = this ;
  ioArgument_ioContext.mProperty_mRoutineMap.setter_insertKey (var_routineMangledName_8699, temp_19.readProperty_mPublicFunction (), var_signature_7232, var_returnTypeProxy_7337, var_routineLLVMNameDict_8607, var_exportedFunction_7402, temp_20.readProperty_mMode (), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 240)) ;
  }
  const GALGAS_functionDeclarationAST temp_21 = this ;
  const GALGAS_functionDeclarationAST temp_22 = this ;
  const GALGAS_functionDeclarationAST temp_23 = this ;
  const GALGAS_functionDeclarationAST temp_24 = this ;
  const GALGAS_functionDeclarationAST temp_25 = this ;
  const GALGAS_functionDeclarationAST temp_26 = this ;
  ioArgument_ioDecoratedRoutineList.addAssign_operation (temp_21.readProperty_mReceiverTypeName (), temp_22.readProperty_mMode (), ioArgument_ioContext.readProperty_mRequiredRoutineSet ().getter_hasKey (var_functionLLVMName_8386.readProperty_string () COMMA_SOURCE_FILE ("declaration-function.galgas", 253)), GALGAS_routineKind::class_func_function (SOURCE_FILE ("declaration-function.galgas", 254)), var_warnIfUnused_7376, var_exportedFunction_7402, GALGAS_routineAttributes::class_func_none (SOURCE_FILE ("declaration-function.galgas", 257)), var_functionLLVMName_8386, temp_23.readProperty_mFunctionFormalArgumentList (), GALGAS_bool (true), temp_24.readProperty_mFunctionInstructionList (), temp_25.readProperty_mEndOfFunctionDeclaration (), temp_26.readProperty_mFunctionReturnTypeName ()  COMMA_SOURCE_FILE ("declaration-function.galgas", 250)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@systemRoutineDeclarationAST enterInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_systemRoutineDeclarationAST::method_enterInPrecedenceGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_s_5142 = GALGAS_string::makeEmptyString () ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_systemRoutineDeclarationAST temp_1 = this ;
    test_0 = GALGAS_bool (ComparisonKind::notEqual, temp_1.readProperty_mReceiverTypeName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_systemRoutineDeclarationAST temp_2 = this ;
      var_s_5142.plusAssign_operation(temp_2.readProperty_mReceiverTypeName ().readProperty_string ().add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 169)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 169)) ;
    }
  }
  const GALGAS_systemRoutineDeclarationAST temp_3 = this ;
  var_s_5142.plusAssign_operation(temp_3.readProperty_mSystemRoutineName ().readProperty_string ().add_operation (GALGAS_string ("("), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 171)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 171)) ;
  const GALGAS_systemRoutineDeclarationAST temp_4 = this ;
  cEnumerator_routineFormalArgumentListAST enumerator_5334 (temp_4.readProperty_mFormalArgumentList (), EnumerationOrder::up) ;
  while (enumerator_5334.hasCurrentObject ()) {
    var_s_5142.plusAssign_operation(extensionGetter_formalPassingModeString (enumerator_5334.current_mFormalArgumentPassingMode (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 173)).add_operation (enumerator_5334.current_mSelector (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 173)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 173)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 173)) ;
    enumerator_5334.gotoNextObject () ;
  }
  var_s_5142.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 175)) ;
  const GALGAS_systemRoutineDeclarationAST temp_5 = this ;
  GALGAS_lstring var_nodeKey_5469 = GALGAS_lstring::init_21__21_ (var_s_5142, temp_5.readProperty_mSystemRoutineName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GALGAS_systemRoutineDeclarationAST temp_6 = this ;
  ioArgument_ioGraph.setter_addNode (var_nodeKey_5469, temp_6, inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 177)) ;
  }
  const GALGAS_systemRoutineDeclarationAST temp_7 = this ;
  cEnumerator_routineFormalArgumentListAST enumerator_5604 (temp_7.readProperty_mFormalArgumentList (), EnumerationOrder::up) ;
  while (enumerator_5604.hasCurrentObject ()) {
    {
    ioArgument_ioGraph.setter_noteNode (enumerator_5604.current_mFormalArgumentTypeName (HERE) COMMA_SOURCE_FILE ("declaration-svc.galgas", 180)) ;
    }
    enumerator_5604.gotoNextObject () ;
  }
  const GALGAS_systemRoutineDeclarationAST temp_8 = this ;
  extensionMethod_noteInstructionListTypesInPrecedenceGraph (temp_8.readProperty_mInstructionList (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 182)) ;
  enumGalgasBool test_9 = kBoolTrue ;
  if (kBoolTrue == test_9) {
    const GALGAS_systemRoutineDeclarationAST temp_10 = this ;
    test_9 = GALGAS_bool (ComparisonKind::notEqual, temp_10.readProperty_mReceiverTypeName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_9) {
      {
      const GALGAS_systemRoutineDeclarationAST temp_11 = this ;
      ioArgument_ioGraph.setter_noteNode (temp_11.readProperty_mReceiverTypeName () COMMA_SOURCE_FILE ("declaration-svc.galgas", 184)) ;
      }
      {
      const GALGAS_systemRoutineDeclarationAST temp_12 = this ;
      ioArgument_ioGraph.setter_addEdge (var_nodeKey_5469, temp_12.readProperty_mReceiverTypeName () COMMA_SOURCE_FILE ("declaration-svc.galgas", 185)) ;
      }
    }
  }
  enumGalgasBool test_13 = kBoolTrue ;
  if (kBoolTrue == test_13) {
    const GALGAS_systemRoutineDeclarationAST temp_14 = this ;
    test_13 = GALGAS_bool (ComparisonKind::notEqual, temp_14.readProperty_mReturnTypeName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_13) {
      {
      const GALGAS_systemRoutineDeclarationAST temp_15 = this ;
      ioArgument_ioGraph.setter_noteNode (temp_15.readProperty_mReturnTypeName () COMMA_SOURCE_FILE ("declaration-svc.galgas", 188)) ;
      }
      {
      const GALGAS_systemRoutineDeclarationAST temp_16 = this ;
      ioArgument_ioGraph.setter_addEdge (var_nodeKey_5469, temp_16.readProperty_mReturnTypeName () COMMA_SOURCE_FILE ("declaration-svc.galgas", 189)) ;
      }
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@systemRoutineDeclarationAST keyRepresentationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_systemRoutineDeclarationAST::getter_keyRepresentationForErrorSignaling (Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_systemRoutineDeclarationAST temp_0 = this ;
  const GALGAS_systemRoutineDeclarationAST temp_1 = this ;
  result_result = GALGAS_string ("system ").add_operation (temp_0.readProperty_mReceiverTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 196)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 196)).add_operation (temp_1.readProperty_mSystemRoutineName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 196)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@systemRoutineDeclarationAST locationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GALGAS_location cPtr_systemRoutineDeclarationAST::getter_locationForErrorSignaling (Compiler */* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_location result_result ; // Returned variable
  const GALGAS_systemRoutineDeclarationAST temp_0 = this ;
  result_result = temp_0.readProperty_mSystemRoutineName ().readProperty_location () ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Function 'systemUserMangledNameFromAST'
//
//--------------------------------------------------------------------------------------------------

GALGAS_lstring function_systemUserMangledNameFromAST (const GALGAS_string & constinArgument_inReceiverLLVMBaseTypeName,
                                                      const GALGAS_routineKind & constinArgument_inKind,
                                                      const GALGAS_lstring & constinArgument_inGuardName,
                                                      const GALGAS_routineFormalArgumentListAST & constinArgument_inFormalArgumentList,
                                                      Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  GALGAS_string var_s_7344 ;
  switch (constinArgument_inKind.enumValue ()) {
  case GALGAS_routineKind::kNotBuilt:
    break ;
  case GALGAS_routineKind::kEnum_section:
    {
      var_s_7344 = GALGAS_string ("section") ;
    }
    break ;
  case GALGAS_routineKind::kEnum_service:
    {
      var_s_7344 = GALGAS_string ("service") ;
    }
    break ;
  case GALGAS_routineKind::kEnum_primitive:
    {
      var_s_7344 = GALGAS_string ("primitive") ;
    }
    break ;
  case GALGAS_routineKind::kEnum_function:
    {
      var_s_7344 = GALGAS_string ("\?\?\?") ;
    }
    break ;
  }
  var_s_7344.plusAssign_operation(GALGAS_string (".user."), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 225)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (ComparisonKind::notEqual, constinArgument_inReceiverLLVMBaseTypeName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      var_s_7344.plusAssign_operation(constinArgument_inReceiverLLVMBaseTypeName.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 227)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 227)) ;
    }
  }
  var_s_7344.plusAssign_operation(constinArgument_inGuardName.readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 229)) ;
  var_s_7344.plusAssign_operation(GALGAS_string ("("), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 230)) ;
  cEnumerator_routineFormalArgumentListAST enumerator_7698 (constinArgument_inFormalArgumentList, EnumerationOrder::up) ;
  while (enumerator_7698.hasCurrentObject ()) {
    var_s_7344.plusAssign_operation(extensionGetter_formalPassingModeString (enumerator_7698.current_mFormalArgumentPassingMode (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 232)).add_operation (enumerator_7698.current_mSelector (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 232)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 232)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 232)) ;
    enumerator_7698.gotoNextObject () ;
  }
  var_s_7344.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 234)) ;
  result_result = GALGAS_lstring::init_21__21_ (var_s_7344, constinArgument_inGuardName.readProperty_location (), inCompiler COMMA_HERE) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_systemUserMangledNameFromAST [5] = {
  & kTypeDescriptor_GALGAS_string,
  & kTypeDescriptor_GALGAS_routineKind,
  & kTypeDescriptor_GALGAS_lstring,
  & kTypeDescriptor_GALGAS_routineFormalArgumentListAST,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_systemUserMangledNameFromAST (Compiler * inCompiler,
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

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_systemUserMangledNameFromAST ("systemUserMangledNameFromAST",
                                                                              functionWithGenericHeader_systemUserMangledNameFromAST,
                                                                              & kTypeDescriptor_GALGAS_lstring,
                                                                              4,
                                                                              functionArgs_systemUserMangledNameFromAST) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'systemImplementationMangledNameFromAST'
//
//--------------------------------------------------------------------------------------------------

GALGAS_lstring function_systemImplementationMangledNameFromAST (const GALGAS_string & constinArgument_inReceiverLLVMBaseTypeName,
                                                                const GALGAS_routineKind & constinArgument_inKind,
                                                                const GALGAS_lstring & constinArgument_inGuardName,
                                                                const GALGAS_routineFormalArgumentListAST & constinArgument_inFormalArgumentList,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  GALGAS_string var_s_8343 ;
  switch (constinArgument_inKind.enumValue ()) {
  case GALGAS_routineKind::kNotBuilt:
    break ;
  case GALGAS_routineKind::kEnum_section:
    {
      var_s_8343 = GALGAS_string ("section") ;
    }
    break ;
  case GALGAS_routineKind::kEnum_service:
    {
      var_s_8343 = GALGAS_string ("service") ;
    }
    break ;
  case GALGAS_routineKind::kEnum_primitive:
    {
      var_s_8343 = GALGAS_string ("primitive") ;
    }
    break ;
  case GALGAS_routineKind::kEnum_function:
    {
      var_s_8343 = GALGAS_string ("\?\?\?") ;
    }
    break ;
  }
  var_s_8343.plusAssign_operation(GALGAS_string (".implementation."), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 256)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (ComparisonKind::notEqual, constinArgument_inReceiverLLVMBaseTypeName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      var_s_8343.plusAssign_operation(constinArgument_inReceiverLLVMBaseTypeName.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 258)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 258)) ;
    }
  }
  var_s_8343.plusAssign_operation(constinArgument_inGuardName.readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 260)) ;
  var_s_8343.plusAssign_operation(GALGAS_string ("("), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 261)) ;
  cEnumerator_routineFormalArgumentListAST enumerator_8707 (constinArgument_inFormalArgumentList, EnumerationOrder::up) ;
  while (enumerator_8707.hasCurrentObject ()) {
    var_s_8343.plusAssign_operation(extensionGetter_formalPassingModeString (enumerator_8707.current_mFormalArgumentPassingMode (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 263)).add_operation (enumerator_8707.current_mSelector (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 263)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 263)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 263)) ;
    enumerator_8707.gotoNextObject () ;
  }
  var_s_8343.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 265)) ;
  result_result = GALGAS_lstring::init_21__21_ (var_s_8343, constinArgument_inGuardName.readProperty_location (), inCompiler COMMA_HERE) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_systemImplementationMangledNameFromAST [5] = {
  & kTypeDescriptor_GALGAS_string,
  & kTypeDescriptor_GALGAS_routineKind,
  & kTypeDescriptor_GALGAS_lstring,
  & kTypeDescriptor_GALGAS_routineFormalArgumentListAST,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_systemImplementationMangledNameFromAST (Compiler * inCompiler,
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

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_systemImplementationMangledNameFromAST ("systemImplementationMangledNameFromAST",
                                                                                        functionWithGenericHeader_systemImplementationMangledNameFromAST,
                                                                                        & kTypeDescriptor_GALGAS_lstring,
                                                                                        4,
                                                                                        functionArgs_systemImplementationMangledNameFromAST) ;

//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@systemRoutineDeclarationAST enterInContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_systemRoutineDeclarationAST::method_enterInContext (GALGAS_semanticContext & ioArgument_ioContext,
                                                              GALGAS_declarationDecorationList & /* ioArgument_ioDecoratedDeclarationList */,
                                                              GALGAS_decoratedRegularRoutineList & ioArgument_ioDecoratedRoutineList,
                                                              GALGAS_routineListIR & ioArgument_ioRoutineListIR,
                                                              GALGAS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                              GALGAS_staticEntityMap & /* ioArgument_ioStaticEntityMap */,
                                                              GALGAS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                              GALGAS_userLLVMTypeDefinitionListIR & /* ioArgument_ioUserLLVMTypeDefinitionListIR */,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapEntry var_selfTypeProxy_9953 ;
  {
  const GALGAS_systemRoutineDeclarationAST temp_0 = this ;
  extensionSetter_makeOptionalEntry (ioArgument_ioContext.mProperty_mTypeMap, temp_0.readProperty_mReceiverTypeName (), var_selfTypeProxy_9953, inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 284)) ;
  }
  GALGAS_string temp_1 ;
  const enumGalgasBool test_2 = var_selfTypeProxy_9953.getter_isNull (SOURCE_FILE ("declaration-svc.galgas", 286)).boolEnum () ;
  if (kBoolTrue == test_2) {
    temp_1 = GALGAS_string::makeEmptyString () ;
  }else if (kBoolFalse == test_2) {
    temp_1 = extensionGetter_type (var_selfTypeProxy_9953, inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 286)).readProperty_llvmBaseTypeName () ;
  }
  GALGAS_string var_receiverLLVMBaseTypeName_9999 = temp_1 ;
  GALGAS_stringset temp_3 = GALGAS_stringset::init (inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 288)) ;
  GALGAS_stringset var_attributeSet_10140 = temp_3 ;
  const GALGAS_systemRoutineDeclarationAST temp_4 = this ;
  cEnumerator_lstringlist enumerator_10183 (temp_4.readProperty_mAttributeList (), EnumerationOrder::up) ;
  while (enumerator_10183.hasCurrentObject ()) {
    var_attributeSet_10140.addAssign_operation (enumerator_10183.current (HERE).readProperty_mValue ().readProperty_string ()  COMMA_SOURCE_FILE ("declaration-svc.galgas", 290)) ;
    enumerator_10183.gotoNextObject () ;
  }
  GALGAS_routineKind var_routineKind_10276 ;
  const GALGAS_systemRoutineDeclarationAST temp_5 = this ;
  switch (temp_5.readProperty_mMode ().enumValue ()) {
  case GALGAS_mode::kNotBuilt:
    break ;
  case GALGAS_mode::kEnum_sectionMode:
  case GALGAS_mode::kEnum_safeSectionMode:
    {
      var_routineKind_10276 = GALGAS_routineKind::class_func_section (SOURCE_FILE ("declaration-svc.galgas", 296)) ;
    }
    break ;
  case GALGAS_mode::kEnum_serviceMode:
  case GALGAS_mode::kEnum_safeServiceMode:
    {
      var_routineKind_10276 = GALGAS_routineKind::class_func_service (SOURCE_FILE ("declaration-svc.galgas", 298)) ;
    }
    break ;
  case GALGAS_mode::kEnum_primitiveMode:
  case GALGAS_mode::kEnum_safePrimitiveMode:
    {
      var_routineKind_10276 = GALGAS_routineKind::class_func_primitive (SOURCE_FILE ("declaration-svc.galgas", 300)) ;
    }
    break ;
  case GALGAS_mode::kEnum_userMode:
  case GALGAS_mode::kEnum_safeUserMode:
  case GALGAS_mode::kEnum_anyMode:
  case GALGAS_mode::kEnum_anySafeMode:
  case GALGAS_mode::kEnum_bootMode:
  case GALGAS_mode::kEnum_guardMode:
  case GALGAS_mode::kEnum_panicMode:
  case GALGAS_mode::kEnum_safeGuardMode:
  case GALGAS_mode::kEnum_startupMode:
    {
      const GALGAS_systemRoutineDeclarationAST temp_6 = this ;
      TC_Array <FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (temp_6.readProperty_mSystemRoutineName ().readProperty_location (), GALGAS_string ("internal error"), fixItArray7  COMMA_SOURCE_FILE ("declaration-svc.galgas", 302)) ;
      var_routineKind_10276.drop () ; // Release error dropped variable
    }
    break ;
  }
  const GALGAS_systemRoutineDeclarationAST temp_8 = this ;
  const GALGAS_systemRoutineDeclarationAST temp_9 = this ;
  GALGAS_lstring var_userRoutineMangledName_10729 = function_systemUserMangledNameFromAST (var_receiverLLVMBaseTypeName_9999, var_routineKind_10276, temp_8.readProperty_mSystemRoutineName (), temp_9.readProperty_mFormalArgumentList (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 305)) ;
  const GALGAS_systemRoutineDeclarationAST temp_10 = this ;
  const GALGAS_systemRoutineDeclarationAST temp_11 = this ;
  GALGAS_lstring var_implementationRoutineMangledName_10901 = function_systemImplementationMangledNameFromAST (var_receiverLLVMBaseTypeName_9999, var_routineKind_10276, temp_10.readProperty_mSystemRoutineName (), temp_11.readProperty_mFormalArgumentList (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 311)) ;
  GALGAS_routineTypedSignature var_signature_11179 ;
  {
  const GALGAS_systemRoutineDeclarationAST temp_12 = this ;
  routine_routineTypedSignature_26__3F__21_ (ioArgument_ioContext.mProperty_mTypeMap, temp_12.readProperty_mFormalArgumentList (), var_signature_11179, inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 318)) ;
  }
  GALGAS_unifiedTypeMapEntry var_returnTypeProxy_11277 ;
  {
  const GALGAS_systemRoutineDeclarationAST temp_13 = this ;
  extensionSetter_makeOptionalEntry (ioArgument_ioContext.mProperty_mTypeMap, temp_13.readProperty_mReturnTypeName (), var_returnTypeProxy_11277, inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 320)) ;
  }
  GALGAS_bool var_mutatingRoutine_11316 = GALGAS_bool (false) ;
  GALGAS_bool var_noUnusedWarning_11346 = GALGAS_bool (false) ;
  const GALGAS_systemRoutineDeclarationAST temp_14 = this ;
  cEnumerator_lstringlist enumerator_11377 (temp_14.readProperty_mAttributeList (), EnumerationOrder::up) ;
  while (enumerator_11377.hasCurrentObject ()) {
    enumGalgasBool test_15 = kBoolTrue ;
    if (kBoolTrue == test_15) {
      test_15 = GALGAS_bool (ComparisonKind::equal, enumerator_11377.current_mValue (HERE).readProperty_string ().objectCompare (function_noUnusedWarningAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 325)))).boolEnum () ;
      if (kBoolTrue == test_15) {
        enumGalgasBool test_16 = kBoolTrue ;
        if (kBoolTrue == test_16) {
          test_16 = var_noUnusedWarning_11346.boolEnum () ;
          if (kBoolTrue == test_16) {
            TC_Array <FixItDescription> fixItArray17 ;
            fixItArray17.appendObject (FixItDescription (kFixItRemove, "")) ;
            inCompiler->emitSemanticError (enumerator_11377.current_mValue (HERE).readProperty_location (), GALGAS_string ("duplicated @").add_operation (function_noUnusedWarningAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 327)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 327)).add_operation (GALGAS_string (" attribute"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 327)), fixItArray17  COMMA_SOURCE_FILE ("declaration-svc.galgas", 327)) ;
          }
        }
        var_noUnusedWarning_11346 = GALGAS_bool (true) ;
      }
    }
    if (kBoolFalse == test_15) {
      enumGalgasBool test_18 = kBoolTrue ;
      if (kBoolTrue == test_18) {
        test_18 = GALGAS_bool (ComparisonKind::equal, enumerator_11377.current_mValue (HERE).readProperty_string ().objectCompare (function_mutatingAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 330)))).boolEnum () ;
        if (kBoolTrue == test_18) {
          enumGalgasBool test_19 = kBoolTrue ;
          if (kBoolTrue == test_19) {
            test_19 = var_mutatingRoutine_11316.boolEnum () ;
            if (kBoolTrue == test_19) {
              TC_Array <FixItDescription> fixItArray20 ;
              fixItArray20.appendObject (FixItDescription (kFixItRemove, "")) ;
              inCompiler->emitSemanticError (enumerator_11377.current_mValue (HERE).readProperty_location (), GALGAS_string ("duplicated @").add_operation (function_mutatingAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 332)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 332)).add_operation (GALGAS_string (" attribute"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 332)), fixItArray20  COMMA_SOURCE_FILE ("declaration-svc.galgas", 332)) ;
            }
          }
          var_mutatingRoutine_11316 = GALGAS_bool (true) ;
        }
      }
      if (kBoolFalse == test_18) {
        TC_Array <FixItDescription> fixItArray21 ;
        fixItArray21.appendObject (FixItDescription (kFixItRemove, "")) ;
        inCompiler->emitSemanticError (enumerator_11377.current_mValue (HERE).readProperty_location (), GALGAS_string ("unknown attribute; available attributes are @").add_operation (function_mutatingAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 337)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 337)).add_operation (GALGAS_string (", @"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 337)).add_operation (function_noUnusedWarningAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 337)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 337)), fixItArray21  COMMA_SOURCE_FILE ("declaration-svc.galgas", 336)) ;
      }
    }
    enumerator_11377.gotoNextObject () ;
  }
  GALGAS_routineAttributes var_attributes_12086 = GALGAS_routineAttributes::class_func_mutatingRoutine (SOURCE_FILE ("declaration-svc.galgas", 341)) ;
  const GALGAS_systemRoutineDeclarationAST temp_22 = this ;
  GALGAS_routineLLVMNameDict var_routineLLVMNameDict_12169 = extensionGetter_routineLLVMDictionaryForSystemRoutine (temp_22.readProperty_mMode (), var_userRoutineMangledName_10729.readProperty_string (), var_implementationRoutineMangledName_10901.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 343)) ;
  const GALGAS_systemRoutineDeclarationAST temp_23 = this ;
  const GALGAS_systemRoutineDeclarationAST temp_24 = this ;
  GALGAS_lstring var_routineMangledName_12317 = extensionGetter_mangledName (var_signature_11179, temp_23.readProperty_mReceiverTypeName ().readProperty_string (), temp_24.readProperty_mSystemRoutineName (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 347)) ;
  {
  const GALGAS_systemRoutineDeclarationAST temp_25 = this ;
  const GALGAS_systemRoutineDeclarationAST temp_26 = this ;
  ioArgument_ioContext.mProperty_mRoutineMap.setter_insertKey (var_routineMangledName_12317, temp_25.readProperty_mPublic (), var_signature_11179, var_returnTypeProxy_11277, var_routineLLVMNameDict_12169, GALGAS_bool (true), temp_26.readProperty_mMode (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 348)) ;
  }
  const GALGAS_systemRoutineDeclarationAST temp_27 = this ;
  const GALGAS_systemRoutineDeclarationAST temp_28 = this ;
  const GALGAS_systemRoutineDeclarationAST temp_29 = this ;
  const GALGAS_systemRoutineDeclarationAST temp_30 = this ;
  const GALGAS_systemRoutineDeclarationAST temp_31 = this ;
  const GALGAS_systemRoutineDeclarationAST temp_32 = this ;
  ioArgument_ioDecoratedRoutineList.addAssign_operation (temp_27.readProperty_mReceiverTypeName (), temp_28.readProperty_mMode (), GALGAS_bool (false), var_routineKind_10276, var_noUnusedWarning_11346.operator_not (SOURCE_FILE ("declaration-svc.galgas", 363)), GALGAS_bool (true), var_attributes_12086, var_implementationRoutineMangledName_10901, temp_29.readProperty_mFormalArgumentList (), var_noUnusedWarning_11346, temp_30.readProperty_mInstructionList (), temp_31.readProperty_mEndOfInstructionListLocation (), temp_32.readProperty_mReturnTypeName ()  COMMA_SOURCE_FILE ("declaration-svc.galgas", 358)) ;
  ioArgument_ioRoutineListIR.addAssign_operation (GALGAS_systemUserRoutineIR::init_21__21_isRequired_21_warnsIfUnused_21__21__21__21__21_ (var_userRoutineMangledName_10729, GALGAS_bool (false), GALGAS_bool (false), var_implementationRoutineMangledName_10901.readProperty_string (), var_signature_11179, var_selfTypeProxy_9953, GALGAS_bool (ComparisonKind::equal, var_routineKind_10276.objectCompare (GALGAS_routineKind::class_func_section (SOURCE_FILE ("declaration-svc.galgas", 380)))), var_returnTypeProxy_11277, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-svc.galgas", 373)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Function 'llvmFunctionPrototype'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string function_llvmFunctionPrototype (const GALGAS_string & constinArgument_inReturnTypeLLVMName,
                                              const GALGAS_string & constinArgument_inFunctionName,
                                              const GALGAS_omnibusType & constinArgument_inReceiverType,
                                              const GALGAS_routineFormalArgumentListIR & constinArgument_inFormalArgumentListForGeneration,
                                              Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = constinArgument_inReturnTypeLLVMName ;
  result_result.plusAssign_operation(GALGAS_string (" @").add_operation (constinArgument_inFunctionName, inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 412)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 412)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 412)) ;
  GALGAS_bool var_first_14796 = GALGAS_bool (true) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (ComparisonKind::notEqual, constinArgument_inReceiverType.readProperty_kind ().objectCompare (GALGAS_typeKind::class_func_void (SOURCE_FILE ("declaration-svc.galgas", 414)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      result_result.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inReceiverType.ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 415)).add_operation (GALGAS_string (" * %receiver"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 415)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 415)) ;
      var_first_14796 = GALGAS_bool (false) ;
    }
  }
  cEnumerator_routineFormalArgumentListIR enumerator_14980 (constinArgument_inFormalArgumentListForGeneration, EnumerationOrder::up) ;
  while (enumerator_14980.hasCurrentObject ()) {
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = var_first_14796.boolEnum () ;
      if (kBoolTrue == test_1) {
        var_first_14796 = GALGAS_bool (false) ;
      }
    }
    if (kBoolFalse == test_1) {
      result_result.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 422)) ;
    }
    switch (enumerator_14980.current_mFormalArgumentKind (HERE).enumValue ()) {
    case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_input:
      {
        result_result.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_14980.current_mFormalArgumentType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 426)).add_operation (GALGAS_string (" %in."), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 426)).add_operation (enumerator_14980.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 426)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 426)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_output:
      {
        result_result.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_14980.current_mFormalArgumentType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 428)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 428)).add_operation (function_llvmNameForLocalVariable (enumerator_14980.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 428)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 428)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 428)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
      {
        result_result.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_14980.current_mFormalArgumentType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 430)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 430)).add_operation (function_llvmNameForLocalVariable (enumerator_14980.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 430)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 430)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 430)) ;
      }
      break ;
    }
    enumerator_14980.gotoNextObject () ;
  }
  result_result.plusAssign_operation(GALGAS_string (")").add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 433)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 433)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 433)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_llvmFunctionPrototype [5] = {
  & kTypeDescriptor_GALGAS_string,
  & kTypeDescriptor_GALGAS_string,
  & kTypeDescriptor_GALGAS_omnibusType,
  & kTypeDescriptor_GALGAS_routineFormalArgumentListIR,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_llvmFunctionPrototype (Compiler * inCompiler,
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

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_llvmFunctionPrototype ("llvmFunctionPrototype",
                                                                       functionWithGenericHeader_llvmFunctionPrototype,
                                                                       & kTypeDescriptor_GALGAS_string,
                                                                       4,
                                                                       functionArgs_llvmFunctionPrototype) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'generateSectionDispatcher???targetParameters&?'
//
//--------------------------------------------------------------------------------------------------

void routine_generateSectionDispatcher_3F__3F__3F_targetParameters_26__3F_ (const GALGAS_string constinArgument_inCurrentDirectory,
                                                                            const GALGAS_string constinArgument_inTargetName,
                                                                            const GALGAS_targetParameters constinArgument_inTargetParameters,
                                                                            GALGAS_string & ioArgument_ioAssemblerCode,
                                                                            const GALGAS_sectionIRlist constinArgument_inSectionIRlist,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_sectionIRlist enumerator_15927 (constinArgument_inSectionIRlist, EnumerationOrder::up) ;
  GALGAS_uint index_15912 (uint32_t (0)) ;
  while (enumerator_15927.hasCurrentObject ()) {
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = enumerator_15927.current (HERE).readProperty_invocationFromAnyMode ().boolEnum () ;
      if (kBoolTrue == test_0) {
        GALGAS_string var_s_16004 = function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 449)).add_operation (constinArgument_inTargetParameters.readProperty_mSectionDispatcherInvocationFromAnyMode ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 449)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 447)) ;
        var_s_16004 = var_s_16004.getter_stringByReplacingStringByString (GALGAS_string ("!USER_ROUTINE!"), enumerator_15927.current (HERE).readProperty_mSectionCallName (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 451)) ;
        var_s_16004 = var_s_16004.getter_stringByReplacingStringByString (GALGAS_string ("!IMPLEMENTATION_ROUTINE!"), enumerator_15927.current (HERE).readProperty_mSectionImplementationName (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 452)) ;
        var_s_16004 = var_s_16004.getter_stringByReplacingStringByString (GALGAS_string ("!IDX!"), index_15912.getter_string (SOURCE_FILE ("declaration-svc.galgas", 453)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 453)) ;
        ioArgument_ioAssemblerCode.plusAssign_operation(var_s_16004, inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 454)) ;
      }
    }
    if (kBoolFalse == test_0) {
      GALGAS_string var_s_16484 = function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 458)).add_operation (constinArgument_inTargetParameters.readProperty_mSectionDispatcherInvocationFromUserMode ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 458)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 456)) ;
      var_s_16484 = var_s_16484.getter_stringByReplacingStringByString (GALGAS_string ("!USER_ROUTINE!"), enumerator_15927.current (HERE).readProperty_mSectionCallName (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 460)) ;
      var_s_16484 = var_s_16484.getter_stringByReplacingStringByString (GALGAS_string ("!IMPLEMENTATION_ROUTINE!"), enumerator_15927.current (HERE).readProperty_mSectionImplementationName (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 461)) ;
      var_s_16484 = var_s_16484.getter_stringByReplacingStringByString (GALGAS_string ("!IDX!"), index_15912.getter_string (SOURCE_FILE ("declaration-svc.galgas", 462)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 462)) ;
      ioArgument_ioAssemblerCode.plusAssign_operation(var_s_16484, inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 463)) ;
    }
    enumerator_15927.gotoNextObject () ;
    index_15912.increment_operation (inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 445)) ;
  }
  ioArgument_ioAssemblerCode.plusAssign_operation(function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 468)).add_operation (constinArgument_inTargetParameters.readProperty_mSectionDispatcherHeader ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 468)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 466)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 466)) ;
  cEnumerator_sectionIRlist enumerator_17150 (constinArgument_inSectionIRlist, EnumerationOrder::up) ;
  GALGAS_uint index_17117 (uint32_t (0)) ;
  while (enumerator_17150.hasCurrentObject ()) {
    GALGAS_string var_s_17189 = function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 473)).add_operation (constinArgument_inTargetParameters.readProperty_mSectionDispatcherEntry ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 473)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 471)) ;
    var_s_17189 = var_s_17189.getter_stringByReplacingStringByString (GALGAS_string ("!USER_ROUTINE!"), enumerator_17150.current_mSectionCallName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 475)) ;
    var_s_17189 = var_s_17189.getter_stringByReplacingStringByString (GALGAS_string ("!IMPLEMENTATION_ROUTINE!"), enumerator_17150.current_mSectionImplementationName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 476)) ;
    var_s_17189 = var_s_17189.getter_stringByReplacingStringByString (GALGAS_string ("!IDX!"), index_17117.getter_string (SOURCE_FILE ("declaration-svc.galgas", 477)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 477)) ;
    ioArgument_ioAssemblerCode.plusAssign_operation(var_s_17189, inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 478)) ;
    enumerator_17150.gotoNextObject () ;
    index_17117.increment_operation (inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 470)) ;
  }
  ioArgument_ioAssemblerCode.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 480)) ;
  ioArgument_ioAssemblerCode.plusAssign_operation(function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 483)).add_operation (constinArgument_inTargetParameters.readProperty_mSectionHandler ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 483)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 481)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 481)) ;
  ioArgument_ioAssemblerCode.plusAssign_operation(GALGAS_string ("@-------------------------------------------------------------"), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 485)) ;
  ioArgument_ioAssemblerCode.plusAssign_operation(GALGAS_string ("---------------------------------------------------------*\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 486)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'generatePrimitiveAndServiceDispatcher??&??targetParameters'
//
//--------------------------------------------------------------------------------------------------

void routine_generatePrimitiveAndServiceDispatcher_3F__3F__26__3F__3F_targetParameters (const GALGAS_string constinArgument_inCurrentDirectory,
                                                                                        const GALGAS_string constinArgument_inTargetName,
                                                                                        GALGAS_string & ioArgument_ioAssemblerCode,
                                                                                        const GALGAS_primitiveAndServiceIRlist constinArgument_inServiceList,
                                                                                        const GALGAS_targetParameters constinArgument_inTargetParameters,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioAssemblerCode.plusAssign_operation(function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 501)).add_operation (constinArgument_inTargetParameters.readProperty_mServiceHandler ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 501)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 499)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 499)) ;
  cEnumerator_primitiveAndServiceIRlist enumerator_18503 (constinArgument_inServiceList, EnumerationOrder::up) ;
  GALGAS_uint index_18488 (uint32_t (0)) ;
  while (enumerator_18503.hasCurrentObject ()) {
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = enumerator_18503.current (HERE).readProperty_mHasReturnValue ().boolEnum () ;
      if (kBoolTrue == test_0) {
        GALGAS_string var_s_18572 = function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 508)).add_operation (constinArgument_inTargetParameters.readProperty_mServiceEntryWithReturnValue ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 508)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 506)) ;
        var_s_18572 = var_s_18572.getter_stringByReplacingStringByString (GALGAS_string ("!ENTRY!"), enumerator_18503.current (HERE).readProperty_mCallName (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 510)) ;
        var_s_18572 = var_s_18572.getter_stringByReplacingStringByString (GALGAS_string ("!IDX!"), index_18488.getter_string (SOURCE_FILE ("declaration-svc.galgas", 511)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 511)) ;
        ioArgument_ioAssemblerCode.plusAssign_operation(var_s_18572, inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 512)) ;
      }
    }
    if (kBoolFalse == test_0) {
      GALGAS_string var_s_18917 = function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 516)).add_operation (constinArgument_inTargetParameters.readProperty_mServiceEntryNoReturnedValue ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 516)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 514)) ;
      var_s_18917 = var_s_18917.getter_stringByReplacingStringByString (GALGAS_string ("!ENTRY!"), enumerator_18503.current (HERE).readProperty_mCallName (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 518)) ;
      var_s_18917 = var_s_18917.getter_stringByReplacingStringByString (GALGAS_string ("!IDX!"), index_18488.getter_string (SOURCE_FILE ("declaration-svc.galgas", 519)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 519)) ;
      ioArgument_ioAssemblerCode.plusAssign_operation(var_s_18917, inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 520)) ;
    }
    enumerator_18503.gotoNextObject () ;
    index_18488.increment_operation (inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 504)) ;
  }
  ioArgument_ioAssemblerCode.plusAssign_operation(function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 525)).add_operation (constinArgument_inTargetParameters.readProperty_mServiceDispatcherHeader ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 525)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 523)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 523)) ;
  cEnumerator_primitiveAndServiceIRlist enumerator_19429 (constinArgument_inServiceList, EnumerationOrder::up) ;
  GALGAS_uint index_19414 (uint32_t (0)) ;
  while (enumerator_19429.hasCurrentObject ()) {
    GALGAS_string var_s_19460 = function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 530)).add_operation (constinArgument_inTargetParameters.readProperty_mServiceDispatcherEntry ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 530)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 528)) ;
    var_s_19460 = var_s_19460.getter_stringByReplacingStringByString (GALGAS_string ("!ENTRY!"), enumerator_19429.current (HERE).readProperty_mImplementationName (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 532)) ;
    var_s_19460 = var_s_19460.getter_stringByReplacingStringByString (GALGAS_string ("!IDX!"), index_19414.getter_string (SOURCE_FILE ("declaration-svc.galgas", 533)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 533)) ;
    ioArgument_ioAssemblerCode.plusAssign_operation(var_s_19460, inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 534)) ;
    enumerator_19429.gotoNextObject () ;
    index_19414.increment_operation (inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 527)) ;
  }
  ioArgument_ioAssemblerCode.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 536)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@systemUserRoutineIR enterAccessibleEntities'
//
//--------------------------------------------------------------------------------------------------

void cPtr_systemUserRoutineIR::method_enterAccessibleEntities (GALGAS_stringset & ioArgument_ioInvokedRoutineSet,
                                                               GALGAS_uint & /* ioArgument_ioMaxBranchOfOnInstructions */,
                                                               Compiler * /* inCompiler */
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_systemUserRoutineIR temp_0 = this ;
  ioArgument_ioInvokedRoutineSet.addAssign_operation (temp_0.readProperty_mMangledImplementationName ()  COMMA_SOURCE_FILE ("declaration-svc.galgas", 557)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@systemUserRoutineIR svcDeclarationGeneration'
//
//--------------------------------------------------------------------------------------------------

void cPtr_systemUserRoutineIR::method_svcDeclarationGeneration (GALGAS_primitiveAndServiceIRlist & ioArgument_ioPrimitiveAndServiceList,
                                                                GALGAS_sectionIRlist & ioArgument_ioSectionList,
                                                                GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                Compiler * /* inCompiler */
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_systemUserRoutineIR temp_0 = this ;
  GALGAS_string var_userMangledName_21064 = temp_0.readProperty_mRoutineMangledName ().readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("declaration-svc.galgas", 567)) ;
  const GALGAS_systemUserRoutineIR temp_1 = this ;
  GALGAS_string var_implementationMangledName_21139 = temp_1.readProperty_mMangledImplementationName ().getter_assemblerRepresentation (SOURCE_FILE ("declaration-svc.galgas", 568)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    const GALGAS_systemUserRoutineIR temp_3 = this ;
    test_2 = temp_3.readProperty_mIsSection ().boolEnum () ;
    if (kBoolTrue == test_2) {
      ioArgument_ioSectionList.addAssign_operation (var_userMangledName_21064, var_implementationMangledName_21139, GALGAS_bool (false)  COMMA_SOURCE_FILE ("declaration-svc.galgas", 570)) ;
    }
  }
  if (kBoolFalse == test_2) {
    ioArgument_ioPrimitiveAndServiceList.addAssign_operation (var_userMangledName_21064, var_implementationMangledName_21139, GALGAS_bool (false)  COMMA_SOURCE_FILE ("declaration-svc.galgas", 572)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@systemUserRoutineIR llvmCodeGeneration'
//
//--------------------------------------------------------------------------------------------------

void cPtr_systemUserRoutineIR::method_llvmCodeGeneration (GALGAS_string & ioArgument_ioLLVMcode,
                                                          const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                          GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("declare "), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 583)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_systemUserRoutineIR temp_1 = this ;
    test_0 = GALGAS_bool (ComparisonKind::equal, temp_1.readProperty_mReturnTypeProxy ().objectCompare (GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-svc.galgas", 584)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("void"), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 585)) ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_systemUserRoutineIR temp_2 = this ;
    ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (temp_2.readProperty_mReturnTypeProxy (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 587)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 587)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 587)) ;
  }
  const GALGAS_systemUserRoutineIR temp_3 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" @").add_operation (temp_3.readProperty_mRoutineMangledName ().readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("declaration-svc.galgas", 589)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 589)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 589)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 589)) ;
  GALGAS_bool var_first_22002 = GALGAS_bool (true) ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    const GALGAS_systemUserRoutineIR temp_5 = this ;
    test_4 = GALGAS_bool (ComparisonKind::notEqual, temp_5.readProperty_mReceiverTypeProxy ().objectCompare (GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-svc.galgas", 591)))).boolEnum () ;
    if (kBoolTrue == test_4) {
      const GALGAS_systemUserRoutineIR temp_6 = this ;
      ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (temp_6.readProperty_mReceiverTypeProxy (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 592)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 592)).add_operation (GALGAS_string ("* %receiver"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 592)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 592)) ;
      var_first_22002 = GALGAS_bool (false) ;
    }
  }
  const GALGAS_systemUserRoutineIR temp_7 = this ;
  cEnumerator_routineTypedSignature enumerator_22209 (temp_7.readProperty_mFormalArgumentList (), EnumerationOrder::up) ;
  while (enumerator_22209.hasCurrentObject ()) {
    enumGalgasBool test_8 = kBoolTrue ;
    if (kBoolTrue == test_8) {
      test_8 = var_first_22002.boolEnum () ;
      if (kBoolTrue == test_8) {
        var_first_22002 = GALGAS_bool (false) ;
      }
    }
    if (kBoolFalse == test_8) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 599)) ;
    }
    switch (enumerator_22209.current_mFormalArgumentPassingMode (HERE).enumValue ()) {
    case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_input:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (enumerator_22209.current_mTypeProxy (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 603)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 603)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 603)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_output:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (enumerator_22209.current_mTypeProxy (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 605)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 605)).add_operation (GALGAS_string ("*"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 605)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 605)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (enumerator_22209.current_mTypeProxy (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 607)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 607)).add_operation (GALGAS_string ("*"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 607)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 607)) ;
      }
      break ;
    }
    enumerator_22209.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (")").add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 610)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 610)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 610)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 610)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Routine 'checkRequiredProcedures?ast?context?endOfSourceFile'
//
//--------------------------------------------------------------------------------------------------

void routine_checkRequiredProcedures_3F_ast_3F_context_3F_endOfSourceFile (const GALGAS_ast constinArgument_inAST,
                                                                           const GALGAS_semanticContext constinArgument_inContext,
                                                                           const GALGAS_location /* constinArgument_inEndOfSourceFile */,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_requiredFunctionDeclarationListAST enumerator_2308 (constinArgument_inAST.readProperty_mRequiredFunctionListAST (), EnumerationOrder::up) ;
  while (enumerator_2308.hasCurrentObject ()) {
    GALGAS_lstring var_requiredFunctionSignature_2344 = extensionGetter_routineSignature (enumerator_2308.current (HERE).readProperty_mFormalArgumentList (), enumerator_2308.current (HERE).readProperty_mName ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 61)) ;
    GALGAS_string var_requiredFunctionMangledName_2460 = enumerator_2308.current (HERE).readProperty_mName ().readProperty_string ().add_operation (var_requiredFunctionSignature_2344.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 62)) ;
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = constinArgument_inContext.readProperty_mRoutineMap ().getter_hasKey (var_requiredFunctionMangledName_2460 COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 63)).operator_not (SOURCE_FILE ("declaration-required-proc.galgas", 63)).boolEnum () ;
      if (kBoolTrue == test_0) {
        TC_Array <FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (enumerator_2308.current (HERE).readProperty_mName ().readProperty_location (), GALGAS_string ("required func is not implemented"), fixItArray1  COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 64)) ;
      }
    }
    if (kBoolFalse == test_0) {
      GALGAS_bool var_implementedPublic_2804 ;
      GALGAS_routineTypedSignature var_implementedSignature_2835 ;
      GALGAS_unifiedTypeMapEntry var_implementedReturnTypeProxy_2869 ;
      GALGAS_routineLLVMNameDict var_implementedModeDictionary_2944 ;
      GALGAS_bool var_implementedIsExported_2983 ;
      GALGAS_mode var_implementedMode_3018 ;
      constinArgument_inContext.readProperty_mRoutineMap ().method_searchKey (var_requiredFunctionMangledName_2460.getter_nowhere (SOURCE_FILE ("declaration-required-proc.galgas", 67)), var_implementedPublic_2804, var_implementedSignature_2835, var_implementedReturnTypeProxy_2869, var_implementedModeDictionary_2944, var_implementedIsExported_2983, var_implementedMode_3018, inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 66)) ;
      GALGAS_location var_errorLocation_3052 = constinArgument_inContext.readProperty_mRoutineMap ().getter_locationForKey (var_requiredFunctionMangledName_2460, inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 75)) ;
      GALGAS_routineTypedSignature var_requiredTypedSignature_3255 ;
      {
      routine_routineTypedSignature_32__3F__3F__21_ (constinArgument_inContext.readProperty_mTypeMap (), enumerator_2308.current (HERE).readProperty_mFormalArgumentList (), var_requiredTypedSignature_3255, inCompiler  COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 77)) ;
      }
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = GALGAS_bool (ComparisonKind::notEqual, extensionGetter_typedString (var_requiredTypedSignature_3255, inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 78)).objectCompare (extensionGetter_typedString (var_implementedSignature_2835, inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 78)))).boolEnum () ;
        if (kBoolTrue == test_2) {
          TC_Array <FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (var_errorLocation_3052, GALGAS_string ("function signature should be ").add_operation (extensionGetter_typedString (var_requiredTypedSignature_3255, inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 80)), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 80)).add_operation (GALGAS_string (" (as required by required function declaration)"), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 80)), fixItArray3  COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 79)) ;
        }
      }
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        test_4 = GALGAS_bool (ComparisonKind::notEqual, var_implementedReturnTypeProxy_2869.objectCompare (GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-required-proc.galgas", 83)))).boolEnum () ;
        if (kBoolTrue == test_4) {
          TC_Array <FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (var_errorLocation_3052, GALGAS_string ("function should not return a value (as required by required function declaration)"), fixItArray5  COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 84)) ;
        }
      }
      enumGalgasBool test_6 = kBoolTrue ;
      if (kBoolTrue == test_6) {
        test_6 = GALGAS_bool (ComparisonKind::notEqual, var_implementedMode_3018.objectCompare (enumerator_2308.current (HERE).readProperty_mExecutionMode ())).boolEnum () ;
        if (kBoolTrue == test_6) {
          TC_Array <FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (var_errorLocation_3052, GALGAS_string ("required mode is '").add_operation (extensionGetter_string (enumerator_2308.current (HERE).readProperty_mExecutionMode (), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 96)), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 96)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 96)), fixItArray7  COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 96)) ;
        }
      }
      enumGalgasBool test_8 = kBoolTrue ;
      if (kBoolTrue == test_8) {
        test_8 = var_implementedPublic_2804.operator_not (SOURCE_FILE ("declaration-required-proc.galgas", 99)).boolEnum () ;
        if (kBoolTrue == test_8) {
          TC_Array <FixItDescription> fixItArray9 ;
          inCompiler->emitSemanticError (var_errorLocation_3052, GALGAS_string ("function should be public (as required by required function declaration)"), fixItArray9  COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 100)) ;
        }
      }
      enumGalgasBool test_10 = kBoolTrue ;
      if (kBoolTrue == test_10) {
        GALGAS_bool test_11 = enumerator_2308.current (HERE).readProperty_mIsExported () ;
        if (kBoolTrue == test_11.boolEnum ()) {
          test_11 = var_implementedIsExported_2983.operator_not (SOURCE_FILE ("declaration-required-proc.galgas", 103)) ;
        }
        test_10 = test_11.boolEnum () ;
        if (kBoolTrue == test_10) {
          TC_Array <FixItDescription> fixItArray12 ;
          appendFixItActions (fixItArray12, kFixItInsertAfter, GALGAS_string (" @").add_operation (function_exportedAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 106)), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 106))) ;
          inCompiler->emitSemanticError (var_errorLocation_3052, GALGAS_string ("missing @").add_operation (function_exportedAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 105)), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 105)).add_operation (GALGAS_string (" attribute (required function declaration names it)"), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 105)), fixItArray12  COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 104)) ;
        }
      }
      if (kBoolFalse == test_10) {
        enumGalgasBool test_13 = kBoolTrue ;
        if (kBoolTrue == test_13) {
          GALGAS_bool test_14 = var_implementedIsExported_2983 ;
          if (kBoolTrue == test_14.boolEnum ()) {
            test_14 = enumerator_2308.current (HERE).readProperty_mIsExported ().operator_not (SOURCE_FILE ("declaration-required-proc.galgas", 107)) ;
          }
          test_13 = test_14.boolEnum () ;
          if (kBoolTrue == test_13) {
            TC_Array <FixItDescription> fixItArray15 ;
            inCompiler->emitSemanticError (var_errorLocation_3052, GALGAS_string ("incorrect @").add_operation (function_exportedAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 109)), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 109)).add_operation (GALGAS_string (" attribute (required function declaration does not name it)"), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 109)), fixItArray15  COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 108)) ;
          }
        }
      }
    }
    enumerator_2308.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@externRoutineIR llvmCodeGeneration'
//
//--------------------------------------------------------------------------------------------------

void cPtr_externRoutineIR::method_llvmCodeGeneration (GALGAS_string & ioArgument_ioLLVMcode,
                                                      const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                      GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                      Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("declare"), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 175)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_externRoutineIR temp_1 = this ;
    test_0 = GALGAS_bool (ComparisonKind::equal, temp_1.readProperty_mReturnType ().objectCompare (GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-extern-proc.galgas", 176)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" void"), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 177)) ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_externRoutineIR temp_2 = this ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ").add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (temp_2.readProperty_mReturnType (), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 179)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 179)), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 179)), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 179)) ;
  }
  const GALGAS_externRoutineIR temp_3 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" @").add_operation (temp_3.readProperty_mRoutineMangledName ().readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("declaration-extern-proc.galgas", 181)), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 181)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 181)), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 181)) ;
  const GALGAS_externRoutineIR temp_4 = this ;
  cEnumerator_routineFormalArgumentListIR enumerator_7284 (temp_4.readProperty_mFormalArgumentListForGeneration (), EnumerationOrder::up) ;
  while (enumerator_7284.hasCurrentObject ()) {
    switch (enumerator_7284.current_mFormalArgumentKind (HERE).enumValue ()) {
    case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_input:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_7284.current_mFormalArgumentType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 186)).add_operation (GALGAS_string (" %in."), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 186)).add_operation (enumerator_7284.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 186)), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 186)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_output:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_7284.current_mFormalArgumentType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 188)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 188)).add_operation (function_llvmNameForLocalVariable (enumerator_7284.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 188)), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 188)), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 188)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_7284.current_mFormalArgumentType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 190)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 190)).add_operation (function_llvmNameForLocalVariable (enumerator_7284.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 190)), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 190)), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 190)) ;
      }
      break ;
    }
    if (enumerator_7284.hasNextObject ()) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 193)) ;
    }
    enumerator_7284.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (")").add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 195)), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 195)).add_operation (GALGAS_string ("; declared by extern Omnibus function declaration\n\n"), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 195)), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 195)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@isrDeclarationAST enterInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_isrDeclarationAST::method_enterInPrecedenceGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                            Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_isrDeclarationAST temp_0 = this ;
  GALGAS_lstring var_receiverTypeName_2187 = function_omnibusTypeSpecificNameForDriver (temp_0.readProperty_mDriverName (), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 53)) ;
  const GALGAS_isrDeclarationAST temp_1 = this ;
  GALGAS_string var_s_2265 = var_receiverTypeName_2187.readProperty_string ().add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 54)).add_operation (temp_1.readProperty_mISRName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 54)).add_operation (GALGAS_string ("()"), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 54)) ;
  {
  const GALGAS_isrDeclarationAST temp_2 = this ;
  const GALGAS_isrDeclarationAST temp_3 = this ;
  ioArgument_ioGraph.setter_addNode (GALGAS_lstring::init_21__21_ (var_s_2265, temp_2.readProperty_mISRName ().readProperty_location (), inCompiler COMMA_HERE), temp_3, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 55)) ;
  }
  const GALGAS_isrDeclarationAST temp_4 = this ;
  extensionMethod_noteInstructionListTypesInPrecedenceGraph (temp_4.readProperty_mISRInstructionList (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 57)) ;
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    test_5 = GALGAS_bool (ComparisonKind::notEqual, var_receiverTypeName_2187.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_5) {
      {
      ioArgument_ioGraph.setter_noteNode (var_receiverTypeName_2187 COMMA_SOURCE_FILE ("declaration-isr.galgas", 59)) ;
      }
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@isrDeclarationAST keyRepresentationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_isrDeclarationAST::getter_keyRepresentationForErrorSignaling (Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_isrDeclarationAST temp_0 = this ;
  GALGAS_lstring var_receiverTypeName_2782 = function_omnibusTypeSpecificNameForDriver (temp_0.readProperty_mDriverName (), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 66)) ;
  const GALGAS_isrDeclarationAST temp_1 = this ;
  result_result = GALGAS_string ("function ").add_operation (var_receiverTypeName_2782.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 67)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 67)).add_operation (temp_1.readProperty_mISRName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 67)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@isrDeclarationAST locationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GALGAS_location cPtr_isrDeclarationAST::getter_locationForErrorSignaling (Compiler */* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_location result_result ; // Returned variable
  const GALGAS_isrDeclarationAST temp_0 = this ;
  result_result = temp_0.readProperty_mISRName ().readProperty_location () ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@isrDeclarationAST enterInContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_isrDeclarationAST::method_enterInContext (GALGAS_semanticContext & /* ioArgument_ioContext */,
                                                    GALGAS_declarationDecorationList & ioArgument_ioDecoratedDeclarationList,
                                                    GALGAS_decoratedRegularRoutineList & ioArgument_ioDecoratedRoutineList,
                                                    GALGAS_routineListIR & /* ioArgument_ioRoutineListIR */,
                                                    GALGAS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                    GALGAS_staticEntityMap & /* ioArgument_ioStaticEntityMap */,
                                                    GALGAS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                    GALGAS_userLLVMTypeDefinitionListIR & /* ioArgument_ioUserLLVMTypeDefinitionListIR */,
                                                    Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_isrDeclarationAST temp_0 = this ;
  const GALGAS_isrDeclarationAST temp_1 = this ;
  const GALGAS_isrDeclarationAST temp_2 = this ;
  ioArgument_ioDecoratedDeclarationList.addAssign_operation (GALGAS_decoratedISRDeclaration::init_21__21__21_ (temp_0.readProperty_mISRName (), temp_1.readProperty_mMode (), temp_2.readProperty_mDriverName (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-isr.galgas", 91)) ;
  const GALGAS_isrDeclarationAST temp_3 = this ;
  GALGAS_lstring var_driverLLVMBaseTypeName_4333 = function_llvmDriverNameFromName (temp_3.readProperty_mDriverName (), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 93)) ;
  const GALGAS_isrDeclarationAST temp_4 = this ;
  GALGAS_routineFormalArgumentListAST temp_5 = GALGAS_routineFormalArgumentListAST::init (inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 94)) ;
  GALGAS_lstring var_isrRoutineMangledName_4407 = function_routineMangledNameFromAST (var_driverLLVMBaseTypeName_4333.readProperty_string (), temp_4.readProperty_mISRName (), temp_5, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 94)) ;
  const GALGAS_isrDeclarationAST temp_6 = this ;
  const GALGAS_isrDeclarationAST temp_7 = this ;
  GALGAS_routineFormalArgumentListAST temp_8 = GALGAS_routineFormalArgumentListAST::init (inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 104)) ;
  const GALGAS_isrDeclarationAST temp_9 = this ;
  const GALGAS_isrDeclarationAST temp_10 = this ;
  ioArgument_ioDecoratedRoutineList.addAssign_operation (function_omnibusTypeSpecificNameForDriver (temp_6.readProperty_mDriverName (), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 96)), temp_7.readProperty_mMode (), GALGAS_bool (true), GALGAS_routineKind::class_func_function (SOURCE_FILE ("declaration-isr.galgas", 99)), GALGAS_bool (true), GALGAS_bool (false), GALGAS_routineAttributes::class_func_mutatingRoutine (SOURCE_FILE ("declaration-isr.galgas", 102)), var_isrRoutineMangledName_4407, temp_8, GALGAS_bool (true), temp_9.readProperty_mISRInstructionList (), temp_10.readProperty_mEndOfISRDeclaration (), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-isr.galgas", 108))  COMMA_SOURCE_FILE ("declaration-isr.galgas", 95)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@decoratedISRDeclaration semanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_decoratedISRDeclaration::method_semanticAnalysis (const GALGAS_semanticContext constinArgument_inContext,
                                                            GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                            GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                                            Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_omnibusType var_selfType_6016 ;
  const GALGAS_decoratedISRDeclaration temp_0 = this ;
  extensionMethod_searchType (constinArgument_inContext.readProperty_mTypeMap (), function_omnibusTypeSpecificNameForDriver (temp_0.readProperty_mDriverName (), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 129)), var_selfType_6016, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 129)) ;
  const GALGAS_decoratedISRDeclaration temp_1 = this ;
  GALGAS_interruptionPanicCode joker_6108 ; // Joker input parameter
  constinArgument_inContext.readProperty_mAvailableInterruptMap ().method_searchKey (temp_1.readProperty_mISRName (), joker_6108, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 131)) ;
  {
  const GALGAS_decoratedISRDeclaration temp_2 = this ;
  const GALGAS_decoratedISRDeclaration temp_3 = this ;
  const GALGAS_decoratedISRDeclaration temp_4 = this ;
  ioArgument_ioIntermediateCodeStruct.mProperty_mInterruptMapIR.setter_insertKey (temp_2.readProperty_mISRName (), var_selfType_6016, temp_3.readProperty_mDriverName ().readProperty_string (), temp_4.readProperty_mMode (), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 132)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@guardDeclarationAST enterInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_guardDeclarationAST::method_enterInPrecedenceGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_s_3293 = GALGAS_string ("guard.") ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_guardDeclarationAST temp_1 = this ;
    test_0 = GALGAS_bool (ComparisonKind::notEqual, temp_1.readProperty_mReceiverTypeName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_guardDeclarationAST temp_2 = this ;
      var_s_3293.plusAssign_operation(temp_2.readProperty_mReceiverTypeName ().readProperty_string ().add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 87)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 87)) ;
    }
  }
  const GALGAS_guardDeclarationAST temp_3 = this ;
  var_s_3293.plusAssign_operation(temp_3.readProperty_mGuardName ().readProperty_string ().add_operation (GALGAS_string ("("), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 89)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 89)) ;
  const GALGAS_guardDeclarationAST temp_4 = this ;
  cEnumerator_routineFormalArgumentListAST enumerator_3483 (temp_4.readProperty_mGuardFormalArgumentList (), EnumerationOrder::up) ;
  while (enumerator_3483.hasCurrentObject ()) {
    var_s_3293.plusAssign_operation(extensionGetter_formalPassingModeString (enumerator_3483.current_mFormalArgumentPassingMode (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 91)).add_operation (enumerator_3483.current_mSelector (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 91)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 91)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 91)) ;
    enumerator_3483.gotoNextObject () ;
  }
  var_s_3293.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 93)) ;
  {
  const GALGAS_guardDeclarationAST temp_5 = this ;
  const GALGAS_guardDeclarationAST temp_6 = this ;
  ioArgument_ioGraph.setter_addNode (GALGAS_lstring::init_21__21_ (var_s_3293, temp_5.readProperty_mGuardName ().readProperty_location (), inCompiler COMMA_HERE), temp_6, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 94)) ;
  }
  const GALGAS_guardDeclarationAST temp_7 = this ;
  cEnumerator_routineFormalArgumentListAST enumerator_3722 (temp_7.readProperty_mGuardFormalArgumentList (), EnumerationOrder::up) ;
  while (enumerator_3722.hasCurrentObject ()) {
    {
    ioArgument_ioGraph.setter_noteNode (enumerator_3722.current_mFormalArgumentTypeName (HERE) COMMA_SOURCE_FILE ("declaration-guard.galgas", 97)) ;
    }
    enumerator_3722.gotoNextObject () ;
  }
  const GALGAS_guardDeclarationAST temp_8 = this ;
  extensionMethod_noteInstructionListTypesInPrecedenceGraph (temp_8.readProperty_mGuardInstructionList (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 99)) ;
  enumGalgasBool test_9 = kBoolTrue ;
  if (kBoolTrue == test_9) {
    const GALGAS_guardDeclarationAST temp_10 = this ;
    test_9 = GALGAS_bool (ComparisonKind::notEqual, temp_10.readProperty_mReceiverTypeName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_9) {
      {
      const GALGAS_guardDeclarationAST temp_11 = this ;
      ioArgument_ioGraph.setter_noteNode (temp_11.readProperty_mReceiverTypeName () COMMA_SOURCE_FILE ("declaration-guard.galgas", 101)) ;
      }
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@guardDeclarationAST keyRepresentationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_guardDeclarationAST::getter_keyRepresentationForErrorSignaling (Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_guardDeclarationAST temp_0 = this ;
  const GALGAS_guardDeclarationAST temp_1 = this ;
  result_result = GALGAS_string ("guard ").add_operation (temp_0.readProperty_mReceiverTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 108)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 108)).add_operation (temp_1.readProperty_mGuardName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 108)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@guardDeclarationAST locationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GALGAS_location cPtr_guardDeclarationAST::getter_locationForErrorSignaling (Compiler */* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_location result_result ; // Returned variable
  const GALGAS_guardDeclarationAST temp_0 = this ;
  result_result = temp_0.readProperty_mGuardName ().readProperty_location () ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@guardDeclarationAST enterInContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_guardDeclarationAST::method_enterInContext (GALGAS_semanticContext & ioArgument_ioContext,
                                                      GALGAS_declarationDecorationList & ioArgument_ioDecoratedDeclarationList,
                                                      GALGAS_decoratedRegularRoutineList & /* ioArgument_ioDecoratedRoutineList */,
                                                      GALGAS_routineListIR & /* ioArgument_ioRoutineListIR */,
                                                      GALGAS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                      GALGAS_staticEntityMap & /* ioArgument_ioStaticEntityMap */,
                                                      GALGAS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                      GALGAS_userLLVMTypeDefinitionListIR & /* ioArgument_ioUserLLVMTypeDefinitionListIR */,
                                                      Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_routineTypedSignature var_signature_5562 ;
  {
  const GALGAS_guardDeclarationAST temp_0 = this ;
  routine_routineTypedSignature_26__3F__21_ (ioArgument_ioContext.mProperty_mTypeMap, temp_0.readProperty_mGuardFormalArgumentList (), var_signature_5562, inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 132)) ;
  }
  const GALGAS_guardDeclarationAST temp_1 = this ;
  const GALGAS_guardDeclarationAST temp_2 = this ;
  GALGAS_lstring var_guardMangledName_5603 = extensionGetter_mangledName (var_signature_5562, temp_1.readProperty_mReceiverTypeName ().readProperty_string (), temp_2.readProperty_mGuardName (), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 134)) ;
  const GALGAS_guardDeclarationAST temp_3 = this ;
  const GALGAS_guardDeclarationAST temp_4 = this ;
  const GALGAS_guardDeclarationAST temp_5 = this ;
  GALGAS_lstring var_guardUserLLVMName_5759 = function_guardUserLLVMName (temp_3.readProperty_mReceiverLLVMBaseTypeName (), temp_4.readProperty_mGuardName (), temp_5.readProperty_mGuardFormalArgumentList (), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 136)) ;
  const GALGAS_guardDeclarationAST temp_6 = this ;
  const GALGAS_guardDeclarationAST temp_7 = this ;
  const GALGAS_guardDeclarationAST temp_8 = this ;
  GALGAS_lstring var_guardImplementationLLVMName_5945 = function_guardImplementationLLVMName (temp_6.readProperty_mReceiverLLVMBaseTypeName (), temp_7.readProperty_mGuardName (), temp_8.readProperty_mGuardFormalArgumentList (), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 142)) ;
  {
  const GALGAS_guardDeclarationAST temp_9 = this ;
  ioArgument_ioContext.mProperty_mGuardMap.setter_insertKey (var_guardMangledName_5603, temp_9.readProperty_mIsPublic (), var_signature_5562, var_guardUserLLVMName_5759, var_guardImplementationLLVMName_5945, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 147)) ;
  }
  const GALGAS_guardDeclarationAST temp_10 = this ;
  const GALGAS_guardDeclarationAST temp_11 = this ;
  const GALGAS_guardDeclarationAST temp_12 = this ;
  const GALGAS_guardDeclarationAST temp_13 = this ;
  const GALGAS_guardDeclarationAST temp_14 = this ;
  const GALGAS_guardDeclarationAST temp_15 = this ;
  const GALGAS_guardDeclarationAST temp_16 = this ;
  const GALGAS_guardDeclarationAST temp_17 = this ;
  ioArgument_ioDecoratedDeclarationList.addAssign_operation (GALGAS_decoratedGuardDeclaration::init_21__21__21__21__21__21__21__21_ (temp_10.readProperty_mReceiverTypeName (), temp_11.readProperty_mGuardName (), temp_12.readProperty_mIsPublic (), temp_13.readProperty_mGuardAttributeList (), temp_14.readProperty_mGuardFormalArgumentList (), temp_15.readProperty_mGuardKind (), temp_16.readProperty_mGuardInstructionList (), temp_17.readProperty_mEndOfGuardDeclaration (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-guard.galgas", 154)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Function 'guardUserLLVMName'
//
//--------------------------------------------------------------------------------------------------

GALGAS_lstring function_guardUserLLVMName (const GALGAS_string & constinArgument_inReceiverLLVMBaseTypeName,
                                           const GALGAS_lstring & constinArgument_inGuardName,
                                           const GALGAS_routineFormalArgumentListAST & constinArgument_inFormalArgumentList,
                                           Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  GALGAS_string var_s_7148 = GALGAS_string ("guard.user.") ;
  var_s_7148.plusAssign_operation(constinArgument_inReceiverLLVMBaseTypeName.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 175)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 175)) ;
  var_s_7148.plusAssign_operation(constinArgument_inGuardName.readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 176)) ;
  var_s_7148.plusAssign_operation(GALGAS_string ("("), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 177)) ;
  cEnumerator_routineFormalArgumentListAST enumerator_7287 (constinArgument_inFormalArgumentList, EnumerationOrder::up) ;
  while (enumerator_7287.hasCurrentObject ()) {
    var_s_7148.plusAssign_operation(extensionGetter_formalPassingModeString (enumerator_7287.current_mFormalArgumentPassingMode (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 179)).add_operation (enumerator_7287.current_mSelector (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 179)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 179)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 179)) ;
    enumerator_7287.gotoNextObject () ;
  }
  var_s_7148.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 181)) ;
  result_result = GALGAS_lstring::init_21__21_ (var_s_7148, constinArgument_inGuardName.readProperty_location (), inCompiler COMMA_HERE) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_guardUserLLVMName [4] = {
  & kTypeDescriptor_GALGAS_string,
  & kTypeDescriptor_GALGAS_lstring,
  & kTypeDescriptor_GALGAS_routineFormalArgumentListAST,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_guardUserLLVMName (Compiler * inCompiler,
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

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_guardUserLLVMName ("guardUserLLVMName",
                                                                   functionWithGenericHeader_guardUserLLVMName,
                                                                   & kTypeDescriptor_GALGAS_lstring,
                                                                   3,
                                                                   functionArgs_guardUserLLVMName) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'guardImplementationLLVMName'
//
//--------------------------------------------------------------------------------------------------

GALGAS_lstring function_guardImplementationLLVMName (const GALGAS_string & constinArgument_inReceiverLLVMBaseTypeName,
                                                     const GALGAS_lstring & constinArgument_inGuardName,
                                                     const GALGAS_routineFormalArgumentListAST & constinArgument_inFormalArgumentList,
                                                     Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  GALGAS_string var_s_7846 = GALGAS_string ("guard.implementation.") ;
  var_s_7846.plusAssign_operation(constinArgument_inReceiverLLVMBaseTypeName.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 192)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 192)) ;
  var_s_7846.plusAssign_operation(constinArgument_inGuardName.readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 193)) ;
  var_s_7846.plusAssign_operation(GALGAS_string ("("), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 194)) ;
  cEnumerator_routineFormalArgumentListAST enumerator_7995 (constinArgument_inFormalArgumentList, EnumerationOrder::up) ;
  while (enumerator_7995.hasCurrentObject ()) {
    var_s_7846.plusAssign_operation(extensionGetter_formalPassingModeString (enumerator_7995.current_mFormalArgumentPassingMode (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 196)).add_operation (enumerator_7995.current_mSelector (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 196)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 196)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 196)) ;
    enumerator_7995.gotoNextObject () ;
  }
  var_s_7846.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 198)) ;
  result_result = GALGAS_lstring::init_21__21_ (var_s_7846, constinArgument_inGuardName.readProperty_location (), inCompiler COMMA_HERE) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_guardImplementationLLVMName [4] = {
  & kTypeDescriptor_GALGAS_string,
  & kTypeDescriptor_GALGAS_lstring,
  & kTypeDescriptor_GALGAS_routineFormalArgumentListAST,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_guardImplementationLLVMName (Compiler * inCompiler,
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

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_guardImplementationLLVMName ("guardImplementationLLVMName",
                                                                             functionWithGenericHeader_guardImplementationLLVMName,
                                                                             & kTypeDescriptor_GALGAS_lstring,
                                                                             3,
                                                                             functionArgs_guardImplementationLLVMName) ;

//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@decoratedGuardDeclaration semanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_decoratedGuardDeclaration::method_semanticAnalysis (const GALGAS_semanticContext constinArgument_inContext,
                                                              GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                              GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_decoratedGuardDeclaration temp_0 = this ;
  GALGAS_omnibusType var_receiverType_10014 = extensionGetter_type (extensionGetter_searchKey (constinArgument_inContext.readProperty_mTypeMap (), temp_0.readProperty_mReceiverTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 238)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 238)) ;
  GALGAS_bool var_warnIfUnused_10111 = GALGAS_bool (true) ;
  const GALGAS_decoratedGuardDeclaration temp_1 = this ;
  cEnumerator_lstringlist enumerator_10138 (temp_1.readProperty_mGuardAttributeList (), EnumerationOrder::up) ;
  while (enumerator_10138.hasCurrentObject ()) {
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = GALGAS_bool (ComparisonKind::equal, enumerator_10138.current_mValue (HERE).readProperty_string ().objectCompare (function_noUnusedWarningAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 242)))).boolEnum () ;
      if (kBoolTrue == test_2) {
        enumGalgasBool test_3 = kBoolTrue ;
        if (kBoolTrue == test_3) {
          test_3 = var_warnIfUnused_10111.operator_not (SOURCE_FILE ("declaration-guard.galgas", 243)).boolEnum () ;
          if (kBoolTrue == test_3) {
            TC_Array <FixItDescription> fixItArray4 ;
            inCompiler->emitSemanticError (enumerator_10138.current_mValue (HERE).readProperty_location (), GALGAS_string ("duplicate @").add_operation (function_noUnusedWarningAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 244)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 244)).add_operation (GALGAS_string (" attribute"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 244)), fixItArray4  COMMA_SOURCE_FILE ("declaration-guard.galgas", 244)) ;
          }
        }
        var_warnIfUnused_10111 = GALGAS_bool (false) ;
      }
    }
    if (kBoolFalse == test_2) {
      TC_Array <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (enumerator_10138.current_mValue (HERE).readProperty_location (), GALGAS_string ("unknown attribute; available attribute is @").add_operation (function_noUnusedWarningAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 248)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 248)), fixItArray5  COMMA_SOURCE_FILE ("declaration-guard.galgas", 248)) ;
    }
    enumerator_10138.gotoNextObject () ;
  }
  GALGAS_universalValuedObjectMap var_universalMap_10544 = constinArgument_inContext.readProperty_mValuedObjectMap () ;
  {
  extensionSetter_openOverrideForSelectBlock (var_universalMap_10544, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 253)) ;
  }
  {
  extensionSetter_openBranch (var_universalMap_10544, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 254)) ;
  }
  GALGAS_routineFormalArgumentListIR temp_6 = GALGAS_routineFormalArgumentListIR::init (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 255)) ;
  GALGAS_routineFormalArgumentListIR var_formalArguments_10697 = temp_6 ;
  GALGAS_guardKindGenerationIR var_convenienceGuardGenerationIR_10748 ;
  GALGAS_allocaList temp_7 = GALGAS_allocaList::init (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 257)) ;
  GALGAS_allocaList var_allocaList_10795 = temp_7 ;
  GALGAS_instructionListIR temp_8 = GALGAS_instructionListIR::init (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 258)) ;
  GALGAS_instructionListIR var_instructionGenerationList_10837 = temp_8 ;
  const GALGAS_decoratedGuardDeclaration temp_9 = this ;
  switch (temp_9.readProperty_mGuardKind ().enumValue ()) {
  case GALGAS_guardKind::kNotBuilt:
    break ;
  case GALGAS_guardKind::kEnum_baseGuard:
    {
      const GALGAS_decoratedGuardDeclaration temp_10 = this ;
      GALGAS_lstring var_resultVarName_10957 = GALGAS_lstring::init_21__21_ (function_acceptVariableOmnibusName (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 262)), temp_10.readProperty_mGuardName ().readProperty_location (), inCompiler COMMA_HERE) ;
      GALGAS_omnibusType var_resultType_11164 = extensionGetter_booleanType (constinArgument_inContext, var_resultVarName_10957.readProperty_location (), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 264)) ;
      var_allocaList_10795.addAssign_operation (function_llvmNameForLocalVariable (var_resultVarName_10957.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 273)), var_resultType_11164, GALGAS_bool (false)  COMMA_SOURCE_FILE ("declaration-guard.galgas", 273)) ;
      {
      extensionSetter_insertLocalVariable (var_universalMap_10544, var_resultVarName_10957, var_resultType_11164, var_resultVarName_10957, GALGAS_valuedObjectState::class_func_noValue (SOURCE_FILE ("declaration-guard.galgas", 278)), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 274)) ;
      }
      {
      const GALGAS_decoratedGuardDeclaration temp_11 = this ;
      routine_enterFormalArguments_3F_context_3F__26__26__3F_warningOnUnusedArgs (constinArgument_inContext, temp_11.readProperty_mGuardFormalArgumentList (), var_universalMap_10544, var_formalArguments_10697, GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 282)) ;
      }
      var_convenienceGuardGenerationIR_10748 = GALGAS_guardKindGenerationIR::class_func_baseGuard (SOURCE_FILE ("declaration-guard.galgas", 289)) ;
      const GALGAS_decoratedGuardDeclaration temp_12 = this ;
      extensionMethod_analyzeRoutineInstructionList (temp_12.readProperty_mGuardInstructionList (), var_receiverType_10014, GALGAS_routineAttributes::class_func_mutatingRoutine (SOURCE_FILE ("declaration-guard.galgas", 293)), constinArgument_inContext, GALGAS_mode::class_func_guardMode (SOURCE_FILE ("declaration-guard.galgas", 295)), ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct.mProperty_mStaticEntityMap, var_universalMap_10544, var_allocaList_10795, var_instructionGenerationList_10837, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 291)) ;
    }
    break ;
  case GALGAS_guardKind::kEnum_convenienceGuard:
    {
      const cEnumAssociatedValues_guardKind_convenienceGuard * extractPtr_13733 = (const cEnumAssociatedValues_guardKind_convenienceGuard *) (temp_9.readProperty_mGuardKind ().unsafePointer ()) ;
      const GALGAS_callInstructionAST extractedValue_12598_baseGuardInstruction = extractPtr_13733->mAssociatedValue0 ;
      {
      const GALGAS_decoratedGuardDeclaration temp_13 = this ;
      routine_enterFormalArguments_3F_context_3F__26__26__3F_warningOnUnusedArgs (constinArgument_inContext, temp_13.readProperty_mGuardFormalArgumentList (), var_universalMap_10544, var_formalArguments_10697, GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 304)) ;
      }
      callExtensionMethod_baseGuardAnalyze ((cPtr_callInstructionAST *) extractedValue_12598_baseGuardInstruction.ptr (), var_receiverType_10014, GALGAS_routineAttributes::class_func_mutatingRoutine (SOURCE_FILE ("declaration-guard.galgas", 314)), constinArgument_inContext, GALGAS_mode::class_func_serviceMode (SOURCE_FILE ("declaration-guard.galgas", 316)), ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct.mProperty_mStaticEntityMap, var_universalMap_10544, var_convenienceGuardGenerationIR_10748, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 312)) ;
      const GALGAS_decoratedGuardDeclaration temp_14 = this ;
      extensionMethod_analyzeRoutineInstructionList (temp_14.readProperty_mGuardInstructionList (), var_receiverType_10014, GALGAS_routineAttributes::class_func_mutatingRoutine (SOURCE_FILE ("declaration-guard.galgas", 325)), constinArgument_inContext, GALGAS_mode::class_func_serviceMode (SOURCE_FILE ("declaration-guard.galgas", 327)), ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct.mProperty_mStaticEntityMap, var_universalMap_10544, var_allocaList_10795, var_instructionGenerationList_10837, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 323)) ;
    }
    break ;
  }
  extensionMethod_checkLocalVariableFinalState (var_universalMap_10544, var_instructionGenerationList_10837, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 336)) ;
  {
  const GALGAS_decoratedGuardDeclaration temp_15 = this ;
  extensionSetter_closeBranch (var_universalMap_10544, temp_15.readProperty_mEndOfGuardDeclaration (), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 337)) ;
  }
  {
  const GALGAS_decoratedGuardDeclaration temp_16 = this ;
  extensionSetter_closeOverride (var_universalMap_10544, temp_16.readProperty_mEndOfGuardDeclaration (), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 338)) ;
  }
  const GALGAS_decoratedGuardDeclaration temp_17 = this ;
  const GALGAS_decoratedGuardDeclaration temp_18 = this ;
  GALGAS_lstring var_guardUserLLVMName_13992 = function_guardUserLLVMName (var_receiverType_10014.readProperty_llvmBaseTypeName (), temp_17.readProperty_mGuardName (), temp_18.readProperty_mGuardFormalArgumentList (), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 340)) ;
  const GALGAS_decoratedGuardDeclaration temp_19 = this ;
  const GALGAS_decoratedGuardDeclaration temp_20 = this ;
  GALGAS_lstring var_guardImplementationLLVMName_14133 = function_guardImplementationLLVMName (var_receiverType_10014.readProperty_llvmBaseTypeName (), temp_19.readProperty_mGuardName (), temp_20.readProperty_mGuardFormalArgumentList (), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 345)) ;
  ioArgument_ioIntermediateCodeStruct.mProperty_mRoutineListIR.addAssign_operation (GALGAS_guardUserRoutineIR::init_21__21_isRequired_21_warnsIfUnused_21__21__21__21_ (var_guardUserLLVMName_13992, GALGAS_bool (false), var_warnIfUnused_10111, var_guardImplementationLLVMName_14133.readProperty_string (), var_formalArguments_10697, var_receiverType_10014, var_convenienceGuardGenerationIR_10748, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-guard.galgas", 351)) ;
  ioArgument_ioIntermediateCodeStruct.mProperty_mRoutineListIR.addAssign_operation (GALGAS_guardImplementationRoutineIR::init_21__21_isRequired_21_warnsIfUnused_21__21__21__21__21_ (var_guardImplementationLLVMName_14133, GALGAS_bool (false), var_warnIfUnused_10111, var_formalArguments_10697, var_receiverType_10014, var_convenienceGuardGenerationIR_10748, var_allocaList_10795, var_instructionGenerationList_10837, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-guard.galgas", 360)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@standAloneProcedureCallInstructionAST baseGuardAnalyze'
//
//--------------------------------------------------------------------------------------------------

void cPtr_standAloneProcedureCallInstructionAST::method_baseGuardAnalyze (const GALGAS_omnibusType /* constinArgument_inSelfType */,
                                                                          const GALGAS_routineAttributes /* constinArgument_inRoutineAttributes */,
                                                                          const GALGAS_semanticContext /* constinArgument_inContext */,
                                                                          const GALGAS_mode /* constinArgument_inMode */,
                                                                          GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                          GALGAS_staticEntityMap & /* ioArgument_ioStaticEntityMap */,
                                                                          GALGAS_universalValuedObjectMap & /* ioArgument_ioUniversalMap */,
                                                                          GALGAS_guardKindGenerationIR & outArgument_outConvenienceGuardGenerationIR,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_standAloneProcedureCallInstructionAST temp_0 = this ;
  TC_Array <FixItDescription> fixItArray1 ;
  inCompiler->emitSemanticError (temp_0.readProperty_mSandAloneRoutineName ().readProperty_location (), GALGAS_string ("NOT HANDLED YET"), fixItArray1  COMMA_SOURCE_FILE ("declaration-guard.galgas", 398)) ;
  outArgument_outConvenienceGuardGenerationIR.drop () ; // Release error dropped variable
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@procedureCallInstructionAST baseGuardAnalyze'
//
//--------------------------------------------------------------------------------------------------

void cPtr_procedureCallInstructionAST::method_baseGuardAnalyze (const GALGAS_omnibusType constinArgument_inSelfType,
                                                                const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                                                const GALGAS_semanticContext constinArgument_inContext,
                                                                const GALGAS_mode constinArgument_inMode,
                                                                GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                GALGAS_guardKindGenerationIR & outArgument_outConvenienceGuardGenerationIR,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_allocaList temp_0 = GALGAS_allocaList::init (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 413)) ;
  GALGAS_allocaList var_baseGuardAllocaList_17030 = temp_0 ;
  GALGAS_instructionListIR temp_1 = GALGAS_instructionListIR::init (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 414)) ;
  GALGAS_instructionListIR var_baseGuardInstructionGenerationList_17081 = temp_1 ;
  GALGAS_objectIR var_currentObject_17238 ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    const GALGAS_procedureCallInstructionAST temp_3 = this ;
    test_2 = GALGAS_bool (ComparisonKind::equal, temp_3.readProperty_mIdentifier ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_2) {
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        test_4 = GALGAS_bool (ComparisonKind::equal, constinArgument_inSelfType.readProperty_kind ().objectCompare (GALGAS_typeKind::class_func_void (SOURCE_FILE ("declaration-guard.galgas", 418)))).boolEnum () ;
        if (kBoolTrue == test_4) {
          const GALGAS_procedureCallInstructionAST temp_5 = this ;
          TC_Array <FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (temp_5.readProperty_mIdentifier ().readProperty_location (), GALGAS_string ("self is not available in this context"), fixItArray6  COMMA_SOURCE_FILE ("declaration-guard.galgas", 419)) ;
          var_currentObject_17238.drop () ; // Release error dropped variable
        }
      }
      if (kBoolFalse == test_4) {
        var_currentObject_17238 = GALGAS_objectIR::class_func_reference (constinArgument_inSelfType, function_llvmNameForSelf (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 421))  COMMA_SOURCE_FILE ("declaration-guard.galgas", 421)) ;
      }
    }
  }
  if (kBoolFalse == test_2) {
    const GALGAS_procedureCallInstructionAST temp_7 = this ;
    extensionMethod_searchValuedObject (ioArgument_ioUniversalMap, temp_7.readProperty_mIdentifier (), constinArgument_inMode, ioArgument_ioTemporaries.readProperty_mInitializedDriverSet (), var_currentObject_17238, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 424)) ;
  }
  const GALGAS_procedureCallInstructionAST temp_8 = this ;
  GALGAS_accessInAssignmentListAST var_accessList_17725 = temp_8.readProperty_mAccessList () ;
  GALGAS_accessInAssignmentAST var_lastAccess_17784 ;
  {
  var_accessList_17725.setter_popLast (var_lastAccess_17784, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 433)) ;
  }
  cEnumerator_accessInAssignmentListAST enumerator_17829 (var_accessList_17725, EnumerationOrder::up) ;
  while (enumerator_17829.hasCurrentObject ()) {
    GALGAS_omnibusType var_currentType_17862 = extensionGetter_type (var_currentObject_17238, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 436)) ;
    switch (enumerator_17829.current_mAccess (HERE).enumValue ()) {
    case GALGAS_accessInAssignmentAST::kNotBuilt:
      break ;
    case GALGAS_accessInAssignmentAST::kEnum_property:
      {
        const cEnumAssociatedValues_accessInAssignmentAST_property * extractPtr_19037 = (const cEnumAssociatedValues_accessInAssignmentAST_property *) (enumerator_17829.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_17943_propertyName = extractPtr_19037->mAssociatedValue0 ;
        GALGAS_propertyGetterMap var_propertyGetterMap_18076 = extensionGetter_propertyGetterMap (constinArgument_inContext, var_currentType_17862, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 440)) ;
        GALGAS_propertyGetterKind var_propertyAccess_18277 ;
        GALGAS_propertyVisibility joker_18269 ; // Joker input parameter
        var_propertyGetterMap_18076.method_searchKey (extractedValue_17943_propertyName, joker_18269, var_propertyAccess_18277, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 442)) ;
        switch (var_propertyAccess_18277.enumValue ()) {
        case GALGAS_propertyGetterKind::kNotBuilt:
          break ;
        case GALGAS_propertyGetterKind::kEnum_constantProperty:
          {
            TC_Array <FixItDescription> fixItArray9 ;
            inCompiler->emitSemanticError (extractedValue_17943_propertyName.readProperty_location (), GALGAS_string ("a constant property not available in this context"), fixItArray9  COMMA_SOURCE_FILE ("declaration-guard.galgas", 445)) ;
            var_currentObject_17238.drop () ; // Release error dropped variable
          }
          break ;
        case GALGAS_propertyGetterKind::kEnum_storedProperty:
          {
            const cEnumAssociatedValues_propertyGetterKind_storedProperty * extractPtr_18902 = (const cEnumAssociatedValues_propertyGetterKind_storedProperty *) (var_propertyAccess_18277.unsafePointer ()) ;
            const GALGAS_omnibusType extractedValue_18491_propertyType = extractPtr_18902->mAssociatedValue0 ;
            const GALGAS_uint extractedValue_18510_propertyIndex = extractPtr_18902->mAssociatedValue1 ;
            GALGAS_string var_property_5F_llvmName_18572 ;
            {
            extensionSetter_newTempLLVMVar (ioArgument_ioTemporaries, var_property_5F_llvmName_18572, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 447)) ;
            }
            {
            extensionSetter_appendGetUniversalPropertyReference (var_baseGuardInstructionGenerationList_17081, var_currentType_17862, extensionGetter_llvmName (var_currentObject_17238, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 450)), var_property_5F_llvmName_18572, extractedValue_18510_propertyIndex, extractedValue_17943_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 448)) ;
            }
            var_currentObject_17238 = GALGAS_objectIR::class_func_reference (extractedValue_18491_propertyType, var_property_5F_llvmName_18572  COMMA_SOURCE_FILE ("declaration-guard.galgas", 455)) ;
          }
          break ;
        case GALGAS_propertyGetterKind::kEnum_computedProperty:
          {
            TC_Array <FixItDescription> fixItArray10 ;
            inCompiler->emitSemanticError (extractedValue_17943_propertyName.readProperty_location (), GALGAS_string ("a computed property cannot be named in guard"), fixItArray10  COMMA_SOURCE_FILE ("declaration-guard.galgas", 457)) ;
            var_currentObject_17238.drop () ; // Release error dropped variable
          }
          break ;
        }
      }
      break ;
    case GALGAS_accessInAssignmentAST::kEnum_arrayAccess:
      {
        const cEnumAssociatedValues_accessInAssignmentAST_arrayAccess * extractPtr_19136 = (const cEnumAssociatedValues_accessInAssignmentAST_arrayAccess *) (enumerator_17829.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_location extractedValue_19075_endOfIndex = extractPtr_19136->mAssociatedValue1 ;
        TC_Array <FixItDescription> fixItArray11 ;
        inCompiler->emitSemanticError (extractedValue_19075_endOfIndex, GALGAS_string ("not handled yet"), fixItArray11  COMMA_SOURCE_FILE ("declaration-guard.galgas", 460)) ;
        var_currentObject_17238.drop () ; // Release error dropped variable
      }
      break ;
    }
    enumerator_17829.gotoNextObject () ;
  }
  switch (var_lastAccess_17784.enumValue ()) {
  case GALGAS_accessInAssignmentAST::kNotBuilt:
    break ;
  case GALGAS_accessInAssignmentAST::kEnum_property:
    {
      const cEnumAssociatedValues_accessInAssignmentAST_property * extractPtr_20652 = (const cEnumAssociatedValues_accessInAssignmentAST_property *) (var_lastAccess_17784.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_19234_methodName = extractPtr_20652->mAssociatedValue0 ;
      GALGAS_omnibusType var_currentType_19256 = extensionGetter_type (var_currentObject_17238, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 466)) ;
      const GALGAS_procedureCallInstructionAST temp_12 = this ;
      GALGAS_lstring var_guardMangledName_19299 = extensionGetter_mangledName (temp_12.readProperty_mArguments (), var_currentType_19256.readProperty_omnibusTypeDescriptionName (), extractedValue_19234_methodName, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 467)) ;
      GALGAS_routineTypedSignature var_formalSignature_19493 ;
      GALGAS_lstring var_guardRoutineImplentationLLVMName_19517 ;
      GALGAS_bool joker_19485 ; // Joker input parameter
      GALGAS_lstring joker_19509 ; // Joker input parameter
      constinArgument_inContext.readProperty_mGuardMap ().method_searchKey (var_guardMangledName_19299, joker_19485, var_formalSignature_19493, joker_19509, var_guardRoutineImplentationLLVMName_19517, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 468)) ;
      GALGAS_procCallEffectiveParameterListIR temp_13 = GALGAS_procCallEffectiveParameterListIR::init (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 471)) ;
      temp_13.enterElement (GALGAS_procCallEffectiveParameterListIR_2D_element::init_21__21_ (GALGAS_procEffectiveParameterPassingModeIR::class_func_outputInput (SOURCE_FILE ("declaration-guard.galgas", 471)), GALGAS_objectIR::class_func_reference (var_currentType_19256, extensionGetter_llvmName (var_currentObject_17238, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 471))  COMMA_SOURCE_FILE ("declaration-guard.galgas", 471)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 471)) ;
      GALGAS_procCallEffectiveParameterListIR var_effectiveParameterListIR_19632 = temp_13 ;
      {
      const GALGAS_procedureCallInstructionAST temp_14 = this ;
      routine_analyzeEffectiveParameters_3F_self_3F_routineAttributes_3F_formal_3F_effective_3F_errorLocation_3F_context_3F_requiredMode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_26_effectiveIR (constinArgument_inSelfType, constinArgument_inRoutineAttributes, var_formalSignature_19493, temp_14.readProperty_mArguments (), extractedValue_19234_methodName.readProperty_location (), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, var_baseGuardAllocaList_17030, var_baseGuardInstructionGenerationList_17081, var_effectiveParameterListIR_19632, inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 474)) ;
      }
      outArgument_outConvenienceGuardGenerationIR = GALGAS_guardKindGenerationIR::class_func_convenienceGuard (var_baseGuardAllocaList_17030, var_baseGuardInstructionGenerationList_17081, var_guardRoutineImplentationLLVMName_19517.readProperty_string (), var_effectiveParameterListIR_19632  COMMA_SOURCE_FILE ("declaration-guard.galgas", 490)) ;
    }
    break ;
  case GALGAS_accessInAssignmentAST::kEnum_arrayAccess:
    {
      const cEnumAssociatedValues_accessInAssignmentAST_arrayAccess * extractPtr_20764 = (const cEnumAssociatedValues_accessInAssignmentAST_arrayAccess *) (var_lastAccess_17784.unsafePointer ()) ;
      const GALGAS_location extractedValue_20686_endOfIndex = extractPtr_20764->mAssociatedValue1 ;
      TC_Array <FixItDescription> fixItArray15 ;
      inCompiler->emitSemanticError (extractedValue_20686_endOfIndex, GALGAS_string ("a property access is required here"), fixItArray15  COMMA_SOURCE_FILE ("declaration-guard.galgas", 497)) ;
      outArgument_outConvenienceGuardGenerationIR.drop () ; // Release error dropped variable
    }
    break ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@guardUserRoutineIR enterAccessibleEntities'
//
//--------------------------------------------------------------------------------------------------

void cPtr_guardUserRoutineIR::method_enterAccessibleEntities (GALGAS_stringset & ioArgument_ioInvokedRoutineSet,
                                                              GALGAS_uint & /* ioArgument_ioMaxBranchOfOnInstructions */,
                                                              Compiler * /* inCompiler */
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_guardUserRoutineIR temp_0 = this ;
  ioArgument_ioInvokedRoutineSet.addAssign_operation (temp_0.readProperty_mMangledImplementationGuardName ()  COMMA_SOURCE_FILE ("declaration-guard.galgas", 528)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@guardUserRoutineIR svcDeclarationGeneration'
//
//--------------------------------------------------------------------------------------------------

void cPtr_guardUserRoutineIR::method_svcDeclarationGeneration (GALGAS_primitiveAndServiceIRlist & ioArgument_ioPrimitiveAndServiceList,
                                                               GALGAS_sectionIRlist & ioArgument_ioSectionList,
                                                               GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                               Compiler * /* inCompiler */
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_guardUserRoutineIR temp_0 = this ;
  GALGAS_string var_userMangledName_22563 = temp_0.readProperty_mRoutineMangledName ().readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("declaration-guard.galgas", 538)) ;
  const GALGAS_guardUserRoutineIR temp_1 = this ;
  GALGAS_string var_implementationMangledName_22638 = temp_1.readProperty_mMangledImplementationGuardName ().getter_assemblerRepresentation (SOURCE_FILE ("declaration-guard.galgas", 539)) ;
  const GALGAS_guardUserRoutineIR temp_2 = this ;
  switch (temp_2.readProperty_mGuardKindGenerationIR ().enumValue ()) {
  case GALGAS_guardKindGenerationIR::kNotBuilt:
    break ;
  case GALGAS_guardKindGenerationIR::kEnum_convenienceGuard:
    {
      ioArgument_ioPrimitiveAndServiceList.addAssign_operation (var_userMangledName_22563, var_implementationMangledName_22638, GALGAS_bool (false)  COMMA_SOURCE_FILE ("declaration-guard.galgas", 542)) ;
    }
    break ;
  case GALGAS_guardKindGenerationIR::kEnum_baseGuard:
    {
      ioArgument_ioSectionList.addAssign_operation (var_userMangledName_22563, var_implementationMangledName_22638, GALGAS_bool (false)  COMMA_SOURCE_FILE ("declaration-guard.galgas", 544)) ;
    }
    break ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@guardUserRoutineIR llvmCodeGeneration'
//
//--------------------------------------------------------------------------------------------------

void cPtr_guardUserRoutineIR::method_llvmCodeGeneration (GALGAS_string & ioArgument_ioLLVMcode,
                                                         const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                         GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                         Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_guardUserRoutineIR temp_0 = this ;
  const GALGAS_guardUserRoutineIR temp_1 = this ;
  const GALGAS_guardUserRoutineIR temp_2 = this ;
  GALGAS_string var_prototype_23333 = function_llvmFunctionPrototype (GALGAS_string ("i1"), temp_0.readProperty_mRoutineMangledName ().readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("declaration-guard.galgas", 560)), temp_1.readProperty_mReceiverType (), temp_2.readProperty_mFormalArgumentListForGeneration (), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 558)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("declare ").add_operation (var_prototype_23333, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 564)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 564)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 564)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@guardImplementationRoutineIR llvmCodeGeneration'
//
//--------------------------------------------------------------------------------------------------

void cPtr_guardImplementationRoutineIR::method_llvmCodeGeneration (GALGAS_string & ioArgument_ioLLVMcode,
                                                                   const GALGAS_generationContext constinArgument_inGenerationContext,
                                                                   GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_guardImplementationRoutineIR temp_0 = this ;
  GALGAS_string var_guardRoutineName_24326 = temp_0.readProperty_mRoutineMangledName ().readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("declaration-guard.galgas", 584)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define i1 @").add_operation (var_guardRoutineName_24326, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 585)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 585)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 585)) ;
  const GALGAS_guardImplementationRoutineIR temp_1 = this ;
  GALGAS_string temp_2 ;
  const enumGalgasBool test_3 = GALGAS_bool (ComparisonKind::equal, temp_1.readProperty_mReceiverType ().readProperty_kind ().objectCompare (GALGAS_typeKind::class_func_void (SOURCE_FILE ("declaration-guard.galgas", 586)))).boolEnum () ;
  if (kBoolTrue == test_3) {
    temp_2 = GALGAS_string::makeEmptyString () ;
  }else if (kBoolFalse == test_3) {
    const GALGAS_guardImplementationRoutineIR temp_4 = this ;
    temp_2 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_4.readProperty_mReceiverType ().ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 589)) ;
  }
  GALGAS_string var_receiverLLVMTypeName_24458 = temp_2 ;
  GALGAS_bool var_first_24586 = GALGAS_bool (true) ;
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    test_5 = GALGAS_bool (ComparisonKind::notEqual, var_receiverLLVMTypeName_24458.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_5) {
      ioArgument_ioLLVMcode.plusAssign_operation(var_receiverLLVMTypeName_24458.add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 593)).add_operation (function_llvmNameForSelf (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 593)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 593)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 593)) ;
      var_first_24586 = GALGAS_bool (false) ;
    }
  }
  const GALGAS_guardImplementationRoutineIR temp_6 = this ;
  cEnumerator_routineFormalArgumentListIR enumerator_24774 (temp_6.readProperty_mFormalArgumentListForGeneration (), EnumerationOrder::up) ;
  while (enumerator_24774.hasCurrentObject ()) {
    enumGalgasBool test_7 = kBoolTrue ;
    if (kBoolTrue == test_7) {
      test_7 = var_first_24586.boolEnum () ;
      if (kBoolTrue == test_7) {
        var_first_24586 = GALGAS_bool (false) ;
      }
    }
    if (kBoolFalse == test_7) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 600)) ;
    }
    switch (enumerator_24774.current_mFormalArgumentKind (HERE).enumValue ()) {
    case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_input:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_24774.current_mFormalArgumentType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 604)).add_operation (GALGAS_string (" %in."), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 604)).add_operation (enumerator_24774.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 604)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 604)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_output:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_24774.current_mFormalArgumentType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 606)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 606)).add_operation (function_llvmNameForLocalVariable (enumerator_24774.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 606)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 606)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 606)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_24774.current_mFormalArgumentType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 608)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 608)).add_operation (function_llvmNameForLocalVariable (enumerator_24774.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 608)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 608)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 608)) ;
      }
      break ;
    }
    enumerator_24774.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (")").add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 611)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 611)).add_operation (GALGAS_string ("{\n"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 611)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 611)) ;
  const GALGAS_guardImplementationRoutineIR temp_8 = this ;
  GALGAS_allocaList var_allocaList_25424 = temp_8.readProperty_mAllocaList () ;
  const GALGAS_guardImplementationRoutineIR temp_9 = this ;
  cEnumerator_routineFormalArgumentListIR enumerator_25538 (temp_9.readProperty_mFormalArgumentListForGeneration (), EnumerationOrder::up) ;
  while (enumerator_25538.hasCurrentObject ()) {
    switch (enumerator_25538.current_mFormalArgumentKind (HERE).enumValue ()) {
    case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_input:
      {
        var_allocaList_25424.addAssign_operation (function_llvmNameForLocalVariable (enumerator_25538.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 618)), enumerator_25538.current_mFormalArgumentType (HERE), GALGAS_bool (true)  COMMA_SOURCE_FILE ("declaration-guard.galgas", 618)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_output:
    case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
      {
      }
      break ;
    }
    enumerator_25538.gotoNextObject () ;
  }
  extensionMethod_generateAllocaList (var_allocaList_25424, ioArgument_ioLLVMcode, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 623)) ;
  const GALGAS_guardImplementationRoutineIR temp_10 = this ;
  cEnumerator_routineFormalArgumentListIR enumerator_25922 (temp_10.readProperty_mFormalArgumentListForGeneration (), EnumerationOrder::up) ;
  while (enumerator_25922.hasCurrentObject ()) {
    switch (enumerator_25922.current_mFormalArgumentKind (HERE).enumValue ()) {
    case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_input:
      {
        GALGAS_string var_llvmType_26045 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_25922.current_mFormalArgumentType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 628)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store ").add_operation (var_llvmType_26045, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 629)).add_operation (GALGAS_string (" %in."), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 629)).add_operation (enumerator_25922.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 629)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 629)).add_operation (var_llvmType_26045, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 629)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 630)).add_operation (function_llvmNameForLocalVariable (enumerator_25922.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 630)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 630)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 630)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 629)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_output:
    case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
      {
      }
      break ;
    }
    enumerator_25922.gotoNextObject () ;
  }
  GALGAS_string var_accepted_5F_llvmName_26340 = function_llvmNameForLocalVariable (function_acceptVariableOmnibusName (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 635)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 635)) ;
  GALGAS_string var_accepted_5F_llvmName_5F_loaded_26423 = function_llvmNameForLocalVariable (function_acceptVariableOmnibusName (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 636)).add_operation (GALGAS_string (".loaded"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 636)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 636)) ;
  const GALGAS_guardImplementationRoutineIR temp_11 = this ;
  switch (temp_11.readProperty_mGuardKindGenerationIR ().enumValue ()) {
  case GALGAS_guardKindGenerationIR::kNotBuilt:
    break ;
  case GALGAS_guardKindGenerationIR::kEnum_baseGuard:
    {
      GALGAS_string var_accepted_5F_label_26622 = function_acceptVariableOmnibusName (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 640)).add_operation (GALGAS_string (".guard.accepted"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 640)) ;
      GALGAS_string var_rejected_5F_label_26696 = function_acceptVariableOmnibusName (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 641)).add_operation (GALGAS_string (".guard.rejected"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 641)) ;
      const GALGAS_guardImplementationRoutineIR temp_12 = this ;
      extensionMethod_instructionListLLVMCode (temp_12.readProperty_mInstructionGenerationList (), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 642)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_accepted_5F_llvmName_5F_loaded_26423, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 643)).add_operation (GALGAS_string (" = load i1, i1* "), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 643)).add_operation (var_accepted_5F_llvmName_26340, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 643)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 643)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 643)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (var_accepted_5F_llvmName_5F_loaded_26423, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 644)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 644)).add_operation (var_accepted_5F_label_26622, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 644)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 644)).add_operation (var_rejected_5F_label_26696, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 644)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 644)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 644)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(var_accepted_5F_label_26622.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 645)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 645)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @accept.guard ()\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 646)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret i1 true\n\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 647)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(var_rejected_5F_label_26696.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 648)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 648)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret i1 false\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 649)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 650)) ;
    }
    break ;
  case GALGAS_guardKindGenerationIR::kEnum_convenienceGuard:
    {
      const cEnumAssociatedValues_guardKindGenerationIR_convenienceGuard * extractPtr_28710 = (const cEnumAssociatedValues_guardKindGenerationIR_convenienceGuard *) (temp_11.readProperty_mGuardKindGenerationIR ().unsafePointer ()) ;
      const GALGAS_allocaList extractedValue_27361_baseGuardAllocaList = extractPtr_28710->mAssociatedValue0 ;
      const GALGAS_instructionListIR extractedValue_27381_baseGuardInstructionGenerationList = extractPtr_28710->mAssociatedValue1 ;
      const GALGAS_string extractedValue_27416_baseGuardMangledName = extractPtr_28710->mAssociatedValue2 ;
      const GALGAS_procCallEffectiveParameterListIR extractedValue_27437_baseGuardEffectiveParameterList = extractPtr_28710->mAssociatedValue3 ;
      extensionMethod_generateAllocaList (extractedValue_27361_baseGuardAllocaList, ioArgument_ioLLVMcode, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 652)) ;
      extensionMethod_instructionListLLVMCode (extractedValue_27381_baseGuardInstructionGenerationList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 653)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %invoked.guard.result = call i1 @").add_operation (extractedValue_27416_baseGuardMangledName.getter_assemblerRepresentation (SOURCE_FILE ("declaration-guard.galgas", 654)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 654)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 654)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ("), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 655)) ;
      cEnumerator_procCallEffectiveParameterListIR enumerator_27816 (extractedValue_27437_baseGuardEffectiveParameterList, EnumerationOrder::up) ;
      while (enumerator_27816.hasCurrentObject ()) {
        switch (enumerator_27816.current_mEffectiveParameterPassingMode (HERE).enumValue ()) {
        case GALGAS_procEffectiveParameterPassingModeIR::kNotBuilt:
          break ;
        case GALGAS_procEffectiveParameterPassingModeIR::kEnum_input:
          {
            ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_27816.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 659)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 659)).add_operation (extensionGetter_llvmName (enumerator_27816.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 659)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 659)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 659)) ;
          }
          break ;
        case GALGAS_procEffectiveParameterPassingModeIR::kEnum_output:
          {
            ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_27816.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 661)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 661)).add_operation (extensionGetter_llvmName (enumerator_27816.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 661)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 661)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 661)) ;
          }
          break ;
        case GALGAS_procEffectiveParameterPassingModeIR::kEnum_outputInput:
          {
            ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_27816.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 663)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 663)).add_operation (extensionGetter_llvmName (enumerator_27816.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 663)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 663)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 663)) ;
          }
          break ;
        }
        if (enumerator_27816.hasNextObject ()) {
          ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 666)) ;
        }
        enumerator_27816.gotoNextObject () ;
      }
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (")\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 668)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 %invoked.guard.result, label %invoked.guard.acceptation, label %invoked.guard.rejection\n\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 669)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("invoked.guard.acceptation:\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 670)) ;
      const GALGAS_guardImplementationRoutineIR temp_13 = this ;
      extensionMethod_instructionListLLVMCode (temp_13.readProperty_mInstructionGenerationList (), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 671)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret i1 true\n\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 672)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("invoked.guard.rejection:\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 673)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret i1 false\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 674)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 675)) ;
    }
    break ;
  }
  ioArgument_ioGenerationAdds.mProperty_mExternFunctionDeclarationSet.addAssign_operation (GALGAS_string ("void @accept.guard ()")  COMMA_SOURCE_FILE ("declaration-guard.galgas", 677)) ;
  ioArgument_ioGenerationAdds.mProperty_mExternFunctionDeclarationSet.addAssign_operation (GALGAS_string ("i1 @xtr.user.result ()")  COMMA_SOURCE_FILE ("declaration-guard.galgas", 678)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@guardImplementationRoutineIR enterAccessibleEntities'
//
//--------------------------------------------------------------------------------------------------

void cPtr_guardImplementationRoutineIR::method_enterAccessibleEntities (GALGAS_stringset & ioArgument_ioInvokedRoutineSet,
                                                                        GALGAS_uint & ioArgument_ioMaxBranchOfOnInstructions,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_guardImplementationRoutineIR temp_0 = this ;
  extensionMethod_enterAccessibleEntities (temp_0.readProperty_mInstructionGenerationList (), ioArgument_ioInvokedRoutineSet, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 687)) ;
  const GALGAS_guardImplementationRoutineIR temp_1 = this ;
  switch (temp_1.readProperty_mGuardKindGenerationIR ().enumValue ()) {
  case GALGAS_guardKindGenerationIR::kNotBuilt:
    break ;
  case GALGAS_guardKindGenerationIR::kEnum_baseGuard:
    {
    }
    break ;
  case GALGAS_guardKindGenerationIR::kEnum_convenienceGuard:
    {
      const cEnumAssociatedValues_guardKindGenerationIR_convenienceGuard * extractPtr_29597 = (const cEnumAssociatedValues_guardKindGenerationIR_convenienceGuard *) (temp_1.readProperty_mGuardKindGenerationIR ().unsafePointer ()) ;
      const GALGAS_instructionListIR extractedValue_29344_baseGuardInstructionGenerationList = extractPtr_29597->mAssociatedValue1 ;
      const GALGAS_string extractedValue_29379_baseGuardImplementationMangledName = extractPtr_29597->mAssociatedValue2 ;
      ioArgument_ioInvokedRoutineSet.addAssign_operation (extractedValue_29379_baseGuardImplementationMangledName  COMMA_SOURCE_FILE ("declaration-guard.galgas", 691)) ;
      extensionMethod_enterAccessibleEntities (extractedValue_29344_baseGuardInstructionGenerationList, ioArgument_ioInvokedRoutineSet, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 692)) ;
    }
    break ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Routine 'routineTypedSignature&?!'
//
//--------------------------------------------------------------------------------------------------

void routine_routineTypedSignature_26__3F__21_ (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                const GALGAS_routineFormalArgumentListAST constinArgument_inFormalArgumentList,
                                                GALGAS_routineTypedSignature & outArgument_outSignature,
                                                Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSignature.drop () ; // Release 'out' argument
  GALGAS_routineTypedSignature temp_0 = GALGAS_routineTypedSignature::init (inCompiler COMMA_SOURCE_FILE ("formal-arguments.galgas", 167)) ;
  outArgument_outSignature = temp_0 ;
  cEnumerator_routineFormalArgumentListAST enumerator_6241 (constinArgument_inFormalArgumentList, EnumerationOrder::up) ;
  while (enumerator_6241.hasCurrentObject ()) {
    GALGAS_unifiedTypeMapEntry var_typeProxy_6344 ;
    {
    extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_6241.current_mFormalArgumentTypeName (HERE), var_typeProxy_6344, inCompiler COMMA_SOURCE_FILE ("formal-arguments.galgas", 169)) ;
    }
    outArgument_outSignature.addAssign_operation (enumerator_6241.current_mFormalArgumentPassingMode (HERE), enumerator_6241.current_mSelector (HERE), var_typeProxy_6344, enumerator_6241.current_mFormalArgumentName (HERE)  COMMA_SOURCE_FILE ("formal-arguments.galgas", 170)) ;
    enumerator_6241.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'routineTypedSignature2??!'
//
//--------------------------------------------------------------------------------------------------

void routine_routineTypedSignature_32__3F__3F__21_ (GALGAS_unifiedTypeMap inArgument_inTypeMap,
                                                    const GALGAS_routineFormalArgumentListAST constinArgument_inFormalArgumentList,
                                                    GALGAS_routineTypedSignature & outArgument_outSignature,
                                                    Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSignature.drop () ; // Release 'out' argument
  GALGAS_routineTypedSignature temp_0 = GALGAS_routineTypedSignature::init (inCompiler COMMA_SOURCE_FILE ("formal-arguments.galgas", 180)) ;
  outArgument_outSignature = temp_0 ;
  cEnumerator_routineFormalArgumentListAST enumerator_6866 (constinArgument_inFormalArgumentList, EnumerationOrder::up) ;
  while (enumerator_6866.hasCurrentObject ()) {
    GALGAS_unifiedTypeMapEntry var_typeProxy_6921 = extensionGetter_searchKey (inArgument_inTypeMap, enumerator_6866.current_mFormalArgumentTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("formal-arguments.galgas", 182)) ;
    outArgument_outSignature.addAssign_operation (enumerator_6866.current_mFormalArgumentPassingMode (HERE), enumerator_6866.current_mSelector (HERE), var_typeProxy_6921, enumerator_6866.current_mFormalArgumentName (HERE)  COMMA_SOURCE_FILE ("formal-arguments.galgas", 183)) ;
    enumerator_6866.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'enterFormalArguments?context?&&?warningOnUnusedArgs'
//
//--------------------------------------------------------------------------------------------------

void routine_enterFormalArguments_3F_context_3F__26__26__3F_warningOnUnusedArgs (const GALGAS_semanticContext constinArgument_inContext,
                                                                                 const GALGAS_routineFormalArgumentListAST constinArgument_inFormalArgumentsAST,
                                                                                 GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                                 GALGAS_routineFormalArgumentListIR & ioArgument_ioFormalArguments,
                                                                                 const GALGAS_bool constinArgument_inUnusedWarning,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_routineFormalArgumentListAST enumerator_9480 (constinArgument_inFormalArgumentsAST, EnumerationOrder::up) ;
  while (enumerator_9480.hasCurrentObject ()) {
    GALGAS_omnibusType var_typeProxy_9535 = extensionGetter_type (extensionGetter_searchKey (constinArgument_inContext.readProperty_mTypeMap (), enumerator_9480.current_mFormalArgumentTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("formal-arguments.galgas", 241)), inCompiler COMMA_SOURCE_FILE ("formal-arguments.galgas", 241)) ;
    ioArgument_ioFormalArguments.addAssign_operation (enumerator_9480.current_mFormalArgumentPassingMode (HERE), var_typeProxy_9535, enumerator_9480.current_mFormalArgumentName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("formal-arguments.galgas", 242)) ;
    switch (enumerator_9480.current_mFormalArgumentPassingMode (HERE).enumValue ()) {
    case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_input:
      {
        enumGalgasBool test_0 = kBoolTrue ;
        if (kBoolTrue == test_0) {
          test_0 = GALGAS_bool (ComparisonKind::notEqual, enumerator_9480.current_mFormalArgumentName (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_0) {
            enumGalgasBool test_1 = kBoolTrue ;
            if (kBoolTrue == test_1) {
              test_1 = constinArgument_inUnusedWarning.boolEnum () ;
              if (kBoolTrue == test_1) {
                {
                extensionSetter_insertLocalConstant (ioArgument_ioUniversalMap, enumerator_9480.current_mFormalArgumentName (HERE), GALGAS_bool (true), var_typeProxy_9535, enumerator_9480.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("formal-arguments.galgas", 247)) ;
                }
              }
            }
            if (kBoolFalse == test_1) {
              {
              extensionSetter_insertUsedLocalConstant (ioArgument_ioUniversalMap, enumerator_9480.current_mFormalArgumentName (HERE), GALGAS_bool (true), var_typeProxy_9535, enumerator_9480.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("formal-arguments.galgas", 249)) ;
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
          test_2 = GALGAS_bool (ComparisonKind::notEqual, enumerator_9480.current_mFormalArgumentName (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_2) {
            enumGalgasBool test_3 = kBoolTrue ;
            if (kBoolTrue == test_3) {
              test_3 = constinArgument_inUnusedWarning.boolEnum () ;
              if (kBoolTrue == test_3) {
                {
                extensionSetter_insertLocalVariable (ioArgument_ioUniversalMap, enumerator_9480.current_mFormalArgumentName (HERE), var_typeProxy_9535, enumerator_9480.current_mFormalArgumentName (HERE), GALGAS_valuedObjectState::class_func_hasUnreadValue (SOURCE_FILE ("formal-arguments.galgas", 255)), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("formal-arguments.galgas", 255)) ;
                }
              }
            }
            if (kBoolFalse == test_3) {
              {
              extensionSetter_insertLocalVariable (ioArgument_ioUniversalMap, enumerator_9480.current_mFormalArgumentName (HERE), var_typeProxy_9535, enumerator_9480.current_mFormalArgumentName (HERE), GALGAS_valuedObjectState::class_func_hasReadValue (SOURCE_FILE ("formal-arguments.galgas", 257)), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("formal-arguments.galgas", 257)) ;
              }
            }
          }
        }
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_output:
      {
        {
        extensionSetter_insertLocalVariable (ioArgument_ioUniversalMap, enumerator_9480.current_mFormalArgumentName (HERE), var_typeProxy_9535, enumerator_9480.current_mFormalArgumentName (HERE), GALGAS_valuedObjectState::class_func_noValue (SOURCE_FILE ("formal-arguments.galgas", 261)), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("formal-arguments.galgas", 261)) ;
        }
      }
      break ;
    }
    enumerator_9480.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@regularRoutineIR enterAccessibleEntities'
//
//--------------------------------------------------------------------------------------------------

void cPtr_regularRoutineIR::method_enterAccessibleEntities (GALGAS_stringset & ioArgument_ioInvokedRoutineSet,
                                                            GALGAS_uint & ioArgument_ioMaxBranchOfOnInstructions,
                                                            Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_regularRoutineIR temp_0 = this ;
  cEnumerator_instructionListIR enumerator_6262 (temp_0.readProperty_mInstructionGenerationList (), EnumerationOrder::up) ;
  while (enumerator_6262.hasCurrentObject ()) {
    callExtensionMethod_enterAccessibleEntities ((cPtr_abstractInstructionIR *) enumerator_6262.current (HERE).readProperty_mInstructionGeneration ().ptr (), ioArgument_ioInvokedRoutineSet, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 154)) ;
    enumerator_6262.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@regularRoutineIR llvmCodeGeneration'
//
//--------------------------------------------------------------------------------------------------

void cPtr_regularRoutineIR::method_llvmCodeGeneration (GALGAS_string & ioArgument_ioLLVMcode,
                                                       const GALGAS_generationContext constinArgument_inGenerationContext,
                                                       GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                       Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define"), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 168)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_regularRoutineIR temp_1 = this ;
    test_0 = temp_1.readProperty_mExportedFunction ().operator_not (SOURCE_FILE ("regular-routine-analysis.galgas", 169)).boolEnum () ;
    if (kBoolTrue == test_0) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" internal"), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 170)) ;
    }
  }
  const GALGAS_regularRoutineIR temp_2 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ").add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_2.readProperty_mReturnType ().ptr (), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 172)), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 172)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 172)) ;
  const GALGAS_regularRoutineIR temp_3 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" @").add_operation (temp_3.readProperty_mRoutineMangledName ().readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("regular-routine-analysis.galgas", 173)), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 173)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 173)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 173)) ;
  const GALGAS_regularRoutineIR temp_4 = this ;
  GALGAS_string temp_5 ;
  const enumGalgasBool test_6 = GALGAS_bool (ComparisonKind::equal, temp_4.readProperty_mReceiverType ().readProperty_kind ().objectCompare (GALGAS_typeKind::class_func_void (SOURCE_FILE ("regular-routine-analysis.galgas", 174)))).boolEnum () ;
  if (kBoolTrue == test_6) {
    temp_5 = GALGAS_string::makeEmptyString () ;
  }else if (kBoolFalse == test_6) {
    const GALGAS_regularRoutineIR temp_7 = this ;
    temp_5 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_7.readProperty_mReceiverType ().ptr (), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 176)) ;
  }
  GALGAS_string var_receiverLLVMTypeName_6958 = temp_5 ;
  GALGAS_bool var_first_7084 = GALGAS_bool (true) ;
  enumGalgasBool test_8 = kBoolTrue ;
  if (kBoolTrue == test_8) {
    test_8 = GALGAS_bool (ComparisonKind::notEqual, var_receiverLLVMTypeName_6958.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_8) {
      ioArgument_ioLLVMcode.plusAssign_operation(var_receiverLLVMTypeName_6958.add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 180)).add_operation (function_llvmNameForSelf (inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 180)), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 180)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 180)) ;
      var_first_7084 = GALGAS_bool (false) ;
    }
  }
  const GALGAS_regularRoutineIR temp_9 = this ;
  cEnumerator_routineFormalArgumentListIR enumerator_7272 (temp_9.readProperty_mFormalArgumentListForGeneration (), EnumerationOrder::up) ;
  while (enumerator_7272.hasCurrentObject ()) {
    enumGalgasBool test_10 = kBoolTrue ;
    if (kBoolTrue == test_10) {
      test_10 = var_first_7084.boolEnum () ;
      if (kBoolTrue == test_10) {
        var_first_7084 = GALGAS_bool (false) ;
      }
    }
    if (kBoolFalse == test_10) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 187)) ;
    }
    switch (enumerator_7272.current_mFormalArgumentKind (HERE).enumValue ()) {
    case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_input:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_7272.current_mFormalArgumentType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 191)).add_operation (GALGAS_string (" %in."), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 191)).add_operation (enumerator_7272.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 191)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 191)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_output:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_7272.current_mFormalArgumentType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 193)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 193)).add_operation (function_llvmNameForLocalVariable (enumerator_7272.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 193)), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 193)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 193)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_7272.current_mFormalArgumentType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 195)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 195)).add_operation (function_llvmNameForLocalVariable (enumerator_7272.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 195)), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 195)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 195)) ;
      }
      break ;
    }
    enumerator_7272.gotoNextObject () ;
  }
  enumGalgasBool test_11 = kBoolTrue ;
  if (kBoolTrue == test_11) {
    GALGAS_bool test_12 = GALGAS_bool (gOption_omnibus_5F_options_noPanicGeneration.readProperty_value ()).operator_not (SOURCE_FILE ("regular-routine-analysis.galgas", 198)) ;
    if (kBoolTrue == test_12.boolEnum ()) {
      const GALGAS_regularRoutineIR temp_13 = this ;
      test_12 = temp_13.readProperty_mAppendFileAndLineArgumentForPanicLocation () ;
    }
    test_11 = test_12.boolEnum () ;
    if (kBoolTrue == test_11) {
      enumGalgasBool test_14 = kBoolTrue ;
      if (kBoolTrue == test_14) {
        test_14 = var_first_7084.operator_not (SOURCE_FILE ("regular-routine-analysis.galgas", 199)).boolEnum () ;
        if (kBoolTrue == test_14) {
          ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 200)) ;
        }
      }
      ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inGenerationContext.readProperty_mPanicLineLLVMType ().ptr (), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 202)).add_operation (GALGAS_string (" %LINE, i8* %FILE"), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 202)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 202)) ;
    }
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (")").add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 204)), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 204)).add_operation (GALGAS_string ("{\n"), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 204)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 204)) ;
  const GALGAS_regularRoutineIR temp_15 = this ;
  GALGAS_allocaList var_allocaList_8189 = temp_15.readProperty_mAllocaList () ;
  enumGalgasBool test_16 = kBoolTrue ;
  if (kBoolTrue == test_16) {
    const GALGAS_regularRoutineIR temp_17 = this ;
    test_16 = GALGAS_bool (ComparisonKind::notEqual, temp_17.readProperty_mReturnType ().readProperty_kind ().objectCompare (GALGAS_typeKind::class_func_void (SOURCE_FILE ("regular-routine-analysis.galgas", 207)))).boolEnum () ;
    if (kBoolTrue == test_16) {
      const GALGAS_regularRoutineIR temp_18 = this ;
      var_allocaList_8189.addAssign_operation (function_llvmNameForLocalVariable (function_functionResultVariableName (inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 208)), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 208)), temp_18.readProperty_mReturnType (), GALGAS_bool (false)  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 208)) ;
    }
  }
  const GALGAS_regularRoutineIR temp_19 = this ;
  cEnumerator_routineFormalArgumentListIR enumerator_8452 (temp_19.readProperty_mFormalArgumentListForGeneration (), EnumerationOrder::up) ;
  while (enumerator_8452.hasCurrentObject ()) {
    switch (enumerator_8452.current_mFormalArgumentKind (HERE).enumValue ()) {
    case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_input:
      {
        var_allocaList_8189.addAssign_operation (function_llvmNameForLocalVariable (enumerator_8452.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 214)), enumerator_8452.current_mFormalArgumentType (HERE), GALGAS_bool (true)  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 214)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_output:
    case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
      {
      }
      break ;
    }
    enumerator_8452.gotoNextObject () ;
  }
  extensionMethod_generateAllocaList (var_allocaList_8189, ioArgument_ioLLVMcode, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 218)) ;
  const GALGAS_regularRoutineIR temp_20 = this ;
  cEnumerator_routineFormalArgumentListIR enumerator_8926 (temp_20.readProperty_mFormalArgumentListForGeneration (), EnumerationOrder::up) ;
  while (enumerator_8926.hasCurrentObject ()) {
    switch (enumerator_8926.current_mFormalArgumentKind (HERE).enumValue ()) {
    case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_input:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--------- Input argument '").add_operation (enumerator_8926.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 224)).add_operation (GALGAS_string ("'\n"), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 224)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 224)) ;
        GALGAS_string var_llvmType_9129 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_8926.current_mFormalArgumentType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 225)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store ").add_operation (var_llvmType_9129, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 226)).add_operation (GALGAS_string (" %in."), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 226)).add_operation (enumerator_8926.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 226)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 226)).add_operation (var_llvmType_9129, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 226)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 226)).add_operation (function_llvmNameForLocalVariable (enumerator_8926.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 227)), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 226)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 227)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 226)) ;
        callExtensionMethod_generateRetain ((cPtr_omnibusType *) enumerator_8926.current_mFormalArgumentType (HERE).ptr (), enumerator_8926.current_mFormalArgumentName (HERE), ioArgument_ioLLVMcode, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 228)) ;
        enumGalgasBool test_21 = kBoolTrue ;
        if (kBoolTrue == test_21) {
          const GALGAS_regularRoutineIR temp_22 = this ;
          test_21 = GALGAS_bool (ComparisonKind::equal, temp_22.readProperty_mKind ().objectCompare (GALGAS_routineKind::class_func_section (SOURCE_FILE ("regular-routine-analysis.galgas", 229)))).boolEnum () ;
          if (kBoolTrue == test_21) {
            callExtensionMethod_generateInsulate ((cPtr_omnibusType *) enumerator_8926.current_mFormalArgumentType (HERE).ptr (), enumerator_8926.current_mFormalArgumentName (HERE), ioArgument_ioLLVMcode, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 230)) ;
          }
        }
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
      {
        enumGalgasBool test_23 = kBoolTrue ;
        if (kBoolTrue == test_23) {
          const GALGAS_regularRoutineIR temp_24 = this ;
          test_23 = GALGAS_bool (ComparisonKind::equal, temp_24.readProperty_mKind ().objectCompare (GALGAS_routineKind::class_func_section (SOURCE_FILE ("regular-routine-analysis.galgas", 233)))).boolEnum () ;
          if (kBoolTrue == test_23) {
            ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--------- Insulate input/output argument '").add_operation (enumerator_8926.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 234)).add_operation (GALGAS_string ("'\n"), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 234)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 234)) ;
            callExtensionMethod_generateInsulate ((cPtr_omnibusType *) enumerator_8926.current_mFormalArgumentType (HERE).ptr (), enumerator_8926.current_mFormalArgumentName (HERE), ioArgument_ioLLVMcode, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 235)) ;
          }
        }
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_output:
      {
      }
      break ;
    }
    enumerator_8926.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--------- Function instruction list\n"), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 241)) ;
  const GALGAS_regularRoutineIR temp_25 = this ;
  extensionMethod_instructionListLLVMCode (temp_25.readProperty_mInstructionGenerationList (), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 242)) ;
  const GALGAS_regularRoutineIR temp_26 = this ;
  cEnumerator_routineFormalArgumentListIR enumerator_10232 (temp_26.readProperty_mFormalArgumentListForGeneration (), EnumerationOrder::up) ;
  while (enumerator_10232.hasCurrentObject ()) {
    switch (enumerator_10232.current_mFormalArgumentKind (HERE).enumValue ()) {
    case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_input:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--------- Release input argument '").add_operation (enumerator_10232.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 248)).add_operation (GALGAS_string ("'\n"), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 248)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 248)) ;
        callExtensionMethod_generateRelease ((cPtr_omnibusType *) enumerator_10232.current_mFormalArgumentType (HERE).ptr (), enumerator_10232.current_mFormalArgumentName (HERE), ioArgument_ioLLVMcode, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 249)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
      {
        enumGalgasBool test_27 = kBoolTrue ;
        if (kBoolTrue == test_27) {
          const GALGAS_regularRoutineIR temp_28 = this ;
          test_27 = GALGAS_bool (ComparisonKind::equal, temp_28.readProperty_mKind ().objectCompare (GALGAS_routineKind::class_func_section (SOURCE_FILE ("regular-routine-analysis.galgas", 251)))).boolEnum () ;
          if (kBoolTrue == test_27) {
            ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--------- Insulate input/output argument '").add_operation (enumerator_10232.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 252)).add_operation (GALGAS_string ("'\n"), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 252)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 252)) ;
            callExtensionMethod_generateInsulate ((cPtr_omnibusType *) enumerator_10232.current_mFormalArgumentType (HERE).ptr (), enumerator_10232.current_mFormalArgumentName (HERE), ioArgument_ioLLVMcode, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 253)) ;
          }
        }
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_output:
      {
        enumGalgasBool test_29 = kBoolTrue ;
        if (kBoolTrue == test_29) {
          const GALGAS_regularRoutineIR temp_30 = this ;
          test_29 = GALGAS_bool (ComparisonKind::equal, temp_30.readProperty_mKind ().objectCompare (GALGAS_routineKind::class_func_section (SOURCE_FILE ("regular-routine-analysis.galgas", 256)))).boolEnum () ;
          if (kBoolTrue == test_29) {
            ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--------- Insulate output argument '").add_operation (enumerator_10232.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 257)).add_operation (GALGAS_string ("'\n"), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 257)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 257)) ;
            callExtensionMethod_generateInsulate ((cPtr_omnibusType *) enumerator_10232.current_mFormalArgumentType (HERE).ptr (), enumerator_10232.current_mFormalArgumentName (HERE), ioArgument_ioLLVMcode, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 258)) ;
          }
        }
      }
      break ;
    }
    enumerator_10232.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--------- Return\n"), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 263)) ;
  enumGalgasBool test_31 = kBoolTrue ;
  if (kBoolTrue == test_31) {
    const GALGAS_regularRoutineIR temp_32 = this ;
    test_31 = GALGAS_bool (ComparisonKind::equal, temp_32.readProperty_mReturnType ().readProperty_kind ().objectCompare (GALGAS_typeKind::class_func_void (SOURCE_FILE ("regular-routine-analysis.galgas", 264)))).boolEnum () ;
    if (kBoolTrue == test_31) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 265)) ;
    }
  }
  if (kBoolFalse == test_31) {
    GALGAS_string var_resultVarLLVMName_11203 = function_llvmNameForLocalVariable (function_functionResultVariableName (inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 267)), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 267)) ;
    const GALGAS_regularRoutineIR temp_33 = this ;
    const GALGAS_regularRoutineIR temp_34 = this ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %result = load ").add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_33.readProperty_mReturnType ().ptr (), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 268)), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 268)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 268)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_34.readProperty_mReturnType ().ptr (), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 268)), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 268)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 268)).add_operation (var_resultVarLLVMName_11203, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 268)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 268)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 268)) ;
    const GALGAS_regularRoutineIR temp_35 = this ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret ").add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_35.readProperty_mReturnType ().ptr (), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 269)), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 269)).add_operation (GALGAS_string (" %result\n"), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 269)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 269)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n\n"), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 271)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Function 'checkModeAndReturnsRoutineLLVMName'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string function_checkModeAndReturnsRoutineLLVMName (const GALGAS_routineLLVMNameDict & constinArgument_inCalledRoutineDictionary,
                                                           const GALGAS_mode & constinArgument_inCallerRoutineMode,
                                                           const GALGAS_lstring & constinArgument_inRoutineName,
                                                           Compiler * inCompiler
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
    GALGAS_string var_m_8475 = GALGAS_string ("the '").add_operation (constinArgument_inRoutineName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("logical-modes.galgas", 187)).add_operation (GALGAS_string ("' routine cannot be invoked from '"), inCompiler COMMA_SOURCE_FILE ("logical-modes.galgas", 187)).add_operation (extensionGetter_string (constinArgument_inCallerRoutineMode, inCompiler COMMA_SOURCE_FILE ("logical-modes.galgas", 187)), inCompiler COMMA_SOURCE_FILE ("logical-modes.galgas", 187)).add_operation (GALGAS_string ("' mode, but only from:"), inCompiler COMMA_SOURCE_FILE ("logical-modes.galgas", 187)) ;
    cEnumerator_routineLLVMNameDict enumerator_8604 (constinArgument_inCalledRoutineDictionary, EnumerationOrder::up) ;
    while (enumerator_8604.hasCurrentObject ()) {
      var_m_8475.plusAssign_operation(GALGAS_string ("\n  - '").add_operation (extensionGetter_string (enumerator_8604.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("logical-modes.galgas", 189)), inCompiler COMMA_SOURCE_FILE ("logical-modes.galgas", 189)).add_operation (GALGAS_string ("' mode"), inCompiler COMMA_SOURCE_FILE ("logical-modes.galgas", 189)), inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 189)) ;
      enumerator_8604.gotoNextObject () ;
    }
    TC_Array <FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (constinArgument_inRoutineName.readProperty_location (), var_m_8475, fixItArray1  COMMA_SOURCE_FILE ("logical-modes.galgas", 191)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_checkModeAndReturnsRoutineLLVMName [4] = {
  & kTypeDescriptor_GALGAS_routineLLVMNameDict,
  & kTypeDescriptor_GALGAS_mode,
  & kTypeDescriptor_GALGAS_lstring,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_checkModeAndReturnsRoutineLLVMName (Compiler * inCompiler,
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

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_checkModeAndReturnsRoutineLLVMName ("checkModeAndReturnsRoutineLLVMName",
                                                                                    functionWithGenericHeader_checkModeAndReturnsRoutineLLVMName,
                                                                                    & kTypeDescriptor_GALGAS_string,
                                                                                    3,
                                                                                    functionArgs_checkModeAndReturnsRoutineLLVMName) ;

//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@panicAST enterInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_panicAST::method_enterInPrecedenceGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                   Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_panicAST temp_0 = this ;
  GALGAS_string temp_1 ;
  const enumGalgasBool test_2 = temp_0.readProperty_mIsSetup ().boolEnum () ;
  if (kBoolTrue == test_2) {
    temp_1 = GALGAS_string ("setup") ;
  }else if (kBoolFalse == test_2) {
    temp_1 = GALGAS_string ("loop") ;
  }
  const GALGAS_panicAST temp_3 = this ;
  const GALGAS_panicAST temp_4 = this ;
  GALGAS_lstring var_nodeName_2603 = GALGAS_lstring::init_21__21_ (GALGAS_string ("panic ").add_operation (temp_1, inCompiler COMMA_SOURCE_FILE ("panic.galgas", 60)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 60)).add_operation (temp_3.readProperty_mPriority ().readProperty_bigint ().getter_string (SOURCE_FILE ("panic.galgas", 60)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 60)), temp_4.readProperty_mPriority ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GALGAS_panicAST temp_5 = this ;
  ioArgument_ioGraph.setter_addNode (var_nodeName_2603, temp_5, inCompiler COMMA_SOURCE_FILE ("panic.galgas", 63)) ;
  }
  const GALGAS_panicAST temp_6 = this ;
  GALGAS_lstring var_configNode_2795 = GALGAS_lstring::init_21__21_ (function_configurationNodeNameForPrecedenceGraph (inCompiler COMMA_SOURCE_FILE ("panic.galgas", 64)), temp_6.readProperty_mPriority ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  ioArgument_ioGraph.setter_addEdge (var_nodeName_2603, var_configNode_2795 COMMA_SOURCE_FILE ("panic.galgas", 65)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@panicAST keyRepresentationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_panicAST::getter_keyRepresentationForErrorSignaling (Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outRepresentation ; // Returned variable
  const GALGAS_panicAST temp_0 = this ;
  GALGAS_string temp_1 ;
  const enumGalgasBool test_2 = temp_0.readProperty_mIsSetup ().boolEnum () ;
  if (kBoolTrue == test_2) {
    temp_1 = GALGAS_string ("setup") ;
  }else if (kBoolFalse == test_2) {
    temp_1 = GALGAS_string ("loop") ;
  }
  const GALGAS_panicAST temp_3 = this ;
  result_outRepresentation = GALGAS_string ("panic ").add_operation (temp_1, inCompiler COMMA_SOURCE_FILE ("panic.galgas", 71)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 71)).add_operation (temp_3.readProperty_mPriority ().readProperty_bigint ().getter_string (SOURCE_FILE ("panic.galgas", 71)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 71)) ;
//---
  return result_outRepresentation ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@panicAST locationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GALGAS_location cPtr_panicAST::getter_locationForErrorSignaling (Compiler */* inCompiler */
                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_location result_outLocation ; // Returned variable
  const GALGAS_panicAST temp_0 = this ;
  result_outLocation = temp_0.readProperty_mPriority ().readProperty_location () ;
//---
  return result_outLocation ;
}


//--------------------------------------------------------------------------------------------------
//
//Function 'panicRoutineNameForLocationFile'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string function_panicRoutineNameForLocationFile (const GALGAS_location & constinArgument_inLocation,
                                                        Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inLocation.getter_isNowhere (SOURCE_FILE ("panic.galgas", 85)).boolEnum () ;
    if (kBoolTrue == test_0) {
      result_result = GALGAS_string ("raise.panic.nofile") ;
    }
  }
  if (kBoolFalse == test_0) {
    result_result = GALGAS_string ("raise.panic.file.").add_operation (constinArgument_inLocation.getter_file (inCompiler COMMA_SOURCE_FILE ("panic.galgas", 88)).getter_lastPathComponent (SOURCE_FILE ("panic.galgas", 88)).getter_stringByDeletingPathExtension (SOURCE_FILE ("panic.galgas", 88)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 88)) ;
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_panicRoutineNameForLocationFile [2] = {
  & kTypeDescriptor_GALGAS_location,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_panicRoutineNameForLocationFile (Compiler * inCompiler,
                                                                                const cObjectArray & inEffectiveParameterArray,
                                                                                const GALGAS_location & /* inErrorLocation */
                                                                                COMMA_LOCATION_ARGS) {
  const GALGAS_location operand0 = GALGAS_location::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                   inCompiler
                                                                   COMMA_THERE) ;
  return function_panicRoutineNameForLocationFile (operand0,
                                                   inCompiler
                                                   COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_panicRoutineNameForLocationFile ("panicRoutineNameForLocationFile",
                                                                                 functionWithGenericHeader_panicRoutineNameForLocationFile,
                                                                                 & kTypeDescriptor_GALGAS_string,
                                                                                 1,
                                                                                 functionArgs_panicRoutineNameForLocationFile) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'panicRoutineNameForFilePath'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string function_panicRoutineNameForFilePath (const GALGAS_string & constinArgument_inFilePath,
                                                    Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (ComparisonKind::equal, constinArgument_inFilePath.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      result_result = GALGAS_string ("raise.panic.nofile") ;
    }
  }
  if (kBoolFalse == test_0) {
    result_result = GALGAS_string ("raise.panic.file.").add_operation (constinArgument_inFilePath.getter_lastPathComponent (SOURCE_FILE ("panic.galgas", 98)).getter_stringByDeletingPathExtension (SOURCE_FILE ("panic.galgas", 98)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 98)) ;
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_panicRoutineNameForFilePath [2] = {
  & kTypeDescriptor_GALGAS_string,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_panicRoutineNameForFilePath (Compiler * inCompiler,
                                                                            const cObjectArray & inEffectiveParameterArray,
                                                                            const GALGAS_location & /* inErrorLocation */
                                                                            COMMA_LOCATION_ARGS) {
  const GALGAS_string operand0 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  return function_panicRoutineNameForFilePath (operand0,
                                               inCompiler
                                               COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_panicRoutineNameForFilePath ("panicRoutineNameForFilePath",
                                                                             functionWithGenericHeader_panicRoutineNameForFilePath,
                                                                             & kTypeDescriptor_GALGAS_string,
                                                                             1,
                                                                             functionArgs_panicRoutineNameForFilePath) ;

//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@panicAST enterInContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_panicAST::method_enterInContext (GALGAS_semanticContext & ioArgument_ioContext,
                                           GALGAS_declarationDecorationList & ioArgument_ioDecoratedDeclarationList,
                                           GALGAS_decoratedRegularRoutineList & ioArgument_ioDecoratedRoutineList,
                                           GALGAS_routineListIR & /* ioArgument_ioRoutineListIR */,
                                           GALGAS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                           GALGAS_staticEntityMap & /* ioArgument_ioStaticEntityMap */,
                                           GALGAS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                           GALGAS_userLLVMTypeDefinitionListIR & /* ioArgument_ioUserLLVMTypeDefinitionListIR */,
                                           Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_panicAST temp_1 = this ;
    test_0 = temp_1.readProperty_mIsSetup ().boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      const GALGAS_panicAST temp_2 = this ;
      const GALGAS_panicAST temp_3 = this ;
      ioArgument_ioContext.mProperty_mPanicSetupRoutinePriorityMap.setter_insertSetupKey (GALGAS_lstring::init_21__21_ (temp_2.readProperty_mPriority ().readProperty_bigint ().getter_string (SOURCE_FILE ("panic.galgas", 126)), temp_3.readProperty_mPriority ().readProperty_location (), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 126)) ;
      }
    }
  }
  if (kBoolFalse == test_0) {
    {
    const GALGAS_panicAST temp_4 = this ;
    const GALGAS_panicAST temp_5 = this ;
    ioArgument_ioContext.mProperty_mPanicLoopRoutinePriorityMap.setter_insertLoopKey (GALGAS_lstring::init_21__21_ (temp_4.readProperty_mPriority ().readProperty_bigint ().getter_string (SOURCE_FILE ("panic.galgas", 128)), temp_5.readProperty_mPriority ().readProperty_location (), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 128)) ;
    }
  }
  const GALGAS_panicAST temp_6 = this ;
  const GALGAS_panicAST temp_7 = this ;
  ioArgument_ioDecoratedDeclarationList.addAssign_operation (GALGAS_decoratedPanicRoutine::init_21__21_ (temp_6.readProperty_mIsSetup (), temp_7.readProperty_mPriority (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("panic.galgas", 131)) ;
  GALGAS_routineFormalArgumentListAST temp_8 = GALGAS_routineFormalArgumentListAST::init (inCompiler COMMA_SOURCE_FILE ("panic.galgas", 136)) ;
  GALGAS_routineFormalArgumentListAST var_arguments_6463 = temp_8 ;
  var_arguments_6463.addAssign_operation (GALGAS_procFormalArgumentPassingMode::class_func_input (SOURCE_FILE ("panic.galgas", 138)), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("panic.galgas", 139)), ioArgument_ioContext.readProperty_mPanicLineType ().readProperty_llvmBaseTypeName ().getter_nowhere (SOURCE_FILE ("panic.galgas", 140)), GALGAS_string ("LINE").getter_nowhere (SOURCE_FILE ("panic.galgas", 141))  COMMA_SOURCE_FILE ("panic.galgas", 137)) ;
  var_arguments_6463.addAssign_operation (GALGAS_procFormalArgumentPassingMode::class_func_input (SOURCE_FILE ("panic.galgas", 143)), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("panic.galgas", 144)), ioArgument_ioContext.readProperty_mPanicCodeType ().readProperty_llvmBaseTypeName ().getter_nowhere (SOURCE_FILE ("panic.galgas", 145)), GALGAS_string ("CODE").getter_nowhere (SOURCE_FILE ("panic.galgas", 146))  COMMA_SOURCE_FILE ("panic.galgas", 142)) ;
  var_arguments_6463.addAssign_operation (GALGAS_procFormalArgumentPassingMode::class_func_input (SOURCE_FILE ("panic.galgas", 148)), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("panic.galgas", 149)), function_staticStringTypeName (inCompiler COMMA_SOURCE_FILE ("panic.galgas", 150)).getter_nowhere (SOURCE_FILE ("panic.galgas", 150)), GALGAS_string ("FILE").getter_nowhere (SOURCE_FILE ("panic.galgas", 151))  COMMA_SOURCE_FILE ("panic.galgas", 147)) ;
  const GALGAS_panicAST temp_9 = this ;
  GALGAS_string temp_10 ;
  const enumGalgasBool test_11 = temp_9.readProperty_mIsSetup ().boolEnum () ;
  if (kBoolTrue == test_11) {
    temp_10 = GALGAS_string ("setup") ;
  }else if (kBoolFalse == test_11) {
    temp_10 = GALGAS_string ("loop") ;
  }
  const GALGAS_panicAST temp_12 = this ;
  const GALGAS_panicAST temp_13 = this ;
  GALGAS_lstring var_routineMangledName_6839 = GALGAS_lstring::init_21__21_ (GALGAS_string ("panic.").add_operation (temp_10, inCompiler COMMA_SOURCE_FILE ("panic.galgas", 153)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 153)).add_operation (temp_12.readProperty_mPriority ().readProperty_bigint ().getter_string (SOURCE_FILE ("panic.galgas", 153)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 153)), temp_13.readProperty_mPriority ().readProperty_location (), inCompiler COMMA_HERE) ;
  const GALGAS_panicAST temp_14 = this ;
  const GALGAS_panicAST temp_15 = this ;
  ioArgument_ioDecoratedRoutineList.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("panic.galgas", 157)), GALGAS_mode::class_func_panicMode (SOURCE_FILE ("panic.galgas", 158)), GALGAS_bool (false), GALGAS_routineKind::class_func_function (SOURCE_FILE ("panic.galgas", 160)), GALGAS_bool (false), GALGAS_bool (false), GALGAS_routineAttributes::class_func_none (SOURCE_FILE ("panic.galgas", 163)), var_routineMangledName_6839, var_arguments_6463, GALGAS_bool (false), temp_14.readProperty_mPanicInstructionList (), temp_15.readProperty_mEndOfPanicInstructions (), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("panic.galgas", 169))  COMMA_SOURCE_FILE ("panic.galgas", 156)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Routine 'appendPanicRoutines?allSourceFilePaths&intermediateCode'
//
//--------------------------------------------------------------------------------------------------

void routine_appendPanicRoutines_3F_allSourceFilePaths_26_intermediateCode (const GALGAS_stringset constinArgument_inSourceFileAbsolutePathSet,
                                                                            GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioIntermediateCodeStruct.mProperty_mRoutineListIR.addAssign_operation (GALGAS_universalModePanicRoutineIR::init_21__21_isRequired_21_warnsIfUnused (GALGAS_string ("section.user.handle.panic").getter_nowhere (SOURCE_FILE ("panic.galgas", 181)), GALGAS_bool (false), GALGAS_bool (false), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("panic.galgas", 180)) ;
  ioArgument_ioIntermediateCodeStruct.mProperty_mRoutineListIR.addAssign_operation (GALGAS_sectionModePanicRoutineIR::init_21__21_isRequired_21_warnsIfUnused_21__21_ (GALGAS_string ("section.implementation.handle.panic").getter_nowhere (SOURCE_FILE ("panic.galgas", 187)), GALGAS_bool (false), GALGAS_bool (false), ioArgument_ioIntermediateCodeStruct.readProperty_mPanicSetupListIR (), ioArgument_ioIntermediateCodeStruct.readProperty_mPanicLoopListIR (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("panic.galgas", 186)) ;
  cEnumerator_stringset enumerator_8580 (constinArgument_inSourceFileAbsolutePathSet, EnumerationOrder::up) ;
  while (enumerator_8580.hasCurrentObject ()) {
    ioArgument_ioIntermediateCodeStruct.mProperty_mRoutineListIR.addAssign_operation (GALGAS_fileSpecificPanicRoutineIR::init_21__21_isRequired_21_warnsIfUnused_21_ (function_panicRoutineNameForFilePath (enumerator_8580.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 196)).getter_nowhere (SOURCE_FILE ("panic.galgas", 196)), GALGAS_bool (false), GALGAS_bool (false), enumerator_8580.current_key (HERE), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("panic.galgas", 195)) ;
    enumerator_8580.gotoNextObject () ;
  }
  ioArgument_ioIntermediateCodeStruct.mProperty_mRoutineListIR.addAssign_operation (GALGAS_fileSpecificPanicRoutineIR::init_21__21_isRequired_21_warnsIfUnused_21_ (function_panicRoutineNameForFilePath (GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 203)).getter_nowhere (SOURCE_FILE ("panic.galgas", 203)), GALGAS_bool (false), GALGAS_bool (false), GALGAS_string::makeEmptyString (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("panic.galgas", 202)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Once function 'panicModeName'
//
//--------------------------------------------------------------------------------------------------

static GALGAS_string onceFunction_panicModeName (Compiler *
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("panic") ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_panicModeName = false ;
static GALGAS_string gOnceFunctionResult_panicModeName ;

//--------------------------------------------------------------------------------------------------

GALGAS_string function_panicModeName (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_panicModeName) {
    gOnceFunctionResult_panicModeName = onceFunction_panicModeName (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_panicModeName = true ;
  }
  return gOnceFunctionResult_panicModeName ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_panicModeName (void) {
  gOnceFunctionResult_panicModeName.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_panicModeName (nullptr,
                                                         releaseOnceFunctionResult_panicModeName) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_panicModeName [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_panicModeName (Compiler * inCompiler,
                                                              const cObjectArray & /* inEffectiveParameterArray */,
                                                              const GALGAS_location & /* inErrorLocation */
                                                              COMMA_LOCATION_ARGS) {
  return function_panicModeName (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_panicModeName ("panicModeName",
                                                               functionWithGenericHeader_panicModeName,
                                                               & kTypeDescriptor_GALGAS_string,
                                                               0,
                                                               functionArgs_panicModeName) ;

//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@decoratedPanicRoutine semanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_decoratedPanicRoutine::method_semanticAnalysis (const GALGAS_semanticContext /* constinArgument_inContext */,
                                                          GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                          GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_decoratedPanicRoutine temp_1 = this ;
    test_0 = temp_1.readProperty_mIsSetup ().boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      const GALGAS_decoratedPanicRoutine temp_2 = this ;
      const GALGAS_decoratedPanicRoutine temp_3 = this ;
      ioArgument_ioTemporaries.mProperty_mPanicSetupRoutinePriorityMap.setter_insertSetupKey (GALGAS_lstring::init_21__21_ (temp_2.readProperty_mPriority ().readProperty_bigint ().getter_string (SOURCE_FILE ("panic.galgas", 234)), temp_3.readProperty_mPriority ().readProperty_location (), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 234)) ;
      }
      const GALGAS_decoratedPanicRoutine temp_4 = this ;
      ioArgument_ioIntermediateCodeStruct.mProperty_mPanicSetupListIR.addAssign_operation (temp_4.readProperty_mPriority ().readProperty_bigint ()  COMMA_SOURCE_FILE ("panic.galgas", 235)) ;
    }
  }
  if (kBoolFalse == test_0) {
    {
    const GALGAS_decoratedPanicRoutine temp_5 = this ;
    const GALGAS_decoratedPanicRoutine temp_6 = this ;
    ioArgument_ioTemporaries.mProperty_mPanicLoopRoutinePriorityMap.setter_insertLoopKey (GALGAS_lstring::init_21__21_ (temp_5.readProperty_mPriority ().readProperty_bigint ().getter_string (SOURCE_FILE ("panic.galgas", 237)), temp_6.readProperty_mPriority ().readProperty_location (), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 237)) ;
    }
    const GALGAS_decoratedPanicRoutine temp_7 = this ;
    ioArgument_ioIntermediateCodeStruct.mProperty_mPanicLoopListIR.addAssign_operation (temp_7.readProperty_mPriority ().readProperty_bigint ()  COMMA_SOURCE_FILE ("panic.galgas", 238)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Routine 'generatePanicCode&?generationContext&generationAdds'
//
//--------------------------------------------------------------------------------------------------

void routine_generatePanicCode_26__3F_generationContext_26_generationAdds (GALGAS_string & ioArgument_ioLLVMcode,
                                                                           const GALGAS_generationContext constinArgument_inGenerationContext,
                                                                           GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint var_emptyStringIndex_11385 ;
  {
  extensionSetter_findOrAddStaticString (ioArgument_ioGenerationAdds.mProperty_mStaticEntityMap, GALGAS_string::makeEmptyString (), var_emptyStringIndex_11385, inCompiler COMMA_SOURCE_FILE ("panic.galgas", 260)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (GALGAS_string ("Panic for ISR"), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 261)), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 261)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal void @panic.isr (").add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inGenerationContext.readProperty_mPanicCodeLLVMType ().ptr (), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 262)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 262)).add_operation (GALGAS_string (" %in.CODE) "), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 262)).add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("panic.galgas", 262)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 262)).add_operation (GALGAS_string ("noreturn {\n"), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 262)), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 262)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %str.FILE = load i8*, i8** ").add_operation (function_literalStringName (var_emptyStringIndex_11385, inCompiler COMMA_SOURCE_FILE ("panic.galgas", 263)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 263)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 263)), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 263)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @").add_operation (function_llvmNameForSectionImplementation (function_panicRoutineName (inCompiler COMMA_SOURCE_FILE ("panic.galgas", 264)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 264)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 264)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 264)), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 264)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inGenerationContext.readProperty_mPanicLineLLVMType ().ptr (), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 265)).add_operation (GALGAS_string (" 0, "), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 265)), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 265)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inGenerationContext.readProperty_mPanicCodeLLVMType ().ptr (), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 266)).add_operation (GALGAS_string (" %in.CODE, "), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 266)), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 266)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("i8* %str.FILE"), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 267)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" )\n"), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 268)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  unreachable\n"), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 269)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n\n"), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 270)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@fileSpecificPanicRoutineIR llvmCodeGeneration'
//
//--------------------------------------------------------------------------------------------------

void cPtr_fileSpecificPanicRoutineIR::method_llvmCodeGeneration (GALGAS_string & ioArgument_ioLLVMcode,
                                                                 const GALGAS_generationContext constinArgument_inGenerationContext,
                                                                 GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_arguments_12812 = GALGAS_string (" (").add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inGenerationContext.readProperty_mPanicLineLLVMType ().ptr (), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 289)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 288)).add_operation (GALGAS_string (" %in.LINE, "), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 289)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inGenerationContext.readProperty_mPanicCodeLLVMType ().ptr (), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 290)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 289)).add_operation (GALGAS_string (" %in.CODE, "), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 290)).add_operation (GALGAS_string ("i8* %in.FILE)"), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 290)) ;
  const GALGAS_fileSpecificPanicRoutineIR temp_0 = this ;
  GALGAS_string var_fileBaseName_13009 = temp_0.readProperty_inFilePath ().getter_lastPathComponent (SOURCE_FILE ("panic.galgas", 292)).getter_stringByDeletingPathExtension (SOURCE_FILE ("panic.galgas", 292)) ;
  GALGAS_uint var_staticStringIndex_13183 ;
  {
  extensionSetter_findOrAddStaticString (ioArgument_ioGenerationAdds.mProperty_mStaticEntityMap, var_fileBaseName_13009, var_staticStringIndex_13183, inCompiler COMMA_SOURCE_FILE ("panic.galgas", 294)) ;
  }
  const GALGAS_fileSpecificPanicRoutineIR temp_1 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (temp_1.readProperty_mRoutineMangledName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 298)), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 298)) ;
  const GALGAS_fileSpecificPanicRoutineIR temp_2 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal void @").add_operation (temp_2.readProperty_mRoutineMangledName ().readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("panic.galgas", 299)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 299)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 299)), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 299)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inGenerationContext.readProperty_mPanicLineLLVMType ().ptr (), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 300)).add_operation (GALGAS_string (" %in.LINE, "), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 300)), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 300)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inGenerationContext.readProperty_mPanicCodeLLVMType ().ptr (), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 301)).add_operation (GALGAS_string (" %in.CODE)"), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 301)).add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("panic.galgas", 301)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 301)).add_operation (GALGAS_string ("noreturn {\n"), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 301)), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 301)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %in.FILE = load i8*, i8** ").add_operation (function_literalStringName (var_staticStringIndex_13183, inCompiler COMMA_SOURCE_FILE ("panic.galgas", 302)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 302)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 302)), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 302)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @").add_operation (function_llvmNameForSectionCall (function_panicRoutineName (inCompiler COMMA_SOURCE_FILE ("panic.galgas", 303)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 303)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 303)).add_operation (var_arguments_12812, inCompiler COMMA_SOURCE_FILE ("panic.galgas", 303)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 303)), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 303)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  unreachable\n"), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 304)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n\n"), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 305)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@fileSpecificPanicRoutineIR enterAccessibleEntities'
//
//--------------------------------------------------------------------------------------------------

void cPtr_fileSpecificPanicRoutineIR::method_enterAccessibleEntities (GALGAS_stringset & ioArgument_ioInvokedRoutineSet,
                                                                      GALGAS_uint & /* ioArgument_ioMaxBranchOfOnInstructions */,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioInvokedRoutineSet.addAssign_operation (function_llvmNameForSectionCall (function_panicRoutineName (inCompiler COMMA_SOURCE_FILE ("panic.galgas", 314)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 314))  COMMA_SOURCE_FILE ("panic.galgas", 314)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@universalModePanicRoutineIR llvmCodeGeneration'
//
//--------------------------------------------------------------------------------------------------

void cPtr_universalModePanicRoutineIR::method_llvmCodeGeneration (GALGAS_string & ioArgument_ioLLVMcode,
                                                                  const GALGAS_generationContext constinArgument_inGenerationContext,
                                                                  GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_arguments_14855 = GALGAS_string (" (").add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inGenerationContext.readProperty_mPanicLineLLVMType ().ptr (), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 332)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 331)).add_operation (GALGAS_string (" %in.LINE, "), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 332)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inGenerationContext.readProperty_mPanicCodeLLVMType ().ptr (), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 333)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 332)).add_operation (GALGAS_string (" %in.CODE, "), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 333)).add_operation (GALGAS_string ("i8* %in.FILE)"), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 333)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (GALGAS_string ("Raise Panic internal"), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 336)), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 336)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("declare void @").add_operation (function_llvmNameForSectionCall (function_panicRoutineName (inCompiler COMMA_SOURCE_FILE ("panic.galgas", 337)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 337)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 337)), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 337)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_arguments_14855, inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 338)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("panic.galgas", 339)).add_operation (GALGAS_string ("noreturn\n\n"), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 339)), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 339)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@universalModePanicRoutineIR svcDeclarationGeneration'
//
//--------------------------------------------------------------------------------------------------

void cPtr_universalModePanicRoutineIR::method_svcDeclarationGeneration (GALGAS_primitiveAndServiceIRlist & /* ioArgument_ioPrimitiveAndServiceList */,
                                                                        GALGAS_sectionIRlist & ioArgument_ioSectionList,
                                                                        GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioSectionList.addAssign_operation (function_llvmNameForSectionCall (function_panicRoutineName (inCompiler COMMA_SOURCE_FILE ("panic.galgas", 350)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 350)), function_llvmNameForSectionImplementation (function_panicRoutineName (inCompiler COMMA_SOURCE_FILE ("panic.galgas", 351)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 351)), GALGAS_bool (true)  COMMA_SOURCE_FILE ("panic.galgas", 349)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@universalModePanicRoutineIR enterAccessibleEntities'
//
//--------------------------------------------------------------------------------------------------

void cPtr_universalModePanicRoutineIR::method_enterAccessibleEntities (GALGAS_stringset & ioArgument_ioInvokedRoutineSet,
                                                                       GALGAS_uint & /* ioArgument_ioMaxBranchOfOnInstructions */,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioInvokedRoutineSet.addAssign_operation (function_llvmNameForSectionImplementation (function_panicRoutineName (inCompiler COMMA_SOURCE_FILE ("panic.galgas", 361)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 361))  COMMA_SOURCE_FILE ("panic.galgas", 361)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@sectionModePanicRoutineIR llvmCodeGeneration'
//
//--------------------------------------------------------------------------------------------------

void cPtr_sectionModePanicRoutineIR::method_llvmCodeGeneration (GALGAS_string & ioArgument_ioLLVMcode,
                                                                const GALGAS_generationContext constinArgument_inGenerationContext,
                                                                GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (GALGAS_string ("Raise Panic internal (section mode)"), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 380)), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 380)) ;
  GALGAS_string var_arguments_16976 = GALGAS_string (" (").add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inGenerationContext.readProperty_mPanicLineLLVMType ().ptr (), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 383)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 382)).add_operation (GALGAS_string (" %in.LINE, "), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 383)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inGenerationContext.readProperty_mPanicCodeLLVMType ().ptr (), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 384)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 383)).add_operation (GALGAS_string (" %in.CODE, "), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 384)).add_operation (GALGAS_string ("i8* %in.FILE)"), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 384)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define void @").add_operation (function_llvmNameForSectionImplementation (function_panicRoutineName (inCompiler COMMA_SOURCE_FILE ("panic.galgas", 387)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 387)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 387)), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 387)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_arguments_16976.add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("panic.galgas", 388)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 388)).add_operation (GALGAS_string ("noreturn {\n"), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 388)), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 388)) ;
  const GALGAS_sectionModePanicRoutineIR temp_0 = this ;
  cEnumerator_panicSortedListIR enumerator_17342 (temp_0.readProperty_mPanicSetupListIR (), EnumerationOrder::up) ;
  while (enumerator_17342.hasCurrentObject ()) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @panic.setup.").add_operation (enumerator_17342.current_mPriority (HERE).getter_string (SOURCE_FILE ("panic.galgas", 391)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 391)).add_operation (var_arguments_16976, inCompiler COMMA_SOURCE_FILE ("panic.galgas", 391)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 391)), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 391)) ;
    enumerator_17342.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %panic.loop\n\n"), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 393)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("panic.loop:\n"), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 394)) ;
  const GALGAS_sectionModePanicRoutineIR temp_1 = this ;
  cEnumerator_panicSortedListIR enumerator_17547 (temp_1.readProperty_mPanicLoopListIR (), EnumerationOrder::up) ;
  while (enumerator_17547.hasCurrentObject ()) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @panic.loop.").add_operation (enumerator_17547.current_mPriority (HERE).getter_string (SOURCE_FILE ("panic.galgas", 396)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 396)).add_operation (var_arguments_16976, inCompiler COMMA_SOURCE_FILE ("panic.galgas", 396)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 396)), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 396)) ;
    enumerator_17547.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %panic.loop\n"), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 398)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n\n"), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 399)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@sectionModePanicRoutineIR enterAccessibleEntities'
//
//--------------------------------------------------------------------------------------------------

void cPtr_sectionModePanicRoutineIR::method_enterAccessibleEntities (GALGAS_stringset & ioArgument_ioInvokedRoutineSet,
                                                                     GALGAS_uint & /* ioArgument_ioMaxBranchOfOnInstructions */,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_sectionModePanicRoutineIR temp_0 = this ;
  cEnumerator_panicSortedListIR enumerator_18016 (temp_0.readProperty_mPanicSetupListIR (), EnumerationOrder::up) ;
  while (enumerator_18016.hasCurrentObject ()) {
    ioArgument_ioInvokedRoutineSet.addAssign_operation (GALGAS_string ("panic.setup.").add_operation (enumerator_18016.current_mPriority (HERE).getter_string (SOURCE_FILE ("panic.galgas", 409)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 409))  COMMA_SOURCE_FILE ("panic.galgas", 409)) ;
    enumerator_18016.gotoNextObject () ;
  }
  const GALGAS_sectionModePanicRoutineIR temp_1 = this ;
  cEnumerator_panicSortedListIR enumerator_18122 (temp_1.readProperty_mPanicLoopListIR (), EnumerationOrder::up) ;
  while (enumerator_18122.hasCurrentObject ()) {
    ioArgument_ioInvokedRoutineSet.addAssign_operation (GALGAS_string ("panic.loop.").add_operation (enumerator_18122.current_mPriority (HERE).getter_string (SOURCE_FILE ("panic.galgas", 412)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 412))  COMMA_SOURCE_FILE ("panic.galgas", 412)) ;
    enumerator_18122.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Once function 'panicRoutineName'
//
//--------------------------------------------------------------------------------------------------

static GALGAS_string onceFunction_panicRoutineName (Compiler *
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("handle.panic") ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_panicRoutineName = false ;
static GALGAS_string gOnceFunctionResult_panicRoutineName ;

//--------------------------------------------------------------------------------------------------

GALGAS_string function_panicRoutineName (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_panicRoutineName) {
    gOnceFunctionResult_panicRoutineName = onceFunction_panicRoutineName (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_panicRoutineName = true ;
  }
  return gOnceFunctionResult_panicRoutineName ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_panicRoutineName (void) {
  gOnceFunctionResult_panicRoutineName.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_panicRoutineName (nullptr,
                                                            releaseOnceFunctionResult_panicRoutineName) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_panicRoutineName [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_panicRoutineName (Compiler * inCompiler,
                                                                 const cObjectArray & /* inEffectiveParameterArray */,
                                                                 const GALGAS_location & /* inErrorLocation */
                                                                 COMMA_LOCATION_ARGS) {
  return function_panicRoutineName (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_panicRoutineName ("panicRoutineName",
                                                                  functionWithGenericHeader_panicRoutineName,
                                                                  & kTypeDescriptor_GALGAS_string,
                                                                  0,
                                                                  functionArgs_panicRoutineName) ;

//--------------------------------------------------------------------------------------------------
//
//Once function 'panicCodeForAssertViolation'
//
//--------------------------------------------------------------------------------------------------

static GALGAS_bigint onceFunction_panicCodeForAssertViolation (Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_result ; // Returned variable
  result_result = GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("panic-codes.galgas", 7)) ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_panicCodeForAssertViolation = false ;
static GALGAS_bigint gOnceFunctionResult_panicCodeForAssertViolation ;

//--------------------------------------------------------------------------------------------------

GALGAS_bigint function_panicCodeForAssertViolation (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_panicCodeForAssertViolation) {
    gOnceFunctionResult_panicCodeForAssertViolation = onceFunction_panicCodeForAssertViolation (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_panicCodeForAssertViolation = true ;
  }
  return gOnceFunctionResult_panicCodeForAssertViolation ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_panicCodeForAssertViolation (void) {
  gOnceFunctionResult_panicCodeForAssertViolation.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_panicCodeForAssertViolation (nullptr,
                                                                       releaseOnceFunctionResult_panicCodeForAssertViolation) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_panicCodeForAssertViolation [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_panicCodeForAssertViolation (Compiler * inCompiler,
                                                                            const cObjectArray & /* inEffectiveParameterArray */,
                                                                            const GALGAS_location & /* inErrorLocation */
                                                                            COMMA_LOCATION_ARGS) {
  return function_panicCodeForAssertViolation (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_panicCodeForAssertViolation ("panicCodeForAssertViolation",
                                                                             functionWithGenericHeader_panicCodeForAssertViolation,
                                                                             & kTypeDescriptor_GALGAS_bigint,
                                                                             0,
                                                                             functionArgs_panicCodeForAssertViolation) ;

//--------------------------------------------------------------------------------------------------
//
//Once function 'panicCodeForUnsignedAdditionOverflow'
//
//--------------------------------------------------------------------------------------------------

static GALGAS_bigint onceFunction_panicCodeForUnsignedAdditionOverflow (Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_result ; // Returned variable
  result_result = GALGAS_bigint ("2", inCompiler  COMMA_SOURCE_FILE ("panic-codes.galgas", 9)) ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_panicCodeForUnsignedAdditionOverflow = false ;
static GALGAS_bigint gOnceFunctionResult_panicCodeForUnsignedAdditionOverflow ;

//--------------------------------------------------------------------------------------------------

GALGAS_bigint function_panicCodeForUnsignedAdditionOverflow (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_panicCodeForUnsignedAdditionOverflow) {
    gOnceFunctionResult_panicCodeForUnsignedAdditionOverflow = onceFunction_panicCodeForUnsignedAdditionOverflow (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_panicCodeForUnsignedAdditionOverflow = true ;
  }
  return gOnceFunctionResult_panicCodeForUnsignedAdditionOverflow ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_panicCodeForUnsignedAdditionOverflow (void) {
  gOnceFunctionResult_panicCodeForUnsignedAdditionOverflow.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_panicCodeForUnsignedAdditionOverflow (nullptr,
                                                                                releaseOnceFunctionResult_panicCodeForUnsignedAdditionOverflow) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_panicCodeForUnsignedAdditionOverflow [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_panicCodeForUnsignedAdditionOverflow (Compiler * inCompiler,
                                                                                     const cObjectArray & /* inEffectiveParameterArray */,
                                                                                     const GALGAS_location & /* inErrorLocation */
                                                                                     COMMA_LOCATION_ARGS) {
  return function_panicCodeForUnsignedAdditionOverflow (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_panicCodeForUnsignedAdditionOverflow ("panicCodeForUnsignedAdditionOverflow",
                                                                                      functionWithGenericHeader_panicCodeForUnsignedAdditionOverflow,
                                                                                      & kTypeDescriptor_GALGAS_bigint,
                                                                                      0,
                                                                                      functionArgs_panicCodeForUnsignedAdditionOverflow) ;

//--------------------------------------------------------------------------------------------------
//
//Once function 'panicCodeForSignedAdditionOverflow'
//
//--------------------------------------------------------------------------------------------------

static GALGAS_bigint onceFunction_panicCodeForSignedAdditionOverflow (Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_result ; // Returned variable
  result_result = GALGAS_bigint ("3", inCompiler  COMMA_SOURCE_FILE ("panic-codes.galgas", 11)) ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_panicCodeForSignedAdditionOverflow = false ;
static GALGAS_bigint gOnceFunctionResult_panicCodeForSignedAdditionOverflow ;

//--------------------------------------------------------------------------------------------------

GALGAS_bigint function_panicCodeForSignedAdditionOverflow (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_panicCodeForSignedAdditionOverflow) {
    gOnceFunctionResult_panicCodeForSignedAdditionOverflow = onceFunction_panicCodeForSignedAdditionOverflow (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_panicCodeForSignedAdditionOverflow = true ;
  }
  return gOnceFunctionResult_panicCodeForSignedAdditionOverflow ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_panicCodeForSignedAdditionOverflow (void) {
  gOnceFunctionResult_panicCodeForSignedAdditionOverflow.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_panicCodeForSignedAdditionOverflow (nullptr,
                                                                              releaseOnceFunctionResult_panicCodeForSignedAdditionOverflow) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_panicCodeForSignedAdditionOverflow [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_panicCodeForSignedAdditionOverflow (Compiler * inCompiler,
                                                                                   const cObjectArray & /* inEffectiveParameterArray */,
                                                                                   const GALGAS_location & /* inErrorLocation */
                                                                                   COMMA_LOCATION_ARGS) {
  return function_panicCodeForSignedAdditionOverflow (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_panicCodeForSignedAdditionOverflow ("panicCodeForSignedAdditionOverflow",
                                                                                    functionWithGenericHeader_panicCodeForSignedAdditionOverflow,
                                                                                    & kTypeDescriptor_GALGAS_bigint,
                                                                                    0,
                                                                                    functionArgs_panicCodeForSignedAdditionOverflow) ;

//--------------------------------------------------------------------------------------------------
//
//Once function 'panicCodeForUnsignedSubtractOverflow'
//
//--------------------------------------------------------------------------------------------------

static GALGAS_bigint onceFunction_panicCodeForUnsignedSubtractOverflow (Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_result ; // Returned variable
  result_result = GALGAS_bigint ("4", inCompiler  COMMA_SOURCE_FILE ("panic-codes.galgas", 13)) ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_panicCodeForUnsignedSubtractOverflow = false ;
static GALGAS_bigint gOnceFunctionResult_panicCodeForUnsignedSubtractOverflow ;

//--------------------------------------------------------------------------------------------------

GALGAS_bigint function_panicCodeForUnsignedSubtractOverflow (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_panicCodeForUnsignedSubtractOverflow) {
    gOnceFunctionResult_panicCodeForUnsignedSubtractOverflow = onceFunction_panicCodeForUnsignedSubtractOverflow (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_panicCodeForUnsignedSubtractOverflow = true ;
  }
  return gOnceFunctionResult_panicCodeForUnsignedSubtractOverflow ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_panicCodeForUnsignedSubtractOverflow (void) {
  gOnceFunctionResult_panicCodeForUnsignedSubtractOverflow.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_panicCodeForUnsignedSubtractOverflow (nullptr,
                                                                                releaseOnceFunctionResult_panicCodeForUnsignedSubtractOverflow) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_panicCodeForUnsignedSubtractOverflow [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_panicCodeForUnsignedSubtractOverflow (Compiler * inCompiler,
                                                                                     const cObjectArray & /* inEffectiveParameterArray */,
                                                                                     const GALGAS_location & /* inErrorLocation */
                                                                                     COMMA_LOCATION_ARGS) {
  return function_panicCodeForUnsignedSubtractOverflow (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_panicCodeForUnsignedSubtractOverflow ("panicCodeForUnsignedSubtractOverflow",
                                                                                      functionWithGenericHeader_panicCodeForUnsignedSubtractOverflow,
                                                                                      & kTypeDescriptor_GALGAS_bigint,
                                                                                      0,
                                                                                      functionArgs_panicCodeForUnsignedSubtractOverflow) ;

//--------------------------------------------------------------------------------------------------
//
//Once function 'panicCodeForSignedSubtractOverflow'
//
//--------------------------------------------------------------------------------------------------

static GALGAS_bigint onceFunction_panicCodeForSignedSubtractOverflow (Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_result ; // Returned variable
  result_result = GALGAS_bigint ("5", inCompiler  COMMA_SOURCE_FILE ("panic-codes.galgas", 15)) ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_panicCodeForSignedSubtractOverflow = false ;
static GALGAS_bigint gOnceFunctionResult_panicCodeForSignedSubtractOverflow ;

//--------------------------------------------------------------------------------------------------

GALGAS_bigint function_panicCodeForSignedSubtractOverflow (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_panicCodeForSignedSubtractOverflow) {
    gOnceFunctionResult_panicCodeForSignedSubtractOverflow = onceFunction_panicCodeForSignedSubtractOverflow (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_panicCodeForSignedSubtractOverflow = true ;
  }
  return gOnceFunctionResult_panicCodeForSignedSubtractOverflow ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_panicCodeForSignedSubtractOverflow (void) {
  gOnceFunctionResult_panicCodeForSignedSubtractOverflow.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_panicCodeForSignedSubtractOverflow (nullptr,
                                                                              releaseOnceFunctionResult_panicCodeForSignedSubtractOverflow) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_panicCodeForSignedSubtractOverflow [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_panicCodeForSignedSubtractOverflow (Compiler * inCompiler,
                                                                                   const cObjectArray & /* inEffectiveParameterArray */,
                                                                                   const GALGAS_location & /* inErrorLocation */
                                                                                   COMMA_LOCATION_ARGS) {
  return function_panicCodeForSignedSubtractOverflow (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_panicCodeForSignedSubtractOverflow ("panicCodeForSignedSubtractOverflow",
                                                                                    functionWithGenericHeader_panicCodeForSignedSubtractOverflow,
                                                                                    & kTypeDescriptor_GALGAS_bigint,
                                                                                    0,
                                                                                    functionArgs_panicCodeForSignedSubtractOverflow) ;

//--------------------------------------------------------------------------------------------------
//
//Once function 'panicCodeForUnsignedMultiplicationOverflow'
//
//--------------------------------------------------------------------------------------------------

static GALGAS_bigint onceFunction_panicCodeForUnsignedMultiplicationOverflow (Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_result ; // Returned variable
  result_result = GALGAS_bigint ("6", inCompiler  COMMA_SOURCE_FILE ("panic-codes.galgas", 17)) ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_panicCodeForUnsignedMultiplicationOverflow = false ;
static GALGAS_bigint gOnceFunctionResult_panicCodeForUnsignedMultiplicationOverflow ;

//--------------------------------------------------------------------------------------------------

GALGAS_bigint function_panicCodeForUnsignedMultiplicationOverflow (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_panicCodeForUnsignedMultiplicationOverflow) {
    gOnceFunctionResult_panicCodeForUnsignedMultiplicationOverflow = onceFunction_panicCodeForUnsignedMultiplicationOverflow (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_panicCodeForUnsignedMultiplicationOverflow = true ;
  }
  return gOnceFunctionResult_panicCodeForUnsignedMultiplicationOverflow ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_panicCodeForUnsignedMultiplicationOverflow (void) {
  gOnceFunctionResult_panicCodeForUnsignedMultiplicationOverflow.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_panicCodeForUnsignedMultiplicationOverflow (nullptr,
                                                                                      releaseOnceFunctionResult_panicCodeForUnsignedMultiplicationOverflow) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_panicCodeForUnsignedMultiplicationOverflow [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_panicCodeForUnsignedMultiplicationOverflow (Compiler * inCompiler,
                                                                                           const cObjectArray & /* inEffectiveParameterArray */,
                                                                                           const GALGAS_location & /* inErrorLocation */
                                                                                           COMMA_LOCATION_ARGS) {
  return function_panicCodeForUnsignedMultiplicationOverflow (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_panicCodeForUnsignedMultiplicationOverflow ("panicCodeForUnsignedMultiplicationOverflow",
                                                                                            functionWithGenericHeader_panicCodeForUnsignedMultiplicationOverflow,
                                                                                            & kTypeDescriptor_GALGAS_bigint,
                                                                                            0,
                                                                                            functionArgs_panicCodeForUnsignedMultiplicationOverflow) ;

//--------------------------------------------------------------------------------------------------
//
//Once function 'panicCodeForSignedMultiplicationOverflow'
//
//--------------------------------------------------------------------------------------------------

static GALGAS_bigint onceFunction_panicCodeForSignedMultiplicationOverflow (Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_result ; // Returned variable
  result_result = GALGAS_bigint ("7", inCompiler  COMMA_SOURCE_FILE ("panic-codes.galgas", 19)) ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_panicCodeForSignedMultiplicationOverflow = false ;
static GALGAS_bigint gOnceFunctionResult_panicCodeForSignedMultiplicationOverflow ;

//--------------------------------------------------------------------------------------------------

GALGAS_bigint function_panicCodeForSignedMultiplicationOverflow (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_panicCodeForSignedMultiplicationOverflow) {
    gOnceFunctionResult_panicCodeForSignedMultiplicationOverflow = onceFunction_panicCodeForSignedMultiplicationOverflow (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_panicCodeForSignedMultiplicationOverflow = true ;
  }
  return gOnceFunctionResult_panicCodeForSignedMultiplicationOverflow ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_panicCodeForSignedMultiplicationOverflow (void) {
  gOnceFunctionResult_panicCodeForSignedMultiplicationOverflow.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_panicCodeForSignedMultiplicationOverflow (nullptr,
                                                                                    releaseOnceFunctionResult_panicCodeForSignedMultiplicationOverflow) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_panicCodeForSignedMultiplicationOverflow [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_panicCodeForSignedMultiplicationOverflow (Compiler * inCompiler,
                                                                                         const cObjectArray & /* inEffectiveParameterArray */,
                                                                                         const GALGAS_location & /* inErrorLocation */
                                                                                         COMMA_LOCATION_ARGS) {
  return function_panicCodeForSignedMultiplicationOverflow (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_panicCodeForSignedMultiplicationOverflow ("panicCodeForSignedMultiplicationOverflow",
                                                                                          functionWithGenericHeader_panicCodeForSignedMultiplicationOverflow,
                                                                                          & kTypeDescriptor_GALGAS_bigint,
                                                                                          0,
                                                                                          functionArgs_panicCodeForSignedMultiplicationOverflow) ;

//--------------------------------------------------------------------------------------------------
//
//Once function 'panicCodeForUnsignedDivisionByZero'
//
//--------------------------------------------------------------------------------------------------

static GALGAS_bigint onceFunction_panicCodeForUnsignedDivisionByZero (Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_result ; // Returned variable
  result_result = GALGAS_bigint ("8", inCompiler  COMMA_SOURCE_FILE ("panic-codes.galgas", 21)) ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_panicCodeForUnsignedDivisionByZero = false ;
static GALGAS_bigint gOnceFunctionResult_panicCodeForUnsignedDivisionByZero ;

//--------------------------------------------------------------------------------------------------

GALGAS_bigint function_panicCodeForUnsignedDivisionByZero (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_panicCodeForUnsignedDivisionByZero) {
    gOnceFunctionResult_panicCodeForUnsignedDivisionByZero = onceFunction_panicCodeForUnsignedDivisionByZero (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_panicCodeForUnsignedDivisionByZero = true ;
  }
  return gOnceFunctionResult_panicCodeForUnsignedDivisionByZero ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_panicCodeForUnsignedDivisionByZero (void) {
  gOnceFunctionResult_panicCodeForUnsignedDivisionByZero.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_panicCodeForUnsignedDivisionByZero (nullptr,
                                                                              releaseOnceFunctionResult_panicCodeForUnsignedDivisionByZero) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_panicCodeForUnsignedDivisionByZero [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_panicCodeForUnsignedDivisionByZero (Compiler * inCompiler,
                                                                                   const cObjectArray & /* inEffectiveParameterArray */,
                                                                                   const GALGAS_location & /* inErrorLocation */
                                                                                   COMMA_LOCATION_ARGS) {
  return function_panicCodeForUnsignedDivisionByZero (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_panicCodeForUnsignedDivisionByZero ("panicCodeForUnsignedDivisionByZero",
                                                                                    functionWithGenericHeader_panicCodeForUnsignedDivisionByZero,
                                                                                    & kTypeDescriptor_GALGAS_bigint,
                                                                                    0,
                                                                                    functionArgs_panicCodeForUnsignedDivisionByZero) ;

//--------------------------------------------------------------------------------------------------
//
//Once function 'panicCodeForSignedDivisionByZero'
//
//--------------------------------------------------------------------------------------------------

static GALGAS_bigint onceFunction_panicCodeForSignedDivisionByZero (Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_result ; // Returned variable
  result_result = GALGAS_bigint ("9", inCompiler  COMMA_SOURCE_FILE ("panic-codes.galgas", 23)) ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_panicCodeForSignedDivisionByZero = false ;
static GALGAS_bigint gOnceFunctionResult_panicCodeForSignedDivisionByZero ;

//--------------------------------------------------------------------------------------------------

GALGAS_bigint function_panicCodeForSignedDivisionByZero (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_panicCodeForSignedDivisionByZero) {
    gOnceFunctionResult_panicCodeForSignedDivisionByZero = onceFunction_panicCodeForSignedDivisionByZero (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_panicCodeForSignedDivisionByZero = true ;
  }
  return gOnceFunctionResult_panicCodeForSignedDivisionByZero ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_panicCodeForSignedDivisionByZero (void) {
  gOnceFunctionResult_panicCodeForSignedDivisionByZero.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_panicCodeForSignedDivisionByZero (nullptr,
                                                                            releaseOnceFunctionResult_panicCodeForSignedDivisionByZero) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_panicCodeForSignedDivisionByZero [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_panicCodeForSignedDivisionByZero (Compiler * inCompiler,
                                                                                 const cObjectArray & /* inEffectiveParameterArray */,
                                                                                 const GALGAS_location & /* inErrorLocation */
                                                                                 COMMA_LOCATION_ARGS) {
  return function_panicCodeForSignedDivisionByZero (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_panicCodeForSignedDivisionByZero ("panicCodeForSignedDivisionByZero",
                                                                                  functionWithGenericHeader_panicCodeForSignedDivisionByZero,
                                                                                  & kTypeDescriptor_GALGAS_bigint,
                                                                                  0,
                                                                                  functionArgs_panicCodeForSignedDivisionByZero) ;

//--------------------------------------------------------------------------------------------------
//
//Once function 'panicCodeForUnsignedRemainderByZero'
//
//--------------------------------------------------------------------------------------------------

static GALGAS_bigint onceFunction_panicCodeForUnsignedRemainderByZero (Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_result ; // Returned variable
  result_result = GALGAS_bigint ("10", inCompiler  COMMA_SOURCE_FILE ("panic-codes.galgas", 25)) ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_panicCodeForUnsignedRemainderByZero = false ;
static GALGAS_bigint gOnceFunctionResult_panicCodeForUnsignedRemainderByZero ;

//--------------------------------------------------------------------------------------------------

GALGAS_bigint function_panicCodeForUnsignedRemainderByZero (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_panicCodeForUnsignedRemainderByZero) {
    gOnceFunctionResult_panicCodeForUnsignedRemainderByZero = onceFunction_panicCodeForUnsignedRemainderByZero (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_panicCodeForUnsignedRemainderByZero = true ;
  }
  return gOnceFunctionResult_panicCodeForUnsignedRemainderByZero ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_panicCodeForUnsignedRemainderByZero (void) {
  gOnceFunctionResult_panicCodeForUnsignedRemainderByZero.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_panicCodeForUnsignedRemainderByZero (nullptr,
                                                                               releaseOnceFunctionResult_panicCodeForUnsignedRemainderByZero) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_panicCodeForUnsignedRemainderByZero [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_panicCodeForUnsignedRemainderByZero (Compiler * inCompiler,
                                                                                    const cObjectArray & /* inEffectiveParameterArray */,
                                                                                    const GALGAS_location & /* inErrorLocation */
                                                                                    COMMA_LOCATION_ARGS) {
  return function_panicCodeForUnsignedRemainderByZero (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_panicCodeForUnsignedRemainderByZero ("panicCodeForUnsignedRemainderByZero",
                                                                                     functionWithGenericHeader_panicCodeForUnsignedRemainderByZero,
                                                                                     & kTypeDescriptor_GALGAS_bigint,
                                                                                     0,
                                                                                     functionArgs_panicCodeForUnsignedRemainderByZero) ;

//--------------------------------------------------------------------------------------------------
//
//Once function 'panicCodeForSignedRemainderByZero'
//
//--------------------------------------------------------------------------------------------------

static GALGAS_bigint onceFunction_panicCodeForSignedRemainderByZero (Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_result ; // Returned variable
  result_result = GALGAS_bigint ("11", inCompiler  COMMA_SOURCE_FILE ("panic-codes.galgas", 27)) ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_panicCodeForSignedRemainderByZero = false ;
static GALGAS_bigint gOnceFunctionResult_panicCodeForSignedRemainderByZero ;

//--------------------------------------------------------------------------------------------------

GALGAS_bigint function_panicCodeForSignedRemainderByZero (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_panicCodeForSignedRemainderByZero) {
    gOnceFunctionResult_panicCodeForSignedRemainderByZero = onceFunction_panicCodeForSignedRemainderByZero (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_panicCodeForSignedRemainderByZero = true ;
  }
  return gOnceFunctionResult_panicCodeForSignedRemainderByZero ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_panicCodeForSignedRemainderByZero (void) {
  gOnceFunctionResult_panicCodeForSignedRemainderByZero.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_panicCodeForSignedRemainderByZero (nullptr,
                                                                             releaseOnceFunctionResult_panicCodeForSignedRemainderByZero) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_panicCodeForSignedRemainderByZero [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_panicCodeForSignedRemainderByZero (Compiler * inCompiler,
                                                                                  const cObjectArray & /* inEffectiveParameterArray */,
                                                                                  const GALGAS_location & /* inErrorLocation */
                                                                                  COMMA_LOCATION_ARGS) {
  return function_panicCodeForSignedRemainderByZero (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_panicCodeForSignedRemainderByZero ("panicCodeForSignedRemainderByZero",
                                                                                   functionWithGenericHeader_panicCodeForSignedRemainderByZero,
                                                                                   & kTypeDescriptor_GALGAS_bigint,
                                                                                   0,
                                                                                   functionArgs_panicCodeForSignedRemainderByZero) ;

//--------------------------------------------------------------------------------------------------
//
//Once function 'panicCodeForConvertOverflow'
//
//--------------------------------------------------------------------------------------------------

static GALGAS_bigint onceFunction_panicCodeForConvertOverflow (Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_result ; // Returned variable
  result_result = GALGAS_bigint ("12", inCompiler  COMMA_SOURCE_FILE ("panic-codes.galgas", 31)) ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_panicCodeForConvertOverflow = false ;
static GALGAS_bigint gOnceFunctionResult_panicCodeForConvertOverflow ;

//--------------------------------------------------------------------------------------------------

GALGAS_bigint function_panicCodeForConvertOverflow (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_panicCodeForConvertOverflow) {
    gOnceFunctionResult_panicCodeForConvertOverflow = onceFunction_panicCodeForConvertOverflow (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_panicCodeForConvertOverflow = true ;
  }
  return gOnceFunctionResult_panicCodeForConvertOverflow ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_panicCodeForConvertOverflow (void) {
  gOnceFunctionResult_panicCodeForConvertOverflow.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_panicCodeForConvertOverflow (nullptr,
                                                                       releaseOnceFunctionResult_panicCodeForConvertOverflow) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_panicCodeForConvertOverflow [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_panicCodeForConvertOverflow (Compiler * inCompiler,
                                                                            const cObjectArray & /* inEffectiveParameterArray */,
                                                                            const GALGAS_location & /* inErrorLocation */
                                                                            COMMA_LOCATION_ARGS) {
  return function_panicCodeForConvertOverflow (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_panicCodeForConvertOverflow ("panicCodeForConvertOverflow",
                                                                             functionWithGenericHeader_panicCodeForConvertOverflow,
                                                                             & kTypeDescriptor_GALGAS_bigint,
                                                                             0,
                                                                             functionArgs_panicCodeForConvertOverflow) ;

//--------------------------------------------------------------------------------------------------
//
//Once function 'panicCodeForNegativeArrayIndex'
//
//--------------------------------------------------------------------------------------------------

static GALGAS_bigint onceFunction_panicCodeForNegativeArrayIndex (Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_result ; // Returned variable
  result_result = GALGAS_bigint ("14", inCompiler  COMMA_SOURCE_FILE ("panic-codes.galgas", 35)) ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_panicCodeForNegativeArrayIndex = false ;
static GALGAS_bigint gOnceFunctionResult_panicCodeForNegativeArrayIndex ;

//--------------------------------------------------------------------------------------------------

GALGAS_bigint function_panicCodeForNegativeArrayIndex (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_panicCodeForNegativeArrayIndex) {
    gOnceFunctionResult_panicCodeForNegativeArrayIndex = onceFunction_panicCodeForNegativeArrayIndex (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_panicCodeForNegativeArrayIndex = true ;
  }
  return gOnceFunctionResult_panicCodeForNegativeArrayIndex ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_panicCodeForNegativeArrayIndex (void) {
  gOnceFunctionResult_panicCodeForNegativeArrayIndex.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_panicCodeForNegativeArrayIndex (nullptr,
                                                                          releaseOnceFunctionResult_panicCodeForNegativeArrayIndex) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_panicCodeForNegativeArrayIndex [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_panicCodeForNegativeArrayIndex (Compiler * inCompiler,
                                                                               const cObjectArray & /* inEffectiveParameterArray */,
                                                                               const GALGAS_location & /* inErrorLocation */
                                                                               COMMA_LOCATION_ARGS) {
  return function_panicCodeForNegativeArrayIndex (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_panicCodeForNegativeArrayIndex ("panicCodeForNegativeArrayIndex",
                                                                                functionWithGenericHeader_panicCodeForNegativeArrayIndex,
                                                                                & kTypeDescriptor_GALGAS_bigint,
                                                                                0,
                                                                                functionArgs_panicCodeForNegativeArrayIndex) ;

//--------------------------------------------------------------------------------------------------
//
//Once function 'panicCodeForTooLargeArrayIndex'
//
//--------------------------------------------------------------------------------------------------

static GALGAS_bigint onceFunction_panicCodeForTooLargeArrayIndex (Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_result ; // Returned variable
  result_result = GALGAS_bigint ("15", inCompiler  COMMA_SOURCE_FILE ("panic-codes.galgas", 37)) ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_panicCodeForTooLargeArrayIndex = false ;
static GALGAS_bigint gOnceFunctionResult_panicCodeForTooLargeArrayIndex ;

//--------------------------------------------------------------------------------------------------

GALGAS_bigint function_panicCodeForTooLargeArrayIndex (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_panicCodeForTooLargeArrayIndex) {
    gOnceFunctionResult_panicCodeForTooLargeArrayIndex = onceFunction_panicCodeForTooLargeArrayIndex (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_panicCodeForTooLargeArrayIndex = true ;
  }
  return gOnceFunctionResult_panicCodeForTooLargeArrayIndex ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_panicCodeForTooLargeArrayIndex (void) {
  gOnceFunctionResult_panicCodeForTooLargeArrayIndex.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_panicCodeForTooLargeArrayIndex (nullptr,
                                                                          releaseOnceFunctionResult_panicCodeForTooLargeArrayIndex) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_panicCodeForTooLargeArrayIndex [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_panicCodeForTooLargeArrayIndex (Compiler * inCompiler,
                                                                               const cObjectArray & /* inEffectiveParameterArray */,
                                                                               const GALGAS_location & /* inErrorLocation */
                                                                               COMMA_LOCATION_ARGS) {
  return function_panicCodeForTooLargeArrayIndex (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_panicCodeForTooLargeArrayIndex ("panicCodeForTooLargeArrayIndex",
                                                                                functionWithGenericHeader_panicCodeForTooLargeArrayIndex,
                                                                                & kTypeDescriptor_GALGAS_bigint,
                                                                                0,
                                                                                functionArgs_panicCodeForTooLargeArrayIndex) ;

//--------------------------------------------------------------------------------------------------
//
//Once function 'panicCodeForClosedSync'
//
//--------------------------------------------------------------------------------------------------

static GALGAS_bigint onceFunction_panicCodeForClosedSync (Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_result ; // Returned variable
  result_result = GALGAS_bigint ("16", inCompiler  COMMA_SOURCE_FILE ("panic-codes.galgas", 41)) ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_panicCodeForClosedSync = false ;
static GALGAS_bigint gOnceFunctionResult_panicCodeForClosedSync ;

//--------------------------------------------------------------------------------------------------

GALGAS_bigint function_panicCodeForClosedSync (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_panicCodeForClosedSync) {
    gOnceFunctionResult_panicCodeForClosedSync = onceFunction_panicCodeForClosedSync (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_panicCodeForClosedSync = true ;
  }
  return gOnceFunctionResult_panicCodeForClosedSync ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_panicCodeForClosedSync (void) {
  gOnceFunctionResult_panicCodeForClosedSync.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_panicCodeForClosedSync (nullptr,
                                                                  releaseOnceFunctionResult_panicCodeForClosedSync) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_panicCodeForClosedSync [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_panicCodeForClosedSync (Compiler * inCompiler,
                                                                       const cObjectArray & /* inEffectiveParameterArray */,
                                                                       const GALGAS_location & /* inErrorLocation */
                                                                       COMMA_LOCATION_ARGS) {
  return function_panicCodeForClosedSync (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_panicCodeForClosedSync ("panicCodeForClosedSync",
                                                                        functionWithGenericHeader_panicCodeForClosedSync,
                                                                        & kTypeDescriptor_GALGAS_bigint,
                                                                        0,
                                                                        functionArgs_panicCodeForClosedSync) ;

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@compileTimeConvertToBooleanAST locationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GALGAS_location cPtr_compileTimeConvertToBooleanAST::getter_locationForErrorSignaling (Compiler */* inCompiler */
                                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_location result_outLocation ; // Returned variable
  const GALGAS_compileTimeConvertToBooleanAST temp_0 = this ;
  result_outLocation = temp_0.readProperty_mReceiverTypeName ().readProperty_location () ;
//---
  return result_outLocation ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@llvmConvertToBooleanAST locationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GALGAS_location cPtr_llvmConvertToBooleanAST::getter_locationForErrorSignaling (Compiler */* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_location result_outLocation ; // Returned variable
  const GALGAS_llvmConvertToBooleanAST temp_0 = this ;
  result_outLocation = temp_0.readProperty_mReceiverTypeName ().readProperty_location () ;
//---
  return result_outLocation ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@compileTimeConvertToBooleanAST enterInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_compileTimeConvertToBooleanAST::method_enterInPrecedenceGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_compileTimeConvertToBooleanAST temp_0 = this ;
  const GALGAS_compileTimeConvertToBooleanAST temp_1 = this ;
  const GALGAS_compileTimeConvertToBooleanAST temp_2 = this ;
  GALGAS_lstring var_nodeName_3597 = GALGAS_lstring::init_21__21_ (temp_0.readProperty_mReceiverTypeName ().readProperty_string ().add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 87)).add_operation (temp_1.readProperty_mConverterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 87)), temp_2.readProperty_mReceiverTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GALGAS_compileTimeConvertToBooleanAST temp_3 = this ;
  ioArgument_ioGraph.setter_addNode (var_nodeName_3597, temp_3, inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 88)) ;
  }
  {
  const GALGAS_compileTimeConvertToBooleanAST temp_4 = this ;
  ioArgument_ioGraph.setter_addEdge (var_nodeName_3597, temp_4.readProperty_mReceiverTypeName () COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 89)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@compileTimeConvertToBooleanAST keyRepresentationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_compileTimeConvertToBooleanAST::getter_keyRepresentationForErrorSignaling (Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outRepresentation ; // Returned variable
  const GALGAS_compileTimeConvertToBooleanAST temp_0 = this ;
  const GALGAS_compileTimeConvertToBooleanAST temp_1 = this ;
  result_outRepresentation = temp_0.readProperty_mReceiverTypeName ().readProperty_string ().add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 95)).add_operation (temp_1.readProperty_mConverterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 95)) ;
//---
  return result_outRepresentation ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@llvmConvertToBooleanAST enterInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_llvmConvertToBooleanAST::method_enterInPrecedenceGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_llvmConvertToBooleanAST temp_0 = this ;
  const GALGAS_llvmConvertToBooleanAST temp_1 = this ;
  const GALGAS_llvmConvertToBooleanAST temp_2 = this ;
  GALGAS_lstring var_nodeName_4367 = GALGAS_lstring::init_21__21_ (temp_0.readProperty_mReceiverTypeName ().readProperty_string ().add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 103)).add_operation (temp_1.readProperty_mConverterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 103)), temp_2.readProperty_mReceiverTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GALGAS_llvmConvertToBooleanAST temp_3 = this ;
  ioArgument_ioGraph.setter_addNode (var_nodeName_4367, temp_3, inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 104)) ;
  }
  {
  const GALGAS_llvmConvertToBooleanAST temp_4 = this ;
  ioArgument_ioGraph.setter_addEdge (var_nodeName_4367, temp_4.readProperty_mReceiverTypeName () COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 105)) ;
  }
}
