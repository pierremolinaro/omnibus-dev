#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-15.h"

//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@standaloneFunctionInExpressionAST addDependenceEdgeForStaticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_standaloneFunctionInExpressionAST::method_addDependenceEdgeForStaticExpression (const GALGAS_lstring constinArgument_inConstantName,
                                                                                          GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GALGAS_standaloneFunctionInExpressionAST temp_0 = this ;
  ioArgument_ioGraph.setter_addEdge (constinArgument_inConstantName, temp_0.readProperty_mStandaloneFunctionName () COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 37)) ;
  }
  const GALGAS_standaloneFunctionInExpressionAST temp_1 = this ;
  cEnumerator_effectiveArgumentListAST enumerator_2131 (temp_1.readProperty_mArguments (), EnumerationOrder::up) ;
  while (enumerator_2131.hasCurrentObject ()) {
    switch (enumerator_2131.current_mEffectiveParameterKind (HERE).enumValue ()) {
    case GALGAS_effectiveArgumentPassingModeAST::Enumeration::invalid:
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::Enumeration::enum_input:
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::Enumeration::enum_inputWithType:
      {
        GALGAS_bool extractedValue_2235__0 ;
        GALGAS_lstring extractedValue_2246_typeName_1 ;
        GALGAS_lstring extractedValue_2255__2 ;
        enumerator_2131.current_mEffectiveParameterKind (HERE).getAssociatedValuesFor_inputWithType (extractedValue_2235__0, extractedValue_2246_typeName_1, extractedValue_2255__2) ;
        enumGalgasBool test_2 = kBoolTrue ;
        if (kBoolTrue == test_2) {
          test_2 = GALGAS_bool (ComparisonKind::notEqual, extractedValue_2246_typeName_1.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_2) {
            {
            ioArgument_ioGraph.setter_noteNode (extractedValue_2246_typeName_1 COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 43)) ;
            }
          }
        }
      }
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::Enumeration::enum_output:
      {
        GALGAS_expressionAST extractedValue_2362_expression_0 ;
        GALGAS_location extractedValue_2373__1 ;
        enumerator_2131.current_mEffectiveParameterKind (HERE).getAssociatedValuesFor_output (extractedValue_2362_expression_0, extractedValue_2373__1) ;
        callExtensionMethod_addDependenceEdgeForStaticExpression ((cPtr_expressionAST *) extractedValue_2362_expression_0.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 45)) ;
      }
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::Enumeration::enum_outputInput:
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::Enumeration::enum_outputInputSelfVariable:
      break ;
    }
    enumerator_2131.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@standaloneFunctionInExpressionAST noteExpressionTypesInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_standaloneFunctionInExpressionAST::method_noteExpressionTypesInPrecedenceGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_standaloneFunctionInExpressionAST temp_0 = this ;
  cEnumerator_effectiveArgumentListAST enumerator_3064 (temp_0.readProperty_mArguments (), EnumerationOrder::up) ;
  while (enumerator_3064.hasCurrentObject ()) {
    switch (enumerator_3064.current_mEffectiveParameterKind (HERE).enumValue ()) {
    case GALGAS_effectiveArgumentPassingModeAST::Enumeration::invalid:
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::Enumeration::enum_input:
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::Enumeration::enum_inputWithType:
      {
        GALGAS_bool extractedValue_3168__0 ;
        GALGAS_lstring extractedValue_3179_typeName_1 ;
        GALGAS_lstring extractedValue_3188__2 ;
        enumerator_3064.current_mEffectiveParameterKind (HERE).getAssociatedValuesFor_inputWithType (extractedValue_3168__0, extractedValue_3179_typeName_1, extractedValue_3188__2) ;
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          test_1 = GALGAS_bool (ComparisonKind::notEqual, extractedValue_3179_typeName_1.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_1) {
            {
            ioArgument_ioGraph.setter_noteNode (extractedValue_3179_typeName_1 COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 64)) ;
            }
          }
        }
      }
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::Enumeration::enum_output:
      {
        GALGAS_expressionAST extractedValue_3295_expression_0 ;
        GALGAS_location extractedValue_3306__1 ;
        enumerator_3064.current_mEffectiveParameterKind (HERE).getAssociatedValuesFor_output (extractedValue_3295_expression_0, extractedValue_3306__1) ;
        callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((cPtr_expressionAST *) extractedValue_3295_expression_0.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 66)) ;
      }
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::Enumeration::enum_outputInput:
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::Enumeration::enum_outputInputSelfVariable:
      break ;
    }
    enumerator_3064.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@standaloneFunctionInExpressionAST analyzeExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_standaloneFunctionInExpressionAST::method_analyzeExpression (const GALGAS_omnibusType constinArgument_inSelfType,
                                                                       const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                                                       const GALGAS_omnibusType /* constinArgument_inOptionalTargetType */,
                                                                       const GALGAS_semanticContext constinArgument_inContext,
                                                                       const GALGAS_mode constinArgument_inMode,
                                                                       GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                       GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                       GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                       GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                       GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                       GALGAS_objectIR & outArgument_outFunctionCallReturnedValue,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inRoutineAttributes.getter_contains (GALGAS_routineAttributes::class_func_guard (SOURCE_FILE ("expression-standalone-function-call.galgas", 91)) COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 91)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_standaloneFunctionInExpressionAST temp_1 = this ;
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mStandaloneFunctionName ().readProperty_location (), GALGAS_string ("a routine cannot be called in guard"), fixItArray2  COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 92)) ;
    }
  }
  const GALGAS_standaloneFunctionInExpressionAST temp_3 = this ;
  const GALGAS_standaloneFunctionInExpressionAST temp_4 = this ;
  GALGAS_lstring var_routineLLVMName_4697 = function_routineMangledNameFromCall (GALGAS_string::makeEmptyString (), temp_3.readProperty_mStandaloneFunctionName (), temp_4.readProperty_mArguments (), inCompiler COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 95)) ;
  const GALGAS_standaloneFunctionInExpressionAST temp_5 = this ;
  const GALGAS_standaloneFunctionInExpressionAST temp_6 = this ;
  GALGAS_lstring var_signature_4836 = extensionGetter_routineSignature (temp_5.readProperty_mArguments (), temp_6.readProperty_mStandaloneFunctionName ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 97)) ;
  const GALGAS_standaloneFunctionInExpressionAST temp_7 = this ;
  const GALGAS_standaloneFunctionInExpressionAST temp_8 = this ;
  GALGAS_lstring var_requiredFunctionMangledName_4956 = GALGAS_lstring::init_21__21_ (temp_7.readProperty_mStandaloneFunctionName ().readProperty_string ().add_operation (var_signature_4836.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 99)), temp_8.readProperty_mStandaloneFunctionName ().readProperty_location (), inCompiler COMMA_HERE) ;
  GALGAS_bool var_implementedPublic_5202 ;
  GALGAS_routineTypedSignature var_formalSignature_5229 ;
  GALGAS_unifiedTypeMapEntry var_formalReturnTypeProxy_5254 ;
  GALGAS_routineLLVMNameDict var_implementedModeDictionary_5313 ;
  GALGAS_bool var_isExported_5355 ;
  GALGAS_mode var_implementedMode_5382 ;
  constinArgument_inContext.readProperty_mRoutineMap ().method_searchKey (var_requiredFunctionMangledName_4956, var_implementedPublic_5202, var_formalSignature_5229, var_formalReturnTypeProxy_5254, var_implementedModeDictionary_5313, var_isExported_5355, var_implementedMode_5382, inCompiler COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 101)) ;
  enumGalgasBool test_9 = kBoolTrue ;
  if (kBoolTrue == test_9) {
    test_9 = GALGAS_bool (ComparisonKind::equal, var_formalReturnTypeProxy_5254.objectCompare (GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("expression-standalone-function-call.galgas", 111)))).boolEnum () ;
    if (kBoolTrue == test_9) {
      TC_Array <FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (var_requiredFunctionMangledName_4956.readProperty_location (), GALGAS_string ("this function does not return any value"), fixItArray10  COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 112)) ;
      outArgument_outFunctionCallReturnedValue.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_9) {
    GALGAS_string var_functionLLVMName_5632 = function_checkModeAndReturnsRoutineLLVMName (var_implementedModeDictionary_5313, constinArgument_inMode, var_requiredFunctionMangledName_4956, inCompiler COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 115)) ;
    GALGAS_procCallEffectiveParameterListIR temp_11 = GALGAS_procCallEffectiveParameterListIR::init (inCompiler COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 117)) ;
    GALGAS_procCallEffectiveParameterListIR var_effectiveParameterListIR_5830 = temp_11 ;
    {
    const GALGAS_standaloneFunctionInExpressionAST temp_12 = this ;
    routine_analyzeEffectiveParameters_3F_self_3F_routineAttributes_3F_formal_3F_effective_3F_errorLocation_3F_context_3F_requiredMode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_26_effectiveIR (constinArgument_inSelfType, constinArgument_inRoutineAttributes, var_formalSignature_5229, temp_12.readProperty_mArguments (), var_requiredFunctionMangledName_4956.readProperty_location (), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_effectiveParameterListIR_5830, inCompiler  COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 118)) ;
    }
    {
    routine_getNewTempValue_3F__26__21_ (extensionGetter_type (var_formalReturnTypeProxy_5254, inCompiler COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 134)), ioArgument_ioTemporaries, outArgument_outFunctionCallReturnedValue, inCompiler  COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 134)) ;
    }
    ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_standaloneRoutineCallIR::init_21__21__21__21_ (outArgument_outFunctionCallReturnedValue, var_routineLLVMName_4697, var_functionLLVMName_5632, var_effectiveParameterListIR_5830, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 136)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@constructorCallAST addDependenceEdgeForStaticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_constructorCallAST::method_addDependenceEdgeForStaticExpression (const GALGAS_lstring constinArgument_inConstantName,
                                                                           GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GALGAS_constructorCallAST temp_0 = this ;
  ioArgument_ioGraph.setter_addEdge (constinArgument_inConstantName, temp_0.readProperty_mTypeName () COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 49)) ;
  }
  const GALGAS_constructorCallAST temp_1 = this ;
  cEnumerator_functionCallEffectiveParameterListAST enumerator_2244 (temp_1.readProperty_mParameterList (), EnumerationOrder::up) ;
  while (enumerator_2244.hasCurrentObject ()) {
    callExtensionMethod_addDependenceEdgeForStaticExpression ((cPtr_expressionAST *) enumerator_2244.current_mExpression (HERE).ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 52)) ;
    enumerator_2244.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@constructorCallAST noteExpressionTypesInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_constructorCallAST::method_noteExpressionTypesInPrecedenceGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GALGAS_constructorCallAST temp_0 = this ;
  ioArgument_ioGraph.setter_noteNode (temp_0.readProperty_mTypeName () COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 61)) ;
  }
  const GALGAS_constructorCallAST temp_1 = this ;
  cEnumerator_functionCallEffectiveParameterListAST enumerator_2899 (temp_1.readProperty_mParameterList (), EnumerationOrder::up) ;
  while (enumerator_2899.hasCurrentObject ()) {
    callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((cPtr_expressionAST *) enumerator_2899.current_mExpression (HERE).ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 63)) ;
    enumerator_2899.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@constructorCallAST analyzeExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_constructorCallAST::method_analyzeExpression (const GALGAS_omnibusType constinArgument_inSelfType,
                                                        const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                                        const GALGAS_omnibusType /* constinArgument_inOptionalTargetType */,
                                                        const GALGAS_semanticContext constinArgument_inContext,
                                                        const GALGAS_mode constinArgument_inMode,
                                                        GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                        GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                        GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                        GALGAS_allocaList & ioArgument_ioAllocaList,
                                                        GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                        GALGAS_objectIR & outArgument_outResult,
                                                        Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_constructorKey_4011 = GALGAS_string ("(") ;
  const GALGAS_constructorCallAST temp_0 = this ;
  cEnumerator_functionCallEffectiveParameterListAST enumerator_4048 (temp_0.readProperty_mParameterList (), EnumerationOrder::up) ;
  while (enumerator_4048.hasCurrentObject ()) {
    var_constructorKey_4011.plusAssign_operation(GALGAS_string ("!").add_operation (enumerator_4048.current_mSelector (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 87)), inCompiler  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 87)) ;
    enumerator_4048.gotoNextObject () ;
  }
  var_constructorKey_4011.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 89)) ;
  const GALGAS_constructorCallAST temp_1 = this ;
  GALGAS_omnibusType var_resultType_4200 = extensionGetter_type (extensionGetter_searchKey (constinArgument_inContext.readProperty_mTypeMap (), temp_1.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 91)), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 91)) ;
  const GALGAS_constructorCallAST temp_2 = this ;
  GALGAS_lstring var_typeName_4273 = GALGAS_lstring::init_21__21_ (var_resultType_4200.readProperty_omnibusTypeDescriptionName (), temp_2.readProperty_mErrorLocation (), inCompiler COMMA_HERE) ;
  GALGAS_constructorMap var_constructorMap_4418 ;
  constinArgument_inContext.readProperty_mTypeConstructorMap ().method_searchKey (var_typeName_4273, var_constructorMap_4418, inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 93)) ;
  GALGAS_constructorSignature var_constructorSignature_4564 ;
  GALGAS_constructorValue var_initValue_4590 ;
  const GALGAS_constructorCallAST temp_3 = this ;
  var_constructorMap_4418.method_searchKey (GALGAS_lstring::init_21__21_ (var_constructorKey_4011, temp_3.readProperty_mErrorLocation (), inCompiler COMMA_HERE), var_constructorSignature_4564, var_initValue_4590, inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 95)) ;
  switch (var_initValue_4590.enumValue ()) {
  case GALGAS_constructorValue::Enumeration::invalid:
    break ;
  case GALGAS_constructorValue::Enumeration::enum_arrayValue:
    {
      GALGAS_omnibusType extractedValue_4663_elementType_0 ;
      GALGAS_uint extractedValue_4675_size_1 ;
      var_initValue_4590.getAssociatedValuesFor_arrayValue (extractedValue_4663_elementType_0, extractedValue_4675_size_1) ;
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        test_4 = GALGAS_bool (ComparisonKind::equal, var_constructorKey_4011.objectCompare (GALGAS_string ("(!repeated)"))).boolEnum () ;
        if (kBoolTrue == test_4) {
          const GALGAS_constructorCallAST temp_5 = this ;
          GALGAS_expressionAST var_expression_4737 = temp_5.readProperty_mParameterList ().getter_mExpressionAtIndex (GALGAS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 100)) ;
          GALGAS_objectIR var_expressionResult_5221 ;
          callExtensionMethod_analyzeExpression ((cPtr_expressionAST *) var_expression_4737.ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, extractedValue_4663_elementType_0, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_expressionResult_5221, inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 101)) ;
          const GALGAS_constructorCallAST temp_6 = this ;
          GALGAS_objectIR var_result_5256 = function_checkAssignmentCompatibility (constinArgument_inContext.readProperty_mAssignmentOperatorMap (), var_expressionResult_5221, extractedValue_4663_elementType_0, temp_6.readProperty_mParameterList ().getter_mSelectorAtIndex (GALGAS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 118)).readProperty_location (), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 114)) ;
          enumGalgasBool test_7 = kBoolTrue ;
          if (kBoolTrue == test_7) {
            test_7 = extensionGetter_isStatic (var_result_5256, inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 121)).boolEnum () ;
            if (kBoolTrue == test_7) {
              GALGAS_uint var_idx_5572 = ioArgument_ioStaticEntityMap.readProperty_mGlobalStructuredConstantList ().getter_count (SOURCE_FILE ("expression-constructor-call.galgas", 122)) ;
              outArgument_outResult = GALGAS_objectIR::class_func_llvmArrayRepeatedStaticValue (var_resultType_4200, extractedValue_4675_size_1, var_result_5256, var_idx_5572  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 123)) ;
              GALGAS_operandIRList temp_8 = GALGAS_operandIRList::init (inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 124)) ;
              GALGAS_operandIRList var_operandIRList_5772 = temp_8 ;
              cEnumerator_range enumerator_5815 (GALGAS_range (GALGAS_uint (uint32_t (0U)), extractedValue_4675_size_1.substract_operation (GALGAS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 125))), EnumerationOrder::up) ;
              while (enumerator_5815.hasCurrentObject ()) {
                var_operandIRList_5772.addAssign_operation (var_result_5256  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 126)) ;
                enumerator_5815.gotoNextObject () ;
              }
              ioArgument_ioStaticEntityMap.mProperty_mGlobalStructuredConstantList.addAssign_operation (var_resultType_4200, var_operandIRList_5772  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 128)) ;
            }
          }
          if (kBoolFalse == test_7) {
            outArgument_outResult = GALGAS_objectIR::class_func_llvmArrayRepeatedDynamicValue (var_resultType_4200, extractedValue_4675_size_1, var_result_5256  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 130)) ;
          }
        }
      }
      if (kBoolFalse == test_4) {
        GALGAS_string var_individualConstructor_6096 = GALGAS_string ("(") ;
        cEnumerator_range enumerator_6145 (GALGAS_range (GALGAS_uint (uint32_t (0U)), extractedValue_4675_size_1.substract_operation (GALGAS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 134))), EnumerationOrder::up) ;
        while (enumerator_6145.hasCurrentObject ()) {
          var_individualConstructor_6096.plusAssign_operation(GALGAS_string ("!"), inCompiler  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 135)) ;
          enumerator_6145.gotoNextObject () ;
        }
        var_individualConstructor_6096.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 137)) ;
        enumGalgasBool test_9 = kBoolTrue ;
        if (kBoolTrue == test_9) {
          test_9 = GALGAS_bool (ComparisonKind::equal, var_constructorKey_4011.objectCompare (var_individualConstructor_6096)).boolEnum () ;
          if (kBoolTrue == test_9) {
            GALGAS_operandIRList temp_10 = GALGAS_operandIRList::init (inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 139)) ;
            GALGAS_operandIRList var_operandIRList_6316 = temp_10 ;
            GALGAS_bool var_resultIsStatic_6348 = GALGAS_bool (true) ;
            const GALGAS_constructorCallAST temp_11 = this ;
            cEnumerator_functionCallEffectiveParameterListAST enumerator_6393 (temp_11.readProperty_mParameterList (), EnumerationOrder::up) ;
            while (enumerator_6393.hasCurrentObject ()) {
              GALGAS_objectIR var_expressionResult_6908 ;
              callExtensionMethod_analyzeExpression ((cPtr_expressionAST *) enumerator_6393.current_mExpression (HERE).ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, extractedValue_4663_elementType_0, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_expressionResult_6908, inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 142)) ;
              GALGAS_objectIR var_result_6951 = function_checkAssignmentCompatibility (constinArgument_inContext.readProperty_mAssignmentOperatorMap (), var_expressionResult_6908, extractedValue_4663_elementType_0, enumerator_6393.current_mSelector (HERE).readProperty_location (), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 155)) ;
              var_operandIRList_6316.addAssign_operation (var_result_6951  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 162)) ;
              GALGAS_bool test_12 = var_resultIsStatic_6348 ;
              if (kBoolTrue == test_12.boolEnum ()) {
                test_12 = extensionGetter_isStatic (var_result_6951, inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 163)) ;
              }
              var_resultIsStatic_6348 = test_12 ;
              enumerator_6393.gotoNextObject () ;
            }
            enumGalgasBool test_13 = kBoolTrue ;
            if (kBoolTrue == test_13) {
              test_13 = var_resultIsStatic_6348.boolEnum () ;
              if (kBoolTrue == test_13) {
                GALGAS_uint var_idx_7370 = ioArgument_ioStaticEntityMap.readProperty_mGlobalStructuredConstantList ().getter_count (SOURCE_FILE ("expression-constructor-call.galgas", 166)) ;
                outArgument_outResult = GALGAS_objectIR::class_func_llvmArrayStaticValues (var_resultType_4200, var_operandIRList_6316, var_idx_7370  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 167)) ;
                ioArgument_ioStaticEntityMap.mProperty_mGlobalStructuredConstantList.addAssign_operation (var_resultType_4200, var_operandIRList_6316  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 168)) ;
              }
            }
            if (kBoolFalse == test_13) {
              outArgument_outResult = GALGAS_objectIR::class_func_llvmArrayDynamicValues (var_resultType_4200, var_operandIRList_6316  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 170)) ;
            }
          }
        }
        if (kBoolFalse == test_9) {
          const GALGAS_constructorCallAST temp_14 = this ;
          TC_Array <FixItDescription> fixItArray15 ;
          inCompiler->emitSemanticError (temp_14.readProperty_mErrorLocation (), GALGAS_string ("invalid constructor"), fixItArray15  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 173)) ;
          outArgument_outResult.drop () ; // Release error dropped variable
        }
      }
    }
    break ;
  case GALGAS_constructorValue::Enumeration::enum_null:
    {
      outArgument_outResult = GALGAS_objectIR::class_func_null (var_resultType_4200  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 177)) ;
    }
    break ;
  case GALGAS_constructorValue::Enumeration::enum_simple:
    {
      GALGAS_bigint extractedValue_7900_value_0 ;
      var_initValue_4590.getAssociatedValuesFor_simple (extractedValue_7900_value_0) ;
      enumGalgasBool test_16 = kBoolTrue ;
      if (kBoolTrue == test_16) {
        const GALGAS_constructorCallAST temp_17 = this ;
        test_16 = GALGAS_bool (ComparisonKind::notEqual, temp_17.readProperty_mParameterList ().getter_count (SOURCE_FILE ("expression-constructor-call.galgas", 179)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
        if (kBoolTrue == test_16) {
          const GALGAS_constructorCallAST temp_18 = this ;
          TC_Array <FixItDescription> fixItArray19 ;
          inCompiler->emitSemanticError (temp_18.readProperty_mErrorLocation (), var_resultType_4200.readProperty_omnibusTypeDescriptionName ().add_operation (GALGAS_string (" constructor should have no parameter"), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 180)), fixItArray19  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 180)) ;
          outArgument_outResult.drop () ; // Release error dropped variable
        }
      }
      if (kBoolFalse == test_16) {
        outArgument_outResult = GALGAS_objectIR::class_func_literalInteger (var_resultType_4200, extractedValue_7900_value_0  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 182)) ;
      }
    }
    break ;
  case GALGAS_constructorValue::Enumeration::enum_structure:
    {
      GALGAS_sortedOperandIRList extractedValue_8182_sortedOperandList_0 ;
      var_initValue_4590.getAssociatedValuesFor_structure (extractedValue_8182_sortedOperandList_0) ;
      GALGAS_sortedOperandIRList var_sortedOperandIRList_8211 = extractedValue_8182_sortedOperandList_0 ;
      enumGalgasBool test_20 = kBoolTrue ;
      if (kBoolTrue == test_20) {
        const GALGAS_constructorCallAST temp_21 = this ;
        test_20 = GALGAS_bool (ComparisonKind::notEqual, temp_21.readProperty_mParameterList ().getter_count (SOURCE_FILE ("expression-constructor-call.galgas", 186)).objectCompare (var_constructorSignature_4564.getter_count (SOURCE_FILE ("expression-constructor-call.galgas", 186)))).boolEnum () ;
        if (kBoolTrue == test_20) {
          const GALGAS_constructorCallAST temp_22 = this ;
          GALGAS_string temp_23 ;
          const enumGalgasBool test_24 = GALGAS_bool (ComparisonKind::greaterThan, var_constructorSignature_4564.getter_count (SOURCE_FILE ("expression-constructor-call.galgas", 188)).objectCompare (GALGAS_uint (uint32_t (1U)))).boolEnum () ;
          if (kBoolTrue == test_24) {
            temp_23 = GALGAS_string ("s") ;
          }else if (kBoolFalse == test_24) {
            temp_23 = GALGAS_string::makeEmptyString () ;
          }
          const GALGAS_constructorCallAST temp_25 = this ;
          TC_Array <FixItDescription> fixItArray26 ;
          inCompiler->emitSemanticError (temp_22.readProperty_mErrorLocation (), GALGAS_string ("this constructor call should name ").add_operation (var_constructorSignature_4564.getter_count (SOURCE_FILE ("expression-constructor-call.galgas", 187)).getter_string (SOURCE_FILE ("expression-constructor-call.galgas", 187)), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 187)).add_operation (GALGAS_string (" parameter"), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 187)).add_operation (temp_23, inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 187)).add_operation (GALGAS_string (" instead of "), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 188)).add_operation (temp_25.readProperty_mParameterList ().getter_count (SOURCE_FILE ("expression-constructor-call.galgas", 189)).getter_string (SOURCE_FILE ("expression-constructor-call.galgas", 189)), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 189)), fixItArray26  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 187)) ;
          outArgument_outResult.drop () ; // Release error dropped variable
        }
      }
      if (kBoolFalse == test_20) {
        const GALGAS_constructorCallAST temp_27 = this ;
        cEnumerator_constructorSignature enumerator_8630 (var_constructorSignature_4564, EnumerationOrder::up) ;
        cEnumerator_functionCallEffectiveParameterListAST enumerator_8696 (temp_27.readProperty_mParameterList (), EnumerationOrder::up) ;
        while (enumerator_8630.hasCurrentObject () && enumerator_8696.hasCurrentObject ()) {
          enumGalgasBool test_28 = kBoolTrue ;
          if (kBoolTrue == test_28) {
            test_28 = GALGAS_bool (ComparisonKind::notEqual, enumerator_8696.current_mSelector (HERE).readProperty_string ().objectCompare (enumerator_8630.current_mSelector (HERE))).boolEnum () ;
            if (kBoolTrue == test_28) {
              TC_Array <FixItDescription> fixItArray29 ;
              inCompiler->emitSemanticError (enumerator_8696.current_mSelector (HERE).readProperty_location (), GALGAS_string ("the selector should be '!").add_operation (enumerator_8630.current_mSelector (HERE), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 194)).add_operation (GALGAS_string (":'"), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 194)), fixItArray29  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 194)) ;
            }
          }
          GALGAS_objectIR var_expressionResult_9376 ;
          callExtensionMethod_analyzeExpression ((cPtr_expressionAST *) enumerator_8696.current_mExpression (HERE).ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, enumerator_8630.current_mType (HERE), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_expressionResult_9376, inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 196)) ;
          GALGAS_objectIR var_result_9415 = function_checkAssignmentCompatibility (constinArgument_inContext.readProperty_mAssignmentOperatorMap (), var_expressionResult_9376, enumerator_8630.current_mType (HERE), enumerator_8696.current_mSelector (HERE).readProperty_location (), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 209)) ;
          {
          extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_result_9415, inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 216)) ;
          }
          var_sortedOperandIRList_8211.addAssign_operation (var_result_9415, enumerator_8630.current_mFieldIndex (HERE)  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 217)) ;
          enumerator_8630.gotoNextObject () ;
          enumerator_8696.gotoNextObject () ;
        }
        outArgument_outResult = GALGAS_objectIR::class_func_llvmStructureValue (var_resultType_4200, var_sortedOperandIRList_8211  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 219)) ;
      }
    }
    break ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@compileTimeInfixOperatorAST locationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GALGAS_location cPtr_compileTimeInfixOperatorAST::getter_locationForErrorSignaling (Compiler */* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_location result_outLocation ; // Returned variable
  const GALGAS_compileTimeInfixOperatorAST temp_0 = this ;
  result_outLocation = temp_0.readProperty_mInfixOperatorLocation () ;
//---
  return result_outLocation ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@compileTimeInfixOperatorAST enterInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_compileTimeInfixOperatorAST::method_enterInPrecedenceGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_compileTimeInfixOperatorAST temp_0 = this ;
  const GALGAS_compileTimeInfixOperatorAST temp_1 = this ;
  const GALGAS_compileTimeInfixOperatorAST temp_2 = this ;
  const GALGAS_compileTimeInfixOperatorAST temp_3 = this ;
  GALGAS_lstring var_nodeName_5715 = GALGAS_lstring::init_21__21_ (extensionGetter_string (temp_0.readProperty_mInfixOperator (), inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 183)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 183)).add_operation (temp_1.readProperty_mLeftTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 183)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 183)).add_operation (temp_2.readProperty_mRightTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 183)), temp_3.readProperty_mInfixOperatorLocation (), inCompiler COMMA_HERE) ;
  {
  const GALGAS_compileTimeInfixOperatorAST temp_4 = this ;
  ioArgument_ioGraph.setter_addNode (var_nodeName_5715, temp_4, inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 184)) ;
  }
  {
  const GALGAS_compileTimeInfixOperatorAST temp_5 = this ;
  ioArgument_ioGraph.setter_addEdge (var_nodeName_5715, temp_5.readProperty_mLeftTypeName () COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 185)) ;
  }
  {
  const GALGAS_compileTimeInfixOperatorAST temp_6 = this ;
  ioArgument_ioGraph.setter_addEdge (var_nodeName_5715, temp_6.readProperty_mRightTypeName () COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 186)) ;
  }
  {
  const GALGAS_compileTimeInfixOperatorAST temp_7 = this ;
  ioArgument_ioGraph.setter_addEdge (var_nodeName_5715, temp_7.readProperty_mResultTypeName () COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 187)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (function_compileTimeDeclarationBarrier (inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 188)), var_nodeName_5715 COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 188)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@compileTimeInfixOperatorAST keyRepresentationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_compileTimeInfixOperatorAST::getter_keyRepresentationForErrorSignaling (Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outRepresentation ; // Returned variable
  const GALGAS_compileTimeInfixOperatorAST temp_0 = this ;
  const GALGAS_compileTimeInfixOperatorAST temp_1 = this ;
  const GALGAS_compileTimeInfixOperatorAST temp_2 = this ;
  result_outRepresentation = temp_0.readProperty_mLeftTypeName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 194)).add_operation (extensionGetter_string (temp_1.readProperty_mInfixOperator (), inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 194)), inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 194)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 194)).add_operation (temp_2.readProperty_mRightTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 194)) ;
//---
  return result_outRepresentation ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@compileTimeInfixOperatorAST enterInContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_compileTimeInfixOperatorAST::method_enterInContext (GALGAS_semanticContext & ioArgument_ioContext,
                                                              GALGAS_declarationDecorationList & /* ioArgument_ioDecoratedDeclarationList */,
                                                              GALGAS_decoratedRegularRoutineList & /* ioArgument_ioDecoratedRoutineList */,
                                                              GALGAS_routineListIR & /* ioArgument_ioRoutineListIR */,
                                                              GALGAS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                              GALGAS_staticEntityMap & /* ioArgument_ioStaticEntityMap */,
                                                              GALGAS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                              GALGAS_userLLVMTypeDefinitionListIR & /* ioArgument_ioUserLLVMTypeDefinitionListIR */,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapEntry var_leftTypeProxy_7498 ;
  {
  const GALGAS_compileTimeInfixOperatorAST temp_0 = this ;
  extensionSetter_makeEntry (ioArgument_ioContext.mProperty_mTypeMap, temp_0.readProperty_mLeftTypeName (), var_leftTypeProxy_7498, inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 212)) ;
  }
  GALGAS_omnibusType var_leftType_7519 = extensionGetter_type (var_leftTypeProxy_7498, inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 213)) ;
  const GALGAS_compileTimeInfixOperatorAST temp_1 = this ;
  callExtensionMethod_checkIsCompileTimeType ((cPtr_omnibusType *) var_leftType_7519.ptr (), temp_1.readProperty_mLeftTypeName ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 214)) ;
  GALGAS_unifiedTypeMapEntry var_rightTypeProxy_7676 ;
  {
  const GALGAS_compileTimeInfixOperatorAST temp_2 = this ;
  extensionSetter_makeEntry (ioArgument_ioContext.mProperty_mTypeMap, temp_2.readProperty_mRightTypeName (), var_rightTypeProxy_7676, inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 215)) ;
  }
  GALGAS_omnibusType var_rightType_7698 = extensionGetter_type (var_rightTypeProxy_7676, inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 216)) ;
  const GALGAS_compileTimeInfixOperatorAST temp_3 = this ;
  callExtensionMethod_checkIsCompileTimeType ((cPtr_omnibusType *) var_rightType_7698.ptr (), temp_3.readProperty_mRightTypeName ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 217)) ;
  GALGAS_unifiedTypeMapEntry var_resultTypeProxy_7860 ;
  {
  const GALGAS_compileTimeInfixOperatorAST temp_4 = this ;
  extensionSetter_makeEntry (ioArgument_ioContext.mProperty_mTypeMap, temp_4.readProperty_mResultTypeName (), var_resultTypeProxy_7860, inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 218)) ;
  }
  GALGAS_omnibusType var_resultType_7883 = extensionGetter_type (var_resultTypeProxy_7860, inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 219)) ;
  const GALGAS_compileTimeInfixOperatorAST temp_5 = this ;
  callExtensionMethod_checkIsCompileTimeType ((cPtr_omnibusType *) var_resultType_7883.ptr (), temp_5.readProperty_mResultTypeName ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 220)) ;
  GALGAS_ctCheckMap temp_6 = GALGAS_ctCheckMap::init (inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 222)) ;
  GALGAS_ctCheckMap var_ctCheckMap_8044 = temp_6 ;
  {
  const GALGAS_compileTimeInfixOperatorAST temp_7 = this ;
  var_ctCheckMap_8044.setter_insertKey (temp_7.readProperty_mLeftOperandName (), inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 223)) ;
  }
  {
  const GALGAS_compileTimeInfixOperatorAST temp_8 = this ;
  var_ctCheckMap_8044.setter_insertKey (temp_8.readProperty_mRightOperandName (), inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 224)) ;
  }
  const GALGAS_compileTimeInfixOperatorAST temp_9 = this ;
  callExtensionMethod_checkCompileTimeExpression ((cPtr_ctExpressionAST *) temp_9.readProperty_mExpression ().ptr (), var_ctCheckMap_8044, inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 225)) ;
  const GALGAS_compileTimeInfixOperatorAST temp_10 = this ;
  const GALGAS_compileTimeInfixOperatorAST temp_11 = this ;
  GALGAS_lstring var_key_8263 = function_infixOperatorMapKey (var_leftType_7519, extensionGetter_omnibusInfixOperator (temp_10.readProperty_mInfixOperator (), inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 227)), temp_11.readProperty_mInfixOperatorLocation (), var_rightType_7698, inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 227)) ;
  const GALGAS_compileTimeInfixOperatorAST temp_12 = this ;
  const GALGAS_compileTimeInfixOperatorAST temp_13 = this ;
  const GALGAS_compileTimeInfixOperatorAST temp_14 = this ;
  GALGAS_compileTimeInfixOperatorUsage var_definition_8368 = GALGAS_compileTimeInfixOperatorUsage::init_21__21__21_ (temp_12.readProperty_mLeftOperandName (), temp_13.readProperty_mRightOperandName (), temp_14.readProperty_mExpression (), inCompiler COMMA_HERE) ;
  {
  ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_8263, var_resultType_7883, var_definition_8368, inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 233)) ;
  }
  enumGalgasBool test_15 = kBoolTrue ;
  if (kBoolTrue == test_15) {
    const GALGAS_compileTimeInfixOperatorAST temp_16 = this ;
    GALGAS_bool test_17 = GALGAS_bool (ComparisonKind::equal, temp_16.readProperty_mInfixOperator ().objectCompare (GALGAS_compileTimeInfixOperatorEnumeration::class_func_equal (SOURCE_FILE ("infix-operator-compile-time.galgas", 235)))) ;
    if (kBoolTrue != test_17.boolEnum ()) {
      const GALGAS_compileTimeInfixOperatorAST temp_18 = this ;
      test_17 = GALGAS_bool (ComparisonKind::equal, temp_18.readProperty_mInfixOperator ().objectCompare (GALGAS_compileTimeInfixOperatorEnumeration::class_func_lessThan (SOURCE_FILE ("infix-operator-compile-time.galgas", 235)))) ;
    }
    test_15 = test_17.boolEnum () ;
    if (kBoolTrue == test_15) {
      const GALGAS_compileTimeInfixOperatorAST temp_19 = this ;
      GALGAS_lstring var_equal_5F_key_8688 = function_infixOperatorMapKey (var_leftType_7519, GALGAS_omnibusInfixOperator::class_func_equal (SOURCE_FILE ("infix-operator-compile-time.galgas", 236)), temp_19.readProperty_mInfixOperatorLocation (), var_rightType_7698, inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 236)) ;
      const GALGAS_compileTimeInfixOperatorAST temp_20 = this ;
      GALGAS_lstring var_lessThan_5F_key_8788 = function_infixOperatorMapKey (var_leftType_7519, GALGAS_omnibusInfixOperator::class_func_lessThan (SOURCE_FILE ("infix-operator-compile-time.galgas", 237)), temp_20.readProperty_mInfixOperatorLocation (), var_rightType_7698, inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 237)) ;
      enumGalgasBool test_21 = kBoolTrue ;
      if (kBoolTrue == test_21) {
        test_21 = ioArgument_ioContext.readProperty_mInfixOperatorMap ().getter_hasKey (var_equal_5F_key_8688.readProperty_string () COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 238)).operator_and (ioArgument_ioContext.readProperty_mInfixOperatorMap ().getter_hasKey (var_lessThan_5F_key_8788.readProperty_string () COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 238)) COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 238)).boolEnum () ;
        if (kBoolTrue == test_21) {
          GALGAS_omnibusInfixOperatorUsage var_equalOperatorUsage_9059 ;
          GALGAS_omnibusType joker_9051 ; // Joker input parameter
          ioArgument_ioContext.readProperty_mInfixOperatorMap ().method_searchKey (var_equal_5F_key_8688, joker_9051, var_equalOperatorUsage_9059, inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 239)) ;
          GALGAS_omnibusInfixOperatorUsage var_lessThanOperatorUsage_9144 ;
          GALGAS_omnibusType joker_9136 ; // Joker input parameter
          ioArgument_ioContext.readProperty_mInfixOperatorMap ().method_searchKey (var_lessThan_5F_key_8788, joker_9136, var_lessThanOperatorUsage_9144, inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 240)) ;
          enumGalgasBool test_22 = kBoolTrue ;
          if (kBoolTrue == test_22) {
            GALGAS_compileTimeInfixOperatorUsage var_eou_9178 (dynamic_cast <const cPtr_compileTimeInfixOperatorUsage *> (var_equalOperatorUsage_9059.ptr ())) ;
            if (nullptr == var_eou_9178.ptr ()) {
              test_22 = kBoolFalse ;
            }
            if (kBoolTrue == test_22) {
              GALGAS_compileTimeInfixOperatorUsage var_ltou_9249 (dynamic_cast <const cPtr_compileTimeInfixOperatorUsage *> (var_lessThanOperatorUsage_9144.ptr ())) ;
              if (nullptr == var_ltou_9249.ptr ()) {
                test_22 = kBoolFalse ;
              }
              if (kBoolTrue == test_22) {
                GALGAS_compileTimeInfixInfEqualOperatorUsage var_infEqual_5F_definition_9327 = GALGAS_compileTimeInfixInfEqualOperatorUsage::init_21__21_ (var_eou_9178, var_ltou_9249, inCompiler COMMA_HERE) ;
                const GALGAS_compileTimeInfixOperatorAST temp_23 = this ;
                GALGAS_lstring var_infEqual_5F_key_9416 = function_infixOperatorMapKey (var_leftType_7519, GALGAS_omnibusInfixOperator::class_func_infEqual (SOURCE_FILE ("infix-operator-compile-time.galgas", 244)), temp_23.readProperty_mInfixOperatorLocation (), var_rightType_7698, inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 244)) ;
                {
                ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_infEqual_5F_key_9416, var_resultType_7883, var_infEqual_5F_definition_9327, inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 245)) ;
                }
              }
            }
          }
        }
      }
    }
  }
  enumGalgasBool test_24 = kBoolTrue ;
  if (kBoolTrue == test_24) {
    const GALGAS_compileTimeInfixOperatorAST temp_25 = this ;
    test_24 = GALGAS_bool (ComparisonKind::equal, temp_25.readProperty_mInfixOperator ().objectCompare (GALGAS_compileTimeInfixOperatorEnumeration::class_func_addOp (SOURCE_FILE ("infix-operator-compile-time.galgas", 250)))).boolEnum () ;
    if (kBoolTrue == test_24) {
      const GALGAS_compileTimeInfixOperatorAST temp_26 = this ;
      GALGAS_lstring var_addOpNoOVF_5F_key_9712 = function_infixOperatorMapKey (var_leftType_7519, GALGAS_omnibusInfixOperator::class_func_addOpNoOvf (SOURCE_FILE ("infix-operator-compile-time.galgas", 251)), temp_26.readProperty_mInfixOperatorLocation (), var_rightType_7698, inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 251)) ;
      {
      ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_addOpNoOVF_5F_key_9712, var_resultType_7883, var_definition_8368, inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 252)) ;
      }
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@compileTimeInfixOperatorUsage generateCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_compileTimeInfixOperatorUsage::method_generateCode (const GALGAS_objectIR constinArgument_inLeftOperand,
                                                              const GALGAS_location /* constinArgument_inOperatorLocation */,
                                                              const GALGAS_objectIR constinArgument_inRightOperand,
                                                              const GALGAS_omnibusType constinArgument_inResultType,
                                                              GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                              GALGAS_allocaList & /* ioArgument_ioAllocaList */,
                                                              GALGAS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                              GALGAS_objectIR & outArgument_outResultValue,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint var_result_11606 ;
  const GALGAS_compileTimeInfixOperatorUsage temp_0 = this ;
  callExtensionMethod_eval ((cPtr_compileTimeInfixOperatorUsage *) temp_0.ptr (), constinArgument_inLeftOperand, constinArgument_inRightOperand, var_result_11606, inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 293)) ;
  outArgument_outResultValue = GALGAS_objectIR::class_func_literalInteger (constinArgument_inResultType, var_result_11606  COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 294)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@compileTimeInfixInfEqualOperatorUsage generateCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_compileTimeInfixInfEqualOperatorUsage::method_generateCode (const GALGAS_objectIR constinArgument_inLeftOperand,
                                                                      const GALGAS_location /* constinArgument_inOperatorLocation */,
                                                                      const GALGAS_objectIR constinArgument_inRightOperand,
                                                                      const GALGAS_omnibusType constinArgument_inResultType,
                                                                      GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                      GALGAS_allocaList & /* ioArgument_ioAllocaList */,
                                                                      GALGAS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                                      GALGAS_objectIR & outArgument_outResultValue,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint var_result_12598 ;
  const GALGAS_compileTimeInfixInfEqualOperatorUsage temp_0 = this ;
  callExtensionMethod_eval ((cPtr_compileTimeInfixOperatorUsage *) temp_0.readProperty_mEqualOperatorUsage ().ptr (), constinArgument_inLeftOperand, constinArgument_inRightOperand, var_result_12598, inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 316)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (ComparisonKind::equal, var_result_12598.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 317)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_compileTimeInfixInfEqualOperatorUsage temp_2 = this ;
      callExtensionMethod_eval ((cPtr_compileTimeInfixOperatorUsage *) temp_2.readProperty_mLessThanOperatorUsage ().ptr (), constinArgument_inLeftOperand, constinArgument_inRightOperand, var_result_12598, inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 318)) ;
    }
  }
  outArgument_outResultValue = GALGAS_objectIR::class_func_literalInteger (constinArgument_inResultType, var_result_12598  COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 320)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@llvmInfixOperatorAST locationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GALGAS_location cPtr_llvmInfixOperatorAST::getter_locationForErrorSignaling (Compiler */* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_location result_outLocation ; // Returned variable
  const GALGAS_llvmInfixOperatorAST temp_0 = this ;
  result_outLocation = temp_0.readProperty_mInfixOperatorLocation () ;
//---
  return result_outLocation ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'appendInfixOperatorDeclaration????&'
//
//--------------------------------------------------------------------------------------------------

void routine_appendInfixOperatorDeclaration_3F__3F__3F__3F__26_ (const GALGAS_omnibusInfixOperator constinArgument_inInfixOperator,
                                                                 const GALGAS_string constinArgument_inLLVMOperation,
                                                                 const GALGAS_string constinArgument_inTypeName,
                                                                 const GALGAS_string constinArgument_inResultOmnibusTypeName,
                                                                 GALGAS_semanticTypePrecedenceGraph & ioArgument_ioPrecedenceGraph,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_llvmGenerationInstructionList temp_0 = GALGAS_llvmGenerationInstructionList::init (inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 36)) ;
  GALGAS_llvmGenerationInstructionList var_llvmInstructionList_1737 = temp_0 ;
  GALGAS_llvmGenerationInstructionElementList temp_1 = GALGAS_llvmGenerationInstructionElementList::init (inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 37)) ;
  GALGAS_llvmGenerationInstructionElementList var_instructionElements_1807 = temp_1 ;
  var_instructionElements_1807.addAssign_operation (GALGAS_llvmGenerationInstructionElement::class_func_symbol (GALGAS_string ("result").getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 38))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 38))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 38)) ;
  var_instructionElements_1807.addAssign_operation (GALGAS_llvmGenerationInstructionElement::class_func_string (GALGAS_string (" = ").add_operation (constinArgument_inLLVMOperation, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 39)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 39))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 39))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 39)) ;
  var_instructionElements_1807.addAssign_operation (GALGAS_llvmGenerationInstructionElement::class_func_type (GALGAS_string ("LEFT").getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 40))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 40))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 40)) ;
  var_instructionElements_1807.addAssign_operation (GALGAS_llvmGenerationInstructionElement::class_func_string (GALGAS_string (" ")  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 41))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 41)) ;
  var_instructionElements_1807.addAssign_operation (GALGAS_llvmGenerationInstructionElement::class_func_symbol (GALGAS_string ("LEFT").getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 42))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 42))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 42)) ;
  var_instructionElements_1807.addAssign_operation (GALGAS_llvmGenerationInstructionElement::class_func_string (GALGAS_string (", ")  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 43))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 43)) ;
  var_instructionElements_1807.addAssign_operation (GALGAS_llvmGenerationInstructionElement::class_func_symbol (GALGAS_string ("RIGHT").getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 44))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 44))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 44)) ;
  var_llvmInstructionList_1737.addAssign_operation (GALGAS_llvmGenerationInstruction::init_21_ (var_instructionElements_1807, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 45)) ;
  GALGAS_genericFormalParameterList temp_2 = GALGAS_genericFormalParameterList::init (inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 51)) ;
  GALGAS_genericFormalParameterList temp_3 = GALGAS_genericFormalParameterList::init (inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 54)) ;
  GALGAS_genericFormalParameterList temp_4 = GALGAS_genericFormalParameterList::init (inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 56)) ;
  GALGAS_abstractDeclarationAST var_declaration_2353 = GALGAS_llvmInfixOperatorAST::init_21__21__21__21__21__21__21__21__21__21__21_ (constinArgument_inInfixOperator, GALGAS_location::class_func_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 48)), GALGAS_string ("LEFT").getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 49)), constinArgument_inTypeName.getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 50)), temp_2, GALGAS_string ("RIGHT").getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 52)), constinArgument_inTypeName.getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 53)), temp_3, constinArgument_inResultOmnibusTypeName.getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 55)), temp_4, var_llvmInstructionList_1737, inCompiler COMMA_HERE) ;
  callExtensionMethod_enterInPrecedenceGraph ((cPtr_abstractDeclarationAST *) var_declaration_2353.ptr (), ioArgument_ioPrecedenceGraph, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 59)) ;
  GALGAS_llvmGenerationInstructionList temp_5 = GALGAS_llvmGenerationInstructionList::init (inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 61)) ;
  var_llvmInstructionList_1737 = temp_5 ;
  GALGAS_llvmGenerationInstructionElementList temp_6 = GALGAS_llvmGenerationInstructionElementList::init (inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 62)) ;
  var_instructionElements_1807 = temp_6 ;
  var_instructionElements_1807.addAssign_operation (GALGAS_llvmGenerationInstructionElement::class_func_symbol (GALGAS_string ("result").getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 63))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 63))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 63)) ;
  var_instructionElements_1807.addAssign_operation (GALGAS_llvmGenerationInstructionElement::class_func_string (GALGAS_string (" = ").add_operation (constinArgument_inLLVMOperation, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 64)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 64))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 64))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 64)) ;
  var_instructionElements_1807.addAssign_operation (GALGAS_llvmGenerationInstructionElement::class_func_type (GALGAS_string ("LEFT").getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 65))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 65))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 65)) ;
  var_instructionElements_1807.addAssign_operation (GALGAS_llvmGenerationInstructionElement::class_func_string (GALGAS_string (" ")  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 66))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 66)) ;
  var_instructionElements_1807.addAssign_operation (GALGAS_llvmGenerationInstructionElement::class_func_symbol (GALGAS_string ("LEFT").getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 67))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 67))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 67)) ;
  var_instructionElements_1807.addAssign_operation (GALGAS_llvmGenerationInstructionElement::class_func_string (GALGAS_string (", ")  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 68))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 68)) ;
  var_instructionElements_1807.addAssign_operation (GALGAS_llvmGenerationInstructionElement::class_func_symbol (GALGAS_string ("RIGHT").getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 69))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 69))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 69)) ;
  var_llvmInstructionList_1737.addAssign_operation (GALGAS_llvmGenerationInstruction::init_21_ (var_instructionElements_1807, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 70)) ;
  GALGAS_genericFormalParameterList temp_7 = GALGAS_genericFormalParameterList::init (inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 76)) ;
  GALGAS_genericFormalParameterList temp_8 = GALGAS_genericFormalParameterList::init (inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 79)) ;
  GALGAS_genericFormalParameterList temp_9 = GALGAS_genericFormalParameterList::init (inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 81)) ;
  var_declaration_2353 = GALGAS_llvmInfixOperatorAST::init_21__21__21__21__21__21__21__21__21__21__21_ (constinArgument_inInfixOperator, GALGAS_location::class_func_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 73)), GALGAS_string ("LEFT").getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 74)), constinArgument_inTypeName.getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 75)), temp_7, GALGAS_string ("RIGHT").getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 77)), function_ctIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 78)).getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 78)), temp_8, constinArgument_inResultOmnibusTypeName.getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 80)), temp_9, var_llvmInstructionList_1737, inCompiler COMMA_HERE) ;
  callExtensionMethod_enterInPrecedenceGraph ((cPtr_abstractDeclarationAST *) var_declaration_2353.ptr (), ioArgument_ioPrecedenceGraph, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 84)) ;
  GALGAS_llvmGenerationInstructionList temp_10 = GALGAS_llvmGenerationInstructionList::init (inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 86)) ;
  var_llvmInstructionList_1737 = temp_10 ;
  GALGAS_llvmGenerationInstructionElementList temp_11 = GALGAS_llvmGenerationInstructionElementList::init (inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 87)) ;
  var_instructionElements_1807 = temp_11 ;
  var_instructionElements_1807.addAssign_operation (GALGAS_llvmGenerationInstructionElement::class_func_symbol (GALGAS_string ("result").getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 88))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 88))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 88)) ;
  var_instructionElements_1807.addAssign_operation (GALGAS_llvmGenerationInstructionElement::class_func_string (GALGAS_string (" = ").add_operation (constinArgument_inLLVMOperation, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 89)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 89))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 89))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 89)) ;
  var_instructionElements_1807.addAssign_operation (GALGAS_llvmGenerationInstructionElement::class_func_type (GALGAS_string ("RIGHT").getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 90))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 90))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 90)) ;
  var_instructionElements_1807.addAssign_operation (GALGAS_llvmGenerationInstructionElement::class_func_string (GALGAS_string (" ")  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 91))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 91)) ;
  var_instructionElements_1807.addAssign_operation (GALGAS_llvmGenerationInstructionElement::class_func_symbol (GALGAS_string ("LEFT").getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 92))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 92))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 92)) ;
  var_instructionElements_1807.addAssign_operation (GALGAS_llvmGenerationInstructionElement::class_func_string (GALGAS_string (", ")  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 93))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 93)) ;
  var_instructionElements_1807.addAssign_operation (GALGAS_llvmGenerationInstructionElement::class_func_symbol (GALGAS_string ("RIGHT").getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 94))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 94))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 94)) ;
  var_llvmInstructionList_1737.addAssign_operation (GALGAS_llvmGenerationInstruction::init_21_ (var_instructionElements_1807, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 95)) ;
  GALGAS_genericFormalParameterList temp_12 = GALGAS_genericFormalParameterList::init (inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 101)) ;
  GALGAS_genericFormalParameterList temp_13 = GALGAS_genericFormalParameterList::init (inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 104)) ;
  GALGAS_genericFormalParameterList temp_14 = GALGAS_genericFormalParameterList::init (inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 106)) ;
  var_declaration_2353 = GALGAS_llvmInfixOperatorAST::init_21__21__21__21__21__21__21__21__21__21__21_ (constinArgument_inInfixOperator, GALGAS_location::class_func_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 98)), GALGAS_string ("LEFT").getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 99)), function_ctIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 100)).getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 100)), temp_12, GALGAS_string ("RIGHT").getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 102)), constinArgument_inTypeName.getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 103)), temp_13, constinArgument_inResultOmnibusTypeName.getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 105)), temp_14, var_llvmInstructionList_1737, inCompiler COMMA_HERE) ;
  callExtensionMethod_enterInPrecedenceGraph ((cPtr_abstractDeclarationAST *) var_declaration_2353.ptr (), ioArgument_ioPrecedenceGraph, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 109)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@llvmInfixOperatorAST enterInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_llvmInfixOperatorAST::method_enterInPrecedenceGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_llvmInfixOperatorAST temp_0 = this ;
  const GALGAS_llvmInfixOperatorAST temp_1 = this ;
  const GALGAS_llvmInfixOperatorAST temp_2 = this ;
  const GALGAS_llvmInfixOperatorAST temp_3 = this ;
  GALGAS_lstring var_nodeName_6558 = GALGAS_lstring::init_21__21_ (extensionGetter_string (temp_0.readProperty_mInfixOperator (), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 161)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 161)).add_operation (temp_1.readProperty_mLeftTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 161)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 161)).add_operation (temp_2.readProperty_mRightTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 161)), temp_3.readProperty_mInfixOperatorLocation (), inCompiler COMMA_HERE) ;
  {
  const GALGAS_llvmInfixOperatorAST temp_4 = this ;
  ioArgument_ioGraph.setter_addNode (var_nodeName_6558, temp_4, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 162)) ;
  }
  {
  const GALGAS_llvmInfixOperatorAST temp_5 = this ;
  ioArgument_ioGraph.setter_addEdge (var_nodeName_6558, temp_5.readProperty_mLeftTypeName () COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 163)) ;
  }
  {
  const GALGAS_llvmInfixOperatorAST temp_6 = this ;
  ioArgument_ioGraph.setter_addEdge (var_nodeName_6558, temp_6.readProperty_mRightTypeName () COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 164)) ;
  }
  {
  const GALGAS_llvmInfixOperatorAST temp_7 = this ;
  ioArgument_ioGraph.setter_addEdge (var_nodeName_6558, temp_7.readProperty_mResultTypeName () COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 165)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@llvmInfixOperatorAST keyRepresentationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_llvmInfixOperatorAST::getter_keyRepresentationForErrorSignaling (Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outRepresentation ; // Returned variable
  const GALGAS_llvmInfixOperatorAST temp_0 = this ;
  const GALGAS_llvmInfixOperatorAST temp_1 = this ;
  const GALGAS_llvmInfixOperatorAST temp_2 = this ;
  result_outRepresentation = temp_0.readProperty_mLeftTypeName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 171)).add_operation (extensionGetter_string (temp_1.readProperty_mInfixOperator (), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 171)), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 171)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 171)).add_operation (temp_2.readProperty_mRightTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 171)) ;
//---
  return result_outRepresentation ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@llvmInfixOperatorAST enterInContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_llvmInfixOperatorAST::method_enterInContext (GALGAS_semanticContext & ioArgument_ioContext,
                                                       GALGAS_declarationDecorationList & /* ioArgument_ioDecoratedDeclarationList */,
                                                       GALGAS_decoratedRegularRoutineList & /* ioArgument_ioDecoratedRoutineList */,
                                                       GALGAS_routineListIR & ioArgument_ioRoutineListIR,
                                                       GALGAS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                       GALGAS_staticEntityMap & /* ioArgument_ioStaticEntityMap */,
                                                       GALGAS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                       GALGAS_userLLVMTypeDefinitionListIR & /* ioArgument_ioUserLLVMTypeDefinitionListIR */,
                                                       Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapEntry var_leftTypeProxy_8254 ;
  {
  const GALGAS_llvmInfixOperatorAST temp_0 = this ;
  extensionSetter_makeEntry (ioArgument_ioContext.mProperty_mTypeMap, temp_0.readProperty_mLeftTypeName (), var_leftTypeProxy_8254, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 189)) ;
  }
  GALGAS_omnibusType var_leftType_8275 = extensionGetter_type (var_leftTypeProxy_8254, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 190)) ;
  GALGAS_unifiedTypeMapEntry var_rightTypeProxy_8367 ;
  {
  const GALGAS_llvmInfixOperatorAST temp_1 = this ;
  extensionSetter_makeEntry (ioArgument_ioContext.mProperty_mTypeMap, temp_1.readProperty_mRightTypeName (), var_rightTypeProxy_8367, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 191)) ;
  }
  GALGAS_omnibusType var_rightType_8389 = extensionGetter_type (var_rightTypeProxy_8367, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 192)) ;
  GALGAS_unifiedTypeMapEntry var_resultTypeProxy_8484 ;
  {
  const GALGAS_llvmInfixOperatorAST temp_2 = this ;
  extensionSetter_makeEntry (ioArgument_ioContext.mProperty_mTypeMap, temp_2.readProperty_mResultTypeName (), var_resultTypeProxy_8484, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 193)) ;
  }
  GALGAS_omnibusType var_resultType_8507 = extensionGetter_type (var_resultTypeProxy_8484, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 194)) ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = callExtensionGetter_isCompileTimeType ((const cPtr_omnibusType *) var_leftType_8275.ptr (), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 195)).operator_and (callExtensionGetter_isCompileTimeType ((const cPtr_omnibusType *) var_rightType_8389.ptr (), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 195)) COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 195)).boolEnum () ;
    if (kBoolTrue == test_3) {
      const GALGAS_llvmInfixOperatorAST temp_4 = this ;
      TC_Array <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.readProperty_mInfixOperatorLocation (), GALGAS_string ("one of the two argument types should not be a compile time type"), fixItArray5  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 196)) ;
    }
  }
  const GALGAS_llvmInfixOperatorAST temp_6 = this ;
  callExtensionMethod_checkIsNotCompileTimeType ((cPtr_omnibusType *) var_resultType_8507.ptr (), temp_6.readProperty_mResultTypeName ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 198)) ;
  const GALGAS_llvmInfixOperatorAST temp_7 = this ;
  const GALGAS_llvmInfixOperatorAST temp_8 = this ;
  GALGAS_lstring var_key_8839 = function_infixOperatorMapKey (var_leftType_8275, temp_7.readProperty_mInfixOperator (), temp_8.readProperty_mInfixOperatorLocation (), var_rightType_8389, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 200)) ;
  enumGalgasBool test_9 = kBoolTrue ;
  if (kBoolTrue == test_9) {
    test_9 = callExtensionGetter_isCompileTimeType ((const cPtr_omnibusType *) var_leftType_8275.ptr (), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 202)).operator_not (SOURCE_FILE ("infix-operator-llvm.galgas", 202)).operator_and (callExtensionGetter_isCompileTimeType ((const cPtr_omnibusType *) var_rightType_8389.ptr (), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 202)).operator_not (SOURCE_FILE ("infix-operator-llvm.galgas", 202)) COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 202)).boolEnum () ;
    if (kBoolTrue == test_9) {
      const GALGAS_llvmInfixOperatorAST temp_10 = this ;
      const GALGAS_llvmInfixOperatorAST temp_11 = this ;
      const GALGAS_llvmInfixOperatorAST temp_12 = this ;
      const GALGAS_llvmInfixOperatorAST temp_13 = this ;
      GALGAS_llvmInfixOperatorUsage var_definition_9048 = GALGAS_llvmInfixOperatorUsage::init_21__21__21__21_ (function_infixOperatorFunctionName (var_leftType_8275, temp_10.readProperty_mInfixOperator (), var_rightType_8389, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 204)), temp_11.readProperty_mLeftOperandName (), temp_12.readProperty_mRightOperandName (), temp_13.readProperty_mInstructionList (), inCompiler COMMA_HERE) ;
      {
      ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_8839, var_resultType_8507, var_definition_9048, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 209)) ;
      }
      GALGAS_assignmentGenerationVarMap temp_14 = GALGAS_assignmentGenerationVarMap::init (inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 210)) ;
      GALGAS_assignmentGenerationVarMap var_varMap_9374 = temp_14 ;
      {
      const GALGAS_llvmInfixOperatorAST temp_15 = this ;
      const GALGAS_llvmInfixOperatorAST temp_16 = this ;
      var_varMap_9374.setter_insertKey (temp_15.readProperty_mLeftOperandName (), GALGAS_string ("%").add_operation (temp_16.readProperty_mLeftOperandName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 211)), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 211)) ;
      }
      {
      const GALGAS_llvmInfixOperatorAST temp_17 = this ;
      const GALGAS_llvmInfixOperatorAST temp_18 = this ;
      var_varMap_9374.setter_insertKey (temp_17.readProperty_mRightOperandName (), GALGAS_string ("%").add_operation (temp_18.readProperty_mRightOperandName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 212)), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 212)) ;
      }
      GALGAS_assignmentGenerationVarMap temp_19 = GALGAS_assignmentGenerationVarMap::init (inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 213)) ;
      GALGAS_assignmentGenerationVarMap var_typeMap_9579 = temp_19 ;
      enumGalgasBool test_20 = kBoolTrue ;
      if (kBoolTrue == test_20) {
        test_20 = callExtensionGetter_isCompileTimeType ((const cPtr_omnibusType *) var_leftType_8275.ptr (), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 214)).operator_not (SOURCE_FILE ("infix-operator-llvm.galgas", 214)).boolEnum () ;
        if (kBoolTrue == test_20) {
          {
          const GALGAS_llvmInfixOperatorAST temp_21 = this ;
          var_typeMap_9579.setter_insertKey (temp_21.readProperty_mLeftOperandName (), callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) var_leftType_8275.ptr (), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 215)), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 215)) ;
          }
        }
      }
      enumGalgasBool test_22 = kBoolTrue ;
      if (kBoolTrue == test_22) {
        test_22 = callExtensionGetter_isCompileTimeType ((const cPtr_omnibusType *) var_rightType_8389.ptr (), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 217)).operator_not (SOURCE_FILE ("infix-operator-llvm.galgas", 217)).boolEnum () ;
        if (kBoolTrue == test_22) {
          {
          const GALGAS_llvmInfixOperatorAST temp_23 = this ;
          var_typeMap_9579.setter_insertKey (temp_23.readProperty_mRightOperandName (), callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) var_rightType_8389.ptr (), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 218)), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 218)) ;
          }
        }
      }
      {
      var_typeMap_9579.setter_insertKey (GALGAS_string ("result").getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 220)), callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) var_resultType_8507.ptr (), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 220)), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 220)) ;
      }
      GALGAS_llvmGenerationInstructionList temp_24 = GALGAS_llvmGenerationInstructionList::init (inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 221)) ;
      GALGAS_llvmGenerationInstructionList var_instructionList_9966 = temp_24 ;
      var_instructionList_9966.addAssign_operation (GALGAS_llvmVarInstruction::init_21_ (GALGAS_string ("result").getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 222)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 222)) ;
      const GALGAS_llvmInfixOperatorAST temp_25 = this ;
      var_instructionList_9966.plusAssign_operation(temp_25.readProperty_mInstructionList (), inCompiler  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 223)) ;
      {
      extensionSetter_appendReturn (var_instructionList_9966, GALGAS_string ("result").getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 224)), GALGAS_string ("result").getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 224)), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 224)) ;
      }
      GALGAS_stringlist temp_26 = GALGAS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 225)) ;
      GALGAS_stringlist var_generatedInstructions_10201 = temp_26 ;
      GALGAS_allocaList temp_27 = GALGAS_allocaList::init (inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 226)) ;
      GALGAS_allocaList var_allocaList_10249 = temp_27 ;
      GALGAS_uint var_temporaryIndex_10280 = GALGAS_uint (uint32_t (0U)) ;
      extensionMethod_generateIRCode (var_instructionList_9966, var_varMap_9374, var_typeMap_9579, var_generatedInstructions_10201, var_temporaryIndex_10280, var_allocaList_10249, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 228)) ;
      const GALGAS_llvmInfixOperatorAST temp_28 = this ;
      const GALGAS_llvmInfixOperatorAST temp_29 = this ;
      const GALGAS_llvmInfixOperatorAST temp_30 = this ;
      const GALGAS_llvmInfixOperatorAST temp_31 = this ;
      GALGAS_infixOperatorRoutineIR var_routine_10415 = GALGAS_infixOperatorRoutineIR::init_21__21_isRequired_21_warnsIfUnused_21__21__21__21__21__21__21_ (GALGAS_lstring::init_21__21_ (function_infixOperatorFunctionName (var_leftType_8275, temp_28.readProperty_mInfixOperator (), var_rightType_8389, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 230)), temp_29.readProperty_mInfixOperatorLocation (), inCompiler COMMA_HERE), GALGAS_bool (true), GALGAS_bool (false), var_leftType_8275, temp_30.readProperty_mLeftOperandName ().readProperty_string (), var_rightType_8389, temp_31.readProperty_mRightOperandName ().readProperty_string (), var_resultType_8507, var_generatedInstructions_10201, var_allocaList_10249, inCompiler COMMA_HERE) ;
      ioArgument_ioRoutineListIR.addAssign_operation (var_routine_10415  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 241)) ;
    }
  }
  if (kBoolFalse == test_9) {
    const GALGAS_llvmInfixOperatorAST temp_32 = this ;
    const GALGAS_llvmInfixOperatorAST temp_33 = this ;
    const GALGAS_llvmInfixOperatorAST temp_34 = this ;
    GALGAS_llvmInlineInfixOperatorUsage var_definition_10885 = GALGAS_llvmInlineInfixOperatorUsage::init_21__21__21_ (temp_32.readProperty_mLeftOperandName (), temp_33.readProperty_mRightOperandName (), temp_34.readProperty_mInstructionList (), inCompiler COMMA_HERE) ;
    {
    ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_8839, var_resultType_8507, var_definition_10885, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 248)) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@llvmInfixOperatorUsage generateCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_llvmInfixOperatorUsage::method_generateCode (const GALGAS_objectIR constinArgument_inLeftOperand,
                                                       const GALGAS_location constinArgument_inOperatorLocation,
                                                       const GALGAS_objectIR constinArgument_inRightOperand,
                                                       const GALGAS_omnibusType constinArgument_inResultType,
                                                       GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                       GALGAS_allocaList & /* ioArgument_ioAllocaList */,
                                                       GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                       GALGAS_objectIR & outArgument_outResultValue,
                                                       Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_objectIR var_leftOperand_12137 = constinArgument_inLeftOperand ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_leftOperand_12137, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 277)) ;
  }
  GALGAS_objectIR var_rightOperand_12272 = constinArgument_inRightOperand ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_rightOperand_12272, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 282)) ;
  }
  {
  routine_getNewTempValue_3F__26__21_ (constinArgument_inResultType, ioArgument_ioTemporaries, outArgument_outResultValue, inCompiler  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 287)) ;
  }
  GALGAS_procCallEffectiveParameterListIR temp_0 = GALGAS_procCallEffectiveParameterListIR::init (inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 288)) ;
  GALGAS_procCallEffectiveParameterListIR var_argumentList_12544 = temp_0 ;
  var_argumentList_12544.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::class_func_output (SOURCE_FILE ("infix-operator-llvm.galgas", 289)), var_leftOperand_12137  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 289)) ;
  var_argumentList_12544.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::class_func_output (SOURCE_FILE ("infix-operator-llvm.galgas", 290)), var_rightOperand_12272  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 290)) ;
  const GALGAS_llvmInfixOperatorUsage temp_1 = this ;
  const GALGAS_llvmInfixOperatorUsage temp_2 = this ;
  ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_standaloneRoutineCallIR::init_21__21__21__21_ (outArgument_outResultValue, GALGAS_lstring::init_21__21_ (temp_1.readProperty_mInfixMangledFunctionName (), constinArgument_inOperatorLocation, inCompiler COMMA_HERE), temp_2.readProperty_mInfixMangledFunctionName (), var_argumentList_12544, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 291)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@llvmInlineInfixOperatorUsage generateCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_llvmInlineInfixOperatorUsage::method_generateCode (const GALGAS_objectIR constinArgument_inLeftOperand,
                                                             const GALGAS_location /* constinArgument_inOperatorLocation */,
                                                             const GALGAS_objectIR constinArgument_inRightOperand,
                                                             const GALGAS_omnibusType constinArgument_inResultType,
                                                             GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                             GALGAS_allocaList & ioArgument_ioAllocaList,
                                                             GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                             GALGAS_objectIR & outArgument_outResultValue,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_objectIR var_leftOperand_13699 = constinArgument_inLeftOperand ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_leftOperand_13699, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 321)) ;
  }
  GALGAS_objectIR var_rightOperand_13834 = constinArgument_inRightOperand ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_rightOperand_13834, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 326)) ;
  }
  {
  routine_getNewTempValue_3F__26__21_ (constinArgument_inResultType, ioArgument_ioTemporaries, outArgument_outResultValue, inCompiler  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 331)) ;
  }
  GALGAS_assignmentGenerationVarMap temp_0 = GALGAS_assignmentGenerationVarMap::init (inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 332)) ;
  GALGAS_assignmentGenerationVarMap var_varMap_14100 = temp_0 ;
  {
  const GALGAS_llvmInlineInfixOperatorUsage temp_1 = this ;
  var_varMap_14100.setter_insertKey (temp_1.readProperty_mLeftOperandName (), extensionGetter_llvmName (var_leftOperand_13699, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 333)), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 333)) ;
  }
  {
  const GALGAS_llvmInlineInfixOperatorUsage temp_2 = this ;
  var_varMap_14100.setter_insertKey (temp_2.readProperty_mRightOperandName (), extensionGetter_llvmName (var_rightOperand_13834, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 334)), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 334)) ;
  }
  {
  var_varMap_14100.setter_insertKey (GALGAS_string ("result").getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 335)), extensionGetter_llvmName (outArgument_outResultValue, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 335)), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 335)) ;
  }
  GALGAS_assignmentGenerationVarMap temp_3 = GALGAS_assignmentGenerationVarMap::init (inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 336)) ;
  GALGAS_assignmentGenerationVarMap var_typeMap_14359 = temp_3 ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = callExtensionGetter_isCompileTimeType ((const cPtr_omnibusType *) extensionGetter_type (var_leftOperand_13699, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 337)).ptr (), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 337)).operator_not (SOURCE_FILE ("infix-operator-llvm.galgas", 337)).boolEnum () ;
    if (kBoolTrue == test_4) {
      {
      const GALGAS_llvmInlineInfixOperatorUsage temp_5 = this ;
      var_typeMap_14359.setter_insertKey (temp_5.readProperty_mLeftOperandName (), callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (var_leftOperand_13699, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 338)).ptr (), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 338)), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 338)) ;
      }
    }
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    test_6 = callExtensionGetter_isCompileTimeType ((const cPtr_omnibusType *) extensionGetter_type (var_rightOperand_13834, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 340)).ptr (), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 340)).operator_not (SOURCE_FILE ("infix-operator-llvm.galgas", 340)).boolEnum () ;
    if (kBoolTrue == test_6) {
      {
      const GALGAS_llvmInlineInfixOperatorUsage temp_7 = this ;
      var_typeMap_14359.setter_insertKey (temp_7.readProperty_mRightOperandName (), callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (var_rightOperand_13834, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 341)).ptr (), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 341)), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 341)) ;
      }
    }
  }
  GALGAS_stringlist temp_8 = GALGAS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 343)) ;
  GALGAS_stringlist var_generatedInstructions_14680 = temp_8 ;
  const GALGAS_llvmInlineInfixOperatorUsage temp_9 = this ;
  extensionMethod_generateIRCode (temp_9.readProperty_mInstructionList (), var_varMap_14100, var_typeMap_14359, var_generatedInstructions_14680, ioArgument_ioTemporaries.mProperty_mTemporaryIndex, ioArgument_ioAllocaList, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 344)) ;
  cEnumerator_stringlist enumerator_14844 (var_generatedInstructions_14680, EnumerationOrder::up) ;
  while (enumerator_14844.hasCurrentObject ()) {
    {
    GALGAS_stringset temp_10 = GALGAS_stringset::init (inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 346)) ;
    extensionSetter_appendInstructionAsFreeString (ioArgument_ioInstructionGenerationList, enumerator_14844.current_mValue (HERE), temp_10, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 346)) ;
    }
    enumerator_14844.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@infixOperatorRoutineIR llvmCodeGeneration'
//
//--------------------------------------------------------------------------------------------------

void cPtr_infixOperatorRoutineIR::method_llvmCodeGeneration (GALGAS_string & ioArgument_ioLLVMcode,
                                                             const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                             GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_infixOperatorRoutineIR temp_0 = this ;
  const GALGAS_infixOperatorRoutineIR temp_1 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal ").add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_0.readProperty_mResultType ().ptr (), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 371)), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 371)).add_operation (GALGAS_string (" @"), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 371)).add_operation (temp_1.readProperty_mRoutineMangledName ().readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("infix-operator-llvm.galgas", 371)), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 371)), inCompiler  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 371)) ;
  const GALGAS_infixOperatorRoutineIR temp_2 = this ;
  const GALGAS_infixOperatorRoutineIR temp_3 = this ;
  const GALGAS_infixOperatorRoutineIR temp_4 = this ;
  const GALGAS_infixOperatorRoutineIR temp_5 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" (").add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_2.readProperty_mTargetType ().ptr (), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 372)), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 372)).add_operation (GALGAS_string (" %"), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 372)).add_operation (temp_3.readProperty_mTargetVarName (), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 372)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 372)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_4.readProperty_mSourceType ().ptr (), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 373)), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 373)).add_operation (GALGAS_string (" %"), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 373)).add_operation (temp_5.readProperty_mSourceVarName (), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 373)).add_operation (GALGAS_string (") nounwind {\n"), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 373)), inCompiler  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 372)) ;
  const GALGAS_infixOperatorRoutineIR temp_6 = this ;
  extensionMethod_generateAllocaList (temp_6.readProperty_mAllocaList (), ioArgument_ioLLVMcode, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 374)) ;
  const GALGAS_infixOperatorRoutineIR temp_7 = this ;
  cEnumerator_stringlist enumerator_16234 (temp_7.readProperty_mGeneratedInstructions (), EnumerationOrder::up) ;
  while (enumerator_16234.hasCurrentObject ()) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (enumerator_16234.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 376)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 376)), inCompiler  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 376)) ;
    enumerator_16234.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n\n"), inCompiler  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 378)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@inlineInfixOperatorUsage generateCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_inlineInfixOperatorUsage::method_generateCode (const GALGAS_objectIR constinArgument_inLeftOperand,
                                                         const GALGAS_location /* constinArgument_inOperatorLocation */,
                                                         const GALGAS_objectIR constinArgument_inRightOperand,
                                                         const GALGAS_omnibusType constinArgument_inResultType,
                                                         GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                         GALGAS_allocaList & /* ioArgument_ioAllocaList */,
                                                         GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                         GALGAS_objectIR & outArgument_outResultValue,
                                                         Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_objectIR var_leftOperand_2887 = constinArgument_inLeftOperand ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_leftOperand_2887, inCompiler COMMA_SOURCE_FILE ("infix-operator-map.galgas", 76)) ;
  }
  GALGAS_objectIR var_rightOperand_3009 = constinArgument_inRightOperand ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_rightOperand_3009, inCompiler COMMA_SOURCE_FILE ("infix-operator-map.galgas", 78)) ;
  }
  {
  routine_getNewTempValue_3F__26__21_ (constinArgument_inResultType, ioArgument_ioTemporaries, outArgument_outResultValue, inCompiler  COMMA_SOURCE_FILE ("infix-operator-map.galgas", 79)) ;
  }
  const GALGAS_inlineInfixOperatorUsage temp_0 = this ;
  GALGAS_string var_s_3200 = extensionGetter_llvmName (outArgument_outResultValue, inCompiler COMMA_SOURCE_FILE ("infix-operator-map.galgas", 80)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("infix-operator-map.galgas", 80)).add_operation (temp_0.readProperty_mLLVMOperation (), inCompiler COMMA_SOURCE_FILE ("infix-operator-map.galgas", 80)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("infix-operator-map.galgas", 80)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (var_leftOperand_2887, inCompiler COMMA_SOURCE_FILE ("infix-operator-map.galgas", 80)).ptr (), inCompiler COMMA_SOURCE_FILE ("infix-operator-map.galgas", 80)), inCompiler COMMA_SOURCE_FILE ("infix-operator-map.galgas", 80)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("infix-operator-map.galgas", 80)).add_operation (extensionGetter_llvmName (var_leftOperand_2887, inCompiler COMMA_SOURCE_FILE ("infix-operator-map.galgas", 81)), inCompiler COMMA_SOURCE_FILE ("infix-operator-map.galgas", 81)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("infix-operator-map.galgas", 81)).add_operation (extensionGetter_llvmName (var_rightOperand_3009, inCompiler COMMA_SOURCE_FILE ("infix-operator-map.galgas", 81)), inCompiler COMMA_SOURCE_FILE ("infix-operator-map.galgas", 81)) ;
  {
  GALGAS_stringset temp_1 = GALGAS_stringset::init (inCompiler COMMA_SOURCE_FILE ("infix-operator-map.galgas", 82)) ;
  extensionSetter_appendInstructionAsFreeString (ioArgument_ioInstructionGenerationList, var_s_3200, temp_1, inCompiler COMMA_SOURCE_FILE ("infix-operator-map.galgas", 82)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@omnibusInfixOperatorExpressionAST addDependenceEdgeForStaticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_omnibusInfixOperatorExpressionAST::method_addDependenceEdgeForStaticExpression (const GALGAS_lstring constinArgument_inConstantName,
                                                                                          GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_omnibusInfixOperatorExpressionAST temp_0 = this ;
  callExtensionMethod_addDependenceEdgeForStaticExpression ((cPtr_expressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 68)) ;
  const GALGAS_omnibusInfixOperatorExpressionAST temp_1 = this ;
  callExtensionMethod_addDependenceEdgeForStaticExpression ((cPtr_expressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 69)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@omnibusInfixOperatorExpressionAST noteExpressionTypesInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_omnibusInfixOperatorExpressionAST::method_noteExpressionTypesInPrecedenceGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_omnibusInfixOperatorExpressionAST temp_0 = this ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((cPtr_expressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 77)) ;
  const GALGAS_omnibusInfixOperatorExpressionAST temp_1 = this ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((cPtr_expressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 78)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@omnibusInfixOperatorExpressionAST analyzeExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_omnibusInfixOperatorExpressionAST::method_analyzeExpression (const GALGAS_omnibusType constinArgument_inSelfType,
                                                                       const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                                                       const GALGAS_omnibusType constinArgument_inOptionalTargetType,
                                                                       const GALGAS_semanticContext constinArgument_inContext,
                                                                       const GALGAS_mode constinArgument_inMode,
                                                                       GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                       GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                       GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                       GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                       GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                       GALGAS_objectIR & outArgument_outResult,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_objectIR var_leftOperand_4640 ;
  const GALGAS_omnibusInfixOperatorExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeExpression ((cPtr_expressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_leftOperand_4640, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 99)) ;
  GALGAS_objectIR var_rightOperand_5100 ;
  const GALGAS_omnibusInfixOperatorExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeExpression ((cPtr_expressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, extensionGetter_type (var_leftOperand_4640, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 116)), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_rightOperand_5100, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 113)) ;
  const GALGAS_omnibusInfixOperatorExpressionAST temp_2 = this ;
  const GALGAS_omnibusInfixOperatorExpressionAST temp_3 = this ;
  extensionMethod_generateInfixOperatorCode (constinArgument_inContext.readProperty_mInfixOperatorMap (), var_leftOperand_4640, temp_2.readProperty_mInfixOperator (), temp_3.readProperty_mOperatorLocation (), var_rightOperand_5100, ioArgument_ioTemporaries, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, outArgument_outResult, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 127)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@compiletimePrefixOperatorAST locationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GALGAS_location cPtr_compiletimePrefixOperatorAST::getter_locationForErrorSignaling (Compiler */* inCompiler */
                                                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_location result_outLocation ; // Returned variable
  const GALGAS_compiletimePrefixOperatorAST temp_0 = this ;
  result_outLocation = temp_0.readProperty_mPrefixOperatorLocation () ;
//---
  return result_outLocation ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@compiletimePrefixOperatorAST enterInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_compiletimePrefixOperatorAST::method_enterInPrecedenceGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_compiletimePrefixOperatorAST temp_0 = this ;
  const GALGAS_compiletimePrefixOperatorAST temp_1 = this ;
  const GALGAS_compiletimePrefixOperatorAST temp_2 = this ;
  GALGAS_lstring var_nodeName_3773 = GALGAS_lstring::init_21__21_ (extensionGetter_string (temp_0.readProperty_mPrefixOperator (), inCompiler COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 100)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 100)).add_operation (temp_1.readProperty_mReceiverTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 100)), temp_2.readProperty_mPrefixOperatorLocation (), inCompiler COMMA_HERE) ;
  {
  const GALGAS_compiletimePrefixOperatorAST temp_3 = this ;
  ioArgument_ioGraph.setter_addNode (var_nodeName_3773, temp_3, inCompiler COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 101)) ;
  }
  {
  const GALGAS_compiletimePrefixOperatorAST temp_4 = this ;
  ioArgument_ioGraph.setter_addEdge (var_nodeName_3773, temp_4.readProperty_mReceiverTypeName () COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 102)) ;
  }
  {
  const GALGAS_compiletimePrefixOperatorAST temp_5 = this ;
  ioArgument_ioGraph.setter_addEdge (var_nodeName_3773, temp_5.readProperty_mResultTypeName () COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 103)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (function_compileTimeDeclarationBarrier (inCompiler COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 104)), var_nodeName_3773 COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 104)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@compiletimePrefixOperatorAST keyRepresentationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_compiletimePrefixOperatorAST::getter_keyRepresentationForErrorSignaling (Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outRepresentation ; // Returned variable
  const GALGAS_compiletimePrefixOperatorAST temp_0 = this ;
  const GALGAS_compiletimePrefixOperatorAST temp_1 = this ;
  result_outRepresentation = extensionGetter_string (temp_0.readProperty_mPrefixOperator (), inCompiler COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 110)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 110)).add_operation (temp_1.readProperty_mReceiverTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 110)) ;
//---
  return result_outRepresentation ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@compiletimePrefixOperatorAST enterInContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_compiletimePrefixOperatorAST::method_enterInContext (GALGAS_semanticContext & ioArgument_ioContext,
                                                               GALGAS_declarationDecorationList & /* ioArgument_ioDecoratedDeclarationList */,
                                                               GALGAS_decoratedRegularRoutineList & /* ioArgument_ioDecoratedRoutineList */,
                                                               GALGAS_routineListIR & /* ioArgument_ioRoutineListIR */,
                                                               GALGAS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                               GALGAS_staticEntityMap & /* ioArgument_ioStaticEntityMap */,
                                                               GALGAS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                               GALGAS_userLLVMTypeDefinitionListIR & /* ioArgument_ioUserLLVMTypeDefinitionListIR */,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapEntry var_receiverTypeProxy_5476 ;
  {
  const GALGAS_compiletimePrefixOperatorAST temp_0 = this ;
  extensionSetter_makeEntry (ioArgument_ioContext.mProperty_mTypeMap, temp_0.readProperty_mReceiverTypeName (), var_receiverTypeProxy_5476, inCompiler COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 128)) ;
  }
  GALGAS_omnibusType var_receiverType_5501 = extensionGetter_type (var_receiverTypeProxy_5476, inCompiler COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 129)) ;
  const GALGAS_compiletimePrefixOperatorAST temp_1 = this ;
  callExtensionMethod_checkIsCompileTimeType ((cPtr_omnibusType *) var_receiverType_5501.ptr (), temp_1.readProperty_mReceiverTypeName ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 130)) ;
  GALGAS_unifiedTypeMapEntry var_resultTypeProxy_5675 ;
  {
  const GALGAS_compiletimePrefixOperatorAST temp_2 = this ;
  extensionSetter_makeEntry (ioArgument_ioContext.mProperty_mTypeMap, temp_2.readProperty_mResultTypeName (), var_resultTypeProxy_5675, inCompiler COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 131)) ;
  }
  GALGAS_omnibusType var_resultType_5698 = extensionGetter_type (var_resultTypeProxy_5675, inCompiler COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 132)) ;
  const GALGAS_compiletimePrefixOperatorAST temp_3 = this ;
  callExtensionMethod_checkIsCompileTimeType ((cPtr_omnibusType *) var_resultType_5698.ptr (), temp_3.readProperty_mResultTypeName ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 133)) ;
  GALGAS_ctCheckMap temp_4 = GALGAS_ctCheckMap::init (inCompiler COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 135)) ;
  GALGAS_ctCheckMap var_ctCheckMap_5859 = temp_4 ;
  {
  const GALGAS_compiletimePrefixOperatorAST temp_5 = this ;
  var_ctCheckMap_5859.setter_insertKey (temp_5.readProperty_mReceiverName (), inCompiler COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 136)) ;
  }
  const GALGAS_compiletimePrefixOperatorAST temp_6 = this ;
  callExtensionMethod_checkCompileTimeExpression ((cPtr_ctExpressionAST *) temp_6.readProperty_mExpression ().ptr (), var_ctCheckMap_5859, inCompiler COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 137)) ;
  const GALGAS_compiletimePrefixOperatorAST temp_7 = this ;
  const GALGAS_compiletimePrefixOperatorAST temp_8 = this ;
  GALGAS_lstring var_key_6024 = function_prefixOperatorMapKey (var_receiverType_5501, extensionGetter_prefixOperator (temp_7.readProperty_mPrefixOperator (), inCompiler COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 139)), temp_8.readProperty_mPrefixOperatorLocation (), inCompiler COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 139)) ;
  const GALGAS_compiletimePrefixOperatorAST temp_9 = this ;
  const GALGAS_compiletimePrefixOperatorAST temp_10 = this ;
  const GALGAS_compiletimePrefixOperatorAST temp_11 = this ;
  GALGAS_compileTimePrefixOperatorUsage var_definition_6125 = GALGAS_compileTimePrefixOperatorUsage::init_21__21__21_ (temp_9.readProperty_mPrefixOperatorLocation (), temp_10.readProperty_mReceiverName (), temp_11.readProperty_mExpression (), inCompiler COMMA_HERE) ;
  {
  ioArgument_ioContext.mProperty_mPrefixOperatorMap.setter_insertKey (var_key_6024, var_receiverType_5501, var_resultType_5698, var_definition_6125, inCompiler COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 145)) ;
  }
  enumGalgasBool test_12 = kBoolTrue ;
  if (kBoolTrue == test_12) {
    const GALGAS_compiletimePrefixOperatorAST temp_13 = this ;
    test_12 = GALGAS_bool (ComparisonKind::equal, temp_13.readProperty_mPrefixOperator ().objectCompare (GALGAS_compileTimePrefixOperatorEnumeration::class_func_minusOp (SOURCE_FILE ("prefix-operator-compile-time.galgas", 147)))).boolEnum () ;
    if (kBoolTrue == test_12) {
      const GALGAS_compiletimePrefixOperatorAST temp_14 = this ;
      GALGAS_lstring var_minusNoOvf_5F_key_6431 = function_prefixOperatorMapKey (var_receiverType_5501, GALGAS_prefixOperator::class_func_minusNoOvf (SOURCE_FILE ("prefix-operator-compile-time.galgas", 148)), temp_14.readProperty_mPrefixOperatorLocation (), inCompiler COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 148)) ;
      {
      ioArgument_ioContext.mProperty_mPrefixOperatorMap.setter_insertKey (var_minusNoOvf_5F_key_6431, var_receiverType_5501, var_resultType_5698, var_definition_6125, inCompiler COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 149)) ;
      }
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@compileTimePrefixOperatorUsage generateCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_compileTimePrefixOperatorUsage::method_generateCode (const GALGAS_objectIR constinArgument_inReceiverOperand,
                                                               const GALGAS_location /* constinArgument_inOperatorLocation */,
                                                               const GALGAS_omnibusType constinArgument_inResultType,
                                                               const GALGAS_bool /* constinArgument_inDoNotGeneratePanicCode */,
                                                               const GALGAS_bool /* constinArgument_inSafeMode */,
                                                               GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                               GALGAS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                               GALGAS_objectIR & outArgument_outResultValue,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint var_receiverValue_7693 ;
  GALGAS_omnibusType joker_7677_1 ; // Joker input parameter
  constinArgument_inReceiverOperand.method_literalInteger (joker_7677_1, var_receiverValue_7693, inCompiler COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 175)) ;
  GALGAS_ctMap temp_0 = GALGAS_ctMap::init (inCompiler COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 176)) ;
  GALGAS_ctMap var_varMap_7721 = temp_0 ;
  {
  const GALGAS_compileTimePrefixOperatorUsage temp_1 = this ;
  var_varMap_7721.setter_insertKey (temp_1.readProperty_mReceiverOperandName (), var_receiverValue_7693, inCompiler COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 177)) ;
  }
  GALGAS_bigint var_result_7877 ;
  const GALGAS_compileTimePrefixOperatorUsage temp_2 = this ;
  callExtensionMethod_computeCompileTimeExpression ((cPtr_ctExpressionAST *) temp_2.readProperty_mExpression ().ptr (), var_varMap_7721, var_result_7877, inCompiler COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 178)) ;
  outArgument_outResultValue = GALGAS_objectIR::class_func_literalInteger (constinArgument_inResultType, var_result_7877  COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 179)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@llvmPrefixOperatorAST locationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GALGAS_location cPtr_llvmPrefixOperatorAST::getter_locationForErrorSignaling (Compiler */* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_location result_outLocation ; // Returned variable
  const GALGAS_llvmPrefixOperatorAST temp_0 = this ;
  result_outLocation = temp_0.readProperty_mPrefixOperatorLocation () ;
//---
  return result_outLocation ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'appendPrefixOperatorDeclaration_minus?&'
//
//--------------------------------------------------------------------------------------------------

void routine_appendPrefixOperatorDeclaration_5F_minus_3F__26_ (const GALGAS_string constinArgument_inOmnibusReceiverTypeName,
                                                               GALGAS_semanticTypePrecedenceGraph & ioArgument_ioPrecedenceGraph,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_llvmGenerationInstructionList temp_0 = GALGAS_llvmGenerationInstructionList::init (inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 58)) ;
  GALGAS_llvmGenerationInstructionList var_llvmInstructionList_2273 = temp_0 ;
  GALGAS_llvmGenerationInstructionElementList temp_1 = GALGAS_llvmGenerationInstructionElementList::init (inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 59)) ;
  GALGAS_llvmGenerationInstructionElementList var_instructionElements_2343 = temp_1 ;
  var_instructionElements_2343.addAssign_operation (GALGAS_llvmGenerationInstructionElement::class_func_symbol (GALGAS_string ("result").getter_nowhere (SOURCE_FILE ("prefix-operator-llvm.galgas", 60))  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 60))  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 60)) ;
  var_instructionElements_2343.addAssign_operation (GALGAS_llvmGenerationInstructionElement::class_func_string (GALGAS_string (" = sub ")  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 61))  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 61)) ;
  var_instructionElements_2343.addAssign_operation (GALGAS_llvmGenerationInstructionElement::class_func_type (GALGAS_string ("SELF").getter_nowhere (SOURCE_FILE ("prefix-operator-llvm.galgas", 62))  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 62))  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 62)) ;
  var_instructionElements_2343.addAssign_operation (GALGAS_llvmGenerationInstructionElement::class_func_string (GALGAS_string (" 0, ")  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 63))  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 63)) ;
  var_instructionElements_2343.addAssign_operation (GALGAS_llvmGenerationInstructionElement::class_func_symbol (GALGAS_string ("SELF").getter_nowhere (SOURCE_FILE ("prefix-operator-llvm.galgas", 64))  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 64))  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 64)) ;
  var_llvmInstructionList_2273.addAssign_operation (GALGAS_llvmGenerationInstruction::init_21_ (var_instructionElements_2343, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 65)) ;
  GALGAS_abstractDeclarationAST var_declaration_2761 = GALGAS_llvmPrefixOperatorAST::init_21__21__21__21__21__21_ (GALGAS_llvmPrefixOperatorEnumeration::class_func_minusOp (SOURCE_FILE ("prefix-operator-llvm.galgas", 67)), GALGAS_location::class_func_nowhere (SOURCE_FILE ("prefix-operator-llvm.galgas", 68)), GALGAS_string ("SELF").getter_nowhere (SOURCE_FILE ("prefix-operator-llvm.galgas", 69)), constinArgument_inOmnibusReceiverTypeName.getter_nowhere (SOURCE_FILE ("prefix-operator-llvm.galgas", 70)), var_llvmInstructionList_2273, constinArgument_inOmnibusReceiverTypeName.getter_nowhere (SOURCE_FILE ("prefix-operator-llvm.galgas", 72)), inCompiler COMMA_HERE) ;
  callExtensionMethod_enterInPrecedenceGraph ((cPtr_abstractDeclarationAST *) var_declaration_2761.ptr (), ioArgument_ioPrecedenceGraph, inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 74)) ;
  var_declaration_2761 = GALGAS_llvmPrefixOperatorAST::init_21__21__21__21__21__21_ (GALGAS_llvmPrefixOperatorEnumeration::class_func_minusOpNoOvf (SOURCE_FILE ("prefix-operator-llvm.galgas", 76)), GALGAS_location::class_func_nowhere (SOURCE_FILE ("prefix-operator-llvm.galgas", 77)), GALGAS_string ("SELF").getter_nowhere (SOURCE_FILE ("prefix-operator-llvm.galgas", 78)), constinArgument_inOmnibusReceiverTypeName.getter_nowhere (SOURCE_FILE ("prefix-operator-llvm.galgas", 79)), var_llvmInstructionList_2273, constinArgument_inOmnibusReceiverTypeName.getter_nowhere (SOURCE_FILE ("prefix-operator-llvm.galgas", 81)), inCompiler COMMA_HERE) ;
  callExtensionMethod_enterInPrecedenceGraph ((cPtr_abstractDeclarationAST *) var_declaration_2761.ptr (), ioArgument_ioPrecedenceGraph, inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 83)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'appendPrefixOperatorDeclaration_bitWiseComplement?&'
//
//--------------------------------------------------------------------------------------------------

void routine_appendPrefixOperatorDeclaration_5F_bitWiseComplement_3F__26_ (const GALGAS_string constinArgument_inOmnibusReceiverTypeName,
                                                                           GALGAS_semanticTypePrecedenceGraph & ioArgument_ioPrecedenceGraph,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_llvmGenerationInstructionList temp_0 = GALGAS_llvmGenerationInstructionList::init (inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 93)) ;
  GALGAS_llvmGenerationInstructionList var_llvmInstructionList_3632 = temp_0 ;
  GALGAS_llvmGenerationInstructionElementList temp_1 = GALGAS_llvmGenerationInstructionElementList::init (inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 94)) ;
  GALGAS_llvmGenerationInstructionElementList var_instructionElements_3702 = temp_1 ;
  var_instructionElements_3702.addAssign_operation (GALGAS_llvmGenerationInstructionElement::class_func_symbol (GALGAS_string ("result").getter_nowhere (SOURCE_FILE ("prefix-operator-llvm.galgas", 95))  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 95))  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 95)) ;
  var_instructionElements_3702.addAssign_operation (GALGAS_llvmGenerationInstructionElement::class_func_string (GALGAS_string (" = xor ")  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 96))  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 96)) ;
  var_instructionElements_3702.addAssign_operation (GALGAS_llvmGenerationInstructionElement::class_func_type (GALGAS_string ("SELF").getter_nowhere (SOURCE_FILE ("prefix-operator-llvm.galgas", 97))  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 97))  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 97)) ;
  var_instructionElements_3702.addAssign_operation (GALGAS_llvmGenerationInstructionElement::class_func_string (GALGAS_string (" ")  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 98))  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 98)) ;
  var_instructionElements_3702.addAssign_operation (GALGAS_llvmGenerationInstructionElement::class_func_symbol (GALGAS_string ("SELF").getter_nowhere (SOURCE_FILE ("prefix-operator-llvm.galgas", 99))  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 99))  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 99)) ;
  var_instructionElements_3702.addAssign_operation (GALGAS_llvmGenerationInstructionElement::class_func_string (GALGAS_string (", -1")  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 100))  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 100)) ;
  var_llvmInstructionList_3632.addAssign_operation (GALGAS_llvmGenerationInstruction::init_21_ (var_instructionElements_3702, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 101)) ;
  GALGAS_abstractDeclarationAST var_declaration_4169 = GALGAS_llvmPrefixOperatorAST::init_21__21__21__21__21__21_ (GALGAS_llvmPrefixOperatorEnumeration::class_func_bitWiseComplement (SOURCE_FILE ("prefix-operator-llvm.galgas", 103)), GALGAS_location::class_func_nowhere (SOURCE_FILE ("prefix-operator-llvm.galgas", 104)), GALGAS_string ("SELF").getter_nowhere (SOURCE_FILE ("prefix-operator-llvm.galgas", 105)), constinArgument_inOmnibusReceiverTypeName.getter_nowhere (SOURCE_FILE ("prefix-operator-llvm.galgas", 106)), var_llvmInstructionList_3632, constinArgument_inOmnibusReceiverTypeName.getter_nowhere (SOURCE_FILE ("prefix-operator-llvm.galgas", 108)), inCompiler COMMA_HERE) ;
  callExtensionMethod_enterInPrecedenceGraph ((cPtr_abstractDeclarationAST *) var_declaration_4169.ptr (), ioArgument_ioPrecedenceGraph, inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 110)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@llvmPrefixOperatorAST enterInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_llvmPrefixOperatorAST::method_enterInPrecedenceGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_llvmPrefixOperatorAST temp_0 = this ;
  const GALGAS_llvmPrefixOperatorAST temp_1 = this ;
  const GALGAS_llvmPrefixOperatorAST temp_2 = this ;
  GALGAS_lstring var_nodeName_6517 = GALGAS_lstring::init_21__21_ (extensionGetter_string (temp_0.readProperty_mPrefixOperator (), inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 174)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 174)).add_operation (temp_1.readProperty_mReceiverTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 174)), temp_2.readProperty_mPrefixOperatorLocation (), inCompiler COMMA_HERE) ;
  {
  const GALGAS_llvmPrefixOperatorAST temp_3 = this ;
  ioArgument_ioGraph.setter_addNode (var_nodeName_6517, temp_3, inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 175)) ;
  }
  {
  const GALGAS_llvmPrefixOperatorAST temp_4 = this ;
  ioArgument_ioGraph.setter_addEdge (var_nodeName_6517, temp_4.readProperty_mReceiverTypeName () COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 176)) ;
  }
  {
  const GALGAS_llvmPrefixOperatorAST temp_5 = this ;
  ioArgument_ioGraph.setter_addEdge (var_nodeName_6517, temp_5.readProperty_mResultTypeName () COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 177)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@llvmPrefixOperatorAST keyRepresentationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_llvmPrefixOperatorAST::getter_keyRepresentationForErrorSignaling (Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outRepresentation ; // Returned variable
  const GALGAS_llvmPrefixOperatorAST temp_0 = this ;
  const GALGAS_llvmPrefixOperatorAST temp_1 = this ;
  result_outRepresentation = extensionGetter_string (temp_0.readProperty_mPrefixOperator (), inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 183)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 183)).add_operation (temp_1.readProperty_mReceiverTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 183)) ;
//---
  return result_outRepresentation ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@llvmPrefixOperatorAST enterInContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_llvmPrefixOperatorAST::method_enterInContext (GALGAS_semanticContext & ioArgument_ioContext,
                                                        GALGAS_declarationDecorationList & /* ioArgument_ioDecoratedDeclarationList */,
                                                        GALGAS_decoratedRegularRoutineList & /* ioArgument_ioDecoratedRoutineList */,
                                                        GALGAS_routineListIR & ioArgument_ioRoutineListIR,
                                                        GALGAS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                        GALGAS_staticEntityMap & /* ioArgument_ioStaticEntityMap */,
                                                        GALGAS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                        GALGAS_userLLVMTypeDefinitionListIR & /* ioArgument_ioUserLLVMTypeDefinitionListIR */,
                                                        Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapEntry var_receiverTypeProxy_8127 ;
  {
  const GALGAS_llvmPrefixOperatorAST temp_0 = this ;
  extensionSetter_makeEntry (ioArgument_ioContext.mProperty_mTypeMap, temp_0.readProperty_mReceiverTypeName (), var_receiverTypeProxy_8127, inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 201)) ;
  }
  GALGAS_omnibusType var_receiverType_8152 = extensionGetter_type (var_receiverTypeProxy_8127, inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 202)) ;
  const GALGAS_llvmPrefixOperatorAST temp_1 = this ;
  callExtensionMethod_checkIsNotCompileTimeType ((cPtr_omnibusType *) var_receiverType_8152.ptr (), temp_1.readProperty_mReceiverTypeName ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 203)) ;
  GALGAS_unifiedTypeMapEntry var_resultTypeProxy_8329 ;
  {
  const GALGAS_llvmPrefixOperatorAST temp_2 = this ;
  extensionSetter_makeEntry (ioArgument_ioContext.mProperty_mTypeMap, temp_2.readProperty_mResultTypeName (), var_resultTypeProxy_8329, inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 204)) ;
  }
  GALGAS_omnibusType var_resultType_8352 = extensionGetter_type (var_resultTypeProxy_8329, inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 205)) ;
  const GALGAS_llvmPrefixOperatorAST temp_3 = this ;
  callExtensionMethod_checkIsNotCompileTimeType ((cPtr_omnibusType *) var_resultType_8352.ptr (), temp_3.readProperty_mResultTypeName ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 206)) ;
  const GALGAS_llvmPrefixOperatorAST temp_4 = this ;
  GALGAS_string var_prefixMangledFunctionName_8499 = function_prefixOperatorFunctionName (var_receiverType_8152, extensionGetter_prefixOperator (temp_4.readProperty_mPrefixOperator (), inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 208)), inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 208)) ;
  const GALGAS_llvmPrefixOperatorAST temp_5 = this ;
  const GALGAS_llvmPrefixOperatorAST temp_6 = this ;
  GALGAS_lstring var_key_8598 = function_prefixOperatorMapKey (var_receiverType_8152, extensionGetter_prefixOperator (temp_5.readProperty_mPrefixOperator (), inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 209)), temp_6.readProperty_mPrefixOperatorLocation (), inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 209)) ;
  const GALGAS_llvmPrefixOperatorAST temp_7 = this ;
  const GALGAS_llvmPrefixOperatorAST temp_8 = this ;
  GALGAS_llvmPrefixOperatorUsage var_definition_8699 = GALGAS_llvmPrefixOperatorUsage::init_21__21__21_ (var_prefixMangledFunctionName_8499, temp_7.readProperty_mReceiverName (), temp_8.readProperty_mInstructionList (), inCompiler COMMA_HERE) ;
  {
  ioArgument_ioContext.mProperty_mPrefixOperatorMap.setter_insertKey (var_key_8598, var_receiverType_8152, var_resultType_8352, var_definition_8699, inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 215)) ;
  }
  GALGAS_assignmentGenerationVarMap temp_9 = GALGAS_assignmentGenerationVarMap::init (inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 217)) ;
  GALGAS_assignmentGenerationVarMap var_varMap_8976 = temp_9 ;
  {
  const GALGAS_llvmPrefixOperatorAST temp_10 = this ;
  const GALGAS_llvmPrefixOperatorAST temp_11 = this ;
  var_varMap_8976.setter_insertKey (temp_10.readProperty_mReceiverName (), GALGAS_string ("%").add_operation (temp_11.readProperty_mReceiverName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 218)), inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 218)) ;
  }
  GALGAS_assignmentGenerationVarMap temp_12 = GALGAS_assignmentGenerationVarMap::init (inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 219)) ;
  GALGAS_assignmentGenerationVarMap var_typeMap_9092 = temp_12 ;
  {
  const GALGAS_llvmPrefixOperatorAST temp_13 = this ;
  var_typeMap_9092.setter_insertKey (temp_13.readProperty_mReceiverName (), callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) var_receiverType_8152.ptr (), inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 220)), inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 220)) ;
  }
  {
  var_typeMap_9092.setter_insertKey (GALGAS_string ("result").getter_nowhere (SOURCE_FILE ("prefix-operator-llvm.galgas", 221)), callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) var_resultType_8352.ptr (), inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 221)), inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 221)) ;
  }
  GALGAS_llvmGenerationInstructionList temp_14 = GALGAS_llvmGenerationInstructionList::init (inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 222)) ;
  GALGAS_llvmGenerationInstructionList var_instructionList_9287 = temp_14 ;
  var_instructionList_9287.addAssign_operation (GALGAS_llvmVarInstruction::init_21_ (GALGAS_string ("result").getter_nowhere (SOURCE_FILE ("prefix-operator-llvm.galgas", 223)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 223)) ;
  const GALGAS_llvmPrefixOperatorAST temp_15 = this ;
  var_instructionList_9287.plusAssign_operation(temp_15.readProperty_mInstructionList (), inCompiler  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 224)) ;
  {
  extensionSetter_appendReturn (var_instructionList_9287, GALGAS_string ("result").getter_nowhere (SOURCE_FILE ("prefix-operator-llvm.galgas", 225)), GALGAS_string ("result").getter_nowhere (SOURCE_FILE ("prefix-operator-llvm.galgas", 225)), inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 225)) ;
  }
  GALGAS_stringlist temp_16 = GALGAS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 226)) ;
  GALGAS_stringlist var_generatedInstructions_9514 = temp_16 ;
  GALGAS_allocaList temp_17 = GALGAS_allocaList::init (inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 227)) ;
  GALGAS_allocaList var_allocaList_9560 = temp_17 ;
  GALGAS_uint var_temporaryIndex_9589 = GALGAS_uint (uint32_t (0U)) ;
  extensionMethod_generateIRCode (var_instructionList_9287, var_varMap_8976, var_typeMap_9092, var_generatedInstructions_9514, var_temporaryIndex_9589, var_allocaList_9560, inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 229)) ;
  const GALGAS_llvmPrefixOperatorAST temp_18 = this ;
  const GALGAS_llvmPrefixOperatorAST temp_19 = this ;
  GALGAS_prefixOperatorRoutineIR var_routine_9720 = GALGAS_prefixOperatorRoutineIR::init_21__21_isRequired_21_warnsIfUnused_21__21__21__21__21_ (GALGAS_lstring::init_21__21_ (var_prefixMangledFunctionName_8499, temp_18.readProperty_mPrefixOperatorLocation (), inCompiler COMMA_HERE), GALGAS_bool (true), GALGAS_bool (false), var_receiverType_8152, temp_19.readProperty_mReceiverName ().readProperty_string (), var_resultType_8352, var_generatedInstructions_9514, var_allocaList_9560, inCompiler COMMA_HERE) ;
  ioArgument_ioRoutineListIR.addAssign_operation (var_routine_9720  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 240)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@llvmPrefixOperatorUsage generateCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_llvmPrefixOperatorUsage::method_generateCode (const GALGAS_objectIR constinArgument_inReceiverOperand,
                                                        const GALGAS_location constinArgument_inOperatorLocation,
                                                        const GALGAS_omnibusType constinArgument_inResultType,
                                                        const GALGAS_bool /* constinArgument_inDoNotGeneratePanicCode */,
                                                        const GALGAS_bool /* constinArgument_inSafeMode */,
                                                        GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                        GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                        GALGAS_objectIR & outArgument_outResultValue,
                                                        Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_objectIR var_receiverOperand_11043 = constinArgument_inReceiverOperand ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_receiverOperand_11043, inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 267)) ;
  }
  {
  routine_getNewTempValue_3F__26__21_ (constinArgument_inResultType, ioArgument_ioTemporaries, outArgument_outResultValue, inCompiler  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 272)) ;
  }
  GALGAS_procCallEffectiveParameterListIR temp_0 = GALGAS_procCallEffectiveParameterListIR::init (inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 273)) ;
  GALGAS_procCallEffectiveParameterListIR var_argumentList_11324 = temp_0 ;
  var_argumentList_11324.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::class_func_output (SOURCE_FILE ("prefix-operator-llvm.galgas", 274)), var_receiverOperand_11043  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 274)) ;
  const GALGAS_llvmPrefixOperatorUsage temp_1 = this ;
  const GALGAS_llvmPrefixOperatorUsage temp_2 = this ;
  ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_standaloneRoutineCallIR::init_21__21__21__21_ (outArgument_outResultValue, GALGAS_lstring::init_21__21_ (temp_1.readProperty_mPrefixMangledFunctionName (), constinArgument_inOperatorLocation, inCompiler COMMA_HERE), temp_2.readProperty_mPrefixMangledFunctionName (), var_argumentList_11324, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 275)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@prefixOperatorRoutineIR llvmCodeGeneration'
//
//--------------------------------------------------------------------------------------------------

void cPtr_prefixOperatorRoutineIR::method_llvmCodeGeneration (GALGAS_string & ioArgument_ioLLVMcode,
                                                              const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                              GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_prefixOperatorRoutineIR temp_0 = this ;
  const GALGAS_prefixOperatorRoutineIR temp_1 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal ").add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_0.readProperty_mResultType ().ptr (), inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 302)), inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 302)).add_operation (GALGAS_string (" @"), inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 302)).add_operation (temp_1.readProperty_mRoutineMangledName ().readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("prefix-operator-llvm.galgas", 302)), inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 302)), inCompiler  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 302)) ;
  const GALGAS_prefixOperatorRoutineIR temp_2 = this ;
  const GALGAS_prefixOperatorRoutineIR temp_3 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" (").add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_2.readProperty_mReceiverType ().ptr (), inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 303)), inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 303)).add_operation (GALGAS_string (" %"), inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 303)).add_operation (temp_3.readProperty_mReceiverVarName (), inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 303)).add_operation (GALGAS_string (") nounwind {\n"), inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 303)), inCompiler  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 303)) ;
  const GALGAS_prefixOperatorRoutineIR temp_4 = this ;
  extensionMethod_generateAllocaList (temp_4.readProperty_mAllocaList (), ioArgument_ioLLVMcode, inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 304)) ;
  const GALGAS_prefixOperatorRoutineIR temp_5 = this ;
  cEnumerator_stringlist enumerator_12726 (temp_5.readProperty_mGeneratedInstructions (), EnumerationOrder::up) ;
  while (enumerator_12726.hasCurrentObject ()) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (enumerator_12726.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 306)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 306)), inCompiler  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 306)) ;
    enumerator_12726.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n\n"), inCompiler  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 308)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@prefixOperatorExpressionAST addDependenceEdgeForStaticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_prefixOperatorExpressionAST::method_addDependenceEdgeForStaticExpression (const GALGAS_lstring constinArgument_inConstantName,
                                                                                    GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_prefixOperatorExpressionAST temp_0 = this ;
  callExtensionMethod_addDependenceEdgeForStaticExpression ((cPtr_expressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 28)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@prefixOperatorExpressionAST noteExpressionTypesInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_prefixOperatorExpressionAST::method_noteExpressionTypesInPrecedenceGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_prefixOperatorExpressionAST temp_0 = this ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((cPtr_expressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 36)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@prefixOperatorExpressionAST analyzeExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_prefixOperatorExpressionAST::method_analyzeExpression (const GALGAS_omnibusType constinArgument_inSelfType,
                                                                 const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                                                 const GALGAS_omnibusType constinArgument_inOptionalTargetType,
                                                                 const GALGAS_semanticContext constinArgument_inContext,
                                                                 const GALGAS_mode constinArgument_inMode,
                                                                 GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                 GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                 GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                 GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                 GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                 GALGAS_objectIR & outArgument_outResult,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_objectIR var_expressionResult_3299 ;
  const GALGAS_prefixOperatorExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeExpression ((cPtr_expressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_expressionResult_3299, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 57)) ;
  GALGAS_bool var_currentlyInSafeMode_3345 = extensionGetter_isSafe (constinArgument_inMode, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 71)) ;
  GALGAS_bool var_noPanicGeneration_3395 = GALGAS_bool (gOption_omnibus_5F_options_noPanicGeneration.readProperty_value ()) ;
  const GALGAS_prefixOperatorExpressionAST temp_1 = this ;
  const GALGAS_prefixOperatorExpressionAST temp_2 = this ;
  extensionMethod_generatePrefixOperatorCode (constinArgument_inContext.readProperty_mPrefixOperatorMap (), var_expressionResult_3299, temp_1.readProperty_mOp (), temp_2.readProperty_mOperatorLocation (), var_currentlyInSafeMode_3345, var_noPanicGeneration_3395, ioArgument_ioTemporaries, ioArgument_ioInstructionGenerationList, outArgument_outResult, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 73)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@checkInstructionAST noteInstructionTypesInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_checkInstructionAST::method_noteInstructionTypesInPrecedenceGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_checkInstructionAST temp_0 = this ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((cPtr_expressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("directive-check.galgas", 41)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@checkInstructionAST instructionSemanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_checkInstructionAST::method_instructionSemanticAnalysis (const GALGAS_omnibusType constinArgument_inSelfType,
                                                                   const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                                                   const GALGAS_semanticContext constinArgument_inContext,
                                                                   const GALGAS_mode constinArgument_inMode,
                                                                   GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                   GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                   GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                   GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                   GALGAS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_instructionListIR temp_0 = GALGAS_instructionListIR::init (inCompiler COMMA_SOURCE_FILE ("directive-check.galgas", 60)) ;
  GALGAS_instructionListIR var_instructionGenerationList_3005 = temp_0 ;
  GALGAS_objectIR var_expressionResult_3421 ;
  const GALGAS_checkInstructionAST temp_1 = this ;
  callExtensionMethod_analyzeExpression ((cPtr_expressionAST *) temp_1.readProperty_mExpression ().ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, function_voidType (inCompiler COMMA_SOURCE_FILE ("directive-check.galgas", 64)), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_instructionGenerationList_3005, var_expressionResult_3421, inCompiler COMMA_SOURCE_FILE ("directive-check.galgas", 61)) ;
  GALGAS_implicitBooleanConversionResult var_booleanOperand_3659 ;
  const GALGAS_checkInstructionAST temp_2 = this ;
  extensionMethod_generateConvertToBooleanCode (constinArgument_inContext.readProperty_mImplicitConversionToBooleanMap (), var_expressionResult_3421, temp_2.readProperty_mCheckMessage ().readProperty_location (), ioArgument_ioTemporaries, var_instructionGenerationList_3005, ioArgument_ioAllocaList, var_booleanOperand_3659, inCompiler COMMA_SOURCE_FILE ("directive-check.galgas", 74)) ;
  switch (var_booleanOperand_3659.enumValue ()) {
  case GALGAS_implicitBooleanConversionResult::Enumeration::invalid:
    break ;
  case GALGAS_implicitBooleanConversionResult::Enumeration::enum_compileTime:
    {
      GALGAS_bool extractedValue_3729_boolValue_0 ;
      var_booleanOperand_3659.getAssociatedValuesFor_compileTime (extractedValue_3729_boolValue_0) ;
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = extractedValue_3729_boolValue_0.operator_not (SOURCE_FILE ("directive-check.galgas", 85)).boolEnum () ;
        if (kBoolTrue == test_3) {
          enumGalgasBool test_4 = kBoolTrue ;
          if (kBoolTrue == test_4) {
            const GALGAS_checkInstructionAST temp_5 = this ;
            test_4 = GALGAS_bool (ComparisonKind::notEqual, temp_5.readProperty_mCheckMessage ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
            if (kBoolTrue == test_4) {
              const GALGAS_checkInstructionAST temp_6 = this ;
              const GALGAS_checkInstructionAST temp_7 = this ;
              TC_Array <FixItDescription> fixItArray8 ;
              inCompiler->emitSemanticError (temp_6.readProperty_mCheckMessage ().readProperty_location (), GALGAS_string ("check failure: ").add_operation (temp_7.readProperty_mCheckMessage ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("directive-check.galgas", 87)), fixItArray8  COMMA_SOURCE_FILE ("directive-check.galgas", 87)) ;
            }
          }
          if (kBoolFalse == test_4) {
            const GALGAS_checkInstructionAST temp_9 = this ;
            TC_Array <FixItDescription> fixItArray10 ;
            inCompiler->emitSemanticError (temp_9.readProperty_mCheckMessage ().readProperty_location (), GALGAS_string ("check failure"), fixItArray10  COMMA_SOURCE_FILE ("directive-check.galgas", 89)) ;
          }
        }
      }
    }
    break ;
  case GALGAS_implicitBooleanConversionResult::Enumeration::enum_llvmVariable:
    {
      GALGAS_string extractedValue_3989__0 ;
      var_booleanOperand_3659.getAssociatedValuesFor_llvmVariable (extractedValue_3989__0) ;
      const GALGAS_checkInstructionAST temp_11 = this ;
      TC_Array <FixItDescription> fixItArray12 ;
      inCompiler->emitSemanticError (temp_11.readProperty_mInstructionLocation (), GALGAS_string ("expression is not static: use assert instruction"), fixItArray12  COMMA_SOURCE_FILE ("directive-check.galgas", 93)) ;
    }
    break ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@assertInstructionAST noteInstructionTypesInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_assertInstructionAST::method_noteInstructionTypesInPrecedenceGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_assertInstructionAST temp_0 = this ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((cPtr_expressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 36)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@assertInstructionAST instructionSemanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_assertInstructionAST::method_instructionSemanticAnalysis (const GALGAS_omnibusType constinArgument_inSelfType,
                                                                    const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                                                    const GALGAS_semanticContext constinArgument_inContext,
                                                                    const GALGAS_mode constinArgument_inMode,
                                                                    GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                    GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                    GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                    GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                    GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (ComparisonKind::equal, constinArgument_inMode.objectCompare (GALGAS_mode::class_func_panicMode (SOURCE_FILE ("instruction-assert.galgas", 54)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_assertInstructionAST temp_1 = this ;
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mInstructionLocation (), GALGAS_string ("operations that can generate panic are not allowed in ").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 55)), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 55)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 55)), fixItArray2  COMMA_SOURCE_FILE ("instruction-assert.galgas", 55)) ;
    }
  }
  GALGAS_instructionListIR temp_3 = GALGAS_instructionListIR::init (inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 58)) ;
  GALGAS_instructionListIR var_instructionGenerationList_3006 = temp_3 ;
  GALGAS_objectIR var_expressionValue_3421 ;
  const GALGAS_assertInstructionAST temp_4 = this ;
  callExtensionMethod_analyzeExpression ((cPtr_expressionAST *) temp_4.readProperty_mExpression ().ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, function_voidType (inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 62)), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_instructionGenerationList_3006, var_expressionValue_3421, inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 59)) ;
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    test_5 = extensionGetter_type (var_expressionValue_3421, inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 73)).readProperty_kind ().getter_isBoolean (SOURCE_FILE ("instruction-assert.galgas", 73)).operator_not (SOURCE_FILE ("instruction-assert.galgas", 73)).boolEnum () ;
    if (kBoolTrue == test_5) {
      const GALGAS_assertInstructionAST temp_6 = this ;
      TC_Array <FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (temp_6.readProperty_mInstructionLocation (), GALGAS_string ("expression is not boolean"), fixItArray7  COMMA_SOURCE_FILE ("instruction-assert.galgas", 74)) ;
    }
  }
  enumGalgasBool test_8 = kBoolTrue ;
  if (kBoolTrue == test_8) {
    test_8 = extensionGetter_isStatic (var_expressionValue_3421, inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 77)).boolEnum () ;
    if (kBoolTrue == test_8) {
      const GALGAS_assertInstructionAST temp_9 = this ;
      TC_Array <FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (temp_9.readProperty_mInstructionLocation (), GALGAS_string ("expression is static: use check directive"), fixItArray10  COMMA_SOURCE_FILE ("instruction-assert.galgas", 78)) ;
    }
  }
  enumGalgasBool test_11 = kBoolTrue ;
  if (kBoolTrue == test_11) {
    test_11 = GALGAS_bool (gOption_omnibus_5F_options_noPanicGeneration.readProperty_value ()).operator_not (SOURCE_FILE ("instruction-assert.galgas", 81)).boolEnum () ;
    if (kBoolTrue == test_11) {
      const GALGAS_assertInstructionAST temp_12 = this ;
      ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_assertInstructionIR::init_21__21__21_ (temp_12.readProperty_mInstructionLocation (), var_instructionGenerationList_3006, var_expressionValue_3421, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-assert.galgas", 82)) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@assertInstructionIR llvmInstructionCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_assertInstructionIR::method_llvmInstructionCode (GALGAS_string & ioArgument_ioLLVMcode,
                                                           const GALGAS_generationContext constinArgument_inGenerationContext,
                                                           GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_assertInstructionIR temp_0 = this ;
  extensionMethod_instructionListLLVMCode (temp_0.readProperty_mInstructionList (), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 107)) ;
  GALGAS_string var_labelAssertOk_4963 = GALGAS_string ("assert.ok.").add_operation (ioArgument_ioGenerationAdds.readProperty_mUniqueIndex ().getter_string (SOURCE_FILE ("instruction-assert.galgas", 108)), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 108)) ;
  GALGAS_string var_labelAssertEr_5030 = GALGAS_string ("assert.not.ok.").add_operation (ioArgument_ioGenerationAdds.readProperty_mUniqueIndex ().getter_string (SOURCE_FILE ("instruction-assert.galgas", 109)), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 109)) ;
  ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("instruction-assert.galgas", 110)) ;
  const GALGAS_assertInstructionIR temp_1 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (extensionGetter_llvmName (temp_1.readProperty_mExpressionValue (), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 111)), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 111)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 111)).add_operation (var_labelAssertOk_4963, inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 111)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 111)).add_operation (var_labelAssertEr_5030, inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 111)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 111)), inCompiler  COMMA_SOURCE_FILE ("instruction-assert.galgas", 111)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelAssertEr_5030.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 112)), inCompiler  COMMA_SOURCE_FILE ("instruction-assert.galgas", 112)) ;
  const GALGAS_assertInstructionIR temp_2 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @").add_operation (function_panicRoutineNameForLocationFile (temp_2.readProperty_mAssertInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 113)).getter_assemblerRepresentation (SOURCE_FILE ("instruction-assert.galgas", 113)), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 113)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 113)), inCompiler  COMMA_SOURCE_FILE ("instruction-assert.galgas", 113)) ;
  const GALGAS_assertInstructionIR temp_3 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inGenerationContext.readProperty_mPanicLineLLVMType ().ptr (), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 114)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 114)).add_operation (temp_3.readProperty_mAssertInstructionLocation ().getter_endLine (inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 114)).getter_string (SOURCE_FILE ("instruction-assert.galgas", 114)), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 114)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 114)), inCompiler  COMMA_SOURCE_FILE ("instruction-assert.galgas", 114)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inGenerationContext.readProperty_mPanicCodeLLVMType ().ptr (), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 115)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 115)).add_operation (function_panicCodeForAssertViolation (inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 115)).getter_string (SOURCE_FILE ("instruction-assert.galgas", 115)), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 115)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 115)), inCompiler  COMMA_SOURCE_FILE ("instruction-assert.galgas", 115)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  unreachable\n\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-assert.galgas", 116)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelAssertOk_4963.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 117)), inCompiler  COMMA_SOURCE_FILE ("instruction-assert.galgas", 117)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@assertInstructionIR enterAccessibleEntities'
//
//--------------------------------------------------------------------------------------------------

void cPtr_assertInstructionIR::method_enterAccessibleEntities (GALGAS_stringset & ioArgument_ioInvokedRoutineSet,
                                                               GALGAS_uint & ioArgument_ioMaxBranchOfOnInstructions,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_assertInstructionIR temp_0 = this ;
  extensionMethod_enterAccessibleEntities (temp_0.readProperty_mInstructionList (), ioArgument_ioInvokedRoutineSet, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 126)) ;
  const GALGAS_assertInstructionIR temp_1 = this ;
  ioArgument_ioInvokedRoutineSet.addAssign_operation (function_panicRoutineNameForLocationFile (temp_1.readProperty_mAssertInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 127))  COMMA_SOURCE_FILE ("instruction-assert.galgas", 127)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@assignmentInstructionAST noteInstructionTypesInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_assignmentInstructionAST::method_noteInstructionTypesInPrecedenceGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_assignmentInstructionAST temp_0 = this ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((cPtr_expressionAST *) temp_0.readProperty_mSourceExpression ().ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 40)) ;
  const GALGAS_assignmentInstructionAST temp_1 = this ;
  extensionMethod_noteInstructionTypesInPrecedenceGraph (temp_1.readProperty_mTargetAST (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 41)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@assignmentInstructionAST instructionSemanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_assignmentInstructionAST::method_instructionSemanticAnalysis (const GALGAS_omnibusType constinArgument_inSelfType,
                                                                        const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                                                        const GALGAS_semanticContext constinArgument_inContext,
                                                                        const GALGAS_mode constinArgument_inMode,
                                                                        GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                        GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                        GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                        GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                        GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_omnibusType var_targetType_3142 ;
  const GALGAS_assignmentInstructionAST temp_0 = this ;
  extensionMethod_searchValuedObjectType (ioArgument_ioUniversalMap, constinArgument_inContext, constinArgument_inSelfType, temp_0.readProperty_mTargetAST (), var_targetType_3142, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 59)) ;
  GALGAS_objectIR var_sourceOperandPossibleReference_3576 ;
  const GALGAS_assignmentInstructionAST temp_1 = this ;
  callExtensionMethod_analyzeExpression ((cPtr_expressionAST *) temp_1.readProperty_mSourceExpression ().ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, var_targetType_3142, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_sourceOperandPossibleReference_3576, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 61)) ;
  GALGAS_instructionListListIR temp_2 = GALGAS_instructionListListIR::init (inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 75)) ;
  GALGAS_instructionListListIR var_pendingStoreComputedPropertyInstructionGenerationList_3660 = temp_2 ;
  GALGAS_LValueRepresentation var_lvalueIR_4181 ;
  const GALGAS_assignmentInstructionAST temp_3 = this ;
  extensionMethod_analyzeLValueInAssignment (temp_3.readProperty_mTargetAST (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_pendingStoreComputedPropertyInstructionGenerationList_3660, var_lvalueIR_4181, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 76)) ;
  {
  const GALGAS_assignmentInstructionAST temp_4 = this ;
  extensionSetter_appendAssignmentIR (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, constinArgument_inContext.readProperty_mAssignmentOperatorMap (), ioArgument_ioAllocaList, var_lvalueIR_4181.readProperty_type (), var_lvalueIR_4181.readProperty_llvmName (), var_sourceOperandPossibleReference_3576, temp_4.readProperty_mInstructionLocation (), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 90)) ;
  }
  cEnumerator_instructionListListIR enumerator_4562 (var_pendingStoreComputedPropertyInstructionGenerationList_3660, EnumerationOrder::down) ;
  while (enumerator_4562.hasCurrentObject ()) {
    ioArgument_ioInstructionGenerationList.plusAssign_operation(enumerator_4562.current_mInstructionList (HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 102)) ;
    enumerator_4562.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Routine 'analyzeVariableInLValueInAssignment?self?routineAttributes?context?mode&temporary&staticEntityMap&variableMap&alloca&instructionListIR&pendingStoreComputedPropertyList?variableName?llvmName?type?!'
//
//--------------------------------------------------------------------------------------------------

void routine_analyzeVariableInLValueInAssignment_3F_self_3F_routineAttributes_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_26_pendingStoreComputedPropertyList_3F_variableName_3F_llvmName_3F_type_3F__21_ (const GALGAS_omnibusType constinArgument_inSelfType,
                                                                                                                                                                                                                                                                const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                                                                                                                                                                                                                                                const GALGAS_semanticContext constinArgument_inContext,
                                                                                                                                                                                                                                                                const GALGAS_mode constinArgument_inMode,
                                                                                                                                                                                                                                                                GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                                                                                                                                                                                                                GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                                                                                                                                                                                                                GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                                                                                                                                                                                                                GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                                                                                                                                                                                                                GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                                                                                                                                                                                                                GALGAS_instructionListListIR & ioArgument_ioPendingStoreComputedPropertyInstructionGenerationListList,
                                                                                                                                                                                                                                                                const GALGAS_lstring constinArgument_inVariableName,
                                                                                                                                                                                                                                                                const GALGAS_string constinArgument_inLLVMName,
                                                                                                                                                                                                                                                                const GALGAS_omnibusType constinArgument_inVariableType,
                                                                                                                                                                                                                                                                const GALGAS_LValueOperandAST constinArgument_inOperand,
                                                                                                                                                                                                                                                                GALGAS_LValueRepresentation & outArgument_outInternalRepresentation,
                                                                                                                                                                                                                                                                Compiler * inCompiler
                                                                                                                                                                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outInternalRepresentation.drop () ; // Release 'out' argument
  GALGAS_omnibusType var_currentType_8629 = constinArgument_inVariableType ;
  GALGAS_string var_currentLLVMName_8664 = constinArgument_inLLVMName ;
  switch (constinArgument_inOperand.enumValue ()) {
  case GALGAS_LValueOperandAST::Enumeration::invalid:
    break ;
  case GALGAS_LValueOperandAST::Enumeration::enum_noOperand:
    {
      {
      GALGAS_objectIR joker_8802 ; // Joker input parameter
      extensionSetter_searchValuedObjectForWriteAccess (ioArgument_ioUniversalMap, constinArgument_inVariableName, joker_8802, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 198)) ;
      }
    }
    break ;
  case GALGAS_LValueOperandAST::Enumeration::enum_property:
    {
      GALGAS_lstring extractedValue_8832_name_0 ;
      GALGAS_LValueOperandAST extractedValue_8855_nextOperand_1 ;
      constinArgument_inOperand.getAssociatedValuesFor_property (extractedValue_8832_name_0, extractedValue_8855_nextOperand_1) ;
      {
      GALGAS_objectIR joker_8945 ; // Joker input parameter
      extensionSetter_searchValuedObjectForReadWriteAccess (ioArgument_ioUniversalMap, constinArgument_inVariableName, joker_8945, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 200)) ;
      }
      {
      routine_handlePropertyAccessInAssignment_3F_self_26__26__3F_routineAttributes_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_26_pendingStoreComputedPropertyList_3F__3F_ (constinArgument_inSelfType, var_currentType_8629, var_currentLLVMName_8664, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, ioArgument_ioPendingStoreComputedPropertyInstructionGenerationListList, extractedValue_8832_name_0, extractedValue_8855_nextOperand_1, inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 201)) ;
      }
    }
    break ;
  case GALGAS_LValueOperandAST::Enumeration::enum_arrayAccess:
    {
      GALGAS_expressionAST extractedValue_9503_indexExpression_0 ;
      GALGAS_location extractedValue_9519_endOfIndex_1 ;
      GALGAS_bool extractedValue_9530_checkIndexExpression_2 ;
      GALGAS_LValueOperandAST extractedValue_9551_nextOperand_3 ;
      constinArgument_inOperand.getAssociatedValuesFor_arrayAccess (extractedValue_9503_indexExpression_0, extractedValue_9519_endOfIndex_1, extractedValue_9530_checkIndexExpression_2, extractedValue_9551_nextOperand_3) ;
      {
      GALGAS_objectIR joker_9641 ; // Joker input parameter
      extensionSetter_searchValuedObjectForReadWriteAccess (ioArgument_ioUniversalMap, constinArgument_inVariableName, joker_9641, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 218)) ;
      }
      {
      routine_handleArrayAccessInAssignment_3F_self_26__26__3F_routineAttributes_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_26_pendingStoreComputedPropertyList_3F__3F__3F__3F_ (constinArgument_inSelfType, var_currentType_8629, var_currentLLVMName_8664, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, ioArgument_ioPendingStoreComputedPropertyInstructionGenerationListList, extractedValue_9503_indexExpression_0, extractedValue_9519_endOfIndex_1, extractedValue_9530_checkIndexExpression_2, extractedValue_9551_nextOperand_3, inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 219)) ;
      }
    }
    break ;
  }
  outArgument_outInternalRepresentation = GALGAS_LValueRepresentation::init_21__21_ (var_currentType_8629, var_currentLLVMName_8664, inCompiler COMMA_HERE) ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'handlePropertyAccessInAssignment?self&&?routineAttributes?context?mode&temporary&staticEntityMap&variableMap&alloca&instructionListIR&pendingStoreComputedPropertyList??'
//
//--------------------------------------------------------------------------------------------------

void routine_handlePropertyAccessInAssignment_3F_self_26__26__3F_routineAttributes_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_26_pendingStoreComputedPropertyList_3F__3F_ (const GALGAS_omnibusType constinArgument_inSelfType,
                                                                                                                                                                                                                                 GALGAS_omnibusType & ioArgument_ioCurrentType,
                                                                                                                                                                                                                                 GALGAS_string & ioArgument_ioCurrentLLVMName,
                                                                                                                                                                                                                                 const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                                                                                                                                                                                                                 const GALGAS_semanticContext constinArgument_inContext,
                                                                                                                                                                                                                                 const GALGAS_mode constinArgument_inMode,
                                                                                                                                                                                                                                 GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                                                                                                                                                                                 GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                                                                                                                                                                                 GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                                                                                                                                                                                 GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                                                                                                                                                                                 GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                                                                                                                                                                                 GALGAS_instructionListListIR & ioArgument_ioPendingStoreComputedPropertyInstructionGenerationListList,
                                                                                                                                                                                                                                 const GALGAS_lstring constinArgument_inPropertyName,
                                                                                                                                                                                                                                 const GALGAS_LValueOperandAST constinArgument_inNextOperand,
                                                                                                                                                                                                                                 Compiler * inCompiler
                                                                                                                                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_propertySetterMap var_propertySetterMap_11258 = extensionGetter_propertySetterMap (constinArgument_inContext, ioArgument_ioCurrentType, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 260)) ;
  GALGAS_propertySetterKind var_propertyAccess_11558 ;
  GALGAS_propertyVisibility joker_11530 ; // Joker input parameter
  var_propertySetterMap_11258.method_searchKey (constinArgument_inPropertyName, joker_11530, var_propertyAccess_11558, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 263)) ;
  switch (var_propertyAccess_11558.enumValue ()) {
  case GALGAS_propertySetterKind::Enumeration::invalid:
    break ;
  case GALGAS_propertySetterKind::Enumeration::enum_computedProperty:
    {
      GALGAS_unifiedTypeMapEntry extractedValue_11644_computedPropertyType_0 ;
      GALGAS_routineLLVMNameDict extractedValue_11665_getterModeDictionary_1 ;
      GALGAS_routineLLVMNameDict extractedValue_11686_setterModeDictionary_2 ;
      var_propertyAccess_11558.getAssociatedValuesFor_computedProperty (extractedValue_11644_computedPropertyType_0, extractedValue_11665_getterModeDictionary_1, extractedValue_11686_setterModeDictionary_2) ;
      GALGAS_string var_getterRoutineLLVMName_11744 = function_checkModeAndReturnsRoutineLLVMName (extractedValue_11665_getterModeDictionary_1, constinArgument_inMode, constinArgument_inPropertyName, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 267)) ;
      GALGAS_objectIR var_resultValueIR_12090 ;
      {
      extensionSetter_appendGetComputedPropertyValue (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, GALGAS_objectIR::class_func_reference (ioArgument_ioCurrentType, ioArgument_ioCurrentLLVMName  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 270)), var_getterRoutineLLVMName_11744, extensionGetter_type (extractedValue_11644_computedPropertyType_0, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 272)), var_resultValueIR_12090, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 268)) ;
      }
      {
      extensionSetter_referenceFromPossibleValue (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, ioArgument_ioAllocaList, var_resultValueIR_12090, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 276)) ;
      }
      GALGAS_string var_setterRoutineLLVMName_12304 = function_checkModeAndReturnsRoutineLLVMName (extractedValue_11686_setterModeDictionary_2, constinArgument_inMode, constinArgument_inPropertyName, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 278)) ;
      GALGAS_instructionListIR temp_0 = GALGAS_instructionListIR::init (inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 279)) ;
      GALGAS_instructionListIR var_pendingStoreComputedPropertyInstructionGenerationList_12438 = temp_0 ;
      GALGAS_objectIR var_tempValueIR_12506 = var_resultValueIR_12090 ;
      {
      extensionSetter_appendLoadWhenReference (var_pendingStoreComputedPropertyInstructionGenerationList_12438, ioArgument_ioTemporaries, var_tempValueIR_12506, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 281)) ;
      }
      {
      extensionSetter_appendStoreComputedPropertyValue (var_pendingStoreComputedPropertyInstructionGenerationList_12438, GALGAS_objectIR::class_func_reference (ioArgument_ioCurrentType, ioArgument_ioCurrentLLVMName  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 283)), var_setterRoutineLLVMName_12304, var_tempValueIR_12506, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 282)) ;
      }
      ioArgument_ioPendingStoreComputedPropertyInstructionGenerationListList.addAssign_operation (var_pendingStoreComputedPropertyInstructionGenerationList_12438  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 287)) ;
      ioArgument_ioCurrentType = extensionGetter_type (var_resultValueIR_12090, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 289)) ;
      ioArgument_ioCurrentLLVMName = extensionGetter_llvmName (var_resultValueIR_12090, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 290)) ;
      {
      routine_handleNextOperandInAssignment_3F_self_26__26__3F__3F_routineAttributes_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_26_pendingStoreComputedPropertyList (constinArgument_inSelfType, ioArgument_ioCurrentType, ioArgument_ioCurrentLLVMName, constinArgument_inNextOperand, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, ioArgument_ioPendingStoreComputedPropertyInstructionGenerationListList, inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 291)) ;
      }
    }
    break ;
  case GALGAS_propertySetterKind::Enumeration::enum_storedProperty:
    {
      GALGAS_omnibusType extractedValue_13648_propertyType_0 ;
      GALGAS_uint extractedValue_13667_index_1 ;
      var_propertyAccess_11558.getAssociatedValuesFor_storedProperty (extractedValue_13648_propertyType_0, extractedValue_13667_index_1) ;
      GALGAS_string var_newLLVMvariable_13717 ;
      {
      extensionSetter_newTempLLVMVar (ioArgument_ioTemporaries, var_newLLVMvariable_13717, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 307)) ;
      }
      {
      extensionSetter_appendGetUniversalPropertyReference (ioArgument_ioInstructionGenerationList, ioArgument_ioCurrentType, ioArgument_ioCurrentLLVMName, var_newLLVMvariable_13717, extractedValue_13667_index_1, constinArgument_inPropertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 308)) ;
      }
      ioArgument_ioCurrentType = extractedValue_13648_propertyType_0 ;
      ioArgument_ioCurrentLLVMName = var_newLLVMvariable_13717 ;
      {
      routine_handleNextOperandInAssignment_3F_self_26__26__3F__3F_routineAttributes_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_26_pendingStoreComputedPropertyList (constinArgument_inSelfType, ioArgument_ioCurrentType, ioArgument_ioCurrentLLVMName, constinArgument_inNextOperand, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, ioArgument_ioPendingStoreComputedPropertyInstructionGenerationListList, inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 317)) ;
      }
    }
    break ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'handleArrayAccessInAssignment?self&&?routineAttributes?context?mode&temporary&staticEntityMap&variableMap&alloca&instructionListIR&pendingStoreComputedPropertyList????'
//
//--------------------------------------------------------------------------------------------------

void routine_handleArrayAccessInAssignment_3F_self_26__26__3F_routineAttributes_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_26_pendingStoreComputedPropertyList_3F__3F__3F__3F_ (const GALGAS_omnibusType constinArgument_inSelfType,
                                                                                                                                                                                                                                      GALGAS_omnibusType & ioArgument_ioCurrentType,
                                                                                                                                                                                                                                      GALGAS_string & ioArgument_ioCurrentLLVMName,
                                                                                                                                                                                                                                      const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                                                                                                                                                                                                                      const GALGAS_semanticContext constinArgument_inContext,
                                                                                                                                                                                                                                      const GALGAS_mode constinArgument_inMode,
                                                                                                                                                                                                                                      GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                                                                                                                                                                                      GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                                                                                                                                                                                      GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                                                                                                                                                                                      GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                                                                                                                                                                                      GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                                                                                                                                                                                      GALGAS_instructionListListIR & ioArgument_ioPendingStoreComputedPropertyInstructionGenerationListList,
                                                                                                                                                                                                                                      const GALGAS_expressionAST constinArgument_inIndexExpression,
                                                                                                                                                                                                                                      const GALGAS_location constinArgument_inEndOfIndex,
                                                                                                                                                                                                                                      const GALGAS_bool constinArgument_inCheckIndexExpression,
                                                                                                                                                                                                                                      const GALGAS_LValueOperandAST constinArgument_inNextOperand,
                                                                                                                                                                                                                                      Compiler * inCompiler
                                                                                                                                                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  switch (ioArgument_ioCurrentType.readProperty_subscript ().enumValue ()) {
  case GALGAS_subscript::Enumeration::invalid:
    break ;
  case GALGAS_subscript::Enumeration::enum_noSubscript:
    {
      TC_Array <FixItDescription> fixItArray0 ;
      inCompiler->emitSemanticError (constinArgument_inEndOfIndex, GALGAS_string ("the receiver type is ").add_operation (ioArgument_ioCurrentType.readProperty_omnibusTypeDescriptionName (), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 358)).add_operation (GALGAS_string (" and does not accept subscripting"), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 358)), fixItArray0  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 357)) ;
    }
    break ;
  case GALGAS_subscript::Enumeration::enum_literalString:
    {
      TC_Array <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inEndOfIndex, GALGAS_string ("the receiver type is literal string and does not accept subscripting"), fixItArray1  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 360)) ;
      ioArgument_ioCurrentType.drop () ; // Release error dropped variable
      ioArgument_ioCurrentLLVMName.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_subscript::Enumeration::enum_staticSubscript:
    {
      GALGAS_omnibusType extractedValue_15841_elementType_0 ;
      GALGAS_bigint extractedValue_15861_arraySize_1 ;
      ioArgument_ioCurrentType.readProperty_subscript ().getAssociatedValuesFor_staticSubscript (extractedValue_15841_elementType_0, extractedValue_15861_arraySize_1) ;
      GALGAS_objectIR var_indexIR_16349 ;
      {
      routine_handleArraySubscriptNew_3F_self_3F_routineAttributes_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_3F__3F__3F__3F_arraySize_3F_elementType_26__21_ (constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, constinArgument_inIndexExpression, constinArgument_inEndOfIndex, constinArgument_inCheckIndexExpression, extractedValue_15861_arraySize_1, extractedValue_15841_elementType_0, ioArgument_ioInstructionGenerationList, var_indexIR_16349, inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 364)) ;
      }
      GALGAS_string var_newLLVMvariable_16404 ;
      {
      extensionSetter_newTempLLVMVar (ioArgument_ioTemporaries, var_newLLVMvariable_16404, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 381)) ;
      }
      {
      extensionSetter_appendGetUniversalArrayElementReference (ioArgument_ioInstructionGenerationList, ioArgument_ioCurrentType, ioArgument_ioCurrentLLVMName, extractedValue_15841_elementType_0, var_newLLVMvariable_16404, var_indexIR_16349, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 382)) ;
      }
      ioArgument_ioCurrentType = extractedValue_15841_elementType_0 ;
      ioArgument_ioCurrentLLVMName = var_newLLVMvariable_16404 ;
      {
      routine_handleNextOperandInAssignment_3F_self_26__26__3F__3F_routineAttributes_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_26_pendingStoreComputedPropertyList (constinArgument_inSelfType, ioArgument_ioCurrentType, ioArgument_ioCurrentLLVMName, constinArgument_inNextOperand, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, ioArgument_ioPendingStoreComputedPropertyInstructionGenerationListList, inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 391)) ;
      }
    }
    break ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'analyzeSelfLValueInAssignment?self?routineAttributes?context?mode&temporary&staticEntityMap&variableMap&alloca&instructionListIR&pendingStoreComputedPropertyList?!'
//
//--------------------------------------------------------------------------------------------------

void routine_analyzeSelfLValueInAssignment_3F_self_3F_routineAttributes_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_26_pendingStoreComputedPropertyList_3F__21_ (const GALGAS_omnibusType constinArgument_inSelfType,
                                                                                                                                                                                                                      const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                                                                                                                                                                                                      const GALGAS_semanticContext constinArgument_inContext,
                                                                                                                                                                                                                      const GALGAS_mode constinArgument_inMode,
                                                                                                                                                                                                                      GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                                                                                                                                                                      GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                                                                                                                                                                      GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                                                                                                                                                                      GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                                                                                                                                                                      GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                                                                                                                                                                      GALGAS_instructionListListIR & ioArgument_ioPendingStoreComputedPropertyInstructionGenerationListList,
                                                                                                                                                                                                                      const GALGAS_LValueOperandAST constinArgument_inOperand,
                                                                                                                                                                                                                      GALGAS_LValueRepresentation & outArgument_outInternalRepresentation,
                                                                                                                                                                                                                      Compiler * inCompiler
                                                                                                                                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outInternalRepresentation.drop () ; // Release 'out' argument
  GALGAS_omnibusType var_currentType_18029 = constinArgument_inSelfType ;
  GALGAS_string var_currentLLVMName_18060 = function_llvmNameForSelf (inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 426)) ;
  switch (constinArgument_inOperand.enumValue ()) {
  case GALGAS_LValueOperandAST::Enumeration::invalid:
    break ;
  case GALGAS_LValueOperandAST::Enumeration::enum_noOperand:
    break ;
  case GALGAS_LValueOperandAST::Enumeration::enum_property:
    {
      GALGAS_lstring extractedValue_18161_name_0 ;
      GALGAS_LValueOperandAST extractedValue_18184_next_1 ;
      constinArgument_inOperand.getAssociatedValuesFor_property (extractedValue_18161_name_0, extractedValue_18184_next_1) ;
      {
      routine_handlePropertyAccessInAssignment_3F_self_26__26__3F_routineAttributes_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_26_pendingStoreComputedPropertyList_3F__3F_ (constinArgument_inSelfType, var_currentType_18029, var_currentLLVMName_18060, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, ioArgument_ioPendingStoreComputedPropertyInstructionGenerationListList, extractedValue_18161_name_0, extractedValue_18184_next_1, inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 430)) ;
      }
    }
    break ;
  case GALGAS_LValueOperandAST::Enumeration::enum_arrayAccess:
    {
      GALGAS_expressionAST extractedValue_18739_indexExpression_0 ;
      GALGAS_location extractedValue_18755_endOfIndex_1 ;
      GALGAS_bool extractedValue_18766_checkIndexExpression_2 ;
      GALGAS_LValueOperandAST extractedValue_18787_nextOperand_3 ;
      constinArgument_inOperand.getAssociatedValuesFor_arrayAccess (extractedValue_18739_indexExpression_0, extractedValue_18755_endOfIndex_1, extractedValue_18766_checkIndexExpression_2, extractedValue_18787_nextOperand_3) ;
      {
      routine_handleArrayAccessInAssignment_3F_self_26__26__3F_routineAttributes_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_26_pendingStoreComputedPropertyList_3F__3F__3F__3F_ (constinArgument_inSelfType, var_currentType_18029, var_currentLLVMName_18060, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, ioArgument_ioPendingStoreComputedPropertyInstructionGenerationListList, extractedValue_18739_indexExpression_0, extractedValue_18755_endOfIndex_1, extractedValue_18766_checkIndexExpression_2, extractedValue_18787_nextOperand_3, inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 447)) ;
      }
    }
    break ;
  }
  outArgument_outInternalRepresentation = GALGAS_LValueRepresentation::init_21__21_ (var_currentType_18029, var_currentLLVMName_18060, inCompiler COMMA_HERE) ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'handleNextOperandInAssignment?self&&??routineAttributes?context?mode&temporary&staticEntityMap&variableMap&alloca&instructionListIR&pendingStoreComputedPropertyList'
//
//--------------------------------------------------------------------------------------------------

void routine_handleNextOperandInAssignment_3F_self_26__26__3F__3F_routineAttributes_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_26_pendingStoreComputedPropertyList (const GALGAS_omnibusType constinArgument_inSelfType,
                                                                                                                                                                                                                          GALGAS_omnibusType & ioArgument_ioCurrentType,
                                                                                                                                                                                                                          GALGAS_string & ioArgument_ioCurrentLLVMName,
                                                                                                                                                                                                                          const GALGAS_LValueOperandAST constinArgument_inOperand,
                                                                                                                                                                                                                          const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                                                                                                                                                                                                          const GALGAS_semanticContext constinArgument_inContext,
                                                                                                                                                                                                                          const GALGAS_mode constinArgument_inMode,
                                                                                                                                                                                                                          GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                                                                                                                                                                          GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                                                                                                                                                                          GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                                                                                                                                                                          GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                                                                                                                                                                          GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                                                                                                                                                                          GALGAS_instructionListListIR & ioArgument_ioPendingStoreComputedPropertyInstructionGenerationListList,
                                                                                                                                                                                                                          Compiler * inCompiler
                                                                                                                                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  switch (constinArgument_inOperand.enumValue ()) {
  case GALGAS_LValueOperandAST::Enumeration::invalid:
    break ;
  case GALGAS_LValueOperandAST::Enumeration::enum_noOperand:
    break ;
  case GALGAS_LValueOperandAST::Enumeration::enum_property:
    {
      GALGAS_lstring extractedValue_20353_name_0 ;
      GALGAS_LValueOperandAST extractedValue_20376_next_1 ;
      constinArgument_inOperand.getAssociatedValuesFor_property (extractedValue_20353_name_0, extractedValue_20376_next_1) ;
      {
      routine_handlePropertyAccessInAssignment_3F_self_26__26__3F_routineAttributes_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_26_pendingStoreComputedPropertyList_3F__3F_ (constinArgument_inSelfType, ioArgument_ioCurrentType, ioArgument_ioCurrentLLVMName, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, ioArgument_ioPendingStoreComputedPropertyInstructionGenerationListList, extractedValue_20353_name_0, extractedValue_20376_next_1, inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 489)) ;
      }
    }
    break ;
  case GALGAS_LValueOperandAST::Enumeration::enum_arrayAccess:
    {
      GALGAS_expressionAST extractedValue_20935_indexExpression_0 ;
      GALGAS_location extractedValue_20951_endOfIndex_1 ;
      GALGAS_bool extractedValue_20962_checkIndexExpression_2 ;
      GALGAS_LValueOperandAST extractedValue_20983_nextOperand_3 ;
      constinArgument_inOperand.getAssociatedValuesFor_arrayAccess (extractedValue_20935_indexExpression_0, extractedValue_20951_endOfIndex_1, extractedValue_20962_checkIndexExpression_2, extractedValue_20983_nextOperand_3) ;
      {
      routine_handleArrayAccessInAssignment_3F_self_26__26__3F_routineAttributes_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_26_pendingStoreComputedPropertyList_3F__3F__3F__3F_ (constinArgument_inSelfType, ioArgument_ioCurrentType, ioArgument_ioCurrentLLVMName, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, ioArgument_ioPendingStoreComputedPropertyInstructionGenerationListList, extractedValue_20935_indexExpression_0, extractedValue_20951_endOfIndex_1, extractedValue_20962_checkIndexExpression_2, extractedValue_20983_nextOperand_3, inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 506)) ;
      }
    }
    break ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@controlRegisterAssignmentInstructionAST noteInstructionTypesInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_controlRegisterAssignmentInstructionAST::method_noteInstructionTypesInPrecedenceGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_controlRegisterAssignmentInstructionAST temp_0 = this ;
  extensionMethod_noteExpressionTypesInPrecedenceGraph (temp_0.readProperty_mControlRegisterLValue (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-control-register.galgas", 59)) ;
  const GALGAS_controlRegisterAssignmentInstructionAST temp_1 = this ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((cPtr_expressionAST *) temp_1.readProperty_mSourceExpression ().ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-control-register.galgas", 60)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@controlRegisterAssignmentInstructionAST instructionSemanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_controlRegisterAssignmentInstructionAST::method_instructionSemanticAnalysis (const GALGAS_omnibusType constinArgument_inSelfType,
                                                                                       const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                                                                       const GALGAS_semanticContext constinArgument_inContext,
                                                                                       const GALGAS_mode constinArgument_inMode,
                                                                                       GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                                       GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                                       GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                                       GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                                       GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_omnibusType var_registerType_4340 ;
  GALGAS_string var_llvmRegAddressName_4426 ;
  const GALGAS_controlRegisterAssignmentInstructionAST temp_0 = this ;
  GALGAS_uint joker_4357 ; // Joker input parameter
  GALGAS_sliceMap joker_4381 ; // Joker input parameter
  extensionMethod_controlRegisterLValueSemanticAnalysis (temp_0.readProperty_mControlRegisterLValue (), GALGAS_bool (true), constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_registerType_4340, joker_4357, joker_4381, var_llvmRegAddressName_4426, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-control-register.galgas", 79)) ;
  GALGAS_objectIR var_sourceIR_4885 ;
  const GALGAS_controlRegisterAssignmentInstructionAST temp_1 = this ;
  callExtensionMethod_analyzeExpression ((cPtr_expressionAST *) temp_1.readProperty_mSourceExpression ().ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, var_registerType_4340, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_sourceIR_4885, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-control-register.galgas", 96)) ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_sourceIR_4885, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-control-register.galgas", 110)) ;
  }
  GALGAS_omnibusType var_t_5086 = extensionGetter_type (var_sourceIR_4885, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-control-register.galgas", 115)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = callExtensionGetter_copyable ((const cPtr_omnibusType *) var_t_5086.ptr (), inCompiler COMMA_SOURCE_FILE ("instruction-assignment-control-register.galgas", 116)).operator_not (SOURCE_FILE ("instruction-assignment-control-register.galgas", 116)).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_controlRegisterAssignmentInstructionAST temp_3 = this ;
      TC_Array <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mControlRegisterLValue ().readProperty_mRegisterGroupName ().readProperty_location (), GALGAS_string ("source expression is not copyable"), fixItArray4  COMMA_SOURCE_FILE ("instruction-assignment-control-register.galgas", 117)) ;
    }
  }
  if (kBoolFalse == test_2) {
    const GALGAS_controlRegisterAssignmentInstructionAST temp_5 = this ;
    switch (temp_5.readProperty_mAssignmentKind ().enumValue ()) {
    case GALGAS_controlRegisterAssignmentOperatorKind::Enumeration::invalid:
      break ;
    case GALGAS_controlRegisterAssignmentOperatorKind::Enumeration::enum_assignment:
      {
        {
        extensionSetter_appendStoreIndirectVolatileRegister (ioArgument_ioInstructionGenerationList, var_registerType_4340, var_llvmRegAddressName_4426, var_sourceIR_4885, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-control-register.galgas", 121)) ;
        }
      }
      break ;
    case GALGAS_controlRegisterAssignmentOperatorKind::Enumeration::enum_assignmentWithOperator:
      {
        GALGAS_omnibusInfixOperator extractedValue_5440_infixOperator_0 ;
        GALGAS_location extractedValue_5454_operatorLocation_1 ;
        temp_5.readProperty_mAssignmentKind ().getAssociatedValuesFor_assignmentWithOperator (extractedValue_5440_infixOperator_0, extractedValue_5454_operatorLocation_1) ;
        GALGAS_objectIR var_registerValueIR_5555 ;
        {
        routine_getNewTempValue_3F__26__21_ (var_registerType_4340, ioArgument_ioTemporaries, var_registerValueIR_5555, inCompiler  COMMA_SOURCE_FILE ("instruction-assignment-control-register.galgas", 124)) ;
        }
        {
        extensionSetter_appendLoadIndirectVolatileRegister (ioArgument_ioInstructionGenerationList, var_registerValueIR_5555, var_llvmRegAddressName_4426, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-control-register.galgas", 125)) ;
        }
        GALGAS_lstring var_key_5719 = function_infixOperatorMapKey (var_registerType_4340, extractedValue_5440_infixOperator_0, extractedValue_5454_operatorLocation_1, extensionGetter_type (var_sourceIR_4885, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-control-register.galgas", 127)), inCompiler COMMA_SOURCE_FILE ("instruction-assignment-control-register.galgas", 127)) ;
        GALGAS_omnibusType var_resultType_5866 ;
        GALGAS_omnibusInfixOperatorUsage var_operatorUsage_5882 ;
        constinArgument_inContext.readProperty_mInfixOperatorMap ().method_searchKey (var_key_5719, var_resultType_5866, var_operatorUsage_5882, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-control-register.galgas", 128)) ;
        GALGAS_objectIR var_operationResult_6126 ;
        callExtensionMethod_generateCode ((cPtr_omnibusInfixOperatorUsage *) var_operatorUsage_5882.ptr (), var_registerValueIR_5555, extractedValue_5454_operatorLocation_1, var_sourceIR_4885, var_resultType_5866, ioArgument_ioTemporaries, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_operationResult_6126, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-control-register.galgas", 129)) ;
        {
        extensionSetter_appendStoreIndirectVolatileRegister (ioArgument_ioInstructionGenerationList, var_registerType_4340, var_llvmRegAddressName_4426, var_operationResult_6126, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-control-register.galgas", 158)) ;
        }
      }
      break ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@sliceAssignmentInstructionAST noteInstructionTypesInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_sliceAssignmentInstructionAST::method_noteInstructionTypesInPrecedenceGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GALGAS_sliceAssignmentInstructionAST temp_0 = this ;
  ioArgument_ioGraph.setter_noteNode (temp_0.readProperty_mTypeName () COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 84)) ;
  }
  const GALGAS_sliceAssignmentInstructionAST temp_1 = this ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((cPtr_expressionAST *) temp_1.readProperty_mSourceExpression ().ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 85)) ;
  const GALGAS_sliceAssignmentInstructionAST temp_2 = this ;
  cEnumerator_sliceAssignmentListAST enumerator_3371 (temp_2.readProperty_mSliceAssignmentList (), EnumerationOrder::up) ;
  while (enumerator_3371.hasCurrentObject ()) {
    switch (enumerator_3371.current_mSliceKind (HERE).enumValue ()) {
    case GALGAS_sliceTargetAST::Enumeration::invalid:
      break ;
    case GALGAS_sliceTargetAST::Enumeration::enum_discarded:
      break ;
    case GALGAS_sliceTargetAST::Enumeration::enum_varDeclaration:
      break ;
    case GALGAS_sliceTargetAST::Enumeration::enum_letDeclaration:
      break ;
    case GALGAS_sliceTargetAST::Enumeration::enum_lValue:
      {
        GALGAS_LValueAST extractedValue_3544_target_0 ;
        enumerator_3371.current_mSliceKind (HERE).getAssociatedValuesFor_lValue (extractedValue_3544_target_0) ;
        extensionMethod_noteInstructionTypesInPrecedenceGraph (extractedValue_3544_target_0, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 92)) ;
      }
      break ;
    }
    enumerator_3371.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@sliceAssignmentInstructionAST instructionSemanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_sliceAssignmentInstructionAST::method_instructionSemanticAnalysis (const GALGAS_omnibusType constinArgument_inSelfType,
                                                                             const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                                                             const GALGAS_semanticContext constinArgument_inContext,
                                                                             const GALGAS_mode constinArgument_inMode,
                                                                             GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                             GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                             GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                             GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                             GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_sliceAssignmentInstructionAST temp_0 = this ;
  GALGAS_omnibusType var_resultType_4537 = extensionGetter_type (extensionGetter_searchKey (constinArgument_inContext.readProperty_mTypeMap (), temp_0.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 113)), inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 113)) ;
  GALGAS_uint var_bitCount_4660 ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = var_resultType_4537.readProperty_kind ().getter_isInteger (SOURCE_FILE ("instruction-slice-assignment.galgas", 116)).operator_not (SOURCE_FILE ("instruction-slice-assignment.galgas", 116)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_sliceAssignmentInstructionAST temp_2 = this ;
      TC_Array <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mTypeName ().readProperty_location (), GALGAS_string ("this type should be an unsigned integer type"), fixItArray3  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 117)) ;
      var_bitCount_4660.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_1) {
    GALGAS_bool var_unsigned_4849 ;
    GALGAS_bigint joker_4831_2 ; // Joker input parameter
    GALGAS_bigint joker_4831_1 ; // Joker input parameter
    var_resultType_4537.readProperty_kind ().method_integer (joker_4831_2, joker_4831_1, var_unsigned_4849, var_bitCount_4660, inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 119)) ;
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = var_unsigned_4849.operator_not (SOURCE_FILE ("instruction-slice-assignment.galgas", 120)).boolEnum () ;
      if (kBoolTrue == test_4) {
        const GALGAS_sliceAssignmentInstructionAST temp_5 = this ;
        TC_Array <FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (temp_5.readProperty_mTypeName ().readProperty_location (), GALGAS_string ("this type should be an unsigned integer type"), fixItArray6  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 121)) ;
        var_bitCount_4660.drop () ; // Release error dropped variable
      }
    }
  }
  GALGAS_objectIR var_sourceOperand_5420 ;
  const GALGAS_sliceAssignmentInstructionAST temp_7 = this ;
  callExtensionMethod_analyzeExpression ((cPtr_expressionAST *) temp_7.readProperty_mSourceExpression ().ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, var_resultType_4537, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_sourceOperand_5420, inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 125)) ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_sourceOperand_5420, inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 139)) ;
  }
  enumGalgasBool test_8 = kBoolTrue ;
  if (kBoolTrue == test_8) {
    test_8 = var_sourceOperand_5420.getter_isLiteralInteger (SOURCE_FILE ("instruction-slice-assignment.galgas", 141)).boolEnum () ;
    if (kBoolTrue == test_8) {
      GALGAS_bigint var_value_5737 ;
      GALGAS_omnibusType joker_5714_1 ; // Joker input parameter
      var_sourceOperand_5420.method_literalInteger (joker_5714_1, var_value_5737, inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 142)) ;
      enumGalgasBool test_9 = kBoolTrue ;
      if (kBoolTrue == test_9) {
        test_9 = GALGAS_bool (ComparisonKind::greaterOrEqual, var_value_5737.objectCompare (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 143)).left_shift_operation (var_bitCount_4660, inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 143)))).boolEnum () ;
        if (kBoolTrue == test_9) {
          const GALGAS_sliceAssignmentInstructionAST temp_10 = this ;
          TC_Array <FixItDescription> fixItArray11 ;
          inCompiler->emitSemanticError (temp_10.readProperty_mSourceExpressionLocation (), GALGAS_string ("static value too large"), fixItArray11  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 144)) ;
          var_sourceOperand_5420.drop () ; // Release error dropped variable
        }
      }
      if (kBoolFalse == test_9) {
        var_sourceOperand_5420 = GALGAS_objectIR::class_func_literalInteger (var_resultType_4537, var_value_5737  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 146)) ;
      }
    }
  }
  GALGAS_uint var_rightShiftAmount_5986 = var_bitCount_4660 ;
  const GALGAS_sliceAssignmentInstructionAST temp_12 = this ;
  cEnumerator_sliceAssignmentListAST enumerator_6035 (temp_12.readProperty_mSliceAssignmentList (), EnumerationOrder::up) ;
  while (enumerator_6035.hasCurrentObject ()) {
    GALGAS_objectIR var_sourceOperandForSlicing_6086 = var_sourceOperand_5420 ;
    GALGAS_lstring var_sliceTypeName_6167 ;
    GALGAS_uint var_sliceWidth_6195 ;
    enumGalgasBool test_13 = kBoolTrue ;
    if (kBoolTrue == test_13) {
      test_13 = GALGAS_bool (ComparisonKind::equal, enumerator_6035.current_mSliceWidth (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_13) {
        TC_Array <FixItDescription> fixItArray14 ;
        inCompiler->emitSemanticError (enumerator_6035.current_mSliceWidth (HERE).readProperty_location (), GALGAS_string ("anonymous selector not allowed here"), fixItArray14  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 157)) ;
        var_sliceWidth_6195.drop () ; // Release error dropped variable
        var_sliceTypeName_6167.drop () ; // Release error dropped variable
      }
    }
    if (kBoolFalse == test_13) {
      enumGalgasBool test_15 = kBoolTrue ;
      if (kBoolTrue == test_15) {
        test_15 = GALGAS_bool (ComparisonKind::equal, enumerator_6035.current_mSliceWidth (HERE).readProperty_string ().objectCompare (GALGAS_string ("b"))).boolEnum () ;
        if (kBoolTrue == test_15) {
          var_sliceWidth_6195 = GALGAS_uint (uint32_t (1U)) ;
          const GALGAS_sliceAssignmentInstructionAST temp_16 = this ;
          var_sliceTypeName_6167 = GALGAS_lstring::init_21__21_ (function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 160)), temp_16.readProperty_mTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
        }
      }
      if (kBoolFalse == test_15) {
        enumGalgasBool test_17 = kBoolTrue ;
        if (kBoolTrue == test_17) {
          test_17 = enumerator_6035.current_mSliceWidth (HERE).readProperty_string ().getter_isDecimalUnsignedNumber (SOURCE_FILE ("instruction-slice-assignment.galgas", 161)).operator_not (SOURCE_FILE ("instruction-slice-assignment.galgas", 161)).boolEnum () ;
          if (kBoolTrue == test_17) {
            TC_Array <FixItDescription> fixItArray18 ;
            inCompiler->emitSemanticError (enumerator_6035.current_mSliceWidth (HERE).readProperty_location (), GALGAS_string ("the selector should be an unsigned integer value"), fixItArray18  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 162)) ;
            var_sliceWidth_6195.drop () ; // Release error dropped variable
            var_sliceTypeName_6167.drop () ; // Release error dropped variable
          }
        }
        if (kBoolFalse == test_17) {
          var_sliceWidth_6195 = enumerator_6035.current_mSliceWidth (HERE).readProperty_string ().getter_decimalUnsignedNumber (inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 164)) ;
          const GALGAS_sliceAssignmentInstructionAST temp_19 = this ;
          var_sliceTypeName_6167 = GALGAS_lstring::init_21__21_ (GALGAS_string ("u").add_operation (var_sliceWidth_6195.getter_string (SOURCE_FILE ("instruction-slice-assignment.galgas", 165)), inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 165)), temp_19.readProperty_mTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
          enumGalgasBool test_20 = kBoolTrue ;
          if (kBoolTrue == test_20) {
            test_20 = GALGAS_bool (ComparisonKind::equal, var_sliceWidth_6195.objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
            if (kBoolTrue == test_20) {
              TC_Array <FixItDescription> fixItArray21 ;
              inCompiler->emitSemanticError (enumerator_6035.current_mSliceWidth (HERE).readProperty_location (), GALGAS_string ("the bit slice width should be > 0"), fixItArray21  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 167)) ;
            }
          }
        }
      }
    }
    enumGalgasBool test_22 = kBoolTrue ;
    if (kBoolTrue == test_22) {
      test_22 = GALGAS_bool (ComparisonKind::greaterOrEqual, var_rightShiftAmount_5986.objectCompare (var_sliceWidth_6195)).boolEnum () ;
      if (kBoolTrue == test_22) {
        var_rightShiftAmount_5986 = var_rightShiftAmount_5986.substract_operation (var_sliceWidth_6195, inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 171)) ;
      }
    }
    if (kBoolFalse == test_22) {
      GALGAS_uint var_specifiedBitCount_7018 = var_bitCount_4660.add_operation (var_sliceWidth_6195, inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 173)).substract_operation (var_rightShiftAmount_5986, inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 173)) ;
      TC_Array <FixItDescription> fixItArray23 ;
      inCompiler->emitSemanticError (enumerator_6035.current_mSliceWidth (HERE).readProperty_location (), GALGAS_string ("bit slice overflow: ").add_operation (var_specifiedBitCount_7018.getter_string (SOURCE_FILE ("instruction-slice-assignment.galgas", 174)), inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 174)).add_operation (GALGAS_string (" bits, should be "), inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 174)).add_operation (var_bitCount_4660.getter_string (SOURCE_FILE ("instruction-slice-assignment.galgas", 174)), inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 174)), fixItArray23  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 174)) ;
      var_rightShiftAmount_5986 = GALGAS_uint (uint32_t (0U)) ;
    }
    GALGAS_omnibusType var_sliceType_7226 = extensionGetter_type (extensionGetter_searchKey (constinArgument_inContext.readProperty_mTypeMap (), var_sliceTypeName_6167, inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 177)), inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 177)) ;
    {
    extensionSetter_appendLogicalShiftRight (ioArgument_ioInstructionGenerationList, var_sourceOperandForSlicing_6086, var_rightShiftAmount_5986, ioArgument_ioTemporaries, inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 179)) ;
    }
    {
    extensionSetter_appendTrunc (ioArgument_ioInstructionGenerationList, var_sliceType_7226, var_sourceOperandForSlicing_6086, ioArgument_ioTemporaries, inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 180)) ;
    }
    switch (enumerator_6035.current_mSliceKind (HERE).enumValue ()) {
    case GALGAS_sliceTargetAST::Enumeration::invalid:
      break ;
    case GALGAS_sliceTargetAST::Enumeration::enum_discarded:
      break ;
    case GALGAS_sliceTargetAST::Enumeration::enum_varDeclaration:
      {
        GALGAS_lstring extractedValue_7640_varName_0 ;
        enumerator_6035.current_mSliceKind (HERE).getAssociatedValuesFor_varDeclaration (extractedValue_7640_varName_0) ;
        GALGAS_lstring var_omnibusLocalVariableName_7693 = GALGAS_lstring::init_21__21_ (extractedValue_7640_varName_0.readProperty_string ().add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 186)).add_operation (ioArgument_ioTemporaries.readProperty_mTemporaryIndex ().getter_string (SOURCE_FILE ("instruction-slice-assignment.galgas", 186)), inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 186)), extractedValue_7640_varName_0.readProperty_location (), inCompiler COMMA_HERE) ;
        ioArgument_ioTemporaries.mProperty_mTemporaryIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 187)) ;
        {
        extensionSetter_insertLocalVariable (ioArgument_ioUniversalMap, extractedValue_7640_varName_0, var_sliceType_7226, var_omnibusLocalVariableName_7693, GALGAS_valuedObjectState::class_func_hasUnreadValue (SOURCE_FILE ("instruction-slice-assignment.galgas", 188)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 188)) ;
        }
        ioArgument_ioAllocaList.addAssign_operation (function_llvmNameForLocalVariable (var_omnibusLocalVariableName_7693.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 190)), var_sliceType_7226, GALGAS_bool (false)  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 190)) ;
        GALGAS_LValueRepresentation var_targetRef_8110 = GALGAS_LValueRepresentation::init_21__21_ (var_sliceType_7226, function_llvmNameForLocalVariable (var_omnibusLocalVariableName_7693.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 194)), inCompiler COMMA_HERE) ;
        {
        extensionSetter_appendCopyFromReferences (ioArgument_ioInstructionGenerationList, constinArgument_inContext.readProperty_mAssignmentOperatorMap (), ioArgument_ioTemporaries, extractedValue_7640_varName_0.readProperty_location (), var_sourceOperandForSlicing_6086, var_targetRef_8110, inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 197)) ;
        }
      }
      break ;
    case GALGAS_sliceTargetAST::Enumeration::enum_letDeclaration:
      {
        GALGAS_lstring extractedValue_8547_letName_0 ;
        enumerator_6035.current_mSliceKind (HERE).getAssociatedValuesFor_letDeclaration (extractedValue_8547_letName_0) ;
        GALGAS_lstring var_omnibusLocalVariableName_8600 = GALGAS_lstring::init_21__21_ (extractedValue_8547_letName_0.readProperty_string ().add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 206)).add_operation (ioArgument_ioTemporaries.readProperty_mTemporaryIndex ().getter_string (SOURCE_FILE ("instruction-slice-assignment.galgas", 206)), inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 206)), extractedValue_8547_letName_0.readProperty_location (), inCompiler COMMA_HERE) ;
        ioArgument_ioTemporaries.mProperty_mTemporaryIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 207)) ;
        {
        extensionSetter_insertLocalConstant (ioArgument_ioUniversalMap, extractedValue_8547_letName_0, GALGAS_bool (false), var_sliceType_7226, var_omnibusLocalVariableName_8600, inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 208)) ;
        }
        ioArgument_ioAllocaList.addAssign_operation (function_llvmNameForLocalVariable (var_omnibusLocalVariableName_8600.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 210)), var_sliceType_7226, GALGAS_bool (false)  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 210)) ;
        GALGAS_LValueRepresentation var_targetRef_9000 = GALGAS_LValueRepresentation::init_21__21_ (var_sliceType_7226, function_llvmNameForLocalVariable (var_omnibusLocalVariableName_8600.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 214)), inCompiler COMMA_HERE) ;
        {
        extensionSetter_appendCopyFromReferences (ioArgument_ioInstructionGenerationList, constinArgument_inContext.readProperty_mAssignmentOperatorMap (), ioArgument_ioTemporaries, extractedValue_8547_letName_0.readProperty_location (), var_sourceOperandForSlicing_6086, var_targetRef_9000, inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 217)) ;
        }
      }
      break ;
    case GALGAS_sliceTargetAST::Enumeration::enum_lValue:
      {
        GALGAS_LValueAST extractedValue_9442_target_0 ;
        enumerator_6035.current_mSliceKind (HERE).getAssociatedValuesFor_lValue (extractedValue_9442_target_0) ;
        GALGAS_LValueRepresentation var_lvalueIR_9871 ;
        extensionMethod_analyzeLValue (extractedValue_9442_target_0, constinArgument_inSelfType, GALGAS_bool (false), constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_lvalueIR_9871, inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 225)) ;
        {
        extensionSetter_appendCopyFromReferences (ioArgument_ioInstructionGenerationList, constinArgument_inContext.readProperty_mAssignmentOperatorMap (), ioArgument_ioTemporaries, extractedValue_9442_target_0.readProperty_mIdentifier ().readProperty_location (), var_sourceOperandForSlicing_6086, var_lvalueIR_9871, inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 239)) ;
        }
      }
      break ;
    }
    enumerator_6035.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@bitbandInstructionAST noteInstructionTypesInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_bitbandInstructionAST::method_noteInstructionTypesInPrecedenceGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_bitbandInstructionAST temp_0 = this ;
  extensionMethod_noteExpressionTypesInPrecedenceGraph (temp_0.readProperty_mControlRegisterLValue (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 51)) ;
  {
  ioArgument_ioGraph.setter_noteNode (GALGAS_string ("u1").getter_nowhere (SOURCE_FILE ("instruction-bit-banding.galgas", 52)) COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 52)) ;
  }
  const GALGAS_bitbandInstructionAST temp_1 = this ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((cPtr_expressionAST *) temp_1.readProperty_mBitExpression ().ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 53)) ;
  const GALGAS_bitbandInstructionAST temp_2 = this ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((cPtr_expressionAST *) temp_2.readProperty_mSourceExpression ().ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 54)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@bitbandInstructionAST instructionSemanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_bitbandInstructionAST::method_instructionSemanticAnalysis (const GALGAS_omnibusType constinArgument_inSelfType,
                                                                     const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                                                     const GALGAS_semanticContext constinArgument_inContext,
                                                                     const GALGAS_mode constinArgument_inMode,
                                                                     GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                     GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                     GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                     GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                     GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_omnibusType var_requiredSourceExpressionType_3782 ;
  const GALGAS_bitbandInstructionAST temp_0 = this ;
  extensionMethod_searchType (constinArgument_inContext.readProperty_mTypeMap (), GALGAS_lstring::init_21__21_ (GALGAS_string ("u1"), temp_0.readProperty_mSourceExpressionLocation (), inCompiler COMMA_HERE), var_requiredSourceExpressionType_3782, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 74)) ;
  GALGAS_objectIR var_sourceExpressionOperand_4250 ;
  const GALGAS_bitbandInstructionAST temp_1 = this ;
  callExtensionMethod_analyzeExpression ((cPtr_expressionAST *) temp_1.readProperty_mSourceExpression ().ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, var_requiredSourceExpressionType_3782, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_sourceExpressionOperand_4250, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 79)) ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_sourceExpressionOperand_4250, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 93)) ;
  }
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    GALGAS_bool test_3 = GALGAS_bool (ComparisonKind::equal, extensionGetter_type (var_sourceExpressionOperand_4250, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 98)).readProperty_omnibusTypeDescriptionName ().objectCompare (function_ctIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 98)))) ;
    if (kBoolTrue == test_3.boolEnum ()) {
      test_3 = var_sourceExpressionOperand_4250.getter_isLiteralInteger (SOURCE_FILE ("instruction-bit-banding.galgas", 98)) ;
    }
    test_2 = test_3.boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_bigint var_value_4734 ;
      GALGAS_omnibusType joker_4711_1 ; // Joker input parameter
      var_sourceExpressionOperand_4250.method_literalInteger (joker_4711_1, var_value_4734, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 99)) ;
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        GALGAS_bool test_5 = GALGAS_bool (ComparisonKind::lowerThan, var_value_4734.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 100)))) ;
        if (kBoolTrue != test_5.boolEnum ()) {
          test_5 = GALGAS_bool (ComparisonKind::greaterThan, var_value_4734.objectCompare (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 100)))) ;
        }
        test_4 = test_5.boolEnum () ;
        if (kBoolTrue == test_4) {
          const GALGAS_bitbandInstructionAST temp_6 = this ;
          TC_Array <FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (temp_6.readProperty_mSourceExpressionLocation (), GALGAS_string ("static value should be 0 or 1"), fixItArray7  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 101)) ;
        }
      }
      if (kBoolFalse == test_4) {
        var_sourceExpressionOperand_4250 = GALGAS_objectIR::class_func_literalInteger (var_requiredSourceExpressionType_3782, var_value_4734  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 103)) ;
      }
    }
  }
  if (kBoolFalse == test_2) {
    enumGalgasBool test_8 = kBoolTrue ;
    if (kBoolTrue == test_8) {
      test_8 = GALGAS_bool (ComparisonKind::notEqual, extensionGetter_type (var_sourceExpressionOperand_4250, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 105)).readProperty_omnibusTypeDescriptionName ().objectCompare (var_requiredSourceExpressionType_3782.readProperty_omnibusTypeDescriptionName ())).boolEnum () ;
      if (kBoolTrue == test_8) {
        const GALGAS_bitbandInstructionAST temp_9 = this ;
        TC_Array <FixItDescription> fixItArray10 ;
        inCompiler->emitSemanticError (temp_9.readProperty_mSourceExpressionLocation (), GALGAS_string ("bit expression type should be $").add_operation (var_requiredSourceExpressionType_3782.readProperty_omnibusTypeDescriptionName (), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 106)), fixItArray10  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 106)) ;
      }
    }
  }
  GALGAS_uint var_registerBitCount_5721 ;
  GALGAS_string var_llvmRegisterAddressName_5787 ;
  const GALGAS_bitbandInstructionAST temp_11 = this ;
  GALGAS_omnibusType joker_5679 ; // Joker input parameter
  GALGAS_sliceMap joker_5742 ; // Joker input parameter
  extensionMethod_controlRegisterLValueSemanticAnalysis (temp_11.readProperty_mControlRegisterLValue (), GALGAS_bool (false), constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, joker_5679, var_registerBitCount_5721, joker_5742, var_llvmRegisterAddressName_5787, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 109)) ;
  GALGAS_omnibusType var_requiredBitExpressionType_6029 ;
  const GALGAS_bitbandInstructionAST temp_12 = this ;
  extensionMethod_searchType (constinArgument_inContext.readProperty_mTypeMap (), GALGAS_lstring::init_21__21_ (GALGAS_string ("u").add_operation (var_registerBitCount_5721.substract_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 129)).getter_significantBitCount (SOURCE_FILE ("instruction-bit-banding.galgas", 129)).getter_string (SOURCE_FILE ("instruction-bit-banding.galgas", 129)), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 129)), temp_12.readProperty_mBitExpressionLocation (), inCompiler COMMA_HERE), var_requiredBitExpressionType_6029, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 128)) ;
  GALGAS_objectIR var_bitExpressionOperand_6485 ;
  const GALGAS_bitbandInstructionAST temp_13 = this ;
  callExtensionMethod_analyzeExpression ((cPtr_expressionAST *) temp_13.readProperty_mBitExpression ().ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, var_requiredBitExpressionType_6029, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_bitExpressionOperand_6485, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 133)) ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_bitExpressionOperand_6485, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 147)) ;
  }
  enumGalgasBool test_14 = kBoolTrue ;
  if (kBoolTrue == test_14) {
    GALGAS_bool test_15 = GALGAS_bool (ComparisonKind::equal, extensionGetter_type (var_bitExpressionOperand_6485, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 152)).readProperty_omnibusTypeDescriptionName ().objectCompare (function_ctIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 152)))) ;
    if (kBoolTrue == test_15.boolEnum ()) {
      test_15 = var_bitExpressionOperand_6485.getter_isLiteralInteger (SOURCE_FILE ("instruction-bit-banding.galgas", 152)) ;
    }
    test_14 = test_15.boolEnum () ;
    if (kBoolTrue == test_14) {
      GALGAS_bigint var_value_6948 ;
      GALGAS_omnibusType joker_6925_1 ; // Joker input parameter
      var_bitExpressionOperand_6485.method_literalInteger (joker_6925_1, var_value_6948, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 153)) ;
      enumGalgasBool test_16 = kBoolTrue ;
      if (kBoolTrue == test_16) {
        GALGAS_bool test_17 = GALGAS_bool (ComparisonKind::lowerThan, var_value_6948.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 154)))) ;
        if (kBoolTrue != test_17.boolEnum ()) {
          test_17 = GALGAS_bool (ComparisonKind::greaterOrEqual, var_value_6948.objectCompare (var_registerBitCount_5721.getter_bigint (SOURCE_FILE ("instruction-bit-banding.galgas", 154)))) ;
        }
        test_16 = test_17.boolEnum () ;
        if (kBoolTrue == test_16) {
          const GALGAS_bitbandInstructionAST temp_18 = this ;
          TC_Array <FixItDescription> fixItArray19 ;
          inCompiler->emitSemanticError (temp_18.readProperty_mBitExpressionLocation (), GALGAS_string ("static value should be >= 0 and <").add_operation (var_registerBitCount_5721.getter_string (SOURCE_FILE ("instruction-bit-banding.galgas", 155)), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 155)), fixItArray19  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 155)) ;
        }
      }
      if (kBoolFalse == test_16) {
        var_bitExpressionOperand_6485 = GALGAS_objectIR::class_func_literalInteger (var_requiredBitExpressionType_6029, var_value_6948  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 157)) ;
      }
    }
  }
  if (kBoolFalse == test_14) {
    enumGalgasBool test_20 = kBoolTrue ;
    if (kBoolTrue == test_20) {
      test_20 = GALGAS_bool (ComparisonKind::notEqual, extensionGetter_type (var_bitExpressionOperand_6485, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 159)).readProperty_omnibusTypeDescriptionName ().objectCompare (var_requiredBitExpressionType_6029.readProperty_omnibusTypeDescriptionName ())).boolEnum () ;
      if (kBoolTrue == test_20) {
        const GALGAS_bitbandInstructionAST temp_21 = this ;
        TC_Array <FixItDescription> fixItArray22 ;
        inCompiler->emitSemanticError (temp_21.readProperty_mBitExpressionLocation (), GALGAS_string ("bit expression type should be $").add_operation (var_requiredBitExpressionType_6029.readProperty_omnibusTypeDescriptionName (), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 160)), fixItArray22  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 160)) ;
      }
    }
  }
  ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_bitbandInstructionIR::init_21__21__21__21__21__21__21_ (var_llvmRegisterAddressName_5787, var_bitExpressionOperand_6485, var_sourceExpressionOperand_4250, constinArgument_inContext.readProperty_mTargetParameters ().readProperty_mBitbandRegisterBaseAddress ().readProperty_bigint (), constinArgument_inContext.readProperty_mTargetParameters ().readProperty_mBitbandRegisterRelocationAddress ().readProperty_bigint (), constinArgument_inContext.readProperty_mTargetParameters ().readProperty_mBitbandRegisterOffsetMultiplier ().readProperty_bigint (), constinArgument_inContext.readProperty_mTargetParameters ().readProperty_mBitbandRegisterBitMultiplier ().readProperty_bigint (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 163)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@bitbandInstructionIR llvmInstructionCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_bitbandInstructionIR::method_llvmInstructionCode (GALGAS_string & ioArgument_ioLLVMcode,
                                                            const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                            GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                            Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_idx_9621 = ioArgument_ioGenerationAdds.readProperty_mUniqueIndex ().getter_string (SOURCE_FILE ("instruction-bit-banding.galgas", 205)) ;
  ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 206)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--- Bit band\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 207)) ;
  const GALGAS_bitbandInstructionIR temp_0 = this ;
  const GALGAS_bitbandInstructionIR temp_1 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %byte.offset.").add_operation (var_idx_9621, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 208)).add_operation (GALGAS_string (" = sub i32 "), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 208)).add_operation (temp_0.readProperty_mRegisterAddressLLVMname (), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 208)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 208)).add_operation (temp_1.readProperty_mBitbandRegisterBaseAddress ().getter_string (SOURCE_FILE ("instruction-bit-banding.galgas", 208)), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 208)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 208)), inCompiler  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 208)) ;
  const GALGAS_bitbandInstructionIR temp_2 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %byte.offset.").add_operation (var_idx_9621, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 209)).add_operation (GALGAS_string (".mul = mul i32 %byte.offset."), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 209)).add_operation (var_idx_9621, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 209)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 209)).add_operation (temp_2.readProperty_mBitbandRegisterOffsetMultiplier ().getter_string (SOURCE_FILE ("instruction-bit-banding.galgas", 209)), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 209)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 209)), inCompiler  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 209)) ;
  const GALGAS_bitbandInstructionIR temp_3 = this ;
  const GALGAS_bitbandInstructionIR temp_4 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %bit.offset.").add_operation (var_idx_9621, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 210)).add_operation (GALGAS_string (".mul = mul i32 "), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 210)).add_operation (extensionGetter_llvmName (temp_3.readProperty_mBitExpressionOperand (), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 210)), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 210)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 210)).add_operation (temp_4.readProperty_mBitbandRegisterBitMultiplier ().getter_string (SOURCE_FILE ("instruction-bit-banding.galgas", 210)), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 210)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 210)), inCompiler  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 210)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %offset.").add_operation (var_idx_9621, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 211)).add_operation (GALGAS_string (" = add i32 %byte.offset."), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 211)).add_operation (var_idx_9621, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 211)).add_operation (GALGAS_string (".mul, %bit.offset."), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 211)).add_operation (var_idx_9621, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 211)).add_operation (GALGAS_string (".mul\n"), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 211)), inCompiler  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 211)) ;
  const GALGAS_bitbandInstructionIR temp_5 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %bit.word.addr.").add_operation (var_idx_9621, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 212)).add_operation (GALGAS_string (" = add i32 %offset."), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 212)).add_operation (var_idx_9621, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 212)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 212)).add_operation (temp_5.readProperty_mBitbandRegisterRelocationAddress ().getter_string (SOURCE_FILE ("instruction-bit-banding.galgas", 212)), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 212)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 212)), inCompiler  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 212)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %ptr.").add_operation (var_idx_9621, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 213)).add_operation (GALGAS_string (" = inttoptr i32 %bit.word.addr."), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 213)).add_operation (var_idx_9621, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 213)).add_operation (GALGAS_string (" to i32*\n"), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 213)), inCompiler  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 213)) ;
  const GALGAS_bitbandInstructionIR temp_6 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %value.").add_operation (var_idx_9621, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 214)).add_operation (GALGAS_string (" = zext i1 "), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 214)).add_operation (extensionGetter_llvmName (temp_6.readProperty_mSourceExpressionOperand (), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 214)), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 214)).add_operation (GALGAS_string (" to i32\n"), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 214)), inCompiler  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 214)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store i32 %value.").add_operation (var_idx_9621, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 215)).add_operation (GALGAS_string (", i32* %ptr."), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 215)).add_operation (var_idx_9621, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 215)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 215)), inCompiler  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 215)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@varInstructionWithAssignmentAST noteInstructionTypesInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_varInstructionWithAssignmentAST::method_noteInstructionTypesInPrecedenceGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_varInstructionWithAssignmentAST temp_1 = this ;
    test_0 = GALGAS_bool (ComparisonKind::notEqual, temp_1.readProperty_mOptionalTypeName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      const GALGAS_varInstructionWithAssignmentAST temp_2 = this ;
      ioArgument_ioGraph.setter_noteNode (temp_2.readProperty_mOptionalTypeName () COMMA_SOURCE_FILE ("instruction-var.galgas", 97)) ;
      }
    }
  }
  const GALGAS_varInstructionWithAssignmentAST temp_3 = this ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((cPtr_expressionAST *) temp_3.readProperty_mSourceExpression ().ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 99)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@varDeclarationInstructionAST noteInstructionTypesInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_varDeclarationInstructionAST::method_noteInstructionTypesInPrecedenceGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                      Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GALGAS_varDeclarationInstructionAST temp_0 = this ;
  ioArgument_ioGraph.setter_noteNode (temp_0.readProperty_mTypeName () COMMA_SOURCE_FILE ("instruction-var.galgas", 105)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@varInstructionWithAssignmentAST instructionSemanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_varInstructionWithAssignmentAST::method_instructionSemanticAnalysis (const GALGAS_omnibusType constinArgument_inSelfType,
                                                                               const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                                                               const GALGAS_semanticContext constinArgument_inContext,
                                                                               const GALGAS_mode constinArgument_inMode,
                                                                               GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                               GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                               GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                               GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                               GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_varInstructionWithAssignmentAST temp_0 = this ;
  GALGAS_omnibusType temp_1 ;
  const enumGalgasBool test_2 = GALGAS_bool (ComparisonKind::equal, temp_0.readProperty_mOptionalTypeName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_2) {
    temp_1 = function_voidType (inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 124)) ;
  }else if (kBoolFalse == test_2) {
    const GALGAS_varInstructionWithAssignmentAST temp_3 = this ;
    temp_1 = extensionGetter_type (extensionGetter_searchKey (constinArgument_inContext.readProperty_mTypeMap (), temp_3.readProperty_mOptionalTypeName (), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 125)), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 125)) ;
  }
  GALGAS_omnibusType var_targetType_5072 = temp_1 ;
  GALGAS_objectIR var_sourcePossibleReference_5643 ;
  const GALGAS_varInstructionWithAssignmentAST temp_4 = this ;
  callExtensionMethod_analyzeExpression ((cPtr_expressionAST *) temp_4.readProperty_mSourceExpression ().ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, var_targetType_5072, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_sourcePossibleReference_5643, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 128)) ;
  const GALGAS_varInstructionWithAssignmentAST temp_5 = this ;
  GALGAS_objectIR var_result_5677 = function_checkAssignmentCompatibility (constinArgument_inContext.readProperty_mAssignmentOperatorMap (), var_sourcePossibleReference_5643, var_targetType_5072, temp_5.readProperty_mVarName ().readProperty_location (), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 141)) ;
  const GALGAS_varInstructionWithAssignmentAST temp_6 = this ;
  const GALGAS_varInstructionWithAssignmentAST temp_7 = this ;
  GALGAS_lstring var_omnibusLocalVariableName_5937 = GALGAS_lstring::init_21__21_ (temp_6.readProperty_mVarName ().readProperty_string ().add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 149)).add_operation (ioArgument_ioTemporaries.readProperty_mTemporaryIndex ().getter_string (SOURCE_FILE ("instruction-var.galgas", 149)), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 149)), temp_7.readProperty_mVarName ().readProperty_location (), inCompiler COMMA_HERE) ;
  ioArgument_ioTemporaries.mProperty_mTemporaryIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("instruction-var.galgas", 150)) ;
  {
  const GALGAS_varInstructionWithAssignmentAST temp_8 = this ;
  extensionSetter_insertLocalVariable (ioArgument_ioUniversalMap, temp_8.readProperty_mVarName (), extensionGetter_type (var_result_5677, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 151)), var_omnibusLocalVariableName_5937, GALGAS_valuedObjectState::class_func_hasUnreadValue (SOURCE_FILE ("instruction-var.galgas", 151)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 151)) ;
  }
  ioArgument_ioAllocaList.addAssign_operation (function_llvmNameForLocalVariable (var_omnibusLocalVariableName_5937.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 153)), extensionGetter_type (var_result_5677, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 153)), GALGAS_bool (false)  COMMA_SOURCE_FILE ("instruction-var.galgas", 153)) ;
  {
  const GALGAS_varInstructionWithAssignmentAST temp_9 = this ;
  extensionSetter_appendAssignmentIR (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, constinArgument_inContext.readProperty_mAssignmentOperatorMap (), ioArgument_ioAllocaList, extensionGetter_type (var_result_5677, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 159)), function_llvmNameForLocalVariable (var_omnibusLocalVariableName_5937.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 160)), var_sourcePossibleReference_5643, temp_9.readProperty_mVarName ().readProperty_location (), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 155)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@varDeclarationInstructionAST instructionSemanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_varDeclarationInstructionAST::method_instructionSemanticAnalysis (const GALGAS_omnibusType /* constinArgument_inSelfType */,
                                                                            const GALGAS_routineAttributes /* constinArgument_inRoutineAttributes */,
                                                                            const GALGAS_semanticContext constinArgument_inContext,
                                                                            const GALGAS_mode /* constinArgument_inMode */,
                                                                            GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                            GALGAS_staticEntityMap & /* ioArgument_ioStaticEntityMap */,
                                                                            GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                            GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                            GALGAS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_varDeclarationInstructionAST temp_0 = this ;
  GALGAS_omnibusType var_targetType_7324 = extensionGetter_type (extensionGetter_searchKey (constinArgument_inContext.readProperty_mTypeMap (), temp_0.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 180)), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 180)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = callExtensionGetter_isCompileTimeType ((const cPtr_omnibusType *) var_targetType_7324.ptr (), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 182)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_varDeclarationInstructionAST temp_2 = this ;
      TC_Array <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mVarName ().readProperty_location (), GALGAS_string ("$").add_operation (var_targetType_7324.readProperty_omnibusTypeDescriptionName (), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 183)).add_operation (GALGAS_string (" type is a compile time type, and is not instanciable"), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 183)), fixItArray3  COMMA_SOURCE_FILE ("instruction-var.galgas", 183)) ;
    }
  }
  if (kBoolFalse == test_1) {
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = callExtensionGetter_instanciable ((const cPtr_omnibusType *) var_targetType_7324.ptr (), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 184)).operator_not (SOURCE_FILE ("instruction-var.galgas", 184)).boolEnum () ;
      if (kBoolTrue == test_4) {
        const GALGAS_varDeclarationInstructionAST temp_5 = this ;
        TC_Array <FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (temp_5.readProperty_mVarName ().readProperty_location (), GALGAS_string ("$").add_operation (var_targetType_7324.readProperty_omnibusTypeDescriptionName (), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 185)).add_operation (GALGAS_string (" type is not instanciable"), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 185)), fixItArray6  COMMA_SOURCE_FILE ("instruction-var.galgas", 185)) ;
      }
    }
  }
  const GALGAS_varDeclarationInstructionAST temp_7 = this ;
  const GALGAS_varDeclarationInstructionAST temp_8 = this ;
  GALGAS_lstring var_omnibusName_7748 = GALGAS_lstring::init_21__21_ (temp_7.readProperty_mVarName ().readProperty_string ().add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 188)).add_operation (ioArgument_ioTemporaries.readProperty_mTemporaryIndex ().getter_string (SOURCE_FILE ("instruction-var.galgas", 188)), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 188)), temp_8.readProperty_mVarName ().readProperty_location (), inCompiler COMMA_HERE) ;
  ioArgument_ioTemporaries.mProperty_mTemporaryIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("instruction-var.galgas", 189)) ;
  {
  const GALGAS_varDeclarationInstructionAST temp_9 = this ;
  extensionSetter_insertLocalVariable (ioArgument_ioUniversalMap, temp_9.readProperty_mVarName (), var_targetType_7324, var_omnibusName_7748, GALGAS_valuedObjectState::class_func_noValue (SOURCE_FILE ("instruction-var.galgas", 190)), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 190)) ;
  }
  ioArgument_ioAllocaList.addAssign_operation (function_llvmNameForLocalVariable (var_omnibusName_7748.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 192)), var_targetType_7324, GALGAS_bool (false)  COMMA_SOURCE_FILE ("instruction-var.galgas", 192)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@letInstructionWithAssignmentAST noteInstructionTypesInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_letInstructionWithAssignmentAST::method_noteInstructionTypesInPrecedenceGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_letInstructionWithAssignmentAST temp_1 = this ;
    test_0 = GALGAS_bool (ComparisonKind::notEqual, temp_1.readProperty_mOptionalTypeName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      const GALGAS_letInstructionWithAssignmentAST temp_2 = this ;
      ioArgument_ioGraph.setter_noteNode (temp_2.readProperty_mOptionalTypeName () COMMA_SOURCE_FILE ("instruction-let.galgas", 48)) ;
      }
    }
  }
  const GALGAS_letInstructionWithAssignmentAST temp_3 = this ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((cPtr_expressionAST *) temp_3.readProperty_mSourceExpression ().ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 50)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@letInstructionWithAssignmentAST instructionSemanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_letInstructionWithAssignmentAST::method_instructionSemanticAnalysis (const GALGAS_omnibusType constinArgument_inSelfType,
                                                                               const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                                                               const GALGAS_semanticContext constinArgument_inContext,
                                                                               const GALGAS_mode constinArgument_inMode,
                                                                               GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                               GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                               GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                               GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                               GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_letInstructionWithAssignmentAST temp_0 = this ;
  GALGAS_omnibusType temp_1 ;
  const enumGalgasBool test_2 = GALGAS_bool (ComparisonKind::equal, temp_0.readProperty_mOptionalTypeName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_2) {
    temp_1 = function_voidType (inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 69)) ;
  }else if (kBoolFalse == test_2) {
    const GALGAS_letInstructionWithAssignmentAST temp_3 = this ;
    temp_1 = extensionGetter_type (extensionGetter_searchKey (constinArgument_inContext.readProperty_mTypeMap (), temp_3.readProperty_mOptionalTypeName (), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 70)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 70)) ;
  }
  GALGAS_omnibusType var_targetType_3254 = temp_1 ;
  GALGAS_objectIR var_expressionResult_3821 ;
  const GALGAS_letInstructionWithAssignmentAST temp_4 = this ;
  callExtensionMethod_analyzeExpression ((cPtr_expressionAST *) temp_4.readProperty_mSourceExpression ().ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, var_targetType_3254, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_expressionResult_3821, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 73)) ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_expressionResult_3821, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 86)) ;
  }
  const GALGAS_letInstructionWithAssignmentAST temp_5 = this ;
  GALGAS_objectIR var_result_3982 = function_checkAssignmentCompatibility (constinArgument_inContext.readProperty_mAssignmentOperatorMap (), var_expressionResult_3821, var_targetType_3254, temp_5.readProperty_mConstantName ().readProperty_location (), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 91)) ;
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    test_6 = callExtensionGetter_instanciable ((const cPtr_omnibusType *) extensionGetter_type (var_result_3982, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 99)).ptr (), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 99)).operator_not (SOURCE_FILE ("instruction-let.galgas", 99)).boolEnum () ;
    if (kBoolTrue == test_6) {
      const GALGAS_letInstructionWithAssignmentAST temp_7 = this ;
      TC_Array <FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (temp_7.readProperty_mConstantName ().readProperty_location (), extensionGetter_omnibusTypeDescriptionName (var_result_3982, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 100)).add_operation (GALGAS_string (" type is not instanciable"), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 100)), fixItArray8  COMMA_SOURCE_FILE ("instruction-let.galgas", 100)) ;
      var_result_3982.drop () ; // Release error dropped variable
    }
  }
  const GALGAS_letInstructionWithAssignmentAST temp_9 = this ;
  const GALGAS_letInstructionWithAssignmentAST temp_10 = this ;
  GALGAS_lstring var_omnibusName_4399 = GALGAS_lstring::init_21__21_ (temp_9.readProperty_mConstantName ().readProperty_string ().add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 103)).add_operation (ioArgument_ioTemporaries.readProperty_mTemporaryIndex ().getter_string (SOURCE_FILE ("instruction-let.galgas", 103)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 103)), temp_10.readProperty_mConstantName ().readProperty_location (), inCompiler COMMA_HERE) ;
  ioArgument_ioTemporaries.mProperty_mTemporaryIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("instruction-let.galgas", 104)) ;
  enumGalgasBool test_11 = kBoolTrue ;
  if (kBoolTrue == test_11) {
    test_11 = GALGAS_bool (ComparisonKind::notEqual, extensionGetter_omnibusTypeDescriptionName (var_result_3982, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 105)).objectCompare (function_ctIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 105)))).boolEnum () ;
    if (kBoolTrue == test_11) {
      ioArgument_ioAllocaList.addAssign_operation (function_llvmNameForLocalVariable (var_omnibusName_4399.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 106)), extensionGetter_type (var_result_3982, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 106)), GALGAS_bool (false)  COMMA_SOURCE_FILE ("instruction-let.galgas", 106)) ;
      {
      extensionSetter_appendStoreTemporaryReference (ioArgument_ioInstructionGenerationList, extensionGetter_type (var_result_3982, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 108)), function_llvmNameForLocalVariable (var_omnibusName_4399.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 109)), var_result_3982, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 107)) ;
      }
    }
  }
  {
  const GALGAS_letInstructionWithAssignmentAST temp_12 = this ;
  extensionSetter_insertLocalConstant (ioArgument_ioUniversalMap, temp_12.readProperty_mConstantName (), GALGAS_bool (false), extensionGetter_type (var_result_3982, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 113)), var_omnibusName_4399, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 113)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Routine 'enter_NOP_function&'
//
//--------------------------------------------------------------------------------------------------

void routine_enter_5F_NOP_5F_function_26_ (GALGAS_declarationListAST & ioArgument_ioDeclarationListAST,
                                           Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstringlist temp_0 = GALGAS_lstringlist::init (inCompiler COMMA_SOURCE_FILE ("instruction-nop.galgas", 14)) ;
  temp_0.enterElement (GALGAS_lstringlist_2D_element::init_21_ (function_noUnusedWarningAttribute (inCompiler COMMA_SOURCE_FILE ("instruction-nop.galgas", 14)).getter_nowhere (SOURCE_FILE ("instruction-nop.galgas", 14)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("instruction-nop.galgas", 14)) ;
  GALGAS_lstringlist var_attributeList_893 = temp_0 ;
  GALGAS_instructionListAST temp_1 = GALGAS_instructionListAST::init (inCompiler COMMA_SOURCE_FILE ("instruction-nop.galgas", 15)) ;
  temp_1.enterElement (GALGAS_instructionListAST_2D_element::init_21_ (GALGAS_instructionNOP::init_21_ (GALGAS_location::class_func_nowhere (SOURCE_FILE ("instruction-nop.galgas", 15)), inCompiler COMMA_HERE), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("instruction-nop.galgas", 15)) ;
  GALGAS_instructionListAST var_instructionList_964 = temp_1 ;
  GALGAS_routineFormalArgumentListAST temp_2 = GALGAS_routineFormalArgumentListAST::init (inCompiler COMMA_SOURCE_FILE ("instruction-nop.galgas", 23)) ;
  ioArgument_ioDeclarationListAST.addAssign_operation (GALGAS_functionDeclarationAST::init_21__21__21__21__21__21__21__21__21_ (GALGAS_mode::class_func_anySafeMode (SOURCE_FILE ("instruction-nop.galgas", 18)), GALGAS_bool (true), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-nop.galgas", 20)), GALGAS_string ("nop").getter_nowhere (SOURCE_FILE ("instruction-nop.galgas", 21)), var_attributeList_893, temp_2, GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-nop.galgas", 24)), var_instructionList_964, GALGAS_location::class_func_nowhere (SOURCE_FILE ("instruction-nop.galgas", 26)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-nop.galgas", 17)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@instructionNOP noteInstructionTypesInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_instructionNOP::method_noteInstructionTypesInPrecedenceGraph (GALGAS_semanticTypePrecedenceGraph & /* ioArgument_ioGraph */,
                                                                        Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@instructionNOP instructionSemanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_instructionNOP::method_instructionSemanticAnalysis (const GALGAS_omnibusType /* constinArgument_inSelfType */,
                                                              const GALGAS_routineAttributes /* constinArgument_inRoutineAttributes */,
                                                              const GALGAS_semanticContext /* constinArgument_inContext */,
                                                              const GALGAS_mode /* constinArgument_inMode */,
                                                              GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                              GALGAS_staticEntityMap & /* ioArgument_ioStaticEntityMap */,
                                                              GALGAS_universalValuedObjectMap & /* ioArgument_ioUniversalMap */,
                                                              GALGAS_allocaList & /* ioArgument_ioAllocaList */,
                                                              GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  {
  extensionSetter_appendNOP (ioArgument_ioInstructionGenerationList, inCompiler COMMA_SOURCE_FILE ("instruction-nop.galgas", 52)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@panicInstructionAST noteInstructionTypesInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_panicInstructionAST::method_noteInstructionTypesInPrecedenceGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_panicInstructionAST temp_0 = this ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((cPtr_expressionAST *) temp_0.readProperty_mCodeExpression ().ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 33)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@panicInstructionAST instructionSemanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_panicInstructionAST::method_instructionSemanticAnalysis (const GALGAS_omnibusType constinArgument_inSelfType,
                                                                   const GALGAS_routineAttributes /* constinArgument_inRoutineAttributes */,
                                                                   const GALGAS_semanticContext constinArgument_inContext,
                                                                   const GALGAS_mode constinArgument_inMode,
                                                                   GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                   GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                   GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                   GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                   GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (ComparisonKind::equal, constinArgument_inMode.objectCompare (GALGAS_mode::class_func_panicMode (SOURCE_FILE ("instruction-panic.galgas", 52)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_panicInstructionAST temp_1 = this ;
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mInstructionLocation (), GALGAS_string ("operations that can generate panic are not allowed in ").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 53)), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 53)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 53)), fixItArray2  COMMA_SOURCE_FILE ("instruction-panic.galgas", 53)) ;
    }
  }
  GALGAS_instructionListIR temp_3 = GALGAS_instructionListIR::init (inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 56)) ;
  GALGAS_instructionListIR var_unusedInstructionListIR_3027 = temp_3 ;
  GALGAS_objectIR var_result_3439 ;
  const GALGAS_panicInstructionAST temp_4 = this ;
  callExtensionMethod_analyzeExpression ((cPtr_expressionAST *) temp_4.readProperty_mCodeExpression ().ptr (), constinArgument_inSelfType, GALGAS_routineAttributes::init (inCompiler COMMA_HERE), constinArgument_inContext.readProperty_mPanicCodeType (), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_unusedInstructionListIR_3027, var_result_3439, inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 57)) ;
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    GALGAS_bool test_6 = GALGAS_bool (ComparisonKind::greaterThan, var_unusedInstructionListIR_3027.getter_count (SOURCE_FILE ("instruction-panic.galgas", 72)).objectCompare (GALGAS_uint (uint32_t (0U)))) ;
    if (kBoolTrue != test_6.boolEnum ()) {
      test_6 = var_result_3439.getter_isLiteralInteger (SOURCE_FILE ("instruction-panic.galgas", 73)).operator_not (SOURCE_FILE ("instruction-panic.galgas", 73)) ;
    }
    GALGAS_bool test_7 = test_6 ;
    if (kBoolTrue != test_7.boolEnum ()) {
      test_7 = GALGAS_bool (ComparisonKind::notEqual, extensionGetter_omnibusTypeDescriptionName (var_result_3439, inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 74)).objectCompare (function_ctIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 74)))) ;
    }
    test_5 = test_7.boolEnum () ;
    if (kBoolTrue == test_5) {
      const GALGAS_panicInstructionAST temp_8 = this ;
      TC_Array <FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (temp_8.readProperty_mInstructionLocation (), GALGAS_string ("throw expression should be a literal integer"), fixItArray9  COMMA_SOURCE_FILE ("instruction-panic.galgas", 75)) ;
    }
  }
  if (kBoolFalse == test_5) {
    GALGAS_bigint var_min_3805 ;
    GALGAS_bigint var_max_3818 ;
    GALGAS_bool joker_3822_2 ; // Joker input parameter
    GALGAS_uint joker_3822_1 ; // Joker input parameter
    constinArgument_inContext.readProperty_mPanicCodeType ().readProperty_kind ().method_integer (var_min_3805, var_max_3818, joker_3822_2, joker_3822_1, inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 77)) ;
    GALGAS_bigint var_throwValue_3869 ;
    GALGAS_omnibusType joker_3854_1 ; // Joker input parameter
    var_result_3439.method_literalInteger (joker_3854_1, var_throwValue_3869, inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 78)) ;
    enumGalgasBool test_10 = kBoolTrue ;
    if (kBoolTrue == test_10) {
      GALGAS_bool test_11 = GALGAS_bool (ComparisonKind::lowerThan, var_throwValue_3869.objectCompare (var_min_3805)) ;
      if (kBoolTrue != test_11.boolEnum ()) {
        test_11 = GALGAS_bool (ComparisonKind::greaterThan, var_throwValue_3869.objectCompare (var_max_3818)) ;
      }
      test_10 = test_11.boolEnum () ;
      if (kBoolTrue == test_10) {
        const GALGAS_panicInstructionAST temp_12 = this ;
        TC_Array <FixItDescription> fixItArray13 ;
        inCompiler->emitSemanticError (temp_12.readProperty_mInstructionLocation (), GALGAS_string ("panic expression cannot be represented by an `").add_operation (constinArgument_inContext.readProperty_mPanicCodeType ().readProperty_omnibusTypeDescriptionName (), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 81)), fixItArray13  COMMA_SOURCE_FILE ("instruction-panic.galgas", 80)) ;
      }
    }
    if (kBoolFalse == test_10) {
      enumGalgasBool test_14 = kBoolTrue ;
      if (kBoolTrue == test_14) {
        test_14 = GALGAS_bool (gOption_omnibus_5F_options_noPanicGeneration.readProperty_value ()).operator_not (SOURCE_FILE ("instruction-panic.galgas", 82)).boolEnum () ;
        if (kBoolTrue == test_14) {
          const GALGAS_panicInstructionAST temp_15 = this ;
          ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_panicInstructionIR::init_21__21_ (temp_15.readProperty_mInstructionLocation (), var_throwValue_3869, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-panic.galgas", 83)) ;
        }
      }
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@panicInstructionIR llvmInstructionCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_panicInstructionIR::method_llvmInstructionCode (GALGAS_string & ioArgument_ioLLVMcode,
                                                          const GALGAS_generationContext constinArgument_inGenerationContext,
                                                          GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_panicInstructionIR temp_0 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @").add_operation (function_panicRoutineNameForLocationFile (temp_0.readProperty_mThrowLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 107)).getter_assemblerRepresentation (SOURCE_FILE ("instruction-panic.galgas", 107)), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 107)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 107)), inCompiler  COMMA_SOURCE_FILE ("instruction-panic.galgas", 107)) ;
  const GALGAS_panicInstructionIR temp_1 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inGenerationContext.readProperty_mPanicLineLLVMType ().ptr (), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 108)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 108)).add_operation (temp_1.readProperty_mThrowLocation ().getter_endLine (inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 108)).getter_string (SOURCE_FILE ("instruction-panic.galgas", 108)), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 108)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 108)), inCompiler  COMMA_SOURCE_FILE ("instruction-panic.galgas", 108)) ;
  const GALGAS_panicInstructionIR temp_2 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inGenerationContext.readProperty_mPanicCodeLLVMType ().ptr (), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 109)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 109)).add_operation (temp_2.readProperty_mPanicCode ().getter_string (SOURCE_FILE ("instruction-panic.galgas", 109)), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 109)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 109)), inCompiler  COMMA_SOURCE_FILE ("instruction-panic.galgas", 109)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@panicInstructionIR enterAccessibleEntities'
//
//--------------------------------------------------------------------------------------------------

void cPtr_panicInstructionIR::method_enterAccessibleEntities (GALGAS_stringset & ioArgument_ioInvokedRoutineSet,
                                                              GALGAS_uint & /* ioArgument_ioMaxBranchOfOnInstructions */,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_panicInstructionIR temp_0 = this ;
  ioArgument_ioInvokedRoutineSet.addAssign_operation (function_panicRoutineNameForLocationFile (temp_0.readProperty_mThrowLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 118))  COMMA_SOURCE_FILE ("instruction-panic.galgas", 118)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ifInstructionAST noteInstructionTypesInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ifInstructionAST::method_noteInstructionTypesInPrecedenceGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_ifInstructionAST temp_0 = this ;
  extensionMethod_noteInstructionListTypesInPrecedenceGraph (temp_0.readProperty_mThenInstructionList (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 89)) ;
  const GALGAS_ifInstructionAST temp_1 = this ;
  extensionMethod_noteInstructionListTypesInPrecedenceGraph (temp_1.readProperty_mElseInstructionList (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 90)) ;
  const GALGAS_ifInstructionAST temp_2 = this ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((cPtr_expressionAST *) temp_2.readProperty_mTestExpression ().ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 91)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ifInstructionAST instructionSemanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ifInstructionAST::method_instructionSemanticAnalysis (const GALGAS_omnibusType constinArgument_inSelfType,
                                                                const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                                                const GALGAS_semanticContext constinArgument_inContext,
                                                                const GALGAS_mode constinArgument_inMode,
                                                                GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_objectIR var_testResult_5119 ;
  const GALGAS_ifInstructionAST temp_0 = this ;
  callExtensionMethod_analyzeExpression ((cPtr_expressionAST *) temp_0.readProperty_mTestExpression ().ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, function_voidType (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 113)), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_testResult_5119, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 110)) ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_testResult_5119, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 123)) ;
  }
  GALGAS_implicitBooleanConversionResult var_booleanResult_5494 ;
  const GALGAS_ifInstructionAST temp_1 = this ;
  extensionMethod_generateConvertToBooleanCode (constinArgument_inContext.readProperty_mImplicitConversionToBooleanMap (), var_testResult_5119, temp_1.readProperty_mTestExpressionEndLocation (), ioArgument_ioTemporaries, ioArgument_ioInstructionGenerationList, ioArgument_ioAllocaList, var_booleanResult_5494, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 128)) ;
  switch (var_booleanResult_5494.enumValue ()) {
  case GALGAS_implicitBooleanConversionResult::Enumeration::invalid:
    break ;
  case GALGAS_implicitBooleanConversionResult::Enumeration::enum_compileTime:
    {
      GALGAS_bool extractedValue_5564__0 ;
      var_booleanResult_5494.getAssociatedValuesFor_compileTime (extractedValue_5564__0) ;
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        const GALGAS_ifInstructionAST temp_3 = this ;
        test_2 = temp_3.readProperty_mStaticIfExpression ().operator_not (SOURCE_FILE ("instruction-if.galgas", 139)).boolEnum () ;
        if (kBoolTrue == test_2) {
          const GALGAS_ifInstructionAST temp_4 = this ;
          TC_Array <FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticWarning (temp_4.readProperty_mTestExpressionEndLocation (), GALGAS_string ("'if' expression is static (insert @").add_operation (function_staticAttribute (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 140)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 140)).add_operation (GALGAS_string (" attribute)"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 140)), fixItArray5  COMMA_SOURCE_FILE ("instruction-if.galgas", 140)) ;
        }
      }
    }
    break ;
  case GALGAS_implicitBooleanConversionResult::Enumeration::enum_llvmVariable:
    {
      GALGAS_string extractedValue_5762__0 ;
      var_booleanResult_5494.getAssociatedValuesFor_llvmVariable (extractedValue_5762__0) ;
      enumGalgasBool test_6 = kBoolTrue ;
      if (kBoolTrue == test_6) {
        const GALGAS_ifInstructionAST temp_7 = this ;
        test_6 = temp_7.readProperty_mStaticIfExpression ().boolEnum () ;
        if (kBoolTrue == test_6) {
          const GALGAS_ifInstructionAST temp_8 = this ;
          TC_Array <FixItDescription> fixItArray9 ;
          inCompiler->emitSemanticError (temp_8.readProperty_mTestExpressionEndLocation (), GALGAS_string ("'if' expression is not static"), fixItArray9  COMMA_SOURCE_FILE ("instruction-if.galgas", 144)) ;
        }
      }
    }
    break ;
  }
  {
  extensionSetter_openOverrideForSelectBlock (ioArgument_ioUniversalMap, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 147)) ;
  }
  GALGAS_instructionListIR temp_10 = GALGAS_instructionListIR::init (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 149)) ;
  GALGAS_instructionListIR var_thenInstructionGenerationList_6007 = temp_10 ;
  const GALGAS_ifInstructionAST temp_11 = this ;
  const GALGAS_ifInstructionAST temp_12 = this ;
  extensionMethod_analyzeBranchInstructionList (temp_11.readProperty_mThenInstructionList (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, temp_12.readProperty_mEndOfThenInstructionList (), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_thenInstructionGenerationList_6007, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 150)) ;
  GALGAS_instructionListIR temp_13 = GALGAS_instructionListIR::init (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 163)) ;
  GALGAS_instructionListIR var_elseInstructionGenerationList_6511 = temp_13 ;
  const GALGAS_ifInstructionAST temp_14 = this ;
  const GALGAS_ifInstructionAST temp_15 = this ;
  extensionMethod_analyzeBranchInstructionList (temp_14.readProperty_mElseInstructionList (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, temp_15.readProperty_mEndOfElseInstructionList (), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_elseInstructionGenerationList_6511, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 164)) ;
  {
  const GALGAS_ifInstructionAST temp_16 = this ;
  extensionSetter_closeOverride (ioArgument_ioUniversalMap, temp_16.readProperty_mEndOf_5F_if_5F_instruction (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 176)) ;
  }
  const GALGAS_ifInstructionAST temp_17 = this ;
  ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_ifInstructionIR::init_21__21__21__21_ (extensionGetter_llvmName (var_booleanResult_5494, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 179)), temp_17.readProperty_mTestExpressionEndLocation (), var_thenInstructionGenerationList_6007, var_elseInstructionGenerationList_6511, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-if.galgas", 178)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ifInstructionIR llvmInstructionCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ifInstructionIR::method_llvmInstructionCode (GALGAS_string & ioArgument_ioLLVMcode,
                                                       const GALGAS_generationContext constinArgument_inGenerationContext,
                                                       GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                       Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_labelTrue_8153 = GALGAS_string ("if.").add_operation (ioArgument_ioGenerationAdds.readProperty_mUniqueIndex ().getter_string (SOURCE_FILE ("instruction-if.galgas", 205)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 205)).add_operation (GALGAS_string (".true"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 205)) ;
  GALGAS_string var_labelFalse_8219 = GALGAS_string ("if.").add_operation (ioArgument_ioGenerationAdds.readProperty_mUniqueIndex ().getter_string (SOURCE_FILE ("instruction-if.galgas", 206)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 206)).add_operation (GALGAS_string (".false"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 206)) ;
  GALGAS_string var_labelEnd_8287 = GALGAS_string ("if.").add_operation (ioArgument_ioGenerationAdds.readProperty_mUniqueIndex ().getter_string (SOURCE_FILE ("instruction-if.galgas", 207)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 207)).add_operation (GALGAS_string (".end"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 207)) ;
  ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 208)) ;
  const GALGAS_ifInstructionIR temp_0 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (temp_0.readProperty_mLLVMTestName (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 209)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 209)).add_operation (var_labelTrue_8153, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 209)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 209)).add_operation (var_labelFalse_8219, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 209)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 209)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 209)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelTrue_8153.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 211)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 211)) ;
  const GALGAS_ifInstructionIR temp_1 = this ;
  extensionMethod_instructionListLLVMCode (temp_1.readProperty_mThenInstructionGenerationList (), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 212)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_labelEnd_8287, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 213)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 213)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 213)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelFalse_8219.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 215)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 215)) ;
  const GALGAS_ifInstructionIR temp_2 = this ;
  extensionMethod_instructionListLLVMCode (temp_2.readProperty_mElseInstructionGenerationList (), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 216)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_labelEnd_8287, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 217)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 217)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 217)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelEnd_8287.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 219)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 219)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ifInstructionIR enterAccessibleEntities'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ifInstructionIR::method_enterAccessibleEntities (GALGAS_stringset & ioArgument_ioInvokedRoutineSet,
                                                           GALGAS_uint & ioArgument_ioMaxBranchOfOnInstructions,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_ifInstructionIR temp_0 = this ;
  extensionMethod_enterAccessibleEntities (temp_0.readProperty_mThenInstructionGenerationList (), ioArgument_ioInvokedRoutineSet, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 228)) ;
  const GALGAS_ifInstructionIR temp_1 = this ;
  extensionMethod_enterAccessibleEntities (temp_1.readProperty_mElseInstructionGenerationList (), ioArgument_ioInvokedRoutineSet, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 229)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@syncInstructionAST noteInstructionTypesInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_syncInstructionAST::method_noteInstructionTypesInPrecedenceGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_syncInstructionAST temp_0 = this ;
  cEnumerator_syncInstructionBranchListAST enumerator_5566 (temp_0.readProperty_mBranchList (), EnumerationOrder::up) ;
  while (enumerator_5566.hasCurrentObject ()) {
    extensionMethod_noteInstructionListTypesInPrecedenceGraph (enumerator_5566.current_mInstructionList (HERE), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 148)) ;
    enumerator_5566.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@syncInstructionAST instructionSemanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_syncInstructionAST::method_instructionSemanticAnalysis (const GALGAS_omnibusType constinArgument_inSelfType,
                                                                  const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                                                  const GALGAS_semanticContext constinArgument_inContext,
                                                                  const GALGAS_mode constinArgument_inMode,
                                                                  GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                  GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                  GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                  GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                  GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_guardedCommandIRList temp_0 = GALGAS_guardedCommandIRList::init (inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 168)) ;
  GALGAS_guardedCommandIRList var_guardedCommandIRList_6601 = temp_0 ;
  const GALGAS_syncInstructionAST temp_1 = this ;
  cEnumerator_syncInstructionBranchListAST enumerator_6652 (temp_1.readProperty_mBranchList (), EnumerationOrder::up) ;
  while (enumerator_6652.hasCurrentObject ()) {
    switch (enumerator_6652.current_mGuardedCommand (HERE).enumValue ()) {
    case GALGAS_guardedCommandAST::Enumeration::invalid:
      break ;
    case GALGAS_guardedCommandAST::Enumeration::enum_boolean:
      {
        GALGAS_bool extractedValue_6722_isContinue_0 ;
        GALGAS_expressionAST extractedValue_6733_expression_1 ;
        GALGAS_location extractedValue_6744_endOfExpression_2 ;
        enumerator_6652.current_mGuardedCommand (HERE).getAssociatedValuesFor_boolean (extractedValue_6722_isContinue_0, extractedValue_6733_expression_1, extractedValue_6744_endOfExpression_2) ;
        GALGAS_instructionListIR temp_2 = GALGAS_instructionListIR::init (inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 172)) ;
        GALGAS_instructionListIR var_guardInstructionGenerationList_6792 = temp_2 ;
        GALGAS_objectIR var_expressionResult_7269 ;
        callExtensionMethod_analyzeExpression ((cPtr_expressionAST *) extractedValue_6733_expression_1.ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes.operator_or (GALGAS_routineAttributes::class_func_guard (SOURCE_FILE ("instruction-event.galgas", 175)) COMMA_SOURCE_FILE ("instruction-event.galgas", 175)), function_voidType (inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 176)), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_guardInstructionGenerationList_6792, var_expressionResult_7269, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 173)) ;
        {
        extensionSetter_appendLoadWhenReference (var_guardInstructionGenerationList_6792, ioArgument_ioTemporaries, var_expressionResult_7269, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 186)) ;
        }
        GALGAS_implicitBooleanConversionResult var_booleanResult_7665 ;
        extensionMethod_generateConvertToBooleanCode (constinArgument_inContext.readProperty_mImplicitConversionToBooleanMap (), var_expressionResult_7269, extractedValue_6744_endOfExpression_2, ioArgument_ioTemporaries, var_guardInstructionGenerationList_6792, ioArgument_ioAllocaList, var_booleanResult_7665, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 187)) ;
        switch (var_booleanResult_7665.enumValue ()) {
        case GALGAS_implicitBooleanConversionResult::Enumeration::invalid:
          break ;
        case GALGAS_implicitBooleanConversionResult::Enumeration::enum_compileTime:
          {
            GALGAS_bool extractedValue_7738__0 ;
            var_booleanResult_7665.getAssociatedValuesFor_compileTime (extractedValue_7738__0) ;
            TC_Array <FixItDescription> fixItArray3 ;
            inCompiler->emitSemanticWarning (extractedValue_6744_endOfExpression_2, GALGAS_string ("guarded expression is a compile time value"), fixItArray3  COMMA_SOURCE_FILE ("instruction-event.galgas", 197)) ;
          }
          break ;
        case GALGAS_implicitBooleanConversionResult::Enumeration::enum_llvmVariable:
          break ;
        }
        var_guardedCommandIRList_6601.addAssign_operation (GALGAS_guardedCommandIR::class_func_booleanGuard (extractedValue_6722_isContinue_0, var_guardInstructionGenerationList_6792, extensionGetter_llvmName (var_booleanResult_7665, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 203))  COMMA_SOURCE_FILE ("instruction-event.galgas", 200))  COMMA_SOURCE_FILE ("instruction-event.galgas", 200)) ;
      }
      break ;
    case GALGAS_guardedCommandAST::Enumeration::enum_boolAndSync:
      {
        GALGAS_bool extractedValue_8097_isContinue_0 ;
        GALGAS_expressionAST extractedValue_8108_exp_1 ;
        GALGAS_bool extractedValue_8112_warnsOnStaticExpression_2 ;
        GALGAS_location extractedValue_8136_endOfExp_3 ;
        GALGAS_lbool extractedValue_8145_usesSelf_4 ;
        GALGAS_lstringlist extractedValue_8154_nameList_5 ;
        GALGAS_effectiveArgumentListAST extractedValue_8163_parameterList_6 ;
        enumerator_6652.current_mGuardedCommand (HERE).getAssociatedValuesFor_boolAndSync (extractedValue_8097_isContinue_0, extractedValue_8108_exp_1, extractedValue_8112_warnsOnStaticExpression_2, extractedValue_8136_endOfExp_3, extractedValue_8145_usesSelf_4, extractedValue_8154_nameList_5, extractedValue_8163_parameterList_6) ;
        GALGAS_instructionListIR temp_4 = GALGAS_instructionListIR::init (inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 206)) ;
        GALGAS_instructionListIR var_boolExpInstructionGenerationList_8209 = temp_4 ;
        GALGAS_objectIR var_expressionResult_8698 ;
        callExtensionMethod_analyzeExpression ((cPtr_expressionAST *) extractedValue_8108_exp_1.ptr (), constinArgument_inSelfType, GALGAS_routineAttributes::class_func_guard (SOURCE_FILE ("instruction-event.galgas", 210)), function_voidType (inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 211)), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_boolExpInstructionGenerationList_8209, var_expressionResult_8698, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 208)) ;
        {
        extensionSetter_appendLoadWhenReference (var_boolExpInstructionGenerationList_8209, ioArgument_ioTemporaries, var_expressionResult_8698, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 221)) ;
        }
        GALGAS_implicitBooleanConversionResult var_booleanResult_9091 ;
        extensionMethod_generateConvertToBooleanCode (constinArgument_inContext.readProperty_mImplicitConversionToBooleanMap (), var_expressionResult_8698, extractedValue_8136_endOfExp_3, ioArgument_ioTemporaries, var_boolExpInstructionGenerationList_8209, ioArgument_ioAllocaList, var_booleanResult_9091, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 222)) ;
        switch (var_booleanResult_9091.enumValue ()) {
        case GALGAS_implicitBooleanConversionResult::Enumeration::invalid:
          break ;
        case GALGAS_implicitBooleanConversionResult::Enumeration::enum_compileTime:
          {
            GALGAS_bool extractedValue_9164__0 ;
            var_booleanResult_9091.getAssociatedValuesFor_compileTime (extractedValue_9164__0) ;
            enumGalgasBool test_5 = kBoolTrue ;
            if (kBoolTrue == test_5) {
              test_5 = extractedValue_8112_warnsOnStaticExpression_2.boolEnum () ;
              if (kBoolTrue == test_5) {
                TC_Array <FixItDescription> fixItArray6 ;
                inCompiler->emitSemanticWarning (extractedValue_8136_endOfExp_3, GALGAS_string ("guarded expression is static"), fixItArray6  COMMA_SOURCE_FILE ("instruction-event.galgas", 233)) ;
              }
            }
          }
          break ;
        case GALGAS_implicitBooleanConversionResult::Enumeration::enum_llvmVariable:
          break ;
        }
        GALGAS_instructionListIR temp_7 = GALGAS_instructionListIR::init (inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 248)) ;
        GALGAS_instructionListIR var_guardInstructionGenerationList_9814 = temp_7 ;
        GALGAS_procCallEffectiveParameterListIR var_guardEffectiveParameterListIR_9895 ;
        GALGAS_lstring var_guardMangledName_9944 ;
        enumGalgasBool test_8 = kBoolTrue ;
        if (kBoolTrue == test_8) {
          test_8 = extractedValue_8145_usesSelf_4.readProperty_bool ().boolEnum () ;
          if (kBoolTrue == test_8) {
            enumGalgasBool test_9 = kBoolTrue ;
            if (kBoolTrue == test_9) {
              test_9 = constinArgument_inSelfType.readProperty_kind ().getter_isVoid (SOURCE_FILE ("instruction-event.galgas", 252)).boolEnum () ;
              if (kBoolTrue == test_9) {
                TC_Array <FixItDescription> fixItArray10 ;
                inCompiler->emitSemanticError (extractedValue_8145_usesSelf_4.readProperty_location (), GALGAS_string ("'self' is not available in this context"), fixItArray10  COMMA_SOURCE_FILE ("instruction-event.galgas", 253)) ;
                var_guardEffectiveParameterListIR_9895.drop () ; // Release error dropped variable
                var_guardMangledName_9944.drop () ; // Release error dropped variable
              }
            }
            if (kBoolFalse == test_9) {
              GALGAS_lstringlist var_propertyList_10196 = extractedValue_8154_nameList_5 ;
              GALGAS_lstring var_guardName_10259 ;
              {
              var_propertyList_10196.setter_popLast (var_guardName_10259, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 256)) ;
              }
              GALGAS_objectIR var_currentObject_10294 = GALGAS_objectIR::class_func_reference (constinArgument_inSelfType, function_llvmNameForSelf (inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 257))  COMMA_SOURCE_FILE ("instruction-event.galgas", 257)) ;
              cEnumerator_lstringlist enumerator_10384 (var_propertyList_10196, EnumerationOrder::up) ;
              while (enumerator_10384.hasCurrentObject ()) {
                {
                routine_handlePropertyAccessInExpression_3F_context_26__3F__3F__26_temporary_26_alloca_26_instructionListIR (constinArgument_inContext, var_currentObject_10294, enumerator_10384.current_mValue (HERE), constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 259)) ;
                }
                enumerator_10384.gotoNextObject () ;
              }
              {
              routine_analyzeGuardCall_3F_self_3F_routineAttributes_3F_receiver_3F_guardName_3F_effective_3F_context_3F_requiredMode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_21_effectiveIR_21_guardMangledName (constinArgument_inSelfType, constinArgument_inRoutineAttributes, var_currentObject_10294, var_guardName_10259, extractedValue_8163_parameterList_6, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_guardInstructionGenerationList_9814, var_guardEffectiveParameterListIR_9895, var_guardMangledName_9944, inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 269)) ;
              }
            }
          }
        }
        if (kBoolFalse == test_8) {
          enumGalgasBool test_11 = kBoolTrue ;
          if (kBoolTrue == test_11) {
            test_11 = GALGAS_bool (ComparisonKind::equal, extractedValue_8154_nameList_5.getter_count (SOURCE_FILE ("instruction-event.galgas", 286)).objectCompare (GALGAS_uint (uint32_t (1U)))).boolEnum () ;
            if (kBoolTrue == test_11) {
              TC_Array <FixItDescription> fixItArray12 ;
              inCompiler->emitSemanticError (extractedValue_8154_nameList_5.getter_mValueAtIndex (GALGAS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 287)).readProperty_location (), GALGAS_string ("Standalone guard are not handled"), fixItArray12  COMMA_SOURCE_FILE ("instruction-event.galgas", 287)) ;
              var_guardMangledName_9944.drop () ; // Release error dropped variable
              var_guardEffectiveParameterListIR_9895.drop () ; // Release error dropped variable
            }
          }
          if (kBoolFalse == test_11) {
            GALGAS_lstringlist var_propertyList_11663 = extractedValue_8154_nameList_5 ;
            GALGAS_lstring var_globalReceiverName_11725 ;
            {
            var_propertyList_11663.setter_popFirst (var_globalReceiverName_11725, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 292)) ;
            }
            GALGAS_lstring var_guardName_11782 ;
            {
            var_propertyList_11663.setter_popLast (var_guardName_11782, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 293)) ;
            }
            GALGAS_objectIR var_currentObjectIR_11946 ;
            extensionMethod_searchValuedObject (ioArgument_ioUniversalMap, var_globalReceiverName_11725, constinArgument_inMode, ioArgument_ioTemporaries.readProperty_mInitializedDriverSet (), var_currentObjectIR_11946, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 294)) ;
            cEnumerator_lstringlist enumerator_11985 (var_propertyList_11663, EnumerationOrder::up) ;
            while (enumerator_11985.hasCurrentObject ()) {
              {
              routine_handlePropertyAccessInExpression_3F_context_26__3F__3F__26_temporary_26_alloca_26_instructionListIR (constinArgument_inContext, var_currentObjectIR_11946, enumerator_11985.current_mValue (HERE), constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 301)) ;
              }
              enumerator_11985.gotoNextObject () ;
            }
            {
            routine_analyzeGuardCall_3F_self_3F_routineAttributes_3F_receiver_3F_guardName_3F_effective_3F_context_3F_requiredMode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_21_effectiveIR_21_guardMangledName (constinArgument_inSelfType, constinArgument_inRoutineAttributes, var_currentObjectIR_11946, var_guardName_11782, extractedValue_8163_parameterList_6, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_guardInstructionGenerationList_9814, var_guardEffectiveParameterListIR_9895, var_guardMangledName_9944, inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 311)) ;
            }
          }
        }
        switch (var_booleanResult_9091.enumValue ()) {
        case GALGAS_implicitBooleanConversionResult::Enumeration::invalid:
          break ;
        case GALGAS_implicitBooleanConversionResult::Enumeration::enum_compileTime:
          {
            GALGAS_bool extractedValue_12977_boolValue_0 ;
            var_booleanResult_9091.getAssociatedValuesFor_compileTime (extractedValue_12977_boolValue_0) ;
            enumGalgasBool test_13 = kBoolTrue ;
            if (kBoolTrue == test_13) {
              test_13 = extractedValue_12977_boolValue_0.boolEnum () ;
              if (kBoolTrue == test_13) {
                var_guardedCommandIRList_6601.addAssign_operation (GALGAS_guardedCommandIR::class_func_sync (extractedValue_8097_isContinue_0, var_guardMangledName_9944.readProperty_string (), var_guardInstructionGenerationList_9814, var_guardEffectiveParameterListIR_9895  COMMA_SOURCE_FILE ("instruction-event.galgas", 331))  COMMA_SOURCE_FILE ("instruction-event.galgas", 331)) ;
              }
            }
            if (kBoolFalse == test_13) {
              TC_Array <FixItDescription> fixItArray14 ;
              inCompiler->emitSemanticError (var_guardMangledName_9944.readProperty_location (), GALGAS_string ("false guard not handled yet"), fixItArray14  COMMA_SOURCE_FILE ("instruction-event.galgas", 338)) ;
            }
          }
          break ;
        case GALGAS_implicitBooleanConversionResult::Enumeration::enum_llvmVariable:
          {
            GALGAS_string extractedValue_13421_llvmName_0 ;
            var_booleanResult_9091.getAssociatedValuesFor_llvmVariable (extractedValue_13421_llvmName_0) ;
            var_guardedCommandIRList_6601.addAssign_operation (GALGAS_guardedCommandIR::class_func_boolAndSync (extractedValue_8097_isContinue_0, var_boolExpInstructionGenerationList_8209, extractedValue_13421_llvmName_0, var_guardMangledName_9944.readProperty_string (), var_guardInstructionGenerationList_9814, var_guardEffectiveParameterListIR_9895  COMMA_SOURCE_FILE ("instruction-event.galgas", 341))  COMMA_SOURCE_FILE ("instruction-event.galgas", 341)) ;
          }
          break ;
        }
      }
      break ;
    }
    enumerator_6652.gotoNextObject () ;
  }
  {
  extensionSetter_openOverrideForSelectBlock (ioArgument_ioUniversalMap, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 377)) ;
  }
  GALGAS_syncInstructionBranchListIR temp_15 = GALGAS_syncInstructionBranchListIR::init (inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 378)) ;
  GALGAS_syncInstructionBranchListIR var_syncInstructionBranchListIR_14973 = temp_15 ;
  const GALGAS_syncInstructionAST temp_16 = this ;
  cEnumerator_syncInstructionBranchListAST enumerator_15032 (temp_16.readProperty_mBranchList (), EnumerationOrder::up) ;
  cEnumerator_guardedCommandIRList enumerator_15067 (var_guardedCommandIRList_6601, EnumerationOrder::up) ;
  while (enumerator_15032.hasCurrentObject () && enumerator_15067.hasCurrentObject ()) {
    GALGAS_instructionListIR temp_17 = GALGAS_instructionListIR::init (inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 380)) ;
    GALGAS_instructionListIR var_branchInstructionGenerationList_15139 = temp_17 ;
    extensionMethod_analyzeBranchInstructionList (enumerator_15032.current_mInstructionList (HERE), constinArgument_inSelfType, constinArgument_inRoutineAttributes, enumerator_15032.current_mEndOfBranch (HERE), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_branchInstructionGenerationList_15139, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 381)) ;
    var_syncInstructionBranchListIR_14973.addAssign_operation (enumerator_15067.current_mGuardedCommand (HERE), var_branchInstructionGenerationList_15139  COMMA_SOURCE_FILE ("instruction-event.galgas", 393)) ;
    enumerator_15032.gotoNextObject () ;
    enumerator_15067.gotoNextObject () ;
  }
  {
  const GALGAS_syncInstructionAST temp_18 = this ;
  extensionSetter_closeOverride (ioArgument_ioUniversalMap, temp_18.readProperty_mEndOf_5F_on_5F_instruction (), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 395)) ;
  }
  const GALGAS_syncInstructionAST temp_19 = this ;
  ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_syncInstructionIR::init_21__21_ (temp_19.readProperty_mInstructionLocation (), var_syncInstructionBranchListIR_14973, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-event.galgas", 397)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Routine 'analyzeGuardCall?self?routineAttributes?receiver?guardName?effective?context?requiredMode&temporary&staticEntityMap&variableMap&alloca&instructionListIR!effectiveIR!guardMangledName'
//
//--------------------------------------------------------------------------------------------------

void routine_analyzeGuardCall_3F_self_3F_routineAttributes_3F_receiver_3F_guardName_3F_effective_3F_context_3F_requiredMode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_21_effectiveIR_21_guardMangledName (const GALGAS_omnibusType constinArgument_inSelfType,
                                                                                                                                                                                                                                              const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                                                                                                                                                                                                                              const GALGAS_objectIR constinArgument_inReceiver,
                                                                                                                                                                                                                                              const GALGAS_lstring constinArgument_inGuardName,
                                                                                                                                                                                                                                              const GALGAS_effectiveArgumentListAST constinArgument_inEffectiveParameterList,
                                                                                                                                                                                                                                              const GALGAS_semanticContext constinArgument_inContext,
                                                                                                                                                                                                                                              const GALGAS_mode constinArgument_inRequiredMode,
                                                                                                                                                                                                                                              GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                                                                                                                                                                                              GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                                                                                                                                                                                              GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                                                                                                                                                                                              GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                                                                                                                                                                                              GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                                                                                                                                                                                              GALGAS_procCallEffectiveParameterListIR & outArgument_outEffectiveParameterListIR,
                                                                                                                                                                                                                                              GALGAS_lstring & outArgument_outGuardMangledName,
                                                                                                                                                                                                                                              Compiler * inCompiler
                                                                                                                                                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outEffectiveParameterListIR.drop () ; // Release 'out' argument
  outArgument_outGuardMangledName.drop () ; // Release 'out' argument
  GALGAS_lstring var_guardMangledName_16768 = extensionGetter_mangledName (constinArgument_inEffectiveParameterList, extensionGetter_type (constinArgument_inReceiver, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 418)).readProperty_omnibusTypeDescriptionName (), constinArgument_inGuardName, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 418)) ;
  GALGAS_bool var_isPublic_17020 ;
  GALGAS_routineTypedSignature var_formalSignature_17057 ;
  GALGAS_lstring var_guardRoutineUserLLVMName_17078 ;
  GALGAS_lstring joker_17103 ; // Joker input parameter
  constinArgument_inContext.readProperty_mGuardMap ().method_searchKey (var_guardMangledName_16768, var_isPublic_17020, var_formalSignature_17057, var_guardRoutineUserLLVMName_17078, joker_17103, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 420)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = var_isPublic_17020.operator_not (SOURCE_FILE ("instruction-event.galgas", 422)).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inGuardName.readProperty_location (), GALGAS_string ("this guard is not public"), fixItArray1  COMMA_SOURCE_FILE ("instruction-event.galgas", 423)) ;
      outArgument_outGuardMangledName.drop () ; // Release error dropped variable
      outArgument_outEffectiveParameterListIR.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_0) {
    outArgument_outGuardMangledName = var_guardRoutineUserLLVMName_17078 ;
    GALGAS_procCallEffectiveParameterListIR temp_2 = GALGAS_procCallEffectiveParameterListIR::init (inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 427)) ;
    temp_2.enterElement (GALGAS_procCallEffectiveParameterListIR_2D_element::init_21__21_ (GALGAS_procEffectiveParameterPassingModeIR::class_func_outputInput (SOURCE_FILE ("instruction-event.galgas", 427)), constinArgument_inReceiver, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 427)) ;
    outArgument_outEffectiveParameterListIR = temp_2 ;
    {
    routine_analyzeEffectiveParameters_3F_self_3F_routineAttributes_3F_formal_3F_effective_3F_errorLocation_3F_context_3F_requiredMode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_26_effectiveIR (constinArgument_inSelfType, constinArgument_inRoutineAttributes, var_formalSignature_17057, constinArgument_inEffectiveParameterList, constinArgument_inGuardName.readProperty_location (), constinArgument_inContext, constinArgument_inRequiredMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, outArgument_outEffectiveParameterListIR, inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 428)) ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@syncInstructionIR llvmInstructionCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_syncInstructionIR::method_llvmInstructionCode (GALGAS_string & ioArgument_ioLLVMcode,
                                                         const GALGAS_generationContext constinArgument_inGenerationContext,
                                                         GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                         Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioGenerationAdds.mProperty_mUsesGuards = GALGAS_bool (true) ;
  GALGAS_string var_startLabel_20301 = GALGAS_string ("select.").add_operation (ioArgument_ioGenerationAdds.readProperty_mUniqueIndex ().getter_string (SOURCE_FILE ("instruction-event.galgas", 496)), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 496)) ;
  ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 497)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_startLabel_20301, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 499)).add_operation (GALGAS_string (".start\n\n"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 499)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 499)) ;
  GALGAS_string var_startLabelName_20463 = var_startLabel_20301.add_operation (GALGAS_string (".start"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 500)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_startLabelName_20463.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 501)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 501)) ;
  GALGAS_string var_exitLabelName_20548 = var_startLabel_20301.add_operation (GALGAS_string (".exit"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 502)) ;
  GALGAS_string var_selectLabelName_20591 = var_startLabel_20301.add_operation (GALGAS_string (".select"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 503)) ;
  GALGAS_string var_errorLabelName_20638 = var_startLabel_20301.add_operation (GALGAS_string (".error"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 504)) ;
  GALGAS_string var_currentStartBranchLabel_20683 = var_startLabelName_20463 ;
  const GALGAS_syncInstructionIR temp_0 = this ;
  cEnumerator_syncInstructionBranchListIR enumerator_20745 (temp_0.readProperty_mOnInstructionBranchListIR (), EnumerationOrder::up) ;
  GALGAS_uint index_20726 (uint32_t (0)) ;
  while (enumerator_20745.hasCurrentObject ()) {
    GALGAS_string var_acceptanceVarName_20789 = GALGAS_string ("%").add_operation (var_startLabel_20301, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 507)).add_operation (GALGAS_string (".accept."), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 507)).add_operation (index_20726.getter_string (SOURCE_FILE ("instruction-event.galgas", 507)), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 507)) ;
    GALGAS_bool var_isWhileGuardedCommand_20859 ;
    switch (enumerator_20745.current (HERE).readProperty_mGuardedCommand ().enumValue ()) {
    case GALGAS_guardedCommandIR::Enumeration::invalid:
      break ;
    case GALGAS_guardedCommandIR::Enumeration::enum_booleanGuard:
      {
        GALGAS_bool extractedValue_20938_isExitCommand_0 ;
        GALGAS_instructionListIR extractedValue_20952_instructionGenerationList_1 ;
        GALGAS_string extractedValue_20978_boolGuardBoolLLVMName_2 ;
        enumerator_20745.current (HERE).readProperty_mGuardedCommand ().getAssociatedValuesFor_booleanGuard (extractedValue_20938_isExitCommand_0, extractedValue_20952_instructionGenerationList_1, extractedValue_20978_boolGuardBoolLLVMName_2) ;
        var_isWhileGuardedCommand_20859 = extractedValue_20938_isExitCommand_0 ;
        extensionMethod_instructionListLLVMCode (extractedValue_20952_instructionGenerationList_1, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 512)) ;
        GALGAS_string var_acceptedLabelName_21168 = var_startLabel_20301.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 513)).add_operation (index_20726.getter_string (SOURCE_FILE ("instruction-event.galgas", 513)), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 513)).add_operation (GALGAS_string (".true"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 513)) ;
        GALGAS_string var_rejectedLabelName_21231 = var_startLabel_20301.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 514)).add_operation (index_20726.getter_string (SOURCE_FILE ("instruction-event.galgas", 514)), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 514)).add_operation (GALGAS_string (".false"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 514)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (extractedValue_20978_boolGuardBoolLLVMName_2, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 515)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 515)).add_operation (var_acceptedLabelName_21168, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 515)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 515)).add_operation (var_rejectedLabelName_21231, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 515)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 515)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 515)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(var_acceptedLabelName_21168.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 516)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 516)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @accept.guard ()\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 517)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_rejectedLabelName_21231, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 518)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 518)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 518)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(var_rejectedLabelName_21231.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 519)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 519)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_acceptanceVarName_20789, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 520)).add_operation (GALGAS_string (" = or i1 "), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 520)).add_operation (extractedValue_20978_boolGuardBoolLLVMName_2, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 520)).add_operation (GALGAS_string (", 0\n"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 520)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 520)) ;
      }
      break ;
    case GALGAS_guardedCommandIR::Enumeration::enum_boolAndSync:
      {
        GALGAS_bool extractedValue_21741_isExitCommand_0 ;
        GALGAS_instructionListIR extractedValue_21755_expInstructionList_1 ;
        GALGAS_string extractedValue_21774_boolGuardLLVMName_2 ;
        GALGAS_string extractedValue_21792_guardMangledName_3 ;
        GALGAS_instructionListIR extractedValue_21809_guardInstructionList_4 ;
        GALGAS_procCallEffectiveParameterListIR extractedValue_21830_effectiveParameterList_5 ;
        enumerator_20745.current (HERE).readProperty_mGuardedCommand ().getAssociatedValuesFor_boolAndSync (extractedValue_21741_isExitCommand_0, extractedValue_21755_expInstructionList_1, extractedValue_21774_boolGuardLLVMName_2, extractedValue_21792_guardMangledName_3, extractedValue_21809_guardInstructionList_4, extractedValue_21830_effectiveParameterList_5) ;
        var_isWhileGuardedCommand_20859 = extractedValue_21741_isExitCommand_0 ;
        extensionMethod_instructionListLLVMCode (extractedValue_21755_expInstructionList_1, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 523)) ;
        GALGAS_string var_testOkLabelName_22014 = var_startLabel_20301.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 524)).add_operation (index_20726.getter_string (SOURCE_FILE ("instruction-event.galgas", 524)), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 524)).add_operation (GALGAS_string (".boolexp.true"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 524)) ;
        GALGAS_string var_testExitLabelName_22083 = var_startLabel_20301.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 525)).add_operation (index_20726.getter_string (SOURCE_FILE ("instruction-event.galgas", 525)), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 525)).add_operation (GALGAS_string (".test.exit"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 525)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (extractedValue_21774_boolGuardLLVMName_2, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 526)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 526)).add_operation (var_testOkLabelName_22014, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 526)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 526)).add_operation (var_testExitLabelName_22083, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 526)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 526)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 526)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(var_testOkLabelName_22014.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 527)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 527)) ;
        extensionMethod_instructionListLLVMCode (extractedValue_21809_guardInstructionList_4, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 528)) ;
        GALGAS_string var_guardAcceptationLabelName_22427 = var_startLabel_20301.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 529)).add_operation (index_20726.getter_string (SOURCE_FILE ("instruction-event.galgas", 529)), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 529)).add_operation (GALGAS_string (".guard.acceptation"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 529)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_guardAcceptationLabelName_22427, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 530)).add_operation (GALGAS_string (" = call i1 @"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 530)).add_operation (extractedValue_21792_guardMangledName_3.getter_assemblerRepresentation (SOURCE_FILE ("instruction-event.galgas", 530)), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 530)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 530)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ("), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 531)) ;
        cEnumerator_procCallEffectiveParameterListIR enumerator_22684 (extractedValue_21830_effectiveParameterList_5, EnumerationOrder::up) ;
        while (enumerator_22684.hasCurrentObject ()) {
          switch (enumerator_22684.current_mEffectiveParameterPassingMode (HERE).enumValue ()) {
          case GALGAS_procEffectiveParameterPassingModeIR::Enumeration::invalid:
            break ;
          case GALGAS_procEffectiveParameterPassingModeIR::Enumeration::enum_input:
            {
              ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_22684.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 535)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 535)).add_operation (extensionGetter_llvmName (enumerator_22684.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 535)), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 535)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 535)) ;
            }
            break ;
          case GALGAS_procEffectiveParameterPassingModeIR::Enumeration::enum_output:
            {
              ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_22684.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 537)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 537)).add_operation (extensionGetter_llvmName (enumerator_22684.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 537)), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 537)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 537)) ;
            }
            break ;
          case GALGAS_procEffectiveParameterPassingModeIR::Enumeration::enum_outputInput:
            {
              ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_22684.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 539)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 539)).add_operation (extensionGetter_llvmName (enumerator_22684.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 539)), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 539)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 539)) ;
            }
            break ;
          }
          if (enumerator_22684.hasNextObject ()) {
            ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 542)) ;
          }
          enumerator_22684.gotoNextObject () ;
        }
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (")\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 544)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_testExitLabelName_22083, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 545)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 545)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 545)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(var_testExitLabelName_22083.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 546)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 546)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_acceptanceVarName_20789, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 547)).add_operation (GALGAS_string (" = phi i1 "), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 547)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 547)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("[%").add_operation (var_guardAcceptationLabelName_22427, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 548)).add_operation (GALGAS_string (", %"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 548)).add_operation (var_testOkLabelName_22014, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 548)).add_operation (GALGAS_string ("], "), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 548)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 548)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("[false, %").add_operation (var_currentStartBranchLabel_20683, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 549)).add_operation (GALGAS_string ("]\n"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 549)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 549)) ;
      }
      break ;
    case GALGAS_guardedCommandIR::Enumeration::enum_sync:
      {
        GALGAS_bool extractedValue_23509_isExitCommand_0 ;
        GALGAS_string extractedValue_23523_guardMangledName_1 ;
        GALGAS_instructionListIR extractedValue_23540_guardInstructionList_2 ;
        GALGAS_procCallEffectiveParameterListIR extractedValue_23561_effectiveParameterList_3 ;
        enumerator_20745.current (HERE).readProperty_mGuardedCommand ().getAssociatedValuesFor_sync (extractedValue_23509_isExitCommand_0, extractedValue_23523_guardMangledName_1, extractedValue_23540_guardInstructionList_2, extractedValue_23561_effectiveParameterList_3) ;
        var_isWhileGuardedCommand_20859 = extractedValue_23509_isExitCommand_0 ;
        extensionMethod_instructionListLLVMCode (extractedValue_23540_guardInstructionList_2, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 552)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_acceptanceVarName_20789, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 553)).add_operation (GALGAS_string (" = call i1 @"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 553)).add_operation (extractedValue_23523_guardMangledName_1.getter_assemblerRepresentation (SOURCE_FILE ("instruction-event.galgas", 553)), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 553)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 553)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ("), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 554)) ;
        cEnumerator_procCallEffectiveParameterListIR enumerator_23911 (extractedValue_23561_effectiveParameterList_3, EnumerationOrder::up) ;
        while (enumerator_23911.hasCurrentObject ()) {
          switch (enumerator_23911.current_mEffectiveParameterPassingMode (HERE).enumValue ()) {
          case GALGAS_procEffectiveParameterPassingModeIR::Enumeration::invalid:
            break ;
          case GALGAS_procEffectiveParameterPassingModeIR::Enumeration::enum_input:
            {
              ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_23911.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 558)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 558)).add_operation (extensionGetter_llvmName (enumerator_23911.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 558)), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 558)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 558)) ;
            }
            break ;
          case GALGAS_procEffectiveParameterPassingModeIR::Enumeration::enum_output:
            {
              ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_23911.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 560)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 560)).add_operation (extensionGetter_llvmName (enumerator_23911.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 560)), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 560)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 560)) ;
            }
            break ;
          case GALGAS_procEffectiveParameterPassingModeIR::Enumeration::enum_outputInput:
            {
              ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_23911.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 562)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 562)).add_operation (extensionGetter_llvmName (enumerator_23911.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 562)), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 562)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 562)) ;
            }
            break ;
          }
          if (enumerator_23911.hasNextObject ()) {
            ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 565)) ;
          }
          enumerator_23911.gotoNextObject () ;
        }
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (")\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 567)) ;
      }
      break ;
    }
    GALGAS_string var_acceptedLabelName_24414 = var_startLabel_20301.add_operation (GALGAS_string (".accepted."), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 569)).add_operation (index_20726.getter_string (SOURCE_FILE ("instruction-event.galgas", 569)), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 569)) ;
    GALGAS_string var_rejectedLabelName_24474 = var_startLabel_20301.add_operation (GALGAS_string (".rejected."), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 570)).add_operation (index_20726.getter_string (SOURCE_FILE ("instruction-event.galgas", 570)), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 570)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (var_acceptanceVarName_20789, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 571)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 571)).add_operation (var_acceptedLabelName_24414, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 571)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 571)).add_operation (var_rejectedLabelName_24474, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 571)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 571)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 571)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(var_acceptedLabelName_24414.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 572)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 572)) ;
    extensionMethod_instructionListLLVMCode (enumerator_20745.current (HERE).readProperty_mInstructionGenerationList (), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 573)) ;
    GALGAS_string temp_1 ;
    const enumGalgasBool test_2 = var_isWhileGuardedCommand_20859.boolEnum () ;
    if (kBoolTrue == test_2) {
      temp_1 = var_startLabelName_20463 ;
    }else if (kBoolFalse == test_2) {
      temp_1 = var_exitLabelName_20548 ;
    }
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (temp_1, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 574)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 574)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 574)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(var_rejectedLabelName_24474.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 575)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 575)) ;
    var_currentStartBranchLabel_20683 = var_rejectedLabelName_24474 ;
    enumerator_20745.gotoNextObject () ;
    index_20726.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 506)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_selectLabelName_20591, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 578)).add_operation (GALGAS_string (" = call i1 @"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 578)).add_operation (function_llvmNameForServiceCall (function_waitForGuardChangeFunctionName (inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 578)), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 578)), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 578)).add_operation (GALGAS_string (" ()\n"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 578)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 578)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 %").add_operation (var_selectLabelName_20591, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 579)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 579)).add_operation (var_startLabelName_20463, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 579)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 579)).add_operation (var_errorLabelName_20638, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 579)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 579)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 579)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_errorLabelName_20638.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 580)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 580)) ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = GALGAS_bool (gOption_omnibus_5F_options_noPanicGeneration.readProperty_value ()).boolEnum () ;
    if (kBoolTrue == test_3) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_exitLabelName_20548, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 582)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 582)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 582)) ;
    }
  }
  if (kBoolFalse == test_3) {
    const GALGAS_syncInstructionIR temp_4 = this ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @").add_operation (function_panicRoutineNameForLocationFile (temp_4.readProperty_mSelectInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 584)).getter_assemblerRepresentation (SOURCE_FILE ("instruction-event.galgas", 584)), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 584)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 584)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 584)) ;
    const GALGAS_syncInstructionIR temp_5 = this ;
    ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inGenerationContext.readProperty_mPanicLineLLVMType ().ptr (), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 585)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 585)).add_operation (temp_5.readProperty_mSelectInstructionLocation ().getter_endLine (inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 585)).getter_string (SOURCE_FILE ("instruction-event.galgas", 585)), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 585)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 585)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 585)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inGenerationContext.readProperty_mPanicCodeLLVMType ().ptr (), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 586)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 586)).add_operation (function_panicCodeForClosedSync (inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 586)).getter_string (SOURCE_FILE ("instruction-event.galgas", 586)), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 586)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 586)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 586)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  unreachable\n\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 587)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(var_exitLabelName_20548.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 589)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 589)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@syncInstructionIR enterAccessibleEntities'
//
//--------------------------------------------------------------------------------------------------

void cPtr_syncInstructionIR::method_enterAccessibleEntities (GALGAS_stringset & ioArgument_ioInvokedRoutineSet,
                                                             GALGAS_uint & ioArgument_ioMaxBranchOfOnInstructions,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_syncInstructionIR temp_0 = this ;
  GALGAS_uint var_branchCount_26229 = temp_0.readProperty_mOnInstructionBranchListIR ().getter_count (SOURCE_FILE ("instruction-event.galgas", 598)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (ComparisonKind::lowerThan, ioArgument_ioMaxBranchOfOnInstructions.objectCompare (var_branchCount_26229)).boolEnum () ;
    if (kBoolTrue == test_1) {
      ioArgument_ioMaxBranchOfOnInstructions = var_branchCount_26229 ;
    }
  }
  const GALGAS_syncInstructionIR temp_2 = this ;
  cEnumerator_syncInstructionBranchListIR enumerator_26408 (temp_2.readProperty_mOnInstructionBranchListIR (), EnumerationOrder::up) ;
  while (enumerator_26408.hasCurrentObject ()) {
    extensionMethod_enterAccessibleEntities (enumerator_26408.current (HERE).readProperty_mInstructionGenerationList (), ioArgument_ioInvokedRoutineSet, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 603)) ;
    switch (enumerator_26408.current (HERE).readProperty_mGuardedCommand ().enumValue ()) {
    case GALGAS_guardedCommandIR::Enumeration::invalid:
      break ;
    case GALGAS_guardedCommandIR::Enumeration::enum_booleanGuard:
      {
        GALGAS_bool extractedValue_26611__0 ;
        GALGAS_instructionListIR extractedValue_26613_instructionGenerationList_1 ;
        GALGAS_string extractedValue_26639__2 ;
        enumerator_26408.current (HERE).readProperty_mGuardedCommand ().getAssociatedValuesFor_booleanGuard (extractedValue_26611__0, extractedValue_26613_instructionGenerationList_1, extractedValue_26639__2) ;
        extensionMethod_enterAccessibleEntities (extractedValue_26613_instructionGenerationList_1, ioArgument_ioInvokedRoutineSet, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 606)) ;
      }
      break ;
    case GALGAS_guardedCommandIR::Enumeration::enum_sync:
      {
        GALGAS_bool extractedValue_26769__0 ;
        GALGAS_string extractedValue_26771_guardMangledName_1 ;
        GALGAS_instructionListIR extractedValue_26788_guardInstructionGenerationList_2 ;
        GALGAS_procCallEffectiveParameterListIR extractedValue_26819__3 ;
        enumerator_26408.current (HERE).readProperty_mGuardedCommand ().getAssociatedValuesFor_sync (extractedValue_26769__0, extractedValue_26771_guardMangledName_1, extractedValue_26788_guardInstructionGenerationList_2, extractedValue_26819__3) ;
        extensionMethod_enterAccessibleEntities (extractedValue_26788_guardInstructionGenerationList_2, ioArgument_ioInvokedRoutineSet, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 608)) ;
        ioArgument_ioInvokedRoutineSet.addAssign_operation (extractedValue_26771_guardMangledName_1  COMMA_SOURCE_FILE ("instruction-event.galgas", 609)) ;
      }
      break ;
    case GALGAS_guardedCommandIR::Enumeration::enum_boolAndSync:
      {
        GALGAS_bool extractedValue_27008__0 ;
        GALGAS_instructionListIR extractedValue_27010_instructionGenerationList_1 ;
        GALGAS_string extractedValue_27036__2 ;
        GALGAS_string extractedValue_27038_guardMangledName_3 ;
        GALGAS_instructionListIR extractedValue_27055_guardInstructionGenerationList_4 ;
        GALGAS_procCallEffectiveParameterListIR extractedValue_27086__5 ;
        enumerator_26408.current (HERE).readProperty_mGuardedCommand ().getAssociatedValuesFor_boolAndSync (extractedValue_27008__0, extractedValue_27010_instructionGenerationList_1, extractedValue_27036__2, extractedValue_27038_guardMangledName_3, extractedValue_27055_guardInstructionGenerationList_4, extractedValue_27086__5) ;
        extensionMethod_enterAccessibleEntities (extractedValue_27010_instructionGenerationList_1, ioArgument_ioInvokedRoutineSet, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 611)) ;
        extensionMethod_enterAccessibleEntities (extractedValue_27055_guardInstructionGenerationList_4, ioArgument_ioInvokedRoutineSet, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 612)) ;
        ioArgument_ioInvokedRoutineSet.addAssign_operation (extractedValue_27038_guardMangledName_3  COMMA_SOURCE_FILE ("instruction-event.galgas", 613)) ;
      }
      break ;
    }
    enumerator_26408.gotoNextObject () ;
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = GALGAS_bool (gOption_omnibus_5F_options_noPanicGeneration.readProperty_value ()).operator_not (SOURCE_FILE ("instruction-event.galgas", 616)).boolEnum () ;
    if (kBoolTrue == test_3) {
      const GALGAS_syncInstructionIR temp_4 = this ;
      ioArgument_ioInvokedRoutineSet.addAssign_operation (function_panicRoutineNameForLocationFile (temp_4.readProperty_mSelectInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 617))  COMMA_SOURCE_FILE ("instruction-event.galgas", 617)) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@whileInstructionAST noteInstructionTypesInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_whileInstructionAST::method_noteInstructionTypesInPrecedenceGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_whileInstructionAST temp_0 = this ;
  extensionMethod_noteInstructionListTypesInPrecedenceGraph (temp_0.readProperty_mWhileInstructionList (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 48)) ;
  const GALGAS_whileInstructionAST temp_1 = this ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((cPtr_expressionAST *) temp_1.readProperty_m_5F_while_5F_Expression ().ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 49)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@whileInstructionAST instructionSemanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_whileInstructionAST::method_instructionSemanticAnalysis (const GALGAS_omnibusType constinArgument_inSelfType,
                                                                   const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                                                   const GALGAS_semanticContext constinArgument_inContext,
                                                                   const GALGAS_mode constinArgument_inMode,
                                                                   GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                   GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                   GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                   GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                   GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_instructionListIR temp_0 = GALGAS_instructionListIR::init (inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 68)) ;
  GALGAS_instructionListIR var_testInstructionGenerationList_3384 = temp_0 ;
  GALGAS_objectIR var_testValue_3810 ;
  const GALGAS_whileInstructionAST temp_1 = this ;
  callExtensionMethod_analyzeExpression ((cPtr_expressionAST *) temp_1.readProperty_m_5F_while_5F_Expression ().ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, function_voidType (inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 72)), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_testInstructionGenerationList_3384, var_testValue_3810, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 69)) ;
  {
  extensionSetter_appendLoadWhenReference (var_testInstructionGenerationList_3384, ioArgument_ioTemporaries, var_testValue_3810, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 82)) ;
  }
  GALGAS_implicitBooleanConversionResult var_booleanResult_4182 ;
  const GALGAS_whileInstructionAST temp_2 = this ;
  extensionMethod_generateConvertToBooleanCode (constinArgument_inContext.readProperty_mImplicitConversionToBooleanMap (), var_testValue_3810, temp_2.readProperty_mEndOf_5F_test_5F_expression (), ioArgument_ioTemporaries, var_testInstructionGenerationList_3384, ioArgument_ioAllocaList, var_booleanResult_4182, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 87)) ;
  switch (var_booleanResult_4182.enumValue ()) {
  case GALGAS_implicitBooleanConversionResult::Enumeration::invalid:
    break ;
  case GALGAS_implicitBooleanConversionResult::Enumeration::enum_compileTime:
    {
      GALGAS_bool extractedValue_4244__0 ;
      var_booleanResult_4182.getAssociatedValuesFor_compileTime (extractedValue_4244__0) ;
      const GALGAS_whileInstructionAST temp_3 = this ;
      TC_Array <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mEndOf_5F_test_5F_expression (), GALGAS_string ("test expression type should not be a compile time expression"), fixItArray4  COMMA_SOURCE_FILE ("instruction-while.galgas", 97)) ;
    }
    break ;
  case GALGAS_implicitBooleanConversionResult::Enumeration::enum_llvmVariable:
    break ;
  }
  GALGAS_instructionListIR temp_5 = GALGAS_instructionListIR::init (inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 108)) ;
  GALGAS_instructionListIR var_instructionGenerationList_4765 = temp_5 ;
  {
  extensionSetter_openOverrideForRepeatBlock (ioArgument_ioUniversalMap, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 109)) ;
  }
  const GALGAS_whileInstructionAST temp_6 = this ;
  const GALGAS_whileInstructionAST temp_7 = this ;
  extensionMethod_analyzeBranchInstructionList (temp_6.readProperty_mWhileInstructionList (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, temp_7.readProperty_mEndOf_5F_while_5F_instruction (), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_instructionGenerationList_4765, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 110)) ;
  {
  const GALGAS_whileInstructionAST temp_8 = this ;
  extensionSetter_closeOverride (ioArgument_ioUniversalMap, temp_8.readProperty_mEndOf_5F_while_5F_instruction (), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 122)) ;
  }
  const GALGAS_whileInstructionAST temp_9 = this ;
  ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_whileInstructionIR::init_21__21__21__21_ (temp_9.readProperty_mEndOf_5F_test_5F_expression ().getter_endLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 125)), var_testInstructionGenerationList_3384, extensionGetter_llvmName (var_booleanResult_4182, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 127)), var_instructionGenerationList_4765, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-while.galgas", 124)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@whileInstructionIR llvmInstructionCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_whileInstructionIR::method_llvmInstructionCode (GALGAS_string & ioArgument_ioLLVMcode,
                                                          const GALGAS_generationContext constinArgument_inGenerationContext,
                                                          GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_whileInstructionIR temp_0 = this ;
  GALGAS_string var_labelTest_6455 = GALGAS_string ("while.").add_operation (temp_0.readProperty_mLabelIndex ().getter_string (SOURCE_FILE ("instruction-while.galgas", 150)), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 150)).add_operation (GALGAS_string (".test"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 150)) ;
  const GALGAS_whileInstructionIR temp_1 = this ;
  GALGAS_string var_labelLoop_6511 = GALGAS_string ("while.").add_operation (temp_1.readProperty_mLabelIndex ().getter_string (SOURCE_FILE ("instruction-while.galgas", 151)), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 151)).add_operation (GALGAS_string (".loop"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 151)) ;
  const GALGAS_whileInstructionIR temp_2 = this ;
  GALGAS_string var_labelEnd_6567 = GALGAS_string ("while.").add_operation (temp_2.readProperty_mLabelIndex ().getter_string (SOURCE_FILE ("instruction-while.galgas", 152)), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 152)).add_operation (GALGAS_string (".end"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 152)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_labelTest_6455, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 153)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 153)), inCompiler  COMMA_SOURCE_FILE ("instruction-while.galgas", 153)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelTest_6455.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 154)), inCompiler  COMMA_SOURCE_FILE ("instruction-while.galgas", 154)) ;
  const GALGAS_whileInstructionIR temp_3 = this ;
  extensionMethod_instructionListLLVMCode (temp_3.readProperty_mTestInstructionGenerationList (), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 155)) ;
  const GALGAS_whileInstructionIR temp_4 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (temp_4.readProperty_m_5F_while_5F_llvmName (), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 156)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 156)).add_operation (var_labelLoop_6511, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 156)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 156)).add_operation (var_labelEnd_6567, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 156)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 156)), inCompiler  COMMA_SOURCE_FILE ("instruction-while.galgas", 156)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelLoop_6511.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 157)), inCompiler  COMMA_SOURCE_FILE ("instruction-while.galgas", 157)) ;
  const GALGAS_whileInstructionIR temp_5 = this ;
  extensionMethod_instructionListLLVMCode (temp_5.readProperty_mInstructionGenerationList (), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 158)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_labelTest_6455, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 159)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 159)), inCompiler  COMMA_SOURCE_FILE ("instruction-while.galgas", 159)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelEnd_6567.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 160)), inCompiler  COMMA_SOURCE_FILE ("instruction-while.galgas", 160)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@whileInstructionIR enterAccessibleEntities'
//
//--------------------------------------------------------------------------------------------------

void cPtr_whileInstructionIR::method_enterAccessibleEntities (GALGAS_stringset & ioArgument_ioInvokedRoutineSet,
                                                              GALGAS_uint & ioArgument_ioMaxBranchOfOnInstructions,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_whileInstructionIR temp_0 = this ;
  extensionMethod_enterAccessibleEntities (temp_0.readProperty_mTestInstructionGenerationList (), ioArgument_ioInvokedRoutineSet, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 169)) ;
  const GALGAS_whileInstructionIR temp_1 = this ;
  extensionMethod_enterAccessibleEntities (temp_1.readProperty_mInstructionGenerationList (), ioArgument_ioInvokedRoutineSet, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 170)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@forInstructionAST noteInstructionTypesInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_forInstructionAST::method_noteInstructionTypesInPrecedenceGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_forInstructionAST temp_0 = this ;
  extensionMethod_noteInstructionListTypesInPrecedenceGraph (temp_0.readProperty_mDoInstructionList (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 73)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@forInstructionAST instructionSemanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_forInstructionAST::method_instructionSemanticAnalysis (const GALGAS_omnibusType constinArgument_inSelfType,
                                                                 const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                                                 const GALGAS_semanticContext constinArgument_inContext,
                                                                 const GALGAS_mode constinArgument_inMode,
                                                                 GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                 GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                 GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                 GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                 GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_objectIR var_iteratedObjectPointer_4115 ;
  {
  const GALGAS_forInstructionAST temp_0 = this ;
  extensionSetter_searchValuedObjectForReadAccess (ioArgument_ioUniversalMap, temp_0.readProperty_mIteratedObject (), var_iteratedObjectPointer_4115, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 92)) ;
  }
  GALGAS_omnibusType var_iteratedType_4159 = extensionGetter_type (var_iteratedObjectPointer_4115, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 94)) ;
  GALGAS_omnibusType var_iteratedElementType_4253 ;
  switch (var_iteratedType_4159.readProperty_subscript ().enumValue ()) {
  case GALGAS_subscript::Enumeration::invalid:
    break ;
  case GALGAS_subscript::Enumeration::enum_noSubscript:
    {
      const GALGAS_forInstructionAST temp_1 = this ;
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mIteratedObject ().readProperty_location (), GALGAS_string ("this object is not enumerable"), fixItArray2  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 99)) ;
      var_iteratedElementType_4253.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_subscript::Enumeration::enum_literalString:
    {
      var_iteratedElementType_4253 = extensionGetter_type (extensionGetter_searchKey (constinArgument_inContext.readProperty_mTypeMap (), GALGAS_string ("u8").getter_nowhere (SOURCE_FILE ("instruction-for-in-do.galgas", 101)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 101)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 101)) ;
    }
    break ;
  case GALGAS_subscript::Enumeration::enum_staticSubscript:
    {
      GALGAS_omnibusType extractedValue_4540_elementType_0 ;
      GALGAS_bigint extractedValue_4552__1 ;
      var_iteratedType_4159.readProperty_subscript ().getAssociatedValuesFor_staticSubscript (extractedValue_4540_elementType_0, extractedValue_4552__1) ;
      var_iteratedElementType_4253 = extractedValue_4540_elementType_0 ;
    }
    break ;
  }
  const GALGAS_forInstructionAST temp_3 = this ;
  const GALGAS_forInstructionAST temp_4 = this ;
  GALGAS_lstring var_omnibusName_4612 = GALGAS_lstring::init_21__21_ (temp_3.readProperty_mVarName ().readProperty_string ().add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 106)).add_operation (ioArgument_ioTemporaries.readProperty_mTemporaryIndex ().getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 106)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 106)), temp_4.readProperty_mVarName ().readProperty_location (), inCompiler COMMA_HERE) ;
  ioArgument_ioTemporaries.mProperty_mTemporaryIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 107)) ;
  ioArgument_ioAllocaList.addAssign_operation (function_llvmNameForLocalVariable (var_omnibusName_4612.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 108)), var_iteratedElementType_4253, GALGAS_bool (false)  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 108)) ;
  {
  extensionSetter_openOverrideForRepeatBlock (ioArgument_ioUniversalMap, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 110)) ;
  }
  {
  const GALGAS_forInstructionAST temp_5 = this ;
  extensionSetter_insertLocalConstant (ioArgument_ioUniversalMap, temp_5.readProperty_mVarName (), GALGAS_bool (false), var_iteratedElementType_4253, var_omnibusName_4612, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 111)) ;
  }
  GALGAS_instructionListIR temp_6 = GALGAS_instructionListIR::init (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 113)) ;
  GALGAS_instructionListIR var_whileExpression_5F_GenerationList_5104 = temp_6 ;
  GALGAS_objectIR var_whileExpressionResult_5534 ;
  const GALGAS_forInstructionAST temp_7 = this ;
  callExtensionMethod_analyzeExpression ((cPtr_expressionAST *) temp_7.readProperty_mWhileExpression ().ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, function_voidType (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 117)), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_whileExpression_5F_GenerationList_5104, var_whileExpressionResult_5534, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 114)) ;
  GALGAS_implicitBooleanConversionResult var_whileExpressionBooleanResult_5833 ;
  const GALGAS_forInstructionAST temp_8 = this ;
  extensionMethod_generateConvertToBooleanCode (constinArgument_inContext.readProperty_mImplicitConversionToBooleanMap (), var_whileExpressionResult_5534, temp_8.readProperty_mEndOf_5F_whileExpression (), ioArgument_ioTemporaries, var_whileExpression_5F_GenerationList_5104, ioArgument_ioAllocaList, var_whileExpressionBooleanResult_5833, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 128)) ;
  switch (var_whileExpressionBooleanResult_5833.enumValue ()) {
  case GALGAS_implicitBooleanConversionResult::Enumeration::invalid:
    break ;
  case GALGAS_implicitBooleanConversionResult::Enumeration::enum_compileTime:
    {
      GALGAS_bool extractedValue_5925_boolValue_0 ;
      var_whileExpressionBooleanResult_5833.getAssociatedValuesFor_compileTime (extractedValue_5925_boolValue_0) ;
      enumGalgasBool test_9 = kBoolTrue ;
      if (kBoolTrue == test_9) {
        test_9 = extractedValue_5925_boolValue_0.operator_not (SOURCE_FILE ("instruction-for-in-do.galgas", 138)).boolEnum () ;
        if (kBoolTrue == test_9) {
          const GALGAS_forInstructionAST temp_10 = this ;
          TC_Array <FixItDescription> fixItArray11 ;
          inCompiler->emitSemanticError (temp_10.readProperty_mEndOf_5F_whileExpression (), GALGAS_string ("test expression is always false"), fixItArray11  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 139)) ;
        }
      }
    }
    break ;
  case GALGAS_implicitBooleanConversionResult::Enumeration::enum_llvmVariable:
    break ;
  }
  GALGAS_instructionListIR temp_12 = GALGAS_instructionListIR::init (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 153)) ;
  GALGAS_instructionListIR var_doInstructionList_5F_GenerationList_6651 = temp_12 ;
  const GALGAS_forInstructionAST temp_13 = this ;
  const GALGAS_forInstructionAST temp_14 = this ;
  extensionMethod_analyzeBranchInstructionList (temp_13.readProperty_mDoInstructionList (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, temp_14.readProperty_mEndOf_5F_for_5F_instruction (), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_doInstructionList_5F_GenerationList_6651, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 154)) ;
  {
  const GALGAS_forInstructionAST temp_15 = this ;
  extensionSetter_closeOverride (ioArgument_ioUniversalMap, temp_15.readProperty_mEndOf_5F_for_5F_instruction (), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 166)) ;
  }
  switch (var_iteratedType_4159.readProperty_subscript ().enumValue ()) {
  case GALGAS_subscript::Enumeration::invalid:
    break ;
  case GALGAS_subscript::Enumeration::enum_noSubscript:
    break ;
  case GALGAS_subscript::Enumeration::enum_literalString:
    {
      const GALGAS_forInstructionAST temp_16 = this ;
      ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_forInstructionOnLiteralStringIR::init_21__21__21__21__21__21__21_ (var_omnibusName_4612.readProperty_string (), temp_16.readProperty_mIteratedObject ().readProperty_location (), var_iteratedObjectPointer_4115, var_iteratedType_4159, var_whileExpression_5F_GenerationList_5104, var_whileExpressionResult_5534, var_doInstructionList_5F_GenerationList_6651, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 171)) ;
    }
    break ;
  case GALGAS_subscript::Enumeration::enum_staticSubscript:
    {
      GALGAS_omnibusType extractedValue_7606_elementType_0 ;
      GALGAS_bigint extractedValue_7618_size_1 ;
      var_iteratedType_4159.readProperty_subscript ().getAssociatedValuesFor_staticSubscript (extractedValue_7606_elementType_0, extractedValue_7618_size_1) ;
      GALGAS_stringset temp_17 = GALGAS_stringset::init (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 182)) ;
      GALGAS_stringset var_invokedFunctionSet_7706 = temp_17 ;
      enumGalgasBool test_18 = kBoolTrue ;
      if (kBoolTrue == test_18) {
        const GALGAS_forInstructionAST temp_19 = this ;
        test_18 = ioArgument_ioTemporaries.readProperty_mStaticArrayMapForTemporaries ().getter_hasKey (temp_19.readProperty_mIteratedObject ().readProperty_string () COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 183)).boolEnum () ;
        if (kBoolTrue == test_18) {
          const GALGAS_forInstructionAST temp_20 = this ;
          ioArgument_ioTemporaries.readProperty_mStaticArrayMapForTemporaries ().method_searchKey (temp_20.readProperty_mIteratedObject (), var_invokedFunctionSet_7706, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 184)) ;
        }
      }
      const GALGAS_forInstructionAST temp_21 = this ;
      ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_forInstructionOnArrayIR::init_21__21__21__21__21__21__21__21__21_ (var_omnibusName_4612.readProperty_string (), temp_21.readProperty_mIteratedObject (), var_iteratedObjectPointer_4115, var_whileExpression_5F_GenerationList_5104, extensionGetter_llvmName (var_whileExpressionBooleanResult_5833, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 191)), var_doInstructionList_5F_GenerationList_6651, extractedValue_7606_elementType_0, extractedValue_7618_size_1.getter_uint (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 194)), var_invokedFunctionSet_7706, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 186)) ;
    }
    break ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@forInstructionOnArrayIR llvmInstructionCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_forInstructionOnArrayIR::method_llvmInstructionCode (GALGAS_string & ioArgument_ioLLVMcode,
                                                               const GALGAS_generationContext constinArgument_inGenerationContext,
                                                               GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_forInstructionOnArrayIR temp_0 = this ;
  GALGAS_string var_elementTypeLLVMName_10479 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_0.readProperty_mElementType ().ptr (), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 253)) ;
  const GALGAS_forInstructionOnArrayIR temp_1 = this ;
  GALGAS_string var_listTypeLLVMName_10540 = GALGAS_string ("[").add_operation (temp_1.readProperty_mArraySize ().getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 254)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 254)).add_operation (GALGAS_string (" x "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 254)).add_operation (var_elementTypeLLVMName_10479, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 254)).add_operation (GALGAS_string ("]"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 254)) ;
  const GALGAS_forInstructionOnArrayIR temp_2 = this ;
  GALGAS_string var_locationIndex_10623 = temp_2.readProperty_mIteratedObjectName ().readProperty_location ().getter_endLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 255)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 255)) ;
  GALGAS_string var_startLabel_10710 = GALGAS_string ("for.label.start.").add_operation (var_locationIndex_10623, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 257)) ;
  GALGAS_string var_testLabel_10764 = GALGAS_string ("for.label.test.").add_operation (var_locationIndex_10623, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 258)) ;
  GALGAS_string var_whileLabel_10816 = GALGAS_string ("for.label.while.").add_operation (var_locationIndex_10623, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 259)) ;
  GALGAS_string var_nextLabel_10870 = GALGAS_string ("for.label.next.").add_operation (var_locationIndex_10623, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 260)) ;
  GALGAS_string var_loopVar_10922 = GALGAS_string ("for.loop.").add_operation (var_locationIndex_10623, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 261)) ;
  GALGAS_string var_loopLabel_10966 = GALGAS_string ("for.label.loop.").add_operation (var_locationIndex_10623, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 262)) ;
  GALGAS_string var_endLabel_11018 = GALGAS_string ("for.label.end.").add_operation (var_locationIndex_10623, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 263)) ;
  GALGAS_string var_indexVar_11071 = GALGAS_string ("for.index.").add_operation (var_locationIndex_10623, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 265)) ;
  GALGAS_string var_ptrVar_11118 = GALGAS_string ("for.ptr.").add_operation (var_locationIndex_10623, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 266)) ;
  GALGAS_string var_currentValue_11161 = GALGAS_string ("for.currentValue.").add_operation (var_locationIndex_10623, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 267)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_startLabel_10710, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 270)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 270)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 270)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_startLabel_10710.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 273)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 273)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_ptrVar_11118, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 275)).add_operation (GALGAS_string (".start = getelementptr inbounds "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 275)).add_operation (var_listTypeLLVMName_10540, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 275)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 275)) ;
  const GALGAS_forInstructionOnArrayIR temp_3 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", ").add_operation (var_listTypeLLVMName_10540, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 276)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 276)).add_operation (extensionGetter_llvmName (temp_3.readProperty_mIteratedObject (), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 276)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 276)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 276)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", i32 0, i32 0\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 277)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_testLabel_10764, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 279)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 279)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 279)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_testLabel_10764.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 282)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 282)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_ptrVar_11118, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 284)).add_operation (GALGAS_string (" = phi "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 284)).add_operation (var_elementTypeLLVMName_10479, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 284)).add_operation (GALGAS_string ("* [%"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 284)).add_operation (var_ptrVar_11118, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 284)).add_operation (GALGAS_string (".start, %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 284)).add_operation (var_startLabel_10710, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 284)).add_operation (GALGAS_string ("], [%"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 284)).add_operation (var_ptrVar_11118, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 285)).add_operation (GALGAS_string (".next, %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 285)).add_operation (var_nextLabel_10870, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 285)).add_operation (GALGAS_string ("]\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 285)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 284)) ;
  const GALGAS_forInstructionOnArrayIR temp_4 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_indexVar_11071, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 287)).add_operation (GALGAS_string (" = phi i32 ["), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 287)).add_operation (temp_4.readProperty_mArraySize ().getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 287)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 287)).add_operation (GALGAS_string (", %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 287)).add_operation (var_startLabel_10710, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 287)).add_operation (GALGAS_string ("], [%"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 287)).add_operation (var_indexVar_11071, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 288)).add_operation (GALGAS_string (".next, %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 288)).add_operation (var_nextLabel_10870, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 288)).add_operation (GALGAS_string ("]\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 288)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 287)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_loopVar_10922, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 289)).add_operation (GALGAS_string (" = icmp ugt i32 %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 289)).add_operation (var_indexVar_11071, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 289)).add_operation (GALGAS_string (", 0\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 289)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 289)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 %").add_operation (var_loopVar_10922, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 291)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 291)).add_operation (var_whileLabel_10816, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 291)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 291)).add_operation (var_endLabel_11018, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 291)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 291)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 291)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_whileLabel_10816.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 294)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 294)) ;
  const GALGAS_forInstructionOnArrayIR temp_5 = this ;
  extensionMethod_instructionListLLVMCode (temp_5.readProperty_mWhileInstructionList (), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 296)) ;
  const GALGAS_forInstructionOnArrayIR temp_6 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (temp_6.readProperty_mWhileExpressionBooleanResult_5F_llvmName (), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 297)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 297)).add_operation (var_loopLabel_10966, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 297)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 297)).add_operation (var_endLabel_11018, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 297)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 297)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 297)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_loopLabel_10966.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 300)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 300)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_currentValue_11161, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 302)).add_operation (GALGAS_string (" = load "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 302)).add_operation (var_elementTypeLLVMName_10479, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 302)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 302)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 302)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_elementTypeLLVMName_10479.add_operation (GALGAS_string ("* %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 303)).add_operation (var_ptrVar_11118, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 303)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 303)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 303)) ;
  const GALGAS_forInstructionOnArrayIR temp_7 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store ").add_operation (var_elementTypeLLVMName_10479, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 304)).add_operation (GALGAS_string (" %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 304)).add_operation (var_currentValue_11161, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 304)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 304)).add_operation (var_elementTypeLLVMName_10479, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 304)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 304)).add_operation (function_llvmNameForLocalVariable (temp_7.readProperty_mEnumeratedValueName (), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 305)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 305)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 305)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 304)) ;
  const GALGAS_forInstructionOnArrayIR temp_8 = this ;
  extensionMethod_instructionListLLVMCode (temp_8.readProperty_mDoInstructionList (), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 307)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_nextLabel_10870, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 308)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 308)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 308)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_nextLabel_10870.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 310)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 310)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_ptrVar_11118, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 312)).add_operation (GALGAS_string (".next = getelementptr inbounds "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 312)).add_operation (var_elementTypeLLVMName_10479, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 312)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 312)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 312)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_elementTypeLLVMName_10479.add_operation (GALGAS_string (" * %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 313)).add_operation (var_ptrVar_11118, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 313)).add_operation (GALGAS_string (", i32 1\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 313)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 313)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_indexVar_11071, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 315)).add_operation (GALGAS_string (".next = add i32 %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 315)).add_operation (var_indexVar_11071, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 315)).add_operation (GALGAS_string (", -1\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 315)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 315)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_testLabel_10764, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 316)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 316)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 316)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_endLabel_11018.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 319)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 319)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@forInstructionOnArrayIR enterAccessibleEntities'
//
//--------------------------------------------------------------------------------------------------

void cPtr_forInstructionOnArrayIR::method_enterAccessibleEntities (GALGAS_stringset & ioArgument_ioInvokedRoutineSet,
                                                                   GALGAS_uint & ioArgument_ioMaxBranchOfOnInstructions,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_forInstructionOnArrayIR temp_0 = this ;
  extensionMethod_enterAccessibleEntities (temp_0.readProperty_mWhileInstructionList (), ioArgument_ioInvokedRoutineSet, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 328)) ;
  const GALGAS_forInstructionOnArrayIR temp_1 = this ;
  extensionMethod_enterAccessibleEntities (temp_1.readProperty_mDoInstructionList (), ioArgument_ioInvokedRoutineSet, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 329)) ;
  const GALGAS_forInstructionOnArrayIR temp_2 = this ;
  ioArgument_ioInvokedRoutineSet.plusAssign_operation(temp_2.readProperty_mInvokedFunctionSet (), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 330)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@forInstructionOnLiteralStringIR llvmInstructionCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_forInstructionOnLiteralStringIR::method_llvmInstructionCode (GALGAS_string & ioArgument_ioLLVMcode,
                                                                       const GALGAS_generationContext constinArgument_inGenerationContext,
                                                                       GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_forInstructionOnLiteralStringIR temp_0 = this ;
  GALGAS_string var_startLabel_15059 = GALGAS_string ("for.label.start.").add_operation (temp_0.readProperty_mLocation ().getter_endLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 354)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 354)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 354)) ;
  const GALGAS_forInstructionOnLiteralStringIR temp_1 = this ;
  GALGAS_string var_testLabel_15133 = GALGAS_string ("for.label.test.").add_operation (temp_1.readProperty_mLocation ().getter_endLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 355)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 355)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 355)) ;
  const GALGAS_forInstructionOnLiteralStringIR temp_2 = this ;
  GALGAS_string var_loopLabel_15205 = GALGAS_string ("for.label.loop.").add_operation (temp_2.readProperty_mLocation ().getter_endLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 356)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 356)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 356)) ;
  const GALGAS_forInstructionOnLiteralStringIR temp_3 = this ;
  GALGAS_string var_whileLabel_15277 = GALGAS_string ("for.label.while.").add_operation (temp_3.readProperty_mLocation ().getter_endLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 357)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 357)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 357)) ;
  const GALGAS_forInstructionOnLiteralStringIR temp_4 = this ;
  GALGAS_string var_nextLabel_15351 = GALGAS_string ("for.label.next.").add_operation (temp_4.readProperty_mLocation ().getter_endLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 358)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 358)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 358)) ;
  const GALGAS_forInstructionOnLiteralStringIR temp_5 = this ;
  GALGAS_string var_endLabel_15423 = GALGAS_string ("for.label.end.").add_operation (temp_5.readProperty_mLocation ().getter_endLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 359)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 359)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 359)) ;
  const GALGAS_forInstructionOnLiteralStringIR temp_6 = this ;
  GALGAS_string var_ptrVar_15494 = GALGAS_string ("for.ptr.").add_operation (temp_6.readProperty_mLocation ().getter_endLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 360)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 360)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 360)) ;
  const GALGAS_forInstructionOnLiteralStringIR temp_7 = this ;
  GALGAS_string var_currentVar_15559 = GALGAS_string ("for.current.").add_operation (temp_7.readProperty_mLocation ().getter_endLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 361)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 361)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 361)) ;
  const GALGAS_forInstructionOnLiteralStringIR temp_8 = this ;
  GALGAS_string var_stringLLVMTypeName_15629 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_8.readProperty_mLiteralStringType ().ptr (), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 362)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_startLabel_15059, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 364)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 364)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 364)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_startLabel_15059.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 366)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 366)) ;
  const GALGAS_forInstructionOnLiteralStringIR temp_9 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_ptrVar_15494, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 367)).add_operation (GALGAS_string (".start = load "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 367)).add_operation (var_stringLLVMTypeName_15629, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 367)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 367)).add_operation (var_stringLLVMTypeName_15629, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 367)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 367)).add_operation (extensionGetter_llvmName (temp_9.readProperty_mStringElementIteratedObject (), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 367)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 367)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 367)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 367)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_testLabel_15133, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 368)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 368)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 368)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_testLabel_15133.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 371)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 371)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_ptrVar_15494, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 372)).add_operation (GALGAS_string (" = phi "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 372)).add_operation (var_stringLLVMTypeName_15629, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 372)).add_operation (GALGAS_string (" [%"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 372)).add_operation (var_ptrVar_15494, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 372)).add_operation (GALGAS_string (".start, %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 372)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 372)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_startLabel_15059.add_operation (GALGAS_string ("], [%"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 373)).add_operation (var_ptrVar_15494, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 373)).add_operation (GALGAS_string (".next, %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 373)).add_operation (var_nextLabel_15351, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 373)).add_operation (GALGAS_string ("]\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 373)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 373)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_currentVar_15559, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 374)).add_operation (GALGAS_string (" = load i8, "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 374)).add_operation (var_stringLLVMTypeName_15629, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 374)).add_operation (GALGAS_string (" %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 374)).add_operation (var_ptrVar_15494, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 374)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 374)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 374)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_currentVar_15559, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 375)).add_operation (GALGAS_string (".nul = icmp eq i8 %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 375)).add_operation (var_currentVar_15559, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 375)).add_operation (GALGAS_string (", 0\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 375)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 375)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 %").add_operation (var_currentVar_15559, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 376)).add_operation (GALGAS_string (".nul, label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 376)).add_operation (var_endLabel_15423, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 376)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 376)).add_operation (var_whileLabel_15277, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 376)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 376)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 376)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_whileLabel_15277.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 379)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 379)) ;
  const GALGAS_forInstructionOnLiteralStringIR temp_10 = this ;
  extensionMethod_instructionListLLVMCode (temp_10.readProperty_mWhileInstructionList (), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 381)) ;
  const GALGAS_forInstructionOnLiteralStringIR temp_11 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (extensionGetter_llvmName (temp_11.readProperty_mWhileExpressionResult (), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 382)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 382)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 382)).add_operation (var_loopLabel_15205, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 382)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 382)).add_operation (var_endLabel_15423, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 382)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 382)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 382)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_loopLabel_15205.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 385)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 385)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store i8 %").add_operation (var_currentVar_15559, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 387)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 387)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 387)) ;
  const GALGAS_forInstructionOnLiteralStringIR temp_12 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("i8 * ").add_operation (function_llvmNameForLocalVariable (temp_12.readProperty_mVarName (), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 388)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 388)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 388)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 388)) ;
  const GALGAS_forInstructionOnLiteralStringIR temp_13 = this ;
  extensionMethod_instructionListLLVMCode (temp_13.readProperty_mDoInstructionList (), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 390)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_nextLabel_15351, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 391)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 391)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 391)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_nextLabel_15351.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 393)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 393)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_ptrVar_15494, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 394)).add_operation (GALGAS_string (".next = getelementptr inbounds i8, "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 394)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 394)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("i8 * %").add_operation (var_ptrVar_15494, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 395)).add_operation (GALGAS_string (", i32 1\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 395)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 395)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_testLabel_15133, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 396)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 396)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 396)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_endLabel_15423.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 399)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 399)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@forInstructionOnLiteralStringIR enterAccessibleEntities'
//
//--------------------------------------------------------------------------------------------------

void cPtr_forInstructionOnLiteralStringIR::method_enterAccessibleEntities (GALGAS_stringset & ioArgument_ioInvokedRoutineSet,
                                                                           GALGAS_uint & ioArgument_ioMaxBranchOfOnInstructions,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_forInstructionOnLiteralStringIR temp_0 = this ;
  extensionMethod_enterAccessibleEntities (temp_0.readProperty_mWhileInstructionList (), ioArgument_ioInvokedRoutineSet, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 408)) ;
  const GALGAS_forInstructionOnLiteralStringIR temp_1 = this ;
  extensionMethod_enterAccessibleEntities (temp_1.readProperty_mDoInstructionList (), ioArgument_ioInvokedRoutineSet, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 409)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@forLowerUpperBoundInstructionAST noteInstructionTypesInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_forLowerUpperBoundInstructionAST::method_noteInstructionTypesInPrecedenceGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_forLowerUpperBoundInstructionAST temp_1 = this ;
    test_0 = GALGAS_bool (ComparisonKind::notEqual, temp_1.readProperty_mTypeName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      const GALGAS_forLowerUpperBoundInstructionAST temp_2 = this ;
      ioArgument_ioGraph.setter_noteNode (temp_2.readProperty_mTypeName () COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 67)) ;
      }
    }
  }
  const GALGAS_forLowerUpperBoundInstructionAST temp_3 = this ;
  extensionMethod_noteInstructionListTypesInPrecedenceGraph (temp_3.readProperty_mDoInstructionList (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 69)) ;
  const GALGAS_forLowerUpperBoundInstructionAST temp_4 = this ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((cPtr_expressionAST *) temp_4.readProperty_mLowerBoundExpression ().ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 70)) ;
  const GALGAS_forLowerUpperBoundInstructionAST temp_5 = this ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((cPtr_expressionAST *) temp_5.readProperty_mUpperBoundExpression ().ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 71)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@forLowerUpperBoundInstructionAST instructionSemanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_forLowerUpperBoundInstructionAST::method_instructionSemanticAnalysis (const GALGAS_omnibusType constinArgument_inSelfType,
                                                                                const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                                                                const GALGAS_semanticContext constinArgument_inContext,
                                                                                const GALGAS_mode constinArgument_inMode,
                                                                                GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                                GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                                GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                                GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                                GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_forLowerUpperBoundInstructionAST temp_0 = this ;
  GALGAS_omnibusType var_type_4164 = extensionGetter_type (extensionGetter_searchKey (constinArgument_inContext.readProperty_mTypeMap (), temp_0.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 90)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 90)) ;
  switch (var_type_4164.readProperty_kind ().enumValue ()) {
  case GALGAS_typeKind::Enumeration::invalid:
    break ;
  case GALGAS_typeKind::Enumeration::enum_boolean:
  case GALGAS_typeKind::Enumeration::enum_void:
    {
      const GALGAS_forLowerUpperBoundInstructionAST temp_1 = this ;
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mTypeName ().readProperty_location (), GALGAS_string ("an integer type is required here"), fixItArray2  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 93)) ;
    }
    break ;
  case GALGAS_typeKind::Enumeration::enum_staticArrayType:
    {
      GALGAS_omnibusType extractedValue_4353__0 ;
      GALGAS_bigint extractedValue_4355__1 ;
      var_type_4164.readProperty_kind ().getAssociatedValuesFor_staticArrayType (extractedValue_4353__0, extractedValue_4355__1) ;
      const GALGAS_forLowerUpperBoundInstructionAST temp_3 = this ;
      TC_Array <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mTypeName ().readProperty_location (), GALGAS_string ("an integer type is required here"), fixItArray4  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 95)) ;
    }
    break ;
  case GALGAS_typeKind::Enumeration::enum_dynamicArrayType:
    {
      GALGAS_omnibusType extractedValue_4447__0 ;
      var_type_4164.readProperty_kind ().getAssociatedValuesFor_dynamicArrayType (extractedValue_4447__0) ;
      const GALGAS_forLowerUpperBoundInstructionAST temp_5 = this ;
      TC_Array <FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mTypeName ().readProperty_location (), GALGAS_string ("an integer type is required here"), fixItArray6  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 97)) ;
    }
    break ;
  case GALGAS_typeKind::Enumeration::enum_enumeration:
    break ;
  case GALGAS_typeKind::Enumeration::enum_literalString:
    {
      const GALGAS_forLowerUpperBoundInstructionAST temp_7 = this ;
      TC_Array <FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (temp_7.readProperty_mTypeName ().readProperty_location (), GALGAS_string ("an integer type is required here"), fixItArray8  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 100)) ;
    }
    break ;
  case GALGAS_typeKind::Enumeration::enum_opaque:
    {
      GALGAS_bigint extractedValue_4639__0 ;
      var_type_4164.readProperty_kind ().getAssociatedValuesFor_opaque (extractedValue_4639__0) ;
      const GALGAS_forLowerUpperBoundInstructionAST temp_9 = this ;
      TC_Array <FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (temp_9.readProperty_mTypeName ().readProperty_location (), GALGAS_string ("an integer type is required here"), fixItArray10  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 102)) ;
    }
    break ;
  case GALGAS_typeKind::Enumeration::enum_compileTimeBool:
    {
      const GALGAS_forLowerUpperBoundInstructionAST temp_11 = this ;
      TC_Array <FixItDescription> fixItArray12 ;
      inCompiler->emitSemanticError (temp_11.readProperty_mTypeName ().readProperty_location (), GALGAS_string ("an integer type is required here"), fixItArray12  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 104)) ;
    }
    break ;
  case GALGAS_typeKind::Enumeration::enum_llvmType:
    {
      GALGAS_bigint extractedValue_4810__0 ;
      var_type_4164.readProperty_kind ().getAssociatedValuesFor_llvmType (extractedValue_4810__0) ;
      const GALGAS_forLowerUpperBoundInstructionAST temp_13 = this ;
      TC_Array <FixItDescription> fixItArray14 ;
      inCompiler->emitSemanticError (temp_13.readProperty_mTypeName ().readProperty_location (), GALGAS_string ("an integer type is required here"), fixItArray14  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 106)) ;
    }
    break ;
  case GALGAS_typeKind::Enumeration::enum_generic:
    {
      GALGAS_genericFormalParameterList extractedValue_4894__0 ;
      GALGAS_ctExpressionAST extractedValue_4894__1 ;
      GALGAS_llvmStringDefinition extractedValue_4894__2 ;
      var_type_4164.readProperty_kind ().getAssociatedValuesFor_generic (extractedValue_4894__0, extractedValue_4894__1, extractedValue_4894__2) ;
      const GALGAS_forLowerUpperBoundInstructionAST temp_15 = this ;
      TC_Array <FixItDescription> fixItArray16 ;
      inCompiler->emitSemanticError (temp_15.readProperty_mTypeName ().readProperty_location (), GALGAS_string ("an integer type is required here"), fixItArray16  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 108)) ;
    }
    break ;
  case GALGAS_typeKind::Enumeration::enum_compileTimeInteger:
    {
      const GALGAS_forLowerUpperBoundInstructionAST temp_17 = this ;
      TC_Array <FixItDescription> fixItArray18 ;
      inCompiler->emitSemanticError (temp_17.readProperty_mTypeName ().readProperty_location (), GALGAS_string ("an integer type is required here"), fixItArray18  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 110)) ;
    }
    break ;
  case GALGAS_typeKind::Enumeration::enum_structure:
    {
      GALGAS_propertyList extractedValue_5069__0 ;
      var_type_4164.readProperty_kind ().getAssociatedValuesFor_structure (extractedValue_5069__0) ;
      const GALGAS_forLowerUpperBoundInstructionAST temp_19 = this ;
      TC_Array <FixItDescription> fixItArray20 ;
      inCompiler->emitSemanticError (temp_19.readProperty_mTypeName ().readProperty_location (), GALGAS_string ("an integer type is required here"), fixItArray20  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 112)) ;
    }
    break ;
  case GALGAS_typeKind::Enumeration::enum_syncTool:
    {
      const GALGAS_forLowerUpperBoundInstructionAST temp_21 = this ;
      TC_Array <FixItDescription> fixItArray22 ;
      inCompiler->emitSemanticError (temp_21.readProperty_mTypeName ().readProperty_location (), GALGAS_string ("an integer type is required here"), fixItArray22  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 114)) ;
    }
    break ;
  case GALGAS_typeKind::Enumeration::enum_function:
    {
      GALGAS_mode extractedValue_5234__0 ;
      GALGAS_routineTypedSignature extractedValue_5234__1 ;
      GALGAS_unifiedTypeMapEntry extractedValue_5234__2 ;
      var_type_4164.readProperty_kind ().getAssociatedValuesFor_function (extractedValue_5234__0, extractedValue_5234__1, extractedValue_5234__2) ;
      const GALGAS_forLowerUpperBoundInstructionAST temp_23 = this ;
      TC_Array <FixItDescription> fixItArray24 ;
      inCompiler->emitSemanticError (temp_23.readProperty_mTypeName ().readProperty_location (), GALGAS_string ("an integer type is required here"), fixItArray24  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 116)) ;
    }
    break ;
  case GALGAS_typeKind::Enumeration::enum_integer:
    {
      GALGAS_bigint extractedValue_5332_min_0 ;
      GALGAS_bigint extractedValue_5351_max_1 ;
      GALGAS_bool extractedValue_5361_unsigned_2 ;
      GALGAS_uint extractedValue_5383_bitCount_3 ;
      var_type_4164.readProperty_kind ().getAssociatedValuesFor_integer (extractedValue_5332_min_0, extractedValue_5351_max_1, extractedValue_5361_unsigned_2, extractedValue_5383_bitCount_3) ;
      GALGAS_objectIR var_lowerBoundExpressionResult_5830 ;
      const GALGAS_forLowerUpperBoundInstructionAST temp_25 = this ;
      callExtensionMethod_analyzeExpression ((cPtr_expressionAST *) temp_25.readProperty_mLowerBoundExpression ().ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, var_type_4164, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_lowerBoundExpressionResult_5830, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 119)) ;
      {
      extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_lowerBoundExpressionResult_5830, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 132)) ;
      }
      GALGAS_objectIR var_upperBoundExpressionResult_6395 ;
      const GALGAS_forLowerUpperBoundInstructionAST temp_26 = this ;
      callExtensionMethod_analyzeExpression ((cPtr_expressionAST *) temp_26.readProperty_mUpperBoundExpression ().ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, var_type_4164, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_upperBoundExpressionResult_6395, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 136)) ;
      {
      extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_upperBoundExpressionResult_6395, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 149)) ;
      }
      const GALGAS_forLowerUpperBoundInstructionAST temp_27 = this ;
      GALGAS_objectIR var_lowerBound_6590 = function_checkAssignmentCompatibility (constinArgument_inContext.readProperty_mAssignmentOperatorMap (), var_lowerBoundExpressionResult_5830, var_type_4164, temp_27.readProperty_mEndOf_5F_lowerBoundExpression_5F_instruction (), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 154)) ;
      const GALGAS_forLowerUpperBoundInstructionAST temp_28 = this ;
      GALGAS_objectIR var_upperBound_6859 = function_checkAssignmentCompatibility (constinArgument_inContext.readProperty_mAssignmentOperatorMap (), var_upperBoundExpressionResult_6395, var_type_4164, temp_28.readProperty_mEndOf_5F_upperBoundExpression_5F_instruction (), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 161)) ;
      {
      extensionSetter_openOverrideForRepeatBlock (ioArgument_ioUniversalMap, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 169)) ;
      }
      const GALGAS_forLowerUpperBoundInstructionAST temp_29 = this ;
      const GALGAS_forLowerUpperBoundInstructionAST temp_30 = this ;
      GALGAS_lstring var_enumeratedVarName_7222 = GALGAS_lstring::init_21__21_ (temp_29.readProperty_mVarName ().readProperty_string ().add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 171)).add_operation (ioArgument_ioTemporaries.readProperty_mTemporaryIndex ().getter_string (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 171)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 171)), temp_30.readProperty_mVarName ().readProperty_location (), inCompiler COMMA_HERE) ;
      ioArgument_ioTemporaries.mProperty_mTemporaryIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 172)) ;
      ioArgument_ioAllocaList.addAssign_operation (function_llvmNameForLocalVariable (var_enumeratedVarName_7222.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 173)), var_type_4164, GALGAS_bool (false)  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 173)) ;
      enumGalgasBool test_31 = kBoolTrue ;
      if (kBoolTrue == test_31) {
        const GALGAS_forLowerUpperBoundInstructionAST temp_32 = this ;
        test_31 = GALGAS_bool (ComparisonKind::notEqual, temp_32.readProperty_mVarName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_31) {
          {
          const GALGAS_forLowerUpperBoundInstructionAST temp_33 = this ;
          extensionSetter_insertLocalConstant (ioArgument_ioUniversalMap, temp_33.readProperty_mVarName (), GALGAS_bool (false), var_type_4164, var_enumeratedVarName_7222, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 175)) ;
          }
        }
      }
      GALGAS_instructionListIR temp_34 = GALGAS_instructionListIR::init (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 178)) ;
      GALGAS_instructionListIR var_instructionGenerationList_7649 = temp_34 ;
      const GALGAS_forLowerUpperBoundInstructionAST temp_35 = this ;
      const GALGAS_forLowerUpperBoundInstructionAST temp_36 = this ;
      extensionMethod_analyzeBranchInstructionList (temp_35.readProperty_mDoInstructionList (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, temp_36.readProperty_mEndOf_5F_do_5F_instruction (), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_instructionGenerationList_7649, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 179)) ;
      {
      const GALGAS_forLowerUpperBoundInstructionAST temp_37 = this ;
      extensionSetter_closeOverride (ioArgument_ioUniversalMap, temp_37.readProperty_mEndOf_5F_do_5F_instruction (), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 191)) ;
      }
      const GALGAS_forLowerUpperBoundInstructionAST temp_38 = this ;
      ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_forLowerUpperBoundInstructionIR::init_21__21__21__21__21__21__21_ (var_enumeratedVarName_7222.readProperty_string (), var_type_4164, extractedValue_5361_unsigned_2, temp_38.readProperty_mEndOf_5F_do_5F_instruction (), var_lowerBound_6590, var_upperBound_6859, var_instructionGenerationList_7649, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 193)) ;
    }
    break ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@forLowerUpperBoundInstructionIR llvmInstructionCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_forLowerUpperBoundInstructionIR::method_llvmInstructionCode (GALGAS_string & ioArgument_ioLLVMcode,
                                                                       const GALGAS_generationContext constinArgument_inGenerationContext,
                                                                       GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_forLowerUpperBoundInstructionIR temp_0 = this ;
  GALGAS_string var_llvmType_9566 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_0.readProperty_mType ().ptr (), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 229)) ;
  const GALGAS_forLowerUpperBoundInstructionIR temp_1 = this ;
  GALGAS_string var_llvmVarName_9609 = function_llvmNameForLocalVariable (temp_1.readProperty_mVarName (), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 230)) ;
  const GALGAS_forLowerUpperBoundInstructionIR temp_2 = this ;
  GALGAS_string var_testLabel_9671 = GALGAS_string ("for.").add_operation (temp_2.readProperty_mLocation ().getter_endLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 231)).getter_string (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 231)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 231)).add_operation (GALGAS_string (".test"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 231)) ;
  const GALGAS_forLowerUpperBoundInstructionIR temp_3 = this ;
  GALGAS_string var_loopLabel_9742 = GALGAS_string ("for.").add_operation (temp_3.readProperty_mLocation ().getter_endLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 232)).getter_string (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 232)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 232)).add_operation (GALGAS_string (".loop"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 232)) ;
  const GALGAS_forLowerUpperBoundInstructionIR temp_4 = this ;
  GALGAS_string var_endLabel_9813 = GALGAS_string ("for.").add_operation (temp_4.readProperty_mLocation ().getter_endLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 233)).getter_string (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 233)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 233)).add_operation (GALGAS_string (".end"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 233)) ;
  const GALGAS_forLowerUpperBoundInstructionIR temp_5 = this ;
  GALGAS_string var_testResult_9883 = GALGAS_string ("%for.").add_operation (temp_5.readProperty_mLocation ().getter_endLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 234)).getter_string (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 234)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 234)).add_operation (GALGAS_string (".test.result"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 234)) ;
  const GALGAS_forLowerUpperBoundInstructionIR temp_6 = this ;
  GALGAS_string var_loadedVarName_9963 = GALGAS_string::makeEmptyString ().add_operation (function_llvmNameForLocalVariable (temp_6.readProperty_mVarName ().add_operation (GALGAS_string (".loaded"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 235)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 235)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 235)) ;
  const GALGAS_forLowerUpperBoundInstructionIR temp_7 = this ;
  GALGAS_string var_currentVarName_10044 = GALGAS_string::makeEmptyString ().add_operation (function_llvmNameForLocalVariable (temp_7.readProperty_mVarName ().add_operation (GALGAS_string (".current"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 236)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 236)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 236)) ;
  const GALGAS_forLowerUpperBoundInstructionIR temp_8 = this ;
  GALGAS_string var_nextVarName_10127 = GALGAS_string::makeEmptyString ().add_operation (function_llvmNameForLocalVariable (temp_8.readProperty_mVarName ().add_operation (GALGAS_string (".next"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 237)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 237)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 237)) ;
  const GALGAS_forLowerUpperBoundInstructionIR temp_9 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store ").add_operation (var_llvmType_9566, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 239)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 239)).add_operation (extensionGetter_llvmName (temp_9.readProperty_mLowerExpressionResult (), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 239)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 239)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 239)).add_operation (var_llvmType_9566, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 239)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 239)).add_operation (var_llvmVarName_9609, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 239)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 239)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 239)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_testLabel_9671, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 240)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 240)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 240)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_testLabel_9671.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 242)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 242)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_loadedVarName_9963, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 243)).add_operation (GALGAS_string (" = load "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 243)).add_operation (var_llvmType_9566, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 243)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 243)).add_operation (var_llvmType_9566, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 243)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 243)).add_operation (var_llvmVarName_9609, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 243)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 243)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 243)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_testResult_9883, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 244)).add_operation (GALGAS_string (" = icmp "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 244)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 244)) ;
  const GALGAS_forLowerUpperBoundInstructionIR temp_10 = this ;
  GALGAS_string temp_11 ;
  const enumGalgasBool test_12 = temp_10.readProperty_mUnsigned ().boolEnum () ;
  if (kBoolTrue == test_12) {
    temp_11 = GALGAS_string ("ult") ;
  }else if (kBoolFalse == test_12) {
    temp_11 = GALGAS_string ("slt") ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(temp_11, inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 245)) ;
  const GALGAS_forLowerUpperBoundInstructionIR temp_13 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ").add_operation (var_llvmType_9566, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 246)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 246)).add_operation (var_loadedVarName_9963, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 246)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 246)).add_operation (extensionGetter_llvmName (temp_13.readProperty_mUpperExpressionResult (), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 246)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 246)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 246)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 246)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (var_testResult_9883, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 247)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 247)).add_operation (var_loopLabel_9742, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 247)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 247)).add_operation (var_endLabel_9813, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 247)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 247)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 247)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_loopLabel_9742.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 249)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 249)) ;
  const GALGAS_forLowerUpperBoundInstructionIR temp_14 = this ;
  extensionMethod_instructionListLLVMCode (temp_14.readProperty_mInstructionList (), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 250)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_currentVarName_10044, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 251)).add_operation (GALGAS_string (" = load "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 251)).add_operation (var_llvmType_9566, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 251)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 251)).add_operation (var_llvmType_9566, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 251)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 251)).add_operation (var_llvmVarName_9609, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 251)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 251)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 251)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_nextVarName_10127, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 252)).add_operation (GALGAS_string (" = add "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 252)).add_operation (var_llvmType_9566, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 252)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 252)).add_operation (var_currentVarName_10044, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 252)).add_operation (GALGAS_string (", 1\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 252)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 252)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store ").add_operation (var_llvmType_9566, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 253)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 253)).add_operation (var_nextVarName_10127, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 253)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 253)).add_operation (var_llvmType_9566, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 253)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 253)).add_operation (var_llvmVarName_9609, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 253)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 253)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 253)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_testLabel_9671, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 254)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 254)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 254)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_endLabel_9813.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 256)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 256)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@forLowerUpperBoundInstructionIR enterAccessibleEntities'
//
//--------------------------------------------------------------------------------------------------

void cPtr_forLowerUpperBoundInstructionIR::method_enterAccessibleEntities (GALGAS_stringset & ioArgument_ioInvokedRoutineSet,
                                                                           GALGAS_uint & ioArgument_ioMaxBranchOfOnInstructions,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_forLowerUpperBoundInstructionIR temp_0 = this ;
  extensionMethod_enterAccessibleEntities (temp_0.readProperty_mInstructionList (), ioArgument_ioInvokedRoutineSet, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 265)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@procedureCallInstructionAST noteInstructionTypesInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_procedureCallInstructionAST::method_noteInstructionTypesInPrecedenceGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_procedureCallInstructionAST temp_0 = this ;
  cEnumerator_accessInAssignmentListAST enumerator_4135 (temp_0.readProperty_mAccessList (), EnumerationOrder::up) ;
  while (enumerator_4135.hasCurrentObject ()) {
    switch (enumerator_4135.current_mAccess (HERE).enumValue ()) {
    case GALGAS_accessInAssignmentAST::Enumeration::invalid:
      break ;
    case GALGAS_accessInAssignmentAST::Enumeration::enum_property:
      break ;
    case GALGAS_accessInAssignmentAST::Enumeration::enum_arrayAccess:
      {
        GALGAS_expressionAST extractedValue_4245_indexExpression_0 ;
        GALGAS_location extractedValue_4262__1 ;
        GALGAS_bool extractedValue_4262__2 ;
        enumerator_4135.current_mAccess (HERE).getAssociatedValuesFor_arrayAccess (extractedValue_4245_indexExpression_0, extractedValue_4262__1, extractedValue_4262__2) ;
        callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((cPtr_expressionAST *) extractedValue_4245_indexExpression_0.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 92)) ;
      }
      break ;
    }
    enumerator_4135.gotoNextObject () ;
  }
  const GALGAS_procedureCallInstructionAST temp_1 = this ;
  cEnumerator_effectiveArgumentListAST enumerator_4383 (temp_1.readProperty_mArguments (), EnumerationOrder::up) ;
  while (enumerator_4383.hasCurrentObject ()) {
    switch (enumerator_4383.current_mEffectiveParameterKind (HERE).enumValue ()) {
    case GALGAS_effectiveArgumentPassingModeAST::Enumeration::invalid:
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::Enumeration::enum_input:
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::Enumeration::enum_inputWithType:
      {
        GALGAS_bool extractedValue_4487__0 ;
        GALGAS_lstring extractedValue_4498_typeName_1 ;
        GALGAS_lstring extractedValue_4507__2 ;
        enumerator_4383.current_mEffectiveParameterKind (HERE).getAssociatedValuesFor_inputWithType (extractedValue_4487__0, extractedValue_4498_typeName_1, extractedValue_4507__2) ;
        enumGalgasBool test_2 = kBoolTrue ;
        if (kBoolTrue == test_2) {
          test_2 = GALGAS_bool (ComparisonKind::notEqual, extractedValue_4498_typeName_1.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_2) {
            {
            ioArgument_ioGraph.setter_noteNode (extractedValue_4498_typeName_1 COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 100)) ;
            }
          }
        }
      }
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::Enumeration::enum_output:
      {
        GALGAS_expressionAST extractedValue_4614_expression_0 ;
        GALGAS_location extractedValue_4625__1 ;
        enumerator_4383.current_mEffectiveParameterKind (HERE).getAssociatedValuesFor_output (extractedValue_4614_expression_0, extractedValue_4625__1) ;
        callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((cPtr_expressionAST *) extractedValue_4614_expression_0.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 102)) ;
      }
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::Enumeration::enum_outputInput:
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::Enumeration::enum_outputInputSelfVariable:
      break ;
    }
    enumerator_4383.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@standAloneProcedureCallInstructionAST noteInstructionTypesInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_standAloneProcedureCallInstructionAST::method_noteInstructionTypesInPrecedenceGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_standAloneProcedureCallInstructionAST temp_0 = this ;
  cEnumerator_effectiveArgumentListAST enumerator_5063 (temp_0.readProperty_mArguments (), EnumerationOrder::up) ;
  while (enumerator_5063.hasCurrentObject ()) {
    switch (enumerator_5063.current_mEffectiveParameterKind (HERE).enumValue ()) {
    case GALGAS_effectiveArgumentPassingModeAST::Enumeration::invalid:
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::Enumeration::enum_input:
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::Enumeration::enum_inputWithType:
      {
        GALGAS_bool extractedValue_5167__0 ;
        GALGAS_lstring extractedValue_5178_typeName_1 ;
        GALGAS_lstring extractedValue_5187__2 ;
        enumerator_5063.current_mEffectiveParameterKind (HERE).getAssociatedValuesFor_inputWithType (extractedValue_5167__0, extractedValue_5178_typeName_1, extractedValue_5187__2) ;
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          test_1 = GALGAS_bool (ComparisonKind::notEqual, extractedValue_5178_typeName_1.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_1) {
            {
            ioArgument_ioGraph.setter_noteNode (extractedValue_5178_typeName_1 COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 119)) ;
            }
          }
        }
      }
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::Enumeration::enum_output:
      {
        GALGAS_expressionAST extractedValue_5294_expression_0 ;
        GALGAS_location extractedValue_5305__1 ;
        enumerator_5063.current_mEffectiveParameterKind (HERE).getAssociatedValuesFor_output (extractedValue_5294_expression_0, extractedValue_5305__1) ;
        callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((cPtr_expressionAST *) extractedValue_5294_expression_0.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 121)) ;
      }
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::Enumeration::enum_outputInput:
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::Enumeration::enum_outputInputSelfVariable:
      break ;
    }
    enumerator_5063.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@standAloneProcedureCallInstructionAST instructionSemanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_standAloneProcedureCallInstructionAST::method_instructionSemanticAnalysis (const GALGAS_omnibusType constinArgument_inSelfType,
                                                                                     const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                                                                     const GALGAS_semanticContext constinArgument_inContext,
                                                                                     const GALGAS_mode constinArgument_inMode,
                                                                                     GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                                     GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                                     GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                                     GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                                     GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_standAloneProcedureCallInstructionAST temp_0 = this ;
  const GALGAS_standAloneProcedureCallInstructionAST temp_1 = this ;
  GALGAS_lstring var_calledRoutineSignature_7220 = extensionGetter_routineSignature (temp_0.readProperty_mArguments (), temp_1.readProperty_mSandAloneRoutineName ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 167)) ;
  const GALGAS_standAloneProcedureCallInstructionAST temp_2 = this ;
  GALGAS_string var_requiredFunctionMangledName_7350 = temp_2.readProperty_mSandAloneRoutineName ().readProperty_string ().add_operation (var_calledRoutineSignature_7220.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 169)) ;
  GALGAS_bool var_implementedPublic_7610 ;
  GALGAS_routineTypedSignature var_formalSignature_7637 ;
  GALGAS_unifiedTypeMapEntry var_formalReturnTypeProxy_7662 ;
  GALGAS_routineLLVMNameDict var_implementedModeDictionary_7721 ;
  GALGAS_bool var_implementedIsExported_7763 ;
  GALGAS_mode var_implementedMode_7801 ;
  const GALGAS_standAloneProcedureCallInstructionAST temp_3 = this ;
  constinArgument_inContext.readProperty_mRoutineMap ().method_searchKey (GALGAS_lstring::init_21__21_ (var_requiredFunctionMangledName_7350, temp_3.readProperty_mSandAloneRoutineName ().readProperty_location (), inCompiler COMMA_HERE), var_implementedPublic_7610, var_formalSignature_7637, var_formalReturnTypeProxy_7662, var_implementedModeDictionary_7721, var_implementedIsExported_7763, var_implementedMode_7801, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 171)) ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = GALGAS_bool (ComparisonKind::notEqual, var_formalReturnTypeProxy_7662.objectCompare (GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("instruction-procedure-call.galgas", 181)))).boolEnum () ;
    if (kBoolTrue == test_4) {
      const GALGAS_standAloneProcedureCallInstructionAST temp_5 = this ;
      TC_Array <FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mSandAloneRoutineName ().readProperty_location (), GALGAS_string ("this function returns a value, cannot be used as a procedure"), fixItArray6  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 182)) ;
    }
  }
  const GALGAS_standAloneProcedureCallInstructionAST temp_7 = this ;
  GALGAS_string var_functionLLVMName_8032 = function_checkModeAndReturnsRoutineLLVMName (var_implementedModeDictionary_7721, constinArgument_inMode, temp_7.readProperty_mSandAloneRoutineName (), inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 185)) ;
  GALGAS_procCallEffectiveParameterListIR temp_8 = GALGAS_procCallEffectiveParameterListIR::init (inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 187)) ;
  GALGAS_procCallEffectiveParameterListIR var_effectiveParameterListIR_8225 = temp_8 ;
  {
  const GALGAS_standAloneProcedureCallInstructionAST temp_9 = this ;
  const GALGAS_standAloneProcedureCallInstructionAST temp_10 = this ;
  routine_analyzeEffectiveParameters_3F_self_3F_routineAttributes_3F_formal_3F_effective_3F_errorLocation_3F_context_3F_requiredMode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_26_effectiveIR (constinArgument_inSelfType, constinArgument_inRoutineAttributes, var_formalSignature_7637, temp_9.readProperty_mArguments (), temp_10.readProperty_mSandAloneRoutineName ().readProperty_location (), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_effectiveParameterListIR_8225, inCompiler  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 188)) ;
  }
  const GALGAS_standAloneProcedureCallInstructionAST temp_11 = this ;
  const GALGAS_standAloneProcedureCallInstructionAST temp_12 = this ;
  GALGAS_lstring var_routineMangledName_8787 = function_routineMangledNameFromCall (GALGAS_string::makeEmptyString (), temp_11.readProperty_mSandAloneRoutineName (), temp_12.readProperty_mArguments (), inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 205)) ;
  ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_standaloneRoutineCallIR::init_21__21__21__21_ (GALGAS_objectIR::class_func_void (SOURCE_FILE ("instruction-procedure-call.galgas", 212)), var_routineMangledName_8787, var_functionLLVMName_8032, var_effectiveParameterListIR_8225, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 211)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@procedureCallInstructionAST instructionSemanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_procedureCallInstructionAST::method_instructionSemanticAnalysis (const GALGAS_omnibusType constinArgument_inSelfType,
                                                                           const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                                                           const GALGAS_semanticContext constinArgument_inContext,
                                                                           const GALGAS_mode constinArgument_inMode,
                                                                           GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                           GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                           GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                           GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                           GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool var_receiverIsSelf_9895 = GALGAS_bool (false) ;
  GALGAS_omnibusType var_currentType_9937 ;
  GALGAS_string var_currentLLVMAddressVar_9963 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_procedureCallInstructionAST temp_1 = this ;
    test_0 = GALGAS_bool (ComparisonKind::equal, temp_1.readProperty_mIdentifier ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      var_receiverIsSelf_9895 = GALGAS_bool (true) ;
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = GALGAS_bool (ComparisonKind::equal, constinArgument_inSelfType.readProperty_kind ().objectCompare (GALGAS_typeKind::class_func_void (SOURCE_FILE ("instruction-procedure-call.galgas", 239)))).boolEnum () ;
        if (kBoolTrue == test_2) {
          const GALGAS_procedureCallInstructionAST temp_3 = this ;
          TC_Array <FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (temp_3.readProperty_mIdentifier ().readProperty_location (), GALGAS_string ("self is not available in this context"), fixItArray4  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 240)) ;
          var_currentType_9937.drop () ; // Release error dropped variable
          var_currentLLVMAddressVar_9963.drop () ; // Release error dropped variable
        }
      }
      if (kBoolFalse == test_2) {
        var_currentType_9937 = constinArgument_inSelfType ;
        var_currentLLVMAddressVar_9963 = function_llvmNameForSelf (inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 243)) ;
      }
    }
  }
  if (kBoolFalse == test_0) {
    GALGAS_valuedObject var_entity_10389 ;
    const GALGAS_procedureCallInstructionAST temp_5 = this ;
    extensionMethod_searchEntity (ioArgument_ioUniversalMap, temp_5.readProperty_mIdentifier (), var_entity_10389, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 246)) ;
    switch (var_entity_10389.enumValue ()) {
    case GALGAS_valuedObject::Enumeration::invalid:
      break ;
    case GALGAS_valuedObject::Enumeration::enum_task:
      {
        GALGAS_omnibusType extractedValue_10443_type_0 ;
        var_entity_10389.getAssociatedValuesFor_task (extractedValue_10443_type_0) ;
        var_currentType_9937 = extractedValue_10443_type_0 ;
        const GALGAS_procedureCallInstructionAST temp_6 = this ;
        var_currentLLVMAddressVar_9963 = function_llvmNameForGlobalVariable (temp_6.readProperty_mIdentifier ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 250)) ;
      }
      break ;
    case GALGAS_valuedObject::Enumeration::enum_driver:
      {
        GALGAS_omnibusType extractedValue_10582_type_0 ;
        GALGAS_bool extractedValue_10587_instancied_1 ;
        var_entity_10389.getAssociatedValuesFor_driver (extractedValue_10582_type_0, extractedValue_10587_instancied_1) ;
        enumGalgasBool test_7 = kBoolTrue ;
        if (kBoolTrue == test_7) {
          test_7 = extractedValue_10587_instancied_1.boolEnum () ;
          if (kBoolTrue == test_7) {
            var_currentType_9937 = extractedValue_10582_type_0 ;
            const GALGAS_procedureCallInstructionAST temp_8 = this ;
            var_currentLLVMAddressVar_9963 = function_llvmNameForGlobalVariable (temp_8.readProperty_mIdentifier ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 254)) ;
          }
        }
        if (kBoolFalse == test_7) {
          const GALGAS_procedureCallInstructionAST temp_9 = this ;
          TC_Array <FixItDescription> fixItArray10 ;
          inCompiler->emitSemanticError (temp_9.readProperty_mIdentifier ().readProperty_location (), GALGAS_string ("the driver should be instancied"), fixItArray10  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 256)) ;
          var_currentType_9937.drop () ; // Release error dropped variable
          var_currentLLVMAddressVar_9963.drop () ; // Release error dropped variable
        }
      }
      break ;
    case GALGAS_valuedObject::Enumeration::enum_globalConstant:
      {
        GALGAS_objectIR extractedValue_10881__0 ;
        var_entity_10389.getAssociatedValuesFor_globalConstant (extractedValue_10881__0) ;
        const GALGAS_procedureCallInstructionAST temp_11 = this ;
        TC_Array <FixItDescription> fixItArray12 ;
        inCompiler->emitSemanticError (temp_11.readProperty_mIdentifier ().readProperty_location (), GALGAS_string ("a global constant cannot be used in this context"), fixItArray12  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 259)) ;
        var_currentType_9937.drop () ; // Release error dropped variable
        var_currentLLVMAddressVar_9963.drop () ; // Release error dropped variable
      }
      break ;
    case GALGAS_valuedObject::Enumeration::enum_localConstant:
      {
        GALGAS_omnibusType extractedValue_11058_type_0 ;
        GALGAS_lstring extractedValue_11072_omnibusName_1 ;
        GALGAS_bool extractedValue_11084__2 ;
        var_entity_10389.getAssociatedValuesFor_localConstant (extractedValue_11058_type_0, extractedValue_11072_omnibusName_1, extractedValue_11084__2) ;
        var_currentType_9937 = extractedValue_11058_type_0 ;
        var_currentLLVMAddressVar_9963 = function_llvmNameForLocalVariable (extractedValue_11072_omnibusName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 264)) ;
      }
      break ;
    case GALGAS_valuedObject::Enumeration::enum_localVariable:
      {
        GALGAS_omnibusType extractedValue_11221_type_0 ;
        GALGAS_lstring extractedValue_11235_omnibusName_1 ;
        var_entity_10389.getAssociatedValuesFor_localVariable (extractedValue_11221_type_0, extractedValue_11235_omnibusName_1) ;
        var_currentType_9937 = extractedValue_11221_type_0 ;
        var_currentLLVMAddressVar_9963 = function_llvmNameForLocalVariable (extractedValue_11235_omnibusName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 267)) ;
      }
      break ;
    case GALGAS_valuedObject::Enumeration::enum_globalSyncInstance:
      {
        GALGAS_omnibusType extractedValue_11387_type_0 ;
        GALGAS_lstring extractedValue_11401_omnibusName_1 ;
        var_entity_10389.getAssociatedValuesFor_globalSyncInstance (extractedValue_11387_type_0, extractedValue_11401_omnibusName_1) ;
        var_currentType_9937 = extractedValue_11387_type_0 ;
        var_currentLLVMAddressVar_9963 = function_llvmNameForGlobalSyncInstance (extractedValue_11401_omnibusName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 270)) ;
      }
      break ;
    }
  }
  GALGAS_propertyGetterMap var_currentObjectPropertyMap_11573 = extensionGetter_propertyGetterMap (constinArgument_inContext, var_currentType_9937, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 274)) ;
  const GALGAS_procedureCallInstructionAST temp_13 = this ;
  GALGAS_accessInAssignmentListAST var_accessList_11721 = temp_13.readProperty_mAccessList () ;
  GALGAS_accessInAssignmentAST var_lastAccess_11780 ;
  {
  var_accessList_11721.setter_popLast (var_lastAccess_11780, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 277)) ;
  }
  cEnumerator_accessInAssignmentListAST enumerator_11824 (var_accessList_11721, EnumerationOrder::up) ;
  while (enumerator_11824.hasCurrentObject ()) {
    switch (enumerator_11824.current_mAccess (HERE).enumValue ()) {
    case GALGAS_accessInAssignmentAST::Enumeration::invalid:
      break ;
    case GALGAS_accessInAssignmentAST::Enumeration::enum_property:
      {
        GALGAS_lstring extractedValue_11895_propertyName_0 ;
        enumerator_11824.current_mAccess (HERE).getAssociatedValuesFor_property (extractedValue_11895_propertyName_0) ;
        GALGAS_propertyVisibility var_visibility_11988 ;
        GALGAS_propertyGetterKind var_propertyAccess_12032 ;
        var_currentObjectPropertyMap_11573.method_searchKey (extractedValue_11895_propertyName_0, var_visibility_11988, var_propertyAccess_12032, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 282)) ;
        switch (var_visibility_11988.enumValue ()) {
        case GALGAS_propertyVisibility::Enumeration::invalid:
          break ;
        case GALGAS_propertyVisibility::Enumeration::enum_isPublic:
          break ;
        case GALGAS_propertyVisibility::Enumeration::enum_isPrivate:
          {
            enumGalgasBool test_14 = kBoolTrue ;
            if (kBoolTrue == test_14) {
              test_14 = var_receiverIsSelf_9895.operator_not (SOURCE_FILE ("instruction-procedure-call.galgas", 290)).boolEnum () ;
              if (kBoolTrue == test_14) {
                TC_Array <FixItDescription> fixItArray15 ;
                inCompiler->emitSemanticError (extractedValue_11895_propertyName_0.readProperty_location (), GALGAS_string ("inaccessible property, is private"), fixItArray15  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 291)) ;
              }
            }
          }
          break ;
        }
        var_receiverIsSelf_9895 = GALGAS_bool (false) ;
        switch (var_propertyAccess_12032.enumValue ()) {
        case GALGAS_propertyGetterKind::Enumeration::invalid:
          break ;
        case GALGAS_propertyGetterKind::Enumeration::enum_constantProperty:
          {
            GALGAS_objectIR extractedValue_12334__0 ;
            var_propertyAccess_12032.getAssociatedValuesFor_constantProperty (extractedValue_12334__0) ;
            TC_Array <FixItDescription> fixItArray16 ;
            inCompiler->emitSemanticError (extractedValue_11895_propertyName_0.readProperty_location (), GALGAS_string ("a context property cannot be used in this context"), fixItArray16  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 297)) ;
            var_currentType_9937.drop () ; // Release error dropped variable
            var_currentLLVMAddressVar_9963.drop () ; // Release error dropped variable
          }
          break ;
        case GALGAS_propertyGetterKind::Enumeration::enum_storedProperty:
          {
            GALGAS_omnibusType extractedValue_12517_propertyType_0 ;
            GALGAS_uint extractedValue_12536_propertyIndex_1 ;
            var_propertyAccess_12032.getAssociatedValuesFor_storedProperty (extractedValue_12517_propertyType_0, extractedValue_12536_propertyIndex_1) ;
            GALGAS_string var_llvmPropertyName_12598 ;
            {
            extensionSetter_newTempLLVMVar (ioArgument_ioTemporaries, var_llvmPropertyName_12598, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 301)) ;
            }
            {
            extensionSetter_appendGetUniversalPropertyReference (ioArgument_ioInstructionGenerationList, var_currentType_9937, var_currentLLVMAddressVar_9963, var_llvmPropertyName_12598, extractedValue_12536_propertyIndex_1, extractedValue_11895_propertyName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 302)) ;
            }
            var_currentType_9937 = extractedValue_12517_propertyType_0 ;
            var_currentLLVMAddressVar_9963 = var_llvmPropertyName_12598 ;
            var_currentObjectPropertyMap_11573 = extensionGetter_propertyGetterMap (constinArgument_inContext, var_currentType_9937, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 311)) ;
          }
          break ;
        case GALGAS_propertyGetterKind::Enumeration::enum_computedProperty:
          {
            GALGAS_unifiedTypeMapEntry extractedValue_13025_propertyTypeProxy_0 ;
            GALGAS_routineLLVMNameDict extractedValue_13043_modeDictionary_1 ;
            var_propertyAccess_12032.getAssociatedValuesFor_computedProperty (extractedValue_13025_propertyTypeProxy_0, extractedValue_13043_modeDictionary_1) ;
            GALGAS_string var_routineLLVMName_13073 = function_checkModeAndReturnsRoutineLLVMName (extractedValue_13043_modeDictionary_1, constinArgument_inMode, extractedValue_11895_propertyName_0, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 313)) ;
            GALGAS_objectIR var_resultValueIR_13414 ;
            {
            extensionSetter_appendGetComputedPropertyValue (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, GALGAS_objectIR::class_func_reference (var_currentType_9937, var_currentLLVMAddressVar_9963  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 316)), var_routineLLVMName_13073, extensionGetter_type (extractedValue_13025_propertyTypeProxy_0, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 318)), var_resultValueIR_13414, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 314)) ;
            }
            var_currentType_9937 = extensionGetter_type (var_resultValueIR_13414, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 321)) ;
            var_currentLLVMAddressVar_9963 = extensionGetter_llvmName (var_resultValueIR_13414, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 322)) ;
            var_currentObjectPropertyMap_11573 = extensionGetter_propertyGetterMap (constinArgument_inContext, var_currentType_9937, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 323)) ;
          }
          break ;
        }
      }
      break ;
    case GALGAS_accessInAssignmentAST::Enumeration::enum_arrayAccess:
      {
        GALGAS_expressionAST extractedValue_13648__0 ;
        GALGAS_location extractedValue_13660_endOfIndex_1 ;
        GALGAS_bool extractedValue_13671__2 ;
        enumerator_11824.current_mAccess (HERE).getAssociatedValuesFor_arrayAccess (extractedValue_13648__0, extractedValue_13660_endOfIndex_1, extractedValue_13671__2) ;
        TC_Array <FixItDescription> fixItArray17 ;
        inCompiler->emitSemanticError (extractedValue_13660_endOfIndex_1, GALGAS_string ("not handled yet"), fixItArray17  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 326)) ;
        var_currentType_9937.drop () ; // Release error dropped variable
        var_currentLLVMAddressVar_9963.drop () ; // Release error dropped variable
      }
      break ;
    }
    enumerator_11824.gotoNextObject () ;
  }
  switch (var_lastAccess_11780.enumValue ()) {
  case GALGAS_accessInAssignmentAST::Enumeration::invalid:
    break ;
  case GALGAS_accessInAssignmentAST::Enumeration::enum_arrayAccess:
    {
      GALGAS_expressionAST extractedValue_13834__0 ;
      GALGAS_location extractedValue_13846_endOfIndex_1 ;
      GALGAS_bool extractedValue_13857__2 ;
      var_lastAccess_11780.getAssociatedValuesFor_arrayAccess (extractedValue_13834__0, extractedValue_13846_endOfIndex_1, extractedValue_13857__2) ;
      TC_Array <FixItDescription> fixItArray18 ;
      inCompiler->emitSemanticError (extractedValue_13846_endOfIndex_1, GALGAS_string ("a property is required here"), fixItArray18  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 332)) ;
    }
    break ;
  case GALGAS_accessInAssignmentAST::Enumeration::enum_property:
    {
      GALGAS_lstring extractedValue_13941_methodName_0 ;
      var_lastAccess_11780.getAssociatedValuesFor_property (extractedValue_13941_methodName_0) ;
      const GALGAS_procedureCallInstructionAST temp_19 = this ;
      GALGAS_lstring var_methodMangledName_13963 = extensionGetter_mangledName (temp_19.readProperty_mArguments (), var_currentType_9937.readProperty_omnibusTypeDescriptionName (), extractedValue_13941_methodName_0, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 334)) ;
      GALGAS_bool var_implementedPublic_14177 ;
      GALGAS_routineTypedSignature var_formalSignature_14206 ;
      GALGAS_unifiedTypeMapEntry var_formalReturnTypeProxy_14233 ;
      GALGAS_routineLLVMNameDict var_implementedModeDictionary_14294 ;
      GALGAS_bool var_implementedIsExported_14338 ;
      GALGAS_mode var_implementedMode_14378 ;
      constinArgument_inContext.readProperty_mRoutineMap ().method_searchKey (var_methodMangledName_13963, var_implementedPublic_14177, var_formalSignature_14206, var_formalReturnTypeProxy_14233, var_implementedModeDictionary_14294, var_implementedIsExported_14338, var_implementedMode_14378, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 335)) ;
      GALGAS_string var_functionLLVMName_14427 = function_checkModeAndReturnsRoutineLLVMName (var_implementedModeDictionary_14294, constinArgument_inMode, extractedValue_13941_methodName_0, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 345)) ;
      enumGalgasBool test_20 = kBoolTrue ;
      if (kBoolTrue == test_20) {
        test_20 = GALGAS_bool (ComparisonKind::notEqual, var_formalReturnTypeProxy_14233.objectCompare (GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("instruction-procedure-call.galgas", 347)))).boolEnum () ;
        if (kBoolTrue == test_20) {
          TC_Array <FixItDescription> fixItArray21 ;
          inCompiler->emitSemanticError (extractedValue_13941_methodName_0.readProperty_location (), GALGAS_string ("cannot be called in instruction, returns a value"), fixItArray21  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 348)) ;
        }
      }
      GALGAS_procCallEffectiveParameterListIR temp_22 = GALGAS_procCallEffectiveParameterListIR::init (inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 352)) ;
      temp_22.enterElement (GALGAS_procCallEffectiveParameterListIR_2D_element::init_21__21_ (GALGAS_procEffectiveParameterPassingModeIR::class_func_outputInput (SOURCE_FILE ("instruction-procedure-call.galgas", 352)), GALGAS_objectIR::class_func_reference (var_currentType_9937, var_currentLLVMAddressVar_9963  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 352)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 352)) ;
      GALGAS_procCallEffectiveParameterListIR var_effectiveParameterListIR_14785 = temp_22 ;
      {
      const GALGAS_procedureCallInstructionAST temp_23 = this ;
      routine_analyzeEffectiveParameters_3F_self_3F_routineAttributes_3F_formal_3F_effective_3F_errorLocation_3F_context_3F_requiredMode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_26_effectiveIR (constinArgument_inSelfType, constinArgument_inRoutineAttributes, var_formalSignature_14206, temp_23.readProperty_mArguments (), extractedValue_13941_methodName_0.readProperty_location (), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_effectiveParameterListIR_14785, inCompiler  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 355)) ;
      }
      ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_standaloneRoutineCallIR::init_21__21__21__21_ (GALGAS_objectIR::class_func_void (SOURCE_FILE ("instruction-procedure-call.galgas", 372)), var_methodMangledName_13963, var_functionLLVMName_14427, var_effectiveParameterListIR_14785, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 371)) ;
    }
    break ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@switchInstructionAST noteInstructionTypesInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_switchInstructionAST::method_noteInstructionTypesInPrecedenceGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_switchInstructionAST temp_0 = this ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((cPtr_expressionAST *) temp_0.readProperty_mSwitchExpression ().ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 68)) ;
  const GALGAS_switchInstructionAST temp_1 = this ;
  cEnumerator_switchCaseListAST enumerator_2946 (temp_1.readProperty_mSwitchCaseList (), EnumerationOrder::up) ;
  while (enumerator_2946.hasCurrentObject ()) {
    extensionMethod_noteInstructionListTypesInPrecedenceGraph (enumerator_2946.current_mCaseInstructionList (HERE), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 70)) ;
    enumerator_2946.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@switchInstructionAST instructionSemanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_switchInstructionAST::method_instructionSemanticAnalysis (const GALGAS_omnibusType constinArgument_inSelfType,
                                                                    const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                                                    const GALGAS_semanticContext constinArgument_inContext,
                                                                    const GALGAS_mode constinArgument_inMode,
                                                                    GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                    GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                    GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                    GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                    GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_instructionListIR temp_0 = GALGAS_instructionListIR::init (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 90)) ;
  GALGAS_instructionListIR var_switchExpressionGenerationList_3998 = temp_0 ;
  GALGAS_objectIR var_switchValueIR_4409 ;
  const GALGAS_switchInstructionAST temp_1 = this ;
  callExtensionMethod_analyzeExpression ((cPtr_expressionAST *) temp_1.readProperty_mSwitchExpression ().ptr (), constinArgument_inSelfType, GALGAS_routineAttributes::init (inCompiler COMMA_HERE), function_voidType (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 94)), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_switchExpressionGenerationList_3998, var_switchValueIR_4409, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 91)) ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_switchValueIR_4409, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 104)) ;
  }
  const GALGAS_switchInstructionAST temp_2 = this ;
  GALGAS_lstring var_switchTypeName_4561 = GALGAS_lstring::init_21__21_ (extensionGetter_type (var_switchValueIR_4409, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 109)).readProperty_omnibusTypeDescriptionName (), temp_2.readProperty_mEndOf_5F_test_5F_expression (), inCompiler COMMA_HERE) ;
  GALGAS_constantMap var_enumConstantMap_4733 ;
  constinArgument_inContext.readProperty_mTypeConstantMap ().method_searchKey (var_switchTypeName_4561, var_enumConstantMap_4733, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 110)) ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = extensionGetter_type (var_switchValueIR_4409, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 112)).readProperty_kind ().getter_isEnumeration (SOURCE_FILE ("instruction-switch.galgas", 112)).operator_not (SOURCE_FILE ("instruction-switch.galgas", 112)).boolEnum () ;
    if (kBoolTrue == test_3) {
      const GALGAS_switchInstructionAST temp_4 = this ;
      TC_Array <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.readProperty_mEndOf_5F_test_5F_expression (), GALGAS_string ("test expression type is '").add_operation (extensionGetter_omnibusTypeDescriptionName (var_switchValueIR_4409, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 114)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 114)).add_operation (GALGAS_string ("', it should be boolean"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 114)), fixItArray5  COMMA_SOURCE_FILE ("instruction-switch.galgas", 113)) ;
    }
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    test_6 = extensionGetter_isStatic (var_switchValueIR_4409, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 116)).boolEnum () ;
    if (kBoolTrue == test_6) {
      const GALGAS_switchInstructionAST temp_7 = this ;
      TC_Array <FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (temp_7.readProperty_mEndOf_5F_test_5F_expression (), GALGAS_string ("test expression type should not be static"), fixItArray8  COMMA_SOURCE_FILE ("instruction-switch.galgas", 117)) ;
    }
  }
  {
  extensionSetter_openOverrideForSelectBlock (ioArgument_ioUniversalMap, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 120)) ;
  }
  GALGAS_stringset temp_9 = GALGAS_stringset::init (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 121)) ;
  GALGAS_stringset var_usedEnumerationValues_5235 = temp_9 ;
  GALGAS_switchCaseListIR temp_10 = GALGAS_switchCaseListIR::init (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 122)) ;
  GALGAS_switchCaseListIR var_switchCaseListIR_5287 = temp_10 ;
  const GALGAS_switchInstructionAST temp_11 = this ;
  cEnumerator_switchCaseListAST enumerator_5333 (temp_11.readProperty_mSwitchCaseList (), EnumerationOrder::up) ;
  while (enumerator_5333.hasCurrentObject ()) {
    GALGAS_uintlist temp_12 = GALGAS_uintlist::init (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 124)) ;
    GALGAS_uintlist var_caseIdentifierIndexList_5395 = temp_12 ;
    cEnumerator_lstringlist enumerator_5434 (enumerator_5333.current_mCaseIdentifiers (HERE), EnumerationOrder::up) ;
    while (enumerator_5434.hasCurrentObject ()) {
      GALGAS_bigint var_constantIdx_5520 ;
      GALGAS_lstring joker_5532_1 ; // Joker input parameter
      var_enumConstantMap_4733.method_searchKey (enumerator_5434.current_mValue (HERE), var_constantIdx_5520, joker_5532_1, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 126)) ;
      var_caseIdentifierIndexList_5395.addAssign_operation (var_constantIdx_5520.getter_uint (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 127))  COMMA_SOURCE_FILE ("instruction-switch.galgas", 127)) ;
      enumGalgasBool test_13 = kBoolTrue ;
      if (kBoolTrue == test_13) {
        test_13 = var_usedEnumerationValues_5235.getter_hasKey (enumerator_5434.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("instruction-switch.galgas", 128)).boolEnum () ;
        if (kBoolTrue == test_13) {
          TC_Array <FixItDescription> fixItArray14 ;
          fixItArray14.appendObject (FixItDescription (kFixItRemove, "")) ;
          inCompiler->emitSemanticError (enumerator_5434.current_mValue (HERE).readProperty_location (), GALGAS_string ("duplicated enumeration constant"), fixItArray14  COMMA_SOURCE_FILE ("instruction-switch.galgas", 129)) ;
        }
      }
      var_usedEnumerationValues_5235.addAssign_operation (enumerator_5434.current_mValue (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("instruction-switch.galgas", 131)) ;
      enumerator_5434.gotoNextObject () ;
    }
    GALGAS_instructionListIR temp_15 = GALGAS_instructionListIR::init (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 133)) ;
    GALGAS_instructionListIR var_instructionGenerationList_5797 = temp_15 ;
    const GALGAS_switchInstructionAST temp_16 = this ;
    extensionMethod_analyzeBranchInstructionList (enumerator_5333.current_mCaseInstructionList (HERE), constinArgument_inSelfType, constinArgument_inRoutineAttributes, temp_16.readProperty_mEndOf_5F_switch_5F_instruction (), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_instructionGenerationList_5797, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 134)) ;
    var_switchCaseListIR_5287.addAssign_operation (var_caseIdentifierIndexList_5395, var_instructionGenerationList_5797  COMMA_SOURCE_FILE ("instruction-switch.galgas", 146)) ;
    enumerator_5333.gotoNextObject () ;
  }
  {
  const GALGAS_switchInstructionAST temp_17 = this ;
  extensionSetter_closeOverride (ioArgument_ioUniversalMap, temp_17.readProperty_mEndOf_5F_switch_5F_instruction (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 148)) ;
  }
  cEnumerator_constantMap enumerator_6476 (var_enumConstantMap_4733, EnumerationOrder::up) ;
  while (enumerator_6476.hasCurrentObject ()) {
    enumGalgasBool test_18 = kBoolTrue ;
    if (kBoolTrue == test_18) {
      test_18 = var_usedEnumerationValues_5235.getter_hasKey (enumerator_6476.current_lkey (HERE).readProperty_string () COMMA_SOURCE_FILE ("instruction-switch.galgas", 151)).operator_not (SOURCE_FILE ("instruction-switch.galgas", 151)).boolEnum () ;
      if (kBoolTrue == test_18) {
        const GALGAS_switchInstructionAST temp_19 = this ;
        TC_Array <FixItDescription> fixItArray20 ;
        inCompiler->emitSemanticError (temp_19.readProperty_mEndOf_5F_test_5F_expression (), GALGAS_string ("missing '").add_operation (enumerator_6476.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 152)).add_operation (GALGAS_string ("' enumeration constant"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 152)), fixItArray20  COMMA_SOURCE_FILE ("instruction-switch.galgas", 152)) ;
      }
    }
    enumerator_6476.gotoNextObject () ;
  }
  const GALGAS_switchInstructionAST temp_21 = this ;
  ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_switchInstructionIR::init_21__21__21__21_ (temp_21.readProperty_mEndOf_5F_test_5F_expression ().getter_endLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 157)), var_switchExpressionGenerationList_3998, var_switchValueIR_4409, var_switchCaseListIR_5287, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-switch.galgas", 156)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@switchInstructionIR llvmInstructionCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_switchInstructionIR::method_llvmInstructionCode (GALGAS_string & ioArgument_ioLLVMcode,
                                                           const GALGAS_generationContext constinArgument_inGenerationContext,
                                                           GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_switchInstructionIR temp_0 = this ;
  extensionMethod_instructionListLLVMCode (temp_0.readProperty_mSwitchExpressionGenerationList (), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 190)) ;
  const GALGAS_switchInstructionIR temp_1 = this ;
  GALGAS_string var_labelOtherwise_8240 = GALGAS_string ("switch.").add_operation (temp_1.readProperty_mLabelIndex ().getter_string (SOURCE_FILE ("instruction-switch.galgas", 192)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 192)).add_operation (GALGAS_string (".otherwise"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 192)) ;
  const GALGAS_switchInstructionIR temp_2 = this ;
  const GALGAS_switchInstructionIR temp_3 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  switch ").add_operation (extensionGetter_llvmTypeName (temp_2.readProperty_mSwitchExpression (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 193)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 193)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 193)).add_operation (extensionGetter_llvmName (temp_3.readProperty_mSwitchExpression (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 193)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 193)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 193)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", label %").add_operation (var_labelOtherwise_8240, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 194)).add_operation (GALGAS_string (" [\n"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 194)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 194)) ;
  const GALGAS_switchInstructionIR temp_4 = this ;
  cEnumerator_switchCaseListIR enumerator_8494 (temp_4.readProperty_mCaseGenerationList (), EnumerationOrder::up) ;
  GALGAS_uint index_8467 (uint32_t (0)) ;
  while (enumerator_8494.hasCurrentObject ()) {
    cEnumerator_uintlist enumerator_8549 (enumerator_8494.current_mCaseIdentifierIndexes (HERE), EnumerationOrder::up) ;
    while (enumerator_8549.hasCurrentObject ()) {
      const GALGAS_switchInstructionIR temp_5 = this ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("    ").add_operation (extensionGetter_llvmTypeName (temp_5.readProperty_mSwitchExpression (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 197)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 197)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 197)).add_operation (enumerator_8549.current_mValue (HERE).getter_string (SOURCE_FILE ("instruction-switch.galgas", 197)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 197)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 197)) ;
      const GALGAS_switchInstructionIR temp_6 = this ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", label %switch.").add_operation (temp_6.readProperty_mLabelIndex ().getter_string (SOURCE_FILE ("instruction-switch.galgas", 198)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 198)).add_operation (GALGAS_string (".branch."), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 198)).add_operation (index_8467.getter_string (SOURCE_FILE ("instruction-switch.galgas", 198)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 198)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 198)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 198)) ;
      enumerator_8549.gotoNextObject () ;
    }
    enumerator_8494.gotoNextObject () ;
    index_8467.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 195)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ]\n\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 201)) ;
  const GALGAS_switchInstructionIR temp_7 = this ;
  cEnumerator_switchCaseListIR enumerator_8841 (temp_7.readProperty_mCaseGenerationList (), EnumerationOrder::up) ;
  GALGAS_uint index_8834 (uint32_t (0)) ;
  while (enumerator_8841.hasCurrentObject ()) {
    const GALGAS_switchInstructionIR temp_8 = this ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("switch.").add_operation (temp_8.readProperty_mLabelIndex ().getter_string (SOURCE_FILE ("instruction-switch.galgas", 204)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 204)).add_operation (GALGAS_string (".branch."), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 204)).add_operation (index_8834.getter_string (SOURCE_FILE ("instruction-switch.galgas", 204)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 204)).add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 204)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 204)) ;
    extensionMethod_instructionListLLVMCode (enumerator_8841.current_mCaseInstructionList (HERE), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 205)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_labelOtherwise_8240, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 206)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 206)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 206)) ;
    enumerator_8841.gotoNextObject () ;
    index_8834.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 203)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelOtherwise_8240.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 209)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 209)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@switchInstructionIR enterAccessibleEntities'
//
//--------------------------------------------------------------------------------------------------

void cPtr_switchInstructionIR::method_enterAccessibleEntities (GALGAS_stringset & ioArgument_ioInvokedRoutineSet,
                                                               GALGAS_uint & ioArgument_ioMaxBranchOfOnInstructions,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_switchInstructionIR temp_0 = this ;
  extensionMethod_enterAccessibleEntities (temp_0.readProperty_mSwitchExpressionGenerationList (), ioArgument_ioInvokedRoutineSet, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 218)) ;
  const GALGAS_switchInstructionIR temp_1 = this ;
  cEnumerator_switchCaseListIR enumerator_9592 (temp_1.readProperty_mCaseGenerationList (), EnumerationOrder::up) ;
  while (enumerator_9592.hasCurrentObject ()) {
    extensionMethod_enterAccessibleEntities (enumerator_9592.current_mCaseInstructionList (HERE), ioArgument_ioInvokedRoutineSet, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 220)) ;
    enumerator_9592.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Routine 'handleArraySubscriptNew?self?routineAttributes?context?mode&temporary&staticEntityMap&variableMap&alloca????arraySize?elementType&!'
//
//--------------------------------------------------------------------------------------------------

void routine_handleArraySubscriptNew_3F_self_3F_routineAttributes_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_3F__3F__3F__3F_arraySize_3F_elementType_26__21_ (const GALGAS_omnibusType constinArgument_inSelfType,
                                                                                                                                                                                               const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                                                                                                                                                                               const GALGAS_semanticContext constinArgument_inContext,
                                                                                                                                                                                               const GALGAS_mode constinArgument_inMode,
                                                                                                                                                                                               GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                                                                                                                                               GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                                                                                                                                               GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                                                                                                                                               GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                                                                                                                                               const GALGAS_expressionAST constinArgument_inIndexExpression,
                                                                                                                                                                                               const GALGAS_location constinArgument_inErrorLocation,
                                                                                                                                                                                               const GALGAS_bool constinArgument_inCheckIndexExpression,
                                                                                                                                                                                               const GALGAS_bigint constinArgument_inArraySize,
                                                                                                                                                                                               const GALGAS_omnibusType constinArgument_inElementType,
                                                                                                                                                                                               GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                                                                                                                                               GALGAS_objectIR & outArgument_outIndexIR,
                                                                                                                                                                                               Compiler * inCompiler
                                                                                                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outIndexIR.drop () ; // Release 'out' argument
  GALGAS_objectIR var_indexResult_1203 ;
  callExtensionMethod_analyzeExpression ((cPtr_expressionAST *) constinArgument_inIndexExpression.ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, function_voidType (inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 24)), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_indexResult_1203, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 21)) ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_indexResult_1203, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 34)) ;
  }
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = var_indexResult_1203.getter_isLiteralInteger (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 38)).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_bigint var_indexValue_1436 ;
      GALGAS_omnibusType joker_1413_1 ; // Joker input parameter
      var_indexResult_1203.method_literalInteger (joker_1413_1, var_indexValue_1436, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 39)) ;
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        GALGAS_bool test_2 = GALGAS_bool (ComparisonKind::lowerThan, var_indexValue_1436.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 40)))) ;
        if (kBoolTrue != test_2.boolEnum ()) {
          test_2 = GALGAS_bool (ComparisonKind::greaterOrEqual, var_indexValue_1436.objectCompare (constinArgument_inArraySize)) ;
        }
        test_1 = test_2.boolEnum () ;
        if (kBoolTrue == test_1) {
          TC_Array <FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("static index should be positive and < ").add_operation (constinArgument_inArraySize.getter_string (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 41)), inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 41)), fixItArray3  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 41)) ;
          outArgument_outIndexIR.drop () ; // Release error dropped variable
        }
      }
      if (kBoolFalse == test_1) {
        outArgument_outIndexIR = GALGAS_objectIR::class_func_literalInteger (constinArgument_inElementType, var_indexValue_1436  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 43)) ;
      }
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = extensionGetter_type (var_indexResult_1203, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 45)).readProperty_kind ().getter_isInteger (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 45)).boolEnum () ;
      if (kBoolTrue == test_4) {
        enumGalgasBool test_5 = kBoolTrue ;
        if (kBoolTrue == test_5) {
          GALGAS_bool test_6 = constinArgument_inCheckIndexExpression ;
          if (kBoolTrue == test_6.boolEnum ()) {
            test_6 = GALGAS_bool (gOption_omnibus_5F_options_noPanicGeneration.readProperty_value ()).operator_not (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 46)) ;
          }
          test_5 = test_6.boolEnum () ;
          if (kBoolTrue == test_5) {
            GALGAS_bool var_generatePanicInstruction_1985 ;
            {
            extensionSetter_testArrayIndex (ioArgument_ioInstructionGenerationList, var_indexResult_1203, constinArgument_inErrorLocation, constinArgument_inArraySize, var_generatePanicInstruction_1985, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 47)) ;
            }
            enumGalgasBool test_7 = kBoolTrue ;
            if (kBoolTrue == test_7) {
              GALGAS_bool test_8 = var_generatePanicInstruction_1985 ;
              if (kBoolTrue == test_8.boolEnum ()) {
                test_8 = extensionGetter_isSafe (constinArgument_inMode, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 53)) ;
              }
              test_7 = test_8.boolEnum () ;
              if (kBoolTrue == test_7) {
                TC_Array <FixItDescription> fixItArray9 ;
                inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("index computation can generate panic and routine is not safe"), fixItArray9  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 54)) ;
              }
            }
          }
        }
        outArgument_outIndexIR = var_indexResult_1203 ;
      }
    }
    if (kBoolFalse == test_4) {
      TC_Array <FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("index expression is not an integer"), fixItArray10  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 59)) ;
      outArgument_outIndexIR.drop () ; // Release error dropped variable
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'analyzeVariableInLValue?self?readAccess?routineAttributes?context?mode&temporary&staticEntityMap&variableMap&alloca&instructionListIR?variableName?llvmName?type?!'
//
//--------------------------------------------------------------------------------------------------

void routine_analyzeVariableInLValue_3F_self_3F_readAccess_3F_routineAttributes_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_3F_variableName_3F_llvmName_3F_type_3F__21_ (const GALGAS_omnibusType constinArgument_inSelfType,
                                                                                                                                                                                                                              const GALGAS_bool constinArgument_inIsReadAccess,
                                                                                                                                                                                                                              const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                                                                                                                                                                                                              const GALGAS_semanticContext constinArgument_inContext,
                                                                                                                                                                                                                              const GALGAS_mode constinArgument_inMode,
                                                                                                                                                                                                                              GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                                                                                                                                                                              GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                                                                                                                                                                              GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                                                                                                                                                                              GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                                                                                                                                                                              GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                                                                                                                                                                              const GALGAS_lstring constinArgument_inVariableName,
                                                                                                                                                                                                                              const GALGAS_string constinArgument_inLLVMName,
                                                                                                                                                                                                                              const GALGAS_omnibusType constinArgument_inVariableType,
                                                                                                                                                                                                                              const GALGAS_LValueOperandAST constinArgument_inOperand,
                                                                                                                                                                                                                              GALGAS_LValueRepresentation & outArgument_outInternalRepresentation,
                                                                                                                                                                                                                              Compiler * inCompiler
                                                                                                                                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outInternalRepresentation.drop () ; // Release 'out' argument
  GALGAS_omnibusType var_currentType_8915 = constinArgument_inVariableType ;
  GALGAS_string var_currentLLVMName_8950 = constinArgument_inLLVMName ;
  switch (constinArgument_inOperand.enumValue ()) {
  case GALGAS_LValueOperandAST::Enumeration::invalid:
    break ;
  case GALGAS_LValueOperandAST::Enumeration::enum_noOperand:
    {
      enumGalgasBool test_0 = kBoolTrue ;
      if (kBoolTrue == test_0) {
        test_0 = constinArgument_inIsReadAccess.boolEnum () ;
        if (kBoolTrue == test_0) {
          {
          GALGAS_objectIR joker_9116 ; // Joker input parameter
          extensionSetter_searchValuedObjectForReadAccess (ioArgument_ioUniversalMap, constinArgument_inVariableName, joker_9116, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 220)) ;
          }
        }
      }
      if (kBoolFalse == test_0) {
        {
        GALGAS_objectIR joker_9202 ; // Joker input parameter
        extensionSetter_searchValuedObjectForWriteAccess (ioArgument_ioUniversalMap, constinArgument_inVariableName, joker_9202, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 222)) ;
        }
      }
    }
    break ;
  case GALGAS_LValueOperandAST::Enumeration::enum_property:
    {
      GALGAS_lstring extractedValue_9240_name_0 ;
      GALGAS_LValueOperandAST extractedValue_9263_nextOperand_1 ;
      constinArgument_inOperand.getAssociatedValuesFor_property (extractedValue_9240_name_0, extractedValue_9263_nextOperand_1) ;
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = constinArgument_inIsReadAccess.boolEnum () ;
        if (kBoolTrue == test_1) {
          {
          GALGAS_objectIR joker_9377 ; // Joker input parameter
          extensionSetter_searchValuedObjectForReadAccess (ioArgument_ioUniversalMap, constinArgument_inVariableName, joker_9377, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 226)) ;
          }
        }
      }
      if (kBoolFalse == test_1) {
        {
        GALGAS_objectIR joker_9467 ; // Joker input parameter
        extensionSetter_searchValuedObjectForReadWriteAccess (ioArgument_ioUniversalMap, constinArgument_inVariableName, joker_9467, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 228)) ;
        }
      }
      {
      routine_handlePropertyAccess_3F_self_26__26__3F_routineAttributes_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_3F__3F_ (constinArgument_inSelfType, var_currentType_8915, var_currentLLVMName_8950, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, extractedValue_9240_name_0, extractedValue_9263_nextOperand_1, inCompiler  COMMA_SOURCE_FILE ("lvalue.galgas", 230)) ;
      }
    }
    break ;
  case GALGAS_LValueOperandAST::Enumeration::enum_arrayAccess:
    {
      GALGAS_expressionAST extractedValue_9919_indexExpression_0 ;
      GALGAS_location extractedValue_9935_endOfIndex_1 ;
      GALGAS_bool extractedValue_9946_checkIndexExpression_2 ;
      GALGAS_LValueOperandAST extractedValue_9967_nextOperand_3 ;
      constinArgument_inOperand.getAssociatedValuesFor_arrayAccess (extractedValue_9919_indexExpression_0, extractedValue_9935_endOfIndex_1, extractedValue_9946_checkIndexExpression_2, extractedValue_9967_nextOperand_3) ;
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = constinArgument_inIsReadAccess.boolEnum () ;
        if (kBoolTrue == test_2) {
          {
          GALGAS_objectIR joker_10081 ; // Joker input parameter
          extensionSetter_searchValuedObjectForReadAccess (ioArgument_ioUniversalMap, constinArgument_inVariableName, joker_10081, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 247)) ;
          }
        }
      }
      if (kBoolFalse == test_2) {
        {
        GALGAS_objectIR joker_10171 ; // Joker input parameter
        extensionSetter_searchValuedObjectForReadWriteAccess (ioArgument_ioUniversalMap, constinArgument_inVariableName, joker_10171, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 249)) ;
        }
      }
      {
      routine_handleArrayAccess_3F_self_26__26__3F_routineAttributes_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_3F__3F__3F__3F_ (constinArgument_inSelfType, var_currentType_8915, var_currentLLVMName_8950, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, extractedValue_9919_indexExpression_0, extractedValue_9935_endOfIndex_1, extractedValue_9946_checkIndexExpression_2, extractedValue_9967_nextOperand_3, inCompiler  COMMA_SOURCE_FILE ("lvalue.galgas", 251)) ;
      }
    }
    break ;
  }
  outArgument_outInternalRepresentation = GALGAS_LValueRepresentation::init_21__21_ (var_currentType_8915, var_currentLLVMName_8950, inCompiler COMMA_HERE) ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'handlePropertyAccess?self&&?routineAttributes?context?mode&temporary&staticEntityMap&variableMap&alloca&instructionListIR??'
//
//--------------------------------------------------------------------------------------------------

void routine_handlePropertyAccess_3F_self_26__26__3F_routineAttributes_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_3F__3F_ (const GALGAS_omnibusType constinArgument_inSelfType,
                                                                                                                                                                                 GALGAS_omnibusType & ioArgument_ioCurrentType,
                                                                                                                                                                                 GALGAS_string & ioArgument_ioCurrentLLVMName,
                                                                                                                                                                                 const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                                                                                                                                                                 const GALGAS_semanticContext constinArgument_inContext,
                                                                                                                                                                                 const GALGAS_mode constinArgument_inMode,
                                                                                                                                                                                 GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                                                                                                                                 GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                                                                                                                                 GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                                                                                                                                 GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                                                                                                                                 GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                                                                                                                                 const GALGAS_lstring constinArgument_inPropertyName,
                                                                                                                                                                                 const GALGAS_LValueOperandAST constinArgument_inNextOperand,
                                                                                                                                                                                 Compiler * inCompiler
                                                                                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_propertySetterMap var_propertySetterMap_11550 = extensionGetter_propertySetterMap (constinArgument_inContext, ioArgument_ioCurrentType, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 290)) ;
  GALGAS_propertySetterKind var_propertyAccess_11690 ;
  GALGAS_propertyVisibility joker_11662 ; // Joker input parameter
  var_propertySetterMap_11550.method_searchKey (constinArgument_inPropertyName, joker_11662, var_propertyAccess_11690, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 291)) ;
  switch (var_propertyAccess_11690.enumValue ()) {
  case GALGAS_propertySetterKind::Enumeration::invalid:
    break ;
  case GALGAS_propertySetterKind::Enumeration::enum_computedProperty:
    {
      GALGAS_unifiedTypeMapEntry extractedValue_11756__0 ;
      GALGAS_routineLLVMNameDict extractedValue_11756__1 ;
      GALGAS_routineLLVMNameDict extractedValue_11756__2 ;
      var_propertyAccess_11690.getAssociatedValuesFor_computedProperty (extractedValue_11756__0, extractedValue_11756__1, extractedValue_11756__2) ;
      TC_Array <FixItDescription> fixItArray0 ;
      inCompiler->emitSemanticError (constinArgument_inPropertyName.readProperty_location (), GALGAS_string ("a computed property cannot be used here"), fixItArray0  COMMA_SOURCE_FILE ("lvalue.galgas", 294)) ;
      ioArgument_ioCurrentType.drop () ; // Release error dropped variable
      ioArgument_ioCurrentLLVMName.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_propertySetterKind::Enumeration::enum_storedProperty:
    {
      GALGAS_omnibusType extractedValue_11901_propertyType_0 ;
      GALGAS_uint extractedValue_11920_index_1 ;
      var_propertyAccess_11690.getAssociatedValuesFor_storedProperty (extractedValue_11901_propertyType_0, extractedValue_11920_index_1) ;
      GALGAS_string var_newLLVMvariable_11970 ;
      {
      extensionSetter_newTempLLVMVar (ioArgument_ioTemporaries, var_newLLVMvariable_11970, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 296)) ;
      }
      {
      extensionSetter_appendGetUniversalPropertyReference (ioArgument_ioInstructionGenerationList, ioArgument_ioCurrentType, ioArgument_ioCurrentLLVMName, var_newLLVMvariable_11970, extractedValue_11920_index_1, constinArgument_inPropertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 297)) ;
      }
      ioArgument_ioCurrentType = extractedValue_11901_propertyType_0 ;
      ioArgument_ioCurrentLLVMName = var_newLLVMvariable_11970 ;
      {
      routine_handleNextOperand_3F_self_26__26__3F__3F_routineAttributes_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR (constinArgument_inSelfType, ioArgument_ioCurrentType, ioArgument_ioCurrentLLVMName, constinArgument_inNextOperand, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, inCompiler  COMMA_SOURCE_FILE ("lvalue.galgas", 306)) ;
      }
    }
    break ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'handleArrayAccess?self&&?routineAttributes?context?mode&temporary&staticEntityMap&variableMap&alloca&instructionListIR????'
//
//--------------------------------------------------------------------------------------------------

void routine_handleArrayAccess_3F_self_26__26__3F_routineAttributes_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_3F__3F__3F__3F_ (const GALGAS_omnibusType constinArgument_inSelfType,
                                                                                                                                                                                      GALGAS_omnibusType & ioArgument_ioCurrentType,
                                                                                                                                                                                      GALGAS_string & ioArgument_ioCurrentLLVMName,
                                                                                                                                                                                      const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                                                                                                                                                                      const GALGAS_semanticContext constinArgument_inContext,
                                                                                                                                                                                      const GALGAS_mode constinArgument_inMode,
                                                                                                                                                                                      GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                                                                                                                                      GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                                                                                                                                      GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                                                                                                                                      GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                                                                                                                                      GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                                                                                                                                      const GALGAS_expressionAST constinArgument_inIndexExpression,
                                                                                                                                                                                      const GALGAS_location constinArgument_inEndOfIndex,
                                                                                                                                                                                      const GALGAS_bool constinArgument_inCheckIndexExpression,
                                                                                                                                                                                      const GALGAS_LValueOperandAST constinArgument_inNextOperand,
                                                                                                                                                                                      Compiler * inCompiler
                                                                                                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  switch (ioArgument_ioCurrentType.readProperty_subscript ().enumValue ()) {
  case GALGAS_subscript::Enumeration::invalid:
    break ;
  case GALGAS_subscript::Enumeration::enum_noSubscript:
    {
      TC_Array <FixItDescription> fixItArray0 ;
      inCompiler->emitSemanticError (constinArgument_inEndOfIndex, GALGAS_string ("the receiver type is ").add_operation (ioArgument_ioCurrentType.readProperty_omnibusTypeDescriptionName (), inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 345)).add_operation (GALGAS_string (" and does not accept subscripting"), inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 345)), fixItArray0  COMMA_SOURCE_FILE ("lvalue.galgas", 344)) ;
    }
    break ;
  case GALGAS_subscript::Enumeration::enum_literalString:
    {
      TC_Array <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inEndOfIndex, GALGAS_string ("the receiver type is literal string and does not accept subscripting"), fixItArray1  COMMA_SOURCE_FILE ("lvalue.galgas", 347)) ;
      ioArgument_ioCurrentType.drop () ; // Release error dropped variable
      ioArgument_ioCurrentLLVMName.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_subscript::Enumeration::enum_staticSubscript:
    {
      GALGAS_omnibusType extractedValue_13848_elementType_0 ;
      GALGAS_bigint extractedValue_13868_arraySize_1 ;
      ioArgument_ioCurrentType.readProperty_subscript ().getAssociatedValuesFor_staticSubscript (extractedValue_13848_elementType_0, extractedValue_13868_arraySize_1) ;
      GALGAS_objectIR var_indexIR_14356 ;
      {
      routine_handleArraySubscriptNew_3F_self_3F_routineAttributes_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_3F__3F__3F__3F_arraySize_3F_elementType_26__21_ (constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, constinArgument_inIndexExpression, constinArgument_inEndOfIndex, constinArgument_inCheckIndexExpression, extractedValue_13868_arraySize_1, extractedValue_13848_elementType_0, ioArgument_ioInstructionGenerationList, var_indexIR_14356, inCompiler  COMMA_SOURCE_FILE ("lvalue.galgas", 351)) ;
      }
      GALGAS_string var_newLLVMvariable_14411 ;
      {
      extensionSetter_newTempLLVMVar (ioArgument_ioTemporaries, var_newLLVMvariable_14411, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 368)) ;
      }
      {
      extensionSetter_appendGetUniversalArrayElementReference (ioArgument_ioInstructionGenerationList, ioArgument_ioCurrentType, ioArgument_ioCurrentLLVMName, extractedValue_13848_elementType_0, var_newLLVMvariable_14411, var_indexIR_14356, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 369)) ;
      }
      ioArgument_ioCurrentType = extractedValue_13848_elementType_0 ;
      ioArgument_ioCurrentLLVMName = var_newLLVMvariable_14411 ;
      {
      routine_handleNextOperand_3F_self_26__26__3F__3F_routineAttributes_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR (constinArgument_inSelfType, ioArgument_ioCurrentType, ioArgument_ioCurrentLLVMName, constinArgument_inNextOperand, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, inCompiler  COMMA_SOURCE_FILE ("lvalue.galgas", 378)) ;
      }
    }
    break ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'analyzeSelfLValue?self?routineAttributes?context?mode&temporary&staticEntityMap&variableMap&alloca&instructionListIR?!'
//
//--------------------------------------------------------------------------------------------------

void routine_analyzeSelfLValue_3F_self_3F_routineAttributes_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_3F__21_ (const GALGAS_omnibusType constinArgument_inSelfType,
                                                                                                                                                                      const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                                                                                                                                                      const GALGAS_semanticContext constinArgument_inContext,
                                                                                                                                                                      const GALGAS_mode constinArgument_inMode,
                                                                                                                                                                      GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                                                                                                                      GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                                                                                                                      GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                                                                                                                      GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                                                                                                                      GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                                                                                                                      const GALGAS_LValueOperandAST constinArgument_inOperand,
                                                                                                                                                                      GALGAS_LValueRepresentation & outArgument_outInternalRepresentation,
                                                                                                                                                                      Compiler * inCompiler
                                                                                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outInternalRepresentation.drop () ; // Release 'out' argument
  GALGAS_omnibusType var_currentType_15790 = constinArgument_inSelfType ;
  GALGAS_string var_currentLLVMName_15821 = function_llvmNameForSelf (inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 411)) ;
  switch (constinArgument_inOperand.enumValue ()) {
  case GALGAS_LValueOperandAST::Enumeration::invalid:
    break ;
  case GALGAS_LValueOperandAST::Enumeration::enum_noOperand:
    break ;
  case GALGAS_LValueOperandAST::Enumeration::enum_property:
    {
      GALGAS_lstring extractedValue_15922_name_0 ;
      GALGAS_LValueOperandAST extractedValue_15945_next_1 ;
      constinArgument_inOperand.getAssociatedValuesFor_property (extractedValue_15922_name_0, extractedValue_15945_next_1) ;
      {
      routine_handlePropertyAccess_3F_self_26__26__3F_routineAttributes_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_3F__3F_ (constinArgument_inSelfType, var_currentType_15790, var_currentLLVMName_15821, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, extractedValue_15922_name_0, extractedValue_15945_next_1, inCompiler  COMMA_SOURCE_FILE ("lvalue.galgas", 415)) ;
      }
    }
    break ;
  case GALGAS_LValueOperandAST::Enumeration::enum_arrayAccess:
    {
      GALGAS_expressionAST extractedValue_16386_indexExpression_0 ;
      GALGAS_location extractedValue_16402_endOfIndex_1 ;
      GALGAS_bool extractedValue_16413_checkIndexExpression_2 ;
      GALGAS_LValueOperandAST extractedValue_16434_nextOperand_3 ;
      constinArgument_inOperand.getAssociatedValuesFor_arrayAccess (extractedValue_16386_indexExpression_0, extractedValue_16402_endOfIndex_1, extractedValue_16413_checkIndexExpression_2, extractedValue_16434_nextOperand_3) ;
      {
      routine_handleArrayAccess_3F_self_26__26__3F_routineAttributes_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_3F__3F__3F__3F_ (constinArgument_inSelfType, var_currentType_15790, var_currentLLVMName_15821, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, extractedValue_16386_indexExpression_0, extractedValue_16402_endOfIndex_1, extractedValue_16413_checkIndexExpression_2, extractedValue_16434_nextOperand_3, inCompiler  COMMA_SOURCE_FILE ("lvalue.galgas", 431)) ;
      }
    }
    break ;
  }
  outArgument_outInternalRepresentation = GALGAS_LValueRepresentation::init_21__21_ (var_currentType_15790, var_currentLLVMName_15821, inCompiler COMMA_HERE) ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'handleNextOperand?self&&??routineAttributes?context?mode&temporary&staticEntityMap&variableMap&alloca&instructionListIR'
//
//--------------------------------------------------------------------------------------------------

void routine_handleNextOperand_3F_self_26__26__3F__3F_routineAttributes_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR (const GALGAS_omnibusType constinArgument_inSelfType,
                                                                                                                                                                          GALGAS_omnibusType & ioArgument_ioCurrentType,
                                                                                                                                                                          GALGAS_string & ioArgument_ioCurrentLLVMName,
                                                                                                                                                                          const GALGAS_LValueOperandAST constinArgument_inOperand,
                                                                                                                                                                          const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                                                                                                                                                          const GALGAS_semanticContext constinArgument_inContext,
                                                                                                                                                                          const GALGAS_mode constinArgument_inMode,
                                                                                                                                                                          GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                                                                                                                          GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                                                                                                                          GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                                                                                                                          GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                                                                                                                          GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                                                                                                                          Compiler * inCompiler
                                                                                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  switch (constinArgument_inOperand.enumValue ()) {
  case GALGAS_LValueOperandAST::Enumeration::invalid:
    break ;
  case GALGAS_LValueOperandAST::Enumeration::enum_noOperand:
    break ;
  case GALGAS_LValueOperandAST::Enumeration::enum_property:
    {
      GALGAS_lstring extractedValue_17754_name_0 ;
      GALGAS_LValueOperandAST extractedValue_17777_next_1 ;
      constinArgument_inOperand.getAssociatedValuesFor_property (extractedValue_17754_name_0, extractedValue_17777_next_1) ;
      {
      routine_handlePropertyAccess_3F_self_26__26__3F_routineAttributes_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_3F__3F_ (constinArgument_inSelfType, ioArgument_ioCurrentType, ioArgument_ioCurrentLLVMName, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, extractedValue_17754_name_0, extractedValue_17777_next_1, inCompiler  COMMA_SOURCE_FILE ("lvalue.galgas", 471)) ;
      }
    }
    break ;
  case GALGAS_LValueOperandAST::Enumeration::enum_arrayAccess:
    {
      GALGAS_expressionAST extractedValue_18222_indexExpression_0 ;
      GALGAS_location extractedValue_18238_endOfIndex_1 ;
      GALGAS_bool extractedValue_18249_checkIndexExpression_2 ;
      GALGAS_LValueOperandAST extractedValue_18270_nextOperand_3 ;
      constinArgument_inOperand.getAssociatedValuesFor_arrayAccess (extractedValue_18222_indexExpression_0, extractedValue_18238_endOfIndex_1, extractedValue_18249_checkIndexExpression_2, extractedValue_18270_nextOperand_3) ;
      {
      routine_handleArrayAccess_3F_self_26__26__3F_routineAttributes_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_3F__3F__3F__3F_ (constinArgument_inSelfType, ioArgument_ioCurrentType, ioArgument_ioCurrentLLVMName, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, extractedValue_18222_indexExpression_0, extractedValue_18238_endOfIndex_1, extractedValue_18249_checkIndexExpression_2, extractedValue_18270_nextOperand_3, inCompiler  COMMA_SOURCE_FILE ("lvalue.galgas", 487)) ;
      }
    }
    break ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'analyzeEffectiveParameters?self?routineAttributes?formal?effective?errorLocation?context?requiredMode&temporary&staticEntityMap&variableMap&alloca&instructionListIR&effectiveIR'
//
//--------------------------------------------------------------------------------------------------

void routine_analyzeEffectiveParameters_3F_self_3F_routineAttributes_3F_formal_3F_effective_3F_errorLocation_3F_context_3F_requiredMode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_26_effectiveIR (const GALGAS_omnibusType constinArgument_inSelfType,
                                                                                                                                                                                                                                      const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                                                                                                                                                                                                                      const GALGAS_routineTypedSignature constinArgument_inFormalSignature,
                                                                                                                                                                                                                                      const GALGAS_effectiveArgumentListAST constinArgument_inEffectiveParameterList,
                                                                                                                                                                                                                                      const GALGAS_location constinArgument_inErrorLocation,
                                                                                                                                                                                                                                      const GALGAS_semanticContext constinArgument_inContext,
                                                                                                                                                                                                                                      const GALGAS_mode constinArgument_inRequiredMode,
                                                                                                                                                                                                                                      GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                                                                                                                                                                                      GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                                                                                                                                                                                      GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                                                                                                                                                                                      GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                                                                                                                                                                                      GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                                                                                                                                                                                      GALGAS_procCallEffectiveParameterListIR & ioArgument_ioEffectiveParameterListIR,
                                                                                                                                                                                                                                      Compiler * inCompiler
                                                                                                                                                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_procEffectiveParameterList temp_0 = GALGAS_procEffectiveParameterList::init (inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 129)) ;
  GALGAS_procEffectiveParameterList var_parameterList_5218 = temp_0 ;
  cEnumerator_routineTypedSignature enumerator_5267 (constinArgument_inFormalSignature, EnumerationOrder::up) ;
  cEnumerator_effectiveArgumentListAST enumerator_5327 (constinArgument_inEffectiveParameterList, EnumerationOrder::up) ;
  while (enumerator_5267.hasCurrentObject () && enumerator_5327.hasCurrentObject ()) {
    switch (enumerator_5327.current_mEffectiveParameterKind (HERE).enumValue ()) {
    case GALGAS_effectiveArgumentPassingModeAST::Enumeration::invalid:
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::Enumeration::enum_inputWithType:
      {
        GALGAS_bool extractedValue_5455_constant_0 ;
        GALGAS_lstring extractedValue_5473_typeName_1 ;
        GALGAS_lstring extractedValue_5491_name_2 ;
        enumerator_5327.current_mEffectiveParameterKind (HERE).getAssociatedValuesFor_inputWithType (extractedValue_5455_constant_0, extractedValue_5473_typeName_1, extractedValue_5491_name_2) ;
        GALGAS_omnibusType temp_1 ;
        const enumGalgasBool test_2 = GALGAS_bool (ComparisonKind::equal, extractedValue_5473_typeName_1.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_2) {
          temp_1 = extensionGetter_type (enumerator_5267.current_mTypeProxy (HERE), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 134)) ;
        }else if (kBoolFalse == test_2) {
          temp_1 = extensionGetter_type (extensionGetter_searchKey (constinArgument_inContext.readProperty_mTypeMap (), extractedValue_5473_typeName_1, inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 136)), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 136)) ;
        }
        GALGAS_omnibusType var_type_5509 = temp_1 ;
        enumGalgasBool test_3 = kBoolTrue ;
        if (kBoolTrue == test_3) {
          test_3 = extractedValue_5455_constant_0.boolEnum () ;
          if (kBoolTrue == test_3) {
            {
            extensionSetter_insertLocalConstant (ioArgument_ioUniversalMap, extractedValue_5491_name_2, GALGAS_bool (false), var_type_5509, extractedValue_5491_name_2, inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 139)) ;
            }
          }
        }
        if (kBoolFalse == test_3) {
          {
          extensionSetter_insertLocalVariable (ioArgument_ioUniversalMap, extractedValue_5491_name_2, var_type_5509, extractedValue_5491_name_2, GALGAS_valuedObjectState::class_func_hasUnreadValue (SOURCE_FILE ("effective-parameters.galgas", 141)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 141)) ;
          }
        }
        ioArgument_ioAllocaList.addAssign_operation (function_llvmNameForLocalVariable (extractedValue_5491_name_2.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 143)), var_type_5509, GALGAS_bool (true)  COMMA_SOURCE_FILE ("effective-parameters.galgas", 143)) ;
        var_parameterList_5218.addAssign_operation (enumerator_5327.current_mEffectiveParameterKind (HERE), enumerator_5327.current_mSelector (HERE), var_type_5509  COMMA_SOURCE_FILE ("effective-parameters.galgas", 144)) ;
        ioArgument_ioEffectiveParameterListIR.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::class_func_input (SOURCE_FILE ("effective-parameters.galgas", 146)), GALGAS_objectIR::class_func_reference (var_type_5509, function_llvmNameForLocalVariable (extractedValue_5491_name_2.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 147))  COMMA_SOURCE_FILE ("effective-parameters.galgas", 147))  COMMA_SOURCE_FILE ("effective-parameters.galgas", 145)) ;
      }
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::Enumeration::enum_input:
      {
        GALGAS_lstring extractedValue_6167_name_0 ;
        enumerator_5327.current_mEffectiveParameterKind (HERE).getAssociatedValuesFor_input (extractedValue_6167_name_0) ;
        GALGAS_objectIR var_objectIR_6243 ;
        {
        extensionSetter_searchValuedObjectForWriteAccess (ioArgument_ioUniversalMap, extractedValue_6167_name_0, var_objectIR_6243, inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 149)) ;
        }
        var_parameterList_5218.addAssign_operation (enumerator_5327.current_mEffectiveParameterKind (HERE), enumerator_5327.current_mSelector (HERE), extensionGetter_type (var_objectIR_6243, inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 159))  COMMA_SOURCE_FILE ("effective-parameters.galgas", 159)) ;
        ioArgument_ioEffectiveParameterListIR.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::class_func_input (SOURCE_FILE ("effective-parameters.galgas", 161)), GALGAS_objectIR::class_func_reference (extensionGetter_type (var_objectIR_6243, inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 163)), extensionGetter_llvmName (var_objectIR_6243, inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 164)).getter_nowhere (SOURCE_FILE ("effective-parameters.galgas", 164)).readProperty_string ()  COMMA_SOURCE_FILE ("effective-parameters.galgas", 162))  COMMA_SOURCE_FILE ("effective-parameters.galgas", 160)) ;
      }
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::Enumeration::enum_output:
      {
        GALGAS_expressionAST extractedValue_6907_expression_0 ;
        GALGAS_location extractedValue_6928_endOfExp_1 ;
        enumerator_5327.current_mEffectiveParameterKind (HERE).getAssociatedValuesFor_output (extractedValue_6907_expression_0, extractedValue_6928_endOfExp_1) ;
        GALGAS_objectIR var_expressionResult_7384 ;
        callExtensionMethod_analyzeExpression ((cPtr_expressionAST *) extractedValue_6907_expression_0.ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, extensionGetter_type (enumerator_5267.current_mTypeProxy (HERE), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 170)), constinArgument_inContext, constinArgument_inRequiredMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_expressionResult_7384, inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 167)) ;
        {
        extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_expressionResult_7384, inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 180)) ;
        }
        GALGAS_objectIR var_result_7541 = function_checkAssignmentCompatibility (constinArgument_inContext.readProperty_mAssignmentOperatorMap (), var_expressionResult_7384, extensionGetter_type (enumerator_5267.current_mTypeProxy (HERE), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 187)), extractedValue_6928_endOfExp_1, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 184)) ;
        var_parameterList_5218.addAssign_operation (enumerator_5327.current_mEffectiveParameterKind (HERE), enumerator_5327.current_mSelector (HERE), extensionGetter_type (enumerator_5267.current_mTypeProxy (HERE), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 191))  COMMA_SOURCE_FILE ("effective-parameters.galgas", 191)) ;
        ioArgument_ioEffectiveParameterListIR.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::class_func_output (SOURCE_FILE ("effective-parameters.galgas", 192)), var_result_7541  COMMA_SOURCE_FILE ("effective-parameters.galgas", 192)) ;
      }
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::Enumeration::enum_outputInput:
      {
        GALGAS_lstring extractedValue_7973_name_0 ;
        enumerator_5327.current_mEffectiveParameterKind (HERE).getAssociatedValuesFor_outputInput (extractedValue_7973_name_0) ;
        GALGAS_objectIR var_objectIR_8053 ;
        {
        extensionSetter_searchValuedObjectForReadWriteAccess (ioArgument_ioUniversalMap, extractedValue_7973_name_0, var_objectIR_8053, inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 194)) ;
        }
        var_parameterList_5218.addAssign_operation (enumerator_5327.current_mEffectiveParameterKind (HERE), enumerator_5327.current_mSelector (HERE), extensionGetter_type (var_objectIR_8053, inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 195))  COMMA_SOURCE_FILE ("effective-parameters.galgas", 195)) ;
        GALGAS_objectIR var_argumentIR_8169 = GALGAS_objectIR::class_func_reference (extensionGetter_type (var_objectIR_8053, inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 197)), extensionGetter_llvmName (var_objectIR_8053, inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 198))  COMMA_SOURCE_FILE ("effective-parameters.galgas", 196)) ;
        ioArgument_ioEffectiveParameterListIR.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::class_func_outputInput (SOURCE_FILE ("effective-parameters.galgas", 200)), var_argumentIR_8169  COMMA_SOURCE_FILE ("effective-parameters.galgas", 200)) ;
      }
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::Enumeration::enum_outputInputSelfVariable:
      {
        GALGAS_lstring extractedValue_8385_name_0 ;
        enumerator_5327.current_mEffectiveParameterKind (HERE).getAssociatedValuesFor_outputInputSelfVariable (extractedValue_8385_name_0) ;
        GALGAS_propertyGetterMap var_propertyGetterMap_8501 = extensionGetter_propertyGetterMap (constinArgument_inContext, constinArgument_inSelfType, inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 203)) ;
        GALGAS_propertyGetterKind var_propertyAccess_8724 ;
        GALGAS_propertyVisibility joker_8696 ; // Joker input parameter
        var_propertyGetterMap_8501.method_searchKey (extractedValue_8385_name_0, joker_8696, var_propertyAccess_8724, inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 205)) ;
        switch (var_propertyAccess_8724.enumValue ()) {
        case GALGAS_propertyGetterKind::Enumeration::invalid:
          break ;
        case GALGAS_propertyGetterKind::Enumeration::enum_constantProperty:
          {
            GALGAS_objectIR extractedValue_8797__0 ;
            var_propertyAccess_8724.getAssociatedValuesFor_constantProperty (extractedValue_8797__0) ;
            TC_Array <FixItDescription> fixItArray4 ;
            inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("a constant property cannot be used as output / input parameter"), fixItArray4  COMMA_SOURCE_FILE ("effective-parameters.galgas", 208)) ;
          }
          break ;
        case GALGAS_propertyGetterKind::Enumeration::enum_storedProperty:
          {
            GALGAS_omnibusType extractedValue_8939_propertyType_0 ;
            GALGAS_uint extractedValue_8958_propertyIndex_1 ;
            var_propertyAccess_8724.getAssociatedValuesFor_storedProperty (extractedValue_8939_propertyType_0, extractedValue_8958_propertyIndex_1) ;
            GALGAS_string var_property_5F_llvmName_9020 ;
            {
            extensionSetter_newTempLLVMVar (ioArgument_ioTemporaries, var_property_5F_llvmName_9020, inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 210)) ;
            }
            {
            extensionSetter_appendGetUniversalPropertyReference (ioArgument_ioInstructionGenerationList, constinArgument_inSelfType, function_llvmNameForSelf (inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 213)), var_property_5F_llvmName_9020, extractedValue_8958_propertyIndex_1, extractedValue_8385_name_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 211)) ;
            }
            var_parameterList_5218.addAssign_operation (enumerator_5327.current_mEffectiveParameterKind (HERE), enumerator_5327.current_mSelector (HERE), extractedValue_8939_propertyType_0  COMMA_SOURCE_FILE ("effective-parameters.galgas", 218)) ;
            ioArgument_ioEffectiveParameterListIR.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::class_func_outputInput (SOURCE_FILE ("effective-parameters.galgas", 219)), GALGAS_objectIR::class_func_reference (extractedValue_8939_propertyType_0, var_property_5F_llvmName_9020  COMMA_SOURCE_FILE ("effective-parameters.galgas", 219))  COMMA_SOURCE_FILE ("effective-parameters.galgas", 219)) ;
          }
          break ;
        case GALGAS_propertyGetterKind::Enumeration::enum_computedProperty:
          {
            GALGAS_unifiedTypeMapEntry extractedValue_9484__0 ;
            GALGAS_routineLLVMNameDict extractedValue_9484__1 ;
            var_propertyAccess_8724.getAssociatedValuesFor_computedProperty (extractedValue_9484__0, extractedValue_9484__1) ;
            TC_Array <FixItDescription> fixItArray5 ;
            inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("a computed property cannot be used as output / input parameter"), fixItArray5  COMMA_SOURCE_FILE ("effective-parameters.galgas", 221)) ;
          }
          break ;
        }
      }
      break ;
    }
    enumerator_5267.gotoNextObject () ;
    enumerator_5327.gotoNextObject () ;
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    test_6 = GALGAS_bool (ComparisonKind::notEqual, constinArgument_inFormalSignature.getter_count (SOURCE_FILE ("effective-parameters.galgas", 226)).objectCompare (constinArgument_inEffectiveParameterList.getter_count (SOURCE_FILE ("effective-parameters.galgas", 226)))).boolEnum () ;
    if (kBoolTrue == test_6) {
      TC_Array <FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("this routine requires ").add_operation (constinArgument_inFormalSignature.getter_count (SOURCE_FILE ("effective-parameters.galgas", 227)).getter_string (SOURCE_FILE ("effective-parameters.galgas", 227)), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 227)).add_operation (GALGAS_string (" argument(s), this call names "), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 227)).add_operation (constinArgument_inEffectiveParameterList.getter_count (SOURCE_FILE ("effective-parameters.galgas", 228)).getter_string (SOURCE_FILE ("effective-parameters.galgas", 227)), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 227)).add_operation (GALGAS_string (" argument(s)"), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 228)), fixItArray7  COMMA_SOURCE_FILE ("effective-parameters.galgas", 227)) ;
    }
  }
  if (kBoolFalse == test_6) {
    cEnumerator_routineTypedSignature enumerator_9966 (constinArgument_inFormalSignature, EnumerationOrder::up) ;
    cEnumerator_procEffectiveParameterList enumerator_10047 (var_parameterList_5218, EnumerationOrder::up) ;
    while (enumerator_9966.hasCurrentObject () && enumerator_10047.hasCurrentObject ()) {
      enumGalgasBool test_8 = kBoolTrue ;
      if (kBoolTrue == test_8) {
        test_8 = GALGAS_bool (ComparisonKind::notEqual, extensionGetter_type (enumerator_9966.current_mTypeProxy (HERE), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 231)).readProperty_omnibusTypeDescriptionName ().objectCompare (enumerator_10047.current_mParameterType (HERE).readProperty_omnibusTypeDescriptionName ())).boolEnum () ;
        if (kBoolTrue == test_8) {
          TC_Array <FixItDescription> fixItArray9 ;
          inCompiler->emitSemanticError (enumerator_10047.current_mSelector (HERE).readProperty_location (), GALGAS_string ("the actual parameter type is $").add_operation (enumerator_10047.current_mParameterType (HERE).readProperty_omnibusTypeDescriptionName (), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 232)).add_operation (GALGAS_string (", and is incompatible with the formal type $"), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 232)).add_operation (extensionGetter_key (enumerator_9966.current_mTypeProxy (HERE), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 233)), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 233)), fixItArray9  COMMA_SOURCE_FILE ("effective-parameters.galgas", 232)) ;
        }
      }
      GALGAS_string var_requiredPassingMode_10431 = extensionGetter_requiredActualPassingModeForSelector (enumerator_9966.current_mFormalArgumentPassingMode (HERE), enumerator_9966.current_mSelector (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 235)) ;
      GALGAS_string var_testedPassingMode_10554 = extensionGetter_passingModeForActualSelector (enumerator_10047.current_mEffectiveParameterPassingMode (HERE), enumerator_10047.current_mSelector (HERE), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 236)) ;
      enumGalgasBool test_10 = kBoolTrue ;
      if (kBoolTrue == test_10) {
        test_10 = GALGAS_bool (ComparisonKind::notEqual, var_requiredPassingMode_10431.objectCompare (var_testedPassingMode_10554)).boolEnum () ;
        if (kBoolTrue == test_10) {
          TC_Array <FixItDescription> fixItArray11 ;
          inCompiler->emitSemanticError (enumerator_10047.current_mSelector (HERE).readProperty_location (), GALGAS_string ("the required selector is '").add_operation (var_requiredPassingMode_10431, inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 238)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 238)), fixItArray11  COMMA_SOURCE_FILE ("effective-parameters.galgas", 238)) ;
        }
      }
      enumerator_9966.gotoNextObject () ;
      enumerator_10047.gotoNextObject () ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Once function 'llvmAttributeFunction'
//
//--------------------------------------------------------------------------------------------------

static GALGAS_string onceFunction_llvmAttributeFunction (Compiler *
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string (" nounwind minsize optsize ") ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_llvmAttributeFunction = false ;
static GALGAS_string gOnceFunctionResult_llvmAttributeFunction ;

//--------------------------------------------------------------------------------------------------

GALGAS_string function_llvmAttributeFunction (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_llvmAttributeFunction) {
    gOnceFunctionResult_llvmAttributeFunction = onceFunction_llvmAttributeFunction (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_llvmAttributeFunction = true ;
  }
  return gOnceFunctionResult_llvmAttributeFunction ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_llvmAttributeFunction (void) {
  gOnceFunctionResult_llvmAttributeFunction.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_llvmAttributeFunction (nullptr,
                                                                 releaseOnceFunctionResult_llvmAttributeFunction) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_llvmAttributeFunction [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_llvmAttributeFunction (Compiler * inCompiler,
                                                                      const cObjectArray & /* inEffectiveParameterArray */,
                                                                      const GALGAS_location & /* inErrorLocation */
                                                                      COMMA_LOCATION_ARGS) {
  return function_llvmAttributeFunction (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_llvmAttributeFunction ("llvmAttributeFunction",
                                                                       functionWithGenericHeader_llvmAttributeFunction,
                                                                       & kTypeDescriptor_GALGAS_string,
                                                                       0,
                                                                       functionArgs_llvmAttributeFunction) ;

//--------------------------------------------------------------------------------------------------
//
//Once function 'staticAttribute'
//
//--------------------------------------------------------------------------------------------------

static GALGAS_string onceFunction_staticAttribute (Compiler *
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("static") ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_staticAttribute = false ;
static GALGAS_string gOnceFunctionResult_staticAttribute ;

//--------------------------------------------------------------------------------------------------

GALGAS_string function_staticAttribute (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_staticAttribute) {
    gOnceFunctionResult_staticAttribute = onceFunction_staticAttribute (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_staticAttribute = true ;
  }
  return gOnceFunctionResult_staticAttribute ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_staticAttribute (void) {
  gOnceFunctionResult_staticAttribute.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_staticAttribute (nullptr,
                                                           releaseOnceFunctionResult_staticAttribute) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_staticAttribute [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_staticAttribute (Compiler * inCompiler,
                                                                const cObjectArray & /* inEffectiveParameterArray */,
                                                                const GALGAS_location & /* inErrorLocation */
                                                                COMMA_LOCATION_ARGS) {
  return function_staticAttribute (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_staticAttribute ("staticAttribute",
                                                                 functionWithGenericHeader_staticAttribute,
                                                                 & kTypeDescriptor_GALGAS_string,
                                                                 0,
                                                                 functionArgs_staticAttribute) ;

//--------------------------------------------------------------------------------------------------
//
//Once function 'compileTimeDeclarationBarrier'
//
//--------------------------------------------------------------------------------------------------

static GALGAS_lstring onceFunction_compileTimeDeclarationBarrier (Compiler *
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  result_result = GALGAS_string ("«compile time»").getter_nowhere (SOURCE_FILE ("generated-code-prefixes.galgas", 16)) ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_compileTimeDeclarationBarrier = false ;
static GALGAS_lstring gOnceFunctionResult_compileTimeDeclarationBarrier ;

//--------------------------------------------------------------------------------------------------

GALGAS_lstring function_compileTimeDeclarationBarrier (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_compileTimeDeclarationBarrier) {
    gOnceFunctionResult_compileTimeDeclarationBarrier = onceFunction_compileTimeDeclarationBarrier (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_compileTimeDeclarationBarrier = true ;
  }
  return gOnceFunctionResult_compileTimeDeclarationBarrier ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_compileTimeDeclarationBarrier (void) {
  gOnceFunctionResult_compileTimeDeclarationBarrier.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_compileTimeDeclarationBarrier (nullptr,
                                                                         releaseOnceFunctionResult_compileTimeDeclarationBarrier) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_compileTimeDeclarationBarrier [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_compileTimeDeclarationBarrier (Compiler * inCompiler,
                                                                              const cObjectArray & /* inEffectiveParameterArray */,
                                                                              const GALGAS_location & /* inErrorLocation */
                                                                              COMMA_LOCATION_ARGS) {
  return function_compileTimeDeclarationBarrier (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_compileTimeDeclarationBarrier ("compileTimeDeclarationBarrier",
                                                                               functionWithGenericHeader_compileTimeDeclarationBarrier,
                                                                               & kTypeDescriptor_GALGAS_lstring,
                                                                               0,
                                                                               functionArgs_compileTimeDeclarationBarrier) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'registerGroupNameFromOmnibusName'
//
//--------------------------------------------------------------------------------------------------

GALGAS_lstring function_registerGroupNameFromOmnibusName (const GALGAS_lstring & constinArgument_inName,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  result_result = GALGAS_lstring::init_21__21_ (GALGAS_string ("registers ").add_operation (constinArgument_inName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 24)), constinArgument_inName.readProperty_location (), inCompiler COMMA_HERE) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_registerGroupNameFromOmnibusName [2] = {
  & kTypeDescriptor_GALGAS_lstring,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_registerGroupNameFromOmnibusName (Compiler * inCompiler,
                                                                                 const cObjectArray & inEffectiveParameterArray,
                                                                                 const GALGAS_location & /* inErrorLocation */
                                                                                 COMMA_LOCATION_ARGS) {
  const GALGAS_lstring operand0 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  return function_registerGroupNameFromOmnibusName (operand0,
                                                    inCompiler
                                                    COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_registerGroupNameFromOmnibusName ("registerGroupNameFromOmnibusName",
                                                                                  functionWithGenericHeader_registerGroupNameFromOmnibusName,
                                                                                  & kTypeDescriptor_GALGAS_lstring,
                                                                                  1,
                                                                                  functionArgs_registerGroupNameFromOmnibusName) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'literalStringName'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string function_literalStringName (const GALGAS_uint & constinArgument_inIndex,
                                          Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("@string.").add_operation (constinArgument_inIndex.getter_string (SOURCE_FILE ("generated-code-prefixes.galgas", 32)), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 32)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_literalStringName [2] = {
  & kTypeDescriptor_GALGAS_uint,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_literalStringName (Compiler * inCompiler,
                                                                  const cObjectArray & inEffectiveParameterArray,
                                                                  const GALGAS_location & /* inErrorLocation */
                                                                  COMMA_LOCATION_ARGS) {
  const GALGAS_uint operand0 = GALGAS_uint::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  return function_literalStringName (operand0,
                                     inCompiler
                                     COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_literalStringName ("literalStringName",
                                                                   functionWithGenericHeader_literalStringName,
                                                                   & kTypeDescriptor_GALGAS_string,
                                                                   1,
                                                                   functionArgs_literalStringName) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'literalCharacterArrayName'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string function_literalCharacterArrayName (const GALGAS_uint & constinArgument_inIndex,
                                                  Compiler * inCompiler
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("@str.array.").add_operation (constinArgument_inIndex.getter_string (SOURCE_FILE ("generated-code-prefixes.galgas", 38)), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 38)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_literalCharacterArrayName [2] = {
  & kTypeDescriptor_GALGAS_uint,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_literalCharacterArrayName (Compiler * inCompiler,
                                                                          const cObjectArray & inEffectiveParameterArray,
                                                                          const GALGAS_location & /* inErrorLocation */
                                                                          COMMA_LOCATION_ARGS) {
  const GALGAS_uint operand0 = GALGAS_uint::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  return function_literalCharacterArrayName (operand0,
                                             inCompiler
                                             COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_literalCharacterArrayName ("literalCharacterArrayName",
                                                                           functionWithGenericHeader_literalCharacterArrayName,
                                                                           & kTypeDescriptor_GALGAS_string,
                                                                           1,
                                                                           functionArgs_literalCharacterArrayName) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'infixOperatorMapKey'
//
//--------------------------------------------------------------------------------------------------

GALGAS_lstring function_infixOperatorMapKey (const GALGAS_omnibusType & constinArgument_inLeftType,
                                             const GALGAS_omnibusInfixOperator & constinArgument_inInfixOperator,
                                             const GALGAS_location & constinArgument_inOperatorLocation,
                                             const GALGAS_omnibusType & constinArgument_inRightType,
                                             Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  GALGAS_string var_s_2099 = constinArgument_inLeftType.readProperty_omnibusTypeDescriptionName ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 50)).add_operation (extensionGetter_string (constinArgument_inInfixOperator, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 50)), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 50)) ;
  var_s_2099.plusAssign_operation(GALGAS_string (" ").add_operation (constinArgument_inRightType.readProperty_omnibusTypeDescriptionName (), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 51)), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 51)) ;
  result_result = GALGAS_lstring::init_21__21_ (var_s_2099, constinArgument_inOperatorLocation, inCompiler COMMA_HERE) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_infixOperatorMapKey [5] = {
  & kTypeDescriptor_GALGAS_omnibusType,
  & kTypeDescriptor_GALGAS_omnibusInfixOperator,
  & kTypeDescriptor_GALGAS_location,
  & kTypeDescriptor_GALGAS_omnibusType,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_infixOperatorMapKey (Compiler * inCompiler,
                                                                    const cObjectArray & inEffectiveParameterArray,
                                                                    const GALGAS_location & /* inErrorLocation */
                                                                    COMMA_LOCATION_ARGS) {
  const GALGAS_omnibusType operand0 = GALGAS_omnibusType::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                         inCompiler
                                                                         COMMA_THERE) ;
  const GALGAS_omnibusInfixOperator operand1 = GALGAS_omnibusInfixOperator::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                                                           inCompiler
                                                                                           COMMA_THERE) ;
  const GALGAS_location operand2 = GALGAS_location::extractObject (inEffectiveParameterArray.objectAtIndex (2 COMMA_HERE),
                                                                   inCompiler
                                                                   COMMA_THERE) ;
  const GALGAS_omnibusType operand3 = GALGAS_omnibusType::extractObject (inEffectiveParameterArray.objectAtIndex (3 COMMA_HERE),
                                                                         inCompiler
                                                                         COMMA_THERE) ;
  return function_infixOperatorMapKey (operand0,
                                       operand1,
                                       operand2,
                                       operand3,
                                       inCompiler
                                       COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_infixOperatorMapKey ("infixOperatorMapKey",
                                                                     functionWithGenericHeader_infixOperatorMapKey,
                                                                     & kTypeDescriptor_GALGAS_lstring,
                                                                     4,
                                                                     functionArgs_infixOperatorMapKey) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'infixOperatorFunctionName'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string function_infixOperatorFunctionName (const GALGAS_omnibusType & constinArgument_inLeftType,
                                                  const GALGAS_omnibusInfixOperator & constinArgument_inOperator,
                                                  const GALGAS_omnibusType & constinArgument_inRightType,
                                                  Compiler * inCompiler
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("operator.").add_operation (constinArgument_inLeftType.readProperty_omnibusTypeDescriptionName (), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 62)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 62)) ;
  switch (constinArgument_inOperator.enumValue ()) {
  case GALGAS_omnibusInfixOperator::Enumeration::invalid:
    break ;
  case GALGAS_omnibusInfixOperator::Enumeration::enum_equal:
    {
      result_result.plusAssign_operation(GALGAS_string ("equal"), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 64)) ;
    }
    break ;
  case GALGAS_omnibusInfixOperator::Enumeration::enum_lessThan:
    {
      result_result.plusAssign_operation(GALGAS_string ("lessThan"), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 65)) ;
    }
    break ;
  case GALGAS_omnibusInfixOperator::Enumeration::enum_infEqual:
    {
      result_result.plusAssign_operation(GALGAS_string ("infEqual"), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 66)) ;
    }
    break ;
  case GALGAS_omnibusInfixOperator::Enumeration::enum_bitWiseAndOp:
    {
      result_result.plusAssign_operation(GALGAS_string ("bitWiseAnd"), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 67)) ;
    }
    break ;
  case GALGAS_omnibusInfixOperator::Enumeration::enum_bitWiseOrOp:
    {
      result_result.plusAssign_operation(GALGAS_string ("bitWiseOr"), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 68)) ;
    }
    break ;
  case GALGAS_omnibusInfixOperator::Enumeration::enum_bitWiseXorOp:
    {
      result_result.plusAssign_operation(GALGAS_string ("xor"), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 69)) ;
    }
    break ;
  case GALGAS_omnibusInfixOperator::Enumeration::enum_addOp:
    {
      result_result.plusAssign_operation(GALGAS_string ("add"), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 70)) ;
    }
    break ;
  case GALGAS_omnibusInfixOperator::Enumeration::enum_addOpNoOvf:
    {
      result_result.plusAssign_operation(GALGAS_string ("addOpNoOvf"), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 71)) ;
    }
    break ;
  case GALGAS_omnibusInfixOperator::Enumeration::enum_subOp:
    {
      result_result.plusAssign_operation(GALGAS_string ("sub"), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 72)) ;
    }
    break ;
  case GALGAS_omnibusInfixOperator::Enumeration::enum_subOpNoOvf:
    {
      result_result.plusAssign_operation(GALGAS_string ("subOpNoOvf"), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 73)) ;
    }
    break ;
  case GALGAS_omnibusInfixOperator::Enumeration::enum_mulOp:
    {
      result_result.plusAssign_operation(GALGAS_string ("mul"), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 74)) ;
    }
    break ;
  case GALGAS_omnibusInfixOperator::Enumeration::enum_mulOpNoOvf:
    {
      result_result.plusAssign_operation(GALGAS_string ("mulOpNoOvf"), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 75)) ;
    }
    break ;
  case GALGAS_omnibusInfixOperator::Enumeration::enum_divOp:
    {
      result_result.plusAssign_operation(GALGAS_string ("div"), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 76)) ;
    }
    break ;
  case GALGAS_omnibusInfixOperator::Enumeration::enum_divOpNoOvf:
    {
      result_result.plusAssign_operation(GALGAS_string ("divNoOvf"), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 77)) ;
    }
    break ;
  case GALGAS_omnibusInfixOperator::Enumeration::enum_modOp:
    {
      result_result.plusAssign_operation(GALGAS_string ("modulo"), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 78)) ;
    }
    break ;
  case GALGAS_omnibusInfixOperator::Enumeration::enum_modOpNoOvf:
    {
      result_result.plusAssign_operation(GALGAS_string ("moduloNoOvf"), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 79)) ;
    }
    break ;
  case GALGAS_omnibusInfixOperator::Enumeration::enum_leftShiftOp:
    {
      result_result.plusAssign_operation(GALGAS_string ("leftShift"), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 80)) ;
    }
    break ;
  case GALGAS_omnibusInfixOperator::Enumeration::enum_rightShiftOp:
    {
      result_result.plusAssign_operation(GALGAS_string ("rightShift"), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 81)) ;
    }
    break ;
  }
  result_result.plusAssign_operation(GALGAS_string (".").add_operation (constinArgument_inRightType.readProperty_omnibusTypeDescriptionName (), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 83)), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 83)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_infixOperatorFunctionName [4] = {
  & kTypeDescriptor_GALGAS_omnibusType,
  & kTypeDescriptor_GALGAS_omnibusInfixOperator,
  & kTypeDescriptor_GALGAS_omnibusType,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_infixOperatorFunctionName (Compiler * inCompiler,
                                                                          const cObjectArray & inEffectiveParameterArray,
                                                                          const GALGAS_location & /* inErrorLocation */
                                                                          COMMA_LOCATION_ARGS) {
  const GALGAS_omnibusType operand0 = GALGAS_omnibusType::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                         inCompiler
                                                                         COMMA_THERE) ;
  const GALGAS_omnibusInfixOperator operand1 = GALGAS_omnibusInfixOperator::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                                                           inCompiler
                                                                                           COMMA_THERE) ;
  const GALGAS_omnibusType operand2 = GALGAS_omnibusType::extractObject (inEffectiveParameterArray.objectAtIndex (2 COMMA_HERE),
                                                                         inCompiler
                                                                         COMMA_THERE) ;
  return function_infixOperatorFunctionName (operand0,
                                             operand1,
                                             operand2,
                                             inCompiler
                                             COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_infixOperatorFunctionName ("infixOperatorFunctionName",
                                                                           functionWithGenericHeader_infixOperatorFunctionName,
                                                                           & kTypeDescriptor_GALGAS_string,
                                                                           3,
                                                                           functionArgs_infixOperatorFunctionName) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'prefixOperatorMapKey'
//
//--------------------------------------------------------------------------------------------------

GALGAS_lstring function_prefixOperatorMapKey (const GALGAS_omnibusType & constinArgument_inReceiverType,
                                              const GALGAS_prefixOperator & constinArgument_inOperator,
                                              const GALGAS_location & constinArgument_inOperatorLocation,
                                              Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  GALGAS_string var_s_3921 ;
  switch (constinArgument_inOperator.enumValue ()) {
  case GALGAS_prefixOperator::Enumeration::invalid:
    break ;
  case GALGAS_prefixOperator::Enumeration::enum_minusNoOvf:
    {
      var_s_3921 = GALGAS_string ("-%") ;
    }
    break ;
  case GALGAS_prefixOperator::Enumeration::enum_minusOp:
    {
      var_s_3921 = GALGAS_string ("-") ;
    }
    break ;
  case GALGAS_prefixOperator::Enumeration::enum_notOp:
    {
      var_s_3921 = GALGAS_string ("not") ;
    }
    break ;
  case GALGAS_prefixOperator::Enumeration::enum_bitWiseComplement:
    {
      var_s_3921 = GALGAS_string ("~") ;
    }
    break ;
  }
  var_s_3921.plusAssign_operation(GALGAS_string (" ").add_operation (constinArgument_inReceiverType.readProperty_omnibusTypeDescriptionName (), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 101)), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 101)) ;
  result_result = GALGAS_lstring::init_21__21_ (var_s_3921, constinArgument_inOperatorLocation, inCompiler COMMA_HERE) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_prefixOperatorMapKey [4] = {
  & kTypeDescriptor_GALGAS_omnibusType,
  & kTypeDescriptor_GALGAS_prefixOperator,
  & kTypeDescriptor_GALGAS_location,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_prefixOperatorMapKey (Compiler * inCompiler,
                                                                     const cObjectArray & inEffectiveParameterArray,
                                                                     const GALGAS_location & /* inErrorLocation */
                                                                     COMMA_LOCATION_ARGS) {
  const GALGAS_omnibusType operand0 = GALGAS_omnibusType::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                         inCompiler
                                                                         COMMA_THERE) ;
  const GALGAS_prefixOperator operand1 = GALGAS_prefixOperator::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                                               inCompiler
                                                                               COMMA_THERE) ;
  const GALGAS_location operand2 = GALGAS_location::extractObject (inEffectiveParameterArray.objectAtIndex (2 COMMA_HERE),
                                                                   inCompiler
                                                                   COMMA_THERE) ;
  return function_prefixOperatorMapKey (operand0,
                                        operand1,
                                        operand2,
                                        inCompiler
                                        COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_prefixOperatorMapKey ("prefixOperatorMapKey",
                                                                      functionWithGenericHeader_prefixOperatorMapKey,
                                                                      & kTypeDescriptor_GALGAS_lstring,
                                                                      3,
                                                                      functionArgs_prefixOperatorMapKey) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'prefixOperatorFunctionName'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string function_prefixOperatorFunctionName (const GALGAS_omnibusType & constinArgument_inReceiverType,
                                                   const GALGAS_prefixOperator & constinArgument_inOperator,
                                                   Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("operator.") ;
  switch (constinArgument_inOperator.enumValue ()) {
  case GALGAS_prefixOperator::Enumeration::invalid:
    break ;
  case GALGAS_prefixOperator::Enumeration::enum_minusNoOvf:
    {
      result_result.plusAssign_operation(GALGAS_string ("minusNoOvf"), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 113)) ;
    }
    break ;
  case GALGAS_prefixOperator::Enumeration::enum_minusOp:
    {
      result_result.plusAssign_operation(GALGAS_string ("minus"), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 114)) ;
    }
    break ;
  case GALGAS_prefixOperator::Enumeration::enum_notOp:
    {
      result_result.plusAssign_operation(GALGAS_string ("not"), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 115)) ;
    }
    break ;
  case GALGAS_prefixOperator::Enumeration::enum_bitWiseComplement:
    {
      result_result.plusAssign_operation(GALGAS_string ("complement"), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 116)) ;
    }
    break ;
  }
  result_result.plusAssign_operation(GALGAS_string (".").add_operation (constinArgument_inReceiverType.readProperty_omnibusTypeDescriptionName (), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 118)), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 118)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_prefixOperatorFunctionName [3] = {
  & kTypeDescriptor_GALGAS_omnibusType,
  & kTypeDescriptor_GALGAS_prefixOperator,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_prefixOperatorFunctionName (Compiler * inCompiler,
                                                                           const cObjectArray & inEffectiveParameterArray,
                                                                           const GALGAS_location & /* inErrorLocation */
                                                                           COMMA_LOCATION_ARGS) {
  const GALGAS_omnibusType operand0 = GALGAS_omnibusType::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                         inCompiler
                                                                         COMMA_THERE) ;
  const GALGAS_prefixOperator operand1 = GALGAS_prefixOperator::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                                               inCompiler
                                                                               COMMA_THERE) ;
  return function_prefixOperatorFunctionName (operand0,
                                              operand1,
                                              inCompiler
                                              COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_prefixOperatorFunctionName ("prefixOperatorFunctionName",
                                                                            functionWithGenericHeader_prefixOperatorFunctionName,
                                                                            & kTypeDescriptor_GALGAS_string,
                                                                            2,
                                                                            functionArgs_prefixOperatorFunctionName) ;

//--------------------------------------------------------------------------------------------------
//
//Once function 'staticStringTypeName'
//
//--------------------------------------------------------------------------------------------------

static GALGAS_string onceFunction_staticStringTypeName (Compiler *
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("literalString") ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_staticStringTypeName = false ;
static GALGAS_string gOnceFunctionResult_staticStringTypeName ;

//--------------------------------------------------------------------------------------------------

GALGAS_string function_staticStringTypeName (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_staticStringTypeName) {
    gOnceFunctionResult_staticStringTypeName = onceFunction_staticStringTypeName (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_staticStringTypeName = true ;
  }
  return gOnceFunctionResult_staticStringTypeName ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_staticStringTypeName (void) {
  gOnceFunctionResult_staticStringTypeName.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_staticStringTypeName (nullptr,
                                                                releaseOnceFunctionResult_staticStringTypeName) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_staticStringTypeName [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_staticStringTypeName (Compiler * inCompiler,
                                                                     const cObjectArray & /* inEffectiveParameterArray */,
                                                                     const GALGAS_location & /* inErrorLocation */
                                                                     COMMA_LOCATION_ARGS) {
  return function_staticStringTypeName (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_staticStringTypeName ("staticStringTypeName",
                                                                      functionWithGenericHeader_staticStringTypeName,
                                                                      & kTypeDescriptor_GALGAS_string,
                                                                      0,
                                                                      functionArgs_staticStringTypeName) ;

//--------------------------------------------------------------------------------------------------
//
//Once function 'functionResultVariableName'
//
//--------------------------------------------------------------------------------------------------

static GALGAS_string onceFunction_functionResultVariableName (Compiler *
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("result") ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_functionResultVariableName = false ;
static GALGAS_string gOnceFunctionResult_functionResultVariableName ;

//--------------------------------------------------------------------------------------------------

GALGAS_string function_functionResultVariableName (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_functionResultVariableName) {
    gOnceFunctionResult_functionResultVariableName = onceFunction_functionResultVariableName (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_functionResultVariableName = true ;
  }
  return gOnceFunctionResult_functionResultVariableName ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_functionResultVariableName (void) {
  gOnceFunctionResult_functionResultVariableName.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_functionResultVariableName (nullptr,
                                                                      releaseOnceFunctionResult_functionResultVariableName) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_functionResultVariableName [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_functionResultVariableName (Compiler * inCompiler,
                                                                           const cObjectArray & /* inEffectiveParameterArray */,
                                                                           const GALGAS_location & /* inErrorLocation */
                                                                           COMMA_LOCATION_ARGS) {
  return function_functionResultVariableName (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_functionResultVariableName ("functionResultVariableName",
                                                                            functionWithGenericHeader_functionResultVariableName,
                                                                            & kTypeDescriptor_GALGAS_string,
                                                                            0,
                                                                            functionArgs_functionResultVariableName) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'llvmNameForFunction'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string function_llvmNameForFunction (const GALGAS_string & constinArgument_inName,
                                            Compiler *
                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = constinArgument_inName.getter_assemblerRepresentation (SOURCE_FILE ("generated-code-prefixes.galgas", 140)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_llvmNameForFunction [2] = {
  & kTypeDescriptor_GALGAS_string,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_llvmNameForFunction (Compiler * inCompiler,
                                                                    const cObjectArray & inEffectiveParameterArray,
                                                                    const GALGAS_location & /* inErrorLocation */
                                                                    COMMA_LOCATION_ARGS) {
  const GALGAS_string operand0 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  return function_llvmNameForFunction (operand0,
                                       inCompiler
                                       COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_llvmNameForFunction ("llvmNameForFunction",
                                                                     functionWithGenericHeader_llvmNameForFunction,
                                                                     & kTypeDescriptor_GALGAS_string,
                                                                     1,
                                                                     functionArgs_llvmNameForFunction) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'getterLLVMName'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string function_getterLLVMName (GALGAS_string inArgument_inReceiverLLVMTypeName,
                                       const GALGAS_string & constinArgument_inPropertyName,
                                       Compiler * inCompiler
                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("get.").add_operation (inArgument_inReceiverLLVMTypeName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 148)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 148)).add_operation (constinArgument_inPropertyName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 148)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_getterLLVMName [3] = {
  & kTypeDescriptor_GALGAS_string,
  & kTypeDescriptor_GALGAS_string,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_getterLLVMName (Compiler * inCompiler,
                                                               const cObjectArray & inEffectiveParameterArray,
                                                               const GALGAS_location & /* inErrorLocation */
                                                               COMMA_LOCATION_ARGS) {
  const GALGAS_string operand0 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  const GALGAS_string operand1 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  return function_getterLLVMName (operand0,
                                  operand1,
                                  inCompiler
                                  COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_getterLLVMName ("getterLLVMName",
                                                                functionWithGenericHeader_getterLLVMName,
                                                                & kTypeDescriptor_GALGAS_string,
                                                                2,
                                                                functionArgs_getterLLVMName) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'setterLLVMName'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string function_setterLLVMName (GALGAS_string inArgument_inReceiverLLVMTypeName,
                                       const GALGAS_string & constinArgument_inPropertyName,
                                       Compiler * inCompiler
                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("set.").add_operation (inArgument_inReceiverLLVMTypeName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 156)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 156)).add_operation (constinArgument_inPropertyName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 156)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_setterLLVMName [3] = {
  & kTypeDescriptor_GALGAS_string,
  & kTypeDescriptor_GALGAS_string,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_setterLLVMName (Compiler * inCompiler,
                                                               const cObjectArray & inEffectiveParameterArray,
                                                               const GALGAS_location & /* inErrorLocation */
                                                               COMMA_LOCATION_ARGS) {
  const GALGAS_string operand0 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  const GALGAS_string operand1 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  return function_setterLLVMName (operand0,
                                  operand1,
                                  inCompiler
                                  COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_setterLLVMName ("setterLLVMName",
                                                                functionWithGenericHeader_setterLLVMName,
                                                                & kTypeDescriptor_GALGAS_string,
                                                                2,
                                                                functionArgs_setterLLVMName) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'llvmNameForServiceInterrupt'
//
//--------------------------------------------------------------------------------------------------

GALGAS_lstring function_llvmNameForServiceInterrupt (const GALGAS_lstring & constinArgument_inName,
                                                     Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  result_result = GALGAS_lstring::init_21__21_ (GALGAS_string ("interrupt.service.").add_operation (constinArgument_inName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 164)), constinArgument_inName.readProperty_location (), inCompiler COMMA_HERE) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_llvmNameForServiceInterrupt [2] = {
  & kTypeDescriptor_GALGAS_lstring,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_llvmNameForServiceInterrupt (Compiler * inCompiler,
                                                                            const cObjectArray & inEffectiveParameterArray,
                                                                            const GALGAS_location & /* inErrorLocation */
                                                                            COMMA_LOCATION_ARGS) {
  const GALGAS_lstring operand0 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  return function_llvmNameForServiceInterrupt (operand0,
                                               inCompiler
                                               COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_llvmNameForServiceInterrupt ("llvmNameForServiceInterrupt",
                                                                             functionWithGenericHeader_llvmNameForServiceInterrupt,
                                                                             & kTypeDescriptor_GALGAS_lstring,
                                                                             1,
                                                                             functionArgs_llvmNameForServiceInterrupt) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'llvmNameForSectionInterrupt'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string function_llvmNameForSectionInterrupt (const GALGAS_string & constinArgument_inName,
                                                    Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("interrupt.section.").add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 170)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_llvmNameForSectionInterrupt [2] = {
  & kTypeDescriptor_GALGAS_string,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_llvmNameForSectionInterrupt (Compiler * inCompiler,
                                                                            const cObjectArray & inEffectiveParameterArray,
                                                                            const GALGAS_location & /* inErrorLocation */
                                                                            COMMA_LOCATION_ARGS) {
  const GALGAS_string operand0 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  return function_llvmNameForSectionInterrupt (operand0,
                                               inCompiler
                                               COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_llvmNameForSectionInterrupt ("llvmNameForSectionInterrupt",
                                                                             functionWithGenericHeader_llvmNameForSectionInterrupt,
                                                                             & kTypeDescriptor_GALGAS_string,
                                                                             1,
                                                                             functionArgs_llvmNameForSectionInterrupt) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'llvmNameForServiceCall'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string function_llvmNameForServiceCall (const GALGAS_string & constinArgument_inName,
                                               Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("service.user.").add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 178)).getter_assemblerRepresentation (SOURCE_FILE ("generated-code-prefixes.galgas", 178)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_llvmNameForServiceCall [2] = {
  & kTypeDescriptor_GALGAS_string,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_llvmNameForServiceCall (Compiler * inCompiler,
                                                                       const cObjectArray & inEffectiveParameterArray,
                                                                       const GALGAS_location & /* inErrorLocation */
                                                                       COMMA_LOCATION_ARGS) {
  const GALGAS_string operand0 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  return function_llvmNameForServiceCall (operand0,
                                          inCompiler
                                          COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_llvmNameForServiceCall ("llvmNameForServiceCall",
                                                                        functionWithGenericHeader_llvmNameForServiceCall,
                                                                        & kTypeDescriptor_GALGAS_string,
                                                                        1,
                                                                        functionArgs_llvmNameForServiceCall) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'llvmNameForServiceImplementation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string function_llvmNameForServiceImplementation (const GALGAS_string & constinArgument_inName,
                                                         Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("service.implementation.").add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 184)).getter_assemblerRepresentation (SOURCE_FILE ("generated-code-prefixes.galgas", 184)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_llvmNameForServiceImplementation [2] = {
  & kTypeDescriptor_GALGAS_string,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_llvmNameForServiceImplementation (Compiler * inCompiler,
                                                                                 const cObjectArray & inEffectiveParameterArray,
                                                                                 const GALGAS_location & /* inErrorLocation */
                                                                                 COMMA_LOCATION_ARGS) {
  const GALGAS_string operand0 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  return function_llvmNameForServiceImplementation (operand0,
                                                    inCompiler
                                                    COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_llvmNameForServiceImplementation ("llvmNameForServiceImplementation",
                                                                                  functionWithGenericHeader_llvmNameForServiceImplementation,
                                                                                  & kTypeDescriptor_GALGAS_string,
                                                                                  1,
                                                                                  functionArgs_llvmNameForServiceImplementation) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'llvmNameForSectionCall'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string function_llvmNameForSectionCall (const GALGAS_string & constinArgument_inName,
                                               Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("section.user.").add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 192)).getter_assemblerRepresentation (SOURCE_FILE ("generated-code-prefixes.galgas", 192)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_llvmNameForSectionCall [2] = {
  & kTypeDescriptor_GALGAS_string,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_llvmNameForSectionCall (Compiler * inCompiler,
                                                                       const cObjectArray & inEffectiveParameterArray,
                                                                       const GALGAS_location & /* inErrorLocation */
                                                                       COMMA_LOCATION_ARGS) {
  const GALGAS_string operand0 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  return function_llvmNameForSectionCall (operand0,
                                          inCompiler
                                          COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_llvmNameForSectionCall ("llvmNameForSectionCall",
                                                                        functionWithGenericHeader_llvmNameForSectionCall,
                                                                        & kTypeDescriptor_GALGAS_string,
                                                                        1,
                                                                        functionArgs_llvmNameForSectionCall) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'llvmNameForSectionImplementation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string function_llvmNameForSectionImplementation (const GALGAS_string & constinArgument_inName,
                                                         Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("section.implementation.").add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 198)).getter_assemblerRepresentation (SOURCE_FILE ("generated-code-prefixes.galgas", 198)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_llvmNameForSectionImplementation [2] = {
  & kTypeDescriptor_GALGAS_string,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_llvmNameForSectionImplementation (Compiler * inCompiler,
                                                                                 const cObjectArray & inEffectiveParameterArray,
                                                                                 const GALGAS_location & /* inErrorLocation */
                                                                                 COMMA_LOCATION_ARGS) {
  const GALGAS_string operand0 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  return function_llvmNameForSectionImplementation (operand0,
                                                    inCompiler
                                                    COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_llvmNameForSectionImplementation ("llvmNameForSectionImplementation",
                                                                                  functionWithGenericHeader_llvmNameForSectionImplementation,
                                                                                  & kTypeDescriptor_GALGAS_string,
                                                                                  1,
                                                                                  functionArgs_llvmNameForSectionImplementation) ;

//--------------------------------------------------------------------------------------------------
//
//Once function 'acceptVariableOmnibusName'
//
//--------------------------------------------------------------------------------------------------

static GALGAS_string onceFunction_acceptVariableOmnibusName (Compiler *
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("accept") ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_acceptVariableOmnibusName = false ;
static GALGAS_string gOnceFunctionResult_acceptVariableOmnibusName ;

//--------------------------------------------------------------------------------------------------

GALGAS_string function_acceptVariableOmnibusName (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_acceptVariableOmnibusName) {
    gOnceFunctionResult_acceptVariableOmnibusName = onceFunction_acceptVariableOmnibusName (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_acceptVariableOmnibusName = true ;
  }
  return gOnceFunctionResult_acceptVariableOmnibusName ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_acceptVariableOmnibusName (void) {
  gOnceFunctionResult_acceptVariableOmnibusName.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_acceptVariableOmnibusName (nullptr,
                                                                     releaseOnceFunctionResult_acceptVariableOmnibusName) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_acceptVariableOmnibusName [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_acceptVariableOmnibusName (Compiler * inCompiler,
                                                                          const cObjectArray & /* inEffectiveParameterArray */,
                                                                          const GALGAS_location & /* inErrorLocation */
                                                                          COMMA_LOCATION_ARGS) {
  return function_acceptVariableOmnibusName (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_acceptVariableOmnibusName ("acceptVariableOmnibusName",
                                                                           functionWithGenericHeader_acceptVariableOmnibusName,
                                                                           & kTypeDescriptor_GALGAS_string,
                                                                           0,
                                                                           functionArgs_acceptVariableOmnibusName) ;

//--------------------------------------------------------------------------------------------------
//
//Once function 'waitForGuardChangeFunctionName'
//
//--------------------------------------------------------------------------------------------------

static GALGAS_string onceFunction_waitForGuardChangeFunctionName (Compiler *
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("guard.wait.for.change") ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_waitForGuardChangeFunctionName = false ;
static GALGAS_string gOnceFunctionResult_waitForGuardChangeFunctionName ;

//--------------------------------------------------------------------------------------------------

GALGAS_string function_waitForGuardChangeFunctionName (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_waitForGuardChangeFunctionName) {
    gOnceFunctionResult_waitForGuardChangeFunctionName = onceFunction_waitForGuardChangeFunctionName (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_waitForGuardChangeFunctionName = true ;
  }
  return gOnceFunctionResult_waitForGuardChangeFunctionName ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_waitForGuardChangeFunctionName (void) {
  gOnceFunctionResult_waitForGuardChangeFunctionName.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_waitForGuardChangeFunctionName (nullptr,
                                                                          releaseOnceFunctionResult_waitForGuardChangeFunctionName) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_waitForGuardChangeFunctionName [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_waitForGuardChangeFunctionName (Compiler * inCompiler,
                                                                               const cObjectArray & /* inEffectiveParameterArray */,
                                                                               const GALGAS_location & /* inErrorLocation */
                                                                               COMMA_LOCATION_ARGS) {
  return function_waitForGuardChangeFunctionName (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_waitForGuardChangeFunctionName ("waitForGuardChangeFunctionName",
                                                                                functionWithGenericHeader_waitForGuardChangeFunctionName,
                                                                                & kTypeDescriptor_GALGAS_string,
                                                                                0,
                                                                                functionArgs_waitForGuardChangeFunctionName) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'llvmNameForLocalVariable'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string function_llvmNameForLocalVariable (const GALGAS_string & constinArgument_inName,
                                                 Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("%").add_operation (GALGAS_string ("var.").add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 220)).getter_assemblerRepresentation (SOURCE_FILE ("generated-code-prefixes.galgas", 220)), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 220)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_llvmNameForLocalVariable [2] = {
  & kTypeDescriptor_GALGAS_string,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_llvmNameForLocalVariable (Compiler * inCompiler,
                                                                         const cObjectArray & inEffectiveParameterArray,
                                                                         const GALGAS_location & /* inErrorLocation */
                                                                         COMMA_LOCATION_ARGS) {
  const GALGAS_string operand0 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  return function_llvmNameForLocalVariable (operand0,
                                            inCompiler
                                            COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_llvmNameForLocalVariable ("llvmNameForLocalVariable",
                                                                          functionWithGenericHeader_llvmNameForLocalVariable,
                                                                          & kTypeDescriptor_GALGAS_string,
                                                                          1,
                                                                          functionArgs_llvmNameForLocalVariable) ;

//--------------------------------------------------------------------------------------------------
//
//Once function 'llvmNameForSelf'
//
//--------------------------------------------------------------------------------------------------

static GALGAS_string onceFunction_llvmNameForSelf (Compiler *
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("%self") ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_llvmNameForSelf = false ;
static GALGAS_string gOnceFunctionResult_llvmNameForSelf ;

//--------------------------------------------------------------------------------------------------

GALGAS_string function_llvmNameForSelf (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_llvmNameForSelf) {
    gOnceFunctionResult_llvmNameForSelf = onceFunction_llvmNameForSelf (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_llvmNameForSelf = true ;
  }
  return gOnceFunctionResult_llvmNameForSelf ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_llvmNameForSelf (void) {
  gOnceFunctionResult_llvmNameForSelf.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_llvmNameForSelf (nullptr,
                                                           releaseOnceFunctionResult_llvmNameForSelf) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_llvmNameForSelf [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_llvmNameForSelf (Compiler * inCompiler,
                                                                const cObjectArray & /* inEffectiveParameterArray */,
                                                                const GALGAS_location & /* inErrorLocation */
                                                                COMMA_LOCATION_ARGS) {
  return function_llvmNameForSelf (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_llvmNameForSelf ("llvmNameForSelf",
                                                                 functionWithGenericHeader_llvmNameForSelf,
                                                                 & kTypeDescriptor_GALGAS_string,
                                                                 0,
                                                                 functionArgs_llvmNameForSelf) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'llvmNameForGlobalVariable'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string function_llvmNameForGlobalVariable (const GALGAS_string & constinArgument_inName,
                                                  Compiler * inCompiler
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("@gvar.").add_operation (constinArgument_inName.getter_assemblerRepresentation (SOURCE_FILE ("generated-code-prefixes.galgas", 232)), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 232)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_llvmNameForGlobalVariable [2] = {
  & kTypeDescriptor_GALGAS_string,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_llvmNameForGlobalVariable (Compiler * inCompiler,
                                                                          const cObjectArray & inEffectiveParameterArray,
                                                                          const GALGAS_location & /* inErrorLocation */
                                                                          COMMA_LOCATION_ARGS) {
  const GALGAS_string operand0 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  return function_llvmNameForGlobalVariable (operand0,
                                             inCompiler
                                             COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_llvmNameForGlobalVariable ("llvmNameForGlobalVariable",
                                                                           functionWithGenericHeader_llvmNameForGlobalVariable,
                                                                           & kTypeDescriptor_GALGAS_string,
                                                                           1,
                                                                           functionArgs_llvmNameForGlobalVariable) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'llvmNameForGlobalSyncInstance'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string function_llvmNameForGlobalSyncInstance (const GALGAS_string & constinArgument_inName,
                                                      Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("@gsync.").add_operation (constinArgument_inName.getter_assemblerRepresentation (SOURCE_FILE ("generated-code-prefixes.galgas", 238)), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 238)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_llvmNameForGlobalSyncInstance [2] = {
  & kTypeDescriptor_GALGAS_string,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_llvmNameForGlobalSyncInstance (Compiler * inCompiler,
                                                                              const cObjectArray & inEffectiveParameterArray,
                                                                              const GALGAS_location & /* inErrorLocation */
                                                                              COMMA_LOCATION_ARGS) {
  const GALGAS_string operand0 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  return function_llvmNameForGlobalSyncInstance (operand0,
                                                 inCompiler
                                                 COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_llvmNameForGlobalSyncInstance ("llvmNameForGlobalSyncInstance",
                                                                               functionWithGenericHeader_llvmNameForGlobalSyncInstance,
                                                                               & kTypeDescriptor_GALGAS_string,
                                                                               1,
                                                                               functionArgs_llvmNameForGlobalSyncInstance) ;

//--------------------------------------------------------------------------------------------------
//
//Once function 'instantiableAttribute'
//
//--------------------------------------------------------------------------------------------------

static GALGAS_string onceFunction_instantiableAttribute (Compiler *
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("instantiable") ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_instantiableAttribute = false ;
static GALGAS_string gOnceFunctionResult_instantiableAttribute ;

//--------------------------------------------------------------------------------------------------

GALGAS_string function_instantiableAttribute (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_instantiableAttribute) {
    gOnceFunctionResult_instantiableAttribute = onceFunction_instantiableAttribute (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_instantiableAttribute = true ;
  }
  return gOnceFunctionResult_instantiableAttribute ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_instantiableAttribute (void) {
  gOnceFunctionResult_instantiableAttribute.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_instantiableAttribute (nullptr,
                                                                 releaseOnceFunctionResult_instantiableAttribute) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_instantiableAttribute [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_instantiableAttribute (Compiler * inCompiler,
                                                                      const cObjectArray & /* inEffectiveParameterArray */,
                                                                      const GALGAS_location & /* inErrorLocation */
                                                                      COMMA_LOCATION_ARGS) {
  return function_instantiableAttribute (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_instantiableAttribute ("instantiableAttribute",
                                                                       functionWithGenericHeader_instantiableAttribute,
                                                                       & kTypeDescriptor_GALGAS_string,
                                                                       0,
                                                                       functionArgs_instantiableAttribute) ;

//--------------------------------------------------------------------------------------------------
//
//Once function 'copyableAttribute'
//
//--------------------------------------------------------------------------------------------------

static GALGAS_string onceFunction_copyableAttribute (Compiler *
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("copyable") ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_copyableAttribute = false ;
static GALGAS_string gOnceFunctionResult_copyableAttribute ;

//--------------------------------------------------------------------------------------------------

GALGAS_string function_copyableAttribute (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_copyableAttribute) {
    gOnceFunctionResult_copyableAttribute = onceFunction_copyableAttribute (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_copyableAttribute = true ;
  }
  return gOnceFunctionResult_copyableAttribute ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_copyableAttribute (void) {
  gOnceFunctionResult_copyableAttribute.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_copyableAttribute (nullptr,
                                                             releaseOnceFunctionResult_copyableAttribute) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_copyableAttribute [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_copyableAttribute (Compiler * inCompiler,
                                                                  const cObjectArray & /* inEffectiveParameterArray */,
                                                                  const GALGAS_location & /* inErrorLocation */
                                                                  COMMA_LOCATION_ARGS) {
  return function_copyableAttribute (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_copyableAttribute ("copyableAttribute",
                                                                   functionWithGenericHeader_copyableAttribute,
                                                                   & kTypeDescriptor_GALGAS_string,
                                                                   0,
                                                                   functionArgs_copyableAttribute) ;

//--------------------------------------------------------------------------------------------------
//
//Once function 'mutatingAttribute'
//
//--------------------------------------------------------------------------------------------------

static GALGAS_string onceFunction_mutatingAttribute (Compiler *
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("mutating") ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_mutatingAttribute = false ;
static GALGAS_string gOnceFunctionResult_mutatingAttribute ;

//--------------------------------------------------------------------------------------------------

GALGAS_string function_mutatingAttribute (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_mutatingAttribute) {
    gOnceFunctionResult_mutatingAttribute = onceFunction_mutatingAttribute (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_mutatingAttribute = true ;
  }
  return gOnceFunctionResult_mutatingAttribute ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_mutatingAttribute (void) {
  gOnceFunctionResult_mutatingAttribute.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_mutatingAttribute (nullptr,
                                                             releaseOnceFunctionResult_mutatingAttribute) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_mutatingAttribute [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_mutatingAttribute (Compiler * inCompiler,
                                                                  const cObjectArray & /* inEffectiveParameterArray */,
                                                                  const GALGAS_location & /* inErrorLocation */
                                                                  COMMA_LOCATION_ARGS) {
  return function_mutatingAttribute (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_mutatingAttribute ("mutatingAttribute",
                                                                   functionWithGenericHeader_mutatingAttribute,
                                                                   & kTypeDescriptor_GALGAS_string,
                                                                   0,
                                                                   functionArgs_mutatingAttribute) ;

//--------------------------------------------------------------------------------------------------
//
//Once function 'userAttributeForRegister'
//
//--------------------------------------------------------------------------------------------------

static GALGAS_string onceFunction_userAttributeForRegister (Compiler *
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("user") ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_userAttributeForRegister = false ;
static GALGAS_string gOnceFunctionResult_userAttributeForRegister ;

//--------------------------------------------------------------------------------------------------

GALGAS_string function_userAttributeForRegister (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_userAttributeForRegister) {
    gOnceFunctionResult_userAttributeForRegister = onceFunction_userAttributeForRegister (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_userAttributeForRegister = true ;
  }
  return gOnceFunctionResult_userAttributeForRegister ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_userAttributeForRegister (void) {
  gOnceFunctionResult_userAttributeForRegister.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_userAttributeForRegister (nullptr,
                                                                    releaseOnceFunctionResult_userAttributeForRegister) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_userAttributeForRegister [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_userAttributeForRegister (Compiler * inCompiler,
                                                                         const cObjectArray & /* inEffectiveParameterArray */,
                                                                         const GALGAS_location & /* inErrorLocation */
                                                                         COMMA_LOCATION_ARGS) {
  return function_userAttributeForRegister (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_userAttributeForRegister ("userAttributeForRegister",
                                                                          functionWithGenericHeader_userAttributeForRegister,
                                                                          & kTypeDescriptor_GALGAS_string,
                                                                          0,
                                                                          functionArgs_userAttributeForRegister) ;

//--------------------------------------------------------------------------------------------------
//
//Once function 'noUnusedWarningAttribute'
//
//--------------------------------------------------------------------------------------------------

static GALGAS_string onceFunction_noUnusedWarningAttribute (Compiler *
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("noUnusedWarning") ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_noUnusedWarningAttribute = false ;
static GALGAS_string gOnceFunctionResult_noUnusedWarningAttribute ;

//--------------------------------------------------------------------------------------------------

GALGAS_string function_noUnusedWarningAttribute (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_noUnusedWarningAttribute) {
    gOnceFunctionResult_noUnusedWarningAttribute = onceFunction_noUnusedWarningAttribute (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_noUnusedWarningAttribute = true ;
  }
  return gOnceFunctionResult_noUnusedWarningAttribute ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_noUnusedWarningAttribute (void) {
  gOnceFunctionResult_noUnusedWarningAttribute.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_noUnusedWarningAttribute (nullptr,
                                                                    releaseOnceFunctionResult_noUnusedWarningAttribute) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_noUnusedWarningAttribute [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_noUnusedWarningAttribute (Compiler * inCompiler,
                                                                         const cObjectArray & /* inEffectiveParameterArray */,
                                                                         const GALGAS_location & /* inErrorLocation */
                                                                         COMMA_LOCATION_ARGS) {
  return function_noUnusedWarningAttribute (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_noUnusedWarningAttribute ("noUnusedWarningAttribute",
                                                                          functionWithGenericHeader_noUnusedWarningAttribute,
                                                                          & kTypeDescriptor_GALGAS_string,
                                                                          0,
                                                                          functionArgs_noUnusedWarningAttribute) ;

//--------------------------------------------------------------------------------------------------
//
//Once function 'exportedAttribute'
//
//--------------------------------------------------------------------------------------------------

static GALGAS_string onceFunction_exportedAttribute (Compiler *
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("exported") ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_exportedAttribute = false ;
static GALGAS_string gOnceFunctionResult_exportedAttribute ;

//--------------------------------------------------------------------------------------------------

GALGAS_string function_exportedAttribute (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_exportedAttribute) {
    gOnceFunctionResult_exportedAttribute = onceFunction_exportedAttribute (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_exportedAttribute = true ;
  }
  return gOnceFunctionResult_exportedAttribute ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_exportedAttribute (void) {
  gOnceFunctionResult_exportedAttribute.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_exportedAttribute (nullptr,
                                                             releaseOnceFunctionResult_exportedAttribute) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_exportedAttribute [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_exportedAttribute (Compiler * inCompiler,
                                                                  const cObjectArray & /* inEffectiveParameterArray */,
                                                                  const GALGAS_location & /* inErrorLocation */
                                                                  COMMA_LOCATION_ARGS) {
  return function_exportedAttribute (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_exportedAttribute ("exportedAttribute",
                                                                   functionWithGenericHeader_exportedAttribute,
                                                                   & kTypeDescriptor_GALGAS_string,
                                                                   0,
                                                                   functionArgs_exportedAttribute) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'stackNameForTask'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string function_stackNameForTask (const GALGAS_string & constinArgument_inTaskName,
                                         Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("@").add_operation (GALGAS_string ("task.stack.").add_operation (constinArgument_inTaskName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 284)).getter_assemblerRepresentation (SOURCE_FILE ("generated-code-prefixes.galgas", 284)), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 284)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_stackNameForTask [2] = {
  & kTypeDescriptor_GALGAS_string,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_stackNameForTask (Compiler * inCompiler,
                                                                 const cObjectArray & inEffectiveParameterArray,
                                                                 const GALGAS_location & /* inErrorLocation */
                                                                 COMMA_LOCATION_ARGS) {
  const GALGAS_string operand0 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  return function_stackNameForTask (operand0,
                                    inCompiler
                                    COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_stackNameForTask ("stackNameForTask",
                                                                  functionWithGenericHeader_stackNameForTask,
                                                                  & kTypeDescriptor_GALGAS_string,
                                                                  1,
                                                                  functionArgs_stackNameForTask) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'setupNameForTaskType'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string function_setupNameForTaskType (const GALGAS_string & constinArgument_inTaskTypeName,
                                             Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("@").add_operation (GALGAS_string ("task.setup.").add_operation (constinArgument_inTaskTypeName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 290)).getter_assemblerRepresentation (SOURCE_FILE ("generated-code-prefixes.galgas", 290)), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 290)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_setupNameForTaskType [2] = {
  & kTypeDescriptor_GALGAS_string,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_setupNameForTaskType (Compiler * inCompiler,
                                                                     const cObjectArray & inEffectiveParameterArray,
                                                                     const GALGAS_location & /* inErrorLocation */
                                                                     COMMA_LOCATION_ARGS) {
  const GALGAS_string operand0 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  return function_setupNameForTaskType (operand0,
                                        inCompiler
                                        COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_setupNameForTaskType ("setupNameForTaskType",
                                                                      functionWithGenericHeader_setupNameForTaskType,
                                                                      & kTypeDescriptor_GALGAS_string,
                                                                      1,
                                                                      functionArgs_setupNameForTaskType) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'activateNameForTaskType'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string function_activateNameForTaskType (const GALGAS_string & constinArgument_inTaskTypeName,
                                                Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("task.activate.").add_operation (constinArgument_inTaskTypeName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 296)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_activateNameForTaskType [2] = {
  & kTypeDescriptor_GALGAS_string,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_activateNameForTaskType (Compiler * inCompiler,
                                                                        const cObjectArray & inEffectiveParameterArray,
                                                                        const GALGAS_location & /* inErrorLocation */
                                                                        COMMA_LOCATION_ARGS) {
  const GALGAS_string operand0 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  return function_activateNameForTaskType (operand0,
                                           inCompiler
                                           COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_activateNameForTaskType ("activateNameForTaskType",
                                                                         functionWithGenericHeader_activateNameForTaskType,
                                                                         & kTypeDescriptor_GALGAS_string,
                                                                         1,
                                                                         functionArgs_activateNameForTaskType) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'deactivateNameForTaskType'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string function_deactivateNameForTaskType (const GALGAS_string & constinArgument_inTaskTypeName,
                                                  Compiler * inCompiler
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("@").add_operation (GALGAS_string ("task.deactivate.").add_operation (constinArgument_inTaskTypeName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 302)).getter_assemblerRepresentation (SOURCE_FILE ("generated-code-prefixes.galgas", 302)), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 302)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_deactivateNameForTaskType [2] = {
  & kTypeDescriptor_GALGAS_string,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_deactivateNameForTaskType (Compiler * inCompiler,
                                                                          const cObjectArray & inEffectiveParameterArray,
                                                                          const GALGAS_location & /* inErrorLocation */
                                                                          COMMA_LOCATION_ARGS) {
  const GALGAS_string operand0 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  return function_deactivateNameForTaskType (operand0,
                                             inCompiler
                                             COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_deactivateNameForTaskType ("deactivateNameForTaskType",
                                                                           functionWithGenericHeader_deactivateNameForTaskType,
                                                                           & kTypeDescriptor_GALGAS_string,
                                                                           1,
                                                                           functionArgs_deactivateNameForTaskType) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'stackAddressForTask'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string function_stackAddressForTask (const GALGAS_string & constinArgument_inTaskName,
                                            Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("%").add_operation (GALGAS_string ("task.stack.address.").add_operation (constinArgument_inTaskName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 308)).getter_assemblerRepresentation (SOURCE_FILE ("generated-code-prefixes.galgas", 308)), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 308)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_stackAddressForTask [2] = {
  & kTypeDescriptor_GALGAS_string,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_stackAddressForTask (Compiler * inCompiler,
                                                                    const cObjectArray & inEffectiveParameterArray,
                                                                    const GALGAS_location & /* inErrorLocation */
                                                                    COMMA_LOCATION_ARGS) {
  const GALGAS_string operand0 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  return function_stackAddressForTask (operand0,
                                       inCompiler
                                       COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_stackAddressForTask ("stackAddressForTask",
                                                                     functionWithGenericHeader_stackAddressForTask,
                                                                     & kTypeDescriptor_GALGAS_string,
                                                                     1,
                                                                     functionArgs_stackAddressForTask) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'mainRoutineNameForTask'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string function_mainRoutineNameForTask (const GALGAS_string & constinArgument_inTaskName,
                                               Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("@").add_operation (GALGAS_string ("task.main.").add_operation (constinArgument_inTaskName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 314)).getter_assemblerRepresentation (SOURCE_FILE ("generated-code-prefixes.galgas", 314)), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 314)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_mainRoutineNameForTask [2] = {
  & kTypeDescriptor_GALGAS_string,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_mainRoutineNameForTask (Compiler * inCompiler,
                                                                       const cObjectArray & inEffectiveParameterArray,
                                                                       const GALGAS_location & /* inErrorLocation */
                                                                       COMMA_LOCATION_ARGS) {
  const GALGAS_string operand0 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  return function_mainRoutineNameForTask (operand0,
                                          inCompiler
                                          COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_mainRoutineNameForTask ("mainRoutineNameForTask",
                                                                        functionWithGenericHeader_mainRoutineNameForTask,
                                                                        & kTypeDescriptor_GALGAS_string,
                                                                        1,
                                                                        functionArgs_mainRoutineNameForTask) ;

//--------------------------------------------------------------------------------------------------
//
//Once function 'llvmNameForTaskLoopFunction'
//
//--------------------------------------------------------------------------------------------------

static GALGAS_string onceFunction_llvmNameForTaskLoopFunction (Compiler *
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("task.loop") ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_llvmNameForTaskLoopFunction = false ;
static GALGAS_string gOnceFunctionResult_llvmNameForTaskLoopFunction ;

//--------------------------------------------------------------------------------------------------

GALGAS_string function_llvmNameForTaskLoopFunction (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_llvmNameForTaskLoopFunction) {
    gOnceFunctionResult_llvmNameForTaskLoopFunction = onceFunction_llvmNameForTaskLoopFunction (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_llvmNameForTaskLoopFunction = true ;
  }
  return gOnceFunctionResult_llvmNameForTaskLoopFunction ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_llvmNameForTaskLoopFunction (void) {
  gOnceFunctionResult_llvmNameForTaskLoopFunction.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_llvmNameForTaskLoopFunction (nullptr,
                                                                       releaseOnceFunctionResult_llvmNameForTaskLoopFunction) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_llvmNameForTaskLoopFunction [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_llvmNameForTaskLoopFunction (Compiler * inCompiler,
                                                                            const cObjectArray & /* inEffectiveParameterArray */,
                                                                            const GALGAS_location & /* inErrorLocation */
                                                                            COMMA_LOCATION_ARGS) {
  return function_llvmNameForTaskLoopFunction (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_llvmNameForTaskLoopFunction ("llvmNameForTaskLoopFunction",
                                                                             functionWithGenericHeader_llvmNameForTaskLoopFunction,
                                                                             & kTypeDescriptor_GALGAS_string,
                                                                             0,
                                                                             functionArgs_llvmNameForTaskLoopFunction) ;

//--------------------------------------------------------------------------------------------------
//
//Once function 'llvmNameForTaskWaitsForActivation'
//
//--------------------------------------------------------------------------------------------------

static GALGAS_string onceFunction_llvmNameForTaskWaitsForActivation (Compiler *
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("xtr.wait.for.activation") ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_llvmNameForTaskWaitsForActivation = false ;
static GALGAS_string gOnceFunctionResult_llvmNameForTaskWaitsForActivation ;

//--------------------------------------------------------------------------------------------------

GALGAS_string function_llvmNameForTaskWaitsForActivation (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_llvmNameForTaskWaitsForActivation) {
    gOnceFunctionResult_llvmNameForTaskWaitsForActivation = onceFunction_llvmNameForTaskWaitsForActivation (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_llvmNameForTaskWaitsForActivation = true ;
  }
  return gOnceFunctionResult_llvmNameForTaskWaitsForActivation ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_llvmNameForTaskWaitsForActivation (void) {
  gOnceFunctionResult_llvmNameForTaskWaitsForActivation.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_llvmNameForTaskWaitsForActivation (nullptr,
                                                                             releaseOnceFunctionResult_llvmNameForTaskWaitsForActivation) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_llvmNameForTaskWaitsForActivation [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_llvmNameForTaskWaitsForActivation (Compiler * inCompiler,
                                                                                  const cObjectArray & /* inEffectiveParameterArray */,
                                                                                  const GALGAS_location & /* inErrorLocation */
                                                                                  COMMA_LOCATION_ARGS) {
  return function_llvmNameForTaskWaitsForActivation (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_llvmNameForTaskWaitsForActivation ("llvmNameForTaskWaitsForActivation",
                                                                                   functionWithGenericHeader_llvmNameForTaskWaitsForActivation,
                                                                                   & kTypeDescriptor_GALGAS_string,
                                                                                   0,
                                                                                   functionArgs_llvmNameForTaskWaitsForActivation) ;

//--------------------------------------------------------------------------------------------------
//
//Once function 'llvmNameForActivateTask'
//
//--------------------------------------------------------------------------------------------------

static GALGAS_string onceFunction_llvmNameForActivateTask (Compiler *
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("xtr.activate.task") ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_llvmNameForActivateTask = false ;
static GALGAS_string gOnceFunctionResult_llvmNameForActivateTask ;

//--------------------------------------------------------------------------------------------------

GALGAS_string function_llvmNameForActivateTask (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_llvmNameForActivateTask) {
    gOnceFunctionResult_llvmNameForActivateTask = onceFunction_llvmNameForActivateTask (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_llvmNameForActivateTask = true ;
  }
  return gOnceFunctionResult_llvmNameForActivateTask ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_llvmNameForActivateTask (void) {
  gOnceFunctionResult_llvmNameForActivateTask.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_llvmNameForActivateTask (nullptr,
                                                                   releaseOnceFunctionResult_llvmNameForActivateTask) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_llvmNameForActivateTask [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_llvmNameForActivateTask (Compiler * inCompiler,
                                                                        const cObjectArray & /* inEffectiveParameterArray */,
                                                                        const GALGAS_location & /* inErrorLocation */
                                                                        COMMA_LOCATION_ARGS) {
  return function_llvmNameForActivateTask (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_llvmNameForActivateTask ("llvmNameForActivateTask",
                                                                         functionWithGenericHeader_llvmNameForActivateTask,
                                                                         & kTypeDescriptor_GALGAS_string,
                                                                         0,
                                                                         functionArgs_llvmNameForActivateTask) ;

//--------------------------------------------------------------------------------------------------
//
//Once function 'memoryAllocSectionName'
//
//--------------------------------------------------------------------------------------------------

static GALGAS_string onceFunction_memoryAllocSectionName (Compiler *
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("heap.memory.alloc") ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_memoryAllocSectionName = false ;
static GALGAS_string gOnceFunctionResult_memoryAllocSectionName ;

//--------------------------------------------------------------------------------------------------

GALGAS_string function_memoryAllocSectionName (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_memoryAllocSectionName) {
    gOnceFunctionResult_memoryAllocSectionName = onceFunction_memoryAllocSectionName (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_memoryAllocSectionName = true ;
  }
  return gOnceFunctionResult_memoryAllocSectionName ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_memoryAllocSectionName (void) {
  gOnceFunctionResult_memoryAllocSectionName.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_memoryAllocSectionName (nullptr,
                                                                  releaseOnceFunctionResult_memoryAllocSectionName) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_memoryAllocSectionName [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_memoryAllocSectionName (Compiler * inCompiler,
                                                                       const cObjectArray & /* inEffectiveParameterArray */,
                                                                       const GALGAS_location & /* inErrorLocation */
                                                                       COMMA_LOCATION_ARGS) {
  return function_memoryAllocSectionName (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_memoryAllocSectionName ("memoryAllocSectionName",
                                                                        functionWithGenericHeader_memoryAllocSectionName,
                                                                        & kTypeDescriptor_GALGAS_string,
                                                                        0,
                                                                        functionArgs_memoryAllocSectionName) ;

//--------------------------------------------------------------------------------------------------
//
//Once function 'memoryFreeSectionName'
//
//--------------------------------------------------------------------------------------------------

static GALGAS_string onceFunction_memoryFreeSectionName (Compiler *
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("heap.memory.free") ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_memoryFreeSectionName = false ;
static GALGAS_string gOnceFunctionResult_memoryFreeSectionName ;

//--------------------------------------------------------------------------------------------------

GALGAS_string function_memoryFreeSectionName (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_memoryFreeSectionName) {
    gOnceFunctionResult_memoryFreeSectionName = onceFunction_memoryFreeSectionName (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_memoryFreeSectionName = true ;
  }
  return gOnceFunctionResult_memoryFreeSectionName ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_memoryFreeSectionName (void) {
  gOnceFunctionResult_memoryFreeSectionName.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_memoryFreeSectionName (nullptr,
                                                                 releaseOnceFunctionResult_memoryFreeSectionName) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_memoryFreeSectionName [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_memoryFreeSectionName (Compiler * inCompiler,
                                                                      const cObjectArray & /* inEffectiveParameterArray */,
                                                                      const GALGAS_location & /* inErrorLocation */
                                                                      COMMA_LOCATION_ARGS) {
  return function_memoryFreeSectionName (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_memoryFreeSectionName ("memoryFreeSectionName",
                                                                       functionWithGenericHeader_memoryFreeSectionName,
                                                                       & kTypeDescriptor_GALGAS_string,
                                                                       0,
                                                                       functionArgs_memoryFreeSectionName) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'registerGroupAddressArrayLLVMname'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string function_registerGroupAddressArrayLLVMname (const GALGAS_string & constinArgument_inGroupName,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("@register.group.array.").add_operation (constinArgument_inGroupName.getter_assemblerRepresentation (SOURCE_FILE ("generated-code-prefixes.galgas", 353)), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 353)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_registerGroupAddressArrayLLVMname [2] = {
  & kTypeDescriptor_GALGAS_string,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_registerGroupAddressArrayLLVMname (Compiler * inCompiler,
                                                                                  const cObjectArray & inEffectiveParameterArray,
                                                                                  const GALGAS_location & /* inErrorLocation */
                                                                                  COMMA_LOCATION_ARGS) {
  const GALGAS_string operand0 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  return function_registerGroupAddressArrayLLVMname (operand0,
                                                     inCompiler
                                                     COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_registerGroupAddressArrayLLVMname ("registerGroupAddressArrayLLVMname",
                                                                                   functionWithGenericHeader_registerGroupAddressArrayLLVMname,
                                                                                   & kTypeDescriptor_GALGAS_string,
                                                                                   1,
                                                                                   functionArgs_registerGroupAddressArrayLLVMname) ;

//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@nopIR llvmInstructionCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_nopIR::method_llvmInstructionCode (GALGAS_string & ioArgument_ioLLVMcode,
                                             const GALGAS_generationContext constinArgument_inGenerationContext,
                                             GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                             Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (constinArgument_inGenerationContext.readProperty_mNopInstructionInLLVM (), inCompiler COMMA_SOURCE_FILE ("intermediate-nop.galgas", 18)).add_operation (GALGAS_string (" ; NOP instruction in LLVM\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-nop.galgas", 18)), inCompiler  COMMA_SOURCE_FILE ("intermediate-nop.galgas", 18)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@freeStringIR llvmInstructionCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_freeStringIR::method_llvmInstructionCode (GALGAS_string & ioArgument_ioLLVMcode,
                                                    const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                    GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                    Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_freeStringIR temp_0 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (temp_0.readProperty_mString (), inCompiler COMMA_SOURCE_FILE ("instruction-free-string.galgas", 21)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-free-string.galgas", 21)), inCompiler  COMMA_SOURCE_FILE ("instruction-free-string.galgas", 21)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@freeStringIR enterAccessibleEntities'
//
//--------------------------------------------------------------------------------------------------

void cPtr_freeStringIR::method_enterAccessibleEntities (GALGAS_stringset & ioArgument_ioInvokedRoutineSet,
                                                        GALGAS_uint & /* ioArgument_ioMaxBranchOfOnInstructions */,
                                                        Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_freeStringIR temp_0 = this ;
  ioArgument_ioInvokedRoutineSet.plusAssign_operation(temp_0.readProperty_mInvokedFunctionSet (), inCompiler  COMMA_SOURCE_FILE ("instruction-free-string.galgas", 30)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@extendIR llvmInstructionCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_extendIR::method_llvmInstructionCode (GALGAS_string & ioArgument_ioLLVMcode,
                                                const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_extendIR temp_0 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (temp_0.readProperty_mResult (), inCompiler COMMA_SOURCE_FILE ("intermediate-extend.galgas", 23)), inCompiler COMMA_SOURCE_FILE ("intermediate-extend.galgas", 23)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("intermediate-extend.galgas", 23)), inCompiler  COMMA_SOURCE_FILE ("intermediate-extend.galgas", 23)) ;
  const GALGAS_extendIR temp_1 = this ;
  GALGAS_typeKind var_kind_729 = extensionGetter_type (temp_1.readProperty_mSource (), inCompiler COMMA_SOURCE_FILE ("intermediate-extend.galgas", 24)).readProperty_kind () ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = var_kind_729.getter_isLlvmType (SOURCE_FILE ("intermediate-extend.galgas", 25)).boolEnum () ;
    if (kBoolTrue == test_2) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("zext"), inCompiler  COMMA_SOURCE_FILE ("intermediate-extend.galgas", 26)) ;
    }
  }
  if (kBoolFalse == test_2) {
    GALGAS_bool var_sourceIsUnsigned_857 ;
    GALGAS_bigint joker_839_2 ; // Joker input parameter
    GALGAS_bigint joker_839_1 ; // Joker input parameter
    GALGAS_uint joker_874_1 ; // Joker input parameter
    var_kind_729.method_integer (joker_839_2, joker_839_1, var_sourceIsUnsigned_857, joker_874_1, inCompiler COMMA_SOURCE_FILE ("intermediate-extend.galgas", 28)) ;
    GALGAS_string temp_3 ;
    const enumGalgasBool test_4 = var_sourceIsUnsigned_857.boolEnum () ;
    if (kBoolTrue == test_4) {
      temp_3 = GALGAS_string ("zext") ;
    }else if (kBoolFalse == test_4) {
      temp_3 = GALGAS_string ("sext") ;
    }
    ioArgument_ioLLVMcode.plusAssign_operation(temp_3, inCompiler  COMMA_SOURCE_FILE ("intermediate-extend.galgas", 29)) ;
  }
  const GALGAS_extendIR temp_5 = this ;
  const GALGAS_extendIR temp_6 = this ;
  const GALGAS_extendIR temp_7 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ").add_operation (extensionGetter_llvmTypeName (temp_5.readProperty_mSource (), inCompiler COMMA_SOURCE_FILE ("intermediate-extend.galgas", 31)), inCompiler COMMA_SOURCE_FILE ("intermediate-extend.galgas", 31)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-extend.galgas", 31)).add_operation (extensionGetter_llvmName (temp_6.readProperty_mSource (), inCompiler COMMA_SOURCE_FILE ("intermediate-extend.galgas", 31)), inCompiler COMMA_SOURCE_FILE ("intermediate-extend.galgas", 31)).add_operation (GALGAS_string (" to "), inCompiler COMMA_SOURCE_FILE ("intermediate-extend.galgas", 31)).add_operation (extensionGetter_llvmTypeName (temp_7.readProperty_mResult (), inCompiler COMMA_SOURCE_FILE ("intermediate-extend.galgas", 31)), inCompiler COMMA_SOURCE_FILE ("intermediate-extend.galgas", 31)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-extend.galgas", 31)), inCompiler  COMMA_SOURCE_FILE ("intermediate-extend.galgas", 31)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@truncIR llvmInstructionCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_truncIR::method_llvmInstructionCode (GALGAS_string & ioArgument_ioLLVMcode,
                                               const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                               GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                               Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_truncIR temp_0 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (temp_0.readProperty_mResult (), inCompiler COMMA_SOURCE_FILE ("intermediate-trunc.galgas", 32)), inCompiler COMMA_SOURCE_FILE ("intermediate-trunc.galgas", 32)).add_operation (GALGAS_string (" = trunc "), inCompiler COMMA_SOURCE_FILE ("intermediate-trunc.galgas", 32)), inCompiler  COMMA_SOURCE_FILE ("intermediate-trunc.galgas", 32)) ;
  const GALGAS_truncIR temp_1 = this ;
  const GALGAS_truncIR temp_2 = this ;
  const GALGAS_truncIR temp_3 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (temp_1.readProperty_mSource (), inCompiler COMMA_SOURCE_FILE ("intermediate-trunc.galgas", 33)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-trunc.galgas", 33)).add_operation (extensionGetter_llvmName (temp_2.readProperty_mSource (), inCompiler COMMA_SOURCE_FILE ("intermediate-trunc.galgas", 33)), inCompiler COMMA_SOURCE_FILE ("intermediate-trunc.galgas", 33)).add_operation (GALGAS_string (" to "), inCompiler COMMA_SOURCE_FILE ("intermediate-trunc.galgas", 33)).add_operation (extensionGetter_llvmTypeName (temp_3.readProperty_mResult (), inCompiler COMMA_SOURCE_FILE ("intermediate-trunc.galgas", 33)), inCompiler COMMA_SOURCE_FILE ("intermediate-trunc.galgas", 33)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-trunc.galgas", 33)), inCompiler  COMMA_SOURCE_FILE ("intermediate-trunc.galgas", 33)) ;
}
