#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-15.h"

//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalStringInExpressionAST addDependenceEdgeForStaticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_literalStringInExpressionAST::method_addDependenceEdgeForStaticExpression (const GGS_lstring constinArgument_inConstantName,
                                                                                     GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioArgument_ioGraph.setter_addEdge (constinArgument_inConstantName, GGS_lstring::init_21__21_ (function_staticStringTypeName (inCompiler COMMA_SOURCE_FILE ("expression-literal-string.galgas", 34)), constinArgument_inConstantName.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("expression-literal-string.galgas", 34)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalStringInExpressionAST noteExpressionTypesInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_literalStringInExpressionAST::method_noteExpressionTypesInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioArgument_ioGraph.setter_noteNode (function_ctIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("expression-literal-string.galgas", 42)).getter_nowhere (SOURCE_FILE ("expression-literal-string.galgas", 42)) COMMA_SOURCE_FILE ("expression-literal-string.galgas", 42)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalStringInExpressionAST analyzeExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_literalStringInExpressionAST::method_analyzeExpression (const GGS_omnibusType /* constinArgument_inSelfType */,
                                                                  const GGS_routineAttributes /* constinArgument_inRoutineAttributes */,
                                                                  const GGS_omnibusType /* constinArgument_inOptionalTargetType */,
                                                                  const GGS_semanticContext /* constinArgument_inContext */,
                                                                  const GGS_mode /* constinArgument_inMode */,
                                                                  GGS_semanticTemporariesStruct & /* ioArgument_ioTemporaryIndex */,
                                                                  GGS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                  GGS_universalValuedObjectMap & /* ioArgument_ioUniversalMap */,
                                                                  GGS_allocaList & /* ioArgument_ioAllocaList */,
                                                                  GGS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                                  GGS_objectIR & outArgument_outResult,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uint var_staticStringIndex_3335 ;
  {
  const GGS_literalStringInExpressionAST temp_0 = this ;
  extensionSetter_findOrAddStaticString (ioArgument_ioStaticEntityMap, temp_0.readProperty_mLiteralString ().readProperty_string (), var_staticStringIndex_3335, inCompiler COMMA_SOURCE_FILE ("expression-literal-string.galgas", 62)) ;
  }
  const GGS_literalStringInExpressionAST temp_1 = this ;
  outArgument_outResult = GGS_objectIR::class_func_literalString (temp_1.readProperty_mLiteralString ().readProperty_string ().getter_utf_38_Length (SOURCE_FILE ("expression-literal-string.galgas", 63)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("expression-literal-string.galgas", 63)), var_staticStringIndex_3335  COMMA_SOURCE_FILE ("expression-literal-string.galgas", 63)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalBooleanInExpressionAST addDependenceEdgeForStaticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_literalBooleanInExpressionAST::method_addDependenceEdgeForStaticExpression (const GGS_lstring constinArgument_inConstantName,
                                                                                      GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioArgument_ioGraph.setter_addEdge (constinArgument_inConstantName, function_ctBoolTypeName (inCompiler COMMA_SOURCE_FILE ("expression-true-false.galgas", 41)).getter_nowhere (SOURCE_FILE ("expression-true-false.galgas", 41)) COMMA_SOURCE_FILE ("expression-true-false.galgas", 41)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalBooleanInExpressionAST noteExpressionTypesInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_literalBooleanInExpressionAST::method_noteExpressionTypesInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & /* ioArgument_ioGraph */,
                                                                                      Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalBooleanInExpressionAST analyzeExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_literalBooleanInExpressionAST::method_analyzeExpression (const GGS_omnibusType /* constinArgument_inSelfType */,
                                                                   const GGS_routineAttributes /* constinArgument_inRoutineAttributes */,
                                                                   const GGS_omnibusType /* constinArgument_inOptionalTargetType */,
                                                                   const GGS_semanticContext /* constinArgument_inContext */,
                                                                   const GGS_mode /* constinArgument_inMode */,
                                                                   GGS_semanticTemporariesStruct & /* ioArgument_ioTemporaryIndex */,
                                                                   GGS_staticEntityMap & /* ioArgument_ioStaticEntityMap */,
                                                                   GGS_universalValuedObjectMap & /* ioArgument_ioUniversalMap */,
                                                                   GGS_allocaList & /* ioArgument_ioAllocaList */,
                                                                   GGS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                                   GGS_objectIR & outArgument_outResult,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_literalBooleanInExpressionAST temp_0 = this ;
  GGS_bigint temp_1 ;
  const GalgasBool test_2 = temp_0.readProperty_mValue ().boolEnum () ;
  if (GalgasBool::boolTrue == test_2) {
    temp_1 = GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-true-false.galgas", 71)) ;
  }else if (GalgasBool::boolFalse == test_2) {
    temp_1 = GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("expression-true-false.galgas", 71)) ;
  }
  outArgument_outResult = GGS_objectIR::class_func_literalInteger (function_compileTimeBoolType (inCompiler COMMA_SOURCE_FILE ("expression-true-false.galgas", 71)), temp_1  COMMA_SOURCE_FILE ("expression-true-false.galgas", 71)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@registerInExpressionAST addDependenceEdgeForStaticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_registerInExpressionAST::method_addDependenceEdgeForStaticExpression (const GGS_lstring constinArgument_inConstantName,
                                                                                GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_registerInExpressionAST temp_0 = this ;
  ioArgument_ioGraph.setter_addEdge (constinArgument_inConstantName, temp_0.readProperty_mControlRegisterLValue ().readProperty_mRegisterGroupName () COMMA_SOURCE_FILE ("expression-control-register.galgas", 44)) ;
  }
  const GGS_registerInExpressionAST temp_1 = this ;
  extensionMethod_addDependenceEdgeForStaticExpression (temp_1.readProperty_mControlRegisterLValue (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-control-register.galgas", 45)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@registerInExpressionAST noteExpressionTypesInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_registerInExpressionAST::method_noteExpressionTypesInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_registerInExpressionAST temp_0 = this ;
  extensionMethod_noteExpressionTypesInPrecedenceGraph (temp_0.readProperty_mControlRegisterLValue (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-control-register.galgas", 53)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@registerInExpressionAST analyzeExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_registerInExpressionAST::method_analyzeExpression (const GGS_omnibusType constinArgument_inSelfType,
                                                             const GGS_routineAttributes constinArgument_inRoutineAttributes,
                                                             const GGS_omnibusType /* constinArgument_inOptionalTargetType */,
                                                             const GGS_semanticContext constinArgument_inContext,
                                                             const GGS_mode constinArgument_inMode,
                                                             GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                             GGS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                             GGS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                             GGS_allocaList & ioArgument_ioAllocaList,
                                                             GGS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                             GGS_objectIR & outArgument_outResult,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_omnibusType var_registerType_4103 ;
  GGS_sliceMap var_sliceMap_4158 ;
  GGS_string var_llvmRegisterAddressName_4200 ;
  const GGS_registerInExpressionAST temp_0 = this ;
  GGS_uint joker_4120 ; // Joker input parameter
  extensionMethod_controlRegisterLValueSemanticAnalysis (temp_0.readProperty_mControlRegisterLValue (), GGS_bool (false), constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_registerType_4103, joker_4120, var_sliceMap_4158, var_llvmRegisterAddressName_4200, inCompiler COMMA_SOURCE_FILE ("expression-control-register.galgas", 73)) ;
  {
  routine_getNewTempValue_3F__26__21_ (var_registerType_4103, ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-control-register.galgas", 90)) ;
  }
  {
  extensionSetter_appendLoadIndirectVolatileRegister (ioArgument_ioInstructionGenerationList, outArgument_outResult, var_llvmRegisterAddressName_4200, inCompiler COMMA_SOURCE_FILE ("expression-control-register.galgas", 91)) ;
  }
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_registerInExpressionAST temp_2 = this ;
    test_1 = GGS_bool (ComparisonKind::notEqual, temp_2.readProperty_mFieldName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      GGS_llvmBinaryOperation var_accessOperator_4583 ;
      GGS_bigint var_accessRightOperand_4617 ;
      GGS_omnibusType var_resultType_4660 ;
      const GGS_registerInExpressionAST temp_3 = this ;
      var_sliceMap_4158.method_searchKey (temp_3.readProperty_mFieldName (), var_accessOperator_4583, var_accessRightOperand_4617, var_resultType_4660, inCompiler COMMA_SOURCE_FILE ("expression-control-register.galgas", 94)) ;
      GGS_objectIR var_resultIR_4731 ;
      {
      routine_getNewTempValue_3F__26__21_ (var_resultType_4660, ioArgument_ioTemporaries, var_resultIR_4731, inCompiler  COMMA_SOURCE_FILE ("expression-control-register.galgas", 100)) ;
      }
      {
      const GGS_registerInExpressionAST temp_4 = this ;
      extensionSetter_appendBinaryOperation (ioArgument_ioInstructionGenerationList, var_resultIR_4731, extensionGetter_type (outArgument_outResult, inCompiler COMMA_SOURCE_FILE ("expression-control-register.galgas", 103)), temp_4.readProperty_mFieldName ().readProperty_location (), outArgument_outResult, var_accessOperator_4583, GGS_objectIR::class_func_literalInteger (function_compileTimeIntegerType (inCompiler COMMA_SOURCE_FILE ("expression-control-register.galgas", 107)), var_accessRightOperand_4617  COMMA_SOURCE_FILE ("expression-control-register.galgas", 107)), inCompiler COMMA_SOURCE_FILE ("expression-control-register.galgas", 101)) ;
      }
      outArgument_outResult = var_resultIR_4731 ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@registerConstantExpressionAST addDependenceEdgeForStaticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_registerConstantExpressionAST::method_addDependenceEdgeForStaticExpression (const GGS_lstring /* constinArgument_inConstantName */,
                                                                                      GGS_semanticTypePrecedenceGraph & /* ioArgument_ioGraph */,
                                                                                      Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@registerConstantExpressionAST noteExpressionTypesInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_registerConstantExpressionAST::method_noteExpressionTypesInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_registerConstantExpressionAST temp_0 = this ;
  UpEnumerator_registerIntegerFieldListAST enumerator_2862 (temp_0.readProperty_mFieldValues ()) ;
  while (enumerator_2862.hasCurrentObject ()) {
    callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((cPtr_expressionAST *) enumerator_2862.current_mExpression (HERE).ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 65)) ;
    enumerator_2862.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@registerConstantExpressionAST analyzeExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_registerConstantExpressionAST::method_analyzeExpression (const GGS_omnibusType constinArgument_inSelfType,
                                                                   const GGS_routineAttributes constinArgument_inRoutineAttributes,
                                                                   const GGS_omnibusType /* constinArgument_inOptionalTargetType */,
                                                                   const GGS_semanticContext constinArgument_inContext,
                                                                   const GGS_mode constinArgument_inMode,
                                                                   GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                   GGS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                   GGS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                   GGS_allocaList & ioArgument_ioAllocaList,
                                                                   GGS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                   GGS_objectIR & outArgument_outResult,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_controlRegisterMap var_controlRegisterMap_4064 ;
  const GGS_registerConstantExpressionAST temp_0 = this ;
  GGS_registerGroupKind joker_4052 ; // Joker input parameter
  constinArgument_inContext.readProperty_mControlRegisterGroupMap ().method_searchKey (temp_0.readProperty_mRegisterGroupName (), joker_4052, var_controlRegisterMap_4064, inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 87)) ;
  GGS_omnibusType var_registerType_4232 ;
  GGS_sliceMap var_registerBitSliceMap_4279 ;
  GGS_controlRegisterFieldMap var_registerFieldMap_4333 ;
  GGS_uint var_registerBitCount_4367 ;
  GGS_uint var_powerOfTwoForArraySize_4400 ;
  GGS_uint var_elementArraySize_4439 ;
  const GGS_registerConstantExpressionAST temp_1 = this ;
  GGS_bool joker_4249_2 ; // Joker input parameter
  GGS_bool joker_4249_1 ; // Joker input parameter
  GGS_bigint joker_4354_2 ; // Joker input parameter
  GGS_controlRegisterFieldList joker_4354_1 ; // Joker input parameter
  var_controlRegisterMap_4064.method_searchKey (temp_1.readProperty_mRegisterName (), var_registerType_4232, joker_4249_2, joker_4249_1, var_registerBitSliceMap_4279, var_registerFieldMap_4333, joker_4354_2, joker_4354_1, var_registerBitCount_4367, var_powerOfTwoForArraySize_4400, var_elementArraySize_4439, inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 93)) ;
  GGS_bigint var_accumulatedFieldStaticValues_4546 = GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 105)) ;
  GGS_operandIRList temp_2 = GGS_operandIRList::init (inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 106)) ;
  GGS_operandIRList var_operandList_4600 = temp_2 ;
  const GGS_registerConstantExpressionAST temp_3 = this ;
  UpEnumerator_registerIntegerFieldListAST enumerator_4646 (temp_3.readProperty_mFieldValues ()) ;
  while (enumerator_4646.hasCurrentObject ()) {
    GalgasBool test_4 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_4) {
      test_4 = GGS_bool (ComparisonKind::equal, enumerator_4646.current_mFieldName (HERE).readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_4) {
        TC_Array <FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (enumerator_4646.current_mFieldName (HERE).readProperty_location (), GGS_string ("anonymous selector not allowed here"), fixItArray5  COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 109)) ;
        var_operandList_4600.drop () ; // Release error dropped variable
      }
    }
    if (GalgasBool::boolFalse == test_4) {
      GGS_uint var_fieldBitIndex_4882 ;
      GGS_uint var_fieldBitCount_4915 ;
      var_registerFieldMap_4333.method_searchKey (enumerator_4646.current_mFieldName (HERE), var_fieldBitIndex_4882, var_fieldBitCount_4915, inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 111)) ;
      GGS_lstring var_inferredTypeName_4947 = GGS_lstring::init_21__21_ (GGS_string ("u").add_operation (var_fieldBitCount_4915.getter_string (SOURCE_FILE ("expression-register-value-from-slices.galgas", 116)), inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 116)), enumerator_4646.current_mFieldName (HERE).readProperty_location (), inCompiler COMMA_HERE) ;
      GGS_omnibusType var_inferredType_5088 ;
      extensionMethod_searchType (constinArgument_inContext.readProperty_mTypeMap (), var_inferredTypeName_4947, var_inferredType_5088, inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 117)) ;
      GGS_objectIR var_expressionResult_5554 ;
      callExtensionMethod_analyzeExpression ((cPtr_expressionAST *) enumerator_4646.current_mExpression (HERE).ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, var_inferredType_5088, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_expressionResult_5554, inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 119)) ;
      {
      extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_expressionResult_5554, inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 132)) ;
      }
      GalgasBool test_6 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_6) {
        test_6 = extensionGetter_type (var_expressionResult_5554, inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 137)).readProperty_kind ().getter_isCompileTimeInteger (SOURCE_FILE ("expression-register-value-from-slices.galgas", 137)).boolEnum () ;
        if (GalgasBool::boolTrue == test_6) {
          GGS_bigint var_value_5870 ;
          GGS_omnibusType joker_5847_1 ; // Joker input parameter
          var_expressionResult_5554.method_extractLiteralInteger (joker_5847_1, var_value_5870, inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 138)) ;
          GalgasBool test_7 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_7) {
            test_7 = GGS_bool (ComparisonKind::lowerThan, var_value_5870.objectCompare (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 139)))).boolEnum () ;
            if (GalgasBool::boolTrue == test_7) {
              TC_Array <FixItDescription> fixItArray8 ;
              inCompiler->emitSemanticError (enumerator_4646.current_mExpressionLocation (HERE), GGS_string ("this integer expression should be positive"), fixItArray8  COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 140)) ;
            }
          }
          if (GalgasBool::boolFalse == test_7) {
            GalgasBool test_9 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_9) {
              test_9 = GGS_bool (ComparisonKind::lowerThan, var_value_5870.objectCompare (GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 141)).left_shift_operation (var_fieldBitCount_4915, inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 141)))).boolEnum () ;
              if (GalgasBool::boolTrue == test_9) {
                var_accumulatedFieldStaticValues_4546 = var_accumulatedFieldStaticValues_4546.operator_or (var_value_5870.left_shift_operation (var_fieldBitIndex_4882, inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 142)) COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 142)) ;
              }
            }
            if (GalgasBool::boolFalse == test_9) {
              TC_Array <FixItDescription> fixItArray10 ;
              inCompiler->emitSemanticError (enumerator_4646.current_mExpressionLocation (HERE), GGS_string ("expression too large (should be < ").add_operation (GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 144)).left_shift_operation (var_fieldBitCount_4915, inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 144)).getter_string (SOURCE_FILE ("expression-register-value-from-slices.galgas", 144)), inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 144)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 144)), fixItArray10  COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 144)) ;
            }
          }
        }
      }
      if (GalgasBool::boolFalse == test_6) {
        GalgasBool test_11 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_11) {
          test_11 = extensionGetter_type (var_expressionResult_5554, inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 146)).readProperty_kind ().getter_isInteger (SOURCE_FILE ("expression-register-value-from-slices.galgas", 146)).boolEnum () ;
          if (GalgasBool::boolTrue == test_11) {
            GGS_bool var_unsigned_6392 ;
            GGS_uint var_expressionBitCount_6421 ;
            GGS_bigint joker_6368_2 ; // Joker input parameter
            GGS_bigint joker_6368_1 ; // Joker input parameter
            extensionGetter_type (var_expressionResult_5554, inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 147)).readProperty_kind ().method_extractInteger (joker_6368_2, joker_6368_1, var_unsigned_6392, var_expressionBitCount_6421, inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 147)) ;
            GalgasBool test_12 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_12) {
              test_12 = var_unsigned_6392.operator_not (SOURCE_FILE ("expression-register-value-from-slices.galgas", 148)).boolEnum () ;
              if (GalgasBool::boolTrue == test_12) {
                TC_Array <FixItDescription> fixItArray13 ;
                inCompiler->emitSemanticError (enumerator_4646.current_mExpressionLocation (HERE), GGS_string ("an unsigned integer expression is required here"), fixItArray13  COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 149)) ;
              }
            }
            if (GalgasBool::boolFalse == test_12) {
              GalgasBool test_14 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_14) {
                test_14 = GGS_bool (ComparisonKind::notEqual, var_expressionBitCount_6421.objectCompare (var_fieldBitCount_4915)).boolEnum () ;
                if (GalgasBool::boolTrue == test_14) {
                  TC_Array <FixItDescription> fixItArray15 ;
                  inCompiler->emitSemanticError (enumerator_4646.current_mExpressionLocation (HERE), GGS_string ("type error, $uint").add_operation (var_fieldBitCount_4915.getter_string (SOURCE_FILE ("expression-register-value-from-slices.galgas", 151)), inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 151)).add_operation (GGS_string (" type required"), inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 151)), fixItArray15  COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 151)) ;
                }
              }
              if (GalgasBool::boolFalse == test_14) {
                GGS_objectIR var_partialResult_6795 = var_expressionResult_5554 ;
                GalgasBool test_16 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_16) {
                  test_16 = GGS_bool (ComparisonKind::lowerThan, var_expressionBitCount_6421.objectCompare (var_registerBitCount_4367)).boolEnum () ;
                  if (GalgasBool::boolTrue == test_16) {
                    GGS_objectIR var_extendedResult_6948 ;
                    {
                    routine_getNewTempValue_3F__26__21_ (var_registerType_4232, ioArgument_ioTemporaries, var_extendedResult_6948, inCompiler  COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 156)) ;
                    }
                    {
                    extensionSetter_appendExtend (ioArgument_ioInstructionGenerationList, var_extendedResult_6948, var_partialResult_6795, inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 157)) ;
                    }
                    var_partialResult_6795 = var_extendedResult_6948 ;
                  }
                }
                GGS_objectIR var_shiftedResult_7203 ;
                {
                routine_getNewTempValue_3F__26__21_ (var_registerType_4232, ioArgument_ioTemporaries, var_shiftedResult_7203, inCompiler  COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 161)) ;
                }
                {
                extensionSetter_appendShiftLeft (ioArgument_ioInstructionGenerationList, var_shiftedResult_7203, var_partialResult_6795, var_fieldBitIndex_4882, inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 162)) ;
                }
                var_operandList_4600.addAssign_operation (var_shiftedResult_7203  COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 164)) ;
              }
            }
          }
        }
      }
    }
    enumerator_4646.gotoNextObject () ;
  }
  outArgument_outResult = GGS_objectIR::class_func_literalInteger (var_registerType_4232, var_accumulatedFieldStaticValues_4546  COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 170)) ;
  UpEnumerator_operandIRList enumerator_7583 (var_operandList_4600) ;
  while (enumerator_7583.hasCurrentObject ()) {
    GGS_objectIR var_newResult_7666 ;
    {
    routine_getNewTempValue_3F__26__21_ (var_registerType_4232, ioArgument_ioTemporaries, var_newResult_7666, inCompiler  COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 172)) ;
    }
    {
    extensionSetter_appendBinaryOperation (ioArgument_ioInstructionGenerationList, var_newResult_7666, extensionGetter_type (var_newResult_7666, inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 175)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 176)), outArgument_outResult, GGS_llvmBinaryOperation::class_func_ior (SOURCE_FILE ("expression-register-value-from-slices.galgas", 178)), enumerator_7583.current_mOperand (HERE), inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 173)) ;
    }
    outArgument_outResult = var_newResult_7666 ;
    enumerator_7583.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@primaryInExpressionAST addDependenceEdgeForStaticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_primaryInExpressionAST::method_addDependenceEdgeForStaticExpression (const GGS_lstring constinArgument_inConstantName,
                                                                               GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_primaryInExpressionAST temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::notEqual, temp_1.readProperty_mReceiverName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      {
      const GGS_primaryInExpressionAST temp_2 = this ;
      ioArgument_ioGraph.setter_addEdge (constinArgument_inConstantName, temp_2.readProperty_mReceiverName () COMMA_SOURCE_FILE ("expression-primary.galgas", 106)) ;
      }
    }
  }
  const GGS_primaryInExpressionAST temp_3 = this ;
  UpEnumerator_primaryInExpressionAccessListAST enumerator_4257 (temp_3.readProperty_mAccessList ()) ;
  while (enumerator_4257.hasCurrentObject ()) {
    switch (enumerator_4257.current_mAccess (HERE).enumValue ()) {
    case GGS_primaryInExpressionAccessAST::Enumeration::invalid:
      break ;
    case GGS_primaryInExpressionAccessAST::Enumeration::enum_integerSlice:
      break ;
    case GGS_primaryInExpressionAccessAST::Enumeration::enum_property:
      break ;
    case GGS_primaryInExpressionAccessAST::Enumeration::enum_arrayAccess:
      {
        GGS_expressionAST extractedValue_4396_indexExpression_0 ;
        GGS_location extractedValue_4413__1 ;
        GGS_bool extractedValue_4413__2 ;
        enumerator_4257.current_mAccess (HERE).getAssociatedValuesFor_arrayAccess (extractedValue_4396_indexExpression_0, extractedValue_4413__1, extractedValue_4413__2) ;
        callExtensionMethod_addDependenceEdgeForStaticExpression ((cPtr_expressionAST *) extractedValue_4396_indexExpression_0.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 113)) ;
      }
      break ;
    case GGS_primaryInExpressionAccessAST::Enumeration::enum_funcCall:
      {
        GGS_lstring extractedValue_4524__0 ;
        GGS_effectiveArgumentListAST extractedValue_4552_arguments_1 ;
        GGS_location extractedValue_4562__2 ;
        enumerator_4257.current_mAccess (HERE).getAssociatedValuesFor_funcCall (extractedValue_4524__0, extractedValue_4552_arguments_1, extractedValue_4562__2) ;
        UpEnumerator_effectiveArgumentListAST enumerator_4602 (extractedValue_4552_arguments_1) ;
        while (enumerator_4602.hasCurrentObject ()) {
          switch (enumerator_4602.current_mEffectiveParameterKind (HERE).enumValue ()) {
          case GGS_effectiveArgumentPassingModeAST::Enumeration::invalid:
            break ;
          case GGS_effectiveArgumentPassingModeAST::Enumeration::enum_input:
            break ;
          case GGS_effectiveArgumentPassingModeAST::Enumeration::enum_inputWithType:
            {
              GGS_bool extractedValue_4712__0 ;
              GGS_lstring extractedValue_4723_typeName_1 ;
              GGS_lstring extractedValue_4732__2 ;
              enumerator_4602.current_mEffectiveParameterKind (HERE).getAssociatedValuesFor_inputWithType (extractedValue_4712__0, extractedValue_4723_typeName_1, extractedValue_4732__2) ;
              GalgasBool test_4 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_4) {
                test_4 = GGS_bool (ComparisonKind::notEqual, extractedValue_4723_typeName_1.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
                if (GalgasBool::boolTrue == test_4) {
                  {
                  ioArgument_ioGraph.setter_noteNode (extractedValue_4723_typeName_1 COMMA_SOURCE_FILE ("expression-primary.galgas", 120)) ;
                  }
                }
              }
            }
            break ;
          case GGS_effectiveArgumentPassingModeAST::Enumeration::enum_output:
            {
              GGS_expressionAST extractedValue_4855_expression_0 ;
              GGS_location extractedValue_4866__1 ;
              enumerator_4602.current_mEffectiveParameterKind (HERE).getAssociatedValuesFor_output (extractedValue_4855_expression_0, extractedValue_4866__1) ;
              callExtensionMethod_addDependenceEdgeForStaticExpression ((cPtr_expressionAST *) extractedValue_4855_expression_0.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 122)) ;
            }
            break ;
          case GGS_effectiveArgumentPassingModeAST::Enumeration::enum_outputInput:
            break ;
          case GGS_effectiveArgumentPassingModeAST::Enumeration::enum_outputInputSelfVariable:
            break ;
          }
          enumerator_4602.gotoNextObject () ;
        }
      }
      break ;
    }
    enumerator_4257.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@primaryInExpressionAST noteExpressionTypesInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_primaryInExpressionAST::method_noteExpressionTypesInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_primaryInExpressionAST temp_0 = this ;
  UpEnumerator_primaryInExpressionAccessListAST enumerator_5506 (temp_0.readProperty_mAccessList ()) ;
  while (enumerator_5506.hasCurrentObject ()) {
    switch (enumerator_5506.current_mAccess (HERE).enumValue ()) {
    case GGS_primaryInExpressionAccessAST::Enumeration::invalid:
      break ;
    case GGS_primaryInExpressionAccessAST::Enumeration::enum_integerSlice:
      {
        GGS_lbigint extractedValue_5587_low_0 ;
        GGS_lbigint extractedValue_5600_high_1 ;
        enumerator_5506.current_mAccess (HERE).getAssociatedValuesFor_integerSlice (extractedValue_5587_low_0, extractedValue_5600_high_1) ;
        GalgasBool test_1 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_1) {
          test_1 = GGS_bool (ComparisonKind::greaterOrEqual, extractedValue_5600_high_1.readProperty_bigint ().objectCompare (extractedValue_5587_low_0.readProperty_bigint ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_1) {
            {
            extensionSetter_noteUINTType (ioArgument_ioGraph, extractedValue_5600_high_1.readProperty_bigint ().substract_operation (extractedValue_5587_low_0.readProperty_bigint (), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 140)).add_operation (GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 140)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 140)).getter_uint (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 140)), extractedValue_5587_low_0.readProperty_location (), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 140)) ;
            }
          }
        }
      }
      break ;
    case GGS_primaryInExpressionAccessAST::Enumeration::enum_property:
      break ;
    case GGS_primaryInExpressionAccessAST::Enumeration::enum_arrayAccess:
      {
        GGS_expressionAST extractedValue_5803_indexExpression_0 ;
        GGS_location extractedValue_5820__1 ;
        GGS_bool extractedValue_5820__2 ;
        enumerator_5506.current_mAccess (HERE).getAssociatedValuesFor_arrayAccess (extractedValue_5803_indexExpression_0, extractedValue_5820__1, extractedValue_5820__2) ;
        callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((cPtr_expressionAST *) extractedValue_5803_indexExpression_0.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 144)) ;
      }
      break ;
    case GGS_primaryInExpressionAccessAST::Enumeration::enum_funcCall:
      {
        GGS_lstring extractedValue_5915__0 ;
        GGS_effectiveArgumentListAST extractedValue_5943_arguments_1 ;
        GGS_location extractedValue_5953__2 ;
        enumerator_5506.current_mAccess (HERE).getAssociatedValuesFor_funcCall (extractedValue_5915__0, extractedValue_5943_arguments_1, extractedValue_5953__2) ;
        UpEnumerator_effectiveArgumentListAST enumerator_5993 (extractedValue_5943_arguments_1) ;
        while (enumerator_5993.hasCurrentObject ()) {
          switch (enumerator_5993.current_mEffectiveParameterKind (HERE).enumValue ()) {
          case GGS_effectiveArgumentPassingModeAST::Enumeration::invalid:
            break ;
          case GGS_effectiveArgumentPassingModeAST::Enumeration::enum_input:
            break ;
          case GGS_effectiveArgumentPassingModeAST::Enumeration::enum_inputWithType:
            {
              GGS_bool extractedValue_6103__0 ;
              GGS_lstring extractedValue_6114_typeName_1 ;
              GGS_lstring extractedValue_6123__2 ;
              enumerator_5993.current_mEffectiveParameterKind (HERE).getAssociatedValuesFor_inputWithType (extractedValue_6103__0, extractedValue_6114_typeName_1, extractedValue_6123__2) ;
              GalgasBool test_2 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_2) {
                test_2 = GGS_bool (ComparisonKind::notEqual, extractedValue_6114_typeName_1.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
                if (GalgasBool::boolTrue == test_2) {
                  {
                  ioArgument_ioGraph.setter_noteNode (extractedValue_6114_typeName_1 COMMA_SOURCE_FILE ("expression-primary.galgas", 151)) ;
                  }
                }
              }
            }
            break ;
          case GGS_effectiveArgumentPassingModeAST::Enumeration::enum_output:
            {
              GGS_expressionAST extractedValue_6246_expression_0 ;
              GGS_location extractedValue_6257__1 ;
              enumerator_5993.current_mEffectiveParameterKind (HERE).getAssociatedValuesFor_output (extractedValue_6246_expression_0, extractedValue_6257__1) ;
              callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((cPtr_expressionAST *) extractedValue_6246_expression_0.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 153)) ;
            }
            break ;
          case GGS_effectiveArgumentPassingModeAST::Enumeration::enum_outputInput:
            break ;
          case GGS_effectiveArgumentPassingModeAST::Enumeration::enum_outputInputSelfVariable:
            break ;
          }
          enumerator_5993.gotoNextObject () ;
        }
      }
      break ;
    }
    enumerator_5506.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@primaryInExpressionAST analyzeExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_primaryInExpressionAST::method_analyzeExpression (const GGS_omnibusType constinArgument_inSelfType,
                                                            const GGS_routineAttributes constinArgument_inRoutineAttributes,
                                                            const GGS_omnibusType constinArgument_inOptionalTargetType,
                                                            const GGS_semanticContext constinArgument_inContext,
                                                            const GGS_mode constinArgument_inMode,
                                                            GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                            GGS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                            GGS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                            GGS_allocaList & ioArgument_ioAllocaList,
                                                            GGS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                            GGS_objectIR & outArgument_outResult,
                                                            Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_primaryInExpressionAST temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::notEqual, temp_1.readProperty_mReceiverName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GalgasBool test_2 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_2) {
        test_2 = constinArgument_inRoutineAttributes.getter_contains (GGS_routineAttributes::class_func_isGuard (SOURCE_FILE ("expression-primary.galgas", 181)) COMMA_SOURCE_FILE ("expression-primary.galgas", 181)).boolEnum () ;
        if (GalgasBool::boolTrue == test_2) {
          const GGS_primaryInExpressionAST temp_3 = this ;
          TC_Array <FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (temp_3.readProperty_mReceiverName ().readProperty_location (), GGS_string ("in guard, only 'self' properties may be accessed"), fixItArray4  COMMA_SOURCE_FILE ("expression-primary.galgas", 182)) ;
          outArgument_outResult.drop () ; // Release error dropped variable
        }
      }
      if (GalgasBool::boolFalse == test_2) {
        const GGS_primaryInExpressionAST temp_5 = this ;
        callExtensionMethod_analyzePrimaryExpressionNoSelf ((cPtr_primaryInExpressionAST *) temp_5.ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, outArgument_outResult, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 184)) ;
      }
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GalgasBool test_6 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_6) {
      test_6 = GGS_bool (ComparisonKind::equal, constinArgument_inSelfType.readProperty_kind ().objectCompare (GGS_typeKind::class_func_void (SOURCE_FILE ("expression-primary.galgas", 198)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_6) {
        const GGS_primaryInExpressionAST temp_7 = this ;
        TC_Array <FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (temp_7.readProperty_mReceiverName ().readProperty_location (), GGS_string ("'self' is not available in this context"), fixItArray8  COMMA_SOURCE_FILE ("expression-primary.galgas", 199)) ;
        outArgument_outResult.drop () ; // Release error dropped variable
      }
    }
    if (GalgasBool::boolFalse == test_6) {
      const GGS_primaryInExpressionAST temp_9 = this ;
      callExtensionMethod_analyzePrimaryExpressionWithSelf ((cPtr_primaryInExpressionAST *) temp_9.ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, outArgument_outResult, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 201)) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Routine 'procAnalyzeAccesListInExpression?self?routineAttributes?optionalTargetType?context?mode&temporary&staticEntityMap&variableMap&alloca&instructionListIR?&result'
//
//--------------------------------------------------------------------------------------------------

void routine_procAnalyzeAccesListInExpression_3F_self_3F_routineAttributes_3F_optionalTargetType_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_3F__26_result (const GGS_omnibusType constinArgument_inSelfType,
                                                                                                                                                                                                                 const GGS_routineAttributes constinArgument_inRoutineAttributes,
                                                                                                                                                                                                                 const GGS_omnibusType constinArgument_inOptionalTargetType,
                                                                                                                                                                                                                 const GGS_semanticContext constinArgument_inContext,
                                                                                                                                                                                                                 const GGS_mode constinArgument_inMode,
                                                                                                                                                                                                                 GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                                                                                                                                                                 GGS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                                                                                                                                                                 GGS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                                                                                                                                                                 GGS_allocaList & ioArgument_ioAllocaList,
                                                                                                                                                                                                                 GGS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                                                                                                                                                                 const GGS_primaryInExpressionAccessListAST constinArgument_inAccessList,
                                                                                                                                                                                                                 GGS_objectIR & ioArgument_ioResult,
                                                                                                                                                                                                                 Compiler * inCompiler
                                                                                                                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  UpEnumerator_primaryInExpressionAccessListAST enumerator_13966 (constinArgument_inAccessList) ;
  while (enumerator_13966.hasCurrentObject ()) {
    switch (enumerator_13966.current_mAccess (HERE).enumValue ()) {
    case GGS_primaryInExpressionAccessAST::Enumeration::invalid:
      break ;
    case GGS_primaryInExpressionAccessAST::Enumeration::enum_integerSlice:
      {
        GGS_lbigint extractedValue_14043_low_0 ;
        GGS_lbigint extractedValue_14056_high_1 ;
        enumerator_13966.current_mAccess (HERE).getAssociatedValuesFor_integerSlice (extractedValue_14043_low_0, extractedValue_14056_high_1) ;
        {
        routine_handleSliceInExpression_3F_context_26__3F__3F__26_temporary_26_instructionListIR (constinArgument_inContext, ioArgument_ioResult, extractedValue_14043_low_0, extractedValue_14056_high_1, ioArgument_ioTemporaries, ioArgument_ioInstructionGenerationList, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 358)) ;
        }
      }
      break ;
    case GGS_primaryInExpressionAccessAST::Enumeration::enum_property:
      {
        GGS_lstring extractedValue_14298_propertyName_0 ;
        enumerator_13966.current_mAccess (HERE).getAssociatedValuesFor_property (extractedValue_14298_propertyName_0) ;
        {
        routine_handlePropertyAccessInExpression_3F_context_26__3F__3F__26_temporary_26_alloca_26_instructionListIR (constinArgument_inContext, ioArgument_ioResult, extractedValue_14298_propertyName_0, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 367)) ;
        }
      }
      break ;
    case GGS_primaryInExpressionAccessAST::Enumeration::enum_arrayAccess:
      {
        GGS_expressionAST extractedValue_14606_indexExpression_0 ;
        GGS_location extractedValue_14632_endOfIndex_1 ;
        GGS_bool extractedValue_14643_checkIndexExpression_2 ;
        enumerator_13966.current_mAccess (HERE).getAssociatedValuesFor_arrayAccess (extractedValue_14606_indexExpression_0, extractedValue_14632_endOfIndex_1, extractedValue_14643_checkIndexExpression_2) ;
        {
        routine_handleArrayAccessInExpression_26__3F__3F__3F__3F_self_3F_routineAttributes_3F_optionalTargetType_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR (ioArgument_ioResult, extractedValue_14606_indexExpression_0, extractedValue_14632_endOfIndex_1, extractedValue_14643_checkIndexExpression_2, constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 377)) ;
        }
      }
      break ;
    case GGS_primaryInExpressionAccessAST::Enumeration::enum_funcCall:
      {
        GGS_lstring extractedValue_15205_methodName_0 ;
        GGS_effectiveArgumentListAST extractedValue_15242_arguments_1 ;
        GGS_location extractedValue_15262_errorLocation_2 ;
        enumerator_13966.current_mAccess (HERE).getAssociatedValuesFor_funcCall (extractedValue_15205_methodName_0, extractedValue_15242_arguments_1, extractedValue_15262_errorLocation_2) ;
        GalgasBool test_0 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_0) {
          test_0 = constinArgument_inRoutineAttributes.getter_contains (GGS_routineAttributes::class_func_isGuard (SOURCE_FILE ("expression-primary.galgas", 394)) COMMA_SOURCE_FILE ("expression-primary.galgas", 394)).boolEnum () ;
          if (GalgasBool::boolTrue == test_0) {
            TC_Array <FixItDescription> fixItArray1 ;
            inCompiler->emitSemanticError (extractedValue_15262_errorLocation_2, GGS_string ("a method cannot be called in guard"), fixItArray1  COMMA_SOURCE_FILE ("expression-primary.galgas", 395)) ;
            ioArgument_ioResult.drop () ; // Release error dropped variable
          }
        }
        if (GalgasBool::boolFalse == test_0) {
          {
          routine_handleFunctionCallInExpression_3F__26__3F_self_3F_context_3F_mode_3F_routineAttributes_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_3F__26_ (extractedValue_15205_methodName_0, ioArgument_ioResult, constinArgument_inSelfType, constinArgument_inContext, constinArgument_inMode, constinArgument_inRoutineAttributes, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, extractedValue_15242_arguments_1, ioArgument_ioInstructionGenerationList, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 397)) ;
          }
        }
      }
      break ;
    }
    enumerator_13966.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'handleSliceInExpression?context&??&temporary&instructionListIR'
//
//--------------------------------------------------------------------------------------------------

void routine_handleSliceInExpression_3F_context_26__3F__3F__26_temporary_26_instructionListIR (const GGS_semanticContext constinArgument_inContext,
                                                                                               GGS_objectIR & ioArgument_ioResult,
                                                                                               const GGS_lbigint constinArgument_inLow,
                                                                                               const GGS_lbigint constinArgument_inHigh,
                                                                                               GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                                               GGS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::greaterThan, constinArgument_inLow.readProperty_bigint ().objectCompare (constinArgument_inHigh.readProperty_bigint ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      TC_Array <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inLow.readProperty_location (), GGS_string ("low bound should be lower or equal to high bound"), fixItArray1  COMMA_SOURCE_FILE ("expression-primary.galgas", 506)) ;
      ioArgument_ioResult.drop () ; // Release error dropped variable
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GalgasBool test_2 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_2) {
      GGS_bool test_3 = extensionGetter_type (ioArgument_ioResult, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 507)).readProperty_kind ().getter_isInteger (SOURCE_FILE ("expression-primary.galgas", 507)) ;
      if (GalgasBool::boolTrue != test_3.boolEnum ()) {
        test_3 = extensionGetter_type (ioArgument_ioResult, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 507)).readProperty_kind ().getter_isCompileTimeInteger (SOURCE_FILE ("expression-primary.galgas", 507)) ;
      }
      test_2 = test_3.operator_not (SOURCE_FILE ("expression-primary.galgas", 507)).boolEnum () ;
      if (GalgasBool::boolTrue == test_2) {
        TC_Array <FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (constinArgument_inLow.readProperty_location (), GGS_string ("Invalid, receiver is not an integer"), fixItArray4  COMMA_SOURCE_FILE ("expression-primary.galgas", 508)) ;
        ioArgument_ioResult.drop () ; // Release error dropped variable
      }
    }
    if (GalgasBool::boolFalse == test_2) {
      {
      extensionSetter_appendLogicalShiftRight (ioArgument_ioInstructionGenerationList, ioArgument_ioResult, constinArgument_inLow.readProperty_bigint ().getter_uint (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 511)), ioArgument_ioTemporaries, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 511)) ;
      }
      GGS_lstring var_resultIntegerName_19511 = GGS_lstring::init_21__21_ (GGS_string ("u").add_operation (constinArgument_inHigh.readProperty_bigint ().substract_operation (constinArgument_inLow.readProperty_bigint (), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 513)).add_operation (GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 513)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 513)).getter_string (SOURCE_FILE ("expression-primary.galgas", 513)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 513)), constinArgument_inLow.readProperty_location (), inCompiler COMMA_HERE) ;
      GGS_omnibusType var_sliceType_19669 ;
      extensionMethod_searchType (constinArgument_inContext.readProperty_mTypeMap (), var_resultIntegerName_19511, var_sliceType_19669, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 514)) ;
      {
      extensionSetter_appendTrunc (ioArgument_ioInstructionGenerationList, var_sliceType_19669, ioArgument_ioResult, ioArgument_ioTemporaries, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 515)) ;
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'handlePropertyAccessInExpression?context&??&temporary&alloca&instructionListIR'
//
//--------------------------------------------------------------------------------------------------

void routine_handlePropertyAccessInExpression_3F_context_26__3F__3F__26_temporary_26_alloca_26_instructionListIR (const GGS_semanticContext constinArgument_inContext,
                                                                                                                  GGS_objectIR & ioArgument_ioResult,
                                                                                                                  const GGS_lstring constinArgument_inPropertyName,
                                                                                                                  const GGS_mode constinArgument_inMode,
                                                                                                                  GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                                                                  GGS_allocaList & ioArgument_ioAllocaList,
                                                                                                                  GGS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GGS_omnibusType var_type_20219 = extensionGetter_type (ioArgument_ioResult, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 530)) ;
  GGS_propertyGetterMap var_propertyGetterMap_20346 = extensionGetter_propertyGetterMap (constinArgument_inContext, var_type_20219, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 532)) ;
  GGS_propertyGetterKind var_accessKind_20477 ;
  GGS_propertyVisibility joker_20449 ; // Joker input parameter
  var_propertyGetterMap_20346.method_searchKey (constinArgument_inPropertyName, joker_20449, var_accessKind_20477, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 533)) ;
  switch (var_accessKind_20477.enumValue ()) {
  case GGS_propertyGetterKind::Enumeration::invalid:
    break ;
  case GGS_propertyGetterKind::Enumeration::enum_constantProperty:
    {
      GGS_objectIR extractedValue_20544_value_0 ;
      var_accessKind_20477.getAssociatedValuesFor_constantProperty (extractedValue_20544_value_0) ;
      ioArgument_ioResult = extractedValue_20544_value_0 ;
    }
    break ;
  case GGS_propertyGetterKind::Enumeration::enum_storedProperty:
    {
      GGS_omnibusType extractedValue_20610_propertyType_0 ;
      GGS_uint extractedValue_20629_propertyIndex_1 ;
      var_accessKind_20477.getAssociatedValuesFor_storedProperty (extractedValue_20610_propertyType_0, extractedValue_20629_propertyIndex_1) ;
      GGS_string var_property_5F_llvmName_20686 ;
      {
      extensionSetter_newTempLLVMVar (ioArgument_ioTemporaries, var_property_5F_llvmName_20686, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 538)) ;
      }
      {
      extensionSetter_appendGetUniversalPropertyReference (ioArgument_ioInstructionGenerationList, extensionGetter_type (ioArgument_ioResult, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 540)), extensionGetter_llvmName (ioArgument_ioResult, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 541)), var_property_5F_llvmName_20686, extractedValue_20629_propertyIndex_1, constinArgument_inPropertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 539)) ;
      }
      ioArgument_ioResult = GGS_objectIR::class_func_reference (extractedValue_20610_propertyType_0, var_property_5F_llvmName_20686  COMMA_SOURCE_FILE ("expression-primary.galgas", 546)) ;
    }
    break ;
  case GGS_propertyGetterKind::Enumeration::enum_computedProperty:
    {
      GGS_unifiedTypeMapEntry extractedValue_21000_propertyTypeProxy_0 ;
      GGS_routineLLVMNameDict extractedValue_21018_modeDictionary_1 ;
      var_accessKind_20477.getAssociatedValuesFor_computedProperty (extractedValue_21000_propertyTypeProxy_0, extractedValue_21018_modeDictionary_1) ;
      {
      extensionSetter_referenceFromPossibleValue (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, ioArgument_ioAllocaList, ioArgument_ioResult, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 548)) ;
      }
      GGS_string var_routineLLVMName_21149 = function_checkModeAndReturnsRoutineLLVMName (extractedValue_21018_modeDictionary_1, constinArgument_inMode, constinArgument_inPropertyName, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 549)) ;
      GGS_objectIR var_resultValueIR_21414 ;
      {
      extensionSetter_appendGetComputedPropertyValue (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, ioArgument_ioResult, var_routineLLVMName_21149, extensionGetter_type (extractedValue_21000_propertyTypeProxy_0, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 554)), var_resultValueIR_21414, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 550)) ;
      }
      ioArgument_ioResult = var_resultValueIR_21414 ;
    }
    break ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'handleArrayAccessInExpression&????self?routineAttributes?optionalTargetType?context?mode&temporary&staticEntityMap&variableMap&alloca&instructionListIR'
//
//--------------------------------------------------------------------------------------------------

void routine_handleArrayAccessInExpression_26__3F__3F__3F__3F_self_3F_routineAttributes_3F_optionalTargetType_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR (GGS_objectIR & ioArgument_ioResult,
                                                                                                                                                                                                                const GGS_expressionAST constinArgument_inIndexExpression,
                                                                                                                                                                                                                const GGS_location constinArgument_inEndOfIndex,
                                                                                                                                                                                                                const GGS_bool constinArgument_inCheckIndexExpression,
                                                                                                                                                                                                                const GGS_omnibusType constinArgument_inSelfType,
                                                                                                                                                                                                                const GGS_routineAttributes constinArgument_inRoutineAttributes,
                                                                                                                                                                                                                const GGS_omnibusType /* constinArgument_inOptionalTargetType */,
                                                                                                                                                                                                                const GGS_semanticContext constinArgument_inContext,
                                                                                                                                                                                                                const GGS_mode constinArgument_inMode,
                                                                                                                                                                                                                GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                                                                                                                                                                GGS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                                                                                                                                                                GGS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                                                                                                                                                                GGS_allocaList & ioArgument_ioAllocaList,
                                                                                                                                                                                                                GGS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                                                                                                                                                                Compiler * inCompiler
                                                                                                                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  switch (extensionGetter_type (ioArgument_ioResult, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 580)).readProperty_subscript ().enumValue ()) {
  case GGS_subscript::Enumeration::invalid:
    break ;
  case GGS_subscript::Enumeration::enum_noSubscript:
    {
      TC_Array <FixItDescription> fixItArray0 ;
      inCompiler->emitSemanticError (constinArgument_inEndOfIndex, GGS_string ("the receiver type is ").add_operation (extensionGetter_type (ioArgument_ioResult, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 582)).readProperty_omnibusTypeDescriptionName (), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 582)).add_operation (GGS_string (" and does not accept subscripting"), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 582)), fixItArray0  COMMA_SOURCE_FILE ("expression-primary.galgas", 582)) ;
    }
    break ;
  case GGS_subscript::Enumeration::enum_literalString:
    {
      TC_Array <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inEndOfIndex, GGS_string ("the receiver type is literal string (dynamic array) and does not accept subscripting"), fixItArray1  COMMA_SOURCE_FILE ("expression-primary.galgas", 584)) ;
    }
    break ;
  case GGS_subscript::Enumeration::enum_staticSubscript:
    {
      GGS_omnibusType extractedValue_22677_elementType_0 ;
      GGS_bigint extractedValue_22697_arraySize_1 ;
      extensionGetter_type (ioArgument_ioResult, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 580)).readProperty_subscript ().getAssociatedValuesFor_staticSubscript (extractedValue_22677_elementType_0, extractedValue_22697_arraySize_1) ;
      GGS_objectIR var_indexIR_23186 ;
      {
      routine_handleArraySubscriptNew_3F_self_3F_routineAttributes_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_3F__3F__3F__3F_arraySize_3F_elementType_26__21_ (constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, constinArgument_inIndexExpression, constinArgument_inEndOfIndex, constinArgument_inCheckIndexExpression, extractedValue_22697_arraySize_1, extractedValue_22677_elementType_0, ioArgument_ioInstructionGenerationList, var_indexIR_23186, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 587)) ;
      }
      GGS_objectIR var_result_23405 ;
      {
      extensionSetter_appendGetArrayElementReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, ioArgument_ioResult, extractedValue_22677_elementType_0, var_indexIR_23186, var_result_23405, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 604)) ;
      }
      ioArgument_ioResult = var_result_23405 ;
    }
    break ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'handleFunctionCallInExpression?&?self?context?mode?routineAttributes&temporary&staticEntityMap&variableMap&alloca?&'
//
//--------------------------------------------------------------------------------------------------

void routine_handleFunctionCallInExpression_3F__26__3F_self_3F_context_3F_mode_3F_routineAttributes_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_3F__26_ (const GGS_lstring constinArgument_inMethodName,
                                                                                                                                                                      GGS_objectIR & ioArgument_ioObjectIR,
                                                                                                                                                                      const GGS_omnibusType constinArgument_inSelfType,
                                                                                                                                                                      const GGS_semanticContext constinArgument_inContext,
                                                                                                                                                                      const GGS_mode constinArgument_inMode,
                                                                                                                                                                      const GGS_routineAttributes constinArgument_inRoutineAttributes,
                                                                                                                                                                      GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                                                                                                                      GGS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                                                                                                                      GGS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                                                                                                                      GGS_allocaList & ioArgument_ioAllocaList,
                                                                                                                                                                      const GGS_effectiveArgumentListAST constinArgument_inArguments,
                                                                                                                                                                      GGS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                                                                                                                      Compiler * inCompiler
                                                                                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_omnibusType var_receiverType_24150 = extensionGetter_type (ioArgument_ioObjectIR, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 631)) ;
  GGS_lstring var_methodMangledName_24238 = extensionGetter_mangledName (constinArgument_inArguments, var_receiverType_24150.readProperty_omnibusTypeDescriptionName (), constinArgument_inMethodName, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 633)) ;
  GGS_bool var_implementedPublic_24488 ;
  GGS_routineTypedSignature var_formalSignature_24515 ;
  GGS_unifiedTypeMapEntry var_formalReturnTypeProxy_24540 ;
  GGS_routineLLVMNameDict var_implementedModeDictionary_24599 ;
  GGS_bool var_implementedIsExported_24641 ;
  GGS_mode var_implementedMode_24679 ;
  constinArgument_inContext.readProperty_mRoutineMap ().method_searchKey (var_methodMangledName_24238, var_implementedPublic_24488, var_formalSignature_24515, var_formalReturnTypeProxy_24540, var_implementedModeDictionary_24599, var_implementedIsExported_24641, var_implementedMode_24679, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 636)) ;
  GGS_string var_functionLLVMName_24722 = function_checkModeAndReturnsRoutineLLVMName (var_implementedModeDictionary_24599, constinArgument_inMode, constinArgument_inMethodName, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 646)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::equal, extensionGetter_type (var_formalReturnTypeProxy_24540, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 648)).readProperty_kind ().objectCompare (GGS_typeKind::class_func_void (SOURCE_FILE ("expression-primary.galgas", 648)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      TC_Array <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inMethodName.readProperty_location (), GGS_string ("not a function (returns no value)"), fixItArray1  COMMA_SOURCE_FILE ("expression-primary.galgas", 649)) ;
      ioArgument_ioObjectIR.drop () ; // Release error dropped variable
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    {
    extensionSetter_referenceFromPossibleValue (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, ioArgument_ioAllocaList, ioArgument_ioObjectIR, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 652)) ;
    }
    GGS_procCallEffectiveParameterListIR temp_2 = GGS_procCallEffectiveParameterListIR::init (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 654)) ;
    GGS_procCallEffectiveParameterListIR var_effectiveParameterListIR_25241 = temp_2 ;
    var_effectiveParameterListIR_25241.addAssign_operation (GGS_procEffectiveParameterPassingModeIR::class_func_outputInput (SOURCE_FILE ("expression-primary.galgas", 655)), ioArgument_ioObjectIR  COMMA_SOURCE_FILE ("expression-primary.galgas", 655)) ;
    {
    routine_analyzeEffectiveParameters_3F_self_3F_routineAttributes_3F_formal_3F_effective_3F_errorLocation_3F_context_3F_requiredMode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_26_effectiveIR (constinArgument_inSelfType, constinArgument_inRoutineAttributes, var_formalSignature_24515, constinArgument_inArguments, constinArgument_inMethodName.readProperty_location (), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_effectiveParameterListIR_25241, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 657)) ;
    }
    GGS_objectIR var_callReturnedResult_26018 ;
    {
    routine_getNewTempValue_3F__26__21_ (extensionGetter_type (var_formalReturnTypeProxy_24540, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 673)), ioArgument_ioTemporaries, var_callReturnedResult_26018, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 673)) ;
    }
    GGS_lstring var_routineMangledName_26067 = function_routineMangledNameFromCall (extensionGetter_type (ioArgument_ioObjectIR, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 675)).readProperty_llvmBaseTypeName (), constinArgument_inMethodName, constinArgument_inArguments, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 675)) ;
    ioArgument_ioInstructionGenerationList.addAssign_operation (GGS_standaloneRoutineCallIR::init_21__21__21__21_ (var_callReturnedResult_26018, var_routineMangledName_26067, var_functionLLVMName_24722, var_effectiveParameterListIR_25241, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("expression-primary.galgas", 676)) ;
    ioArgument_ioObjectIR = var_callReturnedResult_26018 ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@standaloneFunctionInExpressionAST addDependenceEdgeForStaticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_standaloneFunctionInExpressionAST::method_addDependenceEdgeForStaticExpression (const GGS_lstring constinArgument_inConstantName,
                                                                                          GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_standaloneFunctionInExpressionAST temp_0 = this ;
  ioArgument_ioGraph.setter_addEdge (constinArgument_inConstantName, temp_0.readProperty_mStandaloneFunctionName () COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 37)) ;
  }
  const GGS_standaloneFunctionInExpressionAST temp_1 = this ;
  UpEnumerator_effectiveArgumentListAST enumerator_2101 (temp_1.readProperty_mArguments ()) ;
  while (enumerator_2101.hasCurrentObject ()) {
    switch (enumerator_2101.current_mEffectiveParameterKind (HERE).enumValue ()) {
    case GGS_effectiveArgumentPassingModeAST::Enumeration::invalid:
      break ;
    case GGS_effectiveArgumentPassingModeAST::Enumeration::enum_input:
      break ;
    case GGS_effectiveArgumentPassingModeAST::Enumeration::enum_inputWithType:
      {
        GGS_bool extractedValue_2205__0 ;
        GGS_lstring extractedValue_2216_typeName_1 ;
        GGS_lstring extractedValue_2225__2 ;
        enumerator_2101.current_mEffectiveParameterKind (HERE).getAssociatedValuesFor_inputWithType (extractedValue_2205__0, extractedValue_2216_typeName_1, extractedValue_2225__2) ;
        GalgasBool test_2 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_2) {
          test_2 = GGS_bool (ComparisonKind::notEqual, extractedValue_2216_typeName_1.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_2) {
            {
            ioArgument_ioGraph.setter_noteNode (extractedValue_2216_typeName_1 COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 43)) ;
            }
          }
        }
      }
      break ;
    case GGS_effectiveArgumentPassingModeAST::Enumeration::enum_output:
      {
        GGS_expressionAST extractedValue_2332_expression_0 ;
        GGS_location extractedValue_2343__1 ;
        enumerator_2101.current_mEffectiveParameterKind (HERE).getAssociatedValuesFor_output (extractedValue_2332_expression_0, extractedValue_2343__1) ;
        callExtensionMethod_addDependenceEdgeForStaticExpression ((cPtr_expressionAST *) extractedValue_2332_expression_0.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 45)) ;
      }
      break ;
    case GGS_effectiveArgumentPassingModeAST::Enumeration::enum_outputInput:
      break ;
    case GGS_effectiveArgumentPassingModeAST::Enumeration::enum_outputInputSelfVariable:
      break ;
    }
    enumerator_2101.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@standaloneFunctionInExpressionAST noteExpressionTypesInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_standaloneFunctionInExpressionAST::method_noteExpressionTypesInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_standaloneFunctionInExpressionAST temp_0 = this ;
  UpEnumerator_effectiveArgumentListAST enumerator_2990 (temp_0.readProperty_mArguments ()) ;
  while (enumerator_2990.hasCurrentObject ()) {
    switch (enumerator_2990.current_mEffectiveParameterKind (HERE).enumValue ()) {
    case GGS_effectiveArgumentPassingModeAST::Enumeration::invalid:
      break ;
    case GGS_effectiveArgumentPassingModeAST::Enumeration::enum_input:
      break ;
    case GGS_effectiveArgumentPassingModeAST::Enumeration::enum_inputWithType:
      {
        GGS_bool extractedValue_3094__0 ;
        GGS_lstring extractedValue_3105_typeName_1 ;
        GGS_lstring extractedValue_3114__2 ;
        enumerator_2990.current_mEffectiveParameterKind (HERE).getAssociatedValuesFor_inputWithType (extractedValue_3094__0, extractedValue_3105_typeName_1, extractedValue_3114__2) ;
        GalgasBool test_1 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_1) {
          test_1 = GGS_bool (ComparisonKind::notEqual, extractedValue_3105_typeName_1.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_1) {
            {
            ioArgument_ioGraph.setter_noteNode (extractedValue_3105_typeName_1 COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 64)) ;
            }
          }
        }
      }
      break ;
    case GGS_effectiveArgumentPassingModeAST::Enumeration::enum_output:
      {
        GGS_expressionAST extractedValue_3221_expression_0 ;
        GGS_location extractedValue_3232__1 ;
        enumerator_2990.current_mEffectiveParameterKind (HERE).getAssociatedValuesFor_output (extractedValue_3221_expression_0, extractedValue_3232__1) ;
        callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((cPtr_expressionAST *) extractedValue_3221_expression_0.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 66)) ;
      }
      break ;
    case GGS_effectiveArgumentPassingModeAST::Enumeration::enum_outputInput:
      break ;
    case GGS_effectiveArgumentPassingModeAST::Enumeration::enum_outputInputSelfVariable:
      break ;
    }
    enumerator_2990.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@standaloneFunctionInExpressionAST analyzeExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_standaloneFunctionInExpressionAST::method_analyzeExpression (const GGS_omnibusType constinArgument_inSelfType,
                                                                       const GGS_routineAttributes constinArgument_inRoutineAttributes,
                                                                       const GGS_omnibusType /* constinArgument_inOptionalTargetType */,
                                                                       const GGS_semanticContext constinArgument_inContext,
                                                                       const GGS_mode constinArgument_inMode,
                                                                       GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                       GGS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                       GGS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                       GGS_allocaList & ioArgument_ioAllocaList,
                                                                       GGS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                       GGS_objectIR & outArgument_outFunctionCallReturnedValue,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = constinArgument_inRoutineAttributes.getter_contains (GGS_routineAttributes::class_func_isGuard (SOURCE_FILE ("expression-standalone-function-call.galgas", 91)) COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 91)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_standaloneFunctionInExpressionAST temp_1 = this ;
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mStandaloneFunctionName ().readProperty_location (), GGS_string ("a routine cannot be called in guard"), fixItArray2  COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 92)) ;
    }
  }
  const GGS_standaloneFunctionInExpressionAST temp_3 = this ;
  const GGS_standaloneFunctionInExpressionAST temp_4 = this ;
  GGS_lstring var_routineLLVMName_4625 = function_routineMangledNameFromCall (GGS_string::makeEmptyString (), temp_3.readProperty_mStandaloneFunctionName (), temp_4.readProperty_mArguments (), inCompiler COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 95)) ;
  const GGS_standaloneFunctionInExpressionAST temp_5 = this ;
  const GGS_standaloneFunctionInExpressionAST temp_6 = this ;
  GGS_lstring var_signature_4764 = extensionGetter_routineSignature (temp_5.readProperty_mArguments (), temp_6.readProperty_mStandaloneFunctionName ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 97)) ;
  const GGS_standaloneFunctionInExpressionAST temp_7 = this ;
  const GGS_standaloneFunctionInExpressionAST temp_8 = this ;
  GGS_lstring var_requiredFunctionMangledName_4884 = GGS_lstring::init_21__21_ (temp_7.readProperty_mStandaloneFunctionName ().readProperty_string ().add_operation (var_signature_4764.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 99)), temp_8.readProperty_mStandaloneFunctionName ().readProperty_location (), inCompiler COMMA_HERE) ;
  GGS_bool var_implementedPublic_5125 ;
  GGS_routineTypedSignature var_formalSignature_5152 ;
  GGS_unifiedTypeMapEntry var_formalReturnTypeProxy_5177 ;
  GGS_routineLLVMNameDict var_implementedModeDictionary_5236 ;
  GGS_bool var_isExported_5278 ;
  GGS_mode var_implementedMode_5305 ;
  constinArgument_inContext.readProperty_mRoutineMap ().method_searchKey (var_requiredFunctionMangledName_4884, var_implementedPublic_5125, var_formalSignature_5152, var_formalReturnTypeProxy_5177, var_implementedModeDictionary_5236, var_isExported_5278, var_implementedMode_5305, inCompiler COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 101)) ;
  GalgasBool test_9 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_9) {
    test_9 = var_formalReturnTypeProxy_5177.getter_isNull (SOURCE_FILE ("expression-standalone-function-call.galgas", 111)).boolEnum () ;
    if (GalgasBool::boolTrue == test_9) {
      TC_Array <FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (var_requiredFunctionMangledName_4884.readProperty_location (), GGS_string ("this function does not return any value"), fixItArray10  COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 112)) ;
      outArgument_outFunctionCallReturnedValue.drop () ; // Release error dropped variable
    }
  }
  if (GalgasBool::boolFalse == test_9) {
    GGS_string var_functionLLVMName_5555 = function_checkModeAndReturnsRoutineLLVMName (var_implementedModeDictionary_5236, constinArgument_inMode, var_requiredFunctionMangledName_4884, inCompiler COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 115)) ;
    GGS_procCallEffectiveParameterListIR temp_11 = GGS_procCallEffectiveParameterListIR::init (inCompiler COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 117)) ;
    GGS_procCallEffectiveParameterListIR var_effectiveParameterListIR_5753 = temp_11 ;
    {
    const GGS_standaloneFunctionInExpressionAST temp_12 = this ;
    routine_analyzeEffectiveParameters_3F_self_3F_routineAttributes_3F_formal_3F_effective_3F_errorLocation_3F_context_3F_requiredMode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_26_effectiveIR (constinArgument_inSelfType, constinArgument_inRoutineAttributes, var_formalSignature_5152, temp_12.readProperty_mArguments (), var_requiredFunctionMangledName_4884.readProperty_location (), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_effectiveParameterListIR_5753, inCompiler  COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 118)) ;
    }
    {
    routine_getNewTempValue_3F__26__21_ (extensionGetter_type (var_formalReturnTypeProxy_5177, inCompiler COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 134)), ioArgument_ioTemporaries, outArgument_outFunctionCallReturnedValue, inCompiler  COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 134)) ;
    }
    ioArgument_ioInstructionGenerationList.addAssign_operation (GGS_standaloneRoutineCallIR::init_21__21__21__21_ (outArgument_outFunctionCallReturnedValue, var_routineLLVMName_4625, var_functionLLVMName_5555, var_effectiveParameterListIR_5753, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 136)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@constructorCallAST addDependenceEdgeForStaticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_constructorCallAST::method_addDependenceEdgeForStaticExpression (const GGS_lstring constinArgument_inConstantName,
                                                                           GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_constructorCallAST temp_0 = this ;
  ioArgument_ioGraph.setter_addEdge (constinArgument_inConstantName, temp_0.readProperty_mTypeName () COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 49)) ;
  }
  const GGS_constructorCallAST temp_1 = this ;
  UpEnumerator_functionCallEffectiveParameterListAST enumerator_2104 (temp_1.readProperty_mParameterList ()) ;
  while (enumerator_2104.hasCurrentObject ()) {
    callExtensionMethod_addDependenceEdgeForStaticExpression ((cPtr_expressionAST *) enumerator_2104.current_mExpression (HERE).ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 52)) ;
    enumerator_2104.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@constructorCallAST noteExpressionTypesInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_constructorCallAST::method_noteExpressionTypesInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_constructorCallAST temp_0 = this ;
  ioArgument_ioGraph.setter_noteNode (temp_0.readProperty_mTypeName () COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 61)) ;
  }
  const GGS_constructorCallAST temp_1 = this ;
  UpEnumerator_functionCallEffectiveParameterListAST enumerator_2715 (temp_1.readProperty_mParameterList ()) ;
  while (enumerator_2715.hasCurrentObject ()) {
    callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((cPtr_expressionAST *) enumerator_2715.current_mExpression (HERE).ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 63)) ;
    enumerator_2715.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@constructorCallAST analyzeExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_constructorCallAST::method_analyzeExpression (const GGS_omnibusType constinArgument_inSelfType,
                                                        const GGS_routineAttributes constinArgument_inRoutineAttributes,
                                                        const GGS_omnibusType /* constinArgument_inOptionalTargetType */,
                                                        const GGS_semanticContext constinArgument_inContext,
                                                        const GGS_mode constinArgument_inMode,
                                                        GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                        GGS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                        GGS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                        GGS_allocaList & ioArgument_ioAllocaList,
                                                        GGS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                        GGS_objectIR & outArgument_outResult,
                                                        Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_constructorKey_3783 = GGS_string ("(") ;
  const GGS_constructorCallAST temp_0 = this ;
  UpEnumerator_functionCallEffectiveParameterListAST enumerator_3820 (temp_0.readProperty_mParameterList ()) ;
  while (enumerator_3820.hasCurrentObject ()) {
    var_constructorKey_3783.plusAssign_operation(GGS_string ("!").add_operation (enumerator_3820.current_mSelector (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 87)), inCompiler  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 87)) ;
    enumerator_3820.gotoNextObject () ;
  }
  var_constructorKey_3783.plusAssign_operation(GGS_string (")"), inCompiler  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 89)) ;
  const GGS_constructorCallAST temp_1 = this ;
  GGS_omnibusType var_resultType_3972 = extensionGetter_type (extensionGetter_searchKey (constinArgument_inContext.readProperty_mTypeMap (), temp_1.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 91)), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 91)) ;
  const GGS_constructorCallAST temp_2 = this ;
  GGS_lstring var_typeName_4045 = GGS_lstring::init_21__21_ (var_resultType_3972.readProperty_omnibusTypeDescriptionName (), temp_2.readProperty_mErrorLocation (), inCompiler COMMA_HERE) ;
  GGS_constructorMap var_constructorMap_4185 ;
  constinArgument_inContext.readProperty_mTypeConstructorMap ().method_searchKey (var_typeName_4045, var_constructorMap_4185, inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 93)) ;
  GGS_constructorSignature var_constructorSignature_4327 ;
  GGS_constructorValue var_initValue_4353 ;
  const GGS_constructorCallAST temp_3 = this ;
  var_constructorMap_4185.method_searchKey (GGS_lstring::init_21__21_ (var_constructorKey_3783, temp_3.readProperty_mErrorLocation (), inCompiler COMMA_HERE), var_constructorSignature_4327, var_initValue_4353, inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 95)) ;
  switch (var_initValue_4353.enumValue ()) {
  case GGS_constructorValue::Enumeration::invalid:
    break ;
  case GGS_constructorValue::Enumeration::enum_arrayValue:
    {
      GGS_omnibusType extractedValue_4426_elementType_0 ;
      GGS_uint extractedValue_4438_size_1 ;
      var_initValue_4353.getAssociatedValuesFor_arrayValue (extractedValue_4426_elementType_0, extractedValue_4438_size_1) ;
      GalgasBool test_4 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_4) {
        test_4 = GGS_bool (ComparisonKind::equal, var_constructorKey_3783.objectCompare (GGS_string ("(!repeated)"))).boolEnum () ;
        if (GalgasBool::boolTrue == test_4) {
          const GGS_constructorCallAST temp_5 = this ;
          GGS_expressionAST var_expression_4500 = temp_5.readProperty_mParameterList ().getter_mExpressionAtIndex (GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 100)) ;
          GGS_objectIR var_expressionResult_4984 ;
          callExtensionMethod_analyzeExpression ((cPtr_expressionAST *) var_expression_4500.ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, extractedValue_4426_elementType_0, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_expressionResult_4984, inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 101)) ;
          const GGS_constructorCallAST temp_6 = this ;
          GGS_objectIR var_result_5019 = function_checkAssignmentCompatibility (constinArgument_inContext.readProperty_mAssignmentOperatorMap (), var_expressionResult_4984, extractedValue_4426_elementType_0, temp_6.readProperty_mParameterList ().getter_mSelectorAtIndex (GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 118)).readProperty_location (), GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 114)) ;
          GalgasBool test_7 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_7) {
            test_7 = extensionGetter_isStatic (var_result_5019, inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 121)).boolEnum () ;
            if (GalgasBool::boolTrue == test_7) {
              GGS_uint var_idx_5335 = ioArgument_ioStaticEntityMap.readProperty_mGlobalStructuredConstantList ().getter_count (SOURCE_FILE ("expression-constructor-call.galgas", 122)) ;
              outArgument_outResult = GGS_objectIR::class_func_llvmArrayRepeatedStaticValue (var_resultType_3972, extractedValue_4438_size_1, var_result_5019, var_idx_5335  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 123)) ;
              GGS_operandIRList temp_8 = GGS_operandIRList::init (inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 124)) ;
              GGS_operandIRList var_operandIRList_5535 = temp_8 ;
              UpEnumerator_range enumerator_5578 (GGS_range (GGS_uint (uint32_t (0U)), extractedValue_4438_size_1.substract_operation (GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 125)))) ;
              while (enumerator_5578.hasCurrentObject ()) {
                var_operandIRList_5535.addAssign_operation (var_result_5019  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 126)) ;
                enumerator_5578.gotoNextObject () ;
              }
              ioArgument_ioStaticEntityMap.mProperty_mGlobalStructuredConstantList.addAssign_operation (var_resultType_3972, var_operandIRList_5535  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 128)) ;
            }
          }
          if (GalgasBool::boolFalse == test_7) {
            outArgument_outResult = GGS_objectIR::class_func_llvmArrayRepeatedDynamicValue (var_resultType_3972, extractedValue_4438_size_1, var_result_5019  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 130)) ;
          }
        }
      }
      if (GalgasBool::boolFalse == test_4) {
        GGS_string var_individualConstructor_5859 = GGS_string ("(") ;
        UpEnumerator_range enumerator_5908 (GGS_range (GGS_uint (uint32_t (0U)), extractedValue_4438_size_1.substract_operation (GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 134)))) ;
        while (enumerator_5908.hasCurrentObject ()) {
          var_individualConstructor_5859.plusAssign_operation(GGS_string ("!"), inCompiler  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 135)) ;
          enumerator_5908.gotoNextObject () ;
        }
        var_individualConstructor_5859.plusAssign_operation(GGS_string (")"), inCompiler  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 137)) ;
        GalgasBool test_9 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_9) {
          test_9 = GGS_bool (ComparisonKind::equal, var_constructorKey_3783.objectCompare (var_individualConstructor_5859)).boolEnum () ;
          if (GalgasBool::boolTrue == test_9) {
            GGS_operandIRList temp_10 = GGS_operandIRList::init (inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 139)) ;
            GGS_operandIRList var_operandIRList_6079 = temp_10 ;
            GGS_bool var_resultIsStatic_6111 = GGS_bool (true) ;
            const GGS_constructorCallAST temp_11 = this ;
            UpEnumerator_functionCallEffectiveParameterListAST enumerator_6156 (temp_11.readProperty_mParameterList ()) ;
            while (enumerator_6156.hasCurrentObject ()) {
              GGS_objectIR var_expressionResult_6671 ;
              callExtensionMethod_analyzeExpression ((cPtr_expressionAST *) enumerator_6156.current_mExpression (HERE).ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, extractedValue_4426_elementType_0, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_expressionResult_6671, inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 142)) ;
              GGS_objectIR var_result_6714 = function_checkAssignmentCompatibility (constinArgument_inContext.readProperty_mAssignmentOperatorMap (), var_expressionResult_6671, extractedValue_4426_elementType_0, enumerator_6156.current_mSelector (HERE).readProperty_location (), GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 155)) ;
              var_operandIRList_6079.addAssign_operation (var_result_6714  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 162)) ;
              GGS_bool test_12 = var_resultIsStatic_6111 ;
              if (GalgasBool::boolTrue == test_12.boolEnum ()) {
                test_12 = extensionGetter_isStatic (var_result_6714, inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 163)) ;
              }
              var_resultIsStatic_6111 = test_12 ;
              enumerator_6156.gotoNextObject () ;
            }
            GalgasBool test_13 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_13) {
              test_13 = var_resultIsStatic_6111.boolEnum () ;
              if (GalgasBool::boolTrue == test_13) {
                GGS_uint var_idx_7133 = ioArgument_ioStaticEntityMap.readProperty_mGlobalStructuredConstantList ().getter_count (SOURCE_FILE ("expression-constructor-call.galgas", 166)) ;
                outArgument_outResult = GGS_objectIR::class_func_llvmArrayStaticValues (var_resultType_3972, var_operandIRList_6079, var_idx_7133  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 167)) ;
                ioArgument_ioStaticEntityMap.mProperty_mGlobalStructuredConstantList.addAssign_operation (var_resultType_3972, var_operandIRList_6079  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 168)) ;
              }
            }
            if (GalgasBool::boolFalse == test_13) {
              outArgument_outResult = GGS_objectIR::class_func_llvmArrayDynamicValues (var_resultType_3972, var_operandIRList_6079  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 170)) ;
            }
          }
        }
        if (GalgasBool::boolFalse == test_9) {
          const GGS_constructorCallAST temp_14 = this ;
          TC_Array <FixItDescription> fixItArray15 ;
          inCompiler->emitSemanticError (temp_14.readProperty_mErrorLocation (), GGS_string ("invalid constructor"), fixItArray15  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 173)) ;
          outArgument_outResult.drop () ; // Release error dropped variable
        }
      }
    }
    break ;
  case GGS_constructorValue::Enumeration::enum_null:
    {
      outArgument_outResult = GGS_objectIR::class_func_null (var_resultType_3972  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 177)) ;
    }
    break ;
  case GGS_constructorValue::Enumeration::enum_simple:
    {
      GGS_bigint extractedValue_7663_value_0 ;
      var_initValue_4353.getAssociatedValuesFor_simple (extractedValue_7663_value_0) ;
      GalgasBool test_16 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_16) {
        const GGS_constructorCallAST temp_17 = this ;
        test_16 = GGS_bool (ComparisonKind::notEqual, temp_17.readProperty_mParameterList ().getter_count (SOURCE_FILE ("expression-constructor-call.galgas", 179)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_16) {
          const GGS_constructorCallAST temp_18 = this ;
          TC_Array <FixItDescription> fixItArray19 ;
          inCompiler->emitSemanticError (temp_18.readProperty_mErrorLocation (), var_resultType_3972.readProperty_omnibusTypeDescriptionName ().add_operation (GGS_string (" constructor should have no parameter"), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 180)), fixItArray19  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 180)) ;
          outArgument_outResult.drop () ; // Release error dropped variable
        }
      }
      if (GalgasBool::boolFalse == test_16) {
        outArgument_outResult = GGS_objectIR::class_func_literalInteger (var_resultType_3972, extractedValue_7663_value_0  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 182)) ;
      }
    }
    break ;
  case GGS_constructorValue::Enumeration::enum_structure:
    {
      GGS_sortedOperandIRList extractedValue_7945_sortedOperandList_0 ;
      var_initValue_4353.getAssociatedValuesFor_structure (extractedValue_7945_sortedOperandList_0) ;
      GGS_sortedOperandIRList var_sortedOperandIRList_7974 = extractedValue_7945_sortedOperandList_0 ;
      GalgasBool test_20 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_20) {
        const GGS_constructorCallAST temp_21 = this ;
        test_20 = GGS_bool (ComparisonKind::notEqual, temp_21.readProperty_mParameterList ().getter_count (SOURCE_FILE ("expression-constructor-call.galgas", 186)).objectCompare (var_constructorSignature_4327.getter_count (SOURCE_FILE ("expression-constructor-call.galgas", 186)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_20) {
          const GGS_constructorCallAST temp_22 = this ;
          GGS_string temp_23 ;
          const GalgasBool test_24 = GGS_bool (ComparisonKind::greaterThan, var_constructorSignature_4327.getter_count (SOURCE_FILE ("expression-constructor-call.galgas", 188)).objectCompare (GGS_uint (uint32_t (1U)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_24) {
            temp_23 = GGS_string ("s") ;
          }else if (GalgasBool::boolFalse == test_24) {
            temp_23 = GGS_string::makeEmptyString () ;
          }
          const GGS_constructorCallAST temp_25 = this ;
          TC_Array <FixItDescription> fixItArray26 ;
          inCompiler->emitSemanticError (temp_22.readProperty_mErrorLocation (), GGS_string ("this constructor call should name ").add_operation (var_constructorSignature_4327.getter_count (SOURCE_FILE ("expression-constructor-call.galgas", 187)).getter_string (SOURCE_FILE ("expression-constructor-call.galgas", 187)), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 187)).add_operation (GGS_string (" parameter"), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 187)).add_operation (temp_23, inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 187)).add_operation (GGS_string (" instead of "), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 188)).add_operation (temp_25.readProperty_mParameterList ().getter_count (SOURCE_FILE ("expression-constructor-call.galgas", 189)).getter_string (SOURCE_FILE ("expression-constructor-call.galgas", 189)), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 189)), fixItArray26  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 187)) ;
          outArgument_outResult.drop () ; // Release error dropped variable
        }
      }
      if (GalgasBool::boolFalse == test_20) {
        const GGS_constructorCallAST temp_27 = this ;
        UpEnumerator_constructorSignature enumerator_8393 (var_constructorSignature_4327) ;
        UpEnumerator_functionCallEffectiveParameterListAST enumerator_8459 (temp_27.readProperty_mParameterList ()) ;
        while (enumerator_8393.hasCurrentObject () && enumerator_8459.hasCurrentObject ()) {
          GalgasBool test_28 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_28) {
            test_28 = GGS_bool (ComparisonKind::notEqual, enumerator_8459.current_mSelector (HERE).readProperty_string ().objectCompare (enumerator_8393.current_mSelector (HERE))).boolEnum () ;
            if (GalgasBool::boolTrue == test_28) {
              TC_Array <FixItDescription> fixItArray29 ;
              inCompiler->emitSemanticError (enumerator_8459.current_mSelector (HERE).readProperty_location (), GGS_string ("the selector should be '!").add_operation (enumerator_8393.current_mSelector (HERE), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 194)).add_operation (GGS_string (":'"), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 194)), fixItArray29  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 194)) ;
            }
          }
          GGS_objectIR var_expressionResult_9139 ;
          callExtensionMethod_analyzeExpression ((cPtr_expressionAST *) enumerator_8459.current_mExpression (HERE).ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, enumerator_8393.current_mType (HERE), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_expressionResult_9139, inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 196)) ;
          GGS_objectIR var_result_9178 = function_checkAssignmentCompatibility (constinArgument_inContext.readProperty_mAssignmentOperatorMap (), var_expressionResult_9139, enumerator_8393.current_mType (HERE), enumerator_8459.current_mSelector (HERE).readProperty_location (), GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 209)) ;
          {
          extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_result_9178, inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 216)) ;
          }
          var_sortedOperandIRList_7974.addAssign_operation (var_result_9178, enumerator_8393.current_mFieldIndex (HERE)  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 217)) ;
          enumerator_8393.gotoNextObject () ;
          enumerator_8459.gotoNextObject () ;
        }
        outArgument_outResult = GGS_objectIR::class_func_llvmStructureValue (var_resultType_3972, var_sortedOperandIRList_7974  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 219)) ;
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

GGS_location cPtr_compileTimeInfixOperatorAST::getter_locationForErrorSignaling (Compiler */* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_location result_outLocation ; // Returned variable
  const GGS_compileTimeInfixOperatorAST temp_0 = this ;
  result_outLocation = temp_0.readProperty_mInfixOperatorLocation () ;
//---
  return result_outLocation ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@compileTimeInfixOperatorAST enterInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_compileTimeInfixOperatorAST::method_enterInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_compileTimeInfixOperatorAST temp_0 = this ;
  const GGS_compileTimeInfixOperatorAST temp_1 = this ;
  const GGS_compileTimeInfixOperatorAST temp_2 = this ;
  const GGS_compileTimeInfixOperatorAST temp_3 = this ;
  GGS_lstring var_nodeName_5575 = GGS_lstring::init_21__21_ (extensionGetter_string (temp_0.readProperty_mInfixOperator (), inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 183)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 183)).add_operation (temp_1.readProperty_mLeftTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 183)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 183)).add_operation (temp_2.readProperty_mRightTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 183)), temp_3.readProperty_mInfixOperatorLocation (), inCompiler COMMA_HERE) ;
  {
  const GGS_compileTimeInfixOperatorAST temp_4 = this ;
  ioArgument_ioGraph.setter_addNode (var_nodeName_5575, temp_4, inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 184)) ;
  }
  {
  const GGS_compileTimeInfixOperatorAST temp_5 = this ;
  ioArgument_ioGraph.setter_addEdge (var_nodeName_5575, temp_5.readProperty_mLeftTypeName () COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 185)) ;
  }
  {
  const GGS_compileTimeInfixOperatorAST temp_6 = this ;
  ioArgument_ioGraph.setter_addEdge (var_nodeName_5575, temp_6.readProperty_mRightTypeName () COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 186)) ;
  }
  {
  const GGS_compileTimeInfixOperatorAST temp_7 = this ;
  ioArgument_ioGraph.setter_addEdge (var_nodeName_5575, temp_7.readProperty_mResultTypeName () COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 187)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (function_compileTimeDeclarationBarrier (inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 188)), var_nodeName_5575 COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 188)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@compileTimeInfixOperatorAST keyRepresentationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_compileTimeInfixOperatorAST::getter_keyRepresentationForErrorSignaling (Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outRepresentation ; // Returned variable
  const GGS_compileTimeInfixOperatorAST temp_0 = this ;
  const GGS_compileTimeInfixOperatorAST temp_1 = this ;
  const GGS_compileTimeInfixOperatorAST temp_2 = this ;
  result_outRepresentation = temp_0.readProperty_mLeftTypeName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 194)).add_operation (extensionGetter_string (temp_1.readProperty_mInfixOperator (), inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 194)), inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 194)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 194)).add_operation (temp_2.readProperty_mRightTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 194)) ;
//---
  return result_outRepresentation ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@compileTimeInfixOperatorAST enterInContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_compileTimeInfixOperatorAST::method_enterInContext (GGS_semanticContext & ioArgument_ioContext,
                                                              GGS_declarationDecorationList & /* ioArgument_ioDecoratedDeclarationList */,
                                                              GGS_decoratedRegularRoutineList & /* ioArgument_ioDecoratedRoutineList */,
                                                              GGS_routineListIR & /* ioArgument_ioRoutineListIR */,
                                                              GGS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                              GGS_staticEntityMap & /* ioArgument_ioStaticEntityMap */,
                                                              GGS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                              GGS_userLLVMTypeDefinitionListIR & /* ioArgument_ioUserLLVMTypeDefinitionListIR */,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_leftTypeProxy_7309 ;
  {
  const GGS_compileTimeInfixOperatorAST temp_0 = this ;
  extensionSetter_makeEntry (ioArgument_ioContext.mProperty_mTypeMap, temp_0.readProperty_mLeftTypeName (), var_leftTypeProxy_7309, inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 212)) ;
  }
  GGS_omnibusType var_leftType_7330 = extensionGetter_type (var_leftTypeProxy_7309, inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 213)) ;
  const GGS_compileTimeInfixOperatorAST temp_1 = this ;
  callExtensionMethod_checkIsCompileTimeType ((cPtr_omnibusType *) var_leftType_7330.ptr (), temp_1.readProperty_mLeftTypeName ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 214)) ;
  GGS_unifiedTypeMapEntry var_rightTypeProxy_7487 ;
  {
  const GGS_compileTimeInfixOperatorAST temp_2 = this ;
  extensionSetter_makeEntry (ioArgument_ioContext.mProperty_mTypeMap, temp_2.readProperty_mRightTypeName (), var_rightTypeProxy_7487, inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 215)) ;
  }
  GGS_omnibusType var_rightType_7509 = extensionGetter_type (var_rightTypeProxy_7487, inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 216)) ;
  const GGS_compileTimeInfixOperatorAST temp_3 = this ;
  callExtensionMethod_checkIsCompileTimeType ((cPtr_omnibusType *) var_rightType_7509.ptr (), temp_3.readProperty_mRightTypeName ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 217)) ;
  GGS_unifiedTypeMapEntry var_resultTypeProxy_7671 ;
  {
  const GGS_compileTimeInfixOperatorAST temp_4 = this ;
  extensionSetter_makeEntry (ioArgument_ioContext.mProperty_mTypeMap, temp_4.readProperty_mResultTypeName (), var_resultTypeProxy_7671, inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 218)) ;
  }
  GGS_omnibusType var_resultType_7694 = extensionGetter_type (var_resultTypeProxy_7671, inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 219)) ;
  const GGS_compileTimeInfixOperatorAST temp_5 = this ;
  callExtensionMethod_checkIsCompileTimeType ((cPtr_omnibusType *) var_resultType_7694.ptr (), temp_5.readProperty_mResultTypeName ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 220)) ;
  GGS_ctCheckMap temp_6 = GGS_ctCheckMap::init (inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 222)) ;
  GGS_ctCheckMap var_ctCheckMap_7855 = temp_6 ;
  {
  const GGS_compileTimeInfixOperatorAST temp_7 = this ;
  var_ctCheckMap_7855.setter_insertKey (temp_7.readProperty_mLeftOperandName (), inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 223)) ;
  }
  {
  const GGS_compileTimeInfixOperatorAST temp_8 = this ;
  var_ctCheckMap_7855.setter_insertKey (temp_8.readProperty_mRightOperandName (), inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 224)) ;
  }
  const GGS_compileTimeInfixOperatorAST temp_9 = this ;
  callExtensionMethod_checkCompileTimeExpression ((cPtr_ctExpressionAST *) temp_9.readProperty_mExpression ().ptr (), var_ctCheckMap_7855, inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 225)) ;
  const GGS_compileTimeInfixOperatorAST temp_10 = this ;
  const GGS_compileTimeInfixOperatorAST temp_11 = this ;
  GGS_lstring var_key_8074 = function_infixOperatorMapKey (var_leftType_7330, extensionGetter_omnibusInfixOperator (temp_10.readProperty_mInfixOperator (), inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 227)), temp_11.readProperty_mInfixOperatorLocation (), var_rightType_7509, inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 227)) ;
  const GGS_compileTimeInfixOperatorAST temp_12 = this ;
  const GGS_compileTimeInfixOperatorAST temp_13 = this ;
  const GGS_compileTimeInfixOperatorAST temp_14 = this ;
  GGS_compileTimeInfixOperatorUsage var_definition_8179 = GGS_compileTimeInfixOperatorUsage::init_21__21__21_ (temp_12.readProperty_mLeftOperandName (), temp_13.readProperty_mRightOperandName (), temp_14.readProperty_mExpression (), inCompiler COMMA_HERE) ;
  {
  ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_8074, var_resultType_7694, var_definition_8179, inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 233)) ;
  }
  GalgasBool test_15 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_15) {
    const GGS_compileTimeInfixOperatorAST temp_16 = this ;
    GGS_bool test_17 = GGS_bool (ComparisonKind::equal, temp_16.readProperty_mInfixOperator ().objectCompare (GGS_compileTimeInfixOperatorEnumeration::class_func_equal (SOURCE_FILE ("infix-operator-compile-time.galgas", 235)))) ;
    if (GalgasBool::boolTrue != test_17.boolEnum ()) {
      const GGS_compileTimeInfixOperatorAST temp_18 = this ;
      test_17 = GGS_bool (ComparisonKind::equal, temp_18.readProperty_mInfixOperator ().objectCompare (GGS_compileTimeInfixOperatorEnumeration::class_func_lessThan (SOURCE_FILE ("infix-operator-compile-time.galgas", 235)))) ;
    }
    test_15 = test_17.boolEnum () ;
    if (GalgasBool::boolTrue == test_15) {
      const GGS_compileTimeInfixOperatorAST temp_19 = this ;
      GGS_lstring var_equal_5F_key_8494 = function_infixOperatorMapKey (var_leftType_7330, GGS_omnibusInfixOperator::class_func_equal (SOURCE_FILE ("infix-operator-compile-time.galgas", 236)), temp_19.readProperty_mInfixOperatorLocation (), var_rightType_7509, inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 236)) ;
      const GGS_compileTimeInfixOperatorAST temp_20 = this ;
      GGS_lstring var_lessThan_5F_key_8594 = function_infixOperatorMapKey (var_leftType_7330, GGS_omnibusInfixOperator::class_func_lessThan (SOURCE_FILE ("infix-operator-compile-time.galgas", 237)), temp_20.readProperty_mInfixOperatorLocation (), var_rightType_7509, inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 237)) ;
      GalgasBool test_21 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_21) {
        test_21 = ioArgument_ioContext.readProperty_mInfixOperatorMap ().getter_hasKey (var_equal_5F_key_8494.readProperty_string () COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 238)).operator_and (ioArgument_ioContext.readProperty_mInfixOperatorMap ().getter_hasKey (var_lessThan_5F_key_8594.readProperty_string () COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 238)) COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 238)).boolEnum () ;
        if (GalgasBool::boolTrue == test_21) {
          GGS_omnibusInfixOperatorUsage var_equalOperatorUsage_8865 ;
          GGS_omnibusType joker_8857 ; // Joker input parameter
          ioArgument_ioContext.readProperty_mInfixOperatorMap ().method_searchKey (var_equal_5F_key_8494, joker_8857, var_equalOperatorUsage_8865, inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 239)) ;
          GGS_omnibusInfixOperatorUsage var_lessThanOperatorUsage_8950 ;
          GGS_omnibusType joker_8942 ; // Joker input parameter
          ioArgument_ioContext.readProperty_mInfixOperatorMap ().method_searchKey (var_lessThan_5F_key_8594, joker_8942, var_lessThanOperatorUsage_8950, inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 240)) ;
          GalgasBool test_22 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_22) {
            GGS_compileTimeInfixOperatorUsage var_eou_8984 (dynamic_cast <const cPtr_compileTimeInfixOperatorUsage *> (var_equalOperatorUsage_8865.ptr ())) ;
            if (nullptr == var_eou_8984.ptr ()) {
              test_22 = GalgasBool::boolFalse ;
            }
            if (GalgasBool::boolTrue == test_22) {
              GGS_compileTimeInfixOperatorUsage var_ltou_9055 (dynamic_cast <const cPtr_compileTimeInfixOperatorUsage *> (var_lessThanOperatorUsage_8950.ptr ())) ;
              if (nullptr == var_ltou_9055.ptr ()) {
                test_22 = GalgasBool::boolFalse ;
              }
              if (GalgasBool::boolTrue == test_22) {
                GGS_compileTimeInfixInfEqualOperatorUsage var_infEqual_5F_definition_9133 = GGS_compileTimeInfixInfEqualOperatorUsage::init_21__21_ (var_eou_8984, var_ltou_9055, inCompiler COMMA_HERE) ;
                const GGS_compileTimeInfixOperatorAST temp_23 = this ;
                GGS_lstring var_infEqual_5F_key_9217 = function_infixOperatorMapKey (var_leftType_7330, GGS_omnibusInfixOperator::class_func_infEqual (SOURCE_FILE ("infix-operator-compile-time.galgas", 244)), temp_23.readProperty_mInfixOperatorLocation (), var_rightType_7509, inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 244)) ;
                {
                ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_infEqual_5F_key_9217, var_resultType_7694, var_infEqual_5F_definition_9133, inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 245)) ;
                }
              }
            }
          }
        }
      }
    }
  }
  GalgasBool test_24 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_24) {
    const GGS_compileTimeInfixOperatorAST temp_25 = this ;
    test_24 = GGS_bool (ComparisonKind::equal, temp_25.readProperty_mInfixOperator ().objectCompare (GGS_compileTimeInfixOperatorEnumeration::class_func_addOp (SOURCE_FILE ("infix-operator-compile-time.galgas", 250)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_24) {
      const GGS_compileTimeInfixOperatorAST temp_26 = this ;
      GGS_lstring var_addOpNoOVF_5F_key_9513 = function_infixOperatorMapKey (var_leftType_7330, GGS_omnibusInfixOperator::class_func_addOpNoOvf (SOURCE_FILE ("infix-operator-compile-time.galgas", 251)), temp_26.readProperty_mInfixOperatorLocation (), var_rightType_7509, inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 251)) ;
      {
      ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_addOpNoOVF_5F_key_9513, var_resultType_7694, var_definition_8179, inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 252)) ;
      }
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@compileTimeInfixOperatorUsage generateCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_compileTimeInfixOperatorUsage::method_generateCode (const GGS_objectIR constinArgument_inLeftOperand,
                                                              const GGS_location /* constinArgument_inOperatorLocation */,
                                                              const GGS_objectIR constinArgument_inRightOperand,
                                                              const GGS_omnibusType constinArgument_inResultType,
                                                              GGS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                              GGS_allocaList & /* ioArgument_ioAllocaList */,
                                                              GGS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                              GGS_objectIR & outArgument_outResultValue,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bigint var_result_11374 ;
  const GGS_compileTimeInfixOperatorUsage temp_0 = this ;
  callExtensionMethod_eval ((cPtr_compileTimeInfixOperatorUsage *) temp_0.ptr (), constinArgument_inLeftOperand, constinArgument_inRightOperand, var_result_11374, inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 293)) ;
  outArgument_outResultValue = GGS_objectIR::class_func_literalInteger (constinArgument_inResultType, var_result_11374  COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 294)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@compileTimeInfixInfEqualOperatorUsage generateCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_compileTimeInfixInfEqualOperatorUsage::method_generateCode (const GGS_objectIR constinArgument_inLeftOperand,
                                                                      const GGS_location /* constinArgument_inOperatorLocation */,
                                                                      const GGS_objectIR constinArgument_inRightOperand,
                                                                      const GGS_omnibusType constinArgument_inResultType,
                                                                      GGS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                      GGS_allocaList & /* ioArgument_ioAllocaList */,
                                                                      GGS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                                      GGS_objectIR & outArgument_outResultValue,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bigint var_result_12341 ;
  const GGS_compileTimeInfixInfEqualOperatorUsage temp_0 = this ;
  callExtensionMethod_eval ((cPtr_compileTimeInfixOperatorUsage *) temp_0.readProperty_mEqualOperatorUsage ().ptr (), constinArgument_inLeftOperand, constinArgument_inRightOperand, var_result_12341, inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 316)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::equal, var_result_12341.objectCompare (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 317)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_compileTimeInfixInfEqualOperatorUsage temp_2 = this ;
      callExtensionMethod_eval ((cPtr_compileTimeInfixOperatorUsage *) temp_2.readProperty_mLessThanOperatorUsage ().ptr (), constinArgument_inLeftOperand, constinArgument_inRightOperand, var_result_12341, inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 318)) ;
    }
  }
  outArgument_outResultValue = GGS_objectIR::class_func_literalInteger (constinArgument_inResultType, var_result_12341  COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 320)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@llvmInfixOperatorAST locationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GGS_location cPtr_llvmInfixOperatorAST::getter_locationForErrorSignaling (Compiler */* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_location result_outLocation ; // Returned variable
  const GGS_llvmInfixOperatorAST temp_0 = this ;
  result_outLocation = temp_0.readProperty_mInfixOperatorLocation () ;
//---
  return result_outLocation ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'appendInfixOperatorDeclaration????&'
//
//--------------------------------------------------------------------------------------------------

void routine_appendInfixOperatorDeclaration_3F__3F__3F__3F__26_ (const GGS_omnibusInfixOperator constinArgument_inInfixOperator,
                                                                 const GGS_string constinArgument_inLLVMOperation,
                                                                 const GGS_string constinArgument_inTypeName,
                                                                 const GGS_string constinArgument_inResultOmnibusTypeName,
                                                                 GGS_semanticTypePrecedenceGraph & ioArgument_ioPrecedenceGraph,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_llvmGenerationInstructionList temp_0 = GGS_llvmGenerationInstructionList::init (inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 36)) ;
  GGS_llvmGenerationInstructionList var_llvmInstructionList_1668 = temp_0 ;
  GGS_llvmGenerationInstructionElementList temp_1 = GGS_llvmGenerationInstructionElementList::init (inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 37)) ;
  GGS_llvmGenerationInstructionElementList var_instructionElements_1738 = temp_1 ;
  var_instructionElements_1738.addAssign_operation (GGS_llvmGenerationInstructionElement::class_func_symbol (GGS_string ("result").getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 38))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 38))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 38)) ;
  var_instructionElements_1738.addAssign_operation (GGS_llvmGenerationInstructionElement::class_func_string (GGS_string (" = ").add_operation (constinArgument_inLLVMOperation, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 39)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 39))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 39))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 39)) ;
  var_instructionElements_1738.addAssign_operation (GGS_llvmGenerationInstructionElement::class_func_type (GGS_string ("LEFT").getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 40))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 40))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 40)) ;
  var_instructionElements_1738.addAssign_operation (GGS_llvmGenerationInstructionElement::class_func_string (GGS_string (" ")  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 41))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 41)) ;
  var_instructionElements_1738.addAssign_operation (GGS_llvmGenerationInstructionElement::class_func_symbol (GGS_string ("LEFT").getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 42))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 42))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 42)) ;
  var_instructionElements_1738.addAssign_operation (GGS_llvmGenerationInstructionElement::class_func_string (GGS_string (", ")  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 43))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 43)) ;
  var_instructionElements_1738.addAssign_operation (GGS_llvmGenerationInstructionElement::class_func_symbol (GGS_string ("RIGHT").getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 44))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 44))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 44)) ;
  var_llvmInstructionList_1668.addAssign_operation (GGS_llvmGenerationInstruction::init_21_ (var_instructionElements_1738, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 45)) ;
  GGS_genericFormalParameterList temp_2 = GGS_genericFormalParameterList::init (inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 51)) ;
  GGS_genericFormalParameterList temp_3 = GGS_genericFormalParameterList::init (inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 54)) ;
  GGS_genericFormalParameterList temp_4 = GGS_genericFormalParameterList::init (inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 56)) ;
  GGS_abstractDeclarationAST var_declaration_2284 = GGS_llvmInfixOperatorAST::init_21__21__21__21__21__21__21__21__21__21__21_ (constinArgument_inInfixOperator, GGS_location::class_func_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 48)), GGS_string ("LEFT").getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 49)), constinArgument_inTypeName.getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 50)), temp_2, GGS_string ("RIGHT").getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 52)), constinArgument_inTypeName.getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 53)), temp_3, constinArgument_inResultOmnibusTypeName.getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 55)), temp_4, var_llvmInstructionList_1668, inCompiler COMMA_HERE) ;
  callExtensionMethod_enterInPrecedenceGraph ((cPtr_abstractDeclarationAST *) var_declaration_2284.ptr (), ioArgument_ioPrecedenceGraph, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 59)) ;
  GGS_llvmGenerationInstructionList temp_5 = GGS_llvmGenerationInstructionList::init (inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 61)) ;
  var_llvmInstructionList_1668 = temp_5 ;
  GGS_llvmGenerationInstructionElementList temp_6 = GGS_llvmGenerationInstructionElementList::init (inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 62)) ;
  var_instructionElements_1738 = temp_6 ;
  var_instructionElements_1738.addAssign_operation (GGS_llvmGenerationInstructionElement::class_func_symbol (GGS_string ("result").getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 63))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 63))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 63)) ;
  var_instructionElements_1738.addAssign_operation (GGS_llvmGenerationInstructionElement::class_func_string (GGS_string (" = ").add_operation (constinArgument_inLLVMOperation, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 64)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 64))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 64))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 64)) ;
  var_instructionElements_1738.addAssign_operation (GGS_llvmGenerationInstructionElement::class_func_type (GGS_string ("LEFT").getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 65))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 65))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 65)) ;
  var_instructionElements_1738.addAssign_operation (GGS_llvmGenerationInstructionElement::class_func_string (GGS_string (" ")  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 66))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 66)) ;
  var_instructionElements_1738.addAssign_operation (GGS_llvmGenerationInstructionElement::class_func_symbol (GGS_string ("LEFT").getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 67))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 67))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 67)) ;
  var_instructionElements_1738.addAssign_operation (GGS_llvmGenerationInstructionElement::class_func_string (GGS_string (", ")  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 68))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 68)) ;
  var_instructionElements_1738.addAssign_operation (GGS_llvmGenerationInstructionElement::class_func_symbol (GGS_string ("RIGHT").getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 69))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 69))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 69)) ;
  var_llvmInstructionList_1668.addAssign_operation (GGS_llvmGenerationInstruction::init_21_ (var_instructionElements_1738, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 70)) ;
  GGS_genericFormalParameterList temp_7 = GGS_genericFormalParameterList::init (inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 76)) ;
  GGS_genericFormalParameterList temp_8 = GGS_genericFormalParameterList::init (inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 79)) ;
  GGS_genericFormalParameterList temp_9 = GGS_genericFormalParameterList::init (inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 81)) ;
  var_declaration_2284 = GGS_llvmInfixOperatorAST::init_21__21__21__21__21__21__21__21__21__21__21_ (constinArgument_inInfixOperator, GGS_location::class_func_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 73)), GGS_string ("LEFT").getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 74)), constinArgument_inTypeName.getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 75)), temp_7, GGS_string ("RIGHT").getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 77)), function_ctIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 78)).getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 78)), temp_8, constinArgument_inResultOmnibusTypeName.getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 80)), temp_9, var_llvmInstructionList_1668, inCompiler COMMA_HERE) ;
  callExtensionMethod_enterInPrecedenceGraph ((cPtr_abstractDeclarationAST *) var_declaration_2284.ptr (), ioArgument_ioPrecedenceGraph, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 84)) ;
  GGS_llvmGenerationInstructionList temp_10 = GGS_llvmGenerationInstructionList::init (inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 86)) ;
  var_llvmInstructionList_1668 = temp_10 ;
  GGS_llvmGenerationInstructionElementList temp_11 = GGS_llvmGenerationInstructionElementList::init (inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 87)) ;
  var_instructionElements_1738 = temp_11 ;
  var_instructionElements_1738.addAssign_operation (GGS_llvmGenerationInstructionElement::class_func_symbol (GGS_string ("result").getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 88))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 88))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 88)) ;
  var_instructionElements_1738.addAssign_operation (GGS_llvmGenerationInstructionElement::class_func_string (GGS_string (" = ").add_operation (constinArgument_inLLVMOperation, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 89)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 89))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 89))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 89)) ;
  var_instructionElements_1738.addAssign_operation (GGS_llvmGenerationInstructionElement::class_func_type (GGS_string ("RIGHT").getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 90))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 90))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 90)) ;
  var_instructionElements_1738.addAssign_operation (GGS_llvmGenerationInstructionElement::class_func_string (GGS_string (" ")  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 91))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 91)) ;
  var_instructionElements_1738.addAssign_operation (GGS_llvmGenerationInstructionElement::class_func_symbol (GGS_string ("LEFT").getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 92))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 92))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 92)) ;
  var_instructionElements_1738.addAssign_operation (GGS_llvmGenerationInstructionElement::class_func_string (GGS_string (", ")  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 93))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 93)) ;
  var_instructionElements_1738.addAssign_operation (GGS_llvmGenerationInstructionElement::class_func_symbol (GGS_string ("RIGHT").getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 94))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 94))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 94)) ;
  var_llvmInstructionList_1668.addAssign_operation (GGS_llvmGenerationInstruction::init_21_ (var_instructionElements_1738, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 95)) ;
  GGS_genericFormalParameterList temp_12 = GGS_genericFormalParameterList::init (inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 101)) ;
  GGS_genericFormalParameterList temp_13 = GGS_genericFormalParameterList::init (inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 104)) ;
  GGS_genericFormalParameterList temp_14 = GGS_genericFormalParameterList::init (inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 106)) ;
  var_declaration_2284 = GGS_llvmInfixOperatorAST::init_21__21__21__21__21__21__21__21__21__21__21_ (constinArgument_inInfixOperator, GGS_location::class_func_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 98)), GGS_string ("LEFT").getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 99)), function_ctIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 100)).getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 100)), temp_12, GGS_string ("RIGHT").getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 102)), constinArgument_inTypeName.getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 103)), temp_13, constinArgument_inResultOmnibusTypeName.getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 105)), temp_14, var_llvmInstructionList_1668, inCompiler COMMA_HERE) ;
  callExtensionMethod_enterInPrecedenceGraph ((cPtr_abstractDeclarationAST *) var_declaration_2284.ptr (), ioArgument_ioPrecedenceGraph, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 109)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@llvmInfixOperatorAST enterInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_llvmInfixOperatorAST::method_enterInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_llvmInfixOperatorAST temp_0 = this ;
  const GGS_llvmInfixOperatorAST temp_1 = this ;
  const GGS_llvmInfixOperatorAST temp_2 = this ;
  const GGS_llvmInfixOperatorAST temp_3 = this ;
  GGS_lstring var_nodeName_6381 = GGS_lstring::init_21__21_ (extensionGetter_string (temp_0.readProperty_mInfixOperator (), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 161)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 161)).add_operation (temp_1.readProperty_mLeftTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 161)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 161)).add_operation (temp_2.readProperty_mRightTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 161)), temp_3.readProperty_mInfixOperatorLocation (), inCompiler COMMA_HERE) ;
  {
  const GGS_llvmInfixOperatorAST temp_4 = this ;
  ioArgument_ioGraph.setter_addNode (var_nodeName_6381, temp_4, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 162)) ;
  }
  {
  const GGS_llvmInfixOperatorAST temp_5 = this ;
  ioArgument_ioGraph.setter_addEdge (var_nodeName_6381, temp_5.readProperty_mLeftTypeName () COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 163)) ;
  }
  {
  const GGS_llvmInfixOperatorAST temp_6 = this ;
  ioArgument_ioGraph.setter_addEdge (var_nodeName_6381, temp_6.readProperty_mRightTypeName () COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 164)) ;
  }
  {
  const GGS_llvmInfixOperatorAST temp_7 = this ;
  ioArgument_ioGraph.setter_addEdge (var_nodeName_6381, temp_7.readProperty_mResultTypeName () COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 165)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@llvmInfixOperatorAST keyRepresentationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_llvmInfixOperatorAST::getter_keyRepresentationForErrorSignaling (Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outRepresentation ; // Returned variable
  const GGS_llvmInfixOperatorAST temp_0 = this ;
  const GGS_llvmInfixOperatorAST temp_1 = this ;
  const GGS_llvmInfixOperatorAST temp_2 = this ;
  result_outRepresentation = temp_0.readProperty_mLeftTypeName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 171)).add_operation (extensionGetter_string (temp_1.readProperty_mInfixOperator (), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 171)), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 171)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 171)).add_operation (temp_2.readProperty_mRightTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 171)) ;
//---
  return result_outRepresentation ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@llvmInfixOperatorAST enterInContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_llvmInfixOperatorAST::method_enterInContext (GGS_semanticContext & ioArgument_ioContext,
                                                       GGS_declarationDecorationList & /* ioArgument_ioDecoratedDeclarationList */,
                                                       GGS_decoratedRegularRoutineList & /* ioArgument_ioDecoratedRoutineList */,
                                                       GGS_routineListIR & ioArgument_ioRoutineListIR,
                                                       GGS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                       GGS_staticEntityMap & /* ioArgument_ioStaticEntityMap */,
                                                       GGS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                       GGS_userLLVMTypeDefinitionListIR & /* ioArgument_ioUserLLVMTypeDefinitionListIR */,
                                                       Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_leftTypeProxy_8028 ;
  {
  const GGS_llvmInfixOperatorAST temp_0 = this ;
  extensionSetter_makeEntry (ioArgument_ioContext.mProperty_mTypeMap, temp_0.readProperty_mLeftTypeName (), var_leftTypeProxy_8028, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 189)) ;
  }
  GGS_omnibusType var_leftType_8049 = extensionGetter_type (var_leftTypeProxy_8028, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 190)) ;
  GGS_unifiedTypeMapEntry var_rightTypeProxy_8141 ;
  {
  const GGS_llvmInfixOperatorAST temp_1 = this ;
  extensionSetter_makeEntry (ioArgument_ioContext.mProperty_mTypeMap, temp_1.readProperty_mRightTypeName (), var_rightTypeProxy_8141, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 191)) ;
  }
  GGS_omnibusType var_rightType_8163 = extensionGetter_type (var_rightTypeProxy_8141, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 192)) ;
  GGS_unifiedTypeMapEntry var_resultTypeProxy_8258 ;
  {
  const GGS_llvmInfixOperatorAST temp_2 = this ;
  extensionSetter_makeEntry (ioArgument_ioContext.mProperty_mTypeMap, temp_2.readProperty_mResultTypeName (), var_resultTypeProxy_8258, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 193)) ;
  }
  GGS_omnibusType var_resultType_8281 = extensionGetter_type (var_resultTypeProxy_8258, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 194)) ;
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    test_3 = callExtensionGetter_isCompileTimeType ((const cPtr_omnibusType *) var_leftType_8049.ptr (), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 195)).operator_and (callExtensionGetter_isCompileTimeType ((const cPtr_omnibusType *) var_rightType_8163.ptr (), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 195)) COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 195)).boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      const GGS_llvmInfixOperatorAST temp_4 = this ;
      TC_Array <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.readProperty_mInfixOperatorLocation (), GGS_string ("one of the two argument types should not be a compile time type"), fixItArray5  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 196)) ;
    }
  }
  const GGS_llvmInfixOperatorAST temp_6 = this ;
  callExtensionMethod_checkIsNotCompileTimeType ((cPtr_omnibusType *) var_resultType_8281.ptr (), temp_6.readProperty_mResultTypeName ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 198)) ;
  const GGS_llvmInfixOperatorAST temp_7 = this ;
  const GGS_llvmInfixOperatorAST temp_8 = this ;
  GGS_lstring var_key_8613 = function_infixOperatorMapKey (var_leftType_8049, temp_7.readProperty_mInfixOperator (), temp_8.readProperty_mInfixOperatorLocation (), var_rightType_8163, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 200)) ;
  GalgasBool test_9 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_9) {
    test_9 = callExtensionGetter_isCompileTimeType ((const cPtr_omnibusType *) var_leftType_8049.ptr (), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 202)).operator_not (SOURCE_FILE ("infix-operator-llvm.galgas", 202)).operator_and (callExtensionGetter_isCompileTimeType ((const cPtr_omnibusType *) var_rightType_8163.ptr (), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 202)).operator_not (SOURCE_FILE ("infix-operator-llvm.galgas", 202)) COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 202)).boolEnum () ;
    if (GalgasBool::boolTrue == test_9) {
      const GGS_llvmInfixOperatorAST temp_10 = this ;
      const GGS_llvmInfixOperatorAST temp_11 = this ;
      const GGS_llvmInfixOperatorAST temp_12 = this ;
      const GGS_llvmInfixOperatorAST temp_13 = this ;
      GGS_llvmInfixOperatorUsage var_definition_8822 = GGS_llvmInfixOperatorUsage::init_21__21__21__21_ (function_infixOperatorFunctionName (var_leftType_8049, temp_10.readProperty_mInfixOperator (), var_rightType_8163, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 204)), temp_11.readProperty_mLeftOperandName (), temp_12.readProperty_mRightOperandName (), temp_13.readProperty_mInstructionList (), inCompiler COMMA_HERE) ;
      {
      ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_8613, var_resultType_8281, var_definition_8822, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 209)) ;
      }
      GGS_assignmentGenerationVarMap temp_14 = GGS_assignmentGenerationVarMap::init (inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 210)) ;
      GGS_assignmentGenerationVarMap var_varMap_9143 = temp_14 ;
      {
      const GGS_llvmInfixOperatorAST temp_15 = this ;
      const GGS_llvmInfixOperatorAST temp_16 = this ;
      var_varMap_9143.setter_insertKey (temp_15.readProperty_mLeftOperandName (), GGS_string ("%").add_operation (temp_16.readProperty_mLeftOperandName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 211)), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 211)) ;
      }
      {
      const GGS_llvmInfixOperatorAST temp_17 = this ;
      const GGS_llvmInfixOperatorAST temp_18 = this ;
      var_varMap_9143.setter_insertKey (temp_17.readProperty_mRightOperandName (), GGS_string ("%").add_operation (temp_18.readProperty_mRightOperandName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 212)), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 212)) ;
      }
      GGS_assignmentGenerationVarMap temp_19 = GGS_assignmentGenerationVarMap::init (inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 213)) ;
      GGS_assignmentGenerationVarMap var_typeMap_9348 = temp_19 ;
      GalgasBool test_20 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_20) {
        test_20 = callExtensionGetter_isCompileTimeType ((const cPtr_omnibusType *) var_leftType_8049.ptr (), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 214)).operator_not (SOURCE_FILE ("infix-operator-llvm.galgas", 214)).boolEnum () ;
        if (GalgasBool::boolTrue == test_20) {
          {
          const GGS_llvmInfixOperatorAST temp_21 = this ;
          var_typeMap_9348.setter_insertKey (temp_21.readProperty_mLeftOperandName (), callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) var_leftType_8049.ptr (), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 215)), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 215)) ;
          }
        }
      }
      GalgasBool test_22 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_22) {
        test_22 = callExtensionGetter_isCompileTimeType ((const cPtr_omnibusType *) var_rightType_8163.ptr (), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 217)).operator_not (SOURCE_FILE ("infix-operator-llvm.galgas", 217)).boolEnum () ;
        if (GalgasBool::boolTrue == test_22) {
          {
          const GGS_llvmInfixOperatorAST temp_23 = this ;
          var_typeMap_9348.setter_insertKey (temp_23.readProperty_mRightOperandName (), callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) var_rightType_8163.ptr (), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 218)), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 218)) ;
          }
        }
      }
      {
      var_typeMap_9348.setter_insertKey (GGS_string ("result").getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 220)), callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) var_resultType_8281.ptr (), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 220)), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 220)) ;
      }
      GGS_llvmGenerationInstructionList temp_24 = GGS_llvmGenerationInstructionList::init (inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 221)) ;
      GGS_llvmGenerationInstructionList var_instructionList_9735 = temp_24 ;
      var_instructionList_9735.addAssign_operation (GGS_llvmVarInstruction::init_21_ (GGS_string ("result").getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 222)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 222)) ;
      const GGS_llvmInfixOperatorAST temp_25 = this ;
      var_instructionList_9735.plusAssign_operation(temp_25.readProperty_mInstructionList (), inCompiler  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 223)) ;
      {
      extensionSetter_appendReturn (var_instructionList_9735, GGS_string ("result").getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 224)), GGS_string ("result").getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 224)), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 224)) ;
      }
      GGS_stringlist temp_26 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 225)) ;
      GGS_stringlist var_generatedInstructions_9965 = temp_26 ;
      GGS_allocaList temp_27 = GGS_allocaList::init (inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 226)) ;
      GGS_allocaList var_allocaList_10013 = temp_27 ;
      GGS_uint var_temporaryIndex_10044 = GGS_uint (uint32_t (0U)) ;
      extensionMethod_generateIRCode (var_instructionList_9735, var_varMap_9143, var_typeMap_9348, var_generatedInstructions_9965, var_temporaryIndex_10044, var_allocaList_10013, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 228)) ;
      const GGS_llvmInfixOperatorAST temp_28 = this ;
      const GGS_llvmInfixOperatorAST temp_29 = this ;
      const GGS_llvmInfixOperatorAST temp_30 = this ;
      const GGS_llvmInfixOperatorAST temp_31 = this ;
      GGS_infixOperatorRoutineIR var_routine_10179 = GGS_infixOperatorRoutineIR::init_21__21_isRequired_21_warnsIfUnused_21__21__21__21__21__21__21_ (GGS_lstring::init_21__21_ (function_infixOperatorFunctionName (var_leftType_8049, temp_28.readProperty_mInfixOperator (), var_rightType_8163, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 230)), temp_29.readProperty_mInfixOperatorLocation (), inCompiler COMMA_HERE), GGS_bool (true), GGS_bool (false), var_leftType_8049, temp_30.readProperty_mLeftOperandName ().readProperty_string (), var_rightType_8163, temp_31.readProperty_mRightOperandName ().readProperty_string (), var_resultType_8281, var_generatedInstructions_9965, var_allocaList_10013, inCompiler COMMA_HERE) ;
      ioArgument_ioRoutineListIR.addAssign_operation (var_routine_10179  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 241)) ;
    }
  }
  if (GalgasBool::boolFalse == test_9) {
    const GGS_llvmInfixOperatorAST temp_32 = this ;
    const GGS_llvmInfixOperatorAST temp_33 = this ;
    const GGS_llvmInfixOperatorAST temp_34 = this ;
    GGS_llvmInlineInfixOperatorUsage var_definition_10640 = GGS_llvmInlineInfixOperatorUsage::init_21__21__21_ (temp_32.readProperty_mLeftOperandName (), temp_33.readProperty_mRightOperandName (), temp_34.readProperty_mInstructionList (), inCompiler COMMA_HERE) ;
    {
    ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_8613, var_resultType_8281, var_definition_10640, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 248)) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@llvmInfixOperatorUsage generateCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_llvmInfixOperatorUsage::method_generateCode (const GGS_objectIR constinArgument_inLeftOperand,
                                                       const GGS_location constinArgument_inOperatorLocation,
                                                       const GGS_objectIR constinArgument_inRightOperand,
                                                       const GGS_omnibusType constinArgument_inResultType,
                                                       GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                       GGS_allocaList & /* ioArgument_ioAllocaList */,
                                                       GGS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                       GGS_objectIR & outArgument_outResultValue,
                                                       Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_objectIR var_leftOperand_11840 = constinArgument_inLeftOperand ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_leftOperand_11840, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 277)) ;
  }
  GGS_objectIR var_rightOperand_11975 = constinArgument_inRightOperand ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_rightOperand_11975, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 282)) ;
  }
  {
  routine_getNewTempValue_3F__26__21_ (constinArgument_inResultType, ioArgument_ioTemporaries, outArgument_outResultValue, inCompiler  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 287)) ;
  }
  GGS_procCallEffectiveParameterListIR temp_0 = GGS_procCallEffectiveParameterListIR::init (inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 288)) ;
  GGS_procCallEffectiveParameterListIR var_argumentList_12247 = temp_0 ;
  var_argumentList_12247.addAssign_operation (GGS_procEffectiveParameterPassingModeIR::class_func_output (SOURCE_FILE ("infix-operator-llvm.galgas", 289)), var_leftOperand_11840  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 289)) ;
  var_argumentList_12247.addAssign_operation (GGS_procEffectiveParameterPassingModeIR::class_func_output (SOURCE_FILE ("infix-operator-llvm.galgas", 290)), var_rightOperand_11975  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 290)) ;
  const GGS_llvmInfixOperatorUsage temp_1 = this ;
  const GGS_llvmInfixOperatorUsage temp_2 = this ;
  ioArgument_ioInstructionGenerationList.addAssign_operation (GGS_standaloneRoutineCallIR::init_21__21__21__21_ (outArgument_outResultValue, GGS_lstring::init_21__21_ (temp_1.readProperty_mInfixMangledFunctionName (), constinArgument_inOperatorLocation, inCompiler COMMA_HERE), temp_2.readProperty_mInfixMangledFunctionName (), var_argumentList_12247, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 291)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@llvmInlineInfixOperatorUsage generateCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_llvmInlineInfixOperatorUsage::method_generateCode (const GGS_objectIR constinArgument_inLeftOperand,
                                                             const GGS_location /* constinArgument_inOperatorLocation */,
                                                             const GGS_objectIR constinArgument_inRightOperand,
                                                             const GGS_omnibusType constinArgument_inResultType,
                                                             GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                             GGS_allocaList & ioArgument_ioAllocaList,
                                                             GGS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                             GGS_objectIR & outArgument_outResultValue,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_objectIR var_leftOperand_13368 = constinArgument_inLeftOperand ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_leftOperand_13368, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 321)) ;
  }
  GGS_objectIR var_rightOperand_13503 = constinArgument_inRightOperand ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_rightOperand_13503, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 326)) ;
  }
  {
  routine_getNewTempValue_3F__26__21_ (constinArgument_inResultType, ioArgument_ioTemporaries, outArgument_outResultValue, inCompiler  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 331)) ;
  }
  GGS_assignmentGenerationVarMap temp_0 = GGS_assignmentGenerationVarMap::init (inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 332)) ;
  GGS_assignmentGenerationVarMap var_varMap_13769 = temp_0 ;
  {
  const GGS_llvmInlineInfixOperatorUsage temp_1 = this ;
  var_varMap_13769.setter_insertKey (temp_1.readProperty_mLeftOperandName (), extensionGetter_llvmName (var_leftOperand_13368, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 333)), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 333)) ;
  }
  {
  const GGS_llvmInlineInfixOperatorUsage temp_2 = this ;
  var_varMap_13769.setter_insertKey (temp_2.readProperty_mRightOperandName (), extensionGetter_llvmName (var_rightOperand_13503, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 334)), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 334)) ;
  }
  {
  var_varMap_13769.setter_insertKey (GGS_string ("result").getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 335)), extensionGetter_llvmName (outArgument_outResultValue, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 335)), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 335)) ;
  }
  GGS_assignmentGenerationVarMap temp_3 = GGS_assignmentGenerationVarMap::init (inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 336)) ;
  GGS_assignmentGenerationVarMap var_typeMap_14028 = temp_3 ;
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    test_4 = callExtensionGetter_isCompileTimeType ((const cPtr_omnibusType *) extensionGetter_type (var_leftOperand_13368, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 337)).ptr (), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 337)).operator_not (SOURCE_FILE ("infix-operator-llvm.galgas", 337)).boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      {
      const GGS_llvmInlineInfixOperatorUsage temp_5 = this ;
      var_typeMap_14028.setter_insertKey (temp_5.readProperty_mLeftOperandName (), callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (var_leftOperand_13368, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 338)).ptr (), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 338)), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 338)) ;
      }
    }
  }
  GalgasBool test_6 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_6) {
    test_6 = callExtensionGetter_isCompileTimeType ((const cPtr_omnibusType *) extensionGetter_type (var_rightOperand_13503, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 340)).ptr (), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 340)).operator_not (SOURCE_FILE ("infix-operator-llvm.galgas", 340)).boolEnum () ;
    if (GalgasBool::boolTrue == test_6) {
      {
      const GGS_llvmInlineInfixOperatorUsage temp_7 = this ;
      var_typeMap_14028.setter_insertKey (temp_7.readProperty_mRightOperandName (), callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (var_rightOperand_13503, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 341)).ptr (), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 341)), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 341)) ;
      }
    }
  }
  GGS_stringlist temp_8 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 343)) ;
  GGS_stringlist var_generatedInstructions_14349 = temp_8 ;
  const GGS_llvmInlineInfixOperatorUsage temp_9 = this ;
  extensionMethod_generateIRCode (temp_9.readProperty_mInstructionList (), var_varMap_13769, var_typeMap_14028, var_generatedInstructions_14349, ioArgument_ioTemporaries.mProperty_mTemporaryIndex, ioArgument_ioAllocaList, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 344)) ;
  UpEnumerator_stringlist enumerator_14513 (var_generatedInstructions_14349) ;
  while (enumerator_14513.hasCurrentObject ()) {
    {
    GGS_stringset temp_10 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 346)) ;
    extensionSetter_appendInstructionAsFreeString (ioArgument_ioInstructionGenerationList, enumerator_14513.current_mValue (HERE), temp_10, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 346)) ;
    }
    enumerator_14513.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@infixOperatorRoutineIR llvmCodeGeneration'
//
//--------------------------------------------------------------------------------------------------

void cPtr_infixOperatorRoutineIR::method_llvmCodeGeneration (GGS_string & ioArgument_ioLLVMcode,
                                                             const GGS_generationContext /* constinArgument_inGenerationContext */,
                                                             GGS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_infixOperatorRoutineIR temp_0 = this ;
  const GGS_infixOperatorRoutineIR temp_1 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("define internal ").add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_0.readProperty_mResultType ().ptr (), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 371)), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 371)).add_operation (GGS_string (" @"), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 371)).add_operation (temp_1.readProperty_mRoutineMangledName ().readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("infix-operator-llvm.galgas", 371)), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 371)), inCompiler  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 371)) ;
  const GGS_infixOperatorRoutineIR temp_2 = this ;
  const GGS_infixOperatorRoutineIR temp_3 = this ;
  const GGS_infixOperatorRoutineIR temp_4 = this ;
  const GGS_infixOperatorRoutineIR temp_5 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string (" (").add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_2.readProperty_mTargetType ().ptr (), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 372)), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 372)).add_operation (GGS_string (" %"), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 372)).add_operation (temp_3.readProperty_mTargetVarName (), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 372)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 372)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_4.readProperty_mSourceType ().ptr (), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 373)), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 373)).add_operation (GGS_string (" %"), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 373)).add_operation (temp_5.readProperty_mSourceVarName (), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 373)).add_operation (GGS_string (") nounwind {\n"), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 373)), inCompiler  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 372)) ;
  const GGS_infixOperatorRoutineIR temp_6 = this ;
  extensionMethod_generateAllocaList (temp_6.readProperty_mAllocaList (), ioArgument_ioLLVMcode, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 374)) ;
  const GGS_infixOperatorRoutineIR temp_7 = this ;
  UpEnumerator_stringlist enumerator_15856 (temp_7.readProperty_mGeneratedInstructions ()) ;
  while (enumerator_15856.hasCurrentObject ()) {
    ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  ").add_operation (enumerator_15856.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 376)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 376)), inCompiler  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 376)) ;
    enumerator_15856.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("}\n\n"), inCompiler  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 378)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@inlineInfixOperatorUsage generateCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_inlineInfixOperatorUsage::method_generateCode (const GGS_objectIR constinArgument_inLeftOperand,
                                                         const GGS_location /* constinArgument_inOperatorLocation */,
                                                         const GGS_objectIR constinArgument_inRightOperand,
                                                         const GGS_omnibusType constinArgument_inResultType,
                                                         GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                         GGS_allocaList & /* ioArgument_ioAllocaList */,
                                                         GGS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                         GGS_objectIR & outArgument_outResultValue,
                                                         Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_objectIR var_leftOperand_2771 = constinArgument_inLeftOperand ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_leftOperand_2771, inCompiler COMMA_SOURCE_FILE ("infix-operator-map.galgas", 76)) ;
  }
  GGS_objectIR var_rightOperand_2893 = constinArgument_inRightOperand ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_rightOperand_2893, inCompiler COMMA_SOURCE_FILE ("infix-operator-map.galgas", 78)) ;
  }
  {
  routine_getNewTempValue_3F__26__21_ (constinArgument_inResultType, ioArgument_ioTemporaries, outArgument_outResultValue, inCompiler  COMMA_SOURCE_FILE ("infix-operator-map.galgas", 79)) ;
  }
  const GGS_inlineInfixOperatorUsage temp_0 = this ;
  GGS_string var_s_3084 = extensionGetter_llvmName (outArgument_outResultValue, inCompiler COMMA_SOURCE_FILE ("infix-operator-map.galgas", 80)).add_operation (GGS_string (" = "), inCompiler COMMA_SOURCE_FILE ("infix-operator-map.galgas", 80)).add_operation (temp_0.readProperty_mLLVMOperation (), inCompiler COMMA_SOURCE_FILE ("infix-operator-map.galgas", 80)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("infix-operator-map.galgas", 80)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (var_leftOperand_2771, inCompiler COMMA_SOURCE_FILE ("infix-operator-map.galgas", 80)).ptr (), inCompiler COMMA_SOURCE_FILE ("infix-operator-map.galgas", 80)), inCompiler COMMA_SOURCE_FILE ("infix-operator-map.galgas", 80)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("infix-operator-map.galgas", 80)).add_operation (extensionGetter_llvmName (var_leftOperand_2771, inCompiler COMMA_SOURCE_FILE ("infix-operator-map.galgas", 81)), inCompiler COMMA_SOURCE_FILE ("infix-operator-map.galgas", 81)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("infix-operator-map.galgas", 81)).add_operation (extensionGetter_llvmName (var_rightOperand_2893, inCompiler COMMA_SOURCE_FILE ("infix-operator-map.galgas", 81)), inCompiler COMMA_SOURCE_FILE ("infix-operator-map.galgas", 81)) ;
  {
  GGS_stringset temp_1 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("infix-operator-map.galgas", 82)) ;
  extensionSetter_appendInstructionAsFreeString (ioArgument_ioInstructionGenerationList, var_s_3084, temp_1, inCompiler COMMA_SOURCE_FILE ("infix-operator-map.galgas", 82)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@omnibusInfixOperatorExpressionAST addDependenceEdgeForStaticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_omnibusInfixOperatorExpressionAST::method_addDependenceEdgeForStaticExpression (const GGS_lstring constinArgument_inConstantName,
                                                                                          GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_omnibusInfixOperatorExpressionAST temp_0 = this ;
  callExtensionMethod_addDependenceEdgeForStaticExpression ((cPtr_expressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 68)) ;
  const GGS_omnibusInfixOperatorExpressionAST temp_1 = this ;
  callExtensionMethod_addDependenceEdgeForStaticExpression ((cPtr_expressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 69)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@omnibusInfixOperatorExpressionAST noteExpressionTypesInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_omnibusInfixOperatorExpressionAST::method_noteExpressionTypesInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_omnibusInfixOperatorExpressionAST temp_0 = this ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((cPtr_expressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 77)) ;
  const GGS_omnibusInfixOperatorExpressionAST temp_1 = this ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((cPtr_expressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 78)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@omnibusInfixOperatorExpressionAST analyzeExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_omnibusInfixOperatorExpressionAST::method_analyzeExpression (const GGS_omnibusType constinArgument_inSelfType,
                                                                       const GGS_routineAttributes constinArgument_inRoutineAttributes,
                                                                       const GGS_omnibusType constinArgument_inOptionalTargetType,
                                                                       const GGS_semanticContext constinArgument_inContext,
                                                                       const GGS_mode constinArgument_inMode,
                                                                       GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                       GGS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                       GGS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                       GGS_allocaList & ioArgument_ioAllocaList,
                                                                       GGS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                       GGS_objectIR & outArgument_outResult,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_objectIR var_leftOperand_4439 ;
  const GGS_omnibusInfixOperatorExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeExpression ((cPtr_expressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_leftOperand_4439, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 99)) ;
  GGS_objectIR var_rightOperand_4899 ;
  const GGS_omnibusInfixOperatorExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeExpression ((cPtr_expressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, extensionGetter_type (var_leftOperand_4439, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 116)), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_rightOperand_4899, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 113)) ;
  const GGS_omnibusInfixOperatorExpressionAST temp_2 = this ;
  const GGS_omnibusInfixOperatorExpressionAST temp_3 = this ;
  extensionMethod_generateInfixOperatorCode (constinArgument_inContext.readProperty_mInfixOperatorMap (), var_leftOperand_4439, temp_2.readProperty_mInfixOperator (), temp_3.readProperty_mOperatorLocation (), var_rightOperand_4899, ioArgument_ioTemporaries, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, outArgument_outResult, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 127)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@compiletimePrefixOperatorAST locationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GGS_location cPtr_compiletimePrefixOperatorAST::getter_locationForErrorSignaling (Compiler */* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_location result_outLocation ; // Returned variable
  const GGS_compiletimePrefixOperatorAST temp_0 = this ;
  result_outLocation = temp_0.readProperty_mPrefixOperatorLocation () ;
//---
  return result_outLocation ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@compiletimePrefixOperatorAST enterInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_compiletimePrefixOperatorAST::method_enterInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_compiletimePrefixOperatorAST temp_0 = this ;
  const GGS_compiletimePrefixOperatorAST temp_1 = this ;
  const GGS_compiletimePrefixOperatorAST temp_2 = this ;
  GGS_lstring var_nodeName_3633 = GGS_lstring::init_21__21_ (extensionGetter_string (temp_0.readProperty_mPrefixOperator (), inCompiler COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 100)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 100)).add_operation (temp_1.readProperty_mReceiverTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 100)), temp_2.readProperty_mPrefixOperatorLocation (), inCompiler COMMA_HERE) ;
  {
  const GGS_compiletimePrefixOperatorAST temp_3 = this ;
  ioArgument_ioGraph.setter_addNode (var_nodeName_3633, temp_3, inCompiler COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 101)) ;
  }
  {
  const GGS_compiletimePrefixOperatorAST temp_4 = this ;
  ioArgument_ioGraph.setter_addEdge (var_nodeName_3633, temp_4.readProperty_mReceiverTypeName () COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 102)) ;
  }
  {
  const GGS_compiletimePrefixOperatorAST temp_5 = this ;
  ioArgument_ioGraph.setter_addEdge (var_nodeName_3633, temp_5.readProperty_mResultTypeName () COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 103)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (function_compileTimeDeclarationBarrier (inCompiler COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 104)), var_nodeName_3633 COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 104)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@compiletimePrefixOperatorAST keyRepresentationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_compiletimePrefixOperatorAST::getter_keyRepresentationForErrorSignaling (Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outRepresentation ; // Returned variable
  const GGS_compiletimePrefixOperatorAST temp_0 = this ;
  const GGS_compiletimePrefixOperatorAST temp_1 = this ;
  result_outRepresentation = extensionGetter_string (temp_0.readProperty_mPrefixOperator (), inCompiler COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 110)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 110)).add_operation (temp_1.readProperty_mReceiverTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 110)) ;
//---
  return result_outRepresentation ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@compiletimePrefixOperatorAST enterInContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_compiletimePrefixOperatorAST::method_enterInContext (GGS_semanticContext & ioArgument_ioContext,
                                                               GGS_declarationDecorationList & /* ioArgument_ioDecoratedDeclarationList */,
                                                               GGS_decoratedRegularRoutineList & /* ioArgument_ioDecoratedRoutineList */,
                                                               GGS_routineListIR & /* ioArgument_ioRoutineListIR */,
                                                               GGS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                               GGS_staticEntityMap & /* ioArgument_ioStaticEntityMap */,
                                                               GGS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                               GGS_userLLVMTypeDefinitionListIR & /* ioArgument_ioUserLLVMTypeDefinitionListIR */,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_receiverTypeProxy_5287 ;
  {
  const GGS_compiletimePrefixOperatorAST temp_0 = this ;
  extensionSetter_makeEntry (ioArgument_ioContext.mProperty_mTypeMap, temp_0.readProperty_mReceiverTypeName (), var_receiverTypeProxy_5287, inCompiler COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 128)) ;
  }
  GGS_omnibusType var_receiverType_5312 = extensionGetter_type (var_receiverTypeProxy_5287, inCompiler COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 129)) ;
  const GGS_compiletimePrefixOperatorAST temp_1 = this ;
  callExtensionMethod_checkIsCompileTimeType ((cPtr_omnibusType *) var_receiverType_5312.ptr (), temp_1.readProperty_mReceiverTypeName ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 130)) ;
  GGS_unifiedTypeMapEntry var_resultTypeProxy_5486 ;
  {
  const GGS_compiletimePrefixOperatorAST temp_2 = this ;
  extensionSetter_makeEntry (ioArgument_ioContext.mProperty_mTypeMap, temp_2.readProperty_mResultTypeName (), var_resultTypeProxy_5486, inCompiler COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 131)) ;
  }
  GGS_omnibusType var_resultType_5509 = extensionGetter_type (var_resultTypeProxy_5486, inCompiler COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 132)) ;
  const GGS_compiletimePrefixOperatorAST temp_3 = this ;
  callExtensionMethod_checkIsCompileTimeType ((cPtr_omnibusType *) var_resultType_5509.ptr (), temp_3.readProperty_mResultTypeName ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 133)) ;
  GGS_ctCheckMap temp_4 = GGS_ctCheckMap::init (inCompiler COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 135)) ;
  GGS_ctCheckMap var_ctCheckMap_5670 = temp_4 ;
  {
  const GGS_compiletimePrefixOperatorAST temp_5 = this ;
  var_ctCheckMap_5670.setter_insertKey (temp_5.readProperty_mReceiverName (), inCompiler COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 136)) ;
  }
  const GGS_compiletimePrefixOperatorAST temp_6 = this ;
  callExtensionMethod_checkCompileTimeExpression ((cPtr_ctExpressionAST *) temp_6.readProperty_mExpression ().ptr (), var_ctCheckMap_5670, inCompiler COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 137)) ;
  const GGS_compiletimePrefixOperatorAST temp_7 = this ;
  const GGS_compiletimePrefixOperatorAST temp_8 = this ;
  GGS_lstring var_key_5835 = function_prefixOperatorMapKey (var_receiverType_5312, extensionGetter_prefixOperator (temp_7.readProperty_mPrefixOperator (), inCompiler COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 139)), temp_8.readProperty_mPrefixOperatorLocation (), inCompiler COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 139)) ;
  const GGS_compiletimePrefixOperatorAST temp_9 = this ;
  const GGS_compiletimePrefixOperatorAST temp_10 = this ;
  const GGS_compiletimePrefixOperatorAST temp_11 = this ;
  GGS_compileTimePrefixOperatorUsage var_definition_5936 = GGS_compileTimePrefixOperatorUsage::init_21__21__21_ (temp_9.readProperty_mPrefixOperatorLocation (), temp_10.readProperty_mReceiverName (), temp_11.readProperty_mExpression (), inCompiler COMMA_HERE) ;
  {
  ioArgument_ioContext.mProperty_mPrefixOperatorMap.setter_insertKey (var_key_5835, var_receiverType_5312, var_resultType_5509, var_definition_5936, inCompiler COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 145)) ;
  }
  GalgasBool test_12 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_12) {
    const GGS_compiletimePrefixOperatorAST temp_13 = this ;
    test_12 = GGS_bool (ComparisonKind::equal, temp_13.readProperty_mPrefixOperator ().objectCompare (GGS_compileTimePrefixOperatorEnumeration::class_func_minusOp (SOURCE_FILE ("prefix-operator-compile-time.galgas", 147)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_12) {
      const GGS_compiletimePrefixOperatorAST temp_14 = this ;
      GGS_lstring var_minusNoOvf_5F_key_6237 = function_prefixOperatorMapKey (var_receiverType_5312, GGS_prefixOperator::class_func_minusNoOvf (SOURCE_FILE ("prefix-operator-compile-time.galgas", 148)), temp_14.readProperty_mPrefixOperatorLocation (), inCompiler COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 148)) ;
      {
      ioArgument_ioContext.mProperty_mPrefixOperatorMap.setter_insertKey (var_minusNoOvf_5F_key_6237, var_receiverType_5312, var_resultType_5509, var_definition_5936, inCompiler COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 149)) ;
      }
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@compileTimePrefixOperatorUsage generateCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_compileTimePrefixOperatorUsage::method_generateCode (const GGS_objectIR constinArgument_inReceiverOperand,
                                                               const GGS_location /* constinArgument_inOperatorLocation */,
                                                               const GGS_omnibusType constinArgument_inResultType,
                                                               const GGS_bool /* constinArgument_inDoNotGeneratePanicCode */,
                                                               const GGS_bool /* constinArgument_inSafeMode */,
                                                               GGS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                               GGS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                               GGS_objectIR & outArgument_outResultValue,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bigint var_receiverValue_7459 ;
  GGS_omnibusType joker_7443_1 ; // Joker input parameter
  constinArgument_inReceiverOperand.method_extractLiteralInteger (joker_7443_1, var_receiverValue_7459, inCompiler COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 175)) ;
  GGS_ctMap temp_0 = GGS_ctMap::init (inCompiler COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 176)) ;
  GGS_ctMap var_varMap_7487 = temp_0 ;
  {
  const GGS_compileTimePrefixOperatorUsage temp_1 = this ;
  var_varMap_7487.setter_insertKey (temp_1.readProperty_mReceiverOperandName (), var_receiverValue_7459, inCompiler COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 177)) ;
  }
  GGS_bigint var_result_7643 ;
  const GGS_compileTimePrefixOperatorUsage temp_2 = this ;
  callExtensionMethod_computeCompileTimeExpression ((cPtr_ctExpressionAST *) temp_2.readProperty_mExpression ().ptr (), var_varMap_7487, var_result_7643, inCompiler COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 178)) ;
  outArgument_outResultValue = GGS_objectIR::class_func_literalInteger (constinArgument_inResultType, var_result_7643  COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 179)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@llvmPrefixOperatorAST locationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GGS_location cPtr_llvmPrefixOperatorAST::getter_locationForErrorSignaling (Compiler */* inCompiler */
                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_location result_outLocation ; // Returned variable
  const GGS_llvmPrefixOperatorAST temp_0 = this ;
  result_outLocation = temp_0.readProperty_mPrefixOperatorLocation () ;
//---
  return result_outLocation ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'appendPrefixOperatorDeclaration_minus?&'
//
//--------------------------------------------------------------------------------------------------

void routine_appendPrefixOperatorDeclaration_5F_minus_3F__26_ (const GGS_string constinArgument_inOmnibusReceiverTypeName,
                                                               GGS_semanticTypePrecedenceGraph & ioArgument_ioPrecedenceGraph,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_llvmGenerationInstructionList temp_0 = GGS_llvmGenerationInstructionList::init (inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 58)) ;
  GGS_llvmGenerationInstructionList var_llvmInstructionList_2204 = temp_0 ;
  GGS_llvmGenerationInstructionElementList temp_1 = GGS_llvmGenerationInstructionElementList::init (inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 59)) ;
  GGS_llvmGenerationInstructionElementList var_instructionElements_2274 = temp_1 ;
  var_instructionElements_2274.addAssign_operation (GGS_llvmGenerationInstructionElement::class_func_symbol (GGS_string ("result").getter_nowhere (SOURCE_FILE ("prefix-operator-llvm.galgas", 60))  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 60))  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 60)) ;
  var_instructionElements_2274.addAssign_operation (GGS_llvmGenerationInstructionElement::class_func_string (GGS_string (" = sub ")  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 61))  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 61)) ;
  var_instructionElements_2274.addAssign_operation (GGS_llvmGenerationInstructionElement::class_func_type (GGS_string ("SELF").getter_nowhere (SOURCE_FILE ("prefix-operator-llvm.galgas", 62))  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 62))  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 62)) ;
  var_instructionElements_2274.addAssign_operation (GGS_llvmGenerationInstructionElement::class_func_string (GGS_string (" 0, ")  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 63))  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 63)) ;
  var_instructionElements_2274.addAssign_operation (GGS_llvmGenerationInstructionElement::class_func_symbol (GGS_string ("SELF").getter_nowhere (SOURCE_FILE ("prefix-operator-llvm.galgas", 64))  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 64))  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 64)) ;
  var_llvmInstructionList_2204.addAssign_operation (GGS_llvmGenerationInstruction::init_21_ (var_instructionElements_2274, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 65)) ;
  GGS_abstractDeclarationAST var_declaration_2692 = GGS_llvmPrefixOperatorAST::init_21__21__21__21__21__21_ (GGS_llvmPrefixOperatorEnumeration::class_func_minusOp (SOURCE_FILE ("prefix-operator-llvm.galgas", 67)), GGS_location::class_func_nowhere (SOURCE_FILE ("prefix-operator-llvm.galgas", 68)), GGS_string ("SELF").getter_nowhere (SOURCE_FILE ("prefix-operator-llvm.galgas", 69)), constinArgument_inOmnibusReceiverTypeName.getter_nowhere (SOURCE_FILE ("prefix-operator-llvm.galgas", 70)), var_llvmInstructionList_2204, constinArgument_inOmnibusReceiverTypeName.getter_nowhere (SOURCE_FILE ("prefix-operator-llvm.galgas", 72)), inCompiler COMMA_HERE) ;
  callExtensionMethod_enterInPrecedenceGraph ((cPtr_abstractDeclarationAST *) var_declaration_2692.ptr (), ioArgument_ioPrecedenceGraph, inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 74)) ;
  var_declaration_2692 = GGS_llvmPrefixOperatorAST::init_21__21__21__21__21__21_ (GGS_llvmPrefixOperatorEnumeration::class_func_minusOpNoOvf (SOURCE_FILE ("prefix-operator-llvm.galgas", 76)), GGS_location::class_func_nowhere (SOURCE_FILE ("prefix-operator-llvm.galgas", 77)), GGS_string ("SELF").getter_nowhere (SOURCE_FILE ("prefix-operator-llvm.galgas", 78)), constinArgument_inOmnibusReceiverTypeName.getter_nowhere (SOURCE_FILE ("prefix-operator-llvm.galgas", 79)), var_llvmInstructionList_2204, constinArgument_inOmnibusReceiverTypeName.getter_nowhere (SOURCE_FILE ("prefix-operator-llvm.galgas", 81)), inCompiler COMMA_HERE) ;
  callExtensionMethod_enterInPrecedenceGraph ((cPtr_abstractDeclarationAST *) var_declaration_2692.ptr (), ioArgument_ioPrecedenceGraph, inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 83)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'appendPrefixOperatorDeclaration_bitWiseComplement?&'
//
//--------------------------------------------------------------------------------------------------

void routine_appendPrefixOperatorDeclaration_5F_bitWiseComplement_3F__26_ (const GGS_string constinArgument_inOmnibusReceiverTypeName,
                                                                           GGS_semanticTypePrecedenceGraph & ioArgument_ioPrecedenceGraph,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_llvmGenerationInstructionList temp_0 = GGS_llvmGenerationInstructionList::init (inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 93)) ;
  GGS_llvmGenerationInstructionList var_llvmInstructionList_3531 = temp_0 ;
  GGS_llvmGenerationInstructionElementList temp_1 = GGS_llvmGenerationInstructionElementList::init (inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 94)) ;
  GGS_llvmGenerationInstructionElementList var_instructionElements_3601 = temp_1 ;
  var_instructionElements_3601.addAssign_operation (GGS_llvmGenerationInstructionElement::class_func_symbol (GGS_string ("result").getter_nowhere (SOURCE_FILE ("prefix-operator-llvm.galgas", 95))  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 95))  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 95)) ;
  var_instructionElements_3601.addAssign_operation (GGS_llvmGenerationInstructionElement::class_func_string (GGS_string (" = xor ")  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 96))  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 96)) ;
  var_instructionElements_3601.addAssign_operation (GGS_llvmGenerationInstructionElement::class_func_type (GGS_string ("SELF").getter_nowhere (SOURCE_FILE ("prefix-operator-llvm.galgas", 97))  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 97))  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 97)) ;
  var_instructionElements_3601.addAssign_operation (GGS_llvmGenerationInstructionElement::class_func_string (GGS_string (" ")  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 98))  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 98)) ;
  var_instructionElements_3601.addAssign_operation (GGS_llvmGenerationInstructionElement::class_func_symbol (GGS_string ("SELF").getter_nowhere (SOURCE_FILE ("prefix-operator-llvm.galgas", 99))  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 99))  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 99)) ;
  var_instructionElements_3601.addAssign_operation (GGS_llvmGenerationInstructionElement::class_func_string (GGS_string (", -1")  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 100))  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 100)) ;
  var_llvmInstructionList_3531.addAssign_operation (GGS_llvmGenerationInstruction::init_21_ (var_instructionElements_3601, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 101)) ;
  GGS_abstractDeclarationAST var_declaration_4068 = GGS_llvmPrefixOperatorAST::init_21__21__21__21__21__21_ (GGS_llvmPrefixOperatorEnumeration::class_func_bitWiseComplement (SOURCE_FILE ("prefix-operator-llvm.galgas", 103)), GGS_location::class_func_nowhere (SOURCE_FILE ("prefix-operator-llvm.galgas", 104)), GGS_string ("SELF").getter_nowhere (SOURCE_FILE ("prefix-operator-llvm.galgas", 105)), constinArgument_inOmnibusReceiverTypeName.getter_nowhere (SOURCE_FILE ("prefix-operator-llvm.galgas", 106)), var_llvmInstructionList_3531, constinArgument_inOmnibusReceiverTypeName.getter_nowhere (SOURCE_FILE ("prefix-operator-llvm.galgas", 108)), inCompiler COMMA_HERE) ;
  callExtensionMethod_enterInPrecedenceGraph ((cPtr_abstractDeclarationAST *) var_declaration_4068.ptr (), ioArgument_ioPrecedenceGraph, inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 110)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@llvmPrefixOperatorAST enterInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_llvmPrefixOperatorAST::method_enterInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_llvmPrefixOperatorAST temp_0 = this ;
  const GGS_llvmPrefixOperatorAST temp_1 = this ;
  const GGS_llvmPrefixOperatorAST temp_2 = this ;
  GGS_lstring var_nodeName_6318 = GGS_lstring::init_21__21_ (extensionGetter_string (temp_0.readProperty_mPrefixOperator (), inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 174)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 174)).add_operation (temp_1.readProperty_mReceiverTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 174)), temp_2.readProperty_mPrefixOperatorLocation (), inCompiler COMMA_HERE) ;
  {
  const GGS_llvmPrefixOperatorAST temp_3 = this ;
  ioArgument_ioGraph.setter_addNode (var_nodeName_6318, temp_3, inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 175)) ;
  }
  {
  const GGS_llvmPrefixOperatorAST temp_4 = this ;
  ioArgument_ioGraph.setter_addEdge (var_nodeName_6318, temp_4.readProperty_mReceiverTypeName () COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 176)) ;
  }
  {
  const GGS_llvmPrefixOperatorAST temp_5 = this ;
  ioArgument_ioGraph.setter_addEdge (var_nodeName_6318, temp_5.readProperty_mResultTypeName () COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 177)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@llvmPrefixOperatorAST keyRepresentationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_llvmPrefixOperatorAST::getter_keyRepresentationForErrorSignaling (Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outRepresentation ; // Returned variable
  const GGS_llvmPrefixOperatorAST temp_0 = this ;
  const GGS_llvmPrefixOperatorAST temp_1 = this ;
  result_outRepresentation = extensionGetter_string (temp_0.readProperty_mPrefixOperator (), inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 183)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 183)).add_operation (temp_1.readProperty_mReceiverTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 183)) ;
//---
  return result_outRepresentation ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@llvmPrefixOperatorAST enterInContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_llvmPrefixOperatorAST::method_enterInContext (GGS_semanticContext & ioArgument_ioContext,
                                                        GGS_declarationDecorationList & /* ioArgument_ioDecoratedDeclarationList */,
                                                        GGS_decoratedRegularRoutineList & /* ioArgument_ioDecoratedRoutineList */,
                                                        GGS_routineListIR & ioArgument_ioRoutineListIR,
                                                        GGS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                        GGS_staticEntityMap & /* ioArgument_ioStaticEntityMap */,
                                                        GGS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                        GGS_userLLVMTypeDefinitionListIR & /* ioArgument_ioUserLLVMTypeDefinitionListIR */,
                                                        Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_receiverTypeProxy_7879 ;
  {
  const GGS_llvmPrefixOperatorAST temp_0 = this ;
  extensionSetter_makeEntry (ioArgument_ioContext.mProperty_mTypeMap, temp_0.readProperty_mReceiverTypeName (), var_receiverTypeProxy_7879, inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 201)) ;
  }
  GGS_omnibusType var_receiverType_7904 = extensionGetter_type (var_receiverTypeProxy_7879, inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 202)) ;
  const GGS_llvmPrefixOperatorAST temp_1 = this ;
  callExtensionMethod_checkIsNotCompileTimeType ((cPtr_omnibusType *) var_receiverType_7904.ptr (), temp_1.readProperty_mReceiverTypeName ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 203)) ;
  GGS_unifiedTypeMapEntry var_resultTypeProxy_8081 ;
  {
  const GGS_llvmPrefixOperatorAST temp_2 = this ;
  extensionSetter_makeEntry (ioArgument_ioContext.mProperty_mTypeMap, temp_2.readProperty_mResultTypeName (), var_resultTypeProxy_8081, inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 204)) ;
  }
  GGS_omnibusType var_resultType_8104 = extensionGetter_type (var_resultTypeProxy_8081, inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 205)) ;
  const GGS_llvmPrefixOperatorAST temp_3 = this ;
  callExtensionMethod_checkIsNotCompileTimeType ((cPtr_omnibusType *) var_resultType_8104.ptr (), temp_3.readProperty_mResultTypeName ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 206)) ;
  const GGS_llvmPrefixOperatorAST temp_4 = this ;
  GGS_string var_prefixMangledFunctionName_8251 = function_prefixOperatorFunctionName (var_receiverType_7904, extensionGetter_prefixOperator (temp_4.readProperty_mPrefixOperator (), inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 208)), inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 208)) ;
  const GGS_llvmPrefixOperatorAST temp_5 = this ;
  const GGS_llvmPrefixOperatorAST temp_6 = this ;
  GGS_lstring var_key_8350 = function_prefixOperatorMapKey (var_receiverType_7904, extensionGetter_prefixOperator (temp_5.readProperty_mPrefixOperator (), inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 209)), temp_6.readProperty_mPrefixOperatorLocation (), inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 209)) ;
  const GGS_llvmPrefixOperatorAST temp_7 = this ;
  const GGS_llvmPrefixOperatorAST temp_8 = this ;
  GGS_llvmPrefixOperatorUsage var_definition_8451 = GGS_llvmPrefixOperatorUsage::init_21__21__21_ (var_prefixMangledFunctionName_8251, temp_7.readProperty_mReceiverName (), temp_8.readProperty_mInstructionList (), inCompiler COMMA_HERE) ;
  {
  ioArgument_ioContext.mProperty_mPrefixOperatorMap.setter_insertKey (var_key_8350, var_receiverType_7904, var_resultType_8104, var_definition_8451, inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 215)) ;
  }
  GGS_assignmentGenerationVarMap temp_9 = GGS_assignmentGenerationVarMap::init (inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 217)) ;
  GGS_assignmentGenerationVarMap var_varMap_8723 = temp_9 ;
  {
  const GGS_llvmPrefixOperatorAST temp_10 = this ;
  const GGS_llvmPrefixOperatorAST temp_11 = this ;
  var_varMap_8723.setter_insertKey (temp_10.readProperty_mReceiverName (), GGS_string ("%").add_operation (temp_11.readProperty_mReceiverName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 218)), inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 218)) ;
  }
  GGS_assignmentGenerationVarMap temp_12 = GGS_assignmentGenerationVarMap::init (inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 219)) ;
  GGS_assignmentGenerationVarMap var_typeMap_8839 = temp_12 ;
  {
  const GGS_llvmPrefixOperatorAST temp_13 = this ;
  var_typeMap_8839.setter_insertKey (temp_13.readProperty_mReceiverName (), callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) var_receiverType_7904.ptr (), inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 220)), inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 220)) ;
  }
  {
  var_typeMap_8839.setter_insertKey (GGS_string ("result").getter_nowhere (SOURCE_FILE ("prefix-operator-llvm.galgas", 221)), callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) var_resultType_8104.ptr (), inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 221)), inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 221)) ;
  }
  GGS_llvmGenerationInstructionList temp_14 = GGS_llvmGenerationInstructionList::init (inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 222)) ;
  GGS_llvmGenerationInstructionList var_instructionList_9034 = temp_14 ;
  var_instructionList_9034.addAssign_operation (GGS_llvmVarInstruction::init_21_ (GGS_string ("result").getter_nowhere (SOURCE_FILE ("prefix-operator-llvm.galgas", 223)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 223)) ;
  const GGS_llvmPrefixOperatorAST temp_15 = this ;
  var_instructionList_9034.plusAssign_operation(temp_15.readProperty_mInstructionList (), inCompiler  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 224)) ;
  {
  extensionSetter_appendReturn (var_instructionList_9034, GGS_string ("result").getter_nowhere (SOURCE_FILE ("prefix-operator-llvm.galgas", 225)), GGS_string ("result").getter_nowhere (SOURCE_FILE ("prefix-operator-llvm.galgas", 225)), inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 225)) ;
  }
  GGS_stringlist temp_16 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 226)) ;
  GGS_stringlist var_generatedInstructions_9256 = temp_16 ;
  GGS_allocaList temp_17 = GGS_allocaList::init (inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 227)) ;
  GGS_allocaList var_allocaList_9302 = temp_17 ;
  GGS_uint var_temporaryIndex_9331 = GGS_uint (uint32_t (0U)) ;
  extensionMethod_generateIRCode (var_instructionList_9034, var_varMap_8723, var_typeMap_8839, var_generatedInstructions_9256, var_temporaryIndex_9331, var_allocaList_9302, inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 229)) ;
  const GGS_llvmPrefixOperatorAST temp_18 = this ;
  const GGS_llvmPrefixOperatorAST temp_19 = this ;
  GGS_prefixOperatorRoutineIR var_routine_9462 = GGS_prefixOperatorRoutineIR::init_21__21_isRequired_21_warnsIfUnused_21__21__21__21__21_ (GGS_lstring::init_21__21_ (var_prefixMangledFunctionName_8251, temp_18.readProperty_mPrefixOperatorLocation (), inCompiler COMMA_HERE), GGS_bool (true), GGS_bool (false), var_receiverType_7904, temp_19.readProperty_mReceiverName ().readProperty_string (), var_resultType_8104, var_generatedInstructions_9256, var_allocaList_9302, inCompiler COMMA_HERE) ;
  ioArgument_ioRoutineListIR.addAssign_operation (var_routine_9462  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 240)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@llvmPrefixOperatorUsage generateCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_llvmPrefixOperatorUsage::method_generateCode (const GGS_objectIR constinArgument_inReceiverOperand,
                                                        const GGS_location constinArgument_inOperatorLocation,
                                                        const GGS_omnibusType constinArgument_inResultType,
                                                        const GGS_bool /* constinArgument_inDoNotGeneratePanicCode */,
                                                        const GGS_bool /* constinArgument_inSafeMode */,
                                                        GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                        GGS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                        GGS_objectIR & outArgument_outResultValue,
                                                        Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_objectIR var_receiverOperand_10729 = constinArgument_inReceiverOperand ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_receiverOperand_10729, inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 267)) ;
  }
  {
  routine_getNewTempValue_3F__26__21_ (constinArgument_inResultType, ioArgument_ioTemporaries, outArgument_outResultValue, inCompiler  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 272)) ;
  }
  GGS_procCallEffectiveParameterListIR temp_0 = GGS_procCallEffectiveParameterListIR::init (inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 273)) ;
  GGS_procCallEffectiveParameterListIR var_argumentList_11010 = temp_0 ;
  var_argumentList_11010.addAssign_operation (GGS_procEffectiveParameterPassingModeIR::class_func_output (SOURCE_FILE ("prefix-operator-llvm.galgas", 274)), var_receiverOperand_10729  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 274)) ;
  const GGS_llvmPrefixOperatorUsage temp_1 = this ;
  const GGS_llvmPrefixOperatorUsage temp_2 = this ;
  ioArgument_ioInstructionGenerationList.addAssign_operation (GGS_standaloneRoutineCallIR::init_21__21__21__21_ (outArgument_outResultValue, GGS_lstring::init_21__21_ (temp_1.readProperty_mPrefixMangledFunctionName (), constinArgument_inOperatorLocation, inCompiler COMMA_HERE), temp_2.readProperty_mPrefixMangledFunctionName (), var_argumentList_11010, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 275)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@prefixOperatorRoutineIR llvmCodeGeneration'
//
//--------------------------------------------------------------------------------------------------

void cPtr_prefixOperatorRoutineIR::method_llvmCodeGeneration (GGS_string & ioArgument_ioLLVMcode,
                                                              const GGS_generationContext /* constinArgument_inGenerationContext */,
                                                              GGS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_prefixOperatorRoutineIR temp_0 = this ;
  const GGS_prefixOperatorRoutineIR temp_1 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("define internal ").add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_0.readProperty_mResultType ().ptr (), inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 302)), inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 302)).add_operation (GGS_string (" @"), inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 302)).add_operation (temp_1.readProperty_mRoutineMangledName ().readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("prefix-operator-llvm.galgas", 302)), inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 302)), inCompiler  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 302)) ;
  const GGS_prefixOperatorRoutineIR temp_2 = this ;
  const GGS_prefixOperatorRoutineIR temp_3 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string (" (").add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_2.readProperty_mReceiverType ().ptr (), inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 303)), inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 303)).add_operation (GGS_string (" %"), inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 303)).add_operation (temp_3.readProperty_mReceiverVarName (), inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 303)).add_operation (GGS_string (") nounwind {\n"), inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 303)), inCompiler  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 303)) ;
  const GGS_prefixOperatorRoutineIR temp_4 = this ;
  extensionMethod_generateAllocaList (temp_4.readProperty_mAllocaList (), ioArgument_ioLLVMcode, inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 304)) ;
  const GGS_prefixOperatorRoutineIR temp_5 = this ;
  UpEnumerator_stringlist enumerator_12356 (temp_5.readProperty_mGeneratedInstructions ()) ;
  while (enumerator_12356.hasCurrentObject ()) {
    ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  ").add_operation (enumerator_12356.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 306)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 306)), inCompiler  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 306)) ;
    enumerator_12356.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("}\n\n"), inCompiler  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 308)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@prefixOperatorExpressionAST addDependenceEdgeForStaticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_prefixOperatorExpressionAST::method_addDependenceEdgeForStaticExpression (const GGS_lstring constinArgument_inConstantName,
                                                                                    GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_prefixOperatorExpressionAST temp_0 = this ;
  callExtensionMethod_addDependenceEdgeForStaticExpression ((cPtr_expressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 28)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@prefixOperatorExpressionAST noteExpressionTypesInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_prefixOperatorExpressionAST::method_noteExpressionTypesInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_prefixOperatorExpressionAST temp_0 = this ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((cPtr_expressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 36)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@prefixOperatorExpressionAST analyzeExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_prefixOperatorExpressionAST::method_analyzeExpression (const GGS_omnibusType constinArgument_inSelfType,
                                                                 const GGS_routineAttributes constinArgument_inRoutineAttributes,
                                                                 const GGS_omnibusType constinArgument_inOptionalTargetType,
                                                                 const GGS_semanticContext constinArgument_inContext,
                                                                 const GGS_mode constinArgument_inMode,
                                                                 GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                 GGS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                 GGS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                 GGS_allocaList & ioArgument_ioAllocaList,
                                                                 GGS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                 GGS_objectIR & outArgument_outResult,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_objectIR var_expressionResult_3098 ;
  const GGS_prefixOperatorExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeExpression ((cPtr_expressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_expressionResult_3098, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 57)) ;
  GGS_bool var_currentlyInSafeMode_3144 = extensionGetter_isSafe (constinArgument_inMode, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 71)) ;
  GGS_bool var_noPanicGeneration_3194 = GGS_bool (gOption_omnibus_5F_options_noPanicGeneration.readProperty_value ()) ;
  const GGS_prefixOperatorExpressionAST temp_1 = this ;
  const GGS_prefixOperatorExpressionAST temp_2 = this ;
  extensionMethod_generatePrefixOperatorCode (constinArgument_inContext.readProperty_mPrefixOperatorMap (), var_expressionResult_3098, temp_1.readProperty_mOp (), temp_2.readProperty_mOperatorLocation (), var_currentlyInSafeMode_3144, var_noPanicGeneration_3194, ioArgument_ioTemporaries, ioArgument_ioInstructionGenerationList, outArgument_outResult, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 73)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@checkInstructionAST noteInstructionTypesInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_checkInstructionAST::method_noteInstructionTypesInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_checkInstructionAST temp_0 = this ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((cPtr_expressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("directive-check.galgas", 41)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@checkInstructionAST instructionSemanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_checkInstructionAST::method_instructionSemanticAnalysis (const GGS_omnibusType constinArgument_inSelfType,
                                                                   const GGS_routineAttributes constinArgument_inRoutineAttributes,
                                                                   const GGS_semanticContext constinArgument_inContext,
                                                                   const GGS_mode constinArgument_inMode,
                                                                   GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                   GGS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                   GGS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                   GGS_allocaList & ioArgument_ioAllocaList,
                                                                   GGS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_instructionListIR temp_0 = GGS_instructionListIR::init (inCompiler COMMA_SOURCE_FILE ("directive-check.galgas", 60)) ;
  GGS_instructionListIR var_instructionGenerationList_2821 = temp_0 ;
  GGS_objectIR var_expressionResult_3237 ;
  const GGS_checkInstructionAST temp_1 = this ;
  callExtensionMethod_analyzeExpression ((cPtr_expressionAST *) temp_1.readProperty_mExpression ().ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, function_voidType (inCompiler COMMA_SOURCE_FILE ("directive-check.galgas", 64)), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_instructionGenerationList_2821, var_expressionResult_3237, inCompiler COMMA_SOURCE_FILE ("directive-check.galgas", 61)) ;
  GGS_implicitBooleanConversionResult var_booleanOperand_3475 ;
  const GGS_checkInstructionAST temp_2 = this ;
  extensionMethod_generateConvertToBooleanCode (constinArgument_inContext.readProperty_mImplicitConversionToBooleanMap (), var_expressionResult_3237, temp_2.readProperty_mCheckMessage ().readProperty_location (), ioArgument_ioTemporaries, var_instructionGenerationList_2821, ioArgument_ioAllocaList, var_booleanOperand_3475, inCompiler COMMA_SOURCE_FILE ("directive-check.galgas", 74)) ;
  switch (var_booleanOperand_3475.enumValue ()) {
  case GGS_implicitBooleanConversionResult::Enumeration::invalid:
    break ;
  case GGS_implicitBooleanConversionResult::Enumeration::enum_compileTime:
    {
      GGS_bool extractedValue_3545_boolValue_0 ;
      var_booleanOperand_3475.getAssociatedValuesFor_compileTime (extractedValue_3545_boolValue_0) ;
      GalgasBool test_3 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_3) {
        test_3 = extractedValue_3545_boolValue_0.operator_not (SOURCE_FILE ("directive-check.galgas", 85)).boolEnum () ;
        if (GalgasBool::boolTrue == test_3) {
          GalgasBool test_4 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_4) {
            const GGS_checkInstructionAST temp_5 = this ;
            test_4 = GGS_bool (ComparisonKind::notEqual, temp_5.readProperty_mCheckMessage ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
            if (GalgasBool::boolTrue == test_4) {
              const GGS_checkInstructionAST temp_6 = this ;
              const GGS_checkInstructionAST temp_7 = this ;
              TC_Array <FixItDescription> fixItArray8 ;
              inCompiler->emitSemanticError (temp_6.readProperty_mCheckMessage ().readProperty_location (), GGS_string ("check failure: ").add_operation (temp_7.readProperty_mCheckMessage ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("directive-check.galgas", 87)), fixItArray8  COMMA_SOURCE_FILE ("directive-check.galgas", 87)) ;
            }
          }
          if (GalgasBool::boolFalse == test_4) {
            const GGS_checkInstructionAST temp_9 = this ;
            TC_Array <FixItDescription> fixItArray10 ;
            inCompiler->emitSemanticError (temp_9.readProperty_mCheckMessage ().readProperty_location (), GGS_string ("check failure"), fixItArray10  COMMA_SOURCE_FILE ("directive-check.galgas", 89)) ;
          }
        }
      }
    }
    break ;
  case GGS_implicitBooleanConversionResult::Enumeration::enum_llvmVariable:
    {
      GGS_string extractedValue_3805__0 ;
      var_booleanOperand_3475.getAssociatedValuesFor_llvmVariable (extractedValue_3805__0) ;
      const GGS_checkInstructionAST temp_11 = this ;
      TC_Array <FixItDescription> fixItArray12 ;
      inCompiler->emitSemanticError (temp_11.readProperty_mInstructionLocation (), GGS_string ("expression is not static: use assert instruction"), fixItArray12  COMMA_SOURCE_FILE ("directive-check.galgas", 93)) ;
    }
    break ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@assertInstructionAST noteInstructionTypesInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_assertInstructionAST::method_noteInstructionTypesInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_assertInstructionAST temp_0 = this ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((cPtr_expressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 36)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@assertInstructionAST instructionSemanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_assertInstructionAST::method_instructionSemanticAnalysis (const GGS_omnibusType constinArgument_inSelfType,
                                                                    const GGS_routineAttributes constinArgument_inRoutineAttributes,
                                                                    const GGS_semanticContext constinArgument_inContext,
                                                                    const GGS_mode constinArgument_inMode,
                                                                    GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                    GGS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                    GGS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                    GGS_allocaList & ioArgument_ioAllocaList,
                                                                    GGS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::equal, constinArgument_inMode.objectCompare (GGS_mode::class_func_panicMode (SOURCE_FILE ("instruction-assert.galgas", 54)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_assertInstructionAST temp_1 = this ;
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mInstructionLocation (), GGS_string ("operations that can generate panic are not allowed in ").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 55)), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 55)).add_operation (GGS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 55)), fixItArray2  COMMA_SOURCE_FILE ("instruction-assert.galgas", 55)) ;
    }
  }
  GGS_instructionListIR temp_3 = GGS_instructionListIR::init (inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 58)) ;
  GGS_instructionListIR var_instructionGenerationList_2822 = temp_3 ;
  GGS_objectIR var_expressionValue_3237 ;
  const GGS_assertInstructionAST temp_4 = this ;
  callExtensionMethod_analyzeExpression ((cPtr_expressionAST *) temp_4.readProperty_mExpression ().ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, function_voidType (inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 62)), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_instructionGenerationList_2822, var_expressionValue_3237, inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 59)) ;
  GalgasBool test_5 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_5) {
    test_5 = extensionGetter_type (var_expressionValue_3237, inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 73)).readProperty_kind ().getter_isBoolean (SOURCE_FILE ("instruction-assert.galgas", 73)).operator_not (SOURCE_FILE ("instruction-assert.galgas", 73)).boolEnum () ;
    if (GalgasBool::boolTrue == test_5) {
      const GGS_assertInstructionAST temp_6 = this ;
      TC_Array <FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (temp_6.readProperty_mInstructionLocation (), GGS_string ("expression is not boolean"), fixItArray7  COMMA_SOURCE_FILE ("instruction-assert.galgas", 74)) ;
    }
  }
  GalgasBool test_8 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_8) {
    test_8 = extensionGetter_isStatic (var_expressionValue_3237, inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 77)).boolEnum () ;
    if (GalgasBool::boolTrue == test_8) {
      const GGS_assertInstructionAST temp_9 = this ;
      TC_Array <FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (temp_9.readProperty_mInstructionLocation (), GGS_string ("expression is static: use check directive"), fixItArray10  COMMA_SOURCE_FILE ("instruction-assert.galgas", 78)) ;
    }
  }
  GalgasBool test_11 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_11) {
    test_11 = GGS_bool (gOption_omnibus_5F_options_noPanicGeneration.readProperty_value ()).operator_not (SOURCE_FILE ("instruction-assert.galgas", 81)).boolEnum () ;
    if (GalgasBool::boolTrue == test_11) {
      const GGS_assertInstructionAST temp_12 = this ;
      ioArgument_ioInstructionGenerationList.addAssign_operation (GGS_assertInstructionIR::init_21__21__21_ (temp_12.readProperty_mInstructionLocation (), var_instructionGenerationList_2822, var_expressionValue_3237, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-assert.galgas", 82)) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@assertInstructionIR llvmInstructionCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_assertInstructionIR::method_llvmInstructionCode (GGS_string & ioArgument_ioLLVMcode,
                                                           const GGS_generationContext constinArgument_inGenerationContext,
                                                           GGS_generationAdds & ioArgument_ioGenerationAdds,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_assertInstructionIR temp_0 = this ;
  extensionMethod_instructionListLLVMCode (temp_0.readProperty_mInstructionList (), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 107)) ;
  GGS_string var_labelAssertOk_4705 = GGS_string ("assert.ok.").add_operation (ioArgument_ioGenerationAdds.readProperty_mUniqueIndex ().getter_string (SOURCE_FILE ("instruction-assert.galgas", 108)), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 108)) ;
  GGS_string var_labelAssertEr_4772 = GGS_string ("assert.not.ok.").add_operation (ioArgument_ioGenerationAdds.readProperty_mUniqueIndex ().getter_string (SOURCE_FILE ("instruction-assert.galgas", 109)), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 109)) ;
  ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.plusAssign_operation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("instruction-assert.galgas", 110)) ;
  const GGS_assertInstructionIR temp_1 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  br i1 ").add_operation (extensionGetter_llvmName (temp_1.readProperty_mExpressionValue (), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 111)), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 111)).add_operation (GGS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 111)).add_operation (var_labelAssertOk_4705, inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 111)).add_operation (GGS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 111)).add_operation (var_labelAssertEr_4772, inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 111)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 111)), inCompiler  COMMA_SOURCE_FILE ("instruction-assert.galgas", 111)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelAssertEr_4772.add_operation (GGS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 112)), inCompiler  COMMA_SOURCE_FILE ("instruction-assert.galgas", 112)) ;
  const GGS_assertInstructionIR temp_2 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  call void @").add_operation (function_panicRoutineNameForLocationFile (temp_2.readProperty_mAssertInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 113)).getter_assemblerRepresentation (SOURCE_FILE ("instruction-assert.galgas", 113)), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 113)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 113)), inCompiler  COMMA_SOURCE_FILE ("instruction-assert.galgas", 113)) ;
  const GGS_assertInstructionIR temp_3 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inGenerationContext.readProperty_mPanicLineLLVMType ().ptr (), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 114)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 114)).add_operation (temp_3.readProperty_mAssertInstructionLocation ().getter_endLine (inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 114)).getter_string (SOURCE_FILE ("instruction-assert.galgas", 114)), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 114)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 114)), inCompiler  COMMA_SOURCE_FILE ("instruction-assert.galgas", 114)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inGenerationContext.readProperty_mPanicCodeLLVMType ().ptr (), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 115)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 115)).add_operation (function_panicCodeForAssertViolation (inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 115)).getter_string (SOURCE_FILE ("instruction-assert.galgas", 115)), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 115)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 115)), inCompiler  COMMA_SOURCE_FILE ("instruction-assert.galgas", 115)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  unreachable\n\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-assert.galgas", 116)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelAssertOk_4705.add_operation (GGS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 117)), inCompiler  COMMA_SOURCE_FILE ("instruction-assert.galgas", 117)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@assertInstructionIR enterAccessibleEntities'
//
//--------------------------------------------------------------------------------------------------

void cPtr_assertInstructionIR::method_enterAccessibleEntities (GGS_stringset & ioArgument_ioInvokedRoutineSet,
                                                               GGS_uint & ioArgument_ioMaxBranchOfOnInstructions,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_assertInstructionIR temp_0 = this ;
  extensionMethod_enterAccessibleEntities (temp_0.readProperty_mInstructionList (), ioArgument_ioInvokedRoutineSet, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 126)) ;
  const GGS_assertInstructionIR temp_1 = this ;
  ioArgument_ioInvokedRoutineSet.addAssign_operation (function_panicRoutineNameForLocationFile (temp_1.readProperty_mAssertInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 127))  COMMA_SOURCE_FILE ("instruction-assert.galgas", 127)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@assignmentInstructionAST noteInstructionTypesInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_assignmentInstructionAST::method_noteInstructionTypesInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_assignmentInstructionAST temp_0 = this ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((cPtr_expressionAST *) temp_0.readProperty_mSourceExpression ().ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 40)) ;
  const GGS_assignmentInstructionAST temp_1 = this ;
  extensionMethod_noteInstructionTypesInPrecedenceGraph (temp_1.readProperty_mTargetAST (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 41)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@assignmentInstructionAST instructionSemanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_assignmentInstructionAST::method_instructionSemanticAnalysis (const GGS_omnibusType constinArgument_inSelfType,
                                                                        const GGS_routineAttributes constinArgument_inRoutineAttributes,
                                                                        const GGS_semanticContext constinArgument_inContext,
                                                                        const GGS_mode constinArgument_inMode,
                                                                        GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                        GGS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                        GGS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                        GGS_allocaList & ioArgument_ioAllocaList,
                                                                        GGS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_omnibusType var_targetType_2980 ;
  const GGS_assignmentInstructionAST temp_0 = this ;
  extensionMethod_searchValuedObjectType (ioArgument_ioUniversalMap, constinArgument_inContext, constinArgument_inSelfType, temp_0.readProperty_mTargetAST (), var_targetType_2980, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 59)) ;
  GGS_objectIR var_sourceOperandPossibleReference_3414 ;
  const GGS_assignmentInstructionAST temp_1 = this ;
  callExtensionMethod_analyzeExpression ((cPtr_expressionAST *) temp_1.readProperty_mSourceExpression ().ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, var_targetType_2980, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_sourceOperandPossibleReference_3414, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 61)) ;
  GGS_instructionListListIR temp_2 = GGS_instructionListListIR::init (inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 75)) ;
  GGS_instructionListListIR var_pendingStoreComputedPropertyInstructionGenerationList_3498 = temp_2 ;
  GGS_LValueRepresentation var_lvalueIR_4019 ;
  const GGS_assignmentInstructionAST temp_3 = this ;
  extensionMethod_analyzeLValueInAssignment (temp_3.readProperty_mTargetAST (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_pendingStoreComputedPropertyInstructionGenerationList_3498, var_lvalueIR_4019, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 76)) ;
  {
  const GGS_assignmentInstructionAST temp_4 = this ;
  extensionSetter_appendAssignmentIR (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, constinArgument_inContext.readProperty_mAssignmentOperatorMap (), ioArgument_ioAllocaList, var_lvalueIR_4019.readProperty_type (), var_lvalueIR_4019.readProperty_llvmName (), var_sourceOperandPossibleReference_3414, temp_4.readProperty_mInstructionLocation (), GGS_bool (true), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 90)) ;
  }
  DownEnumerator_instructionListListIR enumerator_4400 (var_pendingStoreComputedPropertyInstructionGenerationList_3498) ;
  while (enumerator_4400.hasCurrentObject ()) {
    ioArgument_ioInstructionGenerationList.plusAssign_operation(enumerator_4400.current_mInstructionList (HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 102)) ;
    enumerator_4400.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Routine 'analyzeVariableInLValueInAssignment?self?routineAttributes?context?mode&temporary&staticEntityMap&variableMap&alloca&instructionListIR&pendingStoreComputedPropertyList?variableName?llvmName?type?!'
//
//--------------------------------------------------------------------------------------------------

void routine_analyzeVariableInLValueInAssignment_3F_self_3F_routineAttributes_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_26_pendingStoreComputedPropertyList_3F_variableName_3F_llvmName_3F_type_3F__21_ (const GGS_omnibusType constinArgument_inSelfType,
                                                                                                                                                                                                                                                                const GGS_routineAttributes constinArgument_inRoutineAttributes,
                                                                                                                                                                                                                                                                const GGS_semanticContext constinArgument_inContext,
                                                                                                                                                                                                                                                                const GGS_mode constinArgument_inMode,
                                                                                                                                                                                                                                                                GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                                                                                                                                                                                                                GGS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                                                                                                                                                                                                                GGS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                                                                                                                                                                                                                GGS_allocaList & ioArgument_ioAllocaList,
                                                                                                                                                                                                                                                                GGS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                                                                                                                                                                                                                GGS_instructionListListIR & ioArgument_ioPendingStoreComputedPropertyInstructionGenerationListList,
                                                                                                                                                                                                                                                                const GGS_lstring constinArgument_inVariableName,
                                                                                                                                                                                                                                                                const GGS_string constinArgument_inLLVMName,
                                                                                                                                                                                                                                                                const GGS_omnibusType constinArgument_inVariableType,
                                                                                                                                                                                                                                                                const GGS_LValueOperandAST constinArgument_inOperand,
                                                                                                                                                                                                                                                                GGS_LValueRepresentation & outArgument_outInternalRepresentation,
                                                                                                                                                                                                                                                                Compiler * inCompiler
                                                                                                                                                                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outInternalRepresentation.drop () ; // Release 'out' argument
  GGS_omnibusType var_currentType_8467 = constinArgument_inVariableType ;
  GGS_string var_currentLLVMName_8502 = constinArgument_inLLVMName ;
  switch (constinArgument_inOperand.enumValue ()) {
  case GGS_LValueOperandAST::Enumeration::invalid:
    break ;
  case GGS_LValueOperandAST::Enumeration::enum_noOperand:
    {
      {
      GGS_objectIR joker_8640 ; // Joker input parameter
      extensionSetter_searchValuedObjectForWriteAccess (ioArgument_ioUniversalMap, constinArgument_inVariableName, joker_8640, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 198)) ;
      }
    }
    break ;
  case GGS_LValueOperandAST::Enumeration::enum_property:
    {
      GGS_lstring extractedValue_8670_name_0 ;
      GGS_LValueOperandAST extractedValue_8693_nextOperand_1 ;
      constinArgument_inOperand.getAssociatedValuesFor_property (extractedValue_8670_name_0, extractedValue_8693_nextOperand_1) ;
      {
      GGS_objectIR joker_8783 ; // Joker input parameter
      extensionSetter_searchValuedObjectForReadWriteAccess (ioArgument_ioUniversalMap, constinArgument_inVariableName, joker_8783, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 200)) ;
      }
      {
      routine_handlePropertyAccessInAssignment_3F_self_26__26__3F_routineAttributes_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_26_pendingStoreComputedPropertyList_3F__3F_ (constinArgument_inSelfType, var_currentType_8467, var_currentLLVMName_8502, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, ioArgument_ioPendingStoreComputedPropertyInstructionGenerationListList, extractedValue_8670_name_0, extractedValue_8693_nextOperand_1, inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 201)) ;
      }
    }
    break ;
  case GGS_LValueOperandAST::Enumeration::enum_arrayAccess:
    {
      GGS_expressionAST extractedValue_9341_indexExpression_0 ;
      GGS_location extractedValue_9357_endOfIndex_1 ;
      GGS_bool extractedValue_9368_checkIndexExpression_2 ;
      GGS_LValueOperandAST extractedValue_9389_nextOperand_3 ;
      constinArgument_inOperand.getAssociatedValuesFor_arrayAccess (extractedValue_9341_indexExpression_0, extractedValue_9357_endOfIndex_1, extractedValue_9368_checkIndexExpression_2, extractedValue_9389_nextOperand_3) ;
      {
      GGS_objectIR joker_9479 ; // Joker input parameter
      extensionSetter_searchValuedObjectForReadWriteAccess (ioArgument_ioUniversalMap, constinArgument_inVariableName, joker_9479, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 218)) ;
      }
      {
      routine_handleArrayAccessInAssignment_3F_self_26__26__3F_routineAttributes_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_26_pendingStoreComputedPropertyList_3F__3F__3F__3F_ (constinArgument_inSelfType, var_currentType_8467, var_currentLLVMName_8502, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, ioArgument_ioPendingStoreComputedPropertyInstructionGenerationListList, extractedValue_9341_indexExpression_0, extractedValue_9357_endOfIndex_1, extractedValue_9368_checkIndexExpression_2, extractedValue_9389_nextOperand_3, inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 219)) ;
      }
    }
    break ;
  }
  outArgument_outInternalRepresentation = GGS_LValueRepresentation::init_21__21_ (var_currentType_8467, var_currentLLVMName_8502, inCompiler COMMA_HERE) ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'handlePropertyAccessInAssignment?self&&?routineAttributes?context?mode&temporary&staticEntityMap&variableMap&alloca&instructionListIR&pendingStoreComputedPropertyList??'
//
//--------------------------------------------------------------------------------------------------

void routine_handlePropertyAccessInAssignment_3F_self_26__26__3F_routineAttributes_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_26_pendingStoreComputedPropertyList_3F__3F_ (const GGS_omnibusType constinArgument_inSelfType,
                                                                                                                                                                                                                                 GGS_omnibusType & ioArgument_ioCurrentType,
                                                                                                                                                                                                                                 GGS_string & ioArgument_ioCurrentLLVMName,
                                                                                                                                                                                                                                 const GGS_routineAttributes constinArgument_inRoutineAttributes,
                                                                                                                                                                                                                                 const GGS_semanticContext constinArgument_inContext,
                                                                                                                                                                                                                                 const GGS_mode constinArgument_inMode,
                                                                                                                                                                                                                                 GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                                                                                                                                                                                 GGS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                                                                                                                                                                                 GGS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                                                                                                                                                                                 GGS_allocaList & ioArgument_ioAllocaList,
                                                                                                                                                                                                                                 GGS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                                                                                                                                                                                 GGS_instructionListListIR & ioArgument_ioPendingStoreComputedPropertyInstructionGenerationListList,
                                                                                                                                                                                                                                 const GGS_lstring constinArgument_inPropertyName,
                                                                                                                                                                                                                                 const GGS_LValueOperandAST constinArgument_inNextOperand,
                                                                                                                                                                                                                                 Compiler * inCompiler
                                                                                                                                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertySetterMap var_propertySetterMap_11091 = extensionGetter_propertySetterMap (constinArgument_inContext, ioArgument_ioCurrentType, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 260)) ;
  GGS_propertySetterKind var_propertyAccess_11391 ;
  GGS_propertyVisibility joker_11363 ; // Joker input parameter
  var_propertySetterMap_11091.method_searchKey (constinArgument_inPropertyName, joker_11363, var_propertyAccess_11391, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 263)) ;
  switch (var_propertyAccess_11391.enumValue ()) {
  case GGS_propertySetterKind::Enumeration::invalid:
    break ;
  case GGS_propertySetterKind::Enumeration::enum_computedProperty:
    {
      GGS_unifiedTypeMapEntry extractedValue_11477_computedPropertyType_0 ;
      GGS_routineLLVMNameDict extractedValue_11498_getterModeDictionary_1 ;
      GGS_routineLLVMNameDict extractedValue_11519_setterModeDictionary_2 ;
      var_propertyAccess_11391.getAssociatedValuesFor_computedProperty (extractedValue_11477_computedPropertyType_0, extractedValue_11498_getterModeDictionary_1, extractedValue_11519_setterModeDictionary_2) ;
      GGS_string var_getterRoutineLLVMName_11577 = function_checkModeAndReturnsRoutineLLVMName (extractedValue_11498_getterModeDictionary_1, constinArgument_inMode, constinArgument_inPropertyName, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 267)) ;
      GGS_objectIR var_resultValueIR_11923 ;
      {
      extensionSetter_appendGetComputedPropertyValue (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, GGS_objectIR::class_func_reference (ioArgument_ioCurrentType, ioArgument_ioCurrentLLVMName  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 270)), var_getterRoutineLLVMName_11577, extensionGetter_type (extractedValue_11477_computedPropertyType_0, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 272)), var_resultValueIR_11923, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 268)) ;
      }
      {
      extensionSetter_referenceFromPossibleValue (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, ioArgument_ioAllocaList, var_resultValueIR_11923, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 276)) ;
      }
      GGS_string var_setterRoutineLLVMName_12137 = function_checkModeAndReturnsRoutineLLVMName (extractedValue_11519_setterModeDictionary_2, constinArgument_inMode, constinArgument_inPropertyName, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 278)) ;
      GGS_instructionListIR temp_0 = GGS_instructionListIR::init (inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 279)) ;
      GGS_instructionListIR var_pendingStoreComputedPropertyInstructionGenerationList_12271 = temp_0 ;
      GGS_objectIR var_tempValueIR_12339 = var_resultValueIR_11923 ;
      {
      extensionSetter_appendLoadWhenReference (var_pendingStoreComputedPropertyInstructionGenerationList_12271, ioArgument_ioTemporaries, var_tempValueIR_12339, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 281)) ;
      }
      {
      extensionSetter_appendStoreComputedPropertyValue (var_pendingStoreComputedPropertyInstructionGenerationList_12271, GGS_objectIR::class_func_reference (ioArgument_ioCurrentType, ioArgument_ioCurrentLLVMName  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 283)), var_setterRoutineLLVMName_12137, var_tempValueIR_12339, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 282)) ;
      }
      ioArgument_ioPendingStoreComputedPropertyInstructionGenerationListList.addAssign_operation (var_pendingStoreComputedPropertyInstructionGenerationList_12271  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 287)) ;
      ioArgument_ioCurrentType = extensionGetter_type (var_resultValueIR_11923, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 289)) ;
      ioArgument_ioCurrentLLVMName = extensionGetter_llvmName (var_resultValueIR_11923, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 290)) ;
      {
      routine_handleNextOperandInAssignment_3F_self_26__26__3F__3F_routineAttributes_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_26_pendingStoreComputedPropertyList (constinArgument_inSelfType, ioArgument_ioCurrentType, ioArgument_ioCurrentLLVMName, constinArgument_inNextOperand, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, ioArgument_ioPendingStoreComputedPropertyInstructionGenerationListList, inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 291)) ;
      }
    }
    break ;
  case GGS_propertySetterKind::Enumeration::enum_storedProperty:
    {
      GGS_omnibusType extractedValue_13481_propertyType_0 ;
      GGS_uint extractedValue_13500_index_1 ;
      var_propertyAccess_11391.getAssociatedValuesFor_storedProperty (extractedValue_13481_propertyType_0, extractedValue_13500_index_1) ;
      GGS_string var_newLLVMvariable_13550 ;
      {
      extensionSetter_newTempLLVMVar (ioArgument_ioTemporaries, var_newLLVMvariable_13550, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 307)) ;
      }
      {
      extensionSetter_appendGetUniversalPropertyReference (ioArgument_ioInstructionGenerationList, ioArgument_ioCurrentType, ioArgument_ioCurrentLLVMName, var_newLLVMvariable_13550, extractedValue_13500_index_1, constinArgument_inPropertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 308)) ;
      }
      ioArgument_ioCurrentType = extractedValue_13481_propertyType_0 ;
      ioArgument_ioCurrentLLVMName = var_newLLVMvariable_13550 ;
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

void routine_handleArrayAccessInAssignment_3F_self_26__26__3F_routineAttributes_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_26_pendingStoreComputedPropertyList_3F__3F__3F__3F_ (const GGS_omnibusType constinArgument_inSelfType,
                                                                                                                                                                                                                                      GGS_omnibusType & ioArgument_ioCurrentType,
                                                                                                                                                                                                                                      GGS_string & ioArgument_ioCurrentLLVMName,
                                                                                                                                                                                                                                      const GGS_routineAttributes constinArgument_inRoutineAttributes,
                                                                                                                                                                                                                                      const GGS_semanticContext constinArgument_inContext,
                                                                                                                                                                                                                                      const GGS_mode constinArgument_inMode,
                                                                                                                                                                                                                                      GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                                                                                                                                                                                      GGS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                                                                                                                                                                                      GGS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                                                                                                                                                                                      GGS_allocaList & ioArgument_ioAllocaList,
                                                                                                                                                                                                                                      GGS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                                                                                                                                                                                      GGS_instructionListListIR & ioArgument_ioPendingStoreComputedPropertyInstructionGenerationListList,
                                                                                                                                                                                                                                      const GGS_expressionAST constinArgument_inIndexExpression,
                                                                                                                                                                                                                                      const GGS_location constinArgument_inEndOfIndex,
                                                                                                                                                                                                                                      const GGS_bool constinArgument_inCheckIndexExpression,
                                                                                                                                                                                                                                      const GGS_LValueOperandAST constinArgument_inNextOperand,
                                                                                                                                                                                                                                      Compiler * inCompiler
                                                                                                                                                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  switch (ioArgument_ioCurrentType.readProperty_subscript ().enumValue ()) {
  case GGS_subscript::Enumeration::invalid:
    break ;
  case GGS_subscript::Enumeration::enum_noSubscript:
    {
      TC_Array <FixItDescription> fixItArray0 ;
      inCompiler->emitSemanticError (constinArgument_inEndOfIndex, GGS_string ("the receiver type is ").add_operation (ioArgument_ioCurrentType.readProperty_omnibusTypeDescriptionName (), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 358)).add_operation (GGS_string (" and does not accept subscripting"), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 358)), fixItArray0  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 357)) ;
    }
    break ;
  case GGS_subscript::Enumeration::enum_literalString:
    {
      TC_Array <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inEndOfIndex, GGS_string ("the receiver type is literal string and does not accept subscripting"), fixItArray1  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 360)) ;
      ioArgument_ioCurrentType.drop () ; // Release error dropped variable
      ioArgument_ioCurrentLLVMName.drop () ; // Release error dropped variable
    }
    break ;
  case GGS_subscript::Enumeration::enum_staticSubscript:
    {
      GGS_omnibusType extractedValue_15674_elementType_0 ;
      GGS_bigint extractedValue_15694_arraySize_1 ;
      ioArgument_ioCurrentType.readProperty_subscript ().getAssociatedValuesFor_staticSubscript (extractedValue_15674_elementType_0, extractedValue_15694_arraySize_1) ;
      GGS_objectIR var_indexIR_16182 ;
      {
      routine_handleArraySubscriptNew_3F_self_3F_routineAttributes_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_3F__3F__3F__3F_arraySize_3F_elementType_26__21_ (constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, constinArgument_inIndexExpression, constinArgument_inEndOfIndex, constinArgument_inCheckIndexExpression, extractedValue_15694_arraySize_1, extractedValue_15674_elementType_0, ioArgument_ioInstructionGenerationList, var_indexIR_16182, inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 364)) ;
      }
      GGS_string var_newLLVMvariable_16237 ;
      {
      extensionSetter_newTempLLVMVar (ioArgument_ioTemporaries, var_newLLVMvariable_16237, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 381)) ;
      }
      {
      extensionSetter_appendGetUniversalArrayElementReference (ioArgument_ioInstructionGenerationList, ioArgument_ioCurrentType, ioArgument_ioCurrentLLVMName, extractedValue_15674_elementType_0, var_newLLVMvariable_16237, var_indexIR_16182, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 382)) ;
      }
      ioArgument_ioCurrentType = extractedValue_15674_elementType_0 ;
      ioArgument_ioCurrentLLVMName = var_newLLVMvariable_16237 ;
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

void routine_analyzeSelfLValueInAssignment_3F_self_3F_routineAttributes_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_26_pendingStoreComputedPropertyList_3F__21_ (const GGS_omnibusType constinArgument_inSelfType,
                                                                                                                                                                                                                      const GGS_routineAttributes constinArgument_inRoutineAttributes,
                                                                                                                                                                                                                      const GGS_semanticContext constinArgument_inContext,
                                                                                                                                                                                                                      const GGS_mode constinArgument_inMode,
                                                                                                                                                                                                                      GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                                                                                                                                                                      GGS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                                                                                                                                                                      GGS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                                                                                                                                                                      GGS_allocaList & ioArgument_ioAllocaList,
                                                                                                                                                                                                                      GGS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                                                                                                                                                                      GGS_instructionListListIR & ioArgument_ioPendingStoreComputedPropertyInstructionGenerationListList,
                                                                                                                                                                                                                      const GGS_LValueOperandAST constinArgument_inOperand,
                                                                                                                                                                                                                      GGS_LValueRepresentation & outArgument_outInternalRepresentation,
                                                                                                                                                                                                                      Compiler * inCompiler
                                                                                                                                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outInternalRepresentation.drop () ; // Release 'out' argument
  GGS_omnibusType var_currentType_17862 = constinArgument_inSelfType ;
  GGS_string var_currentLLVMName_17893 = function_llvmNameForSelf (inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 426)) ;
  switch (constinArgument_inOperand.enumValue ()) {
  case GGS_LValueOperandAST::Enumeration::invalid:
    break ;
  case GGS_LValueOperandAST::Enumeration::enum_noOperand:
    break ;
  case GGS_LValueOperandAST::Enumeration::enum_property:
    {
      GGS_lstring extractedValue_17994_name_0 ;
      GGS_LValueOperandAST extractedValue_18017_next_1 ;
      constinArgument_inOperand.getAssociatedValuesFor_property (extractedValue_17994_name_0, extractedValue_18017_next_1) ;
      {
      routine_handlePropertyAccessInAssignment_3F_self_26__26__3F_routineAttributes_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_26_pendingStoreComputedPropertyList_3F__3F_ (constinArgument_inSelfType, var_currentType_17862, var_currentLLVMName_17893, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, ioArgument_ioPendingStoreComputedPropertyInstructionGenerationListList, extractedValue_17994_name_0, extractedValue_18017_next_1, inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 430)) ;
      }
    }
    break ;
  case GGS_LValueOperandAST::Enumeration::enum_arrayAccess:
    {
      GGS_expressionAST extractedValue_18572_indexExpression_0 ;
      GGS_location extractedValue_18588_endOfIndex_1 ;
      GGS_bool extractedValue_18599_checkIndexExpression_2 ;
      GGS_LValueOperandAST extractedValue_18620_nextOperand_3 ;
      constinArgument_inOperand.getAssociatedValuesFor_arrayAccess (extractedValue_18572_indexExpression_0, extractedValue_18588_endOfIndex_1, extractedValue_18599_checkIndexExpression_2, extractedValue_18620_nextOperand_3) ;
      {
      routine_handleArrayAccessInAssignment_3F_self_26__26__3F_routineAttributes_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_26_pendingStoreComputedPropertyList_3F__3F__3F__3F_ (constinArgument_inSelfType, var_currentType_17862, var_currentLLVMName_17893, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, ioArgument_ioPendingStoreComputedPropertyInstructionGenerationListList, extractedValue_18572_indexExpression_0, extractedValue_18588_endOfIndex_1, extractedValue_18599_checkIndexExpression_2, extractedValue_18620_nextOperand_3, inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 447)) ;
      }
    }
    break ;
  }
  outArgument_outInternalRepresentation = GGS_LValueRepresentation::init_21__21_ (var_currentType_17862, var_currentLLVMName_17893, inCompiler COMMA_HERE) ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'handleNextOperandInAssignment?self&&??routineAttributes?context?mode&temporary&staticEntityMap&variableMap&alloca&instructionListIR&pendingStoreComputedPropertyList'
//
//--------------------------------------------------------------------------------------------------

void routine_handleNextOperandInAssignment_3F_self_26__26__3F__3F_routineAttributes_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_26_pendingStoreComputedPropertyList (const GGS_omnibusType constinArgument_inSelfType,
                                                                                                                                                                                                                          GGS_omnibusType & ioArgument_ioCurrentType,
                                                                                                                                                                                                                          GGS_string & ioArgument_ioCurrentLLVMName,
                                                                                                                                                                                                                          const GGS_LValueOperandAST constinArgument_inOperand,
                                                                                                                                                                                                                          const GGS_routineAttributes constinArgument_inRoutineAttributes,
                                                                                                                                                                                                                          const GGS_semanticContext constinArgument_inContext,
                                                                                                                                                                                                                          const GGS_mode constinArgument_inMode,
                                                                                                                                                                                                                          GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                                                                                                                                                                          GGS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                                                                                                                                                                          GGS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                                                                                                                                                                          GGS_allocaList & ioArgument_ioAllocaList,
                                                                                                                                                                                                                          GGS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                                                                                                                                                                          GGS_instructionListListIR & ioArgument_ioPendingStoreComputedPropertyInstructionGenerationListList,
                                                                                                                                                                                                                          Compiler * inCompiler
                                                                                                                                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  switch (constinArgument_inOperand.enumValue ()) {
  case GGS_LValueOperandAST::Enumeration::invalid:
    break ;
  case GGS_LValueOperandAST::Enumeration::enum_noOperand:
    break ;
  case GGS_LValueOperandAST::Enumeration::enum_property:
    {
      GGS_lstring extractedValue_20181_name_0 ;
      GGS_LValueOperandAST extractedValue_20204_next_1 ;
      constinArgument_inOperand.getAssociatedValuesFor_property (extractedValue_20181_name_0, extractedValue_20204_next_1) ;
      {
      routine_handlePropertyAccessInAssignment_3F_self_26__26__3F_routineAttributes_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_26_pendingStoreComputedPropertyList_3F__3F_ (constinArgument_inSelfType, ioArgument_ioCurrentType, ioArgument_ioCurrentLLVMName, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, ioArgument_ioPendingStoreComputedPropertyInstructionGenerationListList, extractedValue_20181_name_0, extractedValue_20204_next_1, inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 489)) ;
      }
    }
    break ;
  case GGS_LValueOperandAST::Enumeration::enum_arrayAccess:
    {
      GGS_expressionAST extractedValue_20763_indexExpression_0 ;
      GGS_location extractedValue_20779_endOfIndex_1 ;
      GGS_bool extractedValue_20790_checkIndexExpression_2 ;
      GGS_LValueOperandAST extractedValue_20811_nextOperand_3 ;
      constinArgument_inOperand.getAssociatedValuesFor_arrayAccess (extractedValue_20763_indexExpression_0, extractedValue_20779_endOfIndex_1, extractedValue_20790_checkIndexExpression_2, extractedValue_20811_nextOperand_3) ;
      {
      routine_handleArrayAccessInAssignment_3F_self_26__26__3F_routineAttributes_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_26_pendingStoreComputedPropertyList_3F__3F__3F__3F_ (constinArgument_inSelfType, ioArgument_ioCurrentType, ioArgument_ioCurrentLLVMName, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, ioArgument_ioPendingStoreComputedPropertyInstructionGenerationListList, extractedValue_20763_indexExpression_0, extractedValue_20779_endOfIndex_1, extractedValue_20790_checkIndexExpression_2, extractedValue_20811_nextOperand_3, inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 506)) ;
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

void cPtr_controlRegisterAssignmentInstructionAST::method_noteInstructionTypesInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_controlRegisterAssignmentInstructionAST temp_0 = this ;
  extensionMethod_noteExpressionTypesInPrecedenceGraph (temp_0.readProperty_mControlRegisterLValue (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-control-register.galgas", 59)) ;
  const GGS_controlRegisterAssignmentInstructionAST temp_1 = this ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((cPtr_expressionAST *) temp_1.readProperty_mSourceExpression ().ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-control-register.galgas", 60)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@controlRegisterAssignmentInstructionAST instructionSemanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_controlRegisterAssignmentInstructionAST::method_instructionSemanticAnalysis (const GGS_omnibusType constinArgument_inSelfType,
                                                                                       const GGS_routineAttributes constinArgument_inRoutineAttributes,
                                                                                       const GGS_semanticContext constinArgument_inContext,
                                                                                       const GGS_mode constinArgument_inMode,
                                                                                       GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                                       GGS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                                       GGS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                                       GGS_allocaList & ioArgument_ioAllocaList,
                                                                                       GGS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_omnibusType var_registerType_4178 ;
  GGS_string var_llvmRegAddressName_4264 ;
  const GGS_controlRegisterAssignmentInstructionAST temp_0 = this ;
  GGS_uint joker_4195 ; // Joker input parameter
  GGS_sliceMap joker_4219 ; // Joker input parameter
  extensionMethod_controlRegisterLValueSemanticAnalysis (temp_0.readProperty_mControlRegisterLValue (), GGS_bool (true), constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_registerType_4178, joker_4195, joker_4219, var_llvmRegAddressName_4264, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-control-register.galgas", 79)) ;
  GGS_objectIR var_sourceIR_4723 ;
  const GGS_controlRegisterAssignmentInstructionAST temp_1 = this ;
  callExtensionMethod_analyzeExpression ((cPtr_expressionAST *) temp_1.readProperty_mSourceExpression ().ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, var_registerType_4178, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_sourceIR_4723, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-control-register.galgas", 96)) ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_sourceIR_4723, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-control-register.galgas", 110)) ;
  }
  GGS_omnibusType var_t_4924 = extensionGetter_type (var_sourceIR_4723, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-control-register.galgas", 115)) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = callExtensionGetter_copyable ((const cPtr_omnibusType *) var_t_4924.ptr (), inCompiler COMMA_SOURCE_FILE ("instruction-assignment-control-register.galgas", 116)).operator_not (SOURCE_FILE ("instruction-assignment-control-register.galgas", 116)).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      const GGS_controlRegisterAssignmentInstructionAST temp_3 = this ;
      TC_Array <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mControlRegisterLValue ().readProperty_mRegisterGroupName ().readProperty_location (), GGS_string ("source expression is not copyable"), fixItArray4  COMMA_SOURCE_FILE ("instruction-assignment-control-register.galgas", 117)) ;
    }
  }
  if (GalgasBool::boolFalse == test_2) {
    const GGS_controlRegisterAssignmentInstructionAST temp_5 = this ;
    switch (temp_5.readProperty_mAssignmentKind ().enumValue ()) {
    case GGS_controlRegisterAssignmentOperatorKind::Enumeration::invalid:
      break ;
    case GGS_controlRegisterAssignmentOperatorKind::Enumeration::enum_assignment:
      {
        {
        extensionSetter_appendStoreIndirectVolatileRegister (ioArgument_ioInstructionGenerationList, var_registerType_4178, var_llvmRegAddressName_4264, var_sourceIR_4723, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-control-register.galgas", 121)) ;
        }
      }
      break ;
    case GGS_controlRegisterAssignmentOperatorKind::Enumeration::enum_assignmentWithOperator:
      {
        GGS_omnibusInfixOperator extractedValue_5278_infixOperator_0 ;
        GGS_location extractedValue_5292_operatorLocation_1 ;
        temp_5.readProperty_mAssignmentKind ().getAssociatedValuesFor_assignmentWithOperator (extractedValue_5278_infixOperator_0, extractedValue_5292_operatorLocation_1) ;
        GGS_objectIR var_registerValueIR_5393 ;
        {
        routine_getNewTempValue_3F__26__21_ (var_registerType_4178, ioArgument_ioTemporaries, var_registerValueIR_5393, inCompiler  COMMA_SOURCE_FILE ("instruction-assignment-control-register.galgas", 124)) ;
        }
        {
        extensionSetter_appendLoadIndirectVolatileRegister (ioArgument_ioInstructionGenerationList, var_registerValueIR_5393, var_llvmRegAddressName_4264, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-control-register.galgas", 125)) ;
        }
        GGS_lstring var_key_5557 = function_infixOperatorMapKey (var_registerType_4178, extractedValue_5278_infixOperator_0, extractedValue_5292_operatorLocation_1, extensionGetter_type (var_sourceIR_4723, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-control-register.galgas", 127)), inCompiler COMMA_SOURCE_FILE ("instruction-assignment-control-register.galgas", 127)) ;
        GGS_omnibusType var_resultType_5704 ;
        GGS_omnibusInfixOperatorUsage var_operatorUsage_5720 ;
        constinArgument_inContext.readProperty_mInfixOperatorMap ().method_searchKey (var_key_5557, var_resultType_5704, var_operatorUsage_5720, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-control-register.galgas", 128)) ;
        GGS_objectIR var_operationResult_5964 ;
        callExtensionMethod_generateCode ((cPtr_omnibusInfixOperatorUsage *) var_operatorUsage_5720.ptr (), var_registerValueIR_5393, extractedValue_5292_operatorLocation_1, var_sourceIR_4723, var_resultType_5704, ioArgument_ioTemporaries, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_operationResult_5964, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-control-register.galgas", 129)) ;
        {
        extensionSetter_appendStoreIndirectVolatileRegister (ioArgument_ioInstructionGenerationList, var_registerType_4178, var_llvmRegAddressName_4264, var_operationResult_5964, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-control-register.galgas", 158)) ;
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

void cPtr_sliceAssignmentInstructionAST::method_noteInstructionTypesInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_sliceAssignmentInstructionAST temp_0 = this ;
  ioArgument_ioGraph.setter_noteNode (temp_0.readProperty_mTypeName () COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 84)) ;
  }
  const GGS_sliceAssignmentInstructionAST temp_1 = this ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((cPtr_expressionAST *) temp_1.readProperty_mSourceExpression ().ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 85)) ;
  const GGS_sliceAssignmentInstructionAST temp_2 = this ;
  UpEnumerator_sliceAssignmentListAST enumerator_3253 (temp_2.readProperty_mSliceAssignmentList ()) ;
  while (enumerator_3253.hasCurrentObject ()) {
    switch (enumerator_3253.current_mSliceKind (HERE).enumValue ()) {
    case GGS_sliceTargetAST::Enumeration::invalid:
      break ;
    case GGS_sliceTargetAST::Enumeration::enum_discarded:
      break ;
    case GGS_sliceTargetAST::Enumeration::enum_varDeclaration:
      break ;
    case GGS_sliceTargetAST::Enumeration::enum_letDeclaration:
      break ;
    case GGS_sliceTargetAST::Enumeration::enum_lValue:
      {
        GGS_LValueAST extractedValue_3426_target_0 ;
        enumerator_3253.current_mSliceKind (HERE).getAssociatedValuesFor_lValue (extractedValue_3426_target_0) ;
        extensionMethod_noteInstructionTypesInPrecedenceGraph (extractedValue_3426_target_0, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 92)) ;
      }
      break ;
    }
    enumerator_3253.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@sliceAssignmentInstructionAST instructionSemanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_sliceAssignmentInstructionAST::method_instructionSemanticAnalysis (const GGS_omnibusType constinArgument_inSelfType,
                                                                             const GGS_routineAttributes constinArgument_inRoutineAttributes,
                                                                             const GGS_semanticContext constinArgument_inContext,
                                                                             const GGS_mode constinArgument_inMode,
                                                                             GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                             GGS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                             GGS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                             GGS_allocaList & ioArgument_ioAllocaList,
                                                                             GGS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_sliceAssignmentInstructionAST temp_0 = this ;
  GGS_omnibusType var_resultType_4375 = extensionGetter_type (extensionGetter_searchKey (constinArgument_inContext.readProperty_mTypeMap (), temp_0.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 113)), inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 113)) ;
  GGS_uint var_bitCount_4498 ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = var_resultType_4375.readProperty_kind ().getter_isInteger (SOURCE_FILE ("instruction-slice-assignment.galgas", 116)).operator_not (SOURCE_FILE ("instruction-slice-assignment.galgas", 116)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_sliceAssignmentInstructionAST temp_2 = this ;
      TC_Array <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mTypeName ().readProperty_location (), GGS_string ("this type should be an unsigned integer type"), fixItArray3  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 117)) ;
      var_bitCount_4498.drop () ; // Release error dropped variable
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    GGS_bool var_unsigned_4694 ;
    GGS_bigint joker_4676_2 ; // Joker input parameter
    GGS_bigint joker_4676_1 ; // Joker input parameter
    var_resultType_4375.readProperty_kind ().method_extractInteger (joker_4676_2, joker_4676_1, var_unsigned_4694, var_bitCount_4498, inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 119)) ;
    GalgasBool test_4 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_4) {
      test_4 = var_unsigned_4694.operator_not (SOURCE_FILE ("instruction-slice-assignment.galgas", 120)).boolEnum () ;
      if (GalgasBool::boolTrue == test_4) {
        const GGS_sliceAssignmentInstructionAST temp_5 = this ;
        TC_Array <FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (temp_5.readProperty_mTypeName ().readProperty_location (), GGS_string ("this type should be an unsigned integer type"), fixItArray6  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 121)) ;
        var_bitCount_4498.drop () ; // Release error dropped variable
      }
    }
  }
  GGS_objectIR var_sourceOperand_5265 ;
  const GGS_sliceAssignmentInstructionAST temp_7 = this ;
  callExtensionMethod_analyzeExpression ((cPtr_expressionAST *) temp_7.readProperty_mSourceExpression ().ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, var_resultType_4375, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_sourceOperand_5265, inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 125)) ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_sourceOperand_5265, inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 139)) ;
  }
  GalgasBool test_8 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_8) {
    test_8 = var_sourceOperand_5265.getter_isLiteralInteger (SOURCE_FILE ("instruction-slice-assignment.galgas", 141)).boolEnum () ;
    if (GalgasBool::boolTrue == test_8) {
      GGS_bigint var_value_5589 ;
      GGS_omnibusType joker_5566_1 ; // Joker input parameter
      var_sourceOperand_5265.method_extractLiteralInteger (joker_5566_1, var_value_5589, inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 142)) ;
      GalgasBool test_9 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_9) {
        test_9 = GGS_bool (ComparisonKind::greaterOrEqual, var_value_5589.objectCompare (GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 143)).left_shift_operation (var_bitCount_4498, inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 143)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_9) {
          const GGS_sliceAssignmentInstructionAST temp_10 = this ;
          TC_Array <FixItDescription> fixItArray11 ;
          inCompiler->emitSemanticError (temp_10.readProperty_mSourceExpressionLocation (), GGS_string ("static value too large"), fixItArray11  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 144)) ;
          var_sourceOperand_5265.drop () ; // Release error dropped variable
        }
      }
      if (GalgasBool::boolFalse == test_9) {
        var_sourceOperand_5265 = GGS_objectIR::class_func_literalInteger (var_resultType_4375, var_value_5589  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 146)) ;
      }
    }
  }
  GGS_uint var_rightShiftAmount_5838 = var_bitCount_4498 ;
  const GGS_sliceAssignmentInstructionAST temp_12 = this ;
  UpEnumerator_sliceAssignmentListAST enumerator_5887 (temp_12.readProperty_mSliceAssignmentList ()) ;
  while (enumerator_5887.hasCurrentObject ()) {
    GGS_objectIR var_sourceOperandForSlicing_5938 = var_sourceOperand_5265 ;
    GGS_lstring var_sliceTypeName_6019 ;
    GGS_uint var_sliceWidth_6047 ;
    GalgasBool test_13 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_13) {
      test_13 = GGS_bool (ComparisonKind::equal, enumerator_5887.current_mSliceWidth (HERE).readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_13) {
        TC_Array <FixItDescription> fixItArray14 ;
        inCompiler->emitSemanticError (enumerator_5887.current_mSliceWidth (HERE).readProperty_location (), GGS_string ("anonymous selector not allowed here"), fixItArray14  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 157)) ;
        var_sliceWidth_6047.drop () ; // Release error dropped variable
        var_sliceTypeName_6019.drop () ; // Release error dropped variable
      }
    }
    if (GalgasBool::boolFalse == test_13) {
      GalgasBool test_15 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_15) {
        test_15 = GGS_bool (ComparisonKind::equal, enumerator_5887.current_mSliceWidth (HERE).readProperty_string ().objectCompare (GGS_string ("b"))).boolEnum () ;
        if (GalgasBool::boolTrue == test_15) {
          var_sliceWidth_6047 = GGS_uint (uint32_t (1U)) ;
          const GGS_sliceAssignmentInstructionAST temp_16 = this ;
          var_sliceTypeName_6019 = GGS_lstring::init_21__21_ (function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 160)), temp_16.readProperty_mTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
        }
      }
      if (GalgasBool::boolFalse == test_15) {
        GalgasBool test_17 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_17) {
          test_17 = enumerator_5887.current_mSliceWidth (HERE).readProperty_string ().getter_isDecimalUnsignedNumber (SOURCE_FILE ("instruction-slice-assignment.galgas", 161)).operator_not (SOURCE_FILE ("instruction-slice-assignment.galgas", 161)).boolEnum () ;
          if (GalgasBool::boolTrue == test_17) {
            TC_Array <FixItDescription> fixItArray18 ;
            inCompiler->emitSemanticError (enumerator_5887.current_mSliceWidth (HERE).readProperty_location (), GGS_string ("the selector should be an unsigned integer value"), fixItArray18  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 162)) ;
            var_sliceWidth_6047.drop () ; // Release error dropped variable
            var_sliceTypeName_6019.drop () ; // Release error dropped variable
          }
        }
        if (GalgasBool::boolFalse == test_17) {
          var_sliceWidth_6047 = enumerator_5887.current_mSliceWidth (HERE).readProperty_string ().getter_decimalUnsignedNumber (inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 164)) ;
          const GGS_sliceAssignmentInstructionAST temp_19 = this ;
          var_sliceTypeName_6019 = GGS_lstring::init_21__21_ (GGS_string ("u").add_operation (var_sliceWidth_6047.getter_string (SOURCE_FILE ("instruction-slice-assignment.galgas", 165)), inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 165)), temp_19.readProperty_mTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
          GalgasBool test_20 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_20) {
            test_20 = GGS_bool (ComparisonKind::equal, var_sliceWidth_6047.objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
            if (GalgasBool::boolTrue == test_20) {
              TC_Array <FixItDescription> fixItArray21 ;
              inCompiler->emitSemanticError (enumerator_5887.current_mSliceWidth (HERE).readProperty_location (), GGS_string ("the bit slice width should be > 0"), fixItArray21  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 167)) ;
            }
          }
        }
      }
    }
    GalgasBool test_22 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_22) {
      test_22 = GGS_bool (ComparisonKind::greaterOrEqual, var_rightShiftAmount_5838.objectCompare (var_sliceWidth_6047)).boolEnum () ;
      if (GalgasBool::boolTrue == test_22) {
        var_rightShiftAmount_5838 = var_rightShiftAmount_5838.substract_operation (var_sliceWidth_6047, inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 171)) ;
      }
    }
    if (GalgasBool::boolFalse == test_22) {
      GGS_uint var_specifiedBitCount_6860 = var_bitCount_4498.add_operation (var_sliceWidth_6047, inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 173)).substract_operation (var_rightShiftAmount_5838, inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 173)) ;
      TC_Array <FixItDescription> fixItArray23 ;
      inCompiler->emitSemanticError (enumerator_5887.current_mSliceWidth (HERE).readProperty_location (), GGS_string ("bit slice overflow: ").add_operation (var_specifiedBitCount_6860.getter_string (SOURCE_FILE ("instruction-slice-assignment.galgas", 174)), inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 174)).add_operation (GGS_string (" bits, should be "), inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 174)).add_operation (var_bitCount_4498.getter_string (SOURCE_FILE ("instruction-slice-assignment.galgas", 174)), inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 174)), fixItArray23  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 174)) ;
      var_rightShiftAmount_5838 = GGS_uint (uint32_t (0U)) ;
    }
    GGS_omnibusType var_sliceType_7068 = extensionGetter_type (extensionGetter_searchKey (constinArgument_inContext.readProperty_mTypeMap (), var_sliceTypeName_6019, inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 177)), inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 177)) ;
    {
    extensionSetter_appendLogicalShiftRight (ioArgument_ioInstructionGenerationList, var_sourceOperandForSlicing_5938, var_rightShiftAmount_5838, ioArgument_ioTemporaries, inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 179)) ;
    }
    {
    extensionSetter_appendTrunc (ioArgument_ioInstructionGenerationList, var_sliceType_7068, var_sourceOperandForSlicing_5938, ioArgument_ioTemporaries, inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 180)) ;
    }
    switch (enumerator_5887.current_mSliceKind (HERE).enumValue ()) {
    case GGS_sliceTargetAST::Enumeration::invalid:
      break ;
    case GGS_sliceTargetAST::Enumeration::enum_discarded:
      break ;
    case GGS_sliceTargetAST::Enumeration::enum_varDeclaration:
      {
        GGS_lstring extractedValue_7482_varName_0 ;
        enumerator_5887.current_mSliceKind (HERE).getAssociatedValuesFor_varDeclaration (extractedValue_7482_varName_0) ;
        GGS_lstring var_omnibusLocalVariableName_7535 = GGS_lstring::init_21__21_ (extractedValue_7482_varName_0.readProperty_string ().add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 186)).add_operation (ioArgument_ioTemporaries.readProperty_mTemporaryIndex ().getter_string (SOURCE_FILE ("instruction-slice-assignment.galgas", 186)), inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 186)), extractedValue_7482_varName_0.readProperty_location (), inCompiler COMMA_HERE) ;
        ioArgument_ioTemporaries.mProperty_mTemporaryIndex.plusAssign_operation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 187)) ;
        {
        extensionSetter_insertLocalVariable (ioArgument_ioUniversalMap, extractedValue_7482_varName_0, var_sliceType_7068, var_omnibusLocalVariableName_7535, GGS_valuedObjectState::class_func_hasUnreadValue (SOURCE_FILE ("instruction-slice-assignment.galgas", 188)), GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 188)) ;
        }
        ioArgument_ioAllocaList.addAssign_operation (function_llvmNameForLocalVariable (var_omnibusLocalVariableName_7535.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 190)), var_sliceType_7068, GGS_bool (false)  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 190)) ;
        GGS_LValueRepresentation var_targetRef_7947 = GGS_LValueRepresentation::init_21__21_ (var_sliceType_7068, function_llvmNameForLocalVariable (var_omnibusLocalVariableName_7535.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 194)), inCompiler COMMA_HERE) ;
        {
        extensionSetter_appendCopyFromReferences (ioArgument_ioInstructionGenerationList, constinArgument_inContext.readProperty_mAssignmentOperatorMap (), ioArgument_ioTemporaries, extractedValue_7482_varName_0.readProperty_location (), var_sourceOperandForSlicing_5938, var_targetRef_7947, inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 197)) ;
        }
      }
      break ;
    case GGS_sliceTargetAST::Enumeration::enum_letDeclaration:
      {
        GGS_lstring extractedValue_8379_letName_0 ;
        enumerator_5887.current_mSliceKind (HERE).getAssociatedValuesFor_letDeclaration (extractedValue_8379_letName_0) ;
        GGS_lstring var_omnibusLocalVariableName_8432 = GGS_lstring::init_21__21_ (extractedValue_8379_letName_0.readProperty_string ().add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 206)).add_operation (ioArgument_ioTemporaries.readProperty_mTemporaryIndex ().getter_string (SOURCE_FILE ("instruction-slice-assignment.galgas", 206)), inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 206)), extractedValue_8379_letName_0.readProperty_location (), inCompiler COMMA_HERE) ;
        ioArgument_ioTemporaries.mProperty_mTemporaryIndex.plusAssign_operation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 207)) ;
        {
        extensionSetter_insertLocalConstant (ioArgument_ioUniversalMap, extractedValue_8379_letName_0, GGS_bool (false), var_sliceType_7068, var_omnibusLocalVariableName_8432, inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 208)) ;
        }
        ioArgument_ioAllocaList.addAssign_operation (function_llvmNameForLocalVariable (var_omnibusLocalVariableName_8432.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 210)), var_sliceType_7068, GGS_bool (false)  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 210)) ;
        GGS_LValueRepresentation var_targetRef_8827 = GGS_LValueRepresentation::init_21__21_ (var_sliceType_7068, function_llvmNameForLocalVariable (var_omnibusLocalVariableName_8432.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 214)), inCompiler COMMA_HERE) ;
        {
        extensionSetter_appendCopyFromReferences (ioArgument_ioInstructionGenerationList, constinArgument_inContext.readProperty_mAssignmentOperatorMap (), ioArgument_ioTemporaries, extractedValue_8379_letName_0.readProperty_location (), var_sourceOperandForSlicing_5938, var_targetRef_8827, inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 217)) ;
        }
      }
      break ;
    case GGS_sliceTargetAST::Enumeration::enum_lValue:
      {
        GGS_LValueAST extractedValue_9264_target_0 ;
        enumerator_5887.current_mSliceKind (HERE).getAssociatedValuesFor_lValue (extractedValue_9264_target_0) ;
        GGS_LValueRepresentation var_lvalueIR_9693 ;
        extensionMethod_analyzeLValue (extractedValue_9264_target_0, constinArgument_inSelfType, GGS_bool (false), constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_lvalueIR_9693, inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 225)) ;
        {
        extensionSetter_appendCopyFromReferences (ioArgument_ioInstructionGenerationList, constinArgument_inContext.readProperty_mAssignmentOperatorMap (), ioArgument_ioTemporaries, extractedValue_9264_target_0.readProperty_mIdentifier ().readProperty_location (), var_sourceOperandForSlicing_5938, var_lvalueIR_9693, inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 239)) ;
        }
      }
      break ;
    }
    enumerator_5887.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@bitbandInstructionAST noteInstructionTypesInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_bitbandInstructionAST::method_noteInstructionTypesInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_bitbandInstructionAST temp_0 = this ;
  extensionMethod_noteExpressionTypesInPrecedenceGraph (temp_0.readProperty_mControlRegisterLValue (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 51)) ;
  {
  ioArgument_ioGraph.setter_noteNode (GGS_string ("u1").getter_nowhere (SOURCE_FILE ("instruction-bit-banding.galgas", 52)) COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 52)) ;
  }
  const GGS_bitbandInstructionAST temp_1 = this ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((cPtr_expressionAST *) temp_1.readProperty_mBitExpression ().ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 53)) ;
  const GGS_bitbandInstructionAST temp_2 = this ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((cPtr_expressionAST *) temp_2.readProperty_mSourceExpression ().ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 54)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@bitbandInstructionAST instructionSemanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_bitbandInstructionAST::method_instructionSemanticAnalysis (const GGS_omnibusType constinArgument_inSelfType,
                                                                     const GGS_routineAttributes constinArgument_inRoutineAttributes,
                                                                     const GGS_semanticContext constinArgument_inContext,
                                                                     const GGS_mode constinArgument_inMode,
                                                                     GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                     GGS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                     GGS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                     GGS_allocaList & ioArgument_ioAllocaList,
                                                                     GGS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_omnibusType var_requiredSourceExpressionType_3616 ;
  const GGS_bitbandInstructionAST temp_0 = this ;
  extensionMethod_searchType (constinArgument_inContext.readProperty_mTypeMap (), GGS_lstring::init_21__21_ (GGS_string ("u1"), temp_0.readProperty_mSourceExpressionLocation (), inCompiler COMMA_HERE), var_requiredSourceExpressionType_3616, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 74)) ;
  GGS_objectIR var_sourceExpressionOperand_4084 ;
  const GGS_bitbandInstructionAST temp_1 = this ;
  callExtensionMethod_analyzeExpression ((cPtr_expressionAST *) temp_1.readProperty_mSourceExpression ().ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, var_requiredSourceExpressionType_3616, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_sourceExpressionOperand_4084, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 79)) ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_sourceExpressionOperand_4084, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 93)) ;
  }
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    GGS_bool test_3 = GGS_bool (ComparisonKind::equal, extensionGetter_type (var_sourceExpressionOperand_4084, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 98)).readProperty_omnibusTypeDescriptionName ().objectCompare (function_ctIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 98)))) ;
    if (GalgasBool::boolTrue == test_3.boolEnum ()) {
      test_3 = var_sourceExpressionOperand_4084.getter_isLiteralInteger (SOURCE_FILE ("instruction-bit-banding.galgas", 98)) ;
    }
    test_2 = test_3.boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      GGS_bigint var_value_4575 ;
      GGS_omnibusType joker_4552_1 ; // Joker input parameter
      var_sourceExpressionOperand_4084.method_extractLiteralInteger (joker_4552_1, var_value_4575, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 99)) ;
      GalgasBool test_4 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_4) {
        GGS_bool test_5 = GGS_bool (ComparisonKind::lowerThan, var_value_4575.objectCompare (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 100)))) ;
        if (GalgasBool::boolTrue != test_5.boolEnum ()) {
          test_5 = GGS_bool (ComparisonKind::greaterThan, var_value_4575.objectCompare (GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 100)))) ;
        }
        test_4 = test_5.boolEnum () ;
        if (GalgasBool::boolTrue == test_4) {
          const GGS_bitbandInstructionAST temp_6 = this ;
          TC_Array <FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (temp_6.readProperty_mSourceExpressionLocation (), GGS_string ("static value should be 0 or 1"), fixItArray7  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 101)) ;
        }
      }
      if (GalgasBool::boolFalse == test_4) {
        var_sourceExpressionOperand_4084 = GGS_objectIR::class_func_literalInteger (var_requiredSourceExpressionType_3616, var_value_4575  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 103)) ;
      }
    }
  }
  if (GalgasBool::boolFalse == test_2) {
    GalgasBool test_8 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_8) {
      test_8 = GGS_bool (ComparisonKind::notEqual, extensionGetter_type (var_sourceExpressionOperand_4084, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 105)).readProperty_omnibusTypeDescriptionName ().objectCompare (var_requiredSourceExpressionType_3616.readProperty_omnibusTypeDescriptionName ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_8) {
        const GGS_bitbandInstructionAST temp_9 = this ;
        TC_Array <FixItDescription> fixItArray10 ;
        inCompiler->emitSemanticError (temp_9.readProperty_mSourceExpressionLocation (), GGS_string ("bit expression type should be $").add_operation (var_requiredSourceExpressionType_3616.readProperty_omnibusTypeDescriptionName (), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 106)), fixItArray10  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 106)) ;
      }
    }
  }
  GGS_uint var_registerBitCount_5562 ;
  GGS_string var_llvmRegisterAddressName_5628 ;
  const GGS_bitbandInstructionAST temp_11 = this ;
  GGS_omnibusType joker_5520 ; // Joker input parameter
  GGS_sliceMap joker_5583 ; // Joker input parameter
  extensionMethod_controlRegisterLValueSemanticAnalysis (temp_11.readProperty_mControlRegisterLValue (), GGS_bool (false), constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, joker_5520, var_registerBitCount_5562, joker_5583, var_llvmRegisterAddressName_5628, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 109)) ;
  GGS_omnibusType var_requiredBitExpressionType_5866 ;
  const GGS_bitbandInstructionAST temp_12 = this ;
  extensionMethod_searchType (constinArgument_inContext.readProperty_mTypeMap (), GGS_lstring::init_21__21_ (GGS_string ("u").add_operation (var_registerBitCount_5562.substract_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 129)).getter_significantBitCount (SOURCE_FILE ("instruction-bit-banding.galgas", 129)).getter_string (SOURCE_FILE ("instruction-bit-banding.galgas", 129)), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 129)), temp_12.readProperty_mBitExpressionLocation (), inCompiler COMMA_HERE), var_requiredBitExpressionType_5866, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 128)) ;
  GGS_objectIR var_bitExpressionOperand_6322 ;
  const GGS_bitbandInstructionAST temp_13 = this ;
  callExtensionMethod_analyzeExpression ((cPtr_expressionAST *) temp_13.readProperty_mBitExpression ().ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, var_requiredBitExpressionType_5866, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_bitExpressionOperand_6322, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 133)) ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_bitExpressionOperand_6322, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 147)) ;
  }
  GalgasBool test_14 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_14) {
    GGS_bool test_15 = GGS_bool (ComparisonKind::equal, extensionGetter_type (var_bitExpressionOperand_6322, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 152)).readProperty_omnibusTypeDescriptionName ().objectCompare (function_ctIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 152)))) ;
    if (GalgasBool::boolTrue == test_15.boolEnum ()) {
      test_15 = var_bitExpressionOperand_6322.getter_isLiteralInteger (SOURCE_FILE ("instruction-bit-banding.galgas", 152)) ;
    }
    test_14 = test_15.boolEnum () ;
    if (GalgasBool::boolTrue == test_14) {
      GGS_bigint var_value_6792 ;
      GGS_omnibusType joker_6769_1 ; // Joker input parameter
      var_bitExpressionOperand_6322.method_extractLiteralInteger (joker_6769_1, var_value_6792, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 153)) ;
      GalgasBool test_16 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_16) {
        GGS_bool test_17 = GGS_bool (ComparisonKind::lowerThan, var_value_6792.objectCompare (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 154)))) ;
        if (GalgasBool::boolTrue != test_17.boolEnum ()) {
          test_17 = GGS_bool (ComparisonKind::greaterOrEqual, var_value_6792.objectCompare (var_registerBitCount_5562.getter_bigint (SOURCE_FILE ("instruction-bit-banding.galgas", 154)))) ;
        }
        test_16 = test_17.boolEnum () ;
        if (GalgasBool::boolTrue == test_16) {
          const GGS_bitbandInstructionAST temp_18 = this ;
          TC_Array <FixItDescription> fixItArray19 ;
          inCompiler->emitSemanticError (temp_18.readProperty_mBitExpressionLocation (), GGS_string ("static value should be >= 0 and <").add_operation (var_registerBitCount_5562.getter_string (SOURCE_FILE ("instruction-bit-banding.galgas", 155)), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 155)), fixItArray19  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 155)) ;
        }
      }
      if (GalgasBool::boolFalse == test_16) {
        var_bitExpressionOperand_6322 = GGS_objectIR::class_func_literalInteger (var_requiredBitExpressionType_5866, var_value_6792  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 157)) ;
      }
    }
  }
  if (GalgasBool::boolFalse == test_14) {
    GalgasBool test_20 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_20) {
      test_20 = GGS_bool (ComparisonKind::notEqual, extensionGetter_type (var_bitExpressionOperand_6322, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 159)).readProperty_omnibusTypeDescriptionName ().objectCompare (var_requiredBitExpressionType_5866.readProperty_omnibusTypeDescriptionName ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_20) {
        const GGS_bitbandInstructionAST temp_21 = this ;
        TC_Array <FixItDescription> fixItArray22 ;
        inCompiler->emitSemanticError (temp_21.readProperty_mBitExpressionLocation (), GGS_string ("bit expression type should be $").add_operation (var_requiredBitExpressionType_5866.readProperty_omnibusTypeDescriptionName (), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 160)), fixItArray22  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 160)) ;
      }
    }
  }
  ioArgument_ioInstructionGenerationList.addAssign_operation (GGS_bitbandInstructionIR::init_21__21__21__21__21__21__21_ (var_llvmRegisterAddressName_5628, var_bitExpressionOperand_6322, var_sourceExpressionOperand_4084, constinArgument_inContext.readProperty_mTargetParameters ().readProperty_mBitbandRegisterBaseAddress ().readProperty_bigint (), constinArgument_inContext.readProperty_mTargetParameters ().readProperty_mBitbandRegisterRelocationAddress ().readProperty_bigint (), constinArgument_inContext.readProperty_mTargetParameters ().readProperty_mBitbandRegisterOffsetMultiplier ().readProperty_bigint (), constinArgument_inContext.readProperty_mTargetParameters ().readProperty_mBitbandRegisterBitMultiplier ().readProperty_bigint (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 163)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@bitbandInstructionIR llvmInstructionCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_bitbandInstructionIR::method_llvmInstructionCode (GGS_string & ioArgument_ioLLVMcode,
                                                            const GGS_generationContext /* constinArgument_inGenerationContext */,
                                                            GGS_generationAdds & ioArgument_ioGenerationAdds,
                                                            Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_idx_9413 = ioArgument_ioGenerationAdds.readProperty_mUniqueIndex ().getter_string (SOURCE_FILE ("instruction-bit-banding.galgas", 205)) ;
  ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.plusAssign_operation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 206)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string (";--- Bit band\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 207)) ;
  const GGS_bitbandInstructionIR temp_0 = this ;
  const GGS_bitbandInstructionIR temp_1 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  %byte.offset.").add_operation (var_idx_9413, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 208)).add_operation (GGS_string (" = sub i32 "), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 208)).add_operation (temp_0.readProperty_mRegisterAddressLLVMname (), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 208)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 208)).add_operation (temp_1.readProperty_mBitbandRegisterBaseAddress ().getter_string (SOURCE_FILE ("instruction-bit-banding.galgas", 208)), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 208)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 208)), inCompiler  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 208)) ;
  const GGS_bitbandInstructionIR temp_2 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  %byte.offset.").add_operation (var_idx_9413, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 209)).add_operation (GGS_string (".mul = mul i32 %byte.offset."), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 209)).add_operation (var_idx_9413, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 209)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 209)).add_operation (temp_2.readProperty_mBitbandRegisterOffsetMultiplier ().getter_string (SOURCE_FILE ("instruction-bit-banding.galgas", 209)), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 209)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 209)), inCompiler  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 209)) ;
  const GGS_bitbandInstructionIR temp_3 = this ;
  const GGS_bitbandInstructionIR temp_4 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  %bit.offset.").add_operation (var_idx_9413, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 210)).add_operation (GGS_string (".mul = mul i32 "), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 210)).add_operation (extensionGetter_llvmName (temp_3.readProperty_mBitExpressionOperand (), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 210)), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 210)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 210)).add_operation (temp_4.readProperty_mBitbandRegisterBitMultiplier ().getter_string (SOURCE_FILE ("instruction-bit-banding.galgas", 210)), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 210)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 210)), inCompiler  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 210)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  %offset.").add_operation (var_idx_9413, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 211)).add_operation (GGS_string (" = add i32 %byte.offset."), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 211)).add_operation (var_idx_9413, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 211)).add_operation (GGS_string (".mul, %bit.offset."), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 211)).add_operation (var_idx_9413, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 211)).add_operation (GGS_string (".mul\n"), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 211)), inCompiler  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 211)) ;
  const GGS_bitbandInstructionIR temp_5 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  %bit.word.addr.").add_operation (var_idx_9413, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 212)).add_operation (GGS_string (" = add i32 %offset."), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 212)).add_operation (var_idx_9413, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 212)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 212)).add_operation (temp_5.readProperty_mBitbandRegisterRelocationAddress ().getter_string (SOURCE_FILE ("instruction-bit-banding.galgas", 212)), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 212)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 212)), inCompiler  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 212)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  %ptr.").add_operation (var_idx_9413, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 213)).add_operation (GGS_string (" = inttoptr i32 %bit.word.addr."), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 213)).add_operation (var_idx_9413, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 213)).add_operation (GGS_string (" to i32*\n"), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 213)), inCompiler  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 213)) ;
  const GGS_bitbandInstructionIR temp_6 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  %value.").add_operation (var_idx_9413, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 214)).add_operation (GGS_string (" = zext i1 "), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 214)).add_operation (extensionGetter_llvmName (temp_6.readProperty_mSourceExpressionOperand (), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 214)), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 214)).add_operation (GGS_string (" to i32\n"), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 214)), inCompiler  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 214)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  store i32 %value.").add_operation (var_idx_9413, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 215)).add_operation (GGS_string (", i32* %ptr."), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 215)).add_operation (var_idx_9413, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 215)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 215)), inCompiler  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 215)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@varInstructionWithAssignmentAST noteInstructionTypesInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_varInstructionWithAssignmentAST::method_noteInstructionTypesInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_varInstructionWithAssignmentAST temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::notEqual, temp_1.readProperty_mOptionalTypeName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      {
      const GGS_varInstructionWithAssignmentAST temp_2 = this ;
      ioArgument_ioGraph.setter_noteNode (temp_2.readProperty_mOptionalTypeName () COMMA_SOURCE_FILE ("instruction-var.galgas", 97)) ;
      }
    }
  }
  const GGS_varInstructionWithAssignmentAST temp_3 = this ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((cPtr_expressionAST *) temp_3.readProperty_mSourceExpression ().ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 99)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@varDeclarationInstructionAST noteInstructionTypesInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_varDeclarationInstructionAST::method_noteInstructionTypesInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                      Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_varDeclarationInstructionAST temp_0 = this ;
  ioArgument_ioGraph.setter_noteNode (temp_0.readProperty_mTypeName () COMMA_SOURCE_FILE ("instruction-var.galgas", 105)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@varInstructionWithAssignmentAST instructionSemanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_varInstructionWithAssignmentAST::method_instructionSemanticAnalysis (const GGS_omnibusType constinArgument_inSelfType,
                                                                               const GGS_routineAttributes constinArgument_inRoutineAttributes,
                                                                               const GGS_semanticContext constinArgument_inContext,
                                                                               const GGS_mode constinArgument_inMode,
                                                                               GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                               GGS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                               GGS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                               GGS_allocaList & ioArgument_ioAllocaList,
                                                                               GGS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_varInstructionWithAssignmentAST temp_0 = this ;
  GGS_omnibusType temp_1 ;
  const GalgasBool test_2 = GGS_bool (ComparisonKind::equal, temp_0.readProperty_mOptionalTypeName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
  if (GalgasBool::boolTrue == test_2) {
    temp_1 = function_voidType (inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 124)) ;
  }else if (GalgasBool::boolFalse == test_2) {
    const GGS_varInstructionWithAssignmentAST temp_3 = this ;
    temp_1 = extensionGetter_type (extensionGetter_searchKey (constinArgument_inContext.readProperty_mTypeMap (), temp_3.readProperty_mOptionalTypeName (), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 125)), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 125)) ;
  }
  GGS_omnibusType var_targetType_4826 = temp_1 ;
  GGS_objectIR var_sourcePossibleReference_5397 ;
  const GGS_varInstructionWithAssignmentAST temp_4 = this ;
  callExtensionMethod_analyzeExpression ((cPtr_expressionAST *) temp_4.readProperty_mSourceExpression ().ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, var_targetType_4826, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_sourcePossibleReference_5397, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 128)) ;
  const GGS_varInstructionWithAssignmentAST temp_5 = this ;
  GGS_objectIR var_result_5431 = function_checkAssignmentCompatibility (constinArgument_inContext.readProperty_mAssignmentOperatorMap (), var_sourcePossibleReference_5397, var_targetType_4826, temp_5.readProperty_mVarName ().readProperty_location (), GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 141)) ;
  const GGS_varInstructionWithAssignmentAST temp_6 = this ;
  const GGS_varInstructionWithAssignmentAST temp_7 = this ;
  GGS_lstring var_omnibusLocalVariableName_5691 = GGS_lstring::init_21__21_ (temp_6.readProperty_mVarName ().readProperty_string ().add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 149)).add_operation (ioArgument_ioTemporaries.readProperty_mTemporaryIndex ().getter_string (SOURCE_FILE ("instruction-var.galgas", 149)), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 149)), temp_7.readProperty_mVarName ().readProperty_location (), inCompiler COMMA_HERE) ;
  ioArgument_ioTemporaries.mProperty_mTemporaryIndex.plusAssign_operation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("instruction-var.galgas", 150)) ;
  {
  const GGS_varInstructionWithAssignmentAST temp_8 = this ;
  extensionSetter_insertLocalVariable (ioArgument_ioUniversalMap, temp_8.readProperty_mVarName (), extensionGetter_type (var_result_5431, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 151)), var_omnibusLocalVariableName_5691, GGS_valuedObjectState::class_func_hasUnreadValue (SOURCE_FILE ("instruction-var.galgas", 151)), GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 151)) ;
  }
  ioArgument_ioAllocaList.addAssign_operation (function_llvmNameForLocalVariable (var_omnibusLocalVariableName_5691.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 153)), extensionGetter_type (var_result_5431, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 153)), GGS_bool (false)  COMMA_SOURCE_FILE ("instruction-var.galgas", 153)) ;
  {
  const GGS_varInstructionWithAssignmentAST temp_9 = this ;
  extensionSetter_appendAssignmentIR (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, constinArgument_inContext.readProperty_mAssignmentOperatorMap (), ioArgument_ioAllocaList, extensionGetter_type (var_result_5431, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 159)), function_llvmNameForLocalVariable (var_omnibusLocalVariableName_5691.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 160)), var_sourcePossibleReference_5397, temp_9.readProperty_mVarName ().readProperty_location (), GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 155)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@varDeclarationInstructionAST instructionSemanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_varDeclarationInstructionAST::method_instructionSemanticAnalysis (const GGS_omnibusType /* constinArgument_inSelfType */,
                                                                            const GGS_routineAttributes /* constinArgument_inRoutineAttributes */,
                                                                            const GGS_semanticContext constinArgument_inContext,
                                                                            const GGS_mode /* constinArgument_inMode */,
                                                                            GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                            GGS_staticEntityMap & /* ioArgument_ioStaticEntityMap */,
                                                                            GGS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                            GGS_allocaList & ioArgument_ioAllocaList,
                                                                            GGS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_varDeclarationInstructionAST temp_0 = this ;
  GGS_omnibusType var_targetType_7051 = extensionGetter_type (extensionGetter_searchKey (constinArgument_inContext.readProperty_mTypeMap (), temp_0.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 180)), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 180)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = callExtensionGetter_isCompileTimeType ((const cPtr_omnibusType *) var_targetType_7051.ptr (), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 182)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_varDeclarationInstructionAST temp_2 = this ;
      TC_Array <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mVarName ().readProperty_location (), GGS_string ("$").add_operation (var_targetType_7051.readProperty_omnibusTypeDescriptionName (), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 183)).add_operation (GGS_string (" type is a compile time type, and is not instanciable"), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 183)), fixItArray3  COMMA_SOURCE_FILE ("instruction-var.galgas", 183)) ;
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    GalgasBool test_4 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_4) {
      test_4 = callExtensionGetter_instanciable ((const cPtr_omnibusType *) var_targetType_7051.ptr (), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 184)).operator_not (SOURCE_FILE ("instruction-var.galgas", 184)).boolEnum () ;
      if (GalgasBool::boolTrue == test_4) {
        const GGS_varDeclarationInstructionAST temp_5 = this ;
        TC_Array <FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (temp_5.readProperty_mVarName ().readProperty_location (), GGS_string ("$").add_operation (var_targetType_7051.readProperty_omnibusTypeDescriptionName (), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 185)).add_operation (GGS_string (" type is not instanciable"), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 185)), fixItArray6  COMMA_SOURCE_FILE ("instruction-var.galgas", 185)) ;
      }
    }
  }
  const GGS_varDeclarationInstructionAST temp_7 = this ;
  const GGS_varDeclarationInstructionAST temp_8 = this ;
  GGS_lstring var_omnibusName_7475 = GGS_lstring::init_21__21_ (temp_7.readProperty_mVarName ().readProperty_string ().add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 188)).add_operation (ioArgument_ioTemporaries.readProperty_mTemporaryIndex ().getter_string (SOURCE_FILE ("instruction-var.galgas", 188)), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 188)), temp_8.readProperty_mVarName ().readProperty_location (), inCompiler COMMA_HERE) ;
  ioArgument_ioTemporaries.mProperty_mTemporaryIndex.plusAssign_operation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("instruction-var.galgas", 189)) ;
  {
  const GGS_varDeclarationInstructionAST temp_9 = this ;
  extensionSetter_insertLocalVariable (ioArgument_ioUniversalMap, temp_9.readProperty_mVarName (), var_targetType_7051, var_omnibusName_7475, GGS_valuedObjectState::class_func_noValue (SOURCE_FILE ("instruction-var.galgas", 190)), GGS_bool (true), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 190)) ;
  }
  ioArgument_ioAllocaList.addAssign_operation (function_llvmNameForLocalVariable (var_omnibusName_7475.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 192)), var_targetType_7051, GGS_bool (false)  COMMA_SOURCE_FILE ("instruction-var.galgas", 192)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@letInstructionWithAssignmentAST noteInstructionTypesInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_letInstructionWithAssignmentAST::method_noteInstructionTypesInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_letInstructionWithAssignmentAST temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::notEqual, temp_1.readProperty_mOptionalTypeName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      {
      const GGS_letInstructionWithAssignmentAST temp_2 = this ;
      ioArgument_ioGraph.setter_noteNode (temp_2.readProperty_mOptionalTypeName () COMMA_SOURCE_FILE ("instruction-let.galgas", 48)) ;
      }
    }
  }
  const GGS_letInstructionWithAssignmentAST temp_3 = this ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((cPtr_expressionAST *) temp_3.readProperty_mSourceExpression ().ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 50)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@letInstructionWithAssignmentAST instructionSemanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_letInstructionWithAssignmentAST::method_instructionSemanticAnalysis (const GGS_omnibusType constinArgument_inSelfType,
                                                                               const GGS_routineAttributes constinArgument_inRoutineAttributes,
                                                                               const GGS_semanticContext constinArgument_inContext,
                                                                               const GGS_mode constinArgument_inMode,
                                                                               GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                               GGS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                               GGS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                               GGS_allocaList & ioArgument_ioAllocaList,
                                                                               GGS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_letInstructionWithAssignmentAST temp_0 = this ;
  GGS_omnibusType temp_1 ;
  const GalgasBool test_2 = GGS_bool (ComparisonKind::equal, temp_0.readProperty_mOptionalTypeName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
  if (GalgasBool::boolTrue == test_2) {
    temp_1 = function_voidType (inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 69)) ;
  }else if (GalgasBool::boolFalse == test_2) {
    const GGS_letInstructionWithAssignmentAST temp_3 = this ;
    temp_1 = extensionGetter_type (extensionGetter_searchKey (constinArgument_inContext.readProperty_mTypeMap (), temp_3.readProperty_mOptionalTypeName (), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 70)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 70)) ;
  }
  GGS_omnibusType var_targetType_3070 = temp_1 ;
  GGS_objectIR var_expressionResult_3637 ;
  const GGS_letInstructionWithAssignmentAST temp_4 = this ;
  callExtensionMethod_analyzeExpression ((cPtr_expressionAST *) temp_4.readProperty_mSourceExpression ().ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, var_targetType_3070, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_expressionResult_3637, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 73)) ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_expressionResult_3637, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 86)) ;
  }
  const GGS_letInstructionWithAssignmentAST temp_5 = this ;
  GGS_objectIR var_result_3798 = function_checkAssignmentCompatibility (constinArgument_inContext.readProperty_mAssignmentOperatorMap (), var_expressionResult_3637, var_targetType_3070, temp_5.readProperty_mConstantName ().readProperty_location (), GGS_bool (true), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 91)) ;
  GalgasBool test_6 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_6) {
    test_6 = callExtensionGetter_instanciable ((const cPtr_omnibusType *) extensionGetter_type (var_result_3798, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 99)).ptr (), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 99)).operator_not (SOURCE_FILE ("instruction-let.galgas", 99)).boolEnum () ;
    if (GalgasBool::boolTrue == test_6) {
      const GGS_letInstructionWithAssignmentAST temp_7 = this ;
      TC_Array <FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (temp_7.readProperty_mConstantName ().readProperty_location (), extensionGetter_omnibusTypeDescriptionName (var_result_3798, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 100)).add_operation (GGS_string (" type is not instanciable"), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 100)), fixItArray8  COMMA_SOURCE_FILE ("instruction-let.galgas", 100)) ;
      var_result_3798.drop () ; // Release error dropped variable
    }
  }
  const GGS_letInstructionWithAssignmentAST temp_9 = this ;
  const GGS_letInstructionWithAssignmentAST temp_10 = this ;
  GGS_lstring var_omnibusName_4215 = GGS_lstring::init_21__21_ (temp_9.readProperty_mConstantName ().readProperty_string ().add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 103)).add_operation (ioArgument_ioTemporaries.readProperty_mTemporaryIndex ().getter_string (SOURCE_FILE ("instruction-let.galgas", 103)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 103)), temp_10.readProperty_mConstantName ().readProperty_location (), inCompiler COMMA_HERE) ;
  ioArgument_ioTemporaries.mProperty_mTemporaryIndex.plusAssign_operation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("instruction-let.galgas", 104)) ;
  GalgasBool test_11 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_11) {
    test_11 = GGS_bool (ComparisonKind::notEqual, extensionGetter_omnibusTypeDescriptionName (var_result_3798, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 105)).objectCompare (function_ctIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 105)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_11) {
      ioArgument_ioAllocaList.addAssign_operation (function_llvmNameForLocalVariable (var_omnibusName_4215.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 106)), extensionGetter_type (var_result_3798, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 106)), GGS_bool (false)  COMMA_SOURCE_FILE ("instruction-let.galgas", 106)) ;
      {
      extensionSetter_appendStoreTemporaryReference (ioArgument_ioInstructionGenerationList, extensionGetter_type (var_result_3798, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 108)), function_llvmNameForLocalVariable (var_omnibusName_4215.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 109)), var_result_3798, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 107)) ;
      }
    }
  }
  {
  const GGS_letInstructionWithAssignmentAST temp_12 = this ;
  extensionSetter_insertLocalConstant (ioArgument_ioUniversalMap, temp_12.readProperty_mConstantName (), GGS_bool (false), extensionGetter_type (var_result_3798, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 113)), var_omnibusName_4215, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 113)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Routine 'enter_NOP_function&'
//
//--------------------------------------------------------------------------------------------------

void routine_enter_5F_NOP_5F_function_26_ (GGS_declarationListAST & ioArgument_ioDeclarationListAST,
                                           Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstringlist temp_0 = GGS_lstringlist::init (inCompiler COMMA_SOURCE_FILE ("instruction-nop.galgas", 14)) ;
  temp_0.enterElement (GGS_lstringlist_2E_element::init_21_ (function_noUnusedWarningAttribute (inCompiler COMMA_SOURCE_FILE ("instruction-nop.galgas", 14)).getter_nowhere (SOURCE_FILE ("instruction-nop.galgas", 14)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("instruction-nop.galgas", 14)) ;
  GGS_lstringlist var_attributeList_802 = temp_0 ;
  GGS_instructionListAST temp_1 = GGS_instructionListAST::init (inCompiler COMMA_SOURCE_FILE ("instruction-nop.galgas", 15)) ;
  temp_1.enterElement (GGS_instructionListAST_2E_element::init_21_ (GGS_instructionNOP::init_21_ (GGS_location::class_func_nowhere (SOURCE_FILE ("instruction-nop.galgas", 15)), inCompiler COMMA_HERE), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("instruction-nop.galgas", 15)) ;
  GGS_instructionListAST var_instructionList_868 = temp_1 ;
  GGS_routineFormalArgumentListAST temp_2 = GGS_routineFormalArgumentListAST::init (inCompiler COMMA_SOURCE_FILE ("instruction-nop.galgas", 23)) ;
  ioArgument_ioDeclarationListAST.addAssign_operation (GGS_functionDeclarationAST::init_21__21__21__21__21__21__21__21__21_ (GGS_mode::class_func_anySafeMode (SOURCE_FILE ("instruction-nop.galgas", 18)), GGS_bool (true), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-nop.galgas", 20)), GGS_string ("nop").getter_nowhere (SOURCE_FILE ("instruction-nop.galgas", 21)), var_attributeList_802, temp_2, GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-nop.galgas", 24)), var_instructionList_868, GGS_location::class_func_nowhere (SOURCE_FILE ("instruction-nop.galgas", 26)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-nop.galgas", 17)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@instructionNOP noteInstructionTypesInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_instructionNOP::method_noteInstructionTypesInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & /* ioArgument_ioGraph */,
                                                                        Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@instructionNOP instructionSemanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_instructionNOP::method_instructionSemanticAnalysis (const GGS_omnibusType /* constinArgument_inSelfType */,
                                                              const GGS_routineAttributes /* constinArgument_inRoutineAttributes */,
                                                              const GGS_semanticContext /* constinArgument_inContext */,
                                                              const GGS_mode /* constinArgument_inMode */,
                                                              GGS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                              GGS_staticEntityMap & /* ioArgument_ioStaticEntityMap */,
                                                              GGS_universalValuedObjectMap & /* ioArgument_ioUniversalMap */,
                                                              GGS_allocaList & /* ioArgument_ioAllocaList */,
                                                              GGS_instructionListIR & ioArgument_ioInstructionGenerationList,
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

void cPtr_panicInstructionAST::method_noteInstructionTypesInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_panicInstructionAST temp_0 = this ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((cPtr_expressionAST *) temp_0.readProperty_mCodeExpression ().ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 33)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@panicInstructionAST instructionSemanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_panicInstructionAST::method_instructionSemanticAnalysis (const GGS_omnibusType constinArgument_inSelfType,
                                                                   const GGS_routineAttributes /* constinArgument_inRoutineAttributes */,
                                                                   const GGS_semanticContext constinArgument_inContext,
                                                                   const GGS_mode constinArgument_inMode,
                                                                   GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                   GGS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                   GGS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                   GGS_allocaList & ioArgument_ioAllocaList,
                                                                   GGS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::equal, constinArgument_inMode.objectCompare (GGS_mode::class_func_panicMode (SOURCE_FILE ("instruction-panic.galgas", 52)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_panicInstructionAST temp_1 = this ;
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mInstructionLocation (), GGS_string ("operations that can generate panic are not allowed in ").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 53)), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 53)).add_operation (GGS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 53)), fixItArray2  COMMA_SOURCE_FILE ("instruction-panic.galgas", 53)) ;
    }
  }
  GGS_instructionListIR temp_3 = GGS_instructionListIR::init (inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 56)) ;
  GGS_instructionListIR var_unusedInstructionListIR_2843 = temp_3 ;
  GGS_objectIR var_result_3256 ;
  const GGS_panicInstructionAST temp_4 = this ;
  callExtensionMethod_analyzeExpression ((cPtr_expressionAST *) temp_4.readProperty_mCodeExpression ().ptr (), constinArgument_inSelfType, GGS_routineAttributes::init (inCompiler COMMA_HERE), constinArgument_inContext.readProperty_mPanicCodeType (), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_unusedInstructionListIR_2843, var_result_3256, inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 57)) ;
  GalgasBool test_5 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_5) {
    GGS_bool test_6 = GGS_bool (ComparisonKind::greaterThan, var_unusedInstructionListIR_2843.getter_count (SOURCE_FILE ("instruction-panic.galgas", 72)).objectCompare (GGS_uint (uint32_t (0U)))) ;
    if (GalgasBool::boolTrue != test_6.boolEnum ()) {
      test_6 = var_result_3256.getter_isLiteralInteger (SOURCE_FILE ("instruction-panic.galgas", 73)).operator_not (SOURCE_FILE ("instruction-panic.galgas", 73)) ;
    }
    GGS_bool test_7 = test_6 ;
    if (GalgasBool::boolTrue != test_7.boolEnum ()) {
      test_7 = GGS_bool (ComparisonKind::notEqual, extensionGetter_omnibusTypeDescriptionName (var_result_3256, inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 74)).objectCompare (function_ctIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 74)))) ;
    }
    test_5 = test_7.boolEnum () ;
    if (GalgasBool::boolTrue == test_5) {
      const GGS_panicInstructionAST temp_8 = this ;
      TC_Array <FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (temp_8.readProperty_mInstructionLocation (), GGS_string ("throw expression should be a literal integer"), fixItArray9  COMMA_SOURCE_FILE ("instruction-panic.galgas", 75)) ;
    }
  }
  if (GalgasBool::boolFalse == test_5) {
    GGS_bigint var_min_3629 ;
    GGS_bigint var_max_3642 ;
    GGS_bool joker_3646_2 ; // Joker input parameter
    GGS_uint joker_3646_1 ; // Joker input parameter
    constinArgument_inContext.readProperty_mPanicCodeType ().readProperty_kind ().method_extractInteger (var_min_3629, var_max_3642, joker_3646_2, joker_3646_1, inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 77)) ;
    GGS_bigint var_throwValue_3700 ;
    GGS_omnibusType joker_3685_1 ; // Joker input parameter
    var_result_3256.method_extractLiteralInteger (joker_3685_1, var_throwValue_3700, inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 78)) ;
    GalgasBool test_10 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_10) {
      GGS_bool test_11 = GGS_bool (ComparisonKind::lowerThan, var_throwValue_3700.objectCompare (var_min_3629)) ;
      if (GalgasBool::boolTrue != test_11.boolEnum ()) {
        test_11 = GGS_bool (ComparisonKind::greaterThan, var_throwValue_3700.objectCompare (var_max_3642)) ;
      }
      test_10 = test_11.boolEnum () ;
      if (GalgasBool::boolTrue == test_10) {
        const GGS_panicInstructionAST temp_12 = this ;
        TC_Array <FixItDescription> fixItArray13 ;
        inCompiler->emitSemanticError (temp_12.readProperty_mInstructionLocation (), GGS_string ("panic expression cannot be represented by an `").add_operation (constinArgument_inContext.readProperty_mPanicCodeType ().readProperty_omnibusTypeDescriptionName (), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 81)), fixItArray13  COMMA_SOURCE_FILE ("instruction-panic.galgas", 80)) ;
      }
    }
    if (GalgasBool::boolFalse == test_10) {
      GalgasBool test_14 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_14) {
        test_14 = GGS_bool (gOption_omnibus_5F_options_noPanicGeneration.readProperty_value ()).operator_not (SOURCE_FILE ("instruction-panic.galgas", 82)).boolEnum () ;
        if (GalgasBool::boolTrue == test_14) {
          const GGS_panicInstructionAST temp_15 = this ;
          ioArgument_ioInstructionGenerationList.addAssign_operation (GGS_panicInstructionIR::init_21__21_ (temp_15.readProperty_mInstructionLocation (), var_throwValue_3700, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-panic.galgas", 83)) ;
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

void cPtr_panicInstructionIR::method_llvmInstructionCode (GGS_string & ioArgument_ioLLVMcode,
                                                          const GGS_generationContext constinArgument_inGenerationContext,
                                                          GGS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_panicInstructionIR temp_0 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  call void @").add_operation (function_panicRoutineNameForLocationFile (temp_0.readProperty_mThrowLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 107)).getter_assemblerRepresentation (SOURCE_FILE ("instruction-panic.galgas", 107)), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 107)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 107)), inCompiler  COMMA_SOURCE_FILE ("instruction-panic.galgas", 107)) ;
  const GGS_panicInstructionIR temp_1 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inGenerationContext.readProperty_mPanicLineLLVMType ().ptr (), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 108)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 108)).add_operation (temp_1.readProperty_mThrowLocation ().getter_endLine (inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 108)).getter_string (SOURCE_FILE ("instruction-panic.galgas", 108)), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 108)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 108)), inCompiler  COMMA_SOURCE_FILE ("instruction-panic.galgas", 108)) ;
  const GGS_panicInstructionIR temp_2 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inGenerationContext.readProperty_mPanicCodeLLVMType ().ptr (), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 109)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 109)).add_operation (temp_2.readProperty_mPanicCode ().getter_string (SOURCE_FILE ("instruction-panic.galgas", 109)), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 109)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 109)), inCompiler  COMMA_SOURCE_FILE ("instruction-panic.galgas", 109)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@panicInstructionIR enterAccessibleEntities'
//
//--------------------------------------------------------------------------------------------------

void cPtr_panicInstructionIR::method_enterAccessibleEntities (GGS_stringset & ioArgument_ioInvokedRoutineSet,
                                                              GGS_uint & /* ioArgument_ioMaxBranchOfOnInstructions */,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_panicInstructionIR temp_0 = this ;
  ioArgument_ioInvokedRoutineSet.addAssign_operation (function_panicRoutineNameForLocationFile (temp_0.readProperty_mThrowLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 118))  COMMA_SOURCE_FILE ("instruction-panic.galgas", 118)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ifInstructionAST noteInstructionTypesInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ifInstructionAST::method_noteInstructionTypesInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_ifInstructionAST temp_0 = this ;
  extensionMethod_noteInstructionListTypesInPrecedenceGraph (temp_0.readProperty_mThenInstructionList (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 89)) ;
  const GGS_ifInstructionAST temp_1 = this ;
  extensionMethod_noteInstructionListTypesInPrecedenceGraph (temp_1.readProperty_mElseInstructionList (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 90)) ;
  const GGS_ifInstructionAST temp_2 = this ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((cPtr_expressionAST *) temp_2.readProperty_mTestExpression ().ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 91)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ifInstructionAST instructionSemanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ifInstructionAST::method_instructionSemanticAnalysis (const GGS_omnibusType constinArgument_inSelfType,
                                                                const GGS_routineAttributes constinArgument_inRoutineAttributes,
                                                                const GGS_semanticContext constinArgument_inContext,
                                                                const GGS_mode constinArgument_inMode,
                                                                GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                GGS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                GGS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                GGS_allocaList & ioArgument_ioAllocaList,
                                                                GGS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GGS_objectIR var_testResult_4930 ;
  const GGS_ifInstructionAST temp_0 = this ;
  callExtensionMethod_analyzeExpression ((cPtr_expressionAST *) temp_0.readProperty_mTestExpression ().ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, function_voidType (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 113)), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_testResult_4930, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 110)) ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_testResult_4930, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 123)) ;
  }
  GGS_implicitBooleanConversionResult var_booleanResult_5305 ;
  const GGS_ifInstructionAST temp_1 = this ;
  extensionMethod_generateConvertToBooleanCode (constinArgument_inContext.readProperty_mImplicitConversionToBooleanMap (), var_testResult_4930, temp_1.readProperty_mTestExpressionEndLocation (), ioArgument_ioTemporaries, ioArgument_ioInstructionGenerationList, ioArgument_ioAllocaList, var_booleanResult_5305, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 128)) ;
  switch (var_booleanResult_5305.enumValue ()) {
  case GGS_implicitBooleanConversionResult::Enumeration::invalid:
    break ;
  case GGS_implicitBooleanConversionResult::Enumeration::enum_compileTime:
    {
      GGS_bool extractedValue_5375__0 ;
      var_booleanResult_5305.getAssociatedValuesFor_compileTime (extractedValue_5375__0) ;
      GalgasBool test_2 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_2) {
        const GGS_ifInstructionAST temp_3 = this ;
        test_2 = temp_3.readProperty_mStaticIfExpression ().operator_not (SOURCE_FILE ("instruction-if.galgas", 139)).boolEnum () ;
        if (GalgasBool::boolTrue == test_2) {
          const GGS_ifInstructionAST temp_4 = this ;
          TC_Array <FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticWarning (temp_4.readProperty_mTestExpressionEndLocation (), GGS_string ("'if' expression is static (insert @").add_operation (function_staticAttribute (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 140)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 140)).add_operation (GGS_string (" attribute)"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 140)), fixItArray5  COMMA_SOURCE_FILE ("instruction-if.galgas", 140)) ;
        }
      }
    }
    break ;
  case GGS_implicitBooleanConversionResult::Enumeration::enum_llvmVariable:
    {
      GGS_string extractedValue_5573__0 ;
      var_booleanResult_5305.getAssociatedValuesFor_llvmVariable (extractedValue_5573__0) ;
      GalgasBool test_6 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_6) {
        const GGS_ifInstructionAST temp_7 = this ;
        test_6 = temp_7.readProperty_mStaticIfExpression ().boolEnum () ;
        if (GalgasBool::boolTrue == test_6) {
          const GGS_ifInstructionAST temp_8 = this ;
          TC_Array <FixItDescription> fixItArray9 ;
          inCompiler->emitSemanticError (temp_8.readProperty_mTestExpressionEndLocation (), GGS_string ("'if' expression is not static"), fixItArray9  COMMA_SOURCE_FILE ("instruction-if.galgas", 144)) ;
        }
      }
    }
    break ;
  }
  {
  extensionSetter_openOverrideForSelectBlock (ioArgument_ioUniversalMap, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 147)) ;
  }
  GGS_instructionListIR temp_10 = GGS_instructionListIR::init (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 149)) ;
  GGS_instructionListIR var_thenInstructionGenerationList_5818 = temp_10 ;
  const GGS_ifInstructionAST temp_11 = this ;
  const GGS_ifInstructionAST temp_12 = this ;
  extensionMethod_analyzeBranchInstructionList (temp_11.readProperty_mThenInstructionList (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, temp_12.readProperty_mEndOfThenInstructionList (), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_thenInstructionGenerationList_5818, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 150)) ;
  GGS_instructionListIR temp_13 = GGS_instructionListIR::init (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 163)) ;
  GGS_instructionListIR var_elseInstructionGenerationList_6322 = temp_13 ;
  const GGS_ifInstructionAST temp_14 = this ;
  const GGS_ifInstructionAST temp_15 = this ;
  extensionMethod_analyzeBranchInstructionList (temp_14.readProperty_mElseInstructionList (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, temp_15.readProperty_mEndOfElseInstructionList (), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_elseInstructionGenerationList_6322, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 164)) ;
  {
  const GGS_ifInstructionAST temp_16 = this ;
  extensionSetter_closeOverride (ioArgument_ioUniversalMap, temp_16.readProperty_mEndOf_5F_if_5F_instruction (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 176)) ;
  }
  const GGS_ifInstructionAST temp_17 = this ;
  ioArgument_ioInstructionGenerationList.addAssign_operation (GGS_ifInstructionIR::init_21__21__21__21_ (extensionGetter_llvmName (var_booleanResult_5305, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 179)), temp_17.readProperty_mTestExpressionEndLocation (), var_thenInstructionGenerationList_5818, var_elseInstructionGenerationList_6322, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-if.galgas", 178)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ifInstructionIR llvmInstructionCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ifInstructionIR::method_llvmInstructionCode (GGS_string & ioArgument_ioLLVMcode,
                                                       const GGS_generationContext constinArgument_inGenerationContext,
                                                       GGS_generationAdds & ioArgument_ioGenerationAdds,
                                                       Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_labelTrue_7890 = GGS_string ("if.").add_operation (ioArgument_ioGenerationAdds.readProperty_mUniqueIndex ().getter_string (SOURCE_FILE ("instruction-if.galgas", 205)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 205)).add_operation (GGS_string (".true"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 205)) ;
  GGS_string var_labelFalse_7956 = GGS_string ("if.").add_operation (ioArgument_ioGenerationAdds.readProperty_mUniqueIndex ().getter_string (SOURCE_FILE ("instruction-if.galgas", 206)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 206)).add_operation (GGS_string (".false"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 206)) ;
  GGS_string var_labelEnd_8024 = GGS_string ("if.").add_operation (ioArgument_ioGenerationAdds.readProperty_mUniqueIndex ().getter_string (SOURCE_FILE ("instruction-if.galgas", 207)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 207)).add_operation (GGS_string (".end"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 207)) ;
  ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.plusAssign_operation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 208)) ;
  const GGS_ifInstructionIR temp_0 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  br i1 ").add_operation (temp_0.readProperty_mLLVMTestName (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 209)).add_operation (GGS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 209)).add_operation (var_labelTrue_7890, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 209)).add_operation (GGS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 209)).add_operation (var_labelFalse_7956, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 209)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 209)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 209)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelTrue_7890.add_operation (GGS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 211)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 211)) ;
  const GGS_ifInstructionIR temp_1 = this ;
  extensionMethod_instructionListLLVMCode (temp_1.readProperty_mThenInstructionGenerationList (), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 212)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  br label %").add_operation (var_labelEnd_8024, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 213)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 213)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 213)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelFalse_7956.add_operation (GGS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 215)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 215)) ;
  const GGS_ifInstructionIR temp_2 = this ;
  extensionMethod_instructionListLLVMCode (temp_2.readProperty_mElseInstructionGenerationList (), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 216)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  br label %").add_operation (var_labelEnd_8024, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 217)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 217)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 217)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelEnd_8024.add_operation (GGS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 219)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 219)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ifInstructionIR enterAccessibleEntities'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ifInstructionIR::method_enterAccessibleEntities (GGS_stringset & ioArgument_ioInvokedRoutineSet,
                                                           GGS_uint & ioArgument_ioMaxBranchOfOnInstructions,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_ifInstructionIR temp_0 = this ;
  extensionMethod_enterAccessibleEntities (temp_0.readProperty_mThenInstructionGenerationList (), ioArgument_ioInvokedRoutineSet, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 228)) ;
  const GGS_ifInstructionIR temp_1 = this ;
  extensionMethod_enterAccessibleEntities (temp_1.readProperty_mElseInstructionGenerationList (), ioArgument_ioInvokedRoutineSet, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 229)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@syncInstructionAST noteInstructionTypesInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_syncInstructionAST::method_noteInstructionTypesInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_syncInstructionAST temp_0 = this ;
  UpEnumerator_syncInstructionBranchListAST enumerator_5401 (temp_0.readProperty_mBranchList ()) ;
  while (enumerator_5401.hasCurrentObject ()) {
    extensionMethod_noteInstructionListTypesInPrecedenceGraph (enumerator_5401.current_mInstructionList (HERE), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 148)) ;
    enumerator_5401.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@syncInstructionAST instructionSemanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_syncInstructionAST::method_instructionSemanticAnalysis (const GGS_omnibusType constinArgument_inSelfType,
                                                                  const GGS_routineAttributes constinArgument_inRoutineAttributes,
                                                                  const GGS_semanticContext constinArgument_inContext,
                                                                  const GGS_mode constinArgument_inMode,
                                                                  GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                  GGS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                  GGS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                  GGS_allocaList & ioArgument_ioAllocaList,
                                                                  GGS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GGS_guardedCommandIRList temp_0 = GGS_guardedCommandIRList::init (inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 168)) ;
  GGS_guardedCommandIRList var_guardedCommandIRList_6392 = temp_0 ;
  const GGS_syncInstructionAST temp_1 = this ;
  UpEnumerator_syncInstructionBranchListAST enumerator_6443 (temp_1.readProperty_mBranchList ()) ;
  while (enumerator_6443.hasCurrentObject ()) {
    switch (enumerator_6443.current_mGuardedCommand (HERE).enumValue ()) {
    case GGS_guardedCommandAST::Enumeration::invalid:
      break ;
    case GGS_guardedCommandAST::Enumeration::enum_boolean:
      {
        GGS_bool extractedValue_6513_isContinue_0 ;
        GGS_expressionAST extractedValue_6524_expression_1 ;
        GGS_location extractedValue_6535_endOfExpression_2 ;
        enumerator_6443.current_mGuardedCommand (HERE).getAssociatedValuesFor_boolean (extractedValue_6513_isContinue_0, extractedValue_6524_expression_1, extractedValue_6535_endOfExpression_2) ;
        GGS_instructionListIR temp_2 = GGS_instructionListIR::init (inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 172)) ;
        GGS_instructionListIR var_guardInstructionGenerationList_6583 = temp_2 ;
        GGS_objectIR var_expressionResult_7062 ;
        callExtensionMethod_analyzeExpression ((cPtr_expressionAST *) extractedValue_6524_expression_1.ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes.operator_or (GGS_routineAttributes::class_func_isGuard (SOURCE_FILE ("instruction-event.galgas", 175)) COMMA_SOURCE_FILE ("instruction-event.galgas", 175)), function_voidType (inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 176)), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_guardInstructionGenerationList_6583, var_expressionResult_7062, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 173)) ;
        {
        extensionSetter_appendLoadWhenReference (var_guardInstructionGenerationList_6583, ioArgument_ioTemporaries, var_expressionResult_7062, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 186)) ;
        }
        GGS_implicitBooleanConversionResult var_booleanResult_7458 ;
        extensionMethod_generateConvertToBooleanCode (constinArgument_inContext.readProperty_mImplicitConversionToBooleanMap (), var_expressionResult_7062, extractedValue_6535_endOfExpression_2, ioArgument_ioTemporaries, var_guardInstructionGenerationList_6583, ioArgument_ioAllocaList, var_booleanResult_7458, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 187)) ;
        switch (var_booleanResult_7458.enumValue ()) {
        case GGS_implicitBooleanConversionResult::Enumeration::invalid:
          break ;
        case GGS_implicitBooleanConversionResult::Enumeration::enum_compileTime:
          {
            GGS_bool extractedValue_7531__0 ;
            var_booleanResult_7458.getAssociatedValuesFor_compileTime (extractedValue_7531__0) ;
            TC_Array <FixItDescription> fixItArray3 ;
            inCompiler->emitSemanticWarning (extractedValue_6535_endOfExpression_2, GGS_string ("guarded expression is a compile time value"), fixItArray3  COMMA_SOURCE_FILE ("instruction-event.galgas", 197)) ;
          }
          break ;
        case GGS_implicitBooleanConversionResult::Enumeration::enum_llvmVariable:
          break ;
        }
        var_guardedCommandIRList_6392.addAssign_operation (GGS_guardedCommandIR::class_func_booleanGuard (extractedValue_6513_isContinue_0, var_guardInstructionGenerationList_6583, extensionGetter_llvmName (var_booleanResult_7458, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 203))  COMMA_SOURCE_FILE ("instruction-event.galgas", 200))  COMMA_SOURCE_FILE ("instruction-event.galgas", 200)) ;
      }
      break ;
    case GGS_guardedCommandAST::Enumeration::enum_boolAndSync:
      {
        GGS_bool extractedValue_7890_isContinue_0 ;
        GGS_expressionAST extractedValue_7901_exp_1 ;
        GGS_bool extractedValue_7905_warnsOnStaticExpression_2 ;
        GGS_location extractedValue_7929_endOfExp_3 ;
        GGS_lbool extractedValue_7938_usesSelf_4 ;
        GGS_lstringlist extractedValue_7947_nameList_5 ;
        GGS_effectiveArgumentListAST extractedValue_7956_parameterList_6 ;
        enumerator_6443.current_mGuardedCommand (HERE).getAssociatedValuesFor_boolAndSync (extractedValue_7890_isContinue_0, extractedValue_7901_exp_1, extractedValue_7905_warnsOnStaticExpression_2, extractedValue_7929_endOfExp_3, extractedValue_7938_usesSelf_4, extractedValue_7947_nameList_5, extractedValue_7956_parameterList_6) ;
        GGS_instructionListIR temp_4 = GGS_instructionListIR::init (inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 206)) ;
        GGS_instructionListIR var_boolExpInstructionGenerationList_8002 = temp_4 ;
        GGS_objectIR var_expressionResult_8493 ;
        callExtensionMethod_analyzeExpression ((cPtr_expressionAST *) extractedValue_7901_exp_1.ptr (), constinArgument_inSelfType, GGS_routineAttributes::class_func_isGuard (SOURCE_FILE ("instruction-event.galgas", 210)), function_voidType (inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 211)), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_boolExpInstructionGenerationList_8002, var_expressionResult_8493, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 208)) ;
        {
        extensionSetter_appendLoadWhenReference (var_boolExpInstructionGenerationList_8002, ioArgument_ioTemporaries, var_expressionResult_8493, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 221)) ;
        }
        GGS_implicitBooleanConversionResult var_booleanResult_8886 ;
        extensionMethod_generateConvertToBooleanCode (constinArgument_inContext.readProperty_mImplicitConversionToBooleanMap (), var_expressionResult_8493, extractedValue_7929_endOfExp_3, ioArgument_ioTemporaries, var_boolExpInstructionGenerationList_8002, ioArgument_ioAllocaList, var_booleanResult_8886, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 222)) ;
        switch (var_booleanResult_8886.enumValue ()) {
        case GGS_implicitBooleanConversionResult::Enumeration::invalid:
          break ;
        case GGS_implicitBooleanConversionResult::Enumeration::enum_compileTime:
          {
            GGS_bool extractedValue_8959__0 ;
            var_booleanResult_8886.getAssociatedValuesFor_compileTime (extractedValue_8959__0) ;
            GalgasBool test_5 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_5) {
              test_5 = extractedValue_7905_warnsOnStaticExpression_2.boolEnum () ;
              if (GalgasBool::boolTrue == test_5) {
                TC_Array <FixItDescription> fixItArray6 ;
                inCompiler->emitSemanticWarning (extractedValue_7929_endOfExp_3, GGS_string ("guarded expression is static"), fixItArray6  COMMA_SOURCE_FILE ("instruction-event.galgas", 233)) ;
              }
            }
          }
          break ;
        case GGS_implicitBooleanConversionResult::Enumeration::enum_llvmVariable:
          break ;
        }
        GGS_instructionListIR temp_7 = GGS_instructionListIR::init (inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 248)) ;
        GGS_instructionListIR var_guardInstructionGenerationList_9609 = temp_7 ;
        GGS_procCallEffectiveParameterListIR var_guardEffectiveParameterListIR_9690 ;
        GGS_lstring var_guardMangledName_9739 ;
        GalgasBool test_8 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_8) {
          test_8 = extractedValue_7938_usesSelf_4.readProperty_bool ().boolEnum () ;
          if (GalgasBool::boolTrue == test_8) {
            GalgasBool test_9 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_9) {
              test_9 = constinArgument_inSelfType.readProperty_kind ().getter_isVoid (SOURCE_FILE ("instruction-event.galgas", 252)).boolEnum () ;
              if (GalgasBool::boolTrue == test_9) {
                TC_Array <FixItDescription> fixItArray10 ;
                inCompiler->emitSemanticError (extractedValue_7938_usesSelf_4.readProperty_location (), GGS_string ("'self' is not available in this context"), fixItArray10  COMMA_SOURCE_FILE ("instruction-event.galgas", 253)) ;
                var_guardEffectiveParameterListIR_9690.drop () ; // Release error dropped variable
                var_guardMangledName_9739.drop () ; // Release error dropped variable
              }
            }
            if (GalgasBool::boolFalse == test_9) {
              GGS_lstringlist var_propertyList_9991 = extractedValue_7947_nameList_5 ;
              GGS_lstring var_guardName_10054 ;
              {
              var_propertyList_9991.setter_popLast (var_guardName_10054, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 256)) ;
              }
              GGS_objectIR var_currentObject_10089 = GGS_objectIR::class_func_reference (constinArgument_inSelfType, function_llvmNameForSelf (inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 257))  COMMA_SOURCE_FILE ("instruction-event.galgas", 257)) ;
              UpEnumerator_lstringlist enumerator_10179 (var_propertyList_9991) ;
              while (enumerator_10179.hasCurrentObject ()) {
                {
                routine_handlePropertyAccessInExpression_3F_context_26__3F__3F__26_temporary_26_alloca_26_instructionListIR (constinArgument_inContext, var_currentObject_10089, enumerator_10179.current_mValue (HERE), constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 259)) ;
                }
                enumerator_10179.gotoNextObject () ;
              }
              {
              routine_analyzeGuardCall_3F_self_3F_routineAttributes_3F_receiver_3F_guardName_3F_effective_3F_context_3F_requiredMode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_21_effectiveIR_21_guardMangledName (constinArgument_inSelfType, constinArgument_inRoutineAttributes, var_currentObject_10089, var_guardName_10054, extractedValue_7956_parameterList_6, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_guardInstructionGenerationList_9609, var_guardEffectiveParameterListIR_9690, var_guardMangledName_9739, inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 269)) ;
              }
            }
          }
        }
        if (GalgasBool::boolFalse == test_8) {
          GalgasBool test_11 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_11) {
            test_11 = GGS_bool (ComparisonKind::equal, extractedValue_7947_nameList_5.getter_count (SOURCE_FILE ("instruction-event.galgas", 286)).objectCompare (GGS_uint (uint32_t (1U)))).boolEnum () ;
            if (GalgasBool::boolTrue == test_11) {
              TC_Array <FixItDescription> fixItArray12 ;
              inCompiler->emitSemanticError (extractedValue_7947_nameList_5.getter_mValueAtIndex (GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 287)).readProperty_location (), GGS_string ("Standalone guard are not handled"), fixItArray12  COMMA_SOURCE_FILE ("instruction-event.galgas", 287)) ;
              var_guardMangledName_9739.drop () ; // Release error dropped variable
              var_guardEffectiveParameterListIR_9690.drop () ; // Release error dropped variable
            }
          }
          if (GalgasBool::boolFalse == test_11) {
            GGS_lstringlist var_propertyList_11458 = extractedValue_7947_nameList_5 ;
            GGS_lstring var_globalReceiverName_11520 ;
            {
            var_propertyList_11458.setter_popFirst (var_globalReceiverName_11520, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 292)) ;
            }
            GGS_lstring var_guardName_11577 ;
            {
            var_propertyList_11458.setter_popLast (var_guardName_11577, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 293)) ;
            }
            GGS_objectIR var_currentObjectIR_11741 ;
            extensionMethod_searchValuedObject (ioArgument_ioUniversalMap, var_globalReceiverName_11520, constinArgument_inMode, ioArgument_ioTemporaries.readProperty_mInitializedDriverSet (), var_currentObjectIR_11741, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 294)) ;
            UpEnumerator_lstringlist enumerator_11780 (var_propertyList_11458) ;
            while (enumerator_11780.hasCurrentObject ()) {
              {
              routine_handlePropertyAccessInExpression_3F_context_26__3F__3F__26_temporary_26_alloca_26_instructionListIR (constinArgument_inContext, var_currentObjectIR_11741, enumerator_11780.current_mValue (HERE), constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 301)) ;
              }
              enumerator_11780.gotoNextObject () ;
            }
            {
            routine_analyzeGuardCall_3F_self_3F_routineAttributes_3F_receiver_3F_guardName_3F_effective_3F_context_3F_requiredMode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_21_effectiveIR_21_guardMangledName (constinArgument_inSelfType, constinArgument_inRoutineAttributes, var_currentObjectIR_11741, var_guardName_11577, extractedValue_7956_parameterList_6, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_guardInstructionGenerationList_9609, var_guardEffectiveParameterListIR_9690, var_guardMangledName_9739, inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 311)) ;
            }
          }
        }
        switch (var_booleanResult_8886.enumValue ()) {
        case GGS_implicitBooleanConversionResult::Enumeration::invalid:
          break ;
        case GGS_implicitBooleanConversionResult::Enumeration::enum_compileTime:
          {
            GGS_bool extractedValue_12772_boolValue_0 ;
            var_booleanResult_8886.getAssociatedValuesFor_compileTime (extractedValue_12772_boolValue_0) ;
            GalgasBool test_13 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_13) {
              test_13 = extractedValue_12772_boolValue_0.boolEnum () ;
              if (GalgasBool::boolTrue == test_13) {
                var_guardedCommandIRList_6392.addAssign_operation (GGS_guardedCommandIR::class_func_sync (extractedValue_7890_isContinue_0, var_guardMangledName_9739.readProperty_string (), var_guardInstructionGenerationList_9609, var_guardEffectiveParameterListIR_9690  COMMA_SOURCE_FILE ("instruction-event.galgas", 331))  COMMA_SOURCE_FILE ("instruction-event.galgas", 331)) ;
              }
            }
            if (GalgasBool::boolFalse == test_13) {
              TC_Array <FixItDescription> fixItArray14 ;
              inCompiler->emitSemanticError (var_guardMangledName_9739.readProperty_location (), GGS_string ("false guard not handled yet"), fixItArray14  COMMA_SOURCE_FILE ("instruction-event.galgas", 338)) ;
            }
          }
          break ;
        case GGS_implicitBooleanConversionResult::Enumeration::enum_llvmVariable:
          {
            GGS_string extractedValue_13216_llvmName_0 ;
            var_booleanResult_8886.getAssociatedValuesFor_llvmVariable (extractedValue_13216_llvmName_0) ;
            var_guardedCommandIRList_6392.addAssign_operation (GGS_guardedCommandIR::class_func_boolAndSync (extractedValue_7890_isContinue_0, var_boolExpInstructionGenerationList_8002, extractedValue_13216_llvmName_0, var_guardMangledName_9739.readProperty_string (), var_guardInstructionGenerationList_9609, var_guardEffectiveParameterListIR_9690  COMMA_SOURCE_FILE ("instruction-event.galgas", 341))  COMMA_SOURCE_FILE ("instruction-event.galgas", 341)) ;
          }
          break ;
        }
      }
      break ;
    }
    enumerator_6443.gotoNextObject () ;
  }
  {
  extensionSetter_openOverrideForSelectBlock (ioArgument_ioUniversalMap, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 377)) ;
  }
  GGS_syncInstructionBranchListIR temp_15 = GGS_syncInstructionBranchListIR::init (inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 378)) ;
  GGS_syncInstructionBranchListIR var_syncInstructionBranchListIR_14768 = temp_15 ;
  const GGS_syncInstructionAST temp_16 = this ;
  UpEnumerator_syncInstructionBranchListAST enumerator_14827 (temp_16.readProperty_mBranchList ()) ;
  UpEnumerator_guardedCommandIRList enumerator_14862 (var_guardedCommandIRList_6392) ;
  while (enumerator_14827.hasCurrentObject () && enumerator_14862.hasCurrentObject ()) {
    GGS_instructionListIR temp_17 = GGS_instructionListIR::init (inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 380)) ;
    GGS_instructionListIR var_branchInstructionGenerationList_14934 = temp_17 ;
    extensionMethod_analyzeBranchInstructionList (enumerator_14827.current_mInstructionList (HERE), constinArgument_inSelfType, constinArgument_inRoutineAttributes, enumerator_14827.current_mEndOfBranch (HERE), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_branchInstructionGenerationList_14934, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 381)) ;
    var_syncInstructionBranchListIR_14768.addAssign_operation (enumerator_14862.current_mGuardedCommand (HERE), var_branchInstructionGenerationList_14934  COMMA_SOURCE_FILE ("instruction-event.galgas", 393)) ;
    enumerator_14827.gotoNextObject () ;
    enumerator_14862.gotoNextObject () ;
  }
  {
  const GGS_syncInstructionAST temp_18 = this ;
  extensionSetter_closeOverride (ioArgument_ioUniversalMap, temp_18.readProperty_mEndOf_5F_on_5F_instruction (), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 395)) ;
  }
  const GGS_syncInstructionAST temp_19 = this ;
  ioArgument_ioInstructionGenerationList.addAssign_operation (GGS_syncInstructionIR::init_21__21_ (temp_19.readProperty_mInstructionLocation (), var_syncInstructionBranchListIR_14768, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-event.galgas", 397)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Routine 'analyzeGuardCall?self?routineAttributes?receiver?guardName?effective?context?requiredMode&temporary&staticEntityMap&variableMap&alloca&instructionListIR!effectiveIR!guardMangledName'
//
//--------------------------------------------------------------------------------------------------

void routine_analyzeGuardCall_3F_self_3F_routineAttributes_3F_receiver_3F_guardName_3F_effective_3F_context_3F_requiredMode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_21_effectiveIR_21_guardMangledName (const GGS_omnibusType constinArgument_inSelfType,
                                                                                                                                                                                                                                              const GGS_routineAttributes constinArgument_inRoutineAttributes,
                                                                                                                                                                                                                                              const GGS_objectIR constinArgument_inReceiver,
                                                                                                                                                                                                                                              const GGS_lstring constinArgument_inGuardName,
                                                                                                                                                                                                                                              const GGS_effectiveArgumentListAST constinArgument_inEffectiveParameterList,
                                                                                                                                                                                                                                              const GGS_semanticContext constinArgument_inContext,
                                                                                                                                                                                                                                              const GGS_mode constinArgument_inRequiredMode,
                                                                                                                                                                                                                                              GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                                                                                                                                                                                              GGS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                                                                                                                                                                                              GGS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                                                                                                                                                                                              GGS_allocaList & ioArgument_ioAllocaList,
                                                                                                                                                                                                                                              GGS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                                                                                                                                                                                              GGS_procCallEffectiveParameterListIR & outArgument_outEffectiveParameterListIR,
                                                                                                                                                                                                                                              GGS_lstring & outArgument_outGuardMangledName,
                                                                                                                                                                                                                                              Compiler * inCompiler
                                                                                                                                                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outEffectiveParameterListIR.drop () ; // Release 'out' argument
  outArgument_outGuardMangledName.drop () ; // Release 'out' argument
  GGS_lstring var_guardMangledName_16536 = extensionGetter_mangledName (constinArgument_inEffectiveParameterList, extensionGetter_type (constinArgument_inReceiver, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 418)).readProperty_omnibusTypeDescriptionName (), constinArgument_inGuardName, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 418)) ;
  GGS_bool var_isPublic_16788 ;
  GGS_routineTypedSignature var_formalSignature_16825 ;
  GGS_lstring var_guardRoutineUserLLVMName_16846 ;
  GGS_lstring joker_16871 ; // Joker input parameter
  constinArgument_inContext.readProperty_mGuardMap ().method_searchKey (var_guardMangledName_16536, var_isPublic_16788, var_formalSignature_16825, var_guardRoutineUserLLVMName_16846, joker_16871, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 420)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = var_isPublic_16788.operator_not (SOURCE_FILE ("instruction-event.galgas", 422)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      TC_Array <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inGuardName.readProperty_location (), GGS_string ("this guard is not public"), fixItArray1  COMMA_SOURCE_FILE ("instruction-event.galgas", 423)) ;
      outArgument_outGuardMangledName.drop () ; // Release error dropped variable
      outArgument_outEffectiveParameterListIR.drop () ; // Release error dropped variable
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    outArgument_outGuardMangledName = var_guardRoutineUserLLVMName_16846 ;
    GGS_procCallEffectiveParameterListIR temp_2 = GGS_procCallEffectiveParameterListIR::init (inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 427)) ;
    temp_2.enterElement (GGS_procCallEffectiveParameterListIR_2E_element::init_21__21_ (GGS_procEffectiveParameterPassingModeIR::class_func_outputInput (SOURCE_FILE ("instruction-event.galgas", 427)), constinArgument_inReceiver, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 427)) ;
    outArgument_outEffectiveParameterListIR = temp_2 ;
    {
    routine_analyzeEffectiveParameters_3F_self_3F_routineAttributes_3F_formal_3F_effective_3F_errorLocation_3F_context_3F_requiredMode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_26_effectiveIR (constinArgument_inSelfType, constinArgument_inRoutineAttributes, var_formalSignature_16825, constinArgument_inEffectiveParameterList, constinArgument_inGuardName.readProperty_location (), constinArgument_inContext, constinArgument_inRequiredMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, outArgument_outEffectiveParameterListIR, inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 428)) ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@syncInstructionIR llvmInstructionCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_syncInstructionIR::method_llvmInstructionCode (GGS_string & ioArgument_ioLLVMcode,
                                                         const GGS_generationContext constinArgument_inGenerationContext,
                                                         GGS_generationAdds & ioArgument_ioGenerationAdds,
                                                         Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioGenerationAdds.mProperty_mUsesGuards = GGS_bool (true) ;
  GGS_string var_startLabel_19929 = GGS_string ("select.").add_operation (ioArgument_ioGenerationAdds.readProperty_mUniqueIndex ().getter_string (SOURCE_FILE ("instruction-event.galgas", 496)), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 496)) ;
  ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.plusAssign_operation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 497)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  br label %").add_operation (var_startLabel_19929, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 499)).add_operation (GGS_string (".start\n\n"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 499)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 499)) ;
  GGS_string var_startLabelName_20091 = var_startLabel_19929.add_operation (GGS_string (".start"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 500)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_startLabelName_20091.add_operation (GGS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 501)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 501)) ;
  GGS_string var_exitLabelName_20176 = var_startLabel_19929.add_operation (GGS_string (".exit"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 502)) ;
  GGS_string var_selectLabelName_20219 = var_startLabel_19929.add_operation (GGS_string (".select"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 503)) ;
  GGS_string var_errorLabelName_20266 = var_startLabel_19929.add_operation (GGS_string (".error"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 504)) ;
  GGS_string var_currentStartBranchLabel_20311 = var_startLabelName_20091 ;
  const GGS_syncInstructionIR temp_0 = this ;
  UpEnumerator_syncInstructionBranchListIR enumerator_20373 (temp_0.readProperty_mOnInstructionBranchListIR ()) ;
  GGS_uint index_20354 (uint32_t (0)) ;
  while (enumerator_20373.hasCurrentObject ()) {
    GGS_string var_acceptanceVarName_20417 = GGS_string ("%").add_operation (var_startLabel_19929, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 507)).add_operation (GGS_string (".accept."), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 507)).add_operation (index_20354.getter_string (SOURCE_FILE ("instruction-event.galgas", 507)), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 507)) ;
    GGS_bool var_isWhileGuardedCommand_20487 ;
    switch (enumerator_20373.current (HERE).readProperty_mGuardedCommand ().enumValue ()) {
    case GGS_guardedCommandIR::Enumeration::invalid:
      break ;
    case GGS_guardedCommandIR::Enumeration::enum_booleanGuard:
      {
        GGS_bool extractedValue_20566_isExitCommand_0 ;
        GGS_instructionListIR extractedValue_20580_instructionGenerationList_1 ;
        GGS_string extractedValue_20606_boolGuardBoolLLVMName_2 ;
        enumerator_20373.current (HERE).readProperty_mGuardedCommand ().getAssociatedValuesFor_booleanGuard (extractedValue_20566_isExitCommand_0, extractedValue_20580_instructionGenerationList_1, extractedValue_20606_boolGuardBoolLLVMName_2) ;
        var_isWhileGuardedCommand_20487 = extractedValue_20566_isExitCommand_0 ;
        extensionMethod_instructionListLLVMCode (extractedValue_20580_instructionGenerationList_1, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 512)) ;
        GGS_string var_acceptedLabelName_20796 = var_startLabel_19929.add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 513)).add_operation (index_20354.getter_string (SOURCE_FILE ("instruction-event.galgas", 513)), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 513)).add_operation (GGS_string (".true"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 513)) ;
        GGS_string var_rejectedLabelName_20859 = var_startLabel_19929.add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 514)).add_operation (index_20354.getter_string (SOURCE_FILE ("instruction-event.galgas", 514)), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 514)).add_operation (GGS_string (".false"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 514)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  br i1 ").add_operation (extractedValue_20606_boolGuardBoolLLVMName_2, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 515)).add_operation (GGS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 515)).add_operation (var_acceptedLabelName_20796, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 515)).add_operation (GGS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 515)).add_operation (var_rejectedLabelName_20859, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 515)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 515)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 515)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(var_acceptedLabelName_20796.add_operation (GGS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 516)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 516)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  call void @accept.guard ()\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 517)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  br label %").add_operation (var_rejectedLabelName_20859, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 518)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 518)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 518)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(var_rejectedLabelName_20859.add_operation (GGS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 519)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 519)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  ").add_operation (var_acceptanceVarName_20417, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 520)).add_operation (GGS_string (" = or i1 "), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 520)).add_operation (extractedValue_20606_boolGuardBoolLLVMName_2, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 520)).add_operation (GGS_string (", 0\n"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 520)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 520)) ;
      }
      break ;
    case GGS_guardedCommandIR::Enumeration::enum_boolAndSync:
      {
        GGS_bool extractedValue_21369_isExitCommand_0 ;
        GGS_instructionListIR extractedValue_21383_expInstructionList_1 ;
        GGS_string extractedValue_21402_boolGuardLLVMName_2 ;
        GGS_string extractedValue_21420_guardMangledName_3 ;
        GGS_instructionListIR extractedValue_21437_guardInstructionList_4 ;
        GGS_procCallEffectiveParameterListIR extractedValue_21458_effectiveParameterList_5 ;
        enumerator_20373.current (HERE).readProperty_mGuardedCommand ().getAssociatedValuesFor_boolAndSync (extractedValue_21369_isExitCommand_0, extractedValue_21383_expInstructionList_1, extractedValue_21402_boolGuardLLVMName_2, extractedValue_21420_guardMangledName_3, extractedValue_21437_guardInstructionList_4, extractedValue_21458_effectiveParameterList_5) ;
        var_isWhileGuardedCommand_20487 = extractedValue_21369_isExitCommand_0 ;
        extensionMethod_instructionListLLVMCode (extractedValue_21383_expInstructionList_1, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 523)) ;
        GGS_string var_testOkLabelName_21642 = var_startLabel_19929.add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 524)).add_operation (index_20354.getter_string (SOURCE_FILE ("instruction-event.galgas", 524)), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 524)).add_operation (GGS_string (".boolexp.true"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 524)) ;
        GGS_string var_testExitLabelName_21711 = var_startLabel_19929.add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 525)).add_operation (index_20354.getter_string (SOURCE_FILE ("instruction-event.galgas", 525)), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 525)).add_operation (GGS_string (".test.exit"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 525)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  br i1 ").add_operation (extractedValue_21402_boolGuardLLVMName_2, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 526)).add_operation (GGS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 526)).add_operation (var_testOkLabelName_21642, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 526)).add_operation (GGS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 526)).add_operation (var_testExitLabelName_21711, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 526)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 526)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 526)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(var_testOkLabelName_21642.add_operation (GGS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 527)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 527)) ;
        extensionMethod_instructionListLLVMCode (extractedValue_21437_guardInstructionList_4, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 528)) ;
        GGS_string var_guardAcceptationLabelName_22055 = var_startLabel_19929.add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 529)).add_operation (index_20354.getter_string (SOURCE_FILE ("instruction-event.galgas", 529)), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 529)).add_operation (GGS_string (".guard.acceptation"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 529)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  %").add_operation (var_guardAcceptationLabelName_22055, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 530)).add_operation (GGS_string (" = call i1 @"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 530)).add_operation (extractedValue_21420_guardMangledName_3.getter_assemblerRepresentation (SOURCE_FILE ("instruction-event.galgas", 530)), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 530)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 530)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GGS_string (" ("), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 531)) ;
        UpEnumerator_procCallEffectiveParameterListIR enumerator_22312 (extractedValue_21458_effectiveParameterList_5) ;
        while (enumerator_22312.hasCurrentObject ()) {
          switch (enumerator_22312.current_mEffectiveParameterPassingMode (HERE).enumValue ()) {
          case GGS_procEffectiveParameterPassingModeIR::Enumeration::invalid:
            break ;
          case GGS_procEffectiveParameterPassingModeIR::Enumeration::enum_input:
            {
              ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_22312.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 535)).add_operation (GGS_string (" * "), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 535)).add_operation (extensionGetter_llvmName (enumerator_22312.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 535)), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 535)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 535)) ;
            }
            break ;
          case GGS_procEffectiveParameterPassingModeIR::Enumeration::enum_output:
            {
              ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_22312.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 537)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 537)).add_operation (extensionGetter_llvmName (enumerator_22312.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 537)), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 537)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 537)) ;
            }
            break ;
          case GGS_procEffectiveParameterPassingModeIR::Enumeration::enum_outputInput:
            {
              ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_22312.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 539)).add_operation (GGS_string (" * "), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 539)).add_operation (extensionGetter_llvmName (enumerator_22312.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 539)), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 539)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 539)) ;
            }
            break ;
          }
          enumerator_22312.gotoNextObject () ;
          if (enumerator_22312.hasCurrentObject ()) {
            ioArgument_ioLLVMcode.plusAssign_operation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 542)) ;
          }
        }
        ioArgument_ioLLVMcode.plusAssign_operation(GGS_string (")\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 544)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  br label %").add_operation (var_testExitLabelName_21711, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 545)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 545)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 545)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(var_testExitLabelName_21711.add_operation (GGS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 546)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 546)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  ").add_operation (var_acceptanceVarName_20417, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 547)).add_operation (GGS_string (" = phi i1 "), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 547)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 547)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("[%").add_operation (var_guardAcceptationLabelName_22055, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 548)).add_operation (GGS_string (", %"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 548)).add_operation (var_testOkLabelName_21642, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 548)).add_operation (GGS_string ("], "), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 548)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 548)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("[false, %").add_operation (var_currentStartBranchLabel_20311, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 549)).add_operation (GGS_string ("]\n"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 549)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 549)) ;
      }
      break ;
    case GGS_guardedCommandIR::Enumeration::enum_sync:
      {
        GGS_bool extractedValue_23137_isExitCommand_0 ;
        GGS_string extractedValue_23151_guardMangledName_1 ;
        GGS_instructionListIR extractedValue_23168_guardInstructionList_2 ;
        GGS_procCallEffectiveParameterListIR extractedValue_23189_effectiveParameterList_3 ;
        enumerator_20373.current (HERE).readProperty_mGuardedCommand ().getAssociatedValuesFor_sync (extractedValue_23137_isExitCommand_0, extractedValue_23151_guardMangledName_1, extractedValue_23168_guardInstructionList_2, extractedValue_23189_effectiveParameterList_3) ;
        var_isWhileGuardedCommand_20487 = extractedValue_23137_isExitCommand_0 ;
        extensionMethod_instructionListLLVMCode (extractedValue_23168_guardInstructionList_2, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 552)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  ").add_operation (var_acceptanceVarName_20417, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 553)).add_operation (GGS_string (" = call i1 @"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 553)).add_operation (extractedValue_23151_guardMangledName_1.getter_assemblerRepresentation (SOURCE_FILE ("instruction-event.galgas", 553)), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 553)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 553)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GGS_string (" ("), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 554)) ;
        UpEnumerator_procCallEffectiveParameterListIR enumerator_23539 (extractedValue_23189_effectiveParameterList_3) ;
        while (enumerator_23539.hasCurrentObject ()) {
          switch (enumerator_23539.current_mEffectiveParameterPassingMode (HERE).enumValue ()) {
          case GGS_procEffectiveParameterPassingModeIR::Enumeration::invalid:
            break ;
          case GGS_procEffectiveParameterPassingModeIR::Enumeration::enum_input:
            {
              ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_23539.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 558)).add_operation (GGS_string (" * "), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 558)).add_operation (extensionGetter_llvmName (enumerator_23539.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 558)), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 558)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 558)) ;
            }
            break ;
          case GGS_procEffectiveParameterPassingModeIR::Enumeration::enum_output:
            {
              ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_23539.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 560)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 560)).add_operation (extensionGetter_llvmName (enumerator_23539.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 560)), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 560)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 560)) ;
            }
            break ;
          case GGS_procEffectiveParameterPassingModeIR::Enumeration::enum_outputInput:
            {
              ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_23539.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 562)).add_operation (GGS_string (" * "), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 562)).add_operation (extensionGetter_llvmName (enumerator_23539.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 562)), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 562)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 562)) ;
            }
            break ;
          }
          enumerator_23539.gotoNextObject () ;
          if (enumerator_23539.hasCurrentObject ()) {
            ioArgument_ioLLVMcode.plusAssign_operation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 565)) ;
          }
        }
        ioArgument_ioLLVMcode.plusAssign_operation(GGS_string (")\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 567)) ;
      }
      break ;
    }
    GGS_string var_acceptedLabelName_24042 = var_startLabel_19929.add_operation (GGS_string (".accepted."), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 569)).add_operation (index_20354.getter_string (SOURCE_FILE ("instruction-event.galgas", 569)), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 569)) ;
    GGS_string var_rejectedLabelName_24102 = var_startLabel_19929.add_operation (GGS_string (".rejected."), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 570)).add_operation (index_20354.getter_string (SOURCE_FILE ("instruction-event.galgas", 570)), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 570)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  br i1 ").add_operation (var_acceptanceVarName_20417, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 571)).add_operation (GGS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 571)).add_operation (var_acceptedLabelName_24042, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 571)).add_operation (GGS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 571)).add_operation (var_rejectedLabelName_24102, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 571)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 571)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 571)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(var_acceptedLabelName_24042.add_operation (GGS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 572)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 572)) ;
    extensionMethod_instructionListLLVMCode (enumerator_20373.current (HERE).readProperty_mInstructionGenerationList (), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 573)) ;
    GGS_string temp_1 ;
    const GalgasBool test_2 = var_isWhileGuardedCommand_20487.boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      temp_1 = var_startLabelName_20091 ;
    }else if (GalgasBool::boolFalse == test_2) {
      temp_1 = var_exitLabelName_20176 ;
    }
    ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  br label %").add_operation (temp_1, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 574)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 574)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 574)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(var_rejectedLabelName_24102.add_operation (GGS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 575)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 575)) ;
    var_currentStartBranchLabel_20311 = var_rejectedLabelName_24102 ;
    enumerator_20373.gotoNextObject () ;
    index_20354.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 506)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  %").add_operation (var_selectLabelName_20219, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 578)).add_operation (GGS_string (" = call i1 @"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 578)).add_operation (function_llvmNameForServiceCall (function_waitForGuardChangeFunctionName (inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 578)), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 578)), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 578)).add_operation (GGS_string (" ()\n"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 578)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 578)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  br i1 %").add_operation (var_selectLabelName_20219, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 579)).add_operation (GGS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 579)).add_operation (var_startLabelName_20091, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 579)).add_operation (GGS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 579)).add_operation (var_errorLabelName_20266, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 579)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 579)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 579)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_errorLabelName_20266.add_operation (GGS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 580)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 580)) ;
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    test_3 = GGS_bool (gOption_omnibus_5F_options_noPanicGeneration.readProperty_value ()).boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  br label %").add_operation (var_exitLabelName_20176, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 582)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 582)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 582)) ;
    }
  }
  if (GalgasBool::boolFalse == test_3) {
    const GGS_syncInstructionIR temp_4 = this ;
    ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  call void @").add_operation (function_panicRoutineNameForLocationFile (temp_4.readProperty_mSelectInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 584)).getter_assemblerRepresentation (SOURCE_FILE ("instruction-event.galgas", 584)), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 584)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 584)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 584)) ;
    const GGS_syncInstructionIR temp_5 = this ;
    ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inGenerationContext.readProperty_mPanicLineLLVMType ().ptr (), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 585)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 585)).add_operation (temp_5.readProperty_mSelectInstructionLocation ().getter_endLine (inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 585)).getter_string (SOURCE_FILE ("instruction-event.galgas", 585)), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 585)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 585)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 585)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inGenerationContext.readProperty_mPanicCodeLLVMType ().ptr (), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 586)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 586)).add_operation (function_panicCodeForClosedSync (inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 586)).getter_string (SOURCE_FILE ("instruction-event.galgas", 586)), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 586)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 586)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 586)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  unreachable\n\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 587)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(var_exitLabelName_20176.add_operation (GGS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 589)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 589)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@syncInstructionIR enterAccessibleEntities'
//
//--------------------------------------------------------------------------------------------------

void cPtr_syncInstructionIR::method_enterAccessibleEntities (GGS_stringset & ioArgument_ioInvokedRoutineSet,
                                                             GGS_uint & ioArgument_ioMaxBranchOfOnInstructions,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_syncInstructionIR temp_0 = this ;
  GGS_uint var_branchCount_25835 = temp_0.readProperty_mOnInstructionBranchListIR ().getter_count (SOURCE_FILE ("instruction-event.galgas", 598)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::lowerThan, ioArgument_ioMaxBranchOfOnInstructions.objectCompare (var_branchCount_25835)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      ioArgument_ioMaxBranchOfOnInstructions = var_branchCount_25835 ;
    }
  }
  const GGS_syncInstructionIR temp_2 = this ;
  UpEnumerator_syncInstructionBranchListIR enumerator_26014 (temp_2.readProperty_mOnInstructionBranchListIR ()) ;
  while (enumerator_26014.hasCurrentObject ()) {
    extensionMethod_enterAccessibleEntities (enumerator_26014.current (HERE).readProperty_mInstructionGenerationList (), ioArgument_ioInvokedRoutineSet, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 603)) ;
    switch (enumerator_26014.current (HERE).readProperty_mGuardedCommand ().enumValue ()) {
    case GGS_guardedCommandIR::Enumeration::invalid:
      break ;
    case GGS_guardedCommandIR::Enumeration::enum_booleanGuard:
      {
        GGS_bool extractedValue_26217__0 ;
        GGS_instructionListIR extractedValue_26219_instructionGenerationList_1 ;
        GGS_string extractedValue_26245__2 ;
        enumerator_26014.current (HERE).readProperty_mGuardedCommand ().getAssociatedValuesFor_booleanGuard (extractedValue_26217__0, extractedValue_26219_instructionGenerationList_1, extractedValue_26245__2) ;
        extensionMethod_enterAccessibleEntities (extractedValue_26219_instructionGenerationList_1, ioArgument_ioInvokedRoutineSet, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 606)) ;
      }
      break ;
    case GGS_guardedCommandIR::Enumeration::enum_sync:
      {
        GGS_bool extractedValue_26375__0 ;
        GGS_string extractedValue_26377_guardMangledName_1 ;
        GGS_instructionListIR extractedValue_26394_guardInstructionGenerationList_2 ;
        GGS_procCallEffectiveParameterListIR extractedValue_26425__3 ;
        enumerator_26014.current (HERE).readProperty_mGuardedCommand ().getAssociatedValuesFor_sync (extractedValue_26375__0, extractedValue_26377_guardMangledName_1, extractedValue_26394_guardInstructionGenerationList_2, extractedValue_26425__3) ;
        extensionMethod_enterAccessibleEntities (extractedValue_26394_guardInstructionGenerationList_2, ioArgument_ioInvokedRoutineSet, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 608)) ;
        ioArgument_ioInvokedRoutineSet.addAssign_operation (extractedValue_26377_guardMangledName_1  COMMA_SOURCE_FILE ("instruction-event.galgas", 609)) ;
      }
      break ;
    case GGS_guardedCommandIR::Enumeration::enum_boolAndSync:
      {
        GGS_bool extractedValue_26614__0 ;
        GGS_instructionListIR extractedValue_26616_instructionGenerationList_1 ;
        GGS_string extractedValue_26642__2 ;
        GGS_string extractedValue_26644_guardMangledName_3 ;
        GGS_instructionListIR extractedValue_26661_guardInstructionGenerationList_4 ;
        GGS_procCallEffectiveParameterListIR extractedValue_26692__5 ;
        enumerator_26014.current (HERE).readProperty_mGuardedCommand ().getAssociatedValuesFor_boolAndSync (extractedValue_26614__0, extractedValue_26616_instructionGenerationList_1, extractedValue_26642__2, extractedValue_26644_guardMangledName_3, extractedValue_26661_guardInstructionGenerationList_4, extractedValue_26692__5) ;
        extensionMethod_enterAccessibleEntities (extractedValue_26616_instructionGenerationList_1, ioArgument_ioInvokedRoutineSet, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 611)) ;
        extensionMethod_enterAccessibleEntities (extractedValue_26661_guardInstructionGenerationList_4, ioArgument_ioInvokedRoutineSet, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 612)) ;
        ioArgument_ioInvokedRoutineSet.addAssign_operation (extractedValue_26644_guardMangledName_3  COMMA_SOURCE_FILE ("instruction-event.galgas", 613)) ;
      }
      break ;
    }
    enumerator_26014.gotoNextObject () ;
  }
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    test_3 = GGS_bool (gOption_omnibus_5F_options_noPanicGeneration.readProperty_value ()).operator_not (SOURCE_FILE ("instruction-event.galgas", 616)).boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      const GGS_syncInstructionIR temp_4 = this ;
      ioArgument_ioInvokedRoutineSet.addAssign_operation (function_panicRoutineNameForLocationFile (temp_4.readProperty_mSelectInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 617))  COMMA_SOURCE_FILE ("instruction-event.galgas", 617)) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@whileInstructionAST noteInstructionTypesInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_whileInstructionAST::method_noteInstructionTypesInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_whileInstructionAST temp_0 = this ;
  extensionMethod_noteInstructionListTypesInPrecedenceGraph (temp_0.readProperty_mWhileInstructionList (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 48)) ;
  const GGS_whileInstructionAST temp_1 = this ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((cPtr_expressionAST *) temp_1.readProperty_m_5F_while_5F_Expression ().ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 49)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@whileInstructionAST instructionSemanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_whileInstructionAST::method_instructionSemanticAnalysis (const GGS_omnibusType constinArgument_inSelfType,
                                                                   const GGS_routineAttributes constinArgument_inRoutineAttributes,
                                                                   const GGS_semanticContext constinArgument_inContext,
                                                                   const GGS_mode constinArgument_inMode,
                                                                   GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                   GGS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                   GGS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                   GGS_allocaList & ioArgument_ioAllocaList,
                                                                   GGS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_instructionListIR temp_0 = GGS_instructionListIR::init (inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 68)) ;
  GGS_instructionListIR var_testInstructionGenerationList_3200 = temp_0 ;
  GGS_objectIR var_testValue_3626 ;
  const GGS_whileInstructionAST temp_1 = this ;
  callExtensionMethod_analyzeExpression ((cPtr_expressionAST *) temp_1.readProperty_m_5F_while_5F_Expression ().ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, function_voidType (inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 72)), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_testInstructionGenerationList_3200, var_testValue_3626, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 69)) ;
  {
  extensionSetter_appendLoadWhenReference (var_testInstructionGenerationList_3200, ioArgument_ioTemporaries, var_testValue_3626, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 82)) ;
  }
  GGS_implicitBooleanConversionResult var_booleanResult_3998 ;
  const GGS_whileInstructionAST temp_2 = this ;
  extensionMethod_generateConvertToBooleanCode (constinArgument_inContext.readProperty_mImplicitConversionToBooleanMap (), var_testValue_3626, temp_2.readProperty_mEndOf_5F_test_5F_expression (), ioArgument_ioTemporaries, var_testInstructionGenerationList_3200, ioArgument_ioAllocaList, var_booleanResult_3998, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 87)) ;
  switch (var_booleanResult_3998.enumValue ()) {
  case GGS_implicitBooleanConversionResult::Enumeration::invalid:
    break ;
  case GGS_implicitBooleanConversionResult::Enumeration::enum_compileTime:
    {
      GGS_bool extractedValue_4060__0 ;
      var_booleanResult_3998.getAssociatedValuesFor_compileTime (extractedValue_4060__0) ;
      const GGS_whileInstructionAST temp_3 = this ;
      TC_Array <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mEndOf_5F_test_5F_expression (), GGS_string ("test expression type should not be a compile time expression"), fixItArray4  COMMA_SOURCE_FILE ("instruction-while.galgas", 97)) ;
    }
    break ;
  case GGS_implicitBooleanConversionResult::Enumeration::enum_llvmVariable:
    break ;
  }
  GGS_instructionListIR temp_5 = GGS_instructionListIR::init (inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 108)) ;
  GGS_instructionListIR var_instructionGenerationList_4581 = temp_5 ;
  {
  extensionSetter_openOverrideForRepeatBlock (ioArgument_ioUniversalMap, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 109)) ;
  }
  const GGS_whileInstructionAST temp_6 = this ;
  const GGS_whileInstructionAST temp_7 = this ;
  extensionMethod_analyzeBranchInstructionList (temp_6.readProperty_mWhileInstructionList (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, temp_7.readProperty_mEndOf_5F_while_5F_instruction (), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_instructionGenerationList_4581, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 110)) ;
  {
  const GGS_whileInstructionAST temp_8 = this ;
  extensionSetter_closeOverride (ioArgument_ioUniversalMap, temp_8.readProperty_mEndOf_5F_while_5F_instruction (), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 122)) ;
  }
  const GGS_whileInstructionAST temp_9 = this ;
  ioArgument_ioInstructionGenerationList.addAssign_operation (GGS_whileInstructionIR::init_21__21__21__21_ (temp_9.readProperty_mEndOf_5F_test_5F_expression ().getter_endLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 125)), var_testInstructionGenerationList_3200, extensionGetter_llvmName (var_booleanResult_3998, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 127)), var_instructionGenerationList_4581, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-while.galgas", 124)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@whileInstructionIR llvmInstructionCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_whileInstructionIR::method_llvmInstructionCode (GGS_string & ioArgument_ioLLVMcode,
                                                          const GGS_generationContext constinArgument_inGenerationContext,
                                                          GGS_generationAdds & ioArgument_ioGenerationAdds,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_whileInstructionIR temp_0 = this ;
  GGS_string var_labelTest_6197 = GGS_string ("while.").add_operation (temp_0.readProperty_mLabelIndex ().getter_string (SOURCE_FILE ("instruction-while.galgas", 150)), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 150)).add_operation (GGS_string (".test"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 150)) ;
  const GGS_whileInstructionIR temp_1 = this ;
  GGS_string var_labelLoop_6253 = GGS_string ("while.").add_operation (temp_1.readProperty_mLabelIndex ().getter_string (SOURCE_FILE ("instruction-while.galgas", 151)), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 151)).add_operation (GGS_string (".loop"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 151)) ;
  const GGS_whileInstructionIR temp_2 = this ;
  GGS_string var_labelEnd_6309 = GGS_string ("while.").add_operation (temp_2.readProperty_mLabelIndex ().getter_string (SOURCE_FILE ("instruction-while.galgas", 152)), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 152)).add_operation (GGS_string (".end"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 152)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  br label %").add_operation (var_labelTest_6197, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 153)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 153)), inCompiler  COMMA_SOURCE_FILE ("instruction-while.galgas", 153)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelTest_6197.add_operation (GGS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 154)), inCompiler  COMMA_SOURCE_FILE ("instruction-while.galgas", 154)) ;
  const GGS_whileInstructionIR temp_3 = this ;
  extensionMethod_instructionListLLVMCode (temp_3.readProperty_mTestInstructionGenerationList (), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 155)) ;
  const GGS_whileInstructionIR temp_4 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  br i1 ").add_operation (temp_4.readProperty_m_5F_while_5F_llvmName (), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 156)).add_operation (GGS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 156)).add_operation (var_labelLoop_6253, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 156)).add_operation (GGS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 156)).add_operation (var_labelEnd_6309, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 156)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 156)), inCompiler  COMMA_SOURCE_FILE ("instruction-while.galgas", 156)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelLoop_6253.add_operation (GGS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 157)), inCompiler  COMMA_SOURCE_FILE ("instruction-while.galgas", 157)) ;
  const GGS_whileInstructionIR temp_5 = this ;
  extensionMethod_instructionListLLVMCode (temp_5.readProperty_mInstructionGenerationList (), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 158)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  br label %").add_operation (var_labelTest_6197, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 159)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 159)), inCompiler  COMMA_SOURCE_FILE ("instruction-while.galgas", 159)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelEnd_6309.add_operation (GGS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 160)), inCompiler  COMMA_SOURCE_FILE ("instruction-while.galgas", 160)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@whileInstructionIR enterAccessibleEntities'
//
//--------------------------------------------------------------------------------------------------

void cPtr_whileInstructionIR::method_enterAccessibleEntities (GGS_stringset & ioArgument_ioInvokedRoutineSet,
                                                              GGS_uint & ioArgument_ioMaxBranchOfOnInstructions,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_whileInstructionIR temp_0 = this ;
  extensionMethod_enterAccessibleEntities (temp_0.readProperty_mTestInstructionGenerationList (), ioArgument_ioInvokedRoutineSet, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 169)) ;
  const GGS_whileInstructionIR temp_1 = this ;
  extensionMethod_enterAccessibleEntities (temp_1.readProperty_mInstructionGenerationList (), ioArgument_ioInvokedRoutineSet, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 170)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@forInstructionAST noteInstructionTypesInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_forInstructionAST::method_noteInstructionTypesInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_forInstructionAST temp_0 = this ;
  extensionMethod_noteInstructionListTypesInPrecedenceGraph (temp_0.readProperty_mDoInstructionList (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 73)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@forInstructionAST instructionSemanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_forInstructionAST::method_instructionSemanticAnalysis (const GGS_omnibusType constinArgument_inSelfType,
                                                                 const GGS_routineAttributes constinArgument_inRoutineAttributes,
                                                                 const GGS_semanticContext constinArgument_inContext,
                                                                 const GGS_mode constinArgument_inMode,
                                                                 GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                 GGS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                 GGS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                 GGS_allocaList & ioArgument_ioAllocaList,
                                                                 GGS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_objectIR var_iteratedObjectPointer_3926 ;
  {
  const GGS_forInstructionAST temp_0 = this ;
  extensionSetter_searchValuedObjectForReadAccess (ioArgument_ioUniversalMap, temp_0.readProperty_mIteratedObject (), var_iteratedObjectPointer_3926, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 92)) ;
  }
  GGS_omnibusType var_iteratedType_3970 = extensionGetter_type (var_iteratedObjectPointer_3926, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 94)) ;
  GGS_omnibusType var_iteratedElementType_4064 ;
  switch (var_iteratedType_3970.readProperty_subscript ().enumValue ()) {
  case GGS_subscript::Enumeration::invalid:
    break ;
  case GGS_subscript::Enumeration::enum_noSubscript:
    {
      const GGS_forInstructionAST temp_1 = this ;
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mIteratedObject ().readProperty_location (), GGS_string ("this object is not enumerable"), fixItArray2  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 99)) ;
      var_iteratedElementType_4064.drop () ; // Release error dropped variable
    }
    break ;
  case GGS_subscript::Enumeration::enum_literalString:
    {
      var_iteratedElementType_4064 = extensionGetter_type (extensionGetter_searchKey (constinArgument_inContext.readProperty_mTypeMap (), GGS_string ("u8").getter_nowhere (SOURCE_FILE ("instruction-for-in-do.galgas", 101)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 101)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 101)) ;
    }
    break ;
  case GGS_subscript::Enumeration::enum_staticSubscript:
    {
      GGS_omnibusType extractedValue_4351_elementType_0 ;
      GGS_bigint extractedValue_4363__1 ;
      var_iteratedType_3970.readProperty_subscript ().getAssociatedValuesFor_staticSubscript (extractedValue_4351_elementType_0, extractedValue_4363__1) ;
      var_iteratedElementType_4064 = extractedValue_4351_elementType_0 ;
    }
    break ;
  }
  const GGS_forInstructionAST temp_3 = this ;
  const GGS_forInstructionAST temp_4 = this ;
  GGS_lstring var_omnibusName_4423 = GGS_lstring::init_21__21_ (temp_3.readProperty_mVarName ().readProperty_string ().add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 106)).add_operation (ioArgument_ioTemporaries.readProperty_mTemporaryIndex ().getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 106)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 106)), temp_4.readProperty_mVarName ().readProperty_location (), inCompiler COMMA_HERE) ;
  ioArgument_ioTemporaries.mProperty_mTemporaryIndex.plusAssign_operation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 107)) ;
  ioArgument_ioAllocaList.addAssign_operation (function_llvmNameForLocalVariable (var_omnibusName_4423.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 108)), var_iteratedElementType_4064, GGS_bool (false)  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 108)) ;
  {
  extensionSetter_openOverrideForRepeatBlock (ioArgument_ioUniversalMap, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 110)) ;
  }
  {
  const GGS_forInstructionAST temp_5 = this ;
  extensionSetter_insertLocalConstant (ioArgument_ioUniversalMap, temp_5.readProperty_mVarName (), GGS_bool (false), var_iteratedElementType_4064, var_omnibusName_4423, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 111)) ;
  }
  GGS_instructionListIR temp_6 = GGS_instructionListIR::init (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 113)) ;
  GGS_instructionListIR var_whileExpression_5F_GenerationList_4910 = temp_6 ;
  GGS_objectIR var_whileExpressionResult_5340 ;
  const GGS_forInstructionAST temp_7 = this ;
  callExtensionMethod_analyzeExpression ((cPtr_expressionAST *) temp_7.readProperty_mWhileExpression ().ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, function_voidType (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 117)), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_whileExpression_5F_GenerationList_4910, var_whileExpressionResult_5340, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 114)) ;
  GGS_implicitBooleanConversionResult var_whileExpressionBooleanResult_5639 ;
  const GGS_forInstructionAST temp_8 = this ;
  extensionMethod_generateConvertToBooleanCode (constinArgument_inContext.readProperty_mImplicitConversionToBooleanMap (), var_whileExpressionResult_5340, temp_8.readProperty_mEndOf_5F_whileExpression (), ioArgument_ioTemporaries, var_whileExpression_5F_GenerationList_4910, ioArgument_ioAllocaList, var_whileExpressionBooleanResult_5639, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 128)) ;
  switch (var_whileExpressionBooleanResult_5639.enumValue ()) {
  case GGS_implicitBooleanConversionResult::Enumeration::invalid:
    break ;
  case GGS_implicitBooleanConversionResult::Enumeration::enum_compileTime:
    {
      GGS_bool extractedValue_5731_boolValue_0 ;
      var_whileExpressionBooleanResult_5639.getAssociatedValuesFor_compileTime (extractedValue_5731_boolValue_0) ;
      GalgasBool test_9 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_9) {
        test_9 = extractedValue_5731_boolValue_0.operator_not (SOURCE_FILE ("instruction-for-in-do.galgas", 138)).boolEnum () ;
        if (GalgasBool::boolTrue == test_9) {
          const GGS_forInstructionAST temp_10 = this ;
          TC_Array <FixItDescription> fixItArray11 ;
          inCompiler->emitSemanticError (temp_10.readProperty_mEndOf_5F_whileExpression (), GGS_string ("test expression is always false"), fixItArray11  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 139)) ;
        }
      }
    }
    break ;
  case GGS_implicitBooleanConversionResult::Enumeration::enum_llvmVariable:
    break ;
  }
  GGS_instructionListIR temp_12 = GGS_instructionListIR::init (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 153)) ;
  GGS_instructionListIR var_doInstructionList_5F_GenerationList_6457 = temp_12 ;
  const GGS_forInstructionAST temp_13 = this ;
  const GGS_forInstructionAST temp_14 = this ;
  extensionMethod_analyzeBranchInstructionList (temp_13.readProperty_mDoInstructionList (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, temp_14.readProperty_mEndOf_5F_for_5F_instruction (), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_doInstructionList_5F_GenerationList_6457, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 154)) ;
  {
  const GGS_forInstructionAST temp_15 = this ;
  extensionSetter_closeOverride (ioArgument_ioUniversalMap, temp_15.readProperty_mEndOf_5F_for_5F_instruction (), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 166)) ;
  }
  switch (var_iteratedType_3970.readProperty_subscript ().enumValue ()) {
  case GGS_subscript::Enumeration::invalid:
    break ;
  case GGS_subscript::Enumeration::enum_noSubscript:
    break ;
  case GGS_subscript::Enumeration::enum_literalString:
    {
      const GGS_forInstructionAST temp_16 = this ;
      ioArgument_ioInstructionGenerationList.addAssign_operation (GGS_forInstructionOnLiteralStringIR::init_21__21__21__21__21__21__21_ (var_omnibusName_4423.readProperty_string (), temp_16.readProperty_mIteratedObject ().readProperty_location (), var_iteratedObjectPointer_3926, var_iteratedType_3970, var_whileExpression_5F_GenerationList_4910, var_whileExpressionResult_5340, var_doInstructionList_5F_GenerationList_6457, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 171)) ;
    }
    break ;
  case GGS_subscript::Enumeration::enum_staticSubscript:
    {
      GGS_omnibusType extractedValue_7407_elementType_0 ;
      GGS_bigint extractedValue_7419_size_1 ;
      var_iteratedType_3970.readProperty_subscript ().getAssociatedValuesFor_staticSubscript (extractedValue_7407_elementType_0, extractedValue_7419_size_1) ;
      GGS_stringset temp_17 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 182)) ;
      GGS_stringset var_invokedFunctionSet_7507 = temp_17 ;
      GalgasBool test_18 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_18) {
        const GGS_forInstructionAST temp_19 = this ;
        test_18 = ioArgument_ioTemporaries.readProperty_mStaticArrayMapForTemporaries ().getter_hasKey (temp_19.readProperty_mIteratedObject ().readProperty_string () COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 183)).boolEnum () ;
        if (GalgasBool::boolTrue == test_18) {
          const GGS_forInstructionAST temp_20 = this ;
          ioArgument_ioTemporaries.readProperty_mStaticArrayMapForTemporaries ().method_searchKey (temp_20.readProperty_mIteratedObject (), var_invokedFunctionSet_7507, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 184)) ;
        }
      }
      const GGS_forInstructionAST temp_21 = this ;
      ioArgument_ioInstructionGenerationList.addAssign_operation (GGS_forInstructionOnArrayIR::init_21__21__21__21__21__21__21__21__21_ (var_omnibusName_4423.readProperty_string (), temp_21.readProperty_mIteratedObject (), var_iteratedObjectPointer_3926, var_whileExpression_5F_GenerationList_4910, extensionGetter_llvmName (var_whileExpressionBooleanResult_5639, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 191)), var_doInstructionList_5F_GenerationList_6457, extractedValue_7407_elementType_0, extractedValue_7419_size_1.getter_uint (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 194)), var_invokedFunctionSet_7507, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 186)) ;
    }
    break ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@forInstructionOnArrayIR llvmInstructionCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_forInstructionOnArrayIR::method_llvmInstructionCode (GGS_string & ioArgument_ioLLVMcode,
                                                               const GGS_generationContext constinArgument_inGenerationContext,
                                                               GGS_generationAdds & ioArgument_ioGenerationAdds,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_forInstructionOnArrayIR temp_0 = this ;
  GGS_string var_elementTypeLLVMName_10206 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_0.readProperty_mElementType ().ptr (), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 253)) ;
  const GGS_forInstructionOnArrayIR temp_1 = this ;
  GGS_string var_listTypeLLVMName_10267 = GGS_string ("[").add_operation (temp_1.readProperty_mArraySize ().getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 254)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 254)).add_operation (GGS_string (" x "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 254)).add_operation (var_elementTypeLLVMName_10206, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 254)).add_operation (GGS_string ("]"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 254)) ;
  const GGS_forInstructionOnArrayIR temp_2 = this ;
  GGS_string var_locationIndex_10350 = temp_2.readProperty_mIteratedObjectName ().readProperty_location ().getter_endLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 255)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 255)) ;
  GGS_string var_startLabel_10437 = GGS_string ("for.label.start.").add_operation (var_locationIndex_10350, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 257)) ;
  GGS_string var_testLabel_10491 = GGS_string ("for.label.test.").add_operation (var_locationIndex_10350, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 258)) ;
  GGS_string var_whileLabel_10543 = GGS_string ("for.label.while.").add_operation (var_locationIndex_10350, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 259)) ;
  GGS_string var_nextLabel_10597 = GGS_string ("for.label.next.").add_operation (var_locationIndex_10350, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 260)) ;
  GGS_string var_loopVar_10649 = GGS_string ("for.loop.").add_operation (var_locationIndex_10350, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 261)) ;
  GGS_string var_loopLabel_10693 = GGS_string ("for.label.loop.").add_operation (var_locationIndex_10350, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 262)) ;
  GGS_string var_endLabel_10745 = GGS_string ("for.label.end.").add_operation (var_locationIndex_10350, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 263)) ;
  GGS_string var_indexVar_10798 = GGS_string ("for.index.").add_operation (var_locationIndex_10350, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 265)) ;
  GGS_string var_ptrVar_10845 = GGS_string ("for.ptr.").add_operation (var_locationIndex_10350, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 266)) ;
  GGS_string var_currentValue_10888 = GGS_string ("for.currentValue.").add_operation (var_locationIndex_10350, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 267)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  br label %").add_operation (var_startLabel_10437, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 270)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 270)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 270)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_startLabel_10437.add_operation (GGS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 273)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 273)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  %").add_operation (var_ptrVar_10845, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 275)).add_operation (GGS_string (".start = getelementptr inbounds "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 275)).add_operation (var_listTypeLLVMName_10267, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 275)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 275)) ;
  const GGS_forInstructionOnArrayIR temp_3 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string (", ").add_operation (var_listTypeLLVMName_10267, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 276)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 276)).add_operation (extensionGetter_llvmName (temp_3.readProperty_mIteratedObject (), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 276)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 276)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 276)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string (", i32 0, i32 0\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 277)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  br label %").add_operation (var_testLabel_10491, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 279)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 279)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 279)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_testLabel_10491.add_operation (GGS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 282)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 282)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  %").add_operation (var_ptrVar_10845, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 284)).add_operation (GGS_string (" = phi "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 284)).add_operation (var_elementTypeLLVMName_10206, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 284)).add_operation (GGS_string ("* [%"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 284)).add_operation (var_ptrVar_10845, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 284)).add_operation (GGS_string (".start, %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 284)).add_operation (var_startLabel_10437, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 284)).add_operation (GGS_string ("], [%"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 284)).add_operation (var_ptrVar_10845, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 285)).add_operation (GGS_string (".next, %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 285)).add_operation (var_nextLabel_10597, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 285)).add_operation (GGS_string ("]\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 285)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 284)) ;
  const GGS_forInstructionOnArrayIR temp_4 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  %").add_operation (var_indexVar_10798, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 287)).add_operation (GGS_string (" = phi i32 ["), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 287)).add_operation (temp_4.readProperty_mArraySize ().getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 287)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 287)).add_operation (GGS_string (", %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 287)).add_operation (var_startLabel_10437, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 287)).add_operation (GGS_string ("], [%"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 287)).add_operation (var_indexVar_10798, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 288)).add_operation (GGS_string (".next, %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 288)).add_operation (var_nextLabel_10597, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 288)).add_operation (GGS_string ("]\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 288)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 287)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  %").add_operation (var_loopVar_10649, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 289)).add_operation (GGS_string (" = icmp ugt i32 %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 289)).add_operation (var_indexVar_10798, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 289)).add_operation (GGS_string (", 0\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 289)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 289)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  br i1 %").add_operation (var_loopVar_10649, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 291)).add_operation (GGS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 291)).add_operation (var_whileLabel_10543, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 291)).add_operation (GGS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 291)).add_operation (var_endLabel_10745, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 291)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 291)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 291)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_whileLabel_10543.add_operation (GGS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 294)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 294)) ;
  const GGS_forInstructionOnArrayIR temp_5 = this ;
  extensionMethod_instructionListLLVMCode (temp_5.readProperty_mWhileInstructionList (), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 296)) ;
  const GGS_forInstructionOnArrayIR temp_6 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  br i1 ").add_operation (temp_6.readProperty_mWhileExpressionBooleanResult_5F_llvmName (), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 297)).add_operation (GGS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 297)).add_operation (var_loopLabel_10693, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 297)).add_operation (GGS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 297)).add_operation (var_endLabel_10745, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 297)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 297)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 297)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_loopLabel_10693.add_operation (GGS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 300)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 300)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  %").add_operation (var_currentValue_10888, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 302)).add_operation (GGS_string (" = load "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 302)).add_operation (var_elementTypeLLVMName_10206, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 302)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 302)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 302)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_elementTypeLLVMName_10206.add_operation (GGS_string ("* %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 303)).add_operation (var_ptrVar_10845, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 303)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 303)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 303)) ;
  const GGS_forInstructionOnArrayIR temp_7 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  store ").add_operation (var_elementTypeLLVMName_10206, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 304)).add_operation (GGS_string (" %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 304)).add_operation (var_currentValue_10888, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 304)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 304)).add_operation (var_elementTypeLLVMName_10206, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 304)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 304)).add_operation (function_llvmNameForLocalVariable (temp_7.readProperty_mEnumeratedValueName (), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 305)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 305)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 305)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 304)) ;
  const GGS_forInstructionOnArrayIR temp_8 = this ;
  extensionMethod_instructionListLLVMCode (temp_8.readProperty_mDoInstructionList (), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 307)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  br label %").add_operation (var_nextLabel_10597, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 308)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 308)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 308)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_nextLabel_10597.add_operation (GGS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 310)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 310)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  %").add_operation (var_ptrVar_10845, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 312)).add_operation (GGS_string (".next = getelementptr inbounds "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 312)).add_operation (var_elementTypeLLVMName_10206, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 312)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 312)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 312)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_elementTypeLLVMName_10206.add_operation (GGS_string (" * %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 313)).add_operation (var_ptrVar_10845, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 313)).add_operation (GGS_string (", i32 1\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 313)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 313)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  %").add_operation (var_indexVar_10798, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 315)).add_operation (GGS_string (".next = add i32 %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 315)).add_operation (var_indexVar_10798, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 315)).add_operation (GGS_string (", -1\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 315)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 315)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  br label %").add_operation (var_testLabel_10491, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 316)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 316)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 316)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_endLabel_10745.add_operation (GGS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 319)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 319)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@forInstructionOnArrayIR enterAccessibleEntities'
//
//--------------------------------------------------------------------------------------------------

void cPtr_forInstructionOnArrayIR::method_enterAccessibleEntities (GGS_stringset & ioArgument_ioInvokedRoutineSet,
                                                                   GGS_uint & ioArgument_ioMaxBranchOfOnInstructions,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_forInstructionOnArrayIR temp_0 = this ;
  extensionMethod_enterAccessibleEntities (temp_0.readProperty_mWhileInstructionList (), ioArgument_ioInvokedRoutineSet, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 328)) ;
  const GGS_forInstructionOnArrayIR temp_1 = this ;
  extensionMethod_enterAccessibleEntities (temp_1.readProperty_mDoInstructionList (), ioArgument_ioInvokedRoutineSet, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 329)) ;
  const GGS_forInstructionOnArrayIR temp_2 = this ;
  ioArgument_ioInvokedRoutineSet.plusAssign_operation(temp_2.readProperty_mInvokedFunctionSet (), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 330)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@forInstructionOnLiteralStringIR llvmInstructionCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_forInstructionOnLiteralStringIR::method_llvmInstructionCode (GGS_string & ioArgument_ioLLVMcode,
                                                                       const GGS_generationContext constinArgument_inGenerationContext,
                                                                       GGS_generationAdds & ioArgument_ioGenerationAdds,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_forInstructionOnLiteralStringIR temp_0 = this ;
  GGS_string var_startLabel_14695 = GGS_string ("for.label.start.").add_operation (temp_0.readProperty_mLocation ().getter_endLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 354)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 354)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 354)) ;
  const GGS_forInstructionOnLiteralStringIR temp_1 = this ;
  GGS_string var_testLabel_14769 = GGS_string ("for.label.test.").add_operation (temp_1.readProperty_mLocation ().getter_endLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 355)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 355)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 355)) ;
  const GGS_forInstructionOnLiteralStringIR temp_2 = this ;
  GGS_string var_loopLabel_14841 = GGS_string ("for.label.loop.").add_operation (temp_2.readProperty_mLocation ().getter_endLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 356)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 356)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 356)) ;
  const GGS_forInstructionOnLiteralStringIR temp_3 = this ;
  GGS_string var_whileLabel_14913 = GGS_string ("for.label.while.").add_operation (temp_3.readProperty_mLocation ().getter_endLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 357)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 357)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 357)) ;
  const GGS_forInstructionOnLiteralStringIR temp_4 = this ;
  GGS_string var_nextLabel_14987 = GGS_string ("for.label.next.").add_operation (temp_4.readProperty_mLocation ().getter_endLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 358)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 358)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 358)) ;
  const GGS_forInstructionOnLiteralStringIR temp_5 = this ;
  GGS_string var_endLabel_15059 = GGS_string ("for.label.end.").add_operation (temp_5.readProperty_mLocation ().getter_endLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 359)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 359)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 359)) ;
  const GGS_forInstructionOnLiteralStringIR temp_6 = this ;
  GGS_string var_ptrVar_15130 = GGS_string ("for.ptr.").add_operation (temp_6.readProperty_mLocation ().getter_endLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 360)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 360)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 360)) ;
  const GGS_forInstructionOnLiteralStringIR temp_7 = this ;
  GGS_string var_currentVar_15195 = GGS_string ("for.current.").add_operation (temp_7.readProperty_mLocation ().getter_endLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 361)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 361)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 361)) ;
  const GGS_forInstructionOnLiteralStringIR temp_8 = this ;
  GGS_string var_stringLLVMTypeName_15265 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_8.readProperty_mLiteralStringType ().ptr (), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 362)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  br label %").add_operation (var_startLabel_14695, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 364)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 364)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 364)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_startLabel_14695.add_operation (GGS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 366)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 366)) ;
  const GGS_forInstructionOnLiteralStringIR temp_9 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  %").add_operation (var_ptrVar_15130, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 367)).add_operation (GGS_string (".start = load "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 367)).add_operation (var_stringLLVMTypeName_15265, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 367)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 367)).add_operation (var_stringLLVMTypeName_15265, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 367)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 367)).add_operation (extensionGetter_llvmName (temp_9.readProperty_mStringElementIteratedObject (), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 367)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 367)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 367)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 367)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  br label %").add_operation (var_testLabel_14769, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 368)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 368)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 368)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_testLabel_14769.add_operation (GGS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 371)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 371)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  %").add_operation (var_ptrVar_15130, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 372)).add_operation (GGS_string (" = phi "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 372)).add_operation (var_stringLLVMTypeName_15265, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 372)).add_operation (GGS_string (" [%"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 372)).add_operation (var_ptrVar_15130, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 372)).add_operation (GGS_string (".start, %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 372)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 372)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_startLabel_14695.add_operation (GGS_string ("], [%"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 373)).add_operation (var_ptrVar_15130, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 373)).add_operation (GGS_string (".next, %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 373)).add_operation (var_nextLabel_14987, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 373)).add_operation (GGS_string ("]\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 373)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 373)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  %").add_operation (var_currentVar_15195, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 374)).add_operation (GGS_string (" = load i8, "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 374)).add_operation (var_stringLLVMTypeName_15265, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 374)).add_operation (GGS_string (" %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 374)).add_operation (var_ptrVar_15130, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 374)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 374)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 374)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  %").add_operation (var_currentVar_15195, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 375)).add_operation (GGS_string (".nul = icmp eq i8 %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 375)).add_operation (var_currentVar_15195, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 375)).add_operation (GGS_string (", 0\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 375)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 375)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  br i1 %").add_operation (var_currentVar_15195, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 376)).add_operation (GGS_string (".nul, label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 376)).add_operation (var_endLabel_15059, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 376)).add_operation (GGS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 376)).add_operation (var_whileLabel_14913, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 376)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 376)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 376)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_whileLabel_14913.add_operation (GGS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 379)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 379)) ;
  const GGS_forInstructionOnLiteralStringIR temp_10 = this ;
  extensionMethod_instructionListLLVMCode (temp_10.readProperty_mWhileInstructionList (), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 381)) ;
  const GGS_forInstructionOnLiteralStringIR temp_11 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  br i1 ").add_operation (extensionGetter_llvmName (temp_11.readProperty_mWhileExpressionResult (), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 382)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 382)).add_operation (GGS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 382)).add_operation (var_loopLabel_14841, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 382)).add_operation (GGS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 382)).add_operation (var_endLabel_15059, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 382)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 382)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 382)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_loopLabel_14841.add_operation (GGS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 385)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 385)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  store i8 %").add_operation (var_currentVar_15195, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 387)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 387)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 387)) ;
  const GGS_forInstructionOnLiteralStringIR temp_12 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("i8 * ").add_operation (function_llvmNameForLocalVariable (temp_12.readProperty_mVarName (), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 388)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 388)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 388)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 388)) ;
  const GGS_forInstructionOnLiteralStringIR temp_13 = this ;
  extensionMethod_instructionListLLVMCode (temp_13.readProperty_mDoInstructionList (), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 390)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  br label %").add_operation (var_nextLabel_14987, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 391)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 391)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 391)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_nextLabel_14987.add_operation (GGS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 393)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 393)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  %").add_operation (var_ptrVar_15130, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 394)).add_operation (GGS_string (".next = getelementptr inbounds i8, "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 394)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 394)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("i8 * %").add_operation (var_ptrVar_15130, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 395)).add_operation (GGS_string (", i32 1\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 395)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 395)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  br label %").add_operation (var_testLabel_14769, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 396)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 396)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 396)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_endLabel_15059.add_operation (GGS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 399)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 399)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@forInstructionOnLiteralStringIR enterAccessibleEntities'
//
//--------------------------------------------------------------------------------------------------

void cPtr_forInstructionOnLiteralStringIR::method_enterAccessibleEntities (GGS_stringset & ioArgument_ioInvokedRoutineSet,
                                                                           GGS_uint & ioArgument_ioMaxBranchOfOnInstructions,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_forInstructionOnLiteralStringIR temp_0 = this ;
  extensionMethod_enterAccessibleEntities (temp_0.readProperty_mWhileInstructionList (), ioArgument_ioInvokedRoutineSet, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 408)) ;
  const GGS_forInstructionOnLiteralStringIR temp_1 = this ;
  extensionMethod_enterAccessibleEntities (temp_1.readProperty_mDoInstructionList (), ioArgument_ioInvokedRoutineSet, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 409)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@forLowerUpperBoundInstructionAST noteInstructionTypesInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_forLowerUpperBoundInstructionAST::method_noteInstructionTypesInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_forLowerUpperBoundInstructionAST temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::notEqual, temp_1.readProperty_mTypeName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      {
      const GGS_forLowerUpperBoundInstructionAST temp_2 = this ;
      ioArgument_ioGraph.setter_noteNode (temp_2.readProperty_mTypeName () COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 67)) ;
      }
    }
  }
  const GGS_forLowerUpperBoundInstructionAST temp_3 = this ;
  extensionMethod_noteInstructionListTypesInPrecedenceGraph (temp_3.readProperty_mDoInstructionList (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 69)) ;
  const GGS_forLowerUpperBoundInstructionAST temp_4 = this ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((cPtr_expressionAST *) temp_4.readProperty_mLowerBoundExpression ().ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 70)) ;
  const GGS_forLowerUpperBoundInstructionAST temp_5 = this ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((cPtr_expressionAST *) temp_5.readProperty_mUpperBoundExpression ().ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 71)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@forLowerUpperBoundInstructionAST instructionSemanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_forLowerUpperBoundInstructionAST::method_instructionSemanticAnalysis (const GGS_omnibusType constinArgument_inSelfType,
                                                                                const GGS_routineAttributes constinArgument_inRoutineAttributes,
                                                                                const GGS_semanticContext constinArgument_inContext,
                                                                                const GGS_mode constinArgument_inMode,
                                                                                GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                                GGS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                                GGS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                                GGS_allocaList & ioArgument_ioAllocaList,
                                                                                GGS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_forLowerUpperBoundInstructionAST temp_0 = this ;
  GGS_omnibusType var_type_3980 = extensionGetter_type (extensionGetter_searchKey (constinArgument_inContext.readProperty_mTypeMap (), temp_0.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 90)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 90)) ;
  switch (var_type_3980.readProperty_kind ().enumValue ()) {
  case GGS_typeKind::Enumeration::invalid:
    break ;
  case GGS_typeKind::Enumeration::enum_boolean:
  case GGS_typeKind::Enumeration::enum_void:
    {
      const GGS_forLowerUpperBoundInstructionAST temp_1 = this ;
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mTypeName ().readProperty_location (), GGS_string ("an integer type is required here"), fixItArray2  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 93)) ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_staticArrayType:
    {
      GGS_omnibusType extractedValue_4169__0 ;
      GGS_bigint extractedValue_4171__1 ;
      var_type_3980.readProperty_kind ().getAssociatedValuesFor_staticArrayType (extractedValue_4169__0, extractedValue_4171__1) ;
      const GGS_forLowerUpperBoundInstructionAST temp_3 = this ;
      TC_Array <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mTypeName ().readProperty_location (), GGS_string ("an integer type is required here"), fixItArray4  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 95)) ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_dynamicArrayType:
    {
      GGS_omnibusType extractedValue_4263__0 ;
      var_type_3980.readProperty_kind ().getAssociatedValuesFor_dynamicArrayType (extractedValue_4263__0) ;
      const GGS_forLowerUpperBoundInstructionAST temp_5 = this ;
      TC_Array <FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mTypeName ().readProperty_location (), GGS_string ("an integer type is required here"), fixItArray6  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 97)) ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_enumeration:
    break ;
  case GGS_typeKind::Enumeration::enum_literalString:
    {
      const GGS_forLowerUpperBoundInstructionAST temp_7 = this ;
      TC_Array <FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (temp_7.readProperty_mTypeName ().readProperty_location (), GGS_string ("an integer type is required here"), fixItArray8  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 100)) ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_opaque:
    {
      GGS_bigint extractedValue_4455__0 ;
      var_type_3980.readProperty_kind ().getAssociatedValuesFor_opaque (extractedValue_4455__0) ;
      const GGS_forLowerUpperBoundInstructionAST temp_9 = this ;
      TC_Array <FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (temp_9.readProperty_mTypeName ().readProperty_location (), GGS_string ("an integer type is required here"), fixItArray10  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 102)) ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_compileTimeBool:
    {
      const GGS_forLowerUpperBoundInstructionAST temp_11 = this ;
      TC_Array <FixItDescription> fixItArray12 ;
      inCompiler->emitSemanticError (temp_11.readProperty_mTypeName ().readProperty_location (), GGS_string ("an integer type is required here"), fixItArray12  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 104)) ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_llvmType:
    {
      GGS_bigint extractedValue_4626__0 ;
      var_type_3980.readProperty_kind ().getAssociatedValuesFor_llvmType (extractedValue_4626__0) ;
      const GGS_forLowerUpperBoundInstructionAST temp_13 = this ;
      TC_Array <FixItDescription> fixItArray14 ;
      inCompiler->emitSemanticError (temp_13.readProperty_mTypeName ().readProperty_location (), GGS_string ("an integer type is required here"), fixItArray14  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 106)) ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_generic:
    {
      GGS_genericFormalParameterList extractedValue_4710__0 ;
      GGS_ctExpressionAST extractedValue_4710__1 ;
      GGS_llvmStringDefinition extractedValue_4710__2 ;
      var_type_3980.readProperty_kind ().getAssociatedValuesFor_generic (extractedValue_4710__0, extractedValue_4710__1, extractedValue_4710__2) ;
      const GGS_forLowerUpperBoundInstructionAST temp_15 = this ;
      TC_Array <FixItDescription> fixItArray16 ;
      inCompiler->emitSemanticError (temp_15.readProperty_mTypeName ().readProperty_location (), GGS_string ("an integer type is required here"), fixItArray16  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 108)) ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_compileTimeInteger:
    {
      const GGS_forLowerUpperBoundInstructionAST temp_17 = this ;
      TC_Array <FixItDescription> fixItArray18 ;
      inCompiler->emitSemanticError (temp_17.readProperty_mTypeName ().readProperty_location (), GGS_string ("an integer type is required here"), fixItArray18  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 110)) ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_structure:
    {
      GGS_propertyList extractedValue_4885__0 ;
      var_type_3980.readProperty_kind ().getAssociatedValuesFor_structure (extractedValue_4885__0) ;
      const GGS_forLowerUpperBoundInstructionAST temp_19 = this ;
      TC_Array <FixItDescription> fixItArray20 ;
      inCompiler->emitSemanticError (temp_19.readProperty_mTypeName ().readProperty_location (), GGS_string ("an integer type is required here"), fixItArray20  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 112)) ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_syncTool:
    {
      const GGS_forLowerUpperBoundInstructionAST temp_21 = this ;
      TC_Array <FixItDescription> fixItArray22 ;
      inCompiler->emitSemanticError (temp_21.readProperty_mTypeName ().readProperty_location (), GGS_string ("an integer type is required here"), fixItArray22  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 114)) ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_function:
    {
      GGS_mode extractedValue_5050__0 ;
      GGS_routineTypedSignature extractedValue_5050__1 ;
      GGS_unifiedTypeMapEntry extractedValue_5050__2 ;
      var_type_3980.readProperty_kind ().getAssociatedValuesFor_function (extractedValue_5050__0, extractedValue_5050__1, extractedValue_5050__2) ;
      const GGS_forLowerUpperBoundInstructionAST temp_23 = this ;
      TC_Array <FixItDescription> fixItArray24 ;
      inCompiler->emitSemanticError (temp_23.readProperty_mTypeName ().readProperty_location (), GGS_string ("an integer type is required here"), fixItArray24  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 116)) ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_integer:
    {
      GGS_bigint extractedValue_5148_min_0 ;
      GGS_bigint extractedValue_5167_max_1 ;
      GGS_bool extractedValue_5177_unsigned_2 ;
      GGS_uint extractedValue_5199_bitCount_3 ;
      var_type_3980.readProperty_kind ().getAssociatedValuesFor_integer (extractedValue_5148_min_0, extractedValue_5167_max_1, extractedValue_5177_unsigned_2, extractedValue_5199_bitCount_3) ;
      GGS_objectIR var_lowerBoundExpressionResult_5646 ;
      const GGS_forLowerUpperBoundInstructionAST temp_25 = this ;
      callExtensionMethod_analyzeExpression ((cPtr_expressionAST *) temp_25.readProperty_mLowerBoundExpression ().ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, var_type_3980, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_lowerBoundExpressionResult_5646, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 119)) ;
      {
      extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_lowerBoundExpressionResult_5646, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 132)) ;
      }
      GGS_objectIR var_upperBoundExpressionResult_6211 ;
      const GGS_forLowerUpperBoundInstructionAST temp_26 = this ;
      callExtensionMethod_analyzeExpression ((cPtr_expressionAST *) temp_26.readProperty_mUpperBoundExpression ().ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, var_type_3980, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_upperBoundExpressionResult_6211, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 136)) ;
      {
      extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_upperBoundExpressionResult_6211, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 149)) ;
      }
      const GGS_forLowerUpperBoundInstructionAST temp_27 = this ;
      GGS_objectIR var_lowerBound_6406 = function_checkAssignmentCompatibility (constinArgument_inContext.readProperty_mAssignmentOperatorMap (), var_lowerBoundExpressionResult_5646, var_type_3980, temp_27.readProperty_mEndOf_5F_lowerBoundExpression_5F_instruction (), GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 154)) ;
      const GGS_forLowerUpperBoundInstructionAST temp_28 = this ;
      GGS_objectIR var_upperBound_6675 = function_checkAssignmentCompatibility (constinArgument_inContext.readProperty_mAssignmentOperatorMap (), var_upperBoundExpressionResult_6211, var_type_3980, temp_28.readProperty_mEndOf_5F_upperBoundExpression_5F_instruction (), GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 161)) ;
      {
      extensionSetter_openOverrideForRepeatBlock (ioArgument_ioUniversalMap, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 169)) ;
      }
      const GGS_forLowerUpperBoundInstructionAST temp_29 = this ;
      const GGS_forLowerUpperBoundInstructionAST temp_30 = this ;
      GGS_lstring var_enumeratedVarName_7038 = GGS_lstring::init_21__21_ (temp_29.readProperty_mVarName ().readProperty_string ().add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 171)).add_operation (ioArgument_ioTemporaries.readProperty_mTemporaryIndex ().getter_string (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 171)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 171)), temp_30.readProperty_mVarName ().readProperty_location (), inCompiler COMMA_HERE) ;
      ioArgument_ioTemporaries.mProperty_mTemporaryIndex.plusAssign_operation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 172)) ;
      ioArgument_ioAllocaList.addAssign_operation (function_llvmNameForLocalVariable (var_enumeratedVarName_7038.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 173)), var_type_3980, GGS_bool (false)  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 173)) ;
      GalgasBool test_31 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_31) {
        const GGS_forLowerUpperBoundInstructionAST temp_32 = this ;
        test_31 = GGS_bool (ComparisonKind::notEqual, temp_32.readProperty_mVarName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_31) {
          {
          const GGS_forLowerUpperBoundInstructionAST temp_33 = this ;
          extensionSetter_insertLocalConstant (ioArgument_ioUniversalMap, temp_33.readProperty_mVarName (), GGS_bool (false), var_type_3980, var_enumeratedVarName_7038, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 175)) ;
          }
        }
      }
      GGS_instructionListIR temp_34 = GGS_instructionListIR::init (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 178)) ;
      GGS_instructionListIR var_instructionGenerationList_7460 = temp_34 ;
      const GGS_forLowerUpperBoundInstructionAST temp_35 = this ;
      const GGS_forLowerUpperBoundInstructionAST temp_36 = this ;
      extensionMethod_analyzeBranchInstructionList (temp_35.readProperty_mDoInstructionList (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, temp_36.readProperty_mEndOf_5F_do_5F_instruction (), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_instructionGenerationList_7460, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 179)) ;
      {
      const GGS_forLowerUpperBoundInstructionAST temp_37 = this ;
      extensionSetter_closeOverride (ioArgument_ioUniversalMap, temp_37.readProperty_mEndOf_5F_do_5F_instruction (), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 191)) ;
      }
      const GGS_forLowerUpperBoundInstructionAST temp_38 = this ;
      ioArgument_ioInstructionGenerationList.addAssign_operation (GGS_forLowerUpperBoundInstructionIR::init_21__21__21__21__21__21__21_ (var_enumeratedVarName_7038.readProperty_string (), var_type_3980, extractedValue_5177_unsigned_2, temp_38.readProperty_mEndOf_5F_do_5F_instruction (), var_lowerBound_6406, var_upperBound_6675, var_instructionGenerationList_7460, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 193)) ;
    }
    break ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@forLowerUpperBoundInstructionIR llvmInstructionCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_forLowerUpperBoundInstructionIR::method_llvmInstructionCode (GGS_string & ioArgument_ioLLVMcode,
                                                                       const GGS_generationContext constinArgument_inGenerationContext,
                                                                       GGS_generationAdds & ioArgument_ioGenerationAdds,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_forLowerUpperBoundInstructionIR temp_0 = this ;
  GGS_string var_llvmType_9303 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_0.readProperty_mType ().ptr (), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 229)) ;
  const GGS_forLowerUpperBoundInstructionIR temp_1 = this ;
  GGS_string var_llvmVarName_9346 = function_llvmNameForLocalVariable (temp_1.readProperty_mVarName (), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 230)) ;
  const GGS_forLowerUpperBoundInstructionIR temp_2 = this ;
  GGS_string var_testLabel_9408 = GGS_string ("for.").add_operation (temp_2.readProperty_mLocation ().getter_endLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 231)).getter_string (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 231)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 231)).add_operation (GGS_string (".test"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 231)) ;
  const GGS_forLowerUpperBoundInstructionIR temp_3 = this ;
  GGS_string var_loopLabel_9479 = GGS_string ("for.").add_operation (temp_3.readProperty_mLocation ().getter_endLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 232)).getter_string (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 232)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 232)).add_operation (GGS_string (".loop"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 232)) ;
  const GGS_forLowerUpperBoundInstructionIR temp_4 = this ;
  GGS_string var_endLabel_9550 = GGS_string ("for.").add_operation (temp_4.readProperty_mLocation ().getter_endLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 233)).getter_string (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 233)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 233)).add_operation (GGS_string (".end"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 233)) ;
  const GGS_forLowerUpperBoundInstructionIR temp_5 = this ;
  GGS_string var_testResult_9620 = GGS_string ("%for.").add_operation (temp_5.readProperty_mLocation ().getter_endLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 234)).getter_string (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 234)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 234)).add_operation (GGS_string (".test.result"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 234)) ;
  const GGS_forLowerUpperBoundInstructionIR temp_6 = this ;
  GGS_string var_loadedVarName_9700 = GGS_string::makeEmptyString ().add_operation (function_llvmNameForLocalVariable (temp_6.readProperty_mVarName ().add_operation (GGS_string (".loaded"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 235)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 235)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 235)) ;
  const GGS_forLowerUpperBoundInstructionIR temp_7 = this ;
  GGS_string var_currentVarName_9781 = GGS_string::makeEmptyString ().add_operation (function_llvmNameForLocalVariable (temp_7.readProperty_mVarName ().add_operation (GGS_string (".current"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 236)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 236)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 236)) ;
  const GGS_forLowerUpperBoundInstructionIR temp_8 = this ;
  GGS_string var_nextVarName_9864 = GGS_string::makeEmptyString ().add_operation (function_llvmNameForLocalVariable (temp_8.readProperty_mVarName ().add_operation (GGS_string (".next"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 237)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 237)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 237)) ;
  const GGS_forLowerUpperBoundInstructionIR temp_9 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  store ").add_operation (var_llvmType_9303, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 239)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 239)).add_operation (extensionGetter_llvmName (temp_9.readProperty_mLowerExpressionResult (), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 239)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 239)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 239)).add_operation (var_llvmType_9303, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 239)).add_operation (GGS_string (" * "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 239)).add_operation (var_llvmVarName_9346, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 239)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 239)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 239)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  br label %").add_operation (var_testLabel_9408, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 240)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 240)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 240)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_testLabel_9408.add_operation (GGS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 242)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 242)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  ").add_operation (var_loadedVarName_9700, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 243)).add_operation (GGS_string (" = load "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 243)).add_operation (var_llvmType_9303, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 243)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 243)).add_operation (var_llvmType_9303, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 243)).add_operation (GGS_string (" * "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 243)).add_operation (var_llvmVarName_9346, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 243)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 243)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 243)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  ").add_operation (var_testResult_9620, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 244)).add_operation (GGS_string (" = icmp "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 244)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 244)) ;
  const GGS_forLowerUpperBoundInstructionIR temp_10 = this ;
  GGS_string temp_11 ;
  const GalgasBool test_12 = temp_10.readProperty_mUnsigned ().boolEnum () ;
  if (GalgasBool::boolTrue == test_12) {
    temp_11 = GGS_string ("ult") ;
  }else if (GalgasBool::boolFalse == test_12) {
    temp_11 = GGS_string ("slt") ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(temp_11, inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 245)) ;
  const GGS_forLowerUpperBoundInstructionIR temp_13 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string (" ").add_operation (var_llvmType_9303, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 246)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 246)).add_operation (var_loadedVarName_9700, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 246)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 246)).add_operation (extensionGetter_llvmName (temp_13.readProperty_mUpperExpressionResult (), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 246)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 246)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 246)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 246)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  br i1 ").add_operation (var_testResult_9620, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 247)).add_operation (GGS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 247)).add_operation (var_loopLabel_9479, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 247)).add_operation (GGS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 247)).add_operation (var_endLabel_9550, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 247)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 247)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 247)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_loopLabel_9479.add_operation (GGS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 249)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 249)) ;
  const GGS_forLowerUpperBoundInstructionIR temp_14 = this ;
  extensionMethod_instructionListLLVMCode (temp_14.readProperty_mInstructionList (), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 250)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  ").add_operation (var_currentVarName_9781, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 251)).add_operation (GGS_string (" = load "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 251)).add_operation (var_llvmType_9303, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 251)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 251)).add_operation (var_llvmType_9303, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 251)).add_operation (GGS_string (" * "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 251)).add_operation (var_llvmVarName_9346, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 251)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 251)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 251)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  ").add_operation (var_nextVarName_9864, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 252)).add_operation (GGS_string (" = add "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 252)).add_operation (var_llvmType_9303, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 252)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 252)).add_operation (var_currentVarName_9781, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 252)).add_operation (GGS_string (", 1\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 252)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 252)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  store ").add_operation (var_llvmType_9303, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 253)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 253)).add_operation (var_nextVarName_9864, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 253)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 253)).add_operation (var_llvmType_9303, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 253)).add_operation (GGS_string (" * "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 253)).add_operation (var_llvmVarName_9346, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 253)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 253)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 253)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  br label %").add_operation (var_testLabel_9408, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 254)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 254)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 254)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_endLabel_9550.add_operation (GGS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 256)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 256)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@forLowerUpperBoundInstructionIR enterAccessibleEntities'
//
//--------------------------------------------------------------------------------------------------

void cPtr_forLowerUpperBoundInstructionIR::method_enterAccessibleEntities (GGS_stringset & ioArgument_ioInvokedRoutineSet,
                                                                           GGS_uint & ioArgument_ioMaxBranchOfOnInstructions,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_forLowerUpperBoundInstructionIR temp_0 = this ;
  extensionMethod_enterAccessibleEntities (temp_0.readProperty_mInstructionList (), ioArgument_ioInvokedRoutineSet, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 265)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@procedureCallInstructionAST noteInstructionTypesInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_procedureCallInstructionAST::method_noteInstructionTypesInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_procedureCallInstructionAST temp_0 = this ;
  UpEnumerator_accessInAssignmentListAST enumerator_3962 (temp_0.readProperty_mAccessList ()) ;
  while (enumerator_3962.hasCurrentObject ()) {
    switch (enumerator_3962.current_mAccess (HERE).enumValue ()) {
    case GGS_accessInAssignmentAST::Enumeration::invalid:
      break ;
    case GGS_accessInAssignmentAST::Enumeration::enum_property:
      break ;
    case GGS_accessInAssignmentAST::Enumeration::enum_arrayAccess:
      {
        GGS_expressionAST extractedValue_4072_indexExpression_0 ;
        GGS_location extractedValue_4089__1 ;
        GGS_bool extractedValue_4089__2 ;
        enumerator_3962.current_mAccess (HERE).getAssociatedValuesFor_arrayAccess (extractedValue_4072_indexExpression_0, extractedValue_4089__1, extractedValue_4089__2) ;
        callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((cPtr_expressionAST *) extractedValue_4072_indexExpression_0.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 92)) ;
      }
      break ;
    }
    enumerator_3962.gotoNextObject () ;
  }
  const GGS_procedureCallInstructionAST temp_1 = this ;
  UpEnumerator_effectiveArgumentListAST enumerator_4210 (temp_1.readProperty_mArguments ()) ;
  while (enumerator_4210.hasCurrentObject ()) {
    switch (enumerator_4210.current_mEffectiveParameterKind (HERE).enumValue ()) {
    case GGS_effectiveArgumentPassingModeAST::Enumeration::invalid:
      break ;
    case GGS_effectiveArgumentPassingModeAST::Enumeration::enum_input:
      break ;
    case GGS_effectiveArgumentPassingModeAST::Enumeration::enum_inputWithType:
      {
        GGS_bool extractedValue_4314__0 ;
        GGS_lstring extractedValue_4325_typeName_1 ;
        GGS_lstring extractedValue_4334__2 ;
        enumerator_4210.current_mEffectiveParameterKind (HERE).getAssociatedValuesFor_inputWithType (extractedValue_4314__0, extractedValue_4325_typeName_1, extractedValue_4334__2) ;
        GalgasBool test_2 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_2) {
          test_2 = GGS_bool (ComparisonKind::notEqual, extractedValue_4325_typeName_1.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_2) {
            {
            ioArgument_ioGraph.setter_noteNode (extractedValue_4325_typeName_1 COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 100)) ;
            }
          }
        }
      }
      break ;
    case GGS_effectiveArgumentPassingModeAST::Enumeration::enum_output:
      {
        GGS_expressionAST extractedValue_4441_expression_0 ;
        GGS_location extractedValue_4452__1 ;
        enumerator_4210.current_mEffectiveParameterKind (HERE).getAssociatedValuesFor_output (extractedValue_4441_expression_0, extractedValue_4452__1) ;
        callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((cPtr_expressionAST *) extractedValue_4441_expression_0.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 102)) ;
      }
      break ;
    case GGS_effectiveArgumentPassingModeAST::Enumeration::enum_outputInput:
      break ;
    case GGS_effectiveArgumentPassingModeAST::Enumeration::enum_outputInputSelfVariable:
      break ;
    }
    enumerator_4210.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@standAloneProcedureCallInstructionAST noteInstructionTypesInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_standAloneProcedureCallInstructionAST::method_noteInstructionTypesInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_standAloneProcedureCallInstructionAST temp_0 = this ;
  UpEnumerator_effectiveArgumentListAST enumerator_4890 (temp_0.readProperty_mArguments ()) ;
  while (enumerator_4890.hasCurrentObject ()) {
    switch (enumerator_4890.current_mEffectiveParameterKind (HERE).enumValue ()) {
    case GGS_effectiveArgumentPassingModeAST::Enumeration::invalid:
      break ;
    case GGS_effectiveArgumentPassingModeAST::Enumeration::enum_input:
      break ;
    case GGS_effectiveArgumentPassingModeAST::Enumeration::enum_inputWithType:
      {
        GGS_bool extractedValue_4994__0 ;
        GGS_lstring extractedValue_5005_typeName_1 ;
        GGS_lstring extractedValue_5014__2 ;
        enumerator_4890.current_mEffectiveParameterKind (HERE).getAssociatedValuesFor_inputWithType (extractedValue_4994__0, extractedValue_5005_typeName_1, extractedValue_5014__2) ;
        GalgasBool test_1 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_1) {
          test_1 = GGS_bool (ComparisonKind::notEqual, extractedValue_5005_typeName_1.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_1) {
            {
            ioArgument_ioGraph.setter_noteNode (extractedValue_5005_typeName_1 COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 119)) ;
            }
          }
        }
      }
      break ;
    case GGS_effectiveArgumentPassingModeAST::Enumeration::enum_output:
      {
        GGS_expressionAST extractedValue_5121_expression_0 ;
        GGS_location extractedValue_5132__1 ;
        enumerator_4890.current_mEffectiveParameterKind (HERE).getAssociatedValuesFor_output (extractedValue_5121_expression_0, extractedValue_5132__1) ;
        callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((cPtr_expressionAST *) extractedValue_5121_expression_0.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 121)) ;
      }
      break ;
    case GGS_effectiveArgumentPassingModeAST::Enumeration::enum_outputInput:
      break ;
    case GGS_effectiveArgumentPassingModeAST::Enumeration::enum_outputInputSelfVariable:
      break ;
    }
    enumerator_4890.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@standAloneProcedureCallInstructionAST instructionSemanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_standAloneProcedureCallInstructionAST::method_instructionSemanticAnalysis (const GGS_omnibusType constinArgument_inSelfType,
                                                                                     const GGS_routineAttributes constinArgument_inRoutineAttributes,
                                                                                     const GGS_semanticContext constinArgument_inContext,
                                                                                     const GGS_mode constinArgument_inMode,
                                                                                     GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                                     GGS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                                     GGS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                                     GGS_allocaList & ioArgument_ioAllocaList,
                                                                                     GGS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_standAloneProcedureCallInstructionAST temp_0 = this ;
  const GGS_standAloneProcedureCallInstructionAST temp_1 = this ;
  GGS_lstring var_calledRoutineSignature_7003 = extensionGetter_routineSignature (temp_0.readProperty_mArguments (), temp_1.readProperty_mSandAloneRoutineName ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 167)) ;
  const GGS_standAloneProcedureCallInstructionAST temp_2 = this ;
  GGS_string var_requiredFunctionMangledName_7133 = temp_2.readProperty_mSandAloneRoutineName ().readProperty_string ().add_operation (var_calledRoutineSignature_7003.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 169)) ;
  GGS_bool var_implementedPublic_7389 ;
  GGS_routineTypedSignature var_formalSignature_7416 ;
  GGS_unifiedTypeMapEntry var_formalReturnTypeProxy_7441 ;
  GGS_routineLLVMNameDict var_implementedModeDictionary_7500 ;
  GGS_bool var_implementedIsExported_7542 ;
  GGS_mode var_implementedMode_7580 ;
  const GGS_standAloneProcedureCallInstructionAST temp_3 = this ;
  constinArgument_inContext.readProperty_mRoutineMap ().method_searchKey (GGS_lstring::init_21__21_ (var_requiredFunctionMangledName_7133, temp_3.readProperty_mSandAloneRoutineName ().readProperty_location (), inCompiler COMMA_HERE), var_implementedPublic_7389, var_formalSignature_7416, var_formalReturnTypeProxy_7441, var_implementedModeDictionary_7500, var_implementedIsExported_7542, var_implementedMode_7580, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 171)) ;
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    test_4 = var_formalReturnTypeProxy_7441.getter_isNull (SOURCE_FILE ("instruction-procedure-call.galgas", 181)).operator_not (SOURCE_FILE ("instruction-procedure-call.galgas", 181)).boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      const GGS_standAloneProcedureCallInstructionAST temp_5 = this ;
      TC_Array <FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mSandAloneRoutineName ().readProperty_location (), GGS_string ("this function returns a value, cannot be used as a procedure"), fixItArray6  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 182)) ;
    }
  }
  const GGS_standAloneProcedureCallInstructionAST temp_7 = this ;
  GGS_string var_functionLLVMName_7815 = function_checkModeAndReturnsRoutineLLVMName (var_implementedModeDictionary_7500, constinArgument_inMode, temp_7.readProperty_mSandAloneRoutineName (), inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 185)) ;
  GGS_procCallEffectiveParameterListIR temp_8 = GGS_procCallEffectiveParameterListIR::init (inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 187)) ;
  GGS_procCallEffectiveParameterListIR var_effectiveParameterListIR_8008 = temp_8 ;
  {
  const GGS_standAloneProcedureCallInstructionAST temp_9 = this ;
  const GGS_standAloneProcedureCallInstructionAST temp_10 = this ;
  routine_analyzeEffectiveParameters_3F_self_3F_routineAttributes_3F_formal_3F_effective_3F_errorLocation_3F_context_3F_requiredMode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_26_effectiveIR (constinArgument_inSelfType, constinArgument_inRoutineAttributes, var_formalSignature_7416, temp_9.readProperty_mArguments (), temp_10.readProperty_mSandAloneRoutineName ().readProperty_location (), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_effectiveParameterListIR_8008, inCompiler  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 188)) ;
  }
  const GGS_standAloneProcedureCallInstructionAST temp_11 = this ;
  const GGS_standAloneProcedureCallInstructionAST temp_12 = this ;
  GGS_lstring var_routineMangledName_8570 = function_routineMangledNameFromCall (GGS_string::makeEmptyString (), temp_11.readProperty_mSandAloneRoutineName (), temp_12.readProperty_mArguments (), inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 205)) ;
  ioArgument_ioInstructionGenerationList.addAssign_operation (GGS_standaloneRoutineCallIR::init_21__21__21__21_ (GGS_objectIR::class_func_void (SOURCE_FILE ("instruction-procedure-call.galgas", 212)), var_routineMangledName_8570, var_functionLLVMName_7815, var_effectiveParameterListIR_8008, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 211)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@procedureCallInstructionAST instructionSemanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_procedureCallInstructionAST::method_instructionSemanticAnalysis (const GGS_omnibusType constinArgument_inSelfType,
                                                                           const GGS_routineAttributes constinArgument_inRoutineAttributes,
                                                                           const GGS_semanticContext constinArgument_inContext,
                                                                           const GGS_mode constinArgument_inMode,
                                                                           GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                           GGS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                           GGS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                           GGS_allocaList & ioArgument_ioAllocaList,
                                                                           GGS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bool var_receiverIsSelf_9673 = GGS_bool (false) ;
  GGS_omnibusType var_currentType_9715 ;
  GGS_string var_currentLLVMAddressVar_9741 ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_procedureCallInstructionAST temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::equal, temp_1.readProperty_mIdentifier ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      var_receiverIsSelf_9673 = GGS_bool (true) ;
      GalgasBool test_2 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_2) {
        test_2 = GGS_bool (ComparisonKind::equal, constinArgument_inSelfType.readProperty_kind ().objectCompare (GGS_typeKind::class_func_void (SOURCE_FILE ("instruction-procedure-call.galgas", 239)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_2) {
          const GGS_procedureCallInstructionAST temp_3 = this ;
          TC_Array <FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (temp_3.readProperty_mIdentifier ().readProperty_location (), GGS_string ("self is not available in this context"), fixItArray4  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 240)) ;
          var_currentType_9715.drop () ; // Release error dropped variable
          var_currentLLVMAddressVar_9741.drop () ; // Release error dropped variable
        }
      }
      if (GalgasBool::boolFalse == test_2) {
        var_currentType_9715 = constinArgument_inSelfType ;
        var_currentLLVMAddressVar_9741 = function_llvmNameForSelf (inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 243)) ;
      }
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GGS_valuedObject var_entity_10167 ;
    const GGS_procedureCallInstructionAST temp_5 = this ;
    extensionMethod_searchEntity (ioArgument_ioUniversalMap, temp_5.readProperty_mIdentifier (), var_entity_10167, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 246)) ;
    switch (var_entity_10167.enumValue ()) {
    case GGS_valuedObject::Enumeration::invalid:
      break ;
    case GGS_valuedObject::Enumeration::enum_task:
      {
        GGS_omnibusType extractedValue_10221_type_0 ;
        var_entity_10167.getAssociatedValuesFor_task (extractedValue_10221_type_0) ;
        var_currentType_9715 = extractedValue_10221_type_0 ;
        const GGS_procedureCallInstructionAST temp_6 = this ;
        var_currentLLVMAddressVar_9741 = function_llvmNameForGlobalVariable (temp_6.readProperty_mIdentifier ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 250)) ;
      }
      break ;
    case GGS_valuedObject::Enumeration::enum_driver:
      {
        GGS_omnibusType extractedValue_10360_type_0 ;
        GGS_bool extractedValue_10365_instancied_1 ;
        var_entity_10167.getAssociatedValuesFor_driver (extractedValue_10360_type_0, extractedValue_10365_instancied_1) ;
        GalgasBool test_7 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_7) {
          test_7 = extractedValue_10365_instancied_1.boolEnum () ;
          if (GalgasBool::boolTrue == test_7) {
            var_currentType_9715 = extractedValue_10360_type_0 ;
            const GGS_procedureCallInstructionAST temp_8 = this ;
            var_currentLLVMAddressVar_9741 = function_llvmNameForGlobalVariable (temp_8.readProperty_mIdentifier ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 254)) ;
          }
        }
        if (GalgasBool::boolFalse == test_7) {
          const GGS_procedureCallInstructionAST temp_9 = this ;
          TC_Array <FixItDescription> fixItArray10 ;
          inCompiler->emitSemanticError (temp_9.readProperty_mIdentifier ().readProperty_location (), GGS_string ("the driver should be instancied"), fixItArray10  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 256)) ;
          var_currentType_9715.drop () ; // Release error dropped variable
          var_currentLLVMAddressVar_9741.drop () ; // Release error dropped variable
        }
      }
      break ;
    case GGS_valuedObject::Enumeration::enum_globalConstant:
      {
        GGS_objectIR extractedValue_10659__0 ;
        var_entity_10167.getAssociatedValuesFor_globalConstant (extractedValue_10659__0) ;
        const GGS_procedureCallInstructionAST temp_11 = this ;
        TC_Array <FixItDescription> fixItArray12 ;
        inCompiler->emitSemanticError (temp_11.readProperty_mIdentifier ().readProperty_location (), GGS_string ("a global constant cannot be used in this context"), fixItArray12  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 259)) ;
        var_currentType_9715.drop () ; // Release error dropped variable
        var_currentLLVMAddressVar_9741.drop () ; // Release error dropped variable
      }
      break ;
    case GGS_valuedObject::Enumeration::enum_localConstant:
      {
        GGS_omnibusType extractedValue_10836_type_0 ;
        GGS_lstring extractedValue_10850_omnibusName_1 ;
        GGS_bool extractedValue_10862__2 ;
        var_entity_10167.getAssociatedValuesFor_localConstant (extractedValue_10836_type_0, extractedValue_10850_omnibusName_1, extractedValue_10862__2) ;
        var_currentType_9715 = extractedValue_10836_type_0 ;
        var_currentLLVMAddressVar_9741 = function_llvmNameForLocalVariable (extractedValue_10850_omnibusName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 264)) ;
      }
      break ;
    case GGS_valuedObject::Enumeration::enum_localVariable:
      {
        GGS_omnibusType extractedValue_10999_type_0 ;
        GGS_lstring extractedValue_11013_omnibusName_1 ;
        var_entity_10167.getAssociatedValuesFor_localVariable (extractedValue_10999_type_0, extractedValue_11013_omnibusName_1) ;
        var_currentType_9715 = extractedValue_10999_type_0 ;
        var_currentLLVMAddressVar_9741 = function_llvmNameForLocalVariable (extractedValue_11013_omnibusName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 267)) ;
      }
      break ;
    case GGS_valuedObject::Enumeration::enum_globalSyncInstance:
      {
        GGS_omnibusType extractedValue_11165_type_0 ;
        GGS_lstring extractedValue_11179_omnibusName_1 ;
        var_entity_10167.getAssociatedValuesFor_globalSyncInstance (extractedValue_11165_type_0, extractedValue_11179_omnibusName_1) ;
        var_currentType_9715 = extractedValue_11165_type_0 ;
        var_currentLLVMAddressVar_9741 = function_llvmNameForGlobalSyncInstance (extractedValue_11179_omnibusName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 270)) ;
      }
      break ;
    }
  }
  GGS_propertyGetterMap var_currentObjectPropertyMap_11351 = extensionGetter_propertyGetterMap (constinArgument_inContext, var_currentType_9715, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 274)) ;
  const GGS_procedureCallInstructionAST temp_13 = this ;
  GGS_accessInAssignmentListAST var_accessList_11499 = temp_13.readProperty_mAccessList () ;
  GGS_accessInAssignmentAST var_lastAccess_11558 ;
  {
  var_accessList_11499.setter_popLast (var_lastAccess_11558, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 277)) ;
  }
  UpEnumerator_accessInAssignmentListAST enumerator_11602 (var_accessList_11499) ;
  while (enumerator_11602.hasCurrentObject ()) {
    switch (enumerator_11602.current_mAccess (HERE).enumValue ()) {
    case GGS_accessInAssignmentAST::Enumeration::invalid:
      break ;
    case GGS_accessInAssignmentAST::Enumeration::enum_property:
      {
        GGS_lstring extractedValue_11673_propertyName_0 ;
        enumerator_11602.current_mAccess (HERE).getAssociatedValuesFor_property (extractedValue_11673_propertyName_0) ;
        GGS_propertyVisibility var_visibility_11766 ;
        GGS_propertyGetterKind var_propertyAccess_11810 ;
        var_currentObjectPropertyMap_11351.method_searchKey (extractedValue_11673_propertyName_0, var_visibility_11766, var_propertyAccess_11810, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 282)) ;
        switch (var_visibility_11766.enumValue ()) {
        case GGS_propertyVisibility::Enumeration::invalid:
          break ;
        case GGS_propertyVisibility::Enumeration::enum_isPublic:
          break ;
        case GGS_propertyVisibility::Enumeration::enum_isPrivate:
          {
            GalgasBool test_14 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_14) {
              test_14 = var_receiverIsSelf_9673.operator_not (SOURCE_FILE ("instruction-procedure-call.galgas", 290)).boolEnum () ;
              if (GalgasBool::boolTrue == test_14) {
                TC_Array <FixItDescription> fixItArray15 ;
                inCompiler->emitSemanticError (extractedValue_11673_propertyName_0.readProperty_location (), GGS_string ("inaccessible property, is private"), fixItArray15  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 291)) ;
              }
            }
          }
          break ;
        }
        var_receiverIsSelf_9673 = GGS_bool (false) ;
        switch (var_propertyAccess_11810.enumValue ()) {
        case GGS_propertyGetterKind::Enumeration::invalid:
          break ;
        case GGS_propertyGetterKind::Enumeration::enum_constantProperty:
          {
            GGS_objectIR extractedValue_12112__0 ;
            var_propertyAccess_11810.getAssociatedValuesFor_constantProperty (extractedValue_12112__0) ;
            TC_Array <FixItDescription> fixItArray16 ;
            inCompiler->emitSemanticError (extractedValue_11673_propertyName_0.readProperty_location (), GGS_string ("a context property cannot be used in this context"), fixItArray16  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 297)) ;
            var_currentType_9715.drop () ; // Release error dropped variable
            var_currentLLVMAddressVar_9741.drop () ; // Release error dropped variable
          }
          break ;
        case GGS_propertyGetterKind::Enumeration::enum_storedProperty:
          {
            GGS_omnibusType extractedValue_12295_propertyType_0 ;
            GGS_uint extractedValue_12314_propertyIndex_1 ;
            var_propertyAccess_11810.getAssociatedValuesFor_storedProperty (extractedValue_12295_propertyType_0, extractedValue_12314_propertyIndex_1) ;
            GGS_string var_llvmPropertyName_12376 ;
            {
            extensionSetter_newTempLLVMVar (ioArgument_ioTemporaries, var_llvmPropertyName_12376, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 301)) ;
            }
            {
            extensionSetter_appendGetUniversalPropertyReference (ioArgument_ioInstructionGenerationList, var_currentType_9715, var_currentLLVMAddressVar_9741, var_llvmPropertyName_12376, extractedValue_12314_propertyIndex_1, extractedValue_11673_propertyName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 302)) ;
            }
            var_currentType_9715 = extractedValue_12295_propertyType_0 ;
            var_currentLLVMAddressVar_9741 = var_llvmPropertyName_12376 ;
            var_currentObjectPropertyMap_11351 = extensionGetter_propertyGetterMap (constinArgument_inContext, var_currentType_9715, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 311)) ;
          }
          break ;
        case GGS_propertyGetterKind::Enumeration::enum_computedProperty:
          {
            GGS_unifiedTypeMapEntry extractedValue_12803_propertyTypeProxy_0 ;
            GGS_routineLLVMNameDict extractedValue_12821_modeDictionary_1 ;
            var_propertyAccess_11810.getAssociatedValuesFor_computedProperty (extractedValue_12803_propertyTypeProxy_0, extractedValue_12821_modeDictionary_1) ;
            GGS_string var_routineLLVMName_12851 = function_checkModeAndReturnsRoutineLLVMName (extractedValue_12821_modeDictionary_1, constinArgument_inMode, extractedValue_11673_propertyName_0, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 313)) ;
            GGS_objectIR var_resultValueIR_13192 ;
            {
            extensionSetter_appendGetComputedPropertyValue (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, GGS_objectIR::class_func_reference (var_currentType_9715, var_currentLLVMAddressVar_9741  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 316)), var_routineLLVMName_12851, extensionGetter_type (extractedValue_12803_propertyTypeProxy_0, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 318)), var_resultValueIR_13192, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 314)) ;
            }
            var_currentType_9715 = extensionGetter_type (var_resultValueIR_13192, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 321)) ;
            var_currentLLVMAddressVar_9741 = extensionGetter_llvmName (var_resultValueIR_13192, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 322)) ;
            var_currentObjectPropertyMap_11351 = extensionGetter_propertyGetterMap (constinArgument_inContext, var_currentType_9715, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 323)) ;
          }
          break ;
        }
      }
      break ;
    case GGS_accessInAssignmentAST::Enumeration::enum_arrayAccess:
      {
        GGS_expressionAST extractedValue_13426__0 ;
        GGS_location extractedValue_13438_endOfIndex_1 ;
        GGS_bool extractedValue_13449__2 ;
        enumerator_11602.current_mAccess (HERE).getAssociatedValuesFor_arrayAccess (extractedValue_13426__0, extractedValue_13438_endOfIndex_1, extractedValue_13449__2) ;
        TC_Array <FixItDescription> fixItArray17 ;
        inCompiler->emitSemanticError (extractedValue_13438_endOfIndex_1, GGS_string ("not handled yet"), fixItArray17  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 326)) ;
        var_currentType_9715.drop () ; // Release error dropped variable
        var_currentLLVMAddressVar_9741.drop () ; // Release error dropped variable
      }
      break ;
    }
    enumerator_11602.gotoNextObject () ;
  }
  switch (var_lastAccess_11558.enumValue ()) {
  case GGS_accessInAssignmentAST::Enumeration::invalid:
    break ;
  case GGS_accessInAssignmentAST::Enumeration::enum_arrayAccess:
    {
      GGS_expressionAST extractedValue_13612__0 ;
      GGS_location extractedValue_13624_endOfIndex_1 ;
      GGS_bool extractedValue_13635__2 ;
      var_lastAccess_11558.getAssociatedValuesFor_arrayAccess (extractedValue_13612__0, extractedValue_13624_endOfIndex_1, extractedValue_13635__2) ;
      TC_Array <FixItDescription> fixItArray18 ;
      inCompiler->emitSemanticError (extractedValue_13624_endOfIndex_1, GGS_string ("a property is required here"), fixItArray18  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 332)) ;
    }
    break ;
  case GGS_accessInAssignmentAST::Enumeration::enum_property:
    {
      GGS_lstring extractedValue_13719_methodName_0 ;
      var_lastAccess_11558.getAssociatedValuesFor_property (extractedValue_13719_methodName_0) ;
      const GGS_procedureCallInstructionAST temp_19 = this ;
      GGS_lstring var_methodMangledName_13741 = extensionGetter_mangledName (temp_19.readProperty_mArguments (), var_currentType_9715.readProperty_omnibusTypeDescriptionName (), extractedValue_13719_methodName_0, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 334)) ;
      GGS_bool var_implementedPublic_13955 ;
      GGS_routineTypedSignature var_formalSignature_13984 ;
      GGS_unifiedTypeMapEntry var_formalReturnTypeProxy_14011 ;
      GGS_routineLLVMNameDict var_implementedModeDictionary_14072 ;
      GGS_bool var_implementedIsExported_14116 ;
      GGS_mode var_implementedMode_14156 ;
      constinArgument_inContext.readProperty_mRoutineMap ().method_searchKey (var_methodMangledName_13741, var_implementedPublic_13955, var_formalSignature_13984, var_formalReturnTypeProxy_14011, var_implementedModeDictionary_14072, var_implementedIsExported_14116, var_implementedMode_14156, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 335)) ;
      GGS_string var_functionLLVMName_14205 = function_checkModeAndReturnsRoutineLLVMName (var_implementedModeDictionary_14072, constinArgument_inMode, extractedValue_13719_methodName_0, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 345)) ;
      GalgasBool test_20 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_20) {
        test_20 = var_formalReturnTypeProxy_14011.getter_isNull (SOURCE_FILE ("instruction-procedure-call.galgas", 347)).operator_not (SOURCE_FILE ("instruction-procedure-call.galgas", 347)).boolEnum () ;
        if (GalgasBool::boolTrue == test_20) {
          TC_Array <FixItDescription> fixItArray21 ;
          inCompiler->emitSemanticError (extractedValue_13719_methodName_0.readProperty_location (), GGS_string ("cannot be called in instruction, returns a value"), fixItArray21  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 348)) ;
        }
      }
      GGS_procCallEffectiveParameterListIR temp_22 = GGS_procCallEffectiveParameterListIR::init (inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 352)) ;
      temp_22.enterElement (GGS_procCallEffectiveParameterListIR_2E_element::init_21__21_ (GGS_procEffectiveParameterPassingModeIR::class_func_outputInput (SOURCE_FILE ("instruction-procedure-call.galgas", 352)), GGS_objectIR::class_func_reference (var_currentType_9715, var_currentLLVMAddressVar_9741  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 352)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 352)) ;
      GGS_procCallEffectiveParameterListIR var_effectiveParameterListIR_14567 = temp_22 ;
      {
      const GGS_procedureCallInstructionAST temp_23 = this ;
      routine_analyzeEffectiveParameters_3F_self_3F_routineAttributes_3F_formal_3F_effective_3F_errorLocation_3F_context_3F_requiredMode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_26_effectiveIR (constinArgument_inSelfType, constinArgument_inRoutineAttributes, var_formalSignature_13984, temp_23.readProperty_mArguments (), extractedValue_13719_methodName_0.readProperty_location (), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_effectiveParameterListIR_14567, inCompiler  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 355)) ;
      }
      ioArgument_ioInstructionGenerationList.addAssign_operation (GGS_standaloneRoutineCallIR::init_21__21__21__21_ (GGS_objectIR::class_func_void (SOURCE_FILE ("instruction-procedure-call.galgas", 372)), var_methodMangledName_13741, var_functionLLVMName_14205, var_effectiveParameterListIR_14567, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 371)) ;
    }
    break ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@switchInstructionAST noteInstructionTypesInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_switchInstructionAST::method_noteInstructionTypesInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_switchInstructionAST temp_0 = this ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((cPtr_expressionAST *) temp_0.readProperty_mSwitchExpression ().ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 68)) ;
  const GGS_switchInstructionAST temp_1 = this ;
  UpEnumerator_switchCaseListAST enumerator_2806 (temp_1.readProperty_mSwitchCaseList ()) ;
  while (enumerator_2806.hasCurrentObject ()) {
    extensionMethod_noteInstructionListTypesInPrecedenceGraph (enumerator_2806.current_mCaseInstructionList (HERE), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 70)) ;
    enumerator_2806.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@switchInstructionAST instructionSemanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_switchInstructionAST::method_instructionSemanticAnalysis (const GGS_omnibusType constinArgument_inSelfType,
                                                                    const GGS_routineAttributes constinArgument_inRoutineAttributes,
                                                                    const GGS_semanticContext constinArgument_inContext,
                                                                    const GGS_mode constinArgument_inMode,
                                                                    GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                    GGS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                    GGS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                    GGS_allocaList & ioArgument_ioAllocaList,
                                                                    GGS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS_instructionListIR temp_0 = GGS_instructionListIR::init (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 90)) ;
  GGS_instructionListIR var_switchExpressionGenerationList_3814 = temp_0 ;
  GGS_objectIR var_switchValueIR_4226 ;
  const GGS_switchInstructionAST temp_1 = this ;
  callExtensionMethod_analyzeExpression ((cPtr_expressionAST *) temp_1.readProperty_mSwitchExpression ().ptr (), constinArgument_inSelfType, GGS_routineAttributes::init (inCompiler COMMA_HERE), function_voidType (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 94)), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_switchExpressionGenerationList_3814, var_switchValueIR_4226, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 91)) ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_switchValueIR_4226, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 104)) ;
  }
  const GGS_switchInstructionAST temp_2 = this ;
  GGS_lstring var_switchTypeName_4378 = GGS_lstring::init_21__21_ (extensionGetter_type (var_switchValueIR_4226, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 109)).readProperty_omnibusTypeDescriptionName (), temp_2.readProperty_mEndOf_5F_test_5F_expression (), inCompiler COMMA_HERE) ;
  GGS_constantMap var_enumConstantMap_4545 ;
  constinArgument_inContext.readProperty_mTypeConstantMap ().method_searchKey (var_switchTypeName_4378, var_enumConstantMap_4545, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 110)) ;
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    test_3 = extensionGetter_type (var_switchValueIR_4226, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 112)).readProperty_kind ().getter_isEnumeration (SOURCE_FILE ("instruction-switch.galgas", 112)).operator_not (SOURCE_FILE ("instruction-switch.galgas", 112)).boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      const GGS_switchInstructionAST temp_4 = this ;
      TC_Array <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.readProperty_mEndOf_5F_test_5F_expression (), GGS_string ("test expression type is '").add_operation (extensionGetter_omnibusTypeDescriptionName (var_switchValueIR_4226, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 114)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 114)).add_operation (GGS_string ("', it should be boolean"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 114)), fixItArray5  COMMA_SOURCE_FILE ("instruction-switch.galgas", 113)) ;
    }
  }
  GalgasBool test_6 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_6) {
    test_6 = extensionGetter_isStatic (var_switchValueIR_4226, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 116)).boolEnum () ;
    if (GalgasBool::boolTrue == test_6) {
      const GGS_switchInstructionAST temp_7 = this ;
      TC_Array <FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (temp_7.readProperty_mEndOf_5F_test_5F_expression (), GGS_string ("test expression type should not be static"), fixItArray8  COMMA_SOURCE_FILE ("instruction-switch.galgas", 117)) ;
    }
  }
  {
  extensionSetter_openOverrideForSelectBlock (ioArgument_ioUniversalMap, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 120)) ;
  }
  GGS_stringset temp_9 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 121)) ;
  GGS_stringset var_usedEnumerationValues_5047 = temp_9 ;
  GGS_switchCaseListIR temp_10 = GGS_switchCaseListIR::init (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 122)) ;
  GGS_switchCaseListIR var_switchCaseListIR_5099 = temp_10 ;
  const GGS_switchInstructionAST temp_11 = this ;
  UpEnumerator_switchCaseListAST enumerator_5145 (temp_11.readProperty_mSwitchCaseList ()) ;
  while (enumerator_5145.hasCurrentObject ()) {
    GGS_uintlist temp_12 = GGS_uintlist::init (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 124)) ;
    GGS_uintlist var_caseIdentifierIndexList_5207 = temp_12 ;
    UpEnumerator_lstringlist enumerator_5246 (enumerator_5145.current_mCaseIdentifiers (HERE)) ;
    while (enumerator_5246.hasCurrentObject ()) {
      GGS_bigint var_constantIdx_5332 ;
      GGS_lstring joker_5344_1 ; // Joker input parameter
      var_enumConstantMap_4545.method_searchKey (enumerator_5246.current_mValue (HERE), var_constantIdx_5332, joker_5344_1, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 126)) ;
      var_caseIdentifierIndexList_5207.addAssign_operation (var_constantIdx_5332.getter_uint (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 127))  COMMA_SOURCE_FILE ("instruction-switch.galgas", 127)) ;
      GalgasBool test_13 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_13) {
        test_13 = var_usedEnumerationValues_5047.getter_hasKey (enumerator_5246.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("instruction-switch.galgas", 128)).boolEnum () ;
        if (GalgasBool::boolTrue == test_13) {
          TC_Array <FixItDescription> fixItArray14 ;
          fixItArray14.appendObject (FixItDescription (EnumFixItKind::fixItRemove, "")) ;
          inCompiler->emitSemanticError (enumerator_5246.current_mValue (HERE).readProperty_location (), GGS_string ("duplicated enumeration constant"), fixItArray14  COMMA_SOURCE_FILE ("instruction-switch.galgas", 129)) ;
        }
      }
      var_usedEnumerationValues_5047.addAssign_operation (enumerator_5246.current_mValue (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("instruction-switch.galgas", 131)) ;
      enumerator_5246.gotoNextObject () ;
    }
    GGS_instructionListIR temp_15 = GGS_instructionListIR::init (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 133)) ;
    GGS_instructionListIR var_instructionGenerationList_5609 = temp_15 ;
    const GGS_switchInstructionAST temp_16 = this ;
    extensionMethod_analyzeBranchInstructionList (enumerator_5145.current_mCaseInstructionList (HERE), constinArgument_inSelfType, constinArgument_inRoutineAttributes, temp_16.readProperty_mEndOf_5F_switch_5F_instruction (), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_instructionGenerationList_5609, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 134)) ;
    var_switchCaseListIR_5099.addAssign_operation (var_caseIdentifierIndexList_5207, var_instructionGenerationList_5609  COMMA_SOURCE_FILE ("instruction-switch.galgas", 146)) ;
    enumerator_5145.gotoNextObject () ;
  }
  {
  const GGS_switchInstructionAST temp_17 = this ;
  extensionSetter_closeOverride (ioArgument_ioUniversalMap, temp_17.readProperty_mEndOf_5F_switch_5F_instruction (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 148)) ;
  }
  UpEnumerator_constantMap enumerator_6288 (var_enumConstantMap_4545) ;
  while (enumerator_6288.hasCurrentObject ()) {
    GalgasBool test_18 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_18) {
      test_18 = var_usedEnumerationValues_5047.getter_hasKey (enumerator_6288.current_lkey (HERE).readProperty_string () COMMA_SOURCE_FILE ("instruction-switch.galgas", 151)).operator_not (SOURCE_FILE ("instruction-switch.galgas", 151)).boolEnum () ;
      if (GalgasBool::boolTrue == test_18) {
        const GGS_switchInstructionAST temp_19 = this ;
        TC_Array <FixItDescription> fixItArray20 ;
        inCompiler->emitSemanticError (temp_19.readProperty_mEndOf_5F_test_5F_expression (), GGS_string ("missing '").add_operation (enumerator_6288.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 152)).add_operation (GGS_string ("' enumeration constant"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 152)), fixItArray20  COMMA_SOURCE_FILE ("instruction-switch.galgas", 152)) ;
      }
    }
    enumerator_6288.gotoNextObject () ;
  }
  const GGS_switchInstructionAST temp_21 = this ;
  ioArgument_ioInstructionGenerationList.addAssign_operation (GGS_switchInstructionIR::init_21__21__21__21_ (temp_21.readProperty_mEndOf_5F_test_5F_expression ().getter_endLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 157)), var_switchExpressionGenerationList_3814, var_switchValueIR_4226, var_switchCaseListIR_5099, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-switch.galgas", 156)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@switchInstructionIR llvmInstructionCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_switchInstructionIR::method_llvmInstructionCode (GGS_string & ioArgument_ioLLVMcode,
                                                           const GGS_generationContext constinArgument_inGenerationContext,
                                                           GGS_generationAdds & ioArgument_ioGenerationAdds,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_switchInstructionIR temp_0 = this ;
  extensionMethod_instructionListLLVMCode (temp_0.readProperty_mSwitchExpressionGenerationList (), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 190)) ;
  const GGS_switchInstructionIR temp_1 = this ;
  GGS_string var_labelOtherwise_7956 = GGS_string ("switch.").add_operation (temp_1.readProperty_mLabelIndex ().getter_string (SOURCE_FILE ("instruction-switch.galgas", 192)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 192)).add_operation (GGS_string (".otherwise"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 192)) ;
  const GGS_switchInstructionIR temp_2 = this ;
  const GGS_switchInstructionIR temp_3 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  switch ").add_operation (extensionGetter_llvmTypeName (temp_2.readProperty_mSwitchExpression (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 193)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 193)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 193)).add_operation (extensionGetter_llvmName (temp_3.readProperty_mSwitchExpression (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 193)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 193)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 193)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string (", label %").add_operation (var_labelOtherwise_7956, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 194)).add_operation (GGS_string (" [\n"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 194)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 194)) ;
  const GGS_switchInstructionIR temp_4 = this ;
  UpEnumerator_switchCaseListIR enumerator_8210 (temp_4.readProperty_mCaseGenerationList ()) ;
  GGS_uint index_8183 (uint32_t (0)) ;
  while (enumerator_8210.hasCurrentObject ()) {
    UpEnumerator_uintlist enumerator_8265 (enumerator_8210.current_mCaseIdentifierIndexes (HERE)) ;
    while (enumerator_8265.hasCurrentObject ()) {
      const GGS_switchInstructionIR temp_5 = this ;
      ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("    ").add_operation (extensionGetter_llvmTypeName (temp_5.readProperty_mSwitchExpression (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 197)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 197)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 197)).add_operation (enumerator_8265.current_mValue (HERE).getter_string (SOURCE_FILE ("instruction-switch.galgas", 197)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 197)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 197)) ;
      const GGS_switchInstructionIR temp_6 = this ;
      ioArgument_ioLLVMcode.plusAssign_operation(GGS_string (", label %switch.").add_operation (temp_6.readProperty_mLabelIndex ().getter_string (SOURCE_FILE ("instruction-switch.galgas", 198)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 198)).add_operation (GGS_string (".branch."), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 198)).add_operation (index_8183.getter_string (SOURCE_FILE ("instruction-switch.galgas", 198)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 198)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 198)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 198)) ;
      enumerator_8265.gotoNextObject () ;
    }
    enumerator_8210.gotoNextObject () ;
    index_8183.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 195)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  ]\n\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 201)) ;
  const GGS_switchInstructionIR temp_7 = this ;
  UpEnumerator_switchCaseListIR enumerator_8557 (temp_7.readProperty_mCaseGenerationList ()) ;
  GGS_uint index_8550 (uint32_t (0)) ;
  while (enumerator_8557.hasCurrentObject ()) {
    const GGS_switchInstructionIR temp_8 = this ;
    ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("switch.").add_operation (temp_8.readProperty_mLabelIndex ().getter_string (SOURCE_FILE ("instruction-switch.galgas", 204)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 204)).add_operation (GGS_string (".branch."), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 204)).add_operation (index_8550.getter_string (SOURCE_FILE ("instruction-switch.galgas", 204)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 204)).add_operation (GGS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 204)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 204)) ;
    extensionMethod_instructionListLLVMCode (enumerator_8557.current_mCaseInstructionList (HERE), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 205)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  br label %").add_operation (var_labelOtherwise_7956, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 206)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 206)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 206)) ;
    enumerator_8557.gotoNextObject () ;
    index_8550.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 203)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelOtherwise_7956.add_operation (GGS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 209)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 209)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@switchInstructionIR enterAccessibleEntities'
//
//--------------------------------------------------------------------------------------------------

void cPtr_switchInstructionIR::method_enterAccessibleEntities (GGS_stringset & ioArgument_ioInvokedRoutineSet,
                                                               GGS_uint & ioArgument_ioMaxBranchOfOnInstructions,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_switchInstructionIR temp_0 = this ;
  extensionMethod_enterAccessibleEntities (temp_0.readProperty_mSwitchExpressionGenerationList (), ioArgument_ioInvokedRoutineSet, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 218)) ;
  const GGS_switchInstructionIR temp_1 = this ;
  UpEnumerator_switchCaseListIR enumerator_9286 (temp_1.readProperty_mCaseGenerationList ()) ;
  while (enumerator_9286.hasCurrentObject ()) {
    extensionMethod_enterAccessibleEntities (enumerator_9286.current_mCaseInstructionList (HERE), ioArgument_ioInvokedRoutineSet, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 220)) ;
    enumerator_9286.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Routine 'handleArraySubscriptNew?self?routineAttributes?context?mode&temporary&staticEntityMap&variableMap&alloca????arraySize?elementType&!'
//
//--------------------------------------------------------------------------------------------------

void routine_handleArraySubscriptNew_3F_self_3F_routineAttributes_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_3F__3F__3F__3F_arraySize_3F_elementType_26__21_ (const GGS_omnibusType constinArgument_inSelfType,
                                                                                                                                                                                               const GGS_routineAttributes constinArgument_inRoutineAttributes,
                                                                                                                                                                                               const GGS_semanticContext constinArgument_inContext,
                                                                                                                                                                                               const GGS_mode constinArgument_inMode,
                                                                                                                                                                                               GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                                                                                                                                               GGS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                                                                                                                                               GGS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                                                                                                                                               GGS_allocaList & ioArgument_ioAllocaList,
                                                                                                                                                                                               const GGS_expressionAST constinArgument_inIndexExpression,
                                                                                                                                                                                               const GGS_location constinArgument_inErrorLocation,
                                                                                                                                                                                               const GGS_bool constinArgument_inCheckIndexExpression,
                                                                                                                                                                                               const GGS_bigint constinArgument_inArraySize,
                                                                                                                                                                                               const GGS_omnibusType constinArgument_inElementType,
                                                                                                                                                                                               GGS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                                                                                                                                               GGS_objectIR & outArgument_outIndexIR,
                                                                                                                                                                                               Compiler * inCompiler
                                                                                                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outIndexIR.drop () ; // Release 'out' argument
  GGS_objectIR var_indexResult_1181 ;
  callExtensionMethod_analyzeExpression ((cPtr_expressionAST *) constinArgument_inIndexExpression.ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, function_voidType (inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 24)), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_indexResult_1181, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 21)) ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_indexResult_1181, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 34)) ;
  }
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = var_indexResult_1181.getter_isLiteralInteger (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 38)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GGS_bigint var_indexValue_1421 ;
      GGS_omnibusType joker_1398_1 ; // Joker input parameter
      var_indexResult_1181.method_extractLiteralInteger (joker_1398_1, var_indexValue_1421, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 39)) ;
      GalgasBool test_1 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_1) {
        GGS_bool test_2 = GGS_bool (ComparisonKind::lowerThan, var_indexValue_1421.objectCompare (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 40)))) ;
        if (GalgasBool::boolTrue != test_2.boolEnum ()) {
          test_2 = GGS_bool (ComparisonKind::greaterOrEqual, var_indexValue_1421.objectCompare (constinArgument_inArraySize)) ;
        }
        test_1 = test_2.boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          TC_Array <FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("static index should be positive and < ").add_operation (constinArgument_inArraySize.getter_string (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 41)), inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 41)), fixItArray3  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 41)) ;
          outArgument_outIndexIR.drop () ; // Release error dropped variable
        }
      }
      if (GalgasBool::boolFalse == test_1) {
        outArgument_outIndexIR = GGS_objectIR::class_func_literalInteger (constinArgument_inElementType, var_indexValue_1421  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 43)) ;
      }
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GalgasBool test_4 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_4) {
      test_4 = extensionGetter_type (var_indexResult_1181, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 45)).readProperty_kind ().getter_isInteger (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 45)).boolEnum () ;
      if (GalgasBool::boolTrue == test_4) {
        GalgasBool test_5 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_5) {
          GGS_bool test_6 = constinArgument_inCheckIndexExpression ;
          if (GalgasBool::boolTrue == test_6.boolEnum ()) {
            test_6 = GGS_bool (gOption_omnibus_5F_options_noPanicGeneration.readProperty_value ()).operator_not (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 46)) ;
          }
          test_5 = test_6.boolEnum () ;
          if (GalgasBool::boolTrue == test_5) {
            GGS_bool var_generatePanicInstruction_1970 ;
            {
            extensionSetter_testArrayIndex (ioArgument_ioInstructionGenerationList, var_indexResult_1181, constinArgument_inErrorLocation, constinArgument_inArraySize, var_generatePanicInstruction_1970, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 47)) ;
            }
            GalgasBool test_7 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_7) {
              GGS_bool test_8 = var_generatePanicInstruction_1970 ;
              if (GalgasBool::boolTrue == test_8.boolEnum ()) {
                test_8 = extensionGetter_isSafe (constinArgument_inMode, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 53)) ;
              }
              test_7 = test_8.boolEnum () ;
              if (GalgasBool::boolTrue == test_7) {
                TC_Array <FixItDescription> fixItArray9 ;
                inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("index computation can generate panic and routine is not safe"), fixItArray9  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 54)) ;
              }
            }
          }
        }
        outArgument_outIndexIR = var_indexResult_1181 ;
      }
    }
    if (GalgasBool::boolFalse == test_4) {
      TC_Array <FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("index expression is not an integer"), fixItArray10  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 59)) ;
      outArgument_outIndexIR.drop () ; // Release error dropped variable
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'analyzeVariableInLValue?self?readAccess?routineAttributes?context?mode&temporary&staticEntityMap&variableMap&alloca&instructionListIR?variableName?llvmName?type?!'
//
//--------------------------------------------------------------------------------------------------

void routine_analyzeVariableInLValue_3F_self_3F_readAccess_3F_routineAttributes_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_3F_variableName_3F_llvmName_3F_type_3F__21_ (const GGS_omnibusType constinArgument_inSelfType,
                                                                                                                                                                                                                              const GGS_bool constinArgument_inIsReadAccess,
                                                                                                                                                                                                                              const GGS_routineAttributes constinArgument_inRoutineAttributes,
                                                                                                                                                                                                                              const GGS_semanticContext constinArgument_inContext,
                                                                                                                                                                                                                              const GGS_mode constinArgument_inMode,
                                                                                                                                                                                                                              GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                                                                                                                                                                              GGS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                                                                                                                                                                              GGS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                                                                                                                                                                              GGS_allocaList & ioArgument_ioAllocaList,
                                                                                                                                                                                                                              GGS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                                                                                                                                                                              const GGS_lstring constinArgument_inVariableName,
                                                                                                                                                                                                                              const GGS_string constinArgument_inLLVMName,
                                                                                                                                                                                                                              const GGS_omnibusType constinArgument_inVariableType,
                                                                                                                                                                                                                              const GGS_LValueOperandAST constinArgument_inOperand,
                                                                                                                                                                                                                              GGS_LValueRepresentation & outArgument_outInternalRepresentation,
                                                                                                                                                                                                                              Compiler * inCompiler
                                                                                                                                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outInternalRepresentation.drop () ; // Release 'out' argument
  GGS_omnibusType var_currentType_8756 = constinArgument_inVariableType ;
  GGS_string var_currentLLVMName_8791 = constinArgument_inLLVMName ;
  switch (constinArgument_inOperand.enumValue ()) {
  case GGS_LValueOperandAST::Enumeration::invalid:
    break ;
  case GGS_LValueOperandAST::Enumeration::enum_noOperand:
    {
      GalgasBool test_0 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_0) {
        test_0 = constinArgument_inIsReadAccess.boolEnum () ;
        if (GalgasBool::boolTrue == test_0) {
          {
          GGS_objectIR joker_8957 ; // Joker input parameter
          extensionSetter_searchValuedObjectForReadAccess (ioArgument_ioUniversalMap, constinArgument_inVariableName, joker_8957, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 220)) ;
          }
        }
      }
      if (GalgasBool::boolFalse == test_0) {
        {
        GGS_objectIR joker_9043 ; // Joker input parameter
        extensionSetter_searchValuedObjectForWriteAccess (ioArgument_ioUniversalMap, constinArgument_inVariableName, joker_9043, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 222)) ;
        }
      }
    }
    break ;
  case GGS_LValueOperandAST::Enumeration::enum_property:
    {
      GGS_lstring extractedValue_9081_name_0 ;
      GGS_LValueOperandAST extractedValue_9104_nextOperand_1 ;
      constinArgument_inOperand.getAssociatedValuesFor_property (extractedValue_9081_name_0, extractedValue_9104_nextOperand_1) ;
      GalgasBool test_1 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_1) {
        test_1 = constinArgument_inIsReadAccess.boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          {
          GGS_objectIR joker_9218 ; // Joker input parameter
          extensionSetter_searchValuedObjectForReadAccess (ioArgument_ioUniversalMap, constinArgument_inVariableName, joker_9218, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 226)) ;
          }
        }
      }
      if (GalgasBool::boolFalse == test_1) {
        {
        GGS_objectIR joker_9308 ; // Joker input parameter
        extensionSetter_searchValuedObjectForReadWriteAccess (ioArgument_ioUniversalMap, constinArgument_inVariableName, joker_9308, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 228)) ;
        }
      }
      {
      routine_handlePropertyAccess_3F_self_26__26__3F_routineAttributes_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_3F__3F_ (constinArgument_inSelfType, var_currentType_8756, var_currentLLVMName_8791, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, extractedValue_9081_name_0, extractedValue_9104_nextOperand_1, inCompiler  COMMA_SOURCE_FILE ("lvalue.galgas", 230)) ;
      }
    }
    break ;
  case GGS_LValueOperandAST::Enumeration::enum_arrayAccess:
    {
      GGS_expressionAST extractedValue_9760_indexExpression_0 ;
      GGS_location extractedValue_9776_endOfIndex_1 ;
      GGS_bool extractedValue_9787_checkIndexExpression_2 ;
      GGS_LValueOperandAST extractedValue_9808_nextOperand_3 ;
      constinArgument_inOperand.getAssociatedValuesFor_arrayAccess (extractedValue_9760_indexExpression_0, extractedValue_9776_endOfIndex_1, extractedValue_9787_checkIndexExpression_2, extractedValue_9808_nextOperand_3) ;
      GalgasBool test_2 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_2) {
        test_2 = constinArgument_inIsReadAccess.boolEnum () ;
        if (GalgasBool::boolTrue == test_2) {
          {
          GGS_objectIR joker_9922 ; // Joker input parameter
          extensionSetter_searchValuedObjectForReadAccess (ioArgument_ioUniversalMap, constinArgument_inVariableName, joker_9922, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 247)) ;
          }
        }
      }
      if (GalgasBool::boolFalse == test_2) {
        {
        GGS_objectIR joker_10012 ; // Joker input parameter
        extensionSetter_searchValuedObjectForReadWriteAccess (ioArgument_ioUniversalMap, constinArgument_inVariableName, joker_10012, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 249)) ;
        }
      }
      {
      routine_handleArrayAccess_3F_self_26__26__3F_routineAttributes_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_3F__3F__3F__3F_ (constinArgument_inSelfType, var_currentType_8756, var_currentLLVMName_8791, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, extractedValue_9760_indexExpression_0, extractedValue_9776_endOfIndex_1, extractedValue_9787_checkIndexExpression_2, extractedValue_9808_nextOperand_3, inCompiler  COMMA_SOURCE_FILE ("lvalue.galgas", 251)) ;
      }
    }
    break ;
  }
  outArgument_outInternalRepresentation = GGS_LValueRepresentation::init_21__21_ (var_currentType_8756, var_currentLLVMName_8791, inCompiler COMMA_HERE) ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'handlePropertyAccess?self&&?routineAttributes?context?mode&temporary&staticEntityMap&variableMap&alloca&instructionListIR??'
//
//--------------------------------------------------------------------------------------------------

void routine_handlePropertyAccess_3F_self_26__26__3F_routineAttributes_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_3F__3F_ (const GGS_omnibusType constinArgument_inSelfType,
                                                                                                                                                                                 GGS_omnibusType & ioArgument_ioCurrentType,
                                                                                                                                                                                 GGS_string & ioArgument_ioCurrentLLVMName,
                                                                                                                                                                                 const GGS_routineAttributes constinArgument_inRoutineAttributes,
                                                                                                                                                                                 const GGS_semanticContext constinArgument_inContext,
                                                                                                                                                                                 const GGS_mode constinArgument_inMode,
                                                                                                                                                                                 GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                                                                                                                                 GGS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                                                                                                                                 GGS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                                                                                                                                 GGS_allocaList & ioArgument_ioAllocaList,
                                                                                                                                                                                 GGS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                                                                                                                                 const GGS_lstring constinArgument_inPropertyName,
                                                                                                                                                                                 const GGS_LValueOperandAST constinArgument_inNextOperand,
                                                                                                                                                                                 Compiler * inCompiler
                                                                                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertySetterMap var_propertySetterMap_11386 = extensionGetter_propertySetterMap (constinArgument_inContext, ioArgument_ioCurrentType, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 290)) ;
  GGS_propertySetterKind var_propertyAccess_11526 ;
  GGS_propertyVisibility joker_11498 ; // Joker input parameter
  var_propertySetterMap_11386.method_searchKey (constinArgument_inPropertyName, joker_11498, var_propertyAccess_11526, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 291)) ;
  switch (var_propertyAccess_11526.enumValue ()) {
  case GGS_propertySetterKind::Enumeration::invalid:
    break ;
  case GGS_propertySetterKind::Enumeration::enum_computedProperty:
    {
      GGS_unifiedTypeMapEntry extractedValue_11592__0 ;
      GGS_routineLLVMNameDict extractedValue_11592__1 ;
      GGS_routineLLVMNameDict extractedValue_11592__2 ;
      var_propertyAccess_11526.getAssociatedValuesFor_computedProperty (extractedValue_11592__0, extractedValue_11592__1, extractedValue_11592__2) ;
      TC_Array <FixItDescription> fixItArray0 ;
      inCompiler->emitSemanticError (constinArgument_inPropertyName.readProperty_location (), GGS_string ("a computed property cannot be used here"), fixItArray0  COMMA_SOURCE_FILE ("lvalue.galgas", 294)) ;
      ioArgument_ioCurrentType.drop () ; // Release error dropped variable
      ioArgument_ioCurrentLLVMName.drop () ; // Release error dropped variable
    }
    break ;
  case GGS_propertySetterKind::Enumeration::enum_storedProperty:
    {
      GGS_omnibusType extractedValue_11737_propertyType_0 ;
      GGS_uint extractedValue_11756_index_1 ;
      var_propertyAccess_11526.getAssociatedValuesFor_storedProperty (extractedValue_11737_propertyType_0, extractedValue_11756_index_1) ;
      GGS_string var_newLLVMvariable_11806 ;
      {
      extensionSetter_newTempLLVMVar (ioArgument_ioTemporaries, var_newLLVMvariable_11806, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 296)) ;
      }
      {
      extensionSetter_appendGetUniversalPropertyReference (ioArgument_ioInstructionGenerationList, ioArgument_ioCurrentType, ioArgument_ioCurrentLLVMName, var_newLLVMvariable_11806, extractedValue_11756_index_1, constinArgument_inPropertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 297)) ;
      }
      ioArgument_ioCurrentType = extractedValue_11737_propertyType_0 ;
      ioArgument_ioCurrentLLVMName = var_newLLVMvariable_11806 ;
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

void routine_handleArrayAccess_3F_self_26__26__3F_routineAttributes_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_3F__3F__3F__3F_ (const GGS_omnibusType constinArgument_inSelfType,
                                                                                                                                                                                      GGS_omnibusType & ioArgument_ioCurrentType,
                                                                                                                                                                                      GGS_string & ioArgument_ioCurrentLLVMName,
                                                                                                                                                                                      const GGS_routineAttributes constinArgument_inRoutineAttributes,
                                                                                                                                                                                      const GGS_semanticContext constinArgument_inContext,
                                                                                                                                                                                      const GGS_mode constinArgument_inMode,
                                                                                                                                                                                      GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                                                                                                                                      GGS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                                                                                                                                      GGS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                                                                                                                                      GGS_allocaList & ioArgument_ioAllocaList,
                                                                                                                                                                                      GGS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                                                                                                                                      const GGS_expressionAST constinArgument_inIndexExpression,
                                                                                                                                                                                      const GGS_location constinArgument_inEndOfIndex,
                                                                                                                                                                                      const GGS_bool constinArgument_inCheckIndexExpression,
                                                                                                                                                                                      const GGS_LValueOperandAST constinArgument_inNextOperand,
                                                                                                                                                                                      Compiler * inCompiler
                                                                                                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  switch (ioArgument_ioCurrentType.readProperty_subscript ().enumValue ()) {
  case GGS_subscript::Enumeration::invalid:
    break ;
  case GGS_subscript::Enumeration::enum_noSubscript:
    {
      TC_Array <FixItDescription> fixItArray0 ;
      inCompiler->emitSemanticError (constinArgument_inEndOfIndex, GGS_string ("the receiver type is ").add_operation (ioArgument_ioCurrentType.readProperty_omnibusTypeDescriptionName (), inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 345)).add_operation (GGS_string (" and does not accept subscripting"), inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 345)), fixItArray0  COMMA_SOURCE_FILE ("lvalue.galgas", 344)) ;
    }
    break ;
  case GGS_subscript::Enumeration::enum_literalString:
    {
      TC_Array <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inEndOfIndex, GGS_string ("the receiver type is literal string and does not accept subscripting"), fixItArray1  COMMA_SOURCE_FILE ("lvalue.galgas", 347)) ;
      ioArgument_ioCurrentType.drop () ; // Release error dropped variable
      ioArgument_ioCurrentLLVMName.drop () ; // Release error dropped variable
    }
    break ;
  case GGS_subscript::Enumeration::enum_staticSubscript:
    {
      GGS_omnibusType extractedValue_13684_elementType_0 ;
      GGS_bigint extractedValue_13704_arraySize_1 ;
      ioArgument_ioCurrentType.readProperty_subscript ().getAssociatedValuesFor_staticSubscript (extractedValue_13684_elementType_0, extractedValue_13704_arraySize_1) ;
      GGS_objectIR var_indexIR_14192 ;
      {
      routine_handleArraySubscriptNew_3F_self_3F_routineAttributes_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_3F__3F__3F__3F_arraySize_3F_elementType_26__21_ (constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, constinArgument_inIndexExpression, constinArgument_inEndOfIndex, constinArgument_inCheckIndexExpression, extractedValue_13704_arraySize_1, extractedValue_13684_elementType_0, ioArgument_ioInstructionGenerationList, var_indexIR_14192, inCompiler  COMMA_SOURCE_FILE ("lvalue.galgas", 351)) ;
      }
      GGS_string var_newLLVMvariable_14247 ;
      {
      extensionSetter_newTempLLVMVar (ioArgument_ioTemporaries, var_newLLVMvariable_14247, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 368)) ;
      }
      {
      extensionSetter_appendGetUniversalArrayElementReference (ioArgument_ioInstructionGenerationList, ioArgument_ioCurrentType, ioArgument_ioCurrentLLVMName, extractedValue_13684_elementType_0, var_newLLVMvariable_14247, var_indexIR_14192, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 369)) ;
      }
      ioArgument_ioCurrentType = extractedValue_13684_elementType_0 ;
      ioArgument_ioCurrentLLVMName = var_newLLVMvariable_14247 ;
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

void routine_analyzeSelfLValue_3F_self_3F_routineAttributes_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_3F__21_ (const GGS_omnibusType constinArgument_inSelfType,
                                                                                                                                                                      const GGS_routineAttributes constinArgument_inRoutineAttributes,
                                                                                                                                                                      const GGS_semanticContext constinArgument_inContext,
                                                                                                                                                                      const GGS_mode constinArgument_inMode,
                                                                                                                                                                      GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                                                                                                                      GGS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                                                                                                                      GGS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                                                                                                                      GGS_allocaList & ioArgument_ioAllocaList,
                                                                                                                                                                      GGS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                                                                                                                      const GGS_LValueOperandAST constinArgument_inOperand,
                                                                                                                                                                      GGS_LValueRepresentation & outArgument_outInternalRepresentation,
                                                                                                                                                                      Compiler * inCompiler
                                                                                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outInternalRepresentation.drop () ; // Release 'out' argument
  GGS_omnibusType var_currentType_15626 = constinArgument_inSelfType ;
  GGS_string var_currentLLVMName_15657 = function_llvmNameForSelf (inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 411)) ;
  switch (constinArgument_inOperand.enumValue ()) {
  case GGS_LValueOperandAST::Enumeration::invalid:
    break ;
  case GGS_LValueOperandAST::Enumeration::enum_noOperand:
    break ;
  case GGS_LValueOperandAST::Enumeration::enum_property:
    {
      GGS_lstring extractedValue_15758_name_0 ;
      GGS_LValueOperandAST extractedValue_15781_next_1 ;
      constinArgument_inOperand.getAssociatedValuesFor_property (extractedValue_15758_name_0, extractedValue_15781_next_1) ;
      {
      routine_handlePropertyAccess_3F_self_26__26__3F_routineAttributes_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_3F__3F_ (constinArgument_inSelfType, var_currentType_15626, var_currentLLVMName_15657, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, extractedValue_15758_name_0, extractedValue_15781_next_1, inCompiler  COMMA_SOURCE_FILE ("lvalue.galgas", 415)) ;
      }
    }
    break ;
  case GGS_LValueOperandAST::Enumeration::enum_arrayAccess:
    {
      GGS_expressionAST extractedValue_16222_indexExpression_0 ;
      GGS_location extractedValue_16238_endOfIndex_1 ;
      GGS_bool extractedValue_16249_checkIndexExpression_2 ;
      GGS_LValueOperandAST extractedValue_16270_nextOperand_3 ;
      constinArgument_inOperand.getAssociatedValuesFor_arrayAccess (extractedValue_16222_indexExpression_0, extractedValue_16238_endOfIndex_1, extractedValue_16249_checkIndexExpression_2, extractedValue_16270_nextOperand_3) ;
      {
      routine_handleArrayAccess_3F_self_26__26__3F_routineAttributes_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_3F__3F__3F__3F_ (constinArgument_inSelfType, var_currentType_15626, var_currentLLVMName_15657, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, extractedValue_16222_indexExpression_0, extractedValue_16238_endOfIndex_1, extractedValue_16249_checkIndexExpression_2, extractedValue_16270_nextOperand_3, inCompiler  COMMA_SOURCE_FILE ("lvalue.galgas", 431)) ;
      }
    }
    break ;
  }
  outArgument_outInternalRepresentation = GGS_LValueRepresentation::init_21__21_ (var_currentType_15626, var_currentLLVMName_15657, inCompiler COMMA_HERE) ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'handleNextOperand?self&&??routineAttributes?context?mode&temporary&staticEntityMap&variableMap&alloca&instructionListIR'
//
//--------------------------------------------------------------------------------------------------

void routine_handleNextOperand_3F_self_26__26__3F__3F_routineAttributes_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR (const GGS_omnibusType constinArgument_inSelfType,
                                                                                                                                                                          GGS_omnibusType & ioArgument_ioCurrentType,
                                                                                                                                                                          GGS_string & ioArgument_ioCurrentLLVMName,
                                                                                                                                                                          const GGS_LValueOperandAST constinArgument_inOperand,
                                                                                                                                                                          const GGS_routineAttributes constinArgument_inRoutineAttributes,
                                                                                                                                                                          const GGS_semanticContext constinArgument_inContext,
                                                                                                                                                                          const GGS_mode constinArgument_inMode,
                                                                                                                                                                          GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                                                                                                                          GGS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                                                                                                                          GGS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                                                                                                                          GGS_allocaList & ioArgument_ioAllocaList,
                                                                                                                                                                          GGS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                                                                                                                          Compiler * inCompiler
                                                                                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  switch (constinArgument_inOperand.enumValue ()) {
  case GGS_LValueOperandAST::Enumeration::invalid:
    break ;
  case GGS_LValueOperandAST::Enumeration::enum_noOperand:
    break ;
  case GGS_LValueOperandAST::Enumeration::enum_property:
    {
      GGS_lstring extractedValue_17585_name_0 ;
      GGS_LValueOperandAST extractedValue_17608_next_1 ;
      constinArgument_inOperand.getAssociatedValuesFor_property (extractedValue_17585_name_0, extractedValue_17608_next_1) ;
      {
      routine_handlePropertyAccess_3F_self_26__26__3F_routineAttributes_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_3F__3F_ (constinArgument_inSelfType, ioArgument_ioCurrentType, ioArgument_ioCurrentLLVMName, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, extractedValue_17585_name_0, extractedValue_17608_next_1, inCompiler  COMMA_SOURCE_FILE ("lvalue.galgas", 471)) ;
      }
    }
    break ;
  case GGS_LValueOperandAST::Enumeration::enum_arrayAccess:
    {
      GGS_expressionAST extractedValue_18053_indexExpression_0 ;
      GGS_location extractedValue_18069_endOfIndex_1 ;
      GGS_bool extractedValue_18080_checkIndexExpression_2 ;
      GGS_LValueOperandAST extractedValue_18101_nextOperand_3 ;
      constinArgument_inOperand.getAssociatedValuesFor_arrayAccess (extractedValue_18053_indexExpression_0, extractedValue_18069_endOfIndex_1, extractedValue_18080_checkIndexExpression_2, extractedValue_18101_nextOperand_3) ;
      {
      routine_handleArrayAccess_3F_self_26__26__3F_routineAttributes_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_3F__3F__3F__3F_ (constinArgument_inSelfType, ioArgument_ioCurrentType, ioArgument_ioCurrentLLVMName, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, extractedValue_18053_indexExpression_0, extractedValue_18069_endOfIndex_1, extractedValue_18080_checkIndexExpression_2, extractedValue_18101_nextOperand_3, inCompiler  COMMA_SOURCE_FILE ("lvalue.galgas", 487)) ;
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

void routine_analyzeEffectiveParameters_3F_self_3F_routineAttributes_3F_formal_3F_effective_3F_errorLocation_3F_context_3F_requiredMode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_26_effectiveIR (const GGS_omnibusType constinArgument_inSelfType,
                                                                                                                                                                                                                                      const GGS_routineAttributes constinArgument_inRoutineAttributes,
                                                                                                                                                                                                                                      const GGS_routineTypedSignature constinArgument_inFormalSignature,
                                                                                                                                                                                                                                      const GGS_effectiveArgumentListAST constinArgument_inEffectiveParameterList,
                                                                                                                                                                                                                                      const GGS_location constinArgument_inErrorLocation,
                                                                                                                                                                                                                                      const GGS_semanticContext constinArgument_inContext,
                                                                                                                                                                                                                                      const GGS_mode constinArgument_inRequiredMode,
                                                                                                                                                                                                                                      GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                                                                                                                                                                                      GGS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                                                                                                                                                                                      GGS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                                                                                                                                                                                      GGS_allocaList & ioArgument_ioAllocaList,
                                                                                                                                                                                                                                      GGS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                                                                                                                                                                                      GGS_procCallEffectiveParameterListIR & ioArgument_ioEffectiveParameterListIR,
                                                                                                                                                                                                                                      Compiler * inCompiler
                                                                                                                                                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_procEffectiveParameterList temp_0 = GGS_procEffectiveParameterList::init (inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 129)) ;
  GGS_procEffectiveParameterList var_parameterList_5191 = temp_0 ;
  UpEnumerator_routineTypedSignature enumerator_5240 (constinArgument_inFormalSignature) ;
  UpEnumerator_effectiveArgumentListAST enumerator_5300 (constinArgument_inEffectiveParameterList) ;
  while (enumerator_5240.hasCurrentObject () && enumerator_5300.hasCurrentObject ()) {
    switch (enumerator_5300.current_mEffectiveParameterKind (HERE).enumValue ()) {
    case GGS_effectiveArgumentPassingModeAST::Enumeration::invalid:
      break ;
    case GGS_effectiveArgumentPassingModeAST::Enumeration::enum_inputWithType:
      {
        GGS_bool extractedValue_5428_constant_0 ;
        GGS_lstring extractedValue_5446_typeName_1 ;
        GGS_lstring extractedValue_5464_name_2 ;
        enumerator_5300.current_mEffectiveParameterKind (HERE).getAssociatedValuesFor_inputWithType (extractedValue_5428_constant_0, extractedValue_5446_typeName_1, extractedValue_5464_name_2) ;
        GGS_omnibusType temp_1 ;
        const GalgasBool test_2 = GGS_bool (ComparisonKind::equal, extractedValue_5446_typeName_1.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_2) {
          temp_1 = extensionGetter_type (enumerator_5240.current_mTypeProxy (HERE), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 134)) ;
        }else if (GalgasBool::boolFalse == test_2) {
          temp_1 = extensionGetter_type (extensionGetter_searchKey (constinArgument_inContext.readProperty_mTypeMap (), extractedValue_5446_typeName_1, inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 136)), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 136)) ;
        }
        GGS_omnibusType var_type_5482 = temp_1 ;
        GalgasBool test_3 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_3) {
          test_3 = extractedValue_5428_constant_0.boolEnum () ;
          if (GalgasBool::boolTrue == test_3) {
            {
            extensionSetter_insertLocalConstant (ioArgument_ioUniversalMap, extractedValue_5464_name_2, GGS_bool (false), var_type_5482, extractedValue_5464_name_2, inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 139)) ;
            }
          }
        }
        if (GalgasBool::boolFalse == test_3) {
          {
          extensionSetter_insertLocalVariable (ioArgument_ioUniversalMap, extractedValue_5464_name_2, var_type_5482, extractedValue_5464_name_2, GGS_valuedObjectState::class_func_hasUnreadValue (SOURCE_FILE ("effective-parameters.galgas", 141)), GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 141)) ;
          }
        }
        ioArgument_ioAllocaList.addAssign_operation (function_llvmNameForLocalVariable (extractedValue_5464_name_2.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 143)), var_type_5482, GGS_bool (true)  COMMA_SOURCE_FILE ("effective-parameters.galgas", 143)) ;
        var_parameterList_5191.addAssign_operation (enumerator_5300.current_mEffectiveParameterKind (HERE), enumerator_5300.current_mSelector (HERE), var_type_5482  COMMA_SOURCE_FILE ("effective-parameters.galgas", 144)) ;
        ioArgument_ioEffectiveParameterListIR.addAssign_operation (GGS_procEffectiveParameterPassingModeIR::class_func_input (SOURCE_FILE ("effective-parameters.galgas", 146)), GGS_objectIR::class_func_reference (var_type_5482, function_llvmNameForLocalVariable (extractedValue_5464_name_2.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 147))  COMMA_SOURCE_FILE ("effective-parameters.galgas", 147))  COMMA_SOURCE_FILE ("effective-parameters.galgas", 145)) ;
      }
      break ;
    case GGS_effectiveArgumentPassingModeAST::Enumeration::enum_input:
      {
        GGS_lstring extractedValue_6140_name_0 ;
        enumerator_5300.current_mEffectiveParameterKind (HERE).getAssociatedValuesFor_input (extractedValue_6140_name_0) ;
        GGS_objectIR var_objectIR_6216 ;
        {
        extensionSetter_searchValuedObjectForWriteAccess (ioArgument_ioUniversalMap, extractedValue_6140_name_0, var_objectIR_6216, inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 149)) ;
        }
        var_parameterList_5191.addAssign_operation (enumerator_5300.current_mEffectiveParameterKind (HERE), enumerator_5300.current_mSelector (HERE), extensionGetter_type (var_objectIR_6216, inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 159))  COMMA_SOURCE_FILE ("effective-parameters.galgas", 159)) ;
        ioArgument_ioEffectiveParameterListIR.addAssign_operation (GGS_procEffectiveParameterPassingModeIR::class_func_input (SOURCE_FILE ("effective-parameters.galgas", 161)), GGS_objectIR::class_func_reference (extensionGetter_type (var_objectIR_6216, inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 163)), extensionGetter_llvmName (var_objectIR_6216, inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 164)).getter_nowhere (SOURCE_FILE ("effective-parameters.galgas", 164)).readProperty_string ()  COMMA_SOURCE_FILE ("effective-parameters.galgas", 162))  COMMA_SOURCE_FILE ("effective-parameters.galgas", 160)) ;
      }
      break ;
    case GGS_effectiveArgumentPassingModeAST::Enumeration::enum_output:
      {
        GGS_expressionAST extractedValue_6880_expression_0 ;
        GGS_location extractedValue_6901_endOfExp_1 ;
        enumerator_5300.current_mEffectiveParameterKind (HERE).getAssociatedValuesFor_output (extractedValue_6880_expression_0, extractedValue_6901_endOfExp_1) ;
        GGS_objectIR var_expressionResult_7357 ;
        callExtensionMethod_analyzeExpression ((cPtr_expressionAST *) extractedValue_6880_expression_0.ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, extensionGetter_type (enumerator_5240.current_mTypeProxy (HERE), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 170)), constinArgument_inContext, constinArgument_inRequiredMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_expressionResult_7357, inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 167)) ;
        {
        extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_expressionResult_7357, inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 180)) ;
        }
        GGS_objectIR var_result_7514 = function_checkAssignmentCompatibility (constinArgument_inContext.readProperty_mAssignmentOperatorMap (), var_expressionResult_7357, extensionGetter_type (enumerator_5240.current_mTypeProxy (HERE), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 187)), extractedValue_6901_endOfExp_1, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 184)) ;
        var_parameterList_5191.addAssign_operation (enumerator_5300.current_mEffectiveParameterKind (HERE), enumerator_5300.current_mSelector (HERE), extensionGetter_type (enumerator_5240.current_mTypeProxy (HERE), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 191))  COMMA_SOURCE_FILE ("effective-parameters.galgas", 191)) ;
        ioArgument_ioEffectiveParameterListIR.addAssign_operation (GGS_procEffectiveParameterPassingModeIR::class_func_output (SOURCE_FILE ("effective-parameters.galgas", 192)), var_result_7514  COMMA_SOURCE_FILE ("effective-parameters.galgas", 192)) ;
      }
      break ;
    case GGS_effectiveArgumentPassingModeAST::Enumeration::enum_outputInput:
      {
        GGS_lstring extractedValue_7946_name_0 ;
        enumerator_5300.current_mEffectiveParameterKind (HERE).getAssociatedValuesFor_outputInput (extractedValue_7946_name_0) ;
        GGS_objectIR var_objectIR_8026 ;
        {
        extensionSetter_searchValuedObjectForReadWriteAccess (ioArgument_ioUniversalMap, extractedValue_7946_name_0, var_objectIR_8026, inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 194)) ;
        }
        var_parameterList_5191.addAssign_operation (enumerator_5300.current_mEffectiveParameterKind (HERE), enumerator_5300.current_mSelector (HERE), extensionGetter_type (var_objectIR_8026, inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 195))  COMMA_SOURCE_FILE ("effective-parameters.galgas", 195)) ;
        GGS_objectIR var_argumentIR_8142 = GGS_objectIR::class_func_reference (extensionGetter_type (var_objectIR_8026, inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 197)), extensionGetter_llvmName (var_objectIR_8026, inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 198))  COMMA_SOURCE_FILE ("effective-parameters.galgas", 196)) ;
        ioArgument_ioEffectiveParameterListIR.addAssign_operation (GGS_procEffectiveParameterPassingModeIR::class_func_outputInput (SOURCE_FILE ("effective-parameters.galgas", 200)), var_argumentIR_8142  COMMA_SOURCE_FILE ("effective-parameters.galgas", 200)) ;
      }
      break ;
    case GGS_effectiveArgumentPassingModeAST::Enumeration::enum_outputInputSelfVariable:
      {
        GGS_lstring extractedValue_8358_name_0 ;
        enumerator_5300.current_mEffectiveParameterKind (HERE).getAssociatedValuesFor_outputInputSelfVariable (extractedValue_8358_name_0) ;
        GGS_propertyGetterMap var_propertyGetterMap_8474 = extensionGetter_propertyGetterMap (constinArgument_inContext, constinArgument_inSelfType, inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 203)) ;
        GGS_propertyGetterKind var_propertyAccess_8697 ;
        GGS_propertyVisibility joker_8669 ; // Joker input parameter
        var_propertyGetterMap_8474.method_searchKey (extractedValue_8358_name_0, joker_8669, var_propertyAccess_8697, inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 205)) ;
        switch (var_propertyAccess_8697.enumValue ()) {
        case GGS_propertyGetterKind::Enumeration::invalid:
          break ;
        case GGS_propertyGetterKind::Enumeration::enum_constantProperty:
          {
            GGS_objectIR extractedValue_8770__0 ;
            var_propertyAccess_8697.getAssociatedValuesFor_constantProperty (extractedValue_8770__0) ;
            TC_Array <FixItDescription> fixItArray4 ;
            inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("a constant property cannot be used as output / input parameter"), fixItArray4  COMMA_SOURCE_FILE ("effective-parameters.galgas", 208)) ;
          }
          break ;
        case GGS_propertyGetterKind::Enumeration::enum_storedProperty:
          {
            GGS_omnibusType extractedValue_8912_propertyType_0 ;
            GGS_uint extractedValue_8931_propertyIndex_1 ;
            var_propertyAccess_8697.getAssociatedValuesFor_storedProperty (extractedValue_8912_propertyType_0, extractedValue_8931_propertyIndex_1) ;
            GGS_string var_property_5F_llvmName_8993 ;
            {
            extensionSetter_newTempLLVMVar (ioArgument_ioTemporaries, var_property_5F_llvmName_8993, inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 210)) ;
            }
            {
            extensionSetter_appendGetUniversalPropertyReference (ioArgument_ioInstructionGenerationList, constinArgument_inSelfType, function_llvmNameForSelf (inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 213)), var_property_5F_llvmName_8993, extractedValue_8931_propertyIndex_1, extractedValue_8358_name_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 211)) ;
            }
            var_parameterList_5191.addAssign_operation (enumerator_5300.current_mEffectiveParameterKind (HERE), enumerator_5300.current_mSelector (HERE), extractedValue_8912_propertyType_0  COMMA_SOURCE_FILE ("effective-parameters.galgas", 218)) ;
            ioArgument_ioEffectiveParameterListIR.addAssign_operation (GGS_procEffectiveParameterPassingModeIR::class_func_outputInput (SOURCE_FILE ("effective-parameters.galgas", 219)), GGS_objectIR::class_func_reference (extractedValue_8912_propertyType_0, var_property_5F_llvmName_8993  COMMA_SOURCE_FILE ("effective-parameters.galgas", 219))  COMMA_SOURCE_FILE ("effective-parameters.galgas", 219)) ;
          }
          break ;
        case GGS_propertyGetterKind::Enumeration::enum_computedProperty:
          {
            GGS_unifiedTypeMapEntry extractedValue_9457__0 ;
            GGS_routineLLVMNameDict extractedValue_9457__1 ;
            var_propertyAccess_8697.getAssociatedValuesFor_computedProperty (extractedValue_9457__0, extractedValue_9457__1) ;
            TC_Array <FixItDescription> fixItArray5 ;
            inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("a computed property cannot be used as output / input parameter"), fixItArray5  COMMA_SOURCE_FILE ("effective-parameters.galgas", 221)) ;
          }
          break ;
        }
      }
      break ;
    }
    enumerator_5240.gotoNextObject () ;
    enumerator_5300.gotoNextObject () ;
  }
  GalgasBool test_6 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_6) {
    test_6 = GGS_bool (ComparisonKind::notEqual, constinArgument_inFormalSignature.getter_count (SOURCE_FILE ("effective-parameters.galgas", 226)).objectCompare (constinArgument_inEffectiveParameterList.getter_count (SOURCE_FILE ("effective-parameters.galgas", 226)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_6) {
      TC_Array <FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("this routine requires ").add_operation (constinArgument_inFormalSignature.getter_count (SOURCE_FILE ("effective-parameters.galgas", 227)).getter_string (SOURCE_FILE ("effective-parameters.galgas", 227)), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 227)).add_operation (GGS_string (" argument(s), this call names "), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 227)).add_operation (constinArgument_inEffectiveParameterList.getter_count (SOURCE_FILE ("effective-parameters.galgas", 228)).getter_string (SOURCE_FILE ("effective-parameters.galgas", 227)), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 227)).add_operation (GGS_string (" argument(s)"), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 228)), fixItArray7  COMMA_SOURCE_FILE ("effective-parameters.galgas", 227)) ;
    }
  }
  if (GalgasBool::boolFalse == test_6) {
    UpEnumerator_routineTypedSignature enumerator_9939 (constinArgument_inFormalSignature) ;
    UpEnumerator_procEffectiveParameterList enumerator_10020 (var_parameterList_5191) ;
    while (enumerator_9939.hasCurrentObject () && enumerator_10020.hasCurrentObject ()) {
      GalgasBool test_8 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_8) {
        test_8 = GGS_bool (ComparisonKind::notEqual, extensionGetter_type (enumerator_9939.current_mTypeProxy (HERE), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 231)).readProperty_omnibusTypeDescriptionName ().objectCompare (enumerator_10020.current_mParameterType (HERE).readProperty_omnibusTypeDescriptionName ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_8) {
          TC_Array <FixItDescription> fixItArray9 ;
          inCompiler->emitSemanticError (enumerator_10020.current_mSelector (HERE).readProperty_location (), GGS_string ("the actual parameter type is $").add_operation (enumerator_10020.current_mParameterType (HERE).readProperty_omnibusTypeDescriptionName (), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 232)).add_operation (GGS_string (", and is incompatible with the formal type $"), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 232)).add_operation (extensionGetter_key (enumerator_9939.current_mTypeProxy (HERE), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 233)), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 233)), fixItArray9  COMMA_SOURCE_FILE ("effective-parameters.galgas", 232)) ;
        }
      }
      GGS_string var_requiredPassingMode_10404 = extensionGetter_requiredActualPassingModeForSelector (enumerator_9939.current_mFormalArgumentPassingMode (HERE), enumerator_9939.current_mSelector (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 235)) ;
      GGS_string var_testedPassingMode_10527 = extensionGetter_passingModeForActualSelector (enumerator_10020.current_mEffectiveParameterPassingMode (HERE), enumerator_10020.current_mSelector (HERE), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 236)) ;
      GalgasBool test_10 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_10) {
        test_10 = GGS_bool (ComparisonKind::notEqual, var_requiredPassingMode_10404.objectCompare (var_testedPassingMode_10527)).boolEnum () ;
        if (GalgasBool::boolTrue == test_10) {
          TC_Array <FixItDescription> fixItArray11 ;
          inCompiler->emitSemanticError (enumerator_10020.current_mSelector (HERE).readProperty_location (), GGS_string ("the required selector is '").add_operation (var_requiredPassingMode_10404, inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 238)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 238)), fixItArray11  COMMA_SOURCE_FILE ("effective-parameters.galgas", 238)) ;
        }
      }
      enumerator_9939.gotoNextObject () ;
      enumerator_10020.gotoNextObject () ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Once function 'llvmAttributeFunction'
//
//--------------------------------------------------------------------------------------------------

static GGS_string onceFunction_llvmAttributeFunction (Compiler *
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string (" nounwind minsize optsize ") ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_llvmAttributeFunction = false ;
static GGS_string gOnceFunctionResult_llvmAttributeFunction ;

//--------------------------------------------------------------------------------------------------

GGS_string function_llvmAttributeFunction (class Compiler * inCompiler
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

static GGS_object functionWithGenericHeader_llvmAttributeFunction (Compiler * inCompiler,
                                                                   const cObjectArray & /* inEffectiveParameterArray */,
                                                                   const GGS_location & /* inErrorLocation */
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

static GGS_string onceFunction_staticAttribute (Compiler *
                                                COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("static") ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_staticAttribute = false ;
static GGS_string gOnceFunctionResult_staticAttribute ;

//--------------------------------------------------------------------------------------------------

GGS_string function_staticAttribute (class Compiler * inCompiler
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

static GGS_object functionWithGenericHeader_staticAttribute (Compiler * inCompiler,
                                                             const cObjectArray & /* inEffectiveParameterArray */,
                                                             const GGS_location & /* inErrorLocation */
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

static GGS_lstring onceFunction_compileTimeDeclarationBarrier (Compiler *
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring result_result ; // Returned variable
  result_result = GGS_string ("«compile time»").getter_nowhere (SOURCE_FILE ("generated-code-prefixes.galgas", 16)) ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_compileTimeDeclarationBarrier = false ;
static GGS_lstring gOnceFunctionResult_compileTimeDeclarationBarrier ;

//--------------------------------------------------------------------------------------------------

GGS_lstring function_compileTimeDeclarationBarrier (class Compiler * inCompiler
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

static GGS_object functionWithGenericHeader_compileTimeDeclarationBarrier (Compiler * inCompiler,
                                                                           const cObjectArray & /* inEffectiveParameterArray */,
                                                                           const GGS_location & /* inErrorLocation */
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

GGS_lstring function_registerGroupNameFromOmnibusName (const GGS_lstring & constinArgument_inName,
                                                       Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring result_result ; // Returned variable
  result_result = GGS_lstring::init_21__21_ (GGS_string ("registers ").add_operation (constinArgument_inName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 24)), constinArgument_inName.readProperty_location (), inCompiler COMMA_HERE) ;
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

static GGS_object functionWithGenericHeader_registerGroupNameFromOmnibusName (Compiler * inCompiler,
                                                                              const cObjectArray & inEffectiveParameterArray,
                                                                              const GGS_location & /* inErrorLocation */
                                                                              COMMA_LOCATION_ARGS) {
  const GGS_lstring operand0 = GGS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
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

GGS_string function_literalStringName (const GGS_uint & constinArgument_inIndex,
                                       Compiler * inCompiler
                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("@string.").add_operation (constinArgument_inIndex.getter_string (SOURCE_FILE ("generated-code-prefixes.galgas", 32)), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 32)) ;
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

static GGS_object functionWithGenericHeader_literalStringName (Compiler * inCompiler,
                                                               const cObjectArray & inEffectiveParameterArray,
                                                               const GGS_location & /* inErrorLocation */
                                                               COMMA_LOCATION_ARGS) {
  const GGS_uint operand0 = GGS_uint::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
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

GGS_string function_literalCharacterArrayName (const GGS_uint & constinArgument_inIndex,
                                               Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("@str.array.").add_operation (constinArgument_inIndex.getter_string (SOURCE_FILE ("generated-code-prefixes.galgas", 38)), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 38)) ;
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

static GGS_object functionWithGenericHeader_literalCharacterArrayName (Compiler * inCompiler,
                                                                       const cObjectArray & inEffectiveParameterArray,
                                                                       const GGS_location & /* inErrorLocation */
                                                                       COMMA_LOCATION_ARGS) {
  const GGS_uint operand0 = GGS_uint::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
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

GGS_lstring function_infixOperatorMapKey (const GGS_omnibusType & constinArgument_inLeftType,
                                          const GGS_omnibusInfixOperator & constinArgument_inInfixOperator,
                                          const GGS_location & constinArgument_inOperatorLocation,
                                          const GGS_omnibusType & constinArgument_inRightType,
                                          Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring result_result ; // Returned variable
  GGS_string var_s_1874 = constinArgument_inLeftType.readProperty_omnibusTypeDescriptionName ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 50)).add_operation (extensionGetter_string (constinArgument_inInfixOperator, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 50)), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 50)) ;
  var_s_1874.plusAssign_operation(GGS_string (" ").add_operation (constinArgument_inRightType.readProperty_omnibusTypeDescriptionName (), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 51)), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 51)) ;
  result_result = GGS_lstring::init_21__21_ (var_s_1874, constinArgument_inOperatorLocation, inCompiler COMMA_HERE) ;
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

static GGS_object functionWithGenericHeader_infixOperatorMapKey (Compiler * inCompiler,
                                                                 const cObjectArray & inEffectiveParameterArray,
                                                                 const GGS_location & /* inErrorLocation */
                                                                 COMMA_LOCATION_ARGS) {
  const GGS_omnibusType operand0 = GGS_omnibusType::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                   inCompiler
                                                                   COMMA_THERE) ;
  const GGS_omnibusInfixOperator operand1 = GGS_omnibusInfixOperator::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                                                     inCompiler
                                                                                     COMMA_THERE) ;
  const GGS_location operand2 = GGS_location::extractObject (inEffectiveParameterArray.objectAtIndex (2 COMMA_HERE),
                                                             inCompiler
                                                             COMMA_THERE) ;
  const GGS_omnibusType operand3 = GGS_omnibusType::extractObject (inEffectiveParameterArray.objectAtIndex (3 COMMA_HERE),
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

GGS_string function_infixOperatorFunctionName (const GGS_omnibusType & constinArgument_inLeftType,
                                               const GGS_omnibusInfixOperator & constinArgument_inOperator,
                                               const GGS_omnibusType & constinArgument_inRightType,
                                               Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("operator.").add_operation (constinArgument_inLeftType.readProperty_omnibusTypeDescriptionName (), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 62)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 62)) ;
  switch (constinArgument_inOperator.enumValue ()) {
  case GGS_omnibusInfixOperator::Enumeration::invalid:
    break ;
  case GGS_omnibusInfixOperator::Enumeration::enum_equal:
    {
      result_result.plusAssign_operation(GGS_string ("equal"), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 64)) ;
    }
    break ;
  case GGS_omnibusInfixOperator::Enumeration::enum_lessThan:
    {
      result_result.plusAssign_operation(GGS_string ("lessThan"), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 65)) ;
    }
    break ;
  case GGS_omnibusInfixOperator::Enumeration::enum_infEqual:
    {
      result_result.plusAssign_operation(GGS_string ("infEqual"), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 66)) ;
    }
    break ;
  case GGS_omnibusInfixOperator::Enumeration::enum_bitWiseAndOp:
    {
      result_result.plusAssign_operation(GGS_string ("bitWiseAnd"), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 67)) ;
    }
    break ;
  case GGS_omnibusInfixOperator::Enumeration::enum_bitWiseOrOp:
    {
      result_result.plusAssign_operation(GGS_string ("bitWiseOr"), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 68)) ;
    }
    break ;
  case GGS_omnibusInfixOperator::Enumeration::enum_bitWiseXorOp:
    {
      result_result.plusAssign_operation(GGS_string ("xor"), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 69)) ;
    }
    break ;
  case GGS_omnibusInfixOperator::Enumeration::enum_addOp:
    {
      result_result.plusAssign_operation(GGS_string ("add"), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 70)) ;
    }
    break ;
  case GGS_omnibusInfixOperator::Enumeration::enum_addOpNoOvf:
    {
      result_result.plusAssign_operation(GGS_string ("addOpNoOvf"), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 71)) ;
    }
    break ;
  case GGS_omnibusInfixOperator::Enumeration::enum_subOp:
    {
      result_result.plusAssign_operation(GGS_string ("sub"), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 72)) ;
    }
    break ;
  case GGS_omnibusInfixOperator::Enumeration::enum_subOpNoOvf:
    {
      result_result.plusAssign_operation(GGS_string ("subOpNoOvf"), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 73)) ;
    }
    break ;
  case GGS_omnibusInfixOperator::Enumeration::enum_mulOp:
    {
      result_result.plusAssign_operation(GGS_string ("mul"), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 74)) ;
    }
    break ;
  case GGS_omnibusInfixOperator::Enumeration::enum_mulOpNoOvf:
    {
      result_result.plusAssign_operation(GGS_string ("mulOpNoOvf"), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 75)) ;
    }
    break ;
  case GGS_omnibusInfixOperator::Enumeration::enum_divOp:
    {
      result_result.plusAssign_operation(GGS_string ("div"), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 76)) ;
    }
    break ;
  case GGS_omnibusInfixOperator::Enumeration::enum_divOpNoOvf:
    {
      result_result.plusAssign_operation(GGS_string ("divNoOvf"), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 77)) ;
    }
    break ;
  case GGS_omnibusInfixOperator::Enumeration::enum_modOp:
    {
      result_result.plusAssign_operation(GGS_string ("modulo"), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 78)) ;
    }
    break ;
  case GGS_omnibusInfixOperator::Enumeration::enum_modOpNoOvf:
    {
      result_result.plusAssign_operation(GGS_string ("moduloNoOvf"), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 79)) ;
    }
    break ;
  case GGS_omnibusInfixOperator::Enumeration::enum_leftShiftOp:
    {
      result_result.plusAssign_operation(GGS_string ("leftShift"), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 80)) ;
    }
    break ;
  case GGS_omnibusInfixOperator::Enumeration::enum_rightShiftOp:
    {
      result_result.plusAssign_operation(GGS_string ("rightShift"), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 81)) ;
    }
    break ;
  }
  result_result.plusAssign_operation(GGS_string (".").add_operation (constinArgument_inRightType.readProperty_omnibusTypeDescriptionName (), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 83)), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 83)) ;
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

static GGS_object functionWithGenericHeader_infixOperatorFunctionName (Compiler * inCompiler,
                                                                       const cObjectArray & inEffectiveParameterArray,
                                                                       const GGS_location & /* inErrorLocation */
                                                                       COMMA_LOCATION_ARGS) {
  const GGS_omnibusType operand0 = GGS_omnibusType::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                   inCompiler
                                                                   COMMA_THERE) ;
  const GGS_omnibusInfixOperator operand1 = GGS_omnibusInfixOperator::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                                                     inCompiler
                                                                                     COMMA_THERE) ;
  const GGS_omnibusType operand2 = GGS_omnibusType::extractObject (inEffectiveParameterArray.objectAtIndex (2 COMMA_HERE),
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

GGS_lstring function_prefixOperatorMapKey (const GGS_omnibusType & constinArgument_inReceiverType,
                                           const GGS_prefixOperator & constinArgument_inOperator,
                                           const GGS_location & constinArgument_inOperatorLocation,
                                           Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring result_result ; // Returned variable
  GGS_string var_s_3647 ;
  switch (constinArgument_inOperator.enumValue ()) {
  case GGS_prefixOperator::Enumeration::invalid:
    break ;
  case GGS_prefixOperator::Enumeration::enum_minusNoOvf:
    {
      var_s_3647 = GGS_string ("-%") ;
    }
    break ;
  case GGS_prefixOperator::Enumeration::enum_minusOp:
    {
      var_s_3647 = GGS_string ("-") ;
    }
    break ;
  case GGS_prefixOperator::Enumeration::enum_notOp:
    {
      var_s_3647 = GGS_string ("not") ;
    }
    break ;
  case GGS_prefixOperator::Enumeration::enum_bitWiseComplement:
    {
      var_s_3647 = GGS_string ("~") ;
    }
    break ;
  }
  var_s_3647.plusAssign_operation(GGS_string (" ").add_operation (constinArgument_inReceiverType.readProperty_omnibusTypeDescriptionName (), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 101)), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 101)) ;
  result_result = GGS_lstring::init_21__21_ (var_s_3647, constinArgument_inOperatorLocation, inCompiler COMMA_HERE) ;
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

static GGS_object functionWithGenericHeader_prefixOperatorMapKey (Compiler * inCompiler,
                                                                  const cObjectArray & inEffectiveParameterArray,
                                                                  const GGS_location & /* inErrorLocation */
                                                                  COMMA_LOCATION_ARGS) {
  const GGS_omnibusType operand0 = GGS_omnibusType::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                   inCompiler
                                                                   COMMA_THERE) ;
  const GGS_prefixOperator operand1 = GGS_prefixOperator::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                                         inCompiler
                                                                         COMMA_THERE) ;
  const GGS_location operand2 = GGS_location::extractObject (inEffectiveParameterArray.objectAtIndex (2 COMMA_HERE),
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

GGS_string function_prefixOperatorFunctionName (const GGS_omnibusType & constinArgument_inReceiverType,
                                                const GGS_prefixOperator & constinArgument_inOperator,
                                                Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("operator.") ;
  switch (constinArgument_inOperator.enumValue ()) {
  case GGS_prefixOperator::Enumeration::invalid:
    break ;
  case GGS_prefixOperator::Enumeration::enum_minusNoOvf:
    {
      result_result.plusAssign_operation(GGS_string ("minusNoOvf"), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 113)) ;
    }
    break ;
  case GGS_prefixOperator::Enumeration::enum_minusOp:
    {
      result_result.plusAssign_operation(GGS_string ("minus"), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 114)) ;
    }
    break ;
  case GGS_prefixOperator::Enumeration::enum_notOp:
    {
      result_result.plusAssign_operation(GGS_string ("not"), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 115)) ;
    }
    break ;
  case GGS_prefixOperator::Enumeration::enum_bitWiseComplement:
    {
      result_result.plusAssign_operation(GGS_string ("complement"), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 116)) ;
    }
    break ;
  }
  result_result.plusAssign_operation(GGS_string (".").add_operation (constinArgument_inReceiverType.readProperty_omnibusTypeDescriptionName (), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 118)), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 118)) ;
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

static GGS_object functionWithGenericHeader_prefixOperatorFunctionName (Compiler * inCompiler,
                                                                        const cObjectArray & inEffectiveParameterArray,
                                                                        const GGS_location & /* inErrorLocation */
                                                                        COMMA_LOCATION_ARGS) {
  const GGS_omnibusType operand0 = GGS_omnibusType::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                   inCompiler
                                                                   COMMA_THERE) ;
  const GGS_prefixOperator operand1 = GGS_prefixOperator::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
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

static GGS_string onceFunction_staticStringTypeName (Compiler *
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("literalString") ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_staticStringTypeName = false ;
static GGS_string gOnceFunctionResult_staticStringTypeName ;

//--------------------------------------------------------------------------------------------------

GGS_string function_staticStringTypeName (class Compiler * inCompiler
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

static GGS_object functionWithGenericHeader_staticStringTypeName (Compiler * inCompiler,
                                                                  const cObjectArray & /* inEffectiveParameterArray */,
                                                                  const GGS_location & /* inErrorLocation */
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

static GGS_string onceFunction_functionResultVariableName (Compiler *
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("result") ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_functionResultVariableName = false ;
static GGS_string gOnceFunctionResult_functionResultVariableName ;

//--------------------------------------------------------------------------------------------------

GGS_string function_functionResultVariableName (class Compiler * inCompiler
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

static GGS_object functionWithGenericHeader_functionResultVariableName (Compiler * inCompiler,
                                                                        const cObjectArray & /* inEffectiveParameterArray */,
                                                                        const GGS_location & /* inErrorLocation */
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

GGS_string function_llvmNameForFunction (const GGS_string & constinArgument_inName,
                                         Compiler *
                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
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

static GGS_object functionWithGenericHeader_llvmNameForFunction (Compiler * inCompiler,
                                                                 const cObjectArray & inEffectiveParameterArray,
                                                                 const GGS_location & /* inErrorLocation */
                                                                 COMMA_LOCATION_ARGS) {
  const GGS_string operand0 = GGS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
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

GGS_string function_getterLLVMName (const GGS_string & constinArgument_inReceiverLLVMTypeName,
                                    const GGS_string & constinArgument_inPropertyName,
                                    Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("get.").add_operation (constinArgument_inReceiverLLVMTypeName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 148)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 148)).add_operation (constinArgument_inPropertyName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 148)) ;
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

static GGS_object functionWithGenericHeader_getterLLVMName (Compiler * inCompiler,
                                                            const cObjectArray & inEffectiveParameterArray,
                                                            const GGS_location & /* inErrorLocation */
                                                            COMMA_LOCATION_ARGS) {
  const GGS_string operand0 = GGS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                         inCompiler
                                                         COMMA_THERE) ;
  const GGS_string operand1 = GGS_string::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
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

GGS_string function_setterLLVMName (const GGS_string & constinArgument_inReceiverLLVMTypeName,
                                    const GGS_string & constinArgument_inPropertyName,
                                    Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("set.").add_operation (constinArgument_inReceiverLLVMTypeName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 156)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 156)).add_operation (constinArgument_inPropertyName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 156)) ;
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

static GGS_object functionWithGenericHeader_setterLLVMName (Compiler * inCompiler,
                                                            const cObjectArray & inEffectiveParameterArray,
                                                            const GGS_location & /* inErrorLocation */
                                                            COMMA_LOCATION_ARGS) {
  const GGS_string operand0 = GGS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                         inCompiler
                                                         COMMA_THERE) ;
  const GGS_string operand1 = GGS_string::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
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

GGS_lstring function_llvmNameForServiceInterrupt (const GGS_lstring & constinArgument_inName,
                                                  Compiler * inCompiler
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring result_result ; // Returned variable
  result_result = GGS_lstring::init_21__21_ (GGS_string ("interrupt.service.").add_operation (constinArgument_inName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 164)), constinArgument_inName.readProperty_location (), inCompiler COMMA_HERE) ;
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

static GGS_object functionWithGenericHeader_llvmNameForServiceInterrupt (Compiler * inCompiler,
                                                                         const cObjectArray & inEffectiveParameterArray,
                                                                         const GGS_location & /* inErrorLocation */
                                                                         COMMA_LOCATION_ARGS) {
  const GGS_lstring operand0 = GGS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
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

GGS_string function_llvmNameForSectionInterrupt (const GGS_string & constinArgument_inName,
                                                 Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("interrupt.section.").add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 170)) ;
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

static GGS_object functionWithGenericHeader_llvmNameForSectionInterrupt (Compiler * inCompiler,
                                                                         const cObjectArray & inEffectiveParameterArray,
                                                                         const GGS_location & /* inErrorLocation */
                                                                         COMMA_LOCATION_ARGS) {
  const GGS_string operand0 = GGS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
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

GGS_string function_llvmNameForServiceCall (const GGS_string & constinArgument_inName,
                                            Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("service.user.").add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 178)).getter_assemblerRepresentation (SOURCE_FILE ("generated-code-prefixes.galgas", 178)) ;
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

static GGS_object functionWithGenericHeader_llvmNameForServiceCall (Compiler * inCompiler,
                                                                    const cObjectArray & inEffectiveParameterArray,
                                                                    const GGS_location & /* inErrorLocation */
                                                                    COMMA_LOCATION_ARGS) {
  const GGS_string operand0 = GGS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
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

GGS_string function_llvmNameForServiceImplementation (const GGS_string & constinArgument_inName,
                                                      Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("service.implementation.").add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 184)).getter_assemblerRepresentation (SOURCE_FILE ("generated-code-prefixes.galgas", 184)) ;
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

static GGS_object functionWithGenericHeader_llvmNameForServiceImplementation (Compiler * inCompiler,
                                                                              const cObjectArray & inEffectiveParameterArray,
                                                                              const GGS_location & /* inErrorLocation */
                                                                              COMMA_LOCATION_ARGS) {
  const GGS_string operand0 = GGS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
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

GGS_string function_llvmNameForSectionCall (const GGS_string & constinArgument_inName,
                                            Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("section.user.").add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 192)).getter_assemblerRepresentation (SOURCE_FILE ("generated-code-prefixes.galgas", 192)) ;
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

static GGS_object functionWithGenericHeader_llvmNameForSectionCall (Compiler * inCompiler,
                                                                    const cObjectArray & inEffectiveParameterArray,
                                                                    const GGS_location & /* inErrorLocation */
                                                                    COMMA_LOCATION_ARGS) {
  const GGS_string operand0 = GGS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
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

GGS_string function_llvmNameForSectionImplementation (const GGS_string & constinArgument_inName,
                                                      Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("section.implementation.").add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 198)).getter_assemblerRepresentation (SOURCE_FILE ("generated-code-prefixes.galgas", 198)) ;
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

static GGS_object functionWithGenericHeader_llvmNameForSectionImplementation (Compiler * inCompiler,
                                                                              const cObjectArray & inEffectiveParameterArray,
                                                                              const GGS_location & /* inErrorLocation */
                                                                              COMMA_LOCATION_ARGS) {
  const GGS_string operand0 = GGS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
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

static GGS_string onceFunction_acceptVariableOmnibusName (Compiler *
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("accept") ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_acceptVariableOmnibusName = false ;
static GGS_string gOnceFunctionResult_acceptVariableOmnibusName ;

//--------------------------------------------------------------------------------------------------

GGS_string function_acceptVariableOmnibusName (class Compiler * inCompiler
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

static GGS_object functionWithGenericHeader_acceptVariableOmnibusName (Compiler * inCompiler,
                                                                       const cObjectArray & /* inEffectiveParameterArray */,
                                                                       const GGS_location & /* inErrorLocation */
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

static GGS_string onceFunction_waitForGuardChangeFunctionName (Compiler *
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("guard.wait.for.change") ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_waitForGuardChangeFunctionName = false ;
static GGS_string gOnceFunctionResult_waitForGuardChangeFunctionName ;

//--------------------------------------------------------------------------------------------------

GGS_string function_waitForGuardChangeFunctionName (class Compiler * inCompiler
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

static GGS_object functionWithGenericHeader_waitForGuardChangeFunctionName (Compiler * inCompiler,
                                                                            const cObjectArray & /* inEffectiveParameterArray */,
                                                                            const GGS_location & /* inErrorLocation */
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

GGS_string function_llvmNameForLocalVariable (const GGS_string & constinArgument_inName,
                                              Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("%").add_operation (GGS_string ("var.").add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 220)).getter_assemblerRepresentation (SOURCE_FILE ("generated-code-prefixes.galgas", 220)), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 220)) ;
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

static GGS_object functionWithGenericHeader_llvmNameForLocalVariable (Compiler * inCompiler,
                                                                      const cObjectArray & inEffectiveParameterArray,
                                                                      const GGS_location & /* inErrorLocation */
                                                                      COMMA_LOCATION_ARGS) {
  const GGS_string operand0 = GGS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
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

static GGS_string onceFunction_llvmNameForSelf (Compiler *
                                                COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("%self") ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_llvmNameForSelf = false ;
static GGS_string gOnceFunctionResult_llvmNameForSelf ;

//--------------------------------------------------------------------------------------------------

GGS_string function_llvmNameForSelf (class Compiler * inCompiler
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

static GGS_object functionWithGenericHeader_llvmNameForSelf (Compiler * inCompiler,
                                                             const cObjectArray & /* inEffectiveParameterArray */,
                                                             const GGS_location & /* inErrorLocation */
                                                             COMMA_LOCATION_ARGS) {
  return function_llvmNameForSelf (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_llvmNameForSelf ("llvmNameForSelf",
                                                                 functionWithGenericHeader_llvmNameForSelf,
                                                                 & kTypeDescriptor_GALGAS_string,
                                                                 0,
                                                                 functionArgs_llvmNameForSelf) ;

